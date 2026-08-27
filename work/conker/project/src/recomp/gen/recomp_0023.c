/**
 * Burnout 3 - Recompiled code chunk 23
 * Functions: 250 (0x002072E0 - 0x0022F800)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002072E0
 * Original: 0x002072E0 - 0x00207546 (614 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002072E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002072E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x849B40);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ebx)) goto loc_0020730B; /* je: equal / zero */

loc_002072EE: ;
    esi = 0x849B40;

loc_002072F3: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_002072FB: ;
    MEM32(esi) = ebx;
    esi = esi + 4;
    esp = esp + 4;
    if (CMP_L(esi, 0x849B54)) goto loc_002072F3; /* jl: less (signed <) */

loc_0020730B: ;
    eax = MEM32(0x7768C4);
    if (CMP_EQ(eax, ebx)) goto loc_00207350; /* je: equal / zero */

loc_00207314: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0020731A: ;
    if (TEST_NZ(eax, eax)) goto loc_0020734A; /* jne: not equal / not zero */

loc_0020731E: ;
    eax = MEM32(0x7768C4);
    if (CMP_EQ(eax, ebx)) goto loc_0020734A; /* je: equal / zero */

loc_00207327: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00207347: ;
    esp = esp + 4;

loc_0020734A: ;
    MEM32(0x7768C4) = ebx;

loc_00207350: ;
    eax = MEM32(0x7767E4);
    if (CMP_EQ(eax, ebx)) goto loc_00207395; /* je: equal / zero */

loc_00207359: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0020735F: ;
    if (TEST_NZ(eax, eax)) goto loc_0020738F; /* jne: not equal / not zero */

loc_00207363: ;
    eax = MEM32(0x7767E4);
    if (CMP_EQ(eax, ebx)) goto loc_0020738F; /* je: equal / zero */

loc_0020736C: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0020738C: ;
    esp = esp + 4;

loc_0020738F: ;
    MEM32(0x7767E4) = ebx;

loc_00207395: ;
    eax = MEM32(0x776704);
    if (CMP_EQ(eax, ebx)) goto loc_002073DA; /* je: equal / zero */

loc_0020739E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002073A4: ;
    if (TEST_NZ(eax, eax)) goto loc_002073D4; /* jne: not equal / not zero */

loc_002073A8: ;
    eax = MEM32(0x776704);
    if (CMP_EQ(eax, ebx)) goto loc_002073D4; /* je: equal / zero */

loc_002073B1: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002073D1: ;
    esp = esp + 4;

loc_002073D4: ;
    MEM32(0x776704) = ebx;

loc_002073DA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(0x849924);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x849910) = ebx;
    MEM32(0x849914) = ebx;
    MEMF(0x7768F4) = xmm0; /* movss */
    MEMF(0x7768F0) = xmm0; /* movss */
    MEMF(0x7768EC) = xmm0; /* movss */
    MEM32(0x7768D4) = ebx;
    MEM32(0x7768D0) = ebx;
    MEM32(0x849938) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_0020745E; /* je: equal / zero */

loc_0020741C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00207422: ;
    if (TEST_NZ(eax, eax)) goto loc_00207452; /* jne: not equal / not zero */

loc_00207426: ;
    eax = MEM32(0x849924);
    if (CMP_EQ(eax, ebx)) goto loc_00207452; /* je: equal / zero */

loc_0020742F: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0020744F: ;
    esp = esp + 4;

loc_00207452: ;
    MEM32(0x849924) = ebx;
    MEM32(0x849928) = ebx;

loc_0020745E: ;
    eax = MEM32(0x84992C);
    if (CMP_EQ(eax, ebx)) goto loc_002074A3; /* je: equal / zero */

loc_00207467: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0020746D: ;
    if (TEST_NZ(eax, eax)) goto loc_0020749D; /* jne: not equal / not zero */

loc_00207471: ;
    eax = MEM32(0x84992C);
    if (CMP_EQ(eax, ebx)) goto loc_0020749D; /* je: equal / zero */

loc_0020747A: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0020749A: ;
    esp = esp + 4;

loc_0020749D: ;
    MEM32(0x84992C) = ebx;

loc_002074A3: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x20;
    edi = 0x84C318;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x20;
    edi = 0x84C6B0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x20;
    edi = 0x84CA48;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x20;
    edi = 0x84CDE0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_002074FA; /* jne: not equal / not zero */

loc_002074DF: ;
    edi = MEM32(0x6BD4B8);
    ecx = 0; /* xor self */
    (void)0; /* cmp edi, 0x1C - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(edi, 0x1C)) ? 1 : 0); /* setne */
    ecx--;
    ecx = ecx & 0xFFFFFFCBu;
    ecx = ecx + 0x36;
    MEM32(0x6BD4B8) = ecx;

loc_002074FA: ;
    eax = MEM32(0x849B18);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x849ACC) = ebx;
    esi = eax;
    POP32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_00207536; /* je: equal / zero */

loc_0020750C: ;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, ebx)) goto loc_00207518; /* je: equal / zero */

loc_00207512: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00207518: ;
    ecx = MEM32(esi + 4);
    if (CMP_EQ(ecx, ebx)) goto loc_00207525; /* je: equal / zero */

loc_0020751F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00207525: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00207533: ;
    esp = esp + 4;

loc_00207536: ;
    POP32(esp, esi);
    MEM32(0x849B18) = ebx;
    MEM8(0x849AC0) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00207550
 * Original: 0x00207550 - 0x002079FE (1198 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207550(void)
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

loc_00207550: ;
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5F9294);
    PUSH32(esp, 0x962EE94);
    PUSH32(esp, 0); sub_00206470(); /* call 0x00206470 */

loc_0020756C: ;
    esi = eax;
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x849AA4) = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002079F5; /* je: equal / zero */

loc_00207581: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_002075B4; /* je: equal / zero */

loc_00207588: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00207592: ;
    if (CMP_EQ(eax, ebx)) goto loc_002075B4; /* je: equal / zero */

loc_00207596: ;
    MEM32(eax + 0xF4) = 1;
    MEM16(eax + 0x1DA) = LO16(ebx);
    MEM16(eax + 0x1D8) = LO16(ebx);
    esi = MEM32(0x849AA4);

loc_002075B4: ;
    esi = MEM32(esi + 0x10);
    if (CMP_EQ(esi, ebx)) goto loc_002075CD; /* je: equal / zero */

loc_002075BB: ;
    PUSH32(esp, 0x3FA00000);
    eax = esi + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036830(); /* call 0x00036830 */

loc_002075CA: ;
    esp = esp + 4;

loc_002075CD: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    PUSH32(esp, ebx);
    eax = 0xAB;
    PUSH32(esp, edx);
    MEM32(0x87C8F4) = eax;
    PUSH32(esp, 0); sub_0001FC70(); /* call 0x0001FC70 */

loc_002075EA: ;
    if (CMP_NE(MEM32(0x6BD4B8), 0x16)) goto loc_002078E9; /* jne: not equal / not zero */

loc_002075F7: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_002078C6; /* je: equal / zero */

loc_00207607: ;
    PUSH32(esp, 1);
    esi = eax + 4;
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F9250);
    edx = 0; /* xor self */
    eax = esi;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_000367A0(); /* call 0x000367A0 */

loc_00207623: ;
    esp = esp + 0xC;
    if (CMP_EQ(eax, ebx)) goto loc_00207647; /* je: equal / zero */

loc_0020762A: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x1BC) = xmm0; /* movss */
    MEMF(eax + 0x1C4) = xmm0; /* movss */
    goto loc_002078C6;

loc_00207647: ;
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00035F90(); /* call 0x00035F90 */

loc_00207651: ;
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0020765A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xB1);
    PUSH32(esp, 0x5D4B84);
    PUSH32(esp, 0x200);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00207672: ;
    ebp = eax;
    esp = esp + 0x10;
    if (TEST_Z(ebp, ebp)) goto loc_002078C3; /* je: equal / zero */

loc_0020767F: ;
    eax = 0; /* xor self */
    ecx = 0x80;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x5D4B84);
    edi = 0x5F9250;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_0020769E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebp + 0xC) = eax;
    eax = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEMF(ebp + 0x1B0) = xmm0; /* movss */
    MEMF(ebp + 0x1B4) = xmm0; /* movss */
    MEMF(ebp + 0x1B8) = xmm0; /* movss */
    MEM32(ebp + 8) = eax;
    MEM16(ebp + 0x1D8) = LO16(eax);
    MEM16(ebp + 0x1DA) = LO16(eax);
    MEM32(ebp + 0x1DC) = eax;
    MEM8(ebp + 0x1F0) = LO8(eax);
    MEM8(ebp + 0x1F1) = LO8(eax);
    if (CMP_EQ(ebx, eax)) goto loc_00207747; /* je: equal / zero */

loc_002076E8: ;
    ecx = MEM32(ebx + 0x1BC);
    MEM32(ebp + 0x1BC) = ecx;
    edx = MEM32(ebx + 0x1C0);
    MEM32(ebp + 0x1C0) = edx;
    eax = MEM32(ebx + 0x1C8);
    MEM32(ebp + 0x1C8) = eax;
    xmm1 = MEMF(ebx + 0x1C8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ebx + 0x1BC) = xmm0; /* movss */
    MEMF(ebx + 0x1C0) = xmm0; /* movss */
    MEMF(ebx + 0x1C4) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00207767; /* jp: parity */

loc_00207735: ;
    ebx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036700(); /* call 0x00036700 */

loc_0020773E: ;
    MEM8(0x84A5BD) = 1;
    goto loc_00207767;

loc_00207747: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(ebp + 0x1BC) = xmm1; /* movss */
    MEMF(ebp + 0x1C0) = xmm0; /* movss */
    MEMF(ebp + 0x1C8) = xmm1; /* movss */

loc_00207767: ;
    ebx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036700(); /* call 0x00036700 */

loc_00207770: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x104);
    PUSH32(esp, 0x5F9250);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM8(0x84A5BD) = 1;
    MEMF(ebp + 0x1C4) = xmm0; /* movss */
    MEM8(ebp + 0x1D4) = LO8(ebx);
    MEM8(ebp + 0x1D6) = LO8(ebx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_002077A7: ;
    eax = esp + 0x14;
    MEM32(esp + 0x124) = 0x1D;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_002077C7: ;
    esi = esp + 0x14;
    PUSH32(esp, 0); sub_00063730(); /* call 0x00063730 */

loc_002077D0: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(eax + 4), ebx)) goto loc_00207876; /* jne: not equal / not zero */

loc_002077DD: ;
    edx = MEM32(eax + 0x18);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = eax + 0x18;
    if (CMP_EQ(edx, ebx)) goto loc_002077EB; /* je: equal / zero */

loc_002077E7: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_002077EB: ;
    edi = MEM32(ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_002077F6: ;
    esi = ebp + 0x10;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_003CBF10(); /* call 0x003CBF10 */

loc_00207802: ;
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x40000000);
    ecx = esi;
    MEM16(ebp + 0xF8) = LO16(ebx);
    MEMF(ebp + 0xDC) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003CC2A0(); /* call 0x003CC2A0 */

loc_00207820: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(ebp + 0xF4) = 1;
    MEM32(ebp + 0xF0) = 2;
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    esp = esp + 4;
    MEMF(esi + 0xD8) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm2, MEMF(ebp + 0xE8) - sets EFLAGS */
    edx = MEM32(esi);
    MEMF(ebp + 0xDC) = xmm0; /* movss */
    xmm0 = MEMF(edx); /* movss */
    MEMF(ebp + 0x1CC) = xmm0; /* movss */
    if ((xmm2 > MEMF(ebp + 0xE8))) goto loc_00207886; /* ja: above (unsigned >) */

loc_0020786C: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    goto loc_0020788E;

loc_00207876: ;
    PUSH32(esp, 0); sub_001F0580(); /* call 0x001F0580 */

loc_0020787B: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_00207884: ;
    goto loc_002078C3;

loc_00207886: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_0020788E: ;
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

loc_002078C0: ;
    esp = esp + 8;

loc_002078C3: ;
    ebx = 0; /* xor self */
    POP32(esp, ebp);

loc_002078C6: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    eax = eax + eax * 4;
    ecx = MEM32(eax * 8 + 0x776F28);
    MEM32(0x6BD4B8) = 0x2C;
    MEM32(0x6BD92C) = ecx;
    goto loc_00207901;

loc_002078E9: ;
    (void)0; /* cmp MEM8(0x862C6C), LO8(ebx) - flags set for next jcc */
    MEM32(0x6BD4B8) = 1;
    if (CMP_NE(MEM8(0x862C6C), LO8(ebx))) goto loc_00207901; /* jne: not equal / not zero */

loc_002078FB: ;
    MEM32(0x6BD4B8) = ebx;

loc_00207901: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edi = 0xFFFF;
    (void)0; /* cmp MEM16(0x6BD4A4), LO16(edi) - flags set for next jcc */
    MEMF(0x7768F8) = xmm0; /* movss */
    MEM32(0x849910) = ebx;
    MEM32(0x849914) = ebx;
    MEMF(0x849908) = xmm0; /* movss */
    if (CMP_NE(MEM16(0x6BD4A4), LO16(edi))) goto loc_00207975; /* jne: not equal / not zero */

loc_0020792E: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 0x10);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ebx = MEM32(0x6BD4A0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00207950: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00207964; /* je: equal / zero */

loc_00207957: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00207964; /* je: equal / zero */

loc_0020795F: ;
    eax = MEM32(eax + 8);
    goto loc_00207966;

loc_00207964: ;
    eax = 0; /* xor self */

loc_00207966: ;
    MEM16(0x6BD4A4) = LO16(eax);
    MEM16(0x6BD4A6) = LO16(edi);
    ebx = 0; /* xor self */

loc_00207975: ;
    if (CMP_NE(MEM16(0x6BD4B0), LO16(edi))) goto loc_002079D2; /* jne: not equal / not zero */

loc_0020797E: ;
    esi = 0; /* xor self */

loc_00207980: ;
    eax = MEM32(0x849AA4);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(esi * 4 + 0x6BD4A8);
    eax = MEM32(eax + 0x10);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_002079A4: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_002079B8; /* je: equal / zero */

loc_002079AB: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_002079B8; /* je: equal / zero */

loc_002079B3: ;
    eax = MEM32(eax + 8);
    goto loc_002079BA;

loc_002079B8: ;
    eax = 0; /* xor self */

loc_002079BA: ;
    MEM16(esi * 2 + 0x6BD4B0) = LO16(eax);
    esi++;
    ebx = 0; /* xor self */
    if (CMP_L(esi, 2)) goto loc_00207980; /* jl: less (signed <) */

loc_002079CA: ;
    MEM16(esi * 2 + 0x6BD4B0) = LO16(edi);

loc_002079D2: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4949DF3);
    PUSH32(esp, 0); sub_00206470(); /* call 0x00206470 */

loc_002079E2: ;
    esp = esp + 0xC;
    MEM32(0x849AA8) = eax;
    MEM32(0x6BD4C8) = 5;
    POP32(esp, edi);

loc_002079F5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x118;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00207A00
 * Original: 0x00207A00 - 0x00207B64 (356 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00207A00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5F9228);
    PUSH32(esp, 0x4768CE5);
    PUSH32(esp, 0); sub_00206470(); /* call 0x00206470 */

loc_00207A16: ;
    edi = eax;
    esp = esp + 0xC;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(0x849AA4) = edi;
    if (TEST_Z(edi, edi)) goto loc_00207B61; /* je: equal / zero */

loc_00207A29: ;
    eax = MEM32(edi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00207A5C; /* je: equal / zero */

loc_00207A30: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00207A3A: ;
    if (TEST_Z(eax, eax)) goto loc_00207A5C; /* je: equal / zero */

loc_00207A3E: ;
    MEM32(eax + 0xF4) = 1;
    MEM16(eax + 0x1DA) = LO16(edx);
    MEM16(eax + 0x1D8) = LO16(edx);
    edi = MEM32(0x849AA4);

loc_00207A5C: ;
    eax = MEM32(edi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00207A7B; /* je: equal / zero */

loc_00207A63: ;
    PUSH32(esp, 0x40000000);
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036830(); /* call 0x00036830 */

loc_00207A72: ;
    edi = MEM32(0x849AA4);
    esp = esp + 4;

loc_00207A7B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0xFFFF;
    if (CMP_NE(MEM16(0x6BD4A4), LO16(esi))) goto loc_00207AD1; /* jne: not equal / not zero */

loc_00207A8B: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(0x6BD4A0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00207AA8: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00207ABC; /* je: equal / zero */

loc_00207AAF: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00207ABC; /* je: equal / zero */

loc_00207AB7: ;
    eax = MEM32(eax + 8);
    goto loc_00207ABE;

loc_00207ABC: ;
    eax = 0; /* xor self */

loc_00207ABE: ;
    edi = MEM32(0x849AA4);
    MEM16(0x6BD4A4) = LO16(eax);
    MEM16(0x6BD4A6) = LO16(esi);

loc_00207AD1: ;
    if (CMP_NE(MEM16(0x6BD4B0), LO16(esi))) goto loc_00207B3C; /* jne: not equal / not zero */

loc_00207ADA: ;
    esi = 0; /* xor self */
    goto loc_00207AF0;

loc_00207ADE: ;
    edi = MEM32(0x849AA4);
    goto loc_00207AF0;

    /* nop */
    /* nop */

loc_00207AF0: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x10);
    ebx = MEM32(esi * 4 + 0x6BD4A8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00207B0E: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00207B22; /* je: equal / zero */

loc_00207B15: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00207B22; /* je: equal / zero */

loc_00207B1D: ;
    eax = MEM32(eax + 8);
    goto loc_00207B24;

loc_00207B22: ;
    eax = 0; /* xor self */

loc_00207B24: ;
    MEM16(esi * 2 + 0x6BD4B0) = LO16(eax);
    esi++;
    if (CMP_L(esi, 2)) goto loc_00207ADE; /* jl: less (signed <) */

loc_00207B32: ;
    MEM16(esi * 2 + 0x6BD4B0) = 0xFFFF;

loc_00207B3C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4949DF3);
    PUSH32(esp, 0); sub_00206470(); /* call 0x00206470 */

loc_00207B4D: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    MEM32(0x849AA8) = eax;
    MEM32(0x6BD4C8) = 1;
    POP32(esp, ebx);

loc_00207B61: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00207B70
 * Original: 0x00207B70 - 0x00207BA4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207B70(void)
{

loc_00207B70: ;
    PUSH32(esp, ebx);
    MEM8(0x6BCFE8) = 0;
    PUSH32(esp, 0); sub_00204770(); /* call 0x00204770 */

loc_00207B7D: ;
    PUSH32(esp, 0x7767F0);
    PUSH32(esp, 0); sub_0021F9C0(); /* call 0x0021F9C0 */

loc_00207B87: ;
    esp = esp + 4;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00207B91: ;
    ebx = eax;
    PUSH32(esp, 0); sub_00232C10(); /* call 0x00232C10 */

loc_00207B98: ;
    eax = MEM32(0x7768C0);
    MEM32(0x84B868) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00207BB0
 * Original: 0x00207BB0 - 0x00207FAB (1019 bytes, 236 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6;

loc_00207BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x46 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_00207FA4; /* jne: not equal / not zero */

loc_00207BCC: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    xmm0 = xmm0 + MEMF(0x849AC4); /* addss */
    /* comiss xmm0, MEMF(0x648D1C) - sets EFLAGS */
    MEMF(0x849AC4) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D1C))) goto loc_00207BF4; /* jbe: below or equal (unsigned <=) */

loc_00207BED: ;
    MEM8(0x849AC8) = 0;

loc_00207BF4: ;
    eax = MEM32(0x849AA4);
    if (TEST_NZ(eax, eax)) goto loc_00207C02; /* jne: not equal / not zero */

loc_00207BFD: ;
    PUSH32(esp, 0); sub_00207550(); /* call 0x00207550 */

loc_00207C02: ;
    if (CMP_EQ(MEM32(0x6BD4B8), 0x16)) goto loc_00207FA4; /* je: equal / zero */

loc_00207C0F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_00207C26: ;
    eax = MEM32(0x849AA4);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_002066F0(); /* call 0x002066F0 */

loc_00207C40: ;
    PUSH32(esp, 0); sub_002080B0(); /* call 0x002080B0 */

loc_00207C45: ;
    PUSH32(esp, 0x7767F0);
    PUSH32(esp, 0); sub_00202250(); /* call 0x00202250 */

loc_00207C4F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00202C40(); /* call 0x00202C40 */

loc_00207C56: ;
    ecx = MEM32(0x849AA4);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    eax = eax << 6;
    eax = eax + ecx + 0x20;
    esp = esp + 8;
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 1);
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00207CCE: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00207CDD: ;
    edx = MEM32(0x849AA4);
    PUSH32(esp, edx);
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00206810(); /* call 0x00206810 */

loc_00207CF3: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(0x849AA4);
    PUSH32(esp, 0x5D5828);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00207D07: ;
    ecx = MEM32(0x849AA4);
    PUSH32(esp, ecx);
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_002085E0(); /* call 0x002085E0 */

loc_00207D17: ;
    xmm6 = 0.0f; /* xorps self = zero */
    edx = MEM32(0x7768C0);
    xmm3 = MEMF(0x648D14); /* movss */
    esp = esp + 0x10;
    MEM32(0x84B868) = edx;
    MEM8(0x8086C6) = 0;
    MEMF(0x80761C) = xmm6; /* movss */
    MEMF(0x807620) = xmm6; /* movss */
    MEMF(0x807624) = xmm6; /* movss */
    xmm5 = xmm6; /* movaps */
    xmm4 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003D3AA0(); /* call 0x003D3AA0 */

loc_00207D5B: ;
    xmm4 = MEMF(0x648D34); /* movss */
    xmm3 = xmm6; /* movaps */
    PUSH32(esp, 0); sub_003D3B30(); /* call 0x003D3B30 */

loc_00207D6B: ;
    SET_LO8(ebx, 0xFF);
    eax = 0; /* xor self */
    MEM8(0x807667) = LO8(ebx);
    PUSH32(esp, 0); sub_001F6230(); /* call 0x001F6230 */

loc_00207D7A: ;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00207D89: ;
    PUSH32(esp, 1);
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00207D9A: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00207DA6: ;
    eax = MEM32(0x84B868);
    esi = eax + 0x10;
    edx = 0; /* xor self */
    MEM32(0x549AF8) = edx;
    MEM8(0x807664) = LO8(ebx);
    MEM8(0x807665) = LO8(ebx);
    MEM8(0x807666) = LO8(ebx);
    ecx = 0x10;
    edi = esp + 0x50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    eax = MEM32(0x849AA4);
    ecx = ecx << 6;
    ecx = ecx + eax + 0x20;
    PUSH32(esp, ecx);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00207DF9: ;
    ecx = 0x10;
    esi = esp + 0x90;
    edi = 0x8072B0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00207E2A; /* jb: below (unsigned <) */

loc_00207E19: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00207E28: ;
    edx = 0; /* xor self */

loc_00207E2A: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = edx;
    if (CMP_NE(eax, 2)) goto loc_00207E87; /* jne: not equal / not zero */

loc_00207E58: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00207E5D: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00207E62: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00207E78; /* jb: below (unsigned <) */

loc_00207E69: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00207E78: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00207E80: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00207E85: ;
    MEM32(esi) = eax;

loc_00207E87: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00207E93: ;
    SET_LO8(eax, MEM8(0x849B3C));
    esi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x549AF8) = esi;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00207EC2; /* jne: not equal / not zero */

loc_00207EA4: ;
    eax = MEM32(0x849AAC);
    PUSH32(esp, 0); sub_001F30C0(); /* call 0x001F30C0 */

loc_00207EAE: ;
    eax = MEM32(0x849AB4);
    PUSH32(esp, 0); sub_0029BC20(); /* call 0x0029BC20 */

loc_00207EB8: ;
    xmm0 = MEMF(0x849B34); /* movss */
    goto loc_00207F00;

loc_00207EC2: ;
    ecx = MEM32(0x849AAC);
    edx = MEM32(0x849AB4);
    eax = SX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64925C); /* mulss */
    MEM32(0x849AB0) = ecx;
    MEM32(0x849AB8) = edx;
    MEMF(0x849B34) = xmm0; /* movss */
    MEMF(0x849B38) = xmm0; /* movss */
    MEM8(0x849B3C) = 0;

loc_00207F00: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00207F77; /* jnp: not parity */

loc_00207F0C: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00207F30; /* jbe: below or equal (unsigned <=) */

loc_00207F11: ;
    xmm0 = xmm0 - MEMF(0x59A8D8); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x849B34) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00207F54; /* jbe: below or equal (unsigned <=) */

loc_00207F26: ;
    MEMF(0x849B34) = xmm1; /* movss */
    goto loc_00207F5D;

loc_00207F30: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00207F54; /* jbe: below or equal (unsigned <=) */

loc_00207F35: ;
    xmm0 = xmm0 + MEMF(0x59A8D8); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(0x849B34) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00207F54; /* jbe: below or equal (unsigned <=) */

loc_00207F4A: ;
    MEMF(0x849B34) = xmm1; /* movss */
    goto loc_00207F5D;

loc_00207F54: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00207F77; /* jp: parity */

loc_00207F5D: ;
    eax = MEM32(0x849AB0);
    PUSH32(esp, 0); sub_001F30C0(); /* call 0x001F30C0 */

loc_00207F67: ;
    eax = MEM32(0x849AB8);
    PUSH32(esp, 0); sub_0029BC20(); /* call 0x0029BC20 */

loc_00207F71: ;
    MEM32(0x849AB0) = esi;

loc_00207F77: ;
    eax = MEM32(0x81B7C0);
    eax = eax & 0x80000000u;
    MEM32(0x849AAC) = esi;
    MEM32(0x849AB4) = esi;
    MEM32(0x84B830) = esi;
    MEM32(0x819FE0) = esi;
    MEM32(0x819FE4) = esi;
    MEM32(0x81B7C0) = eax;

loc_00207FA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00207FB0
 * Original: 0x00207FB0 - 0x00207FEF (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207FB0: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_00207FC0: ;
    PUSH32(esp, 0); sub_00207FF0(); /* call 0x00207FF0 */

loc_00207FC5: ;
    SET_LO8(eax, MEM8(0x849B80));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00207FEE; /* je: equal / zero */

loc_00207FCE: ;
    eax = MEM32(0x849ADC);
    PUSH32(esp, esi);
    esi = 1;
    if (CMP_EQ(eax, esi)) goto loc_00207FED; /* je: equal / zero */

loc_00207FDD: ;
    PUSH32(esp, 0); sub_00222D50(); /* call 0x00222D50 */

loc_00207FE2: ;
    PUSH32(esp, 0); sub_00207FF0(); /* call 0x00207FF0 */

loc_00207FE7: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00222D90(); return; /* tail jmp 0x00222D90 */

loc_00207FED: ;
    POP32(esp, esi);

loc_00207FEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00207FF0
 * Original: 0x00207FF0 - 0x0020804C (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207FF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00207FF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x849950;
    edi = 0; /* xor self */
    /* nop */

loc_00208000: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, edi)) goto loc_00208026; /* je: equal / zero */

loc_00208006: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00205FC0(); /* call 0x00205FC0 */

loc_0020800C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi) = edi;
    MEM32(esi + -4) = edi;
    esp = esp + 4;
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */

loc_00208026: ;
    esi = esi + 0x1C;
    if (CMP_L(esi, 0x849A84)) goto loc_00208000; /* jl: less (signed <) */

loc_00208031: ;
    MEM32(0x849A7C) = edi;
    MEM32(0x849A80) = edi;
    MEM32(0x849940) = edi;
    MEM32(0x849944) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00208050
 * Original: 0x00208050 - 0x00208067 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208050(void)
{
    int _flags = 0; /* fallback flag var */

loc_00208050: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    if (TEST_NZ(eax, eax)) { sub_00208067(); return; } /* jne: not equal / not zero */

loc_0020805C: ;
    MEM32(eax + 0x1EC) = 0x6BD4B0;
    esp += 4; return; /* ret */

}

/**
 * sub_002080B0
 * Original: 0x002080B0 - 0x002084F1 (1089 bytes, 249 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002080B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002080B0: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_002082BC; /* jne: not equal / not zero */

loc_002080BD: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x6BD4B8);
    if (CMP_EQ(ebp, 0x36)) goto loc_002082BB; /* je: equal / zero */

loc_002080CD: ;
    xmm7 = MEMF(0x7FA218); /* movss */
    SET_LO8(eax, MEM8(ebp * 8 + 0x6BD295));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 + MEMF(0x7768F8); /* addss */
    MEMF(0x7768F8) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00208142; /* je: equal / zero */

loc_002080F3: ;
    xmm0 = MEMF(0x7768F4); /* movss */
    xmm0 = xmm0 + MEMF(0x648EF4); /* addss */
    PUSH32(esp, 0x41600000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    ecx = 0x7768EC;
    edx = 0x7768F0;
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_00208125: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = MEMF(0x7768F0); /* movss */
    esp = esp + 0xC;
    edx = 1;
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_00208142: ;
    xmm1 = MEMF(0x7768E0); /* movss */
    /* ucomiss xmm1, MEMF(0x7768E4) - sets EFLAGS */
    xmm0 = MEMF(0x7768E8); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    MEMF(0x7768E8) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00208173; /* jnp: not parity */

loc_0020816E: ;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_002081A5; /* jbe: below or equal (unsigned <=) */

loc_00208173: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00208178: ;
    MEMF(0x7768E8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00208185: ;
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    xmm0 = xmm0 - MEMF(0x649788); /* subss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(0x7768E4) = xmm0; /* movss */

loc_002081A5: ;
    ecx = MEM32(0x7768E4);
    xmm0 = MEMF(0x7FA218); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = 0x7768DC;
    edx = 0x7768E0;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_002081D0: ;
    edx = MEM32(0x849AA4);
    esi = MEM32(edx + 0x10);
    xmm1 = MEMF(0x648D14); /* movss */
    edi = 0; /* xor self */
    esp = esp + 0xC;
    if (CMP_EQ(esi, edi)) goto loc_0020820D; /* je: equal / zero */

loc_002081EA: ;
    eax = esi + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002081F4: ;
    if (CMP_EQ(eax, edi)) goto loc_0020820D; /* je: equal / zero */

loc_002081F8: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0020820D; /* jp: parity */

loc_00208209: ;
    SET_LO8(ebx, 1);
    goto loc_0020820F;

loc_0020820D: ;
    SET_LO8(ebx, 0); /* xor self */

loc_0020820F: ;
    if (CMP_A(ebp, 0x29)) { sub_002084F1(); return; } /* ja: above (unsigned >) */

loc_00208218: ;
    eax = ZX8(MEM8(ebp + 0x2085A8));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x20856C)); return; /* indirect tail jmp */

    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002082B8; /* je: equal / zero */

loc_0020822E: ;
    PUSH32(esp, 0); sub_00208050(); /* call 0x00208050 */

loc_00208233: ;
    MEM32(0x6BD4B8) = 1;

loc_0020823D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x849910) = edi;
    MEM32(0x849914) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEMF(0x7768F8) = xmm0; /* movss */
    MEMF(0x849908) = xmm0; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    (void)0; /* cmp esi, edi - flags set for next jcc */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(0x7768F4) = xmm0; /* movss */
    if (CMP_EQ(esi, edi)) goto loc_00208292; /* je: equal / zero */

loc_00208279: ;
    eax = esi + 4;
    edx = 1;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00208286: ;
    if (CMP_EQ(eax, edi)) goto loc_00208292; /* je: equal / zero */

loc_0020828A: ;
    MEMF(eax + 0x1C8) = xmm1; /* movss */

loc_00208292: ;
    MEM32(0x6BD4B8) = 0xC;

loc_0020829C: ;
    MEMF(0x7768F8) = xmm7; /* movss */
    MEMF(0x849908) = xmm7; /* movss */
    MEM32(0x849910) = edi;
    MEM32(0x849914) = edi;

loc_002082B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002082BB: ;
    POP32(esp, ebp);

loc_002082BC: ;
    esp += 4; return; /* ret */

    if (CMP_EQ(esi, edi)) goto loc_002082F4; /* je: equal / zero */

loc_002082DB: ;
    eax = esi + 4;
    edx = 1;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002082E8: ;
    if (CMP_EQ(eax, edi)) goto loc_002082F4; /* je: equal / zero */

loc_002082EC: ;
    MEMF(eax + 0x1C8) = xmm7; /* movss */

loc_002082F4: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F91A8);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_00208310: ;
    esp = esp + 0x10;
    MEM32(0x6BD4B8) = 9;
    goto loc_0020823D;

    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002082B8; /* je: equal / zero */

loc_00208326: ;
    MEM32(0x6BD4B8) = 1;
    goto loc_0020829C;

    fp_push(MEMF(0x7768F0)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64909C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002082B8; /* jbe: below or equal (unsigned <=) */

loc_00208353: ;
    if (CMP_EQ(esi, edi)) goto loc_00208370; /* je: equal / zero */

loc_00208357: ;
    eax = esi + 4;
    edx = 1;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00208364: ;
    if (CMP_EQ(eax, edi)) goto loc_00208370; /* je: equal / zero */

loc_00208368: ;
    MEMF(eax + 0x1C8) = xmm7; /* movss */

loc_00208370: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F9168);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_0020838B: ;
    esp = esp + 0x10;
    MEM32(0x6BD4B8) = 0xE;
    goto loc_0020823D;

    fp_push(MEMF(0x7768F0)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64909C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002082B8; /* jbe: below or equal (unsigned <=) */

loc_002083BB: ;
    if (CMP_EQ(esi, edi)) goto loc_002083D8; /* je: equal / zero */

loc_002083BF: ;
    eax = esi + 4;
    edx = 1;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002083CC: ;
    if (CMP_EQ(eax, edi)) goto loc_002083D8; /* je: equal / zero */

loc_002083D0: ;
    MEMF(eax + 0x1C8) = xmm7; /* movss */

loc_002083D8: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F9168);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_002083F4: ;
    esp = esp + 0x10;
    MEM32(0x6BD4B8) = 0x12;
    goto loc_0020823D;

    fp_push(MEMF(0x7768F0)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64909C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002082B8; /* jbe: below or equal (unsigned <=) */

loc_00208424: ;
    MEM32(0x6BD4B8) = 5;
    goto loc_0020829C;

    fp_push(MEMF(0x7768F0)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64909C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002082B8; /* jbe: below or equal (unsigned <=) */

loc_00208451: ;
    MEM32(0x6BD4B8) = 0x17;
    goto loc_0020829C;

    fp_push(MEMF(0x7768F0)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64909C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002082B8; /* jbe: below or equal (unsigned <=) */

loc_0020847E: ;
    MEM32(0x6BD4B8) = 0x24;
    goto loc_0020829C;

    fp_push(MEMF(0x7768F0)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64909C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002082B8; /* jbe: below or equal (unsigned <=) */

loc_002084AB: ;
    MEM32(0x6BD4B8) = 0x28;
    goto loc_0020829C;

    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002082B8; /* je: equal / zero */

loc_002084C2: ;
    MEM32(0x6BD4B8) = 0x1C;
    goto loc_0020829C;

    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00207FB0(); return; /* tail jmp 0x00207FB0 */

    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002082B8; /* je: equal / zero */

loc_002084E2: ;
    MEM32(0x6BD4B8) = 0x1F;
    goto loc_0020829C;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002085E0
 * Original: 0x002085E0 - 0x00208A17 (1079 bytes, 342 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002085E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002085E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ebp;
    /* nop */

loc_002085F0: ;
    esi = MEM32(ebp * 4 + 0x7761E0);
    if (TEST_Z(esi, esi)) goto loc_002086F7; /* je: equal / zero */

loc_002085FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002B21B0(); /* call 0x002B21B0 */

loc_00208605: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002086F7; /* jne: not equal / not zero */

loc_00208610: ;
    edx = ZX8(MEM8(0x86E980));
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    /* nop */

loc_00208620: ;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    if (TEST_Z(edx, ebp)) goto loc_0020862C; /* je: equal / zero */

loc_0020862B: ;
    eax++;

loc_0020862C: ;
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(ecx, ebp)) goto loc_00208637; /* jne: not equal / not zero */

loc_00208634: ;
    ebx = eax + -1;

loc_00208637: ;
    ecx++;
    if (CMP_L(ecx, 2)) goto loc_00208620; /* jl: less (signed <) */

loc_0020863D: ;
    eax--;
    if ((eax == 0)) goto loc_002086A5; /* je: equal / zero */

loc_00208640: ;
    eax--;
    if ((eax != 0)) goto loc_002086F7; /* jne: not equal / not zero */

loc_00208647: ;
    if (TEST_NZ(ebx, ebx)) goto loc_00208678; /* jne: not equal / not zero */

loc_0020864B: ;
    xmm0 = MEMF(0x649B08); /* movss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x649438); /* movss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x649388); /* movss */
    MEM16(esi + 0x174) = 0xCC00;
    goto loc_002086EF;

loc_00208678: ;
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x649438); /* movss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x649388); /* movss */
    MEM16(esi + 0x174) = 0xB500;
    goto loc_002086EF;

loc_002086A5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO16(eax, MEM16(0x75E298));
    xmm1 = MEMF(0x875790); /* movss */
    MEMF(esi + 0x1C0) = xmm0; /* movss */
    MEM16(esi + 0x174) = LO16(eax);
    xmm0 = MEMF(0x7768E0); /* movss */
    xmm0 = xmm0 * MEMF(0x648FD8); /* mulss */
    xmm0 = xmm0 + MEMF(0x87578C); /* addss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x875788); /* movss */
    MEMF(esi + 0x78) = xmm1; /* movss */

loc_002086EF: ;
    MEMF(esi + 0x80) = xmm0; /* movss */

loc_002086F7: ;
    ebp++;
    (void)0; /* cmp ebp, 2 - flags set for next jcc */
    MEM32(esp + 0xC) = ebp;
    if (CMP_L(ebp, 2)) goto loc_002085F0; /* jl: less (signed <) */

loc_00208705: ;
    eax = MEM32(0x6BD4B8);
    eax--;
    if (CMP_A(eax, 0x34)) goto loc_00208A12; /* ja: above (unsigned >) */

loc_00208714: ;
    ecx = ZX8(MEM8(eax + 0x208A64));
    { uint32_t _jt = MEM32(ecx * 4 + 0x208A18); /* switch: 19 entries, 19 targets */
    if (_jt == 0x00208722u) goto loc_00208722;
    if (_jt == 0x00208762u) goto loc_00208762;
    if (_jt == 0x00208804u) goto loc_00208804;
    if (_jt == 0x00208821u) goto loc_00208821;
    if (_jt == 0x00208837u) goto loc_00208837;
    if (_jt == 0x00208849u) goto loc_00208849;
    if (_jt == 0x00208866u) goto loc_00208866;
    if (_jt == 0x002088B3u) goto loc_002088B3;
    if (_jt == 0x002088D4u) goto loc_002088D4;
    if (_jt == 0x0020892Eu) goto loc_0020892E;
    if (_jt == 0x00208981u) goto loc_00208981;
    if (_jt == 0x0020898Cu) goto loc_0020898C;
    if (_jt == 0x0020899Eu) goto loc_0020899E;
    if (_jt == 0x002089A9u) goto loc_002089A9;
    if (_jt == 0x002089BBu) goto loc_002089BB;
    if (_jt == 0x002089DCu) goto loc_002089DC;
    if (_jt == 0x002089E7u) goto loc_002089E7;
    if (_jt == 0x002089F2u) goto loc_002089F2;
    if (_jt == 0x00208A12u) goto loc_00208A12;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00208722: ;
    SET_LO8(eax, 0x32);
    PUSH32(esp, edi);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = 0xAF;
    MEM8(0x77616E) = 0xFF;
    PUSH32(esp, 0); sub_0020DC60(); /* call 0x0020DC60 */

loc_00208742: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002162C0(); /* call 0x002162C0 */

loc_0020874A: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020C870(); /* call 0x0020C870 */

loc_00208752: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002162C0(); /* call 0x002162C0 */

loc_0020875A: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00208762: ;
    SET_LO8(eax, MEM8(0x849B80));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002087CC; /* je: equal / zero */

loc_0020876B: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00222D50(); /* call 0x00222D50 */

loc_00208772: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020F030(); /* call 0x0020F030 */

loc_0020877A: ;
    esi = 1;
    PUSH32(esp, 0); sub_00222D50(); /* call 0x00222D50 */

loc_00208784: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020F030(); /* call 0x0020F030 */

loc_0020878C: ;
    PUSH32(esp, 0); sub_00222D90(); /* call 0x00222D90 */

loc_00208791: ;
    edx = MEM32(0x862CC0);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002221F0(); /* call 0x002221F0 */

loc_0020879E: ;
    eax = MEM32(0x862CC0);
    eax = ~eax;
    eax = eax & esi;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002221F0(); /* call 0x002221F0 */

loc_002087AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020DC60(); /* call 0x0020DC60 */

loc_002087B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002162C0(); /* call 0x002162C0 */

loc_002087BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020C870(); /* call 0x0020C870 */

loc_002087C4: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002087CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020F030(); /* call 0x0020F030 */

loc_002087D4: ;
    PUSH32(esp, 0); sub_00209E20(); /* call 0x00209E20 */

loc_002087D9: ;
    ecx = MEM32(0x862CC0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002221F0(); /* call 0x002221F0 */

loc_002087E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020DC60(); /* call 0x0020DC60 */

loc_002087ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002162C0(); /* call 0x002162C0 */

loc_002087F5: ;
    esp = esp + 0x1C;
    esi = edi;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_002087FF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00208804: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020DC60(); /* call 0x0020DC60 */

loc_0020880A: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002162C0(); /* call 0x002162C0 */

loc_00208812: ;
    esp = esp + 0xC;
    esi = edi;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_0020881C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00208821: ;
    esi = edi;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_00208828: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    MEM32(esp + 4) = edi;
    g_seh_ebp = ebp; sub_002108A0(); return; /* tail jmp 0x002108A0 */

loc_00208837: ;
    esi = edi;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_0020883E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00213200(); return; /* tail jmp 0x00213200 */

loc_00208849: ;
    esi = edi;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_00208850: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002162C0(); /* call 0x002162C0 */

loc_00208858: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00215930(); return; /* tail jmp 0x00215930 */

loc_00208866: ;
    xmm0 = MEMF(0x7768F4); /* movss */
    xmm1 = MEMF(0x75E294); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    PUSH32(esp, edi);
    MEMF(0x7768F4) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0020DC60(); /* call 0x0020DC60 */

loc_00208894: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002162C0(); /* call 0x002162C0 */

loc_0020889C: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_00215930(); /* call 0x00215930 */

loc_002088A4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    MEM32(esp + 4) = edi;
    g_seh_ebp = ebp; sub_00212610(); return; /* tail jmp 0x00212610 */

loc_002088B3: ;
    esi = edi;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_002088BA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002221F0(); /* call 0x002221F0 */

loc_002088C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002221F0(); /* call 0x002221F0 */

loc_002088CC: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002088D4: ;
    SET_LO8(eax, MEM8(0x849B80));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00208908; /* je: equal / zero */

loc_002088DD: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00222D50(); /* call 0x00222D50 */

loc_002088E4: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020F030(); /* call 0x0020F030 */

loc_002088EC: ;
    esi = 1;
    PUSH32(esp, 0); sub_00222D50(); /* call 0x00222D50 */

loc_002088F6: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020F030(); /* call 0x0020F030 */

loc_002088FE: ;
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_00222D90(); /* call 0x00222D90 */

loc_00208906: ;
    goto loc_00208918;

loc_00208908: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020F030(); /* call 0x0020F030 */

loc_00208910: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_00209E20(); /* call 0x00209E20 */

loc_00208918: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020DC60(); /* call 0x0020DC60 */

loc_0020891E: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002162C0(); /* call 0x002162C0 */

loc_00208926: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0020892E: ;
    SET_LO8(eax, MEM8(0x849B80));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0020896B; /* je: equal / zero */

loc_00208937: ;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00222D50(); /* call 0x00222D50 */

loc_0020893E: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020F030(); /* call 0x0020F030 */

loc_00208946: ;
    esi = 1;
    PUSH32(esp, 0); sub_00222D50(); /* call 0x00222D50 */

loc_00208950: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020F030(); /* call 0x0020F030 */

loc_00208958: ;
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_00222D90(); /* call 0x00222D90 */

loc_00208960: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00218F60(); return; /* tail jmp 0x00218F60 */

loc_0020896B: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0020F030(); /* call 0x0020F030 */

loc_00208973: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00218F60(); return; /* tail jmp 0x00218F60 */

loc_00208981: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0021D8E0(); return; /* tail jmp 0x0021D8E0 */

loc_0020898C: ;
    esi = edi;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_00208993: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0021B700(); return; /* tail jmp 0x0021B700 */

loc_0020899E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0021D810(); return; /* tail jmp 0x0021D810 */

loc_002089A9: ;
    esi = edi;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_002089B0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00221610(); return; /* tail jmp 0x00221610 */

loc_002089BB: ;
    esi = edi;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_002089C2: ;
    PUSH32(esp, 0); sub_00221100(); /* call 0x00221100 */

loc_002089C7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    MEM32(esp + 4) = 0x3F800000;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_00221340(); return; /* tail jmp 0x00221340 */

loc_002089DC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0021DCA0(); return; /* tail jmp 0x0021DCA0 */

loc_002089E7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00222AD0(); return; /* tail jmp 0x00222AD0 */

loc_002089F2: ;
    esi = edi;
    MEM32(0x8498DC) = 5;
    PUSH32(esp, 0); sub_00216DB0(); /* call 0x00216DB0 */

loc_00208A03: ;
    PUSH32(esp, 0); sub_00221ED0(); /* call 0x00221ED0 */

loc_00208A08: ;
    MEM32(0x8498DC) = 0;

loc_00208A12: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00208AA0
 * Original: 0x00208AA0 - 0x00208ADA (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208AA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(0x849AA4);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) { sub_00208ADA(); return; } /* je: equal / zero */

loc_00208AB3: ;
    eax = MEM32(esi + 0x10);
    if (CMP_NE(eax, ebx)) goto loc_00208AC2; /* jne: not equal / not zero */

loc_00208ABA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_00208AE0(); return; /* tail jmp 0x00208AE0 */

loc_00208AC2: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00208ACC: ;
    if (CMP_EQ(eax, ebx)) { sub_00208ADA(); return; } /* je: equal / zero */

loc_00208AD0: ;
    xmm1 = MEMF(eax + 0xDC); /* movss */
    g_seh_ebp = ebp; sub_00208ADD(); return; /* tail jmp 0x00208ADD */

}

/**
 * sub_00209DE0
 * Original: 0x00209DE0 - 0x00209E15 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00209DE0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F8F64);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00209DF2: ;
    esp = esp + 0x14;
    (void)0; /* cmp MEM16(esi), 0 - flags set for next jcc */
    eax = esi;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_00209E14; /* je: equal / zero */

loc_00209DFD: ;
    /* nop */

loc_00209E00: ;
    if (CMP_NE(MEM16(eax), 0x20)) goto loc_00209E0B; /* jne: not equal / not zero */

loc_00209E06: ;
    MEM16(eax) = 0x5F;

loc_00209E0B: ;
    eax = eax + 2;
    if (CMP_NE(MEM16(eax), 0)) goto loc_00209E00; /* jne: not equal / not zero */

loc_00209E14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00209E20
 * Original: 0x00209E20 - 0x0020C11C (8956 bytes, 1759 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209E20(void)
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

loc_00209E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x864;
    eax = MEM32(0x849A80);
    xmm0 = MEMF(0x7FA218); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x849A7C);
    PUSH32(esp, edi);
    edi = eax + esi;
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_00209EAE; /* je: equal / zero */

loc_00209E4B: ;
    SET_LO8(ecx, MEM8(0x77623C));
    if (TEST_Z(LO8(ecx), 2)) goto loc_00209E89; /* je: equal / zero */

loc_00209E56: ;
    ecx = MEM32(0x849940);
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    xmm1 = 0.0f; /* xorps self = zero */
    MEM32(0x849944) = ecx;
    MEMF(0x849908) = xmm1; /* movss */
    MEMF(0x875784) = xmm1; /* movss */
    MEM8(0x87BFD4) = LO8(ebx);
    MEM32(0x849940) = edx;
    goto loc_00209EBA;

loc_00209E89: ;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_00209EF3; /* jne: not equal / not zero */

loc_00209E8E: ;
    xmm1 = MEMF(0x875784); /* movss */
    /* comiss xmm1, MEMF(0x648D1C) - sets EFLAGS */
    if ((xmm1 > MEMF(0x648D1C))) goto loc_00209EF3; /* ja: above (unsigned >) */

loc_00209E9F: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(0x875784) = xmm2; /* movss */

loc_00209EAE: ;
    ecx = MEM32(0x849944);
    edx = MEM32(0x849940);

loc_00209EBA: ;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    if (CMP_EQ(ecx, edx)) goto loc_00209F59; /* je: equal / zero */

loc_00209ED0: ;
    xmm0 = xmm0 + MEMF(0x849908); /* addss */
    /* comiss xmm0, MEMF(0x648D40) - sets EFLAGS */
    MEMF(0x849908) = xmm0; /* movss */
    if ((xmm0 < MEMF(0x648D40))) goto loc_00209F30; /* jb: below (unsigned <) */

loc_00209EE9: ;
    ecx = edx;
    MEM32(0x849944) = ecx;
    goto loc_00209F59;

loc_00209EF3: ;
    edx = MEM32(0x849940);
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = edx;
    edx--;
    MEM32(0x849944) = ecx;
    MEMF(0x849908) = xmm1; /* movss */
    MEMF(0x875784) = xmm1; /* movss */
    MEM8(0x87BFD4) = 1;
    MEM32(0x849940) = edx;
    if (((int32_t)edx >= 0)) goto loc_00209EBA; /* jns: not sign (positive) */

loc_00209F24: ;
    eax = eax + esi;
    edx = edx + eax;
    MEM32(0x849940) = edx;
    goto loc_00209EBA;

loc_00209F30: ;
    xmm0 = xmm0 * MEMF(0x6497B8); /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_00209F4E; /* jbe: below or equal (unsigned <=) */

loc_00209F46: ;
    MEMF(esp + 0x28) = xmm2; /* movss */
    goto loc_00209F59;

loc_00209F4E: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00209F59; /* jbe: below or equal (unsigned <=) */

loc_00209F53: ;
    MEMF(esp + 0x28) = xmm1; /* movss */

loc_00209F59: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    if (CMP_NE(MEM32(edx + 0x849950), ebx)) goto loc_00209F73; /* jne: not equal / not zero */

loc_00209F64: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    if (CMP_EQ(MEM32(ecx + 0x849950), ebx)) goto loc_0020C115; /* je: equal / zero */

loc_00209F73: ;
    esi = 0; /* xor self */
    if (CMP_LE(edi, ebx)) goto loc_00209FA6; /* jle: less or equal (signed <=) */

loc_00209F79: ;
    edi = 0x849948;
    edi = edi;

loc_00209F80: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002062C0(); /* call 0x002062C0 */

loc_00209F86: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0020C115; /* je: equal / zero */

loc_00209F91: ;
    eax = MEM32(0x849A80);
    ecx = MEM32(0x849A7C);
    esi++;
    eax = eax + ecx;
    edi = edi + 0x1C;
    if (CMP_L(esi, eax)) goto loc_00209F80; /* jl: less (signed <) */

loc_00209FA6: ;
    esi = MEM32(0x5499E8);
    ecx = MEM32(esi + 0x1A04);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_00209FDE; /* je: equal / zero */

loc_00209FBA: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_00209FDC; /* jne: not equal / not zero */

loc_00209FC3: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00209FDC; /* jne: not equal / not zero */

loc_00209FCF: ;
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_00209FDC; /* je: equal / zero */

loc_00209FD6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_00209FDC: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00209FDE: ;
    ecx = MEM32(esi + 0x1A08);
    if (CMP_NE(ecx, ebx)) goto loc_00209FEE; /* jne: not equal / not zero */

loc_00209FE8: ;
    MEM32(esp + 0x1C) = ebx;
    goto loc_0020A016;

loc_00209FEE: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0020A010; /* jne: not equal / not zero */

loc_00209FF7: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0020A010; /* jne: not equal / not zero */

loc_0020A003: ;
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_0020A010; /* je: equal / zero */

loc_0020A00A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0020A010: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    MEM32(esp + 0x1C) = ecx;

loc_0020A016: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0020A03D; /* jne: not equal / not zero */

loc_0020A01F: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0020A03D: ;
    edi = MEM32(0x87A1AC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    edx = esp + 0x114;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM8(0x87A1BC) = 1;
    MEM32(esp + 0x120) = edi;
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_0020A078: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_0020A08B: ;
    edi = eax;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0020A0B4; /* jne: not equal / not zero */

loc_0020A096: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0020A0B4: ;
    eax = MEM32(0x87A1B8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM8(0x87A1BF) = 1;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0020A0CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_0020A0DE: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    if (CMP_NE(ecx, 1)) goto loc_0020A116; /* jne: not equal / not zero */

loc_0020A0ED: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0020A106; /* jne: not equal / not zero */

loc_0020A0F9: ;
    eax = MEM32(edi + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_0020A106; /* je: equal / zero */

loc_0020A100: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0020A106: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0x780000)) goto loc_0020A116; /* jne: not equal / not zero */

loc_0020A10F: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0020A114: ;
    goto loc_0020A119;

loc_0020A116: ;
    eax--;
    MEM32(edi) = eax;

loc_0020A119: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x776710);
    PUSH32(esp, 0); sub_00202870(); /* call 0x00202870 */

loc_0020A137: ;
    esi = MEM32(0x84B868);
    esp = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0020A146: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00218880(); /* call 0x00218880 */

loc_0020A156: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    esp = esp + 0xC;
    if (CMP_B(eax, ecx)) goto loc_0020A177; /* jb: below (unsigned <) */

loc_0020A168: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0020A177: ;
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
    if (CMP_NE(eax, 2)) goto loc_0020A1D4; /* jne: not equal / not zero */

loc_0020A1A5: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0020A1AA: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0020A1AF: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0020A1C5; /* jb: below (unsigned <) */

loc_0020A1B6: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0020A1C5: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0020A1CD: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0020A1D2: ;
    MEM32(esi) = eax;

loc_0020A1D4: ;
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FA00000);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0020A1E8: ;
    ecx = MEM32(0x849940);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    PUSH32(esp, 0x5F59F0);
    edx = esp + 0x10C;
    PUSH32(esp, edx);
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x84994C);
    PUSH32(esp, 0x7FFFFFFF);
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = LO8(ebx);
    MEM32(0x8076B0) = 1;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0020A234: ;
    esi = MEM32(0x5499E8);
    xmm0 = MEMF(0x7FA218); /* movss */
    xmm1 = MEMF(0x87BFD0); /* movss */
    edi = MEM32(esi + 0xF88);
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    esp = esp + 0x1C;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(0x87BFD0) = xmm1; /* movss */
    if (CMP_EQ(edi, ebx)) goto loc_0020A289; /* je: equal / zero */

loc_0020A26B: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + 0x2C);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi + 8) = edx;
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0020A289; /* jne: not equal / not zero */

loc_0020A284: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0020A289: ;
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esi + 0xF88) = ebx;
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0020A2A5; /* jb: below (unsigned <) */

loc_0020A296: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0020A2A5: ;
    edx = MEM32(0x5499F0);
    xmm0 = MEMF(0x64971C); /* movss */
    MEM32(eax) = 0x41B0C;
    MEM32(eax + 4) = ebx;
    MEM32(esi + 0xC) = 0x80000000u;
    eax = eax + 8;
    MEM32(esi) = eax;
    ecx = MEM32(0x8072F0);
    edx = edx | 0x4800;
    ecx--;
    MEM32(0x5499F0) = edx;
    MEM32(0x8072F0) = ecx;
    edx = 0x10101;
    ecx = 0x40358;
    MEM8(0x8086D5) = LO8(ebx);
    MEM32(0x8086E8) = ebx;
    MEMF(0x8076A4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020A304: ;
    eax = MEM32(0x849B1C);
    edx = MEM32(0x7767E0);
    eax--;
    PUSH32(esp, 0x776630);
    MEM32(0x549B04) = 0x10101;
    MEM32(0x849B1C) = eax;
    MEM32(0x84B868) = edx;
    PUSH32(esp, 0); sub_00202640(); /* call 0x00202640 */

loc_0020A32F: ;
    edx = MEM32(0x85D5B4);
    esi = MEM32(0x84B868);
    edi = edx;
    MEM32(edx + 0xE0) = ebx;
    eax = 0; /* xor self */
    ecx = 0x24;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edx + 0x338) = 1;
    esp = esp + 4;
    edx = 0x1010101;
    ecx = 0x40358;
    MEM8(0x8493C8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020A36C: ;
    PUSH32(esp, 1);
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0020A37D: ;
    edx = 0x1E01;
    ecx = 0x40378;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020A38C: ;
    edx = 0xFF;
    ecx = 0x40368;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020A3A5: ;
    edx = 0x207;
    ecx = 0x40364;
    MEM32(0x549B14) = 0xFF;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020A3BE: ;
    PUSH32(esp, ebx);
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00202C40(); /* call 0x00202C40 */

loc_0020A3CE: ;
    eax = MEM32(0x8471F0);
    xmm0 = MEMF(eax); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x25);
    MEMF(esp + 0x1EC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x1F4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = esp + 0x123;
    PUSH32(esp, eax);
    ecx = esp + 0x1F4;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x44DAC000);
    PUSH32(esp, 0x453B8000);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x214) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001265A0(); /* call 0x001265A0 */

loc_0020A427: ;
    edx = MEM32(0x5A02CC);
    MEM32(esp + 0x218) = edx;
    eax = MEM32(0x5A02D0);
    ecx = MEM32(0x5A02D4);
    xmm0 = MEMF(0x648E94); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    edx = esp + 0x220;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x22C) = eax;
    MEM32(esp + 0x230) = ecx;
    MEMF(esp + 0x234) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00130430(); /* call 0x00130430 */

loc_0020A46F: ;
    fp_push(MEMF(0x7FA218)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(0x7FA218); /* movss */
    xmm0 = xmm0 * MEMF(0x649124); /* mulss */
    xmm0 = xmm0 + MEMF(0x87577C); /* addss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp = esp + 0x48;
    PUSH32(esp, ecx);
    MEMF(0x875780) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, 0x78);
    fp_push(MEMF(0x875780)); /* fld float */
    ecx = esp + 0x294;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(0x84B828) = 0x822F0;
    MEMF(0x87577C) = xmm0; /* movss */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0020A4E6: ;
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x354;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0020A501: ;
    edx = MEM32(0x849940);
    xmm6 = 0.0f; /* xorps self = zero */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    xmm0 = MEMF(edx + 0x849960); /* movss */
    esp = esp + 4;
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0020A534; /* jp: parity */

loc_0020A521: ;
    eax = MEM32(edx + 0x849950);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    xmm2 = MEMF(eax + 0x1C); /* movss */
    goto loc_0020A53C;

loc_0020A534: ;
    xmm2 = MEMF(edx + 0x849960); /* movss */

loc_0020A53C: ;
    xmm1 = MEMF(0x5A0060); /* movss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    /* ucomiss xmm2, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm4 = xmm0; /* movaps */
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0020A6E5; /* jp: parity */

loc_0020A575: ;
    ecx = MEM32(edx + 0x849950);
    esi = (uint32_t)(int32_t)SMEM8(0x7FA230);
    esi = esi << 6;
    eax = esi + ecx + 0x20;
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - MEMF(edx + 0x84995C); /* subss */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 - MEMF(edx + 0x849958); /* subss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - MEMF(edx + 0x849954); /* subss */
    MEMF(eax + 0x2C) = xmm6; /* movss */
    MEMF(eax + 0x24) = xmm6; /* movss */
    MEMF(eax + 0x20) = xmm6; /* movss */
    MEMF(eax + 0x1C) = xmm6; /* movss */
    MEMF(eax + 0x18) = xmm6; /* movss */
    MEMF(eax + 0x10) = xmm6; /* movss */
    MEMF(eax + 0xC) = xmm6; /* movss */
    MEMF(eax + 8) = xmm6; /* movss */
    MEMF(eax + 4) = xmm6; /* movss */
    MEMF(eax + 0x3C) = xmm7; /* movss */
    MEMF(eax + 0x28) = xmm7; /* movss */
    MEMF(eax + 0x14) = xmm7; /* movss */
    MEMF(eax) = xmm7; /* movss */
    MEMF(eax + 0x30) = xmm3; /* movss */
    MEMF(eax + 0x34) = xmm2; /* movss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    eax = MEM32(edx + 0x849950);
    ecx = esp + 0x150;
    eax = esi + eax + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEMF(esp + 0x194) = xmm6; /* movss */
    MEMF(esp + 0x190) = xmm6; /* movss */
    MEMF(esp + 0x18C) = xmm6; /* movss */
    MEMF(esp + 0x188) = xmm6; /* movss */
    MEMF(esp + 0x180) = xmm6; /* movss */
    MEMF(esp + 0x17C) = xmm6; /* movss */
    MEMF(esp + 0x178) = xmm6; /* movss */
    MEMF(esp + 0x174) = xmm6; /* movss */
    MEMF(esp + 0x16C) = xmm6; /* movss */
    MEMF(esp + 0x168) = xmm6; /* movss */
    MEMF(esp + 0x164) = xmm6; /* movss */
    MEMF(esp + 0x160) = xmm6; /* movss */
    MEMF(esp + 0x15C) = xmm4; /* movss */
    MEMF(esp + 0x170) = xmm0; /* movss */
    MEMF(esp + 0x184) = xmm4; /* movss */
    MEMF(esp + 0x198) = xmm7; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020A6A2: ;
    eax = esp + 0x350;
    PUSH32(esp, eax);
    ecx = esp + 0x294;
    PUSH32(esp, ecx);
    eax = esp + 0x258;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020A6BF: ;
    ecx = MEM32(edx + 0x849950);
    eax = esi + ecx + 0x20;
    ecx = esp + 0x250;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020A6D8: ;
    xmm0 = MEMF(0x649EE8); /* movss */
    goto loc_0020AB14;

loc_0020A6E5: ;
    edx = MEM32(0x849944);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    xmm0 = MEMF(edx + 0x849960); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0020A712; /* jp: parity */

loc_0020A6FF: ;
    eax = MEM32(edx + 0x849950);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    xmm0 = MEMF(eax + 0x1C); /* movss */
    goto loc_0020A71A;

loc_0020A712: ;
    xmm0 = MEMF(edx + 0x849960); /* movss */

loc_0020A71A: ;
    (void)0; /* cmp MEM8(0x87BFD4), LO8(ebx) - flags set for next jcc */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = MEMF(0x649118); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm4 = xmm1; /* movaps */
    if (CMP_NE(MEM8(0x87BFD4), LO8(ebx))) goto loc_0020A73C; /* jne: not equal / not zero */

loc_0020A734: ;
    xmm0 = MEMF(0x6493C0); /* movss */

loc_0020A73C: ;
    ecx = MEM32(edx + 0x849950);
    esi = (uint32_t)(int32_t)SMEM8(0x7FA230);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    esi = esi << 6;
    eax = esi + ecx + 0x20;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(edx + 0x84995C); /* subss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - MEMF(edx + 0x849958); /* subss */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 - MEMF(edx + 0x849954); /* subss */
    MEMF(eax + 0x2C) = xmm6; /* movss */
    MEMF(eax + 0x24) = xmm6; /* movss */
    MEMF(eax + 0x20) = xmm6; /* movss */
    MEMF(eax + 0x1C) = xmm6; /* movss */
    MEMF(eax + 0x18) = xmm6; /* movss */
    MEMF(eax + 0x10) = xmm6; /* movss */
    MEMF(eax + 0xC) = xmm6; /* movss */
    MEMF(eax + 8) = xmm6; /* movss */
    MEMF(eax + 4) = xmm6; /* movss */
    MEMF(eax + 0x3C) = xmm7; /* movss */
    MEMF(eax + 0x28) = xmm7; /* movss */
    MEMF(eax + 0x14) = xmm7; /* movss */
    MEMF(eax) = xmm7; /* movss */
    MEMF(eax + 0x30) = xmm2; /* movss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    eax = MEM32(edx + 0x849950);
    ecx = esp + 0x150;
    eax = esi + eax + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEMF(esp + 0x194) = xmm6; /* movss */
    MEMF(esp + 0x190) = xmm6; /* movss */
    MEMF(esp + 0x18C) = xmm6; /* movss */
    MEMF(esp + 0x188) = xmm6; /* movss */
    MEMF(esp + 0x180) = xmm6; /* movss */
    MEMF(esp + 0x17C) = xmm6; /* movss */
    MEMF(esp + 0x178) = xmm6; /* movss */
    MEMF(esp + 0x174) = xmm6; /* movss */
    MEMF(esp + 0x16C) = xmm6; /* movss */
    MEMF(esp + 0x168) = xmm6; /* movss */
    MEMF(esp + 0x164) = xmm6; /* movss */
    MEMF(esp + 0x160) = xmm6; /* movss */
    MEMF(esp + 0x15C) = xmm3; /* movss */
    MEMF(esp + 0x170) = xmm4; /* movss */
    MEMF(esp + 0x184) = xmm3; /* movss */
    MEMF(esp + 0x198) = xmm7; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020A879: ;
    eax = esp + 0x350;
    PUSH32(esp, eax);
    ecx = esp + 0x294;
    PUSH32(esp, ecx);
    eax = esp + 0x258;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020A896: ;
    ecx = MEM32(edx + 0x849950);
    eax = esi + ecx + 0x20;
    ecx = esp + 0x250;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020A8AF: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x13C) = xmm6; /* movss */
    MEMF(esp + 0x134) = xmm6; /* movss */
    MEMF(esp + 0x130) = xmm6; /* movss */
    MEMF(esp + 0x12C) = xmm6; /* movss */
    MEMF(esp + 0x128) = xmm6; /* movss */
    MEMF(esp + 0x120) = xmm6; /* movss */
    MEMF(esp + 0x11C) = xmm6; /* movss */
    MEMF(esp + 0x118) = xmm6; /* movss */
    MEMF(esp + 0x114) = xmm6; /* movss */
    MEMF(esp + 0x14C) = xmm7; /* movss */
    MEMF(esp + 0x138) = xmm7; /* movss */
    MEMF(esp + 0x124) = xmm7; /* movss */
    MEMF(esp + 0x110) = xmm7; /* movss */
    MEMF(esp + 0x140) = xmm6; /* movss */
    eax = MEM32(edx + 0x849950);
    xmm0 = xmm0 + MEMF(0x649EE8); /* addss */
    ecx = esp + 0x110;
    esi = esi + eax + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0x14C) = xmm0; /* movss */
    xmm0 = MEMF(0x6491E4); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x154) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020A96E: ;
    edx = MEM32(edx + 0x849950);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00206810(); /* call 0x00206810 */

loc_0020A97A: ;
    xmm6 = 0.0f; /* xorps self = zero */
    edx = MEM32(0x849940);
    esi = (uint32_t)(int32_t)SMEM8(0x7FA230);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = MEM32(edx + 0x849950);
    xmm7 = MEMF(0x648D14); /* movss */
    esi = esi << 6;
    eax = esi + eax + 0x20;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(edx + 0x84995C); /* subss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - MEMF(edx + 0x849958); /* subss */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 - MEMF(edx + 0x849954); /* subss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0x2C) = xmm6; /* movss */
    MEMF(eax + 0x24) = xmm6; /* movss */
    MEMF(eax + 0x20) = xmm6; /* movss */
    MEMF(eax + 0x1C) = xmm6; /* movss */
    MEMF(eax + 0x18) = xmm6; /* movss */
    MEMF(eax + 0x10) = xmm6; /* movss */
    MEMF(eax + 0xC) = xmm6; /* movss */
    MEMF(eax + 8) = xmm6; /* movss */
    MEMF(eax + 4) = xmm6; /* movss */
    MEMF(eax + 0x3C) = xmm7; /* movss */
    MEMF(eax + 0x28) = xmm7; /* movss */
    MEMF(eax + 0x14) = xmm7; /* movss */
    MEMF(eax) = xmm7; /* movss */
    MEMF(eax + 0x30) = xmm2; /* movss */
    ecx = MEM32(edx + 0x849950);
    eax = esi + ecx + 0x20;
    esp = esp + 4;
    ecx = esp + 0x150;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEMF(esp + 0x194) = xmm6; /* movss */
    MEMF(esp + 0x190) = xmm6; /* movss */
    MEMF(esp + 0x18C) = xmm6; /* movss */
    MEMF(esp + 0x188) = xmm6; /* movss */
    MEMF(esp + 0x180) = xmm6; /* movss */
    MEMF(esp + 0x17C) = xmm6; /* movss */
    MEMF(esp + 0x178) = xmm6; /* movss */
    MEMF(esp + 0x174) = xmm6; /* movss */
    MEMF(esp + 0x16C) = xmm6; /* movss */
    MEMF(esp + 0x168) = xmm6; /* movss */
    MEMF(esp + 0x164) = xmm6; /* movss */
    MEMF(esp + 0x160) = xmm6; /* movss */
    MEMF(esp + 0x15C) = xmm0; /* movss */
    MEMF(esp + 0x170) = xmm1; /* movss */
    MEMF(esp + 0x184) = xmm0; /* movss */
    MEMF(esp + 0x198) = xmm7; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020AACA: ;
    eax = esp + 0x350;
    PUSH32(esp, eax);
    ecx = esp + 0x294;
    PUSH32(esp, ecx);
    eax = esp + 0x258;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020AAE7: ;
    ecx = MEM32(edx + 0x849950);
    eax = esi + ecx + 0x20;
    ecx = esp + 0x250;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020AB00: ;
    xmm0 = MEMF(0x649EE8); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */

loc_0020AB14: ;
    eax = MEM32(edx + 0x849950);
    ecx = esp + 0x110;
    eax = esi + eax + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEMF(esp + 0x14C) = xmm0; /* movss */
    xmm0 = MEMF(0x6491E4); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x148) = xmm6; /* movss */
    MEMF(esp + 0x154) = xmm0; /* movss */
    MEMF(esp + 0x14C) = xmm6; /* movss */
    MEMF(esp + 0x11C) = xmm7; /* movss */
    MEMF(esp + 0x130) = xmm7; /* movss */
    MEMF(esp + 0x144) = xmm7; /* movss */
    MEMF(esp + 0x158) = xmm7; /* movss */
    MEMF(esp + 0x120) = xmm6; /* movss */
    MEMF(esp + 0x124) = xmm6; /* movss */
    MEMF(esp + 0x128) = xmm6; /* movss */
    MEMF(esp + 0x12C) = xmm6; /* movss */
    MEMF(esp + 0x134) = xmm6; /* movss */
    MEMF(esp + 0x138) = xmm6; /* movss */
    MEMF(esp + 0x13C) = xmm6; /* movss */
    MEMF(esp + 0x140) = xmm6; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0020ABC5: ;
    edx = MEM32(edx + 0x849950);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00206810(); /* call 0x00206810 */

loc_0020ABD1: ;
    eax = MEM32(0x6B842C);
    esp = esp + 4;
    PUSH32(esp, eax);
    MEM32(0x84B828) = ebx;
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0020ABE5: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0020ABEC: ;
    esi = MEM32(0x5499E8);
    edi = MEM32(esi + 0xF88);
    if (CMP_EQ(edi, ebx)) goto loc_0020AC1A; /* je: equal / zero */

loc_0020ABFC: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0020AC1A; /* jne: not equal / not zero */

loc_0020AC15: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0020AC1A: ;
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esi + 0xF88) = ebx;
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0020AC36; /* jb: below (unsigned <) */

loc_0020AC27: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0020AC36: ;
    ecx = MEM32(0x5499F0);
    MEM32(eax) = 0x41B0C;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = 0x80000000u;
    esi = MEM32(0x5499E8);
    edi = MEM32(esi + 0xF8C);
    ecx = ecx | 0x4800;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(0x5499F0) = ecx;
    if (CMP_EQ(edi, ebx)) goto loc_0020AC8B; /* je: equal / zero */

loc_0020AC6D: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    MEM32(edi + 8) = eax;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0020AC8B; /* jne: not equal / not zero */

loc_0020AC86: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0020AC8B: ;
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esi + 0xF8C) = ebx;
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0020ACA7; /* jb: below (unsigned <) */

loc_0020AC98: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0020ACA7: ;
    ecx = MEM32(0x5499F0);
    MEM32(eax) = 0x41B4C;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(esi + 0x10) = 0x80000000u;
    ecx = ecx | 0x4800;
    esi = 2;
    PUSH32(esp, ebx);
    eax = esi;
    MEM32(0x5499F0) = ecx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020ACDB: ;
    PUSH32(esp, ebx);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020ACE6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0020ACEC: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020ACF8: ;
    PUSH32(esp, ebx);
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0020AD04: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020AD10: ;
    edi = 1;
    PUSH32(esp, edi);
    MEM32(0x549AF8) = ebx;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0020AD21: ;
    edx = 0x1E00;
    ecx = 0x40378;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020AD30: ;
    edx = 0; /* xor self */
    ecx = 0x40368;
    MEM32(0x549B0C) = 0x1E00;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020AD46: ;
    edx = 0x201;
    ecx = 0x40364;
    MEM32(0x549B14) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020AD5B: ;
    edx = edi;
    ecx = 0x40304;
    MEM32(0x549B10) = 0x201;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020AD71: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AE4) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020AD86: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020AD9F: ;
    edx = 0x1000000;
    ecx = 0x40358;
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020ADB8: ;
    xmm1 = 0.0f; /* xorps self = zero */
    MEM32(0x547360) = esi;
    MEM32(0x547370) = esi;
    MEM32(0x547340) = esi;
    MEM32(0x54733C) = esi;
    esi = MEM32(0x5499F0);
    eax = 3;
    esi = esi | 0x801;
    MEM32(0x549B04) = 0x1000000;
    MEM32(0x547368) = ebx;
    MEM32(0x54736C) = ebx;
    MEM32(0x547378) = ebx;
    MEM32(0x54737C) = ebx;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x5473E0) = edi;
    MEM32(0x5473E8) = ebx;
    MEM32(0x5473EC) = ebx;
    MEM32(0x5473F0) = edi;
    MEM32(0x5473F8) = ebx;
    MEM32(0x5499F0) = esi;
    MEM32(0x5473FC) = ebx;
    MEMF(esp + 0x1F0) = xmm1; /* movss */
    MEMF(esp + 0x1F4) = xmm1; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x648E8C); /* movss */
    PUSH32(esp, 0x18);
    edx = esp + 0x1F4;
    PUSH32(esp, edx);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    MEMF(esp + 0x208) = xmm0; /* movss */
    MEMF(esp + 0x218) = xmm2; /* movss */
    MEMF(esp + 0x21C) = xmm1; /* movss */
    MEMF(esp + 0x220) = xmm0; /* movss */
    MEMF(esp + 0x230) = xmm2; /* movss */
    MEMF(esp + 0x234) = xmm2; /* movss */
    MEMF(esp + 0x238) = xmm0; /* movss */
    MEMF(esp + 0x248) = xmm1; /* movss */
    MEMF(esp + 0x24C) = xmm2; /* movss */
    MEMF(esp + 0x250) = xmm0; /* movss */
    MEM32(esp + 0x254) = eax;
    MEM32(esp + 0x23C) = eax;
    MEM32(esp + 0x224) = eax;
    MEM32(esp + 0x20C) = eax;
    MEMF(esp + 0x210) = xmm1; /* movss */
    MEMF(esp + 0x214) = xmm1; /* movss */
    MEMF(esp + 0x228) = xmm0; /* movss */
    MEMF(esp + 0x22C) = xmm1; /* movss */
    MEMF(esp + 0x240) = xmm0; /* movss */
    MEMF(esp + 0x244) = xmm0; /* movss */
    MEMF(esp + 0x258) = xmm1; /* movss */
    MEMF(esp + 0x25C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0020AF30: ;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020AF3F: ;
    PUSH32(esp, ebx);
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0020AF4F: ;
    edi = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0020AF5E: ;
    if (CMP_EQ(esi, ebx)) goto loc_0020AF68; /* je: equal / zero */

loc_0020AF62: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0020AF68: ;
    if (CMP_EQ(edi, ebx)) goto loc_0020AF72; /* je: equal / zero */

loc_0020AF6C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0020AF72: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020AF77: ;
    edx = MEM32(esp + 0x100);
    ecx = 0; /* xor self */

loc_0020AF80: ;
    if (CMP_EQ(edx, MEM32(eax + ecx * 4))) goto loc_0020AF8D; /* je: equal / zero */

loc_0020AF85: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_0020AF80; /* jl: less (signed <) */

loc_0020AF8B: ;
    goto loc_0020AF91;

loc_0020AF8D: ;
    MEM8(ecx + eax + 0x10) = LO8(ebx);

loc_0020AF91: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020AF96: ;
    edx = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    /* nop */

loc_0020AFA0: ;
    if (CMP_EQ(edx, MEM32(eax + ecx * 4))) goto loc_0020AFAD; /* je: equal / zero */

loc_0020AFA5: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_0020AFA0; /* jl: less (signed <) */

loc_0020AFAB: ;
    goto loc_0020AFB1;

loc_0020AFAD: ;
    MEM8(eax + ecx + 0x10) = LO8(ebx);

loc_0020AFB1: ;
    eax = MEM32(0x776700);
    PUSH32(esp, 0x7767F0);
    MEM32(0x84B868) = eax;
    PUSH32(esp, 0); sub_00202250(); /* call 0x00202250 */

loc_0020AFC5: ;
    ecx = MEM32(0x6B8314);
    esi = MEM32(0x84B868);
    esp = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0020AFDE: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0020AFE5: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020AFEA: ;
    MEM8(eax + 0x10) = 1;
    eax = MEM32(eax);
    MEM32(esp + 0x100) = eax;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020AFFF: ;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    eax = 0xFF;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0020B00C: ;
    ecx = eax;
    eax = 1;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0020B018: ;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    eax = 0x11B;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0020B025: ;
    ecx = eax;
    eax = 2;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0020B031: ;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    eax = 0x142;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0020B03E: ;
    ecx = eax;
    eax = 3;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0020B04A: ;
    edx = esp + 0x2DC;
    eax = edx;
    PUSH32(esp, edx);
    esi = esi + 0x10;
    ecx = 0x10;
    edi = esp + 0x2E0;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_0020B06B: ;
    esp = esp + 0x14;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0020B078: ;
    esi = MEM32(esp + 0x18);
    esi = esi + 0x90;
    ecx = 0x10;
    edi = esp + 0x310;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x310;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_0020B0A0: ;
    esp = esp + 8;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0020B0AD: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0020B0B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0020B0BD: ;
    esi = 1;
    edx = esi;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B0CE: ;
    edx = esi;
    ecx = 0x40340;
    MEM32(0x549AE8) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B0E0: ;
    PUSH32(esp, ebx);
    MEM32(0x549AEC) = esi;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0020B0EC: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B0FB: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B111: ;
    PUSH32(esp, esi);
    MEM32(0x549AF8) = ebx;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0020B11D: ;
    edx = 0x1E01;
    ecx = 0x40378;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B12C: ;
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, MEMF(0x87576C) - sets EFLAGS */
    MEM32(0x549B0C) = 0x1E01;
    if ((xmm7 >= MEMF(0x87576C))) goto loc_0020B157; /* jae: above or equal (unsigned >=) */

loc_0020B142: ;
    xmm0 = MEMF(0x875778); /* movss */
    /* ucomiss xmm0, MEMF(0x875774) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0020B189; /* jp: parity */

loc_0020B157: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020B15C: ;
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    MEMF(0x875774) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020B179: ;
    xmm0 = xmm0 + MEMF(0x648E14); /* addss */
    MEMF(0x87576C) = xmm0; /* movss */

loc_0020B189: ;
    eax = MEM32(0x875774);
    xmm0 = MEMF(0x7FA218); /* movss */
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = 0x875770;
    edx = 0x875778;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0020B1B0: ;
    esp = esp + 0xC;
    edx = 0; /* xor self */
    ecx = 0x40368;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B1BF: ;
    edx = 0x207;
    ecx = 0x40364;
    MEM32(0x549B14) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B1D4: ;
    edi = 2;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = 4;
    eax = 0; /* xor self */
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0020B1F5: ;
    PUSH32(esp, edi);
    esi = 1;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0020B209: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = edi;
    eax = edi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0020B218: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = edi;
    eax = 3;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0020B22A: ;
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x5473B0) = eax;
    MEM32(0x5473B4) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0xF;
    esp = esp + 0x50;
    edx = esi;
    ecx = 0x40304;
    MEM32(0x547340) = edi;
    MEM32(0x54733C) = edi;
    MEM32(0x5473C0) = edi;
    MEM32(0x5473BC) = edi;
    MEM32(0x547430) = esi;
    MEM32(0x547434) = esi;
    MEM32(0x547440) = esi;
    MEM32(0x54743C) = esi;
    MEM32(0x5474B0) = esi;
    MEM32(0x5474B4) = esi;
    MEM32(0x5474C0) = edi;
    MEM32(0x5499F0) = eax;
    MEM32(0x5474BC) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B2A7: ;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549AE4) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B2BC: ;
    MEM32(0x549B20) = 0x8006;
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B2D5: ;
    edx = esi;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020B2EB: ;
    xmm1 = MEMF(0x7FA218); /* movss */
    xmm1 = xmm1 * MEMF(0x6492E8); /* mulss */
    xmm0 = MEMF(0x75E290); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D34); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(0x549AF4) = esi;
    MEMF(0x75E290) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0020B332; /* jbe: below or equal (unsigned <=) */

loc_0020B322: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x75E290) = xmm0; /* movss */

loc_0020B332: ;
    xmm1 = MEMF(0x649244); /* movss */
    xmm0 = MEMF(0x6BD4D0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0020B37D; /* jbe: below or equal (unsigned <=) */

loc_0020B347: ;
    xmm0 = xmm0 * MEMF(0x648E2C); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(0x6BD4D0) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0020B364; /* jbe: below or equal (unsigned <=) */

loc_0020B35C: ;
    MEMF(0x6BD4D0) = xmm1; /* movss */

loc_0020B364: ;
    eax = MEM32(0x5499F0);
    eax = eax | 4;
    MEM32(0x547440) = edi;
    MEM32(0x5499F0) = eax;
    MEM32(0x54743C) = edi;

loc_0020B37D: ;
    xmm1 = MEMF(0x7768E0); /* movss */
    xmm1 = xmm1 * MEMF(0x648CE4); /* mulss */
    xmm4 = MEMF(0x6493C0); /* movss */
    xmm2 = MEMF(0x64B22C); /* movss */
    xmm3 = MEMF(0x649118); /* movss */
    eax = MEM32(0x849AA4);
    ecx = esp + 0x390;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, ecx);
    xmm1 = xmm1 + xmm4; /* addss */
    xmm0 = xmm0 - xmm4; /* subss */
    PUSH32(esp, 0x5F9A48);
    MEMF(esp + 0x1A0) = xmm2; /* movss */
    MEMF(esp + 0x1A4) = xmm1; /* movss */
    MEMF(esp + 0x1A8) = xmm7; /* movss */
    MEMF(esp + 0x1AC) = xmm3; /* movss */
    MEMF(esp + 0x1B0) = xmm1; /* movss */
    MEMF(esp + 0x1B4) = xmm7; /* movss */
    MEMF(esp + 0x1B8) = xmm3; /* movss */
    MEMF(esp + 0x1BC) = xmm0; /* movss */
    MEMF(esp + 0x1C0) = xmm7; /* movss */
    MEMF(esp + 0x1C4) = xmm2; /* movss */
    MEMF(esp + 0x1C8) = xmm0; /* movss */
    MEMF(esp + 0x1CC) = xmm7; /* movss */
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_0020B43A: ;
    esp = esp + 8;
    edx = esp + 0x390;
    PUSH32(esp, edx);
    eax = esp + 0x19C;
    PUSH32(esp, eax);
    ecx = esp + 0xF8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0020B45A: ;
    esi = esp + 0x198;
    MEM32(esp + 0x10) = 4;
    /* nop */

loc_0020B470: ;
    edx = esp + 0x390;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0020B47F: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 0xC;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0020B470; /* jne: not equal / not zero */

loc_0020B48D: ;
    xmm0 = MEMF(esp + 0x1A4); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x198); /* subss */
    xmm5 = MEMF(0x875768); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm5 - sets EFLAGS */
    MEMF(esp + 0x10C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C0); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x19C); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1AC); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x1A0); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm7 < xmm5)) goto loc_0020B542; /* jb: below (unsigned <) */

loc_0020B4E8: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020B4ED: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 + MEMF(0x648D14); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020B505: ;
    xmm6 = MEMF(0x648D3C); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - MEMF(0x648EB0); /* subss */
    MEMF(0x875764) = xmm0; /* movss */
    MEMF(0x875760) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020B52E: ;
    xmm0 = xmm0 * MEMF(0x648D40); /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(0x87575C) = xmm0; /* movss */

loc_0020B542: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40800000);
    xmm5 = xmm5 - xmm0; /* subss */
    PUSH32(esp, ebx);
    ecx = 0x875760;
    edx = 0x875764;
    MEMF(0x875768) = xmm5; /* movss */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0020B570: ;
    xmm0 = MEMF(0x875764); /* movss */
    esp = esp + 0xC;
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0020B7B8; /* jp: parity */

loc_0020B588: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0020B58D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    xmm0 = MEMF(esp + 0x198); /* movss */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm2 = MEMF(0x6BD4D0); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x19C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1A0); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1A4); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1A8); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1AC); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1B0); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1B4); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1B8); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1BC); /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C0); /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C4); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    edx = edx + 0x7D;
    edx = edx << 0x18;
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm1 = MEMF(0x75E290); /* movss */
    eax = edx;
    eax = eax | 0xFFFFFF;
    MEMF(esp + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x40) = xmm7; /* movss */
    MEMF(esp + 0x44) = xmm7; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm7; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xD0) = xmm7; /* movss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm7; /* movss */
    MEMF(esp + 0x4C) = xmm7; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm7; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xD8) = xmm7; /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm7; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm2; /* movss */
    MEMF(esp + 0xE0) = xmm7; /* movss */
    MEMF(esp + 0xE4) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm7; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm1; /* movss */
    MEMF(esp + 0xE8) = xmm7; /* movss */
    MEMF(esp + 0xEC) = xmm1; /* movss */
    /* nop */

loc_0020B7A0: ;
    PUSH32(esp, 0x30);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0020B7B0: ;
    edi--;
    if ((edi != 0)) goto loc_0020B7A0; /* jne: not equal / not zero */

loc_0020B7B3: ;
    goto loc_0020BF43;

loc_0020B7B8: ;
    xmm4 = MEMF(esp + 0x10); /* movss */
    xmm0 = MEMF(0x87575C); /* movss */
    xmm0 = xmm0 - MEMF(0x648E54); /* subss */
    xmm3 = MEMF(esp + 0xF4); /* movss */
    xmm6 = MEMF(esp + 0x10C); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm5 = xmm6; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0xF0); /* movss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = xmm4; /* movaps */
    MEMF(esp + 0x1C8) = xmm5; /* movss */
    xmm3 = xmm3 + xmm5; /* addss */
    xmm5 = xmm6; /* movaps */
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm4 = xmm4 + xmm5; /* addss */
    MEMF(esp + 0x1D0) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0xF8); /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm4 = xmm5; /* movaps */
    MEMF(esp + 0x108) = xmm6; /* movss */
    xmm4 = xmm4 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0xFC) = xmm6; /* movss */
    xmm5 = xmm5 + xmm6; /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0020B86D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm6 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x94) = xmm2; /* movss */
    MEMF(esp + 0xC0) = xmm3; /* movss */
    xmm3 = MEMF(0x6BD4D0); /* movss */
    MEMF(esp + 0xC4) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm7; /* mulss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    MEMF(esp + 0x60) = xmm6; /* movss */
    MEMF(esp + 0x68) = xmm5; /* movss */
    MEMF(esp + 0x90) = xmm6; /* movss */
    MEMF(esp + 0x98) = xmm5; /* movss */
    MEMF(esp + 0xC8) = xmm4; /* movss */
    MEMF(esp + 0x40) = xmm7; /* movss */
    MEMF(esp + 0x44) = xmm7; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm7; /* movss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xD0) = xmm7; /* movss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm7; /* movss */
    edx = edx + 0x7D;
    edx = edx << 0x18;
    eax = edx;
    eax = eax | 0xFFFFFF;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x4C) = xmm7; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm7; /* movss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xD8) = xmm7; /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm7; /* movss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(esp + 0xB4) = xmm2; /* movss */
    MEMF(esp + 0xE4) = xmm2; /* movss */
    xmm2 = MEMF(0x75E290); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0xE0) = xmm7; /* movss */
    MEMF(esp + 0x58) = xmm7; /* movss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm2; /* movss */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0xE8) = xmm7; /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */
    edi = edi;

loc_0020BA20: ;
    PUSH32(esp, 0x30);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0020BA30: ;
    edi--;
    if ((edi != 0)) goto loc_0020BA20; /* jne: not equal / not zero */

loc_0020BA33: ;
    xmm2 = 0.0f; /* xorps self = zero */
    edi = 0; /* xor self */
    xmm6 = xmm2; /* movaps */
    goto loc_0020BA40;

loc_0020BA3D: ;
    xmm2 = 0.0f; /* xorps self = zero */

loc_0020BA40: ;
    xmm6 = xmm6 * MEMF(0x648F94); /* mulss */
    xmm6 = xmm6 * MEMF(0x875764); /* mulss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm7 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(0x648E54); /* addss */
    xmm3 = xmm1; /* movaps */
    xmm1 = MEMF(esp + 0xF4); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm6 = xmm6 + xmm1; /* addss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x10C); /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0xF0); /* addss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x20); /* movss */
    xmm6 = xmm6 * MEMF(esp + 0x10C); /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0xF0); /* addss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x14); /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0xF8); /* addss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x20); /* movss */
    xmm6 = xmm6 * MEMF(esp + 0x14); /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0xF8); /* addss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x1CC) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0020BB18: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm7 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x30) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    MEMF(esp + 0x64) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x38) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0xC0) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x60) = xmm7; /* movss */
    MEMF(esp + 0x68) = xmm6; /* movss */
    MEMF(esp + 0x90) = xmm7; /* movss */
    MEMF(esp + 0x94) = xmm5; /* movss */
    MEMF(esp + 0x98) = xmm6; /* movss */
    MEMF(esp + 0xC4) = xmm5; /* movss */
    MEMF(esp + 0xC8) = xmm4; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    MEMF(esp + 0xA4) = xmm3; /* movss */
    MEMF(esp + 0xD0) = xmm2; /* movss */
    MEMF(esp + 0xD4) = xmm3; /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    edx = edx + 0x7D;
    edx = edx << 0x18;
    eax = edx;
    eax = eax | 0xFFFFFF;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm3; /* movss */
    MEMF(esp + 0xD8) = xmm2; /* movss */
    MEMF(esp + 0xDC) = xmm3; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    xmm5 = MEMF(0x6BD4D0); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm5; /* mulss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    MEMF(esp + 0x84) = xmm4; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm5; /* mulss */
    MEMF(esp + 0xB4) = xmm4; /* movss */
    MEMF(esp + 0xE4) = xmm4; /* movss */
    xmm4 = MEMF(0x75E290); /* movss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    MEMF(esp + 0xE0) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm3; /* movss */
    MEMF(esp + 0xE8) = xmm2; /* movss */
    MEMF(esp + 0xEC) = xmm3; /* movss */
    esi = 2;

loc_0020BCE2: ;
    PUSH32(esp, 0x30);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0020BCF2: ;
    esi--;
    if ((esi != 0)) goto loc_0020BCE2; /* jne: not equal / not zero */

loc_0020BCF5: ;
    xmm0 = MEMF(0x648D20); /* movss */
    edi++;
    xmm6 = (float)(int32_t)edi; /* cvtsi2ss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 > xmm6)) goto loc_0020BA3D; /* ja: above (unsigned >) */

loc_0020BD0B: ;
    xmm3 = MEMF(esp + 0xF4); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm4 = MEMF(esp + 0xF8); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0xF0); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm3 = xmm3 + MEMF(esp + 0x1D0); /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x1C8); /* addss */
    xmm6 = xmm3; /* movaps */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 + MEMF(esp + 0x108); /* addss */
    xmm4 = xmm4 + MEMF(esp + 0xFC); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0020BD76: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEMF(esp + 0x38) = xmm3; /* movss */
    MEMF(esp + 0xC8) = xmm3; /* movss */
    MEMF(esp + 0x68) = xmm4; /* movss */
    MEMF(esp + 0x98) = xmm4; /* movss */
    xmm4 = MEMF(0x6BD4D0); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    MEMF(esp + 0x84) = xmm3; /* movss */
    xmm3 = xmm4; /* movaps */
    MEMF(esp + 0xB4) = xmm3; /* movss */
    MEMF(esp + 0xE4) = xmm3; /* movss */
    xmm3 = MEMF(0x75E290); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0xC0) = xmm2; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esp + 0x60) = xmm6; /* movss */
    edx = edx + 0x7D;
    edx = edx << 0x18;
    eax = edx;
    eax = eax | 0xFFFFFF;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x90) = xmm6; /* movss */
    MEMF(esp + 0x94) = xmm5; /* movss */
    MEMF(esp + 0xC4) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xD0) = xmm2; /* movss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xD8) = xmm2; /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xE0) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm3; /* movss */
    MEMF(esp + 0xE8) = xmm2; /* movss */
    MEMF(esp + 0xEC) = xmm3; /* movss */
    esi = 2;
    /* nop */

loc_0020BF30: ;
    PUSH32(esp, 0x30);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0020BF40: ;
    esi--;
    if ((esi != 0)) goto loc_0020BF30; /* jne: not equal / not zero */

loc_0020BF43: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020BF4B: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020BF50: ;
    edx = MEM32(esp + 0x100);
    ecx = 0; /* xor self */
    /* nop */

loc_0020BF60: ;
    if (CMP_EQ(edx, MEM32(eax + ecx * 4))) goto loc_0020BF6D; /* je: equal / zero */

loc_0020BF65: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_0020BF60; /* jl: less (signed <) */

loc_0020BF6B: ;
    goto loc_0020BF71;

loc_0020BF6D: ;
    MEM8(eax + ecx + 0x10) = LO8(ebx);

loc_0020BF71: ;
    eax = MEM32(0x7768C0);
    ecx = esp + 0x3D0;
    MEM32(0x84B868) = eax;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00200CC0(); /* call 0x00200CC0 */

loc_0020BF8C: ;
    edx = MEM32(0x849944);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = MEM32(edx + 0x84994C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x3E0;
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_0020BFB1: ;
    eax = MEM32(0x849944);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = MEM32(eax + 0x849948);
    if (CMP_EQ(eax, ebx)) goto loc_0020BFDB; /* je: equal / zero */

loc_0020BFC3: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    ecx = esp + 0x478;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004705BA(); /* call 0x004705BA */

loc_0020BFD6: ;
    esp = esp + 0xC;
    goto loc_0020BFE3;

loc_0020BFDB: ;
    MEM16(esp + 0x470) = LO16(ebx);

loc_0020BFE3: ;
    PUSH32(esp, 0x100);
    esi = esp + 0x674;
    eax = esp + 0x474;
    ecx = 0x5F8F3C;
    PUSH32(esp, 0); sub_00209DE0(); /* call 0x00209DE0 */

loc_0020C000: ;
    esp = esp + 4;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F8F20);
    eax = 2;
    ecx = esp + 0x3DC;
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_0020C01F: ;
    edi = esp + 0x3D0;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_0020C02B: ;
    edi = 1;
    esi = esp + 0x3D0;
    PUSH32(esp, 0); sub_00201710(); /* call 0x00201710 */

loc_0020C03C: ;
    edx = MEM32(0x75E28C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0020C052: ;
    xmm0 = MEMF(0x75E288); /* movss */
    esp = esp + 0xC;
    MEMF(0x807688) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_0020C06A: ;
    if (CMP_NE(eax, 2)) goto loc_0020C07F; /* jne: not equal / not zero */

loc_0020C06F: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x807688) = xmm0; /* movss */

loc_0020C07F: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm0 = MEMF(0x75E284); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(0x8076A4) = xmm0; /* movss */
    MEM8(0x8086C4) = 1;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0020C0A5: ;
    xmm0 = MEMF(0x75E27C); /* movss */
    xmm1 = MEMF(0x75E280); /* movss */
    MEM8(0x807667) = LO8(eax);
    MEM8(0x807697) = LO8(eax);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    MEM32(0x8076B0) = 1;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_0020C0E6: ;
    if (CMP_NE(eax, 2)) goto loc_0020C0F1; /* jne: not equal / not zero */

loc_0020C0EB: ;
    MEM32(0x8076B0) = ebx;

loc_0020C0F1: ;
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    ecx = esp + 0x674;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0020C100: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0020C106: ;
    esp = esp + 8;
    esi = esp + 0x3D0;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_0020C115: ;
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
 * sub_0020C120
 * Original: 0x0020C120 - 0x0020C145 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C120(void)
{
    float xmm0;

loc_0020C120: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x6BD4B8) = eax;
    eax = 0; /* xor self */
    MEMF(0x7768F8) = xmm0; /* movss */
    MEM32(0x849910) = eax;
    MEM32(0x849914) = eax;
    MEMF(0x849908) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0020C150
 * Original: 0x0020C150 - 0x0020C18A (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0020C150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0020C176: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0020C18A(); return; } /* je: equal / zero */

loc_0020C17D: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_0020C18A(); return; } /* je: equal / zero */

loc_0020C185: ;
    edx = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0020C18C(); return; /* tail jmp 0x0020C18C */

}

/**
 * sub_0020C200
 * Original: 0x0020C200 - 0x0020C3A1 (417 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C200: ;
    eax = 0x630C;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0020C20A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_0020C221: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    eax = esp + 0x118;
    ecx = 0x40;
    ebx = 0; /* xor self */

loc_0020C235: ;
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + 2) = LO8(ebx);
    MEM8(eax + 3) = LO8(ebx);
    MEMF(eax + 4) = xmm0; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0x89) = LO8(ebx);
    MEM16(eax + -256) = LO16(ebx);
    MEM16(eax + -128) = LO16(ebx);
    eax = eax + 0x18C;
    ecx--;
    if ((ecx != 0)) goto loc_0020C235; /* jne: not equal / not zero */

loc_0020C267: ;
    eax = MEM32(esp + 0x6320);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_0020C305; /* jle: less or equal (signed <=) */

loc_0020C279: ;
    esi = esp + 0x1C;
    /* nop */

loc_0020C280: ;
    edx = MEM32(esp + 0x6320);
    eax = MEM32(edx + ebp * 4);
    if (CMP_NE(MEM16(eax), LO16(ebx))) goto loc_0020C293; /* jne: not equal / not zero */

loc_0020C28F: ;
    eax = 0; /* xor self */
    goto loc_0020C2B8;

loc_0020C293: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_0020C2A7: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    eax = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0020C2B8; /* je: equal / zero */

loc_0020C2B4: ;
    eax = MEM32(esp + 0x18);

loc_0020C2B8: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0020C2C1: ;
    eax = MEM32(esp + 0x633C);
    esp = esp + 0xC;
    if (CMP_EQ(eax, ebx)) goto loc_0020C2DA; /* je: equal / zero */

loc_0020C2CF: ;
    SET_LO8(eax, MEM8(eax + ebp));
    MEM8(esi + 0x103) = LO8(eax);
    goto loc_0020C2E0;

loc_0020C2DA: ;
    MEM8(esi + 0x103) = LO8(ebx);

loc_0020C2E0: ;
    ecx = MEM32(esp + 0x6320);
    edi = MEM32(ecx + ebp * 4);
    PUSH32(esp, 0); sub_0026BA00(); /* call 0x0026BA00 */

loc_0020C2EF: ;
    eax = MEM32(esp + 0x6324);
    ebp++;
    esi = esi + 0x18C;
    if (CMP_L(ebp, eax)) goto loc_0020C280; /* jl: less (signed <) */

loc_0020C305: ;
    edx = MEM32(esp + 0x6328);
    eax = MEM32(esp + 0x6324);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x6334);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020C570(); /* call 0x0020C570 */

loc_0020C326: ;
    esi = MEM32(esp + 0x20);
    esp = esp + 0xC;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(esi, ebx)) goto loc_0020C397; /* je: equal / zero */

loc_0020C332: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0020C338: ;
    if (TEST_NZ(eax, eax)) goto loc_0020C35F; /* jne: not equal / not zero */

loc_0020C33C: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0020C35C: ;
    esp = esp + 4;

loc_0020C35F: ;
    esi = MEM32(esp + 0xC);
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_0020C36F: ;
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_0020C397; /* je: equal / zero */

loc_0020C375: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebx)) goto loc_0020C37E; /* je: equal / zero */

loc_0020C37A: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_0020C37E: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebx))) goto loc_0020C397; /* jne: not equal / not zero */

loc_0020C384: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_0020C38D: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_0020C397: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x630C;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C3B0
 * Original: 0x0020C3B0 - 0x0020C454 (164 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C3B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C3B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x849AA4);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebp)) { sub_0020C454(); return; } /* je: equal / zero */

loc_0020C3C5: ;
    if (CMP_EQ(MEM32(0x6BD4BC), esi)) { sub_0020C454(); return; } /* je: equal / zero */

loc_0020C3D1: ;
    if (CMP_EQ(MEM32(0x84992C), ebp)) goto loc_0020C3E6; /* je: equal / zero */

loc_0020C3D9: ;
    PUSH32(esp, 0x84992C);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0020C3E3: ;
    esp = esp + 4;

loc_0020C3E6: ;
    eax = MEM32(0x6BD4BC);
    edx = MEM32(0x849924);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(0x7768D4);
    MEM32(0x6BD4BC) = esi;
    esi = MEM32(esp + 0x18);
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    MEM32(0x6BD4C0) = eax;
    MEMF(0x6BD4CC) = xmm0; /* movss */
    MEMF(0x7768D8) = xmm0; /* movss */
    MEM32(0x7768D0) = ecx;
    MEM32(0x84992C) = edx;
    MEM32(0x849924) = ebp;
    if (CMP_EQ(esi, ebp)) goto loc_0020C44C; /* je: equal / zero */

loc_0020C42F: ;
    PUSH32(esp, 0x398);
    PUSH32(esp, esi);
    eax = 0x29B9;
    ecx = 0x5F98E8;
    PUSH32(esp, 0); sub_002AF180(); /* call 0x002AF180 */

loc_0020C444: ;
    esp = esp + 8;
    MEM32(0x849924) = eax;

loc_0020C44C: ;
    MEM32(0x849928) = esi;
    g_seh_ebp = ebp; sub_0020C4BE(); return; /* tail jmp 0x0020C4BE */

}

/**
 * sub_0020C570
 * Original: 0x0020C570 - 0x0020C621 (177 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C570: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x849AA4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_0020C621(); return; } /* je: equal / zero */

loc_0020C583: ;
    if (CMP_EQ(MEM32(0x6BD4BC), esi)) { sub_0020C621(); return; } /* je: equal / zero */

loc_0020C58F: ;
    eax = MEM32(0x84992C);
    if (TEST_Z(eax, eax)) goto loc_0020C5A5; /* je: equal / zero */

loc_0020C598: ;
    PUSH32(esp, 0x84992C);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0020C5A2: ;
    esp = esp + 4;

loc_0020C5A5: ;
    eax = MEM32(0x6BD4BC);
    ebp = MEM32(esp + 0x18);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(0x7768D4);
    edx = MEM32(0x849924);
    MEM32(0x6BD4BC) = esi;
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x398);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2A0A);
    PUSH32(esp, 0x5F98E8);
    PUSH32(esp, esi);
    MEM32(0x6BD4C0) = eax;
    MEMF(0x6BD4CC) = xmm0; /* movss */
    MEMF(0x7768D8) = xmm0; /* movss */
    MEM32(0x7768D0) = ecx;
    MEM32(0x84992C) = edx;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0020C5FE: ;
    edx = eax;
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_0020C619; /* je: equal / zero */

loc_0020C607: ;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_0020C619: ;
    MEM32(0x849928) = ebp;
    g_seh_ebp = ebp; sub_0020C684(); return; /* tail jmp 0x0020C684 */

}

/**
 * sub_0020C6E0
 * Original: 0x0020C6E0 - 0x0020C722 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C6E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0020C6E0: ;
    if (TEST_Z(esi, esi)) goto loc_0020C721; /* je: equal / zero */

loc_0020C6E4: ;
    PUSH32(esp, 0x84C318);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0020C6EF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0020C711; /* je: equal / zero */

loc_0020C6F6: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0x84C6B0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0020C707: ;
    esp = esp + 0xC;
    MEM8(0x849930) = 1;

loc_0020C711: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C318);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0020C71E: ;
    esp = esp + 0xC;

loc_0020C721: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C730
 * Original: 0x0020C730 - 0x0020C75D (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C730(void)
{

loc_0020C730: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0020C741: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0020C752: ;
    esp = esp + 0x18;
    MEM8(0x849931) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C760
 * Original: 0x0020C760 - 0x0020C864 (260 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C760(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0020C760: ;
    esp = esp - 0x14;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_0020C768: ;
    if (CMP_NE(eax, 2)) goto loc_0020C77E; /* jne: not equal / not zero */

loc_0020C76D: ;
    (void)0; /* cmp MEM32(0x8498DC), 5 - flags set for next jcc */
    xmm0 = MEMF(0x6490B8); /* movss */
    if (CMP_EQ(MEM32(0x8498DC), 5)) goto loc_0020C786; /* je: equal / zero */

loc_0020C77E: ;
    xmm0 = MEMF(0x6490B0); /* movss */

loc_0020C786: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(0x64A170); /* addss */
    xmm0 = xmm0 + MEMF(0x6498B8); /* addss */
    edx = 0x1010101;
    ecx = 0x40358;
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020C7BC: ;
    PUSH32(esp, 0xFF);
    ecx = esp + 8;
    eax = esp + 0xC;
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_001F5310(); /* call 0x001F5310 */

loc_0020C7D8: ;
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41C00000);
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_0020C7EB: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_0020C7F3: ;
    if (CMP_NE(eax, 2)) goto loc_0020C809; /* jne: not equal / not zero */

loc_0020C7F8: ;
    (void)0; /* cmp MEM32(0x8498DC), 5 - flags set for next jcc */
    xmm0 = MEMF(0x64A35C); /* movss */
    if (CMP_EQ(MEM32(0x8498DC), 5)) goto loc_0020C811; /* je: equal / zero */

loc_0020C809: ;
    xmm0 = MEMF(0x64A264); /* movss */

loc_0020C811: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    edx = 0x1010101;
    ecx = 0x40358;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020C831: ;
    PUSH32(esp, 0xFF);
    ecx = esp + 8;
    eax = esp + 0xC;
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_001F53B0(); /* call 0x001F53B0 */

loc_0020C84D: ;
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41C00000);
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_0020C860: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C870
 * Original: 0x0020C870 - 0x0020CE83 (1555 bytes, 327 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm7;

loc_0020C870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    ebx = 0; /* xor self */
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0); sub_0021ABE0(); /* call 0x0021ABE0 */

loc_0020C898: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x776710);
    PUSH32(esp, 0); sub_00202870(); /* call 0x00202870 */

loc_0020C8B6: ;
    edx = MEM32(0x84B868);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00218880(); /* call 0x00218880 */

loc_0020C8CC: ;
    xmm7 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, MEM8(0x849B54));
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x28;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm7; /* movss */
    MEMF(esp + 0x1C) = xmm7; /* movss */
    MEMF(esp + 0x34) = xmm7; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0020C925; /* je: equal / zero */

loc_0020C8FB: ;
    xmm0 = MEMF(0x75E274); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x75E278); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A248); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_0020C925: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0020C954; /* je: equal / zero */

loc_0020C92E: ;
    if (CMP_EQ(MEM32(0x849ACC), ebx)) goto loc_0020C954; /* je: equal / zero */

loc_0020C936: ;
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(0x8076A4) = xmm0; /* movss */
    xmm0 = MEMF(0x648E9C); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_0020C954: ;
    (void)0; /* cmp MEM32(0x84990C), 1 - flags set for next jcc */
    xmm0 = MEMF(0x648E8C); /* movss */
    if (CMP_EQ(MEM32(0x84990C), 1)) goto loc_0020C96D; /* je: equal / zero */

loc_0020C965: ;
    xmm0 = MEMF(0x64921C); /* movss */

loc_0020C96D: ;
    xmm4 = MEMF(0x6BD4CC); /* movss */
    /* ucomiss xmm4, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM8(esp + 0x13) = 0;
    if (1 /* jnp after test - parity */) goto loc_0020CE3D; /* jnp: not parity */

loc_0020C98D: ;
    /* ucomiss xmm4, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0020C99F; /* jp: parity */

loc_0020C99A: ;
    MEM8(esp + 0x13) = 1;

loc_0020C99F: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    PUSH32(esp, 0x41600000);
    PUSH32(esp, 0x40E00000);
    PUSH32(esp, 0x3F800000);
    ecx = 0x7768D8;
    edx = 0x6BD4CC;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0020C9C5: ;
    xmm1 = MEMF(0x6BD4C4); /* movss */
    xmm2 = MEMF(0x648D10); /* movss */
    eax = MEM32(0x7768D0);
    xmm4 = MEMF(0x6BD4CC); /* movss */
    ecx = MEM32(0x6BD4C0);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm5 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648F10); /* mulss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x20); /* mulss */
    esp = esp + 0xC;
    (void)0; /* cmp ecx, 0x26 - flags set for next jcc */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    if (CMP_NE(ecx, 0x26)) goto loc_0020CA3E; /* jne: not equal / not zero */

loc_0020CA2C: ;
    xmm0 = xmm0 + MEMF(0x64AD30); /* addss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0020CA3E: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_0020CE45; /* jle: less or equal (signed <=) */

loc_0020CA4A: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 - MEMF(0x648FDC); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    edi = edi;

loc_0020CA60: ;
    eax = MEM32(0x84992C);
    SET_LO8(ecx, MEM8(ebx + eax + 0x101));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0020CADF; /* je: equal / zero */

loc_0020CA70: ;
    SET_LO8(eax, MEM8(ebx + eax + 0x102));
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, 0);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax + 0x193;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0020CA89: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0020CB76; /* je: equal / zero */

loc_0020CA96: ;
    xmm0 = MEMF(0x6496BC); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(0x64A170); /* addss */
    edx = 0x1010101;
    ecx = 0x40358;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020CAC7: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41400000);
    edx = esp + 0x38;
    goto loc_0020CB62;

loc_0020CADF: ;
    SET_LO8(ecx, MEM8(ebx + eax + 0x109));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0020CB76; /* je: equal / zero */

loc_0020CAEE: ;
    eax = ebx + eax + 0x10A;
    PUSH32(esp, eax);
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_0020CAFF: ;
    esi = MEM32(esp + 0x2C);
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_0020CB76; /* je: equal / zero */

loc_0020CB0A: ;
    xmm0 = MEMF(0x6496BC); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x75E26C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    xmm0 = xmm0 + MEMF(0x648FDC); /* addss */
    edx = 0x1010101;
    ecx = 0x40358;
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020CB4B: ;
    ecx = MEM32(0x75E26C);
    edx = MEM32(0x75E270);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = esp + 0x50;

loc_0020CB62: ;
    eax = esi;
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_0020CB73: ;
    esp = esp + 0xC;

loc_0020CB76: ;
    eax = MEM32(0x84B868);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00218880(); /* call 0x00218880 */

loc_0020CB8B: ;
    ecx = MEM32(0x84992C);
    SET_LO8(eax, MEM8(ebx + ecx + 0x100));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0020CBA6; /* jne: not equal / not zero */

loc_0020CB9F: ;
    PUSH32(esp, 0x3F800000);
    goto loc_0020CBAB;

loc_0020CBA6: ;
    PUSH32(esp, 0x3F4CCCCD);

loc_0020CBAB: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0020CBBA: ;
    edx = MEM32(0x84992C);
    SET_LO8(ecx, MEM8(ebx + edx + 0x103));
    eax = ebx + edx;
    esp = esp + 0xC;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0020CBE8; /* je: equal / zero */

loc_0020CBD1: ;
    MEM8(0x807664) = 0x78;
    MEM8(0x807665) = 0x78;
    MEM8(0x807666) = 0x78;
    goto loc_0020CC2C;

loc_0020CBE8: ;
    SET_LO8(ecx, MEM8(eax + 0x18C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0020CC17; /* jne: not equal / not zero */

loc_0020CBF2: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0020CC17; /* jne: not equal / not zero */

loc_0020CBF9: ;
    MEM8(0x807664) = 0x3C;
    MEM8(0x807665) = 0x50;
    MEM8(0x807666) = 0x8C;
    MEM8(0x807667) = 0xE1;
    goto loc_0020CC2C;

loc_0020CC17: ;
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;

loc_0020CC2C: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    xmm0 = MEMF(0x84B508); /* movss */
    /* comiss xmm0, MEMF(0x80765C) - sets EFLAGS */
    MEMF(0x807654) = xmm1; /* movss */
    if ((xmm0 > MEMF(0x80765C))) goto loc_0020CC7A; /* ja: above (unsigned >) */

loc_0020CC61: ;
    /* comiss xmm0, MEMF(0x807660) - sets EFLAGS */
    if ((xmm0 > MEMF(0x807660))) goto loc_0020CC7A; /* ja: above (unsigned >) */

loc_0020CC6A: ;
    edx = MEM32(0x5499F0);
    ecx = 2;
    edx = edx | 1;
    goto loc_0020CC87;

loc_0020CC7A: ;
    edx = MEM32(0x5499F0);
    ecx = 1;
    edx = edx | ecx;

loc_0020CC87: ;
    PUSH32(esp, 0x7FFFFFFE);
    MEM32(0x54733C) = ecx;
    MEM32(0x547340) = ecx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(0x5499F0) = edx;
    PUSH32(esp, 0); sub_003D3D00(); /* call 0x003D3D00 */

loc_0020CCA8: ;
    eax = MEM32(0x84992C);
    SET_LO8(ecx, MEM8(ebx + eax + 0x100));
    esp = esp + 8;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0020CD37; /* je: equal / zero */

loc_0020CCBF: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0020CCE7: ;
    ecx = MEM32(0x84992C);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    edx = ebx + ecx + 0x80;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0020CD20: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0020CD34: ;
    esp = esp + 0x20;

loc_0020CD37: ;
    esi = MEM32(0x5499E8);
    edi = MEM32(esi + 0xF88);
    if (TEST_Z(edi, edi)) goto loc_0020CD65; /* je: equal / zero */

loc_0020CD47: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    MEM32(edi + 8) = eax;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_0020CD65; /* jne: not equal / not zero */

loc_0020CD60: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_0020CD65: ;
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esi + 0xF88) = 0;
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0020CD85; /* jb: below (unsigned <) */

loc_0020CD76: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0020CD85: ;
    xmm0 = MEMF(0x64971C); /* movss */
    MEM32(eax) = 0x41B0C;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM32(esi) = eax;
    eax = MEM32(0x5499F0);
    MEM32(esi + 0xC) = 0x80000000u;
    edi = MEM32(0x8072F0);
    eax = eax | 0x4800;
    MEM8(0x8086D5) = LO8(ecx);
    MEM32(0x8086E8) = ecx;
    edi--;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x5499F0) = eax;
    MEM32(0x8072F0) = edi;
    MEMF(0x8076A4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020CDE3: ;
    eax = MEM32(esp + 0x18);
    xmm1 = MEMF(0x6BD4C4); /* movss */
    ecx = MEM32(0x7768D0);
    eax++;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    ebx = ebx + 0x398;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(0x549B04) = 0x10101;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_0020CA60; /* jl: less (signed <) */

loc_0020CE29: ;
    xmm4 = MEMF(0x6BD4CC); /* movss */
    xmm7 = MEMF(0x648D14); /* movss */
    ebx = 0; /* xor self */
    goto loc_0020CE45;

loc_0020CE3D: ;
    xmm1 = MEMF(0x6BD4C4); /* movss */

loc_0020CE45: ;
    if (CMP_NE(MEM32(0x6BD4BC), 0x26)) { sub_0020CE83(); return; } /* jne: not equal / not zero */

loc_0020CE4E: ;
    xmm0 = MEMF(0x75E268); /* movss */
    xmm0 = xmm0 * MEMF(0x648FDC); /* mulss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm7 = xmm7 - xmm4; /* subss */
    xmm7 = xmm7 * MEMF(esp + 0x14); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 - xmm7; /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0020D143(); return; /* tail jmp 0x0020D143 */

}

/**
 * sub_0020DAB0
 * Original: 0x0020DAB0 - 0x0020DB01 (81 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DAB0(void)
{

loc_0020DAB0: ;
    esp = esp - 0x208;
    PUSH32(esp, eax);
    ecx = esp + 6;
    PUSH32(esp, ecx);
    MEM8(esp + 8) = 1;
    MEM8(esp + 9) = 0;
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0020DACB: ;
    SET_LO8(edx, MEM8(esp + 8));
    SET_LO8(eax, MEM8(esp + 9));
    ecx = esp + 0xA;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x84C42A);
    MEM8(0x84C428) = LO8(edx);
    MEM8(0x84C429) = LO8(eax);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0020DAED: ;
    edx = MEM32(esp + 0x214);
    MEM32(0x84C62C) = edx;
    esp = esp + 0x218;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DB10
 * Original: 0x0020DB10 - 0x0020DB6D (93 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB10(void)
{

loc_0020DB10: ;
    esp = esp - 0x208;
    SET_LO8(eax, 1);
    MEM8(esp) = LO8(eax);
    MEM8(esp + 1) = LO8(eax);
    eax = MEM32(esp + 0x20C);
    PUSH32(esp, ecx);
    edx = esp + 6;
    PUSH32(esp, edx);
    MEM32(esp + 0x20C) = eax;
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0020DB38: ;
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(ecx, MEM8(esp + 9));
    edx = esp + 0xA;
    PUSH32(esp, edx);
    PUSH32(esp, 0x84C42A);
    MEM8(0x84C428) = LO8(eax);
    MEM8(0x84C429) = LO8(ecx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0020DB5A: ;
    eax = MEM32(esp + 0x214);
    MEM32(0x84C62C) = eax;
    esp = esp + 0x218;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DB70
 * Original: 0x0020DB70 - 0x0020DB8D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0020DB70: ;
    esp = esp - 0x218;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x191));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0020DB8D(); return; } /* jne: not equal / not zero */

loc_0020DB83: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x218;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DC60
 * Original: 0x0020DC60 - 0x0020E064 (1028 bytes, 235 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DC60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_0020DC60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    edi = 0; /* xor self */
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_0021ABE0(); /* call 0x0021ABE0 */

loc_0020DC88: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x776710);
    PUSH32(esp, 0); sub_00202870(); /* call 0x00202870 */

loc_0020DCA6: ;
    edx = MEM32(0x84B868);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00218880(); /* call 0x00218880 */

loc_0020DCBC: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x6493AC); /* movss */
    PUSH32(esp, 0x7FFFFFFF);
    eax = 0x84C318;
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0020DCFA: ;
    SET_LO8(ecx, MEM8(0x849930));
    xmm3 = MEMF(0x648EA4); /* movss */
    xmm2 = MEMF(esp + 0x50); /* movss */
    xmm1 = MEMF(0x87B3A8); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648E8C); /* movss */
    xmm5 = MEMF(0x75E25C); /* movss */
    esp = esp + 0x38;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0020DD75; /* je: equal / zero */

loc_0020DD30: ;
    /* ucomiss xmm5, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0020DD6D; /* jp: parity */

loc_0020DD3D: ;
    /* ucomiss xmm1, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm5 = xmm1; /* movaps */
    MEMF(0x75E25C) = xmm5; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0020DD5D; /* jnp: not parity */

loc_0020DD51: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm4; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0020DD6D; /* jbe: below or equal (unsigned <=) */

loc_0020DD5D: ;
    xmm5 = MEMF(0x648D80); /* movss */
    MEMF(0x75E25C) = xmm5; /* movss */

loc_0020DD6D: ;
    xmm3 = MEMF(0x5A0060); /* movss */

loc_0020DD75: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm2 = xmm2 + xmm4; /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(0x87B3A8) = xmm0; /* movss */
    if ((xmm0 <= xmm2)) goto loc_0020DDAC; /* jbe: below or equal (unsigned <=) */

loc_0020DD96: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm6; /* movaps */
    MEMF(0x87B3A8) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0020DDD8; /* je: equal / zero */

loc_0020DDA5: ;
    MEM8(0x75E258) = 0;

loc_0020DDAC: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0020DDD8; /* je: equal / zero */

loc_0020DDB0: ;
    /* comiss xmm5, xmm1 - sets EFLAGS */
    if ((xmm5 <= xmm1)) goto loc_0020DDD8; /* jbe: below or equal (unsigned <=) */

loc_0020DDB5: ;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 < xmm5)) goto loc_0020DDD8; /* jb: below (unsigned <) */

loc_0020DDBA: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(0x75E25C) = xmm0; /* movss */
    MEM8(0x849930) = 0;
    MEM8(0x75E258) = 1;

loc_0020DDD8: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x87B3A8);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    eax = 0x84C298;
    PUSH32(esp, 0); sub_002005E0(); /* call 0x002005E0 */

loc_0020DDF1: ;
    xmm1 = MEMF(0x649218); /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x87B3A8); /* subss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(0x8076B0) = edi;
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = 0;
    MEM8(0x807667) = 0xFF;
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0020DE49: ;
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_0020DE4E: ;
    edx = esp + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = 0x84C298;
    PUSH32(esp, 0); sub_0020DB70(); /* call 0x0020DB70 */

loc_0020DE5E: ;
    esi = eax;
    esp = esp + 0x10;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    ebx = 2;
    if (CMP_EQ(esi, edi)) goto loc_0020DF92; /* je: equal / zero */

loc_0020DE70: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x75E250); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    edi = 0x1010101;
    edx = edi;
    ecx = 0x40358;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020DEA3: ;
    eax = MEM32(0x75E250);
    ecx = MEM32(0x75E254);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edx = esp + 0x30;
    MEM32(0x549B04) = edi;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_0020DEC6: ;
    edx = esp + 0x24;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = 0x84C298;
    PUSH32(esp, 0); sub_0020DB70(); /* call 0x0020DB70 */

loc_0020DED7: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x75E250); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    esp = esp + 0x14;
    edx = edi;
    ecx = 0x40358;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020DF08: ;
    eax = MEM32(0x75E250);
    ecx = MEM32(0x75E254);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edx = esp + 0x30;
    MEM32(0x549B04) = edi;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_0020DF2B: ;
    edx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = 0x84C298;
    PUSH32(esp, 0); sub_0020DB70(); /* call 0x0020DB70 */

loc_0020DF3B: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x75E250); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    esp = esp + 0x14;
    edx = edi;
    ecx = 0x40358;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020DF6C: ;
    eax = MEM32(0x75E250);
    ecx = MEM32(0x75E254);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    edx = esp + 0x30;
    MEM32(0x549B04) = edi;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_0020DF8F: ;
    esp = esp + 0xC;

loc_0020DF92: ;
    ecx = MEM32(0x849B1C);
    edx = MEM32(0x7767E0);
    ecx--;
    edi = esp + 0x1C;
    esi = esp + 0x20;
    MEM32(0x849B1C) = ecx;
    MEM32(0x84B868) = edx;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_0020DFB8: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0020DFDF; /* jne: not equal / not zero */

loc_0020DFC1: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0020DFDF: ;
    esi = MEM32(0x87A1AC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM8(0x87A1BC) = 1;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020DFF8: ;
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00222DD0(); /* call 0x00222DD0 */

loc_0020E00B: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0020E064(); return; } /* je: equal / zero */

loc_0020E012: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020E01B: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0020E042; /* jne: not equal / not zero */

loc_0020E024: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0020E042: ;
    eax = 0; /* xor self */

loc_0020E044: ;
    if (CMP_EQ(esi, MEM32(eax * 4 + 0x87A1AC))) goto loc_0020E058; /* je: equal / zero */

loc_0020E04D: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_0020E044; /* jl: less (signed <) */

loc_0020E053: ;
    g_seh_ebp = ebp; sub_0020E556(); return; /* tail jmp 0x0020E556 */

loc_0020E058: ;
    MEM8(eax + 0x87A1BC) = 0;
    g_seh_ebp = ebp; sub_0020E556(); return; /* tail jmp 0x0020E556 */

}

/**
 * sub_0020E580
 * Original: 0x0020E580 - 0x0020E5B9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E580(void)
{
    float xmm0;

loc_0020E580: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5A02CC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0020E5C0(); /* call 0x0020E5C0 */

loc_0020E5B5: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E5C0
 * Original: 0x0020E5C0 - 0x0020E956 (918 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E5C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_0020E5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0x2C;
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    ebx = 0; /* xor self */
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0); sub_0021ABE0(); /* call 0x0021ABE0 */

loc_0020E5EC: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x776710);
    PUSH32(esp, 0); sub_00202870(); /* call 0x00202870 */

loc_0020E60A: ;
    edx = MEM32(0x84B868);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00218880(); /* call 0x00218880 */

loc_0020E620: ;
    xmm0 = MEMF(0x6BD588); /* movss */
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x6493AC); /* mulss */
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0020E65B: ;
    xmm1 = MEMF(0x649428); /* movss */
    esp = esp + 0x38;
    if (CMP_NE(edi, ebx)) goto loc_0020E672; /* jne: not equal / not zero */

loc_0020E66A: ;
    xmm1 = MEMF(0x648EB8); /* movss */

loc_0020E672: ;
    SET_LO8(eax, MEM8(0x776580));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(0x64AD24); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0020E71D; /* je: equal / zero */

loc_0020E695: ;
    xmm2 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0020E71D; /* jbe: below or equal (unsigned <=) */

loc_0020E6A0: ;
    xmm1 = xmm1 / xmm2; /* divss */
    xmm2 = xmm1; /* movaps */
    xmm1 = MEMF(0x6BD588); /* movss */
    PUSH32(esp, 0x5F59F0);
    edx = esp + 0x24;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D40); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AD20); /* subss */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    xmm1 = xmm1 * xmm2; /* mulss */
    PUSH32(esp, eax);
    MEMF(0x80765C) = xmm1; /* movss */
    xmm1 = xmm1 * MEMF(0x6493AC); /* mulss */
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(0x807660) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0020E70C: ;
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x10;

loc_0020E71D: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm2 = MEMF(ebp + 0x14); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x6BD588); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEM32(0x8076B0) = ebx;
    if (1 /* jnp after test - parity */) goto loc_0020E770; /* jnp: not parity */

loc_0020E757: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x59A8D8); /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm3 = xmm0; /* movaps */

loc_0020E770: ;
    ebx = 0xFF;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM8(0x807667) = LO8(ebx);
    MEM8(0x807664) = LO8(ebx);
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = 0;
    MEMF(0x807650) = xmm2; /* movss */
    MEMF(0x807654) = xmm3; /* movss */
    MEMF(0x807658) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0020E7AF: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_0020E7B7: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(0x776580) = 0;
    MEMF(0x6BD588) = xmm0; /* movss */
    if (TEST_Z(edi, edi)) goto loc_0020E858; /* je: equal / zero */

loc_0020E7D6: ;
    ecx = MEM32(0x75E240);
    xmm0 = MEMF(esp + 0x20); /* movss */
    edx = MEM32(0x75E244);
    xmm0 = xmm0 + MEMF(0x648FDC); /* addss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    /* comiss xmm1, MEMF(0x648E8C) - sets EFLAGS */
    MEM32(esp + 0x14) = ecx;
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm1 <= MEMF(0x648E8C))) goto loc_0020E823; /* jbe: below or equal (unsigned <=) */

loc_0020E813: ;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_0020E823: ;
    edx = 0x1010101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020E832: ;
    eax = MEM32(0x75E23C);
    ecx = MEM32(0x75E238);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    edx = esp + 0x20;
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_0020E855: ;
    esp = esp + 0xC;

loc_0020E858: ;
    ecx = MEM32(0x849B1C);
    edx = MEM32(0x7767E0);
    ecx--;
    edi = esp + 0x2C;
    esi = esp + 0x10;
    MEM32(0x849B1C) = ecx;
    MEM32(0x84B868) = edx;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_0020E87E: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0020E8A5; /* jne: not equal / not zero */

loc_0020E887: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0020E8A5: ;
    eax = MEM32(0x87A1AC);
    MEM32(0x8498F8) = eax;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    MEM8(0x87A1BC) = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020E8BE: ;
    eax = MEM32(0x8498D8);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) { sub_0020E956(); return; } /* je: equal / zero */

loc_0020E8CD: ;
    if (CMP_NE(eax, 1)) goto loc_0020E914; /* jne: not equal / not zero */

loc_0020E8D2: ;
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBCCCCCCDu);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00222DD0(); /* call 0x00222DD0 */

loc_0020E8E7: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0020E956(); return; } /* je: equal / zero */

loc_0020E8EE: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020E8F6: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020E8FB: ;
    esi = 0x8498F8;
    edx = eax;
    PUSH32(esp, 0); sub_001CDCE0(); /* call 0x001CDCE0 */

loc_0020E907: ;
    MEM32(0x8498D8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0020E914: ;
    PUSH32(esp, 0x3F0CCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00222DD0(); /* call 0x00222DD0 */

loc_0020E929: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0020E956(); return; } /* je: equal / zero */

loc_0020E930: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020E938: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020E93D: ;
    esi = 0x8498F8;
    edx = eax;
    PUSH32(esp, 0); sub_001CDCE0(); /* call 0x001CDCE0 */

loc_0020E949: ;
    MEM32(0x8498D8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0020F030
 * Original: 0x0020F030 - 0x0021089C (6252 bytes, 1238 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0020F030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x224;
    eax = MEM32(0x849938);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00210895; /* je: equal / zero */

loc_0020F04C: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_00210895; /* je: equal / zero */

loc_0020F05A: ;
    eax = MEM32(0x849A7C);
    ecx = MEM32(0x849A80);
    ecx = ecx + eax;
    if ((ecx == 0)) goto loc_0020F0BF; /* je: equal / zero */

loc_0020F069: ;
    SET_LO8(eax, MEM8(0x84993C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0020F0BF; /* jne: not equal / not zero */

loc_0020F072: ;
    PUSH32(esp, 0x849948);
    PUSH32(esp, 0); sub_002062C0(); /* call 0x002062C0 */

loc_0020F07C: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00210895; /* je: equal / zero */

loc_0020F087: ;
    eax = MEM32(0x849938);
    SET_LO8(ecx, MEM8(eax + 0x500));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00210895; /* jne: not equal / not zero */

loc_0020F09A: ;
    edx = MEM32(eax + 0x568);
    eax = MEM32(edx + 0x444);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0032F870(); /* call 0x0032F870 */

loc_0020F0AE: ;
    esp = esp + 8;
    MEM8(0x84993C) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0020F0BF: ;
    esi = MEM32(0x5499E8);
    ecx = MEM32(esi + 0x1A04);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x2C) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0020F0F7; /* je: equal / zero */

loc_0020F0D3: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0020F0F5; /* jne: not equal / not zero */

loc_0020F0DC: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0020F0F5; /* jne: not equal / not zero */

loc_0020F0E8: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0020F0F5; /* je: equal / zero */

loc_0020F0EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0020F0F5: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_0020F0F7: ;
    ecx = MEM32(esi + 0x1A08);
    if (TEST_NZ(ecx, ecx)) goto loc_0020F107; /* jne: not equal / not zero */

loc_0020F101: ;
    MEM32(esp + 0x20) = ecx;
    goto loc_0020F12F;

loc_0020F107: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0020F129; /* jne: not equal / not zero */

loc_0020F110: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0020F129; /* jne: not equal / not zero */

loc_0020F11C: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0020F129; /* je: equal / zero */

loc_0020F123: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0020F129: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    MEM32(esp + 0x20) = ecx;

loc_0020F12F: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020F134: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ebx = 1;
    MEM8(eax + 0x10) = LO8(ebx);
    edi = MEM32(eax);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x114;
    PUSH32(esp, eax);
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(0x8498F8) = edi;
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_0020F16D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_0020F180: ;
    edi = eax;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020F187: ;
    MEM8(eax + 0x13) = LO8(ebx);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0020F198: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_0020F1AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0020F1B5: ;
    PUSH32(esp, 0x776630);
    PUSH32(esp, 0); sub_00202640(); /* call 0x00202640 */

loc_0020F1BF: ;
    edx = MEM32(0x85D5B4);
    edi = edx;
    MEM32(edx + 0xE0) = 0;
    eax = 0; /* xor self */
    ecx = 0x24;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edx + 0x338) = LO8(ebx);
    esp = esp + 4;
    edx = 0x1010101;
    ecx = 0x40358;
    MEM8(0x8493C8) = LO8(ebx);
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F1F8: ;
    PUSH32(esp, ebx);
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0020F208: ;
    esi = 0x1E01;
    edx = esi;
    ecx = 0x40378;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F219: ;
    edx = 0xFF;
    ecx = 0x40368;
    MEM32(0x549B0C) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F22E: ;
    edx = 0x207;
    ecx = 0x40364;
    MEM32(0x549B14) = 0xFF;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F247: ;
    xmm0 = MEMF(0x649830); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x7768E0); /* movss */
    xmm2 = xmm2 * MEMF(0x648CE4); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64B244); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64B240); /* movss */
    MEM32(0x549B10) = 0x207;
    MEMF(esp + 0xFC) = xmm1; /* movss */
    (void)0; /* cmp MEM32(ebp + 0xC), ebx - flags set for next jcc */
    edi = MEM32(0x849938);
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x100) = xmm0; /* movss */
    MEMF(esp + 0x104) = xmm1; /* movss */
    if (CMP_NE(MEM32(ebp + 0xC), ebx)) goto loc_0020F307; /* jne: not equal / not zero */

loc_0020F2B2: ;
    if (TEST_NZ(MEM8(0x87BFCC), LO8(ebx))) goto loc_0020F2DE; /* jne: not equal / not zero */

loc_0020F2BA: ;
    eax = MEM32(0x87BFCC);
    xmm0 = xmm0 - MEMF(0x5A005C); /* subss */
    eax = eax | ebx;
    MEM32(0x87BFCC) = eax;
    MEMF(0x75E224) = xmm0; /* movss */
    MEMF(0x75E228) = xmm1; /* movss */

loc_0020F2DE: ;
    xmm0 = MEMF(0x75E22C); /* movss */
    edx = MEM32(0x75E220);
    eax = MEM32(0x75E224);
    ecx = MEM32(0x75E228);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x75E230); /* movss */
    goto loc_0020F374;

loc_0020F307: ;
    ecx = MEM32(ebp + 0xC);
    eax = 2;
    if (CMP_NE(ecx, eax)) goto loc_0020F3A0; /* jne: not equal / not zero */

loc_0020F317: ;
    if (TEST_NZ(MEM8(0x87BFCC), LO8(eax))) goto loc_0020F34D; /* jne: not equal / not zero */

loc_0020F31F: ;
    ecx = MEM32(0x87BFCC);
    xmm0 = xmm0 - MEMF(0x64B23C); /* subss */
    xmm0 = xmm0 + MEMF(0x5A005C); /* addss */
    ecx = ecx | eax;
    MEM32(0x87BFCC) = ecx;
    MEMF(0x75E210) = xmm0; /* movss */
    MEMF(0x75E214) = xmm1; /* movss */

loc_0020F34D: ;
    xmm0 = MEMF(0x75E218); /* movss */
    edx = MEM32(0x75E20C);
    eax = MEM32(0x75E210);
    ecx = MEM32(0x75E214);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x75E21C); /* movss */

loc_0020F374: ;
    MEM32(esp + 0x100) = eax;
    eax = MEM32(edi + 0x200);
    eax = eax | 0x1000000;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0xFC) = edx;
    MEM32(esp + 0x104) = ecx;
    MEM32(edi + 0x200) = eax;

loc_0020F3A0: ;
    xmm2 = MEMF(edi + 0x260); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(edi + 0x264); /* movss */
    xmm1 = xmm1 / MEMF(esp + 0x10); /* divss */
    ecx = edi;
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    PUSH32(esp, 0); sub_002F7480(); /* call 0x002F7480 */

loc_0020F3D3: ;
    eax = MEM32(0x8470DC);
    MEM32(eax + 0x420) = MEM32(eax + 0x420) | 0x80000000u;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0020F4FE; /* jne: not equal / not zero */

loc_0020F3ED: ;
    ecx = MEM32(0x84A5F8);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    goto loc_0020F400;

    /* nop */

loc_0020F400: ;
    edx = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(esi + edx), 0)) goto loc_0020F456; /* je: equal / zero */

loc_0020F40C: ;
    edx = MEM32(edi + ecx + 0x64);
    if (TEST_Z(edx, edx)) goto loc_0020F456; /* je: equal / zero */

loc_0020F414: ;
    SET_LO8(eax, MEM8(edi + ecx + 0xA1));
    if (CMP_EQ(LO8(eax), 3)) goto loc_0020F456; /* je: equal / zero */

loc_0020F41F: ;
    if (CMP_EQ(LO8(eax), 5)) goto loc_0020F456; /* je: equal / zero */

loc_0020F423: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_0020F456; /* je: equal / zero */

loc_0020F427: ;
    if (CMP_EQ(MEM32(edi + ecx + 0x68), 0xFFFF)) goto loc_0020F456; /* je: equal / zero */

loc_0020F431: ;
    if (CMP_NE(LO8(eax), 9)) goto loc_0020F456; /* jne: not equal / not zero */

loc_0020F435: ;
    if (CMP_EQ(edx, 0x10)) goto loc_0020F443; /* je: equal / zero */

loc_0020F43A: ;
    if (TEST_NZ(MEM8(edi + ecx + 0x16E), LO8(ebx))) goto loc_0020F456; /* jne: not equal / not zero */

loc_0020F443: ;
    PUSH32(esp, 0xB);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_0020F44D: ;
    ecx = MEM32(0x84A5F8);
    esp = esp + 8;

loc_0020F456: ;
    edi = edi + 0x6D0;
    esi++;
    if (CMP_L(edi, 0x36800)) goto loc_0020F400; /* jl: less (signed <) */

loc_0020F465: ;
    edi = MEM32(0x847200);
    if (TEST_Z(edi, edi)) goto loc_0020F591; /* je: equal / zero */

loc_0020F473: ;
    SET_LO8(ecx, MEM8(edi + 6));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(edi + 0xE0);
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0020F4EB; /* je: equal / zero */

loc_0020F484: ;
    SET_LO8(ecx, MEM8(edi + 0x20));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0020F4EB; /* jne: not equal / not zero */

loc_0020F48B: ;
    SET_LO8(edx, MEM8(edi));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_0020F492: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0020F4A9; /* je: equal / zero */

loc_0020F498: ;
    if (TEST_NZ(MEM8(esi + 0x16E), LO8(ebx))) goto loc_0020F4A9; /* jne: not equal / not zero */

loc_0020F4A0: ;
    if (CMP_EQ(MEM8(esi + 0xA1), 9)) goto loc_0020F4AF; /* je: equal / zero */

loc_0020F4A9: ;
    edi = MEM32(esp + 0x14);
    goto loc_0020F4ED;

loc_0020F4AF: ;
    eax = esi;
    PUSH32(esp, 0); sub_00082260(); /* call 0x00082260 */

loc_0020F4B6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0020F4C0; /* je: equal / zero */

loc_0020F4BA: ;
    edi = MEM32(esp + 0x14);
    goto loc_0020F4ED;

loc_0020F4C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x847204) = LO8(ebx);
    PUSH32(esp, 0); sub_000780E0(); /* call 0x000780E0 */

loc_0020F4D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000780E0(); /* call 0x000780E0 */

loc_0020F4DB: ;
    edi = MEM32(esp + 0x34);
    esp = esp + 0x20;
    MEM8(0x847204) = 0;
    goto loc_0020F4ED;

loc_0020F4EB: ;
    edi = eax;

loc_0020F4ED: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_0020F473; /* jne: not equal / not zero */

loc_0020F4F9: ;
    goto loc_0020F591;

loc_0020F4FE: ;
    eax = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_0020F50C: ;
    esp = esp + 8;
    edx = 0x1010101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F51E: ;
    PUSH32(esp, ebx);
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0020F52E: ;
    edx = esi;
    ecx = 0x40378;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F53A: ;
    edx = 0xFF;
    ecx = 0x40368;
    MEM32(0x549B0C) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F54F: ;
    edx = 0x207;
    ecx = 0x40364;
    MEM32(0x549B14) = 0xFF;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F568: ;
    edi = MEM32(0x849938);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x549B10) = 0x207;
    MEM8(0x847204) = LO8(ebx);
    PUSH32(esp, 0); sub_00077F10(); /* call 0x00077F10 */

loc_0020F587: ;
    esp = esp + 8;
    MEM8(0x847204) = 0;

loc_0020F591: ;
    ecx = MEM32(0x849938);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, 0); sub_002F7480(); /* call 0x002F7480 */

loc_0020F5A8: ;
    SET_LO8(eax, MEM8(0x849AD8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0020F622; /* je: equal / zero */

loc_0020F5B1: ;
    xmm0 = MEMF(0x648FDC); /* movss */
    PUSH32(esp, 0x5F8EE8);
    esi = esp + 0x20;
    MEMF(esp + 0x110) = xmm0; /* movss */
    MEMF(esp + 0x114) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_0020F5D9: ;
    esp = esp + 4;
    edx = 0x1010101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F5EB: ;
    ecx = MEM32(0x75E204);
    edx = MEM32(0x75E208);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0xC8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = esp + 0x118;
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_0020F618: ;
    esp = esp + 0xC;
    MEM8(0x849AD8) = 0;

loc_0020F622: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0020F62D: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0020F634: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020F63E: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020F646: ;
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020F651: ;
    esi = 3;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020F65E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0020F664: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F670: ;
    PUSH32(esp, edi);
    MEM32(0x549AE8) = edi;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0020F67C: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F688: ;
    PUSH32(esp, ebx);
    MEM32(0x549AF8) = edi;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0020F694: ;
    edx = 0x1E01;
    ecx = 0x40378;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F6A3: ;
    edx = 0; /* xor self */
    ecx = 0x40368;
    MEM32(0x549B0C) = 0x1E01;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F6B9: ;
    edx = 0x201;
    ecx = 0x40364;
    MEM32(0x549B14) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F6CE: ;
    edx = ebx;
    ecx = 0x40304;
    MEM32(0x549B10) = 0x201;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F6E4: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F6F9: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F712: ;
    edx = 0x1000000;
    ecx = 0x40358;
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F72B: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    ecx = 2;
    eax = 0; /* xor self */
    MEM32(0x549B04) = 0x1000000;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0020F749: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = ebx;
    eax = ebx;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0020F759: ;
    esp = esp + 0x28;
    MEM32(0x547330) = esi;
    MEM32(0x547334) = esi;
    eax = 2;
    ecx = MEM32(0x5499F0);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x648E8C); /* movss */
    ecx = ecx | ebx;
    PUSH32(esp, 0x18);
    MEM32(0x5499F0) = ecx;
    ecx = esp + 0x154;
    PUSH32(esp, ecx);
    MEM32(0x547340) = eax;
    MEM32(0x54733C) = eax;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    MEMF(esp + 0x160) = xmm1; /* movss */
    MEMF(esp + 0x164) = xmm1; /* movss */
    MEMF(esp + 0x168) = xmm0; /* movss */
    MEMF(esp + 0x178) = xmm2; /* movss */
    MEMF(esp + 0x17C) = xmm1; /* movss */
    MEMF(esp + 0x180) = xmm0; /* movss */
    MEMF(esp + 0x190) = xmm2; /* movss */
    MEMF(esp + 0x194) = xmm2; /* movss */
    MEMF(esp + 0x198) = xmm0; /* movss */
    MEMF(esp + 0x1A8) = xmm1; /* movss */
    MEMF(esp + 0x1AC) = xmm2; /* movss */
    MEMF(esp + 0x1B0) = xmm0; /* movss */
    MEM32(esp + 0x1B4) = eax;
    MEM32(esp + 0x19C) = eax;
    MEM32(esp + 0x184) = eax;
    MEM32(esp + 0x16C) = eax;
    MEMF(esp + 0x170) = xmm1; /* movss */
    MEMF(esp + 0x174) = xmm1; /* movss */
    MEMF(esp + 0x188) = xmm0; /* movss */
    MEMF(esp + 0x18C) = xmm1; /* movss */
    MEMF(esp + 0x1A0) = xmm0; /* movss */
    MEMF(esp + 0x1A4) = xmm0; /* movss */
    MEMF(esp + 0x1B8) = xmm1; /* movss */
    MEMF(esp + 0x1BC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0020F87E: ;
    edx = 0x10101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F88D: ;
    PUSH32(esp, edi);
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0020F89D: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020F8A2: ;
    esi = 0x8498F8;
    edx = eax;
    PUSH32(esp, 0); sub_001CDCE0(); /* call 0x001CDCE0 */

loc_0020F8AE: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020F8B3: ;
    esi = esp + 0x24;
    edx = eax;
    PUSH32(esp, 0); sub_001CDCE0(); /* call 0x001CDCE0 */

loc_0020F8BE: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0020F8CD: ;
    if (CMP_EQ(esi, edi)) goto loc_0020F8D7; /* je: equal / zero */

loc_0020F8D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0020F8D7: ;
    eax = MEM32(esp + 0x20);
    if (CMP_EQ(eax, edi)) goto loc_0020F8E5; /* je: equal / zero */

loc_0020F8DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0020F8E5: ;
    eax = MEM32(0x776700);
    PUSH32(esp, 0x7767F0);
    MEM32(0x84B868) = eax;
    PUSH32(esp, 0); sub_00202250(); /* call 0x00202250 */

loc_0020F8F9: ;
    ecx = MEM32(0x6B8314);
    esi = MEM32(0x84B868);
    esp = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0020F912: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0020F919: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0020F91E: ;
    MEM8(eax + 0x10) = LO8(ebx);
    eax = MEM32(eax);
    MEM32(0x8498F8) = eax;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0020F930: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0xFF;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0020F93E: ;
    ecx = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0020F947: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0x11B;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0020F955: ;
    ecx = eax;
    eax = 2;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0020F961: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0x142;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0020F96F: ;
    ecx = eax;
    eax = 3;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0020F97B: ;
    edx = esp + 0x1FC;
    eax = edx;
    PUSH32(esp, edx);
    esi = esi + 0x10;
    ecx = 0x10;
    edi = esp + 0x200;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_0020F99C: ;
    esp = esp + 0x14;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0020F9A9: ;
    esi = MEM32(esp + 0x2C);
    esi = esi + 0x90;
    ecx = 0x10;
    edi = esp + 0x1B0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x1B0;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_0020F9D1: ;
    esp = esp + 8;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0020F9DE: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0020F9E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0020F9EF: ;
    edx = ebx;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020F9FB: ;
    edx = ebx;
    ecx = 0x40340;
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FA0D: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x549AEC) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FA22: ;
    MEM32(0x549AE0) = 0x206;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_0020FA33: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FA42: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FA58: ;
    PUSH32(esp, ebx);
    MEM32(0x549AF8) = 0;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0020FA68: ;
    edx = 0x1E01;
    ecx = 0x40378;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FA77: ;
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, MEMF(0x875740) - sets EFLAGS */
    MEM32(0x549B0C) = 0x1E01;
    if ((xmm7 >= MEMF(0x875740))) goto loc_0020FAA2; /* jae: above or equal (unsigned >=) */

loc_0020FA8D: ;
    xmm0 = MEMF(0x87574C); /* movss */
    /* ucomiss xmm0, MEMF(0x875748) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0020FAD4; /* jp: parity */

loc_0020FAA2: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020FAA7: ;
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    MEMF(0x875748) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020FAC4: ;
    xmm0 = xmm0 + MEMF(0x648E14); /* addss */
    MEMF(0x875740) = xmm0; /* movss */

loc_0020FAD4: ;
    eax = MEM32(0x875748);
    xmm0 = MEMF(0x7FA218); /* movss */
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = 0x875744;
    edx = 0x87574C;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0020FAFB: ;
    esp = esp + 0xC;
    edx = 0; /* xor self */
    ecx = 0x40368;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FB0A: ;
    edx = 0x207;
    ecx = 0x40364;
    MEM32(0x549B14) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FB23: ;
    edx = ebx;
    ecx = 0x40304;
    MEM32(0x549B10) = 0x207;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FB39: ;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FB4E: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FB67: ;
    edx = ebx;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0020FB7D: ;
    esi = 2;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = 4;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = ebx;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0020FB9C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0020FBAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = esi;
    eax = esi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0020FBBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    edi = 3;
    PUSH32(esp, ebx);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0020FBCE: ;
    esp = esp + 0x50;
    MEM32(0x547330) = edi;
    MEM32(0x547334) = edi;
    MEM32(0x547340) = esi;
    MEM32(0x54733C) = esi;
    MEM32(0x5473B0) = edi;
    MEM32(0x5473B4) = edi;
    MEM32(0x5473C0) = esi;
    MEM32(0x5473BC) = esi;
    MEM32(0x547430) = ebx;
    MEM32(0x547434) = ebx;
    MEM32(0x547440) = ebx;
    MEM32(0x54743C) = ebx;
    MEM32(0x5474B0) = ebx;
    eax = MEM32(0x5499F0);
    xmm2 = MEMF(0x7FA218); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm0 = MEMF(0x75E200); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(0x648D34); /* movss */
    eax = eax | 0xF;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEM32(0x5474B4) = ebx;
    MEM32(0x5474C0) = esi;
    MEM32(0x5499F0) = eax;
    MEM32(0x5474BC) = esi;
    MEMF(0x75E200) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_0020FC83; /* jbe: below or equal (unsigned <=) */

loc_0020FC73: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x75E200) = xmm0; /* movss */

loc_0020FC83: ;
    xmm2 = MEMF(0x649244); /* movss */
    xmm0 = MEMF(0x6BD4D0); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0020FCCE; /* jbe: below or equal (unsigned <=) */

loc_0020FC98: ;
    xmm0 = xmm0 * MEMF(0x648E2C); /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(0x6BD4D0) = xmm0; /* movss */
    if ((xmm0 <= xmm2)) goto loc_0020FCB5; /* jbe: below or equal (unsigned <=) */

loc_0020FCAD: ;
    MEMF(0x6BD4D0) = xmm2; /* movss */

loc_0020FCB5: ;
    eax = MEM32(0x5499F0);
    eax = eax | 4;
    MEM32(0x547440) = esi;
    MEM32(0x5499F0) = eax;
    MEM32(0x54743C) = esi;

loc_0020FCCE: ;
    edi = MEM32(ebp + 8);
    xmm2 = MEMF(esp + 0x100); /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm4 = MEMF(esp + 0xFC); /* movss */
    xmm3 = MEMF(esp + 0x104); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    PUSH32(esp, edi);
    ecx = esp + 0x118;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, ecx);
    edx = esp + 0xF8;
    MEMF(esp + 0x120) = xmm2; /* movss */
    MEMF(esp + 0x12C) = xmm2; /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x20); /* subss */
    xmm0 = xmm0 + xmm4; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x120) = xmm1; /* movss */
    MEMF(esp + 0x128) = xmm3; /* movss */
    MEMF(esp + 0x12C) = xmm0; /* movss */
    MEMF(esp + 0x134) = xmm3; /* movss */
    MEMF(esp + 0x138) = xmm0; /* movss */
    MEMF(esp + 0x13C) = xmm2; /* movss */
    MEMF(esp + 0x140) = xmm3; /* movss */
    MEMF(esp + 0x144) = xmm1; /* movss */
    MEMF(esp + 0x148) = xmm2; /* movss */
    MEMF(esp + 0x14C) = xmm3; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0020FD89: ;
    eax = esp + 0x114;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0); sub_003E25C0(); /* call 0x003E25C0 */

loc_0020FD9A: ;
    xmm0 = MEMF(esp + 0x128); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x11C); /* subss */
    xmm5 = MEMF(0x87573C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x144); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x120); /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x130); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x124); /* subss */
    esp = esp + 8;
    /* comiss xmm7, xmm5 - sets EFLAGS */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((xmm7 < xmm5)) goto loc_0020FE4C; /* jb: below (unsigned <) */

loc_0020FDF2: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020FDF7: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 + MEMF(0x648D14); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020FE0F: ;
    xmm6 = MEMF(0x648D40); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - MEMF(0x648F20); /* subss */
    MEMF(0x875738) = xmm0; /* movss */
    MEMF(0x875734) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0020FE38: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    MEMF(0x875730) = xmm0; /* movss */

loc_0020FE4C: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0x41000000);
    xmm5 = xmm5 - xmm0; /* subss */
    PUSH32(esp, 0);
    ecx = 0x875734;
    edx = 0x875738;
    MEMF(0x87573C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0020FE7B: ;
    xmm0 = MEMF(0x875738); /* movss */
    esp = esp + 0xC;
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002100C8; /* jp: parity */

loc_0020FE93: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0020FE98: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    xmm0 = MEMF(esp + 0x114); /* movss */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm2 = MEMF(0x6BD4D0); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x118); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x11C); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x120); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x124); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x128); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x12C); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x130); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x134); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x138); /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x13C); /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x140); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    edx = edx + 0xC8;
    edx = edx << 0x18;
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm1 = MEMF(0x75E200); /* movss */
    eax = edx;
    eax = eax | 0xFFFFFF;
    MEMF(esp + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x40) = xmm7; /* movss */
    MEMF(esp + 0x44) = xmm7; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm7; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xD0) = xmm7; /* movss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm7; /* movss */
    MEMF(esp + 0x4C) = xmm7; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm7; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xD8) = xmm7; /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm7; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm2; /* movss */
    MEMF(esp + 0xE0) = xmm7; /* movss */
    MEMF(esp + 0xE4) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm7; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm1; /* movss */
    MEMF(esp + 0xE8) = xmm7; /* movss */
    MEMF(esp + 0xEC) = xmm1; /* movss */
    goto loc_002100B0;

    /* nop */

loc_002100B0: ;
    PUSH32(esp, 0x30);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_002100C0: ;
    esi--;
    if ((esi != 0)) goto loc_002100B0; /* jne: not equal / not zero */

loc_002100C3: ;
    goto loc_00210853;

loc_002100C8: ;
    xmm4 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(0x875730); /* movss */
    xmm0 = xmm0 - MEMF(0x648E54); /* subss */
    xmm3 = MEMF(esp + 0xF4); /* movss */
    xmm5 = MEMF(esp + 0xF0); /* movss */
    xmm6 = MEMF(esp + 0xF8); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x20); /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 * xmm7; /* mulss */
    MEMF(esp + 0x144) = xmm3; /* movss */
    xmm3 = xmm3 + xmm5; /* addss */
    MEMF(esp + 0x14C) = xmm4; /* movss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    xmm5 = xmm5 * xmm7; /* mulss */
    MEMF(esp + 0x108) = xmm5; /* movss */
    xmm5 = xmm5 + xmm6; /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x10C) = xmm5; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm5 = xmm5 + xmm6; /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00210171: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm6 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x94) = xmm2; /* movss */
    MEMF(esp + 0xC4) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0xC0) = xmm3; /* movss */
    xmm3 = MEMF(0x6BD4D0); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm7; /* mulss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x60) = xmm4; /* movss */
    MEMF(esp + 0x68) = xmm5; /* movss */
    MEMF(esp + 0x90) = xmm4; /* movss */
    MEMF(esp + 0x98) = xmm5; /* movss */
    MEMF(esp + 0xC8) = xmm6; /* movss */
    MEMF(esp + 0x40) = xmm7; /* movss */
    MEMF(esp + 0x44) = xmm7; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm7; /* movss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    edx = edx + 0xC8;
    edx = edx << 0x18;
    eax = edx;
    eax = eax | 0xFFFFFF;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xD0) = xmm7; /* movss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm7; /* movss */
    MEMF(esp + 0x4C) = xmm7; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm7; /* movss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xD8) = xmm7; /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm7; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    MEMF(esp + 0xB4) = xmm2; /* movss */
    MEMF(esp + 0xE4) = xmm2; /* movss */
    xmm2 = MEMF(0x75E200); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0xE0) = xmm7; /* movss */
    MEMF(esp + 0x58) = xmm7; /* movss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm2; /* movss */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0xE8) = xmm7; /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */

loc_00210325: ;
    PUSH32(esp, 0x30);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00210335: ;
    esi--;
    if ((esi != 0)) goto loc_00210325; /* jne: not equal / not zero */

loc_00210338: ;
    xmm2 = 0.0f; /* xorps self = zero */
    edi = 0; /* xor self */
    xmm6 = xmm2; /* movaps */
    goto loc_00210350;

loc_00210342: ;
    xmm2 = 0.0f; /* xorps self = zero */
    goto loc_00210350;

    /* nop */
    edi = edi;

loc_00210350: ;
    xmm6 = xmm6 * MEMF(0x648F94); /* mulss */
    xmm6 = xmm6 * MEMF(0x875738); /* mulss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm7 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(0x648E54); /* addss */
    xmm3 = xmm1; /* movaps */
    xmm1 = MEMF(esp + 0xF4); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm5 = xmm5 + xmm1; /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm6 = xmm6 + xmm1; /* addss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x20); /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0xF0); /* addss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x28); /* movss */
    xmm6 = xmm6 * MEMF(esp + 0x20); /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0xF0); /* addss */
    MEMF(esp + 0x148) = xmm6; /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0xF8); /* addss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x28); /* movss */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    xmm6 = xmm6 + MEMF(esp + 0xF8); /* addss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00210422: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm7 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x30) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    MEMF(esp + 0x64) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x38) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x148); /* movss */
    MEMF(esp + 0xC0) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x60) = xmm7; /* movss */
    MEMF(esp + 0x68) = xmm6; /* movss */
    MEMF(esp + 0x90) = xmm7; /* movss */
    MEMF(esp + 0x94) = xmm5; /* movss */
    MEMF(esp + 0x98) = xmm6; /* movss */
    MEMF(esp + 0xC4) = xmm5; /* movss */
    MEMF(esp + 0xC8) = xmm4; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    MEMF(esp + 0xA4) = xmm3; /* movss */
    MEMF(esp + 0xD0) = xmm2; /* movss */
    MEMF(esp + 0xD4) = xmm3; /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    edx = edx + 0xC8;
    edx = edx << 0x18;
    eax = edx;
    eax = eax | 0xFFFFFF;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm3; /* movss */
    MEMF(esp + 0xD8) = xmm2; /* movss */
    MEMF(esp + 0xDC) = xmm3; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    xmm5 = MEMF(0x6BD4D0); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm5; /* mulss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    MEMF(esp + 0x84) = xmm4; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm5; /* mulss */
    MEMF(esp + 0xB4) = xmm4; /* movss */
    MEMF(esp + 0xE4) = xmm4; /* movss */
    xmm4 = MEMF(0x75E200); /* movss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    MEMF(esp + 0xE0) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm3; /* movss */
    MEMF(esp + 0xE8) = xmm2; /* movss */
    MEMF(esp + 0xEC) = xmm3; /* movss */
    esi = 2;

loc_002105F2: ;
    PUSH32(esp, 0x30);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00210602: ;
    esi--;
    if ((esi != 0)) goto loc_002105F2; /* jne: not equal / not zero */

loc_00210605: ;
    xmm0 = MEMF(0x648D20); /* movss */
    edi++;
    xmm6 = (float)(int32_t)edi; /* cvtsi2ss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 > xmm6)) goto loc_00210342; /* ja: above (unsigned >) */

loc_0021061B: ;
    xmm3 = MEMF(esp + 0xF4); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm5 = MEMF(esp + 0xF0); /* movss */
    xmm4 = MEMF(esp + 0x14C); /* movss */
    xmm7 = MEMF(esp + 0xF8); /* movss */
    xmm6 = MEMF(esp + 0x10C); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x144); /* movss */
    xmm3 = xmm3 + xmm5; /* addss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x108); /* movss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm6 = xmm6 + xmm7; /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0021068A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0xC0) = xmm3; /* movss */
    MEMF(esp + 0x60) = xmm4; /* movss */
    MEMF(esp + 0x90) = xmm4; /* movss */
    xmm4 = MEMF(0x6BD4D0); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    MEMF(esp + 0x54) = xmm3; /* movss */
    MEMF(esp + 0x84) = xmm3; /* movss */
    xmm3 = xmm4; /* movaps */
    MEMF(esp + 0xB4) = xmm3; /* movss */
    MEMF(esp + 0xE4) = xmm3; /* movss */
    xmm3 = MEMF(0x75E200); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(esp + 0x94) = xmm2; /* movss */
    MEMF(esp + 0xC4) = xmm2; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esp + 0x38) = xmm5; /* movss */
    edx = edx + 0xC8;
    edx = edx << 0x18;
    eax = edx;
    eax = eax | 0xFFFFFF;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x68) = xmm6; /* movss */
    MEMF(esp + 0x98) = xmm6; /* movss */
    MEMF(esp + 0xC8) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xD0) = xmm2; /* movss */
    MEMF(esp + 0xD4) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xD8) = xmm2; /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xE0) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm3; /* movss */
    MEMF(esp + 0xE8) = xmm2; /* movss */
    MEMF(esp + 0xEC) = xmm3; /* movss */
    esi = 2;

loc_00210840: ;
    PUSH32(esp, 0x30);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00210850: ;
    esi--;
    if ((esi != 0)) goto loc_00210840; /* jne: not equal / not zero */

loc_00210853: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_00210858: ;
    edx = MEM32(0x8498F8);
    ecx = 0; /* xor self */

loc_00210860: ;
    if (CMP_EQ(edx, MEM32(eax + ecx * 4))) goto loc_0021087C; /* je: equal / zero */

loc_00210865: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_00210860; /* jl: less (signed <) */

loc_0021086B: ;
    eax = MEM32(0x7768C0);
    MEM32(0x84B868) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0021087C: ;
    MEM8(eax + ecx + 0x10) = 0;
    eax = MEM32(0x7768C0);
    MEM32(0x8498F8) = 0;
    MEM32(0x84B868) = eax;

loc_00210895: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002108A0
 * Original: 0x002108A0 - 0x00211046 (1958 bytes, 398 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002108A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002108A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x534;
    eax = MEM32(0x849934);
    SET_LO8(eax, MEM8(eax + 0x11B4));
    xmm0 = MEMF(0x648F08); /* movss */
    ecx = MEM32(0x849800);
    xmm1 = MEMF(0x64AEAC); /* movss */
    PUSH32(esp, ebx);
    MEM8(esp + 0xB) = LO8(eax);
    eax = ZX8(LO8(eax));
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0x39C);
    MEMF(esp + 0x154) = xmm0; /* movss */
    xmm0 = MEMF(0x64938C); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    edx = esp + 0x214;
    MEMF(esp + 0x15C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    PUSH32(esp, edx);
    eax = esp + 0x214;
    MEMF(esp + 0x164) = xmm0; /* movss */
    MEMF(esp + 0x168) = xmm1; /* movss */
    xmm1 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x16C) = xmm0; /* movss */
    MEMF(esp + 0x174) = xmm0; /* movss */
    xmm0 = MEMF(0x649C4C); /* movss */
    PUSH32(esp, eax);
    eax = 0x5D4FB4;
    MEM32(esp + 0x20) = esi;
    MEMF(esp + 0x174) = xmm1; /* movss */
    MEMF(esp + 0x17C) = xmm0; /* movss */
    MEM32(esp + 0x110) = 0x5F8EC4;
    MEM32(esp + 0x114) = 0x5F8EA4;
    MEM32(esp + 0x118) = 0x5F8E84;
    MEM32(esp + 0x11C) = 0x5F8E60;
    MEM8(esp + 0x1A4) = LO8(ebx);
    MEM32(esp + 0x1A8) = ebx;
    MEM8(esp + 0x1F8) = LO8(ebx);
    MEM8(esp + 0x204) = LO8(ebx);
    MEM8(esp + 0x205) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_002109B4: ;
    eax = MEM32(0x849AA4);
    ecx = esp + 0x1B8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F9A48);
    MEM8(esp + 0x228) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_002109D2: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x10;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    MEMF(esp + 0x208) = xmm0; /* movss */
    MEMF(esp + 0x20C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x5F8E40);
    eax = 1;
    ecx = esp + 0x18C;
    MEM32(esp + 0x18C) = ebx;
    MEM32(esp + 0x190) = ebx;
    MEMF(esp + 0x214) = xmm0; /* movss */
    MEMF(esp + 0x218) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_00210A2E: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    eax = esi;
    ecx = esp + 0x190;
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_00210A46: ;
    edi = esp + 0x180;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_00210A52: ;
    xmm0 = MEMF(0x64935C); /* movss */
    MEMF(0x8076A4) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x649128); /* movss */
    MEM32(0x8076B0) = 2;
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;
    MEMF(0x807660) = xmm0; /* movss */
    edi = 0; /* xor self */

loc_00210AA3: ;
    edx = MEM32(esp + edi * 4 + 0x108);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F8E30);
    ecx = esp + 0x34C;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00210AC7: ;
    xmm0 = MEMF(esp + edi * 8 + 0x16C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x19C); /* addss */
    xmm1 = MEMF(esp + edi * 8 + 0x170); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x1A0); /* addss */
    esp = esp + 0x14;
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    ecx = esp + 0x344;
    esi = esp + 0x184;
    MEMF(esp + 0x18C) = xmm0; /* movss */
    MEMF(esp + 0x190) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002018F0(); /* call 0x002018F0 */

loc_00210B24: ;
    edi++;
    if (CMP_L(edi, 4)) goto loc_00210AA3; /* jl: less (signed <) */

loc_00210B2E: ;
    if (CMP_NE(MEM8(esp + 0x19C), LO8(ebx))) goto loc_00210B74; /* jne: not equal / not zero */

loc_00210B37: ;
    eax = MEM32(esp + 0x1A0);
    if (CMP_EQ(eax, 1)) goto loc_00210B5E; /* je: equal / zero */

loc_00210B43: ;
    if (CMP_EQ(eax, 2)) goto loc_00210B5E; /* je: equal / zero */

loc_00210B48: ;
    if (CMP_EQ(eax, 4)) goto loc_00210B5E; /* je: equal / zero */

loc_00210B4D: ;
    if (CMP_EQ(eax, 3)) goto loc_00210B5E; /* je: equal / zero */

loc_00210B52: ;
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, 0xC57A0000u);
    goto loc_00210B68;

loc_00210B5E: ;
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, 0x45002000);

loc_00210B68: ;
    eax = esp + 0x188;
    PUSH32(esp, 0); sub_002015C0(); /* call 0x002015C0 */

loc_00210B74: ;
    eax = MEM32(esp + 0x214);
    if (CMP_EQ(eax, ebx)) goto loc_00210BF9; /* je: equal / zero */

loc_00210B7F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00210B85: ;
    if (TEST_NZ(eax, eax)) goto loc_00210BBE; /* jne: not equal / not zero */

loc_00210B89: ;
    eax = MEM32(esp + 0x214);
    if (CMP_EQ(eax, ebx)) goto loc_00210BBE; /* je: equal / zero */

loc_00210B94: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00210BB4: ;
    esp = esp + 4;
    MEM32(esp + 0x214) = ebx;

loc_00210BBE: ;
    ecx = MEM32(esp + 0x210);
    edi = 0x84D458;
    esi = ecx;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_00210BD1: ;
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_00210BF9; /* je: equal / zero */

loc_00210BD7: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebx)) goto loc_00210BE0; /* je: equal / zero */

loc_00210BDC: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00210BE0: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebx))) goto loc_00210BF9; /* jne: not equal / not zero */

loc_00210BE6: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00210BEF: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00210BF9: ;
    xmm1 = MEMF(0x64938C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x224) = xmm1; /* movss */
    xmm1 = MEMF(0x649108); /* movss */
    MEMF(esp + 0x22C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D50); /* movss */
    edx = esp + 0x214;
    MEMF(esp + 0x234) = xmm1; /* movss */
    MEMF(esp + 0x23C) = xmm1; /* movss */
    MEMF(esp + 0x244) = xmm1; /* movss */
    xmm1 = MEMF(0x648E5C); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x214;
    MEMF(esp + 0x250) = xmm1; /* movss */
    xmm1 = MEMF(0x649534); /* movss */
    PUSH32(esp, eax);
    eax = 0x5D4FB4;
    MEMF(esp + 0x228) = xmm0; /* movss */
    MEMF(esp + 0x230) = xmm0; /* movss */
    MEMF(esp + 0x238) = xmm0; /* movss */
    MEMF(esp + 0x240) = xmm0; /* movss */
    MEMF(esp + 0x248) = xmm0; /* movss */
    MEMF(esp + 0x250) = xmm0; /* movss */
    MEMF(esp + 0x258) = xmm0; /* movss */
    MEMF(esp + 0x25C) = xmm1; /* movss */
    MEMF(esp + 0x260) = xmm0; /* movss */
    MEMF(esp + 0x264) = xmm1; /* movss */
    MEM32(esp + 0x160) = 0x5F8E0C;
    MEM32(esp + 0x164) = 0x5F8DE8;
    MEM32(esp + 0x168) = 0x5F8DC4;
    MEM32(esp + 0x16C) = 0x5F8DA0;
    MEM32(esp + 0x170) = 0x5F8D7C;
    MEM32(esp + 0x174) = 0x5F8D4C;
    MEM32(esp + 0x178) = 0x5F8D1C;
    MEM32(esp + 0x17C) = 0x5F8CF8;
    MEM8(esp + 0x1A4) = LO8(ebx);
    MEM32(esp + 0x1A8) = 1;
    MEM8(esp + 0x1F8) = LO8(ebx);
    MEM8(esp + 0x204) = LO8(ebx);
    MEM8(esp + 0x205) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00210D4D: ;
    eax = MEM32(0x849AA4);
    ecx = esp + 0x1B8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F9A3C);
    MEM8(esp + 0x228) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00210D6B: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0x28);
    esp = esp + 0x10;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEMF(esp + 0x20C) = xmm0; /* movss */
    MEMF(esp + 0x210) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 1);
    ecx = esp + 0x190;
    MEM32(esp + 0x190) = ebx;
    MEM32(esp + 0x194) = ebx;
    MEMF(esp + 0x218) = xmm0; /* movss */
    MEMF(esp + 0x21C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_00210DC5: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F8F20);
    eax = 2;
    ecx = esp + 0x18C;
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_00210DE1: ;
    edi = esp + 0x180;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_00210DED: ;
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x649128); /* movss */
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;
    MEMF(0x807660) = xmm0; /* movss */
    edi = 0; /* xor self */

loc_00210E24: ;
    edx = MEM32(esp + edi * 4 + 0x158);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F8E30);
    ecx = esp + 0x34C;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00210E48: ;
    xmm0 = MEMF(esp + edi * 8 + 0x234); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x19C); /* addss */
    xmm1 = MEMF(esp + edi * 8 + 0x238); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x1A0); /* addss */
    esp = esp + 0x14;
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    ecx = esp + 0x344;
    esi = esp + 0x184;
    MEMF(esp + 0x18C) = xmm0; /* movss */
    MEMF(esp + 0x190) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002018F0(); /* call 0x002018F0 */

loc_00210EA5: ;
    edi++;
    if (CMP_L(edi, 8)) goto loc_00210E24; /* jl: less (signed <) */

loc_00210EAF: ;
    if (CMP_NE(MEM8(esp + 0x19C), LO8(ebx))) goto loc_00210EF5; /* jne: not equal / not zero */

loc_00210EB8: ;
    eax = MEM32(esp + 0x1A0);
    if (CMP_EQ(eax, 1)) goto loc_00210EDF; /* je: equal / zero */

loc_00210EC4: ;
    if (CMP_EQ(eax, 2)) goto loc_00210EDF; /* je: equal / zero */

loc_00210EC9: ;
    if (CMP_EQ(eax, 4)) goto loc_00210EDF; /* je: equal / zero */

loc_00210ECE: ;
    if (CMP_EQ(eax, 3)) goto loc_00210EDF; /* je: equal / zero */

loc_00210ED3: ;
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, 0xC57A0000u);
    goto loc_00210EE9;

loc_00210EDF: ;
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, 0x45002000);

loc_00210EE9: ;
    eax = esp + 0x188;
    PUSH32(esp, 0); sub_002015C0(); /* call 0x002015C0 */

loc_00210EF5: ;
    eax = MEM32(esp + 0x214);
    if (CMP_EQ(eax, ebx)) goto loc_00210FC1; /* je: equal / zero */

loc_00210F04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00210F0A: ;
    if (TEST_NZ(eax, eax)) goto loc_00210F43; /* jne: not equal / not zero */

loc_00210F0E: ;
    eax = MEM32(esp + 0x214);
    if (CMP_EQ(eax, ebx)) goto loc_00210F43; /* je: equal / zero */

loc_00210F19: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00210F39: ;
    esp = esp + 4;
    MEM32(esp + 0x214) = ebx;

loc_00210F43: ;
    ecx = MEM32(esp + 0x210);
    if (CMP_EQ(ecx, ebx)) goto loc_00210F78; /* je: equal / zero */

loc_00210F4E: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(edx * 8 + 0x84D788);
    if (CMP_EQ(edx, ebx)) goto loc_00210F78; /* je: equal / zero */

loc_00210F63: ;
    eax = MEM32(edx + -4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edi = edx + -28;
    if (CMP_EQ(eax, ecx)) goto loc_00211007; /* je: equal / zero */

loc_00210F71: ;
    edx = MEM32(edx + 4);
    if (CMP_NE(edx, ebx)) goto loc_00210F63; /* jne: not equal / not zero */

loc_00210F78: ;
    eax = MEM32(0x84DAB0);
    esi = MEM32(0x84DAB4);
    if (CMP_AE(eax, esi)) goto loc_00210F99; /* jae: above or equal (unsigned >=) */

loc_00210F87: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    edx = MEM32(eax);
    if (CMP_EQ(ecx, ebx)) goto loc_00210F92; /* je: equal / zero */

loc_00210F8D: ;
    if (CMP_EQ(ecx, MEM32(edx + 0x18))) goto loc_00210F9B; /* je: equal / zero */

loc_00210F92: ;
    eax = eax + 4;
    if (CMP_B(eax, esi)) goto loc_00210F87; /* jb: below (unsigned <) */

loc_00210F99: ;
    edx = 0; /* xor self */

loc_00210F9B: ;
    edi = edx;

loc_00210F9D: ;
    if (CMP_EQ(edi, ebx)) goto loc_00210FC1; /* je: equal / zero */

loc_00210FA1: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebx)) goto loc_00210FAA; /* je: equal / zero */

loc_00210FA6: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_00210FAA: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebx))) goto loc_00210FC1; /* jne: not equal / not zero */

loc_00210FB0: ;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_00210FB7: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_00210FC1: ;
    esi = MEM32(0x5499E8);
    ecx = MEM32(esi + 0x1A04);
    if (CMP_EQ(ecx, ebx)) goto loc_00210FF5; /* je: equal / zero */

loc_00210FD1: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_00210FF3; /* jne: not equal / not zero */

loc_00210FDA: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_00210FF3; /* jne: not equal / not zero */

loc_00210FE6: ;
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_00210FF3; /* je: equal / zero */

loc_00210FED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_00210FF3: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00210FF5: ;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 0x1A08);
    if (CMP_NE(ecx, ebx)) { sub_00211046(); return; } /* jne: not equal / not zero */

loc_00211003: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0021106A(); return; /* tail jmp 0x0021106A */

loc_00211007: ;
    edx = MEM32(edi + 0x1C);
    (void)0; /* cmp MEM32(edx), ebx - flags set for next jcc */
    eax = edi + 0x1C;
    if (CMP_EQ(MEM32(edx), ebx)) goto loc_00210F9D; /* je: equal / zero */

loc_00211011: ;
    esi = MEM32(eax + 4);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(edx + 4) = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0021101D; /* je: equal / zero */

loc_0021101B: ;
    MEM32(esi) = edx;

loc_0021101D: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    if (CMP_EQ(MEM32(edx), ebx)) goto loc_0021102C; /* je: equal / zero */

loc_00211026: ;
    edx = MEM32(edx);
    if (CMP_NE(MEM32(edx), ebx)) goto loc_00211026; /* jne: not equal / not zero */

loc_0021102C: ;
    esi = MEM32(edx + 4);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(edx + 4) = eax;
    MEM32(eax) = edx;
    MEM32(eax + 4) = esi;
    if (CMP_EQ(esi, ebx)) goto loc_00210F9D; /* je: equal / zero */

loc_0021103F: ;
    MEM32(esi) = eax;
    goto loc_00210F9D;

}

/**
 * sub_00212610
 * Original: 0x00212610 - 0x00212649 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00212610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    (void)0; /* cmp MEM32(0x6BD278), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(0x6BD278), 0xFFFFFFFFu)) { sub_00212649(); return; } /* jne: not equal / not zero */

loc_00212632: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(0x87570C) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00213200
 * Original: 0x00213200 - 0x00215922 (10018 bytes, 2248 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
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

loc_00213200: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp - 8;
    esp = esp & 0xFFFFFFF0u;
    esp = esp + 4;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    MEM32(esp + 4) = ebp;
    ebp = esp;
    eax = MEM32(0x849934);
    esp = esp - 0x654;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00215918; /* je: equal / zero */

loc_0021322C: ;
    edi = ebp + -1360;
    PUSH32(esp, 0); sub_00289650(); /* call 0x00289650 */

loc_00213237: ;
    edi = MEM32(0x849934);
    esi = eax;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_00213268; /* jne: not equal / not zero */

loc_00213248: ;
    if (CMP_NE(MEM32(0x849E54), 2)) goto loc_00213268; /* jne: not equal / not zero */

loc_00213251: ;
    PUSH32(esp, 0x75EBF0);
    ebx = 0x18;
    PUSH32(esp, 0); sub_00268DC0(); /* call 0x00268DC0 */

loc_00213260: ;
    esp = esp + 4;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0021326F; /* jne: not equal / not zero */

loc_00213268: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x11B7);

loc_0021326F: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + eax * 4 + 0x554);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F8C94);
    eax = ebp + -784;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00213291: ;
    eax = MEM32(0x86267C);
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_002132A1; /* jne: not equal / not zero */

loc_0021329D: ;
    ecx = 0; /* xor self */
    goto loc_002132AC;

loc_002132A1: ;
    ecx = MEM32(0x862680);
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);

loc_002132AC: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = ebp + -944;
    ecx = ecx & 5;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00200CC0(); /* call 0x00200CC0 */

loc_002132C1: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = ebp + -784;
    ecx = ebp + -944;
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_002132DD: ;
    SET_LO8(eax, MEM8(0x862D08));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    ecx = ebp + -944;
    PUSH32(esp, 0);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002132FF; /* jne: not equal / not zero */

loc_002132F3: ;
    PUSH32(esp, 0x5F8E40);
    eax = 1;
    goto loc_00213309;

loc_002132FF: ;
    PUSH32(esp, 0x5F8F20);
    eax = 3;

loc_00213309: ;
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_0021330E: ;
    edi = ebp + -944;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_00213319: ;
    esi = edi;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_00213320: ;
    eax = ebp + -304;
    PUSH32(esp, eax);
    eax = MEM32(0x849AA4);
    PUSH32(esp, 0x5F9A48);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00213336: ;
    ecx = ebp + -32;
    eax = 0; /* xor self */
    PUSH32(esp, ecx);
    edx = ebp + -48;
    PUSH32(esp, edx);
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0); sub_0021ABE0(); /* call 0x0021ABE0 */

loc_0021334B: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x776710);
    PUSH32(esp, 0); sub_00202870(); /* call 0x00202870 */

loc_00213369: ;
    esp = esp + 0x24;
    edx = 0x1010101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0021337B: ;
    (void)0; /* cmp MEM32(0x863D04), 3 - flags set for next jcc */
    esi = MEM32(0x849934);
    MEM32(0x549B04) = 0x1010101;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_002133B4; /* jne: not equal / not zero */

loc_00213394: ;
    if (CMP_NE(MEM32(0x849E54), 2)) goto loc_002133B4; /* jne: not equal / not zero */

loc_0021339D: ;
    PUSH32(esp, 0x75EBF0);
    ebx = 0x18;
    PUSH32(esp, 0); sub_00268DC0(); /* call 0x00268DC0 */

loc_002133AC: ;
    esp = esp + 4;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002133BB; /* jne: not equal / not zero */

loc_002133B4: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x11B7);

loc_002133BB: ;
    if (CMP_GE(eax & eax, 0)) goto loc_002133C3; /* jge: greater or equal (signed >=) */

loc_002133BF: ;
    eax = 0; /* xor self */
    goto loc_002133CD;

loc_002133C3: ;
    if (CMP_LE(eax, 0x17)) goto loc_002133CD; /* jle: less or equal (signed <=) */

loc_002133C8: ;
    eax = 0x17;

loc_002133CD: ;
    eax = MEM32(eax * 4 + 0x6BD440);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_002133DD: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_002134BB; /* je: equal / zero */

loc_002133EA: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00213406; /* jb: below (unsigned <) */

loc_002133F7: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00213406: ;
    MEM32(eax) = 0x4030C;
    edx = 0; /* xor self */
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = edx;
    if (CMP_NE(eax, 2)) goto loc_00213465; /* jne: not equal / not zero */

loc_00213436: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0021343B: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00213440: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00213456; /* jb: below (unsigned <) */

loc_00213447: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00213456: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0021345E: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00213463: ;
    MEM32(esi) = eax;

loc_00213465: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0021346C: ;
    xmm0 = MEMF(0x648FDC); /* movss */
    MEMF(ebp + -44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A978); /* movss */
    edx = 0x1010101;
    ecx = 0x40358;
    MEMF(ebp + -40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00213495: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x41E66667);
    PUSH32(esp, 0x422CCCCD);
    eax = edi;
    edx = ebp + -44;
    MEM32(0x549B04) = 0x1010101;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_002134B8: ;
    esp = esp + 0xC;

loc_002134BB: ;
    eax = MEM32(0x849934);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003521F0(); /* call 0x003521F0 */

loc_002134C6: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_002135FB; /* je: equal / zero */

loc_002134D0: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_002134D7: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x18);
    edi = ebp + -8;
    MEM32(ebp + -8) = 0;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_002134EA: ;
    eax = MEM32(ebp + -8);
    xmm2 = MEMF(0x64908C); /* movss */
    MEMF(eax) = xmm2; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(0x64B238); /* movss */
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEM32(eax + 4) = 0xB4FFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm4 = MEMF(0x64B234); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xB4FFFFFFu;
    xmm3 = MEMF(0x64B230); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xB4FFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xB4FFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    esp = esp + 8;
    eax = eax + 4;
    MEM32(ecx) = eax;

loc_002135FB: ;
    edx = MEM32(0x84B868);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00218880(); /* call 0x00218880 */

loc_00213611: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00213625: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    esp = esp + 0x18;
    if (CMP_B(eax, ecx)) goto loc_00213646; /* jb: below (unsigned <) */

loc_00213637: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00213646: ;
    MEM32(eax) = 0x4030C;
    edx = 0; /* xor self */
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = edx;
    if (CMP_NE(eax, 2)) goto loc_002136A5; /* jne: not equal / not zero */

loc_00213676: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0021367B: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00213680: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00213696; /* jb: below (unsigned <) */

loc_00213687: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00213696: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0021369E: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_002136A3: ;
    MEM32(esi) = eax;

loc_002136A5: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    xmm0 = xmm0 - MEMF(0x648FDC); /* subss */
    edi = ebp + -1232;
    MEMF(ebp + -4) = xmm0; /* movss */
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;
    PUSH32(esp, 0); sub_00289650(); /* call 0x00289650 */

loc_002136E2: ;
    edi = MEM32(0x849934);
    esi = eax;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_00213713; /* jne: not equal / not zero */

loc_002136F3: ;
    if (CMP_NE(MEM32(0x849E54), 2)) goto loc_00213713; /* jne: not equal / not zero */

loc_002136FC: ;
    PUSH32(esp, 0x75EBF0);
    ebx = 0x18;
    PUSH32(esp, 0); sub_00268DC0(); /* call 0x00268DC0 */

loc_0021370B: ;
    esp = esp + 4;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0021371A; /* jne: not equal / not zero */

loc_00213713: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x11B7);

loc_0021371A: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + eax * 4 + 0x554);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F8C88);
    eax = ebp + -784;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0021373C: ;
    PUSH32(esp, 0x5F59F0);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    edx = ebp + -8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = ebp + -784;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00213759: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm1 = MEMF(0x87BFC8); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ebp + -8); /* movss */
    xmm0 = xmm0 + MEMF(0x648FDC); /* addss */
    esp = esp + 0x24;
    MEMF(0x87BFC8) = xmm1; /* movss */
    MEMF(ebp + -20) = xmm0; /* movss */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_push(MEMF(0x87BFC8)); /* fld float */
    /* fld st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_002137AB; /* jb: below (unsigned <) */

loc_002137A9: ;
    /* FPU: fprem  */

loc_002137AB: ;
    /* fstp st(1) */
    MEMF(ebp + -24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(0x649218); /* movss */
    SET_LO8(eax, MEM8(0x849B80));
    xmm1 = MEMF(ebp + -4); /* movss */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3FC00000);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    MEM8(ebp + -25) = LO8(eax);
    MEM8(0x807697) = 0xFF;
    MEM32(0x8076B0) = 1;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00213802: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xBBC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00213816: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x648E58); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + -4); /* addss */
    xmm1 = MEMF(0x649218); /* movss */
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3FC00000);
    MEMF(ebp + -4) = xmm0; /* movss */
    MEMF(0x807650) = xmm1; /* movss */
    MEMF(0x807654) = xmm0; /* movss */
    MEMF(0x807658) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00213864: ;
    PUSH32(esp, 0x5F7554);
    esi = ebp + -784;
    PUSH32(esp, 0); sub_0021DB50(); /* call 0x0021DB50 */

loc_00213874: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + -4); /* addss */
    xmm1 = MEMF(0x649218); /* movss */
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FC00000);
    MEMF(ebp + -4) = xmm0; /* movss */
    MEMF(0x807650) = xmm1; /* movss */
    MEMF(0x807654) = xmm0; /* movss */
    MEMF(0x807658) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002138C2: ;
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0xBC0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_002138D5: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x648E58); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + -4); /* addss */
    MEMF(ebp + -4) = xmm0; /* movss */
    xmm1 = MEMF(0x649218); /* movss */
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3FC00000);
    MEMF(0x807650) = xmm1; /* movss */
    MEMF(0x807654) = xmm0; /* movss */
    MEMF(0x807658) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00213923: ;
    esp = esp + 0x44;
    PUSH32(esp, 0x5F8C78);
    PUSH32(esp, 0); sub_0021DB50(); /* call 0x0021DB50 */

loc_00213930: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + -4); /* addss */
    xmm1 = MEMF(0x649218); /* movss */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3FC00000);
    MEMF(ebp + -4) = xmm0; /* movss */
    MEMF(0x807650) = xmm1; /* movss */
    MEMF(0x807654) = xmm0; /* movss */
    MEMF(0x807658) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0021397E: ;
    edx = MEM32(0x849800);
    eax = MEM32(edx + 0xBC4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00213992: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x648E58); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + -4); /* addss */
    xmm1 = MEMF(0x649218); /* movss */
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3FC00000);
    MEMF(ebp + -4) = xmm0; /* movss */
    MEMF(0x807650) = xmm1; /* movss */
    MEMF(0x807654) = xmm0; /* movss */
    MEMF(0x807658) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002139E0: ;
    PUSH32(esp, 0x5F8C6C);
    PUSH32(esp, 0); sub_0021DB50(); /* call 0x0021DB50 */

loc_002139EA: ;
    SET_LO8(eax, MEM8(ebp + -25));
    esp = esp + 0x28;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00213AEA; /* jne: not equal / not zero */

loc_002139F8: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + -4); /* addss */
    xmm1 = MEMF(0x649218); /* movss */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3FC00000);
    MEMF(ebp + -4) = xmm0; /* movss */
    MEMF(0x807650) = xmm1; /* movss */
    MEMF(0x807654) = xmm0; /* movss */
    MEMF(0x807658) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00213A46: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xBC8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00213A5A: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x648E58); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + -4); /* addss */
    xmm1 = MEMF(0x649218); /* movss */
    PUSH32(esp, 0x3EE66666);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3FC00000);
    MEMF(ebp + -4) = xmm0; /* movss */
    MEMF(0x807650) = xmm1; /* movss */
    MEMF(0x807654) = xmm0; /* movss */
    MEMF(0x807658) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00213AA8: ;
    PUSH32(esp, 0x5F8C54);
    PUSH32(esp, 0); sub_0021DB50(); /* call 0x0021DB50 */

loc_00213AB2: ;
    xmm1 = MEMF(0x6BD4C4); /* movss */
    xmm0 = MEMF(0x649218); /* movss */
    xmm1 = xmm1 * MEMF(0x648E40); /* mulss */
    xmm1 = xmm1 + MEMF(ebp + -4); /* addss */
    esp = esp + 0x24;
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */

loc_00213AEA: ;
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_00213AEF: ;
    edx = MEM32(0x849B1C);
    eax = MEM32(0x7767E0);
    edx--;
    edi = ebp + -32;
    esi = ebp + -48;
    MEM32(0x849B1C) = edx;
    MEM32(0x84B868) = eax;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_00213B11: ;
    SET_LO8(ecx, MEM8(0x87A1C0));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00213B42; /* jne: not equal / not zero */

loc_00213B20: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | eax;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_00213B3D: ;
    eax = 1;

loc_00213B42: ;
    esi = MEM32(0x87A1AC);
    MEM8(0x87A1BC) = LO8(eax);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM32(ebp + -12) = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00213B58: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00222DD0(); /* call 0x00222DD0 */

loc_00213B6B: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00213BA6; /* je: equal / zero */

loc_00213B72: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00213B7B: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_00213B80: ;
    ecx = 0; /* xor self */

loc_00213B82: ;
    if (CMP_EQ(esi, MEM32(eax + ecx * 4))) goto loc_00213B97; /* je: equal / zero */

loc_00213B87: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_00213B82; /* jl: less (signed <) */

loc_00213B8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00213B97: ;
    MEM8(eax + ecx + 0x10) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00213BA6: ;
    ecx = MEM32(0x6B8314);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00213BB2: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00213BB9: ;
    SET_LO8(eax, MEM8(0x75C14C));
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_00213BC9; /* ja: above (unsigned >) */

loc_00213BC2: ;
    ecx = 0; /* xor self */
    goto loc_00213C5B;

loc_00213BC9: ;
    esi = MEM32(0x75C148);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_00213BFE; /* jne: not equal / not zero */

loc_00213BD6: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00213BE7: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00213BEF: ;
    ecx = MEM32(0x75C148);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C148);

loc_00213BFE: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00213C2A; /* jne: not equal / not zero */

loc_00213C05: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00213C0D: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C148);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00213C2A; /* jne: not equal / not zero */

loc_00213C1D: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C148);

loc_00213C2A: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00213C53; /* jne: not equal / not zero */

loc_00213C32: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00213C4E; /* jne: not equal / not zero */

loc_00213C3C: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00213C45: ;
    esi = MEM32(0x75C148);
    esp = esp + 8;

loc_00213C4E: ;
    ecx = MEM32(esi + 4);
    goto loc_00213C5B;

loc_00213C53: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00213C58: ;
    ecx = MEM32(eax + 4);

loc_00213C5B: ;
    eax = 1;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00213C65: ;
    SET_LO8(eax, MEM8(0x75C22C));
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_00213C75; /* ja: above (unsigned >) */

loc_00213C6E: ;
    ecx = 0; /* xor self */
    goto loc_00213D07;

loc_00213C75: ;
    esi = MEM32(0x75C228);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_00213CAA; /* jne: not equal / not zero */

loc_00213C82: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00213C93: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00213C9B: ;
    ecx = MEM32(0x75C228);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C228);

loc_00213CAA: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00213CD6; /* jne: not equal / not zero */

loc_00213CB1: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00213CB9: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C228);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00213CD6; /* jne: not equal / not zero */

loc_00213CC9: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C228);

loc_00213CD6: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00213CFF; /* jne: not equal / not zero */

loc_00213CDE: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00213CFA; /* jne: not equal / not zero */

loc_00213CE8: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00213CF1: ;
    esi = MEM32(0x75C228);
    esp = esp + 8;

loc_00213CFA: ;
    ecx = MEM32(esi + 4);
    goto loc_00213D07;

loc_00213CFF: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00213D04: ;
    ecx = MEM32(eax + 4);

loc_00213D07: ;
    eax = 2;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00213D11: ;
    SET_LO8(eax, MEM8(0x75C364));
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_00213D21; /* ja: above (unsigned >) */

loc_00213D1A: ;
    ecx = 0; /* xor self */
    goto loc_00213DB3;

loc_00213D21: ;
    esi = MEM32(0x75C360);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_00213D56; /* jne: not equal / not zero */

loc_00213D2E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00213D3F: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00213D47: ;
    ecx = MEM32(0x75C360);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C360);

loc_00213D56: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00213D82; /* jne: not equal / not zero */

loc_00213D5D: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00213D65: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C360);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00213D82; /* jne: not equal / not zero */

loc_00213D75: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C360);

loc_00213D82: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00213DAB; /* jne: not equal / not zero */

loc_00213D8A: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00213DA6; /* jne: not equal / not zero */

loc_00213D94: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00213D9D: ;
    esi = MEM32(0x75C360);
    esp = esp + 8;

loc_00213DA6: ;
    ecx = MEM32(esi + 4);
    goto loc_00213DB3;

loc_00213DAB: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00213DB0: ;
    ecx = MEM32(eax + 4);

loc_00213DB3: ;
    eax = 3;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00213DBD: ;
    eax = MEM32(0x84B868);
    esi = eax + 0x10;
    MEM32(ebp + -16) = eax;
    eax = ebp + -720;
    ecx = 0x10;
    edi = ebp + -720;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_00213DE4: ;
    esp = esp + 8;
    edx = ebp + -720;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00213DF7: ;
    esi = MEM32(ebp + -16);
    edx = ebp + -656;
    eax = edx;
    PUSH32(esp, edx);
    esi = esi + 0x90;
    ecx = 0x10;
    edi = ebp + -656;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_00213E1C: ;
    esp = esp + 8;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00213E29: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00213E33: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00213E3A: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00213E49: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00213E5F: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = 0;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00213E70: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00213E7F: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00213E95: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AF8) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00213EAE: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00213EC7: ;
    PUSH32(esp, 0);
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_00213ED8: ;
    esi = 2;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00213EF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esi;
    eax = 1;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00213F05: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esi;
    eax = esi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00213F16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    edi = 3;
    PUSH32(esp, 1);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00213F2C: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    xmm5 = MEMF(0x75E1F0); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    eax = 1;
    MEM32(0x547430) = eax;
    MEM32(0x547434) = eax;
    MEM32(0x5474B0) = eax;
    MEM32(0x5474B4) = eax;
    eax = MEM32(0x5499F0);
    xmm5 = xmm5 - xmm0; /* subss */
    xmm0 = MEMF(0x648D34); /* movss */
    eax = eax | 0xF;
    esp = esp + 0x50;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEM32(0x547330) = edi;
    MEM32(0x547334) = edi;
    MEM32(0x547340) = esi;
    MEM32(0x54733C) = esi;
    MEM32(0x5473B0) = edi;
    MEM32(0x5473B4) = edi;
    MEM32(0x5473C0) = esi;
    MEM32(0x5473BC) = esi;
    MEM32(0x547440) = esi;
    MEM32(0x54743C) = esi;
    MEM32(0x5474C0) = esi;
    MEM32(0x5499F0) = eax;
    MEM32(0x5474BC) = esi;
    MEMF(0x75E1F0) = xmm5; /* movss */
    if ((xmm0 <= xmm5)) goto loc_00213FE1; /* jbe: below or equal (unsigned <=) */

loc_00213FD6: ;
    xmm5 = xmm4; /* movaps */
    MEMF(0x75E1F0) = xmm5; /* movss */

loc_00213FE1: ;
    xmm1 = MEMF(0x649118); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x64B22C); /* movss */
    xmm3 = MEMF(0x6493C0); /* movss */
    ecx = ebp + -304;
    PUSH32(esp, ecx);
    edx = ebp + -240;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(ebp + -240) = xmm2; /* movss */
    MEMF(ebp + -236) = xmm3; /* movss */
    MEMF(ebp + -232) = xmm0; /* movss */
    MEMF(ebp + -192) = xmm1; /* movss */
    MEMF(ebp + -188) = xmm3; /* movss */
    MEMF(ebp + -184) = xmm0; /* movss */
    MEMF(ebp + -144) = xmm1; /* movss */
    MEMF(ebp + -140) = xmm1; /* movss */
    MEMF(ebp + -136) = xmm0; /* movss */
    MEMF(ebp + -96) = xmm2; /* movss */
    MEMF(ebp + -92) = xmm1; /* movss */
    MEMF(ebp + -88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00214069: ;
    ecx = ebp + -304;
    PUSH32(esp, ecx);
    edx = ebp + -192;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0021407F: ;
    ecx = ebp + -304;
    PUSH32(esp, ecx);
    edx = ebp + -144;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00214095: ;
    ecx = ebp + -304;
    PUSH32(esp, ecx);
    edx = ebp + -96;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_002140A8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002140AD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x24;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = MEMF(0x649244); /* movss */
    MEMF(ebp + -224) = xmm0; /* movss */
    MEMF(ebp + -220) = xmm0; /* movss */
    MEMF(ebp + -176) = xmm4; /* movss */
    MEMF(ebp + -172) = xmm0; /* movss */
    MEMF(ebp + -128) = xmm4; /* movss */
    MEMF(ebp + -124) = xmm4; /* movss */
    MEMF(ebp + -80) = xmm0; /* movss */
    MEMF(ebp + -76) = xmm4; /* movss */
    MEMF(ebp + -216) = xmm0; /* movss */
    MEMF(ebp + -212) = xmm0; /* movss */
    MEMF(ebp + -168) = xmm4; /* movss */
    MEMF(ebp + -164) = xmm0; /* movss */
    MEMF(ebp + -120) = xmm4; /* movss */
    MEMF(ebp + -116) = xmm4; /* movss */
    MEMF(ebp + -72) = xmm0; /* movss */
    MEMF(ebp + -68) = xmm4; /* movss */
    MEMF(ebp + -208) = xmm0; /* movss */
    MEMF(ebp + -204) = xmm0; /* movss */
    MEMF(ebp + -160) = xmm4; /* movss */
    MEMF(ebp + -156) = xmm0; /* movss */
    MEMF(ebp + -112) = xmm4; /* movss */
    MEMF(ebp + -108) = xmm1; /* movss */
    MEMF(ebp + -64) = xmm0; /* movss */
    MEMF(ebp + -60) = xmm1; /* movss */
    MEMF(ebp + -200) = xmm0; /* movss */
    edx = edx - 0x51;
    edx = edx << 0x18;
    edx = edx | 0xFFFFFF;
    MEM32(ebp + -228) = edx;
    MEM32(ebp + -180) = edx;
    MEM32(ebp + -132) = edx;
    MEM32(ebp + -84) = edx;
    MEMF(ebp + -196) = xmm5; /* movss */
    MEMF(ebp + -148) = xmm5; /* movss */
    xmm5 = xmm5 + xmm4; /* addss */
    PUSH32(esp, 8);
    PUSH32(esp, 0x30);
    edi = ebp + -4;
    MEMF(ebp + -152) = xmm4; /* movss */
    MEMF(ebp + -104) = xmm4; /* movss */
    MEMF(ebp + -100) = xmm5; /* movss */
    MEMF(ebp + -56) = xmm0; /* movss */
    MEMF(ebp + -52) = xmm5; /* movss */
    MEM32(ebp + -4) = 0;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_002141C5: ;
    esp = esp + 8;
    edi = ebp + -200;
    MEM32(ebp + -20) = 4;

loc_002141D5: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    ecx = MEM32(edi + -4);
    PUSH32(esp, edx);
    edx = MEM32(edi + -8);
    PUSH32(esp, eax);
    eax = MEM32(edi + -12);
    xmm0 = MEMF(edi + -40); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + -16);
    PUSH32(esp, edx);
    edx = MEM32(edi + -20);
    PUSH32(esp, eax);
    eax = MEM32(edi + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(edi + -32);
    PUSH32(esp, eax);
    eax = MEM32(edi + -36);
    ecx = edi + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, 0); sub_00200430(); /* call 0x00200430 */

loc_0021420D: ;
    eax = MEM32(ebp + -20);
    esp = esp + 0x2C;
    edi = edi + 0x30;
    eax--;
    MEM32(ebp + -20) = eax;
    if ((eax != 0)) goto loc_002141D5; /* jne: not equal / not zero */

loc_0021421C: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(0x5499E8);
    MEM32(eax) = 0x417FC;
    edi = 4;
    eax = eax + edi;
    MEM32(eax) = 0;
    eax = eax + edi;
    MEM32(ebp + -4) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00214248: ;
    SET_LO8(ecx, MEM8(0x87A1C0));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00214274; /* jne: not equal / not zero */

loc_00214257: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | eax;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_00214274: ;
    eax = 0; /* xor self */
    goto loc_00214280;

    /* nop */
    /* nop */

loc_00214280: ;
    edx = MEM32(ebp + -12);
    if (CMP_EQ(edx, MEM32(eax * 4 + 0x87A1AC))) goto loc_00214293; /* je: equal / zero */

loc_0021428C: ;
    eax++;
    if (CMP_L(eax, edi)) goto loc_00214280; /* jl: less (signed <) */

loc_00214291: ;
    goto loc_0021429A;

loc_00214293: ;
    MEM8(eax + 0x87A1BC) = 0;

loc_0021429A: ;
    eax = ebp + -304;
    PUSH32(esp, eax);
    eax = MEM32(0x849AA4);
    PUSH32(esp, 0x5F9A3C);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_002142B0: ;
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    edx = ebp + -48;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0021ABE0(); /* call 0x0021ABE0 */

loc_002142BD: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x776710);
    PUSH32(esp, 0); sub_00202870(); /* call 0x00202870 */

loc_002142DB: ;
    esp = esp + 0x24;
    edx = 0x1010101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002142ED: ;
    MEM32(0x549B04) = 0x1010101;
    MEM32(ebp + -592) = 0x144;
    MEM32(ebp + -588) = 0x146;
    MEM32(ebp + -584) = 0x148;
    MEM32(ebp + -580) = 0x14A;
    MEM32(ebp + -576) = 0x14C;
    MEM32(ebp + -572) = 0x14E;
    MEM32(ebp + -568) = 0x150;
    MEM32(ebp + -564) = 0x152;
    MEM32(ebp + -560) = 0x154;
    MEM32(ebp + -556) = 0x156;
    MEM32(ebp + -552) = 0x158;
    MEM32(ebp + -548) = 0x15A;
    MEM32(ebp + -544) = 0x15C;
    MEM32(ebp + -540) = 0x15E;
    MEM32(ebp + -536) = 0x160;
    MEM32(ebp + -532) = 0x162;
    MEM32(ebp + -528) = 0x164;
    MEM32(ebp + -524) = 0x166;
    MEM32(ebp + -520) = 0x168;
    MEM32(ebp + -516) = 0x16A;
    MEM32(ebp + -512) = 0x16C;
    MEM32(ebp + -508) = 0x16E;
    MEM32(ebp + -504) = 0x170;
    MEM32(ebp + -500) = 0x172;
    MEM32(ebp + -400) = 0x5F8C48;
    MEM32(ebp + -396) = 0x5F8C38;
    MEM32(ebp + -392) = 0x5F8C28;
    MEM32(ebp + -388) = 0x5F8C0C;
    MEM32(ebp + -384) = 0x5F8BF4;
    MEM32(ebp + -380) = 0x5F8BE4;
    MEM32(ebp + -376) = 0x5F8BCC;
    MEM32(ebp + -372) = 0x5F8BBC;
    MEM32(ebp + -368) = 0x5F8BAC;
    MEM32(ebp + -364) = 0x5F8BA4;
    MEM32(ebp + -360) = 0x5F8B98;
    MEM32(ebp + -356) = 0x5F8B8C;
    MEM32(ebp + -352) = 0x5F8B7C;
    MEM32(ebp + -348) = 0x5F8B64;
    MEM32(ebp + -344) = 0x5F8B48;
    MEM32(ebp + -340) = 0x5F8B3C;
    MEM32(ebp + -336) = 0x5F8B28;
    MEM32(ebp + -332) = 0x5F8B18;
    MEM32(ebp + -328) = 0x5F8B08;
    MEM32(ebp + -324) = 0x5F8AF4;
    MEM32(ebp + -320) = 0x5F8AE4;
    MEM32(ebp + -316) = 0x5F8AD0;
    MEM32(ebp + -312) = 0x5F8AC0;
    MEM32(ebp + -308) = 0x5F8AB4;
    MEM32(ebp + -496) = 0x145;
    MEM32(ebp + -492) = 0x147;
    MEM32(ebp + -488) = 0x149;
    MEM32(ebp + -484) = 0x14B;
    MEM32(ebp + -480) = 0x14D;
    MEM32(ebp + -476) = 0x14F;
    MEM32(ebp + -472) = 0x151;
    MEM32(ebp + -468) = 0x153;
    MEM32(ebp + -464) = 0x155;
    MEM32(ebp + -460) = 0x157;
    MEM32(ebp + -456) = 0x159;
    MEM32(ebp + -452) = 0x15B;
    SET_LO8(eax, 0); /* xor self */
    MEM32(ebp + -448) = 0x15D;
    MEM32(ebp + -444) = 0x15F;
    MEM32(ebp + -440) = 0x161;
    MEM32(ebp + -436) = 0x163;
    MEM32(ebp + -432) = 0x165;
    MEM32(ebp + -428) = 0x167;
    MEM32(ebp + -424) = 0x169;
    MEM32(ebp + -420) = 0x16B;
    MEM32(ebp + -416) = 0x16D;
    MEM32(ebp + -412) = 0x16F;
    MEM32(ebp + -408) = 0x171;
    MEM32(ebp + -404) = 0x173;
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002145CE: ;
    PUSH32(esp, 0); sub_00232D70(); /* call 0x00232D70 */

loc_002145D3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002145E0; /* je: equal / zero */

loc_002145D7: ;
    eax = MEM32(0x849ADC);
    if (TEST_Z(eax, eax)) goto loc_0021463E; /* je: equal / zero */

loc_002145E0: ;
    ecx = MEM32(0x77623C);
    (void)0; /* test HI8(ecx), 8 - flags set for next jcc */
    eax = MEM32(0x875700);
    if (TEST_Z(HI8(ecx), 8)) goto loc_002145F8; /* je: equal / zero */

loc_002145F0: ;
    if (CMP_GE(eax, 5)) goto loc_002145F8; /* jge: greater or equal (signed >=) */

loc_002145F5: ;
    eax++;
    goto loc_00214602;

loc_002145F8: ;
    if (TEST_Z(HI8(ecx), 4)) goto loc_00214612; /* je: equal / zero */

loc_002145FD: ;
    if (CMP_LE(eax & eax, 0)) goto loc_00214612; /* jle: less or equal (signed <=) */

loc_00214601: ;
    eax--;

loc_00214602: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x875700) = eax;
    MEMF(0x8756E0) = xmm0; /* movss */

loc_00214612: ;
    (void)0; /* test HI8(ecx), 1 - flags set for next jcc */
    eax = MEM32(0x8756FC);
    if (TEST_Z(HI8(ecx), 1)) goto loc_00214623; /* je: equal / zero */

loc_0021461C: ;
    if (CMP_LE(eax & eax, 0)) goto loc_00214623; /* jle: less or equal (signed <=) */

loc_00214620: ;
    eax--;
    goto loc_0021462E;

loc_00214623: ;
    if (TEST_Z(HI8(ecx), 2)) goto loc_0021463E; /* je: equal / zero */

loc_00214628: ;
    if (CMP_GE(eax, 3)) goto loc_0021463E; /* jge: greater or equal (signed >=) */

loc_0021462D: ;
    eax++;

loc_0021462E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x8756FC) = eax;
    MEMF(0x8756E0) = xmm0; /* movss */

loc_0021463E: ;
    fp_push((double)SMEM32(0x875700)); /* fild */
    xmm7 = MEMF(0x7FA218); /* movss */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40000000);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = 0x8756E8;
    edx = 0x8756F8;
    xmm0 = xmm7; /* movaps */
    MEMF(0x8756F0) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(0x8756FC)); /* fild */
    eax = MEM32(0x8756F0);
    PUSH32(esp, eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(0x8756EC) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_00214692: ;
    ecx = MEM32(0x8756EC);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ecx);
    ecx = 0x8756E4;
    edx = 0x8756F4;
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_002146B5: ;
    xmm1 = MEMF(0x648FDC); /* movss */
    edx = MEM32(0x6B842C);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x8756F8); /* subss */
    MEMF(ebp + -44) = xmm0; /* movss */
    esp = esp + 0x18;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x8756F4); /* subss */
    PUSH32(esp, edx);
    MEMF(ebp + -40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_002146EC: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_002146F3: ;
    eax = 0; /* xor self */
    MEM32(0x547368) = eax;
    MEM32(0x547378) = eax;
    eax = MEM32(0x5499F0);
    edx = 1;
    eax = eax | 0x800;
    ecx = 0x40304;
    MEM32(0x547360) = edi;
    MEM32(0x54736C) = esi;
    MEM32(0x547370) = edi;
    MEM32(0x54737C) = esi;
    MEM32(0x5473E0) = edx;
    MEM32(0x5473E8) = edx;
    MEM32(0x5473EC) = esi;
    MEM32(0x5473F0) = edx;
    MEM32(0x5473F8) = edx;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473FC) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00214759: ;
    esi = 0; /* xor self */
    MEM32(0x549AE4) = 1;
    MEM32(ebp + -20) = esi;
    goto loc_00214770;

    /* nop */

loc_00214770: ;
    MEM32(ebp + -36) = 0;
    goto loc_00214780;

    /* nop */

loc_00214780: ;
    xmm0 = MEMF(0x6495F0); /* movss */
    eax = MEM32(ebp + -20);
    (void)0; /* cmp eax, MEM32(0x8756FC) - flags set for next jcc */
    MEMF(ebp + -16) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(ebp + -12) = xmm0; /* movss */
    if (CMP_NE(eax, MEM32(0x8756FC))) goto loc_002147CA; /* jne: not equal / not zero */

loc_002147A5: ;
    ecx = MEM32(ebp + -36);
    if (CMP_NE(ecx, MEM32(0x875700))) goto loc_002147CA; /* jne: not equal / not zero */

loc_002147B0: ;
    xmm0 = MEMF(0x64B228); /* movss */
    MEMF(ebp + -16) = xmm0; /* movss */
    xmm0 = MEMF(0x648F00); /* movss */
    MEMF(ebp + -12) = xmm0; /* movss */

loc_002147CA: ;
    eax = MEM32(ebp + esi + -496);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_002147DA: ;
    ecx = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_002147E3: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x18);
    edi = ebp + -4;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_002147EF: ;
    xmm3 = MEMF(ebp + -44); /* movss */
    eax = MEM32(ebp + -4);
    xmm6 = MEMF(ebp + -16); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(ebp + -40); /* movss */
    xmm7 = MEMF(ebp + -12); /* movss */
    eax = eax + 4;
    xmm4 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm6; /* subss */
    MEMF(eax + -24) = xmm1; /* movss */
    eax = eax + 4;
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm7; /* subss */
    MEMF(eax + -24) = xmm2; /* movss */
    MEMF(eax + -20) = xmm0; /* movss */
    MEM32(eax + -16) = 0xFFFFFFFFu;
    MEMF(eax + -12) = xmm4; /* movss */
    MEMF(eax + -8) = xmm4; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm3 = xmm3 + xmm6; /* addss */
    MEMF(eax + -16) = xmm3; /* movss */
    MEMF(eax + -12) = xmm2; /* movss */
    MEMF(eax + -8) = xmm0; /* movss */
    MEM32(eax + -4) = 0xFFFFFFFFu;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 + xmm7; /* addss */
    MEMF(eax + -12) = xmm2; /* movss */
    MEMF(eax + -8) = xmm0; /* movss */
    MEM32(eax + -4) = 0xFFFFFFFFu;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    edx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    esp = esp + 0xC;
    eax = eax + 4;
    MEM32(ebp + -4) = eax;
    MEM32(edx) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00214918: ;
    edx = MEM32(ebp + esi + -400);
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_00214924: ;
    eax = MEM32(ebp + -24);
    if (TEST_Z(eax, eax)) goto loc_00214AC0; /* je: equal / zero */

loc_0021492F: ;
    xmm0 = MEMF(0x6495F0); /* movss */
    ecx = MEM32(ebp + -20);
    (void)0; /* cmp ecx, MEM32(0x8756FC) - flags set for next jcc */
    MEMF(ebp + -16) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(ebp + -12) = xmm0; /* movss */
    if (CMP_NE(ecx, MEM32(0x8756FC))) goto loc_00214979; /* jne: not equal / not zero */

loc_00214954: ;
    edx = MEM32(ebp + -36);
    if (CMP_NE(edx, MEM32(0x875700))) goto loc_00214979; /* jne: not equal / not zero */

loc_0021495F: ;
    xmm0 = MEMF(0x64B228); /* movss */
    MEMF(ebp + -16) = xmm0; /* movss */
    xmm0 = MEMF(0x648F00); /* movss */
    MEMF(ebp + -12) = xmm0; /* movss */

loc_00214979: ;
    eax = MEM32(ebp + esi + -592);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00214989: ;
    ecx = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00214992: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x18);
    edi = ebp + -4;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_0021499E: ;
    xmm5 = MEMF(ebp + -44); /* movss */
    eax = MEM32(ebp + -4);
    xmm7 = MEMF(ebp + -16); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm6 = MEMF(ebp + -40); /* movss */
    eax = eax + 4;
    xmm4 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm7; /* subss */
    MEMF(eax + -24) = xmm1; /* movss */
    eax = eax + 4;
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 - MEMF(ebp + -12); /* subss */
    MEMF(eax + -24) = xmm2; /* movss */
    MEMF(eax + -20) = xmm0; /* movss */
    MEM32(eax + -16) = 0xFFFFFFFFu;
    MEMF(eax + -12) = xmm4; /* movss */
    MEMF(eax + -8) = xmm4; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 + xmm7; /* addss */
    MEMF(eax + -16) = xmm3; /* movss */
    MEMF(eax + -12) = xmm2; /* movss */
    MEMF(eax + -8) = xmm0; /* movss */
    MEM32(eax + -4) = 0xFFFFFFFFu;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 + MEMF(ebp + -12); /* addss */
    MEMF(eax + -12) = xmm2; /* movss */
    MEMF(eax + -8) = xmm0; /* movss */
    MEM32(eax + -4) = 0xFFFFFFFFu;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    esp = esp + 0xC;
    eax = eax + 4;
    MEM32(ebp + -4) = eax;
    MEM32(ecx) = eax;
    goto loc_00214AC5;

loc_00214AC0: ;
    xmm5 = MEMF(ebp + -44); /* movss */

loc_00214AC5: ;
    eax = MEM32(ebp + -36);
    xmm5 = xmm5 + MEMF(0x649420); /* addss */
    eax++;
    esi = esi + 4;
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    MEMF(ebp + -44) = xmm5; /* movss */
    MEM32(ebp + -36) = eax;
    if (CMP_L(eax, 6)) goto loc_00214780; /* jl: less (signed <) */

loc_00214AE5: ;
    xmm0 = MEMF(0x648FDC); /* movss */
    xmm0 = xmm0 - MEMF(0x8756F8); /* subss */
    ecx = MEM32(ebp + -20);
    MEMF(ebp + -44) = xmm0; /* movss */
    xmm0 = MEMF(ebp + -40); /* movss */
    xmm0 = xmm0 + MEMF(0x649550); /* addss */
    ecx++;
    (void)0; /* cmp esi, 0x60 - flags set for next jcc */
    MEMF(ebp + -40) = xmm0; /* movss */
    MEM32(ebp + -20) = ecx;
    if (CMP_L(esi, 0x60)) goto loc_00214770; /* jl: less (signed <) */

loc_00214B1C: ;
    edx = MEM32(0x7767E0);
    esi = MEM32(0x849B1C);
    MEM32(0x84B868) = edx;
    esi--;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x849B1C) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00214B44: ;
    edi = ebp + -32;
    esi = ebp + -48;
    MEM32(0x549B04) = 0x10101;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_00214B59: ;
    eax = MEM32(0x6B8314);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00214B64: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00214B6B: ;
    SET_LO8(ecx, MEM8(0x87A1C0));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00214B9C; /* jne: not equal / not zero */

loc_00214B7A: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | eax;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_00214B97: ;
    eax = 1;

loc_00214B9C: ;
    MEM8(0x87A1BC) = LO8(eax);
    eax = MEM32(0x87A1AC);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00214BB1: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0xFF;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00214BBF: ;
    ecx = eax;
    eax = 1;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00214BCB: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0x11B;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00214BD9: ;
    ecx = eax;
    eax = 2;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00214BE5: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0x142;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00214BF3: ;
    ecx = eax;
    eax = 3;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00214BFF: ;
    eax = MEM32(0x84B868);
    esi = eax + 0x10;
    ecx = 0x10;
    edi = ebp + -720;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebp + -720;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_00214C26: ;
    esp = esp + 0x14;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00214C33: ;
    esi = MEM32(ebp + -16);
    eax = ebp + -656;
    esi = esi + 0x90;
    ecx = 0x10;
    edi = ebp + -656;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_00214C58: ;
    esp = esp + 8;
    edx = ebp + -656;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00214C6B: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00214C75: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00214C7C: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00214C8B: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00214CA1: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = 0;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00214CB2: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00214CC1: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00214CD7: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AF8) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00214CF0: ;
    MEM32(0x549AF0) = 0x302;
    edx = 0x303;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00214D09: ;
    esi = 2;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = 4;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00214D2C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esi;
    eax = 1;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00214D40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esi;
    eax = esi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00214D51: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    edi = 3;
    PUSH32(esp, 1);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00214D67: ;
    xmm1 = MEMF(0x75E1E8); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x6493C0); /* movss */
    xmm2 = MEMF(0x649834); /* movss */
    eax = 1;
    esp = esp + 0x50;
    MEM32(0x547330) = edi;
    MEM32(0x547334) = edi;
    MEM32(0x5473B0) = edi;
    MEM32(0x5473B4) = edi;
    edi = MEM32(0x5499F0);
    edx = ebp + -304;
    MEM32(0x547430) = eax;
    MEM32(0x547434) = eax;
    MEM32(0x5474B0) = eax;
    MEM32(0x5474B4) = eax;
    eax = ebp + -240;
    edi = edi | 0xF;
    MEMF(ebp + -236) = xmm1; /* movss */
    MEMF(ebp + -188) = xmm1; /* movss */
    xmm1 = MEMF(0x75E1EC); /* movss */
    PUSH32(esp, edx);
    MEM32(0x547340) = esi;
    MEM32(0x54733C) = esi;
    MEM32(0x5473C0) = esi;
    MEM32(0x5473BC) = esi;
    MEM32(0x547440) = esi;
    MEM32(0x54743C) = esi;
    MEM32(0x5474C0) = esi;
    MEM32(0x5499F0) = edi;
    MEM32(0x5474BC) = esi;
    MEMF(ebp + -240) = xmm3; /* movss */
    MEMF(ebp + -232) = xmm0; /* movss */
    MEMF(ebp + -192) = xmm2; /* movss */
    MEMF(ebp + -184) = xmm0; /* movss */
    MEMF(ebp + -144) = xmm2; /* movss */
    MEMF(ebp + -140) = xmm1; /* movss */
    MEMF(ebp + -136) = xmm0; /* movss */
    MEMF(ebp + -96) = xmm3; /* movss */
    MEMF(ebp + -92) = xmm1; /* movss */
    MEMF(ebp + -88) = xmm0; /* movss */
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00214E6A: ;
    edx = ebp + -304;
    PUSH32(esp, edx);
    eax = ebp + -192;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00214E80: ;
    edx = ebp + -304;
    PUSH32(esp, edx);
    eax = ebp + -144;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00214E96: ;
    edx = ebp + -304;
    PUSH32(esp, edx);
    eax = ebp + -96;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00214EA9: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00214EAE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x24;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x649244); /* movss */
    MEMF(ebp + -108) = xmm2; /* movss */
    MEMF(ebp + -60) = xmm2; /* movss */
    xmm2 = MEMF(0x75E1F0); /* movss */
    MEMF(ebp + -196) = xmm2; /* movss */
    MEMF(ebp + -148) = xmm2; /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    PUSH32(esp, 8);
    PUSH32(esp, 0x30);
    edi = ebp + -4;
    MEMF(ebp + -224) = xmm0; /* movss */
    MEMF(ebp + -220) = xmm0; /* movss */
    MEMF(ebp + -176) = xmm1; /* movss */
    MEMF(ebp + -172) = xmm0; /* movss */
    MEMF(ebp + -128) = xmm1; /* movss */
    MEMF(ebp + -124) = xmm1; /* movss */
    MEMF(ebp + -80) = xmm0; /* movss */
    MEMF(ebp + -76) = xmm1; /* movss */
    MEMF(ebp + -216) = xmm0; /* movss */
    MEMF(ebp + -212) = xmm0; /* movss */
    MEMF(ebp + -168) = xmm1; /* movss */
    MEMF(ebp + -164) = xmm0; /* movss */
    MEMF(ebp + -120) = xmm1; /* movss */
    MEMF(ebp + -116) = xmm1; /* movss */
    MEMF(ebp + -72) = xmm0; /* movss */
    edx = edx - 0x51;
    edx = edx << 0x18;
    edx = edx | 0xFFFFFF;
    MEM32(ebp + -228) = edx;
    MEM32(ebp + -180) = edx;
    MEM32(ebp + -132) = edx;
    MEM32(ebp + -84) = edx;
    MEMF(ebp + -68) = xmm1; /* movss */
    MEMF(ebp + -208) = xmm0; /* movss */
    MEMF(ebp + -204) = xmm0; /* movss */
    MEMF(ebp + -160) = xmm1; /* movss */
    MEMF(ebp + -156) = xmm0; /* movss */
    MEMF(ebp + -112) = xmm1; /* movss */
    MEMF(ebp + -64) = xmm0; /* movss */
    MEMF(ebp + -200) = xmm0; /* movss */
    MEMF(ebp + -152) = xmm1; /* movss */
    MEMF(ebp + -104) = xmm1; /* movss */
    MEMF(ebp + -100) = xmm2; /* movss */
    MEMF(ebp + -56) = xmm0; /* movss */
    MEMF(ebp + -52) = xmm2; /* movss */
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_00214FCF: ;
    esp = esp + 8;
    esi = ebp + -200;
    edi = 4;
    /* nop */

loc_00214FE0: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esi + -4);
    PUSH32(esp, edx);
    edx = MEM32(esi + -8);
    PUSH32(esp, eax);
    eax = MEM32(esi + -12);
    xmm0 = MEMF(esi + -40); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -16);
    PUSH32(esp, edx);
    edx = MEM32(esi + -20);
    PUSH32(esp, eax);
    eax = MEM32(esi + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi + -32);
    PUSH32(esp, eax);
    eax = MEM32(esi + -36);
    ecx = esi + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, 0); sub_00200430(); /* call 0x00200430 */

loc_00215018: ;
    esp = esp + 0x2C;
    esi = esi + 0x30;
    edi--;
    if ((edi != 0)) goto loc_00214FE0; /* jne: not equal / not zero */

loc_00215021: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(0x5499E8);
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ebp + -4) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0021504A: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_0021504F: ;
    ecx = 0; /* xor self */

loc_00215051: ;
    edx = MEM32(ebp + -12);
    if (CMP_EQ(edx, MEM32(eax + ecx * 4))) goto loc_00215061; /* je: equal / zero */

loc_00215059: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_00215051; /* jl: less (signed <) */

loc_0021505F: ;
    goto loc_00215066;

loc_00215061: ;
    MEM8(ecx + eax + 0x10) = 0;

loc_00215066: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = ebp + -32;
    ecx = ebp + -48;
    PUSH32(esp, 0); sub_0021AB80(); /* call 0x0021AB80 */

loc_00215078: ;
    PUSH32(esp, 0x3F59999A);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0021508C: ;
    eax = MEM32(0x8756FC);
    ecx = MEM32(0x875700);
    xmm0 = MEMF(0x649218); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = eax + eax * 2;
    edx = ecx + eax * 2;
    eax = MEM32(0x849800);
    PUSH32(esp, 0x5F59F0);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    MEM32(0x8076B0) = 1;
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = 0;
    eax = MEM32(eax + edx * 4 + 0xB5C);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    edx = ebp + -8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00215105: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm1 = MEMF(0x8756E0); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ebp + -8); /* movss */
    xmm0 = xmm0 + MEMF(0x648FDC); /* addss */
    esp = esp + 0x24;
    MEMF(0x8756E0) = xmm1; /* movss */
    MEMF(ebp + -24) = xmm0; /* movss */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_push(MEMF(0x8756E0)); /* fld float */
    /* fld st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_00215157; /* jb: below (unsigned <) */

loc_00215155: ;
    /* FPU: fprem  */

loc_00215157: ;
    /* fstp st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_00215161: ;
    MEM32(0x849B1C) = MEM32(0x849B1C) - 1;
    eax = MEM32(0x7767E0);
    edi = ebp + -32;
    esi = ebp + -48;
    MEM32(0x84B868) = eax;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_0021517C: ;
    ecx = MEM32(0x6B8314);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00215188: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0021518F: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_00215194: ;
    MEM8(eax + 0x10) = 1;
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_002151A5: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0xFF;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_002151B3: ;
    ecx = eax;
    eax = 1;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_002151BF: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0x11B;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_002151CD: ;
    ecx = eax;
    eax = 2;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_002151D9: ;
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    eax = 0x142;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_002151E7: ;
    ecx = eax;
    eax = 3;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_002151F3: ;
    eax = MEM32(0x84B868);
    esi = eax + 0x10;
    edx = ebp + -720;
    MEM32(ebp + -16) = eax;
    eax = edx;
    PUSH32(esp, edx);
    ecx = 0x10;
    edi = ebp + -720;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_0021521A: ;
    esp = esp + 0x14;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00215227: ;
    esi = MEM32(ebp + -16);
    esi = esi + 0x90;
    ecx = 0x10;
    edi = ebp + -656;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebp + -656;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_0021524C: ;
    esp = esp + 8;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00215259: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00215263: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0021526A: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00215279: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0021528F: ;
    PUSH32(esp, 1);
    MEM32(0x549AE8) = 0;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_002152A0: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002152AF: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002152C5: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AF8) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002152DE: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002152F7: ;
    esi = 2;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = 4;
    eax = 0; /* xor self */
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0021531A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esi;
    eax = 1;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0021532E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = esi;
    eax = esi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_0021533F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    edi = 3;
    PUSH32(esp, 1);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00215355: ;
    xmm2 = MEMF(0x648FB0); /* movss */
    xmm0 = MEMF(0x649550); /* movss */
    xmm1 = MEMF(0x64B224); /* movss */
    xmm3 = MEMF(0x649834); /* movss */
    eax = 1;
    MEM32(0x547430) = eax;
    MEM32(0x547434) = eax;
    MEM32(0x5474B0) = eax;
    MEM32(0x5474B4) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0xF;
    esp = esp + 0x50;
    MEM32(0x5499F0) = eax;
    eax = ebp + -304;
    PUSH32(esp, eax);
    ecx = ebp + -240;
    PUSH32(esp, ecx);
    edx = ecx;
    MEMF(ebp + -236) = xmm2; /* movss */
    MEMF(ebp + -188) = xmm2; /* movss */
    xmm2 = MEMF(0x64B220); /* movss */
    PUSH32(esp, edx);
    MEM32(0x547330) = edi;
    MEM32(0x547334) = edi;
    MEM32(0x547340) = esi;
    MEM32(0x54733C) = esi;
    MEM32(0x5473B0) = edi;
    MEM32(0x5473B4) = edi;
    MEM32(0x5473C0) = esi;
    MEM32(0x5473BC) = esi;
    MEM32(0x547440) = esi;
    MEM32(0x54743C) = esi;
    MEM32(0x5474C0) = esi;
    MEM32(0x5474BC) = esi;
    MEMF(ebp + -240) = xmm1; /* movss */
    MEMF(ebp + -232) = xmm0; /* movss */
    MEMF(ebp + -192) = xmm3; /* movss */
    MEMF(ebp + -184) = xmm0; /* movss */
    MEMF(ebp + -144) = xmm3; /* movss */
    MEMF(ebp + -140) = xmm2; /* movss */
    MEMF(ebp + -136) = xmm0; /* movss */
    MEMF(ebp + -96) = xmm1; /* movss */
    MEMF(ebp + -92) = xmm2; /* movss */
    MEMF(ebp + -88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0021545B: ;
    eax = ebp + -304;
    PUSH32(esp, eax);
    ecx = ebp + -192;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00215471: ;
    eax = ebp + -304;
    PUSH32(esp, eax);
    ecx = ebp + -144;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00215487: ;
    eax = ebp + -304;
    PUSH32(esp, eax);
    ecx = ebp + -96;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0021549A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0021549F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x24;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = MEMF(0x7FA218); /* movss */
    xmm1 = xmm1 * MEMF(0x648D3C); /* mulss */
    xmm0 = MEMF(0x75E1E4); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D34); /* movss */
    MEMF(0x75E1E4) = xmm0; /* movss */
    edx = edx - 0x51;
    edx = edx << 0x18;
    edx = edx | 0xFFFFFF;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(ebp + -228) = edx;
    MEM32(ebp + -180) = edx;
    MEM32(ebp + -132) = edx;
    MEM32(ebp + -84) = edx;
    if ((xmm1 <= xmm0)) goto loc_0021550C; /* jbe: below or equal (unsigned <=) */

loc_00215501: ;
    xmm0 = xmm2; /* movaps */
    MEMF(0x75E1E4) = xmm0; /* movss */

loc_0021550C: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x649244); /* movss */
    MEMF(ebp + -196) = xmm0; /* movss */
    MEMF(ebp + -148) = xmm0; /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    PUSH32(esp, 8);
    PUSH32(esp, 0x30);
    edi = ebp + -4;
    MEMF(ebp + -224) = xmm1; /* movss */
    MEMF(ebp + -220) = xmm1; /* movss */
    MEMF(ebp + -176) = xmm2; /* movss */
    MEMF(ebp + -172) = xmm1; /* movss */
    MEMF(ebp + -128) = xmm2; /* movss */
    MEMF(ebp + -124) = xmm2; /* movss */
    MEMF(ebp + -80) = xmm1; /* movss */
    MEMF(ebp + -76) = xmm2; /* movss */
    MEMF(ebp + -216) = xmm1; /* movss */
    MEMF(ebp + -212) = xmm1; /* movss */
    MEMF(ebp + -168) = xmm2; /* movss */
    MEMF(ebp + -164) = xmm1; /* movss */
    MEMF(ebp + -120) = xmm2; /* movss */
    MEMF(ebp + -116) = xmm2; /* movss */
    MEMF(ebp + -72) = xmm1; /* movss */
    MEMF(ebp + -68) = xmm2; /* movss */
    MEMF(ebp + -208) = xmm1; /* movss */
    MEMF(ebp + -204) = xmm1; /* movss */
    MEMF(ebp + -160) = xmm2; /* movss */
    MEMF(ebp + -156) = xmm1; /* movss */
    MEMF(ebp + -112) = xmm2; /* movss */
    MEMF(ebp + -108) = xmm3; /* movss */
    MEMF(ebp + -64) = xmm1; /* movss */
    MEMF(ebp + -60) = xmm3; /* movss */
    MEMF(ebp + -200) = xmm1; /* movss */
    MEMF(ebp + -152) = xmm2; /* movss */
    MEMF(ebp + -104) = xmm2; /* movss */
    MEMF(ebp + -100) = xmm0; /* movss */
    MEMF(ebp + -56) = xmm1; /* movss */
    MEMF(ebp + -52) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_002155F7: ;
    esp = esp + 8;
    edi = ebp + -200;
    MEM32(ebp + -8) = 4;

loc_00215607: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    ecx = MEM32(edi + -4);
    PUSH32(esp, edx);
    edx = MEM32(edi + -8);
    PUSH32(esp, eax);
    eax = MEM32(edi + -12);
    xmm0 = MEMF(edi + -40); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + -16);
    PUSH32(esp, edx);
    edx = MEM32(edi + -20);
    PUSH32(esp, eax);
    eax = MEM32(edi + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(edi + -32);
    PUSH32(esp, eax);
    eax = MEM32(edi + -36);
    ecx = edi + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, 0); sub_00200430(); /* call 0x00200430 */

loc_0021563F: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x2C;
    edi = edi + 0x30;
    eax--;
    MEM32(ebp + -8) = eax;
    if ((eax != 0)) goto loc_00215607; /* jne: not equal / not zero */

loc_0021564E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(0x5499E8);
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ecx) = eax;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00215674: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_00215679: ;
    ecx = 0; /* xor self */
    goto loc_00215680;

    /* nop */

loc_00215680: ;
    edx = MEM32(ebp + -12);
    if (CMP_EQ(edx, MEM32(eax + ecx * 4))) goto loc_00215690; /* je: equal / zero */

loc_00215688: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_00215680; /* jl: less (signed <) */

loc_0021568E: ;
    goto loc_00215695;

loc_00215690: ;
    MEM8(ecx + eax + 0x10) = 0;

loc_00215695: ;
    eax = MEM32(0x8756FC);
    ecx = MEM32(0x875700);
    eax = eax + eax * 2;
    edx = ecx + eax * 2;
    eax = MEM32(ebp + edx * 4 + -400);
    PUSH32(esp, eax);
    ecx = ebp + -1616;
    PUSH32(esp, 0x5D4CAC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002156BF: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = ebp + -1616;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002156CC: ;
    edx = ebp + -1616;
    PUSH32(esp, 0x5F8AA0);
    PUSH32(esp, edx);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); sub_0046E470(); /* call 0x0046E470 */

loc_002156E0: ;
    esp = esp + 0x14;
    SET_LO8(eax, 0); /* xor self */
    ecx = ebp + -1616;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002156F0: ;
    MEM32(ebp + -36) = eax;
    SET_LO8(eax, MEM8(0x87BFC4));
    ecx = 1;
    if (TEST_NZ(LO8(ecx), LO8(eax))) goto loc_0021571D; /* jne: not equal / not zero */

loc_00215701: ;
    eax = MEM32(0x87BFC4);
    xmm0 = MEMF(0x649420); /* movss */
    eax = eax | ecx;
    MEM32(0x87BFC4) = eax;
    MEMF(0x87BFC0) = xmm0; /* movss */

loc_0021571D: ;
    xmm1 = MEMF(0x8756F4); /* movss */
    xmm1 = xmm1 - MEMF(0x8756EC); /* subss */
    xmm0 = MEMF(0x8756F8); /* movss */
    xmm0 = xmm0 - MEMF(0x8756F0); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(0x75E1C0); /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0021575C; /* ja: above (unsigned >) */

loc_00215759: ;
    xmm0 = xmm1; /* movaps */

loc_0021575C: ;
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    eax = ebp + -1104;
    PUSH32(esp, eax);
    xmm1 = xmm1 - xmm0; /* subss */
    eax = 0; /* xor self */
    MEMF(ebp + -24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00200CC0(); /* call 0x00200CC0 */

loc_0021577F: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = ebp + -1104;
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_00215798: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F8F20);
    eax = esi;
    ecx = ebp + -1104;
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_002157B1: ;
    edi = ebp + -1104;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_002157BC: ;
    edi = 1;
    esi = ebp + -1104;
    PUSH32(esp, 0); sub_00201710(); /* call 0x00201710 */

loc_002157CC: ;
    ecx = MEM32(0x75E1CC);
    xmm0 = MEMF(0x75E1C8); /* movss */
    xmm0 = xmm0 * MEMF(0x6493AC); /* mulss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002157F3: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_002157FB: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    if (CMP_EQ(eax, 2)) goto loc_00215810; /* je: equal / zero */

loc_00215808: ;
    xmm0 = MEMF(0x75E1BC); /* movss */

loc_00215810: ;
    eax = 1;
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x87BFC0); /* movss */
    MEMF(0x8076A4) = xmm0; /* movss */
    MEM8(0x8086C4) = LO8(eax);
    MEM32(0x8076B0) = eax;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_0021583C: ;
    if (CMP_NE(eax, 2)) goto loc_0021584B; /* jne: not equal / not zero */

loc_00215841: ;
    MEM32(0x8076B0) = 0;

loc_0021584B: ;
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00215859: ;
    edx = MEM32(ebp + -8);
    xmm0 = MEMF(0x75E1DC); /* movss */
    xmm1 = MEMF(0x75E1E0); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM8(0x807667) = LO8(eax);
    MEM8(0x807697) = LO8(eax);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00215896: ;
    xmm0 = MEMF(0x75E1D4); /* movss */
    xmm1 = MEMF(0x75E1D8); /* movss */
    eax = MEM32(ebp + -36);
    MEMF(0x807654) = xmm1; /* movss */
    xmm1 = MEMF(0x75E1C4); /* movss */
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    xmm0 = MEMF(0x75E1D0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(0x6493AC); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = 0;
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0021590A: ;
    esp = esp + 0x10;
    esi = ebp + -1104;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_00215918: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00215930
 * Original: 0x00215930 - 0x002161C0 (2192 bytes, 432 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00215930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC4;
    eax = MEM32(0x849934);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_002161B9; /* je: equal / zero */

loc_0021594E: ;
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x54) = LO8(ebx);
    MEM32(esp + 0x58) = ebx;
    MEM8(esp + 0xA8) = LO8(ebx);
    MEM8(esp + 0xB4) = LO8(ebx);
    MEM8(esp + 0xB5) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00215985: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9A48);
    MEM8(esp + 0xD8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_002159A0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edi = MEM32(0x849934);
    esp = esp + 0x10;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 1);
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0xCC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00351C60(); /* call 0x00351C60 */

loc_002159EF: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_002159F8: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F8E40);
    eax = 1;
    ecx = esp + 0x3C;
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_00215A11: ;
    edi = esp + 0x30;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_00215A1A: ;
    eax = MEM32(0x849934);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003521F0(); /* call 0x003521F0 */

loc_00215A25: ;
    edx = MEM32(0x86267C);
    if (CMP_EQ(edx, ebx)) goto loc_00215A3E; /* je: equal / zero */

loc_00215A2F: ;
    ecx = MEM32(0x862680);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_NE(ecx, ebx)) goto loc_00215A5B; /* jne: not equal / not zero */

loc_00215A3E: ;
    if (CMP_EQ(eax, ebx)) goto loc_00215A5B; /* je: equal / zero */

loc_00215A42: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x75E1B4);
    PUSH32(esp, eax);
    ecx = 0x75E1AC;
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_00201B90(); /* call 0x00201B90 */

loc_00215A5B: ;
    esi = esp + 0x30;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_00215A64: ;
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    edx = esp + 0xC4;
    esi = 1;
    PUSH32(esp, edx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x54) = LO8(ebx);
    MEM32(esp + 0x58) = esi;
    MEM8(esp + 0xA8) = LO8(ebx);
    MEM8(esp + 0xB4) = LO8(ebx);
    MEM8(esp + 0xB5) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00215AA0: ;
    eax = esp + 0x68;
    PUSH32(esp, eax);
    eax = MEM32(0x849AA4);
    PUSH32(esp, 0x5F9A3C);
    MEM8(esp + 0xD8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00215ABB: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x10;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8A68;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0xCC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00215B09: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_00215B12: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F8F20);
    eax = 2;
    ecx = esp + 0x3C;
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_00215B2B: ;
    edi = esp + 0x30;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_00215B34: ;
    PUSH32(esp, 0x3EB33333);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x3FA00000);
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00215B5D: ;
    xmm0 = MEMF(0x648E68); /* movss */
    xmm1 = MEMF(0x6BD4C4); /* movss */
    ecx = MEM32(0x849934);
    eax = MEM32(0x849800);
    xmm2 = MEMF(esp + 0xC0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x75E1A4); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x75E1A8); /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 - MEMF(0x64908C); /* subss */
    MEMF(0x807660) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xBC); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0xC4); /* subss */
    MEM32(esp + 0x54) = esi;
    MEM32(0x8076B0) = esi;
    MEMF(esp + 0x48) = xmm1; /* movss */
    edx = ZX8(MEM8(ecx + 0x11B4));
    esi = MEM32(eax + edx * 4 + 0x39C);
    SET_LO8(eax, MEM8(esp + 0xB9));
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 - MEMF(esp + 0xC8); /* subss */
    esp = esp + 0xC;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00215C61; /* je: equal / zero */

loc_00215C1C: ;
    PUSH32(esp, 0x5F59F0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00215C37: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    esp = esp + 0x10;
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */

loc_00215C61: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm2; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00215C80: ;
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x48); /* addss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    xmm1 = MEMF(0x649E04); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x75E19C); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x75E1A0); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 8;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8A3C;
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(0x8076B0) = ebx;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00215CEB: ;
    xmm0 = MEMF(esp + 0xB0); /* movss */
    xmm1 = MEMF(esp + 0xB4); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x3C); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0xB8); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0xBC); /* subss */
    esi = eax;
    (void)0; /* cmp MEM8(esp + 0xAD), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    if (CMP_EQ(MEM8(esp + 0xAD), LO8(ebx))) goto loc_00215D77; /* je: equal / zero */

loc_00215D32: ;
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00215D4D: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = MEMF(esp + 0x34); /* movss */
    esp = esp + 0x10;

loc_00215D77: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00215D96: ;
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 + MEMF(0x75E198); /* addss */
    edx = MEM32(0x849934);
    MEMF(esp + 0x40) = xmm0; /* movss */
    SET_LO8(eax, MEM8(edx + 0x11B5));
    esp = esp + 8;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(eax), LO8(ebx))) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_002019F0(); /* call 0x002019F0 */

loc_00215DC8: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    ecx = MEM32(0x862CD0);
    xmm1 = MEMF(0x649E04); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x75E19C); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x75E1A0); /* movss */
    ecx = ecx + 0x1438;
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    edx = MEM32(ecx);
    SET_LO16(eax, MEM16(ecx + 4));
    MEM16(esp + 0x24) = LO16(eax);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8A18;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00215E45: ;
    xmm0 = MEMF(esp + 0xB0); /* movss */
    xmm1 = MEMF(esp + 0xB4); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x3C); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0xB8); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0xBC); /* subss */
    esi = eax;
    (void)0; /* cmp MEM8(esp + 0xAD), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if (CMP_EQ(MEM8(esp + 0xAD), LO8(ebx))) goto loc_00215ED1; /* je: equal / zero */

loc_00215E8C: ;
    PUSH32(esp, 0x5F59F0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00215EA7: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0x10;

loc_00215ED1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00215EF0: ;
    SET_LO8(edx, MEM8(esp + 0x28));
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 + MEMF(0x75E198); /* addss */
    esp = esp + 8;
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(edx), LO8(ebx))) ? 1 : 0); /* setne */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_002019F0(); /* call 0x002019F0 */

loc_00215F1A: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    xmm1 = MEMF(0x649E04); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x75E19C); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x75E1A0); /* movss */
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F89EC;
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00215F7C: ;
    xmm0 = MEMF(esp + 0xB0); /* movss */
    xmm1 = MEMF(esp + 0xB4); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x3C); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0xB8); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0xBC); /* subss */
    esi = eax;
    (void)0; /* cmp MEM8(esp + 0xAD), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if (CMP_EQ(MEM8(esp + 0xAD), LO8(ebx))) goto loc_00216008; /* je: equal / zero */

loc_00215FC3: ;
    PUSH32(esp, 0x5F59F0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00215FDE: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0x10;

loc_00216008: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00216027: ;
    SET_LO8(edx, MEM8(esp + 0x2A));
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 + MEMF(0x75E198); /* addss */
    esp = esp + 8;
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(edx), LO8(ebx))) ? 1 : 0); /* setne */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_002019F0(); /* call 0x002019F0 */

loc_00216051: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    xmm1 = MEMF(0x649E04); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x75E19C); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x75E1A0); /* movss */
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F89C0;
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002160B3: ;
    xmm0 = MEMF(esp + 0xB0); /* movss */
    xmm1 = MEMF(esp + 0xB4); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x3C); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0xB8); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0xBC); /* subss */
    esi = eax;
    (void)0; /* cmp MEM8(esp + 0xAD), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if (CMP_EQ(MEM8(esp + 0xAD), LO8(ebx))) goto loc_0021613F; /* je: equal / zero */

loc_002160FA: ;
    PUSH32(esp, 0x5F59F0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00216115: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0x10;

loc_0021613F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0021615E: ;
    SET_LO8(edx, MEM8(esp + 0x2C));
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 + MEMF(0x75E198); /* addss */
    esp = esp + 8;
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(LO8(edx), LO8(ebx))) ? 1 : 0); /* setne */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_002019F0(); /* call 0x002019F0 */

loc_00216188: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x40); /* addss */
    xmm1 = MEMF(0x649E04); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    esi = esp + 0x30;
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_002161B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002161C0
 * Original: 0x002161C0 - 0x00216211 (81 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002161C0(void)
{

loc_002161C0: ;
    esp = esp - 0x208;
    PUSH32(esp, eax);
    ecx = esp + 6;
    PUSH32(esp, ecx);
    MEM8(esp + 8) = 1;
    MEM8(esp + 9) = 0;
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_002161DB: ;
    SET_LO8(edx, MEM8(esp + 8));
    SET_LO8(eax, MEM8(esp + 9));
    ecx = esp + 0xA;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x84CB5A);
    MEM8(0x84CB58) = LO8(edx);
    MEM8(0x84CB59) = LO8(eax);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_002161FD: ;
    edx = MEM32(esp + 0x214);
    MEM32(0x84CD5C) = edx;
    esp = esp + 0x218;
    esp += 4; return; /* ret */

}

/**
 * sub_00216220
 * Original: 0x00216220 - 0x0021627D (93 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216220(void)
{

loc_00216220: ;
    esp = esp - 0x208;
    SET_LO8(eax, 1);
    MEM8(esp) = LO8(eax);
    MEM8(esp + 1) = LO8(eax);
    eax = MEM32(esp + 0x20C);
    PUSH32(esp, ecx);
    edx = esp + 6;
    PUSH32(esp, edx);
    MEM32(esp + 0x20C) = eax;
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00216248: ;
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(ecx, MEM8(esp + 9));
    edx = esp + 0xA;
    PUSH32(esp, edx);
    PUSH32(esp, 0x84CB5A);
    MEM8(0x84CB58) = LO8(eax);
    MEM8(0x84CB59) = LO8(ecx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0021626A: ;
    eax = MEM32(esp + 0x214);
    MEM32(0x84CD5C) = eax;
    esp = esp + 0x218;
    esp += 4; return; /* ret */

}

/**
 * sub_00216280
 * Original: 0x00216280 - 0x002162BC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216280(void)
{
    int _flags = 0; /* fallback flag var */

loc_00216280: ;
    eax = MEM32(0x85E578);
    if (TEST_Z(eax, eax)) goto loc_002162A7; /* je: equal / zero */

loc_00216289: ;
    eax = MEM32(0x85E57C);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(0x85E57C);
    if (CMP_NE(MEM32(eax), 0)) goto loc_002162A7; /* jne: not equal / not zero */

loc_0021629A: ;
    PUSH32(esp, 0x85E57C);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002162A4: ;
    esp = esp + 4;

loc_002162A7: ;
    eax = 0x85E578;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002162B1: ;
    ecx = MEM32(esp + 4);
    MEM32(0x6BD58C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002162C0
 * Original: 0x002162C0 - 0x00216DA6 (2790 bytes, 691 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002162C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002162C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2B4;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 0xC));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002162FB; /* je: equal / zero */

loc_002162D8: ;
    eax = MEM32(0x85E578);
    if (CMP_EQ(eax, esi)) goto loc_00216D9F; /* je: equal / zero */

loc_002162E5: ;
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_002162F0: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00216D9F; /* je: equal / zero */

loc_002162FB: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0); sub_0021ABE0(); /* call 0x0021ABE0 */

loc_00216312: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x776710);
    PUSH32(esp, 0); sub_00202870(); /* call 0x00202870 */

loc_00216330: ;
    edi = MEM32(0x85E578);
    esp = esp + 0x1C;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00216342; /* jne: not equal / not zero */

loc_0021633D: ;
    edi = 0x84CA48;

loc_00216342: ;
    edx = MEM32(0x84B868);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_00218880(); /* call 0x00218880 */

loc_0021635C: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0021637D; /* je: equal / zero */

loc_00216363: ;
    xmm0 = MEMF(0x75E190); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x75E194); /* movss */
    goto loc_00216395;

loc_0021637D: ;
    xmm0 = MEMF(0x648E68); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */

loc_00216395: ;
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = edi;
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_002163B8: ;
    SET_LO8(eax, MEM8(0x7819D5));
    ecx = MEM32(0x849ACC);
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002163D6; /* je: equal / zero */

loc_002163CA: ;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    xmm0 = MEMF(0x648E68); /* movss */
    if (CMP_NE(ecx, esi)) goto loc_002163DE; /* jne: not equal / not zero */

loc_002163D6: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_002163DE: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002163EC; /* je: equal / zero */

loc_002163E8: ;
    if (CMP_NE(ecx, esi)) goto loc_0021643E; /* jne: not equal / not zero */

loc_002163EC: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0021643E; /* jne: not equal / not zero */

loc_002163F0: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm1, MEMF(0x64925C) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x64925C))) goto loc_00216444; /* jbe: below or equal (unsigned <=) */

loc_002163FF: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    xmm0 = xmm0 + MEMF(0x8756DC); /* addss */
    /* comiss xmm0, MEMF(0x648FDC) - sets EFLAGS */
    MEMF(0x8756DC) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648FDC))) goto loc_00216471; /* jbe: below or equal (unsigned <=) */

loc_00216428: ;
    xmm0 = MEMF(0x649218); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(0x8756DC) = xmm0; /* movss */
    goto loc_00216471;

loc_0021643E: ;
    xmm1 = MEMF(esp + 0x28); /* movss */

loc_00216444: ;
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(0x648FDC); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(0x8756DC) = xmm1; /* movss */

loc_00216471: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x2C) = esi;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002164ED; /* jne: not equal / not zero */

loc_00216479: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00216481; /* je: equal / zero */

loc_0021647D: ;
    if (CMP_NE(ecx, esi)) goto loc_002164ED; /* jne: not equal / not zero */

loc_00216481: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8756DC);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = 0x84C9C8;
    PUSH32(esp, 0); sub_002005E0(); /* call 0x002005E0 */

loc_0021649A: ;
    edi = eax;
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_002003F0(); /* call 0x002003F0 */

loc_002164A5: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002164C9; /* je: equal / zero */

loc_002164AD: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = MEM32(eax) - 1;
    ecx = MEM32(esp + 0x1C);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_002164C9; /* jne: not equal / not zero */

loc_002164BC: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002164C6: ;
    esp = esp + 4;

loc_002164C9: ;
    xmm0 = MEMF(0x649218); /* movss */
    xmm0 = xmm0 - MEMF(0x8756DC); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(0x8076B0) = 0;
    esi = 0; /* xor self */
    goto loc_00216520;

loc_002164ED: ;
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002164F6: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(0x8076B0) = esi;
    xmm0 = xmm1; /* movaps */

loc_00216520: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(0x649218); /* movss */
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = 0;
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00216586; /* je: equal / zero */

loc_0021655E: ;
    if (CMP_EQ(MEM32(0x849ACC), esi)) goto loc_00216586; /* je: equal / zero */

loc_00216566: ;
    xmm0 = MEMF(0x75E188); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x75E18C); /* movss */
    MEMF(0x807660) = xmm0; /* movss */

loc_00216586: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00216592: ;
    eax = MEM32(0x6BD58C);
    edi = 3;
    esp = esp + 8;
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_NE(eax, edi)) goto loc_002165FA; /* jne: not equal / not zero */

loc_002165A5: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_002165B7: ;
    eax = esp + 0xC8;
    PUSH32(esp, 0x5F89BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004700A3(); /* call 0x004700A3 */

loc_002165C9: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002165FA; /* je: equal / zero */

loc_002165D0: ;
    PUSH32(esp, 0x5F59F0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM16(eax) = 0;
    PUSH32(esp, 0x7FFFFFFF);
    eax = esp + 0xD0;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_002165F5: ;
    esp = esp + 0x10;
    SET_LO8(ebx, 1);

loc_002165FA: ;
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_002165FF: ;
    eax = esp + 0x18;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0x84C9C8;
    PUSH32(esp, 0); sub_0020DB70(); /* call 0x0020DB70 */

loc_00216610: ;
    esi = eax;
    SET_LO8(eax, MEM8(ebp + 0xC));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0021673C; /* jne: not equal / not zero */

loc_00216620: ;
    if (TEST_Z(esi, esi)) goto loc_002167BB; /* je: equal / zero */

loc_00216628: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x75E180); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    edi = 0x1010101;
    edx = edi;
    ecx = 0x40358;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0021665B: ;
    ecx = MEM32(0x75E180);
    edx = MEM32(0x75E184);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi;
    edx = esp + 0x18;
    MEM32(0x549B04) = edi;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_0021667F: ;
    eax = esp + 0x24;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0x84C9C8;
    PUSH32(esp, 0); sub_0020DB70(); /* call 0x0020DB70 */

loc_00216690: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x75E180); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    esp = esp + 0x14;
    edx = edi;
    ecx = 0x40358;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002166C1: ;
    ecx = MEM32(0x75E180);
    edx = MEM32(0x75E184);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi;
    edx = esp + 0x18;
    MEM32(0x549B04) = edi;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_002166E5: ;
    eax = esp + 0x24;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    eax = 0x84C9C8;
    PUSH32(esp, 0); sub_0020DB70(); /* call 0x0020DB70 */

loc_002166F6: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x75E180); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    esp = esp + 0x14;
    edx = edi;
    ecx = 0x40358;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00216727: ;
    ecx = MEM32(0x75E180);
    edx = MEM32(0x75E184);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_002167A7;

loc_0021673C: ;
    eax = MEM32(0x6BD58C);
    PUSH32(esp, 0); sub_00200EE0(); /* call 0x00200EE0 */

loc_00216746: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x648FDC); /* addss */
    esi = eax;
    if (CMP_NE(MEM32(0x6BD58C), edi)) goto loc_00216768; /* jne: not equal / not zero */

loc_0021675E: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00216768; /* je: equal / zero */

loc_00216762: ;
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */

loc_00216768: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x75E178); /* movss */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */
    edi = 0x1010101;
    edx = edi;
    ecx = 0x40358;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00216795: ;
    eax = MEM32(0x75E178);
    ecx = MEM32(0x75E17C);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_002167A7: ;
    edx = esp + 0x18;
    eax = esi;
    MEM32(0x549B04) = edi;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_002167B8: ;
    esp = esp + 0xC;

loc_002167BB: ;
    ecx = MEM32(0x849B1C);
    edx = MEM32(0x7767E0);
    ecx--;
    edi = esp + 0x24;
    esi = esp + 0x20;
    MEM32(0x849B1C) = ecx;
    MEM32(0x84B868) = edx;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_002167E1: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_00216808; /* jne: not equal / not zero */

loc_002167EA: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_00216808: ;
    esi = MEM32(0x87A1AC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM8(0x87A1BC) = 1;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00216821: ;
    PUSH32(esp, 0x3F266666);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F6E147B);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00222DD0(); /* call 0x00222DD0 */

loc_00216837: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002168CB; /* je: equal / zero */

loc_00216842: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00216855; /* je: equal / zero */

loc_00216849: ;
    PUSH32(esp, 3);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00216280(); /* call 0x00216280 */

loc_00216852: ;
    esp = esp + 4;

loc_00216855: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0021685E: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_00216885; /* jne: not equal / not zero */

loc_00216867: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_00216885: ;
    eax = 0; /* xor self */

loc_00216887: ;
    if (CMP_EQ(esi, MEM32(eax * 4 + 0x87A1AC))) goto loc_00216898; /* je: equal / zero */

loc_00216890: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_00216887; /* jl: less (signed <) */

loc_00216896: ;
    goto loc_0021689F;

loc_00216898: ;
    MEM8(eax + 0x87A1BC) = 0;

loc_0021689F: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00216D9F; /* je: equal / zero */

loc_002168AB: ;
    eax = MEM32(esp + 0x30);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00216D9F; /* jne: not equal / not zero */

loc_002168B7: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002168C1: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002168CB: ;
    ecx = MEM32(0x6B8314);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_002168D7: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_002168DE: ;
    SET_LO8(eax, MEM8(0x75C14C));
    edi = edi | 0xFFFFFFFFu;
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_002168F1; /* ja: above (unsigned >) */

loc_002168EA: ;
    ecx = 0; /* xor self */
    goto loc_0021697E;

loc_002168F1: ;
    esi = MEM32(0x75C148);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_00216926; /* jne: not equal / not zero */

loc_002168FE: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0021690F: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00216917: ;
    ecx = MEM32(0x75C148);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C148);

loc_00216926: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0021694E; /* jne: not equal / not zero */

loc_0021692D: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00216935: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C148);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0021694E; /* jne: not equal / not zero */

loc_00216945: ;
    MEM32(esi + 0x10) = edi;
    esi = MEM32(0x75C148);

loc_0021694E: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, edi)) goto loc_00216976; /* jne: not equal / not zero */

loc_00216955: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00216971; /* jne: not equal / not zero */

loc_0021695F: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00216968: ;
    esi = MEM32(0x75C148);
    esp = esp + 8;

loc_00216971: ;
    ecx = MEM32(esi + 4);
    goto loc_0021697E;

loc_00216976: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0021697B: ;
    ecx = MEM32(eax + 4);

loc_0021697E: ;
    eax = 1;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00216988: ;
    PUSH32(esp, 0);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00216994: ;
    SET_LO8(eax, MEM8(0x75C364));
    if (CMP_A(LO8(eax) & LO8(eax), 0)) goto loc_002169A4; /* ja: above (unsigned >) */

loc_0021699D: ;
    ecx = 0; /* xor self */
    goto loc_00216A31;

loc_002169A4: ;
    esi = MEM32(0x75C360);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_002169D9; /* jne: not equal / not zero */

loc_002169B1: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002169C2: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_002169CA: ;
    ecx = MEM32(0x75C360);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75C360);

loc_002169D9: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00216A01; /* jne: not equal / not zero */

loc_002169E0: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_002169E8: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C360);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00216A01; /* jne: not equal / not zero */

loc_002169F8: ;
    MEM32(esi + 0x10) = edi;
    esi = MEM32(0x75C360);

loc_00216A01: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, edi)) goto loc_00216A29; /* jne: not equal / not zero */

loc_00216A08: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00216A24; /* jne: not equal / not zero */

loc_00216A12: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00216A1B: ;
    esi = MEM32(0x75C360);
    esp = esp + 8;

loc_00216A24: ;
    ecx = MEM32(esi + 4);
    goto loc_00216A31;

loc_00216A29: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00216A2E: ;
    ecx = MEM32(eax + 4);

loc_00216A31: ;
    eax = 3;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00216A3B: ;
    ebx = MEM32(0x84B868);
    eax = esp + 0x80;
    esi = ebx + 0x10;
    ecx = 0x10;
    edi = esp + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_00216A62: ;
    esp = esp + 8;
    edx = esp + 0x80;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00216A76: ;
    edx = esp + 0x40;
    eax = edx;
    PUSH32(esp, edx);
    esi = ebx + 0x90;
    ecx = 0x10;
    edi = esp + 0x44;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_00216A94: ;
    esp = esp + 8;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00216AA1: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_00216AAB: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00216AB3: ;
    esi = 1;
    edx = esi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00216AC4: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00216AD6: ;
    PUSH32(esp, esi);
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00216AE2: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00216AF1: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00216B07: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AF8) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00216B1C: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00216B35: ;
    edx = MEM32(0x5499F0);
    edi = 2;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = 4;
    edx = edx | 0x800;
    PUSH32(esp, edi);
    MEM32(0x549AF4) = 0x303;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = ebx;
    MEM32(0x54736C) = edi;
    MEM32(0x547370) = eax;
    MEM32(0x547378) = ebx;
    MEM32(0x54737C) = edi;
    MEM32(0x5473E0) = edi;
    MEM32(0x5473E8) = esi;
    MEM32(0x5473EC) = edi;
    MEM32(0x5473F0) = eax;
    MEM32(0x5473F8) = esi;
    MEM32(0x5499F0) = edx;
    MEM32(0x5473FC) = edi;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = edi;
    eax = edi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00216BAE: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = edi;
    eax = edi;
    PUSH32(esp, 0); sub_00218C90(); /* call 0x00218C90 */

loc_00216BBD: ;
    edx = MEM32(0x5499F0);
    ecx = MEM32(0x849ACC);
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    edx = edx | 9;
    esp = esp + 0x28;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x5474B0) = esi;
    MEM32(0x5499F0) = edx;
    MEM32(0x5474B4) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00216BFD; /* je: equal / zero */

loc_00216BF9: ;
    if (TEST_NZ(ecx, ecx)) goto loc_00216C4E; /* jne: not equal / not zero */

loc_00216BFD: ;
    SET_LO8(edx, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00216C51; /* jne: not equal / not zero */

loc_00216C04: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm0, MEMF(0x64925C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x64925C))) goto loc_00216C51; /* jbe: below or equal (unsigned <=) */

loc_00216C13: ;
    xmm1 = MEMF(0x7FA218); /* movss */
    xmm1 = xmm1 * MEMF(0x648EA8); /* mulss */
    xmm0 = MEMF(0x75E174); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D34); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x75E174) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00216C5C; /* jbe: below or equal (unsigned <=) */

loc_00216C44: ;
    xmm0 = MEMF(0x648D14); /* movss */
    goto loc_00216C54;

loc_00216C4E: ;
    SET_LO8(edx, MEM8(ebp + 0xC));

loc_00216C51: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_00216C54: ;
    MEMF(0x75E174) = xmm0; /* movss */

loc_00216C5C: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00216C75; /* je: equal / zero */

loc_00216C71: ;
    if (TEST_NZ(ecx, ecx)) goto loc_00216C79; /* jne: not equal / not zero */

loc_00216C75: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00216CD1; /* je: equal / zero */

loc_00216C79: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(0x8076A4) = xmm0; /* movss */
    xmm0 = MEMF(0x6493AC); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00216CAB; /* jne: not equal / not zero */

loc_00216C9B: ;
    xmm0 = MEMF(0x75E170); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    goto loc_00216CCB;

loc_00216CAB: ;
    xmm0 = MEMF(0x75E16C); /* movss */
    PUSH32(esp, 3);
    edi = 0; /* xor self */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00216280(); /* call 0x00216280 */

loc_00216CC2: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    esp = esp + 4;

loc_00216CCB: ;
    xmm0 = MEMF(esp + 0x20); /* movss */

loc_00216CD1: ;
    ecx = MEM32(0x75E174);
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    xmm1 = xmm1 + MEMF(0x58C050); /* addss */
    PUSH32(esp, 0x3F800000);
    xmm0 = xmm0 * MEMF(0x6493C0); /* mulss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x3EA66666);
    PUSH32(esp, 0x43EB0000);
    PUSH32(esp, ecx);
    eax = esp + 0x74;
    MEMF(esp + 0x78) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x78) = xmm2; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00217970(); /* call 0x00217970 */

loc_00216D52: ;
    esp = esp + 0x44;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00216D5E: ;
    PUSH32(esp, 0); sub_001C7000(); /* call 0x001C7000 */

loc_00216D63: ;
    edx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    /* nop */

loc_00216D70: ;
    if (CMP_EQ(edx, MEM32(eax + ecx * 4))) goto loc_00216D7D; /* je: equal / zero */

loc_00216D75: ;
    ecx++;
    if (CMP_L(ecx, 4)) goto loc_00216D70; /* jl: less (signed <) */

loc_00216D7B: ;
    goto loc_00216D82;

loc_00216D7D: ;
    MEM8(ecx + eax + 0x10) = 0;

loc_00216D82: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00216D9F; /* je: equal / zero */

loc_00216D8A: ;
    eax = MEM32(esp + 0x30);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00216D9F; /* jne: not equal / not zero */

loc_00216D92: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00216D9C: ;
    esp = esp + 4;

loc_00216D9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00216DB0
 * Original: 0x00216DB0 - 0x00216DEC (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216DB0(void)
{

loc_00216DB0: ;
    SET_LO8(eax, 0x32);
    PUSH32(esp, esi);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = 0xAF;
    MEM8(0x77616E) = 0xFF;
    PUSH32(esp, 0); sub_0020DC60(); /* call 0x0020DC60 */

loc_00216DD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002162C0(); /* call 0x002162C0 */

loc_00216DD8: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0020C870(); /* call 0x0020C870 */

loc_00216DE0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002162C0(); /* call 0x002162C0 */

loc_00216DE8: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00216DF0
 * Original: 0x00216DF0 - 0x002170A8 (696 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216DF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x849924);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(ebx, ebp)) goto loc_002170A4; /* je: equal / zero */

loc_00216E05: ;
    if (CMP_NE(MEM32(0x6BD4B8), 0x1F)) goto loc_00216E75; /* jne: not equal / not zero */

loc_00216E0E: ;
    if (CMP_NE(MEM32(0x849ADC), ebp)) goto loc_00216E75; /* jne: not equal / not zero */

loc_00216E16: ;
    eax = MEM32(0x849910);
    MEM32(0x849914) = eax;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(0x849910) = esi;
    if (CMP_NE(edx, ebp)) goto loc_00216E48; /* jne: not equal / not zero */

loc_00216E34: ;
    xmm0 = MEMF(0x64909C); /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(0x7768F4) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00216E48: ;
    if (CMP_NE(edx, 1)) goto loc_00216E61; /* jne: not equal / not zero */

loc_00216E4D: ;
    xmm0 = MEMF(0x648EAC); /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(0x7768F4) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00216E61: ;
    xmm0 = MEMF(0x648E68); /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(0x7768F4) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00216E75: ;
    edx = MEM32(0x7768D4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(edx, ebp)) goto loc_00216E9E; /* jle: less or equal (signed <=) */

loc_00216E82: ;
    eax = ebx + 0x100;
    ecx = edx;
    /* nop */

loc_00216E90: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_00216E96; /* je: equal / zero */

loc_00216E95: ;
    edi++;

loc_00216E96: ;
    eax = eax + 0x398;
    ecx--;
    if ((ecx != 0)) goto loc_00216E90; /* jne: not equal / not zero */

loc_00216E9E: ;
    eax = MEM32(0x6BD4C8);
    edx = edx + edi;
    if (CMP_LE(edx, eax)) goto loc_00216F04; /* jle: less or equal (signed <=) */

loc_00216EA9: ;
    eax = MEM32(0x849910);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    edx = MEM32(0x849928);
    ecx = esi;
    MEM32(0x849914) = eax;
    MEM32(0x849910) = ecx;
    if (CMP_L(eax, ebp)) goto loc_00216EDD; /* jl: less (signed <) */

loc_00216EC5: ;
    if (CMP_GE(eax, edx)) goto loc_00216EDD; /* jge: greater or equal (signed >=) */

loc_00216EC9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x398);
    MEM8(eax + ebx + 0x18C) = 0;
    ebx = MEM32(0x849924);

loc_00216EDD: ;
    if (CMP_GE(esi, ebp)) goto loc_00216EE5; /* jge: greater or equal (signed >=) */

loc_00216EE1: ;
    ecx = 0; /* xor self */
    goto loc_00216EEB;

loc_00216EE5: ;
    if (CMP_LE(esi, edx)) goto loc_00216EF1; /* jle: less or equal (signed <=) */

loc_00216EE9: ;
    ecx = edx;

loc_00216EEB: ;
    MEM32(0x849910) = ecx;

loc_00216EF1: ;
    xmm0 = MEMF(0x648D10); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x398);
    goto loc_00217093;

loc_00216F04: ;
    eax = MEM32(0x776184);
    if (CMP_EQ(eax, 0x8072F4)) goto loc_00216F1E; /* je: equal / zero */

loc_00216F10: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_00216F1B: ;
    esp = esp + 8;

loc_00216F1E: ;
    eax = MEM32(0x6BAF28);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x8497DC); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F19999A);
    MEM32(0x776180) = ebp;
    MEMF(0x84B508) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00216F81: ;
    xmm1 = MEMF(0x6BD4C4); /* movss */
    xmm2 = MEMF(0x648F10); /* movss */
    ecx = MEM32(0x7768D4);
    xmm3 = MEMF(0x648D10); /* movss */
    ebx = MEM32(0x849924);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = MEMF(0x7768E0); /* movss */
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm3; /* mulss */
    esp = esp + 0xC;
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm2 = xmm2 + MEMF(0x648FDC); /* addss */
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm0 = xmm0 + xmm2; /* addss */
    if (CMP_LE(ecx, ebp)) goto loc_00217007; /* jle: less or equal (signed <=) */

loc_00216FEB: ;
    edi = ebx + 0x100;

loc_00216FF1: ;
    if (CMP_EQ(MEM8(edi), 0)) goto loc_00216FFC; /* je: equal / zero */

loc_00216FF6: ;
    edx++;
    if (CMP_GE(eax, esi)) goto loc_00216FFC; /* jge: greater or equal (signed >=) */

loc_00216FFB: ;
    ebp++;

loc_00216FFC: ;
    eax++;
    edi = edi + 0x398;
    if (CMP_L(eax, ecx)) goto loc_00216FF1; /* jl: less (signed <) */

loc_00217007: ;
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x849928);
    eax = edx + -1;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    if (CMP_G(esi, eax)) esi = eax; /* cmovg */
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x398);
    SET_LO8(eax, MEM8(ecx + ebx + 0x100));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00217053; /* je: equal / zero */

loc_00217044: ;
    xmm1 = xmm1 * MEMF(0x648E14); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm1; /* movaps */

loc_00217053: ;
    eax = MEM32(0x849910);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648E90); /* mulss */
    MEM32(0x849914) = eax;
    MEM32(0x849910) = esi;
    if (CMP_GE(eax, edx)) goto loc_00217083; /* jge: greater or equal (signed >=) */

loc_0021706F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x398);
    MEM8(eax + ebx + 0x18C) = 0;
    ebx = MEM32(0x849924);

loc_00217083: ;
    xmm0 = xmm0 * MEMF(0x649728); /* mulss */
    xmm0 = xmm0 + MEMF(0x649350); /* addss */

loc_00217093: ;
    MEM8(ecx + ebx + 0x18C) = 1;
    POP32(esp, edi);
    MEMF(0x7768F4) = xmm0; /* movss */

loc_002170A4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002170B0
 * Original: 0x002170B0 - 0x002170BD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002170B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002170B0: ;
    eax = MEM32(0x6BD4B8);
    if (CMP_NE(eax, 3)) { sub_002170BD(); return; } /* jne: not equal / not zero */

loc_002170BA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002170E0
 * Original: 0x002170E0 - 0x00217966 (2182 bytes, 450 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002170E0(void)
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

loc_002170E0: ;
    esp = esp - 0x134;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(esp + 0x144); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x150);
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    ecx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(esp + 4) = xmm2; /* movss */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(esi & esi, 0)) goto loc_0021795E; /* jle: less or equal (signed <=) */

loc_00217126: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_00217130: ;
    edx = MEM32(esp + 0x158);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0021794E; /* jle: less or equal (signed <=) */

loc_00217141: ;
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm6 = xmm6 / xmm0; /* divss */
    ecx++;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 / xmm0; /* divss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm6; /* movss */
    MEMF(esp + 0x38) = xmm7; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    goto loc_002171A0;

loc_00217188: ;
    xmm6 = MEMF(esp + 0x34); /* movss */
    xmm7 = MEMF(esp + 0x38); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    /* nop */

loc_002171A0: ;
    ebp = eax + 1;
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm4 / xmm1; /* divss */
    xmm5 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm5 = xmm5 / xmm1; /* divss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(0x648D34); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_002171E3; /* jbe: below or equal (unsigned <=) */

loc_002171DE: ;
    xmm0 = xmm2; /* movaps */
    goto loc_002171EB;

loc_002171E3: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_002171EB; /* jbe: below or equal (unsigned <=) */

loc_002171E8: ;
    xmm0 = xmm3; /* movaps */

loc_002171EB: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_002171F5; /* jbe: below or equal (unsigned <=) */

loc_002171F0: ;
    xmm1 = xmm2; /* movaps */
    goto loc_002171FD;

loc_002171F5: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_002171FD; /* jbe: below or equal (unsigned <=) */

loc_002171FA: ;
    xmm1 = xmm3; /* movaps */

loc_002171FD: ;
    xmm2 = MEMF(0x648D88); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    if ((xmm2 <= xmm0)) goto loc_00217232; /* jbe: below or equal (unsigned <=) */

loc_0021722D: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0021723A;

loc_00217232: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_0021723A; /* jbe: below or equal (unsigned <=) */

loc_00217237: ;
    xmm0 = xmm3; /* movaps */

loc_0021723A: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00217244; /* jbe: below or equal (unsigned <=) */

loc_0021723F: ;
    xmm1 = xmm2; /* movaps */
    goto loc_0021724C;

loc_00217244: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_0021724C; /* jbe: below or equal (unsigned <=) */

loc_00217249: ;
    xmm1 = xmm3; /* movaps */

loc_0021724C: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm2 = MEMF(esp + 0x150); /* movss */
    /* fld st(0) */
    xmm0 = xmm0 * xmm2; /* mulss */
    /* FPU: fcos  */
    MEMF(esp + 0x10C) = xmm0; /* movss */
    MEMF(esp + 0x118) = xmm0; /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x124) = xmm1; /* movss */
    MEMF(esp + 0x130) = xmm1; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xFC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0xFC);
    xmm0 = MEMF(esp + 0xFC); /* movss */
    /* FPU: fsin  */
    MEM32(esp + 0x108) = eax;
    eax = MEM32(esp + 0x168);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x12C) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x104) = (float)fp_top(); fp_pop(); /* fst */
    xmm0 = MEMF(esp + 0x104); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0x134) = xmm0; /* movss */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x140) = (float)fp_top(); fp_pop(); /* fst */
    ecx = MEM32(esp + 0x140);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEM32(esp + 0x128) = ecx;
    MEMF(esp + 0x110) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x114) = (float)fp_top(); fp_pop(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEMF(esp + 0x11C) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x120) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(eax, eax)) goto loc_00217358; /* je: equal / zero */

loc_00217337: ;
    esi = esp + 0x108;
    edi = 4;

loc_00217343: ;
    edx = MEM32(esp + 0x168);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00217352: ;
    esi = esi + 0xC;
    edi--;
    if ((edi != 0)) goto loc_00217343; /* jne: not equal / not zero */

loc_00217358: ;
    esi = esp + 0x108;
    edi = 4;

loc_00217364: ;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x28) = esi;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x148);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esi = esi + 0xC;
    edi--;
    if ((edi != 0)) goto loc_00217364; /* jne: not equal / not zero */

loc_0021739C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002173A1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x24;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x44;
    ecx = esp + 0x110;
    esi = 4;
    edx = edx - 0x51;
    edx = edx << 0x18;
    edx = edx | 0xFFFFFF;

loc_002173C5: ;
    edi = MEM32(ecx + -8);
    MEM32(eax + -8) = edi;
    edi = MEM32(ecx + -4);
    MEM32(eax + -4) = edi;
    edi = MEM32(ecx);
    MEM32(eax) = edi;
    MEM32(eax + 4) = edx;
    ecx = ecx + 0xC;
    eax = eax + 0x30;
    esi--;
    if ((esi != 0)) goto loc_002173C5; /* jne: not equal / not zero */

loc_002173E1: ;
    xmm3 = xmm5; /* movaps */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm7; /* movaps */
    xmm7 = MEMF(esp + 0x160); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x164); /* mulss */
    MEMF(esp + 0x50) = xmm5; /* movss */
    MEMF(esp + 0x80) = xmm5; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x164); /* mulss */
    MEMF(esp + 0xB0) = xmm5; /* movss */
    MEMF(esp + 0xE0) = xmm5; /* movss */
    xmm2 = xmm4; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x170); /* mulss */
    MEMF(esp + 0x58) = xmm5; /* movss */
    MEMF(esp + 0x88) = xmm5; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x170); /* mulss */
    MEMF(esp + 0xB8) = xmm5; /* movss */
    MEMF(esp + 0xE8) = xmm5; /* movss */
    MEMF(esp + 0x4C) = xmm4; /* movss */
    MEMF(esp + 0xDC) = xmm4; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x16C); /* movss */
    MEMF(esp + 0x7C) = xmm6; /* movss */
    MEMF(esp + 0xAC) = xmm6; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x178); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x174); /* movss */
    MEMF(esp + 0x60) = xmm5; /* movss */
    MEMF(esp + 0x90) = xmm5; /* movss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    MEMF(esp + 0x84) = xmm6; /* movss */
    MEMF(esp + 0xB4) = xmm6; /* movss */
    MEMF(esp + 0xE4) = xmm4; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x178); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    MEMF(esp + 0xC0) = xmm5; /* movss */
    MEMF(esp + 0xF0) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x180); /* movss */
    MEMF(esp + 0x5C) = xmm4; /* movss */
    MEMF(esp + 0x8C) = xmm6; /* movss */
    MEMF(esp + 0xBC) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x17C); /* movss */
    MEMF(esp + 0xEC) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x184); /* movss */
    PUSH32(esp, 0);
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm3; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xCC) = xmm3; /* movss */
    MEMF(esp + 0xD0) = xmm1; /* movss */
    MEMF(esp + 0xFC) = xmm2; /* movss */
    MEMF(esp + 0x100) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_002175B7: ;
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    edx = MEM32(ebx + 4);
    edx = edx + 0x200;
    ecx = eax + 0xD8;
    if (CMP_B(ecx, edx)) goto loc_00217601; /* jb: below (unsigned <) */

loc_002175D2: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 0x2DC)) goto loc_002175E9; /* jae: above or equal (unsigned >=) */

loc_002175E4: ;
    ecx = 0x2DC;

loc_002175E9: ;
    if (CMP_AE(eax, 0x2DC)) goto loc_002175F5; /* jae: above or equal (unsigned >=) */

loc_002175F0: ;
    eax = 0x2DC;

loc_002175F5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002175FB: ;
    ebx = MEM32(0x5499E8);

loc_00217601: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    eax = eax + 4;
    MEM32(eax + 4) = 0x40C01818;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    edx = MEM32(esp + 0x48);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    ecx = MEM32(esp + 0x78);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x6C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ecx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x80); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x8C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x9C); /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    xmm0 = MEMF(esp + 0xA0); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    edx = MEM32(esp + 0xA8);
    eax = eax + 4;
    MEM32(eax + 4) = edx;
    xmm0 = MEMF(esp + 0xAC); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB0); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB4); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB8); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xBC); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC0); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC4); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC8); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xCC); /* movss */
    ecx = MEM32(esp + 0xD8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xD0); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xD4); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xDC); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ecx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE0); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE4); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE8); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xEC); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xF0); /* movss */
    ecx = MEM32(esp + 0x158);
    eax = eax + 4;
    xmm3 = MEMF(esp + 0x154); /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xF4); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xF8); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ebx) = eax;
    eax = ebp;
    if (CMP_L(eax, ecx)) goto loc_00217188; /* jl: less (signed <) */

loc_0021793B: ;
    xmm4 = MEMF(0x648D14); /* movss */
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x15C);

loc_0021794E: ;
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(ecx, esi)) goto loc_00217130; /* jl: less (signed <) */

loc_0021795B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0021795E: ;
    POP32(esp, esi);
    esp = esp + 0x134;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00217970
 * Original: 0x00217970 - 0x00218219 (2217 bytes, 457 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217970(void)
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

loc_00217970: ;
    esp = esp - 0x138;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(esp + 0x148); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x154);
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    ecx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(esp + 4) = xmm2; /* movss */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(esi & esi, 0)) goto loc_00218211; /* jle: less or equal (signed <=) */

loc_002179B6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x5499E8);
    PUSH32(esp, edi);
    /* nop */

loc_002179C0: ;
    edx = MEM32(esp + 0x15C);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00218201; /* jle: less or equal (signed <=) */

loc_002179D1: ;
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx++;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm6 = xmm6 / xmm0; /* divss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(esp + 0x18C));
    xmm7 = xmm7 / xmm0; /* divss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm6; /* subss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm6; /* movss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    goto loc_00217A40;

loc_00217A24: ;
    xmm6 = MEMF(esp + 0x30); /* movss */
    xmm7 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    goto loc_00217A40;

    /* nop */
    /* nop */

loc_00217A40: ;
    ebx = eax + 1;
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm4 = xmm4 / xmm1; /* divss */
    xmm5 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm5 = xmm5 / xmm1; /* divss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(0x648D34); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00217A83; /* jbe: below or equal (unsigned <=) */

loc_00217A7E: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00217A8B;

loc_00217A83: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00217A8B; /* jbe: below or equal (unsigned <=) */

loc_00217A88: ;
    xmm0 = xmm3; /* movaps */

loc_00217A8B: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00217A95; /* jbe: below or equal (unsigned <=) */

loc_00217A90: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00217A9D;

loc_00217A95: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_00217A9D; /* jbe: below or equal (unsigned <=) */

loc_00217A9A: ;
    xmm1 = xmm3; /* movaps */

loc_00217A9D: ;
    xmm2 = MEMF(0x648D88); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    if ((xmm2 <= xmm0)) goto loc_00217AD2; /* jbe: below or equal (unsigned <=) */

loc_00217ACD: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00217ADA;

loc_00217AD2: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00217ADA; /* jbe: below or equal (unsigned <=) */

loc_00217AD7: ;
    xmm0 = xmm3; /* movaps */

loc_00217ADA: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00217AE4; /* jbe: below or equal (unsigned <=) */

loc_00217ADF: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00217AEC;

loc_00217AE4: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_00217AEC; /* jbe: below or equal (unsigned <=) */

loc_00217AE9: ;
    xmm1 = xmm3; /* movaps */

loc_00217AEC: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm2 = MEMF(esp + 0x154); /* movss */
    /* fld st(0) */
    xmm0 = xmm0 * xmm2; /* mulss */
    /* FPU: fcos  */
    MEMF(esp + 0x110) = xmm0; /* movss */
    MEMF(esp + 0x11C) = xmm0; /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x128) = xmm1; /* movss */
    MEMF(esp + 0x134) = xmm1; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x100) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x100); /* movss */
    edx = MEM32(esp + 0x100);
    /* FPU: fsin  */
    MEMF(esp + 0x130) = xmm0; /* movss */
    MEM32(esp + 0x10C) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x108) = (float)fp_top(); fp_pop(); /* fst */
    xmm0 = MEMF(esp + 0x108); /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEMF(esp + 0x138) = xmm0; /* movss */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x144) = (float)fp_top(); fp_pop(); /* fst */
    eax = MEM32(esp + 0x144);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEM32(esp + 0x12C) = eax;
    eax = MEM32(esp + 0x16C);
    MEMF(esp + 0x114) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x118) = (float)fp_top(); fp_pop(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEMF(esp + 0x120) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x124) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(eax, eax)) goto loc_00217BF8; /* je: equal / zero */

loc_00217BD7: ;
    esi = esp + 0x10C;
    edi = 4;

loc_00217BE3: ;
    ecx = MEM32(esp + 0x16C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00217BF2: ;
    esi = esi + 0xC;
    edi--;
    if ((edi != 0)) goto loc_00217BE3; /* jne: not equal / not zero */

loc_00217BF8: ;
    esi = esp + 0x10C;
    edi = 4;

loc_00217C04: ;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x24) = esi;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esi = esi + 0xC;
    edi--;
    if ((edi != 0)) goto loc_00217C04; /* jne: not equal / not zero */

loc_00217C3C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00217C41: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esp + 0x2C);
    eax = esp + 0x48;
    ecx = esp + 0x114;
    edx = edx + esi;
    edx = edx << 0x18;
    edx = edx | 0xFFFFFF;
    esi = 4;
    goto loc_00217C70;

    /* nop */

loc_00217C70: ;
    edi = MEM32(ecx + -8);
    MEM32(eax + -8) = edi;
    edi = MEM32(ecx + -4);
    MEM32(eax + -4) = edi;
    edi = MEM32(ecx);
    MEM32(eax) = edi;
    MEM32(eax + 4) = edx;
    ecx = ecx + 0xC;
    eax = eax + 0x30;
    esi--;
    if ((esi != 0)) goto loc_00217C70; /* jne: not equal / not zero */

loc_00217C8C: ;
    xmm3 = xmm5; /* movaps */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm7; /* movaps */
    xmm7 = MEMF(esp + 0x164); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x168); /* mulss */
    MEMF(esp + 0x54) = xmm5; /* movss */
    MEMF(esp + 0x84) = xmm5; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x168); /* mulss */
    MEMF(esp + 0xB4) = xmm5; /* movss */
    MEMF(esp + 0xE4) = xmm5; /* movss */
    xmm2 = xmm4; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x174); /* mulss */
    MEMF(esp + 0x5C) = xmm5; /* movss */
    MEMF(esp + 0x8C) = xmm5; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x174); /* mulss */
    MEMF(esp + 0xBC) = xmm5; /* movss */
    MEMF(esp + 0xEC) = xmm5; /* movss */
    MEMF(esp + 0x50) = xmm4; /* movss */
    MEMF(esp + 0xE0) = xmm4; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x170); /* movss */
    MEMF(esp + 0x80) = xmm6; /* movss */
    MEMF(esp + 0xB0) = xmm6; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x17C); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm7 = MEMF(esp + 0x178); /* movss */
    MEMF(esp + 0x64) = xmm5; /* movss */
    MEMF(esp + 0x94) = xmm5; /* movss */
    MEMF(esp + 0x58) = xmm4; /* movss */
    MEMF(esp + 0x88) = xmm6; /* movss */
    MEMF(esp + 0xB8) = xmm6; /* movss */
    MEMF(esp + 0xE8) = xmm4; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x17C); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    MEMF(esp + 0xC4) = xmm5; /* movss */
    MEMF(esp + 0xF4) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x184); /* movss */
    MEMF(esp + 0x60) = xmm4; /* movss */
    MEMF(esp + 0x90) = xmm6; /* movss */
    MEMF(esp + 0xC0) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x180); /* movss */
    MEMF(esp + 0xF0) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x188); /* movss */
    PUSH32(esp, 0);
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    PUSH32(esp, ebp);
    MEMF(esp + 0x70) = xmm2; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm3; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xD0) = xmm3; /* movss */
    MEMF(esp + 0xD4) = xmm1; /* movss */
    MEMF(esp + 0x100) = xmm2; /* movss */
    MEMF(esp + 0x104) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_00217E65: ;
    ebp = MEM32(0x5499E8);
    eax = MEM32(ebp);
    edx = MEM32(ebp + 4);
    edx = edx + 0x200;
    ecx = eax + 0xD8;
    if (CMP_B(ecx, edx)) goto loc_00217EB0; /* jb: below (unsigned <) */

loc_00217E81: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 0x2DC)) goto loc_00217E98; /* jae: above or equal (unsigned >=) */

loc_00217E93: ;
    ecx = 0x2DC;

loc_00217E98: ;
    if (CMP_AE(eax, 0x2DC)) goto loc_00217EA4; /* jae: above or equal (unsigned >=) */

loc_00217E9F: ;
    eax = 0x2DC;

loc_00217EA4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00217EAA: ;
    ebp = MEM32(0x5499E8);

loc_00217EB0: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    eax = eax + 4;
    MEM32(eax + 4) = 0x40C01818;
    xmm0 = MEMF(esp + 0x40); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    edx = MEM32(esp + 0x4C);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x6C); /* movss */
    ecx = MEM32(esp + 0x7C);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x78); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x80); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ecx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x8C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x9C); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA0); /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    xmm0 = MEMF(esp + 0xA4); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    edx = MEM32(esp + 0xAC);
    eax = eax + 4;
    MEM32(eax + 4) = edx;
    xmm0 = MEMF(esp + 0xB0); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB4); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB8); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xBC); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC0); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC4); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC8); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xCC); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xD0); /* movss */
    ecx = MEM32(esp + 0xDC);
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xD4); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xD8); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE0); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ecx;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE4); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE8); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xEC); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xF0); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xF4); /* movss */
    ecx = MEM32(esp + 0x15C);
    eax = eax + 4;
    xmm3 = MEMF(esp + 0x158); /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xF8); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xFC); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ebp) = eax;
    eax = ebx;
    if (CMP_L(eax, ecx)) goto loc_00217A24; /* jl: less (signed <) */

loc_002181EE: ;
    xmm4 = MEMF(0x648D14); /* movss */
    esi = MEM32(esp + 0x160);
    ecx = MEM32(esp + 0x14);

loc_00218201: ;
    ecx++;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(ecx, esi)) goto loc_002179C0; /* jl: less (signed <) */

loc_0021820E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00218211: ;
    POP32(esp, esi);
    esp = esp + 0x138;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00218220
 * Original: 0x00218220 - 0x0021860E (1006 bytes, 300 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218220: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x2C);
    esp = esp - 0x38;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_00218235: ;
    PUSH32(esp, 0); sub_00207FF0(); /* call 0x00207FF0 */

loc_0021823A: ;
    SET_LO8(eax, MEM8(0x849B80));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00218260; /* je: equal / zero */

loc_00218243: ;
    eax = MEM32(0x849ADC);
    esi = 1;
    if (CMP_EQ(eax, esi)) goto loc_00218260; /* je: equal / zero */

loc_00218251: ;
    PUSH32(esp, 0); sub_00222D50(); /* call 0x00222D50 */

loc_00218256: ;
    PUSH32(esp, 0); sub_00207FF0(); /* call 0x00207FF0 */

loc_0021825B: ;
    PUSH32(esp, 0); sub_00222D90(); /* call 0x00222D90 */

loc_00218260: ;
    eax = MEM32(0x849938);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_00218608; /* je: equal / zero */

loc_0021826F: ;
    eax = MEM32(eax + 0x568);
    if (CMP_EQ(eax, edi)) goto loc_00218608; /* je: equal / zero */

loc_0021827D: ;
    edx = MEM32(eax + 0x444);
    if (CMP_EQ(edx, edi)) goto loc_00218608; /* je: equal / zero */

loc_0021828B: ;
    eax = MEM32(eax + 0x3F4);
    ecx = MEM32(eax + 0x18);
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(0x6BD92C);
    MEM32(esp + 0x10) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x33));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x24) = edi;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002182D6; /* jne: not equal / not zero */

loc_002182CB: ;
    SET_LO8(ecx, MEM8(eax + 0x34));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002182D6; /* jne: not equal / not zero */

loc_002182D2: ;
    SET_LO8(ebx, 1);
    goto loc_002182D8;

loc_002182D6: ;
    SET_LO8(ebx, 0); /* xor self */

loc_002182D8: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    eax = edx + 0x58;
    MEM32(esp + 0x10) = ebp;
    ecx = 0; /* xor self */
    edx = 0x1A;
    /* nop */

loc_002182F0: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002182F9; /* je: equal / zero */

loc_002182F4: ;
    if (CMP_EQ(MEM32(eax + -4), edx)) goto loc_0021830B; /* je: equal / zero */

loc_002182F9: ;
    if (CMP_EQ(MEM32(eax), 8)) goto loc_0021830B; /* je: equal / zero */

loc_002182FE: ;
    esi = eax + -24;
    MEM32(esp + ebp * 4 + 0x28) = esi;
    ebp++;
    if (CMP_EQ(ebp, 8)) goto loc_00218314; /* je: equal / zero */

loc_0021830B: ;
    ecx++;
    eax = eax + 0x38;
    if (CMP_L(ecx, 8)) goto loc_002182F0; /* jl: less (signed <) */

loc_00218314: ;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(ebp, edi)) goto loc_002183AC; /* jle: less or equal (signed <=) */

loc_00218320: ;
    esi = 0x84994C;

loc_00218325: ;
    ecx = MEM32(esp + edi * 4 + 0x28);
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002183A1; /* je: equal / zero */

loc_00218330: ;
    if (CMP_EQ(eax, 0x13)) goto loc_002183A1; /* je: equal / zero */

loc_00218335: ;
    ecx = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x2C);
    eax = MEM32(edx + 0x58);
    eax--;
    if (((int32_t)eax < 0)) goto loc_002183A1; /* js: sign (negative) */

loc_00218341: ;
    eax = MEM32(eax * 8 + 0x59BBD0);
    ecx = ZX16(MEM16(eax));
    eax = MEM32(ecx * 4 + 0x6A6108);
    PUSH32(esp, 0x5E9954);
    PUSH32(esp, 0x5F94D8);
    PUSH32(esp, 0); sub_00206060(); /* call 0x00206060 */

loc_00218361: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_002183A1; /* je: equal / zero */

loc_0021836B: ;
    eax = MEM32(esp + edi * 4 + 0x28);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx * 8 + 0x74A954);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx * 8 + 0x74A950);
    edx = MEM32(0x849A7C);
    ecx = MEM32(esp + 0x14);
    edx++;
    ecx++;
    MEM32(esi + -4) = eax;
    MEM32(0x849A7C) = edx;
    MEM32(esp + 0x14) = ecx;
    esi = esi + 0x1C;

loc_002183A1: ;
    edi++;
    if (CMP_L(edi, ebp)) goto loc_00218325; /* jl: less (signed <) */

loc_002183AA: ;
    edi = 0; /* xor self */

loc_002183AC: ;
    if (CMP_NE(MEM32(0x849ADC), edi)) goto loc_00218606; /* jne: not equal / not zero */

loc_002183B8: ;
    edx = MEM32(0x849938);
    eax = MEM32(edx + 0x568);
    ecx = 0; /* xor self */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 0x444);
    SET_LO8(ebx, MEM8(ecx + 0x10));
    ecx = MEM32(ecx + 8);
    edx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    MEM32(esp + 0x1C) = edi;
    esi = esp + 0x1C;
    eax = esp + 0x10;
    edi = edx;
    PUSH32(esp, 0); sub_0032DAE0(); /* call 0x0032DAE0 */

loc_002183F4: ;
    eax = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00218484; /* jle: less or equal (signed <=) */

loc_00218406: ;
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    esi = esi + 0x84994C;

loc_00218411: ;
    edi = MEM32(esp + ebx * 4 + 0x1C);
    ecx = 0x5F94F8;
    eax = 1;
    /* nop */

loc_00218420: ;
    if (CMP_EQ(eax, edi)) goto loc_00218430; /* je: equal / zero */

loc_00218424: ;
    eax = MEM32(ecx + 0x18);
    ecx = ecx + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_00218420; /* jne: not equal / not zero */

loc_0021842E: ;
    goto loc_0021847B;

loc_00218430: ;
    ecx = ecx + 4;
    if ((ecx == 0)) goto loc_0021847B; /* je: equal / zero */

loc_00218435: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(ecx + eax * 4 + 8);
    if (TEST_Z(eax, eax)) goto loc_0021847B; /* je: equal / zero */

loc_00218441: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00206060(); /* call 0x00206060 */

loc_0021844D: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0021847B; /* je: equal / zero */

loc_00218457: ;
    edx = MEM32(edi * 8 + 0x74A5EC);
    eax = MEM32(edi * 8 + 0x74A5E8);
    MEM32(esi) = edx;
    edx = MEM32(0x849A80);
    edx++;
    MEM32(esi + -4) = eax;
    ebp++;
    MEM32(0x849A80) = edx;
    esi = esi + 0x1C;

loc_0021847B: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_00218411; /* jl: less (signed <) */

loc_00218484: ;
    edx = MEM32(0x849938);
    eax = MEM32(edx + 0x568);
    eax = MEM32(eax + 0x444);
    ecx = 0; /* xor self */
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, ecx);
    ebx = esp + 0x20;
    edi = esp + 0x14;
    MEM32(esp + 0x20) = 0x3E;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0); sub_0032F5E0(); /* call 0x0032F5E0 */

loc_002184B6: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00218606; /* jle: less or equal (signed <=) */

loc_002184C7: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    ebp = ebp + 0x849948;
    edi = ebp;

loc_002184D2: ;
    edx = MEM32(esp + ebx * 4 + 0x1C);
    if (CMP_EQ(edx, 0x3E)) goto loc_002185F9; /* je: equal / zero */

loc_002184DF: ;
    ecx = 0x5F92D0;
    eax = 0x17;
    /* nop */

loc_002184F0: ;
    if (CMP_EQ(eax, edx)) goto loc_00218504; /* je: equal / zero */

loc_002184F4: ;
    eax = MEM32(ecx + 0x18);
    ecx = ecx + 0x18;
    if (CMP_NE(eax, 0x57)) goto loc_002184F0; /* jne: not equal / not zero */

loc_002184FF: ;
    goto loc_002185F9;

loc_00218504: ;
    esi = ecx + 4;
    if (TEST_Z(esi, esi)) goto loc_002185F9; /* je: equal / zero */

loc_0021850F: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 0x18);
    eax = MEM32(esi + eax * 4 + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00206060(); /* call 0x00206060 */

loc_00218523: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_002185F9; /* je: equal / zero */

loc_00218531: ;
    ecx = MEM32(esi + 0x10);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0021853B: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x5F94A8);
    PUSH32(esp, ecx);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_0021854C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0021855E; /* jne: not equal / not zero */

loc_00218553: ;
    MEM32(edi) = 0x5F89AC;
    goto loc_002185F0;

loc_0021855E: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0x5F9470);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_0021856C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0021857B; /* jne: not equal / not zero */

loc_00218573: ;
    MEM32(edi) = 0x5F89A0;
    goto loc_002185F0;

loc_0021857B: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0x5F9430);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_00218589: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00218598; /* jne: not equal / not zero */

loc_00218590: ;
    MEM32(edi) = 0x5F8990;
    goto loc_002185F0;

loc_00218598: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x5F93EC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_002185A6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002185B5; /* jne: not equal / not zero */

loc_002185AD: ;
    MEM32(edi) = 0x5F8980;
    goto loc_002185F0;

loc_002185B5: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0x5F93B0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_002185C3: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002185D2; /* jne: not equal / not zero */

loc_002185CA: ;
    MEM32(edi) = 0x5F8970;
    goto loc_002185F0;

loc_002185D2: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0x5F9378);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F4CA(); /* call 0x0046F4CA */

loc_002185E0: ;
    esp = esp + 8;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    eax = eax & 0x5F8960;
    MEM32(edi) = eax;

loc_002185F0: ;
    MEM32(0x849A7C) = MEM32(0x849A7C) + 1;
    edi = edi + 0x1C;

loc_002185F9: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_002184D2; /* jl: less (signed <) */

loc_00218606: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00218608: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00218610
 * Original: 0x00218610 - 0x00218873 (611 bytes, 213 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218610: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    eax = 0x5E9914;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    eax = esp + 0x18;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = 0x5F51D0;
    MEM32(esp + 0x24) = 0x5F8954;
    MEM32(esp + 0x28) = 0x5F8940;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_00218650: ;
    esi = MEM32(esp + 0x34);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + 0x14);
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    ebx = MEM32(eax + 0xC);
    if (CMP_EQ(edi, ebp)) goto loc_002186C2; /* je: equal / zero */

loc_00218667: ;
    (void)0; /* cmp MEM32(edi), ebp - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_BE(MEM32(edi), ebp)) goto loc_002186C2; /* jbe: below or equal (unsigned <=) */

loc_0021866F: ;
    /* nop */

loc_00218670: ;
    esi = MEM32(edi + 4);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + ebp + 4);
    esi = esi + ebp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_00218684: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002186AA; /* je: equal / zero */

loc_0021868B: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(ebx + 0xC);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + esi) = LO8(ecx);

loc_002186AA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edi);
    eax++;
    ebp = ebp + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(eax, ecx)) goto loc_00218670; /* jb: below (unsigned <) */

loc_002186BC: ;
    esi = MEM32(esp + 0x34);
    ebp = 0; /* xor self */

loc_002186C2: ;
    eax = MEM32(esp + 0x14);
    eax = eax + 4;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(eax);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(eax, ebp)) goto loc_00218650; /* jne: not equal / not zero */

loc_002186DB: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, 0x5F8928);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_002186F9: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00218854; /* je: equal / zero */

loc_00218704: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 8);
    ecx = MEM32(0x81BCE0);
    edi = MEM32(edx + 0x10);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_00218722: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_0021872E: ;
    esp = esp + 0x10;
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_0021873A; /* je: equal / zero */

loc_00218737: ;
    ebx = MEM32(eax + 0x34);

loc_0021873A: ;
    ebp = MEM32(esp + 0x34);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(ecx + 0xC);
    edi = MEM32(esp + 0x18);
    esi = esi + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00218772; /* je: equal / zero */

loc_00218758: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00218772; /* je: equal / zero */

loc_0021875F: ;
    if (TEST_S(edi, edi)) goto loc_00218772; /* jl: less (signed <) */

loc_00218763: ;
    if (CMP_AE(edi, MEM32(eax))) goto loc_00218783; /* jae: above or equal (unsigned >=) */

loc_00218767: ;
    eax = MEM32(eax + 4);
    edx = edi + edi * 2;
    eax = eax + edx * 4;
    goto loc_00218776;

loc_00218772: ;
    eax = MEM32(esp + 0x34);

loc_00218776: ;
    if (TEST_Z(eax, eax)) goto loc_00218783; /* je: equal / zero */

loc_0021877A: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_00218800; /* je: equal / zero */

loc_00218781: ;
    goto loc_00218787;

loc_00218783: ;
    eax = MEM32(esp + 0x34);

loc_00218787: ;
    if (TEST_Z(eax, eax)) goto loc_00218800; /* je: equal / zero */

loc_0021878B: ;
    if (TEST_Z(esi, esi)) goto loc_00218800; /* je: equal / zero */

loc_0021878F: ;
    edx = MEM32(eax);
    MEM32(esi) = edx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(eax + 0x1C);
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_00218800; /* je: equal / zero */

loc_002187A7: ;
    if (TEST_Z(ecx, ecx)) goto loc_00218800; /* je: equal / zero */

loc_002187AB: ;
    if (TEST_Z(ebx, ebx)) goto loc_00218800; /* je: equal / zero */

loc_002187AF: ;
    eax = edx;
    edx = edx << 6;
    edx = edx + ecx;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    eax = eax + eax * 8;
    PUSH32(esp, edx);
    eax = ebx + eax * 4;
    PUSH32(esp, 0); sub_00428CA0(); /* call 0x00428CA0 */

loc_002187C7: ;
    esp = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_002187D2: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    MEMF(esi + 8) = xmm0; /* movss */

loc_00218800: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = ebp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0021882A; /* je: equal / zero */

loc_00218810: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0021882A; /* je: equal / zero */

loc_00218817: ;
    if (TEST_S(edi, edi)) goto loc_0021882A; /* jl: less (signed <) */

loc_0021881B: ;
    if (CMP_AE(edi, MEM32(eax))) goto loc_0021883B; /* jae: above or equal (unsigned >=) */

loc_0021881F: ;
    eax = MEM32(eax + 4);
    edx = edi + edi * 2;
    eax = eax + edx * 4;
    goto loc_0021882E;

loc_0021882A: ;
    eax = MEM32(esp + 0x34);

loc_0021882E: ;
    if (TEST_Z(eax, eax)) goto loc_0021883B; /* je: equal / zero */

loc_00218832: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_0021886B; /* je: equal / zero */

loc_00218839: ;
    goto loc_0021883F;

loc_0021883B: ;
    eax = MEM32(esp + 0x34);

loc_0021883F: ;
    if (TEST_Z(eax, eax)) goto loc_0021886B; /* je: equal / zero */

loc_00218843: ;
    if (TEST_Z(ecx, ecx)) goto loc_0021886B; /* je: equal / zero */

loc_00218847: ;
    edx = MEM32(eax + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00218854: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    MEMF(esi + 0x18) = xmm0; /* movss */

loc_0021886B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00218880
 * Original: 0x00218880 - 0x00218B68 (744 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00218880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648CF4); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEMF(0x80768C) = xmm0; /* movss */
    MEMF(0x807690) = xmm0; /* movss */
    MEM32(0x807668) = ebx;
    MEM8(0x8086C8) = 1;
    MEM8(0x8086C6) = 1;
    MEMF(0x80761C) = xmm3; /* movss */
    MEMF(0x807620) = xmm3; /* movss */
    MEMF(0x807624) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(0x807628) = xmm0; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x80762C) = xmm0; /* movss */
    MEMF(0x807630) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    eax = MEM32(0x776184);
    (void)0; /* cmp eax, 0x8072F4 - flags set for next jcc */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(0x807634) = xmm0; /* movss */
    MEMF(0x80763C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEMF(0x8076A4) = xmm0; /* movss */
    xmm0 = xmm0 / MEMF(ebp + 0x10); /* divss */
    MEMF(0x807638) = xmm1; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    MEMF(0x8076B8) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEM8(0x807694) = LO8(ebx);
    MEM8(0x807695) = LO8(ebx);
    MEM8(0x807696) = LO8(ebx);
    MEM32(0x8076B0) = 1;
    MEM8(0x8086C4) = LO8(ebx);
    MEM8(0x807667) = 0xFF;
    MEM8(0x807697) = 0x7F;
    MEM8(0x8086D5) = 1;
    MEMF(0x8076B4) = xmm1; /* movss */
    MEMF(0x80769C) = xmm3; /* movss */
    if (CMP_EQ(eax, 0x8072F4)) goto loc_00218A2A; /* je: equal / zero */

loc_00218A1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_00218A27: ;
    esp = esp + 8;

loc_00218A2A: ;
    eax = MEM32(0x6BAF28);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x8497DC); /* movss */
    esi = eax + 0x10;
    ecx = 0x10;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = eax + 0x90;
    ecx = 0x10;
    edi = esp + 0x20;
    eax = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    MEM32(0x776180) = ebx;
    MEMF(0x84B508) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00218AB2: ;
    esi = edx;
    ecx = 0x10;
    edi = 0x8072B0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x8086E8) = 1;
    PUSH32(esp, 0); sub_003D2EF0(); /* call 0x003D2EF0 */

loc_00218ACF: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00218AEB; /* jb: below (unsigned <) */

loc_00218ADC: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00218AEB: ;
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
    if (CMP_NE(eax, 2)) goto loc_00218B48; /* jne: not equal / not zero */

loc_00218B19: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00218B1E: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00218B23: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00218B39; /* jb: below (unsigned <) */

loc_00218B2A: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00218B39: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00218B41: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00218B46: ;
    MEM32(esi) = eax;

loc_00218B48: ;
    edx = 0x1010101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00218B57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x549B04) = 0x1010101;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00218B70
 * Original: 0x00218B70 - 0x00218BBF (79 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218B70(void)
{
    float xmm0;

loc_00218B70: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00218B79: ;
    eax = MEM32(0x8072F0);
    xmm0 = MEMF(0x64971C); /* movss */
    eax--;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x8072F0) = eax;
    MEM8(0x8086D5) = 0;
    MEM32(0x8086E8) = 0;
    MEMF(0x8076A4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00218BB4: ;
    MEM32(0x549B04) = 0x10101;
    esp += 4; return; /* ret */

}

/**
 * sub_00218BC0
 * Original: 0x00218BC0 - 0x00218C89 (201 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218BC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00218BC0: ;
    eax = MEM32(0x776184);
    if (CMP_EQ(eax, 0x8072F4)) goto loc_00218BDA; /* je: equal / zero */

loc_00218BCC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_00218BD7: ;
    esp = esp + 8;

loc_00218BDA: ;
    eax = MEM32(0x6BAF28);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 4); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x8497DC); /* movss */
    PUSH32(esp, 0x5F59F0);
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x6BD4C4);
    eax = esp + 0xC;
    MEMF(0x80765C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, eax);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x7FFFFFFF);
    eax = 0x5F13BC;
    MEM32(0x776180) = 0;
    MEMF(0x807660) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00218C75: ;
    xmm0 = MEMF(0x649890); /* movss */
    esp = esp + 0x10;
    MEMF(0x6BD4C4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00218C90
 * Original: 0x00218C90 - 0x00218CD6 (70 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218C90(void)
{

loc_00218C90: ;
    edx = MEM32(esp + 4);
    eax = eax << 7;
    MEM32(eax + 0x547360) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x547368) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x54736C) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x547370) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x547378) = ecx;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x800;
    MEM32(eax + 0x54737C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00218CE0
 * Original: 0x00218CE0 - 0x00218F42 (610 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218CE0: ;
    esp = esp - 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_00218CF2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00218D9E; /* je: equal / zero */

loc_00218CFA: ;
    SET_LO8(eax, MEM8(0x75C5BC));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00218F3C; /* jbe: below or equal (unsigned <=) */

loc_00218D07: ;
    esi = MEM32(0x75C5B8);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_00218D3C; /* jne: not equal / not zero */

loc_00218D14: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00218D25: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00218D2D: ;
    edx = MEM32(0x75C5B8);
    MEM32(edx + 8) = eax;
    esi = MEM32(0x75C5B8);

loc_00218D3C: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00218D68; /* jne: not equal / not zero */

loc_00218D43: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00218D4B: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75C5B8);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00218D68; /* jne: not equal / not zero */

loc_00218D5B: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75C5B8);

loc_00218D68: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00218D94; /* jne: not equal / not zero */

loc_00218D70: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00218D8C; /* jne: not equal / not zero */

loc_00218D7A: ;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00218D83: ;
    esi = MEM32(0x75C5B8);
    esp = esp + 8;

loc_00218D8C: ;
    esi = MEM32(esi + 4);
    goto loc_00218E16;

loc_00218D94: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00218D99: ;
    esi = MEM32(eax + 4);
    goto loc_00218E16;

loc_00218D9E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x34), _icall_esp); /* indirect call */
    }

loc_00218DA5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00218DDA; /* je: equal / zero */

loc_00218DA9: ;
    eax = MEM32(0x849E74);
    if (TEST_NZ(eax, eax)) goto loc_00218DC3; /* jne: not equal / not zero */

loc_00218DB2: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    ecx--;
    ecx = ecx & 2;
    eax = ecx;
    goto loc_00218DED;

loc_00218DC3: ;
    SET_LO8(ecx, MEM8(eax + 0x3E));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    ecx--;
    ecx = ecx & 2;
    eax = ecx;
    goto loc_00218DED;

loc_00218DDA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_00218DE1: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0026F720(); /* call 0x0026F720 */

loc_00218DEA: ;
    esp = esp + 0xC;

loc_00218DED: ;
    if (CMP_A(eax, 4)) goto loc_00218F3C; /* ja: above (unsigned >) */

loc_00218DF6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x218F44); /* switch: 5 entries, 3 targets */
    if (_jt == 0x00218DFDu) goto loc_00218DFD;
    if (_jt == 0x00218E04u) goto loc_00218E04;
    if (_jt == 0x00218F3Cu) goto loc_00218F3C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00218DFD: ;
    eax = 0x18E;
    goto loc_00218E09;

loc_00218E04: ;
    eax = 0x2D1;

loc_00218E09: ;
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00218E11: ;
    esp = esp + 4;
    esi = eax;

loc_00218E16: ;
    if (TEST_Z(esi, esi)) goto loc_00218F3C; /* je: equal / zero */

loc_00218E1E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F333333);
    eax = esp + 0x28;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0021AB80(); /* call 0x0021AB80 */

loc_00218E33: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_00218E4D: ;
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_00218E55: ;
    ecx = MEM32(0x849B1C);
    edx = MEM32(0x7767E0);
    ecx--;
    edi = esp + 0x20;
    esi = esp + 0x1C;
    MEM32(0x849B1C) = ecx;
    MEM32(0x84B868) = edx;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_00218E7B: ;
    (void)0; /* test MEM8(0x87A1C0), 1 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_00218EA3; /* jne: not equal / not zero */

loc_00218E85: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_00218EA3: ;
    esi = MEM32(0x87A1AC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM8(0x87A1BC) = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00218EB8: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(esp + 0x20); /* movss */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0021AE40(); /* call 0x0021AE40 */

loc_00218EEB: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00218EF7: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_00218F1E; /* jne: not equal / not zero */

loc_00218F00: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_00218F1E: ;
    eax = 0; /* xor self */

loc_00218F20: ;
    if (CMP_EQ(esi, MEM32(eax * 4 + 0x87A1AC))) goto loc_00218F35; /* je: equal / zero */

loc_00218F29: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_00218F20; /* jl: less (signed <) */

loc_00218F2F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00218F35: ;
    MEM8(eax + 0x87A1BC) = 0;

loc_00218F3C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00218F60
 * Original: 0x00218F60 - 0x00219052 (242 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00218F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB94;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x862CC0);
    PUSH32(esp, edi);
    eax = esp + 0x134;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0x134;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    MEM32(esp + 0x38) = esi;
    MEM8(esp + 0xC4) = LO8(ebx);
    MEM32(esp + 0xC8) = 2;
    MEM8(esp + 0x118) = LO8(ebx);
    MEM8(esp + 0x124) = LO8(ebx);
    MEM8(esp + 0x125) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00218FBC: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0xD8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9A3C);
    MEM8(esp + 0x148) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00218FDA: ;
    xmm0 = MEMF(0x648D14); /* movss */
    eax = MEM32(0x849800);
    esp = esp + 0x10;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEMF(esp + 0x120) = xmm0; /* movss */
    MEMF(esp + 0x124) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3F800000);
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEMF(esp + 0x12C) = xmm0; /* movss */
    MEMF(esp + 0x130) = xmm0; /* movss */
    ecx = esp + 0xA4;
    PUSH32(esp, ebx);
    if (CMP_NE(esi, ebx)) { sub_00219052(); return; } /* jne: not equal / not zero */

loc_00219030: ;
    eax = MEM32(eax + 0xBCC);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_0021903F: ;
    ecx = MEM32(0x849800);
    edx = MEM32(ecx + 0xBD0);
    eax = 5;
    g_seh_ebp = ebp; sub_00219072(); return; /* tail jmp 0x00219072 */

}

/**
 * sub_0021AB80
 * Original: 0x0021AB80 - 0x0021ABDD (93 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB80(void)
{

loc_0021AB80: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0021ABE0(); /* call 0x0021ABE0 */

loc_0021AB87: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x776710);
    PUSH32(esp, 0); sub_00202870(); /* call 0x00202870 */

loc_0021ABA5: ;
    edx = MEM32(0x84B868);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00218880(); /* call 0x00218880 */

loc_0021ABBB: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F59999A);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0021ABCF: ;
    ecx = MEM32(esp + 0x3C);
    esp = esp + 0x34;
    MEM32(0x8076B0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0021ABE0
 * Original: 0x0021ABE0 - 0x0021AD96 (438 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021ABE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021ABE0: ;
    ecx = MEM32(0x8498EC);
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    ecx++;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    MEM32(0x8498EC) = ecx;
    ecx = MEM32(esi + 0x1A04);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_0021AC2B; /* je: equal / zero */

loc_0021AC07: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0021AC29; /* jne: not equal / not zero */

loc_0021AC10: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0021AC29; /* jne: not equal / not zero */

loc_0021AC1C: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0021AC29; /* je: equal / zero */

loc_0021AC23: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0021AC29: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_0021AC2B: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x1A08);
    if (TEST_Z(ecx, ecx)) goto loc_0021AC5F; /* je: equal / zero */

loc_0021AC3B: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0021AC5D; /* jne: not equal / not zero */

loc_0021AC44: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0021AC5D; /* jne: not equal / not zero */

loc_0021AC50: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0021AC5D; /* je: equal / zero */

loc_0021AC57: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_0021AC5D: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_0021AC5F: ;
    MEM32(ebp) = ecx;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0021AC78; /* jb: below (unsigned <) */

loc_0021AC69: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0021AC78: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = 0;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = 0;
    if (CMP_NE(eax, 2)) goto loc_0021ACDD; /* jne: not equal / not zero */

loc_0021ACAE: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0021ACB3: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0021ACB8: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0021ACCE; /* jb: below (unsigned <) */

loc_0021ACBF: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0021ACCE: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0021ACD6: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0021ACDB: ;
    MEM32(esi) = eax;

loc_0021ACDD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_0021ACE4: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0021AD0B; /* jne: not equal / not zero */

loc_0021ACED: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0021AD0B: ;
    edi = MEM32(0x87A1AC);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM8(0x87A1BC) = 1;
    MEM32(0x8498F8) = edi;
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_0021AD41: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_0021AD54: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_0021AD5E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053B9F0(); /* call 0x0053B9F0 */

loc_0021AD75: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_0021AD7B: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x8498F0) = edx;
    MEM32(0x8498F4) = eax;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0021ADA0
 * Original: 0x0021ADA0 - 0x0021AE01 (97 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021ADA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021ADA0: ;
    edx = MEM32(0x8498EC);
    SET_LO8(ecx, MEM8(0x87A1C0));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    edx--;
    eax = 1;
    (void)0; /* test LO8(eax), LO8(ecx) - flags set for next jcc */
    MEM32(0x8498EC) = edx;
    MEM32(0x8498F0) = ebx;
    MEM32(0x8498F4) = ebx;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0021ADE8; /* jne: not equal / not zero */

loc_0021ADCB: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | eax;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0021ADE8: ;
    ecx = MEM32(0x8498F8);
    eax = 0; /* xor self */

loc_0021ADF0: ;
    if (CMP_EQ(ecx, MEM32(eax * 4 + 0x87A1AC))) { sub_0021AE01(); return; } /* je: equal / zero */

loc_0021ADF9: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_0021ADF0; /* jl: less (signed <) */

loc_0021ADFF: ;
    g_seh_ebp = ebp; sub_0021AE0D(); return; /* tail jmp 0x0021AE0D */

}

/**
 * sub_0021AE40
 * Original: 0x0021AE40 - 0x0021AECD (141 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0021AE40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    xmm0 = MEMF(0x849B58); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0xC); /* addss */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(0x6B8314);
    MEMF(ebp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x849B5C); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x10); /* addss */
    PUSH32(esp, ebx);
    MEMF(ebp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x6BD590); /* movss */
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ecx;
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x6BD594); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = edx;
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0021AEB3: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0021AEBA: ;
    SET_LO8(eax, MEM8(0x75C14C));
    edi = edi | 0xFFFFFFFFu;
    if (CMP_A(LO8(eax) & LO8(eax), 0)) { sub_0021AECD(); return; } /* ja: above (unsigned >) */

loc_0021AEC6: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0021AF5A(); return; /* tail jmp 0x0021AF5A */

}

/**
 * sub_0021B700
 * Original: 0x0021B700 - 0x0021B7E2 (226 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0021B700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1B4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x134;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0x134;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    MEM32(0x8498DC) = 1;
    MEM8(esp + 0xC4) = LO8(ebx);
    MEM32(esp + 0xC8) = 4;
    MEM8(esp + 0x118) = LO8(ebx);
    MEM8(esp + 0x124) = LO8(ebx);
    MEM8(esp + 0x125) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_0021B75C: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0xD8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9A3C);
    MEM8(esp + 0x148) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_0021B77A: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(0x863D04);
    esp = esp + 0x10;
    eax = 2;
    MEMF(esp + 0x120) = xmm0; /* movss */
    MEMF(esp + 0x124) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3F800000);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEMF(esp + 0x12C) = xmm0; /* movss */
    MEMF(esp + 0x130) = xmm0; /* movss */
    PUSH32(esp, ebx);
    ecx = esp + 0xA8;
    if (CMP_EQ(ecx, eax)) { sub_0021B7E2(); return; } /* je: equal / zero */

loc_0021B7D6: ;
    PUSH32(esp, 0x5F8898);
    eax = 4;
    g_seh_ebp = ebp; sub_0021B7E7(); return; /* tail jmp 0x0021B7E7 */

}

/**
 * sub_0021D4B0
 * Original: 0x0021D4B0 - 0x0021D4CB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D4B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D4B0: ;
    ecx = MEM32(eax + 4);
    if (CMP_A(ecx, 4)) { sub_0021D4CB(); return; } /* ja: above (unsigned >) */

loc_0021D4B8: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x21D53C)); return; /* indirect tail jmp */

    eax = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_0021D4CD(); return; /* tail jmp 0x0021D4CD */

    eax = MEM32(eax + 0x1C);
    eax = MEM32(eax);
    g_seh_ebp = ebp; sub_0021D4CD(); return; /* tail jmp 0x0021D4CD */

}

/**
 * sub_0021D790
 * Original: 0x0021D790 - 0x0021D803 (115 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D790(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021D790: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) { sub_0021D803(); return; } /* jne: not equal / not zero */

loc_0021D799: ;
    eax = MEM32(0x6BD4B8);
    if (CMP_EQ(eax, 1)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7A3: ;
    if (CMP_EQ(eax, 6)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7A8: ;
    if (CMP_EQ(eax, 0xA)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7AD: ;
    if (CMP_EQ(eax, 0xF)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7B2: ;
    if (CMP_EQ(eax, 0x13)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7B7: ;
    if (CMP_EQ(eax, 0x15)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7BC: ;
    if (CMP_EQ(eax, 0x16)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7C1: ;
    if (CMP_EQ(eax, 0x19)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7C6: ;
    if (CMP_EQ(eax, 0x1A)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7CB: ;
    if (CMP_EQ(eax, 0x26)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7D0: ;
    if (CMP_EQ(eax, 0x2A)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7D5: ;
    if (CMP_EQ(eax, 0x1C)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7DA: ;
    if (CMP_EQ(eax, 0x34)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7DF: ;
    if (CMP_EQ(eax, 0x1F)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7E4: ;
    if (CMP_EQ(eax, 0x2C)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7E9: ;
    if (CMP_EQ(eax, 0x2E)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7EE: ;
    if (CMP_EQ(eax, 0x31)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7F3: ;
    if (CMP_EQ(eax, 0xB)) { sub_0021D803(); return; } /* je: equal / zero */

loc_0021D7F8: ;
    eax = MEM32(0x86422C);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0021D810
 * Original: 0x0021D810 - 0x0021D8D2 (194 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D810: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648E68); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021D839; /* je: equal / zero */

loc_0021D829: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0021D839: ;
    eax = MEM32(0x849800);
    ecx = MEM32(eax + 0xBF8);
    PUSH32(esp, esi);
    esi = MEM32(0x849C08);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00256C90(); /* call 0x00256C90 */

loc_0021D859: ;
    esp = esp + 0x14;
    eax = eax - 3;
    if ((eax == 0)) goto loc_0021D8A8; /* je: equal / zero */

loc_0021D861: ;
    eax--;
    if ((eax != 0)) goto loc_0021D8D0; /* jne: not equal / not zero */

loc_0021D864: ;
    edx = MEM32(0x849C08);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0021D870: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0021D8A2; /* jne: not equal / not zero */

loc_0021D877: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8818;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0021D883: ;
    esi = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0021D88C: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEM32(eax + 0x1C) = esi;
    MEMF(eax + 0x20) = xmm0; /* movss */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002426C0(); return; /* tail jmp 0x002426C0 */

loc_0021D8A2: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00242460(); return; /* tail jmp 0x00242460 */

loc_0021D8A8: ;
    eax = MEM32(0x849C08);
    PUSH32(esp, edi);
    MEM16(eax) = 0;
    PUSH32(esp, 5);
    edi = 0; /* xor self */
    MEM16(0x862D84) = 0;
    PUSH32(esp, 0); sub_00208AA0(); /* call 0x00208AA0 */

loc_0021D8C5: ;
    esp = esp + 4;
    MEM8(0x849C0C) = 0;
    POP32(esp, edi);

loc_0021D8D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021D8E0
 * Original: 0x0021D8E0 - 0x0021DB3B (603 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D8E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0021D8E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(0x849AA4);
    PUSH32(esp, 0x5F9A3C);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_0021D900: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    esp = esp + 8;
    if (CMP_B(eax, ecx)) goto loc_0021D921; /* jb: below (unsigned <) */

loc_0021D912: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0021D921: ;
    MEM32(eax) = 0x4030C;
    ebx = 0; /* xor self */
    MEM32(eax + 4) = ebx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, 2)) goto loc_0021D980; /* jne: not equal / not zero */

loc_0021D951: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0021D956: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0021D95B: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0021D971; /* jb: below (unsigned <) */

loc_0021D962: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0021D971: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0021D979: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0021D97E: ;
    MEM32(esi) = eax;

loc_0021D980: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 - MEMF(0x648FDC); /* subss */
    xmm1 = MEMF(0x649218); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F19999A);
    eax = esp + 0x1C;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(0x807650) = xmm1; /* movss */
    MEMF(0x807654) = xmm0; /* movss */
    MEMF(0x807658) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0021AB80(); /* call 0x0021AB80 */

loc_0021D9D2: ;
    xmm0 = MEMF(0x649218); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    SET_LO8(eax, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F87F4);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    MEM8(0x807664) = LO8(eax);
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = LO8(ebx);
    MEM8(0x807667) = LO8(eax);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0021DA1C: ;
    xmm1 = MEMF(0x6BD4C4); /* movss */
    xmm0 = MEMF(0x649218); /* movss */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F87DC);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0021DA5D: ;
    esp = esp + 0x18;
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_0021DA65: ;
    ecx = MEM32(0x849B1C);
    eax = MEM32(0x7767E0);
    ecx--;
    edi = esp + 0x14;
    esi = esp + 0x18;
    MEM32(0x849B1C) = ecx;
    MEM32(0x84B868) = eax;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_0021DA89: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0021DAB0; /* jne: not equal / not zero */

loc_0021DA92: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0021DAB0: ;
    esi = MEM32(0x87A1AC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM8(0x87A1BC) = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0021DAC5: ;
    xmm0 = MEMF(0x649234); /* movss */
    PUSH32(esp, 0x449C4000);
    ecx = esp + 0x24;
    PUSH32(esp, 0x45516000);
    PUSH32(esp, ecx);
    eax = esp + 0x24;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0021AE40(); /* call 0x0021AE40 */

loc_0021DAF1: ;
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0021DAFC: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0021DB23; /* jne: not equal / not zero */

loc_0021DB05: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0021DB23: ;
    eax = 0; /* xor self */

loc_0021DB25: ;
    if (CMP_EQ(esi, MEM32(eax * 4 + 0x87A1AC))) { sub_0021DB3B(); return; } /* je: equal / zero */

loc_0021DB2E: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_0021DB25; /* jl: less (signed <) */

loc_0021DB34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0021DB50
 * Original: 0x0021DB50 - 0x0021DC9C (332 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DB50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021DB50: ;
    eax = MEM32(0x849ADC);
    esp = esp - 8;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_NE(eax, 3)) goto loc_0021DB73; /* jne: not equal / not zero */

loc_0021DB64: ;
    if (CMP_NE(MEM8(ebx), 0x4E)) goto loc_0021DB73; /* jne: not equal / not zero */

loc_0021DB69: ;
    edi = MEM32(0x849E04);
    if (TEST_NZ(edi, edi)) goto loc_0021DB7A; /* jne: not equal / not zero */

loc_0021DB73: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0021DB78: ;
    edi = eax;

loc_0021DB7A: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_0021DB88: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_00344A90(); /* call 0x00344A90 */

loc_0021DB96: ;
    edi = MEM32(esp + 0xC);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5F87D0);
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    MEM32(0x8076B0) = 0;
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0021DBB7: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_0021DBCA: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(0x807650); /* movss */
    xmm0 = xmm0 - MEMF(0x648FDC); /* subss */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5F13E0);
    SET_LO8(ebx, 0xFF);
    PUSH32(esp, 0x40);
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, esi);
    MEMF(0x807650) = xmm1; /* movss */
    MEM8(0x807664) = LO8(ebx);
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = 0;
    MEM8(0x807667) = LO8(ebx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0021DC1E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0021DC26: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F87CC);
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = LO8(ebx);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0021DC46: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F13E0);
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    MEM8(0x807664) = 0;
    MEM8(0x807665) = 0xC8;
    MEM8(0x807666) = 0;
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0021DC69: ;
    esp = esp + 0x4C;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0021DC74: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(0x807666) = LO8(ebx);
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM32(0x8076B0) = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0021DCA0
 * Original: 0x0021DCA0 - 0x0021DD77 (215 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DCA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0021DCA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    SET_LO8(eax, MEM8(0x87B3A4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(esp + 0xB8) = 0x5F87B8;
    MEM32(esp + 0xBC) = 0x5F87A0;
    MEM32(esp + 0xC0) = 0x5F877C;
    MEM32(esp + 0xC4) = 0x5F8760;
    MEM32(esp + 0xC8) = 0x5F8754;
    MEM32(esp + 0xCC) = 0x5EFEB0;
    MEM32(esp + 0xD0) = 0x5F8748;
    MEM32(esp + 0xD4) = 0x5F873C;
    MEM32(esp + 0xD8) = 0x5F8730;
    MEM32(esp + 0xDC) = 0x5F8724;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0021DD4B; /* jne: not equal / not zero */

loc_0021DD28: ;
    MEM32(0x87B3A4) = MEM32(0x87B3A4) | 1;
    eax = esp + 0xB8;
    MEM32(0x87B398) = eax;
    MEM32(0x87B39C) = 0xA;
    MEM32(0x87B3A0) = edi;

loc_0021DD4B: ;
    ecx = MEM32(0x86267C);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    ebx = 0x6BD5F0;
    MEM32(esp + 0x38) = ebx;
    if (CMP_EQ(ecx, edi)) goto loc_0021DD6C; /* je: equal / zero */

loc_0021DD5E: ;
    eax = MEM32(0x862680);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (CMP_NE(eax, edi)) { sub_0021DD77(); return; } /* jne: not equal / not zero */

loc_0021DD6C: ;
    ebx = 0x6BD5A0;
    MEM32(esp + 0x38) = ebx;
    g_seh_ebp = ebp; sub_0021DDA5(); return; /* tail jmp 0x0021DDA5 */

}

/**
 * sub_0021EF40
 * Original: 0x0021EF40 - 0x0021F147 (519 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021EF40: ;
    eax = MEM32(0x849ADC);
    esp = esp - 0xA8;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xCC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x6BD5F0;
    if (CMP_NE(eax, 3)) goto loc_0021EF76; /* jne: not equal / not zero */

loc_0021EF67: ;
    if (CMP_NE(MEM8(ebx), 0x4E)) goto loc_0021EF76; /* jne: not equal / not zero */

loc_0021EF6C: ;
    edi = MEM32(0x849E04);
    if (TEST_NZ(edi, edi)) goto loc_0021EF7D; /* jne: not equal / not zero */

loc_0021EF76: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0021EF7B: ;
    edi = eax;

loc_0021EF7D: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_0021EF8B: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_00344A90(); /* call 0x00344A90 */

loc_0021EF99: ;
    ecx = MEM32(0x86267C);
    if (TEST_Z(ecx, ecx)) goto loc_0021EFB1; /* je: equal / zero */

loc_0021EFA3: ;
    eax = MEM32(0x862680);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_NZ(eax, eax)) goto loc_0021EFB6; /* jne: not equal / not zero */

loc_0021EFB1: ;
    esi = 0x6BD5A0;

loc_0021EFB6: ;
    xmm0 = MEMF(esi + 0x38); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x40); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(0x648F8C); /* subss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(0x80765C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x807660); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    eax = esp + 0xD8;
    ecx = esp + 0xD4;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0021AB80(); /* call 0x0021AB80 */

loc_0021F014: ;
    edx = MEM32(esp + 0xDC);
    xmm0 = MEMF(esp + 0xCC); /* movss */
    xmm1 = MEMF(esp + 0xD0); /* movss */
    SET_LO8(ebx, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = LO8(ebx);
    MEM8(0x807667) = LO8(ebx);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0021F069: ;
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_0021F071: ;
    ecx = MEM32(0x849B1C);
    eax = MEM32(0x7767E0);
    ecx--;
    edi = esp + 0xD0;
    esi = esp + 0xCC;
    MEM32(0x849B1C) = ecx;
    MEM32(0x84B868) = eax;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_0021F09B: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0021F0C2; /* jne: not equal / not zero */

loc_0021F0A4: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0021F0C2: ;
    esi = MEM32(0x87A1AC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM8(0x87A1BC) = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0021F0D7: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebp);
    eax = MEM32(esp + 0xC0);
    xmm0 = MEMF(ebp + 8); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0021AE40(); /* call 0x0021AE40 */

loc_0021F101: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0021F10D: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0021F134; /* jne: not equal / not zero */

loc_0021F116: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | 1;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0021F134: ;
    eax = 0; /* xor self */

loc_0021F136: ;
    if (CMP_EQ(esi, MEM32(eax * 4 + 0x87A1AC))) { sub_0021F147(); return; } /* je: equal / zero */

loc_0021F13F: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_0021F136; /* jl: less (signed <) */

loc_0021F145: ;
    g_seh_ebp = ebp; sub_0021F14E(); return; /* tail jmp 0x0021F14E */

}

/**
 * sub_0021F5D0
 * Original: 0x0021F5D0 - 0x0021F756 (390 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F5D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F5D0: ;
    edx = MEM32(0x86267C);
    esp = esp - 8;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    eax = 0x6BD5F0;
    if (TEST_Z(edx, edx)) goto loc_0021F5F7; /* je: equal / zero */

loc_0021F5E8: ;
    ecx = MEM32(0x862680);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (TEST_NZ(ecx, ecx)) goto loc_0021F5FC; /* jne: not equal / not zero */

loc_0021F5F7: ;
    eax = 0x6BD5A0;

loc_0021F5FC: ;
    xmm1 = MEMF(eax + 0x40); /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    eax = esp + 0x38;
    ecx = esp + 0x34;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(ebp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0021AB80(); /* call 0x0021AB80 */

loc_0021F627: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    esp = esp + 8;
    SET_LO8(ebx, 0xFF);
    PUSH32(esp, 0);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F8330;
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = LO8(ebx);
    MEM8(0x807667) = LO8(ebx);
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0021F678: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0021F67E: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_00218B70(); /* call 0x00218B70 */

loc_0021F686: ;
    ecx = MEM32(0x849B1C);
    eax = MEM32(0x7767E0);
    ecx--;
    edi = esp + 0x30;
    esi = esp + 0x2C;
    MEM32(0x849B1C) = ecx;
    MEM32(0x84B868) = eax;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_0021F6AA: ;
    (void)0; /* test MEM8(0x87A1C0), 1 - flags set for next jcc */
    edi = 1;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0021F6D5; /* jne: not equal / not zero */

loc_0021F6B8: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | edi;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0021F6D5: ;
    esi = MEM32(0x87A1AC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM8(0x87A1BC) = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0021F6EA: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebp);
    eax = MEM32(esp + 0x20);
    xmm0 = MEMF(ebp + 8); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0021AE40(); /* call 0x0021AE40 */

loc_0021F711: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0021F71D: ;
    if (TEST_NZ(MEM8(0x87A1C0), 1)) goto loc_0021F743; /* jne: not equal / not zero */

loc_0021F726: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | edi;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_0021F743: ;
    eax = 0; /* xor self */

loc_0021F745: ;
    if (CMP_EQ(esi, MEM32(eax * 4 + 0x87A1AC))) { sub_0021F756(); return; } /* je: equal / zero */

loc_0021F74E: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_0021F745; /* jl: less (signed <) */

loc_0021F754: ;
    g_seh_ebp = ebp; sub_0021F75D(); return; /* tail jmp 0x0021F75D */

}

/**
 * sub_0021F8D0
 * Original: 0x0021F8D0 - 0x0021F991 (193 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F8D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0021FF30(); /* call 0x0021FF30 */

loc_0021F8D6: ;
    SET_LO8(eax, MEM8(0x849AC0));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0021F989; /* je: equal / zero */

loc_0021F8E5: ;
    eax = MEM32(0x849AA4);
    if (CMP_EQ(eax, ebx)) goto loc_0021F98F; /* je: equal / zero */

loc_0021F8F2: ;
    PUSH32(esp, 0); sub_002066F0(); /* call 0x002066F0 */

loc_0021F8F7: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_0021F92A; /* je: equal / zero */

loc_0021F903: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0021F90D: ;
    if (CMP_EQ(eax, ebx)) goto loc_0021F92A; /* je: equal / zero */

loc_0021F911: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0021F92A; /* jp: parity */

loc_0021F926: ;
    SET_LO8(eax, 1);
    goto loc_0021F92C;

loc_0021F92A: ;
    SET_LO8(eax, 0); /* xor self */

loc_0021F92C: ;
    ecx = MEM32(0x849ACC);
    ecx--;
    if (CMP_A(ecx, 9)) goto loc_0021F98F; /* ja: above (unsigned >) */

loc_0021F938: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x21F994); /* switch: 10 entries, 6 targets */
    if (_jt == 0x0021F93Fu) goto loc_0021F93F;
    if (_jt == 0x0021F94Fu) goto loc_0021F94F;
    if (_jt == 0x0021F95Fu) goto loc_0021F95F;
    if (_jt == 0x0021F96Fu) goto loc_0021F96F;
    if (_jt == 0x0021F97Fu) goto loc_0021F97F;
    if (_jt == 0x0021F98Fu) goto loc_0021F98F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021F93F: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0021F98F; /* je: equal / zero */

loc_0021F943: ;
    MEM32(0x849ACC) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0021F94F: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0021F98F; /* je: equal / zero */

loc_0021F953: ;
    MEM32(0x849ACC) = 5;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0021F95F: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0021F98F; /* je: equal / zero */

loc_0021F963: ;
    MEM32(0x849ACC) = 0xB;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0021F96F: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0021F98F; /* je: equal / zero */

loc_0021F973: ;
    MEM32(0x849ACC) = 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0021F97F: ;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0021F98F; /* je: equal / zero */

loc_0021F983: ;
    MEM8(0x849AC0) = LO8(ebx);

loc_0021F989: ;
    MEM32(0x849ACC) = ebx;

loc_0021F98F: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F9C0
 * Original: 0x0021F9C0 - 0x0021FBFD (573 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F9C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F9C0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    eax = MEM32(ebx + 0xD4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0021FA62; /* jne: not equal / not zero */

loc_0021F9D9: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0021F9E7; /* jne: not equal / not zero */

loc_0021F9E2: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0021F9E7: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0021FA35; /* je: equal / zero */

loc_0021FA0D: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C0)) goto loc_0021FA35; /* jb: below (unsigned <) */

loc_0021FA19: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0021FA23: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0021FA2E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0021FA55; /* jne: not equal / not zero */

loc_0021FA35: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0021FA47: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0021FA52: ;
    esp = esp + 8;

loc_0021FA55: ;
    edx = eax;
    MEM32(ebx + 0xD4) = eax;
    PUSH32(esp, 0); sub_003FA650(); /* call 0x003FA650 */

loc_0021FA62: ;
    eax = MEM32(0x84B868);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x64971C); /* movss */
    xmm2 = MEMF(0x649124); /* movss */
    MEM32(ebx + 0xD0) = eax;
    eax = MEM32(ebx + 0xD4);
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm1 = MEMF(0x649718); /* movss */
    xmm3 = MEMF(0x64A254); /* movss */
    MEMF(eax + 0xE0) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    MEMF(eax + 0xD8) = xmm0; /* movss */
    MEMF(eax + 0xE4) = xmm0; /* movss */
    MEMF(eax + 0xE8) = xmm1; /* movss */
    eax = MEM32(ebx + 0xD4);
    SET_LO8(ecx, MEM8(eax + 8));
    MEMF(eax + 0x104) = xmm2; /* movss */
    xmm2 = MEMF(0x649950); /* movss */
    MEMF(eax + 0x108) = xmm2; /* movss */
    xmm2 = MEMF(0x648CE4); /* movss */
    MEMF(eax + 0x10C) = xmm2; /* movss */
    xmm2 = MEMF(0x649430); /* movss */
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEM8(eax + 8) = LO8(ecx);
    MEMF(eax + 0x110) = xmm2; /* movss */
    xmm2 = MEMF(0x64A250); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A24C); /* movss */
    PUSH32(esp, eax);
    esi = ebx;
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E36E0(); /* call 0x003E36E0 */

loc_0021FB71: ;
    ebp = ebx + 0x50;
    esp = esp + 0xC;
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, 0); sub_003E3660(); /* call 0x003E3660 */

loc_0021FB80: ;
    edi = MEM32(ebx + 0xD4);
    edi = edi + 0x10;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebx + 0xD4);
    edi = edi + 0x50;
    ecx = 0x10;
    esi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0xD4);
    PUSH32(esp, 0); sub_003FB030(); /* call 0x003FB030 */

loc_0021FBAD: ;
    esi = MEM32(ebx + 0xD4);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_0021FBBE: ;
    esi = ebx;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x84B868);
    ebx = ebx + 0x90;
    esi = esi + 0x90;
    ecx = 0x10;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x10;
    esi = ebx;
    edi = 0x81B810;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0021FC00
 * Original: 0x0021FC00 - 0x0021FEE6 (742 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FC00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FC00: ;
    (void)0; /* cmp eax, 0xA - flags set for next jcc */
    SET_LO8(edx, MEM8(0x849B80));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x849ACC);
    if (CMP_NE(eax, 0xA)) goto loc_0021FC55; /* jne: not equal / not zero */

loc_0021FC14: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0021FC2F; /* je: equal / zero */

loc_0021FC18: ;
    MEM8(esi * 2 + 0x849B60) = 0;
    MEM8(esi * 2 + 0x849B61) = 0;
    MEM8(0x849AC0) = 0;

loc_0021FC2F: ;
    eax = ecx + -1;
    if (CMP_A(eax, 7)) goto loc_0021FEE4; /* ja: above (unsigned >) */

loc_0021FC3B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21FEE8); /* switch: 16 entries, 11 targets */
    if (_jt == 0x0021FC42u) goto loc_0021FC42;
    if (_jt == 0x0021FC49u) goto loc_0021FC49;
    if (_jt == 0x0021FC50u) goto loc_0021FC50;
    if (_jt == 0x0021FC75u) goto loc_0021FC75;
    if (_jt == 0x0021FCE0u) goto loc_0021FCE0;
    if (_jt == 0x0021FD2Eu) goto loc_0021FD2E;
    if (_jt == 0x0021FD82u) goto loc_0021FD82;
    if (_jt == 0x0021FDD3u) goto loc_0021FDD3;
    if (_jt == 0x0021FE2Bu) goto loc_0021FE2B;
    if (_jt == 0x0021FE9Cu) goto loc_0021FE9C;
    if (_jt == 0x0021FEE4u) goto loc_0021FEE4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021FC42: ;
    eax = 1;
    goto loc_0021FC55;

loc_0021FC49: ;
    eax = 3;
    goto loc_0021FC55;

loc_0021FC50: ;
    eax = 5;

loc_0021FC55: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0021FC65; /* je: equal / zero */

loc_0021FC59: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0021FC65; /* je: equal / zero */

loc_0021FC5E: ;
    PUSH32(esp, 0); sub_0021FFA0(); /* call 0x0021FFA0 */

loc_0021FC63: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021FC65: ;
    if (CMP_A(eax, 7)) goto loc_0021FEE4; /* ja: above (unsigned >) */

loc_0021FC6E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21FF08); /* switch: 8 entries, 7 targets */
    if (_jt == 0x0021FC75u) goto loc_0021FC75;
    if (_jt == 0x0021FCE0u) goto loc_0021FCE0;
    if (_jt == 0x0021FD2Eu) goto loc_0021FD2E;
    if (_jt == 0x0021FD82u) goto loc_0021FD82;
    if (_jt == 0x0021FDD3u) goto loc_0021FDD3;
    if (_jt == 0x0021FE2Bu) goto loc_0021FE2B;
    if (_jt == 0x0021FE9Cu) goto loc_0021FE9C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021FC75: ;
    if (CMP_EQ(ecx, 4)) goto loc_0021FCD4; /* je: equal / zero */

loc_0021FC7A: ;
    if (CMP_NE(ecx, 5)) goto loc_0021FC8B; /* jne: not equal / not zero */

loc_0021FC7F: ;
    MEM32(0x849ACC) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021FC8B: ;
    PUSH32(esp, 0); sub_00227EE0(); /* call 0x00227EE0 */

loc_0021FC90: ;
    eax = MEM32(0x849AA4);
    if (TEST_NZ(eax, eax)) goto loc_0021FCA0; /* jne: not equal / not zero */

loc_0021FC99: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_0021FC9E: ;
    goto loc_0021FCCD;

loc_0021FCA0: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82F0);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_0021FCB8: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_0021FCCD: ;
    MEM8(0x849AC0) = 1;

loc_0021FCD4: ;
    MEM32(0x849ACC) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021FCE0: ;
    eax = MEM32(0x849AA4);
    if (TEST_Z(eax, eax)) goto loc_0021FEE4; /* je: equal / zero */

loc_0021FCED: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_0021FCF9: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82B8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_0021FD1F: ;
    esp = esp + 0x10;
    MEM32(0x849ACC) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021FD2E: ;
    eax = MEM32(0x849AA4);
    if (TEST_NZ(eax, eax)) goto loc_0021FD3C; /* jne: not equal / not zero */

loc_0021FD37: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_0021FD3C: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8278);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_0021FD5A: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_0021FD6F: ;
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = 0xA;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021FD82: ;
    eax = MEM32(0x849AA4);
    if (TEST_NZ(eax, eax)) goto loc_0021FD92; /* jne: not equal / not zero */

loc_0021FD8B: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_0021FD90: ;
    goto loc_0021FDC0;

loc_0021FD92: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82F0);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_0021FDAA: ;
    ecx = MEM32(0x849AA4);
    eax = MEM32(ecx + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_0021FDC0: ;
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021FDD3: ;
    if (CMP_EQ(ecx, 4)) goto loc_0021FDE1; /* je: equal / zero */

loc_0021FDD8: ;
    if (CMP_NE(ecx, 5)) goto loc_0021FEE4; /* jne: not equal / not zero */

loc_0021FDE1: ;
    eax = MEM32(0x849AA4);
    if (TEST_Z(eax, eax)) goto loc_0021FE1F; /* je: equal / zero */

loc_0021FDEA: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_0021FDF6: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82B8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_0021FE1C: ;
    esp = esp + 0x10;

loc_0021FE1F: ;
    MEM32(0x849ACC) = 6;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021FE2B: ;
    eax = MEM32(0x849AA4);
    if (TEST_NZ(eax, eax)) goto loc_0021FE5C; /* jne: not equal / not zero */

loc_0021FE34: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_0021FE39: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8238);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_0021FE57: ;
    esp = esp + 0x10;
    goto loc_0021FE89;

loc_0021FE5C: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8238);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_0021FE74: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_0021FE89: ;
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = 7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021FE9C: ;
    eax = MEM32(0x849AA4);
    if (TEST_Z(eax, eax)) goto loc_0021FEDA; /* je: equal / zero */

loc_0021FEA5: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_0021FEB1: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x5F81F8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_0021FED7: ;
    esp = esp + 0x10;

loc_0021FEDA: ;
    MEM32(0x849ACC) = 9;

loc_0021FEE4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021FF30
 * Original: 0x0021FF30 - 0x0021FFA0 (112 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FF30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021FF30: ;
    SET_LO8(eax, MEM8(0x849B60));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021FF4B; /* je: equal / zero */

loc_0021FF3C: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0021FF43: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    MEM8(eax + 0x30) = LO8(ebx);

loc_0021FF4B: ;
    SET_LO8(eax, MEM8(0x849B61));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021FF67; /* je: equal / zero */

loc_0021FF54: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0021FF5B: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    MEM8(ecx + 0x30) = LO8(ebx);

loc_0021FF67: ;
    SET_LO8(eax, MEM8(0x849B62));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021FF83; /* je: equal / zero */

loc_0021FF70: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0021FF77: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 8);
    eax = eax + 8;
    MEM8(edx + 0x30) = LO8(ebx);

loc_0021FF83: ;
    SET_LO8(eax, MEM8(0x849B63));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021FF9E; /* je: equal / zero */

loc_0021FF8C: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0021FF93: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0xC;
    eax = MEM32(eax);
    MEM8(eax + 0x30) = LO8(ebx);

loc_0021FF9E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021FFA0
 * Original: 0x0021FFA0 - 0x002200AB (267 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FFA0: ;
    PUSH32(esp, ecx);
    if (CMP_A(eax, 7)) goto loc_002200A9; /* ja: above (unsigned >) */

loc_0021FFAA: ;
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(eax * 4 + 0x2200AC); /* switch: 8 entries, 5 targets */
    if (_jt == 0x0021FFB2u) goto loc_0021FFB2;
    if (_jt == 0x0022001Bu) goto loc_0022001B;
    if (_jt == 0x00220034u) goto loc_00220034;
    if (_jt == 0x0022008Du) goto loc_0022008D;
    if (_jt == 0x00220098u) goto loc_00220098;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021FFB2: ;
    ecx = MEM32(0x84A5F8);
    eax = 1;
    MEM8(esi * 2 + 0x849B60) = LO8(eax);
    MEM8(esi * 2 + 0x849B61) = LO8(eax);
    edx = MEM32(ecx + 0x238);
    ecx = MEM32(edx);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(0x6BD640) = ecx;
    MEM8(0x776A00) = LO8(ebx);
    MEM8(0x849B64) = LO8(ebx);
    MEM8(0x849AC0) = LO8(eax);
    PUSH32(esp, 0); sub_00227490(); /* call 0x00227490 */

loc_0021FFF3: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(esi, ebx)) ? 1 : 0); /* setne */
    eax = eax + eax + 1;
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0022000D: ;
    ebx = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_00220018: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0022001B: ;
    ebx = 0; /* xor self */
    MEM8(0x849AC0) = LO8(ebx);
    MEM8(esi * 2 + 0x849B60) = LO8(ebx);
    MEM8(esi * 2 + 0x849B61) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00220034: ;
    eax = 1;
    PUSH32(esp, 0xC);
    MEM8(esi * 2 + 0x849B60) = LO8(eax);
    MEM8(esi * 2 + 0x849B61) = LO8(eax);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_0022004E: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_00220065; /* je: equal / zero */

loc_00220057: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x5F77C4;
    MEM32(eax + 8) = esi;
    goto loc_00220067;

loc_00220065: ;
    eax = 0; /* xor self */

loc_00220067: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(esi, ebx)) ? 1 : 0); /* setne */
    eax = eax + eax + 1;
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0022007F: ;
    ebx = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_0022008A: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0022008D: ;
    MEM8(esi * 2 + 0x849B60) = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00220098: ;
    ebx = 0; /* xor self */
    MEM8(esi * 2 + 0x849B60) = LO8(ebx);
    MEM8(esi * 2 + 0x849B61) = LO8(ebx);
    POP32(esp, ebx);

loc_002200A9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002200D0
 * Original: 0x002200D0 - 0x00220114 (68 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002200D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002200D0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002200F1; /* je: equal / zero */

loc_002200D9: ;
    eax = MEM32(0x849ACC);
    if (TEST_NZ(eax, eax)) { sub_00220114(); return; } /* jne: not equal / not zero */

loc_002200E2: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax * 2 + 0x849B60));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00220114(); return; } /* jne: not equal / not zero */

loc_002200F1: ;
    SET_LO8(eax, MEM8(0x862D08));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00220114(); return; } /* jne: not equal / not zero */

loc_002200FA: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00220101: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x28);
    eax = eax + 0x28;
    eax = MEM32(ecx + 0x1C);
    if (TEST_NZ(eax, eax)) { sub_00220114(); return; } /* jne: not equal / not zero */

loc_00220111: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00220120
 * Original: 0x00220120 - 0x00220186 (102 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220120(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00220120: ;
    xmm0 = MEMF(esp + 8); /* movss */
    esp = esp - 8;
    PUSH32(esp, 0x5F59F0);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x7FFFFFFF);
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0022015E: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    esp = esp + 0x10;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_00220186(); return; } /* jbe: below or equal (unsigned <=) */

loc_00220178: ;
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00220190
 * Original: 0x00220190 - 0x002201D4 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220190(void)
{
    int _flags = 0; /* fallback flag var */

loc_00220190: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002201D4(); return; } /* je: equal / zero */

loc_0022019A: ;
    if (TEST_Z(eax, eax)) { sub_002201D4(); return; } /* je: equal / zero */

loc_0022019E: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_002201D4(); return; } /* je: equal / zero */

loc_002201A8: ;
    ecx = MEM32(0x849ACC);
    if (CMP_EQ(ecx, 5)) goto loc_002201D1; /* je: equal / zero */

loc_002201B3: ;
    if (CMP_EQ(ecx, 4)) goto loc_002201D1; /* je: equal / zero */

loc_002201B8: ;
    if (CMP_EQ(ecx, 8)) goto loc_002201D1; /* je: equal / zero */

loc_002201BD: ;
    if (CMP_EQ(ecx, 7)) goto loc_002201D1; /* je: equal / zero */

loc_002201C2: ;
    if (CMP_EQ(ecx, 0xA)) goto loc_002201D1; /* je: equal / zero */

loc_002201C7: ;
    ecx = MEM32(eax + 0x204);
    if (TEST_Z(ecx, ecx)) { sub_002201D4(); return; } /* je: equal / zero */

loc_002201D1: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002201E0
 * Original: 0x002201E0 - 0x002201F8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002201E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002201E0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002201F8(); return; } /* je: equal / zero */

loc_002201E9: ;
    eax = MEM32(0x849ACC);
    if (TEST_Z(eax, eax)) { sub_002201F8(); return; } /* je: equal / zero */

loc_002201F2: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00220200
 * Original: 0x00220200 - 0x00220224 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220200: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00220224(); return; } /* je: equal / zero */

loc_00220209: ;
    eax = MEM32(0x849ACC);
    if (CMP_A(eax, 0xC)) { sub_00220224(); return; } /* ja: above (unsigned >) */

loc_00220213: ;
    eax = ZX8(MEM8(eax + 0x220230));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x220228)); return; /* indirect tail jmp */

    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00220240
 * Original: 0x00220240 - 0x00220282 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220240(void)
{
    int _flags = 0; /* fallback flag var */

loc_00220240: ;
    eax = MEM32(0x8470FC);
    SET_LO8(edx, MEM8(eax + 1));
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0022025F; /* je: equal / zero */

loc_0022024E: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_0022025F; /* je: equal / zero */

loc_00220255: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0022025F; /* jne: not equal / not zero */

loc_0022025A: ;
    ecx = 1;

loc_0022025F: ;
    eax = MEM32(0x847100);
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0022027A; /* je: equal / zero */

loc_0022026B: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_0022027A; /* je: equal / zero */

loc_00220272: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0022027A; /* jne: not equal / not zero */

loc_00220277: ;
    ecx = ecx | 2;

loc_0022027A: ;
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00220290
 * Original: 0x00220290 - 0x00220329 (153 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00220290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    SET_LO8(ecx, MEM8(ebp + 8));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 5;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00200CC0(); /* call 0x00200CC0 */

loc_002202B5: ;
    edi = (uint32_t)(int32_t)SMEM8(0x77627C);
    SET_LO8(eax, MEM8(ebp + 8));
    ecx = edi + edi * 4;
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    edx = ecx * 8 + 0x776F20;
    MEM32(esp + 0x18) = edx;
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_00220329(); return; } /* jne: not equal / not zero */

loc_002202D3: ;
    ecx = MEM32(0x84B11C);
    eax = edi;
    PUSH32(esp, 0); sub_00352A50(); /* call 0x00352A50 */

loc_002202E0: ;
    if (CMP_EQ(MEM8(eax + 0x15), LO8(ebx))) goto loc_00220307; /* je: equal / zero */

loc_002202E5: ;
    ecx = 6;
    esi = eax;
    edi = esp + 0xD4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0xD4;
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM32(esp + 0xCC) = ecx;
    g_seh_ebp = ebp; sub_00220334(); return; /* tail jmp 0x00220334 */

loc_00220307: ;
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_002928E0(); /* call 0x002928E0 */

loc_00220316: ;
    ecx = esp + 0xD8;
    esp = esp + 4;
    MEM32(esp + 0xCC) = ecx;
    g_seh_ebp = ebp; sub_00220334(); return; /* tail jmp 0x00220334 */

}

/**
 * sub_00221100
 * Original: 0x00221100 - 0x00221331 (561 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00221100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4B4;
    (void)0; /* cmp MEM32(0x6BD4D4), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(0x6BD4D4), 0xFFFFFFFFu)) goto loc_0022132A; /* je: equal / zero */

loc_0022111C: ;
    ebx = 0; /* xor self */
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x44) = LO8(ebx);
    MEM32(esp + 0x48) = ebx;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM8(esp + 0xA4) = LO8(ebx);
    MEM8(esp + 0xA5) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00221155: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9A48);
    MEM8(esp + 0xC8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00221170: ;
    eax = MEM32(0x6BD4D4);
    xmm0 = MEMF(0x648D14); /* movss */
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F7FC0);
    ecx = esp + 0xD8;
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0xCC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002211C5: ;
    edx = MEM32(0x6BD4D4);
    edx++;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F7F98);
    eax = esp + 0x2E8;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_002211E4: ;
    esp = esp + 0x30;
    PUSH32(esp, 0x3F800000);
    esi = 1;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0xD0;
    ecx = esp + 0x30;
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_00221204: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F8F20);
    eax = 2;
    ecx = esp + 0x2C;
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_0022121D: ;
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_00221226: ;
    xmm0 = MEMF(0x75E114); /* movss */
    PUSH32(esp, 0x3EB33333);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x3FA00000);
    MEMF(0x8076A4) = xmm0; /* movss */
    MEM8(0x8086C4) = 1;
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00221266: ;
    xmm0 = MEMF(0x648E68); /* movss */
    xmm1 = MEMF(0x6BD4C4); /* movss */
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3FB33333);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x3FACCCCD);
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEM32(0x8076B0) = ebx;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = esi;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002212A4: ;
    esp = esp + 0x18;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 - MEMF(0x648F38); /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(0x8076B0) = esi;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_002212C6: ;
    if (CMP_NE(eax, 2)) goto loc_002212E8; /* jne: not equal / not zero */

loc_002212CB: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3FACCCCD);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002212DF: ;
    esp = esp + 0xC;
    MEM32(0x8076B0) = ebx;

loc_002212E8: ;
    xmm0 = MEMF(0x648E68); /* movss */
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    ecx = esp + 0x2C4;
    esi = esp + 0x24;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002018F0(); /* call 0x002018F0 */

loc_00221325: ;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_0022132A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00221340
 * Original: 0x00221340 - 0x002213B3 (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00221340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x8A4;
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = ecx * 4 + 1;
    PUSH32(esp, 0); sub_00200CC0(); /* call 0x00200CC0 */

loc_0022136B: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_002213B3(); return; } /* je: equal / zero */

loc_0022137A: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    ecx = eax + eax * 4;
    edx = MEM32(ecx * 8 + 0x776F28);
    eax = MEM32(edx + 0x58);
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_00221397: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F8E40);
    eax = 1;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_002213B1: ;
    g_seh_ebp = ebp; sub_002213C1(); return; /* tail jmp 0x002213C1 */

}

/**
 * sub_00221610
 * Original: 0x00221610 - 0x0022162C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221610(void)
{

loc_00221610: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00220290(); /* call 0x00220290 */

loc_0022161C: ;
    PUSH32(esp, 0x3F800000);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00221340(); /* call 0x00221340 */

loc_00221628: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00221630
 * Original: 0x00221630 - 0x002216B6 (134 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221630: ;
    esp = esp - 0x80;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F7F5C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00221647: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    ecx = eax + eax * 4;
    edx = MEM32(ecx * 8 + 0x776F28);
    eax = MEM32(edx + 4);
    if (TEST_NZ(eax, eax)) { sub_002216B6(); return; } /* jne: not equal / not zero */

loc_0022165F: ;
    eax = esi + -1;
    if (CMP_A(eax, 5)) { sub_002216B6(); return; } /* ja: above (unsigned >) */

loc_00221667: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x221718)); return; /* indirect tail jmp */

    eax = 0x5F7F28;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00221750
 * Original: 0x00221750 - 0x0022179B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221750: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    eax = eax + eax * 4;
    edx = MEM32(eax * 8 + 0x776F28);
    eax = MEM32(edx + 4);
    if (TEST_NZ(eax, eax)) { sub_0022179B(); return; } /* jne: not equal / not zero */

loc_00221768: ;
    eax = ecx + -1;
    if (CMP_A(eax, 5)) { sub_0022179B(); return; } /* ja: above (unsigned >) */

loc_00221770: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x2217D4)); return; /* indirect tail jmp */

    eax = 0x5F7CFC;
    esp += 4; return; /* ret */

}

/**
 * sub_00221810
 * Original: 0x00221810 - 0x00221846 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221810: ;
    xmm0 = MEMF(0x75E0F4); /* movss */
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0x58));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00221846(); return; } /* jne: not equal / not zero */

loc_00221830: ;
    xmm2 = MEMF(0x648D14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm1 = xmm6; /* movaps */
    g_seh_ebp = ebp; sub_0022186A(); return; /* tail jmp 0x0022186A */

}

/**
 * sub_00221ED0
 * Original: 0x00221ED0 - 0x0022217B (683 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00221ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    eax = MEM32(0x8498E4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) { sub_0022217B(); return; } /* je: equal / zero */

loc_00221EEE: ;
    if (CMP_EQ(MEM32(0x8498E8), ebx)) { sub_0022217B(); return; } /* je: equal / zero */

loc_00221EFA: ;
    eax = MEM32(0x75A154);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_NE(eax, 3)) goto loc_00221F12; /* jne: not equal / not zero */

loc_00221F0A: ;
    MEM32(esp + 0xC) = eax;
    esi = eax;
    goto loc_00221F23;

loc_00221F12: ;
    if (CMP_NE(MEM32(0x75A150), 1)) goto loc_00221F21; /* jne: not equal / not zero */

loc_00221F1B: ;
    MEM32(esp + 0xC) = eax;
    goto loc_00221F23;

loc_00221F21: ;
    esi = eax;

loc_00221F23: ;
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM32(esp + 0x38) = ebx;
    MEM8(esp + 0x88) = LO8(ebx);
    MEM8(esp + 0x94) = LO8(ebx);
    MEM8(esp + 0x95) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00221F5A: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9A48);
    MEM8(esp + 0xB8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00221F75: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x10;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    eax = 0x5F7AF4;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_00221FC6: ;
    eax = MEM32(0x75A154);
    PUSH32(esp, 0x3F800000);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = esp + 0x14;
    PUSH32(esp, ebx);
    eax = 1;
    if (CMP_EQ(eax, ebx)) goto loc_00221FE5; /* je: equal / zero */

loc_00221FDE: ;
    PUSH32(esp, 0x5F7AE4);
    goto loc_00221FEA;

loc_00221FE5: ;
    PUSH32(esp, 0x5F8E40);

loc_00221FEA: ;
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_00221FEF: ;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_00221FF8: ;
    edx = MEM32(0x75A158);
    eax = MEM32(0x75E0E0);
    ecx = MEM32(0x75E0E4);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8498FC);
    MEM32(esp + 0x90) = eax;
    PUSH32(esp, 1);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(0x8498E4);
    PUSH32(esp, 0x85E558);
    MEM8(esp + 0x98) = 1;
    MEM32(esp + 0xA0) = ecx;
    PUSH32(esp, 0); sub_00221810(); /* call 0x00221810 */

loc_0022203C: ;
    esp = esp + 0x18;
    esi = edi;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_00222046: ;
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM32(esp + 0x38) = 1;
    MEM8(esp + 0x88) = LO8(ebx);
    MEM8(esp + 0x94) = LO8(ebx);
    MEM8(esp + 0x95) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00222081: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    eax = MEM32(0x849AA4);
    PUSH32(esp, 0x5F9A3C);
    MEM8(esp + 0xB8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_0022209C: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x10;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    eax = 0x5F7AC8;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002010E0(); /* call 0x002010E0 */

loc_002220ED: ;
    (void)0; /* cmp MEM32(0x75A154), ebx - flags set for next jcc */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x14;
    PUSH32(esp, ebx);
    if (CMP_EQ(MEM32(0x75A154), ebx)) goto loc_0022210B; /* je: equal / zero */

loc_002220FF: ;
    PUSH32(esp, 0x5F7AB0);
    eax = 3;
    goto loc_00222115;

loc_0022210B: ;
    PUSH32(esp, 0x5F8F20);
    eax = 2;

loc_00222115: ;
    PUSH32(esp, 0); sub_00201360(); /* call 0x00201360 */

loc_0022211A: ;
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_00222123: ;
    ecx = MEM32(0x75E0D8);
    eax = MEM32(0x75A158);
    edx = MEM32(0x75E0DC);
    PUSH32(esp, eax);
    eax = MEM32(0x8498E8);
    MEM32(esp + 0x88) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x849900);
    MEM32(esp + 0x94) = edx;
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x85E568);
    MEM8(esp + 0x98) = 1;
    PUSH32(esp, 0); sub_00221810(); /* call 0x00221810 */

loc_0022216A: ;
    esp = esp + 0x18;
    esi = edi;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_00222174: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002221F0
 * Original: 0x002221F0 - 0x00222293 (163 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002221F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002221F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x344;
    (void)0; /* test MEM8(0x87B58C), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x4C) = 0x5F7AA4;
    MEM32(esp + 0x50) = 0x5F7A98;
    MEM32(esp + 0x54) = 0x5F7A88;
    MEM32(esp + 0x58) = 0x5F7A78;
    MEM32(esp + 0x5C) = 0x5F7A6C;
    MEM32(esp + 0x60) = 0x5F7A5C;
    MEM32(esp + 0x64) = 0x5F7A4C;
    MEM32(esp + 0x68) = 0x5F7A3C;
    MEM32(esp + 0x6C) = 0x5F7A30;
    if (TEST_NZ(MEM8(0x87B58C), 1)) goto loc_00222274; /* jne: not equal / not zero */

loc_00222250: ;
    MEM32(0x87B58C) = MEM32(0x87B58C) | 1;
    eax = esp + 0x4C;
    MEM32(0x87B580) = eax;
    MEM32(0x87B584) = 9;
    MEM32(0x87B588) = 0;

loc_00222274: ;
    eax = MEM32(0x7F9F60);
    edx = MEM32(0x8756D8);
    ecx = eax + -1;
    if (CMP_AE(edx, ecx)) { sub_00222293(); return; } /* jae: above or equal (unsigned >=) */

loc_00222286: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x8756D4) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0022229B(); return; /* tail jmp 0x0022229B */

}

/**
 * sub_00222AD0
 * Original: 0x00222AD0 - 0x00222B04 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00222AD0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8498E0);
    if (TEST_Z(eax, eax)) { sub_00222B04(); return; } /* je: equal / zero */

loc_00222ADA: ;
    eax = MEM32(0x86267C);
    if (TEST_NZ(eax, eax)) goto loc_00222AEE; /* jne: not equal / not zero */

loc_00222AE3: ;
    MEM32(esp) = eax;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0022CB50(); return; /* tail jmp 0x0022CB50 */

loc_00222AEE: ;
    ecx = MEM32(0x862680);
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    MEM32(esp) = ecx;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0022CB50(); return; /* tail jmp 0x0022CB50 */

}

/**
 * sub_00222B10
 * Original: 0x00222B10 - 0x00222CE3 (467 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222B10(void)
{
    uint32_t ebp;
    float xmm0;

loc_00222B10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xA4;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM32(esp + 0x38) = 5;
    MEM8(esp + 0x88) = LO8(ebx);
    MEM8(esp + 0x94) = LO8(ebx);
    MEM8(esp + 0x95) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00222B5C: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9A30);
    MEM8(esp + 0xB8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00222B77: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edi = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_00222BCA: ;
    PUSH32(esp, 0x5F5438);
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_00222BD8: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x10);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x75E084);
    PUSH32(esp, ecx);
    ecx = 0x75E07C;
    eax = edi;
    PUSH32(esp, 0); sub_00201B90(); /* call 0x00201B90 */

loc_00222BF5: ;
    esi = edi;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_00222BFC: ;
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    eax = 0x5D4FB4;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM32(esp + 0x38) = 5;
    MEM8(esp + 0x88) = LO8(ebx);
    MEM8(esp + 0x94) = LO8(ebx);
    MEM8(esp + 0x95) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00222C37: ;
    eax = MEM32(0x849AA4);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F9A30);
    MEM8(esp + 0xB8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00222C52: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_00222CA5: ;
    xmm0 = MEMF(0x75E06C); /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(0x75E070); /* movss */
    PUSH32(esp, ebx);
    eax = 0x75E074;
    ecx = 0x5F8F20;
    esi = edi;
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002018F0(); /* call 0x002018F0 */

loc_00222CD7: ;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_00222CDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00222CF0
 * Original: 0x00222CF0 - 0x00222D31 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00222CF0: ;
    edx = MEM32(0x862680);
    PUSH32(esp, esi);
    esi = MEM32(0x86267C);
    if (TEST_Z(esi, esi)) { sub_00222D31(); return; } /* je: equal / zero */

loc_00222D01: ;
    ecx = MEM32(0x862684);
    eax = edx;
    eax = eax - esi;
    ecx = ecx - esi;
    eax = (uint32_t)((int32_t)eax >> 2);
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_AE(eax, ecx)) { sub_00222D31(); return; } /* jae: above or equal (unsigned >=) */

loc_00222D17: ;
    ecx = MEM32(0x849AA4);
    eax = edx;
    MEM32(edx) = ecx;
    eax = eax + 4;
    MEM32(0x862680) = eax;
    MEM32(0x849AA4) = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00222D50
 * Original: 0x00222D50 - 0x00222D87 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222D50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00222D50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x849ADC);
    if (CMP_EQ(esi, ebx)) goto loc_00222D85; /* je: equal / zero */

loc_00222D5B: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_00222D6C: ;
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    MEM32(0x849ADC) = esi;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_00222D85: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00222D90
 * Original: 0x00222D90 - 0x00222DC2 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00222D90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x849ADC);
    if (TEST_Z(ebx, ebx)) goto loc_00222DC0; /* je: equal / zero */

loc_00222D9B: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x103C);
    ebx = ebx + 0x85E580;
    PUSH32(esp, 0); sub_00200A60(); /* call 0x00200A60 */

loc_00222DAC: ;
    ebx = 0x85E580;
    MEM32(0x849ADC) = 0;
    PUSH32(esp, 0); sub_00200860(); /* call 0x00200860 */

loc_00222DC0: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00222DD0
 * Original: 0x00222DD0 - 0x00222E85 (181 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222DD0(void)
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

loc_00222DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    ecx = MEM32(0x86267C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) { sub_00222E85(); return; } /* je: equal / zero */

loc_00222DE9: ;
    eax = MEM32(0x862680);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    if (TEST_Z(eax, eax)) { sub_00222E85(); return; } /* je: equal / zero */

loc_00222DFB: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00222E90(); /* call 0x00222E90 */

loc_00222E0A: ;
    MEM32(esp + 0x18) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0x10); /* mulss */
    MEM32(esp + 0x1C) = edx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0x10;
    esi = 0x5A0350;
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edi = esp + 0x28;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * MEMF(ebp + 0x14); /* mulss */
    /* FPU: fsubr dword ptr [esp + 0x24] */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    eax = esp + 0x24;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0021AE40(); /* call 0x0021AE40 */

loc_00222E7A: ;
    esp = esp + 0x14;
    SET_LO8(eax, 1);
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
 * sub_00222E90
 * Original: 0x00222E90 - 0x00223014 (388 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222E90(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00222E90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xEC;
    PUSH32(esp, esi);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    eax = MEM32(0x849AA4);
    PUSH32(esp, 0x5F9A30);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00222EB1: ;
    eax = MEM32(0x849AA4);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F7A24);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00222EC5: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F7A18);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_00222EDC: ;
    esp = esp + 0x18;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5A02CC);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00222EF3: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5A02CC);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00222F07: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5A02CC);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00222F1E: ;
    esi = (uint32_t)(int32_t)SMEM8(0x7FA230);
    eax = MEM32(0x849AA4);
    esi = esi << 6;
    ecx = esi + eax + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00222F3F: ;
    ecx = MEM32(0x849AA4);
    edx = esi + ecx + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00222F57: ;
    edx = MEM32(0x849AA4);
    eax = esi + edx + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00222F6F: ;
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm3 = MEMF(0x75E068); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - MEMF(esp + 0xC); /* subss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm4 = MEMF(esp + 0x28); /* movss */
    xmm4 = xmm4 - MEMF(esp + 0x10); /* subss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = MEMF(0x75E05C); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x75E064); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm3 = xmm3 + xmm4; /* addss */
    eax = MEM32(ebp + 8);
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm2 = MEMF(0x75E060); /* movss */
    xmm3 = xmm3 + MEMF(0x75E054); /* addss */
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esp + 8);
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax) = xmm3; /* movss */
    eax = MEM32(esp + 4);
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 + MEMF(0x75E058); /* addss */
    MEMF(ecx) = xmm0; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00223020
 * Original: 0x00223020 - 0x00223172 (338 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00223020: ;
    esp = esp - 0x18;
    xmm0 = MEMF(0x649218); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 - MEMF(0x648FDC); /* subss */
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    eax = esp + 0x14;
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x14) = 0;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0021AB80(); /* call 0x0021AB80 */

loc_0022306F: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    esp = esp + 8;
    if (CMP_B(eax, ecx)) goto loc_00223090; /* jb: below (unsigned <) */

loc_00223081: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00223090: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = 0;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = 0;
    if (CMP_NE(eax, 2)) goto loc_002230F5; /* jne: not equal / not zero */

loc_002230C6: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_002230CB: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_002230D0: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002230E6; /* jb: below (unsigned <) */

loc_002230D7: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002230E6: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_002230EE: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_002230F3: ;
    MEM32(esi) = eax;

loc_002230F5: ;
    eax = MEM32(esp + 0x48);
    xmm0 = MEMF(esp + 0x44); /* movss */
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, eax);
    MEMF(0x80765C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    PUSH32(esp, ecx);
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00223125: ;
    SET_LO8(edx, MEM8(esp + 0x58));
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = edi;
    MEM8(0x807697) = LO8(edx);
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0022314A: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    esp = esp + 0x1C;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00223172(); return; } /* je: equal / zero */

loc_00223155: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00223178(); return; /* tail jmp 0x00223178 */

}

/**
 * sub_00223340
 * Original: 0x00223340 - 0x0022336C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223340(void)
{
    int _flags = 0; /* fallback flag var */

loc_00223340: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00223368; /* jle: less or equal (signed <=) */

loc_00223347: ;
    goto loc_00223350;

    /* nop */

loc_00223350: ;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    ecx = eax;
    esi++;
    if (CMP_G(ecx & ecx, 0)) goto loc_00223350; /* jg: greater (signed >) */

loc_00223368: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00223370
 * Original: 0x00223370 - 0x0022352E (446 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00223370: ;
    esp = esp - 0x24;
    xmm0 = MEMF(0x649218); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F19999A);
    eax = esp + 0x28;
    ecx = esp + 0x2C;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x28) = edi;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0021AB80(); /* call 0x0021AB80 */

loc_002233AC: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    esp = esp + 8;
    if (CMP_B(eax, ecx)) goto loc_002233CD; /* jb: below (unsigned <) */

loc_002233BE: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002233CD: ;
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
    if (CMP_NE(eax, 2)) goto loc_0022342A; /* jne: not equal / not zero */

loc_002233FB: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_00223400: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_00223405: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0022341B; /* jb: below (unsigned <) */

loc_0022340C: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0022341B: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00223423: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_00223428: ;
    MEM32(esi) = eax;

loc_0022342A: ;
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    xmm1 = xmm1 * MEMF(0x64971C); /* mulss */
    xmm0 = xmm0 * MEMF(0x649718); /* mulss */
    xmm3 = MEMF(esp + 0x60); /* movss */
    xmm2 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    eax = MEM32(esp + 0x10);
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x3F19999A);
    xmm1 = xmm1 / xmm0; /* divss */
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(0x80765C) = xmm2; /* movss */
    MEMF(0x807660) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002234A4: ;
    SET_LO8(ecx, MEM8(esp + 0x70));
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    eax = ebp;
    MEM8(0x807697) = LO8(ecx);
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_002234C1: ;
    PUSH32(esp, 0x5F59F0);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = ebp;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_002234DC: ;
    SET_LO8(eax, MEM8(esp + 0x7C));
    esp = esp + 0x24;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00223502; /* je: equal / zero */

loc_002234E7: ;
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_00223502: ;
    if (CMP_EQ(MEM8(esp + 0x68), LO8(ebx))) { sub_0022352E(); return; } /* je: equal / zero */

loc_00223508: ;
    xmm0 = MEMF(0x648FDC); /* movss */
    MEMF(0x8076A4) = xmm0; /* movss */
    MEM8(0x8086C4) = 1;
    MEM32(0x8076B0) = 1;
    g_seh_ebp = ebp; sub_00223622(); return; /* tail jmp 0x00223622 */

}

/**
 * sub_002237B0
 * Original: 0x002237B0 - 0x00223A59 (681 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002237B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002237B0: ;
    esp = esp - 0x1C;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 - MEMF(0x648FDC); /* subss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    ebp = 0; /* xor self */
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x1C) = ebp;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0021ABE0(); /* call 0x0021ABE0 */

loc_002237E7: ;
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, 0xC3000000u);
    PUSH32(esp, 0x776710);
    PUSH32(esp, 0); sub_00202870(); /* call 0x00202870 */

loc_00223805: ;
    xmm1 = MEMF(0x649030); /* movss */
    esp = esp + 0x1C;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00223A46; /* je: equal / zero */

loc_00223818: ;
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */

loc_00223821: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm2 = MEMF(0x6496BC); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    xmm0 = xmm0 + MEMF(0x648FDC); /* addss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0022386D; /* je: equal / zero */

loc_00223855: ;
    xmm2 = MEMF(0x648E38); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_0022386D: ;
    edx = 0x1010101;
    ecx = 0x40358;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0022387C: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549B04) = 0x1010101;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002238A2; /* jb: below (unsigned <) */

loc_00223893: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002238A2: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ebp;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = ebp;
    if (CMP_NE(eax, 2)) goto loc_002238FF; /* jne: not equal / not zero */

loc_002238D0: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_002238D5: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_002238DA: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002238F0; /* jb: below (unsigned <) */

loc_002238E1: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002238F0: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_002238F8: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_002238FD: ;
    MEM32(esi) = eax;

loc_002238FF: ;
    SET_LO8(ebx, MEM8(esp + 0x40));
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    SET_LO8(edx, LO8(edx) & 0x4B);
    SET_LO8(edx, LO8(edx) + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, 0); sub_0021D4B0(); /* call 0x0021D4B0 */

loc_00223929: ;
    ecx = MEM32(0x849B1C);
    edx = MEM32(0x7767E0);
    esp = esp + 0xC;
    ecx--;
    edi = esp + 0x18;
    esi = esp + 0x1C;
    MEM32(0x849B1C) = ecx;
    MEM32(0x84B868) = edx;
    PUSH32(esp, 0); sub_0021ADA0(); /* call 0x0021ADA0 */

loc_00223952: ;
    eax = MEM32(esp + 0x38);
    xmm1 = MEMF(esp + 0x3C); /* movss */
    ecx = MEM32(esp + 0x3C);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, MEM8(0x87A1C0));
    ebx = 1;
    (void)0; /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x64AD0C); /* mulss */
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    POP32(esp, edi);
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_002239C3; /* jne: not equal / not zero */

loc_002239A6: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_002239C3: ;
    esi = MEM32(0x87A1AC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM8(0x87A1BC) = LO8(ebx);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_002239D7: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x40); /* subss */
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x5A0350);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0021AE40(); /* call 0x0021AE40 */

loc_002239FC: ;
    esp = esp + 0xC;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00223A07: ;
    if (TEST_NZ(MEM8(0x87A1C0), LO8(ebx))) goto loc_00223A2C; /* jne: not equal / not zero */

loc_00223A0F: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_00223A2C: ;
    eax = 0; /* xor self */
    edi = edi;

loc_00223A30: ;
    if (CMP_EQ(esi, MEM32(eax * 4 + 0x87A1AC))) { sub_00223A59(); return; } /* je: equal / zero */

loc_00223A39: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_00223A30; /* jl: less (signed <) */

loc_00223A3F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_00223A46: ;
    xmm0 = MEMF(0x649108); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    goto loc_00223821;

}

/**
 * sub_00223A70
 * Original: 0x00223A70 - 0x00223B87 (279 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223A70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00223A70: ;
    esp = esp - 0x20;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00222E90(); /* call 0x00222E90 */

loc_00223A82: ;
    xmm0 = MEMF(esi); /* movss */
    xmm2 = MEMF(0x648CF0); /* movss */
    MEM32(esp + 0x18) = eax;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    xmm1 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    esp = esp + 8;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_00223B05: ;
    if (CMP_NE(eax, 2)) goto loc_00223B17; /* jne: not equal / not zero */

loc_00223B0A: ;
    xmm0 = MEMF(0x6498FC); /* movss */
    MEMF(esp) = xmm0; /* movss */

loc_00223B17: ;
    edx = MEM32(esp);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x64AE70); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, 0);
    xmm1 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 * MEMF(0x64A3F0); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = 0x5F92B4;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00223020(); /* call 0x00223020 */

loc_00223B83: ;
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00223B90
 * Original: 0x00223B90 - 0x00223BA2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223B90(void)
{

loc_00223B90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00220290(); /* call 0x00220290 */

loc_00223B9C: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00223BB0
 * Original: 0x00223BB0 - 0x00223BC0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223BB0(void)
{

loc_00223BB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00221340(); /* call 0x00221340 */

loc_00223BBC: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00223D60
 * Original: 0x00223D60 - 0x00223E05 (165 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00223D60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00223D6B: ;
    ebp = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, ebp)) goto loc_00223D7F; /* je: equal / zero */

loc_00223D74: ;
    MEM32(eax + 4) = ebp;
    MEM32(eax) = 0x5F7714;
    ebp = eax;

loc_00223D7F: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00223D86: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x1C);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x1C;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = 1;
    MEM8(esi + 0x31) = LO8(ebx);
    if (TEST_Z(ecx, ecx)) goto loc_00223DA6; /* je: equal / zero */

loc_00223DA0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00223DA6: ;
    MEM32(esi + 0x38) = ebp;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x1C);
    eax = eax + 0x1C;
    PUSH32(esp, 8);
    MEM8(ecx + 0x30) = LO8(ebx);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00223DBC: ;
    ebp = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, ebp)) goto loc_00223DD0; /* je: equal / zero */

loc_00223DC5: ;
    MEM32(eax + 4) = ebp;
    MEM32(eax) = 0x5F77E4;
    ebp = eax;

loc_00223DD0: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_00223DD7: ;
    edi = eax;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + 0x20);
    ecx = MEM32(esi + 0x38);
    eax = eax + 0x20;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esi + 0x31) = LO8(ebx);
    if (TEST_Z(ecx, ecx)) goto loc_00223DF2; /* je: equal / zero */

loc_00223DEC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_00223DF2: ;
    MEM32(esi + 0x38) = ebp;
    eax = MEM32(edi + 0x10);
    POP32(esp, edi);
    eax = eax + 0x20;
    eax = MEM32(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 0x30) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00223E10
 * Original: 0x00223E10 - 0x00223E36 (38 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223E10(void)
{
    float xmm0;

loc_00223E10: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(0x6BD598) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00213200(); /* call 0x00213200 */

loc_00223E23: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6BD598) = xmm0; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00223E40
 * Original: 0x00223E40 - 0x00223E57 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223E40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00223E40: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648D10))) goto loc_00223E54; /* jb: below (unsigned <) */

loc_00223E4F: ;
    PUSH32(esp, 0); sub_0021DCA0(); /* call 0x0021DCA0 */

loc_00223E54: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00223E60
 * Original: 0x00223E60 - 0x00223EA2 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223E60(void)
{

loc_00223E60: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F43D70A);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00223370(); /* call 0x00223370 */

loc_00223E9C: ;
    esp = esp + 0x34;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00223EB0
 * Original: 0x00223EB0 - 0x00223EF9 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00223EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_00223ED5; /* je: equal / zero */

loc_00223EBA: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    eax = esi + 0xC;
    edx--;
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_00223ED5; /* jne: not equal / not zero */

loc_00223ECC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00223ED2: ;
    esp = esp + 4;

loc_00223ED5: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi) = 0x5F7704;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00223EF3; /* je: equal / zero */

loc_00223EE2: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00223EF0: ;
    esp = esp + 4;

loc_00223EF3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00223F00
 * Original: 0x00223F00 - 0x002240B4 (436 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00223F00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 4) = ebx;
    PUSH32(esp, ebp);
    MEM32(esi) = 0x5F7784;
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 8) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00223F22; /* je: equal / zero */

loc_00223F20: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00223F22: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edi = esi + 0x10;
    eax = edi;
    MEM32(eax) = ebx;
    MEM32(eax + 8) = ebx;
    eax = eax + 8;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x10) = ebx;
    eax = eax + 8;
    SET_LO8(eax, 1);
    MEM8(esi + 0x30) = LO8(ebx);
    MEM8(esi + 0x31) = LO8(ebx);
    MEM8(esi + 0x32) = LO8(ebx);
    MEM8(esi + 0x33) = LO8(ebx);
    MEM32(esi + 0x34) = ebx;
    MEM8(esi + 0x38) = LO8(eax);
    MEM8(esi + 0x39) = LO8(eax);
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEM8(esi + 0x40) = LO8(ebx);
    if (CMP_EQ(MEM32(edi), ebx)) goto loc_00223F7D; /* je: equal / zero */

loc_00223F63: ;
    ecx = MEM32(edi + 4);
    ebp = MEM32(ecx);
    eax = edi + 4;
    ebp--;
    MEM32(ecx) = ebp;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), ebx)) goto loc_00223F7D; /* jne: not equal / not zero */

loc_00223F74: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00223F7A: ;
    esp = esp + 4;

loc_00223F7D: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = ecx;
    MEM32(edi) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00223F90; /* je: equal / zero */

loc_00223F8E: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00223F90: ;
    if (CMP_EQ(MEM32(esi + 0x18), ebx)) goto loc_00223FAF; /* je: equal / zero */

loc_00223F95: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx);
    eax = esi + 0x1C;
    edx--;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    if (CMP_NE(MEM32(edx), ebx)) goto loc_00223FAF; /* jne: not equal / not zero */

loc_00223FA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00223FAC: ;
    esp = esp + 4;

loc_00223FAF: ;
    eax = MEM32(esp + 0x20);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x18) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00223FC3; /* je: equal / zero */

loc_00223FC1: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00223FC3: ;
    if (CMP_EQ(MEM32(esi + 0x20), ebx)) goto loc_00223FE2; /* je: equal / zero */

loc_00223FC8: ;
    ecx = MEM32(esi + 0x24);
    edi = MEM32(ecx);
    eax = esi + 0x24;
    edi--;
    MEM32(ecx) = edi;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), ebx)) goto loc_00223FE2; /* jne: not equal / not zero */

loc_00223FD9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00223FDF: ;
    esp = esp + 4;

loc_00223FE2: ;
    eax = MEM32(esp + 0x28);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x20) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00223FF6; /* je: equal / zero */

loc_00223FF4: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00223FF6: ;
    if (CMP_EQ(MEM32(esi + 0x28), ebx)) goto loc_00224015; /* je: equal / zero */

loc_00223FFB: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    eax = esi + 0x2C;
    edx--;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    if (CMP_NE(MEM32(edx), ebx)) goto loc_00224015; /* jne: not equal / not zero */

loc_0022400C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00224012: ;
    esp = esp + 4;

loc_00224015: ;
    edi = MEM32(esp + 0x30);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    ebp = MEM32(esp + 0x34);
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x28) = edi;
    if (CMP_EQ(edi, ebx)) goto loc_0022402A; /* je: equal / zero */

loc_00224027: ;
    MEM32(ebp) = MEM32(ebp) + 1;

loc_0022402A: ;
    if (CMP_EQ(MEM32(esp + 0x10), ebx)) goto loc_00224045; /* je: equal / zero */

loc_00224030: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00224045; /* jne: not equal / not zero */

loc_00224038: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00224042: ;
    esp = esp + 4;

loc_00224045: ;
    if (CMP_EQ(MEM32(esp + 0x18), ebx)) goto loc_00224060; /* je: equal / zero */

loc_0022404B: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00224060; /* jne: not equal / not zero */

loc_00224053: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022405D: ;
    esp = esp + 4;

loc_00224060: ;
    if (CMP_EQ(MEM32(esp + 0x20), ebx)) goto loc_0022407B; /* je: equal / zero */

loc_00224066: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0022407B; /* jne: not equal / not zero */

loc_0022406E: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00224078: ;
    esp = esp + 4;

loc_0022407B: ;
    if (CMP_EQ(MEM32(esp + 0x28), ebx)) goto loc_00224096; /* je: equal / zero */

loc_00224081: ;
    eax = MEM32(esp + 0x2C);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_00224096; /* jne: not equal / not zero */

loc_00224089: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00224093: ;
    esp = esp + 4;

loc_00224096: ;
    if (CMP_EQ(edi, ebx)) goto loc_002240AC; /* je: equal / zero */

loc_0022409A: ;
    MEM32(ebp) = MEM32(ebp) - 1;
    if ((MEM32(ebp) != 0)) goto loc_002240AC; /* jne: not equal / not zero */

loc_0022409F: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002240A9: ;
    esp = esp + 4;

loc_002240AC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, ebx);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_002240C0
 * Original: 0x002240C0 - 0x00224162 (162 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002240C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002240C0: ;
    ecx = MEM32(edi + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edi) = 0x5F7784;
    if (TEST_Z(ecx, ecx)) goto loc_002240D4; /* je: equal / zero */

loc_002240CD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_002240D4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edi + 0x30;
    ebp = 4;
    edi = edi;

loc_002240E0: ;
    eax = MEM32(esi + -8);
    esi = esi - 8;
    if (TEST_Z(eax, eax)) goto loc_00224134; /* je: equal / zero */

loc_002240EA: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    ecx = MEM32(esi + 4);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_00224134; /* jne: not equal / not zero */

loc_002240F7: ;
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002240FF: ;
    if (TEST_NZ(eax, eax)) goto loc_00224134; /* jne: not equal / not zero */

loc_00224103: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00224134; /* je: equal / zero */

loc_0022410A: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0022412A: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_00224134: ;
    ebp--;
    if ((ebp != 0)) goto loc_002240E0; /* jne: not equal / not zero */

loc_00224137: ;
    eax = MEM32(edi + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_0022415B; /* je: equal / zero */

loc_00224140: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    eax = edi + 0xC;
    edx--;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    if (CMP_NE(MEM32(edx), 0)) goto loc_0022415B; /* jne: not equal / not zero */

loc_00224152: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00224158: ;
    esp = esp + 4;

loc_0022415B: ;
    MEM32(edi) = 0x5F7704;
    esp += 4; return; /* ret */

}

/**
 * sub_00224170
 * Original: 0x00224170 - 0x00224192 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224170: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    SET_LO8(eax, MEM8(esi + 0x40));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00224192(); return; } /* je: equal / zero */

loc_00224188: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    g_seh_ebp = ebp; sub_0022419A(); return; /* tail jmp 0x0022419A */

}

/**
 * sub_00224520
 * Original: 0x00224520 - 0x002245A5 (133 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224520: ;
    esp = esp - 0x14;
    xmm0 = MEMF(0x75E04C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x75E050); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x6BD598); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    MEMF(0x6BD598) = xmm0; /* movss */
    xmm0 = MEMF(0x64AE64); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_00224589: ;
    if (CMP_NE(eax, 2)) { sub_002245A5(); return; } /* jne: not equal / not zero */

loc_0022458E: ;
    xmm0 = MEMF(0x6498FC); /* movss */
    xmm1 = MEMF(0x649F84); /* movss */
    MEMF(esp) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_002245AB(); return; /* tail jmp 0x002245AB */

}

/**
 * sub_00224630
 * Original: 0x00224630 - 0x002247EA (442 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224630(void)
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

loc_00224630: ;
    esp = esp - 0x138;
    xmm0 = MEMF(esp + 0x13C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x24;
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(0x6BD598) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00222E90(); /* call 0x00222E90 */

loc_0022465B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = eax;
    SET_LO8(eax, MEM8(edi + 0x38));
    ebp = edx;
    esp = esp + 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebp;
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002247EA(); return; } /* je: equal / zero */

loc_00224682: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x64B14C); /* mulss */
    SET_LO8(eax, MEM8(edi + 0x39));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(0x6496F8); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002246CB; /* jne: not equal / not zero */

loc_002246BD: ;
    xmm0 = xmm0 - MEMF(0x64B148); /* subss */
    MEMF(esp + 0x40) = xmm0; /* movss */

loc_002246CB: ;
    eax = MEM32(edi + 8);
    if (TEST_Z(eax, eax)) goto loc_002247AD; /* je: equal / zero */

loc_002246D6: ;
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_002246E1: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002247AD; /* je: equal / zero */

loc_002246EC: ;
    eax = MEM32(edi + 8);
    xmm0 = MEMF(0x648E74); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00224703: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00224718; /* jge: greater or equal (signed >=) */

loc_00224712: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00224718: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D50)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00224748; /* jbe: below or equal (unsigned <=) */

loc_0022472C: ;
    xmm0 = MEMF(0x648D50); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x18); /* divss */
    xmm0 = xmm0 * MEMF(0x648E74); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_00224748: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 + MEMF(0x649D64); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(edi + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xAF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x54); /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00223370(); /* call 0x00223370 */

loc_002247AA: ;
    esp = esp + 0x34;

loc_002247AD: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCD);
    PUSH32(esp, 0x64);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    MEMF(esp + 0x24) = xmm0; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00224520(); /* call 0x00224520 */

loc_002247E2: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    g_seh_ebp = ebp; sub_002247F8(); return; /* tail jmp 0x002247F8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00224C90
 * Original: 0x00224C90 - 0x00224CBA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224C90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00224C90: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); sub_002240C0(); /* call 0x002240C0 */

loc_00224C98: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00224CB4; /* je: equal / zero */

loc_00224C9F: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 8) = edi;
    if (TEST_Z(edi, edi)) goto loc_00224CB4; /* je: equal / zero */

loc_00224CA7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00224CB1: ;
    esp = esp + 4;

loc_00224CB4: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00224CC0
 * Original: 0x00224CC0 - 0x00224CE6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224CC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224CC0: ;
    esp = esp - 0x184;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x38);
    (void)0; /* cmp eax, 0xA - flags set for next jcc */
    esi = MEM32(edi + 0xC);
    MEM32(esp + 0x44) = edi;
    if (CMP_LE(eax, 0xA)) { sub_00224CE6(); return; } /* jle: less or equal (signed <=) */

loc_00224CDB: ;
    ebp = 0xA;
    MEM32(esp + 0x18) = ebp;
    g_seh_ebp = ebp; sub_00224CEC(); return; /* tail jmp 0x00224CEC */

}

/**
 * sub_002255B0
 * Original: 0x002255B0 - 0x00225C6C (1724 bytes, 379 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002255B0(void)
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

loc_002255B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2C4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC4;
    MEM32(esp + 0x28) = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x54) = LO8(ebx);
    MEM32(esp + 0x58) = 5;
    MEM8(esp + 0xA8) = LO8(ebx);
    MEM8(esp + 0xB4) = LO8(ebx);
    MEM8(esp + 0xB5) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00225600: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9A30);
    MEM8(esp + 0xD8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_0022561B: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edi = esp + 0x30;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_0022566E: ;
    PUSH32(esp, 0x3EB33333);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x3FA00000);
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00225697: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm0 = MEMF(0x648E68); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(0x6BD4C4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEM32(0x8076B0) = ebx;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM32(esp + 0x54) = 1;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002256D3: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(0x807667) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002256E6: ;
    ecx = MEM32(0x75E018);
    MEM8(0x807697) = LO8(eax);
    eax = MEM32(0x75E01C);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00225702: ;
    esi = MEM32(esp + 0x40);
    PUSH32(esp, 0x5F59F0);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00225722: ;
    xmm0 = MEMF(esp + 0x40); /* movss */
    esi = MEM32(esi + 0xC);
    esp = esp + 0x28;
    /* comiss xmm0, MEMF(0x5A005C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x5A005C))) { sub_00225C6C(); return; } /* jbe: below or equal (unsigned <=) */

loc_0022573B: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = esi;
    edi = edi | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00225748: ;
    esi = eax + -1;
    esp = esp + 4;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(esi, ebx)) goto loc_002257DE; /* jl: less (signed <) */

loc_0022575A: ;
    eax = MEM32(esp + 0x2C);
    ecx = esp + 0xD0;
    eax = eax - ecx;
    MEM32(esp + 0x10) = eax;
    goto loc_00225770;

    /* nop */

loc_00225770: ;
    edx = eax + esi * 2;
    if (CMP_NE(MEM16(esp + edx + 0xD0), 0x20)) goto loc_002257D2; /* jne: not equal / not zero */

loc_0022577E: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00225790: ;
    PUSH32(esp, 0x5F59F0);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esp + 0xE8;
    MEM16(esp + esi * 2 + 0xE8) = LO16(ebx);
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_002257B8: ;
    xmm1 = MEMF(0x5A005C); /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    esp = esp + 0x18;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_002257D7; /* ja: above (unsigned >) */

loc_002257CE: ;
    eax = MEM32(esp + 0x10);

loc_002257D2: ;
    esi--;
    if (((int32_t)esi >= 0)) goto loc_00225770; /* jns: not sign (positive) */

loc_002257D5: ;
    goto loc_002257DE;

loc_002257D7: ;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    edi = esi;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_0022583D; /* jne: not equal / not zero */

loc_002257DE: ;
    eax = MEM32(esp + 0x1C);
    esi = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_00225B13; /* jle: less or equal (signed <=) */

loc_002257EC: ;
    /* nop */

loc_002257F0: ;
    ecx = MEM32(esp + 0x2C);
    if (CMP_NE(MEM16(ecx + esi * 2), 0x20)) goto loc_0022581D; /* jne: not equal / not zero */

loc_002257FB: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0022581B; /* je: equal / zero */

loc_00225800: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx = eax;
    ecx = ecx - edi;
    eax = eax - esi;
    if (CMP_GE(ecx, ebx)) goto loc_00225811; /* jge: greater or equal (signed >=) */

loc_0022580F: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_00225811: ;
    if (CMP_GE(eax, ebx)) goto loc_00225817; /* jge: greater or equal (signed >=) */

loc_00225815: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_00225817: ;
    if (CMP_GE(eax, ecx)) goto loc_0022581D; /* jge: greater or equal (signed >=) */

loc_0022581B: ;
    edi = esi;

loc_0022581D: ;
    eax = MEM32(esp + 0x1C);
    esi++;
    if (CMP_L(esi, eax)) goto loc_002257F0; /* jl: less (signed <) */

loc_00225826: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00225B13; /* je: equal / zero */

loc_0022582F: ;
    xmm1 = MEMF(0x5A005C); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_0022583D: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0022586C; /* jbe: below or equal (unsigned <=) */

loc_00225842: ;
    edx = MEM32(0x75E01C);
    xmm2 = MEMF(0x75E018); /* movss */
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, edx);
    xmm2 = xmm2 / xmm0; /* divss */
    PUSH32(esp, ecx);
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00225869: ;
    esp = esp + 0xC;

loc_0022586C: ;
    xmm0 = MEMF(esp + 0xB0); /* movss */
    xmm1 = MEMF(esp + 0xB4); /* movss */
    (void)0; /* cmp MEM8(esp + 0xAD), LO8(ebx) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x649E04); /* mulss */
    xmm1 = xmm1 * MEMF(0x64972C); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0xB8); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0xBC); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (CMP_EQ(MEM8(esp + 0xAD), LO8(ebx))) goto loc_00225902; /* je: equal / zero */

loc_002258B5: ;
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esp + 0xE0;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_002258D5: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x10;

loc_00225902: ;
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    xmm0 = MEMF(0x84B508); /* movss */
    /* comiss xmm0, MEMF(0x80765C) - sets EFLAGS */
    MEMF(0x807654) = xmm1; /* movss */
    if ((xmm0 > MEMF(0x80765C))) goto loc_00225948; /* ja: above (unsigned >) */

loc_0022592B: ;
    /* comiss xmm0, MEMF(0x807660) - sets EFLAGS */
    if ((xmm0 > MEMF(0x807660))) goto loc_00225948; /* ja: above (unsigned >) */

loc_00225934: ;
    ecx = MEM32(0x5499F0);
    esi = 1;
    eax = 2;
    ecx = ecx | esi;
    goto loc_00225957;

loc_00225948: ;
    ecx = MEM32(0x5499F0);
    eax = 1;
    ecx = ecx | eax;
    esi = eax;

loc_00225957: ;
    edx = esp + 0xD0;
    MEM32(0x54733C) = eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547340) = eax;
    PUSH32(esp, 0x7FFFFFFE);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_003D3D00(); /* call 0x003D3D00 */

loc_0022597D: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 - MEMF(0x64908C); /* subss */
    xmm0 = xmm0 - MEMF(0x649148); /* subss */
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edi = esp + edi * 2 + 0xE6;
    PUSH32(esp, 0x7FFFFFFF);
    eax = edi;
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_002259BB: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm1 = MEMF(0x5A005C); /* movss */
    esp = esp + 0x18;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_002259FB; /* jbe: below or equal (unsigned <=) */

loc_002259D1: ;
    edx = MEM32(0x75E01C);
    xmm2 = MEMF(0x75E018); /* movss */
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, edx);
    xmm2 = xmm2 / xmm0; /* divss */
    PUSH32(esp, ecx);
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002259F8: ;
    esp = esp + 0xC;

loc_002259FB: ;
    xmm0 = MEMF(esp + 0xB0); /* movss */
    xmm1 = MEMF(esp + 0xB4); /* movss */
    (void)0; /* cmp MEM8(esp + 0xAD), LO8(ebx) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x649E04); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0xB8); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0xBC); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (CMP_EQ(MEM8(esp + 0xAD), LO8(ebx))) goto loc_00225A8A; /* je: equal / zero */

loc_00225A42: ;
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    eax = edi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00225A5D: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x10;

loc_00225A8A: ;
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    xmm0 = MEMF(0x84B508); /* movss */
    /* comiss xmm0, MEMF(0x80765C) - sets EFLAGS */
    MEMF(0x807654) = xmm1; /* movss */
    if ((xmm0 > MEMF(0x80765C))) goto loc_00225AED; /* ja: above (unsigned >) */

loc_00225AB3: ;
    /* comiss xmm0, MEMF(0x807660) - sets EFLAGS */
    if ((xmm0 > MEMF(0x807660))) goto loc_00225AED; /* ja: above (unsigned >) */

loc_00225ABC: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    ecx = ecx | esi;
    MEM32(0x54733C) = eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547340) = eax;
    PUSH32(esp, 0x7FFFFFFE);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_003D3D00(); /* call 0x003D3D00 */

loc_00225AE8: ;
    g_seh_ebp = ebp; sub_00225D19(); return; /* tail jmp 0x00225D19 */

loc_00225AED: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | esi;
    PUSH32(esp, 0x7FFFFFFE);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(0x54733C) = esi;
    MEM32(0x547340) = esi;
    PUSH32(esp, 0); sub_003D3D00(); /* call 0x003D3D00 */

loc_00225B0E: ;
    g_seh_ebp = ebp; sub_00225D19(); return; /* tail jmp 0x00225D19 */

loc_00225B13: ;
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0x5F59F0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00225B33: ;
    ecx = MEM32(0x75E01C);
    xmm0 = MEMF(0x75E018); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x28); /* divss */
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    esp = esp + 0x10;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00225B63: ;
    xmm0 = MEMF(esp + 0xBC); /* movss */
    xmm1 = MEMF(esp + 0xC0); /* movss */
    SET_LO8(eax, MEM8(esp + 0xB9));
    xmm0 = xmm0 * MEMF(0x649E04); /* mulss */
    xmm1 = xmm1 * MEMF(0x64972C); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0xC4); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0xC8); /* subss */
    esi = MEM32(esi + 0xC);
    esp = esp + 0xC;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00225BF9; /* je: equal / zero */

loc_00225BB4: ;
    PUSH32(esp, 0x5F59F0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_00225BCF: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1 = MEMF(esp + 0x24); /* movss */
    esp = esp + 0x10;

loc_00225BF9: ;
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    xmm0 = MEMF(0x84B508); /* movss */
    /* comiss xmm0, MEMF(0x80765C) - sets EFLAGS */
    MEMF(0x807654) = xmm1; /* movss */
    if ((xmm0 > MEMF(0x80765C))) goto loc_00225C3B; /* ja: above (unsigned >) */

loc_00225C22: ;
    /* comiss xmm0, MEMF(0x807660) - sets EFLAGS */
    if ((xmm0 > MEMF(0x807660))) goto loc_00225C3B; /* ja: above (unsigned >) */

loc_00225C2B: ;
    ecx = MEM32(0x5499F0);
    eax = 2;
    ecx = ecx | 1;
    goto loc_00225C48;

loc_00225C3B: ;
    ecx = MEM32(0x5499F0);
    eax = 1;
    ecx = ecx | eax;

loc_00225C48: ;
    MEM32(0x54733C) = eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x547340) = eax;
    PUSH32(esp, 0x7FFFFFFE);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_003D3D00(); /* call 0x003D3D00 */

loc_00225C67: ;
    g_seh_ebp = ebp; sub_00225D19(); return; /* tail jmp 0x00225D19 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00225F80
 * Original: 0x00225F80 - 0x00225FA2 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225F80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00225F80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00225F86: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00225F9F; /* je: equal / zero */

loc_00225F8D: ;
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00225F9F; /* jbe: below or equal (unsigned <=) */

loc_00225F93: ;
    if (CMP_NE(MEM16(esi + ecx * 2), 0x20)) { sub_00225FA2(); return; } /* jne: not equal / not zero */

loc_00225F9A: ;
    ecx++;
    if (CMP_B(ecx, eax)) goto loc_00225F93; /* jb: below (unsigned <) */

loc_00225F9F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00225FB0
 * Original: 0x00225FB0 - 0x00226039 (137 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225FB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00225FB0: ;
    esp = esp - 0x400;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00225FBC: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00226032; /* je: equal / zero */

loc_00225FC3: ;
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00225FDC; /* jbe: below or equal (unsigned <=) */

loc_00225FC9: ;
    /* nop */

loc_00225FD0: ;
    if (CMP_NE(MEM16(esi + ecx * 2), 0x20)) goto loc_00225FDC; /* jne: not equal / not zero */

loc_00225FD7: ;
    ecx++;
    if (CMP_B(ecx, eax)) goto loc_00225FD0; /* jb: below (unsigned <) */

loc_00225FDC: ;
    if (CMP_NE(ecx, eax)) goto loc_00225FEC; /* jne: not equal / not zero */

loc_00225FE0: ;
    MEM16(esi) = 0;
    esp = esp + 0x400;
    esp += 4; return; /* ret */

loc_00225FEC: ;
    eax = esi + ecx * 2;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_00225FFA: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00226004: ;
    ecx = eax + -1;
    esp = esp + 0xC;
    eax = ecx;
    /* nop */

loc_00226010: ;
    if (CMP_NE(MEM16(esp + eax * 2), 0x20)) goto loc_0022601A; /* jne: not equal / not zero */

loc_00226017: ;
    eax--;
    goto loc_00226010;

loc_0022601A: ;
    if (CMP_AE(eax, ecx)) goto loc_00226025; /* jae: above or equal (unsigned >=) */

loc_0022601E: ;
    MEM16(esp + eax * 2 + 2) = 0;

loc_00226025: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_0022602F: ;
    esp = esp + 8;

loc_00226032: ;
    esp = esp + 0x400;
    esp += 4; return; /* ret */

}

/**
 * sub_00226040
 * Original: 0x00226040 - 0x002260AE (110 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226040(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226040: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(edi + 0x14);
    esi = MEM32(edi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00256C90(); /* call 0x00256C90 */

loc_0022605A: ;
    esp = esp + 0x14;
    if (CMP_NE(eax, 4)) goto loc_00226093; /* jne: not equal / not zero */

loc_00226062: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0022608D; /* je: equal / zero */

loc_00226069: ;
    edx = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00226072: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00226098; /* je: equal / zero */

loc_00226079: ;
    esi = MEM32(edi + 0x18);
    PUSH32(esp, 0); sub_00225F80(); /* call 0x00225F80 */

loc_00226081: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00226098; /* je: equal / zero */

loc_00226085: ;
    esi = MEM32(edi + 0x18);
    PUSH32(esp, 0); sub_00225FB0(); /* call 0x00225FB0 */

loc_0022608D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 8), _icall_esp); /* indirect call */
    }

loc_00226090: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00226093: ;
    if (CMP_NE(eax, 3)) goto loc_002260AB; /* jne: not equal / not zero */

loc_00226098: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_002260A5: ;
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 0xC), _icall_esp); /* indirect call */
    }

loc_002260AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002260B0
 * Original: 0x002260B0 - 0x0022611C (108 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002260B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002260B0: ;
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    PUSH32(esp, esi);
    esi = ecx;
    if ((xmm0 < MEMF(0x648D14))) goto loc_00226118; /* jb: below (unsigned <) */

loc_002260C2: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_002260C9: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x54;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x1C);
    if (TEST_NZ(ecx, ecx)) goto loc_00226118; /* jne: not equal / not zero */

loc_002260D8: ;
    xmm0 = MEMF(0x776144); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    MEMF(0x776144) = xmm0; /* movss */
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00254F80(); /* call 0x00254F80 */

loc_00226107: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    esp = esp + 0x10;
    MEMF(0x776144) = xmm0; /* movss */

loc_00226118: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00226120
 * Original: 0x00226120 - 0x00226169 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226120(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226120: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00226145; /* je: equal / zero */

loc_0022612A: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    eax = esi + 0x20;
    edx--;
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_00226145; /* jne: not equal / not zero */

loc_0022613C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00226142: ;
    esp = esp + 4;

loc_00226145: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi) = 0x5F7704;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00226163; /* je: equal / zero */

loc_00226152: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00226160: ;
    esp = esp + 4;

loc_00226163: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00226170
 * Original: 0x00226170 - 0x002266CA (1370 bytes, 271 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226170(void)
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

loc_00226170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xB4;
    MEM32(esp + 0x14) = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x44) = LO8(ebx);
    MEM32(esp + 0x48) = 5;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM8(esp + 0xA4) = LO8(ebx);
    MEM8(esp + 0xA5) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_002261C0: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9A30);
    MEM8(esp + 0xC8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_002261DB: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edi = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_0022622E: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0022623C: ;
    PUSH32(esp, 0x3EB33333);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x3FA00000);
    MEM8(0x807667) = LO8(eax);
    MEM8(0x807697) = LO8(eax);
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0022626F: ;
    xmm0 = MEMF(0x648E68); /* movss */
    xmm1 = MEMF(0x6BD4C4); /* movss */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3FE00000);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x3FACCCCD);
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEM32(0x8076B0) = ebx;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = 1;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002262B1: ;
    edi = MEM32(esp + 0x2C);
    SET_LO8(eax, MEM8(edi + 0x14));
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 + MEMF(0x649420); /* addss */
    xmm1 = xmm1 - MEMF(0x648F78); /* subss */
    esp = esp + 0x18;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEM8(esp + 0x9D) = 1;
    esi = esp + 0x20;
    PUSH32(esp, ebx);
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    eax = esp + 0x10;
    ecx = 0x5F7928;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0022630E; /* je: equal / zero */

loc_00226309: ;
    ecx = 0x5F790C;

loc_0022630E: ;
    PUSH32(esp, 0); sub_002018F0(); /* call 0x002018F0 */

loc_00226313: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm1 = MEMF(0x64A214); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    xmm0 = xmm0 + MEMF(0x648F38); /* addss */
    PUSH32(esp, 0x3F19999A);
    MEMF(0x8076A4) = xmm1; /* movss */
    xmm1 = MEMF(0x64AD08); /* movss */
    PUSH32(esp, 0x3FE00000);
    PUSH32(esp, 0x3FACCCCD);
    MEM32(0x8076B0) = 1;
    MEM8(0x8086C4) = 1;
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00226370: ;
    PUSH32(esp, 0x5F59F0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0022638C: ;
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm0 = MEMF(0x64AD04); /* movss */
    esp = esp + 0x1C;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002263C6; /* jbe: below or equal (unsigned <=) */

loc_002263A2: ;
    PUSH32(esp, ecx);
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3FE00000);
    PUSH32(esp, 0x3FACCCCD);
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002263C3: ;
    esp = esp + 0xC;

loc_002263C6: ;
    xmm0 = MEMF(esp + 0xA0); /* movss */
    xmm1 = MEMF(esp + 0xA4); /* movss */
    (void)0; /* cmp MEM8(esp + 0x9D), LO8(ebx) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0xA8); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0xAC); /* subss */
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = LO8(ebx);
    esi = MEM32(edi + 0xC);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    if (CMP_EQ(MEM8(esp + 0x9D), LO8(ebx))) goto loc_0022646A; /* je: equal / zero */

loc_00226422: ;
    PUSH32(esp, 0x5F59F0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFFFFFF);
    eax = esi;
    PUSH32(esp, 0); sub_003D4F60(); /* call 0x003D4F60 */

loc_0022643D: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    esp = esp + 0x10;

loc_0022646A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00226489: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    PUSH32(esp, 0x3EB33333);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648FA0); /* movss */
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x3FA00000);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM32(0x8076B0) = ebx;
    MEM8(0x807664) = 0x64;
    MEM8(0x807665) = 0xCD;
    MEM8(0x807666) = 0xFF;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_002264D8: ;
    xmm0 = MEMF(0x648E68); /* movss */
    xmm1 = MEMF(0x6BD4C4); /* movss */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3FE00000);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0x3FACCCCD);
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEM32(0x8076B0) = ebx;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEM32(esp + 0x58) = 1;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_0022651A: ;
    SET_LO8(eax, MEM8(edi + 0x14));
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 + MEMF(0x649420); /* addss */
    xmm1 = xmm1 + MEMF(0x6496C8); /* addss */
    esp = esp + 0x20;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEM8(esp + 0x9D) = 1;
    esi = esp + 0x20;
    PUSH32(esp, ebx);
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    eax = esp + 0x10;
    ecx = 0x5F78F8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00226573; /* je: equal / zero */

loc_0022656E: ;
    ecx = 0x5F78E0;

loc_00226573: ;
    PUSH32(esp, 0); sub_002018F0(); /* call 0x002018F0 */

loc_00226578: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    SET_LO8(eax, MEM8(edi + 0x14));
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    xmm1 = MEMF(0x649030); /* movss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    esi = esp + 0x20;
    PUSH32(esp, ebx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    eax = esp + 0x10;
    ecx = 0x5F78CC;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002265C6; /* je: equal / zero */

loc_002265C1: ;
    ecx = 0x5F78B4;

loc_002265C6: ;
    PUSH32(esp, 0); sub_002018F0(); /* call 0x002018F0 */

loc_002265CB: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648FA0); /* movss */
    esi = esp + 0x20;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_002265F4: ;
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x44) = LO8(ebx);
    MEM32(esp + 0x48) = 5;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM8(esp + 0xA4) = LO8(ebx);
    MEM8(esp + 0xA5) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_0022662F: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    eax = MEM32(0x849AA4);
    PUSH32(esp, 0x5F9A30);
    MEM8(esp + 0xC8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_0022664A: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edi = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_0022669D: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x75E000);
    PUSH32(esp, eax);
    ecx = 0x75DFF8;
    eax = edi;
    PUSH32(esp, 0); sub_00201B90(); /* call 0x00201B90 */

loc_002266BA: ;
    esi = edi;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_002266C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002266D0
 * Original: 0x002266D0 - 0x00226719 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002266D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002266D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_002266F5; /* je: equal / zero */

loc_002266DA: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    eax = esi + 0x10;
    edx--;
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_002266F5; /* jne: not equal / not zero */

loc_002266EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002266F2: ;
    esp = esp + 4;

loc_002266F5: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi) = 0x5F7704;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00226713; /* je: equal / zero */

loc_00226702: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00226710: ;
    esp = esp + 4;

loc_00226713: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00226720
 * Original: 0x00226720 - 0x00226910 (496 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226720(void)
{
    uint32_t ebp;
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00226720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xB4;
    MEM32(esp + 0x14) = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x44) = LO8(ebx);
    MEM32(esp + 0x48) = 5;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM8(esp + 0xA4) = LO8(ebx);
    MEM8(esp + 0xA5) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00226770: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9A30);
    MEM8(esp + 0xC8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_0022678B: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edi = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_002267DE: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002267EC: ;
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FA00000);
    MEM8(0x807667) = LO8(eax);
    MEM8(0x807697) = LO8(eax);
    MEM8(0x807664) = 0xFF;
    MEM8(0x807665) = 0xAF;
    MEM8(0x807666) = LO8(ebx);
    MEM32(0x8076B0) = ebx;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00226824: ;
    xmm0 = MEMF(0x6BD4C4); /* movss */
    xmm0 = xmm0 * MEMF(0x649228); /* mulss */
    eax = MEM32(0x75DFF0);
    esp = esp + 0xC;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x75DFF4); /* movss */
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = ebx;
    PUSH32(esp, 0); sub_00218BC0(); /* call 0x00218BC0 */

loc_00226875: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    xmm1 = xmm1 - MEMF(0x648F78); /* subss */
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    ecx = 0x5F789C;
    esi = edi;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEM8(esp + 0xA1) = 1;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002018F0(); /* call 0x002018F0 */

loc_002268C5: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    esi = MEM32(esp + 0x14);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648FA0); /* movss */
    ecx = esi + 0x10;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002268F1: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0022D530(); /* call 0x0022D530 */

loc_002268FD: ;
    esp = esp + 4;
    esi = edi;
    PUSH32(esp, 0); sub_00201560(); /* call 0x00201560 */

loc_00226907: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00226910
 * Original: 0x00226910 - 0x00226A1B (267 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00226910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2C4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC4;
    MEM32(esp + 0x18) = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    eax = 0x5D4FB4;
    MEM8(esp + 0x54) = LO8(ebx);
    MEM32(esp + 0x58) = 5;
    MEM8(esp + 0xA8) = LO8(ebx);
    MEM8(esp + 0xB4) = LO8(ebx);
    MEM8(esp + 0xB5) = LO8(ebx);
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_00226960: ;
    eax = MEM32(0x849AA4);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F9A30);
    MEM8(esp + 0xD8) = LO8(ebx);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_0022697B: ;
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edi = esp + 0x30;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00200DB0(); /* call 0x00200DB0 */

loc_002269CE: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 8);
    eax = MEM32(0x863D04);
    esi = MEM32(ecx * 4 + 0x862CD0);
    edi = 3;
    if (CMP_NE(eax, edi)) goto loc_00226A0C; /* jne: not equal / not zero */

loc_002269EA: ;
    if (CMP_NE(MEM32(0x849E54), 2)) goto loc_00226A0C; /* jne: not equal / not zero */

loc_002269F3: ;
    PUSH32(esp, 0x75EBF0);
    ebx = 0x18;
    PUSH32(esp, 0); sub_00268DC0(); /* call 0x00268DC0 */

loc_00226A02: ;
    esp = esp + 4;
    ebx = 0; /* xor self */
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00226A13; /* jne: not equal / not zero */

loc_00226A0C: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x11B7);

loc_00226A13: ;
    if (CMP_GE(eax, ebx)) { sub_00226A1B(); return; } /* jge: greater or equal (signed >=) */

loc_00226A17: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00226A25(); return; /* tail jmp 0x00226A25 */

}

/**
 * sub_00226F00
 * Original: 0x00226F00 - 0x00226F36 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226F00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226F00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00226F08: ;
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(esi, eax)) goto loc_00226F34; /* je: equal / zero */

loc_00226F13: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = eax;
    eax = esi + 0xC;
    MEM32(esi) = 0x5F7794;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00226F2B: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(esi + 0x14) = LO8(ecx);
    eax = esi;

loc_00226F34: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00226F40
 * Original: 0x00226F40 - 0x00226F7F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226F40(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00226F40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00226F48: ;
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(esi, eax)) goto loc_00226F7D; /* je: equal / zero */

loc_00226F53: ;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    MEM32(esi + 4) = eax;
    ecx = edi;
    MEM32(esi) = 0x5F7764;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00226F67: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = edi;
    MEMF(esi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_00226F77: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = esi;
    POP32(esp, edi);

loc_00226F7D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00226F80
 * Original: 0x00226F80 - 0x00226F9C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226F80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226F80: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00226F87: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_00226F9C(); return; } /* je: equal / zero */

loc_00226F8E: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x5F77B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00226FA0
 * Original: 0x00226FA0 - 0x00227029 (137 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226FA0: ;
    esp = esp - 0x800;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00226FB0: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) { sub_00227029(); return; } /* je: equal / zero */

loc_00226FB9: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F7868;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00226FC5: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00226FD1: ;
    esp = esp - 8;
    eax = esp;
    edi = 0x5F59F0;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00226FE0: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00226FEA: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00226FF4: ;
    esp = esp - 8;
    ebp = esp;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x5F9B74);
    eax = esp + 0x3C;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_00227012: ;
    esp = esp + 0x10;
    edi = esp + 0x34;
    eax = ebp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227020: ;
    PUSH32(esp, 0); sub_00223F00(); /* call 0x00223F00 */

loc_00227025: ;
    esi = eax;
    g_seh_ebp = ebp; sub_0022702B(); return; /* tail jmp 0x0022702B */

}

/**
 * sub_00227080
 * Original: 0x00227080 - 0x002270D2 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227080: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00227088: ;
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(esi, eax)) goto loc_002270D0; /* je: equal / zero */

loc_00227093: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 8) = eax;
    eax = esi + 0x1C;
    MEM32(esi) = 0x5F77D4;
    MEM32(esi + 0xC) = ecx;
    MEM8(esi + 0x10) = LO8(edx);
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002270B9: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x24) = edx;
    eax = esi;

loc_002270D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002270E0
 * Original: 0x002270E0 - 0x0022716A (138 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002270E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002270E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_002270EA: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) { sub_0022716A(); return; } /* je: equal / zero */

loc_002270F3: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F7868;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002270FF: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0022710B: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F7848;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00227117: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227123: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F7828;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0022712F: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0022713B: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F7804;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00227147: ;
    esp = esp - 8;
    edi = eax;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227153: ;
    edi = MEM32(esp + 0x30);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227161: ;
    PUSH32(esp, 0); sub_00223F00(); /* call 0x00223F00 */

loc_00227166: ;
    edi = eax;
    g_seh_ebp = ebp; sub_0022716C(); return; /* tail jmp 0x0022716C */

}

/**
 * sub_00227200
 * Original: 0x00227200 - 0x00227259 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_0022720A: ;
    esi = eax;
    ebx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(esi, ebx)) { sub_00227259(); return; } /* je: equal / zero */

loc_00227215: ;
    esp = esp - 8;
    eax = esp;
    edi = 0x5F59F0;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227224: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0022722E: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227238: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227242: ;
    edi = MEM32(esp + 0x30);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227250: ;
    PUSH32(esp, 0); sub_00223F00(); /* call 0x00223F00 */

loc_00227255: ;
    edi = eax;
    g_seh_ebp = ebp; sub_0022725B(); return; /* tail jmp 0x0022725B */

}

/**
 * sub_002272E0
 * Original: 0x002272E0 - 0x00227341 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002272E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002272E0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_002272EA: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) { sub_00227341(); return; } /* je: equal / zero */

loc_002272F3: ;
    edi = MEM32(esp + 0x18);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227301: ;
    esp = esp - 8;
    eax = esp;
    edi = 0x5F59F0;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227310: ;
    edi = MEM32(esp + 0x2C);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0022731E: ;
    edi = MEM32(esp + 0x2C);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0022732C: ;
    esp = esp - 8;
    eax = esp;
    edi = ebx;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227338: ;
    PUSH32(esp, 0); sub_00223F00(); /* call 0x00223F00 */

loc_0022733D: ;
    esi = eax;
    g_seh_ebp = ebp; sub_00227343(); return; /* tail jmp 0x00227343 */

}

/**
 * sub_00227390
 * Original: 0x00227390 - 0x002273F4 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227390: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_0022739A: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) { sub_002273F4(); return; } /* je: equal / zero */

loc_002273A3: ;
    edi = MEM32(esp + 0x18);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002273B1: ;
    esp = esp - 8;
    eax = esp;
    edi = 0x5F59F0;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002273C0: ;
    edi = MEM32(esp + 0x2C);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002273CE: ;
    edi = MEM32(esp + 0x2C);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002273DC: ;
    esp = esp - 8;
    eax = esp;
    edi = 0x5F59F0;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_002273EB: ;
    PUSH32(esp, 0); sub_00223F00(); /* call 0x00223F00 */

loc_002273F0: ;
    esi = eax;
    g_seh_ebp = ebp; sub_002273F6(); return; /* tail jmp 0x002273F6 */

}

/**
 * sub_00227450
 * Original: 0x00227450 - 0x0022748A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227450(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00227458: ;
    ebx = eax;
    eax = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(ebx, eax)) goto loc_00227488; /* je: equal / zero */

loc_00227463: ;
    MEM32(ebx + 4) = eax;
    PUSH32(esp, esi);
    eax = ebx + 0xC;
    MEM32(ebx) = 0x5F7774;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_00227475: ;
    eax = MEM32(esp + 0xC);
    esi = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_00227482: ;
    esp = esp + 4;
    eax = ebx;
    POP32(esp, esi);

loc_00227488: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00227490
 * Original: 0x00227490 - 0x002274B3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227490(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227490: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_001FFB50(); /* call 0x001FFB50 */

loc_00227497: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_002274B3(); return; } /* je: equal / zero */

loc_0022749E: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x5F7734;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002274C0
 * Original: 0x002274C0 - 0x002274CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002274C0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002274C0: ;
    ecx = esi + 8;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002274C8: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002274D0
 * Original: 0x002274D0 - 0x0022761A (330 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002274D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002274D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    if (CMP_EQ(esi, edi)) goto loc_00227614; /* je: equal / zero */

loc_002274DF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 4);
    ebx = 0; /* xor self */
    if (CMP_EQ(ebp, ebx)) goto loc_002274F8; /* je: equal / zero */

loc_002274EA: ;
    edx = MEM32(edi + 8);
    ecx = edx;
    ecx = ecx - ebp;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    if (CMP_NE(ecx, ebx)) goto loc_00227521; /* jne: not equal / not zero */

loc_002274F8: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebx)) goto loc_00227510; /* je: equal / zero */

loc_002274FF: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022750D: ;
    esp = esp + 4;

loc_00227510: ;
    POP32(esp, ebp);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00227521: ;
    eax = MEM32(esi + 4);
    if (CMP_NE(eax, ebx)) goto loc_0022752C; /* jne: not equal / not zero */

loc_00227528: ;
    ebx = 0; /* xor self */
    goto loc_00227534;

loc_0022752C: ;
    ebx = MEM32(esi + 8);
    ebx = ebx - eax;
    ebx = (uint32_t)((int32_t)ebx >> 2);

loc_00227534: ;
    if (CMP_A(ecx, ebx)) goto loc_00227581; /* ja: above (unsigned >) */

loc_00227538: ;
    ecx = eax;
    eax = ebp;
    if (CMP_EQ(eax, edx)) goto loc_0022754E; /* je: equal / zero */

loc_00227540: ;
    ebx = MEM32(eax);
    MEM32(ecx) = ebx;
    eax = eax + 4;
    ecx = ecx + 4;
    if (CMP_NE(eax, edx)) goto loc_00227540; /* jne: not equal / not zero */

loc_0022754E: ;
    eax = MEM32(edi + 4);
    if (TEST_NZ(eax, eax)) goto loc_00227568; /* jne: not equal / not zero */

loc_00227555: ;
    ecx = MEM32(esi + 4);
    POP32(esp, ebp);
    edi = 0; /* xor self */
    POP32(esp, ebx);
    edx = ecx + edi * 4;
    POP32(esp, edi);
    MEM32(esi + 8) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00227568: ;
    edi = MEM32(edi + 8);
    ecx = MEM32(esi + 4);
    edi = edi - eax;
    POP32(esp, ebp);
    edi = (uint32_t)((int32_t)edi >> 2);
    POP32(esp, ebx);
    edx = ecx + edi * 4;
    POP32(esp, edi);
    MEM32(esi + 8) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00227581: ;
    if (TEST_NZ(eax, eax)) goto loc_00227589; /* jne: not equal / not zero */

loc_00227585: ;
    edx = 0; /* xor self */
    goto loc_00227591;

loc_00227589: ;
    edx = MEM32(esi + 0xC);
    edx = edx - eax;
    edx = (uint32_t)((int32_t)edx >> 2);

loc_00227591: ;
    if (CMP_A(ecx, edx)) goto loc_002275D2; /* ja: above (unsigned >) */

loc_00227595: ;
    if (TEST_NZ(eax, eax)) goto loc_0022759D; /* jne: not equal / not zero */

loc_00227599: ;
    edx = 0; /* xor self */
    goto loc_002275A5;

loc_0022759D: ;
    edx = MEM32(esi + 8);
    edx = edx - eax;
    edx = (uint32_t)((int32_t)edx >> 2);

loc_002275A5: ;
    ecx = MEM32(edi + 4);
    ebx = ecx + edx * 4;
    edx = ebx;
    PUSH32(esp, 0); sub_00227930(); /* call 0x00227930 */

loc_002275B2: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi + 8);
    edx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0037C360(); /* call 0x0037C360 */

loc_002275C4: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002275D2: ;
    if (TEST_Z(eax, eax)) goto loc_002275DB; /* je: equal / zero */

loc_002275D6: ;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_002275DB: ;
    ecx = MEM32(edi + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_002275E6; /* jne: not equal / not zero */

loc_002275E2: ;
    eax = 0; /* xor self */
    goto loc_002275EE;

loc_002275E6: ;
    eax = MEM32(edi + 8);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);

loc_002275EE: ;
    PUSH32(esp, 0); sub_0037C2A0(); /* call 0x0037C2A0 */

loc_002275F3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00227612; /* je: equal / zero */

loc_002275F7: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    edx = MEM32(edi + 8);
    edi = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0037C360(); /* call 0x0037C360 */

loc_0022760C: ;
    esp = esp + 0xC;
    MEM32(esi + 8) = eax;

loc_00227612: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00227614: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00227620
 * Original: 0x00227620 - 0x002276B0 (144 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00227620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F9B0);
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
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_00227663; /* je: equal / zero */

loc_0022764D: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_00227663: ;
    PUSH32(esp, 0); sub_002277D0(); /* call 0x002277D0 */

loc_00227668: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00227694; /* je: equal / zero */

loc_0022766C: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(edi + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = eax;
    edi = MEM32(edi + 4);
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -32) = edi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edx = MEM32(esi + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_00227950(); /* call 0x00227950 */

loc_00227691: ;
    MEM32(esi + 8) = eax;

loc_00227694: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002276D0
 * Original: 0x002276D0 - 0x002276D8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002276D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002276D0: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_002276D8(); return; } /* jne: not equal / not zero */

loc_002276D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002276F0
 * Original: 0x002276F0 - 0x00227721 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002276F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002276F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F9A0);
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
    if (TEST_NZ(ecx, ecx)) { sub_00227721(); return; } /* jne: not equal / not zero */

loc_0022771D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00227729(); return; /* tail jmp 0x00227729 */

}

/**
 * sub_00227790
 * Original: 0x00227790 - 0x00227798 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227790: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_00227798(); return; } /* jne: not equal / not zero */

loc_00227797: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002277B0
 * Original: 0x002277B0 - 0x002277CF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002277B0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002277B0: ;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002277BB: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = edi;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_002277C8: ;
    MEMF(esi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002277D0
 * Original: 0x002277D0 - 0x002277E2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002277D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002277D0: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    if (CMP_NE(eax, ecx)) { sub_002277E2(); return; } /* jne: not equal / not zero */

loc_002277DF: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00227820
 * Original: 0x00227820 - 0x00227867 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227820(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227820: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00227850; /* je: equal / zero */

loc_00227828: ;
    ecx = MEM32(esp);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002279E0(); /* call 0x002279E0 */

loc_00227835: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00227850; /* je: equal / zero */

loc_00227844: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022784D: ;
    esp = esp + 4;

loc_00227850: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00227870
 * Original: 0x00227870 - 0x002278B5 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227870(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227870: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0022789E; /* je: equal / zero */

loc_00227878: ;
    ecx = MEM32(esp);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00227A40(); /* call 0x00227A40 */

loc_00227885: ;
    eax = MEM32(esi + 4);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_0022789E; /* je: equal / zero */

loc_00227892: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022789B: ;
    esp = esp + 4;

loc_0022789E: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002278C0
 * Original: 0x002278C0 - 0x002278D5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002278C0(void)
{

loc_002278C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00227A40(); /* call 0x00227A40 */

loc_002278CF: ;
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002278E0
 * Original: 0x002278E0 - 0x0022792E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002278E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002278E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esi;
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_002278ED: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0022790F; /* je: equal / zero */

loc_002278F1: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_002278F6: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_002278FE: ;
    if (CMP_NE(eax, edi)) goto loc_00227903; /* jne: not equal / not zero */

loc_00227902: ;
    ebx++;

loc_00227903: ;
    eax = esi;
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_0022790A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002278F6; /* jne: not equal / not zero */

loc_0022790E: ;
    POP32(esp, edi);

loc_0022790F: ;
    MEM32(esi + 0x130) = ebp;
    MEM32(esi + 0x134) = ebp;
    MEM32(esi + 0x138) = ebp;
    MEM32(esi + 0x13C) = ebp;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00227930
 * Original: 0x00227930 - 0x00227945 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227930(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227930: ;
    if (CMP_EQ(ecx, edx)) goto loc_00227944; /* je: equal / zero */

loc_00227934: ;
    PUSH32(esp, esi);

loc_00227935: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    ecx = ecx + 4;
    eax = eax + 4;
    if (CMP_NE(ecx, edx)) goto loc_00227935; /* jne: not equal / not zero */

loc_00227943: ;
    POP32(esp, esi);

loc_00227944: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00227950
 * Original: 0x00227950 - 0x0022796C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227950(void)
{

loc_00227950: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00227AC0(); /* call 0x00227AC0 */

loc_00227966: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00227970
 * Original: 0x00227970 - 0x0022798B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227970(void)
{

loc_00227970: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00227B50(); /* call 0x00227B50 */

loc_00227985: ;
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00227990
 * Original: 0x00227990 - 0x002279DE (78 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227990(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227990: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_002279DB; /* je: equal / zero */

loc_00227998: ;
    if (CMP_NE(MEM32(0x849C44), esi)) goto loc_002279AA; /* jne: not equal / not zero */

loc_002279A0: ;
    MEM32(0x849C44) = 0;

loc_002279AA: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_002279C9; /* je: equal / zero */

loc_002279B1: ;
    eax = edi;
    PUSH32(esp, 0); sub_0024EA70(); /* call 0x0024EA70 */

loc_002279B8: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002279C6: ;
    esp = esp + 4;

loc_002279C9: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002279D7: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_002279DB: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002279E0
 * Original: 0x002279E0 - 0x00227A3D (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002279E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002279E0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_00227A3B; /* je: equal / zero */

loc_002279E7: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_00227A34; /* je: equal / zero */

loc_002279EC: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00227A34; /* jne: not equal / not zero */

loc_002279F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002279FF: ;
    if (TEST_NZ(eax, eax)) goto loc_00227A34; /* jne: not equal / not zero */

loc_00227A03: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00227A34; /* je: equal / zero */

loc_00227A0A: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00227A2A: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_00227A34: ;
    esi = esi + 0x14;
    if (CMP_NE(esi, ebx)) goto loc_002279E7; /* jne: not equal / not zero */

loc_00227A3B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00227A40
 * Original: 0x00227A40 - 0x00227AB4 (116 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227A40: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, MEM32(esp + 8))) goto loc_00227AB2; /* je: equal / zero */

loc_00227A49: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = edi;

loc_00227A50: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebp)) goto loc_00227A9B; /* je: equal / zero */

loc_00227A57: ;
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00227D70(); /* call 0x00227D70 */

loc_00227A64: ;
    edi = MEM32(esi + 4);
    esp = esp + 4;
    if (CMP_EQ(edi, ebp)) goto loc_00227A9B; /* je: equal / zero */

loc_00227A6E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00227A74: ;
    if (TEST_NZ(eax, eax)) goto loc_00227A9B; /* jne: not equal / not zero */

loc_00227A78: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00227A98: ;
    esp = esp + 4;

loc_00227A9B: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0xC) = ebp;
    esi = esi + 0x10;
    if (CMP_NE(esi, eax)) goto loc_00227A50; /* jne: not equal / not zero */

loc_00227AAF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00227AB2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00227AC0
 * Original: 0x00227AC0 - 0x00227B0F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00227AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F630);
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

loc_00227AF4: ;
    if (CMP_EQ(esi, ebx)) { sub_00227B0F(); return; } /* je: equal / zero */

loc_00227AF8: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00227BF0(); /* call 0x00227BF0 */

loc_00227B01: ;
    edi = edi + 0x14;
    MEM32(ebp + 0x10) = edi;
    esi = esi + 0x14;
    MEM32(ebp + 8) = esi;
    goto loc_00227AF4;

}

/**
 * sub_00227B50
 * Original: 0x00227B50 - 0x00227BA8 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00227B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F990);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);

loc_00227B84: ;
    if (CMP_EQ(edi, ebx)) { sub_00227BA8(); return; } /* je: equal / zero */

loc_00227B88: ;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_00227B9A; /* je: equal / zero */

loc_00227B92: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_00227C70(); /* call 0x00227C70 */

loc_00227B9A: ;
    esi = esi + 0x10;
    MEM32(ebp + 0x10) = esi;
    edi = edi + 0x10;
    MEM32(ebp + 8) = edi;
    goto loc_00227B84;

}

/**
 * sub_00227BF0
 * Original: 0x00227BF0 - 0x00227C1A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227BF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227BF0: ;
    if (TEST_Z(eax, eax)) goto loc_00227C19; /* je: equal / zero */

loc_00227BF4: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax) = edx;
    if (TEST_Z(edx, edx)) goto loc_00227C07; /* je: equal / zero */

loc_00227C02: ;
    edx = MEM32(eax + 4);
    MEM32(edx) = MEM32(edx) + 1;

loc_00227C07: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x10));
    MEM8(eax + 0x10) = LO8(ecx);

loc_00227C19: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00227C20
 * Original: 0x00227C20 - 0x00227C67 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227C20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227C20: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00227C50; /* je: equal / zero */

loc_00227C28: ;
    ecx = MEM32(esp);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00227D70(); /* call 0x00227D70 */

loc_00227C35: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00227C50; /* je: equal / zero */

loc_00227C44: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00227C4D: ;
    esp = esp + 4;

loc_00227C50: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00227C70
 * Original: 0x00227C70 - 0x00227CFF (143 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00227C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F980);
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
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_00227CB2; /* je: equal / zero */

loc_00227C9D: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 1);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_00227CB2: ;
    PUSH32(esp, 0); sub_00227D20(); /* call 0x00227D20 */

loc_00227CB7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00227CE3; /* je: equal / zero */

loc_00227CBB: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(edi + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = eax;
    edi = MEM32(edi + 4);
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -32) = edi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edx = MEM32(esi + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_00279650(); /* call 0x00279650 */

loc_00227CE0: ;
    MEM32(esi + 8) = eax;

loc_00227CE3: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00227D20
 * Original: 0x00227D20 - 0x00227D32 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227D20: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    if (CMP_NE(eax, ecx)) { sub_00227D32(); return; } /* jne: not equal / not zero */

loc_00227D2F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00227D70
 * Original: 0x00227D70 - 0x00227DCD (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227D70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227D70: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_00227DCB; /* je: equal / zero */

loc_00227D77: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_00227DC4; /* je: equal / zero */

loc_00227D7C: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00227DC4; /* jne: not equal / not zero */

loc_00227D89: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00227D8F: ;
    if (TEST_NZ(eax, eax)) goto loc_00227DC4; /* jne: not equal / not zero */

loc_00227D93: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00227DC4; /* je: equal / zero */

loc_00227D9A: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00227DBA: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_00227DC4: ;
    esi = esi + 0xC;
    if (CMP_NE(esi, ebx)) goto loc_00227D77; /* jne: not equal / not zero */

loc_00227DCB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00227DD0
 * Original: 0x00227DD0 - 0x00227DEF (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227DD0: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00227DEE; /* je: equal / zero */

loc_00227DD5: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    eax = eax + 4;
    edx--;
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_00227DEE; /* jne: not equal / not zero */

loc_00227DE7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00227DED: ;
    POP32(esp, ecx);

loc_00227DEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00227DF0
 * Original: 0x00227DF0 - 0x00227E3F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00227DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F550);
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

loc_00227E24: ;
    if (CMP_EQ(esi, ebx)) { sub_00227E3F(); return; } /* je: equal / zero */

loc_00227E28: ;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00227E80(); /* call 0x00227E80 */

loc_00227E31: ;
    edi = edi + 0xC;
    MEM32(ebp + 0x10) = edi;
    esi = esi + 0xC;
    MEM32(ebp + 8) = esi;
    goto loc_00227E24;

}

/**
 * sub_00227E80
 * Original: 0x00227E80 - 0x00227E9E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227E80: ;
    if (TEST_Z(eax, eax)) goto loc_00227E9D; /* je: equal / zero */

loc_00227E84: ;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00227E97; /* je: equal / zero */

loc_00227E92: ;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = MEM32(ecx) + 1;

loc_00227E97: ;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_00227E9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00227EA0
 * Original: 0x00227EA0 - 0x00227EDA (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227EA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00227EA0: ;
    eax = MEM32(0x777EC8);
    if (TEST_Z(eax, eax)) goto loc_00227EC1; /* je: equal / zero */

loc_00227EA9: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x776BD8);
    if (CMP_EQ(ecx, 2)) goto loc_00227EC1; /* je: equal / zero */

loc_00227EB5: ;
    if (CMP_EQ(ecx, 3)) goto loc_00227EC1; /* je: equal / zero */

loc_00227EBA: ;
    eax = MEM32(edx + 0x24);
    if (CMP_EQ(ecx, eax)) goto loc_00227ED9; /* je: equal / zero */

loc_00227EC1: ;
    eax = MEM32(edx + 0x24);
    if (CMP_NE(eax, 1)) goto loc_00227ECC; /* jne: not equal / not zero */

loc_00227EC9: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00227ECC: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 1;
    eax = ecx;

loc_00227ED9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00227EE0
 * Original: 0x00227EE0 - 0x00227F00 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227EE0(void)
{

loc_00227EE0: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x238);
    edx = MEM32(ecx);
    SET_LO8(eax, 0); /* xor self */
    MEM32(0x6BD640) = edx;
    MEM8(0x776A00) = LO8(eax);
    MEM8(0x849B64) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00227F00
 * Original: 0x00227F00 - 0x00228192 (658 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227F00: ;
    esp = esp - 0x280;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(0x849B68) = eax;
    edx = 0; /* xor self */
    eax = esp + 0x140;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_00227F1F: ;
    eax = esp + 0x140;
    MEM8(esp + 2) = 1;
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_00227F30: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0022818B; /* je: equal / zero */

loc_00227F38: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_00227F40: ;
    ecx = MEM32(esp + 0x160);
    eax = MEM32(ecx);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00227F4E: ;
    edx = MEM32(esi);
    ecx = SX8(LO8(eax));
    MEM32(esp + 0x14) = ecx;
    ecx = esi;
    edi = 0; /* xor self */
    ebp = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00227F5F: ;
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_00228173; /* je: equal / zero */

loc_00227F67: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00227F6D: ;
    edx = MEM32(esi);
    ebx = SX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    ecx = esi;
    ebx = ebx + eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00227F83: ;
    ecx = MEM32(0x84A5F8);
    eax = SX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    if (CMP_EQ(MEM32(eax + ecx + 0x64), 0x42)) goto loc_00227FB0; /* je: equal / zero */

loc_00227F99: ;
    SET_LO16(eax, MEM16(ebx + 0x60));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_00227FA4: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (TEST_NZ(eax, eax)) goto loc_00227FB5; /* jne: not equal / not zero */

loc_00227FB0: ;
    MEM8(esp + 0x13) = 1;

loc_00227FB5: ;
    eax = MEM32(esp + 0x14);
    if (CMP_GE(eax & eax, 0)) goto loc_00227FC7; /* jge: greater or equal (signed >=) */

loc_00227FBD: ;
    MEM32(esp + 0x14) = 0;
    goto loc_00227FD4;

loc_00227FC7: ;
    if (CMP_LE(eax, 0x17)) goto loc_00227FD4; /* jle: less or equal (signed <=) */

loc_00227FCC: ;
    MEM32(esp + 0x14) = 0x17;

loc_00227FD4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00227FDA: ;
    eax = SX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + 0x776280;
    if ((eax == 0)) goto loc_00228050; /* je: equal / zero */

loc_00227FE7: ;
    edi = (uint32_t)(int32_t)SMEM16(eax);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 2);
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00228050; /* je: equal / zero */

loc_00227FF6: ;
    eax = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_00228050; /* jne: not equal / not zero */

loc_00227FFE: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_00228050; /* jne: not equal / not zero */

loc_00228007: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00228011: ;
    edx = 0x5F8C78;
    PUSH32(esp, 0); sub_00344E20(); /* call 0x00344E20 */

loc_0022801B: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00228025: ;
    edx = 0x5F7554;
    PUSH32(esp, 0); sub_00344E20(); /* call 0x00344E20 */

loc_0022802F: ;
    edx = MEM32(esp + 0x29C);
    ebp = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x20);
    MEM32(edx) = ebp;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00228047: ;
    ecx = MEM32(esp + 0x2A0);
    MEM32(ecx) = eax;

loc_00228050: ;
    SET_LO8(eax, MEM8(0x86E9A2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00228064; /* je: equal / zero */

loc_00228059: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x24), _icall_esp); /* indirect call */
    }

loc_00228060: ;
    SET_LO8(ebx, LO8(eax));
    goto loc_00228066;

loc_00228064: ;
    SET_LO8(ebx, 0); /* xor self */

loc_00228066: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0022806D: ;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    ecx = esi;
    if (CMP_NE(eax, 1)) goto loc_002280DC; /* jne: not equal / not zero */

loc_00228074: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x38), _icall_esp); /* indirect call */
    }

loc_00228079: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_00228084: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00228099: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    SET_LO8(ecx, MEM8(esp + 0x13));
    edx = MEM32(esp + 0x1C);
    MEM8(esp + 0xB4) = LO8(eax);
    eax = MEM32(esp + 0x294);
    MEM8(esp + 0xB5) = LO8(ecx);
    MEM32(esp + 0xAC) = edi;
    MEM32(esp + 0xB0) = ebp;
    MEM8(esp + 0xB6) = LO8(ebx);
    MEM32(esp + 0xB8) = edx;
    ecx = esp + 0x28;
    goto loc_0022814B;

loc_002280DC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x38), _icall_esp); /* indirect call */
    }

loc_002280E1: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_002280EC: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    edx = esp + 0xC8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC8) = ecx;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_00228107: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    SET_LO8(ecx, MEM8(esp + 0x13));
    edx = MEM32(esp + 0x1C);
    MEM8(esp + 0x148) = LO8(eax);
    eax = MEM32(esp + 0x298);
    MEM8(esp + 0x149) = LO8(ecx);
    MEM32(esp + 0x140) = edi;
    MEM32(esp + 0x144) = ebp;
    MEM8(esp + 0x14A) = LO8(ebx);
    MEM32(esp + 0x14C) = edx;
    ecx = esp + 0xBC;

loc_0022814B: ;
    PUSH32(esp, 0); sub_0022D760(); /* call 0x0022D760 */

loc_00228150: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(0x849B80));
    ecx++;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0022816E; /* je: equal / zero */

loc_00228162: ;
    eax = ecx;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM8(esp + 0x12) = 1;
    if (CMP_L(eax, 2)) goto loc_00228173; /* jl: less (signed <) */

loc_0022816E: ;
    MEM8(esp + 0x12) = 0;

loc_00228173: ;
    eax = esp + 0x150;
    PUSH32(esp, 0); sub_00022160(); /* call 0x00022160 */

loc_0022817F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00227F40; /* jne: not equal / not zero */

loc_00228187: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0022818B: ;
    esp = esp + 0x280;
    esp += 4; return; /* ret */

}

/**
 * sub_002281A0
 * Original: 0x002281A0 - 0x00228246 (166 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002281A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002281A0: ;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    eax = MEM32(0x8626A0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    esi = ecx;
    edi = edx;
    if (TEST_Z(eax, eax)) goto loc_002281D7; /* je: equal / zero */

loc_002281B6: ;
    ecx = MEM32(0x8626A4);
    ecx = ecx - eax;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00228201; /* jne: not equal / not zero */

loc_002281D7: ;
    eax = MEM32(0x8626B0);
    if (TEST_Z(eax, eax)) { sub_00228246(); return; } /* je: equal / zero */

loc_002281E0: ;
    ecx = MEM32(0x8626B4);
    ecx = ecx - eax;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    MEM32(esp + 0x14) = ecx;
    if ((ecx == 0)) { sub_00228246(); return; } /* je: equal / zero */

loc_00228201: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00228246(); return; } /* jne: not equal / not zero */

loc_0022820A: ;
    SET_LO8(eax, MEM8(esp + 0x6C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00228246(); return; } /* je: equal / zero */

loc_00228212: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00228218: ;
    edx = 0x5F7554;
    PUSH32(esp, 0); sub_00344E20(); /* call 0x00344E20 */

loc_00228222: ;
    PUSH32(esp, 0x86269C);
    eax = edi;
    PUSH32(esp, 0); sub_0022D5B0(); /* call 0x0022D5B0 */

loc_0022822E: ;
    PUSH32(esp, 0x8626AC);
    eax = esi;
    PUSH32(esp, 0); sub_0022D5B0(); /* call 0x0022D5B0 */

loc_0022823A: ;
    edx = MEM32(0x862CC0);
    MEM32(esp + 0x10) = edx;
    g_seh_ebp = ebp; sub_00228256(); return; /* tail jmp 0x00228256 */

}

/**
 * sub_00228440
 * Original: 0x00228440 - 0x0022846F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00228440: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = esp + 8;
    PUSH32(esp, 0); sub_00075D90(); /* call 0x00075D90 */

loc_0022844C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    esp = esp + 4;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_A(ecx, 4)) { sub_0022846F(); return; } /* ja: above (unsigned >) */

loc_0022845C: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x2284D0)); return; /* indirect tail jmp */

    eax = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_00228471(); return; /* tail jmp 0x00228471 */

    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; sub_00228471(); return; /* tail jmp 0x00228471 */

}

/**
 * sub_002284F0
 * Original: 0x002284F0 - 0x00228798 (680 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002284F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002284F0: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xA4));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046FCAB(); /* call 0x0046FCAB */

loc_00228514: ;
    edx = MEM32(esp + 0xB4);
    PUSH32(esp, 0xA);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046FCAB(); /* call 0x0046FCAB */

loc_00228528: ;
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    ecx = 0; /* xor self */
    xmm0 = MEMF(0x64AB18); /* movss */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEM8(0x807664) = 0xFF;
    PUSH32(esp, 0);
    MEM32(esp + 0x28) = ecx;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = 0; /* xor self */
    edx = edx + 3;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    MEM32(esp + 0x30) = edx;
    edx = eax + eax * 2;
    SET_LO8(ebx, 0x64);
    MEM8(0x807665) = LO8(ebx);
    MEM8(0x807666) = LO8(ebx);
    edi = esi + edx * 4;
    ecx = ecx + 2;
    MEM32(esp + 0x34) = ecx;
    SET_LO8(ecx, 0xE6);
    MEM8(0x807667) = LO8(ecx);
    MEM8(0x807697) = LO8(ecx);
    xmm0 = MEMF(edi); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_002285CB: ;
    esp = esp + 0x20;
    if (CMP_GE(ebp & ebp, 0)) goto loc_00228650; /* jge: greater or equal (signed >=) */

loc_002285D2: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_002285E7: ;
    xmm1 = MEMF(esi + 4); /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * MEMF(0x648EAC); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    xmm0 = xmm0 + MEMF(0x649030); /* addss */
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    xmm0 = MEMF(0x64ABD8); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F92B4);
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_0022864B: ;
    esp = esp + 0x10;
    SET_LO8(ebx, 0x64);

loc_00228650: ;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x64AB18); /* movss */
    eax = eax + eax * 2;
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEM8(0x807664) = LO8(ebx);
    MEM8(0x807665) = 0xFF;
    MEM8(0x807666) = LO8(ebx);
    xmm0 = MEMF(esi + eax * 4); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648CDC); /* addss */
    edi = esi + eax * 4;
    ecx = esp + 0x60;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_002286BB: ;
    eax = MEM32(esp + 0xB0);
    esp = esp + 8;
    if (CMP_GE(eax & eax, 0)) goto loc_00228745; /* jge: greater or equal (signed >=) */

loc_002286C9: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_002286DE: ;
    xmm1 = MEMF(esi + 4); /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    xmm0 = xmm0 + MEMF(0x649030); /* addss */
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    xmm0 = MEMF(0x64ABD8); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F92B4);
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3E60(); /* call 0x003D3E60 */

loc_00228742: ;
    esp = esp + 0x10;

loc_00228745: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x3E8F5C29);
    edx = eax + eax * 2;
    eax = MEM32(esi + edx * 4);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0x5F567C;
    PUSH32(esp, 0); sub_00228440(); /* call 0x00228440 */

loc_00228768: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x3E8F5C29);
    edx = eax + eax * 2;
    eax = MEM32(esi + edx * 4);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0x5F5658;
    PUSH32(esp, 0); sub_00228440(); /* call 0x00228440 */

loc_0022878B: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_002287A0
 * Original: 0x002287A0 - 0x00228804 (100 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002287A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002287A0: ;
    if (CMP_A(eax, 3)) { sub_00228804(); return; } /* ja: above (unsigned >) */

loc_002287A5: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x228810); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002287ACu) goto loc_002287AC;
    if (_jt == 0x002287B3u) goto loc_002287B3;
    if (_jt == 0x002287C1u) goto loc_002287C1;
    if (_jt == 0x002287DEu) goto loc_002287DE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002287AC: ;
    xmm0 = MEMF(esp + 4); /* movss */
    esp += 4; return; /* ret */

loc_002287B3: ;
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    esp += 4; return; /* ret */

loc_002287C1: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 4); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    esp += 4; return; /* ret */

loc_002287DE: ;
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    esp += 4; return; /* ret */

}

/**
 * sub_002289A0
 * Original: 0x002289A0 - 0x0022A1D0 (6192 bytes, 1126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002289A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002289A0: ;
    esp = esp - 0x264;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    xmm0 = MEMF(0x6493AC); /* movss */
    xmm2 = MEMF(0x648EC8); /* movss */
    xmm5 = MEMF(0x648F08); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x649348); /* movss */
    xmm6 = MEMF(0x649550); /* movss */
    MEMF(esp + 0x10C) = xmm5; /* movss */
    MEMF(esp + 0x11C) = xmm5; /* movss */
    MEMF(esp + 0x17C) = xmm5; /* movss */
    MEMF(esp + 0x18C) = xmm5; /* movss */
    xmm5 = MEMF(0x649020); /* movss */
    MEMF(esp + 0x19C) = xmm5; /* movss */
    xmm5 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x110) = xmm2; /* movss */
    MEMF(esp + 0x120) = xmm2; /* movss */
    MEMF(esp + 0x12C) = xmm3; /* movss */
    xmm3 = MEMF(0x6491EC); /* movss */
    MEMF(esp + 0x130) = xmm2; /* movss */
    MEMF(esp + 0x140) = xmm2; /* movss */
    MEMF(esp + 0x14C) = xmm2; /* movss */
    MEMF(esp + 0x15C) = xmm2; /* movss */
    MEMF(esp + 0x180) = xmm2; /* movss */
    MEMF(esp + 0x190) = xmm2; /* movss */
    MEMF(esp + 0x1A0) = xmm2; /* movss */
    MEMF(esp + 0x1B0) = xmm2; /* movss */
    xmm2 = MEMF(0x649420); /* movss */
    MEMF(esp + 0x1AC) = xmm5; /* movss */
    xmm5 = MEMF(0x64A6FC); /* movss */
    MEMF(esp + 0x13C) = xmm3; /* movss */
    xmm3 = MEMF(0x6490B4); /* movss */
    MEMF(esp + 0x1BC) = xmm2; /* movss */
    MEMF(esp + 0x1CC) = xmm2; /* movss */
    xmm2 = MEMF(0x64A338); /* movss */
    MEMF(esp + 0x1EC) = xmm5; /* movss */
    MEMF(esp + 0x1FC) = xmm5; /* movss */
    xmm5 = MEMF(0x6498C4); /* movss */
    MEMF(esp + 0x114) = xmm4; /* movss */
    MEMF(esp + 0x118) = xmm0; /* movss */
    MEMF(esp + 0x124) = xmm1; /* movss */
    MEMF(esp + 0x128) = xmm0; /* movss */
    MEMF(esp + 0x134) = xmm1; /* movss */
    MEMF(esp + 0x138) = xmm0; /* movss */
    MEMF(esp + 0x144) = xmm4; /* movss */
    MEMF(esp + 0x148) = xmm0; /* movss */
    MEMF(esp + 0x150) = xmm3; /* movss */
    MEMF(esp + 0x154) = xmm4; /* movss */
    MEMF(esp + 0x158) = xmm0; /* movss */
    MEMF(esp + 0x160) = xmm3; /* movss */
    MEMF(esp + 0x164) = xmm1; /* movss */
    MEMF(esp + 0x168) = xmm0; /* movss */
    MEMF(esp + 0x16C) = xmm6; /* movss */
    MEMF(esp + 0x170) = xmm3; /* movss */
    MEMF(esp + 0x174) = xmm1; /* movss */
    MEMF(esp + 0x178) = xmm0; /* movss */
    MEMF(esp + 0x184) = xmm4; /* movss */
    MEMF(esp + 0x188) = xmm0; /* movss */
    MEMF(esp + 0x194) = xmm1; /* movss */
    MEMF(esp + 0x198) = xmm0; /* movss */
    MEMF(esp + 0x1A4) = xmm1; /* movss */
    MEMF(esp + 0x1A8) = xmm0; /* movss */
    MEMF(esp + 0x1B4) = xmm4; /* movss */
    MEMF(esp + 0x1B8) = xmm0; /* movss */
    MEMF(esp + 0x1C0) = xmm3; /* movss */
    MEMF(esp + 0x1C4) = xmm4; /* movss */
    MEMF(esp + 0x1C8) = xmm0; /* movss */
    MEMF(esp + 0x1D0) = xmm3; /* movss */
    MEMF(esp + 0x1D4) = xmm1; /* movss */
    MEMF(esp + 0x1D8) = xmm0; /* movss */
    MEMF(esp + 0x1DC) = xmm2; /* movss */
    MEMF(esp + 0x1E0) = xmm3; /* movss */
    MEMF(esp + 0x1E4) = xmm1; /* movss */
    MEMF(esp + 0x1E8) = xmm0; /* movss */
    MEMF(esp + 0x1F0) = xmm3; /* movss */
    MEMF(esp + 0x1F4) = xmm4; /* movss */
    MEMF(esp + 0x1F8) = xmm0; /* movss */
    MEMF(esp + 0x200) = xmm3; /* movss */
    MEMF(esp + 0x204) = xmm1; /* movss */
    MEMF(esp + 0x208) = xmm0; /* movss */
    xmm6 = MEMF(0x64AA30); /* movss */
    MEMF(esp + 0x21C) = xmm2; /* movss */
    xmm2 = MEMF(0x64A73C); /* movss */
    MEMF(esp + 0x22C) = xmm2; /* movss */
    xmm2 = MEMF(0x64AA2C); /* movss */
    MEMF(esp + 0x20C) = xmm5; /* movss */
    xmm5 = MEMF(0x649C24); /* movss */
    MEMF(esp + 0x220) = xmm3; /* movss */
    MEMF(esp + 0x228) = xmm0; /* movss */
    MEMF(esp + 0x23C) = xmm2; /* movss */
    xmm2 = MEMF(0x64AA28); /* movss */
    MEMF(esp + 0x240) = xmm3; /* movss */
    xmm3 = MEMF(0x64923C); /* movss */
    MEMF(esp + 0x248) = xmm0; /* movss */
    xmm0 = MEMF(0x64A3E0); /* movss */
    SET_LO8(eax, 0); /* xor self */
    MEMF(esp + 0x210) = xmm5; /* movss */
    MEMF(esp + 0x214) = xmm1; /* movss */
    MEMF(esp + 0x218) = xmm6; /* movss */
    MEMF(esp + 0x224) = xmm4; /* movss */
    MEMF(esp + 0x230) = xmm5; /* movss */
    MEMF(esp + 0x234) = xmm1; /* movss */
    MEMF(esp + 0x238) = xmm6; /* movss */
    MEMF(esp + 0x244) = xmm4; /* movss */
    MEMF(esp + 0x24C) = xmm0; /* movss */
    MEMF(esp + 0x250) = xmm2; /* movss */
    MEMF(esp + 0x254) = xmm4; /* movss */
    MEMF(esp + 0x258) = xmm3; /* movss */
    MEMF(esp + 0x25C) = xmm0; /* movss */
    MEMF(esp + 0x260) = xmm2; /* movss */
    MEMF(esp + 0x264) = xmm1; /* movss */
    MEMF(esp + 0x268) = xmm3; /* movss */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_00228D72: ;
    esi = MEM32(eax + 0x20);
    ebx = 0; /* xor self */
    if (CMP_L(esi, ebx)) goto loc_00228DA8; /* jl: less (signed <) */

loc_00228D7B: ;
    edx = MEM32(eax + 4);
    if (CMP_NE(edx, ebx)) goto loc_00228D86; /* jne: not equal / not zero */

loc_00228D82: ;
    eax = 0; /* xor self */
    goto loc_00228D9C;

loc_00228D86: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_00228D9C: ;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    xmm0 = MEMF(0x648D18); /* movss */
    if (CMP_B(esi, eax)) goto loc_00228DAB; /* jb: below (unsigned <) */

loc_00228DA8: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_00228DAB: ;
    eax = MEM32(esp + 0x10C);
    ecx = MEM32(esp + 0x110);
    edx = MEM32(esp + 0x114);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(esp + 0x118);
    PUSH32(esp, ebp);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, edi);
    ecx = esp + 0x6C;
    eax = esp + 0x104;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0x108) = ebx;
    MEM32(esp + 0x10C) = ebx;
    MEM32(esp + 0x110) = ebx;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x7C) = ebx;
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00228E1B: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x130);
    esi = MEM32(esp + 0x124);
    edi = MEM32(esp + 0x128);
    ebp = MEM32(esp + 0x12C);
    MEMF(esp + 0xFC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEM32(esp + 0x78) = ecx;
    ecx = esp + 0x6C;
    eax = esp + 0x104;
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 0x70) = edi;
    MEM32(esp + 0x74) = ebp;
    MEM32(esp + 0x7C) = ebx;
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00228E7D: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(esp + 0x130);
    MEMF(esp + 0xFC) = xmm0; /* movss */
    xmm0 = MEMF(0x64A96C); /* movss */
    ecx = esp + 0x6C;
    eax = esp + 0x104;
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 0x70) = edi;
    MEM32(esp + 0x74) = ebp;
    MEM32(esp + 0x78) = edx;
    MEM32(esp + 0x7C) = ebx;
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00228ECA: ;
    eax = MEM32(esp + 0x114);
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x118);
    edx = MEM32(esp + 0x11C);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0x120);
    MEMF(esp + 0xFC) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x78) = eax;
    ecx = esp + 0x6C;
    eax = esp + 0x104;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x7C) = ebx;
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00228F2C: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(esp + 0x118);
    eax = MEM32(esp + 0x11C);
    xmm0 = MEMF(0x648E84); /* movss */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x120);
    MEMF(esp + 0xFC) = xmm0; /* movss */
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x80) = ebx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = ebx;
    xmm0 = MEMF(0x648CE0); /* movss */
    ecx = esp + 0x30;
    eax = esp + 0x74;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00228F9B: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(esp + 0x130);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A2D4); /* movss */
    ecx = esp + 0x30;
    eax = esp + 0x74;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00228FDF: ;
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x130);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AA24); /* movss */
    MEM32(esp + 0x3C) = eax;
    ecx = esp + 0x30;
    eax = esp + 0x74;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229023: ;
    ecx = MEM32(esp + 0x114);
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x11C);
    edx = MEM32(esp + 0x118);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x120);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    ecx = esp + 0x30;
    eax = esp + 0x74;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_0022907C: ;
    edx = MEM32(esp + 0x114);
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x118);
    ecx = MEM32(esp + 0x11C);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x120);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x30;
    eax = esp + 0xD4;
    MEM32(esp + 0xD0) = ebx;
    MEM32(esp + 0xD8) = ebx;
    MEM32(esp + 0xDC) = ebx;
    MEM32(esp + 0xE0) = ebx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_002290F2: ;
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x130);
    MEMF(esp + 0xCC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x648D10); /* addss */
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    ecx = esp + 0x30;
    eax = esp + 0xD4;
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_0022914B: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x130);
    MEMF(esp + 0xCC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    MEM32(esp + 0x3C) = ecx;
    ecx = esp + 0x30;
    eax = esp + 0xD4;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_002291A4: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(esp + 0x134);
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x13C);
    MEMF(esp + 0xCC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x648CF4); /* addss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x140);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x30;
    eax = esp + 0xD4;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229212: ;
    eax = MEM32(esp + 0x144);
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x148);
    edx = MEM32(esp + 0x14C);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x150);
    MEMF(esp + 0xCC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x648D20); /* addss */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x3C) = eax;
    ecx = esp + 0x30;
    eax = esp + 0xD4;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229280: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x260);
    esi = MEM32(esp + 0x254);
    edi = MEM32(esp + 0x258);
    ebp = MEM32(esp + 0x25C);
    MEMF(esp + 0xCC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x64912C); /* addss */
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0x38;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_002292FB: ;
    edx = MEM32(esp + 0x264);
    eax = MEM32(esp + 0x268);
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x26C);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    edx = MEM32(esp + 0x270);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x649030); /* addss */
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0x38;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_0022935A: ;
    eax = MEM32(esp + 0x264);
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x268);
    edx = MEM32(esp + 0x26C);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x270);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = eax;
    ecx = esp + 0x14;
    eax = esp + 0x38;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_002293C2: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x260);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x649004); /* addss */
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0x38;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229412: ;
    edx = MEM32(esp + 0x154);
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x158);
    ecx = MEM32(esp + 0x15C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x160);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0x9C;
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0xA0) = ebx;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229488: ;
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x170);
    esi = MEM32(esp + 0x164);
    edi = MEM32(esp + 0x168);
    ebp = MEM32(esp + 0x16C);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    MEM32(esp + 0x20) = eax;
    ecx = esp + 0x14;
    eax = esp + 0x9C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_002294E8: ;
    xmm0 = MEMF(0x648E84); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    ecx = MEM32(esp + 0x170);
    xmm0 = MEMF(esp + 0x90); /* movss */
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0x9C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = 3;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229537: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(esp + 0x180);
    esi = MEM32(esp + 0x174);
    edi = MEM32(esp + 0x178);
    ebp = MEM32(esp + 0x17C);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    ecx = esp + 0x14;
    eax = esp + 0x9C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229597: ;
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x180);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x6490F4); /* addss */
    MEM32(esp + 0x20) = eax;
    ecx = esp + 0x14;
    eax = esp + 0x9C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_002295F0: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x220);
    esi = MEM32(esp + 0x214);
    edi = MEM32(esp + 0x218);
    ebp = MEM32(esp + 0x21C);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x649278); /* addss */
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0x9C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_0022965E: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(esp + 0x220);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    ecx = esp + 0x14;
    eax = esp + 0x9C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = 3;
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_002296BB: ;
    esi = MEM32(esp + 0x234);
    edi = MEM32(esp + 0x238);
    xmm0 = MEMF(0x648E84); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    eax = MEM32(esp + 0x240);
    ebp = MEM32(esp + 0x23C);
    xmm0 = MEMF(esp + 0x8C); /* movss */
    MEM32(esp + 0x20) = eax;
    ecx = esp + 0x14;
    eax = esp + 0x9C;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_0022971B: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x240);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xAC); /* movss */
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0x9C;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229766: ;
    edx = MEM32(esp + 0x244);
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x248);
    ecx = MEM32(esp + 0x24C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x250);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0x9C;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_002297C3: ;
    eax = MEM32(esp + 0x184);
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x188);
    edx = MEM32(esp + 0x18C);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x190);
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC8); /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = eax;
    ecx = esp + 0x14;
    eax = esp + 0xEC;
    MEM32(esp + 0xE8) = ebx;
    MEM32(esp + 0xF0) = ebx;
    MEM32(esp + 0xF4) = ebx;
    MEM32(esp + 0xF8) = ebx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_0022983F: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x1A0);
    esi = MEM32(esp + 0x194);
    edi = MEM32(esp + 0x198);
    ebp = MEM32(esp + 0x19C);
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x6492E4); /* addss */
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0xEC;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_002298AA: ;
    xmm0 = MEMF(0x648E84); /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    edx = MEM32(esp + 0x1A0);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    ecx = esp + 0x14;
    eax = esp + 0xEC;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229903: ;
    eax = MEM32(esp + 0x1A4);
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x1A8);
    edx = MEM32(esp + 0x1AC);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x1B0);
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x64A2C0); /* addss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = eax;
    ecx = esp + 0x14;
    eax = esp + 0xEC;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229971: ;
    ecx = MEM32(esp + 0x1B4);
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x1BC);
    edx = MEM32(esp + 0x1B8);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x1C0);
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0xEC;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_002299D1: ;
    edx = MEM32(esp + 0x1C4);
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x1C8);
    ecx = MEM32(esp + 0x1CC);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x1D0);
    MEMF(esp + 0xE4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC8); /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0xB8;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xBC) = ebx;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229A4D: ;
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x1E0);
    esi = MEM32(esp + 0x1D4);
    edi = MEM32(esp + 0x1D8);
    ebp = MEM32(esp + 0x1DC);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(esp + 0x20) = eax;
    ecx = esp + 0x14;
    eax = esp + 0xB8;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229AAA: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = MEM32(esp + 0x1E0);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x8C); /* movss */
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0xB8;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = 3;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229AF9: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(esp + 0x1F0);
    esi = MEM32(esp + 0x1E4);
    edi = MEM32(esp + 0x1E8);
    ebp = MEM32(esp + 0x1EC);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xAC); /* movss */
    ecx = esp + 0x14;
    eax = esp + 0xB8;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229B59: ;
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x1F0);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    MEM32(esp + 0x20) = eax;
    ecx = esp + 0x14;
    eax = esp + 0xB8;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229BA4: ;
    ecx = MEM32(esp + 0x224);
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x22C);
    edx = MEM32(esp + 0x228);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x230);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x14;
    eax = esp + 0xB8;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229C04: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(esp + 0x200);
    esi = MEM32(esp + 0x1F4);
    edi = MEM32(esp + 0x1F8);
    ebp = MEM32(esp + 0x1FC);
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x8C); /* movss */
    ecx = esp + 0x48;
    eax = esp + 0x1C;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = ebx;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229C71: ;
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x204);
    MEMF(esp + 0x14) = xmm0; /* movss */
    ecx = MEM32(esp + 0x208);
    edx = MEM32(esp + 0x20C);
    xmm0 = MEMF(esp + 0x88); /* movss */
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x210);
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x54) = eax;
    ecx = esp + 0x48;
    eax = esp + 0x1C;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x58) = ebx;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229CCB: ;
    ecx = MEM32(esp + 0x204);
    xmm0 = MEMF(0x648E84); /* movss */
    eax = MEM32(esp + 0x20C);
    edx = MEM32(esp + 0x208);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x210);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ecx;
    ecx = esp + 0x48;
    eax = esp + 0x1C;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x58) = ebx;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229D25: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(esp + 0x200);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    ecx = esp + 0x48;
    eax = esp + 0x1C;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = ebx;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CD5F0(); /* call 0x001CD5F0 */

loc_00229D6A: ;
    xmm0 = MEMF(0x648E84); /* movss */
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F9C64;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00229D84: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = esp + 0x50;
    esi = eax;
    eax = MEM32(esp + 0xD0);
    PUSH32(esp, ecx);
    ecx = esp + 0xD8;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_00229DB0: ;
    edi = MEM32(esp + 0x278);
    ecx = esp + 0x48;
    eax = edi;
    MEM8(esp + 0x60) = LO8(ebx);
    MEM32(esp + 0x64) = esi;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0); sub_0022DB40(); /* call 0x0022DB40 */

loc_00229DCE: ;
    eax = MEM32(esp + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_00229DE7; /* je: equal / zero */

loc_00229DD6: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00229DE4: ;
    esp = esp + 4;

loc_00229DE7: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F9C58;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00229DF3: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = esp + 0x50;
    esi = eax;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_00229E19: ;
    ecx = esp + 0x48;
    eax = edi;
    MEM8(esp + 0x60) = 1;
    MEM32(esp + 0x64) = esi;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0); sub_0022DB40(); /* call 0x0022DB40 */

loc_00229E31: ;
    eax = MEM32(esp + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_00229E4A; /* je: equal / zero */

loc_00229E39: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00229E47: ;
    esp = esp + 4;

loc_00229E4A: ;
    eax = MEM32(esp + 0x98);
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esp + 0xA0;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_00229E74: ;
    ecx = esp + 0x48;
    eax = edi;
    MEM8(esp + 0x60) = 1;
    MEM32(esp + 0x64) = 0x6BD6C8;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0); sub_0022DB40(); /* call 0x0022DB40 */

loc_00229E90: ;
    eax = MEM32(esp + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_00229EA9; /* je: equal / zero */

loc_00229E98: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00229EA6: ;
    esp = esp + 4;

loc_00229EA9: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F9C3C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00229EB5: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = esp + 0x50;
    esi = eax;
    eax = MEM32(esp + 0xE8);
    PUSH32(esp, ecx);
    ecx = esp + 0xF0;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_00229EE1: ;
    ecx = esp + 0x48;
    eax = edi;
    MEM8(esp + 0x60) = LO8(ebx);
    MEM32(esp + 0x64) = esi;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0); sub_0022DB40(); /* call 0x0022DB40 */

loc_00229EF8: ;
    eax = MEM32(esp + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_00229F11; /* je: equal / zero */

loc_00229F00: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00229F0E: ;
    esp = esp + 4;

loc_00229F11: ;
    eax = MEM32(esp + 0xB4);
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esp + 0xBC;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_00229F3B: ;
    ecx = esp + 0x48;
    eax = edi;
    MEM8(esp + 0x60) = 1;
    MEM32(esp + 0x64) = 0x6BD6A8;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0); sub_0022DB40(); /* call 0x0022DB40 */

loc_00229F57: ;
    eax = MEM32(esp + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_00229F70; /* je: equal / zero */

loc_00229F5F: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00229F6D: ;
    esp = esp + 4;

loc_00229F70: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F9C30;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_00229F7C: ;
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = esp + 0x50;
    esi = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_00229FA2: ;
    ecx = esp + 0x48;
    eax = edi;
    MEM8(esp + 0x60) = 1;
    MEM32(esp + 0x64) = esi;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0); sub_0022DB40(); /* call 0x0022DB40 */

loc_00229FBA: ;
    eax = MEM32(esp + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_00229FD3; /* je: equal / zero */

loc_00229FC2: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00229FD0: ;
    esp = esp + 4;

loc_00229FD3: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_00229FDA: ;
    esi = MEM32(eax + 0x20);
    if (CMP_L(esi, ebx)) goto loc_0022A0EF; /* jl: less (signed <) */

loc_00229FE5: ;
    edx = MEM32(eax + 4);
    if (CMP_NE(edx, ebx)) goto loc_00229FF0; /* jne: not equal / not zero */

loc_00229FEC: ;
    eax = 0; /* xor self */
    goto loc_0022A006;

loc_00229FF0: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0022A006: ;
    if (CMP_AE(esi, eax)) goto loc_0022A0EF; /* jae: above or equal (unsigned >=) */

loc_0022A00E: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0022A015: ;
    esi = eax;
    PUSH32(esp, 0); sub_001C75D0(); /* call 0x001C75D0 */

loc_0022A01C: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = 0x5F9CA8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0022A02A; /* jne: not equal / not zero */

loc_0022A025: ;
    esi = 0x5F9C7C;

loc_0022A02A: ;
    eax = MEM32(esp + 0x100);
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esp + 0x108;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_0022A054: ;
    ecx = esp + 0x48;
    eax = edi;
    MEM8(esp + 0x60) = LO8(ebx);
    MEM32(esp + 0x64) = esi;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0); sub_0022DB40(); /* call 0x0022DB40 */

loc_0022A06B: ;
    eax = MEM32(esp + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_0022A084; /* je: equal / zero */

loc_0022A073: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A081: ;
    esp = esp + 4;

loc_0022A084: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_0022A08B: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 4);
    xmm0 = MEMF(0x648E84); /* movss */
    ecx = ecx + ecx * 2;
    esi = MEM32(edx + ecx * 8 + 0xC);
    eax = edx + ecx * 8;
    eax = MEM32(esp + 0x70);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esp + 0x78;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_0022A0BF: ;
    ecx = esp + 0x48;
    eax = edi;
    MEM8(esp + 0x60) = LO8(ebx);
    MEM32(esp + 0x64) = esi;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0); sub_0022DB40(); /* call 0x0022DB40 */

loc_0022A0D6: ;
    eax = MEM32(esp + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_0022A0EF; /* je: equal / zero */

loc_0022A0DE: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A0EC: ;
    esp = esp + 4;

loc_0022A0EF: ;
    eax = MEM32(esp + 0x20);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(eax, ebx)) goto loc_0022A10A; /* je: equal / zero */

loc_0022A0F9: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A107: ;
    esp = esp + 4;

loc_0022A10A: ;
    eax = MEM32(esp + 0xB4);
    if (CMP_EQ(eax, ebx)) goto loc_0022A126; /* je: equal / zero */

loc_0022A115: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A123: ;
    esp = esp + 4;

loc_0022A126: ;
    eax = MEM32(esp + 0xE8);
    if (CMP_EQ(eax, ebx)) goto loc_0022A142; /* je: equal / zero */

loc_0022A131: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A13F: ;
    esp = esp + 4;

loc_0022A142: ;
    eax = MEM32(esp + 0x98);
    if (CMP_EQ(eax, ebx)) goto loc_0022A15E; /* je: equal / zero */

loc_0022A14D: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A15B: ;
    esp = esp + 4;

loc_0022A15E: ;
    eax = MEM32(esp + 0x34);
    if (CMP_EQ(eax, ebx)) goto loc_0022A177; /* je: equal / zero */

loc_0022A166: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A174: ;
    esp = esp + 4;

loc_0022A177: ;
    eax = MEM32(esp + 0xD0);
    if (CMP_EQ(eax, ebx)) goto loc_0022A193; /* je: equal / zero */

loc_0022A182: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A190: ;
    esp = esp + 4;

loc_0022A193: ;
    eax = MEM32(esp + 0x70);
    if (CMP_EQ(eax, ebx)) goto loc_0022A1AC; /* je: equal / zero */

loc_0022A19B: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A1A9: ;
    esp = esp + 4;

loc_0022A1AC: ;
    eax = MEM32(esp + 0x100);
    POP32(esp, esi);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_0022A1C9; /* je: equal / zero */

loc_0022A1B9: ;
    ecx = esp;
    PUSH32(esp, ecx);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A1C6: ;
    esp = esp + 4;

loc_0022A1C9: ;
    esp = esp + 0x264;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A1D0
 * Original: 0x0022A1D0 - 0x0022A23C (108 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A1D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A1D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    esi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0022A236; /* jle: less or equal (signed <=) */

loc_0022A1E8: ;
    PUSH32(esp, ebx);
    ebx = edx;
    PUSH32(esp, edi);
    ebx = ebx + 0x10;
    /* nop */

loc_0022A1F0: ;
    edi = MEM32(ebp + esi * 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edx = edi;
    eax = ebx;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_0022A20A: ;
    eax = MEM32(esp + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_0022A227; /* jne: not equal / not zero */

loc_0022A212: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0022A217: ;
    edx = edi;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_0022A21E: ;
    if (CMP_NE(eax, 1)) goto loc_0022A227; /* jne: not equal / not zero */

loc_0022A223: ;
    MEM32(esp + 0x10) = esi;

loc_0022A227: ;
    eax = MEM32(esp + 0x1C);
    esi++;
    if (CMP_L(esi, eax)) goto loc_0022A1F0; /* jl: less (signed <) */

loc_0022A230: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0022A236: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022A240
 * Original: 0x0022A240 - 0x0022A45B (539 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A240: ;
    esp = esp - 0x21C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x228);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */

loc_0022A253: ;
    esi = MEM32(ebx + 0x75EC50);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    edx = esi;
    eax = ebp + 0x10;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0); sub_003448B0(); /* call 0x003448B0 */

loc_0022A26E: ;
    if (CMP_NE(MEM32(esp + 0x24), edi)) goto loc_0022A383; /* jne: not equal / not zero */

loc_0022A278: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0022A27D: ;
    edx = esi;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_0022A284: ;
    if (CMP_NE(eax, 1)) goto loc_0022A383; /* jne: not equal / not zero */

loc_0022A28D: ;
    ecx = MEM32(ebx + 0x75EC50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F9C18);
    edx = esp + 0x34;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0022A2A8: ;
    esi = MEM32(0x8755F4);
    esp = esp + 0x10;
    if (CMP_NE(esi, edi)) goto loc_0022A2E1; /* jne: not equal / not zero */

loc_0022A2B5: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00043830(); /* call 0x00043830 */

loc_0022A2BC: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, edi)) goto loc_0022A2D9; /* je: equal / zero */

loc_0022A2C5: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 0x5D4FB4;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_0022A2D4: ;
    esp = esp + 8;
    goto loc_0022A2DB;

loc_0022A2D9: ;
    esi = 0; /* xor self */

loc_0022A2DB: ;
    MEM32(0x8755F4) = esi;

loc_0022A2E1: ;
    if (CMP_EQ(MEM16(esp + 0x2C), LO16(edi))) goto loc_0022A30E; /* je: equal / zero */

loc_0022A2E8: ;
    eax = MEM32(esi + 4);
    edi = MEM32(esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F9CB0(); /* call 0x003F9CB0 */

loc_0022A2FD: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edi = 0x5F654C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0022A30E; /* je: equal / zero */

loc_0022A30A: ;
    edi = MEM32(esp + 0x28);

loc_0022A30E: ;
    ecx = MEM32(ebx + 0x6BD648);
    eax = esp + 0x14;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0022A321: ;
    esi = MEM32(ebp + 0x20);
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x648D14); /* movss */
    ebp = ebp + 0x1C;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = 1;
    PUSH32(esp, 0); sub_0022E950(); /* call 0x0022E950 */

loc_0022A349: ;
    ecx = 1;
    edx = ebp;
    edi = eax;
    PUSH32(esp, 0); sub_0022E9F0(); /* call 0x0022E9F0 */

loc_0022A357: ;
    eax = MEM32(esp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = edi;
    if (TEST_Z(eax, eax)) goto loc_0022A37C; /* je: equal / zero */

loc_0022A367: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0022A37C; /* jne: not equal / not zero */

loc_0022A36F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A379: ;
    esp = esp + 4;

loc_0022A37C: ;
    ebp = MEM32(esp + 0x230);

loc_0022A383: ;
    ebx = ebx + 4;
    if (CMP_L(ebx, 0x60)) goto loc_0022A253; /* jl: less (signed <) */

loc_0022A38F: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x75EBF0);
    edx = ebp;
    PUSH32(esp, 0); sub_0022A1D0(); /* call 0x0022A1D0 */

loc_0022A39D: ;
    esi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0022A44E; /* je: equal / zero */

loc_0022A3A8: ;
    if (CMP_LE(esi & esi, 0)) goto loc_0022A44E; /* jle: less or equal (signed <=) */

loc_0022A3B0: ;
    eax = MEM32(0x849800);
    ecx = MEM32(eax + esi * 4 + 0x554);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D4C70);
    edx = esp + 0x34;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0022A3D1: ;
    eax = MEM32(esi * 4 + 0x6BD440);
    MEM32(esp + 0x20) = eax;
    esp = esp + 0x10;
    edi = esp + 0x2C;
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00060900(); /* call 0x00060900 */

loc_0022A3EC: ;
    esi = MEM32(ebp + 0x20);
    edx = MEM32(esi + 4);
    xmm0 = MEMF(0x648CE0); /* movss */
    ebx = ebp + 0x1C;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0); sub_0022E950(); /* call 0x0022E950 */

loc_0022A414: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_0022E9F0(); /* call 0x0022E9F0 */

loc_0022A422: ;
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 4);
    MEM32(eax) = edi;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0022A447; /* je: equal / zero */

loc_0022A432: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_0022A447; /* jne: not equal / not zero */

loc_0022A43A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A444: ;
    esp = esp + 4;

loc_0022A447: ;
    MEM8(0x86E98A) = 1;

loc_0022A44E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x21C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022A460
 * Original: 0x0022A460 - 0x0022A509 (169 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A460(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0022A460: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x10;
    MEM8(edi + 0xC) = 1;
    PUSH32(esp, 0); sub_003446F0(); /* call 0x003446F0 */

loc_0022A46F: ;
    PUSH32(esp, 0); sub_0022E020(); /* call 0x0022E020 */

loc_0022A474: ;
    MEM32(edi + 0x20) = eax;
    eax = 0; /* xor self */
    MEM32(edi + 0x24) = eax;
    ecx = edi + 0x34;
    MEM32(edi + 0x28) = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A487: ;
    MEMF(edi + 0x2C) = (float)fp_top(); fp_pop(); /* fst */
    ecx = edi + 0x40;
    MEMF(edi + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A495: ;
    MEMF(edi + 0x38) = (float)fp_top(); fp_pop(); /* fst */
    ecx = edi + 0x4C;
    MEMF(edi + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A4A3: ;
    MEMF(edi + 0x44) = (float)fp_top(); fp_pop(); /* fst */
    PUSH32(esp, edi);
    MEMF(edi + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0022A4AF: ;
    edx = 0x5F7554;
    PUSH32(esp, 0); sub_00344E20(); /* call 0x00344E20 */

loc_0022A4B9: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0022A4BE: ;
    edx = 0x5F7554;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_0022A4C8: ;
    MEM32(edi + 8) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0022A4D4: ;
    edx = 0x5F9C08;
    PUSH32(esp, 0); sub_00344950(); /* call 0x00344950 */

loc_0022A4DE: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0022A4E3: ;
    ebx = eax;
    if (CMP_EQ(ebx, esi)) goto loc_0022A503; /* je: equal / zero */

loc_0022A4E9: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0022E180(); /* call 0x0022E180 */

loc_0022A4FA: ;
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_00345460(); /* call 0x00345460 */

loc_0022A503: ;
    POP32(esp, esi);
    eax = edi;
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
 * sub_0022A510
 * Original: 0x0022A510 - 0x0022A54D (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A510(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0022A510: ;
    PUSH32(esp, edi);
    edi = esi + 0x40;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A51B: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = edi;
    MEMF(esi + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A52B: ;
    edi = esi + 0x34;
    MEMF(esi + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A538: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = edi;
    MEMF(esi + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A548: ;
    MEMF(esi + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0022A550
 * Original: 0x0022A550 - 0x0022A5B8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A550(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0022A550: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0022A240(); /* call 0x0022A240 */

loc_0022A557: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    MEM32(esi + 0x28) = ecx;
    edi = esi + 0x40;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A569: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = edi;
    MEMF(esi + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A579: ;
    edi = esi + 0x34;
    MEMF(esi + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A586: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = edi;
    MEMF(esi + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A596: ;
    edi = esi + 0x4C;
    MEMF(esi + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A5A3: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = edi;
    MEMF(esi + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A5B3: ;
    MEMF(esi + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0022A5C0
 * Original: 0x0022A5C0 - 0x0022A62F (111 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A5C0(void)
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

loc_0022A5C0: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x5F9BFC);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x6BD6A8);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0022A5DA: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(0x648F98); /* subss */
    xmm0 = xmm0 * MEMF(0x648F94); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0022A608; /* ja: above (unsigned >) */

loc_0022A5FB: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0022A60B; /* jbe: below or equal (unsigned <=) */

loc_0022A608: ;
    xmm0 = xmm1; /* movaps */

loc_0022A60B: ;
    xmm1 = (float)(int32_t)MEM32(esi); /* cvtsi2ss */
    PUSH32(esp, 0xA);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(esi + 4); /* mulss */
    PUSH32(esp, 0x6BD6C8);
    eax = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FCAB(); /* call 0x0046FCAB */

loc_0022A629: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0022A630
 * Original: 0x0022A630 - 0x0022A6C1 (145 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A630(void)
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

loc_0022A630: ;
    PUSH32(esp, edi);
    edi = esi + 0x4C;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A63B: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0022A6BF; /* jae: above or equal (unsigned >=) */

loc_0022A646: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A64D: ;
    fp_push(MEMF(esi + 0x48)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0022A6BF; /* ja: above (unsigned >) */

loc_0022A656: ;
    if (CMP_LE(MEM32(esi), 0)) goto loc_0022A6BF; /* jle: less or equal (signed <=) */

loc_0022A65B: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0022A662: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x50;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x1C);
    if (TEST_NZ(ecx, ecx)) goto loc_0022A6AB; /* jne: not equal / not zero */

loc_0022A671: ;
    edi = esi + 0x4C;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A67C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = edi;
    MEMF(esi + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A68C: ;
    PUSH32(esp, 1);
    MEMF(esi + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00226F40(); /* call 0x00226F40 */

loc_0022A696: ;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0022A69E: ;
    ebx = eax;
    eax = 0x14;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_0022A6AA: ;
    POP32(esp, ebx);

loc_0022A6AB: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0022A6B2: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x50);
    eax = eax + 0x50;
    MEM8(ecx + 0x30) = 1;

loc_0022A6BF: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0022A6D0
 * Original: 0x0022A6D0 - 0x0022A7D2 (258 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A6D0(void)
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

loc_0022A6D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebp + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0022A6E8; /* je: equal / zero */

loc_0022A6DD: ;
    esi = ebp;
    PUSH32(esp, 0); sub_0022A550(); /* call 0x0022A550 */

loc_0022A6E4: ;
    MEM8(ebp + 0xC) = 0;

loc_0022A6E8: ;
    eax = MEM32(ebp + 0x28);
    if (CMP_EQ(eax, MEM32(ebp + 0x20))) goto loc_0022A7CD; /* je: equal / zero */

loc_0022A6F4: ;
    esi = ebp + 0x34;
    ecx = esi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A6FE: ;
    fp_push(MEMF(ebp + 0x2C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) goto loc_0022A7B2; /* jae: above or equal (unsigned >=) */

loc_0022A70D: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A714: ;
    fp_push(MEMF(ebp + 0x30)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0022A7B2; /* ja: above (unsigned >) */

loc_0022A721: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0022A728: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x2C);
    eax = eax + 0x2C;
    eax = MEM32(ecx + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_0022A77C; /* jne: not equal / not zero */

loc_0022A738: ;
    eax = MEM32(ebp + 0x28);
    SET_LO8(edx, MEM8(eax + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    MEM8(esp + 0x14) = LO8(edx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0022A75A: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00226F00(); /* call 0x00226F00 */

loc_0022A763: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0022A76E: ;
    ebx = eax;
    eax = 0xB;
    PUSH32(esp, 0); sub_00232BD0(); /* call 0x00232BD0 */

loc_0022A77A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0022A77C: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0022A783: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x2C);
    eax = eax + 0x2C;
    esi = ebp + 0x40;
    ecx = esi;
    MEM8(edx + 0x30) = 1;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A79A: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = esi;
    MEMF(ebp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022A7AA: ;
    POP32(esp, esi);
    MEMF(ebp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0022A7B2: ;
    esi = ebp + 0x38;
    PUSH32(esp, 0); sub_0022D580(); /* call 0x0022D580 */

loc_0022A7BA: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0022A7CD; /* jne: not equal / not zero */

loc_0022A7BE: ;
    esi = ebp;
    PUSH32(esp, 0); sub_0022A510(); /* call 0x0022A510 */

loc_0022A7C5: ;
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(eax);
    MEM32(ebp + 0x28) = ecx;

loc_0022A7CD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0022A7E0
 * Original: 0x0022A7E0 - 0x0022A854 (116 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A7E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A7E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edi + 0x20;
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ebp)) goto loc_0022A801; /* je: equal / zero */

loc_0022A7F0: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A7FE: ;
    esp = esp + 4;

loc_0022A801: ;
    esi = edi + 0x30;
    MEM32(ebx + 4) = ebp;
    MEM32(ebx + 8) = ebp;
    MEM32(ebx + 0xC) = ebp;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebp)) goto loc_0022A825; /* je: equal / zero */

loc_0022A814: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A822: ;
    esp = esp + 4;

loc_0022A825: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = edi + 0x49;
    PUSH32(esp, eax);
    ecx = edi + 0x40;
    PUSH32(esp, ecx);
    eax = edi + 0x44;
    ecx = esi;
    edx = ebx;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0xC) = ebp;
    PUSH32(esp, 0); sub_002281A0(); /* call 0x002281A0 */

loc_0022A847: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edi + 0x48) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022A860
 * Original: 0x0022A860 - 0x0022A8CF (111 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A860: ;
    PUSH32(esp, ecx);
    eax = MEM32(ebx + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx + 0x20;
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebp)) goto loc_0022A881; /* je: equal / zero */

loc_0022A870: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A87E: ;
    esp = esp + 4;

loc_0022A881: ;
    edi = ebx + 0x30;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0xC) = ebp;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, ebp)) goto loc_0022A8A5; /* je: equal / zero */

loc_0022A894: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022A8A2: ;
    esp = esp + 4;

loc_0022A8A5: ;
    PUSH32(esp, 1);
    edx = ebx + 0x49;
    PUSH32(esp, edx);
    ecx = ebx + 0x40;
    PUSH32(esp, ecx);
    eax = ebx + 0x44;
    ecx = edi;
    edx = esi;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0xC) = ebp;
    PUSH32(esp, 0); sub_002281A0(); /* call 0x002281A0 */

loc_0022A8C4: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x48) = LO8(eax);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022A8D0
 * Original: 0x0022A8D0 - 0x0022A8DE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A8D0: ;
    SET_LO8(eax, MEM8(0x776BD8));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0022A8DE(); return; } /* jne: not equal / not zero */

loc_0022A8D9: ;
    MEM8(edi + 0x40) = LO8(eax);
    g_seh_ebp = ebp; sub_0022A8E5(); return; /* tail jmp 0x0022A8E5 */

}

/**
 * sub_0022A960
 * Original: 0x0022A960 - 0x0022AAFE (414 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A960(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022A960: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_0022A97A; /* jne: not equal / not zero */

loc_0022A969: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_0022A97A: ;
    SET_LO8(eax, MEM8(0x8761E8));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0022AAFC; /* jne: not equal / not zero */

loc_0022A98A: ;
    if (CMP_NE(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_0022AAFC; /* jne: not equal / not zero */

loc_0022A997: ;
    if (CMP_EQ(MEM32(0x849B74), ebx)) goto loc_0022A9A4; /* je: equal / zero */

loc_0022A99F: ;
    PUSH32(esp, 0); sub_0022AB00(); /* call 0x0022AB00 */

loc_0022A9A4: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0022A9B1; /* jne: not equal / not zero */

loc_0022A9AC: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0022A9B1: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0022A9FB; /* je: equal / zero */

loc_0022A9D9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x4C)) goto loc_0022A9FB; /* jb: below (unsigned <) */

loc_0022A9E2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0022A9EC: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0022A9F4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0022AA1C; /* jne: not equal / not zero */

loc_0022A9FB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0022AA0D: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0022AA15: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0022AA4E; /* je: equal / zero */

loc_0022AA1C: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x24) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = ebx;
    MEM32(eax + 0x44) = 0xFFFFFFFFu;
    MEM32(0x849B74) = eax;
    goto loc_0022AA54;

loc_0022AA4E: ;
    MEM32(0x849B74) = ebx;

loc_0022AA54: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0022AA61; /* jne: not equal / not zero */

loc_0022AA5C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0022AA61: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0022AAA9; /* je: equal / zero */

loc_0022AA87: ;
    if (CMP_B(MEM32(esi + 0x80), 0x50)) goto loc_0022AAA9; /* jb: below (unsigned <) */

loc_0022AA90: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0022AA9A: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0022AAA2: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0022AACA; /* jne: not equal / not zero */

loc_0022AAA9: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0022AABB: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0022AAC3: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0022AAE7; /* je: equal / zero */

loc_0022AACA: ;
    edi = eax;
    PUSH32(esp, 0); sub_0022A460(); /* call 0x0022A460 */

loc_0022AAD1: ;
    edi = MEM32(0x849B74);
    PUSH32(esp, 1);
    MEM32(0x849B70) = eax;
    PUSH32(esp, 0); sub_0022A7E0(); /* call 0x0022A7E0 */

loc_0022AAE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0022AAE7: ;
    edi = MEM32(0x849B74);
    PUSH32(esp, 1);
    MEM32(0x849B70) = ebx;
    PUSH32(esp, 0); sub_0022A7E0(); /* call 0x0022A7E0 */

loc_0022AAFA: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0022AAFC: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022AB00
 * Original: 0x0022AB00 - 0x0022ABB6 (182 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AB00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022AB00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x849B74);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_0022ABB2; /* je: equal / zero */

loc_0022AB13: ;
    PUSH32(esp, esi);
    esi = edi;
    PUSH32(esp, 0); sub_0022ABC0(); /* call 0x0022ABC0 */

loc_0022AB1B: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022AB29: ;
    eax = MEM32(0x849B70);
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x849B74) = ebx;
    esi = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0022AB53; /* je: equal / zero */

loc_0022AB3D: ;
    PUSH32(esp, 0); sub_0022AC20(); /* call 0x0022AC20 */

loc_0022AB42: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022AB50: ;
    esp = esp + 4;

loc_0022AB53: ;
    eax = MEM32(0x8626A0);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x849B70) = ebx;
    POP32(esp, esi);
    if (CMP_EQ(eax, ebx)) goto loc_0022AB74; /* je: equal / zero */

loc_0022AB63: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022AB71: ;
    esp = esp + 4;

loc_0022AB74: ;
    eax = MEM32(0x8626B0);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x8626A0) = ebx;
    MEM32(0x8626A4) = ebx;
    MEM32(0x8626A8) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_0022ABA0; /* je: equal / zero */

loc_0022AB8F: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022AB9D: ;
    esp = esp + 4;

loc_0022ABA0: ;
    MEM32(0x8626B0) = ebx;
    MEM32(0x8626B4) = ebx;
    MEM32(0x8626B8) = ebx;

loc_0022ABB2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022ABC0
 * Original: 0x0022ABC0 - 0x0022AC18 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022ABC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022ABC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x34);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0022ABDC; /* je: equal / zero */

loc_0022ABCB: ;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022ABD9: ;
    esp = esp + 4;

loc_0022ABDC: ;
    MEM32(edi + 0x34) = esi;
    MEM32(edi + 0x38) = esi;
    MEM32(edi + 0x3C) = esi;
    eax = MEM32(edi + 0x24);
    if (CMP_EQ(eax, esi)) goto loc_0022ABFD; /* je: equal / zero */

loc_0022ABEC: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022ABFA: ;
    esp = esp + 4;

loc_0022ABFD: ;
    MEM32(edi + 0x24) = esi;
    MEM32(edi + 0x28) = esi;
    MEM32(edi + 0x2C) = esi;
    esi = edi + 0x10;
    PUSH32(esp, 0); sub_0022E130(); /* call 0x0022E130 */

loc_0022AC0E: ;
    esi = edi;
    PUSH32(esp, 0); sub_0022DFB0(); /* call 0x0022DFB0 */

loc_0022AC15: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022AC20
 * Original: 0x0022AC20 - 0x0022AC82 (98 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AC20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022AC20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    PUSH32(esp, 0); sub_0022E8A0(); /* call 0x0022E8A0 */

loc_0022AC2E: ;
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0022AC48; /* je: equal / zero */

loc_0022AC3B: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022AC45: ;
    esp = esp + 4;

loc_0022AC48: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    esi = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0022E180(); /* call 0x0022E180 */

loc_0022AC5F: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0022AC77; /* je: equal / zero */

loc_0022AC6A: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022AC74: ;
    esp = esp + 4;

loc_0022AC77: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022AC90
 * Original: 0x0022AC90 - 0x0022AD11 (129 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AC90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022AC90: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    eax = esp + 0xA;
    PUSH32(esp, eax);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    ecx = esp + 0x18;
    edx = esp + 0x28;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0); sub_002281A0(); /* call 0x002281A0 */

loc_0022ACCA: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    esp = esp + 0xC;
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_0022AD11(); return; } /* je: equal / zero */

loc_0022ACD9: ;
    if (CMP_EQ(eax, ebx)) goto loc_0022ACEE; /* je: equal / zero */

loc_0022ACDD: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022ACEB: ;
    esp = esp + 4;

loc_0022ACEE: ;
    eax = MEM32(esp + 0x20);
    if (CMP_EQ(eax, ebx)) goto loc_0022AD07; /* je: equal / zero */

loc_0022ACF6: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022AD04: ;
    esp = esp + 4;

loc_0022AD07: ;
    eax = 2;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AD60
 * Original: 0x0022AD60 - 0x0022B006 (678 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AD60(void)
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

loc_0022AD60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x7C4;
    xmm2 = MEMF(0x849B78); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm0 = MEMF(0x7FA218); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm2 <= xmm1)) goto loc_0022ADCF; /* jbe: below or equal (unsigned <=) */

loc_0022AD87: ;
    xmm2 = xmm2 - xmm0; /* subss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    MEMF(0x849B78) = xmm2; /* movss */
    if ((xmm1 < xmm2)) goto loc_0022ADCF; /* jb: below (unsigned <) */

loc_0022AD98: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0022ADA9: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x5F59F0);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0022ADBA: ;
    xmm0 = MEMF(0x7FA218); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x18;
    MEM8(0x849931) = 1;

loc_0022ADCF: ;
    SET_LO8(eax, MEM8(0x776A00));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEM8(0x8757C0) = LO8(ebx);
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0022AE93; /* je: equal / zero */

loc_0022ADE4: ;
    SET_LO8(ecx, MEM8(0x849B64));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648F8C); /* mulss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0022AE5C; /* je: equal / zero */

loc_0022ADF6: ;
    eax = ZX8(LO8(eax));
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 - xmm0; /* subss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    MEMF(0x849B78) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    if ((xmm1 <= xmm2)) goto loc_0022AE1C; /* jbe: below or equal (unsigned <=) */

loc_0022AE14: ;
    MEMF(esp + 0x24) = xmm1; /* movss */
    goto loc_0022AE2F;

loc_0022AE1C: ;
    xmm0 = MEMF(0x648EEC); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_0022AE2F; /* jbe: below or equal (unsigned <=) */

loc_0022AE29: ;
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_0022AE2F: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0022AE38: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x776A00) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0022AE93; /* jne: not equal / not zero */

loc_0022AE41: ;
    eax = MEM32(0x6BD640);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    MEM8(0x849B64) = 0;
    MEM32(0x6BD640) = ecx;
    goto loc_0022AE93;

loc_0022AE5C: ;
    edx = ZX8(LO8(eax));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_0022AE7F; /* ja: above (unsigned >) */

loc_0022AE72: ;
    xmm1 = MEMF(0x648EEC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0022AE85; /* jbe: below or equal (unsigned <=) */

loc_0022AE7F: ;
    MEMF(esp + 0x24) = xmm1; /* movss */

loc_0022AE85: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0022AE8E: ;
    MEM8(0x776A00) = LO8(eax);

loc_0022AE93: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00536F90(); /* call 0x00536F90 */

loc_0022AE9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537760(); /* call 0x00537760 */

loc_0022AEA0: ;
    eax = esp + 0x110;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x5F9A48);
    MEM32(esp + 0x10C) = ebx;
    MEM32(esp + 0x110) = ebx;
    MEM32(esp + 0x114) = ebx;
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_0022AECA: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    esp = esp + 8;
    if (CMP_B(eax, ecx)) goto loc_0022AEEB; /* jb: below (unsigned <) */

loc_0022AEDC: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0022AEEB: ;
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
    if (CMP_NE(eax, 2)) goto loc_0022AF48; /* jne: not equal / not zero */

loc_0022AF19: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0022AF1E: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0022AF23: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0022AF39; /* jb: below (unsigned <) */

loc_0022AF2A: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0022AF39: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0022AF41: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0022AF46: ;
    MEM32(esi) = eax;

loc_0022AF48: ;
    xmm1 = MEMF(0x7FA218); /* movss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = MEMF(0x75E3F0); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D34); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEMF(0x75E3F0) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0022AF91; /* jbe: below or equal (unsigned <=) */

loc_0022AF81: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x75E3F0) = xmm0; /* movss */

loc_0022AF91: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = ebx;
    MEM32(esp + 0xD4) = ebx;
    MEM32(esp + 0xD8) = ebx;
    MEM32(esp + 0xDC) = ebx;
    MEM32(esp + 0xE4) = 0xFFFFFFFFu;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0022B006(); return; } /* jne: not equal / not zero */

loc_0022AFF7: ;
    PUSH32(esp, ebx);
    edi = esp + 0xA4;
    PUSH32(esp, 0); sub_0022A7E0(); /* call 0x0022A7E0 */

loc_0022B004: ;
    g_seh_ebp = ebp; sub_0022B037(); return; /* tail jmp 0x0022B037 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0022CB00
 * Original: 0x0022CB00 - 0x0022CB47 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CB00(void)
{

loc_0022CB00: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0022D9A0(); /* call 0x0022D9A0 */

loc_0022CB08: ;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    eax = esi + 0x10;
    PUSH32(esp, 0); sub_0022DBC0(); /* call 0x0022DBC0 */

loc_0022CB14: ;
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    eax = esi + 0x20;
    PUSH32(esp, 0); sub_0022D5B0(); /* call 0x0022D5B0 */

loc_0022CB20: ;
    edx = edi + 0x30;
    PUSH32(esp, edx);
    eax = esi + 0x30;
    PUSH32(esp, 0); sub_0022D5B0(); /* call 0x0022D5B0 */

loc_0022CB2C: ;
    SET_LO8(eax, MEM8(edi + 0x40));
    MEM8(esi + 0x40) = LO8(eax);
    ecx = MEM32(edi + 0x44);
    MEM32(esi + 0x44) = ecx;
    SET_LO8(edx, MEM8(edi + 0x48));
    MEM8(esi + 0x48) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x49));
    MEM8(esi + 0x49) = LO8(eax);
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_0022CB50
 * Original: 0x0022CB50 - 0x0022CB96 (70 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CB50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022CB50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    SET_LO8(ecx, MEM8(0x87B354));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_0022CB92; /* jne: not equal / not zero */

loc_0022CB68: ;
    ecx = MEM32(0x87B354);
    ecx = ecx | eax;
    eax = esp;
    MEM32(0x87B354) = ecx;
    MEM32(0x87B348) = eax;
    MEM32(0x87B34C) = 4;
    MEM32(0x87B350) = 0;

loc_0022CB92: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0022CBA0
 * Original: 0x0022CBA0 - 0x0022CBEB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CBA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022CBA0: ;
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

loc_0022CBBA: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0022CBC1: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0022CBCC: ;
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0022CBD8: ;
    SET_LO8(eax, MEM8(0x75C22C));
    edi = edi | 0xFFFFFFFFu;
    if (CMP_A(LO8(eax) & LO8(eax), 0)) { sub_0022CBEB(); return; } /* ja: above (unsigned >) */

loc_0022CBE4: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0022CC78(); return; /* tail jmp 0x0022CC78 */

}

/**
 * sub_0022D2D0
 * Original: 0x0022D2D0 - 0x0022D4A5 (469 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D2D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0022D2D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ebx, ebx)) goto loc_0022D473; /* je: equal / zero */

loc_0022D2E6: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x5F9A48);
    PUSH32(esp, 0); sub_0020C150(); /* call 0x0020C150 */

loc_0022D2F8: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    esp = esp + 8;
    if (CMP_B(eax, ecx)) goto loc_0022D319; /* jb: below (unsigned <) */

loc_0022D30A: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0022D319: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = 0;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = 0;
    if (CMP_NE(eax, 2)) goto loc_0022D37E; /* jne: not equal / not zero */

loc_0022D34F: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0022D354: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0022D359: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0022D36F; /* jb: below (unsigned <) */

loc_0022D360: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0022D36F: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0022D377: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0022D37C: ;
    MEM32(esi) = eax;

loc_0022D37E: ;
    eax = MEM32(ebp + 0x10);
    eax = eax - 0;
    esi = MEM32(0x84B868);
    if ((eax == 0)) { sub_0022D4A5(); return; } /* je: equal / zero */

loc_0022D390: ;
    eax--;
    if ((eax == 0)) goto loc_0022D479; /* je: equal / zero */

loc_0022D397: ;
    eax--;
    if ((eax != 0)) goto loc_0022D3C0; /* jne: not equal / not zero */

loc_0022D39A: ;
    eax = MEM32(0x75E344);
    ecx = MEM32(0x75E348);
    edx = MEM32(0x75E33C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x75E340);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;

loc_0022D3C0: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm3 = MEMF(0x7FA218); /* movss */
    xmm3 = xmm3 * MEMF(0x648D10); /* mulss */
    xmm0 = MEMF(0x75E338); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm3 = MEMF(0x648D34); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm3 = MEMF(0x648D14); /* movss */
    MEMF(0x75E338) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_0022D410; /* jbe: below or equal (unsigned <=) */

loc_0022D405: ;
    xmm0 = xmm3; /* movaps */
    MEMF(0x75E338) = xmm0; /* movss */

loc_0022D410: ;
    ecx = esp + 0xC;
    eax = ebx;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_0022D423: ;
    edx = MEM32(esp + 0xC);
    xmm2 = xmm2 + MEMF(esp + 0x10); /* addss */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    esp = esp - 0xC;
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 / xmm3; /* divss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp) = xmm2; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0022CBA0(); /* call 0x0022CBA0 */

loc_0022D470: ;
    esp = esp + 0x20;

loc_0022D473: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0022D479: ;
    ecx = MEM32(0x75E354);
    edx = MEM32(0x75E358);
    eax = MEM32(0x75E34C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x75E350);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    goto loc_0022D3C0;

}

/**
 * sub_0022D4E0
 * Original: 0x0022D4E0 - 0x0022D529 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D4E0(void)
{
    float xmm0;

loc_0022D4E0: ;
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x5F9B7C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_0022D4ED: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0x84CDE0);
    esi = eax;
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0022D500: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84CA48);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0022D50D: ;
    xmm0 = MEMF(0x648D20); /* movss */
    esp = esp + 0x18;
    MEM8(0x849931) = 1;
    MEMF(0x849B78) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022D530
 * Original: 0x0022D530 - 0x0022D57F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D530(void)
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

loc_0022D530: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(0x849B70);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0022A5C0(); /* call 0x0022A5C0 */

loc_0022D54B: ;
    eax = MEM32(0x849B74);
    esi = MEM32(eax + 4);
    if (CMP_EQ(esi, MEM32(eax + 8))) goto loc_0022D57D; /* je: equal / zero */

loc_0022D558: ;
    goto loc_0022D560;

    /* nop */

loc_0022D560: ;
    xmm0 = MEMF(esp + 8); /* movss */
    eax = esi;
    PUSH32(esp, 0); sub_00228820(); /* call 0x00228820 */

loc_0022D56D: ;
    ecx = MEM32(0x849B74);
    eax = MEM32(ecx + 8);
    esi = esi + 0x24;
    if (CMP_NE(esi, eax)) goto loc_0022D560; /* jne: not equal / not zero */

loc_0022D57D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0022D580
 * Original: 0x0022D580 - 0x0022D5A9 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D580(void)
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

loc_0022D580: ;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022D58B: ;
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp >= 0) /* fcompi */) { sub_0022D5A9(); return; } /* jae: above or equal (unsigned >=) */

loc_0022D595: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_0022D59C: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_0022D5A9(); return; } /* ja: above (unsigned >) */

loc_0022D5A5: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0022D5B0
 * Original: 0x0022D5B0 - 0x0022D754 (420 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022D5B0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebp)) goto loc_0022D74D; /* je: equal / zero */

loc_0022D5C0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0022D5E6; /* je: equal / zero */

loc_0022D5CA: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - eax;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    if (CMP_NE(ecx, ebx)) goto loc_0022D60F; /* jne: not equal / not zero */

loc_0022D5E6: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebx)) goto loc_0022D5FE; /* je: equal / zero */

loc_0022D5ED: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022D5FB: ;
    esp = esp + 4;

loc_0022D5FE: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0022D60F: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (CMP_NE(edi, ebx)) goto loc_0022D61B; /* jne: not equal / not zero */

loc_0022D617: ;
    eax = 0; /* xor self */
    goto loc_0022D633;

loc_0022D61B: ;
    ebx = MEM32(esi + 8);
    ebx = ebx - edi;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0022D633: ;
    if (CMP_A(ecx, eax)) goto loc_0022D699; /* ja: above (unsigned >) */

loc_0022D637: ;
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 4);
    eax = edi;
    PUSH32(esp, 0); sub_0022F4D0(); /* call 0x0022F4D0 */

loc_0022D649: ;
    eax = MEM32(ebp + 4);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0022D66A; /* jne: not equal / not zero */

loc_0022D653: ;
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    POP32(esp, edi);
    eax = eax + ecx;
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0022D66A: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - eax;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    POP32(esp, edi);
    eax = eax + ecx;
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0022D699: ;
    if (TEST_NZ(edi, edi)) goto loc_0022D6A1; /* jne: not equal / not zero */

loc_0022D69D: ;
    eax = 0; /* xor self */
    goto loc_0022D6B9;

loc_0022D6A1: ;
    ebx = MEM32(esi + 0xC);
    ebx = ebx - edi;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0022D6B9: ;
    if (CMP_A(ecx, eax)) goto loc_0022D700; /* ja: above (unsigned >) */

loc_0022D6BD: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0022DD50(); /* call 0x0022DD50 */

loc_0022D6C4: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(esp + 0x14);
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x94);
    ebx = ebx + ecx;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0022F4D0(); /* call 0x0022F4D0 */

loc_0022D6DD: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + 8);
    ebp = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0); sub_0022FE20(); /* call 0x0022FE20 */

loc_0022D6F1: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0022D700: ;
    if (TEST_Z(edi, edi)) goto loc_0022D720; /* je: equal / zero */

loc_0022D704: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx - edi;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_0022D720: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0022DD50(); /* call 0x0022DD50 */

loc_0022D727: ;
    PUSH32(esp, 0); sub_0022DDF0(); /* call 0x0022DDF0 */

loc_0022D72C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0022D74B; /* je: equal / zero */

loc_0022D730: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + 8);
    ebp = MEM32(ebp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0022FE20(); /* call 0x0022FE20 */

loc_0022D745: ;
    esp = esp + 0xC;
    MEM32(esi + 8) = eax;

loc_0022D74B: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0022D74D: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022D760
 * Original: 0x0022D760 - 0x0022D772 (18 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022D760: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebp = MEM32(edi + 4);
    if (TEST_NZ(ebp, ebp)) { sub_0022D772(); return; } /* jne: not equal / not zero */

loc_0022D76E: ;
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0022D78A(); return; /* tail jmp 0x0022D78A */

}

/**
 * sub_0022D7F0
 * Original: 0x0022D7F0 - 0x0022D861 (113 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D7F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0022D7F0: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0022D85E; /* je: equal / zero */

loc_0022D7F7: ;
    ecx = MEM32(esi + 0x10);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_B(eax, 2)) goto loc_0022D85E; /* jb: below (unsigned <) */

loc_0022D812: ;
    xmm1 = MEMF(esi); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0022D821; /* jbe: below or equal (unsigned <=) */

loc_0022D81B: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = eax;

loc_0022D821: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esi) = xmm0; /* movss */
    if (CMP_EQ(ecx, eax)) goto loc_0022D845; /* je: equal / zero */

loc_0022D82F: ;
    /* nop */

loc_0022D830: ;
    xmm1 = MEMF(ecx + 0x14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_0022D841; /* jae: above or equal (unsigned >=) */

loc_0022D83A: ;
    ecx = ecx + 0x18;
    if (CMP_NE(ecx, eax)) goto loc_0022D830; /* jne: not equal / not zero */

loc_0022D841: ;
    if (CMP_NE(ecx, eax)) { sub_0022D861(); return; } /* jne: not equal / not zero */

loc_0022D845: ;
    eax = eax + 0xFFFFFFE8u;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;

loc_0022D85E: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0022D8F0
 * Original: 0x0022D8F0 - 0x0022D980 (144 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D8F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022D8F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F970);
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
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_0022D933; /* je: equal / zero */

loc_0022D91D: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0022D933: ;
    PUSH32(esp, 0); sub_0022DE60(); /* call 0x0022DE60 */

loc_0022D938: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0022D964; /* je: equal / zero */

loc_0022D93C: ;
    MEM32(ebp + -4) = 0;
    eax = MEM32(edi + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = eax;
    edi = MEM32(edi + 4);
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -32) = edi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edx = MEM32(esi + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_0022F060(); /* call 0x0022F060 */

loc_0022D961: ;
    MEM32(esi + 8) = eax;

loc_0022D964: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022D9A0
 * Original: 0x0022D9A0 - 0x0022DB36 (406 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022D9A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_0022DB2F; /* je: equal / zero */

loc_0022D9B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    if (TEST_Z(ebp, ebp)) goto loc_0022D9D3; /* je: equal / zero */

loc_0022D9B9: ;
    ebx = MEM32(eax + 8);
    ecx = ebx;
    ecx = ecx - ebp;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    if ((ecx != 0)) goto loc_0022D9E1; /* jne: not equal / not zero */

loc_0022D9D3: ;
    PUSH32(esp, 0); sub_0022DFB0(); /* call 0x0022DFB0 */

loc_0022D9D8: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0022D9E1: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) goto loc_0022D9ED; /* jne: not equal / not zero */

loc_0022D9E9: ;
    eax = 0; /* xor self */
    goto loc_0022DA03;

loc_0022D9ED: ;
    edx = MEM32(esi + 8);
    edx = edx - edi;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0022DA03: ;
    if (CMP_A(ecx, eax)) goto loc_0022DA73; /* ja: above (unsigned >) */

loc_0022DA07: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0022F500(); /* call 0x0022F500 */

loc_0022DA15: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0022F610(); /* call 0x0022F610 */

loc_0022DA23: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx + 4);
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0022DA47; /* jne: not equal / not zero */

loc_0022DA31: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = eax + eax * 8;
    POP32(esp, ebp);
    edx = ecx + eax * 4;
    POP32(esp, ebx);
    MEM32(esi + 8) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0022DA47: ;
    ecx = MEM32(ecx + 8);
    ecx = ecx - eax;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    POP32(esp, edi);
    eax = eax + eax * 8;
    POP32(esp, ebp);
    edx = ecx + eax * 4;
    POP32(esp, ebx);
    MEM32(esi + 8) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0022DA73: ;
    if (TEST_NZ(edi, edi)) goto loc_0022DA7B; /* jne: not equal / not zero */

loc_0022DA77: ;
    eax = 0; /* xor self */
    goto loc_0022DA91;

loc_0022DA7B: ;
    edx = MEM32(esi + 0xC);
    edx = edx - edi;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0022DA91: ;
    if (CMP_A(ecx, eax)) goto loc_0022DAD8; /* ja: above (unsigned >) */

loc_0022DA95: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0022DEB0(); /* call 0x0022DEB0 */

loc_0022DA9C: ;
    ecx = MEM32(esp + 0x18);
    eax = eax + eax * 8;
    ebx = ebp + eax * 4;
    PUSH32(esp, ecx);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_0022F500(); /* call 0x0022F500 */

loc_0022DAB1: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx + 8);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0022FF10(); /* call 0x0022FF10 */

loc_0022DAC8: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0022DAD8: ;
    if (TEST_Z(edi, edi)) goto loc_0022DB03; /* je: equal / zero */

loc_0022DADC: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0022DF90(); /* call 0x0022DF90 */

loc_0022DAE6: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esi + 0xC);
    ecx = ecx - edi;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edi;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_0022DB03: ;
    edi = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0); sub_0022DEB0(); /* call 0x0022DEB0 */

loc_0022DB0E: ;
    PUSH32(esp, 0); sub_0022DF40(); /* call 0x0022DF40 */

loc_0022DB13: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0022DB2C; /* je: equal / zero */

loc_0022DB17: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 4);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_0022F080(); /* call 0x0022F080 */

loc_0022DB29: ;
    MEM32(esi + 8) = eax;

loc_0022DB2C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0022DB2F: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022DB40
 * Original: 0x0022DB40 - 0x0022DB51 (17 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DB40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DB40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 4);
    if (TEST_NZ(ebx, ebx)) { sub_0022DB51(); return; } /* jne: not equal / not zero */

loc_0022DB4D: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0022DB67(); return; /* tail jmp 0x0022DB67 */

}

/**
 * sub_0022DBC0
 * Original: 0x0022DBC0 - 0x0022DD50 (400 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DBC0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebp)) goto loc_0022DD49; /* je: equal / zero */

loc_0022DBD0: ;
    eax = MEM32(ebp + 4);
    if (TEST_Z(eax, eax)) goto loc_0022DBF1; /* je: equal / zero */

loc_0022DBD7: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    if ((ecx != 0)) goto loc_0022DBFD; /* jne: not equal / not zero */

loc_0022DBF1: ;
    PUSH32(esp, 0); sub_0022E130(); /* call 0x0022E130 */

loc_0022DBF6: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0022DBFD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) goto loc_0022DC0A; /* jne: not equal / not zero */

loc_0022DC06: ;
    eax = 0; /* xor self */
    goto loc_0022DC22;

loc_0022DC0A: ;
    ebx = MEM32(esi + 8);
    ebx = ebx - edi;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0022DC22: ;
    if (CMP_A(ecx, eax)) goto loc_0022DC90; /* ja: above (unsigned >) */

loc_0022DC26: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0022F550(); /* call 0x0022F550 */

loc_0022DC38: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0022F700(); /* call 0x0022F700 */

loc_0022DC46: ;
    eax = MEM32(ebp + 4);
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0022DC64; /* jne: not equal / not zero */

loc_0022DC50: ;
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    POP32(esp, edi);
    eax = eax + ecx;
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0022DC64: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    POP32(esp, edi);
    eax = eax + ecx;
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0022DC90: ;
    if (TEST_NZ(edi, edi)) goto loc_0022DC98; /* jne: not equal / not zero */

loc_0022DC94: ;
    eax = 0; /* xor self */
    goto loc_0022DCB0;

loc_0022DC98: ;
    ebx = MEM32(esi + 0xC);
    ebx = ebx - edi;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0022DCB0: ;
    if (CMP_A(ecx, eax)) goto loc_0022DCF5; /* ja: above (unsigned >) */

loc_0022DCB4: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000A15E0(); /* call 0x000A15E0 */

loc_0022DCBB: ;
    ecx = MEM32(ebp + 4);
    ebx = eax;
    eax = MEM32(esp + 0x14);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1C);
    PUSH32(esp, eax);
    ebx = ebx + ecx;
    eax = edi;
    PUSH32(esp, 0); sub_0022F550(); /* call 0x0022F550 */

loc_0022DCD1: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + 8);
    ebp = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0); sub_0022FFA0(); /* call 0x0022FFA0 */

loc_0022DCE6: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0022DCF5: ;
    if (TEST_Z(edi, edi)) goto loc_0022DD22; /* je: equal / zero */

loc_0022DCF9: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0022E110(); /* call 0x0022E110 */

loc_0022DD03: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esi + 0xC);
    ecx = ecx - edi;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_0022DD22: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_000A15E0(); /* call 0x000A15E0 */

loc_0022DD29: ;
    PUSH32(esp, 0); sub_0022E0C0(); /* call 0x0022E0C0 */

loc_0022DD2E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0022DD47; /* je: equal / zero */

loc_0022DD32: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0022F0A0(); /* call 0x0022F0A0 */

loc_0022DD44: ;
    MEM32(esi + 8) = eax;

loc_0022DD47: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0022DD49: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022DD50
 * Original: 0x0022DD50 - 0x0022DD58 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DD50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022DD50: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_0022DD58(); return; } /* jne: not equal / not zero */

loc_0022DD57: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022DD80
 * Original: 0x0022DD80 - 0x0022DDB4 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DD80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0022DDB0; /* je: equal / zero */

loc_0022DD92: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_0022DDB4(); return; } /* jne: not equal / not zero */

loc_0022DDB0: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0022DDCB(); return; /* tail jmp 0x0022DDCB */

}

/**
 * sub_0022DDF0
 * Original: 0x0022DDF0 - 0x0022DE06 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DDF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022DDF0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(edi, eax)) { sub_0022DE06(); return; } /* jne: not equal / not zero */

loc_0022DE02: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022DE40
 * Original: 0x0022DE40 - 0x0022DE5C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DE40(void)
{

loc_0022DE40: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0022F590(); /* call 0x0022F590 */

loc_0022DE4C: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    eax = eax + edi;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022DE60
 * Original: 0x0022DE60 - 0x0022DE72 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DE60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022DE60: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    if (CMP_NE(eax, ecx)) { sub_0022DE72(); return; } /* jne: not equal / not zero */

loc_0022DE6F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0022DEB0
 * Original: 0x0022DEB0 - 0x0022DEB8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DEB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022DEB0: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_0022DEB8(); return; } /* jne: not equal / not zero */

loc_0022DEB7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022DED0
 * Original: 0x0022DED0 - 0x0022DF02 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DED0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0022DEFE; /* je: equal / zero */

loc_0022DEE2: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_0022DF02(); return; } /* jne: not equal / not zero */

loc_0022DEFE: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0022DF17(); return; /* tail jmp 0x0022DF17 */

}

/**
 * sub_0022DF40
 * Original: 0x0022DF40 - 0x0022DF52 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DF40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022DF40: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    if (CMP_NE(eax, ecx)) { sub_0022DF52(); return; } /* jne: not equal / not zero */

loc_0022DF4F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0022DF90
 * Original: 0x0022DF90 - 0x0022DFA5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DF90(void)
{

loc_0022DF90: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0022F610(); /* call 0x0022F610 */

loc_0022DF9F: ;
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022DFB0
 * Original: 0x0022DFB0 - 0x0022DFF5 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DFB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022DFB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0022DFDE; /* je: equal / zero */

loc_0022DFB8: ;
    ecx = MEM32(esp);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0022F610(); /* call 0x0022F610 */

loc_0022DFC5: ;
    eax = MEM32(esi + 4);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_0022DFDE; /* je: equal / zero */

loc_0022DFD2: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022DFDB: ;
    esp = esp + 4;

loc_0022DFDE: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022E000
 * Original: 0x0022E000 - 0x0022E01D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E000(void)
{

loc_0022E000: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0022F670(); /* call 0x0022F670 */

loc_0022E011: ;
    edx = esi + esi * 8;
    esp = esp + 0x10;
    eax = edi + edx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022E020
 * Original: 0x0022E020 - 0x0022E09B (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022E020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F620);
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
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0022E054: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    if (TEST_Z(eax, eax)) goto loc_0022E06D; /* je: equal / zero */

loc_0022E06B: ;
    MEM32(eax) = eax;

loc_0022E06D: ;
    MEM32(ebp + -36) = 1;
    ecx = eax + 4;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -44) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0022E083; /* je: equal / zero */

loc_0022E081: ;
    MEM32(ecx) = eax;

loc_0022E083: ;
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
 * sub_0022E0C0
 * Original: 0x0022E0C0 - 0x0022E0D6 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022E0C0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(edi, eax)) { sub_0022E0D6(); return; } /* jne: not equal / not zero */

loc_0022E0D2: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022E110
 * Original: 0x0022E110 - 0x0022E125 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E110(void)
{

loc_0022E110: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0022F700(); /* call 0x0022F700 */

loc_0022E11F: ;
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022E130
 * Original: 0x0022E130 - 0x0022E175 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E130(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022E130: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0022E15E; /* je: equal / zero */

loc_0022E138: ;
    ecx = MEM32(esp);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0022F700(); /* call 0x0022F700 */

loc_0022E145: ;
    eax = MEM32(esi + 4);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_0022E15E; /* je: equal / zero */

loc_0022E152: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022E15B: ;
    esp = esp + 4;

loc_0022E15E: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022E180
 * Original: 0x0022E180 - 0x0022E1CB (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022E180: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, MEM32(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(eax, MEM32(ecx))) { sub_0022E1CB(); return; } /* jne: not equal / not zero */

loc_0022E195: ;
    if (CMP_NE(ebx, ecx)) { sub_0022E1CB(); return; } /* jne: not equal / not zero */

loc_0022E199: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0022EDE0(); /* call 0x0022EDE0 */

loc_0022E1A4: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    MEM32(ebp) = edx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022E200
 * Original: 0x0022E200 - 0x0022E23E (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022E200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F960);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0xBC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    esi = edx;
    eax = ebp + -200;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022E233: ;
    edi = MEM32(ebx + 4);
    if (TEST_NZ(edi, edi)) { sub_0022E23E(); return; } /* jne: not equal / not zero */

loc_0022E23A: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0022E256(); return; /* tail jmp 0x0022E256 */

}

/**
 * sub_0022E4D0
 * Original: 0x0022E4D0 - 0x0022E502 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022E4D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_0022E4FE; /* je: equal / zero */

loc_0022E4E2: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_0022E502(); return; } /* jne: not equal / not zero */

loc_0022E4FE: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0022E517(); return; /* tail jmp 0x0022E517 */

}

/**
 * sub_0022E540
 * Original: 0x0022E540 - 0x0022E55D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E540(void)
{

loc_0022E540: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0022F790(); /* call 0x0022F790 */

loc_0022E551: ;
    edx = esi + esi * 2;
    esp = esp + 0x10;
    eax = edi + edx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022E560
 * Original: 0x0022E560 - 0x0022E5BE (94 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0022E560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FE40);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    ebx = MEM32(ebp + 8);
    xmm0 = MEMF(esi); /* movss */
    MEMF(ebp + -96) = xmm0; /* movss */
    eax = MEM32(esi + 4);
    MEM32(ebp + -92) = eax;
    ecx = esi + 8;
    edx = ebp + -88;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0022D8F0(); /* call 0x0022D8F0 */

loc_0022E5A1: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    MEM8(ebp + -72) = LO8(eax);
    ecx = MEM32(esi + 0x1C);
    MEM32(ebp + -68) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(ebp + -64) = edx;
    edi = MEM32(ebx + 4);
    if (TEST_NZ(edi, edi)) { sub_0022E5BE(); return; } /* jne: not equal / not zero */

loc_0022E5BA: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0022E5D4(); return; /* tail jmp 0x0022E5D4 */

}

/**
 * sub_0022E8A0
 * Original: 0x0022E8A0 - 0x0022E94A (170 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E8A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022E8A0: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    (void)0; /* cmp esi, MEM32(edi + 4) - flags set for next jcc */
    MEM32(edi + 8) = 0;
    if (CMP_EQ(esi, MEM32(edi + 4))) goto loc_0022E948; /* je: equal / zero */

loc_0022E8BE: ;
    PUSH32(esp, ebx);
    /* nop */

loc_0022E8C0: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0022E911; /* je: equal / zero */

loc_0022E8C9: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(esi + 0x10);
    if (CMP_NE(MEM32(eax), 0)) goto loc_0022E911; /* jne: not equal / not zero */

loc_0022E8D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0022E8DC: ;
    if (TEST_NZ(eax, eax)) goto loc_0022E911; /* jne: not equal / not zero */

loc_0022E8E0: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0022E911; /* je: equal / zero */

loc_0022E8E7: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0022E907: ;
    esp = esp + 4;
    MEM32(esi + 0x10) = 0;

loc_0022E911: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0022E917: ;
    if (TEST_NZ(eax, eax)) goto loc_0022E93C; /* jne: not equal / not zero */

loc_0022E91B: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0022E939: ;
    esp = esp + 4;

loc_0022E93C: ;
    (void)0; /* cmp ebx, MEM32(edi + 4) - flags set for next jcc */
    esi = ebx;
    if (CMP_NE(ebx, MEM32(edi + 4))) goto loc_0022E8C0; /* jne: not equal / not zero */

loc_0022E947: ;
    POP32(esp, ebx);

loc_0022E948: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022E950
 * Original: 0x0022E950 - 0x0022E9C7 (119 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022E950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F610);
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
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0022E984: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_0022E9AB; /* je: equal / zero */

loc_0022E99A: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_0022EDA0(); /* call 0x0022EDA0 */

loc_0022E9AB: ;
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
 * sub_0022E9F0
 * Original: 0x0022E9F0 - 0x0022EA76 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E9F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022E9F0: ;
    eax = MEM32(edx + 8);
    esp = esp - 0x44;
    PUSH32(esp, esi);
    esi = 0xCCCCCCC;
    esi = esi - eax;
    if (CMP_AE(esi, ecx)) goto loc_0022EA6C; /* jae: above or equal (unsigned >=) */

loc_0022EA02: ;
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

loc_0022EA26: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_0022EA2F: ;
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

loc_0022EA54: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0022EA6B: ;
    POP32(esp, ebx);

loc_0022EA6C: ;
    eax = eax + ecx;
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0022EA80
 * Original: 0x0022EA80 - 0x0022EB16 (150 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EA80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022EA80: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x49));
    esp = esp - 0x48;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0022EAFA; /* je: equal / zero */

loc_0022EA90: ;
    PUSH32(esp, 0x1B);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6A8);
    ecx = esp + 0x14;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x28) = esi;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_0022EAB4: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_0022EABD: ;
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

loc_0022EAE3: ;
    PUSH32(esp, 0x64B604);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = 0x5AC68C;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0022EAFA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x64;
    ebp = eax;
    PUSH32(esp, 0); sub_0022EF70(); /* call 0x0022EF70 */

loc_0022EB07: ;
    eax = MEM32(ebp);
    SET_LO8(ecx, MEM8(eax + 0x49));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0022EB16(); return; } /* je: equal / zero */

loc_0022EB11: ;
    edi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_0022EB2F(); return; /* tail jmp 0x0022EB2F */

}

/**
 * sub_0022EDA0
 * Original: 0x0022EDA0 - 0x0022EDD2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EDA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022EDA0: ;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax + 0xC) = edx;
    if (TEST_Z(edx, edx)) goto loc_0022EDC3; /* je: equal / zero */

loc_0022EDBE: ;
    edx = MEM32(eax + 0x10);
    MEM32(edx) = MEM32(edx) + 1;

loc_0022EDC3: ;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x14) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x10));
    MEM8(eax + 0x18) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022EDE0
 * Original: 0x0022EDE0 - 0x0022EE6A (138 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EDE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022EDE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x49));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    ebp = ecx;
    edi = esi;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0022EE63; /* jne: not equal / not zero */

loc_0022EDF5: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_0022EDE0(); /* call 0x0022EDE0 */

loc_0022EE00: ;
    (void)0; /* cmp MEM32(esi + 0x24), 0x10 - flags set for next jcc */
    edi = MEM32(edi);
    if (CMP_B(MEM32(esi + 0x24), 0x10)) goto loc_0022EE20; /* jb: below (unsigned <) */

loc_0022EE08: ;
    eax = MEM32(esi + 0x10);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0022EE20; /* je: equal / zero */

loc_0022EE13: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022EE1D: ;
    esp = esp + 4;

loc_0022EE20: ;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(esi + 0x24) = 0xF;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x10) = LO8(ebx);
    if (CMP_EQ(esi, ebx)) goto loc_0022EE5C; /* je: equal / zero */

loc_0022EE31: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0022EE37: ;
    if (TEST_NZ(eax, eax)) goto loc_0022EE5C; /* jne: not equal / not zero */

loc_0022EE3B: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0022EE59: ;
    esp = esp + 4;

loc_0022EE5C: ;
    (void)0; /* cmp MEM8(edi + 0x49), LO8(ebx) - flags set for next jcc */
    esi = edi;
    if (CMP_EQ(MEM8(edi + 0x49), LO8(ebx))) goto loc_0022EDF5; /* je: equal / zero */

loc_0022EE63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022EE70
 * Original: 0x0022EE70 - 0x0022EEA3 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EE70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022EE70: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x49));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0022EE85; /* jne: not equal / not zero */

loc_0022EE82: ;
    MEM32(edx + 4) = ecx;

loc_0022EE85: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_0022EEA3(); return; } /* jne: not equal / not zero */

loc_0022EE97: ;
    MEM32(edx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022EED0
 * Original: 0x0022EED0 - 0x0022EEED (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022EED0: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x49));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0022EEEC; /* jne: not equal / not zero */

loc_0022EEDA: ;
    /* nop */

loc_0022EEE0: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x49));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0022EEE0; /* je: equal / zero */

loc_0022EEEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022EEF0
 * Original: 0x0022EEF0 - 0x0022EF0C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EEF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022EEF0: ;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x49));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0022EF0B; /* jne: not equal / not zero */

loc_0022EEF9: ;
    /* nop */

loc_0022EF00: ;
    eax = ecx;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x49));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0022EF00; /* je: equal / zero */

loc_0022EF0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022EF10
 * Original: 0x0022EF10 - 0x0022EF44 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EF10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022EF10: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x49));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0022EF25; /* jne: not equal / not zero */

loc_0022EF22: ;
    MEM32(edx + 4) = ecx;

loc_0022EF25: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_0022EF44(); return; } /* jne: not equal / not zero */

loc_0022EF37: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022EF70
 * Original: 0x0022EF70 - 0x0022EFC7 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EF70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022EF70: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x49));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0022EFC6; /* jne: not equal / not zero */

loc_0022EF79: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x49));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0022EF9F; /* jne: not equal / not zero */

loc_0022EF84: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x49));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0022EF9B; /* jne: not equal / not zero */

loc_0022EF8D: ;
    /* nop */

loc_0022EF90: ;
    ecx = eax;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x49));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0022EF90; /* je: equal / zero */

loc_0022EF9B: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0022EF9F: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x49));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0022EFC3; /* jne: not equal / not zero */

loc_0022EFA9: ;
    /* nop */

loc_0022EFB0: ;
    ecx = MEM32(edx);
    if (CMP_NE(ecx, MEM32(eax + 8))) goto loc_0022EFC3; /* jne: not equal / not zero */

loc_0022EFB7: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x49));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0022EFB0; /* je: equal / zero */

loc_0022EFC3: ;
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_0022EFC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022EFD0
 * Original: 0x0022EFD0 - 0x0022F038 (104 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EFD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022EFD0: ;
    ecx = MEM32(esp + 8);
    (void)0; /* cmp ecx, MEM32(esp + 0xC) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    if (CMP_EQ(ecx, MEM32(esp + 0xC))) goto loc_0022F014; /* je: equal / zero */

loc_0022EFEE: ;
    edi = edi;

loc_0022EFF0: ;
    eax = MEM32(ecx + 0x84);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebp = ebp + eax;
    eax = MEM32(ecx + 0x88);
    ebx = ebx + edx + _cf; /* adc */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = edi + eax;
    eax = MEM32(esp + 0x1C);
    esi = esi + edx + _cf; /* adc */
    ecx = ecx + 0x94;
    if (CMP_NE(ecx, eax)) goto loc_0022EFF0; /* jne: not equal / not zero */

loc_0022F014: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x20);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = edi;
    POP32(esp, edi);
    MEM32(ecx + 0x14) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F040
 * Original: 0x0022F040 - 0x0022F056 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F040(void)
{

loc_0022F040: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0022FE20(); /* call 0x0022FE20 */

loc_0022F050: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022F060
 * Original: 0x0022F060 - 0x0022F07C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F060(void)
{

loc_0022F060: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0022FEA0(); /* call 0x0022FEA0 */

loc_0022F076: ;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022F080
 * Original: 0x0022F080 - 0x0022F09B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F080(void)
{

loc_0022F080: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0022FF10(); /* call 0x0022FF10 */

loc_0022F095: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022F0A0
 * Original: 0x0022F0A0 - 0x0022F0BB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F0A0(void)
{

loc_0022F0A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0022FFA0(); /* call 0x0022FFA0 */

loc_0022F0B5: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022F0C0
 * Original: 0x0022F0C0 - 0x0022F0E4 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F0C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_0022F0E1; /* je: equal / zero */

loc_0022F0CA: ;
    /* nop */

loc_0022F0D0: ;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022F0D7: ;
    edi = edi + 0x94;
    if (CMP_NE(edi, ebx)) goto loc_0022F0D0; /* jne: not equal / not zero */

loc_0022F0E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F0F0
 * Original: 0x0022F0F0 - 0x0022F130 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F0F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022F0F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(esi, ebp)) goto loc_0022F12D; /* je: equal / zero */

loc_0022F0FC: ;
    PUSH32(esp, ebx);
    ebx = edi + 8;

loc_0022F100: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebx);
    eax = esi + 8;
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0); sub_0022F200(); /* call 0x0022F200 */

loc_0022F113: ;
    SET_LO8(edx, MEM8(edi + 0x18));
    MEM8(esi + 0x18) = LO8(edx);
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    esi = esi + 0x24;
    if (CMP_NE(esi, ebp)) goto loc_0022F100; /* jne: not equal / not zero */

loc_0022F12C: ;
    POP32(esp, ebx);

loc_0022F12D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F130
 * Original: 0x0022F130 - 0x0022F14B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F130(void)
{

loc_0022F130: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00230030(); /* call 0x00230030 */

loc_0022F145: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022F150
 * Original: 0x0022F150 - 0x0022F188 (56 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F150(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F150: ;
    if (CMP_EQ(eax, ecx)) goto loc_0022F187; /* je: equal / zero */

loc_0022F154: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0022F157: ;
    esi = edx;
    ebx = MEM32(esi);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(esi + 8);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = ebx;
    ebx = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = ebx;
    esi = MEM32(esi + 0x14);
    eax = eax + 0x18;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(edi + 0x14) = esi;
    if (CMP_NE(eax, ecx)) goto loc_0022F157; /* jne: not equal / not zero */

loc_0022F184: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0022F187: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022F190
 * Original: 0x0022F190 - 0x0022F1F4 (100 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F190(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F190: ;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    MEM32(eax) = ecx;
    ecx = esi + 4;
    edi = eax + 4;
    edi = edi - ecx;
    /* nop */

loc_0022F1A0: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0022F1A0; /* jne: not equal / not zero */

loc_0022F1AA: ;
    edx = MEM32(esi + 0x84);
    MEM32(eax + 0x84) = edx;
    ecx = MEM32(esi + 0x88);
    MEM32(eax + 0x88) = ecx;
    SET_LO8(edx, MEM8(esi + 0x8C));
    MEM8(eax + 0x8C) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0x8D));
    MEM8(eax + 0x8D) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x8E));
    MEM8(eax + 0x8E) = LO8(edx);
    ecx = MEM32(esi + 0x90);
    MEM32(eax + 0x90) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F200
 * Original: 0x0022F200 - 0x0022F3A0 (416 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022F200: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_0022F399; /* je: equal / zero */

loc_0022F210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ebp, edi)) goto loc_0022F238; /* je: equal / zero */

loc_0022F21C: ;
    ebx = MEM32(eax + 8);
    ecx = ebx;
    ecx = ecx - ebp;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    if (CMP_NE(ecx, edi)) goto loc_0022F263; /* jne: not equal / not zero */

loc_0022F238: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_0022F250; /* je: equal / zero */

loc_0022F23F: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0022F24D: ;
    esp = esp + 4;

loc_0022F250: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0022F263: ;
    edi = MEM32(esi + 4);
    if (TEST_NZ(edi, edi)) goto loc_0022F26E; /* jne: not equal / not zero */

loc_0022F26A: ;
    eax = 0; /* xor self */
    goto loc_0022F284;

loc_0022F26E: ;
    edx = MEM32(esi + 8);
    edx = edx - edi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0022F284: ;
    if (CMP_A(ecx, eax)) goto loc_0022F2E8; /* ja: above (unsigned >) */

loc_0022F288: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    eax = edi;
    edx = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002300A0(); /* call 0x002300A0 */

loc_0022F298: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 4);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0022F2BC; /* jne: not equal / not zero */

loc_0022F2A6: ;
    edx = eax + eax * 2;
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, ebp);
    ecx = eax + edx * 8;
    POP32(esp, ebx);
    MEM32(esi + 8) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0022F2BC: ;
    ecx = MEM32(ecx + 8);
    ecx = ecx - eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = eax + eax * 2;
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, ebp);
    ecx = eax + edx * 8;
    POP32(esp, ebx);
    MEM32(esi + 8) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0022F2E8: ;
    if (TEST_NZ(edi, edi)) goto loc_0022F2F0; /* jne: not equal / not zero */

loc_0022F2EC: ;
    eax = 0; /* xor self */
    goto loc_0022F306;

loc_0022F2F0: ;
    edx = MEM32(esi + 0xC);
    edx = edx - edi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_0022F306: ;
    if (CMP_A(ecx, eax)) goto loc_0022F34F; /* ja: above (unsigned >) */

loc_0022F30A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_001CD5D0(); /* call 0x001CD5D0 */

loc_0022F311: ;
    edx = eax + eax * 2;
    eax = MEM32(esp + 0x18);
    ebx = ebp + edx * 8;
    PUSH32(esp, eax);
    eax = edi;
    edx = ebx;
    ecx = ebp;
    PUSH32(esp, 0); sub_002300A0(); /* call 0x002300A0 */

loc_0022F328: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x1C);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00230030(); /* call 0x00230030 */

loc_0022F33F: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0022F34F: ;
    if (TEST_Z(edi, edi)) goto loc_0022F36D; /* je: equal / zero */

loc_0022F353: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx - edi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edi;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0); sub_00269B40(); /* call 0x00269B40 */

loc_0022F36D: ;
    edi = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0); sub_001CD5D0(); /* call 0x001CD5D0 */

loc_0022F378: ;
    PUSH32(esp, 0); sub_0022DE60(); /* call 0x0022DE60 */

loc_0022F37D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0022F396; /* je: equal / zero */

loc_0022F381: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 4);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_0022F130(); /* call 0x0022F130 */

loc_0022F393: ;
    MEM32(esi + 8) = eax;

loc_0022F396: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0022F399: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022F3A0
 * Original: 0x0022F3A0 - 0x0022F48D (237 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F3A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022F3A0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = edi;
    ecx = ecx - ebx;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if (CMP_LE(eax, 0x20)) goto loc_0022F476; /* jle: less or equal (signed <=) */

loc_0022F3CF: ;
    esi = MEM32(esp + 0x24);

loc_0022F3D3: ;
    if (CMP_LE(esi & esi, 0)) { sub_0022F48D(); return; } /* jle: less or equal (signed <=) */

loc_0022F3DB: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0022F920(); /* call 0x0022F920 */

loc_0022F3E7: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esp + 0x20);
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esi + eax;
    ecx = edi;
    ecx = ecx - edx;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(esp + 0x1C);
    edx = (uint32_t)((int32_t)edx >> 7);
    ebp = edx;
    ecx = ecx - ebx;
    ebp = ebp >> 0x1F;
    ebp = ebp + edx;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    ecx = edx;
    ecx = ecx >> 0x1F;
    esp = esp + 0xC;
    ecx = ecx + edx;
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(ecx, ebp)) goto loc_0022F444; /* jge: greater or equal (signed >=) */

loc_0022F433: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0022F3A0(); /* call 0x0022F3A0 */

loc_0022F43E: ;
    ebx = MEM32(esp + 0x20);
    goto loc_0022F453;

loc_0022F444: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0022F3A0(); /* call 0x0022F3A0 */

loc_0022F44F: ;
    edi = MEM32(esp + 0x1C);

loc_0022F453: ;
    ecx = edi;
    ecx = ecx - ebx;
    eax = 0xDD67C8A7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    esp = esp + 0xC;
    if (CMP_G(eax, 0x20)) goto loc_0022F3D3; /* jg: greater (signed >) */

loc_0022F476: ;
    if (CMP_LE(eax, 1)) goto loc_0022F485; /* jle: less or equal (signed <=) */

loc_0022F47B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0022FD70(); /* call 0x0022FD70 */

loc_0022F482: ;
    esp = esp + 8;

loc_0022F485: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0022F4D0
 * Original: 0x0022F4D0 - 0x0022F4FC (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F4D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F4D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0022F4F7; /* je: equal / zero */

loc_0022F4DA: ;
    /* nop */

loc_0022F4E0: ;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022F4E7: ;
    esi = esi + 0x94;
    edi = edi + 0x94;
    if (CMP_NE(esi, ebx)) goto loc_0022F4E0; /* jne: not equal / not zero */

loc_0022F4F7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F500
 * Original: 0x0022F500 - 0x0022F547 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F500(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F500: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0022F542; /* je: equal / zero */

loc_0022F50A: ;
    /* nop */

loc_0022F510: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    edx = esi + 8;
    PUSH32(esp, edx);
    eax = edi + 8;
    MEM32(edi + 4) = ecx;
    PUSH32(esp, 0); sub_0022F200(); /* call 0x0022F200 */

loc_0022F526: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    MEM8(edi + 0x18) = LO8(eax);
    ecx = MEM32(esi + 0x1C);
    MEM32(edi + 0x1C) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(edi + 0x20) = edx;
    esi = esi + 0x24;
    edi = edi + 0x24;
    if (CMP_NE(esi, ebx)) goto loc_0022F510; /* jne: not equal / not zero */

loc_0022F542: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F550
 * Original: 0x0022F550 - 0x0022F58B (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F550(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F550: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0022F586; /* je: equal / zero */

loc_0022F55A: ;
    /* nop */

loc_0022F560: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    edx = esi + 8;
    PUSH32(esp, edx);
    eax = edi + 8;
    MEM32(edi + 4) = ecx;
    PUSH32(esp, 0); sub_0022F200(); /* call 0x0022F200 */

loc_0022F576: ;
    eax = MEM32(esi + 0x18);
    MEM32(edi + 0x18) = eax;
    esi = esi + 0x1C;
    edi = edi + 0x1C;
    if (CMP_NE(esi, ebx)) goto loc_0022F560; /* jne: not equal / not zero */

loc_0022F586: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F590
 * Original: 0x0022F590 - 0x0022F5E1 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022F590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F2E0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_0022F5C0: ;
    if (CMP_BE(ebx & ebx, 0)) { sub_0022F5E1(); return; } /* jbe: below or equal (unsigned <=) */

loc_0022F5C4: ;
    MEM32(ebp + -20) = edi;
    if (TEST_Z(edi, edi)) goto loc_0022F5D2; /* je: equal / zero */

loc_0022F5CB: ;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022F5D2: ;
    ebx--;
    MEM32(ebp + 0xC) = ebx;
    edi = edi + 0x94;
    MEM32(ebp + 8) = edi;
    goto loc_0022F5C0;

}

/**
 * sub_0022F610
 * Original: 0x0022F610 - 0x0022F66D (93 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022F610: ;
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_EQ(ebx, MEM32(esp + 8))) goto loc_0022F66B; /* je: equal / zero */

loc_0022F619: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0xC;
    ebp = 0; /* xor self */

loc_0022F621: ;
    edi = MEM32(esi);
    if (CMP_EQ(edi, ebp)) goto loc_0022F652; /* je: equal / zero */

loc_0022F627: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0022F62D: ;
    if (TEST_NZ(eax, eax)) goto loc_0022F652; /* jne: not equal / not zero */

loc_0022F631: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0022F64F: ;
    esp = esp + 4;

loc_0022F652: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = ebp;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    ebx = ebx + 0x24;
    esi = esi + 0x24;
    if (CMP_NE(ebx, eax)) goto loc_0022F621; /* jne: not equal / not zero */

loc_0022F668: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0022F66B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F670
 * Original: 0x0022F670 - 0x0022F6B8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022F670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FD50);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    edi = ecx;
    ebx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;

loc_0022F6A3: ;
    if (CMP_BE(ebx & ebx, 0)) { sub_0022F6B8(); return; } /* jbe: below or equal (unsigned <=) */

loc_0022F6A7: ;
    PUSH32(esp, 0); sub_0022F890(); /* call 0x0022F890 */

loc_0022F6AC: ;
    ebx--;
    MEM32(ebp + 0xC) = ebx;
    esi = esi + 0x24;
    MEM32(ebp + 8) = esi;
    goto loc_0022F6A3;

}

/**
 * sub_0022F700
 * Original: 0x0022F700 - 0x0022F75D (93 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022F700: ;
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_EQ(ebx, MEM32(esp + 8))) goto loc_0022F75B; /* je: equal / zero */

loc_0022F709: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0xC;
    ebp = 0; /* xor self */

loc_0022F711: ;
    edi = MEM32(esi);
    if (CMP_EQ(edi, ebp)) goto loc_0022F742; /* je: equal / zero */

loc_0022F717: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0022F71D: ;
    if (TEST_NZ(eax, eax)) goto loc_0022F742; /* jne: not equal / not zero */

loc_0022F721: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0022F73F: ;
    esp = esp + 4;

loc_0022F742: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = ebp;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    ebx = ebx + 0x1C;
    esi = esi + 0x1C;
    if (CMP_NE(ebx, eax)) goto loc_0022F711; /* jne: not equal / not zero */

loc_0022F758: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0022F75B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F760
 * Original: 0x0022F760 - 0x0022F78C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F760(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F760: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(ebx, esi)) goto loc_0022F787; /* je: equal / zero */

loc_0022F76A: ;
    /* nop */

loc_0022F770: ;
    edi = edi - 0x94;
    esi = esi - 0x94;
    eax = edi;
    PUSH32(esp, 0); sub_0022F190(); /* call 0x0022F190 */

loc_0022F783: ;
    if (CMP_NE(esi, ebx)) goto loc_0022F770; /* jne: not equal / not zero */

loc_0022F787: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022F790
 * Original: 0x0022F790 - 0x0022F7D9 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0022F790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F1F0);
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

loc_0022F7C0: ;
    if (CMP_BE(edi & edi, 0)) { sub_0022F7D9(); return; } /* jbe: below or equal (unsigned <=) */

loc_0022F7C4: ;
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_001CD940(); /* call 0x001CD940 */

loc_0022F7CD: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x18;
    MEM32(ebp + 8) = esi;
    goto loc_0022F7C0;

}

/**
 * sub_0022F800
 * Original: 0x0022F800 - 0x0022F848 (72 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F800(void)
{
    int _flags = 0; /* fallback flag var */

loc_0022F800: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(ebx, esi)) goto loc_0022F843; /* je: equal / zero */

loc_0022F80A: ;
    /* nop */

loc_0022F810: ;
    eax = MEM32(esi + -36);
    esi = esi - 0x24;
    edi = edi - 0x24;
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    edx = esi + 8;
    PUSH32(esp, edx);
    eax = edi + 8;
    MEM32(edi + 4) = ecx;
    PUSH32(esp, 0); sub_0022F200(); /* call 0x0022F200 */

loc_0022F82D: ;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0x18));
    MEM8(edi + 0x18) = LO8(eax);
    ecx = MEM32(esi + 0x1C);
    MEM32(edi + 0x1C) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(edi + 0x20) = edx;
    if (CMP_NE(esi, ebx)) goto loc_0022F810; /* jne: not equal / not zero */

loc_0022F843: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
