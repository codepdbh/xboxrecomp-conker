/**
 * Burnout 3 - Recompiled code chunk 19
 * Functions: 250 (0x001AA4C0 - 0x001CD370)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001AA4C0
 * Original: 0x001AA4C0 - 0x001AA50A (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA4C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA4C0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = eax;
    edx = 0x418;
    /* nop */

loc_001AA4D0: ;
    MEM32(ecx) = 0;
    MEMF(ecx + 4) = xmm0; /* movss */
    ecx = ecx + 0xC;
    edx--;
    if ((edx != 0)) goto loc_001AA4D0; /* jne: not equal / not zero */

loc_001AA4E1: ;
    ecx = eax + 0x3120;
    edx = 0x418;
    /* nop */

loc_001AA4F0: ;
    MEM32(ecx) = 0;
    MEMF(ecx + 4) = xmm0; /* movss */
    ecx = ecx + 0xC;
    edx--;
    if ((edx != 0)) goto loc_001AA4F0; /* jne: not equal / not zero */

loc_001AA501: ;
    ecx = eax;
    edx = 0x418;
    g_seh_ebp = ebp; sub_001AA510(); return; /* tail jmp 0x001AA510 */

}

/**
 * sub_001AA530
 * Original: 0x001AA530 - 0x001AA5CC (156 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AA530: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    MEM32(esp + 0x10) = 3;
    esi = ecx;

loc_001AA546: ;
    ecx = MEM32(esp + 0x10);
    ecx--;
    edx = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    ecx = 0x418;
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esp + 0x20);
    edx = edx + edx * 2;
    ecx = MEM32(eax + edx * 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = eax + edx * 4;
    MEM32(eax) = esi;
    edx = MEM32(eax + 8);
    ebp = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;
    if (TEST_Z(ecx, ecx)) goto loc_001AA5C2; /* je: equal / zero */

loc_001AA57D: ;
    eax = 0xFA232CF3u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    edx = 0; /* xor self */
    eax = eax >> 0xA;
    esi = 0x418;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    ebx = MEM32(esp + 0x18);
    edx = edx + esi;
    eax = edx + edx * 2;
    edx = MEM32(esp + 0x20);
    eax = edx + eax * 4;
    edx = MEM32(eax);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax) = ecx;
    ecx = MEM32(eax + 4);
    edi = MEM32(eax + 8);
    MEM32(eax + 8) = ebx;
    esi = edx;
    MEM32(eax + 4) = ebp;
    ebx = ecx;
    if (TEST_Z(edx, edx)) goto loc_001AA5C2; /* je: equal / zero */

loc_001AA5BA: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001AA546; /* jne: not equal / not zero */

loc_001AA5C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001AA5D0
 * Original: 0x001AA5D0 - 0x001AA61B (75 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA5D0(void)
{
    float xmm0, xmm1;

loc_001AA5D0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x48); /* movss */
    xmm1 = MEMF(eax + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x2C); /* addss */
    MEMF(eax + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001AA620
 * Original: 0x001AA620 - 0x001AA8B2 (658 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA620(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AA620: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001AA63D; /* je: equal / zero */

loc_001AA631: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001AA637: ;
    MEM32(0x771760) = esi;

loc_001AA63D: ;
    eax = MEM32(0x771764);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001AA656; /* je: equal / zero */

loc_001AA648: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001AA650: ;
    MEM32(0x771764) = ebx;

loc_001AA656: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001AA679: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001AA692: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001AA6AC; /* je: equal / zero */

loc_001AA6A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001AA6A6: ;
    MEM32(0x77182C) = esi;

loc_001AA6AC: ;
    if (CMP_EQ(MEM32(0x771828), ebx)) goto loc_001AA6C0; /* je: equal / zero */

loc_001AA6B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001AA6BA: ;
    MEM32(0x771828) = ebx;

loc_001AA6C0: ;
    eax = MEM32(0x771824);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_001AA6E7; /* je: equal / zero */

loc_001AA6CF: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001AA6DB: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_001AA6E7: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_001AA707; /* je: equal / zero */

loc_001AA6EF: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001AA6FB: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_001AA707: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_001AA71B; /* je: equal / zero */

loc_001AA70F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001AA715: ;
    MEM32(0x77181C) = edi;

loc_001AA71B: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001AA741; /* je: equal / zero */

loc_001AA729: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001AA735: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001AA741: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_001AA761; /* je: equal / zero */

loc_001AA749: ;
    edx = edi;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001AA755: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_001AA761: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_001AA77F; /* je: equal / zero */

loc_001AA769: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_001AA77F: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001AA787: ;
    eax = MEM32(0x7717E4);
    ecx = 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, ecx)) goto loc_001AA7AB; /* je: equal / zero */

loc_001AA79A: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_001AA7AB: ;
    if (CMP_EQ(MEM32(0x7717C4), ecx)) goto loc_001AA7C4; /* je: equal / zero */

loc_001AA7B3: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ecx;
    MEM32(0x7717C4) = ecx;

loc_001AA7C4: ;
    if (CMP_EQ(MEM32(0x7717A4), ecx)) goto loc_001AA7DD; /* je: equal / zero */

loc_001AA7CC: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ecx;
    MEM32(0x7717A4) = ecx;

loc_001AA7DD: ;
    if (CMP_EQ(MEM32(0x771784), ecx)) goto loc_001AA7F6; /* je: equal / zero */

loc_001AA7E5: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ecx;
    MEM32(0x771784) = ecx;

loc_001AA7F6: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | edi;
    if (CMP_EQ(ecx, edi)) goto loc_001AA824; /* je: equal / zero */

loc_001AA813: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_001AA824: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_001AA83D; /* je: equal / zero */

loc_001AA82C: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_001AA83D: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = ebx;
    POP32(esp, edi);
    if (CMP_EQ(eax, esi)) goto loc_001AA874; /* je: equal / zero */

loc_001AA85C: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001AA868: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001AA874: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_001AA89A; /* je: equal / zero */

loc_001AA882: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001AA88E: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001AA89A: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_001AA8AF; /* je: equal / zero */

loc_001AA8A2: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001AA8A9: ;
    MEM32(0x77175C) = ebx;

loc_001AA8AF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AA8C0
 * Original: 0x001AA8C0 - 0x001AA987 (199 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AA8C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001AA8C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1D4;
    SET_LO8(eax, MEM8(0x75BB5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001AA972; /* jbe: below or equal (unsigned <=) */

loc_001AA8DC: ;
    esi = MEM32(0x75BB58);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_001AA911; /* jne: not equal / not zero */

loc_001AA8E9: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001AA8FA: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001AA902: ;
    ecx = MEM32(0x75BB58);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75BB58);

loc_001AA911: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001AA93D; /* jne: not equal / not zero */

loc_001AA918: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_001AA920: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75BB58);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001AA93D; /* jne: not equal / not zero */

loc_001AA930: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75BB58);

loc_001AA93D: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_001AA966; /* jne: not equal / not zero */

loc_001AA945: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_001AA961; /* jne: not equal / not zero */

loc_001AA94F: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001AA958: ;
    esi = MEM32(0x75BB58);
    esp = esp + 8;

loc_001AA961: ;
    esi = MEM32(esi + 4);
    goto loc_001AA96E;

loc_001AA966: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_001AA96B: ;
    esi = MEM32(eax + 4);

loc_001AA96E: ;
    if (TEST_NZ(esi, esi)) { sub_001AA987(); return; } /* jne: not equal / not zero */

loc_001AA972: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001AA97B: ;
    MEM32(0x771764) = 0;
    g_seh_ebp = ebp; sub_001AA99E(); return; /* tail jmp 0x001AA99E */

}

/**
 * sub_001AB210
 * Original: 0x001AB210 - 0x001AB470 (608 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB210(void)
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

loc_001AB210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x8C;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    PUSH32(esp, edi);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, edi);
    SET_LO8(eax, 0x79);
    ecx = esp + 0x54;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_001AB25E: ;
    edx = MEM32(0x5A02D8);
    eax = MEM32(0x5A02DC);
    ecx = MEM32(0x5A02E0);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x5A02F0);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x5A02F4);
    esp = esp + 4;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x5A02F8);
    MEM32(esp + 0x34) = edx;
    edx = esp + 0x50;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001AB2AD: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001AB2BF: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = (uint32_t)(int32_t)SMEM16(esi);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6 = xmm2; /* movaps */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5 = xmm1; /* movaps */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm5; /* addss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0x30); /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 8); /* addss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    MEMF(esp + 8) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    edx = ZX16(MEM16(esi + 0x1E));
    xmm2 = MEMF(0x648D14); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm1 = MEMF(0x648D44); /* movss */
    xmm5 = xmm5 + MEMF(esp + 0x10); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esi + 0x1C);
    edx = edx & 0xFFFF;
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    ecx = (int32_t)xmm4; /* cvttss2si */
    MEMF(esp + 0x40) = xmm0; /* movss */
    if (CMP_GE(edx & edx, 0)) goto loc_001AB3CE; /* jge: greater or equal (signed >=) */

loc_001AB3C8: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001AB3CE: ;
    edx = ZX16(MEM16(esi + 0x22));
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esi + 0x20);
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    edx = edx & 0xFFFF;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEMF(esp + 0x48) = xmm0; /* movss */
    if (CMP_GE(edx & edx, 0)) goto loc_001AB403; /* jge: greater or equal (signed >=) */

loc_001AB3FD: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001AB403: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = esp + 0x48;
    PUSH32(esp, edx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    edx = ecx;
    edx = edx & 0x80000003u;
    PUSH32(esp, 0x41800000);
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x41800000);
    if (((int32_t)edx >= 0)) goto loc_001AB434; /* jns: not sign (positive) */

loc_001AB42F: ;
    edx--;
    edx = edx | 0xFFFFFFFCu;
    edx++;

loc_001AB434: ;
    ecx = ecx - edx;
    ecx = ecx + 4;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx & 0x80000003u;
    if (((int32_t)ecx >= 0)) goto loc_001AB449; /* jns: not sign (positive) */

loc_001AB444: ;
    ecx--;
    ecx = ecx | 0xFFFFFFFCu;
    ecx++;

loc_001AB449: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    eax = eax - ecx;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    eax = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001AB470(); /* call 0x001AB470 */

loc_001AB468: ;
    esp = esp + 0x2C;
    POP32(esp, edi);
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
 * sub_001AB470
 * Original: 0x001AB470 - 0x001AB4A9 (57 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001AB470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 3);
    eax = 0x160;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001AB495: ;
    edi = eax;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(edi, edx)) { sub_001AB4A9(); return; } /* jne: not equal / not zero */

loc_001AB4A0: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001AB7E0
 * Original: 0x001AB7E0 - 0x001AB803 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB7E0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB7E0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = 1;
    edi = esi + 0x104;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = 4;
    g_seh_ebp = ebp; sub_001AB807(); return; /* tail jmp 0x001AB807 */

}

/**
 * sub_001AB990
 * Original: 0x001AB990 - 0x001ABA4D (189 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AB990: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    xmm1 = MEMF(ebx + 0xD0); /* movss */
    ecx = MEM32(ebx + 0x100);
    SET_LO8(eax, MEM8(ebx + 0x150));
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebx + 0xD0) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 / MEMF(ebx + 0x68); /* divss */
    xmm0 = xmm0 / MEMF(ebx + 0x6C); /* divss */
    xmm1 = xmm1 + MEMF(ebx + 0x60); /* addss */
    xmm0 = xmm0 + MEMF(ebx + 0x64); /* addss */
    ecx = ecx ^ 1;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(ebx + 0x100) = ecx;
    MEMF(ebx + 0x60) = xmm1; /* movss */
    MEMF(ebx + 0x64) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AB9F6; /* jne: not equal / not zero */

loc_001AB9ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001ACD20(); /* call 0x001ACD20 */

loc_001AB9F3: ;
    esp = esp + 4;

loc_001AB9F6: ;
    PUSH32(esp, esi);
    edi = ebx + 0xDC;
    ebp = ebx + 0xD8;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = ebx;
    PUSH32(esp, 0); sub_001AD6C0(); /* call 0x001AD6C0 */

loc_001ABA0C: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_001ABA4D(); return; } /* je: equal / zero */

loc_001ABA14: ;
    ecx = MEM32(ebx + 0x3C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x38));
    eax = MEM32(ebx + 0xF0);
    PUSH32(esp, 0x3F79999A);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEE40(); /* call 0x001AEE40 */

loc_001ABA2C: ;
    edx = MEM32(edi);
    ecx = MEM32(ebp);
    esp = esp + 8;
    PUSH32(esp, 0); sub_001ADCF0(); /* call 0x001ADCF0 */

loc_001ABA39: ;
    xmm0 = MEMF(0x648D20); /* movss */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEMF(ebx + 0xD4) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ABAA0
 * Original: 0x001ABAA0 - 0x001AC371 (2257 bytes, 434 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ABAA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001ABAA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x144;
    eax = MEM32(0x6B83BC);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001ABACA; /* je: equal / zero */

loc_001ABABE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001ABAC4: ;
    MEM32(0x771760) = esi;

loc_001ABACA: ;
    eax = MEM32(0x6B8C54);
    (void)0; /* cmp MEM32(0x77175C), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x77175C), eax)) goto loc_001ABAE4; /* je: equal / zero */

loc_001ABAD9: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001ABADE: ;
    MEM32(0x77175C) = esi;

loc_001ABAE4: ;
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = MEM32(0x84A13C);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = edi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001ABB08: ;
    ecx = MEM32(0x84A13C);
    eax = edi + ecx + 0x100;
    ecx = esp + 0x18;
    esi = esp + 0x110;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_001ABB25: ;
    edx = esi;
    eax = esi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x2C) = eax;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x2C);
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
    ecx = 0x9C;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001ABB85: ;
    ecx = MEM32(0x84A13C);
    edx = edi + ecx + 0x100;
    PUSH32(esp, 0x10);
    ecx = 0xB0;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001ABB9E: ;
    xmm0 = MEMF(0x64A5B4); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x100) = xmm0; /* movss */
    xmm0 = MEMF(0x649484); /* movss */
    MEMF(esp + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5B0); /* movss */
    edx = esp + 0x100;
    ecx = 0x6A;
    MEMF(esp + 0x108) = xmm0; /* movss */
    MEMF(esp + 0x10C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABBF3: ;
    xmm0 = MEMF(0x648E1C); /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5AC); /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5A8); /* movss */
    edx = esp + 0xE0;
    ecx = 0x6B;
    MEMF(esp + 0xE8) = xmm0; /* movss */
    MEMF(esp + 0xEC) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABC40: ;
    edx = esp + 0x60;
    ecx = 0x73;
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABC66: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0xC0;
    ecx = 0x74;
    MEMF(esp + 0xC0) = xmm1; /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0xCC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABC9E: ;
    edx = esp + 0x80;
    ecx = 0x75;
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABCD3: ;
    edx = esp + 0x30;
    ecx = 0x76;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABCF9: ;
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    edx = esp + 0xA0;
    ecx = 0x77;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABD2E: ;
    edx = esp + 0x40;
    ecx = 0x78;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABD54: ;
    xmm2 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm2 = MEMF(0x648D30); /* movss */
    edx = esp + 0x50;
    ecx = 0x7E;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABD8A: ;
    xmm2 = MEMF(0x648EF4); /* movss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    edx = esp + 0x70;
    ecx = 0x80;
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm2; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABDC0: ;
    edx = esp + 0x90;
    ecx = 0x82;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABDF5: ;
    edx = esp + 0xB0;
    ecx = 0x84;
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm1; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABE2A: ;
    xmm2 = MEMF(0x648E58); /* movss */
    MEMF(esp + 0xD0) = xmm2; /* movss */
    xmm2 = MEMF(0x6495C8); /* movss */
    edx = esp + 0xD0;
    ecx = 0x85;
    MEMF(esp + 0xD4) = xmm2; /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    MEMF(esp + 0xDC) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABE6F: ;
    edx = MEM32(0x84A13C);
    PUSH32(esp, 0x10);
    edx = edi + edx + 0xC0;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001ABE88: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x770);
    eax = MEM32(0x8470DC);
    xmm2 = MEMF(ebx + eax + 0x338); /* movss */
    xmm3 = MEMF(ebx + eax + 0x334); /* movss */
    xmm4 = MEMF(ebx + eax + 0x330); /* movss */
    ebx = ebx + eax;
    edx = esp + 0x1C;
    ecx = 0x60;
    MEMF(esp + 0x1C) = xmm4; /* movss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABED6: ;
    ecx = esp + 0xF0;
    MEMF(esp + 0xF0) = xmm0; /* movss */
    MEMF(esp + 0xF4) = xmm0; /* movss */
    MEMF(esp + 0xF8) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    PUSH32(esp, ecx);
    edi = 1;
    eax = edi;
    ecx = 0; /* xor self */
    MEMF(esp + 0x100) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_001ABF18: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edx = esp + 0x1C;
    ecx = 0xA6;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001ABF46: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001ABF60; /* je: equal / zero */

loc_001ABF54: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001ABF5A: ;
    MEM32(0x77182C) = esi;

loc_001ABF60: ;
    eax = MEM32(0x771828);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001ABF77; /* je: equal / zero */

loc_001ABF6B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001ABF71: ;
    MEM32(0x771828) = ebx;

loc_001ABF77: ;
    if (CMP_EQ(MEM32(0x771824), edi)) goto loc_001ABF97; /* je: equal / zero */

loc_001ABF7F: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001ABF8B: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_001ABF97: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_001ABFB7; /* je: equal / zero */

loc_001ABF9F: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001ABFAB: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_001ABFB7: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_001ABFCB; /* je: equal / zero */

loc_001ABFBF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001ABFC5: ;
    MEM32(0x77181C) = edi;

loc_001ABFCB: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001ABFF1; /* je: equal / zero */

loc_001ABFD9: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001ABFE5: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001ABFF1: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_001AC011; /* je: equal / zero */

loc_001ABFF9: ;
    edx = edi;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001AC005: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_001AC011: ;
    (void)0; /* cmp MEM32(0x771810), ebx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_001AC02F; /* je: equal / zero */

loc_001AC01E: ;
    eax = eax | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_001AC02F: ;
    edx = MEM32(0x7717E4);
    ecx = 2;
    if (CMP_EQ(edx, ecx)) goto loc_001AC04F; /* je: equal / zero */

loc_001AC03E: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_001AC04F: ;
    if (CMP_EQ(MEM32(0x7717C4), edi)) goto loc_001AC068; /* je: equal / zero */

loc_001AC057: ;
    eax = eax | 0x800;
    MEM32(0x547368) = edi;
    MEM32(0x7717C4) = edi;

loc_001AC068: ;
    if (CMP_EQ(MEM32(0x7717B4), ecx)) goto loc_001AC081; /* je: equal / zero */

loc_001AC070: ;
    eax = eax | 0x800;
    MEM32(0x54736C) = ecx;
    MEM32(0x7717B4) = ecx;

loc_001AC081: ;
    if (CMP_EQ(MEM32(0x7717A4), ecx)) goto loc_001AC09A; /* je: equal / zero */

loc_001AC089: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ecx;
    MEM32(0x7717A4) = ecx;

loc_001AC09A: ;
    if (CMP_EQ(MEM32(0x771784), edi)) goto loc_001AC0B3; /* je: equal / zero */

loc_001AC0A2: ;
    eax = eax | 0x800;
    MEM32(0x547378) = edi;
    MEM32(0x771784) = edi;

loc_001AC0B3: ;
    if (CMP_EQ(MEM32(0x771774), ecx)) goto loc_001AC0CC; /* je: equal / zero */

loc_001AC0BB: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_001AC0CC: ;
    if (CMP_EQ(MEM32(0x7717E8), ecx)) goto loc_001AC0E5; /* je: equal / zero */

loc_001AC0D4: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = ecx;
    MEM32(0x7717E8) = ecx;

loc_001AC0E5: ;
    if (CMP_EQ(MEM32(0x7717C8), edi)) goto loc_001AC0FE; /* je: equal / zero */

loc_001AC0ED: ;
    eax = eax | 0x800;
    MEM32(0x5473E8) = edi;
    MEM32(0x7717C8) = edi;

loc_001AC0FE: ;
    if (CMP_EQ(MEM32(0x7717B8), ebx)) goto loc_001AC117; /* je: equal / zero */

loc_001AC106: ;
    eax = eax | 0x800;
    MEM32(0x5473EC) = ebx;
    MEM32(0x7717B8) = ebx;

loc_001AC117: ;
    if (CMP_EQ(MEM32(0x7717A8), ecx)) goto loc_001AC130; /* je: equal / zero */

loc_001AC11F: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = ecx;
    MEM32(0x7717A8) = ecx;

loc_001AC130: ;
    if (CMP_EQ(MEM32(0x771788), edi)) goto loc_001AC149; /* je: equal / zero */

loc_001AC138: ;
    eax = eax | 0x800;
    MEM32(0x5473F8) = edi;
    MEM32(0x771788) = edi;

loc_001AC149: ;
    if (CMP_EQ(MEM32(0x771778), ecx)) goto loc_001AC162; /* je: equal / zero */

loc_001AC151: ;
    eax = eax | 0x800;
    MEM32(0x5473FC) = ecx;
    MEM32(0x771778) = ecx;

loc_001AC162: ;
    esi = MEM32(0x7717EC);
    edx = 4;
    if (CMP_EQ(esi, edx)) goto loc_001AC182; /* je: equal / zero */

loc_001AC171: ;
    eax = eax | 0x800;
    MEM32(0x547460) = edx;
    MEM32(0x7717EC) = edx;

loc_001AC182: ;
    if (CMP_EQ(MEM32(0x7717CC), ebx)) goto loc_001AC19B; /* je: equal / zero */

loc_001AC18A: ;
    eax = eax | 0x800;
    MEM32(0x547468) = ebx;
    MEM32(0x7717CC) = ebx;

loc_001AC19B: ;
    if (CMP_EQ(MEM32(0x7717BC), ecx)) goto loc_001AC1B4; /* je: equal / zero */

loc_001AC1A3: ;
    eax = eax | 0x800;
    MEM32(0x54746C) = ecx;
    MEM32(0x7717BC) = ecx;

loc_001AC1B4: ;
    if (CMP_EQ(MEM32(0x7717AC), ecx)) goto loc_001AC1CD; /* je: equal / zero */

loc_001AC1BC: ;
    eax = eax | 0x800;
    MEM32(0x547470) = ecx;
    MEM32(0x7717AC) = ecx;

loc_001AC1CD: ;
    if (CMP_EQ(MEM32(0x77178C), ebx)) goto loc_001AC1E6; /* je: equal / zero */

loc_001AC1D5: ;
    eax = eax | 0x800;
    MEM32(0x547478) = ebx;
    MEM32(0x77178C) = ebx;

loc_001AC1E6: ;
    if (CMP_EQ(MEM32(0x77177C), ecx)) goto loc_001AC1FF; /* je: equal / zero */

loc_001AC1EE: ;
    eax = eax | 0x800;
    MEM32(0x54747C) = ecx;
    MEM32(0x77177C) = ecx;

loc_001AC1FF: ;
    esi = MEM32(0x7717F0);
    if (CMP_EQ(esi, 8)) goto loc_001AC224; /* je: equal / zero */

loc_001AC20A: ;
    esi = 8;
    eax = eax | 0x800;
    MEM32(0x5474E0) = 8;
    MEM32(0x7717F0) = esi;

loc_001AC224: ;
    if (CMP_EQ(MEM32(0x7717D0), edi)) goto loc_001AC23D; /* je: equal / zero */

loc_001AC22C: ;
    eax = eax | 0x800;
    MEM32(0x5474E8) = edi;
    MEM32(0x7717D0) = edi;

loc_001AC23D: ;
    if (CMP_EQ(MEM32(0x7717C0), ecx)) goto loc_001AC256; /* je: equal / zero */

loc_001AC245: ;
    eax = eax | 0x800;
    MEM32(0x5474EC) = ecx;
    MEM32(0x7717C0) = ecx;

loc_001AC256: ;
    edx = MEM32(0x7717B0);
    if (CMP_EQ(edx, ecx)) goto loc_001AC273; /* je: equal / zero */

loc_001AC260: ;
    edx = ecx;
    eax = eax | 0x800;
    MEM32(0x5474F0) = ecx;
    MEM32(0x7717B0) = edx;

loc_001AC273: ;
    if (CMP_EQ(MEM32(0x771790), edi)) goto loc_001AC28C; /* je: equal / zero */

loc_001AC27B: ;
    eax = eax | 0x800;
    MEM32(0x5474F8) = edi;
    MEM32(0x771790) = edi;

loc_001AC28C: ;
    if (CMP_EQ(MEM32(0x771780), ecx)) goto loc_001AC2A5; /* je: equal / zero */

loc_001AC294: ;
    eax = eax | 0x800;
    MEM32(0x5474FC) = ecx;
    MEM32(0x771780) = ecx;

loc_001AC2A5: ;
    if (CMP_EQ(esi, edi)) goto loc_001AC2BA; /* je: equal / zero */

loc_001AC2A9: ;
    eax = eax | 0x800;
    MEM32(0x5474E0) = edi;
    MEM32(0x7717F0) = edi;

loc_001AC2BA: ;
    if (CMP_EQ(edx, edi)) goto loc_001AC2CF; /* je: equal / zero */

loc_001AC2BE: ;
    eax = eax | 0x800;
    MEM32(0x5474F0) = edi;
    MEM32(0x7717B0) = edi;

loc_001AC2CF: ;
    MEM32(0x547330) = edi;
    MEM32(0x547334) = edi;
    MEM32(0x547338) = edi;
    eax = eax | 0x40F;
    PUSH32(esp, 0x77180C);
    edi = 0x302;
    esi = 0x3E;
    MEM32(0x547344) = ecx;
    MEM32(0x5473B0) = ecx;
    MEM32(0x5473B4) = ecx;
    MEM32(0x5473B8) = ecx;
    MEM32(0x547430) = ecx;
    MEM32(0x547434) = ecx;
    MEM32(0x547438) = ecx;
    MEM32(0x5474B0) = ecx;
    MEM32(0x5474B4) = ecx;
    MEM32(0x5474B8) = ecx;
    MEM32(0x547384) = ebx;
    MEM32(0x547404) = ebx;
    MEM32(0x547484) = ebx;
    MEM32(0x5499F0) = eax;
    MEM32(0x547504) = ebx;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001AC353: ;
    PUSH32(esp, 0x771808);
    edi = 0x303;
    esi = 0x3F;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001AC367: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001AC380
 * Original: 0x001AC380 - 0x001AC476 (246 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC380: ;
    eax = MEM32(0x8470DC);
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x8C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    ecx = MEM32(esi + eax + 0x3E0);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x8C);
    ebp = edi + 0x90;
    PUSH32(esp, ebp);
    ecx = ecx + 0x78;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001AC3BF: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_001AC469; /* jbe: below or equal (unsigned <=) */

loc_001AC3D1: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001AC469; /* jbe: below or equal (unsigned <=) */

loc_001AC3E2: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_001AC469; /* jbe: below or equal (unsigned <=) */

loc_001AC3ED: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001AC469; /* jbe: below or equal (unsigned <=) */

loc_001AC3F2: ;
    ecx = MEM32(0x8470DC);
    eax = MEM32(esi + ecx + 0x3E0);
    xmm0 = MEMF(eax + 0x78); /* movss */
    eax = eax + 0x78;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    eax = MEM32(esi + ecx + 0x3E0);
    ecx = MEM32(eax + 0x74);
    edx = ZX16(MEM16(ecx + 0xE));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(eax + 0x264); /* mulss */
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = eax;
    xmm1 = xmm1 + xmm0; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001AC455: ;
    /* comiss xmm4, MEMF(esp + 0x20) - sets EFLAGS */
    if ((xmm4 <= MEMF(esp + 0x20))) goto loc_001AC469; /* jbe: below or equal (unsigned <=) */

loc_001AC45C: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 < xmm4)) goto loc_001AC469; /* jb: below (unsigned <) */

loc_001AC467: ;
    SET_LO8(ebx, 1);

loc_001AC469: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ebp = 3;
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_001AC476(); return; } /* je: equal / zero */

loc_001AC472: ;
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_001AC4C9(); return; /* tail jmp 0x001AC4C9 */

}

/**
 * sub_001AC780
 * Original: 0x001AC780 - 0x001AC7A0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC780: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001AC7D0(); /* call 0x001AC7D0 */

loc_001AC78A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001AC7A0(); return; } /* jne: not equal / not zero */

loc_001AC793: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001AC7B0
 * Original: 0x001AC7B0 - 0x001AC7C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC7B0(void)
{

loc_001AC7B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001AC7D0(); /* call 0x001AC7D0 */

loc_001AC7BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001AC7C0: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AC7D0
 * Original: 0x001AC7D0 - 0x001AC9FD (557 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AC7D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AC7D0: ;
    eax = MEM32(ebx + 0xE0);
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001AC7E2: ;
    esi = 0; /* xor self */
    if (TEST_NZ(eax, eax)) goto loc_001AC81B; /* jne: not equal / not zero */

loc_001AC7E8: ;
    eax = MEM32(ebx + 0xE0);
    if (CMP_EQ(eax, esi)) goto loc_001AC81B; /* je: equal / zero */

loc_001AC7F2: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001AC812: ;
    esp = esp + 4;
    MEM32(ebx + 0xE0) = esi;

loc_001AC81B: ;
    eax = MEM32(ebx + 0xE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001AC827: ;
    if (TEST_NZ(eax, eax)) goto loc_001AC85E; /* jne: not equal / not zero */

loc_001AC82B: ;
    eax = MEM32(ebx + 0xE4);
    if (CMP_EQ(eax, esi)) goto loc_001AC85E; /* je: equal / zero */

loc_001AC835: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001AC855: ;
    esp = esp + 4;
    MEM32(ebx + 0xE4) = esi;

loc_001AC85E: ;
    eax = MEM32(ebx + 0xE8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001AC86A: ;
    if (TEST_NZ(eax, eax)) goto loc_001AC8A1; /* jne: not equal / not zero */

loc_001AC86E: ;
    eax = MEM32(ebx + 0xE8);
    if (CMP_EQ(eax, esi)) goto loc_001AC8A1; /* je: equal / zero */

loc_001AC878: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001AC898: ;
    esp = esp + 4;
    MEM32(ebx + 0xE8) = esi;

loc_001AC8A1: ;
    eax = MEM32(ebx + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001AC8AD: ;
    if (TEST_NZ(eax, eax)) goto loc_001AC8E4; /* jne: not equal / not zero */

loc_001AC8B1: ;
    eax = MEM32(ebx + 0xEC);
    if (CMP_EQ(eax, esi)) goto loc_001AC8E4; /* je: equal / zero */

loc_001AC8BB: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001AC8DB: ;
    esp = esp + 4;
    MEM32(ebx + 0xEC) = esi;

loc_001AC8E4: ;
    eax = MEM32(ebx + 0xF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001AC8F0: ;
    if (TEST_NZ(eax, eax)) goto loc_001AC927; /* jne: not equal / not zero */

loc_001AC8F4: ;
    eax = MEM32(ebx + 0xF0);
    if (CMP_EQ(eax, esi)) goto loc_001AC927; /* je: equal / zero */

loc_001AC8FE: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001AC91E: ;
    esp = esp + 4;
    MEM32(ebx + 0xF0) = esi;

loc_001AC927: ;
    eax = MEM32(ebx + 0xF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001AC933: ;
    if (TEST_NZ(eax, eax)) goto loc_001AC96A; /* jne: not equal / not zero */

loc_001AC937: ;
    eax = MEM32(ebx + 0xF4);
    if (CMP_EQ(eax, esi)) goto loc_001AC96A; /* je: equal / zero */

loc_001AC941: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001AC961: ;
    esp = esp + 4;
    MEM32(ebx + 0xF4) = esi;

loc_001AC96A: ;
    eax = MEM32(ebx + 0xF8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001AC976: ;
    if (TEST_NZ(eax, eax)) goto loc_001AC9AD; /* jne: not equal / not zero */

loc_001AC97A: ;
    eax = MEM32(ebx + 0xF8);
    if (CMP_EQ(eax, esi)) goto loc_001AC9AD; /* je: equal / zero */

loc_001AC984: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001AC9A4: ;
    esp = esp + 4;
    MEM32(ebx + 0xF8) = esi;

loc_001AC9AD: ;
    eax = MEM32(ebx + 0xFC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001AC9B9: ;
    if (TEST_NZ(eax, eax)) goto loc_001AC9F0; /* jne: not equal / not zero */

loc_001AC9BD: ;
    eax = MEM32(ebx + 0xFC);
    if (CMP_EQ(eax, esi)) goto loc_001AC9F0; /* je: equal / zero */

loc_001AC9C7: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001AC9E7: ;
    esp = esp + 4;
    MEM32(ebx + 0xFC) = esi;

loc_001AC9F0: ;
    esi = ebx + 0x144;
    ebp = 2;
    g_seh_ebp = ebp; sub_001ACA00(); return; /* tail jmp 0x001ACA00 */

}

/**
 * sub_001ACB20
 * Original: 0x001ACB20 - 0x001ACCF9 (473 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001ACB20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    (void)0; /* cmp ecx, 5 - flags set for next jcc */
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_A(ecx, 5)) goto loc_001ACCCA; /* ja: above (unsigned >) */

loc_001ACB87: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1ACCFC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001ACB8Eu) goto loc_001ACB8E;
    if (_jt == 0x001ACB98u) goto loc_001ACB98;
    if (_jt == 0x001ACBBBu) goto loc_001ACBBB;
    if (_jt == 0x001ACC00u) goto loc_001ACC00;
    if (_jt == 0x001ACC44u) goto loc_001ACC44;
    if (_jt == 0x001ACC64u) goto loc_001ACC64;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001ACB8E: ;
    xmm2 = MEMF(eax); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    goto loc_001ACBA0;

loc_001ACB98: ;
    xmm2 = MEMF(eax); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */

loc_001ACBA0: ;
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    goto loc_001ACC82;

loc_001ACBBB: ;
    xmm2 = MEMF(eax); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(eax + 8); /* movss */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm2; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    goto loc_001ACC9C;

loc_001ACC00: ;
    xmm2 = MEMF(eax); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm2; /* movss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    goto loc_001ACCA6;

loc_001ACC44: ;
    xmm2 = MEMF(eax); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    goto loc_001ACC82;

loc_001ACC64: ;
    xmm2 = MEMF(eax); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */

loc_001ACC82: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */

loc_001ACC9C: ;
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x30) = xmm0; /* movss */

loc_001ACCA6: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;

loc_001ACCCA: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D3B7(); /* call 0x0048D3B7 */

loc_001ACCE3: ;
    edi = ebx;
    ecx = 0x10;
    esi = esp + 0x40;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001ACD20
 * Original: 0x001ACD20 - 0x001ACE78 (344 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ACD20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001ACD20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x164;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 3);
    edx = 0x40;
    PUSH32(esp, 1);
    eax = edx;
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_001ACD51: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001ACD5F: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001ACDA8; /* je: equal / zero */

loc_001ACD65: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_001ACD70: ;
    if (TEST_NZ(eax, eax)) goto loc_001ACD83; /* jne: not equal / not zero */

loc_001ACD74: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_001ACD7F: ;
    eax = 0; /* xor self */
    goto loc_001ACDA8;

loc_001ACD83: ;
    edx = MEM32(esp + 0x20);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 8) = 0;
    eax = esi;

loc_001ACDA8: ;
    ebx = MEM32(0x84B868);
    esi = MEM32(ebp + 8);
    MEM32(esi + 0x154) = eax;
    xmm0 = MEMF(ebx + 0xD4); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xD8); /* movss */
    PUSH32(esp, 0x49742400);
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xDC); /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xE0); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xE4); /* movss */
    PUSH32(esp, 0x3FC90FDB);
    ecx = esp + 0x100;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xE8); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = ebx;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0048D149(); /* call 0x0048D149 */

loc_001ACE30: ;
    edi = MEM32(0x5499E8);
    ecx = MEM32(edi + 0x1A04);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x48) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_001ACE68; /* je: equal / zero */

loc_001ACE44: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001ACE66; /* jne: not equal / not zero */

loc_001ACE4D: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001ACE66; /* jne: not equal / not zero */

loc_001ACE59: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001ACE66; /* je: equal / zero */

loc_001ACE60: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_001ACE66: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_001ACE68: ;
    ecx = MEM32(edi + 0x1A08);
    if (TEST_NZ(ecx, ecx)) { sub_001ACE78(); return; } /* jne: not equal / not zero */

loc_001ACE72: ;
    MEM32(esp + 0x34) = ecx;
    g_seh_ebp = ebp; sub_001ACEA0(); return; /* tail jmp 0x001ACEA0 */

}

/**
 * sub_001AD470
 * Original: 0x001AD470 - 0x001AD6B8 (584 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD470: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x64915C); /* movss */
    xmm1 = MEMF(esi + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ebx);
    MEMF(esi + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x44); /* movss */
    eax = esi + 0x144;
    PUSH32(esp, ebp);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x50) = xmm1; /* movss */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 2;
    PUSH32(esp, edi);
    /* nop */

loc_001AD4B0: ;
    ecx = MEM32(esp + 0xC);
    edi = MEM32(0x5499E8);
    ebx = MEM32(ecx);
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_001AD4D2; /* jb: below (unsigned <) */

loc_001AD4C3: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001AD4D2: ;
    ecx = MEM32(0x5499E8);
    MEM32(eax) = 0x41710;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_001AD50C; /* je: equal / zero */

loc_001AD4EE: ;
    (void)0; /* test MEM32(ebx), 0x780000 - flags set for next jcc */
    eax = MEM32(ebx + 8);
    if (TEST_Z(MEM32(ebx), 0x780000)) goto loc_001AD500; /* je: equal / zero */

loc_001AD4F9: ;
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    goto loc_001AD506;

loc_001AD500: ;
    if (TEST_Z(eax, eax)) goto loc_001AD50C; /* je: equal / zero */

loc_001AD504: ;
    PUSH32(esp, 0x10);

loc_001AD506: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_001AD50C: ;
    ebx = MEM32(ebx + 4);
    eax = MEM32(esi + 0x3C);
    ebx = ebx | 0x80000000u;
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001AD697; /* jle: less or equal (signed <=) */

loc_001AD522: ;
    eax = MEM32(esi + 0x38);
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001AD68B; /* jle: less or equal (signed <=) */

loc_001AD52F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm0 = xmm0 / MEMF(esp + 0x24); /* divss */
    xmm6 = xmm6 / MEMF(esp + 0x20); /* divss */
    xmm5 = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_001AD550: ;
    ecx = MEM32(esi + 0x38);
    xmm4 = MEMF(esi + 0x70); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    xmm2 = MEMF(esi + 0x44); /* movss */
    xmm7 = MEMF(esi + 0x7C); /* movss */
    ecx = ecx + edx;
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = ecx + ecx * 2;
    eax = eax << 4;
    eax = eax + ebx;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * MEMF(esi + 0x40); /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(esi + 0x2C); /* addss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esi + 0x78); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x34); /* addss */
    xmm1 = xmm1 * MEMF(esi + 0x74); /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x30); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm7 = xmm7 + xmm4; /* addss */
    MEMF(eax) = xmm7; /* movss */
    xmm4 = MEMF(esi + 0x80); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(eax + 4) = xmm4; /* movss */
    xmm1 = MEMF(esi + 0x84); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEM32(eax + 0xC) = 0x46005078;
    ebp = MEM32(esi + 0xF8);
    xmm3 = xmm3 * MEMF(esi + 0x4C); /* mulss */
    MEMF(ebp + ecx * 4) = xmm3; /* movss */
    xmm0 = MEMF(esi + 0x50); /* movss */
    ebp = MEM32(esi + 0xFC);
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(ebp + ecx * 4) = xmm0; /* movss */
    ebp = MEM32(esi + 0xF8);
    ebp = MEM32(ebp + ecx * 4);
    xmm0 = MEMF(eax); /* movss */
    MEM32(eax + 0x10) = ebp;
    ebp = MEM32(esi + 0xFC);
    ecx = MEM32(ebp + ecx * 4);
    ebp = MEM32(esp + 0x1C);
    MEM32(eax + 0x14) = ecx;
    xmm0 = xmm0 - MEMF(ebp); /* subss */
    ecx = MEM32(esp + 0x28);
    xmm1 = xmm1 / MEMF(ecx); /* divss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 8); /* subss */
    xmm1 = xmm1 / MEMF(ecx + 4); /* divss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    eax = MEM32(esi + 0x38);
    edx++;
    if (CMP_L(edx, eax)) goto loc_001AD550; /* jl: less (signed <) */

loc_001AD68B: ;
    eax = MEM32(esi + 0x3C);
    edi++;
    if (CMP_L(edi, eax)) goto loc_001AD522; /* jl: less (signed <) */

loc_001AD697: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = ecx + 4;
    eax--;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_001AD4B0; /* jne: not equal / not zero */

loc_001AD6B1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001AD6C0
 * Original: 0x001AD6C0 - 0x001ADCED (1581 bytes, 401 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AD6C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AD6C0: ;
    esp = esp - 0x98;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001ADCE6; /* jle: less or equal (signed <=) */

loc_001AD6DB: ;
    xmm6 = MEMF(0x7FA21C); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(0x648D10); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    edi = edi + 0x80;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = ecx;
    /* nop */

loc_001AD710: ;
    ebx = esi + 0x90;
    PUSH32(esp, ebx);
    ebp = edi + -8;
    PUSH32(esp, ebp);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001AD725: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 > xmm0)) goto loc_001ADCC6; /* ja: above (unsigned >) */

loc_001AD737: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 > xmm4)) goto loc_001ADCC6; /* ja: above (unsigned >) */

loc_001AD740: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 > xmm0)) goto loc_001ADCC6; /* ja: above (unsigned >) */

loc_001AD74F: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 > xmm4)) goto loc_001ADCC6; /* ja: above (unsigned >) */

loc_001AD758: ;
    PUSH32(esp, ebx);
    ecx = edi + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001AD767: ;
    eax = MEM32(edi + -12);
    ecx = ZX16(MEM16(eax + 0xE));
    xmm1 = MEMF(edi); /* movss */
    xmm2 = MEMF(ebp); /* movss */
    PUSH32(esp, ebx);
    edx = esp + 0x3C;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(edi + 0x1E4); /* mulss */
    xmm0 = xmm0 + MEMF(edi + -4); /* addss */
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001AD7A8: ;
    xmm1 = MEMF(esp + 0x48); /* movss */
    /* comiss xmm7, xmm1 - sets EFLAGS */
    if ((xmm7 <= xmm1)) goto loc_001ADCC6; /* jbe: below or equal (unsigned <=) */

loc_001AD7B7: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 < xmm7)) goto loc_001ADCC6; /* jb: below (unsigned <) */

loc_001AD7C6: ;
    xmm0 = MEMF(esp + 0x60); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 > xmm7)) goto loc_001AD7E2; /* ja: above (unsigned >) */

loc_001AD7D1: ;
    /* ucomiss xmm6, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001AD7E2; /* jnp: not parity */

loc_001AD7DA: ;
    MEMF(esp + 0x50) = xmm7; /* movss */
    goto loc_001AD7F8;

loc_001AD7E2: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 / xmm6; /* divss */
    xmm0 = xmm0 * MEMF(0x649528); /* mulss */
    MEMF(esp + 0x50) = xmm0; /* movss */

loc_001AD7F8: ;
    edx = MEM32(esi + 0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x3C));
    edi = MEM32(esi + 0xE8);
    edx = edx << 2;
    eax = 0; /* xor self */
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esi + 0xEC);
    eax = 0; /* xor self */
    ecx = edx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esi + 0xF4);
    eax = 0; /* xor self */
    ecx = edx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    xmm2 = MEMF(esp + 0x64); /* movss */
    /* ucomiss xmm6, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    if (1 /* jp after test - parity */) goto loc_001AD884; /* jp: parity */

loc_001AD87F: ;
    xmm0 = xmm7; /* movaps */
    goto loc_001AD8BA;

loc_001AD884: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm1 = xmm3; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x6C)); /* sqrtss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    xmm0 = xmm0 / xmm6; /* divss */

loc_001AD8BA: ;
    eax = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x3C);
    xmm1 = MEMF(esp + 0xC); /* movss */
    ecx = eax + -1;
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    edi = edx + -1;
    ecx = (int32_t)xmm2; /* cvttss2si */
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm3 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm3 = xmm3 * xmm2; /* mulss */
    edi = (int32_t)xmm3; /* cvttss2si */
    if (CMP_GE(ecx, 1)) goto loc_001AD8F6; /* jge: greater or equal (signed >=) */

loc_001AD8EF: ;
    ecx = 1;
    goto loc_001AD8FF;

loc_001AD8F6: ;
    eax = eax + 0xFFFFFFFEu;
    if (CMP_LE(ecx, eax)) goto loc_001AD8FF; /* jle: less or equal (signed <=) */

loc_001AD8FD: ;
    ecx = eax;

loc_001AD8FF: ;
    if (CMP_GE(edi, 1)) goto loc_001AD90B; /* jge: greater or equal (signed >=) */

loc_001AD904: ;
    edi = 1;
    goto loc_001AD914;

loc_001AD90B: ;
    eax = edx + -2;
    if (CMP_LE(edi, eax)) goto loc_001AD914; /* jle: less or equal (signed <=) */

loc_001AD912: ;
    edi = eax;

loc_001AD914: ;
    edx = MEM32(esp + 0xA8);
    eax = MEM32(esp + 0xAC);
    MEM32(edx) = ecx;
    MEM32(eax) = edi;
    ebx = MEM32(esi + 0x38);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    edx = edx + ecx;
    /* ucomiss xmm6, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (1 /* jp after test - parity */) goto loc_001AD945; /* jp: parity */

loc_001AD93D: ;
    xmm1 = xmm7; /* movaps */
    xmm2 = xmm7; /* movaps */
    goto loc_001AD981;

loc_001AD945: ;
    xmm1 = xmm1 - MEMF(esp + 0x70); /* subss */
    xmm2 = xmm2 - MEMF(esp + 0x74); /* subss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 / xmm6; /* divss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = (float)(int32_t)MEM32(esi + 0x3C); /* cvtsi2ss */
    xmm6 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm6 = MEMF(0x648CE4); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */

loc_001AD981: ;
    eax = MEM32(esi + 0xE8);
    xmm0 = xmm0 * MEMF(0x648EB8); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x50); /* addss */
    MEMF(eax + edx * 4) = xmm1; /* movss */
    eax = MEM32(esi + 0xEC);
    MEMF(eax + edx * 4) = xmm2; /* movss */
    eax = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x3C);
    xmm0 = xmm0 + xmm5; /* addss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 / xmm1; /* divss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 / xmm6; /* divss */
    ebx = eax;
    xmm7 = xmm1; /* movaps */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    /* comiss xmm2, MEMF(esp + 0xC) - sets EFLAGS */
    xmm7 = xmm7 / xmm6; /* divss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm3 = xmm3 + xmm7; /* addss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    xmm6 = xmm4; /* movaps */
    if ((xmm2 <= MEMF(esp + 0xC))) goto loc_001ADAA4; /* jbe: below or equal (unsigned <=) */

loc_001ADA10: ;
    /* comiss xmm3, MEMF(esp + 0x10) - sets EFLAGS */
    ebp = ecx + -1;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6 = xmm6 / xmm3; /* divss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm2 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 / xmm3; /* divss */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 / xmm3; /* divss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 / xmm3; /* divss */
    ebp = eax;
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 / xmm1; /* divss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 / xmm1; /* divss */
    ebx = ebx + ecx + -1;
    MEMF(esp + 0x24) = xmm6; /* movss */
    xmm3 = xmm3 * xmm5; /* mulss */
    if ((xmm3 <= MEMF(esp + 0x10))) goto loc_001ADA8D; /* jbe: below or equal (unsigned <=) */

loc_001ADA8A: ;
    edi--;
    goto loc_001ADA8E;

loc_001ADA8D: ;
    edi++;

loc_001ADA8E: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    ebp = MEM32(esi + 0x38);
    eax = eax + ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edi);
    ecx = ecx + ebp + -1;
    goto loc_001ADB31;

loc_001ADAA4: ;
    /* comiss xmm3, MEMF(esp + 0x10) - sets EFLAGS */
    ebp = ecx + 1;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6 = xmm6 / xmm3; /* divss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm2 = (float)(int32_t)ebp; /* cvtsi2ss */
    ebp = MEM32(esi + 0x38);
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 / xmm3; /* divss */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 / xmm3; /* divss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 / xmm3; /* divss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 / xmm1; /* divss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 / xmm1; /* divss */
    ebx = ebx + ecx + 1;
    eax = ebp;
    MEMF(esp + 0x24) = xmm6; /* movss */
    xmm3 = xmm3 * xmm5; /* mulss */
    if ((xmm3 <= MEMF(esp + 0x10))) goto loc_001ADB24; /* jbe: below or equal (unsigned <=) */

loc_001ADB21: ;
    edi--;
    goto loc_001ADB25;

loc_001ADB24: ;
    edi++;

loc_001ADB25: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = eax + ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edi);
    ecx = ecx + ebp + 1;

loc_001ADB31: ;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 / xmm1; /* divss */
    xmm1 = (float)(int32_t)MEM32(esi + 0x38); /* cvtsi2ss */
    xmm3 = xmm3 + xmm6; /* addss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 / xmm1; /* divss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEM32(esp + 0xA0) = ecx;
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x30) = xmm3; /* movss */
    ecx = 0; /* xor self */
    /* nop */

loc_001ADB90: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 - MEMF(esp + ecx * 8 + 0x1C); /* subss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(esp + ecx * 8 + 0x18); /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(esp + 0x78) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x78)); /* sqrtss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x80); /* movss */
    MEMF(esp + ecx * 4 + 0x84) = xmm0; /* movss */
    ecx++;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm0; /* movaps */
    if (CMP_L(ecx, 4)) goto loc_001ADB90; /* jl: less (signed <) */

loc_001ADBEE: ;
    edx = MEM32(esi + 0xF4);
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x54);
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x84); /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x88); /* mulss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x8C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x90); /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x68); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(edx + ecx * 4) = xmm1; /* movss */
    edx = MEM32(esi + 0xF4);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(edx + ebx * 4) = xmm1; /* movss */
    ecx = MEM32(esi + 0xF4);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm6 = MEMF(0x7FA21C); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(ecx + eax * 4) = xmm1; /* movss */
    edx = MEM32(esi + 0xF4);
    eax = MEM32(esp + 0xA0);
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(edx + eax * 4) = xmm0; /* movss */

loc_001ADCC6: ;
    eax = MEM32(esp + 0x58);
    edi = edi + 0x6D0;
    eax--;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = eax;
    if ((eax != 0)) goto loc_001AD710; /* jne: not equal / not zero */

loc_001ADCDF: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001ADCE6: ;
    esp = esp + 0x98;
    esp += 4; return; /* ret */

}

/**
 * sub_001ADCF0
 * Original: 0x001ADCF0 - 0x001ADFEC (764 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADCF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ADCF0: ;
    esp = esp - 0x10;
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi - eax;
    ecx = ecx + eax;
    ebp = edx;
    ebp = ebp - eax;
    eax = eax + edx;
    (void)0; /* cmp esi, 1 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(esi, 1)) goto loc_001ADD24; /* jge: greater or equal (signed >=) */

loc_001ADD18: ;
    MEM32(esp + 0x14) = 1;
    esi = MEM32(esp + 0x14);

loc_001ADD24: ;
    if (CMP_GE(ebp, 1)) goto loc_001ADD2E; /* jge: greater or equal (signed >=) */

loc_001ADD29: ;
    ebp = 1;

loc_001ADD2E: ;
    edx = MEM32(ebx + 0x38);
    edx = edx + 0xFFFFFFFEu;
    if (CMP_LE(ecx, edx)) goto loc_001ADD3E; /* jle: less or equal (signed <=) */

loc_001ADD38: ;
    MEM32(esp + 0xC) = edx;
    ecx = edx;

loc_001ADD3E: ;
    edi = MEM32(ebx + 0x3C);
    edx = edi + -2;
    if (CMP_LE(eax, edx)) goto loc_001ADD4E; /* jle: less or equal (signed <=) */

loc_001ADD48: ;
    MEM32(esp + 0x10) = edx;
    eax = edx;

loc_001ADD4E: ;
    edx = MEM32(ebx + 0xEC);
    PUSH32(esp, eax);
    eax = MEM32(0x7FA21C);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0xE8);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0xE4);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0xE0);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001AECB0(); /* call 0x001AECB0 */

loc_001ADD82: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(0x7FA21C);
    edi = MEM32(ebx + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x54);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0xE4);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0xE0);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0xF0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0xF4);
    PUSH32(esp, 0); sub_001AEC10(); /* call 0x001AEC10 */

loc_001ADDBF: ;
    ecx = MEM32(ebx + 0x100);
    edi = MEM32(ebx + ecx * 4 + 0x144);
    ecx = MEM32(0x5499E8);
    esi = ecx;
    eax = MEM32(esi);
    edx = MEM32(esi + 4);
    esp = esp + 0x4C;
    if (CMP_B(eax, edx)) goto loc_001ADDF5; /* jb: below (unsigned <) */

loc_001ADDE0: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001ADDEF: ;
    ecx = MEM32(0x5499E8);

loc_001ADDF5: ;
    MEM32(eax) = 0x41710;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_001ADE29; /* je: equal / zero */

loc_001ADE0B: ;
    (void)0; /* test MEM32(edi), 0x780000 - flags set for next jcc */
    eax = MEM32(edi + 8);
    if (TEST_Z(MEM32(edi), 0x780000)) goto loc_001ADE1D; /* je: equal / zero */

loc_001ADE16: ;
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    goto loc_001ADE23;

loc_001ADE1D: ;
    if (TEST_Z(eax, eax)) goto loc_001ADE29; /* je: equal / zero */

loc_001ADE21: ;
    PUSH32(esp, 0x10);

loc_001ADE23: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_001ADE29: ;
    edi = MEM32(edi + 4);
    eax = MEM32(esp + 0x10);
    edi = edi | 0x80000000u;
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_GE(ebp, eax)) goto loc_001ADF62; /* jge: greater or equal (signed >=) */

loc_001ADE42: ;
    xmm5 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(0x6491E0); /* movss */

loc_001ADE52: ;
    esi = MEM32(esp + 0x14);
    if (CMP_GE(esi, MEM32(esp + 0xC))) goto loc_001ADF55; /* jge: greater or equal (signed >=) */

loc_001ADE60: ;
    edx = MEM32(ebx + 0x38);
    eax = MEM32(ebx + 0xF0);
    xmm7 = 0.0f; /* xorps self = zero */
    ecx = edx;
    edi = ebp + -1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    ecx = ecx + esi;
    xmm1 = MEMF(eax + ecx * 4); /* movss */
    xmm2 = MEMF(eax + ecx * 4 + -4); /* movss */
    edi = edi + esi;
    xmm4 = MEMF(eax + edi * 4); /* movss */
    xmm3 = MEMF(eax + edi * 4 + -4); /* movss */
    edx = eax + edi * 4;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 * MEMF(0x648E14); /* mulss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 > xmm0)) goto loc_001ADEBD; /* ja: above (unsigned >) */

loc_001ADEB0: ;
    xmm7 = MEMF(0x648F20); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_001ADEC0; /* jbe: below or equal (unsigned <=) */

loc_001ADEBD: ;
    xmm0 = xmm7; /* movaps */

loc_001ADEC0: ;
    edi = MEM32(esp + 0x18);
    edx = ecx + ecx * 2;
    edx = edx << 4;
    MEMF(edx + edi + 0x28) = xmm0; /* movss */
    eax = edx + edi;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm4; /* subss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(0x648D80); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    if ((xmm6 <= xmm0)) goto loc_001ADF0B; /* jbe: below or equal (unsigned <=) */

loc_001ADF06: ;
    xmm0 = xmm6; /* movaps */
    goto loc_001ADF13;

loc_001ADF0B: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_001ADF13; /* jbe: below or equal (unsigned <=) */

loc_001ADF10: ;
    xmm0 = xmm2; /* movaps */

loc_001ADF13: ;
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_001ADF1D; /* jbe: below or equal (unsigned <=) */

loc_001ADF18: ;
    xmm1 = xmm6; /* movaps */
    goto loc_001ADF25;

loc_001ADF1D: ;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_001ADF25; /* jbe: below or equal (unsigned <=) */

loc_001ADF22: ;
    xmm1 = xmm2; /* movaps */

loc_001ADF25: ;
    xmm2 = MEMF(0x648D88); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    ecx = MEM32(ebx + 0xD0);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(esp + 0xC);
    esi++;
    if (CMP_L(esi, eax)) goto loc_001ADE60; /* jl: less (signed <) */

loc_001ADF55: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_001ADE52; /* jl: less (signed <) */

loc_001ADF62: ;
    eax = MEM32(ebx + 0x3C);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001ADFE5; /* jle: less or equal (signed <=) */

loc_001ADF6B: ;
    eax = MEM32(ebx + 0x38);
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(0x648F54); /* movss */
    edi = edi;

loc_001ADF80: ;
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001ADFDD; /* jle: less or equal (signed <=) */

loc_001ADF86: ;
    goto loc_001ADF90;

    /* nop */
    /* nop */

loc_001ADF90: ;
    edx = MEM32(ebx + 0xF8);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    xmm2 = MEMF(ebx + 0x68); /* movss */
    eax = eax + ecx;
    edx = edx + eax * 4;
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(edx); /* addss */
    MEMF(edx) = xmm2; /* movss */
    ebp = MEM32(ebx + 0xF8);
    ebp = MEM32(ebp + eax * 4);
    edx = eax + eax * 2;
    edx = edx << 4;
    edx = edx + edi;
    MEM32(edx + 0x10) = ebp;
    ebp = MEM32(ebx + 0xFC);
    eax = MEM32(ebp + eax * 4);
    MEM32(edx + 0x14) = eax;
    eax = MEM32(ebx + 0x38);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_001ADF90; /* jl: less (signed <) */

loc_001ADFDD: ;
    ecx = MEM32(ebx + 0x3C);
    esi++;
    if (CMP_L(esi, ecx)) goto loc_001ADF80; /* jl: less (signed <) */

loc_001ADFE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001ADFF0
 * Original: 0x001ADFF0 - 0x001AE085 (149 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ADFF0(void)
{

loc_001ADFF0: ;
    edx = MEM32(esi + 0x3C);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x38));
    edx = edx << 2;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xE0);
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esi + 0xE4);
    eax = 0; /* xor self */
    ecx = edx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esi + 0xE8);
    eax = 0; /* xor self */
    ecx = edx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esi + 0xEC);
    eax = 0; /* xor self */
    ecx = edx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esi + 0xF0);
    ecx = edx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esi + 0xF4);
    ecx = edx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AE090
 * Original: 0x001AE090 - 0x001AE0CA (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001AE090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = ebp + 0xC;
    xmm0 = MEMF(edx); /* movss */
    esp = esp & 0xFFFFFFF0u;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    /* shufps xmm0, xmm0, 0 */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001AE0C6; /* jle: less or equal (signed <=) */

loc_001AE0A5: ;
    edx = MEM32(ebp + 8);
    edx = edx - eax;
    ecx--;
    ecx = ecx >> 2;
    ecx++;
    /* nop */

loc_001AE0B0: ;
    xmm1 = MEMF(edx + eax); /* movaps */
    xmm2 = MEMF(eax); /* movaps */
    /* mulps: xmm1 *= xmm0 (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    MEMF(eax) = xmm2; /* movaps */
    eax = eax + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_001AE0B0; /* jne: not equal / not zero */

loc_001AE0C6: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001AE0D0
 * Original: 0x001AE0D0 - 0x001AE3D2 (770 bytes, 261 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE0D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001AE0D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    ecx = MEM32(ebp + 8);
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    edi++;
    esi = edx + -1;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_GE(esi, edi)) goto loc_001AE143; /* jge: greater or equal (signed >=) */

loc_001AE0F4: ;
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x1C));
    esi = edx + -1;
    edi = edi + esi;
    edi = eax + edi * 4;
    MEM32(esp + 0x18) = edi;
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    edi = edi + esi;
    edi = eax + edi * 4;
    MEM32(esp + 0x14) = edi;
    edi = MEM32(esp + 0x1C);
    edi = edi - esi;
    /* nop */

loc_001AE120: ;
    esi = MEM32(esp + 0x14);
    MEMF(esi) = xmm1; /* movss */
    esi = MEM32(esp + 0x18);
    MEMF(esi) = xmm1; /* movss */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 4;
    esi = MEM32(esp + 0x18);
    esi = esi + 4;
    edi--;
    MEM32(esp + 0x18) = esi;
    if ((edi != 0)) goto loc_001AE120; /* jne: not equal / not zero */

loc_001AE143: ;
    edi = MEM32(ebp + 0x1C);
    edi++;
    esi = ebx + -1;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_GE(esi, edi)) goto loc_001AE1B2; /* jge: greater or equal (signed >=) */

loc_001AE152: ;
    edi = MEM32(ebp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    edi = edi + esi;
    esi = esi + edx;
    esi = eax + esi * 4;
    edi = eax + edi * 4;
    MEM32(esp + 0x14) = esi;
    esi = MEM32(esp + 0x1C);
    MEM32(esp + 0x18) = edi;
    edi = ebx + -1;
    esi = esi - edi;
    MEM32(esp + 0x1C) = esi;
    goto loc_001AE180;

    /* nop */

loc_001AE180: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x18);
    MEMF(edi) = xmm1; /* movss */
    MEMF(esi) = xmm1; /* movss */
    esi = ecx * 4;
    edi = edi + esi;
    MEM32(esp + 0x14) = edi;
    edi = MEM32(esp + 0x18);
    edi = edi + esi;
    esi = MEM32(esp + 0x1C);
    esi--;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = esi;
    if ((esi != 0)) goto loc_001AE180; /* jne: not equal / not zero */

loc_001AE1B2: ;
    esi = MEM32(ebp + 0x10);
    (void)0; /* cmp esi, 1 - flags set for next jcc */
    edi = MEM32(ebp + 0x14);
    xmm0 = 0.0f; /* xorps self = zero */
    if (CMP_NE(esi, 1)) goto loc_001AE267; /* jne: not equal / not zero */

loc_001AE1C4: ;
    if (CMP_GE(edx, edi)) goto loc_001AE211; /* jge: greater or equal (signed >=) */

loc_001AE1C8: ;
    esi = eax + edx * 4;
    MEM32(esp + 0x18) = esi;
    esi = MEM32(ebp + 0xC);
    esi--;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    edi = edi - edx;
    esi = esi + edx;
    edi--;
    esi = eax + esi * 4;
    edi = edi >> 2;
    MEM32(esp + 0x14) = esi;
    edi++;
    goto loc_001AE1F0;

    /* nop */
    /* nop */

loc_001AE1F0: ;
    esi = MEM32(esp + 0x18);
    MEMF(esi) = xmm0; /* movups */
    esi = MEM32(esp + 0x14);
    MEMF(esi) = xmm0; /* movups */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x10;
    esi = MEM32(esp + 0x14);
    esi = esi + 0x10;
    edi--;
    MEM32(esp + 0x14) = esi;
    if ((edi != 0)) goto loc_001AE1F0; /* jne: not equal / not zero */

loc_001AE211: ;
    if (CMP_GE(ebx, MEM32(ebp + 0x1C))) goto loc_001AE3A2; /* jge: greater or equal (signed >=) */

loc_001AE21A: ;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    esi = eax + esi * 4;
    MEM32(esp + 0x18) = esi;
    esi = ebx + 1;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    esi = eax + esi * 4 + -4;
    MEM32(esp + 0x14) = esi;
    esi = MEM32(ebp + 0x1C);
    esi = esi - ebx;
    edi = ecx;
    edi = edi << 4;
    esi--;
    esi = esi >> 2;
    esi++;

loc_001AE243: ;
    ebx = MEM32(esp + 0x18);
    MEMF(ebx) = xmm0; /* movups */
    ebx = MEM32(esp + 0x14);
    MEMF(ebx) = xmm0; /* movups */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + edi;
    ebx = MEM32(esp + 0x14);
    ebx = ebx + edi;
    esi--;
    MEM32(esp + 0x14) = ebx;
    if ((esi != 0)) goto loc_001AE243; /* jne: not equal / not zero */

loc_001AE262: ;
    goto loc_001AE39F;

loc_001AE267: ;
    if (CMP_NE(esi, 2)) goto loc_001AE309; /* jne: not equal / not zero */

loc_001AE270: ;
    if (CMP_GE(edx, edi)) goto loc_001AE2B3; /* jge: greater or equal (signed >=) */

loc_001AE274: ;
    esi = eax + edx * 4;
    MEM32(esp + 0x18) = esi;
    esi = MEM32(ebp + 0xC);
    esi--;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    edi = edi - edx;
    esi = esi + edx;
    edi--;
    esi = eax + esi * 4;
    edi = edi >> 2;
    MEM32(esp + 0x14) = esi;
    edi++;

loc_001AE292: ;
    esi = MEM32(esp + 0x18);
    MEMF(esi) = xmm0; /* movups */
    esi = MEM32(esp + 0x14);
    MEMF(esi) = xmm0; /* movups */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x10;
    esi = MEM32(esp + 0x14);
    esi = esi + 0x10;
    edi--;
    MEM32(esp + 0x14) = esi;
    if ((edi != 0)) goto loc_001AE292; /* jne: not equal / not zero */

loc_001AE2B3: ;
    if (CMP_GE(ebx, MEM32(ebp + 0x1C))) goto loc_001AE3A2; /* jge: greater or equal (signed >=) */

loc_001AE2BC: ;
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    edi = eax + edi * 4;
    MEM32(esp + 0x18) = edi;
    edi = ebx + 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    edi = eax + edi * 4 + -4;
    MEM32(esp + 0x14) = edi;
    edi = MEM32(ebp + 0x1C);
    edi = edi - ebx;
    esi = ecx;
    esi = esi << 4;
    edi--;
    edi = edi >> 2;
    edi++;

loc_001AE2E5: ;
    ebx = MEM32(esp + 0x18);
    MEMF(ebx) = xmm0; /* movups */
    ebx = MEM32(esp + 0x14);
    MEMF(ebx) = xmm0; /* movups */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + esi;
    ebx = MEM32(esp + 0x14);
    ebx = ebx + esi;
    edi--;
    MEM32(esp + 0x14) = ebx;
    if ((edi != 0)) goto loc_001AE2E5; /* jne: not equal / not zero */

loc_001AE304: ;
    goto loc_001AE39F;

loc_001AE309: ;
    if (CMP_GE(edx, edi)) goto loc_001AE351; /* jge: greater or equal (signed >=) */

loc_001AE30D: ;
    esi = eax + edx * 4;
    MEM32(esp + 0x18) = esi;
    esi = MEM32(ebp + 0xC);
    esi--;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    edi = edi - edx;
    esi = esi + edx;
    edi--;
    esi = eax + esi * 4;
    edi = edi >> 2;
    MEM32(esp + 0x14) = esi;
    edi++;
    goto loc_001AE330;

    /* nop */

loc_001AE330: ;
    esi = MEM32(esp + 0x18);
    MEMF(esi) = xmm0; /* movups */
    esi = MEM32(esp + 0x14);
    MEMF(esi) = xmm0; /* movups */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x10;
    esi = MEM32(esp + 0x14);
    esi = esi + 0x10;
    edi--;
    MEM32(esp + 0x14) = esi;
    if ((edi != 0)) goto loc_001AE330; /* jne: not equal / not zero */

loc_001AE351: ;
    if (CMP_GE(ebx, MEM32(ebp + 0x1C))) goto loc_001AE3A2; /* jge: greater or equal (signed >=) */

loc_001AE356: ;
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    esi = eax + esi * 4;
    MEM32(esp + 0x18) = esi;
    esi = ebx + 1;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    esi = eax + esi * 4 + -4;
    MEM32(esp + 0x14) = esi;
    esi = MEM32(ebp + 0x1C);
    esi = esi - ebx;
    edi = ecx;
    edi = edi << 4;
    esi--;
    esi = esi >> 2;
    esi++;
    /* nop */

loc_001AE380: ;
    ebx = MEM32(esp + 0x18);
    MEMF(ebx) = xmm0; /* movups */
    ebx = MEM32(esp + 0x14);
    MEMF(ebx) = xmm0; /* movups */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + edi;
    ebx = MEM32(esp + 0x14);
    ebx = ebx + edi;
    esi--;
    MEM32(esp + 0x14) = ebx;
    if ((esi != 0)) goto loc_001AE380; /* jne: not equal / not zero */

loc_001AE39F: ;
    ebx = MEM32(ebp + 0x18);

loc_001AE3A2: ;
    edi = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x1C));
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    esi = edi + edx;
    MEMF(eax + esi * 4) = xmm1; /* movss */
    edx = edx + ecx;
    MEMF(eax + edx * 4) = xmm1; /* movss */
    edx = MEM32(ebp + 0x14);
    edi = edi + edx;
    MEMF(eax + edi * 4) = xmm1; /* movss */
    POP32(esp, edi);
    ecx = ecx + edx;
    POP32(esp, esi);
    MEMF(eax + ecx * 4) = xmm1; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001AE3E0
 * Original: 0x001AE3E0 - 0x001AE6AE (718 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE3E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE3E0: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 4);
    esp = esp - 0x30;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    PUSH32(esp, edi);
    if (CMP_GE(esi, MEM32(esp + 0x58))) goto loc_001AE68A; /* jge: greater or equal (signed >=) */

loc_001AE3FB: ;
    edi = MEM32(esp + 0x50);
    edi = edi - edx;
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, ebx);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)esi);
    ebx = esi + -1;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    MEM32(esp + 0xC) = edi;
    edi = edi + edx;
    PUSH32(esp, ebp);
    ebp = eax + edi * 4 + 4;
    MEM32(esp + 0x30) = ebx;
    ebx = ebx + edx;
    MEM32(esp + 0x2C) = ebp;
    ebp = MEM32(esp + 0x50);
    edi = ebp + edi * 4 + 8;
    xmm3 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x28) = edi;
    edi = eax + ebx * 4 + 4;
    MEM32(esp + 0x24) = edi;
    edi = MEM32(esp + 0x5C);
    ebx = edi + 1;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    esi = esi * 4 + -4;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    ebx = ebx + edx;
    ebx = eax + ebx * 4 + 4;
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x60);
    ebx = ebx - edi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x34) = ebx;
    edi = edi;

loc_001AE470: ;
    (void)0; /* cmp MEM32(esp + 0x38), 4 - flags set for next jcc */
    ebp = edx;
    if (CMP_L(MEM32(esp + 0x38), 4)) goto loc_001AE588; /* jl: less (signed <) */

loc_001AE47D: ;
    ecx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x20);
    edi = esi + edx * 4 + 8;
    esi = MEM32(esp + 0x50);
    esi = esi - eax;
    MEM32(esp + 0x18) = esi;
    esi = MEM32(esp + 0x58);
    esi = esi - edx;
    esi = esi - 4;
    esi = esi >> 2;
    edi = edi + eax;
    esi++;
    edx = edx + esi * 4;
    xmm0 = xmm3; /* movaps */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = xmm0 / xmm2; /* divss */
    MEM32(esp + 0x3C) = edx;
    /* nop */

loc_001AE4C0: ;
    xmm4 = MEMF(ecx + -8); /* movss */
    xmm4 = xmm4 + MEMF(ebx + -4); /* addss */
    xmm4 = xmm4 + MEMF(edi + -8); /* addss */
    xmm4 = xmm4 + MEMF(ecx); /* addss */
    edx = MEM32(esp + 0x14);
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + MEMF(ebp + -8); /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    MEMF(ecx + -4) = xmm4; /* movss */
    xmm4 = MEMF(ebx); /* movss */
    xmm4 = xmm4 + MEMF(ecx + -4); /* addss */
    xmm4 = xmm4 + MEMF(ecx + 4); /* addss */
    xmm4 = xmm4 + MEMF(edx); /* addss */
    edx = MEM32(esp + 0x18);
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + MEMF(edx + ecx); /* addss */
    edx = MEM32(esp + 0x14);
    xmm4 = xmm4 * xmm0; /* mulss */
    MEMF(ecx) = xmm4; /* movss */
    xmm4 = MEMF(ebx + 4); /* movss */
    xmm4 = xmm4 + MEMF(ecx); /* addss */
    xmm4 = xmm4 + MEMF(ecx + 8); /* addss */
    xmm4 = xmm4 + MEMF(edi); /* addss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + MEMF(ebp); /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    MEMF(ecx + 4) = xmm4; /* movss */
    xmm4 = MEMF(ecx + 0xC); /* movss */
    xmm4 = xmm4 + MEMF(ebx + 8); /* addss */
    xmm4 = xmm4 + MEMF(edi + 4); /* addss */
    xmm4 = xmm4 + MEMF(ecx + 4); /* addss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + MEMF(ebp + 4); /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    MEMF(ecx + 8) = xmm4; /* movss */
    edx = edx + 0x10;
    ecx = ecx + 0x10;
    ebx = ebx + 0x10;
    edi = edi + 0x10;
    ebp = ebp + 0x10;
    esi--;
    MEM32(esp + 0x14) = edx;
    if ((esi != 0)) goto loc_001AE4C0; /* jne: not equal / not zero */

loc_001AE578: ;
    edx = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x44);
    ebp = MEM32(esp + 0x3C);
    esi = MEM32(esp + 0x1C);

loc_001AE588: ;
    if (CMP_GE(ebp, MEM32(esp + 0x58))) goto loc_001AE62C; /* jge: greater or equal (signed >=) */

loc_001AE592: ;
    edi = MEM32(esp + 0x10);
    ebx = edi + ebp;
    edi = MEM32(esp + 0x50);
    ebx = ebx << 2;
    edi = edi + ebx;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esp + 0x10);
    edi = edi + ebp;
    edi = edi + ecx;
    edi = eax + edi * 4;
    MEM32(esp + 0x18) = edi;
    edi = MEM32(esp + 0x30);
    edi = edi + ebp;
    edi = eax + edi * 4;
    MEM32(esp + 0x14) = edi;
    edi = MEM32(esp + 0x58);
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 / xmm2; /* divss */
    ebx = ebx + eax + 4;
    edi = edi - ebp;
    goto loc_001AE5E0;

    /* nop */
    /* nop */

loc_001AE5E0: ;
    ebp = MEM32(esp + 0x18);
    xmm4 = MEMF(ebx + -8); /* movss */
    xmm4 = xmm4 + MEMF(ebp); /* addss */
    xmm4 = xmm4 + MEMF(ebx); /* addss */
    ebp = MEM32(esp + 0x14);
    xmm4 = xmm4 + MEMF(ebp); /* addss */
    ebp = MEM32(esp + 0x1C);
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + MEMF(ebp); /* addss */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 4;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 4;
    ebp = MEM32(esp + 0x1C);
    xmm4 = xmm4 * xmm0; /* mulss */
    MEMF(ebx + -4) = xmm4; /* movss */
    ebp = ebp + 4;
    ebx = ebx + 4;
    edi--;
    MEM32(esp + 0x1C) = ebp;
    if ((edi != 0)) goto loc_001AE5E0; /* jne: not equal / not zero */

loc_001AE62C: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x20);
    ebp = ebp + ecx;
    ebx = ecx * 4;
    edi = edi + ebx;
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(esp + 0x24);
    ebp = ebp + ebx;
    MEM32(esp + 0x20) = edi;
    edi = MEM32(esp + 0x28);
    edi = edi + ebx;
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(esp + 0x2C);
    esi = esi + ebx;
    ebp = ebp + ebx;
    ebx = MEM32(esp + 0x30);
    MEM32(esp + 0x28) = edi;
    edi = MEM32(esp + 0x34);
    ebx = ebx + ecx;
    edi--;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = edi;
    if ((edi != 0)) goto loc_001AE470; /* jne: not equal / not zero */

loc_001AE684: ;
    esi = MEM32(esp + 0x5C);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001AE68A: ;
    edi = MEM32(esp + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001AE0D0(); /* call 0x001AE0D0 */

loc_001AE6A5: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_001AE6B0
 * Original: 0x001AE6B0 - 0x001AE8C5 (533 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE6B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AE6B0: ;
    esp = esp - 0x18;
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    esi = edi;
    esi = esi - edx;
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = MEM32(esp + 0x4C);
    xmm1 = xmm1 * xmm0; /* mulss */
    ebp = esi;
    ebp = ebp - ecx;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEM32(esp + 0xC) = ecx;
    if (CMP_GE(ecx, esi)) goto loc_001AE8A4; /* jge: greater or equal (signed >=) */

loc_001AE6FA: ;
    ebp = MEM32(esp + 0x3C);
    xmm0 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(0x648CF0); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    esi = esi + edx;
    esi = ebp + esi * 4;
    MEM32(esp + 0x10) = esi;

loc_001AE725: ;
    if (CMP_GE(edx, edi)) goto loc_001AE878; /* jge: greater or equal (signed >=) */

loc_001AE72D: ;
    esi = MEM32(esp + 0x3C);
    ebp = MEM32(esp + 0x10);
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x38);
    ecx = ecx - esi;
    esi = MEM32(esp + 0x34);
    esi = esi - MEM32(esp + 0x3C);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm5 = xmm5 + xmm0; /* addss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = esi;
    goto loc_001AE770;

loc_001AE75D: ;
    ecx = MEM32(esp + 0x14);
    goto loc_001AE770;

    /* nop */
    /* nop */

loc_001AE770: ;
    xmm1 = MEMF(ecx + ebp); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm2 = MEMF(ebp); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm1 = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    xmm1 = xmm1 - xmm2; /* subss */
    if ((xmm3 <= xmm0)) goto loc_001AE7A2; /* jbe: below or equal (unsigned <=) */

loc_001AE79D: ;
    xmm0 = xmm3; /* movaps */
    goto loc_001AE7B2;

loc_001AE7A2: ;
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2 = xmm2 - xmm6; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_001AE7B2; /* jbe: below or equal (unsigned <=) */

loc_001AE7AF: ;
    xmm0 = xmm2; /* movaps */

loc_001AE7B2: ;
    /* comiss xmm5, xmm1 - sets EFLAGS */
    if ((xmm5 <= xmm1)) goto loc_001AE7BC; /* jbe: below or equal (unsigned <=) */

loc_001AE7B7: ;
    xmm1 = xmm5; /* movaps */
    goto loc_001AE7CE;

loc_001AE7BC: ;
    xmm2 = (float)(int32_t)MEM32(esp + 0x4C); /* cvtsi2ss */
    xmm2 = xmm2 - xmm6; /* subss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_001AE7CE; /* jbe: below or equal (unsigned <=) */

loc_001AE7CB: ;
    xmm1 = xmm2; /* movaps */

loc_001AE7CE: ;
    esi = (int32_t)xmm1; /* cvttss2si */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edi = esi + 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    eax = edi + ecx;
    xmm6 = MEMF(ebx + eax * 4); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm6 = xmm6 * xmm1; /* mulss */
    eax = esi + ecx;
    xmm7 = MEMF(ebx + eax * 4); /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    eax = edi + ecx + 1;
    edi = MEM32(esp + 0x44);
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm7 = MEMF(ebx + eax * 4); /* movss */
    eax = MEM32(esp + 0x20);
    xmm7 = xmm7 * xmm1; /* mulss */
    ecx = esi + ecx + 1;
    xmm1 = MEMF(ebx + ecx * 4); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(eax + ebp) = xmm6; /* movss */
    eax = MEM32(esp + 0x28);
    xmm6 = MEMF(0x648CF0); /* movss */
    edx++;
    ebp = ebp + 4;
    if (CMP_L(edx, edi)) goto loc_001AE75D; /* jl: less (signed <) */

loc_001AE868: ;
    xmm0 = MEMF(0x648D10); /* movss */
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x40);

loc_001AE878: ;
    esi = MEM32(esp + 0xC);
    ebp = MEM32(esp + 0x10);
    esi++;
    MEM32(esp + 0xC) = esi;
    esi = eax * 4;
    ebp = ebp + esi;
    esi = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(esp + 0x4C);
    if (CMP_L(esi, ebp)) goto loc_001AE725; /* jl: less (signed <) */

loc_001AE8A2: ;
    esi = ebp;

loc_001AE8A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, 0); sub_001AE0D0(); /* call 0x001AE0D0 */

loc_001AE8BB: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001AE8D0
 * Original: 0x001AE8D0 - 0x001AEC04 (820 bytes, 266 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AE8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001AE8D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x20);
    xmm0 = MEMF(0x648E1C); /* movss */
    eax = eax - esi;
    MEM32(esp + 0x20) = eax;
    eax = eax + 0xFFFFFFFEu;
    xmm5 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm5; /* divss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x24);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    /* shufps xmm0, xmm0, 0 */
    xmm1 = 0.0f; /* xorps self = zero */
    if (CMP_GE(edi, eax)) goto loc_001AEA2D; /* jge: greater or equal (signed >=) */

loc_001AE91D: ;
    ecx = MEM32(ebp + 0x18);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    eax = edi * 4 + -4;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    edx = edx + esi;
    MEM32(esp + 0x14) = eax;
    edx = edx << 2;
    eax = edx + ecx;
    ecx = edi + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 0x14);
    ecx = ecx + esi;
    ecx = eax + ecx * 4;
    eax = MEM32(ebp + 0x10);
    edx = edx + eax + 4;
    eax = MEM32(ebp + 0x28);
    eax = eax - edi;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;

loc_001AE965: ;
    if (CMP_GE(esi, MEM32(ebp + 0x20))) goto loc_001AE9EF; /* jge: greater or equal (signed >=) */

loc_001AE96E: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ebx = MEM32(ebp + 0x18);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x14);
    ecx = ecx + esi * 4;
    ecx = ecx + eax;
    eax = MEM32(ebp + 0x1C);
    eax = eax - ebx;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x28);
    eax--;
    eax = eax >> 2;
    MEM32(esp + 0x18) = edx;
    eax++;

loc_001AE9A3: ;
    xmm4 = MEMF(edx); /* movups */
    xmm2 = MEMF(ecx); /* movups */
    ebx = MEM32(esp + 8);
    xmm3 = MEMF(ebx); /* movups */
    ebx = MEM32(esp + 0x1C);
    /* subps: xmm3 -= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edx + -8); /* movups */
    edx = MEM32(esp + 0x2C);
    /* subps: xmm4 -= xmm2 (packed 4xfloat) */
    /* addps: xmm4 += xmm3 (packed 4xfloat) */
    /* mulps: xmm4 *= xmm0 (packed 4xfloat) */
    MEMF(edx + ebx) = xmm4; /* movups */
    MEM32(esp + 8) = MEM32(esp + 8) + 0x10;
    edx = MEM32(esp + 0x18);
    MEMF(ebx) = xmm1; /* movups */
    edx = edx + 0x10;
    ebx = ebx + 0x10;
    ecx = ecx + 0x10;
    eax--;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ebx;
    if ((eax != 0)) goto loc_001AE9A3; /* jne: not equal / not zero */

loc_001AE9EC: ;
    ebx = MEM32(ebp + 8);

loc_001AE9EF: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    eax = ebx * 4;
    edx = edx + eax;
    ecx = ecx + eax;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = edx + eax;
    ecx = ecx + eax;
    eax = MEM32(esp + 0x24);
    eax--;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x24) = eax;
    if ((eax != 0)) goto loc_001AE965; /* jne: not equal / not zero */

loc_001AEA2D: ;
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    edx = esi;
    PUSH32(esp, 0); sub_001AE0D0(); /* call 0x001AE0D0 */

loc_001AEA47: ;
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    edx = esi;
    PUSH32(esp, 0); sub_001AE0D0(); /* call 0x001AE0D0 */

loc_001AEA61: ;
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ebp + 0x1C);
    xmm2 = MEMF(0x648D18); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001AE3E0(); /* call 0x001AE3E0 */

loc_001AEA8E: ;
    xmm5 = xmm5 * MEMF(0x648D10); /* mulss */
    eax = MEM32(ebp + 0x28);
    ecx = esp + 0x7C;
    esp = esp + 0x50;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    xmm2 = MEMF(ecx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    if (CMP_GE(edi, eax)) goto loc_001AEBC7; /* jge: greater or equal (signed >=) */

loc_001AEAB6: ;
    edx = MEM32(ebp + 0x14);
    eax = edi * 4 + -4;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    MEM32(esp + 0x18) = eax;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = eax + esi;
    eax = eax << 2;
    ecx = eax + edx;
    edx = MEM32(ebp + 0x18);
    MEM32(esp + 0x10) = ecx;
    ecx = edi + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    eax = eax + edx + 4;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 0x28);
    ecx = ecx + esi;
    ecx = edx + ecx * 4;
    eax = eax - edi;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x24) = eax;
    goto loc_001AEB00;

    /* nop */

loc_001AEB00: ;
    if (CMP_GE(esi, MEM32(ebp + 0x20))) goto loc_001AEB95; /* jge: greater or equal (signed >=) */

loc_001AEB09: ;
    ecx = MEM32(esp + 8);
    ebx = MEM32(ebp + 0x14);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    ecx = ecx + esi * 4;
    ecx = ecx + edx;
    edx = MEM32(ebp + 0x10);
    edx = edx - ebx;
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x28);
    edx--;
    edx = edx >> 2;
    edx++;
    goto loc_001AEB40;

    /* nop */

loc_001AEB40: ;
    ebx = MEM32(esp + 0x14);
    xmm1 = MEMF(ebx); /* movups */
    xmm4 = MEMF(edi + -8); /* movups */
    xmm5 = MEMF(edi); /* movups */
    ebx = MEM32(esp + 0x2C);
    xmm3 = MEMF(ecx); /* movups */
    xmm0 = MEMF(eax); /* movups */
    ebx = ebx + eax;
    /* subps: xmm5 -= xmm4 (packed 4xfloat) */
    xmm4 = MEMF(ebx); /* movups */
    /* mulps: xmm5 *= xmm2 (packed 4xfloat) */
    /* subps: xmm4 -= xmm5 (packed 4xfloat) */
    MEMF(ebx) = xmm4; /* movups */
    ebx = MEM32(esp + 0x14);
    /* subps: xmm1 -= xmm3 (packed 4xfloat) */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    MEMF(eax) = xmm0; /* movups */
    ebx = ebx + 0x10;
    ecx = ecx + 0x10;
    edi = edi + 0x10;
    eax = eax + 0x10;
    edx--;
    MEM32(esp + 0x14) = ebx;
    if ((edx != 0)) goto loc_001AEB40; /* jne: not equal / not zero */

loc_001AEB8C: ;
    edi = MEM32(ebp + 0x24);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x18);

loc_001AEB95: ;
    ecx = MEM32(esp + 0x10);
    eax = ebx * 4;
    ecx = ecx + eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + eax;
    MEM32(esp + 8) = MEM32(esp + 8) + eax;
    ecx = MEM32(esp + 0x18);
    ecx = ecx + eax;
    eax = MEM32(esp + 0x24);
    eax--;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x24) = eax;
    if ((eax != 0)) goto loc_001AEB00; /* jne: not equal / not zero */

loc_001AEBC7: ;
    edx = MEM32(ebp + 0x28);
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = esi;
    PUSH32(esp, 0); sub_001AE0D0(); /* call 0x001AE0D0 */

loc_001AEBE1: ;
    edx = MEM32(ebp + 0x28);
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = esi;
    PUSH32(esp, 0); sub_001AE0D0(); /* call 0x001AE0D0 */

loc_001AEBFB: ;
    esp = esp + 0x30;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001AEC10
 * Original: 0x001AEC10 - 0x001AECB0 (160 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEC10(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEC10: ;
    ecx = edi;
    PUSH32(esp, ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    ebx = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_001AE090(); /* call 0x001AE090 */

loc_001AEC2A: ;
    eax = MEM32(esp + 0x34);
    xmm5 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    ecx = edi + -2;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    edx = esi + -2;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x34); /* mulss */
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648D18); /* mulss */
    xmm2 = xmm2 + MEMF(0x648D14); /* addss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_001AE3E0(); /* call 0x001AE3E0 */

loc_001AEC7F: ;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm0 = xmm5; /* movaps */
    PUSH32(esp, 0); sub_001AE6B0(); /* call 0x001AE6B0 */

loc_001AECAA: ;
    esp = esp + 0x50;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AECB0
 * Original: 0x001AECB0 - 0x001AEE33 (387 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AECB0(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AECB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0); sub_001AE090(); /* call 0x001AE090 */

loc_001AECD5: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001AE090(); /* call 0x001AE090 */

loc_001AECEC: ;
    edx = MEM32(esp + 0x44);
    xmm6 = MEMF(esp + 0x38); /* movss */
    xmm7 = MEMF(0x648D18); /* movss */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    eax = ebp + -2;
    xmm5 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    ecx = edi + -2;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0x48); /* mulss */
    PUSH32(esp, 1);
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm2 = xmm1; /* movaps */
    PUSH32(esp, edi);
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm2 = xmm2 + MEMF(0x648D14); /* addss */
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, 0); sub_001AE3E0(); /* call 0x001AE3E0 */

loc_001AED48: ;
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x64);
    PUSH32(esp, 2);
    xmm1 = xmm5; /* movaps */
    xmm2 = xmm1; /* movaps */
    PUSH32(esp, edi);
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm2 = xmm2 + MEMF(0x648D14); /* addss */
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001AE3E0(); /* call 0x001AE3E0 */

loc_001AED7C: ;
    ecx = MEM32(esp + 0x84);
    edx = MEM32(esp + 0x80);
    eax = MEM32(esp + 0x7C);
    esp = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001AE8D0(); /* call 0x001AE8D0 */

loc_001AEDAB: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    xmm0 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_001AE6B0(); /* call 0x001AE6B0 */

loc_001AEDD2: ;
    eax = MEM32(esp + 0x80);
    ecx = MEM32(esp + 0x7C);
    edx = MEM32(esp + 0x78);
    ebx = MEM32(esp + 0x6C);
    xmm0 = MEMF(esp + 0x74); /* movss */
    esp = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001AE6B0(); /* call 0x001AE6B0 */

loc_001AEE06: ;
    edx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001AE8D0(); /* call 0x001AE8D0 */

loc_001AEE2C: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001AEE40
 * Original: 0x001AEE40 - 0x001AEE73 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001AEE40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = ebp + 0xC;
    xmm0 = MEMF(eax); /* movss */
    esp = esp & 0xFFFFFFF0u;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    /* shufps xmm0, xmm0, 0 */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001AEE6F; /* jle: less or equal (signed <=) */

loc_001AEE55: ;
    eax = MEM32(ebp + 8);
    ecx--;
    ecx = ecx >> 2;
    ecx++;
    /* nop */

loc_001AEE60: ;
    xmm1 = MEMF(eax); /* movaps */
    /* mulps: xmm1 *= xmm0 (packed 4xfloat) */
    MEMF(eax) = xmm1; /* movaps */
    eax = eax + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_001AEE60; /* jne: not equal / not zero */

loc_001AEE6F: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001AEE80
 * Original: 0x001AEE80 - 0x001AEF4B (203 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEE80(void)
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

loc_001AEE80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001AEE96: ;
    ecx = ZX8(MEM8(esi + 0x51));
    edx = ZX8(MEM8(esi + 0x52));
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    edi = eax;
    eax = ZX8(MEM8(esi + 0x50));
    edi = edi << 8;
    edi = edi | eax;
    edi = edi << 8;
    edi = edi | ecx;
    edi = edi << 8;
    edi = edi | edx;
    edx = MEM32(esi + 0x30);
    (void)0; /* test HI8(edx), 4 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(HI8(edx), 4)) goto loc_001AEEE7; /* je: equal / zero */

loc_001AEEC9: ;
    xmm0 = xmm0 * MEMF(ebp + 8); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_001AEEE7; /* jb: below (unsigned <) */

loc_001AEED9: ;
    xmm0 = MEMF(0x648D2C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_001AEEE7: ;
    if (TEST_Z(LO8(edx), 2)) { sub_001AEF4B(); return; } /* je: equal / zero */

loc_001AEEEC: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_001AEEFD: ;
    if (TEST_Z(HI8(edx), 2)) goto loc_001AEF1A; /* je: equal / zero */

loc_001AEF02: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */

loc_001AEF1A: ;
    ebx = 0x590588;
    esi = esi + 0x90;

loc_001AEF25: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001AEF34: ;
    MEM32(esi) = edi;
    ebx = ebx + 0xC;
    esi = esi + 0x18;
    if (CMP_L(ebx, 0x5905B8)) goto loc_001AEF25; /* jl: less (signed <) */

loc_001AEF44: ;
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
 * sub_001AF030
 * Original: 0x001AF030 - 0x001AF333 (771 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF030: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_S(ebp, ebp)) { sub_001AF333(); return; } /* jl: less (signed <) */

loc_001AF03D: ;
    if (CMP_GE(ebp, 0xE)) { sub_001AF333(); return; } /* jge: greater or equal (signed >=) */

loc_001AF046: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AF05F; /* je: equal / zero */

loc_001AF04F: ;
    if (CMP_GE(MEM32(0x775AE8), 0x96)) { sub_001AF333(); return; } /* jge: greater or equal (signed >=) */

loc_001AF05F: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(HI8(eax), 8)) goto loc_001AF06F; /* je: equal / zero */

loc_001AF068: ;
    ecx = 0x94;
    goto loc_001AF082;

loc_001AF06F: ;
    if (TEST_NZ(LO8(eax), 1)) goto loc_001AF07D; /* jne: not equal / not zero */

loc_001AF073: ;
    (void)0; /* test HI8(eax), 1 - flags set for next jcc */
    ecx = 5;
    if (TEST_Z(HI8(eax), 1)) goto loc_001AF082; /* je: equal / zero */

loc_001AF07D: ;
    ecx = 0x70;

loc_001AF082: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    eax = eax + 0x104;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001AF097: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_001AF0A3; /* jne: not equal / not zero */

loc_001AF0A0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001AF0A3: ;
    eax = MEM32(esp + 0x30);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = ebp;
    ebp = MEM32(esp + 0x10);
    edx = ebp;
    eax = MEM32(edx);
    xmm2 = 0.0f; /* xorps self = zero */
    ecx = esi + 0x78;
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    xmm1 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    MEM32(ecx + 8) = edx;
    ecx = MEM32(edi);
    eax = esi + 0x6C;
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 0x2C);
    ecx = ZX8(MEM8(esp + 0x38));
    MEMF(esi + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(esi + 0xE8) = eax;
    SET_LO8(eax, MEM8(esp + 0x40));
    MEMF(esi + 0x54) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(esp + 0x44));
    MEMF(esi + 0x40) = xmm0; /* movss */
    MEMF(esi + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM8(esi + 0x51) = LO8(eax);
    eax = MEM32(esp + 0x50);
    MEM32(esi + 0xE4) = edx;
    SET_LO8(edx, MEM8(esp + 0x3C));
    MEMF(esi + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    MEM32(esi + 0xF0) = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(esi + 0x50) = LO8(edx);
    edx = MEM32(esp + 0x4C);
    MEMF(esi + 0x34) = xmm2; /* movss */
    MEM8(esi + 0x52) = LO8(ecx);
    MEM32(esi + 0xEC) = edx;
    MEM8(esi + 0xF4) = 0;
    MEMF(esi + 0xF8) = xmm1; /* movss */
    MEMF(esi + 0xFC) = xmm2; /* movss */
    MEM8(esi + 0x100) = 0xFF;
    MEM8(esi + 0x101) = 0xFF;
    MEM8(esi + 0x102) = 0xFF;
    MEMF(esi + 0x38) = xmm0; /* movss */
    MEMF(esi + 0x48) = xmm3; /* movss */
    if (1 /* jnp after test - parity */) goto loc_001AF1BC; /* jnp: not parity */

loc_001AF1A9: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_001AF1B1; /* jbe: below or equal (unsigned <=) */

loc_001AF1AE: ;
    xmm3 = xmm0; /* movaps */

loc_001AF1B1: ;
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    goto loc_001AF1C1;

loc_001AF1BC: ;
    MEMF(esi + 0x4C) = xmm3; /* movss */

loc_001AF1C1: ;
    ecx = MEM32(esp + 0x48);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esi + 0x5C) = xmm2; /* movss */
    MEMF(esi + 0x60) = xmm2; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_001AF1E6; /* je: equal / zero */

loc_001AF1D3: ;
    eax = esi + 0x64;
    if (CMP_EQ(ecx, eax)) goto loc_001AF1F0; /* je: equal / zero */

loc_001AF1DA: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    goto loc_001AF1F0;

loc_001AF1E6: ;
    MEMF(esi + 0x64) = xmm2; /* movss */
    MEMF(esi + 0x68) = xmm2; /* movss */

loc_001AF1F0: ;
    eax = esi + 0x94;
    if (CMP_EQ(eax, 0x5905B8)) goto loc_001AF206; /* je: equal / zero */

loc_001AF1FD: ;
    MEMF(eax) = xmm2; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */

loc_001AF206: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    SET_LO8(edx, 0x10);
    if (TEST_Z(LO8(edx), LO8(ecx))) goto loc_001AF21A; /* je: equal / zero */

loc_001AF20F: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(eax) = xmm0; /* movss */

loc_001AF21A: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    SET_LO8(ecx, 0x20);
    if (TEST_Z(LO8(ecx), LO8(eax))) goto loc_001AF236; /* je: equal / zero */

loc_001AF223: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x98); /* subss */
    MEMF(esi + 0x98) = xmm0; /* movss */

loc_001AF236: ;
    eax = esi + 0xAC;
    if (CMP_EQ(eax, 0x5905C0)) goto loc_001AF24C; /* je: equal / zero */

loc_001AF243: ;
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */

loc_001AF24C: ;
    if (TEST_Z(MEM8(esi + 0x30), LO8(edx))) goto loc_001AF25C; /* je: equal / zero */

loc_001AF251: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(eax) = xmm0; /* movss */

loc_001AF25C: ;
    if (TEST_Z(MEM8(esi + 0x30), LO8(ecx))) goto loc_001AF274; /* je: equal / zero */

loc_001AF261: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0xB0); /* subss */
    MEMF(esi + 0xB0) = xmm0; /* movss */

loc_001AF274: ;
    eax = esi + 0xC4;
    if (CMP_EQ(eax, 0x5905C8)) goto loc_001AF28A; /* je: equal / zero */

loc_001AF281: ;
    MEMF(eax) = xmm2; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */

loc_001AF28A: ;
    if (TEST_Z(MEM8(esi + 0x30), LO8(edx))) goto loc_001AF29A; /* je: equal / zero */

loc_001AF28F: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(eax) = xmm0; /* movss */

loc_001AF29A: ;
    if (TEST_Z(MEM8(esi + 0x30), LO8(ecx))) goto loc_001AF2B2; /* je: equal / zero */

loc_001AF29F: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0xC8); /* subss */
    MEMF(esi + 0xC8) = xmm0; /* movss */

loc_001AF2B2: ;
    eax = esi + 0xDC;
    if (CMP_EQ(eax, 0x5905D0)) goto loc_001AF2C8; /* je: equal / zero */

loc_001AF2BF: ;
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */

loc_001AF2C8: ;
    if (TEST_Z(MEM8(esi + 0x30), LO8(edx))) goto loc_001AF2D8; /* je: equal / zero */

loc_001AF2CD: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(eax) = xmm0; /* movss */

loc_001AF2D8: ;
    if (TEST_Z(MEM8(esi + 0x30), LO8(ecx))) goto loc_001AF2ED; /* je: equal / zero */

loc_001AF2DD: ;
    xmm1 = xmm1 - MEMF(esi + 0xE0); /* subss */
    MEMF(esi + 0xE0) = xmm1; /* movss */

loc_001AF2ED: ;
    PUSH32(esp, 0x3F800000);
    eax = esi;
    PUSH32(esp, 0); sub_001AEE80(); /* call 0x001AEE80 */

loc_001AF2F9: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), 1)) goto loc_001AF328; /* jne: not equal / not zero */

loc_001AF303: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM8(esi + 0x14) = 1;
    edx = MEM32(ebp);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(ebp + 4);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x20) = ecx;
    MEM8(esi + 0x14) = 1;
    MEMF(esi + 0x24) = xmm0; /* movss */

loc_001AF328: ;
    MEM32(0x775AE8) = MEM32(0x775AE8) + 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF340
 * Original: 0x001AF340 - 0x001AF3C0 (128 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AF340: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B8D0C), _icall_esp); /* indirect call */
    }

loc_001AF350: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AF390; /* jne: not equal / not zero */

loc_001AF357: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001AF3BE; /* jne: not equal / not zero */

loc_001AF360: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001AF367: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001AF3BE; /* jl: less (signed <) */

loc_001AF36E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001AF383; /* je: equal / zero */

loc_001AF37B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001AF37E: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001AF383: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_001AF390: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    SET_LO8(eax, 1);
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_001AF3BE; /* jne: not equal / not zero */

loc_001AF399: ;
    MEM8(esi + 0x14) = LO8(eax);
    ecx = MEM32(esi + 0x78);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(esi + 0x7C);
    MEM32(esi + 0x1C) = edx;
    ecx = MEM32(esi + 0x80);
    MEM32(esi + 0x20) = ecx;
    xmm0 = MEMF(esi + 0x54); /* movss */
    MEM8(esi + 0x14) = LO8(eax);
    MEMF(esi + 0x24) = xmm0; /* movss */

loc_001AF3BE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001AF570
 * Original: 0x001AF570 - 0x001AF973 (1027 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001AF570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x94;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = eax + ecx + 0x330;
    PUSH32(esp, edi);
    esi = 0x2D;
    MEM32(esp + 0x64) = edx;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001AF5A4: ;
    esi = MEM32(ebp + 8);
    edi = eax;
    MEM32(edi) = 0x417FC;
    edi = edi + 4;
    MEM32(edi) = 6;
    edi = edi + 4;
    MEM32(edi) = 0x40A01818;
    eax = esi + 0x6C;
    ebx = esp + 0x58;
    edi = edi + 4;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001AF5D0: ;
    xmm0 = MEMF(esi + 0x54); /* movss */
    ecx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x60);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ecx;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    eax = MEM32(esp + 0xC);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    edx = MEM32(esp + 0x10);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0xF8); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
    xmm1 = MEMF(esp + 0x18); /* movss */
    eax = MEM32(esp + 0x14);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    edx = MEM32(esp + 0x18);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    eax = MEM32(esp + 0x1C);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = eax;
    eax = esi + 0x78;
    edx = eax;
    ebx = MEM32(edx);
    MEM32(esp + 0xC) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = MEM32(esp + 0xC);
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEM32(esp + 0x10) = ebx;
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(esi + 0x54); /* movss */
    MEM32(esp + 0xC) = ecx;
    xmm1 = MEMF(esp + 0xC); /* movss */
    ecx = MEM32(esp + 0x5C);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x60);
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm1 = MEMF(esp + 0x14); /* movss */
    edx = MEM32(esp + 0x10);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0xF8); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm1 = MEMF(esp + 0x18); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    edx = MEM32(esp + 0x18);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x20) = ecx;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax);
    MEMF(esp + 0x20) = xmm1; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = edx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x2C); /* subss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    ecx = esp + 0x48;
    edx = esp + 0x3C;
    eax = esp + 0x6C;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x9C) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x54);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x9C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x6C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001AF84F: ;
    ecx = esp + 0x3C;
    edx = esp + 0x78;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x54);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x64);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x78;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001AF891: ;
    xmm2 = MEMF(esp + 0x80); /* movss */
    xmm3 = MEMF(esp + 0x70); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    xmm1 = MEMF(esp + 0x74); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x6C); /* movss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x78); /* movss */
    eax = MEM32(esp + 0x24);
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = eax;
    eax = esp + 0x30;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x64) = eax;
    edx = MEM32(esp + 0x64);
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
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_001AF973(); return; } /* jp: parity */

loc_001AF954: ;
    ecx = MEM32(0x5A02CC);
    edx = MEM32(0x5A02D0);
    eax = MEM32(0x5A02D4);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    g_seh_ebp = ebp; sub_001AF9B5(); return; /* tail jmp 0x001AF9B5 */

}

/**
 * sub_001AFD00
 * Original: 0x001AFD00 - 0x001AFD1B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFD00(void)
{
    int _flags = 0; /* fallback flag var */

loc_001AFD00: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x30);
    esp = esp - 0xF0;
    if (TEST_NZ(HI8(eax), 0x10)) { sub_001AFD1B(); return; } /* jne: not equal / not zero */

loc_001AFD12: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0xF0;
    esp += 4; return; /* ret */

}

/**
 * sub_001B0730
 * Original: 0x001B0730 - 0x001B07F0 (192 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001B0730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xF8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x77181C);
    edi = 0; /* xor self */
    esi = 0x8F;
    PUSH32(esp, 0); sub_000DB120(); /* call 0x000DB120 */

loc_001B074C: ;
    esp = esp + 4;
    eax = 0xC;
    PUSH32(esp, 0); sub_001A4B80(); /* call 0x001A4B80 */

loc_001B0759: ;
    esi = eax;
    PUSH32(esp, 0); sub_000DB490(); /* call 0x000DB490 */

loc_001B0760: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 4;
    if ((ecx == 0)) { sub_001B07F0(); return; } /* je: equal / zero */

loc_001B076F: ;
    eax = 0xB;
    PUSH32(esp, 0); sub_001A4DD0(); /* call 0x001A4DD0 */

loc_001B0779: ;
    esi = eax;
    PUSH32(esp, 0); sub_000DB4B0(); /* call 0x000DB4B0 */

loc_001B0780: ;
    edx = MEM32(ebp + 8);
    eax = ZX8(MEM8(edx + 0x100));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / MEMF(0x648EEC); /* divss */
    MEMF(ebp + -32) = xmm0; /* movss */
    ecx = MEM32(ebp + 8);
    edx = ZX8(MEM8(ecx + 0x101));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / MEMF(0x648EEC); /* divss */
    MEMF(ebp + -28) = xmm0; /* movss */
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax + 0x102));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / MEMF(0x648EEC); /* divss */
    MEMF(ebp + -24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebp + -20) = xmm0; /* movss */
    edx = ebp + -32;
    PUSH32(esp, edx);
    eax = 1;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_001B07EE: ;
    g_seh_ebp = ebp; sub_001B0801(); return; /* tail jmp 0x001B0801 */

}

/**
 * sub_001B0B70
 * Original: 0x001B0B70 - 0x001B126E (1790 bytes, 479 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001B0B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    eax = MEM32(0x847194);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_001B1267; /* je: equal / zero */

loc_001B0B8C: ;
    ebx = MEM32(ebp + 8);
    xmm0 = MEMF(ebx + 0x3C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x16);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001B0BAB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001B0BC5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x19);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001B0BDF: ;
    xmm0 = MEMF(ebx + 0x3C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001B0BFB: ;
    (void)0; /* test MEM8(ebx + 0x30), 3 - flags set for next jcc */
    edi = MEM32(ebp + 0xC);
    if (TEST_NZ(MEM8(ebx + 0x30), 3)) goto loc_001B0CB7; /* jne: not equal / not zero */

loc_001B0C08: ;
    edx = MEM32(0x8470DC);
    ecx = SX16(LO16(edi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    eax = MEM32(ecx + edx + 4);
    xmm0 = MEMF(eax + 0x5C); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_001B0C2F: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fsin  */
    eax = 1;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001B0C72: ;
    edx = MEM32(esp + 0x14);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    eax = 1;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001B0C89: ;
    ecx = MEM32(esp + 0x18);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x19);
    eax = 1;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001B0CA0: ;
    eax = MEM32(esp + 0x14);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x18);
    eax = 1;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001B0CB7: ;
    ecx = MEM32(ebx + 0xF0);
    if (TEST_Z(ecx, ecx)) goto loc_001B0CEA; /* je: equal / zero */

loc_001B0CC1: ;
    eax = ZX8(MEM8(ebx + 0xF4));
    ecx = MEM32(ecx);
    edx = eax + eax * 4;
    eax = ecx + edx * 4;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_001B0CE6; /* jne: not equal / not zero */

loc_001B0CDA: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_001B0CE3: ;
    esp = esp + 8;

loc_001B0CE6: ;
    esi = MEM32(esi);
    goto loc_001B0CFE;

loc_001B0CEA: ;
    eax = MEM32(ebx + 0xE4);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001B0CF9: ;
    esp = esp + 4;
    esi = eax;

loc_001B0CFE: ;
    if (TEST_NZ(esi, esi)) goto loc_001B0D12; /* jne: not equal / not zero */

loc_001B0D02: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001B0D0A: ;
    MEM32(0x771764) = esi;
    goto loc_001B0D29;

loc_001B0D12: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_001B0D29; /* je: equal / zero */

loc_001B0D1A: ;
    ecx = esi;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_001B0D23: ;
    MEM32(0x771764) = esi;

loc_001B0D29: ;
    if (TEST_Z(MEM8(ebx + 0x30), 1)) goto loc_001B0D40; /* je: equal / zero */

loc_001B0D2F: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001B0730(); /* call 0x001B0730 */

loc_001B0D36: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B0D40: ;
    eax = MEM32(0x77181C);
    esi = 1;
    if (CMP_EQ(eax, esi)) goto loc_001B0D5A; /* je: equal / zero */

loc_001B0D4E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001B0D54: ;
    MEM32(0x77181C) = esi;

loc_001B0D5A: ;
    (void)0; /* test MEM8(ebx + 0x30), 2 - flags set for next jcc */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM8(esp + 0xF) = 1;
    if (TEST_Z(MEM8(ebx + 0x30), 2)) goto loc_001B0DBD; /* je: equal / zero */

loc_001B0D6D: ;
    edx = MEM32(0x84A13C);
    xmm0 = MEMF(ebx + 0x78); /* movss */
    ecx = SX16(LO16(edi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    eax = MEM32(ecx + edx + 0x144);
    esi = eax + 0x50;
    ecx = 0x10;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + 0xC);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    goto loc_001B0E25;

loc_001B0DBD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEM8(esp + 0xF) = 0;

loc_001B0E25: ;
    (void)0; /* cmp MEM32(ebx + 0xE8), 0xFFFFFFFFu - flags set for next jcc */
    ecx = MEM32(0x771760);
    if (CMP_NE(MEM32(ebx + 0xE8), 0xFFFFFFFFu)) goto loc_001B0FBD; /* jne: not equal / not zero */

loc_001B0E38: ;
    eax = MEM32(0x6B82A4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001B0E5A; /* je: equal / zero */

loc_001B0E43: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001B0E49: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x771760) = esi;

loc_001B0E5A: ;
    eax = MEM32(0x6B8C5C);
    (void)0; /* cmp MEM32(0x77175C), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x77175C), eax)) goto loc_001B0E7F; /* je: equal / zero */

loc_001B0E69: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001B0E6E: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x77175C) = esi;

loc_001B0E7F: ;
    ecx = MEM32(0x84A13C);
    eax = SX16(LO16(edi));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    eax = eax + ecx;
    xmm6 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0x214); /* subss */
    xmm6 = xmm6 - MEMF(eax + 0x21C); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm1 = xmm1 / MEMF(eax + 0x1F8); /* divss */
    xmm7 = xmm7 / MEMF(eax + 0x1F4); /* divss */
    esi = ebx + 0x84;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    edi = esp + 0x8C;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = 4;
    goto loc_001B0EE1;

loc_001B0EDD: ;
    esi = MEM32(esp + 0x10);

loc_001B0EE1: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = edi + -28;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B0EFA; /* je: equal / zero */

loc_001B0EEC: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001B0EF8: ;
    goto loc_001B0F0C;

loc_001B0EFA: ;
    edx = esi;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_001B0F0C: ;
    eax = MEM32(esi + 0xC);
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x5C); /* addss */
    MEM32(edi + -16) = eax;
    MEMF(edi + -12) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x60); /* addss */
    MEMF(edi + -8) = xmm0; /* movss */
    ecx = MEM32(edi + -20);
    edx = MEM32(edi + -24);
    xmm0 = MEMF(edi + -28); /* movss */
    PUSH32(esp, edi);
    eax = edi + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_001B0F4E: ;
    xmm0 = MEMF(edi + -4); /* movss */
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(edi + -4) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(edi + -4); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(edi + -4) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    MEMF(edi) = xmm0; /* movss */
    edx = edx + 0x18;
    esp = esp + 0x10;
    edi = edi + 0x20;
    eax--;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001B0EDD; /* jne: not equal / not zero */

loc_001B0FA6: ;
    PUSH32(esp, 0x20);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_001B0FB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B0FBD: ;
    eax = MEM32(0x6B82DC);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001B0FDC; /* je: equal / zero */

loc_001B0FC8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001B0FCE: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(0x771760) = esi;

loc_001B0FDC: ;
    eax = MEM32(ebx + 0x30);
    if (TEST_Z(LO8(eax), 4)) goto loc_001B1069; /* je: equal / zero */

loc_001B0FE7: ;
    eax = MEM32(0x6B8C6C);
    (void)0; /* cmp MEM32(0x77175C), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x77175C), eax)) goto loc_001B1009; /* je: equal / zero */

loc_001B0FF6: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001B0FFB: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(0x77175C) = esi;

loc_001B1009: ;
    ecx = ZX8(MEM8(ebx + 0x100));
    xmm0 = MEMF(0x648CEC); /* movss */
    edx = ZX8(MEM8(ebx + 0x101));
    eax = ZX8(MEM8(ebx + 0x102));
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    ecx = esp + 0x20;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm2 = xmm2 * xmm0; /* mulss */
    eax = 1;
    ecx = 0; /* xor self */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_001B1067: ;
    goto loc_001B107E;

loc_001B1069: ;
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */
    esi = MEM32(0x6B8C74);
    if (TEST_NZ(LO8(eax), 8)) goto loc_001B1079; /* jne: not equal / not zero */

loc_001B1073: ;
    esi = MEM32(0x6B8C64);

loc_001B1079: ;
    PUSH32(esp, 0); sub_000DB4B0(); /* call 0x000DB4B0 */

loc_001B107E: ;
    ecx = MEM32(ebx + 0xF0);
    if (TEST_Z(ecx, ecx)) goto loc_001B1098; /* je: equal / zero */

loc_001B1088: ;
    eax = ZX8(MEM8(ebx + 0xF4));
    ecx = MEM32(ecx);
    PUSH32(esp, 0); sub_000762E0(); /* call 0x000762E0 */

loc_001B1096: ;
    goto loc_001B10AA;

loc_001B1098: ;
    eax = MEM32(ebx + 0xE8);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001B10A7: ;
    esp = esp + 4;

loc_001B10AA: ;
    esi = 2;
    edi = eax;
    PUSH32(esp, 0); sub_000DB460(); /* call 0x000DB460 */

loc_001B10B6: ;
    SET_LO8(eax, MEM8(ebx + 0x30));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_001B10D1; /* jns: not sign (positive) */

loc_001B10BD: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001AF570(); /* call 0x001AF570 */

loc_001B10C7: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B10D1: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    esi = MEM32(ebp + 0xC);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    ecx = esp + 0x30;
    PUSH32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001AFD00(); /* call 0x001AFD00 */

loc_001B10EA: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B1267; /* jne: not equal / not zero */

loc_001B10F5: ;
    ecx = MEM32(0x84A13C);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = SX16(LO16(esi));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    eax = eax + ecx;
    xmm6 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 0x214); /* subss */
    xmm6 = xmm6 - MEMF(eax + 0x21C); /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm0 = xmm0 / MEMF(eax + 0x1F8); /* divss */
    xmm7 = xmm7 / MEMF(eax + 0x1F4); /* divss */
    esi = ebx + 0x84;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x14) = 0x5905B8;
    edi = esp + 0x8C;
    MEM32(esp + 0x10) = esi;
    goto loc_001B1162;

loc_001B115E: ;
    esi = MEM32(esp + 0x10);

loc_001B1162: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = edi + -28;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B117B; /* je: equal / zero */

loc_001B116D: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001B1179: ;
    goto loc_001B118D;

loc_001B117B: ;
    ecx = esi;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_001B118D: ;
    edx = MEM32(esi + 0xC);
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x5C); /* addss */
    MEM32(edi + -16) = edx;
    MEMF(edi + -12) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x60); /* addss */
    PUSH32(esp, edi);
    MEMF(edi + -8) = xmm0; /* movss */
    ecx = MEM32(edi + -24);
    xmm0 = MEMF(edi + -28); /* movss */
    eax = edi + -4;
    PUSH32(esp, eax);
    eax = MEM32(edi + -20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8700(); /* call 0x002A8700 */

loc_001B11CF: ;
    xmm0 = MEMF(edi + -4); /* movss */
    eax = MEM32(esp + 0x24);
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(edi + -4) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(edi + -4); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(edi + -4) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    ecx = edi + 4;
    esp = esp + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEMF(edi) = xmm0; /* movss */
    if (CMP_EQ(eax, ecx)) goto loc_001B121F; /* je: equal / zero */

loc_001B1215: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 8) = ecx;

loc_001B121F: ;
    if (TEST_Z(MEM8(ebx + 0x30), 0x20)) goto loc_001B1237; /* je: equal / zero */

loc_001B1225: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(edi + 8); /* subss */
    MEMF(edi + 8) = xmm0; /* movss */

loc_001B1237: ;
    ecx = MEM32(esp + 0x10);
    eax = eax + 8;
    ecx = ecx + 0x18;
    edi = edi + 0x28;
    (void)0; /* cmp eax, 0x5905D8 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, 0x5905D8)) goto loc_001B115E; /* jl: less (signed <) */

loc_001B1257: ;
    PUSH32(esp, 0x28);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_001B1267: ;
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
 * sub_001B1270
 * Original: 0x001B1270 - 0x001B1282 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1270(void)
{

loc_001B1270: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 1;
    MEM32(0x547358) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001B1290
 * Original: 0x001B1290 - 0x001B12BE (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B1290: ;
    eax = MEM32(0x775AE8);
    eax--;
    ecx = 0;
    SET_LO8(ecx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ecx--;
    ecx = ecx & eax;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x775AE8) = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001B12BE(); return; } /* jne: not equal / not zero */

loc_001B12B0: ;
    eax = MEM32(esp + 4);
    edx = 1;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001B12C0
 * Original: 0x001B12C0 - 0x001B12DC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B12C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B12C0: ;
    eax = MEM32(0x775AE8);
    eax--;
    ecx = 0;
    SET_LO8(ecx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ecx--;
    ecx = ecx & eax;
    MEM32(0x775AE8) = ecx;
    g_seh_ebp = ebp; sub_000DAE40(); return; /* tail jmp 0x000DAE40 */

}

/**
 * sub_001B12E0
 * Original: 0x001B12E0 - 0x001B12FF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B12E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B12E0: ;
    if (TEST_Z(esi, esi)) goto loc_001B12FC; /* je: equal / zero */

loc_001B12E4: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 5);
    eax = 0x120;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001B12F5: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001B12FF(); return; } /* jne: not equal / not zero */

loc_001B12FC: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001B1450
 * Original: 0x001B1450 - 0x001B14B6 (102 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B1450: ;
    ecx = MEM32(esp + 4);
    xmm4 = MEMF(ecx + 0x38); /* movss */
    /* ucomiss xmm4, MEMF(0x648D34) - sets EFLAGS */
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + MEMF(ecx + 0x34); /* addss */
    xmm1 = xmm3; /* movaps */
    MEMF(ecx + 0x34) = xmm0; /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    if (1 /* jnp after test - parity */) { sub_001B14B6(); return; } /* jnp: not parity */

loc_001B148C: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_001B1494; /* jbe: below or equal (unsigned <=) */

loc_001B1491: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_001B1494: ;
    /* comiss xmm0, MEMF(ecx + 0x4C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x4C))) { sub_001B14B6(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B149A: ;
    xmm1 = MEMF(ecx + 0x38); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 0x4C); /* subss */
    xmm0 = xmm0 - MEMF(ecx + 0x4C); /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    g_seh_ebp = ebp; sub_001B14C7(); return; /* tail jmp 0x001B14C7 */

}

/**
 * sub_001B15A0
 * Original: 0x001B15A0 - 0x001B168D (237 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B15A0(void)
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

loc_001B15A0: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    esp = esp - 0x44;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    xmm2 = MEMF(esi + 0x38); /* movss */
    /* ucomiss xmm2, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(esi + 0x34); /* addss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_001B15D4; /* jnp: not parity */

loc_001B15CF: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_001B15FF; /* ja: above (unsigned >) */

loc_001B15D4: ;
    SET_LO8(eax, MEM8(esi + 0x104));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001B168D(); return; } /* je: equal / zero */

loc_001B15E2: ;
    xmm0 = MEMF(esi + 0x108); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(0x648F58) - sets EFLAGS */
    MEMF(esi + 0x108) = xmm0; /* movss */
    if ((xmm0 < MEMF(0x648F58))) goto loc_001B1606; /* jb: below (unsigned <) */

loc_001B15FF: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_001B1606: ;
    xmm0 = xmm0 + MEMF(esi + 0x34); /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_001B1626; /* ja: above (unsigned >) */

loc_001B1619: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001B162C; /* jbe: below or equal (unsigned <=) */

loc_001B1626: ;
    MEMF(esp + 0x4C) = xmm1; /* movss */

loc_001B162C: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001B1641: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    eax = eax | 0xFFFFFF;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0x90) = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001B166F: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    eax = eax | 0xFFFFFF;
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0xA8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001B1AB0
 * Original: 0x001B1AB0 - 0x001B1B34 (132 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1AB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;

loc_001B1AB0: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0x34); /* movss */
    xmm3 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(ecx + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x38); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_001B1B34(); return; } /* jnp: not parity */

loc_001B1AE4: ;
    eax = MEM32(ecx + 0x30);
    if (TEST_Z(HI8(eax), 2)) goto loc_001B1B07; /* je: equal / zero */

loc_001B1AEC: ;
    eax = MEM32(0x8470DC);
    edx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(edx + 0x8C2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B1B07; /* je: equal / zero */

loc_001B1AFE: ;
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_001B1B07: ;
    xmm0 = MEMF(ecx + 0x34); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x38) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x38))) { sub_001B1B34(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B1B12: ;
    eax = MEM32(ecx + 0x214);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001B1B30; /* je: equal / zero */

loc_001B1B1D: ;
    esi = MEM32(ecx + 0x20C);
    if (TEST_Z(esi, esi)) goto loc_001B1B30; /* je: equal / zero */

loc_001B1B27: ;
    PUSH32(esp, 0); sub_000DB970(); /* call 0x000DB970 */

loc_001B1B2C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B1B30: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1BD0
 * Original: 0x001B1BD0 - 0x001B1C56 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1BD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001B1BD0: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    xmm1 = MEMF(edi + 0x34); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(edi + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x38); /* movss */
    /* ucomiss xmm1, MEMF(0x648D34) - sets EFLAGS */
    xmm1 = MEMF(0x648D14); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_001B1C56(); return; } /* jnp: not parity */

loc_001B1C06: ;
    eax = MEM32(0x8470DC);
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx + 0x8C2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B1C26; /* je: equal / zero */

loc_001B1C18: ;
    xmm2 = MEMF(edi + 0x38); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(edi + 0x34) = xmm2; /* movss */

loc_001B1C26: ;
    xmm2 = MEMF(edi + 0x34); /* movss */
    /* comiss xmm2, MEMF(edi + 0x38) - sets EFLAGS */
    if ((xmm2 <= MEMF(edi + 0x38))) { sub_001B1C56(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B1C31: ;
    eax = MEM32(edi + 0x358);
    if (TEST_Z(eax, eax)) goto loc_001B1C51; /* je: equal / zero */

loc_001B1C3B: ;
    esi = MEM32(edi + 0x350);
    if (TEST_Z(esi, esi)) goto loc_001B1C51; /* je: equal / zero */

loc_001B1C45: ;
    ecx = edi;
    PUSH32(esp, 0); sub_000DB970(); /* call 0x000DB970 */

loc_001B1C4C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B1C51: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1D10
 * Original: 0x001B1D10 - 0x001B1D49 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1D10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B1D10: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001B1450(); /* call 0x001B1450 */

loc_001B1D1B: ;
    eax = MEM32(edi + 0x104);
    ecx = ZX8(MEM8(eax + 0x10B));
    edx = MEM32(edi + 0x108);
    esp = esp + 4;
    if (CMP_NE(ecx, edx)) goto loc_001B1D45; /* jne: not equal / not zero */

loc_001B1D35: ;
    edx = MEM32(eax + 0x4B0);
    ecx = MEM32(edx + 0x24);
    ecx = MEM32(ecx + 8);
    if (TEST_NZ(ecx, ecx)) { sub_001B1D49(); return; } /* jne: not equal / not zero */

loc_001B1D45: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B1D70
 * Original: 0x001B1D70 - 0x001B2297 (1319 bytes, 294 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B1D70(void)
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

loc_001B1D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm2 = MEMF(esi + 0x34); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    /* comiss xmm2, MEMF(esi + 0x38) - sets EFLAGS */
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if ((xmm2 > MEMF(esi + 0x38))) goto loc_001B228E; /* ja: above (unsigned >) */

loc_001B1DB1: ;
    xmm3 = MEMF(esi + 0x48); /* movss */
    ebx = 0; /* xor self */
    /* comiss xmm3, MEMF(esi + 0x34) - sets EFLAGS */
    if ((xmm3 <= MEMF(esi + 0x34))) goto loc_001B1F9F; /* jbe: below or equal (unsigned <=) */

loc_001B1DC2: ;
    xmm1 = xmm1 / xmm3; /* divss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D20); /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(esi + 0x108); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(esi + 0x54) = xmm2; /* movss */
    xmm0 = MEMF(esi + 0x110); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esi + 0x118) = xmm0; /* movss */

loc_001B1E14: ;
    xmm0 = MEMF(esi + 0x10C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* cmp MEM8(esi + 0x11C), LO8(ebx) - flags set for next jcc */
    xmm4 = MEMF(0x64974C); /* movss */
    if (CMP_NE(MEM8(esi + 0x11C), LO8(ebx))) goto loc_001B1E48; /* jne: not equal / not zero */

loc_001B1E40: ;
    xmm4 = MEMF(0x649D68); /* movss */

loc_001B1E48: ;
    xmm1 = MEMF(esi + 0x110); /* movss */
    xmm7 = MEMF(0x648D3C); /* movss */
    xmm5 = MEMF(esp + 0x24); /* movss */
    edx = MEM32(esi + 0x104);
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x110); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, eax);
    xmm1 = xmm6; /* movaps */
    edi = esi + 0x78;
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001B1EAC: ;
    ecx = MEM32(esi + 0x104);
    xmm0 = MEMF(esi + 0x110); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x118); /* subss */
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm4 = xmm4 - xmm1; /* subss */
    PUSH32(esp, edx);
    eax = esp + 0x38;
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm6 = xmm6 * xmm4; /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001B1EF7: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    edx = edi;
    PUSH32(esp, 0); sub_00043D70(); /* call 0x00043D70 */

loc_001B1F07: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    edi = esi + 0x6C;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    esp = esp + 4;
    MEM32(edi + 8) = eax;

loc_001B1F1D: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001B1F43; /* ja: above (unsigned >) */

loc_001B1F36: ;
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001B1F49; /* jbe: below or equal (unsigned <=) */

loc_001B1F43: ;
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_001B1F49: ;
    edx = MEM32(esp + 0x1C);
    xmm0 = MEMF(esi + 0x44); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    PUSH32(esp, edx);
    eax = esi;
    MEMF(esi + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001AEE80(); /* call 0x001AEE80 */

loc_001B1F65: ;
    xmm1 = MEMF(esi + 0x64); /* movss */
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x5C); /* addss */
    MEMF(esi + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x68); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x60); /* addss */
    esp = esp + 4;
    MEMF(esi + 0x60) = xmm1; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B1F9F: ;
    xmm2 = MEMF(esi + 0x34); /* movss */
    /* comiss xmm2, MEMF(esi + 0x4C) - sets EFLAGS */
    if ((xmm2 <= MEMF(esi + 0x4C))) goto loc_001B1FC9; /* jbe: below or equal (unsigned <=) */

loc_001B1FAA: ;
    xmm3 = MEMF(esi + 0x38); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x4C); /* subss */
    xmm3 = xmm3 - MEMF(esi + 0x4C); /* subss */
    xmm2 = xmm2 / xmm3; /* divss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    goto loc_001B1FDC;

loc_001B1FC9: ;
    xmm1 = MEMF(esi + 0x58); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x54); /* addss */
    MEMF(esi + 0x54) = xmm1; /* movss */

loc_001B1FDC: ;
    xmm1 = MEMF(esi + 0x110); /* movss */
    xmm2 = MEMF(0x648CE4); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_001B209F; /* jbe: below or equal (unsigned <=) */

loc_001B1FF5: ;
    xmm1 = MEMF(esi + 0x118); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x648E5C); /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(esi + 0x118) = xmm1; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x110); /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEMF(esi + 0x110) = xmm1; /* movss */
    if ((xmm2 < xmm1)) goto loc_001B1E14; /* jb: below (unsigned <) */

loc_001B2031: ;
    eax = (int32_t)MEMF(esi + 0x80); /* cvttss2si */
    ecx = (int32_t)MEMF(esi + 0x7C); /* cvttss2si */
    edx = (int32_t)MEMF(esi + 0x78); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    MEM32(0x780AB0) = 0x5F5140;
    MEM32(0x6C0210) = 0x548;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_00066BA0(); /* call 0x00066BA0 */

loc_001B2072: ;
    esp = esp + 0xC;
    eax = eax + 5;
    MEM32(esi + 0x114) = eax;
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    goto loc_001B1E14;

loc_001B209F: ;
    xmm2 = MEMF(esi + 0x70); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x59D944); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    ecx = esi + 0x6C;
    eax = esp + 0x30;
    MEMF(esi + 0x70) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00043D10(); /* call 0x00043D10 */

loc_001B20C4: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x7C); /* addss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x80); /* addss */
    MEMF(esi + 0x80) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esi + 0x114); /* cvtsi2ss */
    ebx = 0; /* xor self */
    /* comiss xmm0, MEMF(esi + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x7C))) goto loc_001B2184; /* jbe: below or equal (unsigned <=) */

loc_001B211E: ;
    ecx = (int32_t)MEMF(esi + 0x80); /* cvttss2si */
    edx = (int32_t)MEMF(esi + 0x7C); /* cvttss2si */
    eax = (int32_t)MEMF(esi + 0x78); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    MEM32(0x780AB0) = 0x5F5140;
    MEM32(0x6C0210) = 0x557;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_00066BA0(); /* call 0x00066BA0 */

loc_001B215F: ;
    esp = esp + 0xC;
    MEM32(esi + 0x114) = eax;
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;

loc_001B2184: ;
    xmm0 = (float)(int32_t)MEM32(esi + 0x114); /* cvtsi2ss */
    /* comiss xmm0, MEMF(esi + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x7C))) goto loc_001B1F1D; /* jbe: below or equal (unsigned <=) */

loc_001B2196: ;
    edx = MEM32(esi + 0x7C);
    ecx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x80);
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B21C7: ;
    xmm1 = MEMF(0x648D3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001B2244; /* jbe: below or equal (unsigned <=) */

loc_001B21D4: ;
    edx = MEM32(esi + 0x104);
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_001B21E3: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(0x648F08); /* subss */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    esi = eax;
    edi = esp + 0x1C;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_001B2204: ;
    xmm0 = MEMF(esp + 0xE0); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(0x648D40) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D40))) goto loc_001B2244; /* jbe: below or equal (unsigned <=) */

loc_001B2219: ;
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x59763C), _icall_esp); /* indirect call */
    }

loc_001B223A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0010C4D0(); /* call 0x0010C4D0 */

loc_001B2241: ;
    esp = esp + 0xC;

loc_001B2244: ;
    PUSH32(esp, 0x58DB54);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6A);
    PUSH32(esp, 0xAB);
    PUSH32(esp, 0xAB);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41900000);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_001B228B: ;
    esp = esp + 0x48;

loc_001B228E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
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
 * sub_001B22A0
 * Original: 0x001B22A0 - 0x001B22E0 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B22A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B22A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001B1450(); /* call 0x001B1450 */

loc_001B22AB: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B22D1; /* je: equal / zero */

loc_001B22B2: ;
    SET_LO8(eax, MEM8(esi + 0xF4));
    ecx = MEM32(esi + 0xF0);
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0xF4) = LO8(eax);
    if (CMP_B(LO8(eax), MEM8(ecx + 4))) goto loc_001B22DC; /* jb: below (unsigned <) */

loc_001B22CB: ;
    if (TEST_Z(MEM8(esi + 0x30), 0x40)) goto loc_001B22D5; /* je: equal / zero */

loc_001B22D1: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B22D5: ;
    MEM8(esi + 0xF4) = 0;

loc_001B22DC: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B2640
 * Original: 0x001B2640 - 0x001B266C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2640(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;

loc_001B2640: ;
    esp = esp - 0x38;
    xmm2 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm0, MEMF(esi + 0x38) - sets EFLAGS */
    MEMF(esp + 8) = xmm2; /* movss */
    if ((xmm0 <= MEMF(esi + 0x38))) { sub_001B266C(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B2665: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_001B2AA0
 * Original: 0x001B2AA0 - 0x001B2BA5 (261 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001B2AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x218;
    edx = MEM32(0x84A5F8);
    eax = MEM32(edx + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_001B2B5D; /* je: equal / zero */

loc_001B2ABF: ;
    eax = esp + 0xC0;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_001B2ACB: ;
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x6493C0); /* subss */
    esi = eax;
    ecx = 0x2C;
    edi = esp + 0x170;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = eax;
    ecx = 0x2C;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x170;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = ebx + 0x78;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0029FC30(); /* call 0x0029FC30 */

loc_001B2B0C: ;
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x6493C0); /* subss */
    esp = esp + 0xC;
    ecx = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = ecx;
    ecx = 0x2000;
    edi = esp + 0xC0;
    eax = esi;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029F590(); /* call 0x0029F590 */

loc_001B2B45: ;
    ecx = MEM32(esp + 0x1C);
    xmm1 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x10;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ZX8(LO8(eax));
    if (TEST_NZ(ecx, ecx)) goto loc_001B2B7C; /* jne: not equal / not zero */

loc_001B2B59: ;
    if (TEST_NZ(eax, eax)) { sub_001B2BA5(); return; } /* jne: not equal / not zero */

loc_001B2B5D: ;
    xmm0 = MEMF(0x6499F4); /* movss */
    MEMF(ebx + 0x108) = xmm0; /* movss */
    MEM8(ebx + 0x10D) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B2B7C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(esp + 0x170); /* movss */
    if (TEST_Z(eax, eax)) goto loc_001B2B8E; /* je: equal / zero */

loc_001B2B89: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) { sub_001B2BA5(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B2B8E: ;
    MEMF(ebx + 0x108) = xmm0; /* movss */
    MEM8(ebx + 0x10D) = 1;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001B2BC0
 * Original: 0x001B2BC0 - 0x001B2BDA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2BC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B2BC0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001B1450(); /* call 0x001B1450 */

loc_001B2BCE: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001B2BDA(); return; } /* jne: not equal / not zero */

loc_001B2BD5: ;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_001B2EE0
 * Original: 0x001B2EE0 - 0x001B2F9C (188 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B2EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B2EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_001B2F9A; /* je: equal / zero */

loc_001B2EED: ;
    eax = MEM32(esp + 0x10);
    if (CMP_A(eax, 0x7A)) goto loc_001B2F9A; /* ja: above (unsigned >) */

loc_001B2EFA: ;
    eax = ZX8(MEM8(eax + 0x1B2FB4));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1B2F9C)); return; /* indirect tail jmp */

    ecx = MEM32(esi + 0x2C);
    eax = 1;
    if (CMP_NE(ecx, eax)) goto loc_001B2F9A; /* jne: not equal / not zero */

loc_001B2F18: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x10C);
    if (CMP_NE(ecx, MEM32(edx))) goto loc_001B2F9A; /* jne: not equal / not zero */

loc_001B2F26: ;
    MEM8(esi + 0x104) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    MEM8(esi + 0x104) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    eax = MEM32(esi + 0x104);
    if (CMP_NE(eax, MEM32(esp + 0xC))) goto loc_001B2F9A; /* jne: not equal / not zero */

loc_001B2F54: ;
    edx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DAE10(); return; /* tail jmp 0x000DAE10 */

    if (CMP_NE(MEM32(esi + 0x2C), 4)) goto loc_001B2F9A; /* jne: not equal / not zero */

loc_001B2F62: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    if (CMP_NE(edx, MEM32(esi + 0x104))) goto loc_001B2F9A; /* jne: not equal / not zero */

loc_001B2F70: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001B2F75: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x104))) goto loc_001B2F9A; /* jne: not equal / not zero */

loc_001B2F8B: ;
    MEM32(eax + 4) = esi;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001B2F93: ;
    MEM8(0x8472BC) = 0;

loc_001B2F9A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B34F0
 * Original: 0x001B34F0 - 0x001B367F (399 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B34F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001B34F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001B1450(); /* call 0x001B1450 */

loc_001B3508: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B366D; /* je: equal / zero */

loc_001B3513: ;
    edx = MEM32(0x84A5F8);
    ecx = MEM32(edx + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_001B3678; /* je: equal / zero */

loc_001B3524: ;
    xmm0 = MEMF(ebx + 0x104); /* movss */
    /* comiss xmm0, MEMF(ebx + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x7C))) goto loc_001B35AB; /* jbe: below or equal (unsigned <=) */

loc_001B3532: ;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_001B353B: ;
    xmm0 = MEMF(ebx + 0x104); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    eax = ebx + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    ecx = 0x2000;
    edi = esp + 0xD0;
    eax = esp + 0x24;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029F590(); /* call 0x0029F590 */

loc_001B3594: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    edx = MEM32(0x84A5F8);
    esp = esp + 0x10;
    MEMF(ebx + 0x104) = xmm0; /* movss */

loc_001B35AB: ;
    xmm0 = MEMF(ebx + 0x104); /* movss */
    /* comiss xmm0, MEMF(ebx + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx + 0x7C))) goto loc_001B3676; /* jbe: below or equal (unsigned <=) */

loc_001B35BD: ;
    eax = ebx + 0x78;
    ecx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x20;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_001B35F1: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(0x648F08); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_001B3614: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    eax = MEM32(ebx + 0x108);
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0x11 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (CMP_L(eax, 0x11)) goto loc_001B3638; /* jl: less (signed <) */

loc_001B3636: ;
    eax = 0; /* xor self */

loc_001B3638: ;
    ecx = MEM32(ebx + 0x10C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x597610), _icall_esp); /* indirect call */
    }

loc_001B364A: ;
    edi = esp + 0x20;
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_0010C4D0(); /* call 0x0010C4D0 */

loc_001B3657: ;
    ecx = MEM32(0x7FA1F8);
    esp = esp + 0xC;
    if (CMP_NE(ecx, 0x35)) goto loc_001B366D; /* jne: not equal / not zero */

loc_001B3665: ;
    if (TEST_Z(eax, eax)) goto loc_001B366D; /* je: equal / zero */

loc_001B3669: ;
    MEM8(eax + 0x4C) = 0x32;

loc_001B366D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001B3676: ;
    SET_LO8(eax, 1);

loc_001B3678: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001B3680
 * Original: 0x001B3680 - 0x001B384F (463 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3680(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001B3680: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esi + 0x104);
    if (TEST_Z(eax, eax)) goto loc_001B36AC; /* je: equal / zero */

loc_001B3692: ;
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(0x648EBC); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    MEMF(esi + 0x58) = xmm0; /* movss */

loc_001B36AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001B1450(); /* call 0x001B1450 */

loc_001B36B2: ;
    ecx = MEM32(esi + 0x104);
    esp = esp + 4;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esp + 0x2C) = LO8(eax);
    if (TEST_Z(ecx, ecx)) goto loc_001B384A; /* je: equal / zero */

loc_001B36C7: ;
    eax = MEM32(0x7FA200);
    edx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    eax = eax + edx + 0x330;
    edx = MEM32(ecx + 0x78);
    ecx = ecx + 0x78;
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp + 8) = edx;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 0xC) = ecx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    eax = MEM32(esp + 8);
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    eax = esp + 0x10;
    PUSH32(esp, ebx);
    ebx = eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001B3761: ;
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(0x648EA4); /* movss */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = edx;
    xmm1 = MEMF(esp + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    edx = MEM32(esp + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x104);
    MEM32(esp + 0x10) = ecx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = eax + 0x78;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax);
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 8) = edx;
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    edx = MEM32(eax + 8);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEM32(esp + 0xC) = ecx;
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    edx = MEM32(esp + 0xC);
    eax = esi + 0x78;
    MEM32(eax) = ecx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    SET_LO8(eax, MEM8(esp + 0x30));
    MEMF(esi + 0x7C) = xmm0; /* movss */
    POP32(esp, ebx);

loc_001B384A: ;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_001B3850
 * Original: 0x001B3850 - 0x001B3AEB (667 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B3850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_001B3850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x214;
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 0x104));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001B3AEB(); return; } /* je: equal / zero */

loc_001B388C: ;
    xmm1 = MEMF(esi + 0x130); /* movss */
    xmm3 = MEMF(esi + 0x134); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x54); /* addss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 > xmm1)) goto loc_001B38AD; /* ja: above (unsigned >) */

loc_001B38AA: ;
    xmm1 = xmm3; /* movaps */

loc_001B38AD: ;
    MEMF(esi + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x138); /* movss */
    xmm3 = MEMF(esi + 0x13C); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0xF8); /* addss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 > xmm1)) goto loc_001B38D6; /* ja: above (unsigned >) */

loc_001B38D3: ;
    xmm1 = xmm3; /* movaps */

loc_001B38D6: ;
    MEMF(esi + 0xF8) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001B38EF; /* jp: parity */

loc_001B38EA: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001B38F3;

loc_001B38EF: ;
    xmm0 = xmm0 / xmm2; /* divss */

loc_001B38F3: ;
    eax = esi + 0x114;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x108); /* subss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = edx;
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x10C); /* subss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x110); /* subss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = edx;
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    edx = MEM32(esp + 0x1C);
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0xC) = ecx;
    xmm2 = MEMF(esp + 0xC); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm3 = MEMF(esp + 0x14); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    MEM32(esp + 0x10) = edx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(0x5A0060); /* subss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    if (1 /* jp after test - parity */) goto loc_001B39F0; /* jp: parity */

loc_001B39DE: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001B39F0; /* jp: parity */

loc_001B39E7: ;
    /* ucomiss xmm3, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001B39FB; /* jnp: not parity */

loc_001B39F0: ;
    eax = esp + 0xC;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001B39FB: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(esi + 0xF8); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x54); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = eax;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x1C) = ecx;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x20) = edx;
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    edi = MEM32(esp + 0x20);
    MEM32(esp + 0x34) = edi;
    edi = MEM32(esi + 0x108);
    MEM32(esp + 0xC) = edi;
    edi = MEM32(esi + 0x10C);
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    MEM32(esp + 0x10) = edi;
    edi = MEM32(esi + 0x110);
    MEM32(esp + 0x14) = edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    ebx = MEM32(esp + 0xC);
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    edi = esi + 0x78;
    MEM32(edi) = ebx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    ebx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEM32(edi + 4) = ebx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    ebx = MEM32(esp + 0x14);
    MEM32(edi + 8) = ebx;
    edi = esi + 0x6C;
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    g_seh_ebp = ebp; sub_001B425F(); return; /* tail jmp 0x001B425F */

}

/**
 * sub_001B4290
 * Original: 0x001B4290 - 0x001B4984 (1780 bytes, 448 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4290: ;
    esp = esp - 0x320;
    ecx = MEM32(esp + 0x324);
    edx = MEM32(ecx + 0x570);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    if (CMP_EQ(edx, esi)) goto loc_001B497C; /* je: equal / zero */

loc_001B42B2: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0xB0) = eax;
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xB8) = eax;
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0xC0) = eax;
    MEM32(esp + 0xC4) = eax;
    MEM32(esp + 0xC8) = eax;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0xD0) = eax;
    MEM32(esp + 0xD4) = eax;
    MEM32(esp + 0xD8) = eax;
    MEM32(esp + 0xDC) = eax;
    MEM32(esp + 0xE0) = eax;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xE8) = eax;
    MEM32(esp + 0xEC) = eax;
    MEM32(esp + 0xF0) = eax;
    MEM32(esp + 0xF4) = eax;
    MEM32(esp + 0xF8) = eax;
    MEM32(esp + 0xFC) = eax;
    MEM32(esp + 0x100) = eax;
    MEM32(esp + 0x104) = eax;
    MEM32(esp + 0x108) = eax;
    MEM32(esp + 0x10C) = eax;
    MEM32(esp + 0x110) = eax;
    MEM32(esp + 0x114) = eax;
    MEM32(esp + 0x118) = eax;
    MEM32(esp + 0x11C) = eax;
    MEM32(esp + 0x120) = eax;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0x1A4) = eax;
    MEM32(esp + 0x1A8) = eax;
    MEM32(esp + 0x1AC) = eax;
    MEM32(esp + 0x1B0) = eax;
    MEM32(esp + 0x1B4) = eax;
    MEM32(esp + 0x1B8) = eax;
    MEM32(esp + 0x1BC) = eax;
    MEM32(esp + 0x1C0) = eax;
    MEM32(esp + 0x1C4) = eax;
    MEM32(esp + 0x1C8) = eax;
    MEM32(esp + 0x1CC) = eax;
    MEM32(esp + 0x1D0) = eax;
    MEM32(esp + 0x1D4) = eax;
    MEM32(esp + 0x1D8) = eax;
    MEM32(esp + 0x1DC) = eax;
    MEM32(esp + 0x1E0) = eax;
    MEM32(esp + 0x1E4) = eax;
    MEM32(esp + 0x1E8) = eax;
    MEM32(esp + 0x1EC) = eax;
    MEM32(esp + 0x1F0) = eax;
    MEM32(esp + 0x1F4) = eax;
    MEM32(esp + 0x1F8) = eax;
    MEM32(esp + 0x1FC) = eax;
    MEM32(esp + 0x200) = eax;
    MEM32(esp + 0x204) = eax;
    MEM32(esp + 0x208) = eax;
    MEM32(esp + 0x20C) = eax;
    MEM32(esp + 0x210) = eax;
    MEM32(esp + 0x214) = eax;
    MEM32(esp + 0x218) = eax;
    MEM32(esp + 0x21C) = eax;
    MEM32(esp + 0x220) = eax;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0x124) = eax;
    MEM32(esp + 0x128) = eax;
    MEM32(esp + 0x12C) = eax;
    MEM32(esp + 0x130) = eax;
    MEM32(esp + 0x134) = eax;
    MEM32(esp + 0x138) = eax;
    MEM32(esp + 0x13C) = eax;
    MEM32(esp + 0x140) = eax;
    MEM32(esp + 0x144) = eax;
    MEM32(esp + 0x148) = eax;
    MEM32(esp + 0x14C) = eax;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x150) = eax;
    MEM32(esp + 0x154) = eax;
    MEM32(esp + 0x158) = eax;
    MEM32(esp + 0x15C) = eax;
    MEM32(esp + 0x160) = eax;
    MEM32(esp + 0x164) = eax;
    MEM32(esp + 0x168) = eax;
    MEM32(esp + 0x16C) = eax;
    MEM32(esp + 0x170) = eax;
    MEM32(esp + 0x174) = eax;
    MEM32(esp + 0x178) = eax;
    MEM32(esp + 0x17C) = eax;
    MEM32(esp + 0x180) = eax;
    MEM32(esp + 0x184) = eax;
    MEM32(esp + 0x188) = eax;
    MEM32(esp + 0x18C) = eax;
    MEM32(esp + 0x190) = eax;
    MEM32(esp + 0x194) = eax;
    MEM32(esp + 0x198) = eax;
    MEM32(esp + 0x19C) = eax;
    MEM32(esp + 0x1A0) = eax;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = eax;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x84) = eax;
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(ecx + 0x4B0);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(eax + 0x14);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(eax, esi)) goto loc_001B464A; /* jne: not equal / not zero */

loc_001B461C: ;
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x1AC;
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp + 0x13C;
    esi = edx;
    PUSH32(esp, 0); sub_003947E0(); /* call 0x003947E0 */

loc_001B4642: ;
    POP32(esp, esi);
    esp = esp + 0x320;
    esp += 4; return; /* ret */

loc_001B464A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_LE(edi, esi)) goto loc_001B47CE; /* jle: less or equal (signed <=) */

loc_001B4657: ;
    ebp = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    /* nop */

loc_001B4660: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + ebx + 4);
    PUSH32(esp, 0x5F51E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_001B4676: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001B4682; /* je: equal / zero */

loc_001B467D: ;
    MEM32(esp + ebp * 4 + 0x30) = esi;
    ebp++;

loc_001B4682: ;
    if (CMP_EQ(ebp, 0x20)) goto loc_001B468F; /* je: equal / zero */

loc_001B4687: ;
    esi++;
    ebx = ebx + 0x14;
    if (CMP_L(esi, edi)) goto loc_001B4660; /* jl: less (signed <) */

loc_001B468F: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (TEST_Z(ebp, ebp)) goto loc_001B47CE; /* je: equal / zero */

loc_001B469B: ;
    eax = MEM32(esp + 0x334);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x14);
    eax = ebp;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_001B47CE; /* jle: less or equal (signed <=) */

loc_001B46BF: ;
    edx = ebp;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x18) = edx;
    /* nop */

loc_001B46D0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + eax + 0x30);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_001B47B4; /* je: equal / zero */

loc_001B46E1: ;
    eax = 0x5F51E0;
    esi = eax + 1;
    /* nop */

loc_001B46F0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001B46F0; /* jne: not equal / not zero */

loc_001B46F7: ;
    eax = eax - esi;
    edx = eax;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax + 4);
    ecx = ecx + ecx * 4;
    eax = MEM32(eax + ecx * 4 + 4);
    eax = eax + edx;
    ecx = 0; /* xor self */
    /* nop */

loc_001B4710: ;
    SET_LO8(edx, MEM8(ecx + 0x5F51D0));
    MEM8(esp + ecx + 0x230) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001B4710; /* jne: not equal / not zero */

loc_001B4722: ;
    esi = eax;

loc_001B4724: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B4724; /* jne: not equal / not zero */

loc_001B472B: ;
    edi = esp + 0x230;
    eax = eax - esi;
    edi--;

loc_001B4735: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B4735; /* jne: not equal / not zero */

loc_001B473D: ;
    ecx = eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x20);
    ebp = MEM32(ecx);
    edi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_001B47B4; /* jle: less or equal (signed <=) */

loc_001B4757: ;
    ebx = 0; /* xor self */
    /* nop */

loc_001B4760: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 4);
    eax = MEM32(eax + ebx + 4);
    ecx = esp + 0x230;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_001B4779: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001B479F; /* je: equal / zero */

loc_001B4780: ;
    ecx = esp + 0x230;
    esi = ecx + 1;
    /* nop */

loc_001B4790: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001B4790; /* jne: not equal / not zero */

loc_001B4797: ;
    ecx = ecx - esi;
    if (CMP_EQ(MEM8(ecx + eax), 0)) goto loc_001B47A9; /* je: equal / zero */

loc_001B479F: ;
    edi++;
    ebx = ebx + 0x14;
    if (CMP_L(edi, ebp)) goto loc_001B4760; /* jl: less (signed <) */

loc_001B47A7: ;
    goto loc_001B47B4;

loc_001B47A9: ;
    edx = MEM32(esp + 0x10);
    MEM32(esp + edx + 0x130) = edi;

loc_001B47B4: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    ecx = ecx + 4;
    eax--;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_001B46D0; /* jne: not equal / not zero */

loc_001B47CE: ;
    eax = MEM32(esp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_001B48E4; /* jle: less or equal (signed <=) */

loc_001B47E2: ;
    eax = 0x5F51E0;
    edx = eax + 1;
    /* nop */

loc_001B47F0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B47F0; /* jne: not equal / not zero */

loc_001B47F7: ;
    eax = eax - edx;
    edx = eax;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + eax * 4 + 0x30);
    eax = MEM32(esp + 0x28);
    eax = MEM32(eax + 4);
    ecx = ecx + ecx * 4;
    eax = MEM32(eax + ecx * 4 + 4);
    eax = eax + edx;
    ecx = 0; /* xor self */
    goto loc_001B4820;

    /* nop */
    edi = edi;

loc_001B4820: ;
    SET_LO8(edx, MEM8(ecx + 0x5F51C8));
    MEM8(esp + ecx + 0x230) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001B4820; /* jne: not equal / not zero */

loc_001B4832: ;
    esi = eax;

loc_001B4834: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B4834; /* jne: not equal / not zero */

loc_001B483B: ;
    edi = esp + 0x230;
    eax = eax - esi;
    edi--;

loc_001B4845: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B4845; /* jne: not equal / not zero */

loc_001B484D: ;
    ecx = eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 0x10);
    ebp = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_001B486C; /* je: equal / zero */

loc_001B4868: ;
    eax = MEM32(eax);
    goto loc_001B486E;

loc_001B486C: ;
    eax = 0; /* xor self */

loc_001B486E: ;
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_001B48CF; /* jle: less or equal (signed <=) */

loc_001B4878: ;
    ebx = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    ebx = esp + ebx * 4 + 0x1B0;

loc_001B4885: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x10);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_001B48A3; /* je: equal / zero */

loc_001B4892: ;
    if (TEST_S(edi, edi)) goto loc_001B48A3; /* jl: less (signed <) */

loc_001B4896: ;
    if (CMP_AE(esi, MEM32(eax))) goto loc_001B48A3; /* jae: above or equal (unsigned >=) */

loc_001B489A: ;
    eax = MEM32(eax + 4);
    eax = eax + edi;
    if ((eax == 0)) goto loc_001B48A3; /* je: equal / zero */

loc_001B48A1: ;
    ecx = MEM32(eax);

loc_001B48A3: ;
    eax = esp + 0x230;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_001B48B1: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001B48C3; /* je: equal / zero */

loc_001B48B8: ;
    if (CMP_EQ(ebp, 1)) goto loc_001B48C3; /* je: equal / zero */

loc_001B48BD: ;
    MEM32(ebx) = esi;
    ebp++;
    ebx = ebx + 4;

loc_001B48C3: ;
    eax = MEM32(esp + 0x18);
    esi++;
    edi = edi + 0xC;
    if (CMP_L(esi, eax)) goto loc_001B4885; /* jl: less (signed <) */

loc_001B48CF: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_001B47E2; /* jl: less (signed <) */

loc_001B48E4: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001B48F3; /* je: equal / zero */

loc_001B48EF: ;
    ebp = MEM32(eax);
    goto loc_001B48F5;

loc_001B48F3: ;
    ebp = 0; /* xor self */

loc_001B48F5: ;
    ebx = MEM32(esp + 0x24);
    esi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_001B4946; /* jle: less or equal (signed <=) */

loc_001B48FF: ;
    edi = 0; /* xor self */

loc_001B4901: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x10);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_001B491F; /* je: equal / zero */

loc_001B490E: ;
    if (TEST_S(edi, edi)) goto loc_001B491F; /* jl: less (signed <) */

loc_001B4912: ;
    if (CMP_AE(esi, MEM32(eax))) goto loc_001B491F; /* jae: above or equal (unsigned >=) */

loc_001B4916: ;
    eax = MEM32(eax + 4);
    eax = eax + edi;
    if ((eax == 0)) goto loc_001B491F; /* je: equal / zero */

loc_001B491D: ;
    ecx = MEM32(eax);

loc_001B491F: ;
    PUSH32(esp, 0x5F51B8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_001B492A: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001B493E; /* je: equal / zero */

loc_001B4931: ;
    if (CMP_EQ(ebx, 0x20)) goto loc_001B493E; /* je: equal / zero */

loc_001B4936: ;
    MEM32(esp + ebx * 4 + 0xB0) = esi;
    ebx++;

loc_001B493E: ;
    esi++;
    edi = edi + 0xC;
    if (CMP_L(esi, ebp)) goto loc_001B4901; /* jl: less (signed <) */

loc_001B4946: ;
    esi = MEM32(esp + 0x2C);
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ecx = esp + 0x1B8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x340);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x148;
    PUSH32(esp, 0); sub_003947E0(); /* call 0x003947E0 */

loc_001B4979: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B497C: ;
    POP32(esp, esi);
    esp = esp + 0x320;
    esp += 4; return; /* ret */

}

/**
 * sub_001B4990
 * Original: 0x001B4990 - 0x001B4A70 (224 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x570);
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(esi, esi)) goto loc_001B4A6C; /* je: equal / zero */

loc_001B49A5: ;
    eax = ZX16(MEM16(edi + 0x3AE));
    ecx = ZX8(MEM8(esi + 0xDE8));
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x648D14); /* movss */
    if ((xmm2 <= xmm0)) goto loc_001B49D4; /* jbe: below or equal (unsigned <=) */

loc_001B49CF: ;
    xmm0 = xmm2; /* movaps */
    goto loc_001B49DC;

loc_001B49D4: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001B49DC; /* jbe: below or equal (unsigned <=) */

loc_001B49D9: ;
    xmm0 = xmm1; /* movaps */

loc_001B49DC: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xDF0);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xDF2);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_LE(eax, ecx)) goto loc_001B4A51; /* jle: less or equal (signed <=) */

loc_001B49FF: ;
    eax = eax - ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_001B4A10; /* jle: less or equal (signed <=) */

loc_001B4A05: ;
    ebp = eax;

loc_001B4A07: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003949D0(); /* call 0x003949D0 */

loc_001B4A0D: ;
    ebp--;
    if ((ebp != 0)) goto loc_001B4A07; /* jne: not equal / not zero */

loc_001B4A10: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B4A6B; /* je: equal / zero */

loc_001B4A18: ;
    if (TEST_Z(ebx, ebx)) goto loc_001B4A6B; /* je: equal / zero */

loc_001B4A1C: ;
    eax = MEM32(ebx + 0x564);
    if (TEST_Z(eax, eax)) goto loc_001B4A6B; /* je: equal / zero */

loc_001B4A26: ;
    eax = MEM32(0x847024);
    esi = MEM32(eax + 0x40);
    edi = MEM32(esi + 4);
    PUSH32(esp, 0xC88);
    PUSH32(esp, 0); sub_0002F1B0(); /* call 0x0002F1B0 */

loc_001B4A3B: ;
    if (CMP_GE(eax & eax, 0)) goto loc_001B4A6B; /* jge: greater or equal (signed >=) */

loc_001B4A3F: ;
    PUSH32(esp, esi);
    eax = ebx;
    ecx = 0xC88;
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_001B4A4C: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001B4A51: ;
    if (CMP_GE(eax & eax, 0)) goto loc_001B4A6B; /* jge: greater or equal (signed >=) */

loc_001B4A53: ;
    ecx = ecx - eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001B4A6B; /* jle: less or equal (signed <=) */

loc_001B4A59: ;
    ebp = ecx;
    goto loc_001B4A60;

    /* nop */

loc_001B4A60: ;
    PUSH32(esp, edi);
    ebx = esi;
    PUSH32(esp, 0); sub_00394B50(); /* call 0x00394B50 */

loc_001B4A68: ;
    ebp--;
    if ((ebp != 0)) goto loc_001B4A60; /* jne: not equal / not zero */

loc_001B4A6B: ;
    POP32(esp, ebp);

loc_001B4A6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B4A70
 * Original: 0x001B4A70 - 0x001B4AD2 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001B4A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x314;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x8470DC);
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) goto loc_001B4AAD; /* je: equal / zero */

loc_001B4A90: ;
    ebx = edi + 0x78;
    eax = eax + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_001B4A9D: ;
    xmm1 = MEMF(0x6493EC); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) { sub_001B4AD2(); return; } /* jae: above or equal (unsigned >=) */

loc_001B4AAD: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ebx = edi + 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = edi;
    eax = 0x8F4;
    g_seh_ebp = ebp; sub_001B4AF0(); return; /* tail jmp 0x001B4AF0 */

}

/**
 * sub_001B5200
 * Original: 0x001B5200 - 0x001B525D (93 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5200(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001B5200: ;
    esp = esp - 0x1C;
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x68;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001B5252: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001B525D(); return; } /* jne: not equal / not zero */

loc_001B5259: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001B52B0
 * Original: 0x001B52B0 - 0x001B52F6 (70 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B52B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;

loc_001B52B0: ;
    esp = esp - 0x14;
    xmm5 = MEMF(0x648D18); /* movss */
    MEMF(esp + 8) = xmm5; /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B52CC: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, 0xFF);
    xmm0 = xmm0 + xmm5; /* addss */
    PUSH32(esp, 0x2A);
    eax = 0x60;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001B52EB: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001B52F6(); return; } /* jne: not equal / not zero */

loc_001B52F2: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001B5360
 * Original: 0x001B5360 - 0x001B587C (1308 bytes, 319 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_001B5360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x4C);
    ecx = MEM32(eax + 0x3C8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, esi)) goto loc_001B5875; /* je: equal / zero */

loc_001B5385: ;
    ecx = eax + 0x84;
    eax = eax + 0x78;
    edx = esp + 0x28;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648D10); /* movss */
    eax = esp + 0x28;
    ecx = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm4 = MEMF(0x7FA21C); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm4, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001B5422; /* jp: parity */

loc_001B541A: ;
    MEMF(esp + 0x1C) = xmm3; /* movss */
    goto loc_001B5467;

loc_001B5422: ;
    edx = esp + 0x28;
    MEM32(esp + 0x1C) = edx;
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
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 / xmm4; /* divss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_001B5467: ;
    xmm0 = MEMF(ebx + 0x5C); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x60); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x60) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_001B5875; /* jbe: below or equal (unsigned <=) */

loc_001B5487: ;
    xmm0 = MEMF(0x649E4C); /* movss */
    eax = 4;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(ebx + 0x64);
    ecx = 2;
    MEM32(esp + 0x7C) = eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x68) = esi;
    MEM32(esp + 0x70) = esi;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = 0x303;
    MEMF(esp + 0x54) = xmm3; /* movss */
    MEMF(esp + 0x58) = xmm3; /* movss */
    MEM16(esp + 0x80) = 0xC8;
    MEM16(esp + 0x82) = 1;
    MEM8(esp + 0xC4) = 0x2A;
    MEM8(esp + 0xC5) = LO8(eax);
    MEM8(esp + 0xC6) = LO8(eax);
    MEM8(esp + 0xC7) = 0;
    MEM16(esp + 0x84) = 0x64;
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B5518: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x78);
    MEM8(esp + 0x5C) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B552C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x78);
    MEM8(esp + 0x5D) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B5540: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0xBC) = 0x80D017;
    MEM8(esp + 0x38) = 0;
    MEM8(esp + 0x39) = 0;
    SET_LO8(edx, LO8(edx) + 0x78);
    MEM8(esp + 0x5E) = LO8(edx);
    edx = MEM32(ebx + 0x4C);
    eax = MEM32(edx + 0x4B0);
    ecx = MEM32(eax + 0x24);
    esi = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_001B558C: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_001B5598: ;
    edx = MEM32(eax + 0x34);
    ecx = MEM32(ebx + 0x4C);
    eax = esp + 0x34;
    MEM32(esp + 0x44) = edx;
    edx = MEM32(ecx + 0x3C8);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x50);
    PUSH32(esp, edx);
    esi = esp + 0x38;
    edi = esp + 0x2C;
    PUSH32(esp, 0); sub_003ECF40(); /* call 0x003ECF40 */

loc_001B55C2: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B55C7: ;
    xmm5 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(0x648E14); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B55F0: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5609: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x2C);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xF4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_001B563A: ;
    esp = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5A02F0);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001B564D: ;
    xmm0 = MEMF(0x648D18); /* movss */
    edx = esp + 0x44;
    eax = edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x28;
    edx = esp + 0x44;
    eax = esp + 0xAC;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ebx + 0x4C);
    eax = MEM32(edx + 0x3C8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x50);
    esi = esp + 0x9C;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_001B56F2: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    esp = esp + 8;
    MEMF(esp + 0xA0) = xmm5; /* movss */
    MEMF(esp + 0xA4) = xmm5; /* movss */
    MEMF(esp + 0xA8) = xmm5; /* movss */
    esi = (int32_t)xmm0; /* cvttss2si */
    goto loc_001B5730;

loc_001B5727: ;
    xmm5 = 0.0f; /* xorps self = zero */
    /* nop */

loc_001B5730: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B5735: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_001B5741; /* jns: not sign (positive) */

loc_001B573C: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_001B5741: ;
    SET_LO8(eax, LO8(eax) + 2);
    MEM8(esp + 0x3A) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B574C: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_001B5758; /* jns: not sign (positive) */

loc_001B5753: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_001B5758: ;
    SET_LO8(eax, LO8(eax) + 2);
    MEM8(esp + 0x3B) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5763: ;
    xmm6 = MEMF(0x648CDC); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B577A: ;
    edx = MEM32(esp + 0xBC);
    edx = edx & 0xFFFFFF3Fu;
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm5; /* movss */
    MEM32(esp + 0xBC) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B57A6: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B57B2: ;
    edx = MEM32(esp + 0xBC);
    eax = eax & 1;
    edi = edi | eax;
    edi = edi << 6;
    edx = edx | edi;
    MEM32(esp + 0xBC) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B57CF: ;
    MEM8(esp + 0x5F) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B57D9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x4C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    edx = edx - esi;
    edx = edx + 0x32;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_S(LO16(edx), LO16(edx))) ? 1 : 0); /* setl */
    MEM16(esp + 0x50) = LO16(edx);
    ecx = MEM32(esp + 0x50);
    eax--;
    eax = eax & ecx;
    MEM16(esp + 0x50) = LO16(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5804: ;
    xmm0 = xmm0 * MEMF(ebx + 0x58); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x54); /* addss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 4));
    edx = esp + 0x50;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001B5836: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_001B5856; /* je: equal / zero */

loc_001B583D: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    eax = eax + 0x170;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_001B5856: ;
    xmm0 = MEMF(ebx + 0x60); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x60) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_001B5727; /* ja: above (unsigned >) */

loc_001B5875: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001B5880
 * Original: 0x001B5880 - 0x001B5D9F (1311 bytes, 269 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001B5880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x144;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x4C);
    ecx = MEM32(eax + 0x3C8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_001B5D98; /* je: equal / zero */

loc_001B58A3: ;
    xmm0 = MEMF(ebx + 0x5C); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebx + 0x5C) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001B5D98; /* jbe: below or equal (unsigned <=) */

loc_001B58C1: ;
    eax = MEM32(eax + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edi = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_001B58E6: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_001B58F2: ;
    edx = MEM32(eax + 0x34);
    eax = MEM32(ebx + 0x4C);
    ecx = MEM32(eax + 0x3C8);
    eax = MEM32(ebx + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    esi = esp + 0xE0;
    ecx = edi;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_001B5911: ;
    eax = MEM32(ebx + 0x4C);
    ecx = MEM32(eax + 0x3C8);
    eax = MEM32(ebx + 0x50);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    esi = esp + 0x48;
    edi = esp + 0x34;
    PUSH32(esp, 0); sub_003ECF40(); /* call 0x003ECF40 */

loc_001B5934: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x13C;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_001B5951: ;
    esp = esp + 0x2C;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5A02F0);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001B5969: ;
    xmm0 = MEMF(0x6493C0); /* movss */
    xmm2 = MEMF(esp + 0xC0); /* movss */
    xmm1 = MEMF(esp + 0xBC); /* movss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(0x648EFC); /* movss */
    MEMF(esp + 0xD8) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0xF0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x100) = xmm0; /* movss */
    MEMF(esp + 0x104) = xmm0; /* movss */
    MEMF(esp + 0x108) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC4); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x649228); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(0x648EC8); /* movss */
    MEM32(esp + 0xDC) = 0xA;
    MEM32(esp + 0xE8) = 0x105;
    MEM8(esp + 0xFC) = 0;
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A778); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x6491EC); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x30;
    esi = esp + 0xCC;
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_001B5A91: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xCC); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xD0); /* movss */
    eax = 1;
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xD4); /* movss */
    esp = esp + 4;
    MEM8(esp + 0x50) = 0;
    MEM8(esp + 0x56) = 7;
    MEM8(esp + 0x88) = 3;
    MEM16(esp + 0x98) = LO16(eax);
    MEM16(esp + 0x9A) = LO16(eax);
    MEM8(esp + 0x89) = 4;
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEM8(esp + 0xB6) = 0xFF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5B4D: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001B5B62: ;
    SET_LO8(ecx, 0x19);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esp + 0xB5) = LO8(ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5B72: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001B5B87: ;
    SET_LO8(edx, 0x19);
    SET_LO8(edx, LO8(edx) - LO8(eax));
    MEM8(esp + 0xB4) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5B97: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001B5BAC: ;
    xmm0 = MEMF(0x648CF4); /* movss */
    esi = MEM32(ebx + 0x4C);
    SET_LO8(ecx, 0x19);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEM8(esp + 0xB7) = LO8(ecx);
    MEM8(esp + 0x2C) = 0;
    edi = 0; /* xor self */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B5BEB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx++;
    if (CMP_LE(edx & edx, 0)) goto loc_001B5D84; /* jle: less or equal (signed <=) */

loc_001B5BFC: ;
    MEM32(esp + 0x18) = edx;

loc_001B5C00: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5C05: ;
    xmm5 = MEMF(0x648CE0); /* movss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5C2B: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5C41: ;
    eax = esp + 0x1C;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    ebx = eax;
    MEMF(esp + 0x24) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001B5C5A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5C5F: ;
    xmm1 = MEMF(0x64908C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    PUSH32(esp, 2);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x60); /* addss */
    edx = esp + 0x68;
    MEMF(esp + 0x84) = xmm1; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x84;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x2C); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x68); /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648F54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000A95A0(); /* call 0x000A95A0 */

loc_001B5CDE: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    SET_LO8(ebx, 0xFF);
    MEM8(esp + 0xC2) = LO8(ebx);
    MEM8(esp + 0xC1) = LO8(ebx);
    MEM8(esp + 0xC0) = LO8(ebx);
    MEM8(esp + 0xC3) = LO8(ebx);
    MEMF(esp + 0xA0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B5D18: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1E;
    MEM16(esp + 0x64) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B5D2D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ecx, LO8(ebx));
    edx = edx + 2;
    MEM32(esp + 0x9C) = edx;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    edx = 0x14;
    PUSH32(esp, 0); sub_000A76D0(); /* call 0x000A76D0 */

loc_001B5D50: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_001B5D77; /* je: equal / zero */

loc_001B5D57: ;
    eax = MEM32(eax + 0x94);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x38);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;

loc_001B5D77: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    if ((MEM32(esp + 0x18) != 0)) goto loc_001B5C00; /* jne: not equal / not zero */

loc_001B5D81: ;
    ebx = MEM32(ebp + 8);

loc_001B5D84: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B5D89: ;
    xmm0 = xmm0 * MEMF(ebx + 0x58); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x54); /* addss */
    MEMF(ebx + 0x5C) = xmm0; /* movss */

loc_001B5D98: ;
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
 * sub_001B5DA0
 * Original: 0x001B5DA0 - 0x001B5DE9 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B5DA0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_001B5DB2; /* je: equal / zero */

loc_001B5DAD: ;
    if (CMP_NE(eax, 3)) goto loc_001B5DE7; /* jne: not equal / not zero */

loc_001B5DB2: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(esi + 0x4C))) goto loc_001B5DE7; /* jne: not equal / not zero */

loc_001B5DBD: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B5DE7; /* jne: not equal / not zero */

loc_001B5DC6: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001B5DCD: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001B5DE7; /* jl: less (signed <) */

loc_001B5DD4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001B5DE9(); return; } /* je: equal / zero */

loc_001B5DE1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001B5DE4: ;
    esp = esp + 4;

loc_001B5DE7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B5E30
 * Original: 0x001B5E30 - 0x001B614B (795 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5E30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_001B5E30: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x8C);
    eax = MEM32(esi + 0x290);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_001B5EB1; /* jne: not equal / not zero */

loc_001B5E4B: ;
    if (CMP_NE(MEM8(esi + 0x294), LO8(ebx))) goto loc_001B5EB1; /* jne: not equal / not zero */

loc_001B5E53: ;
    ecx = MEM32(0x847024);
    xmm0 = MEMF(esp + 0x90); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0xBF800000u);
    MEM8(esi + 0x294) = 1;
    edx = MEM32(ecx + 0x40);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xAC); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB4); /* movss */
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xDA1;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001B5EB1: ;
    eax = MEM32(esp + 0xA0);
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x70); /* addss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x74); /* addss */
    /* comiss xmm0, MEMF(0x648EB0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648EB0))) goto loc_001B602C; /* jbe: below or equal (unsigned <=) */

loc_001B5EDB: ;
    PUSH32(esp, edi);
    edi = esi + 0x78;
    MEM32(esp + 0xC) = edi;
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
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x10))) goto loc_001B602B; /* jbe: below or equal (unsigned <=) */

loc_001B5F23: ;
    eax = MEM32(esi + 0x290);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(esp + 0xC) = 1;
    if (CMP_EQ(eax, ebx)) goto loc_001B5F42; /* je: equal / zero */

loc_001B5F32: ;
    MEM32(eax + 0xA8) = ebx;
    MEM32(esi + 0x290) = ebx;
    MEM8(esp + 0xC) = LO8(ebx);

loc_001B5F42: ;
    eax = MEM32(esp + 0xC);
    xmm1 = MEMF(0x648D10); /* movss */
    xmm0 = (float)(int32_t)MEM32(esi + 0x98); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649A00); /* mulss */
    PUSH32(esp, 0xD9E);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    edx = MEM32(esp + 0x2C);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0xAC); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648F94); /* mulss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x420C0000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x420C0000);
    PUSH32(esp, 0x3A449BA6);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x42200000);
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xDC); /* movss */
    PUSH32(esp, 0x41A00000);
    eax = esp + 0x60;
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xE4); /* movss */
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, eax);
    MEMF(esp + 0x70) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00100170(); /* call 0x00100170 */

loc_001B5FFF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    esp = esp + 0x50;
    eax = esi;
    MEMF(esi + 0x90) = xmm0; /* movss */
    MEM32(esi + 0xAC) = ebx;
    PUSH32(esp, 0); sub_0013CF40(); /* call 0x0013CF40 */

loc_001B6028: ;
    xmm3 = xmm0; /* movaps */

loc_001B602B: ;
    POP32(esp, edi);

loc_001B602C: ;
    xmm0 = MEMF(esp + 0x90); /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EFC); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF4); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648FB0); /* movss */
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    esi = esp + 0x48;
    MEM32(esp + 0x5C) = 0xA;
    MEM32(esp + 0x68) = 0x105;
    MEM8(esp + 0x7C) = LO8(ebx);
    MEMF(esp + 0x80) = xmm3; /* movss */
    MEMF(esp + 0x84) = xmm3; /* movss */
    MEMF(esp + 0x88) = xmm3; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_001B613A: ;
    esp = esp + 4;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_001B6150
 * Original: 0x001B6150 - 0x001B617E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6150(void)
{

loc_001B6150: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x570);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00394DF0(); /* call 0x00394DF0 */

loc_001B615E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x420C0000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    esi = edi;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_001B6179: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B6180
 * Original: 0x001B6180 - 0x001B61C2 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6180: ;
    MEM16(0x775AEC) = MEM16(0x775AEC) - 1;
    eax = 0;
    PUSH32(esp, esi);
    esi = MEM32(0x775AEC);
    SET_LO8(eax, (((int32_t)MEM16(0x775AEC) < 0)) ? 1 : 0); /* sets */
    eax--;
    eax = eax & esi;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM16(0x775AEC) = LO16(eax);
    PUSH32(esp, 0); sub_0013D300(); /* call 0x0013D300 */

loc_001B61A9: ;
    SET_LO8(eax, MEM8(0x8472BD));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001B61C2(); return; } /* jne: not equal / not zero */

loc_001B61B5: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001B61D0
 * Original: 0x001B61D0 - 0x001B623C (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B61D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001B61D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x54);
    eax = 0x40;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001B61E2: ;
    ecx = MEM32(esp + 0x14);
    xmm0 = 0.0f; /* xorps self = zero */
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    MEM32(esi + 0x2C) = eax;
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    MEM32(esi + 0x3C) = 0;
    PUSH32(esp, 0); sub_001B6830(); /* call 0x001B6830 */

loc_001B6209: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B623A; /* jne: not equal / not zero */

loc_001B6210: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B623A; /* jne: not equal / not zero */

loc_001B6219: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001B6220: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001B623A; /* jl: less (signed <) */

loc_001B6227: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001B623C(); return; } /* je: equal / zero */

loc_001B6234: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001B6237: ;
    esp = esp + 4;

loc_001B623A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B6250
 * Original: 0x001B6250 - 0x001B62A1 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3, xmm5;

loc_001B6250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x2C);
    eax = MEM32(ecx + 0x570);
    xmm0 = MEMF(ebx + 0x34); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    if ((xmm0 <= xmm3)) goto loc_001B628D; /* jbe: below or equal (unsigned <=) */

loc_001B6284: ;
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(ebx + 0x34) = xmm0; /* movss */

loc_001B628D: ;
    eax = MEM32(ecx + 0x570);
    esi = 0; /* xor self */
    if (CMP_NE(eax, esi)) { sub_001B62A1(); return; } /* jne: not equal / not zero */

loc_001B6299: ;
    MEMF(esp + 0x14) = xmm3; /* movss */
    g_seh_ebp = ebp; sub_001B62AF(); return; /* tail jmp 0x001B62AF */

}

/**
 * sub_001B67D0
 * Original: 0x001B67D0 - 0x001B67FE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B67D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B67D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x3C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x3C;
    if (TEST_Z(ecx, ecx)) goto loc_001B67E8; /* je: equal / zero */

loc_001B67DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001B67E5: ;
    esp = esp + 4;

loc_001B67E8: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001B67FE(); return; } /* jne: not equal / not zero */

loc_001B67F1: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001B6830
 * Original: 0x001B6830 - 0x001B684C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6830(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B6830: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x570);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0xCF8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x38) = eax;
    if (TEST_NZ(eax, eax)) { sub_001B684C(); return; } /* jne: not equal / not zero */

loc_001B6848: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B68C0
 * Original: 0x001B68C0 - 0x001B6909 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B68C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B68C0: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_001B68CD; /* je: equal / zero */

loc_001B68C8: ;
    if (CMP_NE(eax, 3)) goto loc_001B6908; /* jne: not equal / not zero */

loc_001B68CD: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(ecx, MEM32(esi + 0x2C))) goto loc_001B6907; /* jne: not equal / not zero */

loc_001B68DD: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B6907; /* jne: not equal / not zero */

loc_001B68E6: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001B68ED: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001B6907; /* jl: less (signed <) */

loc_001B68F4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001B6909(); return; } /* je: equal / zero */

loc_001B6901: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001B6904: ;
    esp = esp + 4;

loc_001B6907: ;
    POP32(esp, esi);

loc_001B6908: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B6920
 * Original: 0x001B6920 - 0x001B6AD7 (439 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6920: ;
    esp = esp - 0x34;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_NZ(edi, edi)) { sub_001B6AD7(); return; } /* jne: not equal / not zero */

loc_001B6934: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x570);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0xCF0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_BE(eax & eax, 0)) goto loc_001B6ACF; /* jbe: below or equal (unsigned <=) */

loc_001B694E: ;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = eax;

loc_001B6956: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esp + 0x20;
    PUSH32(esp, 0x38);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x1B9530;
    MEM32(esp + 0x2C) = 0x1B8850;
    MEM32(esp + 0x30) = 0x1B9500;
    MEM32(esp + 0x34) = 0x1B9740;
    MEM32(esp + 0x38) = 0x29;
    MEM32(esp + 0x3C) = 0x303;
    MEM32(esp + 0x44) = 0x14;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM8(esp + 0x48) = 1;
    PUSH32(esp, 0); sub_00106EC0(); /* call 0x00106EC0 */

loc_001B69A8: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_001B6AB5; /* je: equal / zero */

loc_001B69B5: ;
    MEM32(esi + 0xA4) = ebp;
    ecx = MEM32(ebp + 0x4B0);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(0x81BCE0);
    edi = MEM32(edx + 8);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_001B69DC: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_001B69E8: ;
    eax = MEM32(eax + 0x34);
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(0x64908C); /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    MEM32(esi + 0xA8) = eax;
    ecx = MEM32(ebx + 0xCF4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + edx);
    MEMF(esi + 0xCC) = xmm1; /* movss */
    xmm1 = MEMF(0x648F78); /* movss */
    MEMF(esi + 0xBC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xD0) = xmm1; /* movss */
    xmm1 = MEMF(0x648F08); /* movss */
    MEM32(esi + 0xB8) = eax;
    MEMF(esi + 0xC0) = xmm0; /* movss */
    MEMF(esi + 0xC4) = xmm0; /* movss */
    MEMF(esi + 0xC8) = xmm0; /* movss */
    MEMF(esi + 0xD4) = xmm1; /* movss */
    MEMF(esi + 0xAC) = xmm0; /* movss */
    MEMF(esi + 0xB0) = xmm0; /* movss */
    MEMF(esi + 0xB4) = xmm0; /* movss */
    edi = MEM32(esi + 0x70);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xBB);
    PUSH32(esp, 0x5F5224);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001B6A8E: ;
    edx = eax;
    esp = esp + 0x20;
    if (TEST_Z(edx, edx)) goto loc_001B6AAF; /* je: equal / zero */

loc_001B6A97: ;
    ecx = edi;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ebx = MEM32(esp + 0x18);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_001B6AAF: ;
    MEM32(esi + 0xD8) = edx;

loc_001B6AB5: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = ecx + 0x20;
    eax--;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001B6956; /* jne: not equal / not zero */

loc_001B6ACF: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_001B6B30
 * Original: 0x001B6B30 - 0x001B6CE2 (434 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6B30: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x4B0);
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_001B6CDD; /* je: equal / zero */

loc_001B6B48: ;
    eax = MEM32(eax + 0x24);
    if (CMP_EQ(eax, ebp)) goto loc_001B6CDD; /* je: equal / zero */

loc_001B6B53: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = ebp;
    esi = 0; /* xor self */

loc_001B6B65: ;
    ecx = MEM32(ebx + 0x10);
    if (CMP_EQ(ecx, ebp)) goto loc_001B6B70; /* je: equal / zero */

loc_001B6B6C: ;
    eax = MEM32(ecx);
    goto loc_001B6B72;

loc_001B6B70: ;
    eax = 0; /* xor self */

loc_001B6B72: ;
    if (CMP_GE(esi, eax)) goto loc_001B6BB5; /* jge: greater or equal (signed >=) */

loc_001B6B76: ;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(ecx, ebp)) goto loc_001B6B9B; /* je: equal / zero */

loc_001B6B7E: ;
    if (CMP_L(esi, ebp)) goto loc_001B6B9B; /* jl: less (signed <) */

loc_001B6B82: ;
    edx = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_001B6B8D: ;
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(eax, ebp)) goto loc_001B6B9B; /* je: equal / zero */

loc_001B6B95: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;

loc_001B6B9B: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x5F521C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_001B6BAA: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001B6BB2; /* je: equal / zero */

loc_001B6BB1: ;
    edi++;

loc_001B6BB2: ;
    esi++;
    goto loc_001B6B65;

loc_001B6BB5: ;
    if (CMP_EQ(edi, ebp)) goto loc_001B6CDA; /* je: equal / zero */

loc_001B6BBD: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x53);
    eax = 0x48;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001B6BCE: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebp)) goto loc_001B6CDA; /* je: equal / zero */

loc_001B6BDB: ;
    eax = MEM32(esp + 0x20);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x116);
    ecx = edi + edi * 4;
    ecx = ecx << 2;
    PUSH32(esp, 0x5F5224);
    PUSH32(esp, ecx);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = 1;
    MEMF(esi + 0x38) = xmm0; /* movss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEM32(esi + 0x44) = ebp;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001B6C14: ;
    esp = esp + 0x10;
    ebx = 0; /* xor self */
    MEM32(esi + 0x44) = eax;
    edi = 0; /* xor self */
    edi = edi;

loc_001B6C20: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edx + 0x10);
    if (CMP_EQ(ecx, ebp)) goto loc_001B6C2F; /* je: equal / zero */

loc_001B6C2B: ;
    eax = MEM32(ecx);
    goto loc_001B6C31;

loc_001B6C2F: ;
    eax = 0; /* xor self */

loc_001B6C31: ;
    if (CMP_GE(ebx, eax)) goto loc_001B6CAC; /* jge: greater or equal (signed >=) */

loc_001B6C35: ;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(ecx, ebp)) goto loc_001B6C5A; /* je: equal / zero */

loc_001B6C3D: ;
    if (CMP_L(ebx, ebp)) goto loc_001B6C5A; /* jl: less (signed <) */

loc_001B6C41: ;
    edx = esp + 0x20;
    eax = ebx;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_001B6C4C: ;
    eax = MEM32(esp + 0x20);
    if (CMP_EQ(eax, ebp)) goto loc_001B6C5A; /* je: equal / zero */

loc_001B6C54: ;
    eax = MEM32(eax);
    MEM32(esp + 0x10) = eax;

loc_001B6C5A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x5F521C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_001B6C69: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001B6CA6; /* je: equal / zero */

loc_001B6C70: ;
    edx = MEM32(esi + 0x44);
    xmm0 = MEMF(0x648F78); /* movss */
    MEM32(edi + edx) = ebx;
    eax = MEM32(esi + 0x44);
    MEM32(edi + eax + 4) = ebp;
    ecx = MEM32(esi + 0x44);
    MEMF(edi + ecx + 8) = xmm0; /* movss */
    edx = MEM32(esi + 0x44);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + edx + 0xC) = xmm0; /* movss */
    eax = MEM32(esi + 0x44);
    MEMF(edi + eax + 0x10) = xmm0; /* movss */
    edi = edi + 0x14;

loc_001B6CA6: ;
    ebx++;
    goto loc_001B6C20;

loc_001B6CAC: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(0x81BCE0);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_001B6CC1: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_001B6CD1: ;
    edx = MEM32(eax + 0x34);
    esp = esp + 0x10;
    MEM32(esi + 0x34) = edx;

loc_001B6CDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001B6CDD: ;
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001B6CF0
 * Original: 0x001B6CF0 - 0x001B6D33 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B6CF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B8D44), _icall_esp); /* indirect call */
    }

loc_001B6D00: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B6D31; /* jne: not equal / not zero */

loc_001B6D07: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B6D31; /* jne: not equal / not zero */

loc_001B6D10: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001B6D17: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001B6D31; /* jl: less (signed <) */

loc_001B6D1E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001B6D33(); return; } /* je: equal / zero */

loc_001B6D2B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001B6D2E: ;
    esp = esp + 4;

loc_001B6D31: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B7360
 * Original: 0x001B7360 - 0x001B7452 (242 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001B7360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    xmm4 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm0 = MEMF(ebx + 0x3C); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0 <= xmm4)) goto loc_001B73A0; /* jbe: below or equal (unsigned <=) */

loc_001B7387: ;
    xmm1 = MEMF(ebx + 0x3C); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebx + 0x3C) = xmm1; /* movss */

loc_001B73A0: ;
    eax = MEM32(ebx + 0x30);
    ecx = eax + 0x84;
    eax = eax + 0x78;
    edx = esp + 0x38;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x38;
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
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * MEMF(0x64909C); /* mulss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    xmm5 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    if ((xmm4 <= xmm1)) { sub_001B7452(); return; } /* jbe: below or equal (unsigned <=) */

loc_001B7439: ;
    xmm1 = xmm4; /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - MEMF(ebx + 0x38); /* subss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_001B7497(); return; /* tail jmp 0x001B7497 */

}

/**
 * sub_001B7C40
 * Original: 0x001B7C40 - 0x001B869C (2652 bytes, 615 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001B7C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1B4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x30);
    SET_LO8(ecx, MEM8(eax + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    (void)0; /* cmp LO8(ecx), 0xF - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_001B8693; /* je: equal / zero */

loc_001B7C67: ;
    xmm0 = MEMF(ebx + 0x3C); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm2 = MEMF(0x648CE0); /* movss */
    if ((xmm0 <= xmm3)) goto loc_001B7C96; /* jbe: below or equal (unsigned <=) */

loc_001B7C7C: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm1 = MEMF(ebx + 0x3C); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebx + 0x3C) = xmm1; /* movss */

loc_001B7C96: ;
    eax = MEM32(ebx + 0x40);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x44) = edx;
    if (CMP_BE(eax, edx)) goto loc_001B8068; /* jbe: below or equal (unsigned <=) */

loc_001B7CA7: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x28) = edi;
    /* nop */

loc_001B7CB0: ;
    edx = MEM32(ebx + 0x44);
    ecx = MEM32(ebx + 0x30);
    esi = edx + edi;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0); sub_00393A80(); /* call 0x00393A80 */

loc_001B7CC1: ;
    MEMF(esp + 0x48) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x40) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x7FA21C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebx + 0x44);
    /* comiss xmm3, MEMF(eax + edi + 0xC) - sets EFLAGS */
    eax = eax + edi + 0xC;
    if ((xmm3 <= MEMF(eax + edi + 0xC))) goto loc_001B7CFA; /* jbe: below or equal (unsigned <=) */

loc_001B7CF5: ;
    xmm0 = xmm3; /* movaps */
    goto loc_001B7D0A;

loc_001B7CFA: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    xmm0 = xmm2; /* movaps */
    if ((xmm0 > xmm2)) goto loc_001B7D0A; /* ja: above (unsigned >) */

loc_001B7D06: ;
    xmm0 = MEMF(eax); /* movss */

loc_001B7D0A: ;
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x44);
    xmm0 = MEMF(ecx + edi + 0xC); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    eax = ecx + edi;
    if ((xmm0 < MEMF(0x648D14))) goto loc_001B804B; /* jb: below (unsigned <) */

loc_001B7D27: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(ecx + 0x3C8);
    ecx = MEM32(ecx + 0x4B0);
    eax = MEM32(eax);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 8);
    if (TEST_Z(ecx, ecx)) goto loc_001B7D5A; /* je: equal / zero */

loc_001B7D46: ;
    ecx = MEM32(ecx + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_001B7D5A; /* je: equal / zero */

loc_001B7D4D: ;
    if (TEST_S(eax, eax)) goto loc_001B7D5A; /* jl: less (signed <) */

loc_001B7D51: ;
    edx = esp + 0x68;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_001B7D5A: ;
    eax = MEM32(esp + 0x68);
    if (TEST_Z(eax, eax)) goto loc_001B7D69; /* je: equal / zero */

loc_001B7D62: ;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x70) = eax;

loc_001B7D69: ;
    edi = MEM32(esp + 0x70);
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    esi = esp + 0x50;
    PUSH32(esp, 0); sub_003ECB70(); /* call 0x003ECB70 */

loc_001B7D7F: ;
    eax = MEM32(ebx + 0x30);
    ecx = eax + 0x84;
    eax = eax + 0x78;
    edx = esp + 0x20;
    esp = esp + 4;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x30) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm5 = MEMF(0x648D10); /* movss */
    eax = esp + 0x1C;
    ecx = eax;
    MEMF(esp + 0x58) = xmm5; /* movss */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0x58); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(ebx + 0x30);
    eax = MEM32(edx + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edi = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edx = esp + 0x10C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_001B7E2D: ;
    ecx = MEM32(ebx + 0x30);
    eax = MEM32(ebx + 0x44);
    esi = MEM32(esp + 0x30);
    edx = MEM32(ecx + 0x3C8);
    eax = MEM32(esi + eax);
    esp = esp + 8;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(edi, edi)) goto loc_001B7E9D; /* je: equal / zero */

loc_001B7E4B: ;
    edi = MEM32(edi + 0x10);
    if (TEST_Z(edi, edi)) goto loc_001B7E9D; /* je: equal / zero */

loc_001B7E52: ;
    if (TEST_S(eax, eax)) goto loc_001B7E9D; /* jl: less (signed <) */

loc_001B7E56: ;
    edx = esp + 0x60;
    ecx = edi;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_001B7E61: ;
    if (TEST_Z(eax, eax)) goto loc_001B7E9D; /* je: equal / zero */

loc_001B7E65: ;
    eax = MEM32(esp + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001B7E74; /* je: equal / zero */

loc_001B7E6D: ;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x64) = eax;

loc_001B7E74: ;
    eax = MEM32(esp + 0x64);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    esi = esp + 0x3C;
    edi = esp + 0x38;
    PUSH32(esp, 0); sub_003ECEB0(); /* call 0x003ECEB0 */

loc_001B7E8E: ;
    xmm5 = MEMF(0x648D10); /* movss */
    esi = MEM32(esp + 0x2C);
    esp = esp + 4;

loc_001B7E9D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B7EA2: ;
    xmm6 = MEMF(0x648E14); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B7EC3: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B7EDC: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x34);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x8C;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_001B7F0D: ;
    esp = esp + 0xC;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5A02F0);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001B7F22: ;
    xmm2 = MEMF(esp + 0x40); /* movss */
    ecx = esp + 0x74;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x648EB8); /* mulss */
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    edx = ecx;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0x6C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x1C;
    edx = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x30);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = xmm2 + MEMF(0x6490B8); /* addss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    goto loc_001B7FC0;

    /* nop */

loc_001B7FC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x4B);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x12F);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x420C0000);
    PUSH32(esp, 0x3D4CCCCD);
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edi = esp + 0x64;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_001B800E: ;
    edx = MEM32(ebx + 0x44);
    xmm1 = MEMF(edx + esi + 0xC); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = edx + esi + 0xC;
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(eax) = xmm1; /* movss */
    eax = MEM32(ebx + 0x44);
    xmm1 = MEMF(eax + esi + 0xC); /* movss */
    esp = esp + 0x48;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_001B7FC0; /* jae: above or equal (unsigned >=) */

loc_001B803C: ;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648CE0); /* movss */
    edi = MEM32(esp + 0x28);

loc_001B804B: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(ebx + 0x40);
    eax++;
    edi = edi + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x28) = edi;
    if (CMP_B(eax, ecx)) goto loc_001B7CB0; /* jb: below (unsigned <) */

loc_001B8066: ;
    edx = 0; /* xor self */

loc_001B8068: ;
    (void)0; /* cmp MEM32(ebx + 0x40), edx - flags set for next jcc */
    MEM32(esp + 0x48) = edx;
    if (CMP_BE(MEM32(ebx + 0x40), edx)) goto loc_001B8693; /* jbe: below or equal (unsigned <=) */

loc_001B8075: ;
    MEM32(esp + 0x28) = edx;
    /* nop */

loc_001B8080: ;
    ecx = MEM32(ebx + 0x44);
    eax = MEM32(esp + 0x28);
    eax = eax + ecx;
    ecx = MEM32(eax + 4);
    if (CMP_EQ(ecx, 1)) goto loc_001B809A; /* je: equal / zero */

loc_001B8091: ;
    if (CMP_NE(ecx, 2)) goto loc_001B8674; /* jne: not equal / not zero */

loc_001B809A: ;
    ecx = MEM32(eax);
    eax = MEM32(ebx + 0x30);
    edi = MEM32(eax + 0x3C8);
    eax = MEM32(eax + 0x4B0);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 8);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    esi = MEM32(ebx + 0x34);
    if (CMP_EQ(eax, edx)) goto loc_001B8196; /* je: equal / zero */

loc_001B80BC: ;
    eax = MEM32(eax + 0x10);
    if (CMP_EQ(eax, edx)) goto loc_001B8196; /* je: equal / zero */

loc_001B80C7: ;
    if (CMP_L(ecx, edx)) goto loc_001B8196; /* jl: less (signed <) */

loc_001B80CF: ;
    if (CMP_AE(ecx, MEM32(eax))) goto loc_001B80E5; /* jae: above or equal (unsigned >=) */

loc_001B80D3: ;
    eax = MEM32(eax + 4);
    ecx = ecx + ecx * 2;
    eax = eax + ecx * 4;
    MEM32(esp + 0x44) = eax;
    goto loc_001B819A;

loc_001B80E5: ;
    MEM32(esp + 0x44) = edx;

loc_001B80E9: ;
    eax = MEM32(esp + 0x34);

loc_001B80ED: ;
    if (CMP_EQ(eax, edx)) goto loc_001B81B6; /* je: equal / zero */

loc_001B80F5: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    ecx = MEM32(eax + 0x1C);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_001B81BC; /* je: equal / zero */

loc_001B8121: ;
    if (CMP_EQ(edi, edx)) goto loc_001B81BC; /* je: equal / zero */

loc_001B8129: ;
    if (CMP_EQ(esi, edx)) goto loc_001B81BC; /* je: equal / zero */

loc_001B8131: ;
    eax = ecx;
    edx = ecx;
    ecx = esp + 0x4C;
    edx = edx << 6;
    PUSH32(esp, ecx);
    eax = eax + eax * 8;
    edx = edx + edi;
    PUSH32(esp, edx);
    eax = esi + eax * 4;
    PUSH32(esp, 0); sub_00428CA0(); /* call 0x00428CA0 */

loc_001B814B: ;
    esp = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001B815C: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x4C); /* addss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x54); /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    edx = 0; /* xor self */
    goto loc_001B81BC;

loc_001B8196: ;
    eax = MEM32(esp + 0x44);

loc_001B819A: ;
    if (CMP_EQ(eax, edx)) goto loc_001B80E9; /* je: equal / zero */

loc_001B81A2: ;
    eax = MEM32(eax + 8);
    if (CMP_EQ(eax, edx)) goto loc_001B81B2; /* je: equal / zero */

loc_001B81A9: ;
    MEM32(esp + 0x34) = eax;
    goto loc_001B80ED;

loc_001B81B2: ;
    MEM32(esp + 0x34) = edx;

loc_001B81B6: ;
    xmm1 = MEMF(esp + 0x20); /* movss */

loc_001B81BC: ;
    xmm0 = MEMF(0x648E60); /* movss */
    MEMF(esp + 0x110) = xmm0; /* movss */
    eax = 0; /* xor self */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x59D944); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    ecx = 0x24;
    edi = esp + 0x120;
    MEM32(esp + 0x1B0) = edx;
    MEM8(esp + 0x1B4) = 0;
    MEM8(esp + 0x1B5) = 0;
    MEM32(esp + 0x1B8) = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_001B8693; /* ja: above (unsigned >) */

loc_001B8215: ;
    ecx = MEM32(esp + 0x5C);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    edi = esp + 0x6C;
    esi = esp + 0x118;
    eax = esp + 0x24;
    MEM32(0x780AB0) = 0x606564;
    MEM32(0x6C0210) = 0x133;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_0029F610(); /* call 0x0029F610 */

loc_001B825A: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x780AB0) = ecx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ecx);
    MEM32(0x74FA2C) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B8693; /* je: equal / zero */

loc_001B8283: ;
    edx = MEM32(ebx + 0x44);
    edi = MEM32(esp + 0x28);
    ecx = MEM32(ebx + 0x30);
    esi = edx + edi;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0); sub_00393A80(); /* call 0x00393A80 */

loc_001B8298: ;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = MEMF(0x648CF4); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebx + 0x44);
    xmm1 = MEMF(eax + edi + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    eax = eax + edi + 0x10;
    if ((xmm1 > xmm0)) goto loc_001B82F2; /* ja: above (unsigned >) */

loc_001B82EF: ;
    xmm0 = xmm1; /* movaps */

loc_001B82F2: ;
    xmm6 = MEMF(0x648D14); /* movss */
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x44);
    xmm0 = MEMF(ecx + edi + 0x10); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_001B8672; /* jbe: below or equal (unsigned <=) */

loc_001B8310: ;
    SET_LO8(edx, MEM8(esp + 0x64));
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(0x64A8B4); /* movss */
    xmm7 = MEMF(esp + 0x40); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    SET_LO8(edx, LO8(edx) & 0x1F);
    SET_LO8(edx, LO8(edx) - 0xC);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    MEM32(esp + 0xC4) = eax;
    eax = MEM32(0x5A02CC);
    MEM32(esp + 0xC8) = ecx;
    ecx = MEM32(0x5A02D0);
    MEM32(esp + 0xD0) = eax;
    eax = 2;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    MEM32(esp + 0xD4) = ecx;
    ecx = 0; /* xor self */
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0xA4) = ecx;
    ecx = eax;
    edx = edx + 0x12E;
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x110); /* movss */
    ecx = ecx >> 0x10;
    eax = eax >> 8;
    MEM32(esp + 0xAC) = edx;
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    MEM32(esp + 0x58) = eax;
    eax = esp + 0xDC;
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEM32(esp + 0xCC) = edx;
    edx = MEM32(0x5A02D4);
    MEM32(esp + 0x60) = ecx;
    ecx = eax;
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm7 = xmm7 + xmm0; /* addss */
    MEMF(esp + 0x84) = xmm5; /* movss */
    MEMF(esp + 0x88) = xmm5; /* movss */
    MEM16(esp + 0xB0) = 0x28;
    MEM16(esp + 0xB2) = 6;
    MEM32(esp + 0xEC) = 0x80DE07;
    MEM8(esp + 0xF4) = 0x2A;
    MEM8(esp + 0xF5) = 0xFF;
    MEM8(esp + 0xF6) = 0xFF;
    MEM8(esp + 0xF7) = 0;
    MEM32(esp + 0xD8) = edx;
    MEM32(esp + 0x9C) = 4;
    MEM32(esp + 0xA8) = 0x303;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x30) = ecx;
    MEMF(esp + 0x3C) = xmm7; /* movss */
    goto loc_001B8480;

    /* nop */

loc_001B8480: ;
    ecx = MEM32(esp + 0xEC);
    ecx = ecx & 0xFFFFFF3Fu;
    MEMF(esp + 0xE8) = xmm5; /* movss */
    MEM32(esp + 0xEC) = ecx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B84A2: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B84AE: ;
    edi = MEM32(esp + 0xEC);
    eax = eax & 1;
    esi = esi | eax;
    esi = esi << 6;
    edi = edi | esi;
    MEM32(esp + 0xEC) = edi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B84CB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(esp + 0x58));
    SET_LO8(ecx, MEM8(esp + 0x38));
    MEM8(esp + 0x8D) = LO8(eax);
    MEM8(esp + 0x8E) = LO8(ecx);
    MEM8(esp + 0x8F) = 0;
    edx = edx + 0xA;
    MEM16(esp + 0x80) = LO16(edx);
    MEM16(esp + 0xB4) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x60));
    MEM8(esp + 0x8C) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001B8514: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0xE0) = xmm5; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x18)); /* sqrtss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001B8566: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001B857F; /* je: equal / zero */

loc_001B856A: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0xE4); /* subss */
    MEMF(esp + 0xE4) = xmm0; /* movss */

loc_001B857F: ;
    xmm0 = MEMF(esp + 0x68); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x70);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    (void)0; /* cmp MEM32(0x771CD0), 0x2EE - flags set for next jcc */
    xmm0 = xmm7; /* movaps */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC8); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_001B8647; /* jge: greater or equal (signed >=) */

loc_001B85DF: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x6C);
    eax = 0x174;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001B85F0: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm7 = MEMF(esp + 0x44); /* movss */
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001B8647; /* je: equal / zero */

loc_001B8608: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x771CD0);
    SET_LO16(edx, MEM16(edx));
    ecx++;
    MEM32(0x771CD0) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM16(eax + 0x2E) = LO16(edx);
    MEM8(eax + 0x154) = 0;
    MEM8(eax + 0x160) = 0;
    MEM32(eax + 0x170) = ecx;

loc_001B8647: ;
    edx = MEM32(ebx + 0x44);
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(edx + ecx + 0x10); /* movss */
    eax = edx + ecx + 0x10;
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(ebx + 0x44);
    xmm0 = MEMF(eax + ecx + 0x10); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 >= xmm6)) goto loc_001B8480; /* jae: above or equal (unsigned >=) */

loc_001B8672: ;
    edx = 0; /* xor self */

loc_001B8674: ;
    eax = MEM32(esp + 0x48);
    esi = MEM32(esp + 0x28);
    ecx = MEM32(ebx + 0x40);
    eax++;
    esi = esi + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x28) = esi;
    if (CMP_B(eax, ecx)) goto loc_001B8080; /* jb: below (unsigned <) */

loc_001B8693: ;
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
 * sub_001B86A0
 * Original: 0x001B86A0 - 0x001B86CE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B86A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B86A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x44);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 0x44;
    if (TEST_Z(ecx, ecx)) goto loc_001B86B8; /* je: equal / zero */

loc_001B86AF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001B86B5: ;
    esp = esp + 4;

loc_001B86B8: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001B86CE(); return; } /* jne: not equal / not zero */

loc_001B86C1: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001B8700
 * Original: 0x001B8700 - 0x001B871E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8700(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B8700: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x570);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0xCF0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x40) = eax;
    if (TEST_NZ(eax, eax)) { sub_001B871E(); return; } /* jne: not equal / not zero */

loc_001B8719: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B87F0
 * Original: 0x001B87F0 - 0x001B8839 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B87F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B87F0: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_001B87FD; /* je: equal / zero */

loc_001B87F8: ;
    if (CMP_NE(eax, 3)) goto loc_001B8838; /* jne: not equal / not zero */

loc_001B87FD: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(ecx, MEM32(esi + 0x30))) goto loc_001B8837; /* jne: not equal / not zero */

loc_001B880D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B8837; /* jne: not equal / not zero */

loc_001B8816: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001B881D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001B8837; /* jl: less (signed <) */

loc_001B8824: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001B8839(); return; } /* je: equal / zero */

loc_001B8831: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001B8834: ;
    esp = esp + 4;

loc_001B8837: ;
    POP32(esp, esi);

loc_001B8838: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9500
 * Original: 0x001B9500 - 0x001B952A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9500(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B9500: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_001B9511; /* je: equal / zero */

loc_001B950C: ;
    if (CMP_NE(eax, 3)) goto loc_001B9529; /* jne: not equal / not zero */

loc_001B9511: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ecx + 0xA4))) goto loc_001B9529; /* jne: not equal / not zero */

loc_001B951F: ;
    MEM32(ecx + 0xA4) = 0;

loc_001B9529: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9530
 * Original: 0x001B9530 - 0x001B9724 (500 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9530: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x70);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 8) = ebp;
    if (CMP_LE(eax, ebp)) goto loc_001B9720; /* jle: less or equal (signed <=) */

loc_001B9548: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* nop */

loc_001B9550: ;
    eax = MEM32(esi + 0x9C);
    MEM16(edi + eax + 0x4A) = LO16(ebp);
    ecx = MEM32(esi + 0x9C);
    MEM16(edi + ecx + 0x48) = LO16(ebp);
    edx = MEM32(esi + 0x9C);
    MEM16(edi + edx + 0x32) = LO16(ebp);
    eax = MEM32(esi + 0x9C);
    MEM16(edi + eax + 0x30) = LO16(ebp);
    ecx = MEM32(esi + 0x9C);
    MEM16(edi + ecx + 0x1A) = LO16(ebp);
    edx = MEM32(esi + 0x9C);
    MEM16(edi + edx + 0x18) = LO16(ebp);
    eax = MEM32(esi + 0x9C);
    MEM16(edi + eax + 2) = LO16(ebp);
    ecx = MEM32(esi + 0x9C);
    MEM16(edi + ecx) = LO16(ebp);
    edx = MEM32(esi + 0x9C);
    eax = eax | 0xFFFFFFFFu;
    MEM32(edi + edx + 0xC) = eax;
    ecx = MEM32(esi + 0x9C);
    MEM32(edi + ecx + 0x24) = eax;
    edx = MEM32(esi + 0x9C);
    MEM32(edi + edx + 0x3C) = eax;
    ecx = MEM32(esi + 0x9C);
    MEM32(edi + ecx + 0x54) = eax;
    eax = MEM32(esi + 0x40);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001B95E5: ;
    ebx = eax;
    esp = esp + 4;
    if (CMP_NE(ebx, ebp)) goto loc_001B95FE; /* jne: not equal / not zero */

loc_001B95EE: ;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001B95F6: ;
    MEM32(0x771764) = ebp;
    goto loc_001B9639;

loc_001B95FE: ;
    if (CMP_EQ(MEM32(0x771764), ebx)) goto loc_001B9639; /* je: equal / zero */

loc_001B9606: ;
    eax = MEM32(ebx + 4);
    if (CMP_A(eax, 4)) goto loc_001B9633; /* ja: above (unsigned >) */

loc_001B960E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1B9724); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001B9615u) goto loc_001B9615;
    if (_jt == 0x001B961Bu) goto loc_001B961B;
    if (_jt == 0x001B9620u) goto loc_001B9620;
    if (_jt == 0x001B9626u) goto loc_001B9626;
    if (_jt == 0x001B9633u) goto loc_001B9633;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B9615: ;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, eax);
    goto loc_001B962C;

loc_001B961B: ;
    ecx = MEM32(ebx + 0x1C);
    goto loc_001B962B;

loc_001B9620: ;
    edx = MEM32(ebx + 0x1C);
    PUSH32(esp, edx);
    goto loc_001B962C;

loc_001B9626: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(eax);

loc_001B962B: ;
    PUSH32(esp, ecx);

loc_001B962C: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001B9633: ;
    MEM32(0x771764) = ebx;

loc_001B9639: ;
    eax = MEM32(esp + 0x18);
    if (CMP_EQ(eax, ebp)) goto loc_001B96AA; /* je: equal / zero */

loc_001B9641: ;
    edx = MEM32(esi + 0x9C);
    xmm0 = MEMF(eax + 0x10); /* movss */
    ecx = edi + edx + 0x10;
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    MEMF(ecx + 4) = xmm0; /* movss */
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(eax + 0xC);
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEM32(edi + ecx + 0x28) = edx;
    MEMF(edi + ecx + 0x2C) = xmm0; /* movss */
    edx = MEM32(eax + 0xC);
    xmm0 = MEMF(eax + 0x14); /* movss */
    ecx = edi + ecx + 0x28;
    ecx = MEM32(esi + 0x9C);
    ecx = edi + ecx + 0x40;
    MEM32(ecx) = edx;
    MEMF(ecx + 4) = xmm0; /* movss */
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(eax + 8);
    xmm0 = MEMF(eax + 0x14); /* movss */
    ecx = edi + ecx + 0x58;
    MEM32(ecx) = edx;
    MEMF(ecx + 4) = xmm0; /* movss */
    goto loc_001B9707;

loc_001B96AA: ;
    eax = MEM32(esi + 0x9C);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(edi + eax + 0x10) = xmm0; /* movss */
    MEMF(edi + eax + 0x14) = xmm0; /* movss */
    ecx = MEM32(esi + 0x9C);
    eax = edi + eax + 0x10;
    MEMF(edi + ecx + 0x28) = xmm1; /* movss */
    MEMF(edi + ecx + 0x2C) = xmm0; /* movss */
    edx = MEM32(esi + 0x9C);
    eax = edi + ecx + 0x28;
    eax = edi + edx + 0x40;
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    eax = MEM32(esi + 0x9C);
    eax = edi + eax + 0x58;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */

loc_001B9707: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x70);
    eax++;
    edi = edi + 0x60;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_001B9550; /* jl: less (signed <) */

loc_001B971E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001B9720: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9770
 * Original: 0x001B9770 - 0x001B9822 (178 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9770(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001B9770: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 4);
    eax = 0x84;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001B9782: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_001B9820; /* je: equal / zero */

loc_001B978F: ;
    eax = MEM32(esp + 8);
    xmm0 = MEMF(esp + 0x10); /* movss */
    SET_LO8(ecx, MEM8(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0x28));
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esp + 0x18);
    MEMF(esi + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM8(esi + 0x54) = LO8(ecx);
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esi + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, ecx);
    MEMF(esi + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, esi);
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x4C) = 0;
    MEMF(esi + 0x60) = xmm0; /* movss */
    MEM8(esi + 0x80) = LO8(edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi * 4 + 0x6B8D50), _icall_esp); /* indirect call */
    }

loc_001B97EF: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B9820; /* jne: not equal / not zero */

loc_001B97F6: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B9820; /* jne: not equal / not zero */

loc_001B97FF: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001B9806: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001B9820; /* jl: less (signed <) */

loc_001B980D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001B9822(); return; } /* je: equal / zero */

loc_001B981A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001B981D: ;
    esp = esp + 4;

loc_001B9820: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9890
 * Original: 0x001B9890 - 0x001BA0BB (2091 bytes, 528 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9890(void)
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

loc_001B9890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax + 0x570);
    eax = MEM32(edi + 0x48);
    xmm0 = MEMF(edi + 0x50); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x80) = ecx;
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEM32(esp + 0x7C) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_001BA0B2; /* jle: less or equal (signed <=) */

loc_001B98D9: ;
    eax = esp + 0x50;
    edx = esp + 0x24;
    ecx = eax;
    MEM32(esp + 0x98) = edx;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0x90) = ecx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x74) = ebx;

loc_001B9900: ;
    edx = MEM32(edi + 0x4C);
    eax = MEM32(ebx + edx + 0x30);
    ecx = ebx + edx;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(edi + 0x2C);
    edx = MEM32(eax + 0x3C8);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (TEST_NZ(edx, edx)) goto loc_001B994A; /* jne: not equal / not zero */

loc_001B991F: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEM8(esp + 0x1A) = 0;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    goto loc_001B996A;

loc_001B994A: ;
    eax = MEM32(ecx);
    esi = MEM32(esp + 0x80);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_00393380(); /* call 0x00393380 */

loc_001B9962: ;
    ecx = MEM32(esp + 0x14);
    MEM8(esp + 0x1A) = LO8(eax);

loc_001B996A: ;
    ecx = ecx + 8;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x98);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xA0);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x90);
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
    MEMF(esp + 0xA4) = xmm1; /* movss */
    xmm0 = MEMF(0x648CF4); /* movss */
    /* comiss xmm0, MEMF(esp + 0xA4) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0xA4))) goto loc_001BA08C; /* ja: above (unsigned >) */

loc_001B99E7: ;
    ecx = MEM32(edi + 0x4C);
    edx = ebx + ecx + 0x14;
    eax = esp + 0x24;
    ecx = esp + 0x40;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x40;
    MEM32(esp + 0x14) = edx;
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
    MEMF(esp + 0x9C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x9C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEMF(esp + 0x78) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_001BA08C; /* jbe: below or equal (unsigned <=) */

loc_001B9A7D: ;
    xmm1 = MEMF(0x648F78); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esp + 0x1B) = 0;
    if ((xmm1 <= xmm0)) goto loc_001B9B1C; /* jbe: below or equal (unsigned <=) */

loc_001B9A93: ;
    MEM8(esp + 0x1B) = 1;

loc_001B9A98: ;
    eax = esp + 0x40;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001B9AA3: ;
    xmm0 = MEMF(0x648F78); /* movss */
    eax = ebx;
    ecx = esp + 0x68;
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x14) = ecx;
    xmm0 = MEMF(esp + 0xAC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_001B9BCB; /* je: equal / zero */

loc_001B9AFB: ;
    edx = MEM32(edi + 0x4C);
    esi = MEM32(esp + 0x3C);
    edx = (uint32_t)(int32_t)SMEM16(esi + edx + 4);
    PUSH32(esp, eax);
    eax = esp + 0xB4;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_001B9B14: ;
    esp = esp + 4;
    goto loc_001B9BE5;

loc_001B9B1C: ;
    /* comiss xmm0, MEMF(0x5A0060) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x5A0060))) goto loc_001B9A98; /* jbe: below or equal (unsigned <=) */

loc_001B9B29: ;
    eax = MEM32(edi + 0x4C);
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(ebx + eax + 0x20), LO16(ecx))) goto loc_001B9B77; /* jbe: below or equal (unsigned <=) */

loc_001B9B35: ;
    eax = MEM32(esp + 0x34);
    eax = eax + 8;
    /* nop */

loc_001B9B40: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + -8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + -4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(eax) = xmm0; /* movss */
    MEM32(eax + 4) = 0xFFFFFF;
    edx = MEM32(edi + 0x4C);
    edx = ZX16(MEM16(ebx + edx + 0x20));
    ecx++;
    eax = eax + 0x18;
    if (CMP_B(ecx, edx)) goto loc_001B9B40; /* jb: below (unsigned <) */

loc_001B9B77: ;
    eax = MEM32(edi + 0x4C);
    ecx = ZX16(MEM16(ebx + eax + 0x20));
    edi = MEM32(ebx + eax + 0x34);
    ebx = ebx + eax;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    edx = MEM32(esp + 0x3C);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x4C);
    xmm0 = MEMF(esp + 0x24); /* movss */
    edi = MEM32(ebp + 8);
    eax = edx + ecx + 0x14;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    goto loc_001BA088;

loc_001B9BCB: ;
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + 8);
    esi = MEM32(esp + 0x3C);

loc_001B9BE5: ;
    eax = esp + 0xB0;
    ecx = esp + 0x5C;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x14) = ecx;
    eax = 0x5A02D8;
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x30);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    eax = esp + 0x5C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001B9C46: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(esp + 0x94); /* movss */
    xmm2 = xmm6; /* movaps */
    MEM32(esp + 0x30) = 0;
    xmm2 = xmm2 - xmm3; /* subss */

loc_001B9C61: ;
    edx = MEM32(edi + 0x4C);
    ecx = ZX16(MEM16(esi + edx + 0x20));
    ebx = ZX16(MEM16(esi + edx + 0x22));
    eax = esi + edx;
    ecx = ecx - 2;
    edx = 0; /* xor self */
    eax = ebx + -2;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    xmm5 = MEMF(0x648F78); /* movss */
    xmm4 = MEMF(esp + 0x78); /* movss */
    /* comiss xmm5, xmm4 - sets EFLAGS */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x14) = edx;
    if ((xmm5 <= xmm4)) goto loc_001B9D2A; /* jbe: below or equal (unsigned <=) */

loc_001B9C9A: ;
    eax = esp + 0x40;
    ecx = esp + 0x68;
    MEM8(esp + 0x19) = 1;
    MEMF(esp + 0xA8) = xmm4; /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x38) = ecx;
    xmm0 = MEMF(esp + 0xA8); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(edi + 0x4C);
    eax = esi + edx + 0x14;
    edx = esp + 0x84;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x4C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x84;
    goto loc_001B9D74;

loc_001B9D2A: ;
    eax = MEM32(edi + 0x4C);
    eax = esi + eax + 0x14;
    ecx = esp + 0x68;
    MEM8(esp + 0x19) = 0;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x38);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(edi + 0x4C);
    ecx = esi + edx + 0x14;

loc_001B9D74: ;
    xmm0 = MEMF(esp + 0x5C); /* movss */
    edx = MEM32(esp + 0x34);
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    eax = ebx + ebx * 2;
    MEMF(edx + eax * 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    eax = edx + eax * 8;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 8); /* addss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 8); /* addss */
    SET_LO8(ecx, MEM8(esp + 0x1A));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(eax + 0x20) = xmm0; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + 0x1C) = xmm1; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001B9EC6; /* je: equal / zero */

loc_001B9E24: ;
    ecx = MEM32(edi + 0x4C);
    edx = MEM32(esi + ecx + 0x34);
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(MEM8(ecx + edx), 0)) goto loc_001B9E64; /* jne: not equal / not zero */

loc_001B9E35: ;
    ecx = 0x1FFFFFF;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(edi + 0x4C);
    eax = MEM32(esi + edx + 0x34);
    MEM8(eax + ebx + 1) = 1;
    ecx = MEM32(edi + 0x4C);
    edx = MEM32(esi + ecx + 0x34);
    MEM8(ebx + edx) = 1;
    MEM32(esp + 0x30) = 1;
    goto loc_001B9F14;

loc_001B9E64: ;
    if (CMP_NE(MEM32(esp + 0x30), 1)) goto loc_001B9E92; /* jne: not equal / not zero */

loc_001B9E6B: ;
    ecx = 0x1FFFFFF;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(edi + 0x4C);
    ecx = MEM32(esi + eax + 0x34);
    MEM8(ecx + ebx + 1) = 1;
    edx = MEM32(edi + 0x4C);
    eax = MEM32(esi + edx + 0x34);
    MEM8(ebx + eax) = 1;
    goto loc_001B9F14;

loc_001B9E92: ;
    ecx = MEM32(esp + 0x80);
    edx = MEM32(ecx + 0xCFC);
    ecx = MEM32(esp + 0x74);
    ecx = MEM32(edx + ecx + 0x18);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(edi + 0x4C);
    eax = MEM32(esi + edx + 0x34);
    MEM8(eax + ebx + 1) = 0xFF;
    ecx = MEM32(edi + 0x4C);
    edx = MEM32(esi + ecx + 0x34);
    MEM8(ebx + edx) = 0xFF;
    goto loc_001B9F14;

loc_001B9EC6: ;
    ecx = 0xFFFFFF;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esp + 0x14);
    ecx = eax + eax * 2;
    ecx = edx + ecx * 8;
    edx = 0xFFFFFF;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(edi + 0x4C);
    ecx = MEM32(esi + edx + 0x34);
    MEM8(ecx + ebx + 1) = 0;
    edx = MEM32(edi + 0x4C);
    ecx = MEM32(esi + edx + 0x34);
    MEM8(ebx + ecx) = 0;
    edx = MEM32(edi + 0x4C);
    ecx = MEM32(esi + edx + 0x34);
    MEM8(ecx + eax + 1) = 0;
    edx = MEM32(edi + 0x4C);
    ecx = MEM32(esi + edx + 0x34);
    MEM8(eax + ecx) = 0;

loc_001B9F14: ;
    if (TEST_NZ(ebx, ebx)) goto loc_001B9F83; /* jne: not equal / not zero */

loc_001B9F18: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x34);
    edx = eax + eax * 2;
    eax = ecx + edx * 8;
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = eax;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    edx = edx + 0x18;
    ecx = MEM32(edx);
    eax = eax + 0x18;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edi + 0x4C);
    edx = MEM32(esi + ecx + 0x34);
    SET_LO8(eax, MEM8(eax + 0xF));
    ecx = MEM32(esp + 0x20);
    MEM8(edx + ecx + 1) = LO8(eax);
    edx = MEM32(edi + 0x4C);
    edx = MEM32(esi + edx + 0x34);
    MEM8(ecx + edx) = LO8(eax);
    goto loc_001B9F87;

loc_001B9F83: ;
    ecx = MEM32(esp + 0x20);

loc_001B9F87: ;
    SET_LO8(eax, MEM8(esp + 0x19));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B9F9E; /* jne: not equal / not zero */

loc_001B9F8F: ;
    eax = ebx + 2;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(edi + 0x4C);
    MEM16(esi + eax + 0x22) = LO16(edx);

loc_001B9F9E: ;
    xmm4 = xmm4 - xmm5; /* subss */
    xmm0 = xmm4; /* movaps */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    MEMF(esp + 0x78) = xmm0; /* movss */
    if ((xmm0 > xmm6)) goto loc_001B9C61; /* ja: above (unsigned >) */

loc_001B9FB4: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001BA088; /* jne: not equal / not zero */

loc_001B9FC0: ;
    ecx = MEM32(edi + 0x4C);
    ebx = ZX16(MEM16(esi + ecx + 0x20));
    ebx = ebx - 2;
    edx = ZX16(MEM16(esi + ecx + 0x22));
    eax = esi + ecx;
    eax = MEM32(esp + 0x34);
    ecx = 0;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x14) = ecx;
    if ((ebx == 0)) goto loc_001BA076; /* je: equal / zero */

loc_001B9FEA: ;
    eax = eax + 0xC;
    MEM32(esp + 0x20) = eax;
    eax = ebx;
    eax = eax - edx;
    MEM32(esp + 0x38) = eax;
    goto loc_001BA000;

loc_001B9FFB: ;
    edx = MEM32(esp + 0x4C);
    /* nop */

loc_001BA000: ;
    if (CMP_EQ(ecx, edx)) goto loc_001BA05E; /* je: equal / zero */

loc_001BA004: ;
    eax = eax + ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = ebx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(ebx & ebx, 0)) goto loc_001BA024; /* jge: greater or equal (signed >=) */

loc_001BA01E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001BA024: ;
    edx = MEM32(edi + 0x4C);
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    eax = MEM32(esi + edx + 0x34);
    ecx = ZX8(MEM8(eax + ecx));
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001BA040: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    edx = edx & 0xFFFFFF;
    edx = edx | eax;
    eax = MEM32(esp + 0x38);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x14);

loc_001BA05E: ;
    edx = MEM32(esp + 0x20);
    ecx++;
    edx = edx + 0x18;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = edx;
    if (CMP_B(ecx, ebx)) goto loc_001B9FFB; /* jb: below (unsigned <) */

loc_001BA072: ;
    eax = MEM32(esp + 0x34);

loc_001BA076: ;
    edx = MEM32(eax + 0xC);
    ecx = ebx + ebx * 2;
    ecx = eax + ecx * 8;
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = eax;

loc_001BA088: ;
    ebx = MEM32(esp + 0x3C);

loc_001BA08C: ;
    eax = MEM32(esp + 0x7C);
    esi = MEM32(esp + 0x74);
    ecx = MEM32(edi + 0x48);
    eax++;
    esi = esi + 0x20;
    ebx = ebx + 0x38;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x74) = esi;
    MEM32(esp + 0x3C) = ebx;
    if (CMP_L(eax, ecx)) goto loc_001B9900; /* jl: less (signed <) */

loc_001BA0B2: ;
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
 * sub_001BA0C0
 * Original: 0x001BA0C0 - 0x001BA645 (1413 bytes, 386 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA0C0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA0C0: ;
    esp = esp - 0x70;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x78);
    eax = MEM32(esi + 0x48);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_LE(eax, edx)) goto loc_001BA63E; /* jle: less or equal (signed <=) */

loc_001BA0D9: ;
    PUSH32(esp, ebx);
    eax = esp + 0x48;
    ecx = esp + 0x54;
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = eax;
    eax = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x30) = eax;
    edi = 0; /* xor self */
    goto loc_001BA100;

loc_001BA0F6: ;
    edx = 0; /* xor self */
    goto loc_001BA100;

    /* nop */

loc_001BA100: ;
    eax = MEM32(esi + 0x2C);
    ebp = MEM32(eax + 0x3C8);
    eax = MEM32(eax + 0x4B0);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 8);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    ecx = MEM32(esi + 0x4C);
    ecx = (uint32_t)(int32_t)SMEM16(edi + ecx + 6);
    ebx = MEM32(esi + 0x34);
    if (CMP_EQ(eax, edx)) goto loc_001BA2C1; /* je: equal / zero */

loc_001BA128: ;
    eax = MEM32(eax + 0x10);
    if (CMP_EQ(eax, edx)) goto loc_001BA2C1; /* je: equal / zero */

loc_001BA133: ;
    if (CMP_L(ecx, edx)) goto loc_001BA2C1; /* jl: less (signed <) */

loc_001BA13B: ;
    if (CMP_AE(ecx, MEM32(eax))) goto loc_001BA151; /* jae: above or equal (unsigned >=) */

loc_001BA13F: ;
    eax = MEM32(eax + 4);
    ecx = ecx + ecx * 2;
    eax = eax + ecx * 4;
    MEM32(esp + 0x1C) = eax;
    goto loc_001BA2C5;

loc_001BA151: ;
    MEM32(esp + 0x1C) = edx;

loc_001BA155: ;
    eax = MEM32(esp + 0x18);

loc_001BA159: ;
    if (CMP_EQ(eax, edx)) goto loc_001BA1F2; /* je: equal / zero */

loc_001BA161: ;
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    ecx = MEM32(eax + 0x1C);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_001BA1F2; /* je: equal / zero */

loc_001BA189: ;
    if (CMP_EQ(ebp, edx)) goto loc_001BA1F2; /* je: equal / zero */

loc_001BA18D: ;
    if (CMP_EQ(ebx, edx)) goto loc_001BA1F2; /* je: equal / zero */

loc_001BA191: ;
    eax = ecx;
    edx = ecx;
    ecx = esp + 0x74;
    edx = edx << 6;
    PUSH32(esp, ecx);
    eax = eax + eax * 8;
    edx = edx + ebp;
    PUSH32(esp, edx);
    eax = ebx + eax * 4;
    PUSH32(esp, 0); sub_00428CA0(); /* call 0x00428CA0 */

loc_001BA1AB: ;
    esp = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001BA1BC: ;
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x74); /* addss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x78); /* addss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x7C); /* addss */
    MEMF(esp + 0x58) = xmm0; /* movss */

loc_001BA1F2: ;
    eax = MEM32(esi + 0x4C);
    ecx = ZX16(MEM16(eax + edi + 0x22));
    edx = MEM32(eax + edi + 0x30);
    eax = eax + edi;
    ecx = ecx + ecx * 2;
    eax = edx + ecx * 8;
    MEM32(esp + 0x2C) = eax;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    /* comiss xmm0, MEMF(0x59D944) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x59D944))) goto loc_001BA2E6; /* jbe: below or equal (unsigned <=) */

loc_001BA26D: ;
    edx = MEM32(esi + 0x4C);
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(edi + edx + 0x20), LO16(ecx))) goto loc_001BA624; /* jbe: below or equal (unsigned <=) */

loc_001BA27D: ;
    eax = 0; /* xor self */
    /* nop */

loc_001BA280: ;
    edx = MEM32(esi + 0x4C);
    edx = MEM32(edi + edx + 0x30);
    MEM32(edx + eax + 0xC) = 0xFFFFFF;
    edx = MEM32(esi + 0x4C);
    edx = MEM32(edi + edx + 0x30);
    ebx = MEM32(esp + 0x50);
    edx = edx + eax;
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x54);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(esp + 0x58);
    MEM32(edx + 8) = ebx;
    edx = MEM32(esi + 0x4C);
    edx = ZX16(MEM16(edi + edx + 0x20));
    ecx++;
    eax = eax + 0x18;
    if (CMP_B(ecx, edx)) goto loc_001BA280; /* jb: below (unsigned <) */

loc_001BA2BC: ;
    goto loc_001BA624;

loc_001BA2C1: ;
    eax = MEM32(esp + 0x1C);

loc_001BA2C5: ;
    if (CMP_EQ(eax, edx)) goto loc_001BA155; /* je: equal / zero */

loc_001BA2CD: ;
    eax = MEM32(eax + 8);
    if (CMP_EQ(eax, edx)) goto loc_001BA2DD; /* je: equal / zero */

loc_001BA2D4: ;
    MEM32(esp + 0x18) = eax;
    goto loc_001BA159;

loc_001BA2DD: ;
    MEM32(esp + 0x18) = edx;
    goto loc_001BA1F2;

loc_001BA2E6: ;
    /* comiss xmm0, MEMF(0x648F38) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648F38))) goto loc_001BA624; /* jbe: below or equal (unsigned <=) */

loc_001BA2F3: ;
    eax = MEM32(esi + 0x4C);
    ecx = ZX16(MEM16(edi + eax + 0x20));
    ebx = edi + eax;
    eax = ZX16(MEM16(ebx + 0x22));
    eax = eax + 2;
    edx = 0; /* xor self */
    ecx = ecx - 2;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esp + 0x4C) = ecx;
    MEM16(ebx + 0x22) = LO16(edx);
    edx = MEM32(esi + 0x4C);
    ebp = ZX16(MEM16(edi + edx + 0x22));
    edx = 0; /* xor self */
    eax = ebp + 2;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = ebp + 4;
    xmm0 = MEMF(esi + 0x50); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x2C) = edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esi + 0x2C);
    ecx = eax + 0x84;
    PUSH32(esp, ecx);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    MEM32(esp + 0x50) = edx;
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_001BA358: ;
    xmm3 = MEMF(0x7FA21C); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D14); /* movss */
    esp = esp + 8;
    /* ucomiss xmm3, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001BA37C; /* jp: parity */

loc_001BA377: ;
    xmm1 = xmm2; /* movaps */
    goto loc_001BA383;

loc_001BA37C: ;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 / xmm3; /* divss */

loc_001BA383: ;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm1 = MEMF(0x649A74); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM8(esp + 0x11) = 0;
    MEMF(esp + 0x14) = xmm2; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001BA3DF; /* jbe: below or equal (unsigned <=) */

loc_001BA3A2: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x649A70); /* mulss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_001BA3C1; /* jbe: below or equal (unsigned <=) */

loc_001BA3B9: ;
    MEMF(esp + 0x14) = xmm2; /* movss */
    goto loc_001BA3CC;

loc_001BA3C1: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_001BA3CC; /* jbe: below or equal (unsigned <=) */

loc_001BA3C6: ;
    MEMF(esp + 0x14) = xmm4; /* movss */

loc_001BA3CC: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001BA3DB: ;
    MEM8(esp + 0x11) = LO8(eax);

loc_001BA3DF: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BA3E4: ;
    MEMF(esp + 0x38) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001BA3F9: ;
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    SET_LO8(ebx, LO8(ebx) - LO8(eax));
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BA403: ;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001BA418: ;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esp + 0x12) = LO8(ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BA426: ;
    MEMF(esp + 0x40) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001BA43B: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(esp + 0x11));
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = ZX8(MEM8(esp + 0x12));
    SET_LO8(edx, LO8(ebx));
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm4 = xmm4 * MEMF(esp + 0x44); /* mulss */
    eax = ebp + ebp * 2;
    eax = eax << 3;
    xmm3 = xmm4; /* movaps */
    edx = edx << 8;
    edx = edx | ecx;
    ecx = ZX8(MEM8(esp + 0x13));
    edx = edx << 8;
    edx = edx | ecx;
    ecx = MEM32(esi + 0x4C);
    ecx = MEM32(edi + ecx + 0x30);
    MEM32(ecx + eax + 0x24) = edx;
    edx = MEM32(esi + 0x4C);
    ecx = MEM32(edi + edx + 0x30);
    edx = MEM32(eax + ecx + 0x24);
    MEM32(eax + ecx + 0xC) = edx;
    edx = MEM32(0x5A02EC);
    eax = eax + ecx;
    eax = MEM32(0x5A02E4);
    ecx = MEM32(0x5A02E8);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esi + 0x4C);
    xmm0 = MEMF(esp + 0x68); /* movss */
    eax = eax + edi;
    MEM32(esp + 0x6C) = ecx;
    ecx = ZX16(MEM16(eax + 0x22));
    MEM32(esp + 0x70) = edx;
    edx = MEM32(eax + 0x30);
    ecx = ecx + ecx * 2;
    eax = edx + ecx * 8;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x50); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x6C); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x54); /* addss */
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x70); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x58); /* addss */
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(eax + 8) = xmm5; /* movss */
    eax = MEM32(esi + 0x4C);
    ecx = edi + eax;
    eax = ZX16(MEM16(ecx + 0x22));
    eax++;
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x30);
    eax = eax + edx * 8;
    xmm3 = xmm3 - xmm4; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x50); /* addss */
    MEMF(eax) = xmm0; /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x54); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x58); /* addss */
    MEMF(eax + 8) = xmm2; /* movss */
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(edi + ecx + 0x30);
    eax = MEM32(esp + 0x2C);
    eax = eax + eax * 2;
    eax = eax << 3;
    ecx = 0xFFFFFF;
    MEM32(edx + eax + 0x24) = ecx;
    edx = MEM32(esi + 0x4C);
    edx = MEM32(edi + edx + 0x30);
    MEM32(edx + eax + 0xC) = ecx;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(esp + 0x48);
    edx = MEM32(edi + ecx + 0x30);
    eax = eax + eax * 2;
    eax = eax << 3;
    ecx = 0x7FFFFFFF;
    MEM32(edx + eax + 0x24) = ecx;
    edx = MEM32(esi + 0x4C);
    edx = MEM32(edi + edx + 0x30);
    MEM32(edx + eax + 0xC) = ecx;
    eax = MEM32(esi + 0x4C);
    if (CMP_NE(MEM16(edi + eax + 0x22), 0)) goto loc_001BA624; /* jne: not equal / not zero */

loc_001BA5A8: ;
    ecx = eax;
    edx = ZX16(MEM16(ecx + edi + 0x22));
    eax = MEM32(esp + 0x4C);
    ecx = ecx + edi;
    ecx = MEM32(ecx + 0x30);
    edx = edx + edx * 2;
    edx = ecx + edx * 8;
    ebx = MEM32(edx);
    ecx = MEM32(esi + 0x4C);
    ecx = MEM32(edi + ecx + 0x30);
    eax = eax + eax * 2;
    eax = eax << 3;
    ecx = ecx + eax;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi + 0x4C);
    edx = edi + ecx;
    ecx = ZX16(MEM16(edx + 0x22));
    edx = MEM32(edx + 0x30);
    ecx++;
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 8;
    ebx = MEM32(ecx);
    edx = MEM32(esi + 0x4C);
    edx = MEM32(edi + edx + 0x30);
    edx = edx + eax + 0x18;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esi + 0x4C);
    ecx = edi + edx;
    edx = MEM32(ecx + 0x30);
    ecx = ZX16(MEM16(ecx + 0x22));
    ecx = ecx + ecx * 2;
    ecx = MEM32(edx + ecx * 8 + 0xC);
    MEM32(eax + edx + 0xC) = ecx;

loc_001BA624: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x48);
    eax++;
    edi = edi + 0x38;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(eax, ecx)) goto loc_001BA0F6; /* jl: less (signed <) */

loc_001BA63B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001BA63E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001BA650
 * Original: 0x001BA650 - 0x001BA72D (221 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA650: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x8C);
    eax = MEM32(esi + 0x2C);
    xmm0 = MEMF(eax + 0x264); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x1D0); /* mulss */
    xmm1 = MEMF(eax + 0x80); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x7C); /* addss */
    xmm2 = MEMF(eax + 0x78); /* movss */
    ebp = esi + 0x38;
    eax = esp + 0x40;
    ecx = esp + 0x4C;
    PUSH32(esp, edi);
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x50;
    MEM32(esp + 0x1C) = edx;
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
    MEMF(esp + 0x18) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_001BA72D(); return; } /* jbe: below or equal (unsigned <=) */

loc_001BA71A: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm2 = xmm5; /* movaps */
    g_seh_ebp = ebp; sub_001BA74F(); return; /* tail jmp 0x001BA74F */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001BAC50
 * Original: 0x001BAC50 - 0x001BAE50 (512 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BAC50(void)
{
    int _flags = 0; /* fallback flag var */

loc_001BAC50: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001BAC6C; /* je: equal / zero */

loc_001BAC60: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001BAC66: ;
    MEM32(0x771760) = esi;

loc_001BAC6C: ;
    eax = MEM32(0x77175C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_001BAC86; /* je: equal / zero */

loc_001BAC79: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001BAC80: ;
    MEM32(0x77175C) = ebx;

loc_001BAC86: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001BACA9: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001BACC2: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001BACDC; /* je: equal / zero */

loc_001BACD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001BACD6: ;
    MEM32(0x77182C) = esi;

loc_001BACDC: ;
    if (CMP_EQ(MEM32(0x771828), ebx)) goto loc_001BACF0; /* je: equal / zero */

loc_001BACE4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001BACEA: ;
    MEM32(0x771828) = ebx;

loc_001BACF0: ;
    eax = MEM32(0x771824);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_001BAD16; /* je: equal / zero */

loc_001BACFE: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BAD0A: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_001BAD16: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_001BAD36; /* je: equal / zero */

loc_001BAD1E: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BAD2A: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_001BAD36: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_001BAD4A; /* je: equal / zero */

loc_001BAD3E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001BAD44: ;
    MEM32(0x77181C) = edi;

loc_001BAD4A: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001BAD70; /* je: equal / zero */

loc_001BAD58: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BAD64: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001BAD70: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_001BAD90; /* je: equal / zero */

loc_001BAD78: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BAD84: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_001BAD90: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_001BADAE; /* je: equal / zero */

loc_001BAD98: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_001BADAE: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001BADB6: ;
    ecx = MEM32(0x7717E8);
    eax = 3;
    MEM32(0x547340) = eax;
    MEM32(0x54733C) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | edi;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(0x547330) = edi;
    MEM32(0x547334) = edi;
    MEM32(0x547350) = 4;
    if (CMP_EQ(ecx, edi)) goto loc_001BADFD; /* je: equal / zero */

loc_001BADEC: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_001BADFD: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_001BAE16; /* je: equal / zero */

loc_001BAE05: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_001BAE16: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, edi);
    MEM32(0x547384) = ebx;
    POP32(esp, ebx);
    if (CMP_EQ(eax, esi)) goto loc_001BAE4E; /* je: equal / zero */

loc_001BAE36: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BAE42: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001BAE4E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BB1A0
 * Original: 0x001BB1A0 - 0x001BB1C8 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB1A0(void)
{

loc_001BB1A0: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    MEM32(0x547340) = eax;
    MEM32(0x54733C) = eax;
    eax = 1;
    ecx = ecx | eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547350) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001BB1D0
 * Original: 0x001BB1D0 - 0x001BB3AE (478 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB1D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB1D0: ;
    eax = MEM32(ebx + 0x4C);
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_001BB3A9; /* je: equal / zero */

loc_001BB1E1: ;
    (void)0; /* cmp MEM32(ebx + 0x48), esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (CMP_LE(MEM32(ebx + 0x48), esi)) goto loc_001BB36B; /* jle: less or equal (signed <=) */

loc_001BB1EE: ;
    PUSH32(esp, ebp);
    MEM32(esp + 8) = esi;
    PUSH32(esp, edi);

loc_001BB1F4: ;
    esi = esi + 0x28;
    ebp = 2;
    /* nop */

loc_001BB200: ;
    eax = MEM32(ebx + 0x4C);
    edi = MEM32(esi + eax);
    if (TEST_Z(edi, edi)) goto loc_001BB24F; /* je: equal / zero */

loc_001BB20A: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    if (CMP_NE(ecx, 1)) goto loc_001BB242; /* jne: not equal / not zero */

loc_001BB219: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001BB232; /* jne: not equal / not zero */

loc_001BB225: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001BB232; /* je: equal / zero */

loc_001BB22C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001BB232: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0x780000)) goto loc_001BB242; /* jne: not equal / not zero */

loc_001BB23B: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_001BB240: ;
    goto loc_001BB245;

loc_001BB242: ;
    eax--;
    MEM32(edi) = eax;

loc_001BB245: ;
    edx = MEM32(ebx + 0x4C);
    MEM32(esi + edx) = 0;

loc_001BB24F: ;
    esi = esi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_001BB200; /* jne: not equal / not zero */

loc_001BB255: ;
    eax = MEM32(ebx + 0x4C);
    esi = MEM32(esp + 0xC);
    edi = MEM32(esi + eax + 0x24);
    ebp = 0; /* xor self */
    if (CMP_EQ(edi, ebp)) goto loc_001BB2AC; /* je: equal / zero */

loc_001BB266: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    if (CMP_NE(ecx, 1)) goto loc_001BB29E; /* jne: not equal / not zero */

loc_001BB275: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001BB28E; /* jne: not equal / not zero */

loc_001BB281: ;
    eax = MEM32(edi + 0x14);
    if (CMP_EQ(eax, ebp)) goto loc_001BB28E; /* je: equal / zero */

loc_001BB288: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001BB28E: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0x780000)) goto loc_001BB29E; /* jne: not equal / not zero */

loc_001BB297: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_001BB29C: ;
    goto loc_001BB2A1;

loc_001BB29E: ;
    eax--;
    MEM32(edi) = eax;

loc_001BB2A1: ;
    edx = MEM32(ebx + 0x4C);
    esi = MEM32(esp + 0xC);
    MEM32(esi + edx + 0x24) = ebp;

loc_001BB2AC: ;
    eax = MEM32(ebx + 0x4C);
    esi = esi + eax + 0x30;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebp)) goto loc_001BB2F9; /* je: equal / zero */

loc_001BB2B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001BB2BF: ;
    if (TEST_NZ(eax, eax)) goto loc_001BB2EE; /* jne: not equal / not zero */

loc_001BB2C3: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebp)) goto loc_001BB2EE; /* je: equal / zero */

loc_001BB2C9: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001BB2E9: ;
    esp = esp + 4;
    MEM32(esi) = ebp;

loc_001BB2EE: ;
    ecx = MEM32(ebx + 0x4C);
    edx = MEM32(esp + 0xC);
    MEM32(edx + ecx + 0x30) = ebp;

loc_001BB2F9: ;
    eax = MEM32(ebx + 0x4C);
    ecx = MEM32(esp + 0xC);
    esi = ecx + eax + 0x34;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebp)) goto loc_001BB34A; /* je: equal / zero */

loc_001BB30A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001BB310: ;
    if (TEST_NZ(eax, eax)) goto loc_001BB33F; /* jne: not equal / not zero */

loc_001BB314: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebp)) goto loc_001BB33F; /* je: equal / zero */

loc_001BB31A: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001BB33A: ;
    esp = esp + 4;
    MEM32(esi) = ebp;

loc_001BB33F: ;
    edx = MEM32(ebx + 0x4C);
    eax = MEM32(esp + 0xC);
    MEM32(eax + edx + 0x34) = ebp;

loc_001BB34A: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(ebx + 0x48);
    eax++;
    esi = esi + 0x38;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = esi;
    if (CMP_L(eax, ecx)) goto loc_001BB1F4; /* jl: less (signed <) */

loc_001BB369: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001BB36B: ;
    eax = MEM32(ebx + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001BB374: ;
    if (TEST_NZ(eax, eax)) goto loc_001BB3A9; /* jne: not equal / not zero */

loc_001BB378: ;
    eax = MEM32(ebx + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_001BB3A9; /* je: equal / zero */

loc_001BB37F: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001BB39F: ;
    esp = esp + 4;
    MEM32(ebx + 0x4C) = 0;

loc_001BB3A9: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001BB3B0
 * Original: 0x001BB3B0 - 0x001BB3D0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB3B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001BB1D0(); /* call 0x001BB1D0 */

loc_001BB3BA: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001BB3D0(); return; } /* jne: not equal / not zero */

loc_001BB3C3: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001BB3E0
 * Original: 0x001BB3E0 - 0x001BB3F5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB3E0(void)
{

loc_001BB3E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001BB1D0(); /* call 0x001BB1D0 */

loc_001BB3EA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001BB3F0: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BB400
 * Original: 0x001BB400 - 0x001BB433 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BB400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BB400: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    eax = MEM32(edi + 0x2C);
    ebx = MEM32(eax + 0x570);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0xCF8);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEM32(edi + 0x48) = eax;
    if (CMP_NE(eax, ebp)) { sub_001BB433(); return; } /* jne: not equal / not zero */

loc_001BB427: ;
    MEM32(edi + 0x4C) = ebp;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001BBAF0
 * Original: 0x001BBAF0 - 0x001BBC91 (417 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBAF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BBAF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x532);
    PUSH32(esp, 0x5F5254);
    edi = 2;
    PUSH32(esp, 0x70);
    MEM32(esi + 0x48) = edi;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001BBB12: ;
    ebx = 0; /* xor self */
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x48);
    esp = esp + 0x10;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(esi + 0x44) = LO8(ebx);
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_001BBC6E; /* jle: less or equal (signed <=) */

loc_001BBB2C: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    edi = 0; /* xor self */

loc_001BBB33: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001BBB41; /* jne: not equal / not zero */

loc_001BBB3C: ;
    eax = 0x96;

loc_001BBB41: ;
    ecx = MEM32(esi + 0x4C);
    eax = eax + eax + 2;
    MEM16(edi + ecx + 0x20) = LO16(eax);
    edx = MEM32(esi + 0x4C);
    MEM16(edi + edx + 0x22) = LO16(ebx);
    eax = MEM32(esi + 0x4C);
    eax = ZX16(MEM16(edi + eax + 0x20));
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax + eax * 2;
    PUSH32(esp, 0x540);
    eax = eax << 3;
    PUSH32(esp, 0x5F5254);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001BBB75: ;
    ecx = MEM32(esi + 0x4C);
    MEM32(edi + ecx + 0x30) = eax;
    edx = MEM32(esi + 0x4C);
    MEM32(edi + edx + 0x24) = ebx;
    eax = MEM32(esi + 0x4C);
    MEM32(edi + eax + 0x2C) = ebx;
    ecx = MEM32(esi + 0x4C);
    MEM32(edi + ecx + 0x28) = ebx;
    edx = MEM32(esi + 0x4C);
    MEM16(edi + edx + 6) = 0xFFFF;
    eax = MEM32(esi + 0x4C);
    xmm2 = 0.0f; /* xorps self = zero */
    MEM32(edi + eax + 0x34) = ebx;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 0x78);
    eax = eax + 0x78;
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x3C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x40) = eax;
    ecx = MEM32(esi + 0x4C);
    xmm1 = MEMF(esi + 0x5C); /* movss */
    eax = MEM32(edi + ecx + 0x30);
    xmm1 = xmm1 / MEMF(esi + 0x58); /* divss */
    edx = edi + ecx;
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(edx + 0x20), LO16(ebx) - flags set for next jcc */
    xmm0 = xmm2; /* movaps */
    if (CMP_BE(MEM16(edx + 0x20), LO16(ebx))) goto loc_001BBC51; /* jbe: below or equal (unsigned <=) */

loc_001BBBDF: ;
    eax = eax + 0x10;

loc_001BBBE2: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ebp));
    SET_LO8(edx, MEM8(ebp + 1));
    ebp = ZX8(MEM8(ebp + 2));
    edx = edx << 8;
    edx = edx | ebp;
    MEM32(eax + -4) = edx;
    edx = ecx;
    edx = edx & 1;
    if ((edx != 0)) goto loc_001BBC0B; /* jne: not equal / not zero */

loc_001BBBFD: ;
    xmm3 = MEMF(0x648D14); /* movss */
    MEMF(eax) = xmm3; /* movss */
    goto loc_001BBC0F;

loc_001BBC0B: ;
    MEMF(eax) = xmm2; /* movss */

loc_001BBC0F: ;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEMF(eax + 4) = xmm0; /* movss */
    if (CMP_NE(edx, ebx)) goto loc_001BBC22; /* jne: not equal / not zero */

loc_001BBC18: ;
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = xmm3; /* movaps */

loc_001BBC22: ;
    edx = MEM32(esi + 0x2C);
    edx = edx + 0x78;
    ebp = MEM32(edx);
    ebx = eax + -16;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    edx = MEM32(edx + 8);
    ebp = MEM32(esp + 0x18);
    MEM32(ebx + 8) = edx;
    edx = MEM32(esi + 0x4C);
    edx = ZX16(MEM16(edi + edx + 0x20));
    ecx++;
    eax = eax + 0x18;
    ebx = 0; /* xor self */
    if (CMP_B(ecx, edx)) goto loc_001BBBE2; /* jb: below (unsigned <) */

loc_001BBC51: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x48);
    eax++;
    edi = edi + 0x38;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_001BBB33; /* jl: less (signed <) */

loc_001BBC68: ;
    edi = 2;
    POP32(esp, ebp);

loc_001BBC6E: ;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x7C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x64) = 0xF8;
    MEM32(esi + 0x6C) = 4;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BBCA0
 * Original: 0x001BBCA0 - 0x001BBD00 (96 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBCA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001BBCA0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x290);
    eax = MEM32(eax + 0x570);
    xmm0 = MEMF(eax + 0x1C); /* movss */
    xmm0 = xmm0 * MEMF(0x649524); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E54); /* addss */
    xmm0 = xmm0 * MEMF(0x64909C); /* mulss */
    MEMF(ecx + 0x34) = xmm0; /* movss */
    MEMF(ecx + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = MEM32(ecx + 0x94);
    if (1 /* jp after test - parity */) { sub_001BBD00(); return; } /* jp: parity */

loc_001BBCEF: ;
    eax = eax | 0x20000;
    MEM32(ecx + 0x94) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001BBD20
 * Original: 0x001BBD20 - 0x001BBE99 (377 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBD20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001BBD20: ;
    eax = MEM32(esi + 0x570);
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001BBE91; /* je: equal / zero */

loc_001BBD37: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648E54); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    eax = eax + 0xC;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    ecx = MEM32(eax);
    PUSH32(esp, 4);
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x50) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    MEM32(esp + 0x58) = eax;
    eax = 0xFF;
    ecx = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x94) = 0x11A;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM32(esp + 0x9C) = ebx;
    MEM8(esp + 0xA0) = LO8(eax);
    MEM32(esp + 0xA4) = 0x1BBCA0;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = 0x13E6E0;
    MEM32(esp + 0xC0) = 0x13EC40;
    MEM8(esp + 0xC8) = LO8(ebx);
    MEM32(esp + 0xCC) = ebx;
    MEM8(esp + 0xD0) = LO8(ebx);
    MEM16(esp + 0xD2) = 1;
    MEM16(esp + 0xD4) = LO16(eax);
    MEM32(esp + 0x90) = 0x12C;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_001BBE84: ;
    esp = esp + 0x20;
    if (CMP_EQ(eax, ebx)) goto loc_001BBE91; /* je: equal / zero */

loc_001BBE8B: ;
    MEM32(eax + 0x290) = esi;

loc_001BBE91: ;
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_001BBEA0
 * Original: 0x001BBEA0 - 0x001BBEB2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BBEA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BBEA0: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_001BBEB2(); return; } /* je: equal / zero */

loc_001BBEAE: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001BC080
 * Original: 0x001BC080 - 0x001BC09B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC080: ;
    eax = MEM32(0x849470);
    esp = esp - 0x34;
    if (TEST_Z(eax, eax)) goto loc_001BC093; /* je: equal / zero */

loc_001BC08C: ;
    ecx = MEM32(eax + 0x44);
    if (TEST_Z(ecx, ecx)) { sub_001BC09B(); return; } /* je: equal / zero */

loc_001BC093: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_001BC0BD(); return; /* tail jmp 0x001BC0BD */

}

/**
 * sub_001BC630
 * Original: 0x001BC630 - 0x001BC7A2 (370 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC630: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = eax;
    edi = 0; /* xor self */
    if (CMP_L(ebx, 4)) goto loc_001BC753; /* jl: less (signed <) */

loc_001BC644: ;
    PUSH32(esp, esi);
    esi = ebx + -4;
    esi = esi >> 2;
    esi++;
    eax = ebp + 0x1C;
    edi = esi * 4;
    goto loc_001BC660;

    /* nop */
    /* nop */

loc_001BC660: ;
    xmm0 = MEMF(eax + -12); /* movss */
    xmm0 = xmm0 + MEMF(edx); /* addss */
    MEMF(eax + -12) = xmm0; /* movss */
    xmm0 = MEMF(eax + -8); /* movss */
    xmm0 = xmm0 + MEMF(edx + 4); /* addss */
    MEMF(eax + -8) = xmm0; /* movss */
    xmm0 = MEMF(eax + -4); /* movss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(eax + -4) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(edx); /* addss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(edx + 4); /* addss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(edx); /* addss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x40); /* movss */
    xmm0 = xmm0 + MEMF(edx + 4); /* addss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x44); /* movss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x48); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x60); /* movss */
    xmm0 = xmm0 + MEMF(edx); /* addss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x64); /* movss */
    xmm0 = xmm0 + MEMF(edx + 4); /* addss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x68); /* movss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(eax + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x6C); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(eax + 0x6C) = xmm0; /* movss */
    eax = eax + 0x90;
    esi--;
    if ((esi != 0)) goto loc_001BC660; /* jne: not equal / not zero */

loc_001BC752: ;
    POP32(esp, esi);

loc_001BC753: ;
    if (CMP_GE(edi, ebx)) goto loc_001BC79E; /* jge: greater or equal (signed >=) */

loc_001BC757: ;
    eax = edi + edi * 8;
    eax = ebp + eax * 4 + 0x1C;
    ebx = ebx - edi;

loc_001BC760: ;
    xmm0 = MEMF(eax + -12); /* movss */
    xmm0 = xmm0 + MEMF(edx); /* addss */
    MEMF(eax + -12) = xmm0; /* movss */
    xmm0 = MEMF(edx + 4); /* movss */
    xmm0 = xmm0 + MEMF(eax + -8); /* addss */
    MEMF(eax + -8) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 + MEMF(eax + -4); /* addss */
    MEMF(eax + -4) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 0x24;
    ebx--;
    if ((ebx != 0)) goto loc_001BC760; /* jne: not equal / not zero */

loc_001BC79E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BC7B0
 * Original: 0x001BC7B0 - 0x001BCBB7 (1031 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC7B0: ;
    eax = MEM32(0x6B8934);
    ecx = MEM32(0x771760);
    esp = esp - 0x10;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001BC7D4; /* je: equal / zero */

loc_001BC7C8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001BC7CE: ;
    MEM32(0x771760) = esi;

loc_001BC7D4: ;
    eax = MEM32(0x77175C);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_001BC7EC; /* je: equal / zero */

loc_001BC7DF: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001BC7E6: ;
    MEM32(0x77175C) = edi;

loc_001BC7EC: ;
    ebp = MEM32(esp + 0x28);
    eax = MEM32(0x84A13C);
    esi = LO16(ebp);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001BC811: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001BC82A: ;
    eax = MEM32(0x84A13C);
    ecx = MEM32(0x5499F0);
    MEM32(0x549B68) = edi;
    xmm0 = MEMF(esi + eax + 0xB8); /* movss */
    xmm1 = MEMF(esi + eax + 0xB4); /* movss */
    xmm2 = MEMF(esi + eax + 0xB0); /* movss */
    ecx = ecx | 0x2000;
    MEM32(0x5499F0) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    edx = esp + 0x10;
    ecx = 0x9C;
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001BC890: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001BC8AA; /* je: equal / zero */

loc_001BC89E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001BC8A4: ;
    MEM32(0x77182C) = esi;

loc_001BC8AA: ;
    if (CMP_EQ(MEM32(0x771828), edi)) goto loc_001BC8BE; /* je: equal / zero */

loc_001BC8B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001BC8B8: ;
    MEM32(0x771828) = edi;

loc_001BC8BE: ;
    eax = MEM32(0x771824);
    ebx = 1;
    if (CMP_EQ(eax, ebx)) goto loc_001BC8E4; /* je: equal / zero */

loc_001BC8CC: ;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BC8D8: ;
    MEM32(0x549AE4) = ebx;
    MEM32(0x771824) = ebx;

loc_001BC8E4: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_001BC904; /* je: equal / zero */

loc_001BC8EC: ;
    edx = ebx;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BC8F8: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_001BC904: ;
    edx = ebx;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BC910: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x549AEC) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BC925: ;
    (void)0; /* cmp MEM32(0x77181C), ebx - flags set for next jcc */
    MEM32(0x549AE0) = 0x206;
    if (CMP_EQ(MEM32(0x77181C), ebx)) goto loc_001BC943; /* je: equal / zero */

loc_001BC937: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001BC93D: ;
    MEM32(0x77181C) = ebx;

loc_001BC943: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001BC969; /* je: equal / zero */

loc_001BC951: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BC95D: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001BC969: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_001BC989; /* je: equal / zero */

loc_001BC971: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BC97D: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_001BC989: ;
    if (CMP_EQ(MEM32(0x771810), edi)) goto loc_001BC9A7; /* je: equal / zero */

loc_001BC991: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = edi;
    MEM32(0x771810) = edi;

loc_001BC9A7: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    if (CMP_EQ(eax, esi)) goto loc_001BC9CD; /* je: equal / zero */

loc_001BC9B5: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BC9C1: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001BC9CD: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_001BC9F3; /* je: equal / zero */

loc_001BC9DB: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BC9E7: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001BC9F3: ;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001BC9FB: ;
    PUSH32(esp, ebx);
    esi = ebx;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001BCA03: ;
    eax = MEM32(0x5499F0);
    ecx = MEM32(0x7717E4);
    esi = 2;
    eax = eax | 3;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(0x547330) = ebx;
    MEM32(0x547334) = ebx;
    MEM32(0x5473B0) = ebx;
    MEM32(0x5473B4) = ebx;
    if (CMP_EQ(ecx, esi)) goto loc_001BCA43; /* je: equal / zero */

loc_001BCA32: ;
    eax = eax | 0x800;
    MEM32(0x547360) = esi;
    MEM32(0x7717E4) = esi;

loc_001BCA43: ;
    if (CMP_EQ(MEM32(0x7717C4), esi)) goto loc_001BCA5C; /* je: equal / zero */

loc_001BCA4B: ;
    eax = eax | 0x800;
    MEM32(0x547368) = esi;
    MEM32(0x7717C4) = esi;

loc_001BCA5C: ;
    if (CMP_EQ(MEM32(0x7717B4), edi)) goto loc_001BCA75; /* je: equal / zero */

loc_001BCA64: ;
    eax = eax | 0x800;
    MEM32(0x54736C) = edi;
    MEM32(0x7717B4) = edi;

loc_001BCA75: ;
    edx = MEM32(0x7717A4);
    ecx = 4;
    if (CMP_EQ(edx, ecx)) goto loc_001BCA95; /* je: equal / zero */

loc_001BCA84: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ecx;
    MEM32(0x7717A4) = ecx;

loc_001BCA95: ;
    if (CMP_EQ(MEM32(0x771784), esi)) goto loc_001BCAAE; /* je: equal / zero */

loc_001BCA9D: ;
    eax = eax | 0x800;
    MEM32(0x547378) = esi;
    MEM32(0x771784) = esi;

loc_001BCAAE: ;
    if (CMP_EQ(MEM32(0x771774), edi)) goto loc_001BCAC7; /* je: equal / zero */

loc_001BCAB6: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = edi;
    MEM32(0x771774) = edi;

loc_001BCAC7: ;
    if (CMP_EQ(MEM32(0x7717E8), ecx)) goto loc_001BCAE0; /* je: equal / zero */

loc_001BCACF: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = ecx;
    MEM32(0x7717E8) = ecx;

loc_001BCAE0: ;
    if (CMP_EQ(MEM32(0x7717C8), esi)) goto loc_001BCAF9; /* je: equal / zero */

loc_001BCAE8: ;
    eax = eax | 0x800;
    MEM32(0x5473E8) = esi;
    MEM32(0x7717C8) = esi;

loc_001BCAF9: ;
    if (CMP_EQ(MEM32(0x7717B8), ebx)) goto loc_001BCB12; /* je: equal / zero */

loc_001BCB01: ;
    eax = eax | 0x800;
    MEM32(0x5473EC) = ebx;
    MEM32(0x7717B8) = ebx;

loc_001BCB12: ;
    edx = MEM32(0x7717A8);
    ecx = 0x17;
    if (CMP_EQ(edx, ecx)) goto loc_001BCB32; /* je: equal / zero */

loc_001BCB21: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = ecx;
    MEM32(0x7717A8) = ecx;

loc_001BCB32: ;
    ecx = MEM32(0x771788);
    eax = eax | 0x800;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(0x5473F4) = ebx;
    if (CMP_EQ(ecx, esi)) goto loc_001BCB58; /* je: equal / zero */

loc_001BCB47: ;
    eax = eax | 0x800;
    MEM32(0x5473F8) = esi;
    MEM32(0x771788) = esi;

loc_001BCB58: ;
    if (CMP_EQ(MEM32(0x771778), edi)) goto loc_001BCB71; /* je: equal / zero */

loc_001BCB60: ;
    eax = eax | 0x800;
    MEM32(0x5473FC) = edi;
    MEM32(0x771778) = edi;

loc_001BCB71: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = edi;
    PUSH32(esp, ebx);
    edi = 0x7717EC;
    edx = 0xC;
    eax = esi;
    PUSH32(esp, 0); sub_000DB3B0(); /* call 0x000DB3B0 */

loc_001BCB93: ;
    PUSH32(esp, ebx);
    edi = 0x7717AC;
    edx = 0x10;
    eax = esi;
    PUSH32(esp, 0); sub_000DB3B0(); /* call 0x000DB3B0 */

loc_001BCBA5: ;
    esp = esp + 8;
    eax = ebp;
    PUSH32(esp, 0); sub_00083F30(); /* call 0x00083F30 */

loc_001BCBAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001BCBC0
 * Original: 0x001BCBC0 - 0x001BCD08 (328 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCBC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001BCBC0: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = MEM32(eax + ecx + 4);
    SET_LO8(eax, MEM8(edx + 0x7FA));
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_001BCD03; /* jne: not equal / not zero */

loc_001BCBE9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    xmm0 = MEMF(esi + 0x30); /* movss */
    PUSH32(esp, edi);
    edx = esp + 0xC;
    ecx = 0x9D;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_001BCC08: ;
    edi = MEM32(esi + 0x2C);
    if (CMP_NE(edi, ebx)) goto loc_001BCC1D; /* jne: not equal / not zero */

loc_001BCC0F: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001BCC17: ;
    MEM32(0x771764) = ebx;

loc_001BCC1D: ;
    if (CMP_EQ(MEM32(0x771764), edi)) goto loc_001BCC34; /* je: equal / zero */

loc_001BCC25: ;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_001BCC2E: ;
    MEM32(0x771764) = edi;

loc_001BCC34: ;
    edi = MEM32(esi + 0x2C);
    if (CMP_NE(edi, ebx)) goto loc_001BCC4C; /* jne: not equal / not zero */

loc_001BCC3B: ;
    PUSH32(esp, ebx);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001BCC46: ;
    MEM32(0x771768) = ebx;

loc_001BCC4C: ;
    if (CMP_EQ(MEM32(0x771768), edi)) goto loc_001BCC66; /* je: equal / zero */

loc_001BCC54: ;
    eax = 1;
    ecx = edi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_001BCC60: ;
    MEM32(0x771768) = edi;

loc_001BCC66: ;
    if (CMP_EQ(MEM32(0x77176C), ebx)) goto loc_001BCC7F; /* je: equal / zero */

loc_001BCC6E: ;
    PUSH32(esp, ebx);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001BCC79: ;
    MEM32(0x77176C) = ebx;

loc_001BCC7F: ;
    if (CMP_EQ(MEM32(0x771770), ebx)) goto loc_001BCC98; /* je: equal / zero */

loc_001BCC87: ;
    PUSH32(esp, ebx);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001BCC92: ;
    MEM32(0x771770) = ebx;

loc_001BCC98: ;
    PUSH32(esp, 0x24);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_001BCCA7: ;
    PUSH32(esp, 0x24);
    ecx = esi + 0x16C;
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_001BCCB9: ;
    PUSH32(esp, 0x24);
    edx = esi + 0x28C;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_001BCCCB: ;
    PUSH32(esp, 0x24);
    eax = esi + 0x3AC;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_001BCCDD: ;
    PUSH32(esp, 0x24);
    ecx = esi + 0x4CC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_001BCCEF: ;
    PUSH32(esp, 0x24);
    esi = esi + 0x70C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_001BCD01: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001BCD03: ;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001BCD10
 * Original: 0x001BCD10 - 0x001BCD2E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCD10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BCD10: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0); sub_001BCD50(); /* call 0x001BCD50 */

loc_001BCD19: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001BCD2E(); return; } /* jne: not equal / not zero */

loc_001BCD22: ;
    edx = 1;
    eax = ecx;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001BCD30
 * Original: 0x001BCD30 - 0x001BCD42 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCD30(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BCD30: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0); sub_001BCD50(); /* call 0x001BCD50 */

loc_001BCD39: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_000DAE40(); return; /* tail jmp 0x000DAE40 */

}

/**
 * sub_001BCD50
 * Original: 0x001BCD50 - 0x001BCDB9 (105 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCD50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001BCD50: ;
    SET_LO8(eax, MEM8(ecx + 0x959));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001BCDA7; /* je: equal / zero */

loc_001BCD5A: ;
    xmm0 = MEMF(ecx + 0x38); /* movss */
    xmm1 = MEMF(ecx + 0x34); /* movss */
    edx = MEM32(ecx + 0x44);
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x3C);
    if (1 /* jp after test - parity */) goto loc_001BCD83; /* jp: parity */

loc_001BCD78: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_001BCD83: ;
    MEM32(0x771CE0) = edi;
    POP32(esp, edi);
    MEM32(0x771CDC) = esi;
    MEMF(0x771CE8) = xmm1; /* movss */
    MEMF(0x771CE4) = xmm0; /* movss */
    MEM32(0x771CD8) = edx;
    POP32(esp, esi);

loc_001BCDA7: ;
    SET_LO8(eax, MEM8(ecx + 0x958));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001BCDB8; /* je: equal / zero */

loc_001BCDB1: ;
    MEM8(0x76F518) = 0;

loc_001BCDB8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BCDC0
 * Original: 0x001BCDC0 - 0x001BCFDE (542 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCDC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001BCDC0: ;
    esp = esp - 0x10;
    eax = edi + 0x4C;
    edx = edi + 0x16C;
    ecx = ZX8(LO8(ecx));
    PUSH32(esp, esi);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = edx;
    eax = edi + 0x28C;
    edx = edi + 0x3AC;
    ecx = ecx << 0x18;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = edx;
    esi = 0; /* xor self */
    PUSH32(esp, ebx);

loc_001BCDF2: ;
    edx = MEM32(esp + esi * 4 + 8);
    eax = MEM32(edx + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_001BCE0D; /* jne: not equal / not zero */

loc_001BCDFD: ;
    eax = edx;
    ebx = MEM32(eax + 0xC);
    ebx = ebx & 0xFFFFFF;
    ebx = ebx | ecx;
    MEM32(eax + 0xC) = ebx;

loc_001BCE0D: ;
    eax = MEM32(edx + 0x44);
    if (TEST_NZ(eax, eax)) goto loc_001BCE26; /* jne: not equal / not zero */

loc_001BCE14: ;
    eax = MEM32(esp + esi * 4 + 8);
    ebx = MEM32(eax + 0x30);
    ebx = ebx & 0xFFFFFF;
    ebx = ebx | ecx;
    MEM32(eax + 0x30) = ebx;

loc_001BCE26: ;
    eax = MEM32(edx + 0x68);
    if (TEST_NZ(eax, eax)) goto loc_001BCE3F; /* jne: not equal / not zero */

loc_001BCE2D: ;
    eax = MEM32(esp + esi * 4 + 8);
    ebx = MEM32(eax + 0x54);
    ebx = ebx & 0xFFFFFF;
    ebx = ebx | ecx;
    MEM32(eax + 0x54) = ebx;

loc_001BCE3F: ;
    eax = MEM32(edx + 0x8C);
    if (TEST_NZ(eax, eax)) goto loc_001BCE5B; /* jne: not equal / not zero */

loc_001BCE49: ;
    eax = MEM32(esp + esi * 4 + 8);
    ebx = MEM32(eax + 0x78);
    ebx = ebx & 0xFFFFFF;
    ebx = ebx | ecx;
    MEM32(eax + 0x78) = ebx;

loc_001BCE5B: ;
    eax = MEM32(edx + 0xB0);
    if (TEST_NZ(eax, eax)) goto loc_001BCE7D; /* jne: not equal / not zero */

loc_001BCE65: ;
    eax = MEM32(esp + esi * 4 + 8);
    ebx = MEM32(eax + 0x9C);
    ebx = ebx & 0xFFFFFF;
    ebx = ebx | ecx;
    MEM32(eax + 0x9C) = ebx;

loc_001BCE7D: ;
    eax = MEM32(edx + 0xD4);
    if (TEST_NZ(eax, eax)) goto loc_001BCE9F; /* jne: not equal / not zero */

loc_001BCE87: ;
    eax = MEM32(esp + esi * 4 + 8);
    ebx = MEM32(eax + 0xC0);
    ebx = ebx & 0xFFFFFF;
    ebx = ebx | ecx;
    MEM32(eax + 0xC0) = ebx;

loc_001BCE9F: ;
    eax = MEM32(edx + 0xF8);
    if (TEST_NZ(eax, eax)) goto loc_001BCEC1; /* jne: not equal / not zero */

loc_001BCEA9: ;
    eax = MEM32(esp + esi * 4 + 8);
    ebx = MEM32(eax + 0xE4);
    ebx = ebx & 0xFFFFFF;
    ebx = ebx | ecx;
    MEM32(eax + 0xE4) = ebx;

loc_001BCEC1: ;
    eax = MEM32(edx + 0x11C);
    if (TEST_NZ(eax, eax)) goto loc_001BCEE3; /* jne: not equal / not zero */

loc_001BCECB: ;
    eax = MEM32(esp + esi * 4 + 8);
    edx = MEM32(eax + 0x108);
    edx = edx & 0xFFFFFF;
    edx = edx | ecx;
    MEM32(eax + 0x108) = edx;

loc_001BCEE3: ;
    esi++;
    if (CMP_L(esi, 4)) goto loc_001BCDF2; /* jl: less (signed <) */

loc_001BCEED: ;
    eax = edi + 0x4D8;
    edx = 4;
    POP32(esp, ebx);
    /* nop */

loc_001BCF00: ;
    esi = MEM32(eax + 0x14);
    if (TEST_NZ(esi, esi)) goto loc_001BCF13; /* jne: not equal / not zero */

loc_001BCF07: ;
    esi = MEM32(eax);
    esi = esi & 0xFFFFFF;
    esi = esi | ecx;
    MEM32(eax) = esi;

loc_001BCF13: ;
    esi = MEM32(eax + 0x254);
    if (TEST_NZ(esi, esi)) goto loc_001BCF31; /* jne: not equal / not zero */

loc_001BCF1D: ;
    esi = MEM32(eax + 0x240);
    esi = esi & 0xFFFFFF;
    esi = esi | ecx;
    MEM32(eax + 0x240) = esi;

loc_001BCF31: ;
    esi = MEM32(eax + 0x38);
    if (TEST_NZ(esi, esi)) goto loc_001BCF46; /* jne: not equal / not zero */

loc_001BCF38: ;
    esi = MEM32(eax + 0x24);
    esi = esi & 0xFFFFFF;
    esi = esi | ecx;
    MEM32(eax + 0x24) = esi;

loc_001BCF46: ;
    esi = MEM32(eax + 0x278);
    if (TEST_NZ(esi, esi)) goto loc_001BCF64; /* jne: not equal / not zero */

loc_001BCF50: ;
    esi = MEM32(eax + 0x264);
    esi = esi & 0xFFFFFF;
    esi = esi | ecx;
    MEM32(eax + 0x264) = esi;

loc_001BCF64: ;
    esi = MEM32(eax + 0x5C);
    if (TEST_NZ(esi, esi)) goto loc_001BCF79; /* jne: not equal / not zero */

loc_001BCF6B: ;
    esi = MEM32(eax + 0x48);
    esi = esi & 0xFFFFFF;
    esi = esi | ecx;
    MEM32(eax + 0x48) = esi;

loc_001BCF79: ;
    esi = MEM32(eax + 0x29C);
    if (TEST_NZ(esi, esi)) goto loc_001BCF97; /* jne: not equal / not zero */

loc_001BCF83: ;
    esi = MEM32(eax + 0x288);
    esi = esi & 0xFFFFFF;
    esi = esi | ecx;
    MEM32(eax + 0x288) = esi;

loc_001BCF97: ;
    esi = MEM32(eax + 0x80);
    if (TEST_NZ(esi, esi)) goto loc_001BCFAF; /* jne: not equal / not zero */

loc_001BCFA1: ;
    esi = MEM32(eax + 0x6C);
    esi = esi & 0xFFFFFF;
    esi = esi | ecx;
    MEM32(eax + 0x6C) = esi;

loc_001BCFAF: ;
    esi = MEM32(eax + 0x2C0);
    if (TEST_NZ(esi, esi)) goto loc_001BCFCD; /* jne: not equal / not zero */

loc_001BCFB9: ;
    esi = MEM32(eax + 0x2AC);
    esi = esi & 0xFFFFFF;
    esi = esi | ecx;
    MEM32(eax + 0x2AC) = esi;

loc_001BCFCD: ;
    eax = eax + 0x90;
    edx--;
    if ((edx != 0)) goto loc_001BCF00; /* jne: not equal / not zero */

loc_001BCFD9: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001BCFE0
 * Original: 0x001BCFE0 - 0x001BD05D (125 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCFE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BCFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esp + 8));
    eax = ZX8(LO8(eax));
    edx = 8;
    PUSH32(esp, edi);
    SET_LO8(ecx, MEM8(esp + 0x10));
    ecx = ecx << 8;
    ecx = ecx | eax;
    eax = esi + 0x178;

loc_001BD001: ;
    edi = MEM32(eax + -288);
    edi = edi & 0xFF000000u;
    edi = edi | ecx;
    MEM32(eax + -288) = edi;
    edi = MEM32(eax);
    edi = edi & 0xFF000000u;
    edi = edi | ecx;
    MEM32(eax) = edi;
    edi = MEM32(eax + 0x120);
    edi = edi & 0xFF000000u;
    edi = edi | ecx;
    MEM32(eax + 0x120) = edi;
    edi = MEM32(eax + 0x240);
    edi = edi & 0xFF000000u;
    edi = edi | ecx;
    MEM32(eax + 0x240) = edi;
    eax = eax + 0x24;
    edx--;
    if ((edx != 0)) goto loc_001BD001; /* jne: not equal / not zero */

loc_001BD04F: ;
    eax = esi + 0x718;
    edx = 0x10;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_001BD060(); return; /* tail jmp 0x001BD060 */

}

/**
 * sub_001BD090
 * Original: 0x001BD090 - 0x001BD10C (124 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD090(void)
{
    float xmm0;

loc_001BD090: ;
    xmm0 = MEMF(0x648D18); /* movss */
    eax = 0; /* xor self */
    MEMF(0x775B18) = xmm0; /* movss */
    MEMF(0x775B14) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(0x775B10) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(0x775B22) = LO8(eax);
    MEM8(0x775AF2) = LO8(eax);
    MEM16(0x775AF4) = 0x258;
    MEMF(0x775B08) = xmm0; /* movss */
    MEMF(0x775B0C) = xmm0; /* movss */
    MEMF(0x775B00) = xmm0; /* movss */
    MEMF(0x775B04) = xmm0; /* movss */
    MEMF(0x775AF8) = xmm0; /* movss */
    MEMF(0x775AFC) = xmm0; /* movss */
    MEM16(0x775AF0) = LO16(eax);
    MEM32(0x84946C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001BD110
 * Original: 0x001BD110 - 0x001BD1EB (219 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD110(void)
{
    int _flags = 0; /* fallback flag var */

loc_001BD110: ;
    if (CMP_NE(eax, 2)) { sub_001BD1EB(); return; } /* jne: not equal / not zero */

loc_001BD119: ;
    eax = MEM32(0x84946C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x775B22) = LO8(ebx);
    MEM8(0x775AF2) = LO8(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_001BD1DB; /* je: equal / zero */

loc_001BD135: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* nop */

loc_001BD140: ;
    eax = MEM32(0x84946C);
    esi = MEM32(edi + eax);
    if (CMP_EQ(esi, ebx)) goto loc_001BD18C; /* je: equal / zero */

loc_001BD14C: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_001BD183; /* jne: not equal / not zero */

loc_001BD154: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001BD15B: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001BD183; /* jl: less (signed <) */

loc_001BD162: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_001BD177; /* je: equal / zero */

loc_001BD16F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001BD172: ;
    esp = esp + 4;
    goto loc_001BD183;

loc_001BD177: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001BD183: ;
    ecx = MEM32(0x84946C);
    MEM32(edi + ecx) = ebx;

loc_001BD18C: ;
    edi = edi + 4;
    if (CMP_L(edi, 0x578)) goto loc_001BD140; /* jl: less (signed <) */

loc_001BD197: ;
    edx = MEM32(0x84946C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001BD1A3: ;
    if (TEST_NZ(eax, eax)) goto loc_001BD1D3; /* jne: not equal / not zero */

loc_001BD1A7: ;
    eax = MEM32(0x84946C);
    if (CMP_EQ(eax, ebx)) goto loc_001BD1D3; /* je: equal / zero */

loc_001BD1B0: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001BD1D0: ;
    esp = esp + 4;

loc_001BD1D3: ;
    POP32(esp, edi);
    MEM32(0x84946C) = ebx;
    POP32(esp, esi);

loc_001BD1DB: ;
    MEM16(0x775AF4) = LO16(ebx);
    MEM16(0x775AF0) = LO16(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BD230
 * Original: 0x001BD230 - 0x001BD649 (1049 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BD230: ;
    xmm5 = MEMF(0x775B18); /* movss */
    xmm5 = xmm5 - MEMF(0x7FA21C); /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    esp = esp - 8;
    /* comiss xmm7, xmm5 - sets EFLAGS */
    PUSH32(esp, esi);
    esi = eax;
    if ((xmm7 < xmm5)) goto loc_001BD425; /* jb: below (unsigned <) */

loc_001BD252: ;
    xmm0 = MEMF(0x775AFC); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x775AF8); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 4)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm6 = MEMF(0x648D3C); /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BD293: ;
    /* comiss xmm6, MEMF(esp + 8) - sets EFLAGS */
    xmm1 = MEMF(0x775B00); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm0 = MEMF(0x775B04); /* movss */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    if ((xmm6 <= MEMF(esp + 8))) goto loc_001BD36A; /* jbe: below or equal (unsigned <=) */

loc_001BD2B9: ;
    xmm5 = xmm5 + MEMF(0x648CF0); /* addss */
    eax = 0x775B00;
    (void)0; /* cmp eax, 0x775B08 - flags set for next jcc */
    MEMF(0x775B14) = xmm5; /* movss */
    if (CMP_EQ(eax, 0x775B08)) goto loc_001BD2E5; /* je: equal / zero */

loc_001BD2D5: ;
    MEMF(0x775B08) = xmm1; /* movss */
    MEMF(0x775B0C) = xmm0; /* movss */

loc_001BD2E5: ;
    ecx = 0x775B00;
    if (CMP_EQ(ecx, 0x775AF8)) goto loc_001BD302; /* je: equal / zero */

loc_001BD2F2: ;
    MEMF(0x775AF8) = xmm1; /* movss */
    MEMF(0x775AFC) = xmm0; /* movss */

loc_001BD302: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BD307: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(0x775B00) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001BD31C: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001BD333; /* je: equal / zero */

loc_001BD320: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(0x775B00); /* subss */
    MEMF(0x775B00) = xmm0; /* movss */

loc_001BD333: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BD338: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(0x775B04) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001BD34D: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001BD425; /* je: equal / zero */

loc_001BD355: ;
    xmm7 = xmm7 - MEMF(0x775B04); /* subss */
    MEMF(0x775B04) = xmm7; /* movss */
    goto loc_001BD425;

loc_001BD36A: ;
    xmm5 = xmm5 + MEMF(0x648CF4); /* addss */
    edx = 0x775B00;
    (void)0; /* cmp edx, 0x775B08 - flags set for next jcc */
    MEMF(0x775B14) = xmm5; /* movss */
    if (CMP_EQ(edx, 0x775B08)) goto loc_001BD397; /* je: equal / zero */

loc_001BD387: ;
    MEMF(0x775B08) = xmm1; /* movss */
    MEMF(0x775B0C) = xmm0; /* movss */

loc_001BD397: ;
    eax = 0x775B00;
    if (CMP_EQ(eax, 0x775AF8)) goto loc_001BD3B3; /* je: equal / zero */

loc_001BD3A3: ;
    MEMF(0x775AF8) = xmm1; /* movss */
    MEMF(0x775AFC) = xmm0; /* movss */

loc_001BD3B3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BD3B8: ;
    xmm6 = MEMF(0x64AD44); /* movss */
    xmm7 = MEMF(0x648E54); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(0x775B00) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001BD3DD: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001BD3F4; /* je: equal / zero */

loc_001BD3E1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(0x775B00); /* subss */
    MEMF(0x775B00) = xmm0; /* movss */

loc_001BD3F4: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BD3F9: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(0x775B04) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001BD40E: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001BD425; /* je: equal / zero */

loc_001BD412: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(0x775B04); /* subss */
    MEMF(0x775B04) = xmm0; /* movss */

loc_001BD425: ;
    eax = (uint32_t)(int32_t)SMEM8(0x775AF2);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEMF(0x775B18) = xmm5; /* movss */
    if (CMP_A(eax, 4)) goto loc_001BD5EC; /* ja: above (unsigned >) */

loc_001BD440: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1BD650); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001BD447u) goto loc_001BD447;
    if (_jt == 0x001BD4D4u) goto loc_001BD4D4;
    if (_jt == 0x001BD52Du) goto loc_001BD52D;
    if (_jt == 0x001BD58Fu) goto loc_001BD58F;
    if (_jt == 0x001BD5CAu) goto loc_001BD5CA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001BD447: ;
    SET_LO8(eax, MEM8(0x775B22));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001BD5EC; /* je: equal / zero */

loc_001BD454: ;
    if (CMP_EQ(LO8(eax), 4)) goto loc_001BD482; /* je: equal / zero */

loc_001BD458: ;
    SET_LO16(eax, MEM16(0x775AF4));
    if (CMP_GE(LO16(eax), 0x258)) goto loc_001BD482; /* jge: greater or equal (signed >=) */

loc_001BD464: ;
    if (CMP_NE(MEM8(esi + 0x76F0E0), LO8(ebx))) goto loc_001BD5EC; /* jne: not equal / not zero */

loc_001BD470: ;
    SET_LO16(eax, LO16(eax) + MEM16(0x7FA20C));
    MEM16(0x775AF4) = LO16(eax);
    goto loc_001BD5EC;

loc_001BD482: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x172);
    PUSH32(esp, 0x5F5280);
    PUSH32(esp, 0x578);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001BD498: ;
    esp = esp + 0x10;
    MEM32(0x84946C) = eax;
    eax = 0; /* xor self */

loc_001BD4A2: ;
    ecx = MEM32(0x84946C);
    MEM32(eax + ecx) = ebx;
    eax = eax + 4;
    if (CMP_L(eax, 0x578)) goto loc_001BD4A2; /* jl: less (signed <) */

loc_001BD4B5: ;
    if (CMP_EQ(MEM32(0x84946C), ebx)) goto loc_001BD5EC; /* je: equal / zero */

loc_001BD4C1: ;
    MEM8(0x775AF2) = 1;
    MEM16(0x775AF4) = LO16(ebx);
    goto loc_001BD5EC;

loc_001BD4D4: ;
    if (CMP_NE(MEM16(0x775AF0), 0x15E)) goto loc_001BD4F2; /* jne: not equal / not zero */

loc_001BD4DF: ;
    MEM8(0x775AF2) = 2;
    MEM16(0x775AF4) = LO16(ebx);
    goto loc_001BD5EC;

loc_001BD4F2: ;
    esi = 4;
    goto loc_001BD500;

    /* nop */

loc_001BD500: ;
    if (CMP_EQ(MEM16(0x775AF0), 0x15E)) goto loc_001BD517; /* je: equal / zero */

loc_001BD50B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001BD670(); /* call 0x001BD670 */

loc_001BD514: ;
    esp = esp + 8;

loc_001BD517: ;
    esi--;
    if ((esi != 0)) goto loc_001BD500; /* jne: not equal / not zero */

loc_001BD51A: ;
    SET_LO16(edx, MEM16(0x7FA20C));
    MEM16(0x775AF4) = MEM16(0x775AF4) + LO16(edx);
    goto loc_001BD5EC;

loc_001BD52D: ;
    SET_LO8(eax, MEM8(0x775B22));
    if (CMP_NE(LO8(eax), 1)) goto loc_001BD54E; /* jne: not equal / not zero */

loc_001BD536: ;
    SET_LO16(eax, MEM16(0x775AF0));
    MEM8(0x775AF2) = 4;
    MEM16(0x775AF4) = LO16(eax);
    goto loc_001BD5EC;

loc_001BD54E: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001BD57F; /* je: equal / zero */

loc_001BD552: ;
    SET_LO16(ecx, MEM16(0x775AF4));
    if (CMP_GE(LO16(ecx), 0x78)) goto loc_001BD57F; /* jge: greater or equal (signed >=) */

loc_001BD55F: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_001BD5EC; /* jne: not equal / not zero */

loc_001BD567: ;
    if (CMP_NE(MEM8(esi + 0x76F0E0), LO8(ebx))) goto loc_001BD5EC; /* jne: not equal / not zero */

loc_001BD56F: ;
    SET_LO16(ecx, LO16(ecx) + MEM16(0x7FA20C));
    MEM16(0x775AF4) = LO16(ecx);
    goto loc_001BD5EC;

loc_001BD57F: ;
    SET_LO16(ecx, MEM16(0x775AF0));
    MEM16(0x775AF4) = LO16(ecx);
    goto loc_001BD5E5;

loc_001BD58F: ;
    if (CMP_NE(MEM16(0x775AF0), LO16(ebx))) goto loc_001BD5BA; /* jne: not equal / not zero */

loc_001BD598: ;
    PUSH32(esp, 0x84946C);
    MEM8(0x775AF2) = LO8(ebx);
    MEM16(0x775AF4) = LO16(ebx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001BD5AF: ;
    esp = esp + 4;
    MEM32(0x84946C) = ebx;
    goto loc_001BD5EC;

loc_001BD5BA: ;
    esi = 4;
    /* nop */

loc_001BD5C0: ;
    PUSH32(esp, 0); sub_001BDB10(); /* call 0x001BDB10 */

loc_001BD5C5: ;
    esi--;
    if ((esi != 0)) goto loc_001BD5C0; /* jne: not equal / not zero */

loc_001BD5C8: ;
    goto loc_001BD5EC;

loc_001BD5CA: ;
    eax = (uint32_t)(int32_t)SMEM16(0x775AF0);
    if (CMP_LE(eax, ebx)) goto loc_001BD5DF; /* jle: less or equal (signed <=) */

loc_001BD5D5: ;
    esi = eax;

loc_001BD5D7: ;
    PUSH32(esp, 0); sub_001BDB10(); /* call 0x001BDB10 */

loc_001BD5DC: ;
    esi--;
    if ((esi != 0)) goto loc_001BD5D7; /* jne: not equal / not zero */

loc_001BD5DF: ;
    MEM8(0x775B22) = LO8(ebx);

loc_001BD5E5: ;
    MEM8(0x775AF2) = 3;

loc_001BD5EC: ;
    SET_LO16(esi, MEM16(0x775AF0));
    (void)0; /* cmp LO16(esi), LO16(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(LO16(esi), LO16(ebx))) { sub_001BD649(); return; } /* je: equal / zero */

loc_001BD5F9: ;
    eax = MEM32(0x8470DC);
    ecx = (int32_t)MEMF(eax + 0x334); /* cvttss2si */
    edx = (int32_t)MEMF(eax + 0x338); /* cvttss2si */
    eax = (int32_t)MEMF(eax + 0x330); /* cvttss2si */
    MEM16(0x775B1C) = LO16(eax);
    MEM16(0x775B1E) = LO16(ecx);
    ecx = SX16(LO16(esi));
    MEM16(0x775B20) = LO16(edx);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    POP32(esp, esi);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_001BDB40(); return; /* tail jmp 0x001BDB40 */

}

/**
 * sub_001BD670
 * Original: 0x001BD670 - 0x001BD731 (193 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BD670: ;
    esp = esp - 0x11C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    esi = esp + 0x18;
    MEM8(esp + 0x124) = 0x11;
    MEM16(esp + 0x102) = 0x33;
    MEM8(esp + 0x12C) = 1;
    MEM16(esp + 0x110) = 0;
    PUSH32(esp, 0); sub_000DA2D0(); /* call 0x000DA2D0 */

loc_001BD6B8: ;
    eax = MEM32(0x8470DC);
    esi = (int32_t)MEMF(eax + 0x330); /* cvttss2si */
    ebx = (int32_t)MEMF(eax + 0x334); /* cvttss2si */
    edi = (int32_t)MEMF(eax + 0x338); /* cvttss2si */
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BD6DD: ;
    xmm6 = MEMF(0x648CE0); /* movss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(0x64A7B8); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    esi = esi - eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BD70C: ;
    eax = MEM32(esp + 0x12C);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edi = edi - ecx;
    if (TEST_NZ(eax, eax)) { sub_001BD731(); return; } /* jne: not equal / not zero */

loc_001BD729: ;
    ebx = ebx + 0x1F4;
    g_seh_ebp = ebp; sub_001BD740(); return; /* tail jmp 0x001BD740 */

}

/**
 * sub_001BD830
 * Original: 0x001BD830 - 0x001BD9C2 (402 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD830(void)
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

loc_001BD830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO16(ebx, MEM16(esi + 0x118));
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + 0x11C));
    eax = SX16(LO16(edi));
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x8470DC);
    ecx = SX16(LO16(ebx));
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x6490b4] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001BD894: ;
    ecx = eax;
    if (CMP_GE(ecx & ecx, 0)) goto loc_001BD89C; /* jge: greater or equal (signed >=) */

loc_001BD89A: ;
    ecx = 0; /* xor self */

loc_001BD89C: ;
    xmm1 = MEMF(0x775B14); /* movss */
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    MEM8(esi + 0x142) = LO8(ecx);
    MEM8(esi + 0x73) = LO8(ecx);
    MEM8(esi + 0x8F) = LO8(ecx);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x775B18); /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM8(esi + 0x3B) = LO8(eax);
    MEM8(esi + 0x57) = LO8(eax);
    xmm2 = MEMF(0x775B08); /* movss */
    xmm1 = MEMF(0x775B00); /* movss */
    xmm3 = MEMF(0x775B0C); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(0x775B04); /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0x13C); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x130) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esi + 0x11A) = MEM16(esi + 0x11A) - LO16(ecx);
    edx = (int32_t)xmm3; /* cvttss2si */
    xmm3 = MEMF(0x648EBC); /* movss */
    eax = edx + ebx;
    SET_LO16(ebx, MEM16(esi + 0x11A));
    xmm0 = xmm0 * xmm2; /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEMF(esi + 0x12C) = xmm1; /* movss */
    edi = edi + edx;
    MEMF(esi + 0x134) = xmm2; /* movss */
    MEM16(esi + 0x118) = LO16(eax);
    MEM16(esi + 0x11C) = LO16(edi);
    edx = (uint32_t)(int32_t)SMEM16(0x775B1C);
    ecx = (uint32_t)(int32_t)SMEM16(0x775B20);
    ebp = (uint32_t)(int32_t)SMEM16(0x775B1E);
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm1; /* movaps */
    MEM32(esp + 0x14) = ecx;
    ecx = 0; /* xor self */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    xmm1 = xmm1 + xmm3; /* addss */
    if ((xmm0 <= xmm2)) { sub_001BD9C2(); return; } /* jbe: below or equal (unsigned <=) */

loc_001BD9AD: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM16(esi + 0x118) = LO16(ecx);
    g_seh_ebp = ebp; sub_001BD9DA(); return; /* tail jmp 0x001BD9DA */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001BDB10
 * Original: 0x001BDB10 - 0x001BDB3F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDB10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001BDB10: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x775AF0);
    ecx--;
    if (((int32_t)ecx < 0)) goto loc_001BDB3E; /* js: sign (negative) */

loc_001BDB1A: ;
    edx = MEM32(0x84946C);

loc_001BDB20: ;
    eax = MEM32(edx + ecx * 4);
    if (TEST_Z(eax, eax)) goto loc_001BDB30; /* je: equal / zero */

loc_001BDB27: ;
    if (TEST_Z(MEM8(eax + 0x10C), 2)) goto loc_001BDB34; /* je: equal / zero */

loc_001BDB30: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_001BDB20; /* jns: not sign (positive) */

loc_001BDB33: ;
    esp += 4; return; /* ret */

loc_001BDB34: ;
    ecx = MEM32(edx + ecx * 4);
    MEM32(ecx + 0x10C) = MEM32(ecx + 0x10C) | 2;

loc_001BDB3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BDB40
 * Original: 0x001BDB40 - 0x001BDC77 (311 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDB40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BDB40: ;
    esp = esp - 0x128;
    ecx = (uint32_t)(int32_t)SMEM16(0x775B1C);
    edx = (uint32_t)(int32_t)SMEM16(0x775B20);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_LE(eax, ebp)) goto loc_001BDC6F; /* jle: less or equal (signed <=) */

loc_001BDB67: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    edi = edi;

loc_001BDB70: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BDB75: ;
    xmm5 = MEMF(0x64A7B8); /* movss */
    esi = MEM32(esp + 0x14);
    xmm0 = xmm0 * xmm5; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    esi = esi - eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001BDB90: ;
    eax = MEM32(esp + 0x18);
    xmm0 = xmm0 * xmm5; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax - ecx;
    PUSH32(esp, 0xFF);
    MEM16(esp + 0x110) = LO16(eax);
    eax = 0x19;
    MEM16(esp + 0x10C) = LO16(esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    esi = esp + 0x28;
    MEM32(esp + 0x108) = ebp;
    MEM16(esp + 0x112) = 0x80;
    MEM16(esp + 0x116) = LO16(ebp);
    MEMF(esp + 0x128) = xmm0; /* movss */
    MEMF(esp + 0x12C) = xmm0; /* movss */
    MEMF(esp + 0x130) = xmm0; /* movss */
    MEM16(esp + 0x11C) = LO16(eax);
    MEM16(esp + 0x11A) = LO16(eax);
    MEM16(esp + 0x11E) = LO16(ebp);
    MEM8(esp + 0x13C) = 0xE;
    MEM8(esp + 0x134) = 0x12;
    MEM16(esp + 0x120) = 0x9804;
    MEMF(esp + 0x138) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000DA2D0(); /* call 0x000DA2D0 */

loc_001BDC40: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x11);
    eax = 0x148;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001BDC51: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, ebp)) goto loc_001BDC62; /* je: equal / zero */

loc_001BDC58: ;
    edi = eax + 0x2C;
    ecx = 0x47;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001BDC62: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_001BDB70; /* jne: not equal / not zero */

loc_001BDC6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001BDC6F: ;
    POP32(esp, ebp);
    esp = esp + 0x128;
    esp += 4; return; /* ret */

}

/**
 * sub_001BDC80
 * Original: 0x001BDC80 - 0x001BDCE3 (99 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDC80(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001BDC80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x11C);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x118);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x8470DC);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = ecx;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648eec] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001BDCDB: ;
    MEM8(esi + 0x142) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001BDCF0
 * Original: 0x001BDCF0 - 0x001BDD23 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDCF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001BDCF0: ;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x4D);
    eax = 0x6A4;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001BDD09: ;
    esi = eax;
    ebx = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (CMP_NE(esi, ebx)) { sub_001BDD23(); return; } /* jne: not equal / not zero */

loc_001BDD18: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

}

/**
 * sub_001BEEB0
 * Original: 0x001BEEB0 - 0x001BEF0D (93 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEEB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;

loc_001BEEB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x134;
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    xmm0 = MEMF(edi + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    MEMF(edi + 0x2C) = xmm0; /* movss */
    eax = MEM32(0x849470);
    if (TEST_Z(eax, eax)) goto loc_001BEF05; /* je: equal / zero */

loc_001BEEE0: ;
    ecx = MEM32(eax + 0x44);
    if (TEST_Z(ecx, ecx)) goto loc_001BEEEF; /* je: equal / zero */

loc_001BEEE7: ;
    xmm1 = xmm3; /* movaps */
    xmm0 = xmm3; /* movaps */
    g_seh_ebp = ebp; sub_001BEF19(); return; /* tail jmp 0x001BEF19 */

loc_001BEEEF: ;
    eax = eax + 8;
    ecx = esp + 0x54;
    if (CMP_EQ(eax, ecx)) { sub_001BEF0D(); return; } /* je: equal / zero */

loc_001BEEFA: ;
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    g_seh_ebp = ebp; sub_001BEF19(); return; /* tail jmp 0x001BEF19 */

loc_001BEF05: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_001BEF19(); return; /* tail jmp 0x001BEF19 */

}

/**
 * sub_001BFB10
 * Original: 0x001BFB10 - 0x001BFE25 (789 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFB10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001BFB10: ;
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

loc_001BFB3F: ;
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

loc_001BFB9F: ;
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

loc_001BFBED: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001BFC07; /* je: equal / zero */

loc_001BFBFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001BFC01: ;
    MEM32(0x77182C) = esi;

loc_001BFC07: ;
    eax = MEM32(0x771828);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001BFC1E; /* je: equal / zero */

loc_001BFC12: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001BFC18: ;
    MEM32(0x771828) = ebx;

loc_001BFC1E: ;
    eax = MEM32(0x771824);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_001BFC44; /* je: equal / zero */

loc_001BFC2C: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BFC38: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_001BFC44: ;
    edx = edi;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BFC50: ;
    (void)0; /* cmp MEM32(0x771820), ebx - flags set for next jcc */
    MEM32(0x549AEC) = edi;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_001BFC76; /* je: equal / zero */

loc_001BFC5E: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BFC6A: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_001BFC76: ;
    edx = 0x206;
    ecx = 0x4033C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BFC85: ;
    (void)0; /* cmp MEM32(0x77181C), edi - flags set for next jcc */
    MEM32(0x549AE0) = 0x206;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_001BFCA3; /* je: equal / zero */

loc_001BFC97: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001BFC9D: ;
    MEM32(0x77181C) = edi;

loc_001BFCA3: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001BFCC9; /* je: equal / zero */

loc_001BFCB1: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BFCBD: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001BFCC9: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_001BFCE9; /* je: equal / zero */

loc_001BFCD1: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BFCDD: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_001BFCE9: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_001BFD07; /* je: equal / zero */

loc_001BFCF1: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_001BFD07: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    if (CMP_EQ(eax, esi)) goto loc_001BFD2D; /* je: equal / zero */

loc_001BFD15: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BFD21: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001BFD2D: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_001BFD53; /* je: equal / zero */

loc_001BFD3B: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001BFD47: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001BFD53: ;
    eax = MEM32(0x6B8CAC);
    (void)0; /* cmp MEM32(0x77175C), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x77175C), eax)) goto loc_001BFD6D; /* je: equal / zero */

loc_001BFD62: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001BFD67: ;
    MEM32(0x77175C) = esi;

loc_001BFD6D: ;
    eax = MEM32(0x5499F0);
    xmm0 = MEMF(0x64909C); /* movss */
    eax = eax | 7;
    MEM32(0x5499F0) = eax;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x16);
    eax = edi;
    MEM32(0x547358) = 0xF0000000u;
    MEM32(0x547330) = edi;
    MEM32(0x547334) = edi;
    MEM32(0x5473B0) = 2;
    MEM32(0x547434) = edi;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001BFDBC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    eax = edi;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001BFDD3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x19);
    eax = edi;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001BFDEA: ;
    xmm0 = MEMF(0x64909C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    eax = edi;
    PUSH32(esp, 0); sub_00537AD0(); /* call 0x00537AD0 */

loc_001BFE06: ;
    ecx = MEM32(0x5499F0);
    eax = 4;
    POP32(esp, edi);
    ecx = ecx | eax;
    POP32(esp, esi);
    MEM32(0x5499F0) = ecx;
    MEM32(0x54745C) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001BFE30
 * Original: 0x001BFE30 - 0x001BFE60 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFE30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001BFE30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    SET_LO8(edx, 0); /* xor self */
    ecx = 0; /* xor self */
    eax = edi + 0x66C;
    /* nop */

loc_001BFE50: ;
    if (CMP_G(MEM32(eax), 0)) { sub_001BFE60(); return; } /* jg: greater (signed >) */

loc_001BFE55: ;
    ecx++;
    eax = eax + 0x14;
    if (CMP_L(ecx, 3)) goto loc_001BFE50; /* jl: less (signed <) */

loc_001BFE5E: ;
    g_seh_ebp = ebp; sub_001BFE62(); return; /* tail jmp 0x001BFE62 */

}

/**
 * sub_001C0880
 * Original: 0x001C0880 - 0x001C08A4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0880: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C08D0(); /* call 0x001C08D0 */

loc_001C088B: ;
    SET_LO8(eax, MEM8(0x8472BD));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001C08A4(); return; } /* jne: not equal / not zero */

loc_001C0897: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001C08B0
 * Original: 0x001C08B0 - 0x001C08C6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C08B0(void)
{

loc_001C08B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C08D0(); /* call 0x001C08D0 */

loc_001C08BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001C08C1: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C08D0
 * Original: 0x001C08D0 - 0x001C0D43 (1139 bytes, 376 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C08D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C08D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x670;
    ebp = 3;

loc_001C08E3: ;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_001C092A; /* je: equal / zero */

loc_001C08E9: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    if (CMP_NE(ecx, 1)) goto loc_001C0921; /* jne: not equal / not zero */

loc_001C08F8: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001C0911; /* jne: not equal / not zero */

loc_001C0904: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001C0911; /* je: equal / zero */

loc_001C090B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_001C0911: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0x780000)) goto loc_001C0921; /* jne: not equal / not zero */

loc_001C091A: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_001C091F: ;
    goto loc_001C0924;

loc_001C0921: ;
    eax--;
    MEM32(edi) = eax;

loc_001C0924: ;
    MEM32(esi) = 0;

loc_001C092A: ;
    esi = esi + 0x14;
    ebp--;
    if ((ebp != 0)) goto loc_001C08E3; /* jne: not equal / not zero */

loc_001C0930: ;
    eax = MEM32(ebx + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_001C0979; /* je: equal / zero */

loc_001C0937: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001C093D: ;
    if (TEST_NZ(eax, eax)) goto loc_001C0972; /* jne: not equal / not zero */

loc_001C0941: ;
    eax = MEM32(ebx + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_001C0972; /* je: equal / zero */

loc_001C0948: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001C0968: ;
    esp = esp + 4;
    MEM32(ebx + 0x5C) = 0;

loc_001C0972: ;
    MEM32(ebx + 0x5C) = 0;

loc_001C0979: ;
    eax = MEM32(ebx + 0x640);
    if (TEST_Z(eax, eax)) goto loc_001C0AA6; /* je: equal / zero */

loc_001C0987: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(edx + 0x648);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ebx, MEM8(0x771758));
    if (TEST_Z(esi, esi)) goto loc_001C09FF; /* je: equal / zero */

loc_001C099B: ;
    goto loc_001C09A0;

    /* nop */

loc_001C09A0: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    esi = MEM32(esi + 4);
    eax = MEM32(eax + 8);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C09FB; /* jne: not equal / not zero */

loc_001C09B2: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_001C09CF; /* jle: less or equal (signed <=) */

loc_001C09B6: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    edi = edi;

loc_001C09C0: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_001C09C9; /* jne: not equal / not zero */

loc_001C09C4: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_001C09C9: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_001C09C0; /* jne: not equal / not zero */

loc_001C09CF: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_001C09FB; /* jl: less (signed <) */

loc_001C09D6: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_001C09F1; /* je: equal / zero */

loc_001C09E3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001C09E6: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_001C09FB;

loc_001C09F1: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C09FB: ;
    if (TEST_NZ(esi, esi)) goto loc_001C09A0; /* jne: not equal / not zero */

loc_001C09FF: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi + 0x650);
    if (TEST_Z(esi, esi)) goto loc_001C0A6F; /* je: equal / zero */

loc_001C0A0D: ;
    /* nop */

loc_001C0A10: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    esi = MEM32(esi + 4);
    eax = MEM32(eax + 8);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C0A6B; /* jne: not equal / not zero */

loc_001C0A22: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_001C0A3F; /* jle: less or equal (signed <=) */

loc_001C0A26: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    edi = edi;

loc_001C0A30: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_001C0A39; /* jne: not equal / not zero */

loc_001C0A34: ;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx) = ebp;

loc_001C0A39: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_001C0A30; /* jne: not equal / not zero */

loc_001C0A3F: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_001C0A6B; /* jl: less (signed <) */

loc_001C0A46: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_001C0A61; /* je: equal / zero */

loc_001C0A53: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001C0A56: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_001C0A6B;

loc_001C0A61: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C0A6B: ;
    if (TEST_NZ(esi, esi)) goto loc_001C0A10; /* jne: not equal / not zero */

loc_001C0A6F: ;
    esi = MEM32(edi + 0x640);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001C0A7B: ;
    if (TEST_NZ(eax, eax)) goto loc_001C0AA6; /* jne: not equal / not zero */

loc_001C0A7F: ;
    if (TEST_Z(esi, esi)) goto loc_001C0AA6; /* je: equal / zero */

loc_001C0A83: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001C0AA3: ;
    esp = esp + 4;

loc_001C0AA6: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x654);
    if (TEST_Z(ecx, ecx)) goto loc_001C0BD6; /* je: equal / zero */

loc_001C0AB8: ;
    SET_LO8(ebx, MEM8(0x771758));
    ecx = eax;
    esi = MEM32(ecx + 0x65C);
    if (TEST_Z(esi, esi)) goto loc_001C0B2F; /* je: equal / zero */

loc_001C0ACA: ;
    /* nop */

loc_001C0AD0: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    esi = MEM32(esi + 4);
    eax = MEM32(eax + 8);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C0B2B; /* jne: not equal / not zero */

loc_001C0AE2: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_001C0AFF; /* jle: less or equal (signed <=) */

loc_001C0AE6: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    edi = edi;

loc_001C0AF0: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_001C0AF9; /* jne: not equal / not zero */

loc_001C0AF4: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_001C0AF9: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_001C0AF0; /* jne: not equal / not zero */

loc_001C0AFF: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_001C0B2B; /* jl: less (signed <) */

loc_001C0B06: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_001C0B21; /* je: equal / zero */

loc_001C0B13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001C0B16: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_001C0B2B;

loc_001C0B21: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C0B2B: ;
    if (TEST_NZ(esi, esi)) goto loc_001C0AD0; /* jne: not equal / not zero */

loc_001C0B2F: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi + 0x664);
    if (TEST_Z(esi, esi)) goto loc_001C0B9F; /* je: equal / zero */

loc_001C0B3D: ;
    /* nop */

loc_001C0B40: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    esi = MEM32(esi + 4);
    eax = MEM32(eax + 8);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C0B9B; /* jne: not equal / not zero */

loc_001C0B52: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_001C0B6F; /* jle: less or equal (signed <=) */

loc_001C0B56: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    edi = edi;

loc_001C0B60: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_001C0B69; /* jne: not equal / not zero */

loc_001C0B64: ;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx) = ebp;

loc_001C0B69: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_001C0B60; /* jne: not equal / not zero */

loc_001C0B6F: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_001C0B9B; /* jl: less (signed <) */

loc_001C0B76: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_001C0B91; /* je: equal / zero */

loc_001C0B83: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001C0B86: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_001C0B9B;

loc_001C0B91: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C0B9B: ;
    if (TEST_NZ(esi, esi)) goto loc_001C0B40; /* jne: not equal / not zero */

loc_001C0B9F: ;
    esi = MEM32(edi + 0x654);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001C0BAB: ;
    if (TEST_NZ(eax, eax)) goto loc_001C0BD6; /* jne: not equal / not zero */

loc_001C0BAF: ;
    if (TEST_Z(esi, esi)) goto loc_001C0BD6; /* je: equal / zero */

loc_001C0BB3: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001C0BD3: ;
    esp = esp + 4;

loc_001C0BD6: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x624);
    if (TEST_Z(eax, eax)) goto loc_001C0D06; /* je: equal / zero */

loc_001C0BE8: ;
    SET_LO8(ebx, MEM8(0x771758));
    eax = edx;
    esi = MEM32(eax + 0x62C);
    if (TEST_Z(esi, esi)) goto loc_001C0C5F; /* je: equal / zero */

loc_001C0BFA: ;
    /* nop */

loc_001C0C00: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    esi = MEM32(esi + 4);
    eax = MEM32(eax + 8);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C0C5B; /* jne: not equal / not zero */

loc_001C0C12: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_001C0C2F; /* jle: less or equal (signed <=) */

loc_001C0C16: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    edi = edi;

loc_001C0C20: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_001C0C29; /* jne: not equal / not zero */

loc_001C0C24: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_001C0C29: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_001C0C20; /* jne: not equal / not zero */

loc_001C0C2F: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_001C0C5B; /* jl: less (signed <) */

loc_001C0C36: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_001C0C51; /* je: equal / zero */

loc_001C0C43: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001C0C46: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_001C0C5B;

loc_001C0C51: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C0C5B: ;
    if (TEST_NZ(esi, esi)) goto loc_001C0C00; /* jne: not equal / not zero */

loc_001C0C5F: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi + 0x634);
    if (TEST_Z(esi, esi)) goto loc_001C0CCF; /* je: equal / zero */

loc_001C0C6D: ;
    /* nop */

loc_001C0C70: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    esi = MEM32(esi + 4);
    eax = MEM32(eax + 8);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C0CCB; /* jne: not equal / not zero */

loc_001C0C82: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_001C0C9F; /* jle: less or equal (signed <=) */

loc_001C0C86: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));
    edi = edi;

loc_001C0C90: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_001C0C99; /* jne: not equal / not zero */

loc_001C0C94: ;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx) = ebp;

loc_001C0C99: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_001C0C90; /* jne: not equal / not zero */

loc_001C0C9F: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_001C0CCB; /* jl: less (signed <) */

loc_001C0CA6: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_001C0CC1; /* je: equal / zero */

loc_001C0CB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001C0CB6: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_001C0CCB;

loc_001C0CC1: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C0CCB: ;
    if (TEST_NZ(esi, esi)) goto loc_001C0C70; /* jne: not equal / not zero */

loc_001C0CCF: ;
    esi = MEM32(edi + 0x624);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_001C0CDB: ;
    if (TEST_NZ(eax, eax)) goto loc_001C0D06; /* jne: not equal / not zero */

loc_001C0CDF: ;
    if (TEST_Z(esi, esi)) goto loc_001C0D06; /* je: equal / zero */

loc_001C0CE3: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001C0D03: ;
    esp = esp + 4;

loc_001C0D06: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx + 0x638);
    if (TEST_Z(esi, esi)) goto loc_001C0D3E; /* je: equal / zero */

loc_001C0D14: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C0D3E; /* jne: not equal / not zero */

loc_001C0D1D: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C0D24: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C0D3E; /* jl: less (signed <) */

loc_001C0D2B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001C0D43(); return; } /* je: equal / zero */

loc_001C0D38: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C0D3B: ;
    esp = esp + 4;

loc_001C0D3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0E10
 * Original: 0x001C0E10 - 0x001C11A1 (913 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0E10: ;
    xmm7 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x10C); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    /* comiss xmm0, MEMF(esi + 0x110) - sets EFLAGS */
    MEMF(esi + 0x10C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(esi + 0x110))) { sub_001C11A1(); return; } /* jbe: below or equal (unsigned <=) */

loc_001C0E3E: ;
    eax = MEM32(esi + 0x344);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x40C00000);
    edx = esi + 0x348;
    ecx = esi + 0x34C;
    PUSH32(esp, eax);
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_001C0E65: ;
    xmm0 = MEMF(esi + 0x10C); /* movss */
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x110); /* subss */
    edx = MEM32(esi + 0x114);
    xmm0 = xmm0 - MEMF(esi + 0x110); /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    ecx = edx + edx;
    edi = ecx + 1;
    if ((xmm1 > xmm0)) goto loc_001C0EAA; /* ja: above (unsigned >) */

loc_001C0E9D: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001C0EAD; /* jbe: below or equal (unsigned <=) */

loc_001C0EAA: ;
    xmm0 = xmm1; /* movaps */

loc_001C0EAD: ;
    /* comiss xmm0, MEMF(esi + edx * 4 + 0x118) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + edx * 4 + 0x118))) goto loc_001C0F13; /* jbe: below or equal (unsigned <=) */

loc_001C0EB7: ;
    eax = ecx;
    ecx = edx + 1;
    MEM32(esi + 0x114) = ecx;
    edx = eax + eax * 4;
    eax = esi + edx * 8 + 0x104;
    ecx = ecx + ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x5C);
    edx = ecx + ecx * 4;
    MEM32(esi + edx * 8 + 0x160) = ebp;
    eax = MEM32(eax + 0x60);
    edx = esi + edx * 8 + 0x104;
    MEM32(edx + 0x60) = eax;
    ebx = edi;
    edx = ebx + ebx * 4;
    ebx = MEM32(esi + edx * 8 + 0x160);
    eax = esi + edx * 8 + 0x104;
    edi = ecx + 1;
    edx = edi + edi * 4;
    edx = esi + edx * 8 + 0x104;
    MEM32(edx + 0x5C) = ebx;
    eax = MEM32(eax + 0x60);
    MEM32(edx + 0x60) = eax;
    POP32(esp, ebp);

loc_001C0F13: ;
    edx = MEM32(esi + 0x114);
    xmm0 = MEMF(esi + edx * 8 + 0x130); /* movss */
    xmm1 = MEMF(esi + edx * 8 + 0x134); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x348); /* mulss */
    xmm1 = xmm1 * MEMF(esi + 0x348); /* mulss */
    eax = 6;
    eax = eax - edx;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    if (CMP_L(eax, 4)) goto loc_001C1079; /* jl: less (signed <) */

loc_001C0F53: ;
    ebx = 2;
    ebx = ebx - edx;
    eax = edx + edx * 4;
    eax = eax << 4;
    ebx = ebx >> 2;
    ebx++;
    eax = eax + esi + 0x18C;
    edx = edx + ebx * 4;
    edi = edi;

loc_001C0F70: ;
    xmm2 = MEMF(eax + -44); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + -44) = xmm2; /* movss */
    xmm2 = MEMF(eax + -40); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(eax + -40) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 + MEMF(eax + -4); /* addss */
    MEMF(eax + -4) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    MEMF(eax) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x24); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x28); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(eax + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x4C); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + 0x4C) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 + MEMF(eax + 0x50); /* addss */
    MEMF(eax + 0x50) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x74); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + 0x74) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x78); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(eax + 0x78) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x9C); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + 0x9C) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 + MEMF(eax + 0xA0); /* addss */
    MEMF(eax + 0xA0) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0xC4); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + 0xC4) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0xC8); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(eax + 0xC8) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0xEC); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + 0xEC) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 + MEMF(eax + 0xF0); /* addss */
    MEMF(eax + 0xF0) = xmm2; /* movss */
    eax = eax + 0x140;
    ebx--;
    if ((ebx != 0)) goto loc_001C0F70; /* jne: not equal / not zero */

loc_001C1079: ;
    if (CMP_GE(edx, 6)) goto loc_001C10CC; /* jge: greater or equal (signed >=) */

loc_001C107E: ;
    eax = edx + edx * 4;
    eax = eax << 4;
    ebx = 6;
    eax = eax + esi + 0x18C;
    ebx = ebx - edx;

loc_001C1092: ;
    xmm2 = MEMF(eax + -44); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + -44) = xmm2; /* movss */
    xmm2 = MEMF(eax + -40); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(eax + -40) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 + MEMF(eax + -4); /* addss */
    MEMF(eax + -4) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 0x50;
    ebx--;
    if ((ebx != 0)) goto loc_001C1092; /* jne: not equal / not zero */

loc_001C10CC: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    edx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    ecx = ecx + ecx * 4;
    xmm0 = MEMF(esi + ecx * 8 + 0x164); /* movss */
    xmm1 = MEMF(esi + ecx * 8 + 0x160); /* movss */
    xmm0 = xmm0 / MEMF(eax + edx + 0x1F8); /* divss */
    xmm1 = xmm1 / MEMF(eax + edx + 0x1F4); /* divss */
    ecx = esi + ecx * 8 + 0x104;
    MEMF(ecx + 0x74) = xmm1; /* movss */
    MEMF(ecx + 0x78) = xmm0; /* movss */
    edx = MEM32(0x84A13C);
    ecx = edi + edi * 4;
    xmm0 = MEMF(esi + ecx * 8 + 0x164); /* movss */
    xmm1 = MEMF(esi + ecx * 8 + 0x160); /* movss */
    xmm0 = xmm0 / MEMF(eax + edx + 0x1F8); /* divss */
    xmm1 = xmm1 / MEMF(eax + edx + 0x1F4); /* divss */
    ecx = esi + ecx * 8 + 0x104;
    MEMF(ecx + 0x74) = xmm1; /* movss */
    MEMF(ecx + 0x78) = xmm0; /* movss */
    fp_push(MEMF(esi + 0x40)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001C115B: ;
    edx = ZX8(MEM8(esi + 0x50));
    ecx = ZX8(MEM8(esi + 0x51));
    eax = eax << 8;
    eax = eax | edx;
    edx = ZX8(MEM8(esi + 0x52));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    POP32(esp, edi);
    eax = eax | edx;
    ecx = esi + 0x16C;
    edx = 0xC;
    POP32(esp, ebx);

loc_001C1183: ;
    MEM32(ecx) = eax;
    ecx = ecx + 0x28;
    edx--;
    if ((edx != 0)) goto loc_001C1183; /* jne: not equal / not zero */

loc_001C118B: ;
    ecx = MEM32(esp + 0xC);
    eax = esi + 0x160;
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x114);
    eax = eax << 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001C11B0
 * Original: 0x001C11B0 - 0x001C13E3 (563 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C11B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C11B0: ;
    xmm7 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    xmm0 = MEMF(esi + 0x10C); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    /* comiss xmm0, MEMF(esi + 0x110) - sets EFLAGS */
    PUSH32(esp, edi);
    MEMF(esi + 0x10C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(esi + 0x110))) goto loc_001C129B; /* jbe: below or equal (unsigned <=) */

loc_001C11E1: ;
    eax = MEM32(esi + 0x200);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x40C00000);
    edx = esi + 0x204;
    ecx = esi + 0x208;
    PUSH32(esp, eax);
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_001C1206: ;
    xmm0 = MEMF(esi + 0x10C); /* movss */
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x110); /* subss */
    xmm0 = xmm0 - MEMF(esi + 0x110); /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001C123F; /* ja: above (unsigned >) */

loc_001C1232: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001C1242; /* jbe: below or equal (unsigned <=) */

loc_001C123F: ;
    xmm0 = xmm1; /* movaps */

loc_001C1242: ;
    eax = MEM32(esi + 0x114);
    /* comiss xmm0, MEMF(esi + eax * 4 + 0x118) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + eax * 4 + 0x118))) goto loc_001C1259; /* jbe: below or equal (unsigned <=) */

loc_001C1252: ;
    eax++;
    MEM32(esi + 0x114) = eax;

loc_001C1259: ;
    ecx = MEM32(esi + 0x114);
    xmm0 = MEMF(esi + ecx * 8 + 0x130); /* movss */
    xmm0 = xmm0 * MEMF(edx); /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x78); /* addss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    eax = MEM32(esi + 0x114);
    xmm0 = MEMF(esi + eax * 8 + 0x134); /* movss */
    xmm0 = xmm0 * MEMF(edx); /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x7C); /* addss */
    MEMF(esi + 0x7C) = xmm0; /* movss */

loc_001C129B: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001C12A3: ;
    ecx = ZX8(MEM8(esi + 0x50));
    edx = ZX8(MEM8(esi + 0x51));
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    xmm3 = MEMF(0x648D10); /* movss */
    eax = eax << 8;
    eax = eax | ecx;
    ecx = ZX8(MEM8(esi + 0x52));
    eax = eax << 8;
    eax = eax | edx;
    eax = eax << 8;
    eax = eax | ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2B0);
    edx = 0x5905B8;
    ecx = esi + 0x168;
    /* nop */

loc_001C12E0: ;
    edi = MEM32(esi + 0x30);
    (void)0; /* test edi, 0x200 - flags set for next jcc */
    xmm2 = MEMF(esi + 0x54); /* movss */
    xmm0 = MEMF(edx); /* movss */
    xmm1 = MEMF(edx + 4); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    if (TEST_Z(edi, 0x200)) goto loc_001C130D; /* je: equal / zero */

loc_001C1301: ;
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm1 - xmm2; /* subss */

loc_001C130D: ;
    if (TEST_Z(edi, 0x400)) goto loc_001C1330; /* je: equal / zero */

loc_001C1315: ;
    xmm2 = MEMF(esi + 0x40); /* movss */
    xmm2 = xmm2 / MEMF(esi + 0x44); /* divss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm2; /* movaps */

loc_001C1330: ;
    xmm2 = MEMF(esi + 0x78); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    MEMF(ecx + -8) = xmm2; /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + -4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ecx) = xmm0; /* movss */
    MEM32(ecx + 4) = eax;
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x5C); /* addss */
    MEMF(ecx + 8) = xmm0; /* movss */
    xmm0 = MEMF(edx + 4); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x60); /* addss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    edi = MEM32(0x84A13C);
    xmm0 = MEMF(ecx + -8); /* movss */
    xmm0 = xmm0 / MEMF(ebx + edi + 0x1F4); /* divss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    edi = MEM32(0x84A13C);
    xmm0 = MEMF(ecx + -4); /* movss */
    xmm0 = xmm0 / MEMF(ebx + edi + 0x1F8); /* divss */
    edi = ecx + 0x18;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    if (CMP_EQ(edx, edi)) goto loc_001C13BB; /* je: equal / zero */

loc_001C13B1: ;
    ebp = MEM32(edx);
    MEM32(edi) = ebp;
    edi = MEM32(edx + 4);
    MEM32(ecx + 0x1C) = edi;

loc_001C13BB: ;
    edx = edx + 8;
    ecx = ecx + 0x28;
    if (CMP_L(edx, 0x5905D8)) goto loc_001C12E0; /* jl: less (signed <) */

loc_001C13CD: ;
    edx = MEM32(esp + 0x18);
    esi = esi + 0x160;
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001C13F0
 * Original: 0x001C13F0 - 0x001C1400 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C13F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C13F0: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x61)) goto loc_001C13FF; /* jne: not equal / not zero */

loc_001C13F7: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x44) = 1;

loc_001C13FF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1B40
 * Original: 0x001C1B40 - 0x001C1F6E (1070 bytes, 258 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1B40: ;
    eax = MEM32(0x8470DC);
    edx = MEM32(eax + 0x3E0);
    esp = esp - 0x88;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_EQ(edx, edi)) goto loc_001C1B6A; /* je: equal / zero */

loc_001C1B5B: ;
    if (TEST_Z(MEM8(esp + 0x94), 1)) goto loc_001C1B6A; /* je: equal / zero */

loc_001C1B65: ;
    ecx = 1;

loc_001C1B6A: ;
    (void)0; /* cmp MEM32(eax + 0xB50), edi - flags set for next jcc */
    SET_LO8(edx, MEM8(esp + 0x94));
    if (CMP_EQ(MEM32(eax + 0xB50), edi)) goto loc_001C1B7F; /* je: equal / zero */

loc_001C1B79: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_001C1B7F; /* je: equal / zero */

loc_001C1B7E: ;
    ecx++;

loc_001C1B7F: ;
    if (CMP_EQ(MEM32(eax + 0x12C0), edi)) goto loc_001C1B8D; /* je: equal / zero */

loc_001C1B87: ;
    if (TEST_Z(LO8(edx), 4)) goto loc_001C1B8D; /* je: equal / zero */

loc_001C1B8C: ;
    ecx++;

loc_001C1B8D: ;
    if (CMP_EQ(MEM32(eax + 0x1A30), edi)) goto loc_001C1B9B; /* je: equal / zero */

loc_001C1B95: ;
    if (TEST_Z(LO8(edx), 8)) goto loc_001C1B9B; /* je: equal / zero */

loc_001C1B9A: ;
    ecx++;

loc_001C1B9B: ;
    if (CMP_EQ(ecx, edi)) goto loc_001C1F65; /* je: equal / zero */

loc_001C1BA3: ;
    ecx = MEM32(0x75A130);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_LE(ecx, edi)) goto loc_001C1CA9; /* jle: less or equal (signed <=) */

loc_001C1BB9: ;
    SET_LO8(ebx, MEM8(0x771758));
    /* nop */

loc_001C1BC0: ;
    esi = 0x3C;

loc_001C1BC5: ;
    eax = MEM32(0x75A12C);
    ecx = MEM32(eax + ebp * 4);
    eax = MEM32(esi + ecx);
    if (CMP_EQ(eax, edi)) goto loc_001C1C74; /* je: equal / zero */

loc_001C1BD8: ;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C1C74; /* jne: not equal / not zero */

loc_001C1BE6: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_001C1C05; /* jle: less or equal (signed <=) */

loc_001C1BEA: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));

loc_001C1BF2: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_001C1BFB; /* jne: not equal / not zero */

loc_001C1BF6: ;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx) = ebp;

loc_001C1BFB: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_001C1BF2; /* jne: not equal / not zero */

loc_001C1C01: ;
    ebp = MEM32(esp + 0x1C);

loc_001C1C05: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_001C1C74; /* jl: less (signed <) */

loc_001C1C0C: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    edx = MEM32(edx + 0x5906BC);
    if (CMP_EQ(edx, edi)) goto loc_001C1C29; /* je: equal / zero */

loc_001C1C1B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_001C1C1E: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_001C1C74;

loc_001C1C29: ;
    if (CMP_NE(eax, MEM32(ecx * 4 + 0x7714E0))) goto loc_001C1C3C; /* jne: not equal / not zero */

loc_001C1C32: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx * 4 + 0x7714E0) = edx;

loc_001C1C3C: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_EQ(ecx, edi)) goto loc_001C1C49; /* je: equal / zero */

loc_001C1C43: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_001C1C49: ;
    ecx = MEM32(eax + 8);
    if (CMP_EQ(ecx, edi)) goto loc_001C1C56; /* je: equal / zero */

loc_001C1C50: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;

loc_001C1C56: ;
    ecx = MEM32(0x7714E4);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(eax + 0xC) = ecx;
    if (CMP_EQ(ecx, edi)) goto loc_001C1C66; /* je: equal / zero */

loc_001C1C63: ;
    MEM32(ecx + 8) = eax;

loc_001C1C66: ;
    MEM32(eax) = 1;
    MEM32(eax + 8) = edi;
    MEM32(0x7714E4) = eax;

loc_001C1C74: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x48)) goto loc_001C1BC5; /* jl: less (signed <) */

loc_001C1C80: ;
    edx = MEM32(0x75A12C);
    eax = MEM32(edx + ebp * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001C2220(); /* call 0x001C2220 */

loc_001C1C8F: ;
    eax = MEM32(0x75A130);
    esp = esp + 4;
    ebp++;
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_L(ebp, eax)) goto loc_001C1BC0; /* jl: less (signed <) */

loc_001C1CA4: ;
    eax = MEM32(0x8470DC);

loc_001C1CA9: ;
    ebp = 0; /* xor self */
    esi = 0; /* xor self */
    MEM32(0x75A130) = edi;
    MEM32(0x771834) = 1;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = esi;
    goto loc_001C1CD0;

    /* nop */
    edi = edi;

loc_001C1CD0: ;
    if (CMP_EQ(MEM32(esi + eax + 0x3E0), edi)) goto loc_001C1F42; /* je: equal / zero */

loc_001C1CDD: ;
    ecx = ebp;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 0x9C);
    if (TEST_Z(ecx, edx)) goto loc_001C1F42; /* je: equal / zero */

loc_001C1CF5: ;
    edx = MEM32(esi + eax + 4);
    SET_LO8(eax, MEM8(edx + 0x8C2));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = 2;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C1D0D; /* je: equal / zero */

loc_001C1D08: ;
    ebx = 4;

loc_001C1D0D: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x4B);
    eax = 0x60;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001C1D1E: ;
    esp = esp + 8;
    if (CMP_EQ(eax, edi)) goto loc_001C1F3D; /* je: equal / zero */

loc_001C1D29: ;
    ecx = MEM32(0x75A12C);
    if (CMP_EQ(ecx, edi)) goto loc_001C1D42; /* je: equal / zero */

loc_001C1D33: ;
    edx = MEM32(0x75A130);
    MEM32(ecx + edx * 4) = eax;
    MEM32(0x75A130) = MEM32(0x75A130) + 1;

loc_001C1D42: ;
    MEM32(eax + 0x2C) = ebp;
    ecx = MEM32(0x8470DC);
    edx = MEM32(ecx + 4);
    SET_LO8(ecx, MEM8(edx + 0x8C2));
    edx = MEM32(0x8493BC);
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ecx = edx + 0x14C;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C1D6A; /* jne: not equal / not zero */

loc_001C1D64: ;
    ecx = edx + 0xC8;

loc_001C1D6A: ;
    xmm0 = MEMF(ecx); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    ebp = eax + 0x3C;
    goto loc_001C1D90;

loc_001C1D84: ;
    edx = MEM32(0x8493BC);
    /* nop */

loc_001C1D90: ;
    eax = MEM32(0x8470DC);
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx + 0x8C2));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = edx + 0x14C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C1DAE; /* jne: not equal / not zero */

loc_001C1DA8: ;
    eax = edx + 0xC8;

loc_001C1DAE: ;
    SET_LO8(ecx, MEM8(edi + eax + 8));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = MEMF(edi + eax + 0x14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001C1F14; /* je: equal / zero */

loc_001C1DC6: ;
    SET_LO8(ecx, MEM8(edi + eax + 9));
    edx = MEM32(edi + eax + 0x10);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(edi + eax + 0xC);
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(esp + 0x80));
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    MEM32(esp + 0x68) = edx;
    SET_LO8(edx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x649234); /* movss */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    PUSH32(esp, eax);
    esi = esp + 0x7C;
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    MEM8(esp + 0x84) = LO8(ecx);
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001C1E4F: ;
    xmm0 = MEMF(0x64A004); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D40); /* movss */
    xmm3 = MEMF(0x649824); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64AA7C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, ebx);
    eax = esp + 0x30;
    esi = esp + 0x5C;
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEM8(esp + 0x90) = 1;
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm3; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_001C1F08: ;
    esi = MEM32(esp + 0x18);
    esp = esp + 8;
    MEM32(ebp) = eax;
    goto loc_001C1F1B;

loc_001C1F14: ;
    MEM32(ebp) = 0;

loc_001C1F1B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0xC) = xmm0; /* movss */
    MEMF(ebp + 0x18) = xmm0; /* movss */
    edi = edi + 0x14;
    ebp = ebp + 4;
    if (CMP_L(edi, 0x3C)) goto loc_001C1D84; /* jl: less (signed <) */

loc_001C1F37: ;
    ebp = MEM32(esp + 0x14);
    edi = 0; /* xor self */

loc_001C1F3D: ;
    eax = MEM32(0x8470DC);

loc_001C1F42: ;
    esi = esi + 0x770;
    ebp++;
    (void)0; /* cmp esi, 0x1DC0 - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(esi, 0x1DC0)) goto loc_001C1CD0; /* jl: less (signed <) */

loc_001C1F5D: ;
    POP32(esp, ebp);
    MEM32(0x775B28) = edi;
    POP32(esp, ebx);

loc_001C1F65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1F70
 * Original: 0x001C1F70 - 0x001C221A (682 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1F70(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1F70: ;
    SET_LO8(eax, MEM8(0x771834));
    ecx = MEM32(0x775B28);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = 1;
    PUSH32(esp, ebp);
    (void)0; /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    ebp = 3;
    eax = ecx;
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_001C1FB1; /* je: equal / zero */

loc_001C1F90: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C1FA6; /* je: equal / zero */

loc_001C1F95: ;
    eax--;
    if ((eax == 0)) goto loc_001C1F9B; /* je: equal / zero */

loc_001C1F98: ;
    eax--;
    if ((eax != 0)) goto loc_001C200C; /* jne: not equal / not zero */

loc_001C1F9B: ;
    MEM32(0x775B28) = ebp;
    goto loc_001C2038;

loc_001C1FA6: ;
    MEM32(0x775B28) = ebx;
    goto loc_001C2038;

loc_001C1FB1: ;
    eax--;
    if ((eax == 0)) goto loc_001C2000; /* je: equal / zero */

loc_001C1FB4: ;
    eax--;
    if ((eax == 0)) goto loc_001C1FD6; /* je: equal / zero */

loc_001C1FB7: ;
    eax--;
    if ((eax != 0)) goto loc_001C200C; /* jne: not equal / not zero */

loc_001C1FBA: ;
    xmm0 = MEMF(0x648CF4); /* movss */
    MEM32(0x775B28) = 2;
    MEMF(0x775B24) = xmm0; /* movss */
    goto loc_001C2038;

loc_001C1FD6: ;
    xmm0 = MEMF(0x775B24); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x775B24) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001C2021; /* jbe: below or equal (unsigned <=) */

loc_001C1FF6: ;
    MEMF(0x775B24) = xmm1; /* movss */
    goto loc_001C202E;

loc_001C2000: ;
    MEM32(0x775B28) = 2;
    goto loc_001C2019;

loc_001C200C: ;
    if (TEST_Z(ecx, ecx)) goto loc_001C2214; /* je: equal / zero */

loc_001C2014: ;
    if (CMP_NE(ecx, 2)) goto loc_001C2038; /* jne: not equal / not zero */

loc_001C2019: ;
    xmm0 = MEMF(0x775B24); /* movss */

loc_001C2021: ;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001C2038; /* jp: parity */

loc_001C202E: ;
    MEM32(0x775B28) = 0;

loc_001C2038: ;
    ecx = MEM32(0x8470DC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = MEM32(edi + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = eax + ecx + 0x330;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003CBA60(); /* call 0x003CBA60 */

loc_001C205A: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = MEM32(eax + ecx + 4);
    SET_LO8(eax, MEM8(edx + 0x8C2));
    xmm4 = MEMF(0x648D14); /* movss */
    esp = esp + 4;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_001C208E; /* jne: not equal / not zero */

loc_001C2088: ;
    MEMF(esp + 0x24) = xmm4; /* movss */

loc_001C208E: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x3C)) goto loc_001C209D; /* jne: not equal / not zero */

loc_001C2097: ;
    MEMF(esp + 0x24) = xmm4; /* movss */

loc_001C209D: ;
    eax = 0; /* xor self */
    ecx = edi + 0x3C;

loc_001C20A2: ;
    if (CMP_NE(MEM32(ecx), 0)) goto loc_001C20B1; /* jne: not equal / not zero */

loc_001C20A7: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, ebp)) goto loc_001C20A2; /* jl: less (signed <) */

loc_001C20AF: ;
    goto loc_001C20F2;

loc_001C20B1: ;
    esi = edx + 4;
    ebx = esp + 0x14;
    PUSH32(esp, 0); sub_000489B0(); /* call 0x000489B0 */

loc_001C20BD: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C20C2: ;
    xmm1 = MEMF(0x648EB0); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x18); /* subss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001C20EA; /* jbe: below or equal (unsigned <=) */

loc_001C20DB: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C20E0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C20E5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C20EA: ;
    xmm4 = MEMF(0x648D14); /* movss */

loc_001C20F2: ;
    esi = edi + 0x54;

loc_001C20F5: ;
    eax = MEM32(esi + -24);
    if (TEST_Z(eax, eax)) goto loc_001C2208; /* je: equal / zero */

loc_001C2100: ;
    edx = MEM32(eax + 0x48);
    fp_push((double)SMEM32(eax + 0x48)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001C2110; /* jge: greater or equal (signed >=) */

loc_001C210A: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C2110: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if (1 /* jp after test - parity */) goto loc_001C213C; /* jp: parity */

loc_001C212C: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + -12) = xmm0; /* movss */
    goto loc_001C21E6;

loc_001C213C: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_001C2146; /* jbe: below or equal (unsigned <=) */

loc_001C2141: ;
    xmm1 = xmm2; /* movaps */
    goto loc_001C214E;

loc_001C2146: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_001C214E; /* jbe: below or equal (unsigned <=) */

loc_001C214B: ;
    xmm1 = xmm4; /* movaps */

loc_001C214E: ;
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm5 = MEMF(0x648D34); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(esi + -12); /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_001C216C; /* ja: above (unsigned >) */

loc_001C2169: ;
    xmm5 = xmm4; /* movaps */

loc_001C216C: ;
    xmm0 = xmm0 - MEMF(esi); /* subss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    MEMF(esi) = xmm0; /* movss */
    if (TEST_NZ(MEM32(esi), 0x7F800000)) goto loc_001C2190; /* jne: not equal / not zero */

loc_001C218C: ;
    MEMF(esi) = xmm2; /* movss */

loc_001C2190: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0x7F800000;
    if (CMP_NE(ecx, 0x7F800000)) goto loc_001C21AD; /* jne: not equal / not zero */

loc_001C21A2: ;
    if (TEST_Z(eax, 0x7FFFFF)) goto loc_001C21AD; /* je: equal / zero */

loc_001C21A9: ;
    MEMF(esi) = xmm2; /* movss */

loc_001C21AD: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + -12); /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm1 = MEMF(0x648D34); /* movss */
    if ((xmm2 > xmm1)) goto loc_001C21D1; /* ja: above (unsigned >) */

loc_001C21CE: ;
    xmm1 = xmm4; /* movaps */

loc_001C21D1: ;
    /* ucomiss xmm1, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001C21E1; /* jp: parity */

loc_001C21DA: ;
    MEMF(esi + -12) = xmm0; /* movss */
    goto loc_001C21EA;

loc_001C21E1: ;
    MEMF(esi + -12) = xmm3; /* movss */

loc_001C21E6: ;
    MEMF(esi) = xmm2; /* movss */

loc_001C21EA: ;
    fp_push(MEMF(esi + -12)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001C21F2: ;
    edx = MEM32(esi + -24);
    ecx = MEM32(edx + 0x48);
    xmm4 = MEMF(0x648D14); /* movss */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    if (CMP_A(eax, ecx)) eax = ecx; /* cmova */
    MEM32(edx + 0x4C) = eax;

loc_001C2208: ;
    esi = esi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_001C20F5; /* jne: not equal / not zero */

loc_001C2212: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001C2214: ;
    POP32(esp, ebp);
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
 * sub_001C2220
 * Original: 0x001C2220 - 0x001C2273 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2220: ;
    ecx = MEM32(0x75A130);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_001C2242; /* jle: less or equal (signed <=) */

loc_001C2232: ;
    esi = MEM32(0x75A12C);

loc_001C2238: ;
    if (CMP_EQ(eax, MEM32(esi + edx * 4))) goto loc_001C226C; /* je: equal / zero */

loc_001C223D: ;
    edx++;
    if (CMP_L(edx, ecx)) goto loc_001C2238; /* jl: less (signed <) */

loc_001C2242: ;
    ecx = 0; /* xor self */
    edx = edx | 0xFFFFFFFFu;

loc_001C2247: ;
    esi = MEM32(ecx);
    edi = MEM32(ecx + 4);
    edi = MEM32(esi + edi * 4 + -4);
    MEM32(esi + edx * 4) = edi;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_001C2273(); return; } /* jne: not equal / not zero */

loc_001C2262: ;
    edx = 1;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_001C226C: ;
    ecx = 0x75A12C;
    goto loc_001C2247;

}

/**
 * sub_001C2280
 * Original: 0x001C2280 - 0x001C240E (398 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2280: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_001C228E; /* jne: not equal / not zero */

loc_001C2289: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_001C228E: ;
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
    if (TEST_Z(esi, esi)) goto loc_001C22DA; /* je: equal / zero */

loc_001C22B6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x48)) goto loc_001C22DA; /* jb: below (unsigned <) */

loc_001C22BF: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001C22C9: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001C22D1: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_001C22F9; /* jne: not equal / not zero */

loc_001C22DA: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001C22EC: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001C22F4: ;
    esp = esp + 8;
    edi = eax;

loc_001C22F9: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    MEM32(0x849470) = edi;
    eax = 0; /* xor self */
    ecx = 0x12;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(0x849470);
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 4) = xmm1; /* movss */
    eax = MEM32(0x849470);
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(eax + 0x2C) = xmm2; /* movss */
    ecx = MEM32(0x849470);
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0x30) = xmm2; /* movss */
    edx = MEM32(0x849470);
    MEMF(edx + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    eax = MEM32(0x849470);
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm2 = MEMF(ebx); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    ecx = MEM32(0x849470);
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm2 = MEMF(0x648E5C); /* movss */
    MEMF(ecx + 0x3C) = xmm0; /* movss */
    edx = MEM32(0x849470);
    xmm0 = MEMF(0x649388); /* movss */
    MEM32(edx + 0x44) = 0;
    eax = MEM32(0x849470);
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((xmm0 <= MEMF(eax))) { sub_001C240E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001C2409: ;
    xmm1 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_001C241E(); return; /* tail jmp 0x001C241E */

}

/**
 * sub_001C24A0
 * Original: 0x001C24A0 - 0x001C24B1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C24A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C24A0: ;
    eax = MEM32(0x849470);
    if (TEST_Z(eax, eax)) goto loc_001C24B0; /* je: equal / zero */

loc_001C24A9: ;
    MEM32(eax + 0x44) = 1;

loc_001C24B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C24C0
 * Original: 0x001C24C0 - 0x001C26C5 (517 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C24C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm7;

loc_001C24C0: ;
    eax = MEM32(0x849470);
    esp = esp - 8;
    if (TEST_Z(eax, eax)) goto loc_001C26C1; /* je: equal / zero */

loc_001C24D0: ;
    ecx = MEM32(eax + 0x44);
    if (TEST_NZ(ecx, ecx)) goto loc_001C26C1; /* jne: not equal / not zero */

loc_001C24DB: ;
    xmm0 = MEMF(eax + 0x28); /* movss */
    xmm7 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(0x849470);
    /* comiss xmm0, MEMF(esi + 0x28) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x28))) goto loc_001C2596; /* jbe: below or equal (unsigned <=) */

loc_001C2505: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C250A: ;
    eax = MEM32(0x849470);
    xmm0 = xmm0 * MEMF(eax + 0x30); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x2C); /* addss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C2523: ;
    eax = MEM32(0x849470);
    xmm0 = xmm0 * MEMF(eax + 0x30); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x2C); /* addss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001C253C: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm0 = MEMF(0x648D34); /* movss */
    if (TEST_Z(LO8(eax), 1)) goto loc_001C255B; /* je: equal / zero */

loc_001C2548: ;
    eax = MEM32(0x849470);
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x18) = xmm1; /* movss */

loc_001C255B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001C2560: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001C2577; /* je: equal / zero */

loc_001C2564: ;
    eax = MEM32(0x849470);
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x1C) = xmm1; /* movss */

loc_001C2577: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C257C: ;
    eax = MEM32(0x849470);
    xmm0 = xmm0 * MEMF(eax + 0x38); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    esi = MEM32(0x849470);

loc_001C2596: ;
    eax = MEM32(0x7FA21C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0); sub_003E3DF0(); /* call 0x003E3DF0 */

loc_001C25A6: ;
    xmm1 = MEMF(esi + 0x18); /* movss */
    ecx = esi + 0x18;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    MEMF(esi + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    eax = esi + 0x10;
    edx = esi;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edx + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    eax = MEM32(0x849470);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    ecx = eax + 0x20;
    edx = eax + 8;
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_001C25F4: ;
    eax = MEM32(0x849470);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    ecx = eax + 0x24;
    edx = eax + 0xC;
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_001C2615: ;
    eax = MEM32(0x849470);
    xmm1 = MEMF(eax + 8); /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    esp = esp + 0x20;
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 4)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    eax = MEM32(0x849470);
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 / MEMF(eax + 0x3C); /* divss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    eax = MEM32(0x849470);
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax + 0x40) - sets EFLAGS */
    POP32(esp, esi);
    if ((xmm0 > MEMF(eax + 0x40))) goto loc_001C2684; /* ja: above (unsigned >) */

loc_001C266F: ;
    xmm1 = MEMF(eax + 0x40); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001C2684; /* ja: above (unsigned >) */

loc_001C2681: ;
    xmm0 = xmm1; /* movaps */

loc_001C2684: ;
    edx = MEM32(0x847010);
    MEMF(eax + 0x40) = xmm0; /* movss */
    eax = MEM32(0x849470);
    ecx = MEM32(edx + 4);
    xmm0 = MEMF(eax + 0x40); /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001C26AF; /* jnp: not parity */

loc_001C26AA: ;
    MEMF(ecx + 4) = xmm0; /* movss */

loc_001C26AF: ;
    MEM8(ecx + 9) = 0;
    eax = MEM32(edx + 4);
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C26C1; /* jne: not equal / not zero */

loc_001C26BD: ;
    MEM8(eax + 8) = 1;

loc_001C26C1: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C26D0
 * Original: 0x001C26D0 - 0x001C26FF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C26D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001C26D0: ;
    eax = MEM32(0x849470);
    if (TEST_Z(eax, eax)) goto loc_001C26F2; /* je: equal / zero */

loc_001C26D9: ;
    edx = MEM32(eax + 0x44);
    if (TEST_NZ(edx, edx)) goto loc_001C26F2; /* jne: not equal / not zero */

loc_001C26E0: ;
    eax = eax + 8;
    if (CMP_EQ(eax, ecx)) goto loc_001C26FE; /* je: equal / zero */

loc_001C26E7: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

loc_001C26F2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx) = xmm0; /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */

loc_001C26FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2700
 * Original: 0x001C2700 - 0x001C2734 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2700: ;
    ecx = MEM32(0x849470);
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    if (TEST_Z(ecx, ecx)) goto loc_001C272C; /* je: equal / zero */

loc_001C2710: ;
    edx = MEM32(ecx + 0x44);
    if (TEST_NZ(edx, edx)) goto loc_001C272C; /* jne: not equal / not zero */

loc_001C2717: ;
    ecx = ecx + 8;
    edx = esp;
    if (CMP_EQ(ecx, edx)) { sub_001C2734(); return; } /* je: equal / zero */

loc_001C2721: ;
    xmm2 = MEMF(ecx); /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    g_seh_ebp = ebp; sub_001C273F(); return; /* tail jmp 0x001C273F */

loc_001C272C: ;
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_001C273F(); return; /* tail jmp 0x001C273F */

}

/**
 * sub_001C2770
 * Original: 0x001C2770 - 0x001C2792 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2770(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C2770: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_001C278F; /* je: equal / zero */

loc_001C2775: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    eax = eax + 0x68;
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001C2788: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001C2792(); return; } /* jne: not equal / not zero */

loc_001C278F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001C2810
 * Original: 0x001C2810 - 0x001C2839 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2810: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_001C281F: ;
    SET_LO8(eax, MEM8(0x8472BD));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001C2839(); return; } /* jne: not equal / not zero */

loc_001C282B: ;
    eax = esi;
    POP32(esp, esi);
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001C2840
 * Original: 0x001C2840 - 0x001C285B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2840(void)
{

loc_001C2840: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_001C284F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001C2855: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2860
 * Original: 0x001C2860 - 0x001C2913 (179 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x39));
    SET_LO8(ecx, 0); /* xor self */
    if (TEST_Z(LO8(eax), 1)) goto loc_001C2882; /* je: equal / zero */

loc_001C286F: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x3A) = MEM16(esi + 0x3A) - LO16(eax);
    if (CMP_GE(MEM16(esi + 0x3A), 0)) goto loc_001C2882; /* jge: greater or equal (signed >=) */

loc_001C2880: ;
    SET_LO8(ecx, 1);

loc_001C2882: ;
    eax = MEM32(esi + 0x34);
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) { sub_001C2913(); return; } /* je: equal / zero */

loc_001C2890: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x38))) { sub_001C2913(); return; } /* jne: not equal / not zero */

loc_001C289B: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_001C2913(); return; } /* jne: not equal / not zero */

loc_001C289F: ;
    xmm0 = MEMF(0x7FA248); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x3C;
    edx = esi + 0x48;
    edi = ecx;
    ebp = MEM32(edi);
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    MEM32(ebx + 4) = ebp;
    MEM32(ebx + 8) = edi;
    edi = MEM32(eax + 0x78);
    xmm1 = MEMF(edx); /* movss */
    MEM32(ecx) = edi;
    edi = MEM32(eax + 0x7C);
    xmm1 = xmm1 - MEMF(ecx); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esi + 0x40) = edi;
    eax = MEM32(eax + 0x80);
    MEMF(esi + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x4C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x40); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x50); /* movss */
    MEM32(esi + 0x44) = eax;
    xmm1 = xmm1 - MEMF(esi + 0x44); /* subss */
    POP32(esp, edi);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x5C) = xmm1; /* movss */
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2970
 * Original: 0x001C2970 - 0x001C2977 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2970(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C2970: ;
    if (TEST_NZ(eax, eax)) { sub_001C2977(); return; } /* jne: not equal / not zero */

loc_001C2974: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001C29C0
 * Original: 0x001C29C0 - 0x001C29DE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C29C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C29C0: ;
    eax = MEM32(0x7715C8);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_001C29DD; /* je: equal / zero */

loc_001C29CB: ;
    ecx = ecx | 0xFFFFFFFFu;
    edi = edi;

loc_001C29D0: ;
    MEM32(eax + 0x60) = edx;
    MEM32(eax + 0x64) = ecx;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, edx)) goto loc_001C29D0; /* jne: not equal / not zero */

loc_001C29DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C29E0
 * Original: 0x001C29E0 - 0x001C2A35 (85 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C29E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001C29E0: ;
    edx = MEM32(eax + 0x68);
    if (CMP_AE(edx, 0x205)) { sub_001C2A35(); return; } /* jae: above or equal (unsigned >=) */

loc_001C29EB: ;
    if (CMP_EQ(edx, 0xFFFF)) { sub_001C2A35(); return; } /* je: equal / zero */

loc_001C29F3: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1DA);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1DC);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi) = xmm0; /* movss */
    edx = MEM32(eax + 0x78);
    MEM32(ecx) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1DE);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(eax + 0x7C); /* addss */
    MEMF(ecx + 4) = xmm0; /* movss */
    eax = MEM32(eax + 0x80);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2A60
 * Original: 0x001C2A60 - 0x001C2AB5 (85 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2A60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001C2A60: ;
    edx = MEM32(eax + 0x68);
    if (CMP_AE(edx, 0x205)) { sub_001C2AB5(); return; } /* jae: above or equal (unsigned >=) */

loc_001C2A6B: ;
    if (CMP_EQ(edx, 0xFFFF)) { sub_001C2AB5(); return; } /* je: equal / zero */

loc_001C2A73: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1EC);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1EE);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi) = xmm0; /* movss */
    edx = MEM32(eax + 0x78);
    MEM32(ecx) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1F0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(eax + 0x7C); /* addss */
    MEMF(ecx + 4) = xmm0; /* movss */
    eax = MEM32(eax + 0x80);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2AE0
 * Original: 0x001C2AE0 - 0x001C2E90 (944 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2AE0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x68);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_A(esi, 0x7B)) goto loc_001C2BB6; /* ja: above (unsigned >) */

loc_001C2AF4: ;
    if (CMP_EQ(esi, 0x7B)) goto loc_001C2BAB; /* je: equal / zero */

loc_001C2AFA: ;
    if (CMP_A(esi, 0x77)) goto loc_001C2C80; /* ja: above (unsigned >) */

loc_001C2B03: ;
    esi = ZX8(MEM8(esi + 0x1C2ED4));
    { uint32_t _jt = MEM32(esi * 4 + 0x1C2E90); /* switch: 17 entries, 17 targets */
    if (_jt == 0x001C2B11u) goto loc_001C2B11;
    if (_jt == 0x001C2B1Cu) goto loc_001C2B1C;
    if (_jt == 0x001C2B27u) goto loc_001C2B27;
    if (_jt == 0x001C2B32u) goto loc_001C2B32;
    if (_jt == 0x001C2B3Du) goto loc_001C2B3D;
    if (_jt == 0x001C2B48u) goto loc_001C2B48;
    if (_jt == 0x001C2B53u) goto loc_001C2B53;
    if (_jt == 0x001C2B5Eu) goto loc_001C2B5E;
    if (_jt == 0x001C2B69u) goto loc_001C2B69;
    if (_jt == 0x001C2B74u) goto loc_001C2B74;
    if (_jt == 0x001C2B7Fu) goto loc_001C2B7F;
    if (_jt == 0x001C2B8Au) goto loc_001C2B8A;
    if (_jt == 0x001C2B95u) goto loc_001C2B95;
    if (_jt == 0x001C2BA0u) goto loc_001C2BA0;
    if (_jt == 0x001C2C68u) goto loc_001C2C68;
    if (_jt == 0x001C2C78u) goto loc_001C2C78;
    if (_jt == 0x001C2C80u) goto loc_001C2C80;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C2B11: ;
    MEM32(ecx) = 0x19;
    goto loc_001C2C7E;

loc_001C2B1C: ;
    MEM32(ecx) = 0x17;
    goto loc_001C2C7E;

loc_001C2B27: ;
    MEM32(ecx) = 0x13;
    goto loc_001C2C7E;

loc_001C2B32: ;
    MEM32(ecx) = 0x1B;
    goto loc_001C2C7E;

loc_001C2B3D: ;
    MEM32(ecx) = 0x10;
    goto loc_001C2C7E;

loc_001C2B48: ;
    MEM32(ecx) = 0x1A;
    goto loc_001C2C7E;

loc_001C2B53: ;
    MEM32(ecx) = 2;
    goto loc_001C2C7E;

loc_001C2B5E: ;
    MEM32(ecx) = 3;
    goto loc_001C2C7E;

loc_001C2B69: ;
    MEM32(ecx) = 5;
    goto loc_001C2C7E;

loc_001C2B74: ;
    MEM32(ecx) = 6;
    goto loc_001C2C7E;

loc_001C2B7F: ;
    MEM32(ecx) = 7;
    goto loc_001C2C7E;

loc_001C2B8A: ;
    MEM32(ecx) = 8;
    goto loc_001C2C7E;

loc_001C2B95: ;
    MEM32(ecx) = 0xA;
    goto loc_001C2C7E;

loc_001C2BA0: ;
    MEM32(ecx) = 0x1C;
    goto loc_001C2C7E;

loc_001C2BAB: ;
    MEM32(ecx) = 9;
    goto loc_001C2C7E;

loc_001C2BB6: ;
    if (CMP_A(esi, 0x99)) goto loc_001C2C13; /* ja: above (unsigned >) */

loc_001C2BBE: ;
    if (CMP_EQ(esi, 0x99)) goto loc_001C2C0B; /* je: equal / zero */

loc_001C2BC0: ;
    esi = esi - 0x7F;
    if (CMP_A(esi, 0x17)) goto loc_001C2C80; /* ja: above (unsigned >) */

loc_001C2BCC: ;
    esi = ZX8(MEM8(esi + 0x1C2F70));
    { uint32_t _jt = MEM32(esi * 4 + 0x1C2F4C); /* switch: 9 entries, 9 targets */
    if (_jt == 0x001C2BDAu) goto loc_001C2BDA;
    if (_jt == 0x001C2BE5u) goto loc_001C2BE5;
    if (_jt == 0x001C2BF0u) goto loc_001C2BF0;
    if (_jt == 0x001C2BFBu) goto loc_001C2BFB;
    if (_jt == 0x001C2C03u) goto loc_001C2C03;
    if (_jt == 0x001C2C3Eu) goto loc_001C2C3E;
    if (_jt == 0x001C2C70u) goto loc_001C2C70;
    if (_jt == 0x001C2C78u) goto loc_001C2C78;
    if (_jt == 0x001C2C80u) goto loc_001C2C80;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C2BDA: ;
    MEM32(ecx) = 0x16;
    goto loc_001C2C7E;

loc_001C2BE5: ;
    MEM32(ecx) = 0x12;
    goto loc_001C2C7E;

loc_001C2BF0: ;
    MEM32(ecx) = 0xE;
    goto loc_001C2C7E;

loc_001C2BFB: ;
    MEM32(ecx) = 0xF;
    goto loc_001C2C7E;

loc_001C2C03: ;
    MEM32(ecx) = 0xC;
    goto loc_001C2C7E;

loc_001C2C0B: ;
    MEM32(ecx) = 0x15;
    goto loc_001C2C7E;

loc_001C2C13: ;
    if (CMP_A(esi, 0x111)) goto loc_001C2C56; /* ja: above (unsigned >) */

loc_001C2C1B: ;
    if (CMP_EQ(esi, 0x111)) goto loc_001C2C78; /* je: equal / zero */

loc_001C2C1D: ;
    esi = esi - 0x9A;
    if (CMP_A(esi, 0x20)) goto loc_001C2C80; /* ja: above (unsigned >) */

loc_001C2C28: ;
    esi = ZX8(MEM8(esi + 0x1C2F9C));
    { uint32_t _jt = MEM32(esi * 4 + 0x1C2F88); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001C2C36u) goto loc_001C2C36;
    if (_jt == 0x001C2C3Eu) goto loc_001C2C3E;
    if (_jt == 0x001C2C46u) goto loc_001C2C46;
    if (_jt == 0x001C2C4Eu) goto loc_001C2C4E;
    if (_jt == 0x001C2C80u) goto loc_001C2C80;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C2C36: ;
    MEM32(ecx) = 0x18;
    goto loc_001C2C7E;

loc_001C2C3E: ;
    MEM32(ecx) = 0x14;
    goto loc_001C2C7E;

loc_001C2C46: ;
    MEM32(ecx) = 0x11;
    goto loc_001C2C7E;

loc_001C2C4E: ;
    MEM32(ecx) = 0xD;
    goto loc_001C2C7E;

loc_001C2C56: ;
    esi = esi - 0x114;
    if ((esi == 0)) goto loc_001C2C78; /* je: equal / zero */

loc_001C2C5E: ;
    esi = esi - 0x2B;
    if ((esi == 0)) goto loc_001C2C70; /* je: equal / zero */

loc_001C2C63: ;
    esi = esi - 0x5D;
    if ((esi != 0)) goto loc_001C2C80; /* jne: not equal / not zero */

loc_001C2C68: ;
    MEM32(ecx) = 4;
    goto loc_001C2C7E;

loc_001C2C70: ;
    MEM32(ecx) = 0xB;
    goto loc_001C2C7E;

loc_001C2C78: ;
    MEM32(ecx) = 0;

loc_001C2C7E: ;
    SET_LO8(eax, 4);

loc_001C2C80: ;
    ecx = MEM32(0x7FA1F8);
    if (CMP_A(ecx, 0x46)) goto loc_001C2E8D; /* ja: above (unsigned >) */

loc_001C2C8F: ;
    ecx = ZX8(MEM8(ecx + 0x1C301C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1C2FC0); /* switch: 23 entries, 23 targets */
    if (_jt == 0x001C2C9Du) goto loc_001C2C9D;
    if (_jt == 0x001C2CCCu) goto loc_001C2CCC;
    if (_jt == 0x001C2CE2u) goto loc_001C2CE2;
    if (_jt == 0x001C2CEDu) goto loc_001C2CED;
    if (_jt == 0x001C2CF8u) goto loc_001C2CF8;
    if (_jt == 0x001C2D03u) goto loc_001C2D03;
    if (_jt == 0x001C2D0Eu) goto loc_001C2D0E;
    if (_jt == 0x001C2D19u) goto loc_001C2D19;
    if (_jt == 0x001C2D24u) goto loc_001C2D24;
    if (_jt == 0x001C2D2Fu) goto loc_001C2D2F;
    if (_jt == 0x001C2D3Au) goto loc_001C2D3A;
    if (_jt == 0x001C2D45u) goto loc_001C2D45;
    if (_jt == 0x001C2D50u) goto loc_001C2D50;
    if (_jt == 0x001C2D6Au) goto loc_001C2D6A;
    if (_jt == 0x001C2D75u) goto loc_001C2D75;
    if (_jt == 0x001C2D8Bu) goto loc_001C2D8B;
    if (_jt == 0x001C2D96u) goto loc_001C2D96;
    if (_jt == 0x001C2DBFu) goto loc_001C2DBF;
    if (_jt == 0x001C2E41u) goto loc_001C2E41;
    if (_jt == 0x001C2E4Cu) goto loc_001C2E4C;
    if (_jt == 0x001C2E5Fu) goto loc_001C2E5F;
    if (_jt == 0x001C2E72u) goto loc_001C2E72;
    if (_jt == 0x001C2E8Du) goto loc_001C2E8D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C2C9D: ;
    MEM32(edi) = 0x15;
    edx = MEM32(edx + 0x68);
    SET_LO8(eax, LO8(eax) | 2);
    if (CMP_B(edx, 0x9C)) goto loc_001C2E8D; /* jb: below (unsigned <) */

loc_001C2CB4: ;
    if (CMP_A(edx, 0x9D)) goto loc_001C2E8D; /* ja: above (unsigned >) */

loc_001C2CC0: ;
    POP32(esp, esi);
    MEM32(ebp) = 0;
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2CCC: ;
    MEM32(edi) = 0x14;
    SET_LO8(ecx, MEM8(edx + 0x10B));
    SET_LO8(eax, LO8(eax) | 2);
    (void)0; /* cmp LO8(ecx), 9 - flags set for next jcc */
    goto loc_001C2E82;

loc_001C2CE2: ;
    MEM32(edi) = 0x10;
    goto loc_001C2E78;

loc_001C2CED: ;
    MEM32(edi) = 0x11;
    goto loc_001C2E78;

loc_001C2CF8: ;
    MEM32(edi) = 0xF;
    goto loc_001C2E78;

loc_001C2D03: ;
    MEM32(edi) = 0x12;
    goto loc_001C2E78;

loc_001C2D0E: ;
    MEM32(edi) = 0x13;
    goto loc_001C2E78;

loc_001C2D19: ;
    MEM32(edi) = 0xE;
    goto loc_001C2E78;

loc_001C2D24: ;
    MEM32(edi) = 0xA;
    goto loc_001C2E78;

loc_001C2D2F: ;
    MEM32(edi) = 0xB;
    goto loc_001C2E78;

loc_001C2D3A: ;
    MEM32(edi) = 0xC;
    goto loc_001C2E78;

loc_001C2D45: ;
    MEM32(edi) = 0xD;
    goto loc_001C2E78;

loc_001C2D50: ;
    MEM32(edi) = 7;
    ecx = ZX8(MEM8(edx + 0x10B));
    SET_LO8(eax, LO8(eax) | 2);
    ecx--;
    if ((ecx == 0)) goto loc_001C2DE1; /* je: equal / zero */

loc_001C2D62: ;
    ecx = ecx - 7;
    goto loc_001C2E82;

loc_001C2D6A: ;
    MEM32(edi) = 6;
    goto loc_001C2E78;

loc_001C2D75: ;
    MEM32(edi) = 5;
    SET_LO8(ecx, MEM8(edx + 0x10B));
    SET_LO8(eax, LO8(eax) | 2);
    (void)0; /* cmp LO8(ecx), 0x10 - flags set for next jcc */
    goto loc_001C2E82;

loc_001C2D8B: ;
    POP32(esp, esi);
    MEM32(edi) = 3;
    SET_LO8(eax, LO8(eax) | 2);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2D96: ;
    MEM32(edi) = 0;
    ecx = ZX8(MEM8(edx + 0x10B));
    ecx = ecx + 0xFFFFFFF9u;
    SET_LO8(eax, LO8(eax) | 2);
    if (CMP_A(ecx, 0x12)) goto loc_001C2E8D; /* ja: above (unsigned >) */

loc_001C2DB1: ;
    edx = ZX8(MEM8(ecx + 0x1C3078));
    { uint32_t _jt = MEM32(edx * 4 + 0x1C3064); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001C2DE1u) goto loc_001C2DE1;
    if (_jt == 0x001C2DEDu) goto loc_001C2DED;
    if (_jt == 0x001C2DF9u) goto loc_001C2DF9;
    if (_jt == 0x001C2E84u) goto loc_001C2E84;
    if (_jt == 0x001C2E8Du) goto loc_001C2E8D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C2DBF: ;
    MEM32(edi) = 1;
    ecx = ZX8(MEM8(edx + 0x10B));
    ecx = ecx + 0xFFFFFFFAu;
    SET_LO8(eax, LO8(eax) | 2);
    if (CMP_A(ecx, 9)) goto loc_001C2E8D; /* ja: above (unsigned >) */

loc_001C2DDA: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1C308C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x001C2DE1u) goto loc_001C2DE1;
    if (_jt == 0x001C2DEDu) goto loc_001C2DED;
    if (_jt == 0x001C2DF9u) goto loc_001C2DF9;
    if (_jt == 0x001C2E05u) goto loc_001C2E05;
    if (_jt == 0x001C2E11u) goto loc_001C2E11;
    if (_jt == 0x001C2E1Du) goto loc_001C2E1D;
    if (_jt == 0x001C2E29u) goto loc_001C2E29;
    if (_jt == 0x001C2E35u) goto loc_001C2E35;
    if (_jt == 0x001C2E84u) goto loc_001C2E84;
    if (_jt == 0x001C2E8Du) goto loc_001C2E8D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C2DE1: ;
    POP32(esp, esi);
    MEM32(ebp) = 1;
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2DED: ;
    POP32(esp, esi);
    MEM32(ebp) = 2;
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2DF9: ;
    POP32(esp, esi);
    MEM32(ebp) = 3;
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2E05: ;
    POP32(esp, esi);
    MEM32(ebp) = 4;
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2E11: ;
    POP32(esp, esi);
    MEM32(ebp) = 5;
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2E1D: ;
    POP32(esp, esi);
    MEM32(ebp) = 6;
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2E29: ;
    POP32(esp, esi);
    MEM32(ebp) = 7;
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2E35: ;
    POP32(esp, esi);
    MEM32(ebp) = 8;
    SET_LO8(eax, LO8(eax) | 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2E41: ;
    POP32(esp, esi);
    MEM32(edi) = 2;
    SET_LO8(eax, LO8(eax) | 2);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C2E4C: ;
    MEM32(edi) = 4;
    SET_LO8(ecx, MEM8(edx + 0x10B));
    SET_LO8(eax, LO8(eax) | 2);
    (void)0; /* cmp LO8(ecx), 6 - flags set for next jcc */
    goto loc_001C2E82;

loc_001C2E5F: ;
    MEM32(edi) = 8;
    SET_LO8(ecx, MEM8(edx + 0x10B));
    SET_LO8(eax, LO8(eax) | 2);
    (void)0; /* cmp LO8(ecx), 0x10 - flags set for next jcc */
    goto loc_001C2E82;

loc_001C2E72: ;
    MEM32(edi) = 9;

loc_001C2E78: ;
    ecx = ZX8(MEM8(edx + 0x10B));
    SET_LO8(eax, LO8(eax) | 2);
    ecx--;

loc_001C2E82: ;
    if ((ecx != 0)) goto loc_001C2E8D; /* jne: not equal / not zero */

loc_001C2E84: ;
    MEM32(ebp) = 0;
    SET_LO8(eax, LO8(eax) | 1);

loc_001C2E8D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C30C0
 * Original: 0x001C30C0 - 0x001C30E8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C30C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C30C0: ;
    esp = esp - 0xC;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = eax;
    eax = MEM32(ebp + 0x538);
    if (TEST_Z(eax, eax)) { sub_001C30E8(); return; } /* je: equal / zero */

loc_001C30E1: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001C32D0
 * Original: 0x001C32D0 - 0x001C3380 (176 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C32D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C32D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x538);
    if (TEST_Z(esi, esi)) goto loc_001C3371; /* je: equal / zero */

loc_001C32E4: ;
    PUSH32(esp, edi);
    goto loc_001C32F0;

    /* nop */
    edi = edi;

loc_001C32F0: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax * 4 + 0x59AC40);
    SET_LO16(eax, MEM16(ecx + 2));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    edi = MEM32(esi + 0x30);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_001C3318; /* je: equal / zero */

loc_001C3307: ;
    edx = SX16(LO16(eax));
    eax = MEM32(esi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x6B8EA4), _icall_esp); /* indirect call */
    }

loc_001C3315: ;
    esp = esp + 4;

loc_001C3318: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C336A; /* jne: not equal / not zero */

loc_001C3321: ;
    SET_LO8(ecx, MEM8(0x771758));
    if (CMP_LE(LO8(ecx) & LO8(ecx), 0)) goto loc_001C3342; /* jle: less or equal (signed <=) */

loc_001C332B: ;
    eax = 0x771740;
    ecx = ZX8(LO8(ecx));

loc_001C3333: ;
    if (CMP_NE(MEM32(eax), esi)) goto loc_001C333C; /* jne: not equal / not zero */

loc_001C3337: ;
    edx = MEM32(esi + 0xC);
    MEM32(eax) = edx;

loc_001C333C: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_001C3333; /* jne: not equal / not zero */

loc_001C3342: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C336A; /* jl: less (signed <) */

loc_001C3349: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001C335E; /* je: equal / zero */

loc_001C3356: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C3359: ;
    esp = esp + 4;
    goto loc_001C336A;

loc_001C335E: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C336A: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_001C32F0; /* jne: not equal / not zero */

loc_001C3370: ;
    POP32(esp, edi);

loc_001C3371: ;
    POP32(esp, esi);
    MEM32(ebp + 0x538) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3380
 * Original: 0x001C3380 - 0x001C3419 (153 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3380: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x538);
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_Z(edi, edi)) goto loc_001C3414; /* je: equal / zero */

loc_001C3392: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_001C3394: ;
    esi = MEM32(edi + 0x38);
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(esi, eax)) goto loc_001C33DB; /* je: equal / zero */

loc_001C339F: ;
    ecx = MEM32(eax * 4 + 0x59AC40);
    eax = MEM32(ecx + 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001C340B; /* je: equal / zero */

loc_001C33AE: ;
    if (CMP_EQ(eax, esi)) goto loc_001C33DB; /* je: equal / zero */

loc_001C33B2: ;
    ebp = MEM32(eax * 4 + 0x59AC40);
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001C3420(); /* call 0x001C3420 */

loc_001C33C3: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001C33DB; /* jne: not equal / not zero */

loc_001C33CA: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001C3420(); /* call 0x001C3420 */

loc_001C33D4: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C340B; /* je: equal / zero */

loc_001C33DB: ;
    ecx = MEM32(esi * 4 + 0x59AC40);
    SET_LO16(eax, MEM16(ecx));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_001C340B; /* je: equal / zero */

loc_001C33EB: ;
    ecx = MEM32(esp + 0x18);
    edx = SX16(LO16(eax));
    eax = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x6B8EB0), _icall_esp); /* indirect call */
    }

loc_001C3403: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */

loc_001C340B: ;
    edi = MEM32(edi + 0x30);
    if (TEST_NZ(edi, edi)) goto loc_001C3394; /* jne: not equal / not zero */

loc_001C3412: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001C3414: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3420
 * Original: 0x001C3420 - 0x001C342E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3420(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C3420: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(esi, 0xFFFFFFFFu)) { sub_001C342E(); return; } /* jne: not equal / not zero */

loc_001C342A: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3480
 * Original: 0x001C3480 - 0x001C34C9 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3480: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    ecx = MEM32(edi + 0x4B0);
    edx = MEM32(ecx + 0x24);
    SET_LO8(eax, MEM8(edi + 0x10B));
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D4CB4;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C34B5: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_001C34C9(); return; } /* je: equal / zero */

loc_001C34BC: ;
    eax = MEM32(esp + 0x44);
    if (TEST_Z(eax, eax)) { sub_001C34C9(); return; } /* je: equal / zero */

loc_001C34C4: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_001C34CB(); return; /* tail jmp 0x001C34CB */

}

/**
 * sub_001C35B0
 * Original: 0x001C35B0 - 0x001C3775 (453 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C35B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C35B0: ;
    esp = esp - 0x194;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x90;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001C35C6: ;
    ebp = MEM32(esp + 0x1A8);
    xmm1 = MEMF(0x648FF0); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, MEM8(ebp + 0x10B));
    edx = MEM32(ebp + 0x4B0);
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x649D04); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEM8(esp + 0x31) = LO8(eax);
    eax = MEM32(edx + 0x24);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x648F58); /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x648E14); /* movss */
    ecx = 0; /* xor self */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x649284); /* movss */
    esi = 2;
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */
    MEMF(esp + 0xF0) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649550); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ebx = 0x5F0C7C;
    MEM32(esp + 0xE4) = 0x303;
    MEM32(esp + 0xF0) = 3;
    MEM32(esp + 0x11C) = ecx;
    MEM32(esp + 0xCC) = 0x12012;
    MEM16(esp + 0x9E) = LO16(ecx);
    MEM8(esp + 0xEC) = 1;
    MEM32(esp + 0xFC) = esi;
    MEM32(esp + 0x104) = esi;
    MEM32(esp + 0x108) = ecx;
    MEM32(esp + 0x10C) = 4;
    MEM32(esp + 0x114) = ecx;
    MEM32(esp + 0x118) = esi;
    MEM32(esp + 0x38) = ebp;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C375F: ;
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_001C3775(); return; } /* je: equal / zero */

loc_001C3768: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, ebx)) { sub_001C3775(); return; } /* je: equal / zero */

loc_001C3770: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_001C3777(); return; /* tail jmp 0x001C3777 */

}

/**
 * sub_001C3A80
 * Original: 0x001C3A80 - 0x001C3B27 (167 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3A80: ;
    esp = esp - 0x2C;
    eax = MEM32(0x6B8ED0);
    xmm0 = MEMF(0x649030); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 1);
    eax = ebp;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x34) = esi;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x3C) = esi;
    PUSH32(esp, 0); sub_0018D7B0(); /* call 0x0018D7B0 */

loc_001C3AD6: ;
    ebx = eax;
    esp = esp + 8;
    if (CMP_EQ(ebx, esi)) goto loc_001C3B1A; /* je: equal / zero */

loc_001C3ADF: ;
    ecx = MEM32(0x6B8ED0);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    edx = ebx + 0x100;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = edx;
    ecx = 0xB;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0x13);
    edi = ebp;
    eax = ebx;
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_001C3B16: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_001C3B1A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x849474) = ebx;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001C3B30
 * Original: 0x001C3B30 - 0x001C3B73 (67 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3B30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001C3B30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEM32(0x6B8ED0) = 0x38;
    PUSH32(esp, 0); sub_001C3A80(); /* call 0x001C3A80 */

loc_001C3B44: ;
    eax = MEM32(0x849474);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001C3B72; /* je: equal / zero */

loc_001C3B50: ;
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(eax + 0x130) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x12C) = xmm0; /* movss */
    MEM8(eax + 0x134) = 1;

loc_001C3B72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C3B80
 * Original: 0x001C3B80 - 0x001C3BB7 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3B80(void)
{

loc_001C3B80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(0x6B8ED0) = 0x2C;
    PUSH32(esp, 0); sub_001C3A80(); /* call 0x001C3A80 */

loc_001C3B96: ;
    esp = esp + 4;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0); sub_001585C0(); /* call 0x001585C0 */

loc_001C3BA7: ;
    esp = esp + 8;
    edi = esi;
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_001C3BB1: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3BC0
 * Original: 0x001C3BC0 - 0x001C3BCF (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3BC0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3BC0: ;
    MEM32(0x6B8ED0) = 0x2C;
    g_seh_ebp = ebp; sub_001C3A80(); return; /* tail jmp 0x001C3A80 */

}

/**
 * sub_001C3C30
 * Original: 0x001C3C30 - 0x001C3C6C (60 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3C30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001C3C30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEM32(0x6B8ED0) = 0x34;
    PUSH32(esp, 0); sub_001C3A80(); /* call 0x001C3A80 */

loc_001C3C44: ;
    eax = MEM32(0x849474);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001C3C6B; /* je: equal / zero */

loc_001C3C50: ;
    xmm0 = MEMF(0x58BD48); /* movss */
    MEMF(eax + 0x130) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x12C) = xmm0; /* movss */

loc_001C3C6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C3C70
 * Original: 0x001C3C70 - 0x001C3C7E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3C70: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x14)) { sub_001C3C7E(); return; } /* jne: not equal / not zero */

loc_001C3C79: ;
    g_seh_ebp = ebp; sub_000AB0A0(); return; /* tail jmp 0x000AB0A0 */

}

/**
 * sub_001C3C80
 * Original: 0x001C3C80 - 0x001C3CBC (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3C80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F0C84;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C3CA8: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_001C3CBC(); return; } /* je: equal / zero */

loc_001C3CAF: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_001C3CBC(); return; } /* je: equal / zero */

loc_001C3CB7: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_001C3CBE(); return; /* tail jmp 0x001C3CBE */

}

/**
 * sub_001C3D00
 * Original: 0x001C3D00 - 0x001C3D0C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3D00(void)
{

loc_001C3D00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_0015E3A0(); /* call 0x0015E3A0 */

loc_001C3D0A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3D10
 * Original: 0x001C3D10 - 0x001C3D26 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3D10(void)
{

loc_001C3D10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFF);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_0014D570(); /* call 0x0014D570 */

loc_001C3D21: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3D30
 * Original: 0x001C3D30 - 0x001C3D7C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3D30(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C3D30: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_Z(edi, edi)) goto loc_001C3D7A; /* je: equal / zero */

loc_001C3D39: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F5320);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_001C3D45: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C3D7A; /* je: equal / zero */

loc_001C3D52: ;
    edi = MEM32(edi + 0x4B0);
    if (TEST_Z(edi, edi)) goto loc_001C3D7A; /* je: equal / zero */

loc_001C3D5C: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_001C3D7A; /* je: equal / zero */

loc_001C3D63: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ebx = 0x5F5320;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_001C3D76: ;
    esp = esp + 4;
    POP32(esp, ebx);

loc_001C3D7A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3D80
 * Original: 0x001C3D80 - 0x001C3ECC (332 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3D80(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C3D80: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_Z(edi, edi)) goto loc_001C3ECA; /* je: equal / zero */

loc_001C3D8D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F5310);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_001C3D9A: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C3DCD; /* je: equal / zero */

loc_001C3DA7: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_001C3DCD; /* je: equal / zero */

loc_001C3DB1: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_001C3DCD; /* je: equal / zero */

loc_001C3DB8: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F5310;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_001C3DCA: ;
    esp = esp + 4;

loc_001C3DCD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F5300);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_001C3DD9: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C3E0C; /* je: equal / zero */

loc_001C3DE6: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_001C3E0C; /* je: equal / zero */

loc_001C3DF0: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_001C3E0C; /* je: equal / zero */

loc_001C3DF7: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F5300;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_001C3E09: ;
    esp = esp + 4;

loc_001C3E0C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F52F4);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_001C3E18: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C3E4B; /* je: equal / zero */

loc_001C3E25: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_001C3E4B; /* je: equal / zero */

loc_001C3E2F: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_001C3E4B; /* je: equal / zero */

loc_001C3E36: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F52F4;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_001C3E48: ;
    esp = esp + 4;

loc_001C3E4B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F52E4);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_001C3E57: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C3E8A; /* je: equal / zero */

loc_001C3E64: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_001C3E8A; /* je: equal / zero */

loc_001C3E6E: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_001C3E8A; /* je: equal / zero */

loc_001C3E75: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F52E4;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_001C3E87: ;
    esp = esp + 4;

loc_001C3E8A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F52D4);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_001C3E96: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C3EC9; /* je: equal / zero */

loc_001C3EA3: ;
    edi = MEM32(edi + 0x4B0);
    if (TEST_Z(edi, edi)) goto loc_001C3EC9; /* je: equal / zero */

loc_001C3EAD: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_001C3EC9; /* je: equal / zero */

loc_001C3EB4: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F52D4;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_001C3EC6: ;
    esp = esp + 4;

loc_001C3EC9: ;
    POP32(esp, ebx);

loc_001C3ECA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3ED0
 * Original: 0x001C3ED0 - 0x001C3FBA (234 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3ED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C3ED0: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001C3F5E; /* je: equal / zero */

loc_001C3EDE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E9900);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_001C3EEB: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C3F1E; /* je: equal / zero */

loc_001C3EF8: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_001C3F1E; /* je: equal / zero */

loc_001C3F02: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_001C3F1E; /* je: equal / zero */

loc_001C3F09: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5E9900;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_001C3F1B: ;
    esp = esp + 4;

loc_001C3F1E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E98F8);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_001C3F2A: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C3F5D; /* je: equal / zero */

loc_001C3F37: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_001C3F5D; /* je: equal / zero */

loc_001C3F41: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_001C3F5D; /* je: equal / zero */

loc_001C3F48: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5E98F8;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_001C3F5A: ;
    esp = esp + 4;

loc_001C3F5D: ;
    POP32(esp, ebx);

loc_001C3F5E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5F52C8);
    esi = edi;
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_001C3F6B: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C3FB5; /* je: equal / zero */

loc_001C3F73: ;
    SET_LO8(eax, MEM8(edi + 0x10B));
    PUSH32(esp, 0xFF);
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x12C);
    ecx = 8;
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(edx, 0); /* xor self */
    MEM8(esp + 0x15) = 0;
    MEM8(esp + 0x16) = 2;
    PUSH32(esp, 0); sub_00176470(); /* call 0x00176470 */

loc_001C3FA4: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001C3FB5; /* je: equal / zero */

loc_001C3FAB: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x64) = edi;
    MEM32(eax + 0x68) = ecx;

loc_001C3FB5: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C3FC0
 * Original: 0x001C3FC0 - 0x001C3FC9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3FC0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3FC0: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_001C3ED0(); return; /* tail jmp 0x001C3ED0 */

}

/**
 * sub_001C3FF0
 * Original: 0x001C3FF0 - 0x001C404F (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C3FF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D4CB4;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C4014: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B37D0(); /* call 0x002B37D0 */

loc_001C4027: ;
    SET_LO8(ecx, MEM8(0x7FA23C));
    esp = esp + 0x24;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C404D; /* jne: not equal / not zero */

loc_001C4035: ;
    if (TEST_Z(eax, eax)) goto loc_001C404D; /* je: equal / zero */

loc_001C4039: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    edx = ecx + ecx * 4;
    edx = edx << 3;
    MEM32(eax + 0xB0) = edx;

loc_001C404D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4050
 * Original: 0x001C4050 - 0x001C40E8 (152 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4050(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C4050: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = edx;
    ecx = 0; /* xor self */
    SET_LO8(ebx, 9);
    edi = edi;

loc_001C4060: ;
    esi = MEM32(eax + 0x64);
    if (TEST_Z(esi, esi)) goto loc_001C406F; /* je: equal / zero */

loc_001C4067: ;
    if (CMP_EQ(MEM8(eax + 0x10B), LO8(ebx))) goto loc_001C40E2; /* je: equal / zero */

loc_001C406F: ;
    eax = eax + 0x6D0;
    ecx++;
    if (CMP_L(ecx, 0x81)) goto loc_001C4060; /* jl: less (signed <) */

loc_001C407D: ;
    eax = eax | 0xFFFFFFFFu;

loc_001C4080: ;
    esi = MEM32(esp + 0xC);
    SET_LO8(ebx, MEM8(esi + 0x209));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x135) = LO8(eax);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(ebx, LO8(ebx) | 0x34);
    MEM8(esi + 0x209) = LO8(ebx);
    ecx = MEM32(eax + edx + -544);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F52C0;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C40C7: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_001C40E8(); return; } /* je: equal / zero */

loc_001C40CE: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_001C40E8(); return; } /* je: equal / zero */

loc_001C40D6: ;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x12C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C40E2: ;
    eax = ZX16(MEM16(eax + 0x60));
    goto loc_001C4080;

}

/**
 * sub_001C4100
 * Original: 0x001C4100 - 0x001C42B5 (437 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4100: ;
    esp = esp - 0x198;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x94;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001C4116: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = MEM32(esp + 0x1AC);
    SET_LO8(eax, MEM8(ebp + 0x10B));
    edx = MEM32(ebp + 0x4B0);
    xmm1 = MEMF(0x64908C); /* movss */
    xmm2 = MEMF(0x64A2FC); /* movss */
    MEM8(esp + 0x35) = LO8(eax);
    eax = MEM32(edx + 0x24);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */
    MEMF(esp + 0xF0) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x649284); /* movss */
    ecx = 0; /* xor self */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    esi = 2;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x649B0C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5A4); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ebx = 0x5F0678;
    MEM32(esp + 0xE8) = 0x303;
    MEM32(esp + 0xF4) = 3;
    MEM32(esp + 0x120) = ecx;
    MEM32(esp + 0xD0) = 0x12002;
    MEM16(esp + 0xA2) = LO16(ecx);
    MEM8(esp + 0xF0) = 1;
    MEM32(esp + 0x100) = esi;
    MEM32(esp + 0x108) = esi;
    MEM32(esp + 0x10C) = ecx;
    MEM32(esp + 0x110) = 4;
    MEM32(esp + 0x118) = ecx;
    MEM32(esp + 0x11C) = esi;
    MEM32(esp + 0x3C) = ebp;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C429F: ;
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_001C42B5(); return; } /* je: equal / zero */

loc_001C42A8: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, ebx)) { sub_001C42B5(); return; } /* je: equal / zero */

loc_001C42B0: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_001C42B7(); return; /* tail jmp 0x001C42B7 */

}

/**
 * sub_001C4390
 * Original: 0x001C4390 - 0x001C4545 (437 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4390: ;
    esp = esp - 0x198;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x94;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001C43A6: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = MEM32(esp + 0x1AC);
    SET_LO8(eax, MEM8(ebp + 0x10B));
    edx = MEM32(ebp + 0x4B0);
    xmm1 = MEMF(0x648D50); /* movss */
    xmm2 = MEMF(0x64A2FC); /* movss */
    MEM8(esp + 0x35) = LO8(eax);
    eax = MEM32(edx + 0x24);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */
    MEMF(esp + 0xF0) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x649284); /* movss */
    ecx = 0; /* xor self */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    esi = 2;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x649B0C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A5A4); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ebx = 0x5F0678;
    MEM32(esp + 0xE8) = 0x303;
    MEM32(esp + 0xF4) = 3;
    MEM32(esp + 0x120) = ecx;
    MEM32(esp + 0xD0) = 0x12002;
    MEM16(esp + 0xA2) = LO16(ecx);
    MEM8(esp + 0xF0) = 1;
    MEM32(esp + 0x100) = esi;
    MEM32(esp + 0x108) = esi;
    MEM32(esp + 0x10C) = ecx;
    MEM32(esp + 0x110) = 4;
    MEM32(esp + 0x118) = ecx;
    MEM32(esp + 0x11C) = esi;
    MEM32(esp + 0x3C) = ebp;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C452F: ;
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_001C4545(); return; } /* je: equal / zero */

loc_001C4538: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, ebx)) { sub_001C4545(); return; } /* je: equal / zero */

loc_001C4540: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_001C4547(); return; /* tail jmp 0x001C4547 */

}

/**
 * sub_001C4620
 * Original: 0x001C4620 - 0x001C47DC (444 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4620: ;
    esp = esp - 0x1A0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x98;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001C4635: ;
    ebp = MEM32(esp + 0x1B0);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(ebp + 0x4B0);
    xmm1 = MEMF(0x6490B0); /* movss */
    xmm2 = MEMF(0x649124); /* movss */
    eax = 2;
    MEM32(esp + 0xF8) = eax;
    MEM32(esp + 0x100) = eax;
    MEM32(esp + 0x114) = eax;
    SET_LO8(eax, MEM8(ebp + 0x10B));
    MEM8(esp + 0x2D) = LO8(eax);
    eax = MEM32(edx + 0x24);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(0x648E40); /* movss */
    ecx = 0; /* xor self */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x649284); /* movss */
    MEMF(esp + 0xE8) = xmm0; /* movss */
    MEMF(esp + 0xF4) = xmm0; /* movss */
    MEMF(esp + 0xF8) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648F8C); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ebx = 0x5F36A4;
    MEM32(esp + 0xEC) = 0x303;
    MEM32(esp + 0xF8) = 3;
    MEM32(esp + 0x124) = ecx;
    MEM32(esp + 0xD4) = 0x2012;
    MEM16(esp + 0xA6) = LO16(ecx);
    MEM8(esp + 0xF4) = 1;
    MEM32(esp + 0x110) = ecx;
    MEM32(esp + 0x114) = 4;
    MEM32(esp + 0x11C) = ecx;
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEM32(esp + 0x34) = ebp;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C47C6: ;
    esp = esp + 0xC;
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_001C47DC(); return; } /* je: equal / zero */

loc_001C47CF: ;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(eax, ebx)) { sub_001C47DC(); return; } /* je: equal / zero */

loc_001C47D7: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_001C47DE(); return; /* tail jmp 0x001C47DE */

}

/**
 * sub_001C4900
 * Original: 0x001C4900 - 0x001C4963 (99 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4900(void)
{

loc_001C4900: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    esi = edi;
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_001C491A: ;
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_001C4922: ;
    eax = MEM32(edi + 0x80);
    ecx = MEM32(edi + 0x7C);
    edx = MEM32(edi + 0x78);
    esp = esp + 4;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00124100(); /* call 0x00124100 */

loc_001C4955: ;
    esp = esp + 0x28;
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_001C495D: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4970
 * Original: 0x001C4970 - 0x001C49D3 (99 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4970(void)
{

loc_001C4970: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    esi = edi;
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_001C498A: ;
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_001C4992: ;
    eax = MEM32(edi + 0x80);
    ecx = MEM32(edi + 0x7C);
    edx = MEM32(edi + 0x78);
    esp = esp + 4;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00124100(); /* call 0x00124100 */

loc_001C49C5: ;
    esp = esp + 0x28;
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_001C49CD: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C49E0
 * Original: 0x001C49E0 - 0x001C4A08 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C49E0(void)
{

loc_001C49E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_001C49F8: ;
    esp = esp + 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_001C4A02: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4A10
 * Original: 0x001C4A10 - 0x001C4A41 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4A10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C4A10: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C4A40; /* jne: not equal / not zero */

loc_001C4A19: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C4A25: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C4A3F; /* jl: less (signed <) */

loc_001C4A2C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_001C4A41(); return; } /* je: equal / zero */

loc_001C4A39: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C4A3C: ;
    esp = esp + 4;

loc_001C4A3F: ;
    POP32(esp, esi);

loc_001C4A40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C4AD0
 * Original: 0x001C4AD0 - 0x001C4AFE (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4AD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C4AD0: ;
    eax = MEM32(esp + 8);
    eax = eax - 0;
    if ((eax == 0)) { sub_001C4AFE(); return; } /* je: equal / zero */

loc_001C4AD9: ;
    eax--;
    if ((eax == 0)) goto loc_001C4AF0; /* je: equal / zero */

loc_001C4ADC: ;
    eax--;
    if ((eax == 0)) goto loc_001C4AE2; /* je: equal / zero */

loc_001C4ADF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001C4AE2: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) & 0xFFFFFFFEu;
    eax = 1;
    esp += 4; return; /* ret */

loc_001C4AF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) | 1;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001C4B30
 * Original: 0x001C4B30 - 0x001C4B79 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4B30: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    ecx = edx;
    ecx = ecx - 0;
    if ((ecx == 0)) { sub_001C4B79(); return; } /* je: equal / zero */

loc_001C4B3F: ;
    ecx--;
    if ((ecx == 0)) goto loc_001C4B6A; /* je: equal / zero */

loc_001C4B42: ;
    ecx--;
    if ((ecx == 0)) goto loc_001C4B52; /* je: equal / zero */

loc_001C4B45: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001C4AD0(); return; /* tail jmp 0x001C4AD0 */

loc_001C4B52: ;
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) & 0xFFFFFFFEu;
    eax = MEM32(eax + 0x354);
    if (TEST_Z(eax, eax)) goto loc_001C4B73; /* je: equal / zero */

loc_001C4B60: ;
    MEM8(eax + 0x36) = 0;
    eax = 1;
    esp += 4; return; /* ret */

loc_001C4B6A: ;
    ecx = MEM32(eax + 0x2C);
    ecx = ecx | 1;
    MEM32(eax + 0x2C) = ecx;

loc_001C4B73: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001C4C90
 * Original: 0x001C4C90 - 0x001C4D15 (133 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4C90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_001C4D11; /* je: equal / zero */

loc_001C4CA1: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2B);
    eax = 0x3C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001C4CB2: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001C4CE5; /* je: equal / zero */

loc_001C4CB9: ;
    MEM32(eax + 0x2C) = esi;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebp;
    ecx = MEM32(edi + 0x538);
    MEM32(eax + 0x30) = ecx;
    MEM32(edi + 0x538) = eax;
    ecx = MEM32(eax + 0x30);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(eax + 0x34) = ebx;
    if (CMP_EQ(ecx, ebx)) goto loc_001C4D11; /* je: equal / zero */

loc_001C4CDE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x34) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C4CE5: ;
    edx = MEM32(ebp * 4 + 0x59AC40);
    SET_LO16(eax, MEM16(edx + 2));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_001C4D0A; /* je: equal / zero */

loc_001C4CF6: ;
    eax = SX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B8EA4), _icall_esp); /* indirect call */
    }

loc_001C4D01: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C4D0A: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001C4D0F: ;
    eax = ebx;

loc_001C4D11: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4D20
 * Original: 0x001C4D20 - 0x001C4D8D (109 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C4D20: ;
    if (CMP_NE(MEM32(eax + 0x538), esi)) goto loc_001C4D31; /* jne: not equal / not zero */

loc_001C4D28: ;
    ecx = MEM32(esi + 0x30);
    MEM32(eax + 0x538) = ecx;

loc_001C4D31: ;
    eax = MEM32(esi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_001C4D3E; /* je: equal / zero */

loc_001C4D38: ;
    edx = MEM32(esi + 0x34);
    MEM32(eax + 0x34) = edx;

loc_001C4D3E: ;
    eax = MEM32(esi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_001C4D4B; /* je: equal / zero */

loc_001C4D45: ;
    ecx = MEM32(esi + 0x30);
    MEM32(eax + 0x30) = ecx;

loc_001C4D4B: ;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C4D89; /* jne: not equal / not zero */

loc_001C4D58: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C4D5F: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C4D89; /* jl: less (signed <) */

loc_001C4D66: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001C4D7D; /* je: equal / zero */

loc_001C4D73: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C4D76: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001C4D7D: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C4D89: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4D90
 * Original: 0x001C4D90 - 0x001C4DD0 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4D90: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x538);
    /* nop */

loc_001C4DA0: ;
    SET_LO8(eax, 0); /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_Z(edi, edi)) { sub_001C4DD0(); return; } /* je: equal / zero */

loc_001C4DA8: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C4DC0; /* jne: not equal / not zero */

loc_001C4DAC: ;
    if (CMP_NE(MEM32(esi + 0x2C), ebp)) goto loc_001C4DB5; /* jne: not equal / not zero */

loc_001C4DB1: ;
    SET_LO8(eax, 1);
    goto loc_001C4DB8;

loc_001C4DB5: ;
    esi = MEM32(esi + 0x30);

loc_001C4DB8: ;
    if (TEST_NZ(esi, esi)) goto loc_001C4DA8; /* jne: not equal / not zero */

loc_001C4DBC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001C4DD0(); return; } /* je: equal / zero */

loc_001C4DC0: ;
    if (TEST_Z(esi, esi)) goto loc_001C4DA0; /* je: equal / zero */

loc_001C4DC4: ;
    edi = MEM32(esi + 0x30);
    eax = ebx;
    PUSH32(esp, 0); sub_001C4D20(); /* call 0x001C4D20 */

loc_001C4DCE: ;
    goto loc_001C4DA0;

}

/**
 * sub_001C4DE0
 * Original: 0x001C4DE0 - 0x001C4E2F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C4DE0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C4E2B; /* jne: not equal / not zero */

loc_001C4DEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edi + 0x10B));
    PUSH32(esp, 0x16);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    esi = esp + 0x14;
    MEM32(esp + 0x14) = edi;
    MEM8(esp + 0x18) = LO8(eax);
    MEM8(esp + 0x19) = 0;
    MEM16(esp + 0x1A) = 0x12C;
    PUSH32(esp, 0); sub_001C2770(); /* call 0x001C2770 */

loc_001C4E1E: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_001C4E26: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001C4E2B: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C4E30
 * Original: 0x001C4E30 - 0x001C4E6C (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4E30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4E30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F0C84;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C4E58: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_001C4E6C(); return; } /* je: equal / zero */

loc_001C4E5F: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_001C4E6C(); return; } /* je: equal / zero */

loc_001C4E67: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_001C4E6E(); return; /* tail jmp 0x001C4E6E */

}

/**
 * sub_001C4EB0
 * Original: 0x001C4EB0 - 0x001C4EB9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4EB0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4EB0: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_001C4F00(); return; /* tail jmp 0x001C4F00 */

}

/**
 * sub_001C4F00
 * Original: 0x001C4F00 - 0x001C4F91 (145 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C4F00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    SET_LO8(ebx, 1);
    edi = eax;
    PUSH32(esp, 0); sub_0014D570(); /* call 0x0014D570 */

loc_001C4F11: ;
    PUSH32(esp, 0xFF);
    SET_LO8(ebx, 2);
    eax = edi;
    PUSH32(esp, 0); sub_0014D570(); /* call 0x0014D570 */

loc_001C4F1F: ;
    esp = esp + 8;
    eax = edi;
    PUSH32(esp, 0); sub_0017E5F0(); /* call 0x0017E5F0 */

loc_001C4F29: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C4F5B; /* jne: not equal / not zero */

loc_001C4F32: ;
    if (TEST_Z(edi, edi)) goto loc_001C4F5B; /* je: equal / zero */

loc_001C4F36: ;
    eax = MEM32(edi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F0C84;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C4F58: ;
    esp = esp + 0xC;

loc_001C4F5B: ;
    edx = MEM32(edi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F0C84;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_001C4F7D: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_001C4F91(); return; } /* je: equal / zero */

loc_001C4F84: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) { sub_001C4F91(); return; } /* je: equal / zero */

loc_001C4F8C: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_001C4F93(); return; /* tail jmp 0x001C4F93 */

}

/**
 * sub_001C5070
 * Original: 0x001C5070 - 0x001C5105 (149 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5070(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001C5070: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x58;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001C509C: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C50ED; /* je: equal / zero */

loc_001C50A3: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x3A;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x2B;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_001C50ED: ;
    PUSH32(esp, esi);
    MEM32(0x6B8ED0) = 0x2C;
    PUSH32(esp, 0); sub_001C3A80(); /* call 0x001C3A80 */

loc_001C50FD: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001C5110
 * Original: 0x001C5110 - 0x001C5138 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5110(void)
{

loc_001C5110: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_001C5128: ;
    esp = esp + 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_001C4C90(); /* call 0x001C4C90 */

loc_001C5132: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C5140
 * Original: 0x001C5140 - 0x001C518F (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5140(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C5140: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, 0xFF);
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x12C);
    ecx = 8;
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(edx, 0); /* xor self */
    MEM8(esp + 0x15) = 1;
    MEM8(esp + 0x16) = 0xFF;
    PUSH32(esp, 0); sub_00176470(); /* call 0x00176470 */

loc_001C5179: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001C518A; /* je: equal / zero */

loc_001C5180: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x68) = ecx;

loc_001C518A: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C5190
 * Original: 0x001C5190 - 0x001C51DF (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5190(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C5190: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, 0xFF);
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x12C);
    ecx = 8;
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(edx, 0); /* xor self */
    MEM8(esp + 0x15) = 2;
    MEM8(esp + 0x16) = 1;
    PUSH32(esp, 0); sub_00176470(); /* call 0x00176470 */

loc_001C51C9: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001C51DA; /* je: equal / zero */

loc_001C51D0: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x68) = ecx;

loc_001C51DA: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C51E0
 * Original: 0x001C51E0 - 0x001C522F (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C51E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C51E0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, 0xFF);
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x12C);
    ecx = 8;
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(edx, 0); /* xor self */
    MEM8(esp + 0x15) = 3;
    MEM8(esp + 0x16) = 0;
    PUSH32(esp, 0); sub_00176470(); /* call 0x00176470 */

loc_001C5219: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001C522A; /* je: equal / zero */

loc_001C5220: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x68) = ecx;

loc_001C522A: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C5230
 * Original: 0x001C5230 - 0x001C5247 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5230(void)
{

loc_001C5230: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0); sub_00161590(); /* call 0x00161590 */

loc_001C5243: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C5250
 * Original: 0x001C5250 - 0x001C526E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5250(void)
{

loc_001C5250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    eax = esi;
    PUSH32(esp, 0); sub_00170890(); /* call 0x00170890 */

loc_001C5261: ;
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    PUSH32(esp, 0); sub_00170BA0(); /* call 0x00170BA0 */

loc_001C526C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C5270
 * Original: 0x001C5270 - 0x001C52C9 (89 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5270(void)
{
    float xmm0;

loc_001C5270: ;
    esp = esp - 0x1C;
    eax = MEM32(esp + 0x20);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    ecx = esp;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648F20); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 0;
    MEM8(esp + 0x14) = LO8(eax);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM16(esp + 0x1C) = 0x14;
    MEM16(esp + 0x1E) = 0x12C;
    MEM8(esp + 0x20) = 4;
    PUSH32(esp, 0); sub_00157670(); /* call 0x00157670 */

loc_001C52C5: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_001C52D0
 * Original: 0x001C52D0 - 0x001C5341 (113 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C52D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001C52D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm0 = xmm0 + MEMF(esi + 0x30); /* addss */
    xmm1 = MEMF(esi + 0x2C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x30) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_001C530E; /* jb: below (unsigned <) */

loc_001C52F9: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C530E; /* jne: not equal / not zero */

loc_001C5302: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C530E: ;
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x2C); /* divss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_001C5331: ;
    esi = MEM32(esi + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001C533C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C5350
 * Original: 0x001C5350 - 0x001C567F (815 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5350(void)
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

loc_001C5350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1B4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(esi + 0x14));
    SET_LO8(eax, 1);
    (void)0; /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_001C5678; /* je: equal / zero */

loc_001C536F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    esp = esp - 8;
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x7C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_001C53E4: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x24;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001C5418: ;
    xmm4 = MEMF(esp + 0x48); /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm6 = MEMF(esp + 0x50); /* movss */
    xmm5 = MEMF(esp + 0x4C); /* movss */
    xmm3 = MEMF(esp + 0x28); /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm3 = xmm3 - xmm6; /* subss */
    MEMF(esp + 0x2C) = xmm7; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm7 = xmm7 - xmm2; /* subss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    eax = esp + 0x2C;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm3 = xmm3 + xmm6; /* addss */
    ebx = eax;
    MEMF(esp + 0x30) = xmm7; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001C54C7: ;
    MEM32(0x780AB0) = 0x5F5348;
    MEM32(0x6C0210) = 0x8B;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x158;
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_001C5526: ;
    edi = eax;
    eax = esp + 0x6C;
    esp = esp + 0x30;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001C5536: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0xC8;
    PUSH32(esp, edx);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_001C5570: ;
    esp = esp + 0x30;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    if (CMP_EQ(edi, ebx)) goto loc_001C5676; /* je: equal / zero */

loc_001C5597: ;
    if (CMP_EQ(eax, ebx)) goto loc_001C5676; /* je: equal / zero */

loc_001C559F: ;
    eax = MEM32(esi + 0x18);
    edx = eax;
    edx = edx >> 0x1F;
    SET_LO8(edx, ~LO8(edx));
    PUSH32(esp, 0xFF);
    ecx = eax;
    edi = eax;
    edx = edx & 0xFFFFFF01u;
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x21));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esi + 0x20);
    xmm0 = xmm0 * MEMF(0x64AEE0); /* mulss */
    edx = edx & 0xFF;
    esp = esp - 8;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 4) = xmm0; /* movss */
    if (CMP_GE(edx & edx, 0)) goto loc_001C55ED; /* jge: greater or equal (signed >=) */

loc_001C55E7: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C55ED: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = ecx;
    ecx = ecx >> 0x1E;
    eax = eax >> 0x1B;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx & 0xFFFFFF01u;
    SET_LO8(eax, ~LO8(eax));
    edx = edx >> 0x1C;
    edx = edx & 0xFFFFFF01u;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    SET_LO16(edx, ZX8(MEM8(esi + 0x1A)));
    eax = eax & 0xFFFFFF01u;
    PUSH32(esp, eax);
    eax = edi;
    eax = eax >> 0x1A;
    eax = eax & 0xFFFFFF01u;
    PUSH32(esp, eax);
    ecx = edi;
    ecx = ecx >> 0x19;
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x18));
    PUSH32(esp, edx);
    SET_LO16(eax, ZX8(MEM8(esi + 0x19)));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x1E));
    ecx = ecx & 0xFF;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x1C));
    PUSH32(esp, edx);
    edx = esp + 0xD0;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x170;
    PUSH32(esp, edx);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_001C5680(); /* call 0x001C5680 */

loc_001C5673: ;
    esp = esp + 0x48;

loc_001C5676: ;
    SET_LO8(eax, 1);

loc_001C5678: ;
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
 * sub_001C5680
 * Original: 0x001C5680 - 0x001C5B26 (1190 bytes, 273 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;

loc_001C5680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2E4;
    SET_LO8(edx, MEM8(ebp + 0x30));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    MEM32(esp + 0x2CC) = ecx;
    MEM32(esp + 0x2D0) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x2C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) - 1);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(esp + 0x2CC) = esi;
    edx = edx & 2;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    SET_LO8(edx, MEM8(ebp + 0x34));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    edx = edx & 4;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    SET_LO8(edx, MEM8(ebp + 0x3C));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    edx = edx & 8;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    SET_LO8(edx, MEM8(ebp + 0x48));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    edx = edx & 0x10;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(esp + 0x2C8) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x48));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C5701; /* jne: not equal / not zero */

loc_001C56FD: ;
    MEM8(esi + 0x14) = 1;

loc_001C5701: ;
    SET_LO8(ecx, MEM8(ebp + 0x38));
    xmm0 = MEMF(ebp + 0x40); /* movss */
    esi = MEM32(ebp + 0xC);
    SET_LO16(edx, MEM16(ebp + 0x28));
    MEM8(esp + 0x2D8) = LO8(ecx);
    MEMF(esp + 0x2DC) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x44); /* movss */
    MEMF(esp + 0x2E0) = xmm0; /* movss */
    ecx = 0x24;
    edi = esp + 0x1A0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0x14);
    ecx = 0x24;
    edi = esp + 0x230;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x24);
    MEM16(esp + 0x2C0) = LO16(ecx);
    ecx = ecx + eax;
    MEM16(esp + 0x2C2) = LO16(eax);
    MEM16(esp + 0x2C4) = LO16(edx);
    MEM16(esp + 0x2C6) = LO16(ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C5777: ;
    xmm6 = MEMF(0x6490AC); /* movss */
    xmm7 = MEMF(0x649924); /* movss */
    xmm5 = MEMF(0x6495A8); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - MEMF(0x64945C); /* subss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x148) = xmm0; /* movss */
    MEMF(esp + 0x140) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C57BA: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(0x649B74); /* addss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14C) = xmm0; /* movss */
    MEMF(esp + 0x144) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C57E5: ;
    xmm6 = MEMF(0x649B70); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x150) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C5807: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x154) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C5821: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x158) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C583B: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x15C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C584D: ;
    xmm5 = MEMF(0x6493A8); /* movss */
    xmm6 = MEMF(0x648F08); /* movss */
    xmm7 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x160) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001C587F: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm7; /* mulss */
    eax = esp + 0x28;
    MEMF(esp + 0x164) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001C589D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esi = MEM32(ebp + 0x10);
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 4); /* subss */
    MEM32(esp + 0x70) = 0x303;
    MEMF(esp + 0x50) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(ebp + 0x1C));
    SET_LO8(eax, MEM8(ebp + 0x20));
    edx = MEM32(ebp + 0x4C);
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 8); /* subss */
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    eax = MEM32(ebp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    SET_LO8(ecx, (CMP_A(LO8(eax), LO8(ecx))) ? 1 : 0); /* seta */
    PUSH32(esp, eax);
    eax = ebx;
    edi = esp + 0x194;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEM8(esp + 0x1F) = LO8(ecx);
    PUSH32(esp, 0); sub_001C6490(); /* call 0x001C6490 */

loc_001C590C: ;
    ecx = MEM32(ebp + 0x4C);
    edx = MEM32(ebp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    eax = esi;
    edi = esp + 0x1A0;
    PUSH32(esp, 0); sub_001C6490(); /* call 0x001C6490 */

loc_001C5925: ;
    xmm2 = MEMF(0x648D10); /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    eax = MEM32(ebp + 0x18);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ebx); /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(esp + 0x60); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 4); /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(esp + 0x64); /* movss */
    MEM32(esp + 0x178) = eax;
    MEM32(esp + 0x28) = ecx;
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 8); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(esp + 0x30) = eax;
    ecx = 2;
    eax = 4;
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xB4) = ecx;
    ecx = MEM32(ebx);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(ebx + 4);
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0xA8) = eax;
    eax = MEM32(ebx + 8);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esi);
    edi = 0; /* xor self */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esi + 4);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esi + 8);
    esi = MEM32(0x7FA1F8);
    MEM32(esp + 0x50) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp esi, 0x36 - flags set for next jcc */
    MEMF(esp + 0x1A4) = xmm1; /* movss */
    MEM8(esp + 0x1A8) = 0;
    MEM32(esp + 0x17C) = edi;
    MEM8(esp + 0x88) = 1;
    MEM32(esp + 0x8C) = 0x59;
    MEM8(esp + 0x38) = 6;
    MEM32(esp + 0xA4) = edi;
    MEM32(esp + 0xB0) = edi;
    MEM16(esp + 0x3A) = 0x12C;
    MEMF(esp + 0x90) = xmm1; /* movss */
    MEMF(esp + 0x94) = xmm1; /* movss */
    MEM32(esp + 0xB8) = edi;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = eax;
    SET_LO8(ecx, (CMP_EQ(esi, 0x36)) ? 1 : 0); /* sete */
    edx = MEM32(ebp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B0);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    ecx--;
    SET_LO8(eax, 0xFF);
    PUSH32(esp, edi);
    ecx = ecx & 0x2000000;
    ecx = ecx | 0x40E00000;
    MEM8(esp + 0x9F) = LO8(eax);
    MEM8(esp + 0x9C) = LO8(eax);
    MEM8(esp + 0x9D) = LO8(eax);
    MEM8(esp + 0x9E) = LO8(eax);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x597978);
    eax = esp + 0x60;
    MEM32(esp + 0x90) = ecx;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_001C5AA0: ;
    esp = esp + 0x38;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(eax, edi)) goto loc_001C5B1F; /* je: equal / zero */

loc_001C5AAB: ;
    xmm0 = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    edx = MEM32(0x847024);
    ebx = eax + 0x310;
    ecx = 0x6C;
    esi = esp + 0x140;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, eax);
    ecx = ebx + 0x38;
    MEM32(ebx + 0x44) = edi;
    MEM32(ebx + 0x48) = edi;
    MEM32(ebx + 0x30) = eax;
    MEM32(ebx + 0x34) = eax;
    PUSH32(esp, 0x1E);
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x2C); /* cvtsi2ss */
    PUSH32(esp, ecx);
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x34); /* cvtsi2ss */
    PUSH32(esp, 0xBF800000u);
    MEMF(ecx + 8) = xmm0; /* movss */
    esi = MEM32(edx + 0x40);
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    edx = eax;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001C5B15: ;
    MEM32(ebx + 0x30) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(ebx + 0x34) = edi;

loc_001C5B1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C5B30
 * Original: 0x001C5B30 - 0x001C5B6F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5B30(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C5B30: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    (void)0; /* test MEM8(ebx + 0x498), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(MEM8(ebx + 0x498), 2)) { sub_001C5B6F(); return; } /* jne: not equal / not zero */

loc_001C5B42: ;
    eax = MEM32(ebx + 0x340);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = ebx + 0x340;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001C5B67; /* je: equal / zero */

loc_001C5B53: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x344);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_001C5B67: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001C5E60
 * Original: 0x001C5E60 - 0x001C609A (570 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5E60(void)
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

loc_001C5E60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x498));
    if (TEST_Z(LO8(eax), 1)) goto loc_001C5EC4; /* je: equal / zero */

loc_001C5E70: ;
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(esi + 0x494) = MEM16(esi + 0x494) + LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0x494));
    SET_LO16(ecx, MEM16(esi + 0x496));
    if (CMP_L(LO16(edx), LO16(ecx))) goto loc_001C5EA8; /* jl: less (signed <) */

loc_001C5E91: ;
    MEM16(esi + 0x494) = MEM16(esi + 0x494) - LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0x494));
    if (CMP_GE(LO16(edx), MEM16(esi + 0x496))) goto loc_001C5E91; /* jge: greater or equal (signed >=) */

loc_001C5EA8: ;
    SET_LO16(ecx, MEM16(esi + 0x494));
    if (CMP_GE(LO16(ecx), MEM16(esi + 0x490))) goto loc_001C5EBC; /* jge: greater or equal (signed >=) */

loc_001C5EB8: ;
    SET_LO8(eax, LO8(eax) | 2);
    goto loc_001C5EBE;

loc_001C5EBC: ;
    SET_LO8(eax, LO8(eax) & 0xFD);

loc_001C5EBE: ;
    MEM8(esi + 0x498) = LO8(eax);

loc_001C5EC4: ;
    if (TEST_Z(MEM8(esi + 0x498), 2)) goto loc_001C6001; /* je: equal / zero */

loc_001C5ED1: ;
    xmm3 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm0 = MEMF(esi + 0x330); /* movss */
    xmm2 = MEMF(esi + 0x334); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x328); /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = xmm2 + MEMF(esi + 0x32C); /* addss */
    MEMF(esi + 0x328) = xmm0; /* movss */
    MEMF(esi + 0x32C) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001C5F43; /* jbe: below or equal (unsigned <=) */

loc_001C5F34: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001C5F34; /* ja: above (unsigned >) */

loc_001C5F3D: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_001C5F43: ;
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_001C5F5F; /* jbe: below or equal (unsigned <=) */

loc_001C5F4B: ;
    goto loc_001C5F50;

    /* nop */

loc_001C5F50: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_001C5F50; /* ja: above (unsigned >) */

loc_001C5F59: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_001C5F5F: ;
    MEMF(esi + 0x328) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001C5F84; /* jbe: below or equal (unsigned <=) */

loc_001C5F75: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001C5F75; /* ja: above (unsigned >) */

loc_001C5F7E: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_001C5F84: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_001C5F9F; /* jbe: below or equal (unsigned <=) */

loc_001C5F89: ;
    /* nop */

loc_001C5F90: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_001C5F90; /* ja: above (unsigned >) */

loc_001C5F99: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_001C5F9F: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esi + 0x33C);
    (void)0; /* test eax, eax - flags set for next jcc */
    /* FPU: fsin  */
    MEMF(esi + 0x32C) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x310) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x314) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(eax, eax)) goto loc_001C5FE8; /* je: equal / zero */

loc_001C5FE1: ;
    edx = MEM32(eax + 0x34);
    MEM8(edx + 0x5A) = 0;

loc_001C5FE8: ;
    eax = MEM32(esi + 0x49C);
    if (TEST_Z(eax, eax)) goto loc_001C6020; /* je: equal / zero */

loc_001C5FF2: ;
    if (TEST_Z(MEM8(esi + 0x498), 0x10)) goto loc_001C6020; /* je: equal / zero */

loc_001C5FFB: ;
    MEM8(eax + 0x14) = 0;
    goto loc_001C6020;

loc_001C6001: ;
    eax = MEM32(esi + 0x33C);
    if (TEST_Z(eax, eax)) goto loc_001C6012; /* je: equal / zero */

loc_001C600B: ;
    eax = MEM32(eax + 0x34);
    MEM8(eax + 0x5A) = 1;

loc_001C6012: ;
    eax = MEM32(esi + 0x49C);
    if (TEST_Z(eax, eax)) goto loc_001C6020; /* je: equal / zero */

loc_001C601C: ;
    MEM8(eax + 0x14) = 1;

loc_001C6020: ;
    if (TEST_Z(MEM8(esi + 0x498), 8)) goto loc_001C6092; /* je: equal / zero */

loc_001C6029: ;
    fp_push(MEMF(esi + 0x4AC)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001C6042: ;
    xmm1 = MEMF(0x648D30); /* movss */
    MEM8(esi + 0x7B) = LO8(eax);
    xmm0 = MEMF(esi + 0x4B0); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x4AC); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001C6079; /* jbe: below or equal (unsigned <=) */

loc_001C606A: ;
    /* nop */

loc_001C6070: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001C6070; /* ja: above (unsigned >) */

loc_001C6079: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_001C608A; /* jbe: below or equal (unsigned <=) */

loc_001C6081: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_001C6081; /* ja: above (unsigned >) */

loc_001C608A: ;
    MEMF(esi + 0x4AC) = xmm0; /* movss */

loc_001C6092: ;
    eax = 1;
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
 * sub_001C60A0
 * Original: 0x001C60A0 - 0x001C60CD (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C60A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C60A0: ;
    esp = esp - 8;
    if (TEST_Z(eax, eax)) goto loc_001C60C9; /* je: equal / zero */

loc_001C60A7: ;
    PUSH32(esp, 0x20);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001C60C6: ;
    esp = esp + 0x10;

loc_001C60C9: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C60D0
 * Original: 0x001C60D0 - 0x001C6154 (132 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C60D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C60D0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x20 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_EQ(eax, 0x20)) goto loc_001C611E; /* je: equal / zero */

loc_001C60DE: ;
    if (CMP_NE(eax, 0x3A)) goto loc_001C6152; /* jne: not equal / not zero */

loc_001C60E3: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, MEM32(edi + 0x338))) goto loc_001C6152; /* jne: not equal / not zero */

loc_001C60F1: ;
    eax = ZX8(MEM8(eax + 4));
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C6115; /* je: equal / zero */

loc_001C60FA: ;
    eax--;
    if ((eax == 0)) goto loc_001C610C; /* je: equal / zero */

loc_001C60FD: ;
    eax--;
    if ((eax != 0)) goto loc_001C6152; /* jne: not equal / not zero */

loc_001C6100: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001C6320(); /* call 0x001C6320 */

loc_001C6107: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001C610C: ;
    MEM8(edi + 0x498) = MEM8(edi + 0x498) & 0xFD;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001C6115: ;
    MEM8(edi + 0x498) = MEM8(edi + 0x498) | 2;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001C611E: ;
    if (TEST_Z(MEM8(edi + 0x498), 0x10)) goto loc_001C6152; /* je: equal / zero */

loc_001C6127: ;
    eax = MEM32(edi + 0x338);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = MEM32(esi + 4);
    if (CMP_NE(edx, eax)) goto loc_001C6151; /* jne: not equal / not zero */

loc_001C6139: ;
    ecx = MEM32(esi);
    eax = edi;
    PUSH32(esp, 0); sub_001C6160(); /* call 0x001C6160 */

loc_001C6142: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C6151; /* je: equal / zero */

loc_001C6146: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001C6320(); /* call 0x001C6320 */

loc_001C614E: ;
    esp = esp + 4;

loc_001C6151: ;
    POP32(esp, esi);

loc_001C6152: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C6160
 * Original: 0x001C6160 - 0x001C618F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6160: ;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    eax = MEM32(esi + 0x68);
    if (CMP_AE(eax, 0x205)) { sub_001C618F(); return; } /* jae: above or equal (unsigned >=) */

loc_001C6173: ;
    if (CMP_EQ(eax, 0xFFFF)) { sub_001C618F(); return; } /* je: equal / zero */

loc_001C617A: ;
    eax = MEM32(esi + 0x74);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 * MEMF(esi + 0x260); /* mulss */
    g_seh_ebp = ebp; sub_001C6197(); return; /* tail jmp 0x001C6197 */

}

/**
 * sub_001C6320
 * Original: 0x001C6320 - 0x001C648C (364 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6320: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x42480000);
    ebx = edi + 0x40;
    PUSH32(esp, 0x3F59999A);
    PUSH32(esp, 0);
    esi = ebx;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_001C634E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x3F59999A);
    esi = edi + 0x4C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_001C6370: ;
    eax = edi + 0x3E0;
    PUSH32(esp, eax);
    ecx = edi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CDAD0(); /* call 0x001CDAD0 */

loc_001C6382: ;
    esp = esp + 0x44;
    edx = edi + 0x470;
    PUSH32(esp, edx);
    eax = edi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CDAD0(); /* call 0x001CDAD0 */

loc_001C6397: ;
    esp = esp + 0xC;
    if (TEST_Z(ebp, ebp)) goto loc_001C6414; /* je: equal / zero */

loc_001C639E: ;
    ecx = MEM32(ebp + 0x564);
    SET_LO8(eax, MEM8(edi + 4));
    SET_LO8(ecx, MEM8(ecx + 0x2A8));
    esi = 0; /* xor self */
    SET_LO8(edx, 2);
    PUSH32(esp, 0); sub_000C4C10(); /* call 0x000C4C10 */

loc_001C63B6: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0xFF);
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM8(esp + 0x18) = 1;
    MEM16(esp + 0x1A) = 0x28;
    MEM8(esp + 0x24) = 1;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM8(esp + 0x25) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_001C63F0: ;
    eax = ZX8(MEM8(edi + 0x4A8));
    ecx = MEM32(eax * 4 + 0x59ACE0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    eax = ebp;
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_001C6411: ;
    esp = esp + 0x28;

loc_001C6414: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    if (CMP_EQ(LO8(eax), 1)) goto loc_001C644B; /* je: equal / zero */

loc_001C641D: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_001C644B; /* je: equal / zero */

loc_001C6421: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB97;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001C644B: ;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C6488; /* jne: not equal / not zero */

loc_001C6457: ;
    edx = edi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C645E: ;
    eax = MEM32(edi);
    if (CMP_L(eax, 2)) goto loc_001C6488; /* jl: less (signed <) */

loc_001C6465: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001C647C; /* je: equal / zero */

loc_001C6472: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C6475: ;
    esp = esp + 4;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001C647C: ;
    edx = 1;
    eax = edi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C6488: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001C6490
 * Original: 0x001C6490 - 0x001C66D6 (582 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6490(void)
{
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

loc_001C6490: ;
    esp = esp - 0xF8;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x100));
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0xE8;
    PUSH32(esp, eax);
    ecx = esp + 0xF8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00111040(); /* call 0x00111040 */

loc_001C64BB: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C66CD; /* je: equal / zero */

loc_001C64C6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_001C64D5: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm3 = MEMF(0x648D78); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_001C650C: ;
    eax = MEM32(esi);
    xmm2 = MEMF(0x648EA8); /* movss */
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    MEM32(esp + 0x50) = eax;
    eax = 0xFF;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648E3C); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x400;
    ebx = ebx | 0xD4900;
    MEM32(esp + 0x84) = ebx;
    ebx = 0; /* xor self */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x98) = LO8(eax);
    MEM16(esp + 0xCC) = LO16(eax);
    eax = MEM32(esp + 0x110);
    PUSH32(esp, ebx);
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x60) = edx;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x90) = 0x12C;
    MEM32(esp + 0x94) = 0x36;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM32(esp + 0x9C) = ebx;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = 0x13E6E0;
    MEM32(esp + 0xC0) = 0x13EC40;
    MEM8(esp + 0xC8) = LO8(ebx);
    MEM32(esp + 0xCC) = ebx;
    MEM8(esp + 0xD0) = LO8(ebx);
    MEM16(esp + 0xD2) = 1;
    MEM32(esp + 0xC4) = ebx;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    ecx = esp + 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_001C6684: ;
    esp = esp + 0x28;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_001C66CD; /* je: equal / zero */

loc_001C668D: ;
    /* nop */

loc_001C6690: ;
    eax = MEM32(edi);
    edx = MEM32(eax + 0x68);
    ecx = MEM32(eax + 0x64);
    xmm1 = MEMF(eax + 0x44); /* movss */
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = ebx + eax + 0x110;
    PUSH32(esp, 0); sub_0010FF70(); /* call 0x0010FF70 */

loc_001C66BF: ;
    ebx = ebx + 0x40;
    esp = esp + 0x1C;
    if (CMP_L(ebx, 0x80)) goto loc_001C6690; /* jl: less (signed <) */

loc_001C66CD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xF8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001C66E0
 * Original: 0x001C66E0 - 0x001C6880 (416 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C66E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C66E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x33C);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_001C672A; /* je: equal / zero */

loc_001C66F3: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_001C672A; /* jne: not equal / not zero */

loc_001C66FB: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C6702: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C672A; /* jl: less (signed <) */

loc_001C6709: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_001C671E; /* je: equal / zero */

loc_001C6716: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C6719: ;
    esp = esp + 4;
    goto loc_001C672A;

loc_001C671E: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C672A: ;
    eax = MEM32(ebp + 0x340);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebp + 0x340;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001C6750; /* je: equal / zero */

loc_001C673C: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x344);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_001C6750: ;
    esi = MEM32(ebp + 0x354);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(esi, ebx)) goto loc_001C6792; /* je: equal / zero */

loc_001C675B: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_001C6792; /* jne: not equal / not zero */

loc_001C6763: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C676A: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C6792; /* jl: less (signed <) */

loc_001C6771: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_001C6786; /* je: equal / zero */

loc_001C677E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C6781: ;
    esp = esp + 4;
    goto loc_001C6792;

loc_001C6786: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C6792: ;
    esi = MEM32(ebp + 0x358);
    if (CMP_EQ(esi, ebx)) goto loc_001C67D3; /* je: equal / zero */

loc_001C679C: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_001C67D3; /* jne: not equal / not zero */

loc_001C67A4: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C67AB: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C67D3; /* jl: less (signed <) */

loc_001C67B2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_001C67C7; /* je: equal / zero */

loc_001C67BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C67C2: ;
    esp = esp + 4;
    goto loc_001C67D3;

loc_001C67C7: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C67D3: ;
    esi = MEM32(ebp + 0x35C);
    if (CMP_EQ(esi, ebx)) goto loc_001C681A; /* je: equal / zero */

loc_001C67DD: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_001C6814; /* jne: not equal / not zero */

loc_001C67E5: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C67EC: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C6814; /* jl: less (signed <) */

loc_001C67F3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_001C6808; /* je: equal / zero */

loc_001C6800: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C6803: ;
    esp = esp + 4;
    goto loc_001C6814;

loc_001C6808: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C6814: ;
    MEM32(ebp + 0x35C) = ebx;

loc_001C681A: ;
    esi = MEM32(ebp + 0x360);
    if (CMP_EQ(esi, ebx)) goto loc_001C6861; /* je: equal / zero */

loc_001C6824: ;
    if (CMP_NE(MEM8(0x8472BD), LO8(ebx))) goto loc_001C685B; /* jne: not equal / not zero */

loc_001C682C: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C6833: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C685B; /* jl: less (signed <) */

loc_001C683A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (CMP_EQ(eax, ebx)) goto loc_001C684F; /* je: equal / zero */

loc_001C6847: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C684A: ;
    esp = esp + 4;
    goto loc_001C685B;

loc_001C684F: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C685B: ;
    MEM32(ebp + 0x360) = ebx;

loc_001C6861: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_001C6868: ;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001C6880(); return; } /* jne: not equal / not zero */

loc_001C6872: ;
    eax = ebp;
    POP32(esp, ebp);
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001C6890
 * Original: 0x001C6890 - 0x001C6A27 (407 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6890(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C6890: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x33C);
    if (TEST_Z(esi, esi)) goto loc_001C68D8; /* je: equal / zero */

loc_001C68A0: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C68D8; /* jne: not equal / not zero */

loc_001C68A9: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C68B0: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C68D8; /* jl: less (signed <) */

loc_001C68B7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001C68CC; /* je: equal / zero */

loc_001C68C4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C68C7: ;
    esp = esp + 4;
    goto loc_001C68D8;

loc_001C68CC: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C68D8: ;
    eax = MEM32(ebx + 0x340);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebx + 0x340;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001C68FE; /* je: equal / zero */

loc_001C68EA: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x344);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_001C68FE: ;
    esi = MEM32(ebx + 0x354);
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_001C6941; /* je: equal / zero */

loc_001C6909: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C6941; /* jne: not equal / not zero */

loc_001C6912: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C6919: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C6941; /* jl: less (signed <) */

loc_001C6920: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001C6935; /* je: equal / zero */

loc_001C692D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C6930: ;
    esp = esp + 4;
    goto loc_001C6941;

loc_001C6935: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C6941: ;
    esi = MEM32(ebx + 0x358);
    if (TEST_Z(esi, esi)) goto loc_001C6983; /* je: equal / zero */

loc_001C694B: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C6983; /* jne: not equal / not zero */

loc_001C6954: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C695B: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C6983; /* jl: less (signed <) */

loc_001C6962: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001C6977; /* je: equal / zero */

loc_001C696F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C6972: ;
    esp = esp + 4;
    goto loc_001C6983;

loc_001C6977: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C6983: ;
    esi = MEM32(ebx + 0x35C);
    if (TEST_Z(esi, esi)) goto loc_001C69C5; /* je: equal / zero */

loc_001C698D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C69C5; /* jne: not equal / not zero */

loc_001C6996: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C699D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C69C5; /* jl: less (signed <) */

loc_001C69A4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001C69B9; /* je: equal / zero */

loc_001C69B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C69B4: ;
    esp = esp + 4;
    goto loc_001C69C5;

loc_001C69B9: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C69C5: ;
    esi = MEM32(ebx + 0x360);
    if (TEST_Z(esi, esi)) goto loc_001C6A16; /* je: equal / zero */

loc_001C69CF: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C6A16; /* jne: not equal / not zero */

loc_001C69D8: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001C69DF: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001C6A16; /* jl: less (signed <) */

loc_001C69E6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001C6A0A; /* je: equal / zero */

loc_001C69F3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001C69F6: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_001C69FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001C6A04: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C6A0A: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001C6A16: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_001C6A1B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001C6A21: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C6A30
 * Original: 0x001C6A30 - 0x001C6A45 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6A30(void)
{

loc_001C6A30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x36C);
    SET_LO8(eax, MEM8(ecx + 0x498));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001C6A50
 * Original: 0x001C6A50 - 0x001C6A76 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6A50(void)
{

loc_001C6A50: ;
    esp = esp - 8;
    SET_LO8(ecx, MEM8(esp + 0xC));
    PUSH32(esp, 0x3A);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001C6A72: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001C6A80
 * Original: 0x001C6A80 - 0x001C6D4E (718 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001C6A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xD4;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x74);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_001C6D36; /* je: equal / zero */

loc_001C6A9D: ;
    if (CMP_NE(MEM32(ebx), 8)) goto loc_001C6D36; /* jne: not equal / not zero */

loc_001C6AA6: ;
    eax = MEM32(ebx + 0xC);
    edi = 0xFFFF;
    if (CMP_EQ(eax, edi)) goto loc_001C6C5B; /* je: equal / zero */

loc_001C6AB6: ;
    if (CMP_NE(MEM32(ebx + 0x1C), edi)) goto loc_001C6AC4; /* jne: not equal / not zero */

loc_001C6ABB: ;
    if (CMP_NE(MEM32(ebx + 0x10), edi)) goto loc_001C6C5B; /* jne: not equal / not zero */

loc_001C6AC4: ;
    esi = MEM32(0x849478);
    if (TEST_Z(esi, esi)) goto loc_001C6AD5; /* je: equal / zero */

loc_001C6ACE: ;
    eax = ebx;
    PUSH32(esp, 0); sub_001C6FC0(); /* call 0x001C6FC0 */

loc_001C6AD5: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C6AE9; /* jne: not equal / not zero */

loc_001C6AE1: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_001C6AE9: ;
    eax = MEM32(ebx + 0xC);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    edx = ebx + 0x3C;
    MEMF(edx) = xmm0; /* movss */
    if (CMP_EQ(eax, edi)) goto loc_001C6AFF; /* je: equal / zero */

loc_001C6AF7: ;
    ecx = eax + 0x60;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_001C6AFF: ;
    eax = MEM32(ebx + 0x10);
    if (CMP_EQ(eax, edi)) goto loc_001C6BA4; /* je: equal / zero */

loc_001C6B0A: ;
    edx = ebx + 0x7C;
    ecx = eax + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6B15: ;
    ecx = MEM32(ebx + 0x14);
    edx = ebx + 0x8C;
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6B26: ;
    ecx = MEM32(ebx + 0x18);
    edx = ebx + 0x9C;
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6B37: ;
    eax = MEM32(ebx + 0x1C);
    SET_LO8(ecx, MEM8(0x547548));
    eax = eax + 0x60;
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    edx = ebx + 0xAC;
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_001C6B62; /* jne: not equal / not zero */

loc_001C6B4E: ;
    edi = eax;
    edi = edi << 4;
    ecx = 8;
    esi = edx;
    edi = edi + 0x549C98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001C6B62: ;
    PUSH32(esp, 8);
    ecx = eax;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001C6B6B: ;
    eax = MEM32(ebx + 0x20);
    SET_LO8(ecx, MEM8(0x547548));
    eax = eax + 0x60;
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    edx = ebx + 0xCC;
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_001C6B96; /* jne: not equal / not zero */

loc_001C6B82: ;
    edi = eax;
    edi = edi << 4;
    ecx = 8;
    esi = edx;
    edi = edi + 0x549C98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001C6B96: ;
    PUSH32(esp, 8);
    ecx = eax;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001C6B9F: ;
    edi = 0xFFFF;

loc_001C6BA4: ;
    eax = MEM32(ebx + 0x24);
    if (CMP_EQ(eax, edi)) goto loc_001C6D36; /* je: equal / zero */

loc_001C6BAF: ;
    edx = ebx + 0xEC;
    ecx = eax + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6BBD: ;
    ecx = MEM32(ebx + 0x28);
    edx = ebx + 0xFC;
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6BCE: ;
    ecx = MEM32(ebx + 0x2C);
    edx = ebx + 0x10C;
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6BDF: ;
    ecx = MEM32(ebx + 0x30);
    edx = ebx + 0x11C;
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6BF0: ;
    eax = MEM32(ebx + 0x34);
    SET_LO8(ecx, MEM8(0x547548));
    eax = eax + 0x60;
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    edx = ebx + 0x12C;
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_001C6C1B; /* jne: not equal / not zero */

loc_001C6C07: ;
    edi = eax;
    edi = edi << 4;
    ecx = 8;
    esi = edx;
    edi = edi + 0x549C98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001C6C1B: ;
    PUSH32(esp, 8);
    ecx = eax;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001C6C24: ;
    SET_LO8(eax, MEM8(0x547548));
    edx = ebx + 0x14C;
    ebx = MEM32(ebx + 0x38);
    ebx = ebx + 0x60;
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_001C6C4D; /* jne: not equal / not zero */

loc_001C6C39: ;
    edi = ebx;
    edi = edi << 4;
    ecx = 8;
    esi = edx;
    edi = edi + 0x549C98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001C6C4D: ;
    PUSH32(esp, 8);
    ecx = ebx;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001C6C56: ;
    goto loc_001C6D36;

loc_001C6C5B: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C6C72; /* jne: not equal / not zero */

loc_001C6C6A: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_001C6C72: ;
    MEMF(ebx + 0x34) = xmm0; /* movss */
    eax = MEM32(ebx + 0xC);
    if (CMP_EQ(eax, edi)) goto loc_001C6C89; /* je: equal / zero */

loc_001C6C7E: ;
    edx = ebx + 0x3C;
    ecx = eax + 0x60;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_001C6C89: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEM32(esp + 0x1C) = ecx;
    eax = MEM32(ebx + 8);
    if (CMP_EQ(eax, edi)) goto loc_001C6CF0; /* je: equal / zero */

loc_001C6CA4: ;
    edx = ebx + 0x74;
    ecx = eax + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6CAF: ;
    ecx = MEM32(ebx + 0xC);
    edx = ebx + 0x84;
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6CC0: ;
    ecx = MEM32(ebx + 0x10);
    edx = ebx + 0x94;
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6CD1: ;
    ecx = MEM32(ebx + 0x14);
    edx = ebx + 0xA4;
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6CE2: ;
    ecx = MEM32(ebx + 0x18);
    edx = ebx + 0xB4;
    ecx = ecx + 0x60;
    goto loc_001C6D31;

loc_001C6CF0: ;
    edx = esp + 0x10;
    ecx = 0x70;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6CFE: ;
    edx = esp + 0x10;
    ecx = 0x71;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6D0C: ;
    edx = esp + 0x10;
    ecx = 0x72;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6D1A: ;
    edx = esp + 0x10;
    ecx = 0x73;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6D28: ;
    edx = esp + 0x10;
    ecx = 0x74;

loc_001C6D31: ;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_001C6D36: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x38);
    if (TEST_Z(eax, eax)) { sub_001C6D4E(); return; } /* je: equal / zero */

loc_001C6D40: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(0x81BE48);
    eax = MEM32(eax + ecx * 4);
    g_seh_ebp = ebp; sub_001C6D51(); return; /* tail jmp 0x001C6D51 */

}

/**
 * sub_001C6D90
 * Original: 0x001C6D90 - 0x001C6DBD (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6D90(void)
{

loc_001C6D90: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F5384);
    ecx = 0x822670;
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_001C6DA4: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx + 0x50) = 0x753BFC;
    MEM32(0x849478) = 0;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001C6DC0
 * Original: 0x001C6DC0 - 0x001C6E3F (127 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6DC0(void)
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

loc_001C6DC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 8;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    MEMF(esp + 8) = xmm0; /* movss */
    esi = esi + 0x20;
    ebx = 4;
    edi = edi;

loc_001C6DE0: ;
    fp_push(MEMF(esi + -32)); /* fld float */
    esp = esp - 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046ED77(); /* call 0x0046ED77 */

loc_001C6E06: ;
    /* FPU: fsubr dword ptr [esp + 0x14] */
    esp = esp + 8;
    esi = esi + 4;
    ebx--;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ebx != 0)) goto loc_001C6DE0; /* jne: not equal / not zero */

loc_001C6E2C: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0xC); /* mulss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001C6E40
 * Original: 0x001C6E40 - 0x001C6E66 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C6E40: ;
    SET_LO8(edx, MEM8(eax + 0x54));
    ecx = MEM32(esp + 4);
    esp = esp - 0x1C;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_001C6E66(); return; } /* jne: not equal / not zero */

loc_001C6E4E: ;
    edx = MEM32(ecx);
    eax = esi;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp = esp + 0x1C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C6F20
 * Original: 0x001C6F20 - 0x001C6FC0 (160 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6F20(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6F20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebp = MEM32(ebp);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(esp + 0xC);
    ebp = MEM32(ebp + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(esp + 0xC);
    ebp = MEM32(ebp + 8);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(esp + 0xC);
    ebp = MEM32(ebp + 0xC);
    MEM32(ebx + 0xC) = ebp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebp = MEM32(edi);
    ebx = eax + 0x10;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    edi = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = edi;
    ebx = MEM32(esi);
    edi = eax + 0x20;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    esi = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = esi;
    edi = MEM32(edx);
    esi = eax + 0x30;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(esi + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(ecx);
    eax = eax + 0x40;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    POP32(esp, ebp);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C6FC0
 * Original: 0x001C6FC0 - 0x001C6FFF (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6FC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001C6FC0: ;
    SET_LO8(ecx, MEM8(esi + 0x54));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C6FFE; /* jne: not equal / not zero */

loc_001C6FC7: ;
    PUSH32(esp, edi);
    edi = eax + 0x9C;
    PUSH32(esp, edi);
    edi = eax + 0xBC;
    ecx = eax + 0x7C;
    edx = eax + 0x8C;
    eax = eax + 0xAC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001C6F20(); /* call 0x001C6F20 */

loc_001C6FEC: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esi + 0x50) = xmm0; /* movss */
    MEM8(esi + 0x54) = 1;
    POP32(esp, edi);

loc_001C6FFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7000
 * Original: 0x001C7000 - 0x001C7032 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7000(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C7000: ;
    SET_LO8(ecx, MEM8(0x87A1C0));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_001C702C; /* jne: not equal / not zero */

loc_001C700F: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | eax;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_001C702C: ;
    eax = 0x87A1AC;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7040
 * Original: 0x001C7040 - 0x001C718A (330 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7040(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001C7040: ;
    esp = esp - 0x3C;
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = esp + 0x14;
    edx = esp + 8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = edx;
    ecx = MEM32(esp + 0x44);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm4 = 0.0f; /* xorps self = zero */
    eax = esi + 0xC;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = edx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    MEM32(esp + 0x2C) = eax;
    xmm3 = MEMF(esp + 0x2C); /* movss */
    xmm3 = xmm3 * MEMF(esp + 0x14); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEM32(esp + 0x24) = ecx;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(edi + 0xC); /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) { sub_001C718A(); return; } /* ja: above (unsigned >) */

loc_001C70EC: ;
    xmm0 = MEMF(esi + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0xC); /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) { sub_001C718A(); return; } /* ja: above (unsigned >) */

loc_001C70FF: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(esp + 0x44);
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
    MEMF(esp + 8) = xmm1; /* movss */
    xmm0 = MEMF(edi + 0xC); /* movss */
    /* comiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 8))) goto loc_001C714D; /* jbe: below or equal (unsigned <=) */

loc_001C7140: ;
    MEMF(ebx) = xmm4; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp = esp + 0x3C;
    esp += 8; return; /* ret 4 */

loc_001C714D: ;
    xmm0 = MEMF(esi + 0x24); /* movss */
    edx = edi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, ebx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0xC); /* addss */
    PUSH32(esp, esi);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012C2F0(); /* call 0x0012C2F0 */

loc_001C7183: ;
    POP32(esp, edi);
    esp = esp + 0x3C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C71A0
 * Original: 0x001C71A0 - 0x001C72D0 (304 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C71A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001C71A0: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_001C72B9; /* jne: not equal / not zero */

loc_001C71B3: ;
    xmm0 = MEMF(0x84947C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001C72CB; /* jnp: not parity */

loc_001C71CC: ;
    SET_LO8(eax, MEM8(0x849480));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C72CB; /* je: equal / zero */

loc_001C71D9: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm2 <= xmm1)) goto loc_001C7215; /* jbe: below or equal (unsigned <=) */

loc_001C720D: ;
    MEMF(esp + 4) = xmm2; /* movss */
    goto loc_001C7220;

loc_001C7215: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001C7220; /* jbe: below or equal (unsigned <=) */

loc_001C721A: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_001C7220: ;
    eax = MEM32(0x76F7AC);
    ecx = MEM32(0x76F7B0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_001C723A: ;
    MEM8(eax + 0x10) = LO8(ebx);
    esi = MEM32(eax);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_001C7248: ;
    MEM8(eax + 0x11) = LO8(ebx);
    edi = MEM32(eax + 4);
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_001C7257: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    MEM8(eax + 0x12) = LO8(ebx);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0); sub_00403040(); /* call 0x00403040 */

loc_001C727F: ;
    esp = esp + 0x18;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_001C7287: ;
    esi = esp + 0x1C;
    edx = eax;
    PUSH32(esp, 0); sub_001CDCE0(); /* call 0x001CDCE0 */

loc_001C7292: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_001C7297: ;
    esi = esp + 0x20;
    edx = eax;
    PUSH32(esp, 0); sub_001CDCE0(); /* call 0x001CDCE0 */

loc_001C72A2: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_001C72A7: ;
    esi = esp + 0x24;
    edx = eax;
    PUSH32(esp, 0); sub_001CDCE0(); /* call 0x001CDCE0 */

loc_001C72B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001C72B9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(0x849480) = 0;
    MEMF(0x84947C) = xmm0; /* movss */

loc_001C72CB: ;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001C72E0
 * Original: 0x001C72E0 - 0x001C743F (351 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C72E0(void)
{

loc_001C72E0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    esi = esi + 0x10;
    edi = 0x5F59B0;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 8) = 0x5F5990;
    MEM32(esp + 0xC) = 0x5F59A0;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = 0x5F59D4;
    MEM32(esp + 0x18) = 0x5F5984;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_001C7326: ;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 8) = 0x5F593C;
    MEM32(esp + 0xC) = 0x5F5950;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = 0x5F5964;
    MEM32(esp + 0x18) = 0x5F5928;
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_001C735D: ;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 8) = 0x5F5908;
    MEM32(esp + 0xC) = 0x5F5918;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = 0x5F59F0;
    MEM32(esp + 0x18) = 0x5F58FC;
    MEM32(esp + 0x1C) = 2;
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_001C7394: ;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 8) = 0x5F58A8;
    MEM32(esp + 0xC) = 0x5F58B8;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = 0x5F58C8;
    MEM32(esp + 0x18) = 0x5F589C;
    MEM32(esp + 0x1C) = 3;
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_001C73CB: ;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 8) = 0x5F584C;
    MEM32(esp + 0xC) = 0x5F5860;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = 0x5F5874;
    MEM32(esp + 0x18) = 0x5F5838;
    MEM32(esp + 0x1C) = 4;
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_001C7402: ;
    ecx = esp + 8;
    eax = esi;
    MEM32(esp + 8) = 0x5F57FC;
    MEM32(esp + 0xC) = 0x5F5810;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = 0x5F5824;
    MEM32(esp + 0x18) = 0x5F57E8;
    MEM32(esp + 0x1C) = 5;
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_001C7439: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7440
 * Original: 0x001C7440 - 0x001C747A (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7440(void)
{
    float xmm0;

loc_001C7440: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = 0; /* xor self */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x28) = eax;
    eax = esi;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;
    MEMF(esi + 0x34) = xmm0; /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001C72E0(); /* call 0x001C72E0 */

loc_001C7477: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7480
 * Original: 0x001C7480 - 0x001C74EA (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7480(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C7480: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x28);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_001C74A4; /* je: equal / zero */

loc_001C748C: ;
    eax = edi;
    PUSH32(esp, 0); sub_001F4FC0(); /* call 0x001F4FC0 */

loc_001C7493: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001C74A1: ;
    esp = esp + 4;

loc_001C74A4: ;
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_001C74BC; /* je: equal / zero */

loc_001C74AB: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001C74B9: ;
    esp = esp + 4;

loc_001C74BC: ;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebx)) goto loc_001C74DD; /* je: equal / zero */

loc_001C74CC: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001C74DA: ;
    esp = esp + 4;

loc_001C74DD: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C74F0
 * Original: 0x001C74F0 - 0x001C7529 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C74F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C74F0: ;
    PUSH32(esp, ecx);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001C7529(); return; } /* je: equal / zero */

loc_001C74F7: ;
    esi = MEM32(0x875670);
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_001C7519; /* je: equal / zero */

loc_001C7503: ;
    PUSH32(esp, 0); sub_001C7480(); /* call 0x001C7480 */

loc_001C7508: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001C7516: ;
    esp = esp + 4;

loc_001C7519: ;
    POP32(esp, edi);
    MEM32(0x875670) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C75D0
 * Original: 0x001C75D0 - 0x001C7615 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C75D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C75D0: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_001C75ED; /* je: equal / zero */

loc_001C75D7: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_001C75ED: ;
    ecx = MEM32(esi + 0x20);
    eax--;
    if (CMP_NE(ecx, eax)) { sub_001C7615(); return; } /* jne: not equal / not zero */

loc_001C75F5: ;
    eax = MEM32(0x777EC8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM8(0x776BD8);
    if (TEST_NZ(eax, eax)) goto loc_001C760A; /* jne: not equal / not zero */

loc_001C7605: ;
    eax = 2;

loc_001C760A: ;
    if (CMP_NE(MEM32(esi + 0x24), eax)) { sub_001C7615(); return; } /* jne: not equal / not zero */

loc_001C760F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7620
 * Original: 0x001C7620 - 0x001C7664 (68 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7620(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C7620: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    if (TEST_S(edi, edi)) { sub_001C7664(); return; } /* jl: less (signed <) */

loc_001C762B: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_001C7648; /* je: equal / zero */

loc_001C7632: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_001C7648: ;
    if (CMP_AE(edi, eax)) { sub_001C7664(); return; } /* jae: above or equal (unsigned >=) */

loc_001C764C: ;
    eax = MEM32(esi + 0x3C);
    if (TEST_NZ(eax, eax)) { sub_001C7664(); return; } /* jne: not equal / not zero */

loc_001C7653: ;
    PUSH32(esp, 0); sub_001C75D0(); /* call 0x001C75D0 */

loc_001C7658: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001C7664(); return; } /* jne: not equal / not zero */

loc_001C765C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C7670
 * Original: 0x001C7670 - 0x001C76A0 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7670(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C7670: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    if (TEST_S(esi, esi)) { sub_001C76A0(); return; } /* jl: less (signed <) */

loc_001C7678: ;
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_001C7695; /* je: equal / zero */

loc_001C767F: ;
    ecx = MEM32(ecx + 8);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_001C7695: ;
    if (CMP_AE(esi, eax)) { sub_001C76A0(); return; } /* jae: above or equal (unsigned >=) */

loc_001C7699: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C76B0
 * Original: 0x001C76B0 - 0x001C7960 (688 bytes, 188 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C76B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001C76B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x847265));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_001C7960(); return; } /* jne: not equal / not zero */

loc_001C76C3: ;
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, ebx)) { sub_001C7960(); return; } /* je: equal / zero */

loc_001C76CE: ;
    eax = MEM32(eax + 0x568);
    if (CMP_EQ(eax, ebx)) { sub_001C7960(); return; } /* je: equal / zero */

loc_001C76DC: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) { sub_001C7960(); return; } /* jne: not equal / not zero */

loc_001C76E8: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) { sub_001C7960(); return; } /* je: equal / zero */

loc_001C76F6: ;
    if (CMP_EQ(eax, 0x46)) { sub_001C7960(); return; } /* je: equal / zero */

loc_001C76FF: ;
    if (CMP_EQ(eax, 0x47)) { sub_001C7960(); return; } /* je: equal / zero */

loc_001C7708: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) { sub_001C7960(); return; } /* je: equal / zero */

loc_001C7714: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x7F);
    eax = 0xA8;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001C7726: ;
    edi = eax;
    esp = esp + 8;
    if (CMP_EQ(edi, ebx)) goto loc_001C795A; /* je: equal / zero */

loc_001C7733: ;
    PUSH32(esp, 0x1C);
    MEM32(edi + 0x38) = esi;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_001C773D: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_001C7765; /* je: equal / zero */

loc_001C7744: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM8(eax + 8) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    goto loc_001C7767;

loc_001C7765: ;
    eax = 0; /* xor self */

loc_001C7767: ;
    PUSH32(esp, 0x1C);
    MEM32(edi + 0x3C) = eax;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_001C7771: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_001C7799; /* je: equal / zero */

loc_001C7778: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM8(eax + 8) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    goto loc_001C779B;

loc_001C7799: ;
    eax = 0; /* xor self */

loc_001C779B: ;
    PUSH32(esp, 0x1C);
    MEM32(edi + 0x40) = eax;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_001C77A5: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_001C77CD; /* je: equal / zero */

loc_001C77AC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM8(eax + 8) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    goto loc_001C77CF;

loc_001C77CD: ;
    eax = 0; /* xor self */

loc_001C77CF: ;
    PUSH32(esp, 0x1C);
    MEM32(edi + 0x44) = eax;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_001C77D9: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_001C7801; /* je: equal / zero */

loc_001C77E0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM8(eax + 8) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    goto loc_001C7803;

loc_001C7801: ;
    eax = 0; /* xor self */

loc_001C7803: ;
    PUSH32(esp, 0x1C);
    MEM32(edi + 0x48) = eax;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_001C780D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_001C7835; /* je: equal / zero */

loc_001C7817: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM8(eax + 8) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    goto loc_001C7837;

loc_001C7835: ;
    eax = 0; /* xor self */

loc_001C7837: ;
    PUSH32(esp, 0x310);
    MEM32(edi + 0x4C) = eax;
    MEMF(edi + 0x2C) = xmm0; /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */
    MEMF(edi + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_001C7853: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_001C7877; /* je: equal / zero */

loc_001C785A: ;
    PUSH32(esp, 0x1CC860);
    PUSH32(esp, 5);
    esi = eax + 4;
    PUSH32(esp, 0x9C);
    PUSH32(esp, esi);
    MEM32(eax) = 5;
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_001C7875: ;
    goto loc_001C7879;

loc_001C7877: ;
    esi = 0; /* xor self */

loc_001C7879: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F000000);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F57B0;
    MEM32(edi + 0x50) = esi;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001C7893: ;
    esi = MEM32(edi + 0x50);
    esi = esi + 0x9C;
    PUSH32(esp, 0); sub_001CC8B0(); /* call 0x001CC8B0 */

loc_001C78A1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F000000);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F577C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001C78B8: ;
    esi = MEM32(edi + 0x50);
    esi = esi + 0x270;
    PUSH32(esp, 0); sub_001CC8B0(); /* call 0x001CC8B0 */

loc_001C78C6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F000000);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F574C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001C78DD: ;
    esi = MEM32(edi + 0x50);
    esi = esi + 0x1D4;
    PUSH32(esp, 0); sub_001CC8B0(); /* call 0x001CC8B0 */

loc_001C78EB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F000000);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F571C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001C7902: ;
    esi = MEM32(edi + 0x50);
    esi = esi + 0x138;
    PUSH32(esp, 0); sub_001CC8B0(); /* call 0x001CC8B0 */

loc_001C7910: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F000000);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F56E4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001C7927: ;
    esi = MEM32(edi + 0x50);
    PUSH32(esp, 0); sub_001CC8B0(); /* call 0x001CC8B0 */

loc_001C792F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(edi + 0x54) = LO16(ebx);
    MEMF(edi + 0x94) = xmm0; /* movss */
    MEMF(edi + 0x9C) = xmm0; /* movss */
    MEMF(edi + 0x98) = xmm0; /* movss */
    MEM32(edi + 0xA4) = ebx;
    MEM32(edi + 0xA0) = ebx;

loc_001C795A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C7970
 * Original: 0x001C7970 - 0x001C79AB (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7970(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C7970: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    (void)0; /* test LO8(ebx), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(LO8(ebx), 2)) { sub_001C79AB(); return; } /* je: equal / zero */

loc_001C797D: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C72D0);
    edi = esi + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00016260(); /* call 0x00016260 */

loc_001C7995: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_001C79A3; /* je: equal / zero */

loc_001C799A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_001C79A0: ;
    esp = esp + 4;

loc_001C79A3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C79D0
 * Original: 0x001C79D0 - 0x001C7A01 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C79D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C79D0: ;
    xmm7 = MEMF(0x648EEC); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x3C);
    xmm0 = MEMF(esi + 0x10); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = MEM32(esi + 0x10);
    edx = esi + 0xC;
    if (1 /* jp after test - parity */) { sub_001C7A01(); return; } /* jp: parity */

loc_001C79F5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edx) = eax;
    MEMF(esi + 0x14) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_001C7A2C(); return; /* tail jmp 0x001C7A2C */

}

/**
 * sub_001C7C10
 * Original: 0x001C7C10 - 0x001C7C5D (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7C10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C7C10: ;
    SET_LO8(eax, 0); /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_001C7C5C; /* je: equal / zero */

loc_001C7C16: ;
    edx = MEM32(ecx + 0x1F0);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(ecx + 0x2A0);
    if (TEST_Z(edx, edx)) goto loc_001C7C40; /* je: equal / zero */

loc_001C7C26: ;
    if (TEST_NZ(ecx, ecx)) goto loc_001C7C44; /* jne: not equal / not zero */

loc_001C7C2A: ;
    edx = MEM32(edx + 0x564);
    if (TEST_Z(edx, edx)) goto loc_001C7C5C; /* je: equal / zero */

loc_001C7C34: ;
    edx = ZX8(MEM8(edx + 0x2A8));
    (void)0; /* cmp LO16(edx), LO16(esi) - flags set for next jcc */
    goto loc_001C7C58;

loc_001C7C40: ;
    if (TEST_Z(ecx, ecx)) goto loc_001C7C5C; /* je: equal / zero */

loc_001C7C44: ;
    ecx = MEM32(ecx + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_001C7C5C; /* je: equal / zero */

loc_001C7C4E: ;
    ecx = ZX8(MEM8(ecx + 0x2A8));
    (void)0; /* cmp LO16(ecx), LO16(esi) - flags set for next jcc */

loc_001C7C58: ;
    if (CMP_NE(LO16(ecx), LO16(esi))) goto loc_001C7C5C; /* jne: not equal / not zero */

loc_001C7C5A: ;
    SET_LO8(eax, 1);

loc_001C7C5C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7C60
 * Original: 0x001C7C60 - 0x001C9DAA (8522 bytes, 2005 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7C60(void)
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

loc_001C7C60: ;
    esp = esp - 0xB4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xBC);
    eax = MEM32(esi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_001C9DA2; /* je: equal / zero */

loc_001C7C79: ;
    xmm0 = MEMF(0x7F9F58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esp + 0xC8);
    PUSH32(esp, edi);
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, 0); sub_002200D0(); /* call 0x002200D0 */

loc_001C7CA3: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebp = edi * 4;
    MEM32(esp + 0x6C) = ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C7CD8; /* je: equal / zero */

loc_001C7CB5: ;
    xmm0 = MEMF(ebp + 0x87565C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x34); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001C7CCE; /* ja: above (unsigned >) */

loc_001C7CCB: ;
    xmm0 = xmm1; /* movaps */

loc_001C7CCE: ;
    xmm1 = MEMF(0x648D14); /* movss */
    goto loc_001C7CF6;

loc_001C7CD8: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x87565C); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001C7CF6; /* ja: above (unsigned >) */

loc_001C7CF3: ;
    xmm0 = xmm1; /* movaps */

loc_001C7CF6: ;
    edx = MEM32(0x84A13C);
    ecx = MEM32(0x84A144);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    eax = eax + edx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(ebp + 0x87565C) = xmm0; /* movss */
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = 0x140;
    MEM32(esp + 0x14) = 0xC8;
    if (TEST_Z(ecx, ecx)) goto loc_001C7DA1; /* je: equal / zero */

loc_001C7D29: ;
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_001C9D9F; /* je: equal / zero */

loc_001C7D37: ;
    edx = ZX8(MEM8(ecx + 0x236));
    if (CMP_NE(edi, edx)) goto loc_001C9D9F; /* jne: not equal / not zero */

loc_001C7D46: ;
    xmm1 = MEMF(eax + 0x21C); /* movss */
    xmm0 = MEMF(eax + 0x1F4); /* movss */
    xmm0 = xmm0 * MEMF(0x649714); /* mulss */
    xmm2 = MEMF(eax + 0x214); /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x1F8); /* movss */
    xmm1 = xmm1 * MEMF(0x649710); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    SET_LO8(ebx, 1);
    MEM8(esp + 0x2C) = LO8(ebx);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    if ((xmm0 <= xmm1)) goto loc_001C7DAA; /* jbe: below or equal (unsigned <=) */

loc_001C7D99: ;
    MEMF(esp + 0x44) = xmm0; /* movss */
    goto loc_001C7DB0;

loc_001C7DA1: ;
    MEM8(esp + 0x2C) = 0;
    SET_LO8(ebx, MEM8(esp + 0x2C));

loc_001C7DAA: ;
    MEMF(esp + 0x44) = xmm1; /* movss */

loc_001C7DB0: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_001C7DF4; /* je: equal / zero */

loc_001C7DBA: ;
    if (CMP_NE(MEM32(ecx + 0x64), 0x42)) goto loc_001C7DF4; /* jne: not equal / not zero */

loc_001C7DC0: ;
    edx = MEM32(ecx + 0x568);
    if (TEST_Z(edx, edx)) goto loc_001C7DF4; /* je: equal / zero */

loc_001C7DCA: ;
    if (CMP_EQ(MEM32(edx + 0x638), 0xFFFFFFFFu)) goto loc_001C7DF4; /* je: equal / zero */

loc_001C7DD3: ;
    eax = MEM32(ebp + 0x87565C);
    esi = esi + 0x94;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CCF80(); /* call 0x001CCF80 */

loc_001C7DE6: ;
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    esp = esp + 0xB4;
    esp += 4; return; /* ret */

loc_001C7DF4: ;
    if (TEST_Z(eax, eax)) goto loc_001C7E08; /* je: equal / zero */

loc_001C7DF8: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x87565C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CD370(); /* call 0x001CD370 */

loc_001C7E05: ;
    esp = esp + 8;

loc_001C7E08: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002200D0(); /* call 0x002200D0 */

loc_001C7E0E: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C7E44; /* jne: not equal / not zero */

loc_001C7E15: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0xC);
    if (TEST_Z(eax, eax)) goto loc_001C7E29; /* je: equal / zero */

loc_001C7E1F: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C7E44; /* jne: not equal / not zero */

loc_001C7E29: ;
    xmm0 = MEMF(ebp + 0x875648); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    goto loc_001C7E58;

loc_001C7E44: ;
    xmm0 = MEMF(ebp + 0x875648); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */

loc_001C7E58: ;
    if ((xmm0 > xmm1)) goto loc_001C7E5D; /* ja: above (unsigned >) */

loc_001C7E5A: ;
    xmm0 = xmm1; /* movaps */

loc_001C7E5D: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEMF(ebp + 0x875648) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001C7EA1; /* je: equal / zero */

loc_001C7E69: ;
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 * MEMF(0x64994C); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x60); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x68); /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;

loc_001C7EA1: ;
    edx = MEM32(esp + 0xCC);
    PUSH32(esp, edx);
    edx = esp + 0x54;
    ecx = esp + 0x80;
    PUSH32(esp, 0); sub_001CB910(); /* call 0x001CB910 */

loc_001C7EB9: ;
    esp = esp + 4;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001C7ED2; /* je: equal / zero */

loc_001C7EC0: ;
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    MEMF(esp + 0x50) = xmm0; /* movss */

loc_001C7ED2: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(0x8497DC); /* movss */
    SET_LO8(eax, MEM8(0x7819D5));
    MEM8(0x776154) = 3;
    MEM32(0x776158) = 0;
    MEMF(0x84B508) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001C7F20; /* je: equal / zero */

loc_001C7EFC: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 * MEMF(0x64B26C); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C7F44; /* je: equal / zero */

loc_001C7F16: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    goto loc_001C7F3C;

loc_001C7F20: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x64B26C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C7F44; /* je: equal / zero */

loc_001C7F34: ;
    xmm0 = MEMF(0x64B268); /* movss */

loc_001C7F3C: ;
    MEMF(0x77615C) = xmm0; /* movss */

loc_001C7F44: ;
    eax = MEM32(esi + 0x40);
    xmm0 = MEMF(eax + 0xC); /* movss */
    SET_LO8(eax, MEM8(0x6B99D8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x776171) = 0x96;
    MEM8(0x776170) = 0xC8;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = 0xFF;
    MEMF(esp + 0x38) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C7F86; /* je: equal / zero */

loc_001C7F77: ;
    ecx = MEM32(ebp + 0x87565C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CB330(); /* call 0x001CB330 */

loc_001C7F83: ;
    esp = esp + 4;

loc_001C7F86: ;
    SET_LO8(eax, MEM8(0x862C8B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C7FAD; /* je: equal / zero */

loc_001C7F8F: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(ebp + 0x87565C);
    edx = MEM32(esp + 0xCC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001CB700(); /* call 0x001CB700 */

loc_001C7FAA: ;
    esp = esp + 0xC;

loc_001C7FAD: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0xC);
    SET_LO8(edx, MEM8(ecx + 0x135));
    xmm0 = MEMF(ebp + 0x875648); /* movss */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 0x1C) = LO8(edx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001C7FE8; /* je: equal / zero */

loc_001C7FCE: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0x87565C);
    ebx = MEM32(esp + 0xCC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CBD70(); /* call 0x001CBD70 */

loc_001C7FE6: ;
    goto loc_001C7FF9;

loc_001C7FE8: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x87565C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CC030(); /* call 0x001CC030 */

loc_001C7FF9: ;
    xmm3 = MEMF(0x649148); /* movss */
    esp = esp + 8;
    /* comiss xmm3, MEMF(esp + 0x38) - sets EFLAGS */
    if ((xmm3 <= MEMF(esp + 0x38))) goto loc_001C8011; /* jbe: below or equal (unsigned <=) */

loc_001C800B: ;
    MEMF(esp + 0x38) = xmm3; /* movss */

loc_001C8011: ;
    xmm0 = MEMF(esi + edi * 4 + 0x98); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001C8030; /* jp: parity */

loc_001C8026: ;
    xmm1 = MEMF(0x648D14); /* movss */
    goto loc_001C806D;

loc_001C8030: ;
    xmm0 = MEMF(esi + edi * 4 + 0x98); /* movss */
    xmm0 = xmm0 - MEMF(0x7F9F58); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + edi * 4 + 0x98) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_001C8054; /* jbe: below or equal (unsigned <=) */

loc_001C804F: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001C8064;

loc_001C8054: ;
    xmm2 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_001C8064; /* jbe: below or equal (unsigned <=) */

loc_001C8061: ;
    xmm0 = xmm2; /* movaps */

loc_001C8064: ;
    MEMF(esi + edi * 4 + 0x98) = xmm0; /* movss */

loc_001C806D: ;
    xmm0 = MEMF(ebp + 0x875648); /* movss */
    xmm0 = xmm0 * MEMF(0x64B264); /* mulss */
    eax = MEM32(esp + 0xCC);
    MEMF(esp + 0x58) = xmm0; /* movss */
    edx = MEM32(esp + 0x58);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0); sub_001CCC70(); /* call 0x001CCC70 */

loc_001C80AC: ;
    eax = MEM32(ebp + 0x87565C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_001C80B8: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 0xC);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001C80D9; /* je: equal / zero */

loc_001C80C5: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001C80D9; /* je: equal / zero */

loc_001C80CF: ;
    eax = MEM32(esi + 0x44);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_003328C0(); /* call 0x003328C0 */

loc_001C80D9: ;
    eax = MEM32(esi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_001C8C2D; /* je: equal / zero */

loc_001C80E4: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_001C8C2D; /* je: equal / zero */

loc_001C80EF: ;
    esi = MEM32(ecx + 0x564);
    if (TEST_Z(esi, esi)) goto loc_001C8C2D; /* je: equal / zero */

loc_001C80FD: ;
    if (CMP_EQ(MEM16(ecx + 0x3AE), 0)) goto loc_001C8C2D; /* je: equal / zero */

loc_001C810B: ;
    SET_LO8(edx, MEM8(ecx + 0x135));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001C8632; /* je: equal / zero */

loc_001C8119: ;
    PUSH32(esp, 0); sub_002F6EB0(); /* call 0x002F6EB0 */

loc_001C811E: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001C8C2D; /* je: equal / zero */

loc_001C8128: ;
    esi = MEM32(edi + 0x570);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x5C), _icall_esp); /* indirect call */
    }

loc_001C8135: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x54), _icall_esp); /* indirect call */
    }

loc_001C8140: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x58), _icall_esp); /* indirect call */
    }

loc_001C8149: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx);
    eax = eax + 0xFFFFFFEBu;
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_A(eax, 0x33)) goto loc_001C81CB; /* ja: above (unsigned >) */

loc_001C8159: ;
    eax = ZX8(MEM8(eax + 0x1C9DBC));
    { uint32_t _jt = MEM32(eax * 4 + 0x1C9DAC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001C8167u) goto loc_001C8167;
    if (_jt == 0x001C81CBu) goto loc_001C81CB;
    if (_jt == 0x001C8282u) goto loc_001C8282;
    if (_jt == 0x001C82B6u) goto loc_001C82B6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C8167: ;
    eax = MEM32(esi + 0x1F0);
    if (TEST_Z(eax, eax)) goto loc_001C8194; /* je: equal / zero */

loc_001C8171: ;
    eax = MEM32(eax + 0x564);
    if (TEST_Z(eax, eax)) goto loc_001C8194; /* je: equal / zero */

loc_001C817B: ;
    edx = ZX8(MEM8(eax + 0x2A8));
    if (CMP_NE(edx, MEM32(esp + 0x54))) goto loc_001C8194; /* jne: not equal / not zero */

loc_001C8188: ;
    eax = MEM32(esi + 0x1378);
    if (TEST_NZ(eax, eax)) goto loc_001C8194; /* jne: not equal / not zero */

loc_001C8192: ;
    SET_LO8(ecx, 1);

loc_001C8194: ;
    eax = MEM32(esi + 0x2A0);
    if (TEST_Z(eax, eax)) goto loc_001C81C3; /* je: equal / zero */

loc_001C819E: ;
    eax = MEM32(eax + 0x564);
    if (TEST_Z(eax, eax)) goto loc_001C81C3; /* je: equal / zero */

loc_001C81A8: ;
    eax = ZX8(MEM8(eax + 0x2A8));
    if (CMP_NE(eax, MEM32(esp + 0x54))) goto loc_001C81C3; /* jne: not equal / not zero */

loc_001C81B5: ;
    eax = MEM32(esi + 0x137C);
    if (TEST_Z(eax, eax)) goto loc_001C8C2D; /* je: equal / zero */

loc_001C81C3: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C8C2D; /* jne: not equal / not zero */

loc_001C81CB: ;
    eax = MEM32(esp + 0x18);
    SET_LO8(ecx, MEM8(eax + 0xC4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001C81E7; /* je: equal / zero */

loc_001C81D9: ;
    SET_LO8(ecx, MEM8(eax + 0xC8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C8C2D; /* jne: not equal / not zero */

loc_001C81E7: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    esi = esp + 0x44;
    edx = ebx;
    PUSH32(esp, 0); sub_003318E0(); /* call 0x003318E0 */

loc_001C8200: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    esi = esp + 0x34;
    edx = ebx;
    PUSH32(esp, 0); sub_00331950(); /* call 0x00331950 */

loc_001C8219: ;
    xmm0 = MEMF(0x648EEC); /* movss */
    ecx = esp + 0x84;
    PUSH32(esp, 0x76);
    PUSH32(esp, ecx);
    eax = 0x7A;
    MEM32(esp + 0x8C) = edi;
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_001C8245: ;
    xmm0 = MEMF(esp + 0x90); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0x87565C); /* mulss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    esp = esp + 0x18;
    xmm2 = xmm0; /* movaps */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_001C82D4; /* jbe: below or equal (unsigned <=) */

loc_001C827D: ;
    xmm2 = xmm3; /* movaps */
    goto loc_001C82DC;

loc_001C8282: ;
    ecx = MEM32(esi + 0x1F0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esi + 0x2A0);
    if (TEST_Z(ecx, ecx)) goto loc_001C81CB; /* je: equal / zero */

loc_001C8296: ;
    if (TEST_Z(eax, eax)) goto loc_001C81CB; /* je: equal / zero */

loc_001C829E: ;
    ecx = MEM32(esp + 0xC8);
    edx = MEM32(ecx + 0x38);
    if (CMP_EQ(MEM32(edx + 0xC), eax)) goto loc_001C81CB; /* je: equal / zero */

loc_001C82B1: ;
    goto loc_001C8C2D;

loc_001C82B6: ;
    eax = MEM32(esp + 0xC8);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(ecx + 0xC);
    if (CMP_EQ(edx, MEM32(esi + 0x2A0))) goto loc_001C81CB; /* je: equal / zero */

loc_001C82CF: ;
    goto loc_001C8C2D;

loc_001C82D4: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_001C82DC; /* jbe: below or equal (unsigned <=) */

loc_001C82D9: ;
    xmm2 = xmm1; /* movaps */

loc_001C82DC: ;
    if (CMP_NE(MEM32(ebx), 0x48)) goto loc_001C8448; /* jne: not equal / not zero */

loc_001C82E5: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C8305; /* je: equal / zero */

loc_001C82ED: ;
    xmm0 = MEMF(0x64A2EC); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64B260); /* movss */
    goto loc_001C831B;

loc_001C8305: ;
    xmm0 = MEMF(0x64B25C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x649298); /* movss */

loc_001C831B: ;
    xmm6 = (float)(int32_t)MEM32(esp + 0x24); /* cvtsi2ss */
    xmm7 = (float)(int32_t)MEM32(esp + 0x3C); /* cvtsi2ss */
    eax = MEM32(esp + 0x18);
    xmm4 = MEMF(0x648D1C); /* movss */
    xmm5 = MEMF(0x6490B8); /* movss */
    xmm6 = xmm6 / xmm7; /* divss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm6 = MEMF(eax + 0x84); /* movss */
    /* comiss xmm6, xmm3 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    MEMF(esp + 0x48) = xmm5; /* movss */
    if ((xmm6 <= xmm3)) goto loc_001C8434; /* jbe: below or equal (unsigned <=) */

loc_001C8362: ;
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 / MEMF(eax + 0x88); /* divss */
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    esi = 0xFF;
    edi = 0xAF;
    ebx = 0; /* xor self */

loc_001C8383: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C83CF; /* je: equal / zero */

loc_001C838B: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x5C); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x60); /* addss */
    xmm3 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x64); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x68); /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x48) = xmm1; /* movss */

loc_001C83CF: ;
    edx = MEM32(esp + 0x10);
    xmm2 = xmm2 * MEMF(0x649FB0); /* mulss */
    xmm3 = MEMF(esp + 0x48); /* movss */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = eax;
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    ebp = (int32_t)xmm2; /* cvttss2si */
    PUSH32(esp, eax);
    ecx = ebp;
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_001CB0E0(); /* call 0x001CB0E0 */

loc_001C8408: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x34);
    xmm0 = MEMF(0x64971C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    xmm3 = MEMF(esp + 0x58); /* movss */
    xmm5 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    goto loc_001C8C1C;

loc_001C8434: ;
    esi = 0x64;
    edi = 0xCD;
    ebx = 0xFF;
    goto loc_001C8383;

loc_001C8448: ;
    esi = MEM32(esp + 0x3C);
    if (CMP_LE(esi & esi, 0)) goto loc_001C8C2D; /* jle: less or equal (signed <=) */

loc_001C8454: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(esp + 0x18);
    xmm0 = MEMF(edi + 0xCC); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C846E; /* je: equal / zero */

loc_001C8468: ;
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */

loc_001C846E: ;
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_001C8473: ;
    edx = MEM32(esp + 0x48);
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm2 = xmm2 * MEMF(0x649FB0); /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    MEM8(0x77616E) = LO8(eax);
    if (TEST_Z(edx, edx)) goto loc_001C8530; /* je: equal / zero */

loc_001C8490: ;
    esi = MEM32(esp + 0x1C);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm0, MEMF(0x648EB0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648EB0))) goto loc_001C84C0; /* jbe: below or equal (unsigned <=) */

loc_001C84A9: ;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0xCD;
    MEM8(0x77616F) = 0xFF;
    goto loc_001C84D5;

loc_001C84C0: ;
    SET_LO8(ecx, 0x3C);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = LO8(ecx);
    MEM8(0x77616F) = LO8(ecx);

loc_001C84D5: ;
    ecx = MEM32(edi + 0xD0);
    fp_push((double)SMEM32(edi + 0xD0)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001C84EB; /* jge: greater or equal (signed >=) */

loc_001C84E5: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C84EB: ;
    eax = MEM32(edi + 0xD4);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test eax, eax - flags set for next jcc */
    fp_push((double)SMEM32(edi + 0xD4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001C8505; /* jge: greater or equal (signed >=) */

loc_001C84FF: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C8505: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C8529; /* je: equal / zero */

loc_001C851D: ;
    xmm0 = xmm0 * MEMF(esp + 0x5C); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x64); /* mulss */

loc_001C8529: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    goto loc_001C8608;

loc_001C8530: ;
    edx = MEM32(esp + 0x24);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm0, MEMF(0x648EB0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648EB0))) goto loc_001C8560; /* jbe: below or equal (unsigned <=) */

loc_001C8549: ;
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0xCD;
    MEM8(0x77616F) = 0xFF;
    goto loc_001C8575;

loc_001C8560: ;
    SET_LO8(ecx, 0x3C);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = LO8(ecx);
    MEM8(0x77616F) = LO8(ecx);

loc_001C8575: ;
    eax = MEM32(edi + 0xD0);
    fp_push((double)SMEM32(edi + 0xD0)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001C858B; /* jge: greater or equal (signed >=) */

loc_001C8585: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C858B: ;
    ecx = MEM32(edi + 0xD4);
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_push((double)SMEM32(edi + 0xD4)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001C85A5; /* jge: greater or equal (signed >=) */

loc_001C859F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C85A5: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C85D6; /* je: equal / zero */

loc_001C85BD: ;
    (void)0; /* cmp MEM32(ebx), 0x16 - flags set for next jcc */
    xmm0 = xmm0 * MEMF(esp + 0x5C); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x64); /* mulss */
    if (CMP_NE(MEM32(ebx), 0x16)) goto loc_001C85D6; /* jne: not equal / not zero */

loc_001C85CE: ;
    xmm0 = xmm0 + MEMF(0x6490F4); /* addss */

loc_001C85D6: ;
    if (CMP_LE(esi, 9)) goto loc_001C8606; /* jle: less or equal (signed <=) */

loc_001C85DB: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = edx + edi;
    PUSH32(esp, 0x5F56CC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = eax + edx;
    PUSH32(esp, eax);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001C85FE: ;
    esp = esp + 0x10;
    goto loc_001C8C2D;

loc_001C8606: ;
    PUSH32(esp, esi);
    PUSH32(esp, edx);

loc_001C8608: ;
    ebx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x18);
    ecx = (int32_t)xmm1; /* cvttss2si */
    ecx = ecx + ebx;
    PUSH32(esp, 0x5F56D4);
    PUSH32(esp, ecx);
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = edx + esi;
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001C862A: ;
    esp = esp + 0x14;
    goto loc_001C8C2D;

loc_001C8632: ;
    PUSH32(esp, 0); sub_0032FD10(); /* call 0x0032FD10 */

loc_001C8637: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_001C8C2D; /* je: equal / zero */

loc_001C8641: ;
    edx = MEM32(edi + 0x1C);
    if (TEST_Z(edx, edx)) goto loc_001C8C2D; /* je: equal / zero */

loc_001C864C: ;
    SET_LO8(eax, MEM8(edx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C8C2D; /* jne: not equal / not zero */

loc_001C8657: ;
    eax = MEM32(edi + 8);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    ebp = ecx + edx + 0x14;
    SET_LO8(ecx, MEM8(esi + 0x6DC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001C8C2D; /* je: equal / zero */

loc_001C8674: ;
    SET_LO8(ecx, MEM8(ebp + 0xC4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001C868C; /* je: equal / zero */

loc_001C867E: ;
    SET_LO8(ecx, MEM8(ebp + 0xC8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C8C2D; /* jne: not equal / not zero */

loc_001C868C: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_003318E0(); /* call 0x003318E0 */

loc_001C869F: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x1C);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    esi = esp + 0x58;
    PUSH32(esp, 0); sub_00331950(); /* call 0x00331950 */

loc_001C86B8: ;
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(ecx);
    esp = esp + 0x10;
    if (CMP_EQ(eax, 0x1E)) goto loc_001C891E; /* je: equal / zero */

loc_001C86C9: ;
    if (CMP_EQ(eax, 5)) goto loc_001C891E; /* je: equal / zero */

loc_001C86D2: ;
    if (CMP_EQ(eax, 0x2D)) goto loc_001C891E; /* je: equal / zero */

loc_001C86DB: ;
    if (CMP_EQ(eax, 0xB)) goto loc_001C891E; /* je: equal / zero */

loc_001C86E4: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_LE(eax & eax, 0)) goto loc_001C891E; /* jle: less or equal (signed <=) */

loc_001C86F0: ;
    edx = MEM32(esp + 0xC8);
    eax = MEM32(edx + 0x40);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_003328C0(); /* call 0x003328C0 */

loc_001C8701: ;
    SET_LO8(ebx, MEM8(esp + 0x2C));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(ebp + 0xCC); /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001C8717; /* je: equal / zero */

loc_001C8711: ;
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */

loc_001C8717: ;
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_001C871C: ;
    edx = MEM32(esp + 0x24);
    if (TEST_Z(edx, edx)) goto loc_001C881B; /* je: equal / zero */

loc_001C8728: ;
    esi = MEM32(esp + 0x3C);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm0, MEMF(0x648EB0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648EB0))) goto loc_001C8761; /* jbe: below or equal (unsigned <=) */

loc_001C8741: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0xCD;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = LO8(eax);
    goto loc_001C8780;

loc_001C8761: ;
    SET_LO8(ecx, 0x3C);
    MEM8(0x776170) = LO8(ecx);
    MEM8(0x77616F) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM8(0x776171) = 0xFF;
    MEM8(0x77616E) = LO8(ecx);

loc_001C8780: ;
    eax = MEM32(ebp + 0xD0);
    fp_push((double)SMEM32(ebp + 0xD0)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001C8796; /* jge: greater or equal (signed >=) */

loc_001C8790: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C8796: ;
    ecx = MEM32(ebp + 0xD4);
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_push((double)SMEM32(ebp + 0xD4)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001C87B0; /* jge: greater or equal (signed >=) */

loc_001C87AA: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C87B0: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001C87EF; /* je: equal / zero */

loc_001C87C4: ;
    eax = MEM32(edi + 0x1C);
    eax = MEM32(eax);
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    xmm1 = xmm1 * MEMF(esp + 0x5C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x64); /* mulss */
    if (CMP_NE(eax, 3)) goto loc_001C87E2; /* jne: not equal / not zero */

loc_001C87DA: ;
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */

loc_001C87E2: ;
    if (CMP_NE(eax, 2)) goto loc_001C87EF; /* jne: not equal / not zero */

loc_001C87E7: ;
    xmm0 = xmm0 - MEMF(0x6490F4); /* subss */

loc_001C87EF: ;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = ecx + edx;
    PUSH32(esp, 0x5F56D4);
    PUSH32(esp, ecx);
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = edx + esi;
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001C8813: ;
    esp = esp + 0x14;
    goto loc_001C8922;

loc_001C881B: ;
    eax = MEM32(esp + 0x48);
    esi = MEM32(esp + 0x1C);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm0, MEMF(0x648EB0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648EB0))) goto loc_001C8859; /* jbe: below or equal (unsigned <=) */

loc_001C8838: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0xCD;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = LO8(ecx);
    goto loc_001C8878;

loc_001C8859: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    SET_LO8(ecx, 0x3C);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = LO8(ecx);
    MEM8(0x77616F) = LO8(ecx);
    MEM8(0x77616E) = LO8(edx);

loc_001C8878: ;
    ecx = MEM32(ebp + 0xD0);
    fp_push((double)SMEM32(ebp + 0xD0)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001C888E; /* jge: greater or equal (signed >=) */

loc_001C8888: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C888E: ;
    edx = MEM32(ebp + 0xD4);
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_push((double)SMEM32(ebp + 0xD4)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001C88A8; /* jge: greater or equal (signed >=) */

loc_001C88A2: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C88A8: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001C88C8; /* je: equal / zero */

loc_001C88BC: ;
    xmm0 = xmm0 * MEMF(esp + 0x5C); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x64); /* mulss */

loc_001C88C8: ;
    if (CMP_LE(esi, 9)) goto loc_001C88F5; /* jle: less or equal (signed <=) */

loc_001C88CD: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, 0x5F56CC);
    eax = eax + edx;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx = ecx + esi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001C88F0: ;
    esp = esp + 0x10;
    goto loc_001C8922;

loc_001C88F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = edx + eax;
    PUSH32(esp, 0x5F56D4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = eax + edx;
    PUSH32(esp, eax);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001C8919: ;
    esp = esp + 0x14;
    goto loc_001C8922;

loc_001C891E: ;
    SET_LO8(ebx, MEM8(esp + 0x2C));

loc_001C8922: ;
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(ecx);
    if (CMP_EQ(eax, 0xB)) goto loc_001C8AB7; /* je: equal / zero */

loc_001C8930: ;
    if (CMP_EQ(eax, 0x2D)) goto loc_001C8AB7; /* je: equal / zero */

loc_001C8939: ;
    if (CMP_EQ(eax, 2)) goto loc_001C8947; /* je: equal / zero */

loc_001C893E: ;
    if (CMP_NE(eax, 0x44)) goto loc_001C8C2D; /* jne: not equal / not zero */

loc_001C8947: ;
    edx = MEM32(esp + 0xC8);
    eax = MEM32(edx + 0x38);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx + 0x568);
    ecx = MEM32(eax + 0x2B0);
    if (TEST_Z(ecx, ecx)) goto loc_001C8C2D; /* je: equal / zero */

loc_001C8968: ;
    ecx = MEM32(0x84A144);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = MEMF(0x64A940); /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_001C8982; /* je: equal / zero */

loc_001C897A: ;
    xmm0 = MEMF(0x64B258); /* movss */

loc_001C8982: ;
    xmm2 = MEMF(0x6490F4); /* movss */
    xmm1 = MEMF(eax + 0x284); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    xmm5 = MEMF(0x64B264); /* movss */
    xmm4 = MEMF(0x649550); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    esi = 0x64;
    edi = 0xCD;
    ebx = 0xFF;
    if ((xmm1 < xmm2)) goto loc_001C89CF; /* jb: below (unsigned <) */

loc_001C89CB: ;
    edi = 0; /* xor self */
    goto loc_001C89E5;

loc_001C89CF: ;
    xmm1 = MEMF(eax + 0x284); /* movss */
    /* comiss xmm1, MEMF(0x648D20) - sets EFLAGS */
    if ((xmm1 < MEMF(0x648D20))) goto loc_001C89EC; /* jb: below (unsigned <) */

loc_001C89E0: ;
    edi = 0xAF;

loc_001C89E5: ;
    esi = 0xFF;
    ebx = 0; /* xor self */

loc_001C89EC: ;
    xmm1 = MEMF(eax + 0x284); /* movss */
    SET_LO8(eax, MEM8(esp + 0x2C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = xmm1 * MEMF(0x6491FC); /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C8A50; /* je: equal / zero */

loc_001C8A0A: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    xmm3 = MEMF(esp + 0x64); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x60); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x68); /* addss */
    xmm1 = xmm1 * xmm4; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */

loc_001C8A50: ;
    edx = MEM32(esp + 0x24);
    ebp = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm5 = MEMF(esp + 0x48); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = eax;
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    PUSH32(esp, eax);
    ecx = ebp;
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_001CB0E0(); /* call 0x001CB0E0 */

loc_001C8A83: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x4C);
    xmm0 = MEMF(0x64971C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    xmm5 = MEMF(esp + 0x58); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    goto loc_001C8C1C;

loc_001C8AB7: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001C8AEF; /* je: equal / zero */

loc_001C8ABB: ;
    xmm2 = MEMF(0x648D18); /* movss */
    xmm1 = MEMF(0x64A2EC); /* movss */
    xmm0 = MEMF(0x64B254); /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(0x649FFC); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    goto loc_001C8B27;

loc_001C8AEF: ;
    xmm1 = MEMF(0x648D1C); /* movss */
    xmm0 = MEMF(0x64B25C); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(0x6490B8); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649298); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */

loc_001C8B27: ;
    xmm3 = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    xmm2 = (float)(int32_t)MEM32(esp + 0x48); /* cvtsi2ss */
    xmm2 = xmm2 / xmm3; /* divss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(ebp + 0x84); /* movss */
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 <= MEMF(0x648CF8))) goto loc_001C8D46; /* jbe: below or equal (unsigned <=) */

loc_001C8B52: ;
    xmm2 = xmm2 / MEMF(ebp + 0x88); /* divss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    esi = 0xFF;
    edi = 0xAF;
    ebx = 0; /* xor self */

loc_001C8B78: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C8BCC; /* je: equal / zero */

loc_001C8B80: ;
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x5C); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x60); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x64); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x68); /* addss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm1 + MEMF(0x648D14); /* addss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x14) = xmm3; /* movss */

loc_001C8BCC: ;
    ecx = MEM32(esp + 0x1C);
    xmm3 = MEMF(esp + 0x14); /* movss */
    xmm5 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ebp = (int32_t)xmm0; /* cvttss2si */
    eax = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = 0x73;
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_001CB0E0(); /* call 0x001CB0E0 */

loc_001C8BF6: ;
    edx = MEM32(esp + 0x2C);
    xmm0 = MEMF(0x64971C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm5 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = 0x73;

loc_001C8C1C: ;
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    eax = esi;
    edx = ebx;
    PUSH32(esp, 0); sub_001CB0E0(); /* call 0x001CB0E0 */

loc_001C8C2A: ;
    esp = esp + 0x20;

loc_001C8C2D: ;
    ebx = MEM32(esp + 0xC8);
    ebp = MEM32(ebx + 0x38);
    eax = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(esp + 0x84) = edx;
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0x88) = edx;
    MEM32(esp + 0xA8) = ecx;
    MEM32(esp + 0x8C) = edx;
    MEM32(esp + 0xAC) = ecx;
    MEM32(esp + 0x90) = edx;
    MEM32(esp + 0xB0) = ecx;
    MEM32(esp + 0x94) = edx;
    MEM32(esp + 0xB4) = ecx;
    MEM32(esp + 0x98) = edx;
    MEM32(esp + 0x9C) = edx;
    MEM32(esp + 0xB8) = ecx;
    MEM32(esp + 0xBC) = ecx;
    MEM32(esp + 0xA0) = edx;
    edx = MEM32(eax + 0x238);
    eax = MEM32(edx);
    MEM32(esp + 0xC0) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(eax, 1)) goto loc_001C8CCE; /* jne: not equal / not zero */

loc_001C8CC6: ;
    MEM32(esp + 0x18) = 1;

loc_001C8CCE: ;
    eax = MEM32(ebx + 0x3C);
    (void)0; /* cmp MEM32(eax), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C8FE3; /* jne: not equal / not zero */

loc_001C8CDF: ;
    esi = MEM32(ebx + 0x48);
    edi = MEM32(esi);
    xmm0 = MEMF(esi + 0xC); /* movss */
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edi, 1)) ? 1 : 0); /* sete */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x14) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C8D0E; /* jne: not equal / not zero */

loc_001C8CFD: ;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001C8DE7; /* jnp: not parity */

loc_001C8D0E: ;
    edi = 0; /* xor self */
    edx = ebp + 0x54;

loc_001C8D13: ;
    SET_LO8(eax, MEM8(edx + -20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C8D79; /* je: equal / zero */

loc_001C8D1A: ;
    eax = MEM32(edx);
    ebx = MEM32(eax * 8 + 0x74A954);
    MEM32(esp + ecx * 4 + 0x84) = ebx;
    ebx = MEM32(0x6BD92C);
    (void)0; /* cmp MEM32(ebx + 4), 1 - flags set for next jcc */
    ebx = MEM32(esp + 0x18);
    eax = ebx + eax * 2;
    if (CMP_NE(MEM32(ebx + 4), 1)) goto loc_001C8D5A; /* jne: not equal / not zero */

loc_001C8D3D: ;
    eax = MEM32(eax * 4 + 0x6B9148);
    goto loc_001C8D61;

loc_001C8D46: ;
    esi = 0x64;
    edi = 0xCD;
    ebx = 0xFF;
    goto loc_001C8B78;

loc_001C8D5A: ;
    eax = MEM32(eax * 4 + 0x6B8EE8);

loc_001C8D61: ;
    MEM32(esp + ecx * 4 + 0xA4) = eax;
    if (CMP_NE(edi, MEM32(ebp + 0x34))) goto loc_001C8D71; /* jne: not equal / not zero */

loc_001C8D6D: ;
    MEM32(esp + 0x10) = ecx;

loc_001C8D71: ;
    ebx = MEM32(esp + 0xC8);
    ecx++;

loc_001C8D79: ;
    edi++;
    edx = edx + 0x38;
    if (CMP_L(edi, 8)) goto loc_001C8D13; /* jl: less (signed <) */

loc_001C8D82: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C8DA0; /* je: equal / zero */

loc_001C8D8A: ;
    (void)0; /* cmp MEM32(esi + 4), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(esi + 4), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C8DA0; /* jne: not equal / not zero */

loc_001C8D95: ;
    esi = MEM32(esp + 0x10);
    edx = ebx;
    PUSH32(esp, 0); sub_001CB060(); /* call 0x001CB060 */

loc_001C8DA0: ;
    eax = MEM32(esp + 0x84);
    if (TEST_Z(eax, eax)) goto loc_001C8DE7; /* je: equal / zero */

loc_001C8DAB: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xD0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = esp + 0xAC;
    PUSH32(esp, 0); sub_001CA190(); /* call 0x001CA190 */

loc_001C8DE4: ;
    esp = esp + 0x28;

loc_001C8DE7: ;
    ebp = MEM32(ebx + 0x4C);
    edx = edx | 0xFFFFFFFFu;
    xmm0 = MEMF(ebp + 0xC); /* movss */
    eax = 0; /* xor self */
    MEM32(esp + 0xA4) = edx;
    MEM32(esp + 0xA8) = edx;
    MEM32(esp + 0x84) = eax;
    MEM32(esp + 0xAC) = edx;
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0xB0) = edx;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0xB4) = edx;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0xB8) = edx;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0xBC) = edx;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0xC0) = edx;
    edx = MEM32(ebp);
    edi = 0; /* xor self */
    MEM32(esp + 0x9C) = eax;
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    MEM32(esp + 0xA0) = eax;
    SET_LO8(eax, (CMP_EQ(edx, 1)) ? 1 : 0); /* sete */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x14) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C8E92; /* jne: not equal / not zero */

loc_001C8E81: ;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001C8FE3; /* jnp: not parity */

loc_001C8E92: ;
    esi = MEM32(ebx + 0x38);
    ecx = MEM32(esi + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + esi + 0x40;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_001C8FE3; /* je: equal / zero */

loc_001C8EA8: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x10);
    if (CMP_LE(ecx, edi)) goto loc_001C8F53; /* jle: less or equal (signed <=) */

loc_001C8EB6: ;
    SET_LO8(edx, MEM8(eax + 4));
    MEM8(esp + 0x6F) = LO8(edx);
    edx = eax + 0x14;
    MEM32(esp + 0x24) = ecx;

loc_001C8EC4: ;
    SET_LO8(eax, MEM8(esp + 0x6F));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C8F3E; /* jne: not equal / not zero */

loc_001C8ECC: ;
    SET_LO8(eax, MEM8(edx + 0x6D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C8EDA; /* je: equal / zero */

loc_001C8ED3: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C8F3E; /* je: equal / zero */

loc_001C8EDA: ;
    eax = MEM32(edx);
    ecx = MEM32(eax * 8 + 0x74A69C);
    MEM32(esp + edi * 4 + 0x84) = ecx;
    ecx = MEM32(0x6BD92C);
    (void)0; /* cmp MEM32(ecx + 4), 1 - flags set for next jcc */
    ecx = MEM32(esp + 0x18);
    eax = ecx + eax * 2;
    if (CMP_NE(MEM32(ecx + 4), 1)) goto loc_001C8F06; /* jne: not equal / not zero */

loc_001C8EFD: ;
    ecx = MEM32(eax * 4 + 0x6B9660);
    goto loc_001C8F0D;

loc_001C8F06: ;
    ecx = MEM32(eax * 4 + 0x6B93A8);

loc_001C8F0D: ;
    eax = MEM32(esi + 0xC);
    eax = ZX16(MEM16(eax + 0x60));
    MEM32(esp + edi * 4 + 0xA4) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_L(eax, ecx)) goto loc_001C8F2B; /* jl: less (signed <) */

loc_001C8F26: ;
    eax = 0x14;

loc_001C8F2B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    if (CMP_NE(edi, MEM32(eax + 0x763344))) goto loc_001C8F3D; /* jne: not equal / not zero */

loc_001C8F39: ;
    MEM32(esp + 0x10) = edi;

loc_001C8F3D: ;
    edi++;

loc_001C8F3E: ;
    eax = MEM32(esp + 0x24);
    edx = edx + 0xD8;
    eax--;
    MEM32(esp + 0x24) = eax;
    if ((eax != 0)) goto loc_001C8EC4; /* jne: not equal / not zero */

loc_001C8F53: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C8F73; /* je: equal / zero */

loc_001C8F5B: ;
    (void)0; /* cmp MEM32(ebp + 4), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(ebp + 4), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C8F73; /* jne: not equal / not zero */

loc_001C8F66: ;
    esi = MEM32(esp + 0x10);
    ecx = edi;
    edx = ebx;
    PUSH32(esp, 0); sub_001CB060(); /* call 0x001CB060 */

loc_001C8F73: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F56B4;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001C8F7F: ;
    ecx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_001C8F9C; /* jle: less or equal (signed <=) */

loc_001C8F85: ;
    edx = MEM32(esp + ecx * 4 + 0x84);
    if (TEST_NZ(edx, edx)) goto loc_001C8F97; /* jne: not equal / not zero */

loc_001C8F90: ;
    MEM32(esp + ecx * 4 + 0x84) = eax;

loc_001C8F97: ;
    ecx++;
    if (CMP_L(ecx, edi)) goto loc_001C8F85; /* jl: less (signed <) */

loc_001C8F9C: ;
    eax = MEM32(esp + 0x84);
    if (TEST_Z(eax, eax)) goto loc_001C8FE3; /* je: equal / zero */

loc_001C8FA7: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0xCC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0xAC;
    PUSH32(esp, 0); sub_001CA190(); /* call 0x001CA190 */

loc_001C8FE0: ;
    esp = esp + 0x28;

loc_001C8FE3: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9014; /* je: equal / zero */

loc_001C8FF0: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 * MEMF(0x64B26C); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9038; /* je: equal / zero */

loc_001C900A: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    goto loc_001C9030;

loc_001C9014: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x64B26C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9038; /* je: equal / zero */

loc_001C9028: ;
    xmm0 = MEMF(0x64B268); /* movss */

loc_001C9030: ;
    MEMF(0x77615C) = xmm0; /* movss */

loc_001C9038: ;
    ecx = MEM32(ebx + 0x38);
    eax = MEM32(ecx + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_001C92B6; /* jne: not equal / not zero */

loc_001C9046: ;
    eax = MEM32(ecx + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    esi = eax + ecx;
    SET_LO8(eax, MEM8(esi + 0x40));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C92B6; /* je: equal / zero */

loc_001C905A: ;
    eax = MEM32(esi + 0x5C);
    SET_LO8(ecx, MEM8(eax + 4));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edi = MEM32(esp + 0x18);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C919E; /* jne: not equal / not zero */

loc_001C906C: ;
    ecx = MEM32(0x6BD92C);
    if (CMP_NE(MEM32(ecx + 4), 1)) goto loc_001C9094; /* jne: not equal / not zero */

loc_001C9078: ;
    edx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x5C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    ecx = MEM32(edx + eax + 0x14);
    edx = edi + ecx * 2;
    ecx = MEM32(edx * 4 + 0x6B9660);
    goto loc_001C90AE;

loc_001C9094: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x5C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    edx = MEM32(eax + ecx + 0x14);
    eax = edi + edx * 2;
    ecx = MEM32(eax * 4 + 0x6B93A8);

loc_001C90AE: ;
    eax = MEM32(0x84A144);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C913E; /* je: equal / zero */

loc_001C90BC: ;
    eax--;
    if ((eax != 0)) goto loc_001C9172; /* jne: not equal / not zero */

loc_001C90C3: ;
    eax = MEM32(esp + 0x54);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C910A; /* je: equal / zero */

loc_001C90CC: ;
    eax--;
    if ((eax != 0)) goto loc_001C9172; /* jne: not equal / not zero */

loc_001C90D3: ;
    xmm0 = MEMF(0x649038); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649034); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = 1;
    goto loc_001C9176;

loc_001C910A: ;
    xmm0 = MEMF(0x64901C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649018); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = 0; /* xor self */
    goto loc_001C9176;

loc_001C913E: ;
    xmm0 = MEMF(0x649000); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648FFC); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D50); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = 0; /* xor self */
    goto loc_001C9176;

loc_001C9172: ;
    eax = MEM32(esp + 0x30);

loc_001C9176: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    SET_LO8(edx, 1);
    eax = esp + 0x3C;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_001CC770(); /* call 0x001CC770 */

loc_001C919B: ;
    esp = esp + 0xC;

loc_001C919E: ;
    ecx = MEM32(0x6BD92C);
    if (CMP_NE(MEM32(ecx + 4), 1)) goto loc_001C91B9; /* jne: not equal / not zero */

loc_001C91AA: ;
    edx = MEM32(esi + 0x54);
    eax = edi + edx * 2;
    ecx = MEM32(eax * 4 + 0x6B9148);
    goto loc_001C91C6;

loc_001C91B9: ;
    ecx = MEM32(esi + 0x54);
    edx = edi + ecx * 2;
    ecx = MEM32(edx * 4 + 0x6B8EE8);

loc_001C91C6: ;
    eax = MEM32(0x84A144);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C9256; /* je: equal / zero */

loc_001C91D4: ;
    eax--;
    if ((eax != 0)) goto loc_001C928A; /* jne: not equal / not zero */

loc_001C91DB: ;
    eax = MEM32(esp + 0x54);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C9222; /* je: equal / zero */

loc_001C91E4: ;
    eax--;
    if ((eax != 0)) goto loc_001C928A; /* jne: not equal / not zero */

loc_001C91EB: ;
    xmm0 = MEMF(0x649050); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64904C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649048); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = 1;
    goto loc_001C928E;

loc_001C9222: ;
    xmm0 = MEMF(0x64902C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649028); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649048); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = 0; /* xor self */
    goto loc_001C928E;

loc_001C9256: ;
    xmm0 = MEMF(0x649014); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649010); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = 0; /* xor self */
    goto loc_001C928E;

loc_001C928A: ;
    eax = MEM32(esp + 0x30);

loc_001C928E: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CEC); /* mulss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    SET_LO8(edx, 1);
    eax = esp + 0x3C;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_001CC770(); /* call 0x001CC770 */

loc_001C92B3: ;
    esp = esp + 0xC;

loc_001C92B6: ;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0; /* xor self */
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0x8C) = ecx;
    MEM32(esp + 0xB0) = eax;
    MEM32(esp + 0x90) = ecx;
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0xB8) = eax;
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0x9C) = ecx;
    MEM32(esp + 0xC0) = eax;
    MEM32(esp + 0xA0) = ecx;
    ecx = MEM32(esp + 0xC8);
    eax = MEM32(ecx + 0x3C);
    edx = MEM32(eax);
    xmm0 = MEMF(eax + 0xC); /* movss */
    eax = MEM32(ecx + 0x48);
    ebx = MEM32(eax);
    esi = 0; /* xor self */
    ebp = 0; /* xor self */
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(edx, 1)) ? 1 : 0); /* sete */
    (void)0; /* cmp ebx, 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ebx, 1)) ? 1 : 0); /* sete */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM8(esp + 0x14) = LO8(edx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9374; /* je: equal / zero */

loc_001C9363: ;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001C9508; /* jnp: not parity */

loc_001C9374: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001C9389; /* jne: not equal / not zero */

loc_001C9378: ;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001C9508; /* jnp: not parity */

loc_001C9389: ;
    edi = MEM32(0x8755F4);
    MEM32(esp + 0x1C) = esi;

loc_001C9393: ;
    eax = MEM32(ecx + 0x38);
    if (CMP_NE(MEM8(esi + eax + 0x200), 1)) goto loc_001C947A; /* jne: not equal / not zero */

loc_001C93A4: ;
    if (CMP_EQ(MEM32(esi + eax + 0x214), 0xA)) goto loc_001C947A; /* je: equal / zero */

loc_001C93B2: ;
    ecx = MEM32(esp + 0x1C);
    if (CMP_NE(ecx, MEM32(eax + 0x3C))) goto loc_001C93BF; /* jne: not equal / not zero */

loc_001C93BB: ;
    MEM32(esp + 0x10) = ebp;

loc_001C93BF: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = MEM32(esi + eax + 0x21C);
    eax = MEM32(edx + 0x1C);
    ebx = MEM32(eax * 4 + 0x74B188);
    if (TEST_NZ(edi, edi)) goto loc_001C9400; /* jne: not equal / not zero */

loc_001C93D4: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00043830(); /* call 0x00043830 */

loc_001C93DB: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_001C93F8; /* je: equal / zero */

loc_001C93E4: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = 0x5D4FB4;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_001C93F3: ;
    esp = esp + 8;
    goto loc_001C93FA;

loc_001C93F8: ;
    edi = 0; /* xor self */

loc_001C93FA: ;
    MEM32(0x8755F4) = edi;

loc_001C9400: ;
    if (CMP_NE(MEM16(ebx), 0)) goto loc_001C940A; /* jne: not equal / not zero */

loc_001C9406: ;
    eax = 0; /* xor self */
    goto loc_001C9432;

loc_001C940A: ;
    eax = MEM32(edi + 4);
    edi = MEM32(edi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_001C941B: ;
    edi = MEM32(0x8755F4);
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001C9432; /* je: equal / zero */

loc_001C942E: ;
    eax = MEM32(esp + 0x24);

loc_001C9432: ;
    ecx = MEM32(0x6BD92C);
    MEM32(esp + ebp * 4 + 0x84) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 0xC8);
    edx = MEM32(ecx + 0x38);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    eax = MEM32(edx + esi + 0x21C);
    edx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 0x18);
    edx = eax + edx * 2;
    if (CMP_NE(eax, 1)) goto loc_001C946B; /* jne: not equal / not zero */

loc_001C9462: ;
    eax = MEM32(edx * 4 + 0x6B9978);
    goto loc_001C9472;

loc_001C946B: ;
    eax = MEM32(edx * 4 + 0x6B9918);

loc_001C9472: ;
    MEM32(esp + ebp * 4 + 0xA4) = eax;
    ebp++;

loc_001C947A: ;
    ebx = MEM32(esp + 0x1C);
    ebx++;
    esi = esi + 0x20;
    (void)0; /* cmp esi, 0x80 - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_L(esi, 0x80)) goto loc_001C9393; /* jl: less (signed <) */

loc_001C9492: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C94BA; /* je: equal / zero */

loc_001C949A: ;
    ecx = MEM32(ecx + 0x3C);
    (void)0; /* cmp MEM32(ecx + 4), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(ecx + 4), 1)) ? 1 : 0); /* sete */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001C94BA; /* jne: not equal / not zero */

loc_001C94A8: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC8);
    ecx = ebp;
    PUSH32(esp, 0); sub_001CB060(); /* call 0x001CB060 */

loc_001C94BA: ;
    eax = MEM32(esp + 0x84);
    if (TEST_Z(eax, eax)) goto loc_001C9508; /* je: equal / zero */

loc_001C94C5: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0xCC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xE0);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    edx = esp + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0xAC;
    PUSH32(esp, 0); sub_001CA190(); /* call 0x001CA190 */

loc_001C9505: ;
    esp = esp + 0x28;

loc_001C9508: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C953A; /* je: equal / zero */

loc_001C9510: ;
    ecx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64B26C); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9563; /* je: equal / zero */

loc_001C9530: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    goto loc_001C955B;

loc_001C953A: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x64B26C); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9563; /* je: equal / zero */

loc_001C9553: ;
    xmm0 = MEMF(0x64B268); /* movss */

loc_001C955B: ;
    MEMF(0x77615C) = xmm0; /* movss */

loc_001C9563: ;
    edx = MEM32(esp + 0xC8);
    eax = MEM32(edx + 0x38);
    ecx = MEM32(eax + 0x3C);
    edx = ecx + 0x10;
    edx = edx << 5;
    if (CMP_EQ(MEM8(edx + eax), 0)) goto loc_001C9790; /* je: equal / zero */

loc_001C9580: ;
    ecx = ecx << 5;
    esi = ecx;
    if (CMP_EQ(MEM32(esi + eax + 0x214), 0xA)) goto loc_001C9790; /* je: equal / zero */

loc_001C9593: ;
    ecx = MEM32(0x6BD92C);
    if (CMP_NE(MEM32(ecx + 4), 1)) goto loc_001C95B9; /* jne: not equal / not zero */

loc_001C959F: ;
    edx = MEM32(esi + eax + 0x21C);
    eax = MEM32(edx + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = ecx + eax * 2;
    edi = MEM32(edx * 4 + 0x6B9978);
    goto loc_001C95D1;

loc_001C95B9: ;
    eax = MEM32(esi + eax + 0x21C);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = edx + ecx * 2;
    edi = MEM32(eax * 4 + 0x6B9918);

loc_001C95D1: ;
    eax = MEM32(0x84A144);
    eax = eax - 0;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x64AED8); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if ((eax == 0)) goto loc_001C963F; /* je: equal / zero */

loc_001C95EF: ;
    eax--;
    if ((eax != 0)) goto loc_001C965E; /* jne: not equal / not zero */

loc_001C95F2: ;
    eax = MEM32(esp + 0x54);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C9620; /* je: equal / zero */

loc_001C95FB: ;
    eax--;
    if ((eax != 0)) goto loc_001C965E; /* jne: not equal / not zero */

loc_001C95FE: ;
    xmm2 = MEMF(0x64903C); /* movss */
    xmm5 = MEMF(0x649044); /* movss */
    xmm4 = MEMF(0x649040); /* movss */
    xmm3 = xmm2; /* movaps */
    eax = 1;
    goto loc_001C9680;

loc_001C9620: ;
    xmm2 = MEMF(0x64903C); /* movss */
    xmm5 = MEMF(0x649024); /* movss */
    xmm4 = MEMF(0x649020); /* movss */
    xmm3 = xmm2; /* movaps */
    eax = 0; /* xor self */
    goto loc_001C9680;

loc_001C963F: ;
    xmm2 = MEMF(0x649004); /* movss */
    xmm5 = MEMF(0x64900C); /* movss */
    xmm4 = MEMF(0x649008); /* movss */
    xmm3 = xmm2; /* movaps */
    eax = 0; /* xor self */
    goto loc_001C9680;

loc_001C965E: ;
    eax = MEM32(esp + 0x30);
    xmm2 = MEMF(esp + 0x80); /* movss */
    xmm3 = MEMF(esp + 0x7C); /* movss */
    xmm4 = MEMF(esp + 0x80); /* movss */
    xmm5 = MEMF(esp + 0x7C); /* movss */

loc_001C9680: ;
    eax--;
    xmm0 = xmm5; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm3 = xmm3 + xmm5; /* addss */
    xmm2 = xmm2 + xmm4; /* addss */
    if ((eax == 0)) goto loc_001C96CE; /* je: equal / zero */

loc_001C9699: ;
    eax--;
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    if ((eax != 0)) goto loc_001C96E6; /* jne: not equal / not zero */

loc_001C96B4: ;
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    goto loc_001C96FE;

loc_001C96CE: ;
    MEMF(esp + 0x48) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */

loc_001C96E6: ;
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */

loc_001C96FE: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001C9707: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, 2);
    ecx = ecx << 0x18;
    ecx = ecx | 0xFFFFFF;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 4;
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001C9741: ;
    eax = MEM32(esp + 0xF4);
    ecx = MEM32(eax + 0x38);
    xmm0 = MEMF(esp + 0x7C); /* movss */
    xmm1 = MEMF(esp + 0xAC); /* movss */
    ecx = MEM32(ecx + esi + 0x21C);
    edx = MEM32(ecx);
    esp = esp + 0x2C;
    eax = ZX8(LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    xmm1 = MEMF(esp + 0x80); /* movss */
    PUSH32(esp, eax);
    xmm1 = xmm1 - xmm0; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001C9790: ;
    ecx = MEM32(esp + 0xC8);
    edx = MEM32(ecx + 0x38);
    eax = MEM32(edx + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x776154) = 0;
    if (TEST_Z(eax, eax)) goto loc_001C9920; /* je: equal / zero */

loc_001C97AC: ;
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9920; /* je: equal / zero */

loc_001C97BA: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx + -1744;
    if (TEST_Z(eax, eax)) goto loc_001C9920; /* je: equal / zero */

loc_001C97D8: ;
    if (CMP_NE(MEM32(eax + 0x64), 0x35)) goto loc_001C9920; /* jne: not equal / not zero */

loc_001C97E2: ;
    edi = MEM32(eax + 0x570);
    if (TEST_Z(edi, edi)) goto loc_001C9920; /* je: equal / zero */

loc_001C97F0: ;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_001C97F5: ;
    eax--;
    if ((eax == 0)) goto loc_001C982B; /* je: equal / zero */

loc_001C97F8: ;
    eax = eax - 6;
    if ((eax != 0)) goto loc_001C9920; /* jne: not equal / not zero */

loc_001C9801: ;
    edi = MEM32(edi + 0xF1C);
    edi = edi - 0;
    if ((edi == 0)) goto loc_001C9824; /* je: equal / zero */

loc_001C980C: ;
    edi--;
    if ((edi == 0)) goto loc_001C981D; /* je: equal / zero */

loc_001C980F: ;
    edi--;
    if ((edi != 0)) goto loc_001C9920; /* jne: not equal / not zero */

loc_001C9816: ;
    esi = 0x209;
    goto loc_001C9860;

loc_001C981D: ;
    esi = 0x208;
    goto loc_001C9860;

loc_001C9824: ;
    esi = 0x207;
    goto loc_001C9860;

loc_001C982B: ;
    esi = MEM32(esp + 0xCC);
    ecx = edi;
    PUSH32(esp, 0); sub_001C7C10(); /* call 0x001C7C10 */

loc_001C9839: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9920; /* je: equal / zero */

loc_001C9841: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x16B0);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C985B; /* je: equal / zero */

loc_001C984D: ;
    eax--;
    if ((eax != 0)) goto loc_001C9920; /* jne: not equal / not zero */

loc_001C9854: ;
    esi = 0x20A;
    goto loc_001C9860;

loc_001C985B: ;
    esi = 0x20B;

loc_001C9860: ;
    eax = MEM32(0x84A144);
    if (TEST_NZ(eax, eax)) goto loc_001C9A62; /* jne: not equal / not zero */

loc_001C986D: ;
    xmm4 = MEMF(0x649E90); /* movss */
    xmm5 = MEMF(0x64B234); /* movss */
    xmm0 = MEMF(0x64908C); /* movss */

loc_001C9885: ;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm3; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */

loc_001C98CE: ;
    edx = MEM32(esp + 0x70);
    fp_push(MEMF(edx + 0x87565C)); /* fld float */
    PUSH32(esp, 1);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001C98ED: ;
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    eax = eax | 0xFFFFFF;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 4;
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001C991D: ;
    esp = esp + 0x2C;

loc_001C9920: ;
    ebp = MEM32(esp + 0xC8);
    ebx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x44);
    esi = 0; /* xor self */

loc_001C9931: ;
    eax = MEM32(ebp + 0x50);
    fp_push(MEMF(eax + esi + 0x8C)); /* fld float */
    edx = MEM32(esp + 0x70);
    xmm0 = MEMF(edx + 0x87565C); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    eax = eax + esi;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_001C998C; /* ja: above (unsigned >) */

loc_001C9957: ;
    xmm1 = MEMF(eax + 0x8C); /* movss */
    PUSH32(esp, edi);
    ecx = eax + 6;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x648EEC); /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x226);
    eax = esp + 0x78;
    ecx = esp + 0x70;
    PUSH32(esp, 0); sub_001C9DF0(); /* call 0x001C9DF0 */

loc_001C9989: ;
    esp = esp + 0x14;

loc_001C998C: ;
    esi = esi + 0x9C;
    if (CMP_L(esi, 0x30C)) goto loc_001C9931; /* jl: less (signed <) */

loc_001C999A: ;
    (void)0; /* cmp MEM16(ebp + 0x54), 0 - flags set for next jcc */
    esi = ebp + 0x54;
    if (CMP_EQ(MEM16(ebp + 0x54), 0)) goto loc_001C9A26; /* je: equal / zero */

loc_001C99A8: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm2 = MEMF(0x64A004); /* movss */
    xmm1 = MEMF(0x648EC8); /* movss */
    xmm0 = xmm2; /* movaps */
    if (TEST_Z(eax, eax)) goto loc_001C99CC; /* je: equal / zero */

loc_001C99C4: ;
    xmm1 = MEMF(0x58BD44); /* movss */

loc_001C99CC: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C99F0; /* je: equal / zero */

loc_001C99D4: ;
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x64); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x68); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x60); /* addss */

loc_001C99F0: ;
    PUSH32(esp, esi);
    edx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, edx);
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    SET_LO8(ecx, 0x80);
    MEM8(0x776171) = 0x96;
    MEM8(0x776170) = 0xC8;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = 0xC8;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001C9A1E: ;
    esp = esp + 0xC;
    MEM16(esi) = 0;

loc_001C9A26: ;
    ecx = MEM32(ebp + 0x38);
    eax = MEM32(ecx + 0xC);
    edx = 0; /* xor self */
    if (CMP_BE(MEM16(eax + 0x3AE), LO16(edx))) goto loc_001C9D9F; /* jbe: below or equal (unsigned <=) */

loc_001C9A3B: ;
    if (CMP_NE(MEM32(0x84A144), edx)) goto loc_001C9B48; /* jne: not equal / not zero */

loc_001C9A47: ;
    xmm0 = MEMF(0x64AA50); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x649A78); /* movss */
    goto loc_001C9B5E;

loc_001C9A62: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C9AB1; /* je: equal / zero */

loc_001C9A67: ;
    eax--;
    if ((eax != 0)) goto loc_001C9ACD; /* jne: not equal / not zero */

loc_001C9A6A: ;
    eax = MEM32(esp + 0x54);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001C9A95; /* je: equal / zero */

loc_001C9A73: ;
    eax--;
    if ((eax != 0)) goto loc_001C9ACD; /* jne: not equal / not zero */

loc_001C9A76: ;
    xmm2 = MEMF(0x649038); /* movss */
    xmm1 = MEMF(0x649034); /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    eax = 1;
    goto loc_001C9AE6;

loc_001C9A95: ;
    xmm2 = MEMF(0x64901C); /* movss */
    xmm1 = MEMF(0x649018); /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    eax = 0; /* xor self */
    goto loc_001C9AE6;

loc_001C9AB1: ;
    xmm2 = MEMF(0x649000); /* movss */
    xmm1 = MEMF(0x648FFC); /* movss */
    xmm0 = MEMF(0x648D50); /* movss */
    eax = 0; /* xor self */
    goto loc_001C9AE6;

loc_001C9ACD: ;
    eax = MEM32(esp + 0x30);
    xmm0 = MEMF(esp + 0x7C); /* movss */
    xmm1 = MEMF(esp + 0x80); /* movss */
    xmm2 = MEMF(esp + 0x7C); /* movss */

loc_001C9AE6: ;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm5 = xmm1; /* movaps */
    if (CMP_NE(eax, 1)) goto loc_001C9885; /* jne: not equal / not zero */

loc_001C9AFD: ;
    xmm3 = xmm2; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    MEMF(esp + 0x40) = xmm4; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    goto loc_001C98CE;

loc_001C9B48: ;
    xmm0 = MEMF(0x649A14); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x64A170); /* movss */

loc_001C9B5E: ;
    ecx = MEM32(ecx + 0xC);
    esi = ZX16(MEM16(ecx + 0x3AE));
    ecx = ZX16(MEM16(ecx + 0x3B0));
    xmm1 = MEMF(0x648F08); /* movss */
    xmm3 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(esp + 0x2C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm2 = xmm2 / xmm0; /* divss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001C9C00; /* je: equal / zero */

loc_001C9BAB: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x5C); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x60); /* addss */
    xmm4 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x64); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x68); /* addss */
    xmm0 = xmm0 - MEMF(0x6490F4); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm4; /* movss */

loc_001C9C00: ;
    esi = MEM32(esp + 0x70);
    xmm0 = MEMF(esi + 0x87565C); /* movss */
    xmm0 = xmm0 * MEMF(0x648EC8); /* mulss */
    edi = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(0x648D3C); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    ecx = 0xFF;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x1C) = edx;
    if ((xmm0 <= xmm2)) goto loc_001C9C42; /* jbe: below or equal (unsigned <=) */

loc_001C9C36: ;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x1C) = edx;

loc_001C9C42: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    edx = esp + 0x44;
    PUSH32(esp, 0); sub_00348E40(); /* call 0x00348E40 */

loc_001C9C5A: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x30);
    edx = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    esi = (int32_t)MEMF(esp + 0x64); /* cvttss2si */
    xmm0 = MEMF(esp + 0x60); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_001CB1A0(); /* call 0x001CB1A0 */

loc_001C9C8C: ;
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(eax + 0xC);
    SET_LO8(eax, MEM8(ecx + 0x135));
    esp = esp + 0x20;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C9D9F; /* je: equal / zero */

loc_001C9CA3: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = MEM32(edx + eax + -1644);
    (void)0; /* cmp ecx, 0x35 - flags set for next jcc */
    eax = edx + eax + -1744;
    if (CMP_NE(ecx, 0x35)) goto loc_001C9D9F; /* jne: not equal / not zero */

loc_001C9CC8: ;
    ecx = MEM32(0x84A144);
    xmm0 = MEMF(esp + 0x10); /* movss */
    edx = 0; /* xor self */
    if (CMP_NE(ecx, edx)) goto loc_001C9CE4; /* jne: not equal / not zero */

loc_001C9CDA: ;
    xmm0 = xmm0 + MEMF(0x649240); /* addss */
    goto loc_001C9CEC;

loc_001C9CE4: ;
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */

loc_001C9CEC: ;
    ecx = ZX16(MEM16(eax + 0x3AE));
    edi = MEM32(esp + 0x70);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX16(MEM16(eax + 0x3B0));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(edi + 0x87565C); /* movss */
    xmm1 = xmm1 * MEMF(0x648EC8); /* mulss */
    edi = (int32_t)xmm1; /* cvttss2si */
    xmm1 = MEMF(0x648D3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    ecx = 0xFF;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x48) = 0x64;
    MEM32(esp + 0x50) = 0xCD;
    MEM32(esp + 0x1C) = ecx;
    if ((xmm1 <= xmm0)) goto loc_001C9D5C; /* jbe: below or equal (unsigned <=) */

loc_001C9D50: ;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x1C) = edx;

loc_001C9D5C: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    edx = esp + 0x44;
    PUSH32(esp, 0); sub_00348E40(); /* call 0x00348E40 */

loc_001C9D74: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x44);
    edx = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    xmm0 = MEMF(esp + 0x60); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_001CB1A0(); /* call 0x001CB1A0 */

loc_001C9D9C: ;
    esp = esp + 0x20;

loc_001C9D9F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001C9DA2: ;
    POP32(esp, esi);
    esp = esp + 0xB4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001C9DF0
 * Original: 0x001C9DF0 - 0x001C9EBF (207 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9DF0: ;
    esp = esp - 0x2C;
    edx = MEM32(0x84A144);
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm5 = MEMF(0x64994C); /* movss */
    xmm4 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 4) = xmm5; /* movss */
    MEMF(esp) = xmm4; /* movss */
    if (TEST_Z(edx, edx)) goto loc_001C9E28; /* je: equal / zero */

loc_001C9E18: ;
    xmm0 = MEMF(0x648EA0); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm4 = xmm0; /* movaps */

loc_001C9E28: ;
    SET_LO8(edx, MEM8(0x7FA23C));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001C9E3D; /* jne: not equal / not zero */

loc_001C9E35: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_001C9E3D: ;
    fp_push(MEMF(0x75DEE8)); /* fld float */
    MEMF(esp + 8) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(edx, MEM8(esp + 0x3C));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    xmm0 = MEMF(0x75DEF0); /* movss */
    /* FPU: fcos  */
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_001C9EBF(); return; } /* je: equal / zero */

loc_001C9E81: ;
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm5 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 4); /* addss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    xmm4 = MEMF(esp); /* movss */
    g_seh_ebp = ebp; sub_001C9EC5(); return; /* tail jmp 0x001C9EC5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001C9FD0
 * Original: 0x001C9FD0 - 0x001C9FF0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9FD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001CA0C0(); /* call 0x001CA0C0 */

loc_001C9FDA: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001C9FF0(); return; } /* jne: not equal / not zero */

loc_001C9FE3: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001CA000
 * Original: 0x001CA000 - 0x001CA015 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA000(void)
{

loc_001CA000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001CA0C0(); /* call 0x001CA0C0 */

loc_001CA00A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001CA010: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA020
 * Original: 0x001CA020 - 0x001CA0B3 (147 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA020(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001CA020: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x65)) goto loc_001CA0B2; /* jne: not equal / not zero */

loc_001CA02B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_001CA0B1; /* je: equal / zero */

loc_001CA037: ;
    eax = MEM32(eax + 0xC);
    if (TEST_Z(eax, eax)) goto loc_001CA0B1; /* je: equal / zero */

loc_001CA03E: ;
    ecx = MEM32(esp + 0xC);
    if (CMP_NE(eax, MEM32(ecx))) goto loc_001CA0B1; /* jne: not equal / not zero */

loc_001CA046: ;
    ecx = MEM32(eax + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_001CA0B1; /* je: equal / zero */

loc_001CA050: ;
    eax = MEM32(eax + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, MEM8(ecx + 0x2A8));
    if (TEST_Z(eax, eax)) goto loc_001CA0B1; /* je: equal / zero */

loc_001CA060: ;
    eax = MEM32(eax + 0x444);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0032FD10(); /* call 0x0032FD10 */

loc_001CA06C: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001CA0B0; /* je: equal / zero */

loc_001CA072: ;
    ecx = ZX8(LO8(edx));
    if (CMP_NE(MEM32(edi + ecx * 4 + 0xA0), 0x13)) goto loc_001CA095; /* jne: not equal / not zero */

loc_001CA07F: ;
    xmm0 = MEMF(edi + ecx * 4 + 0x98); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CA0A6; /* jnp: not parity */

loc_001CA095: ;
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(edi + ecx * 4 + 0x98) = xmm0; /* movss */

loc_001CA0A6: ;
    edx = MEM32(esi + 0x14);
    MEM32(edi + ecx * 4 + 0xA0) = edx;

loc_001CA0B0: ;
    POP32(esp, esi);

loc_001CA0B1: ;
    POP32(esp, edi);

loc_001CA0B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CA0C0
 * Original: 0x001CA0C0 - 0x001CA189 (201 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CA0C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_001CA0DC; /* je: equal / zero */

loc_001CA0CB: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001CA0D9: ;
    esp = esp + 4;

loc_001CA0DC: ;
    eax = MEM32(esi + 0x48);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x4C) = edi;
    if (CMP_EQ(eax, edi)) goto loc_001CA0F7; /* je: equal / zero */

loc_001CA0E6: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001CA0F4: ;
    esp = esp + 4;

loc_001CA0F7: ;
    eax = MEM32(esi + 0x44);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x48) = edi;
    if (CMP_EQ(eax, edi)) goto loc_001CA112; /* je: equal / zero */

loc_001CA101: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001CA10F: ;
    esp = esp + 4;

loc_001CA112: ;
    eax = MEM32(esi + 0x40);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x44) = edi;
    if (CMP_EQ(eax, edi)) goto loc_001CA12D; /* je: equal / zero */

loc_001CA11C: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001CA12A: ;
    esp = esp + 4;

loc_001CA12D: ;
    eax = MEM32(esi + 0x3C);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x40) = edi;
    if (CMP_EQ(eax, edi)) goto loc_001CA148; /* je: equal / zero */

loc_001CA137: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_001CA145: ;
    esp = esp + 4;

loc_001CA148: ;
    ecx = MEM32(esi + 0x50);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esi + 0x3C) = edi;
    if (CMP_EQ(ecx, edi)) goto loc_001CA17A; /* je: equal / zero */

loc_001CA152: ;
    edx = MEM32(ecx + -4);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    eax = ecx + -4;
    if (CMP_EQ(edx, edi)) goto loc_001CA171; /* je: equal / zero */

loc_001CA15C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001CA162: ;
    eax = MEM32(esi + 0x38);
    MEM32(esi + 0x50) = edi;
    MEM32(eax + 0x284) = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001CA171: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_001CA177: ;
    esp = esp + 4;

loc_001CA17A: ;
    eax = MEM32(esi + 0x38);
    MEM32(esi + 0x50) = edi;
    MEM32(eax + 0x284) = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA190
 * Original: 0x001CA190 - 0x001CA7E3 (1619 bytes, 359 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA190(void)
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

loc_001CA190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x7C;
    ecx = MEM32(ebp + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (TEST_Z(ecx, ecx)) goto loc_001CA7DC; /* je: equal / zero */

loc_001CA1A9: ;
    SET_LO8(eax, MEM8(ebp + 0x28));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x649248); /* movss */
    xmm1 = MEMF(0x59A8D8); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CA22B; /* je: equal / zero */

loc_001CA1CC: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001CA1F0; /* je: equal / zero */

loc_001CA1D5: ;
    eax--;
    if ((eax != 0)) goto loc_001CA21A; /* jne: not equal / not zero */

loc_001CA1D8: ;
    xmm0 = MEMF(0x64994C); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64A3D8); /* movss */
    goto loc_001CA206;

loc_001CA1F0: ;
    xmm0 = MEMF(0x64994C); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x649078); /* movss */

loc_001CA206: ;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64944C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_001CA21A: ;
    xmm0 = MEMF(ebp + 0x2C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    goto loc_001CA247;

loc_001CA22B: ;
    xmm0 = MEMF(0x64994C); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x58BD48); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */

loc_001CA247: ;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    xmm0 = MEMF(0x648D88); /* movss */
    if (CMP_LE(ecx, 2)) goto loc_001CA25C; /* jle: less or equal (signed <=) */

loc_001CA254: ;
    xmm0 = MEMF(0x649084); /* movss */

loc_001CA25C: ;
    if (CMP_NE(ecx, 1)) goto loc_001CA274; /* jne: not equal / not zero */

loc_001CA261: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648DE0); /* movss */
    goto loc_001CA298;

loc_001CA274: ;
    eax = ecx + -1;
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648DE0); /* addss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 / xmm2; /* divss */
    MEMF(esp + 0x2C) = xmm1; /* movss */

loc_001CA298: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001CA7DC; /* jle: less or equal (signed <=) */

loc_001CA2AE: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CA2BC: ;
    edi = MEM32(ebp + 0xC);
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0xF) = LO8(ebx);
    edi = edi - esi;
    goto loc_001CA2D0;

loc_001CA2C9: ;
    SET_LO8(ebx, MEM8(esp + 0xF));
    /* nop */

loc_001CA2D0: ;
    ecx = MEM32(ebp + 0x14);
    if (CMP_NE(MEM32(esp + 0x20), ecx)) goto loc_001CA492; /* jne: not equal / not zero */

loc_001CA2DD: ;
    edx = MEM32(ebp + 8);
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm6 = xmm6 * MEMF(0x648E74); /* mulss */
    ecx = esp + 0x60;
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, edx);
    eax = ecx;
    MEMF(esp + 0x68) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029CFE0(); /* call 0x0029CFE0 */

loc_001CA322: ;
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm7 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x68); /* subss */
    ecx = esp + 0x5C;
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, edx);
    eax = ecx;
    MEMF(esp + 0x60) = xmm6; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029CFE0(); /* call 0x0029CFE0 */

loc_001CA36A: ;
    xmm0 = MEMF(esp + 0x60); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x64); /* subss */
    ecx = esp + 0x50;
    MEMF(esp + 0x50) = xmm6; /* movss */
    xmm6 = MEMF(0x649368); /* movss */
    PUSH32(esp, edx);
    eax = ecx;
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm6; /* movss */
    PUSH32(esp, 0); sub_0029CFE0(); /* call 0x0029CFE0 */

loc_001CA3AC: ;
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x58); /* subss */
    ecx = esp + 0x5C;
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    eax = ecx;
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm6; /* movss */
    PUSH32(esp, 0); sub_0029CFE0(); /* call 0x0029CFE0 */

loc_001CA3E9: ;
    xmm0 = MEMF(esp + 0x60); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, 2);
    eax = eax << 0x18;
    eax = eax | 0x64CDFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0x268);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm7; /* addss */
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x8C;
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x88); /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 2;
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001CA458: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    xmm0 = MEMF(0x648D10); /* movss */
    esp = esp + 0x3C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CA471: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(ebp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CA4A0; /* je: equal / zero */

loc_001CA47A: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    edx = MEM32(ebp + 8);
    xmm0 = xmm0 * MEMF(0x649080); /* mulss */
    MEMF(edx + 0x30) = xmm0; /* movss */
    goto loc_001CA4A0;

loc_001CA492: ;
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_001CA4A0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    SET_LO8(eax, MEM8(ebp + 0x1C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    /* FPU: fcos  */
    xmm3 = MEMF(esp + 0x44); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CA5BB; /* je: equal / zero */

loc_001CA4ED: ;
    ecx = MEM32(edi + esi);
    xmm5 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm4 = MEMF(0x648CF0); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, 2);
    eax = eax & 0xFFFFFFFEu;
    eax = eax << 0x17;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 + xmm4; /* addss */
    xmm0 = xmm0 + xmm4; /* addss */
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    xmm4 = xmm0; /* movaps */
    edx = esp + 0xA8;
    xmm4 = xmm4 + xmm5; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 2;
    MEMF(esp + 0xAC) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm2; /* movss */
    MEMF(esp + 0xA4) = xmm4; /* movss */
    MEMF(esp + 0xA8) = xmm2; /* movss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm4; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001CA5B2: ;
    xmm3 = MEMF(esp + 0x5C); /* movss */
    esp = esp + 0x2C;

loc_001CA5BB: ;
    ecx = MEM32(edi + esi);
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, 2);
    eax = eax << 0x18;
    eax = eax | 0xFFFFFF;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    xmm1 = xmm3; /* movaps */
    edx = esp + 0xA8;
    xmm0 = xmm0 - xmm4; /* subss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm2 = xmm2 + xmm4; /* addss */
    xmm3 = xmm3 + xmm4; /* addss */
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 3;
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    MEMF(esp + 0xA4) = xmm2; /* movss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm3; /* movss */
    MEMF(esp + 0x94) = xmm2; /* movss */
    MEMF(esp + 0x98) = xmm3; /* movss */
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001CA66B: ;
    eax = MEM32(0x776184);
    esp = esp + 0x2C;
    if (CMP_EQ(eax, 0x8072F4)) goto loc_001CA688; /* je: equal / zero */

loc_001CA67A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_001CA685: ;
    esp = esp + 8;

loc_001CA688: ;
    eax = MEM32(0x6BAF28);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x8497DC); /* movss */
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, ecx);
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    eax = MEM32(esi);
    PUSH32(esp, 0x7FFFFFFF);
    MEM32(0x776180) = 0;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_001CA70C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    esp = esp + 0x10;
    /* comiss xmm0, MEMF(esp + 0x28) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x28))) goto loc_001CA72D; /* jb: below (unsigned <) */

loc_001CA725: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    goto loc_001CA745;

loc_001CA72D: ;
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    xmm3 = xmm3 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */

loc_001CA745: ;
    SET_LO8(eax, MEM8(ebp + 0x28));
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CA760; /* je: equal / zero */

loc_001CA75B: ;
    xmm1 = xmm1 * MEMF(ebp + 0x2C); /* mulss */

loc_001CA760: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CA77C; /* je: equal / zero */

loc_001CA76C: ;
    xmm1 = xmm1 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm1; /* movss */

loc_001CA77C: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F56AC);
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    ecx = (int32_t)xmm2; /* cvttss2si */
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    MEM8(0x776171) = 0x96;
    MEM8(0x776170) = 0xC8;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CA7B0: ;
    eax = MEM32(esp + 0x30);
    xmm0 = MEMF(esp + 0x20); /* movss */
    ecx = MEM32(ebp + 0x10);
    xmm0 = xmm0 - MEMF(esp + 0x3C); /* subss */
    esp = esp + 0x10;
    eax++;
    esi = esi + 4;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(eax, ecx)) goto loc_001CA2C9; /* jl: less (signed <) */

loc_001CA7DC: ;
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
 * sub_001CA7F0
 * Original: 0x001CA7F0 - 0x001CAA95 (677 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA7F0: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CA966; /* je: equal / zero */

loc_001CA7FE: ;
    PUSH32(esp, edi);
    edi = ebx;
    esi = 0x1D;
    edi = edi & 0xFF000000u;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001CA811: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    xmm0 = MEMF(0x648CF0); /* movss */
    ecx = MEM32(esp + 0x10);
    eax = eax + 4;
    MEM32(eax + 4) = 0x40601818;
    xmm2 = MEMF(ecx); /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    xmm3 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    ecx = MEM32(esp + 0x14);
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm1 = xmm1 + xmm0; /* addss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + -20) = xmm2; /* movss */
    MEMF(eax + -16) = xmm1; /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    MEMF(eax + -12) = xmm2; /* movss */
    MEM32(eax + -8) = edi;
    MEMF(eax + -4) = xmm3; /* movss */
    MEMF(eax) = xmm3; /* movss */
    xmm4 = MEMF(ecx); /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm1 = xmm1 + xmm0; /* addss */
    xmm4 = xmm4 + xmm0; /* addss */
    MEMF(eax + -16) = xmm4; /* movss */
    MEMF(eax + -12) = xmm1; /* movss */
    MEMF(eax + -8) = xmm2; /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    MEM32(eax + -4) = edi;
    MEMF(eax) = xmm4; /* movss */
    MEMF(eax + 4) = xmm3; /* movss */
    xmm5 = MEMF(ebp); /* movss */
    xmm1 = MEMF(ebp + 4); /* movss */
    ecx = MEM32(esp + 0x18);
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm5 = xmm5 + xmm0; /* addss */
    MEMF(eax + -8) = xmm5; /* movss */
    eax = eax + 4;
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + -8) = xmm1; /* movss */
    MEMF(eax + -4) = xmm2; /* movss */
    MEM32(eax) = edi;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    xmm5 = MEMF(ecx); /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm5 = xmm5 + xmm0; /* addss */
    MEMF(eax + -4) = xmm5; /* movss */
    eax = eax + 4;
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax + -4) = xmm1; /* movss */
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax) = edi;
    eax = eax + 4;
    MEMF(eax) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm4; /* movss */
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ecx) = eax;
    POP32(esp, edi);

loc_001CA966: ;
    esi = 0x1D;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001CA970: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    ecx = MEM32(esp + 0xC);
    eax = eax + 4;
    MEM32(eax + 4) = 0x40601818;
    edx = MEM32(ecx);
    xmm0 = MEMF(ecx + 4); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(esp + 0x10);
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm2 = MEMF(ecx + 4); /* movss */
    ecx = MEM32(ecx);
    eax = eax + 4;
    MEM32(eax + 4) = ecx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    edx = MEM32(ebp);
    xmm3 = MEMF(ebp + 4); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x14);
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm3 = MEMF(ecx + 4); /* movss */
    ecx = MEM32(ecx);
    eax = eax + 4;
    MEM32(eax + 4) = ecx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    edx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    POP32(esp, esi);
    MEM32(edx) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001CAAA0
 * Original: 0x001CAAA0 - 0x001CAD88 (744 bytes, 188 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAAA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CAAA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(0x6B842C);
    edi = ecx;
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001CAAC2; /* je: equal / zero */

loc_001CAAB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001CAABC: ;
    MEM32(0x771760) = esi;

loc_001CAAC2: ;
    eax = MEM32(0x77175C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_001CAADB; /* je: equal / zero */

loc_001CAACE: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001CAAD5: ;
    MEM32(0x77175C) = ebp;

loc_001CAADB: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001CAAF5; /* je: equal / zero */

loc_001CAAE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001CAAEF: ;
    MEM32(0x77182C) = esi;

loc_001CAAF5: ;
    if (CMP_EQ(MEM32(0x771828), ebp)) goto loc_001CAB09; /* je: equal / zero */

loc_001CAAFD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001CAB03: ;
    MEM32(0x771828) = ebp;

loc_001CAB09: ;
    eax = MEM32(0x771824);
    ebp = 1;
    if (CMP_EQ(eax, ebp)) goto loc_001CAB2F; /* je: equal / zero */

loc_001CAB17: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CAB23: ;
    MEM32(0x549AE4) = ebp;
    MEM32(0x771824) = ebp;

loc_001CAB2F: ;
    eax = MEM32(0x771820);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_001CAB52; /* je: equal / zero */

loc_001CAB3A: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CAB46: ;
    MEM32(0x549AE8) = esi;
    MEM32(0x771820) = esi;

loc_001CAB52: ;
    if (CMP_EQ(MEM32(0x77181C), ebp)) goto loc_001CAB66; /* je: equal / zero */

loc_001CAB5A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001CAB60: ;
    MEM32(0x77181C) = ebp;

loc_001CAB66: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001CAB8C; /* je: equal / zero */

loc_001CAB74: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CAB80: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001CAB8C: ;
    eax = MEM32(0x771814);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_001CABAF; /* je: equal / zero */

loc_001CAB97: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CABA3: ;
    MEM32(0x549AF8) = esi;
    MEM32(0x771814) = esi;

loc_001CABAF: ;
    if (CMP_EQ(MEM32(0x771810), esi)) goto loc_001CABCD; /* je: equal / zero */

loc_001CABB7: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = esi;
    MEM32(0x771810) = esi;

loc_001CABCD: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001CABD5: ;
    (void)0; /* cmp edi, MEM32(0x7717E4) - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(edi, MEM32(0x7717E4))) goto loc_001CABF3; /* je: equal / zero */

loc_001CABE2: ;
    eax = eax | 0x800;
    MEM32(0x547360) = edi;
    MEM32(0x7717E4) = edi;

loc_001CABF3: ;
    if (CMP_EQ(ebx, MEM32(0x7717C4))) goto loc_001CAC0C; /* je: equal / zero */

loc_001CABFB: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ebx;
    MEM32(0x7717C4) = ebx;

loc_001CAC0C: ;
    ecx = MEM32(esp + 0x2C);
    if (CMP_EQ(ecx, MEM32(0x7717B4))) goto loc_001CAC29; /* je: equal / zero */

loc_001CAC18: ;
    eax = eax | 0x800;
    MEM32(0x54736C) = ecx;
    MEM32(0x7717B4) = ecx;

loc_001CAC29: ;
    ecx = MEM32(esp + 0x30);
    if (CMP_EQ(ecx, MEM32(0x7717A4))) goto loc_001CAC46; /* je: equal / zero */

loc_001CAC35: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ecx;
    MEM32(0x7717A4) = ecx;

loc_001CAC46: ;
    ecx = MEM32(esp + 0x34);
    if (CMP_EQ(ecx, MEM32(0x771784))) goto loc_001CAC63; /* je: equal / zero */

loc_001CAC52: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ecx;
    MEM32(0x771784) = ecx;

loc_001CAC63: ;
    ecx = MEM32(esp + 0x38);
    if (CMP_EQ(ecx, MEM32(0x771774))) goto loc_001CAC80; /* je: equal / zero */

loc_001CAC6F: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_001CAC80: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | ebp;
    if (CMP_EQ(ecx, ebp)) goto loc_001CACAE; /* je: equal / zero */

loc_001CAC9D: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = ebp;
    MEM32(0x7717E8) = ebp;

loc_001CACAE: ;
    if (CMP_EQ(MEM32(0x7717A8), ebp)) goto loc_001CACC7; /* je: equal / zero */

loc_001CACB6: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = ebp;
    MEM32(0x7717A8) = ebp;

loc_001CACC7: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    edi = 0; /* xor self */
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = edi;
    POP32(esp, ebp);
    if (CMP_EQ(eax, esi)) goto loc_001CAD00; /* je: equal / zero */

loc_001CACE8: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CACF4: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001CAD00: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_001CAD26; /* je: equal / zero */

loc_001CAD0E: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CAD1A: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001CAD26: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001CAD32: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_NE(esi, edi)) goto loc_001CAD49; /* jne: not equal / not zero */

loc_001CAD3B: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001CAD43: ;
    MEM32(0x771764) = edi;

loc_001CAD49: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_001CAD60; /* je: equal / zero */

loc_001CAD51: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_001CAD5A: ;
    MEM32(0x771764) = esi;

loc_001CAD60: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x48));
    PUSH32(esp, 0); sub_001CA7F0(); /* call 0x001CA7F0 */

loc_001CAD81: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CAD90
 * Original: 0x001CAD90 - 0x001CB058 (712 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAD90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CAD90: ;
    ecx = MEM32(0x771760);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x6B842C);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_001CADB1; /* je: equal / zero */

loc_001CADA5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001CADAB: ;
    MEM32(0x771760) = esi;

loc_001CADB1: ;
    eax = MEM32(0x77175C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_001CADCA; /* je: equal / zero */

loc_001CADBD: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001CADC4: ;
    MEM32(0x77175C) = ebp;

loc_001CADCA: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001CADE4; /* je: equal / zero */

loc_001CADD8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001CADDE: ;
    MEM32(0x77182C) = esi;

loc_001CADE4: ;
    if (CMP_EQ(MEM32(0x771828), ebp)) goto loc_001CADF8; /* je: equal / zero */

loc_001CADEC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001CADF2: ;
    MEM32(0x771828) = ebp;

loc_001CADF8: ;
    eax = MEM32(0x771824);
    ebp = 1;
    if (CMP_EQ(eax, ebp)) goto loc_001CAE1E; /* je: equal / zero */

loc_001CAE06: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CAE12: ;
    MEM32(0x549AE4) = ebp;
    MEM32(0x771824) = ebp;

loc_001CAE1E: ;
    eax = MEM32(0x771820);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_001CAE41; /* je: equal / zero */

loc_001CAE29: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CAE35: ;
    MEM32(0x549AE8) = esi;
    MEM32(0x771820) = esi;

loc_001CAE41: ;
    if (CMP_EQ(MEM32(0x77181C), ebp)) goto loc_001CAE55; /* je: equal / zero */

loc_001CAE49: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001CAE4F: ;
    MEM32(0x77181C) = ebp;

loc_001CAE55: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_001CAE7B; /* je: equal / zero */

loc_001CAE63: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CAE6F: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_001CAE7B: ;
    eax = MEM32(0x771814);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_001CAE9E; /* je: equal / zero */

loc_001CAE86: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CAE92: ;
    MEM32(0x549AF8) = esi;
    MEM32(0x771814) = esi;

loc_001CAE9E: ;
    if (CMP_EQ(MEM32(0x771810), esi)) goto loc_001CAEBC; /* je: equal / zero */

loc_001CAEA6: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = esi;
    MEM32(0x771810) = esi;

loc_001CAEBC: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001CAEC4: ;
    (void)0; /* cmp edi, MEM32(0x7717E4) - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(edi, MEM32(0x7717E4))) goto loc_001CAEE2; /* je: equal / zero */

loc_001CAED1: ;
    eax = eax | 0x800;
    MEM32(0x547360) = edi;
    MEM32(0x7717E4) = edi;

loc_001CAEE2: ;
    if (CMP_EQ(ebx, MEM32(0x7717C4))) goto loc_001CAEFB; /* je: equal / zero */

loc_001CAEEA: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ebx;
    MEM32(0x7717C4) = ebx;

loc_001CAEFB: ;
    ecx = MEM32(esp + 0x28);
    if (CMP_EQ(ecx, MEM32(0x7717B4))) goto loc_001CAF18; /* je: equal / zero */

loc_001CAF07: ;
    eax = eax | 0x800;
    MEM32(0x54736C) = ecx;
    MEM32(0x7717B4) = ecx;

loc_001CAF18: ;
    ecx = MEM32(esp + 0x2C);
    if (CMP_EQ(ecx, MEM32(0x7717A4))) goto loc_001CAF35; /* je: equal / zero */

loc_001CAF24: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ecx;
    MEM32(0x7717A4) = ecx;

loc_001CAF35: ;
    ecx = MEM32(esp + 0x30);
    if (CMP_EQ(ecx, MEM32(0x771784))) goto loc_001CAF52; /* je: equal / zero */

loc_001CAF41: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ecx;
    MEM32(0x771784) = ecx;

loc_001CAF52: ;
    ecx = MEM32(esp + 0x34);
    if (CMP_EQ(ecx, MEM32(0x771774))) goto loc_001CAF6F; /* je: equal / zero */

loc_001CAF5E: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_001CAF6F: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | ebp;
    if (CMP_EQ(ecx, ebp)) goto loc_001CAF9D; /* je: equal / zero */

loc_001CAF8C: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = ebp;
    MEM32(0x7717E8) = ebp;

loc_001CAF9D: ;
    if (CMP_EQ(MEM32(0x7717A8), ebp)) goto loc_001CAFB6; /* je: equal / zero */

loc_001CAFA5: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = ebp;
    MEM32(0x7717A8) = ebp;

loc_001CAFB6: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = 0;
    POP32(esp, ebp);
    if (CMP_EQ(eax, esi)) goto loc_001CAFF1; /* je: equal / zero */

loc_001CAFD9: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CAFE5: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_001CAFF1: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_001CB017; /* je: equal / zero */

loc_001CAFFF: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001CB00B: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001CB017: ;
    esi = MEM32(esp + 0x1C);
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_001CB031; /* je: equal / zero */

loc_001CB023: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_001CB02B: ;
    MEM32(0x771764) = esi;

loc_001CB031: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x44));
    PUSH32(esp, 0); sub_001CA7F0(); /* call 0x001CA7F0 */

loc_001CB052: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB060
 * Original: 0x001CB060 - 0x001CB08A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB060: ;
    (void)0; /* cmp ecx, 2 - flags set for next jcc */
    xmm1 = MEMF(0x648D88); /* movss */
    if (CMP_LE(ecx, 2)) goto loc_001CB075; /* jle: less or equal (signed <=) */

loc_001CB06D: ;
    xmm1 = MEMF(0x649084); /* movss */

loc_001CB075: ;
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    xmm4 = 0.0f; /* xorps self = zero */
    if (CMP_NE(ecx, 1)) { sub_001CB08A(); return; } /* jne: not equal / not zero */

loc_001CB07D: ;
    xmm1 = MEMF(0x648DE0); /* movss */
    xmm3 = xmm4; /* movaps */
    g_seh_ebp = ebp; sub_001CB0A8(); return; /* tail jmp 0x001CB0A8 */

}

/**
 * sub_001CB0E0
 * Original: 0x001CB0E0 - 0x001CB194 (180 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB0E0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001CB0E0: ;
    esp = esp - 0x20;
    xmm4 = (float)(int32_t)MEM32(esp + 0x28); /* cvtsi2ss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x24); /* cvtsi2ss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    xmm3 = xmm3 * MEMF(esp + 0x30); /* mulss */
    eax = eax & 0xFF;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = ecx << 8;
    eax = eax | ecx;
    eax = eax << 8;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    esi = esi & 0xFF;
    eax = eax | esi;
    eax = eax << 8;
    PUSH32(esp, 2);
    edx = edx & 0xFF;
    eax = eax | edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm0 = xmm0 + xmm5; /* addss */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 2;
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm4; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001CB18C: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB1A0
 * Original: 0x001CB1A0 - 0x001CB256 (182 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB1A0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001CB1A0: ;
    esp = esp - 0x20;
    xmm4 = (float)(int32_t)MEM32(esp + 0x28); /* cvtsi2ss */
    xmm1 = (float)(int32_t)MEM32(esp + 0x24); /* cvtsi2ss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    eax = eax & 0xFF;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = ecx << 8;
    eax = eax | ecx;
    eax = eax << 8;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    esi = esi & 0xFF;
    eax = eax | esi;
    eax = eax << 8;
    PUSH32(esp, 2);
    edx = edx & 0xFF;
    eax = eax | edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 - MEMF(esp + 0x58); /* subss */
    xmm1 = xmm1 + xmm0; /* addss */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 2;
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x3C) = xmm4; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001CB24E: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB260
 * Original: 0x001CB260 - 0x001CB322 (194 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB260(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001CB260: ;
    ecx = MEM32(0x84A144);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_001CB2CA; /* je: equal / zero */

loc_001CB26B: ;
    ecx--;
    if ((ecx != 0)) goto loc_001CB321; /* jne: not equal / not zero */

loc_001CB272: ;
    xmm0 = MEMF(0x64907C); /* movss */
    xmm1 = MEMF(0x649078); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x649074); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648FE8); /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm1 = MEMF(0x649070); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64906C); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm1; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_001CB2CA: ;
    xmm0 = MEMF(0x649068); /* movss */
    xmm1 = MEMF(0x649064); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(0x649060); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x64905C); /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm1 = MEMF(0x649058); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649054); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm1; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */

loc_001CB321: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB330
 * Original: 0x001CB330 - 0x001CB6F1 (961 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB330(void)
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

loc_001CB330: ;
    esp = esp - 0x244;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001CB33D: ;
    PUSH32(esp, 0); sub_001C7620(); /* call 0x001C7620 */

loc_001CB342: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CB6EA; /* jne: not equal / not zero */

loc_001CB34A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0x87B35C;
    PUSH32(esp, 0); sub_001CB260(); /* call 0x001CB260 */

loc_001CB356: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x776B5A);
    esi = (uint32_t)(int32_t)SMEM16(0x776B58);
    PUSH32(esp, 0xA);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCAB(); /* call 0x0046FCAB */

loc_001CB371: ;
    PUSH32(esp, 0xA);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FCAB(); /* call 0x0046FCAB */

loc_001CB37E: ;
    eax = MEM32(0x776184);
    esp = esp + 0x18;
    if (CMP_EQ(eax, 0x8072F4)) goto loc_001CB39B; /* je: equal / zero */

loc_001CB38D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_001CB398: ;
    esp = esp + 8;

loc_001CB39B: ;
    eax = MEM32(0x6BAF28);
    fp_push(MEMF(esp + 0x250)); /* fld float */
    xmm0 = MEMF(eax + 8); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x8497DC); /* movss */
    MEM32(0x776180) = 0;
    MEMF(0x84B508) = xmm0; /* movss */
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0x64;
    MEM8(0x77616F) = 0x64;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CB415: ;
    ecx = (int32_t)MEMF(0x87B360); /* cvttss2si */
    edx = (int32_t)MEMF(0x87B35C); /* cvttss2si */
    SET_LO8(ebx, LO8(eax));
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x80);
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CB43B: ;
    esp = esp + 0xC;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001CB445: ;
    esi = MEM32(eax + 0x20);
    if (TEST_S(esi, esi)) goto loc_001CB585; /* jl: less (signed <) */

loc_001CB450: ;
    edx = MEM32(eax + 4);
    if (TEST_NZ(edx, edx)) goto loc_001CB45B; /* jne: not equal / not zero */

loc_001CB457: ;
    eax = 0; /* xor self */
    goto loc_001CB471;

loc_001CB45B: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_001CB471: ;
    if (CMP_AE(esi, eax)) goto loc_001CB585; /* jae: above or equal (unsigned >=) */

loc_001CB479: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001CB480: ;
    ecx = MEM32(eax + 0x3C);
    if (CMP_LE(ecx & ecx, 0)) goto loc_001CB585; /* jle: less or equal (signed <=) */

loc_001CB48B: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_001CB492: ;
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F56A4);
    ecx = esp + 0x54;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001CB4AA: ;
    eax = MEM32(0x87B358);
    xmm0 = MEMF(0x649060); /* movss */
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), 1)) goto loc_001CB4CE; /* jne: not equal / not zero */

loc_001CB4BE: ;
    eax = eax | 1;
    MEM32(0x87B358) = eax;
    MEMF(0x75DEE4) = xmm0; /* movss */

loc_001CB4CE: ;
    if (TEST_NZ(LO8(eax), 2)) goto loc_001CB4E2; /* jne: not equal / not zero */

loc_001CB4D2: ;
    eax = eax | 2;
    MEM32(0x87B358) = eax;
    MEMF(0x75DEDC) = xmm0; /* movss */

loc_001CB4E2: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x75DED4); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CB50B; /* je: equal / zero */

loc_001CB4FB: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001CB50B: ;
    eax = (int32_t)MEMF(0x75DEE4); /* cvttss2si */
    ecx = (int32_t)MEMF(0x75DEE0); /* cvttss2si */
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x80);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0x64;
    MEM8(0x77616F) = 0x64;
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CB544: ;
    eax = (int32_t)MEMF(0x75DEDC); /* cvttss2si */
    ecx = (int32_t)MEMF(0x75DED8); /* cvttss2si */
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x80);
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0xFF;
    MEM8(0x77616F) = 0x64;
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CB57D: ;
    esp = esp + 0x18;
    PUSH32(esp, 0); sub_001F2B60(); /* call 0x001F2B60 */

loc_001CB585: ;
    eax = (int32_t)MEMF(0x87B368); /* cvttss2si */
    ecx = (int32_t)MEMF(0x87B364); /* cvttss2si */
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x80);
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0xFF;
    MEM8(0x77616F) = 0x64;
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CB5BE: ;
    fp_push(MEMF(esp + 0x25C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(0x648CF0); /* movss */
    xmm1 = MEMF(0x87B370); /* movss */
    esp = esp + 0xC;
    PUSH32(esp, 0x3ECCCCCD);
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm1 = xmm1 + xmm0; /* addss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(0x87B36C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    eax = 0x5F567C;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_001CC500(); /* call 0x001CC500 */

loc_001CB624: ;
    xmm0 = MEMF(0x648CF0); /* movss */
    xmm1 = MEMF(0x87B378); /* movss */
    esp = esp + 0x24;
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm1 = xmm1 + xmm0; /* addss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(0x87B374); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    eax = 0x5F5658;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_001CC500(); /* call 0x001CC500 */

loc_001CB675: ;
    edx = MEM32(0x87B370);
    eax = MEM32(0x87B36C);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x5F567C;
    PUSH32(esp, 0); sub_001CC500(); /* call 0x001CC500 */

loc_001CB6AB: ;
    ecx = MEM32(0x87B378);
    edx = MEM32(0x87B374);
    esp = esp + 0x48;
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0x5F5658;
    PUSH32(esp, 0); sub_001CC500(); /* call 0x001CC500 */

loc_001CB6E5: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001CB6EA: ;
    esp = esp + 0x244;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001CB700
 * Original: 0x001CB700 - 0x001CB781 (129 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB700: ;
    eax = MEM32(esp + 0xC);
    SET_LO16(eax, MEM16(eax + 0x60));
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_001CB716: ;
    ecx = MEM32(0x84A144);
    esp = esp + 4;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_001CB76B; /* je: equal / zero */

loc_001CB724: ;
    ecx--;
    if ((ecx != 0)) { sub_001CB781(); return; } /* jne: not equal / not zero */

loc_001CB727: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x3C);
    ecx = ecx - 0;
    edi = 0x18B;
    if ((ecx == 0)) goto loc_001CB74A; /* je: equal / zero */

loc_001CB736: ;
    ecx--;
    if ((ecx != 0)) goto loc_001CB75B; /* jne: not equal / not zero */

loc_001CB739: ;
    ebx = 0x13D;
    esi = 0x10;
    ebp = 0xFFFFFFDBu;
    g_seh_ebp = ebp; sub_001CB791(); return; /* tail jmp 0x001CB791 */

loc_001CB74A: ;
    ebx = 0x4D;
    esi = 0x10;
    ebp = 0xFFFFFFDBu;
    g_seh_ebp = ebp; sub_001CB791(); return; /* tail jmp 0x001CB791 */

loc_001CB75B: ;
    ebx = MEM32(esp + 0x44);
    esi = 0x10;
    ebp = 0xFFFFFFDBu;
    g_seh_ebp = ebp; sub_001CB791(); return; /* tail jmp 0x001CB791 */

loc_001CB76B: ;
    edi = 0xA6;
    ebx = 0x4D;
    esi = 0x10;
    ebp = 0xFFFFFFDAu;
    g_seh_ebp = ebp; sub_001CB791(); return; /* tail jmp 0x001CB791 */

}

/**
 * sub_001CB910
 * Original: 0x001CB910 - 0x001CB997 (135 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB910(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001CB910: ;
    eax = MEM32(0x84A144);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001CB976; /* je: equal / zero */

loc_001CB91A: ;
    eax--;
    if ((eax != 0)) goto loc_001CB996; /* jne: not equal / not zero */

loc_001CB91D: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001CB950; /* je: equal / zero */

loc_001CB927: ;
    eax--;
    if ((eax != 0)) goto loc_001CB969; /* jne: not equal / not zero */

loc_001CB92A: ;
    xmm0 = MEMF(0x648FF8); /* movss */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(0x648FF4); /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648FF0); /* movss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_001CB950: ;
    xmm0 = MEMF(0x648FEC); /* movss */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(0x648FE8); /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */

loc_001CB969: ;
    xmm0 = MEMF(0x648FF0); /* movss */
    MEMF(edx) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_001CB976: ;
    xmm0 = MEMF(0x648FE4); /* movss */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(0x648FE0); /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edx) = xmm0; /* movss */

loc_001CB996: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB9A0
 * Original: 0x001CB9A0 - 0x001CB9E4 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CB9A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F55E8);
    esi = esp + 0x14;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001CB9C2: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 4);
    esp = esp + 4;
    if (CMP_A(ecx, 4)) { sub_001CB9E4(); return; } /* ja: above (unsigned >) */

loc_001CB9D1: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x1CBBE4)); return; /* indirect tail jmp */

    esi = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_001CB9E6(); return; /* tail jmp 0x001CB9E6 */

    eax = MEM32(eax + 0x1C);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_001CB9E6(); return; /* tail jmp 0x001CB9E6 */

}

/**
 * sub_001CBC10
 * Original: 0x001CBC10 - 0x001CBD45 (309 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBC10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001CBC10: ;
    esp = esp - 0x10;
    xmm0 = MEMF(0x64AA74); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64A944); /* movss */
    PUSH32(esp, 1);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x6496BC); /* movss */
    eax = esp + 0x14;
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649108); /* movss */
    PUSH32(esp, eax);
    SET_LO8(ebx, 0); /* xor self */
    ecx = esp + 0x14;
    eax = 0x5F55E8;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CC620(); /* call 0x001CC620 */

loc_001CBC69: ;
    xmm0 = MEMF(0x64AA74); /* movss */
    PUSH32(esp, 1);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649258); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x6496BC); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    eax = 0x5F55C4;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CC620(); /* call 0x001CC620 */

loc_001CBCAF: ;
    xmm0 = MEMF(0x64AA70); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64AA6C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    esp = esp + 0x18;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_001CBCE7: ;
    eax = eax - 4;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    if ((eax == 0)) { sub_001CBD45(); return; } /* je: equal / zero */

loc_001CBCEF: ;
    eax--;
    if ((eax == 0)) goto loc_001CBD29; /* je: equal / zero */

loc_001CBCF2: ;
    eax--;
    ecx = esp + 0x18;
    if ((eax == 0)) goto loc_001CBD11; /* je: equal / zero */

loc_001CBCF9: ;
    edx = esp + 0x10;
    eax = 0x5F5554;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001CC620(); /* call 0x001CC620 */

loc_001CBD08: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001CBD11: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = 0x5F5570;
    PUSH32(esp, 0); sub_001CC620(); /* call 0x001CC620 */

loc_001CBD20: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001CBD29: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    eax = 0x5F558C;
    PUSH32(esp, 0); sub_001CC620(); /* call 0x001CC620 */

loc_001CBD3C: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001CBD70
 * Original: 0x001CBD70 - 0x001CBE30 (192 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBD70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CBD70: ;
    esp = esp - 0x24;
    xmm0 = xmm0 * MEMF(0x64AA68); /* mulss */
    ebx = SX16(LO16(ebx));
    eax = ebx;
    eax = eax - 0;
    MEMF(esp) = xmm0; /* movss */
    if ((eax == 0)) goto loc_001CBD98; /* je: equal / zero */

loc_001CBD8A: ;
    eax--;
    if ((eax != 0)) goto loc_001CBDA4; /* jne: not equal / not zero */

loc_001CBD8D: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CBC10(); /* call 0x001CBC10 */

loc_001CBD96: ;
    goto loc_001CBDA1;

loc_001CBD98: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CB9A0(); /* call 0x001CB9A0 */

loc_001CBDA1: ;
    esp = esp + 4;

loc_001CBDA4: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(0x64AA68); /* mulss */
    eax = ebx;
    eax = eax - 0;
    MEMF(esp) = xmm0; /* movss */
    if ((eax == 0)) goto loc_001CBDD9; /* je: equal / zero */

loc_001CBDBE: ;
    eax--;
    if ((eax != 0)) goto loc_001CBDF5; /* jne: not equal / not zero */

loc_001CBDC1: ;
    xmm0 = MEMF(0x64ABEC); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64ABF8); /* movss */
    goto loc_001CBDEF;

loc_001CBDD9: ;
    xmm0 = MEMF(0x64ABEC); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x6498B4); /* movss */

loc_001CBDEF: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_001CBDF5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F5538);
    esi = esp + 0x38;
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001CBE0E: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax + 4);
    esp = esp + 4;
    if (CMP_A(ecx, 4)) { sub_001CBE30(); return; } /* ja: above (unsigned >) */

loc_001CBE1D: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x1CBFFC)); return; /* indirect tail jmp */

    esi = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_001CBE32(); return; /* tail jmp 0x001CBE32 */

    edx = MEM32(eax + 0x1C);
    esi = MEM32(edx);
    g_seh_ebp = ebp; sub_001CBE32(); return; /* tail jmp 0x001CBE32 */

}

/**
 * sub_001CC030
 * Original: 0x001CC030 - 0x001CC082 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001CC030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x24;
    xmm0 = xmm0 * MEMF(0x64AA68); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F5500);
    esi = esp + 0x14;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001CC060: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 4);
    esp = esp + 4;
    if (CMP_A(ecx, 4)) { sub_001CC082(); return; } /* ja: above (unsigned >) */

loc_001CC06F: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x1CC4AC)); return; /* indirect tail jmp */

    esi = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_001CC084(); return; /* tail jmp 0x001CC084 */

    eax = MEM32(eax + 0x1C);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_001CC084(); return; /* tail jmp 0x001CC084 */

}

/**
 * sub_001CC500
 * Original: 0x001CC500 - 0x001CC531 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC500: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = esp + 0xC;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001CC50F: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    esp = esp + 4;
    if (CMP_A(eax, 4)) { sub_001CC531(); return; } /* ja: above (unsigned >) */

loc_001CC51E: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1CC60C)); return; /* indirect tail jmp */

    esi = MEM32(ecx + 0x1C);
    g_seh_ebp = ebp; sub_001CC533(); return; /* tail jmp 0x001CC533 */

    ecx = MEM32(ecx + 0x1C);
    esi = MEM32(ecx);
    g_seh_ebp = ebp; sub_001CC533(); return; /* tail jmp 0x001CC533 */

}

/**
 * sub_001CC620
 * Original: 0x001CC620 - 0x001CC660 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC620: ;
    esp = esp - 0x20;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = esp + 0x34;
    edi = ecx;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001CC63E: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(ecx + 4);
    esp = esp + 4;
    if (CMP_A(eax, 4)) { sub_001CC660(); return; } /* ja: above (unsigned >) */

loc_001CC64D: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x1CC754)); return; /* indirect tail jmp */

    esi = MEM32(ecx + 0x1C);
    g_seh_ebp = ebp; sub_001CC662(); return; /* tail jmp 0x001CC662 */

    ecx = MEM32(ecx + 0x1C);
    esi = MEM32(ecx);
    g_seh_ebp = ebp; sub_001CC662(); return; /* tail jmp 0x001CC662 */

}

/**
 * sub_001CC770
 * Original: 0x001CC770 - 0x001CC85A (234 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC770(void)
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

loc_001CC770: ;
    xmm3 = MEMF(eax + 4); /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    eax = MEM32(esp + 0xC);
    xmm3 = xmm3 + MEMF(ecx + 4); /* addss */
    esp = esp - 0x20;
    eax--;
    if ((eax == 0)) goto loc_001CC7D2; /* je: equal / zero */

loc_001CC79E: ;
    eax--;
    MEMF(esp) = xmm2; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((eax != 0)) goto loc_001CC7E9; /* jne: not equal / not zero */

loc_001CC7B8: ;
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    goto loc_001CC801;

loc_001CC7D2: ;
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 8) = xmm2; /* movss */
    MEMF(esp) = xmm0; /* movss */

loc_001CC7E9: ;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    MEMF(esp + 4) = xmm3; /* movss */

loc_001CC801: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = 0; /* xor self */
    PUSH32(esp, edx);
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ebx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    ebx = ebx + 3;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CC824: ;
    ecx = MEM32(esp + 0x3C);
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    eax = eax | 0xFFFFFF;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = ebx;
    PUSH32(esp, 0); sub_001CAAA0(); /* call 0x001CAAA0 */

loc_001CC852: ;
    esp = esp + 0x2C;
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
 * sub_001CC860
 * Original: 0x001CC860 - 0x001CC8A7 (71 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC860(void)
{
    float xmm0;

loc_001CC860: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = 0x5F5394;
    MEMF(eax + 0x8C) = xmm0; /* movss */
    MEMF(eax + 0x88) = xmm0; /* movss */
    MEM8(eax + 0x92) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEMF(eax + 0x98) = xmm0; /* movss */
    MEMF(eax + 0x94) = xmm0; /* movss */
    MEM16(eax + 6) = LO16(ecx);
    MEM8(eax + 0x90) = LO8(ecx);
    MEM8(eax + 0x91) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC8B0
 * Original: 0x001CC8B0 - 0x001CC913 (99 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC8B0(void)
{
    float xmm0;

loc_001CC8B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4C70);
    ecx = esi + 6;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001CC8C1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEMF(esi + 0x8C) = xmm0; /* movss */
    MEMF(esi + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    eax = 0; /* xor self */
    MEMF(esi + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    esp = esp + 0x10;
    MEM16(esi + 0x86) = LO16(eax);
    MEM8(esi + 0x90) = LO8(eax);
    MEM8(esi + 0x92) = LO8(edx);
    MEMF(esi + 0x98) = xmm0; /* movss */
    MEM8(esi + 4) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CC920
 * Original: 0x001CC920 - 0x001CC950 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC920: ;
    SET_LO8(ecx, MEM8(eax + 0x90));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_001CC950(); return; } /* je: equal / zero */

loc_001CC92A: ;
    SET_LO8(edx, MEM8(eax + 0x92));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_001CC93E; /* jne: not equal / not zero */

loc_001CC934: ;
    SET_LO8(edx, MEM8(0x862D90));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_001CC950(); return; } /* jne: not equal / not zero */

loc_001CC93E: ;
    xmm0 = MEMF(eax + 0x88); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    g_seh_ebp = ebp; sub_001CC960(); return; /* tail jmp 0x001CC960 */

}

/**
 * sub_001CC9D0
 * Original: 0x001CC9D0 - 0x001CC9E9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC9D0(void)
{

loc_001CC9D0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_001CC9DC: ;
    esp = esp + 0xC;
    MEM16(esi + 0x92) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC9F0
 * Original: 0x001CC9F0 - 0x001CCA33 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC9F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CC9F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F54C4);
    esi = esp + 0xC;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001CCA11: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    esp = esp + 4;
    if (CMP_A(ecx, 4)) { sub_001CCA33(); return; } /* ja: above (unsigned >) */

loc_001CCA20: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x1CCC1C)); return; /* indirect tail jmp */

    esi = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_001CCA35(); return; /* tail jmp 0x001CCA35 */

    eax = MEM32(eax + 0x1C);
    esi = MEM32(eax);
    g_seh_ebp = ebp; sub_001CCA35(); return; /* tail jmp 0x001CCA35 */

}

/**
 * sub_001CCC70
 * Original: 0x001CCC70 - 0x001CCD85 (277 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCC70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CCC70: ;
    PUSH32(esp, ecx);
    eax = SX16(LO16(eax));
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    SET_LO8(ecx, MEM8(edi * 4 + 0x849484));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edi = edi * 4 + 0x849484;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001CCD82; /* je: equal / zero */

loc_001CCC8E: ;
    ecx = MEM32(0x84A144);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (TEST_NZ(ecx, ecx)) goto loc_001CCCB7; /* jne: not equal / not zero */

loc_001CCC9B: ;
    xmm3 = MEMF(0x6490C0); /* movss */
    xmm5 = MEMF(0x648D18); /* movss */
    ebx = 0x190;
    ebp = 0x1B6;
    goto loc_001CCCEF;

loc_001CCCB7: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_001CCCCB; /* je: equal / zero */

loc_001CCCBC: ;
    eax--;
    if ((eax != 0)) goto loc_001CCCD7; /* jne: not equal / not zero */

loc_001CCCBF: ;
    ebx = 0x24C;
    ebp = 0x17F;
    goto loc_001CCCDF;

loc_001CCCCB: ;
    ebx = 0x35;
    ebp = 0x8F;
    goto loc_001CCCDF;

loc_001CCCD7: ;
    ebx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x10);

loc_001CCCDF: ;
    xmm3 = MEMF(0x59A8D8); /* movss */
    xmm5 = MEMF(0x648D20); /* movss */

loc_001CCCEF: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CCD20; /* jp: parity */

loc_001CCD01: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    eax = 0x64;
    esi = 0xCD;
    edx = 0xFF;
    goto loc_001CCD5A;

loc_001CCD20: ;
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 / MEMF(edi + 8); /* divss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_001CCD4E; /* jp: parity */

loc_001CCD3D: ;
    eax = 0x64;
    esi = 0xCD;
    edx = 0xFF;
    goto loc_001CCD5A;

loc_001CCD4E: ;
    eax = 0xFF;
    esi = 0xAF;
    edx = 0; /* xor self */

loc_001CCD5A: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x64AED8); /* mulss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_001CB0E0(); /* call 0x001CB0E0 */

loc_001CCD79: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edi) = 0;
    POP32(esp, ebx);

loc_001CCD82: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CCD90
 * Original: 0x001CCD90 - 0x001CCDC1 (49 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCD90(void)
{

loc_001CCD90: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F5490;
    MEM8(0x8494A0) = 1;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001CCDA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x8494A2);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_001CCDB4: ;
    esp = esp + 0x10;
    MEM16(0x8496A0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCDD0
 * Original: 0x001CCDD0 - 0x001CCF72 (418 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCDD0(void)
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

loc_001CCDD0: ;
    SET_LO8(eax, MEM8(0x8494A0));
    esp = esp - 0x24;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CCF6E; /* je: equal / zero */

loc_001CCDE0: ;
    xmm0 = MEMF(0x648D40); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = 0x8494A2;
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_001CCE19: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = MEMF(0x64994C); /* movss */
    SET_LO8(eax, 0xFF);
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x10;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CCE5C: ;
    xmm0 = MEMF(0x648D40); /* movss */
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x77616E) = LO8(ebx);
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CCE8D; /* je: equal / zero */

loc_001CCE7D: ;
    xmm0 = MEMF(0x649678); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001CCE8D: ;
    edx = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    PUSH32(esp, 0x8494A2);
    PUSH32(esp, 0x96);
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CCEA5: ;
    edi = 0; /* xor self */
    PUSH32(esp, 0x5F5470);
    esi = esp + 0x1C;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x2C) = edi;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_001CCEBD: ;
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_001CCECA: ;
    ecx = MEM32(esp + 0x2C);
    xmm2 = MEMF(0x649240); /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, 2);
    eax = eax << 0x18;
    eax = eax | 0xFFFFFF;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    xmm0 = xmm0 - xmm2; /* subss */
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    ecx = esp + 0x54;
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(0x64AA3C); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x64AA38); /* movss */
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edi = 4;
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    PUSH32(esp, 0); sub_001CAD90(); /* call 0x001CAD90 */

loc_001CCF61: ;
    esp = esp + 0x3C;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x8494A0) = 0;
    POP32(esp, ebx);

loc_001CCF6E: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001CCF80
 * Original: 0x001CCF80 - 0x001CD36C (1004 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCF80(void)
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

loc_001CCF80: ;
    SET_LO8(eax, MEM8(0x77A558));
    esp = esp - 0x14;
    if (CMP_G(LO8(eax) & LO8(eax), 0)) goto loc_001CD368; /* jg: greater (signed >) */

loc_001CCF90: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x64AA54); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0x96;
    MEMF(esp + 8) = xmm0; /* movss */
    ebp = 0x18E;
    if (TEST_Z(eax, eax)) goto loc_001CCFF1; /* je: equal / zero */

loc_001CCFB3: ;
    eax = MEM32(ecx + 0x564);
    if (TEST_Z(eax, eax)) goto loc_001CCFF1; /* je: equal / zero */

loc_001CCFBD: ;
    eax = ZX8(MEM8(eax + 0x2A8));
    eax = eax - 0;
    if ((eax == 0)) goto loc_001CCFD7; /* je: equal / zero */

loc_001CCFC9: ;
    eax--;
    if ((eax != 0)) goto loc_001CD366; /* jne: not equal / not zero */

loc_001CCFD0: ;
    edi = 0x145;
    goto loc_001CCFDC;

loc_001CCFD7: ;
    edi = 0x55;

loc_001CCFDC: ;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(0x64ABF4); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    ebp = edi + 0x53;

loc_001CCFF1: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_001CD174; /* je: equal / zero */

loc_001CCFFB: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_001CD174; /* je: equal / zero */

loc_001CD009: ;
    esi = MEM32(eax + 0x638);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_002F8990(); /* call 0x002F8990 */

loc_001CD019: ;
    esp = esp + 8;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(esi, eax)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CD174; /* je: equal / zero */

loc_001CD029: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    ecx = esp + 0x20;
    eax = 0x5F5454;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CC620(); /* call 0x001CC620 */

loc_001CD073: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, esi);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    eax = 0x5F5438;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CC620(); /* call 0x001CC620 */

loc_001CD0BF: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x18;
    MEM8(0x776171) = 0x96;
    MEM8(0x776170) = 0xC8;
    MEM8(0x77616F) = 0xFF;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CD0E6: ;
    xmm0 = MEMF(0x648EA8); /* movss */
    MEM8(0x77616E) = LO8(eax);
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CD114; /* je: equal / zero */

loc_001CD104: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001CD114: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F5414;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001CD120: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x73);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CD12B: ;
    SET_LO8(eax, MEM8(0x7819D5));
    xmm0 = MEMF(0x648EA8); /* movss */
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CD157; /* je: equal / zero */

loc_001CD147: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001CD157: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F53F0;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001CD163: ;
    PUSH32(esp, eax);
    ebp = ebp + 0x19;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x73);
    SET_LO8(ecx, 0x80);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CD171: ;
    esp = esp + 0xC;

loc_001CD174: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CD183: ;
    ebp = MEM32(esp + 0x2C);
    xmm0 = MEMF(0x648CF4); /* movss */
    xmm3 = MEMF(0x648D10); /* movss */
    /* comiss xmm3, MEMF(ebp) - sets EFLAGS */
    xmm0 = xmm0 - MEMF(ebp); /* subss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    SET_LO8(ebx, LO8(eax));
    MEMF(esp + 0x10) = xmm1; /* movss */
    if ((xmm3 <= MEMF(ebp))) goto loc_001CD209; /* jbe: below or equal (unsigned <=) */

loc_001CD1BB: ;
    xmm0 = MEMF(ebp); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_001CD1ED; /* jbe: below or equal (unsigned <=) */

loc_001CD1D3: ;
    edx = ZX8(LO8(eax));
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x10) = xmm2; /* movss */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_001CD274;

loc_001CD1ED: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001CD1F8; /* jbe: below or equal (unsigned <=) */

loc_001CD1F2: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_001CD1F8: ;
    edx = ZX8(LO8(eax));
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_001CD274;

loc_001CD209: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_001CD22A; /* jbe: below or equal (unsigned <=) */

loc_001CD20E: ;
    xmm0 = MEMF(ebp); /* movss */
    /* comiss xmm0, MEMF(0x648CE4) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CE4))) goto loc_001CD352; /* jbe: below or equal (unsigned <=) */

loc_001CD220: ;
    MEMF(ebp) = xmm2; /* movss */
    goto loc_001CD352;

loc_001CD22A: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_001CD27B; /* jbe: below or equal (unsigned <=) */

loc_001CD22F: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_001CD254; /* jbe: below or equal (unsigned <=) */

loc_001CD24C: ;
    MEMF(esp + 0x10) = xmm2; /* movss */
    goto loc_001CD25F;

loc_001CD254: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001CD25F; /* jbe: below or equal (unsigned <=) */

loc_001CD259: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_001CD25F: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    eax = ZX8(LO8(eax));
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x14) = eax;
    /* FPU: fimul dword ptr [esp + 0x14] */

loc_001CD274: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CD279: ;
    SET_LO8(ebx, LO8(eax));

loc_001CD27B: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D40); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CD2A4; /* je: equal / zero */

loc_001CD294: ;
    xmm0 = MEMF(0x649678); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001CD2A4: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F53D4;
    MEM8(0x776171) = 0x96;
    MEM8(0x776170) = 0xC8;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001CD2CB: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CD2DB: ;
    xmm0 = MEMF(0x648D10); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x1C))) goto loc_001CD352; /* jbe: below or equal (unsigned <=) */

loc_001CD2ED: ;
    xmm1 = MEMF(0x648D40); /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CD324; /* je: equal / zero */

loc_001CD314: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_001CD324: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(ebx) >> 1);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    MEM8(0x776171) = 0x96;
    MEM8(0x776170) = 0xC8;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CD34F: ;
    esp = esp + 0xC;

loc_001CD352: ;
    xmm0 = MEMF(ebp); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    POP32(esp, esi);
    MEMF(ebp) = xmm0; /* movss */
    POP32(esp, ebx);

loc_001CD366: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001CD368: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001CD370
 * Original: 0x001CD370 - 0x001CD5CB (603 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD370(void)
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

loc_001CD370: ;
    esp = esp - 0x40C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x418);
    if (TEST_Z(ebp, ebp)) goto loc_001CD5C3; /* je: equal / zero */

loc_001CD386: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_001CD39D; /* je: equal / zero */

loc_001CD390: ;
    if (CMP_EQ(MEM32(eax + 0x204), 2)) goto loc_001CD5C3; /* je: equal / zero */

loc_001CD39D: ;
    SET_LO8(eax, MEM8(0x86E9C0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CD3BB; /* je: equal / zero */

loc_001CD3A6: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_001CD3AB: ;
    fp_push(MEMF(0x86EA0C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_001CD5C3; /* ja: above (unsigned >) */

loc_001CD3BB: ;
    eax = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 0); sub_00394720(); /* call 0x00394720 */

loc_001CD3C4: ;
    if (TEST_Z(eax, eax)) goto loc_001CD3E0; /* je: equal / zero */

loc_001CD3C8: ;
    eax = MEM32(eax + 0x570);
    if (TEST_Z(eax, eax)) goto loc_001CD3E0; /* je: equal / zero */

loc_001CD3D2: ;
    ecx = MEM32(eax + 0xCA0);
    if (TEST_Z(ecx, ecx)) goto loc_001CD5C3; /* je: equal / zero */

loc_001CD3E0: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_001CD5C3; /* je: equal / zero */

loc_001CD3EE: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_001CD5C3; /* je: equal / zero */

loc_001CD3FC: ;
    xmm0 = MEMF(eax + 0x66C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_001CD5C3; /* jnp: not parity */

loc_001CD41B: ;
    fp_push(MEMF(esp + 0x414)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CD42E: ;
    xmm2 = MEMF(0x648D10); /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = MEMF(0x648D14); /* movss */
    SET_LO8(ebx, LO8(eax));
    MEMF(esp + 8) = xmm1; /* movss */
    if ((xmm2 <= xmm0)) goto loc_001CD4A0; /* jbe: below or equal (unsigned <=) */

loc_001CD451: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_001CD479; /* jbe: below or equal (unsigned <=) */

loc_001CD471: ;
    MEMF(esp + 8) = xmm2; /* movss */
    goto loc_001CD484;

loc_001CD479: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001CD484; /* jbe: below or equal (unsigned <=) */

loc_001CD47E: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_001CD484: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    eax = ZX8(LO8(ebx));
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x10) = eax;
    /* FPU: fimul dword ptr [esp + 0x10] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001CD49E: ;
    SET_LO8(ebx, LO8(eax));

loc_001CD4A0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3FE0(); /* call 0x003E3FE0 */

loc_001CD4AC: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F53AC;
    esi = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_001CD4BC: ;
    edi = eax;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0x228;
    PUSH32(esp, 0x5F5398);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_001CD4DC: ;
    eax = esp + 0x230;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_001CD4EF: ;
    eax = MEM32(0x84A144);
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_001CD522; /* je: equal / zero */

loc_001CD4FB: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_001CD522; /* je: equal / zero */

loc_001CD505: ;
    eax = ZX8(MEM8(eax + 0x2A8));
    eax = eax - 0;
    if ((eax == 0)) goto loc_001CD51B; /* je: equal / zero */

loc_001CD511: ;
    eax--;
    if ((eax != 0)) goto loc_001CD522; /* jne: not equal / not zero */

loc_001CD514: ;
    esi = 0x145;
    goto loc_001CD527;

loc_001CD51B: ;
    esi = 0x55;
    goto loc_001CD527;

loc_001CD522: ;
    esi = 0x96;

loc_001CD527: ;
    xmm0 = MEMF(0x648D40); /* movss */
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_001CD534: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0x80;
    MEM8(0x77616F) = 0;
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CD561: ;
    xmm0 = MEMF(0x648D10); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x14))) goto loc_001CD5C0; /* jbe: below or equal (unsigned <=) */

loc_001CD573: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = MEMF(0x648D40); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_001CD58E: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(ebx) >> 1);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    MEM8(0x776171) = 0xFF;
    MEM8(0x776170) = 0x80;
    MEM8(0x77616F) = 0;
    MEM8(0x77616E) = LO8(ebx);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_001CD5BD: ;
    esp = esp + 0xC;

loc_001CD5C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001CD5C3: ;
    POP32(esp, ebp);
    esp = esp + 0x40C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
