/**
 * Burnout 3 - Recompiled code chunk 43
 * Functions: 250 (0x003C5FD0 - 0x003DB430)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003C5FD0
 * Original: 0x003C5FD0 - 0x003C6072 (162 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C5FD0: ;
    if (CMP_EQ(MEM32(esp + 4), 0xFF)) goto loc_003C6071; /* je: equal / zero */

loc_003C5FDE: ;
    eax = MEM32(esi + 0x1C);
    ecx = eax;
    ecx = ecx & 0xFF;
    if ((ecx == 0)) goto loc_003C6006; /* je: equal / zero */

loc_003C5FEB: ;
    if (CMP_EQ(MEM8(esi + 0x17), 9)) goto loc_003C6006; /* je: equal / zero */

loc_003C5FF1: ;
    if (CMP_GE(ecx, 2)) goto loc_003C5FFB; /* jge: greater or equal (signed >=) */

loc_003C5FF6: ;
    ecx = 2;

loc_003C5FFB: ;
    eax = eax & 0xFFFFFF00u;
    eax = eax | ecx;
    MEM32(esi + 0x1C) = eax;
    esp += 4; return; /* ret */

loc_003C6006: ;
    edx = ZX8(MEM8(esi + 0x1A));
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x20);
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    ecx = ZX8(MEM8(esi + 0x17));
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(esi + 0x1C));
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    edi = edi & 0xFF;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    ebp = ebp << 4;
    edx = edx + ebp;
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, 0); sub_00138FF0(); /* call 0x00138FF0 */

loc_003C6049: ;
    esp = esp + 0x1C;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003C6071; /* je: equal / zero */

loc_003C6054: ;
    if (CMP_EQ(MEM8(esi + 0x17), 9)) goto loc_003C6071; /* je: equal / zero */

loc_003C605A: ;
    ecx = MEM32(esi + 0x1C);
    ecx = ecx & 0xFFFF00F0u;
    eax = eax << 8;
    ecx = ecx | eax;
    ecx = ecx | 0xF0;
    MEM32(esi + 0x1C) = ecx;

loc_003C6071: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C6080
 * Original: 0x003C6080 - 0x003C61B1 (305 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6080: ;
    edx = ZX8(MEM8(eax + 0x17));
    edx--;
    if (CMP_A(edx, 0xB)) goto loc_003C61B0; /* ja: above (unsigned >) */

loc_003C608E: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x3C61B4); /* switch: 12 entries, 8 targets */
    if (_jt == 0x003C6095u) goto loc_003C6095;
    if (_jt == 0x003C60ADu) goto loc_003C60AD;
    if (_jt == 0x003C60D8u) goto loc_003C60D8;
    if (_jt == 0x003C6185u) goto loc_003C6185;
    if (_jt == 0x003C6191u) goto loc_003C6191;
    if (_jt == 0x003C619Du) goto loc_003C619D;
    if (_jt == 0x003C61A7u) goto loc_003C61A7;
    if (_jt == 0x003C61B0u) goto loc_003C61B0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C6095: ;
    if (CMP_EQ(ecx, 0xFF)) goto loc_003C61B0; /* je: equal / zero */

loc_003C60A1: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0); sub_00187710(); /* call 0x00187710 */

loc_003C60A9: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_003C60AD: ;
    if (CMP_EQ(ecx, 0xFF)) goto loc_003C61B0; /* je: equal / zero */

loc_003C60B9: ;
    SET_LO8(edx, MEM8(eax + 0x18));
    MEM8(ecx + ecx * 2 + 0x76FE90) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x1C));
    MEM8(ecx + ecx * 2 + 0x76FE91) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0x20));
    MEM8(ecx + ecx * 2 + 0x76FE92) = LO8(eax);
    esp += 4; return; /* ret */

loc_003C60D8: ;
    eax = MEM32(esp + 4);
    eax = eax & 1;
    ecx = 0; /* xor self */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_003C6116; /* jne: not equal / not zero */

loc_003C60E5: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = MEM32(0x847024);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xBF800000u);
    eax = eax - edx;
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, 0x66F);
    MEM8(0x87C824) = LO8(eax);
    PUSH32(esp, edx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003C6116: ;
    SET_LO8(ecx, MEM8(0x87C824));
    SET_LO8(ecx, LO8(ecx) + MEM8(0x7FA20C));
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM8(0x87C824) = LO8(ecx);
    eax = eax - edx;
    ecx = ZX8(LO8(ecx));
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_LE(ecx, eax)) goto loc_003C61B0; /* jle: less or equal (signed <=) */

loc_003C613C: ;
    SET_LO16(eax, MEM16(esi + 0x1B8));
    if (CMP_BE(LO16(eax), 0x10E0)) goto loc_003C615A; /* jbe: below or equal (unsigned <=) */

loc_003C6149: ;
    MEM16(esi + 0x1B8) = 0xE10;
    MEM8(0x87C824) = 0;
    esp += 4; return; /* ret */

loc_003C615A: ;
    if (CMP_A(LO16(eax), 0x2D0)) goto loc_003C6171; /* ja: above (unsigned >) */

loc_003C6160: ;
    MEM16(esi + 0x1B8) = 0x5A;
    MEM8(0x87C824) = 0;
    esp += 4; return; /* ret */

loc_003C6171: ;
    eax = eax + 0xFFFFFD30u;
    MEM16(esi + 0x1B8) = LO16(eax);
    MEM8(0x87C824) = 0;
    esp += 4; return; /* ret */

loc_003C6185: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001C60A0(); /* call 0x001C60A0 */

loc_003C618D: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_003C6191: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0); sub_001A2DE0(); /* call 0x001A2DE0 */

loc_003C6199: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_003C619D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0014B130(); /* call 0x0014B130 */

loc_003C61A3: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_003C61A7: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001AA230(); /* call 0x001AA230 */

loc_003C61AF: ;
    POP32(esp, ecx);

loc_003C61B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C61F0
 * Original: 0x003C61F0 - 0x003C65E1 (1009 bytes, 248 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C61F0(void)
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

loc_003C61F0: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    esp = esp - 0x34;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C65DD; /* jne: not equal / not zero */

loc_003C6201: ;
    eax = MEM32(0x802324);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003C65DC; /* jbe: below or equal (unsigned <=) */

loc_003C6211: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_003C6215: ;
    eax = MEM32(0x84B4A0);
    SET_LO8(ecx, MEM8(eax + edi + 0x15));
    eax = eax + edi;
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    if (CMP_NE(LO8(ecx), 0x20)) goto loc_003C65C9; /* jne: not equal / not zero */

loc_003C622C: ;
    if (TEST_Z(eax, eax)) goto loc_003C65C9; /* je: equal / zero */

loc_003C6234: ;
    SET_LO8(edx, MEM8(eax + 0x14));
    SET_LO8(ecx, 1);
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_003C65C9; /* je: equal / zero */

loc_003C6241: ;
    edx = (uint32_t)(int32_t)SMEM16(eax);
    xmm1 = MEMF(esi + 0x7C); /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    (void)0; /* test MEM8(eax + 0x16), LO8(ecx) - flags set for next jcc */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x80); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    if (TEST_Z(MEM8(eax + 0x16), LO8(ecx))) goto loc_003C62A5; /* je: equal / zero */

loc_003C6287: ;
    xmm3 = MEMF(esi + 0x7C); /* movss */
    xmm3 = xmm3 - MEMF(esi + 0x294); /* subss */
    xmm4 = MEMF(0x648D1C); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 < xmm3)) goto loc_003C65C9; /* jb: below (unsigned <) */

loc_003C62A5: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_003C65C9; /* ja: above (unsigned >) */

loc_003C62B6: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C65E4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C62BDu) goto loc_003C62BD;
    if (_jt == 0x003C638Cu) goto loc_003C638C;
    if (_jt == 0x003C63C1u) goto loc_003C63C1;
    if (_jt == 0x003C6474u) goto loc_003C6474;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C62BD: ;
    xmm4 = MEMF(eax + 0xC); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_003C62D9; /* ja: above (unsigned >) */

loc_003C62CF: ;
    xmm4 = MEMF(eax + 0x10); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_003C6332; /* jbe: below or equal (unsigned <=) */

loc_003C62D9: ;
    xmm4 = MEMF(eax + 0x30); /* movss */
    xmm5 = MEMF(eax + 0x2C); /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(eax + 0x28); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm5 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm0 = xmm6; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm1 = xmm3; /* movaps */

loc_003C6332: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x1C)); /* sqrtss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(esp + 0x20) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x20))) goto loc_003C65C9; /* jbe: below or equal (unsigned <=) */

loc_003C6369: ;
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x648CF8))) goto loc_003C65C9; /* jbe: below or equal (unsigned <=) */

loc_003C6376: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_003C65B4; /* ja: above (unsigned >) */

loc_003C6387: ;
    goto loc_003C65C9;

loc_003C638C: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C63A8: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    esp = esp + 4;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003C65B4; /* ja: above (unsigned >) */

loc_003C63BC: ;
    goto loc_003C65C9;

loc_003C63C1: ;
    xmm5 = MEMF(eax + 0x2C); /* movss */
    xmm3 = MEMF(eax + 0x30); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm4 = xmm3; /* movaps */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 <= xmm4)) goto loc_003C65C9; /* jbe: below or equal (unsigned <=) */

loc_003C63EE: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm4, xmm6 - sets EFLAGS */
    if ((xmm4 <= xmm6)) goto loc_003C65C9; /* jbe: below or equal (unsigned <=) */

loc_003C63FD: ;
    xmm4 = MEMF(eax + 0x24); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(eax + 0x28); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_003C65C9; /* jbe: below or equal (unsigned <=) */

loc_003C6436: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003C65C9; /* jbe: below or equal (unsigned <=) */

loc_003C6445: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C65C9; /* jbe: below or equal (unsigned <=) */

loc_003C6462: ;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 > MEMF(0x648CF8))) goto loc_003C65B4; /* ja: above (unsigned >) */

loc_003C646F: ;
    goto loc_003C65C9;

loc_003C6474: ;
    xmm4 = MEMF(eax + 0x30); /* movss */
    xmm3 = MEMF(eax + 0x2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esi + 0x8C); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x84); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm4 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(eax + 0x28); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(esi + 0x88); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x24); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    if ((xmm7 <= xmm2)) goto loc_003C65C9; /* jbe: below or equal (unsigned <=) */

loc_003C653A: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_003C65C9; /* jb: below (unsigned <) */

loc_003C6543: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x30) = ecx;
    xmm2 = xmm6; /* movaps */
    /* FPU: fdivr dword ptr [esp + 0x10] */
    xmm2 = xmm2 * MEMF(esp + 0xC); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C65C9; /* jbe: below or equal (unsigned <=) */

loc_003C6594: ;
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * MEMF(esp + 0x18); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 < xmm7)) goto loc_003C65C9; /* jb: below (unsigned <) */

loc_003C65A7: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003C65C9; /* jbe: below or equal (unsigned <=) */

loc_003C65B4: ;
    eax = MEM32(0x84B4A0);
    ebx = ZX8(MEM8(edi + eax + 0x17));
    eax = MEM32(edi + eax + 0x18);
    ecx = esi;
    PUSH32(esp, 0); sub_000F1C40(); /* call 0x000F1C40 */

loc_003C65C9: ;
    eax = MEM32(0x802324);
    ebp++;
    edi = edi + 0x78;
    if (CMP_B(ebp, eax)) goto loc_003C6215; /* jb: below (unsigned <) */

loc_003C65DA: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003C65DC: ;
    POP32(esp, ebp);

loc_003C65DD: ;
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003C67F0
 * Original: 0x003C67F0 - 0x003C6875 (133 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C67F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C67F0: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_A(edi, 0x140)) { sub_003C6875(); return; } /* ja: above (unsigned >) */

loc_003C67FB: ;
    eax = MEM32(0x8472A0);
    edi = edi & 0xFFF;
    if (TEST_NZ(eax, eax)) { sub_003C6875(); return; } /* jne: not equal / not zero */

loc_003C680A: ;
    if (CMP_AE(edi, MEM32(0x802324))) goto loc_003C6821; /* jae: above or equal (unsigned >=) */

loc_003C6812: ;
    ecx = MEM32(0x84B4A0);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    MEM8(eax + ecx + 0x14) = LO8(ebx);

loc_003C6821: ;
    if (CMP_NE(ebx, 1)) goto loc_003C685C; /* jne: not equal / not zero */

loc_003C6826: ;
    ecx = edi;
    PUSH32(esp, esi);
    ecx = ecx & 0x3F;
    eax = ebx;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_003C6835: ;
    ecx = edi;
    ecx = ecx >> 6;
    eax = ~eax;
    edx = ~edx;
    ecx = ecx * 8 + 0x802080;
    esi = 0x10;
    /* nop */

loc_003C6850: ;
    MEM32(ecx) = MEM32(ecx) & eax;
    MEM32(ecx + 4) = MEM32(ecx + 4) & edx;
    ecx = ecx + 0x28;
    esi--;
    if ((esi != 0)) goto loc_003C6850; /* jne: not equal / not zero */

loc_003C685B: ;
    POP32(esp, esi);

loc_003C685C: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x12)) { sub_003C6875(); return; } /* jne: not equal / not zero */

loc_003C6865: ;
    if (CMP_NE(edi, 2)) { sub_003C6875(); return; } /* jne: not equal / not zero */

loc_003C686A: ;
    if (CMP_NE(ebx, 1)) { sub_003C6875(); return; } /* jne: not equal / not zero */

loc_003C686F: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002FD7A0(); return; /* tail jmp 0x002FD7A0 */

}

/**
 * sub_003C6880
 * Original: 0x003C6880 - 0x003C68D5 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6880(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C6880: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8472A0);
    eax = eax & 0xFFF;
    if (TEST_NZ(esi, esi)) goto loc_003C68D3; /* jne: not equal / not zero */

loc_003C6890: ;
    if (CMP_AE(eax, MEM32(0x802324))) goto loc_003C68D3; /* jae: above or equal (unsigned >=) */

loc_003C6898: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_003C68AE; /* je: equal / zero */

loc_003C689D: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    PUSH32(esp, edi);
    edi = MEM32(0x84B4A0);
    MEM32(esi + edi + 0x18) = ecx;
    POP32(esp, edi);

loc_003C68AE: ;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_003C68C2; /* je: equal / zero */

loc_003C68B3: ;
    esi = MEM32(0x84B4A0);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    MEM8(ecx + esi + 0x17) = LO8(edx);

loc_003C68C2: ;
    edx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    MEM32(eax + edx + 0x1C) = 0;

loc_003C68D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C68E0
 * Original: 0x003C68E0 - 0x003C6D58 (1144 bytes, 292 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C68E0(void)
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

loc_003C68E0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x802324);
    edi = edi & 0xFFF;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    esi = ecx;
    if (CMP_A(edi, eax)) goto loc_003C6D4D; /* ja: above (unsigned >) */

loc_003C68FC: ;
    if (CMP_A(edi, 0x140)) goto loc_003C6D4D; /* ja: above (unsigned >) */

loc_003C6908: ;
    if (CMP_AE(esi, 0x10)) goto loc_003C6968; /* jae: above or equal (unsigned >=) */

loc_003C690D: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_003C6912: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(MEM32(eax + 0x28C), edx)) goto loc_003C6968; /* je: equal / zero */

loc_003C6923: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xC)) goto loc_003C6931; /* jne: not equal / not zero */

loc_003C692C: ;
    if (CMP_EQ(edi, 0x32)) goto loc_003C6968; /* je: equal / zero */

loc_003C6931: ;
    edx = edi;
    edx = edx >> 6;
    eax = esi + esi * 4;
    edx = edx + eax;
    eax = MEM32(edx * 8 + 0x802080);
    edx = MEM32(edx * 8 + 0x802084);
    ecx = edi;
    ecx = ecx & 0x3F;
    PUSH32(esp, 0); sub_00470CB0(); /* call 0x00470CB0 */

loc_003C6953: ;
    eax = eax & 1;
    edx = 0; /* xor self */
    eax = eax | edx;
    if ((eax == 0)) goto loc_003C6D4D; /* je: equal / zero */

loc_003C6960: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_003C6968: ;
    edx = MEM32(0x84B4A0);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x78);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    ecx = MEM32(0x84A5F8);
    edi = edi + edx;
    esi = esi + ecx;
    eax = edi;
    if ((esi == 0)) goto loc_003C6D4D; /* je: equal / zero */

loc_003C6989: ;
    if (TEST_Z(eax, eax)) goto loc_003C6D4D; /* je: equal / zero */

loc_003C6991: ;
    if (CMP_EQ(MEM8(eax + 0x14), 1)) goto loc_003C6D4D; /* je: equal / zero */

loc_003C699B: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm1 = MEMF(esi + 0x7C); /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1EE);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1EC);
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    (void)0; /* test MEM8(eax + 0x16), 1 - flags set for next jcc */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x80); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    if (TEST_Z(MEM8(eax + 0x16), 1)) goto loc_003C6A1C; /* je: equal / zero */

loc_003C69FE: ;
    xmm3 = MEMF(esi + 0x7C); /* movss */
    xmm3 = xmm3 - MEMF(esi + 0x294); /* subss */
    xmm4 = MEMF(0x648D1C); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 < xmm3)) goto loc_003C6D4D; /* jb: below (unsigned <) */

loc_003C6A1C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_003C6D4D; /* ja: above (unsigned >) */

loc_003C6A2D: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C6D58); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C6A34u) goto loc_003C6A34;
    if (_jt == 0x003C6B0Fu) goto loc_003C6B0F;
    if (_jt == 0x003C6B4Bu) goto loc_003C6B4B;
    if (_jt == 0x003C6C11u) goto loc_003C6C11;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C6A34: ;
    xmm4 = MEMF(eax + 0xC); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_003C6A50; /* ja: above (unsigned >) */

loc_003C6A46: ;
    xmm4 = MEMF(eax + 0x10); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_003C6AA9; /* jbe: below or equal (unsigned <=) */

loc_003C6A50: ;
    xmm4 = MEMF(eax + 0x30); /* movss */
    xmm6 = MEMF(eax + 0x2C); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(eax + 0x28); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm6 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm0 = xmm7; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm1 = xmm3; /* movaps */

loc_003C6AA9: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0xC))) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6AE4: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6AF6: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6B07: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_003C6B0F: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C6B2B: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    esp = esp + 4;
    xmm1 = xmm1 + xmm5; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6B43: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_003C6B4B: ;
    xmm6 = MEMF(eax + 0x2C); /* movss */
    xmm3 = MEMF(eax + 0x30); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm4 = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 + xmm5; /* addss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 <= xmm4)) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6B7C: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 - xmm5; /* subss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6B8F: ;
    xmm4 = MEMF(eax + 0x24); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(eax + 0x28); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 + xmm5; /* addss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6BCC: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 - xmm5; /* subss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6BDF: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6BFC: ;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 <= MEMF(0x648CF8))) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6C09: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_003C6C11: ;
    xmm4 = MEMF(eax + 0x30); /* movss */
    xmm3 = MEMF(eax + 0x2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esi + 0x8C); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x84); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm4 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(eax + 0x28); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(esi + 0x88); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0xC); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    if ((xmm7 <= xmm2)) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6CD3: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_003C6D4D; /* jb: below (unsigned <) */

loc_003C6CD8: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 8); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    /* FPU: fdivr dword ptr [esp + 0xc] */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x18) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C6D4D; /* jbe: below or equal (unsigned <=) */

loc_003C6D29: ;
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * MEMF(esp + 0xC); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 < xmm7)) goto loc_003C6D4D; /* jb: below (unsigned <) */

loc_003C6D3C: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_003C6960; /* ja: above (unsigned >) */

loc_003C6D4D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003C6D70
 * Original: 0x003C6D70 - 0x003C7233 (1219 bytes, 313 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6D70(void)
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

loc_003C6D70: ;
    esp = esp - 0x38;
    (void)0; /* cmp ebx, 0x10 - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_AE(ebx, 0x10)) goto loc_003C6E20; /* jae: above or equal (unsigned >=) */

loc_003C6D7F: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_003C6D99; /* jne: not equal / not zero */

loc_003C6D88: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_003C6D99: ;
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(MEM32(0x876474), eax)) goto loc_003C6E20; /* je: equal / zero */

loc_003C6DAA: ;
    eax = MEM32(esp + 0x48);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003C7229; /* jle: less or equal (signed <=) */

loc_003C6DB8: ;
    ebp = MEM32(0x802324);
    edi = edi;

loc_003C6DC0: ;
    ecx = MEM32(esp + 0x4C);
    esi = MEM32(ecx + edi * 4);
    esi = esi & 0xFFF;
    if (CMP_AE(esi, ebp)) goto loc_003C6E04; /* jae: above or equal (unsigned >=) */

loc_003C6DD1: ;
    if (CMP_AE(esi, 0x140)) goto loc_003C6E04; /* jae: above or equal (unsigned >=) */

loc_003C6DD9: ;
    edx = esi;
    edx = edx >> 6;
    eax = ebx + ebx * 4;
    edx = edx + eax;
    eax = MEM32(edx * 8 + 0x802080);
    edx = MEM32(edx * 8 + 0x802084);
    ecx = esi;
    ecx = ecx & 0x3F;
    PUSH32(esp, 0); sub_00470CB0(); /* call 0x00470CB0 */

loc_003C6DFB: ;
    eax = eax & 1;
    edx = 0; /* xor self */
    eax = eax | edx;
    if ((eax != 0)) goto loc_003C6E17; /* jne: not equal / not zero */

loc_003C6E04: ;
    eax = MEM32(esp + 0x48);
    edi++;
    if (CMP_L(edi, eax)) goto loc_003C6DC0; /* jl: less (signed <) */

loc_003C6E0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_003C6E17: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_003C6E20: ;
    eax = MEM32(esp + 0x48);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003C7229; /* jle: less or equal (signed <=) */

loc_003C6E2E: ;
    ebp = MEM32(0x84A5F8);
    goto loc_003C6E40;

    /* nop */
    /* nop */

loc_003C6E40: ;
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(ecx + edi * 4);
    ecx = MEM32(0x802324);
    eax = eax & 0xFFF;
    if (CMP_AE(eax, ecx)) goto loc_003C721C; /* jae: above or equal (unsigned >=) */

loc_003C6E5A: ;
    ecx = MEM32(0x84B4A0);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    esi = esi + ecx;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + ebp;
    if ((ecx == 0)) goto loc_003C721C; /* je: equal / zero */

loc_003C6E77: ;
    if (TEST_Z(esi, esi)) goto loc_003C721C; /* je: equal / zero */

loc_003C6E7F: ;
    if (CMP_EQ(MEM8(esi + 0x14), 1)) goto loc_003C721C; /* je: equal / zero */

loc_003C6E89: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    xmm1 = MEMF(ecx + 0x7C); /* movss */
    xmm0 = MEMF(ecx + 0x78); /* movss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1EC);
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1EE);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    (void)0; /* test MEM8(esi + 0x16), 1 - flags set for next jcc */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x80); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    if (TEST_Z(MEM8(esi + 0x16), 1)) goto loc_003C6F0A; /* je: equal / zero */

loc_003C6EEC: ;
    xmm3 = MEMF(ecx + 0x7C); /* movss */
    xmm3 = xmm3 - MEMF(ecx + 0x294); /* subss */
    xmm4 = MEMF(0x648D1C); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 < xmm3)) goto loc_003C721C; /* jb: below (unsigned <) */

loc_003C6F0A: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x15));
    edx = edx & 3;
    if (CMP_A(edx, 3)) goto loc_003C721C; /* ja: above (unsigned >) */

loc_003C6F1B: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x3C7234); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C6F22u) goto loc_003C6F22;
    if (_jt == 0x003C6FF4u) goto loc_003C6FF4;
    if (_jt == 0x003C7027u) goto loc_003C7027;
    if (_jt == 0x003C70E4u) goto loc_003C70E4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C6F22: ;
    xmm4 = MEMF(esi + 0xC); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_003C6F3E; /* ja: above (unsigned >) */

loc_003C6F34: ;
    xmm4 = MEMF(esi + 0x10); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_003C6F97; /* jbe: below or equal (unsigned <=) */

loc_003C6F3E: ;
    xmm4 = MEMF(esi + 0x30); /* movss */
    xmm6 = MEMF(esi + 0x2C); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(esi + 0x28); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm6 = MEMF(esi + 0x24); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm0 = xmm7; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm1 = xmm3; /* movaps */

loc_003C6F97: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x1C)); /* sqrtss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm0, MEMF(esp + 0x20) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x20))) goto loc_003C721C; /* jbe: below or equal (unsigned <=) */

loc_003C6FD2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003C721C; /* jbe: below or equal (unsigned <=) */

loc_003C6FE4: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    goto loc_003C721A;

loc_003C6FF4: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C7010: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    esp = esp + 4;
    xmm1 = xmm1 + xmm5; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    goto loc_003C721A;

loc_003C7027: ;
    xmm6 = MEMF(esi + 0x2C); /* movss */
    xmm3 = MEMF(esi + 0x30); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm4 = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 + xmm5; /* addss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 <= xmm4)) goto loc_003C721C; /* jbe: below or equal (unsigned <=) */

loc_003C7058: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 - xmm5; /* subss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_003C721C; /* jbe: below or equal (unsigned <=) */

loc_003C706B: ;
    xmm4 = MEMF(esi + 0x24); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esi + 0x28); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 + xmm5; /* addss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_003C721C; /* jbe: below or equal (unsigned <=) */

loc_003C70A8: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 - xmm5; /* subss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_003C721C; /* jbe: below or equal (unsigned <=) */

loc_003C70BB: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C721C; /* jbe: below or equal (unsigned <=) */

loc_003C70D8: ;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    goto loc_003C721A;

loc_003C70E4: ;
    xmm4 = MEMF(esi + 0x30); /* movss */
    xmm3 = MEMF(esi + 0x2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ecx + 0x8C); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x84); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm4 = MEMF(esi + 0x24); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(esi + 0x28); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(ecx + 0x88); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x28); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    if ((xmm7 <= xmm2)) goto loc_003C721C; /* jbe: below or equal (unsigned <=) */

loc_003C71A6: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_003C721C; /* jb: below (unsigned <) */

loc_003C71AB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x34) = edx;
    xmm2 = xmm6; /* movaps */
    /* FPU: fdivr dword ptr [esp + 0x10] */
    xmm2 = xmm2 * MEMF(esp + 0xC); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C721C; /* jbe: below or equal (unsigned <=) */

loc_003C71FC: ;
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * MEMF(esp + 0x18); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 < xmm7)) goto loc_003C721C; /* jb: below (unsigned <) */

loc_003C720F: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */

loc_003C721A: ;
    if ((xmm0 > xmm5)) goto loc_003C722C; /* ja: above (unsigned >) */

loc_003C721C: ;
    eax = MEM32(esp + 0x48);
    edi++;
    if (CMP_L(edi, eax)) goto loc_003C6E40; /* jl: less (signed <) */

loc_003C7229: ;
    eax = eax | 0xFFFFFFFFu;

loc_003C722C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003C7250
 * Original: 0x003C7250 - 0x003C726F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7250(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C7250: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x802324);
    edi = edi & 0xFFF;
    if (CMP_A(edi, eax)) goto loc_003C726A; /* ja: above (unsigned >) */

loc_003C7262: ;
    if (CMP_BE(edi, 0x140)) { sub_003C726F(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C726A: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C72F0
 * Original: 0x003C72F0 - 0x003C76DB (1003 bytes, 257 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C72F0(void)
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

loc_003C72F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6F8;
    edx = MEM32(0x8470DC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x770);
    esi = eax;
    eax = esp + 0x30;
    edi = edi + edx;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_003C7319: ;
    eax = MEM32(0x802324);
    esi = esi & 0xFFF;
    if (CMP_A(esi, eax)) { sub_003C76DB(); return; } /* ja: above (unsigned >) */

loc_003C732C: ;
    eax = MEM32(0x84B4A0);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    xmm0 = MEMF(edi + 0x340); /* movss */
    xmm3 = MEMF(edi + 0x330); /* movss */
    xmm1 = MEMF(edi + 0x334); /* movss */
    xmm5 = MEMF(edi + 0x338); /* movss */
    xmm4 = MEMF(edi + 0x33C); /* movss */
    esi = esi + eax;
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x344); /* movss */
    eax = esi;
    if ((esi == 0)) { sub_003C76DB(); return; } /* je: equal / zero */

loc_003C7377: ;
    if (CMP_EQ(MEM8(eax + 0x14), 1)) { sub_003C76DB(); return; } /* je: equal / zero */

loc_003C7381: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm7 = 0.0f; /* xorps self = zero */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    (void)0; /* test MEM8(eax + 0x16), 1 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm5 = xmm5 - xmm2; /* subss */
    if (TEST_Z(MEM8(eax + 0x16), 1)) goto loc_003C73D6; /* je: equal / zero */

loc_003C73C5: ;
    xmm2 = MEMF(0x648D1C); /* movss */
    /* comiss xmm2, xmm7 - sets EFLAGS */
    if ((xmm2 < xmm7)) { sub_003C76DB(); return; } /* jb: below (unsigned <) */

loc_003C73D6: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) { sub_003C76DB(); return; } /* ja: above (unsigned >) */

loc_003C73E7: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C76E8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C73EEu) goto loc_003C73EE;
    if (_jt == 0x003C74BCu) goto loc_003C74BC;
    if (_jt == 0x003C74F4u) goto loc_003C74F4;
    if (_jt == 0x003C75A9u) goto loc_003C75A9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C73EE: ;
    xmm2 = MEMF(eax + 0xC); /* movss */
    xmm0 = MEMF(0x648E54); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_003C740A; /* ja: above (unsigned >) */

loc_003C7400: ;
    xmm2 = MEMF(eax + 0x10); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_003C7463; /* jbe: below or equal (unsigned <=) */

loc_003C740A: ;
    xmm2 = MEMF(eax + 0x30); /* movss */
    xmm4 = MEMF(eax + 0x2C); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x28); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm4 = MEMF(eax + 0x24); /* movss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm3 = xmm6; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm1 = xmm0; /* movaps */

loc_003C7463: ;
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0xC))) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C749A: ;
    /* comiss xmm1, xmm7 - sets EFLAGS */
    if ((xmm1 <= xmm7)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C74A3: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C74B4: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003C74BC: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C74D8: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    esp = esp + 4;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C74EC: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003C74F4: ;
    xmm2 = MEMF(eax + 0x30); /* movss */
    xmm6 = MEMF(eax + 0x2C); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = xmm3; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    if ((xmm3 <= xmm4)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C7524: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C7533: ;
    xmm4 = MEMF(eax + 0x24); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    xmm3 = MEMF(eax + 0x28); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C756C: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C757B: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C7598: ;
    /* comiss xmm2, xmm7 - sets EFLAGS */
    if ((xmm2 <= xmm7)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C75A1: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003C75A9: ;
    xmm1 = MEMF(eax + 0x2C); /* movss */
    xmm2 = MEMF(eax + 0x30); /* movss */
    xmm4 = xmm4 - MEMF(esp + 0x10); /* subss */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm5 = MEMF(eax + 0x28); /* movss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0xB8); /* movss */
    xmm6 = xmm6 - MEMF(esp + 0x1C); /* subss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = MEMF(eax + 0x24); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm1 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if ((xmm7 <= xmm1)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C765D: ;
    /* comiss xmm2, xmm7 - sets EFLAGS */
    if ((xmm2 < xmm7)) { sub_003C76DB(); return; } /* jb: below (unsigned <) */

loc_003C7662: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    /* FPU: fdivr dword ptr [esp + 0xc] */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm6 = xmm6 + xmm0; /* addss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x14) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C76B3: ;
    xmm3 = xmm3 - xmm6; /* subss */
    xmm3 = xmm3 * MEMF(esp + 0xC); /* mulss */
    xmm3 = xmm3 + xmm6; /* addss */
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) { sub_003C76DB(); return; } /* jb: below (unsigned <) */

loc_003C76C6: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) { sub_003C76DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C76D3: ;
    eax = 0; /* xor self */
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
 * sub_003C7700
 * Original: 0x003C7700 - 0x003C7793 (147 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7700(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003C7700: ;
    edx = MEM32(0x802324);
    eax = eax & 0xFFF;
    if (CMP_A(eax, edx)) goto loc_003C778D; /* ja: above (unsigned >) */

loc_003C770F: ;
    edx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + edx;
    SET_LO8(edx, MEM8(eax + 0x15));
    SET_LO8(edx, LO8(edx) & 3);
    if (CMP_NE(LO8(edx), 3)) { sub_003C7793(); return; } /* jne: not equal / not zero */

loc_003C7725: ;
    edx = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    xmm0 = MEMF(ecx + edx + 0x7C); /* movss */
    xmm2 = MEMF(ecx + edx + 0x78); /* movss */
    ecx = ecx + edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax);
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * MEMF(eax + 0x2C); /* mulss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * MEMF(eax + 0x30); /* mulss */
    xmm1 = MEMF(eax + 0x24); /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 * MEMF(eax + 0x28); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - xmm1; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) { sub_003C7793(); return; } /* jb: below (unsigned <) */

loc_003C778D: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003C77A0
 * Original: 0x003C77A0 - 0x003C7837 (151 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C77A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003C77A0: ;
    edx = MEM32(0x8470DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    ecx = ecx + edx;
    edx = MEM32(0x802324);
    eax = eax & 0xFFF;
    if (CMP_A(eax, edx)) goto loc_003C7831; /* ja: above (unsigned >) */

loc_003C77BD: ;
    edx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + edx;
    SET_LO8(edx, MEM8(eax + 0x15));
    SET_LO8(edx, LO8(edx) & 3);
    if (CMP_NE(LO8(edx), 3)) { sub_003C7837(); return; } /* jne: not equal / not zero */

loc_003C77D3: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm0 = MEMF(ecx + 0x334); /* movss */
    xmm2 = MEMF(ecx + 0x330); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax);
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * MEMF(eax + 0x2C); /* mulss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * MEMF(eax + 0x30); /* mulss */
    xmm1 = MEMF(eax + 0x24); /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 * MEMF(eax + 0x28); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - xmm1; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) { sub_003C7837(); return; } /* jb: below (unsigned <) */

loc_003C7831: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003C7840
 * Original: 0x003C7840 - 0x003C7C9C (1116 bytes, 271 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7840(void)
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

loc_003C7840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x704;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_003C7858: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    ebx = MEM32(0x802324);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edi = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm5 = xmm0; /* movaps */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm5; /* movss */
    MEMF(esp + 0xC0) = xmm2; /* movss */
    MEMF(esp + 0x2D4) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm1; /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0xCC) = xmm2; /* movss */
    if (CMP_LE(ebx & ebx, 0)) goto loc_003C7C93; /* jle: less or equal (signed <=) */

loc_003C78C2: ;
    eax = 0; /* xor self */

loc_003C78C4: ;
    ecx = MEM32(0x84B4A0);
    esi = eax + ecx;
    SET_LO8(ecx, MEM8(esi + 0x14));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003C7C87; /* jne: not equal / not zero */

loc_003C78D8: ;
    SET_LO8(edx, MEM8(esi + 0x15));
    SET_LO8(edx, LO8(edx) & 0xFC);
    if (CMP_NE(LO8(edx), 0xC)) goto loc_003C7C87; /* jne: not equal / not zero */

loc_003C78E7: ;
    ecx = ZX8(MEM8(esi + 0x17));
    if (CMP_NE(ecx, MEM32(ebp + 8))) goto loc_003C7C87; /* jne: not equal / not zero */

loc_003C78F4: ;
    if (TEST_Z(esi, esi)) goto loc_003C7C87; /* je: equal / zero */

loc_003C78FC: ;
    if (CMP_EQ(MEM8(esi + 0x14), 1)) goto loc_003C7C87; /* je: equal / zero */

loc_003C7906: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm0 = MEMF(esp + 0xB8); /* movss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    (void)0; /* test MEM8(esi + 0x16), 1 - flags set for next jcc */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0xC0); /* movss */
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    if (TEST_Z(MEM8(esi + 0x16), 1)) goto loc_003C796D; /* je: equal / zero */

loc_003C7950: ;
    xmm4 = MEMF(0x648D1C); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - MEMF(esp + 0x2D4); /* subss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 < xmm3)) goto loc_003C7C87; /* jb: below (unsigned <) */

loc_003C796D: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_003C7C87; /* ja: above (unsigned >) */

loc_003C797E: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C7C9C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C7985u) goto loc_003C7985;
    if (_jt == 0x003C7A5Bu) goto loc_003C7A5B;
    if (_jt == 0x003C7A8Cu) goto loc_003C7A8C;
    if (_jt == 0x003C7B3Fu) goto loc_003C7B3F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C7985: ;
    xmm4 = MEMF(esi + 0xC); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_003C79A1; /* ja: above (unsigned >) */

loc_003C7997: ;
    xmm4 = MEMF(esi + 0x10); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_003C79FA; /* jbe: below or equal (unsigned <=) */

loc_003C79A1: ;
    xmm4 = MEMF(esi + 0x30); /* movss */
    xmm6 = MEMF(esi + 0x2C); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(esi + 0x28); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm6 = MEMF(esi + 0x24); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm0 = xmm7; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm1 = xmm3; /* movaps */

loc_003C79FA: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x24)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x1C))) goto loc_003C7C87; /* jbe: below or equal (unsigned <=) */

loc_003C7A31: ;
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x648CF8))) goto loc_003C7C87; /* jbe: below or equal (unsigned <=) */

loc_003C7A3E: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003C7C87; /* jbe: below or equal (unsigned <=) */

loc_003C7A4F: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003C7A5B: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C7A77: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    esp = esp + 4;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003C7A4F; /* ja: above (unsigned >) */

loc_003C7A87: ;
    goto loc_003C7C87;

loc_003C7A8C: ;
    xmm6 = MEMF(esi + 0x2C); /* movss */
    xmm3 = MEMF(esi + 0x30); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm4 = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 <= xmm4)) goto loc_003C7C87; /* jbe: below or equal (unsigned <=) */

loc_003C7AB9: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_003C7C87; /* jbe: below or equal (unsigned <=) */

loc_003C7AC8: ;
    xmm4 = MEMF(esi + 0x24); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esi + 0x28); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_003C7C87; /* jbe: below or equal (unsigned <=) */

loc_003C7B01: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_003C7C87; /* jbe: below or equal (unsigned <=) */

loc_003C7B10: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C7C87; /* jbe: below or equal (unsigned <=) */

loc_003C7B2D: ;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 > MEMF(0x648CF8))) goto loc_003C7A4F; /* ja: above (unsigned >) */

loc_003C7B3A: ;
    goto loc_003C7C87;

loc_003C7B3F: ;
    xmm4 = MEMF(esi + 0x30); /* movss */
    xmm3 = MEMF(esi + 0x2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0xCC); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xC4); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm4 = MEMF(esi + 0x24); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(esi + 0x28); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0xC8); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x30); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    if ((xmm7 <= xmm2)) goto loc_003C7C7E; /* jbe: below or equal (unsigned <=) */

loc_003C7C04: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_003C7C7E; /* jb: below (unsigned <) */

loc_003C7C09: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x28) = edx;
    xmm2 = xmm6; /* movaps */
    /* FPU: fdivr dword ptr [esp + 0xc] */
    xmm2 = xmm2 * MEMF(esp + 0x14); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C7C7E; /* jbe: below or equal (unsigned <=) */

loc_003C7C5A: ;
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * MEMF(esp + 0x18); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 < xmm7)) goto loc_003C7C7E; /* jb: below (unsigned <) */

loc_003C7C6D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_003C7A4F; /* ja: above (unsigned >) */

loc_003C7C7E: ;
    xmm5 = MEMF(esp + 0xBC); /* movss */

loc_003C7C87: ;
    edi++;
    eax = eax + 0x78;
    if (CMP_L(edi, ebx)) goto loc_003C78C4; /* jl: less (signed <) */

loc_003C7C93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
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
 * sub_003C7CB0
 * Original: 0x003C7CB0 - 0x003C7CE1 (49 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7CB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C7CB0: ;
    eax = MEM32(0x802324);
    if (CMP_LE(eax & eax, 0)) goto loc_003C7CE0; /* jle: less or equal (signed <=) */

loc_003C7CB9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    esi = eax;
    /* nop */

loc_003C7CC0: ;
    eax = MEM32(0x84B4A0);
    ebx = ZX8(MEM8(eax + ecx + 0x15));
    eax = eax + ecx;
    ebx = ebx >> 2;
    if (CMP_NE(ebx, edi)) goto loc_003C7CD8; /* jne: not equal / not zero */

loc_003C7CD3: ;
    MEM32(edx) = eax;
    edx = edx + 4;

loc_003C7CD8: ;
    ecx = ecx + 0x78;
    esi--;
    if ((esi != 0)) goto loc_003C7CC0; /* jne: not equal / not zero */

loc_003C7CDE: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003C7CE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C7CF0
 * Original: 0x003C7CF0 - 0x003C8151 (1121 bytes, 273 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C7CF0(void)
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

loc_003C7CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x704;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_003C7D08: ;
    xmm0 = (float)(int32_t)MEM32(ebp + 0x14); /* cvtsi2ss */
    ebx = MEM32(0x802324);
    xmm1 = (float)(int32_t)MEM32(ebp + 0x10); /* cvtsi2ss */
    xmm2 = (float)(int32_t)MEM32(ebp + 0x18); /* cvtsi2ss */
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm5 = xmm0; /* movaps */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm5; /* movss */
    MEMF(esp + 0xC0) = xmm2; /* movss */
    MEMF(esp + 0x2D4) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm1; /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0xCC) = xmm2; /* movss */
    if (CMP_LE(ebx & ebx, 0)) goto loc_003C8148; /* jle: less or equal (signed <=) */

loc_003C7D69: ;
    edi = 0; /* xor self */
    goto loc_003C7D70;

    /* nop */

loc_003C7D70: ;
    ecx = MEM32(0x84B4A0);
    esi = edi + ecx;
    SET_LO8(ecx, MEM8(esi + 0x14));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003C813C; /* jne: not equal / not zero */

loc_003C7D84: ;
    edx = ZX8(MEM8(esi + 0x15));
    ecx = MEM32(ebp + 8);
    edx = edx >> 2;
    if (CMP_NE(edx, ecx)) goto loc_003C813C; /* jne: not equal / not zero */

loc_003C7D96: ;
    ecx = ZX8(MEM8(esi + 0x17));
    if (CMP_NE(ecx, MEM32(ebp + 0xC))) goto loc_003C813C; /* jne: not equal / not zero */

loc_003C7DA3: ;
    if (TEST_Z(esi, esi)) goto loc_003C813C; /* je: equal / zero */

loc_003C7DAB: ;
    if (CMP_EQ(MEM8(esi + 0x14), 1)) goto loc_003C813C; /* je: equal / zero */

loc_003C7DB5: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm0 = MEMF(esp + 0xB8); /* movss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    (void)0; /* test MEM8(esi + 0x16), 1 - flags set for next jcc */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0xC0); /* movss */
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    if (TEST_Z(MEM8(esi + 0x16), 1)) goto loc_003C7E1C; /* je: equal / zero */

loc_003C7DFF: ;
    xmm4 = MEMF(0x648D1C); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - MEMF(esp + 0x2D4); /* subss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 < xmm3)) goto loc_003C813C; /* jb: below (unsigned <) */

loc_003C7E1C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_003C813C; /* ja: above (unsigned >) */

loc_003C7E2D: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C8154); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C7E34u) goto loc_003C7E34;
    if (_jt == 0x003C7F10u) goto loc_003C7F10;
    if (_jt == 0x003C7F41u) goto loc_003C7F41;
    if (_jt == 0x003C7FF4u) goto loc_003C7FF4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C7E34: ;
    xmm4 = MEMF(esi + 0xC); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_003C7E50; /* ja: above (unsigned >) */

loc_003C7E46: ;
    xmm4 = MEMF(esi + 0x10); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_003C7EA9; /* jbe: below or equal (unsigned <=) */

loc_003C7E50: ;
    xmm4 = MEMF(esi + 0x30); /* movss */
    xmm6 = MEMF(esi + 0x2C); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(esi + 0x28); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm6 = MEMF(esi + 0x24); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm0 = xmm7; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm1 = xmm3; /* movaps */

loc_003C7EA9: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x24)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x1C))) goto loc_003C813C; /* jbe: below or equal (unsigned <=) */

loc_003C7EE0: ;
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x648CF8))) goto loc_003C813C; /* jbe: below or equal (unsigned <=) */

loc_003C7EED: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003C813C; /* jbe: below or equal (unsigned <=) */

loc_003C7EFE: ;
    ecx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003C7F10: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C7F2C: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    esp = esp + 4;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003C7EFE; /* ja: above (unsigned >) */

loc_003C7F3C: ;
    goto loc_003C813C;

loc_003C7F41: ;
    xmm6 = MEMF(esi + 0x2C); /* movss */
    xmm3 = MEMF(esi + 0x30); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm4 = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 <= xmm4)) goto loc_003C813C; /* jbe: below or equal (unsigned <=) */

loc_003C7F6E: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_003C813C; /* jbe: below or equal (unsigned <=) */

loc_003C7F7D: ;
    xmm4 = MEMF(esi + 0x24); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esi + 0x28); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_003C813C; /* jbe: below or equal (unsigned <=) */

loc_003C7FB6: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_003C813C; /* jbe: below or equal (unsigned <=) */

loc_003C7FC5: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C813C; /* jbe: below or equal (unsigned <=) */

loc_003C7FE2: ;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 > MEMF(0x648CF8))) goto loc_003C7EFE; /* ja: above (unsigned >) */

loc_003C7FEF: ;
    goto loc_003C813C;

loc_003C7FF4: ;
    xmm4 = MEMF(esi + 0x30); /* movss */
    xmm3 = MEMF(esi + 0x2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0xCC); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xC4); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm4 = MEMF(esi + 0x24); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(esi + 0x28); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0xC8); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x30); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    if ((xmm7 <= xmm2)) goto loc_003C8133; /* jbe: below or equal (unsigned <=) */

loc_003C80B9: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_003C8133; /* jb: below (unsigned <) */

loc_003C80BE: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x28) = edx;
    xmm2 = xmm6; /* movaps */
    /* FPU: fdivr dword ptr [esp + 0xc] */
    xmm2 = xmm2 * MEMF(esp + 0x14); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C8133; /* jbe: below or equal (unsigned <=) */

loc_003C810F: ;
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * MEMF(esp + 0x18); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 < xmm7)) goto loc_003C8133; /* jb: below (unsigned <) */

loc_003C8122: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_003C7EFE; /* ja: above (unsigned >) */

loc_003C8133: ;
    xmm5 = MEMF(esp + 0xBC); /* movss */

loc_003C813C: ;
    eax++;
    edi = edi + 0x78;
    if (CMP_L(eax, ebx)) goto loc_003C7D70; /* jl: less (signed <) */

loc_003C8148: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
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
 * sub_003C8170
 * Original: 0x003C8170 - 0x003C8509 (921 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8170(void)
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

loc_003C8170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x700;
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_003C8185: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm1 = (float)(int32_t)MEM32(ebp + 0xC); /* cvtsi2ss */
    xmm3 = (float)(int32_t)MEM32(ebp + 8); /* cvtsi2ss */
    xmm0 = (float)(int32_t)MEM32(ebp + 0x10); /* cvtsi2ss */
    xmm2 = xmm1; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm4 = xmm3; /* movaps */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    if (TEST_Z(esi, esi)) goto loc_003C8503; /* je: equal / zero */

loc_003C81B1: ;
    SET_LO8(ecx, MEM8(esi + 0x14));
    eax = 1;
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_003C8503; /* je: equal / zero */

loc_003C81C1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 4);
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm6; /* subss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    (void)0; /* test MEM8(esi + 0x16), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm6; /* movss */
    xmm5 = xmm5 - xmm6; /* subss */
    if (TEST_Z(MEM8(esi + 0x16), LO8(eax))) goto loc_003C8219; /* je: equal / zero */

loc_003C8204: ;
    xmm6 = MEMF(0x648D1C); /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    /* comiss xmm6, xmm2 - sets EFLAGS */
    if ((xmm6 < xmm2)) goto loc_003C8503; /* jb: below (unsigned <) */

loc_003C8219: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_003C8503; /* ja: above (unsigned >) */

loc_003C822A: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C850C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C8231u) goto loc_003C8231;
    if (_jt == 0x003C82FAu) goto loc_003C82FA;
    if (_jt == 0x003C8329u) goto loc_003C8329;
    if (_jt == 0x003C83D9u) goto loc_003C83D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C8231: ;
    xmm2 = MEMF(esi + 0xC); /* movss */
    xmm0 = MEMF(0x648E54); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_003C824D; /* ja: above (unsigned >) */

loc_003C8243: ;
    xmm2 = MEMF(esi + 0x10); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_003C82A6; /* jbe: below or equal (unsigned <=) */

loc_003C824D: ;
    xmm2 = MEMF(esi + 0x30); /* movss */
    xmm4 = MEMF(esi + 0x2C); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(esi + 0x28); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm4 = MEMF(esi + 0x24); /* movss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm3 = xmm6; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm1 = xmm0; /* movaps */

loc_003C82A6: ;
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0xC))) goto loc_003C8503; /* jbe: below or equal (unsigned <=) */

loc_003C82DD: ;
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x648CF8))) goto loc_003C8503; /* jbe: below or equal (unsigned <=) */

loc_003C82EA: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    goto loc_003C8501;

loc_003C82FA: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C8316: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    esp = esp + 4;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    goto loc_003C8501;

loc_003C8329: ;
    xmm2 = MEMF(esi + 0x30); /* movss */
    xmm6 = MEMF(esi + 0x2C); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm0 = xmm3; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    if ((xmm3 <= xmm4)) goto loc_003C8503; /* jbe: below or equal (unsigned <=) */

loc_003C8359: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_003C8503; /* jbe: below or equal (unsigned <=) */

loc_003C8368: ;
    xmm4 = MEMF(esi + 0x24); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    xmm3 = MEMF(esi + 0x28); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_003C8503; /* jbe: below or equal (unsigned <=) */

loc_003C83A1: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003C8503; /* jbe: below or equal (unsigned <=) */

loc_003C83B0: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C8503; /* jbe: below or equal (unsigned <=) */

loc_003C83CD: ;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    goto loc_003C8501;

loc_003C83D9: ;
    xmm1 = MEMF(esi + 0x2C); /* movss */
    xmm2 = MEMF(esi + 0x30); /* movss */
    xmm4 = xmm4 - MEMF(esp + 0x10); /* subss */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm5 = MEMF(esi + 0x28); /* movss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0xB8); /* movss */
    xmm6 = xmm6 - MEMF(esp + 0x1C); /* subss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = MEMF(esi + 0x24); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm1 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if ((xmm7 <= xmm1)) goto loc_003C8503; /* jbe: below or equal (unsigned <=) */

loc_003C848D: ;
    /* comiss xmm2, xmm7 - sets EFLAGS */
    if ((xmm2 < xmm7)) goto loc_003C8503; /* jb: below (unsigned <) */

loc_003C8492: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    /* FPU: fdivr dword ptr [esp + 0xc] */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm6 = xmm6 + xmm0; /* addss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x14) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C8503; /* jbe: below or equal (unsigned <=) */

loc_003C84E3: ;
    xmm3 = xmm3 - xmm6; /* subss */
    xmm3 = xmm3 * MEMF(esp + 0xC); /* mulss */
    xmm3 = xmm3 + xmm6; /* addss */
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_003C8503; /* jb: below (unsigned <) */

loc_003C84F6: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm3 - sets EFLAGS */

loc_003C8501: ;
    if ((xmm0 > xmm3)) goto loc_003C8505; /* ja: above (unsigned >) */

loc_003C8503: ;
    eax = 0; /* xor self */

loc_003C8505: ;
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
 * sub_003C8520
 * Original: 0x003C8520 - 0x003C8565 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8520(void)
{

loc_003C8520: ;
    ecx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    edx = ZX8(MEM8(eax + ecx + 0x17));
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    edx = MEM32(0x84B4A0);
    ecx = MEM32(eax + edx + 0x18);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    ecx = MEM32(0x84B4A0);
    edx = MEM32(eax + ecx + 0x1C);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(0x84B4A0);
    eax = MEM32(eax + edx + 0x20);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003C8570
 * Original: 0x003C8570 - 0x003C85D9 (105 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8570(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C8570: ;
    SET_LO8(ecx, MEM8(esp + 4));
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), 1)) goto loc_003C8590; /* je: equal / zero */

loc_003C857B: ;
    esi = MEM32(0x84B4A0);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    MEM8(edx + esi + 0x17) = LO8(ebx);
    POP32(esp, ebx);

loc_003C8590: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_003C85A8; /* je: equal / zero */

loc_003C8595: ;
    esi = MEM32(0x84B4A0);
    edi = MEM32(esp + 0x14);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    MEM32(edx + esi + 0x18) = edi;

loc_003C85A8: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_003C85C0; /* je: equal / zero */

loc_003C85AD: ;
    esi = MEM32(0x84B4A0);
    edi = MEM32(esp + 0x18);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    MEM32(edx + esi + 0x1C) = edi;

loc_003C85C0: ;
    (void)0; /* test LO8(ecx), 8 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(LO8(ecx), 8)) goto loc_003C85D8; /* je: equal / zero */

loc_003C85C7: ;
    ecx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    edx = MEM32(esp + 0x14);
    MEM32(eax + ecx + 0x20) = edx;

loc_003C85D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C85E0
 * Original: 0x003C85E0 - 0x003C860E (46 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C85E0(void)
{

loc_003C85E0: ;
    ecx = MEM32(0x84B4A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    MEM16(eax + ecx) = LO16(edx);
    ecx = MEM32(0x84B4A0);
    SET_LO16(edx, MEM16(esp + 4));
    MEM16(eax + ecx + 2) = LO16(edx);
    ecx = MEM32(0x84B4A0);
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(eax + ecx + 4) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C8610
 * Original: 0x003C8610 - 0x003C8A28 (1048 bytes, 257 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8610(void)
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

loc_003C8610: ;
    esp = esp - 0x38;
    xmm5 = MEMF(ecx + 0x2C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    xmm2 = MEMF(esi + 4); /* movss */
    xmm4 = MEMF(esi + 8); /* movss */
    xmm1 = MEMF(esi); /* movss */
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ecx);
    xmm6 = (float)(int32_t)edi; /* cvtsi2ss */
    edi = (uint32_t)(int32_t)SMEM16(ecx + 2);
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    edi = (uint32_t)(int32_t)SMEM16(ecx + 4);
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm7 = xmm5; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm4 = xmm4 - xmm0; /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x30); /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(ecx + 0x24); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = MEMF(ecx + 0x28); /* movss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = xmm5; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = MEMF(eax); /* movss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(eax + 4); /* movss */
    xmm5 = xmm5 - MEMF(esp + 0x44); /* subss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm6 = MEMF(eax + 8); /* movss */
    xmm6 = xmm6 - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x30); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    xmm7 = MEMF(ecx + 0x2C); /* movss */
    MEMF(esp + 0x44) = xmm7; /* movss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm6 = MEMF(esp + 0x44); /* movss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + 0x24); /* movss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm6 = MEMF(ecx + 0x28); /* movss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm7 = xmm1; /* movaps */
    MEMF(esp + 0x44) = xmm7; /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm7 = xmm2; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x44); /* mulss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm5 = MEMF(esp + 0x2C); /* movss */
    xmm2 = xmm2 + xmm6; /* addss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm7 = xmm2; /* movaps */
    xmm2 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm7, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm1 - xmm4; /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if (1 /* jnp after test - parity */) goto loc_003C89FD; /* jnp: not parity */

loc_003C875F: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 8);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm7; /* divss */
    xmm6 = xmm2; /* movaps */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6 = xmm6 - xmm5; /* subss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    MEMF(esp + 8) = xmm6; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if ((xmm6 <= xmm1)) goto loc_003C87AC; /* jbe: below or equal (unsigned <=) */

loc_003C8797: ;
    xmm0 = xmm6; /* movaps */
    xmm6 = xmm1; /* movaps */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 8) = xmm6; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */

loc_003C87AC: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) { sub_003C8A28(); return; } /* ja: above (unsigned >) */

loc_003C87B5: ;
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 > xmm0)) { sub_003C8A28(); return; } /* ja: above (unsigned >) */

loc_003C87C6: ;
    /* comiss xmm2, xmm6 - sets EFLAGS */
    if ((xmm2 <= xmm6)) goto loc_003C87D1; /* jbe: below or equal (unsigned <=) */

loc_003C87CB: ;
    MEMF(esp + 8) = xmm2; /* movss */

loc_003C87D1: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm1 = MEMF(esp + 0x18); /* movss */
    if ((xmm1 <= xmm0)) goto loc_003C87E2; /* jbe: below or equal (unsigned <=) */

loc_003C87DC: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_003C87E2: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_003C87E8: ;
    xmm5 = xmm1; /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    /* ucomiss xmm5, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x44) = xmm5; /* movss */
    if (1 /* jnp after test - parity */) { sub_003C8A28(); return; } /* jnp: not parity */

loc_003C880D: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    xmm5 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * MEMF(0x648D18); /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x44) = xmm0; /* movss */
    if ((xmm2 > xmm0)) { sub_003C8A28(); return; } /* ja: above (unsigned >) */

loc_003C8873: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    xmm1 = MEMF(0x648D10); /* movss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    xmm1 = xmm1 / xmm6; /* divss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 - xmm5; /* subss */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm6 = xmm6 - MEMF(esp + 0x44); /* subss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_003C88B6; /* jbe: below or equal (unsigned <=) */

loc_003C88AD: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm6; /* movaps */
    xmm6 = xmm1; /* movaps */

loc_003C88B6: ;
    /* comiss xmm2, xmm6 - sets EFLAGS */
    if ((xmm2 > xmm6)) { sub_003C8A28(); return; } /* ja: above (unsigned >) */

loc_003C88BF: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) { sub_003C8A28(); return; } /* ja: above (unsigned >) */

loc_003C88D0: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_003C88D8; /* jbe: below or equal (unsigned <=) */

loc_003C88D5: ;
    xmm0 = xmm2; /* movaps */

loc_003C88D8: ;
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_003C88E0; /* jbe: below or equal (unsigned <=) */

loc_003C88DD: ;
    xmm6 = xmm1; /* movaps */

loc_003C88E0: ;
    xmm1 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm6 - sets EFLAGS */
    if ((xmm1 > xmm6)) { sub_003C8A28(); return; } /* ja: above (unsigned >) */

loc_003C88EF: ;
    /* comiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0xC))) { sub_003C8A28(); return; } /* ja: above (unsigned >) */

loc_003C88FA: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm6 = xmm1; /* movaps */
    if ((xmm1 > xmm0)) goto loc_003C8905; /* ja: above (unsigned >) */

loc_003C8902: ;
    xmm6 = xmm0; /* movaps */

loc_003C8905: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    xmm5 = xmm6; /* movaps */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm5 = xmm5 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    fp_top() = -fp_top(); /* fchs */
    /* fld st(0) */
    xmm0 = xmm0 * xmm7; /* mulss */
    /* FPU: fsin  */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm6 = xmm6 + xmm4; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm3 = xmm6; /* movaps */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    /* FPU: fcos  */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(edx + 4) = xmm0; /* movss */
    xmm3 = xmm3 - xmm4; /* subss */
    MEMF(edx + 8) = xmm3; /* movss */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm3; /* movaps */
    fp_top() = -fp_top(); /* fchs */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm5 = xmm5 * MEMF(esp + 0x3C); /* mulss */
    /* FPU: fcos  */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 + xmm5; /* addss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx + 8) = xmm0; /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(edx); /* addss */
    MEMF(edx) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 2);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(edx + 4); /* addss */
    MEMF(edx + 4) = xmm1; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(edx + 8) = xmm1; /* movss */
    eax = 1;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_003C89FD: ;
    /* comiss xmm2, xmm5 - sets EFLAGS */
    if ((xmm2 > xmm5)) { sub_003C8A28(); return; } /* ja: above (unsigned >) */

loc_003C8A02: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 8);
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm5, xmm6 - sets EFLAGS */
    if ((xmm5 > xmm6)) { sub_003C8A28(); return; } /* ja: above (unsigned >) */

loc_003C8A0F: ;
    xmm5 = MEMF(0x648D14); /* movss */
    MEMF(esp + 8) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    goto loc_003C87E8;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003C8A30
 * Original: 0x003C8A30 - 0x003C8A56 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C8A30: ;
    edx = MEM32(0x802324);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(edx & edx, 0)) goto loc_003C8A52; /* jbe: below or equal (unsigned <=) */

loc_003C8A3D: ;
    edi = MEM32(0x84B4A0);
    ecx = edi + 0x34;

loc_003C8A46: ;
    if (CMP_EQ(MEM32(ecx), esi)) { sub_003C8A56(); return; } /* je: equal / zero */

loc_003C8A4A: ;
    eax++;
    ecx = ecx + 0x78;
    if (CMP_B(eax, edx)) goto loc_003C8A46; /* jb: below (unsigned <) */

loc_003C8A52: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003C8A60
 * Original: 0x003C8A60 - 0x003C8CB7 (599 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C8A60: ;
    eax = ZX8(MEM8(eax + 0x15));
    esp = esp - 0xC;
    eax = eax & 3;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_A(eax, 3)) goto loc_003C8CB2; /* ja: above (unsigned >) */

loc_003C8A78: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3C8CB8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C8A7Fu) goto loc_003C8A7F;
    if (_jt == 0x003C8B4Bu) goto loc_003C8B4B;
    if (_jt == 0x003C8C2Fu) goto loc_003C8C2F;
    if (_jt == 0x003C8C80u) goto loc_003C8C80;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C8A7F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8A84: ;
    xmm6 = MEMF(0x648CE0); /* movss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm5 = xmm5 - xmm7; /* subss */
    MEMF(esp + 8) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8AAA: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8AB5: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(esi) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(esp + 0xC); /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(esi + 4) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 8) = xmm5; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C8CB2; /* jbe: below or equal (unsigned <=) */

loc_003C8AFD: ;
    /* nop */

loc_003C8B00: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8B05: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(esi) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8B16: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(esi + 8) = xmm0; /* movss */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_push(MEMF(0x648D14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003C8B00; /* ja: above (unsigned >) */

loc_003C8B46: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003C8B4B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8B50: ;
    xmm7 = MEMF(0x648CE0); /* movss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8B70: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8B83: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */

loc_003C8B9A: ;
    MEMF(esi + 8) = xmm5; /* movss */
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
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C8CB2; /* jbe: below or equal (unsigned <=) */

loc_003C8BE4: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8BE9: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8BF9: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 - MEMF(0x648D14); /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8C0D: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    MEMF(esi + 4) = xmm6; /* movss */
    xmm6 = MEMF(0x648D14); /* movss */
    MEMF(esi) = xmm0; /* movss */
    goto loc_003C8B9A;

loc_003C8C2F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8C34: ;
    xmm7 = MEMF(0x648CE0); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - xmm0; /* subss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8C54: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8C5F: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esi) = xmm5; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 8) = xmm6; /* movss */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003C8C80: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8C85: ;
    xmm5 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8C8D: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi) = xmm1; /* movss */
    MEMF(esi + 4) = xmm5; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */

loc_003C8CB2: ;
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
 * sub_003C8CD0
 * Original: 0x003C8CD0 - 0x003C8D74 (164 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8CD0(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm5;

loc_003C8CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm1 = MEMF(eax + 0x10); /* movss */
    esp = esp - 0xC;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0);
    esp = esp - 0x10;
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = esp + 0x20;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_003C8D5C: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x24;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003C8D70: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003C8D80
 * Original: 0x003C8D80 - 0x003C8F42 (450 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8D80(void)
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

loc_003C8D80: ;
    esp = esp - 8;
    eax = eax - 0;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if ((eax == 0)) goto loc_003C8EF3; /* je: equal / zero */

loc_003C8D91: ;
    eax--;
    if ((eax != 0)) goto loc_003C8EFE; /* jne: not equal / not zero */

loc_003C8D98: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8D9D: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8DB0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x15));
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    eax = eax & 3;
    if (CMP_A(eax, 3)) goto loc_003C8EFE; /* ja: above (unsigned >) */

loc_003C8DCE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3C8F44); /* switch: 4 entries, 3 targets */
    if (_jt == 0x003C8DD5u) goto loc_003C8DD5;
    if (_jt == 0x003C8DFDu) goto loc_003C8DFD;
    if (_jt == 0x003C8ED3u) goto loc_003C8ED3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C8DD5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8DDA: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fcos  */
    MEMF(esi + 4) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_003C8EFE;

loc_003C8DFD: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8E02: ;
    xmm6 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8E0A: ;
    xmm5 = MEMF(0x648D14); /* movss */
    xmm7 = MEMF(0x648CE0); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    MEMF(esi) = xmm0; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 8)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8E51: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esi); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 8)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8E9F: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm1 = xmm6; /* movaps */
    PUSH32(esp, esi);
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm5; /* movaps */
    PUSH32(esp, esi);
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_003C8ECE: ;
    esp = esp + 8;
    goto loc_003C8EFE;

loc_003C8ED3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003C8ED8: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fcos  */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 8) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_003C8EFE;

loc_003C8EF3: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003C8A60(); /* call 0x003C8A60 */

loc_003C8EFB: ;
    esp = esp + 4;

loc_003C8EFE: ;
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
    MEMF(esp + 8) = xmm1; /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003C8CD0(); /* call 0x003C8CD0 */

loc_003C8F34: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    esp = esp + 8;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003C8F60
 * Original: 0x003C8F60 - 0x003C9476 (1302 bytes, 370 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C8F60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x69CF90);
    esp = esp - 0x130;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_003C946E; /* je: equal / zero */

loc_003C8F7C: ;
    ecx = MEM32(0x8471EC);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM8(0x806928) = 0;
    if (CMP_NE(ecx, edi)) goto loc_003C8F97; /* jne: not equal / not zero */

loc_003C8F8D: ;
    MEM32(0x84B4A0) = edi;
    ecx = 0; /* xor self */
    goto loc_003C8FA3;

loc_003C8F97: ;
    edx = MEM32(ecx + 0x20);
    MEM32(0x84B4A0) = edx;
    ecx = MEM32(ecx + 0x1C);

loc_003C8FA3: ;
    MEM32(0x802324) = ecx;
    PUSH32(esp, 0); sub_00064070(); /* call 0x00064070 */

loc_003C8FAE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 9);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_003C8FBF: ;
    esp = esp + 0xC;
    eax = esp + 0x20;
    MEM32(esp + 0x130) = 9;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_003C8FE2: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_003C8FFE; /* jl: less (signed <) */

loc_003C8FF0: ;
    if (CMP_G(eax, 0x3E5)) goto loc_003C8FFE; /* jg: greater (signed >) */

loc_003C8FF7: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_003C8FFC: ;
    goto loc_003C8FE2;

loc_003C8FFE: ;
    eax = MEM32(ecx + 4);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (CMP_EQ(eax, edi)) goto loc_003C901F; /* je: equal / zero */

loc_003C9008: ;
    eax = MEM32(esp + 0x34);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x84B4B8) = edi;
    if (CMP_NE(eax, edi)) goto loc_003C90D4; /* jne: not equal / not zero */

loc_003C901A: ;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

loc_003C901F: ;
    edx = MEM32(ecx + 0x18);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    eax = ecx + 0x18;
    if (CMP_EQ(edx, edi)) goto loc_003C902D; /* je: equal / zero */

loc_003C9029: ;
    MEM16(ecx + 0x2C) = MEM16(ecx + 0x2C) + 1;

loc_003C902D: ;
    eax = MEM32(eax);
    MEM32(0x84B4B8) = eax;
    ebp = MEM32(eax);
    if (CMP_EQ(ebp, edi)) goto loc_003C90E9; /* je: equal / zero */

loc_003C903E: ;
    eax = MEM32(0x802324);
    esi = MEM32(0x84B4A0);
    eax = eax + ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x6453B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_003C905D: ;
    esp = esp + 0x10;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x84B4A0) = eax;
    if (CMP_NE(eax, edi)) goto loc_003C9081; /* jne: not equal / not zero */

loc_003C9069: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_003C9079: ;
    eax = MEM32(0x84B4A0);
    esp = esp + 0xC;

loc_003C9081: ;
    ebx = MEM32(0x802324);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    edi = eax;
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(0x84B4B8);
    esi = MEM32(eax + 4);
    eax = MEM32(0x84B4A0);
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    edi = edx + eax;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    ebx = ebx + ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(0x802324) = ebx;
    MEM8(0x806928) = 1;
    edi = 0; /* xor self */
    goto loc_003C90EF;

loc_003C90D4: ;
    eax = MEM32(eax + 0x44);
    MEM8(eax + 0x124) = 1;
    MEM32(0x847164) = eax;
    MEM32(0x84B4B8) = edi;

loc_003C90E9: ;
    ebx = MEM32(0x802324);

loc_003C90EF: ;
    if (CMP_EQ(ebx, edi)) goto loc_003C9150; /* je: equal / zero */

loc_003C90F3: ;
    ebx = ebx << 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003C90FC: ;
    ebp = eax;
    esp = esp + 4;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    MEM32(0x84B4A4) = ebp;
    if (CMP_NE(ebp, edi)) goto loc_003C9124; /* jne: not equal / not zero */

loc_003C910B: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_003C911B: ;
    ebp = MEM32(0x84B4A4);
    esp = esp + 0xC;

loc_003C9124: ;
    ebx = MEM32(0x802324);
    if (CMP_EQ(ebx, edi)) goto loc_003C9171; /* je: equal / zero */

loc_003C912E: ;
    if (CMP_NE(MEM32(0x84B4A0), edi)) goto loc_003C9156; /* jne: not equal / not zero */

loc_003C9136: ;
    ecx = esp + 0x2C;
    MEM32(0x802324) = edi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_003C9145: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = esp + 0x130;
    esp += 4; return; /* ret */

loc_003C9150: ;
    ebp = MEM32(0x84B4A4);

loc_003C9156: ;
    if (CMP_BE(ebx, edi)) goto loc_003C9171; /* jbe: below or equal (unsigned <=) */

loc_003C915A: ;
    eax = 0; /* xor self */
    ecx = ebx;
    edi = edi;

loc_003C9160: ;
    edx = MEM32(0x84B4A0);
    MEM8(eax + edx + 0x16) = MEM8(eax + edx + 0x16) | 2;
    eax = eax + 0x78;
    ecx--;
    if ((ecx != 0)) goto loc_003C9160; /* jne: not equal / not zero */

loc_003C9171: ;
    eax = MEM32(0x84B4A0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003C9480(); /* call 0x003C9480 */

loc_003C917D: ;
    esp = esp + 8;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEM32(0x802320) = edi;
    MEM32(0x84B4A8) = edi;
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(ebx, edi)) goto loc_003C9331; /* jle: less or equal (signed <=) */

loc_003C9198: ;
    eax = MEM32(0x84B4A0);
    esi = 0; /* xor self */
    /* nop */

loc_003C91A0: ;
    SET_LO8(edx, MEM8(esi + eax + 0x15));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    if (CMP_NE(LO8(ecx), 4)) goto loc_003C91C6; /* jne: not equal / not zero */

loc_003C91AE: ;
    SET_LO8(ecx, MEM8(esi + eax + 0x17));
    if (CMP_EQ(LO8(ecx), 2)) goto loc_003C91C0; /* je: equal / zero */

loc_003C91B7: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003C91C0; /* je: equal / zero */

loc_003C91BB: ;
    if (CMP_NE(LO8(ecx), 6)) goto loc_003C91C6; /* jne: not equal / not zero */

loc_003C91C0: ;
    MEM32(0x802320) = MEM32(0x802320) + 1;

loc_003C91C6: ;
    ecx = ZX8(LO8(edx));
    ecx = ecx >> 2;
    ecx = ecx - 2;
    if ((ecx == 0)) goto loc_003C92A4; /* je: equal / zero */

loc_003C91D5: ;
    ecx = ecx - 5;
    if ((ecx == 0)) goto loc_003C92A4; /* je: equal / zero */

loc_003C91DE: ;
    ecx = ecx - 0x18;
    if ((ecx != 0)) goto loc_003C92B1; /* jne: not equal / not zero */

loc_003C91E7: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(edi + ebp) = eax;
    MEM32(edi + ebp + 4) = eax;
    MEM32(edi + ebp + 8) = eax;
    MEM8(edi + ebp + 0xC) = 0;
    eax = MEM32(0x84B4A0);
    ecx = ZX8(MEM8(esi + eax + 0x17));
    ecx = ecx - 2;
    if ((ecx == 0)) goto loc_003C924F; /* je: equal / zero */

loc_003C9209: ;
    ecx--;
    if ((ecx != 0)) goto loc_003C92B1; /* jne: not equal / not zero */

loc_003C9210: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + eax);
    ecx = (uint32_t)(int32_t)SMEM16(esi + eax + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + eax + 4);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esi + eax + 0x1C);
    eax = MEM32(esi + eax + 0x18);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, eax);
    goto loc_003C928C;

loc_003C924F: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + eax);
    edx = (uint32_t)(int32_t)SMEM16(esi + eax + 2);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + eax + 4);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esi + eax + 0x18);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esi + eax + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, edx);

loc_003C928C: ;
    eax = MEM32(0x847024);
    PUSH32(esp, 0); sub_00018950(); /* call 0x00018950 */

loc_003C9296: ;
    ebx = MEM32(0x802324);
    ebp = MEM32(0x84B4A4);
    goto loc_003C92AC;

loc_003C92A4: ;
    MEM32(esi + eax + 0x20) = 0;

loc_003C92AC: ;
    eax = MEM32(0x84B4A0);

loc_003C92B1: ;
    ecx = MEM32(esp + 0x10);
    ecx++;
    edi = edi + 0x10;
    esi = esi + 0x78;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, ebx)) goto loc_003C91A0; /* jl: less (signed <) */

loc_003C92C8: ;
    eax = MEM32(0x802320);
    if (TEST_Z(eax, eax)) goto loc_003C9331; /* je: equal / zero */

loc_003C92D1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xD4);
    eax = eax << 2;
    PUSH32(esp, 0x6453B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_003C92E6: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84B4A8) = eax;
    if (TEST_Z(eax, eax)) goto loc_003C9331; /* je: equal / zero */

loc_003C92F2: ;
    esi = eax;
    eax = MEM32(0x802324);
    if (CMP_LE(eax & eax, 0)) goto loc_003C9331; /* jle: less or equal (signed <=) */

loc_003C92FD: ;
    edx = 0; /* xor self */
    edi = eax;

loc_003C9301: ;
    ecx = MEM32(0x84B4A0);
    eax = ecx + edx;
    SET_LO8(ecx, MEM8(eax + 0x15));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    if (CMP_NE(LO8(ecx), 4)) goto loc_003C932B; /* jne: not equal / not zero */

loc_003C9315: ;
    SET_LO8(ecx, MEM8(eax + 0x17));
    if (CMP_EQ(LO8(ecx), 2)) goto loc_003C9326; /* je: equal / zero */

loc_003C931D: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003C9326; /* je: equal / zero */

loc_003C9321: ;
    if (CMP_NE(LO8(ecx), 6)) goto loc_003C932B; /* jne: not equal / not zero */

loc_003C9326: ;
    MEM32(esi) = eax;
    esi = esi + 4;

loc_003C932B: ;
    edx = edx + 0x78;
    edi--;
    if ((edi != 0)) goto loc_003C9301; /* jne: not equal / not zero */

loc_003C9331: ;
    edx = 0; /* xor self */
    MEM32(0x802300) = edx;
    MEM32(0x802304) = edx;
    MEM32(0x802308) = edx;
    MEM32(0x80230C) = edx;
    MEM32(0x802310) = edx;
    eax = 0; /* xor self */
    MEM32(0x802314) = edx;
    ecx = 0xA0;
    edi = 0x802080;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(0x76FE00);
    MEM32(0x802318) = edx;
    MEM32(0x80231C) = edx;
    PUSH32(esp, 0); sub_003CB550(); /* call 0x003CB550 */

loc_003C937B: ;
    eax = MEM32(esp + 0x144);
    PUSH32(esp, 0); sub_003C9EC0(); /* call 0x003C9EC0 */

loc_003C9387: ;
    ecx = MEM32(esp + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_003C93CB; /* je: equal / zero */

loc_003C938F: ;
    esi = ecx;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_003C9396: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003C939C: ;
    if (TEST_NZ(eax, eax)) goto loc_003C93C3; /* jne: not equal / not zero */

loc_003C93A0: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_003C93C0: ;
    esp = esp + 4;

loc_003C93C3: ;
    MEM32(esp + 0x2C) = 0;

loc_003C93CB: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_003C946B; /* je: equal / zero */

loc_003C93D7: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) - 1;
    eax = MEM32(esp + 0x30);
    if (CMP_NE(MEM16(eax + 0x2C), 0)) goto loc_003C946B; /* jne: not equal / not zero */

loc_003C93EA: ;
    ebp = eax + 4;
    ebx = eax;
    eax = MEM32(ebp);
    if (CMP_L(eax, 0x3E4)) goto loc_003C9441; /* jl: less (signed <) */

loc_003C93F9: ;
    if (CMP_G(eax, 0x3E5)) goto loc_003C9441; /* jg: greater (signed >) */

loc_003C9400: ;
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_003C9405: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_003C9441; /* je: equal / zero */

loc_003C940B: ;
    esi = ebx;
    PUSH32(esp, 0); sub_000626D0(); /* call 0x000626D0 */

loc_003C9412: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_003C9441; /* je: equal / zero */

loc_003C9418: ;
    eax = MEM32(esi + 0x830);
    if (TEST_Z(eax, eax)) goto loc_003C942C; /* je: equal / zero */

loc_003C9422: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0); sub_001F1490(); /* call 0x001F1490 */

loc_003C942A: ;
    goto loc_003C9441;

loc_003C942C: ;
    edx = ebx;
    PUSH32(esp, 0); sub_00062720(); /* call 0x00062720 */

loc_003C9433: ;
    eax = esi;
    ecx = 0x3E3;
    esi = edi;
    PUSH32(esp, 0); sub_00062690(); /* call 0x00062690 */

loc_003C9441: ;
    if (CMP_NE(MEM32(ebp), 0)) goto loc_003C9451; /* jne: not equal / not zero */

loc_003C9447: ;
    ecx = MEM32(ebx + 0x18);
    eax = ebx;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_003C9451: ;
    PUSH32(esp, 0x84D458);
    eax = ebx;
    PUSH32(esp, 0); sub_00061DD0(); /* call 0x00061DD0 */

loc_003C945D: ;
    edi = MEM32(esp + 0x30);
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_003C946B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003C946E: ;
    POP32(esp, edi);
    esp = esp + 0x130;
    esp += 4; return; /* ret */

}

/**
 * sub_003C9480
 * Original: 0x003C9480 - 0x003C9802 (898 bytes, 259 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9480(void)
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

loc_003C9480: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x1180;
    edi = 0x802328;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x34);
    if (CMP_LE(eax & eax, 0)) goto loc_003C94F2; /* jle: less or equal (signed <=) */

loc_003C949D: ;
    esi = MEM32(esp + 0x30);
    edi = 0x802328;
    esi = esi + 0x24;
    ebp = eax;
    goto loc_003C94B0;

    /* nop */

loc_003C94B0: ;
    fp_push(MEMF(esi + -24)); /* fld float */
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = esi + -36;
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    MEMF(esi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    MEMF(esi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003C9810(); /* call 0x003C9810 */

loc_003C94E2: ;
    esp = esp + 4;
    edi = edi + 0x38;
    esi = esi + 0x78;
    ebp--;
    if ((ebp != 0)) goto loc_003C94B0; /* jne: not equal / not zero */

loc_003C94EE: ;
    eax = MEM32(esp + 0x34);

loc_003C94F2: ;
    ecx = 0; /* xor self */
    MEM32(0x802050) = ecx;
    MEM32(0x802054) = ecx;
    MEM32(0x802058) = ecx;
    MEM32(0x80205C) = ecx;
    MEM32(0x802060) = ecx;
    MEM32(0x802064) = ecx;
    MEM32(0x802068) = ecx;
    MEM32(0x80206C) = ecx;
    MEM32(0x802070) = ecx;
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x802074) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_003C9587; /* jle: less or equal (signed <=) */

loc_003C9536: ;
    ebx = MEM32(esp + 0x30);
    ebx = ebx + 0x16;
    /* nop */

loc_003C9540: ;
    SET_LO8(edx, MEM8(ebx + -1));
    SET_LO8(edx, LO8(edx) & 3);
    if (CMP_EQ(LO8(edx), 3)) goto loc_003C9550; /* je: equal / zero */

loc_003C954B: ;
    if (TEST_Z(MEM8(ebx), 8)) goto loc_003C957F; /* je: equal / zero */

loc_003C9550: ;
    if (TEST_NZ(MEM8(ebx), 4)) goto loc_003C957F; /* jne: not equal / not zero */

loc_003C9555: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax >> 6);
    esi = eax * 8 + 0x802050;
    ecx = edi;
    ecx = ecx & 0x3F;
    eax = 1;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_003C9572: ;
    ecx = MEM32(esi);
    ecx = ecx | eax;
    MEM32(esi + 4) = MEM32(esi + 4) | edx;
    eax = MEM32(esp + 0x34);
    MEM32(esi) = ecx;

loc_003C957F: ;
    edi++;
    ebx = ebx + 0x78;
    if (CMP_L(edi, eax)) goto loc_003C9540; /* jl: less (signed <) */

loc_003C9587: ;
    ecx = 0; /* xor self */
    MEM32(0x802028) = ecx;
    MEM32(0x80202C) = ecx;
    MEM32(0x802030) = ecx;
    MEM32(0x802034) = ecx;
    MEM32(0x802038) = ecx;
    MEM32(0x80203C) = ecx;
    MEM32(0x802040) = ecx;
    MEM32(0x802044) = ecx;
    MEM32(0x802048) = ecx;
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x80204C) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_003C9614; /* jle: less or equal (signed <=) */

loc_003C95CB: ;
    ebx = MEM32(esp + 0x30);
    ebx = ebx + 0x16;

loc_003C95D2: ;
    SET_LO8(edx, MEM8(ebx + -1));
    SET_LO8(edx, LO8(edx) & 3);
    if (CMP_EQ(LO8(edx), 3)) goto loc_003C960C; /* je: equal / zero */

loc_003C95DD: ;
    if (TEST_NZ(MEM8(ebx), 0xC)) goto loc_003C960C; /* jne: not equal / not zero */

loc_003C95E2: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax >> 6);
    esi = eax * 8 + 0x802028;
    ecx = edi;
    ecx = ecx & 0x3F;
    eax = 1;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_003C95FF: ;
    ecx = MEM32(esi);
    ecx = ecx | eax;
    MEM32(esi + 4) = MEM32(esi + 4) | edx;
    eax = MEM32(esp + 0x34);
    MEM32(esi) = ecx;

loc_003C960C: ;
    edi++;
    ebx = ebx + 0x78;
    if (CMP_L(edi, eax)) goto loc_003C95D2; /* jl: less (signed <) */

loc_003C9614: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = 0x802028;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_003C97FA; /* jle: less or equal (signed <=) */

loc_003C9635: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x18) = eax;
    goto loc_003C9640;

    /* nop */

loc_003C9640: ;
    eax = MEM32(esi);
    ebp = MEM32(esp + 0x1C);
    edx = MEM32(esi + 4);
    ebx = MEM32(esp + 0x20);
    eax = eax & ebp;
    edx = edx & ebx;
    eax = eax | edx;
    MEM8(ecx + 0x802350) = 0;
    if ((eax == 0)) goto loc_003C97B7; /* je: equal / zero */

loc_003C9660: ;
    edx = 0; /* xor self */
    edi = ecx + 0x802328;
    eax = edi;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x34);
    ebp = 0x802028;
    ebx = 1;
    MEM32(esp + 0x28) = 0;
    esi = 0x802354;
    MEM32(esp + 0x10) = edx;

loc_003C96A6: ;
    edx = MEM32(ebp + 4);
    eax = MEM32(ebp);
    edx = edx & MEM32(esp + 0x28);
    eax = eax & ebx;
    eax = eax | edx;
    if ((eax == 0)) goto loc_003C977A; /* je: equal / zero */

loc_003C96BA: ;
    SET_LO16(edx, MEM16(esi + -2));
    SET_LO16(eax, MEM16(ecx + 0x802352));
    if (CMP_G(LO16(eax), LO16(edx))) goto loc_003C96D8; /* jg: greater (signed >) */

loc_003C96CA: ;
    if (CMP_G(MEM16(ecx + 0x802354), LO16(edx))) goto loc_003C96F6; /* jg: greater (signed >) */

loc_003C96D3: ;
    if (CMP_LE(LO16(eax), LO16(edx))) goto loc_003C96DD; /* jle: less or equal (signed <=) */

loc_003C96D8: ;
    if (CMP_L(LO16(eax), MEM16(esi))) goto loc_003C96F6; /* jl: less (signed <) */

loc_003C96DD: ;
    SET_LO16(edx, MEM16(esi));
    if (CMP_GE(LO16(eax), LO16(edx))) goto loc_003C977A; /* jge: greater or equal (signed >=) */

loc_003C96E9: ;
    if (CMP_LE(MEM16(ecx + 0x802354), LO16(edx))) goto loc_003C977A; /* jle: less or equal (signed <=) */

loc_003C96F6: ;
    SET_LO16(edx, MEM16(esi + 2));
    SET_LO16(eax, MEM16(ecx + 0x802356));
    if (CMP_G(LO16(eax), LO16(edx))) goto loc_003C9714; /* jg: greater (signed >) */

loc_003C9706: ;
    if (CMP_G(MEM16(ecx + 0x802358), LO16(edx))) goto loc_003C972C; /* jg: greater (signed >) */

loc_003C970F: ;
    if (CMP_LE(LO16(eax), LO16(edx))) goto loc_003C971A; /* jle: less or equal (signed <=) */

loc_003C9714: ;
    if (CMP_L(LO16(eax), MEM16(esi + 4))) goto loc_003C972C; /* jl: less (signed <) */

loc_003C971A: ;
    SET_LO16(edx, MEM16(esi + 4));
    if (CMP_GE(LO16(eax), LO16(edx))) goto loc_003C977A; /* jge: greater or equal (signed >=) */

loc_003C9723: ;
    if (CMP_LE(MEM16(ecx + 0x802358), LO16(edx))) goto loc_003C977A; /* jle: less or equal (signed <=) */

loc_003C972C: ;
    SET_LO16(edx, MEM16(esi + 6));
    SET_LO16(eax, MEM16(ecx + 0x80235A));
    if (CMP_G(LO16(eax), LO16(edx))) goto loc_003C974A; /* jg: greater (signed >) */

loc_003C973C: ;
    if (CMP_G(MEM16(ecx + 0x80235C), LO16(edx))) goto loc_003C9762; /* jg: greater (signed >) */

loc_003C9745: ;
    if (CMP_LE(LO16(eax), LO16(edx))) goto loc_003C9750; /* jle: less or equal (signed <=) */

loc_003C974A: ;
    if (CMP_L(LO16(eax), MEM16(esi + 8))) goto loc_003C9762; /* jl: less (signed <) */

loc_003C9750: ;
    SET_LO16(edx, MEM16(esi + 8));
    if (CMP_GE(LO16(eax), LO16(edx))) goto loc_003C977A; /* jge: greater or equal (signed >=) */

loc_003C9759: ;
    if (CMP_LE(MEM16(ecx + 0x80235C), LO16(edx))) goto loc_003C977A; /* jle: less or equal (signed <=) */

loc_003C9762: ;
    eax = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = eax | ebx;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x28);
    edx = edx | eax;
    MEM32(edi + 4) = edx;
    MEM8(ecx + 0x802350) = MEM8(ecx + 0x802350) + 1;

loc_003C977A: ;
    eax = MEM32(esp + 0x28);
    eax = (eax << 1) | (ebx >> (32 - 1)); /* shld */
    ebx = ebx << 1;
    edx = ebx;
    edx = edx | eax;
    MEM32(esp + 0x28) = eax;
    if ((edx != 0)) goto loc_003C97A1; /* jne: not equal / not zero */

loc_003C978E: ;
    ebp = ebp + 8;
    edi = edi + 8;
    ebx = 1;
    MEM32(esp + 0x28) = 0;

loc_003C97A1: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 0x38;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_003C96A6; /* jne: not equal / not zero */

loc_003C97B3: ;
    esi = MEM32(esp + 0x14);

loc_003C97B7: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    edx = (edx << 1) | (eax >> (32 - 1)); /* shld */
    eax = eax << 1;
    MEM32(esp + 0x1C) = eax;
    eax = eax | edx;
    MEM32(esp + 0x20) = edx;
    if ((eax != 0)) goto loc_003C97E8; /* jne: not equal / not zero */

loc_003C97D1: ;
    esi = esi + 8;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x20) = 0;

loc_003C97E8: ;
    eax = MEM32(esp + 0x18);
    ecx = ecx + 0x38;
    eax--;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_003C9640; /* jne: not equal / not zero */

loc_003C97FA: ;
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
 * sub_003C9810
 * Original: 0x003C9810 - 0x003C98E6 (214 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm4;

loc_003C9810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB8;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x15));
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax & 3;
    eax = eax - edx;
    if ((eax == 0)) { sub_003C98E6(); return; } /* je: equal / zero */

loc_003C9830: ;
    eax--;
    if ((eax == 0)) goto loc_003C98A9; /* je: equal / zero */

loc_003C9833: ;
    eax--;
    if ((eax == 0)) goto loc_003C9840; /* je: equal / zero */

loc_003C9836: ;
    edx = 1;
    g_seh_ebp = ebp; sub_003C99D4(); return; /* tail jmp 0x003C99D4 */

loc_003C9840: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 8);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xA);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    g_seh_ebp = ebp; sub_003C9942(); return; /* tail jmp 0x003C9942 */

loc_003C98A9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    xmm4 = MEMF(0x648D14); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm4; /* movss */
    g_seh_ebp = ebp; sub_003C99DC(); return; /* tail jmp 0x003C99DC */

}

/**
 * sub_003C9B40
 * Original: 0x003C9B40 - 0x003C9B54 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9B40(void)
{
    int _cf = 0; /* carry flag */

loc_003C9B40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & edx;
    MEM32(eax + 4) = MEM32(eax + 4) + ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003C9B60
 * Original: 0x003C9B60 - 0x003C9C2E (206 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C9B60: ;
    eax = MEM32(0x84B4A4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_003C9B7B; /* je: equal / zero */

loc_003C9B6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003C9B72: ;
    esp = esp + 4;
    MEM32(0x84B4A4) = ebx;

loc_003C9B7B: ;
    if (CMP_EQ(MEM32(0x84B4A8), ebx)) goto loc_003C9B96; /* je: equal / zero */

loc_003C9B83: ;
    PUSH32(esp, 0x84B4A8);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003C9B8D: ;
    esp = esp + 4;
    MEM32(0x84B4A8) = ebx;

loc_003C9B96: ;
    ecx = MEM32(0x84B4B8);
    if (CMP_EQ(ecx, ebx)) goto loc_003C9BD8; /* je: equal / zero */

loc_003C9BA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x84D458;
    esi = ecx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_003C9BAE: ;
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_003C9BD6; /* je: equal / zero */

loc_003C9BB4: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebx)) goto loc_003C9BBD; /* je: equal / zero */

loc_003C9BB9: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_003C9BBD: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebx))) goto loc_003C9BD6; /* jne: not equal / not zero */

loc_003C9BC3: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_003C9BCC: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_003C9BD6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003C9BD8: ;
    if (CMP_EQ(MEM8(0x806928), LO8(ebx))) goto loc_003C9BED; /* je: equal / zero */

loc_003C9BE0: ;
    PUSH32(esp, 0x84B4A0);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003C9BEA: ;
    esp = esp + 4;

loc_003C9BED: ;
    MEM32(0x84B4A0) = ebx;
    PUSH32(esp, 0); sub_003CBBF0(); /* call 0x003CBBF0 */

loc_003C9BF8: ;
    ecx = MEM32(0x75B8EC);
    if (CMP_EQ(ecx, ebx)) goto loc_003C9C2C; /* je: equal / zero */

loc_003C9C02: ;
    if (CMP_EQ(MEM32(0x75B8F0), ebx)) goto loc_003C9C2C; /* je: equal / zero */

loc_003C9C0A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_003C9C10: ;
    ecx = MEM32(0x75B8F0);
    if (CMP_EQ(ecx, ebx)) goto loc_003C9C20; /* je: equal / zero */

loc_003C9C1A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003C9C20: ;
    MEM32(0x75B8F0) = ebx;
    MEM32(0x75B8EC) = ebx;

loc_003C9C2C: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C9C30
 * Original: 0x003C9C30 - 0x003C9C6B (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9C30(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C9C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x54);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x6453E8;
    if (TEST_Z(ecx, ecx)) goto loc_003C9C46; /* je: equal / zero */

loc_003C9C40: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_003C9C46: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi + 0x54) = 0;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_003C9C65; /* je: equal / zero */

loc_003C9C54: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003C9C62: ;
    esp = esp + 4;

loc_003C9C65: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9C70
 * Original: 0x003C9C70 - 0x003C9CB1 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9C70(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C9C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xA4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x6453DC;
    if (TEST_Z(ecx, ecx)) goto loc_003C9C89; /* je: equal / zero */

loc_003C9C83: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_003C9C89: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi + 0xA4) = 0;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_003C9CAB; /* je: equal / zero */

loc_003C9C9A: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003C9CA8: ;
    esp = esp + 4;

loc_003C9CAB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9CC0
 * Original: 0x003C9CC0 - 0x003C9D0F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C9CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = 0x6453EC;
    if (TEST_Z(ecx, ecx)) goto loc_003C9CD6; /* je: equal / zero */

loc_003C9CD0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_003C9CD6: ;
    ecx = MEM32(esi + 8);
    if (TEST_Z(ecx, ecx)) goto loc_003C9CE3; /* je: equal / zero */

loc_003C9CDD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003C9CE3: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_003C9D09; /* je: equal / zero */

loc_003C9CF8: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003C9D06: ;
    esp = esp + 4;

loc_003C9D09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9D10
 * Original: 0x003C9D10 - 0x003C9D5E (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9D10(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C9D10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    MEM32(ebp) = 0x6453DC;
    edi = ebp + 0x60;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = ebp + 0x10;
    PUSH32(esp, ecx);
    MEMF(ebp + 0xA0) = xmm0; /* movss */
    MEM32(ebp + 0xA4) = 0;
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_003C9D48: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x50) = 0;
    MEM32(ebp) = 0x6453FC;
    eax = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9D60
 * Original: 0x003C9D60 - 0x003C9DAE (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9D60(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C9D60: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    MEM32(ebp) = 0x6453DC;
    edi = ebp + 0x60;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = ebp + 0x10;
    PUSH32(esp, ecx);
    MEMF(ebp + 0xA0) = xmm0; /* movss */
    MEM32(ebp + 0xA4) = 0;
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_003C9D98: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x50) = 0;
    MEM32(ebp) = 0x6453F0;
    eax = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9DB0
 * Original: 0x003C9DB0 - 0x003C9DF2 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9DB0(void)
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

loc_003C9DB0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003C9DC9: ;
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003C9DD5: ;
    /* fld st(0) */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003C9DF2(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C9DE3: ;
    /* fstp st(0) */
    POP32(esp, esi);
    fp_push(MEMF(0x648CF8)); /* fld float */
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003C9E10
 * Original: 0x003C9E10 - 0x003C9E44 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9E10(void)
{
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003C9E10: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
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
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003C9E50
 * Original: 0x003C9E50 - 0x003C9E96 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C9E50: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm1 = MEMF(eax + 8); /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) { sub_003C9E96(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C9E7E: ;
    xmm1 = MEMF(eax + 8); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(esp + 8) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_003C9EA8(); return; /* tail jmp 0x003C9EA8 */

}

/**
 * sub_003C9EC0
 * Original: 0x003C9EC0 - 0x003C9F1F (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C9EC0: ;
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00064070(); /* call 0x00064070 */

loc_003C9ECD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 9);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_003C9EDE: ;
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 0xC;
    MEM32(esp + 0x11C) = 9;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_003C9F03: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_003C9F1F(); return; } /* jl: less (signed <) */

loc_003C9F11: ;
    if (CMP_G(eax, 0x3E5)) { sub_003C9F1F(); return; } /* jg: greater (signed >) */

loc_003C9F18: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_003C9F1D: ;
    goto loc_003C9F03;

}

/**
 * sub_003CA250
 * Original: 0x003CA250 - 0x003CA2C8 (120 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA250(void)
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

loc_003CA250: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_003CA2BF; /* je: equal / zero */

loc_003CA267: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003CA26F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003CA287; /* ja: above (unsigned >) */

loc_003CA27B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003CA283: ;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_003CA287: ;
    xmm0 = MEMF(esp + 4); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003CA2C5; /* jnp: not parity */

loc_003CA29A: ;
    esi = MEM32(esi + 0xA4);
    if (TEST_NZ(esi, esi)) goto loc_003CA267; /* jne: not equal / not zero */

loc_003CA2A4: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003CA2B9; /* ja: above (unsigned >) */

loc_003CA2AC: ;
    xmm1 = MEMF(0x648CE0); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003CA2BF; /* jbe: below or equal (unsigned <=) */

loc_003CA2B9: ;
    MEMF(esp + 4) = xmm1; /* movss */

loc_003CA2BF: ;
    xmm0 = MEMF(esp + 4); /* movss */

loc_003CA2C5: ;
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
 * sub_003CA2D0
 * Original: 0x003CA2D0 - 0x003CA3A1 (209 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA2D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CA2D0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    if (TEST_Z(edi, edi)) { sub_003CA3A1(); return; } /* je: equal / zero */

loc_003CA2E9: ;
    PUSH32(esp, esi);
    esi = edi + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003CA2F4: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    esi = MEM32(edi + 0x54);
    esp = esp + 8;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm3 = xmm0; /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(esi, esi)) goto loc_003CA345; /* je: equal / zero */

loc_003CA315: ;
    edi = esi + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003CA31F: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_003CA33E; /* jbe: below or equal (unsigned <=) */

loc_003CA327: ;
    ecx = MEM32(edi);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(edi + 8);
    xmm3 = xmm0; /* movaps */
    MEM32(esp + 0x1C) = eax;

loc_003CA33E: ;
    esi = MEM32(esi + 0x54);
    if (TEST_NZ(esi, esi)) goto loc_003CA315; /* jne: not equal / not zero */

loc_003CA345: ;
    ecx = esp + 0x14;
    edx = esp + 0x20;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x30) = edx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x34);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    POP32(esp, esi);
    eax = ebp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    MEMF(ebp + 0xC) = xmm3; /* movss */
    MEM32(eax + 4) = edx;
    POP32(esp, ebp);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CA430
 * Original: 0x003CA430 - 0x003CA4A3 (115 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA430(void)
{
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003CA430: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0003C380(); /* call 0x0003C380 */

loc_003CA43D: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003CA444: ;
    xmm2 = MEMF(edi + 0xC); /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(0x648D14); /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esi;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = xmm1 / MEMF(esp + 8); /* divss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm2 = xmm2 / xmm0; /* divss */
    MEMF(esi + 0x2C) = xmm3; /* movss */
    MEMF(esi + 0x28) = xmm1; /* movss */
    MEMF(esi + 0x24) = xmm2; /* movss */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003CA4B0
 * Original: 0x003CA4B0 - 0x003CA4C4 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA4B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CA4B0: ;
    eax = MEM32(edi + 8);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) { sub_003CA4C4(); return; } /* jne: not equal / not zero */

loc_003CA4BD: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003CA540
 * Original: 0x003CA540 - 0x003CA59F (95 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA540(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CA540: ;
    edx = MEM32(0x802324);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_LE(edx & edx, 0)) goto loc_003CA571; /* jle: less or equal (signed <=) */

loc_003CA553: ;
    eax = MEM32(0x84B4A0);
    eax = eax + 0x15;
    goto loc_003CA560;

    /* nop */

loc_003CA560: ;
    ebx = ZX8(MEM8(eax));
    ebx = ebx >> 2;
    if (CMP_NE(ebx, edi)) goto loc_003CA56B; /* jne: not equal / not zero */

loc_003CA56A: ;
    ecx++;

loc_003CA56B: ;
    eax = eax + 0x78;
    edx--;
    if ((edx != 0)) goto loc_003CA560; /* jne: not equal / not zero */

loc_003CA571: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = 0;
    if (TEST_Z(ecx, ecx)) { sub_003CA59F(); return; } /* je: equal / zero */

loc_003CA57E: ;
    eax = ecx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003CA58B: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_NZ(eax, eax)) { sub_003CA59F(); return; } /* jne: not equal / not zero */

loc_003CA595: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    eax = esi;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003CA620
 * Original: 0x003CA620 - 0x003CA75B (315 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CA620: ;
    PUSH32(esp, ecx);
    MEM32(esi + 4) = eax;
    eax++;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    MEM32(esi + 0x1C) = ecx;
    ecx = 0; /* xor self */
    ebp = edx * 8 + 8;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEM8(esi) = 0;
    MEM32(esi + 8) = ebx;
    MEM8(esi + 0x28) = 0;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x10) = ecx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003CA65F: ;
    edi = eax;
    esp = esp + 4;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0xC) = edi;
    if (TEST_Z(edi, edi)) goto loc_003CA752; /* je: equal / zero */

loc_003CA66F: ;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ebp = ebx;
    ecx = ecx & 3;
    ebp = ebp << 4;
    PUSH32(esp, ebp);
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003CA68C: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_003CA6A5; /* je: equal / zero */

loc_003CA695: ;
    PUSH32(esp, 0x990D0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_003CA6A3: ;
    goto loc_003CA6A7;

loc_003CA6A5: ;
    edi = 0; /* xor self */

loc_003CA6A7: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0x10) = edi;
    if (TEST_Z(edi, edi)) goto loc_003CA752; /* je: equal / zero */

loc_003CA6B2: ;
    ecx = ebp;
    ebp = MEM32(esp + 0x14);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    if (TEST_Z(ebp, ebp)) goto loc_003CA70D; /* je: equal / zero */

loc_003CA6CC: ;
    ebx = ebp;
    ebx = ebx << 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003CA6D7: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_003CA6F0; /* je: equal / zero */

loc_003CA6E0: ;
    PUSH32(esp, 0x990D0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_003CA6EE: ;
    goto loc_003CA6F2;

loc_003CA6F0: ;
    edi = 0; /* xor self */

loc_003CA6F2: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0x20) = edi;
    if (TEST_Z(edi, edi)) goto loc_003CA752; /* je: equal / zero */

loc_003CA6F9: ;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    goto loc_003CA714;

loc_003CA70D: ;
    MEM32(esi + 0x20) = 0;

loc_003CA714: ;
    ebx = MEM32(esp + 0xC);
    ebx = ebx * 4 + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003CA725: ;
    edi = eax;
    esp = esp + 4;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0x24) = edi;
    if (TEST_Z(edi, edi)) goto loc_003CA752; /* je: equal / zero */

loc_003CA731: ;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x20);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEM8(esi) = 1;

loc_003CA752: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CA760
 * Original: 0x003CA760 - 0x003CA7A5 (69 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA760(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CA760: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003CA773; /* je: equal / zero */

loc_003CA76A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003CA770: ;
    esp = esp + 4;

loc_003CA773: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003CA783; /* je: equal / zero */

loc_003CA77A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003CA780: ;
    esp = esp + 4;

loc_003CA783: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_003CA793; /* je: equal / zero */

loc_003CA78A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003CA790: ;
    esp = esp + 4;

loc_003CA793: ;
    esi = MEM32(esi + 0x24);
    if (TEST_Z(esi, esi)) goto loc_003CA7A3; /* je: equal / zero */

loc_003CA79A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003CA7A0: ;
    esp = esp + 4;

loc_003CA7A3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CA7B0
 * Original: 0x003CA7B0 - 0x003CA82F (127 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CA7B0: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(ecx, ecx)) goto loc_003CA829; /* je: equal / zero */

loc_003CA7C1: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ebx + 1;
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    esi = esi + edi + 1;
    edi++;
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = edi + ebx + 1;
    edi = MEM32(eax + 0xC);
    ebx = MEM32(eax + 0x14);
    MEM32(edi + esi * 8) = ebx;
    edi = MEM32(eax + 0xC);
    MEM32(edi + esi * 8 + 4) = ecx;
    esi = MEM32(eax + 0xC);
    edi = MEM32(eax + 0x14);
    MEM32(esi + edx * 8) = edi;
    esi = MEM32(eax + 0xC);
    MEM32(esi + edx * 8 + 4) = ecx;
    if (CMP_LE(ecx & ecx, 0)) goto loc_003CA828; /* jle: less or equal (signed <=) */

loc_003CA7FB: ;
    edx = 0x10;

loc_003CA800: ;
    edi = MEM32(eax + 0x14);
    esi = ebp;
    ebx = MEM32(esi);
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    esi = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = esi;
    ebx = MEM32(eax + 0x14);
    ebx = ebx + edx;
    ebp = ebp + edx;
    ecx--;
    MEM32(eax + 0x14) = ebx;
    if ((ecx != 0)) goto loc_003CA800; /* jne: not equal / not zero */

loc_003CA828: ;
    POP32(esp, esi);

loc_003CA829: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CA830
 * Original: 0x003CA830 - 0x003CA88D (93 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CA830: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x18);
    MEM32(esi + ebx * 4 + 4) = edi;
    if (CMP_LE(edx & edx, 0)) goto loc_003CA879; /* jle: less or equal (signed <=) */

loc_003CA845: ;
    esi = 0x10;
    PUSH32(esp, ebp);
    goto loc_003CA850;

    /* nop */

loc_003CA850: ;
    ebx = MEM32(eax + 0x18);
    edi = ecx;
    ebp = MEM32(edi);
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    edi = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = edi;
    ebp = MEM32(eax + 0x18);
    ebp = ebp + esi;
    ecx = ecx + esi;
    edx--;
    MEM32(eax + 0x18) = ebp;
    if ((edx != 0)) goto loc_003CA850; /* jne: not equal / not zero */

loc_003CA878: ;
    POP32(esp, ebp);

loc_003CA879: ;
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x18);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4 + 8) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CA890
 * Original: 0x003CA890 - 0x003CA8C0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CA890: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4 + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4 + 8);
    if (CMP_EQ(esi, edi)) goto loc_003CA8B8; /* je: equal / zero */

loc_003CA8A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_003CA8AD: ;
    esi = esi + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003CA8C0(); return; } /* jne: not equal / not zero */

loc_003CA8B4: ;
    if (CMP_NE(esi, edi)) goto loc_003CA8A6; /* jne: not equal / not zero */

loc_003CA8B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CA8E0
 * Original: 0x003CA8E0 - 0x003CA948 (104 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA8E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003CA8E0: ;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x648D14); /* movss */
    if (CMP_EQ(edx, ecx)) goto loc_003CA945; /* je: equal / zero */

loc_003CA8F0: ;
    edx++;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 4));
    eax = MEM32(eax + 0xC);
    edx = edx + ecx;
    ecx = MEM32(eax + edx * 8 + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = eax + edx * 8 + 8;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_003CA936; /* je: equal / zero */

loc_003CA90F: ;
    PUSH32(esp, edi);
    edi = ecx;

loc_003CA912: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000990E0(); /* call 0x000990E0 */

loc_003CA919: ;
    xmm0 = xmm0 / MEMF(esi + 0xC); /* divss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003CA92F; /* jbe: below or equal (unsigned <=) */

loc_003CA929: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_003CA92F: ;
    esi = esi + 0x10;
    edi--;
    if ((edi != 0)) goto loc_003CA912; /* jne: not equal / not zero */

loc_003CA935: ;
    POP32(esp, edi);

loc_003CA936: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    POP32(esp, esi);

loc_003CA945: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CA950
 * Original: 0x003CA950 - 0x003CAC90 (832 bytes, 228 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003CA950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    eax = 0x16E4;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_003CA960: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(ebx) = 0;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edx = esp + 0xEF0;
    MEM32(ebx + 0x204) = ecx;
    edi = 0; /* xor self */
    MEM32(ebx + 0x214) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    ecx = 0x645414;
    MEM32(ebx + 0x208) = edi;
    MEM32(ebx + 0x20C) = edi;
    PUSH32(esp, 0); sub_003CB3A0(); /* call 0x003CB3A0 */

loc_003CA99D: ;
    esi = eax;
    eax = MEM32(ebx + 0x204);
    ecx = eax + 1;
    eax++;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    MEM32(ebx + 0x218) = edi;
    MEM32(ebx + 0x210) = edi;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003CA9C1: ;
    edi = eax;
    esp = esp + 4;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebx + 0x210) = edi;
    if (TEST_Z(edi, edi)) goto loc_003CAC85; /* je: equal / zero */

loc_003CA9D4: ;
    eax = MEM32(ebx + 0x204);
    ecx = eax + 1;
    eax++;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    PUSH32(esp, esi);
    eax = esp + 0xEF4;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_003CADB0(); /* call 0x003CADB0 */

loc_003CAA04: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CAC85; /* je: equal / zero */

loc_003CAA0C: ;
    PUSH32(esp, 0x990D0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x10);
    ecx = esp + 0x6FC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_003CAA25: ;
    eax = MEM32(ebp + 0xC);
    edx = esp + 0x6F0;
    PUSH32(esp, edx);
    ecx = 0x645408;
    PUSH32(esp, 0); sub_003CB3A0(); /* call 0x003CB3A0 */

loc_003CAA3A: ;
    MEM32(ebx + 0x20C) = eax;
    eax = MEM32(ebx + 0x204);
    ecx = eax * 4 + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_003CAA53: ;
    edi = eax;
    esp = esp + 4;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebx + 0x218) = edi;
    if (TEST_Z(edi, edi)) goto loc_003CAC85; /* je: equal / zero */

loc_003CAA66: ;
    ecx = MEM32(ebx + 0x204);
    ecx = ecx * 4 + 4;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(ebx + 0x20C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_003CAC82; /* jle: less or equal (signed <=) */

loc_003CAA99: ;
    esi = esp + 0x6F0;
    MEM32(esp + 0x18) = esi;
    goto loc_003CAAB0;

    /* nop */
    /* nop */

loc_003CAAB0: ;
    edi = MEM32(ebx + 0x214);
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_003CAABF: ;
    xmm0 = MEMF(esi + 4); /* movss */
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x98) = ecx;
    ecx = esi;
    MEM32(esp + 0x9C) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xA8) = eax;
    (void)0; /* cmp MEM32(edi), 0 - flags set for next jcc */
    MEMF(esp + 0x2B4) = xmm0; /* movss */
    MEM32(esp + 0xA4) = edx;
    MEM32(esp + 0xAC) = ecx;
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(MEM32(edi), 0)) goto loc_003CAB55; /* jle: less or equal (signed <=) */

loc_003CAB18: ;
    goto loc_003CAB20;

    /* nop */

loc_003CAB20: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0x14);
    esi = MEM32(eax + ecx * 4);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_003C5790(); /* call 0x003C5790 */

loc_003CAB37: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003CAC00; /* je: equal / zero */

loc_003CAB46: ;
    ecx = MEM32(edi);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_003CAB20; /* jl: less (signed <) */

loc_003CAB51: ;
    esi = MEM32(esp + 0x18);

loc_003CAB55: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;

loc_003CAB5D: ;
    eax = MEM32(ebx + 0x218);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax + ecx * 4 + 4);
    if (TEST_NZ(eax, eax)) goto loc_003CAC39; /* jne: not equal / not zero */

loc_003CAB73: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003CAB81; /* jne: not equal / not zero */

loc_003CAB7C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003CAB81: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_003CABC9; /* je: equal / zero */

loc_003CABA7: ;
    if (CMP_B(MEM32(esi + 0x80), 0x24)) goto loc_003CABC9; /* jb: below (unsigned <) */

loc_003CABB0: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003CABBA: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003CABC2: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003CABEA; /* jne: not equal / not zero */

loc_003CABC9: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003CABDB: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003CABE3: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003CAC17; /* je: equal / zero */

loc_003CABEA: ;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x18) = eax;
    MEM32(eax + 0x14) = eax;
    goto loc_003CAC19;

loc_003CAC00: ;
    edx = MEM32(edi + 4);
    ecx = MEM32(edx + eax * 4);
    edx = ZX8(MEM8(ecx + 0x17));
    esi = MEM32(esp + 0x18);
    MEM32(esp + 0x14) = edx;
    goto loc_003CAB5D;

loc_003CAC17: ;
    eax = 0; /* xor self */

loc_003CAC19: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ebx + 0x218);
    MEM32(edx + ecx * 4 + 4) = eax;
    eax = MEM32(ebx + 0x218);
    eax = MEM32(eax + ecx * 4 + 4);
    if (TEST_Z(eax, eax)) goto loc_003CAC85; /* je: equal / zero */

loc_003CAC35: ;
    esi = MEM32(esp + 0x18);

loc_003CAC39: ;
    PUSH32(esp, 0);
    esp = esp - 0x10;
    ecx = esi;
    edi = MEM32(ecx);
    edx = esp;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 8) = edi;
    ebx = eax;
    MEM32(edx + 0xC) = ecx;
    PUSH32(esp, 0); sub_003CBDC0(); /* call 0x003CBDC0 */

loc_003CAC5F: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 0x20C);
    eax++;
    esi = esi + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = esi;
    ebx = edx;
    if (CMP_L(eax, ecx)) goto loc_003CAAB0; /* jl: less (signed <) */

loc_003CAC82: ;
    MEM8(ebx) = 1;

loc_003CAC85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CAC90
 * Original: 0x003CAC90 - 0x003CADAF (287 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CAC90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x210);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_003CAD43; /* je: equal / zero */

loc_003CACA1: ;
    eax = MEM32(esi + 0x204);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    eax++;
    if (CMP_LE(eax & eax, 0)) goto loc_003CAD33; /* jle: less or equal (signed <=) */

loc_003CACB3: ;
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003CAD27; /* jle: less or equal (signed <=) */

loc_003CACB9: ;
    /* nop */

loc_003CACC0: ;
    ecx = MEM32(esi + 0x210);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    eax = eax + ebx;
    edi = MEM32(ecx + eax * 4);
    if (TEST_Z(edi, edi)) goto loc_003CAD1B; /* je: equal / zero */

loc_003CACD2: ;
    PUSH32(esp, 0); sub_003CBEA0(); /* call 0x003CBEA0 */

loc_003CACD7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003CACDD: ;
    if (TEST_NZ(eax, eax)) goto loc_003CAD02; /* jne: not equal / not zero */

loc_003CACE1: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_003CACFF: ;
    esp = esp + 4;

loc_003CAD02: ;
    edx = MEM32(esi + 0x204);
    eax = MEM32(esi + 0x210);
    edx++;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    edx = edx + ebx;
    MEM32(eax + edx * 4) = 0;

loc_003CAD1B: ;
    eax = MEM32(esi + 0x204);
    ebx++;
    eax++;
    if (CMP_L(ebx, eax)) goto loc_003CACC0; /* jl: less (signed <) */

loc_003CAD27: ;
    eax = MEM32(esi + 0x204);
    ebp++;
    eax++;
    if (CMP_L(ebp, eax)) goto loc_003CACB3; /* jl: less (signed <) */

loc_003CAD33: ;
    ecx = MEM32(esi + 0x210);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003CAD3F: ;
    esp = esp + 4;
    POP32(esp, ebp);

loc_003CAD43: ;
    eax = MEM32(esi + 0x218);
    if (TEST_Z(eax, eax)) goto loc_003CADAB; /* je: equal / zero */

loc_003CAD4D: ;
    edx = MEM32(esi + 0x204);
    ebx = 0; /* xor self */
    edx++;
    if (CMP_LE(edx & edx, 0)) goto loc_003CAD9C; /* jle: less or equal (signed <=) */

loc_003CAD5A: ;
    /* nop */

loc_003CAD60: ;
    eax = MEM32(esi + 0x218);
    edi = MEM32(eax + ebx * 4);
    if (TEST_Z(edi, edi)) goto loc_003CAD90; /* je: equal / zero */

loc_003CAD6D: ;
    PUSH32(esp, 0); sub_003CBEA0(); /* call 0x003CBEA0 */

loc_003CAD72: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003CAD80: ;
    edx = MEM32(esi + 0x218);
    esp = esp + 4;
    MEM32(edx + ebx * 4) = 0;

loc_003CAD90: ;
    eax = MEM32(esi + 0x204);
    ebx++;
    eax++;
    if (CMP_L(ebx, eax)) goto loc_003CAD60; /* jl: less (signed <) */

loc_003CAD9C: ;
    ecx = MEM32(esi + 0x218);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003CADA8: ;
    esp = esp + 4;

loc_003CADAB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003CADB0
 * Original: 0x003CADB0 - 0x003CAE64 (180 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CADB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CADB0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x58);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_003CAE58; /* jle: less or equal (signed <=) */

loc_003CADCD: ;
    ebp = MEM32(esp + 0x54);

loc_003CADD1: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    esp = esp - 0x10;
    edx = ebp;
    ecx = MEM32(edx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0); sub_003CB0B0(); /* call 0x003CB0B0 */

loc_003CADFE: ;
    ecx = MEM32(esp + 0x54);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_003CAE40; /* jle: less or equal (signed <=) */

loc_003CAE0C: ;
    /* nop */

loc_003CAE10: ;
    esi = MEM32(esp + eax * 4 + 0x18);
    ebx = 0; /* xor self */

loc_003CAE16: ;
    eax = MEM32(esp + ebx * 4 + 0x18);
    if (CMP_EQ(esi, eax)) goto loc_003CAE2E; /* je: equal / zero */

loc_003CAE1E: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); sub_003CAE70(); /* call 0x003CAE70 */

loc_003CAE26: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003CAE64(); return; } /* je: equal / zero */

loc_003CAE2A: ;
    ecx = MEM32(esp + 0x54);

loc_003CAE2E: ;
    ebx++;
    if (CMP_L(ebx, ecx)) goto loc_003CAE16; /* jl: less (signed <) */

loc_003CAE33: ;
    eax = MEM32(esp + 0x10);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_003CAE10; /* jl: less (signed <) */

loc_003CAE40: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x58);
    eax++;
    ebp = ebp + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_003CADD1; /* jl: less (signed <) */

loc_003CAE58: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CAE70
 * Original: 0x003CAE70 - 0x003CAF73 (259 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CAE70: ;
    esp = esp - 0x14;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    edx = ecx;
    if (CMP_LE(ecx, eax)) edx = eax; /* cmovle */
    edx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_L(ecx, eax)) eax = ecx; /* cmovl */
    ecx = MEM32(edi + 0x210);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax + 1;
    eax = MEM32(edi + 0x204);
    eax++;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax + ebp;
    ebx = MEM32(ecx + eax * 4);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    if (TEST_NZ(ebx, ebx)) { sub_003CAF73(); return; } /* jne: not equal / not zero */

loc_003CAEA7: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003CAEB5; /* jne: not equal / not zero */

loc_003CAEB0: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003CAEB5: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_003CAEFD; /* je: equal / zero */

loc_003CAEDB: ;
    if (CMP_B(MEM32(esi + 0x80), 0x24)) goto loc_003CAEFD; /* jb: below (unsigned <) */

loc_003CAEE4: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003CAEEE: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003CAEF6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003CAF1E; /* jne: not equal / not zero */

loc_003CAEFD: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003CAF0F: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003CAF17: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003CAF34; /* je: equal / zero */

loc_003CAF1E: ;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x18) = eax;
    MEM32(eax + 0x14) = eax;
    goto loc_003CAF36;

loc_003CAF34: ;
    eax = 0; /* xor self */

loc_003CAF36: ;
    edx = MEM32(edi + 0x204);
    ecx = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x210);
    edx++;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = edx + ebp;
    MEM32(esi + edx * 4) = eax;
    eax = MEM32(edi + 0x204);
    eax++;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(edi + 0x210);
    eax = eax + ebp;
    ebx = MEM32(ecx + eax * 4);
    if (TEST_NZ(ebx, ebx)) { sub_003CAF73(); return; } /* jne: not equal / not zero */

loc_003CAF68: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CB040
 * Original: 0x003CB040 - 0x003CB0A8 (104 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB040: ;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(ecx, eax)) edi = eax; /* cmovle */
    edi++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_L(ecx, eax)) eax = ecx; /* cmovl */
    ecx = MEM32(esi + 0x204);
    ecx++;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x210);
    ecx = MEM32(eax + ecx * 4 + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edx) = 0;
    if (TEST_Z(ecx, ecx)) { sub_003CB0A8(); return; } /* je: equal / zero */

loc_003CB06E: ;
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(eax, ecx)) goto loc_003CB0A3; /* je: equal / zero */

loc_003CB075: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_003CB077: ;
    edi = MEM32(edx);
    edi = edi << 4;
    ebx = eax;
    ebp = MEM32(ebx);
    edi = edi + esi + 4;
    MEM32(edi) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(edi + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(edi + 8) = ebp;
    ebx = MEM32(ebx + 0xC);
    MEM32(edi + 0xC) = ebx;
    MEM32(edx) = MEM32(edx) + 1;
    eax = MEM32(eax + 0x18);
    if (CMP_NE(eax, ecx)) goto loc_003CB077; /* jne: not equal / not zero */

loc_003CB0A1: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003CB0A3: ;
    eax = esi + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CB0B0
 * Original: 0x003CB0B0 - 0x003CB1E4 (308 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB0B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003CB0B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6E4;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x75EE9C;
    PUSH32(esp, edi);
    MEM32(eax) = 0;
    MEM32(esp + 0x10) = esi;

loc_003CB0D1: ;
    xmm1 = MEMF(ebp + 0x18); /* movss */
    xmm0 = MEMF(esi + -4); /* movss */
    ecx = MEM32(ebp + 8);
    edi = MEM32(ecx + 0x214);
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xC); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x10); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x14); /* addss */
    eax = esp + 0x20;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_003CB123: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0xA4) = eax;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x9C) = ecx;
    MEM32(esp + 0xA0) = edx;
    MEMF(esp + 0x2B4) = xmm0; /* movss */
    MEM32(esp + 0xA8) = ecx;
    MEM32(esp + 0xAC) = edx;
    if (CMP_LE(eax & eax, 0)) goto loc_003CB195; /* jle: less or equal (signed <=) */

loc_003CB170: ;
    eax = MEM32(edi + 4);
    esi = MEM32(eax + ebx * 4);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_003C5790(); /* call 0x003C5790 */

loc_003CB183: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_003CB1E4(); return; } /* je: equal / zero */

loc_003CB18A: ;
    eax = MEM32(edi);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_003CB170; /* jl: less (signed <) */

loc_003CB191: ;
    esi = MEM32(esp + 0x10);

loc_003CB195: ;
    edi = edi | 0xFFFFFFFFu;
    edx = MEM32(ebp + 0x20);
    ebx = MEM32(edx);
    SET_LO8(ecx, 0); /* xor self */
    eax = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_003CB1BE; /* jle: less or equal (signed <=) */

loc_003CB1A5: ;
    edx = ebx;

loc_003CB1A7: ;
    ebx = MEM32(ebp + 0x1C);
    (void)0; /* cmp MEM32(ebx + eax * 4), edi - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(MEM32(ebx + eax * 4), edi)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) | LO8(ebx));
    eax++;
    if (CMP_L(eax, edx)) goto loc_003CB1A7; /* jl: less (signed <) */

loc_003CB1B7: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003CB1C8; /* jne: not equal / not zero */

loc_003CB1BB: ;
    edx = MEM32(ebp + 0x20);

loc_003CB1BE: ;
    eax = MEM32(edx);
    ecx = MEM32(ebp + 0x1C);
    MEM32(ecx + eax * 4) = edi;
    MEM32(edx) = MEM32(edx) + 1;

loc_003CB1C8: ;
    esi = esi + 0xC;
    (void)0; /* cmp esi, 0x75EEE4 - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(esi, 0x75EEE4)) goto loc_003CB0D1; /* jl: less (signed <) */

loc_003CB1DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_003CB200
 * Original: 0x003CB200 - 0x003CB207 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB200(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CB200: ;
    if (TEST_NZ(ebx, ebx)) { sub_003CB207(); return; } /* jne: not equal / not zero */

loc_003CB204: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003CB260
 * Original: 0x003CB260 - 0x003CB398 (312 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB260: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x204);
    eax = 0; /* xor self */
    edx++;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(edx & edx, 0)) goto loc_003CB2D4; /* jle: less or equal (signed <=) */

loc_003CB286: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003CB2C4; /* jle: less or equal (signed <=) */

loc_003CB28A: ;
    ebx = eax + -1;
    edi = edi | 0xFFFFFFFFu;
    MEM32(esp + 0x10) = eax;

loc_003CB294: ;
    edx = esp + 0x18;
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_003CB040(); /* call 0x003CB040 */

loc_003CB2A1: ;
    ebp = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edx = edi;
    eax = ebp;
    PUSH32(esp, 0); sub_003CA7B0(); /* call 0x003CA7B0 */

loc_003CB2B4: ;
    eax = MEM32(esp + 0x10);
    edi++;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_003CB294; /* jne: not equal / not zero */

loc_003CB2C0: ;
    eax = MEM32(esp + 0x14);

loc_003CB2C4: ;
    ecx = MEM32(esi + 0x204);
    eax++;
    ecx++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_003CB286; /* jl: less (signed <) */

loc_003CB2D4: ;
    edx = MEM32(esi + 0x204);
    ebx = 0; /* xor self */
    edx++;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(edx & edx, 0)) goto loc_003CB38E; /* jle: less or equal (signed <=) */

loc_003CB2E9: ;
    edi = 0xFFFFFFFCu;
    MEM32(esp + 0x18) = edi;

loc_003CB2F2: ;
    eax = MEM32(esi + 0x218);
    ecx = MEM32(edi + eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_003CB35F; /* je: equal / zero */

loc_003CB308: ;
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(eax, ecx)) goto loc_003CB34B; /* je: equal / zero */

loc_003CB30F: ;
    edi = esi + 4;

loc_003CB312: ;
    edx = eax;
    ebp = MEM32(edx);
    ebx = edi;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ebx + 8) = ebp;
    edx = MEM32(edx + 0xC);
    ebp = MEM32(esp + 0x10);
    MEM32(ebx + 0xC) = edx;
    eax = MEM32(eax + 0x18);
    ebp++;
    edi = edi + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(eax, ecx)) goto loc_003CB312; /* jne: not equal / not zero */

loc_003CB33F: ;
    ebp = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);

loc_003CB34B: ;
    edx = MEM32(esp + 0x10);
    eax = ebx + -1;
    PUSH32(esp, eax);
    ecx = esi + 4;
    eax = ebp;
    PUSH32(esp, 0); sub_003CA830(); /* call 0x003CA830 */

loc_003CB35D: ;
    goto loc_003CB373;

loc_003CB35F: ;
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 0x18);
    MEM32(ecx + edi + 4) = edx;
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + 0x18);
    MEM32(eax + edi + 8) = ecx;

loc_003CB373: ;
    edx = MEM32(esi + 0x204);
    ebx++;
    edi = edi + 4;
    edx++;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = edi;
    if (CMP_L(ebx, edx)) goto loc_003CB2F2; /* jl: less (signed <) */

loc_003CB38E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CB3A0
 * Original: 0x003CB3A0 - 0x003CB53E (414 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB3A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB3A0: ;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 0x3C;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x40) = 0xFFFFFFFFu;
    MEM32(esp + 0x48) = 0x587BE4;
    MEM32(esp + 0x50) = ecx;
    PUSH32(esp, 0); sub_003CA4B0(); /* call 0x003CA4B0 */

loc_003CB3C6: ;
    edi = eax;
    esi = esp + 0x3C;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0); sub_001DFE30(); /* call 0x001DFE30 */

loc_003CB3D5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003CB53E(); return; } /* je: equal / zero */

loc_003CB3DD: ;
    edi = MEM32(esp + 0x58);
    PUSH32(esp, ebx);
    edx = esp + 0x34;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    MEM32(esp + 0x1C) = edx;
    /* nop */

loc_003CB3F0: ;
    esi = MEM32(esp + 0x4C);
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = MEM32(esp + 0x54);
    if (TEST_Z(esi, esi)) goto loc_003CB452; /* je: equal / zero */

loc_003CB3FC: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003CB452; /* je: equal / zero */

loc_003CB403: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003CB411: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003CB452; /* je: equal / zero */

loc_003CB418: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003CB42D; /* je: equal / zero */

loc_003CB420: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_003CB4E2; /* je: equal / zero */

loc_003CB42B: ;
    edi = eax;

loc_003CB42D: ;
    if (TEST_Z(edi, edi)) goto loc_003CB452; /* je: equal / zero */

loc_003CB431: ;
    xmm0 = MEMF(edi + 0xC); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x10); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x14); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_003CB452: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(0x76FE14);
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = ecx;
    xmm0 = MEMF(edx + 0x24); /* movss */
    MEM32(esp + 0x18) = ebp;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_003CB506; /* je: equal / zero */

loc_003CB4B1: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003CB506; /* je: equal / zero */

loc_003CB4B8: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003CB4C6: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003CB506; /* je: equal / zero */

loc_003CB4CD: ;
    eax = MEM32(esp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_003CB4F3; /* je: equal / zero */

loc_003CB4D5: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_003CB4E9; /* je: equal / zero */

loc_003CB4DC: ;
    MEM32(esp + 0x60) = eax;
    goto loc_003CB4F7;

loc_003CB4E2: ;
    edi = 0; /* xor self */
    goto loc_003CB452;

loc_003CB4E9: ;
    MEM32(esp + 0x60) = 0;
    goto loc_003CB506;

loc_003CB4F3: ;
    eax = MEM32(esp + 0x60);

loc_003CB4F7: ;
    if (TEST_Z(eax, eax)) goto loc_003CB506; /* je: equal / zero */

loc_003CB4FB: ;
    xmm0 = MEMF(eax + 0x18); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_003CB506: ;
    edx = MEM32(0x76FE14);
    xmm0 = MEMF(edx + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    MEMF(ebp + 0xC) = xmm0; /* movss */
    esi = esp + 0x44;
    ebp = ebp + 0x10;
    PUSH32(esp, 0); sub_001DFE30(); /* call 0x001DFE30 */

loc_003CB528: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003CB3F0; /* jne: not equal / not zero */

loc_003CB530: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CB550
 * Original: 0x003CB550 - 0x003CB5E2 (146 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB550: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_003CB564; /* jne: not equal / not zero */

loc_003CB55F: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003CB564: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_003CB5AE; /* je: equal / zero */

loc_003CB58A: ;
    if (CMP_B(MEM32(esi + 0x80), 8)) goto loc_003CB5AE; /* jb: below (unsigned <) */

loc_003CB593: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003CB59D: ;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003CB5A5: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_003CB5D1; /* jne: not equal / not zero */

loc_003CB5AE: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003CB5C0: ;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003CB5C8: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) { sub_003CB5E2(); return; } /* je: equal / zero */

loc_003CB5D1: ;
    eax = 0x1B;
    PUSH32(esp, 0); sub_003CA540(); /* call 0x003CA540 */

loc_003CB5DB: ;
    MEM32(0x84B4C0) = eax;
    g_seh_ebp = ebp; sub_003CB5EC(); return; /* tail jmp 0x003CB5EC */

}

/**
 * sub_003CB6D0
 * Original: 0x003CB6D0 - 0x003CB79C (204 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB6D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB6D0: ;
    eax = MEM32(0x84B4BC);
    esp = esp - 0x44;
    if (TEST_Z(eax, eax)) { sub_003CB79C(); return; } /* je: equal / zero */

loc_003CB6E0: ;
    if (CMP_NE(edx, ecx)) goto loc_003CB6F0; /* jne: not equal / not zero */

loc_003CB6E4: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_003CB6F0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx++;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 4));
    eax = MEM32(eax + 0xC);
    edx = edx + ecx;
    eax = eax + edx * 8 + 8;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_Z(ebp, ebp)) goto loc_003CB790; /* je: equal / zero */

loc_003CB712: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    PUSH32(esp, edi);
    edi = esp + 0x58;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_003CA430(); /* call 0x003CA430 */

loc_003CB725: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ebx = esp + 0x28;
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0012C4F0(); /* call 0x0012C4F0 */

loc_003CB738: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ebx = esp + 0x20;
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0012C4F0(); /* call 0x0012C4F0 */

loc_003CB74B: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003CB77B; /* jnp: not parity */

loc_003CB75A: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    xmm0 = xmm0 / MEMF(esp + 0x18); /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003CB77B; /* ja: above (unsigned >) */

loc_003CB778: ;
    xmm0 = xmm1; /* movaps */

loc_003CB77B: ;
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x10))) goto loc_003CB788; /* jbe: below or equal (unsigned <=) */

loc_003CB782: ;
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_003CB788: ;
    esi = esi + 0x10;
    ebp--;
    if ((ebp != 0)) goto loc_003CB725; /* jne: not equal / not zero */

loc_003CB78E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003CB790: ;
    xmm0 = MEMF(esp + 8); /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_003CB7B0
 * Original: 0x003CB7B0 - 0x003CB914 (356 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB7B0: ;
    esp = esp - 0x54;
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B4BC);
    if (TEST_Z(ebp, ebp)) { sub_003CB914(); return; } /* je: equal / zero */

loc_003CB7C2: ;
    ecx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x64);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(ecx, eax)) goto loc_003CB88B; /* jne: not equal / not zero */

loc_003CB7D5: ;
    ebx = MEM32(esp + 0x6C);
    edi = MEM32(esp + 0x74);
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 - MEMF(edi); /* subss */
    xmm1 = MEMF(0x649A1C); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 < xmm2)) goto loc_003CB800; /* jb: below (unsigned <) */

loc_003CB7F9: ;
    ecx = 1;
    goto loc_003CB802;

loc_003CB800: ;
    ecx = 0; /* xor self */

loc_003CB802: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 - MEMF(edi + 4); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 < xmm2)) goto loc_003CB81F; /* jb: below (unsigned <) */

loc_003CB818: ;
    eax = 1;
    goto loc_003CB821;

loc_003CB81F: ;
    eax = 0; /* xor self */

loc_003CB821: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 - MEMF(edi + 8); /* subss */
    xmm2 = xmm0; /* movaps */
    ecx = ecx & eax;
    xmm2 = xmm2 * xmm0; /* mulss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 < xmm2)) goto loc_003CB840; /* jb: below (unsigned <) */

loc_003CB839: ;
    eax = 1;
    goto loc_003CB842;

loc_003CB840: ;
    eax = 0; /* xor self */

loc_003CB842: ;
    if (TEST_NZ(ecx, eax)) goto loc_003CB90A; /* jne: not equal / not zero */

loc_003CB84A: ;
    SET_LO8(eax, MEM8(ebp + 0x28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CB864; /* je: equal / zero */

loc_003CB851: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = esp + 0x34;
    PUSH32(esp, 0); sub_0003C380(); /* call 0x0003C380 */

loc_003CB85C: ;
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F9410(); /* call 0x002F9410 */

loc_003CB864: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = esp + 0x50;
    PUSH32(esp, 0); sub_0003C380(); /* call 0x0003C380 */

loc_003CB86F: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, ebp);
    ebx = esp + 0x4C;
    PUSH32(esp, 0); sub_003CA890(); /* call 0x003CA890 */

loc_003CB87D: ;
    POP32(esp, edi);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, esi);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    POP32(esp, ebx);
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, ebp);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

loc_003CB88B: ;
    edx = MEM32(ebp + 0xC);
    ecx++;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 4));
    ecx = ecx + eax;
    edi = MEM32(edx + ecx * 8 + 0xC);
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = MEM32(edx + ecx * 8 + 8);
    eax = edx + ecx * 8 + 8;
    if (TEST_Z(edi, edi)) goto loc_003CB8CF; /* je: equal / zero */

loc_003CB8A5: ;
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = esp + 0x18;
    PUSH32(esp, 0); sub_0003C380(); /* call 0x0003C380 */

loc_003CB8B8: ;
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edi--;
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_003CB8C4: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003CB8D9; /* jne: not equal / not zero */

loc_003CB8C8: ;
    ebx = ebx + 0x10;
    if (TEST_NZ(edi, edi)) goto loc_003CB8B8; /* jne: not equal / not zero */

loc_003CB8CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

loc_003CB8D9: ;
    SET_LO8(eax, MEM8(ebp + 0x28));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CB8EA; /* je: equal / zero */

loc_003CB8E0: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F9410(); /* call 0x002F9410 */

loc_003CB8EA: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, ebp);
    ebx = esp + 0x14;
    PUSH32(esp, 0); sub_003CA890(); /* call 0x003CA890 */

loc_003CB8F8: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003CB8CF; /* jne: not equal / not zero */

loc_003CB8FC: ;
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003CA890(); /* call 0x003CA890 */

loc_003CB906: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003CB8CF; /* jne: not equal / not zero */

loc_003CB90A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_003CB930
 * Original: 0x003CB930 - 0x003CBA46 (278 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB930(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_003CB930: ;
    eax = MEM32(0x84B4BC);
    esp = esp - 0x14;
    if (TEST_Z(eax, eax)) { sub_003CBA46(); return; } /* je: equal / zero */

loc_003CB940: ;
    if (CMP_NE(edx, ecx)) goto loc_003CB94A; /* jne: not equal / not zero */

loc_003CB944: ;
    SET_LO8(eax, 1);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003CB94A: ;
    edx++;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 4));
    eax = MEM32(eax + 0xC);
    edx = edx + ecx;
    PUSH32(esp, esi);
    esi = MEM32(eax + edx * 8 + 0xC);
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = eax + edx * 8 + 8;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEM32(esp + 8) = edi;
    if (TEST_Z(esi, esi)) goto loc_003CBA36; /* je: equal / zero */

loc_003CB96C: ;
    xmm5 = MEMF(0x648E84); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = ecx;
    /* nop */

loc_003CB980: ;
    esi--;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    xmm6 = MEMF(ebx); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm6 = MEMF(edi + 0xC); /* movss */
    xmm6 = xmm6 + xmm5; /* addss */
    /* comiss xmm1, xmm6 - sets EFLAGS */
    if ((xmm1 > xmm6)) goto loc_003CBA27; /* ja: above (unsigned >) */

loc_003CB9EA: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(edi + 0xC); /* movss */
    xmm2 = xmm2 * xmm2; /* mulss */
    if ((xmm4 <= xmm1)) goto loc_003CBA17; /* jbe: below or equal (unsigned <=) */

loc_003CBA12: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_003CBA27; /* ja: above (unsigned >) */

loc_003CBA17: ;
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_003CBA3E; /* ja: above (unsigned >) */

loc_003CBA27: ;
    edi = edi + 0x10;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = edi;
    if (TEST_NZ(esi, esi)) goto loc_003CB980; /* jne: not equal / not zero */

loc_003CBA36: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003CBA3E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003CBA60
 * Original: 0x003CBA60 - 0x003CBB27 (199 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBA60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003CBA60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6D4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_003CBA78: ;
    eax = MEM32(ebp + 8);
    ebx = MEM32(0x84B4C0);
    xmm0 = MEMF(eax + 4); /* movss */
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x88) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x8C) = edx;
    MEM32(esp + 0x90) = ecx;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x94) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x98) = ecx;
    ecx = MEM32(ebx);
    edi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x2A4) = xmm0; /* movss */
    MEM32(esp + 0x9C) = edx;
    if (CMP_LE(ecx & ecx, 0)) goto loc_003CBAF9; /* jle: less or equal (signed <=) */

loc_003CBAD5: ;
    eax = MEM32(ebx + 4);
    esi = MEM32(eax + edi * 4);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_003C5790(); /* call 0x003C5790 */

loc_003CBAE8: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003CBB18; /* je: equal / zero */

loc_003CBAEF: ;
    eax = MEM32(ebx);
    edi++;
    if (CMP_L(edi, eax)) goto loc_003CBAD5; /* jl: less (signed <) */

loc_003CBAF6: ;
    eax = MEM32(ebp + 8);

loc_003CBAF9: ;
    edx = edx | 0xFFFFFFFFu;

loc_003CBAFC: ;
    ecx = MEM32(0x84B4BC);
    if (TEST_Z(ecx, ecx)) { sub_003CBB27(); return; } /* je: equal / zero */

loc_003CBB06: ;
    PUSH32(esp, ecx);
    ecx = ecx | 0xFFFFFFFFu;
    ebx = eax;
    PUSH32(esp, 0); sub_003CA8E0(); /* call 0x003CA8E0 */

loc_003CBB11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003CBB18: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + edi * 4);
    edx = ZX8(MEM8(edx + 0x17));
    eax = MEM32(ebp + 8);
    goto loc_003CBAFC;

}

/**
 * sub_003CBB40
 * Original: 0x003CBB40 - 0x003CBBDD (157 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBB40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003CBB40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6D4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_003CBB5A: ;
    ebx = MEM32(0x84B4C0);
    xmm0 = MEMF(esi + 4); /* movss */
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x9C) = eax;
    eax = MEM32(ebx);
    MEM32(esp + 0x88) = ecx;
    ecx = MEM32(esi);
    MEM32(esp + 0x8C) = edx;
    edx = MEM32(esi + 4);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x2A4) = xmm0; /* movss */
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0x98) = edx;
    if (CMP_LE(eax & eax, 0)) goto loc_003CBBD3; /* jle: less or equal (signed <=) */

loc_003CBBB2: ;
    ecx = MEM32(ebx + 4);
    esi = MEM32(ecx + edi * 4);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_003C5790(); /* call 0x003C5790 */

loc_003CBBC5: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_003CBBDD(); return; } /* je: equal / zero */

loc_003CBBCC: ;
    eax = MEM32(ebx);
    edi++;
    if (CMP_L(edi, eax)) goto loc_003CBBB2; /* jl: less (signed <) */

loc_003CBBD3: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003CBBF0
 * Original: 0x003CBBF0 - 0x003CBC56 (102 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBBF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CBBF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84B4C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(eax, eax)) goto loc_003CBC1E; /* je: equal / zero */

loc_003CBBFD: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_003CBC0D; /* je: equal / zero */

loc_003CBC04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_003CBC0A: ;
    esp = esp + 4;

loc_003CBC0D: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003CBC1B: ;
    esp = esp + 4;

loc_003CBC1E: ;
    eax = MEM32(0x84B4BC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84B4C0) = 0;
    if (TEST_Z(eax, eax)) goto loc_003CBC53; /* je: equal / zero */

loc_003CBC31: ;
    esi = eax;
    PUSH32(esp, 0); sub_003CA760(); /* call 0x003CA760 */

loc_003CBC38: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003CBC46: ;
    esp = esp + 4;
    MEM32(0x84B4BC) = 0;

loc_003CBC53: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003CBC60
 * Original: 0x003CBC60 - 0x003CBCE4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBC60(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CBC60: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003CBCE4(); return; } /* je: equal / zero */

loc_003CBC7B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_003CBC8F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CBCC4; /* je: equal / zero */

loc_003CBC9A: ;
    ecx = 0x75EE7C;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_003CBCA4: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_003CBCC1: ;
    esp = esp + 0x14;

loc_003CBCC4: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_003CBCDD: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_003CBD10
 * Original: 0x003CBD10 - 0x003CBD94 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBD10(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CBD10: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003CBD94(); return; } /* je: equal / zero */

loc_003CBD2B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_003CBD3F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CBD74; /* je: equal / zero */

loc_003CBD4A: ;
    ecx = 0x75EE5C;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_003CBD54: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_003CBD71: ;
    esp = esp + 0x14;

loc_003CBD74: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_003CBD8D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_003CBDC0
 * Original: 0x003CBDC0 - 0x003CBE51 (145 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBDC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CBDC0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003CBDCE; /* jne: not equal / not zero */

loc_003CBDC9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003CBDCE: ;
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
    if (TEST_Z(esi, esi)) goto loc_003CBE18; /* je: equal / zero */

loc_003CBDF6: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_003CBE18; /* jb: below (unsigned <) */

loc_003CBDFF: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003CBE09: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003CBE11: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_003CBE51(); return; } /* jne: not equal / not zero */

loc_003CBE18: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003CBE2A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003CBE32: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_003CBE51(); return; } /* jne: not equal / not zero */

loc_003CBE39: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_003CBE49: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003CBEA0
 * Original: 0x003CBEA0 - 0x003CBF02 (98 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBEA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CBEA0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x18);
    if (CMP_EQ(esi, edi)) goto loc_003CBEF9; /* je: equal / zero */

loc_003CBEA8: ;
    PUSH32(esp, ebx);

loc_003CBEA9: ;
    ebx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x18);
    ecx = ebx;
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, esi);
    MEM32(edx + 0x18) = eax;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003CBEC3: ;
    if (TEST_NZ(eax, eax)) goto loc_003CBEE8; /* jne: not equal / not zero */

loc_003CBEC7: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_003CBEE5: ;
    esp = esp + 4;

loc_003CBEE8: ;
    eax = MEM32(edi + 0x1C);
    eax--;
    esi = ebx;
    MEM32(edi + 0x1C) = eax;
    esi = MEM32(esi + 0x18);
    if (CMP_NE(esi, edi)) goto loc_003CBEA9; /* jne: not equal / not zero */

loc_003CBEF8: ;
    POP32(esp, ebx);

loc_003CBEF9: ;
    MEM32(edi + 0x1C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CBF10
 * Original: 0x003CBF10 - 0x003CBFD0 (192 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBF10(void)
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

loc_003CBF10: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi) = eax;
    eax = esi + 0x10;
    MEM32(esi + 0x150) = edi;
    MEM32(esi + 0x158) = edi;
    MEM32(esi + 0x160) = edi;
    MEM32(esi + 0xB0) = edi;
    MEM32(esi + 0x164) = edi;
    PUSH32(esp, 0); sub_003F8340(); /* call 0x003F8340 */

loc_003CBF41: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x10);
    if (CMP_EQ(eax, edi)) goto loc_003CBF50; /* je: equal / zero */

loc_003CBF4A: ;
    MEM32(esi + 0x98) = eax;

loc_003CBF50: ;
    edx = ZX16(MEM16(ecx + 4));
    fp_push(MEMD(0x648D08)); /* fld double */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esi + 0xD8) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esi + 0x94) = edx;
    MEM32(esi + 0xB4) = edi;
    MEM32(esi + 0xB8) = edi;
    MEM32(esi + 0xBC) = edi;
    MEM32(esi + 0xC0) = edi;
    MEM32(esi + 0xC4) = edi;
    MEM32(esi + 0xC8) = edi;
    MEM32(esi + 0xE0) = 1;
    MEM32(esi + 0xE4) = edi;
    xmm1 = MEMF(ecx); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esi + 0xD4) = xmm2; /* movss */
    if (1 /* jp after test - parity */) { sub_003CBFD0(); return; } /* jp: parity */

loc_003CBFC6: ;
    MEMF(esi + 0xD8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_003CBFEF(); return; /* tail jmp 0x003CBFEF */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003CC0D0
 * Original: 0x003CC0D0 - 0x003CC1FB (299 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC0D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003CC0D0: ;
    ecx = MEM32(eax + 0xCC);
    MEM32(eax + 0xD0) = ecx;
    ecx = MEM32(eax + 0xE4);
    ecx = ecx - 0;
    MEM16(eax + 0xE8) = 0;
    MEMF(eax + 0xCC) = xmm0; /* movss */
    if ((ecx == 0)) goto loc_003CC1BC; /* je: equal / zero */

loc_003CC0FC: ;
    ecx--;
    if ((ecx == 0)) goto loc_003CC17E; /* je: equal / zero */

loc_003CC0FF: ;
    ecx--;
    if ((ecx != 0)) goto loc_003CC1FA; /* jne: not equal / not zero */

loc_003CC106: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = MEMF(0x648D14); /* movss */
    if ((xmm1 >= xmm0)) goto loc_003CC11F; /* jae: above or equal (unsigned >=) */

loc_003CC116: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_003CC1FA; /* jb: below (unsigned <) */

loc_003CC11F: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0xE8) = LO16(ecx);
    if ((xmm1 < xmm0)) goto loc_003CC137; /* jb: below (unsigned <) */

loc_003CC12F: ;
    ecx--;
    MEM16(eax + 0xE8) = LO16(ecx);

loc_003CC137: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xE8);
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ecx & 0x80000001u;
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(eax + 0xCC) = xmm0; /* movss */
    if (((int32_t)ecx >= 0)) goto loc_003CC15B; /* jns: not sign (positive) */

loc_003CC156: ;
    ecx--;
    ecx = ecx | 0xFFFFFFFEu;
    ecx++;

loc_003CC15B: ;
    if ((ecx == 0)) goto loc_003CC1FA; /* je: equal / zero */

loc_003CC161: ;
    xmm1 = xmm1 - MEMF(eax + 0xD8); /* subss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(eax + 0xCC) = xmm2; /* movss */
    MEMF(eax + 0xD8) = xmm1; /* movss */
    esp += 4; return; /* ret */

loc_003CC17E: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003CC19F; /* jbe: below or equal (unsigned <=) */

loc_003CC18B: ;
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0xE8) = LO16(edx);
    MEMF(eax + 0xCC) = xmm1; /* movss */
    esp += 4; return; /* ret */

loc_003CC19F: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003CC1FA; /* jbe: below or equal (unsigned <=) */

loc_003CC1A7: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx--;
    MEM16(eax + 0xE8) = LO16(ecx);
    MEMF(eax + 0xCC) = xmm1; /* movss */
    esp += 4; return; /* ret */

loc_003CC1BC: ;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648D14))) goto loc_003CC1CB; /* jb: below (unsigned <) */

loc_003CC1C5: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    goto loc_003CC1D8;

loc_003CC1CB: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003CC1FA; /* jbe: below or equal (unsigned <=) */

loc_003CC1D3: ;
    ecx = (int32_t)xmm0; /* cvttss2si */
    ecx--;

loc_003CC1D8: ;
    xmm1 = MEMF(eax + 0xCC); /* movss */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEM16(eax + 0xE8) = LO16(ecx);
    MEMF(eax + 0xCC) = xmm1; /* movss */

loc_003CC1FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CC200
 * Original: 0x003CC200 - 0x003CC254 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC200(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CC200: ;
    eax = MEM32(ecx);
    (void)0; /* cmp MEM8(eax + 0x1C), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x168);
    esi = edi + -1;
    if (CMP_EQ(MEM8(eax + 0x1C), 1)) goto loc_003CC216; /* je: equal / zero */

loc_003CC214: ;
    esi = edi;

loc_003CC216: ;
    eax = MEM32(ecx + 0x15C);
    if (CMP_B(eax, 0x10)) goto loc_003CC226; /* jb: below (unsigned <) */

loc_003CC221: ;
    eax = 0x10;

loc_003CC226: ;
    ebx = MEM32(ecx + 0x14C);
    edx = MEM32(ecx + 0x154);
    edx = edx + ebx;
    edx = edx + eax;
    eax = edx + esi + -1;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    ecx = ZX16(MEM16(ecx + 0x94));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    POP32(esp, edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax = eax + ecx;
    POP32(esp, esi);
    eax = eax << 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003CC260
 * Original: 0x003CC260 - 0x003CC29B (59 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC260(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CC260: ;
    if (TEST_Z(ecx, ecx)) goto loc_003CC280; /* je: equal / zero */

loc_003CC264: ;
    if (CMP_EQ(MEM16(ecx), 0xFFFF)) goto loc_003CC280; /* je: equal / zero */

loc_003CC26B: ;
    (void)0; /* cmp MEM16(ecx + 2), 0xFFFF - flags set for next jcc */
    eax = ecx + 2;
    if (CMP_EQ(MEM16(ecx + 2), 0xFFFF)) goto loc_003CC280; /* je: equal / zero */

loc_003CC276: ;
    eax = eax + 2;
    if (CMP_NE(MEM16(eax), 0xFFFF)) goto loc_003CC276; /* jne: not equal / not zero */

loc_003CC280: ;
    eax = MEM32(esp + 4);
    MEM32(edx + 0xB4) = eax;
    eax = MEM32(esp + 8);
    MEM32(edx + 0xB8) = eax;
    MEM32(edx + 0xBC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003CC2A0
 * Original: 0x003CC2A0 - 0x003CC2D0 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC2A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003CC2A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    MEMF(ecx + 0xD4) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    if (1 /* jp after test - parity */) { sub_003CC2D0(); return; } /* jp: parity */

loc_003CC2C6: ;
    MEMF(ecx + 0xD8) = xmm1; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003CC300
 * Original: 0x003CC300 - 0x003CC357 (87 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CC300: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = MEM32(eax);
    MEMF(eax + 0x118) = xmm0; /* movss */
    MEMF(eax + 0x11C) = xmm0; /* movss */
    MEMF(eax + 0x120) = xmm0; /* movss */
    MEMF(eax + 0x10C) = xmm0; /* movss */
    MEMF(eax + 0x110) = xmm0; /* movss */
    MEMF(eax + 0x114) = xmm0; /* movss */
    MEMF(eax + 0x124) = xmm1; /* movss */
    ecx = MEM32(ecx + 0xC);
    if (TEST_Z(ecx, ecx)) { sub_003CC357(); return; } /* je: equal / zero */

loc_003CC34C: ;
    SET_LO8(edx, MEM8(ecx + 0x23));
    MEM8(eax + 0x128) = LO8(edx);
    g_seh_ebp = ebp; sub_003CC35E(); return; /* tail jmp 0x003CC35E */

}

/**
 * sub_003CC3B0
 * Original: 0x003CC3B0 - 0x003CC473 (195 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC3B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CC3B0: ;
    ecx = MEM32(eax);
    MEM8(eax + 0x129) = 0;
    MEM8(eax + 0x149) = 0;
    edx = MEM32(ecx + 0xC);
    if (TEST_Z(edx, edx)) goto loc_003CC472; /* je: equal / zero */

loc_003CC3CB: ;
    if (CMP_EQ(MEM8(edx + 0x1F), 0)) goto loc_003CC3DF; /* je: equal / zero */

loc_003CC3D1: ;
    SET_LO8(edx, 1);
    MEM8(eax + 0x129) = LO8(edx);
    MEM8(eax + 0x149) = LO8(edx);

loc_003CC3DF: ;
    edx = MEM32(ecx + 0xC);
    if (CMP_EQ(MEM8(edx + 0x20), 0)) goto loc_003CC3F6; /* je: equal / zero */

loc_003CC3E8: ;
    SET_LO8(edx, 2);
    MEM8(eax + 0x129) = MEM8(eax + 0x129) | LO8(edx);
    MEM8(eax + 0x149) = MEM8(eax + 0x149) | LO8(edx);

loc_003CC3F6: ;
    edx = MEM32(ecx + 0xC);
    if (CMP_EQ(MEM8(edx + 0x21), 0)) goto loc_003CC40D; /* je: equal / zero */

loc_003CC3FF: ;
    SET_LO8(edx, 4);
    MEM8(eax + 0x129) = MEM8(eax + 0x129) | LO8(edx);
    MEM8(eax + 0x149) = MEM8(eax + 0x149) | LO8(edx);

loc_003CC40D: ;
    edx = MEM32(ecx + 0xC);
    if (CMP_EQ(MEM8(edx + 0x22), 0)) goto loc_003CC424; /* je: equal / zero */

loc_003CC416: ;
    SET_LO8(edx, 8);
    MEM8(eax + 0x129) = MEM8(eax + 0x129) | LO8(edx);
    MEM8(eax + 0x149) = MEM8(eax + 0x149) | LO8(edx);

loc_003CC424: ;
    edx = MEM32(ecx + 0xC);
    if (CMP_EQ(MEM8(edx + 0x1C), 0)) goto loc_003CC43B; /* je: equal / zero */

loc_003CC42D: ;
    SET_LO8(edx, 0x10);
    MEM8(eax + 0x129) = MEM8(eax + 0x129) | LO8(edx);
    MEM8(eax + 0x149) = MEM8(eax + 0x149) | LO8(edx);

loc_003CC43B: ;
    edx = MEM32(ecx + 0xC);
    if (CMP_EQ(MEM8(edx + 0x1D), 0)) goto loc_003CC452; /* je: equal / zero */

loc_003CC444: ;
    SET_LO8(edx, 0x20);
    MEM8(eax + 0x129) = MEM8(eax + 0x129) | LO8(edx);
    MEM8(eax + 0x149) = MEM8(eax + 0x149) | LO8(edx);

loc_003CC452: ;
    ecx = MEM32(ecx + 0xC);
    SET_LO8(edx, MEM8(ecx + 0x1E));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003CC472; /* je: equal / zero */

loc_003CC45C: ;
    SET_LO8(edx, MEM8(eax + 0x129));
    SET_LO8(ecx, 0x40);
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    MEM8(eax + 0x129) = LO8(edx);
    MEM8(eax + 0x149) = MEM8(eax + 0x149) | LO8(ecx);

loc_003CC472: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CC480
 * Original: 0x003CC480 - 0x003CD1B4 (3380 bytes, 792 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC480(void)
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

loc_003CC480: ;
    esp = esp - 0x74;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(eax, eax)) goto loc_003CD1A6; /* je: equal / zero */

loc_003CC497: ;
    if (CMP_EQ(MEM16(ecx + 6), 0)) goto loc_003CD1A6; /* je: equal / zero */

loc_003CC4A2: ;
    SET_LO16(ecx, MEM16(esi + 0xE8));
    ebp = MEM32(eax + 0x24);
    ebx = MEM32(esi + 0xE0);
    eax = esi;
    MEM16(esp + 0x1C) = LO16(ecx);
    MEM32(esp + 0x2C) = ebx;
    PUSH32(esp, 0); sub_003CD520(); /* call 0x003CD520 */

loc_003CC4C2: ;
    SET_LO8(edx, MEM8(esi + 0xEC));
    edi = eax;
    eax = MEM32(esi + 0xE4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    MEM8(esp + 0xF) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_003CC4E6; /* je: equal / zero */

loc_003CC4DC: ;
    MEM32(esp + 0x20) = 0;
    goto loc_003CC4F5;

loc_003CC4E6: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_003CC4F1; /* jge: greater or equal (signed >=) */

loc_003CC4EF: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_003CC4F1: ;
    MEM32(esp + 0x20) = eax;

loc_003CC4F5: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax + 0x23));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003CCD48; /* je: equal / zero */

loc_003CC504: ;
    if (TEST_Z(ebx, ebx)) goto loc_003CC54F; /* je: equal / zero */

loc_003CC508: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_003CD1AD; /* jle: less or equal (signed <=) */

loc_003CC50E: ;
    if (CMP_G(ebx, 2)) goto loc_003CD1AD; /* jg: greater (signed >) */

loc_003CC517: ;
    PUSH32(esp, esi);
    eax = 1;
    ebx = esp + 0x54;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_003D02D0(); /* call 0x003D02D0 */

loc_003CC52A: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x5C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    esp = esp + 4;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x10));
    edi = ebp + ecx * 4;
    ebx = ebp + edx * 4;
    MEM32(esp + 0x10) = 0x3CFB40;
    goto loc_003CC57C;

loc_003CC54F: ;
    PUSH32(esp, esi);
    eax = 1;
    ebx = esp + 0x54;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_003D02D0(); /* call 0x003D02D0 */

loc_003CC562: ;
    eax = MEM32(esp + 0x58);
    esp = esp + 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = ebp + eax * 4;
    ebx = esp + 0x2C;
    MEM32(esp + 0x10) = 0x3CFB30;

loc_003CC57C: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    ebp = MEM32(esp + 0x18);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003CC5BF; /* je: equal / zero */

loc_003CC58B: ;
    ecx = MEM32(ebx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ecx;
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_003CC5A6: ;
    MEMF(esp + 0x80) = (float)fp_top(); fp_popp(); /* fstp */
    xmm6 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x28);
    esp = esp + 0x14;
    edi = edi + 4;
    ebx = ebx + 4;
    goto loc_003CC5C8;

loc_003CC5BF: ;
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x6C) = xmm6; /* movss */

loc_003CC5C8: ;
    SET_LO8(ecx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003CC603; /* je: equal / zero */

loc_003CC5CF: ;
    edx = MEM32(ebx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edx;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_003CC5EA: ;
    MEMF(esp + 0x84) = (float)fp_top(); fp_popp(); /* fstp */
    xmm6 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x28);
    esp = esp + 0x14;
    edi = edi + 4;
    ebx = ebx + 4;
    goto loc_003CC609;

loc_003CC603: ;
    MEMF(esp + 0x70) = xmm6; /* movss */

loc_003CC609: ;
    SET_LO8(ecx, MEM8(eax + 0x1E));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003CC644; /* je: equal / zero */

loc_003CC610: ;
    eax = MEM32(ebx);
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_003CC62B: ;
    MEMF(esp + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    xmm6 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x28);
    esp = esp + 0x14;
    edi = edi + 4;
    ebx = ebx + 4;
    goto loc_003CC64A;

loc_003CC644: ;
    MEMF(esp + 0x74) = xmm6; /* movss */

loc_003CC64A: ;
    SET_LO8(ecx, MEM8(eax + 0x1F));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003CC67E; /* jne: not equal / not zero */

loc_003CC651: ;
    SET_LO8(ecx, MEM8(eax + 0x20));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003CC67E; /* jne: not equal / not zero */

loc_003CC658: ;
    SET_LO8(ecx, MEM8(eax + 0x21));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003CC67E; /* jne: not equal / not zero */

loc_003CC65F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    goto loc_003CC75F;

loc_003CC67E: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_003CC735; /* je: equal / zero */

loc_003CC68A: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003CC71B; /* jle: less or equal (signed <=) */

loc_003CC690: ;
    if (CMP_G(eax, 2)) goto loc_003CC71B; /* jg: greater (signed >) */

loc_003CC699: ;
    xmm0 = MEMF(edi); /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    edi = edi + 4;
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    edi = edi + 4;
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(ebx); /* movss */
    edi = edi + 4;
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    ebx = ebx + 4;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    ebx = ebx + 4;
    ecx = esp + 0x50;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    eax = esp + 0x44;
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E5120(); /* call 0x003E5120 */

loc_003CC716: ;
    esp = esp + 4;
    goto loc_003CC765;

loc_003CC71B: ;
    MEMF(esp + 0x30) = xmm6; /* movss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x3C) = xmm6; /* movss */
    goto loc_003CC765;

loc_003CC735: ;
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    edi = edi + 4;
    edi = edi + 4;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */

loc_003CC75F: ;
    MEMF(esp + 0x3C) = xmm0; /* movss */

loc_003CC765: ;
    SET_LO8(ebx, MEM8(esp + 0xF));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003CC78B; /* je: equal / zero */

loc_003CC76D: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x34); /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 0x38) = xmm0; /* movss */

loc_003CC78B: ;
    xmm3 = MEMF(esi + 0x144); /* movss */
    xmm2 = MEMF(esi + 0x134); /* movss */
    xmm1 = MEMF(esi + 0x130); /* movss */
    xmm0 = MEMF(esi + 0x12C); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    /* comiss xmm4, xmm6 - sets EFLAGS */
    MEMF(esp + 0x40) = xmm0; /* movss */
    if ((xmm4 <= xmm6)) goto loc_003CC82A; /* jbe: below or equal (unsigned <=) */

loc_003CC7F0: ;
    ecx = esp + 0x40;
    eax = ecx;
    PUSH32(esp, 0); sub_003E4BB0(); /* call 0x003E4BB0 */

loc_003CC7FB: ;
    xmm5 = MEMF(esp + 0x4C); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x40); /* subss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x44); /* subss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 - MEMF(esp + 0x48); /* subss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    goto loc_003CC847;

loc_003CC82A: ;
    xmm5 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x50) = xmm6; /* movss */
    MEMF(esp + 0x54) = xmm6; /* movss */
    xmm7 = xmm6; /* movaps */
    xmm1 = xmm6; /* movaps */
    xmm0 = xmm6; /* movaps */

loc_003CC847: ;
    edi = MEM32(esp + 0x20);
    if (TEST_Z(LO16(edi), LO16(edi))) goto loc_003CCA51; /* je: equal / zero */

loc_003CC854: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm2 = MEMF(esi + 0xFC); /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003CC884; /* je: equal / zero */

loc_003CC866: ;
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 - MEMF(esi + 0x100); /* subss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 - MEMF(esi + 0x104); /* subss */
    goto loc_003CC89A;

loc_003CC884: ;
    xmm2 = MEMF(esi + 0x100); /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x104); /* movss */

loc_003CC89A: ;
    xmm3 = MEMF(esi + 0x108); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    /* comiss xmm4, xmm6 - sets EFLAGS */
    if ((xmm4 <= xmm6)) goto loc_003CC900; /* jbe: below or equal (unsigned <=) */

loc_003CC8E7: ;
    ecx = esp + 0x40;
    eax = ecx;
    PUSH32(esp, 0); sub_003E4BB0(); /* call 0x003E4BB0 */

loc_003CC8F2: ;
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    goto loc_003CC920;

loc_003CC900: ;
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x40) = xmm6; /* movss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    MEMF(esp + 0x48) = xmm6; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */

loc_003CC920: ;
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x44); /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x40); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x4C); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x48); /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x4C); /* mulss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x48); /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x44); /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x40); /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x4C); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0x40); /* mulss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x40); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x4C); /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x44); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x48); /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    xmm4 = xmm7; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x48); /* mulss */
    xmm7 = xmm7 * MEMF(esp + 0x44); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    ecx = esp + 0x50;
    xmm3 = xmm3 - xmm4; /* subss */
    xmm5 = xmm5 - xmm7; /* subss */
    eax = ecx;
    MEMF(esp + 0x50) = xmm5; /* movss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003E4BB0(); /* call 0x003E4BB0 */

loc_003CCA39: ;
    xmm5 = MEMF(esp + 0x5C); /* movss */
    xmm7 = MEMF(esp + 0x58); /* movss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */

loc_003CCA51: ;
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x30); /* mulss */
    xmm2 = xmm7; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x34); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x3C); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x38); /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x34); /* mulss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x3C); /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x38); /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x30); /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x3C); /* mulss */
    xmm7 = xmm7 * MEMF(esp + 0x38); /* mulss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x38); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0x3C); /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x30); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x30); /* mulss */
    xmm4 = xmm4 * MEMF(esp + 0x34); /* mulss */
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x58) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm1, xmm6 - sets EFLAGS */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm5; /* movss */
    if ((xmm1 <= xmm6)) goto loc_003CCBAB; /* jbe: below or equal (unsigned <=) */

loc_003CCB86: ;
    ecx = esp + 0x50;
    eax = ecx;
    PUSH32(esp, 0); sub_003E4BB0(); /* call 0x003E4BB0 */

loc_003CCB91: ;
    xmm3 = MEMF(esp + 0x5C); /* movss */
    xmm2 = MEMF(esp + 0x58); /* movss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    goto loc_003CCBBC;

loc_003CCBAB: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm6; /* movaps */
    xmm2 = xmm6; /* movaps */

loc_003CCBBC: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEMF(esi + 0x10C) = xmm0; /* movss */
    MEMF(esi + 0x110) = xmm1; /* movss */
    MEMF(esi + 0x114) = xmm2; /* movss */
    MEMF(esi + 0x124) = xmm3; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003CCBEC; /* je: equal / zero */

loc_003CCBE0: ;
    xmm6 = xmm6 - MEMF(esp + 0x6C); /* subss */
    MEMF(esp + 0x6C) = xmm6; /* movss */

loc_003CCBEC: ;
    (void)0; /* test LO16(edi), LO16(edi) - flags set for next jcc */
    xmm1 = MEMF(esp + 0x6C); /* movss */
    if (TEST_Z(LO16(edi), LO16(edi))) goto loc_003CCC9F; /* je: equal / zero */

loc_003CCBFB: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003CCC25; /* je: equal / zero */

loc_003CCBFF: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    xmm3 = MEMF(esi + 0xF0); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - MEMF(esi + 0x138); /* subss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    goto loc_003CCC49;

loc_003CCC25: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    xmm2 = MEMF(esi + 0xF0); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - MEMF(esi + 0x138); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */

loc_003CCC49: ;
    xmm3 = MEMF(esp + 0x70); /* movss */
    xmm3 = xmm3 - MEMF(esi + 0x13C); /* subss */
    MEMF(esi + 0x118) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0xF4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(esi + 0x11C) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0xF8); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x140); /* subss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(esi + 0x120) = xmm2; /* movss */
    goto loc_003CCCDE;

loc_003CCC9F: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x138); /* subss */
    MEMF(esi + 0x118) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x13C); /* subss */
    MEMF(esi + 0x11C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x140); /* subss */
    MEMF(esi + 0x120) = xmm0; /* movss */

loc_003CCCDE: ;
    xmm0 = MEMF(esp + 0x70); /* movss */
    MEMF(esi + 0x13C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    MEMF(esi + 0x140) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(esi + 0x12C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(esi + 0x130) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(esi + 0x134) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    eax = esi;
    MEMF(esi + 0x138) = xmm1; /* movss */
    MEMF(esi + 0x144) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003CC3B0(); /* call 0x003CC3B0 */

loc_003CCD41: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

loc_003CCD48: ;
    if (TEST_Z(ebx, ebx)) goto loc_003CCD93; /* je: equal / zero */

loc_003CCD4C: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_003CD1AD; /* jle: less or equal (signed <=) */

loc_003CCD52: ;
    if (CMP_G(ebx, 2)) goto loc_003CD1AD; /* jg: greater (signed >) */

loc_003CCD5B: ;
    PUSH32(esp, esi);
    eax = 1;
    ebx = esp + 0x54;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_003D02D0(); /* call 0x003D02D0 */

loc_003CCD6E: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x5C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    esp = esp + 4;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x10));
    edi = ebp + ecx * 4;
    ebx = ebp + edx * 4;
    MEM32(esp + 0x10) = 0x3CFB40;
    goto loc_003CCDC0;

loc_003CCD93: ;
    PUSH32(esp, esi);
    eax = 1;
    ebx = esp + 0x54;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_003D02D0(); /* call 0x003D02D0 */

loc_003CCDA6: ;
    eax = MEM32(esp + 0x58);
    esp = esp + 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = ebp + eax * 4;
    ebx = esp + 0x2C;
    MEM32(esp + 0x10) = 0x3CFB30;

loc_003CCDC0: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(ecx + 0x1C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebp = MEM32(esp + 0x18);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CCDFF; /* je: equal / zero */

loc_003CCDCF: ;
    edx = MEM32(ebx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edx;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = edx;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_003CCDEA: ;
    MEMF(esp + 0x80) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;
    edi = edi + 4;
    ebx = ebx + 4;
    goto loc_003CCE08;

loc_003CCDFF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x6C) = xmm0; /* movss */

loc_003CCE08: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003CCE43; /* je: equal / zero */

loc_003CCE13: ;
    ecx = MEM32(ebx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ecx;
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_003CCE2E: ;
    MEMF(esp + 0x84) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;
    edi = edi + 4;
    ebx = ebx + 4;
    goto loc_003CCE49;

loc_003CCE43: ;
    MEMF(esp + 0x70) = xmm0; /* movss */

loc_003CCE49: ;
    edx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edx + 0x1E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CCE84; /* je: equal / zero */

loc_003CCE54: ;
    eax = MEM32(ebx);
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = eax;
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_003CCE6F: ;
    MEMF(esp + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;
    edi = edi + 4;
    ebx = ebx + 4;
    goto loc_003CCE8A;

loc_003CCE84: ;
    MEMF(esp + 0x74) = xmm0; /* movss */

loc_003CCE8A: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(ecx + 0x1F));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CCEC2; /* je: equal / zero */

loc_003CCE95: ;
    edx = MEM32(ebx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edx;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = edx;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_003CCEB0: ;
    MEMF(esp + 0x74) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;
    edi = edi + 4;
    ebx = ebx + 4;
    goto loc_003CCEC8;

loc_003CCEC2: ;
    MEMF(esp + 0x60) = xmm0; /* movss */

loc_003CCEC8: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax + 0x20));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003CCF06; /* je: equal / zero */

loc_003CCED3: ;
    ecx = MEM32(ebx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ecx;
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_003CCEEE: ;
    MEMF(esp + 0x78) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x78); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;
    edi = edi + 4;
    ebx = ebx + 4;
    goto loc_003CCF0F;

loc_003CCF06: ;
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x64) = xmm2; /* movss */

loc_003CCF0F: ;
    edx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edx + 0x21));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CCF4D; /* je: equal / zero */

loc_003CCF1A: ;
    eax = MEM32(ebx);
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = eax;
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_003CCF35: ;
    MEMF(esp + 0x7C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0x7C); /* movss */
    xmm2 = MEMF(esp + 0x78); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;
    goto loc_003CCF50;

loc_003CCF4D: ;
    xmm1 = xmm0; /* movaps */

loc_003CCF50: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CCF7E; /* je: equal / zero */

loc_003CCF58: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x6C); /* subss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = xmm2; /* movaps */
    MEMF(esp + 0x64) = xmm3; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm2 = xmm3; /* movaps */

loc_003CCF7E: ;
    (void)0; /* cmp MEM16(esp + 0x20), 0 - flags set for next jcc */
    xmm3 = MEMF(esp + 0x6C); /* movss */
    if (CMP_EQ(MEM16(esp + 0x20), 0)) goto loc_003CD0EF; /* je: equal / zero */

loc_003CCF90: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CD000; /* je: equal / zero */

loc_003CCF94: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    xmm5 = MEMF(esi + 0xF0); /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 - MEMF(esi + 0x138); /* subss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esi + 0x100); /* movss */
    MEMF(esi + 0x118) = xmm4; /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - MEMF(esi + 0x130); /* subss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esi + 0x104); /* movss */
    MEMF(esi + 0x110) = xmm4; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - MEMF(esi + 0x134); /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    goto loc_003CD06A;

loc_003CD000: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    xmm4 = MEMF(esi + 0xF0); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 - MEMF(esi + 0x138); /* subss */
    xmm4 = xmm4 + xmm5; /* addss */
    MEMF(esi + 0x118) = xmm4; /* movss */
    xmm4 = MEMF(esi + 0x100); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 - MEMF(esi + 0x130); /* subss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(esi + 0x104); /* movss */
    MEMF(esi + 0x110) = xmm4; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - MEMF(esi + 0x134); /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */

loc_003CD06A: ;
    xmm5 = MEMF(esp + 0x70); /* movss */
    xmm5 = xmm5 - MEMF(esi + 0x13C); /* subss */
    xmm7 = MEMF(esi + 0xFC); /* movss */
    MEMF(esi + 0x114) = xmm4; /* movss */
    xmm4 = MEMF(esi + 0xF4); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x74); /* movss */
    MEMF(esi + 0x11C) = xmm4; /* movss */
    xmm4 = MEMF(esi + 0xF8); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - MEMF(esi + 0x140); /* subss */
    xmm4 = xmm4 + xmm6; /* addss */
    MEMF(esi + 0x120) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x60); /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 - MEMF(esi + 0x12C); /* subss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(esi + 0x10C) = xmm6; /* movss */
    goto loc_003CD170;

loc_003CD0EF: ;
    xmm5 = MEMF(esp + 0x74); /* movss */
    xmm4 = MEMF(esp + 0x60); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x138); /* subss */
    MEMF(esi + 0x118) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x13C); /* subss */
    MEMF(esi + 0x11C) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x140); /* subss */
    MEMF(esi + 0x120) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x12C); /* subss */
    MEMF(esi + 0x10C) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x130); /* subss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x134); /* subss */
    MEMF(esi + 0x114) = xmm0; /* movss */

loc_003CD170: ;
    xmm0 = MEMF(esp + 0x70); /* movss */
    MEMF(esi + 0x138) = xmm3; /* movss */
    MEMF(esi + 0x13C) = xmm0; /* movss */
    MEMF(esi + 0x140) = xmm5; /* movss */
    MEMF(esi + 0x12C) = xmm4; /* movss */
    MEMF(esi + 0x130) = xmm2; /* movss */
    MEMF(esi + 0x134) = xmm1; /* movss */

loc_003CD1A6: ;
    eax = esi;
    PUSH32(esp, 0); sub_003CC3B0(); /* call 0x003CC3B0 */

loc_003CD1AD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003CD1C0
 * Original: 0x003CD1C0 - 0x003CD2D5 (277 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD1C0: ;
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp - 0x30;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    xmm6 = xmm1; /* movaps */
    esi = eax;
    xmm6 = xmm6 - xmm7; /* subss */
    if (TEST_Z(ebp, ebp)) goto loc_003CD1E5; /* je: equal / zero */

loc_003CD1DE: ;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003CD1F8; /* jne: not equal / not zero */

loc_003CD1E5: ;
    if (TEST_Z(esi, esi)) { sub_003CD2D5(); return; } /* je: equal / zero */

loc_003CD1ED: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003CD2D5(); return; } /* je: equal / zero */

loc_003CD1F8: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    if (TEST_Z(ebp, ebp)) goto loc_003CD25B; /* je: equal / zero */

loc_003CD22F: ;
    xmm0 = MEMF(ebp); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x18); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_003CD25B: ;
    if (TEST_Z(esi, esi)) goto loc_003CD28A; /* je: equal / zero */

loc_003CD25F: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_003CD28A: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    eax = esp + 0x1C;
    xmm2 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003E5120(); /* call 0x003E5120 */

loc_003CD29F: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    esp = esp + 4;
    MEMF(edi + 0x18) = xmm0; /* movss */
    SET_LO8(eax, 3);
    MEM8(edi + 0x1C) = 1;
    g_seh_ebp = ebp; sub_003CD2DB(); return; /* tail jmp 0x003CD2DB */

}

/**
 * sub_003CD3B0
 * Original: 0x003CD3B0 - 0x003CD4B7 (263 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD3B0: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    if (TEST_Z(edi, edi)) goto loc_003CD48B; /* je: equal / zero */

loc_003CD3BE: ;
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(eax + 6));
    if (TEST_Z(LO16(ebp), LO16(ebp))) goto loc_003CD48A; /* je: equal / zero */

loc_003CD3CC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x24);
    eax = esi;
    PUSH32(esp, 0); sub_003CD520(); /* call 0x003CD520 */

loc_003CD3D7: ;
    ecx = ZX16(LO16(ebp));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(edi + 0x28); /* mulss */
    SET_LO8(ecx, MEM8(edi + 0x1C));
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = 0.0f; /* xorps self = zero */
    edx--;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = ebx + eax * 4;
    POP32(esp, ebx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003CD406; /* je: equal / zero */

loc_003CD3F9: ;
    ecx = MEM32(eax);
    MEM32(esi + 0xF0) = ecx;
    eax = eax + 4;
    goto loc_003CD40E;

loc_003CD406: ;
    MEMF(esi + 0xF0) = xmm0; /* movss */

loc_003CD40E: ;
    SET_LO8(ecx, MEM8(edi + 0x1D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003CD422; /* je: equal / zero */

loc_003CD415: ;
    edx = MEM32(eax);
    MEM32(esi + 0xF4) = edx;
    eax = eax + 4;
    goto loc_003CD42A;

loc_003CD422: ;
    MEMF(esi + 0xF4) = xmm0; /* movss */

loc_003CD42A: ;
    SET_LO8(ecx, MEM8(edi + 0x1E));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003CD43E; /* je: equal / zero */

loc_003CD431: ;
    ecx = MEM32(eax);
    MEM32(esi + 0xF8) = ecx;
    eax = eax + 4;
    goto loc_003CD446;

loc_003CD43E: ;
    MEMF(esi + 0xF8) = xmm0; /* movss */

loc_003CD446: ;
    SET_LO8(ecx, MEM8(edi + 0x23));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(edi + 0x1F));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_003CD4B7(); return; } /* je: equal / zero */

loc_003CD450: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003CD48D; /* jne: not equal / not zero */

loc_003CD454: ;
    SET_LO8(ecx, MEM8(edi + 0x20));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003CD48D; /* jne: not equal / not zero */

loc_003CD45B: ;
    SET_LO8(ecx, MEM8(edi + 0x21));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003CD48D; /* jne: not equal / not zero */

loc_003CD462: ;
    MEMF(esi + 0xFC) = xmm0; /* movss */
    MEMF(esi + 0x100) = xmm0; /* movss */
    MEMF(esi + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0x108) = xmm0; /* movss */

loc_003CD48A: ;
    POP32(esp, ebp);

loc_003CD48B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003CD48D: ;
    edx = MEM32(eax);
    eax = eax + 4;
    MEM32(esi + 0xFC) = edx;
    ecx = MEM32(eax);
    eax = eax + 4;
    MEM32(esi + 0x100) = ecx;
    edx = MEM32(eax);
    MEM32(esi + 0x104) = edx;
    eax = MEM32(eax + 4);
    POP32(esp, ebp);
    MEM32(esi + 0x108) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CD520
 * Original: 0x003CD520 - 0x003CD56F (79 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD520(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CD520: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0xC);
    SET_LO8(eax, MEM8(ecx + 0x1E));
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x1D));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ebx, MEM8(ecx + 0x1C));
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    edx = edx + eax;
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    edx = edx + eax;
    SET_LO8(eax, MEM8(ecx + 0x23));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003CD56F(); return; } /* je: equal / zero */

loc_003CD552: ;
    SET_LO8(eax, MEM8(ecx + 0x1F));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003CD567; /* jne: not equal / not zero */

loc_003CD559: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003CD567; /* jne: not equal / not zero */

loc_003CD560: ;
    SET_LO8(eax, MEM8(ecx + 0x21));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003CD56A; /* je: equal / zero */

loc_003CD567: ;
    esi = esi + 4;

loc_003CD56A: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003CD5A0
 * Original: 0x003CD5A0 - 0x003CD5D8 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD5A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD5A0: ;
    esp = esp - 0x1C;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0;
    if (TEST_NZ(eax, eax)) { sub_003CD5D8(); return; } /* jne: not equal / not zero */

loc_003CD5BE: ;
    ecx = esi;
    PUSH32(esp, 0); sub_003CFAA0(); /* call 0x003CFAA0 */

loc_003CD5C5: ;
    edx = MEM32(esi + 0x164);
    SET_LO16(edi, MEM16(esi + 0x94));
    MEM32(esp + 0xC) = edx;
    g_seh_ebp = ebp; sub_003CD5EF(); return; /* tail jmp 0x003CD5EF */

}

/**
 * sub_003CD6A0
 * Original: 0x003CD6A0 - 0x003CD6E8 (72 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD6A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD6A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* nop */
    ecx = ZX16(LO16(edi));
    ecx = ecx << 5;
    esi = ebp;
    ecx = ecx + 0x74F510;
    edi = edi;

loc_003CD6C0: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(eax));
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_003CD6E8(); return; } /* jne: not equal / not zero */

loc_003CD6CA: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003CD6E4; /* je: equal / zero */

loc_003CD6CE: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(eax));
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_003CD6E8(); return; } /* jne: not equal / not zero */

loc_003CD6DA: ;
    ecx = ecx + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003CD6C0; /* jne: not equal / not zero */

loc_003CD6E4: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_003CD6ED(); return; /* tail jmp 0x003CD6ED */

}

/**
 * sub_003CD710
 * Original: 0x003CD710 - 0x003CD8DD (461 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD710: ;
    eax = MEM32(ebx);
    eax = ZX16(MEM16(eax + 4));
    edx = MEM32(ebx + 4);
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_BE(eax, esi)) goto loc_003CD8D7; /* jbe: below or equal (unsigned <=) */

loc_003CD72C: ;
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = edx + 4;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, ebp);
    /* nop */

loc_003CD740: ;
    eax = MEM32(ebx + 0x98);
    ecx = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(eax + ecx + 0x20));
    (void)0; /* cmp LO16(ecx), 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_003CD86D; /* je: equal / zero */

loc_003CD75E: ;
    if (CMP_NE(LO16(ecx), 0xEEEE)) goto loc_003CD7AC; /* jne: not equal / not zero */

loc_003CD765: ;
    eax = MEM32(ebx + 0x174);
    eax = eax + esi;
    eax = edx + eax * 4;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x178);
    ecx = ecx + esi;
    eax = edx + ecx * 4;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(ebx + 0x180);
    eax = eax + esi;
    eax = edx + eax * 4;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(eax) = xmm0; /* movss */
    goto loc_003CD86D;

loc_003CD7AC: ;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, 4 - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(edi, 4)) goto loc_003CD831; /* jl: less (signed <) */

loc_003CD7B7: ;
    eax = MEM32(esp + 0x14);
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    edi = edi + 0xFFFFFFFCu;
    edi = edi >> 2;
    edi++;
    ebp = edi * 4;
    ecx = edx + ecx * 4 + 4;
    MEM32(esp + 0xC) = ebp;
    goto loc_003CD7E0;

    /* nop */

loc_003CD7E0: ;
    ebp = MEM32(ecx + -4);
    xmm0 = MEMF(eax + -4); /* movss */
    MEM32(eax + -4) = ebp;
    MEMF(ecx + -4) = xmm0; /* movss */
    ebp = MEM32(ecx);
    xmm0 = MEMF(eax); /* movss */
    MEM32(eax) = ebp;
    MEMF(ecx) = xmm0; /* movss */
    ebp = MEM32(ecx + 4);
    xmm0 = MEMF(eax + 4); /* movss */
    MEM32(eax + 4) = ebp;
    MEMF(ecx + 4) = xmm0; /* movss */
    ebp = MEM32(ecx + 8);
    xmm0 = MEMF(eax + 8); /* movss */
    MEM32(eax + 8) = ebp;
    MEMF(ecx + 8) = xmm0; /* movss */
    eax = eax + 0x10;
    ecx = ecx + 0x10;
    edi--;
    if ((edi != 0)) goto loc_003CD7E0; /* jne: not equal / not zero */

loc_003CD825: ;
    edi = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0xC);

loc_003CD831: ;
    if (CMP_AE(eax, edi)) goto loc_003CD86D; /* jae: above or equal (unsigned >=) */

loc_003CD835: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    ecx = ecx + eax;
    eax = eax + esi;
    ebp = edi;
    ebp = ebp - MEM32(esp + 0xC);
    ecx = edx + ecx * 4;
    eax = edx + eax * 4;
    MEM32(esp + 0xC) = ebp;
    /* nop */

loc_003CD850: ;
    ebp = MEM32(ecx);
    xmm0 = MEMF(eax); /* movss */
    MEM32(eax) = ebp;
    ebp = MEM32(esp + 0xC);
    MEMF(ecx) = xmm0; /* movss */
    eax = eax + 4;
    ecx = ecx + 4;
    ebp--;
    MEM32(esp + 0xC) = ebp;
    if ((ebp != 0)) goto loc_003CD850; /* jne: not equal / not zero */

loc_003CD86D: ;
    ecx = MEM32(ebx + 0x174);
    ecx = ecx + esi;
    eax = edx + ecx * 4;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(ebx + 0x178);
    eax = eax + esi;
    eax = edx + eax * 4;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x180);
    ecx = ecx + esi;
    eax = edx + ecx * 4;
    ecx = MEM32(esp + 0x14);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(eax) = xmm0; /* movss */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x24;
    eax = edi * 4;
    ecx = ecx + eax;
    eax = MEM32(esp + 0x18);
    esi = esi + edi;
    eax--;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_003CD740; /* jne: not equal / not zero */

loc_003CD8D6: ;
    POP32(esp, ebp);

loc_003CD8D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD8E0
 * Original: 0x003CD8E0 - 0x003CD906 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD8E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD8E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    (void)0; /* cmp MEM8(esi + 0x1C), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_NE(MEM8(esi + 0x1C), 1)) { sub_003CD906(); return; } /* jne: not equal / not zero */

loc_003CD8EE: ;
    xmm6 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, ecx);
    SET_LO16(ecx, MEM16(ecx + 0x94));
    PUSH32(esp, 0); sub_003CDDA0(); /* call 0x003CDDA0 */

loc_003CD901: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_003CD91D(); return; /* tail jmp 0x003CD91D */

}

/**
 * sub_003CD940
 * Original: 0x003CD940 - 0x003CD98C (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD940(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm7;

loc_003CD940: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    eax = ZX16(MEM16(edx + 0x16));
    eax = eax + eax * 8;
    eax = MEM32(eax * 4 + 0x74F628);
    if (TEST_Z(eax, eax)) goto loc_003CD96F; /* je: equal / zero */

loc_003CD95A: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003CD96C: ;
    esp = esp + 0x10;

loc_003CD96F: ;
    if (TEST_Z(edi, edi)) goto loc_003CD98A; /* je: equal / zero */

loc_003CD973: ;
    eax = MEM32(esp + 8);
    xmm7 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_003CD1C0(); /* call 0x003CD1C0 */

loc_003CD987: ;
    esp = esp + 4;

loc_003CD98A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CD990
 * Original: 0x003CD990 - 0x003CD9C2 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD990(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CD990: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    eax = ZX16(MEM16(edx + 0x16));
    eax = eax + eax * 8;
    eax = MEM32(eax * 4 + 0x74F62C);
    if (TEST_Z(eax, eax)) goto loc_003CD9C1; /* je: equal / zero */

loc_003CD9A7: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003CD9BE: ;
    esp = esp + 0x14;

loc_003CD9C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD9D0
 * Original: 0x003CD9D0 - 0x003CD9FD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD9D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CD9D0: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    eax = ZX16(MEM16(edx + 0x16));
    eax = eax + eax * 8;
    eax = MEM32(eax * 4 + 0x74F630);
    if (TEST_Z(eax, eax)) goto loc_003CD9FC; /* je: equal / zero */

loc_003CD9E7: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003CD9F9: ;
    esp = esp + 0x10;

loc_003CD9FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CDA00
 * Original: 0x003CDA00 - 0x003CDA91 (145 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDA00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CDA00: ;
    esp = esp - 0x18;
    xmm2 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ebp);
    /* nop */
    eax = eax - 0;
    if ((eax == 0)) { sub_003CDA91(); return; } /* je: equal / zero */

loc_003CDA15: ;
    eax--;
    if ((eax == 0)) goto loc_003CDA63; /* je: equal / zero */

loc_003CDA18: ;
    eax--;
    if ((eax == 0)) goto loc_003CDA32; /* je: equal / zero */

loc_003CDA1B: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = edx;
    MEM32(esp + 0xC) = edx;
    g_seh_ebp = ebp; sub_003CDAEC(); return; /* tail jmp 0x003CDAEC */

loc_003CDA32: ;
    ebp = MEM32(ebx + 0x15C);
    ecx = MEM32(ebx + 0x160);
    eax = MEM32(edi + 0x160);
    edx = MEM32(esi + 0x160);
    MEM32(esp + 8) = ebp;
    ebp = MEM32(edi + 0x15C);
    MEM32(esp + 4) = ebp;
    ebp = MEM32(esi + 0x15C);
    g_seh_ebp = ebp; sub_003CDAE8(); return; /* tail jmp 0x003CDAE8 */

loc_003CDA63: ;
    ebp = MEM32(ebx + 0x154);
    ecx = MEM32(ebx + 0x158);
    eax = MEM32(edi + 0x158);
    edx = MEM32(esi + 0x158);
    MEM32(esp + 8) = ebp;
    ebp = MEM32(edi + 0x154);
    MEM32(esp + 4) = ebp;
    ebp = MEM32(esi + 0x154);
    g_seh_ebp = ebp; sub_003CDAE8(); return; /* tail jmp 0x003CDAE8 */

}

/**
 * sub_003CDBC0
 * Original: 0x003CDBC0 - 0x003CDC1A (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CDBC0: ;
    esp = esp - 0x18;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 4);
    xmm4 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x168);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edx + 0x168);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x18) = ecx;
    xmm4 = xmm4 - xmm3; /* subss */
    if (CMP_AE(esi, eax)) { sub_003CDC1A(); return; } /* jae: above or equal (unsigned >=) */

loc_003CDC04: ;
    eax = MEM32(ebp + 0x168);
    if (CMP_AE(esi, eax)) goto loc_003CDC14; /* jae: above or equal (unsigned >=) */

loc_003CDC0E: ;
    MEM32(esp + 0x10) = esi;
    g_seh_ebp = ebp; sub_003CDC30(); return; /* tail jmp 0x003CDC30 */

loc_003CDC14: ;
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_003CDC2C(); return; /* tail jmp 0x003CDC2C */

}

/**
 * sub_003CDDA0
 * Original: 0x003CDDA0 - 0x003CDEF5 (341 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDDA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CDDA0: ;
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    xmm7 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = edx;
    eax = MEM32(edi + 4);
    edx = MEM32(esi + 4);
    xmm7 = xmm7 - xmm6; /* subss */
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_003CDEE0; /* jbe: below or equal (unsigned <=) */

loc_003CDDCA: ;
    ecx = ZX16(LO16(ecx));
    MEM32(esp + 0x14) = ecx;

loc_003CDDD1: ;
    PUSH32(esp, ebp);
    xmm2 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003E5120(); /* call 0x003E5120 */

loc_003CDDDA: ;
    ecx = MEM32(ebx + 0x180);
    ecx = ecx << 2;
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm1 = MEMF(ecx + eax); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + edx) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x184);
    ecx = ecx << 2;
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm1 = MEMF(ecx + eax); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + edx) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x188);
    ecx = ecx << 2;
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm1 = MEMF(ecx + eax); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + edx) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x18C);
    ecx = ecx << 2;
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm1 = MEMF(ecx + eax); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + edx) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x190);
    ecx = ecx << 2;
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm1 = MEMF(ecx + eax); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + edx) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x194);
    ecx = ecx << 2;
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm1 = MEMF(ecx + eax); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + edx) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x168);
    ebp = ebp + ecx * 4;
    ecx = MEM32(edi + 0x168);
    eax = eax + ecx * 4;
    ecx = MEM32(esi + 0x168);
    edx = edx + ecx * 4;
    ecx = MEM32(esp + 0x18);
    esp = esp + 4;
    ecx--;
    MEM32(esp + 0x14) = ecx;
    if ((ecx != 0)) goto loc_003CDDD1; /* jne: not equal / not zero */

loc_003CDEE0: ;
    PUSH32(esp, 0);
    xmm3 = xmm6; /* movaps */
    xmm4 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003CDA00(); /* call 0x003CDA00 */

loc_003CDEED: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003CDF00
 * Original: 0x003CDF00 - 0x003CE31A (1050 bytes, 266 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDF00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CDF00: ;
    edx = MEM32(esp + 4);
    xmm4 = MEMF(0x648D14); /* movss */
    esp = esp - 0xC;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    ebx = ecx;
    ecx = MEM32(esp + 0x20);
    ebp = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    xmm4 = xmm4 - xmm3; /* subss */
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_003CE304; /* jbe: below or equal (unsigned <=) */

loc_003CDF2F: ;
    xmm5 = MEMF(0x648D88); /* movss */
    xmm2 = MEMF(0x648D30); /* movss */
    xmm6 = MEMF(0x648D84); /* movss */
    eax = ZX16(LO16(eax));
    MEM32(esp + 0x14) = eax;
    edi = edi;

loc_003CDF50: ;
    ecx = MEM32(ebx + 0x170);
    ecx = ecx << 2;
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm0 = xmm0 - MEMF(ecx + esi); /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    eax = ecx + ebp;
    if ((xmm0 <= xmm5)) goto loc_003CDF97; /* jbe: below or equal (unsigned <=) */

loc_003CDF6B: ;
    goto loc_003CDF70;

    /* nop */

loc_003CDF70: ;
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x170);
    ecx = ecx << 2;
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm0 = xmm0 - MEMF(ecx + esi); /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    eax = ecx + ebp;
    if ((xmm0 > xmm5)) goto loc_003CDF70; /* ja: above (unsigned >) */

loc_003CDF97: ;
    ecx = MEM32(ebx + 0x170);
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 - MEMF(esi + ecx * 4); /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_003CDFD7; /* jbe: below or equal (unsigned <=) */

loc_003CDFAB: ;
    goto loc_003CDFB0;

    /* nop */

loc_003CDFB0: ;
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x170);
    ecx = ecx << 2;
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm0 = xmm0 - MEMF(ecx + esi); /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    eax = ecx + ebp;
    if ((xmm6 > xmm0)) goto loc_003CDFB0; /* ja: above (unsigned >) */

loc_003CDFD7: ;
    eax = MEM32(ebx + 0x174);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm0 = xmm0 - MEMF(eax + esi); /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003CE020; /* jbe: below or equal (unsigned <=) */

loc_003CDFEF: ;
    /* nop */

loc_003CDFF0: ;
    edx = MEM32(ebx + 0x174);
    xmm0 = MEMF(ebp + edx * 4); /* movss */
    eax = ebp + edx * 4;
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(ebx + 0x174);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm0 = xmm0 - MEMF(eax + esi); /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_003CDFF0; /* ja: above (unsigned >) */

loc_003CE020: ;
    eax = MEM32(ebx + 0x174);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm0 = xmm0 - MEMF(eax + esi); /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_003CE070; /* jbe: below or equal (unsigned <=) */

loc_003CE038: ;
    goto loc_003CE040;

    /* nop */

loc_003CE040: ;
    eax = MEM32(ebx + 0x174);
    xmm0 = MEMF(ebp + eax * 4); /* movss */
    eax = ebp + eax * 4;
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(ebx + 0x174);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm0 = xmm0 - MEMF(eax + esi); /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 > xmm0)) goto loc_003CE040; /* ja: above (unsigned >) */

loc_003CE070: ;
    eax = MEM32(ebx + 0x178);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm0 = xmm0 - MEMF(eax + esi); /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003CE0C0; /* jbe: below or equal (unsigned <=) */

loc_003CE088: ;
    goto loc_003CE090;

    /* nop */

loc_003CE090: ;
    ecx = MEM32(ebx + 0x178);
    xmm0 = MEMF(ebp + ecx * 4); /* movss */
    eax = ebp + ecx * 4;
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(ebx + 0x178);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm0 = xmm0 - MEMF(eax + esi); /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_003CE090; /* ja: above (unsigned >) */

loc_003CE0C0: ;
    eax = MEM32(ebx + 0x178);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm0 = xmm0 - MEMF(eax + esi); /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_003CE110; /* jbe: below or equal (unsigned <=) */

loc_003CE0D8: ;
    goto loc_003CE0E0;

    /* nop */

loc_003CE0E0: ;
    edx = MEM32(ebx + 0x178);
    xmm0 = MEMF(ebp + edx * 4); /* movss */
    eax = ebp + edx * 4;
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(ebx + 0x178);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm0 = xmm0 - MEMF(eax + esi); /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 > xmm0)) goto loc_003CE0E0; /* ja: above (unsigned >) */

loc_003CE110: ;
    eax = MEM32(ebx);
    eax = ZX8(MEM8(eax + 0x1C));
    eax = eax - 0;
    if ((eax == 0)) goto loc_003CE156; /* je: equal / zero */

loc_003CE11B: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_003CE192; /* jne: not equal / not zero */

loc_003CE120: ;
    ecx = MEM32(ebx + 0x170);
    ecx = ecx << 2;
    edx = ecx + esi;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ecx + ebp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + ebp + 8);
    MEM32(esp + 0x20) = edx;
    eax = edx + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = edx + 8;
    goto loc_003CE18A;

loc_003CE156: ;
    edx = MEM32(ebx + 0x170);
    edx = edx << 2;
    ecx = edx + esi;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(edx + ebp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx + ebp + 4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx + ebp);
    MEM32(esp + 0x20) = ecx;
    eax = ecx + 8;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = ecx + 4;

loc_003CE18A: ;
    PUSH32(esp, 0); sub_003CFFC0(); /* call 0x003CFFC0 */

loc_003CE18F: ;
    esp = esp + 0xC;

loc_003CE192: ;
    eax = MEM32(ebx + 0x170);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + edi) = xmm0; /* movss */
    eax = MEM32(ebx + 0x174);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + edi) = xmm0; /* movss */
    eax = MEM32(ebx + 0x178);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + edi) = xmm0; /* movss */
    eax = MEM32(ebx + 0x180);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + edi) = xmm0; /* movss */
    eax = MEM32(ebx + 0x184);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + edi) = xmm0; /* movss */
    eax = MEM32(ebx + 0x188);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    edx = MEM32(esp + 0x20);
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + edi) = xmm0; /* movss */
    eax = MEM32(ebx + 0x18C);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + edi) = xmm0; /* movss */
    eax = MEM32(ebx + 0x190);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + edi) = xmm0; /* movss */
    eax = MEM32(ebx + 0x194);
    eax = eax << 2;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(eax + edi) = xmm0; /* movss */
    ecx = MEM32(edx + 0x168);
    eax = MEM32(ebx + 0x168);
    esi = esi + ecx * 4;
    ecx = MEM32(esp + 0x24);
    ebp = ebp + eax * 4;
    eax = MEM32(ecx + 0x168);
    edi = edi + eax * 4;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    if ((MEM32(esp + 0x14) != 0)) goto loc_003CDF50; /* jne: not equal / not zero */

loc_003CE304: ;
    PUSH32(esp, 0);
    esi = ecx;
    edi = edx;
    PUSH32(esp, 0); sub_003CDA00(); /* call 0x003CDA00 */

loc_003CE30F: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003CE320
 * Original: 0x003CE320 - 0x003CE4F2 (466 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2, xmm3, xmm4, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CE320: ;
    esp = esp - 0x20;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x30);
    SET_LO16(eax, MEM16(ecx + 0x94));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    xmm6 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    edx = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    ebx = MEM32(ebx);
    ebx = MEM32(ebx + 8);
    ebx = MEM32(ebx + 0x18);
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(edx + 0xC);
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(esp + 0x10);
    ebx = MEM32(ebx + 0xC);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = ebx;
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_003CE4CB; /* jbe: below or equal (unsigned <=) */

loc_003CE37C: ;
    xmm7 = MEMF(0x648D10); /* movss */
    eax = ZX16(LO16(eax));
    MEM32(esp + 0x18) = eax;
    goto loc_003CE391;

loc_003CE38D: ;
    edx = MEM32(esp + 0x1C);

loc_003CE391: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = edx;
    PUSH32(esp, 0); sub_003D1230(); /* call 0x003D1230 */

loc_003CE39D: ;
    ebx = eax;
    eax = MEM32(esp + 0x14);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0); sub_003D1230(); /* call 0x003D1230 */

loc_003CE3B1: ;
    esp = esp + 8;
    (void)0; /* test LO8(ebx), 0xE0 - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    if (TEST_Z(LO8(ebx), 0xE0)) goto loc_003CE41B; /* je: equal / zero */

loc_003CE3BD: ;
    if (TEST_Z(LO8(eax), 0xE0)) goto loc_003CE3E7; /* je: equal / zero */

loc_003CE3C1: ;
    PUSH32(esp, esi);
    edx = ebp;
    eax = edi;
    xmm2 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003E5120(); /* call 0x003E5120 */

loc_003CE3CE: ;
    PUSH32(esp, esi);
    eax = ebp;
    xmm2 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003E5120(); /* call 0x003E5120 */

loc_003CE3D9: ;
    esp = esp + 8;
    esi = esi + 0x10;
    edi = edi + 0x10;
    ebp = ebp + 0x10;
    goto loc_003CE44D;

loc_003CE3E7: ;
    eax = MEM32(esi);
    MEM32(ebp) = eax;
    ecx = MEM32(esi + 4);
    esi = esi + 4;
    ebp = ebp + 4;
    MEM32(ebp) = ecx;
    edx = MEM32(esi + 4);
    esi = esi + 4;
    ebp = ebp + 4;
    MEM32(ebp) = edx;
    eax = MEM32(esi + 4);
    esi = esi + 4;
    ebp = ebp + 4;
    MEM32(ebp) = eax;
    ebp = ebp + 4;
    esi = esi + 4;
    edi = edi + 0x10;
    goto loc_003CE44D;

loc_003CE41B: ;
    ecx = MEM32(edi);
    MEM32(ebp) = ecx;
    edx = MEM32(edi + 4);
    edi = edi + 4;
    ebp = ebp + 4;
    MEM32(ebp) = edx;
    eax = MEM32(edi + 4);
    edi = edi + 4;
    ebp = ebp + 4;
    MEM32(ebp) = eax;
    ecx = MEM32(edi + 4);
    edi = edi + 4;
    ebp = ebp + 4;
    MEM32(ebp) = ecx;
    ebp = ebp + 4;
    edi = edi + 4;
    esi = esi + 0x10;

loc_003CE44D: ;
    ecx = 8;
    MEM32(esp + 0x14) = 2;
    /* nop */

loc_003CE460: ;
    SET_LO8(edx, 0x80);

loc_003CE462: ;
    ebx = MEM32(esp + 0x28);
    eax = ZX8(LO8(edx));
    eax = eax << LO8(ecx);
    if (TEST_Z(ebx, eax)) goto loc_003CE49A; /* je: equal / zero */

loc_003CE46F: ;
    ebx = MEM32(esp + 0x2C);
    if (TEST_Z(ebx, eax)) goto loc_003CE48A; /* je: equal / zero */

loc_003CE477: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    MEMF(ebp) = xmm0; /* movss */
    goto loc_003CE49F;

loc_003CE48A: ;
    eax = MEM32(esi);
    MEM32(ebp) = eax;
    ebp = ebp + 4;
    esi = esi + 4;
    edi = edi + 4;
    goto loc_003CE4A8;

loc_003CE49A: ;
    eax = MEM32(edi);
    MEM32(ebp) = eax;

loc_003CE49F: ;
    edi = edi + 4;
    ebp = ebp + 4;
    esi = esi + 4;

loc_003CE4A8: ;
    SET_LO8(edx, LO8(edx) >> 1);
    if (CMP_NE(LO8(edx), 0x10)) goto loc_003CE462; /* jne: not equal / not zero */

loc_003CE4AF: ;
    eax = MEM32(esp + 0x14);
    ecx = ecx + 8;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_003CE460; /* jne: not equal / not zero */

loc_003CE4BD: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    if ((MEM32(esp + 0x18) != 0)) goto loc_003CE38D; /* jne: not equal / not zero */

loc_003CE4C7: ;
    ecx = MEM32(esp + 0x34);

loc_003CE4CB: ;
    esi = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x38);
    xmm4 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    ebx = ecx;
    xmm3 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003CDA00(); /* call 0x003CDA00 */

loc_003CE4E7: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003CE500
 * Original: 0x003CE500 - 0x003CE62E (302 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CE500: ;
    esp = esp - 0x20;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x30);
    SET_LO16(eax, MEM16(ecx + 0x94));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    edx = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    ebx = MEM32(ebx);
    ebx = MEM32(ebx + 8);
    ebx = MEM32(ebx + 0x18);
    MEM32(esp + 0xC) = ebx;
    ebx = MEM32(edx + 0xC);
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(esp + 0xC);
    ebx = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = ebx;
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_003CE60A; /* jbe: below or equal (unsigned <=) */

loc_003CE55C: ;
    eax = ZX16(LO16(eax));
    MEM32(esp + 0x18) = eax;
    goto loc_003CE570;

loc_003CE565: ;
    edx = MEM32(esp + 0x1C);
    /* nop */

loc_003CE570: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = edx;
    PUSH32(esp, 0); sub_003D1230(); /* call 0x003D1230 */

loc_003CE57C: ;
    edx = esp + 0x28;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D1230(); /* call 0x003D1230 */

loc_003CE58E: ;
    esp = esp + 8;
    MEM32(esp + 0x2C) = eax;
    ecx = 0; /* xor self */
    MEM32(esp + 0x14) = 3;
    /* nop */

loc_003CE5A0: ;
    SET_LO8(eax, 0x80);

loc_003CE5A2: ;
    ebx = MEM32(esp + 0x28);
    edx = ZX8(LO8(eax));
    edx = edx << LO8(ecx);
    if (TEST_Z(ebx, edx)) goto loc_003CE5DA; /* je: equal / zero */

loc_003CE5AF: ;
    ebx = MEM32(esp + 0x2C);
    if (TEST_Z(ebx, edx)) goto loc_003CE5CA; /* je: equal / zero */

loc_003CE5B7: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(edi); /* addss */
    MEMF(ebp) = xmm0; /* movss */
    goto loc_003CE5DF;

loc_003CE5CA: ;
    edx = MEM32(edi);
    MEM32(ebp) = edx;
    ebp = ebp + 4;
    edi = edi + 4;
    esi = esi + 4;
    goto loc_003CE5E8;

loc_003CE5DA: ;
    edx = MEM32(esi);
    MEM32(ebp) = edx;

loc_003CE5DF: ;
    esi = esi + 4;
    ebp = ebp + 4;
    edi = edi + 4;

loc_003CE5E8: ;
    SET_LO8(eax, LO8(eax) >> 1);
    if (CMP_NE(LO8(eax), 0x10)) goto loc_003CE5A2; /* jne: not equal / not zero */

loc_003CE5EE: ;
    eax = MEM32(esp + 0x14);
    ecx = ecx + 8;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_003CE5A0; /* jne: not equal / not zero */

loc_003CE5FC: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    if ((MEM32(esp + 0x18) != 0)) goto loc_003CE565; /* jne: not equal / not zero */

loc_003CE606: ;
    ecx = MEM32(esp + 0x34);

loc_003CE60A: ;
    esi = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x38);
    xmm4 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    ebx = ecx;
    PUSH32(esp, 0); sub_003CDA00(); /* call 0x003CDA00 */

loc_003CE623: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003CE630
 * Original: 0x003CE630 - 0x003CE688 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CE630: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    xmm7 = MEMF(0x648D14); /* movss */
    xmm6 = MEMF(esp + 0x10); /* movss */
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x168);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(edx + 0x168);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    xmm7 = xmm7 - xmm6; /* subss */
    if (CMP_AE(ebx, eax)) { sub_003CE688(); return; } /* jae: above or equal (unsigned >=) */

loc_003CE66E: ;
    eax = MEM32(esp + 0x44);
    eax = MEM32(eax + 0x168);
    if (CMP_AE(ebx, eax)) goto loc_003CE682; /* jae: above or equal (unsigned >=) */

loc_003CE67C: ;
    MEM32(esp + 0x48) = ebx;
    g_seh_ebp = ebp; sub_003CE6A2(); return; /* tail jmp 0x003CE6A2 */

loc_003CE682: ;
    MEM32(esp + 0x48) = eax;
    g_seh_ebp = ebp; sub_003CE69E(); return; /* tail jmp 0x003CE69E */

}

/**
 * sub_003CF140
 * Original: 0x003CF140 - 0x003CF297 (343 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CF140: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x168);
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 0x168);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x168);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    xmm4 = xmm4 - xmm3; /* subss */
    if (CMP_AE(eax, ecx)) goto loc_003CF18C; /* jae: above or equal (unsigned >=) */

loc_003CF184: ;
    if (CMP_AE(eax, ebx)) goto loc_003CF192; /* jae: above or equal (unsigned >=) */

loc_003CF188: ;
    ebx = eax;
    goto loc_003CF192;

loc_003CF18C: ;
    if (CMP_AE(ecx, ebx)) goto loc_003CF192; /* jae: above or equal (unsigned >=) */

loc_003CF190: ;
    ebx = ecx;

loc_003CF192: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x14) = ecx;
    SET_LO16(ecx, MEM16(edx + 0x94));
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_003CF27B; /* jbe: below or equal (unsigned <=) */

loc_003CF1B9: ;
    edx = ZX16(LO16(ecx));
    MEM32(esp + 0x28) = edx;
    goto loc_003CF1C6;

loc_003CF1C2: ;
    eax = MEM32(esp + 0x10);

loc_003CF1C6: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D1230(); /* call 0x003D1230 */

loc_003CF1D0: ;
    esp = esp + 4;
    ecx = 0; /* xor self */
    if (TEST_Z(eax, 0xE0E0E0)) goto loc_003CF230; /* je: equal / zero */

loc_003CF1DC: ;
    if (CMP_BE(ebx & ebx, 0)) goto loc_003CF206; /* jbe: below or equal (unsigned <=) */

loc_003CF1E0: ;
    eax = 0; /* xor self */

loc_003CF1E2: ;
    xmm0 = MEMF(esi + eax * 4); /* movss */
    xmm1 = MEMF(edi + eax * 4); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    ecx++;
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ebp + eax * 4) = xmm0; /* movss */
    eax = ZX16(LO16(ecx));
    if (CMP_B(eax, ebx)) goto loc_003CF1E2; /* jb: below (unsigned <) */

loc_003CF206: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(edx + 0x168);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x168);
    ebp = ebp + eax * 4;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x168);
    esi = esi + edx * 4;
    edi = edi + ecx * 4;
    goto loc_003CF26D;

loc_003CF230: ;
    if (CMP_BE(ebx & ebx, 0)) goto loc_003CF245; /* jbe: below or equal (unsigned <=) */

loc_003CF234: ;
    eax = 0; /* xor self */

loc_003CF236: ;
    edx = MEM32(esi + eax * 4);
    ecx++;
    MEM32(ebp + eax * 4) = edx;
    eax = ZX16(LO16(ecx));
    if (CMP_B(eax, ebx)) goto loc_003CF236; /* jb: below (unsigned <) */

loc_003CF245: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x168);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x168);
    ebp = ebp + ecx * 4;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 0x168);
    esi = esi + eax * 4;
    edi = edi + edx * 4;

loc_003CF26D: ;
    MEM32(esp + 0x28) = MEM32(esp + 0x28) - 1;
    if ((MEM32(esp + 0x28) != 0)) goto loc_003CF1C2; /* jne: not equal / not zero */

loc_003CF277: ;
    edx = MEM32(esp + 0x1C);

loc_003CF27B: ;
    esi = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    ebx = edx;
    PUSH32(esp, 0); sub_003CDA00(); /* call 0x003CDA00 */

loc_003CF28C: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003CF2A0
 * Original: 0x003CF2A0 - 0x003CF2B8 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF2A0(void)
{

loc_003CF2A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003CF4D0(); /* call 0x003CF4D0 */

loc_003CF2AB: ;
    esp = esp + 4;
    edi = esi;
    PUSH32(esp, 0); sub_003CF2C0(); /* call 0x003CF2C0 */

loc_003CF2B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CF2C0
 * Original: 0x003CF2C0 - 0x003CF3E1 (289 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CF2C0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x14C);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x14) = esi;
    if (TEST_Z(esi, esi)) goto loc_003CF3DC; /* je: equal / zero */

loc_003CF2D6: ;
    eax = ZX16(MEM16(edi + 0x94));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x168));
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebx);
    edx = ecx + eax * 4;
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    if (CMP_L(esi, 4)) goto loc_003CF3B3; /* jl: less (signed <) */

loc_003CF2FA: ;
    PUSH32(esp, ebp);
    esi = esi + 0xFFFFFFFCu;
    ecx = 4;
    ebp = 0xFFFFFFF8u;
    ecx = ecx - edx;
    ebp = ebp - edx;
    esi = esi >> 2;
    esi++;
    MEM32(esp + 0xC) = 8;
    eax = edx + 8;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = ebp;
    ebx = esi * 4;
    /* nop */

loc_003CF330: ;
    ecx = MEM32(edi + 0x150);
    if (TEST_Z(ecx, ecx)) goto loc_003CF39D; /* je: equal / zero */

loc_003CF33A: ;
    edx = eax + ebp;
    ecx = MEM32(edx + ecx);
    if (TEST_Z(ecx, ecx)) goto loc_003CF34D; /* je: equal / zero */

loc_003CF344: ;
    ebp = MEM32(eax + -8);
    MEM32(ecx) = ebp;
    ebp = MEM32(esp + 0x14);

loc_003CF34D: ;
    ecx = MEM32(edi + 0x150);
    if (TEST_Z(ecx, ecx)) goto loc_003CF399; /* je: equal / zero */

loc_003CF357: ;
    edx = MEM32(edx + ecx + 4);
    if (TEST_Z(edx, edx)) goto loc_003CF364; /* je: equal / zero */

loc_003CF35F: ;
    ecx = MEM32(eax + -4);
    MEM32(edx) = ecx;

loc_003CF364: ;
    ecx = MEM32(edi + 0x150);
    if (TEST_Z(ecx, ecx)) goto loc_003CF399; /* je: equal / zero */

loc_003CF36E: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx + ecx);
    if (TEST_Z(ecx, ecx)) goto loc_003CF37D; /* je: equal / zero */

loc_003CF379: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_003CF37D: ;
    ecx = MEM32(edi + 0x150);
    if (TEST_Z(ecx, ecx)) goto loc_003CF399; /* je: equal / zero */

loc_003CF387: ;
    edx = MEM32(esp + 0x18);
    edx = edx + eax;
    ecx = MEM32(edx + ecx);
    if (TEST_Z(ecx, ecx)) goto loc_003CF399; /* je: equal / zero */

loc_003CF394: ;
    edx = MEM32(eax + 4);
    MEM32(ecx) = edx;

loc_003CF399: ;
    edx = MEM32(esp + 0x10);

loc_003CF39D: ;
    ecx = MEM32(esp + 0xC);
    ecx = ecx + 0x10;
    eax = eax + 0x10;
    esi--;
    MEM32(esp + 0xC) = ecx;
    if ((esi != 0)) goto loc_003CF330; /* jne: not equal / not zero */

loc_003CF3AE: ;
    esi = MEM32(esp + 0x1C);
    POP32(esp, ebp);

loc_003CF3B3: ;
    if (CMP_AE(ebx, esi)) goto loc_003CF3DB; /* jae: above or equal (unsigned >=) */

loc_003CF3B7: ;
    goto loc_003CF3C0;

    /* nop */

loc_003CF3C0: ;
    eax = MEM32(edi + 0x150);
    if (TEST_Z(eax, eax)) goto loc_003CF3D6; /* je: equal / zero */

loc_003CF3CA: ;
    eax = MEM32(eax + ebx * 4);
    if (TEST_Z(eax, eax)) goto loc_003CF3D6; /* je: equal / zero */

loc_003CF3D1: ;
    ecx = MEM32(edx + ebx * 4);
    MEM32(eax) = ecx;

loc_003CF3D6: ;
    ebx++;
    if (CMP_B(ebx, esi)) goto loc_003CF3C0; /* jb: below (unsigned <) */

loc_003CF3DB: ;
    POP32(esp, ebx);

loc_003CF3DC: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003CF3F0
 * Original: 0x003CF3F0 - 0x003CF4C6 (214 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF3F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003CF3F0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003CF43C; /* jnp: not parity */

loc_003CF404: ;
    /* ucomiss xmm2, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003CF43C; /* jnp: not parity */

loc_003CF40D: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 / xmm2; /* divss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x20); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + 0x20) = xmm2; /* movss */

loc_003CF43C: ;
    xmm2 = MEMF(esp + 4); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003CF485; /* jnp: not parity */

loc_003CF44B: ;
    /* ucomiss xmm2, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003CF485; /* jnp: not parity */

loc_003CF454: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 / xmm2; /* divss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + 4) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x14); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x24); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx + 0x24) = xmm2; /* movss */

loc_003CF485: ;
    xmm1 = MEMF(esp + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003CF4C5; /* jnp: not parity */

loc_003CF494: ;
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003CF4C5; /* jnp: not parity */

loc_003CF49D: ;
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ecx + 8); /* mulss */
    MEMF(ecx + 8) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(ecx + 0x18); /* mulss */
    xmm0 = xmm0 * MEMF(ecx + 0x28); /* mulss */
    MEMF(ecx + 0x18) = xmm1; /* movss */
    MEMF(ecx + 0x28) = xmm0; /* movss */

loc_003CF4C5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CF4D0
 * Original: 0x003CF4D0 - 0x003CF9F9 (1321 bytes, 384 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm2, xmm3, xmm5;

loc_003CF4D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = MEM32(esi);
    edx = 0; /* xor self */
    SET_LO8(ebx, MEM8(ecx + 0x1C));
    ecx = MEM32(esi + 0xB4);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x94));
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(LO8(ebx), 1)) ? 1 : 0); /* sete */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0xBC);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esi + 0xC4);
    MEM32(esp + 0x1C) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp LO16(eax), LO16(ecx) - flags set for next jcc */
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esi + 0xB8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + 0xC0);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0xC8);
    MEM32(esp + 0x2C) = edx;
    edx = esi + 0x10;
    edi = MEM32(esi + 4);
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x24) = ecx;
    if (CMP_BE(LO16(eax), LO16(ecx))) goto loc_003CF9F3; /* jbe: below or equal (unsigned <=) */

loc_003CF551: ;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x4C) = ecx;
    /* nop */

loc_003CF560: ;
    eax = MEM32(edx + 0x94);
    if (TEST_Z(eax, eax)) goto loc_003CF578; /* je: equal / zero */

loc_003CF56A: ;
    ebx = MEM32(esp + 0x44);
    if (CMP_NE(MEM8(ebx + eax), 0)) goto loc_003CF9A3; /* jne: not equal / not zero */

loc_003CF578: ;
    eax = MEM32(edx + 0x8C);
    ebx = MEM32(esp + 0x4C);
    eax = eax + ebx;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(edx + 0x90);
    if (TEST_Z(eax, eax)) goto loc_003CF59A; /* je: equal / zero */

loc_003CF592: ;
    ebx = ebx + eax;
    MEM32(esp + 0x10) = ebx;
    goto loc_003CF5A2;

loc_003CF59A: ;
    eax = esp + 0x60;
    MEM32(esp + 0x10) = eax;

loc_003CF5A2: ;
    eax = MEM32(esi);
    ebx = MEM32(eax + 0x14);
    if (TEST_NZ(ebx, ebx)) goto loc_003CF5BF; /* jne: not equal / not zero */

loc_003CF5AB: ;
    eax = MEM32(esi + 0x164);
    ebx = MEM32(esp + 0x44);
    eax = ZX8(MEM8(eax + ebx));
    MEM32(esp + 0x50) = eax;
    goto loc_003CF5CE;

loc_003CF5BF: ;
    (void)0; /* cmp LO16(ecx), MEM16(esi + 0xEA) - flags set for next jcc */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = (uint32_t)(-(int32_t)ebx);
    MEM32(esp + 0x50) = ebx;

loc_003CF5CE: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_003CF5F4; /* je: equal / zero */

loc_003CF5D6: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_003CF5F4; /* je: equal / zero */

loc_003CF5DE: ;
    SET_LO16(ebx, MEM16(eax));
    if (CMP_EQ(LO16(ebx), 0xFFFF)) goto loc_003CF5F4; /* je: equal / zero */

loc_003CF5E8: ;
    if (CMP_NE(LO16(ebx), LO16(ecx))) goto loc_003CF5F4; /* jne: not equal / not zero */

loc_003CF5ED: ;
    eax = 1;
    goto loc_003CF5F6;

loc_003CF5F4: ;
    eax = 0; /* xor self */

loc_003CF5F6: ;
    ebx = MEM32(esp + 0x14);
    if (TEST_Z(ebx, ebx)) goto loc_003CF61D; /* je: equal / zero */

loc_003CF5FE: ;
    ebx = MEM32(esp + 0x28);
    if (TEST_Z(ebx, ebx)) goto loc_003CF61D; /* je: equal / zero */

loc_003CF606: ;
    SET_LO16(ebx, MEM16(ebx));
    if (CMP_EQ(LO16(ebx), 0xFFFF)) goto loc_003CF61D; /* je: equal / zero */

loc_003CF610: ;
    (void)0; /* cmp LO16(ebx), LO16(ecx) - flags set for next jcc */
    MEM32(esp + 0x54) = 1;
    if (CMP_EQ(LO16(ebx), LO16(ecx))) goto loc_003CF625; /* je: equal / zero */

loc_003CF61D: ;
    MEM32(esp + 0x54) = 0;

loc_003CF625: ;
    ebx = MEM32(edx + 0x88);
    ebx = ebx + MEM32(esp + 0x40);
    edx = MEM32(esp + 0x50);
    if (TEST_Z(edx, edx)) goto loc_003CF809; /* je: equal / zero */

loc_003CF63B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(esi + 0x170);
    xmm0 = MEMF(edi + edx * 4); /* movss */
    edx = MEM32(esi + 0x174);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(edi + edx * 4); /* movss */
    edx = MEM32(esi + 0x178);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + edx * 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003CF6D3; /* je: equal / zero */

loc_003CF672: ;
    eax = MEM32(esp + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_003CF6A3; /* je: equal / zero */

loc_003CF67B: ;
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx), _icall_esp); /* indirect call */
    }

loc_003CF693: ;
    eax = MEM32(esp + 0x30);
    esp = esp + 0x14;
    eax = eax + 4;
    MEM32(esp + 0x1C) = eax;
    goto loc_003CF6BD;

loc_003CF6A3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003CF6BA: ;
    esp = esp + 0x14;

loc_003CF6BD: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x2C);
    ecx = ecx + 4;
    eax = eax + 2;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x2C) = eax;

loc_003CF6D3: ;
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x10);
    esp = esp - 0xC;
    if (CMP_NE(eax, 1)) goto loc_003CF76F; /* jne: not equal / not zero */

loc_003CF6E7: ;
    eax = MEM32(esi + 0x188);
    xmm0 = MEMF(edi + eax * 4); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 8); /* addss */
    edx = MEM32(esi + 0x184);
    eax = MEM32(esi + 0x180);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi + edx * 4); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 4); /* addss */
    edx = MEM32(esi + 0x17C);
    xmm2 = MEMF(edi + edx * 4); /* movss */
    xmm3 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + eax * 4); /* movss */
    eax = MEM32(esp + 0x40);
    xmm0 = xmm0 + MEMF(ebx); /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x194);
    eax = MEM32(edi + eax * 4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x190);
    eax = MEM32(edi + eax * 4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18C);
    eax = MEM32(edi + eax * 4);
    PUSH32(esp, eax);
    edx = ecx;
    PUSH32(esp, 0); sub_003E3170(); /* call 0x003E3170 */

loc_003CF767: ;
    esp = esp + 0x20;
    goto loc_003CF846;

loc_003CF76F: ;
    edx = MEM32(esi);
    SET_LO8(eax, MEM8(edx + 0x1C));
    edx = MEM32(esi + 0x184);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + 0x188);
    xmm0 = MEMF(edi + eax * 4); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 8); /* addss */
    eax = MEM32(esi + 0x180);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi + edx * 4); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 4); /* addss */
    edx = MEM32(esp + 0x40);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + eax * 4); /* movss */
    xmm0 = xmm0 + MEMF(ebx); /* addss */
    eax = MEM32(esp + 0x3C);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x194);
    PUSH32(esp, edx);
    edx = MEM32(edi + eax * 4);
    eax = MEM32(esi + 0x190);
    PUSH32(esp, edx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003CF7F1; /* jne: not equal / not zero */

loc_003CF7D7: ;
    edx = MEM32(esi + 0x18C);
    edx = MEM32(edi + edx * 4);
    xmm5 = MEMF(edi + eax * 4); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_003CF7EC: ;
    esp = esp + 0x24;
    goto loc_003CF846;

loc_003CF7F1: ;
    edx = MEM32(edi + eax * 4);
    eax = MEM32(esi + 0x18C);
    PUSH32(esp, edx);
    edx = MEM32(edi + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2FA0(); /* call 0x003E2FA0 */

loc_003CF804: ;
    esp = esp + 0x24;
    goto loc_003CF846;

loc_003CF809: ;
    if (TEST_Z(eax, eax)) goto loc_003CF832; /* je: equal / zero */

loc_003CF80D: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_003CF81C; /* je: equal / zero */

loc_003CF815: ;
    eax = eax + 4;
    MEM32(esp + 0x1C) = eax;

loc_003CF81C: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x2C);
    ecx = ecx + 4;
    eax = eax + 2;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x2C) = eax;

loc_003CF832: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_003CF846: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(eax + 0x88);
    edx = MEM32(esp + 0x40);
    edx = ZX16(MEM16(edx + ecx + 0x18));
    if (CMP_NE(edx, 0xFFFF)) goto loc_003CF869; /* jne: not equal / not zero */

loc_003CF861: ;
    edx = MEM32(eax + 0x80);
    goto loc_003CF8E0;

loc_003CF869: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x14);
    if (TEST_NZ(ecx, ecx)) goto loc_003CF881; /* jne: not equal / not zero */

loc_003CF872: ;
    eax = MEM32(esi + 0x164);
    ecx = ZX16(LO16(edx));
    eax = ZX8(MEM8(eax + ecx));
    goto loc_003CF88C;

loc_003CF881: ;
    (void)0; /* cmp LO16(edx), MEM16(esi + 0xEA) - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);

loc_003CF88C: ;
    SET_LO8(ecx, MEM8(ebx + 0x22));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003CF8D1; /* je: equal / zero */

loc_003CF893: ;
    if (TEST_Z(eax, eax)) goto loc_003CF8D1; /* je: equal / zero */

loc_003CF897: ;
    ecx = MEM32(esi + 0x168);
    eax = MEM32(esi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ebx = MEM32(esi + 0x18C);
    eax = eax + ecx * 4;
    ecx = MEM32(esi + 0x194);
    ecx = MEM32(eax + ecx * 4);
    xmm2 = MEMF(eax + ebx * 4); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x190);
    ecx = MEM32(eax + ecx * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_003CF3F0(); /* call 0x003CF3F0 */

loc_003CF8CE: ;
    esp = esp + 8;

loc_003CF8D1: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(eax + 0x8C);
    edx = edx << 6;
    edx = edx + ecx;

loc_003CF8E0: ;
    if (TEST_NZ(MEM8(ebp + 8), 2)) goto loc_003CF99B; /* jne: not equal / not zero */

loc_003CF8EA: ;
    eax = MEM32(esp + 0x50);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 0x54);
    if (TEST_Z(eax, eax)) goto loc_003CF962; /* je: equal / zero */

loc_003CF8F6: ;
    if (TEST_Z(eax, eax)) goto loc_003CF98B; /* je: equal / zero */

loc_003CF8FE: ;
    eax = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_003CF92F; /* je: equal / zero */

loc_003CF906: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx), _icall_esp); /* indirect call */
    }

loc_003CF91F: ;
    eax = MEM32(esp + 0x34);
    esp = esp + 0x14;
    eax = eax + 4;
    MEM32(esp + 0x20) = eax;
    goto loc_003CF94A;

loc_003CF92F: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x48);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx), _icall_esp); /* indirect call */
    }

loc_003CF947: ;
    esp = esp + 0x14;

loc_003CF94A: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x28);
    ecx = ecx + 4;
    eax = eax + 2;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x28) = eax;
    goto loc_003CF99B;

loc_003CF962: ;
    if (TEST_Z(eax, eax)) goto loc_003CF98B; /* je: equal / zero */

loc_003CF966: ;
    eax = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_003CF975; /* je: equal / zero */

loc_003CF96E: ;
    eax = eax + 4;
    MEM32(esp + 0x20) = eax;

loc_003CF975: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x28);
    ecx = ecx + 4;
    eax = eax + 2;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x28) = eax;

loc_003CF98B: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003CF99B: ;
    edx = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x24);

loc_003CF9A3: ;
    eax = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x4C);
    ecx++;
    eax++;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x40) = MEM32(esp + 0x40) + 0x24;
    eax = MEM32(esi + 0x168);
    edi = edi + eax * 4;
    eax = MEM32(esp + 0x5C);
    ebx = ebx + 0x40;
    (void)0; /* cmp LO16(ecx), LO16(eax) - flags set for next jcc */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x4C) = ebx;
    if (CMP_B(LO16(ecx), LO16(eax))) goto loc_003CF560; /* jb: below (unsigned <) */

loc_003CF9D7: ;
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_003CF9F3; /* jbe: below or equal (unsigned <=) */

loc_003CF9DC: ;
    if (TEST_NZ(MEM8(ebp + 8), 3)) goto loc_003CF9F3; /* jne: not equal / not zero */

loc_003CF9E2: ;
    eax = MEM32(esi + 0x94);
    if (CMP_LE(eax & eax, 0)) goto loc_003CF9F3; /* jle: less or equal (signed <=) */

loc_003CF9EC: ;
    edi = edx;
    PUSH32(esp, 0); sub_003F8430(); /* call 0x003F8430 */

loc_003CF9F3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFA00
 * Original: 0x003CFA00 - 0x003CFA37 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFA00(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CFA00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003CD6A0(); /* call 0x003CD6A0 */

loc_003CFA0E: ;
    ecx = MEM32(esi + 8);
    MEM16(ecx + 0x16) = LO16(eax);
    esi = MEM32(esi + 8);
    edx = ZX16(MEM16(esi + 0x16));
    edx = edx << 5;
    eax = MEM32(edx + 0x74F528);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003CFA35; /* je: equal / zero */

loc_003CFA2C: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003CFA32: ;
    esp = esp + 4;

loc_003CFA35: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFA40
 * Original: 0x003CFA40 - 0x003CFA93 (83 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFA40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CFA40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x5A0118;
    esi = ebp + 0x170;
    edi = 0xA;
    /* nop */

loc_003CFA60: ;
    eax = MEM32(ebp);
    eax = MEM32(eax + 0x18);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003CFA74: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003CFA84; /* je: equal / zero */

loc_003CFA7B: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 8);
    MEM32(esi) = eax;

loc_003CFA84: ;
    esi = esi + 4;
    ebx = ebx + 0x24;
    edi--;
    if ((edi != 0)) goto loc_003CFA60; /* jne: not equal / not zero */

loc_003CFA8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFAA0
 * Original: 0x003CFAA0 - 0x003CFAE1 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFAA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CFAA0: ;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx + 0x94));
    eax = 0; /* xor self */
    if (CMP_BE(esi & esi, 0)) goto loc_003CFADF; /* jbe: below or equal (unsigned <=) */

loc_003CFAAE: ;
    edx = 0; /* xor self */
    PUSH32(esp, edi);

loc_003CFAB1: ;
    edi = MEM32(ecx + 0x98);
    SET_LO16(edi, ZX8(MEM8(edi + edx + 0x23)));
    (void)0; /* cmp LO16(edi), MEM16(ecx + 0xEA) - flags set for next jcc */
    edi = MEM32(ecx + 0x164);
    if (CMP_BE(LO16(edi), MEM16(ecx + 0xEA))) goto loc_003CFAD2; /* jbe: below or equal (unsigned <=) */

loc_003CFACC: ;
    MEM8(eax + edi) = 0;
    goto loc_003CFAD6;

loc_003CFAD2: ;
    MEM8(eax + edi) = 1;

loc_003CFAD6: ;
    eax++;
    edx = edx + 0x24;
    if (CMP_B(eax, esi)) goto loc_003CFAB1; /* jb: below (unsigned <) */

loc_003CFADE: ;
    POP32(esp, edi);

loc_003CFADF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFAF0
 * Original: 0x003CFAF0 - 0x003CFB25 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFAF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003CFAF0: ;
    ecx = ZX16(MEM16(eax + 0x94));
    edx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_003CFB21; /* jbe: below or equal (unsigned <=) */

loc_003CFAFD: ;
    eax = MEM32(eax + 0x98);
    PUSH32(esp, esi);
    eax = eax + 0x23;
    esi = ecx;
    /* nop */

loc_003CFB10: ;
    SET_LO16(ecx, ZX8(MEM8(eax)));
    (void)0; /* cmp LO16(ecx), LO16(edx) - flags set for next jcc */
    if (CMP_A(LO16(ecx), LO16(edx))) edx = ecx; /* cmova */
    eax = eax + 0x24;
    esi--;
    if ((esi != 0)) goto loc_003CFB10; /* jne: not equal / not zero */

loc_003CFB20: ;
    POP32(esp, esi);

loc_003CFB21: ;
    eax = edx + 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003CFB30
 * Original: 0x003CFB30 - 0x003CFB35 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFB30(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003CFB30: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003CFB40
 * Original: 0x003CFB40 - 0x003CFB51 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFB40(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003CFB40: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003CFB60
 * Original: 0x003CFB60 - 0x003CFB83 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFB60(void)
{

loc_003CFB60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E46C0(); /* call 0x003E46C0 */

loc_003CFB76: ;
    edx = MEM32(esp + 0x20);
    esp = esp + 0xC;
    MEM16(edx) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_003CFB90
 * Original: 0x003CFB90 - 0x003CFBB9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFB90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003CFB90: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    esp = esp - 0x20;
    if (TEST_NZ(LO8(eax), 0xE0)) { sub_003CFBB9(); return; } /* jne: not equal / not zero */

loc_003CFB9B: ;
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEM16(ecx) = 4;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003CFD00
 * Original: 0x003CFD00 - 0x003CFD54 (84 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFD00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003CFD00: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm2 = MEMF(eax); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) { sub_003CFD54(); return; } /* jb: below (unsigned <) */

loc_003CFD44: ;
    MEMF(eax + 0xC) = xmm1; /* movss */
    eax = MEM32(esp + 0x18);
    MEM16(eax) = 4;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFD80
 * Original: 0x003CFD80 - 0x003CFDA9 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFD80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003CFD80: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    esp = esp - 0x24;
    if (TEST_NZ(LO8(eax), 0xE0)) { sub_003CFDA9(); return; } /* jne: not equal / not zero */

loc_003CFD8B: ;
    eax = MEM32(esp + 0x28);
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(esp + 0x38);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEM16(ecx) = 4;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_003CFFC0
 * Original: 0x003CFFC0 - 0x003D009E (222 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFFC0(void)
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

loc_003CFFC0: ;
    esp = esp - 0x10;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D88)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsubr dword ptr [esp + 0x18] */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fsubr dword ptr [esp + 0x1c] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsubr dword ptr [esp + 0x1c] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003D009E(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D006B: ;
    /* comiss xmm0, MEMF(esp) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp))) { sub_003D009E(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D0071: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(0x648D88); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(ecx); /* subss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(eax) = xmm1; /* movss */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003D00E0
 * Original: 0x003D00E0 - 0x003D00F2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D00E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D00E0: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), 0xE0)) { sub_003D00F2(); return; } /* jne: not equal / not zero */

loc_003D00E8: ;
    eax = MEM32(esp + 0x14);
    MEM16(eax) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_003D02D0
 * Original: 0x003D02D0 - 0x003D02E8 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D02D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D02D0: ;
    edx = MEM32(esp + 4);
    esp = esp - 0x18;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) { sub_003D02E8(); return; } /* jne: not equal / not zero */

loc_003D02E0: ;
    eax = MEM32(edx);
    SET_LO16(ecx, MEM16(eax + 6));
    g_seh_ebp = ebp; sub_003D02FD(); return; /* tail jmp 0x003D02FD */

}

/**
 * sub_003D0A50
 * Original: 0x003D0A50 - 0x003D0ADA (138 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D0A50: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 4);
    esp = esp - 0x20;
    ecx = ecx - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    if ((ecx == 0)) goto loc_003D0AC3; /* je: equal / zero */

loc_003D0A68: ;
    ecx--;
    if ((ecx == 0)) goto loc_003D0AA4; /* je: equal / zero */

loc_003D0A6B: ;
    ecx--;
    if ((ecx != 0)) { sub_003D0ADA(); return; } /* jne: not equal / not zero */

loc_003D0A6E: ;
    ecx = ZX16(MEM16(eax));
    edi = MEM32(esi);
    edx = MEM32(eax + 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    ebp = edx + edi * 4;
    edi = MEM32(esi + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    ecx = edx + edi * 4;
    edx = ZX16(MEM16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 8));
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 4);
    edi = ecx + edx * 4;
    edx = ZX16(MEM16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 4));
    eax = ecx;
    esi = eax + edx * 4;
    g_seh_ebp = ebp; sub_003D0AE6(); return; /* tail jmp 0x003D0AE6 */

loc_003D0AA4: ;
    edx = ZX16(MEM16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 8));
    ecx = MEM32(eax + 4);
    ebp = MEM32(esp + 0x10);
    edi = ecx + edx * 4;
    edx = ZX16(MEM16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 4));
    eax = ecx;
    esi = eax + edx * 4;
    g_seh_ebp = ebp; sub_003D0AE6(); return; /* tail jmp 0x003D0AE6 */

loc_003D0AC3: ;
    edx = ZX16(MEM16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 4));
    eax = MEM32(eax + 4);
    edi = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x10);
    esi = eax + edx * 4;
    g_seh_ebp = ebp; sub_003D0AE6(); return; /* tail jmp 0x003D0AE6 */

}

/**
 * sub_003D0E00
 * Original: 0x003D0E00 - 0x003D0F3E (318 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0E00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003D0E00: ;
    esp = esp - 0x7C;
    ecx = ZX16(MEM16(esp + 0x9C));
    eax = 0; /* xor self */
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = eax;
    MEM8(esp + 0x69) = LO8(eax);
    MEM8(esp + 0x6A) = LO8(eax);
    eax = ZX16(MEM16(esp + 0xA0));
    eax = eax + ecx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    SET_LO8(ebx, 2);
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEM8(esp + 0x74) = 0xF;
    MEM8(esp + 0x77) = LO8(ebx);
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM32(esp + 0x7C) = ecx;
    edx = eax;
    eax = MEM32(esp + 0xA4);
    edx = edx + eax;
    MEM16(esp + 0x7A) = LO16(eax);
    eax = esp + 0xC;
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esp + 0xA0);
    eax--;
    MEM16(esp + 0x78) = LO16(edx);
    if ((eax == 0)) goto loc_003D0ED8; /* je: equal / zero */

loc_003D0EC9: ;
    eax--;
    if ((eax != 0)) goto loc_003D0EEE; /* jne: not equal / not zero */

loc_003D0ECC: ;
    MEM32(esp + 0x68) = 0x74F760;
    SET_LO8(ebx, 0xF);
    goto loc_003D0EE2;

loc_003D0ED8: ;
    MEM32(esp + 0x68) = 0x74F730;
    SET_LO8(ebx, 6);

loc_003D0EE2: ;
    MEM32(esp + 0x6C) = 0x74F790;
    MEM8(esp + 0x77) = LO8(ebx);

loc_003D0EEE: ;
    esi = MEM32(esp + 0x8C);
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esi + 0x14);
    ecx = esp + 0x34;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x64) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x98);
    SET_LO8(edx, LO8(ebx));
    eax = esi;
    PUSH32(esp, 0); sub_003D12B0(); /* call 0x003D12B0 */

loc_003D0F23: ;
    edx = MEM32(esp + 0x94);
    PUSH32(esp, edx);
    edi = esp + 0x3C;
    PUSH32(esp, 0); sub_003D13D0(); /* call 0x003D13D0 */

loc_003D0F34: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_003D0F40
 * Original: 0x003D0F40 - 0x003D10AD (365 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0F40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003D0F40: ;
    esp = esp - 0x80;
    ecx = ZX16(MEM16(esp + 0xA0));
    eax = ZX16(MEM16(esp + 0xA4));
    eax = eax + ecx + -2;
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + -1;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    esi = 0; /* xor self */
    MEM32(esp + 0x88) = ecx;
    ecx = MEM32(esp + 0x9C);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA0); /* movss */
    SET_LO8(ebx, 2);
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 0x70) = esi;
    MEM8(esp + 0x78) = 0xF;
    MEM8(esp + 0x79) = 0;
    MEM8(esp + 0x7A) = 0;
    MEM8(esp + 0x7B) = LO8(ebx);
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM32(esp + 0x80) = ecx;
    edx = eax;
    eax = MEM32(esp + 0xA8);
    edx = edx + eax;
    MEM16(esp + 0x7E) = LO16(eax);
    eax = esp + 0xC;
    MEM32(esp + 0x84) = eax;
    eax = MEM32(esp + 0xA4);
    eax = eax - esi;
    MEM16(esp + 0x7C) = LO16(edx);
    if ((eax == 0)) goto loc_003D104C; /* je: equal / zero */

loc_003D101E: ;
    eax--;
    if ((eax == 0)) goto loc_003D1038; /* je: equal / zero */

loc_003D1021: ;
    eax--;
    if ((eax != 0)) goto loc_003D105A; /* jne: not equal / not zero */

loc_003D1024: ;
    MEM32(esp + 0x6C) = 0x74F760;
    MEM32(esp + 0x70) = 0x74F7F0;
    SET_LO8(ebx, 0xF);
    goto loc_003D1056;

loc_003D1038: ;
    MEM32(esp + 0x6C) = 0x74F730;
    MEM32(esp + 0x70) = 0x74F7F0;
    SET_LO8(ebx, 6);
    goto loc_003D1056;

loc_003D104C: ;
    MEM32(esp + 0x70) = 0x74F7C0;
    SET_LO8(ebx, 2);

loc_003D1056: ;
    MEM8(esp + 0x7B) = LO8(ebx);

loc_003D105A: ;
    esi = MEM32(esp + 0x90);
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = eax;
    eax = MEM32(esi + 0x14);
    ecx = esp + 0x38;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x9C);
    SET_LO8(edx, LO8(ebx));
    eax = esi;
    PUSH32(esp, 0); sub_003D12B0(); /* call 0x003D12B0 */

loc_003D108F: ;
    edx = MEM32(esp + 0x98);
    PUSH32(esp, edx);
    edi = esp + 0x40;
    PUSH32(esp, 0); sub_003D13D0(); /* call 0x003D13D0 */

loc_003D10A0: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_003D10B0
 * Original: 0x003D10B0 - 0x003D10D7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D10B0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003D10B0: ;
    eax = MEM32(esp + 4);
    fp_push((double)SMEM32(eax + 8)); /* fild */
    fp_push((double)SMEM32(eax + 4)); /* fild */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003D10E0
 * Original: 0x003D10E0 - 0x003D1101 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D10E0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003D10E0: ;
    eax = MEM32(esp + 4);
    fp_push((double)SMEM32(eax + 4)); /* fild */
    fp_push((double)SMEM32(eax + 8)); /* fild */
    eax = MEM32(esp + 0x14);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003D1110
 * Original: 0x003D1110 - 0x003D1229 (281 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1110(void)
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

loc_003D1110: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push((double)SMEM32(eax)); /* fild */
    esp = esp - 0xC;
    if (CMP_GE(ecx & ecx, 0)) goto loc_003D1125; /* jge: greater or equal (signed >=) */

loc_003D111F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003D1125: ;
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(eax + 4)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_003D1140; /* jge: greater or equal (signed >=) */

loc_003D113A: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003D1140: ;
    ecx = MEM32(eax + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(eax + 8)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_003D115C; /* jge: greater or equal (signed >=) */

loc_003D1156: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003D115C: ;
    edx = MEM32(eax + 0xC);
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_003D1178; /* jge: greater or equal (signed >=) */

loc_003D1172: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003D1178: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm5 = MEMF(0x648CF0); /* movss */
    xmm6 = MEMF(esp + 0x10); /* movss */
    xmm4 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(esp); /* movss */
    eax = MEM32(esp + 0x20);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm7 = MEMF(esp + 0x10); /* movss */
    xmm7 = xmm7 * MEMF(0x648CF4); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm3 = xmm2; /* movaps */
    xmm2 = xmm2 - xmm7; /* subss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 - xmm3; /* subss */
    xmm6 = xmm6 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x14); /* movss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm6 = xmm6 + xmm2; /* addss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0x10); /* addss */
    MEMF(eax) = xmm6; /* movss */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003D1230
 * Original: 0x003D1230 - 0x003D128E (94 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D1230: ;
    eax = ZX16(MEM16(eax + 0x1E));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003D1285; /* jle: less or equal (signed <=) */

loc_003D1246: ;
    edx = eax + -1;
    eax = 0x38E38E39;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 1;
    edx++;

loc_003D1253: ;
    eax = ZX8(MEM8(esi));
    eax = eax << LO8(ecx);
    edi = edi | eax;
    eax = edi;
    eax = eax >> LO8(ecx);
    eax = eax & 3;
    if (CMP_A(eax, 3)) goto loc_003D127F; /* ja: above (unsigned >) */

loc_003D1266: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x3D1298)); return; /* indirect tail jmp */

    esi++;
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esi));
    edi = edi | eax;
    eax = ZX8(MEM8(esi + 1));
    esi++;
    eax = eax << 0x10;
    edi = edi | eax;
    esi++;

loc_003D127F: ;
    ecx = ecx + 0x18;
    edx--;
    if ((edx != 0)) goto loc_003D1253; /* jne: not equal / not zero */

loc_003D1285: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D12B0
 * Original: 0x003D12B0 - 0x003D12DF (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D12B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D12B0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = ZX8(LO8(edx));
    (void)0; /* test LO8(edx), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(edx), 1)) { sub_003D12DF(); return; } /* je: equal / zero */

loc_003D12C4: ;
    edi = ZX16(MEM16(eax + 0x1C));
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esi));
    ebx = ZX16(MEM16(eax + 0x1A));
    ebp = ZX16(MEM16(eax + 0x18));
    ebx = ebx + ecx;
    ebx = ebx + edi;
    ebp = ebp + ebx;
    MEM32(esp + 0x10) = ebp;
    g_seh_ebp = ebp; sub_003D12E7(); return; /* tail jmp 0x003D12E7 */

}

/**
 * sub_003D1390
 * Original: 0x003D1390 - 0x003D13B8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D1390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    esi = esi - eax;
    edi = 4;
    edi = edi;
    edx = MEM32(eax);
    if (TEST_Z(edx, edx)) { sub_003D13B8(); return; } /* je: equal / zero */

loc_003D13A6: ;
    edx = edx & 0xFFFFFFFCu;
    MEM32(esi + eax) = edx;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(edx, LO8(edx) & 3);
    SET_LO8(edx, LO8(edx) << 3);
    MEM8(ecx) = LO8(edx);
    g_seh_ebp = ebp; sub_003D13C2(); return; /* tail jmp 0x003D13C2 */

}

/**
 * sub_003D13D0
 * Original: 0x003D13D0 - 0x003D1683 (691 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D13D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D13D0: ;
    esp = esp - 0x58;
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(edi + 0x44), LO16(edx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x18) = edx;
    if (CMP_BE(MEM16(edi + 0x44), LO16(edx))) goto loc_003D167E; /* jbe: below or equal (unsigned <=) */

loc_003D13F2: ;
    PUSH32(esp, ebx);

loc_003D13F3: ;
    eax = MEM32(edi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_003D1407; /* je: equal / zero */

loc_003D13FA: ;
    if (CMP_NE(MEM8(eax + edx), 0)) goto loc_003D1407; /* jne: not equal / not zero */

loc_003D1400: ;
    ebx = 1;
    goto loc_003D1409;

loc_003D1407: ;
    ebx = 0; /* xor self */

loc_003D1409: ;
    SET_LO16(eax, MEM16(edi + 0x46));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003D1426; /* je: equal / zero */

loc_003D1417: ;
    eax = ZX16(LO16(eax));
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_GE(edx, eax)) goto loc_003D142E; /* jge: greater or equal (signed >=) */

loc_003D1426: ;
    MEM32(esp + 0x14) = 1;

loc_003D142E: ;
    if (CMP_BE(MEM16(esi + 0x1E), 0)) goto loc_003D162A; /* jbe: below or equal (unsigned <=) */

loc_003D1439: ;
    MEM32(esp + 0x10) = 3;

loc_003D1441: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003D16A0(); /* call 0x003D16A0 */

loc_003D145F: ;
    eax = MEM32(edi + 0x24);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax));
    esp = esp + 0x1C;
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_003D15BC; /* ja: above (unsigned >) */

loc_003D1475: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3D1684); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003D147Cu) goto loc_003D147C;
    if (_jt == 0x003D14CFu) goto loc_003D14CF;
    if (_jt == 0x003D154Bu) goto loc_003D154B;
    if (_jt == 0x003D15C2u) goto loc_003D15C2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003D147C: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    eax++;
    PUSH32(esp, edx);
    MEM32(edi + 0x24) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003D16A0(); /* call 0x003D16A0 */

loc_003D149E: ;
    eax = MEM32(edi + 0x24);
    eax++;
    PUSH32(esp, ebx);
    MEM32(edi + 0x24) = eax;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003D16A0(); /* call 0x003D16A0 */

loc_003D14C3: ;
    ecx = MEM32(esp + 0x40);
    esp = esp + 0x38;
    goto loc_003D1609;

loc_003D14CF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax++;
    MEM32(edi + 0x24) = eax;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003D16A0(); /* call 0x003D16A0 */

loc_003D14F1: ;
    esp = esp + 0x1C;
    if (TEST_NZ(ebx, ebx)) goto loc_003D15BC; /* jne: not equal / not zero */

loc_003D14FC: ;
    eax = MEM32(esp + 0x10);
    edx = ZX16(MEM16(esi + 0x1E));
    eax = eax + 3;
    if (CMP_GE(eax, edx)) goto loc_003D15BC; /* jge: greater or equal (signed >=) */

loc_003D150F: ;
    ecx = MEM32(esp + 8);

loc_003D1513: ;
    edx = MEM32(esp + 0x10);
    edx = edx + 6;
    if (CMP_GE(eax, edx)) goto loc_003D1605; /* jge: greater or equal (signed >=) */

loc_003D1522: ;
    edx = MEM32(esi + 8);
    edx = MEM32(edx + eax * 4);
    ebx = ZX16(LO16(ecx));
    MEM32(ebp + ebx * 4) = edx;
    edx = MEM32(esp + 0xC);
    ebx = MEM32(esp + 0x18);
    eax++;
    ecx++;
    edx++;
    MEM32(esp + 0xC) = edx;
    edx = ZX16(MEM16(esi + 0x1E));
    if (CMP_L(eax, edx)) goto loc_003D1513; /* jl: less (signed <) */

loc_003D1546: ;
    goto loc_003D1605;

loc_003D154B: ;
    if (TEST_NZ(ebx, ebx)) goto loc_003D1594; /* jne: not equal / not zero */

loc_003D154F: ;
    edx = ZX16(MEM16(esi + 0x1E));
    ecx = MEM32(esp + 0x10);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    eax = ecx;
    if (CMP_GE(ecx, edx)) goto loc_003D1594; /* jge: greater or equal (signed >=) */

loc_003D155D: ;
    goto loc_003D1563;

loc_003D155F: ;
    ecx = MEM32(esp + 0x10);

loc_003D1563: ;
    ecx = ecx + 3;
    if (CMP_GE(eax, ecx)) goto loc_003D1594; /* jge: greater or equal (signed >=) */

loc_003D156A: ;
    edx = ZX16(MEM16(esp + 8));
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + eax * 4);
    MEM32(ebp + edx * 4) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax++;
    ecx++;
    edx++;
    MEM32(esp + 0xC) = edx;
    edx = ZX16(MEM16(esi + 0x1E));
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_L(eax, edx)) goto loc_003D155F; /* jl: less (signed <) */

loc_003D1594: ;
    eax = MEM32(edi + 0x24);
    eax++;
    PUSH32(esp, ebx);
    MEM32(edi + 0x24) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003D16A0(); /* call 0x003D16A0 */

loc_003D15B9: ;
    esp = esp + 0x1C;

loc_003D15BC: ;
    ecx = MEM32(esp + 8);
    goto loc_003D1609;

loc_003D15C2: ;
    if (TEST_NZ(ebx, ebx)) goto loc_003D15BC; /* jne: not equal / not zero */

loc_003D15C6: ;
    ecx = ZX16(MEM16(esi + 0x1E));
    eax = MEM32(esp + 0x10);
    if (CMP_GE(eax, ecx)) goto loc_003D15BC; /* jge: greater or equal (signed >=) */

loc_003D15D2: ;
    ecx = MEM32(esp + 8);

loc_003D15D6: ;
    edx = MEM32(esp + 0x10);
    edx = edx + 6;
    if (CMP_GE(eax, edx)) goto loc_003D1605; /* jge: greater or equal (signed >=) */

loc_003D15E1: ;
    edx = MEM32(esi + 8);
    edx = MEM32(edx + eax * 4);
    ebx = ZX16(LO16(ecx));
    MEM32(ebp + ebx * 4) = edx;
    edx = MEM32(esp + 0xC);
    ebx = MEM32(esp + 0x18);
    eax++;
    ecx++;
    edx++;
    MEM32(esp + 0xC) = edx;
    edx = ZX16(MEM16(esi + 0x1E));
    if (CMP_L(eax, edx)) goto loc_003D15D6; /* jl: less (signed <) */

loc_003D1605: ;
    MEM32(esp + 8) = ecx;

loc_003D1609: ;
    MEM32(edi + 0x24) = MEM32(edi + 0x24) + 1;
    eax = MEM32(esp + 0x10);
    edx = ZX16(MEM16(esi + 0x1E));
    eax = eax + 9;
    MEM32(esp + 0x10) = eax;
    eax = eax + 0xFFFFFFFDu;
    if (CMP_L(eax, edx)) goto loc_003D1441; /* jl: less (signed <) */

loc_003D1626: ;
    edx = MEM32(esp + 0x1C);

loc_003D162A: ;
    if (TEST_Z(ebx, ebx)) goto loc_003D165B; /* je: equal / zero */

loc_003D162E: ;
    ecx = MEM32(edi + 0x50);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_003D1652; /* jle: less or equal (signed <=) */

loc_003D1637: ;
    goto loc_003D1640;

    /* nop */

loc_003D1640: ;
    ecx = MEM32(edi + 0x4C);
    ecx = MEM32(ecx + eax * 4);
    MEM32(ebp + eax * 4) = ecx;
    ecx = MEM32(edi + 0x50);
    eax++;
    if (CMP_L(eax, ecx)) goto loc_003D1640; /* jl: less (signed <) */

loc_003D1652: ;
    eax = MEM32(edi + 0x50);
    ebp = ebp + eax * 4;
    goto loc_003D1662;

loc_003D165B: ;
    ecx = ZX16(LO16(ecx));
    ebp = ebp + ecx * 4;

loc_003D1662: ;
    eax = ZX16(MEM16(edi + 0x44));
    ecx = 0; /* xor self */
    edx++;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(edx, eax)) goto loc_003D13F3; /* jl: less (signed <) */

loc_003D167D: ;
    POP32(esp, ebx);

loc_003D167E: ;
    POP32(esp, ebp);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_003D16A0
 * Original: 0x003D16A0 - 0x003D16D2 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D16A0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D16A0: ;
    esp = esp - 0x1C;
    ecx = MEM32(esp + 0x30);
    ecx = ZX16(MEM16(ecx));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(edi + 0x24);
    ebp = 0; /* xor self */
    SET_LO16(ebp, MEM16(eax));
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x14) = ebp;
    SET_LO8(ebx, MEM8(edx));
    SET_LO8(edx, 0x80);
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(edx);
    g_seh_ebp = ebp; sub_003D16E0(); return; /* tail jmp 0x003D16E0 */

}

/**
 * sub_003D1900
 * Original: 0x003D1900 - 0x003D1951 (81 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1900(void)
{

loc_003D1900: ;
    PUSH32(esp, esi);
    esi = eax;
    ecx = ZX8(LO8(ecx));
    eax = 1;
    eax = eax << LO8(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    esi = MEM32(esi + 4);
    eax--;
    esi = esi & eax;
    edx = eax;
    edx = ~edx;
    edx = edx & edi;
    edx = edx | esi;
    eax = ecx;
    eax = eax & 0x18;
    ecx = ecx & 7;
    esi = 0x20;
    esi = esi - eax;
    esi = esi - ecx;
    eax = edx;
    ecx = 0x20;
    ecx = ecx - esi;
    eax = eax >> LO8(ecx);
    ecx = esi;
    edx = edx << LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | edx;
    edx = 1;
    edx = edx << LO8(ecx);
    edx--;
    eax = eax & edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003D1960
 * Original: 0x003D1960 - 0x003D19BB (91 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D1960: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_003D1968: ;
    eax = MEM32(edi + esi * 4);
    if (TEST_Z(eax, eax)) goto loc_003D19B2; /* je: equal / zero */

loc_003D196F: ;
    if (TEST_NZ(ebp, ebp)) goto loc_003D1992; /* jne: not equal / not zero */

loc_003D1973: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_Z(MEM8(edi + 0x43), LO8(edx))) goto loc_003D1992; /* je: equal / zero */

loc_003D1981: ;
    SET_LO8(ecx, MEM8(esi + edi + 0x20));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003D1900(); /* call 0x003D1900 */

loc_003D198B: ;
    esp = esp + 4;
    MEM32(edi + esi * 4 + 0x10) = eax;

loc_003D1992: ;
    SET_LO8(eax, MEM8(esi + edi + 0x20));
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    edx = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    edx = edx >> 5;
    MEM8(esi + edi + 0x20) = LO8(ecx);
    eax = MEM32(edi + esi * 4);
    edx = edx << 2;
    eax = eax + edx;
    MEM32(edi + esi * 4) = eax;

loc_003D19B2: ;
    esi++;
    if (CMP_L(esi, 4)) goto loc_003D1968; /* jl: less (signed <) */

loc_003D19B8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D19C0
 * Original: 0x003D19C0 - 0x003D1A7F (191 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D19C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D19C0: ;
    esp = esp - 0x18;
    eax = 4;
    MEM32(esp) = 0x558454;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x558344;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0x558350;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_003D1E10(); /* call 0x003D1E10 */

loc_003D19F0: ;
    SET_LO8(eax, MEM8(0x84B4E4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003D1A40; /* jne: not equal / not zero */

loc_003D19F9: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0055A512(); /* call 0x0055A512 */

loc_003D1A04: ;
    edx = MEM32(0x74F880);
    ecx = 0; /* xor self */
    MEM32(0x806A48) = ecx;
    MEM32(0x806A4C) = ecx;
    MEM32(0x806A50) = ecx;
    PUSH32(esp, edx);
    MEM32(0x806A54) = ecx;
    PUSH32(esp, 0); sub_0055A517(); /* call 0x0055A517 */

loc_003D1A2A: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(0x74F884) = eax;
    eax = MEM32(0x74F880);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D1C20(); /* call 0x003D1C20 */

loc_003D1A3D: ;
    esp = esp + 0xC;

loc_003D1A40: ;
    SET_LO8(ecx, 1);
    MEM8(0x80692C) = 0;
    MEM8(0x80692D) = LO8(ecx);
    MEM8(0x80692E) = 2;
    MEM8(0x80692F) = 3;
    eax = 0x806FE1;

loc_003D1A62: ;
    MEM8(eax + -1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 2) = 0;
    eax = eax + 0x14;
    if (CMP_L(eax, 0x807031)) goto loc_003D1A62; /* jl: less (signed <) */

loc_003D1A75: ;
    MEM8(0x84B4E4) = LO8(ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003D1A80
 * Original: 0x003D1A80 - 0x003D1AD8 (88 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D1A80: ;
    edx = MEM32(0x74F880);
    esp = esp - 0x18;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0055A539(); /* call 0x0055A539 */

loc_003D1A98: ;
    if (TEST_Z(eax, eax)) goto loc_003D1ACD; /* je: equal / zero */

loc_003D1A9C: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    edx = MEM32(0x74F880);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D1C20(); /* call 0x003D1C20 */

loc_003D1AB1: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x74F884);
    ecx = MEM32(esp + 0x10);
    eax = ~eax;
    eax = eax & edx;
    esp = esp + 0xC;
    eax = eax | ecx;
    MEM32(0x74F884) = eax;

loc_003D1ACD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0x806A58;
    g_seh_ebp = ebp; sub_003D1AE0(); return; /* tail jmp 0x003D1AE0 */

}

/**
 * sub_003D1C20
 * Original: 0x003D1C20 - 0x003D1CED (205 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D1C20: ;
    (void)0; /* cmp MEM32(esp + 4), 0x558454 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_NE(MEM32(esp + 4), 0x558454)) goto loc_003D1CEB; /* jne: not equal / not zero */

loc_003D1C33: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    /* nop */

loc_003D1C40: ;
    edi = 1;
    ecx = esi;
    edi = edi << LO8(ecx);
    if (TEST_Z(ebp, edi)) goto loc_003D1C95; /* je: equal / zero */

loc_003D1C4D: ;
    if (CMP_EQ(MEM32(esi * 4 + 0x806A48), ebx)) goto loc_003D1C95; /* je: equal / zero */

loc_003D1C56: ;
    eax = ZX8(MEM8(esi + 0x80692C));
    edx = MEM32(0x806FD8);
    ecx = eax + eax * 4;
    ecx = ecx << 6;
    MEM8(ecx + edx + 0x13C) = LO8(ebx);
    ecx = MEM32(0x806FD0);
    if (CMP_EQ(ecx, ebx)) goto loc_003D1C81; /* je: equal / zero */

loc_003D1C7A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_003D1C7E: ;
    esp = esp + 8;

loc_003D1C81: ;
    eax = MEM32(esi * 4 + 0x806A48);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055BDEC(); /* call 0x0055BDEC */

loc_003D1C8E: ;
    MEM32(esi * 4 + 0x806A48) = ebx;

loc_003D1C95: ;
    ecx = MEM32(esp + 0x18);
    if (TEST_Z(ecx, edi)) goto loc_003D1CDE; /* je: equal / zero */

loc_003D1C9D: ;
    eax = ZX8(MEM8(esi + 0x80692C));
    ecx = MEM32(0x806FD8);
    edx = eax + eax * 4;
    edx = edx << 6;
    MEM8(edx + ecx + 0x13C) = 1;
    ecx = MEM32(0x806FD0);
    if (CMP_EQ(ecx, ebx)) goto loc_003D1CCA; /* je: equal / zero */

loc_003D1CC2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_003D1CC7: ;
    esp = esp + 8;

loc_003D1CCA: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0055BD96(); /* call 0x0055BD96 */

loc_003D1CD7: ;
    MEM32(esi * 4 + 0x806A48) = eax;

loc_003D1CDE: ;
    esi++;
    if (CMP_L(esi, 4)) goto loc_003D1C40; /* jl: less (signed <) */

loc_003D1CE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003D1CEB: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D1CF0
 * Original: 0x003D1CF0 - 0x003D1D2B (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D1CF0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    eax = eax + eax * 4;
    eax = eax << 6;
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    edx = MEM32(0x806FD8);
    if (CMP_B(LO8(edx), LO8(ebx))) { sub_003D1D2B(); return; } /* jb: below (unsigned <) */

loc_003D1D05: ;
    eax = eax + edx;
    if (TEST_Z(MEM32(eax + 4), ecx)) goto loc_003D1D1A; /* je: equal / zero */

loc_003D1D0C: ;
    ebx = MEM32(eax + 8);
    edx = ecx;
    edx = ~edx;
    ebx = ebx & edx;
    MEM32(eax + 8) = ebx;
    goto loc_003D1D1D;

loc_003D1D1A: ;
    MEM32(eax + 8) = MEM32(eax + 8) | ecx;

loc_003D1D1D: ;
    MEM32(eax) = MEM32(eax) | ecx;
    edx = MEM32(eax + 0xC);
    ecx = ~ecx;
    edx = edx & ecx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D1D70
 * Original: 0x003D1D70 - 0x003D1E0F (159 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1D70(void)
{
    int _cf = 0; /* carry flag */

loc_003D1D70: ;
    ecx = MEM32(0x806FD8);
    eax = eax + eax * 4;
    eax = eax << 6;
    eax = eax + ecx;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx & 0x100;
    edx = (uint32_t)(-(int32_t)edx);
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    edx = edx & 0xFF;
    MEM8(eax + 0x134) = LO8(edx);
    edx = ecx;
    edx = edx & 0x200;
    edx = (uint32_t)(-(int32_t)edx);
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    edx = edx & 0xFF;
    MEM8(eax + 0x135) = LO8(edx);
    edx = ecx;
    edx = edx & 0x400;
    edx = (uint32_t)(-(int32_t)edx);
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    edx = edx & 0xFF;
    MEM8(eax + 0x136) = LO8(edx);
    edx = ecx;
    edx = edx & 0x800;
    edx = (uint32_t)(-(int32_t)edx);
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    edx = edx & 0xFF;
    MEM8(eax + 0x137) = LO8(edx);
    edx = ecx;
    edx = edx & 0x1000;
    edx = (uint32_t)(-(int32_t)edx);
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    ecx = ecx & 0x2000;
    edx = edx & 0xFF;
    ecx = (uint32_t)(-(int32_t)ecx);
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    MEM8(eax + 0x138) = LO8(edx);
    ecx = ecx & 0xFF;
    MEM8(eax + 0x139) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D1E10
 * Original: 0x003D1E10 - 0x003D1E7E (110 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1E10(void)
{
    float xmm0;

loc_003D1E10: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = 0; /* xor self */
    MEMF(0x806AC0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x806ABC) = 0x3D2520;
    MEM32(0x806AB4) = 0x3D2570;
    MEM32(0x806FC8) = 0x3D25C0;
    MEM32(0x806AB8) = 0x3D2710;
    MEM32(0x806AB0) = 0x3D2770;
    MEM32(0x806FD0) = eax;
    MEM32(0x806FD8) = 0x806AC8;
    MEM32(0x806FD4) = 4;
    MEM32(0x806AC8) = eax;
    MEMF(0x806FCC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003D1E80
 * Original: 0x003D1E80 - 0x003D1F6E (238 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D1E80: ;
    ecx = MEM32(0x806FD4);
    esp = esp - 8;
    if (CMP_LE(ecx & ecx, 0)) goto loc_003D1F6A; /* jle: less or equal (signed <=) */

loc_003D1E91: ;
    xmm3 = MEMF(0x806AC0); /* movss */
    xmm4 = MEMF(0x806FCC); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x806FD8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x14;
    ebx = 0; /* xor self */
    eax = ebp;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_003D1EC0: ;
    esi = 0; /* xor self */
    ecx = 1;

loc_003D1EC7: ;
    if (TEST_Z(MEM32(eax), ecx)) goto loc_003D1F26; /* je: equal / zero */

loc_003D1ECB: ;
    xmm1 = MEMF(edi); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(edi) = xmm0; /* movss */
    if ((xmm0 < xmm3)) goto loc_003D1F31; /* jb: below (unsigned <) */

loc_003D1EDF: ;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 < xmm1)) goto loc_003D1EF5; /* jb: below (unsigned <) */

loc_003D1EE4: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) | ecx;
    edx = ebx + esi;
    MEMF(ebp + edx * 4 + 0x94) = xmm5; /* movss */
    goto loc_003D1F31;

loc_003D1EF5: ;
    edx = ebx + esi;
    xmm0 = MEMF(ebp + edx * 4 + 0x94); /* movss */
    edx = ebp + edx * 4 + 0x94;
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    MEMF(edx) = xmm0; /* movss */
    if ((xmm0 < xmm4)) goto loc_003D1F2A; /* jb: below (unsigned <) */

loc_003D1F15: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) | ecx;
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(edx) = xmm0; /* movss */
    goto loc_003D1F31;

loc_003D1F26: ;
    MEMF(edi) = xmm5; /* movss */

loc_003D1F2A: ;
    edx = ecx;
    edx = ~edx;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & edx;

loc_003D1F31: ;
    esi++;
    edi = edi + 4;
    ecx = ecx << 1;
    if (CMP_L(esi, 0x20)) goto loc_003D1EC7; /* jl: less (signed <) */

loc_003D1F3C: ;
    ecx = MEM32(eax);
    edi = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    edi = edi + 0x140;
    ebx = ebx + 0x50;
    eax = eax + 0x140;
    ecx--;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ecx;
    if ((ecx != 0)) goto loc_003D1EC0; /* jne: not equal / not zero */

loc_003D1F66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003D1F6A: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003D1F70
 * Original: 0x003D1F70 - 0x003D1FE7 (119 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1F70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003D1F70: ;
    esp = esp - 8;
    MEM32(esp) = eax;
    eax = MEM32(0x806ABC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (TEST_Z(eax, eax)) goto loc_003D1F93; /* je: equal / zero */

loc_003D1F83: ;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D1F90: ;
    esp = esp + 0xC;

loc_003D1F93: ;
    ecx = MEM32(esp);
    eax = MEM32(0x806FD8);
    edx = esi + esi * 4;
    edx = edx << 6;
    eax = eax + edx;
    MEM32(eax + 0x114) = ecx;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x118) = edx;
    xmm0 = (float)(int32_t)MEM32(esp); /* cvtsi2ss */
    edx = MEM32(0x806AB8);
    ecx = eax + 0x124;
    eax = eax + 0x128;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    MEMF(eax) = xmm0; /* movss */
    if (TEST_Z(edx, edx)) goto loc_003D1FE3; /* je: equal / zero */

loc_003D1FDB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_003D1FE0: ;
    esp = esp + 0xC;

loc_003D1FE3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003D1FF0
 * Original: 0x003D1FF0 - 0x003D2067 (119 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1FF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003D1FF0: ;
    esp = esp - 8;
    MEM32(esp) = eax;
    eax = MEM32(0x806AB4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (TEST_Z(eax, eax)) goto loc_003D2013; /* je: equal / zero */

loc_003D2003: ;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D2010: ;
    esp = esp + 0xC;

loc_003D2013: ;
    ecx = MEM32(esp);
    eax = MEM32(0x806FD8);
    edx = esi + esi * 4;
    edx = edx << 6;
    eax = eax + edx;
    MEM32(eax + 0x11C) = ecx;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x120) = edx;
    xmm0 = (float)(int32_t)MEM32(esp); /* cvtsi2ss */
    edx = MEM32(0x806AB0);
    ecx = eax + 0x12C;
    eax = eax + 0x130;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    MEMF(eax) = xmm0; /* movss */
    if (TEST_Z(edx, edx)) goto loc_003D2063; /* je: equal / zero */

loc_003D205B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_003D2060: ;
    esp = esp + 0xC;

loc_003D2063: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003D2070
 * Original: 0x003D2070 - 0x003D2098 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2070(void)
{

loc_003D2070: ;
    ecx = MEM32(0x806FD8);
    eax = eax + eax * 4;
    eax = eax << 6;
    edx = MEM32(eax + ecx + 0x11C);
    eax = eax + ecx;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x120);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003D20A0
 * Original: 0x003D20A0 - 0x003D2110 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D20A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D20A0: ;
    PUSH32(esp, ecx);
    MEM8(esp + 2) = LO8(eax);
    eax = MEM32(0x806FC8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 3) = LO8(ecx);
    if (TEST_Z(eax, eax)) goto loc_003D20C7; /* je: equal / zero */

loc_003D20B2: ;
    edx = esp + 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 6;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D20C4: ;
    esp = esp + 0x10;

loc_003D20C7: ;
    SET_LO8(ecx, MEM8(esp + 2));
    eax = MEM32(0x806FD8);
    edx = esi + esi * 4;
    edx = edx << 6;
    eax = eax + edx;
    MEM8(eax + 0x13A) = LO8(ecx);
    SET_LO8(edx, MEM8(esp + 3));
    MEM8(eax + 0x13B) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 2));
    PUSH32(esp, 0x1E);
    ecx = 0x4000;
    eax = esi;
    PUSH32(esp, 0); sub_003D1CF0(); /* call 0x003D1CF0 */

loc_003D20FA: ;
    SET_LO8(edx, MEM8(esp + 7));
    PUSH32(esp, 0x1E);
    ecx = 0x8000;
    eax = esi;
    PUSH32(esp, 0); sub_003D1CF0(); /* call 0x003D1CF0 */

loc_003D210C: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003D2110
 * Original: 0x003D2110 - 0x003D2180 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2110(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D2110: ;
    PUSH32(esp, ecx);
    MEM8(esp + 2) = LO8(eax);
    eax = MEM32(0x806FC8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 3) = LO8(ecx);
    if (TEST_Z(eax, eax)) goto loc_003D2137; /* je: equal / zero */

loc_003D2122: ;
    edx = esp + 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 6;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x300);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D2134: ;
    esp = esp + 0x10;

loc_003D2137: ;
    SET_LO8(ecx, MEM8(esp + 2));
    eax = MEM32(0x806FD8);
    edx = esi + esi * 4;
    edx = edx << 6;
    eax = eax + edx;
    MEM8(eax + 0x134) = LO8(ecx);
    SET_LO8(edx, MEM8(esp + 3));
    MEM8(eax + 0x135) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 2));
    PUSH32(esp, 0x1E);
    ecx = 0x100;
    eax = esi;
    PUSH32(esp, 0); sub_003D1CF0(); /* call 0x003D1CF0 */

loc_003D216A: ;
    SET_LO8(edx, MEM8(esp + 7));
    PUSH32(esp, 0x1E);
    ecx = 0x200;
    eax = esi;
    PUSH32(esp, 0); sub_003D1CF0(); /* call 0x003D1CF0 */

loc_003D217C: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003D2180
 * Original: 0x003D2180 - 0x003D21F0 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2180(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D2180: ;
    PUSH32(esp, ecx);
    MEM8(esp + 2) = LO8(eax);
    eax = MEM32(0x806FC8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 3) = LO8(ecx);
    if (TEST_Z(eax, eax)) goto loc_003D21A7; /* je: equal / zero */

loc_003D2192: ;
    edx = esp + 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 6;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC00);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D21A4: ;
    esp = esp + 0x10;

loc_003D21A7: ;
    SET_LO8(ecx, MEM8(esp + 2));
    eax = MEM32(0x806FD8);
    edx = esi + esi * 4;
    edx = edx << 6;
    eax = eax + edx;
    MEM8(eax + 0x136) = LO8(ecx);
    SET_LO8(edx, MEM8(esp + 3));
    MEM8(eax + 0x137) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 2));
    PUSH32(esp, 0x1E);
    ecx = 0x400;
    eax = esi;
    PUSH32(esp, 0); sub_003D1CF0(); /* call 0x003D1CF0 */

loc_003D21DA: ;
    SET_LO8(edx, MEM8(esp + 7));
    PUSH32(esp, 0x1E);
    ecx = 0x800;
    eax = esi;
    PUSH32(esp, 0); sub_003D1CF0(); /* call 0x003D1CF0 */

loc_003D21EC: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003D21F0
 * Original: 0x003D21F0 - 0x003D2260 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D21F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D21F0: ;
    PUSH32(esp, ecx);
    MEM8(esp + 2) = LO8(eax);
    eax = MEM32(0x806FC8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 3) = LO8(ecx);
    if (TEST_Z(eax, eax)) goto loc_003D2217; /* je: equal / zero */

loc_003D2202: ;
    edx = esp + 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 6;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D2214: ;
    esp = esp + 0x10;

loc_003D2217: ;
    SET_LO8(ecx, MEM8(esp + 2));
    eax = MEM32(0x806FD8);
    edx = esi + esi * 4;
    edx = edx << 6;
    eax = eax + edx;
    MEM8(eax + 0x138) = LO8(ecx);
    SET_LO8(edx, MEM8(esp + 3));
    MEM8(eax + 0x139) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 2));
    PUSH32(esp, 0x1E);
    ecx = 0x1000;
    eax = esi;
    PUSH32(esp, 0); sub_003D1CF0(); /* call 0x003D1CF0 */

loc_003D224A: ;
    SET_LO8(edx, MEM8(esp + 7));
    PUSH32(esp, 0x1E);
    ecx = 0x2000;
    eax = esi;
    PUSH32(esp, 0); sub_003D1CF0(); /* call 0x003D1CF0 */

loc_003D225C: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003D2260
 * Original: 0x003D2260 - 0x003D245B (507 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D2260: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x806FD8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 1;
    MEM32(esp + 0x10) = 8;

loc_003D2278: ;
    if (TEST_Z(MEM32(esp + 0x1C), ecx)) goto loc_003D22E5; /* je: equal / zero */

loc_003D227E: ;
    (void)0; /* test MEM32(esp + 0x18), ecx - flags set for next jcc */
    edx = eax + eax * 4;
    if (TEST_Z(MEM32(esp + 0x18), ecx)) goto loc_003D22B6; /* je: equal / zero */

loc_003D2287: ;
    edx = edx << 6;
    esi = MEM32(edx + ebx);
    edx = edx + ebx;
    if (TEST_Z(ecx, esi)) goto loc_003D22A1; /* je: equal / zero */

loc_003D2293: ;
    ebp = MEM32(edx + 8);
    edi = ecx;
    edi = ~edi;
    ebp = ebp & edi;
    MEM32(edx + 8) = ebp;
    goto loc_003D22A4;

loc_003D22A1: ;
    MEM32(edx + 8) = MEM32(edx + 8) | ecx;

loc_003D22A4: ;
    edi = MEM32(edx + 0xC);
    esi = esi | ecx;
    MEM32(edx) = esi;
    esi = ecx;
    esi = ~esi;
    edi = edi & esi;
    MEM32(edx + 0xC) = edi;
    goto loc_003D22E5;

loc_003D22B6: ;
    edx = edx << 6;
    edi = MEM32(edx + ebx);
    edx = edx + ebx;
    if (TEST_Z(ecx, edi)) goto loc_003D22C7; /* je: equal / zero */

loc_003D22C2: ;
    MEM32(edx + 0xC) = MEM32(edx + 0xC) | ecx;
    goto loc_003D22D3;

loc_003D22C7: ;
    ebp = MEM32(edx + 0xC);
    esi = ecx;
    esi = ~esi;
    ebp = ebp & esi;
    MEM32(edx + 0xC) = ebp;

loc_003D22D3: ;
    esi = ecx;
    esi = ~esi;
    ebp = esi;
    ebp = ebp & edi;
    edi = MEM32(edx + 8);
    edi = edi & esi;
    MEM32(edx) = ebp;
    MEM32(edx + 8) = edi;

loc_003D22E5: ;
    edx = MEM32(esp + 0x1C);
    ecx = ecx << 1;
    if (TEST_Z(edx, ecx)) goto loc_003D2358; /* je: equal / zero */

loc_003D22EF: ;
    edx = MEM32(esp + 0x18);
    (void)0; /* test edx, ecx - flags set for next jcc */
    edx = eax + eax * 4;
    if (TEST_Z(edx, ecx)) goto loc_003D2329; /* je: equal / zero */

loc_003D22FA: ;
    edx = edx << 6;
    esi = MEM32(edx + ebx);
    edx = edx + ebx;
    if (TEST_Z(ecx, esi)) goto loc_003D2314; /* je: equal / zero */

loc_003D2306: ;
    ebp = MEM32(edx + 8);
    edi = ecx;
    edi = ~edi;
    ebp = ebp & edi;
    MEM32(edx + 8) = ebp;
    goto loc_003D2317;

loc_003D2314: ;
    MEM32(edx + 8) = MEM32(edx + 8) | ecx;

loc_003D2317: ;
    edi = MEM32(edx + 0xC);
    esi = esi | ecx;
    MEM32(edx) = esi;
    esi = ecx;
    esi = ~esi;
    edi = edi & esi;
    MEM32(edx + 0xC) = edi;
    goto loc_003D2358;

loc_003D2329: ;
    edx = edx << 6;
    edi = MEM32(edx + ebx);
    edx = edx + ebx;
    if (TEST_Z(ecx, edi)) goto loc_003D233A; /* je: equal / zero */

loc_003D2335: ;
    MEM32(edx + 0xC) = MEM32(edx + 0xC) | ecx;
    goto loc_003D2346;

loc_003D233A: ;
    ebp = MEM32(edx + 0xC);
    esi = ecx;
    esi = ~esi;
    ebp = ebp & esi;
    MEM32(edx + 0xC) = ebp;

loc_003D2346: ;
    esi = ecx;
    esi = ~esi;
    ebp = esi;
    ebp = ebp & edi;
    edi = MEM32(edx + 8);
    edi = edi & esi;
    MEM32(edx) = ebp;
    MEM32(edx + 8) = edi;

loc_003D2358: ;
    edx = MEM32(esp + 0x1C);
    ecx = ecx << 1;
    if (TEST_Z(edx, ecx)) goto loc_003D23CB; /* je: equal / zero */

loc_003D2362: ;
    edx = MEM32(esp + 0x18);
    (void)0; /* test edx, ecx - flags set for next jcc */
    edx = eax + eax * 4;
    if (TEST_Z(edx, ecx)) goto loc_003D239C; /* je: equal / zero */

loc_003D236D: ;
    edx = edx << 6;
    esi = MEM32(edx + ebx);
    edx = edx + ebx;
    if (TEST_Z(ecx, esi)) goto loc_003D2387; /* je: equal / zero */

loc_003D2379: ;
    ebp = MEM32(edx + 8);
    edi = ecx;
    edi = ~edi;
    ebp = ebp & edi;
    MEM32(edx + 8) = ebp;
    goto loc_003D238A;

loc_003D2387: ;
    MEM32(edx + 8) = MEM32(edx + 8) | ecx;

loc_003D238A: ;
    edi = MEM32(edx + 0xC);
    esi = esi | ecx;
    MEM32(edx) = esi;
    esi = ecx;
    esi = ~esi;
    edi = edi & esi;
    MEM32(edx + 0xC) = edi;
    goto loc_003D23CB;

loc_003D239C: ;
    edx = edx << 6;
    edi = MEM32(edx + ebx);
    edx = edx + ebx;
    if (TEST_Z(ecx, edi)) goto loc_003D23AD; /* je: equal / zero */

loc_003D23A8: ;
    MEM32(edx + 0xC) = MEM32(edx + 0xC) | ecx;
    goto loc_003D23B9;

loc_003D23AD: ;
    ebp = MEM32(edx + 0xC);
    esi = ecx;
    esi = ~esi;
    ebp = ebp & esi;
    MEM32(edx + 0xC) = ebp;

loc_003D23B9: ;
    esi = ecx;
    esi = ~esi;
    ebp = esi;
    ebp = ebp & edi;
    edi = MEM32(edx + 8);
    edi = edi & esi;
    MEM32(edx) = ebp;
    MEM32(edx + 8) = edi;

loc_003D23CB: ;
    edx = MEM32(esp + 0x1C);
    ecx = ecx << 1;
    if (TEST_Z(edx, ecx)) goto loc_003D243E; /* je: equal / zero */

loc_003D23D5: ;
    edx = MEM32(esp + 0x18);
    (void)0; /* test edx, ecx - flags set for next jcc */
    edx = eax + eax * 4;
    if (TEST_Z(edx, ecx)) goto loc_003D240F; /* je: equal / zero */

loc_003D23E0: ;
    edx = edx << 6;
    esi = MEM32(edx + ebx);
    edx = edx + ebx;
    if (TEST_Z(ecx, esi)) goto loc_003D23FA; /* je: equal / zero */

loc_003D23EC: ;
    ebp = MEM32(edx + 8);
    edi = ecx;
    edi = ~edi;
    ebp = ebp & edi;
    MEM32(edx + 8) = ebp;
    goto loc_003D23FD;

loc_003D23FA: ;
    MEM32(edx + 8) = MEM32(edx + 8) | ecx;

loc_003D23FD: ;
    edi = MEM32(edx + 0xC);
    esi = esi | ecx;
    MEM32(edx) = esi;
    esi = ecx;
    esi = ~esi;
    edi = edi & esi;
    MEM32(edx + 0xC) = edi;
    goto loc_003D243E;

loc_003D240F: ;
    edx = edx << 6;
    edi = MEM32(edx + ebx);
    edx = edx + ebx;
    if (TEST_Z(ecx, edi)) goto loc_003D2420; /* je: equal / zero */

loc_003D241B: ;
    MEM32(edx + 0xC) = MEM32(edx + 0xC) | ecx;
    goto loc_003D242C;

loc_003D2420: ;
    ebp = MEM32(edx + 0xC);
    esi = ecx;
    esi = ~esi;
    ebp = ebp & esi;
    MEM32(edx + 0xC) = ebp;

loc_003D242C: ;
    esi = ecx;
    esi = ~esi;
    ebp = esi;
    ebp = ebp & edi;
    edi = MEM32(edx + 8);
    edi = edi & esi;
    MEM32(edx) = ebp;
    MEM32(edx + 8) = edi;

loc_003D243E: ;
    edx = MEM32(esp + 0x10);
    ecx = ecx << 1;
    edx--;
    MEM32(esp + 0x10) = edx;
    if ((edx != 0)) goto loc_003D2278; /* jne: not equal / not zero */

loc_003D244F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_003D1D70(); return; /* tail jmp 0x003D1D70 */

}

/**
 * sub_003D2460
 * Original: 0x003D2460 - 0x003D24B6 (86 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D2460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(0x806FD8);
    PUSH32(esp, edi);
    edi = 1;
    ebx = 0x20;

loc_003D2478: ;
    ecx = ZX16(LO16(edi));
    if (TEST_Z(ebp, ecx)) goto loc_003D24A8; /* je: equal / zero */

loc_003D247F: ;
    edx = MEM32(esp + 0x14);
    (void)0; /* test edx, ecx - flags set for next jcc */
    edx = eax + eax * 4;
    if (TEST_Z(edx, ecx)) goto loc_003D249D; /* je: equal / zero */

loc_003D248A: ;
    edx = edx << 6;
    MEM32(edx + esi + 8) = MEM32(edx + esi + 8) | ecx;
    MEM32(edx + esi) = MEM32(edx + esi) | ecx;
    edx = edx + esi;
    ecx = ~ecx;
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & ecx;
    goto loc_003D24A8;

loc_003D249D: ;
    edx = edx << 6;
    edx = edx + esi + 8;
    ecx = ~ecx;
    MEM32(edx) = MEM32(edx) & ecx;

loc_003D24A8: ;
    edi = edi << 1;
    ebx--;
    if ((ebx != 0)) goto loc_003D2478; /* jne: not equal / not zero */

loc_003D24AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_003D1D70(); return; /* tail jmp 0x003D1D70 */

}

/**
 * sub_003D24C0
 * Original: 0x003D24C0 - 0x003D251B (91 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D24C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D24C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x806FD8);
    edx = 1;
    ebx = 0x20;

loc_003D24D8: ;
    if (TEST_Z(ebp, edx)) goto loc_003D250D; /* je: equal / zero */

loc_003D24DC: ;
    ecx = MEM32(esp + 0x14);
    (void)0; /* test ecx, edx - flags set for next jcc */
    ecx = eax + eax * 4;
    if (TEST_Z(ecx, edx)) goto loc_003D2500; /* je: equal / zero */

loc_003D24E7: ;
    ecx = ecx << 6;
    esi = MEM32(ecx + edi + 0xC);
    ecx = ecx + edi;
    esi = esi | edx;
    MEM32(ecx + 0xC) = esi;
    esi = edx;
    esi = ~esi;
    MEM32(ecx) = MEM32(ecx) & esi;
    MEM32(ecx + 8) = MEM32(ecx + 8) & esi;
    goto loc_003D250D;

loc_003D2500: ;
    ecx = ecx << 6;
    esi = edx;
    ecx = ecx + edi + 0xC;
    esi = ~esi;
    MEM32(ecx) = MEM32(ecx) & esi;

loc_003D250D: ;
    edx = edx << 1;
    ebx--;
    if ((ebx != 0)) goto loc_003D24D8; /* jne: not equal / not zero */

loc_003D2512: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_003D1D70(); return; /* tail jmp 0x003D1D70 */

}

/**
 * sub_003D2570
 * Original: 0x003D2570 - 0x003D25B5 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2570(void)
{
    float xmm0, xmm1;

loc_003D2570: ;
    eax = MEM32(esp + 8);
    xmm1 = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm0 = MEMF(0x5A0284); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm1 = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, 0x3B);
    ebx = 0x1F;
    eax = 0xF;
    MEM32(ecx) = edx;
    PUSH32(esp, 0); sub_003D2630(); /* call 0x003D2630 */

loc_003D25B0: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D25C0
 * Original: 0x003D25C0 - 0x003D2605 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D25C0(void)
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

loc_003D25C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = ZX8(MEM8(esi));
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003D25DC: ;
    edi = MEM32(esp + 0x18);
    MEM8(esi) = LO8(eax);
    ecx = ZX8(MEM8(edi));
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003D25F8: ;
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi));
    if (CMP_AE(LO8(eax), 0x28)) { sub_003D2605(); return; } /* jae: above or equal (unsigned >=) */

loc_003D2600: ;
    MEM8(esi) = 0;
    g_seh_ebp = ebp; sub_003D260F(); return; /* tail jmp 0x003D260F */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003D2630
 * Original: 0x003D2630 - 0x003D2658 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D2630: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(edx);
    esp = esp - 8;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x20);
    esi = MEM32(eax);
    if (CMP_GE(ecx & ecx, 0)) { sub_003D2658(); return; } /* jge: greater or equal (signed >=) */

loc_003D264C: ;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    ecx = (uint32_t)(-(int32_t)ecx);
    g_seh_ebp = ebp; sub_003D2660(); return; /* tail jmp 0x003D2660 */

}

/**
 * sub_003D2710
 * Original: 0x003D2710 - 0x003D273E (46 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D2710: ;
    eax = MEM32(esp + 8);
    xmm0 = MEMF(eax); /* movss */
    xmm2 = MEMF(0x648E34); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_003D273E(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D2739: ;
    xmm0 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_003D2746(); return; /* tail jmp 0x003D2746 */

}

/**
 * sub_003D2770
 * Original: 0x003D2770 - 0x003D279E (46 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D2770: ;
    eax = MEM32(esp + 8);
    xmm0 = MEMF(eax); /* movss */
    xmm2 = MEMF(0x648E30); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_003D279E(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D2799: ;
    xmm0 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_003D27A6(); return; /* tail jmp 0x003D27A6 */

}

/**
 * sub_003D27D0
 * Original: 0x003D27D0 - 0x003D2901 (305 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D27D0(void)
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

loc_003D27D0: ;
    xmm1 = MEMF(0x806FF0); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, edi);
    if (1 /* jnp after test - parity */) goto loc_003D2810; /* jnp: not parity */

loc_003D27E9: ;
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(0x806FF0) = xmm1; /* movss */
    if ((xmm0 < xmm1)) goto loc_003D2810; /* jb: below (unsigned <) */

loc_003D27FA: ;
    MEM8(0x806FE2) = LO8(ebx);
    MEMF(0x806FE8) = xmm0; /* movss */
    MEMF(0x806FEC) = xmm0; /* movss */

loc_003D2810: ;
    xmm1 = MEMF(0x807004); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003D2848; /* jnp: not parity */

loc_003D2821: ;
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(0x807004) = xmm1; /* movss */
    if ((xmm0 < xmm1)) goto loc_003D2848; /* jb: below (unsigned <) */

loc_003D2832: ;
    MEM8(0x806FF6) = LO8(ebx);
    MEMF(0x806FFC) = xmm0; /* movss */
    MEMF(0x807000) = xmm0; /* movss */

loc_003D2848: ;
    xmm1 = MEMF(0x807018); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003D2880; /* jnp: not parity */

loc_003D2859: ;
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(0x807018) = xmm1; /* movss */
    if ((xmm0 < xmm1)) goto loc_003D2880; /* jb: below (unsigned <) */

loc_003D286A: ;
    MEM8(0x80700A) = LO8(ebx);
    MEMF(0x807010) = xmm0; /* movss */
    MEMF(0x807014) = xmm0; /* movss */

loc_003D2880: ;
    xmm1 = MEMF(0x80702C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003D28B8; /* jnp: not parity */

loc_003D2891: ;
    xmm1 = xmm1 - xmm2; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(0x80702C) = xmm1; /* movss */
    if ((xmm0 < xmm1)) goto loc_003D28B8; /* jb: below (unsigned <) */

loc_003D28A2: ;
    MEM8(0x80701E) = LO8(ebx);
    MEMF(0x807024) = xmm0; /* movss */
    MEMF(0x807028) = xmm0; /* movss */

loc_003D28B8: ;
    esi = ecx;
    edi = 0x806FEC;
    esi = esi + 0x42;

loc_003D28C2: ;
    if (CMP_NE(MEM32(esi + -66), ebx)) goto loc_003D28EF; /* jne: not equal / not zero */

loc_003D28C7: ;
    MEM32(esi + -66) = ebx;
    MEM32(esi + -62) = ebx;
    fp_push(MEMF(edi + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003D28DB: ;
    MEM16(esi) = LO16(eax);
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003D28EB: ;
    MEM16(esi + 2) = LO16(eax);

loc_003D28EF: ;
    edi = edi + 0x14;
    esi = esi + 0x46;
    if (CMP_L(edi, 0x80703C)) goto loc_003D28C2; /* jl: less (signed <) */

loc_003D28FD: ;
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
 * sub_003D2910
 * Original: 0x003D2910 - 0x003D29A8 (152 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2910(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003D2910: ;
    ecx = edx + edx * 4;
    ecx = ecx << 2;
    SET_LO8(eax, MEM8(ecx + 0x806FE0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D29A7; /* je: equal / zero */

loc_003D2924: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003D296C; /* jp: parity */

loc_003D2930: ;
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003D296C; /* jp: parity */

loc_003D2939: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEM8(ecx + 0x806FE2) = 0;
    MEM8(ecx + 0x806FE5) = LO8(edx);
    MEMF(ecx + 0x806FE8) = xmm1; /* movss */
    MEMF(ecx + 0x806FEC) = xmm2; /* movss */
    MEMF(ecx + 0x806FF0) = xmm0; /* movss */

loc_003D2964: ;
    MEM8(ecx + 0x806FE4) = 1;
    esp += 4; return; /* ret */

loc_003D296C: ;
    MEMF(ecx + 0x806FE8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(ecx + 0x806FE2) = 1;
    MEM8(ecx + 0x806FE5) = LO8(edx);
    MEMF(ecx + 0x806FEC) = xmm2; /* movss */
    MEMF(ecx + 0x806FF0) = xmm1; /* movss */
    if (1 /* jnp after test - parity */) goto loc_003D2964; /* jnp: not parity */

loc_003D29A0: ;
    MEM8(ecx + 0x806FE4) = 0;

loc_003D29A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003D29B0
 * Original: 0x003D29B0 - 0x003D2A0A (90 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D29B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D29B0: ;
    eax = MEM32(0x84B4EC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003D2A02; /* jle: less or equal (signed <=) */

loc_003D29C3: ;
    ecx = MEM32(edi * 4 + 0x807030);
    esi = ebp;
    /* nop */

loc_003D29D0: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi))) goto loc_003D29F4; /* jne: not equal / not zero */

loc_003D29D8: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003D29F0; /* je: equal / zero */

loc_003D29DC: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(ebx), MEM8(esi + 1))) goto loc_003D29F4; /* jne: not equal / not zero */

loc_003D29E6: ;
    ecx = ecx + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003D29D0; /* jne: not equal / not zero */

loc_003D29F0: ;
    ecx = 0; /* xor self */
    goto loc_003D29F9;

loc_003D29F4: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx - 0xFFFFFFFFu - _cf; /* sbb */

loc_003D29F9: ;
    if (TEST_Z(ecx, ecx)) { sub_003D2A0A(); return; } /* je: equal / zero */

loc_003D29FD: ;
    edi++;
    if (CMP_L(edi, eax)) goto loc_003D29C3; /* jl: less (signed <) */

loc_003D2A02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D2A20
 * Original: 0x003D2A20 - 0x003D2A2E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D2A20: ;
    eax = MEM32(0x8086E8);
    if (TEST_NZ(eax, eax)) { sub_003D2A2E(); return; } /* jne: not equal / not zero */

loc_003D2A29: ;
    g_seh_ebp = ebp; sub_003D2A40(); return; /* tail jmp 0x003D2A40 */

}

/**
 * sub_003D2A40
 * Original: 0x003D2A40 - 0x003D2E5A (1050 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003D2A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    ecx = MEM32(0x5499E8);
    PUSH32(esp, esi);
    eax = ecx + 0x924;
    esi = 1;
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    MEM32(ecx + 0x928) = 0;
    MEM32(ecx + 0x92C) = 0x74F888;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_003D2A7A: ;
    eax = MEM32(0x807674);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx * 4 + 0x8072F8);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003D2A97: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003D2A9E: ;
    edx = esi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2AAA: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AE4) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2ABF: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2AD8: ;
    edx = MEM32(0x8072A0);
    PUSH32(esp, edx);
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_003D2AEE: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    ecx = ecx | esi;
    MEM32(0x54733C) = eax;
    MEM32(0x547340) = eax;
    eax = 3;
    MEM32(0x5499F0) = ecx;
    edx = esi;
    ecx = 0x40300;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x547358) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2B30: ;
    edx = 0; /* xor self */
    ecx = 0x40340;
    MEM32(0x549AE8) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2B42: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x549AEC) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2B5B: ;
    SET_LO8(eax, MEM8(0x8086C6));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x549AE0) = 0x206;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003D2E5A(); return; } /* je: equal / zero */

loc_003D2B72: ;
    eax = MEM32(0x8072F0);
    if (TEST_NZ(eax, eax)) { sub_003D2E5A(); return; } /* jne: not equal / not zero */

loc_003D2B7F: ;
    eax = MEM32(0x827F20);
    ecx = ZX16(MEM16(0x827F24));
    xmm0 = 0.0f; /* xorps self = zero */
    edx = ZX16(LO16(eax));
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    edi = eax;
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(0x80764C) = xmm2; /* movss */
    MEMF(0x807644) = xmm1; /* movss */
    MEMF(0x807648) = xmm0; /* movss */
    MEMF(0x807640) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_003D2BD9: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2BE8: ;
    PUSH32(esp, 0);
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003D2BF9: ;
    esi = MEM32(0x84B868);
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm1 = MEMF(0x648D14); /* movss */
    if (TEST_Z(esi, esi)) goto loc_003D2CB2; /* je: equal / zero */

loc_003D2C0F: ;
    if (TEST_NZ(MEM8(esi + 8), 3)) goto loc_003D2CAA; /* jne: not equal / not zero */

loc_003D2C19: ;
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    eax = esi;
    PUSH32(esp, 0); sub_003FA7A0(); /* call 0x003FA7A0 */

loc_003D2C43: ;
    xmm0 = MEMF(esi + 0x108); /* movss */
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    xmm2 = MEMF(0x648D18); /* movss */
    edi = MEM32(0x827F20);
    xmm2 = xmm2 / xmm0; /* divss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(0x80764C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(0x807644) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(0x807648) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    esp = esp + 0x14;
    MEMF(0x8076B4) = xmm2; /* movss */
    MEMF(0x807640) = xmm0; /* movss */
    goto loc_003D2CB2;

loc_003D2CAA: ;
    MEMF(0x8076B4) = xmm1; /* movss */

loc_003D2CB2: ;
    xmm5 = MEMF(0x84B500); /* movss */
    xmm7 = MEMF(0x648CE0); /* movss */
    xmm6 = MEMF(0x84B504); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 + MEMF(0x74F9FC); /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 / xmm0; /* divss */
    xmm0 = xmm4; /* movaps */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x90) = xmm4; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 + MEMF(0x74FA00); /* addss */
    xmm4 = xmm6; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm2 = xmm2 / xmm4; /* divss */
    xmm4 = xmm2; /* movaps */
    edx = ZX16(LO16(edi));
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm2 = xmm2 - xmm3; /* subss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 / xmm0; /* divss */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x98) = xmm2; /* movss */
    xmm2 = MEMF(0x648E54); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(0x649718); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    PUSH32(esp, ecx);
    edx = ecx;
    MEMF(esp + 0x90) = xmm2; /* movss */
    xmm2 = MEMF(0x64A730); /* movss */
    xmm4 = xmm4 * xmm7; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x80) = xmm4; /* movss */
    MEMF(esp + 0xA4) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003D2E4A: ;
    eax = edx;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_003D2E55: ;
    esp = esp + 8;
    g_seh_ebp = ebp; sub_003D2ECC(); return; /* tail jmp 0x003D2ECC */

}

/**
 * sub_003D2EF0
 * Original: 0x003D2EF0 - 0x003D30AD (445 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2EF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003D2EF0: ;
    ecx = MEM32(0x5499E8);
    eax = ecx + 0x924;
    MEM32(eax) = 1;
    MEM32(ecx + 0x928) = 0;
    MEM32(ecx + 0x92C) = 0x74F888;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_003D2F1B: ;
    eax = MEM32(0x807674);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx * 4 + 0x8072F8);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003D2F38: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003D2F3F: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2F4E: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2F67: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2F80: ;
    edx = MEM32(0x8072A0);
    PUSH32(esp, edx);
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_003D2F96: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    ecx = ecx | 1;
    MEM32(0x54733C) = eax;
    MEM32(0x547340) = eax;
    eax = 3;
    MEM32(0x5499F0) = ecx;
    edx = 1;
    ecx = 0x40300;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x547358) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2FDC: ;
    edx = 0; /* xor self */
    ecx = 0x40340;
    MEM32(0x549AE8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D2FF2: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x549AEC) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D300B: ;
    SET_LO8(eax, MEM8(0x8086C6));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x549AE0) = 0x206;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D304E; /* je: equal / zero */

loc_003D301E: ;
    eax = MEM32(0x8072F0);
    if (TEST_NZ(eax, eax)) goto loc_003D304E; /* jne: not equal / not zero */

loc_003D3027: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_003D302E: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D303D: ;
    PUSH32(esp, 0);
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_003D304E: ;
    edx = 0x8072B0;
    ecx = 0x60;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_003D305D: ;
    eax = MEM32(0x84B868);
    if (TEST_Z(eax, eax)) goto loc_003D30A6; /* je: equal / zero */

loc_003D3066: ;
    xmm0 = MEMF(eax + 0xEC); /* movss */
    xmm1 = MEMF(eax + 0xF0); /* movss */
    xmm2 = MEMF(eax + 0xF4); /* movss */
    xmm3 = MEMF(eax + 0xF8); /* movss */
    MEMF(0x80764C) = xmm3; /* movss */
    MEMF(0x807644) = xmm1; /* movss */
    MEMF(0x807648) = xmm2; /* movss */
    MEMF(0x807640) = xmm0; /* movss */

loc_003D30A6: ;
    MEM32(0x8072F0) = MEM32(0x8072F0) + 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003D30B0
 * Original: 0x003D30B0 - 0x003D30C0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D30B0(void)
{

loc_003D30B0: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003D30B9: ;
    MEM32(0x8072F0) = MEM32(0x8072F0) - 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003D30C0
 * Original: 0x003D30C0 - 0x003D3A60 (2464 bytes, 552 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D30C0(void)
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

loc_003D30C0: ;
    esp = esp - 0x40;
    xmm5 = MEMF(0x8076B4); /* movss */
    xmm1 = MEMF(0x80765C); /* movss */
    xmm4 = MEMF(0x807660); /* movss */
    xmm6 = MEMF(0x80761C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x807674);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax * 4 + 0x8072F8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    ecx = ecx + ecx * 8;
    ebx = edi + ecx * 2;
    SET_LO16(ecx, MEM16(ebx + 0xE));
    edx = 0; /* xor self */
    (void)0; /* cmp LO16(ecx), 0xFFFFFFFFu - flags set for next jcc */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm0 = xmm4; /* movaps */
    MEMF(esp + 0x48) = xmm5; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    if (CMP_LE(LO16(ecx), 0xFFFFFFFFu)) goto loc_003D3160; /* jle: less or equal (signed <=) */

loc_003D3126: ;
    eax = MEM32(eax + 0xC);
    ecx = SX16(LO16(ecx));
    eax = eax + ecx * 2;
    if (TEST_Z(eax, eax)) goto loc_003D3160; /* je: equal / zero */

loc_003D3133: ;
    SET_LO8(ecx, MEM8(eax));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_003D3160; /* je: equal / zero */

loc_003D313A: ;
    /* nop */

loc_003D3140: ;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_003D3160; /* jne: not equal / not zero */

loc_003D3145: ;
    edi = MEM32(esp + 0x58);
    ecx = ZX8(LO8(ecx));
    if (CMP_NE(ecx, edi)) goto loc_003D3155; /* jne: not equal / not zero */

loc_003D3150: ;
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(eax + 1));

loc_003D3155: ;
    SET_LO8(ecx, MEM8(eax + 2));
    eax = eax + 2;
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_003D3140; /* jne: not equal / not zero */

loc_003D3160: ;
    SET_LO8(eax, MEM8(0x8086C6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D34D3; /* je: equal / zero */

loc_003D316D: ;
    edi = MEM32(0x8086E0);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, MEM8(0x8086CA));
    if (TEST_Z(edi, edi)) goto loc_003D323B; /* je: equal / zero */

loc_003D3181: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003D31FB; /* je: equal / zero */

loc_003D3185: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    xmm6 = MEMF(0x648D10); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp); /* addss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3FE0(); /* call 0x003E3FE0 */

loc_003D31AC: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 3);
    eax = ZX8(MEM8(ebx + 0x10));
    xmm2 = xmm0; /* movaps */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3FE0(); /* call 0x003E3FE0 */

loc_003D31F3: ;
    esp = esp + 4;
    goto loc_003D32ED;

loc_003D31FB: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx);
    eax = ZX8(MEM8(ebx + 0x10));
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 3);
    xmm0 = xmm0 - xmm3; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esi); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    goto loc_003D32E2;

loc_003D323B: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ecx = (uint32_t)(int32_t)SMEM8(ebx);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003D32AE; /* je: equal / zero */

loc_003D3242: ;
    xmm6 = MEMF(0x648D10); /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ebp); /* addss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3FE0(); /* call 0x003E3FE0 */

loc_003D3266: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 3);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 1);
    xmm2 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3FE0(); /* call 0x003E3FE0 */

loc_003D32A9: ;
    esp = esp + 4;
    goto loc_003D32ED;

loc_003D32AE: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 1);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 3);
    xmm0 = xmm0 - xmm3; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(esi); /* addss */

loc_003D32E2: ;
    xmm2 = xmm2 + MEMF(ebp); /* addss */
    MEMF(esp + 0x20) = xmm2; /* movss */

loc_003D32ED: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 2);
    xmm1 = MEMF(0x80769C); /* movss */
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 - MEMF(0x648D14); /* subss */
    xmm7 = xmm0; /* movaps */
    xmm6 = xmm1; /* movaps */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x44) = xmm7; /* movss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    if (TEST_Z(edi, edi)) goto loc_003D334F; /* je: equal / zero */

loc_003D333B: ;
    eax = ZX8(MEM8(ebx + 0x10));
    ecx = ecx - eax;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    goto loc_003D3369;

loc_003D334F: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 1);
    eax = eax + ecx;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    xmm1 = xmm1 - MEMF(0x648D14); /* subss */

loc_003D3369: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm6; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm6; /* movss */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003D343A; /* je: equal / zero */

loc_003D338F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm6 = 0.0f; /* xorps self = zero */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648DD0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003D33D4; /* jbe: below or equal (unsigned <=) */

loc_003D33AE: ;
    xmm3 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm3, xmm6 - sets EFLAGS */
    ecx = (int32_t)xmm3; /* cvttss2si */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    if ((xmm3 >= xmm6)) goto loc_003D33DA; /* jae: above or equal (unsigned >=) */

loc_003D33C1: ;
    /* ucomiss xmm3, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003D33DA; /* jnp: not parity */

loc_003D33CA: ;
    xmm1 = xmm1 - MEMF(0x648D14); /* subss */
    goto loc_003D33DA;

loc_003D33D4: ;
    xmm1 = MEMF(esp + 0x2C); /* movss */

loc_003D33DA: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEMF(esp + 0x14) = xmm1; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648DD0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003D3428; /* jbe: below or equal (unsigned <=) */

loc_003D3402: ;
    xmm4 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm4, xmm6 - sets EFLAGS */
    edx = (int32_t)xmm4; /* cvttss2si */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    if ((xmm4 >= xmm6)) goto loc_003D342E; /* jae: above or equal (unsigned >=) */

loc_003D3415: ;
    /* ucomiss xmm4, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003D342E; /* jnp: not parity */

loc_003D341E: ;
    xmm3 = xmm3 - MEMF(0x648D14); /* subss */
    goto loc_003D342E;

loc_003D3428: ;
    xmm3 = MEMF(esp + 0x2C); /* movss */

loc_003D342E: ;
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */

loc_003D343A: ;
    /* comiss xmm2, MEMF(0x80764C) - sets EFLAGS */
    if ((xmm2 > MEMF(0x80764C))) goto loc_003D346A; /* ja: above (unsigned >) */

loc_003D3443: ;
    /* comiss xmm0, MEMF(0x807644) - sets EFLAGS */
    if ((xmm0 > MEMF(0x807644))) goto loc_003D346A; /* ja: above (unsigned >) */

loc_003D344C: ;
    xmm4 = MEMF(0x807648); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_003D346A; /* ja: above (unsigned >) */

loc_003D3459: ;
    xmm4 = MEMF(0x807640); /* movss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_003D3657; /* jbe: below or equal (unsigned <=) */

loc_003D346A: ;
    SET_LO8(eax, MEM8(0x8086C7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D34A5; /* je: equal / zero */

loc_003D3473: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xC);
    xmm0 = MEMF(0x8076A0); /* movss */
    xmm0 = xmm0 * MEMF(0x80767C); /* mulss */
    POP32(esp, edi);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(ebp); /* addss */
    POP32(esp, esi);
    MEMF(ebp) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_003D34A5: ;
    xmm0 = MEMF(0x80767C); /* movss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(0x8076A0); /* mulss */
    POP32(esp, edi);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(ebp); /* addss */
    POP32(esp, esi);
    MEMF(ebp) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_003D34D3: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx);
    edx = (uint32_t)(int32_t)SMEM8(ebx + 1);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 2);
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 3);
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + MEMF(ebp); /* addss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    xmm2 = xmm1; /* movaps */
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm0 = MEMF(0x807634); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(0x807628); /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm2 = xmm2 + xmm6; /* addss */
    xmm6 = MEMF(0x807638); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm6 = MEMF(0x80762C); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm6 = MEMF(0x807620); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = MEMF(0x80763C); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm6 = MEMF(0x807630); /* movss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm3 = MEMF(0x807624); /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x807628); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(0x80762C); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm4 = xmm4 + MEMF(esp + 0x24); /* addss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm1 = MEMF(0x807634); /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    xmm4 = MEMF(0x807638); /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm4 = xmm4 + xmm7; /* addss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm4 = MEMF(0x80763C); /* movss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 + MEMF(esp + 0x30); /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x40) = xmm5; /* movss */
    xmm6 = xmm6 + xmm2; /* addss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x44) = xmm7; /* movss */
    MEMF(esp + 0x3C) = xmm4; /* movss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */

loc_003D3657: ;
    edx = MEM32(0x807674);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax * 4 + 0x8072F8);
    eax = MEM32(ecx);
    edx = ZX16(MEM16(eax + 8));
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    eax = ZX16(MEM16(eax + 0xA));
    xmm6 = MEMF(0x649138); /* movss */
    edx--;
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 8);
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm5 = xmm5 + MEMF(0x648D3C); /* addss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0xA);
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    eax--;
    xmm5 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm5 = xmm5 * xmm6; /* mulss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x2C); /* movss */
    xmm5 = xmm5 - MEMF(0x648D3C); /* subss */
    xmm6 = MEMF(esp + 0x38); /* movss */
    xmm6 = xmm6 * xmm5; /* mulss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5 = xmm5 * MEMF(0x649138); /* mulss */
    MEMF(esp + 0x4C) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x2C); /* movss */
    xmm5 = xmm5 + MEMF(0x648D3C); /* addss */
    xmm6 = MEMF(esp + 0x4C); /* movss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm5 = MEMF(0x8086D8); /* movss */
    MEMF(esp + 0x4C) = xmm6; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 + xmm2; /* addss */
    xmm2 = MEMF(0x8086DC); /* movss */
    MEMF(0x807230) = xmm6; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(0x807234) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x38); /* movss */
    MEMF(0x807248) = xmm6; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 + xmm3; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 + xmm7; /* addss */
    MEMF(0x807250) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x30); /* movss */
    MEMF(0x807254) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x38); /* movss */
    MEMF(0x807264) = xmm3; /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 + MEMF(esp + 0x10); /* addss */
    xmm5 = xmm5 + MEMF(esp + 0x34); /* addss */
    MEMF(0x807268) = xmm3; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 + MEMF(esp + 0x18); /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x14); /* addss */
    MEMF(0x807238) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x807260) = xmm1; /* movss */
    MEMF(0x80726C) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x3C); /* movss */
    MEMF(0x80727C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    MEMF(0x80723C) = xmm0; /* movss */
    MEMF(0x807244) = xmm4; /* movss */
    MEMF(0x80724C) = xmm6; /* movss */
    MEMF(0x807258) = xmm0; /* movss */
    MEMF(0x807270) = xmm3; /* movss */
    MEMF(0x807274) = xmm0; /* movss */
    MEMF(0x807280) = xmm1; /* movss */
    MEMF(0x807284) = xmm5; /* movss */
    SET_LO8(eax, MEM8(0x807664));
    MEM8(0x807296) = LO8(eax);
    MEM8(0x80727A) = LO8(eax);
    MEM8(0x80725E) = LO8(eax);
    MEM8(0x807242) = LO8(eax);
    SET_LO8(eax, MEM8(0x807665));
    MEM8(0x807295) = LO8(eax);
    MEM8(0x807279) = LO8(eax);
    MEM8(0x80725D) = LO8(eax);
    MEM8(0x807241) = LO8(eax);
    SET_LO8(eax, MEM8(0x807666));
    MEM8(0x807294) = LO8(eax);
    MEM8(0x807278) = LO8(eax);
    MEM8(0x80725C) = LO8(eax);
    MEM8(0x807240) = LO8(eax);
    SET_LO8(eax, MEM8(0x807667));
    MEM8(0x807297) = LO8(eax);
    MEM8(0x80727B) = LO8(eax);
    MEM8(0x80725F) = LO8(eax);
    MEM8(0x807243) = LO8(eax);
    eax = MEM32(0x807668);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(0x807288) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    MEMF(0x80728C) = xmm2; /* movss */
    MEMF(0x807290) = xmm0; /* movss */
    MEMF(0x807298) = xmm4; /* movss */
    MEMF(0x80729C) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003D395C; /* je: equal / zero */

loc_003D38C2: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x807243);
    PUSH32(esp, 0x807240);
    PUSH32(esp, 0x807241);
    PUSH32(esp, 0x807242);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D38E2: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80725F);
    PUSH32(esp, 0x80725C);
    PUSH32(esp, 0x80725D);
    PUSH32(esp, 0x80725E);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x807668), _icall_esp); /* indirect call */
    }

loc_003D3906: ;
    edx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80727B);
    PUSH32(esp, 0x807278);
    PUSH32(esp, 0x807279);
    PUSH32(esp, 0x80727A);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x807668), _icall_esp); /* indirect call */
    }

loc_003D392A: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x7C);
    esp = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x807297);
    PUSH32(esp, 0x807294);
    PUSH32(esp, 0x807295);
    PUSH32(esp, 0x807296);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x807668), _icall_esp); /* indirect call */
    }

loc_003D3951: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x18;

loc_003D395C: ;
    eax = MEM32(0x807670);
    if (TEST_Z(eax, eax)) goto loc_003D3981; /* je: equal / zero */

loc_003D3965: ;
    ecx = MEM32(0x807674);
    edx = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x807230);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D3976: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 8;

loc_003D3981: ;
    eax = MEM32(0x8086E4);
    if (TEST_NZ(eax, eax)) goto loc_003D3A1B; /* jne: not equal / not zero */

loc_003D398E: ;
    esi = 0x21;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_003D3998: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    eax = eax + 4;
    MEM32(eax + 4) = 0x40701818;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    edi = eax;
    eax = eax + 0x1C;
    ecx = 7;
    esi = 0x807230;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax;
    eax = eax + 0x1C;
    ecx = 7;
    esi = 0x80724C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax;
    eax = eax + 0x1C;
    ecx = 7;
    esi = 0x807268;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax;
    eax = eax + 0x1C;
    ecx = 7;
    esi = 0x807284;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x5499E8);
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ecx) = eax;

loc_003D3A1B: ;
    SET_LO8(eax, MEM8(0x8086C7));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003D3A60(); return; } /* je: equal / zero */

loc_003D3A24: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0xC);
    xmm0 = MEMF(0x8076A0); /* movss */
    xmm0 = xmm0 * MEMF(0x80767C); /* mulss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x48); /* mulss */
    xmm0 = xmm0 + MEMF(ebp); /* addss */
    xmm0 = xmm0 + MEMF(0x807680); /* addss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003D3AA0
 * Original: 0x003D3AA0 - 0x003D3B2C (140 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3AA0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003D3AA0: ;
    esp = esp - 8;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp) = xmm0; /* movss */
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
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(0x807628) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(0x80762C) = xmm1; /* movss */
    MEMF(0x807630) = xmm0; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003D3B30
 * Original: 0x003D3B30 - 0x003D3BBC (140 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3B30(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003D3B30: ;
    esp = esp - 8;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp) = xmm0; /* movss */
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
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(0x807634) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(0x807638) = xmm1; /* movss */
    MEMF(0x80763C) = xmm0; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003D3BC0
 * Original: 0x003D3BC0 - 0x003D3C42 (130 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3BC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D3BC0: ;
    ecx = ZX16(LO16(edx));
    ecx = ecx & 0x800000FFu;
    if (((int32_t)ecx >= 0)) goto loc_003D3BD3; /* jns: not sign (positive) */

loc_003D3BCB: ;
    ecx--;
    ecx = ecx | 0xFFFFFF00u;
    ecx++;

loc_003D3BD3: ;
    if (CMP_EQ(MEM16(ecx * 8 + 0x8076BC), LO16(edx))) { sub_003D3C42(); return; } /* je: equal / zero */

loc_003D3BDD: ;
    eax = MEM32(ecx * 8 + 0x8076C0);
    if (TEST_Z(eax, eax)) { sub_003D3C42(); return; } /* je: equal / zero */

loc_003D3BE8: ;
    eax = ecx + 1;
    eax = eax & 0x800000FFu;
    if (((int32_t)eax >= 0)) goto loc_003D3BF9; /* jns: not sign (positive) */

loc_003D3BF2: ;
    eax--;
    eax = eax | 0xFFFFFF00u;
    eax++;

loc_003D3BF9: ;
    if (CMP_EQ(eax, ecx)) goto loc_003D3C30; /* je: equal / zero */

loc_003D3BFD: ;
    PUSH32(esp, edi);
    edi = edi;

loc_003D3C00: ;
    if (CMP_GE(eax, 0x100)) goto loc_003D3C1C; /* jge: greater or equal (signed >=) */

loc_003D3C07: ;
    if (CMP_EQ(MEM16(eax * 8 + 0x8076BC), LO16(edx))) goto loc_003D3C31; /* je: equal / zero */

loc_003D3C11: ;
    edi = MEM32(eax * 8 + 0x8076C0);
    if (TEST_Z(edi, edi)) goto loc_003D3C31; /* je: equal / zero */

loc_003D3C1C: ;
    eax++;
    eax = eax & 0x800000FFu;
    if (((int32_t)eax >= 0)) goto loc_003D3C2B; /* jns: not sign (positive) */

loc_003D3C24: ;
    eax--;
    eax = eax | 0xFFFFFF00u;
    eax++;

loc_003D3C2B: ;
    if (CMP_NE(eax, ecx)) goto loc_003D3C00; /* jne: not equal / not zero */

loc_003D3C2F: ;
    POP32(esp, edi);

loc_003D3C30: ;
    esp += 4; return; /* ret */

loc_003D3C31: ;
    MEM16(eax * 8 + 0x8076BC) = LO16(edx);
    MEM32(eax * 8 + 0x8076C0) = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D3C60
 * Original: 0x003D3C60 - 0x003D3CE2 (130 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3C60(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D3C60: ;
    ecx = ZX16(LO16(edx));
    ecx = ecx & 0x800000FFu;
    if (((int32_t)ecx >= 0)) goto loc_003D3C73; /* jns: not sign (positive) */

loc_003D3C6B: ;
    ecx--;
    ecx = ecx | 0xFFFFFF00u;
    ecx++;

loc_003D3C73: ;
    if (CMP_EQ(MEM16(ecx * 8 + 0x807EBC), LO16(edx))) { sub_003D3CE2(); return; } /* je: equal / zero */

loc_003D3C7D: ;
    eax = MEM32(ecx * 8 + 0x807EC0);
    if (TEST_Z(eax, eax)) { sub_003D3CE2(); return; } /* je: equal / zero */

loc_003D3C88: ;
    eax = ecx + 1;
    eax = eax & 0x800000FFu;
    if (((int32_t)eax >= 0)) goto loc_003D3C99; /* jns: not sign (positive) */

loc_003D3C92: ;
    eax--;
    eax = eax | 0xFFFFFF00u;
    eax++;

loc_003D3C99: ;
    if (CMP_EQ(eax, ecx)) goto loc_003D3CD0; /* je: equal / zero */

loc_003D3C9D: ;
    PUSH32(esp, edi);
    edi = edi;

loc_003D3CA0: ;
    if (CMP_GE(eax, 0x100)) goto loc_003D3CBC; /* jge: greater or equal (signed >=) */

loc_003D3CA7: ;
    if (CMP_EQ(MEM16(eax * 8 + 0x807EBC), LO16(edx))) goto loc_003D3CD1; /* je: equal / zero */

loc_003D3CB1: ;
    edi = MEM32(eax * 8 + 0x807EC0);
    if (TEST_Z(edi, edi)) goto loc_003D3CD1; /* je: equal / zero */

loc_003D3CBC: ;
    eax++;
    eax = eax & 0x800000FFu;
    if (((int32_t)eax >= 0)) goto loc_003D3CCB; /* jns: not sign (positive) */

loc_003D3CC4: ;
    eax--;
    eax = eax | 0xFFFFFF00u;
    eax++;

loc_003D3CCB: ;
    if (CMP_NE(eax, ecx)) goto loc_003D3CA0; /* jne: not equal / not zero */

loc_003D3CCF: ;
    POP32(esp, edi);

loc_003D3CD0: ;
    esp += 4; return; /* ret */

loc_003D3CD1: ;
    MEM16(eax * 8 + 0x807EBC) = LO16(edx);
    MEM32(eax * 8 + 0x807EC0) = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D3D00
 * Original: 0x003D3D00 - 0x003D3E5B (347 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D3D00: ;
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebp + ebx * 2;
    if (TEST_Z(eax, eax)) goto loc_003D3D30; /* je: equal / zero */

loc_003D3D13: ;
    ecx = MEM32(0x808708);
    if (TEST_Z(ecx, ecx)) goto loc_003D3D30; /* je: equal / zero */

loc_003D3D1D: ;
    SET_LO8(ecx, MEM8(0x8086D4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003D3D30; /* je: equal / zero */

loc_003D3D27: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003D59D0(); /* call 0x003D59D0 */

loc_003D3D2D: ;
    esp = esp + 4;

loc_003D3D30: ;
    eax = MEM32(esp + 0x1C);
    SET_LO8(ecx, MEM8(0x8086C4));
    edi = eax;
    edi = edi - ebx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003D3E49; /* je: equal / zero */

loc_003D3D46: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebp = esi;
    MEM32(esp + 0x1C) = ebp;
    if (TEST_Z(esi, esi)) goto loc_003D3E55; /* je: equal / zero */

loc_003D3D54: ;
    ebx = 1;
    /* nop */

loc_003D3D60: ;
    if (CMP_EQ(MEM16(ebp), 0)) goto loc_003D3E55; /* je: equal / zero */

loc_003D3D6B: ;
    if (TEST_Z(edi, edi)) goto loc_003D3E55; /* je: equal / zero */

loc_003D3D73: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esi;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_003D55C0(); /* call 0x003D55C0 */

loc_003D3D8D: ;
    ecx = MEM32(esp + 0x24);
    esp = esp + 0xC;
    if (TEST_Z(ecx, ecx)) goto loc_003D3E32; /* je: equal / zero */

loc_003D3D9C: ;
    ebp = MEM32(esp + 0x1C);
    edi = edi - ecx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x8086CD) = LO8(ebx);
    if (CMP_NE(eax, ebx)) goto loc_003D3DCB; /* jne: not equal / not zero */

loc_003D3DAC: ;
    ecx--;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_003D3FE0(); /* call 0x003D3FE0 */

loc_003D3DB7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x6019F4;
    PUSH32(esp, 0); sub_003D3FE0(); /* call 0x003D3FE0 */

loc_003D3DC5: ;
    esp = esp + 0x10;
    edi--;
    goto loc_003D3E22;

loc_003D3DCB: ;
    if (CMP_NE(eax, 2)) goto loc_003D3DEE; /* jne: not equal / not zero */

loc_003D3DD0: ;
    ecx--;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_003D3FE0(); /* call 0x003D3FE0 */

loc_003D3DDB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x6019F4;
    PUSH32(esp, 0); sub_003D3FE0(); /* call 0x003D3FE0 */

loc_003D3DE9: ;
    esp = esp + 0x10;
    goto loc_003D3E22;

loc_003D3DEE: ;
    if (TEST_Z(ebp, ebp)) goto loc_003D3E14; /* je: equal / zero */

loc_003D3DF2: ;
    if (CMP_EQ(eax, 3)) goto loc_003D3E14; /* je: equal / zero */

loc_003D3DF7: ;
    ecx--;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_003D3FE0(); /* call 0x003D3FE0 */

loc_003D3E02: ;
    esp = esp + 8;
    if (CMP_EQ(MEM16(esi), 0xA)) goto loc_003D3E22; /* je: equal / zero */

loc_003D3E0B: ;
    PUSH32(esp, 0);
    eax = 0x6019F4;
    goto loc_003D3E18;

loc_003D3E14: ;
    ecx--;
    PUSH32(esp, ecx);
    eax = esi;

loc_003D3E18: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003D3FE0(); /* call 0x003D3FE0 */

loc_003D3E1F: ;
    esp = esp + 8;

loc_003D3E22: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    esi = ebp;
    if (TEST_NZ(ebp, ebp)) goto loc_003D3D60; /* jne: not equal / not zero */

loc_003D3E2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003D3E32: ;
    PUSH32(esp, 0x7FFFFFFE);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_003D3FE0(); /* call 0x003D3FE0 */

loc_003D3E40: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003D3E49: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_003D3FE0(); /* call 0x003D3FE0 */

loc_003D3E52: ;
    esp = esp + 8;

loc_003D3E55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D3E60
 * Original: 0x003D3E60 - 0x003D3E8A (42 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D3E60: ;
    xmm0 = MEMF(0x84B508); /* movss */
    /* comiss xmm0, MEMF(0x80765C) - sets EFLAGS */
    if ((xmm0 > MEMF(0x80765C))) { sub_003D3E8A(); return; } /* ja: above (unsigned >) */

loc_003D3E71: ;
    /* comiss xmm0, MEMF(0x807660) - sets EFLAGS */
    if ((xmm0 > MEMF(0x807660))) { sub_003D3E8A(); return; } /* ja: above (unsigned >) */

loc_003D3E7A: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    ecx = ecx | 1;
    g_seh_ebp = ebp; sub_003D3E97(); return; /* tail jmp 0x003D3E97 */

}

/**
 * sub_003D3EC0
 * Original: 0x003D3EC0 - 0x003D3FDA (282 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3EC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003D3EC0: ;
    esp = esp - 0x1C;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(ebx, ebx)) goto loc_003D3EEC; /* je: equal / zero */

loc_003D3ECA: ;
    eax = MEM32(0x808708);
    if (TEST_Z(eax, eax)) goto loc_003D3EEC; /* je: equal / zero */

loc_003D3ED3: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D3EEC; /* je: equal / zero */

loc_003D3EDC: ;
    PUSH32(esp, 0); sub_003D5540(); /* call 0x003D5540 */

loc_003D3EE1: ;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_003D59D0(); /* call 0x003D59D0 */

loc_003D3EE9: ;
    esp = esp + 4;

loc_003D3EEC: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 4) = esi;
    if (TEST_Z(esi, esi)) goto loc_003D3F9E; /* je: equal / zero */

loc_003D3F07: ;
    PUSH32(esp, edi);
    goto loc_003D3F10;

    /* nop */

loc_003D3F10: ;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_003D3F9D; /* je: equal / zero */

loc_003D3F1A: ;
    SET_LO8(eax, MEM8(0x8086C4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = esi;
    MEM32(esp + 0x14) = 0x7FFFFFFF;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D3F4C; /* je: equal / zero */

loc_003D3F2D: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_003D55C0(); /* call 0x003D55C0 */

loc_003D3F43: ;
    esi = MEM32(esp + 0x14);
    esp = esp + 0xC;
    goto loc_003D3F52;

loc_003D3F4C: ;
    esi = 0; /* xor self */
    MEM32(esp + 8) = esi;

loc_003D3F52: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_003D3F6D: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    esp = esp + 0x10;
    /* comiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0xC))) goto loc_003D3F83; /* jbe: below or equal (unsigned <=) */

loc_003D3F7D: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_003D3F83: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_NZ(esi, esi)) goto loc_003D3F10; /* jne: not equal / not zero */

loc_003D3F9D: ;
    POP32(esp, edi);

loc_003D3F9E: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm0 = MEMF(esp + 8); /* movss */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(ecx) = xmm0; /* movss */
    POP32(esp, esi);
    if (TEST_Z(ebx, ebx)) goto loc_003D3FD6; /* je: equal / zero */

loc_003D3FBF: ;
    eax = MEM32(0x808708);
    if (TEST_Z(eax, eax)) goto loc_003D3FD6; /* je: equal / zero */

loc_003D3FC8: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D3FD6; /* je: equal / zero */

loc_003D3FD1: ;
    PUSH32(esp, 0); sub_003D5580(); /* call 0x003D5580 */

loc_003D3FD6: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003D3FE0
 * Original: 0x003D3FE0 - 0x003D4266 (646 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D3FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D3FE0: ;
    esp = esp - 0x18;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = eax;
    (void)0; /* cmp MEM32(0x8086F0), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x8086F0), ebx)) goto loc_003D400E; /* jne: not equal / not zero */

loc_003D4008: ;
    MEM32(0x8086F4) = ebx;

loc_003D400E: ;
    edi = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x5F59F0);
    ebp = edi;
    ebp = ebp - ecx;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ebp++;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_003D4032: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x10;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003D40CD; /* jnp: not parity */

loc_003D404C: ;
    if (CMP_NE(MEM32(0x8086F0), ebx)) goto loc_003D40CD; /* jne: not equal / not zero */

loc_003D4054: ;
    xmm0 = MEMF(0x807650); /* movss */
    /* ucomiss xmm0, MEMF(0x807658) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003D40CD; /* jp: parity */

loc_003D4069: ;
    if (CMP_NE(MEM32(0x8086E4), ebx)) goto loc_003D40CD; /* jne: not equal / not zero */

loc_003D4071: ;
    eax = MEM32(0x807650);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edi++;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_003D4C30(); /* call 0x003D4C30 */

loc_003D4085: ;
    eax = MEM32(0x8076B0);
    esp = esp + 0xC;
    if (CMP_NE(eax, 1)) goto loc_003D40B2; /* jne: not equal / not zero */

loc_003D4092: ;
    xmm0 = MEMF(0x8076A4); /* movss */
    xmm0 = xmm0 + MEMF(0x807658); /* addss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    goto loc_003D40C5;

loc_003D40B2: ;
    if (CMP_NE(eax, 2)) goto loc_003D40CD; /* jne: not equal / not zero */

loc_003D40B7: ;
    xmm0 = MEMF(0x8076A4); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */

loc_003D40C5: ;
    MEMF(0x807650) = xmm0; /* movss */

loc_003D40CD: ;
    if (CMP_EQ(ebp, ebx)) goto loc_003D425E; /* je: equal / zero */

loc_003D40D5: ;
    goto loc_003D40E0;

loc_003D40D7: ;
    ebx = 0; /* xor self */
    /* nop */

loc_003D40E0: ;
    if (CMP_EQ(MEM16(esi), LO16(ebx))) goto loc_003D425E; /* je: equal / zero */

loc_003D40E9: ;
    ebx = MEM32(0x808708);
    if (TEST_Z(ebx, ebx)) goto loc_003D4114; /* je: equal / zero */

loc_003D40F3: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D4114; /* je: equal / zero */

loc_003D40FC: ;
    edx = esp + 0x20;
    edi = esp + 0x1C;
    ecx = esi;
    PUSH32(esp, 0); sub_003D5AB0(); /* call 0x003D5AB0 */

loc_003D410B: ;
    ecx = ZX16(MEM16(esp + 0x20));
    MEM32(esp + 0x14) = ecx;

loc_003D4114: ;
    ecx = MEM32(esp + 0x1C);
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_003D41FD; /* je: equal / zero */

loc_003D4121: ;
    eax = esi;
    edi = ebx;
    MEM32(0x8086F0) = 1;
    PUSH32(esp, 0); sub_003D5B60(); /* call 0x003D5B60 */

loc_003D4134: ;
    eax = ZX16(MEM16(esp + 0x1C));
    ebp = ebp - eax;
    PUSH32(esp, 0x5F59F0);
    esi = esi + eax * 2;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    eax = esi;
    MEM32(0x8086F0) = 0;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_003D415F: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x10;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003D4256; /* jnp: not parity */

loc_003D4179: ;
    eax = MEM32(0x8086F4);
    if (TEST_NZ(eax, eax)) goto loc_003D4256; /* jne: not equal / not zero */

loc_003D4186: ;
    eax = MEM32(0x8086E4);
    if (TEST_NZ(eax, eax)) goto loc_003D4256; /* jne: not equal / not zero */

loc_003D4193: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(0x807650);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx++;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_003D4C30(); /* call 0x003D4C30 */

loc_003D41AB: ;
    eax = MEM32(0x8076B0);
    esp = esp + 0xC;
    if (CMP_NE(eax, 1)) goto loc_003D41E0; /* jne: not equal / not zero */

loc_003D41B8: ;
    xmm0 = MEMF(0x8076A4); /* movss */
    xmm0 = xmm0 + MEMF(0x807658); /* addss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(0x807650) = xmm0; /* movss */
    goto loc_003D4256;

loc_003D41E0: ;
    if (CMP_NE(eax, 2)) goto loc_003D4256; /* jne: not equal / not zero */

loc_003D41E5: ;
    xmm0 = MEMF(0x8076A4); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    MEMF(0x807650) = xmm0; /* movss */
    goto loc_003D4256;

loc_003D41FD: ;
    ecx = MEM32(esp + 0x2C);
    edi = esi + ecx * 2;
    esi = MEM32(esp + 0x14);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x8086F4) = 1;
    if (TEST_Z(esi, esi)) goto loc_003D421A; /* je: equal / zero */

loc_003D4216: ;
    if (CMP_LE(esi, ebp)) goto loc_003D4220; /* jle: less or equal (signed <=) */

loc_003D421A: ;
    MEM32(esp + 0x14) = ebp;
    esi = ebp;

loc_003D4220: ;
    SET_LO8(eax, MEM8(0x8086D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003D423B; /* jne: not equal / not zero */

loc_003D4229: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003D4270(); /* call 0x003D4270 */

loc_003D4236: ;
    esp = esp + 8;
    goto loc_003D4248;

loc_003D423B: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D4590(); /* call 0x003D4590 */

loc_003D4245: ;
    esp = esp + 4;

loc_003D4248: ;
    SET_LO8(eax, MEM8(0x8086D4));
    ebp = ebp - esi;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = edi + esi * 2;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D425E; /* je: equal / zero */

loc_003D4256: ;
    if (TEST_NZ(ebp, ebp)) goto loc_003D40D7; /* jne: not equal / not zero */

loc_003D425E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003D4270
 * Original: 0x003D4270 - 0x003D4572 (770 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D4270: ;
    esp = esp - 0x18;
    xmm1 = MEMF(0x807650); /* movss */
    xmm2 = MEMF(0x807654); /* movss */
    xmm3 = MEMF(0x8076A0); /* movss */
    xmm3 = xmm3 * MEMF(0x80767C); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x807674);
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    ebx = eax;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax * 4 + 0x8072F8);
    edx = MEM32(ecx);
    xmm0 = (float)(int32_t)MEM32(edx + 4); /* cvtsi2ss */
    eax = MEM32(0x808708);
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 * MEMF(0x8076B4); /* mulss */
    xmm0 = xmm0 * MEMF(0x80765C); /* mulss */
    xmm0 = xmm0 + MEMF(0x807680); /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x2C); /* addss */
    ecx = 0; /* xor self */
    ebp = ebp | 0xFFFFFFFFu;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(eax, ecx)) goto loc_003D4315; /* je: equal / zero */

loc_003D42F9: ;
    SET_LO8(edx, MEM8(0x8086D4));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003D4315; /* je: equal / zero */

loc_003D4303: ;
    SET_LO16(edx, MEM16(eax + 4));
    MEM16(esp + 0x1C) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 6));
    MEM16(esp + 0x20) = LO16(edx);

loc_003D4315: ;
    (void)0; /* cmp MEM32(esp + 0x28), ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(MEM32(esp + 0x28), ecx)) goto loc_003D44F3; /* jle: less or equal (signed <=) */

loc_003D4323: ;
    PUSH32(esp, esi);
    goto loc_003D4331;

loc_003D4326: ;
    eax = MEM32(0x808708);
    edi = MEM32(0x807674);

loc_003D4331: ;
    SET_LO16(esi, MEM16(ebx));
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_003D44F2; /* je: equal / zero */

loc_003D433D: ;
    if (CMP_EQ(LO16(esi), 0xA)) goto loc_003D4349; /* je: equal / zero */

loc_003D4343: ;
    if (CMP_NE(LO16(esi), 0xD)) goto loc_003D4394; /* jne: not equal / not zero */

loc_003D4349: ;
    SET_LO8(ecx, MEM8(0x8086C8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003D455D; /* je: equal / zero */

loc_003D4357: ;
    if (CMP_NE(LO16(esi), 0xD)) goto loc_003D4394; /* jne: not equal / not zero */

loc_003D435D: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax * 4 + 0x8072F8);
    edx = MEM32(ecx);
    xmm1 = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x807688); /* mulss */
    xmm1 = xmm1 * MEMF(0x807660); /* mulss */
    xmm1 = xmm1 + MEMF(0x807684); /* addss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    goto loc_003D44CE;

loc_003D4394: ;
    if (CMP_NE(LO16(esi), 0xA)) goto loc_003D43E6; /* jne: not equal / not zero */

loc_003D439A: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax * 4 + 0x8072F8);
    edx = MEM32(ecx);
    xmm1 = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x807688); /* mulss */
    xmm1 = xmm1 * MEMF(0x807660); /* mulss */
    xmm1 = xmm1 + MEMF(0x807684); /* addss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x807658); /* movss */
    MEM8(0x8086CD) = 1;
    MEMF(esp + 0x10) = xmm1; /* movss */
    goto loc_003D44CE;

loc_003D43E6: ;
    if (CMP_EQ(LO16(esi), 0x20)) goto loc_003D455D; /* je: equal / zero */

loc_003D43F0: ;
    if (CMP_EQ(LO16(esi), 9)) { sub_003D4572(); return; } /* je: equal / zero */

loc_003D43FA: ;
    if (TEST_Z(eax, eax)) goto loc_003D4425; /* je: equal / zero */

loc_003D43FE: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D4425; /* je: equal / zero */

loc_003D4407: ;
    if (CMP_EQ(LO16(esi), MEM16(esp + 0x20))) goto loc_003D4415; /* je: equal / zero */

loc_003D440E: ;
    if (CMP_NE(LO16(esi), MEM16(esp + 0x24))) goto loc_003D4425; /* jne: not equal / not zero */

loc_003D4415: ;
    eax = MEM32(esp + 0x18);
    SET_LO16(esi, MEM16(ebx + 2));
    ebx = ebx + 2;
    eax++;
    MEM32(esp + 0x18) = eax;

loc_003D4425: ;
    SET_LO8(eax, MEM8(0x8086C5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D4458; /* je: equal / zero */

loc_003D442E: ;
    if (CMP_B(LO16(esi), 0x61)) goto loc_003D443A; /* jb: below (unsigned <) */

loc_003D4434: ;
    if (CMP_BE(LO16(esi), 0x7A)) goto loc_003D4448; /* jbe: below or equal (unsigned <=) */

loc_003D443A: ;
    if (CMP_B(LO16(esi), 0xE0)) goto loc_003D4458; /* jb: below (unsigned <) */

loc_003D4441: ;
    if (CMP_A(LO16(esi), 0xFD)) goto loc_003D4458; /* ja: above (unsigned >) */

loc_003D4448: ;
    xmm0 = MEMF(0x8086BC); /* movss */
    esi = esi + 0xFFE0;
    goto loc_003D4460;

loc_003D4458: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_003D4460: ;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4A50(); /* call 0x003D4A50 */

loc_003D446B: ;
    (void)0; /* cmp LO16(esi), 0xB0 - flags set for next jcc */
    edi = eax;
    if (CMP_NE(LO16(esi), 0xB0)) goto loc_003D4482; /* jne: not equal / not zero */

loc_003D4474: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */

loc_003D4482: ;
    eax = MEM32(0x80766C);
    if (TEST_Z(eax, eax)) goto loc_003D44A8; /* je: equal / zero */

loc_003D448B: ;
    SET_LO8(ecx, MEM8(0x8086CD));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003D44A8; /* je: equal / zero */

loc_003D4495: ;
    ecx = MEM32(0x807654);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM8(0x8086CD) = 0;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D44A5: ;
    esp = esp + 4;

loc_003D44A8: ;
    if (TEST_S(edi, edi)) goto loc_003D450A; /* jl: less (signed <) */

loc_003D44AC: ;
    xmm3 = MEMF(esp + 0x30); /* movss */
    edx = esp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = edi;
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_003D30C0(); /* call 0x003D30C0 */

loc_003D44C3: ;
    esp = esp + 8;
    ebp = edi;

loc_003D44C8: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */

loc_003D44CE: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x2C);
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    ebx = ebx + 2;
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_003D4326; /* jl: less (signed <) */

loc_003D44F2: ;
    POP32(esp, esi);

loc_003D44F3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEMF(0x807650) = xmm1; /* movss */
    MEMF(0x807654) = xmm2; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_003D450A: ;
    edx = esi;
    esi = esp + 0x14;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_003D4AD0(); /* call 0x003D4AD0 */

loc_003D4519: ;
    if (TEST_NZ(eax, eax)) goto loc_003D44C8; /* jne: not equal / not zero */

loc_003D451D: ;
    esi = MEM32(0x8086C0);
    PUSH32(esp, 0); sub_003D4A50(); /* call 0x003D4A50 */

loc_003D4528: ;
    esi = eax;
    if (CMP_GE(esi & esi, 0)) goto loc_003D453C; /* jge: greater or equal (signed >=) */

loc_003D452E: ;
    SET_LO16(esi, MEM16(0x8086C2));
    PUSH32(esp, 0); sub_003D4A50(); /* call 0x003D4A50 */

loc_003D453A: ;
    esi = eax;

loc_003D453C: ;
    xmm3 = MEMF(esp + 0x30); /* movss */
    eax = esp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_003D30C0(); /* call 0x003D30C0 */

loc_003D4553: ;
    esp = esp + 8;
    ebp = esi;
    goto loc_003D44C8;

loc_003D455D: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    ebp = ebp | 0xFFFFFFFFu;
    goto loc_003D44CE;

}

/**
 * sub_003D4590
 * Original: 0x003D4590 - 0x003D4708 (376 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4590(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D4590: ;
    esp = esp - 0x14;
    SET_LO8(edx, MEM8(0x807667));
    SET_LO8(eax, MEM8(0x807665));
    xmm1 = MEMF(0x807650); /* movss */
    SET_LO8(ecx, MEM8(0x807666));
    xmm0 = MEMF(0x80765C); /* movss */
    xmm0 = xmm0 * MEMF(0x80768C); /* mulss */
    xmm2 = MEMF(0x807654); /* movss */
    xmm3 = MEMF(0x807658); /* movss */
    xmm4 = MEMF(0x8076A4); /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    MEM8(esp + 1) = LO8(eax);
    SET_LO8(eax, MEM8(0x807694));
    MEM8(esp + 3) = LO8(edx);
    SET_LO8(edx, MEM8(0x807696));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x807664));
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm1 = MEMF(0x807660); /* movss */
    xmm1 = xmm1 * MEMF(0x807690); /* mulss */
    MEM8(esp + 6) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x807695));
    PUSH32(esp, ebp);
    ebp = MEM32(0x807668);
    xmm1 = xmm1 + xmm2; /* addss */
    MEM8(0x807664) = LO8(eax);
    SET_LO8(eax, MEM8(0x807697));
    MEM8(0x807666) = LO8(edx);
    edx = MEM32(esp + 0x20);
    MEMF(0x807654) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    MEM8(0x807665) = LO8(ecx);
    ecx = MEM32(0x807698);
    PUSH32(esp, edx);
    MEM8(0x807667) = LO8(eax);
    xmm1 = xmm1 + xmm3; /* addss */
    xmm0 = xmm0 + xmm4; /* addss */
    PUSH32(esp, esi);
    eax = edi;
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(0x807650) = xmm5; /* movss */
    MEMF(0x807658) = xmm1; /* movss */
    MEM32(0x807668) = ecx;
    MEMF(0x8076A4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4270(); /* call 0x003D4270 */

loc_003D4691: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    SET_LO8(eax, MEM8(esp + 0x11));
    SET_LO8(ecx, MEM8(esp + 0x12));
    SET_LO8(edx, MEM8(esp + 0x13));
    MEMF(0x807650) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM8(0x807665) = LO8(eax);
    eax = MEM32(esp + 0x28);
    MEMF(0x807654) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, eax);
    MEMF(0x807658) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, esi);
    eax = edi;
    MEM8(0x807664) = LO8(ebx);
    MEM8(0x807666) = LO8(ecx);
    MEM8(0x807667) = LO8(edx);
    MEM32(0x807668) = ebp;
    MEMF(0x8076A4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4270(); /* call 0x003D4270 */

loc_003D46FF: ;
    esp = esp + 0x10;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003D4710
 * Original: 0x003D4710 - 0x003D499D (653 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4710(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003D4710: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x24);
    MEM32(0x8072F0) = ebx;
    MEM32(0x8072F8) = ebx;
    MEM32(0x8072F4) = ebx;
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_003D472C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x648CF4); /* movss */
    MEM32(0x807678) = eax;
    MEM32(eax + 0x10) = ebx;
    eax = MEM32(0x807678);
    MEM32(eax + 0x14) = 1;
    ecx = MEM32(0x807678);
    MEMF(ecx + 4) = xmm0; /* movss */
    edx = MEM32(0x807678);
    MEMF(edx + 8) = xmm0; /* movss */
    eax = MEM32(0x807678);
    MEMF(eax) = xmm1; /* movss */
    ecx = MEM32(0x807678);
    MEM32(ecx + 0x18) = ebx;
    eax = MEM32(0x807678);
    MEM32(0x808704) = eax;
    MEM32(0x807674) = eax;
    SET_LO8(eax, 0xFF);
    MEMF(0x80768C) = xmm2; /* movss */
    MEMF(0x807690) = xmm2; /* movss */
    xmm2 = MEMF(0x64971C); /* movss */
    MEMF(0x807628) = xmm1; /* movss */
    MEMF(0x807638) = xmm1; /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    MEMF(0x807660) = xmm1; /* movss */
    MEMF(0x807688) = xmm1; /* movss */
    MEMF(0x8076A4) = xmm2; /* movss */
    xmm2 = MEMF(0x648D18); /* movss */
    MEMF(0x8076B4) = xmm1; /* movss */
    xmm1 = MEMF(0x649950); /* movss */
    MEM8(0x807664) = LO8(eax);
    MEM8(0x807665) = LO8(eax);
    MEM8(0x807666) = LO8(eax);
    MEM8(0x807667) = LO8(eax);
    MEM8(0x807696) = LO8(eax);
    MEM8(0x807697) = LO8(eax);
    esp = esp + 4;
    MEM16(0x808700) = 1;
    MEMF(0x80761C) = xmm0; /* movss */
    MEMF(0x807620) = xmm0; /* movss */
    MEMF(0x807624) = xmm0; /* movss */
    MEMF(0x80762C) = xmm0; /* movss */
    MEMF(0x807630) = xmm0; /* movss */
    MEMF(0x807634) = xmm0; /* movss */
    MEMF(0x80763C) = xmm0; /* movss */
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm0; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    MEM8(0x8086C9) = LO8(ebx);
    MEM32(0x807668) = ebx;
    MEMF(0x80767C) = xmm0; /* movss */
    MEM8(0x807694) = LO8(ebx);
    MEM8(0x807695) = LO8(ebx);
    MEM32(0x807698) = ebx;
    MEM8(0x8086D5) = LO8(ebx);
    MEM8(0x8086C6) = 1;
    MEMF(0x80769C) = xmm0; /* movss */
    MEM8(0x8086C7) = 1;
    MEM32(0x8076AC) = ebx;
    MEM32(0x8076B0) = ebx;
    MEM8(0x8086C4) = LO8(ebx);
    MEM8(0x8086C8) = 1;
    MEM8(0x8086CC) = LO8(ebx);
    MEMF(0x8076A8) = xmm2; /* movss */
    MEMF(0x8076B8) = xmm1; /* movss */
    MEM8(0x8086CA) = 1;
    MEM16(0x8086C0) = LO16(ebx);
    eax = 0x8076C0;
    /* nop */

loc_003D48F0: ;
    MEM16(eax + -4) = LO16(ebx);
    MEM32(eax) = ebx;
    eax = eax + 8;
    if (CMP_L(eax, 0x807EC0)) goto loc_003D48F0; /* jl: less (signed <) */

loc_003D4900: ;
    eax = 0x807EC0;

loc_003D4905: ;
    MEM16(eax + -4) = LO16(ebx);
    MEM32(eax) = ebx;
    eax = eax + 8;
    if (CMP_L(eax, 0x8086C0)) goto loc_003D4905; /* jl: less (signed <) */

loc_003D4915: ;
    xmm1 = MEMF(0x648E68); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8072A0);
    PUSH32(esp, 0x74F978);
    PUSH32(esp, 0x5A028C);
    MEM8(0x8086C5) = LO8(ebx);
    MEMF(0x8086BC) = xmm1; /* movss */
    MEM32(0x8086D0) = ebx;
    MEMF(0x8086D8) = xmm0; /* movss */
    MEMF(0x8086DC) = xmm0; /* movss */
    MEMF(0x807684) = xmm0; /* movss */
    MEMF(0x807680) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_003D4966: ;
    edx = 0x3D4C10;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(0x808708) = ebx;
    MEM32(0x807670) = ebx;
    MEM32(0x8086E4) = ebx;
    MEM32(0x8086E8) = ebx;
    MEM32(0x8086E0) = 1;
    POP32(esp, ebx);
    if (TEST_Z(edx, edx)) goto loc_003D499C; /* je: equal / zero */

loc_003D4992: ;
    MEM32(0x84B514) = 0x3D4C10;

loc_003D499C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003D49A0
 * Original: 0x003D49A0 - 0x003D49F7 (87 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D49A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D49A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = 0xCA;
    edi = 0x8072F4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(0x8072F4);
    eax = MEM32(edi + 0x1C);
    esi = 0x57;
    MEM32(0x8086EC) = eax;
    PUSH32(esp, 0); sub_003D4A50(); /* call 0x003D4A50 */

loc_003D49CB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(0x807678);
    MEM32(0x807674) = ebx;
    if (TEST_S(eax, eax)) { sub_003D49F7(); return; } /* jl: less (signed <) */

loc_003D49DB: ;
    if (CMP_GE(eax, 0xFF)) { sub_003D49F7(); return; } /* jge: greater or equal (signed >=) */

loc_003D49E2: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx * 4 + 0x8072F8);
    ecx = MEM32(edx + 8);
    eax = eax + eax * 8;
    eax = ecx + eax * 2;
    g_seh_ebp = ebp; sub_003D4A13(); return; /* tail jmp 0x003D4A13 */

}

/**
 * sub_003D4A50
 * Original: 0x003D4A50 - 0x003D4AB5 (101 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D4A50: ;
    eax = MEM32(0x8086EC);
    PUSH32(esp, ebx);
    ebx = 1;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_L(eax, ebx)) goto loc_003D4AAE; /* jl: less (signed <) */

loc_003D4A61: ;
    ecx = ZX16(LO16(esi));
    eax = ecx;
    eax = eax >> 5;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x7FF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = MEM32(0x807618);
    eax = ebx;
    edx++;
    goto loc_003D4A80;

    /* nop */

loc_003D4A80: ;
    ebp = edx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    ebp = ebp + ecx;
    eax = ebp;
    eax = eax & 0x800007FFu;
    if (((int32_t)eax >= 0)) goto loc_003D4A97; /* jns: not sign (positive) */

loc_003D4A90: ;
    eax--;
    eax = eax | 0xFFFFF800u;
    eax++;

loc_003D4A97: ;
    ebp = ZX16(LO16(eax));
    if (CMP_EQ(MEM16(edi + ebp * 4), LO16(esi))) { sub_003D4AB5(); return; } /* je: equal / zero */

loc_003D4AA0: ;
    ebp = MEM32(0x8086EC);
    ebx++;
    eax = ZX16(LO16(ebx));
    if (CMP_LE(eax, ebp)) goto loc_003D4A80; /* jle: less or equal (signed <=) */

loc_003D4AAE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D4AD0
 * Original: 0x003D4AD0 - 0x003D4B06 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4AD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D4AD0: ;
    ecx = ZX16(LO16(edx));
    ecx = ecx & 0x800000FFu;
    if (((int32_t)ecx >= 0)) goto loc_003D4AE3; /* jns: not sign (positive) */

loc_003D4ADB: ;
    ecx--;
    ecx = ecx | 0xFFFFFF00u;
    ecx++;

loc_003D4AE3: ;
    if (CMP_NE(MEM16(ecx * 8 + 0x8076BC), LO16(edx))) { sub_003D4B06(); return; } /* jne: not equal / not zero */

loc_003D4AED: ;
    eax = MEM32(ecx * 8 + 0x8076C0);
    if (TEST_Z(eax, eax)) { sub_003D4B06(); return; } /* je: equal / zero */

loc_003D4AF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D4AFD: ;
    esp = esp + 0xC;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003D4B70
 * Original: 0x003D4B70 - 0x003D4BA6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4B70(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D4B70: ;
    ecx = ZX16(LO16(edx));
    ecx = ecx & 0x800000FFu;
    if (((int32_t)ecx >= 0)) goto loc_003D4B83; /* jns: not sign (positive) */

loc_003D4B7B: ;
    ecx--;
    ecx = ecx | 0xFFFFFF00u;
    ecx++;

loc_003D4B83: ;
    if (CMP_NE(MEM16(ecx * 8 + 0x807EBC), LO16(edx))) { sub_003D4BA6(); return; } /* jne: not equal / not zero */

loc_003D4B8D: ;
    eax = MEM32(ecx * 8 + 0x807EC0);
    if (TEST_Z(eax, eax)) { sub_003D4BA6(); return; } /* je: equal / zero */

loc_003D4B98: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003D4B9D: ;
    esp = esp + 0xC;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003D4C30
 * Original: 0x003D4C30 - 0x003D4DAE (382 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D4C30: ;
    esp = esp - 0x18;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(0x8076B0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(eax, 3)) goto loc_003D4DA6; /* jne: not equal / not zero */

loc_003D4C6C: ;
    if (CMP_EQ(MEM32(0x808708), edi)) goto loc_003D4C82; /* je: equal / zero */

loc_003D4C74: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D4C82; /* je: equal / zero */

loc_003D4C7D: ;
    PUSH32(esp, 0); sub_003D5540(); /* call 0x003D5540 */

loc_003D4C82: ;
    PUSH32(esp, 0x5F59F0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_003D4C99: ;
    esp = esp + 0x10;
    if (TEST_Z(ebp, ebp)) goto loc_003D4D6B; /* je: equal / zero */

loc_003D4CA4: ;
    xmm0 = MEMF(0x648D14); /* movss */
    /* nop */

loc_003D4CB0: ;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_003D4D3C; /* je: equal / zero */

loc_003D4CBA: ;
    eax = MEM32(0x808708);
    if (TEST_Z(eax, eax)) goto loc_003D4CE7; /* je: equal / zero */

loc_003D4CC3: ;
    SET_LO8(ecx, MEM8(0x8086D4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003D4CE7; /* je: equal / zero */

loc_003D4CCD: ;
    edx = esp + 0x14;
    edi = esp + 0x18;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0); sub_003D5AB0(); /* call 0x003D5AB0 */

loc_003D4CDE: ;
    edi = ZX16(MEM16(esp + 0x14));
    ebx = MEM32(esp + 0x1C);

loc_003D4CE7: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_003D4CFA; /* je: equal / zero */

loc_003D4CF0: ;
    eax = ZX16(LO16(eax));
    esi = esi + eax * 2;
    ebp = ebp - eax;
    goto loc_003D4D34;

loc_003D4CFA: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    if (TEST_Z(edi, edi)) edi = ebp; /* cmove */
    ecx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_003D4D34; /* jle: less or equal (signed <=) */

loc_003D4D05: ;
    SET_LO16(eax, MEM16(esi));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_003D4D34; /* je: equal / zero */

loc_003D4D0D: ;
    if (CMP_NE(LO16(eax), 0x20)) goto loc_003D4D23; /* jne: not equal / not zero */

loc_003D4D13: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_003D4D23: ;
    esi = esi + 2;
    ebx++;
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_GE(ebx, ebp)) goto loc_003D4D3C; /* jge: greater or equal (signed >=) */

loc_003D4D2F: ;
    ecx++;
    if (CMP_L(ecx, edi)) goto loc_003D4D05; /* jl: less (signed <) */

loc_003D4D34: ;
    if (TEST_NZ(ebp, ebp)) goto loc_003D4CB0; /* jne: not equal / not zero */

loc_003D4D3C: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003D4D6B; /* jbe: below or equal (unsigned <=) */

loc_003D4D4B: ;
    xmm1 = MEMF(0x8076A4); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x2C); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0x20); /* subss */
    eax = MEM32(esp + 0x34);
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(eax) = xmm1; /* movss */

loc_003D4D6B: ;
    eax = MEM32(0x808708);
    if (TEST_Z(eax, eax)) goto loc_003D4DA6; /* je: equal / zero */

loc_003D4D74: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D4DA6; /* je: equal / zero */

loc_003D4D7D: ;
    eax = MEM32(0x74FA04);
    if (TEST_S(eax, eax)) goto loc_003D4DA6; /* jl: less (signed <) */

loc_003D4D86: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1450);
    esi = esi + 0x808710;
    ecx = 0x514;
    edi = 0x8072B0;
    eax--;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x74FA04) = eax;

loc_003D4DA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003D4DB0
 * Original: 0x003D4DB0 - 0x003D4DF3 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4DB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D4DB0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(LO16(esi), 0xA)) goto loc_003D4DC2; /* je: equal / zero */

loc_003D4DBC: ;
    if (CMP_NE(LO16(esi), 0xD)) goto loc_003D4DD0; /* jne: not equal / not zero */

loc_003D4DC2: ;
    SET_LO8(eax, MEM8(0x8086C8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003D4DD0; /* jne: not equal / not zero */

loc_003D4DCB: ;
    esi = 0x20;

loc_003D4DD0: ;
    SET_LO8(eax, MEM8(0x8086C7));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003D4DF3(); return; } /* jne: not equal / not zero */

loc_003D4DD9: ;
    xmm0 = MEMF(0x80767C); /* movss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(0x8076A0); /* mulss */
    g_seh_ebp = ebp; sub_003D4E5E(); return; /* tail jmp 0x003D4E5E */

}

/**
 * sub_003D4F60
 * Original: 0x003D4F60 - 0x003D512A (458 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D4F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D4F60: ;
    esp = esp - 0x20;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x808708);
    ebx = 0; /* xor self */
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    esi = eax;
    if (CMP_EQ(ebp, ebx)) goto loc_003D4F9A; /* je: equal / zero */

loc_003D4F8C: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D4F9A; /* je: equal / zero */

loc_003D4F95: ;
    PUSH32(esp, 0); sub_003D5540(); /* call 0x003D5540 */

loc_003D4F9A: ;
    edi = MEM32(esp + 0x34);
    if (CMP_EQ(edi, ebx)) goto loc_003D50EC; /* je: equal / zero */

loc_003D4FA6: ;
    goto loc_003D4FB0;

loc_003D4FA8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    goto loc_003D4FB0;

    /* nop */

loc_003D4FB0: ;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_003D50EC; /* je: equal / zero */

loc_003D4FBA: ;
    if (TEST_Z(ebp, ebp)) goto loc_003D4FE1; /* je: equal / zero */

loc_003D4FBE: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D4FE1; /* je: equal / zero */

loc_003D4FC7: ;
    edx = esp + 0x1C;
    edi = esp + 0x18;
    ecx = esi;
    ebx = ebp;
    PUSH32(esp, 0); sub_003D5AB0(); /* call 0x003D5AB0 */

loc_003D4FD8: ;
    ebx = ZX16(MEM16(esp + 0x1C));
    edi = MEM32(esp + 0x34);

loc_003D4FE1: ;
    ecx = MEM32(esp + 0x18);
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_003D507C; /* je: equal / zero */

loc_003D4FEE: ;
    xmm0 = MEMF(0x807650); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x807654); /* movss */
    eax = esi;
    edi = ebp;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(0x8086E4) = 1;
    PUSH32(esp, 0); sub_003D5B60(); /* call 0x003D5B60 */

loc_003D501D: ;
    eax = ZX16(MEM16(esp + 0x18));
    ecx = MEM32(esp + 0x34);
    xmm1 = MEMF(0x807654); /* movss */
    xmm0 = MEMF(0x807650); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x2C); /* subss */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    ecx = ecx - eax;
    /* comiss xmm1, MEMF(esp + 0x14) - sets EFLAGS */
    MEM32(0x8086E4) = 0;
    esi = esi + eax * 2;
    MEM32(esp + 0x34) = ecx;
    if ((xmm1 <= MEMF(esp + 0x14))) goto loc_003D5068; /* jbe: below or equal (unsigned <=) */

loc_003D5062: ;
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_003D5068: ;
    xmm0 = xmm0 - MEMF(0x807680); /* subss */
    edi = MEM32(esp + 0x34);
    MEMF(esp + 0x10) = xmm0; /* movss */
    goto loc_003D50DE;

loc_003D507C: ;
    if (TEST_Z(ebx, ebx)) goto loc_003D5084; /* je: equal / zero */

loc_003D5080: ;
    if (CMP_LE(ebx, edi)) goto loc_003D5086; /* jle: less or equal (signed <=) */

loc_003D5084: ;
    ebx = edi;

loc_003D5086: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    edx = esi;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D5130(); /* call 0x003D5130 */

loc_003D50A9: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    esp = esp + 0x10;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003D50D5; /* ja: above (unsigned >) */

loc_003D50CF: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_003D50D5: ;
    edi = edi - ebx;
    esi = esi + ebx * 2;
    MEM32(esp + 0x34) = edi;

loc_003D50DE: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebp = MEM32(0x808708);
    if (TEST_NZ(edi, edi)) goto loc_003D4FA8; /* jne: not equal / not zero */

loc_003D50EC: ;
    eax = MEM32(esp + 0x38);
    if (TEST_Z(eax, eax)) goto loc_003D50FE; /* je: equal / zero */

loc_003D50F4: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax) = xmm0; /* movss */

loc_003D50FE: ;
    eax = MEM32(esp + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_003D5110; /* je: equal / zero */

loc_003D5106: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax) = xmm0; /* movss */

loc_003D5110: ;
    POP32(esp, edi);
    POP32(esp, esi);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(ebp, ebp)) goto loc_003D5126; /* je: equal / zero */

loc_003D5118: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D5126; /* je: equal / zero */

loc_003D5121: ;
    PUSH32(esp, 0); sub_003D5580(); /* call 0x003D5580 */

loc_003D5126: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003D5130
 * Original: 0x003D5130 - 0x003D553E (1038 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D5130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D5130: ;
    esp = esp - 0x28;
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(0x808708);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    xmm6 = xmm5; /* movaps */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm6; /* movss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = ebp;
    if (CMP_EQ(ebx, ebp)) goto loc_003D5187; /* je: equal / zero */

loc_003D516C: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D5187; /* je: equal / zero */

loc_003D5175: ;
    SET_LO16(eax, MEM16(ebx + 4));
    SET_LO16(ecx, MEM16(ebx + 6));
    MEM16(esp + 0x20) = LO16(eax);
    MEM16(esp + 0x24) = LO16(ecx);

loc_003D5187: ;
    (void)0; /* cmp MEM32(esp + 0x38), ebp - flags set for next jcc */
    edi = MEM32(0x807674);
    if (CMP_EQ(MEM32(esp + 0x38), ebp)) goto loc_003D54CC; /* je: equal / zero */

loc_003D5197: ;
    xmm0 = MEMF(0x807680); /* movss */
    xmm1 = MEMF(0x80765C); /* movss */
    xmm2 = MEMF(0x8076B4); /* movss */
    xmm3 = MEMF(0x8076A0); /* movss */
    xmm4 = MEMF(0x80767C); /* movss */
    PUSH32(esp, esi);
    goto loc_003D51C8;

loc_003D51C2: ;
    ebx = MEM32(0x808708);

loc_003D51C8: ;
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(edx));
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_003D54BA; /* je: equal / zero */

loc_003D51D6: ;
    ecx = MEM32(esp + 0x48);
    if (TEST_Z(ecx, ecx)) goto loc_003D5201; /* je: equal / zero */

loc_003D51DE: ;
    SET_LO16(eax, MEM16(ecx));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_003D5201; /* je: equal / zero */

loc_003D51E6: ;
    if (CMP_EQ(LO16(eax), LO16(esi))) goto loc_003D51F9; /* je: equal / zero */

loc_003D51EB: ;
    SET_LO16(eax, MEM16(ecx + 2));
    ecx = ecx + 2;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_003D51E6; /* jne: not equal / not zero */

loc_003D51F7: ;
    goto loc_003D5201;

loc_003D51F9: ;
    if (TEST_NZ(ecx, ecx)) goto loc_003D54BA; /* jne: not equal / not zero */

loc_003D5201: ;
    if (CMP_EQ(LO16(esi), 0xA)) goto loc_003D520D; /* je: equal / zero */

loc_003D5207: ;
    if (CMP_NE(LO16(esi), 0xD)) goto loc_003D521D; /* jne: not equal / not zero */

loc_003D520D: ;
    SET_LO8(eax, MEM8(0x8086C8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003D521D; /* jne: not equal / not zero */

loc_003D5216: ;
    esi = 0x20;
    goto loc_003D527A;

loc_003D521D: ;
    if (CMP_NE(LO16(esi), 0xA)) goto loc_003D5274; /* jne: not equal / not zero */

loc_003D5223: ;
    /* comiss xmm6, MEMF(esp + 0x18) - sets EFLAGS */
    ebp = 1;
    if ((xmm6 <= MEMF(esp + 0x18))) goto loc_003D5235; /* jbe: below or equal (unsigned <=) */

loc_003D522F: ;
    MEMF(esp + 0x18) = xmm6; /* movss */

loc_003D5235: ;
    MEMF(esp + 0x10) = xmm5; /* movss */

loc_003D523B: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edx * 4 + 0x8072F8);
    ecx = MEM32(eax);
    xmm6 = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    xmm6 = xmm6 * MEMF(0x807688); /* mulss */
    xmm6 = xmm6 * MEMF(0x807660); /* mulss */
    xmm6 = xmm6 + MEMF(0x807684); /* addss */
    xmm6 = xmm6 + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    goto loc_003D549A;

loc_003D5274: ;
    if (CMP_EQ(LO16(esi), 0xD)) goto loc_003D523B; /* je: equal / zero */

loc_003D527A: ;
    SET_LO8(eax, MEM8(0x8086C7));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003D52AD; /* jne: not equal / not zero */

loc_003D5283: ;
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 + MEMF(0x648D14); /* addss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm7 = xmm7 + xmm6; /* addss */
    MEMF(esp + 0x10) = xmm7; /* movss */
    goto loc_003D549A;

loc_003D52AD: ;
    if (CMP_NE(LO16(esi), 0x20)) goto loc_003D52DC; /* jne: not equal / not zero */

loc_003D52B3: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edx * 4 + 0x8072F8);
    ecx = MEM32(eax);
    xmm6 = (float)(int32_t)MEM32(ecx + 4); /* cvtsi2ss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    goto loc_003D5455;

loc_003D52DC: ;
    if (CMP_NE(LO16(esi), 9)) goto loc_003D5313; /* jne: not equal / not zero */

loc_003D52E2: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edx * 4 + 0x8072F8);
    ecx = MEM32(eax);
    xmm6 = (float)(int32_t)MEM32(ecx + 4); /* cvtsi2ss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 * MEMF(0x8076A8); /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    goto loc_003D5455;

loc_003D5313: ;
    if (TEST_Z(ebx, ebx)) goto loc_003D5343; /* je: equal / zero */

loc_003D5317: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D5343; /* je: equal / zero */

loc_003D5320: ;
    if (CMP_EQ(LO16(esi), MEM16(esp + 0x24))) goto loc_003D532E; /* je: equal / zero */

loc_003D5327: ;
    if (CMP_NE(LO16(esi), MEM16(esp + 0x28))) goto loc_003D5343; /* jne: not equal / not zero */

loc_003D532E: ;
    eax = MEM32(esp + 0x3C);
    edx = edx + 2;
    eax--;
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(edx));
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x3C) = eax;

loc_003D5343: ;
    SET_LO8(eax, MEM8(0x8086C5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D5368; /* je: equal / zero */

loc_003D534C: ;
    if (CMP_B(LO16(esi), 0x61)) goto loc_003D5368; /* jb: below (unsigned <) */

loc_003D5352: ;
    if (CMP_A(LO16(esi), 0x7A)) goto loc_003D5368; /* ja: above (unsigned >) */

loc_003D5358: ;
    xmm6 = MEMF(0x8086BC); /* movss */
    esi = esi + 0xFFE0;
    goto loc_003D5370;

loc_003D5368: ;
    xmm6 = MEMF(0x648D14); /* movss */

loc_003D5370: ;
    MEMF(esp + 0x34) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003D4A50(); /* call 0x003D4A50 */

loc_003D537B: ;
    ebx = eax;
    if (CMP_GE(ebx & ebx, 0)) goto loc_003D5423; /* jge: greater or equal (signed >=) */

loc_003D5385: ;
    edx = esi;
    esi = esp + 0x30;
    edi = esp + 0x2C;
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003D4B70(); /* call 0x003D4B70 */

loc_003D53A0: ;
    if (TEST_Z(eax, eax)) goto loc_003D53CF; /* je: equal / zero */

loc_003D53A4: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003D53EE; /* ja: above (unsigned >) */

loc_003D53C7: ;
    MEMF(esp + 0x20) = xmm0; /* movss */
    goto loc_003D53EE;

loc_003D53CF: ;
    esi = MEM32(0x8086C0);
    PUSH32(esp, 0); sub_003D4A50(); /* call 0x003D4A50 */

loc_003D53DA: ;
    ebx = eax;
    if (CMP_GE(ebx & ebx, 0)) goto loc_003D53F2; /* jge: greater or equal (signed >=) */

loc_003D53E0: ;
    SET_LO16(esi, MEM16(0x8086C2));
    PUSH32(esp, 0); sub_003D4A50(); /* call 0x003D4A50 */

loc_003D53EC: ;
    ebx = eax;

loc_003D53EE: ;
    if (TEST_S(ebx, ebx)) goto loc_003D5469; /* jl: less (signed <) */

loc_003D53F2: ;
    xmm0 = MEMF(0x807680); /* movss */
    xmm1 = MEMF(0x80765C); /* movss */
    xmm2 = MEMF(0x8076B4); /* movss */
    xmm3 = MEMF(0x8076A0); /* movss */
    xmm4 = MEMF(0x80767C); /* movss */
    edi = MEM32(0x807674);
    xmm5 = 0.0f; /* xorps self = zero */

loc_003D5423: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edx * 4 + 0x8072F8);
    edx = MEM32(eax + 8);
    ecx = ebx + ebx * 8;
    eax = (uint32_t)(int32_t)SMEM16(edx + ecx * 2 + 0xC);
    xmm7 = xmm4; /* movaps */
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 * MEMF(esp + 0x34); /* mulss */

loc_003D5455: ;
    xmm6 = xmm6 + xmm0; /* addss */
    xmm6 = xmm6 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    ebp = 0; /* xor self */
    goto loc_003D549A;

loc_003D5469: ;
    xmm0 = MEMF(0x807680); /* movss */
    xmm1 = MEMF(0x80765C); /* movss */
    xmm2 = MEMF(0x8076B4); /* movss */
    xmm3 = MEMF(0x8076A0); /* movss */
    xmm4 = MEMF(0x80767C); /* movss */
    edi = MEM32(0x807674);
    xmm5 = 0.0f; /* xorps self = zero */

loc_003D549A: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x3C);
    xmm6 = MEMF(esp + 0x10); /* movss */
    edx = edx + 2;
    eax--;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x3C) = eax;
    if ((eax != 0)) goto loc_003D51C2; /* jne: not equal / not zero */

loc_003D54BA: ;
    /* comiss xmm6, MEMF(esp + 0x18) - sets EFLAGS */
    POP32(esp, esi);
    if ((xmm6 <= MEMF(esp + 0x18))) goto loc_003D54C8; /* jbe: below or equal (unsigned <=) */

loc_003D54C2: ;
    MEMF(esp + 0x14) = xmm6; /* movss */

loc_003D54C8: ;
    if (TEST_NZ(ebp, ebp)) goto loc_003D5500; /* jne: not equal / not zero */

loc_003D54CC: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx * 4 + 0x8072F8);
    eax = MEM32(edx);
    xmm0 = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x807688); /* mulss */
    xmm0 = xmm0 * MEMF(0x807660); /* mulss */
    xmm0 = xmm0 + MEMF(0x807684); /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_003D5500: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if ((xmm0 <= MEMF(esp + 0x10))) goto loc_003D5516; /* jbe: below or equal (unsigned <=) */

loc_003D5510: ;
    MEMF(esp + 4) = xmm0; /* movss */

loc_003D5516: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_003D5528; /* je: equal / zero */

loc_003D551E: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(eax) = xmm0; /* movss */

loc_003D5528: ;
    eax = MEM32(esp + 0x34);
    if (TEST_Z(eax, eax)) goto loc_003D553A; /* je: equal / zero */

loc_003D5530: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(eax) = xmm0; /* movss */

loc_003D553A: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_003D5540
 * Original: 0x003D5540 - 0x003D5574 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D5540(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D5540: ;
    PUSH32(esp, edi);
    edi = MEM32(0x74FA04);
    if (CMP_GE(edi, 8)) { sub_003D5574(); return; } /* jge: greater or equal (signed >=) */

loc_003D554C: ;
    edi++;
    MEM32(0x74FA04) = edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1450);
    PUSH32(esp, esi);
    edi = edi + 0x808710;
    ecx = 0x514;
    esi = 0x8072B0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D5580
 * Original: 0x003D5580 - 0x003D55B3 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D5580(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D5580: ;
    eax = MEM32(0x74FA04);
    if (TEST_S(eax, eax)) { sub_003D55B3(); return; } /* jl: less (signed <) */

loc_003D5589: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1450);
    PUSH32(esp, edi);
    esi = esi + 0x808710;
    ecx = 0x514;
    edi = 0x8072B0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax--;
    POP32(esp, edi);
    MEM32(0x74FA04) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D55C0
 * Original: 0x003D55C0 - 0x003D59C6 (1030 bytes, 336 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D55C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D55C0: ;
    esp = esp - 0x28;
    xmm0 = MEMF(0x8076A4); /* movss */
    xmm0 = xmm0 - MEMF(0x807650); /* subss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x808708);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    edx = 0; /* xor self */
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(ebp) = esi;
    eax = MEM32(edi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(edi) = edx;
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(ebx, edx)) goto loc_003D58BE; /* je: equal / zero */

loc_003D5606: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D58BE; /* je: equal / zero */

loc_003D5613: ;
    PUSH32(esp, 0); sub_003D5540(); /* call 0x003D5540 */

loc_003D5618: ;
    eax = MEM32(esp + 0x14);
    SET_LO16(ecx, MEM16(ebx + 4));
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;
    SET_LO16(edx, MEM16(ebx + 6));
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM16(esp + 0x2C) = LO16(ecx);
    MEM16(esp + 0x30) = LO16(edx);
    if (TEST_NZ(eax, eax)) goto loc_003D5661; /* jne: not equal / not zero */

loc_003D563C: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    PUSH32(esp, 0); sub_003D5580(); /* call 0x003D5580 */

loc_003D564B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_003D5655: ;
    ebx = MEM32(0x808708);
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_003D5661: ;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_003D563C; /* je: equal / zero */

loc_003D5667: ;
    if (TEST_Z(ebx, ebx)) goto loc_003D5688; /* je: equal / zero */

loc_003D566B: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D5688; /* je: equal / zero */

loc_003D5674: ;
    edx = esp + 0x20;
    edi = esp + 0x1C;
    ecx = esi;
    PUSH32(esp, 0); sub_003D5AB0(); /* call 0x003D5AB0 */

loc_003D5683: ;
    ebp = ZX16(MEM16(esp + 0x20));

loc_003D5688: ;
    ecx = MEM32(esp + 0x1C);
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_003D573B; /* je: equal / zero */

loc_003D5695: ;
    xmm0 = MEMF(0x807650); /* movss */
    eax = esi;
    edi = ebx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(0x8086E4) = 1;
    PUSH32(esp, 0); sub_003D5B60(); /* call 0x003D5B60 */

loc_003D56B6: ;
    xmm0 = MEMF(0x807650); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(0x8086E4) = 0;
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_003D57D4; /* ja: above (unsigned >) */

loc_003D56ED: ;
    eax = ZX16(MEM16(esp + 0x1C));
    ebx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ebx = ebx + eax;
    ecx = ecx - eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(ecx & ecx, 0)) goto loc_003D570A; /* jle: less or equal (signed <=) */

loc_003D5706: ;
    MEM32(esp + 0x14) = ecx;

loc_003D570A: ;
    (void)0; /* cmp MEM16(esi + eax * 2), 0 - flags set for next jcc */
    esi = esi + eax * 2;
    if (CMP_NE(MEM16(esi + eax * 2), 0)) goto loc_003D57C3; /* jne: not equal / not zero */

loc_003D5718: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x44);
    MEM32(ecx) = edx;
    MEM32(eax) = 0;
    PUSH32(esp, 0); sub_003D5580(); /* call 0x003D5580 */

loc_003D5731: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_003D573B: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    edi = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_003D4DB0(); /* call 0x003D4DB0 */

loc_003D5749: ;
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_G(eax, edi)) goto loc_003D57F9; /* jg: greater (signed >) */

loc_003D5755: ;
    eax = MEM32(esp + 0x14);
    if (CMP_GE(eax, ebp)) goto loc_003D5760; /* jge: greater or equal (signed >=) */

loc_003D575D: ;
    ebp = ZX16(LO16(eax));

loc_003D5760: ;
    ebx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, ebp);
    edi = esi;
    PUSH32(esp, 0); sub_003D61D0(); /* call 0x003D61D0 */

loc_003D576F: ;
    edx = MEM32(esp + 0x4C);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx) = eax;
    if (TEST_NZ(eax, eax)) goto loc_003D5871; /* jne: not equal / not zero */

loc_003D5780: ;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    edx = esi;
    PUSH32(esp, 0); sub_003D5130(); /* call 0x003D5130 */

loc_003D5793: ;
    eax = MEM32(esp + 0x24);
    eax = eax - ebp;
    esp = esp + 0x10;
    if (CMP_LE(eax & eax, 0)) goto loc_003D57A4; /* jle: less or equal (signed <=) */

loc_003D57A0: ;
    MEM32(esp + 0x14) = eax;

loc_003D57A4: ;
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    eax = eax + ebp;
    esi = esi + ebp * 2;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_003D57C3: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_003D5655; /* jne: not equal / not zero */

loc_003D57CF: ;
    goto loc_003D563C;

loc_003D57D4: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x3C);
    MEM32(ecx) = esi;
    MEM32(eax) = edx;
    PUSH32(esp, 0); sub_003D5580(); /* call 0x003D5580 */

loc_003D57EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_003D57F9: ;
    SET_LO16(eax, MEM16(esi));
    if (CMP_EQ(LO16(eax), MEM16(esp + 0x2C))) goto loc_003D584B; /* je: equal / zero */

loc_003D5803: ;
    if (CMP_EQ(LO16(eax), MEM16(esp + 0x30))) goto loc_003D584B; /* je: equal / zero */

loc_003D580A: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x40);
    MEM32(ecx) = esi;
    if (TEST_Z(eax, eax)) goto loc_003D582E; /* je: equal / zero */

loc_003D5818: ;
    edx = MEM32(esp + 0x3C);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(eax) = esi;
    PUSH32(esp, 0); sub_003D5580(); /* call 0x003D5580 */

loc_003D5829: ;
    goto loc_003D58E5;

loc_003D582E: ;
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x44);
    MEM32(ecx) = 1;
    edx = esi + 2;
    MEM32(eax) = edx;
    PUSH32(esp, 0); sub_003D5580(); /* call 0x003D5580 */

loc_003D5846: ;
    goto loc_003D58E5;

loc_003D584B: ;
    edx = MEM32(esp + 0x40);
    ecx = esi + 2;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x10);
    eax = esi + 4;
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x3C);
    edx = edx + 2;
    MEM32(eax) = edx;
    PUSH32(esp, 0); sub_003D5580(); /* call 0x003D5580 */

loc_003D586F: ;
    goto loc_003D58E5;

loc_003D5871: ;
    PUSH32(esp, 0); sub_003D5580(); /* call 0x003D5580 */

loc_003D5876: ;
    eax = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_003D588A; /* je: equal / zero */

loc_003D587C: ;
    ecx = MEM32(esp + 0x10);
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = ecx + eax + 1;
    goto loc_003D589C;

loc_003D588A: ;
    eax = MEM32(edx);
    ecx = MEM32(esp + 0x10);
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx = ecx + eax;
    MEM32(esp + 0x10) = ecx;
    eax = ecx;

loc_003D589C: ;
    ecx = MEM32(esp + 0x3C);
    MEM32(ecx) = eax;
    eax = MEM32(edx);
    if (CMP_NE(MEM16(eax), 0)) goto loc_003D59BC; /* jne: not equal / not zero */

loc_003D58AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_003D58BE: ;
    SET_LO16(eax, MEM16(esi));
    ebx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_003D4DB0(); /* call 0x003D4DB0 */

loc_003D58CA: ;
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_LE(eax, ebx)) goto loc_003D5931; /* jle: less or equal (signed <=) */

loc_003D58D2: ;
    ecx = MEM32(esp + 0x44);
    MEM32(ecx) = 0;
    MEM32(ebp) = esi;
    MEM32(edi) = 1;

loc_003D58E5: ;
    SET_LO16(esi, MEM16(esi));
    if (CMP_NE(LO16(esi), 0xA)) goto loc_003D58FB; /* jne: not equal / not zero */

loc_003D58EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 3;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_003D58FB: ;
    eax = esi;
    PUSH32(esp, 0); sub_003D4DB0(); /* call 0x003D4DB0 */

loc_003D5902: ;
    xmm0 = xmm0 + MEMF(0x807658); /* addss */
    xmm1 = MEMF(0x8076A4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003D5924; /* jb: below (unsigned <) */

loc_003D5917: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_003D5924: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_003D5931: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    eax = ebx;
    edi = esi;
    PUSH32(esp, 0); sub_003D61D0(); /* call 0x003D61D0 */

loc_003D5940: ;
    edx = MEM32(esp + 0x4C);
    MEM32(edx) = eax;
    ecx = MEM32(ebp);
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_003D5990; /* je: equal / zero */

loc_003D5950: ;
    if (TEST_NZ(eax, eax)) goto loc_003D596D; /* jne: not equal / not zero */

loc_003D5954: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_003D595A: ;
    ecx = MEM32(esp + 0x40);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_003D596D: ;
    eax = MEM32(esp + 0x3C);
    ecx = ecx - esi;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    ecx++;
    MEM32(eax) = ecx;
    ecx = MEM32(edx);
    if (CMP_NE(MEM16(ecx), 0)) goto loc_003D59BC; /* jne: not equal / not zero */

loc_003D5980: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_003D5990: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_003D59B6; /* je: equal / zero */

loc_003D5998: ;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(ecx) = eax;
    eax = MEM32(edx);
    if (CMP_NE(MEM16(eax), 0)) goto loc_003D59BC; /* jne: not equal / not zero */

loc_003D59A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_003D59B6: ;
    MEM32(ecx) = 1;

loc_003D59BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_003D59D0
 * Original: 0x003D59D0 - 0x003D5AAA (218 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D59D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D59D0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp MEM16(esi), LO16(ebx) - flags set for next jcc */
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(MEM16(esi), LO16(ebx))) goto loc_003D5AA4; /* je: equal / zero */

loc_003D59EA: ;
    xmm1 = MEMF(0x807654); /* movss */
    xmm0 = MEMF(0x807650); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(0x808708);
    PUSH32(esp, edi);

loc_003D5A02: ;
    if (CMP_AE(esi, MEM32(esp + 0x24))) goto loc_003D5AA2; /* jae: above or equal (unsigned >=) */

loc_003D5A0C: ;
    if (TEST_Z(ebp, ebp)) goto loc_003D5A2E; /* je: equal / zero */

loc_003D5A10: ;
    SET_LO8(eax, MEM8(0x8086D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003D5A2E; /* je: equal / zero */

loc_003D5A19: ;
    edx = esp + 0x14;
    edi = esp + 0x10;
    ecx = esi;
    ebx = ebp;
    PUSH32(esp, 0); sub_003D5AB0(); /* call 0x003D5AB0 */

loc_003D5A2A: ;
    ebx = MEM32(esp + 0x10);

loc_003D5A2E: ;
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_003D5A88; /* je: equal / zero */

loc_003D5A33: ;
    ecx = ebx;
    eax = esi;
    edi = ebp;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEM32(0x8086E4) = 1;
    PUSH32(esp, 0); sub_003D5B60(); /* call 0x003D5B60 */

loc_003D5A54: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    ebp = MEM32(0x808708);
    eax = ZX16(LO16(ebx));
    MEM32(0x8086E4) = 0;
    esi = esi + eax * 2;
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    goto loc_003D5A98;

loc_003D5A88: ;
    ecx = ZX16(MEM16(esp + 0x14));
    eax = MEM32(esp + 0x24);
    esi = esi + ecx * 2;
    if (CMP_A(esi, eax)) goto loc_003D5AA2; /* ja: above (unsigned >) */

loc_003D5A98: ;
    if (CMP_NE(MEM16(esi), 0)) goto loc_003D5A02; /* jne: not equal / not zero */

loc_003D5AA2: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_003D5AA4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003D5AB0
 * Original: 0x003D5AB0 - 0x003D5B4A (154 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D5AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D5AB0: ;
    MEM16(edi) = 0;
    MEM16(edx) = 0;
    SET_LO16(eax, MEM16(ecx));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_003D5B2F; /* je: equal / zero */

loc_003D5AC3: ;
    SET_LO16(esi, MEM16(ebx + 4));
    if (CMP_NE(LO16(eax), LO16(esi))) goto loc_003D5AEE; /* jne: not equal / not zero */

loc_003D5ACC: ;
    if (CMP_NE(MEM16(edi), 0)) goto loc_003D5B36; /* jne: not equal / not zero */

loc_003D5AD2: ;
    if (CMP_NE(MEM16(ecx + 2), LO16(esi))) goto loc_003D5AE1; /* jne: not equal / not zero */

loc_003D5AD8: ;
    MEM16(edx) = MEM16(edx) + 2;
    ecx = ecx + 4;
    goto loc_003D5B27;

loc_003D5AE1: ;
    if (CMP_NE(MEM16(edx), 0)) goto loc_003D5B2F; /* jne: not equal / not zero */

loc_003D5AE7: ;
    MEM16(edi) = 1;
    goto loc_003D5B24;

loc_003D5AEE: ;
    SET_LO16(esi, MEM16(ebx + 6));
    if (CMP_NE(LO16(eax), LO16(esi))) goto loc_003D5B0C; /* jne: not equal / not zero */

loc_003D5AF7: ;
    if (CMP_NE(MEM16(ecx + 2), LO16(esi))) goto loc_003D5B3A; /* jne: not equal / not zero */

loc_003D5AFD: ;
    if (CMP_NE(MEM16(edi), 0)) goto loc_003D5B36; /* jne: not equal / not zero */

loc_003D5B03: ;
    MEM16(edx) = MEM16(edx) + 2;
    ecx = ecx + 4;
    goto loc_003D5B27;

loc_003D5B0C: ;
    if (TEST_Z(LO16(eax), LO16(eax))) { sub_003D5B4A(); return; } /* je: equal / zero */

loc_003D5B11: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_003D5B21; /* je: equal / zero */

loc_003D5B1B: ;
    eax++;
    MEM16(edi) = LO16(eax);
    goto loc_003D5B24;

loc_003D5B21: ;
    MEM16(edx) = MEM16(edx) + 1;

loc_003D5B24: ;
    ecx = ecx + 2;

loc_003D5B27: ;
    SET_LO16(eax, MEM16(ecx));
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_003D5AC3; /* jne: not equal / not zero */

loc_003D5B2F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003D5B36: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003D5B3A: ;
    if (CMP_NE(MEM16(edx), 0)) goto loc_003D5B36; /* jne: not equal / not zero */

loc_003D5B40: ;
    MEM16(edi) = MEM16(edi) + 1;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D5B60
 * Original: 0x003D5B60 - 0x003D5CDC (380 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D5B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D5B60: ;
    esp = esp - 0x418;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO16(eax, MEM16(esi));
    if (CMP_NE(LO16(eax), MEM16(edi + 4))) { sub_003D5CDC(); return; } /* jne: not equal / not zero */

loc_003D5B76: ;
    SET_LO16(edx, MEM16(edi + 6));
    ecx = ZX16(LO16(ecx));
    if (CMP_NE(MEM16(esi + ecx * 2 + -2), LO16(edx))) { sub_003D5CDC(); return; } /* jne: not equal / not zero */

loc_003D5B88: ;
    SET_LO16(eax, MEM16(esi + 2));
    esi = esi + 2;
    (void)0; /* cmp LO16(eax), LO16(edx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_003D5CC1; /* je: equal / zero */

loc_003D5B9A: ;
    ebx = 0; /* xor self */
    /* nop */

loc_003D5BA0: ;
    if (CMP_NE(LO16(eax), 0x20)) goto loc_003D5BB8; /* jne: not equal / not zero */

loc_003D5BA6: ;
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_003D5BB8; /* je: equal / zero */

loc_003D5BAB: ;
    SET_LO16(eax, MEM16(esi + 2));
    esi = esi + 2;
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_003D5BA6; /* je: equal / zero */

loc_003D5BB8: ;
    SET_LO16(eax, MEM16(esi));
    ecx = 0; /* xor self */
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_003D5BEC; /* je: equal / zero */

loc_003D5BC3: ;
    if (CMP_EQ(LO16(eax), 0x3D)) goto loc_003D5BEC; /* je: equal / zero */

loc_003D5BC9: ;
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_003D5BEC; /* je: equal / zero */

loc_003D5BCE: ;
    if (CMP_AE(LO16(ecx), 0x104)) goto loc_003D5BEC; /* jae: above or equal (unsigned >=) */

loc_003D5BD5: ;
    ebp = ZX16(LO16(ecx));
    MEM16(esp + ebp * 2 + 0xC) = LO16(eax);
    esi = esi + 2;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    ecx++;
    if (CMP_NE(LO16(eax), 0x20)) goto loc_003D5BC3; /* jne: not equal / not zero */

loc_003D5BEC: ;
    eax = ZX16(LO16(ecx));
    MEM16(esp + eax * 2 + 0xC) = LO16(ebx);
    SET_LO16(eax, MEM16(esi));
    if (CMP_NE(LO16(eax), 0x20)) goto loc_003D5C12; /* jne: not equal / not zero */

loc_003D5BFD: ;
    /* nop */

loc_003D5C00: ;
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_003D5C12; /* je: equal / zero */

loc_003D5C05: ;
    SET_LO16(eax, MEM16(esi + 2));
    esi = esi + 2;
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_003D5C00; /* je: equal / zero */

loc_003D5C12: ;
    SET_LO16(eax, MEM16(esi));
    if (CMP_EQ(LO16(eax), 0x3D)) goto loc_003D5C31; /* je: equal / zero */

loc_003D5C1B: ;
    if (CMP_EQ(LO16(eax), 0x27)) goto loc_003D5CD0; /* je: equal / zero */

loc_003D5C25: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003D5C31: ;
    SET_LO16(eax, MEM16(esi + 2));
    esi = esi + 2;
    if (CMP_NE(LO16(eax), 0x20)) goto loc_003D5C54; /* jne: not equal / not zero */

loc_003D5C3E: ;
    SET_LO16(ecx, MEM16(edi + 6));

loc_003D5C42: ;
    if (CMP_EQ(LO16(eax), LO16(ecx))) goto loc_003D5C54; /* je: equal / zero */

loc_003D5C47: ;
    SET_LO16(eax, MEM16(esi + 2));
    esi = esi + 2;
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_003D5C42; /* je: equal / zero */

loc_003D5C54: ;
    if (CMP_NE(MEM16(esi), 0x27)) goto loc_003D5CD0; /* jne: not equal / not zero */

loc_003D5C5A: ;
    SET_LO16(eax, MEM16(esi + 2));
    esi = esi + 2;
    ecx = 0; /* xor self */
    if (CMP_EQ(LO16(eax), 0x27)) goto loc_003D5C8F; /* je: equal / zero */

loc_003D5C69: ;
    SET_LO16(edx, MEM16(edi + 6));
    /* nop */

loc_003D5C70: ;
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_003D5C8F; /* je: equal / zero */

loc_003D5C75: ;
    ebp = ZX16(LO16(ecx));
    esi = esi + 2;
    MEM16(esp + ebp * 2 + 0x218) = LO16(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    ecx++;
    if (CMP_NE(LO16(eax), 0x27)) goto loc_003D5C70; /* jne: not equal / not zero */

loc_003D5C8F: ;
    edx = MEM32(edi);
    ecx = ZX16(LO16(ecx));
    MEM16(esp + ecx * 2 + 0x218) = LO16(ebx);
    eax = esp + 0x218;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003D5CAD: ;
    SET_LO16(eax, MEM16(esi + 2));
    SET_LO16(edx, MEM16(edi + 6));
    esi = esi + 2;
    if (CMP_NE(LO16(eax), LO16(edx))) goto loc_003D5BA0; /* jne: not equal / not zero */

loc_003D5CC1: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x418;
    esp += 4; return; /* ret */

loc_003D5CD0: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x418;
    esp += 4; return; /* ret */

}

/**
 * sub_003D5CF0
 * Original: 0x003D5CF0 - 0x003D5CFC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D5CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D5CF0: ;
    if (TEST_NZ(MEM8(0x74FA0C), 1)) { sub_003D5CFC(); return; } /* jne: not equal / not zero */

loc_003D5CF9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003D5FE0
 * Original: 0x003D5FE0 - 0x003D5FEC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D5FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D5FE0: ;
    if (TEST_NZ(MEM8(0x74FA0C), 1)) { sub_003D5FEC(); return; } /* jne: not equal / not zero */

loc_003D5FE9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003D60B0
 * Original: 0x003D60B0 - 0x003D60E6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D60B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D60B0: ;
    if (CMP_B(LO16(eax), 0x1100)) goto loc_003D60BC; /* jb: below (unsigned <) */

loc_003D60B6: ;
    if (CMP_BE(LO16(eax), 0x11FF)) goto loc_003D60E0; /* jbe: below or equal (unsigned <=) */

loc_003D60BC: ;
    if (CMP_B(LO16(eax), 0x3000)) goto loc_003D60C8; /* jb: below (unsigned <) */

loc_003D60C2: ;
    if (CMP_BE(LO16(eax), 0xD7AF)) goto loc_003D60E0; /* jbe: below or equal (unsigned <=) */

loc_003D60C8: ;
    if (CMP_B(LO16(eax), 0xF900)) goto loc_003D60D4; /* jb: below (unsigned <) */

loc_003D60CE: ;
    if (CMP_BE(LO16(eax), 0xFAFF)) goto loc_003D60E0; /* jbe: below or equal (unsigned <=) */

loc_003D60D4: ;
    if (CMP_B(LO16(eax), 0xFF00)) { sub_003D60E6(); return; } /* jb: below (unsigned <) */

loc_003D60DA: ;
    if (CMP_A(LO16(eax), 0xFFDC)) { sub_003D60E6(); return; } /* ja: above (unsigned >) */

loc_003D60E0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003D60F0
 * Original: 0x003D60F0 - 0x003D6143 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D60F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D60F0: ;
    if (CMP_EQ(edx, eax)) { sub_003D6143(); return; } /* je: equal / zero */

loc_003D60F4: ;
    SET_LO16(ecx, MEM16(edx));
    if (CMP_EQ(LO16(ecx), 9)) goto loc_003D6128; /* je: equal / zero */

loc_003D60FD: ;
    if (CMP_EQ(LO16(ecx), 0xD)) goto loc_003D6128; /* je: equal / zero */

loc_003D6103: ;
    if (CMP_EQ(LO16(ecx), 0x20)) goto loc_003D6128; /* je: equal / zero */

loc_003D6109: ;
    if (CMP_EQ(LO16(ecx), 0x3000)) goto loc_003D6128; /* je: equal / zero */

loc_003D6110: ;
    eax = ecx;
    PUSH32(esp, 0); sub_003D60B0(); /* call 0x003D60B0 */

loc_003D6117: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003D6128; /* jne: not equal / not zero */

loc_003D611B: ;
    SET_LO16(eax, MEM16(edx + -2));
    PUSH32(esp, 0); sub_003D60B0(); /* call 0x003D60B0 */

loc_003D6124: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003D6143(); return; } /* je: equal / zero */

loc_003D6128: ;
    eax = ecx;
    PUSH32(esp, 0); sub_003D5CF0(); /* call 0x003D5CF0 */

loc_003D612F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003D6143(); return; } /* jne: not equal / not zero */

loc_003D6133: ;
    SET_LO16(eax, MEM16(edx + -2));
    PUSH32(esp, 0); sub_003D5FE0(); /* call 0x003D5FE0 */

loc_003D613C: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003D6143(); return; } /* jne: not equal / not zero */

loc_003D6140: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003D6150
 * Original: 0x003D6150 - 0x003D6170 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6150(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D6150: ;
    SET_LO16(eax, MEM16(ecx));
    if (CMP_EQ(LO16(eax), 9)) goto loc_003D616B; /* je: equal / zero */

loc_003D6159: ;
    if (CMP_EQ(LO16(eax), 0xD)) goto loc_003D616B; /* je: equal / zero */

loc_003D615F: ;
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_003D616B; /* je: equal / zero */

loc_003D6165: ;
    if (CMP_NE(LO16(eax), 0x3000)) { sub_003D6170(); return; } /* jne: not equal / not zero */

loc_003D616B: ;
    ecx = ecx + 2;
    goto loc_003D6150;

}

/**
 * sub_003D6190
 * Original: 0x003D6190 - 0x003D61C5 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6190(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_003D6190: ;
    if (CMP_B(ecx, edx)) goto loc_003D61BE; /* jb: below (unsigned <) */

loc_003D6194: ;
    SET_LO16(eax, MEM16(ecx));
    if (CMP_EQ(LO16(eax), 9)) goto loc_003D61B5; /* je: equal / zero */

loc_003D619D: ;
    if (CMP_EQ(LO16(eax), 0xD)) goto loc_003D61B5; /* je: equal / zero */

loc_003D61A3: ;
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_003D61B5; /* je: equal / zero */

loc_003D61A9: ;
    if (CMP_EQ(LO16(eax), 0x3000)) goto loc_003D61B5; /* je: equal / zero */

loc_003D61AF: ;
    if (CMP_NE(LO16(eax), 0xA)) goto loc_003D61BC; /* jne: not equal / not zero */

loc_003D61B5: ;
    ecx = ecx - 2;
    if (CMP_AE(ecx, edx)) goto loc_003D6194; /* jae: above or equal (unsigned >=) */

loc_003D61BC: ;
    (void)0; /* cmp ecx, edx - flags set for next jcc */

loc_003D61BE: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    eax = eax & ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003D61D0
 * Original: 0x003D61D0 - 0x003D63A7 (471 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D61D0(void)
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

loc_003D61D0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x84B514);
    if (TEST_Z(eax, eax)) { sub_003D63A7(); return; } /* je: equal / zero */

loc_003D61E3: ;
    if (TEST_Z(edi, edi)) { sub_003D63A7(); return; } /* je: equal / zero */

loc_003D61EB: ;
    if (CMP_EQ(MEM16(edi), 0)) { sub_003D63A7(); return; } /* je: equal / zero */

loc_003D61F5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edi;
    ebp = 0; /* xor self */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_003D6204: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    if (CMP_EQ(LO16(eax), 0xA)) goto loc_003D624D; /* je: equal / zero */

loc_003D620F: ;
    if (CMP_AE(ebp, MEM32(esp + 0x18))) goto loc_003D624D; /* jae: above or equal (unsigned >=) */

loc_003D6215: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B514), _icall_esp); /* indirect call */
    }

loc_003D621C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp = esp + 4;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(ebx & ebx, 0)) goto loc_003D6239; /* jge: greater or equal (signed >=) */

loc_003D6233: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003D6239: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003D624D; /* ja: above (unsigned >) */

loc_003D6243: ;
    esi = esi + 2;
    ebp++;
    if (CMP_NE(MEM16(esi), 0)) goto loc_003D6204; /* jne: not equal / not zero */

loc_003D624D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_003D6253: ;
    esp = esp + 4;
    if (CMP_EQ(eax, 1)) goto loc_003D6262; /* je: equal / zero */

loc_003D625B: ;
    if (CMP_NE(MEM32(esp + 0x18), 1)) goto loc_003D6282; /* jne: not equal / not zero */

loc_003D6262: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(ebx & ebx, 0)) goto loc_003D6274; /* jge: greater or equal (signed >=) */

loc_003D626E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003D6274: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003D630B; /* ja: above (unsigned >) */

loc_003D6282: ;
    if (CMP_NE(edi, esi)) goto loc_003D62A3; /* jne: not equal / not zero */

loc_003D6286: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_003D6190(); /* call 0x003D6190 */

loc_003D628F: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_003D6295: ;
    ecx = esi + 2;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_003D6150(); return; /* tail jmp 0x003D6150 */

loc_003D62A3: ;
    if (CMP_NE(MEM16(esi), 0xA)) goto loc_003D62AC; /* jne: not equal / not zero */

loc_003D62A9: ;
    esi = esi + 2;

loc_003D62AC: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(ebx & ebx, 0)) goto loc_003D62BE; /* jge: greater or equal (signed >=) */

loc_003D62B8: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003D62BE: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_003D6314; /* jb: below (unsigned <) */

loc_003D62CA: ;
    ebx = esi + -2;
    edx = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_003D6190(); /* call 0x003D6190 */

loc_003D62D6: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = eax;
    eax = esi + -2;
    if (CMP_B(eax, edi)) goto loc_003D62F2; /* jb: below (unsigned <) */

loc_003D62E3: ;
    if (CMP_NE(MEM16(ebx), 0xA)) goto loc_003D62F2; /* jne: not equal / not zero */

loc_003D62E9: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003D62F2: ;
    if (CMP_EQ(ebp, MEM32(esp + 0x18))) goto loc_003D630B; /* je: equal / zero */

loc_003D62F8: ;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_003D630B; /* je: equal / zero */

loc_003D62FE: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_003D6150(); return; /* tail jmp 0x003D6150 */

loc_003D630B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003D6314: ;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    ebx = esi;
    if (CMP_BE(esi, edi)) goto loc_003D637F; /* jbe: below or equal (unsigned <=) */

loc_003D631A: ;
    /* nop */

loc_003D6320: ;
    SET_LO16(eax, MEM16(esi));
    if (CMP_EQ(LO16(eax), 9)) goto loc_003D633B; /* je: equal / zero */

loc_003D6329: ;
    if (CMP_EQ(LO16(eax), 0xD)) goto loc_003D633B; /* je: equal / zero */

loc_003D632F: ;
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_003D633B; /* je: equal / zero */

loc_003D6335: ;
    if (CMP_NE(LO16(eax), 0x3000)) goto loc_003D6355; /* jne: not equal / not zero */

loc_003D633B: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_003D6190(); /* call 0x003D6190 */

loc_003D6344: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    if (TEST_Z(eax, eax)) goto loc_003D6295; /* je: equal / zero */

loc_003D6352: ;
    esi = eax + 2;

loc_003D6355: ;
    eax = edi;
    edx = esi;
    PUSH32(esp, 0); sub_003D60F0(); /* call 0x003D60F0 */

loc_003D635E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003D637B; /* jne: not equal / not zero */

loc_003D6362: ;
    esi = esi - 2;
    if (CMP_A(esi, edi)) goto loc_003D6320; /* ja: above (unsigned >) */

loc_003D6369: ;
    eax = MEM32(esp + 0x1C);
    edx = ebx + -2;
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003D637B: ;
    if (CMP_A(esi, edi)) goto loc_003D6391; /* ja: above (unsigned >) */

loc_003D637F: ;
    eax = MEM32(esp + 0x1C);
    edx = ebx + -2;
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003D6391: ;
    edx = MEM32(esp + 0x1C);
    ecx = esi + -2;
    MEM32(edx) = ecx;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_003D6150(); return; /* tail jmp 0x003D6150 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003D63C0
 * Original: 0x003D63C0 - 0x003D63E0 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D63C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003D63C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x812A18);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(edx);
    if (TEST_Z(eax, eax)) { sub_003D63E0(); return; } /* je: equal / zero */

loc_003D63D9: ;
    ebx = MEM32(edi + 0x14);
    ebx = ebx + eax;
    g_seh_ebp = ebp; sub_003D63E2(); return; /* tail jmp 0x003D63E2 */

}

/**
 * sub_003D6560
 * Original: 0x003D6560 - 0x003D6673 (275 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D6560: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x10);
    ebp = 0; /* xor self */
    if (CMP_A(eax, 0xE)) goto loc_003D666D; /* ja: above (unsigned >) */

loc_003D6575: ;
    eax = ZX8(MEM8(eax + 0x3D6694));
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x3D6674); /* switch: 8 entries, 8 targets */
    if (_jt == 0x003D6584u) goto loc_003D6584;
    if (_jt == 0x003D658Bu) goto loc_003D658B;
    if (_jt == 0x003D65C6u) goto loc_003D65C6;
    if (_jt == 0x003D65DBu) goto loc_003D65DB;
    if (_jt == 0x003D661Bu) goto loc_003D661B;
    if (_jt == 0x003D6632u) goto loc_003D6632;
    if (_jt == 0x003D6652u) goto loc_003D6652;
    if (_jt == 0x003D666Cu) goto loc_003D666C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003D6584: ;
    ecx = esi;
    PUSH32(esp, 0); sub_003D9C80(); /* call 0x003D9C80 */

loc_003D658B: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);

loc_003D6593: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_003D65A7; /* je: equal / zero */

loc_003D659A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D6560(); /* call 0x003D6560 */

loc_003D65A2: ;
    esp = esp + 0xC;

loc_003D65A5: ;
    ebp = eax;

loc_003D65A7: ;
    esi = MEM32(esi + 0xC);
    if (TEST_Z(esi, esi)) goto loc_003D666C; /* je: equal / zero */

loc_003D65B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003D6560(); /* call 0x003D6560 */

loc_003D65BA: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    ebp = ebp | eax;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003D65C6: ;
    ecx = esi;
    PUSH32(esp, 0); sub_003D9550(); /* call 0x003D9550 */

loc_003D65CD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_003D65A7; /* je: equal / zero */

loc_003D65D9: ;
    goto loc_003D6593;

loc_003D65DB: ;
    ecx = MEM32(0x812A10);
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    MEM32(ecx * 4 + 0x812990) = esi;
    MEM32(0x812A10) = MEM32(0x812A10) + 1;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_003D660A; /* je: equal / zero */

loc_003D65FD: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D6560(); /* call 0x003D6560 */

loc_003D6605: ;
    esp = esp + 0xC;
    ebp = eax;

loc_003D660A: ;
    eax = MEM32(0x812A10);
    if (CMP_LE(eax & eax, 0)) goto loc_003D65A7; /* jle: less or equal (signed <=) */

loc_003D6613: ;
    eax--;
    MEM32(0x812A10) = eax;
    goto loc_003D65A7;

loc_003D661B: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003D9CA0(); /* call 0x003D9CA0 */

loc_003D662A: ;
    esp = esp + 8;
    goto loc_003D65A5;

loc_003D6632: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(eax + 0x10), 4)) goto loc_003D666C; /* jne: not equal / not zero */

loc_003D663C: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003D9740(); /* call 0x003D9740 */

loc_003D6648: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    ebp = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003D6652: ;
    edi = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(edi + 0x10), 4)) goto loc_003D666C; /* jne: not equal / not zero */

loc_003D665C: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003DAF60(); /* call 0x003DAF60 */

loc_003D6667: ;
    esp = esp + 8;
    ebp = eax;

loc_003D666C: ;
    POP32(esp, edi);

loc_003D666D: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D66B0
 * Original: 0x003D66B0 - 0x003D67BA (266 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D66B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D66B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    /* nop */

loc_003D66C0: ;
    eax = MEM32(ebx + 0x10);
    if (CMP_A(eax, 0xD)) goto loc_003D67B6; /* ja: above (unsigned >) */

loc_003D66CC: ;
    eax = ZX8(MEM8(eax + 0x3D67DC));
    { uint32_t _jt = MEM32(eax * 4 + 0x3D67BC); /* switch: 8 entries, 8 targets */
    if (_jt == 0x003D66DAu) goto loc_003D66DA;
    if (_jt == 0x003D66FBu) goto loc_003D66FB;
    if (_jt == 0x003D6706u) goto loc_003D6706;
    if (_jt == 0x003D6725u) goto loc_003D6725;
    if (_jt == 0x003D673Fu) goto loc_003D673F;
    if (_jt == 0x003D6761u) goto loc_003D6761;
    if (_jt == 0x003D67A1u) goto loc_003D67A1;
    if (_jt == 0x003D67B6u) goto loc_003D67B6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003D66DA: ;
    eax = MEM32(0x812A18);
    if (TEST_Z(eax, eax)) goto loc_003D66F1; /* je: equal / zero */

loc_003D66E3: ;
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(eax + ecx);
    MEM32(0x812A14) = edx;
    goto loc_003D6706;

loc_003D66F1: ;
    eax = MEM32(ebx + 0x24);
    MEM32(0x812A14) = eax;
    goto loc_003D6706;

loc_003D66FB: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_003D9550(); /* call 0x003D9550 */

loc_003D6702: ;
    if (TEST_Z(eax, eax)) goto loc_003D6718; /* je: equal / zero */

loc_003D6706: ;
    eax = MEM32(ebx + 4);
    if (TEST_Z(eax, eax)) goto loc_003D6718; /* je: equal / zero */

loc_003D670D: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D66B0(); /* call 0x003D66B0 */

loc_003D6715: ;
    esp = esp + 0xC;

loc_003D6718: ;
    ebx = MEM32(ebx + 0xC);
    if (TEST_Z(ebx, ebx)) goto loc_003D67B6; /* je: equal / zero */

loc_003D6723: ;
    goto loc_003D66C0;

loc_003D6725: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003D6D40(); /* call 0x003D6D40 */

loc_003D672C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003D8E60(); /* call 0x003D8E60 */

loc_003D6733: ;
    ebx = MEM32(ebx + 0xC);
    esp = esp + 8;
    if (TEST_Z(ebx, ebx)) goto loc_003D67B6; /* je: equal / zero */

loc_003D673D: ;
    goto loc_003D66C0;

loc_003D673F: ;
    eax = 1;
    PUSH32(esp, 0); sub_003D6D40(); /* call 0x003D6D40 */

loc_003D6749: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003D8600(); /* call 0x003D8600 */

loc_003D6752: ;
    ebx = MEM32(ebx + 0xC);
    esp = esp + 0xC;
    if (TEST_Z(ebx, ebx)) goto loc_003D67B6; /* je: equal / zero */

loc_003D675C: ;
    goto loc_003D66C0;

loc_003D6761: ;
    ecx = MEM32(0x812A10);
    MEM32(ecx * 4 + 0x812990) = ebx;
    MEM32(0x812A10) = MEM32(0x812A10) + 1;
    eax = MEM32(ebx + 4);
    if (TEST_Z(eax, eax)) goto loc_003D6786; /* je: equal / zero */

loc_003D677B: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D66B0(); /* call 0x003D66B0 */

loc_003D6783: ;
    esp = esp + 0xC;

loc_003D6786: ;
    eax = MEM32(0x812A10);
    if (CMP_LE(eax & eax, 0)) goto loc_003D6795; /* jle: less or equal (signed <=) */

loc_003D678F: ;
    eax--;
    MEM32(0x812A10) = eax;

loc_003D6795: ;
    ebx = MEM32(ebx + 0xC);
    if (TEST_Z(ebx, ebx)) goto loc_003D67B6; /* je: equal / zero */

loc_003D679C: ;
    goto loc_003D66C0;

loc_003D67A1: ;
    eax = 1;
    PUSH32(esp, 0); sub_003D6D40(); /* call 0x003D6D40 */

loc_003D67AB: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003DAE10(); /* call 0x003DAE10 */

loc_003D67B3: ;
    esp = esp + 8;

loc_003D67B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D67F0
 * Original: 0x003D67F0 - 0x003D68A3 (179 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D67F0(void)
{
    uint32_t ebp;
    float xmm0;

loc_003D67F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    xmm0 = MEMF(eax + 0xC); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEMF(0x812A1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0x10;
    edi = 0x812A20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D66B0(); /* call 0x003D66B0 */

loc_003D6890: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D84E0(); /* call 0x003D84E0 */

loc_003D689A: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D68B0
 * Original: 0x003D68B0 - 0x003D68E1 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D68B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D68B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x10);
    eax = eax - 6;
    if ((eax == 0)) { sub_003D68E1(); return; } /* je: equal / zero */

loc_003D68BE: ;
    eax = eax - 5;
    if ((eax == 0)) goto loc_003D68D3; /* je: equal / zero */

loc_003D68C3: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_003D68CC; /* je: equal / zero */

loc_003D68C8: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_003D68EA(); return; /* tail jmp 0x003D68EA */

loc_003D68CC: ;
    esi = 4;
    g_seh_ebp = ebp; sub_003D68EA(); return; /* tail jmp 0x003D68EA */

loc_003D68D3: ;
    esi = MEM32(edi + 0x1C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF3);
    esi = esi + 0x13;
    g_seh_ebp = ebp; sub_003D68EA(); return; /* tail jmp 0x003D68EA */

}

/**
 * sub_003D6920
 * Original: 0x003D6920 - 0x003D697F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6920(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D6920: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    /* nop */

loc_003D6930: ;
    eax = MEM32(esi + 0x10);
    eax = eax - 6;
    if ((eax == 0)) goto loc_003D695B; /* je: equal / zero */

loc_003D6938: ;
    eax = eax - 5;
    if ((eax == 0)) goto loc_003D694E; /* je: equal / zero */

loc_003D693D: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_003D6964; /* jne: not equal / not zero */

loc_003D6942: ;
    eax = MEM32(esi + 0x14);
    MEM32(edi + eax) = 1;
    goto loc_003D6964;

loc_003D694E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_003D9C10(); /* call 0x003D9C10 */

loc_003D6956: ;
    esp = esp + 4;
    goto loc_003D6964;

loc_003D695B: ;
    ecx = edi;
    edx = esi;
    PUSH32(esp, 0); sub_003D7E70(); /* call 0x003D7E70 */

loc_003D6964: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_003D6975; /* je: equal / zero */

loc_003D696B: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D6920(); /* call 0x003D6920 */

loc_003D6972: ;
    esp = esp + 8;

loc_003D6975: ;
    esi = MEM32(esi + 0xC);
    if (TEST_NZ(esi, esi)) goto loc_003D6930; /* jne: not equal / not zero */

loc_003D697C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D6980
 * Original: 0x003D6980 - 0x003D69C2 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6980(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D6980: ;
    PUSH32(esp, ecx);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(0x812A18) = eax;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003D6996: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_003D69C2(); return; } /* je: equal / zero */

loc_003D699D: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) { sub_003D69C2(); return; } /* je: equal / zero */

loc_003D69A4: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) { sub_003D69C2(); return; } /* je: equal / zero */

loc_003D69AB: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(0x812A18);
    edx = MEM32(esp + 8);
    MEM32(ecx + eax) = edx;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D69D0
 * Original: 0x003D69D0 - 0x003D69FF (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D69D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D69D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x1C);
    if (TEST_Z(ecx, ecx)) goto loc_003D69F0; /* je: equal / zero */

loc_003D69DE: ;
    ecx = MEM32(eax + 0x24);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_003D69F0; /* jne: not equal / not zero */

loc_003D69E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D6A00(); /* call 0x003D6A00 */

loc_003D69ED: ;
    esp = esp + 8;

loc_003D69F0: ;
    edx = MEM32(esi);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D6A60(); /* call 0x003D6A60 */

loc_003D69FA: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D6A00
 * Original: 0x003D6A00 - 0x003D6A5C (92 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D6A00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_003D6A5A; /* je: equal / zero */

loc_003D6A09: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edi = edi;

loc_003D6A10: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, 7)) goto loc_003D6A22; /* je: equal / zero */

loc_003D6A18: ;
    if (CMP_EQ(eax, 0xA)) goto loc_003D6A22; /* je: equal / zero */

loc_003D6A1D: ;
    if (CMP_NE(eax, 9)) goto loc_003D6A41; /* jne: not equal / not zero */

loc_003D6A22: ;
    if (CMP_NE(eax, 9)) goto loc_003D6A35; /* jne: not equal / not zero */

loc_003D6A27: ;
    eax = MEM32(esi + 0xA0);
    ecx = MEM32(edi + 0x24);
    MEM32(ecx + eax * 4) = esi;
    goto loc_003D6A41;

loc_003D6A35: ;
    edx = MEM32(esi + 0xA0);
    eax = MEM32(edi + 0x20);
    MEM32(eax + edx * 4) = esi;

loc_003D6A41: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_003D6A52; /* je: equal / zero */

loc_003D6A48: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D6A00(); /* call 0x003D6A00 */

loc_003D6A4F: ;
    esp = esp + 8;

loc_003D6A52: ;
    esi = MEM32(esi + 0xC);
    if (TEST_NZ(esi, esi)) goto loc_003D6A10; /* jne: not equal / not zero */

loc_003D6A59: ;
    POP32(esp, edi);

loc_003D6A5A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D6A60
 * Original: 0x003D6A60 - 0x003D6A97 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D6A60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    eax = eax - 6;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi + 0x14) = edi;
    if ((eax == 0)) { sub_003D6A97(); return; } /* je: equal / zero */

loc_003D6A75: ;
    eax = eax - 5;
    if ((eax == 0)) goto loc_003D6A88; /* je: equal / zero */

loc_003D6A7A: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_003D6A83; /* je: equal / zero */

loc_003D6A7F: ;
    eax = edi;
    g_seh_ebp = ebp; sub_003D6AA0(); return; /* tail jmp 0x003D6AA0 */

loc_003D6A83: ;
    eax = edi + 4;
    g_seh_ebp = ebp; sub_003D6AA0(); return; /* tail jmp 0x003D6AA0 */

loc_003D6A88: ;
    eax = MEM32(esi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF3);
    eax = eax + edi + 0x13;
    g_seh_ebp = ebp; sub_003D6AA0(); return; /* tail jmp 0x003D6AA0 */

}

/**
 * sub_003D6AD0
 * Original: 0x003D6AD0 - 0x003D6B6E (158 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6AD0(void)
{
    float xmm0;

loc_003D6AD0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x812A58) = xmm0; /* movss */
    MEMF(0x812A54) = xmm0; /* movss */
    MEMF(0x812A50) = xmm0; /* movss */
    MEMF(0x812A4C) = xmm0; /* movss */
    MEMF(0x812A44) = xmm0; /* movss */
    MEMF(0x812A40) = xmm0; /* movss */
    MEMF(0x812A3C) = xmm0; /* movss */
    MEMF(0x812A38) = xmm0; /* movss */
    MEMF(0x812A30) = xmm0; /* movss */
    MEMF(0x812A2C) = xmm0; /* movss */
    MEMF(0x812A28) = xmm0; /* movss */
    MEMF(0x812A24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x812A10) = 0;
    MEMF(0x812A5C) = xmm0; /* movss */
    MEMF(0x812A48) = xmm0; /* movss */
    MEMF(0x812A34) = xmm0; /* movss */
    MEMF(0x812A20) = xmm0; /* movss */
    MEMF(0x812A1C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003D6B70
 * Original: 0x003D6B70 - 0x003D6B9C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003D6B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (TEST_Z(esi, esi)) { sub_003D6B9C(); return; } /* je: equal / zero */

loc_003D6B88: ;
    PUSH32(esp, edi);
    eax = esi + -1;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D6B70(); /* call 0x003D6B70 */

loc_003D6B97: ;
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_003D6C07(); return; /* tail jmp 0x003D6C07 */

}

/**
 * sub_003D6C90
 * Original: 0x003D6C90 - 0x003D6CF9 (105 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003D6C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x812A10);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(eax & eax, 0)) { sub_003D6CF9(); return; } /* jle: less or equal (signed <=) */

loc_003D6CB0: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax--;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003D6B70(); /* call 0x003D6B70 */

loc_003D6CBD: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_003D6CE7; /* jne: not equal / not zero */

loc_003D6CC8: ;
    if (TEST_Z(esi, esi)) goto loc_003D6CE7; /* je: equal / zero */

loc_003D6CCC: ;
    eax = MEM32(0x812A1C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_003D6CDD: ;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003D6CE7: ;
    PUSH32(esp, 0x812A20);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003D6CF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D6D40
 * Original: 0x003D6D40 - 0x003D6D6A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6D40(void)
{
    uint32_t ebp;

loc_003D6D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_003D6C90(); /* call 0x003D6C90 */

loc_003D6D54: ;
    ecx = 0x10;
    esi = esp + 0x10;
    edi = 0x819AD0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D6D70
 * Original: 0x003D6D70 - 0x003D702C (700 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D6D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D6D70: ;
    esp = esp - 0x30;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    eax = MEM32(ebp + 0x18);
    (void)0; /* cmp eax, MEM32(ebp + 0x1C) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    if (CMP_AE(eax, MEM32(ebp + 0x1C))) { sub_003D702C(); return; } /* jae: above or equal (unsigned >=) */

loc_003D6D8E: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x48);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x18;
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(esp + 0x4C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm3 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    eax = MEM32(esp + 0x30);
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x34) = xmm1; /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0; /* movss */
    edx = MEM32(esp + 0x38);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_003D6E6E: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) { sub_003D702C(); return; } /* jne: not equal / not zero */

loc_003D6E79: ;
    eax = esp + 0xC;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003D6E85: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    eax = ecx + edx + 0x40;
    ecx = eax;
    eax = MEM32(esp + 0x48);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    eax = ecx + edx + 0x4C;
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0x18);
    edx = eax + eax * 8;
    eax = MEM32(ebp + 0x14);
    edx = edx << 4;
    ecx = edx + eax + 0x58;
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    eax = MEM32(esi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    eax = eax + eax * 8;
    eax = eax << 4;
    edx = eax + ecx + 0x70;
    eax = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    ecx = MEM32(esp + 0x14);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x58);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003D6F72; /* je: equal / zero */

loc_003D6F18: ;
    edx = MEM32(esp + 0x54);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003D6F72; /* jbe: below or equal (unsigned <=) */

loc_003D6F50: ;
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    ecx = ecx + ecx * 8;
    ecx = ecx << 4;
    ecx = ecx + edx + 0x7C;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    goto loc_003D6F96;

loc_003D6F72: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    ecx = eax + eax * 8;
    ecx = ecx << 4;
    eax = ecx + edx + 0x7C;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;

loc_003D6F96: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    esi = MEM32(esp + 0x5C);
    edi = eax + eax * 8;
    edi = edi << 4;
    edi = edi + edx;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(esp + 0x60);
    edx = eax + eax * 8;
    eax = MEM32(ebp + 0x14);
    edx = edx << 4;
    MEM32(edx + eax + 0x88) = ecx;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(esp + 0x58);
    edx = eax + eax * 8;
    eax = MEM32(ebp + 0x14);
    edx = edx << 4;
    MEM32(edx + eax + 0x8C) = ecx;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(esp + 0x50);
    esi = MEM32(ecx);
    edx = eax + eax * 8;
    eax = MEM32(ebp + 0x14);
    edx = edx << 4;
    MEM32(edx + eax + 0x64) = esi;
    eax = MEM32(ebp + 0x18);
    esi = MEM32(ecx + 4);
    edx = eax + eax * 8;
    eax = MEM32(ebp + 0x14);
    edx = edx << 4;
    MEM32(edx + eax + 0x68) = esi;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ecx + 8);
    edx = eax + eax * 8;
    eax = MEM32(ebp + 0x14);
    edx = edx << 4;
    MEM32(edx + eax + 0x6C) = ecx;
    eax = MEM32(ebp + 0x18);
    POP32(esp, edi);
    eax++;
    MEM32(ebp + 0x18) = eax;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_003D7040
 * Original: 0x003D7040 - 0x003D708E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D7040: ;
    if (CMP_EQ(MEM16(edi + 0xA), 0)) goto loc_003D708D; /* je: equal / zero */

loc_003D7047: ;
    eax = MEM32(esi + 0x18);
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003D708D; /* jbe: below or equal (unsigned <=) */

loc_003D7050: ;
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    PUSH32(esp, ebp);
    goto loc_003D7060;

    /* nop */
    /* nop */

loc_003D7060: ;
    eax = MEM32(esi + 0x14);
    ebx = ZX16(MEM16(edi + 8));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(eax + edx + 0x88));
    ebp = MEM32(edi + 4);
    eax = eax + edx + 0x88;
    ebx = ebx + ebp;
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x18);
    ecx++;
    edx = edx + 0x90;
    if (CMP_B(ecx, eax)) goto loc_003D7060; /* jb: below (unsigned <) */

loc_003D708B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003D708D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003D7090
 * Original: 0x003D7090 - 0x003D7264 (468 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003D7090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    (void)0; /* cmp MEM32(0x74FA14), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(0x74FA14), 1)) goto loc_003D7253; /* jne: not equal / not zero */

loc_003D70AC: ;
    eax = MEM32(ebx + 0x18);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_BE(eax & eax, 0)) goto loc_003D7253; /* jbe: below or equal (unsigned <=) */

loc_003D70BD: ;
    eax = esp + 0x30;
    ecx = eax;
    edx = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x2C) = edx;
    goto loc_003D70D7;

loc_003D70D3: ;
    edi = MEM32(esp + 0x18);

loc_003D70D7: ;
    edi = edi + edi * 8;
    edi = edi << 4;
    esi = edi;
    MEM32(esp + 0x1C) = 3;

loc_003D70E7: ;
    eax = MEM32(ebx + 0x14);
    ecx = esi + eax + 0x40;
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003D70F8: ;
    eax = MEM32(esp + 0x1C);
    esi = esi + 0xC;
    eax--;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_003D70E7; /* jne: not equal / not zero */

loc_003D7106: ;
    eax = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_003D711C; /* jne: not equal / not zero */

loc_003D710E: ;
    ecx = MEM32(ebx + 0x14);
    eax = ebx + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003D711C: ;
    edx = MEM32(ebx + 0x14);
    edx = edx + edi;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
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
    eax = esp + 0x30;
    ecx = esp + 0x28;
    esi = eax;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_003D717C: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + edi + 0x70;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x28);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x24);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    ecx = MEM32(ebx + 0x14);
    eax = ecx + edi + 0x70;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003D71DB: ;
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0x14);
    eax = edx + edi + 0x7C;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x1C);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x2C);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    eax = MEM32(esi + 0x14);
    eax = eax + edi + 0x7C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003D723D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x18);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    ebx = esi;
    if (CMP_B(eax, ecx)) goto loc_003D70D3; /* jb: below (unsigned <) */

loc_003D7253: ;
    edi = MEM32(ebp + 0xC);
    esi = ebx;
    PUSH32(esp, 0); sub_003D7040(); /* call 0x003D7040 */

loc_003D725D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D7270
 * Original: 0x003D7270 - 0x003D7296 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7270(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D7270: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x819B24) = eax;
    if (CMP_NE(eax, 2)) { sub_003D7296(); return; } /* jne: not equal / not zero */

loc_003D727A: ;
    eax = 1;
    MEM32(0x84B548) = eax;
    MEM32(0x84B560) = eax;
    eax = 0; /* xor self */
    MEM32(0x84B544) = eax;
    MEM32(0x84B55C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003D72D0
 * Original: 0x003D72D0 - 0x003D7398 (200 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D72D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;

loc_003D72D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    ecx = 0x24;
    edi = esp + 0x50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ebx = 0; /* xor self */
    eax = esp + 0xB0;
    ecx = esp + 0xBC;
    edx = esp + 0xC8;
    MEM32(esp + 0x20) = ebx;
    MEMF(esp + 0x38) = xmm4; /* movss */
    MEMF(esp + 0x3C) = xmm4; /* movss */
    MEMF(esp + 0x40) = xmm4; /* movss */
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
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003D7365: ;
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x819B68) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x819B68))) { sub_003D7398(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D7371: ;
    xmm0 = MEMF(0x648D24); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x14) = 1;
    g_seh_ebp = ebp; sub_003D7482(); return; /* tail jmp 0x003D7482 */

}

/**
 * sub_003D7660
 * Original: 0x003D7660 - 0x003D7719 (185 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003D7660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD8;
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi + 0x74;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0xB0) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xB4) = edx;
    MEM32(esp + 0xB8) = ecx;
    ebx = 0; /* xor self */
    ecx = edi + 0x68;
    edx = esp + 0xBC;
    MEM32(esp + 0x1C) = ebx;
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003D7700: ;
    esp = esp + 8;
    xmm2 = xmm0; /* movaps */
    /* comiss xmm2, MEMF(edi + 0x64) - sets EFLAGS */
    if ((xmm2 <= MEMF(edi + 0x64))) { sub_003D7719(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D770C: ;
    MEM32(esp + 0x14) = 1;
    g_seh_ebp = ebp; sub_003D77C6(); return; /* tail jmp 0x003D77C6 */

}

/**
 * sub_003D7980
 * Original: 0x003D7980 - 0x003D7B68 (488 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4;

loc_003D7980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi + 0xB8;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0xB0) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xB4) = edx;
    ebx = edi + 0xAC;
    edx = esp + 0xBC;
    MEM32(esp + 0x20) = 0;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0xB8) = ecx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esi = esp + 0x38;
    edx = esp + 0x44;
    ecx = edi;
    PUSH32(esp, 0); sub_003DC330(); /* call 0x003DC330 */

loc_003D7A27: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_BE(eax, edi)) { sub_003D7B68(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D7A3B: ;
    MEM32(esp + 0x1C) = edi;
    /* nop */

loc_003D7A40: ;
    eax = MEM32(esi + 0x1C);
    xmm4 = MEMF(0x648D14); /* movss */
    ecx = eax + edi;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = ecx + 0x28;
    ecx = ecx + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    xmm3 = xmm4; /* movaps */
    PUSH32(esp, 0); sub_003E1060(); /* call 0x003E1060 */

loc_003D7A72: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_003D7B31; /* je: equal / zero */

loc_003D7A7D: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    eax = eax + edi;
    PUSH32(esp, 0xFF);
    ebx = eax + 0x28;
    eax = eax + 0x1C;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D88E0(); /* call 0x003D88E0 */

loc_003D7A9D: ;
    ecx = MEM32(esi + 0x1C);
    SET_LO8(edx, MEM8(ecx + edi + 4));
    eax = ecx + edi;
    ecx = ZX8(MEM8(eax + 5));
    MEM8(0x74FA28) = LO8(edx);
    edx = MEM32(esi + 0x1C);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(0x818E60) = ecx;
    ecx = MEM32(esi + 0x1C);
    ecx = ecx + edi;
    esp = esp + 0x10;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = edx + edi;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = ecx + 0x1C;
    ecx = ecx + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DC430);
    ecx = edx + 0xA0;
    ebx = MEM32(ecx);
    esp = esp - 0xC;
    edi = esp;
    MEM32(edi) = ebx;
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ecx;
    edi = MEM32(eax + 0x18);
    xmm4 = xmm4 / xmm0; /* divss */
    PUSH32(esp, esi);
    ecx = esp + 0x74;
    MEMF(0x818E64) = xmm4; /* movss */
    PUSH32(esp, 0); sub_003D7B80(); /* call 0x003D7B80 */

loc_003D7B1C: ;
    ecx = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x4C);
    edi = MEM32(esp + 0x40);
    esp = esp + 0x24;
    ecx = ecx | eax;
    MEM32(esp + 0x20) = ecx;

loc_003D7B31: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x18);
    eax++;
    edi = edi + 0x4C;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edi;
    if (CMP_B(eax, ecx)) goto loc_003D7A40; /* jb: below (unsigned <) */

loc_003D7B4C: ;
    eax = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) { sub_003D7B68(); return; } /* je: equal / zero */

loc_003D7B54: ;
    edx = MEM32(ebp + 0x10);
    MEM16(edx) = 1;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D7B80
 * Original: 0x003D7B80 - 0x003D7CC5 (325 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7B80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D7B80: ;
    MEM32(0x819B20) = eax;
    eax = ecx + 0x60;
    esp = esp - 0x30;
    MEM32(0x819B14) = edx;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    MEM32(0x819B18) = ebx;
    MEM32(0x819B1C) = edi;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = eax;
    esi = MEM32(edx);
    MEM32(0x819B38) = esi;
    esi = MEM32(edx + 4);
    MEM32(0x819B3C) = esi;
    edx = MEM32(edx + 8);
    MEM32(0x819B40) = edx;
    edx = ecx + 0x6C;
    ebp = MEM32(esp + 0x58);
    ecx = edx;
    esi = MEM32(ecx);
    MEM32(0x819B44) = esi;
    esi = MEM32(ecx + 4);
    MEM32(0x819B48) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(0x819B4C) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(0x819B2C) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(0x819B30) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(0x819B34) = ecx;
    ecx = MEM32(esp + 0x50);
    MEM32(0x819B10) = ecx;
    ecx = MEM32(esp + 0x5C);
    esi = 0; /* xor self */
    MEM32(0x819B7C) = ecx;
    ecx = MEM32(0x812A18);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(0x819B6C) = esi;
    MEM32(0x819B78) = esi;
    MEM32(0x819B70) = esi;
    MEM32(0x819B74) = esi;
    if (CMP_EQ(ecx, esi)) goto loc_003D7C46; /* je: equal / zero */

loc_003D7C39: ;
    ebx = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + ecx + 4);
    MEM32(0x819B28) = ecx;

loc_003D7C46: ;
    ecx = ebp;
    ebx = MEM32(ecx);
    MEM32(esp + 0x18) = ebx;
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(ecx);
    MEM32(esp + 0xC) = ebx;
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    eax = esp + 0x40;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0); sub_003DCA00(); /* call 0x003DCA00 */

loc_003D7C8D: ;
    eax = MEM32(esp + 0x70);
    esp = esp + 0x10;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(eax, esi)) { sub_003D7CC5(); return; } /* jne: not equal / not zero */

loc_003D7C9B: ;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003DBAC0(); /* call 0x003DBAC0 */

loc_003D7CB1: ;
    ecx = MEM32(0x74FA18);
    esp = esp + 0x14;
    ecx++;
    MEM32(0x74FA18) = ecx;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_003D7D00
 * Original: 0x003D7D00 - 0x003D7E42 (322 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D7D00: ;
    esp = esp - 0x30;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    edx = esp + 8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    MEM32(0x819B20) = eax;
    MEM32(0x819B18) = ebp;
    MEM32(0x819B14) = ecx;
    MEM32(0x819B1C) = ebx;
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(esp + 0x44);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x18;
    MEM32(esp + 0x40) = eax;
    ecx = MEM32(esp + 0x44);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(edi);
    MEM32(0x819B38) = ecx;
    edx = MEM32(edi + 4);
    MEM32(0x819B3C) = edx;
    eax = MEM32(edi + 8);
    MEM32(0x819B40) = eax;
    ecx = MEM32(esi);
    MEM32(0x819B2C) = ecx;
    edx = MEM32(esi + 4);
    ecx = MEM32(esp + 0x4C);
    MEM32(0x819B30) = edx;
    eax = MEM32(esi + 8);
    edx = MEM32(esp + 0x5C);
    MEM32(0x819B34) = eax;
    eax = MEM32(0x812A18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x819B10) = ecx;
    MEM32(0x819B7C) = edx;
    if (TEST_Z(eax, eax)) goto loc_003D7DE3; /* je: equal / zero */

loc_003D7DD6: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ecx + eax + 4);
    MEM32(0x819B28) = edx;

loc_003D7DE3: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x54);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x54);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    POP32(esp, ebp);
    if (TEST_NZ(eax, eax)) { sub_003D7E42(); return; } /* jne: not equal / not zero */

loc_003D7E1E: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003DD050(); /* call 0x003DD050 */

loc_003D7E2E: ;
    ecx = MEM32(0x74FA18);
    esp = esp + 0xC;
    ecx++;
    MEM32(0x74FA18) = ecx;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_003D7E70
 * Original: 0x003D7E70 - 0x003D7E88 (24 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7E70(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D7E70: ;
    eax = MEM32(edx + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x20);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    eax = eax + edi;
    if (CMP_EQ(esi, ecx)) { sub_003D7E88(); return; } /* je: equal / zero */

loc_003D7E82: ;
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D7EC0
 * Original: 0x003D7EC0 - 0x003D7EF5 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D7EC0: ;
    eax = MEM32(ecx + 0x20);
    edx = 0; /* xor self */
    if (TEST_NZ(eax, eax)) goto loc_003D7EF1; /* jne: not equal / not zero */

loc_003D7EC9: ;
    eax = MEM32(ecx + 0x18);
    if (CMP_BE(eax & eax, 0)) goto loc_003D7EF1; /* jbe: below or equal (unsigned <=) */

loc_003D7ED0: ;
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    ecx = ecx + 0x14;
    esi = eax;
    /* nop */

loc_003D7EE0: ;
    eax = MEM32(ecx);
    eax = eax << 2;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    if (CMP_A(eax, edx)) edx = eax; /* cmova */
    ecx = ecx + 0x4C;
    esi--;
    if ((esi != 0)) goto loc_003D7EE0; /* jne: not equal / not zero */

loc_003D7EF0: ;
    POP32(esp, esi);

loc_003D7EF1: ;
    eax = edx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003D7F00
 * Original: 0x003D7F00 - 0x003D811F (543 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D7F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003D7F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1C);
    edx = edi;
    edx = edx - ecx;
    MEM32(ebx + 0x1C) = edx;
    esi = eax;
    eax = MEM32(ebx + 0x14);
    edx = ecx + ecx * 8;
    edx = edx << 4;
    edx = edx + eax;
    MEM32(ebx + 0x14) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(ebx + 0x18) = 0;
    xmm2 = MEMF(esi); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 4);
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEM32(0x84B53C) = eax;
    eax = ZX16(MEM16(edx + 8));
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = ecx;
    MEM32(0x84B540) = eax;
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x18)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_003D811F(); return; } /* jnp: not parity */

loc_003D7FA9: ;
    eax = MEM32(ebp + 8);
    ecx = 0x10;
    edi = 0x812A20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm1 = MEMF(edx + 0xC); /* movss */
    MEMF(0x812A1C) = xmm1; /* movss */
    xmm1 = MEMF(eax); /* movss */
    edx = MEM32(edx);
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(esp + 0x88) = xmm1; /* movss */
    xmm1 = MEMF(eax); /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esp + 0x9C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = 3;
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEM32(esp + 0xB0) = 0;
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D6560(); /* call 0x003D6560 */

loc_003D80C7: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003D8101; /* je: equal / zero */

loc_003D80CE: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003D7090(); /* call 0x003D7090 */

loc_003D80D8: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    MEM32(ebx + 0x1C) = ecx;
    ecx = MEM32(ebx + 0x18);
    esp = esp + 8;
    ecx = ecx + eax;
    MEM32(ebx + 0x18) = ecx;
    eax = 1;
    MEM32(ebx + 0x14) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003D8101: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    MEM32(ebx + 0x1C) = ecx;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + eax;
    eax = 0; /* xor self */
    MEM32(ebx + 0x14) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D8140
 * Original: 0x003D8140 - 0x003D834D (525 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8140(void)
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

loc_003D8140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1C);
    edx = edi;
    edx = edx - ecx;
    MEM32(ebx + 0x1C) = edx;
    esi = eax;
    eax = MEM32(ebx + 0x14);
    edx = ecx + ecx * 8;
    edx = edx << 4;
    edx = edx + eax;
    MEM32(ebx + 0x14) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(ebx + 0x18) = 0;
    xmm2 = MEMF(esi); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 4);
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEM32(0x84B53C) = eax;
    eax = ZX16(MEM16(edx + 8));
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edi;
    MEM32(0x84B540) = eax;
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x18)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMD(0x648F30)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_003D834D(); return; } /* jnp: not parity */

loc_003D81E7: ;
    eax = MEM32(ebp + 8);
    ecx = 0x10;
    edi = 0x812A20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = MEMF(edx + 0xC); /* movss */
    MEMF(0x812A1C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    edx = MEM32(edx);
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(esp + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = 1;
    MEM32(esp + 0xAC) = 0;
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D6560(); /* call 0x003D6560 */

loc_003D82F2: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003D832B; /* je: equal / zero */

loc_003D82F9: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003D7090(); /* call 0x003D7090 */

loc_003D8303: ;
    eax = MEM32(ebx + 0x18);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    esp = esp + 8;
    eax = eax + edx;
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ebx + 0x1C) = eax;
    MEM32(ebx + 0x14) = ecx;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003D832B: ;
    eax = MEM32(ebx + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    eax = eax + edx;
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ebx + 0x1C) = eax;
    MEM32(ebx + 0x14) = ecx;
    eax = 0; /* xor self */
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
 * sub_003D8370
 * Original: 0x003D8370 - 0x003D83A5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8370(void)
{
    float xmm0;

loc_003D8370: ;
    esp = esp - 0xC;
    ecx = MEM32(esp + 0x14);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D8140(); /* call 0x003D8140 */

loc_003D83A1: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003D83B0
 * Original: 0x003D83B0 - 0x003D84DB (299 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D83B0(void)
{
    uint32_t ebp;
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;

loc_003D83B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xBC;
    xmm0 = MEMF(ecx); /* movss */
    edx = MEM32(ebp + 0x10);
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    ecx = MEM32(ebp + 8);
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    MEM32(esp + 0xBC) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    edi = esp + 0xA8;
    MEM32(esp + 0x28) = 3;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEM32(esp + 0x9C) = 0;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM32(esp + 0xB8) = 4;
    MEM32(esp + 0xC0) = ecx;
    PUSH32(esp, 0); sub_003DAF60(); /* call 0x003DAF60 */

loc_003D84CD: ;
    esp = esp + 8;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D84E0
 * Original: 0x003D84E0 - 0x003D85F4 (276 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D84E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003D84E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    eax = MEM32(0x84B528);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_003D85ED; /* jle: less or equal (signed <=) */

loc_003D8504: ;
    ebx = 0x812ABA;
    /* nop */

loc_003D8510: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = ebx + -90;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003D8522: ;
    SET_LO8(eax, MEM8(ebx));
    PUSH32(esp, 0x818E90);
    esi = edx;
    SET_LO8(edx, MEM8(ebx + -2));
    ecx = 0x10;
    edi = 0x819AD0;
    MEM8(esp + 0x18) = LO8(eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(ecx, MEM8(ebx + -1));
    PUSH32(esp, 0x819AD0);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0;
    MEM8(esp + 0x18) = LO8(ecx);
    MEM8(esp + 0x1C) = LO8(edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003D8560: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428CF0(); /* call 0x00428CF0 */

loc_003D856A: ;
    edx = ZX8(MEM8(esp + 0x14));
    eax = ZX8(MEM8(esp + 0x10));
    ecx = ZX8(MEM8(esp + 0x18));
    edx = edx | 0xFFFFFF00u;
    edx = edx << 8;
    edx = edx | eax;
    edx = edx << 8;
    esp = esp + 4;
    edx = edx | ecx;
    PUSH32(esp, 1);
    MEM32(0x83BF68) = edx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_003D8599: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D85A8: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D85BE: ;
    edi = ebx + -26;
    esi = ebx + -14;
    MEM32(0x549AE4) = 0;
    PUSH32(esp, 0); sub_00428FB0(); /* call 0x00428FB0 */

loc_003D85D3: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x84B528);
    eax++;
    ebx = ebx + 0x60;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_003D8510; /* jl: less (signed <) */

loc_003D85ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D8600
 * Original: 0x003D8600 - 0x003D88DA (730 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;

loc_003D8600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    edx = MEM32(0x74FA20);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    ecx = 1;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(edx, eax)) goto loc_003D8652; /* je: equal / zero */

loc_003D8629: ;
    if (CMP_EQ(MEM32(0x84B530), eax)) goto loc_003D863D; /* je: equal / zero */

loc_003D8631: ;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = 2;

loc_003D863D: ;
    if (CMP_EQ(MEM32(0x84B52C), eax)) goto loc_003D8652; /* je: equal / zero */

loc_003D8645: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = eax;
    eax++;
    MEM32(esp + 0x18) = eax;

loc_003D8652: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 0x818E90);
    PUSH32(esp, 0x819AD0);
    eax = esp + 0x38;
    ecx = 0x10;
    edi = 0x818E90;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003D8675: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428CF0(); /* call 0x00428CF0 */

loc_003D867F: ;
    edi = MEM32(0x74FA20);
    ebx = MEM32(ebp + 8);
    esp = esp + 4;
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = ebx;
    edx = edx & 0xEFFFFFF;
    edi = edi & 0x1000000;
    edi = edi | edx;
    esi = edi;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0); sub_003DB9B0(); /* call 0x003DB9B0 */

loc_003D86AA: ;
    if (TEST_NZ(eax, eax)) goto loc_003D88D3; /* jne: not equal / not zero */

loc_003D86B2: ;
    edx = MEM32(ebx + 0x18);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = 0x200;
    if (CMP_BE(edx & edx, 0)) goto loc_003D86D1; /* jbe: below or equal (unsigned <=) */

loc_003D86BE: ;
    ecx = MEM32(ebx + 0x1C);
    ecx = ecx + 0x14;

loc_003D86C4: ;
    esi = MEM32(ecx);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x58);
    eax = eax + esi;
    ecx = ecx + 0x4C;
    edx--;
    if ((edx != 0)) goto loc_003D86C4; /* jne: not equal / not zero */

loc_003D86D1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    eax = eax << 1;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003DB9F0(); /* call 0x003DB9F0 */

loc_003D86DE: ;
    ecx = MEM32(esp + 0x1C);
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x24) = eax;
    if (CMP_BE(ecx & ecx, 0)) goto loc_003D88BB; /* jbe: below or equal (unsigned <=) */

loc_003D86F9: ;
    /* nop */

loc_003D8700: ;
    ecx = MEM32(0x74FA20);
    if (TEST_Z(ecx, ecx)) goto loc_003D8771; /* je: equal / zero */

loc_003D870A: ;
    if (TEST_NZ(eax, eax)) goto loc_003D871A; /* jne: not equal / not zero */

loc_003D870E: ;
    MEM32(0x83BF68) = 0xFFFFFFFFu;
    goto loc_003D872A;

loc_003D871A: ;
    if (CMP_NE(eax, MEM32(esp + 0x1C))) goto loc_003D8762; /* jne: not equal / not zero */

loc_003D8720: ;
    MEM32(0x83BF68) = 0xFF00FFFFu;

loc_003D872A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_003D8731: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D8740: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D8756: ;
    MEM32(0x549AE4) = 0;
    goto loc_003D8784;

loc_003D8762: ;
    if (CMP_NE(eax, MEM32(esp + 0x20))) goto loc_003D8784; /* jne: not equal / not zero */

loc_003D8768: ;
    PUSH32(esp, 0xFF);
    SET_LO8(eax, LO8(eax) | 0xFF);
    goto loc_003D8775;

loc_003D8771: ;
    PUSH32(esp, 0);
    SET_LO8(eax, 0x32);

loc_003D8775: ;
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_00428DE0(); /* call 0x00428DE0 */

loc_003D8781: ;
    esp = esp + 8;

loc_003D8784: ;
    eax = MEM32(ebx + 0x18);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003D889E; /* jbe: below or equal (unsigned <=) */

loc_003D8791: ;
    esi = 0; /* xor self */

loc_003D8793: ;
    edx = MEM32(ebx + 0x1C);
    SET_LO8(eax, MEM8(edx + esi + 4));
    ecx = ZX8(MEM8(edx + esi + 5));
    xmm1 = MEMF(0x648D14); /* movss */
    edx = edx + esi;
    MEM8(0x74FA28) = LO8(eax);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(0x818E60) = ecx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x74FA20);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(0x818E64) = xmm1; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003D886D; /* je: equal / zero */

loc_003D87D8: ;
    eax = MEM32(esp + 0x24);
    if (TEST_NZ(eax, eax)) goto loc_003D8804; /* jne: not equal / not zero */

loc_003D87E0: ;
    eax = ZX16(MEM16(edx + 8));
    ecx = ZX16(MEM16(edx + 0xA));
    ecx = ecx + eax;
    eax = ZX16(MEM16(edx + 6));
    ecx = ecx + eax;
    eax = MEM32(edx + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, 0); sub_003DB4F0(); /* call 0x003DB4F0 */

loc_003D87FF: ;
    goto loc_003D888C;

loc_003D8804: ;
    if (CMP_NE(eax, MEM32(esp + 0x1C))) goto loc_003D8838; /* jne: not equal / not zero */

loc_003D880A: ;
    eax = ZX16(MEM16(edx + 0xA));
    ecx = ZX16(MEM16(edx + 6));
    ebx = ecx + eax;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(edx + 8));
    ebx = ebx + ecx;
    ecx = MEM32(edx + 0x10);
    ebx = ebx + eax;
    eax = MEM32(edx);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, 0); sub_003DB550(); /* call 0x003DB550 */

loc_003D8830: ;
    ebx = MEM32(ebp + 8);
    esp = esp + 0xC;
    goto loc_003D888F;

loc_003D8838: ;
    if (CMP_NE(eax, MEM32(esp + 0x20))) goto loc_003D888F; /* jne: not equal / not zero */

loc_003D883E: ;
    eax = ZX16(MEM16(edx + 0xA));
    ecx = ZX16(MEM16(edx + 6));
    ebx = ecx + eax;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(edx + 8));
    ebx = ebx + ecx;
    ecx = MEM32(edx);
    ebx = ebx + eax;
    eax = MEM32(edx + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, 0); sub_003DB6C0(); /* call 0x003DB6C0 */

loc_003D8865: ;
    ebx = MEM32(ebp + 8);
    esp = esp + 0x10;
    goto loc_003D888F;

loc_003D886D: ;
    ecx = ZX16(MEM16(edx + 8));
    eax = ZX16(MEM16(edx + 0xA));
    eax = eax + ecx;
    ecx = ZX16(MEM16(edx + 6));
    eax = eax + ecx;
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, 0); sub_003DB950(); /* call 0x003DB950 */

loc_003D888C: ;
    esp = esp + 8;

loc_003D888F: ;
    eax = MEM32(ebx + 0x18);
    edi++;
    esi = esi + 0x4C;
    if (CMP_B(edi, eax)) goto loc_003D8793; /* jb: below (unsigned <) */

loc_003D889E: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x18);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_B(eax, ecx)) goto loc_003D8700; /* jb: below (unsigned <) */

loc_003D88B3: ;
    edi = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x2C);

loc_003D88BB: ;
    if (TEST_Z(esi, esi)) goto loc_003D88D3; /* je: equal / zero */

loc_003D88BF: ;
    PUSH32(esp, 0); sub_0053B1C0(); /* call 0x0053B1C0 */

loc_003D88C4: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xC);
    MEM32(esi + 8) = edx;
    esi = edi;
    PUSH32(esp, 0); sub_003DB9B0(); /* call 0x003DB9B0 */

loc_003D88D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D88E0
 * Original: 0x003D88E0 - 0x003D8A06 (294 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D88E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D88E0: ;
    eax = MEM32(0x74FA1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_003D8A04; /* je: equal / zero */

loc_003D88F2: ;
    edx = MEM32(0x84B528);
    if (CMP_GE(edx, 0x100)) goto loc_003D8A04; /* jge: greater or equal (signed >=) */

loc_003D8904: ;
    eax = edx + edx * 2;
    eax = eax << 5;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_003D8926; /* je: equal / zero */

loc_003D890F: ;
    PUSH32(esp, edi);
    esi = ecx + 0x20;
    edi = eax + 0x812A60;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    goto loc_003D89B1;

loc_003D8926: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x812A98) = xmm0; /* movss */
    MEMF(eax + 0x812A94) = xmm0; /* movss */
    MEMF(eax + 0x812A90) = xmm0; /* movss */
    MEMF(eax + 0x812A8C) = xmm0; /* movss */
    MEMF(eax + 0x812A84) = xmm0; /* movss */
    MEMF(eax + 0x812A80) = xmm0; /* movss */
    MEMF(eax + 0x812A7C) = xmm0; /* movss */
    MEMF(eax + 0x812A78) = xmm0; /* movss */
    MEMF(eax + 0x812A70) = xmm0; /* movss */
    MEMF(eax + 0x812A6C) = xmm0; /* movss */
    MEMF(eax + 0x812A68) = xmm0; /* movss */
    MEMF(eax + 0x812A64) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x812A9C) = xmm0; /* movss */
    MEMF(eax + 0x812A88) = xmm0; /* movss */
    MEMF(eax + 0x812A74) = xmm0; /* movss */
    MEMF(eax + 0x812A60) = xmm0; /* movss */

loc_003D89B1: ;
    esi = MEM32(ebp);
    ecx = eax + 0x812AAC;
    MEM32(ecx) = esi;
    esi = MEM32(ebp + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(ebp + 8);
    MEM32(ecx + 8) = esi;
    esi = MEM32(ebx);
    ecx = eax + 0x812AA0;
    MEM32(ecx) = esi;
    esi = MEM32(ebx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(ebx + 8);
    MEM32(ecx + 8) = esi;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax + 0x812AB8) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(eax + 0x812AB9) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x18));
    edx++;
    MEM8(eax + 0x812ABA) = LO8(ecx);
    MEM32(0x84B528) = edx;
    POP32(esp, esi);

loc_003D8A04: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D8A10
 * Original: 0x003D8A10 - 0x003D8B23 (275 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8A10(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_003D8A10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x60;
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x10); /* mulss */
    xmm1 = MEMF(esi + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x14); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm1 * MEMF(esi); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x10); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x24); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x14); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x10); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x28); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x14); /* mulss */
    eax = esp + 0x14;
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    ecx = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = ecx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x24); /* subss */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    eax = esp + 0x2C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_003D8B12: ;
    edx = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003D8B1F: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D8B30
 * Original: 0x003D8B30 - 0x003D8BBF (143 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8B30(void)
{
    uint32_t ebp;
    float xmm0, xmm6;

loc_003D8B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    ecx = MEM32(0x812A14);
    xmm6 = MEMF(0x812A1C); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + eax * 4;
    eax = MEM32(edi);
    ecx = MEM32(0x812A1C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    esi = eax + 0x60;
    PUSH32(esp, ecx);
    eax = eax + 0xBC;
    PUSH32(esp, 0); sub_003D8A10(); /* call 0x003D8A10 */

loc_003D8B67: ;
    edx = MEM32(edi);
    xmm0 = MEMF(edx + 0xC8); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    eax = MEM32(edi);
    xmm0 = MEMF(eax + 0xCC); /* movss */
    esp = esp + 8;
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    ecx = MEM32(edi);
    xmm0 = MEMF(ecx + 0xD0); /* movss */
    ecx = MEM32(ebp + 8);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    xmm0 = xmm0 * xmm6; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003D8BB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D8BC0
 * Original: 0x003D8BC0 - 0x003D8D01 (321 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003D8BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x78;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(ebp + 8);
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    eax = MEM32(0x812A14);
    xmm0 = MEMF(0x812A1C); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_003D8CEB; /* je: equal / zero */

loc_003D8C04: ;
    ebx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_003D8CFB; /* jbe: below or equal (unsigned <=) */

loc_003D8C0E: ;
    ecx = esp + 0x34;
    edx = eax + 8;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x14) = edx;
    goto loc_003D8C30;

loc_003D8C25: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003D8C30;

    /* nop */

loc_003D8C30: ;
    eax = ZX16(MEM16(eax + ebx * 2));
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    esi = eax + 0x60;
    PUSH32(esp, ecx);
    eax = eax + 0xBC;
    PUSH32(esp, 0); sub_003D8A10(); /* call 0x003D8A10 */

loc_003D8C52: ;
    esp = esp + 8;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(ebp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003D8C8D: ;
    eax = MEM32(esp + 0x14);
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    edx = MEM32(ebp + 0xC);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi); /* addss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    eax = eax + 4;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm1; /* movss */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edx + 0x18);
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_003D8C25; /* jb: below (unsigned <) */

loc_003D8CE5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003D8CEB: ;
    eax = MEM32(edx);
    MEM32(edi) = eax;
    ecx = MEM32(edx + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;

loc_003D8CFB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D8D10
 * Original: 0x003D8D10 - 0x003D8E3B (299 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D8D10: ;
    esp = esp - 0x68;
    ecx = MEM32(esp + 0x74);
    edx = MEM32(ecx + 0xC);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x80);
    MEM16(esp + 0x2C) = LO16(ebx);
    MEM16(esp + 0x2E) = 1;
    MEM16(esp + 0x30) = 2;
    MEM32(esp + 0xC) = eax;
    MEM32(0x818E60) = ebx;
    MEM8(0x74FA28) = 4;
    MEMF(0x818E64) = xmm0; /* movss */
    MEM32(esp + 0x10) = ebx;
    if (CMP_BE(edx, ebx)) goto loc_003D8E35; /* jbe: below or equal (unsigned <=) */

loc_003D8D67: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    goto loc_003D8D71;

loc_003D8D6F: ;
    ebx = 0; /* xor self */

loc_003D8D71: ;
    edx = MEM32(esp + 0x84);
    esi = MEM32(edx + 8);
    edi = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(esi + edi + 6));
    esi = esi + edi;
    MEM16(esp + 0x3A) = LO16(eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x24);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x20);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x28);
    eax = eax + edx;
    edx = MEM32(ebp + 0x1C);
    eax = eax + ecx;
    edi = esp + 0x34;
    PUSH32(esp, 0); sub_003D91B0(); /* call 0x003D91B0 */

loc_003D8DB3: ;
    esp = esp + 0xC;
    edi = esp + 0x54;
    esi = esi + 8;
    /* nop */

loc_003D8DC0: ;
    ecx = MEM32(esp + ebx * 4 + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D8BC0(); /* call 0x003D8BC0 */

loc_003D8DCB: ;
    esp = esp + 8;
    ebx++;
    edi = edi + 0xC;
    esi = esi + 0x1C;
    if (CMP_B(ebx, 3)) goto loc_003D8DC0; /* jb: below (unsigned <) */

loc_003D8DDA: ;
    edx = MEM32(esp + 0x8C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x80);
    PUSH32(esp, 0xC);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x98), _icall_esp); /* indirect call */
    }

loc_003D8DFE: ;
    ebx = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x9C);
    edx = MEM32(ecx + 0xC);
    ebx = ebx | eax;
    eax = MEM32(esp + 0x30);
    esp = esp + 0x18;
    eax++;
    esi = esi + 0x5C;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_B(eax, edx)) goto loc_003D8D6F; /* jb: below (unsigned <) */

loc_003D8E31: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);

loc_003D8E35: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_003D8E40
 * Original: 0x003D8E40 - 0x003D8E52 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8E40(void)
{

loc_003D8E40: ;
    eax = MEM32(esp + 0x10);
    edx = eax + 0x18;
    ecx = eax + 0xC;
    PUSH32(esp, 0); sub_00428EB0(); /* call 0x00428EB0 */

loc_003D8E4F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003D8E60
 * Original: 0x003D8E60 - 0x003D8F8D (301 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003D8E60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x818E90);
    PUSH32(esp, 0x819AD0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003D8E80: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428CF0(); /* call 0x00428CF0 */

loc_003D8E8A: ;
    esi = MEM32(ebp + 0xC);
    esp = esp + 4;
    ecx = 0x10;
    edi = 0x818E90;
    PUSH32(esp, 1);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x83BF68) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_003D8EAD: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D8EBC: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003D8ED2: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    MEM32(0x549AE4) = ebx;
    eax = MEM32(esi + 0x30);
    edi = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_003D8F09; /* jbe: below or equal (unsigned <=) */

loc_003D8EE6: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edx = edx + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D8E40);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003D8D10(); /* call 0x003D8D10 */

loc_003D8EFB: ;
    eax = MEM32(esi + 0x30);
    esp = esp + 0x14;
    edi++;
    ebx = ebx + 0x10;
    if (CMP_B(edi, eax)) goto loc_003D8EE6; /* jb: below (unsigned <) */

loc_003D8F09: ;
    eax = MEM32(0x84B534);
    if (TEST_Z(eax, eax)) goto loc_003D8F86; /* je: equal / zero */

loc_003D8F12: ;
    ecx = MEM32(esi + 0x30);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(ecx & ecx, 0)) goto loc_003D8F86; /* jbe: below or equal (unsigned <=) */

loc_003D8F1F: ;
    edi = 0; /* xor self */

loc_003D8F21: ;
    ecx = MEM32(eax * 4 + 0x818A60);
    if (TEST_Z(ecx, ecx)) goto loc_003D8F77; /* je: equal / zero */

loc_003D8F2C: ;
    ecx = MEM32(esi + 0x18);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(edi + ecx);
    PUSH32(esp, 0); sub_003D8B30(); /* call 0x003D8B30 */

loc_003D8F3C: ;
    edx = MEM32(esi + 0x18);
    xmm0 = MEMF(edi + edx + 4); /* movss */
    xmm0 = xmm0 * MEMF(0x812A1C); /* mulss */
    esp = esp + 4;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    eax = esp + 0x28;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003DB430(); /* call 0x003DB430 */

loc_003D8F70: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 0x14;

loc_003D8F77: ;
    ecx = MEM32(esi + 0x30);
    eax++;
    edi = edi + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(eax, ecx)) goto loc_003D8F21; /* jb: below (unsigned <) */

loc_003D8F86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003D8F90
 * Original: 0x003D8F90 - 0x003D9080 (240 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D8F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D8F90: ;
    esp = esp - 0x20;
    ecx = MEM32(edi + 0x30);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    MEM32(esp + 4) = eax;
    MEM32(esp + 0x28) = eax;
    if (CMP_BE(ecx, eax)) goto loc_003D907B; /* jbe: below or equal (unsigned <=) */

loc_003D8FAD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */

loc_003D8FB1: ;
    esi = MEM32(edi + 0x18);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm7 = MEMF(ebp + 0x64); /* movss */
    eax = esp + 0x20;
    esi = esi + ebx;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D8B30(); /* call 0x003D8B30 */

loc_003D8FDC: ;
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 * MEMF(0x812A1C); /* mulss */
    esp = esp + 4;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp) = xmm0; /* movss */
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = ebp + 0x68;
    PUSH32(esp, eax);
    eax = ebp + 0x74;
    PUSH32(esp, eax);
    esi = esp + 0x28;
    PUSH32(esp, 0); sub_003DD3C0(); /* call 0x003DD3C0 */

loc_003D9016: ;
    ecx = MEM32(esp + 0x48);
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_003D9053; /* je: equal / zero */

loc_003D9021: ;
    eax = MEM32(0x84B534);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    MEM32(ecx * 4 + 0x818A60) = eax;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, edi);
    eax = eax + ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D99B0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003D8D10(); /* call 0x003D8D10 */

loc_003D9044: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 0x14;
    ecx = ecx | eax;
    MEM32(esp + 0xC) = ecx;
    goto loc_003D905E;

loc_003D9053: ;
    MEM32(ecx * 4 + 0x818A60) = 0;

loc_003D905E: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(edi + 0x30);
    eax++;
    ebx = ebx + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (CMP_B(eax, ecx)) goto loc_003D8FB1; /* jb: below (unsigned <) */

loc_003D9075: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003D907B: ;
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003D9080
 * Original: 0x003D9080 - 0x003D91A0 (288 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9080(void)
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

loc_003D9080: ;
    esp = esp - 0x34;
    eax = MEM32(esp + 0x38);
    ecx = eax + 0x60;
    eax = eax + 0x6C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    esi = 0; /* xor self */
    eax = esp + 0x24;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0x10) = ecx;
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
    eax = MEM32(edi + 0x30);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) { sub_003D91A0(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D90D9: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    /* nop */

loc_003D90E0: ;
    esi = MEM32(edi + 0x18);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esi + ebp);
    ecx = esp + 0x34;
    esi = esi + ebp;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D8B30(); /* call 0x003D8B30 */

loc_003D9107: ;
    fp_push(MEMF(0x812A1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = eax + 0x60;
    PUSH32(esp, eax);
    esi = esp + 0x30;
    PUSH32(esp, 0); sub_003DD3C0(); /* call 0x003DD3C0 */

loc_003D913E: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_003D917B; /* je: equal / zero */

loc_003D9145: ;
    eax = MEM32(0x84B534);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    MEM32(ebx * 4 + 0x818A60) = eax;
    edx = MEM32(edi + 0x18);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    edx = edx + ebp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DB1B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D8D10(); /* call 0x003D8D10 */

loc_003D916C: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 0x14;
    ecx = ecx | eax;
    MEM32(esp + 0xC) = ecx;
    goto loc_003D9186;

loc_003D917B: ;
    MEM32(ebx * 4 + 0x818A60) = 0;

loc_003D9186: ;
    eax = MEM32(edi + 0x30);
    ebx++;
    ebp = ebp + 0x10;
    if (CMP_B(ebx, eax)) goto loc_003D90E0; /* jb: below (unsigned <) */

loc_003D9195: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003D91B0
 * Original: 0x003D91B0 - 0x003D92E3 (307 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D91B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D91B0: ;
    (void)0; /* cmp MEM8(0x74FA28), 3 - flags set for next jcc */
    ecx = ZX16(MEM16(esi));
    PUSH32(esp, ebx);
    if (CMP_NE(MEM8(0x74FA28), 3)) { sub_003D92E3(); return; } /* jne: not equal / not zero */

loc_003D91C1: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + edx;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_BE(eax, 6)) goto loc_003D91D5; /* jbe: below or equal (unsigned <=) */

loc_003D91CE: ;
    ebp = ecx + 6;
    MEM32(edi) = ebp;
    goto loc_003D91D7;

loc_003D91D5: ;
    MEM32(edi) = ebx;

loc_003D91D7: ;
    ebp = (uint32_t)(int32_t)SMEM16(ecx);
    xmm0 = MEMF(0x818E64); /* movss */
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x818E68) = xmm1; /* movss */
    ebp = (uint32_t)(int32_t)SMEM16(ecx + 2);
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x818E6C) = xmm1; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x818E70) = xmm1; /* movss */
    ecx = ZX16(MEM16(esi + 2));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + edx;
    if (CMP_BE(eax, 6)) goto loc_003D9230; /* jbe: below or equal (unsigned <=) */

loc_003D9228: ;
    ebp = ecx + 6;
    MEM32(edi + 4) = ebp;
    goto loc_003D9233;

loc_003D9230: ;
    MEM32(edi + 4) = ebx;

loc_003D9233: ;
    ebp = (uint32_t)(int32_t)SMEM16(ecx);
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x818E74) = xmm1; /* movss */
    ebp = (uint32_t)(int32_t)SMEM16(ecx + 2);
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x818E78) = xmm1; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x818E7C) = xmm1; /* movss */
    ecx = ZX16(MEM16(esi + 4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + edx;
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_BE(eax, 6)) goto loc_003D9285; /* jbe: below or equal (unsigned <=) */

loc_003D927D: ;
    edx = ecx + 6;
    MEM32(edi + 8) = edx;
    goto loc_003D9288;

loc_003D9285: ;
    MEM32(edi + 8) = ebx;

loc_003D9288: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x818E80) = xmm1; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0xC);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x818E84) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 4);
    ecx = MEM32(esp + 8);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x10);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x818E88) = xmm1; /* movss */
    MEM32(ecx) = 0x818E68;
    MEM32(edx) = 0x818E74;
    MEM32(eax) = 0x818E80;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D9350
 * Original: 0x003D9350 - 0x003D93D1 (129 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D9350: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test MEM8(esp + 0x4C), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(esp + 0x4C), 1)) { sub_003D93D1(); return; } /* je: equal / zero */

loc_003D9368: ;
    ecx = ZX16(MEM16(esi));
    edi = MEM32(esp + 0x54);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + edx;
    ecx = ecx + edi;
    edi = MEM32(ecx);
    MEM32(ebx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(ebx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(ebx + 8) = ecx;
    ecx = ZX16(MEM16(esi + 2));
    edi = MEM32(esp + 0x54);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + edx;
    edi = edi + ecx;
    ebx = MEM32(edi);
    ecx = MEM32(esp + 0x48);
    MEM32(ecx) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(ecx + 4) = ebx;
    edi = MEM32(edi + 8);
    MEM32(ecx + 8) = edi;
    ecx = ZX16(MEM16(esi + 4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(esp + 0x54);
    ecx = ecx + edx;
    ecx = ecx + eax;
    edx = MEM32(ecx);
    MEM32(ebp) = edx;
    eax = MEM32(ecx + 4);
    MEM32(ebp + 4) = eax;
    ecx = MEM32(ecx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 8) = ecx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_003D9550
 * Original: 0x003D9550 - 0x003D9560 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9550(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D9550: ;
    eax = MEM32(0x812A18);
    if (TEST_Z(eax, eax)) { sub_003D9560(); return; } /* je: equal / zero */

loc_003D9559: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(eax + edx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D9570
 * Original: 0x003D9570 - 0x003D961E (174 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9570(void)
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

loc_003D9570: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84B548);
    if (TEST_NZ(eax, eax)) goto loc_003D95CC; /* jne: not equal / not zero */

loc_003D957C: ;
    eax = MEM32(0x84B544);
    if (TEST_NZ(eax, eax)) goto loc_003D95CC; /* jne: not equal / not zero */

loc_003D9585: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0 = MEMF(0x74FA10); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x74FA10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003D95B5; /* ja: above (unsigned >) */

loc_003D95A2: ;
    xmm2 = MEMF(esi + 4); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x1C); /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) { sub_003D961E(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D95B5: ;
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    xmm1 = MEMF(esi + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003D95CC; /* jbe: below or equal (unsigned <=) */

loc_003D95C5: ;
    MEM32(esi + 0x18) = 0;

loc_003D95CC: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003D6D70(); /* call 0x003D6D70 */

loc_003D95F2: ;
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) { sub_003D961E(); return; } /* je: equal / zero */

loc_003D95F9: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    edx = MEM32(edi);
    esi = esi + 8;
    MEM32(esi) = edx;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 8) = ecx;
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
 * sub_003D9630
 * Original: 0x003D9630 - 0x003D9734 (260 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9630(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_003D9630: ;
    esp = esp - 0x24;
    eax = esi + 0x74;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 8) = eax;
    edx = esi + 0x68;
    eax = esp + 0xC;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 4) = edx;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm6 = MEMF(esp + 0x18); /* movss */
    xmm5 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm5, xmm6 - sets EFLAGS */
    xmm0 = xmm6; /* movaps */
    if ((xmm5 > xmm6)) goto loc_003D969B; /* ja: above (unsigned >) */

loc_003D9698: ;
    xmm0 = xmm5; /* movaps */

loc_003D969B: ;
    xmm0 = xmm0 - MEMF(esi + 0x64); /* subss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    if ((xmm3 > xmm4)) goto loc_003D96BB; /* ja: above (unsigned >) */

loc_003D96B8: ;
    xmm0 = xmm3; /* movaps */

loc_003D96BB: ;
    xmm0 = xmm0 - MEMF(esi + 0x64); /* subss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    if ((xmm1 > xmm2)) goto loc_003D96DC; /* ja: above (unsigned >) */

loc_003D96D9: ;
    xmm0 = xmm1; /* movaps */

loc_003D96DC: ;
    /* comiss xmm6, xmm5 - sets EFLAGS */
    xmm0 = xmm0 - MEMF(esi + 0x64); /* subss */
    MEMF(edi + 8) = xmm0; /* movss */
    xmm0 = xmm6; /* movaps */
    if ((xmm6 > xmm5)) goto loc_003D96F1; /* ja: above (unsigned >) */

loc_003D96EE: ;
    xmm0 = xmm5; /* movaps */

loc_003D96F1: ;
    /* comiss xmm4, xmm3 - sets EFLAGS */
    xmm5 = MEMF(esi + 0x64); /* movss */
    xmm5 = xmm5 + xmm0; /* addss */
    MEMF(ebx) = xmm5; /* movss */
    xmm0 = xmm4; /* movaps */
    if ((xmm4 > xmm3)) goto loc_003D9709; /* ja: above (unsigned >) */

loc_003D9706: ;
    xmm0 = xmm3; /* movaps */

loc_003D9709: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm3 = MEMF(esi + 0x64); /* movss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(ebx + 4) = xmm3; /* movss */
    xmm0 = xmm2; /* movaps */
    if ((xmm2 > xmm1)) goto loc_003D9722; /* ja: above (unsigned >) */

loc_003D971F: ;
    xmm0 = xmm1; /* movaps */

loc_003D9722: ;
    xmm1 = MEMF(esi + 0x64); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ebx + 8) = xmm1; /* movss */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_003D9740
 * Original: 0x003D9740 - 0x003D99A5 (613 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D9740: ;
    esp = esp - 0x50;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x58);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x64);
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    eax = MEM32(esi + 0x1C);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x10) = ebp;
    if (CMP_BE(eax, ebp)) goto loc_003D9980; /* jbe: below or equal (unsigned <=) */

loc_003D9789: ;
    PUSH32(esp, edi);
    /* nop */

loc_003D9790: ;
    edx = MEM32(0x84B524);
    eax = MEM32(esi + 0x18);
    edx++;
    MEM32(0x84B524) = edx;
    ecx = eax + ebp + 0x40;
    edx = MEM32(ecx);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x34) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x38) = ecx;
    edx = eax + ebp + 0x4C;
    ecx = MEM32(edx);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(edx + 8);
    MEM32(esp + 0x2C) = edx;
    ecx = eax + ebp + 0x58;
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x84B544);
    if (TEST_NZ(ecx, ecx)) goto loc_003D98E1; /* jne: not equal / not zero */

loc_003D97F6: ;
    ecx = MEM32(ebx + 0x10);
    ecx--;
    if ((ecx == 0)) goto loc_003D98A2; /* je: equal / zero */

loc_003D9800: ;
    ecx = ecx - 0xD;
    if ((ecx != 0)) goto loc_003D9965; /* jne: not equal / not zero */

loc_003D9809: ;
    eax = MEM32(eax + 0x8C);
    ecx = MEM32(eax + 0x10);
    ecx = ecx - 2;
    if ((ecx == 0)) goto loc_003D9836; /* je: equal / zero */

loc_003D9817: ;
    ecx = ecx - 4;
    if ((ecx == 0)) goto loc_003D982A; /* je: equal / zero */

loc_003D981C: ;
    ecx = ecx - 6;
    if ((ecx == 0)) goto loc_003D9825; /* je: equal / zero */

loc_003D9821: ;
    esi = 0; /* xor self */
    goto loc_003D983A;

loc_003D9825: ;
    esi = MEM32(eax + 0x28);
    goto loc_003D983A;

loc_003D982A: ;
    edx = MEM32(0x819B20);
    esi = ZX16(MEM16(edx + 6));
    goto loc_003D983A;

loc_003D9836: ;
    esi = ZX16(MEM16(eax + 0x40));

loc_003D983A: ;
    eax = MEM32(esp + 0x68);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + ebp + 0x64);
    eax = ecx + ebp;
    ecx = MEM32(eax + 0x68);
    eax = MEM32(eax + 0x6C);
    ecx = ecx + esi;
    xmm0 = MEMF(ebx + 0x64); /* movss */
    edx = edx + esi;
    eax = eax + esi;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    esi = esp + 0x54;
    PUSH32(esp, esi);
    esi = esp + 0x68;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = esp + 0x48;
    PUSH32(esp, esi);
    esi = esp + 0x34;
    PUSH32(esp, esi);
    esi = esp + 0x44;
    PUSH32(esp, esi);
    esi = ebx + 0x68;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    esi = ebx + 0x74;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, esi);
    esi = esp + 0x3C;
    PUSH32(esp, 0); sub_003DDE80(); /* call 0x003DDE80 */

loc_003D9896: ;
    esi = MEM32(esp + 0x8C);
    esp = esp + 0x24;
    goto loc_003D98D9;

loc_003D98A2: ;
    ecx = MEM32(esp + 0x10);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x64);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = ebx + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = ebx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003DE990(); /* call 0x003DE990 */

loc_003D98D6: ;
    esp = esp + 0x28;

loc_003D98D9: ;
    if (TEST_Z(eax, eax)) goto loc_003D9965; /* je: equal / zero */

loc_003D98E1: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + ebp + 0x88);
    edx = MEM32(esp + 0x64);
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm1 = MEMF(ebx + 0x68); /* movss */
    eax = eax + ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x74); /* addss */
    eax = eax + 0x64;
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x6C); /* movss */
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x78); /* addss */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x70); /* movss */
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 0x7C); /* addss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x88);
    ecx = ebx + 0x20;
    edx = 0; /* xor self */
    edi = esp + 0x64;
    MEMF(esp + 0x6C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003D9570(); /* call 0x003D9570 */

loc_003D9962: ;
    esp = esp + 0x1C;

loc_003D9965: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x1C);
    eax++;
    ebp = ebp + 0x90;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(eax, ecx)) goto loc_003D9790; /* jb: below (unsigned <) */

loc_003D997F: ;
    POP32(esp, edi);

loc_003D9980: ;
    ecx = MEM32(esp + 0x68);
    xmm0 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    POP32(esp, esi);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (1 /* jnp after test - parity */) { sub_003D99A5(); return; } /* jnp: not parity */

loc_003D9997: ;
    MEM16(ecx) = 1;
    eax = 1;
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_003D99B0
 * Original: 0x003D99B0 - 0x003D99FC (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D99B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm2;

loc_003D99B0: ;
    esp = esp - 0x58;
    ecx = MEM32(0x84B53C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm2 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    MEMF(esp + 4) = xmm2; /* movss */
    if (TEST_Z(ecx, ecx)) { sub_003D99FC(); return; } /* je: equal / zero */

loc_003D99D0: ;
    eax = MEM32(0x84B540);
    if (TEST_Z(eax, eax)) { sub_003D99FC(); return; } /* je: equal / zero */

loc_003D99D9: ;
    SET_LO8(edx, MEM8(0x84B538));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_003D99FC(); return; } /* je: equal / zero */

loc_003D99E3: ;
    edx = ZX16(MEM16(ebx + 6));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(edx + ecx);
    eax = eax & MEM32(0x74FA2C);
    if ((eax != 0)) { sub_003D99FC(); return; } /* jne: not equal / not zero */

loc_003D99F5: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_003D9C10
 * Original: 0x003D9C10 - 0x003D9C79 (105 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D9C10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x1C);
    ebx = ebx + ecx;
    if (TEST_Z(eax, eax)) goto loc_003D9C70; /* je: equal / zero */

loc_003D9C22: ;
    eax = ebx + 4;
    MEM32(ebx) = eax;
    ecx = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = ebx + ecx * 4 + 4;
    if (CMP_BE(ecx & ecx, 0)) goto loc_003D9C76; /* jbe: below or equal (unsigned <=) */

loc_003D9C34: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003D9C36: ;
    if (TEST_Z(LO8(edx), 0xF)) goto loc_003D9C46; /* je: equal / zero */

loc_003D9C3B: ;
    goto loc_003D9C40;

    /* nop */

loc_003D9C40: ;
    edx++;
    if (TEST_NZ(LO8(edx), 0xF)) goto loc_003D9C40; /* jne: not equal / not zero */

loc_003D9C46: ;
    ecx = MEM32(ebx);
    MEM32(ecx + eax * 4) = edx;
    esi = MEM32(ebp + 0x24);
    edi = MEM32(ebx);
    esi = MEM32(esi + eax * 4);
    edi = MEM32(edi + eax * 4);
    ecx = 0x38;
    edx = edx + 0xE0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x1C);
    eax++;
    if (CMP_B(eax, ecx)) goto loc_003D9C36; /* jb: below (unsigned <) */

loc_003D9C6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003D9C70: ;
    MEM32(ebx) = 0;

loc_003D9C76: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D9C80
 * Original: 0x003D9C80 - 0x003D9C96 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9C80(void)
{
    int _flags = 0; /* fallback flag var */

loc_003D9C80: ;
    eax = MEM32(0x812A18);
    if (TEST_Z(eax, eax)) { sub_003D9C96(); return; } /* je: equal / zero */

loc_003D9C89: ;
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(eax + ecx);
    MEM32(0x812A14) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003D9CA0
 * Original: 0x003D9CA0 - 0x003D9D02 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003D9CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_NE(MEM32(edi + 0x10), 0xC)) { sub_003D9D02(); return; } /* jne: not equal / not zero */

loc_003D9CB4: ;
    eax = MEM32(0x812A10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_003D9CED; /* jle: less or equal (signed <=) */

loc_003D9CC5: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax--;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D6B70(); /* call 0x003D6B70 */

loc_003D9CD6: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x812A20);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003D9CEB: ;
    g_seh_ebp = ebp; sub_003D9D10(); return; /* tail jmp 0x003D9D10 */

loc_003D9CED: ;
    ecx = 0x10;
    esi = 0x812A20;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_003D9D10(); return; /* tail jmp 0x003D9D10 */

}

/**
 * sub_003D9EF0
 * Original: 0x003D9EF0 - 0x003DA032 (322 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D9EF0(void)
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

loc_003D9EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1D4;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    esi = esp + 0x40;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_003D9F12: ;
    eax = esp + 0x10;
    ecx = esi;
    PUSH32(esp, 0); sub_003E2D30(); /* call 0x003E2D30 */

loc_003D9F1D: ;
    eax = esi;
    PUSH32(esp, eax);
    ecx = ebx + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003D9F2E: ;
    eax = ebx + 0x68;
    ecx = esi;
    edx = esp + 0x28;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x38) = edx;
    eax = MEM32(esp + 0x34);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x3C);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003DA032(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D9F9F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003DA032(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D9FB5: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003DA032(); return; } /* jbe: below or equal (unsigned <=) */

loc_003D9FCB: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ebx + 0x64); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    MEM32(esp + 0xF4) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0xFC) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0xF8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0xE8) = eax;
    MEM32(esp + 0xF0) = edx;
    MEMF(esp + 0xE4) = xmm0; /* movss */
    MEM32(esp + 0xEC) = ecx;
    edx = 1;
    eax = esp + 0x80;
    g_seh_ebp = ebp; sub_003DA0CE(); return; /* tail jmp 0x003DA0CE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003DA180
 * Original: 0x003DA180 - 0x003DA292 (274 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm2, xmm3;

loc_003DA180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x24;
    esi = ebx;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + 0x14);
    eax = edi;
    ecx = esp + 0x14;
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_003DA1B1: ;
    eax = esi;
    PUSH32(esp, eax);
    ecx = ebx + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0xC8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003DA1C5: ;
    eax = esi;
    PUSH32(esp, eax);
    ecx = ebx + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0xD4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003DA1D9: ;
    ebx = ebx + 0x78;
    eax = esi;
    ecx = esp + 0xD8;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ecx;
    eax = MEM32(esp + 0x14);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x1C);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    esi = edi;
    ecx = 0x10;
    edi = esp + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x10);
    eax = eax - 2;
    if ((eax == 0)) { sub_003DA292(); return; } /* je: equal / zero */

loc_003DA24E: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_003DA279; /* je: equal / zero */

loc_003DA253: ;
    eax = eax - 6;
    if ((eax == 0)) goto loc_003DA261; /* je: equal / zero */

loc_003DA258: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003DA261: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D9080(); /* call 0x003D9080 */

loc_003DA26F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003DA279: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003D72D0(); /* call 0x003D72D0 */

loc_003DA288: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003DA2B0
 * Original: 0x003DA2B0 - 0x003DA3E9 (313 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA2B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003DA2B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    ecx = 0x34;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(esp + 0x30) = 8;
    ecx = 0x10;
    esi = ebx;
    edi = esp + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x80;
    ecx = esp + 0x1C;
    esi = eax;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_003DA2F9: ;
    eax = esp + 0x10;
    ecx = esi;
    PUSH32(esp, 0); sub_003E2D30(); /* call 0x003E2D30 */

loc_003DA304: ;
    eax = esi;
    PUSH32(esp, eax);
    ecx = esp + 0xDC;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003DA317: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xCC); /* mulss */
    MEMF(esp + 0xCC) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0xD0); /* mulss */
    MEMF(esp + 0xD0) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0xD4); /* mulss */
    MEMF(esp + 0xD4) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0xC0); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0xC4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC8); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    ecx = 0x10;
    esi = ebx;
    edi = esp + 0x40;
    MEMF(esp + 0xC0) = xmm3; /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x10);
    eax = eax - 2;
    if ((eax == 0)) { sub_003DA3E9(); return; } /* je: equal / zero */

loc_003DA3C2: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_003DA3D0; /* je: equal / zero */

loc_003DA3C7: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003DA3D0: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D7980(); /* call 0x003D7980 */

loc_003DA3DF: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003DA410
 * Original: 0x003DA410 - 0x003DA4AD (157 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DA410: ;
    esp = esp - 0x18;
    edx = ZX16(MEM16(eax + 0x18));
    xmm3 = MEMF(eax + 0x2C); /* movss */
    xmm4 = MEMF(eax + 0x30); /* movss */
    xmm5 = MEMF(eax + 0x34); /* movss */
    xmm3 = xmm3 - MEMF(eax + 0x20); /* subss */
    xmm4 = xmm4 - MEMF(eax + 0x24); /* subss */
    xmm5 = xmm5 - MEMF(eax + 0x28); /* subss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX16(MEM16(eax + 0x1A));
    eax = ZX16(MEM16(eax + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm3 = xmm3 / xmm0; /* divss */
    esi = ecx + 0x6C;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edi = ecx + 0x60;
    xmm4 = xmm4 / xmm0; /* divss */
    PUSH32(esp, esi);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, edi);
    xmm5 = xmm5 / xmm0; /* divss */
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003DA464: ;
    ecx = esp + 0x1C;
    esp = esp + 8;
    xmm2 = xmm0; /* movaps */
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((xmm4 <= xmm3)) { sub_003DA4AD(); return; } /* jbe: below or equal (unsigned <=) */

loc_003DA4A8: ;
    /* comiss xmm5, xmm3 - sets EFLAGS */
    g_seh_ebp = ebp; sub_003DA4B3(); return; /* tail jmp 0x003DA4B3 */

}

/**
 * sub_003DA530
 * Original: 0x003DA530 - 0x003DA617 (231 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DA530: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x2C); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x20); /* subss */
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(eax + 0x18));
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(ecx) = xmm0; /* movss */
    ebp = ZX16(MEM16(eax + 0x1A));
    xmm0 = MEMF(eax + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x24); /* subss */
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(ecx + 4) = xmm0; /* movss */
    ebp = ZX16(MEM16(eax + 0x1C));
    xmm0 = MEMF(eax + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x28); /* subss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    xmm1 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(ecx + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x20); /* subss */
    xmm0 = xmm0 / MEMF(ecx); /* divss */
    ebp = (int32_t)xmm0; /* cvttss2si */
    MEM32(ebx) = ebp;
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x24); /* subss */
    xmm0 = xmm0 / MEMF(ecx + 4); /* divss */
    ebp = (int32_t)xmm0; /* cvttss2si */
    MEM32(ebx + 4) = ebp;
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x28); /* subss */
    xmm0 = xmm0 / MEMF(ecx + 8); /* divss */
    edi = (int32_t)xmm0; /* cvttss2si */
    MEM32(ebx + 8) = edi;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x20); /* subss */
    xmm0 = xmm0 / MEMF(ecx); /* divss */
    edi = (int32_t)xmm0; /* cvttss2si */
    MEM32(edx) = edi;
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x24); /* subss */
    xmm0 = xmm0 / MEMF(ecx + 4); /* divss */
    edi = (int32_t)xmm0; /* cvttss2si */
    MEM32(edx + 4) = edi;
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x28); /* subss */
    xmm0 = xmm0 / MEMF(ecx + 8); /* divss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(edx);
    if (CMP_GE(ecx & ecx, 0)) { sub_003DA617(); return; } /* jge: greater or equal (signed >=) */

loc_003DA613: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_003DA622(); return; /* tail jmp 0x003DA622 */

}

/**
 * sub_003DA6B0
 * Original: 0x003DA6B0 - 0x003DA8A6 (502 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA6B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DA6B0: ;
    esp = esp - 0x54;
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    edx = esp + 0x40;
    ebx = esp + 0x58;
    PUSH32(esp, 0); sub_003DA530(); /* call 0x003DA530 */

loc_003DA6D0: ;
    eax = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x40);
    esp = esp + 0xC;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    ecx = eax;
    MEM32(esp + 8) = ecx;
    if (CMP_G(eax, edx)) goto loc_003DA8A1; /* jg: greater (signed >) */

loc_003DA6E9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_003DA6F0;

    /* nop */

loc_003DA6F0: ;
    ebx = MEM32(esp + 0x58);
    (void)0; /* cmp ebx, MEM32(esp + 0x40) - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_G(ebx, MEM32(esp + 0x40))) goto loc_003DA88E; /* jg: greater (signed >) */

loc_003DA702: ;
    ebp = MEM32(esp + 0x5C);
    (void)0; /* cmp ebp, MEM32(esp + 0x44) - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_G(ebp, MEM32(esp + 0x44))) goto loc_003DA87D; /* jg: greater (signed >) */

loc_003DA714: ;
    edi = ZX16(MEM16(esi + 0x1A));
    edx = ZX16(MEM16(esi + 0x1C));
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    eax = MEM32(esi + 0x48);
    edi = edi + ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edi = edi + ebp;
    if (CMP_EQ(MEM32(eax + edi * 8), 0)) goto loc_003DA868; /* je: equal / zero */

loc_003DA733: ;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x30); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x20); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x24); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x28); /* addss */
    ecx = esp + 0x30;
    edx = esp + 0x24;
    eax = esp + 0x48;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x68);
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(esp + 0x48) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x48))) goto loc_003DA868; /* ja: above (unsigned >) */

loc_003DA7C4: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx))) goto loc_003DA868; /* ja: above (unsigned >) */

loc_003DA7D7: ;
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(esp + 0x4C) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x4C))) goto loc_003DA868; /* ja: above (unsigned >) */

loc_003DA7E7: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm0, MEMF(ecx + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx + 4))) goto loc_003DA868; /* ja: above (unsigned >) */

loc_003DA7F3: ;
    xmm0 = MEMF(eax + 8); /* movss */
    /* comiss xmm0, MEMF(esp + 0x50) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x50))) goto loc_003DA868; /* ja: above (unsigned >) */

loc_003DA7FF: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* comiss xmm0, MEMF(ecx + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx + 8))) goto loc_003DA868; /* ja: above (unsigned >) */

loc_003DA80B: ;
    ecx = MEM32(esi + 0x48);
    eax = ecx + edi * 8;
    ecx = MEM32(eax);
    ebx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_003DA864; /* jbe: below or equal (unsigned <=) */

loc_003DA819: ;
    ebp = 0; /* xor self */
    goto loc_003DA820;

    /* nop */

loc_003DA820: ;
    edx = MEM32(esp + 0x74);
    ecx = ZX16(MEM16(esi + 0x3E));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi + 0x42));
    ecx = ecx + edx;
    edx = ZX16(MEM16(esi + 0x40));
    ecx = ecx + edx;
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = edx + ebp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x88), _icall_esp); /* indirect call */
    }

loc_003DA84D: ;
    ecx = MEM32(esi + 0x48);
    eax = ecx + edi * 8;
    ecx = MEM32(eax);
    esp = esp + 0x18;
    ebx++;
    ebp = ebp + 0x20;
    if (CMP_B(ebx, ecx)) goto loc_003DA820; /* jb: below (unsigned <) */

loc_003DA860: ;
    ebp = MEM32(esp + 0x14);

loc_003DA864: ;
    ebx = MEM32(esp + 0xC);

loc_003DA868: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x10);
    ebp++;
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(ebp, eax)) goto loc_003DA714; /* jle: less or equal (signed <=) */

loc_003DA87D: ;
    eax = MEM32(esp + 0x40);
    ebx++;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_LE(ebx, eax)) goto loc_003DA702; /* jle: less or equal (signed <=) */

loc_003DA88E: ;
    eax = MEM32(esp + 0x3C);
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(ecx, eax)) goto loc_003DA6F0; /* jle: less or equal (signed <=) */

loc_003DA89F: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_003DA8A1: ;
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_003DA8B0
 * Original: 0x003DA8B0 - 0x003DAB52 (674 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DA8B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DA8B0: ;
    esp = esp - 0x60;
    eax = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x6C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esp + 0x48;
    edx = esp + 0x60;
    ebx = esp + 0x6C;
    PUSH32(esp, 0); sub_003DA530(); /* call 0x003DA530 */

loc_003DA8D6: ;
    edi = MEM32(esp + 0x6C);
    eax = MEM32(esp + 0x60);
    esp = esp + 0xC;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_G(edi, eax)) goto loc_003DAB4B; /* jg: greater (signed >) */

loc_003DA8ED: ;
    PUSH32(esp, esi);
    edi = edi;

loc_003DA8F0: ;
    ebx = MEM32(esp + 0x68);
    (void)0; /* cmp ebx, MEM32(esp + 0x5C) - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_G(ebx, MEM32(esp + 0x5C))) goto loc_003DAB39; /* jg: greater (signed >) */

loc_003DA902: ;
    esi = MEM32(esp + 0x6C);
    (void)0; /* cmp esi, MEM32(esp + 0x60) - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_G(esi, MEM32(esp + 0x60))) goto loc_003DAB28; /* jg: greater (signed >) */

loc_003DA914: ;
    eax = ZX16(MEM16(ebp + 0x1A));
    edx = ZX16(MEM16(ebp + 0x1C));
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = MEM32(ebp + 0x48);
    eax = eax + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax + esi;
    (void)0; /* cmp MEM32(ecx + eax * 8), 0 - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    if (CMP_EQ(MEM32(ecx + eax * 8), 0)) goto loc_003DAB17; /* je: equal / zero */

loc_003DA937: ;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x20); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x24); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esp + 0x48); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x28); /* addss */
    edx = esp + 0x40;
    eax = esp + 0x34;
    ecx = esp + 0x4C;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x7C);
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(esp + 0x4C) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x4C))) goto loc_003DAB17; /* ja: above (unsigned >) */

loc_003DA9C8: ;
    ecx = MEM32(esp + 0x80);
    xmm0 = MEMF(esp + 0x34); /* movss */
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx))) goto loc_003DAB17; /* ja: above (unsigned >) */

loc_003DA9DE: ;
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(esp + 0x50) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x50))) goto loc_003DAB17; /* ja: above (unsigned >) */

loc_003DA9EE: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    /* comiss xmm0, MEMF(ecx + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx + 4))) goto loc_003DAB17; /* ja: above (unsigned >) */

loc_003DA9FE: ;
    xmm0 = MEMF(eax + 8); /* movss */
    /* comiss xmm0, MEMF(esp + 0x54) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x54))) goto loc_003DAB17; /* ja: above (unsigned >) */

loc_003DAA0E: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    /* comiss xmm0, MEMF(ecx + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(ecx + 8))) goto loc_003DAB17; /* ja: above (unsigned >) */

loc_003DAA1E: ;
    edx = MEM32(esp + 0x88);
    xmm3 = MEMF(edx + 4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x7C);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = eax + 0x78;
    PUSH32(esp, 0x84B550);
    PUSH32(esp, edx);
    esi = eax + 0x60;
    ebx = esp + 0x5C;
    edi = esp + 0x44;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003DD970(); /* call 0x003DD970 */

loc_003DAA60: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_003DAB0B; /* je: equal / zero */

loc_003DAA6B: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x10))) goto loc_003DAB0B; /* ja: above (unsigned >) */

loc_003DAA7C: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_003DAB0B; /* ja: above (unsigned >) */

loc_003DAA85: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMD(0x648F30)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003DAB0B; /* ja: above (unsigned >) */

loc_003DAA95: ;
    eax = MEM32(ebp + 0x48);
    ebx = MEM32(esp + 0x30);
    ecx = MEM32(eax + ebx * 8);
    eax = eax + ebx * 8;
    esi = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_003DAAF4; /* jbe: below or equal (unsigned <=) */

loc_003DAAA8: ;
    edi = 0; /* xor self */
    /* nop */

loc_003DAAB0: ;
    ecx = MEM32(esp + 0x88);
    edx = ZX16(MEM16(ebp + 0x3E));
    eax = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(ebp + 0x42));
    edx = edx + ecx;
    ecx = ZX16(MEM16(ebp + 0x40));
    edx = edx + ecx;
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x9C), _icall_esp); /* indirect call */
    }

loc_003DAAE0: ;
    edx = MEM32(ebp + 0x48);
    ecx = MEM32(edx + ebx * 8);
    esp = esp + 0x18;
    eax = edx + ebx * 8;
    esi++;
    edi = edi + 0x20;
    if (CMP_B(esi, ecx)) goto loc_003DAAB0; /* jb: below (unsigned <) */

loc_003DAAF4: ;
    eax = MEM32(0x84B54C);
    if (TEST_Z(eax, eax)) goto loc_003DAB0B; /* je: equal / zero */

loc_003DAAFD: ;
    eax = MEM32(esp + 0x88);
    ecx = MEM32(eax + 0x18);
    if (CMP_A(ecx & ecx, 0)) goto loc_003DAB4A; /* ja: above (unsigned >) */

loc_003DAB0B: ;
    edi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x18);

loc_003DAB17: ;
    eax = MEM32(esp + 0x60);
    esi++;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_LE(esi, eax)) goto loc_003DA914; /* jle: less or equal (signed <=) */

loc_003DAB28: ;
    eax = MEM32(esp + 0x5C);
    ebx++;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_LE(ebx, eax)) goto loc_003DA902; /* jle: less or equal (signed <=) */

loc_003DAB39: ;
    eax = MEM32(esp + 0x58);
    edi++;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x20) = edi;
    if (CMP_LE(edi, eax)) goto loc_003DA8F0; /* jle: less or equal (signed <=) */

loc_003DAB4A: ;
    POP32(esp, esi);

loc_003DAB4B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003DAB60
 * Original: 0x003DAB60 - 0x003DABC1 (97 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAB60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DAB60: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    xmm0 = MEMF(ebp + 4); /* movss */
    PUSH32(esp, edi);
    ebx = esi + 0x60;
    edi = esi + 0x6C;
    eax = esp + 0x18;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x44) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(edi); /* movss */
    /* comiss xmm0, MEMF(ebx) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx))) { sub_003DABC1(); return; } /* jbe: below or equal (unsigned <=) */

loc_003DABBB: ;
    xmm0 = MEMF(ebx); /* movss */
    g_seh_ebp = ebp; sub_003DABC5(); return; /* tail jmp 0x003DABC5 */

}

/**
 * sub_003DAD10
 * Original: 0x003DAD10 - 0x003DAD71 (97 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAD10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DAD10: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    xmm0 = MEMF(ebp + 4); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    ebx = esp + 0x10;
    edi = esp + 0x1C;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D9630(); /* call 0x003D9630 */

loc_003DAD35: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3D99B0);
    eax = ebx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, 0); sub_003DA6B0(); /* call 0x003DA6B0 */

loc_003DAD4B: ;
    xmm0 = MEMF(ebp + 4); /* movss */
    esp = esp + 0x14;
    /* ucomiss xmm0, MEMF(esp + 0x30) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_003DAD71(); return; } /* jnp: not parity */

loc_003DAD5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ebp) = 1;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003DAD80
 * Original: 0x003DAD80 - 0x003DAE01 (129 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAD80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003DAD80: ;
    esp = esp - 0x30;
    xmm0 = MEMF(edi + 4); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    esi = esp + 8;
    edx = esp + 0x14;
    ecx = ebx;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003DC330(); /* call 0x003DC330 */

loc_003DADA3: ;
    esi = ebx + 0x60;
    PUSH32(esp, esi);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003DADB4: ;
    PUSH32(esp, esi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003DADC4: ;
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3DC430);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003DA6B0(); /* call 0x003DA6B0 */

loc_003DADDE: ;
    xmm0 = MEMF(edi + 4); /* movss */
    esp = esp + 0x14;
    /* ucomiss xmm0, MEMF(esp + 0x40) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (1 /* jnp after test - parity */) { sub_003DAE01(); return; } /* jnp: not parity */

loc_003DADF3: ;
    MEM16(edi) = 1;
    eax = 1;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_003DAE10
 * Original: 0x003DAE10 - 0x003DAF53 (323 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003DAE10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    ecx = ZX16(MEM16(ebx + 0x1A));
    edx = ZX16(MEM16(ebx + 0x18));
    SET_LO8(eax, 0x7F);
    MEM8(esp + 4) = LO8(eax);
    MEM8(esp + 3) = LO8(eax);
    MEM8(esp + 8) = LO8(eax);
    eax = ZX16(MEM16(ebx + 0x1C));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x818E90);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x819AD0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003DAE53: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428CF0(); /* call 0x00428CF0 */

loc_003DAE5D: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esp + 0x20);
    ecx = 0x10;
    edi = 0x818E90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_LE(eax & eax, 0)) goto loc_003DAF4D; /* jle: less or equal (signed <=) */

loc_003DAE81: ;
    edx = MEM32(ebx + 0x48);
    SET_LO8(eax, MEM8(esp + 0xC));
    esi = edx + edi * 8;
    SET_LO8(edx, MEM8(esp + 0x10));
    SET_LO8(eax, LO8(eax) + 0x43);
    SET_LO8(edx, LO8(edx) + 0x5A);
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM8(esp + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xB));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    SET_LO8(edx, LO8(edx) + 0x14);
    PUSH32(esp, ecx);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0x13) = LO8(edx);
    PUSH32(esp, 0); sub_00428DE0(); /* call 0x00428DE0 */

loc_003DAEB8: ;
    eax = MEM32(esi);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(eax & eax, 0)) goto loc_003DAF3C; /* jbe: below or equal (unsigned <=) */

loc_003DAEC9: ;
    edi = 0; /* xor self */
    goto loc_003DAED0;

    /* nop */

loc_003DAED0: ;
    eax = MEM32(0x74FA80);
    if (TEST_Z(eax, eax)) goto loc_003DAEFF; /* je: equal / zero */

loc_003DAED9: ;
    eax = ZX16(MEM16(ebx + 0x3E));
    edx = ZX16(MEM16(ebx + 0x42));
    ecx = ZX16(MEM16(ebx + 0x40));
    edx = edx + eax;
    edx = edx + ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x38);
    PUSH32(esp, edx);
    ecx = ecx + edi;
    eax = 1;
    PUSH32(esp, 0); sub_003DB4F0(); /* call 0x003DB4F0 */

loc_003DAEFD: ;
    goto loc_003DAF23;

loc_003DAEFF: ;
    ecx = ZX16(MEM16(ebx + 0x3E));
    eax = ZX16(MEM16(ebx + 0x42));
    edx = ZX16(MEM16(ebx + 0x40));
    eax = eax + ecx;
    ecx = MEM32(esi + 4);
    eax = eax + edx;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x38);
    PUSH32(esp, eax);
    ecx = ecx + edi;
    eax = 1;
    PUSH32(esp, 0); sub_003DB950(); /* call 0x003DB950 */

loc_003DAF23: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esi);
    esp = esp + 8;
    eax++;
    edi = edi + 0x20;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(eax, ecx)) goto loc_003DAED0; /* jb: below (unsigned <) */

loc_003DAF38: ;
    edi = MEM32(esp + 0x18);

loc_003DAF3C: ;
    eax = MEM32(esp + 0x1C);
    edi++;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(edi, eax)) goto loc_003DAE81; /* jl: less (signed <) */

loc_003DAF4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003DAF60
 * Original: 0x003DAF60 - 0x003DB19F (575 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DAF60(void)
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

loc_003DAF60: ;
    esp = esp - 0x30;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 4); /* movss */
    ebx = 1;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(ecx, eax)) goto loc_003DB106; /* jbe: below or equal (unsigned <=) */

loc_003DAFAD: ;
    MEM32(esp + 8) = eax;
    PUSH32(esp, esi);

loc_003DAFB2: ;
    if (TEST_Z(ebx, ebx)) goto loc_003DB105; /* je: equal / zero */

loc_003DAFBA: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(0x84B524);
    esi = eax + 0x60;
    eax = eax + 0x6C;
    MEM32(esp + 0x1C) = eax;
    ecx++;
    eax = esp + 0x30;
    MEM32(0x84B524) = ecx;
    MEM32(esp + 0x18) = esi;
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
    eax = MEM32(0x84B55C);
    if (TEST_NZ(eax, eax)) goto loc_003DB074; /* jne: not equal / not zero */

loc_003DB011: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(esp + 0xC);
    eax = ecx + edx;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = eax + 0x58;
    PUSH32(esp, ecx);
    edx = eax + 0x4C;
    PUSH32(esp, edx);
    eax = eax + 0x40;
    PUSH32(esp, eax);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003DD570(); /* call 0x003DD570 */

loc_003DB04B: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_003DB0E3; /* je: equal / zero */

loc_003DB056: ;
    eax = MEM32(0x84B560);
    if (TEST_NZ(eax, eax)) goto loc_003DB074; /* jne: not equal / not zero */

loc_003DB05F: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003DB0E3; /* jbe: below or equal (unsigned <=) */

loc_003DB074: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003DB09C; /* jbe: below or equal (unsigned <=) */

loc_003DB083: ;
    eax = MEM32(0x84B55C);
    if (TEST_NZ(eax, eax)) goto loc_003DB09C; /* jne: not equal / not zero */

loc_003DB08C: ;
    eax = MEM32(0x84B560);
    if (TEST_NZ(eax, eax)) goto loc_003DB09C; /* jne: not equal / not zero */

loc_003DB095: ;
    MEM32(ebp + 0x18) = 0;

loc_003DB09C: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(esp + 0xC);
    eax = ecx + edx;
    ecx = MEM32(eax + 0x88);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax + 0x64;
    PUSH32(esp, ecx);
    edx = eax + 0x58;
    PUSH32(esp, edx);
    ecx = eax + 0x4C;
    PUSH32(esp, ecx);
    eax = eax + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003D6D70(); /* call 0x003D6D70 */

loc_003DB0CF: ;
    ebx = eax;
    esp = esp + 0x24;
    if (TEST_Z(ebx, ebx)) goto loc_003DB0E3; /* je: equal / zero */

loc_003DB0D8: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    MEMF(ebp + 4) = xmm0; /* movss */

loc_003DB0E3: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x1C);
    eax++;
    edx = edx + 0x90;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = edx;
    if (CMP_B(eax, ecx)) goto loc_003DAFB2; /* jb: below (unsigned <) */

loc_003DB105: ;
    POP32(esp, esi);

loc_003DB106: ;
    xmm0 = MEMF(ebp + 4); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_003DB19F(); return; } /* jnp: not parity */

loc_003DB11A: ;
    ecx = ebp + 8;
    edx = esp + 0x2C;
    MEM32(esp + 0x40) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x3C);
    eax = eax + 0x60;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEM16(ebp) = 1;
    POP32(esp, ebp);
    eax = 1;
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
 * sub_003DB1B0
 * Original: 0x003DB1B0 - 0x003DB1F9 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB1B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003DB1B0: ;
    esp = esp - 0x68;
    ecx = MEM32(0x84B53C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) { sub_003DB1F9(); return; } /* je: equal / zero */

loc_003DB1CA: ;
    eax = MEM32(0x84B540);
    if (TEST_Z(eax, eax)) { sub_003DB1F9(); return; } /* je: equal / zero */

loc_003DB1D3: ;
    SET_LO8(edx, MEM8(0x84B538));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_003DB1F9(); return; } /* je: equal / zero */

loc_003DB1DD: ;
    edx = MEM32(esp + 0x70);
    edx = ZX16(MEM16(edx + 6));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(edx + ecx);
    eax = eax & MEM32(0x74FA2C);
    if ((eax != 0)) { sub_003DB1F9(); return; } /* jne: not equal / not zero */

loc_003DB1F3: ;
    eax = 0; /* xor self */
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_003DB430
 * Original: 0x003DB430 - 0x003DB4E4 (180 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB430(void)
{
    uint32_t ebp;
    float xmm5;

loc_003DB430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    SET_LO8(edx, MEM8(ebp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    esi = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_00428DE0(); /* call 0x00428DE0 */

loc_003DB452: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    xmm5 = MEMF(ebp + 8); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_003DB477: ;
    esp = esp + 0x2C;
    PUSH32(esp, 0x819AD0);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003DB48E: ;
    PUSH32(esp, 0x818E90);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003DB4A5: ;
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428CF0(); /* call 0x00428CF0 */

loc_003DB4AD: ;
    ecx = MEM32(ebp + 0x10);
    SET_LO8(edx, MEM8(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_00428DE0(); /* call 0x00428DE0 */

loc_003DB4BC: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x1B01);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_003DB4C9: ;
    edi = ZX8(MEM8(ebp + 0xC));
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00429640(); /* call 0x00429640 */

loc_003DB4D4: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_003DB4DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
