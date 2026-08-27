/**
 * Burnout 3 - Recompiled code chunk 40
 * Functions: 250 (0x003751C0 - 0x00390410)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003751C0
 * Original: 0x003751C0 - 0x003752EF (303 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003751C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003751C0: ;
    esp = esp - 0x3C;
    eax = MEM32(esp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x34) = edi;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003752E2; /* je: equal / zero */

loc_003751DE: ;
    ecx = MEM32(0x84A5F8);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + ecx;
    ecx = MEM32(0x84B330);
    ebx = eax + ecx + 0x38;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(ebx, edi)) goto loc_00375210; /* je: equal / zero */

loc_00375206: ;
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) & 0xDFFFFFFFu;

loc_00375210: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_00375217: ;
    edx = ZX16(MEM16(esi + 0x410));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x6C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_00375231: ;
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x50) = esi;
    PUSH32(esp, 0); sub_003748D0(); /* call 0x003748D0 */

loc_00375250: ;
    ecx = MEM32(esp + 0xA8);
    esp = esp + 0x30;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00375267; /* je: equal / zero */

loc_00375262: ;
    MEM16(ecx) = 0;

loc_00375267: ;
    edx = MEM32(esp + 0x64);
    edi = MEM32(esp + 0x74);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003750D0(); /* call 0x003750D0 */

loc_0037527C: ;
    edi = eax;
    esp = esp + 0x10;
    (void)0; /* cmp edi, 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_NE(edi, 0xFFFF)) { sub_003752EF(); return; } /* jne: not equal / not zero */

loc_0037528D: ;
    if (TEST_Z(ebx, ebx)) goto loc_0037529B; /* je: equal / zero */

loc_00375291: ;
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) | 0x20000000;

loc_0037529B: ;
    eax = MEM32(esp + 0x70);
    if (TEST_Z(eax, eax)) goto loc_003752AF; /* je: equal / zero */

loc_003752A3: ;
    xmm0 = MEMF(0x6493BC); /* movss */
    MEMF(eax) = xmm0; /* movss */

loc_003752AF: ;
    eax = MEM32(esp + 0x6C);
    if (TEST_Z(eax, eax)) goto loc_003752BF; /* je: equal / zero */

loc_003752B7: ;
    SET_LO16(ecx, MEM16(esp + 0x54));
    MEM16(eax) = LO16(ecx);

loc_003752BF: ;
    eax = MEM32(esp + 0x68);
    if (TEST_Z(eax, eax)) goto loc_003752D8; /* je: equal / zero */

loc_003752C7: ;
    edx = MEM32(ebp);
    MEM32(eax) = edx;
    ecx = MEM32(ebp + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebp + 8);
    MEM32(eax + 8) = edx;

loc_003752D8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

loc_003752E2: ;
    esi = 0; /* xor self */
    MEM32(esp + 0x18) = edi;
    ebx = edi;
    goto loc_00375210;

}

/**
 * sub_00375810
 * Original: 0x00375810 - 0x00375851 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00375810: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(esp + 0x1C);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) { sub_00375851(); return; } /* je: equal / zero */

loc_00375821: ;
    esi = MEM32(0x84A5F8);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    edx = MEM32(edx + esi + 0x238);
    esi = MEM32(edx);
    MEM32(esp + 0x10) = eax;
    eax = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    eax = eax + eax + 2;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x10);
    g_seh_ebp = ebp; sub_00375859(); return; /* tail jmp 0x00375859 */

}

/**
 * sub_00375A30
 * Original: 0x00375A30 - 0x00375A68 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00375A30: ;
    eax = MEM32(0x84B0E0);
    PUSH32(esp, ebx);
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(esp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(esp + 0x18));
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    SET_LO8(ecx, MEM8(esi + eax + 0x33));
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x38);
    esi = esi + eax;
    ebx = ebx + eax;
    SET_LO8(eax, 0x2A);
    if (CMP_NE(LO8(ecx), LO8(eax))) { sub_00375A68(); return; } /* jne: not equal / not zero */

loc_00375A5E: ;
    if (CMP_NE(MEM8(ebx + 0x33), LO8(eax))) { sub_00375A68(); return; } /* jne: not equal / not zero */

loc_00375A63: ;
    xmm3 = xmm4; /* movaps */
    g_seh_ebp = ebp; sub_00375A75(); return; /* tail jmp 0x00375A75 */

}

/**
 * sub_00375BD0
 * Original: 0x00375BD0 - 0x00375C10 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00375BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    eax = 0x217C;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00375BE0: ;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(ebp + 8));
    PUSH32(esp, esi);
    esi = edx;
    SET_LO8(edx, MEM8(ebp + 0xC));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) { sub_00375C10(); return; } /* je: equal / zero */

loc_00375BFF: ;
    eax = MEM32(0x84B330);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8CC);
    ecx = ecx + eax + 0x38;
    g_seh_ebp = ebp; sub_00375C12(); return; /* tail jmp 0x00375C12 */

}

/**
 * sub_00376370
 * Original: 0x00376370 - 0x003763B3 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376370: ;
    esp = esp - 0x3C;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax + MEM32(0x84B0E0);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x84B330);
    edx = MEM32(eax + 0x8DF8);
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(edx + ecx));
    SET_LO8(edx, MEM8(esp + 0x58));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_003763B3(); return; } /* je: equal / zero */

loc_0037639C: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x84B0E4);
    eax = MEM32(eax + 0x145B4);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = ecx;
    g_seh_ebp = ebp; sub_003763D9(); return; /* tail jmp 0x003763D9 */

}

/**
 * sub_00376550
 * Original: 0x00376550 - 0x003765E3 (147 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376550(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00376550: ;
    esp = esp - 0xC;
    eax = MEM32(0x84B284);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003765DF; /* je: equal / zero */

loc_00376579: ;
    if (CMP_GE(MEM8(0x801892), 0x40)) goto loc_003765DF; /* jge: greater or equal (signed >=) */

loc_00376582: ;
    SET_LO8(ecx, MEM8(0x801893));
    edx = MEM32(0x84B27C);
    xmm0 = MEMF(esp + 0x18); /* movss */
    eax = SX8(LO8(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + edx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 4);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x6491EC); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    SET_LO8(ecx, LO8(ecx) + 1);
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEM8(eax + 0x18) = 0xFF;
    MEM8(0x801893) = LO8(ecx);
    POP32(esp, esi);

loc_003765DF: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003765F0
 * Original: 0x003765F0 - 0x003766F4 (260 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003765F0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003765F0: ;
    SET_LO8(eax, MEM8(0x84B316));
    esp = esp - 0x20;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003766F0; /* je: equal / zero */

loc_00376600: ;
    eax = MEM32(0x847104);
    ecx = MEM32(eax + 4);
    (void)0; /* test HI8(ecx), 0x10 - flags set for next jcc */
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    if (TEST_Z(HI8(ecx), 0x10)) goto loc_00376644; /* je: equal / zero */

loc_00376614: ;
    edx = ecx + 0x78;
    eax = MEM32(edx);
    MEM32(0x84B31C) = eax;
    eax = MEM32(edx + 4);
    MEM32(0x84B320) = eax;
    edx = MEM32(edx + 8);
    MEM32(0x84B324) = edx;
    eax = MEM32(ecx + 0x568);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0x498);
    MEM32(0x74D818) = edi;
    goto loc_0037664A;

loc_00376644: ;
    edi = MEM32(0x74D818);

loc_0037664A: ;
    edx = ecx + 0x78;
    eax = MEM32(edx);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x568);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = edx;
    SET_LO16(esi, MEM16(eax + 0x498));
    if (CMP_EQ(LO16(esi), 0xFFFFFFFFu)) goto loc_003766EE; /* je: equal / zero */

loc_00376675: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_003766EE; /* je: equal / zero */

loc_0037667A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM8(0x84B340) = 1;
    PUSH32(esp, 0); sub_0033C930(); /* call 0x0033C930 */

loc_00376699: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x84B31C);
    eax = esp + 0x34;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003751C0(); /* call 0x003751C0 */

loc_003766AD: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    esp = esp + 0x24;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x63D6E4);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x64);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_003766C7: ;
    PUSH32(esp, 0x63D6D8);
    eax = 0x84B31C;
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_003766D6: ;
    PUSH32(esp, 0x63D708);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_0036F700(); /* call 0x0036F700 */

loc_003766E4: ;
    esp = esp + 0x1C;
    MEM8(0x84B340) = 0;

loc_003766EE: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_003766F0: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00376700
 * Original: 0x00376700 - 0x003768FD (509 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376700: ;
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_A(eax, 8)) { sub_003768FD(); return; } /* ja: above (unsigned >) */

loc_0037670E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x376904); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00376715u) goto loc_00376715;
    if (_jt == 0x00376740u) goto loc_00376740;
    if (_jt == 0x00376769u) goto loc_00376769;
    if (_jt == 0x00376793u) goto loc_00376793;
    if (_jt == 0x003767BAu) goto loc_003767BA;
    if (_jt == 0x0037681Bu) goto loc_0037681B;
    if (_jt == 0x0037687Fu) goto loc_0037687F;
    if (_jt == 0x003768BFu) goto loc_003768BF;
    if (_jt == 0x003768DEu) goto loc_003768DE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00376715: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x847024);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x3C);
    eax = eax & 0xFFF;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_00376739: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00376740: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    eax = eax & 0xFFF;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00020370(); /* call 0x00020370 */

loc_00376762: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00376769: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, 1);
    ecx = ecx & 0xFFF;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    PUSH32(esp, 0); sub_00020370(); /* call 0x00020370 */

loc_0037678C: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00376793: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x3C);
    edx = edx & 0xFFF;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001FEB0(); /* call 0x0001FEB0 */

loc_003767B3: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003767BA: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003767BF: ;
    (void)0; /* cmp MEM32(eax + 0x8004), 5 - flags set for next jcc */
    eax = MEM32(0x847024);
    if (CMP_NE(MEM32(eax + 0x8004), 5)) goto loc_003767F5; /* jne: not equal / not zero */

loc_003767CD: ;
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    edx = edx & 0xFFF;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00020030(); /* call 0x00020030 */

loc_003767F0: ;
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003767F5: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 8);
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    edx = edx & 0xFFF;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, 0); sub_00020030(); /* call 0x00020030 */

loc_00376816: ;
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037681B: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376820: ;
    ecx = MEM32(eax + 0x8004);
    eax = MEM32(0x847024);
    (void)0; /* cmp ecx, 5 - flags set for next jcc */
    ecx = MEM32(eax + 0x3C);
    if (CMP_NE(ecx, 5)) goto loc_0037685E; /* jne: not equal / not zero */

loc_00376833: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x10);
    edx = edx & 0xFFF;
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    edx = edx & 0xFFF;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00020530(); /* call 0x00020530 */

loc_00376859: ;
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037685E: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx + 8);
    eax = eax & 0xFFF;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00020530(); /* call 0x00020530 */

loc_0037687A: ;
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037687F: ;
    esi = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376889: ;
    if (CMP_NE(MEM32(eax + 0x8004), 3)) goto loc_00376899; /* jne: not equal / not zero */

loc_00376892: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx + 8);

loc_00376899: ;
    ecx = MEM32(0x847024);
    eax = MEM32(esp + 8);
    (void)0; /* cmp esi, 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(esi, 1)) ? 1 : 0); /* sete */
    eax = eax & 0xFFF;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0001FAC0(); /* call 0x0001FAC0 */

loc_003768B8: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003768BF: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x847024);
    eax = eax & 0xFFF;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, 0); sub_0001F8F0(); /* call 0x0001F8F0 */

loc_003768D7: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003768DE: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x3C);
    edx = edx & 0xFFF;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0001F8F0(); /* call 0x0001F8F0 */

loc_003768F6: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003769F0
 * Original: 0x003769F0 - 0x00377022 (1586 bytes, 553 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003769F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003769F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    SET_LO8(edx, MEM8(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00376A01: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00377016; /* je: equal / zero */

loc_00376A0B: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_A(eax, 0x18)) goto loc_00377016; /* ja: above (unsigned >) */

loc_00376A17: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x377024); /* switch: 25 entries, 25 targets */
    if (_jt == 0x00376A1Eu) goto loc_00376A1E;
    if (_jt == 0x00376A45u) goto loc_00376A45;
    if (_jt == 0x00376A5Au) goto loc_00376A5A;
    if (_jt == 0x00376A9Cu) goto loc_00376A9C;
    if (_jt == 0x00376AECu) goto loc_00376AEC;
    if (_jt == 0x00376B5Cu) goto loc_00376B5C;
    if (_jt == 0x00376B9Au) goto loc_00376B9A;
    if (_jt == 0x00376BB5u) goto loc_00376BB5;
    if (_jt == 0x00376BE6u) goto loc_00376BE6;
    if (_jt == 0x00376C24u) goto loc_00376C24;
    if (_jt == 0x00376C5Cu) goto loc_00376C5C;
    if (_jt == 0x00376C6Fu) goto loc_00376C6F;
    if (_jt == 0x00376CB7u) goto loc_00376CB7;
    if (_jt == 0x00376CDEu) goto loc_00376CDE;
    if (_jt == 0x00376D23u) goto loc_00376D23;
    if (_jt == 0x00376D74u) goto loc_00376D74;
    if (_jt == 0x00376DBCu) goto loc_00376DBC;
    if (_jt == 0x00376DD6u) goto loc_00376DD6;
    if (_jt == 0x00376DEEu) goto loc_00376DEE;
    if (_jt == 0x00376E7Au) goto loc_00376E7A;
    if (_jt == 0x00376F0Cu) goto loc_00376F0C;
    if (_jt == 0x00376F37u) goto loc_00376F37;
    if (_jt == 0x00376F5Fu) goto loc_00376F5F;
    if (_jt == 0x00377008u) goto loc_00377008;
    if (_jt == 0x00377016u) goto loc_00377016;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00376A1E: ;
    eax = MEM32(edi + 0x88);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(edi + 0xC2) = 0;
    if (TEST_Z(eax, eax)) goto loc_00376A36; /* je: equal / zero */

loc_00376A2F: ;
    MEM8(edi + 0xC3) = MEM8(edi + 0xC3) | 0xF;

loc_00376A36: ;
    eax = 1;
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376A45: ;
    eax = 1;
    MEM8(edi + 0xC2) = LO8(eax);
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376A5A: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 8);
    edx = 0x7FFFFFFF;
    if (CMP_EQ(ecx, edx)) goto loc_00376A6D; /* je: equal / zero */

loc_00376A69: ;
    MEM16(edi + 0x14) = LO16(ecx);

loc_00376A6D: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_EQ(ecx, edx)) goto loc_00376A78; /* je: equal / zero */

loc_00376A74: ;
    MEM16(edi + 0x16) = LO16(ecx);

loc_00376A78: ;
    ecx = MEM32(eax + 0x10);
    if (CMP_EQ(ecx, edx)) goto loc_00376A86; /* je: equal / zero */

loc_00376A7F: ;
    SET_LO16(edx, LO16(ecx));
    MEM16(edi + 0x18) = LO16(edx);

loc_00376A86: ;
    eax = edi;
    PUSH32(esp, 0); sub_0006B3D0(); /* call 0x0006B3D0 */

loc_00376A8D: ;
    eax = 1;
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376A9C: ;
    ebx = MEM32(ebp + 0x10);
    esi = MEM32(ebx + 8);
    PUSH32(esp, 0); sub_0034B300(); /* call 0x0034B300 */

loc_00376AA7: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00376ADD; /* je: equal / zero */

loc_00376AAC: ;
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    edx = ebp + -8;
    PUSH32(esp, 0); sub_0034B2A0(); /* call 0x0034B2A0 */

loc_00376ABB: ;
    edx = (int32_t)MEMF(ebp + -12); /* cvttss2si */
    eax = (int32_t)MEMF(ebp + -8); /* cvttss2si */
    ecx = (int32_t)MEMF(ebp + -4); /* cvttss2si */
    esp = esp + 4;
    MEM16(edi + 0x14) = LO16(edx);
    SET_LO16(eax, LO16(eax) + MEM16(ebx + 0xC));
    MEM16(edi + 0x18) = LO16(ecx);
    MEM16(edi + 0x16) = LO16(eax);

loc_00376ADD: ;
    eax = 1;
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376AEC: ;
    ecx = MEM32(ebp + 0x10);
    xmm0 = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    xmm1 = MEMF(0x64B128); /* movss */
    xmm2 = MEMF(0x648D48); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00376B19; /* jnp: not parity */

loc_00376B0D: ;
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(edi + 0xD8) = xmm0; /* movss */

loc_00376B19: ;
    xmm0 = (float)(int32_t)MEM32(ecx + 0xC); /* cvtsi2ss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00376B33; /* jnp: not parity */

loc_00376B27: ;
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(edi + 0xDC) = xmm0; /* movss */

loc_00376B33: ;
    xmm0 = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00376B4D; /* jnp: not parity */

loc_00376B41: ;
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(edi + 0xE0) = xmm0; /* movss */

loc_00376B4D: ;
    eax = 1;
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376B5C: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx + 8);
    edx = 0x7FFFFFFF;
    if (CMP_EQ(eax, edx)) goto loc_00376B71; /* je: equal / zero */

loc_00376B6B: ;
    MEM32(edi + 0xD8) = eax;

loc_00376B71: ;
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_00376B7E; /* je: equal / zero */

loc_00376B78: ;
    MEM32(edi + 0xDC) = eax;

loc_00376B7E: ;
    eax = MEM32(ecx + 0x10);
    if (CMP_EQ(eax, edx)) goto loc_00376B8B; /* je: equal / zero */

loc_00376B85: ;
    MEM32(edi + 0xE0) = eax;

loc_00376B8B: ;
    eax = 1;
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376B9A: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx + 8);
    MEM32(edi + 0x8C) = eax;
    eax = 1;
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376BB5: ;
    SET_LO8(ebx, MEM8(edi + 0xC7));
    ecx = MEM32(ebp + 0x10);
    SET_LO8(ebx, LO8(ebx) & 0xFC);
    MEM8(edi + 0xC7) = LO8(ebx);
    SET_LO8(edx, MEM8(ecx + 8));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 3);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM8(edi + 0xC7) = LO8(edx);
    eax = 1;
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376BE6: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0xC7));
    if (TEST_Z(ecx, ecx)) goto loc_00376C0D; /* je: equal / zero */

loc_00376BF6: ;
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(edi + 0xC7) = LO8(eax);
    eax = 1;
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376C0D: ;
    SET_LO8(eax, LO8(eax) & 0xFB);
    MEM8(edi + 0xC7) = LO8(eax);
    eax = 1;
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376C24: ;
    eax = MEM32(ebp + 0x10);
    MEM16(edi + 0x8E) = 0;
    ecx = MEM32(eax + 8);
    edx = MEM32(edi + 0x8C);
    ecx = ecx << 0x10;
    edx = edx | ecx;
    MEM32(edi + 0x8C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xD8) = edx;
    eax = 1;
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376C5C: ;
    esi = edi;
    PUSH32(esp, 0); sub_000C3810(); /* call 0x000C3810 */

loc_00376C63: ;
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376C6F: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 8);
    ecx = ecx + ecx * 8;
    edx = MEM32(ecx * 4 + 0x58C1F0);
    MEM32(edi + 0x88) = edx;
    ecx = MEM32(eax + 8);
    ecx = ecx + ecx * 8;
    edx = MEM32(ecx * 4 + 0x58C1F4);
    MEM32(edi + 0xD4) = edx;
    eax = MEM32(eax + 8);
    eax = eax + eax * 8;
    SET_LO8(ecx, MEM8(eax * 4 + 0x58C1FC));
    MEM8(edi + 0xF6) = LO8(ecx);
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376CB7: ;
    eax = MEM32(ebp + 0x10);
    SET_LO8(edx, MEM8(eax + 0xC));
    SET_LO8(ebx, MEM8(edi + 0x9F));
    SET_LO8(ecx, MEM8(eax + 8));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    MEM8(edi + 0x9F) = LO8(edx);
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376CDE: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 8);
    edx = 0x7FFFFFFF;
    if (CMP_EQ(ecx, edx)) goto loc_00376CF4; /* je: equal / zero */

loc_00376CED: ;
    MEM16(edi + 0xAC) = LO16(ecx);

loc_00376CF4: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_EQ(ecx, edx)) goto loc_00376D02; /* je: equal / zero */

loc_00376CFB: ;
    MEM16(edi + 0xAE) = LO16(ecx);

loc_00376D02: ;
    ecx = MEM32(eax + 0x10);
    if (CMP_EQ(ecx, edx)) goto loc_00377016; /* je: equal / zero */

loc_00376D0D: ;
    SET_LO16(edx, LO16(ecx));
    MEM16(edi + 0xB0) = LO16(edx);
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376D23: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx + 8);
    edx = 0x7FFFFFFF;
    if (CMP_EQ(eax, edx)) goto loc_00376D3E; /* je: equal / zero */

loc_00376D32: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0xB4) = xmm0; /* movss */

loc_00376D3E: ;
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_00376D51; /* je: equal / zero */

loc_00376D45: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0xB8) = xmm0; /* movss */

loc_00376D51: ;
    eax = MEM32(ecx + 0x10);
    if (CMP_EQ(eax, edx)) goto loc_00377016; /* je: equal / zero */

loc_00376D5C: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0xBC) = xmm0; /* movss */
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376D74: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx + 8);
    edx = 0x7FFFFFFF;
    if (CMP_EQ(eax, edx)) goto loc_00376D8C; /* je: equal / zero */

loc_00376D83: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 4) = xmm0; /* movss */

loc_00376D8C: ;
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_00376D9C; /* je: equal / zero */

loc_00376D93: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */

loc_00376D9C: ;
    eax = MEM32(ecx + 0x10);
    if (CMP_EQ(eax, edx)) goto loc_00377016; /* je: equal / zero */

loc_00376DA7: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0xC) = xmm0; /* movss */
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376DBC: ;
    eax = MEM32(ebp + 0x10);
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(edi + 0xEC) = LO16(ecx);
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376DD6: ;
    edx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(edx + 8));
    MEM8(edi + 0xEE) = LO8(eax);
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376DEE: ;
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = 3;
    if (TEST_NZ(eax, eax)) goto loc_00376E3A; /* jne: not equal / not zero */

loc_00376DFD: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376E02: ;
    if (CMP_LE(MEM32(eax + 0x8004), esi)) goto loc_00377016; /* jle: less or equal (signed <=) */

loc_00376E0E: ;
    edi = edi;

loc_00376E10: ;
    ecx = MEM32(ebx + esi * 4);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 1);
    eax = edi;
    PUSH32(esp, 0); sub_0006B250(); /* call 0x0006B250 */

loc_00376E1D: ;
    esp = esp + 4;
    esi++;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376E26: ;
    if (CMP_L(esi, MEM32(eax + 0x8004))) goto loc_00376E10; /* jl: less (signed <) */

loc_00376E2E: ;
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376E3A: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376E3F: ;
    if (CMP_LE(MEM32(eax + 0x8004), 3)) goto loc_00377016; /* jle: less or equal (signed <=) */

loc_00376E4C: ;
    /* nop */

loc_00376E50: ;
    edx = MEM32(ebx + esi * 4);
    PUSH32(esp, edx);
    SET_LO8(ecx, 0); /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_0006B250(); /* call 0x0006B250 */

loc_00376E5D: ;
    esp = esp + 4;
    esi++;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376E66: ;
    if (CMP_L(esi, MEM32(eax + 0x8004))) goto loc_00376E50; /* jl: less (signed <) */

loc_00376E6E: ;
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376E7A: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = 3;
    if (TEST_NZ(ecx, ecx)) goto loc_00376ECC; /* jne: not equal / not zero */

loc_00376E89: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376E8E: ;
    if (CMP_LE(MEM32(eax + 0x8004), esi)) goto loc_00377016; /* jle: less or equal (signed <=) */

loc_00376E9A: ;
    /* nop */

loc_00376EA0: ;
    ecx = MEM32(ebp + 0x10);
    ebx = MEM32(ecx + esi * 4);
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0); sub_0006B270(); /* call 0x0006B270 */

loc_00376EAF: ;
    esp = esp + 4;
    esi++;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376EB8: ;
    if (CMP_L(esi, MEM32(eax + 0x8004))) goto loc_00376EA0; /* jl: less (signed <) */

loc_00376EC0: ;
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376ECC: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376ED1: ;
    if (CMP_LE(MEM32(eax + 0x8004), esi)) goto loc_00377016; /* jle: less or equal (signed <=) */

loc_00376EDD: ;
    /* nop */

loc_00376EE0: ;
    edx = MEM32(ebp + 0x10);
    ebx = MEM32(edx + esi * 4);
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0); sub_0006B270(); /* call 0x0006B270 */

loc_00376EEF: ;
    esp = esp + 4;
    esi++;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376EF8: ;
    if (CMP_L(esi, MEM32(eax + 0x8004))) goto loc_00376EE0; /* jl: less (signed <) */

loc_00376F00: ;
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376F0C: ;
    SET_LO8(edx, MEM8(edi + 0x9F));
    ecx = MEM32(ebp + 0x10);
    SET_LO8(edx, LO8(edx) & 0x9F);
    MEM8(edi + 0x9F) = LO8(edx);
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, MEM8(ecx + 8));
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM8(edi + 0x9F) = LO8(edx);
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376F37: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = (float)(int32_t)MEM32(eax + 0xC); /* cvtsi2ss */
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_00073CC0(); /* call 0x00073CC0 */

loc_00376F50: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00376F5F: ;
    SET_LO8(eax, MEM8(edi + 0xC2));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00377016; /* jne: not equal / not zero */

loc_00376F6D: ;
    esi = MEM32(ebp + 0x10);
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -16) = edx;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00376F81: ;
    ebx = MEM32(eax + 0x8004);
    ebx = ebx - 4;
    eax = ebx * 4 + 4;
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_00376F9C: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    eax = esp;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = 0;
    if (CMP_LE(ebx & ebx, 0)) goto loc_00376FDF; /* jle: less or equal (signed <=) */

loc_00376FAC: ;
    esi = esi + 0x10;
    MEM32(ebp + -4) = esi;

loc_00376FB2: ;
    eax = MEM32(ebp + -4);
    esi = MEM32(eax);
    esi = esi & 0xFFFF0FFFu;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00376FC2: ;
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -12);
    MEM32(edx + ecx * 4) = eax;
    edx = MEM32(ebp + -4);
    ecx++;
    edx = edx + 4;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = edx;
    if (CMP_L(ecx, ebx)) goto loc_00376FB2; /* jl: less (signed <) */

loc_00376FDC: ;
    eax = MEM32(ebp + -12);

loc_00376FDF: ;
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -16);
    MEM32(eax + ecx * 4) = 0;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    esi = edi;
    PUSH32(esp, 0); sub_00073D90(); /* call 0x00073D90 */

loc_00376FF9: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00377008: ;
    edx = edi + 0x20;
    PUSH32(esp, edx);
    edx = edi;
    PUSH32(esp, 0); sub_0006AD30(); /* call 0x0006AD30 */

loc_00377013: ;
    esp = esp + 4;

loc_00377016: ;
    eax = 0; /* xor self */
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003775E0
 * Original: 0x003775E0 - 0x003776C2 (226 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003775E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003775E0: ;
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_A(eax, 4)) goto loc_0037769F; /* ja: above (unsigned >) */

loc_003775EF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3776C4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x003775F6u) goto loc_003775F6;
    if (_jt == 0x0037761Bu) goto loc_0037761B;
    if (_jt == 0x0037763Au) goto loc_0037763A;
    if (_jt == 0x00377642u) goto loc_00377642;
    if (_jt == 0x00377685u) goto loc_00377685;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003775F6: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 8);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00377608: ;
    if (TEST_Z(eax, eax)) goto loc_00377613; /* je: equal / zero */

loc_0037760C: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00021560(); /* call 0x00021560 */

loc_00377613: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0037761B: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx + 8);
    esi = esi & 0xFFF;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_0037762D: ;
    if (TEST_Z(eax, eax)) goto loc_0037763A; /* je: equal / zero */

loc_00377631: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000215C0(); /* call 0x000215C0 */

loc_00377637: ;
    esp = esp + 4;

loc_0037763A: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377642: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003776BD; /* je: equal / zero */

loc_0037764B: ;
    eax = MEM32(0x8470DC);
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) goto loc_003776BD; /* je: equal / zero */

loc_0037765A: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    (void)0; /* test edi, edi - flags set for next jcc */
    edi = MEM32(ecx + 8);
    SET_LO8(edx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0); sub_00021900(); /* call 0x00021900 */

loc_00377679: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377685: ;
    ecx = MEM32(0x847024);
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 8);
    ebx = MEM32(ecx + 0x40);
    PUSH32(esp, 0); sub_00025540(); /* call 0x00025540 */

loc_0037769A: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0037769F: ;
    SET_LO8(ecx, MEM8(0x846FF8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003776BD; /* je: equal / zero */

loc_003776A9: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D8EC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_003776BA: ;
    esp = esp + 8;

loc_003776BD: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003776E0
 * Original: 0x003776E0 - 0x00377797 (183 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003776E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003776E0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_003776F2: ;
    SET_LO8(ebx, LO8(ebx) - MEM8(esp + 0x10));
    esi = eax;
    SET_LO8(ebx, LO8(ebx) + 1);
    if (TEST_Z(esi, esi)) goto loc_00377791; /* je: equal / zero */

loc_00377702: ;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00377707: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00377733; /* je: equal / zero */

loc_0037770B: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00377733; /* je: equal / zero */

loc_00377712: ;
    eax = MEM32(esi + 0x184);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00377733; /* je: equal / zero */

loc_0037771D: ;
    ecx = MEM32(0x84706C);
    edx = MEM32(esi + 0x18C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_0037772F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00377791; /* jne: not equal / not zero */

loc_00377733: ;
    if (TEST_NZ(ebp, ebp)) goto loc_00377743; /* jne: not equal / not zero */

loc_00377737: ;
    ecx = 0x20;
    ecx = ecx - ebx;
    ebp = ebp | 0xFFFFFFFFu;
    ebp = ebp >> LO8(ecx);

loc_00377743: ;
    PUSH32(esp, edi);
    edi = ZX8(LO8(ebx));

loc_00377747: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0037774C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO8(ecx, LO8(edx));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(ebp, edx)) goto loc_00377747; /* je: equal / zero */

loc_0037775C: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x40);
    edi = ZX8(LO8(ecx));
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    edx = edi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00377780: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00377790; /* je: equal / zero */

loc_00377785: ;
    eax = 1;
    ecx = edi;
    eax = eax << LO8(ecx);
    ebp = ebp ^ eax;

loc_00377790: ;
    POP32(esp, edi);

loc_00377791: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003777A0
 * Original: 0x003777A0 - 0x003777D5 (53 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003777A0(void)
{

loc_003777A0: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_003777B0: ;
    esi = eax;
    eax = MEM32(esp + 0x10);
    SET_LO8(ebx, LO8(ebx) - LO8(eax));
    SET_LO8(ebx, LO8(ebx) + 1);
    edi = ZX8(LO8(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_003777C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_003777CC: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003777E0
 * Original: 0x003777E0 - 0x00377869 (137 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003777E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003777E0: ;
    esp = esp - 0xC;
    SET_LO8(ecx, MEM8(esp + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    PUSH32(esp, esi);
    eax = eax + MEM32(0x84B4A0);
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    SET_LO8(ecx, LO8(ecx) + 1);
    PUSH32(esp, edi);
    edi = ZX8(LO8(ecx));
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_00377801: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm2; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00377863; /* je: equal / zero */

loc_00377833: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00377863: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00377870
 * Original: 0x00377870 - 0x00377897 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377870(void)
{
    int _flags = 0; /* fallback flag var */

loc_00377870: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, edi);
    edi = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000213E0(); /* call 0x000213E0 */

loc_00377882: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_00377897(); return; } /* jne: not equal / not zero */

loc_00377893: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_003778C0
 * Original: 0x003778C0 - 0x003778F8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003778C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003778C0: ;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_003778C5: ;
    SET_LO8(edx, MEM8(esp + 8));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ecx = 1;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003778D7; /* jne: not equal / not zero */

loc_003778D2: ;
    ecx = 0x4000001;

loc_003778D7: ;
    if (TEST_Z(eax, eax)) goto loc_003778F7; /* je: equal / zero */

loc_003778DB: ;
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003778F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00377900
 * Original: 0x00377900 - 0x00377941 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00377900: ;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00377905: ;
    if (TEST_Z(eax, eax)) { sub_00377941(); return; } /* je: equal / zero */

loc_00377909: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    if (TEST_NZ(edi, edi)) goto loc_00377919; /* jne: not equal / not zero */

loc_00377916: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00377919: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, edx);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00377940: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00377950
 * Original: 0x00377950 - 0x00377974 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377950(void)
{
    int _flags = 0; /* fallback flag var */

loc_00377950: ;
    SET_LO8(edx, MEM8(esp + 8));
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_00377959: ;
    if (TEST_Z(eax, eax)) goto loc_00377970; /* je: equal / zero */

loc_0037795D: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0006AEC0(); /* call 0x0006AEC0 */

loc_0037796D: ;
    esp = esp + 0xC;

loc_00377970: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00377980
 * Original: 0x00377980 - 0x003779E5 (101 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377980(void)
{
    int _flags = 0; /* fallback flag var */

loc_00377980: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_GE(esi, 0x14)) { sub_003779E5(); return; } /* jge: greater or equal (signed >=) */

loc_0037798A: ;
    if (TEST_S(esi, esi)) { sub_003779E5(); return; } /* jl: less (signed <) */

loc_0037798E: ;
    eax = MEM32(esi * 4 + 0x801EC0);
    if (TEST_NZ(eax, eax)) goto loc_003779DC; /* jne: not equal / not zero */

loc_00377999: ;
    MEM32(esi * 4 + 0x801EC0) = 1;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003779A9: ;
    if (CMP_GE(MEM32(eax + 0x8004), 6)) goto loc_003779C9; /* jge: greater or equal (signed >=) */

loc_003779B2: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x10);
    ecx = ecx + MEM32(eax + 0xC);
    ecx = (uint32_t)((int32_t)ecx >> 1);
    MEM32(esi * 4 + 0x801F10) = ecx;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003779C9: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x14);
    MEM32(esi * 4 + 0x801F10) = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003779DC: ;
    eax = MEM32(esi * 4 + 0x801F10);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003779F0
 * Original: 0x003779F0 - 0x00377A24 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003779F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003779F0: ;
    eax = MEM32(esp + 4);
    if (CMP_GE(eax, 0x14)) goto loc_00377A21; /* jge: greater or equal (signed >=) */

loc_003779F9: ;
    if (TEST_S(eax, eax)) goto loc_00377A21; /* jl: less (signed <) */

loc_003779FD: ;
    ecx = MEM32(eax * 4 + 0x801EC0);
    if (TEST_NZ(ecx, ecx)) goto loc_00377A13; /* jne: not equal / not zero */

loc_00377A08: ;
    MEM32(eax * 4 + 0x801EC0) = 1;

loc_00377A13: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 8);
    MEM32(eax * 4 + 0x801F10) = edx;

loc_00377A21: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00377A30
 * Original: 0x00377A30 - 0x00377A70 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377A30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00377A30: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    if (TEST_S(edi, edi)) { sub_00377A70(); return; } /* jl: less (signed <) */

loc_00377A38: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00377A55; /* je: equal / zero */

loc_00377A3F: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_00377A55: ;
    if (CMP_AE(edi, eax)) { sub_00377A70(); return; } /* jae: above or equal (unsigned >=) */

loc_00377A59: ;
    if (TEST_NZ(ebx, ebx)) goto loc_00377A64; /* jne: not equal / not zero */

loc_00377A5D: ;
    xmm0 = MEMF(esi + 0x34); /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00377A64: ;
    if (CMP_NE(ebx, 1)) { sub_00377A70(); return; } /* jne: not equal / not zero */

loc_00377A69: ;
    xmm0 = MEMF(esi + 0x38); /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00377A80
 * Original: 0x00377A80 - 0x00377FA5 (1317 bytes, 491 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00377A80: ;
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, 0x1C - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x1C)) goto loc_00377F9E; /* ja: above (unsigned >) */

loc_00377A91: ;
    esi = MEM32(esp + 0x14);
    ebx = 1;
    { uint32_t _jt = MEM32(eax * 4 + 0x377FA8); /* switch: 29 entries, 28 targets */
    if (_jt == 0x00377AA1u) goto loc_00377AA1;
    if (_jt == 0x00377AF1u) goto loc_00377AF1;
    if (_jt == 0x00377B1Au) goto loc_00377B1A;
    if (_jt == 0x00377B42u) goto loc_00377B42;
    if (_jt == 0x00377B74u) goto loc_00377B74;
    if (_jt == 0x00377B99u) goto loc_00377B99;
    if (_jt == 0x00377BAEu) goto loc_00377BAE;
    if (_jt == 0x00377BE9u) goto loc_00377BE9;
    if (_jt == 0x00377C3Au) goto loc_00377C3A;
    if (_jt == 0x00377C77u) goto loc_00377C77;
    if (_jt == 0x00377C83u) goto loc_00377C83;
    if (_jt == 0x00377CDCu) goto loc_00377CDC;
    if (_jt == 0x00377CEAu) goto loc_00377CEA;
    if (_jt == 0x00377D04u) goto loc_00377D04;
    if (_jt == 0x00377D45u) goto loc_00377D45;
    if (_jt == 0x00377D82u) goto loc_00377D82;
    if (_jt == 0x00377DD5u) goto loc_00377DD5;
    if (_jt == 0x00377E1Eu) goto loc_00377E1E;
    if (_jt == 0x00377E55u) goto loc_00377E55;
    if (_jt == 0x00377E76u) goto loc_00377E76;
    if (_jt == 0x00377E87u) goto loc_00377E87;
    if (_jt == 0x00377EA3u) goto loc_00377EA3;
    if (_jt == 0x00377ED6u) goto loc_00377ED6;
    if (_jt == 0x00377EE2u) goto loc_00377EE2;
    if (_jt == 0x00377F50u) goto loc_00377F50;
    if (_jt == 0x00377F6Eu) goto loc_00377F6E;
    if (_jt == 0x00377F99u) goto loc_00377F99;
    if (_jt == 0x00377F9Eu) goto loc_00377F9E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00377AA1: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0035D100(); /* call 0x0035D100 */

loc_00377AAA: ;
    ecx = MEM32(0x84B290);
    edi = eax;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    edx = eax + ecx;
    ebx = 1;
    ecx = esi;
    ecx = ecx & 7;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(edx));
    MEM32(0x8018F8) = ebx;
    MEM8(0x801A31) = LO8(ebx);
    SET_LO8(eax, LO8(eax) & 7);
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM8(edx) = LO8(ecx);
    if (TEST_Z(edi, edi)) goto loc_00377F9E; /* je: equal / zero */

loc_00377AE4: ;
    MEM32(edi) = MEM32(edi) | 0x8000;

loc_00377AEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377AF1: ;
    edx = MEM32(0x84B290);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    edi = ecx + edx;
    ecx = esi;
    ecx = ecx & 7;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(edi));
    MEM32(0x8018F8) = ebx;
    MEM8(0x801A31) = LO8(ebx);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(edi) = LO8(ecx);

loc_00377B1A: ;
    PUSH32(esp, 0); sub_0035D100(); /* call 0x0035D100 */

loc_00377B1F: ;
    if (TEST_Z(eax, eax)) goto loc_00377F9E; /* je: equal / zero */

loc_00377B27: ;
    MEM32(eax) = MEM32(eax) | 0x8000;
    if (CMP_NE(esi, MEM32(0x8018FC))) goto loc_00377AEA; /* jne: not equal / not zero */

loc_00377B35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x84B294) = LO8(ebx);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377B42: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0035D100(); /* call 0x0035D100 */

loc_00377B4B: ;
    edx = eax;
    eax = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_00377FA0; /* je: equal / zero */

loc_00377B57: ;
    edi = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0xC);
    edi = edi + edx;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377B74: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0035D100(); /* call 0x0035D100 */

loc_00377B7D: ;
    if (TEST_Z(eax, eax)) goto loc_00377F9E; /* je: equal / zero */

loc_00377B85: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | 0x4000;
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377B99: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0035D010(); /* call 0x0035D010 */

loc_00377BA4: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377BAE: ;
    SET_LO8(eax, MEM8(0x77111C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00377BF2; /* jne: not equal / not zero */

loc_00377BB7: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00377BBC: ;
    if (CMP_NE(MEM32(eax + 0x8004), 4)) goto loc_00377F9E; /* jne: not equal / not zero */

loc_00377BC9: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0xC);
    esi = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_002A94A0(); /* call 0x002A94A0 */

loc_00377BDF: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377BE9: ;
    SET_LO8(eax, MEM8(0x77111C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00377C01; /* je: equal / zero */

loc_00377BF2: ;
    PUSH32(esp, 0); sub_000A5BA0(); /* call 0x000A5BA0 */

loc_00377BF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377C01: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00377C06: ;
    if (CMP_NE(MEM32(eax + 0x8004), 4)) goto loc_00377F9E; /* jne: not equal / not zero */

loc_00377C13: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 0xC);
    ebx = MEM32(ecx + 8);
    ecx = MEM32(0x84A5F8);
    eax = eax & 0xFFF;
    ebx = ebx & 0xFFF;
    PUSH32(esp, 0); sub_000F1C40(); /* call 0x000F1C40 */

loc_00377C33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377C3A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 8);
    ebx = 1;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    ecx = MEM32(eax + 0xC);
    MEM8(0x80190C) = LO8(ebx);
    if (CMP_NE(ecx, ebx)) goto loc_00377C65; /* jne: not equal / not zero */

loc_00377C53: ;
    PUSH32(esp, 0); sub_0035D880(); /* call 0x0035D880 */

loc_00377C58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x801A31) = LO8(ebx);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377C65: ;
    PUSH32(esp, 0); sub_0035D8A0(); /* call 0x0035D8A0 */

loc_00377C6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x801A31) = LO8(ebx);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377C77: ;
    PUSH32(esp, 0); sub_001FC830(); /* call 0x001FC830 */

loc_00377C7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377C83: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0035D100(); /* call 0x0035D100 */

loc_00377C8C: ;
    ebp = eax;
    eax = MEM32(0x84B290);
    edx = esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    edi = edx + eax;
    ebx = 1;
    ecx = esi;
    ecx = ecx & 7;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(ecx, MEM8(edi));
    MEM32(0x8018F8) = ebx;
    MEM8(0x801A31) = LO8(ebx);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM8(edi) = LO8(ecx);
    if (TEST_Z(ebp, ebp)) goto loc_00377F9E; /* je: equal / zero */

loc_00377CC3: ;
    MEM32(ebp) = MEM32(ebp) | 0x8000;
    PUSH32(esp, 0); sub_001FC830(); /* call 0x001FC830 */

loc_00377CCF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x84B294) = LO8(ebx);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377CDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x771BF0) = 1;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377CEA: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 8);
    eax = MEM32(0x7F9EEC);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | ecx;
    POP32(esp, ebp);
    MEM32(0x7F9EEC) = eax;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377D04: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ecx = MEM32(eax + 8);
    edx = 1;
    if (TEST_NZ(ecx, ecx)) goto loc_00377D2E; /* jne: not equal / not zero */

loc_00377D17: ;
    eax = MEM32(0x7FAAA8);
    edx = edx << LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    edx = ~edx;
    eax = eax & edx;
    MEM32(0x7FAAA8) = eax;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377D2E: ;
    eax = MEM32(0x7FAAA4);
    edx = edx << LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    edx = ~edx;
    eax = eax & edx;
    MEM32(0x7FAAA4) = eax;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377D45: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ecx = MEM32(eax + 8);
    edx = 1;
    if (TEST_NZ(ecx, ecx)) goto loc_00377D6D; /* jne: not equal / not zero */

loc_00377D58: ;
    eax = MEM32(0x7FAAA8);
    edx = edx << LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | edx;
    MEM32(0x7FAAA8) = eax;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377D6D: ;
    eax = MEM32(0x7FAAA4);
    edx = edx << LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | edx;
    MEM32(0x7FAAA4) = eax;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377D82: ;
    eax = MEM32(0x771C50);
    ebx = 1;
    if (CMP_NE(eax, ebx)) goto loc_00377DAA; /* jne: not equal / not zero */

loc_00377D90: ;
    eax = MEM32(0x771C60);
    if (CMP_LE(eax, MEM32(0x771C5C))) goto loc_00377DAA; /* jle: less or equal (signed <=) */

loc_00377D9D: ;
    SET_LO8(eax, MEM8(0x771C64));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00377F9E; /* je: equal / zero */

loc_00377DAA: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x771C50) = ebx;
    MEM32(0x771C54) = eax;
    MEM8(0x771C58) = LO8(eax);
    MEM8(0x771C59) = LO8(eax);
    MEM8(0x771C5A) = LO8(eax);
    MEM32(0x771C5C) = eax;
    MEM32(0x771C60) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377DD5: ;
    eax = MEM32(0x84A144);
    edi = 0; /* xor self */
    if (TEST_S(eax, eax)) goto loc_00377F9E; /* jl: less (signed <) */

loc_00377DE4: ;
    esi = MEM32(esp + 0x1C);
    goto loc_00377DF0;

    /* nop */

loc_00377DF0: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000FB6B0(); /* call 0x000FB6B0 */

loc_00377E0A: ;
    eax = MEM32(0x84A144);
    esp = esp + 0x18;
    edi++;
    if (CMP_LE(edi, eax)) goto loc_00377DF0; /* jle: less or equal (signed <=) */

loc_00377E17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377E1E: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00377E23: ;
    if (CMP_NE(MEM32(eax + 0x8004), 4)) goto loc_00377EB1; /* jne: not equal / not zero */

loc_00377E30: ;
    eax = MEM32(esp + 0x1C);
    SET_LO8(ecx, MEM8(eax + 8));
    SET_LO8(eax, MEM8(eax + 0xC));
    POP32(esp, edi);
    MEM8(0x84B248) = LO8(ecx);
    POP32(esp, esi);
    ecx = SX8(LO8(ecx));
    POP32(esp, ebp);
    MEM8(0x84B250) = LO8(eax);
    MEM32(0x7FA1F4) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377E55: ;
    SET_LO8(eax, MEM8(0x77111C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00377E6A; /* je: equal / zero */

loc_00377E5E: ;
    PUSH32(esp, 0); sub_000A5BA0(); /* call 0x000A5BA0 */

loc_00377E63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377E6A: ;
    PUSH32(esp, 0); sub_001FE930(); /* call 0x001FE930 */

loc_00377E6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377E76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x776574) = 0xA;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377E87: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F13E0);
    PUSH32(esp, 0); sub_001F26E0(); /* call 0x001F26E0 */

loc_00377E99: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377EA3: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00377EA8: ;
    if (CMP_EQ(MEM32(eax + 0x8004), 3)) goto loc_00377EBD; /* je: equal / zero */

loc_00377EB1: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00377EB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377EBD: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    MEM8(0x801A2E) = LO8(edx);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377ED6: ;
    PUSH32(esp, 0); sub_0035F730(); /* call 0x0035F730 */

loc_00377EDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377EE2: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0035D100(); /* call 0x0035D100 */

loc_00377EEB: ;
    edi = eax;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00377EF2: ;
    if (CMP_NE(MEM32(eax + 0x8004), 4)) goto loc_00377F1D; /* jne: not equal / not zero */

loc_00377EFB: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    edi = edi + 0x3C;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00343490(); /* call 0x00343490 */

loc_00377F0C: ;
    ecx = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0); sub_00343580(); /* call 0x00343580 */

loc_00377F16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377F1D: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00377F22: ;
    if (CMP_NE(MEM32(eax + 0x8004), 5)) goto loc_00377F9E; /* jne: not equal / not zero */

loc_00377F2B: ;
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    edi = edi + 0x3C;
    PUSH32(esp, 0); sub_00343490(); /* call 0x00343490 */

loc_00377F3B: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_003435A0(); /* call 0x003435A0 */

loc_00377F49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377F50: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00377F5D: ;
    ecx = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_00344B30(); /* call 0x00344B30 */

loc_00377F67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377F6E: ;
    esi = MEM32(esp + 0x1C);
    xmm0 = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649694); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00377F8A: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0); sub_00344BC0(); /* call 0x00344BC0 */

loc_00377F92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00377F99: ;
    PUSH32(esp, 0); sub_00243940(); /* call 0x00243940 */

loc_00377F9E: ;
    eax = 0; /* xor self */

loc_00377FA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00378550
 * Original: 0x00378550 - 0x0037861E (206 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378550(void)
{

loc_00378550: ;
    edx = MEM32(0x801F6C);
    ecx = 0xFFFFFFFEu;
    edx = edx & ecx;
    MEM32(0x801F6C) = edx;
    MEM32(0x801F78) = MEM32(0x801F78) & ecx;
    MEM32(0x801F84) = MEM32(0x801F84) & ecx;
    edx = MEM32(0x801F90);
    eax = MEM32(0x801F60);
    edx = edx & ecx;
    MEM32(0x801F90) = edx;
    MEM32(0x801F9C) = MEM32(0x801F9C) & ecx;
    MEM32(0x801FA8) = MEM32(0x801FA8) & ecx;
    MEM32(0x801FB4) = MEM32(0x801FB4) & ecx;
    edx = MEM32(0x801FC0);
    edx = edx & ecx;
    eax = eax & ecx;
    MEM32(0x801FC0) = edx;
    edx = MEM32(0x801FCC);
    MEM32(0x801F60) = eax;
    eax = 0; /* xor self */
    edx = edx & ecx;
    MEM32(0x801F64) = eax;
    MEM32(0x801F68) = eax;
    MEM32(0x801F70) = eax;
    MEM32(0x801F74) = eax;
    MEM32(0x801F7C) = eax;
    MEM32(0x801F80) = eax;
    MEM32(0x801F88) = eax;
    MEM32(0x801F8C) = eax;
    MEM32(0x801F94) = eax;
    MEM32(0x801F98) = eax;
    MEM32(0x801FA0) = eax;
    MEM32(0x801FA4) = eax;
    MEM32(0x801FAC) = eax;
    MEM32(0x801FB0) = eax;
    MEM32(0x801FB8) = eax;
    MEM32(0x801FBC) = eax;
    MEM32(0x801FC4) = eax;
    MEM32(0x801FC8) = eax;
    MEM32(0x801FCC) = edx;
    MEM32(0x801FD0) = eax;
    MEM32(0x801FD4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00378620
 * Original: 0x00378620 - 0x003787AE (398 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378620(void)
{
    int _flags = 0; /* fallback flag var */

loc_00378620: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x7FA20C);
    ecx = 0x801F60;
    /* nop */

loc_00378630: ;
    edx = MEM32(ecx);
    if (TEST_Z(LO8(edx), 1)) goto loc_00378678; /* je: equal / zero */

loc_00378637: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_00378678; /* je: equal / zero */

loc_0037863C: ;
    eax = MEM32(ecx + 8);
    edx = edx >> 2;
    edx = edx & 0xF;
    esi = MEM32(edx * 4 + 0x74D9D8);
    eax = eax + edi;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ecx + 8) = eax;
    if (CMP_B(eax, esi)) goto loc_00378678; /* jb: below (unsigned <) */

loc_00378655: ;
    SET_LO16(edx, MEM16(edx * 2 + 0x74D9EC));
    eax = eax - esi;
    MEM32(ecx + 8) = eax;
    eax = MEM32(ecx + 4);
    eax++;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(ecx + 4) = eax;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00378678; /* je: equal / zero */

loc_0037866E: ;
    esi = ZX16(LO16(edx));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ecx + 4) = edx;

loc_00378678: ;
    edx = MEM32(ecx + 0xC);
    if (TEST_Z(LO8(edx), 1)) goto loc_003786C1; /* je: equal / zero */

loc_00378680: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_003786C1; /* je: equal / zero */

loc_00378685: ;
    eax = MEM32(ecx + 0x14);
    edx = edx >> 2;
    edx = edx & 0xF;
    esi = MEM32(edx * 4 + 0x74D9D8);
    eax = eax + edi;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ecx + 0x14) = eax;
    if (CMP_B(eax, esi)) goto loc_003786C1; /* jb: below (unsigned <) */

loc_0037869E: ;
    SET_LO16(edx, MEM16(edx * 2 + 0x74D9EC));
    eax = eax - esi;
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(ecx + 0x10);
    eax++;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(ecx + 0x10) = eax;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_003786C1; /* je: equal / zero */

loc_003786B7: ;
    esi = ZX16(LO16(edx));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ecx + 0x10) = edx;

loc_003786C1: ;
    edx = MEM32(ecx + 0x18);
    if (TEST_Z(LO8(edx), 1)) goto loc_0037870A; /* je: equal / zero */

loc_003786C9: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_0037870A; /* je: equal / zero */

loc_003786CE: ;
    eax = MEM32(ecx + 0x20);
    edx = edx >> 2;
    edx = edx & 0xF;
    esi = MEM32(edx * 4 + 0x74D9D8);
    eax = eax + edi;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ecx + 0x20) = eax;
    if (CMP_B(eax, esi)) goto loc_0037870A; /* jb: below (unsigned <) */

loc_003786E7: ;
    SET_LO16(edx, MEM16(edx * 2 + 0x74D9EC));
    eax = eax - esi;
    MEM32(ecx + 0x20) = eax;
    eax = MEM32(ecx + 0x1C);
    eax++;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(ecx + 0x1C) = eax;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_0037870A; /* je: equal / zero */

loc_00378700: ;
    esi = ZX16(LO16(edx));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ecx + 0x1C) = edx;

loc_0037870A: ;
    edx = MEM32(ecx + 0x24);
    if (TEST_Z(LO8(edx), 1)) goto loc_00378753; /* je: equal / zero */

loc_00378712: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_00378753; /* je: equal / zero */

loc_00378717: ;
    eax = MEM32(ecx + 0x2C);
    edx = edx >> 2;
    edx = edx & 0xF;
    esi = MEM32(edx * 4 + 0x74D9D8);
    eax = eax + edi;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ecx + 0x2C) = eax;
    if (CMP_B(eax, esi)) goto loc_00378753; /* jb: below (unsigned <) */

loc_00378730: ;
    SET_LO16(edx, MEM16(edx * 2 + 0x74D9EC));
    eax = eax - esi;
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(ecx + 0x28);
    eax++;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(ecx + 0x28) = eax;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00378753; /* je: equal / zero */

loc_00378749: ;
    esi = ZX16(LO16(edx));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ecx + 0x28) = edx;

loc_00378753: ;
    edx = MEM32(ecx + 0x30);
    if (TEST_Z(LO8(edx), 1)) goto loc_0037879C; /* je: equal / zero */

loc_0037875B: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_0037879C; /* je: equal / zero */

loc_00378760: ;
    eax = MEM32(ecx + 0x38);
    edx = edx >> 2;
    edx = edx & 0xF;
    esi = MEM32(edx * 4 + 0x74D9D8);
    eax = eax + edi;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ecx + 0x38) = eax;
    if (CMP_B(eax, esi)) goto loc_0037879C; /* jb: below (unsigned <) */

loc_00378779: ;
    SET_LO16(edx, MEM16(edx * 2 + 0x74D9EC));
    eax = eax - esi;
    MEM32(ecx + 0x38) = eax;
    eax = MEM32(ecx + 0x34);
    eax++;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    MEM32(ecx + 0x34) = eax;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_0037879C; /* je: equal / zero */

loc_00378792: ;
    esi = ZX16(LO16(edx));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ecx + 0x34) = edx;

loc_0037879C: ;
    ecx = ecx + 0x3C;
    if (CMP_L(ecx, 0x801FD8)) goto loc_00378630; /* jl: less (signed <) */

loc_003787AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003787B0
 * Original: 0x003787B0 - 0x003787C8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003787B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003787B0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 2;
    ecx = MEM32(eax + 0x801F60);
    if (TEST_Z(LO8(ecx), 1)) { sub_003787C8(); return; } /* je: equal / zero */

loc_003787C5: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00378800
 * Original: 0x00378800 - 0x00378842 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378800(void)
{
    int _flags = 0; /* fallback flag var */

loc_00378800: ;
    eax = MEM32(esp + 8);
    eax = eax - 0;
    if ((eax == 0)) { sub_00378842(); return; } /* je: equal / zero */

loc_00378809: ;
    eax--;
    if ((eax == 0)) goto loc_0037882D; /* je: equal / zero */

loc_0037880C: ;
    eax--;
    if ((eax == 0)) goto loc_00378812; /* je: equal / zero */

loc_0037880F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00378812: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 8);
    eax = eax + eax * 2;
    MEM32(eax * 4 + 0x801F64) = edx;
    eax = 1;
    esp += 4; return; /* ret */

loc_0037882D: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    MEM32(eax * 4 + 0x801F60) = MEM32(eax * 4 + 0x801F60) & 0xFFFFFFFDu;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00378860
 * Original: 0x00378860 - 0x0037886A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378860(void)
{
    int _flags = 0; /* fallback flag var */

loc_00378860: ;
    if (CMP_EQ(MEM32(esp + 8), 3)) { sub_0037886A(); return; } /* je: equal / zero */

loc_00378867: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00378880
 * Original: 0x00378880 - 0x003789EA (362 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00378880: ;
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_A(eax, 5)) goto loc_003789E6; /* ja: above (unsigned >) */

loc_0037888E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3789EC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00378895u) goto loc_00378895;
    if (_jt == 0x003788DEu) goto loc_003788DE;
    if (_jt == 0x00378902u) goto loc_00378902;
    if (_jt == 0x0037892Eu) goto loc_0037892E;
    if (_jt == 0x00378962u) goto loc_00378962;
    if (_jt == 0x0037899Bu) goto loc_0037899B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00378895: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_0037889A: ;
    if (CMP_NE(MEM32(eax + 0x8004), 2)) goto loc_003789A9; /* jne: not equal / not zero */

loc_003788A7: ;
    eax = MEM32(esp + 8);
    if (CMP_A(eax, 0x140)) goto loc_003788D7; /* ja: above (unsigned >) */

loc_003788B2: ;
    ecx = MEM32(0x8472A0);
    eax = eax & 0xFFF;
    if (TEST_NZ(ecx, ecx)) goto loc_003788D7; /* jne: not equal / not zero */

loc_003788C1: ;
    if (CMP_AE(eax, MEM32(0x802324))) goto loc_003788D7; /* jae: above or equal (unsigned >=) */

loc_003788C9: ;
    ecx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    MEM8(eax + ecx + 0x14) = 0;

loc_003788D7: ;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003788DE: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003788E3: ;
    if (CMP_NE(MEM32(eax + 0x8004), 2)) goto loc_003789A9; /* jne: not equal / not zero */

loc_003788F0: ;
    eax = MEM32(esp + 8);
    ebx = 1;
    PUSH32(esp, 0); sub_003C67F0(); /* call 0x003C67F0 */

loc_003788FE: ;
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00378902: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00378907: ;
    if (CMP_NE(MEM32(eax + 0x8004), 4)) goto loc_003789A9; /* jne: not equal / not zero */

loc_00378914: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_003C6880(); /* call 0x003C6880 */

loc_00378927: ;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0037892E: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00378933: ;
    if (CMP_NE(MEM32(eax + 0x8004), 5)) goto loc_003789A9; /* jne: not equal / not zero */

loc_0037893C: ;
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0x10));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0xC));
    PUSH32(esp, edx);
    SET_LO16(edx, MEM16(eax + 8));
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003C85E0(); /* call 0x003C85E0 */

loc_0037895B: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00378962: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_00378967: ;
    if (CMP_NE(MEM32(eax + 0x8004), 7)) goto loc_003789A9; /* jne: not equal / not zero */

loc_00378970: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 8));
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003C8570(); /* call 0x003C8570 */

loc_00378994: ;
    esp = esp + 0x14;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0037899B: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003789A0: ;
    if (CMP_EQ(MEM32(eax + 0x8004), 3)) goto loc_003789B2; /* je: equal / zero */

loc_003789A9: ;
    PUSH32(esp, 0); sub_0035E140(); /* call 0x0035E140 */

loc_003789AE: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003789B2: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 8);
    if (CMP_NE(eax, 0x3E7)) goto loc_003789C7; /* jne: not equal / not zero */

loc_003789C0: ;
    ecx = 2;
    goto loc_003789CE;

loc_003789C7: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */

loc_003789CE: ;
    eax = MEM32(esp + 8);
    ebx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001C6A50(); /* call 0x001C6A50 */

loc_003789E3: ;
    esp = esp + 4;

loc_003789E6: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00378ED0
 * Original: 0x00378ED0 - 0x00378EFD (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378ED0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00378ED0: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0x7F);
    ecx = 0x2CD;
    edi = 0x871038;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0x63E190);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00378EF7: ;
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00378F00(); return; /* tail jmp 0x00378F00 */

}

/**
 * sub_00379770
 * Original: 0x00379770 - 0x00379873 (259 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379770(void)
{

loc_00379770: ;
    ecx = MEM32(0x875360);
    eax = 0x63DB60;
    MEM32(ecx * 4 + 0x875020) = eax;
    edx = MEM32(0x875360);
    PUSH32(esp, esi);
    esi = 0x587BE4;
    MEM32(edx * 4 + 0x875120) = esi;
    MEM32(0x875360) = MEM32(0x875360) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_003797A0: ;
    ecx = MEM32(0x875240);
    MEM32(ecx * 4 + 0x875260) = eax;
    MEM32(0x875240) = MEM32(0x875240) + 1;
    edx = MEM32(0x875360);
    eax = 0x63DB54;
    MEM32(edx * 4 + 0x875020) = eax;
    ecx = MEM32(0x875360);
    MEM32(ecx * 4 + 0x875120) = esi;
    MEM32(0x875360) = MEM32(0x875360) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_003797DD: ;
    edx = MEM32(0x875240);
    MEM32(edx * 4 + 0x875260) = eax;
    edx = MEM32(0x875240);
    ecx = MEM32(0x875360);
    edx++;
    MEM32(0x875240) = edx;
    eax = 0x63DB48;
    MEM32(ecx * 4 + 0x875020) = eax;
    edx = MEM32(0x875360);
    MEM32(edx * 4 + 0x875120) = esi;
    MEM32(0x875360) = MEM32(0x875360) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379821: ;
    ecx = MEM32(0x875240);
    MEM32(ecx * 4 + 0x875260) = eax;
    MEM32(0x875240) = MEM32(0x875240) + 1;
    edx = MEM32(0x875360);
    eax = 0x63DB40;
    MEM32(edx * 4 + 0x875020) = eax;
    ecx = MEM32(0x875360);
    MEM32(ecx * 4 + 0x875120) = esi;
    MEM32(0x875360) = MEM32(0x875360) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037985E: ;
    edx = MEM32(0x875240);
    MEM32(edx * 4 + 0x875260) = eax;
    MEM32(0x875240) = MEM32(0x875240) + 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00379880
 * Original: 0x00379880 - 0x0037A55E (3294 bytes, 564 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379880(void)
{

loc_00379880: ;
    ecx = MEM32(0x875000);
    eax = 0x5E068C;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    PUSH32(esp, esi);
    esi = 0x63DB30;
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_003798B0: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x5EB174;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_003798ED: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63DB24;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379931: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63DB18;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037996E: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x5F9A28;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_003799B2: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x5E0684;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_003799EF: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x6387E8;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379A33: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63DB14;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379A70: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x5F9A20;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379AB4: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x5E0668;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379AF1: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63DB08;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379B35: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x5E0660;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379B72: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63DAFC;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379BB6: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63DAF0;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379BF3: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63DAE4;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379C37: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63DAD8;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379C74: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x638690;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379CB8: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63DACC;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379CF5: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x638668;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379D39: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x6386F8;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379D76: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x638700;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379DBA: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x638740;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379DF7: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x638748;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379E3B: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63DAC4;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379E78: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x638858;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379EBC: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x5E0694;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379EF9: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x5E069C;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379F3D: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63875C;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379F7A: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x638780;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379FBE: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x638784;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00379FFB: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63DAB8;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A03F: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x5F9A18;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A07C: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63DAAC;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A0C0: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x5F9A10;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A0FD: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63DA9C;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A141: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x638818;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A17E: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63884C;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A1C2: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63DA94;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A1FF: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63DA8C;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A243: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x638658;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A280: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x638680;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A2C4: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x638730;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A301: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x638724;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A345: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63DA80;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A382: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63DA70;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A3C6: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63DA64;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A403: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x63DA50;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A447: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x63DA40;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A484: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x5E0844;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A4C8: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    edx = MEM32(0x875000);
    eax = 0x6387E0;
    MEM32(edx * 4 + 0x871FC0) = eax;
    ecx = MEM32(0x875000);
    MEM32(ecx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A505: ;
    edx = MEM32(0x873FE0);
    MEM32(edx * 4 + 0x874000) = eax;
    edx = MEM32(0x873FE0);
    ecx = MEM32(0x875000);
    edx++;
    MEM32(0x873FE0) = edx;
    eax = 0x6386EC;
    MEM32(ecx * 4 + 0x871FC0) = eax;
    edx = MEM32(0x875000);
    MEM32(edx * 4 + 0x872FC0) = esi;
    MEM32(0x875000) = MEM32(0x875000) + 1;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037A549: ;
    ecx = MEM32(0x873FE0);
    MEM32(ecx * 4 + 0x874000) = eax;
    MEM32(0x873FE0) = MEM32(0x873FE0) + 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037A560
 * Original: 0x0037A560 - 0x0037A5DA (122 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A560(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0037A560: ;
    ecx = MEM32(0x87179C);
    if (TEST_Z(ecx, ecx)) goto loc_0037A5D9; /* je: equal / zero */

loc_0037A56A: ;
    eax = eax + 0xFFFFFFF0u;
    if (CMP_GE(eax, ecx)) goto loc_0037A5D9; /* jge: greater or equal (signed >=) */

loc_0037A571: ;
    ecx = ZX8(MEM8(esp + 4));
    eax = eax << 4;
    MEM8(0x8717B1) = 1;
    xmm0 = MEMF(eax + 0x87139C); /* movss */
    MEMF(0x871278) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x8713A0); /* movss */
    MEMF(0x87127C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x8713A4); /* movss */
    MEMF(0x871280) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x8713A8); /* movss */
    eax = MEM32(0x8717C0);
    ecx = ecx << 0x18;
    ecx = ecx | 0xFF00;
    MEMF(0x8717AC) = xmm0; /* movss */
    MEM32(0x871294) = eax;
    MEM32(0x8717B4) = ecx;

loc_0037A5D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037A5E0
 * Original: 0x0037A5E0 - 0x0037A621 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A5E0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0037A5E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84B370);
    fp_push(MEMF(eax * 4 + 0x8717C4)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0037A5F9: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* cmp edx, 0x10 - flags set for next jcc */
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 4) = LO8(ebx);
    MEM8(0x8717B1) = 0;
    if (CMP_L(edx, 0x10)) { sub_0037A621(); return; } /* jl: less (signed <) */

loc_0037A60F: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    eax = edx;
    PUSH32(esp, 0); sub_0037A560(); /* call 0x0037A560 */

loc_0037A61B: ;
    esp = esp + 4;
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
 * sub_0037A740
 * Original: 0x0037A740 - 0x0037A7C1 (129 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A740(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0037A740: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x8470DC);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    eax = eax + edx;
    if ((eax == 0)) goto loc_0037A7BF; /* je: equal / zero */

loc_0037A753: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3E0);
    if (TEST_Z(esi, esi)) goto loc_0037A7BE; /* je: equal / zero */

loc_0037A75E: ;
    xmm0 = MEMF(0x7F9F58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002200D0(); /* call 0x002200D0 */

loc_0037A77A: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037A7A0; /* je: equal / zero */

loc_0037A781: ;
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0); sub_00394760(); /* call 0x00394760 */

loc_0037A78A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0037A7A0; /* jne: not equal / not zero */

loc_0037A78E: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - MEMF(esp + 4); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    goto loc_0037A7B5;

loc_0037A7A0: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 4); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */

loc_0037A7B5: ;
    if ((xmm1 > xmm0)) goto loc_0037A7BA; /* ja: above (unsigned >) */

loc_0037A7B7: ;
    xmm0 = xmm1; /* movaps */

loc_0037A7BA: ;
    MEMF(edi) = xmm0; /* movss */

loc_0037A7BE: ;
    POP32(esp, esi);

loc_0037A7BF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037A7D0
 * Original: 0x0037A7D0 - 0x0037A7E1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A7D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037A7D0: ;
    if (CMP_GE(esi, 2)) { sub_0037A7E1(); return; } /* jge: greater or equal (signed >=) */

loc_0037A7D5: ;
    eax = MEM32(esi * 4 + 0x8470FC);
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0037A7E6(); return; /* tail jmp 0x0037A7E6 */

}

/**
 * sub_0037A8E0
 * Original: 0x0037A8E0 - 0x0037A90B (43 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A8E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037A8E0: ;
    PUSH32(esp, ecx);
    if (CMP_EQ(MEM32(esi + 0x64), 0x25)) { sub_0037A90B(); return; } /* je: equal / zero */

loc_0037A8E7: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(0x8717A0) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(0x8717A4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    g_seh_ebp = ebp; sub_0037A956(); return; /* tail jmp 0x0037A956 */

}

/**
 * sub_0037A9F0
 * Original: 0x0037A9F0 - 0x0037AE6D (1149 bytes, 260 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A9F0(void)
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

loc_0037A9F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x74E3A0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037AE66; /* je: equal / zero */

loc_0037AA0B: ;
    SET_LO8(eax, MEM8(0x8717B0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037AE66; /* je: equal / zero */

loc_0037AA18: ;
    ebx = MEM32(0x84A5F8);
    edi = MEM32(0x84A5FC);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x10) = ecx;
    edx = ebx;

loc_0037AA36: ;
    if (CMP_NE(MEM8(edi + eax), 0x34)) goto loc_0037AA46; /* jne: not equal / not zero */

loc_0037AA3C: ;
    MEM32(esp + ecx * 4 + 0x44) = edx;
    ecx++;
    if (CMP_EQ(ecx, 2)) goto loc_0037AA54; /* je: equal / zero */

loc_0037AA46: ;
    eax++;
    edx = edx + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_0037AA36; /* jl: less (signed <) */

loc_0037AA54: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0037AE66; /* je: equal / zero */

loc_0037AA60: ;
    SET_LO8(eax, MEM8(0x871B61));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037AB32; /* je: equal / zero */

loc_0037AA6D: ;
    eax = MEM32(0x84B350);
    if (TEST_Z(eax, eax)) goto loc_0037AB32; /* je: equal / zero */

loc_0037AA7A: ;
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037AB32; /* je: equal / zero */

loc_0037AA88: ;
    edx = ZX8(LO8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ebx = edx + ebx + -1744;
    PUSH32(esp, 0); sub_0037B520(); /* call 0x0037B520 */

loc_0037AAA2: ;
    edx = MEM32(esp + 0x70);
    xmm0 = MEMF(esp + 0x68); /* movss */
    PUSH32(esp, 0x4E6E6B28);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esp + 0x80;
    ebx = esp + 0x7C;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_0037AAD1: ;
    xmm1 = MEMF(0x64ACB4); /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    ebx = MEM32(0x84A5F8);
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(0x6498E8); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x80); /* movss */
    xmm0 = xmm0 - MEMF(0x64912C); /* subss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(0x648CDC); /* movss */
    esp = esp + 0x18;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    goto loc_0037ABE4;

loc_0037AB32: ;
    eax = MEM32(0x84A144);
    if (TEST_NZ(eax, eax)) goto loc_0037AB7D; /* jne: not equal / not zero */

loc_0037AB3B: ;
    xmm0 = MEMF(0x64A170); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x649068); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x649244); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x6493F0); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    goto loc_0037ABD2;

loc_0037AB7D: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0;
    xmm0 = MEMF(0x64ACE8); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    if ((eax == 0)) goto loc_0037ABA0; /* je: equal / zero */

loc_0037AB93: ;
    eax--;
    if ((eax != 0)) goto loc_0037ABAE; /* jne: not equal / not zero */

loc_0037AB96: ;
    xmm0 = MEMF(0x64ACE4); /* movss */
    goto loc_0037ABA8;

loc_0037ABA0: ;
    xmm0 = MEMF(0x64ACE0); /* movss */

loc_0037ABA8: ;
    MEMF(esp + 0x40) = xmm0; /* movss */

loc_0037ABAE: ;
    xmm0 = MEMF(0x64ACDC); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64ACD8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64ACD4); /* movss */

loc_0037ABD2: ;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */

loc_0037ABE4: ;
    eax = MEM32(esp + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = esi + ebx;
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0037AE66; /* jle: less or equal (signed <=) */

loc_0037ABFA: ;
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x14); /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    goto loc_0037AC20;

    /* nop */

loc_0037AC20: ;
    edi = MEM32(esp + ebx * 4 + 0x44);
    xmm4 = MEMF(edi + 0x78); /* movss */
    xmm4 = xmm4 - MEMF(esi + 0x78); /* subss */
    xmm5 = MEMF(edi + 0x80); /* movss */
    xmm5 = xmm5 - MEMF(esi + 0x80); /* subss */
    xmm1 = xmm5; /* movaps */
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x24)); /* sqrtss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm3 = MEMF(0x59D948); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0037ACCE; /* jbe: below or equal (unsigned <=) */

loc_0037AC75: ;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm5 = xmm1; /* movaps */

loc_0037ACCE: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x801FE4);
    PUSH32(esp, 0x801FE8);
    PUSH32(esp, 0); sub_0037A8E0(); /* call 0x0037A8E0 */

loc_0037ACE0: ;
    xmm3 = MEMF(0x801FE8); /* movss */
    xmm6 = MEMF(0x801FE4); /* movss */
    xmm7 = MEMF(0x871B6C); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx * 4 + 0x8717C4)); /* fld float */
    xmm0 = xmm4; /* movaps */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x871B70); /* mulss */
    xmm1 = xmm1 + MEMF(0x871B74); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm4 = xmm4 * MEMF(esp + 0x28); /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm1 = xmm1 + xmm5; /* addss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x48); /* addss */
    xmm1 = xmm1 - MEMF(esp + 0x20); /* subss */
    xmm2 = xmm2 + xmm4; /* addss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm4 = xmm4 - xmm3; /* subss */
    esp = esp + 8;
    MEMF(esp + 0x5C) = xmm2; /* movss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0037ADDB: ;
    if (CMP_NE(MEM32(esp + 0x10), 1)) goto loc_0037ADF0; /* jne: not equal / not zero */

loc_0037ADE2: ;
    edi = ZX8(LO8(eax));
    edi = edi << 0x18;
    edi = edi | 0xFFFFFF;
    goto loc_0037AE1B;

loc_0037ADF0: ;
    edx = MEM32(edi + 0x238);
    ecx = MEM32(esi + 0x238);
    edi = MEM32(edx);
    ecx = MEM32(ecx);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(ecx, edi)) goto loc_0037AE12; /* je: equal / zero */

loc_0037AE07: ;
    edi = edi << 0x18;
    edi = edi | 0xFFFF00;
    goto loc_0037AE1B;

loc_0037AE12: ;
    edi = edi << 0x18;
    edi = edi | 0xFF0000;

loc_0037AE1B: ;
    PUSH32(esp, 0); sub_000D95F0(); /* call 0x000D95F0 */

loc_0037AE20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C7);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 4;
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_0037AE56: ;
    eax = MEM32(esp + 0x3C);
    esp = esp + 0x2C;
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_0037AC20; /* jl: less (signed <) */

loc_0037AE66: ;
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
 * sub_0037AE70
 * Original: 0x0037AE70 - 0x0037AEFD (141 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm5, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037AE70: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x862C87));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    PUSH32(esp, 3);
    eax = ebp;
    SET_LO8(ebx, (CMP_EQ(LO8(ebx), 1)) ? 1 : 0); /* sete */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_0037AE90: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (CMP_G(eax & eax, 0)) ? 1 : 0); /* setg */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0037AED4; /* je: equal / zero */

loc_0037AE9C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037AED4; /* je: equal / zero */

loc_0037AEA0: ;
    ecx = MEM32(0x84A5F8);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = eax + ecx;
    if (CMP_EQ(MEM32(esi + 0x64), 0x42)) goto loc_0037AED4; /* je: equal / zero */

loc_0037AEB7: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x801FE4);
    PUSH32(esp, 0x801FE8);
    PUSH32(esp, 0); sub_0037A8E0(); /* call 0x0037A8E0 */

loc_0037AECA: ;
    esp = esp + 8;
    MEM8(0x8717B0) = 1;

loc_0037AED4: ;
    esi = MEM32(0x84A5F8);
    xmm5 = MEMF(0x871B6C); /* movss */
    xmm7 = MEMF(0x871B70); /* movss */
    ebx = 0x8712A0;
    edi = 0; /* xor self */
    MEM32(esp + 0x10) = ebx;
    esi = esi + 0x57C;
    g_seh_ebp = ebp; sub_0037AF00(); return; /* tail jmp 0x0037AF00 */

}

/**
 * sub_0037B320
 * Original: 0x0037B320 - 0x0037B51A (506 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037B320: ;
    edx = MEM32(0x84A5F8);
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    MEM32(0x84B350) = eax;
    ebx = 0; /* xor self */
    eax = esi;
    MEM8(0x871039) = 1;
    MEM8(0x871B61) = LO8(ebx);
    MEM8(0x871B60) = LO8(ebx);
    PUSH32(esp, 0); sub_00394760(); /* call 0x00394760 */

loc_0037B361: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037B4B4; /* je: equal / zero */

loc_0037B369: ;
    if (CMP_EQ(MEM8(0x864EBD), LO8(ebx))) goto loc_0037B37E; /* je: equal / zero */

loc_0037B371: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_0037B4B4; /* je: equal / zero */

loc_0037B37E: ;
    MEM8(0x871B61) = 1;
    MEM8(0x871B60) = 1;

loc_0037B38C: ;
    eax = (int32_t)MEMF(0x849C30); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, eax);
    MEM32(0x8717D4) = edx;
    edx = esp + 0x10;
    PUSH32(esp, 0x63DA38);
    PUSH32(esp, edx);
    MEM32(0x8717D0) = eax;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0037B3B7: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x7F);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037B3CB: ;
    eax = 0; /* xor self */
    /* nop */

loc_0037B3D0: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x14));
    MEM8(eax + 0x8717D8) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0037B3D0; /* jne: not equal / not zero */

loc_0037B3DF: ;
    edx = MEM32(0x8717D4);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, 0x63DA38);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0037B3F5: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x7F);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037B409: ;
    eax = 0; /* xor self */
    goto loc_0037B410;

    /* nop */

loc_0037B410: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x14));
    MEM8(eax + 0x871858) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0037B410; /* jne: not equal / not zero */

loc_0037B41F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x6490F4); /* movss */
    MEM8(0x8717CC) = LO8(ebx);
    MEM8(0x871111) = LO8(ebx);
    MEM8(0x871110) = LO8(ebx);
    MEM32(0x8710F8) = ebx;
    MEMF(0x8710FC) = xmm0; /* movss */
    MEMF(0x871100) = xmm1; /* movss */
    MEM32(0x8710F4) = ebx;
    MEM32(0x871124) = ebx;
    MEMF(0x87112C) = xmm0; /* movss */
    MEMF(0x871130) = xmm1; /* movss */
    MEM32(0x871118) = ebx;
    MEM8(0x871138) = LO8(ebx);
    MEM8(0x87113A) = LO8(ebx);
    MEM8(0x87113C) = LO8(ebx);
    MEM8(0x87113D) = LO8(ebx);
    PUSH32(esp, 0); sub_003B5D30(); /* call 0x003B5D30 */

loc_0037B491: ;
    if (CMP_EQ(eax, ebx)) goto loc_0037B4EA; /* je: equal / zero */

loc_0037B495: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x570);
    if (CMP_EQ(edi, ebx)) goto loc_0037B4E9; /* je: equal / zero */

loc_0037B4A0: ;
    MEM8(0x87113A) = 1;
    PUSH32(esp, 0); sub_003B5D30(); /* call 0x003B5D30 */

loc_0037B4AC: ;
    if (CMP_NE(eax, ebx)) goto loc_0037B4BF; /* jne: not equal / not zero */

loc_0037B4B0: ;
    eax = 0; /* xor self */
    goto loc_0037B4C2;

loc_0037B4B4: ;
    MEM8(0x871B61) = LO8(ebx);
    goto loc_0037B38C;

loc_0037B4BF: ;
    eax = eax + 0x40;

loc_0037B4C2: ;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037B4C7: ;
    PUSH32(esp, 0); sub_0037BD90(); /* call 0x0037BD90 */

loc_0037B4CC: ;
    MEM32(0x871140) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0037B4D8: ;
    MEM8(0x87113C) = LO8(eax);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x20), _icall_esp); /* indirect call */
    }

loc_0037B4E4: ;
    MEM8(0x87113D) = LO8(eax);

loc_0037B4E9: ;
    POP32(esp, edi);

loc_0037B4EA: ;
    PUSH32(esp, 3);
    eax = esi;
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_0037B4F3: ;
    esp = esp + 4;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x2C);
    MEM32(0x87103C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x776280);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x8710E4) = ebx;
    MEM32(0x871040) = eax;
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B520
 * Original: 0x0037B520 - 0x0037B5B5 (149 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037B520: ;
    eax = MEM32(ebx + 0x4B0);
    ecx = MEM32(eax + 0x24);
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_0037B54B: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_0037B557: ;
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63DA28);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_0037B56B: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0037B5AE; /* je: equal / zero */

loc_0037B572: ;
    eax = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_0037B57B; /* je: equal / zero */

loc_0037B578: ;
    eax = MEM32(esi + 0x34);

loc_0037B57B: ;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x3C8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    esi = esp + 0x18;
    ecx = edi;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_0037B592: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0037B5AE; /* je: equal / zero */

loc_0037B599: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    MEM32(ebp) = ecx;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = eax;

loc_0037B5AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B5C0
 * Original: 0x0037B5C0 - 0x0037B6BA (250 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B5C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037B5C0: ;
    SET_LO8(eax, MEM8(0x871B61));
    esp = esp - 0x10;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037B6B5; /* je: equal / zero */

loc_0037B5D5: ;
    SET_LO8(eax, MEM8(ecx + 0x1D));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0037B6B5; /* jbe: below or equal (unsigned <=) */

loc_0037B5E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x63DA14;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0037B5EC: ;
    esi = eax;
    ecx = 0x13;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0037B6B3; /* jne: not equal / not zero */

loc_0037B5FD: ;
    ecx = MEM32(0x84A5F8);
    eax = ecx + 0xDA78;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x84B350);
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(edx + 0x135));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037B64B; /* je: equal / zero */

loc_0037B62E: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ebx = eax + ecx + -1744;
    PUSH32(esp, 0); sub_0037B520(); /* call 0x0037B520 */

loc_0037B648: ;
    esp = esp + 4;

loc_0037B64B: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, 0x4E6E6B28);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = esp + 0x2C;
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_0037B677: ;
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x649AA4); /* mulss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ebp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x649AA0); /* mulss */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0x14;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebp + 4) = xmm1; /* movss */
    POP32(esp, ebx);

loc_0037B6B3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0037B6B5: ;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B6C0
 * Original: 0x0037B6C0 - 0x0037B6F1 (49 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B6C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037B6C0: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    edx = ebp + 0x1F;
    edx = edx & 0xFFFFFFE0u;
    PUSH32(esp, edi);
    edi = esi + edx;
    if (CMP_GE(edi, eax)) { sub_0037B6F1(); return; } /* jge: greater or equal (signed >=) */

loc_0037B6DA: ;
    eax = MEM32(ecx);
    eax = eax + esi;
    esi = MEM32(ecx + 0x10);
    esi++;
    MEM32(ecx + 4) = edi;
    POP32(esp, edi);
    MEM32(ecx + 0x10) = esi;
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037B7E0
 * Original: 0x0037B7E0 - 0x0037B802 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B7E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037B7E0: ;
    SET_LO8(eax, MEM8(0x875B40));
    esp = esp - 8;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = 0x875B48;
    if (TEST_NZ(LO8(eax), 1)) { sub_0037B802(); return; } /* jne: not equal / not zero */

loc_0037B7F2: ;
    MEM32(0x875B40) = MEM32(0x875B40) | 1;
    eax = 0; /* xor self */
    MEM32(0x875980) = eax;
    g_seh_ebp = ebp; sub_0037B807(); return; /* tail jmp 0x0037B807 */

}

/**
 * sub_0037B8E0
 * Original: 0x0037B8E0 - 0x0037B91C (60 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B8E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037B8E0: ;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = edx + 0x10;
    ecx = eax;
    if (CMP_LE(esi & esi, 0)) goto loc_0037B8FC; /* jle: less or equal (signed <=) */

loc_0037B8EC: ;
    edx = esi + -1;
    edx = edx >> 3;
    edx++;

loc_0037B8F3: ;
    /* TODO: prefetcht0 byte ptr [ecx] */
    ecx = ecx + 0x20;
    edx--;
    if ((edx != 0)) goto loc_0037B8F3; /* jne: not equal / not zero */

loc_0037B8FC: ;
    (void)0; /* cmp esi, 8 - flags set for next jcc */
    edx = 8;
    if (CMP_G(esi, 8)) goto loc_0037B908; /* jg: greater (signed >) */

loc_0037B906: ;
    edx = esi;

loc_0037B908: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_LE(edx & edx, 0)) goto loc_0037B91B; /* jle: less or equal (signed <=) */

loc_0037B90D: ;
    /* nop */

loc_0037B910: ;
    ecx = MEM32(eax);
    /* TODO: prefetcht0 byte ptr [ecx] */
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_0037B910; /* jne: not equal / not zero */

loc_0037B91B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B920
 * Original: 0x0037B920 - 0x0037B979 (89 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B920(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037B920: ;
    eax = MEM32(0x8758E8);
    if (TEST_NZ(eax, eax)) goto loc_0037B969; /* jne: not equal / not zero */

loc_0037B929: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82);
    PUSH32(esp, 0x63E208);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0037B93F: ;
    ecx = eax + 0x1F;
    ecx = ecx & 0xFFFFFFE0u;
    esp = esp + 0x10;
    ecx = ecx - eax;
    MEM32(0x87544C) = eax;
    MEM32(0x875450) = ecx;
    MEM32(0x875458) = 0x20000;
    MEM32(0x8758E8) = 1;

loc_0037B969: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    ecx = 0x87544C;
    PUSH32(esp, 0); sub_0037B6C0(); /* call 0x0037B6C0 */

loc_0037B978: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B980
 * Original: 0x0037B980 - 0x0037B9BA (58 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B980(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037B980: ;
    edx = 0x75A8D8;
    PUSH32(esp, 0); sub_0037B8E0(); /* call 0x0037B8E0 */

loc_0037B98A: ;
    eax = MEM32(0x75A8D8);
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    MEM32(0x75A8DC) = 8;
    if (CMP_G(eax, 8)) goto loc_0037B9A3; /* jg: greater (signed >) */

loc_0037B99E: ;
    MEM32(0x75A8DC) = eax;

loc_0037B9A3: ;
    MEM32(0x75A8E0) = eax;
    MEM32(0x75A8D8) = 0;
    MEM8(0x75A8E4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B9C0
 * Original: 0x0037B9C0 - 0x0037BAA2 (226 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B9C0(void)
{

loc_0037B9C0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(edi + 0x320) = ebx;
    MEM32(edi + 0x2440) = 0x14;
    MEM32(edi + 0x2460) = ebx;
    MEM32(edi + 0x3480) = ebx;
    PUSH32(esp, esi);
    MEM32(edi + 0x36A0) = 0x15;
    MEM32(edi + 0x36C0) = ebx;
    esi = edi + 0x3800;
    MEM32(edi + 0x37E0) = ebx;
    PUSH32(esp, 0); sub_0037D4C0(); /* call 0x0037D4C0 */

loc_0037BA04: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    MEM8(edi + 0x3830) = LO8(eax);
    PUSH32(esp, 0); sub_00287A70(); /* call 0x00287A70 */

loc_0037BA13: ;
    ecx = eax;
    edx = esp + 0xC;
    MEM32(edi + 0x3838) = eax;
    PUSH32(esp, edx);
    eax = edi + 0x3840;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, eax);
    ecx = 9;
    MEM32(edi + 0x383C) = ebx;
    PUSH32(esp, 0); sub_002D1E60(); /* call 0x002D1E60 */

loc_0037BA3B: ;
    SET_LO8(ecx, MEM8(esp + 0xB));
    esi = 1;
    MEM32(edi + 0x3850) = esi;
    MEM32(edi + 0x3854) = esi;
    MEM8(edi + 0x3858) = LO8(ecx);
    PUSH32(esp, 0); sub_00287A70(); /* call 0x00287A70 */

loc_0037BA5B: ;
    edx = eax;
    MEM32(edi + 0x3860) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi + 0x3868;
    PUSH32(esp, ecx);
    ecx = 9;
    MEM32(edi + 0x3864) = ebx;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_002D1E60(); /* call 0x002D1E60 */

loc_0037BA83: ;
    MEM32(edi + 0x3878) = esi;
    MEM32(edi + 0x387C) = esi;
    esi = edi + 0x3880;
    PUSH32(esp, 0); sub_0037D4C0(); /* call 0x0037D4C0 */

loc_0037BA9A: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0037BAB0
 * Original: 0x0037BAB0 - 0x0037BC8B (475 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BAB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037BAB0: ;
    esp = esp - 0x20;
    eax = MEM32(edi + 0x37E0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0037BC87; /* jle: less or equal (signed <=) */

loc_0037BAC9: ;
    PUSH32(esp, ebx);
    eax = 0xFFFFFFF4u;
    eax = eax - edi;
    ecx = 0xFFFFFEF4u;
    PUSH32(esp, ebp);
    ecx = ecx - edi;
    PUSH32(esp, esi);
    ebp = edi + 0x10C;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    goto loc_0037BAF2;

loc_0037BAEA: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);

loc_0037BAF2: ;
    MEM32(ebp + 0x100) = 0;
    MEM32(ebp) = 0;
    ecx = ecx + ebp;
    ecx = MEM32(ecx + edi + 0x34A0);
    eax = eax + ebp;
    edx = MEM32(eax + edi + 0x34A0);
    eax = MEM32(edi + 0x36A0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0037BB25: ;
    esp = esp + 0xC;
    esi = eax;
    PUSH32(esp, 0x84D458);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_0037BB38: ;
    if (TEST_NZ(eax, eax)) goto loc_0037BC01; /* jne: not equal / not zero */

loc_0037BB40: ;
    PUSH32(esp, 0); sub_00061000(); /* call 0x00061000 */

loc_0037BB45: ;
    MEM32(esp + 0x18) = eax;
    (void)0; /* cmp MEM8(esi), 0x5C - flags set for next jcc */
    ebx = esi;
    if (CMP_NE(MEM8(esi), 0x5C)) goto loc_0037BB53; /* jne: not equal / not zero */

loc_0037BB50: ;
    ebx = esi + 1;

loc_0037BB53: ;
    eax = ebx;
    edx = eax + 1;

loc_0037BB58: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037BB58; /* jne: not equal / not zero */

loc_0037BB5F: ;
    eax = eax - edx;
    MEM32(esp + 0xC) = eax;
    if ((eax == 0)) goto loc_0037BB7C; /* je: equal / zero */

loc_0037BB67: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046F000(); /* call 0x0046F000 */

loc_0037BB6F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0037BB7C; /* je: equal / zero */

loc_0037BB76: ;
    eax = eax - ebx;
    MEM32(esp + 0xC) = eax;

loc_0037BB7C: ;
    edx = MEM32(esp + 0x18);
    esi = MEM32(edx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ebx;
    if (TEST_Z(esi, esi)) goto loc_0037BBEB; /* je: equal / zero */

loc_0037BB93: ;
    ecx = ZX8(MEM8(esi + 0x40));
    eax = MEM32(esp + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_0037BBB1; /* jne: not equal / not zero */

loc_0037BB9F: ;
    PUSH32(esp, eax);
    edx = esi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_0037BBAA: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0037BBB8; /* je: equal / zero */

loc_0037BBB1: ;
    esi = MEM32(esi + 0xC);
    if (TEST_NZ(esi, esi)) goto loc_0037BB93; /* jne: not equal / not zero */

loc_0037BBB8: ;
    if (TEST_Z(esi, esi)) goto loc_0037BBEB; /* je: equal / zero */

loc_0037BBBC: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ebx = esp + 0x14;
    PUSH32(esp, 0); sub_00061430(); /* call 0x00061430 */

loc_0037BBCA: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0037BBE7; /* je: equal / zero */

loc_0037BBD2: ;
    esi = MEM32(esi + 4);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0); sub_000613A0(); /* call 0x000613A0 */

loc_0037BBE5: ;
    esi = eax;

loc_0037BBE7: ;
    if (TEST_NZ(esi, esi)) goto loc_0037BBFD; /* jne: not equal / not zero */

loc_0037BBEB: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0029CD50(); /* call 0x0029CD50 */

loc_0037BBF6: ;
    esp = esp + 4;
    if (CMP_NE(LO8(eax), 1)) goto loc_0037BC6A; /* jne: not equal / not zero */

loc_0037BBFD: ;
    esi = MEM32(esp + 0x1C);

loc_0037BC01: ;
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_0005EFE0(); /* call 0x0005EFE0 */

loc_0037BC0B: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037BC6A; /* je: equal / zero */

loc_0037BC12: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_0037B920(); /* call 0x0037B920 */

loc_0037BC19: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0037BC3A; /* je: equal / zero */

loc_0037BC20: ;
    ecx = MEM32(ebp + 0x3394);
    edx = edi + 0x3880;
    PUSH32(esp, edx);
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0037FF60(); /* call 0x0037FF60 */

loc_0037BC38: ;
    goto loc_0037BC3C;

loc_0037BC3A: ;
    eax = 0; /* xor self */

loc_0037BC3C: ;
    ecx = MEM32(edi + 0x108);
    MEM32(edi + ecx * 4 + 8) = eax;
    MEM32(edi + 0x108) = MEM32(edi + 0x108) + 1;
    eax = MEM32(ebp + 0x3394);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037BC57: ;
    edx = MEM32(edi + 0x320);
    MEM32(edi + edx * 4 + 0x340) = eax;
    MEM32(edi + 0x320) = MEM32(edi + 0x320) + 1;

loc_0037BC6A: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(edi + 0x37E0);
    eax++;
    ebp = ebp + 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(eax, ecx)) goto loc_0037BAEA; /* jl: less (signed <) */

loc_0037BC84: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0037BC87: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0037BC90
 * Original: 0x0037BC90 - 0x0037BCC6 (54 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037BC90: ;
    eax = MEM32(ebx + 0x108);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0037BCC4; /* jle: less or equal (signed <=) */

loc_0037BC9D: ;
    PUSH32(esp, ebp);
    ebp = ebx + 8;
    PUSH32(esp, esi);
    esi = ebp;

loc_0037BCA4: ;
    PUSH32(esp, ebp);
    eax = ebx + 0x320;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00382640(); /* call 0x00382640 */

loc_0037BCB4: ;
    eax = MEM32(ebx + 0x108);
    edi++;
    esi = esi + 4;
    if (CMP_L(edi, eax)) goto loc_0037BCA4; /* jl: less (signed <) */

loc_0037BCC2: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0037BCC4: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037BCD0
 * Original: 0x0037BCD0 - 0x0037BD49 (121 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BCD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037BCD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x37E0);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0037BD44; /* jle: less or equal (signed <=) */

loc_0037BCE2: ;
    PUSH32(esp, esi);
    ebx = ebx + 0x10C;
    PUSH32(esp, edi);
    /* nop */

loc_0037BCF0: ;
    eax = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_0037BD30; /* je: equal / zero */

loc_0037BCF6: ;
    esi = eax + -12;
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0037BD05: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0037BD30; /* je: equal / zero */

loc_0037BD0B: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0037BD16; /* je: equal / zero */

loc_0037BD12: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0037BD16: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0037BD30; /* jne: not equal / not zero */

loc_0037BD1D: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0037BD26: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0037BD30: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x37E0);
    ebp++;
    ebx = ebx + 4;
    if (CMP_L(ebp, ecx)) goto loc_0037BCF0; /* jl: less (signed <) */

loc_0037BD42: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0037BD44: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BD50
 * Original: 0x0037BD50 - 0x0037BD7D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BD50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037BD50: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = esp + 4;
    eax = esp + 8;
    esi = 0x8753B0;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0037BD6A: ;
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, MEM32(0x8753B8) - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(eax, MEM32(0x8753B8))) { sub_0037BD7D(); return; } /* jne: not equal / not zero */

loc_0037BD77: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0037BD90
 * Original: 0x0037BD90 - 0x0037BE6B (219 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BD90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037BD90: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = esp + 8;
    eax = esp + 0x10;
    esi = 0x8753B0;
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0037BDAD: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, MEM32(0x8753B8))) goto loc_0037BDC4; /* je: equal / zero */

loc_0037BDB9: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0037BE65; /* jne: not equal / not zero */

loc_0037BDC4: ;
    edx = edi;
    esi = 0x871FC0;
    PUSH32(esp, 0); sub_0037C240(); /* call 0x0037C240 */

loc_0037BDD0: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0037BDDD; /* jne: not equal / not zero */

loc_0037BDD5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0037BDDD: ;
    ecx = MEM32(eax * 4 + 0x871FC0);
    edx = MEM32(eax * 4 + 0x872FC0);
    esi = eax * 4 + 0x871FC0;
    eax = MEM32(0x873FC0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0037BE02: ;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0037CC60(); /* call 0x0037CC60 */

loc_0037BE0B: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0037BE62; /* je: equal / zero */

loc_0037BE11: ;
    eax = MEM32(esi);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037BE18: ;
    edi = eax;
    ecx = esp + 0x14;
    eax = esp + 0xC;
    esi = 0x8753B0;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0037BE30: ;
    eax = MEM32(esp + 0xC);
    if (CMP_NE(eax, MEM32(0x8753B8))) goto loc_0037BE59; /* jne: not equal / not zero */

loc_0037BE3C: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0); sub_0034F380(); /* call 0x0034F380 */

loc_0037BE57: ;
    eax = MEM32(eax);

loc_0037BE59: ;
    MEM32(eax + 0xC) = ebx;
    MEM32(0x8758E4) = MEM32(0x8758E4) + 1;

loc_0037BE62: ;
    eax = ebx;
    POP32(esp, ebx);

loc_0037BE65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0037BE70
 * Original: 0x0037BE70 - 0x0037BE88 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037BE70: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8753B8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    SET_LO8(ebx, 1);
    /* nop */
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0037BE88(); return; } /* je: equal / zero */

loc_0037BE84: ;
    SET_LO8(ebx, 0); /* xor self */
    g_seh_ebp = ebp; sub_0037BE8A(); return; /* tail jmp 0x0037BE8A */

}

/**
 * sub_0037BEE0
 * Original: 0x0037BEE0 - 0x0037C011 (305 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BEE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037BEE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00379880(); /* call 0x00379880 */

loc_0037BEE7: ;
    PUSH32(esp, 0); sub_00379770(); /* call 0x00379770 */

loc_0037BEEC: ;
    PUSH32(esp, 0x74E3A1);
    PUSH32(esp, 0x63E200);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D720(); /* call 0x0037D720 */

loc_0037BF00: ;
    PUSH32(esp, 0x84B354);
    PUSH32(esp, 0x63E1F8);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D720(); /* call 0x0037D720 */

loc_0037BF14: ;
    PUSH32(esp, 0x74E3A4);
    PUSH32(esp, 0x63E1EC);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D5C0(); /* call 0x0037D5C0 */

loc_0037BF28: ;
    PUSH32(esp, 0x84B358);
    PUSH32(esp, 0x63E1E0);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D5C0(); /* call 0x0037D5C0 */

loc_0037BF3C: ;
    PUSH32(esp, 0x74E3A8);
    PUSH32(esp, 0x63E1D8);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D510(); /* call 0x0037D510 */

loc_0037BF50: ;
    PUSH32(esp, 0x84B35C);
    PUSH32(esp, 0x63E1CC);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D510(); /* call 0x0037D510 */

loc_0037BF64: ;
    PUSH32(esp, 0x84B360);
    PUSH32(esp, 0x63E1C4);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D510(); /* call 0x0037D510 */

loc_0037BF78: ;
    PUSH32(esp, 0x8753AE);
    PUSH32(esp, 0x63E1B8);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D720(); /* call 0x0037D720 */

loc_0037BF8C: ;
    PUSH32(esp, 0x8753AC);
    PUSH32(esp, 0x63E1AC);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D720(); /* call 0x0037D720 */

loc_0037BFA0: ;
    PUSH32(esp, 0x8753AD);
    PUSH32(esp, 0x63E1A0);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D720(); /* call 0x0037D720 */

loc_0037BFB4: ;
    PUSH32(esp, 0x8753AF);
    PUSH32(esp, 0x63E194);
    PUSH32(esp, 0x875400);
    PUSH32(esp, 0); sub_0037D720(); /* call 0x0037D720 */

loc_0037BFC8: ;
    PUSH32(esp, 0); sub_00378ED0(); /* call 0x00378ED0 */

loc_0037BFCD: ;
    edi = 0x871B80;
    PUSH32(esp, 0); sub_0037BAB0(); /* call 0x0037BAB0 */

loc_0037BFD7: ;
    ebx = edi;
    PUSH32(esp, 0); sub_0037BC90(); /* call 0x0037BC90 */

loc_0037BFDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0037BCD0(); /* call 0x0037BCD0 */

loc_0037BFE4: ;
    eax = MEM32(0x87544C);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0037C010; /* je: equal / zero */

loc_0037BFEF: ;
    ecx = MEM32(0x875450);
    ecx++;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x875450) = ecx;
    PUSH32(esp, 0); sub_003E6F10(); /* call 0x003E6F10 */

loc_0037C003: ;
    eax = MEM32(0x875450);
    esp = esp + 8;
    MEM32(0x875458) = eax;

loc_0037C010: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C020
 * Original: 0x0037C020 - 0x0037C23C (540 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C020(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0037C020: ;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037C237; /* je: equal / zero */

loc_0037C033: ;
    PUSH32(esp, 0); sub_0037A7D0(); /* call 0x0037A7D0 */

loc_0037C038: ;
    PUSH32(esp, 0); sub_0037B980(); /* call 0x0037B980 */

loc_0037C03D: ;
    if (CMP_GE(esi, 2)) goto loc_0037C04E; /* jge: greater or equal (signed >=) */

loc_0037C042: ;
    eax = MEM32(esi * 4 + 0x8470FC);
    eax = MEM32(eax + 8);
    goto loc_0037C053;

loc_0037C04E: ;
    eax = 0x75A0B4;

loc_0037C053: ;
    eax = MEM32(eax + 8);
    (void)0; /* test eax, 0x100 - flags set for next jcc */
    SET_LO8(ecx, (CMP_A(eax & 0x100, 0)) ? 1 : 0); /* seta */
    (void)0; /* test eax, 0x200 - flags set for next jcc */
    SET_LO8(edx, (CMP_A(eax & 0x200, 0)) ? 1 : 0); /* seta */
    (void)0; /* test eax, 0x400 - flags set for next jcc */
    MEM8(0x8753AC) = LO8(ecx);
    SET_LO8(ecx, (CMP_A(eax & 0x400, 0)) ? 1 : 0); /* seta */
    (void)0; /* test eax, 0x800 - flags set for next jcc */
    eax = MEM32(0x871B88);
    MEM8(0x8753AD) = LO8(edx);
    SET_LO8(edx, (CMP_A(eax & 0x800, 0)) ? 1 : 0); /* seta */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x8753AF) = LO8(ecx);
    MEM8(0x8753AE) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_0037C218; /* je: equal / zero */

loc_0037C09B: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_0037B7E0(); /* call 0x0037B7E0 */

loc_0037C0A3: ;
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 * MEMF(0x649714); /* mulss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 * MEMF(0x649710); /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esi * 4 + 0x8717C4); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 8);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x1C); /* subss */
    MEMF(0x75A8BC) = xmm1; /* movss */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = MEM32(esp + 0x18);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x20); /* subss */
    MEMF(0x75A8C0) = xmm1; /* movss */
    MEM32(esp + 0x24) = edx;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x24); /* subss */
    MEMF(0x75A8C4) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x2C) = eax;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 / MEMF(esp + 0x2C); /* divss */
    MEMF(0x75A8CC) = xmm2; /* movss */
    MEM32(esp + 0x30) = ecx;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 / MEMF(esp + 0x30); /* divss */
    PUSH32(esp, 0x75A240);
    MEM32(0x84B370) = esi;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(0x75A8D0) = xmm2; /* movss */
    MEMF(0x75A8C8) = xmm1; /* movss */
    MEMF(0x75A8D4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0037C4A0(); /* call 0x0037C4A0 */

loc_0037C1A6: ;
    SET_LO8(eax, MEM8(0x847265));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0037C1C4; /* jne: not equal / not zero */

loc_0037C1B0: ;
    ecx = MEM32(0x871B88);
    edx = MEM32(ecx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x75A240);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0037C1C4: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0037C1D0: ;
    MEM32(0x549AE8) = 0;
    PUSH32(esp, 0); sub_001F6060(); /* call 0x001F6060 */

loc_0037C1DF: ;
    edx = MEM32(0x8470DC);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    ecx = MEM32(eax + edx + 0x3E0);
    eax = eax + edx;
    if (TEST_Z(ecx, ecx)) goto loc_0037C20C; /* je: equal / zero */

loc_0037C1FA: ;
    ecx = ZX8(MEM8(eax + 0x2A8));
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_0037A9F0(); /* call 0x0037A9F0 */

loc_0037C209: ;
    esp = esp + 4;

loc_0037C20C: ;
    PUSH32(esp, ebx);
    ebx = 0x75A240;
    PUSH32(esp, 0); sub_0037C7C0(); /* call 0x0037C7C0 */

loc_0037C217: ;
    POP32(esp, ebx);

loc_0037C218: ;
    SET_LO8(ecx, MEM8(0x875B40));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0037C237; /* jne: not equal / not zero */

loc_0037C227: ;
    MEM32(0x875B40) = MEM32(0x875B40) | eax;
    MEM32(0x875980) = 0;

loc_0037C237: ;
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C240
 * Original: 0x0037C240 - 0x0037C278 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C240(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037C240: ;
    ecx = MEM32(esi + 0x2020);
    MEM32(esi + ecx * 4 + 0x2040) = edx;
    ecx = esi + 0x2040;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = 0; /* xor self */
    if (CMP_EQ(edi, edx)) goto loc_0037C26B; /* je: equal / zero */

loc_0037C25C: ;
    /* nop */

loc_0037C260: ;
    edi = MEM32(ecx + 4);
    ecx = ecx + 4;
    eax++;
    if (CMP_NE(edi, edx)) goto loc_0037C260; /* jne: not equal / not zero */

loc_0037C26B: ;
    (void)0; /* cmp eax, MEM32(esi + 0x2020) - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(eax, MEM32(esi + 0x2020))) goto loc_0037C277; /* jne: not equal / not zero */

loc_0037C274: ;
    eax = eax | 0xFFFFFFFFu;

loc_0037C277: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C280
 * Original: 0x0037C280 - 0x0037C295 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C280(void)
{

loc_0037C280: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0037C2F0(); /* call 0x0037C2F0 */

loc_0037C28C: ;
    eax = edi + esi * 4;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037C2A0
 * Original: 0x0037C2A0 - 0x0037C2B2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C2A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037C2A0: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    if (CMP_NE(eax, ecx)) { sub_0037C2B2(); return; } /* jne: not equal / not zero */

loc_0037C2AF: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0037C2F0
 * Original: 0x0037C2F0 - 0x0037C33B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C2F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0037C2F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F160);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    edi = edi;

loc_0037C320: ;
    if (CMP_BE(ecx & ecx, 0)) { sub_0037C33B(); return; } /* jbe: below or equal (unsigned <=) */

loc_0037C324: ;
    MEM32(ebp + -20) = eax;
    if (TEST_Z(eax, eax)) goto loc_0037C32F; /* je: equal / zero */

loc_0037C32B: ;
    esi = MEM32(edx);
    MEM32(eax) = esi;

loc_0037C32F: ;
    ecx--;
    MEM32(ebp + 0xC) = ecx;
    eax = eax + 4;
    MEM32(ebp + 8) = eax;
    goto loc_0037C320;

}

/**
 * sub_0037C360
 * Original: 0x0037C360 - 0x0037C3AD (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0037C360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F200);
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

loc_0037C390: ;
    if (CMP_EQ(ecx, edx)) { sub_0037C3AD(); return; } /* je: equal / zero */

loc_0037C394: ;
    MEM32(ebp + -20) = eax;
    if (TEST_Z(eax, eax)) goto loc_0037C39F; /* je: equal / zero */

loc_0037C39B: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;

loc_0037C39F: ;
    eax = eax + 4;
    MEM32(ebp + 0xC) = eax;
    ecx = ecx + 4;
    MEM32(ebp + 8) = ecx;
    goto loc_0037C390;

}

/**
 * sub_0037C3D0
 * Original: 0x0037C3D0 - 0x0037C496 (198 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C3D0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0037C3D0: ;
    esp = esp - 0x30;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x34); /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    PUSH32(esp, 0x3F800000);
    xmm0 = xmm0 - xmm4; /* subss */
    xmm1 = xmm1 - xmm4; /* subss */
    PUSH32(esp, edi);
    ecx = esi;
    edx = esp + 8;
    eax = esp + 0x20;
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_0037C6F0(); /* call 0x0037C6F0 */

loc_0037C451: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    ecx = esi;
    edx = esp + 0x14;
    eax = esp + 8;
    PUSH32(esp, 0); sub_0037C6F0(); /* call 0x0037C6F0 */

loc_0037C466: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    ecx = esi;
    edx = esp + 0x2C;
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0037C6F0(); /* call 0x0037C6F0 */

loc_0037C47B: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    ecx = esi;
    edx = esp + 0x20;
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0037C6F0(); /* call 0x0037C6F0 */

loc_0037C490: ;
    esp = esp + 0x30;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037C4A0
 * Original: 0x0037C4A0 - 0x0037C536 (150 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C4A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0037C4A0: ;
    eax = MEM32(0x776184);
    if (CMP_EQ(eax, 0x8072F4)) goto loc_0037C4BA; /* je: equal / zero */

loc_0037C4AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_0037C4B7: ;
    esp = esp + 8;

loc_0037C4BA: ;
    eax = MEM32(0x6BAF28);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    eax = MEM32(esp + 4);
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x8497DC); /* movss */
    ecx = 0; /* xor self */
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(0x648D40); /* movss */
    MEMF(0x8086BC) = xmm0; /* movss */
    MEM8(0x8086C6) = 1;
    MEM32(eax + 0x678) = ecx;
    eax = 0; /* xor self */
    MEM32(0x776180) = ecx;
    PUSH32(esp, 0); sub_005362D0(); /* call 0x005362D0 */

loc_0037C533: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037C540
 * Original: 0x0037C540 - 0x0037C6E6 (422 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C540(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0037C540: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x670);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    MEMF(ebx + eax * 4 + 0x640) = xmm0; /* movss */
    eax = MEM32(ebx + 0x670);
    edx = MEM32(ecx);
    xmm0 = MEMF(0x649718); /* movss */
    eax = eax + 0x3C;
    eax = eax << 4;
    MEM32(eax + ebx) = edx;
    eax = MEM32(ebx + 0x670);
    eax = eax << 4;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(ecx + 4); /* subss */
    MEMF(eax + ebx + 0x3C4) = xmm1; /* movss */
    edx = MEM32(ebx + 0x670);
    xmm1 = MEMF(0x648D10); /* movss */
    edx = edx << 4;
    MEMF(edx + ebx + 0x3C8) = xmm1; /* movss */
    eax = MEM32(ebx + 0x670);
    eax = eax << 4;
    MEM32(eax + ebx + 0x3CC) = esi;
    eax = MEM32(ebx + 0x670);
    eax++;
    MEM32(ebx + 0x670) = eax;
    xmm3 = MEMF(ecx); /* movss */
    eax = eax + 0x3C;
    eax = eax << 4;
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(eax + ebx) = xmm3; /* movss */
    edx = MEM32(ebx + 0x670);
    edx = edx << 4;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - MEMF(ecx + 4); /* subss */
    MEMF(edx + ebx + 0x3C4) = xmm3; /* movss */
    eax = MEM32(ebx + 0x670);
    eax = eax << 4;
    MEMF(eax + ebx + 0x3C8) = xmm1; /* movss */
    edx = MEM32(ebx + 0x670);
    edx = edx << 4;
    MEM32(edx + ebx + 0x3CC) = esi;
    eax = MEM32(ebx + 0x670);
    eax++;
    MEM32(ebx + 0x670) = eax;
    xmm3 = MEMF(ecx); /* movss */
    eax = eax + 0x3C;
    eax = eax << 4;
    xmm3 = xmm3 + xmm2; /* addss */
    xmm2 = MEMF(esp + 8); /* movss */
    MEMF(eax + ebx) = xmm3; /* movss */
    xmm3 = MEMF(ecx + 4); /* movss */
    eax = MEM32(ebx + 0x670);
    eax = eax << 4;
    xmm3 = xmm3 + xmm2; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(eax + ebx + 0x3C4) = xmm4; /* movss */
    edx = MEM32(ebx + 0x670);
    edx = edx << 4;
    MEMF(edx + ebx + 0x3C8) = xmm1; /* movss */
    eax = MEM32(ebx + 0x670);
    eax = eax << 4;
    MEM32(eax + ebx + 0x3CC) = esi;
    eax = MEM32(ebx + 0x670);
    eax++;
    MEM32(ebx + 0x670) = eax;
    edx = MEM32(ecx);
    eax = eax + 0x3C;
    eax = eax << 4;
    MEM32(eax + ebx) = edx;
    xmm3 = MEMF(ecx + 4); /* movss */
    eax = MEM32(ebx + 0x670);
    xmm3 = xmm3 + xmm2; /* addss */
    eax = eax << 4;
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(eax + ebx + 0x3C4) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x670);
    ecx = ecx << 4;
    MEMF(ecx + ebx + 0x3C8) = xmm1; /* movss */
    edx = MEM32(ebx + 0x670);
    edx = edx << 4;
    MEM32(edx + ebx + 0x3CC) = esi;
    MEM32(ebx + 0x670) = MEM32(ebx + 0x670) + 1;
    PUSH32(esp, 0); sub_0037C7C0(); /* call 0x0037C7C0 */

loc_0037C6E2: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037C6F0
 * Original: 0x0037C6F0 - 0x0037C7BC (204 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C6F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0037C6F0: ;
    xmm0 = MEMF(0x649718); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x66C);
    esi = esi << 4;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEM32(esi + ebx) = edi;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    eax = MEM32(ebx + 0x66C);
    eax = eax << 4;
    MEMF(eax + ebx + 4) = xmm1; /* movss */
    eax = MEM32(ebx + 0x66C);
    xmm1 = MEMF(0x648D10); /* movss */
    eax = eax << 4;
    MEMF(eax + ebx + 8) = xmm1; /* movss */
    eax = MEM32(ebx + 0x66C);
    eax = eax << 4;
    MEM32(eax + ebx + 0xC) = ecx;
    edi = MEM32(ebx + 0x66C);
    edi++;
    MEM32(ebx + 0x66C) = edi;
    esi = MEM32(edx);
    eax = edi;
    eax = eax << 4;
    MEM32(eax + ebx) = esi;
    xmm0 = xmm0 - MEMF(edx + 4); /* subss */
    edx = MEM32(ebx + 0x66C);
    edx = edx << 4;
    MEMF(edx + ebx + 4) = xmm0; /* movss */
    eax = MEM32(ebx + 0x66C);
    xmm0 = MEMF(esp + 0x14); /* movss */
    eax = eax << 4;
    MEMF(eax + ebx + 8) = xmm1; /* movss */
    edx = MEM32(ebx + 0x66C);
    edx = edx << 4;
    MEM32(edx + ebx + 0xC) = ecx;
    edx = MEM32(ebx + 0x66C);
    edx++;
    eax = edx;
    (void)0; /* cmp eax, 0x3C - flags set for next jcc */
    MEM32(ebx + 0x66C) = edx;
    MEMF(ebx + 0x668) = xmm0; /* movss */
    if (CMP_L(eax, 0x3C)) goto loc_0037C7B6; /* jl: less (signed <) */

loc_0037C7B1: ;
    PUSH32(esp, 0); sub_0037C7C0(); /* call 0x0037C7C0 */

loc_0037C7B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037C7C0
 * Original: 0x0037C7C0 - 0x0037CACF (783 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C7C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0037C7C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    eax = MEM32(ebx + 0x66C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0037C7E6; /* jne: not equal / not zero */

loc_0037C7D8: ;
    eax = MEM32(ebx + 0x670);
    if (TEST_Z(eax, eax)) goto loc_0037CAC9; /* je: equal / zero */

loc_0037C7E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    eax = esp + 0x9C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0037C7FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B888889);
    PUSH32(esp, 0x3B4CCCCD);
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_0037C813: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(0x5499E8);
    edx = MEM32(0x5499F0);
    edx = edx | 0x200;
    edi = eax + 0xDE0;
    edx = edx | 0xFF0200;
    ecx = 0x10;
    esi = esp + 0x50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax + 0xC60;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x5499F0) = edx;
    ecx = 0x10;
    esi = esp + 0x90;
    edx = esp + 0x10;
    eax = 1;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00539600(); /* call 0x00539600 */

loc_0037C8CE: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0037C8D8: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0037C8E0: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0037C8EF: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE4) = 1;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0037C915; /* jb: below (unsigned <) */

loc_0037C906: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0037C915: ;
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
    if (CMP_NE(eax, 2)) goto loc_0037C972; /* jne: not equal / not zero */

loc_0037C943: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0037C948: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0037C94D: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0037C963; /* jb: below (unsigned <) */

loc_0037C954: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0037C963: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0037C96B: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0037C970: ;
    MEM32(esi) = eax;

loc_0037C972: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0037C981: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0037C997: ;
    eax = MEM32(0x5499F0);
    esi = 1;
    eax = eax | 0x1E00;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AF8) = edi;
    MEM32(0x549B90) = edi;
    MEM32(0x547360) = esi;
    MEM32(0x547370) = esi;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0037C9D8: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0037C9F1: ;
    PUSH32(esp, esi);
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00536F90(); /* call 0x00536F90 */

loc_0037CA01: ;
    eax = MEM32(ebx + 0x668);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_005373D0(); /* call 0x005373D0 */

loc_0037CA0D: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0037CA14: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537760(); /* call 0x00537760 */

loc_0037CA1A: ;
    PUSH32(esp, 0x42);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0037CA21: ;
    eax = MEM32(ebx + 0x66C);
    if (CMP_EQ(eax, edi)) goto loc_0037CA3D; /* je: equal / zero */

loc_0037CA2B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, 0x10);
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, ebx);
    eax = eax << 1;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0037CA3D: ;
    if (CMP_EQ(MEM32(ebx + 0x670), edi)) goto loc_0037CAB7; /* je: equal / zero */

loc_0037CA45: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00536F90(); /* call 0x00536F90 */

loc_0037CA4B: ;
    eax = MEM32(ebx + 0x670);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    PUSH32(esp, 0x10);
    eax = (uint32_t)((int32_t)eax >> 2);
    edi = ebx + 0x3C0;
    PUSH32(esp, edi);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0037CA6E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00536F90(); /* call 0x00536F90 */

loc_0037CA75: ;
    eax = MEM32(ebx + 0x670);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0037CAB5; /* jle: less or equal (signed <=) */

loc_0037CA81: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = MEM32(ebx + eax * 4 + 0x640);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_005373D0(); /* call 0x005373D0 */

loc_0037CA99: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0037CAA5: ;
    eax = MEM32(ebx + 0x670);
    esi = esi + 4;
    edi = edi + 0x40;
    if (CMP_L(esi, eax)) goto loc_0037CA81; /* jl: less (signed <) */

loc_0037CAB5: ;
    edi = 0; /* xor self */

loc_0037CAB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00536F90(); /* call 0x00536F90 */

loc_0037CABD: ;
    MEM32(ebx + 0x66C) = edi;
    MEM32(ebx + 0x670) = edi;

loc_0037CAC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0037CAD0
 * Original: 0x0037CAD0 - 0x0037CBAE (222 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037CAD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_0037CAD0: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    (void)0; /* cmp edi, MEM32(ebx + 0x678) - flags set for next jcc */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_EQ(edi, MEM32(ebx + 0x678))) goto loc_0037CB5F; /* je: equal / zero */

loc_0037CAF3: ;
    edx = 0x20;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0037CB02: ;
    edx = 1;
    ecx = 0x40300;
    MEM32(0x549AEC) = 0x20;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0037CB1B: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x549AE8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0037CB34: ;
    PUSH32(esp, 2);
    MEM32(0x549AE0) = 0x206;
    PUSH32(esp, 0); sub_003598A0(); /* call 0x003598A0 */

loc_0037CB45: ;
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 4);
    esp = esp + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0037CB54: ;
    xmm0 = MEMF(esp); /* movss */
    MEM32(ebx + 0x678) = edi;

loc_0037CB5F: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 4);
    edx = ZX16(MEM16(eax + 0xE));
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * MEMF(0x648EEC); /* mulss */
    eax = ZX16(MEM16(eax + 0xC));
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 * MEMF(esi + 0x14); /* mulss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(esi + 0x10); /* mulss */
    PUSH32(esp, ecx);
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    PUSH32(esp, 0); sub_003596B0(); /* call 0x003596B0 */

loc_0037CBAA: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0037CBB0
 * Original: 0x0037CBB0 - 0x0037CC59 (169 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037CBB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037CBB0: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, edi);
    ecx = ebx;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0037CBC3: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0037CBEE; /* je: equal / zero */

loc_0037CBC9: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0037CBD4; /* je: equal / zero */

loc_0037CBD0: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0037CBD4: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_0037CBEE; /* jne: not equal / not zero */

loc_0037CBDB: ;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0037CBE4: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0037CBEE: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0037CBF6: ;
    if (TEST_NZ(eax, eax)) goto loc_0037CC29; /* jne: not equal / not zero */

loc_0037CBFA: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0037CC29; /* je: equal / zero */

loc_0037CC00: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0037CC20: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0037CC29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0037CC2F: ;
    if (TEST_NZ(eax, eax)) goto loc_0037CC56; /* jne: not equal / not zero */

loc_0037CC33: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0037CC53: ;
    esp = esp + 4;

loc_0037CC56: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037CC60
 * Original: 0x0037CC60 - 0x0037CE5F (511 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037CC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037CC60: ;
    eax = MEM32(0x84A19C);
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0037CC79; /* jne: not equal / not zero */

loc_0037CC74: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0037CC79: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0037CCC3; /* je: equal / zero */

loc_0037CC9F: ;
    if (CMP_B(MEM32(esi + 0x80), 8)) goto loc_0037CCC3; /* jb: below (unsigned <) */

loc_0037CCA8: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037CCB2: ;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037CCBA: ;
    edi = eax;
    esp = esp + 8;
    if (CMP_NE(edi, ebx)) goto loc_0037CCE2; /* jne: not equal / not zero */

loc_0037CCC3: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037CCD5: ;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037CCDD: ;
    esp = esp + 8;
    edi = eax;

loc_0037CCE2: ;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(edi, ebx)) goto loc_0037CE53; /* je: equal / zero */

loc_0037CCF0: ;
    ecx = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    (void)0; /* cmp MEM32(0x84A19C), ebx - flags set for next jcc */
    MEM8(edi + 4) = 1;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0037CD08; /* jne: not equal / not zero */

loc_0037CD03: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0037CD08: ;
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
    if (CMP_EQ(esi, ebx)) goto loc_0037CD51; /* je: equal / zero */

loc_0037CD2F: ;
    if (CMP_B(MEM32(esi + 0x80), 0x14)) goto loc_0037CD51; /* jb: below (unsigned <) */

loc_0037CD38: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037CD42: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037CD4A: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0037CD6E; /* jne: not equal / not zero */

loc_0037CD51: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037CD63: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037CD6B: ;
    esp = esp + 8;

loc_0037CD6E: ;
    MEM32(edi) = eax;
    edx = 0; /* xor self */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    eax = MEM32(esp + 0x12C);
    esi = MEM32(edi);
    PUSH32(esp, 0x104);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037CD99: ;
    eax = esp + 0x14;
    MEM32(esp + 0x124) = 0x1D;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0037CDB9: ;
    POP32(esp, ebp);
    /* nop */

loc_0037CDC0: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_0037CDDC; /* jl: less (signed <) */

loc_0037CDCE: ;
    if (CMP_G(eax, 0x3E5)) goto loc_0037CDDC; /* jg: greater (signed >) */

loc_0037CDD5: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_0037CDDA: ;
    goto loc_0037CDC0;

loc_0037CDDC: ;
    if (CMP_EQ(MEM32(ecx + 4), ebx)) goto loc_0037CDF1; /* je: equal / zero */

loc_0037CDE1: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(eax, ebx)) goto loc_0037CE06; /* jne: not equal / not zero */

loc_0037CDEC: ;
    PUSH32(esp, 0); sub_001F04F0(); /* call 0x001F04F0 */

loc_0037CDF1: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    eax = ecx + 0x18;
    if (CMP_EQ(edx, ebx)) goto loc_0037CDFF; /* je: equal / zero */

loc_0037CDFB: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_0037CDFF: ;
    edx = MEM32(eax);
    MEM32(esi + 4) = edx;
    goto loc_0037CE15;

loc_0037CE06: ;
    eax = MEM32(eax + 0x44);
    MEM8(eax + 0x124) = 1;
    MEM32(0x847164) = eax;

loc_0037CE15: ;
    if (CMP_NE(MEM32(esi + 4), ebx)) goto loc_0037CE48; /* jne: not equal / not zero */

loc_0037CE1A: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0037CE24: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0037CE2E: ;
    esp = esp + 8;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0037CE3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x118;
    esp += 8; return; /* ret 4 */

loc_0037CE48: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0037CE51: ;
    eax = edi;

loc_0037CE53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x118;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037CE60
 * Original: 0x0037CE60 - 0x0037D030 (464 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037CE60(void)
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

loc_0037CE60: ;
    SET_LO8(eax, MEM8(edi));
    esp = esp - 0x800;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x828);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0037D025; /* je: equal / zero */

loc_0037CE7B: ;
    if (CMP_EQ(MEM8(esi + 0x48), LO8(ebx))) goto loc_0037CEBA; /* je: equal / zero */

loc_0037CE80: ;
    SET_LO8(eax, MEM8(esi + 0x4D));
    fp_push(MEMF(esp + 0x824)); /* fld float */
    SET_LO8(ecx, MEM8(esi + 0x4E));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(edx, MEM8(esi + 0x4F));
    MEM8(0x807694) = LO8(edx);
    MEM8(0x807695) = LO8(ecx);
    MEM8(0x807696) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0037CEAC: ;
    MEM8(0x807697) = LO8(eax);
    MEM8(0x8086D5) = 1;
    goto loc_0037CEC0;

loc_0037CEBA: ;
    MEM8(0x8086D5) = LO8(ebx);

loc_0037CEC0: ;
    if (CMP_EQ(MEM8(esi + 0x50), LO8(ebx))) goto loc_0037CECC; /* je: equal / zero */

loc_0037CEC5: ;
    MEM8(0x8086C5) = 1;

loc_0037CECC: ;
    (void)0; /* cmp MEM8(esi + 0x51), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM8(esi + 0x51), LO8(ebx))) ? 1 : 0); /* setne */
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM8(0x8086C4) = LO8(eax);
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x810); /* addss */
    MEMF(0x8076A4) = xmm0; /* movss */
    MEM32(0x8076B0) = ebx;
    MEM32(0x84B368) = ebp;
    if (CMP_EQ(ebp, ebx)) goto loc_0037CF03; /* je: equal / zero */

loc_0037CEFD: ;
    MEM32(0x84B364) = ebx;

loc_0037CF03: ;
    if (CMP_NE(MEM32(0x8086E8), ebx)) goto loc_0037CF12; /* jne: not equal / not zero */

loc_0037CF0B: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_0037CF10: ;
    goto loc_0037CF17;

loc_0037CF12: ;
    PUSH32(esp, 0); sub_003D2EF0(); /* call 0x003D2EF0 */

loc_0037CF17: ;
    xmm0 = MEMF(esp + 0x81C); /* movss */
    fp_push(MEMF(esp + 0x824)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x820); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi + 0x39));
    SET_LO8(ecx, MEM8(esi + 0x3A));
    SET_LO8(edx, MEM8(esi + 0x3B));
    MEM8(0x807664) = LO8(edx);
    MEM8(0x807665) = LO8(ecx);
    MEM8(0x807666) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0037CF65: ;
    xmm0 = MEMF(esp + 0x810); /* movss */
    xmm1 = MEMF(esp + 0x814); /* movss */
    PUSH32(esp, edi);
    MEM8(0x807667) = LO8(eax);
    eax = esp + 0xC;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, eax);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042B614(); /* call 0x0042B614 */

loc_0037CFA4: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    esp = esp + 0xC;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0037CFBB; /* jne: not equal / not zero */

loc_0037CFAF: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0037CFB9: ;
    goto loc_0037CFCB;

loc_0037CFBB: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0037CFC5: ;
    MEM8(0x8086D5) = LO8(ebx);

loc_0037CFCB: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0037CFDB; /* je: equal / zero */

loc_0037CFD5: ;
    MEM8(0x8086C5) = LO8(ebx);

loc_0037CFDB: ;
    if (CMP_EQ(MEM8(esi + 0x51), LO8(ebx))) goto loc_0037CFFC; /* je: equal / zero */

loc_0037CFE0: ;
    MEM8(0x8086C4) = LO8(ebx);
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x810); /* addss */
    MEMF(0x8076A4) = xmm0; /* movss */

loc_0037CFFC: ;
    if (CMP_EQ(MEM32(0x84B368), ebx)) goto loc_0037D00A; /* je: equal / zero */

loc_0037D004: ;
    MEM32(0x807668) = ebx;

loc_0037D00A: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0037D012: ;
    MEM32(0x8072F0) = MEM32(0x8072F0) - 1;
    eax = MEM32(esp + 0x80C);
    MEM32(eax + 0x678) = ebx;

loc_0037D025: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x800;
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0037D030
 * Original: 0x0037D030 - 0x0037D0CC (156 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D030(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037D030: ;
    esp = esp - 0x10;
    eax = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(eax & eax, 0)) goto loc_0037D066; /* jge: greater or equal (signed >=) */

loc_0037D060: ;
    eax = 0; /* xor self */
    MEM32(esp + 4) = eax;

loc_0037D066: ;
    if (CMP_GE(ecx & ecx, 0)) goto loc_0037D070; /* jge: greater or equal (signed >=) */

loc_0037D06A: ;
    ecx = 0; /* xor self */
    MEM32(esp + 8) = ecx;

loc_0037D070: ;
    if (CMP_GE(edx & edx, 0)) goto loc_0037D07A; /* jge: greater or equal (signed >=) */

loc_0037D074: ;
    edx = 0; /* xor self */
    MEM32(esp + 0xC) = edx;

loc_0037D07A: ;
    if (CMP_GE(esi & esi, 0)) goto loc_0037D084; /* jge: greater or equal (signed >=) */

loc_0037D07E: ;
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = esi;

loc_0037D084: ;
    if (CMP_LE(eax, 0x280)) goto loc_0037D093; /* jle: less or equal (signed <=) */

loc_0037D08B: ;
    MEM32(esp + 4) = 0x280;

loc_0037D093: ;
    eax = 0x1E0;
    if (CMP_LE(ecx, eax)) goto loc_0037D0A0; /* jle: less or equal (signed <=) */

loc_0037D09C: ;
    MEM32(esp + 8) = eax;

loc_0037D0A0: ;
    if (CMP_LE(edx, 0x280)) goto loc_0037D0B0; /* jle: less or equal (signed <=) */

loc_0037D0A8: ;
    MEM32(esp + 0xC) = 0x280;

loc_0037D0B0: ;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_LE(esi, eax)) goto loc_0037D0B9; /* jle: less or equal (signed <=) */

loc_0037D0B5: ;
    MEM32(esp + 0xC) = eax;

loc_0037D0B9: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_0037D0C6: ;
    esp = esp + 0x10;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0037D0D0
 * Original: 0x0037D0D0 - 0x0037D101 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D0D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037D0D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    MEM32(edi) = 0x63E250;
    PUSH32(esp, 0); sub_002D1E10(); /* call 0x002D1E10 */

loc_0037D0E2: ;
    if (TEST_Z(MEM8(esp + 0xC), 1)) goto loc_0037D0FA; /* je: equal / zero */

loc_0037D0E9: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0037D0F7: ;
    esp = esp + 4;

loc_0037D0FA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037D110
 * Original: 0x0037D110 - 0x0037D187 (119 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D110: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx + 0x14);
    eax = eax << 0x1B;
    eax = (uint32_t)((int32_t)eax >> 0x1B);
    if (CMP_A(eax, 3)) { sub_0037D187(); return; } /* ja: above (unsigned >) */

loc_0037D121: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x37D194); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0037D128u) goto loc_0037D128;
    if (_jt == 0x0037D140u) goto loc_0037D140;
    if (_jt == 0x0037D14Eu) goto loc_0037D14E;
    if (_jt == 0x0037D160u) goto loc_0037D160;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037D128: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00479B08(); /* call 0x00479B08 */

loc_0037D135: ;
    esp = esp + 0xC;
    MEM8(esi + 0x7F) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037D140: ;
    edx = MEM32(ecx);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0037D840(); /* call 0x0037D840 */

loc_0037D14A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037D14E: ;
    ecx = MEM32(ecx);
    edx = esi;

loc_0037D152: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    MEM8(edx) = LO8(eax);
    edx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0037D152; /* jne: not equal / not zero */

loc_0037D15C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037D160: ;
    ecx = MEM32(ecx);
    (void)0; /* cmp MEM8(ecx), 0 - flags set for next jcc */
    PUSH32(esp, 0x7F);
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_0037D178; /* je: equal / zero */

loc_0037D169: ;
    PUSH32(esp, 0x63E240);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037D174: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037D178: ;
    PUSH32(esp, 0x63E248);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037D183: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037D1B0
 * Original: 0x0037D1B0 - 0x0037D1EF (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D1B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D1B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x14);
    ecx = ecx << 0x1B;
    ecx = (uint32_t)((int32_t)ecx >> 0x1B);
    eax = 0; /* xor self */
    if (CMP_A(ecx, 3)) goto loc_0037D1ED; /* ja: above (unsigned >) */

loc_0037D1C1: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x37D1F0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0037D1C8u) goto loc_0037D1C8;
    if (_jt == 0x0037D1CEu) goto loc_0037D1CE;
    if (_jt == 0x0037D1DEu) goto loc_0037D1DE;
    if (_jt == 0x0037D1E8u) goto loc_0037D1E8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037D1C8: ;
    eax = MEM32(edx);
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0037D1CE: ;
    ecx = MEM32(edx);
    xmm0 = MEMF(ecx); /* movss */
    MEMF(esp) = xmm0; /* movss */
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0037D1DE: ;
    eax = MEM32(edx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0029CDD0(); return; /* tail jmp 0x0029CDD0 */

loc_0037D1E8: ;
    edx = MEM32(edx);
    eax = ZX8(MEM8(edx));

loc_0037D1ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037D270
 * Original: 0x0037D270 - 0x0037D3AA (314 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D270: ;
    PUSH32(esp, ecx);
    eax = MEM32(edx + 0x14);
    eax = eax << 0x1B;
    eax = (uint32_t)((int32_t)eax >> 0x15);
    eax = eax | ecx;
    if (CMP_A(eax, 0xC5)) { sub_0037D3AA(); return; } /* ja: above (unsigned >) */

loc_0037D287: ;
    eax = ZX8(MEM8(eax + 0x37D3F4));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x37D3B0)); return; /* indirect tail jmp */

    ecx = MEM32(edx);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edx, esi)) ? 1 : 0); /* sete */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0037D2FA: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0037D369: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    eax = eax - esi;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    ecx = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, esi)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037D4C0
 * Original: 0x0037D4C0 - 0x0037D509 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D4C0(void)
{

loc_0037D4C0: ;
    esp = esp - 8;
    SET_LO8(eax, MEM8(esp + 3));
    MEM32(esi) = 0x63E250;
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0); sub_00287A70(); /* call 0x00287A70 */

loc_0037D4D5: ;
    ecx = eax;
    edx = esp + 4;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, edx);
    eax = esi + 0x14;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = 9;
    MEM32(esi + 0x10) = 0;
    PUSH32(esp, 0); sub_002D1E60(); /* call 0x002D1E60 */

loc_0037D4F8: ;
    eax = 1;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    eax = esi;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0037D510
 * Original: 0x0037D510 - 0x0037D597 (135 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D510: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0037D51E; /* jne: not equal / not zero */

loc_0037D519: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0037D51E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0037D568; /* je: equal / zero */

loc_0037D546: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_0037D568; /* jb: below (unsigned <) */

loc_0037D54F: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037D559: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037D561: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0037D589; /* jne: not equal / not zero */

loc_0037D568: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037D57A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037D582: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0037D597(); return; } /* je: equal / zero */

loc_0037D589: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFE0u;
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = ecx;
    edi = eax;
    g_seh_ebp = ebp; sub_0037D599(); return; /* tail jmp 0x0037D599 */

}

/**
 * sub_0037D5C0
 * Original: 0x0037D5C0 - 0x0037D64F (143 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D5C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D5C0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0037D5CE; /* jne: not equal / not zero */

loc_0037D5C9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0037D5CE: ;
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
    if (TEST_Z(esi, esi)) goto loc_0037D618; /* je: equal / zero */

loc_0037D5F6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_0037D618; /* jb: below (unsigned <) */

loc_0037D5FF: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037D609: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037D611: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0037D639; /* jne: not equal / not zero */

loc_0037D618: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037D62A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037D632: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0037D64F(); return; } /* je: equal / zero */

loc_0037D639: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(esp + 0x14);
    ecx = ecx & 0xFFFFFFE1u;
    ecx = ecx | 1;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = edx;
    edi = eax;
    g_seh_ebp = ebp; sub_0037D651(); return; /* tail jmp 0x0037D651 */

}

/**
 * sub_0037D670
 * Original: 0x0037D670 - 0x0037D6FF (143 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D670: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0037D67E; /* jne: not equal / not zero */

loc_0037D679: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0037D67E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0037D6C8; /* je: equal / zero */

loc_0037D6A6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_0037D6C8; /* jb: below (unsigned <) */

loc_0037D6AF: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037D6B9: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037D6C1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0037D6E9; /* jne: not equal / not zero */

loc_0037D6C8: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037D6DA: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037D6E2: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0037D6FF(); return; } /* je: equal / zero */

loc_0037D6E9: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(esp + 0x14);
    ecx = ecx & 0xFFFFFFE2u;
    ecx = ecx | 2;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = edx;
    edi = eax;
    g_seh_ebp = ebp; sub_0037D701(); return; /* tail jmp 0x0037D701 */

}

/**
 * sub_0037D720
 * Original: 0x0037D720 - 0x0037D7BA (154 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D720: ;
    eax = MEM32(0x84A19C);
    esp = esp - 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0037D739; /* jne: not equal / not zero */

loc_0037D734: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0037D739: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0037D781; /* je: equal / zero */

loc_0037D75F: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_0037D781; /* jb: below (unsigned <) */

loc_0037D768: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037D772: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037D77A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0037D7A2; /* jne: not equal / not zero */

loc_0037D781: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037D793: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037D79B: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0037D7BA(); return; } /* je: equal / zero */

loc_0037D7A2: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(esp + 0x24);
    ecx = ecx & 0xFFFFFFE3u;
    ecx = ecx | 3;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = edx;
    MEM32(esp + 0x20) = eax;
    g_seh_ebp = ebp; sub_0037D7C2(); return; /* tail jmp 0x0037D7C2 */

}

/**
 * sub_0037D840
 * Original: 0x0037D840 - 0x0037D861 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D840(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0037D840: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x63E254);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0037D855: ;
    esp = esp + 0x10;
    MEM8(esi + 0x7F) = 0;
    eax = esi;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0037D870
 * Original: 0x0037D870 - 0x0037D8B7 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D870(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037D870: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    ecx = esp + 0x18;
    eax = esp + 4;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0037D883: ;
    eax = MEM32(esp + 4);
    if (CMP_NE(eax, MEM32(esi + 8))) goto loc_0037D8AD; /* jne: not equal / not zero */

loc_0037D88C: ;
    eax = MEM32(esp + 0x18);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_0034F380(); /* call 0x0034F380 */

loc_0037D8AB: ;
    eax = MEM32(eax);

loc_0037D8AD: ;
    MEM32(eax + 0xC) = edi;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037D8C0
 * Original: 0x0037D8C0 - 0x0037D911 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D8C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D8C0: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(esi, ecx)) { sub_0037D911(); return; } /* jne: not equal / not zero */

loc_0037D8D4: ;
    if (CMP_NE(ebp, eax)) { sub_0037D911(); return; } /* jne: not equal / not zero */

loc_0037D8D8: ;
    edi = ebx + 4;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_0037D8E0: ;
    eax = MEM32(ebx + 8);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 9);
    edx = ebx + 0x10;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_001DE460(); /* call 0x001DE460 */

loc_0037D8F5: ;
    ecx = MEM32(ebx + 8);
    eax = 1;
    MEM32(ebx + 0x20) = eax;
    MEM32(ebx + 0x24) = eax;
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037D940
 * Original: 0x0037D940 - 0x0037D989 (73 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D940: ;
    edx = MEM32(edi + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = esi;
    ecx = ecx ^ 0xDEADBEEFu;
    ecx = ecx & edx;
    if (CMP_A(ebx, ecx)) goto loc_0037D962; /* ja: above (unsigned >) */

loc_0037D959: ;
    edx = edx >> 1;
    ebx = ebx | 0xFFFFFFFFu;
    ebx = ebx - edx;
    ecx = ecx + ebx;

loc_0037D962: ;
    edx = MEM32(edi + 0x14);
    ebx = MEM32(edx + ecx * 4 + 4);
    edx = edx + ecx * 4;
    ecx = MEM32(edx);
    if (CMP_EQ(ecx, ebx)) goto loc_0037D97D; /* je: equal / zero */

loc_0037D972: ;
    if (CMP_AE(MEM32(ecx + 8), esi)) { sub_0037D989(); return; } /* jae: above or equal (unsigned >=) */

loc_0037D977: ;
    ecx = MEM32(ecx);
    if (CMP_NE(ecx, ebx)) goto loc_0037D972; /* jne: not equal / not zero */

loc_0037D97D: ;
    ecx = MEM32(edi + 8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037D9B0
 * Original: 0x0037D9B0 - 0x0037DA4F (159 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D9B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D9B0: ;
    eax = MEM32(edi + 0x20);
    edx = MEM32(edi + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 8);
    ecx = ecx ^ 0xDEADBEEFu;
    ecx = ecx & eax;
    if (CMP_A(edx, ecx)) goto loc_0037D9D9; /* ja: above (unsigned >) */

loc_0037D9D0: ;
    eax = eax >> 1;
    edx = edx | 0xFFFFFFFFu;
    edx = edx - eax;
    ecx = ecx + edx;

loc_0037D9D9: ;
    eax = MEM32(edi + 0x14);
    edx = ecx;
    ecx = ecx << 2;
    if (CMP_NE(esi, MEM32(ecx + eax))) goto loc_0037DA02; /* jne: not equal / not zero */

loc_0037D9E6: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    ebx = MEM32(ecx + eax);
    ebx = MEM32(ebx);
    MEM32(ecx + eax) = ebx;
    if (TEST_Z(edx, edx)) goto loc_0037DA02; /* je: equal / zero */

loc_0037D9F2: ;
    eax = MEM32(edi + 0x14);
    edx--;
    ecx = edx * 4;
    if (CMP_EQ(esi, MEM32(ecx + eax))) goto loc_0037D9E6; /* je: equal / zero */

loc_0037DA02: ;
    (void)0; /* cmp esi, MEM32(edi + 8) - flags set for next jcc */
    ebx = MEM32(esi);
    if (CMP_EQ(esi, MEM32(edi + 8))) goto loc_0037DA44; /* je: equal / zero */

loc_0037DA09: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = ebx;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    PUSH32(esp, esi);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0037DA1C: ;
    if (TEST_NZ(eax, eax)) goto loc_0037DA41; /* jne: not equal / not zero */

loc_0037DA20: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0037DA3E: ;
    esp = esp + 4;

loc_0037DA41: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) - 1;

loc_0037DA44: ;
    POP32(esp, esi);
    MEM32(ebp) = ebx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037DA50
 * Original: 0x0037DA50 - 0x0037DA9A (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DA50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037DA50: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0037DA59: ;
    edi = 0; /* xor self */
    if (TEST_NZ(eax, eax)) goto loc_0037DA8A; /* jne: not equal / not zero */

loc_0037DA5F: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, edi)) goto loc_0037DA8A; /* je: equal / zero */

loc_0037DA65: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0037DA85: ;
    esp = esp + 4;
    MEM32(esi) = edi;

loc_0037DA8A: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi) = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037DAA0
 * Original: 0x0037DAA0 - 0x0037DB2C (140 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DAA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037DAA0: ;
    eax = MEM32(0x875B40);
    if (TEST_NZ(LO8(eax), 1)) goto loc_0037DABB; /* jne: not equal / not zero */

loc_0037DAA9: ;
    eax = eax | 1;
    MEM32(0x875B40) = eax;
    MEM32(0x875980) = 0;

loc_0037DABB: ;
    ecx = MEM32(0x875980);
    MEM32(ecx * 4 + 0x8759A0) = esi;
    ecx = MEM32(0x8759A0);
    edx = 0; /* xor self */
    if (CMP_EQ(ecx, esi)) goto loc_0037DAE0; /* je: equal / zero */

loc_0037DAD4: ;
    ecx = MEM32(edx * 4 + 0x8759A4);
    edx++;
    if (CMP_NE(ecx, esi)) goto loc_0037DAD4; /* jne: not equal / not zero */

loc_0037DAE0: ;
    ecx = MEM32(0x875980);
    if (CMP_EQ(edx, ecx)) goto loc_0037DAEF; /* je: equal / zero */

loc_0037DAEA: ;
    if (CMP_NE(edx, 0xFFFFFFFFu)) goto loc_0037DB2B; /* jne: not equal / not zero */

loc_0037DAEF: ;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0037DB03; /* jne: not equal / not zero */

loc_0037DAF3: ;
    eax = eax | 1;
    ecx = 0; /* xor self */
    MEM32(0x875B40) = eax;
    MEM32(0x875980) = ecx;

loc_0037DB03: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(ecx * 4 + 0x875B48) = esi;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0037DB1E; /* jne: not equal / not zero */

loc_0037DB0E: ;
    eax = eax | 1;
    ecx = 0; /* xor self */
    MEM32(0x875B40) = eax;
    MEM32(0x875980) = ecx;

loc_0037DB1E: ;
    MEM32(ecx * 4 + 0x8759A0) = esi;
    MEM32(0x875980) = MEM32(0x875980) + 1;

loc_0037DB2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037DB30
 * Original: 0x0037DB30 - 0x0037DB76 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DB30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037DB30: ;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esp + 0x1C));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    ecx = esi;
    eax = eax ^ esi;
    eax = eax & 0xF;
    ecx = ecx ^ eax;
    SET_LO8(eax, MEM8(ebp + 0xC));
    SET_LO8(eax, LO8(eax) & 0xF8);
    MEM8(ebp + 0xC) = LO8(eax);
    SET_LO8(edx, LO8(eax));
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEM32(ebp + 0x10) = ecx;
    edi = 0x63E1C4;
    esi = eax;
    ecx = 7;
    ebx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) { sub_0037DB76(); return; } /* jne: not equal / not zero */

loc_0037DB6E: ;
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(ebp + 0xC) = LO8(edx);
    g_seh_ebp = ebp; sub_0037DBB6(); return; /* tail jmp 0x0037DBB6 */

}

/**
 * sub_0037DC80
 * Original: 0x0037DC80 - 0x0037DCD7 (87 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DC80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037DC80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    edi = 0x63E1EC;
    esi = eax;
    ecx = 0xA;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0037DCAC; /* jne: not equal / not zero */

loc_0037DC9D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(ebx, 1);
    MEMF(ebp) = xmm0; /* movss */

loc_0037DCAC: ;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037DCB1: ;
    MEM32(esp + 0x18) = eax;
    ecx = esp + 0x18;
    eax = esp + 0x10;
    esi = 0x875404;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0037DCC7: ;
    eax = MEM32(esp + 0x10);
    if (CMP_NE(eax, MEM32(0x87540C))) { sub_0037DCD7(); return; } /* jne: not equal / not zero */

loc_0037DCD3: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0037DCDA(); return; /* tail jmp 0x0037DCDA */

}

/**
 * sub_0037DD10
 * Original: 0x0037DD10 - 0x0037DD5B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DD10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037DD10: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi);
    if (CMP_L(edx, ecx)) goto loc_0037DD4A; /* jl: less (signed <) */

loc_0037DD1D: ;
    eax = MEM32(esi + 0xC);
    eax = eax + ecx;
    if (CMP_GE(edx, eax)) goto loc_0037DD4A; /* jge: greater or equal (signed >=) */

loc_0037DD26: ;
    eax = MEM32(esi + 4);
    eax = eax - MEM32(esi + 8);
    ecx = ecx + eax;
    if (CMP_NE(edx, ecx)) goto loc_0037DD3C; /* jne: not equal / not zero */

loc_0037DD32: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;

loc_0037DD3C: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1;
    if ((MEM32(esi + 0x10) != 0)) goto loc_0037DD57; /* jne: not equal / not zero */

loc_0037DD41: ;
    PUSH32(esp, 0); sub_0037DA50(); /* call 0x0037DA50 */

loc_0037DD46: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0037DD4A: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0037DD54: ;
    esp = esp + 4;

loc_0037DD57: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037DD60
 * Original: 0x0037DD60 - 0x0037DDC6 (102 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DD60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0037DD60: ;
    SET_LO8(ecx, MEM8(0x8761D8));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0037DDC0; /* jne: not equal / not zero */

loc_0037DD6F: ;
    ecx = MEM32(0x8761D8);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = ecx | eax;
    MEM32(0x8761D8) = ecx;
    MEMF(0x8761C8) = xmm1; /* movss */
    MEMF(0x8761D4) = xmm0; /* movss */
    MEMF(0x8761BC) = xmm0; /* movss */
    MEMF(0x8761C0) = xmm0; /* movss */
    MEMF(0x8761C4) = xmm0; /* movss */
    MEMF(0x8761D0) = xmm1; /* movss */
    MEMF(0x8761CC) = xmm1; /* movss */

loc_0037DDC0: ;
    eax = 0x8761BC;
    esp += 4; return; /* ret */

}

/**
 * sub_0037DDD0
 * Original: 0x0037DDD0 - 0x0037DDF1 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DDD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037DDD0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x63E2CC;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_0037DDEB; /* je: equal / zero */

loc_0037DDE0: ;
    PUSH32(esp, esi);
    eax = 0x87544C;
    PUSH32(esp, 0); sub_0037DD10(); /* call 0x0037DD10 */

loc_0037DDEB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037DE00
 * Original: 0x0037DE00 - 0x0037DE03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DE00(void)
{

loc_0037DE00: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0037DE10
 * Original: 0x0037DE10 - 0x0037DE18 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DE10(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037DE10: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_0037DE30
 * Original: 0x0037DE30 - 0x0037DEA6 (118 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DE30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037DE30: ;
    SET_LO8(eax, MEM8(ecx + 0xED));
    SET_LO8(edx, 1);
    (void)0; /* cmp LO8(eax), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(eax), LO8(edx))) ? 1 : 0); /* sete */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0xE1));
    SET_LO8(eax, LO8(eax) & LO8(edx));
    SET_LO8(eax, LO8(eax) << 2);
    (void)0; /* cmp LO8(ebx), LO8(edx) - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(LO8(ebx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    SET_LO8(ebx, MEM8(ecx + 0xEC));
    SET_LO8(eax, LO8(eax) << 2);
    (void)0; /* cmp LO8(ebx), LO8(edx) - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(LO8(ebx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    SET_LO8(ebx, MEM8(ecx + 0xE2));
    SET_LO8(eax, LO8(eax) << 1);
    (void)0; /* cmp LO8(ebx), LO8(edx) - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(LO8(ebx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    SET_LO8(ebx, MEM8(ecx + 0xE0));
    SET_LO8(eax, LO8(eax) << 1);
    (void)0; /* cmp LO8(ebx), LO8(edx) - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(LO8(ebx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    SET_LO8(ebx, MEM8(ecx + 0x1C));
    SET_LO8(ebx, LO8(ebx) & 0xA8);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    (void)0; /* test LO8(eax), 0x57 - flags set for next jcc */
    MEM8(ecx + 0x1C) = LO8(eax);
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), 0x57)) goto loc_0037DE98; /* je: equal / zero */

loc_0037DE96: ;
    SET_LO8(edx, 0); /* xor self */

loc_0037DE98: ;
    SET_LO8(edx, LO8(edx) << 5);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 0x20);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x1C) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037DEB0
 * Original: 0x0037DEB0 - 0x0037DF97 (231 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DEB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037DEB0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    MEM32(ebp) = 0x63E294;
    SET_LO8(eax, MEM8(ebp + 0x14));
    SET_LO8(eax, LO8(eax) & 0xFB);
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(eax) | 3);
    MEM8(ebp + 0x14) = LO8(eax);
    SET_LO8(ecx, MEM8(ebp + 0x1C));
    PUSH32(esp, edi);
    SET_LO8(ecx, LO8(ecx) | 8);
    MEM8(ebp + 0x1C) = LO8(ecx);
    ecx = MEM32(esp + 0x98);
    edi = ebp + 0x20;
    PUSH32(esp, 0x7F);
    ebx = 0; /* xor self */
    MEM8(ebp + 0x1D) = LO8(ebx);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    MEMF(edi + 0xC) = xmm1; /* movss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm1; /* movss */
    MEMF(edi + 0x10) = xmm1; /* movss */
    esi = ebp + 0x110;
    PUSH32(esp, edx);
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 0x7F) = LO8(ebx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037DF2F: ;
    edx = esp + 0x10;
    eax = esi;
    edx = edx - esi;

loc_0037DF37: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0037DF37; /* jne: not equal / not zero */

loc_0037DF41: ;
    esi = MEM32(esp + 0x9C);
    ecx = 7;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebp;
    MEM8(ebp + 0xE0) = LO8(ebx);
    MEM32(ebp + 0xA4) = 0x5F18A0;
    MEM8(ebp + 0xE2) = LO8(ebx);
    MEM32(ebp + 0xFC) = 0x63E360;
    MEM8(ebp + 0xE1) = LO8(ebx);
    MEM8(ebp + 0xEC) = LO8(ebx);
    MEM32(ebp + 0x100) = ebx;
    PUSH32(esp, 0); sub_0037DE30(); /* call 0x0037DE30 */

loc_0037DF88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037DFA0
 * Original: 0x0037DFA0 - 0x0037E0AC (268 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037DFA0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xCC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xD0);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xD4);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp) = 0x63E294;
    PUSH32(esp, 0); sub_0037DB30(); /* call 0x0037DB30 */

loc_0037DFFB: ;
    SET_LO8(ecx, MEM8(ebp + 0x1C));
    edx = MEM32(esp + 0xC0);
    xmm0 = MEMF(esp + 0xDC); /* movss */
    SET_LO8(ecx, LO8(ecx) & 0xF7);
    MEM8(ebp + 0x1C) = LO8(ecx);
    MEM8(ebp + 0x1D) = 0;
    eax = ebp + 0x20;
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0xCC);
    edx = MEM32(esp + 0xD0);
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0xA4);
    ebx = ebp + 0x110;
    edi = ebp + 0xA0;
    ecx = 0x18;
    esi = esp + 0xA0;
    MEM8(ebx) = 0;
    MEM8(ebx + 0x7F) = 0;
    (void)0; /* test eax, eax - flags set for next jcc */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0x7F);
    eax = esp + 0x1C;
    if (TEST_NZ(eax, eax)) { sub_0037E0AC(); return; } /* jne: not equal / not zero */

loc_0037E086: ;
    PUSH32(esp, 0x63E354);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037E091: ;
    eax = esp + 0x18;
    ecx = eax;
    ebx = ebx - ecx;
    /* nop */

loc_0037E0A0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(ebx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037E0A0; /* jne: not equal / not zero */

loc_0037E0AA: ;
    g_seh_ebp = ebp; sub_0037E0CC(); return; /* tail jmp 0x0037E0CC */

}

/**
 * sub_0037E160
 * Original: 0x0037E160 - 0x0037E1A7 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E160(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037E160: ;
    SET_LO8(eax, MEM8(edi + 0x1D));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(edi) = 0x63E294;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0037E19F; /* jbe: below or equal (unsigned <=) */

loc_0037E170: ;
    PUSH32(esp, ebx);
    ebx = edi + 0x3C;

loc_0037E174: ;
    SET_LO8(eax, MEM8(edi + esi + 0x104));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037E192; /* je: equal / zero */

loc_0037E17F: ;
    ecx = MEM32(ebx);
    if (TEST_Z(ecx, ecx)) goto loc_0037E18C; /* je: equal / zero */

loc_0037E185: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0037E18C: ;
    MEM32(ebx) = 0;

loc_0037E192: ;
    ecx = ZX8(MEM8(edi + 0x1D));
    esi++;
    ebx = ebx + 4;
    if (CMP_L(esi, ecx)) goto loc_0037E174; /* jl: less (signed <) */

loc_0037E19E: ;
    POP32(esp, ebx);

loc_0037E19F: ;
    MEM32(edi) = 0x63E2CC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037E1B0
 * Original: 0x0037E1B0 - 0x0037E1B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E1B0(void)
{

loc_0037E1B0: ;
    eax = ecx + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_0037E1C0
 * Original: 0x0037E1C0 - 0x0037E1D0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E1C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037E1C0: ;
    eax = MEM32(ecx + 0xA4);
    if (TEST_NZ(eax, eax)) goto loc_0037E1CF; /* jne: not equal / not zero */

loc_0037E1CA: ;
    eax = 0x63E34C;

loc_0037E1CF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037E210
 * Original: 0x0037E210 - 0x0037E222 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E210(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037E210: ;
    if (TEST_NZ(MEM8(ecx + 0x1C), 8)) { sub_0037E222(); return; } /* jne: not equal / not zero */

loc_0037E216: ;
    if (TEST_Z(MEM8(ecx + 0x14), 4)) { sub_0037E222(); return; } /* je: equal / zero */

loc_0037E21C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0037E230
 * Original: 0x0037E230 - 0x0037E686 (1110 bytes, 294 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E230(void)
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

loc_0037E230: ;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x14));
    if (TEST_NZ(LO8(eax), 1)) goto loc_0037E247; /* jne: not equal / not zero */

loc_0037E23E: ;
    ecx = MEM32(edi + 8);
    if (TEST_Z(MEM8(ecx + 0x18), 1)) goto loc_0037E263; /* je: equal / zero */

loc_0037E247: ;
    if (TEST_NZ(LO8(eax), 2)) goto loc_0037E2A5; /* jne: not equal / not zero */

loc_0037E24B: ;
    ecx = MEM32(edi + 0x18);
    esi = MEM32(edi + 0x10);
    edx = MEM32(edi + 0xC);
    ecx = ecx << 0x1C;
    ecx = (uint32_t)((int32_t)ecx >> 0x1C);
    PUSH32(esp, 0); sub_0037D270(); /* call 0x0037D270 */

loc_0037E25F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0037E2A5; /* jne: not equal / not zero */

loc_0037E263: ;
    SET_LO8(eax, MEM8(0x75A8E4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037E67E; /* je: equal / zero */

loc_0037E270: ;
    eax = MEM32(0x75A8DC);
    ecx = MEM32(eax * 4 + 0x75A8E8);
    edx = MEM32(0x75A8D8);
    eax++;
    MEM32(0x75A8DC) = eax;
    /* TODO: prefetcht0 byte ptr [ecx] */
    MEM32(edx * 4 + 0x75A8E8) = edi;
    eax = MEM32(0x75A8D8);
    eax++;
    POP32(esp, edi);
    MEM32(0x75A8D8) = eax;
    POP32(esp, esi);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

loc_0037E2A5: ;
    SET_LO8(eax, MEM8(0x75A8E4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037E31F; /* je: equal / zero */

loc_0037E2AE: ;
    eax = MEM32(0x75A8DC);
    ecx = MEM32(eax * 4 + 0x75A8E8);
    eax++;
    MEM32(0x75A8DC) = eax;
    /* TODO: prefetcht0 byte ptr [ecx] */
    ecx = MEM32(eax * 4 + 0x75A8E8);
    eax++;
    MEM32(0x75A8DC) = eax;
    /* TODO: prefetcht0 byte ptr [ecx] */
    ecx = MEM32(eax * 4 + 0x75A8E8);
    eax++;
    MEM32(0x75A8DC) = eax;
    eax = MEM32(0x75A8D8);
    /* TODO: prefetcht0 byte ptr [ecx] */
    MEM32(eax * 4 + 0x75A8E8) = edi;
    eax = MEM32(0x75A8D8);
    eax++;
    MEM32(0x75A8D8) = eax;
    ecx = edi + 0x20;
    MEM32(eax * 4 + 0x75A8E8) = ecx;
    eax = MEM32(0x75A8D8);
    eax++;
    MEM32(0x75A8D8) = eax;
    edx = edi + 0x40;
    MEM32(eax * 4 + 0x75A8E8) = edx;
    MEM32(0x75A8D8) = MEM32(0x75A8D8) + 1;

loc_0037E31F: ;
    PUSH32(esp, ebx);
    esi = edi + 0x20;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0037B5C0(); /* call 0x0037B5C0 */

loc_0037E32B: ;
    ebx = MEM32(esp + 0x64);
    xmm0 = MEMF(ebx + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(esi); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 * MEMF(ebx + 0x14); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    eax = esp + 0x18;
    ecx = esp + 0x24;
    esp = esp + 4;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x60);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(edi + 0x100);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm2 = MEMF(esi + 0x10); /* movss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm3 = MEMF(esi + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(ebx + 0xC); /* mulss */
    xmm2 = xmm2 * MEMF(ebx + 0x10); /* mulss */
    xmm1 = xmm1 * MEMF(ebx + 0x14); /* mulss */
    xmm3 = xmm3 + MEMF(ebx + 0x18); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0037E404; /* je: equal / zero */

loc_0037E3DD: ;
    edx = MEM32(eax);
    eax = MEM32(edx);
    MEM32(edi + 0x9C) = eax;
    ecx = ZX8(MEM8(edi + 0x9F));
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 * MEMF(0x648CEC); /* mulss */
    MEMF(esp + 0x2C) = xmm3; /* movss */

loc_0037E404: ;
    SET_LO8(eax, MEM8(edi + 0x1C));
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    PUSH32(esp, ebp);
    if (TEST_Z(LO8(eax), 0x20)) goto loc_0037E442; /* je: equal / zero */

loc_0037E40C: ;
    SET_LO8(eax, MEM8(edi + 0x1D));
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0037E67C; /* jbe: below or equal (unsigned <=) */

loc_0037E419: ;
    ebp = MEM32(esp + 0x60);
    ebx = edi + 0x3C;

loc_0037E420: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0037E42C: ;
    ecx = ZX8(MEM8(edi + 0x1D));
    esi++;
    ebx = ebx + 4;
    if (CMP_L(esi, ecx)) goto loc_0037E420; /* jl: less (signed <) */

loc_0037E438: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

loc_0037E442: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0037E487; /* je: equal / zero */

loc_0037E446: ;
    xmm0 = MEMF(edi + 0xD8); /* movss */
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xD4); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0037D030(); /* call 0x0037D030 */

loc_0037E487: ;
    (void)0; /* test MEM8(edi + 0x1C), 0x40 - flags set for next jcc */
    ebx = MEM32(esp + 0x60);
    if (TEST_Z(MEM8(edi + 0x1C), 0x40)) goto loc_0037E502; /* je: equal / zero */

loc_0037E491: ;
    eax = MEM32(edi + 0x100);
    if (TEST_Z(eax, eax)) goto loc_0037E4A5; /* je: equal / zero */

loc_0037E49B: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    MEM32(edi + 0x9C) = edx;

loc_0037E4A5: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0037E4B4: ;
    ecx = MEM32(edi + 0x9C);
    xmm0 = MEMF(edi + 0xD8); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    xmm2 = MEMF(edi + 0xD4); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x34); /* mulss */
    ecx = ecx & 0xFFFFFF;
    eax = eax << 0x18;
    eax = eax | ecx;
    PUSH32(esp, ecx);
    MEM32(edi + 0x9C) = eax;
    esi = eax;
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xF8); /* movss */
    ecx = esp + 0x28;
    eax = ebx;
    PUSH32(esp, 0); sub_0037C540(); /* call 0x0037C540 */

loc_0037E502: ;
    if (TEST_Z(MEM8(edi + 0x1C), 2)) goto loc_0037E557; /* je: equal / zero */

loc_0037E508: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(edi + 0xE8); /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x20) = edx;
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xE4); /* movss */
    MEM32(0x801FF0) = eax;
    eax = MEM32(esp + 0x20);
    MEM8(0x84B36C) = 1;
    MEM32(0x801FF4) = ecx;
    MEM32(0x801FF8) = eax;
    MEMF(0x801FEC) = xmm0; /* movss */

loc_0037E557: ;
    SET_LO8(eax, MEM8(edi + 0x1D));
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0037E57C; /* jbe: below or equal (unsigned <=) */

loc_0037E560: ;
    ebp = edi + 0x3C;

loc_0037E563: ;
    ecx = MEM32(ebp);
    edx = MEM32(ecx);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0037E570: ;
    ecx = ZX8(MEM8(edi + 0x1D));
    esi++;
    ebp = ebp + 4;
    if (CMP_L(esi, ecx)) goto loc_0037E563; /* jl: less (signed <) */

loc_0037E57C: ;
    if (TEST_Z(MEM8(edi + 0x1C), 4)) goto loc_0037E63C; /* je: equal / zero */

loc_0037E586: ;
    ecx = MEM32(edi + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_0037E58E: ;
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(edi + 0x100);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = ecx;
    MEMF(esp + 0x58) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0037E5F9; /* je: equal / zero */

loc_0037E5D2: ;
    edx = MEM32(eax);
    eax = MEM32(edx);
    MEM32(edi + 0x9C) = eax;
    ecx = ZX8(MEM8(edi + 0x9F));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x648CEC); /* mulss */
    MEMF(esp + 0x4C) = xmm1; /* movss */

loc_0037E5F9: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0037E608: ;
    edx = MEM32(edi + 0x9C);
    ecx = MEM32(edi + 0x3C);
    esi = eax;
    eax = MEM32(edi + 0xF8);
    edx = edx & 0xFFFFFF;
    esi = esi << 0x18;
    esi = esi | edx;
    MEM32(edi + 0x9C) = esi;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_0037E630: ;
    PUSH32(esp, ebx);
    ecx = esi;
    edx = esp + 0x48;
    PUSH32(esp, 0); sub_0037C6F0(); /* call 0x0037C6F0 */

loc_0037E63C: ;
    SET_LO8(eax, MEM8(edi + 0x1C));
    if (TEST_Z(LO8(eax), 2)) goto loc_0037E64A; /* je: equal / zero */

loc_0037E643: ;
    MEM8(0x84B36C) = 0;

loc_0037E64A: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0037E67C; /* je: equal / zero */

loc_0037E64E: ;
    eax = MEM32(ebx + 0x66C);
    if (CMP_G(eax & eax, 0)) goto loc_0037E662; /* jg: greater (signed >) */

loc_0037E658: ;
    eax = MEM32(ebx + 0x670);
    if (CMP_LE(eax & eax, 0)) goto loc_0037E671; /* jle: less or equal (signed <=) */

loc_0037E662: ;
    PUSH32(esp, 0); sub_0037C7C0(); /* call 0x0037C7C0 */

loc_0037E667: ;
    MEM32(ebx + 0x678) = 0;

loc_0037E671: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_0037E67C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0037E67E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0037E690
 * Original: 0x0037E690 - 0x0037E6B0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E690(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037E690: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); sub_0037E160(); /* call 0x0037E160 */

loc_0037E698: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0037E6AA; /* je: equal / zero */

loc_0037E69F: ;
    PUSH32(esp, edi);
    eax = 0x87544C;
    PUSH32(esp, 0); sub_0037DD10(); /* call 0x0037DD10 */

loc_0037E6AA: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037E6B0
 * Original: 0x0037E6B0 - 0x0037E775 (197 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E6B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037E6B0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    eax = ebx + 8;
    PUSH32(esp, eax);
    MEM32(ebx) = 0x63E2B0;
    PUSH32(esp, 0); sub_0037DB30(); /* call 0x0037DB30 */

loc_0037E6F4: ;
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x48);
    MEM32(ebx + 0x1C) = ecx;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037E704: ;
    edx = ebx + 0x24;
    MEM32(ebx + 0x20) = eax;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0037DC80(); /* call 0x0037DC80 */

loc_0037E714: ;
    edi = ebx + 0x30;
    ecx = 0xE;
    esi = esp + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(eax, MEM8(ebx + 0x4C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0037E76D; /* jne: not equal / not zero */

loc_0037E729: ;
    eax = MEM32(ebx + 0x50);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037E731: ;
    MEM32(esp + 0x10) = eax;
    ecx = esp + 0x10;
    eax = esp + 0x4C;
    esi = 0x875404;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0037E747: ;
    eax = MEM32(esp + 0x4C);
    if (CMP_NE(eax, MEM32(0x87540C))) goto loc_0037E757; /* jne: not equal / not zero */

loc_0037E753: ;
    eax = 0; /* xor self */
    goto loc_0037E75A;

loc_0037E757: ;
    eax = MEM32(eax + 0xC);

loc_0037E75A: ;
    MEM32(ebx + 0x2C) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = ebx;
    if (TEST_NZ(eax, eax)) goto loc_0037E76F; /* jne: not equal / not zero */

loc_0037E763: ;
    MEM8(ebx + 0x4C) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 68; return; /* ret 64 */

loc_0037E76D: ;
    eax = ebx;

loc_0037E76F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 68; return; /* ret 64 */

}

/**
 * sub_0037E780
 * Original: 0x0037E780 - 0x0037E788 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E780(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037E780: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_0037E990
 * Original: 0x0037E990 - 0x0037EAE1 (337 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037E990: ;
    esp = esp - 0x1C;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp) = 0x63E304;
    PUSH32(esp, 0); sub_0037DB30(); /* call 0x0037DB30 */

loc_0037E9D8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    MEMF(ebp + 0x2C) = xmm1; /* movss */
    MEMF(ebp + 0x34) = xmm1; /* movss */
    MEMF(ebp + 0x30) = xmm1; /* movss */
    MEMF(ebp + 0x38) = xmm0; /* movss */
    MEMF(ebp + 0x20) = xmm0; /* movss */
    MEMF(ebp + 0x24) = xmm0; /* movss */
    MEMF(ebp + 0x28) = xmm0; /* movss */
    edi = ebp + 0x20;
    MEM32(esp + 0xC) = ecx;
    ecx = ZX8(MEM8(esp + 0x70));
    MEMF(ebp + 0x48) = xmm1; /* movss */
    MEMF(ebp + 0x50) = xmm1; /* movss */
    MEMF(ebp + 0x4C) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648CEC); /* mulss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x64);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x60);
    MEMF(ebp + 0x54) = xmm0; /* movss */
    MEMF(ebp + 0x3C) = xmm0; /* movss */
    MEMF(ebp + 0x40) = xmm0; /* movss */
    MEMF(ebp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, MEM8(esp + 0x68));
    ecx = 7;
    esi = esp + 0xC;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = ebp + 0x60;
    ecx = 0x12;
    esi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, MEM8(ebp + 0x1C));
    edi = MEM32(esp + 0x6C);
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM8(ebp + 0x1C) = LO8(ecx);
    eax = edi;
    if (CMP_NE(LO8(eax), 1)) { sub_0037EAE1(); return; } /* jne: not equal / not zero */

loc_0037EAA1: ;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037EAA6: ;
    MEM32(esp + 0x2C) = eax;
    ecx = esp + 0x2C;
    eax = esp + 0x30;
    esi = 0x875404;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0037EABC: ;
    eax = MEM32(esp + 0x30);
    if (CMP_NE(eax, MEM32(0x87540C))) goto loc_0037EAD4; /* jne: not equal / not zero */

loc_0037EAC8: ;
    eax = 0; /* xor self */
    MEM32(ebp + 0x58) = eax;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    SET_LO8(eax, LO8(eax) | 1);
    g_seh_ebp = ebp; sub_0037EB17(); return; /* tail jmp 0x0037EB17 */

loc_0037EAD4: ;
    eax = MEM32(eax + 0xC);
    MEM32(ebp + 0x58) = eax;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    SET_LO8(eax, LO8(eax) | 1);
    g_seh_ebp = ebp; sub_0037EB17(); return; /* tail jmp 0x0037EB17 */

}

/**
 * sub_0037EB30
 * Original: 0x0037EB30 - 0x0037EB9A (106 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EB30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037EB30: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0x98));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0037EB6C; /* jne: not equal / not zero */

loc_0037EB41: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0037EB57; /* je: equal / zero */

loc_0037EB45: ;
    eax = MEM32(esi + 0x58);
    if (TEST_Z(eax, eax)) goto loc_0037EB96; /* je: equal / zero */

loc_0037EB4C: ;
    MEM32(esi + 0x58) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0037EB57: ;
    esi = MEM32(esi + 0x58);
    if (TEST_NZ(MEM8(esi + 0x14), 0x1F)) goto loc_0037EB96; /* jne: not equal / not zero */

loc_0037EB60: ;
    eax = MEM32(esi);
    MEM32(eax) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0037EB6C: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0037EB96; /* je: equal / zero */

loc_0037EB70: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x5C);
    eax = edi;
    PUSH32(esp, 0); sub_0037BD50(); /* call 0x0037BD50 */

loc_0037EB7B: ;
    SET_LO8(edx, MEM8(esi + 0x1C));
    SET_LO8(edx, LO8(edx) & 0xFE);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x58) = eax;
    MEM8(esi + 0x1C) = LO8(edx);
    if (TEST_NZ(eax, eax)) goto loc_0037EB95; /* jne: not equal / not zero */

loc_0037EB8B: ;
    eax = edi;
    PUSH32(esp, 0); sub_0037BD90(); /* call 0x0037BD90 */

loc_0037EB92: ;
    MEM32(esi + 0x58) = eax;

loc_0037EB95: ;
    POP32(esp, edi);

loc_0037EB96: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037EBA0
 * Original: 0x0037EBA0 - 0x0037EBAD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EBA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037EBA0: ;
    eax = MEM32(ecx + 0x60);
    if (TEST_NZ(eax, eax)) goto loc_0037EBAC; /* jne: not equal / not zero */

loc_0037EBA7: ;
    eax = 0x63E33C;

loc_0037EBAC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037EBB0
 * Original: 0x0037EBB0 - 0x0037EBBD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EBB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037EBB0: ;
    eax = MEM32(ecx + 0x64);
    if (TEST_NZ(eax, eax)) goto loc_0037EBBC; /* jne: not equal / not zero */

loc_0037EBB7: ;
    eax = 0x63E34C;

loc_0037EBBC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037EBC0
 * Original: 0x0037EBC0 - 0x0037EBCF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EBC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037EBC0: ;
    if (TEST_NZ(MEM8(ecx + 0x1C), 2)) { sub_0037EBCF(); return; } /* jne: not equal / not zero */

loc_0037EBC6: ;
    if (TEST_NZ(MEM8(ecx + 0x14), 4)) { sub_0037EBCF(); return; } /* jne: not equal / not zero */

loc_0037EBCC: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0037EBE0
 * Original: 0x0037EBE0 - 0x0037EBE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EBE0(void)
{

loc_0037EBE0: ;
    eax = ecx + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0037EBF0
 * Original: 0x0037EBF0 - 0x0037EE79 (649 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037EBF0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x14));
    if (TEST_NZ(LO8(eax), 1)) goto loc_0037EC07; /* jne: not equal / not zero */

loc_0037EBFE: ;
    ecx = MEM32(edi + 8);
    if (TEST_Z(MEM8(ecx + 0x18), 1)) goto loc_0037EC23; /* je: equal / zero */

loc_0037EC07: ;
    if (TEST_NZ(LO8(eax), 2)) goto loc_0037EC65; /* jne: not equal / not zero */

loc_0037EC0B: ;
    ecx = MEM32(edi + 0x18);
    esi = MEM32(edi + 0x10);
    edx = MEM32(edi + 0xC);
    ecx = ecx << 0x1C;
    ecx = (uint32_t)((int32_t)ecx >> 0x1C);
    PUSH32(esp, 0); sub_0037D270(); /* call 0x0037D270 */

loc_0037EC1F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0037EC65; /* jne: not equal / not zero */

loc_0037EC23: ;
    SET_LO8(eax, MEM8(0x75A8E4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037EE71; /* je: equal / zero */

loc_0037EC30: ;
    eax = MEM32(0x75A8DC);
    ecx = MEM32(eax * 4 + 0x75A8E8);
    edx = MEM32(0x75A8D8);
    eax++;
    MEM32(0x75A8DC) = eax;
    /* TODO: prefetcht0 byte ptr [ecx] */
    MEM32(edx * 4 + 0x75A8E8) = edi;
    eax = MEM32(0x75A8D8);
    eax++;
    POP32(esp, edi);
    MEM32(0x75A8D8) = eax;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

loc_0037EC65: ;
    esi = MEM32(esp + 0x28);
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0037EE71; /* jnp: not parity */

loc_0037EC7E: ;
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x20); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edi + 0x20;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 4); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x14); /* mulss */
    ebx = edi + 0x3C;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    eax = esp + 0x1C;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0xC); /* mulss */
    SET_LO8(eax, MEM8(0x84B36C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(ebx + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x10); /* mulss */
    MEMF(ebx + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x14); /* mulss */
    MEMF(ebx + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x18); /* addss */
    MEMF(ebx + 0x18) = xmm0; /* movss */
    esi = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037EDA3; /* je: equal / zero */

loc_0037ED2F: ;
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 - MEMF(0x801FF8); /* subss */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0037ED4D; /* jp: parity */

loc_0037ED45: ;
    xmm1 = MEMF(0x648D54); /* movss */

loc_0037ED4D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(esi); /* movss */
    xmm2 = MEMF(0x801FEC); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x801FF0); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm1 = MEMF(0x801FF4); /* movss */
    MEMF(esi) = xmm3; /* movss */
    xmm3 = MEMF(esi + 4); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(esi + 4) = xmm3; /* movss */

loc_0037EDA3: ;
    if (TEST_Z(MEM8(edi + 0x1C), 1)) goto loc_0037EDBA; /* je: equal / zero */

loc_0037EDA9: ;
    eax = MEM32(edi + 0x58);
    if (TEST_Z(eax, eax)) goto loc_0037EE6F; /* je: equal / zero */

loc_0037EDB4: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    goto loc_0037EDCE;

loc_0037EDBA: ;
    ecx = MEM32(edi + 0x58);
    if (TEST_NZ(ecx, ecx)) goto loc_0037EDD6; /* jne: not equal / not zero */

loc_0037EDC1: ;
    eax = MEM32(edi + 0x5C);
    PUSH32(esp, 0); sub_0037BD90(); /* call 0x0037BD90 */

loc_0037EDC9: ;
    MEM32(edi + 0x58) = eax;
    ecx = eax;

loc_0037EDCE: ;
    if (TEST_Z(ecx, ecx)) goto loc_0037EE6F; /* je: equal / zero */

loc_0037EDD6: ;
    SET_LO8(eax, MEM8(0x75A8E4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037EE64; /* je: equal / zero */

loc_0037EDE3: ;
    eax = MEM32(0x75A8DC);
    edx = MEM32(eax * 4 + 0x75A8E8);
    eax++;
    MEM32(0x75A8DC) = eax;
    /* TODO: prefetcht0 byte ptr [edx] */
    edx = MEM32(eax * 4 + 0x75A8E8);
    eax++;
    MEM32(0x75A8DC) = eax;
    /* TODO: prefetcht0 byte ptr [edx] */
    edx = MEM32(0x75A8D8);
    MEM32(edx * 4 + 0x75A8E8) = edi;
    eax = MEM32(0x75A8D8);
    eax++;
    MEM32(0x75A8D8) = eax;
    MEM32(eax * 4 + 0x75A8E8) = ebp;
    edx = MEM32(0x75A8D8);
    SET_LO8(eax, MEM8(0x75A8E4));
    edx++;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x75A8D8) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037EE64; /* je: equal / zero */

loc_0037EE3D: ;
    eax = MEM32(0x75A8DC);
    edx = MEM32(eax * 4 + 0x75A8E8);
    eax++;
    MEM32(0x75A8DC) = eax;
    eax = MEM32(0x75A8D8);
    /* TODO: prefetcht0 byte ptr [edx] */
    MEM32(eax * 4 + 0x75A8E8) = ecx;
    MEM32(0x75A8D8) = MEM32(0x75A8D8) + 1;

loc_0037EE64: ;
    ebx = MEM32(esp + 0x2C);
    edi = ecx;
    PUSH32(esp, 0); sub_0037CAD0(); /* call 0x0037CAD0 */

loc_0037EE6F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0037EE71: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037EE80
 * Original: 0x0037EE80 - 0x0037EEDA (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EE80(void)
{

loc_0037EE80: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    eax = ebx + 8;
    PUSH32(esp, eax);
    MEM32(ebx) = 0x63E2E8;
    PUSH32(esp, 0); sub_0037DB30(); /* call 0x0037DB30 */

loc_0037EEC4: ;
    edi = ebx + 0x1C;
    ecx = 9;
    esi = esp + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_0037EEE0
 * Original: 0x0037EEE0 - 0x0037EEED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EEE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037EEE0: ;
    eax = MEM32(ecx + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_0037EEEC; /* jne: not equal / not zero */

loc_0037EEE7: ;
    eax = 0x63E33C;

loc_0037EEEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037EEF0
 * Original: 0x0037EEF0 - 0x0037EEFD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EEF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037EEF0: ;
    eax = MEM32(ecx + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_0037EEFC; /* jne: not equal / not zero */

loc_0037EEF7: ;
    eax = 0x63E34C;

loc_0037EEFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037EF00
 * Original: 0x0037EF00 - 0x0037EF03 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EF00(void)
{

loc_0037EF00: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037EF10
 * Original: 0x0037EF10 - 0x0037EF75 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EF10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037EF10: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x14));
    if (TEST_NZ(LO8(eax), 1)) goto loc_0037EF23; /* jne: not equal / not zero */

loc_0037EF1A: ;
    ecx = MEM32(edi + 8);
    if (TEST_Z(MEM8(ecx + 0x18), 1)) goto loc_0037EF71; /* je: equal / zero */

loc_0037EF23: ;
    if (TEST_NZ(LO8(eax), 2)) goto loc_0037EF41; /* jne: not equal / not zero */

loc_0037EF27: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(edi + 0xC);
    ecx = ecx << 0x1C;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x10);
    ecx = (uint32_t)((int32_t)ecx >> 0x1C);
    PUSH32(esp, 0); sub_0037D270(); /* call 0x0037D270 */

loc_0037EF3C: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037EF71; /* je: equal / zero */

loc_0037EF41: ;
    ecx = MEM32(edi + 0x3C);
    if (TEST_Z(ecx, ecx)) goto loc_0037EF71; /* je: equal / zero */

loc_0037EF48: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0037EF71: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037EF80
 * Original: 0x0037EF80 - 0x0037F22C (684 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EF80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0037EF80: ;
    SET_LO8(ecx, MEM8(eax + 0x1D0));
    edx = MEM32(eax + 0x268);
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    MEM8(eax + 0x1D0) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x1D4) = xmm0; /* movss */
    MEM32(eax + 0x260) = ecx;
    MEM32(eax + 0x264) = edx;
    edi = edi;

loc_0037EFB0: ;
    edx = ZX8(MEM8(eax + 0x73));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(ecx + edx) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x72));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 4) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x71));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 8) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x73));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x10) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x72));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x14) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x71));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x18) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x73));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x20) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x72));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x24) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x71));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x28) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x73));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(ecx + edx + 0x30) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x72));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x34) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x71));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x38) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x73));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x40) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x72));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x44) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x71));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x48) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x73));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x50) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x72));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x54) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x71));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x58) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x73));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x60) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x72));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x64) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x71));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x68) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x73));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x70) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x72));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x74) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x71));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x78) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x73));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x80) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x72));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x84) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x71));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x88) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x73));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x90) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x72));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x94) = xmm0; /* movss */
    edx = ZX8(MEM8(eax + 0x71));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(eax + 0x1BC);
    MEMF(edx + ecx + 0x98) = xmm0; /* movss */
    ecx = ecx + 0xA0;
    if (CMP_B(ecx, 0xC80)) goto loc_0037EFB0; /* jb: below (unsigned <) */

loc_0037F22B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037F230
 * Original: 0x0037F230 - 0x0037F30B (219 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037F230: ;
    esp = esp - 0x100;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x108);
    PUSH32(esp, esi);
    edx = esp + 8;
    esi = eax;
    eax = edi;
    edx = edx - edi;
    /* nop */

loc_0037F250: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F250; /* jne: not equal / not zero */

loc_0037F25A: ;
    SET_LO8(eax, MEM8(esi + 0x98));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037F2BA; /* je: equal / zero */

loc_0037F264: ;
    eax = MEM32(esi + 0x1B8);
    if (TEST_Z(eax, eax)) goto loc_0037F27B; /* je: equal / zero */

loc_0037F26E: ;
    if (TEST_Z(MEM8(eax + 0x18), 1)) goto loc_0037F27B; /* je: equal / zero */

loc_0037F274: ;
    eax = esi;
    PUSH32(esp, 0); sub_0037EF80(); /* call 0x0037EF80 */

loc_0037F27B: ;
    if (TEST_NZ(MEM8(esi + 0x1D0), 1)) goto loc_0037F2BA; /* jne: not equal / not zero */

loc_0037F284: ;
    esp = esp - 0x80;
    edx = esp;
    eax = edi;
    edx = edx - edi;

loc_0037F290: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F290; /* jne: not equal / not zero */

loc_0037F29A: ;
    eax = esp + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0037F310(); /* call 0x0037F310 */

loc_0037F2A7: ;
    edx = esp + 8;
    edx = edx - eax;
    /* nop */

loc_0037F2B0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F2B0; /* jne: not equal / not zero */

loc_0037F2BA: ;
    SET_LO8(eax, MEM8(esi + 0x90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037F2EA; /* je: equal / zero */

loc_0037F2C4: ;
    eax = esi + 0x138;
    PUSH32(esp, edi);
    esi = esp + 0x8C;
    PUSH32(esp, 0); sub_00093190(); /* call 0x00093190 */

loc_0037F2D7: ;
    esp = esp + 4;
    edx = esp + 8;
    edi = edi;

loc_0037F2E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F2E0; /* jne: not equal / not zero */

loc_0037F2EA: ;
    eax = esp + 8;
    edx = ebp;
    ecx = eax;
    edx = edx - ecx;

loc_0037F2F4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F2F4; /* jne: not equal / not zero */

loc_0037F2FE: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp = esp + 0x100;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037F310
 * Original: 0x0037F310 - 0x0037F7EE (1246 bytes, 301 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037F310: ;
    edx = MEM32(esi + 0x268);
    eax = MEM32(esi + 0x260);
    esp = esp - 0x100;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10C);
    eax = eax + edx;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO8(ebx, 1);
    if (CMP_GE(edx, eax)) goto loc_0037F42B; /* jge: greater or equal (signed >=) */

loc_0037F338: ;
    ecx = edx;
    ecx = ecx << 4;
    /* nop */

loc_0037F340: ;
    xmm0 = MEMF(esi + 0xAC); /* movss */
    eax = MEM32(esi + 0x1BC);
    xmm1 = MEMF(esi + 0x1C0); /* movss */
    xmm2 = MEMF(esi + 0x1C4); /* movss */
    xmm3 = MEMF(esi + 0x1C8); /* movss */
    xmm4 = MEMF(esi + 0x1CC); /* movss */
    eax = eax + ecx;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    edi = ZX8(MEM8(esi + 0x73));
    eax = MEM32(esi + 0x1BC);
    eax = eax + ecx;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax))) goto loc_0037F3D1; /* jbe: below or equal (unsigned <=) */

loc_0037F3CB: ;
    MEMF(eax) = xmm0; /* movss */
    goto loc_0037F3D3;

loc_0037F3D1: ;
    SET_LO8(ebx, 0); /* xor self */

loc_0037F3D3: ;
    edi = ZX8(MEM8(esi + 0x72));
    eax = MEM32(esi + 0x1BC);
    eax = ecx + eax + 4;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax))) goto loc_0037F3F0; /* jbe: below or equal (unsigned <=) */

loc_0037F3EA: ;
    MEMF(eax) = xmm0; /* movss */
    goto loc_0037F3F2;

loc_0037F3F0: ;
    SET_LO8(ebx, 0); /* xor self */

loc_0037F3F2: ;
    edi = ZX8(MEM8(esi + 0x71));
    eax = MEM32(esi + 0x1BC);
    eax = ecx + eax + 8;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax))) goto loc_0037F40F; /* jbe: below or equal (unsigned <=) */

loc_0037F409: ;
    MEMF(eax) = xmm0; /* movss */
    goto loc_0037F411;

loc_0037F40F: ;
    SET_LO8(ebx, 0); /* xor self */

loc_0037F411: ;
    eax = MEM32(esi + 0x260);
    edi = MEM32(esi + 0x268);
    edx++;
    eax = eax + edi;
    ecx = ecx + 0x10;
    if (CMP_L(edx, eax)) goto loc_0037F340; /* jl: less (signed <) */

loc_0037F42B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 0x1D4) - sets EFLAGS */
    if ((xmm0 < MEMF(esi + 0x1D4))) goto loc_0037F623; /* jb: below (unsigned <) */

loc_0037F43B: ;
    eax = esp + 0x114;
    edx = eax + 1;

loc_0037F445: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F445; /* jne: not equal / not zero */

loc_0037F44C: ;
    ecx = MEM32(esi + 0x260);
    eax = eax - edx;
    if (CMP_NE(ecx, eax)) goto loc_0037F4C0; /* jne: not equal / not zero */

loc_0037F458: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0037F49B; /* je: equal / zero */

loc_0037F45C: ;
    SET_LO8(eax, MEM8(esi + 0x1D0));
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x587BE4);
    ecx = esp + 0x14;
    SET_LO8(eax, LO8(eax) | 1);
    PUSH32(esp, ecx);
    MEM8(esi + 0x1D0) = LO8(eax);
    MEM32(esi + 0x260) = 0;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037F485: ;
    eax = esi + 0x1D8;
    edx = esp + 0xC;
    edx = edx - eax;

loc_0037F491: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F491; /* jne: not equal / not zero */

loc_0037F49B: ;
    eax = esp + 0x114;
    edx = ebp;
    ecx = eax;
    edx = edx - ecx;

loc_0037F4A8: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F4A8; /* jne: not equal / not zero */

loc_0037F4B2: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x100;
    esp += 136; return; /* ret 132 */

loc_0037F4C0: ;
    edx = ecx + 1;
    eax = esp + 0x114;
    MEM32(esi + 0x260) = edx;
    edi = eax + 1;

loc_0037F4D3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F4D3; /* jne: not equal / not zero */

loc_0037F4DA: ;
    eax = eax - edi;
    if (CMP_NE(edx, eax)) goto loc_0037F508; /* jne: not equal / not zero */

loc_0037F4E0: ;
    eax = esp + 0x114;
    edx = ebp;
    ecx = eax;
    edx = edx - ecx;
    /* nop */

loc_0037F4F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F4F0; /* jne: not equal / not zero */

loc_0037F4FA: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x100;
    esp += 136; return; /* ret 132 */

loc_0037F508: ;
    edx = ZX8(MEM8(esi + 0xA7));
    eax = MEM32(esi + 0x264);
    ecx = MEM32(esi + 0x1BC);
    eax = eax << 4;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + ecx) = xmm0; /* movss */
    edx = ZX8(MEM8(esi + 0xA6));
    eax = MEM32(esi + 0x264);
    ecx = MEM32(esi + 0x1BC);
    eax = eax << 4;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + ecx + 4) = xmm0; /* movss */
    edx = ZX8(MEM8(esi + 0xA5));
    eax = MEM32(esi + 0x264);
    ecx = MEM32(esi + 0x1BC);
    eax = eax << 4;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + ecx + 8) = xmm0; /* movss */
    edx = MEM32(esi + 0x260);
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037F583: ;
    edx = MEM32(esi + 0x260);
    edx++;
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037F59D: ;
    eax = esi + 0x1D8;
    edx = esp + 0xC;
    edx = edx - eax;
    /* nop */

loc_0037F5B0: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F5B0; /* jne: not equal / not zero */

loc_0037F5BA: ;
    eax = MEM32(esi + 0x260);
    if (CMP_NE(MEM8(esp + eax + 0x114), 0x20)) goto loc_0037F5E9; /* jne: not equal / not zero */

loc_0037F5CA: ;
    SET_LO8(eax, MEM8(esi + 0xB0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(esi + 0xA8);
    MEM32(esi + 0x1D4) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037F623; /* je: equal / zero */

loc_0037F5E0: ;
    MEM8(esi + 0x1D0) = MEM8(esi + 0x1D0) & 0xFD;
    goto loc_0037F623;

loc_0037F5E9: ;
    ecx = MEM32(esi + 0x9C);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x1D4) = ecx;
    MEM8(esi + 0x1D0) = MEM8(esi + 0x1D0) | 2;
    MEMF(esi + 0x25C) = xmm0; /* movss */
    MEM8(eax + esi + 0x1D8) = 0x61;
    edx = MEM32(esi + 0x260);
    MEM8(edx + esi + 0x1D9) = 0;
    MEM32(esi + 0x264) = MEM32(esi + 0x264) + 1;

loc_0037F623: ;
    (void)0; /* test MEM8(esi + 0x1D0), 2 - flags set for next jcc */
    xmm0 = MEMF(0x7FA21C); /* movss */
    if (TEST_Z(MEM8(esi + 0x1D0), 2)) goto loc_0037F7B8; /* je: equal / zero */

loc_0037F638: ;
    SET_LO8(eax, MEM8(esi + 0xB0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037F704; /* je: equal / zero */

loc_0037F649: ;
    /* comiss xmm1, MEMF(esi + 0x25C) - sets EFLAGS */
    if ((xmm1 < MEMF(esi + 0x25C))) goto loc_0037F7A4; /* jb: below (unsigned <) */

loc_0037F656: ;
    eax = MEM32(esi + 0x260);
    xmm1 = MEMF(esi + 0xA0); /* movss */
    xmm1 = xmm1 / MEMF(esi + 0x1D4); /* divss */
    xmm1 = xmm1 * MEMF(0x6493A0); /* mulss */
    ecx = eax + esi + 0x1D8;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    edx = (int32_t)xmm1; /* cvttss2si */
    eax = eax - edx;
    eax = eax - 0x40;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO8(edx, LO8(edx) + 0x40);
    MEM8(ecx) = LO8(edx);
    eax = MEM32(esi + 0xA0);
    ecx = ZX8(MEM8(esi + 0xA7));
    edx = MEM32(esi + 0x264);
    MEM32(esi + 0x25C) = eax;
    eax = MEM32(esi + 0x1BC);
    edx = edx << 4;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + eax) = xmm1; /* movss */
    ecx = ZX8(MEM8(esi + 0xA6));
    edx = MEM32(esi + 0x264);
    eax = MEM32(esi + 0x1BC);
    edx = edx << 4;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + eax + 4) = xmm1; /* movss */
    ecx = ZX8(MEM8(esi + 0xA5));
    edx = MEM32(esi + 0x264);
    eax = MEM32(esi + 0x1BC);
    edx = edx << 4;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + eax + 8) = xmm1; /* movss */
    goto loc_0037F7A4;

loc_0037F704: ;
    /* comiss xmm1, MEMF(esi + 0x25C) - sets EFLAGS */
    if ((xmm1 < MEMF(esi + 0x25C))) goto loc_0037F7A4; /* jb: below (unsigned <) */

loc_0037F711: ;
    ecx = MEM32(esi + 0x260);
    eax = ecx + esi + 0x1D8;
    if (CMP_EQ(MEM8(eax), 0x7C)) goto loc_0037F787; /* je: equal / zero */

loc_0037F723: ;
    MEM8(eax) = 0x7C;
    edx = ZX8(MEM8(esi + 0xA7));
    eax = MEM32(esi + 0x264);
    ecx = MEM32(esi + 0x1BC);
    eax = eax << 4;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + ecx) = xmm1; /* movss */
    edx = ZX8(MEM8(esi + 0xA6));
    eax = MEM32(esi + 0x264);
    ecx = MEM32(esi + 0x1BC);
    eax = eax << 4;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + ecx + 4) = xmm1; /* movss */
    edx = ZX8(MEM8(esi + 0xA5));
    eax = MEM32(esi + 0x264);
    ecx = MEM32(esi + 0x1BC);
    eax = eax << 4;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + ecx + 8) = xmm1; /* movss */
    goto loc_0037F78A;

loc_0037F787: ;
    MEM8(eax) = 0x20;

loc_0037F78A: ;
    edx = MEM32(esi + 0x260);
    MEM8(edx + esi + 0x1D9) = 0;
    eax = MEM32(esi + 0xA0);
    MEM32(esi + 0x25C) = eax;

loc_0037F7A4: ;
    xmm1 = MEMF(esi + 0x25C); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esi + 0x25C) = xmm1; /* movss */

loc_0037F7B8: ;
    xmm1 = MEMF(esi + 0x1D4); /* movss */
    edx = esi + 0x1D8;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esi + 0x1D4) = xmm1; /* movss */
    eax = ebp;
    edx = edx - ebp;

loc_0037F7D6: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F7D6; /* jne: not equal / not zero */

loc_0037F7E0: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x100;
    esp += 136; return; /* ret 132 */

}

/**
 * sub_0037F7F0
 * Original: 0x0037F7F0 - 0x0037F878 (136 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F7F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037F7F0: ;
    esp = esp - 0x100;
    eax = MEM32(ecx + 0x7C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0x7F) = 0;
    if (TEST_Z(eax, eax)) goto loc_0037F85C; /* je: equal / zero */

loc_0037F806: ;
    eax = ZX8(MEM8(ecx + 0x78));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0037F84D; /* je: equal / zero */

loc_0037F80F: ;
    eax--;
    if ((eax == 0)) goto loc_0037F82C; /* je: equal / zero */

loc_0037F812: ;
    eax--;
    if ((eax != 0)) goto loc_0037F85C; /* jne: not equal / not zero */

loc_0037F815: ;
    eax = ecx + 0xB8;
    edx = esp;
    edx = edx - eax;

loc_0037F820: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F820; /* jne: not equal / not zero */

loc_0037F82A: ;
    goto loc_0037F85C;

loc_0037F82C: ;
    ecx = MEM32(ecx + 0x1B8);
    eax = esp + 0x80;
    PUSH32(esp, 0); sub_0037D110(); /* call 0x0037D110 */

loc_0037F83E: ;
    edx = esp;

loc_0037F841: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F841; /* jne: not equal / not zero */

loc_0037F84B: ;
    goto loc_0037F85C;

loc_0037F84D: ;
    ecx = ecx + 0xB8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_0037F859: ;
    esp = esp + 4;

loc_0037F85C: ;
    eax = esp;
    edx = esi;
    ecx = eax;
    edx = edx - ecx;

loc_0037F865: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037F865; /* jne: not equal / not zero */

loc_0037F86F: ;
    eax = esi;
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_0037F880
 * Original: 0x0037F880 - 0x0037FC7F (1023 bytes, 261 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037F880: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xD8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xDC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xE0);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xE4);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp) = 0x63E25C;
    PUSH32(esp, 0); sub_0037DB30(); /* call 0x0037DB30 */

loc_0037F8DB: ;
    edx = MEM32(esp + 0xD0);
    xmm0 = MEMF(esp + 0xEC); /* movss */
    MEMF(ebp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ebp + 0x1C;
    MEMF(eax + 0x18) = xmm0; /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xD4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xD8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0xDC);
    edx = MEM32(esp + 0xE0);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    MEM8(ebp + 0xB8) = 0;
    MEM8(ebp + 0x137) = 0;
    MEM8(ebp + 0x138) = 0;
    MEM8(ebp + 0x1B7) = 0;
    MEMF(ebp + 0x1D4) = xmm0; /* movss */
    MEM8(ebp + 0x1D8) = 0;
    MEM8(ebp + 0x257) = 0;
    SET_LO8(eax, MEM8(ebp + 0x1D0));
    SET_LO8(eax, LO8(eax) & 0xFE);
    SET_LO8(eax, LO8(eax) | 2);
    edi = ebp + 0x38;
    ecx = 0x20;
    esi = esp + 0xB0;
    ebx = 0; /* xor self */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(ebp + 0x1D0) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x98));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebp + 0x260) = ebx;
    MEM32(ebp + 0x264) = ebx;
    MEMF(ebp + 0x25C) = xmm0; /* movss */
    MEM32(ebp + 0x1BC) = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037FA25; /* je: equal / zero */

loc_0037F9A4: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0037F9B1; /* jne: not equal / not zero */

loc_0037F9AC: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0037F9B1: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0037F9FF; /* je: equal / zero */

loc_0037F9D7: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC80)) goto loc_0037F9FF; /* jb: below (unsigned <) */

loc_0037F9E3: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037F9ED: ;
    PUSH32(esp, 0xC80);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037F9F8: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0037FA1F; /* jne: not equal / not zero */

loc_0037F9FF: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0037FA11: ;
    PUSH32(esp, 0xC80);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0037FA1C: ;
    esp = esp + 8;

loc_0037FA1F: ;
    MEM32(ebp + 0x1BC) = eax;

loc_0037FA25: ;
    eax = MEM32(esp + 0xF4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    xmm3 = MEMF(0x648EEC); /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_0037FAF1; /* je: equal / zero */

loc_0037FA3C: ;
    if (CMP_EQ(MEM32(ebp + 0x1BC), ebx)) goto loc_0037FAF1; /* je: equal / zero */

loc_0037FA48: ;
    edi = 0; /* xor self */
    edx = eax + 1;
    /* nop */

loc_0037FA50: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037FA50; /* jne: not equal / not zero */

loc_0037FA57: ;
    eax = eax - edx;
    MEM32(esp + 0x10) = eax;
    if ((eax == 0)) goto loc_0037FAF1; /* je: equal / zero */

loc_0037FA63: ;
    edx = MEM32(esp + 0xE8);
    ecx = edx;
    ebx = edx;
    ecx = ecx >> 0x10;
    edx = edx >> 8;
    ebx = ebx >> 0x18;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    eax = 0; /* xor self */
    goto loc_0037FA90;

loc_0037FA83: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    goto loc_0037FA90;

    /* nop */

loc_0037FA90: ;
    esi = ZX8(LO8(ebx));
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = MEM32(ebp + 0x1BC);
    MEMF(eax + esi) = xmm0; /* movss */
    ecx = ZX8(LO8(ecx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(ebp + 0x1BC);
    MEMF(eax + ecx + 4) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x1BC);
    edx = ZX8(LO8(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + ecx + 8) = xmm0; /* movss */
    edx = MEM32(ebp + 0x1BC);
    ecx = MEM32(esp + 0xF4);
    MEMF(eax + edx + 0xC) = xmm3; /* movss */
    edi++;
    eax = eax + 0x10;
    esi = ecx + 1;

loc_0037FAE2: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0037FAE2; /* jne: not equal / not zero */

loc_0037FAE9: ;
    ecx = ecx - esi;
    if (CMP_B(edi, ecx)) goto loc_0037FA83; /* jb: below (unsigned <) */

loc_0037FAEF: ;
    ebx = 0; /* xor self */

loc_0037FAF1: ;
    eax = MEM32(ebp + 0x1BC);
    if (CMP_EQ(eax, ebx)) goto loc_0037FB6D; /* je: equal / zero */

loc_0037FAFB: ;
    ecx = MEM32(esp + 0x11C);
    xmm3 = xmm3 - MEMF(eax + 0xC); /* subss */
    edx = ecx;
    edx = edx >> 0x18;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    edx = ecx;
    edx = edx >> 0x10;
    edx = ZX8(LO8(edx));
    ecx = ecx >> 8;
    ecx = ZX8(LO8(ecx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0x18);
    edx = ebp + 0x1C0;
    MEM32(edx) = eax;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0x20) = xmm2; /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm3; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;

loc_0037FB6D: ;
    SET_LO8(eax, MEM8(esp + 0x108));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(esp + 0x10C);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037FB97; /* je: equal / zero */

loc_0037FB7F: ;
    if (CMP_EQ(edi, ebx)) goto loc_0037FB97; /* je: equal / zero */

loc_0037FB83: ;
    eax = edi;
    edx = eax + 1;

loc_0037FB88: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037FB88; /* jne: not equal / not zero */

loc_0037FB8F: ;
    eax = eax - edx;
    MEM32(ebp + 0x268) = eax;

loc_0037FB97: ;
    edx = MEM32(ebp + 0x7C);
    PUSH32(esp, 0x7F);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037FBA7: ;
    eax = ebp + 0xB8;
    edx = esp + 0x28;
    edx = edx - eax;

loc_0037FBB3: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037FBB3; /* jne: not equal / not zero */

loc_0037FBBD: ;
    (void)0; /* cmp MEM8(esp + 0xF0), 1 - flags set for next jcc */
    MEM32(ebp + 0x1B8) = ebx;
    if (CMP_NE(MEM8(esp + 0xF0), 1)) goto loc_0037FC16; /* jne: not equal / not zero */

loc_0037FBCD: ;
    eax = ebp + 0xB8;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037FBD8: ;
    MEM32(esp + 0x10) = eax;
    ecx = esp + 0x10;
    eax = esp + 0x14;
    esi = 0x875404;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0037FBEE: ;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(eax, MEM32(0x87540C))) goto loc_0037FBFE; /* jne: not equal / not zero */

loc_0037FBFA: ;
    esi = 0; /* xor self */
    goto loc_0037FC01;

loc_0037FBFE: ;
    esi = MEM32(eax + 0xC);

loc_0037FC01: ;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(ebp + 0x1B8) = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0037FC12; /* je: equal / zero */

loc_0037FC0B: ;
    PUSH32(esp, 0); sub_0037DAA0(); /* call 0x0037DAA0 */

loc_0037FC10: ;
    goto loc_0037FC16;

loc_0037FC12: ;
    MEM8(ebp + 0x78) = 2;

loc_0037FC16: ;
    edx = MEM32(ebp + 0x264);
    ecx = MEM32(ebp + 0x268);
    edx = edx + ecx;
    PUSH32(esp, 0x7F);
    MEM32(ebp + 0x264) = edx;
    PUSH32(esp, edi);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0037FC37: ;
    eax = ebp + 0x138;
    edx = esp + 0x28;
    edx = edx - eax;

loc_0037FC43: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0037FC43; /* jne: not equal / not zero */

loc_0037FC4D: ;
    eax = MEM32(esp + 0x12C);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0037FC59: ;
    MEM32(esp + 0x10) = eax;
    ecx = esp + 0x10;
    eax = esp + 0x14;
    esi = 0x875404;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_0037FC6F: ;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(eax, MEM32(0x87540C))) { sub_0037FC7F(); return; } /* jne: not equal / not zero */

loc_0037FC7B: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0037FC82(); return; /* tail jmp 0x0037FC82 */

}

/**
 * sub_0037FCA0
 * Original: 0x0037FCA0 - 0x0037FCAD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FCA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037FCA0: ;
    eax = MEM32(ecx + 0x38);
    if (TEST_NZ(eax, eax)) goto loc_0037FCAC; /* jne: not equal / not zero */

loc_0037FCA7: ;
    eax = 0x63E33C;

loc_0037FCAC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037FCB0
 * Original: 0x0037FCB0 - 0x0037FCBD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FCB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037FCB0: ;
    eax = MEM32(ecx + 0x3C);
    if (TEST_NZ(eax, eax)) goto loc_0037FCBC; /* jne: not equal / not zero */

loc_0037FCB7: ;
    eax = 0x63E34C;

loc_0037FCBC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037FCC0
 * Original: 0x0037FCC0 - 0x0037FED1 (529 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FCC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0037FCC0: ;
    SET_LO8(eax, MEM8(0x75A8E4));
    esp = esp - 0x130;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037FCFB; /* je: equal / zero */

loc_0037FCD4: ;
    eax = MEM32(0x75A8DC);
    ecx = MEM32(eax * 4 + 0x75A8E8);
    eax++;
    MEM32(0x75A8DC) = eax;
    eax = MEM32(0x75A8D8);
    /* TODO: prefetcht0 byte ptr [ecx] */
    MEM32(eax * 4 + 0x75A8E8) = ebx;
    MEM32(0x75A8D8) = MEM32(0x75A8D8) + 1;

loc_0037FCFB: ;
    SET_LO8(eax, MEM8(ebx + 0x14));
    if (TEST_NZ(LO8(eax), 1)) goto loc_0037FD0F; /* jne: not equal / not zero */

loc_0037FD02: ;
    ecx = MEM32(ebx + 8);
    if (TEST_Z(MEM8(ecx + 0x18), 1)) goto loc_0037FEC5; /* je: equal / zero */

loc_0037FD0F: ;
    if (TEST_NZ(LO8(eax), 2)) goto loc_0037FD2F; /* jne: not equal / not zero */

loc_0037FD13: ;
    ecx = MEM32(ebx + 0x18);
    esi = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0xC);
    ecx = ecx << 0x1C;
    ecx = (uint32_t)((int32_t)ecx >> 0x1C);
    PUSH32(esp, 0); sub_0037D270(); /* call 0x0037D270 */

loc_0037FD27: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037FEC5; /* je: equal / zero */

loc_0037FD2F: ;
    esi = MEM32(esp + 0x144);
    xmm0 = MEMF(ebx + 0x1C); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x10); /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x14); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x24); /* movss */
    edx = esp + 0x30;
    eax = esp + 0x14;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x144);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(ebx + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0xC); /* mulss */
    eax = MEM32(ebx + 0x258);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x10); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x14); /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x18); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0037FDEC; /* je: equal / zero */

loc_0037FDE5: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    MEM32(ebx + 0x70) = edx;

loc_0037FDEC: ;
    eax = esp + 0x14;
    ecx = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = 0x75A8BC;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x75A8CC); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x75A8D0); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x18); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    esi = esp + 0x3C;
    ecx = ebx;
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0037F7F0(); /* call 0x0037F7F0 */

loc_0037FE73: ;
    edx = esp + 0xBC;
    edi = eax;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_0037F230(); /* call 0x0037F230 */

loc_0037FE84: ;
    ecx = MEM32(ebx + 0x1BC);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    esp = esp - 0xC;
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x15C);
    esi = ebx + 0x38;
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0); sub_0037CE60(); /* call 0x0037CE60 */

loc_0037FEC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x130;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037FEE0
 * Original: 0x0037FEE0 - 0x0037FF20 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FEE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0037FEE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x98));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esi) = 0x63E25C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0037FF02; /* je: equal / zero */

loc_0037FEF3: ;
    eax = esi + 0x1BC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0037FEFF: ;
    esp = esp + 4;

loc_0037FF02: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi) = 0x63E2CC;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0037FF1A; /* je: equal / zero */

loc_0037FF0F: ;
    PUSH32(esp, esi);
    eax = 0x87544C;
    PUSH32(esp, 0); sub_0037DD10(); /* call 0x0037DD10 */

loc_0037FF1A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037FF60
 * Original: 0x0037FF60 - 0x0038002C (204 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FF60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0037FF60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFE0u;
    eax = 0x1794;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0037FF70: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEMF(esp + 0xCC) = xmm0; /* movss */
    eax = MEM32(esp + 0xCC);
    MEMF(esp + 0xD0) = xmm0; /* movss */
    ecx = MEM32(esp + 0xD0);
    MEMF(esp + 0xD4) = xmm0; /* movss */
    edx = MEM32(esp + 0xD4);
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEM32(esp + 0xD8) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0xDC) = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x190);
    MEM32(esi) = 0x63E278;
    MEM32(esp + 0xE8) = edx;
    MEMF(esp + 0xEC) = xmm1; /* movss */
    MEM32(esp + 0xF0) = eax;
    MEM32(esp + 0xF4) = ecx;
    MEMF(esp + 0xF8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0037B920(); /* call 0x0037B920 */

loc_0038000A: ;
    edi = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) { sub_0038002C(); return; } /* je: equal / zero */

loc_00380013: ;
    edx = esp + 0xDC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63E34C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0037DEB0(); /* call 0x0037DEB0 */

loc_00380026: ;
    MEM32(esp + 0x3C) = eax;
    g_seh_ebp = ebp; sub_00380030(); return; /* tail jmp 0x00380030 */

}

/**
 * sub_003825E0
 * Original: 0x003825E0 - 0x00382630 (80 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003825E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003825E0: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_003825EC: ;
    if (TEST_Z(eax, eax)) { sub_00382630(); return; } /* je: equal / zero */

loc_003825F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_003825F6: ;
    ecx = MEM32(esi);
    MEM32(esi + ecx * 4 + 0x20) = eax;
    ebp = MEM32(esi + 0x20);
    ecx = esi + 0x20;
    edx = 0; /* xor self */
    if (CMP_EQ(ebp, eax)) goto loc_00382613; /* je: equal / zero */

loc_00382608: ;
    ebp = MEM32(ecx + 4);
    ecx = ecx + 4;
    edx++;
    if (CMP_NE(ebp, eax)) goto loc_00382608; /* jne: not equal / not zero */

loc_00382613: ;
    (void)0; /* cmp edx, MEM32(esi) - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(edx, MEM32(esi))) { sub_00382630(); return; } /* je: equal / zero */

loc_00382618: ;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) { sub_00382630(); return; } /* je: equal / zero */

loc_0038261D: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_00382624: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00382630(); return; } /* jne: not equal / not zero */

loc_00382628: ;
    MEM32(ebx) = MEM32(ebx) + 1;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00382640
 * Original: 0x00382640 - 0x00382724 (228 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00382640: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x54);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0038271E; /* jle: less or equal (signed <=) */

loc_0038265E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edi + 0x28;

loc_00382663: ;
    eax = MEM32(ebp);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_BE(LO8(ebx) & LO8(ebx), 0)) goto loc_003826A7; /* jbe: below or equal (unsigned <=) */

loc_00382671: ;
    edi = eax + 0x3C;
    esi = edi;
    goto loc_00382680;

    /* nop */
    /* nop */

loc_00382680: ;
    SET_LO8(ebx, MEM8(eax + ecx + 0x104));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00382693; /* je: equal / zero */

loc_0038268B: ;
    ebx = MEM32(esi);
    MEM32(edi) = ebx;
    edx++;
    edi = edi + 4;

loc_00382693: ;
    ebx = ZX8(MEM8(eax + 0x1D));
    ecx++;
    esi = esi + 4;
    if (CMP_L(ecx, ebx)) goto loc_00382680; /* jl: less (signed <) */

loc_0038269F: ;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);

loc_003826A7: ;
    MEM8(eax + 0x1D) = LO8(edx);
    eax = MEM32(ebp);
    eax = MEM32(eax + 0xFC);
    if (TEST_Z(eax, eax)) goto loc_00382705; /* je: equal / zero */

loc_003826B7: ;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_003826BC: ;
    edx = MEM32(esi);
    MEM32(esi + edx * 4 + 0x20) = eax;
    ebx = MEM32(esi + 0x20);
    edx = esi + 0x20;
    ecx = 0; /* xor self */
    if (CMP_EQ(ebx, eax)) goto loc_003826DB; /* je: equal / zero */

loc_003826CE: ;
    edi = edi;

loc_003826D0: ;
    ebx = MEM32(edx + 4);
    edx = edx + 4;
    ecx++;
    if (CMP_NE(ebx, eax)) goto loc_003826D0; /* jne: not equal / not zero */

loc_003826DB: ;
    if (CMP_EQ(ecx, MEM32(esi))) goto loc_00382705; /* je: equal / zero */

loc_003826DF: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00382705; /* je: equal / zero */

loc_003826E4: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + ecx * 4);
    eax = MEM32(ebp);
    edx = ZX8(MEM8(eax + 0x1D));
    MEM8(edx + eax + 0x104) = 0;
    edx = ZX8(MEM8(eax + 0x1D));
    MEM32(eax + edx * 4 + 0x3C) = ecx;
    MEM8(eax + 0x1D) = MEM8(eax + 0x1D) + 1;

loc_00382705: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x54);
    eax++;
    ebp = ebp + 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_00382663; /* jl: less (signed <) */

loc_0038271C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0038271E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00382730
 * Original: 0x00382730 - 0x0038276E (62 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00382730: ;
    SET_LO8(eax, MEM8(0x75A8E4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00382760; /* je: equal / zero */

loc_00382739: ;
    eax = MEM32(0x75A8DC);
    edx = MEM32(eax * 4 + 0x75A8E8);
    eax++;
    MEM32(0x75A8DC) = eax;
    eax = MEM32(0x75A8D8);
    /* TODO: prefetcht0 byte ptr [edx] */
    MEM32(eax * 4 + 0x75A8E8) = ecx;
    MEM32(0x75A8D8) = MEM32(0x75A8D8) + 1;

loc_00382760: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    MEM8(0x84B36C) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

}

/**
 * sub_00382770
 * Original: 0x00382770 - 0x00382877 (263 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00382770: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(MEM8(esi + 0x1C), 1)) goto loc_00382787; /* je: equal / zero */

loc_0038277E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00383530(); /* call 0x00383530 */

loc_00382787: ;
    if (TEST_Z(MEM8(esi + 0x1C), 4)) goto loc_00382798; /* je: equal / zero */

loc_0038278D: ;
    PUSH32(esp, ebp);
    edx = edi + 0xC;
    ecx = esi;
    PUSH32(esp, 0); sub_00383D20(); /* call 0x00383D20 */

loc_00382798: ;
    if (TEST_Z(MEM8(esi + 0x1C), 2)) goto loc_003827A9; /* je: equal / zero */

loc_0038279E: ;
    PUSH32(esp, ebp);
    edx = edi + 0x10;
    ecx = esi;
    PUSH32(esp, 0); sub_00383B60(); /* call 0x00383B60 */

loc_003827A9: ;
    if (TEST_Z(MEM8(esi + 0x1C), 8)) goto loc_00382872; /* je: equal / zero */

loc_003827B3: ;
    SET_LO8(eax, MEM8(esi + 0x164));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038282D; /* je: equal / zero */

loc_003827BD: ;
    xmm4 = MEMF(esp + 0xC); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(0x648D20); /* movss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * MEMF(esi + 0x16C); /* mulss */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 * MEMF(esi + 0x168); /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 * MEMF(esi + 0x15C); /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 * MEMF(esi + 0x158); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    goto loc_00382853;

loc_0038282D: ;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esi + 0x15C); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x158); /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */

loc_00382853: ;
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    if (TEST_Z(MEM8(esi + 0x1D), 1)) goto loc_00382872; /* je: equal / zero */

loc_00382862: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00383AB0(); /* call 0x00383AB0 */

loc_00382868: ;
    xmm0 = xmm0 + MEMF(edi + 0x18); /* addss */
    MEMF(edi + 0x18) = xmm0; /* movss */

loc_00382872: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00382880
 * Original: 0x00382880 - 0x00382888 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382880(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00382880: ;
    ecx = MEM32(ecx + 0x38);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00382900
 * Original: 0x00382900 - 0x00382908 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382900(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00382900: ;
    ecx = MEM32(ecx + 0x38);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_00382960
 * Original: 0x00382960 - 0x00382B0A (426 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00382960: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    MEM32(ebp) = 0x63E36C;
    PUSH32(esp, edi);
    esp = esp - 0x18;
    eax = ebx + 4;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = eax;
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0037DB30(); /* call 0x0037DB30 */

loc_003829A6: ;
    SET_LO8(eax, MEM8(ebp + 0x1D));
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(ebp + 0x1D) = LO8(eax);
    edx = ebp + 0x64;
    MEMF(ebp + 0x4C) = xmm1; /* movss */
    MEMF(ebp + 0x58) = xmm0; /* movss */
    MEMF(ebp + 0x40) = xmm0; /* movss */
    MEMF(ebp + 0x44) = xmm0; /* movss */
    MEMF(ebp + 0x48) = xmm0; /* movss */
    MEMF(ebp + 0x54) = xmm1; /* movss */
    MEMF(ebp + 0x50) = xmm1; /* movss */
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0037DC80(); /* call 0x0037DC80 */

loc_003829E8: ;
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x34);
    PUSH32(esp, 0); sub_0037DC80(); /* call 0x0037DC80 */

loc_003829F4: ;
    eax = MEM32(ebx + 0x44);
    ecx = ebp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0037DC80(); /* call 0x0037DC80 */

loc_00382A00: ;
    eax = MEM32(ebx + 0x84);
    edx = ebp + 0x7C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0037DC80(); /* call 0x0037DC80 */

loc_00382A0F: ;
    eax = ebx + 0xB0;
    edx = MEM32(eax);
    ecx = ebp + 0x158;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(ebx + 0x54);
    ecx = ebp + 0x170;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0037DC80(); /* call 0x0037DC80 */

loc_00382A4C: ;
    eax = MEM32(ebx + 0x64);
    edx = ebp + 0x178;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0037DC80(); /* call 0x0037DC80 */

loc_00382A5B: ;
    eax = ebp + 0x180;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x6C);
    PUSH32(esp, 0); sub_0037DC80(); /* call 0x0037DC80 */

loc_00382A6A: ;
    edi = ebp + 0x84;
    ecx = 0x35;
    esi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x1C);
    MEM32(ebp + 0x38) = ecx;
    SET_LO8(eax, MEM8(ebx + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00382AC6; /* je: equal / zero */

loc_00382A87: ;
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00382A8F: ;
    MEM32(esp + 0x18) = eax;
    ecx = esp + 0x18;
    eax = esp + 0x14;
    esi = 0x875404;
    PUSH32(esp, 0); sub_00068470(); /* call 0x00068470 */

loc_00382AA5: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, MEM32(0x87540C))) goto loc_00382ABF; /* je: equal / zero */

loc_00382AB1: ;
    eax = MEM32(eax + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00382ABF; /* je: equal / zero */

loc_00382AB8: ;
    edx = MEM32(eax);
    MEM32(ebp + 0x5C) = edx;
    goto loc_00382AC6;

loc_00382ABF: ;
    MEM8(ebp + 0xA8) = 0;

loc_00382AC6: ;
    xmm0 = MEMF(ebx + 0x70); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00382B0A(); return; } /* jp: parity */

loc_00382ADC: ;
    xmm0 = MEMF(ebx + 0x74); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00382B0A(); return; } /* jp: parity */

loc_00382AEA: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00382B0A(); return; } /* jp: parity */

loc_00382AF8: ;
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00382B0A(); return; } /* jp: parity */

loc_00382B06: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_00382B0C(); return; /* tail jmp 0x00382B0C */

}

/**
 * sub_00382CC0
 * Original: 0x00382CC0 - 0x00382F80 (704 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382CC0(void)
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

loc_00382CC0: ;
    esp = esp - 0x6C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x1D));
    (void)0; /* test LO8(eax), 0x10 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), 0x10)) { sub_00382F80(); return; } /* jne: not equal / not zero */

loc_00382CD4: ;
    if (TEST_Z(LO8(eax), 2)) { sub_00382F80(); return; } /* je: equal / zero */

loc_00382CDC: ;
    xmm4 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    esi = MEM32(esp + 0x84);
    ebx = MEM32(esp + 0x80);
    eax = esp + 0x28;
    ecx = esp + 0x1C;
    edx = eax;
    xmm3 = xmm4; /* movaps */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x84) = edx;
    goto loc_00382D60;

loc_00382D43: ;
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    goto loc_00382D60;

    /* nop */
    /* nop */

loc_00382D60: ;
    xmm5 = MEMF(0x648D20); /* movss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 * MEMF(ebp + 0x130); /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm7 = xmm7 * MEMF(ebp + 0x12C); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    PUSH32(esp, ecx);
    xmm6 = xmm6 + xmm2; /* addss */
    edi = esp + 0x2C;
    eax = ebp;
    MEMF(esp) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00382770(); /* call 0x00382770 */

loc_00382DC9: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 * MEMF(esi + 4); /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x84);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    ecx = MEM32(ebp + 0x38);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x3C); /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    edx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEMF(esp + 0x44) = xmm0; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00382E6E: ;
    fp_push((double)SMEM32(ebp + 0x120)); /* fild */
    eax = MEM32(ebp + 0x120);
    if (CMP_GE(eax & eax, 0)) goto loc_00382E84; /* jge: greater or equal (signed >=) */

loc_00382E7E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00382E84: ;
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00382D43; /* ja: above (unsigned >) */

loc_00382EA2: ;
    PUSH32(esp, 0x3F800000);
    edi = esp + 0x2C;
    eax = ebp;
    PUSH32(esp, 0); sub_00382770(); /* call 0x00382770 */

loc_00382EB2: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 * MEMF(esi + 4); /* mulss */
    ecx = esp + 0x28;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    edx = esp + 0x1C;
    eax = ecx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x80) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x84) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x80);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x84);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    ecx = MEM32(ebp + 0x38);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x3C); /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    eax = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00382F76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003831D0
 * Original: 0x003831D0 - 0x00383223 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003831D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003831D0: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(MEM8(ebp + 0x1D), 4)) { sub_00383223(); return; } /* je: equal / zero */

loc_003831E2: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (TEST_NZ(LO8(eax), 1)) goto loc_003831F2; /* jne: not equal / not zero */

loc_003831E9: ;
    ecx = MEM32(ebp + 8);
    if (TEST_Z(MEM8(ecx + 0x18), 1)) { sub_00383223(); return; } /* je: equal / zero */

loc_003831F2: ;
    if (TEST_NZ(LO8(eax), 2)) goto loc_0038320E; /* jne: not equal / not zero */

loc_003831F6: ;
    ecx = MEM32(ebp + 0x18);
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    ecx = ecx << 0x1C;
    ecx = (uint32_t)((int32_t)ecx >> 0x1C);
    PUSH32(esp, 0); sub_0037D270(); /* call 0x0037D270 */

loc_0038320A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00383223(); return; } /* je: equal / zero */

loc_0038320E: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx + 0x674);
    eax = MEM32(0x84B370);
    MEM32(ebp + eax * 4 + 0x28) = ecx;
    g_seh_ebp = ebp; sub_00383228(); return; /* tail jmp 0x00383228 */

}

/**
 * sub_00383530
 * Original: 0x00383530 - 0x00383553 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00383530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00383530: ;
    xmm7 = MEMF(0x6493A4); /* movss */
    esp = esp - 0x54;
    PUSH32(esp, esi);
    esi = eax;
    xmm0 = MEMF(esi + 0x6C); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    if (1 /* jnp after test - parity */) { sub_00383553(); return; } /* jnp: not parity */

loc_00383551: ;
    g_seh_ebp = ebp; sub_0038356A(); return; /* tail jmp 0x0038356A */

}

/**
 * sub_00383AB0
 * Original: 0x00383AB0 - 0x00383B4C (156 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00383AB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00383AB0: ;
    esp = esp - 0x2C;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_00383530(); /* call 0x00383530 */

loc_00383AC4: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(0x648D54); /* addss */
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_00383530(); /* call 0x00383530 */

loc_00383AE4: ;
    eax = esp + 0x14;
    ecx = esp + 0x20;
    edx = esp + 8;
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x30) = edx;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00383B4C(); return; } /* jnp: not parity */

loc_00383B34: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00383B43: ;
    esp = esp + 8;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00383B60
 * Original: 0x00383B60 - 0x00383B7A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00383B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00383B60: ;
    xmm0 = MEMF(ecx + 0x180); /* movss */
    /* ucomiss xmm0, MEMF(0x6493A4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00383B7A(); return; } /* jnp: not parity */

loc_00383B75: ;
    xmm2 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_00383B96(); return; /* tail jmp 0x00383B96 */

}

/**
 * sub_00383D20
 * Original: 0x00383D20 - 0x00383D37 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00383D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00383D20: ;
    xmm0 = MEMF(ecx + 0x7C); /* movss */
    /* ucomiss xmm0, MEMF(0x6493A4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00383D37(); return; } /* jnp: not parity */

loc_00383D32: ;
    xmm3 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_00383D53(); return; /* tail jmp 0x00383D53 */

}

/**
 * sub_00383E40
 * Original: 0x00383E40 - 0x00383E80 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00383E40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00383E40: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax) = 0x63E390;
    if (TEST_S(ecx, ecx)) goto loc_00383E52; /* jl: less (signed <) */

loc_00383E4A: ;
    if (CMP_L(ecx, 0x80)) goto loc_00383E54; /* jl: less (signed <) */

loc_00383E52: ;
    ecx = 0; /* xor self */

loc_00383E54: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = edx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 0x1C) = xmm0; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00383EB0
 * Original: 0x00383EB0 - 0x00383ED7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00383EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00383EB0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x63E38C;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_00383ED1; /* je: equal / zero */

loc_00383EC0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00383ECE: ;
    esp = esp + 4;

loc_00383ED1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00383EE0
 * Original: 0x00383EE0 - 0x00384051 (369 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00383EE0(void)
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

loc_00383EE0: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0038404E; /* je: equal / zero */

loc_00383EEB: ;
    eax = MEM32(esi + 8);
    fp_push(MEMF(eax + 0xC68)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00383F06; /* ja: above (unsigned >) */

loc_00383F02: ;
    MEM8(esi + 0x1C) = 0;

loc_00383F06: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00383F4F; /* je: equal / zero */

loc_00383F0F: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x10); /* addss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00384060(); /* call 0x00384060 */

loc_00383F24: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 4); /* mulss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x18) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_00383F8C; /* jb: below (unsigned <) */

loc_00383F43: ;
    MEMF(esi + 0x18) = xmm1; /* movss */
    MEMF(esi + 0x10) = xmm1; /* movss */
    goto loc_00383F8C;

loc_00383F4F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003840D0(); /* call 0x003840D0 */

loc_00383F5C: ;
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x18); /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x18) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00383F81; /* ja: above (unsigned >) */

loc_00383F74: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00383F84; /* jbe: below or equal (unsigned <=) */

loc_00383F81: ;
    xmm0 = xmm1; /* movaps */

loc_00383F84: ;
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x18) = xmm0; /* movss */

loc_00383F8C: ;
    xmm0 = MEMF(esi + 0x10); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00383FB8; /* ja: above (unsigned >) */

loc_00383F96: ;
    ecx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(ecx + 0xEC8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00383FB8; /* jne: not equal / not zero */

loc_00383FA3: ;
    if (CMP_NE(MEM8(esi + 0xC), 1)) goto loc_00383FD2; /* jne: not equal / not zero */

loc_00383FA9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x4C), _icall_esp); /* indirect call */
    }

loc_00383FAE: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00383FCF; /* je: equal / zero */

loc_00383FB2: ;
    MEM8(esi + 0xC) = 0;
    goto loc_00383FCF;

loc_00383FB8: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00383FD2; /* jne: not equal / not zero */

loc_00383FBF: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x48), _icall_esp); /* indirect call */
    }

loc_00383FC7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00383FCF; /* je: equal / zero */

loc_00383FCB: ;
    MEM8(esi + 0xC) = 1;

loc_00383FCF: ;
    xmm1 = 0.0f; /* xorps self = zero */

loc_00383FD2: ;
    xmm2 = MEMF(esi + 0x10); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm0 = xmm1; /* movaps */
    if ((xmm2 <= xmm1)) goto loc_0038402C; /* jbe: below or equal (unsigned <=) */

loc_00383FDF: ;
    xmm0 = xmm2; /* movaps */
    eax = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00384060(); /* call 0x00384060 */

loc_00383FEF: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00384017; /* jbe: below or equal (unsigned <=) */

loc_0038400F: ;
    MEMF(esp + 4) = xmm2; /* movss */
    goto loc_00384022;

loc_00384017: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00384028; /* jbe: below or equal (unsigned <=) */

loc_0038401C: ;
    MEMF(esp + 4) = xmm1; /* movss */

loc_00384022: ;
    xmm0 = MEMF(esp + 4); /* movss */

loc_00384028: ;
    xmm0 = xmm0 / xmm1; /* divss */

loc_0038402C: ;
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm1 = xmm1 * MEMF(0x6490A0); /* mulss */
    xmm0 = xmm0 * MEMF(0x64909C); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esi + 0x14) = xmm1; /* movss */
    MEM8(esi + 0x1C) = 0;

loc_0038404E: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00384060
 * Original: 0x00384060 - 0x003840CB (107 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384060(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00384060: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(ecx + 8); /* movss */
    MEMF(esp) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003840C9; /* je: equal / zero */

loc_00384075: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1F0);
    if (TEST_Z(esi, esi)) goto loc_003840C8; /* je: equal / zero */

loc_00384080: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00384085: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_003840C2; /* jne: not equal / not zero */

loc_0038408E: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003840C2; /* je: equal / zero */

loc_00384098: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0038409D: ;
    edx = 0x63B1EC;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_003840A7: ;
    if (TEST_Z(eax, eax)) goto loc_003840C2; /* je: equal / zero */

loc_003840AB: ;
    edx = MEM32(0x84A6A4);
    xmm0 = MEMF(edx + 0xC0); /* movss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003840C2: ;
    xmm0 = MEMF(esp + 4); /* movss */

loc_003840C8: ;
    POP32(esp, esi);

loc_003840C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003840D0
 * Original: 0x003840D0 - 0x0038413B (107 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003840D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003840D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(esp) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00384139; /* je: equal / zero */

loc_003840E5: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1F0);
    if (TEST_Z(esi, esi)) goto loc_00384138; /* je: equal / zero */

loc_003840F0: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003840F5: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_00384132; /* jne: not equal / not zero */

loc_003840FE: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00384132; /* je: equal / zero */

loc_00384108: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0038410D: ;
    edx = 0x63B1EC;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_00384117: ;
    if (TEST_Z(eax, eax)) goto loc_00384132; /* je: equal / zero */

loc_0038411B: ;
    edx = MEM32(0x84A6A4);
    xmm0 = MEMF(edx + 0xC0); /* movss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00384132: ;
    xmm0 = MEMF(esp + 4); /* movss */

loc_00384138: ;
    POP32(esp, esi);

loc_00384139: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00384140
 * Original: 0x00384140 - 0x00384167 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384140(void)
{
    int _flags = 0; /* fallback flag var */

loc_00384140: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x63E388;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_00384161; /* je: equal / zero */

loc_00384150: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0038415E: ;
    esp = esp + 4;

loc_00384161: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00384170
 * Original: 0x00384170 - 0x003841B6 (70 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384170(void)
{

loc_00384170: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x68);
    esi = esi + esi * 2;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = eax + esi * 4 + 8;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(eax + 0x68);
    esi = MEM32(ecx);
    edx = edx + edx * 2;
    edx = eax + edx * 4 + 0x38;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0x68);
    ecx++;
    POP32(esp, edi);
    MEM32(eax + 0x68) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003841C0
 * Original: 0x003841C0 - 0x00384435 (629 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003841C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003841C0: ;
    esp = esp - 0x54;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    eax = MEM32(esi + 0xAC);
    ebp = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0038440E; /* jle: less or equal (signed <=) */

loc_003841D9: ;
    eax = esp + 0x2C;
    ecx = esp + 0x38;
    edx = eax;
    MEM32(esp + 0xC) = eax;
    eax = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    edx = esi + 0xF4;
    ecx = esp + 0x44;
    PUSH32(esp, ebx);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0xC) = edx;
    esi = esi + 8;
    PUSH32(esp, edi);
    /* nop */

loc_00384210: ;
    ebx = esi + 0x30;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = ebx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esi + 0x64;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edi = esi + 0xA8;
    MEM32(esp + 0x1C) = edi;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x18) = ebx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x4C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003842DF: ;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x58) = xmm3; /* movss */
    MEMF(esp + 0x5C) = xmm4; /* movss */
    MEMF(esp + 0x60) = xmm3; /* movss */
    MEM32(esp + 0x1C) = edi;
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
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0038434E; /* jnp: not parity */

loc_00384338: ;
    eax = edi;
    ebx = esp + 0x58;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00384343: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */

loc_0038434E: ;
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x60); /* mulss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x5C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x58); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x648D34); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0038438C; /* jbe: below or equal (unsigned <=) */

loc_00384387: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00384394;

loc_0038438C: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_00384394; /* jbe: below or equal (unsigned <=) */

loc_00384391: ;
    xmm0 = xmm4; /* movaps */

loc_00384394: ;
    PUSH32(esp, 0); sub_003E3920(); /* call 0x003E3920 */

loc_00384399: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_003843A8; /* jbe: below or equal (unsigned <=) */

loc_0038439E: ;
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm1; /* movaps */

loc_003843A8: ;
    xmm1 = MEMF(0x648DE0); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003843B9; /* jbe: below or equal (unsigned <=) */

loc_003843B5: ;
    xmm0 = xmm0 - xmm1; /* subss */

loc_003843B9: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_003843C3; /* jbe: below or equal (unsigned <=) */

loc_003843BE: ;
    xmm0 = xmm3; /* movaps */
    goto loc_003843CB;

loc_003843C3: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003843CB; /* jbe: below or equal (unsigned <=) */

loc_003843C8: ;
    xmm0 = xmm1; /* movaps */

loc_003843CB: ;
    SET_LO8(eax, MEM8(esp + 0x6C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648F84); /* mulss */
    ecx = MEM32(esp + 0x10);
    xmm4 = xmm4 - xmm0; /* subss */
    MEMF(ecx) = xmm4; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003843EF; /* je: equal / zero */

loc_003843E7: ;
    MEMF(esi + 0xAC) = xmm3; /* movss */

loc_003843EF: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 4;
    edx = MEM32(esp + 0x68);
    eax = MEM32(edx + 0xAC);
    ebp++;
    esi = esi + 0xC;
    if (CMP_L(ebp, eax)) goto loc_00384210; /* jl: less (signed <) */

loc_0038440A: ;
    POP32(esp, edi);
    esi = edx;
    POP32(esp, ebx);

loc_0038440E: ;
    xmm0 = MEMF(esi + 0x108); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA210); /* subss */
    MEM32(esi + 4) = 3;
    MEMF(esi + 0x108) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x54;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00384440
 * Original: 0x00384440 - 0x003847BA (890 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384440(void)
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

loc_00384440: ;
    esp = esp - 0x2C;
    eax = MEM32(esi + 0xE0);
    fp_push(MEMF(eax + 0x79C)); /* fld float */
    MEM8(esp + 3) = 0;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00384476; /* jbe: below or equal (unsigned <=) */

loc_00384462: ;
    fp_push(MEMF(esi + 0x104)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0038448E; /* ja: above (unsigned >) */

loc_00384476: ;
    xmm0 = MEMF(0x7FA210); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x104); /* addss */
    MEMF(esi + 0x104) = xmm0; /* movss */

loc_0038448E: ;
    eax = MEM32(esi + 0xAC);
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0xC) = xmm4; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_003846F2; /* jle: less or equal (signed <=) */

loc_003844A8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x6C;
    ebp = esi + 0xF4;

loc_003844B3: ;
    ecx = edi + -100;
    edx = ecx + 0xA8;
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
    MEMF(esp + 0x1C) = xmm1; /* movss */
    eax = MEM32(esi + 0xEC);
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 * MEMF(eax + 0xC); /* mulss */
    xmm1 = MEMF(eax + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0038451D; /* jbe: below or equal (unsigned <=) */

loc_00384518: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00384528;

loc_0038451D: ;
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 8))) goto loc_00384528; /* jbe: below or equal (unsigned <=) */

loc_00384523: ;
    xmm0 = MEMF(eax + 8); /* movss */

loc_00384528: ;
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    eax = MEM32(esi + 0xE0);
    eax = eax + 0x790;
    xmm3 = xmm0; /* movaps */
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
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_0038457C; /* jbe: below or equal (unsigned <=) */

loc_00384577: ;
    xmm0 = xmm4; /* movaps */
    goto loc_0038458C;

loc_0038457C: ;
    xmm1 = MEMF(0x648EA4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0038458C; /* jbe: below or equal (unsigned <=) */

loc_00384589: ;
    xmm0 = xmm1; /* movaps */

loc_0038458C: ;
    eax = MEM32(esi + 0xEC);
    xmm1 = MEMF(eax + 0x14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 * MEMF(0x649508); /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    if ((xmm1 <= xmm0)) goto loc_003845C9; /* jbe: below or equal (unsigned <=) */

loc_003845B1: ;
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm2 = xmm1; /* movaps */

loc_003845C9: ;
    edx = MEM32(esi + 0xE0);
    eax = MEM32(edx + 0xC84);
    if (TEST_Z(eax, eax)) goto loc_003845F8; /* je: equal / zero */

loc_003845D9: ;
    edx = MEM32(eax + 4);
    if (TEST_Z(edx, edx)) goto loc_003845F8; /* je: equal / zero */

loc_003845E0: ;
    xmm0 = MEMF(eax + 0x10); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_003845F8; /* jbe: below or equal (unsigned <=) */

loc_003845EA: ;
    xmm2 = xmm2 * MEMF(0x648CF4); /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */

loc_003845F8: ;
    fp_push(MEMF(esi + 0x104)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003846DB; /* ja: above (unsigned >) */

loc_00384610: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003846DB; /* ja: above (unsigned >) */

loc_00384626: ;
    /* comiss xmm4, MEMF(esi + 0x108) - sets EFLAGS */
    if ((xmm4 < MEMF(esi + 0x108))) goto loc_00384665; /* jb: below (unsigned <) */

loc_0038462F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(ebp); /* subss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0xF0); /* addss */
    MEMF(esi + 0xF0) = xmm0; /* movss */
    MEM8(esp + 0xF) = 1;

loc_00384665: ;
    eax = esp + 0x2C;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esi + 0xEC);
    xmm0 = MEMF(edx + 0x10); /* movss */
    eax = MEM32(ebp + -88);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003847C0(); /* call 0x003847C0 */

loc_003846BE: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003846DB; /* ja: above (unsigned >) */

loc_003846D5: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_003846DB: ;
    eax = MEM32(esi + 0xAC);
    ebx++;
    ebp = ebp + 4;
    edi = edi + 0xC;
    if (CMP_L(ebx, eax)) goto loc_003844B3; /* jl: less (signed <) */

loc_003846F0: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_003846F2: ;
    ecx = MEM32(esi + 0xE0);
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_00384702: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, 0); sub_0038F8B0(); /* call 0x0038F8B0 */

loc_0038470D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0038477E; /* je: equal / zero */

loc_00384712: ;
    xmm1 = MEMF(esi + 0xF0); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_00384791; /* jb: below (unsigned <) */

loc_00384727: ;
    goto loc_00384730;

    /* nop */

loc_00384730: ;
    eax = MEM32(esi + 0xE0);
    eax = MEM32(eax + 0x1F0);
    if (TEST_Z(eax, eax)) goto loc_00384763; /* je: equal / zero */

loc_00384740: ;
    ecx = MEM32(esi + 0xE4);
    eax = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, 0x61);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F06F0(); /* call 0x002F06F0 */

loc_00384758: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x14;

loc_00384763: ;
    xmm1 = MEMF(esi + 0xF0); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0xF0) = xmm1; /* movss */
    if ((xmm1 >= xmm0)) goto loc_00384730; /* jae: above or equal (unsigned >=) */

loc_0038477C: ;
    goto loc_00384791;

loc_0038477E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xF0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */

loc_00384791: ;
    SET_LO8(eax, MEM8(esp + 3));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003847A1; /* je: equal / zero */

loc_00384799: ;
    MEMF(esi + 0x108) = xmm0; /* movss */

loc_003847A1: ;
    eax = 0; /* xor self */
    MEM8(esi + 0xE8) = 0;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0x68) = eax;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003847C0
 * Original: 0x003847C0 - 0x00384D84 (1476 bytes, 319 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003847C0(void)
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

loc_003847C0: ;
    xmm1 = MEMF(0x649508); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp - 0xB4;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC0);
    if ((xmm1 >= xmm0)) goto loc_00384D7C; /* jae: above or equal (unsigned >=) */

loc_003847E5: ;
    eax = eax & 0x1F;
    ecx = eax;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 4)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm4 = xmm0; /* movaps */
    MEMF(esp + 0xBC) = xmm4; /* movss */
    if ((xmm0 <= xmm3)) goto loc_00384827; /* jbe: below or equal (unsigned <=) */

loc_0038481B: ;
    MEMF(esp + 0xBC) = xmm3; /* movss */
    xmm4 = xmm3; /* movaps */

loc_00384827: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00384842; /* jnp: not parity */

loc_0038483B: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 / xmm1; /* divss */

loc_00384842: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x18;
    MEM32(esp + 0x10) = edx;
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
    MEMF(esp + 0xC) = xmm1; /* movss */
    if (CMP_NE(ecx, 7)) goto loc_00384967; /* jne: not equal / not zero */

loc_003848B8: ;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_LE(eax & eax, 0)) goto loc_00384D7A; /* jle: less or equal (signed <=) */

loc_003848CF: ;
    xmm4 = xmm4 * MEMF(0x649234); /* mulss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0xC) = eax;
    goto loc_003848F0;

loc_003848E7: ;
    xmm3 = MEMF(0x648D14); /* movss */
    /* nop */

loc_003848F0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003848F5: ;
    esi = eax;
    esi = esi & 0x8000000Fu;
    if (((int32_t)esi >= 0)) goto loc_00384904; /* jns: not sign (positive) */

loc_003848FF: ;
    esi--;
    esi = esi | 0xFFFFFFF0u;
    esi++;

loc_00384904: ;
    esi = esi + 0xA;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0038490C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = SX16(LO16(esi));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    xmm0 = xmm3; /* movaps */
    SET_LO8(edx, LO8(edx) + 0x64);
    eax = ZX8(LO8(edx));
    MEM8(esp + 0x18) = LO8(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F81EB85);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    eax = ebp;
    PUSH32(esp, 0); sub_00143FF0(); /* call 0x00143FF0 */

loc_00384949: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_00384957; /* je: equal / zero */

loc_00384950: ;
    MEM32(eax + 0x58) = 0x253;

loc_00384957: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    if ((MEM32(esp + 0xC) != 0)) goto loc_003848E7; /* jne: not equal / not zero */

loc_0038495D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0xB4;
    esp += 4; return; /* ret */

loc_00384967: ;
    xmm0 = MEMF(edi); /* movss */
    fp_push(MEMF(esp + 0xC4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C8); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x649234); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003849B5: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    MEM32(esp + 0x7C) = eax;
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    eax = ebp;
    ebx = esp + 0x24;
    MEM32(esp + 0x88) = 0x105;
    MEM8(esp + 0x9C) = 1;
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00384A2D: ;
    xmm0 = MEMF(0x648E64); /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x6491EC); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x40;
    esi = esp + 0x6C;
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_00384AB9: ;
    xmm7 = MEMF(esp + 0x10); /* movss */
    xmm7 = xmm7 * MEMF(0x6497D0); /* mulss */
    eax = ebx;
    ecx = esp + 0x34;
    esp = esp + 4;
    MEMF(esp + 0x60) = xmm7; /* movss */
    MEMF(esp + 0x64) = xmm7; /* movss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    xmm0 = MEMF(esp + 0x64); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0xC4); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_LE(eax & eax, 0)) goto loc_00384D7A; /* jle: less or equal (signed <=) */

loc_00384B26: ;
    xmm0 = MEMF(0x648E40); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x80) = 0xC8;
    MEM8(esp + 0x84) = 9;
    MEM8(esp + 0x85) = 0xFF;
    MEM16(esp + 0x8A) = 0x14;
    MEM16(esp + 0x8C) = 0xC;
    MEM8(esp + 0x88) = 0xFF;
    MEM8(esp + 0x87) = 0xFF;
    MEM8(esp + 0x86) = 0xFF;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEM32(esp + 0xC) = eax;
    ebp = 0x35;
    goto loc_00384B98;

loc_00384B92: ;
    xmm7 = MEMF(esp + 0x60); /* movss */

loc_00384B98: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00384B9D: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x649228); /* mulss */
    xmm5 = xmm5 - MEMF(0x648D3C); /* subss */
    xmm5 = xmm5 + MEMF(esp + 0x2C); /* addss */
    xmm5 = xmm5 * xmm7; /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00384BBF: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(0x649228); /* mulss */
    xmm6 = xmm6 - MEMF(0x648D3C); /* subss */
    xmm6 = xmm6 + MEMF(esp + 0x28); /* addss */
    xmm6 = xmm6 * xmm7; /* mulss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00384BE1: ;
    xmm0 = xmm0 * MEMF(0x649228); /* mulss */
    xmm0 = xmm0 - MEMF(0x648D3C); /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00384C12: ;
    ebx = eax;
    ebx = ebx & 0x80000003u;
    if (((int32_t)ebx >= 0)) goto loc_00384C21; /* jns: not sign (positive) */

loc_00384C1C: ;
    ebx--;
    ebx = ebx | 0xFFFFFFFCu;
    ebx++;

loc_00384C21: ;
    ebx = ebx + 2;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00384C29: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 + MEMF(0x648D10); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00384C41: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x14) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00384C54: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 0x1E;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00384C66: ;
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    PUSH32(esp, 0xFF);
    esi = esi + 0x10;
    MEM16(esp + 0x4C) = LO16(esi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    edx = edi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    PUSH32(esp, esi);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x54);
    MEM32(esp + 0x94) = ecx;
    PUSH32(esp, 1);
    ecx = esp + 0x90;
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(esp + 0x94) = eax;
    SET_LO8(eax, MEM8(esp + 0x3C));
    PUSH32(esp, 0x14);
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    ecx = esp + 0x6C;
    MEM8(esp + 0x81) = LO8(ebx);
    MEM16(esp + 0x7A) = LO16(ebp);
    MEM32(esp + 0x7C) = 1;
    MEM8(esp + 0x80) = 0xFF;
    MEM32(esp + 0x84) = esi;
    MEMF(esp + 0x98) = xmm5; /* movss */
    MEM32(esp + 0xA4) = edx;
    MEM8(esp + 0xB9) = LO8(eax);
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEM8(esp + 0xE4) = 0xF;
    PUSH32(esp, 0); sub_0017AA40(); /* call 0x0017AA40 */

loc_00384D36: ;
    esp = esp + 0x30;
    if (CMP_EQ(eax, esi)) goto loc_00384D70; /* je: equal / zero */

loc_00384D3D: ;
    edx = MEM32(eax + 0x144);
    eax = MEM32(esp + 0xAC);
    ecx = MEM32(esp + 0xB0);
    edx = edx + 0x34;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0xB4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0xBC);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = esi;
    MEM32(edx + 0x10) = ecx;

loc_00384D70: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    if ((MEM32(esp + 0xC) != 0)) goto loc_00384B92; /* jne: not equal / not zero */

loc_00384D7A: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00384D7C: ;
    POP32(esp, ebp);
    esp = esp + 0xB4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00384D90
 * Original: 0x00384D90 - 0x00384DB7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384D90(void)
{

loc_00384D90: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax + 8;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(0x7F9F60);
    MEM8(eax + 4) = 1;
    MEM32(eax + 0x14) = edx;
    MEM8(eax + 5) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00384DC0
 * Original: 0x00384DC0 - 0x00384DE7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384DC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00384DC0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x63E394;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_00384DE1; /* je: equal / zero */

loc_00384DD0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00384DDE: ;
    esp = esp + 4;

loc_00384DE1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00384DF0
 * Original: 0x00384DF0 - 0x00384E1C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00384DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x63E398;
    PUSH32(esp, 0); sub_0038C160(); /* call 0x0038C160 */

loc_00384DFE: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00384E16; /* je: equal / zero */

loc_00384E05: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00384E13: ;
    esp = esp + 4;

loc_00384E16: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00384E20
 * Original: 0x00384E20 - 0x00384E46 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384E20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00384E20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); sub_00396760(); /* call 0x00396760 */

loc_00384E2D: ;
    SET_LO8(eax, MEM8(esi + 0xEE0));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00384E46(); return; } /* je: equal / zero */

loc_00384E37: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xEE4) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00384E70
 * Original: 0x00384E70 - 0x00384EE5 (117 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384E70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00384E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xE44);
    if (TEST_NZ(eax, eax)) goto loc_00384EA0; /* jne: not equal / not zero */

loc_00384E7D: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x23C);
    if (TEST_Z(eax, eax)) goto loc_00384EA0; /* je: equal / zero */

loc_00384E8B: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00384E90: ;
    if (TEST_Z(eax, eax)) goto loc_00384EA0; /* je: equal / zero */

loc_00384E94: ;
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_00384EA0; /* jne: not equal / not zero */

loc_00384E9A: ;
    MEM32(esi + 0xE44) = eax;

loc_00384EA0: ;
    eax = MEM32(esi + 0xC88);
    if (TEST_Z(eax, eax)) goto loc_00384EE1; /* je: equal / zero */

loc_00384EAA: ;
    if (CMP_NE(MEM32(eax + 4), 2)) goto loc_00384EE1; /* jne: not equal / not zero */

loc_00384EB0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, MEMF(esi + 0xEE4) - sets EFLAGS */
    MEM8(esp + 8) = 0;
    if ((xmm0 <= MEMF(esi + 0xEE4))) goto loc_00384ECB; /* jbe: below or equal (unsigned <=) */

loc_00384EC6: ;
    MEM8(esp + 8) = 1;

loc_00384ECB: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003841C0(); /* call 0x003841C0 */

loc_00384ED6: ;
    esi = MEM32(esi + 0xC88);
    PUSH32(esp, 0); sub_00384440(); /* call 0x00384440 */

loc_00384EE1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00384EF0
 * Original: 0x00384EF0 - 0x00384F9E (174 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00384EF0: ;
    esp = esp - 0x3C;
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x75B8EC);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = xmm5; /* movaps */
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00384F2E; /* je: equal / zero */

loc_00384F0C: ;
    eax = MEM32(0x75B8F0);
    if (TEST_Z(eax, eax)) goto loc_00384F2E; /* je: equal / zero */

loc_00384F15: ;
    edi = MEM32(esi + 4);
    edi = edi + 0x78;
    eax = 0x75B8E8;
    PUSH32(esp, 0); sub_003CA250(); /* call 0x003CA250 */

loc_00384F25: ;
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */

loc_00384F2E: ;
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    xmm3 = MEMF(0x648D44); /* movss */
    if ((xmm1 <= xmm4)) goto loc_00384F74; /* jbe: below or equal (unsigned <=) */

loc_00384F49: ;
    xmm2 = MEMF(esi + 0xEE8); /* movss */

loc_00384F51: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 - xmm2; /* subss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm4; /* subss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    xmm6 = xmm6 + xmm2; /* addss */
    xmm2 = xmm6; /* movaps */
    if ((xmm1 > xmm4)) goto loc_00384F51; /* ja: above (unsigned >) */

loc_00384F6C: ;
    MEMF(esi + 0xEE8) = xmm2; /* movss */

loc_00384F74: ;
    xmm0 = xmm0 - MEMF(esi + 0xEE8); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0xEE8); /* addss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    MEMF(esi + 0xEE8) = xmm0; /* movss */
    if ((xmm5 <= xmm0)) { sub_00384F9E(); return; } /* jbe: below or equal (unsigned <=) */

loc_00384F99: ;
    xmm0 = xmm5; /* movaps */
    g_seh_ebp = ebp; sub_00384FB6(); return; /* tail jmp 0x00384FB6 */

}

/**
 * sub_003853B0
 * Original: 0x003853B0 - 0x003853C7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003853B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003853B0: ;
    xmm0 = MEMF(eax + 0xEE8); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) { sub_003853C7(); return; } /* jbe: below or equal (unsigned <=) */

loc_003853C1: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003853D0
 * Original: 0x003853D0 - 0x00385473 (163 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003853D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003853D0: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00398320(); /* call 0x00398320 */

loc_003853DB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = 0; /* xor self */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    MEMF(esi + 0x139C) = xmm0; /* movss */
    MEMF(esi + 0x1398) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edx);
    eax = esi + 0x1330;
    MEM32(esi) = 0x63E420;
    MEM8(esi + 0x1384) = LO8(edx);
    MEM8(esi + 0x1385) = LO8(edx);
    MEM16(esi + 0x1386) = LO16(edx);
    MEM8(esi + 0x1394) = LO8(edx);
    MEM8(esi + 0x13A4) = 1;
    MEM8(esi + 0x1374) = LO8(edx);
    MEM32(esi + 0x1378) = edx;
    MEM32(esi + 0x137C) = edx;
    MEMF(esi + 0x1370) = xmm0; /* movss */
    MEM8(esi + 0x1EC) = 2;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0038544D: ;
    MEM8(edi + 0x444) = 0x39;
    edi = MEM32(edi + 0x68);
    if (CMP_EQ(edi, 0xEA)) { sub_00385473(); return; } /* je: equal / zero */

loc_0038545F: ;
    if (CMP_EQ(edi, 0x196)) { sub_00385473(); return; } /* je: equal / zero */

loc_00385467: ;
    MEM32(esi + 0xDEC) = 0x118;
    g_seh_ebp = ebp; sub_00385484(); return; /* tail jmp 0x00385484 */

}

/**
 * sub_003854B0
 * Original: 0x003854B0 - 0x003854DA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003854B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003854B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_003854E0(); /* call 0x003854E0 */

loc_003854B8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_003854D4; /* je: equal / zero */

loc_003854BF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_003854D4; /* je: equal / zero */

loc_003854C7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003854D1: ;
    esp = esp + 4;

loc_003854D4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003854E0
 * Original: 0x003854E0 - 0x0038555E (126 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003854E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003854E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xCE4);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edi + 0xCE4;
    MEM32(edi) = 0x63E420;
    if (TEST_Z(eax, eax)) goto loc_00385500; /* je: equal / zero */

loc_003854FB: ;
    PUSH32(esp, 0); sub_003326A0(); /* call 0x003326A0 */

loc_00385500: ;
    eax = MEM32(edi + 0x1380);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = edi + 0x1380;
    if (TEST_Z(eax, eax)) goto loc_0038551A; /* je: equal / zero */

loc_00385510: ;
    PUSH32(esp, 0); sub_0032D490(); /* call 0x0032D490 */

loc_00385515: ;
    PUSH32(esp, 0); sub_0032D540(); /* call 0x0032D540 */

loc_0038551A: ;
    eax = MEM32(edi + 0xCE8);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = edi + 0xCE8;
    if (TEST_Z(eax, eax)) goto loc_00385534; /* je: equal / zero */

loc_0038552A: ;
    PUSH32(esp, 0); sub_0032D490(); /* call 0x0032D490 */

loc_0038552F: ;
    PUSH32(esp, 0); sub_0032D540(); /* call 0x0032D540 */

loc_00385534: ;
    eax = MEM32(edi + 0xCE0);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = edi + 0xCE0;
    if (TEST_Z(eax, eax)) goto loc_0038554E; /* je: equal / zero */

loc_00385544: ;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_00385549: ;
    PUSH32(esp, 0); sub_002F9630(); /* call 0x002F9630 */

loc_0038554E: ;
    MEM32(edi) = 0x63E910;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0038C160(); return; /* tail jmp 0x0038C160 */

}

/**
 * sub_00385560
 * Original: 0x00385560 - 0x003856BB (347 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385560(void)
{
    int _flags = 0; /* fallback flag var */

loc_00385560: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = edi;
    PUSH32(esp, 0); sub_003937D0(); /* call 0x003937D0 */

loc_00385570: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001B4290(); /* call 0x001B4290 */

loc_00385576: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003913D0(); /* call 0x003913D0 */

loc_00385581: ;
    eax = MEM32(edi + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    (void)0; /* cmp eax, 0xE0 - flags set for next jcc */
    eax = MEM32(0x74E5F8);
    PUSH32(esp, edi);
    if (CMP_NE(eax, 0xE0)) goto loc_0038559F; /* jne: not equal / not zero */

loc_0038559A: ;
    eax = MEM32(0x74E5FC);

loc_0038559F: ;
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_003855A4: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001B61D0(); /* call 0x001B61D0 */

loc_003855B2: ;
    ebx = edi;
    PUSH32(esp, 0); sub_0011E0F0(); /* call 0x0011E0F0 */

loc_003855B9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F4A48);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003855C5: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_003855F8; /* je: equal / zero */

loc_003855D2: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_003855F8; /* je: equal / zero */

loc_003855DC: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003855F8; /* je: equal / zero */

loc_003855E3: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F4A48;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003855F5: ;
    esp = esp + 4;

loc_003855F8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60D4C4);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_00385604: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00385637; /* je: equal / zero */

loc_00385611: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_00385637; /* je: equal / zero */

loc_0038561B: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00385637; /* je: equal / zero */

loc_00385622: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x60D4C4;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_00385634: ;
    esp = esp + 4;

loc_00385637: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63E5EC);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_00385643: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00385676; /* je: equal / zero */

loc_00385650: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_00385676; /* je: equal / zero */

loc_0038565A: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00385676; /* je: equal / zero */

loc_00385661: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x63E5EC;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_00385673: ;
    esp = esp + 4;

loc_00385676: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60BDB8);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_00385682: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003856B5; /* je: equal / zero */

loc_0038568F: ;
    edi = MEM32(edi + 0x4B0);
    if (TEST_Z(edi, edi)) goto loc_003856B5; /* je: equal / zero */

loc_00385699: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003856B5; /* je: equal / zero */

loc_003856A0: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x60BDB8;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003856B2: ;
    esp = esp + 4;

loc_003856B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003856C0
 * Original: 0x003856C0 - 0x00385717 (87 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003856C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003856C0: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); sub_00398780(); /* call 0x00398780 */

loc_003856D2: ;
    ebx = MEM32(esi + 0x2A0);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    eax = MEM32(esi + 0x7A8);
    ecx = MEM32(esi + 0xC70);
    xmm0 = MEMF(esi + 0x7B0); /* movss */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esi + 0x788) = 0;
    edi = 1;
    if (TEST_NZ(ebx, ebx)) { sub_00385717(); return; } /* jne: not equal / not zero */

loc_0038570D: ;
    ebx = MEM32(esi + 0x1F0);
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0038571E(); return; /* tail jmp 0x0038571E */

}

/**
 * sub_00385C70
 * Original: 0x00385C70 - 0x00385D98 (296 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4, xmm5, xmm7;

loc_00385C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2E4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, esi);
    MEM32(esp + 0x60) = edi;
    PUSH32(esp, 0); sub_00399880(); /* call 0x00399880 */

loc_00385C8E: ;
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm7 = MEMF(0x7F9F5C); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm7 = xmm7 * MEMF(0x7FA21C); /* mulss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x79);
    ecx = esp + 0x2B4;
    MEMF(esp + 0x50) = xmm7; /* movss */
    MEMF(esp + 0x44) = xmm5; /* movss */
    MEMF(esp + 0x48) = xmm5; /* movss */
    MEMF(esp + 0x4C) = xmm4; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00385CE5: ;
    esp = esp + 4;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00385CF8: ;
    eax = edi + 0x1280;
    MEM32(esp + 0x24) = eax;
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
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) { sub_00385D98(); return; } /* jbe: below or equal (unsigned <=) */

loc_00385D3A: ;
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00385D43: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x48); /* mulss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x44); /* mulss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm7 = MEMF(esp + 0x4C); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x40); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 * MEMF(0x648F24); /* mulss */
    MEMF(edi + 0x124C) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00385DA0(); return; /* tail jmp 0x00385DA0 */

}

/**
 * sub_00386CE0
 * Original: 0x00386CE0 - 0x00386D5C (124 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386CE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00386CE0: ;
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, edi);
    edi = ecx;
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_00386D58; /* jbe: below or equal (unsigned <=) */

loc_00386CF2: ;
    xmm1 = MEMF(0x648D10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, esi);
    if ((xmm1 <= xmm0)) goto loc_00386D07; /* jbe: below or equal (unsigned <=) */

loc_00386D00: ;
    esi = 0x914;
    goto loc_00386D39;

loc_00386D07: ;
    xmm1 = MEMF(0x648F58); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00386D1B; /* jbe: below or equal (unsigned <=) */

loc_00386D14: ;
    esi = 0x913;
    goto loc_00386D39;

loc_00386D1B: ;
    eax = MEM32(edi + 0x1F0);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = 0x911;
    if (TEST_Z(eax, eax)) goto loc_00386D39; /* je: equal / zero */

loc_00386D2A: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00386D36: ;
    esp = esp + 8;

loc_00386D39: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = 0x40100002;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00386D57: ;
    POP32(esp, esi);

loc_00386D58: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00386D60
 * Original: 0x00386D60 - 0x00386F68 (520 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00386D60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    ebx = ecx;
    ebp = MEM32(eax + ebx + 0x1F0);
    if (TEST_Z(ebp, ebp)) goto loc_00386F62; /* je: equal / zero */

loc_00386D80: ;
    (void)0; /* cmp MEM32(ebx + 0xCB0), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebx + 0xCB0), 0xFFFFFFFFu)) goto loc_00386E16; /* jne: not equal / not zero */

loc_00386D8E: ;
    eax = MEM32(ebp + 0x564);
    edi = MEM32(0x847024);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, MEM8(ebx + 0x1394));
    if (TEST_Z(eax, eax)) goto loc_00386DC0; /* je: equal / zero */

loc_00386DA4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00386DB4; /* je: equal / zero */

loc_00386DA8: ;
    MEM32(ebx + 0xCB4) = 0x920;
    goto loc_00386DF3;

loc_00386DB4: ;
    MEM32(ebx + 0xCB4) = 0x908;
    goto loc_00386DF3;

loc_00386DC0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00386DD7; /* je: equal / zero */

loc_00386DC4: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, 0xDB5);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x920);
    goto loc_00386DE8;

loc_00386DD7: ;
    edx = MEM32(edi + 0x40);
    PUSH32(esp, 0xDB7);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x908);

loc_00386DE8: ;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_00386DED: ;
    MEM32(ebx + 0xCB4) = eax;

loc_00386DF3: ;
    eax = MEM32(edi + 0x40);
    edi = MEM32(ebx + 0xCB4);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x16);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0); sub_00025BD0(); /* call 0x00025BD0 */

loc_00386E10: ;
    MEM32(ebx + 0xCB0) = eax;

loc_00386E16: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 0xBF800000u);
    eax = ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00386EDA; /* je: equal / zero */

loc_00386E29: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00386E30: ;
    esp = esp + 8;

loc_00386E33: ;
    if (CMP_NE(esi, 1)) goto loc_00386E3F; /* jne: not equal / not zero */

loc_00386E38: ;
    esi = ebx;
    PUSH32(esp, 0); sub_0038C570(); /* call 0x0038C570 */

loc_00386E3F: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    eax = MEM32(edx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002E7D0(); /* call 0x0002E7D0 */

loc_00386E52: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00386F61; /* je: equal / zero */

loc_00386E60: ;
    SET_LO8(eax, MEM8(0x846FF5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00386E8A; /* je: equal / zero */

loc_00386E69: ;
    eax = MEM32(ebx + 4);
    edx = MEM32(eax + 0x580);
    esi = MEM32(0x847024);
    ecx = eax + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x63E570);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00386E87: ;
    esp = esp + 0xC;

loc_00386E8A: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(0x847024);
    edx = MEM32(eax + 0x580);
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00034EA0(); /* call 0x00034EA0 */

loc_00386EA3: ;
    ebx = MEM32(ebx + 4);
    edx = MEM32(0x847024);
    edi = MEM32(edx + 0x40);
    esi = ebx;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00386EB6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00386F61; /* je: equal / zero */

loc_00386EBE: ;
    eax = MEM32(ebx + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00386F39; /* je: equal / zero */

loc_00386EC8: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_00386F3F;

loc_00386EDA: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00386EE1: ;
    eax = esi;
    esp = esp + 8;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00386F15; /* je: equal / zero */

loc_00386EEB: ;
    eax--;
    if ((eax != 0)) goto loc_00386E33; /* jne: not equal / not zero */

loc_00386EF2: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xD68);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00386F10: ;
    goto loc_00386E38;

loc_00386F15: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xD6A);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00386F34: ;
    goto loc_00386E3F;

loc_00386F39: ;
    eax = MEM32(ebx + 0x580);

loc_00386F3F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB37;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00386F61: ;
    POP32(esp, edi);

loc_00386F62: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00386F70
 * Original: 0x00386F70 - 0x00387085 (277 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00386F70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0); sub_0038C570(); /* call 0x0038C570 */

loc_00386F7C: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00391690(); /* call 0x00391690 */

loc_00386F8D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00386FD5; /* je: equal / zero */

loc_00386F94: ;
    eax = MEM32(esp + 0x10);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00386FB6; /* je: equal / zero */

loc_00386F9D: ;
    eax--;
    if ((eax != 0)) goto loc_00386FD5; /* jne: not equal / not zero */

loc_00386FA0: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD69);
    PUSH32(esp, ecx);
    goto loc_00386FCB;

loc_00386FB6: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD6B);
    PUSH32(esp, eax);

loc_00386FCB: ;
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00386FD5: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0038707F; /* je: equal / zero */

loc_00386FE3: ;
    SET_LO8(eax, MEM8(0x846FF5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038700D; /* je: equal / zero */

loc_00386FEC: ;
    eax = MEM32(ebx + 4);
    edx = MEM32(eax + 0x580);
    esi = MEM32(0x847024);
    ecx = eax + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x63E508);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0038700A: ;
    esp = esp + 0xC;

loc_0038700D: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(0x847024);
    edx = MEM32(eax + 0x580);
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00034EA0(); /* call 0x00034EA0 */

loc_00387026: ;
    edx = MEM32(0x847024);
    esi = MEM32(ebx + 4);
    edi = MEM32(edx + 0x40);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00387037: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038707F; /* je: equal / zero */

loc_0038703B: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00387057; /* je: equal / zero */

loc_00387045: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0038705D;

loc_00387057: ;
    eax = MEM32(esi + 0x580);

loc_0038705D: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB37;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0038707F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00387090
 * Original: 0x00387090 - 0x003870BE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387090(void)
{

loc_00387090: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x570);
    PUSH32(esp, edx);
    eax = eax + 0x1330;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003870AD: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003870BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003870C0
 * Original: 0x003870C0 - 0x00387147 (135 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003870C0(void)
{
    uint32_t ebp;
    float xmm0, xmm6;

loc_003870C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    xmm6 = MEMF(0x648E18); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x570);
    xmm0 = MEMF(edi + 0x770); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x14;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003870FB: ;
    esi = MEM32(ebp + 0xC);
    esp = esp + 4;
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0038710B: ;
    xmm0 = MEMF(edi + 0x774); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = edx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00387126: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00387133: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00387141: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00387150
 * Original: 0x00387150 - 0x00387178 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387150(void)
{
    int _flags = 0; /* fallback flag var */

loc_00387150: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x570);
    if (TEST_Z(ecx, ecx)) goto loc_00387177; /* je: equal / zero */

loc_00387160: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x90), _icall_esp); /* indirect call */
    }

loc_00387177: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00387180
 * Original: 0x00387180 - 0x003871E7 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387180(void)
{
    uint32_t ebp;
    float xmm0;

loc_00387180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    xmm0 = MEMF(eax + 0x124C); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x123C); /* addss */
    MEMF(eax + 0x123C) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x78);
    ecx = esp + 4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003871C5: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 4;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003871D5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003871E3: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003871F0
 * Original: 0x003871F0 - 0x00387257 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003871F0(void)
{
    uint32_t ebp;
    float xmm0;

loc_003871F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    xmm0 = MEMF(eax + 0x1250); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x1240); /* addss */
    MEMF(eax + 0x1240) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x78);
    ecx = esp + 4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00387235: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 4;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00387245: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00387253: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00387260
 * Original: 0x00387260 - 0x003872C7 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387260(void)
{
    uint32_t ebp;
    float xmm0;

loc_00387260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    xmm0 = MEMF(eax + 0x1254); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x1244); /* addss */
    MEMF(eax + 0x1244) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x78);
    ecx = esp + 4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003872A5: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 4;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003872B5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003872C3: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003872D0
 * Original: 0x003872D0 - 0x00387337 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003872D0(void)
{
    uint32_t ebp;
    float xmm0;

loc_003872D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    xmm0 = MEMF(eax + 0x1258); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x1248); /* addss */
    MEMF(eax + 0x1248) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x78);
    ecx = esp + 4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00387315: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 4;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00387325: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00387333: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00387340
 * Original: 0x00387340 - 0x003873AF (111 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00387340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x570);
    (void)0; /* test MEM8(ebx + 0x11E8), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(ebx + 0x11E8), 1)) { sub_003873AF(); return; } /* je: equal / zero */

loc_00387363: ;
    fp_push(MEMF(ebx + 0x79C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00387386; /* jbe: below or equal (unsigned <=) */

loc_00387381: ;
    xmm5 = 0.0f; /* xorps self = zero */
    goto loc_0038739C;

loc_00387386: ;
    xmm5 = MEMF(esp + 0xC); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_0038739C; /* jbe: below or equal (unsigned <=) */

loc_00387399: ;
    xmm5 = xmm0; /* movaps */

loc_0038739C: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003873A1: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    g_seh_ebp = ebp; sub_003873B2(); return; /* tail jmp 0x003873B2 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00387490
 * Original: 0x00387490 - 0x003874FF (111 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00387490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x570);
    (void)0; /* test MEM8(ebx + 0x11E8), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(ebx + 0x11E8), 2)) { sub_003874FF(); return; } /* je: equal / zero */

loc_003874B3: ;
    fp_push(MEMF(ebx + 0x79C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003874D6; /* jbe: below or equal (unsigned <=) */

loc_003874D1: ;
    xmm5 = 0.0f; /* xorps self = zero */
    goto loc_003874EC;

loc_003874D6: ;
    xmm5 = MEMF(esp + 0xC); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_003874EC; /* jbe: below or equal (unsigned <=) */

loc_003874E9: ;
    xmm5 = xmm0; /* movaps */

loc_003874EC: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003874F1: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    g_seh_ebp = ebp; sub_00387502(); return; /* tail jmp 0x00387502 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003875E0
 * Original: 0x003875E0 - 0x00387653 (115 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003875E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003875E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test MEM8(eax + 0x11E8), 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(MEM8(eax + 0x11E8), 4)) { sub_00387653(); return; } /* je: equal / zero */

loc_00387607: ;
    fp_push(MEMF(eax + 0x79C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0038762A; /* jbe: below or equal (unsigned <=) */

loc_00387625: ;
    xmm5 = 0.0f; /* xorps self = zero */
    goto loc_00387640;

loc_0038762A: ;
    xmm5 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_00387640; /* jbe: below or equal (unsigned <=) */

loc_0038763D: ;
    xmm5 = xmm0; /* movaps */

loc_00387640: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00387645: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    g_seh_ebp = ebp; sub_00387656(); return; /* tail jmp 0x00387656 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003876F0
 * Original: 0x003876F0 - 0x00387763 (115 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003876F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003876F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test MEM8(eax + 0x11E8), 8 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(MEM8(eax + 0x11E8), 8)) { sub_00387763(); return; } /* je: equal / zero */

loc_00387717: ;
    fp_push(MEMF(eax + 0x79C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0038773A; /* jbe: below or equal (unsigned <=) */

loc_00387735: ;
    xmm5 = 0.0f; /* xorps self = zero */
    goto loc_00387750;

loc_0038773A: ;
    xmm5 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_00387750; /* jbe: below or equal (unsigned <=) */

loc_0038774D: ;
    xmm5 = xmm0; /* movaps */

loc_00387750: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00387755: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    g_seh_ebp = ebp; sub_00387766(); return; /* tail jmp 0x00387766 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00387800
 * Original: 0x00387800 - 0x00387841 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00387800: ;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x444);
    eax = MEM32(edx + 8);
    eax--;
    if (CMP_A(eax, 0x21)) { sub_00387841(); return; } /* ja: above (unsigned >) */

loc_00387815: ;
    eax = ZX8(MEM8(eax + 0x387860));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x387848)); return; /* indirect tail jmp */

    eax = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00387A70
 * Original: 0x00387A70 - 0x00387EC7 (1111 bytes, 302 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00387A70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp;
    ebx = ecx;
    PUSH32(esp, 0); sub_00387800(); /* call 0x00387800 */

loc_00387A81: ;
    esi = MEM32(esp + 0x1C);
    edi = eax;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x3A1) = 0;
    eax = MEM32(esp + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0xC));
    if (TEST_NZ(eax, eax)) goto loc_00387C8F; /* jne: not equal / not zero */

loc_00387AA3: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_00387AE2; /* jne: not equal / not zero */

loc_00387AA7: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    if (CMP_EQ(LO8(eax), 1)) goto loc_00387AE2; /* je: equal / zero */

loc_00387AAE: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_00387AE2; /* je: equal / zero */

loc_00387AB2: ;
    ebx = MEM32(esi + 0xAC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E800000);
    ebx++;
    ecx = ebx + edi;
    eax = MEM32(ecx * 4 + 0x74E5F8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_00387AD5: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM8(esi + 0xD) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00387AE2: ;
    eax = ZX8(MEM8(esi + 0xD));
    if (CMP_A(eax, 3)) goto loc_00387C68; /* ja: above (unsigned >) */

loc_00387AEF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x387EC8); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00387AF6u) goto loc_00387AF6;
    if (_jt == 0x00387B8Cu) goto loc_00387B8C;
    if (_jt == 0x00387EC0u) goto loc_00387EC0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00387AF6: ;
    eax = MEM32(ebp + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_00387EC0; /* je: equal / zero */

loc_00387B04: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00387B0E: ;
    if (TEST_Z(eax, eax)) goto loc_00387EC0; /* je: equal / zero */

loc_00387B16: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x649408) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649408))) goto loc_00387EC0; /* jbe: below or equal (unsigned <=) */

loc_00387B2B: ;
    eax = MEM32(edi * 4 + 0x74E604);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_00387B43: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x10);
    eax = ebp;
    MEM8(esi + 0xD) = 3;
    MEM8(esi + 0xC) = 2;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00387B59: ;
    eax = MEM32(ebx + 0x137C);
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_00387EC0; /* jne: not equal / not zero */

loc_00387B6A: ;
    esi = MEM32(ebx + 0x1378);
    if (TEST_Z(esi, esi)) goto loc_00387E13; /* je: equal / zero */

loc_00387B78: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00387B7D: ;
    MEM32(ebx + 0x1378) = 0;
    goto loc_00387E13;

loc_00387B8C: ;
    esi = MEM32(ebp + 0x3C4);
    if (TEST_Z(esi, esi)) goto loc_00387EC0; /* je: equal / zero */

loc_00387B9A: ;
    eax = esi + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00387BA4: ;
    if (TEST_Z(eax, eax)) goto loc_00387EC0; /* je: equal / zero */

loc_00387BAC: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x649408) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649408))) goto loc_00387EC0; /* jbe: below or equal (unsigned <=) */

loc_00387BC1: ;
    eax = esi;
    PUSH32(esp, 0); sub_00037280(); /* call 0x00037280 */

loc_00387BC8: ;
    eax = MEM32(ebp + 0x3C4);
    PUSH32(esp, 0); sub_000372A0(); /* call 0x000372A0 */

loc_00387BD3: ;
    edi = ebp;
    PUSH32(esp, 0); sub_0038DF90(); /* call 0x0038DF90 */

loc_00387BDA: ;
    eax = MEM32(ebp + 0x568);
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00387BFB: ;
    PUSH32(esp, eax);
    esi = 8;
    edi = 0; /* xor self */
    eax = ebp;
    PUSH32(esp, 0); sub_002B14A0(); /* call 0x002B14A0 */

loc_00387C0A: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00387C21: ;
    eax = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM8(eax + 0x63F) = 1;
    MEM8(ebp + 0x17B) = 1;
    MEMF(ebp + 0xD4) = xmm0; /* movss */
    esi = MEM32(ebx + 0x1378);
    esp = esp + 0x24;
    if (TEST_Z(esi, esi)) goto loc_00387EC0; /* je: equal / zero */

loc_00387C56: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00387C5B: ;
    MEM32(ebx + 0x1378) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00387C68: ;
    eax = MEM32(edi * 4 + 0x74E604);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_00387C81: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM8(esi + 0xD) = 3;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00387C8F: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_00387CC0; /* jne: not equal / not zero */

loc_00387C93: ;
    if (CMP_EQ(MEM8(esi + 0xD), 5)) goto loc_00387CC0; /* je: equal / zero */

loc_00387C99: ;
    eax = MEM32(edi * 4 + 0x74E60C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_00387CB2: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM8(esi + 0xD) = 5;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00387CC0: ;
    eax = ZX8(MEM8(esi + 0xD));
    eax = eax - 4;
    if ((eax == 0)) goto loc_00387E2F; /* je: equal / zero */

loc_00387CCD: ;
    eax--;
    if ((eax == 0)) goto loc_00387CFB; /* je: equal / zero */

loc_00387CD0: ;
    eax--;
    if ((eax == 0)) goto loc_00387EC0; /* je: equal / zero */

loc_00387CD7: ;
    eax = MEM32(edi * 4 + 0x74E610);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_00387CED: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM8(esi + 0xD) = 6;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00387CFB: ;
    esi = MEM32(ebp + 0x3C4);
    if (TEST_Z(esi, esi)) goto loc_00387EC0; /* je: equal / zero */

loc_00387D09: ;
    eax = esi + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00387D13: ;
    if (TEST_Z(eax, eax)) goto loc_00387EC0; /* je: equal / zero */

loc_00387D1B: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x649408) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649408))) goto loc_00387EC0; /* jbe: below or equal (unsigned <=) */

loc_00387D30: ;
    if (TEST_Z(esi, esi)) goto loc_00387D47; /* je: equal / zero */

loc_00387D34: ;
    eax = esi + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00387D3C: ;
    if (TEST_Z(eax, eax)) goto loc_00387D47; /* je: equal / zero */

loc_00387D40: ;
    MEM8(eax + 0x1F0) = MEM8(eax + 0x1F0) | 1;

loc_00387D47: ;
    eax = MEM32(ebp + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_00387D66; /* je: equal / zero */

loc_00387D51: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00387D5B: ;
    if (TEST_Z(eax, eax)) goto loc_00387D66; /* je: equal / zero */

loc_00387D5F: ;
    MEM8(eax + 0x1F0) = MEM8(eax + 0x1F0) | 2;

loc_00387D66: ;
    edi = ebp;
    PUSH32(esp, 0); sub_0038DF90(); /* call 0x0038DF90 */

loc_00387D6D: ;
    eax = MEM32(ebp + 0x568);
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00387D8E: ;
    PUSH32(esp, eax);
    esi = 8;
    edi = 0; /* xor self */
    eax = ebp;
    PUSH32(esp, 0); sub_002B14A0(); /* call 0x002B14A0 */

loc_00387D9D: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00387DB4: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM8(ecx + 0x63F) = 1;
    MEM8(ebp + 0x17B) = 1;
    MEMF(ebp + 0xD4) = xmm0; /* movss */
    esi = MEM32(ebx + 0x137C);
    esp = esp + 0x24;
    if (CMP_EQ(esi, edi)) goto loc_00387DF0; /* je: equal / zero */

loc_00387DE5: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00387DEA: ;
    MEM32(ebx + 0x137C) = edi;

loc_00387DF0: ;
    ebp = MEM32(ebx + 0x1F0);
    if (CMP_EQ(ebp, edi)) goto loc_00387EC0; /* je: equal / zero */

loc_00387DFE: ;
    esi = MEM32(ebx + 0x1378);
    if (CMP_EQ(esi, edi)) goto loc_00387E13; /* je: equal / zero */

loc_00387E08: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00387E0D: ;
    MEM32(ebx + 0x1378) = edi;

loc_00387E13: ;
    eax = MEM32(ebp + 0x564);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001D4750(); /* call 0x001D4750 */

loc_00387E1F: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x1378) = eax;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00387E2F: ;
    eax = MEM32(ebp + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_00387EC0; /* je: equal / zero */

loc_00387E3D: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00387E47: ;
    if (TEST_Z(eax, eax)) goto loc_00387EC0; /* je: equal / zero */

loc_00387E4B: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x649408) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649408))) goto loc_00387EC0; /* jbe: below or equal (unsigned <=) */

loc_00387E5C: ;
    eax = MEM32(edi * 4 + 0x74E610);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_00387E74: ;
    MEM8(esi + 0xD) = 6;
    MEM8(esi + 0xC) = 2;
    esi = MEM32(ebx + 0x1378);
    edi = 0; /* xor self */
    esp = esp + 0x10;
    if (CMP_EQ(esi, edi)) goto loc_00387E96; /* je: equal / zero */

loc_00387E8B: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00387E90: ;
    MEM32(ebx + 0x1378) = edi;

loc_00387E96: ;
    esi = MEM32(ebx + 0x137C);
    if (CMP_EQ(esi, edi)) goto loc_00387EAB; /* je: equal / zero */

loc_00387EA0: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00387EA5: ;
    MEM32(ebx + 0x137C) = edi;

loc_00387EAB: ;
    eax = MEM32(ebp + 0x564);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001D4750(); /* call 0x001D4750 */

loc_00387EB7: ;
    MEM32(ebx + 0x137C) = eax;
    esp = esp + 4;

loc_00387EC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00387F50
 * Original: 0x00387F50 - 0x00387F9E (78 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387F50(void)
{
    float xmm0;

loc_00387F50: ;
    edx = MEM32(esp + 4);
    eax = ecx + 0x1388;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(ecx + 4);
    xmm0 = MEMF(edx + 0x114); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0x770); /* addss */
    eax = MEM32(esp + 0xC);
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    edx = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ecx + 0x774);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00387FA0
 * Original: 0x00387FA0 - 0x00388048 (168 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm2, xmm3, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00387FA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1F0);
    eax = ZX16(MEM16(edi + 0x60));
    if (CMP_L(eax, ecx)) goto loc_00387FBF; /* jl: less (signed <) */

loc_00387FBA: ;
    eax = 0x14;

loc_00387FBF: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D58); /* movss */
    eax = eax + 0x763260;
    /* comiss xmm0, MEMF(esi + 0x79C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x79C))) goto loc_00387FF7; /* jbe: below or equal (unsigned <=) */

loc_00387FE9: ;
    xmm0 = MEMF(0x64935C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_00387FF7: ;
    xmm5 = MEMF(esp + 0x10); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm5, xmm3 - sets EFLAGS */
    if ((xmm5 <= xmm3)) goto loc_00388021; /* jbe: below or equal (unsigned <=) */

loc_00388005: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00388021; /* jbe: below or equal (unsigned <=) */

loc_00388017: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm5 = xmm0; /* movaps */

loc_00388021: ;
    xmm2 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    xmm0 = xmm2; /* movaps */
    if ((xmm3 <= xmm2)) goto loc_00388036; /* jbe: below or equal (unsigned <=) */

loc_0038802F: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */

loc_00388036: ;
    xmm0 = xmm0 - MEMF(0x648CE4); /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) { sub_00388048(); return; } /* jbe: below or equal (unsigned <=) */

loc_00388043: ;
    xmm0 = xmm3; /* movaps */
    g_seh_ebp = ebp; sub_00388058(); return; /* tail jmp 0x00388058 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003883D0
 * Original: 0x003883D0 - 0x00388474 (164 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003883D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003883D0: ;
    esp = esp - 0x14;
    eax = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(edi + 0x13A0);
    esi = MEM32(edi + 4);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x1C) = 2;
    MEM32(esp + 0x20) = 3;
    edx = MEM32(esp + ecx * 4 + 0x10);
    ebx = MEM32(eax + edx * 4);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00388422: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038846A; /* je: equal / zero */

loc_00388426: ;
    if (TEST_Z(ebx, ebx)) goto loc_0038846A; /* je: equal / zero */

loc_0038842A: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00388447; /* je: equal / zero */

loc_00388434: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0038844D;

loc_00388447: ;
    eax = MEM32(esi + 0x580);

loc_0038844D: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edx = edi;
    eax = 0; /* xor self */
    ecx = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0038846A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00388480
 * Original: 0x00388480 - 0x00388503 (131 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00388480: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1F0);
    if (TEST_Z(eax, eax)) goto loc_00388501; /* je: equal / zero */

loc_0038848D: ;
    ecx = MEM32(eax + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_00388501; /* je: equal / zero */

loc_00388497: ;
    eax = MEM32(0x847024);
    ecx = MEM32(edi + 0x13A0);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_003884B3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003884FE; /* je: equal / zero */

loc_003884B7: ;
    if (TEST_Z(ebx, ebx)) goto loc_003884FE; /* je: equal / zero */

loc_003884BB: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003884D8; /* je: equal / zero */

loc_003884C5: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_003884DE;

loc_003884D8: ;
    eax = MEM32(esi + 0x580);

loc_003884DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edx = edi;
    eax = 2;
    ecx = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_003884FE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00388501: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00388510
 * Original: 0x00388510 - 0x0038857F (111 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00388510: ;
    eax = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x13A0);
    esi = MEM32(edi + 4);
    ebx = MEM32(ecx + 0x18);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0038852F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038857A; /* je: equal / zero */

loc_00388533: ;
    if (TEST_Z(ebx, ebx)) goto loc_0038857A; /* je: equal / zero */

loc_00388537: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00388554; /* je: equal / zero */

loc_00388541: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0038855A;

loc_00388554: ;
    eax = MEM32(esi + 0x580);

loc_0038855A: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edx = edi;
    eax = 3;
    ecx = ebx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0038857A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00388580
 * Original: 0x00388580 - 0x003885CC (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00388580: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x1374));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003885C8; /* jne: not equal / not zero */

loc_0038858D: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1378);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(edi + 0x1374) = 1;
    if (TEST_Z(esi, esi)) goto loc_003885AE; /* je: equal / zero */

loc_0038859F: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_003885A4: ;
    MEM32(edi + 0x1378) = 0;

loc_003885AE: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x564);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D4750(); /* call 0x001D4750 */

loc_003885BE: ;
    esp = esp + 4;
    MEM32(edi + 0x1378) = eax;
    POP32(esp, esi);

loc_003885C8: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003885D0
 * Original: 0x003885D0 - 0x003885DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003885D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003885D0: ;
    eax = MEM32(esp + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003885E0
 * Original: 0x003885E0 - 0x0038867E (158 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003885E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003885E0: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, MEMF(ecx + 0x770) - sets EFLAGS */
    xmm3 = MEMF(0x648F60); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648EA4); /* mulss */
    xmm0 = xmm0 * MEMF(0x648FD8); /* mulss */
    if ((xmm2 <= MEMF(ecx + 0x770))) goto loc_00388637; /* jbe: below or equal (unsigned <=) */

loc_0038860F: ;
    xmm5 = MEMF(ecx + 0x770); /* movss */
    goto loc_00388620;

    /* nop */

loc_00388620: ;
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm5 = xmm4; /* movaps */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    if ((xmm2 > xmm5)) goto loc_00388620; /* ja: above (unsigned >) */

loc_0038862F: ;
    MEMF(ecx + 0x770) = xmm5; /* movss */

loc_00388637: ;
    xmm4 = MEMF(ecx + 0x770); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 < xmm3)) goto loc_00388667; /* jb: below (unsigned <) */

loc_00388644: ;
    xmm5 = xmm4; /* movaps */
    goto loc_00388650;

    /* nop */

loc_00388650: ;
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    xmm5 = xmm4; /* movaps */
    if ((xmm4 >= xmm3)) goto loc_00388650; /* jae: above or equal (unsigned >=) */

loc_0038865F: ;
    MEMF(ecx + 0x770) = xmm5; /* movss */

loc_00388667: ;
    xmm3 = MEMF(ecx + 0x770); /* movss */
    /* comiss xmm3, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm3 < MEMF(0x648E6C))) { sub_0038867E(); return; } /* jb: below (unsigned <) */

loc_00388678: ;
    xmm3 = xmm3 + xmm1; /* addss */
    g_seh_ebp = ebp; sub_0038869D(); return; /* tail jmp 0x0038869D */

}

/**
 * sub_00388710
 * Original: 0x00388710 - 0x00388767 (87 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388710(void)
{
    int _flags = 0; /* fallback flag var */

loc_00388710: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xE44);
    if (TEST_NZ(eax, eax)) goto loc_00388740; /* jne: not equal / not zero */

loc_0038871D: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x23C);
    if (TEST_Z(eax, eax)) goto loc_00388740; /* je: equal / zero */

loc_0038872B: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00388730: ;
    if (TEST_Z(eax, eax)) goto loc_00388740; /* je: equal / zero */

loc_00388734: ;
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_00388740; /* jne: not equal / not zero */

loc_0038873A: ;
    MEM32(esi + 0xE44) = eax;

loc_00388740: ;
    eax = MEM32(esi + 0xC88);
    if (TEST_Z(eax, eax)) goto loc_00388763; /* je: equal / zero */

loc_0038874A: ;
    if (CMP_NE(MEM32(eax + 4), 2)) goto loc_00388763; /* jne: not equal / not zero */

loc_00388750: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003841C0(); /* call 0x003841C0 */

loc_00388758: ;
    esi = MEM32(esi + 0xC88);
    PUSH32(esp, 0); sub_00384440(); /* call 0x00384440 */

loc_00388763: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00388770
 * Original: 0x00388770 - 0x00388776 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388770(void)
{

loc_00388770: ;
    eax = 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00388780
 * Original: 0x00388780 - 0x0038886A (234 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388780(void)
{
    int _flags = 0; /* fallback flag var */

loc_00388780: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00388788: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_00388790: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0038886A(); return; } /* je: equal / zero */

loc_00388798: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_00388790; /* jl: less (signed <) */

loc_003887A4: ;
    edx = 0x600E6C;
    ecx = ZX8(MEM8(esi + 0x88));
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x84);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x6C);
    PUSH32(esp, eax);
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x64));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x63));
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x62));
    PUSH32(esp, eax);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x5E);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x58);
    ecx = ZX8(MEM8(esi + 0x54));
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x53);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x52));
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x4E);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4C);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x4A);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x49);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x48);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x47);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x46);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x44);
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
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x8C);
    PUSH32(esp, 0x63EDE8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00388860: ;
    esp = esp + 0x90;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00388890
 * Original: 0x00388890 - 0x003888C2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388890(void)
{

loc_00388890: ;
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
    MEM32(eax) = 0x63E998;
    esp += 4; return; /* ret */

}

/**
 * sub_003888D0
 * Original: 0x003888D0 - 0x003888D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003888D0(void)
{

loc_003888D0: ;
    eax = 0x29;
    esp += 4; return; /* ret */

}

/**
 * sub_003888E0
 * Original: 0x003888E0 - 0x00388935 (85 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003888E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003888E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003888E8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_003888F0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_00388935(); return; } /* je: equal / zero */

loc_003888F4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_003888F0; /* jl: less (signed <) */

loc_00388900: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x3A);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x38);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x36);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x63EDAC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0038892E: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00388940
 * Original: 0x00388940 - 0x00388972 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388940(void)
{

loc_00388940: ;
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
    MEM32(eax) = 0x63EA00;
    esp += 4; return; /* ret */

}

/**
 * sub_00388980
 * Original: 0x00388980 - 0x00388986 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388980(void)
{

loc_00388980: ;
    eax = 0x2A;
    esp += 4; return; /* ret */

}

/**
 * sub_00388990
 * Original: 0x00388990 - 0x003889ED (93 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388990(void)
{
    int _flags = 0; /* fallback flag var */

loc_00388990: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00388998: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_003889A0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_003889ED(); return; } /* je: equal / zero */

loc_003889A4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_003889A0; /* jl: less (signed <) */

loc_003889B0: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x44);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x38);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x36);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x63ED40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_003889E6: ;
    esp = esp + 0x28;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00388A00
 * Original: 0x00388A00 - 0x00388A1A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388A00(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00388A00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x6BD92C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    edi = 0x74E6E8;
    g_seh_ebp = ebp; sub_00388A20(); return; /* tail jmp 0x00388A20 */

}

/**
 * sub_00388A80
 * Original: 0x00388A80 - 0x00388AE3 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388A80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00388A80: ;
    if (CMP_NE(MEM16(esi + 0x3AE), 0)) goto loc_00388AC6; /* jne: not equal / not zero */

loc_00388A8A: ;
    edx = edi;
    PUSH32(esp, 0); sub_0038F8B0(); /* call 0x0038F8B0 */

loc_00388A91: ;
    if (TEST_Z(eax, eax)) goto loc_00388AC6; /* je: equal / zero */

loc_00388A95: ;
    eax = MEM32(edi + 0xC90);
    if (TEST_NZ(eax, eax)) goto loc_00388AE2; /* jne: not equal / not zero */

loc_00388A9F: ;
    eax = esi;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_00388AA6: ;
    if (CMP_EQ(eax, 7)) goto loc_00388ABB; /* je: equal / zero */

loc_00388AAB: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0xB - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xB)) ? 1 : 0); /* setne */
    ecx++;
    MEM32(edi + 0xC90) = ecx;
    esp += 4; return; /* ret */

loc_00388ABB: ;
    MEM32(edi + 0xC90) = 3;
    esp += 4; return; /* ret */

loc_00388AC6: ;
    eax = esi;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_00388ACD: ;
    (void)0; /* cmp eax, 7 - flags set for next jcc */
    eax = MEM32(edi + 0x1F0);
    SET_LO8(edx, (CMP_EQ(eax, 7)) ? 1 : 0); /* sete */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001B4990(); /* call 0x001B4990 */

loc_00388AE1: ;
    POP32(esp, ecx);

loc_00388AE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00388AF0
 * Original: 0x00388AF0 - 0x00388D02 (530 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388AF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6, xmm7;

loc_00388AF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x178;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648E18); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebx); /* movss */
    PUSH32(esp, ecx);
    esi = eax;
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x44;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00388B41: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0x84;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00388B5F: ;
    esp = esp + 4;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00388B77: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00388B8B: ;
    xmm0 = MEMF(esi + 0x1C0); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0x144;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00388BAB: ;
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x44;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00388BC7: ;
    xmm0 = MEMF(esi + 0x1CC); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x84;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00388BE6: ;
    esp = esp + 4;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x144;
    PUSH32(esp, edx);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00388C03: ;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00388C1B: ;
    eax = esp + 0xC0;
    ecx = esp + 0x20;
    esi = esp + 0x100;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_00388C32: ;
    ecx = esi;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00388C44: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00388C53: ;
    xmm7 = MEMF(0x648D78); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(edi + 0x770) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    esp = esp + 8;
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x20)); /* sqrtss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00388CB5: ;
    xmm0 = xmm0 * MEMF(0x64934C); /* mulss */
    xmm1 = MEMF(ebp + 0x10); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edi + 0x774) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00388CDC; /* ja: above (unsigned >) */

loc_00388CD2: ;
    xmm1 = MEMF(ebp + 0x14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00388CDF; /* jbe: below or equal (unsigned <=) */

loc_00388CDC: ;
    xmm0 = xmm1; /* movaps */

loc_00388CDF: ;
    xmm6 = MEMF(0x648F60); /* movss */
    MEMF(edi + 0x774) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x770); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) { sub_00388D02(); return; } /* jbe: below or equal (unsigned <=) */

loc_00388CFC: ;
    xmm0 = xmm0 - xmm6; /* subss */
    g_seh_ebp = ebp; sub_00388D1A(); return; /* tail jmp 0x00388D1A */

}

/**
 * sub_00388E40
 * Original: 0x00388E40 - 0x00388FFB (443 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6, xmm7;

loc_00388E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x12C;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648E18); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x770); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x34;
    MEMF(esp + 0x1C) = xmm7; /* movss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00388E92: ;
    xmm0 = MEMF(ebx + 0x774); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0xB4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00388EB1: ;
    esp = esp + 4;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00388EC2: ;
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00388ED4: ;
    xmm0 = MEMF(esi + 0x1C0); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0xF4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00388EF4: ;
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x34;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00388F10: ;
    xmm0 = MEMF(esi + 0x1CC); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0xB4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00388F2F: ;
    esp = esp + 4;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0xF4;
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00388F49: ;
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00388F5A: ;
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00388F6C: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00388F7B: ;
    esp = esp + 8;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00388FC9: ;
    xmm0 = xmm0 * MEMF(0x64934C); /* mulss */
    ecx = MEM32(ebp + 0xC);
    MEMF(ecx) = xmm0; /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm0 = MEMF(0x648F60); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_00388FFB(); return; } /* jbe: below or equal (unsigned <=) */

loc_00388FEC: ;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(edi) = xmm1; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00389020
 * Original: 0x00389020 - 0x003890CF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389020(void)
{
    int _flags = 0; /* fallback flag var */

loc_00389020: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00389033; /* jne: not equal / not zero */

loc_0038902E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00389033: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0038907B; /* je: equal / zero */

loc_00389059: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0038907B; /* jb: below (unsigned <) */

loc_00389062: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0038906C: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00389074: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0038909C; /* jne: not equal / not zero */

loc_0038907B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0038908D: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00389095: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_003890CF(); return; } /* je: equal / zero */

loc_0038909C: ;
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
    MEM32(eax) = 0x63EA00;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003890E0
 * Original: 0x003890E0 - 0x00389125 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003890E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003890E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003890F3: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003890FE: ;
    SET_LO8(eax, MEM8(edi + 0x34));
    esp = esp + 8;
    if (CMP_NE(LO8(eax), 1)) { sub_00389125(); return; } /* jne: not equal / not zero */

loc_00389108: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x38);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_00389113: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0038911D: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00389150
 * Original: 0x00389150 - 0x003891B0 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389150(void)
{
    int _flags = 0; /* fallback flag var */

loc_00389150: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0038915F: ;
    PUSH32(esp, 0x10);
    MEM8(edi + 0x34) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00389169: ;
    esp = esp + 8;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00389175; /* jns: not sign (positive) */

loc_00389170: ;
    eax = eax | 0xFFFF0000u;

loc_00389175: ;
    MEM16(edi + 0x36) = LO16(eax);
    SET_LO8(eax, MEM8(edi + 0x34));
    if (CMP_NE(LO8(eax), 1)) { sub_003891B0(); return; } /* jne: not equal / not zero */

loc_00389180: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_00389187: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00389193; /* jns: not sign (positive) */

loc_0038918E: ;
    eax = eax | 0xFFFF0000u;

loc_00389193: ;
    PUSH32(esp, 3);
    MEM16(edi + 0x38) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0038919E: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 4)) goto loc_003891A8; /* je: equal / zero */

loc_003891A5: ;
    eax = eax | 0xFFFFFFF8u;

loc_003891A8: ;
    MEM32(edi + 0x3C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003891F0
 * Original: 0x003891F0 - 0x00389391 (417 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003891F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003891F0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_00389201: ;
    if (TEST_Z(eax, eax)) { sub_00389391(); return; } /* je: equal / zero */

loc_00389209: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) { sub_00389391(); return; } /* je: equal / zero */

loc_00389217: ;
    if (CMP_EQ(eax, 0x46)) { sub_00389391(); return; } /* je: equal / zero */

loc_00389220: ;
    if (CMP_EQ(eax, 0x47)) { sub_00389391(); return; } /* je: equal / zero */

loc_00389229: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    PUSH32(esp, 0); sub_0038F870(); /* call 0x0038F870 */

loc_00389234: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) goto loc_00389243; /* jne: not equal / not zero */

loc_0038923A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00389243: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x570);
    if (TEST_Z(ebp, ebp)) goto loc_00389387; /* je: equal / zero */

loc_00389252: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x34);
    if (CMP_A(eax, 4)) goto loc_00389387; /* ja: above (unsigned >) */

loc_0038925F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x389398); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00389266u) goto loc_00389266;
    if (_jt == 0x003892C7u) goto loc_003892C7;
    if (_jt == 0x00389355u) goto loc_00389355;
    if (_jt == 0x00389369u) goto loc_00389369;
    if (_jt == 0x0038937Du) goto loc_0038937D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00389266: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00389387; /* je: equal / zero */

loc_00389273: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038927A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038928A; /* je: equal / zero */

loc_00389281: ;
    PUSH32(esp, 0); sub_00388940(); /* call 0x00388940 */

loc_00389286: ;
    esi = eax;
    goto loc_0038928C;

loc_0038928A: ;
    esi = 0; /* xor self */

loc_0038928C: ;
    SET_LO16(ecx, MEM16(edi + 0x36));
    MEM16(esi + 0x36) = LO16(ecx);
    MEM8(esi + 0x34) = 1;
    SET_LO16(edx, MEM16(ebp + 0x32));
    MEM16(esi + 0x38) = LO16(edx);
    eax = MEM32(ebp + 0x34);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003892B2: ;
    eax = MEM32(edi + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003892BD: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003892C7: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00389387; /* jne: not equal / not zero */

loc_003892D4: ;
    SET_LO16(eax, MEM16(edi + 0x38));
    (void)0; /* cmp LO16(eax), 0xFFFE - flags set for next jcc */
    MEM16(ebp + 0x32) = LO16(eax);
    if (CMP_EQ(LO16(eax), 0xFFFE)) goto loc_003892EA; /* je: equal / zero */

loc_003892E2: ;
    ecx = MEM32(edi + 0x3C);
    MEM32(ebp + 0x34) = ecx;
    goto loc_003892F1;

loc_003892EA: ;
    MEM32(ebp + 0x34) = 0xFFFFFFFFu;

loc_003892F1: ;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00296E60(); /* call 0x00296E60 */

loc_003892FB: ;
    if (CMP_NE(MEM16(edi + 0x38), LO16(eax))) goto loc_00389387; /* jne: not equal / not zero */

loc_00389305: ;
    edx = MEM32(edi + 0x3C);
    esi = (uint32_t)(int32_t)SMEM8(edx + 0x862CCB);
    eax = ZX16(MEM16(ebx + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0); sub_00282F20(); /* call 0x00282F20 */

loc_0038931D: ;
    esp = esp + 0xC;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00389387; /* je: equal / zero */

loc_00389325: ;
    eax = MEM32(0x84A5F8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    esi = MEM32(esi + eax + 0x238);
    eax = MEM32(ebx + 0x238);
    if (CMP_EQ(eax, esi)) goto loc_00389387; /* je: equal / zero */

loc_00389341: ;
    ecx = MEM32(esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    SET_LO8(edx, MEM8(esi + 4));
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM8(eax + 4) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00389355: ;
    MEM32(ebp + 0xC90) = 1;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00389369: ;
    MEM32(ebp + 0xC90) = 2;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0038937D: ;
    MEM32(ebp + 0xC90) = 3;

loc_00389387: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003893B0
 * Original: 0x003893B0 - 0x003893F4 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003893B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003893B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebp + 0x1EC));
    ebx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_003893EF; /* jle: less or equal (signed <=) */

loc_003893C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0x1F0;
    /* nop */

loc_003893D0: ;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_003893DB; /* je: equal / zero */

loc_003893D6: ;
    PUSH32(esp, 0); sub_0038DF90(); /* call 0x0038DF90 */

loc_003893DB: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x1EC);
    ebx++;
    esi = esi + 0xB0;
    if (CMP_L(ebx, eax)) goto loc_003893D0; /* jl: less (signed <) */

loc_003893ED: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003893EF: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00389400
 * Original: 0x00389400 - 0x003894C3 (195 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00389400: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0x10;
    edi = 0x6D00;
    ebx = 0; /* xor self */

loc_00389410: ;
    eax = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(eax + ebp), 0x35)) goto loc_003894AB; /* jne: not equal / not zero */

loc_0038941F: ;
    ecx = MEM32(0x84A5F8);
    esi = MEM32(edi + ecx + 0x570);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    edx = edi + ecx;
    if (CMP_EQ(esi, ebx)) goto loc_003894AB; /* je: equal / zero */

loc_00389433: ;
    eax = edx;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_0038943A: ;
    if (CMP_NE(eax, 9)) goto loc_0038947F; /* jne: not equal / not zero */

loc_0038943F: ;
    eax = MEM32(edx + 0x23C);
    if (CMP_EQ(eax, ebx)) goto loc_00389454; /* je: equal / zero */

loc_00389449: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_0038944E: ;
    if (CMP_EQ(eax, MEM32(esp + 0x14))) goto loc_00389460; /* je: equal / zero */

loc_00389454: ;
    edx = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(esi + 0x1F0), edx)) goto loc_0038947F; /* jne: not equal / not zero */

loc_00389460: ;
    eax = MEM32(0x84A5F8);
    eax = MEM32(edi + eax + 0x23C);
    PUSH32(esp, esi);
    MEM8(eax + 0x10) = LO8(ebx);
    MEM8(eax + 8) = LO8(ebx);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0); sub_003893B0(); /* call 0x003893B0 */

loc_0038947D: ;
    goto loc_003894AB;

loc_0038947F: ;
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(esi + 0xE44), ecx)) goto loc_003894AB; /* jne: not equal / not zero */

loc_0038948B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003893B0(); /* call 0x003893B0 */

loc_00389491: ;
    eax = MEM32(esi + 0xC90);
    if (CMP_L(eax, 2)) goto loc_003894A1; /* jl: less (signed <) */

loc_0038949C: ;
    if (CMP_LE(eax, 4)) goto loc_003894AB; /* jle: less or equal (signed <=) */

loc_003894A1: ;
    MEM32(esi + 0xC90) = 1;

loc_003894AB: ;
    edi = edi + 0x6D0;
    ebp++;
    if (CMP_L(edi, 0x36800)) goto loc_00389410; /* jl: less (signed <) */

loc_003894BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003894D0
 * Original: 0x003894D0 - 0x003894EB (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003894D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003894D0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(eax, ebx)) { sub_003894EB(); return; } /* jne: not equal / not zero */

loc_003894DE: ;
    PUSH32(esp, 0); sub_002B3FF0(); /* call 0x002B3FF0 */

loc_003894E3: ;
    ebp = eax;
    MEM32(esp + 0xC) = ebp;
    g_seh_ebp = ebp; sub_003894FB(); return; /* tail jmp 0x003894FB */

}

/**
 * sub_00389A90
 * Original: 0x00389A90 - 0x00389AC3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389A90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00389A90: ;
    ecx = MEM32(esp + 4);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00389AC3(); return; } /* jne: not equal / not zero */

loc_00389AAA: ;
    esi = MEM32(ecx + 0xC70);
    SET_LO8(ebx, MEM8(esi + 0x3C));
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_00389AC3(); return; } /* je: equal / zero */

loc_00389AB7: ;
    xmm3 = MEMF(ecx + 0xCAC); /* movss */
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_00389AC8(); return; /* tail jmp 0x00389AC8 */

}

/**
 * sub_00389DE0
 * Original: 0x00389DE0 - 0x00389E0E (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389DE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00389DE0: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_00389E0E(); return; } /* jbe: below or equal (unsigned <=) */

loc_00389DE8: ;
    xmm2 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm3 / xmm0; /* divss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm0 = xmm1; /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00389E30
 * Original: 0x00389E30 - 0x00389F16 (230 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389E30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00389E30: ;
    eax = MEM32(esp + 0x10);
    esp = esp - 0x1C;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    if (TEST_NZ(eax, eax)) goto loc_00389E48; /* jne: not equal / not zero */

loc_00389E40: ;
    eax = esp + 0x14;
    MEM32(esp + 0x30) = eax;

loc_00389E48: ;
    ecx = esp + 8;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x7F9F5C); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    edx = esp + 8;
    eax = edx;
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esp + 4) = xmm1; /* movss */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 8;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00389F20
 * Original: 0x00389F20 - 0x00389F57 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00389F20: ;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_00389F25: ;
    eax--;
    if (CMP_A(eax, 0xC)) { sub_00389F57(); return; } /* ja: above (unsigned >) */

loc_00389F2B: ;
    eax = ZX8(MEM8(eax + 0x389F74));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x389F5C)); return; /* indirect tail jmp */

    eax = 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00389F90
 * Original: 0x00389F90 - 0x0038A39F (1039 bytes, 237 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389F90(void)
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

loc_00389F90: ;
    esp = esp - 0x220;
    if (TEST_Z(eax, eax)) goto loc_0038A398; /* je: equal / zero */

loc_00389F9E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x228);
    ecx = MEM32(esi + 0x3C4);
    if (TEST_Z(ecx, ecx)) goto loc_0038A397; /* je: equal / zero */

loc_00389FB4: ;
    if (CMP_NE(MEM8(eax), 0x23)) goto loc_00389FCA; /* jne: not equal / not zero */

loc_00389FB9: ;
    if (CMP_NE(MEM8(eax + 1), 0x5C)) goto loc_00389FCA; /* jne: not equal / not zero */

loc_00389FBF: ;
    eax = eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63ECB0);
    goto loc_00389FD0;

loc_00389FCA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F04F4);

loc_00389FD0: ;
    eax = esp + 0x124;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00389FDE: ;
    eax = MEM32(esi + 0x3C4);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0038A329; /* je: equal / zero */

loc_00389FEF: ;
    ecx = MEM32(esp + 0x22C);
    esi = eax + 4;
    eax = MEM32(esp + 0x234);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x124;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    eax = esi;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_000367A0(); /* call 0x000367A0 */

loc_0038A017: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0038A03B; /* je: equal / zero */

loc_0038A01E: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x1BC) = xmm0; /* movss */
    MEMF(eax + 0x1C4) = xmm0; /* movss */
    goto loc_0038A329;

loc_0038A03B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00035F90(); /* call 0x00035F90 */

loc_0038A046: ;
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0038A04F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xB1);
    PUSH32(esp, 0x5D4B84);
    PUSH32(esp, 0x200);
    esi = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0038A067: ;
    ebp = eax;
    esp = esp + 0x10;
    if (TEST_Z(ebp, ebp)) goto loc_0038A327; /* je: equal / zero */

loc_0038A074: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x80;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x5D4B84);
    edi = esp + 0x130;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_0038A096: ;
    xmm0 = MEMF(esp + 0x244); /* movss */
    esp = esp + 8;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEMF(ebp + 0x1B0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebp + 0xC) = eax;
    MEMF(ebp + 0x1B4) = xmm0; /* movss */
    MEMF(ebp + 0x1B8) = xmm0; /* movss */
    MEM32(ebp + 8) = ebx;
    MEM16(ebp + 0x1D8) = LO16(ebx);
    MEM16(ebp + 0x1DA) = LO16(ebx);
    MEM32(ebp + 0x1DC) = ebx;
    MEM8(ebp + 0x1F0) = LO8(ebx);
    MEM8(ebp + 0x1F1) = LO8(ebx);
    if (CMP_EQ(esi, ebx)) goto loc_0038A149; /* je: equal / zero */

loc_0038A0E7: ;
    eax = MEM32(esi + 0x1BC);
    MEM32(ebp + 0x1BC) = eax;
    ecx = MEM32(esi + 0x1C0);
    MEM32(ebp + 0x1C0) = ecx;
    edx = MEM32(esi + 0x1C8);
    MEM32(ebp + 0x1C8) = edx;
    xmm1 = MEMF(esi + 0x1C8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + 0x1BC) = xmm0; /* movss */
    MEMF(esi + 0x1C0) = xmm0; /* movss */
    MEMF(esi + 0x1C4) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0038A169; /* jp: parity */

loc_0038A134: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_00036700(); /* call 0x00036700 */

loc_0038A13D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(0x84A5BD) = 1;
    goto loc_0038A169;

loc_0038A149: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0x1BC) = xmm1; /* movss */
    MEMF(ebp + 0x1C0) = xmm0; /* movss */
    MEMF(ebp + 0x1C8) = xmm1; /* movss */

loc_0038A169: ;
    xmm1 = MEMF(esp + 0x23C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0038A18D; /* jp: parity */

loc_0038A17B: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036700(); /* call 0x00036700 */

loc_0038A186: ;
    MEM8(0x84A5BD) = 1;

loc_0038A18D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x104);
    eax = esp + 0x12C;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEMF(ebp + 0x1C4) = xmm0; /* movss */
    MEM8(ebp + 0x1D4) = LO8(ebx);
    MEM8(ebp + 0x1D6) = LO8(ebx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0038A1C0: ;
    eax = esp + 0x14;
    MEM32(esp + 0x124) = 0x1D;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_0038A1E0: ;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_00063730(); /* call 0x00063730 */

loc_0038A1E9: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_0038A26A; /* jne: not equal / not zero */

loc_0038A1F2: ;
    edx = MEM32(eax + 0x18);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = eax + 0x18;
    if (CMP_EQ(edx, ebx)) goto loc_0038A200; /* je: equal / zero */

loc_0038A1FC: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_0038A200: ;
    edi = MEM32(ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0038A20B: ;
    esi = ebp + 0x10;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_003CBF10(); /* call 0x003CBF10 */

loc_0038A217: ;
    edx = MEM32(esp + 0x238);
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = esi;
    MEM16(ebp + 0xF8) = LO16(ebx);
    MEMF(ebp + 0xDC) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003CC2A0(); /* call 0x003CC2A0 */

loc_0038A238: ;
    eax = MEM32(esp + 0x244);
    xmm0 = MEMF(esp + 0x23C); /* movss */
    esp = esp + 4;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEM32(ebp + 0xF4) = eax;
    MEM32(ebp + 0xF0) = 2;
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    if ((xmm0 < xmm2)) goto loc_0038A27D; /* jb: below (unsigned <) */

loc_0038A266: ;
    fp_top() = fabs(fp_top()); /* fabs */
    goto loc_0038A281;

loc_0038A26A: ;
    PUSH32(esp, 0); sub_001F0580(); /* call 0x001F0580 */

loc_0038A26F: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_0038A278: ;
    goto loc_0038A326;

loc_0038A27D: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = -fp_top(); /* fchs */

loc_0038A281: ;
    MEMF(esi + 0xD8) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm2, MEMF(ebp + 0xE8) - sets EFLAGS */
    ecx = MEM32(esi);
    MEMF(ebp + 0xDC) = xmm2; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(ebp + 0x1CC) = xmm0; /* movss */
    if ((xmm2 > MEMF(ebp + 0xE8))) goto loc_0038A2B4; /* ja: above (unsigned >) */

loc_0038A2AA: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    goto loc_0038A2BC;

loc_0038A2B4: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_0038A2BC: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x1E0) = ebx;
    MEM32(ebp + 0x1E4) = ebx;
    MEM16(ebp + 0x1E8) = LO16(ebx);
    MEM32(ebp + 0x1EC) = ebx;
    PUSH32(esp, 0x366E0);
    ebx = ebp;
    MEMF(ebp + 0x1D0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1890(); /* call 0x003E1890 */

loc_0038A2EE: ;
    xmm1 = MEMF(esp + 0x244); /* movss */
    esp = esp + 8;
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0038A326; /* jnp: not parity */

loc_0038A307: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_00036740(); /* call 0x00036740 */

loc_0038A30E: ;
    if (TEST_Z(eax, eax)) goto loc_0038A326; /* je: equal / zero */

loc_0038A312: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(eax + 0x1B8) = xmm0; /* movss */

loc_0038A326: ;
    POP32(esp, edi);

loc_0038A327: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0038A329: ;
    edx = MEM32(esp + 0x228);
    eax = MEM32(edx + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_0038A397; /* je: equal / zero */

loc_0038A33A: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0038A344: ;
    if (TEST_Z(eax, eax)) goto loc_0038A397; /* je: equal / zero */

loc_0038A348: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(eax + 0xE8) - sets EFLAGS */
    ecx = MEM32(eax + 0x10);
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x1CC) = xmm0; /* movss */
    if ((xmm1 > MEMF(eax + 0xE8))) goto loc_0038A387; /* ja: above (unsigned >) */

loc_0038A36F: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 0x220;
    esp += 4; return; /* ret */

loc_0038A387: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */

loc_0038A397: ;
    POP32(esp, esi);

loc_0038A398: ;
    esp = esp + 0x220;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0038A3A0
 * Original: 0x0038A3A0 - 0x0038A3C7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A3A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038A3A0: ;
    SET_LO8(ecx, MEM8(eax));
    esp = esp - 0x108;
    (void)0; /* cmp LO8(ecx), 0x23 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x110);
    PUSH32(esp, esi);
    if (CMP_NE(LO8(ecx), 0x23)) { sub_0038A3C7(); return; } /* jne: not equal / not zero */

loc_0038A3B6: ;
    if (CMP_NE(MEM8(eax + 1), 0x5C)) { sub_0038A3C7(); return; } /* jne: not equal / not zero */

loc_0038A3BC: ;
    eax = eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63ECB0);
    g_seh_ebp = ebp; sub_0038A3CD(); return; /* tail jmp 0x0038A3CD */

}

/**
 * sub_0038A4A0
 * Original: 0x0038A4A0 - 0x0038A4F1 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0038A4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_0038A4F1(); return; } /* jne: not equal / not zero */

loc_0038A4B9: ;
    eax = MEM32(ebp + 0x10);
    ebx = ebx + 0x78;
    edx = MEM32(ebx);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(ebx + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(ebx + 8);
    MEM32(ecx + 8) = edx;
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0038A5D0
 * Original: 0x0038A5D0 - 0x0038AB94 (1476 bytes, 420 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A5D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038A5D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(ebp + 0x30A));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038A6E3; /* jne: not equal / not zero */

loc_0038A5EC: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax);
    ecx = ebp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esp + 0x30);
    esi = MEM32(ecx);
    eax = ebp + 0xC;
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x34);
    esi = MEM32(edx);
    xmm0 = MEMF(0x648EA4); /* movss */
    xmm1 = MEMF(ebp + 4); /* movss */
    ecx = ebp + 0x18;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    edx = edi;
    esi = MEM32(edx);
    ecx = ebp + 0x24;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebp + 4) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x10); /* movss */
    edx = ebp;
    esi = MEM32(edx);
    ecx = ebp + 0x30C;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = edx;
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebp + 0x10) = xmm1; /* movss */
    edx = MEM32(eax);
    xmm1 = MEMF(ebp + 0x1C); /* movss */
    ecx = ebp + 0x318;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebp + 0x1C) = xmm1; /* movss */
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x1C);
    xmm1 = MEMF(ebp + 0x28); /* movss */
    ecx = ebp + 0x324;
    MEM32(ecx) = edx;
    edx = MEM32(ebp + 0x20);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebp + 0x28) = xmm1; /* movss */
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 0x28);
    eax = ebp + 0x330;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x2C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_0038A6E3: ;
    eax = MEM32(ebx + 0xC88);
    if (TEST_Z(eax, eax)) goto loc_0038A812; /* je: equal / zero */

loc_0038A6F1: ;
    ecx = MEM32(eax + 0x68);
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 4 + 8;
    edx = ebp + 0x318;
    esi = MEM32(edx);
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 0x68);
    ecx = ecx + ecx * 2;
    edx = eax + ecx * 4 + 0x38;
    ecx = MEM32(esp + 0x30);
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    MEM32(eax + 0x68) = MEM32(eax + 0x68) + 1;
    eax = MEM32(ebx + 0xC88);
    ecx = MEM32(eax + 0x68);
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 4 + 8;
    edx = ebp + 0x30C;
    esi = MEM32(edx);
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 0x68);
    ecx = ecx + ecx * 2;
    edx = eax + ecx * 4 + 0x38;
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    MEM32(eax + 0x68) = MEM32(eax + 0x68) + 1;
    eax = MEM32(ebx + 0xC88);
    ecx = MEM32(eax + 0x68);
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 4 + 8;
    edx = ebp + 0x330;
    esi = MEM32(edx);
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 0x68);
    ecx = ecx + ecx * 2;
    edx = eax + ecx * 4 + 0x38;
    ecx = edi;
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    MEM32(eax + 0x68) = MEM32(eax + 0x68) + 1;
    eax = MEM32(ebx + 0xC88);
    ecx = MEM32(eax + 0x68);
    ecx = ecx + ecx * 2;
    edx = ebp + 0x324;
    esi = MEM32(edx);
    ecx = eax + ecx * 4 + 8;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 0x68);
    ecx = ecx + ecx * 2;
    edx = eax + ecx * 4 + 0x38;
    ecx = MEM32(esp + 0x34);
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    MEM32(eax + 0x68) = MEM32(eax + 0x68) + 1;
    edx = MEM32(ebx + 0xC88);
    MEM32(edx + 4) = 1;

loc_0038A812: ;
    MEM8(ebx + 0xC98) = 0;
    ecx = MEM32(ebp + 0x304);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x300);
    edx = ebp + 0x2F0;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    eax = ebp + 0x30C;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    esi = ebp + 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0038B3F0(); /* call 0x0038B3F0 */

loc_0038A843: ;
    ecx = MEM32(ebp + 0x304);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x300);
    edx = ebp + 0x2F4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    MEM8(ebp + 0x308) = LO8(eax);
    eax = ebp + 0x318;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    esi = ebp + 0xE0;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0038B3F0(); /* call 0x0038B3F0 */

loc_0038A876: ;
    SET_LO8(ecx, MEM8(ebp + 0x308));
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(ebp + 0x308) = LO8(ecx);
    ecx = MEM32(ebp + 0x304);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x300);
    edx = ebp + 0x2F8;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    eax = ebp + 0x324;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    esi = ebp + 0x190;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0038B3F0(); /* call 0x0038B3F0 */

loc_0038A8B3: ;
    SET_LO8(ecx, MEM8(ebp + 0x308));
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(ebp + 0x308) = LO8(ecx);
    ecx = MEM32(ebp + 0x304);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x300);
    edx = ebp + 0x2FC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = ebp + 0x330;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ebp + 0x240;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0038B3F0(); /* call 0x0038B3F0 */

loc_0038A8ED: ;
    SET_LO8(edx, MEM8(ebp + 0x308));
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM8(ebp + 0x308) = LO8(edx);
    eax = MEM32(ebx + 0xC88);
    if (TEST_Z(eax, eax)) goto loc_0038AA39; /* je: equal / zero */

loc_0038A90C: ;
    ecx = MEM32(eax + 0xAC);
    edx = MEM32(ebp + 0x180);
    ecx = ecx + 9;
    ecx = ecx + ecx * 2;
    MEM32(esp + 0x1C) = edx;
    edx = eax + ecx * 4;
    ecx = MEM32(esp + 0x30);
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax + 0xAC);
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + edx * 4 + 0x9C) = ecx;
    MEM32(eax + 0xAC) = MEM32(eax + 0xAC) + 1;
    eax = MEM32(ebx + 0xC88);
    ecx = MEM32(eax + 0xAC);
    edx = MEM32(ebp + 0xD0);
    ecx = ecx + 9;
    ecx = ecx + ecx * 2;
    MEM32(esp + 0x1C) = edx;
    edx = eax + ecx * 4;
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax + 0xAC);
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + edx * 4 + 0x9C) = ecx;
    MEM32(eax + 0xAC) = MEM32(eax + 0xAC) + 1;
    eax = MEM32(ebx + 0xC88);
    ecx = MEM32(eax + 0xAC);
    edx = MEM32(ebp + 0x2E0);
    ecx = ecx + 9;
    ecx = ecx + ecx * 2;
    MEM32(esp + 0x1C) = edx;
    edx = eax + ecx * 4;
    ecx = edi;
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax + 0xAC);
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + edx * 4 + 0x9C) = ecx;
    MEM32(eax + 0xAC) = MEM32(eax + 0xAC) + 1;
    eax = MEM32(ebx + 0xC88);
    ecx = MEM32(eax + 0xAC);
    edx = MEM32(ebp + 0x230);
    ecx = ecx + 9;
    ecx = ecx + ecx * 2;
    MEM32(esp + 0x1C) = edx;
    edx = eax + ecx * 4;
    ecx = MEM32(esp + 0x34);
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax + 0xAC);
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + edx * 4 + 0x9C) = ecx;
    MEM32(eax + 0xAC) = MEM32(eax + 0xAC) + 1;
    edx = MEM32(ebx + 0xC88);
    MEM32(edx + 4) = 2;

loc_0038AA39: ;
    ecx = MEM32(esp + 0x2C);
    eax = ecx;
    edx = MEM32(eax);
    MEM32(ebp + 0x30C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ebp + 0x310) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0x30);
    MEM32(ebp + 0x314) = eax;
    eax = MEM32(edx);
    MEM32(ebp + 0x318) = eax;
    eax = MEM32(edx + 4);
    MEM32(ebp + 0x31C) = eax;
    edx = MEM32(edx + 8);
    eax = MEM32(esp + 0x34);
    MEM32(ebp + 0x320) = edx;
    edx = eax;
    esi = MEM32(edx);
    MEM32(ebp + 0x324) = esi;
    esi = MEM32(edx + 4);
    MEM32(ebp + 0x328) = esi;
    edx = MEM32(edx + 8);
    MEM32(ebp + 0x32C) = edx;
    edx = edi;
    esi = MEM32(edx);
    MEM32(ebp + 0x330) = esi;
    esi = MEM32(edx + 4);
    MEM32(ebp + 0x334) = esi;
    edx = MEM32(edx + 8);
    MEM32(ebp + 0x338) = edx;
    esi = MEM32(ecx);
    edx = ebp;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x30);
    esi = MEM32(ecx);
    edx = ebp + 0xC;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    ecx = eax;
    esi = MEM32(ecx);
    edx = ebp + 0x18;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    xmm7 = MEMF(esp + 0x24); /* movss */
    ecx = edi;
    esi = MEM32(ecx);
    edx = ebp + 0x24;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0038ABA0(); /* call 0x0038ABA0 */

loc_0038AB2D: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x308);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(ebp + 0x30A) = 1;
    MEM8(ebp + 0x309) = 0;
    if (TEST_Z(LO8(eax), 1)) goto loc_0038AB4D; /* je: equal / zero */

loc_0038AB46: ;
    MEM8(ebp + 0x309) = 1;

loc_0038AB4D: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_0038AB57; /* je: equal / zero */

loc_0038AB51: ;
    MEM8(ebp + 0x309) = MEM8(ebp + 0x309) + 1;

loc_0038AB57: ;
    if (TEST_Z(LO8(eax), 4)) goto loc_0038AB61; /* je: equal / zero */

loc_0038AB5B: ;
    MEM8(ebp + 0x309) = MEM8(ebp + 0x309) + 1;

loc_0038AB61: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_0038AB6B; /* je: equal / zero */

loc_0038AB65: ;
    MEM8(ebp + 0x309) = MEM8(ebp + 0x309) + 1;

loc_0038AB6B: ;
    eax = MEM32(ebx + 0xC70);
    xmm0 = MEMF(ebp + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x108); /* subss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(esi + 0x294) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00393410(); /* call 0x00393410 */

loc_0038AB8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0038ABA0
 * Original: 0x0038ABA0 - 0x0038B2E5 (1861 bytes, 465 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ABA0(void)
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

loc_0038ABA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1B8;
    ecx = MEM32(ebp + 0x14);
    xmm4 = MEMF(0x648D10); /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm2 = MEMF(ecx + 8); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x1C);
    xmm3 = MEMF(ebx); /* movss */
    xmm5 = MEMF(ebx + 4); /* movss */
    xmm6 = MEMF(ebx + 8); /* movss */
    xmm3 = xmm3 + MEMF(edi); /* addss */
    xmm5 = xmm5 + MEMF(edi + 4); /* addss */
    xmm6 = xmm6 + MEMF(edi + 8); /* addss */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x18);
    xmm0 = xmm0 + MEMF(eax); /* addss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    xmm2 = xmm2 + MEMF(eax + 8); /* addss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    MEMF(esp + 0xA0) = xmm2; /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm7; /* mulss */
    eax = esp + 0xF4;
    ecx = esp + 0x98;
    edx = esp + 0xA4;
    xmm0 = xmm0 + xmm3; /* addss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm2 = xmm2 + xmm6; /* addss */
    MEMF(esp + 0xF4) = xmm3; /* movss */
    MEMF(esp + 0xF8) = xmm5; /* movss */
    MEMF(esp + 0xFC) = xmm6; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = fabs(fp_top()); /* fabs */
    edx = MEM32(esp + 0x98);
    fp_push(MEMF(0x648D24)); /* fld float */
    ecx = eax + 0xE2C;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x9C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xA0);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    MEM8(eax + 0xE28) = 1;
    MEM32(ecx + 8) = edx;
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0038AD1C; /* jbe: below or equal (unsigned <=) */

loc_0038AD07: ;
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0038AD44; /* ja: above (unsigned >) */

loc_0038AD1C: ;
    ecx = MEM32(esp + 0xAC);
    edx = MEM32(esp + 0xA4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0038AD31: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    MEMF(esi + 0x114) = xmm0; /* movss */

loc_0038AD44: ;
    ecx = MEM32(eax + 0xC70);
    SET_LO8(edx, MEM8(ecx + 0xDC));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0038AD80; /* je: equal / zero */

loc_0038AD54: ;
    fp_push(MEMF(eax + 0x7A0)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0038AD80; /* ja: above (unsigned >) */

loc_0038AD68: ;
    xmm0 = MEMF(eax + 0x7A0); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x114); /* addss */
    MEMF(esi + 0x114) = xmm0; /* movss */

loc_0038AD80: ;
    xmm6 = 0.0f; /* xorps self = zero */
    /* comiss xmm6, MEMF(esi + 0x114) - sets EFLAGS */
    if ((xmm6 <= MEMF(esi + 0x114))) goto loc_0038ADA4; /* jbe: below or equal (unsigned <=) */

loc_0038AD8C: ;
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm0 = xmm0 + MEMF(0x648F60); /* addss */
    MEMF(esi + 0x114) = xmm0; /* movss */

loc_0038ADA4: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(ebp + 0x18);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ebx + 4);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(ebx);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ebx + 8);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(edi + 4);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(edi);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x60) = edx;
    edx = esp + 0x20;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x64) = eax;
    ecx = esp + 0x50;
    eax = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x2C;
    ecx = esp + 0x50;
    eax = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x44;
    ecx = esp + 0x50;
    eax = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x5C;
    ecx = esp + 0x50;
    eax = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm5 = MEMF(0x648E18); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x114); /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0xB4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0038AF19: ;
    esp = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038AF2A: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038AF3F: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038AF54: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038AF69: ;
    ecx = esp + 0x44;
    edx = esp + 0x5C;
    eax = esp + 0x38;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x38;
    edx = ecx;
    MEMF(esp + 0x1C) = xmm4; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ecx;
    ecx = esp + 0x44;
    edx = esp + 0x80;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x20;
    ecx = esp + 0x2C;
    edx = esp + 0x74;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x74;
    ecx = eax;
    MEMF(esp + 0x1C) = xmm4; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    eax = esp + 0x20;
    ecx = esp + 0x8C;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x80;
    eax = esp + 0x8C;
    ecx = esp + 0x38;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0038B12D: ;
    xmm4 = MEMF(0x64934C); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm6; /* movaps */
    esp = esp + 4;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * xmm5; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0xB4;
    MEMF(esi + 0x1C0) = xmm0; /* movss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0038B162: ;
    esp = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038B173: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038B188: ;
    ecx = esp + 0x20;
    edx = esp + 0x2C;
    eax = esp + 0x38;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x3C); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0038B1E0: ;
    xmm0 = xmm0 * xmm4; /* mulss */
    MEMF(esi + 0x1CC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1C0); /* movss */
    esp = esp + 4;
    xmm0 = xmm0 * xmm5; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0x184;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0038B20E: ;
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x144;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0038B22D: ;
    xmm0 = MEMF(esi + 0x1CC); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x104;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0038B24C: ;
    esp = esp + 4;
    edx = esp + 0x140;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    eax = esp + 0x184;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0038B268: ;
    PUSH32(esp, edx);
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0038B277: ;
    PUSH32(esp, edx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = edx;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(ebp + 0x10); /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x74) = xmm6; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038B29F: ;
    esi = esi + 0x78;
    ecx = esp + 0x68;
    edx = esp + 0x50;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0038B2F0
 * Original: 0x0038B2F0 - 0x0038B3D6 (230 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B2F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0038B2F0: ;
    esp = esp - 8;
    edx = MEM32(esp + 0xC);
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
    xmm4 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    MEMF(esp) = xmm0; /* movss */
    if ((xmm0 <= xmm4)) { sub_0038B3D6(); return; } /* jbe: below or equal (unsigned <=) */

loc_0038B338: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x14); /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    if ((xmm2 <= xmm1)) goto loc_0038B38E; /* jbe: below or equal (unsigned <=) */

loc_0038B353: ;
    xmm3 = MEMF(0x648D34); /* movss */
    xmm3 = xmm3 / xmm1; /* divss */
    xmm2 = xmm0; /* movaps */
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 <= xmm3)) goto loc_0038B36A; /* jbe: below or equal (unsigned <=) */

loc_0038B367: ;
    xmm2 = xmm3; /* movaps */

loc_0038B36A: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    MEMF(esp) = xmm0; /* movss */

loc_0038B38E: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0038B39A: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0038B3F0
 * Original: 0x0038B3F0 - 0x0038B63B (587 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038B3F0: ;
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x84);
    eax = ebx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0xC) = edi;
    if (CMP_NE(ebp, edi)) goto loc_0038B428; /* jne: not equal / not zero */

loc_0038B424: ;
    ebp = esp + 0x10;

loc_0038B428: ;
    eax = MEM32(esp + 0x88);
    xmm0 = MEMF(0x648F08); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    xmm1 = xmm1 + xmm0; /* addss */
    ecx = 0x7B2;
    eax = 0x63EC7C;
    MEMF(esp + 0x20) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002A34B0(); /* call 0x002A34B0 */

loc_0038B460: ;
    eax = MEM32(esp + 0x90);
    eax = MEM32(eax + 4);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x48) = edi;
    edi = esi + 0xA0;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0xC61C4000u);
    PUSH32(esp, ecx);
    eax = eax + 0x330;
    ecx = esi;
    MEM32(esp + 0x44) = 0x5D4C44;
    MEM32(esp + 0x98) = 1;
    MEM32(esp + 0x48) = 3;
    MEM32(esp + 0x50) = 0x35;
    PUSH32(esp, 0); sub_0029F6B0(); /* call 0x0029F6B0 */

loc_0038B4B7: ;
    xmm2 = MEMF(esp + 0xAC); /* movss */
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038B585; /* je: equal / zero */

loc_0038B4CB: ;
    xmm0 = MEMF(esi); /* movss */
    xmm1 = MEMF(esp + 0x9C); /* movss */
    xmm3 = MEMF(ebx + 4); /* movss */
    eax = MEM32(esp + 0x88);
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(ebp) = xmm3; /* movss */
    edx = MEM32(edi);
    edx = edx & 0x1E0;
    if (CMP_NE(edx, 0x20)) goto loc_0038B509; /* jne: not equal / not zero */

loc_0038B502: ;
    MEM8(eax + 0xC98) = 1;

loc_0038B509: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm3 = MEMF(esi); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_0038B577; /* jbe: below or equal (unsigned <=) */

loc_0038B522: ;
    xmm3 = xmm3 - MEMF(0x648F08); /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0038B577; /* jbe: below or equal (unsigned <=) */

loc_0038B52F: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp) = xmm0; /* movss */
    ecx = MEM32(edi);
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    (void)0; /* cmp LO8(ecx), 8 - flags set for next jcc */
    MEM32(esp + 0xC) = 1;
    if (CMP_NE(LO8(ecx), 8)) goto loc_0038B561; /* jne: not equal / not zero */

loc_0038B55A: ;
    MEM8(eax + 0xC76) = 1;

loc_0038B561: ;
    edx = MEM32(edi);
    edx = edx & 0x1E0;
    if (CMP_NE(edx, 0x20)) goto loc_0038B57A; /* jne: not equal / not zero */

loc_0038B56E: ;
    MEM8(eax + 0xCA4) = 1;
    goto loc_0038B57A;

loc_0038B577: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0038B57A: ;
    /* comiss xmm0, MEMF(ebp) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp))) goto loc_0038B585; /* jbe: below or equal (unsigned <=) */

loc_0038B580: ;
    MEMF(ebp) = xmm0; /* movss */

loc_0038B585: ;
    eax = esp + 0x20;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x8C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x90);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x88);
    eax = MEM32(edx + 4);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x98);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0); sub_002A2360(); /* call 0x002A2360 */

loc_0038B5E5: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038B610; /* je: equal / zero */

loc_0038B5EC: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = edx;
    MEMF(ebp) = xmm0; /* movss */
    MEM32(esp + 0xC) = 3;

loc_0038B610: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x780AB0) = eax;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    eax = MEM32(esp + 8);
    POP32(esp, ebp);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    eax = eax & 1;
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0038B640
 * Original: 0x0038B640 - 0x0038B699 (89 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038B640: ;
    eax = MEM32(eax + 0x68);
    eax = eax + 0xFFFFFF23u;
    if (CMP_A(eax, 0xC1)) { sub_0038B699(); return; } /* ja: above (unsigned >) */

loc_0038B64F: ;
    ecx = ZX8(MEM8(eax + 0x38B6C8));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x38B69C)); return; /* indirect tail jmp */

    eax = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_0038B790
 * Original: 0x0038B790 - 0x0038BC54 (1220 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B790(void)
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

loc_0038B790: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = ebp | 0xFFFFFFFFu;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x63EAD0;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x1E8) = ebx;
    MEM32(esi + 0xC84) = ebx;
    MEM32(esi + 0xC8C) = 0x63EB54;
    MEM32(esi + 0xC90) = ebx;
    PUSH32(esp, edi);
    MEM8(esi + 0xC98) = LO8(ebx);
    MEMF(esi + 0xC9C) = xmm0; /* movss */
    MEM32(esi + 0xCA0) = 1;
    MEM8(esi + 0xCA4) = LO8(ebx);
    MEMF(esi + 0xCAC) = xmm0; /* movss */
    MEM32(esi + 0xCB0) = ebp;
    MEM32(esi + 0xCB4) = ebp;
    MEM32(esi + 0xCB8) = ebp;
    MEM32(esi + 0xCBC) = ebp;
    MEM32(esi + 0xE10) = ebp;
    MEM32(esi + 0xE14) = ebp;
    MEM32(esi + 0xE18) = ebp;
    MEM32(esi + 0xE1C) = ebp;
    MEM32(esi + 0xE20) = ebp;
    MEM32(esi + 0xE24) = ebp;
    MEMF(esi + 0xE3C) = xmm0; /* movss */
    MEM32(esi + 0xE40) = ebx;
    MEM32(esi + 0xE44) = ebx;
    eax = esi + 0xE48;
    ecx = 0x10;
    /* nop */

loc_0038B850: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    ecx--;
    if ((ecx != 0)) goto loc_0038B850; /* jne: not equal / not zero */

loc_0038B85B: ;
    edi = esi + 0x1F0;
    ecx = 0x160;
    eax = 0; /* xor self */
    MEM8(esi + 0xEC8) = LO8(ebx);
    MEM32(esi + 0xECC) = ebx;
    MEMF(esi + 0xED0) = xmm0; /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    MEMF(esi + 0x18) = xmm0; /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    MEMF(esi + 0x2C) = xmm0; /* movss */
    MEMF(esi + 0x28) = xmm0; /* movss */
    MEMF(esi + 0x24) = xmm0; /* movss */
    MEMF(esi + 0x20) = xmm0; /* movss */
    MEM8(esi + 0x30) = LO8(ebx);
    MEM8(esi + 0x31) = LO8(ebx);
    MEM32(esi + 0x34) = ebp;
    MEM8(esi + 0x7A4) = LO8(ebx);
    MEM8(esi + 0x3C) = LO8(ebx);
    MEMF(esi + 0x50) = xmm0; /* movss */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    MEMF(esi + 0x48) = xmm0; /* movss */
    MEMF(esi + 0x44) = xmm0; /* movss */
    MEM8(esi + 0x55) = LO8(ebx);
    MEM8(esi + 0x54) = LO8(ebx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi + 0x290;
    edi = 8;

loc_0038B8E7: ;
    eax = ecx;
    edx = 3;
    edi = edi;

loc_0038B8F0: ;
    MEM32(eax) = ebp;
    eax = eax + 4;
    edx--;
    MEM32(ecx + 0xC) = ebx;
    if ((edx != 0)) goto loc_0038B8F0; /* jne: not equal / not zero */

loc_0038B8FB: ;
    ecx = ecx + 0xB0;
    edi--;
    if ((edi != 0)) goto loc_0038B8E7; /* jne: not equal / not zero */

loc_0038B904: ;
    ecx = 0; /* xor self */
    MEM8(esi + 0x1EC) = 1;
    MEM8(esi + 0x7A5) = LO8(ebx);
    MEM32(esi + 0xC4C) = ebx;
    MEMF(esi + 0x77C) = xmm0; /* movss */
    MEMF(esi + 0x778) = xmm0; /* movss */
    MEMF(esi + 0x774) = xmm0; /* movss */
    MEMF(esi + 0x770) = xmm0; /* movss */
    MEMF(esi + 0x780) = xmm0; /* movss */
    MEM32(esi + 0x788) = ebx;
    MEM32(esi + 0x78C) = ebx;
    MEMF(esi + 0x798) = xmm0; /* movss */
    MEMF(esi + 0x794) = xmm0; /* movss */
    MEMF(esi + 0x790) = xmm0; /* movss */
    MEMF(esi + 0x79C) = xmm0; /* movss */
    MEMF(esi + 0x7A0) = xmm0; /* movss */
    MEMF(esi + 0xC24) = xmm0; /* movss */
    edx = esi + 0x7A8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    MEM32(edx + 0x24) = ecx;
    eax = 0; /* xor self */
    ecx = 0x114;
    edi = esi + 0x7D0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x49;
    edi = esi + 0xCEC;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    (void)0; /* cmp MEM32(0x84A144), ebx - flags set for next jcc */
    MEM16(esi + 0xD40) = 0xFFFF;
    if (CMP_EQ(MEM32(0x84A144), ebx)) goto loc_0038B9D4; /* je: equal / zero */

loc_0038B9CD: ;
    MEM16(esi + 0xD56) = LO16(ebx);

loc_0038B9D4: ;
    eax = 0; /* xor self */
    ecx = 0x64;
    edi = esi + 0x58;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x14);
    eax = 0xFFFFFFFEu;
    MEM16(esi + 0x32) = LO16(eax);
    MEM32(esi + 0x784) = eax;
    MEM8(esi + 0xC3A) = LO8(ebx);
    MEM8(esi + 0xE28) = LO8(ebx);
    MEMF(esi + 0xE2C) = xmm0; /* movss */
    MEMF(esi + 0xE30) = xmm0; /* movss */
    MEMF(esi + 0xE34) = xmm0; /* movss */
    MEM16(ecx + 0xAC) = LO16(ebx);
    eax = 0; /* xor self */

loc_0038BA20: ;
    edi = MEM32(ecx + 0x68);
    edx = eax;
    edx = edx << 4;
    edx = MEM32(edx + 0x74E6E0);
    if (CMP_NE(edx, edi)) goto loc_0038BA3A; /* jne: not equal / not zero */

loc_0038BA32: ;
    MEM32(esi + 0x40) = eax;
    eax = 0x15;

loc_0038BA3A: ;
    eax++;
    if (CMP_B(eax, 0x15)) goto loc_0038BA20; /* jb: below (unsigned <) */

loc_0038BA40: ;
    edi = MEM32(esp + 0x14);
    xmm1 = MEMF(0x5A005C); /* movss */
    MEM32(edi + 0x570) = esi;
    MEM32(edi + 0x574) = 0x38C720;
    MEM8(esi + 0xC74) = LO8(ebx);
    MEM8(esi + 0xC75) = LO8(ebx);
    MEM8(esi + 0xC28) = LO8(ebx);
    MEMF(esi + 0xC2C) = xmm0; /* movss */
    MEM16(esi + 0xC38) = LO16(ebp);
    MEMF(esi + 0xC20) = xmm1; /* movss */
    MEM8(esi + 0xC58) = LO8(ebx);
    MEM32(esi + 0xCE0) = ebx;
    MEM32(esi + 0xCE8) = ebx;
    MEMF(esi + 0xC68) = xmm0; /* movss */
    /* TODO: rdtsc  */
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0038BAAB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0038BAB8: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0038BAD3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0038BAE5; /* jge: greater or equal (signed >=) */

loc_0038BADF: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0038BAE5: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = 0.0f; /* xorps self = zero */
    (void)0; /* cmp MEM32(0x84A19C), ebx - flags set for next jcc */
    MEMF(esi + 0xC50) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi + 0x5D8) = 0x395520;
    MEM32(esi + 0xC54) = ebp;
    MEM8(esi + 0xC6C) = LO8(ebx);
    MEM8(esi + 0xC6D) = 1;
    MEM16(esi + 0xC6E) = LO16(ebp);
    MEM8(edi + 0xA0) = 1;
    MEMF(esi + 0xC78) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi + 0xC70) = ebx;
    MEM8(esi + 0xC76) = LO8(ebx);
    MEMF(esi + 0xC7C) = xmm0; /* movss */
    MEM32(esi + 0xC80) = 2;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0038BB5A; /* jne: not equal / not zero */

loc_0038BB55: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0038BB5A: ;
    ebp = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    ebp++;
    edx++;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x7FA494) = ebp;
    MEM32(0x7FA4B4) = edx;
    ebp = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0038BBCF; /* je: equal / zero */

loc_0038BB7F: ;
    if (CMP_B(MEM32(eax + 0x80), 0x18)) goto loc_0038BBCF; /* jb: below (unsigned <) */

loc_0038BB88: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = 4;
    if (CMP_EQ(ecx, ebx)) goto loc_0038BBA4; /* je: equal / zero */

loc_0038BB9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0038BB9F: ;
    esp = esp + 8;
    goto loc_0038BBC0;

loc_0038BBA4: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));

loc_0038BBB0: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0038BBB0; /* ja: above (unsigned >) */

loc_0038BBBB: ;
    MEM8(edx) = LO8(eax);
    MEM8(ebp + 0x75) = LO8(eax);

loc_0038BBC0: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0038BBC8: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0038BC1F; /* jne: not equal / not zero */

loc_0038BBCF: ;
    eax = MEM32(0x84A184);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    ebp = eax;
    MEM32(esp + 0x14) = 4;
    if (CMP_EQ(ecx, ebx)) goto loc_0038BBF2; /* je: equal / zero */

loc_0038BBE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0038BBED: ;
    esp = esp + 8;
    goto loc_0038BC10;

loc_0038BBF2: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    edx = eax + 0x76;
    MEM8(edx) = LO8(ebx);
    SET_LO8(eax, LO8(ebx));
    edi = edi;

loc_0038BC00: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0038BC00; /* ja: above (unsigned >) */

loc_0038BC0B: ;
    MEM8(edx) = LO8(eax);
    MEM8(ebp + 0x75) = LO8(eax);

loc_0038BC10: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0038BC18: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0038BC54(); return; } /* je: equal / zero */

loc_0038BC1F: ;
    ecx = MEM32(edi + 0x238);
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(eax) = 0x63AFE8;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x14) = ebx;
    MEM8(ecx + 4) = 1;
    MEM32(eax) = 0x63AFD0;
    g_seh_ebp = ebp; sub_0038BC56(); return; /* tail jmp 0x0038BC56 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0038C130
 * Original: 0x0038C130 - 0x0038C15A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C130(void)
{
    int _flags = 0; /* fallback flag var */

loc_0038C130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0038C160(); /* call 0x0038C160 */

loc_0038C138: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0038C154; /* je: equal / zero */

loc_0038C13F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_0038C154; /* je: equal / zero */

loc_0038C147: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0038C151: ;
    esp = esp + 4;

loc_0038C154: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038C160
 * Original: 0x0038C160 - 0x0038C565 (1029 bytes, 289 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038C160: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xCF4);
    PUSH32(esp, edi);
    edi = esi + 0xCF4;
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esi) = 0x63EAD0;
    if (CMP_EQ(eax, ebp)) goto loc_0038C18C; /* je: equal / zero */

loc_0038C181: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0038C187: ;
    esp = esp + 4;
    MEM32(edi) = ebp;

loc_0038C18C: ;
    eax = MEM32(esi + 0xCFC);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    edi = esi + 0xCFC;
    if (CMP_EQ(eax, ebp)) goto loc_0038C1A7; /* je: equal / zero */

loc_0038C19C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0038C1A2: ;
    esp = esp + 4;
    MEM32(edi) = ebp;

loc_0038C1A7: ;
    eax = MEM32(esi + 0xD04);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    edi = esi + 0xD04;
    if (CMP_EQ(eax, ebp)) goto loc_0038C1C2; /* je: equal / zero */

loc_0038C1B7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0038C1BD: ;
    esp = esp + 4;
    MEM32(edi) = ebp;

loc_0038C1C2: ;
    eax = MEM32(esi + 0xD0C);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    edi = esi + 0xD0C;
    if (CMP_EQ(eax, ebp)) goto loc_0038C1DD; /* je: equal / zero */

loc_0038C1D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0038C1D8: ;
    esp = esp + 4;
    MEM32(edi) = ebp;

loc_0038C1DD: ;
    SET_LO8(eax, MEM8(esi + 0x55));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0038C24B; /* jle: less or equal (signed <=) */

loc_0038C1E4: ;
    ebx = esi + 0xD14;
    /* nop */

loc_0038C1F0: ;
    edi = MEM32(ebx);
    if (TEST_Z(edi, edi)) goto loc_0038C23D; /* je: equal / zero */

loc_0038C1F6: ;
    SET_LO8(eax, MEM8(0x7819D1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038C237; /* jne: not equal / not zero */

loc_0038C1FF: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038C237; /* jne: not equal / not zero */

loc_0038C208: ;
    edx = edi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0038C20F: ;
    eax = MEM32(edi);
    if (CMP_L(eax, 2)) goto loc_0038C237; /* jl: less (signed <) */

loc_0038C216: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0038C22B; /* je: equal / zero */

loc_0038C223: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0038C226: ;
    esp = esp + 4;
    goto loc_0038C237;

loc_0038C22B: ;
    edx = 1;
    eax = edi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0038C237: ;
    MEM32(ebx) = 0;

loc_0038C23D: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x55);
    ebp++;
    ebx = ebx + 4;
    if (CMP_L(ebp, eax)) goto loc_0038C1F0; /* jl: less (signed <) */

loc_0038C249: ;
    ebp = 0; /* xor self */

loc_0038C24B: ;
    if (CMP_EQ(MEM32(esi + 0xD3C), ebp)) goto loc_0038C2CE; /* je: equal / zero */

loc_0038C253: ;
    SET_LO16(eax, MEM16(esi + 0xD40));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    ebx = MEM32(0x771B78);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0038C2C3; /* je: equal / zero */

loc_0038C266: ;
    eax = ZX16(LO16(eax));
    edi = eax;
    edi = edi >> 0xC;
    eax = eax & 0xFFF;
    ebp = edi;
    ebp = ebp << 5;
    edx = eax + ebp;
    ecx = ebx + edx * 4 + 0x31C;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ecx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(ecx, ecx)) goto loc_0038C2A3; /* je: equal / zero */

loc_0038C294: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_0038C29B: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);

loc_0038C2A3: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = 0;
    ecx = MEM32(ebx + edi * 4 + 4);
    ecx = ecx + ebp;
    MEM32(ebx + ecx * 4 + 0x1C) = eax;
    MEM32(ebx + edi * 4 + 4) = MEM32(ebx + edi * 4 + 4) + 1;
    MEM8(edx + ebx + 0x61C) = 0;

loc_0038C2C3: ;
    MEM16(esi + 0xD40) = 0xFFFF;
    ebp = 0; /* xor self */

loc_0038C2CE: ;
    eax = MEM32(esi + 0xDF4);
    if (CMP_EQ(eax, ebp)) goto loc_0038C31B; /* je: equal / zero */

loc_0038C2D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0038C2DE: ;
    if (TEST_NZ(eax, eax)) goto loc_0038C315; /* jne: not equal / not zero */

loc_0038C2E2: ;
    eax = MEM32(esi + 0xDF4);
    if (CMP_EQ(eax, ebp)) goto loc_0038C315; /* je: equal / zero */

loc_0038C2EC: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0038C30C: ;
    esp = esp + 4;
    MEM32(esi + 0xDF4) = ebp;

loc_0038C315: ;
    MEM32(esi + 0xDF4) = ebp;

loc_0038C31B: ;
    eax = MEM32(esi + 0xDFC);
    if (CMP_EQ(eax, ebp)) goto loc_0038C368; /* je: equal / zero */

loc_0038C325: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0038C32B: ;
    if (TEST_NZ(eax, eax)) goto loc_0038C362; /* jne: not equal / not zero */

loc_0038C32F: ;
    eax = MEM32(esi + 0xDFC);
    if (CMP_EQ(eax, ebp)) goto loc_0038C362; /* je: equal / zero */

loc_0038C339: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0038C359: ;
    esp = esp + 4;
    MEM32(esi + 0xDFC) = ebp;

loc_0038C362: ;
    MEM32(esi + 0xDFC) = ebp;

loc_0038C368: ;
    eax = MEM32(esi + 0xCE8);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = esi + 0xCE8;
    if (TEST_Z(eax, eax)) goto loc_0038C388; /* je: equal / zero */

loc_0038C378: ;
    PUSH32(esp, 0); sub_0032D490(); /* call 0x0032D490 */

loc_0038C37D: ;
    PUSH32(esp, 0); sub_0032D540(); /* call 0x0032D540 */

loc_0038C382: ;
    MEM32(ebx) = 0;

loc_0038C388: ;
    eax = MEM32(esi + 0xCE0);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = esi + 0xCE0;
    if (TEST_Z(eax, eax)) goto loc_0038C3A8; /* je: equal / zero */

loc_0038C398: ;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_0038C39D: ;
    PUSH32(esp, 0); sub_002F9630(); /* call 0x002F9630 */

loc_0038C3A2: ;
    MEM32(ebx) = 0;

loc_0038C3A8: ;
    eax = MEM32(esi + 0x1E8);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_0038C3F7; /* je: equal / zero */

loc_0038C3B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0038C3BA: ;
    if (TEST_NZ(eax, eax)) goto loc_0038C3F1; /* jne: not equal / not zero */

loc_0038C3BE: ;
    eax = MEM32(esi + 0x1E8);
    if (CMP_EQ(eax, ebp)) goto loc_0038C3F1; /* je: equal / zero */

loc_0038C3C8: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0038C3E8: ;
    esp = esp + 4;
    MEM32(esi + 0x1E8) = ebp;

loc_0038C3F1: ;
    MEM32(esi + 0x1E8) = ebp;

loc_0038C3F7: ;
    eax = MEM32(esi + 0xC70);
    if (CMP_EQ(eax, ebp)) goto loc_0038C43E; /* je: equal / zero */

loc_0038C401: ;
    ebx = eax + -12;
    ecx = ebx;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0038C410: ;
    edi = eax;
    if (CMP_EQ(edi, ebp)) goto loc_0038C438; /* je: equal / zero */

loc_0038C416: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebp)) goto loc_0038C41F; /* je: equal / zero */

loc_0038C41B: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0038C41F: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebp))) goto loc_0038C438; /* jne: not equal / not zero */

loc_0038C425: ;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0038C42E: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0038C438: ;
    MEM32(esi + 0xC70) = ebp;

loc_0038C43E: ;
    eax = MEM32(esi + 0xCB0);
    edi = esi + 0xCB0;
    ebp = ebp | 0xFFFFFFFFu;
    if (CMP_EQ(eax, ebp)) goto loc_0038C46C; /* je: equal / zero */

loc_0038C451: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(esi + 0xCB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0038C466: ;
    MEM32(esi + 0xCB4) = ebp;

loc_0038C46C: ;
    eax = MEM32(esi + 0xCB8);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    edi = esi + 0xCB8;
    if (CMP_EQ(eax, ebp)) goto loc_0038C497; /* je: equal / zero */

loc_0038C47C: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    ecx = MEM32(esi + 0xCBC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0038C491: ;
    MEM32(esi + 0xCBC) = ebp;

loc_0038C497: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    ebx = esi + 0xE14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xE10);
    edi = ebx;
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0038C4B3: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(esi + 0xE18);
    edi = esi + 0xE1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0038C4CE: ;
    eax = MEM32(esi + 4);
    MEM32(ebx) = ebp;
    MEM32(esi + 0xE10) = ebp;
    MEM32(edi) = ebp;
    MEM32(esi + 0xE18) = ebp;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_0038C4E6: ;
    if (CMP_NE(eax, 7)) goto loc_0038C509; /* jne: not equal / not zero */

loc_0038C4EB: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, 0x41100000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0xA7);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0001F5F0(); /* call 0x0001F5F0 */

loc_0038C509: ;
    ecx = MEM32(esi + 0xC84);
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_0038C51B; /* je: equal / zero */

loc_0038C515: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0038C51B: ;
    ecx = MEM32(esi + 0xC88);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esi + 0xC84) = edi;
    if (CMP_EQ(ecx, edi)) goto loc_0038C531; /* je: equal / zero */

loc_0038C52B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0038C531: ;
    ecx = MEM32(esi + 0xCA8);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esi + 0xC88) = edi;
    if (CMP_EQ(ecx, edi)) goto loc_0038C547; /* je: equal / zero */

loc_0038C541: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0038C547: ;
    MEM32(esi + 0xCA8) = edi;
    POP32(esp, edi);
    MEM32(esi + 0xC8C) = 0x63EB54;
    MEM32(esi) = 0x64218C;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0038C570
 * Original: 0x0038C570 - 0x0038C5BF (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C570(void)
{

loc_0038C570: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = esi + 0xE14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xE10);
    edi = ebx;
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0038C58E: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(esi + 0xE18);
    edi = esi + 0xE1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_0038C5A9: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(edi) = eax;
    POP32(esp, edi);
    MEM32(ebx) = eax;
    MEM32(esi + 0xE10) = eax;
    MEM32(esi + 0xE18) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038C5C0
 * Original: 0x0038C5C0 - 0x0038C5E8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C5C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0038C5C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0038C5E8(); return; } /* jne: not equal / not zero */

loc_0038C5D4: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0038C5E8(); return; } /* je: equal / zero */

loc_0038C5DD: ;
    PUSH32(esp, 0); sub_0038C570(); /* call 0x0038C570 */

loc_0038C5E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0038C720
 * Original: 0x0038C720 - 0x0038C730 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C720(void)
{
    int _flags = 0; /* fallback flag var */

loc_0038C720: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0038C72F; /* je: equal / zero */

loc_0038C728: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x6C), _icall_esp); /* indirect call */
    }

loc_0038C72F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038C760
 * Original: 0x0038C760 - 0x0038C7A5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0038C760: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC;
    eax = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x570);
    if (TEST_Z(esi, esi)) goto loc_0038C79E; /* je: equal / zero */

loc_0038C779: ;
    edx = esi + 0xDB0;
    MEM32(esi + 0xDA8) = 0xA;
    MEM32(esi + 0xDAC) = edx;
    PUSH32(esp, 0); sub_00393BD0(); /* call 0x00393BD0 */

loc_0038C794: ;
    MEM32(esi + 0xD3C) = 1;

loc_0038C79E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038C7B0
 * Original: 0x0038C7B0 - 0x0038D0C2 (2322 bytes, 634 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C7B0(void)
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

loc_0038C7B0: ;
    SET_LO8(eax, MEM8(0x84B374));
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    ebx = MEM32(edi + 0x570);
    ebp = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038C87B; /* je: equal / zero */

loc_0038C7D0: ;
    if (CMP_EQ(ebx, ebp)) goto loc_0038D0BA; /* je: equal / zero */

loc_0038C7D8: ;
    SET_LO8(eax, MEM8(ebx + 0x3C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038D0BA; /* je: equal / zero */

loc_0038C7E3: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x24), _icall_esp); /* indirect call */
    }

loc_0038C7EB: ;
    esi = ebx;
    PUSH32(esp, 0); sub_003965A0(); /* call 0x003965A0 */

loc_0038C7F2: ;
    PUSH32(esp, 0); sub_00397730(); /* call 0x00397730 */

loc_0038C7F7: ;
    PUSH32(esp, 0); sub_00397770(); /* call 0x00397770 */

loc_0038C7FC: ;
    esi = edi;
    edi = ebx;
    PUSH32(esp, 0); sub_00388A80(); /* call 0x00388A80 */

loc_0038C805: ;
    ecx = MEM32(esp + 0x50);
    ebp = MEM32(ecx + 0x570);
    if (TEST_Z(ebp, ebp)) goto loc_0038D0BA; /* je: equal / zero */

loc_0038C817: ;
    SET_LO8(eax, MEM8(0x84B374));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + 0x3C) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038D0A8; /* je: equal / zero */

loc_0038C828: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038CA40; /* je: equal / zero */

loc_0038C835: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038CA40; /* jne: not equal / not zero */

loc_0038C842: ;
    SET_LO8(eax, MEM8(0x864EC2));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0038CA40; /* jle: less or equal (signed <=) */

loc_0038C84F: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0038C854: ;
    fp_push(MEMF(ebp + 0xC50)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0038CA4B; /* jbe: below or equal (unsigned <=) */

loc_0038C86C: ;
    MEM32(ebp + 0xC90) = 1;
    goto loc_0038CA4B;

loc_0038C87B: ;
    if (CMP_EQ(ebx, ebp)) goto loc_0038D0BA; /* je: equal / zero */

loc_0038C883: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002B21B0(); /* call 0x002B21B0 */

loc_0038C889: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038C8CA; /* jne: not equal / not zero */

loc_0038C890: ;
    SET_LO8(eax, MEM8(ebx + 0xC74));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038C8A9; /* jne: not equal / not zero */

loc_0038C89A: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0038C8A2: ;
    MEM8(ebx + 0xC74) = 1;

loc_0038C8A9: ;
    SET_LO8(eax, MEM8(ebx + 0xC75));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038C8CA; /* jne: not equal / not zero */

loc_0038C8B3: ;
    if (CMP_EQ(MEM32(edi + 0x3C8), ebp)) goto loc_0038C8CA; /* je: equal / zero */

loc_0038C8BB: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0038C8C3: ;
    MEM8(ebx + 0xC75) = 1;

loc_0038C8CA: ;
    SET_LO8(eax, MEM8(ebx + 0xC6C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038C9F0; /* jne: not equal / not zero */

loc_0038C8DB: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038C940; /* je: equal / zero */

loc_0038C8E4: ;
    xmm1 = MEMF(ebx + 0xC68); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0038C940; /* jbe: below or equal (unsigned <=) */

loc_0038C8F1: ;
    eax = MEM32(ebx + 0x1F0);
    if (CMP_EQ(eax, ebp)) goto loc_0038C940; /* je: equal / zero */

loc_0038C8FB: ;
    eax = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0); sub_0004DFE0(); /* call 0x0004DFE0 */

loc_0038C904: ;
    MEMF(eax + 0x12C) = xmm0; /* movss */
    MEMF(eax + 0x138) = xmm0; /* movss */
    MEMF(eax + 0x130) = xmm0; /* movss */
    MEMF(eax + 0x13C) = xmm0; /* movss */
    MEMF(eax + 0x144) = xmm0; /* movss */
    MEMF(eax + 0x148) = xmm0; /* movss */
    MEM32(eax + 0x164) = ebp;
    MEM32(eax + 0x168) = ebp;

loc_0038C940: ;
    eax = MEM32(ebx + 0x1F0);
    if (CMP_EQ(eax, ebp)) goto loc_0038C956; /* je: equal / zero */

loc_0038C94A: ;
    eax = MEM32(eax + 0x568);
    MEM32(eax + 0x1F8) = ebp;

loc_0038C956: ;
    eax = MEM32(ebx + 0x1F0);
    if (CMP_EQ(eax, ebp)) goto loc_0038C96C; /* je: equal / zero */

loc_0038C960: ;
    ecx = MEM32(eax + 0x568);
    MEM32(ecx + 0x1F8) = ebp;

loc_0038C96C: ;
    eax = MEM32(ebx + 0x1F0);
    if (CMP_EQ(eax, ebp)) goto loc_0038C982; /* je: equal / zero */

loc_0038C976: ;
    edx = MEM32(eax + 0x568);
    MEM32(edx + 0x1F8) = ebp;

loc_0038C982: ;
    eax = MEM32(ebx + 0x1F0);
    if (CMP_EQ(eax, ebp)) goto loc_0038C998; /* je: equal / zero */

loc_0038C98C: ;
    eax = MEM32(eax + 0x568);
    MEM32(eax + 0x1F8) = ebp;

loc_0038C998: ;
    eax = MEM32(ebx + 0x1F0);
    if (CMP_EQ(eax, ebp)) goto loc_0038C9AE; /* je: equal / zero */

loc_0038C9A2: ;
    ecx = MEM32(eax + 0x568);
    MEM32(ecx + 0x1F8) = ebp;

loc_0038C9AE: ;
    eax = MEM32(ebx + 0x1F0);
    if (CMP_EQ(eax, ebp)) goto loc_0038C9C4; /* je: equal / zero */

loc_0038C9B8: ;
    edx = MEM32(eax + 0x568);
    MEM32(edx + 0x1F8) = ebp;

loc_0038C9C4: ;
    eax = MEM32(ebx + 0x1F0);
    if (CMP_EQ(eax, ebp)) goto loc_0038C9DA; /* je: equal / zero */

loc_0038C9CE: ;
    eax = MEM32(eax + 0x568);
    MEM32(eax + 0x1F8) = ebp;

loc_0038C9DA: ;
    eax = MEM32(ebx + 0x1F0);
    if (CMP_EQ(eax, ebp)) goto loc_0038C9F0; /* je: equal / zero */

loc_0038C9E4: ;
    ecx = MEM32(eax + 0x568);
    MEM32(ecx + 0x1F8) = ebp;

loc_0038C9F0: ;
    xmm1 = MEMF(ebx + 0xC68); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0038CA1A; /* jbe: below or equal (unsigned <=) */

loc_0038C9FD: ;
    xmm1 = xmm1 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0xC68) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0038CA1A; /* jbe: below or equal (unsigned <=) */

loc_0038CA12: ;
    MEMF(ebx + 0xC68) = xmm0; /* movss */

loc_0038CA1A: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x20), _icall_esp); /* indirect call */
    }

loc_0038CA22: ;
    esi = ebx;
    PUSH32(esp, 0); sub_003961B0(); /* call 0x003961B0 */

loc_0038CA29: ;
    if (CMP_EQ(MEM32(ebx + 0xC4C), ebp)) goto loc_0038C805; /* je: equal / zero */

loc_0038CA35: ;
    MEM32(ebx + 0xC4C) = ebp;
    goto loc_0038C805;

loc_0038CA40: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0038CA45: ;
    MEMF(ebp + 0xC50) = (float)fp_top(); fp_popp(); /* fstp */

loc_0038CA4B: ;
    eax = ebp + 0xC8C;
    PUSH32(esp, 0); sub_00397500(); /* call 0x00397500 */

loc_0038CA56: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0038CBBC; /* jne: not equal / not zero */

loc_0038CA5E: ;
    edx = ebp;
    PUSH32(esp, 0); sub_0038F8B0(); /* call 0x0038F8B0 */

loc_0038CA65: ;
    if (TEST_Z(eax, eax)) goto loc_0038CCB9; /* je: equal / zero */

loc_0038CA6D: ;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0038CCB9; /* jle: less or equal (signed <=) */

loc_0038CA82: ;
    MEM32(esp + 0x14) = 0x864EC8;
    /* nop */

loc_0038CA90: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0038CB91; /* je: equal / zero */

loc_0038CA9C: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0038CAAA; /* jne: not equal / not zero */

loc_0038CAA5: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0038CAAA: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0038CAF2; /* je: equal / zero */

loc_0038CAD0: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0038CAF2; /* jb: below (unsigned <) */

loc_0038CAD9: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0038CAE3: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0038CAEB: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0038CB13; /* jne: not equal / not zero */

loc_0038CAF2: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0038CB04: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0038CB0C: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0038CB1C; /* je: equal / zero */

loc_0038CB13: ;
    PUSH32(esp, 0); sub_00388940(); /* call 0x00388940 */

loc_0038CB18: ;
    ebx = eax;
    goto loc_0038CB1E;

loc_0038CB1C: ;
    ebx = 0; /* xor self */

loc_0038CB1E: ;
    edx = MEM32(esp + 0x50);
    SET_LO16(eax, MEM16(edx + 0xAC));
    MEM16(ebx + 0x36) = LO16(eax);
    eax = MEM32(ebp + 0xC90);
    eax--;
    if ((eax == 0)) goto loc_0038CB3F; /* je: equal / zero */

loc_0038CB36: ;
    eax--;
    if ((eax != 0)) goto loc_0038CB3F; /* jne: not equal / not zero */

loc_0038CB39: ;
    MEM8(ebx + 0x34) = 3;
    goto loc_0038CB43;

loc_0038CB3F: ;
    MEM8(ebx + 0x34) = 2;

loc_0038CB43: ;
    edi = ebx + 0x44;
    esi = ebx + 0x40;
    MEM32(edi) = 0xFFFFFFFFu;
    MEM16(esi) = 0xFFFF;
    eax = MEM32(ebp + 0xC54);
    if (TEST_S(eax, eax)) goto loc_0038CB71; /* jl: less (signed <) */

loc_0038CB5E: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    PUSH32(esp, 0); sub_00289590(); /* call 0x00289590 */

loc_0038CB71: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    esi = ebx;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0038CB7F: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x9DC);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0038CB91: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    edx = edx + 0xA50;
    MEM32(esp + 0x14) = edx;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, edx)) goto loc_0038CA90; /* jl: less (signed <) */

loc_0038CBB7: ;
    goto loc_0038CCB9;

loc_0038CBBC: ;
    if (CMP_NE(MEM32(ebp + 0xC90), 3)) goto loc_0038CCB9; /* jne: not equal / not zero */

loc_0038CBC9: ;
    edx = ebp;
    PUSH32(esp, 0); sub_0038F8B0(); /* call 0x0038F8B0 */

loc_0038CBD0: ;
    if (TEST_Z(eax, eax)) goto loc_0038CCB9; /* je: equal / zero */

loc_0038CBD8: ;
    SET_LO8(eax, MEM8(0x864EC1));
    ebx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0038CCB9; /* jle: less or equal (signed <=) */

loc_0038CBE7: ;
    MEM32(esp + 0x18) = 0x8658A4;
    /* nop */

loc_0038CBF0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0038CBFE; /* jne: not equal / not zero */

loc_0038CBF9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0038CBFE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0038CC46; /* je: equal / zero */

loc_0038CC24: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_0038CC46; /* jb: below (unsigned <) */

loc_0038CC2D: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0038CC37: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0038CC3F: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0038CC67; /* jne: not equal / not zero */

loc_0038CC46: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0038CC58: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0038CC60: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0038CC70; /* je: equal / zero */

loc_0038CC67: ;
    PUSH32(esp, 0); sub_00388940(); /* call 0x00388940 */

loc_0038CC6C: ;
    esi = eax;
    goto loc_0038CC72;

loc_0038CC70: ;
    esi = 0; /* xor self */

loc_0038CC72: ;
    eax = MEM32(esp + 0x50);
    SET_LO16(ecx, MEM16(eax + 0xAC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM16(esi + 0x36) = LO16(ecx);
    MEM8(esi + 0x34) = 4;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0038CC91: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0038CC9F: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    ebx++;
    edi = edi + 0xA50;
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(ebx, ecx)) goto loc_0038CBF0; /* jl: less (signed <) */

loc_0038CCB9: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(edx + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_0038CCC8: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + 0xC90);
    if (CMP_EQ(eax, 2)) goto loc_0038CCE0; /* je: equal / zero */

loc_0038CCD7: ;
    if (CMP_NE(eax, 3)) goto loc_0038CDEB; /* jne: not equal / not zero */

loc_0038CCE0: ;
    SET_LO8(eax, MEM8(ebp + 0xC6C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038CE30; /* jne: not equal / not zero */

loc_0038CCEE: ;
    SET_LO8(ecx, MEM8(ebp + 0x1EC));
    eax = 0; /* xor self */
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0038CD14; /* jle: less or equal (signed <=) */

loc_0038CCFA: ;
    edx = SX8(LO8(ecx));
    ecx = ebp + 0x1F0;

loc_0038CD03: ;
    esi = MEM32(ecx);
    MEM32(esp + eax * 4 + 0x2C) = esi;
    eax++;
    ecx = ecx + 0xB0;
    if (CMP_L(eax, edx)) goto loc_0038CD03; /* jl: less (signed <) */

loc_0038CD14: ;
    edx = ebp;
    PUSH32(esp, 0); sub_0038F8B0(); /* call 0x0038F8B0 */

loc_0038CD1B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x1EC));
    MEM8(esp + 0x13) = (TEST_NZ(eax, eax)) ? 1 : 0; /* setne */
    edi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0038CE30; /* jle: less or equal (signed <=) */

loc_0038CD36: ;
    ebx = MEM32(esp + 0x50);
    eax = ebp + 0x1F0;
    MEM32(esp + 0x14) = eax;

loc_0038CD44: ;
    esi = MEM32(esp + edi * 4 + 0x2C);
    if (TEST_Z(esi, esi)) goto loc_0038CDC7; /* je: equal / zero */

loc_0038CD4C: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0038DEC0(); /* call 0x0038DEC0 */

loc_0038CD53: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = 0;
    eax = MEM32(ebp + 0xC54);
    if (TEST_S(eax, eax)) goto loc_0038CD8F; /* jl: less (signed <) */

loc_0038CD67: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(eax + edx + 0x64);
    eax = eax + edx;
    if (CMP_NE(ecx, 1)) goto loc_0038CD8F; /* jne: not equal / not zero */

loc_0038CD7E: ;
    edi = MEM32(ebx + 0x23C);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_0038CD89: ;
    edi = MEM32(esp + 0x18);
    goto loc_0038CDAA;

loc_0038CD8F: ;
    eax = MEM32(ebx + 0x23C);
    MEM8(eax + 0x10) = 0;
    MEM8(eax + 8) = 0;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;

loc_0038CDAA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038CDC7; /* je: equal / zero */

loc_0038CDB2: ;
    eax = ZX16(MEM16(ebx + 0x60));
    PUSH32(esp, 1);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0);
    PUSH32(esp, 0x73);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F06F0(); /* call 0x002F06F0 */

loc_0038CDC4: ;
    esp = esp + 0x14;

loc_0038CDC7: ;
    ecx = MEM32(esp + 0x14);
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x1EC);
    edi++;
    ecx = ecx + 0xB0;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(edi, edx)) goto loc_0038CD44; /* jl: less (signed <) */

loc_0038CDE9: ;
    goto loc_0038CE30;

loc_0038CDEB: ;
    if (CMP_NE(MEM32(ebp + 0xC90), 1)) goto loc_0038CE30; /* jne: not equal / not zero */

loc_0038CDF4: ;
    SET_LO8(eax, MEM8(ebp + 0x1EC));
    ebx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0038CE30; /* jle: less or equal (signed <=) */

loc_0038CE00: ;
    edi = ebp + 0x1F0;

loc_0038CE06: ;
    esi = MEM32(edi);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0038CE0D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038CE18; /* je: equal / zero */

loc_0038CE11: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0038DEC0(); /* call 0x0038DEC0 */

loc_0038CE18: ;
    MEM32(edi) = 0;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x1EC);
    ebx++;
    edi = edi + 0xB0;
    if (CMP_L(ebx, eax)) goto loc_0038CE06; /* jl: less (signed <) */

loc_0038CE30: ;
    if (CMP_NE(MEM32(ebp + 0xC90), 3)) goto loc_0038CE43; /* jne: not equal / not zero */

loc_0038CE39: ;
    MEM32(ebp + 0xC90) = 4;

loc_0038CE43: ;
    eax = MEM32(ebp + 0xC90);
    if (CMP_A(eax, 4)) goto loc_0038D0BA; /* ja: above (unsigned >) */

loc_0038CE52: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x38D0C4); /* switch: 5 entries, 2 targets */
    if (_jt == 0x0038CE59u) goto loc_0038CE59;
    if (_jt == 0x0038D0BAu) goto loc_0038D0BA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0038CE59: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x64), _icall_esp); /* indirect call */
    }

loc_0038CE61: ;
    SET_LO8(eax, MEM8(ebp + 0x1EC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0038CEE7; /* jle: less or equal (signed <=) */

loc_0038CE73: ;
    ebx = ebp + 0x1F0;
    /* nop */

loc_0038CE80: ;
    esi = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0038CE88: ;
    if (TEST_NZ(eax, eax)) goto loc_0038CEC7; /* jne: not equal / not zero */

loc_0038CE8C: ;
    edi = MEM32(0x84A5F8);
    if (CMP_B(esi, edi)) goto loc_0038CEC7; /* jb: below (unsigned <) */

loc_0038CE96: ;
    eax = edi + 0x36ED0;
    if (CMP_A(esi, eax)) goto loc_0038CEC7; /* ja: above (unsigned >) */

loc_0038CEA0: ;
    ecx = esi;
    ecx = ecx - edi;
    eax = 0x2C9FB4D9;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = ecx - edx;
    ecx = ecx >> 1;
    ecx = ecx + edx;
    ecx = ecx >> 0xA;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + edi;
    if (CMP_NE(esi, ecx)) goto loc_0038CEC7; /* jne: not equal / not zero */

loc_0038CEC0: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0038DEC0(); /* call 0x0038DEC0 */

loc_0038CEC7: ;
    eax = MEM32(esp + 0x18);
    MEM32(ebx) = 0;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x1EC);
    eax++;
    ebx = ebx + 0xB0;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_0038CE80; /* jl: less (signed <) */

loc_0038CEE7: ;
    if (CMP_NE(MEM32(ebp + 0xC90), 2)) goto loc_0038D083; /* jne: not equal / not zero */

loc_0038CEF4: ;
    SET_LO8(ebx, MEM8(ebp + 0xCA4));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ebx = MEM32(esp + 0x50);
    SET_LO8(edx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    eax = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001B4A70(); /* call 0x001B4A70 */

loc_0038CF0B: ;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(ebp + 0xC54);
    esp = esp + 4;
    if (TEST_S(eax, eax)) goto loc_0038CF32; /* jl: less (signed <) */

loc_0038CF20: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    MEM32(esp + 0x50) = eax;

loc_0038CF32: ;
    esi = ebx + 0x78;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_0038CF64: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_0038CF7D; /* je: equal / zero */

loc_0038CF6D: ;
    /* nop */

loc_0038CF70: ;
    if (CMP_EQ(MEM32(eax + 4), 0x2E)) goto loc_0038CF7F; /* je: equal / zero */

loc_0038CF76: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_0038CF70; /* jne: not equal / not zero */

loc_0038CF7D: ;
    eax = ecx;

loc_0038CF7F: ;
    if (CMP_NE(eax, ecx)) goto loc_0038CF87; /* jne: not equal / not zero */

loc_0038CF83: ;
    eax = 0; /* xor self */
    goto loc_0038CF89;

loc_0038CF87: ;
    eax = MEM32(eax);

loc_0038CF89: ;
    edi = MEM32(eax);
    if (TEST_Z(edi, edi)) goto loc_0038CFEE; /* je: equal / zero */

loc_0038CF8F: ;
    SET_LO8(eax, MEM8(edi + 6));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038CFB2; /* jne: not equal / not zero */

loc_0038CF96: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038CFB2; /* jne: not equal / not zero */

loc_0038CF9F: ;
    eax = 0x14;
    MEM16(0x743E3E) = LO16(eax);
    MEM16(0x743E0E) = LO16(eax);
    goto loc_0038CFE8;

loc_0038CFB2: ;
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0038CFC0: ;
    MEM16(0x743E3E) = LO16(eax);
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0038CFD4: ;
    MEM16(0x743E0E) = LO16(eax);
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0038CFE8: ;
    MEM16(0x744B5E) = LO16(eax);

loc_0038CFEE: ;
    edx = MEM32(0x7FDBA8);
    eax = MEM32(esp + 0x50);
    edx++;
    edi = edi | 0xFFFFFFFFu;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x7FDBAC) = 1;
    MEM32(0x7FDBA8) = edx;
    if (TEST_Z(eax, eax)) goto loc_0038D011; /* je: equal / zero */

loc_0038D00D: ;
    edi = ZX16(MEM16(eax + 0x60));

loc_0038D011: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2E);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x16);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_0038D032: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2E);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x15);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_0038D053: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    esp = esp + 0x58;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2E);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_0038D077: ;
    esp = esp + 0x2C;
    MEM8(0x7FDBAC) = 0;
    goto loc_0038D087;

loc_0038D083: ;
    ebx = MEM32(esp + 0x50);

loc_0038D087: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xAC);
    PUSH32(esp, 0); sub_002624A0(); /* call 0x002624A0 */

loc_0038D093: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_0038D09D: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

loc_0038D0A8: ;
    SET_LO8(eax, MEM8(ebp + 0x7A4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038D0BA; /* je: equal / zero */

loc_0038D0B2: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebp + 0x7A4) = LO8(eax);

loc_0038D0BA: ;
    POP32(esp, edi);
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
 * sub_0038D0E0
 * Original: 0x0038D0E0 - 0x0038D229 (329 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038D0E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038D0E0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_0038D227; /* jne: not equal / not zero */

loc_0038D0F1: ;
    eax = MEM32(edi + 0x68);
    eax = eax + 0xFFFFFF23u;
    if (CMP_A(eax, 0xC1)) goto loc_0038D227; /* ja: above (unsigned >) */

loc_0038D104: ;
    eax = ZX8(MEM8(eax + 0x38D258));
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x38D22C); /* switch: 11 entries, 11 targets */
    if (_jt == 0x0038D113u) goto loc_0038D113;
    if (_jt == 0x0038D131u) goto loc_0038D131;
    if (_jt == 0x0038D14Eu) goto loc_0038D14E;
    if (_jt == 0x0038D16Bu) goto loc_0038D16B;
    if (_jt == 0x0038D18Au) goto loc_0038D18A;
    if (_jt == 0x0038D1A7u) goto loc_0038D1A7;
    if (_jt == 0x0038D1C2u) goto loc_0038D1C2;
    if (_jt == 0x0038D1DBu) goto loc_0038D1DB;
    if (_jt == 0x0038D1F6u) goto loc_0038D1F6;
    if (_jt == 0x0038D20Fu) goto loc_0038D20F;
    if (_jt == 0x0038D226u) goto loc_0038D226;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0038D113: ;
    PUSH32(esp, 0x12A0);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038D11D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038D226; /* je: equal / zero */

loc_0038D128: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003A2CE0(); /* call 0x003A2CE0 */

loc_0038D12E: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0038D131: ;
    PUSH32(esp, 0x13C0);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038D13B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038D226; /* je: equal / zero */

loc_0038D146: ;
    PUSH32(esp, 0); sub_003A8410(); /* call 0x003A8410 */

loc_0038D14B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0038D14E: ;
    PUSH32(esp, 0x13B0);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038D158: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038D226; /* je: equal / zero */

loc_0038D163: ;
    PUSH32(esp, 0); sub_003A2750(); /* call 0x003A2750 */

loc_0038D168: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0038D16B: ;
    PUSH32(esp, 0x17D0);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038D175: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038D226; /* je: equal / zero */

loc_0038D180: ;
    esi = eax;
    PUSH32(esp, 0); sub_003ADF10(); /* call 0x003ADF10 */

loc_0038D187: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0038D18A: ;
    PUSH32(esp, 0x1380);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038D194: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038D226; /* je: equal / zero */

loc_0038D19F: ;
    PUSH32(esp, 0); sub_0039D660(); /* call 0x0039D660 */

loc_0038D1A4: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0038D1A7: ;
    PUSH32(esp, 0x13C0);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038D1B1: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038D226; /* je: equal / zero */

loc_0038D1B8: ;
    esi = eax;
    PUSH32(esp, 0); sub_003A8CE0(); /* call 0x003A8CE0 */

loc_0038D1BF: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0038D1C2: ;
    PUSH32(esp, 0xF80);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038D1CC: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038D226; /* je: equal / zero */

loc_0038D1D3: ;
    PUSH32(esp, 0); sub_003B2060(); /* call 0x003B2060 */

loc_0038D1D8: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0038D1DB: ;
    PUSH32(esp, 0x1270);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038D1E5: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038D226; /* je: equal / zero */

loc_0038D1EC: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003AB3D0(); /* call 0x003AB3D0 */

loc_0038D1F3: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0038D1F6: ;
    PUSH32(esp, 0xF80);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038D200: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038D226; /* je: equal / zero */

loc_0038D207: ;
    PUSH32(esp, 0); sub_003B0CD0(); /* call 0x003B0CD0 */

loc_0038D20C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0038D20F: ;
    PUSH32(esp, 0xFE0);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0038D219: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0038D226; /* je: equal / zero */

loc_0038D220: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0039C1B0(); /* call 0x0039C1B0 */

loc_0038D226: ;
    POP32(esp, esi);

loc_0038D227: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038D320
 * Original: 0x0038D320 - 0x0038D665 (837 bytes, 225 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038D320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6, xmm7;

loc_0038D320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    xmm6 = 0.0f; /* xorps self = zero */
    eax = MEM32(ebp + 0x14);
    xmm7 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    MEMF(esp + 0x34) = xmm7; /* movss */
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) { sub_0038D665(); return; } /* je: equal / zero */

loc_0038D371: ;
    /* comiss xmm7, MEMF(eax + 0x434) - sets EFLAGS */
    if ((xmm7 <= MEMF(eax + 0x434))) goto loc_0038D436; /* jbe: below or equal (unsigned <=) */

loc_0038D37E: ;
    xmm0 = MEMF(eax + 0x434); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_0038D436; /* jbe: below or equal (unsigned <=) */

loc_0038D38F: ;
    xmm0 = MEMF(eax + 0x434); /* movss */
    ecx = eax + 0x418;
    edx = esp + 0x10;
    MEM32(esp + 0x3C) = ecx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x38) = edx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0038D3EC: ;
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0x434);
    PUSH32(esp, ecx);
    eax = eax + 0x424;
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_003E4ED0(); /* call 0x003E4ED0 */

loc_0038D407: ;
    esp = esp + 4;
    eax = esp + 0x90;
    PUSH32(esp, 0); sub_00428BB7(); /* call 0x00428BB7 */

loc_0038D416: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0038D425: ;
    PUSH32(esp, edx);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0038D434: ;
    goto loc_0038D439;

loc_0038D436: ;
    edx = MEM32(ebp + 0xC);

loc_0038D439: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0038D447: ;
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038D455: ;
    PUSH32(esp, esi);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038D463: ;
    eax = MEM32(edi + 0x568);
    /* comiss xmm7, MEMF(eax + 0x434) - sets EFLAGS */
    if ((xmm7 < MEMF(eax + 0x434))) goto loc_0038D61E; /* jb: below (unsigned <) */

loc_0038D476: ;
    xmm0 = MEMF(eax + 0x434); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0038D5E7; /* jp: parity */

loc_0038D48B: ;
    eax = esi;
    ecx = esp + 0x1C;
    esi = esp + 0x50;
    MEMF(esp + 0x40) = xmm6; /* movss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    MEMF(esp + 0x48) = xmm7; /* movss */
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_0038D4AC: ;
    eax = MEM32(edi + 0x568);
    edx = esi;
    PUSH32(esp, edx);
    ecx = eax + 0x400;
    PUSH32(esp, ecx);
    eax = eax + 0x418;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038D4C7: ;
    eax = MEM32(edi + 0x568);
    edx = esi;
    PUSH32(esp, edx);
    eax = eax + 0x40C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038D4E0: ;
    edx = MEM32(edi + 0x568);
    eax = esp + 0x10;
    edx = edx + 0x418;
    ecx = eax;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x38);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0038D563; /* jp: parity */

loc_0038D537: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0038D563; /* jp: parity */

loc_0038D546: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0038D563; /* jp: parity */

loc_0038D555: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0038D563: ;
    eax = esp + 0x10;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0038D56E: ;
    eax = MEM32(edi + 0x568);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = eax + 0x424;
    edx = ebx;
    PUSH32(esp, 0); sub_003E4CA0(); /* call 0x003E4CA0 */

loc_0038D585: ;
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0x420);
    edx = MEM32(eax + 0x41C);
    eax = MEM32(eax + 0x418);
    esp = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0038D5AC: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0038D5B9: ;
    ecx = MEM32(edi + 0x568);
    ecx = ecx + 0x424;
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_00428BB7(); /* call 0x00428BB7 */

loc_0038D5CE: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0038D5D6: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0038D5E4: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_0038D5E7: ;
    eax = MEM32(edi + 0x568);
    xmm0 = MEMF(eax + 0x434); /* movss */
    xmm0 = xmm0 - MEMF(0x648D80); /* subss */
    MEMF(eax + 0x434) = xmm0; /* movss */
    eax = MEM32(edi + 0x568);
    /* comiss xmm6, MEMF(eax + 0x434) - sets EFLAGS */
    if ((xmm6 <= MEMF(eax + 0x434))) goto loc_0038D61E; /* jbe: below or equal (unsigned <=) */

loc_0038D614: ;
    ecx = eax;
    MEMF(ecx + 0x434) = xmm6; /* movss */

loc_0038D61E: ;
    edx = MEM32(edi + 0x568);
    eax = MEM32(esp + 0x20);
    edx = edx + 0x400;
    MEM32(edx) = eax;
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esp + 0x28);
    MEM32(edx + 8) = eax;
    ecx = MEM32(edi + 0x568);
    edx = MEM32(esp + 0x2C);
    ecx = ecx + 0x40C;
    MEM32(ecx) = edx;
    eax = MEM32(esp + 0x30);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0038D680
 * Original: 0x0038D680 - 0x0038D81A (410 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038D680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0038D680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x78;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = esp + 0x24;
    eax = esi;
    PUSH32(esp, 0); sub_00391690(); /* call 0x00391690 */

loc_0038D69A: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(eax, eax)) goto loc_0038D814; /* je: equal / zero */

loc_0038D6A9: ;
    xmm5 = 0.0f; /* xorps self = zero */
    eax = MEM32(ebx + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x34) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm5; /* movss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0038D6F3; /* je: equal / zero */

loc_0038D6E2: ;
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0038D6EE: ;
    esp = esp + 4;
    goto loc_0038D703;

loc_0038D6F3: ;
    ecx = 0x10;
    esi = ebx;
    edi = esp + 0x40;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 8);

loc_0038D703: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edi = ebx + 0x78;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038D716: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038D728: ;
    edx = esp + 0x28;
    eax = edx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0038D77F; /* jp: parity */

loc_0038D770: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0038D7A1; /* jnp: not parity */

loc_0038D77F: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0038D78E: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    MEMF(ebx + 0x114) = xmm0; /* movss */

loc_0038D7A1: ;
    /* comiss xmm5, MEMF(ebx + 0x114) - sets EFLAGS */
    if ((xmm5 <= MEMF(ebx + 0x114))) goto loc_0038D7C2; /* jbe: below or equal (unsigned <=) */

loc_0038D7AA: ;
    xmm0 = MEMF(ebx + 0x114); /* movss */
    xmm0 = xmm0 + MEMF(0x648F60); /* addss */
    MEMF(ebx + 0x114) = xmm0; /* movss */

loc_0038D7C2: ;
    fp_push(MEMF(ebx + 0x114)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0038D7D9: ;
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x648F78); /* subss */
    MEM16(ebx + 0x174) = LO16(eax);
    MEM16(ebx + 0x170) = LO16(eax);
    MEMF(ebx + 0x7C) = xmm0; /* movss */
    ecx = MEM32(esi + 0x570);
    if (TEST_Z(ecx, ecx)) goto loc_0038D814; /* je: equal / zero */

loc_0038D803: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_0038D814: ;
    POP32(esp, edi);
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
 * sub_0038D820
 * Original: 0x0038D820 - 0x0038D83C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038D820(void)
{
    int _flags = 0; /* fallback flag var */

loc_0038D820: ;
    eax = MEM32(esp + 4);
    eax = eax - 0;
    if ((eax == 0)) { sub_0038D83C(); return; } /* je: equal / zero */

loc_0038D829: ;
    eax--;
    if ((eax == 0)) goto loc_0038D834; /* je: equal / zero */

loc_0038D82C: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_0038D834: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038D850
 * Original: 0x0038D850 - 0x0038D877 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038D850(void)
{
    int _flags = 0; /* fallback flag var */

loc_0038D850: ;
    eax = MEM32(esp + 4);
    eax = eax - 0;
    if ((eax == 0)) { sub_0038D877(); return; } /* je: equal / zero */

loc_0038D859: ;
    eax--;
    if ((eax == 0)) goto loc_0038D86F; /* je: equal / zero */

loc_0038D85C: ;
    eax--;
    if ((eax == 0)) goto loc_0038D867; /* je: equal / zero */

loc_0038D85F: ;
    eax = 0xF5;
    esp += 8; return; /* ret 4 */

loc_0038D867: ;
    eax = 0xF4;
    esp += 8; return; /* ret 4 */

loc_0038D86F: ;
    eax = 0xF6;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038D880
 * Original: 0x0038D880 - 0x0038D985 (261 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038D880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038D880: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = 0xFFFFFFF8u;
    edi = edi | 0xFFFFFFFFu;
    edx = 0; /* xor self */
    ebx = ebx - esi;
    MEM32(esp + 0x10) = 0xFFFFFFE8u;
    ecx = esi + 8;
    MEM32(esp + 0x14) = ebx;

loc_0038D8A4: ;
    ebx = MEM32(ecx + -8);
    if (CMP_NE(ebx, MEM32(eax))) goto loc_0038D8CE; /* jne: not equal / not zero */

loc_0038D8AB: ;
    ebp = MEM32(ecx + -4);
    if (CMP_NE(ebp, MEM32(eax + 4))) goto loc_0038D8CE; /* jne: not equal / not zero */

loc_0038D8B3: ;
    ebp = MEM32(ecx);
    if (CMP_NE(ebp, MEM32(eax + 8))) goto loc_0038D8CE; /* jne: not equal / not zero */

loc_0038D8BA: ;
    ebp = MEM32(ecx + 4);
    if (CMP_NE(ebp, MEM32(eax + 0xC))) goto loc_0038D8CE; /* jne: not equal / not zero */

loc_0038D8C2: ;
    ebp = MEM32(ecx + 8);
    if (CMP_EQ(ebp, MEM32(eax + 0x10))) goto loc_0038D97D; /* je: equal / zero */

loc_0038D8CE: ;
    if (TEST_Z(ebx, ebx)) goto loc_0038D8F0; /* je: equal / zero */

loc_0038D8D2: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0038D8E4; /* je: equal / zero */

loc_0038D8D7: ;
    ebx = MEM32(ecx + 0xC);
    ebp = MEM32(esp + 0x10);
    if (CMP_AE(ebx, MEM32(esi + ebp + 0x14))) goto loc_0038D8F0; /* jae: above or equal (unsigned >=) */

loc_0038D8E4: ;
    ebx = MEM32(esp + 0x14);
    ebx = ebx + ecx;
    edi = edx;
    MEM32(esp + 0x10) = ebx;

loc_0038D8F0: ;
    edx++;
    ecx = ecx + 0x18;
    if (CMP_L(edx, 0x10)) goto loc_0038D8A4; /* jl: less (signed <) */

loc_0038D8F9: ;
    ecx = 0; /* xor self */
    edx = esi;
    /* nop */

loc_0038D900: ;
    if (CMP_EQ(MEM32(edx), 0)) { sub_0038D985(); return; } /* je: equal / zero */

loc_0038D909: ;
    ecx++;
    edx = edx + 0x18;
    if (CMP_L(ecx, 0x10)) goto loc_0038D900; /* jl: less (signed <) */

loc_0038D912: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0038D97D; /* je: equal / zero */

loc_0038D917: ;
    ecx = edi + edi * 2;
    esi = esi + ecx * 8;
    ecx = MEM32(eax);
    edx = esi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = ecx;
    eax = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = eax;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0038D94E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0038D95C: ;
    edi = MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - edi;
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0038D97A: ;
    MEM32(esi + 0x14) = eax;

loc_0038D97D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0038DAC0
 * Original: 0x0038DAC0 - 0x0038DAED (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038DAC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0038DAC0: ;
    SET_LO8(ecx, MEM8(0x8761B8));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0038DAE7; /* jne: not equal / not zero */

loc_0038DACF: ;
    ecx = MEM32(0x8761B8);
    ecx = ecx | eax;
    eax = 0x876038;
    MEM32(0x8761B8) = ecx;
    PUSH32(esp, 0); sub_0038DAF0(); /* call 0x0038DAF0 */

loc_0038DAE7: ;
    eax = 0x876038;
    esp += 4; return; /* ret */

}

/**
 * sub_0038DAF0
 * Original: 0x0038DAF0 - 0x0038DAFD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038DAF0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038DAF0: ;
    PUSH32(esp, esi);
    ecx = eax + 8;
    esi = 0x10;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0038DB00(); return; /* tail jmp 0x0038DB00 */

}

/**
 * sub_0038DB20
 * Original: 0x0038DB20 - 0x0038DB51 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038DB20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0038DB20: ;
    if (TEST_NZ(MEM8(0x8761B8), 1)) goto loc_0038DB3A; /* jne: not equal / not zero */

loc_0038DB29: ;
    MEM32(0x8761B8) = MEM32(0x8761B8) | 1;
    eax = 0x876038;
    PUSH32(esp, 0); sub_0038DAF0(); /* call 0x0038DAF0 */

loc_0038DB3A: ;
    eax = 0x876038;
    /* nop */

loc_0038DB40: ;
    if (CMP_EQ(MEM32(eax), esi)) { sub_0038DB51(); return; } /* je: equal / zero */

loc_0038DB44: ;
    eax = eax + 0x18;
    if (CMP_L(eax, 0x8761B8)) goto loc_0038DB40; /* jl: less (signed <) */

loc_0038DB4E: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0038DB60
 * Original: 0x0038DB60 - 0x0038DEBA (858 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038DB60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038DB60: ;
    esp = esp - 0x20;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_0038DEB3; /* je: equal / zero */

loc_0038DB76: ;
    if (TEST_Z(ebp, ebp)) goto loc_0038DEB3; /* je: equal / zero */

loc_0038DB7E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x570);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0038DEB2; /* je: equal / zero */

loc_0038DB91: ;
    if (TEST_NZ(esi, esi)) goto loc_0038DBD4; /* jne: not equal / not zero */

loc_0038DB95: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0031A370(); /* call 0x0031A370 */

loc_0038DB9C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038DBD4; /* je: equal / zero */

loc_0038DBA0: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0); sub_0038DAC0(); /* call 0x0038DAC0 */

loc_0038DBC1: ;
    ecx = eax;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_0038D880(); /* call 0x0038D880 */

loc_0038DBCC: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0038DBD4: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0038DC16; /* je: equal / zero */

loc_0038DBDE: ;
    edx = MEM32(eax + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    MEM8(edx + 0x8C1) = 0;
    eax = MEM32(ebp + 0x564);
    edx = MEM32(ebx + 0xE40);
    esi = MEM32(eax + 4);
    xmm0 = MEMF(edi + 0x114); /* movss */
    esi = esi + 0x360;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0004BA80(); /* call 0x0004BA80 */

loc_0038DC16: ;
    eax = MEM32(esp + 0x38);
    esi = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    ebx = eax + ebx + 0x1F0;
    PUSH32(esp, 0); sub_00396550(); /* call 0x00396550 */

loc_0038DC30: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x30), _icall_esp); /* indirect call */
    }

loc_0038DC45: ;
    SET_LO8(ecx, MEM8(esi + 0xC6C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, 0xFF);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0038DC5B; /* jne: not equal / not zero */

loc_0038DC55: ;
    MEM8(ebp + 0x234) = LO8(eax);

loc_0038DC5B: ;
    SET_LO16(edx, MEM16(ebp + 0x174));
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648E98); /* movss */
    MEM8(ebp + 0x17D) = LO8(eax);
    MEM8(ebp + 0x180) = LO8(eax);
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    MEMF(ebp + 0xD4) = xmm0; /* movss */
    MEM16(ebp + 0x170) = LO16(edx);
    MEM32(ebx) = ebp;
    MEM8(ebx + 0xC) = 1;
    MEMF(ebx + 4) = xmm0; /* movss */
    MEM8(ebx + 0x30) = 0;
    MEM8(ebx + 0x31) = 0xFF;
    MEMF(ebx + 0x9C) = xmm0; /* movss */
    eax = edi + 0x78;
    edx = MEM32(eax);
    ecx = ebx + 0x34;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    xmm2 = MEMF(ebx + 0x3C); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(ebx + 0x3C) = xmm2; /* movss */
    MEMF(ebx + 0x84) = xmm1; /* movss */
    SET_LO8(eax, MEM8(esi + 0xC6C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038DD04; /* je: equal / zero */

loc_0038DCE1: ;
    SET_LO8(eax, 0xFF);
    MEM8(ebp + 0x180) = LO8(eax);
    MEM8(ebp + 0x181) = LO8(eax);
    edi = MEM32(edi + 0x23C);
    eax = ebp;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_0038DCFC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    goto loc_0038DDAA;

loc_0038DD04: ;
    ecx = MEM32(ebp + 0x7C);
    eax = MEM32(ebp + 0x568);
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(ebp + 0x3B8) = ecx;
    SET_LO16(edx, MEM16(edi + 0x174));
    MEM16(ebp + 0x170) = LO16(edx);
    edx = MEM32(esp + 0x10);
    MEM8(eax + 0x44) = 0;
    SET_LO8(ecx, MEM8(edi + 0x60));
    SET_LO8(eax, MEM8(ebp + 0x209));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(ebp + 0x135) = LO8(ecx);
    MEM32(ebp + 0x12C) = edx;
    SET_LO8(eax, LO8(eax) | 0x24);
    MEM8(ebp + 0x209) = LO8(eax);
    eax = MEM32(ebp + 0x568);
    MEM8(ebp + 0x180) = 0;
    MEM8(ebp + 0x234) = 0;
    MEM8(ebp + 0x444) = 0;
    MEM8(eax + 0x39) = 1;
    ecx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(esp + 0x38));
    MEMF(ecx + 0x434) = xmm1; /* movss */
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x438) = LO8(eax);
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x439) = 0;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x1F8) = 0;

loc_0038DDAA: ;
    edi = MEM32(esp + 0x3C);
    (void)0; /* cmp edi, 3 - flags set for next jcc */
    eax = MEM32(ebp + 0x568);
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x43C) = xmm1; /* movss */
    if (CMP_NE(edi, 3)) goto loc_0038DDE2; /* jne: not equal / not zero */

loc_0038DDC9: ;
    ecx = MEM32(ebp + 0x568);
    MEM8(ebp + 0x439) = MEM8(ebp + 0x439) | 2;
    MEMF(ecx + 0x434) = xmm0; /* movss */
    MEM8(ebx + 0xC) = 2;

loc_0038DDE2: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0038DE16; /* jne: not equal / not zero */

loc_0038DDF2: ;
    SET_LO8(eax, MEM8(ebp + 0x10B));
    PUSH32(esp, 0x5D);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM8(esp + 0x1C) = LO8(eax);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_0038DE13: ;
    esp = esp + 0xC;

loc_0038DE16: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esi);
    (void)0; /* cmp edi, 3 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edi, 3)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_0038DE29: ;
    ecx = MEM32(esp + 0x38);
    eax = esi;
    PUSH32(esp, 0); sub_00397350(); /* call 0x00397350 */

loc_0038DE34: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038DE64; /* jne: not equal / not zero */

loc_0038DE38: ;
    PUSH32(esp, 0x5EA26C);
    eax = ebp;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0038DE44: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038DE64; /* jne: not equal / not zero */

loc_0038DE50: ;
    ecx = ebp;
    edi = 0xF5;
    PUSH32(esp, 0); sub_00078A70(); /* call 0x00078A70 */

loc_0038DE5C: ;
    if (TEST_Z(eax, eax)) goto loc_0038DE64; /* je: equal / zero */

loc_0038DE60: ;
    MEM8(eax + 6) = 0;

loc_0038DE64: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0038DE8B; /* jne: not equal / not zero */

loc_0038DE74: ;
    eax = MEM32(esi + 0xC84);
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0038DE8B; /* je: equal / zero */

loc_0038DE81: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001E6A40(); /* call 0x001E6A40 */

loc_0038DE88: ;
    esp = esp + 8;

loc_0038DE8B: ;
    edi = 8;
    eax = ebp;
    PUSH32(esp, 0); sub_002C48F0(); /* call 0x002C48F0 */

loc_0038DE97: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0038DEAA; /* je: equal / zero */

loc_0038DEA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00041220(); /* call 0x00041220 */

loc_0038DEA7: ;
    esp = esp + 4;

loc_0038DEAA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_0038DEB2: ;
    POP32(esp, ebx);

loc_0038DEB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0038DEC0
 * Original: 0x0038DEC0 - 0x0038DF8A (202 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038DEC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0038DEC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x7C);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D18); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(ecx + 0x3B8) = eax;
    eax = MEM32(ecx + 0x568);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(ecx + 0x180) = LO8(ebx);
    MEM8(ecx + 0x135) = LO8(ebx);
    MEMF(ecx + 0x110) = xmm0; /* movss */
    MEMF(ecx + 0xD4) = xmm1; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_0038DF87; /* je: equal / zero */

loc_0038DF02: ;
    xmm1 = MEMF(0x648CE0); /* movss */
    MEM8(eax + 0x438) = LO8(ebx);
    edx = MEM32(ecx + 0x568);
    MEM8(edx + 0x39) = LO8(ebx);
    eax = MEM32(ecx + 0x568);
    MEMF(eax + 0x440) = xmm1; /* movss */
    edx = MEM32(ecx + 0x568);
    MEM8(edx + 0x439) = LO8(ebx);
    eax = MEM32(ecx + 0x564);
    if (CMP_EQ(eax, ebx)) goto loc_0038DF87; /* je: equal / zero */

loc_0038DF3D: ;
    eax = MEM32(eax + 4);
    MEMF(eax + 0x34) = xmm0; /* movss */
    edx = MEM32(ecx + 0x564);
    edx = MEM32(edx + 4);
    SET_LO8(eax, MEM8(edx + 0x96));
    edx = edx + 4;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0038DF75; /* jne: not equal / not zero */

loc_0038DF5B: ;
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0038DF6A: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(edx + 0x34) = xmm0; /* movss */

loc_0038DF75: ;
    eax = MEM32(ecx + 0x564);
    PUSH32(esp, esi);
    esi = 0x21;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_0038DF86: ;
    POP32(esp, esi);

loc_0038DF87: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038DF90
 * Original: 0x0038DF90 - 0x0038E0C6 (310 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038DF90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0038DF90: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    esp = esp - 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038E0C2; /* je: equal / zero */

loc_0038DFA1: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx + -1744;
    if (TEST_Z(eax, eax)) goto loc_0038E0C2; /* je: equal / zero */

loc_0038DFBF: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x570);
    if (TEST_Z(esi, esi)) goto loc_0038E0C1; /* je: equal / zero */

loc_0038DFCE: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1EC);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0038E0C1; /* jle: less or equal (signed <=) */

loc_0038DFDF: ;
    ecx = esi + 0x1F0;

loc_0038DFE5: ;
    if (CMP_EQ(MEM32(ecx), edi)) goto loc_0038DFF9; /* je: equal / zero */

loc_0038DFE9: ;
    eax++;
    ecx = ecx + 0xB0;
    if (CMP_L(eax, edx)) goto loc_0038DFE5; /* jl: less (signed <) */

loc_0038DFF4: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0038DFF9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    esi = eax + esi + 0x1F0;
    if (TEST_Z(esi, esi)) goto loc_0038E0C1; /* je: equal / zero */

loc_0038E00E: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0038E035; /* je: equal / zero */

loc_0038E018: ;
    eax = MEM32(eax + 4);
    eax = eax + 0x360;
    PUSH32(esp, 0); sub_0004BDC0(); /* call 0x0004BDC0 */

loc_0038E025: ;
    edx = MEM32(edi + 0x564);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x8C1) = 0;

loc_0038E035: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = edi;
    MEMF(esi + 4) = xmm0; /* movss */
    MEM32(esi) = 0;
    MEM8(esi + 0xC) = 0;
    MEMF(esi + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0038DEC0(); /* call 0x0038DEC0 */

loc_0038E063: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0038E077; /* je: equal / zero */

loc_0038E06D: ;
    esi = 0x21;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_0038E077: ;
    ecx = MEM32(edi + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0038E0AB; /* jne: not equal / not zero */

loc_0038E087: ;
    SET_LO8(edx, MEM8(edi + 0x10B));
    PUSH32(esp, 0x5E);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = edi;
    MEM8(esp + 0x14) = LO8(edx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_0038E0A8: ;
    esp = esp + 0xC;

loc_0038E0AB: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038E0C1; /* je: equal / zero */

loc_0038E0B4: ;
    esi = esp + 4;
    MEM32(esp + 4) = edi;
    PUSH32(esp, 0); sub_00267700(); /* call 0x00267700 */

loc_0038E0C1: ;
    POP32(esp, esi);

loc_0038E0C2: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0038E0D0
 * Original: 0x0038E0D0 - 0x0038E20E (318 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038E0D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038E0D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x18);
    esi = MEM32(edi + 0x570);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    ebx = eax + esi + 0x1F0;
    if (CMP_NE(MEM32(ebx), 0)) goto loc_0038E209; /* jne: not equal / not zero */

loc_0038E0FA: ;
    PUSH32(esp, 0); sub_00396550(); /* call 0x00396550 */

loc_0038E0FF: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x30), _icall_esp); /* indirect call */
    }

loc_0038E111: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    MEMF(ebp + 0xD4) = xmm0; /* movss */
    SET_LO8(ecx, 0xFF);
    MEM8(ebp + 0x234) = LO8(ecx);
    MEM8(ebp + 0x180) = LO8(ecx);
    MEM8(ebp + 0x17D) = LO8(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x174));
    MEM16(ebp + 0x170) = LO16(ecx);
    MEMF(ebx + 4) = xmm0; /* movss */
    MEMF(ebx + 0x9C) = xmm0; /* movss */
    MEM32(ebx) = ebp;
    MEM8(ebx + 0xC) = 2;
    MEM8(ebx + 0x30) = 0;
    MEM8(ebx + 0x31) = 0xFF;
    edx = MEM32(ebp + 0x7C);
    MEM32(ebp + 0x3B8) = edx;
    SET_LO16(ecx, MEM16(edi + 0x174));
    edx = MEM32(ebp + 0x568);
    MEM16(ebp + 0x170) = LO16(ecx);
    MEM8(edx + 0x44) = 0;
    SET_LO8(ecx, MEM8(edi + 0x60));
    edx = MEM32(ebp + 0x568);
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(ebp + 0x135) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x209));
    MEM32(ebp + 0x12C) = eax;
    SET_LO8(ecx, LO8(ecx) | 0x24);
    MEM8(ebp + 0x209) = LO8(ecx);
    MEM8(ebp + 0x180) = 0;
    MEM8(ebp + 0x234) = 0;
    MEM8(ebp + 0x444) = 0;
    MEM8(edx + 0x39) = 0;
    eax = MEM32(ebp + 0x568);
    SET_LO8(edx, MEM8(esp + 0x18));
    MEMF(eax + 0x434) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(ecx + 0x438) = LO8(edx);
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x439) = 0;
    ecx = MEM32(ebp + 0x568);
    MEMF(ecx + 0x43C) = xmm0; /* movss */
    MEM8(ebp + 0x439) = MEM8(ebp + 0x439) | 2;

loc_0038E209: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038E210
 * Original: 0x0038E210 - 0x0038E2B6 (166 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038E210(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0038E210: ;
    PUSH32(esp, ecx);
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = esp + 8;
    PUSH32(esp, 0); sub_00391690(); /* call 0x00391690 */

loc_0038E21F: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_0038E2AF; /* je: equal / zero */

loc_0038E22C: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0038E251; /* je: equal / zero */

loc_0038E236: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_0038E251; /* je: equal / zero */

loc_0038E23F: ;
    SET_LO8(ecx, MEM8(esi + 0x60));
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_NZ(MEM8(0x849E8C), LO8(eax))) goto loc_0038E2AF; /* jne: not equal / not zero */

loc_0038E251: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0038E258: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038E264; /* je: equal / zero */

loc_0038E25C: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038E2AF; /* je: equal / zero */

loc_0038E264: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, 0xDF)) goto loc_0038E286; /* je: equal / zero */

loc_0038E271: ;
    if (CMP_EQ(eax, 0xE9)) goto loc_0038E286; /* je: equal / zero */

loc_0038E278: ;
    if (CMP_EQ(eax, 0x12F)) goto loc_0038E286; /* je: equal / zero */

loc_0038E27F: ;
    if (CMP_NE(eax, 0xEC)) goto loc_0038E2A1; /* jne: not equal / not zero */

loc_0038E286: ;
    ecx = MEM32(ecx + 0x570);
    if (TEST_Z(ecx, ecx)) goto loc_0038E2A1; /* je: equal / zero */

loc_0038E290: ;
    xmm0 = MEMF(ecx + 0xEE8); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_0038E2AF; /* ja: above (unsigned >) */

loc_0038E2A1: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 < MEMF(edi + 4))) { sub_0038E2B6(); return; } /* jb: below (unsigned <) */

loc_0038E2AF: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038E2C0
 * Original: 0x0038E2C0 - 0x0038E5BC (764 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038E2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038E2C0: ;
    esp = esp - 0x1A0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1B0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1B0);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_00391690(); /* call 0x00391690 */

loc_0038E2E5: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0038E5AF; /* je: equal / zero */

loc_0038E2F6: ;
    MEM32(eax + 0xAC) = ebx;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x68);
    edx = edx + 0xFFFFFF23u;
    (void)0; /* cmp edx, 0xBC - flags set for next jcc */
    MEM32(esp + 0x4C) = ecx;
    if (CMP_A(edx, 0xBC)) goto loc_0038E5AF; /* ja: above (unsigned >) */

loc_0038E318: ;
    edx = ZX8(MEM8(edx + 0x38E5C4));
    { uint32_t _jt = MEM32(edx * 4 + 0x38E5BC); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0038E326u) goto loc_0038E326;
    if (_jt == 0x0038E5AFu) goto loc_0038E5AF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0038E326: ;
    ecx = MEM32(ecx + 0x4B0);
    if (CMP_EQ(ecx, ebx)) goto loc_0038E5AF; /* je: equal / zero */

loc_0038E334: ;
    ecx = MEM32(ecx + 0x24);
    edi = MEM32(ecx + 8);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esp + 0x50) = edi;
    if (CMP_EQ(edi, ebx)) goto loc_0038E5AF; /* je: equal / zero */

loc_0038E346: ;
    eax = eax + 0xA0;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x18) = eax;
    esi = eax;

loc_0038E355: ;
    if (CMP_NE(MEM32(esi), 0xFFFFFFFFu)) goto loc_0038E3A5; /* jne: not equal / not zero */

loc_0038E35A: ;
    eax = MEM32(esp + 0x14);
    edx = ebx + 1;
    PUSH32(esp, edx);
    eax++;
    PUSH32(esp, eax);
    ecx = esp + 0xB8;
    PUSH32(esp, 0x63EC68);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0038E376: ;
    PUSH32(esp, 0);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_0038E38B: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0038E57F; /* je: equal / zero */

loc_0038E396: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0038E57F; /* je: equal / zero */

loc_0038E3A3: ;
    MEM32(esi) = eax;

loc_0038E3A5: ;
    if (CMP_L(MEM32(esi), 0)) goto loc_0038E3AE; /* jl: less (signed <) */

loc_0038E3AA: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_0038E3AE: ;
    ebx++;
    esi = esi + 4;
    if (CMP_L(ebx, 3)) goto loc_0038E355; /* jl: less (signed <) */

loc_0038E3B7: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0038E5AF; /* je: equal / zero */

loc_0038E3C3: ;
    ecx = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ecx;
    edi = 1;

loc_0038E3D6: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    if (TEST_S(eax, eax)) goto loc_0038E5A5; /* jl: less (signed <) */

loc_0038E3E4: ;
    ecx = MEM32(esp + 0x50);
    esi = esp + 0x40;
    PUSH32(esp, 0); sub_003ECDF0(); /* call 0x003ECDF0 */

loc_0038E3F1: ;
    if (TEST_Z(eax, eax)) goto loc_0038E559; /* je: equal / zero */

loc_0038E3F9: ;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0038E409: ;
    eax = ebp + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = edx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x2C) = eax;
    ecx = esp + 0x24;
    edx = esi;
    eax = esp + 0x34;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x34;
    MEM32(esp + 0x20) = ecx;
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
    MEMF(esp + 0x54) = xmm1; /* movss */
    eax = ecx;
    ebx = ecx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0038E4AF: ;
    edx = MEM32(esp + 0x1B4);
    eax = MEM32(edx + 4);
    ebx = 0; /* xor self */
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0x2000);
    ecx = 0x107E;
    eax = 0x63EC7C;
    esi = ebp;
    MEM32(esp + 0x5C) = 0x5D4C44;
    MEM32(esp + 0x60) = edi;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0xB0) = 2;
    MEM32(esp + 0x70) = edi;
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x7C) = ebp;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_0038E504: ;
    edx = MEM32(esp + 0x58);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_0038E525: ;
    esp = esp + 0x34;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0038E58A; /* je: equal / zero */

loc_0038E54D: ;
    ebx = MEM32(esp + 0x14);
    MEM32(esp + 0x58) = 0x5D4C44;

loc_0038E559: ;
    ecx = MEM32(esp + 0x10);
    ebx++;
    ecx = ecx + 4;
    (void)0; /* cmp ebx, 3 - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ebx, 3)) goto loc_0038E3D6; /* jl: less (signed <) */

loc_0038E572: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1A0;
    esp += 12; return; /* ret 8 */

loc_0038E57F: ;
    MEM32(esi) = 0xFFFFFFFEu;
    goto loc_0038E3AE;

loc_0038E58A: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0xAC) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x1A0;
    esp += 12; return; /* ret 8 */

loc_0038E5A5: ;
    eax = MEM32(esp + 0x30);
    MEM32(eax + 0xAC) = ebx;

loc_0038E5AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1A0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0038E690
 * Original: 0x0038E690 - 0x0038EDD0 (1856 bytes, 479 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038E690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038E690: ;
    eax = MEM32(esp + 8);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(ebx + 0x55));
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_0038EDC9; /* jle: less or equal (signed <=) */

loc_0038E6A7: ;
    PUSH32(esp, ebp);
    MEM16(eax + 0x108) = 0x8AD0;
    MEM8(eax + 0x234) = 0;
    SET_LO8(eax, MEM8(ebx + 0x1EC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0038ECC3; /* jle: less or equal (signed <=) */

loc_0038E6D0: ;
    eax = MEM32(esp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    esi = MEM32(eax + ebx + 0x1F0);
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = eax + ebx;
    if (TEST_Z(esi, esi)) goto loc_0038EC78; /* je: equal / zero */

loc_0038E6EC: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0038E700; /* je: equal / zero */

loc_0038E6F6: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038E70A; /* jne: not equal / not zero */

loc_0038E700: ;
    MEM32(ebp + 0x1F0) = 0;

loc_0038E70A: ;
    eax = ZX16(MEM16(esi + 0x60));
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_L(eax, ecx)) goto loc_0038E71E; /* jl: less (signed <) */

loc_0038E719: ;
    eax = 0x14;

loc_0038E71E: ;
    SET_LO8(ecx, MEM8(ebx + 0xC3A));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0038E7FC; /* je: equal / zero */

loc_0038E73B: ;
    ecx = MEM32(eax + 0x170);
    if (TEST_Z(ecx, ecx)) goto loc_0038E7FC; /* je: equal / zero */

loc_0038E749: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0038E210(); /* call 0x0038E210 */

loc_0038E750: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038E7FC; /* je: equal / zero */

loc_0038E758: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0xC3C); /* addss */
    MEMF(ebx + 0xC3C) = xmm0; /* movss */
    edx = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 1)) goto loc_0038E78C; /* je: equal / zero */

loc_0038E77F: ;
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D10))) goto loc_0038E807; /* jbe: below or equal (unsigned <=) */

loc_0038E78C: ;
    MEM8(ebp + 0x1FC) = 4;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0038E7A4; /* je: equal / zero */

loc_0038E79D: ;
    MEM8(eax + 0x439) = 1;

loc_0038E7A4: ;
    eax = MEM32(0x847024);
    edi = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0038E7B1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0038E807; /* je: equal / zero */

loc_0038E7B5: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0038E7D2; /* je: equal / zero */

loc_0038E7BF: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0038E7D8;

loc_0038E7D2: ;
    eax = MEM32(esi + 0x580);

loc_0038E7D8: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB6A;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0038E7FA: ;
    goto loc_0038E807;

loc_0038E7FC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx + 0xC3C) = xmm0; /* movss */

loc_0038E807: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_00391690(); /* call 0x00391690 */

loc_0038E814: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_0038E94E; /* je: equal / zero */

loc_0038E821: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0038E84C; /* je: equal / zero */

loc_0038E82B: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_0038E84C; /* je: equal / zero */

loc_0038E834: ;
    SET_LO8(ecx, MEM8(esi + 0x60));
    eax = 1;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, MEM8(0x849E8C));
    if (TEST_NZ(LO8(ecx), LO8(eax))) goto loc_0038E94E; /* jne: not equal / not zero */

loc_0038E84C: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0038E853: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038E94E; /* jne: not equal / not zero */

loc_0038E85B: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, 0xDF)) goto loc_0038E87D; /* je: equal / zero */

loc_0038E868: ;
    if (CMP_EQ(eax, 0xE9)) goto loc_0038E87D; /* je: equal / zero */

loc_0038E86F: ;
    if (CMP_EQ(eax, 0x12F)) goto loc_0038E87D; /* je: equal / zero */

loc_0038E876: ;
    if (CMP_NE(eax, 0xEC)) goto loc_0038E89C; /* jne: not equal / not zero */

loc_0038E87D: ;
    eax = MEM32(ecx + 0x570);
    if (TEST_Z(eax, eax)) goto loc_0038E89C; /* je: equal / zero */

loc_0038E887: ;
    xmm0 = MEMF(eax + 0xEE8); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_0038E94E; /* ja: above (unsigned >) */

loc_0038E89C: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 >= MEMF(edi + 4))) goto loc_0038E94E; /* jae: above or equal (unsigned >=) */

loc_0038E8AE: ;
    if (CMP_NE(MEM8(ebp + 0x1FC), 2)) goto loc_0038E909; /* jne: not equal / not zero */

loc_0038E8B7: ;
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, 0xDF)) goto loc_0038E8D6; /* je: equal / zero */

loc_0038E8C1: ;
    if (CMP_EQ(eax, 0xE9)) goto loc_0038E8D6; /* je: equal / zero */

loc_0038E8C8: ;
    if (CMP_EQ(eax, 0x12F)) goto loc_0038E8D6; /* je: equal / zero */

loc_0038E8CF: ;
    if (CMP_NE(eax, 0xEC)) goto loc_0038E8DF; /* jne: not equal / not zero */

loc_0038E8D6: ;
    if (CMP_NE(MEM8(ebx + 0xEE0), 2)) goto loc_0038E909; /* jne: not equal / not zero */

loc_0038E8DF: ;
    eax = MEM32(ebp + 0x1F0);
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0038E909; /* je: equal / zero */

loc_0038E8F5: ;
    eax = MEM32(eax + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0038E909; /* je: equal / zero */

loc_0038E8FF: ;
    edx = MEM32(eax + 0x50);
    MEM8(edx + 0x264) = 1;

loc_0038E909: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_0038E911: ;
    if (CMP_L(eax, 7)) goto loc_0038E94E; /* jl: less (signed <) */

loc_0038E916: ;
    if (CMP_G(eax, 8)) goto loc_0038E94E; /* jg: greater (signed >) */

loc_0038E91B: ;
    if (CMP_EQ(MEM8(ebx + 0xEE0), 2)) goto loc_0038E94E; /* je: equal / zero */

loc_0038E924: ;
    eax = MEM32(ebp + 0x1F0);
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    if (TEST_Z(eax, eax)) goto loc_0038E94E; /* je: equal / zero */

loc_0038E93A: ;
    eax = MEM32(eax + 0x284);
    if (TEST_Z(eax, eax)) goto loc_0038E94E; /* je: equal / zero */

loc_0038E944: ;
    edx = MEM32(eax + 0x50);
    MEM8(edx + 0x264) = 0;

loc_0038E94E: ;
    eax = MEM32(esi + 0x238);
    if (TEST_Z(eax, eax)) goto loc_0038E970; /* je: equal / zero */

loc_0038E958: ;
    eax = MEM32(eax);
    ecx = MEM32(ebx + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0038E963: ;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(eax), 1)) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038EA28; /* jne: not equal / not zero */

loc_0038E970: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x164);
    if (TEST_Z(ecx, ecx)) goto loc_0038EAFD; /* je: equal / zero */

loc_0038E982: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_00391690(); /* call 0x00391690 */

loc_0038E98F: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_0038EAFD; /* je: equal / zero */

loc_0038E99C: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0038E9C6; /* je: equal / zero */

loc_0038E9A6: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_0038E9C6; /* je: equal / zero */

loc_0038E9AF: ;
    SET_LO8(ecx, MEM8(esi + 0x60));
    SET_LO8(eax, MEM8(0x849E8C));
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(LO8(eax), LO8(edx))) goto loc_0038EAFD; /* jne: not equal / not zero */

loc_0038E9C6: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_0038E9CD: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038EAFD; /* jne: not equal / not zero */

loc_0038E9D5: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, 0xDF)) goto loc_0038E9F7; /* je: equal / zero */

loc_0038E9E2: ;
    if (CMP_EQ(eax, 0xE9)) goto loc_0038E9F7; /* je: equal / zero */

loc_0038E9E9: ;
    if (CMP_EQ(eax, 0x12F)) goto loc_0038E9F7; /* je: equal / zero */

loc_0038E9F0: ;
    if (CMP_NE(eax, 0xEC)) goto loc_0038EA16; /* jne: not equal / not zero */

loc_0038E9F7: ;
    ecx = MEM32(ecx + 0x570);
    if (TEST_Z(ecx, ecx)) goto loc_0038EA16; /* je: equal / zero */

loc_0038EA01: ;
    xmm0 = MEMF(ecx + 0xEE8); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_0038EAFD; /* ja: above (unsigned >) */

loc_0038EA16: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 >= MEMF(edi + 4))) goto loc_0038EAFD; /* jae: above or equal (unsigned >=) */

loc_0038EA28: ;
    SET_LO8(eax, MEM8(ebp + 0x1FC));
    if (CMP_EQ(LO8(eax), 1)) goto loc_0038EA3A; /* je: equal / zero */

loc_0038EA32: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_0038EAFD; /* jne: not equal / not zero */

loc_0038EA3A: ;
    SET_LO8(eax, MEM8(ebx + 0xC3A));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038EAFD; /* jne: not equal / not zero */

loc_0038EA48: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0038E2C0(); /* call 0x0038E2C0 */

loc_0038EA4F: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x78), _icall_esp); /* indirect call */
    }

loc_0038EA5B: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0038EAF6; /* jne: not equal / not zero */

loc_0038EA63: ;
    MEM8(ebp + 0x1FC) = 3;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0038EA93; /* je: equal / zero */

loc_0038EA74: ;
    xmm0 = MEMF(0x648D20); /* movss */
    edx = eax;
    MEM8(edx + 0x439) = 1;
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x644) = xmm0; /* movss */

loc_0038EA93: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0038EA9B: ;
    edi = MEM32(ebp + 0x1F0);
    PUSH32(esp, 0x5EA26C);
    eax = edi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0038EAAD: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038EACD; /* jne: not equal / not zero */

loc_0038EAB9: ;
    ecx = edi;
    edi = 0xF5;
    PUSH32(esp, 0); sub_00078A70(); /* call 0x00078A70 */

loc_0038EAC5: ;
    if (TEST_Z(eax, eax)) goto loc_0038EACD; /* je: equal / zero */

loc_0038EAC9: ;
    MEM8(eax + 6) = 0xFF;

loc_0038EACD: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0038EAFD; /* je: equal / zero */

loc_0038EAD7: ;
    eax = MEM32(eax + 4);
    eax = eax + 0x360;
    PUSH32(esp, 0); sub_0004BDC0(); /* call 0x0004BDC0 */

loc_0038EAE4: ;
    eax = MEM32(esi + 0x564);
    ecx = MEM32(eax + 4);
    MEM8(ecx + 0x8C1) = 0;
    goto loc_0038EAFD;

loc_0038EAF6: ;
    MEM8(ebp + 0x1FC) = 5;

loc_0038EAFD: ;
    if (CMP_NE(MEM8(ebp + 0x1FC), 5)) goto loc_0038EBC9; /* jne: not equal / not zero */

loc_0038EB0A: ;
    edi = MEM32(esp + 0x1C);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x7C), _icall_esp); /* indirect call */
    }

loc_0038EB16: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038EB2A; /* jne: not equal / not zero */

loc_0038EB1A: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x80), _icall_esp); /* indirect call */
    }

loc_0038EB25: ;
    goto loc_0038EBC9;

loc_0038EB2A: ;
    MEM8(ebp + 0x1FC) = 3;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0038EB68; /* je: equal / zero */

loc_0038EB3B: ;
    xmm0 = MEMF(0x648D20); /* movss */
    ecx = eax;
    MEM8(ecx + 0x439) = 1;
    edx = MEM32(esi + 0x568);
    MEMF(edx + 0x644) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x654) = xmm0; /* movss */

loc_0038EB68: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0038EB70: ;
    edi = MEM32(ebp + 0x1F0);
    PUSH32(esp, 0x5EA26C);
    eax = edi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0038EB82: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038EBA2; /* jne: not equal / not zero */

loc_0038EB8E: ;
    ecx = edi;
    edi = 0xF5;
    PUSH32(esp, 0); sub_00078A70(); /* call 0x00078A70 */

loc_0038EB9A: ;
    if (TEST_Z(eax, eax)) goto loc_0038EBA2; /* je: equal / zero */

loc_0038EB9E: ;
    MEM8(eax + 6) = 0xFF;

loc_0038EBA2: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0038EBC9; /* je: equal / zero */

loc_0038EBAC: ;
    eax = MEM32(eax + 4);
    eax = eax + 0x360;
    PUSH32(esp, 0); sub_0004BDC0(); /* call 0x0004BDC0 */

loc_0038EBB9: ;
    eax = MEM32(esi + 0x564);
    ecx = MEM32(eax + 4);
    MEM8(ecx + 0x8C1) = 0;

loc_0038EBC9: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0038EC66; /* je: equal / zero */

loc_0038EBD7: ;
    SET_LO8(ecx, MEM8(eax + 0x439));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0038EC66; /* je: equal / zero */

loc_0038EBE5: ;
    SET_LO8(ecx, MEM8(ebx + 0xC3A));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x1FC));
    xmm0 = MEMF(0x648D20); /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0038EC14; /* je: equal / zero */

loc_0038EBFD: ;
    MEM8(ebp + 0x1FC) = 4;
    edx = MEM32(esi + 0x568);
    MEMF(edx + 0x654) = xmm0; /* movss */
    goto loc_0038EC29;

loc_0038EC14: ;
    MEM8(ebp + 0x1FC) = 3;
    ecx = MEM32(esi + 0x568);
    MEMF(ecx + 0x644) = xmm0; /* movss */

loc_0038EC29: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0038EC34; /* jne: not equal / not zero */

loc_0038EC2D: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x68), _icall_esp); /* indirect call */
    }

loc_0038EC34: ;
    esi = MEM32(ebp + 0x1F0);
    PUSH32(esp, 0x5EA26C);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0038EC46: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0038EC66; /* jne: not equal / not zero */

loc_0038EC52: ;
    ecx = esi;
    edi = 0xF5;
    PUSH32(esp, 0); sub_00078A70(); /* call 0x00078A70 */

loc_0038EC5E: ;
    if (TEST_Z(eax, eax)) goto loc_0038EC66; /* je: equal / zero */

loc_0038EC62: ;
    MEM8(eax + 6) = 0xFF;

loc_0038EC66: ;
    xmm0 = MEMF(ebp + 0x1F4); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    goto loc_0038EC7B;

loc_0038EC78: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0038EC7B: ;
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0x1F4) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x1F8); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x1F8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0038ECAB; /* jbe: below or equal (unsigned <=) */

loc_0038ECA3: ;
    MEMF(ebp + 0x1F8) = xmm1; /* movss */

loc_0038ECAB: ;
    eax = MEM32(esp + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x1EC);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, ecx)) goto loc_0038E6D0; /* jl: less (signed <) */

loc_0038ECC3: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0038EDC6; /* je: equal / zero */

loc_0038ECD5: ;
    ebp = MEM32(ebx + 0x34);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    esi = 2;
    if (TEST_S(ebp, ebp)) goto loc_0038ED5E; /* jl: less (signed <) */

loc_0038ECE5: ;
    ecx = MEM32(0x84A5F8);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = MEM32(eax + ecx + 0x568);
    edi = MEM32(edx + 0xBC);
    eax = eax + ecx;
    ecx = 1;
    if (CMP_NE(edi, ecx)) goto loc_0038ED15; /* jne: not equal / not zero */

loc_0038ED0B: ;
    eax = MEM32(eax + 0x238);
    esi = MEM32(eax);
    goto loc_0038ED88;

loc_0038ED15: ;
    if (CMP_EQ(MEM32(0x863D04), ecx)) goto loc_0038ED55; /* je: equal / zero */

loc_0038ED1D: ;
    eax = MEM32(0x863D08);
    if (TEST_Z(eax, eax)) goto loc_0038ED36; /* je: equal / zero */

loc_0038ED26: ;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00296E60(); /* call 0x00296E60 */

loc_0038ED30: ;
    if (CMP_EQ(MEM16(ebx + 0x32), LO16(eax))) goto loc_0038ED55; /* je: equal / zero */

loc_0038ED36: ;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ebx + 0x32));
    if (TEST_S(LO16(edi), LO16(edi))) goto loc_0038ED88; /* jl: less (signed <) */

loc_0038ED41: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0038ED4B: ;
    if (TEST_Z(eax, eax)) goto loc_0038ED88; /* je: equal / zero */

loc_0038ED4F: ;
    esi = MEM32(eax + ebp * 4 + 4);
    goto loc_0038ED88;

loc_0038ED55: ;
    esi = MEM32(ebp * 4 + 0x862CC0);
    goto loc_0038ED88;

loc_0038ED5E: ;
    SET_LO8(eax, MEM8(ebx + 0x1EC));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0038ED88; /* jle: less or equal (signed <=) */

loc_0038ED68: ;
    ecx = ebx + 0x1F0;
    edx = SX8(LO8(eax));

loc_0038ED71: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0038ED7F; /* je: equal / zero */

loc_0038ED77: ;
    eax = MEM32(eax + 0x238);
    esi = MEM32(eax);

loc_0038ED7F: ;
    ecx = ecx + 0xB0;
    edx--;
    if ((edx != 0)) goto loc_0038ED71; /* jne: not equal / not zero */

loc_0038ED88: ;
    ecx = MEM32(ebx + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_0038ED91: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0038EDBF; /* jne: not equal / not zero */

loc_0038ED95: ;
    eax = MEM32(ebx + 0x38);
    if (CMP_EQ(MEM32(eax + 8), esi)) goto loc_0038EDB7; /* je: equal / zero */

loc_0038ED9D: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 8) = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0038EDB7; /* je: equal / zero */

loc_0038EDA7: ;
    MEM8(ecx + 4) = 0;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = esi;
    edx = MEM32(eax + 4);
    MEM8(edx + 4) = 1;

loc_0038EDB7: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0; /* movss */

loc_0038EDBF: ;
    esi = ebx;
    PUSH32(esp, 0); sub_00396C40(); /* call 0x00396C40 */

loc_0038EDC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0038EDC9: ;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0038EDD0
 * Original: 0x0038EDD0 - 0x0038EE1C (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038EDD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038EDD0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = edx;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x570);
    if (TEST_NZ(ebx, ebx)) { sub_0038EE1C(); return; } /* jne: not equal / not zero */

loc_0038EDE1: ;
    if (CMP_EQ(MEM16(ebp + 0x32), 0xFFFFFFFEu)) { sub_0038EE1C(); return; } /* je: equal / zero */

loc_0038EDE8: ;
    if (TEST_Z(eax, eax)) { sub_0038EE1C(); return; } /* je: equal / zero */

loc_0038EDEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 0x14;
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_00289590(); /* call 0x00289590 */

loc_0038EDFB: ;
    SET_LO16(eax, MEM16(ebp + 0x32));
    (void)0; /* cmp LO16(eax), MEM16(esp + 0x10) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(LO16(eax), MEM16(esp + 0x10))) goto loc_0038EE11; /* jne: not equal / not zero */

loc_0038EE08: ;
    edx = MEM32(ebp + 0x34);
    if (CMP_EQ(edx, MEM32(esp + 0xC))) { sub_0038EE1C(); return; } /* je: equal / zero */

loc_0038EE11: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0038EE40
 * Original: 0x0038EE40 - 0x0038EE4D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038EE40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0038EE40: ;
    eax = MEM32(ecx + 0x570);
    if (TEST_NZ(eax, eax)) { sub_0038EE4D(); return; } /* jne: not equal / not zero */

loc_0038EE4A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0038EE80
 * Original: 0x0038EE80 - 0x0038F33A (1210 bytes, 287 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038EE80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0038EE80: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM8(eax + 0x30), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    if (CMP_EQ(MEM8(eax + 0x30), 0)) goto loc_0038F308; /* je: equal / zero */

loc_0038EE93: ;
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm3 = MEMF(0x7F9F5C); /* movss */
    xmm3 = xmm3 * MEMF(0x7FA21C); /* mulss */
    xmm6 = MEMF(eax + 8); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D38); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm4 = xmm3; /* movaps */
    if ((xmm3 <= xmm0)) goto loc_0038EF00; /* jbe: below or equal (unsigned <=) */

loc_0038EED9: ;
    xmm5 = xmm6; /* movaps */
    /* nop */

loc_0038EEE0: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = xmm7; /* movaps */
    if ((xmm4 > xmm0)) goto loc_0038EEE0; /* ja: above (unsigned >) */

loc_0038EEFB: ;
    MEMF(eax + 8) = xmm5; /* movss */

loc_0038EF00: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - MEMF(eax + 8); /* subss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm5; /* movss */
    xmm4 = xmm3; /* movaps */
    if ((xmm3 <= xmm0)) goto loc_0038EF50; /* jbe: below or equal (unsigned <=) */

loc_0038EF22: ;
    xmm5 = MEMF(eax + 0xC); /* movss */
    goto loc_0038EF30;

    /* nop */

loc_0038EF30: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = xmm7; /* movaps */
    if ((xmm4 > xmm0)) goto loc_0038EF30; /* ja: above (unsigned >) */

loc_0038EF4B: ;
    MEMF(eax + 0xC) = xmm5; /* movss */

loc_0038EF50: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - MEMF(eax + 0xC); /* subss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm5; /* movss */
    xmm4 = xmm3; /* movaps */
    if ((xmm3 <= xmm0)) goto loc_0038EFA0; /* jbe: below or equal (unsigned <=) */

loc_0038EF72: ;
    xmm5 = MEMF(eax + 0x10); /* movss */
    goto loc_0038EF80;

    /* nop */

loc_0038EF80: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = xmm7; /* movaps */
    if ((xmm4 > xmm0)) goto loc_0038EF80; /* ja: above (unsigned >) */

loc_0038EF9B: ;
    MEMF(eax + 0x10) = xmm5; /* movss */

loc_0038EFA0: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - MEMF(eax + 0x10); /* subss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm5; /* movss */
    xmm4 = MEMF(eax + 8); /* movss */
    xmm5 = MEMF(ecx + 0x78); /* movss */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(ecx + 0x78) = xmm5; /* movss */
    xmm4 = MEMF(eax + 0xC); /* movss */
    xmm4 = xmm4 - MEMF(esp + 0xC); /* subss */
    xmm5 = MEMF(ecx + 0x7C); /* movss */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(ecx + 0x7C) = xmm5; /* movss */
    xmm4 = MEMF(eax + 0x10); /* movss */
    xmm4 = xmm4 - MEMF(esp + 8); /* subss */
    xmm5 = MEMF(ecx + 0x80); /* movss */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(ecx + 0x80) = xmm5; /* movss */
    xmm4 = MEMF(eax + 0x18); /* movss */
    xmm6 = MEMF(eax + 0x14); /* movss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    xmm4 = MEMF(eax + 0x1C); /* movss */
    MEMF(esp + 8) = xmm4; /* movss */
    xmm4 = xmm3; /* movaps */
    if ((xmm3 <= xmm0)) goto loc_0038F050; /* jbe: below or equal (unsigned <=) */

loc_0038F02C: ;
    xmm5 = xmm6; /* movaps */
    /* nop */

loc_0038F030: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = xmm7; /* movaps */
    if ((xmm4 > xmm0)) goto loc_0038F030; /* ja: above (unsigned >) */

loc_0038F04B: ;
    MEMF(eax + 0x14) = xmm5; /* movss */

loc_0038F050: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - MEMF(eax + 0x14); /* subss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x14) = xmm5; /* movss */
    xmm4 = xmm3; /* movaps */
    if ((xmm3 <= xmm0)) goto loc_0038F0A0; /* jbe: below or equal (unsigned <=) */

loc_0038F072: ;
    xmm5 = MEMF(eax + 0x18); /* movss */
    goto loc_0038F080;

    /* nop */

loc_0038F080: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = xmm7; /* movaps */
    if ((xmm4 > xmm0)) goto loc_0038F080; /* ja: above (unsigned >) */

loc_0038F09B: ;
    MEMF(eax + 0x18) = xmm5; /* movss */

loc_0038F0A0: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - MEMF(eax + 0x18); /* subss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm5; /* movss */
    xmm4 = xmm3; /* movaps */
    if ((xmm3 <= xmm0)) goto loc_0038F0F0; /* jbe: below or equal (unsigned <=) */

loc_0038F0C2: ;
    xmm5 = MEMF(eax + 0x1C); /* movss */
    goto loc_0038F0D0;

    /* nop */

loc_0038F0D0: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = xmm7; /* movaps */
    if ((xmm4 > xmm0)) goto loc_0038F0D0; /* ja: above (unsigned >) */

loc_0038F0EB: ;
    MEMF(eax + 0x1C) = xmm5; /* movss */

loc_0038F0F0: ;
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - MEMF(eax + 0x1C); /* subss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x1C); /* addss */
    MEMF(eax + 0x1C) = xmm5; /* movss */
    xmm2 = MEMF(eax + 0x14); /* movss */
    xmm4 = MEMF(ecx + 0x1C0); /* movss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(ecx + 0x1C0) = xmm4; /* movss */
    xmm2 = MEMF(eax + 0x18); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0xC); /* subss */
    xmm4 = MEMF(ecx + 0x114); /* movss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(ecx + 0x114) = xmm4; /* movss */
    xmm2 = MEMF(eax + 0x1C); /* movss */
    xmm4 = MEMF(ecx + 0x1CC); /* movss */
    xmm2 = xmm2 - MEMF(esp + 8); /* subss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(ecx + 0x1CC) = xmm4; /* movss */
    ecx = MEM32(eax + 0x788);
    if (TEST_NZ(ecx, ecx)) goto loc_0038F2F8; /* jne: not equal / not zero */

loc_0038F173: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm2 = MEMF(eax + 0x77C); /* movss */
    xmm6 = MEMF(eax + 0x778); /* movss */
    xmm4 = MEMF(0x648EF4); /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm2 = xmm3; /* movaps */
    if ((xmm3 <= xmm0)) goto loc_0038F1C3; /* jbe: below or equal (unsigned <=) */

loc_0038F199: ;
    xmm5 = xmm6; /* movaps */
    /* nop */

loc_0038F1A0: ;
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = xmm7; /* movaps */
    if ((xmm2 > xmm0)) goto loc_0038F1A0; /* ja: above (unsigned >) */

loc_0038F1BB: ;
    MEMF(eax + 0x778) = xmm5; /* movss */

loc_0038F1C3: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - MEMF(eax + 0x778); /* subss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x778); /* addss */
    MEMF(eax + 0x778) = xmm5; /* movss */
    xmm2 = xmm3; /* movaps */
    if ((xmm3 <= xmm0)) goto loc_0038F223; /* jbe: below or equal (unsigned <=) */

loc_0038F1EE: ;
    xmm3 = MEMF(eax + 0x77C); /* movss */
    goto loc_0038F200;

    /* nop */
    /* nop */

loc_0038F200: ;
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - xmm3; /* subss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = xmm5; /* movaps */
    if ((xmm2 > xmm0)) goto loc_0038F200; /* ja: above (unsigned >) */

loc_0038F21B: ;
    MEMF(eax + 0x77C) = xmm3; /* movss */

loc_0038F223: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0x77C); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x77C); /* addss */
    MEMF(eax + 0x77C) = xmm0; /* movss */
    xmm2 = MEMF(eax + 0x778); /* movss */
    xmm0 = MEMF(eax + 0x770); /* movss */
    xmm3 = MEMF(eax + 0x774); /* movss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(eax + 0x77C); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0xC); /* subss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = MEMF(0x648F60); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(eax + 0x770) = xmm0; /* movss */
    MEMF(eax + 0x774) = xmm3; /* movss */
    if ((xmm0 <= xmm2)) goto loc_0038F29E; /* jbe: below or equal (unsigned <=) */

loc_0038F295: ;
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_0038F295; /* ja: above (unsigned >) */

loc_0038F29E: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0038F2AC; /* jbe: below or equal (unsigned <=) */

loc_0038F2A3: ;
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0038F2A3; /* ja: above (unsigned >) */

loc_0038F2AC: ;
    MEMF(eax + 0x770) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0038F2C9; /* jbe: below or equal (unsigned <=) */

loc_0038F2BC: ;
    /* nop */

loc_0038F2C0: ;
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_0038F2C0; /* ja: above (unsigned >) */

loc_0038F2C9: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0038F2D9; /* jbe: below or equal (unsigned <=) */

loc_0038F2CE: ;
    edi = edi;

loc_0038F2D0: ;
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0038F2D0; /* ja: above (unsigned >) */

loc_0038F2D9: ;
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(eax + 0x774) = xmm0; /* movss */
    if ((xmm0 < MEMF(0x648E6C))) goto loc_0038F308; /* jb: below (unsigned <) */

loc_0038F2EA: ;
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(eax + 0x774) = xmm0; /* movss */
    goto loc_0038F308;

loc_0038F2F8: ;
    MEMF(eax + 0x77C) = xmm1; /* movss */
    MEMF(eax + 0x778) = xmm1; /* movss */

loc_0038F308: ;
    ecx = MEM32(eax + 0x1F0);
    if (TEST_Z(ecx, ecx)) goto loc_0038F336; /* je: equal / zero */

loc_0038F312: ;
    if (TEST_Z(edx, edx)) goto loc_0038F31B; /* je: equal / zero */

loc_0038F316: ;
    ecx = MEM32(eax + 0x20);
    MEM32(edx) = ecx;

loc_0038F31B: ;
    if (TEST_Z(esi, esi)) goto loc_0038F324; /* je: equal / zero */

loc_0038F31F: ;
    edx = MEM32(eax + 0x24);
    MEM32(esi) = edx;

loc_0038F324: ;
    if (TEST_Z(edi, edi)) goto loc_0038F32D; /* je: equal / zero */

loc_0038F328: ;
    ecx = MEM32(eax + 0x28);
    MEM32(edi) = ecx;

loc_0038F32D: ;
    if (TEST_Z(ebx, ebx)) goto loc_0038F336; /* je: equal / zero */

loc_0038F331: ;
    edx = MEM32(eax + 0x2C);
    MEM32(ebx) = edx;

loc_0038F336: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0038F340
 * Original: 0x0038F340 - 0x0038F557 (535 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038F340: ;
    eax = MEM32(0x84A19C);
    esp = esp - 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ebx = MEM32(edi + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_0038F35E; /* jne: not equal / not zero */

loc_0038F359: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0038F35E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    edx++;
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_0038F3B1; /* je: equal / zero */

loc_0038F385: ;
    if (CMP_B(MEM32(esi + 0x80), 0x9C)) goto loc_0038F3B1; /* jb: below (unsigned <) */

loc_0038F391: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0038F39B: ;
    PUSH32(esp, 0x9C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0038F3A6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0038F463; /* jne: not equal / not zero */

loc_0038F3B1: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0038F3C3: ;
    PUSH32(esp, 0x9C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0038F3CE: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(eax, edx)) goto loc_0038F465; /* jne: not equal / not zero */

loc_0038F3DB: ;
    ebp = 0; /* xor self */

loc_0038F3DD: ;
    eax = (int32_t)MEMF(edi + 0x78); /* cvttss2si */
    xmm4 = MEMF(0x6491F8); /* movss */
    MEM32(ebp + 0x34) = eax;
    ecx = (int32_t)MEMF(edi + 0x7C); /* cvttss2si */
    MEM32(ebp + 0x38) = ecx;
    eax = (int32_t)MEMF(edi + 0x80); /* cvttss2si */
    MEM32(ebp + 0x3C) = eax;
    xmm0 = MEMF(edi + 0x1C0); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(ebp + 0x42) = LO16(ecx);
    xmm0 = MEMF(edi + 0x114); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM16(ebp + 0x40) = LO16(eax);
    xmm0 = MEMF(edi + 0x1CC); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(ebp + 0x44) = LO16(ecx);
    if (CMP_EQ(MEM32(ebx + 0x1F0), edx)) { sub_0038F557(); return; } /* je: equal / zero */

loc_0038F448: ;
    xmm0 = MEMF(0x648D34); /* movss */
    /* comiss xmm0, MEMF(ebx + 0x44) - sets EFLAGS */
    xmm2 = MEMF(0x648D14); /* movss */
    if ((xmm0 <= MEMF(ebx + 0x44))) goto loc_0038F49C; /* jbe: below or equal (unsigned <=) */

loc_0038F45E: ;
    xmm3 = xmm0; /* movaps */
    goto loc_0038F4AC;

loc_0038F463: ;
    edx = 0; /* xor self */

loc_0038F465: ;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM8(eax + 0x30) = 0;
    MEM16(eax + 0x32) = LO16(edx);
    MEM32(eax) = 0x63EA68;
    ebp = eax;
    goto loc_0038F3DD;

loc_0038F49C: ;
    xmm1 = MEMF(ebx + 0x44); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    xmm3 = xmm2; /* movaps */
    if ((xmm1 > xmm2)) goto loc_0038F4AC; /* ja: above (unsigned >) */

loc_0038F4A9: ;
    xmm3 = xmm1; /* movaps */

loc_0038F4AC: ;
    /* comiss xmm0, MEMF(ebx + 0x48) - sets EFLAGS */
    MEMF(ebx + 0x44) = xmm3; /* movss */
    if ((xmm0 <= MEMF(ebx + 0x48))) goto loc_0038F4BC; /* jbe: below or equal (unsigned <=) */

loc_0038F4B7: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0038F4CE;

loc_0038F4BC: ;
    xmm1 = MEMF(ebx + 0x48); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    xmm1 = xmm2; /* movaps */
    if ((xmm1 > xmm2)) goto loc_0038F4CE; /* ja: above (unsigned >) */

loc_0038F4C9: ;
    xmm1 = MEMF(ebx + 0x48); /* movss */

loc_0038F4CE: ;
    /* comiss xmm0, MEMF(ebx + 0x50) - sets EFLAGS */
    MEMF(ebx + 0x48) = xmm1; /* movss */
    if ((xmm0 <= MEMF(ebx + 0x50))) goto loc_0038F4DE; /* jbe: below or equal (unsigned <=) */

loc_0038F4D9: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0038F4F0;

loc_0038F4DE: ;
    xmm1 = MEMF(ebx + 0x50); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    xmm1 = xmm2; /* movaps */
    if ((xmm1 > xmm2)) goto loc_0038F4F0; /* ja: above (unsigned >) */

loc_0038F4EB: ;
    xmm1 = MEMF(ebx + 0x50); /* movss */

loc_0038F4F0: ;
    /* comiss xmm0, MEMF(ebx + 0x4C) - sets EFLAGS */
    MEMF(ebx + 0x50) = xmm1; /* movss */
    if ((xmm0 > MEMF(ebx + 0x4C))) goto loc_0038F50D; /* ja: above (unsigned >) */

loc_0038F4FB: ;
    xmm0 = MEMF(ebx + 0x4C); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    xmm0 = xmm2; /* movaps */
    if ((xmm0 > xmm2)) goto loc_0038F50D; /* ja: above (unsigned >) */

loc_0038F508: ;
    xmm0 = MEMF(ebx + 0x4C); /* movss */

loc_0038F50D: ;
    MEMF(ebx + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D70); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    eax = (int32_t)xmm3; /* cvttss2si */
    MEM8(ebp + 0x46) = LO8(eax);
    xmm1 = MEMF(ebx + 0x48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM8(ebp + 0x47) = LO8(ecx);
    xmm1 = MEMF(ebx + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    MEM8(ebp + 0x48) = LO8(eax);
    xmm1 = MEMF(ebx + 0x4C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM8(ebp + 0x49) = LO8(ecx);
    g_seh_ebp = ebp; sub_0038F567(); return; /* tail jmp 0x0038F567 */

}

/**
 * sub_0038F870
 * Original: 0x0038F870 - 0x0038F8A9 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F870(void)
{
    int _flags = 0; /* fallback flag var */

loc_0038F870: ;
    eax = MEM32(0x84A5F8);
    edx = MEM32(0x84A5FC);
    ecx = 0x10;
    eax = eax + 0x6D00;
    PUSH32(esp, edi);

loc_0038F886: ;
    if (CMP_NE(MEM8(edx + ecx), 0x35)) goto loc_0038F897; /* jne: not equal / not zero */

loc_0038F88C: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xAC);
    if (CMP_EQ(edi, esi)) goto loc_0038F8A7; /* je: equal / zero */

loc_0038F897: ;
    ecx++;
    eax = eax + 0x6D0;
    if (CMP_L(ecx, 0x80)) goto loc_0038F886; /* jl: less (signed <) */

loc_0038F8A5: ;
    eax = 0; /* xor self */

loc_0038F8A7: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038F8B0
 * Original: 0x0038F8B0 - 0x0038F8BF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F8B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0038F8B0: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0038F8BF(); return; } /* jne: not equal / not zero */

loc_0038F8B9: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0038F940
 * Original: 0x0038F940 - 0x0039027E (2366 bytes, 681 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038F940(void)
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

loc_0038F940: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esp = esp - 0x38;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00390279; /* je: equal / zero */

loc_0038F953: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0038F958: ;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x8758EC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0038F980; /* jbe: below or equal (unsigned <=) */

loc_0038F974: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00390279; /* je: equal / zero */

loc_0038F980: ;
    xmm0 = MEMF(esp + 4); /* movss */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(0x864EC1);
    MEM32(esp + 0x30) = eax;
    MEM16(esp + 0x34) = LO16(eax);
    ecx = 0; /* xor self */
    ebp = ebp | 0xFFFFFFFFu;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEMF(0x8758EC) = xmm0; /* movss */
    MEM8(esp + 0x36) = LO8(eax);
    if (CMP_LE(esi, edi)) goto loc_0038F9FB; /* jle: less or equal (signed <=) */

loc_0038F9B8: ;
    eax = 0x865620;
    /* nop */

loc_0038F9C0: ;
    ebx = ZX8(MEM8(eax));
    if (TEST_Z(LO8(ebx), 1)) goto loc_0038F9DA; /* je: equal / zero */

loc_0038F9C8: ;
    (void)0; /* cmp MEM32(eax + 0x2E4), ebp - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(eax + 0x2E4), ebp)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0038F9DA; /* je: equal / zero */

loc_0038F9D5: ;
    MEM8(esp + ecx + 0x28) = 1;

loc_0038F9DA: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_0038F9F1; /* je: equal / zero */

loc_0038F9DF: ;
    (void)0; /* cmp MEM32(eax + 0x2E8), ebp - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(eax + 0x2E8), ebp)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0038F9F1; /* je: equal / zero */

loc_0038F9EC: ;
    MEM8(esp + ecx + 0x28) = 1;

loc_0038F9F1: ;
    ecx++;
    eax = eax + 0xA50;
    if (CMP_L(ecx, esi)) goto loc_0038F9C0; /* jl: less (signed <) */

loc_0038F9FB: ;
    SET_LO8(edx, MEM8(esp + 0x28));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = ebp;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0038FA0E; /* je: equal / zero */

loc_0038FA07: ;
    ecx = 1;
    eax = 0; /* xor self */

loc_0038FA0E: ;
    SET_LO8(edx, MEM8(esp + 0x29));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0038FA1C; /* je: equal / zero */

loc_0038FA16: ;
    ecx++;
    eax = 1;

loc_0038FA1C: ;
    if (CMP_NE(ecx, edi)) goto loc_0038FC0C; /* jne: not equal / not zero */

loc_0038FA24: ;
    edx = MEM32(0x84A5FC);
    ecx = MEM32(0x84A5F8);
    edx = edx + 0x11;
    ecx = ecx + 0x7940;
    esi = 0x1C;
    edi = edi;

loc_0038FA40: ;
    if (CMP_NE(MEM8(edx + -1), 0x35)) goto loc_0038FA57; /* jne: not equal / not zero */

loc_0038FA46: ;
    eax = MEM32(ecx + -1744);
    if (CMP_EQ(eax, edi)) goto loc_0038FA57; /* je: equal / zero */

loc_0038FA50: ;
    MEM16(eax + 0xC6E) = LO16(ebp);

loc_0038FA57: ;
    if (CMP_NE(MEM8(edx), 0x35)) goto loc_0038FA69; /* jne: not equal / not zero */

loc_0038FA5C: ;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, edi)) goto loc_0038FA69; /* je: equal / zero */

loc_0038FA62: ;
    MEM16(eax + 0xC6E) = LO16(ebp);

loc_0038FA69: ;
    if (CMP_NE(MEM8(edx + 1), 0x35)) goto loc_0038FA80; /* jne: not equal / not zero */

loc_0038FA6F: ;
    eax = MEM32(ecx + 0x6D0);
    if (CMP_EQ(eax, edi)) goto loc_0038FA80; /* je: equal / zero */

loc_0038FA79: ;
    MEM16(eax + 0xC6E) = LO16(ebp);

loc_0038FA80: ;
    if (CMP_NE(MEM8(edx + 2), 0x35)) goto loc_0038FA97; /* jne: not equal / not zero */

loc_0038FA86: ;
    eax = MEM32(ecx + 0xDA0);
    if (CMP_EQ(eax, edi)) goto loc_0038FA97; /* je: equal / zero */

loc_0038FA90: ;
    MEM16(eax + 0xC6E) = LO16(ebp);

loc_0038FA97: ;
    edx = edx + 4;
    ecx = ecx + 0x1B40;
    esi--;
    if ((esi != 0)) goto loc_0038FA40; /* jne: not equal / not zero */

loc_0038FAA3: ;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00390276; /* jle: less or equal (signed <=) */

loc_0038FAB4: ;
    ebx = 0x864EC8;
    ebp = 0x10;
    edi = edi;

loc_0038FAC0: ;
    if (CMP_NE(MEM32(0x84A19C), edi)) goto loc_0038FACD; /* jne: not equal / not zero */

loc_0038FAC8: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0038FACD: ;
    esi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    esi++;
    edx++;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x7FA494) = esi;
    MEM32(0x7FA4B4) = edx;
    esi = eax;
    if (CMP_EQ(eax, edi)) goto loc_0038FB46; /* je: equal / zero */

loc_0038FAF2: ;
    if (CMP_B(MEM32(eax + 0x80), 0x140)) goto loc_0038FB46; /* jb: below (unsigned <) */

loc_0038FAFE: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(ecx, edi)) goto loc_0038FB15; /* je: equal / zero */

loc_0038FB0C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0038FB10: ;
    esp = esp + 8;
    goto loc_0038FB32;

loc_0038FB15: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));

loc_0038FB22: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0038FB22; /* ja: above (unsigned >) */

loc_0038FB2D: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0038FB32: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0038FB3D: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, edi)) goto loc_0038FB95; /* jne: not equal / not zero */

loc_0038FB46: ;
    eax = MEM32(0x84A184);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(ecx, edi)) goto loc_0038FB64; /* je: equal / zero */

loc_0038FB5B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0038FB5F: ;
    esp = esp + 8;
    goto loc_0038FB81;

loc_0038FB64: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));

loc_0038FB71: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_0038FB71; /* ja: above (unsigned >) */

loc_0038FB7C: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_0038FB81: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0038FB8C: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, edi)) goto loc_0038FBE6; /* je: equal / zero */

loc_0038FB95: ;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM8(esi + 0x30) = 0;
    MEM16(esi + 0x32) = LO16(edi);
    MEM32(esi) = 0x600C98;
    PUSH32(esp, 0x3E8);
    MEM8(esi + 0x34) = 0;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_0038FBD8: ;
    ecx = MEM32(ebx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0038FBE6: ;
    eax = MEM32(esp + 0x10);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebx = ebx + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_0038FAC0; /* jl: less (signed <) */

loc_0038FC04: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_0038FC0C: ;
    ebp = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA50);
    eax = eax + 0x864EC8;
    MEM32(esp + 0x10) = eax;
    ebx = 0x10;
    ebp = ebp + 0x7270;
    /* nop */

loc_0038FC30: ;
    eax = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(eax + ebx), 0x35)) goto loc_0038FCA3; /* jne: not equal / not zero */

loc_0038FC3B: ;
    esi = MEM32(ebp);
    if (TEST_Z(esi, esi)) goto loc_0038FCA3; /* je: equal / zero */

loc_0038FC42: ;
    SET_LO16(edi, MEM16(esi + 0xC6E));
    if (CMP_EQ(LO16(edi), 0xFFFFFFFFu)) goto loc_0038FC91; /* je: equal / zero */

loc_0038FC4F: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_0038FC59: ;
    if (TEST_NZ(eax, eax)) goto loc_0038FC71; /* jne: not equal / not zero */

loc_0038FC5D: ;
    eax = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(eax + 0x9D8));
    MEM16(esi + 0xC6E) = LO16(ecx);
    goto loc_0038FCA3;

loc_0038FC71: ;
    eax = eax - 0x864EC8;
    ecx = eax;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    SET_LO8(ecx, MEM8(esp + eax + 0x28));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0038FCA3; /* jne: not equal / not zero */

loc_0038FC91: ;
    ecx = MEM32(esp + 0x10);
    SET_LO16(edx, MEM16(ecx + 0x9D8));
    MEM16(esi + 0xC6E) = LO16(edx);

loc_0038FCA3: ;
    ebx++;
    ebp = ebp + 0x6D0;
    if (CMP_L(ebx, 0x80)) goto loc_0038FC30; /* jl: less (signed <) */

loc_0038FCB6: ;
    edx = MEM32(0x84A5FC);
    eax = MEM32(0x84A5F8);
    edx = edx + 0x11;
    eax = eax + 0x7940;
    edi = 0x1C;
    ebx = 0x18A;
    esi = esi | 0xFFFFFFFFu;

loc_0038FCD6: ;
    if (CMP_NE(MEM8(edx + -1), 0x35)) goto loc_0038FCF5; /* jne: not equal / not zero */

loc_0038FCDC: ;
    if (CMP_NE(MEM32(eax + -3032), ebx)) goto loc_0038FCF5; /* jne: not equal / not zero */

loc_0038FCE4: ;
    ecx = MEM32(eax + -1744);
    if (TEST_Z(ecx, ecx)) goto loc_0038FCF5; /* je: equal / zero */

loc_0038FCEE: ;
    MEM16(ecx + 0xC6E) = LO16(esi);

loc_0038FCF5: ;
    if (CMP_NE(MEM8(edx), 0x35)) goto loc_0038FD0F; /* jne: not equal / not zero */

loc_0038FCFA: ;
    if (CMP_NE(MEM32(eax + -1288), ebx)) goto loc_0038FD0F; /* jne: not equal / not zero */

loc_0038FD02: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_0038FD0F; /* je: equal / zero */

loc_0038FD08: ;
    MEM16(ecx + 0xC6E) = LO16(esi);

loc_0038FD0F: ;
    if (CMP_NE(MEM8(edx + 1), 0x35)) goto loc_0038FD2E; /* jne: not equal / not zero */

loc_0038FD15: ;
    if (CMP_NE(MEM32(eax + 0x1C8), ebx)) goto loc_0038FD2E; /* jne: not equal / not zero */

loc_0038FD1D: ;
    ecx = MEM32(eax + 0x6D0);
    if (TEST_Z(ecx, ecx)) goto loc_0038FD2E; /* je: equal / zero */

loc_0038FD27: ;
    MEM16(ecx + 0xC6E) = LO16(esi);

loc_0038FD2E: ;
    if (CMP_NE(MEM8(edx + 2), 0x35)) goto loc_0038FD4D; /* jne: not equal / not zero */

loc_0038FD34: ;
    if (CMP_NE(MEM32(eax + 0x898), ebx)) goto loc_0038FD4D; /* jne: not equal / not zero */

loc_0038FD3C: ;
    ecx = MEM32(eax + 0xDA0);
    if (TEST_Z(ecx, ecx)) goto loc_0038FD4D; /* je: equal / zero */

loc_0038FD46: ;
    MEM16(ecx + 0xC6E) = LO16(esi);

loc_0038FD4D: ;
    edx = edx + 4;
    eax = eax + 0x1B40;
    edi--;
    if ((edi != 0)) goto loc_0038FCD6; /* jne: not equal / not zero */

loc_0038FD5C: ;
    PUSH32(esp, 0); sub_00397C70(); /* call 0x00397C70 */

loc_0038FD61: ;
    MEM32(esp + 0x20) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x10) = eax;
    ebp = 0x8658A0;

loc_0038FD74: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esp + eax + 0x28));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0038FE8F; /* je: equal / zero */

loc_0038FD84: ;
    PUSH32(esp, 0); sub_00061AB0(); /* call 0x00061AB0 */

loc_0038FD89: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp);
    ebx = 0x10;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x14) = ebx;
    goto loc_0038FDB0;

    /* nop */
    /* nop */

loc_0038FDB0: ;
    edx = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(edx + ebx), 0x35)) goto loc_0038FE0F; /* jne: not equal / not zero */

loc_0038FDBC: ;
    ecx = MEM32(0x84A5F8);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + ecx + 0x570);
    if (TEST_Z(eax, eax)) goto loc_0038FE0F; /* je: equal / zero */

loc_0038FDD5: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xC6E);
    if (CMP_NE(edx, MEM32(esp + 0x38))) goto loc_0038FE0F; /* jne: not equal / not zero */

loc_0038FDE2: ;
    eax = MEM32(esp + 0x40);
    esi = MEM32(eax);
    edx = MEM32(esi + 4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061B50(); /* call 0x00061B50 */

loc_0038FDF7: ;
    ecx = 1;
    edx = esp + 0x3C;
    edi = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_0038FE07: ;
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 4);
    MEM32(eax) = edi;

loc_0038FE0F: ;
    ebx++;
    (void)0; /* cmp ebx, 0x80 - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(ebx, 0x80)) goto loc_0038FDB0; /* jl: less (signed <) */

loc_0038FE1C: ;
    ecx = MEM32(esp + 0x20);
    esi = MEM32(ecx);
    eax = MEM32(esi + 4);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00397E10(); /* call 0x00397E10 */

loc_0038FE31: ;
    ecx = 1;
    edx = esp + 0x1C;
    edi = eax;
    PUSH32(esp, 0); sub_00140E80(); /* call 0x00140E80 */

loc_0038FE41: ;
    MEM32(esi + 4) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = edi;
    edi = esp + 0x3C;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_0038FE52: ;
    esi = MEM32(esp + 0x40);
    if (TEST_Z(esi, esi)) goto loc_0038FE87; /* je: equal / zero */

loc_0038FE5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0038FE60: ;
    if (TEST_NZ(eax, eax)) goto loc_0038FE87; /* jne: not equal / not zero */

loc_0038FE64: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0038FE84: ;
    esp = esp + 4;

loc_0038FE87: ;
    MEM32(esp + 0x40) = 0;

loc_0038FE8F: ;
    edx = MEM32(esp + 0x10);
    edx++;
    ebp = ebp + 0xA50;
    (void)0; /* cmp ebp, 0x86F350 - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(ebp, 0x86F350)) goto loc_0038FD74; /* jl: less (signed <) */

loc_0038FEAA: ;
    if (CMP_BE(MEM32(esp + 0x24), 1)) goto loc_0038FFA6; /* jbe: below or equal (unsigned <=) */

loc_0038FEB5: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003979A0(); /* call 0x003979A0 */

loc_0038FEBF: ;
    eax = MEM32(esp + 0x20);
    ebp = MEM32(eax);
    esi = MEM32(eax + 4);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(esi + 0x14);
    ebp = ebp + 8;
    esi = esi + 8;
    eax++;
    if (CMP_GE(eax, ecx)) goto loc_0038FFA6; /* jge: greater or equal (signed >=) */

loc_0038FEDD: ;
    /* nop */

loc_0038FEE0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    ebx = MEM32(edx + 8);
    eax = ecx;
    edi = MEM32(eax);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(edi, eax)) goto loc_0038FF31; /* je: equal / zero */

loc_0038FEF4: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    PUSH32(esp, edi);
    MEM32(edx + 4) = eax;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0038FF09: ;
    if (TEST_NZ(eax, eax)) goto loc_0038FF2E; /* jne: not equal / not zero */

loc_0038FF0D: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0038FF2B: ;
    esp = esp + 4;

loc_0038FF2E: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;

loc_0038FF31: ;
    ecx = MEM32(ebp + 8);
    esi = MEM32(ecx);
    eax = MEM32(esi + 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061B50(); /* call 0x00061B50 */

loc_0038FF45: ;
    ecx = 1;
    edx = ebp + 4;
    edi = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_0038FF54: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    edx = MEM32(0x84A5F8);
    MEM32(esi + 4) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = edi;
    ebx = MEM32(ebx + edx + 0x570);
    if (TEST_Z(ebx, ebx)) goto loc_0038FF7E; /* je: equal / zero */

loc_0038FF73: ;
    SET_LO16(eax, MEM16(ebp));
    MEM16(ebx + 0xC6E) = LO16(eax);

loc_0038FF7E: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003979A0(); /* call 0x003979A0 */

loc_0038FF88: ;
    eax = MEM32(esp + 0x20);
    ebp = MEM32(eax);
    esi = MEM32(eax + 4);
    edx = MEM32(ebp + 0x14);
    eax = MEM32(esi + 0x14);
    ebp = ebp + 8;
    esi = esi + 8;
    edx++;
    if (CMP_L(edx, eax)) goto loc_0038FEE0; /* jl: less (signed <) */

loc_0038FFA6: ;
    SET_LO8(eax, MEM8(0x864EC1));
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00390237; /* jle: less or equal (signed <=) */

loc_0038FFB9: ;
    ebp = 0x864EC8;
    MEM32(esp + 0x10) = ebp;
    edi = 0x10;

loc_0038FFC7: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0038FFD4; /* jne: not equal / not zero */

loc_0038FFCF: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0038FFD4: ;
    esi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    esi++;
    edx++;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x7FA494) = esi;
    MEM32(0x7FA4B4) = edx;
    esi = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00390054; /* je: equal / zero */

loc_0038FFF9: ;
    if (CMP_B(MEM32(eax + 0x80), 0x140)) goto loc_00390054; /* jb: below (unsigned <) */

loc_00390005: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(ecx, ebx)) goto loc_0039001C; /* je: equal / zero */

loc_00390013: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00390017: ;
    esp = esp + 8;
    goto loc_00390040;

loc_0039001C: ;
    SET_LO16(ecx, MEM16(esp + 0x18));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));
    /* nop */

loc_00390030: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_00390030; /* ja: above (unsigned >) */

loc_0039003B: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_00390040: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0039004B: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_003900A8; /* jne: not equal / not zero */

loc_00390054: ;
    eax = MEM32(0x84A184);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(ecx, ebx)) goto loc_00390072; /* je: equal / zero */

loc_00390069: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0039006D: ;
    esp = esp + 8;
    goto loc_00390090;

loc_00390072: ;
    SET_LO16(ecx, MEM16(esp + 0x18));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));
    /* nop */

loc_00390080: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_00390080; /* ja: above (unsigned >) */

loc_0039008B: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_00390090: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0039009B: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_00390215; /* je: equal / zero */

loc_003900A8: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM8(esi + 0x30) = 0;
    MEM16(esi + 0x32) = LO16(ebx);
    MEM32(esi) = 0x600C98;
    MEM8(esi + 0x34) = 0;
    MEM32(esi + 0x38) = ebx;
    if (CMP_NE(MEM8(ebp + 0x9DA), 1)) goto loc_003901FB; /* jne: not equal / not zero */

loc_003900EC: ;
    edx = MEM32(0x84A5FC);
    eax = MEM32(0x84A5F8);
    edx = edx + 0x11;
    eax = eax + 0x6DAC;
    edi = 0x1C;

loc_00390104: ;
    if (CMP_NE(MEM8(edx + -1), 0x35)) goto loc_0039013A; /* jne: not equal / not zero */

loc_0039010A: ;
    ecx = MEM32(eax + 0x4C4);
    if (CMP_EQ(ecx, ebx)) goto loc_0039013A; /* je: equal / zero */

loc_00390114: ;
    SET_LO16(ecx, MEM16(ecx + 0xC6E));
    if (CMP_NE(LO16(ecx), MEM16(ebp + 0x9D8))) goto loc_0039013A; /* jne: not equal / not zero */

loc_00390124: ;
    ecx = MEM32(esi + 0x38);
    SET_LO16(ebp, MEM16(eax));
    MEM16(esi + ecx * 2 + 0x3C) = LO16(ebp);
    ecx = MEM32(esi + 0x38);
    ebp = MEM32(esp + 0x10);
    ecx++;
    MEM32(esi + 0x38) = ecx;

loc_0039013A: ;
    if (CMP_NE(MEM8(edx), 0x35)) goto loc_00390173; /* jne: not equal / not zero */

loc_0039013F: ;
    ecx = MEM32(eax + 0xB94);
    if (CMP_EQ(ecx, ebx)) goto loc_00390173; /* je: equal / zero */

loc_00390149: ;
    SET_LO16(ecx, MEM16(ecx + 0xC6E));
    if (CMP_NE(LO16(ecx), MEM16(ebp + 0x9D8))) goto loc_00390173; /* jne: not equal / not zero */

loc_00390159: ;
    ecx = MEM32(esi + 0x38);
    SET_LO16(ebp, MEM16(eax + 0x6D0));
    MEM16(esi + ecx * 2 + 0x3C) = LO16(ebp);
    ecx = MEM32(esi + 0x38);
    ebp = MEM32(esp + 0x10);
    ecx++;
    MEM32(esi + 0x38) = ecx;

loc_00390173: ;
    if (CMP_NE(MEM8(edx + 1), 0x35)) goto loc_003901AD; /* jne: not equal / not zero */

loc_00390179: ;
    ecx = MEM32(eax + 0x1264);
    if (CMP_EQ(ecx, ebx)) goto loc_003901AD; /* je: equal / zero */

loc_00390183: ;
    SET_LO16(ecx, MEM16(ecx + 0xC6E));
    if (CMP_NE(LO16(ecx), MEM16(ebp + 0x9D8))) goto loc_003901AD; /* jne: not equal / not zero */

loc_00390193: ;
    ecx = MEM32(esi + 0x38);
    SET_LO16(ebp, MEM16(eax + 0xDA0));
    MEM16(esi + ecx * 2 + 0x3C) = LO16(ebp);
    ecx = MEM32(esi + 0x38);
    ebp = MEM32(esp + 0x10);
    ecx++;
    MEM32(esi + 0x38) = ecx;

loc_003901AD: ;
    if (CMP_NE(MEM8(edx + 2), 0x35)) goto loc_003901E7; /* jne: not equal / not zero */

loc_003901B3: ;
    ecx = MEM32(eax + 0x1934);
    if (CMP_EQ(ecx, ebx)) goto loc_003901E7; /* je: equal / zero */

loc_003901BD: ;
    SET_LO16(ecx, MEM16(ecx + 0xC6E));
    if (CMP_NE(LO16(ecx), MEM16(ebp + 0x9D8))) goto loc_003901E7; /* jne: not equal / not zero */

loc_003901CD: ;
    ecx = MEM32(esi + 0x38);
    SET_LO16(ebp, MEM16(eax + 0x1470));
    MEM16(esi + ecx * 2 + 0x3C) = LO16(ebp);
    ecx = MEM32(esi + 0x38);
    ebp = MEM32(esp + 0x10);
    ecx++;
    MEM32(esi + 0x38) = ecx;

loc_003901E7: ;
    edx = edx + 4;
    eax = eax + 0x1B40;
    edi--;
    if ((edi != 0)) goto loc_00390104; /* jne: not equal / not zero */

loc_003901F6: ;
    edi = 0x10;

loc_003901FB: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_00390207: ;
    eax = MEM32(ebp + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00390215: ;
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebp = ebp + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(eax, ecx)) goto loc_0038FFC7; /* jl: less (signed <) */

loc_00390237: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00397D10(); /* call 0x00397D10 */

loc_00390241: ;
    esi = MEM32(esp + 0x20);
    if (CMP_EQ(esi, ebx)) goto loc_00390276; /* je: equal / zero */

loc_00390249: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0039024F: ;
    if (TEST_NZ(eax, eax)) goto loc_00390276; /* jne: not equal / not zero */

loc_00390253: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00390273: ;
    esp = esp + 4;

loc_00390276: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00390279: ;
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
 * sub_00390280
 * Original: 0x00390280 - 0x00390404 (388 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00390280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00390280: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5FC);
    edx = edx + 0x7270;
    edi = edi + 0x11;
    MEM32(esp + 0xC) = 0x1C;
    SET_LO8(ebx, 0x35);
    ebp = ebp | 0xFFFFFFFFu;

loc_003902A6: ;
    if (CMP_NE(MEM8(edi + -1), LO8(ebx))) goto loc_003902EE; /* jne: not equal / not zero */

loc_003902AB: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_003902EE; /* je: equal / zero */

loc_003902B1: ;
    SET_LO16(ecx, MEM16(esi + 0x9D8));
    if (CMP_EQ(MEM16(eax + 0xC6E), LO16(ecx))) goto loc_003902C6; /* je: equal / zero */

loc_003902C1: ;
    if (CMP_NE(LO16(ecx), LO16(ebp))) goto loc_003902CD; /* jne: not equal / not zero */

loc_003902C6: ;
    MEM16(eax + 0xC6E) = LO16(ebp);

loc_003902CD: ;
    ecx = MEM32(esi + 0x9DC);
    if (CMP_EQ(ecx, ebp)) goto loc_003902EE; /* je: equal / zero */

loc_003902D7: ;
    (void)0; /* cmp ecx, MEM32(eax + 0x784) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, MEM32(eax + 0x784))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003902EE; /* je: equal / zero */

loc_003902E4: ;
    MEM32(eax + 0x784) = 0xFFFFFFFEu;

loc_003902EE: ;
    SET_LO8(eax, MEM8(edi));
    edx = edx + 0x6D0;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0039033D; /* jne: not equal / not zero */

loc_003902FA: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_0039033D; /* je: equal / zero */

loc_00390300: ;
    SET_LO16(ecx, MEM16(esi + 0x9D8));
    if (CMP_EQ(MEM16(eax + 0xC6E), LO16(ecx))) goto loc_00390315; /* je: equal / zero */

loc_00390310: ;
    if (CMP_NE(LO16(ecx), LO16(ebp))) goto loc_0039031C; /* jne: not equal / not zero */

loc_00390315: ;
    MEM16(eax + 0xC6E) = LO16(ebp);

loc_0039031C: ;
    ecx = MEM32(esi + 0x9DC);
    if (CMP_EQ(ecx, ebp)) goto loc_0039033D; /* je: equal / zero */

loc_00390326: ;
    (void)0; /* cmp ecx, MEM32(eax + 0x784) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, MEM32(eax + 0x784))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0039033D; /* je: equal / zero */

loc_00390333: ;
    MEM32(eax + 0x784) = 0xFFFFFFFEu;

loc_0039033D: ;
    SET_LO8(eax, MEM8(edi + 1));
    edx = edx + 0x6D0;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0039038D; /* jne: not equal / not zero */

loc_0039034A: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_0039038D; /* je: equal / zero */

loc_00390350: ;
    SET_LO16(ecx, MEM16(esi + 0x9D8));
    if (CMP_EQ(MEM16(eax + 0xC6E), LO16(ecx))) goto loc_00390365; /* je: equal / zero */

loc_00390360: ;
    if (CMP_NE(LO16(ecx), LO16(ebp))) goto loc_0039036C; /* jne: not equal / not zero */

loc_00390365: ;
    MEM16(eax + 0xC6E) = LO16(ebp);

loc_0039036C: ;
    ecx = MEM32(esi + 0x9DC);
    if (CMP_EQ(ecx, ebp)) goto loc_0039038D; /* je: equal / zero */

loc_00390376: ;
    (void)0; /* cmp ecx, MEM32(eax + 0x784) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, MEM32(eax + 0x784))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0039038D; /* je: equal / zero */

loc_00390383: ;
    MEM32(eax + 0x784) = 0xFFFFFFFEu;

loc_0039038D: ;
    SET_LO8(eax, MEM8(edi + 2));
    edx = edx + 0x6D0;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003903DD; /* jne: not equal / not zero */

loc_0039039A: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_003903DD; /* je: equal / zero */

loc_003903A0: ;
    SET_LO16(ecx, MEM16(esi + 0x9D8));
    if (CMP_EQ(MEM16(eax + 0xC6E), LO16(ecx))) goto loc_003903B5; /* je: equal / zero */

loc_003903B0: ;
    if (CMP_NE(LO16(ecx), LO16(ebp))) goto loc_003903BC; /* jne: not equal / not zero */

loc_003903B5: ;
    MEM16(eax + 0xC6E) = LO16(ebp);

loc_003903BC: ;
    ecx = MEM32(esi + 0x9DC);
    if (CMP_EQ(ecx, ebp)) goto loc_003903DD; /* je: equal / zero */

loc_003903C6: ;
    (void)0; /* cmp ecx, MEM32(eax + 0x784) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, MEM32(eax + 0x784))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003903DD; /* je: equal / zero */

loc_003903D3: ;
    MEM32(eax + 0x784) = 0xFFFFFFFEu;

loc_003903DD: ;
    eax = MEM32(esp + 0xC);
    edx = edx + 0x6D0;
    edi = edi + 4;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_003902A6; /* jne: not equal / not zero */

loc_003903F5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0038F940(); /* call 0x0038F940 */

loc_003903FC: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00390410
 * Original: 0x00390410 - 0x003904C8 (184 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00390410(void)
{
    int _flags = 0; /* fallback flag var */

loc_00390410: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_00390423; /* jne: not equal / not zero */

loc_0039041E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00390423: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00390471; /* je: equal / zero */

loc_00390449: ;
    if (CMP_B(MEM32(esi + 0x80), 0x9C)) goto loc_00390471; /* jb: below (unsigned <) */

loc_00390455: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0039045F: ;
    PUSH32(esp, 0x9C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0039046A: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00390495; /* jne: not equal / not zero */

loc_00390471: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00390483: ;
    PUSH32(esp, 0x9C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0039048E: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_003904C8(); return; } /* je: equal / zero */

loc_00390495: ;
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
    MEM32(eax) = 0x63EA68;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
