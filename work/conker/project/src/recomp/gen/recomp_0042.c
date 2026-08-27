/**
 * Burnout 3 - Recompiled code chunk 42
 * Functions: 250 (0x003AE320 - 0x003C5F50)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003AE320
 * Original: 0x003AE320 - 0x003AE4F2 (466 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE320: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = edi;
    PUSH32(esp, 0); sub_003937D0(); /* call 0x003937D0 */

loc_003AE330: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001B4290(); /* call 0x001B4290 */

loc_003AE336: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003913D0(); /* call 0x003913D0 */

loc_003AE341: ;
    PUSH32(esp, 0x42FA0000);
    PUSH32(esp, edi);
    MEM32(esi + 0x16D4) = 0x74EB44;
    PUSH32(esp, 0); sub_001B61D0(); /* call 0x001B61D0 */

loc_003AE356: ;
    esp = esp + 8;
    ebp = 0x74EB74;
    PUSH32(esp, ebx);
    /* nop */

loc_003AE360: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = MEM32(ebp);
    if (TEST_Z(edi, edi)) goto loc_003AE3CF; /* je: equal / zero */

loc_003AE367: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003AE36F: ;
    ecx = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_003AE3CF; /* je: equal / zero */

loc_003AE37C: ;
    eax = MEM32(edi + 0x4B0);
    if (TEST_Z(eax, eax)) goto loc_003AE3CF; /* je: equal / zero */

loc_003AE386: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_003AE3CF; /* je: equal / zero */

loc_003AE38D: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x14);
    MEM32(0x812A18) = ecx;
    eax = MEM32(eax + 0x10);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003AE3AA: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003AE3CF; /* je: equal / zero */

loc_003AE3B1: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003AE3CF; /* je: equal / zero */

loc_003AE3B9: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_003AE3CF; /* je: equal / zero */

loc_003AE3C0: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(0x812A18);
    MEM32(eax + edx) = 0;

loc_003AE3CF: ;
    ebp = ebp + 4;
    if (CMP_L(ebp, 0x74EB7C)) goto loc_003AE360; /* jl: less (signed <) */

loc_003AE3DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E06CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x638430);
    PUSH32(esp, 0x3AFF60);
    ebx = edi;
    eax = edi;
    PUSH32(esp, 0); sub_002F7FC0(); /* call 0x002F7FC0 */

loc_003AE3F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E06CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x63844C);
    PUSH32(esp, 0x3AFFE0);
    eax = edi;
    PUSH32(esp, 0); sub_002F7FC0(); /* call 0x002F7FC0 */

loc_003AE410: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x641354);
    PUSH32(esp, 0);
    PUSH32(esp, 0x638430);
    PUSH32(esp, 0x3AFF60);
    eax = edi;
    PUSH32(esp, 0); sub_002F7FC0(); /* call 0x002F7FC0 */

loc_003AE42A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x641354);
    PUSH32(esp, 0);
    PUSH32(esp, 0x63844C);
    PUSH32(esp, 0x3AFFE0);
    eax = edi;
    PUSH32(esp, 0); sub_002F7FC0(); /* call 0x002F7FC0 */

loc_003AE444: ;
    esp = esp + 0x50;
    if (TEST_Z(edi, edi)) goto loc_003AE4BC; /* je: equal / zero */

loc_003AE44B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63E5DC);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003AE457: ;
    ecx = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_003AE4BC; /* je: equal / zero */

loc_003AE464: ;
    eax = MEM32(edi + 0x4B0);
    if (TEST_Z(eax, eax)) goto loc_003AE4BC; /* je: equal / zero */

loc_003AE46E: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_003AE4BC; /* je: equal / zero */

loc_003AE475: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 0x14);
    MEM32(0x812A18) = ecx;
    eax = MEM32(eax + 0x10);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x63E5DC;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003AE497: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003AE4BC; /* je: equal / zero */

loc_003AE49E: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003AE4BC; /* je: equal / zero */

loc_003AE4A6: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_003AE4BC; /* je: equal / zero */

loc_003AE4AD: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(0x812A18);
    MEM32(eax + edx) = 0;

loc_003AE4BC: ;
    ecx = MEM32(edi + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x641348;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003AE4DE: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_003AE4F2(); return; } /* je: equal / zero */

loc_003AE4E5: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) { sub_003AE4F2(); return; } /* je: equal / zero */

loc_003AE4ED: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_003AE4F4(); return; /* tail jmp 0x003AE4F4 */

}

/**
 * sub_003AE6D0
 * Original: 0x003AE6D0 - 0x003AE74C (124 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE6D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003AE6D0: ;
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, edi);
    edi = ecx;
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003AE748; /* jbe: below or equal (unsigned <=) */

loc_003AE6E2: ;
    xmm1 = MEMF(0x648D10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, esi);
    if ((xmm1 <= xmm0)) goto loc_003AE6F7; /* jbe: below or equal (unsigned <=) */

loc_003AE6F0: ;
    esi = 0x947;
    goto loc_003AE729;

loc_003AE6F7: ;
    xmm1 = MEMF(0x648F58); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003AE70B; /* jbe: below or equal (unsigned <=) */

loc_003AE704: ;
    esi = 0x946;
    goto loc_003AE729;

loc_003AE70B: ;
    eax = MEM32(edi + 0x1F0);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = 0x944;
    if (TEST_Z(eax, eax)) goto loc_003AE729; /* je: equal / zero */

loc_003AE71A: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003AE726: ;
    esp = esp + 8;

loc_003AE729: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = 0x40100002;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003AE747: ;
    POP32(esp, esi);

loc_003AE748: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AE750
 * Original: 0x003AE750 - 0x003AE958 (520 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    ebx = ecx;
    ebp = MEM32(eax + ebx + 0x1F0);
    if (TEST_Z(ebp, ebp)) goto loc_003AE952; /* je: equal / zero */

loc_003AE770: ;
    (void)0; /* cmp MEM32(ebx + 0xCB0), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebx + 0xCB0), 0xFFFFFFFFu)) goto loc_003AE806; /* jne: not equal / not zero */

loc_003AE77E: ;
    eax = MEM32(ebp + 0x564);
    edi = MEM32(0x847024);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, MEM8(ebx + 0x17C0));
    if (TEST_Z(eax, eax)) goto loc_003AE7B0; /* je: equal / zero */

loc_003AE794: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003AE7A4; /* je: equal / zero */

loc_003AE798: ;
    MEM32(ebx + 0xCB4) = 0x928;
    goto loc_003AE7E3;

loc_003AE7A4: ;
    MEM32(ebx + 0xCB4) = 0x906;
    goto loc_003AE7E3;

loc_003AE7B0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003AE7C7; /* je: equal / zero */

loc_003AE7B4: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, 0xDB6);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x928);
    goto loc_003AE7D8;

loc_003AE7C7: ;
    edx = MEM32(edi + 0x40);
    PUSH32(esp, 0xDAE);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x906);

loc_003AE7D8: ;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_003AE7DD: ;
    MEM32(ebx + 0xCB4) = eax;

loc_003AE7E3: ;
    eax = MEM32(edi + 0x40);
    edi = MEM32(ebx + 0xCB4);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1A);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0); sub_00025BD0(); /* call 0x00025BD0 */

loc_003AE800: ;
    MEM32(ebx + 0xCB0) = eax;

loc_003AE806: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 0xBF800000u);
    eax = ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003AE8CA; /* je: equal / zero */

loc_003AE819: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003AE820: ;
    esp = esp + 8;

loc_003AE823: ;
    if (CMP_NE(esi, 1)) goto loc_003AE82F; /* jne: not equal / not zero */

loc_003AE828: ;
    esi = ebx;
    PUSH32(esp, 0); sub_0038C570(); /* call 0x0038C570 */

loc_003AE82F: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    eax = MEM32(edx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002E7D0(); /* call 0x0002E7D0 */

loc_003AE842: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003AE951; /* je: equal / zero */

loc_003AE850: ;
    SET_LO8(eax, MEM8(0x846FF5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003AE87A; /* je: equal / zero */

loc_003AE859: ;
    eax = MEM32(ebx + 4);
    edx = MEM32(eax + 0x580);
    esi = MEM32(0x847024);
    ecx = eax + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x63E570);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_003AE877: ;
    esp = esp + 0xC;

loc_003AE87A: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(0x847024);
    edx = MEM32(eax + 0x580);
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00034EA0(); /* call 0x00034EA0 */

loc_003AE893: ;
    ebx = MEM32(ebx + 4);
    edx = MEM32(0x847024);
    edi = MEM32(edx + 0x40);
    esi = ebx;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_003AE8A6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003AE951; /* je: equal / zero */

loc_003AE8AE: ;
    eax = MEM32(ebx + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003AE929; /* je: equal / zero */

loc_003AE8B8: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_003AE92F;

loc_003AE8CA: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003AE8D1: ;
    eax = esi;
    esp = esp + 8;
    eax = eax - 0;
    if ((eax == 0)) goto loc_003AE905; /* je: equal / zero */

loc_003AE8DB: ;
    eax--;
    if ((eax != 0)) goto loc_003AE823; /* jne: not equal / not zero */

loc_003AE8E2: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xD72);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003AE900: ;
    goto loc_003AE828;

loc_003AE905: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xD74);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003AE924: ;
    goto loc_003AE82F;

loc_003AE929: ;
    eax = MEM32(ebx + 0x580);

loc_003AE92F: ;
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

loc_003AE951: ;
    POP32(esp, edi);

loc_003AE952: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003AE960
 * Original: 0x003AE960 - 0x003AEA75 (277 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE960(void)
{
    int _flags = 0; /* fallback flag var */

loc_003AE960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0); sub_0038C570(); /* call 0x0038C570 */

loc_003AE96C: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00391690(); /* call 0x00391690 */

loc_003AE97D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003AE9C5; /* je: equal / zero */

loc_003AE984: ;
    eax = MEM32(esp + 0x10);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003AE9A6; /* je: equal / zero */

loc_003AE98D: ;
    eax--;
    if ((eax != 0)) goto loc_003AE9C5; /* jne: not equal / not zero */

loc_003AE990: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD73);
    PUSH32(esp, ecx);
    goto loc_003AE9BB;

loc_003AE9A6: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD75);
    PUSH32(esp, eax);

loc_003AE9BB: ;
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003AE9C5: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003AEA6F; /* je: equal / zero */

loc_003AE9D3: ;
    SET_LO8(eax, MEM8(0x846FF5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003AE9FD; /* je: equal / zero */

loc_003AE9DC: ;
    eax = MEM32(ebx + 4);
    edx = MEM32(eax + 0x580);
    esi = MEM32(0x847024);
    ecx = eax + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x63E508);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_003AE9FA: ;
    esp = esp + 0xC;

loc_003AE9FD: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(0x847024);
    edx = MEM32(eax + 0x580);
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00034EA0(); /* call 0x00034EA0 */

loc_003AEA16: ;
    edx = MEM32(0x847024);
    esi = MEM32(ebx + 4);
    edi = MEM32(edx + 0x40);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_003AEA27: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003AEA6F; /* je: equal / zero */

loc_003AEA2B: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003AEA47; /* je: equal / zero */

loc_003AEA35: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_003AEA4D;

loc_003AEA47: ;
    eax = MEM32(esi + 0x580);

loc_003AEA4D: ;
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

loc_003AEA6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AEA80
 * Original: 0x003AEA80 - 0x003AEC3A (442 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEA80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003AEA80: ;
    eax = MEM32(0x863D08);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(eax, eax)) goto loc_003AEC36; /* je: equal / zero */

loc_003AEA90: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00398780(); /* call 0x00398780 */

loc_003AEA9B: ;
    esi = MEM32(edi + 0x2A0);
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = 1;
    if (TEST_NZ(esi, esi)) goto loc_003AEAB2; /* jne: not equal / not zero */

loc_003AEAAA: ;
    esi = MEM32(edi + 0x1F0);
    eax = 0; /* xor self */

loc_003AEAB2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    SET_LO8(ecx, MEM8(eax + edi + 0x221));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = eax + edi + 0x221;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003AEAF2; /* je: equal / zero */

loc_003AEACA: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(eax) = 0;
    if (TEST_Z(esi, esi)) goto loc_003AEAF2; /* je: equal / zero */

loc_003AEAD1: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003AEAF2; /* je: equal / zero */

loc_003AEADB: ;
    PUSH32(esp, edi);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    PUSH32(esp, 0); sub_000C53E0(); /* call 0x000C53E0 */

loc_003AEAE4: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0015A530(); /* call 0x0015A530 */

loc_003AEAEF: ;
    esp = esp + 0xC;

loc_003AEAF2: ;
    eax = MEM32(edi + 0x7A8);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_003AEC36; /* je: equal / zero */

loc_003AEB01: ;
    eax = MEM32(edi + 0x1F0);
    if (TEST_Z(eax, eax)) goto loc_003AEB18; /* je: equal / zero */

loc_003AEB0B: ;
    if (CMP_EQ(MEM8(edi + 0x1FC), 2)) goto loc_003AEC36; /* je: equal / zero */

loc_003AEB18: ;
    eax = MEM32(edi + 0x2A0);
    if (TEST_Z(eax, eax)) goto loc_003AEB38; /* je: equal / zero */

loc_003AEB22: ;
    SET_LO8(eax, MEM8(edi + 0x2AC));
    if (CMP_EQ(LO8(eax), 2)) goto loc_003AEC36; /* je: equal / zero */

loc_003AEB30: ;
    if (CMP_EQ(LO8(eax), 5)) goto loc_003AEC36; /* je: equal / zero */

loc_003AEB38: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(edi + 0x770) - sets EFLAGS */
    xmm5 = MEMF(0x648F60); /* movss */
    if ((xmm1 <= MEMF(edi + 0x770))) goto loc_003AEB6B; /* jbe: below or equal (unsigned <=) */

loc_003AEB4C: ;
    xmm2 = MEMF(edi + 0x770); /* movss */

loc_003AEB54: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm2 = xmm0; /* movaps */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 > xmm2)) goto loc_003AEB54; /* ja: above (unsigned >) */

loc_003AEB63: ;
    MEMF(edi + 0x770) = xmm2; /* movss */

loc_003AEB6B: ;
    xmm0 = MEMF(edi + 0x770); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 < xmm5)) goto loc_003AEB97; /* jb: below (unsigned <) */

loc_003AEB78: ;
    xmm2 = xmm0; /* movaps */
    goto loc_003AEB80;

    /* nop */

loc_003AEB80: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    xmm2 = xmm0; /* movaps */
    if ((xmm0 >= xmm5)) goto loc_003AEB80; /* jae: above or equal (unsigned >=) */

loc_003AEB8F: ;
    MEMF(edi + 0x770) = xmm2; /* movss */

loc_003AEB97: ;
    xmm0 = MEMF(edi + 0x770); /* movss */
    xmm4 = MEMF(0x648E6C); /* movss */
    xmm6 = MEMF(0x649344); /* movss */
    xmm7 = MEMF(0x648F64); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    /* comiss xmm2, xmm4 - sets EFLAGS */
    xmm3 = xmm1; /* movaps */
    if ((xmm2 < xmm4)) goto loc_003AEBCB; /* jb: below (unsigned <) */

loc_003AEBC6: ;
    xmm3 = xmm6; /* movaps */
    goto loc_003AEBD4;

loc_003AEBCB: ;
    /* comiss xmm7, xmm2 - sets EFLAGS */
    if ((xmm7 < xmm2)) goto loc_003AEBD4; /* jb: below (unsigned <) */

loc_003AEBD0: ;
    xmm0 = xmm0 - xmm5; /* subss */

loc_003AEBD4: ;
    xmm2 = MEMF(edi + 0x770); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm3 = MEMF(0x648D38); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = MEMF(edi + 0x774); /* movss */
    MEMF(edi + 0x770) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 < xmm4)) goto loc_003AEC11; /* jb: below (unsigned <) */

loc_003AEC0C: ;
    xmm2 = xmm6; /* movaps */
    goto loc_003AEC1A;

loc_003AEC11: ;
    /* comiss xmm7, xmm1 - sets EFLAGS */
    if ((xmm7 < xmm1)) goto loc_003AEC1A; /* jb: below (unsigned <) */

loc_003AEC16: ;
    xmm0 = xmm0 - xmm5; /* subss */

loc_003AEC1A: ;
    xmm1 = MEMF(edi + 0x774); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(edi + 0x774) = xmm1; /* movss */

loc_003AEC36: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AEC40
 * Original: 0x003AEC40 - 0x003AFF59 (4889 bytes, 1183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEC40(void)
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

loc_003AEC40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1A4;
    eax = MEM32(0x863D08);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(eax, eax)) goto loc_003AFF50; /* je: equal / zero */

loc_003AEC62: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00399880(); /* call 0x00399880 */

loc_003AEC6B: ;
    xmm0 = MEMF(0x5A005C); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648FB0); /* movss */
    eax = edi + 0x78;
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x114); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, 0x79);
    ecx = esp + 0xE4;
    MEMF(esp + 0x4C) = xmm4; /* movss */
    MEMF(esp + 0x50) = xmm4; /* movss */
    MEMF(esp + 0x7C) = xmm4; /* movss */
    MEMF(esp + 0x80) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003AECF1: ;
    esp = esp + 4;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003AED04: ;
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003AED19: ;
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003AED2E: ;
    eax = esp + 0x44;
    ecx = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x74;
    eax = edx;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edi = esi + 0x1330;
    ecx = esp + 0x74;
    edx = esp + 0x90;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esi + 0x133C;
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x44;
    ecx = esp + 0x84;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x90;
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
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    eax = esp + 0x84;
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEM32(esp + 0x40) = eax;
    edx = MEM32(esp + 0x40);
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
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    MEMF(esp + 0x40) = xmm1; /* movss */
    if ((xmm3 <= xmm4)) goto loc_003AEF10; /* jbe: below or equal (unsigned <=) */

loc_003AEEAD: ;
    eax = esp + 0x90;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003AEEBB: ;
    xmm0 = MEMF(esp + 0x98); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm1 = MEMF(esp + 0x94); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x90); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm3 = xmm0; /* movaps */

loc_003AEF10: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_003AEF7E; /* jbe: below or equal (unsigned <=) */

loc_003AEF1B: ;
    eax = esp + 0x84;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003AEF29: ;
    xmm0 = MEMF(esp + 0x8C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm1 = MEMF(esp + 0x88); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x84); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm1 = xmm0; /* movaps */

loc_003AEF7E: ;
    xmm0 = MEMF(0x64A5C0); /* movss */
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x78);
    eax = MEM32(esp + 0x7C);
    xmm7 = MEMF(0x648F60); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0x1748); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm3 = MEMF(0x648EA4); /* movss */
    MEMF(esi + 0x134C) = xmm1; /* movss */
    MEM32(edi) = ecx;
    ecx = MEM32(esp + 0x44);
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    xmm1 = MEMF(esi + 0x174C); /* movss */
    MEM32(edi + 4) = edx;
    edx = MEM32(esp + 0x48);
    MEMF(esi + 0x1348) = xmm2; /* movss */
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esi + 0x133C) = ecx;
    xmm2 = xmm2 * xmm3; /* mulss */
    MEM32(esi + 0x1340) = edx;
    xmm1 = xmm1 - xmm2; /* subss */
    MEM32(esi + 0x1344) = eax;
    MEMF(esi + 0x1748) = xmm0; /* movss */
    MEMF(esi + 0x174C) = xmm1; /* movss */
    if ((xmm4 <= xmm0)) goto loc_003AF01E; /* jbe: below or equal (unsigned <=) */

loc_003AF018: ;
    xmm0 = xmm0 + xmm7; /* addss */
    goto loc_003AF02F;

loc_003AF01E: ;
    /* comiss xmm0, MEMF(0x648F60) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648F60))) goto loc_003AF037; /* jb: below (unsigned <) */

loc_003AF027: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_003AF02F: ;
    MEMF(esi + 0x1748) = xmm0; /* movss */

loc_003AF037: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_003AF042; /* jbe: below or equal (unsigned <=) */

loc_003AF03C: ;
    xmm1 = xmm1 + xmm7; /* addss */
    goto loc_003AF04B;

loc_003AF042: ;
    /* comiss xmm1, xmm7 - sets EFLAGS */
    if ((xmm1 < xmm7)) goto loc_003AF053; /* jb: below (unsigned <) */

loc_003AF047: ;
    xmm1 = xmm1 - xmm7; /* subss */

loc_003AF04B: ;
    MEMF(esi + 0x174C) = xmm1; /* movss */

loc_003AF053: ;
    edi = MEM32(esi + 0x2A0);
    edx = 0; /* xor self */
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(esi + 0x788) = edx;
    MEM32(esp + 0x30) = edi;
    eax = 1;
    if (CMP_NE(edi, edx)) goto loc_003AF082; /* jne: not equal / not zero */

loc_003AF06E: ;
    edi = MEM32(esi + 0x1F0);
    eax = 0; /* xor self */
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(esp + 0x30) = edi;
    if (CMP_EQ(edi, edx)) goto loc_003AF33D; /* je: equal / zero */

loc_003AF082: ;
    ecx = MEM32(edi + 0x568);
    if (CMP_EQ(ecx, edx)) goto loc_003AF2D6; /* je: equal / zero */

loc_003AF090: ;
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_003AF2D6; /* je: equal / zero */

loc_003AF09D: ;
    MEM32(esi + 0x788) = 1;
    MEM32(esi + 0x78C) = edx;
    if (CMP_BE(MEM16(edi + 0x3AE), LO16(edx))) goto loc_003AF20C; /* jbe: below or equal (unsigned <=) */

loc_003AF0BA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    if (CMP_NE(MEM8(eax + esi + 0x1FC), 2)) goto loc_003AF20C; /* jne: not equal / not zero */

loc_003AF0CE: ;
    eax = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, 0); sub_0004DFE0(); /* call 0x0004DFE0 */

loc_003AF0D7: ;
    ebx = eax;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_003AF0DE: ;
    ecx = MEM32(edi + 0x568);
    /* fstp st(0) */
    eax = MEM32(ecx + 0xBC);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = (float)(int32_t)MEM32(0x7FA208); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x7F9F58); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003AF134; /* je: equal / zero */

loc_003AF106: ;
    xmm0 = MEMF(0x649C24); /* movss */
    xmm1 = MEMF(ebx + 0x13C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = MEMF(ebx + 0x138); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    MEM32(ebx + 0x18) = edx;
    MEM32(ebx + 0x14) = eax;

loc_003AF134: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xCE0);
    eax = ebx;
    PUSH32(esp, 0); sub_002F99A0(); /* call 0x002F99A0 */

loc_003AF146: ;
    ecx = MEM32(esi + 0xCE0);
    xmm0 = MEMF(esi + 0x770); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 8); /* subss */
    eax = esi + 0x774;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esi + 0x770) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x44); /* movss */
    xmm0 = xmm0 + MEMF(eax); /* addss */
    MEMF(eax) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003AF1B1; /* je: equal / zero */

loc_003AF178: ;
    edx = MEM32(ecx);
    xmm0 = MEMF(edx + 0x18); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax))) goto loc_003AF192; /* jbe: below or equal (unsigned <=) */

loc_003AF184: ;
    edx = MEM32(edx + 0x18);
    MEM32(eax) = edx;
    MEM8(ecx + 0xE0) = 1;
    goto loc_003AF1B1;

loc_003AF192: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, MEMF(edx + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + 0x1C))) goto loc_003AF1AA; /* jbe: below or equal (unsigned <=) */

loc_003AF19C: ;
    edx = MEM32(edx + 0x1C);
    MEM32(eax) = edx;
    MEM8(ecx + 0xE0) = 1;
    goto loc_003AF1B1;

loc_003AF1AA: ;
    MEM8(ecx + 0xE0) = 0;

loc_003AF1B1: ;
    eax = MEM32(esi + 0xCE0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC03);
    eax = 0xB22;
    ecx = esi;
    PUSH32(esp, 0); sub_0038C5C0(); /* call 0x0038C5C0 */

loc_003AF1CA: ;
    eax = MEM32(ebx + 0x14C);
    if (TEST_Z(eax, eax)) goto loc_003AF1DB; /* je: equal / zero */

loc_003AF1D4: ;
    MEM32(esi + 0x78C) = MEM32(esi + 0x78C) | 1;

loc_003AF1DB: ;
    eax = MEM32(ebx + 0x150);
    if (TEST_Z(eax, eax)) goto loc_003AF1EC; /* je: equal / zero */

loc_003AF1E5: ;
    MEM32(esi + 0x78C) = MEM32(esi + 0x78C) | 2;

loc_003AF1EC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x16F8);
    xmm0 = MEMF(esi + ecx * 4 + 0x16FC); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003AF20C; /* jbe: below or equal (unsigned <=) */

loc_003AF205: ;
    MEM32(esi + 0x78C) = MEM32(esi + 0x78C) & 0xFFFFFFFCu;

loc_003AF20C: ;
    edx = esi;
    PUSH32(esp, 0); sub_0038F8B0(); /* call 0x0038F8B0 */

loc_003AF213: ;
    if (TEST_NZ(eax, eax)) goto loc_003AF2A7; /* jne: not equal / not zero */

loc_003AF21B: ;
    edx = MEM32(esi + 0x784);
    PUSH32(esp, edx);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_003AF22C: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_003AF2A7; /* je: equal / zero */

loc_003AF232: ;
    PUSH32(esp, 0); sub_00299CB0(); /* call 0x00299CB0 */

loc_003AF237: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003AF2A7; /* je: equal / zero */

loc_003AF23B: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_003AF242: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003AF2A7; /* je: equal / zero */

loc_003AF249: ;
    PUSH32(esp, 0); sub_00388890(); /* call 0x00388890 */

loc_003AF24E: ;
    if (TEST_Z(eax, eax)) goto loc_003AF2A7; /* je: equal / zero */

loc_003AF252: ;
    xmm1 = MEMF(esi + 0x774); /* movss */
    xmm0 = MEMF(0x6491F8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + 0x38) = LO16(ecx);
    xmm1 = MEMF(esi + 0x770); /* movss */
    ecx = MEM32(ebp + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    MEM16(eax + 0x36) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 0xAC));
    MEM16(eax + 0x34) = LO16(edx);
    SET_LO8(ecx, MEM8(esi + 0x78C));
    edx = MEM32(eax);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = MEM32(edi + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003AF2A7: ;
    edx = esi + 0x1710;
    PUSH32(esp, edx);
    edi = esi + 0x170C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00388E40(); /* call 0x00388E40 */

loc_003AF2BD: ;
    xmm7 = MEMF(0x648F60); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    esi = MEM32(esp + 0x20);
    goto loc_003AF2DE;

loc_003AF2D6: ;
    MEMF(esi + 0x780) = xmm4; /* movss */

loc_003AF2DE: ;
    eax = MEM32(esi + 0x7A8);
    if (TEST_Z(eax, eax)) goto loc_003AF4D2; /* je: equal / zero */

loc_003AF2EC: ;
    eax = MEM32(esi + 0x1F0);
    if (CMP_EQ(eax, MEM32(esp + 0x30))) goto loc_003AF384; /* je: equal / zero */

loc_003AF2FC: ;
    if (TEST_Z(eax, eax)) goto loc_003AF384; /* je: equal / zero */

loc_003AF304: ;
    if (CMP_BE(MEM16(eax + 0x3AE), 0)) goto loc_003AF384; /* jbe: below or equal (unsigned <=) */

loc_003AF30E: ;
    eax = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0); sub_0004DFE0(); /* call 0x0004DFE0 */

loc_003AF317: ;
    ecx = MEM32(eax + 0x14C);
    if (TEST_NZ(ecx, ecx)) goto loc_003AF334; /* jne: not equal / not zero */

loc_003AF321: ;
    ecx = MEM32(eax + 0x150);
    if (TEST_NZ(ecx, ecx)) goto loc_003AF334; /* jne: not equal / not zero */

loc_003AF32B: ;
    MEM32(esi + 0x78C) = MEM32(esi + 0x78C) & 3;
    goto loc_003AF384;

loc_003AF334: ;
    MEM32(esi + 0x78C) = MEM32(esi + 0x78C) | 4;
    goto loc_003AF384;

loc_003AF33D: ;
    MEM32(esi + 0x78C) = edx;
    MEMF(esi + 0x780) = xmm4; /* movss */
    if (CMP_EQ(MEM32(esi + 0x7A8), edx)) goto loc_003AF4D2; /* je: equal / zero */

loc_003AF357: ;
    eax = esi + 0x1710;
    PUSH32(esp, eax);
    edi = esi + 0x170C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00388E40(); /* call 0x00388E40 */

loc_003AF36D: ;
    xmm7 = MEMF(0x648F60); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    esi = MEM32(esp + 0x20);

loc_003AF384: ;
    eax = MEM32(esi + 0x7A8);
    if (TEST_Z(eax, eax)) goto loc_003AF4D2; /* je: equal / zero */

loc_003AF392: ;
    eax = MEM32(esi + 0x788);
    if (TEST_NZ(eax, eax)) goto loc_003AF4D2; /* jne: not equal / not zero */

loc_003AF3A0: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_003AF4D2; /* je: equal / zero */

loc_003AF3AC: ;
    xmm1 = MEMF(0x7F9F5C); /* movss */
    xmm1 = xmm1 * MEMF(0x7FA21C); /* mulss */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    xmm0 = MEMF(esi + 0x77C); /* movss */
    xmm6 = MEMF(esi + 0x778); /* movss */
    xmm3 = MEMF(0x64909C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    if ((xmm1 <= xmm5)) goto loc_003AF410; /* jbe: below or equal (unsigned <=) */

loc_003AF3E2: ;
    xmm2 = xmm6; /* movaps */

loc_003AF3E5: ;
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    xmm7 = xmm7 + xmm2; /* addss */
    xmm2 = xmm7; /* movaps */
    if ((xmm0 > xmm5)) goto loc_003AF3E5; /* ja: above (unsigned >) */

loc_003AF400: ;
    xmm7 = MEMF(0x648F60); /* movss */
    MEMF(esi + 0x778) = xmm2; /* movss */

loc_003AF410: ;
    /* comiss xmm1, xmm5 - sets EFLAGS */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - MEMF(esi + 0x778); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x778); /* addss */
    MEMF(esi + 0x778) = xmm2; /* movss */
    xmm0 = xmm1; /* movaps */
    if ((xmm1 <= xmm5)) goto loc_003AF466; /* jbe: below or equal (unsigned <=) */

loc_003AF43B: ;
    xmm1 = MEMF(esi + 0x77C); /* movss */

loc_003AF443: ;
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = xmm2; /* movaps */
    if ((xmm0 > xmm5)) goto loc_003AF443; /* ja: above (unsigned >) */

loc_003AF45E: ;
    MEMF(esi + 0x77C) = xmm1; /* movss */

loc_003AF466: ;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - MEMF(esi + 0x77C); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x77C); /* addss */
    MEMF(esi + 0x77C) = xmm1; /* movss */
    xmm0 = MEMF(esi + 0x778); /* movss */
    xmm1 = MEMF(esi + 0x770); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esi + 0x77C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    MEMF(esi + 0x770) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x774); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = esi;
    MEMF(esi + 0x774) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003978E0(); /* call 0x003978E0 */

loc_003AF4D2: ;
    xmm0 = MEMF(esi + 0x770); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_003AF4E5; /* jbe: below or equal (unsigned <=) */

loc_003AF4DF: ;
    xmm0 = xmm0 - xmm7; /* subss */
    goto loc_003AF4FA;

loc_003AF4E5: ;
    /* comiss xmm4, MEMF(esi + 0x770) - sets EFLAGS */
    if ((xmm4 <= MEMF(esi + 0x770))) goto loc_003AF502; /* jbe: below or equal (unsigned <=) */

loc_003AF4EE: ;
    xmm0 = MEMF(esi + 0x770); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */

loc_003AF4FA: ;
    MEMF(esi + 0x770) = xmm0; /* movss */

loc_003AF502: ;
    xmm0 = MEMF(0x6497D4); /* movss */
    /* comiss xmm0, MEMF(esi + 0x774) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 0x774))) goto loc_003AF52B; /* ja: above (unsigned >) */

loc_003AF513: ;
    xmm1 = MEMF(esi + 0x774); /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003AF52B; /* ja: above (unsigned >) */

loc_003AF528: ;
    xmm0 = xmm1; /* movaps */

loc_003AF52B: ;
    SET_LO8(ecx, MEM8(esi + 0x78C));
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x16B0);
    edi = MEM32(esi + 0xCE4);
    (void)0; /* test LO8(ecx), 3 - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ecx), 3)) ? 1 : 0); /* setne */
    MEMF(esi + 0x774) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm4; /* movss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    MEMF(esp + 0x50) = xmm4; /* movss */
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00331D90(); /* call 0x00331D90 */

loc_003AF570: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x16B0);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    esi = esp + 0x14C;
    edx = edi;
    PUSH32(esp, 0); sub_00331950(); /* call 0x00331950 */

loc_003AF58F: ;
    esi = MEM32(esp + 0x40);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x16B0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    eax = MEM32(edx + edi + 0x7C);
    ecx = edx + edi + 0x14;
    esp = esp + 0x20;
    eax = eax - 0;
    if ((eax == 0)) goto loc_003AF5B8; /* je: equal / zero */

loc_003AF5B0: ;
    eax--;
    if ((eax != 0)) goto loc_003AF5EC; /* jne: not equal / not zero */

loc_003AF5B3: ;
    eax = ecx + 0x1C;
    goto loc_003AF5BE;

loc_003AF5B8: ;
    eax = edi + 0x29C;

loc_003AF5BE: ;
    if (TEST_Z(eax, eax)) goto loc_003AF5EC; /* je: equal / zero */

loc_003AF5C2: ;
    SET_LO8(ecx, MEM8(eax + 3));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003AF5EC; /* je: equal / zero */

loc_003AF5C9: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8B1);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003AF5EA: ;
    goto loc_003AF5EF;

loc_003AF5EC: ;
    ebx = MEM32(ebp + 8);

loc_003AF5EF: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_003AF859; /* je: equal / zero */

loc_003AF5FB: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_003AF859; /* je: equal / zero */

loc_003AF609: ;
    if (TEST_NZ(MEM8(esi + 0x78C), 3)) goto loc_003AF628; /* jne: not equal / not zero */

loc_003AF612: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x16B0);
    edx = edi;
    PUSH32(esp, 0); sub_00332770(); /* call 0x00332770 */

loc_003AF620: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003AF859; /* je: equal / zero */

loc_003AF628: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x16B0);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_003AF63C: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003AF824; /* je: equal / zero */

loc_003AF647: ;
    edi = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x16B0);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00331BF0(); /* call 0x00331BF0 */

loc_003AF65F: ;
    eax = edi;
    edi = MEM32(ebx + 0x23C);
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003AF66F: ;
    eax = MEM32(esp + 0x30);
    eax = MEM32(eax + 0x568);
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + 1;
    SET_LO8(eax, MEM8(esi + 0x16F8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003AF6A7; /* jne: not equal / not zero */

loc_003AF68A: ;
    edx = MEM32(esi + 0x16D4);
    eax = MEM32(edx);
    MEM32(esp + 0x10) = 0;
    ecx = esi + 0x1734;
    edi = 1;
    goto loc_003AF6C3;

loc_003AF6A7: ;
    eax = MEM32(esi + 0x16D4);
    eax = MEM32(eax + 4);
    MEM32(esp + 0x10) = 1;
    ecx = esi + 0x173A;
    edi = 2;

loc_003AF6C3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0038A3A0(); /* call 0x0038A3A0 */

loc_003AF6D1: ;
    edi = MEM32(esp + 0x20);
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    edx = esp + 0xAC;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000C0570(); /* call 0x000C0570 */

loc_003AF6FD: ;
    PUSH32(esp, 0);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edx = esp + 0xB4;
    MEM8(esp + 0xC3) = LO8(eax);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_001A88B0(); /* call 0x001A88B0 */

loc_003AF720: ;
    SET_LO8(ecx, MEM8(esp + 0xC7));
    esp = esp + 0x44;
    if (CMP_NE(LO8(ecx), 1)) goto loc_003AF787; /* jne: not equal / not zero */

loc_003AF72F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003AF787; /* jne: not equal / not zero */

loc_003AF733: ;
    ecx = MEM32(esp + 0x30);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = 0x1F;
    eax = esp + 0x98;
    PUSH32(esp, 0); sub_0030CB70(); /* call 0x0030CB70 */

loc_003AF751: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x16F8);
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esi + edx * 4 + 0x1704) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003AF76E: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x16F8);
    ecx = MEM32(eax * 4 + 0x74EB74);
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_003AF784: ;
    esp = esp + 0xC;

loc_003AF787: ;
    SET_LO8(ecx, MEM8(esi + 0x16F8));
    eax = MEM32(0x847024);
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    MEM8(esi + 0x16F8) = LO8(edx);
    edi = MEM32(eax + 0x40);
    PUSH32(esp, 0xC41);
    PUSH32(esp, 0x909);
    MEM32(esp + 0x13C) = edi;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_003AF7BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003AF7CB: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB21);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003AF7ED: ;
    fp_push(MEMF(ebx + 0x114)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x54) = xmm6; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_003AF85C;

loc_003AF824: ;
    edx = MEM32(esp + 0x30);
    eax = ZX16(MEM16(edx + 0x60));
    PUSH32(esp, 0); sub_0004DFE0(); /* call 0x0004DFE0 */

loc_003AF831: ;
    ecx = MEM32(eax + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003AF859; /* je: equal / zero */

loc_003AF838: ;
    ecx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    eax = edx;
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB4F);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003AF859: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_003AF85C: ;
    eax = MEM32(esi + 0x1F0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_003AF8DD; /* je: equal / zero */

loc_003AF86A: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_003AF8DD; /* je: equal / zero */

loc_003AF874: ;
    xmm0 = MEMF(esi + 0x16B4); /* movss */
    (void)0; /* test MEM8(esi + 0x78C), 4 - flags set for next jcc */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(esi + 0x16B4) = xmm0; /* movss */
    if (TEST_Z(MEM8(esi + 0x78C), 4)) goto loc_003AF8DD; /* je: equal / zero */

loc_003AF895: ;
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 < xmm0)) goto loc_003AF8DD; /* jb: below (unsigned <) */

loc_003AF89A: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(ebx + 0x23C);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003AF8A9: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x568);
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + 1;
    SET_LO8(eax, MEM8(esi + 0x16B8));
    xmm0 = MEMF(0x648E64); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, 1);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEMF(esi + 0x16B4) = xmm0; /* movss */
    MEM8(esi + 0x16B8) = LO8(ecx);

loc_003AF8DD: ;
    eax = 0x74EB74;
    MEM32(esp + 0x10) = eax;
    edi = esi + 0x16FC;
    /* nop */

loc_003AF8F0: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_003AF920; /* jbe: below or equal (unsigned <=) */

loc_003AF8FA: ;
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    MEMF(edi + 8) = xmm0; /* movss */
    if ((xmm6 < xmm0)) goto loc_003AF920; /* jb: below (unsigned <) */

loc_003AF90C: ;
    edx = MEM32(eax);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_003AF916: ;
    xmm6 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x14);
    esp = esp + 4;

loc_003AF920: ;
    xmm0 = MEMF(edi); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_003AF935; /* jbe: below or equal (unsigned <=) */

loc_003AF929: ;
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(edi) = xmm0; /* movss */

loc_003AF935: ;
    eax = eax + 4;
    edi = edi + 4;
    (void)0; /* cmp eax, 0x74EB7C - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, 0x74EB7C)) goto loc_003AF8F0; /* jl: less (signed <) */

loc_003AF946: ;
    xmm0 = MEMF(ebx + 0x1C0); /* movss */
    xmm7 = MEMF(0x648E18); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm7; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0x174;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003AF96E: ;
    xmm0 = MEMF(ebx + 0x114); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0xE4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003AF98D: ;
    xmm0 = MEMF(ebx + 0x1CC); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x134;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003AF9AC: ;
    esp = esp + 4;
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    ecx = esp + 0x174;
    PUSH32(esp, ecx);
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003AF9CC: ;
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x134;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003AF9DD: ;
    xmm0 = MEMF(0x64B3C8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64AFEC); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA0); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x649390); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x6491EC); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x774); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm7; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0xE4;
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x48) = xmm6; /* movss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003AFA5B: ;
    esp = esp + 4;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003AFA6E: ;
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003AFA83: ;
    xmm0 = MEMF(esi + 0x770); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm7; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0xE4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003AFAA3: ;
    eax = ecx;
    esp = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003AFAB6: ;
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003AFACB: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    ebx = esi + 0x171C;
    eax = ebx;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 4) = edx;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003AFAF6: ;
    edi = MEM32(esp + 0x9C);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = ebx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x24;
    ecx = esp + 0x34;
    edx = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003AFB82: ;
    eax = esp + 0x24;
    ecx = eax;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edi = esi + 0x1728;
    edx = esp + 0x24;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = edi;
    ebx = edi;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003AFC01: ;
    ecx = esp + 0x34;
    eax = esp + 0x44;
    edx = ecx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003AFC53: ;
    eax = MEM32(esp + 0x9C);
    ecx = esp + 0x34;
    edx = ecx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x38), _icall_esp); /* indirect call */
    }

loc_003AFCA9: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    eax = MEM32(esi + 0x1F0);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x648E3C); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esi + 0xE38) = xmm2; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003AFD51; /* je: equal / zero */

loc_003AFCD4: ;
    ecx = MEM32(eax + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_003AFD51; /* je: equal / zero */

loc_003AFCDE: ;
    ecx = MEM32(esi + 0x2A0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    if (TEST_Z(ecx, ecx)) goto loc_003AFCFF; /* je: equal / zero */

loc_003AFCF0: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    goto loc_003AFD17;

loc_003AFCFF: ;
    edx = MEM32(esp + 0x24);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    SET_LO8(edx, 1);

loc_003AFD17: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xCE8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00389A90(); /* call 0x00389A90 */

loc_003AFD2D: ;
    eax = MEM32(esi + 0x2A0);
    if (TEST_Z(eax, eax)) goto loc_003AFD9E; /* je: equal / zero */

loc_003AFD37: ;
    ecx = MEM32(eax + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_003AFD9E; /* je: equal / zero */

loc_003AFD41: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    goto loc_003AFD69;

loc_003AFD51: ;
    eax = MEM32(esi + 0x2A0);
    if (TEST_Z(eax, eax)) goto loc_003AFD9E; /* je: equal / zero */

loc_003AFD5B: ;
    ecx = MEM32(eax + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_003AFD9E; /* je: equal / zero */

loc_003AFD65: ;
    xmm0 = xmm0 - xmm1; /* subss */

loc_003AFD69: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x17BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = 1;
    SET_LO8(edx, LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00389A90(); /* call 0x00389A90 */

loc_003AFD9E: ;
    xmm0 = MEMF(0x64AA34); /* movss */
    ebx = esi + 0x16C8;
    ecx = esp + 0x68;
    MEM32(esp + 0x20) = ebx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x50;
    edx = ecx;
    ecx = eax;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edi = esi + 0x16BC;
    edx = esp + 0x50;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648E40); /* movss */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x20) = edi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = ebx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x649414); /* movss */
    /* comiss xmm0, MEMF(esi + 0x79C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x79C))) goto loc_003AFF50; /* jbe: below or equal (unsigned <=) */

loc_003AFEDA: ;
    eax = MEM32(ebp + 8);
    SET_LO8(ebx, MEM8(eax + 0x60));
    eax = MEM32(0x84B284);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(esi + 0xC20); /* movss */
    if (TEST_Z(eax, eax)) goto loc_003AFF50; /* je: equal / zero */

loc_003AFEF1: ;
    if (CMP_GE(MEM8(0x801892), 0x40)) goto loc_003AFF50; /* jge: greater or equal (signed >=) */

loc_003AFEFA: ;
    SET_LO8(edx, MEM8(0x801893));
    eax = MEM32(0x84B27C);
    ecx = SX8(LO8(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = eax + ecx;
    ecx = MEM32(esp + 0x9C);
    edi = MEM32(ecx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x6491EC); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    SET_LO8(edx, LO8(edx) + 1);
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEM8(eax + 0x18) = LO8(ebx);
    MEM8(0x801893) = LO8(edx);

loc_003AFF50: ;
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
 * sub_003AFF60
 * Original: 0x003AFF60 - 0x003AFFCE (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AFF60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003AFF60: ;
    ecx = MEM32(esp + 0xC);
    if (TEST_Z(ecx, ecx)) { sub_003AFFCE(); return; } /* je: equal / zero */

loc_003AFF68: ;
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, 0xDD)) goto loc_003AFF79; /* je: equal / zero */

loc_003AFF72: ;
    if (CMP_NE(eax, 0xEB)) { sub_003AFFCE(); return; } /* jne: not equal / not zero */

loc_003AFF79: ;
    ecx = MEM32(ecx + 0x570);
    eax = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0x1348); /* movss */
    xmm0 = xmm0 + MEMF(eax + 4); /* addss */
    xmm1 = MEMF(0x648CE0); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(eax + 4) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_003AFFA8; /* jbe: below or equal (unsigned <=) */

loc_003AFFA2: ;
    xmm0 = xmm0 - xmm1; /* subss */
    goto loc_003AFFB9;

loc_003AFFA8: ;
    xmm2 = MEMF(0x648D74); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_003AFFBE; /* jbe: below or equal (unsigned <=) */

loc_003AFFB5: ;
    xmm0 = xmm0 + xmm1; /* addss */

loc_003AFFB9: ;
    MEMF(eax + 4) = xmm0; /* movss */

loc_003AFFBE: ;
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_003AFFCD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B0060
 * Original: 0x003B0060 - 0x003B00BD (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B0060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003B00AA; /* je: equal / zero */

loc_003B007C: ;
    xmm0 = MEMF(eax + 0x770); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x79);
    ecx = esp + 0x14;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B009D: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B00AA: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B00B8: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B00C0
 * Original: 0x003B00C0 - 0x003B011D (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B00C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B00C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003B010A; /* je: equal / zero */

loc_003B00DC: ;
    xmm0 = MEMF(eax + 0x774); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x78);
    ecx = esp + 0x14;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B00FD: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B010A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B0118: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B0120
 * Original: 0x003B0120 - 0x003B02CD (429 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;

loc_003B0120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = MEM32(edi + 0x570);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B014F: ;
    eax = edx;
    ecx = esp + 0x1C;
    esi = esp + 0x70;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_003B015E: ;
    eax = MEM32(esp + 0xC);
    esi = edi + 0x78;
    eax = eax + 0x16C8;
    ecx = esp + 0x10;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003B01B3: ;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003B01C3: ;
    edx = esp + 0x10;
    ecx = esp + 0x24;
    eax = edx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x649358); /* mulss */
    xmm1 = MEMF(0x649354); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_003B022E; /* ja: above (unsigned >) */

loc_003B0221: ;
    xmm1 = MEMF(0x648D1C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003B0237; /* jbe: below or equal (unsigned <=) */

loc_003B022E: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_003B0237: ;
    xmm6 = MEMF(0x648E18); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x34;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B0254: ;
    esp = esp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B025F: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x649350); /* mulss */
    xmm1 = MEMF(0x59BAE4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_003B028D; /* ja: above (unsigned >) */

loc_003B0280: ;
    xmm1 = MEMF(0x648CF4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003B0296; /* jbe: below or equal (unsigned <=) */

loc_003B028D: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_003B0296: ;
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0x34;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B02AB: ;
    esp = esp + 4;
    PUSH32(esp, ebx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B02B8: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B02C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B02D0
 * Original: 0x003B02D0 - 0x003B032D (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B02D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B02D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003B031A; /* je: equal / zero */

loc_003B02EC: ;
    xmm0 = MEMF(eax + 0x1748); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x78);
    ecx = esp + 0x14;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B030D: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B031A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B0328: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B0330
 * Original: 0x003B0330 - 0x003B038D (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B0330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003B037A; /* je: equal / zero */

loc_003B034C: ;
    xmm0 = MEMF(eax + 0x174C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x78);
    ecx = esp + 0x14;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B036D: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B037A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B0388: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B0390
 * Original: 0x003B0390 - 0x003B04E1 (337 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B0390: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = ecx + esi + 0x1F0;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    if (TEST_NZ(eax, eax)) goto loc_003B0426; /* jne: not equal / not zero */

loc_003B03B2: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x63E500;
    MEM32(esp + 0x2C) = 2;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003B03E0: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003B03F4; /* je: equal / zero */

loc_003B03E7: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_003B03F4; /* je: equal / zero */

loc_003B03EF: ;
    ebp = MEM32(eax + 8);
    goto loc_003B03F6;

loc_003B03F4: ;
    ebp = 0; /* xor self */

loc_003B03F6: ;
    SET_LO8(eax, MEM8(esi + 0xC75));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B049C; /* je: equal / zero */

loc_003B0404: ;
    edx = MEM32(esi + 0x16D4);
    PUSH32(esp, 1);
    eax = esi + 0x1740;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x20);
    edi = 3;
    goto loc_003B0494;

loc_003B0426: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F0C94;
    MEM32(esp + 0x2C) = 5;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003B0454: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003B0468; /* je: equal / zero */

loc_003B045B: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_003B0468; /* je: equal / zero */

loc_003B0463: ;
    ebp = MEM32(eax + 8);
    goto loc_003B046A;

loc_003B0468: ;
    ebp = 0; /* xor self */

loc_003B046A: ;
    SET_LO8(eax, MEM8(esi + 0xC75));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B049C; /* je: equal / zero */

loc_003B0474: ;
    ecx = MEM32(esi + 0x16D4);
    edx = MEM32(esi + 4);
    PUSH32(esp, 1);
    eax = esi + 0x1744;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, edx);
    edi = 4;

loc_003B0494: ;
    PUSH32(esp, 0); sub_0038A3A0(); /* call 0x0038A3A0 */

loc_003B0499: ;
    esp = esp + 0x10;

loc_003B049C: ;
    (void)0; /* cmp MEM32(esp + 0x24), 3 - flags set for next jcc */
    edi = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(esp + 0x24), 3)) { sub_003B04E1(); return; } /* jne: not equal / not zero */

loc_003B04A7: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) { sub_003B04E1(); return; } /* je: equal / zero */

loc_003B04B1: ;
    eax = MEM32(esi + 0x16D4);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_003B04CC: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    MEM8(ecx + 0xD) = 7;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B0560
 * Original: 0x003B0560 - 0x003B057E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B0560: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebp = ecx;
    if (TEST_NZ(eax, eax)) { sub_003B057E(); return; } /* jne: not equal / not zero */

loc_003B0571: ;
    eax = MEM32(edi + 0xAC);
    esi = 0; /* xor self */
    eax = eax + 3;
    g_seh_ebp = ebp; sub_003B0588(); return; /* tail jmp 0x003B0588 */

}

/**
 * sub_003B08E0
 * Original: 0x003B08E0 - 0x003B0987 (167 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B08E0(void)
{
    float xmm0, xmm1, xmm2;

loc_003B08E0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    PUSH32(esp, esi);
    ecx = eax + 0x171C;
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax + 0x1730);
    ecx = MEM32(eax + 0x1728);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003B0910: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    edx = MEM32(esp + 0x14);
    MEMF(edx) = xmm0; /* movss */
    xmm1 = MEMF(eax + 0x1728); /* movss */
    xmm0 = MEMF(eax + 0x1730); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    esp = esp + 8;
    MEMF(esp + 8) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 8)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x172C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003B0970: ;
    eax = MEM32(esp + 0x18);
    xmm0 = xmm0 * MEMF(0x64934C); /* mulss */
    esp = esp + 8;
    MEMF(eax) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003B0990
 * Original: 0x003B0990 - 0x003B09DB (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm1, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B0990: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x1F0);
    eax = ZX16(MEM16(edx + 0x60));
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_L(eax, esi)) goto loc_003B09AD; /* jl: less (signed <) */

loc_003B09A8: ;
    eax = 0x14;

loc_003B09AD: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm4 = 0.0f; /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = eax + 0x763260;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003B09DB(); return; } /* jbe: below or equal (unsigned <=) */

loc_003B09D6: ;
    xmm1 = xmm4; /* movaps */
    g_seh_ebp = ebp; sub_003B09F0(); return; /* tail jmp 0x003B09F0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003B0B40
 * Original: 0x003B0B40 - 0x003B0BD6 (150 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0B40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B0B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax + 0xC75));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B0BD2; /* je: equal / zero */

loc_003B0B51: ;
    ecx = MEM32(esp + 8);
    ecx = ecx - 0;
    PUSH32(esp, edi);
    if ((ecx == 0)) goto loc_003B0B83; /* je: equal / zero */

loc_003B0B5B: ;
    ecx--;
    if ((ecx != 0)) goto loc_003B0BA8; /* jne: not equal / not zero */

loc_003B0B5E: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    ecx = eax + 0x1744;
    MEMF(esp + 0xC) = xmm0; /* movss */
    edi = 4;
    edx = edx + 0xA;
    goto loc_003B0BB4;

loc_003B0B83: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    ecx = eax + 0x1740;
    MEMF(esp + 0xC) = xmm0; /* movss */
    edi = 3;
    edx = edx + 8;
    goto loc_003B0BB4;

loc_003B0BA8: ;
    ecx = MEM32(esp + 0xC);
    edi = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);

loc_003B0BB4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x16D4);
    eax = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esi + edx * 4);
    PUSH32(esp, 0); sub_0038A3A0(); /* call 0x0038A3A0 */

loc_003B0BCE: ;
    esp = esp + 0x10;
    POP32(esp, edi);

loc_003B0BD2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B0BE0
 * Original: 0x003B0BE0 - 0x003B0C43 (99 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B0BE0: ;
    xmm0 = MEMF(ecx + 0x770); /* movss */
    xmm1 = MEMF(0x648F60); /* movss */
    esp = esp - 8;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003B0C09; /* jbe: below or equal (unsigned <=) */

loc_003B0BF8: ;
    goto loc_003B0C00;

    /* nop */

loc_003B0C00: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_003B0C00; /* ja: above (unsigned >) */

loc_003B0C09: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_003B0C1A; /* jbe: below or equal (unsigned <=) */

loc_003B0C11: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_003B0C11; /* ja: above (unsigned >) */

loc_003B0C1A: ;
    xmm5 = MEMF(0x648E6C); /* movss */
    xmm7 = MEMF(0x649344); /* movss */
    xmm6 = MEMF(0x648F64); /* movss */
    xmm4 = xmm0; /* movaps */
    /* comiss xmm4, xmm5 - sets EFLAGS */
    xmm3 = xmm2; /* movaps */
    if ((xmm4 < xmm5)) { sub_003B0C43(); return; } /* jb: below (unsigned <) */

loc_003B0C3D: ;
    xmm0 = xmm0 - xmm1; /* subss */
    g_seh_ebp = ebp; sub_003B0C4B(); return; /* tail jmp 0x003B0C4B */

}

/**
 * sub_003B0CD0
 * Original: 0x003B0CD0 - 0x003B0D7D (173 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B0CD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0038B790(); /* call 0x0038B790 */

loc_003B0CDC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    MEM32(esi) = 0x641538;
    MEM16(esi + 0xEE0) = LO16(ebx);
    MEMF(esi + 0xEE4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0032D650(); /* call 0x0032D650 */

loc_003B0CFF: ;
    MEM32(esi + 0xCDC) = eax;
    SET_LO8(ecx, MEM8(eax + 0x12));
    MEM8(esi + 0xDE8) = LO8(ecx);
    SET_LO16(eax, ZX8(MEM8(eax + 0x12)));
    PUSH32(esp, 0x641644);
    MEM16(edi + 0x3B0) = LO16(eax);
    MEM16(edi + 0x3AE) = LO16(eax);
    PUSH32(esp, 0x641630);
    PUSH32(esp, 0x17);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_003B0D34: ;
    edx = MEM32(edi + 0x114);
    esp = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_003B0D46: ;
    PUSH32(esp, 0); sub_002F9560(); /* call 0x002F9560 */

loc_003B0D4B: ;
    PUSH32(esp, 0x641644);
    MEM32(esi + 0xCE0) = eax;
    PUSH32(esp, 0x64161C);
    PUSH32(esp, 0x17);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_003B0D64: ;
    esp = esp + 0xC;
    ebp = eax;
    PUSH32(esp, 0); sub_0032D490(); /* call 0x0032D490 */

loc_003B0D6E: ;
    (void)0; /* cmp MEM8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0xC) = ebx;
    if (CMP_NE(MEM8(eax), LO8(ebx))) { sub_003B0D7D(); return; } /* jne: not equal / not zero */

loc_003B0D76: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_003B0D82(); return; /* tail jmp 0x003B0D82 */

}

/**
 * sub_003B0E10
 * Original: 0x003B0E10 - 0x003B0E3A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B0E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_003B0E40(); /* call 0x003B0E40 */

loc_003B0E18: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_003B0E34; /* je: equal / zero */

loc_003B0E1F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_003B0E34; /* je: equal / zero */

loc_003B0E27: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003B0E31: ;
    esp = esp + 4;

loc_003B0E34: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B0E40
 * Original: 0x003B0E40 - 0x003B0EB6 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B0E40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0xCE8);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = ebp + 0xCE8;
    PUSH32(esp, edi);
    MEM32(ebp) = 0x641538;
    if (TEST_Z(eax, eax)) goto loc_003B0E66; /* je: equal / zero */

loc_003B0E5C: ;
    PUSH32(esp, 0); sub_0032D490(); /* call 0x0032D490 */

loc_003B0E61: ;
    PUSH32(esp, 0); sub_0032D540(); /* call 0x0032D540 */

loc_003B0E66: ;
    eax = MEM32(ebp + 0xCE4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ebp + 0xCE4;
    if (TEST_Z(eax, eax)) goto loc_003B0E7C; /* je: equal / zero */

loc_003B0E77: ;
    PUSH32(esp, 0); sub_003326A0(); /* call 0x003326A0 */

loc_003B0E7C: ;
    eax = MEM32(ebp + 0xCE0);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = ebp + 0xCE0;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_003B0E97; /* je: equal / zero */

loc_003B0E8D: ;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_003B0E92: ;
    PUSH32(esp, 0); sub_002F9630(); /* call 0x002F9630 */

loc_003B0E97: ;
    eax = MEM32(ebp + 0xCDC);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = ebp + 0xCDC;
    if (TEST_Z(eax, eax)) goto loc_003B0EAC; /* je: equal / zero */

loc_003B0EA7: ;
    PUSH32(esp, 0); sub_0032D790(); /* call 0x0032D790 */

loc_003B0EAC: ;
    POP32(esp, edi);
    ecx = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0038C160(); return; /* tail jmp 0x0038C160 */

}

/**
 * sub_003B0EC0
 * Original: 0x003B0EC0 - 0x003B0F7F (191 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B0EC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = edi;
    PUSH32(esp, 0); sub_003937D0(); /* call 0x003937D0 */

loc_003B0ED0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001B4290(); /* call 0x001B4290 */

loc_003B0ED6: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003913D0(); /* call 0x003913D0 */

loc_003B0EE1: ;
    eax = MEM32(0x74EBB0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_003B0EF5: ;
    esp = esp + 0x10;
    esi = 0x74EC28;
    /* nop */

loc_003B0F00: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_003B0F6E; /* je: equal / zero */

loc_003B0F06: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003B0F0E: ;
    ecx = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(ecx, ecx)) goto loc_003B0F6E; /* je: equal / zero */

loc_003B0F1B: ;
    eax = MEM32(edi + 0x4B0);
    if (TEST_Z(eax, eax)) goto loc_003B0F6E; /* je: equal / zero */

loc_003B0F25: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_003B0F6E; /* je: equal / zero */

loc_003B0F2C: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x14);
    MEM32(0x812A18) = ecx;
    eax = MEM32(eax + 0x10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003B0F49: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003B0F6E; /* je: equal / zero */

loc_003B0F50: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003B0F6E; /* je: equal / zero */

loc_003B0F58: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, eax)) goto loc_003B0F6E; /* je: equal / zero */

loc_003B0F5F: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(0x812A18);
    MEM32(eax + edx) = 0;

loc_003B0F6E: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x74EC34)) goto loc_003B0F00; /* jl: less (signed <) */

loc_003B0F79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B0F80
 * Original: 0x003B0F80 - 0x003B0FEE (110 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B0F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edx = ebx;
    PUSH32(esp, 0); sub_0038F8B0(); /* call 0x0038F8B0 */

loc_003B0F95: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(ebp + 8);
    MEM32(esp + 0x1C) = eax;
    MEM8(ecx + 0x543) = 0;
    MEM32(ecx + 0x200) = 0x20000243;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_003B0FEE(); return; } /* jne: not equal / not zero */

loc_003B0FCC: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = esp + 0x2C;
    esi = esp + 0x20;
    edx = esp + 0x1C;
    PUSH32(esp, 0); sub_0038EE80(); /* call 0x0038EE80 */

loc_003B0FE3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_003B1087(); return; /* tail jmp 0x003B1087 */

}

/**
 * sub_003B1500
 * Original: 0x003B1500 - 0x003B1B9F (1695 bytes, 456 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B1500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003B1500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1A4;
    xmm0 = MEMF(0x7F9F5C); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    fp_push(MEMF(edi + 0x114)); /* fld float */
    eax = edi + 0x78;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = esi + 0x7C4;
    edx = MEM32(ecx);
    MEM32(esp + 0x38) = eax;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x10) = 0;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003B156A: ;
    MEM16(edi + 0x170) = LO16(eax);
    MEM16(edi + 0x174) = LO16(eax);
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B1592; /* je: equal / zero */

loc_003B1581: ;
    eax = MEM32(esi + 0x7A8);
    if (TEST_Z(eax, eax)) goto loc_003B1592; /* je: equal / zero */

loc_003B158B: ;
    eax = edi;
    PUSH32(esp, 0); sub_00261910(); /* call 0x00261910 */

loc_003B1592: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0038E690(); /* call 0x0038E690 */

loc_003B1599: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x638C80);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003B15A5: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B15D8; /* je: equal / zero */

loc_003B15B2: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_003B15D8; /* je: equal / zero */

loc_003B15BC: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003B15D8; /* je: equal / zero */

loc_003B15C3: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 1);
    ebx = 0x638C80;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003B15D5: ;
    esp = esp + 4;

loc_003B15D8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63F3E8);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003B15E4: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B1617; /* je: equal / zero */

loc_003B15F1: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_003B1617; /* je: equal / zero */

loc_003B15FB: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003B1617; /* je: equal / zero */

loc_003B1602: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x63F3E8;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003B1614: ;
    esp = esp + 4;

loc_003B1617: ;
    eax = MEM32(esi + 0x1F0);
    if (TEST_Z(eax, eax)) goto loc_003B1A24; /* je: equal / zero */

loc_003B1625: ;
    ebx = MEM32(eax + 0x564);
    xmm6 = MEMF(0x648E18); /* movss */
    MEM8(eax + 0x543) = 0;
    xmm0 = MEMF(edi + 0x1C0); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0x104;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B165E: ;
    xmm0 = MEMF(edi + 0x114); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0xC4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B167D: ;
    xmm0 = MEMF(edi + 0x1CC); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x144;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B169C: ;
    esp = esp + 4;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    eax = esp + 0x104;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B16B9: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x144;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B16CE: ;
    xmm0 = MEMF(0x649550); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x770); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0xC4;
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B1725: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003B1738: ;
    eax = esp + 0x14;
    edx = esp + 0x2C;
    ecx = eax;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x649E90); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x774); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0xC4;
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B17B7: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003B17CA: ;
    xmm0 = MEMF(esi + 0x770); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0xC4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B17EA: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003B17FD: ;
    eax = esp + 0x14;
    edx = esp + 0x2C;
    ecx = eax;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003B184C: ;
    edx = MEM32(esp + 0x38);
    eax = esp + 0x14;
    ecx = eax;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = esi + 0xEEC;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_003B1A37; /* je: equal / zero */

loc_003B18AB: ;
    if (CMP_NE(MEM8(esi + 0x1FC), 2)) goto loc_003B18C8; /* jne: not equal / not zero */

loc_003B18B4: ;
    SET_LO8(ecx, MEM8(ebx + 0x2A8));
    eax = MEM32(esp + 0x10);
    SET_LO8(edx, 0x10);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax + 0x543) = MEM8(eax + 0x543) | LO8(edx);

loc_003B18C8: ;
    PUSH32(esp, 0);
    SET_LO8(eax, 0x78);
    ecx = esp + 0x104;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B18D8: ;
    esp = esp + 4;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B18E9: ;
    eax = edx;
    ecx = esp + 0xC;
    esi = esp + 0x80;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_003B18FB: ;
    PUSH32(esp, 0x40490FDB);
    SET_LO8(eax, 0x79);
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B190B: ;
    esp = esp + 4;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B191C: ;
    xmm6 = 0.0f; /* xorps self = zero */
    esi = MEM32(esp + 0x28);
    xmm7 = MEMF(0x648E18); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x770); /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x44;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B194B: ;
    esp = esp + 4;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B1961: ;
    xmm0 = MEMF(esi + 0x774); /* movss */
    xmm0 = xmm0 - MEMF(0x649B78); /* subss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm7; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0x44;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B1986: ;
    esp = esp + 4;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B199C: ;
    esp = esp - 0xC;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    eax = esp + 0x4C;
    MEMF(esp) = xmm6; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_003B19D1: ;
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B19E1: ;
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_00391610(); /* call 0x00391610 */

loc_003B19EE: ;
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    SET_LO8(ecx, 1);
    PUSH32(esp, 0); sub_00042400(); /* call 0x00042400 */

loc_003B19FA: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    ebx = ebx + 0x2DC;
    MEM32(ebx) = edx;
    eax = MEM32(ecx + 4);
    MEM32(ebx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(ebx + 8) = ecx;
    MEMF(esi + 0x278) = xmm0; /* movss */
    goto loc_003B1A37;

loc_003B1A24: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x200) = xmm0; /* movss */
    MEMF(esi + 0x278) = xmm0; /* movss */

loc_003B1A37: ;
    ecx = MEM32(esi + 0x78C);
    edi = MEM32(esi + 0xCE4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00331D90(); /* call 0x00331D90 */

loc_003B1A5B: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    esi = esp + 0x5C;
    eax = 0; /* xor self */
    edx = edi;
    PUSH32(esp, 0); sub_00331950(); /* call 0x00331950 */

loc_003B1A72: ;
    ebx = MEM32(esp + 0x30);
    esp = esp + 0x20;
    if (TEST_Z(ebx, ebx)) { sub_003B1B9F(); return; } /* je: equal / zero */

loc_003B1A81: ;
    eax = MEM32(ebx + 0x568);
    if (TEST_Z(eax, eax)) { sub_003B1B9F(); return; } /* je: equal / zero */

loc_003B1A8F: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx + 0x78C);
    if (TEST_NZ(eax, eax)) goto loc_003B1AAE; /* jne: not equal / not zero */

loc_003B1A9D: ;
    eax = 0; /* xor self */
    edx = edi;
    PUSH32(esp, 0); sub_00332770(); /* call 0x00332770 */

loc_003B1AA6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B1B9F(); return; } /* je: equal / zero */

loc_003B1AAE: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edi = 0; /* xor self */
    edx = esi;
    PUSH32(esp, 0); sub_00331A80(); /* call 0x00331A80 */

loc_003B1ABF: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B1B9F(); return; } /* je: equal / zero */

loc_003B1ACA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00331BF0(); /* call 0x00331BF0 */

loc_003B1AD5: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(esi + 0x23C);
    esp = esp + 0xC;
    eax = ebx;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003B1AE8: ;
    eax = MEM32(ebx + 0x568);
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + 1;
    eax = esp + 0x18C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x75EE54);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0038A4A0(); /* call 0x0038A4A0 */

loc_003B1B08: ;
    if (TEST_Z(eax, eax)) goto loc_003B1B29; /* je: equal / zero */

loc_003B1B0C: ;
    ecx = esp + 0x198;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = 0x20;
    eax = esp + 0x1AC;
    PUSH32(esp, 0); sub_0030CB70(); /* call 0x0030CB70 */

loc_003B1B26: ;
    esp = esp + 8;

loc_003B1B29: ;
    edx = MEM32(esp + 0x28);
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(edx + 0xEE4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003B1B42: ;
    xmm0 = xmm0 * MEMF(0x648D20); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (CMP_GE(eax & eax, 0)) goto loc_003B1B56; /* jge: greater or equal (signed >=) */

loc_003B1B52: ;
    eax = 0; /* xor self */
    goto loc_003B1B60;

loc_003B1B56: ;
    if (CMP_LE(eax, 2)) goto loc_003B1B60; /* jle: less or equal (signed <=) */

loc_003B1B5B: ;
    eax = 2;

loc_003B1B60: ;
    eax = MEM32(eax * 4 + 0x74EC28);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_003B1B6F: ;
    ecx = MEM32(0x847024);
    edi = MEM32(ecx + 0x40);
    esp = esp + 4;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC41);
    PUSH32(esp, 0x909);
    MEM32(esp + 0x4C) = edi;
    PUSH32(esp, 0); sub_00028A30(); /* call 0x00028A30 */

loc_003B1B94: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003B1B9D: ;
    g_seh_ebp = ebp; sub_003B1BA2(); return; /* tail jmp 0x003B1BA2 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003B1CB0
 * Original: 0x003B1CB0 - 0x003B1CF1 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B1CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B1CB0: ;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x444);
    eax = MEM32(edx + 8);
    eax--;
    if (CMP_A(eax, 0x21)) { sub_003B1CF1(); return; } /* ja: above (unsigned >) */

loc_003B1CC5: ;
    eax = ZX8(MEM8(eax + 0x3B1D10));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x3B1CF8)); return; /* indirect tail jmp */

    eax = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_003B1FF0
 * Original: 0x003B1FF0 - 0x003B2007 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B1FF0(void)
{

loc_003B1FF0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    MEM32(ecx) = 2;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003B2010
 * Original: 0x003B2010 - 0x003B205E (78 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2010(void)
{
    float xmm0;

loc_003B2010: ;
    edx = MEM32(esp + 4);
    eax = ecx + 0xEEC;
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
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    edx = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ecx + 0x774);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003B2060
 * Original: 0x003B2060 - 0x003B2179 (281 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B2060: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0038B790(); /* call 0x0038B790 */

loc_003B206E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    MEM32(esi) = 0x6416B8;
    MEM16(esi + 0xEE0) = LO16(ebx);
    MEMF(esi + 0xF6C) = xmm0; /* movss */
    MEM32(esi + 0xF70) = ebx;
    PUSH32(esp, 0); sub_0032D650(); /* call 0x0032D650 */

loc_003B2097: ;
    MEM32(esi + 0xCDC) = eax;
    SET_LO8(ecx, MEM8(eax + 0x12));
    MEM8(esi + 0xDE8) = LO8(ecx);
    SET_LO16(eax, ZX8(MEM8(eax + 0x12)));
    MEM16(edi + 0x3B0) = LO16(eax);
    MEM16(edi + 0x3AE) = LO16(eax);
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esi + 0xF78) = ebx;
    ebx = 0x5F0C98;
    ebp = 0x14;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B210C; /* jne: not equal / not zero */

loc_003B20D5: ;
    eax = MEM32(edi + 0x68);
    eax = eax - 0x19D;
    if ((eax == 0)) goto loc_003B20F8; /* je: equal / zero */

loc_003B20DF: ;
    eax--;
    if ((eax != 0)) goto loc_003B210C; /* jne: not equal / not zero */

loc_003B20E2: ;
    ebx = 0x641744;
    ebp = 0x4A;
    MEM32(esi + 0xF78) = 2;
    goto loc_003B210C;

loc_003B20F8: ;
    ebx = 0x641758;
    ebp = 0x49;
    MEM32(esi + 0xF78) = 1;

loc_003B210C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x63F480);
    PUSH32(esp, 0x17);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_003B211B: ;
    xmm0 = MEMF(edi + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    esp = esp + 8;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_003B213C: ;
    PUSH32(esp, 0); sub_002F9560(); /* call 0x002F9560 */

loc_003B2141: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0xCE0) = eax;
    PUSH32(esp, 0x63F46C);
    PUSH32(esp, 0x17);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_003B2156: ;
    esp = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_0032D490(); /* call 0x0032D490 */

loc_003B2162: ;
    SET_LO8(ecx, MEM8(eax));
    ebx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_003B2179(); return; } /* jne: not equal / not zero */

loc_003B2172: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    g_seh_ebp = ebp; sub_003B217E(); return; /* tail jmp 0x003B217E */

}

/**
 * sub_003B2220
 * Original: 0x003B2220 - 0x003B224A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2220(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B2220: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_003B2370(); /* call 0x003B2370 */

loc_003B2228: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_003B2244; /* je: equal / zero */

loc_003B222F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_003B2244; /* je: equal / zero */

loc_003B2237: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003B2241: ;
    esp = esp + 4;

loc_003B2244: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B2250
 * Original: 0x003B2250 - 0x003B2364 (276 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2250(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B2250: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = edi;
    PUSH32(esp, 0); sub_003937D0(); /* call 0x003937D0 */

loc_003B225F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001B4290(); /* call 0x001B4290 */

loc_003B2265: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003913D0(); /* call 0x003913D0 */

loc_003B2270: ;
    eax = MEM32(esi + 0xF78);
    ecx = MEM32(esi + 0xC94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = ecx + eax * 4;
    eax = MEM32(edx * 4 + 0x74EC34);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_003B2295: ;
    esp = esp + 0x10;
    if (TEST_Z(edi, edi)) goto loc_003B235F; /* je: equal / zero */

loc_003B22A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F4A48);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003B22AD: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B22E0; /* je: equal / zero */

loc_003B22BA: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_003B22E0; /* je: equal / zero */

loc_003B22C4: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003B22E0; /* je: equal / zero */

loc_003B22CB: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F4A48;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003B22DD: ;
    esp = esp + 4;

loc_003B22E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60D4C4);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003B22EC: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B231F; /* je: equal / zero */

loc_003B22F9: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_003B231F; /* je: equal / zero */

loc_003B2303: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003B231F; /* je: equal / zero */

loc_003B230A: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x60D4C4;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003B231C: ;
    esp = esp + 4;

loc_003B231F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63F3E8);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003B232B: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B235E; /* je: equal / zero */

loc_003B2338: ;
    edi = MEM32(edi + 0x4B0);
    if (TEST_Z(edi, edi)) goto loc_003B235E; /* je: equal / zero */

loc_003B2342: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003B235E; /* je: equal / zero */

loc_003B2349: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x63F3E8;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003B235B: ;
    esp = esp + 4;

loc_003B235E: ;
    POP32(esp, ebx);

loc_003B235F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B2370
 * Original: 0x003B2370 - 0x003B23CC (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B2370: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0xCE4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ebp + 0xCE4;
    PUSH32(esp, edi);
    MEM32(ebp) = 0x6416B8;
    if (TEST_Z(eax, eax)) goto loc_003B2391; /* je: equal / zero */

loc_003B238C: ;
    PUSH32(esp, 0); sub_003326A0(); /* call 0x003326A0 */

loc_003B2391: ;
    eax = MEM32(ebp + 0xCE0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ebp + 0xCE0;
    if (TEST_Z(eax, eax)) goto loc_003B23AC; /* je: equal / zero */

loc_003B23A2: ;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_003B23A7: ;
    PUSH32(esp, 0); sub_002F9630(); /* call 0x002F9630 */

loc_003B23AC: ;
    eax = MEM32(ebp + 0xCDC);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = ebp + 0xCDC;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003B23C2; /* je: equal / zero */

loc_003B23BD: ;
    PUSH32(esp, 0); sub_0032D790(); /* call 0x0032D790 */

loc_003B23C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0038C160(); return; /* tail jmp 0x0038C160 */

}

/**
 * sub_003B23D0
 * Original: 0x003B23D0 - 0x003B2444 (116 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B23D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B23D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0); sub_00396760(); /* call 0x00396760 */

loc_003B23E7: ;
    edx = ebx;
    PUSH32(esp, 0); sub_0038F8B0(); /* call 0x0038F8B0 */

loc_003B23EE: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x1C) = eax;
    MEM8(esi + 0x543) = 0;
    MEM32(esi + 0x200) = 0x20000243;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_003B2444(); return; } /* jne: not equal / not zero */

loc_003B2422: ;
    ecx = MEM32(ebp + 8);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = esp + 0x2C;
    esi = esp + 0x20;
    edx = esp + 0x1C;
    PUSH32(esp, 0); sub_0038EE80(); /* call 0x0038EE80 */

loc_003B243C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    g_seh_ebp = ebp; sub_003B24EA(); return; /* tail jmp 0x003B24EA */

}

/**
 * sub_003B2A40
 * Original: 0x003B2A40 - 0x003B309D (1629 bytes, 442 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003B2A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xE44);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(esp + 0x44) = esi;
    if (TEST_NZ(eax, eax)) goto loc_003B2A81; /* jne: not equal / not zero */

loc_003B2A62: ;
    eax = MEM32(edi + 0x23C);
    if (TEST_Z(eax, eax)) goto loc_003B2A81; /* je: equal / zero */

loc_003B2A6C: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B2A71: ;
    if (TEST_Z(eax, eax)) goto loc_003B2A81; /* je: equal / zero */

loc_003B2A75: ;
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_003B2A81; /* jne: not equal / not zero */

loc_003B2A7B: ;
    MEM32(esi + 0xE44) = eax;

loc_003B2A81: ;
    fp_push(MEMF(edi + 0x114)); /* fld float */
    eax = edi + 0x78;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = esi + 0x7C4;
    edx = MEM32(ecx);
    MEM32(esp + 0x48) = eax;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x40) = 0;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003B2ABD: ;
    MEM16(edi + 0x170) = LO16(eax);
    MEM16(edi + 0x174) = LO16(eax);
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B2AE5; /* je: equal / zero */

loc_003B2AD4: ;
    eax = MEM32(esi + 0x7A8);
    if (TEST_Z(eax, eax)) goto loc_003B2AE5; /* je: equal / zero */

loc_003B2ADE: ;
    eax = edi;
    PUSH32(esp, 0); sub_00261910(); /* call 0x00261910 */

loc_003B2AE5: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0038E690(); /* call 0x0038E690 */

loc_003B2AEC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x638C80);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003B2AF8: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B2B2B; /* je: equal / zero */

loc_003B2B05: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_003B2B2B; /* je: equal / zero */

loc_003B2B0F: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003B2B2B; /* je: equal / zero */

loc_003B2B16: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 1);
    ebx = 0x638C80;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003B2B28: ;
    esp = esp + 4;

loc_003B2B2B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63F3E8);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003B2B37: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B2B6A; /* je: equal / zero */

loc_003B2B44: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_003B2B6A; /* je: equal / zero */

loc_003B2B4E: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003B2B6A; /* je: equal / zero */

loc_003B2B55: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x63F3E8;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003B2B67: ;
    esp = esp + 4;

loc_003B2B6A: ;
    eax = MEM32(esi + 0x1F0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x4C) = 0;
    if (TEST_Z(eax, eax)) goto loc_003B2FDC; /* je: equal / zero */

loc_003B2B80: ;
    ebx = MEM32(eax + 0x564);
    xmm6 = MEMF(0x648E18); /* movss */
    MEM8(eax + 0x543) = 0;
    xmm0 = MEMF(edi + 0x1C0); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x44) = eax;
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0x144;
    MEM32(esp + 0x50) = ebx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B2BBD: ;
    xmm0 = MEMF(edi + 0x114); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0xC4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B2BDC: ;
    xmm0 = MEMF(edi + 0x1CC); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x1A4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B2BFB: ;
    esp = esp + 4;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    eax = esp + 0x144;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B2C18: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x1A4;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B2C2D: ;
    xmm0 = MEMF(0x649550); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B0); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x6499A0); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x770); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0xC4;
    MEMF(esp + 0x28) = xmm4; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B2C8C: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003B2C9F: ;
    eax = esp + 0x24;
    edx = esp + 0x34;
    ecx = eax;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x64B394); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648E38); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x774); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x3C) = xmm4; /* movss */
    MEMF(esp) = xmm0; /* movss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0xC4;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B2D1E: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003B2D31: ;
    xmm0 = MEMF(esi + 0x770); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0xC4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B2D51: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003B2D64: ;
    eax = esp + 0x24;
    edx = esp + 0x34;
    ecx = eax;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003B2DB3: ;
    edx = MEM32(esp + 0x48);
    eax = esp + 0x24;
    ecx = eax;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    edx = esi + 0xEE4;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x38), _icall_esp); /* indirect call */
    }

loc_003B2E20: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(0x648E3C); /* addss */
    MEMF(esi + 0xE38) = xmm0; /* movss */
    if (TEST_Z(ebx, ebx)) goto loc_003B2FEF; /* je: equal / zero */

loc_003B2E3E: ;
    PUSH32(esp, 0);
    SET_LO8(eax, 0x78);
    ecx = esp + 0x144;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B2E4E: ;
    esp = esp + 4;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x144;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B2E66: ;
    eax = esp + 0x60;
    ecx = esp + 0x1C;
    esi = esp + 0x100;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_003B2E7A: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(0x648E6C); /* addss */
    xmm7 = MEMF(0x648E18); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm7; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x64;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B2EA5: ;
    esp = esp + 4;
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B2EB4: ;
    xmm6 = 0.0f; /* xorps self = zero */
    esi = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x770); /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x64;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B2EDB: ;
    esp = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x104;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B2EEF: ;
    xmm0 = MEMF(esi + 0x774); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm7; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0x64;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B2F0C: ;
    esp = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x104;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B2F20: ;
    esp = esp - 0xC;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x34); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    eax = esp + 0x6C;
    MEMF(esp) = xmm6; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_003B2F55: ;
    ecx = edx;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B2F61: ;
    ecx = ebx;
    edx = MEM32(esp + 0x48);
    eax = MEM32(edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ecx + 0x2DC;
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    edx = MEM32(esi + 0xCE8);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 - MEMF(0x648D1C); /* subss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    SET_LO8(edx, 1);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00389A90(); /* call 0x00389A90 */

loc_003B2FCF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x278) = xmm0; /* movss */
    goto loc_003B2FEF;

loc_003B2FDC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x200) = xmm0; /* movss */
    MEMF(esi + 0x278) = xmm0; /* movss */

loc_003B2FEF: ;
    edx = MEM32(esi + 0x78C);
    ecx = MEM32(esi + 0x770);
    edi = MEM32(esi + 0xCE4);
    (void)0; /* test edx, edx - flags set for next jcc */
    edx = MEM32(esi + 0x774);
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00331D90(); /* call 0x00331D90 */

loc_003B3020: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    esi = esp + 0x7C;
    eax = 0; /* xor self */
    edx = edi;
    PUSH32(esp, 0); sub_00331950(); /* call 0x00331950 */

loc_003B3037: ;
    esi = MEM32(esp + 0x60);
    esp = esp + 0x20;
    if (TEST_Z(esi, esi)) { sub_003B309D(); return; } /* je: equal / zero */

loc_003B3042: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) { sub_003B309D(); return; } /* je: equal / zero */

loc_003B304C: ;
    eax = MEM32(edi + 0x7C);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003B305C; /* je: equal / zero */

loc_003B3054: ;
    eax--;
    if ((eax != 0)) { sub_003B309D(); return; } /* jne: not equal / not zero */

loc_003B3057: ;
    eax = edi + 0x30;
    goto loc_003B3062;

loc_003B305C: ;
    eax = edi + 0x29C;

loc_003B3062: ;
    if (TEST_Z(eax, eax)) { sub_003B309D(); return; } /* je: equal / zero */

loc_003B3066: ;
    SET_LO8(ecx, MEM8(eax + 2));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_003B309D(); return; } /* je: equal / zero */

loc_003B306D: ;
    ebx = MEM32(esp + 0x44);
    edx = MEM32(ebx + 0xF78);
    ecx = MEM32(0x847024);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = MEM32(edx + 0x65DDE4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003B309B: ;
    g_seh_ebp = ebp; sub_003B30A1(); return; /* tail jmp 0x003B30A1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003B35B0
 * Original: 0x003B35B0 - 0x003B363D (141 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B35B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B35B0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx + 0x1F0);
    if (TEST_Z(esi, esi)) goto loc_003B3639; /* je: equal / zero */

loc_003B35C6: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, 0xBF800000u);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B35E1; /* je: equal / zero */

loc_003B35D3: ;
    PUSH32(esp, 0x10);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003B35DC: ;
    esp = esp + 8;
    goto loc_003B3626;

loc_003B35E1: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B360D; /* je: equal / zero */

loc_003B35EA: ;
    PUSH32(esp, 0xE);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003B35F3: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    esp = esp + 8;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD6E);
    PUSH32(esp, edx);
    goto loc_003B361C;

loc_003B360D: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD70);
    PUSH32(esp, ecx);

loc_003B361C: ;
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003B3626: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002E7D0(); /* call 0x0002E7D0 */

loc_003B3639: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B3640
 * Original: 0x003B3640 - 0x003B3678 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3640(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B3640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0038C570(); /* call 0x0038C570 */

loc_003B3648: ;
    SET_LO8(eax, MEM8(0x7819D5));
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    POP32(esp, esi);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    eax = 2;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B3678(); return; } /* je: equal / zero */

loc_003B366A: ;
    PUSH32(esp, 0xD6F);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003B3675: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B3690
 * Original: 0x003B3690 - 0x003B36E7 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3690(void)
{
    uint32_t ebp;
    float xmm0;

loc_003B3690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x570);
    xmm0 = MEMF(edx + 0x770); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x79);
    ecx = esp + 4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B36C5: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 4;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B36D5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B36E3: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B36F0
 * Original: 0x003B36F0 - 0x003B3747 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B36F0(void)
{
    uint32_t ebp;
    float xmm0;

loc_003B36F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x570);
    xmm0 = MEMF(edx + 0x774); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x78);
    ecx = esp + 4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B3725: ;
    edx = MEM32(ebp + 0xC);
    esp = esp + 4;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B3735: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B3743: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B3750
 * Original: 0x003B3750 - 0x003B37AD (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B3750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003B379A; /* je: equal / zero */

loc_003B376C: ;
    xmm0 = MEMF(eax + 0xF6C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x14;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003B378D: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B379A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003B37A8: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B37B0
 * Original: 0x003B37B0 - 0x003B37BE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B37B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B37B0: ;
    eax = MEM32(eax + 0x568);
    if (TEST_NZ(eax, eax)) { sub_003B37BE(); return; } /* jne: not equal / not zero */

loc_003B37BA: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_003B3970
 * Original: 0x003B3970 - 0x003B3B6C (508 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B3970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_003B37B0(); /* call 0x003B37B0 */

loc_003B397F: ;
    esi = MEM32(esp + 0x1C);
    edi = eax;
    (void)0; /* cmp MEM8(esi + 0xC), 3 - flags set for next jcc */
    ebx = 1;
    if (CMP_NE(MEM8(esi + 0xC), 3)) goto loc_003B39D2; /* jne: not equal / not zero */

loc_003B3990: ;
    if (CMP_EQ(MEM8(esi + 0xD), LO8(ebx))) goto loc_003B39D2; /* je: equal / zero */

loc_003B3995: ;
    eax = MEM32(edi * 4 + 0x74EC6C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_003B39AD: ;
    MEM8(esi + 0xD) = LO8(ebx);
    eax = MEM32(ebp + 0x564);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_003B3B65; /* je: equal / zero */

loc_003B39C1: ;
    esi = 0x21;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_003B39CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_003B39D2: ;
    eax = ZX8(MEM8(esi + 0xD));
    eax = eax - 0;
    if ((eax == 0)) goto loc_003B3AF1; /* je: equal / zero */

loc_003B39DF: ;
    eax--;
    if ((eax == 0)) goto loc_003B3A0D; /* je: equal / zero */

loc_003B39E2: ;
    eax--;
    if ((eax == 0)) goto loc_003B3B65; /* je: equal / zero */

loc_003B39E9: ;
    eax = MEM32(edi * 4 + 0x74EC70);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_003B39FF: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM8(esi + 0xD) = 2;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_003B3A0D: ;
    esi = MEM32(ebp + 0x3C4);
    if (TEST_Z(esi, esi)) goto loc_003B3B65; /* je: equal / zero */

loc_003B3A1B: ;
    eax = esi + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_003B3A25: ;
    if (TEST_Z(eax, eax)) goto loc_003B3B65; /* je: equal / zero */

loc_003B3A2D: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x649408) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649408))) goto loc_003B3B65; /* jbe: below or equal (unsigned <=) */

loc_003B3A42: ;
    if (TEST_Z(esi, esi)) goto loc_003B3A58; /* je: equal / zero */

loc_003B3A46: ;
    eax = esi + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_003B3A4E: ;
    if (TEST_Z(eax, eax)) goto loc_003B3A58; /* je: equal / zero */

loc_003B3A52: ;
    MEM8(eax + 0x1F0) = MEM8(eax + 0x1F0) | LO8(ebx);

loc_003B3A58: ;
    eax = MEM32(ebp + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_003B3A77; /* je: equal / zero */

loc_003B3A62: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_003B3A6C: ;
    if (TEST_Z(eax, eax)) goto loc_003B3A77; /* je: equal / zero */

loc_003B3A70: ;
    MEM8(eax + 0x1F0) = MEM8(eax + 0x1F0) | 2;

loc_003B3A77: ;
    edi = ebp;
    PUSH32(esp, 0); sub_0038DF90(); /* call 0x0038DF90 */

loc_003B3A7E: ;
    eax = MEM32(ebp + 0x568);
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_003B3A9F: ;
    PUSH32(esp, eax);
    esi = 8;
    edi = 0; /* xor self */
    eax = ebp;
    PUSH32(esp, 0); sub_002B14A0(); /* call 0x002B14A0 */

loc_003B3AAE: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_003B3AC5: ;
    ecx = MEM32(ebp + 0x568);
    xmm0 = MEMF(0x648D1C); /* movss */
    esp = esp + 0x24;
    POP32(esp, edi);
    MEM8(ecx + 0x63F) = LO8(ebx);
    POP32(esp, esi);
    MEM8(ebp + 0x17B) = LO8(ebx);
    MEMF(ebp + 0xD4) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_003B3AF1: ;
    eax = MEM32(ebp + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_003B3B65; /* je: equal / zero */

loc_003B3AFB: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_003B3B05: ;
    if (TEST_Z(eax, eax)) goto loc_003B3B65; /* je: equal / zero */

loc_003B3B09: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x649408) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649408))) goto loc_003B3B65; /* jbe: below or equal (unsigned <=) */

loc_003B3B1A: ;
    eax = MEM32(edi * 4 + 0x74EC70);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_003B3B32: ;
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xCD);
    SET_LO8(eax, 2);
    PUSH32(esp, 0x64);
    MEM8(esi + 0xD) = LO8(eax);
    MEM8(esi + 0xC) = LO8(eax);
    ebx = MEM32(ebp + 0x564);
    PUSH32(esp, 0x111);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001CFF20(); /* call 0x001CFF20 */

loc_003B3B62: ;
    esp = esp + 0x2C;

loc_003B3B65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003B3B70
 * Original: 0x003B3B70 - 0x003B3BBE (78 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3B70(void)
{
    float xmm0;

loc_003B3B70: ;
    edx = MEM32(esp + 4);
    eax = ecx + 0xEE4;
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
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    edx = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(ecx + 0x774);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003B3BC0
 * Original: 0x003B3BC0 - 0x003B3D0F (335 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3BC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003B3BC0: ;
    esp = esp - 8;
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648EA4); /* mulss */
    xmm0 = xmm0 * MEMF(0x648FD8); /* mulss */
    edx = esi;
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0038F8B0(); /* call 0x0038F8B0 */

loc_003B3BF4: ;
    if (TEST_Z(eax, eax)) goto loc_003B3D08; /* je: equal / zero */

loc_003B3BFC: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(esi + 0x770) - sets EFLAGS */
    xmm0 = MEMF(0x648F60); /* movss */
    if ((xmm1 <= MEMF(esi + 0x770))) goto loc_003B3C37; /* jbe: below or equal (unsigned <=) */

loc_003B3C10: ;
    xmm3 = MEMF(esi + 0x770); /* movss */
    goto loc_003B3C20;

    /* nop */

loc_003B3C20: ;
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm3 = xmm2; /* movaps */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 > xmm3)) goto loc_003B3C20; /* ja: above (unsigned >) */

loc_003B3C2F: ;
    MEMF(esi + 0x770) = xmm3; /* movss */

loc_003B3C37: ;
    xmm2 = MEMF(esi + 0x770); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_003B3C67; /* jb: below (unsigned <) */

loc_003B3C44: ;
    xmm3 = xmm2; /* movaps */
    goto loc_003B3C50;

    /* nop */

loc_003B3C50: ;
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm3 = xmm2; /* movaps */
    if ((xmm2 >= xmm0)) goto loc_003B3C50; /* jae: above or equal (unsigned >=) */

loc_003B3C5F: ;
    MEMF(esi + 0x770) = xmm3; /* movss */

loc_003B3C67: ;
    xmm0 = MEMF(esi + 0x770); /* movss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648E6C))) goto loc_003B3C88; /* jb: below (unsigned <) */

loc_003B3C78: ;
    xmm0 = xmm0 + MEMF(esp + 4); /* addss */
    MEMF(esi + 0x770) = xmm0; /* movss */
    goto loc_003B3CB5;

loc_003B3C88: ;
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 0x770) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x770))) goto loc_003B3CA1; /* jbe: below or equal (unsigned <=) */

loc_003B3C97: ;
    MEMF(esi + 0x770) = xmm1; /* movss */
    goto loc_003B3CB5;

loc_003B3CA1: ;
    xmm2 = MEMF(esi + 0x770); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esi + 0x770) = xmm2; /* movss */

loc_003B3CB5: ;
    /* comiss xmm1, MEMF(esi + 0x774) - sets EFLAGS */
    xmm0 = MEMF(esp + 8); /* movss */
    if ((xmm1 <= MEMF(esi + 0x774))) goto loc_003B3CEB; /* jbe: below or equal (unsigned <=) */

loc_003B3CC4: ;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 - xmm0; /* subss */
    /* comiss xmm2, MEMF(esi + 0x774) - sets EFLAGS */
    if ((xmm2 <= MEMF(esi + 0x774))) goto loc_003B3D00; /* jbe: below or equal (unsigned <=) */

loc_003B3CD4: ;
    xmm0 = xmm0 + MEMF(esi + 0x774); /* addss */
    MEMF(esi + 0x774) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_003B3CEB: ;
    /* comiss xmm0, MEMF(esi + 0x774) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 0x774))) goto loc_003B3D00; /* ja: above (unsigned >) */

loc_003B3CF4: ;
    xmm1 = MEMF(esi + 0x774); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */

loc_003B3D00: ;
    MEMF(esi + 0x774) = xmm1; /* movss */

loc_003B3D08: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B3D10
 * Original: 0x003B3D10 - 0x003B3DBB (171 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B3D10: ;
    esp = esp - 0x58;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    ecx = ebp;
    PUSH32(esp, 0); sub_003B3DD0(); /* call 0x003B3DD0 */

loc_003B3D25: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B3DBB(); return; } /* je: equal / zero */

loc_003B3D2D: ;
    eax = MEM32(ebp + 0x1F0);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_003B3D91; /* je: equal / zero */

loc_003B3D39: ;
    eax = MEM32(eax + 0x564);
    if (CMP_EQ(eax, ecx)) goto loc_003B3D91; /* je: equal / zero */

loc_003B3D43: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0x447A0000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100000);
    edx = esp + 0x20;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = 0x5D4C44;
    MEM32(esp + 0x7C) = 1;
    MEM32(esp + 0x2C) = 1;
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, 0); sub_00397560(); /* call 0x00397560 */

loc_003B3D86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x58;
    esp += 8; return; /* ret 4 */

loc_003B3D91: ;
    ebp = MEM32(ebp + 0xCA8);
    if (CMP_EQ(MEM8(ebp + 4), LO8(ecx))) goto loc_003B3DB0; /* je: equal / zero */

loc_003B3D9C: ;
    ebp = ebp + 8;
    eax = MEM32(ebp);
    MEM32(esi) = eax;
    ecx = MEM32(ebp + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(ebp + 8);
    MEM32(esi + 8) = edx;

loc_003B3DB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x58;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B3DD0
 * Original: 0x003B3DD0 - 0x003B3E17 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B3DD0: ;
    edx = MEM32(ecx + 4);
    esp = esp - 0x24;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x74ECF8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0038A4A0(); /* call 0x0038A4A0 */

loc_003B3DE5: ;
    if (TEST_Z(eax, eax)) { sub_003B3E17(); return; } /* je: equal / zero */

loc_003B3DE9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edi + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 8) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    SET_LO8(eax, 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_003B3E20
 * Original: 0x003B3E20 - 0x003B3E6B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3E20(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B3E20: ;
    SET_LO8(eax, MEM8(esp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    MEM32(esi + 0xC94) = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B3E6B(); return; } /* je: equal / zero */

loc_003B3E36: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = 1;
    if (TEST_NZ(edi, edi)) goto loc_003B3E41; /* jne: not equal / not zero */

loc_003B3E3F: ;
    eax = 0; /* xor self */

loc_003B3E41: ;
    ecx = MEM32(esi + 0xF78);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = eax + ecx * 4;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    eax = MEM32(edx * 4 + 0x74EC34);
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_003B3E63: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B3F10
 * Original: 0x003B3F10 - 0x003B3F6E (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3F10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B3F10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xF74);
    if (TEST_Z(esi, esi)) goto loc_003B3F69; /* je: equal / zero */

loc_003B3F20: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_003B3F69; /* je: equal / zero */

loc_003B3F2A: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_003B3F34: ;
    if (TEST_Z(eax, eax)) goto loc_003B3F69; /* je: equal / zero */

loc_003B3F38: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003B3F69; /* jp: parity */

loc_003B3F4D: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_00389F90(); /* call 0x00389F90 */

loc_003B3F5C: ;
    esp = esp + 0x10;
    MEM32(ebx + 0xF74) = 0;

loc_003B3F69: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B3F70
 * Original: 0x003B3F70 - 0x003B4026 (182 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3F70(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B3F70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_003B401C; /* jne: not equal / not zero */

loc_003B3F83: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003B3F91; /* jne: not equal / not zero */

loc_003B3F8C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B3F91: ;
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
    if (TEST_Z(esi, esi)) goto loc_003B3FE1; /* je: equal / zero */

loc_003B3FB9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x80)) goto loc_003B3FE1; /* jb: below (unsigned <) */

loc_003B3FC5: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B3FCF: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B3FDA: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003B4005; /* jne: not equal / not zero */

loc_003B3FE1: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B3FF3: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B3FFE: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B400E; /* je: equal / zero */

loc_003B4005: ;
    esi = ebx;
    PUSH32(esp, 0); sub_003B4030(); /* call 0x003B4030 */

loc_003B400C: ;
    goto loc_003B4010;

loc_003B400E: ;
    eax = 0; /* xor self */

loc_003B4010: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0x570) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_003B4024; /* je: equal / zero */

loc_003B401C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_003B4024: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4030
 * Original: 0x003B4030 - 0x003B408F (95 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4030(void)
{
    float xmm0;

loc_003B4030: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003B5BC0(); /* call 0x003B5BC0 */

loc_003B4039: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi) = 0x641840;
    MEM32(edi + 4) = 7;
    MEMF(edi + 0x6C) = xmm0; /* movss */
    MEM8(edi + 0x70) = 0;
    MEM32(edi + 0x74) = 0xFFFFFFFFu;
    MEMF(edi + 0x78) = xmm0; /* movss */
    MEM8(edi + 0x5C) = 1;
    PUSH32(esp, 0x6418F8);
    eax = esi;
    MEM32(esi + 0x5D8) = 0x3B4590;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_003B4078: ;
    PUSH32(esp, 0x6418E4);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_003B4084: ;
    esp = esp + 8;
    MEM8(edi + 0x7C) = 1;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4090
 * Original: 0x003B4090 - 0x003B41A1 (273 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4090(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B4090: ;
    eax = MEM32(0x863D08);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (TEST_Z(eax, eax)) goto loc_003B419D; /* je: equal / zero */

loc_003B40A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = 1;
    MEM8(edi + 0x250) = 0;
    MEM8(edi + 0x20C) = 0;
    MEM8(edi + 0x444) = 0x41;
    MEM32(edi + 0x204) = 0xA7;
    MEM8(edi + 0x17A) = LO8(ebx);
    eax = MEM32(ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003B40D7: ;
    if (TEST_Z(eax, eax)) goto loc_003B4123; /* je: equal / zero */

loc_003B40DB: ;
    SET_LO8(eax, MEM8(ebp + 0x42));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B4123; /* jne: not equal / not zero */

loc_003B40E2: ;
    SET_LO8(eax, MEM8(ebp + 0x70));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B4104; /* je: equal / zero */

loc_003B40E9: ;
    xmm0 = MEMF(ebp + 0x6C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CF8))) goto loc_003B4104; /* jb: below (unsigned <) */

loc_003B40F7: ;
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(ebp + 0x6C) = xmm0; /* movss */

loc_003B4104: ;
    if (CMP_EQ(MEM16(edi + 0x3AE), 0)) goto loc_003B4117; /* je: equal / zero */

loc_003B410E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(ebp + 0x6C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0x6C))) goto loc_003B4123; /* jbe: below or equal (unsigned <=) */

loc_003B4117: ;
    esi = edi;
    ecx = ebp;
    PUSH32(esp, 0); sub_003B4400(); /* call 0x003B4400 */

loc_003B4120: ;
    MEM8(ebp + 0x42) = LO8(ebx);

loc_003B4123: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0xD4) = xmm0; /* movss */
    MEMF(edi + 0xD0) = xmm0; /* movss */
    if (CMP_NE(MEM8(ebp + 0x42), LO8(ebx))) goto loc_003B4148; /* jne: not equal / not zero */

loc_003B413B: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B4144: ;
    MEM8(ebp + 0x42) = 2;

loc_003B4148: ;
    if (CMP_NE(MEM32(ebp + 0x30), ebx)) goto loc_003B4172; /* jne: not equal / not zero */

loc_003B414D: ;
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(ebp + 0x78); /* addss */
    /* comiss xmm0, MEMF(0x648E5C) - sets EFLAGS */
    MEMF(ebp + 0x78) = xmm0; /* movss */
    if ((xmm0 < MEMF(0x648E5C))) goto loc_003B4172; /* jb: below (unsigned <) */

loc_003B4168: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B4172: ;
    esi = ebp;
    PUSH32(esp, 0); sub_003B6040(); /* call 0x003B6040 */

loc_003B4179: ;
    PUSH32(esp, ebp);
    esi = edi;
    PUSH32(esp, 0); sub_003B46A0(); /* call 0x003B46A0 */

loc_003B4181: ;
    if (CMP_NE(MEM16(edi + 0x3AE), 0)) goto loc_003B419A; /* jne: not equal / not zero */

loc_003B418B: ;
    SET_LO8(eax, MEM8(ebp + 0x7C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B419A; /* jne: not equal / not zero */

loc_003B4192: ;
    PUSH32(esp, ebp);
    ebx = edi;
    PUSH32(esp, 0); sub_003B42D0(); /* call 0x003B42D0 */

loc_003B419A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003B419D: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B41B0
 * Original: 0x003B41B0 - 0x003B4226 (118 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B41B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B41B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    ebx = ebp;
    PUSH32(esp, 0); sub_003B5EA0(); /* call 0x003B5EA0 */

loc_003B41C6: ;
    esi = MEM32(ebp + 0x5C);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_003B41E2; /* je: equal / zero */

loc_003B41CE: ;
    SET_LO16(eax, MEM16(ebp + 0x5A));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_003B41D7: ;
    if (TEST_Z(eax, eax)) goto loc_003B41E2; /* je: equal / zero */

loc_003B41DB: ;
    ecx = ZX16(MEM16(eax + 0x60));
    MEM32(edi + 0x74) = ecx;

loc_003B41E2: ;
    SET_LO8(eax, MEM8(ebp + 0x40));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B421F; /* jne: not equal / not zero */

loc_003B41E9: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4A);
    if (CMP_EQ(MEM32(edi + 0x30), eax)) goto loc_003B421F; /* je: equal / zero */

loc_003B41F2: ;
    eax--;
    if ((eax == 0)) goto loc_003B4204; /* je: equal / zero */

loc_003B41F5: ;
    eax--;
    if ((eax != 0)) goto loc_003B4213; /* jne: not equal / not zero */

loc_003B41F8: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003B42D0(); /* call 0x003B42D0 */

loc_003B4202: ;
    goto loc_003B420F;

loc_003B4204: ;
    esi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0); sub_003B4400(); /* call 0x003B4400 */

loc_003B420F: ;
    MEM8(edi + 0x42) = 1;

loc_003B4213: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4A);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B421F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B4230
 * Original: 0x003B4230 - 0x003B42A8 (120 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4230(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B4230: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    eax = edi;
    esi = ecx;
    PUSH32(esp, 0); sub_003B5D70(); /* call 0x003B5D70 */

loc_003B4245: ;
    eax = MEM32(edi + 0x68);
    eax = eax - 0x174;
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(ebx + 0x34) = eax;
    MEM32(ebx + 0x5C) = ecx;
    MEM16(ebx + 0x5A) = LO16(ecx);
    eax = MEM32(esi + 0x74);
    if (CMP_EQ(eax, ecx)) goto loc_003B42A2; /* je: equal / zero */

loc_003B4261: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    if ((eax == 0)) goto loc_003B42A2; /* je: equal / zero */

loc_003B4271: ;
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_003B42A2; /* jne: not equal / not zero */

loc_003B4277: ;
    ecx = 0; /* xor self */
    edi = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0); sub_00289590(); /* call 0x00289590 */

loc_003B428E: ;
    if (TEST_Z(eax, eax)) goto loc_003B42A2; /* je: equal / zero */

loc_003B4292: ;
    ecx = MEM32(esp + 0x14);
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM32(ebx + 0x5C) = ecx;
    MEM16(ebx + 0x5A) = LO16(edx);

loc_003B42A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B42B0
 * Original: 0x003B42B0 - 0x003B42B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B42B0(void)
{

loc_003B42B0: ;
    MEM8(ecx + 0x2C) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B42C0
 * Original: 0x003B42C0 - 0x003B42CC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B42C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B42C0: ;
    edx = MEM32(ecx + 0x30);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edx, 1)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003B42D0
 * Original: 0x003B42D0 - 0x003B43CA (250 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B42D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003B42D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x128;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6418D4);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_003B42EA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D34); /* movss */
    eax = ebx + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x20) = edx;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x4100000);
    ecx = 0x68;
    eax = 0x637EEC;
    esi = ebx;
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_003B4348: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40E00000);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    esi = esp + 0x68;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_003B436C: ;
    eax = MEM32(esp + 0x14C);
    esp = esp + 0x38;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x780AB0) = edi;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = edi;
    if (CMP_EQ(eax, edi)) goto loc_003B43B4; /* je: equal / zero */

loc_003B4397: ;
    eax = MEM32(esp + 0x30);
    if (CMP_EQ(eax, edi)) goto loc_003B43A5; /* je: equal / zero */

loc_003B439F: ;
    if (CMP_NE(MEM32(eax + 0x64), 0x3C)) goto loc_003B43B4; /* jne: not equal / not zero */

loc_003B43A5: ;
    PUSH32(esp, 0x6418E4);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_003B43B1: ;
    esp = esp + 4;

loc_003B43B4: ;
    esi = MEM32(0x771B78);
    esi = esi + 0x31C;
    MEM32(esp + 0x14) = 6;
    g_seh_ebp = ebp; sub_003B43D0(); return; /* tail jmp 0x003B43D0 */

}

/**
 * sub_003B4400
 * Original: 0x003B4400 - 0x003B458D (397 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B4400: ;
    eax = MEM32(ecx + 0x74);
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003B4420; /* je: equal / zero */

loc_003B4410: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    ebp = eax;

loc_003B4420: ;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_003B42D0(); /* call 0x003B42D0 */

loc_003B4428: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x56);
    PUSH32(esp, 0xFF);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    edi = esi + 0x78;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0019BE40(); /* call 0x0019BE40 */

loc_003B4441: ;
    esp = esp + 0x20;
    ebp = 4;
    /* nop */

loc_003B4450: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003B4455: ;
    xmm7 = MEMF(0x648EC4); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 - MEMF(0x649294); /* subss */
    xmm5 = xmm5 + MEMF(esi + 0x80); /* addss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003B447F: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm6 = xmm6 - MEMF(0x649294); /* subss */
    xmm6 = xmm6 + MEMF(esi + 0x7C); /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003B449E: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 - MEMF(0x649294); /* subss */
    xmm0 = xmm0 + MEMF(edi); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003B44C5: ;
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003B44E0: ;
    xmm0 = xmm0 + MEMF(0x648D10); /* addss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x49);
    eax = 0x68;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_003B44FF: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_003B457F; /* je: equal / zero */

loc_003B4506: ;
    edx = MEM32(esp + 0x1C);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 0xC); /* movss */
    ecx = eax + 0x4C;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM32(eax + 0x2C) = ebx;
    MEM32(ecx + 8) = edx;
    MEMF(eax + 0x58) = xmm1; /* movss */
    MEM8(eax + 0x30) = LO8(ebx);
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x40) = ebx;
    MEM8(eax + 0x14) = 1;
    MEMF(eax + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEM8(eax + 0x14) = 1;
    MEMF(eax + 0x24) = xmm1; /* movss */

loc_003B457F: ;
    ebp--;
    if ((ebp != 0)) goto loc_003B4450; /* jne: not equal / not zero */

loc_003B4586: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003B4590
 * Original: 0x003B4590 - 0x003B46A0 (272 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B4590: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    (void)0; /* cmp MEM16(ebp + 0x3AE), 0 - flags set for next jcc */
    MEM8(ebp + 0x20C) = 0;
    if (CMP_NE(MEM16(ebp + 0x3AE), 0)) goto loc_003B469E; /* jne: not equal / not zero */

loc_003B45AA: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x570);
    SET_LO8(eax, MEM8(edi + 0x42));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B45C4; /* je: equal / zero */

loc_003B45B8: ;
    POP32(esp, edi);
    MEM16(ebp + 0x3AE) = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003B45C4: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = 0x56;
    if (CMP_NE(eax, esi)) goto loc_003B4663; /* jne: not equal / not zero */

loc_003B45D6: ;
    if (TEST_Z(edi, edi)) goto loc_003B469C; /* je: equal / zero */

loc_003B45DE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    MEM16(ebp + 0x3AE) = 1;
    eax = MEM32(ebx + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B45F7: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    if (TEST_Z(eax, eax)) eax = ebx; /* cmove */
    eax = ZX16(MEM16(eax + 0x60));
    MEM32(edi + 0x74) = eax;
    MEM8(edi + 0x70) = 1;
    PUSH32(esp, 0); sub_002ED7A0(); /* call 0x002ED7A0 */

loc_003B460C: ;
    ebx = ebx + 0x78;
    PUSH32(esp, ebx);
    ebp = ebp + 0x78;
    PUSH32(esp, ebp);
    esi = eax;
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003B461B: ;
    xmm2 = MEMF(esi + 0x14); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp + 8;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    POP32(esp, ebx);
    if ((xmm2 <= xmm0)) goto loc_003B4638; /* jbe: below or equal (unsigned <=) */

loc_003B4631: ;
    xmm0 = xmm0 / xmm2; /* divss */
    xmm1 = xmm0; /* movaps */

loc_003B4638: ;
    xmm0 = MEMF(edi + 0x6C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003B469C; /* jp: parity */

loc_003B464A: ;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    POP32(esp, esi);
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(edi + 0x6C) = xmm1; /* movss */
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003B4663: ;
    if (TEST_Z(edi, edi)) goto loc_003B469C; /* je: equal / zero */

loc_003B4667: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B4676: ;
    xmm0 = MEMF(0x648E54); /* movss */
    (void)0; /* test eax, eax - flags set for next jcc */
    if (TEST_Z(eax, eax)) eax = esi; /* cmove */
    ecx = ZX16(MEM16(eax + 0x60));
    MEM32(edi + 0x74) = ecx;
    MEM16(ebp + 0x3AE) = 1;
    MEM8(edi + 0x70) = 1;
    MEMF(edi + 0x6C) = xmm0; /* movss */

loc_003B469C: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_003B469E: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B46A0
 * Original: 0x003B46A0 - 0x003B48CD (557 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B46A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B46A0: ;
    SET_LO8(eax, MEM8(0x84B390));
    esp = esp - 0x208;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x214);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_003B48C2; /* je: equal / zero */

loc_003B46BE: ;
    eax = esi + 0x78;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x8470DC);
    eax = eax + 0x330;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003B46D6: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(0x648EB8); /* subss */
    xmm1 = xmm1 * MEMF(0x648EB4); /* mulss */
    xmm1 = xmm1 * MEMF(0x648EB0); /* mulss */
    xmm0 = MEMF(0x75ECB0); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D3C); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003B471A; /* ja: above (unsigned >) */

loc_003B470D: ;
    xmm1 = MEMF(0x648EAC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003B471D; /* jbe: below or equal (unsigned <=) */

loc_003B471A: ;
    xmm0 = xmm1; /* movaps */

loc_003B471D: ;
    if (CMP_LE(MEM32(0x84A144), ebx)) goto loc_003B472D; /* jle: less or equal (signed <=) */

loc_003B4725: ;
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */

loc_003B472D: ;
    xmm1 = MEMF(0x648E68); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003B473D; /* jbe: below or equal (unsigned <=) */

loc_003B473A: ;
    xmm0 = xmm1; /* movaps */

loc_003B473D: ;
    eax = ZX16(MEM16(esi + 0x60));
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_003B474D; /* jns: not sign (positive) */

loc_003B4748: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_003B474D: ;
    if (CMP_A(eax, 3)) goto loc_003B479C; /* ja: above (unsigned >) */

loc_003B4752: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3B48D0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003B4759u) goto loc_003B4759;
    if (_jt == 0x003B4762u) goto loc_003B4762;
    if (_jt == 0x003B4771u) goto loc_003B4771;
    if (_jt == 0x003B4785u) goto loc_003B4785;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003B4759: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x77616F) = LO8(eax);
    goto loc_003B478D;

loc_003B4762: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(ebx);
    MEM8(0x77616F) = LO8(eax);
    goto loc_003B4792;

loc_003B4771: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(ebx);
    MEM8(0x77616F) = LO8(eax);
    goto loc_003B4797;

loc_003B4785: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x77616F) = LO8(ebx);

loc_003B478D: ;
    MEM8(0x776171) = LO8(eax);

loc_003B4792: ;
    MEM8(0x776170) = LO8(eax);

loc_003B4797: ;
    MEM8(0x77616E) = LO8(eax);

loc_003B479C: ;
    (void)0; /* cmp MEM8(0x7819D5), LO8(ebx) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_003B47BC; /* je: equal / zero */

loc_003B47AC: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_003B47BC: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B47C7: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    if (CMP_EQ(eax, ebx)) eax = esi; /* cmove */
    ecx = MEM32(eax + 0x64);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(ecx, 1)) goto loc_003B47DC; /* jne: not equal / not zero */

loc_003B47D7: ;
    edi = 1;

loc_003B47DC: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xAC);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_003B47EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x641888);
    eax = esp + 0x30;
    PUSH32(esp, 0xFA);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004704E6(); /* call 0x004704E6 */

loc_003B4803: ;
    esp = esp + 0x1C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003B48C1; /* je: equal / zero */

loc_003B480F: ;
    eax = MEM32(esi + 0x80);
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EB8); /* addss */
    PUSH32(esp, 0x46EA6000);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    edi = esp + 0x20;
    ebx = esp + 0x24;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_003B484D: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_003B4871; /* je: equal / zero */

loc_003B4854: ;
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    ecx = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_003B486E: ;
    esp = esp + 0xC;

loc_003B4871: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B48B0; /* je: equal / zero */

loc_003B48A0: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_003B48B0: ;
    eax = 0x14;
    MEM16(0x776168) = LO16(eax);
    MEM16(0x776164) = LO16(eax);

loc_003B48C1: ;
    POP32(esp, edi);

loc_003B48C2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x208;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B4910
 * Original: 0x003B4910 - 0x003B49C6 (182 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4910(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B4910: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_003B49BC; /* jne: not equal / not zero */

loc_003B4923: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003B4931; /* jne: not equal / not zero */

loc_003B492C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B4931: ;
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
    if (TEST_Z(esi, esi)) goto loc_003B4981; /* je: equal / zero */

loc_003B4959: ;
    if (CMP_B(MEM32(esi + 0x80), 0x94)) goto loc_003B4981; /* jb: below (unsigned <) */

loc_003B4965: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B496F: ;
    PUSH32(esp, 0x94);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B497A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003B49A5; /* jne: not equal / not zero */

loc_003B4981: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B4993: ;
    PUSH32(esp, 0x94);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B499E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B49AE; /* je: equal / zero */

loc_003B49A5: ;
    esi = ebx;
    PUSH32(esp, 0); sub_003B49D0(); /* call 0x003B49D0 */

loc_003B49AC: ;
    goto loc_003B49B0;

loc_003B49AE: ;
    eax = 0; /* xor self */

loc_003B49B0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0x570) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_003B49C4; /* je: equal / zero */

loc_003B49BC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_003B49C4: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B49D0
 * Original: 0x003B49D0 - 0x003B4A59 (137 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B49D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B49D0: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003B5BC0(); /* call 0x003B5BC0 */

loc_003B49D9: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    eax = 0; /* xor self */
    MEM32(edi) = 0x641910;
    MEM8(edi + 0x84) = LO8(eax);
    MEM8(edi + 0x85) = LO8(eax);
    MEMF(edi + 0x88) = xmm0; /* movss */
    MEMF(edi + 0x8C) = xmm0; /* movss */
    MEM8(edi + 0x90) = LO8(eax);
    MEM32(edi + 4) = 2;
    MEM16(esi + 0x3AE) = 0x14;
    if (CMP_EQ(MEM32(edi + 0x30), eax)) goto loc_003B4A23; /* je: equal / zero */

loc_003B4A20: ;
    MEM32(edi + 0x30) = eax;

loc_003B4A23: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(edi + 0x78) = LO8(eax);
    MEM32(edi + 0x7C) = eax;
    MEMF(edi + 0x6C) = xmm0; /* movss */
    MEMF(edi + 0x70) = xmm0; /* movss */
    MEMF(edi + 0x74) = xmm0; /* movss */
    MEM32(esi + 0x534) = 0xFFFFFFFFu;
    MEM8(edi + 0x91) = LO8(eax);
    MEM32(edi + 0x80) = 3;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4A60
 * Original: 0x003B4A60 - 0x003B4B0B (171 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4A60(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_003B4A60: ;
    SET_LO8(ecx, MEM8(edi + 0x251));
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B4B0A; /* je: equal / zero */

loc_003B4A70: ;
    eax = ZX8(LO8(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    SET_LO8(ecx, MEM8(eax + esi + -1435));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edx = eax + esi + -1744;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B4AA9; /* je: equal / zero */

loc_003B4A92: ;
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    if (CMP_NE(MEM32(ecx + esi + -1644), 0x35)) goto loc_003B4AA9; /* jne: not equal / not zero */

loc_003B4AA5: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003B4AA9: ;
    edx = MEM32(edx + 0xA4);
    if (CMP_NE(edx, 0x7F2)) goto loc_003B4ABE; /* jne: not equal / not zero */

loc_003B4AB7: ;
    eax = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003B4ABE: ;
    if (CMP_NE(edx, 0x7F3)) goto loc_003B4ACD; /* jne: not equal / not zero */

loc_003B4AC6: ;
    eax = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003B4ACD: ;
    if (CMP_NE(edx, 0x872)) goto loc_003B4ADC; /* jne: not equal / not zero */

loc_003B4AD5: ;
    eax = 7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003B4ADC: ;
    if (CMP_NE(edx, 0x7F0)) goto loc_003B4AEB; /* jne: not equal / not zero */

loc_003B4AE4: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003B4AEB: ;
    if (CMP_NE(edx, 0x7F1)) goto loc_003B4AFA; /* jne: not equal / not zero */

loc_003B4AF3: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003B4AFA: ;
    eax = edi;
    PUSH32(esp, 0); sub_003B58E0(); /* call 0x003B58E0 */

loc_003B4B01: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 5;
    eax++;

loc_003B4B0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B4B10
 * Original: 0x003B4B10 - 0x003B4B40 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4B10(void)
{
    float xmm0;

loc_003B4B10: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B4B19: ;
    MEM32(edi + 0x200) = MEM32(edi + 0x200) & 0xFEFFFFFFu;
    MEM8(edi + 0xB4) = 0xFF;
    ecx = edi;
    eax = esi;
    MEM8(esi + 0x78) = 1;
    PUSH32(esp, 0); sub_003B5940(); /* call 0x003B5940 */

loc_003B4B37: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x70) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003B4B40
 * Original: 0x003B4B40 - 0x003B4C3B (251 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B4B40: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(ebp + 0x50);
    eax = ZX8(MEM8(ebx + 0x251));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = MEM32(eax + ecx + -1176);
    PUSH32(esp, esi);
    esi = eax + ecx + -1744;
    eax = MEM32(edx);
    MEM32(ebp + 0x80) = eax;
    MEM8(eax + 0x775F38) = 1;
    eax = MEM32(esi + 0x238);
    ecx = MEM32(ebx + 0x238);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, eax)) goto loc_003B4B96; /* je: equal / zero */

loc_003B4B8C: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(ecx + 4) = LO8(eax);

loc_003B4B96: ;
    eax = MEM32(ebx + 0x68);
    if (CMP_EQ(eax, 0xA8)) goto loc_003B4BB5; /* je: equal / zero */

loc_003B4BA0: ;
    if (CMP_EQ(eax, 0xA9)) goto loc_003B4BB5; /* je: equal / zero */

loc_003B4BA7: ;
    if (CMP_EQ(eax, 0x118)) goto loc_003B4BB5; /* je: equal / zero */

loc_003B4BAE: ;
    if (CMP_NE(eax, 0x117)) goto loc_003B4BDB; /* jne: not equal / not zero */

loc_003B4BB5: ;
    MEM32(ebx + 0x200) = MEM32(ebx + 0x200) & 0xFFFFFFBFu;
    edi = MEM32(ebp + 0x7C);
    if (TEST_Z(edi, edi)) goto loc_003B4BDB; /* je: equal / zero */

loc_003B4BC3: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_00330060(); /* call 0x00330060 */

loc_003B4BD4: ;
    MEM32(ebp + 0x7C) = 0;

loc_003B4BDB: ;
    xmm0 = MEMF(ebp + 0x74); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003B4C00; /* jp: parity */

loc_003B4BED: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B4C00; /* je: equal / zero */

loc_003B4BF6: ;
    MEM32(ebx + 0x52C) = 0;

loc_003B4C00: ;
    edx = MEM32(ebp + 0x8C);
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    MEM32(ebp + 0x74) = edx;
    eax = ZX16(MEM16(esi + 0x60));
    if (CMP_L(eax, ecx)) goto loc_003B4C1D; /* jl: less (signed <) */

loc_003B4C18: ;
    eax = 0x14;

loc_003B4C1D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    ecx = MEM32(eax + 0x7633EC);
    if (TEST_Z(ecx, ecx)) { sub_003B4C3B(); return; } /* je: equal / zero */

loc_003B4C2D: ;
    SET_LO8(eax, MEM8(ebx + 0xB4));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B4C3B(); return; } /* je: equal / zero */

loc_003B4C37: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_003B4C3D(); return; /* tail jmp 0x003B4C3D */

}

/**
 * sub_003B4E40
 * Original: 0x003B4E40 - 0x003B4F57 (279 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4E40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003B4E40: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x80);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x50);
    MEM8(esi + 0x91) = LO8(ebx);
    MEM8(eax + 0x775F38) = LO8(ebx);
    (void)0; /* cmp MEM32(esi + 0x30), 1 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esi + 0x80) = 3;
    if (CMP_NE(MEM32(esi + 0x30), 1)) goto loc_003B4E8B; /* jne: not equal / not zero */

loc_003B4E78: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_003B4E7F: ;
    if (TEST_Z(eax, eax)) goto loc_003B4E8B; /* je: equal / zero */

loc_003B4E83: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B4E8B: ;
    ecx = MEM32(esi + 0x30);
    eax = 2;
    if (CMP_NE(ecx, eax)) goto loc_003B4EB4; /* jne: not equal / not zero */

loc_003B4E97: ;
    if (CMP_GE(MEM32(edi + 0x52C), eax)) goto loc_003B4EB4; /* jge: greater or equal (signed >=) */

loc_003B4E9F: ;
    MEM32(edi + 0x52C) = eax;
    if (CMP_NE(MEM32(edi + 0x64), 0x34)) goto loc_003B4EB4; /* jne: not equal / not zero */

loc_003B4EAB: ;
    ecx = MEM32(esi + 0x88);
    MEM32(esi + 0x70) = ecx;

loc_003B4EB4: ;
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x1C0) = xmm1; /* movss */
    MEMF(edi + 0x1CC) = xmm1; /* movss */
    if (CMP_EQ(MEM8(0x862D90), LO8(ebx))) goto loc_003B4ED7; /* je: equal / zero */

loc_003B4ECF: ;
    if (CMP_EQ(MEM8(0x864EBD), LO8(ebx))) goto loc_003B4EDF; /* je: equal / zero */

loc_003B4ED7: ;
    if (CMP_EQ(MEM8(0x862D08), LO8(ebx))) goto loc_003B4EF3; /* je: equal / zero */

loc_003B4EDF: ;
    if (CMP_NE(MEM8(0x863D11), LO8(ebx))) goto loc_003B4EF3; /* jne: not equal / not zero */

loc_003B4EE7: ;
    PUSH32(esp, 0); sub_001F7760(); /* call 0x001F7760 */

loc_003B4EEC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B4F51; /* je: equal / zero */

loc_003B4EF0: ;
    xmm1 = 0.0f; /* xorps self = zero */

loc_003B4EF3: ;
    xmm0 = MEMF(esi + 0x74); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003B4F51; /* jbe: below or equal (unsigned <=) */

loc_003B4EFD: ;
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    MEMF(esi + 0x74) = xmm0; /* movss */
    xmm2 = MEMF(edi + 0xDC); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003B4F3C; /* jp: parity */

loc_003B4F19: ;
    edx = MEM32(edi + 0x298);
    SET_LO8(edx, LO8(edx) & 0x1F);
    if (CMP_NE(LO8(edx), 8)) goto loc_003B4F3C; /* jne: not equal / not zero */

loc_003B4F27: ;
    xmm2 = MEMF(0x648CE0); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003B4F37; /* jbe: below or equal (unsigned <=) */

loc_003B4F34: ;
    xmm0 = xmm2; /* movaps */

loc_003B4F37: ;
    MEMF(esi + 0x74) = xmm0; /* movss */

loc_003B4F3C: ;
    /* comiss xmm1, MEMF(esi + 0x74) - sets EFLAGS */
    if ((xmm1 < MEMF(esi + 0x74))) goto loc_003B4F51; /* jb: below (unsigned <) */

loc_003B4F42: ;
    (void)0; /* cmp MEM8(esi + 0x90), LO8(ebx) - flags set for next jcc */
    MEMF(esi + 0x74) = xmm1; /* movss */
    SET_LO8(eax, 1);
    if (CMP_EQ(MEM8(esi + 0x90), LO8(ebx))) goto loc_003B4F53; /* je: equal / zero */

loc_003B4F51: ;
    SET_LO8(eax, LO8(ebx));

loc_003B4F53: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4F60
 * Original: 0x003B4F60 - 0x003B5079 (281 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4F60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003B4F60: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x50);
    if (CMP_NE(MEM32(edi + 0x64), 0x34)) goto loc_003B5074; /* jne: not equal / not zero */

loc_003B4F71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003B4A60(); /* call 0x003B4A60 */

loc_003B4F77: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esi = eax;
    SET_LO8(eax, MEM8(edi + 0x251));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B4FE4; /* je: equal / zero */

loc_003B4F9F: ;
    edx = MEM32(0x84A5F8);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + edx + -1744;
    eax = MEM32(eax + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003B4FE4; /* je: equal / zero */

loc_003B4FC8: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_003B4FD2: ;
    if (TEST_Z(eax, eax)) goto loc_003B4FDE; /* je: equal / zero */

loc_003B4FD6: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */

loc_003B4FDE: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_003B4FE4: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edx = esi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_003B4FF9: ;
    xmm1 = MEMF(esp + 0x24); /* movss */
    esp = esp + 0x18;
    /* ucomiss xmm1, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, esi);
    if (1 /* jnp after test - parity */) goto loc_003B5074; /* jnp: not parity */

loc_003B5010: ;
    edi = MEM32(edi + 0x3C4);
    if (TEST_Z(edi, edi)) goto loc_003B5074; /* je: equal / zero */

loc_003B501A: ;
    eax = edi + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_003B5024: ;
    if (TEST_Z(eax, eax)) goto loc_003B5074; /* je: equal / zero */

loc_003B5028: ;
    ecx = MEM32(eax + 0x10);
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(eax + 0xE8) - sets EFLAGS */
    MEMF(eax + 0x1CC) = xmm0; /* movss */
    if ((xmm1 > MEMF(eax + 0xE8))) goto loc_003B5064; /* ja: above (unsigned >) */

loc_003B504F: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003B5064: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */

loc_003B5074: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003B5080
 * Original: 0x003B5080 - 0x003B50AB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B5080: ;
    xmm0 = MEMF(esi + 0x6C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_003B50AB(); return; } /* jp: parity */

loc_003B5091: ;
    eax = MEM32(esi + 0x30);
    if (TEST_NZ(eax, eax)) { sub_003B50AB(); return; } /* jne: not equal / not zero */

loc_003B5098: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002EA190(); /* call 0x002EA190 */

loc_003B50A3: ;
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    g_seh_ebp = ebp; sub_003B50C7(); return; /* tail jmp 0x003B50C7 */

}

/**
 * sub_003B5100
 * Original: 0x003B5100 - 0x003B54BA (954 bytes, 246 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B5100: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x863D08);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(eax, eax)) goto loc_003B54B5; /* je: equal / zero */

loc_003B5111: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi + 0x468);
    edx = edx & 0xFFFFFFF7u;
    MEM8(edi + 0x1B7) = 0x19;
    MEM8(edi + 0x250) = 0;
    MEM32(edi + 0x468) = edx;
    ecx = MEM32(esi + 0x30);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    eax = edx;
    if (TEST_NZ(ecx, ecx)) goto loc_003B5153; /* jne: not equal / not zero */

loc_003B514A: ;
    eax = eax | 8;
    MEM32(edi + 0x468) = eax;

loc_003B5153: ;
    eax = MEM32(edi + 0x200);
    xmm0 = MEMF(edi + 0x110); /* movss */
    eax = eax & 0xFFFFFFFBu;
    eax = eax | 0x80;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEM32(edi + 0x200) = eax;
    if ((xmm0 <= MEMF(0x648D14))) goto loc_003B5181; /* jbe: below or equal (unsigned <=) */

loc_003B5178: ;
    eax = eax | 4;
    MEM32(edi + 0x200) = eax;

loc_003B5181: ;
    eax = MEM32(edi + 0x468);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEM8(edi + 0x20C) = 0xA;
    MEM8(edi + 0x444) = 0x38;
    MEM32(edi + 0x204) = 0xA7;
    MEM8(edi + 0x17A) = 1;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_003B51D9; /* je: equal / zero */

loc_003B51AA: ;
    eax = eax & 0xFFFFFFBFu;
    MEM32(edi + 0x468) = eax;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x78);
    MEM32(edi + 0x84) = ecx;
    edx = MEM32(eax + 0x80);
    PUSH32(esp, 0x870ED4);
    ecx = edi;
    MEM32(edi + 0x8C) = edx;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_003B51D9: ;
    ecx = MEM32(edi + 0x200);
    SET_LO8(eax, MEM8(edi + 0x251));
    PUSH32(esp, ebx);
    ecx = ecx | 0x40;
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(edi + 0x200) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B51FD; /* je: equal / zero */

loc_003B51F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003B4B40(); /* call 0x003B4B40 */

loc_003B51FB: ;
    goto loc_003B5204;

loc_003B51FD: ;
    PUSH32(esp, 0); sub_003B4E40(); /* call 0x003B4E40 */

loc_003B5202: ;
    SET_LO8(ebx, LO8(eax));

loc_003B5204: ;
    ecx = MEM32(edi + 0x298);
    eax = ecx;
    eax = eax >> 5;
    eax = eax & 0xF;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = 3;
    if (CMP_EQ(eax, 1)) goto loc_003B522A; /* je: equal / zero */

loc_003B521D: ;
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    if (CMP_EQ(LO8(ecx), 8)) goto loc_003B522A; /* je: equal / zero */

loc_003B5225: ;
    if (CMP_NE(eax, 5)) goto loc_003B523B; /* jne: not equal / not zero */

loc_003B522A: ;
    if (CMP_EQ(MEM32(edi + 0x52C), ebp)) goto loc_003B5243; /* je: equal / zero */

loc_003B5232: ;
    MEM16(edi + 0x3AE) = 0;

loc_003B523B: ;
    if (CMP_NE(MEM32(edi + 0x52C), ebp)) goto loc_003B5261; /* jne: not equal / not zero */

loc_003B5243: ;
    if (CMP_NE(MEM32(edi + 0x64), 0x34)) goto loc_003B5265; /* jne: not equal / not zero */

loc_003B5249: ;
    xmm0 = MEMF(esi + 0x70); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x70) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_003B5265; /* ja: above (unsigned >) */

loc_003B5261: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003B52BA; /* je: equal / zero */

loc_003B5265: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003B526C: ;
    if (TEST_Z(eax, eax)) goto loc_003B52BA; /* je: equal / zero */

loc_003B5270: ;
    ebx = 0; /* xor self */
    MEM32(edi + 0x52C) = ebx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B5281: ;
    eax = MEM32(edi + 0x238);
    MEM16(edi + 0x3AE) = LO16(ebx);
    eax = MEM32(eax);
    if (CMP_EQ(eax, 1)) goto loc_003B52A0; /* je: equal / zero */

loc_003B5295: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x74B709) = 1;
    if (CMP_EQ(eax, ebx)) goto loc_003B52A7; /* je: equal / zero */

loc_003B52A0: ;
    MEM8(0x74B708) = 1;

loc_003B52A7: ;
    eax = MEM32(esi + 0x80);
    MEM8(eax + 0x775F38) = 0;
    MEM32(esi + 0x80) = ebp;

loc_003B52BA: ;
    eax = esi;
    PUSH32(esp, 0); sub_003B4F60(); /* call 0x003B4F60 */

loc_003B52C1: ;
    if (CMP_EQ(MEM32(esi + 0x30), 2)) goto loc_003B5392; /* je: equal / zero */

loc_003B52CB: ;
    eax = MEM32(esi + 0x50);
    if (TEST_Z(eax, eax)) goto loc_003B534F; /* je: equal / zero */

loc_003B52D2: ;
    SET_LO8(eax, MEM8(eax + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B534F; /* je: equal / zero */

loc_003B52DC: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + edx + -1744;
    if (TEST_Z(eax, eax)) goto loc_003B534F; /* je: equal / zero */

loc_003B52F6: ;
    eax = esi;
    PUSH32(esp, 0); sub_003B8420(); /* call 0x003B8420 */

loc_003B52FD: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_00267210(); /* call 0x00267210 */

loc_003B530A: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B534F; /* je: equal / zero */

loc_003B530E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002E6400(); /* call 0x002E6400 */

loc_003B5314: ;
    eax = MEM32(esi);
    esp = esp + 4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003B531E: ;
    if (TEST_Z(eax, eax)) goto loc_003B532F; /* je: equal / zero */

loc_003B5322: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    MEM8(esi + 0x2C) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B532F: ;
    eax = ZX8(MEM8(edi + 0x251));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = ZX8(MEM8(eax + ecx + -1477));
    MEM32(esi + 0x34) = edx;
    goto loc_003B5392;

loc_003B534F: ;
    xmm0 = MEMF(edi + 0x110); /* movss */
    xmm0 = xmm0 * MEMF(0x6490A0); /* mulss */
    MEMF(edi + 0x110) = xmm0; /* movss */
    if (CMP_NE(MEM8(esi + 0x2C), 1)) goto loc_003B5392; /* jne: not equal / not zero */

loc_003B536D: ;
    xmm0 = MEMF(0x648D20); /* movss */
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x2C) = 0;
    MEMF(esi + 0x6C) = xmm0; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003B5385: ;
    if (TEST_Z(eax, eax)) goto loc_003B5392; /* je: equal / zero */

loc_003B5389: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B5392: ;
    SET_LO16(eax, MEM16(edi + 0x174));
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(edi + 0x1C0); /* subss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x1C0); /* addss */
    SET_LO16(eax, LO16(eax) + 0x4000);
    ecx = SX16(LO16(eax));
    MEMF(edi + 0x1C0) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    eax = edi;
    MEMF(edi + 0x114) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002E9550(); /* call 0x002E9550 */

loc_003B53DE: ;
    PUSH32(esp, 0); sub_003B5080(); /* call 0x003B5080 */

loc_003B53E3: ;
    (void)0; /* cmp MEM16(edi + 0x3AE), 0 - flags set for next jcc */
    SET_LO8(ebx, 0xFF);
    if (CMP_A(MEM16(edi + 0x3AE), 0)) goto loc_003B541C; /* ja: above (unsigned >) */

loc_003B53EF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B53F7: ;
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x70) = xmm1; /* movss */
    MEMF(esi + 0x74) = xmm1; /* movss */
    MEM8(edi + 0xB4) = 0;
    MEM8(edi + 0x234) = LO8(ebx);
    MEM16(edi + 0x3AE) = 0x14;
    goto loc_003B541F;

loc_003B541C: ;
    xmm1 = 0.0f; /* xorps self = zero */

loc_003B541F: ;
    (void)0; /* cmp MEM32(esi + 0x30), ebp - flags set for next jcc */
    MEM8(esi + 0x78) = 0;
    POP32(esp, ebp);
    if (CMP_NE(MEM32(esi + 0x30), ebp)) goto loc_003B5494; /* jne: not equal / not zero */

loc_003B5429: ;
    ecx = MEM32(edi + 0x200);
    ecx = ecx | 0x1000000;
    MEM8(edi + 0x234) = LO8(ebx);
    MEM8(edi + 0xB4) = 0;
    MEM32(edi + 0x200) = ecx;
    xmm0 = MEMF(esi + 0x70); /* movss */
    SET_LO8(eax, MEM8(esi + 0x40));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    MEMF(esi + 0x70) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B5470; /* jne: not equal / not zero */

loc_003B545F: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003B5494; /* jb: below (unsigned <) */

loc_003B5464: ;
    PUSH32(esp, 0); sub_003B83F0(); /* call 0x003B83F0 */

loc_003B5469: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_003B5470: ;
    xmm2 = MEMF(0x648CE0); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_003B5489; /* jb: below (unsigned <) */

loc_003B547D: ;
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_003B5940(); /* call 0x003B5940 */

loc_003B5486: ;
    xmm1 = 0.0f; /* xorps self = zero */

loc_003B5489: ;
    /* comiss xmm1, MEMF(esi + 0x70) - sets EFLAGS */
    if ((xmm1 < MEMF(esi + 0x70))) goto loc_003B5494; /* jb: below (unsigned <) */

loc_003B548F: ;
    PUSH32(esp, 0); sub_003B4B10(); /* call 0x003B4B10 */

loc_003B5494: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000532D0(); /* call 0x000532D0 */

loc_003B549F: ;
    esp = esp + 8;
    ecx = edi;
    PUSH32(esp, 0); sub_003B5700(); /* call 0x003B5700 */

loc_003B54A9: ;
    PUSH32(esp, 0); sub_003B6040(); /* call 0x003B6040 */

loc_003B54AE: ;
    PUSH32(esp, 0); sub_003B54C0(); /* call 0x003B54C0 */

loc_003B54B3: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_003B54B5: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B54C0
 * Original: 0x003B54C0 - 0x003B54E5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B54C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B54C0: ;
    eax = MEM32(0x7FA1F8);
    eax = MEM32(eax * 4 + 0x69CF90);
    SET_LO8(ecx, MEM8(eax));
    esp = esp - 0x14C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(ecx), LO8(ebx))) { sub_003B54E5(); return; } /* jne: not equal / not zero */

loc_003B54DB: ;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 4) = ebx;
    g_seh_ebp = ebp; sub_003B54F7(); return; /* tail jmp 0x003B54F7 */

}

/**
 * sub_003B5700
 * Original: 0x003B5700 - 0x003B574D (77 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B5700: ;
    MEM8(ecx + 0x209) = MEM8(ecx + 0x209) | 0x40;
    SET_LO8(eax, MEM8(ecx + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B574D(); return; } /* je: equal / zero */

loc_003B5711: ;
    edx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx + -1744;
    eax = MEM32(eax + 0x564);
    if (TEST_Z(eax, eax)) { sub_003B574D(); return; } /* je: equal / zero */

loc_003B5731: ;
    edx = ZX8(MEM8(eax + 0x2A8));
    MEM8(edx + ecx + 0xBD) = 0x96;
    MEM8(edx + ecx + 0xBF) = 5;
    g_seh_ebp = ebp; sub_002F60E0(); return; /* tail jmp 0x002F60E0 */

}

/**
 * sub_003B5880
 * Original: 0x003B5880 - 0x003B58BD (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5880(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B5880: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003B5888: ;
    if (TEST_Z(eax, eax)) goto loc_003B58B9; /* je: equal / zero */

loc_003B588C: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x648D20); /* movss */
    MEM8(esi + 0x2C) = 0;
    MEMF(esi + 0x6C) = xmm0; /* movss */
    ecx = esi;
    if (TEST_Z(eax, eax)) goto loc_003B58B2; /* je: equal / zero */

loc_003B58A7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B58AE: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003B58B2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B58B9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B58C0
 * Original: 0x003B58C0 - 0x003B58CC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B58C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B58C0: ;
    edx = MEM32(ecx + 0x30);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edx, 2)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003B58D0
 * Original: 0x003B58D0 - 0x003B58DC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B58D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B58D0: ;
    edx = MEM32(ecx + 0x30);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 3 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edx, 3)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003B58E0
 * Original: 0x003B58E0 - 0x003B58FA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B58E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B58E0: ;
    ecx = MEM32(eax + 0x570);
    if (TEST_Z(ecx, ecx)) { sub_003B58FA(); return; } /* je: equal / zero */

loc_003B58EA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x34), _icall_esp); /* indirect call */
    }

loc_003B58F0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B58FA(); return; } /* je: equal / zero */

loc_003B58F4: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003B5900
 * Original: 0x003B5900 - 0x003B5939 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5900(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B5900: ;
    ecx = MEM32(eax + 0x570);
    if (TEST_Z(ecx, ecx)) goto loc_003B5938; /* je: equal / zero */

loc_003B590A: ;
    MEM32(ecx + 0x7C) = 0;
    eax = MEM32(edx + 0x568);
    eax = MEM32(eax + 0x444);
    edx = MEM32(eax + 0x30);
    if (TEST_NZ(edx, edx)) goto loc_003B5938; /* jne: not equal / not zero */

loc_003B5924: ;
    edx = MEM32(eax + 0x34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    eax = edx + eax + 0x40;
    if (TEST_Z(eax, eax)) goto loc_003B5938; /* je: equal / zero */

loc_003B5932: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x7C) = eax;

loc_003B5938: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B5940
 * Original: 0x003B5940 - 0x003B59F3 (179 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5940(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B5940: ;
    eax = eax + 0x20;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0xB4) = 0xFF;
    edx = eax;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    ecx = esi + 0x78;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    ecx = esi + 0x84;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esi + 0x5DC);
    if (TEST_Z(eax, eax)) goto loc_003B59BE; /* je: equal / zero */

loc_003B5986: ;
    xmm0 = MEMF(esi + 0x9C); /* movss */
    ecx = esi + 0x90;
    edx = MEM32(ecx);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x870ED4);
    PUSH32(esp, edx);
    edi = esp + 0xC;
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00356170(); /* call 0x00356170 */

loc_003B59BE: ;
    eax = MEM32(0x84EC00);
    ecx = MEM32(0x84EC04);
    if (CMP_EQ(eax, ecx)) goto loc_003B59ED; /* je: equal / zero */

loc_003B59CD: ;
    edx = ZX16(MEM16(esi + 0x60));

loc_003B59D1: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_003B59E2; /* je: equal / zero */

loc_003B59D5: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_003B59D1; /* jne: not equal / not zero */

loc_003B59DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003B59E2: ;
    if (CMP_EQ(eax, ecx)) goto loc_003B59ED; /* je: equal / zero */

loc_003B59E6: ;
    eax = MEM32(eax + 4);
    MEM8(eax + 0x10) = 1;

loc_003B59ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003B5A00
 * Original: 0x003B5A00 - 0x003B5AEB (235 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5A00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B5A00: ;
    ecx = MEM32(ebx + 0x570);
    if (TEST_NZ(ecx, ecx)) goto loc_003B5AA9; /* jne: not equal / not zero */

loc_003B5A0E: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003B5A1C; /* jne: not equal / not zero */

loc_003B5A17: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B5A1C: ;
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
    if (TEST_Z(esi, esi)) goto loc_003B5A6C; /* je: equal / zero */

loc_003B5A44: ;
    if (CMP_B(MEM32(esi + 0x80), 0x94)) goto loc_003B5A6C; /* jb: below (unsigned <) */

loc_003B5A50: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B5A5A: ;
    PUSH32(esp, 0x94);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B5A65: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003B5A90; /* jne: not equal / not zero */

loc_003B5A6C: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B5A7E: ;
    PUSH32(esp, 0x94);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B5A89: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B5A9B; /* je: equal / zero */

loc_003B5A90: ;
    esi = ebx;
    PUSH32(esp, 0); sub_003B49D0(); /* call 0x003B49D0 */

loc_003B5A97: ;
    ecx = eax;
    goto loc_003B5A9D;

loc_003B5A9B: ;
    ecx = 0; /* xor self */

loc_003B5A9D: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0x570) = ecx;
    POP32(esp, esi);
    if (TEST_Z(ecx, ecx)) goto loc_003B5AEA; /* je: equal / zero */

loc_003B5AA9: ;
    xmm0 = MEMF(esp + 8); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003B5ACD; /* jp: parity */

loc_003B5ABC: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(ecx + 0x90) = 1;
    goto loc_003B5AD4;

loc_003B5ACD: ;
    MEM8(ecx + 0x90) = 0;

loc_003B5AD4: ;
    MEMF(ecx + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(ecx + 0x88) = xmm0; /* movss */

loc_003B5AEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B5AF0
 * Original: 0x003B5AF0 - 0x003B5AFA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5AF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B5AF0: ;
    eax = MEM32(ecx + 0x50);
    if (TEST_NZ(eax, eax)) { sub_003B5AFA(); return; } /* jne: not equal / not zero */

loc_003B5AF7: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003B5B30
 * Original: 0x003B5B30 - 0x003B5B47 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5B30(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B5B30: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x6BD92C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_003B5B50(); return; /* tail jmp 0x003B5B50 */

}

/**
 * sub_003B5BC0
 * Original: 0x003B5BC0 - 0x003B5D16 (342 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5BC0(void)
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

loc_003B5BC0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, MEM8(0x878784));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(edi) = 0x6417F8;
    MEM32(edi + 4) = ebx;
    MEMF(edi + 8) = xmm0; /* movss */
    MEMF(edi + 0xC) = xmm0; /* movss */
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    MEMF(edi + 0x18) = xmm0; /* movss */
    MEM8(edi + 0x1C) = 1;
    MEM8(edi + 0x2C) = LO8(ebx);
    MEM32(edi + 0x30) = ebx;
    MEM32(edi + 0x34) = ebx;
    MEM32(edi + 0x38) = 0xFFFFFFFEu;
    if (TEST_NZ(LO8(eax), 1)) goto loc_003B5C32; /* jne: not equal / not zero */

loc_003B5C0A: ;
    edx = MEM32(0x878784);
    PUSH32(esp, esi);
    edx = edx | 1;
    esi = 0x878760;
    MEM32(0x878784) = edx;
    PUSH32(esp, 0); sub_00293880(); /* call 0x00293880 */

loc_003B5C24: ;
    PUSH32(esp, 0x48CBA0);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_003B5C2E: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_003B5C32: ;
    eax = MEM32(0x878774);
    ecx = MEM32(0x878778);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    SET_LO16(edx, MEM16(ebp + 0xAC));
    if (CMP_EQ(eax, ecx)) goto loc_003B5C56; /* je: equal / zero */

loc_003B5C48: ;
    if (CMP_EQ(MEM16(eax), LO16(edx))) goto loc_003B5C54; /* je: equal / zero */

loc_003B5C4D: ;
    eax = eax + 2;
    if (CMP_NE(eax, ecx)) goto loc_003B5C48; /* jne: not equal / not zero */

loc_003B5C54: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */

loc_003B5C56: ;
    SET_LO8(eax, (CMP_NE(eax, ecx)) ? 1 : 0); /* setne */
    MEM8(edi + 0x40) = LO8(eax);
    MEM8(edi + 0x41) = LO8(ebx);
    MEM8(edi + 0x42) = LO8(ebx);
    eax = MEM32(ebp + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B5C6D: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(edi + 0x43) = LO8(eax);
    MEMF(edi + 0x44) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x260);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x48) = ecx;
    MEM8(edi + 0x4C) = LO8(ebx);
    MEM16(edi + 0x4E) = 0xFFFF;
    MEM32(edi + 0x50) = ebp;
    MEM8(edi + 0x54) = LO8(ebx);
    MEM8(edi + 0x5C) = LO8(ebx);
    MEMF(edi + 0x60) = xmm0; /* movss */
    MEM8(edi + 0x64) = LO8(ebx);
    MEM32(edi + 0x68) = ebx;
    edx = ebp + 0x78;
    ecx = MEM32(edx);
    eax = edi + 0x20;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    if (CMP_NE(MEM8(0x862C5C), LO8(ebx))) goto loc_003B5CD3; /* jne: not equal / not zero */

loc_003B5CCA: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_003B5CE8; /* jne: not equal / not zero */

loc_003B5CD3: ;
    if (CMP_NE(MEM16(ebp + 0xAC), LO16(ebx))) goto loc_003B5CE8; /* jne: not equal / not zero */

loc_003B5CDC: ;
    PUSH32(esp, 0); sub_002625D0(); /* call 0x002625D0 */

loc_003B5CE1: ;
    MEM16(ebp + 0xAC) = LO16(eax);

loc_003B5CE8: ;
    eax = MEM32(0x802020);
    MEM8(ebp + 0xA0) = 2;
    MEM32(edi + 0x58) = eax;
    eax++;
    MEM32(0x802020) = eax;
    MEM32(ebp + 0x574) = 0x3B5D20;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_003B5D0C: ;
    MEMF(edi + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003B5D20
 * Original: 0x003B5D20 - 0x003B5D30 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B5D20: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_003B5D2F; /* je: equal / zero */

loc_003B5D28: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003B5D2F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B5D30
 * Original: 0x003B5D30 - 0x003B5D6E (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5D30(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B5D30: ;
    eax = MEM32(0x84A5F8);
    edx = MEM32(0x84A5FC);
    PUSH32(esp, ebx);
    ecx = 0x10;
    eax = eax + 0x6D00;
    PUSH32(esp, edi);

loc_003B5D47: ;
    if (CMP_EQ(MEM8(edx + ecx), 0)) goto loc_003B5D5B; /* je: equal / zero */

loc_003B5D4D: ;
    edi = ZX8(MEM8(eax + 0x251));
    ebx = esi + 1;
    if (CMP_EQ(edi, ebx)) goto loc_003B5D6B; /* je: equal / zero */

loc_003B5D5B: ;
    ecx++;
    eax = eax + 0x6D0;
    if (CMP_L(ecx, 0x80)) goto loc_003B5D47; /* jl: less (signed <) */

loc_003B5D69: ;
    eax = 0; /* xor self */

loc_003B5D6B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B5D70
 * Original: 0x003B5D70 - 0x003B5E92 (290 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B5D70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0xAC), LO16(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(MEM16(esi + 0xAC), LO16(ebx))) goto loc_003B5D93; /* jne: not equal / not zero */

loc_003B5D87: ;
    PUSH32(esp, 0); sub_002625D0(); /* call 0x002625D0 */

loc_003B5D8C: ;
    MEM16(esi + 0xAC) = LO16(eax);

loc_003B5D93: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xAC);
    MEM32(ebp + 0x3C) = eax;
    (void)0; /* cmp MEM8(esi + 0x251), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM8(esi + 0x251), LO8(ebx))) ? 1 : 0); /* setne */
    MEM8(ebp + 0x40) = LO8(ecx);
    edx = (int32_t)MEMF(esi + 0x78); /* cvttss2si */
    MEM32(ebp + 0x4C) = edx;
    eax = (int32_t)MEMF(esi + 0x7C); /* cvttss2si */
    MEM32(ebp + 0x50) = eax;
    ecx = (int32_t)MEMF(esi + 0x80); /* cvttss2si */
    MEM32(ebp + 0x54) = ecx;
    SET_LO16(edx, MEM16(esi + 0x174));
    MEM16(ebp + 0x58) = LO16(edx);
    SET_LO8(eax, MEM8(edi + 0x30));
    MEM8(ebp + 0x4A) = LO8(eax);
    ecx = ZX16(MEM16(esi + 0x3AE));
    MEM32(ebp + 0x68) = ecx;
    edx = MEM32(edi + 0x50);
    eax = MEM32(edx + 0x238);
    ecx = MEM32(eax);
    MEM32(ebp + 0x74) = ecx;
    MEM8(ebp + 0x60) = LO8(ebx);
    SET_LO8(edx, MEM8(edi + 0x4C));
    MEM8(ebp + 0x38) = LO8(edx);
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B5E01: ;
    if (TEST_Z(eax, eax)) goto loc_003B5E3A; /* je: equal / zero */

loc_003B5E05: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B5E10: ;
    edi = ebp + 0x44;
    esi = ebp + 0x48;
    PUSH32(esp, 0); sub_00289590(); /* call 0x00289590 */

loc_003B5E1B: ;
    if (TEST_NZ(eax, eax)) goto loc_003B5E82; /* jne: not equal / not zero */

loc_003B5E1F: ;
    MEM32(edi) = 0xFFFFFFFEu;
    POP32(esp, edi);
    MEM16(esi) = 0xFFFE;
    POP32(esp, esi);
    MEM8(ebp + 0x6C) = LO8(ebx);
    MEM32(ebp + 0x70) = ebx;
    MEM32(ebp + 0x78) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003B5E3A: ;
    SET_LO8(eax, MEM8(esi + 0x251));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_003B5E75; /* je: equal / zero */

loc_003B5E44: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edi = ebp + 0x44;
    esi = ebp + 0x48;
    eax = eax + ecx + -1744;
    PUSH32(esp, 0); sub_00289590(); /* call 0x00289590 */

loc_003B5E65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x6C) = LO8(ebx);
    MEM32(ebp + 0x70) = ebx;
    MEM32(ebp + 0x78) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003B5E75: ;
    MEM16(ebp + 0x48) = 0xFFFE;
    MEM32(ebp + 0x44) = 0xFFFFFFFEu;

loc_003B5E82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x6C) = LO8(ebx);
    MEM32(ebp + 0x70) = ebx;
    MEM32(ebp + 0x78) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B5EA0
 * Original: 0x003B5EA0 - 0x003B603A (410 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B5EA0: ;
    MEM8(edi + 0x54) = 1;
    SET_LO8(eax, MEM8(ebx + 0x40));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B5EF7; /* je: equal / zero */

loc_003B5EB1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEMF(edi + 0xC) = xmm0; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    esi = MEM32(ebx + 0x44);
    SET_LO16(eax, MEM16(ebx + 0x48));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_003B5ECF: ;
    if (TEST_Z(eax, eax)) goto loc_003B5FF4; /* je: equal / zero */

loc_003B5ED7: ;
    ecx = ZX8(MEM8(ebp + 0x251));
    edx = ZX16(MEM16(eax + 0x60));
    ecx--;
    if (CMP_EQ(ecx, edx)) goto loc_003B5FF4; /* je: equal / zero */

loc_003B5EEB: ;
    edx = ebp;
    PUSH32(esp, 0); sub_002EA150(); /* call 0x002EA150 */

loc_003B5EF2: ;
    goto loc_003B5FF1;

loc_003B5EF7: ;
    SET_LO8(eax, MEM8(ebp + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B5F23; /* je: equal / zero */

loc_003B5F01: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, ecx);
    esi = edx + eax + -1744;
    PUSH32(esp, 0); sub_002E9F80(); /* call 0x002E9F80 */

loc_003B5F20: ;
    esp = esp + 4;

loc_003B5F23: ;
    xmm0 = (float)(int32_t)MEM32(ebx + 0x4C); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(ebp + 0x78); /* subss */
    MEMF(edi + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebx + 0x50); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(ebp + 0x7C); /* subss */
    xmm2 = MEMF(edi + 8); /* movss */
    MEMF(edi + 0xC) = xmm0; /* movss */
    xmm1 = MEMF(edi + 0xC); /* movss */
    xmm0 = (float)(int32_t)MEM32(ebx + 0x54); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(ebp + 0x80); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    /* comiss xmm3, MEMF(0x649480) - sets EFLAGS */
    MEMF(edi + 0x10) = xmm0; /* movss */
    if ((xmm3 <= MEMF(0x649480))) goto loc_003B5FC8; /* jbe: below or equal (unsigned <=) */

loc_003B5F83: ;
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x78); /* addss */
    MEMF(ebp + 0x78) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 8) = xmm0; /* movss */
    xmm1 = MEMF(ebp + 0x7C); /* movss */
    xmm1 = xmm1 + MEMF(edi + 0xC); /* addss */
    MEMF(ebp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x10); /* movss */
    MEMF(edi + 0xC) = xmm0; /* movss */
    xmm1 = xmm1 + MEMF(ebp + 0x80); /* addss */
    MEMF(ebp + 0x80) = xmm1; /* movss */
    MEMF(edi + 0x10) = xmm0; /* movss */

loc_003B5FC8: ;
    SET_LO16(eax, MEM16(ebx + 0x58));
    ecx = ZX16(LO16(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEM16(ebp + 0x174) = LO16(eax);
    MEM16(ebp + 0x170) = LO16(eax);
    MEMF(ebp + 0x114) = xmm0; /* movss */

loc_003B5FF1: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_003B5FF4: ;
    SET_LO16(edx, MEM16(ebx + 0x68));
    xmm1 = MEMF(0x648D14); /* movss */
    MEM16(ebp + 0x3AE) = LO16(edx);
    SET_LO8(eax, MEM8(ebx + 0x38));
    ecx = MEM32(edi + 0x50);
    MEM8(edi + 0x4C) = LO8(eax);
    edx = MEM32(ecx + 0x238);
    eax = MEM32(ebx + 0x74);
    MEM32(edx) = eax;
    ecx = ZX8(MEM8(edi + 0x1C));
    MEMF(edi + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    POP32(esp, esi);
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(edi + 0x18) = xmm1; /* movss */
    MEM8(edi + 0x1C) = 1;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6040
 * Original: 0x003B6040 - 0x003B60B5 (117 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6040(void)
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

loc_003B6040: ;
    SET_LO8(eax, MEM8(edi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B604E; /* je: equal / zero */

loc_003B604A: ;
    MEM8(esi + 0x43) = 1;

loc_003B604E: ;
    SET_LO8(eax, MEM8(esi + 0x5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B6091; /* jne: not equal / not zero */

loc_003B6055: ;
    SET_LO8(eax, MEM8(esi + 0x43));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B6091; /* jne: not equal / not zero */

loc_003B605C: ;
    SET_LO8(eax, MEM8(esi + 0x42));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B6091; /* jne: not equal / not zero */

loc_003B6063: ;
    xmm0 = MEMF(esi + 0x44); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x44) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_003B6091; /* jb: below (unsigned <) */

loc_003B607D: ;
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esi + 0x44) = xmm1; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003B6089: ;
    if (TEST_Z(eax, eax)) goto loc_003B6091; /* je: equal / zero */

loc_003B608D: ;
    MEM8(esi + 0x42) = 1;

loc_003B6091: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B60B5(); return; } /* je: equal / zero */

loc_003B609A: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B60AC; /* je: equal / zero */

loc_003B60A3: ;
    SET_LO8(eax, MEM8(0x864EC2));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B60B5(); return; } /* je: equal / zero */

loc_003B60AC: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_003B60B1: ;
    /* fstp st(0) */
    g_seh_ebp = ebp; sub_003B60BD(); return; /* tail jmp 0x003B60BD */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003B61B0
 * Original: 0x003B61B0 - 0x003B61BC (12 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B61B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B61B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x50);
    if (TEST_NZ(eax, eax)) { sub_003B61BC(); return; } /* jne: not equal / not zero */

loc_003B61BA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6260
 * Original: 0x003B6260 - 0x003B6318 (184 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6260(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B6260: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_003B6273; /* jne: not equal / not zero */

loc_003B626E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B6273: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_003B62C1; /* je: equal / zero */

loc_003B6299: ;
    if (CMP_B(MEM32(esi + 0x80), 0x88)) goto loc_003B62C1; /* jb: below (unsigned <) */

loc_003B62A5: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B62AF: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B62BA: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_003B62E5; /* jne: not equal / not zero */

loc_003B62C1: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B62D3: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B62DE: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_003B6318(); return; } /* je: equal / zero */

loc_003B62E5: ;
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
    MEM32(eax) = 0x6006C0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6320
 * Original: 0x003B6320 - 0x003B6335 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6320(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B6320: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x3C);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_003B632C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_003B6335(); return; } /* je: equal / zero */

loc_003B6331: ;
    SET_LO8(eax, MEM8(eax + 0x60));
    esp += 4; return; /* ret */

}

/**
 * sub_003B6340
 * Original: 0x003B6340 - 0x003B63B5 (117 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B6340: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003B6352: ;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003B635C: ;
    eax = MEM32(edi + 0x34);
    esp = esp + 8;
    if (CMP_EQ(eax, 1)) goto loc_003B6375; /* je: equal / zero */

loc_003B6367: ;
    if (TEST_Z(eax, eax)) goto loc_003B6375; /* je: equal / zero */

loc_003B636B: ;
    if (CMP_EQ(eax, 7)) goto loc_003B6375; /* je: equal / zero */

loc_003B6370: ;
    if (CMP_NE(eax, 6)) goto loc_003B63A2; /* jne: not equal / not zero */

loc_003B6375: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x60);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003B6380: ;
    SET_LO8(eax, MEM8(edi + 0x60));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B63A2; /* je: equal / zero */

loc_003B638A: ;
    eax = MEM32(edi + 0x5C);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003B6394: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x5A);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003B639F: ;
    esp = esp + 8;

loc_003B63A2: ;
    eax = MEM32(edi + 0x34);
    if (CMP_L(eax, 0xC)) { sub_003B63B5(); return; } /* jl: less (signed <) */

loc_003B63AA: ;
    if (CMP_G(eax, 0x15)) { sub_003B63B5(); return; } /* jg: greater (signed >) */

loc_003B63AF: ;
    MEM8(edi + 0x40) = 0;
    g_seh_ebp = ebp; sub_003B63D8(); return; /* tail jmp 0x003B63D8 */

}

/**
 * sub_003B6C10
 * Original: 0x003B6C10 - 0x003B6C36 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6C10(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B6C10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    edx = MEM32(esp + 8);
    ecx = MEM32(edx);
    ecx = MEM32(ecx + 0x570);
    eax = MEM32(eax + 0x58);
    ecx = MEM32(ecx + 0x58);
    if (CMP_GE(eax, ecx)) { sub_003B6C36(); return; } /* jge: greater or equal (signed >=) */

loc_003B6C32: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6C50
 * Original: 0x003B6C50 - 0x003B6CC3 (115 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6C50(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B6C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x10;
    esi = 0x6D00;
    /* nop */

loc_003B6C60: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + edi), 0)) goto loc_003B6CB1; /* je: equal / zero */

loc_003B6C6B: ;
    ecx = MEM32(0x84A5F8);
    eax = MEM32(esi + ecx + 0x23C);
    if (TEST_Z(eax, eax)) goto loc_003B6CB1; /* je: equal / zero */

loc_003B6C7C: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B6C81: ;
    if (CMP_NE(eax, ebx)) goto loc_003B6CB1; /* jne: not equal / not zero */

loc_003B6C85: ;
    edx = MEM32(0x84A5F8);
    ecx = MEM32(esi + edx + 0x570);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + edx;
    if (TEST_Z(ecx, ecx)) goto loc_003B6CB1; /* je: equal / zero */

loc_003B6C99: ;
    edx = MEM32(eax + 0x64);
    edx = edx - 0x2D;
    if ((edx == 0)) goto loc_003B6CAB; /* je: equal / zero */

loc_003B6CA1: ;
    edx = edx - 0x10;
    if ((edx == 0)) goto loc_003B6CAB; /* je: equal / zero */

loc_003B6CA6: ;
    edx = edx - 2;
    if ((edx != 0)) goto loc_003B6CB1; /* jne: not equal / not zero */

loc_003B6CAB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x2C), _icall_esp); /* indirect call */
    }

loc_003B6CB1: ;
    esi = esi + 0x6D0;
    edi++;
    if (CMP_L(esi, 0x36800)) goto loc_003B6C60; /* jl: less (signed <) */

loc_003B6CC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6CD0
 * Original: 0x003B6CD0 - 0x003B6E0B (315 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B6CD0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x864EC1));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_LE(LO8(eax), LO8(ebx))) goto loc_003B6E05; /* jle: less or equal (signed <=) */

loc_003B6CE6: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0xC) = 0x8658A4;
    PUSH32(esp, edi);

loc_003B6CF4: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_003B6D01; /* jne: not equal / not zero */

loc_003B6CFC: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B6D01: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_003B6D4F; /* je: equal / zero */

loc_003B6D27: ;
    if (CMP_B(MEM32(esi + 0x80), 0x88)) goto loc_003B6D4F; /* jb: below (unsigned <) */

loc_003B6D33: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B6D3D: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B6D48: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_003B6D73; /* jne: not equal / not zero */

loc_003B6D4F: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B6D61: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B6D6C: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_003B6DA6; /* je: equal / zero */

loc_003B6D73: ;
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
    MEM32(eax) = 0x6006C0;
    esi = eax;
    goto loc_003B6DA8;

loc_003B6DA6: ;
    esi = 0; /* xor self */

loc_003B6DA8: ;
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); sub_003B5D70(); /* call 0x003B5D70 */

loc_003B6DB3: ;
    MEM32(esi + 0x34) = 0x16;
    eax = MEM32(ebp + 0x50);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xAC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM32(esi + 0x3C) = ecx;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003B6DD3: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B6DE1: ;
    eax = MEM32(esp + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    edi = edi + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = edi;
    if (CMP_L(eax, ecx)) goto loc_003B6CF4; /* jl: less (signed <) */

loc_003B6E03: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003B6E05: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6E10
 * Original: 0x003B6E10 - 0x003B72F5 (1253 bytes, 337 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6E10(void)
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

loc_003B6E10: ;
    esp = esp - 0x84;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_002B3FF0(); /* call 0x002B3FF0 */

loc_003B6E27: ;
    edi = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_003B72EB; /* je: equal / zero */

loc_003B6E38: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B6E4F; /* jne: not equal / not zero */

loc_003B6E42: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B717A; /* jne: not equal / not zero */

loc_003B6E4F: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    eax = 1;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(ebp, ebp)) goto loc_003B6F52; /* je: equal / zero */

loc_003B6E6C: ;
    esi = MEM32(esp + 0xA8);
    if (TEST_Z(esi, esi)) goto loc_003B6F52; /* je: equal / zero */

loc_003B6E7B: ;
    edx = MEM32(esi + 0x568);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x444);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_0032DA10(); /* call 0x0032DA10 */

loc_003B6E9B: ;
    edx = MEM32(esp + 0x24);
    esp = esp + 0xC;
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_003B6F52; /* jle: less or equal (signed <=) */

loc_003B6EAC: ;
    /* nop */

loc_003B6EB0: ;
    ecx = MEM32(esp + eax * 4 + 0x5C);
    if (TEST_Z(ecx, ecx)) goto loc_003B6EBD; /* je: equal / zero */

loc_003B6EB8: ;
    if (CMP_EQ(MEM32(ecx + 4), ebp)) goto loc_003B6EC7; /* je: equal / zero */

loc_003B6EBD: ;
    eax++;
    if (CMP_L(eax, edx)) goto loc_003B6EB0; /* jl: less (signed <) */

loc_003B6EC2: ;
    goto loc_003B6F52;

loc_003B6EC7: ;
    ecx = MEM32(esi + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_003B6EF0; /* je: equal / zero */

loc_003B6ED1: ;
    ecx = MEM32(ecx + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_003B6EF0; /* je: equal / zero */

loc_003B6EDB: ;
    SET_LO8(edx, MEM8(ecx + 0x10));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003B6EF0; /* je: equal / zero */

loc_003B6EE2: ;
    esi = MEM32(esp + eax * 4 + 0x5C);
    edx = ZX8(MEM8(esi + 0xE));
    MEM32(esp + 0x1C) = edx;
    goto loc_003B6EFC;

loc_003B6EF0: ;
    esi = MEM32(esp + eax * 4 + 0x5C);
    eax = ZX8(MEM8(esi + 0xD));
    MEM32(esp + 0x1C) = eax;

loc_003B6EFC: ;
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_NE(ebp, 0xA)) goto loc_003B6F2D; /* jne: not equal / not zero */

loc_003B6F03: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003B6F08: ;
    eax = MEM32(esp + 0xA8);
    PUSH32(esp, 0); sub_00344F10(); /* call 0x00344F10 */

loc_003B6F14: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_003B6F2D; /* jne: not equal / not zero */

loc_003B6F18: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003B6F1D: ;
    edx = 0x63B1B4;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_003B6F27: ;
    if (TEST_Z(eax, eax)) goto loc_003B6F2D; /* je: equal / zero */

loc_003B6F2B: ;
    SET_LO8(ebx, 1);

loc_003B6F2D: ;
    (void)0; /* cmp ebp, 0xA - flags set for next jcc */
    ecx = ZX8(MEM8(esi + 0xC));
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(ebp, 0xA)) goto loc_003B6F52; /* jne: not equal / not zero */

loc_003B6F3A: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003B6F4C; /* je: equal / zero */

loc_003B6F3E: ;
    edx = MEM32(0x84A6A4);
    eax = MEM32(edx + 0xD4);
    goto loc_003B6F4E;

loc_003B6F4C: ;
    eax = 0; /* xor self */

loc_003B6F4E: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + eax;

loc_003B6F52: ;
    ebx = 0x10;
    esi = 0x6D00;
    /* nop */

loc_003B6F60: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + ebx), 0)) goto loc_003B6FCB; /* je: equal / zero */

loc_003B6F6B: ;
    ecx = MEM32(0x84A5F8);
    eax = MEM32(esi + ecx + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B6F7D: ;
    if (CMP_NE(eax, MEM32(esp + 0xA8))) goto loc_003B6FCB; /* jne: not equal / not zero */

loc_003B6F86: ;
    edx = MEM32(0x84A5F8);
    ebp = MEM32(0x84A1AC);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = esi + edx;
    edx = MEM32(eax + 0x68);
    if (CMP_NE(edx, MEM32(ecx + ebp + 0x10))) goto loc_003B6FCB; /* jne: not equal / not zero */

loc_003B6FA3: ;
    ecx = MEM32(eax + 0x570);
    if (TEST_Z(ecx, ecx)) goto loc_003B6FBE; /* je: equal / zero */

loc_003B6FAD: ;
    if (CMP_EQ(MEM16(eax + 0x3AE), 0)) goto loc_003B6FCB; /* je: equal / zero */

loc_003B6FB7: ;
    SET_LO8(edx, MEM8(ecx + 0x42));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003B6FCB; /* jne: not equal / not zero */

loc_003B6FBE: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + ecx * 4 + 0x34) = eax;
    ecx++;
    MEM32(esp + 0x10) = ecx;

loc_003B6FCB: ;
    esi = esi + 0x6D0;
    ebx++;
    if (CMP_L(esi, 0x36800)) goto loc_003B6F60; /* jl: less (signed <) */

loc_003B6FDA: ;
    SET_LO8(eax, MEM8(esp + 0xAC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B717A; /* je: equal / zero */

loc_003B6FE9: ;
    eax = MEM32(esp + 0x1C);
    ecx = eax + -1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x14));
    eax = MEM32(esp + 0x10);
    esi = eax;
    esi = esi - ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_LE(esi & esi, 0)) goto loc_003B717A; /* jle: less or equal (signed <=) */

loc_003B7009: ;
    PUSH32(esp, 0x3B6C10);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046FE20(); /* call 0x0046FE20 */

loc_003B701B: ;
    ebp = 0; /* xor self */
    esp = esp + 0x10;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(esi & esi, 0)) goto loc_003B717A; /* jle: less or equal (signed <=) */

loc_003B702C: ;
    /* nop */

loc_003B7030: ;
    ebx = MEM32(esp + ebp * 4 + 0x34);
    edi = MEM32(ebx + 0x570);
    if (TEST_Z(edi, edi)) goto loc_003B7169; /* je: equal / zero */

loc_003B7042: ;
    if (CMP_EQ(MEM32(edi + 0x38), 0xFFFFFFFEu)) goto loc_003B7140; /* je: equal / zero */

loc_003B704C: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003B705A; /* jne: not equal / not zero */

loc_003B7055: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B705A: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_003B70A8; /* je: equal / zero */

loc_003B7080: ;
    if (CMP_B(MEM32(esi + 0x80), 0x88)) goto loc_003B70A8; /* jb: below (unsigned <) */

loc_003B708C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B7096: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B70A1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003B70D0; /* jne: not equal / not zero */

loc_003B70A8: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B70BA: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B70C5: ;
    esi = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_003B7104; /* je: equal / zero */

loc_003B70CE: ;
    goto loc_003B70D2;

loc_003B70D0: ;
    esi = 0; /* xor self */

loc_003B70D2: ;
    MEM32(eax + 4) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x2C) = esi;
    MEM16(eax + 0x32) = LO16(esi);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM8(eax + 0x30) = 0;
    MEM32(eax) = 0x6006C0;
    esi = eax;

loc_003B7104: ;
    PUSH32(esp, esi);
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_003B5D70(); /* call 0x003B5D70 */

loc_003B710E: ;
    MEM32(esi + 0x34) = 0x16;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xAC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003B712B: ;
    eax = MEM32(edi + 0x38);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B7136: ;
    esi = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x10);
    goto loc_003B7146;

loc_003B7140: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003B6CD0(); /* call 0x003B6CD0 */

loc_003B7146: ;
    eax = MEM32(edi + 0x50);
    if (TEST_Z(eax, eax)) goto loc_003B7169; /* je: equal / zero */

loc_003B714D: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xAC);
    PUSH32(esp, 0); sub_002624A0(); /* call 0x002624A0 */

loc_003B7159: ;
    ecx = MEM32(edi + 0x50);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_003B7166: ;
    esp = esp + 0xC;

loc_003B7169: ;
    ebp++;
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(ebp, esi)) goto loc_003B7030; /* jl: less (signed <) */

loc_003B7176: ;
    edi = MEM32(esp + 0x20);

loc_003B717A: ;
    edx = MEM32(0x84A1B0);
    MEM8(edx + edi) = 0;
    ebx = MEM32(0x84A1AC);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x54);
    edi = edi + ebx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_003B719A: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003B72E9; /* je: equal / zero */

loc_003B71A6: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = eax + ecx + -1744;
    eax = MEM32(esp + 0x94);
    ecx = eax;
    edi = MEM32(ecx);
    edx = esi + 0x78;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax);
    edx = esi + 0x84;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(esi + 0x5DC);
    if (TEST_Z(eax, eax)) goto loc_003B722D; /* je: equal / zero */

loc_003B71F5: ;
    xmm0 = MEMF(esi + 0x9C); /* movss */
    ecx = esi + 0x90;
    edx = MEM32(ecx);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x870ED4);
    PUSH32(esp, edx);
    edi = esp + 0x24;
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00356170(); /* call 0x00356170 */

loc_003B722D: ;
    fp_push(MEMF(esp + 0x98)); /* fld float */
    xmm0 = MEMF(esp + 0x98); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esi + 0x114) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003B7256: ;
    MEM16(esi + 0x170) = LO16(eax);
    MEM16(esi + 0x174) = LO16(eax);
    eax = MEM32(esp + 0xA0);
    if (TEST_NZ(eax, eax)) goto loc_003B7286; /* jne: not equal / not zero */

loc_003B726F: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_003B7281; /* je: equal / zero */

loc_003B7278: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B728D; /* je: equal / zero */

loc_003B7281: ;
    PUSH32(esp, 0); sub_002625D0(); /* call 0x002625D0 */

loc_003B7286: ;
    MEM16(esi + 0xAC) = LO16(eax);

loc_003B728D: ;
    eax = MEM32(esp + 0xA4);
    edi = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003B729F: ;
    SET_LO8(eax, MEM8(esp + 0xA8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B72EB; /* je: equal / zero */

loc_003B72AC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0x624) = xmm0; /* movss */
    MEMF(esi + 0x62C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x628) = xmm1; /* movss */
    MEMF(esi + 0x630) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

loc_003B72E9: ;
    eax = 0; /* xor self */

loc_003B72EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003B7300
 * Original: 0x003B7300 - 0x003B731A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7300(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7300: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x10;
    edi = 0x6D00;
    g_seh_ebp = ebp; sub_003B7320(); return; /* tail jmp 0x003B7320 */

}

/**
 * sub_003B7440
 * Original: 0x003B7440 - 0x003B746B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7440: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0 = MEMF(ecx + 0x48); /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x34), _icall_esp); /* indirect call */
    }

loc_003B7457: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B746B(); return; } /* je: equal / zero */

loc_003B745B: ;
    xmm0 = MEMF(0x648E54); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_003B7471(); return; /* tail jmp 0x003B7471 */

}

/**
 * sub_003B7500
 * Original: 0x003B7500 - 0x003B7E7F (2431 bytes, 696 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7500(void)
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

loc_003B7500: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esp = esp - 0x34;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B7E7A; /* je: equal / zero */

loc_003B7513: ;
    PUSH32(esp, 0); sub_004167B0(); /* call 0x004167B0 */

loc_003B7518: ;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x8758FC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003B7540; /* jbe: below or equal (unsigned <=) */

loc_003B7534: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B7E7A; /* je: equal / zero */

loc_003B7540: ;
    xmm0 = MEMF(esp + 4); /* movss */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(0x864EC1);
    MEM32(esp + 0x2C) = eax;
    MEM16(esp + 0x30) = LO16(eax);
    edx = 0; /* xor self */
    ebp = ebp | 0xFFFFFFFFu;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEMF(0x8758FC) = xmm0; /* movss */
    MEM8(esp + 0x32) = LO8(eax);
    if (CMP_LE(esi, edi)) goto loc_003B75CF; /* jle: less or equal (signed <=) */

loc_003B7578: ;
    eax = 0x865620;
    /* nop */

loc_003B7580: ;
    ebx = ZX8(MEM8(eax));
    if (TEST_Z(LO8(ebx), 1)) goto loc_003B75A4; /* je: equal / zero */

loc_003B7588: ;
    (void)0; /* cmp MEM32(eax + 0x2E4), ebp - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(eax + 0x2E4), ebp)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B75A4; /* je: equal / zero */

loc_003B7595: ;
    SET_LO8(ecx, MEM8(eax + 0x282));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B75A4; /* je: equal / zero */

loc_003B759F: ;
    MEM8(esp + edx + 0x24) = 1;

loc_003B75A4: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_003B75C5; /* je: equal / zero */

loc_003B75A9: ;
    (void)0; /* cmp MEM32(eax + 0x2E8), ebp - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(eax + 0x2E8), ebp)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B75C5; /* je: equal / zero */

loc_003B75B6: ;
    SET_LO8(ecx, MEM8(eax + 0x282));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B75C5; /* je: equal / zero */

loc_003B75C0: ;
    MEM8(esp + edx + 0x24) = 1;

loc_003B75C5: ;
    edx++;
    eax = eax + 0xA50;
    if (CMP_L(edx, esi)) goto loc_003B7580; /* jl: less (signed <) */

loc_003B75CF: ;
    SET_LO8(edx, MEM8(esp + 0x24));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = ebp;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003B75E2; /* je: equal / zero */

loc_003B75DB: ;
    ecx = 1;
    eax = 0; /* xor self */

loc_003B75E2: ;
    SET_LO8(edx, MEM8(esp + 0x25));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003B75F0; /* je: equal / zero */

loc_003B75EA: ;
    ecx++;
    eax = 1;

loc_003B75F0: ;
    if (CMP_NE(ecx, edi)) goto loc_003B77CE; /* jne: not equal / not zero */

loc_003B75F8: ;
    eax = MEM32(0x84A5F8);
    eax = eax + 0x7270;
    edx = 0x1C;

loc_003B7607: ;
    if (CMP_NE(MEM8(eax + -1232), 2)) goto loc_003B761A; /* jne: not equal / not zero */

loc_003B7610: ;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, edi)) goto loc_003B761A; /* je: equal / zero */

loc_003B7616: ;
    MEM16(ecx + 0x4E) = LO16(ebp);

loc_003B761A: ;
    if (CMP_NE(MEM8(eax + 0x200), 2)) goto loc_003B7631; /* jne: not equal / not zero */

loc_003B7623: ;
    ecx = MEM32(eax + 0x6D0);
    if (CMP_EQ(ecx, edi)) goto loc_003B7631; /* je: equal / zero */

loc_003B762D: ;
    MEM16(ecx + 0x4E) = LO16(ebp);

loc_003B7631: ;
    if (CMP_NE(MEM8(eax + 0x8D0), 2)) goto loc_003B7648; /* jne: not equal / not zero */

loc_003B763A: ;
    ecx = MEM32(eax + 0xDA0);
    if (CMP_EQ(ecx, edi)) goto loc_003B7648; /* je: equal / zero */

loc_003B7644: ;
    MEM16(ecx + 0x4E) = LO16(ebp);

loc_003B7648: ;
    if (CMP_NE(MEM8(eax + 0xFA0), 2)) goto loc_003B765F; /* jne: not equal / not zero */

loc_003B7651: ;
    ecx = MEM32(eax + 0x1470);
    if (CMP_EQ(ecx, edi)) goto loc_003B765F; /* je: equal / zero */

loc_003B765B: ;
    MEM16(ecx + 0x4E) = LO16(ebp);

loc_003B765F: ;
    eax = eax + 0x1B40;
    edx--;
    if ((edx != 0)) goto loc_003B7607; /* jne: not equal / not zero */

loc_003B7667: ;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_003B7E77; /* jle: less or equal (signed <=) */

loc_003B7678: ;
    ebx = 0x864EC8;
    ebp = 0x10;

loc_003B7682: ;
    if (CMP_NE(MEM32(0x84A19C), edi)) goto loc_003B768F; /* jne: not equal / not zero */

loc_003B768A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B768F: ;
    esi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    esi++;
    edx++;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x7FA494) = esi;
    MEM32(0x7FA4B4) = edx;
    esi = eax;
    if (CMP_EQ(eax, edi)) goto loc_003B7708; /* je: equal / zero */

loc_003B76B4: ;
    if (CMP_B(MEM32(eax + 0x80), 0x140)) goto loc_003B7708; /* jb: below (unsigned <) */

loc_003B76C0: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(ecx, edi)) goto loc_003B76D7; /* je: equal / zero */

loc_003B76CE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_003B76D2: ;
    esp = esp + 8;
    goto loc_003B76F4;

loc_003B76D7: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));

loc_003B76E4: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_003B76E4; /* ja: above (unsigned >) */

loc_003B76EF: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_003B76F4: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B76FF: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, edi)) goto loc_003B7757; /* jne: not equal / not zero */

loc_003B7708: ;
    eax = MEM32(0x84A184);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(ecx, edi)) goto loc_003B7726; /* je: equal / zero */

loc_003B771D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_003B7721: ;
    esp = esp + 8;
    goto loc_003B7743;

loc_003B7726: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));

loc_003B7733: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_003B7733; /* ja: above (unsigned >) */

loc_003B773E: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_003B7743: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B774E: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, edi)) goto loc_003B77A8; /* je: equal / zero */

loc_003B7757: ;
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
    MEM8(esi + 0x34) = 1;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003B779A: ;
    ecx = MEM32(ebx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B77A8: ;
    eax = MEM32(esp + 0x10);
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebx = ebx + 0xA50;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_003B7682; /* jl: less (signed <) */

loc_003B77C6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

loc_003B77CE: ;
    ebx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA50);
    eax = eax + 0x864EC8;
    ebp = eax;
    ebx = ebx + 0x7270;
    MEM32(esp + 0x10) = 0x70;
    /* nop */

loc_003B77F0: ;
    if (CMP_NE(MEM8(ebx + -1232), 2)) goto loc_003B784F; /* jne: not equal / not zero */

loc_003B77F9: ;
    esi = MEM32(ebx);
    if (TEST_Z(esi, esi)) goto loc_003B784F; /* je: equal / zero */

loc_003B77FF: ;
    SET_LO16(edi, MEM16(esi + 0x4E));
    if (CMP_NE(LO16(edi), 0xFFFFFFFFu)) goto loc_003B7816; /* jne: not equal / not zero */

loc_003B7809: ;
    SET_LO16(eax, MEM16(ebp + 0x9D8));
    MEM16(esi + 0x4E) = LO16(eax);
    goto loc_003B784F;

loc_003B7816: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296370(); /* call 0x00296370 */

loc_003B7820: ;
    if (TEST_Z(eax, eax)) goto loc_003B7844; /* je: equal / zero */

loc_003B7824: ;
    eax = eax - 0x864EC8;
    ecx = eax;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    SET_LO8(ecx, MEM8(esp + eax + 0x24));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003B784F; /* jne: not equal / not zero */

loc_003B7844: ;
    SET_LO16(ecx, MEM16(ebp + 0x9D8));
    MEM16(esi + 0x4E) = LO16(ecx);

loc_003B784F: ;
    eax = MEM32(esp + 0x10);
    ebx = ebx + 0x6D0;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_003B77F0; /* jne: not equal / not zero */

loc_003B7860: ;
    eax = MEM32(0x84A5F8);
    eax = eax + 0x7438;
    edi = 0x1C;
    esi = 0x34;
    edx = edx | 0xFFFFFFFFu;

loc_003B7877: ;
    if (CMP_NE(MEM8(eax + -1688), 2)) goto loc_003B78BC; /* jne: not equal / not zero */

loc_003B7880: ;
    ecx = MEM32(eax + -1744);
    if (CMP_EQ(ecx, 0xA8)) goto loc_003B78AE; /* je: equal / zero */

loc_003B788E: ;
    if (CMP_EQ(ecx, 0xA9)) goto loc_003B78AE; /* je: equal / zero */

loc_003B7896: ;
    if (CMP_EQ(ecx, 0x118)) goto loc_003B78AE; /* je: equal / zero */

loc_003B789E: ;
    if (CMP_EQ(ecx, 0x117)) goto loc_003B78AE; /* je: equal / zero */

loc_003B78A6: ;
    if (CMP_NE(MEM32(eax + -1748), esi)) goto loc_003B78BC; /* jne: not equal / not zero */

loc_003B78AE: ;
    ecx = MEM32(eax + -456);
    if (TEST_Z(ecx, ecx)) goto loc_003B78BC; /* je: equal / zero */

loc_003B78B8: ;
    MEM16(ecx + 0x4E) = LO16(edx);

loc_003B78BC: ;
    if (CMP_NE(MEM8(eax + 0x38), 2)) goto loc_003B78F7; /* jne: not equal / not zero */

loc_003B78C2: ;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, 0xA8)) goto loc_003B78E9; /* je: equal / zero */

loc_003B78CC: ;
    if (CMP_EQ(ecx, 0xA9)) goto loc_003B78E9; /* je: equal / zero */

loc_003B78D4: ;
    if (CMP_EQ(ecx, 0x118)) goto loc_003B78E9; /* je: equal / zero */

loc_003B78DC: ;
    if (CMP_EQ(ecx, 0x117)) goto loc_003B78E9; /* je: equal / zero */

loc_003B78E4: ;
    if (CMP_NE(MEM32(eax + -4), esi)) goto loc_003B78F7; /* jne: not equal / not zero */

loc_003B78E9: ;
    ecx = MEM32(eax + 0x508);
    if (TEST_Z(ecx, ecx)) goto loc_003B78F7; /* je: equal / zero */

loc_003B78F3: ;
    MEM16(ecx + 0x4E) = LO16(edx);

loc_003B78F7: ;
    if (CMP_NE(MEM8(eax + 0x708), 2)) goto loc_003B793C; /* jne: not equal / not zero */

loc_003B7900: ;
    ecx = MEM32(eax + 0x6D0);
    if (CMP_EQ(ecx, 0xA8)) goto loc_003B792E; /* je: equal / zero */

loc_003B790E: ;
    if (CMP_EQ(ecx, 0xA9)) goto loc_003B792E; /* je: equal / zero */

loc_003B7916: ;
    if (CMP_EQ(ecx, 0x118)) goto loc_003B792E; /* je: equal / zero */

loc_003B791E: ;
    if (CMP_EQ(ecx, 0x117)) goto loc_003B792E; /* je: equal / zero */

loc_003B7926: ;
    if (CMP_NE(MEM32(eax + 0x6CC), esi)) goto loc_003B793C; /* jne: not equal / not zero */

loc_003B792E: ;
    ecx = MEM32(eax + 0xBD8);
    if (TEST_Z(ecx, ecx)) goto loc_003B793C; /* je: equal / zero */

loc_003B7938: ;
    MEM16(ecx + 0x4E) = LO16(edx);

loc_003B793C: ;
    if (CMP_NE(MEM8(eax + 0xDD8), 2)) goto loc_003B7981; /* jne: not equal / not zero */

loc_003B7945: ;
    ecx = MEM32(eax + 0xDA0);
    if (CMP_EQ(ecx, 0xA8)) goto loc_003B7973; /* je: equal / zero */

loc_003B7953: ;
    if (CMP_EQ(ecx, 0xA9)) goto loc_003B7973; /* je: equal / zero */

loc_003B795B: ;
    if (CMP_EQ(ecx, 0x118)) goto loc_003B7973; /* je: equal / zero */

loc_003B7963: ;
    if (CMP_EQ(ecx, 0x117)) goto loc_003B7973; /* je: equal / zero */

loc_003B796B: ;
    if (CMP_NE(MEM32(eax + 0xD9C), esi)) goto loc_003B7981; /* jne: not equal / not zero */

loc_003B7973: ;
    ecx = MEM32(eax + 0x12A8);
    if (TEST_Z(ecx, ecx)) goto loc_003B7981; /* je: equal / zero */

loc_003B797D: ;
    MEM16(ecx + 0x4E) = LO16(edx);

loc_003B7981: ;
    eax = eax + 0x1B40;
    edi--;
    if ((edi != 0)) goto loc_003B7877; /* jne: not equal / not zero */

loc_003B798D: ;
    PUSH32(esp, 0); sub_00397C70(); /* call 0x00397C70 */

loc_003B7992: ;
    MEM32(esp + 0x1C) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x10) = eax;
    ebp = 0x8658A0;

loc_003B79A5: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esp + edx + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B7ABB; /* je: equal / zero */

loc_003B79B5: ;
    PUSH32(esp, 0); sub_00061AB0(); /* call 0x00061AB0 */

loc_003B79BA: ;
    MEM32(esp + 0x3C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp);
    ebx = 0x10;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x14) = ebx;
    goto loc_003B79E0;

    /* nop */

loc_003B79E0: ;
    edx = MEM32(0x84A5F8);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + edx;
    if (CMP_NE(MEM8(eax + 0xA0), 2)) goto loc_003B7A3B; /* jne: not equal / not zero */

loc_003B79FA: ;
    eax = MEM32(eax + 0x570);
    if (TEST_Z(eax, eax)) goto loc_003B7A3B; /* je: equal / zero */

loc_003B7A04: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x4E);
    if (CMP_NE(eax, MEM32(esp + 0x34))) goto loc_003B7A3B; /* jne: not equal / not zero */

loc_003B7A0E: ;
    ecx = MEM32(esp + 0x3C);
    esi = MEM32(ecx);
    eax = MEM32(esi + 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061B50(); /* call 0x00061B50 */

loc_003B7A23: ;
    ecx = 1;
    edx = esp + 0x38;
    edi = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_003B7A33: ;
    MEM32(esi + 4) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ecx) = edi;

loc_003B7A3B: ;
    ebx++;
    (void)0; /* cmp ebx, 0x80 - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(ebx, 0x80)) goto loc_003B79E0; /* jl: less (signed <) */

loc_003B7A48: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    ecx = MEM32(esi + 4);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00397E10(); /* call 0x00397E10 */

loc_003B7A5D: ;
    ecx = 1;
    edx = esp + 0x18;
    edi = eax;
    PUSH32(esp, 0); sub_00140E80(); /* call 0x00140E80 */

loc_003B7A6D: ;
    MEM32(esi + 4) = edi;
    edx = MEM32(edi + 4);
    MEM32(edx) = edi;
    edi = esp + 0x38;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_003B7A7E: ;
    esi = MEM32(esp + 0x3C);
    if (TEST_Z(esi, esi)) goto loc_003B7AB3; /* je: equal / zero */

loc_003B7A86: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003B7A8C: ;
    if (TEST_NZ(eax, eax)) goto loc_003B7AB3; /* jne: not equal / not zero */

loc_003B7A90: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_003B7AB0: ;
    esp = esp + 4;

loc_003B7AB3: ;
    MEM32(esp + 0x3C) = 0;

loc_003B7ABB: ;
    edx = MEM32(esp + 0x10);
    edx++;
    ebp = ebp + 0xA50;
    (void)0; /* cmp ebp, 0x86F350 - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(ebp, 0x86F350)) goto loc_003B79A5; /* jl: less (signed <) */

loc_003B7AD6: ;
    if (CMP_BE(MEM32(esp + 0x20), 1)) goto loc_003B7BD2; /* jbe: below or equal (unsigned <=) */

loc_003B7AE1: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003979A0(); /* call 0x003979A0 */

loc_003B7AEB: ;
    eax = MEM32(esp + 0x1C);
    ebp = MEM32(eax);
    esi = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(esi + 0x14);
    ebp = ebp + 8;
    esi = esi + 8;
    ecx++;
    if (CMP_GE(ecx, eax)) goto loc_003B7BD2; /* jge: greater or equal (signed >=) */

loc_003B7B09: ;
    /* nop */

loc_003B7B10: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx);
    ebx = MEM32(eax + 8);
    eax = edx;
    edi = MEM32(eax);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(edi, eax)) goto loc_003B7B61; /* je: equal / zero */

loc_003B7B24: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    MEM32(ecx) = edx;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    PUSH32(esp, edi);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003B7B39: ;
    if (TEST_NZ(eax, eax)) goto loc_003B7B5E; /* jne: not equal / not zero */

loc_003B7B3D: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_003B7B5B: ;
    esp = esp + 4;

loc_003B7B5E: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;

loc_003B7B61: ;
    edx = MEM32(ebp + 8);
    esi = MEM32(edx);
    ecx = MEM32(esi + 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00061B50(); /* call 0x00061B50 */

loc_003B7B75: ;
    ecx = 1;
    edx = ebp + 4;
    edi = eax;
    PUSH32(esp, 0); sub_000632D0(); /* call 0x000632D0 */

loc_003B7B84: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    eax = MEM32(0x84A5F8);
    MEM32(esi + 4) = edi;
    edx = MEM32(edi + 4);
    MEM32(edx) = edi;
    ebx = MEM32(ebx + eax + 0x570);
    if (TEST_Z(ebx, ebx)) goto loc_003B7BAA; /* je: equal / zero */

loc_003B7BA2: ;
    SET_LO16(ecx, MEM16(ebp));
    MEM16(ebx + 0x4E) = LO16(ecx);

loc_003B7BAA: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003979A0(); /* call 0x003979A0 */

loc_003B7BB4: ;
    eax = MEM32(esp + 0x1C);
    ebp = MEM32(eax);
    esi = MEM32(eax + 4);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(esi + 0x14);
    ebp = ebp + 8;
    esi = esi + 8;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_003B7B10; /* jl: less (signed <) */

loc_003B7BD2: ;
    SET_LO8(eax, MEM8(0x864EC1));
    edi = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_003B7E38; /* jle: less or equal (signed <=) */

loc_003B7BE5: ;
    ebx = 0x864EC8;
    /* nop */

loc_003B7BF0: ;
    if (CMP_NE(MEM32(0x84A19C), edi)) goto loc_003B7BFD; /* jne: not equal / not zero */

loc_003B7BF8: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B7BFD: ;
    esi = MEM32(0x7FA494);
    edx = MEM32(0x7FA4B4);
    eax = MEM32(0x84A190);
    esi++;
    edx++;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x7FA494) = esi;
    MEM32(0x7FA4B4) = edx;
    esi = eax;
    if (CMP_EQ(eax, edi)) goto loc_003B7C7B; /* je: equal / zero */

loc_003B7C22: ;
    if (CMP_B(MEM32(eax + 0x80), 0x140)) goto loc_003B7C7B; /* jb: below (unsigned <) */

loc_003B7C2E: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x24);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0x10) = 0x10;
    if (CMP_EQ(ecx, edi)) goto loc_003B7C4A; /* je: equal / zero */

loc_003B7C40: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_003B7C45: ;
    esp = esp + 8;
    goto loc_003B7C67;

loc_003B7C4A: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));

loc_003B7C57: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_003B7C57; /* ja: above (unsigned >) */

loc_003B7C62: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_003B7C67: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B7C72: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, edi)) goto loc_003B7CD8; /* jne: not equal / not zero */

loc_003B7C7B: ;
    eax = MEM32(0x84A184);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x24);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x10) = 0x10;
    if (CMP_EQ(ecx, edi)) goto loc_003B7C9E; /* je: equal / zero */

loc_003B7C94: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_003B7C99: ;
    esp = esp + 8;
    goto loc_003B7CC0;

loc_003B7C9E: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    edx = eax + 0x76;
    MEM8(edx) = 0;
    SET_LO8(eax, MEM8(edx));
    goto loc_003B7CB0;

    /* nop */

loc_003B7CB0: ;
    SET_LO16(ecx, LO16(ecx) >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_A(LO16(ecx), 1)) goto loc_003B7CB0; /* ja: above (unsigned >) */

loc_003B7CBB: ;
    MEM8(edx) = LO8(eax);
    MEM8(esi + 0x75) = LO8(eax);

loc_003B7CC0: ;
    PUSH32(esp, 0x140);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B7CCB: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, edi)) goto loc_003B7E1A; /* je: equal / zero */

loc_003B7CD8: ;
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
    MEM8(esi + 0x34) = 1;
    MEM32(esi + 0x38) = edi;
    if (CMP_NE(MEM8(ebx + 0x9DA), 1)) goto loc_003B7E00; /* jne: not equal / not zero */

loc_003B7D1C: ;
    eax = MEM32(0x84A5F8);
    eax = eax + 0x7270;
    edx = 0x1C;
    goto loc_003B7D30;

    /* nop */

loc_003B7D30: ;
    if (CMP_NE(MEM8(eax + -1232), 2)) goto loc_003B7D5E; /* jne: not equal / not zero */

loc_003B7D39: ;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, edi)) goto loc_003B7D5E; /* je: equal / zero */

loc_003B7D3F: ;
    SET_LO16(ecx, MEM16(ecx + 0x4E));
    if (CMP_NE(LO16(ecx), MEM16(ebx + 0x9D8))) goto loc_003B7D5E; /* jne: not equal / not zero */

loc_003B7D4C: ;
    ecx = MEM32(esi + 0x38);
    SET_LO16(ebp, MEM16(eax + -1220));
    MEM16(esi + ecx * 2 + 0x3C) = LO16(ebp);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + 1;

loc_003B7D5E: ;
    if (CMP_NE(MEM8(eax + 0x200), 2)) goto loc_003B7D90; /* jne: not equal / not zero */

loc_003B7D67: ;
    ecx = MEM32(eax + 0x6D0);
    if (CMP_EQ(ecx, edi)) goto loc_003B7D90; /* je: equal / zero */

loc_003B7D71: ;
    SET_LO16(ecx, MEM16(ecx + 0x4E));
    if (CMP_NE(LO16(ecx), MEM16(ebx + 0x9D8))) goto loc_003B7D90; /* jne: not equal / not zero */

loc_003B7D7E: ;
    ecx = MEM32(esi + 0x38);
    SET_LO16(ebp, MEM16(eax + 0x20C));
    MEM16(esi + ecx * 2 + 0x3C) = LO16(ebp);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + 1;

loc_003B7D90: ;
    if (CMP_NE(MEM8(eax + 0x8D0), 2)) goto loc_003B7DC2; /* jne: not equal / not zero */

loc_003B7D99: ;
    ecx = MEM32(eax + 0xDA0);
    if (CMP_EQ(ecx, edi)) goto loc_003B7DC2; /* je: equal / zero */

loc_003B7DA3: ;
    SET_LO16(ecx, MEM16(ecx + 0x4E));
    if (CMP_NE(LO16(ecx), MEM16(ebx + 0x9D8))) goto loc_003B7DC2; /* jne: not equal / not zero */

loc_003B7DB0: ;
    ecx = MEM32(esi + 0x38);
    SET_LO16(ebp, MEM16(eax + 0x8DC));
    MEM16(esi + ecx * 2 + 0x3C) = LO16(ebp);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + 1;

loc_003B7DC2: ;
    if (CMP_NE(MEM8(eax + 0xFA0), 2)) goto loc_003B7DF4; /* jne: not equal / not zero */

loc_003B7DCB: ;
    ecx = MEM32(eax + 0x1470);
    if (CMP_EQ(ecx, edi)) goto loc_003B7DF4; /* je: equal / zero */

loc_003B7DD5: ;
    SET_LO16(ecx, MEM16(ecx + 0x4E));
    if (CMP_NE(LO16(ecx), MEM16(ebx + 0x9D8))) goto loc_003B7DF4; /* jne: not equal / not zero */

loc_003B7DE2: ;
    ecx = MEM32(esi + 0x38);
    SET_LO16(ebp, MEM16(eax + 0xFAC));
    MEM16(esi + ecx * 2 + 0x3C) = LO16(ebp);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + 1;

loc_003B7DF4: ;
    eax = eax + 0x1B40;
    edx--;
    if ((edx != 0)) goto loc_003B7D30; /* jne: not equal / not zero */

loc_003B7E00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003B7E0C: ;
    eax = MEM32(ebx + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B7E1A: ;
    eax = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    ebx = ebx + 0xA50;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, ecx)) goto loc_003B7BF0; /* jl: less (signed <) */

loc_003B7E38: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00397D10(); /* call 0x00397D10 */

loc_003B7E42: ;
    esi = MEM32(esp + 0x1C);
    if (CMP_EQ(esi, edi)) goto loc_003B7E77; /* je: equal / zero */

loc_003B7E4A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003B7E50: ;
    if (TEST_NZ(eax, eax)) goto loc_003B7E77; /* jne: not equal / not zero */

loc_003B7E54: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_003B7E74: ;
    esp = esp + 4;

loc_003B7E77: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003B7E7A: ;
    POP32(esp, edi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003B7E80
 * Original: 0x003B7E80 - 0x003B800C (396 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7E80: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5FC);
    edi = edi + 0x11;
    edx = eax + 0x7270;
    esi = eax + 0x6DA0;
    MEM32(esp + 0xC) = 0x1C;
    ebp = ebp | 0xFFFFFFFFu;
    /* nop */

loc_003B7EB0: ;
    SET_LO8(eax, MEM8(edi + -1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B7EF3; /* je: equal / zero */

loc_003B7EB7: ;
    if (CMP_NE(MEM8(esi), 2)) goto loc_003B7EF3; /* jne: not equal / not zero */

loc_003B7EBC: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_003B7EF3; /* je: equal / zero */

loc_003B7EC2: ;
    SET_LO16(ecx, MEM16(ebx + 0x9D8));
    if (CMP_EQ(MEM16(eax + 0x4E), LO16(ecx))) goto loc_003B7ED4; /* je: equal / zero */

loc_003B7ECF: ;
    if (CMP_NE(LO16(ecx), LO16(ebp))) goto loc_003B7ED8; /* jne: not equal / not zero */

loc_003B7ED4: ;
    MEM16(eax + 0x4E) = LO16(ebp);

loc_003B7ED8: ;
    ecx = MEM32(ebx + 0x9DC);
    if (CMP_EQ(ecx, ebp)) goto loc_003B7EF3; /* je: equal / zero */

loc_003B7EE2: ;
    (void)0; /* cmp ecx, MEM32(eax + 0x38) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, MEM32(eax + 0x38))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B7EF3; /* je: equal / zero */

loc_003B7EEC: ;
    MEM32(eax + 0x38) = 0xFFFFFFFEu;

loc_003B7EF3: ;
    SET_LO8(eax, MEM8(edi));
    esi = esi + 0x6D0;
    edx = edx + 0x6D0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B7F41; /* je: equal / zero */

loc_003B7F05: ;
    if (CMP_NE(MEM8(esi), 2)) goto loc_003B7F41; /* jne: not equal / not zero */

loc_003B7F0A: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_003B7F41; /* je: equal / zero */

loc_003B7F10: ;
    SET_LO16(ecx, MEM16(ebx + 0x9D8));
    if (CMP_EQ(MEM16(eax + 0x4E), LO16(ecx))) goto loc_003B7F22; /* je: equal / zero */

loc_003B7F1D: ;
    if (CMP_NE(LO16(ecx), LO16(ebp))) goto loc_003B7F26; /* jne: not equal / not zero */

loc_003B7F22: ;
    MEM16(eax + 0x4E) = LO16(ebp);

loc_003B7F26: ;
    ecx = MEM32(ebx + 0x9DC);
    if (CMP_EQ(ecx, ebp)) goto loc_003B7F41; /* je: equal / zero */

loc_003B7F30: ;
    (void)0; /* cmp ecx, MEM32(eax + 0x38) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, MEM32(eax + 0x38))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B7F41; /* je: equal / zero */

loc_003B7F3A: ;
    MEM32(eax + 0x38) = 0xFFFFFFFEu;

loc_003B7F41: ;
    SET_LO8(eax, MEM8(edi + 1));
    esi = esi + 0x6D0;
    edx = edx + 0x6D0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B7F90; /* je: equal / zero */

loc_003B7F54: ;
    if (CMP_NE(MEM8(esi), 2)) goto loc_003B7F90; /* jne: not equal / not zero */

loc_003B7F59: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_003B7F90; /* je: equal / zero */

loc_003B7F5F: ;
    SET_LO16(ecx, MEM16(ebx + 0x9D8));
    if (CMP_EQ(MEM16(eax + 0x4E), LO16(ecx))) goto loc_003B7F71; /* je: equal / zero */

loc_003B7F6C: ;
    if (CMP_NE(LO16(ecx), LO16(ebp))) goto loc_003B7F75; /* jne: not equal / not zero */

loc_003B7F71: ;
    MEM16(eax + 0x4E) = LO16(ebp);

loc_003B7F75: ;
    ecx = MEM32(ebx + 0x9DC);
    if (CMP_EQ(ecx, ebp)) goto loc_003B7F90; /* je: equal / zero */

loc_003B7F7F: ;
    (void)0; /* cmp ecx, MEM32(eax + 0x38) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, MEM32(eax + 0x38))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B7F90; /* je: equal / zero */

loc_003B7F89: ;
    MEM32(eax + 0x38) = 0xFFFFFFFEu;

loc_003B7F90: ;
    SET_LO8(eax, MEM8(edi + 2));
    esi = esi + 0x6D0;
    edx = edx + 0x6D0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B7FDF; /* je: equal / zero */

loc_003B7FA3: ;
    if (CMP_NE(MEM8(esi), 2)) goto loc_003B7FDF; /* jne: not equal / not zero */

loc_003B7FA8: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_003B7FDF; /* je: equal / zero */

loc_003B7FAE: ;
    SET_LO16(ecx, MEM16(ebx + 0x9D8));
    if (CMP_EQ(MEM16(eax + 0x4E), LO16(ecx))) goto loc_003B7FC0; /* je: equal / zero */

loc_003B7FBB: ;
    if (CMP_NE(LO16(ecx), LO16(ebp))) goto loc_003B7FC4; /* jne: not equal / not zero */

loc_003B7FC0: ;
    MEM16(eax + 0x4E) = LO16(ebp);

loc_003B7FC4: ;
    ecx = MEM32(ebx + 0x9DC);
    if (CMP_EQ(ecx, ebp)) goto loc_003B7FDF; /* je: equal / zero */

loc_003B7FCE: ;
    (void)0; /* cmp ecx, MEM32(eax + 0x38) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(ecx, MEM32(eax + 0x38))) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003B7FDF; /* je: equal / zero */

loc_003B7FD8: ;
    MEM32(eax + 0x38) = 0xFFFFFFFEu;

loc_003B7FDF: ;
    eax = MEM32(esp + 0xC);
    esi = esi + 0x6D0;
    edx = edx + 0x6D0;
    edi = edi + 4;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_003B7EB0; /* jne: not equal / not zero */

loc_003B7FFD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003B7500(); /* call 0x003B7500 */

loc_003B8004: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B8010
 * Original: 0x003B8010 - 0x003B8063 (83 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B8010: ;
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, 0xA8)) goto loc_003B8060; /* je: equal / zero */

loc_003B801A: ;
    if (CMP_EQ(eax, 0xA9)) goto loc_003B8060; /* je: equal / zero */

loc_003B8021: ;
    if (CMP_EQ(eax, 0x118)) goto loc_003B8060; /* je: equal / zero */

loc_003B8028: ;
    if (CMP_EQ(eax, 0x117)) goto loc_003B8060; /* je: equal / zero */

loc_003B802F: ;
    eax = eax + 0xFFFFFF3Cu;
    if (CMP_A(eax, 0x71)) goto loc_003B8047; /* ja: above (unsigned >) */

loc_003B8039: ;
    eax = ZX8(MEM8(eax + 0x3B8070));
    { uint32_t _jt = MEM32(eax * 4 + 0x3B8068); /* switch: 2 entries, 2 targets */
    if (_jt == 0x003B8047u) goto loc_003B8047;
    if (_jt == 0x003B8060u) goto loc_003B8060;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003B8047: ;
    eax = MEM32(ecx + 0x64);
    eax = eax + 0xFFFFFFD3u;
    if (CMP_A(eax, 0x13)) { sub_003B8063(); return; } /* ja: above (unsigned >) */

loc_003B8052: ;
    ecx = ZX8(MEM8(eax + 0x3B80EC));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x3B80E4)); return; /* indirect tail jmp */

loc_003B8060: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003B82B0
 * Original: 0x003B82B0 - 0x003B835F (175 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B82B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B82B0: ;
    eax = MEM32(esi + 0x50);
    if (TEST_Z(eax, eax)) goto loc_003B835E; /* je: equal / zero */

loc_003B82BB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003B82C2: ;
    if (TEST_Z(eax, eax)) { sub_003B835F(); return; } /* je: equal / zero */

loc_003B82CA: ;
    ecx = MEM32(esi + 0x50);
    SET_LO8(eax, MEM8(ecx + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B835F(); return; } /* je: equal / zero */

loc_003B82DB: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, edi);
    edi = edx + eax + -1744;
    eax = edi;
    PUSH32(esp, 0); sub_002F67D0(); /* call 0x002F67D0 */

loc_003B82F8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8332; /* je: equal / zero */

loc_003B82FC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 0x60) - sets EFLAGS */
    if ((xmm0 < MEMF(esi + 0x60))) goto loc_003B831E; /* jb: below (unsigned <) */

loc_003B8305: ;
    xmm0 = MEMF(0x648D10); /* movss */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esi + 0x60) = xmm0; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x3C), _icall_esp); /* indirect call */
    }

loc_003B8319: ;
    MEM8(esi + 0x64) = LO8(eax);
    goto loc_003B8336;

loc_003B831E: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(esi + 0x60) = xmm0; /* movss */
    goto loc_003B8336;

loc_003B8332: ;
    MEM8(esi + 0x64) = 0;

loc_003B8336: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B835D; /* je: equal / zero */

loc_003B833D: ;
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0x444);
    eax = MEM32(ecx + 0x284);
    if (TEST_Z(eax, eax)) goto loc_003B835D; /* je: equal / zero */

loc_003B8353: ;
    edx = MEM32(eax + 0x50);
    MEM8(edx + 0x90) = 1;

loc_003B835D: ;
    POP32(esp, edi);

loc_003B835E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B8370
 * Original: 0x003B8370 - 0x003B837F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8370(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B8370: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(esi, esi)) { sub_003B837F(); return; } /* jne: not equal / not zero */

loc_003B8379: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B83E0
 * Original: 0x003B83E0 - 0x003B83EF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B83E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B83E0: ;
    eax = MEM32(esp + 4);
    if (CMP_EQ(eax, MEM32(ecx + 0x30))) goto loc_003B83EC; /* je: equal / zero */

loc_003B83E9: ;
    MEM32(ecx + 0x30) = eax;

loc_003B83EC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B83F0
 * Original: 0x003B83F0 - 0x003B8414 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B83F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B83F0: ;
    eax = MEM32(esi + 0x50);
    if (TEST_Z(eax, eax)) goto loc_003B8413; /* je: equal / zero */

loc_003B83F7: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xAC);
    PUSH32(esp, 0); sub_002624A0(); /* call 0x002624A0 */

loc_003B8403: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_003B8410: ;
    esp = esp + 0xC;

loc_003B8413: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B8420
 * Original: 0x003B8420 - 0x003B8448 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8420(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B8420: ;
    eax = MEM32(eax + 0x50);
    if (TEST_Z(eax, eax)) { sub_003B8448(); return; } /* je: equal / zero */

loc_003B8427: ;
    SET_LO8(eax, MEM8(eax + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B8448(); return; } /* je: equal / zero */

loc_003B8431: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + edx + -1744;
    esp += 4; return; /* ret */

}

/**
 * sub_003B8450
 * Original: 0x003B8450 - 0x003B84FC (172 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8450(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B8450: ;
    esp = esp - 0x3C;
    if (TEST_Z(ebx, ebx)) { sub_003B84FC(); return; } /* je: equal / zero */

loc_003B845B: ;
    eax = MEM32(ebx + 0x568);
    if (TEST_Z(eax, eax)) { sub_003B84FC(); return; } /* je: equal / zero */

loc_003B8469: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) { sub_003B84FC(); return; } /* je: equal / zero */

loc_003B8477: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    esi = 0; /* xor self */
    PUSH32(esp, 3);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_0032DA10(); /* call 0x0032DA10 */

loc_003B8493: ;
    edx = MEM32(esp + 0x10);
    esp = esp + 0xC;
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_003B84B7; /* jle: less or equal (signed <=) */

loc_003B84A0: ;
    eax = MEM32(esp + ecx * 4 + 8);
    if (TEST_Z(eax, eax)) goto loc_003B84B2; /* je: equal / zero */

loc_003B84A8: ;
    if (CMP_NE(MEM32(eax + 4), 0xA)) goto loc_003B84B2; /* jne: not equal / not zero */

loc_003B84AE: ;
    esi = ZX8(MEM8(eax + 0xC));

loc_003B84B2: ;
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_003B84A0; /* jl: less (signed <) */

loc_003B84B7: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003B84BC: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_003B84F5; /* jne: not equal / not zero */

loc_003B84C5: ;
    eax = MEM32(ebx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003B84F5; /* je: equal / zero */

loc_003B84CF: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_003B84D4: ;
    edx = 0x63B1B4;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_003B84DE: ;
    if (TEST_Z(eax, eax)) goto loc_003B84F5; /* je: equal / zero */

loc_003B84E2: ;
    ecx = MEM32(0x84A6A4);
    eax = MEM32(ecx + 0xD4);
    eax = eax + esi;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

loc_003B84F5: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_003B8510
 * Original: 0x003B8510 - 0x003B853D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8510(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B8510: ;
    ecx = MEM32(0x84B498);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_003B852E; /* jle: less or equal (signed <=) */

loc_003B851C: ;
    /* nop */

loc_003B8520: ;
    if (CMP_EQ(MEM32(eax * 4 + 0x84B398), edx)) goto loc_003B853C; /* je: equal / zero */

loc_003B8529: ;
    eax++;
    if (CMP_L(eax, ecx)) goto loc_003B8520; /* jl: less (signed <) */

loc_003B852E: ;
    MEM32(ecx * 4 + 0x84B398) = edx;
    ecx++;
    MEM32(0x84B498) = ecx;

loc_003B853C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B8540
 * Original: 0x003B8540 - 0x003B857C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8540(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B8540: ;
    edx = MEM32(0x84B498);
    eax = 0x84B398;
    ecx = edx * 4 + 0x84B394;
    PUSH32(esp, edi);

loc_003B8553: ;
    if (CMP_NE(MEM32(eax), esi)) goto loc_003B856A; /* jne: not equal / not zero */

loc_003B8557: ;
    if (CMP_LE(edx, 1)) goto loc_003B8560; /* jle: less or equal (signed <=) */

loc_003B855C: ;
    edi = MEM32(ecx);
    MEM32(eax) = edi;

loc_003B8560: ;
    MEM32(ecx) = 0;
    edx--;
    ecx = ecx - 4;

loc_003B856A: ;
    eax = eax + 4;
    if (CMP_L(eax, 0x84B498)) goto loc_003B8553; /* jl: less (signed <) */

loc_003B8574: ;
    MEM32(0x84B498) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B8580
 * Original: 0x003B8580 - 0x003B8637 (183 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8580(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B8580: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_003B862D; /* jne: not equal / not zero */

loc_003B8593: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003B85A1; /* jne: not equal / not zero */

loc_003B859C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B85A1: ;
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
    if (TEST_Z(esi, esi)) goto loc_003B85F1; /* je: equal / zero */

loc_003B85C9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x90)) goto loc_003B85F1; /* jb: below (unsigned <) */

loc_003B85D5: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B85DF: ;
    PUSH32(esp, 0x90);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B85EA: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003B8615; /* jne: not equal / not zero */

loc_003B85F1: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B8603: ;
    PUSH32(esp, 0x90);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B860E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B861F; /* je: equal / zero */

loc_003B8615: ;
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0); sub_003B8640(); /* call 0x003B8640 */

loc_003B861D: ;
    goto loc_003B8621;

loc_003B861F: ;
    eax = 0; /* xor self */

loc_003B8621: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0x570) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_003B8635; /* je: equal / zero */

loc_003B862D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_003B8635: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B8640
 * Original: 0x003B8640 - 0x003B86FA (186 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B8640: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edi = esi;
    PUSH32(esp, 0); sub_003B5BC0(); /* call 0x003B5BC0 */

loc_003B864F: ;
    eax = MEM32(esi + 0x30);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = 0x641BA8;
    MEM32(esi + 4) = 4;
    if (CMP_EQ(eax, ebx)) goto loc_003B8668; /* je: equal / zero */

loc_003B8665: ;
    MEM32(esi + 0x30) = ebx;

loc_003B8668: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esi + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1D);
    MEM32(esi + 0x88) = eax;
    MEMF(esi + 0x74) = xmm0; /* movss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    MEMF(esi + 0x6C) = xmm0; /* movss */
    MEM8(esi + 0x80) = LO8(ebx);
    MEM32(esi + 0x84) = 1;
    MEMF(esi + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0032D650(); /* call 0x0032D650 */

loc_003B86A1: ;
    esp = esp + 0xC;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM32(esi + 0x68) = eax;
    if (CMP_EQ(ebp, ebx)) goto loc_003B86EC; /* je: equal / zero */

loc_003B86AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x641CB4);
    edi = ebp;
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003B86B8: ;
    eax = MEM32(ebp + 0x5D4);
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_003B86EC; /* je: equal / zero */

loc_003B86C5: ;
    ebp = MEM32(ebp + 0x4B0);
    if (CMP_EQ(ebp, ebx)) goto loc_003B86EC; /* je: equal / zero */

loc_003B86CF: ;
    ecx = MEM32(ebp + 0x24);
    if (CMP_EQ(ecx, ebx)) goto loc_003B86EC; /* je: equal / zero */

loc_003B86D6: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, ebx);
    ebx = 0x641CB4;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003B86E7: ;
    esp = esp + 4;
    ebx = 0; /* xor self */

loc_003B86EC: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(esi + 0x8C) = LO8(ebx);
    eax = esi;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B8700
 * Original: 0x003B8700 - 0x003B8749 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8700(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B8700: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x68;
    MEM32(esi) = 0x641BA8;
    if (TEST_Z(eax, eax)) goto loc_003B8719; /* je: equal / zero */

loc_003B8714: ;
    PUSH32(esp, 0); sub_0032D790(); /* call 0x0032D790 */

loc_003B8719: ;
    if (CMP_NE(MEM32(esi + 0x30), 2)) goto loc_003B8724; /* jne: not equal / not zero */

loc_003B871F: ;
    PUSH32(esp, 0); sub_003B8540(); /* call 0x003B8540 */

loc_003B8724: ;
    (void)0; /* test MEM8(esp + 0xC), 1 - flags set for next jcc */
    MEM32(esi) = 0x64218C;
    if (TEST_Z(MEM8(esp + 0xC), 1)) goto loc_003B8742; /* je: equal / zero */

loc_003B8731: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003B873F: ;
    esp = esp + 4;

loc_003B8742: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B8750
 * Original: 0x003B8750 - 0x003B886B (283 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B8750: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(ebx, ebx)) goto loc_003B8869; /* je: equal / zero */

loc_003B875D: ;
    if (TEST_Z(ebp, ebp)) goto loc_003B8869; /* je: equal / zero */

loc_003B8765: ;
    if (CMP_NE(MEM32(ebx + 0x64), 0x3F)) goto loc_003B8869; /* jne: not equal / not zero */

loc_003B876F: ;
    if (CMP_NE(MEM32(ebp + 0x64), 1)) goto loc_003B8869; /* jne: not equal / not zero */

loc_003B8779: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003B8787; /* jne: not equal / not zero */

loc_003B8782: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B8787: ;
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
    if (TEST_Z(esi, esi)) goto loc_003B87D7; /* je: equal / zero */

loc_003B87AF: ;
    if (CMP_B(MEM32(esi + 0x80), 0x90)) goto loc_003B87D7; /* jb: below (unsigned <) */

loc_003B87BB: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B87C5: ;
    PUSH32(esp, 0x90);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B87D0: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003B87FB; /* jne: not equal / not zero */

loc_003B87D7: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B87E9: ;
    PUSH32(esp, 0x90);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B87F4: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B8867; /* je: equal / zero */

loc_003B87FB: ;
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0); sub_003B8640(); /* call 0x003B8640 */

loc_003B8803: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_003B8867; /* je: equal / zero */

loc_003B8809: ;
    edi = MEM32(ebx + 0x23C);
    eax = ebp;
    MEM32(ebx + 0x570) = esi;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003B881C: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x84) = eax;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8867; /* je: equal / zero */

loc_003B882E: ;
    ecx = ZX8(MEM8(ebx + 0x251));
    edx = ZX16(MEM16(ebp + 0x60));
    ecx--;
    if (CMP_EQ(ecx, edx)) goto loc_003B8847; /* je: equal / zero */

loc_003B883E: ;
    eax = ebp;
    edx = ebx;
    PUSH32(esp, 0); sub_002EA150(); /* call 0x002EA150 */

loc_003B8847: ;
    xmm1 = MEMF(0x648D80); /* movss */
    ecx = ebx;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_002F7480(); /* call 0x002F7480 */

loc_003B8859: ;
    MEM8(ebx + 0x209) = MEM8(ebx + 0x209) | 0x40;
    MEM8(ebx + 0xB4) = 0;

loc_003B8867: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003B8869: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B8870
 * Original: 0x003B8870 - 0x003B89D2 (354 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B8870: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_003B89CD; /* je: equal / zero */

loc_003B8880: ;
    eax = MEM32(edi + 0x23C);
    if (TEST_Z(eax, eax)) goto loc_003B89CD; /* je: equal / zero */

loc_003B888E: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B8893: ;
    if (TEST_Z(eax, eax)) goto loc_003B89CD; /* je: equal / zero */

loc_003B889B: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B88A7: ;
    esi = eax;
    PUSH32(esp, 0); sub_00289400(); /* call 0x00289400 */

loc_003B88AE: ;
    if (TEST_Z(eax, eax)) goto loc_003B89CC; /* je: equal / zero */

loc_003B88B6: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B88C2: ;
    ebx = eax;
    PUSH32(esp, 0); sub_003B8450(); /* call 0x003B8450 */

loc_003B88C9: ;
    if (CMP_GE(MEM32(ebp + 0x84), eax)) goto loc_003B89CB; /* jge: greater or equal (signed >=) */

loc_003B88D5: ;
    eax = ZX8(MEM8(edi + 0x251));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = eax + ecx + -1744;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B899F; /* je: equal / zero */

loc_003B88FC: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B899F; /* jne: not equal / not zero */

loc_003B8909: ;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_003B8913: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_003B89CB; /* je: equal / zero */

loc_003B891D: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_003B8924: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003B8934; /* je: equal / zero */

loc_003B892B: ;
    PUSH32(esp, 0); sub_00328470(); /* call 0x00328470 */

loc_003B8930: ;
    esi = eax;
    goto loc_003B8936;

loc_003B8934: ;
    esi = 0; /* xor self */

loc_003B8936: ;
    MEM32(esi + 0x38) = 6;
    MEM16(esi + 0x34) = 0;
    edx = ZX8(MEM8(edi + 0x251));
    edx--;
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x40) = 0x74045;
    MEM8(esi + 0x44) = 0;
    eax = (int32_t)MEMF(edi + 0x78); /* cvttss2si */
    MEM32(esi + 0x48) = eax;
    ecx = (int32_t)MEMF(edi + 0x7C); /* cvttss2si */
    MEM32(esi + 0x4C) = ecx;
    edx = (int32_t)MEMF(edi + 0x80); /* cvttss2si */
    MEM32(esi + 0x50) = edx;
    eax = MEM32(ebp + 0x84);
    PUSH32(esp, 0xFFFFFFFFu);
    eax++;
    PUSH32(esp, 0x1F4);
    MEM32(esi + 0x54) = eax;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003B898A: ;
    eax = MEM32(ebx + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B8998: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003B899F: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    edi = edi + 0x78;
    PUSH32(esp, edi);
    eax = 0x74045;
    PUSH32(esp, 0); sub_003B6E10(); /* call 0x003B6E10 */

loc_003B89B6: ;
    ecx = MEM32(ebp + 0x84);
    ecx++;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0); sub_003B8750(); /* call 0x003B8750 */

loc_003B89C8: ;
    esp = esp + 0x24;

loc_003B89CB: ;
    POP32(esp, ebx);

loc_003B89CC: ;
    POP32(esp, esi);

loc_003B89CD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B89E0
 * Original: 0x003B89E0 - 0x003B8A48 (104 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B89E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B89E0: ;
    if (TEST_Z(edi, edi)) goto loc_003B8A47; /* je: equal / zero */

loc_003B89E4: ;
    eax = MEM32(edi + 0x23C);
    if (TEST_Z(eax, eax)) goto loc_003B8A47; /* je: equal / zero */

loc_003B89EE: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B89F3: ;
    if (TEST_Z(eax, eax)) goto loc_003B8A47; /* je: equal / zero */

loc_003B89F7: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    ecx = esi;
    MEM8(esi + 0x2C) = 0;
    MEMF(esi + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B8A12: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B8A1D: ;
    ebx = eax;
    PUSH32(esp, 0); sub_003B8450(); /* call 0x003B8450 */

loc_003B8A24: ;
    (void)0; /* cmp MEM32(esi + 0x84), eax - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_GE(MEM32(esi + 0x84), eax)) goto loc_003B8A40; /* jge: greater or equal (signed >=) */

loc_003B8A2D: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003B8870(); /* call 0x003B8870 */

loc_003B8A35: ;
    ecx = MEM32(esi + 0x50);
    MEM8(ecx + 0x251) = 0;
    esp += 4; return; /* ret */

loc_003B8A40: ;
    MEM8(esi + 0x8C) = 1;

loc_003B8A47: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B8A50
 * Original: 0x003B8A50 - 0x003B91A3 (1875 bytes, 502 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B8A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B8A50: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x863D08);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_Z(eax, eax)) goto loc_003B919E; /* je: equal / zero */

loc_003B8A61: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x200);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x468);
    eax = eax & 0xFFFFFFFBu;
    edi = edi | 8;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x110); /* movss */
    eax = eax | 0x80;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEM8(ebp + 0x1B7) = 0x19;
    MEM8(ebp + 0x250) = 0;
    MEM32(ebp + 0x468) = edi;
    ecx = edi;
    MEM32(ebp + 0x200) = eax;
    if ((xmm0 <= MEMF(0x648D14))) goto loc_003B8ABD; /* jbe: below or equal (unsigned <=) */

loc_003B8AB4: ;
    eax = eax | 4;
    MEM32(ebp + 0x200) = eax;

loc_003B8ABD: ;
    (void)0; /* test LO8(ecx), 0x40 - flags set for next jcc */
    MEM8(ebp + 0x20C) = 0xA;
    MEM8(ebp + 0x444) = 0x3A;
    MEM32(ebp + 0x204) = 0xA7;
    MEM8(ebp + 0x17A) = 1;
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_003B8B10; /* je: equal / zero */

loc_003B8AE1: ;
    eax = MEM32(0x84A5F8);
    ecx = ecx & 0xFFFFFFBFu;
    MEM32(ebp + 0x468) = ecx;
    ecx = MEM32(eax + 0x78);
    MEM32(ebp + 0x84) = ecx;
    edx = MEM32(eax + 0x80);
    PUSH32(esp, 0x870ED4);
    ecx = ebp;
    MEM32(ebp + 0x8C) = edx;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_003B8B10: ;
    SET_LO8(eax, MEM8(ebx + 0x80));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8B67; /* je: equal / zero */

loc_003B8B1B: ;
    MEM8(ebx + 0x80) = 0;
    eax = MEM32(ebp + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B8B2D: ;
    esi = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B8B38: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = ebp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM8(ebx + 0x42) = 1;
    PUSH32(esp, esi);
    MEM16(ebp + 0x3AE) = 0;
    PUSH32(esp, 0); sub_0019BE40(); /* call 0x0019BE40 */

loc_003B8B5D: ;
    esp = esp + 0x20;
    MEM8(ebp + 0xB4) = 0;

loc_003B8B67: ;
    eax = MEM32(ebp + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B8B72: ;
    if (TEST_Z(eax, eax)) goto loc_003B8B8C; /* je: equal / zero */

loc_003B8B76: ;
    if (CMP_EQ(MEM32(eax + 0xA4), 0x50B)) goto loc_003B8B94; /* je: equal / zero */

loc_003B8B82: ;
    SET_LO8(ecx, MEM8(eax + 0x17D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003B8B94; /* jne: not equal / not zero */

loc_003B8B8C: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x24), _icall_esp); /* indirect call */
    }

loc_003B8B94: ;
    SET_LO8(eax, MEM8(ebp + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8CF7; /* je: equal / zero */

loc_003B8BA2: ;
    ecx = MEM32(0x84A5F8);
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = eax + ecx + -1744;
    MEM8(ebp + 0x444) = 0x3A;
    eax = ZX16(MEM16(esi + 0x60));
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_L(eax, edx)) goto loc_003B8BD7; /* jl: less (signed <) */

loc_003B8BD2: ;
    eax = 0x14;

loc_003B8BD7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    edi = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x40), _icall_esp); /* indirect call */
    }

loc_003B8BEC: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8C1F; /* je: equal / zero */

loc_003B8BF0: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x3C), _icall_esp); /* indirect call */
    }

loc_003B8BF7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8CFE; /* je: equal / zero */

loc_003B8BFF: ;
    edi = ebp;
    esi = ebx;
    PUSH32(esp, 0); sub_003B89E0(); /* call 0x003B89E0 */

loc_003B8C08: ;
    eax = ZX16(MEM16(ebp + 0x60));
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00306280(); /* call 0x00306280 */

loc_003B8C17: ;
    esp = esp + 8;
    goto loc_003B8CFE;

loc_003B8C1F: ;
    eax = MEM32(edi + 0x178);
    if (TEST_Z(eax, eax)) goto loc_003B8CFE; /* je: equal / zero */

loc_003B8C2D: ;
    SET_LO8(eax, MEM8(ebp + 0xB4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8CFE; /* je: equal / zero */

loc_003B8C3B: ;
    SET_LO8(eax, MEM8(0x862D90));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B8CFE; /* jne: not equal / not zero */

loc_003B8C48: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x3C), _icall_esp); /* indirect call */
    }

loc_003B8C4F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8CFE; /* je: equal / zero */

loc_003B8C57: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F933333);
    PUSH32(esp, esi);
    edx = 0x50B;
    MEM32(edi + 0x178) = 0;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_003B8C7C: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(esi + 0xA4);
    MEM32(eax + 0x474) = ecx;
    edx = MEM32(esi + 0x568);
    eax = MEM32(esi + 0xA4);
    MEM32(edx + 0x480) = eax;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(esi + 0xA4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ecx + 0x484) = edx;
    eax = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3E2AAAAB);
    PUSH32(esp, 0x306360);
    PUSH32(esp, 0); sub_0030F240(); /* call 0x0030F240 */

loc_003B8CD0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esi + 0x17D) = 0xFF;
    MEM8(esi + 0x180) = 0xFF;
    MEMF(esi + 0x110) = xmm0; /* movss */
    esp = esp + 0x38;
    edi = ebp;
    esi = ebx;
    PUSH32(esp, 0); sub_003B89E0(); /* call 0x003B89E0 */

loc_003B8CF5: ;
    goto loc_003B8CFE;

loc_003B8CF7: ;
    MEM8(ebp + 0x444) = 0x42;

loc_003B8CFE: ;
    if (CMP_NE(MEM32(ebx + 0x30), 4)) goto loc_003B8D28; /* jne: not equal / not zero */

loc_003B8D04: ;
    xmm0 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(ebx + 0x7C); /* addss */
    /* comiss xmm0, MEMF(0x648CE4) - sets EFLAGS */
    MEMF(ebx + 0x7C) = xmm0; /* movss */
    if ((xmm0 < MEMF(0x648CE4))) goto loc_003B8D28; /* jb: below (unsigned <) */

loc_003B8D1F: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B8D28: ;
    SET_LO8(eax, MEM8(ebx + 0x42));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8D36; /* je: equal / zero */

loc_003B8D2F: ;
    MEM8(ebp + 0xB4) = 0;

loc_003B8D36: ;
    if (CMP_EQ(MEM32(ebx + 0x30), 2)) goto loc_003B8E19; /* je: equal / zero */

loc_003B8D40: ;
    SET_LO8(eax, MEM8(ebp + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8DE1; /* je: equal / zero */

loc_003B8D4E: ;
    PUSH32(esp, ebp);
    MEM16(ebp + 0x21A) = 0xBB8;
    PUSH32(esp, 0); sub_002E6400(); /* call 0x002E6400 */

loc_003B8D5D: ;
    eax = ZX8(MEM8(ebp + 0x251));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(edx, MEM8(eax + ecx + -1220));
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003B8D90; /* je: equal / zero */

loc_003B8D87: ;
    if (TEST_Z(MEM8(0x7FDD3C), 4)) goto loc_003B8DA8; /* je: equal / zero */

loc_003B8D90: ;
    if (CMP_BE(MEM16(ebp + 0x428), 8)) goto loc_003B8DA8; /* jbe: below or equal (unsigned <=) */

loc_003B8D9A: ;
    xmm0 = MEMF(0x64938C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_003B8DA8: ;
    (void)0; /* cmp MEM32(ebx + 0x30), 1 - flags set for next jcc */
    MEM8(ebx + 0x2C) = 1;
    if (CMP_EQ(MEM32(ebx + 0x30), 1)) goto loc_003B8DC1; /* je: equal / zero */

loc_003B8DB2: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B8DBB: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_003B8DC1: ;
    eax = ZX8(MEM8(ebp + 0x251));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = ZX8(MEM8(eax + ecx + -1477));
    MEM32(ebx + 0x34) = edx;
    goto loc_003B8E1F;

loc_003B8DE1: ;
    xmm0 = MEMF(ebp + 0x110); /* movss */
    xmm0 = xmm0 * MEMF(0x6490A0); /* mulss */
    MEMF(ebp + 0x110) = xmm0; /* movss */
    if (CMP_NE(MEM8(ebx + 0x2C), 1)) goto loc_003B8E19; /* jne: not equal / not zero */

loc_003B8DFF: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = ebx;
    MEM8(ebx + 0x2C) = 0;
    MEMF(ebx + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B8E19: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_003B8E1F: ;
    xmm0 = xmm0 - MEMF(ebp + 0x1C0); /* subss */
    SET_LO16(ecx, MEM16(ebp + 0x174));
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x1C0); /* addss */
    SET_LO16(ecx, LO16(ecx) + 0x4000);
    edx = SX16(LO16(ecx));
    MEMF(ebp + 0x1C0) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    eax = ebp;
    MEMF(ebp + 0x114) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002E9550(); /* call 0x002E9550 */

loc_003B8E69: ;
    eax = MEM32(ebx + 0x30);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(eax, eax)) goto loc_003B8E91; /* jne: not equal / not zero */

loc_003B8E73: ;
    xmm0 = MEMF(ebx + 0x74); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003B8E91; /* jp: parity */

loc_003B8E81: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002EA190(); /* call 0x002EA190 */

loc_003B8E89: ;
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    goto loc_003B8EAD;

loc_003B8E91: ;
    xmm0 = MEMF(ebx + 0x74); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebx + 0x74) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_003B8EAD; /* jbe: below or equal (unsigned <=) */

loc_003B8EA8: ;
    MEMF(ebx + 0x74) = xmm1; /* movss */

loc_003B8EAD: ;
    ecx = MEM32(ebx + 0x30);
    if (CMP_NE(ecx, 2)) goto loc_003B8EDF; /* jne: not equal / not zero */

loc_003B8EB5: ;
    xmm0 = MEMF(ebx + 0x70); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003B8EDA; /* jnp: not parity */

loc_003B8EC3: ;
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebx + 0x70) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_003B8EDA; /* jbe: below or equal (unsigned <=) */

loc_003B8ED5: ;
    MEMF(ebx + 0x70) = xmm1; /* movss */

loc_003B8EDA: ;
    if (CMP_EQ(ecx, 2)) goto loc_003B8EE4; /* je: equal / zero */

loc_003B8EDF: ;
    if (CMP_NE(ecx, 3)) goto loc_003B8F3C; /* jne: not equal / not zero */

loc_003B8EE4: ;
    xmm0 = MEMF(ebx + 0x70); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003B8F3C; /* jp: parity */

loc_003B8EF2: ;
    PUSH32(esp, 0);
    eax = ebp;
    PUSH32(esp, 0); sub_002F73A0(); /* call 0x002F73A0 */

loc_003B8EFB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002F7410(); /* call 0x002F7410 */

loc_003B8F02: ;
    eax = MEM32(ebx + 0x30);
    esp = esp + 8;
    if (CMP_NE(eax, 3)) goto loc_003B8F28; /* jne: not equal / not zero */

loc_003B8F0D: ;
    PUSH32(esp, 0x641CB4);
    eax = ebp;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_003B8F19: ;
    PUSH32(esp, 0x641CA0);
    eax = ebp;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_003B8F25: ;
    esp = esp + 8;

loc_003B8F28: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003B8F2F: ;
    if (TEST_Z(eax, eax)) goto loc_003B8F3C; /* je: equal / zero */

loc_003B8F33: ;
    eax = ebp;
    edi = ebx;
    PUSH32(esp, 0); sub_003B92D0(); /* call 0x003B92D0 */

loc_003B8F3C: ;
    if (CMP_NE(MEM8(ebx + 0x42), 1)) goto loc_003B90B3; /* jne: not equal / not zero */

loc_003B8F46: ;
    (void)0; /* cmp MEM32(ebx + 0x30), 2 - flags set for next jcc */
    ecx = ebx;
    if (CMP_NE(MEM32(ebx + 0x30), 2)) goto loc_003B8F57; /* jne: not equal / not zero */

loc_003B8F4E: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B8F55: ;
    goto loc_003B8F5E;

loc_003B8F57: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B8F5E: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(ebx + 0x78) = xmm0; /* movss */
    MEM8(ebp + 0xB4) = 0;
    MEM8(ebx + 0x42) = 2;
    SET_LO8(eax, MEM8(ebp + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B8FA3; /* je: equal / zero */

loc_003B8F80: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, ecx);
    ecx = edx + eax + -1744;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00306280(); /* call 0x00306280 */

loc_003B8FA0: ;
    esp = esp + 8;

loc_003B8FA3: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_003B8FAA: ;
    if (TEST_Z(eax, eax)) goto loc_003B90B3; /* je: equal / zero */

loc_003B8FB2: ;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_003B90B3; /* jle: less or equal (signed <=) */

loc_003B8FC7: ;
    MEM32(esp + 0x18) = 0x864EC8;
    /* nop */

loc_003B8FD0: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_003B908D; /* je: equal / zero */

loc_003B8FDC: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003B8FEA; /* jne: not equal / not zero */

loc_003B8FE5: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B8FEA: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_003B9038; /* je: equal / zero */

loc_003B9010: ;
    if (CMP_B(MEM32(esi + 0x80), 0x88)) goto loc_003B9038; /* jb: below (unsigned <) */

loc_003B901C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B9026: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B9031: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003B905C; /* jne: not equal / not zero */

loc_003B9038: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B904A: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B9055: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B9065; /* je: equal / zero */

loc_003B905C: ;
    PUSH32(esp, 0); sub_00257800(); /* call 0x00257800 */

loc_003B9061: ;
    esi = eax;
    goto loc_003B9067;

loc_003B9065: ;
    esi = 0; /* xor self */

loc_003B9067: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x68), _icall_esp); /* indirect call */
    }

loc_003B906F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003B907B: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B908D: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    edx = edx + 0xA50;
    MEM32(esp + 0x18) = edx;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_003B8FD0; /* jl: less (signed <) */

loc_003B90B3: ;
    esi = ebx;
    PUSH32(esp, 0); sub_003B96D0(); /* call 0x003B96D0 */

loc_003B90BA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B919B; /* jne: not equal / not zero */

loc_003B90C2: ;
    eax = MEM32(ebp + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003B9132; /* je: equal / zero */

loc_003B90CC: ;
    if (CMP_GE(eax, 0x205)) goto loc_003B9132; /* jge: greater or equal (signed >=) */

loc_003B90D3: ;
    ecx = MEM32(ebp + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_003B9132; /* je: equal / zero */

loc_003B90DA: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_003B9132; /* je: equal / zero */

loc_003B90E1: ;
    edx = MEM32(edx);
    if (TEST_Z(edx, edx)) goto loc_003B9132; /* je: equal / zero */

loc_003B90E7: ;
    if (CMP_NE(edx, 0x3E7)) goto loc_003B90F6; /* jne: not equal / not zero */

loc_003B90EF: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003B90F4: ;
    goto loc_003B9132;

loc_003B90F6: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0)) goto loc_003B9108; /* ja: above (unsigned >) */

loc_003B9101: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003B9106: ;
    goto loc_003B9132;

loc_003B9108: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = ebp;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_003B912F: ;
    esp = esp + 0x20;

loc_003B9132: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000532D0(); /* call 0x000532D0 */

loc_003B913D: ;
    esp = esp + 8;
    esi = ebx;
    PUSH32(esp, 0); sub_003B82B0(); /* call 0x003B82B0 */

loc_003B9147: ;
    edi = ebp;
    PUSH32(esp, 0); sub_003B6040(); /* call 0x003B6040 */

loc_003B914E: ;
    esi = ebp;
    eax = ebx;
    PUSH32(esp, 0); sub_003B9390(); /* call 0x003B9390 */

loc_003B9157: ;
    ecx = MEM32(ebx + 0x88);
    eax = MEM32(ebx + 0x30);
    if (CMP_EQ(ecx, eax)) goto loc_003B919B; /* je: equal / zero */

loc_003B9164: ;
    if (CMP_NE(eax, 2)) goto loc_003B9186; /* jne: not equal / not zero */

loc_003B9169: ;
    edx = ebx;
    PUSH32(esp, 0); sub_003B8510(); /* call 0x003B8510 */

loc_003B9170: ;
    PUSH32(esp, 0); sub_003B9670(); /* call 0x003B9670 */

loc_003B9175: ;
    ecx = MEM32(ebx + 0x30);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ebx + 0x88) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_003B9186: ;
    if (CMP_NE(ecx, 2)) goto loc_003B9192; /* jne: not equal / not zero */

loc_003B918B: ;
    esi = ebx;
    PUSH32(esp, 0); sub_003B8540(); /* call 0x003B8540 */

loc_003B9192: ;
    ecx = MEM32(ebx + 0x30);
    MEM32(ebx + 0x88) = ecx;

loc_003B919B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);

loc_003B919E: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B91B0
 * Original: 0x003B91B0 - 0x003B9253 (163 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B91B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B91B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003B5EA0(); /* call 0x003B5EA0 */

loc_003B91C2: ;
    ecx = MEM32(ebx + 0x78);
    MEM32(edi + 0x84) = ecx;
    SET_LO8(eax, MEM8(ebx + 0x40));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B924E; /* jne: not equal / not zero */

loc_003B91D2: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x4A);
    ecx = MEM32(edi + 0x30);
    if (CMP_EQ(ecx, edx)) goto loc_003B924E; /* je: equal / zero */

loc_003B91DD: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4A);
    if (CMP_A(eax, 5)) goto loc_003B9246; /* ja: above (unsigned >) */

loc_003B91E6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3B9254); /* switch: 6 entries, 5 targets */
    if (_jt == 0x003B91EDu) goto loc_003B91ED;
    if (_jt == 0x003B9209u) goto loc_003B9209;
    if (_jt == 0x003B9223u) goto loc_003B9223;
    if (_jt == 0x003B923Bu) goto loc_003B923B;
    if (_jt == 0x003B9246u) goto loc_003B9246;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003B91ED: ;
    if (CMP_NE(ecx, 4)) goto loc_003B9246; /* jne: not equal / not zero */

loc_003B91F2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(edi);
    eax = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(edi + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B9204: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003B9209: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(edi + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B921E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003B9223: ;
    edx = MEM32(edi);
    SET_LO8(ecx, 1);
    MEM8(edi + 0x42) = LO8(ecx);
    MEM8(edi + 0x80) = LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B9236: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003B923B: ;
    MEM8(edi + 0x42) = 1;
    MEM8(edi + 0x80) = 0;

loc_003B9246: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003B924E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B92A0
 * Original: 0x003B92A0 - 0x003B92BB (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B92A0(void)
{
    float xmm0;

loc_003B92A0: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM8(ecx + 0x2C) = 0;
    MEMF(ecx + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B92B8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B92C0
 * Original: 0x003B92C0 - 0x003B92CC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B92C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B92C0: ;
    edx = MEM32(ecx + 0x30);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(edx, 4)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003B92D0
 * Original: 0x003B92D0 - 0x003B937C (172 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B92D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B92D0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(edi + 0x42));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B9377; /* jne: not equal / not zero */

loc_003B92E1: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B92EC: ;
    if (TEST_Z(eax, eax)) goto loc_003B9377; /* je: equal / zero */

loc_003B92F4: ;
    if (CMP_NE(MEM32(edi + 0x30), 3)) goto loc_003B9321; /* jne: not equal / not zero */

loc_003B92FA: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x6C); /* addss */
    /* comiss xmm0, MEMF(0x648D80) - sets EFLAGS */
    MEMF(edi + 0x6C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D80))) goto loc_003B9377; /* jbe: below or equal (unsigned <=) */

loc_003B9315: ;
    MEM8(edi + 0x80) = 1;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003B9321: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B932C: ;
    eax = MEM32(eax + 0x238);
    eax = MEM32(eax);
    xmm0 = MEMF(0x648F08); /* movss */
    esi = esi + 0x78;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    MEM32(esp + 8) = edx;
    PUSH32(esp, eax);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esi + 8);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = 0x870ED4;
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003B9740(); /* call 0x003B9740 */

loc_003B9369: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_003B9377; /* je: equal / zero */

loc_003B936E: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B9377: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003B9380
 * Original: 0x003B9380 - 0x003B938E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9380(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B9380: ;
    SET_LO8(eax, MEM8(ecx + 0x8C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B9390
 * Original: 0x003B9390 - 0x003B9623 (659 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B9390: ;
    esp = esp - 0x2D0;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x84B391));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_003B961A; /* je: equal / zero */

loc_003B93A9: ;
    eax = MEM32(0x8470DC);
    PUSH32(esp, ebp);
    ebp = esi + 0x78;
    eax = eax + 0x330;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003B93BE: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(0x648EB8); /* subss */
    xmm1 = xmm1 * MEMF(0x648EB4); /* mulss */
    xmm1 = xmm1 * MEMF(0x648EB0); /* mulss */
    xmm0 = MEMF(0x75ECB0); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D3C); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003B9402; /* ja: above (unsigned >) */

loc_003B93F5: ;
    xmm1 = MEMF(0x648EAC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003B9405; /* jbe: below or equal (unsigned <=) */

loc_003B9402: ;
    xmm0 = xmm1; /* movaps */

loc_003B9405: ;
    if (CMP_LE(MEM32(0x84A144), ebx)) goto loc_003B9415; /* jle: less or equal (signed <=) */

loc_003B940D: ;
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */

loc_003B9415: ;
    xmm1 = MEMF(0x648E68); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003B9425; /* jbe: below or equal (unsigned <=) */

loc_003B9422: ;
    xmm0 = xmm1; /* movaps */

loc_003B9425: ;
    eax = ZX16(MEM16(esi + 0x60));
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_003B9435; /* jns: not sign (positive) */

loc_003B9430: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_003B9435: ;
    if (CMP_A(eax, 3)) goto loc_003B9484; /* ja: above (unsigned >) */

loc_003B943A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3B9624); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003B9441u) goto loc_003B9441;
    if (_jt == 0x003B944Au) goto loc_003B944A;
    if (_jt == 0x003B9459u) goto loc_003B9459;
    if (_jt == 0x003B946Du) goto loc_003B946D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003B9441: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x77616F) = LO8(eax);
    goto loc_003B9475;

loc_003B944A: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(ebx);
    MEM8(0x77616F) = LO8(eax);
    goto loc_003B947A;

loc_003B9459: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(ebx);
    MEM8(0x77616F) = LO8(eax);
    goto loc_003B947F;

loc_003B946D: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x77616F) = LO8(ebx);

loc_003B9475: ;
    MEM8(0x776171) = LO8(eax);

loc_003B947A: ;
    MEM8(0x776170) = LO8(eax);

loc_003B947F: ;
    MEM8(0x77616E) = LO8(eax);

loc_003B9484: ;
    (void)0; /* cmp MEM8(0x7819D5), LO8(ebx) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_003B94A4; /* je: equal / zero */

loc_003B9494: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_003B94A4: ;
    SET_LO8(eax, MEM8(esi + 0x251));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_003B94BF; /* je: equal / zero */

loc_003B94AE: ;
    ecx = ZX8(LO8(eax));
    ecx--;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641C90);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    goto loc_003B94CE;

loc_003B94BF: ;
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, eax);
    PUSH32(esp, 0x641C84);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);

loc_003B94CE: ;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_003B94D3: ;
    eax = MEM32(esi + 0x23C);
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B94E1: ;
    if (CMP_NE(eax, ebx)) goto loc_003B94EA; /* jne: not equal / not zero */

loc_003B94E5: ;
    ebx = ebx | 0xFFFFFFFFu;
    goto loc_003B94EE;

loc_003B94EA: ;
    ebx = ZX16(MEM16(eax + 0x60));

loc_003B94EE: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_003B94F5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x641C74;
    if (TEST_NZ(eax, eax)) goto loc_003B9503; /* jne: not equal / not zero */

loc_003B94FE: ;
    ecx = 0x641C64;

loc_003B9503: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xAC);
    eax = MEM32(edi + 0x30);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x4E);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(eax * 4 + 0x74ED88);
    eax = MEM32(edi + 0x84);
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x641BF0);
    ecx = esp + 0x108;
    PUSH32(esp, 0xFA);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004704E6(); /* call 0x004704E6 */

loc_003B9541: ;
    esp = esp + 0x2C;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003B9619; /* je: equal / zero */

loc_003B954D: ;
    ecx = MEM32(esi + 0x80);
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, 0x46EA6000);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(ebp); /* movss */
    edi = esp + 0x20;
    ebx = esp + 0x24;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_003B9588: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_003B95AF; /* je: equal / zero */

loc_003B958F: ;
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    ecx = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    edx = esp + 0xE4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_003B95AC: ;
    esp = esp + 0xC;

loc_003B95AF: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B95EE; /* je: equal / zero */

loc_003B95DE: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_003B95EE: ;
    eax = 0x14;
    MEM16(0x776168) = LO16(eax);
    MEM16(0x776164) = LO16(eax);
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B960A: ;
    if (TEST_Z(eax, eax)) goto loc_003B9619; /* je: equal / zero */

loc_003B960E: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B9619: ;
    POP32(esp, ebp);

loc_003B961A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x2D0;
    esp += 4; return; /* ret */

}

/**
 * sub_003B9670
 * Original: 0x003B9670 - 0x003B96A8 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9670(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B9670: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    eax = MEM32(edx + 0x50);
    if (TEST_Z(eax, eax)) { sub_003B96A8(); return; } /* je: equal / zero */

loc_003B967F: ;
    edx = MEM32(eax + 0x564);
    if (TEST_Z(edx, edx)) { sub_003B96A8(); return; } /* je: equal / zero */

loc_003B9689: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = 0xB32;
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_003B96A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B96D0
 * Original: 0x003B96D0 - 0x003B973D (109 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B96D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B96D0: ;
    (void)0; /* cmp MEM8(esi + 0x42), 2 - flags set for next jcc */
    eax = MEM32(esi + 0x50);
    if (CMP_NE(MEM8(esi + 0x42), 2)) { sub_003B973D(); return; } /* jne: not equal / not zero */

loc_003B96D9: ;
    ecx = MEM32(eax + 0x468);
    ecx = ecx & 0xFFFFFFF7u;
    MEM8(eax + 0x234) = 0xFF;
    MEM32(eax + 0x468) = ecx;
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x649430); /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 0x78) - sets EFLAGS */
    if ((xmm0 < MEMF(esi + 0x78))) { sub_003B973D(); return; } /* jb: below (unsigned <) */

loc_003B9717: ;
    eax = MEM32(esi + 0x50);
    if (TEST_Z(eax, eax)) goto loc_003B973A; /* je: equal / zero */

loc_003B971E: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xAC);
    PUSH32(esp, 0); sub_002624A0(); /* call 0x002624A0 */

loc_003B972A: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_003B9737: ;
    esp = esp + 0xC;

loc_003B973A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003B9740
 * Original: 0x003B9740 - 0x003B974E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9740(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B9740: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) { sub_003B974E(); return; } /* jne: not equal / not zero */

loc_003B9747: ;
    eax = eax + 4;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B9790
 * Original: 0x003B9790 - 0x003B99C4 (564 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B9790: ;
    esp = esp - 0x454;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x46C);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_003B97B4; /* je: equal / zero */

loc_003B97AE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_003B97B4: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_003B97C1: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_003B98D1; /* jne: not equal / not zero */

loc_003B97D4: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_003B9998; /* jbe: below or equal (unsigned <=) */

loc_003B97DC: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;

loc_003B97F5: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x46C);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x468);
    eax = MEM32(eax);
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x38) = ecx;
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x3C); /* addss */
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0x44) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_003B98BC; /* jbe: below or equal (unsigned <=) */

loc_003B9894: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x64);
    if (CMP_EQ(eax, 1)) goto loc_003B98A3; /* je: equal / zero */

loc_003B989E: ;
    if (CMP_NE(eax, 0x35)) goto loc_003B98BC; /* jne: not equal / not zero */

loc_003B98A3: ;
    ecx = MEM32(ecx + 0x238);
    edx = MEM32(esp + 0x470);
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_003B98BC; /* je: equal / zero */

loc_003B98B4: ;
    MEM32(esp + 0x46C) = MEM32(esp + 0x46C) + 4;

loc_003B98BC: ;
    eax = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, eax)) goto loc_003B97F5; /* jl: less (signed <) */

loc_003B98CC: ;
    goto loc_003B9998;

loc_003B98D1: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_003B9998; /* jbe: below or equal (unsigned <=) */

loc_003B98D9: ;
    edx = esp + 0x58;
    ecx = esp + 0x20;
    eax = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    /* nop */

loc_003B98F0: ;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x468);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx);
    MEM32(esp + 0x28) = edx;
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x2C); /* addss */
    MEM32(esp + ebx * 4 + 0x64) = esi;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
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
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0x40) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_003B9988; /* jbe: below or equal (unsigned <=) */

loc_003B9987: ;
    ebx++;

loc_003B9988: ;
    edx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, edx)) goto loc_003B98F0; /* jl: less (signed <) */

loc_003B9998: ;
    edi = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(edi, edi)) goto loc_003B97C1; /* jne: not equal / not zero */

loc_003B99A5: ;
    eax = MEM32(esp + 0x46C);
    edx = MEM32(esp + 0x54);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x454;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003B99D0
 * Original: 0x003B99D0 - 0x003B9A86 (182 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B99D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B99D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_003B9A7C; /* jne: not equal / not zero */

loc_003B99E3: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003B99F1; /* jne: not equal / not zero */

loc_003B99EC: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B99F1: ;
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
    if (TEST_Z(esi, esi)) goto loc_003B9A41; /* je: equal / zero */

loc_003B9A19: ;
    if (CMP_B(MEM32(esi + 0x80), 0xB0)) goto loc_003B9A41; /* jb: below (unsigned <) */

loc_003B9A25: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B9A2F: ;
    PUSH32(esp, 0xB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B9A3A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003B9A65; /* jne: not equal / not zero */

loc_003B9A41: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B9A53: ;
    PUSH32(esp, 0xB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B9A5E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B9A6E; /* je: equal / zero */

loc_003B9A65: ;
    esi = ebx;
    PUSH32(esp, 0); sub_003B9A90(); /* call 0x003B9A90 */

loc_003B9A6C: ;
    goto loc_003B9A70;

loc_003B9A6E: ;
    eax = 0; /* xor self */

loc_003B9A70: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0x570) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_003B9A84; /* je: equal / zero */

loc_003B9A7C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_003B9A84: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B9A90
 * Original: 0x003B9A90 - 0x003B9B69 (217 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9A90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B9A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003B5BC0(); /* call 0x003B5BC0 */

loc_003B9A9A: ;
    eax = eax | 0xFFFFFFFFu;
    ebx = 0; /* xor self */
    MEM32(edi + 0x90) = eax;
    MEM32(edi + 0x94) = eax;
    MEM32(edi) = 0x641D70;
    MEM8(edi + 0xAD) = LO8(ebx);
    eax = MEM32(esi + 0x23C);
    MEM8(eax + 0x18) = LO8(ebx);
    (void)0; /* cmp MEM32(edi + 0x30), ebx - flags set for next jcc */
    MEM32(edi + 4) = 1;
    if (CMP_EQ(MEM32(edi + 0x30), ebx)) goto loc_003B9ACF; /* je: equal / zero */

loc_003B9ACC: ;
    MEM32(edi + 0x30) = ebx;

loc_003B9ACF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B);
    MEMF(edi + 0x74) = xmm0; /* movss */
    MEMF(edi + 0x78) = xmm0; /* movss */
    MEM32(edi + 0x7C) = ebx;
    MEM32(edi + 0x84) = ebx;
    MEM32(edi + 0x88) = ebx;
    MEM8(edi + 0x80) = LO8(ebx);
    MEM8(edi + 0x8C) = LO8(ebx);
    MEM8(edi + 0x8D) = LO8(ebx);
    PUSH32(esp, 0); sub_0032D650(); /* call 0x0032D650 */

loc_003B9B06: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x68) = eax;
    SET_LO16(ecx, ZX8(MEM8(eax + 0x12)));
    MEM16(esi + 0x3AE) = LO16(ecx);
    edx = MEM32(edi + 0x68);
    SET_LO16(eax, ZX8(MEM8(edx + 0x12)));
    MEM16(esi + 0x3B0) = LO16(eax);
    MEM8(edi + 0x8E) = LO8(ebx);
    MEM8(edi + 0x8F) = LO8(ebx);
    MEMF(edi + 0x98) = xmm0; /* movss */
    MEMF(edi + 0x9C) = xmm0; /* movss */
    MEMF(edi + 0xA0) = xmm0; /* movss */
    ecx = MEM32(edi + 0x7C);
    esp = esp + 0xC;
    MEM8(edi + 0xAC) = LO8(ebx);
    MEM8(edi + 0xA4) = 0xFF;
    MEM32(edi + 0xA8) = ecx;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B9B70
 * Original: 0x003B9B70 - 0x003B9BC8 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9B70(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B9B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x68;
    MEM32(esi) = 0x641D70;
    if (TEST_Z(eax, eax)) goto loc_003B9B89; /* je: equal / zero */

loc_003B9B84: ;
    PUSH32(esp, 0); sub_0032D790(); /* call 0x0032D790 */

loc_003B9B89: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x94);
    edi = esi + 0x90;
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_003B9BA3: ;
    (void)0; /* test MEM8(esp + 0xC), 1 - flags set for next jcc */
    MEM32(esi) = 0x64218C;
    if (TEST_Z(MEM8(esp + 0xC), 1)) goto loc_003B9BC1; /* je: equal / zero */

loc_003B9BB0: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_003B9BBE: ;
    esp = esp + 4;

loc_003B9BC1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B9BD0
 * Original: 0x003B9BD0 - 0x003B9BE9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003B9BD0: ;
    edx = 0; /* xor self */
    if (CMP_NE(ecx, edx)) { sub_003B9BE9(); return; } /* jne: not equal / not zero */

loc_003B9BD6: ;
    MEM32(eax + 0x84) = edx;
    MEM32(eax + 0x88) = edx;
    MEM8(eax + 0x80) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B9C10
 * Original: 0x003B9C10 - 0x003B9C84 (116 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B9C10: ;
    esp = esp - 8;
    eax = MEM32(ebx + 0x23C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B9C21: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebx + 0x570);
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    edi = 0; /* xor self */

loc_003B9C33: ;
    ecx = MEM32(0x84A5FC);
    if (CMP_NE(MEM8(ecx + ebp), 0x3D)) goto loc_003B9C6E; /* jne: not equal / not zero */

loc_003B9C3F: ;
    edx = MEM32(0x84A5F8);
    esi = edi + edx;
    if (CMP_EQ(esi, ebx)) goto loc_003B9C6E; /* je: equal / zero */

loc_003B9C4C: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B9C57: ;
    if (CMP_NE(eax, MEM32(esp + 0xC))) goto loc_003B9C6E; /* jne: not equal / not zero */

loc_003B9C5D: ;
    eax = MEM32(esi + 0x570);
    if (TEST_Z(eax, eax)) goto loc_003B9C6E; /* je: equal / zero */

loc_003B9C67: ;
    SET_LO8(ecx, MEM8(eax + 0x42));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_003B9C84(); return; } /* je: equal / zero */

loc_003B9C6E: ;
    edi = edi + 0x6D0;
    ebp++;
    if (CMP_L(edi, 0x36800)) goto loc_003B9C33; /* jl: less (signed <) */

loc_003B9C7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003B9CB0
 * Original: 0x003B9CB0 - 0x003B9DD0 (288 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B9CB0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (TEST_Z(ebx, ebx)) goto loc_003B9DCD; /* je: equal / zero */

loc_003B9CC0: ;
    if (TEST_Z(ebp, ebp)) goto loc_003B9DCD; /* je: equal / zero */

loc_003B9CC8: ;
    if (CMP_NE(MEM32(ebx + 0x64), 0x3D)) goto loc_003B9DCD; /* jne: not equal / not zero */

loc_003B9CD2: ;
    if (CMP_NE(MEM32(ebp + 0x64), 1)) goto loc_003B9DCD; /* jne: not equal / not zero */

loc_003B9CDC: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003B9CEA; /* jne: not equal / not zero */

loc_003B9CE5: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003B9CEA: ;
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
    if (TEST_Z(esi, esi)) goto loc_003B9D3A; /* je: equal / zero */

loc_003B9D12: ;
    if (CMP_B(MEM32(esi + 0x80), 0xB0)) goto loc_003B9D3A; /* jb: below (unsigned <) */

loc_003B9D1E: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B9D28: ;
    PUSH32(esp, 0xB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B9D33: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003B9D5E; /* jne: not equal / not zero */

loc_003B9D3A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003B9D4C: ;
    PUSH32(esp, 0xB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003B9D57: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003B9DCB; /* je: equal / zero */

loc_003B9D5E: ;
    esi = ebx;
    PUSH32(esp, 0); sub_003B9A90(); /* call 0x003B9A90 */

loc_003B9D65: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_003B9DCB; /* je: equal / zero */

loc_003B9D6B: ;
    edi = MEM32(ebx + 0x23C);
    eax = ebp;
    MEM32(ebx + 0x570) = esi;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003B9D7E: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esi + 0x7C) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003B9DC6; /* je: equal / zero */

loc_003B9D8D: ;
    eax = ZX8(MEM8(ebx + 0x251));
    ecx = ZX16(MEM16(ebp + 0x60));
    eax--;
    if (CMP_EQ(eax, ecx)) goto loc_003B9DA6; /* je: equal / zero */

loc_003B9D9D: ;
    eax = ebp;
    edx = ebx;
    PUSH32(esp, 0); sub_002EA150(); /* call 0x002EA150 */

loc_003B9DA6: ;
    xmm1 = MEMF(0x648D80); /* movss */
    ecx = ebx;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_002F7480(); /* call 0x002F7480 */

loc_003B9DB8: ;
    MEM8(ebx + 0x209) = MEM8(ebx + 0x209) | 0x40;
    MEM8(ebx + 0xB4) = 0;

loc_003B9DC6: ;
    PUSH32(esp, 0); sub_003B9C10(); /* call 0x003B9C10 */

loc_003B9DCB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003B9DCD: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B9DD0
 * Original: 0x003B9DD0 - 0x003B9ECB (251 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B9DD0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x23C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B9DDF: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003B9DE7: ;
    if (TEST_NZ(eax, eax)) goto loc_003B9EC6; /* jne: not equal / not zero */

loc_003B9DEF: ;
    ecx = ZX16(MEM16(esi + 0x60));

loc_003B9DF3: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    if (CMP_EQ(edx, ecx)) goto loc_003B9E09; /* je: equal / zero */

loc_003B9DFE: ;
    eax++;
    if (CMP_L(eax, 2)) goto loc_003B9DF3; /* jl: less (signed <) */

loc_003B9E04: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003B9E09: ;
    eax++;
    if ((eax == 0)) goto loc_003B9EC6; /* je: equal / zero */

loc_003B9E10: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x7C);
    if (TEST_NZ(ecx, ecx)) goto loc_003B9EC6; /* jne: not equal / not zero */

loc_003B9E1F: ;
    ecx = ZX8(MEM8(ebx + 0x251));
    SET_LO8(eax, MEM8(0x863D11));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(0x84A5F8);
    esi = ecx + edx + -1744;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003B9ECB(); return; } /* je: equal / zero */

loc_003B9E46: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003B9ECB(); return; } /* jne: not equal / not zero */

loc_003B9E4F: ;
    PUSH32(esp, ebp);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_003B9E5A: ;
    ebp = eax;
    if (TEST_Z(ebp, ebp)) goto loc_003B9EC5; /* je: equal / zero */

loc_003B9E60: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_003B9E68: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003B9E78; /* je: equal / zero */

loc_003B9E6F: ;
    PUSH32(esp, 0); sub_00328470(); /* call 0x00328470 */

loc_003B9E74: ;
    edi = eax;
    goto loc_003B9E7A;

loc_003B9E78: ;
    edi = 0; /* xor self */

loc_003B9E7A: ;
    MEM32(edi + 0x38) = 5;
    MEM16(edi + 0x34) = 0;
    eax = MEM32(ebx + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003B9E92: ;
    esi = eax;
    PUSH32(esp, 0); sub_00289400(); /* call 0x00289400 */

loc_003B9E99: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax--;
    PUSH32(esp, 0x1F4);
    esi = edi;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x40) = 0x7769A7C;
    MEM8(edi + 0x44) = 0;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003B9EB6: ;
    ecx = MEM32(ebp + 0x9DC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B9EC4: ;
    POP32(esp, edi);

loc_003B9EC5: ;
    POP32(esp, ebp);

loc_003B9EC6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B9F00
 * Original: 0x003B9F00 - 0x003B9F9D (157 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9F00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003B9F00: ;
    ecx = MEM32(0x84A5F8);
    xmm0 = MEMF(0x648D1C); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX8(MEM8(edi + 0x251));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = eax + ecx + -1624;
    ecx = MEM32(edx);
    eax = esi + 0x98;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(esi);
    PUSH32(esp, 2);
    ecx = esi;
    MEM8(esi + 0x2C) = 0;
    MEMF(esi + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003B9F4D: ;
    eax = MEM32(esi + 0x7C);
    if (TEST_NZ(eax, eax)) goto loc_003B9F63; /* jne: not equal / not zero */

loc_003B9F54: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_003B9DD0(); /* call 0x003B9DD0 */

loc_003B9F5C: ;
    MEM8(edi + 0x251) = 0;

loc_003B9F63: ;
    esi = MEM32(esi + 0x50);
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x40);
    if (TEST_Z(esi, esi)) { sub_003B9F9D(); return; } /* je: equal / zero */

loc_003B9F73: ;
    ecx = MEM32(esi + 0x564);
    if (TEST_Z(ecx, ecx)) { sub_003B9F9D(); return; } /* je: equal / zero */

loc_003B9F7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = 0xB32;
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_003B9F9B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B9FC0
 * Original: 0x003B9FC0 - 0x003BA92E (2414 bytes, 661 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B9FC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B9FC0: ;
    eax = MEM32(0x863D08);
    esp = esp - 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (TEST_Z(eax, eax)) goto loc_003BA927; /* je: equal / zero */

loc_003B9FD3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM8(edi + 0x209) = MEM8(edi + 0x209) | 0x80;
    if (CMP_NE(MEM32(ebp + 0x7C), 1)) goto loc_003B9FF8; /* jne: not equal / not zero */

loc_003B9FE7: ;
    SET_LO8(eax, MEM8(ebp + 0x8D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003B9FF8; /* jne: not equal / not zero */

loc_003B9FF1: ;
    ebx = edi;
    PUSH32(esp, 0); sub_003B9C10(); /* call 0x003B9C10 */

loc_003B9FF8: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BA003: ;
    if (TEST_Z(eax, eax)) goto loc_003BA017; /* je: equal / zero */

loc_003BA007: ;
    eax = MEM32(eax + 0x238);
    ecx = MEM32(edi + 0x238);
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_003BA017: ;
    eax = MEM32(edi + 0x200);
    xmm0 = MEMF(0x7FA21C); /* movss */
    ebx = MEM32(edi + 0x468);
    eax = eax & 0xFFFFFFFBu;
    ebx = ebx | 8;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x110); /* movss */
    eax = eax | 0x80;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEM8(edi + 0x1B7) = 0x19;
    MEM8(edi + 0x250) = 0;
    MEM32(edi + 0x468) = ebx;
    ecx = ebx;
    MEM32(edi + 0x200) = eax;
    if ((xmm0 <= MEMF(0x648D14))) goto loc_003BA072; /* jbe: below or equal (unsigned <=) */

loc_003BA069: ;
    eax = eax | 4;
    MEM32(edi + 0x200) = eax;

loc_003BA072: ;
    ebx = MEM32(ebp + 0x30);
    esi = MEM32(0x84A5F8);
    (void)0; /* cmp ebx, 3 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ebx, 3)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(edi + 0x444) = 0x38;
    MEM32(edi + 0x204) = 0xA7;
    MEM8(edi + 0x17A) = 1;
    eax = eax & 0xA;
    (void)0; /* test LO8(ecx), 0x40 - flags set for next jcc */
    MEM8(edi + 0x20C) = LO8(eax);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_003BA0D3; /* je: equal / zero */

loc_003BA0A9: ;
    ecx = ecx & 0xFFFFFFBFu;
    MEM32(edi + 0x468) = ecx;
    ecx = MEM32(esi + 0x78);
    MEM32(edi + 0x84) = ecx;
    edx = MEM32(esi + 0x80);
    PUSH32(esp, 0x870ED4);
    ecx = edi;
    MEM32(edi + 0x8C) = edx;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_003BA0D3: ;
    eax = MEM32(ebp + 0x7C);
    if (TEST_Z(eax, eax)) goto loc_003BA134; /* je: equal / zero */

loc_003BA0DA: ;
    SET_LO8(eax, MEM8(edi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA0F6; /* je: equal / zero */

loc_003BA0E4: ;
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + esi + -1744;
    goto loc_003BA11A;

loc_003BA0F6: ;
    eax = MEM32(ebp + 0x84);
    if (TEST_Z(eax, eax)) goto loc_003BA134; /* je: equal / zero */

loc_003BA100: ;
    SET_LO8(eax, MEM8(eax + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA134; /* je: equal / zero */

loc_003BA10A: ;
    edx = ZX8(LO8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    eax = edx + esi + -1744;

loc_003BA11A: ;
    if (TEST_Z(eax, eax)) goto loc_003BA134; /* je: equal / zero */

loc_003BA11E: ;
    if (CMP_EQ(MEM32(eax + 0xA4), 0x50B)) goto loc_003BA143; /* je: equal / zero */

loc_003BA12A: ;
    SET_LO8(ecx, MEM8(eax + 0x17D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003BA143; /* jne: not equal / not zero */

loc_003BA134: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x24), _icall_esp); /* indirect call */
    }

loc_003BA13D: ;
    esi = MEM32(0x84A5F8);

loc_003BA143: ;
    SET_LO8(eax, MEM8(edi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA2CC; /* je: equal / zero */

loc_003BA151: ;
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ZX16(MEM16(ecx + esi + -1648));
    (void)0; /* cmp eax, edx - flags set for next jcc */
    esi = ecx + esi + -1744;
    if (CMP_L(eax, edx)) goto loc_003BA179; /* jl: less (signed <) */

loc_003BA174: ;
    eax = 0x14;

loc_003BA179: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    ebx = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x40), _icall_esp); /* indirect call */
    }

loc_003BA18F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA1DD; /* je: equal / zero */

loc_003BA193: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x3C), _icall_esp); /* indirect call */
    }

loc_003BA19B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA2CC; /* je: equal / zero */

loc_003BA1A3: ;
    xmm0 = MEMF(0x648D20); /* movss */
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    MEM8(ebp + 0x2C) = 0;
    MEMF(ebp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BA1BE: ;
    edx = ZX16(MEM16(edi + 0x60));
    ecx = MEM32(esi + 0xD0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(edi + 0xD0) = ecx;
    PUSH32(esp, 0); sub_00306280(); /* call 0x00306280 */

loc_003BA1D5: ;
    esp = esp + 8;
    goto loc_003BA2CC;

loc_003BA1DD: ;
    eax = MEM32(ebx + 0x178);
    if (TEST_Z(eax, eax)) goto loc_003BA2CC; /* je: equal / zero */

loc_003BA1EB: ;
    SET_LO8(eax, MEM8(edi + 0xB4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA2CC; /* je: equal / zero */

loc_003BA1F9: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x3C), _icall_esp); /* indirect call */
    }

loc_003BA201: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA2CC; /* je: equal / zero */

loc_003BA209: ;
    MEM32(ebx + 0x178) = 0;
    eax = MEM32(ebp + 0x7C);
    if (TEST_NZ(eax, eax)) goto loc_003BA221; /* jne: not equal / not zero */

loc_003BA21A: ;
    ebx = 0x50B;
    goto loc_003BA23D;

loc_003BA221: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, edx);
    ecx = 0xB31;
    ebx = 0x50C;
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_003BA23D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F933333);
    PUSH32(esp, esi);
    edx = ebx;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_003BA255: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(esi + 0xA4);
    MEM32(eax + 0x474) = ecx;
    edx = MEM32(esi + 0x568);
    eax = MEM32(esi + 0xA4);
    MEM32(edx + 0x480) = eax;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(esi + 0xA4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ecx + 0x484) = edx;
    eax = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3E2AAAAB);
    PUSH32(esp, 0x306360);
    PUSH32(esp, 0); sub_0030F240(); /* call 0x0030F240 */

loc_003BA2A9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x38;
    eax = ebp;
    MEM8(esi + 0x17D) = 0xFF;
    MEM8(esi + 0x180) = 0xFF;
    MEMF(esi + 0x110) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003B9F00(); /* call 0x003B9F00 */

loc_003BA2CC: ;
    eax = MEM32(ebp + 0x30);
    if (CMP_EQ(eax, 2)) goto loc_003BA364; /* je: equal / zero */

loc_003BA2D8: ;
    if (CMP_EQ(eax, 3)) goto loc_003BA364; /* je: equal / zero */

loc_003BA2E1: ;
    SET_LO8(eax, MEM8(edi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA32B; /* je: equal / zero */

loc_003BA2EB: ;
    PUSH32(esp, edi);
    MEM16(edi + 0x21A) = 0xBB8;
    PUSH32(esp, 0); sub_002E6400(); /* call 0x002E6400 */

loc_003BA2FA: ;
    edx = MEM32(ebp);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    MEM8(ebp + 0x2C) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BA30B: ;
    eax = ZX8(MEM8(edi + 0x251));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = ZX8(MEM8(eax + ecx + -1477));
    MEM32(ebp + 0x34) = edx;
    goto loc_003BA364;

loc_003BA32B: ;
    xmm0 = MEMF(edi + 0x110); /* movss */
    xmm0 = xmm0 * MEMF(0x6490A0); /* mulss */
    MEMF(edi + 0x110) = xmm0; /* movss */
    if (CMP_NE(MEM8(ebp + 0x2C), 1)) goto loc_003BA364; /* jne: not equal / not zero */

loc_003BA349: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = ebp;
    MEM8(ebp + 0x2C) = 0;
    MEMF(ebp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BA364: ;
    SET_LO16(ecx, MEM16(edi + 0x174));
    SET_LO16(ecx, LO16(ecx) + 0x4000);
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    eax = edi;
    MEMF(edi + 0x114) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002E9550(); /* call 0x002E9550 */

loc_003BA38E: ;
    eax = MEM32(ebp + 0x30);
    if (CMP_EQ(eax, 2)) goto loc_003BA3BC; /* je: equal / zero */

loc_003BA396: ;
    if (CMP_EQ(eax, 3)) goto loc_003BA3BC; /* je: equal / zero */

loc_003BA39B: ;
    xmm0 = MEMF(ebp + 0x74); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003BA3BF; /* jp: parity */

loc_003BA3AC: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002EA190(); /* call 0x002EA190 */

loc_003BA3B4: ;
    xmm3 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    goto loc_003BA3D9;

loc_003BA3BC: ;
    xmm3 = 0.0f; /* xorps self = zero */

loc_003BA3BF: ;
    xmm0 = MEMF(ebp + 0x74); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x74) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_003BA3D9; /* jbe: below or equal (unsigned <=) */

loc_003BA3D4: ;
    MEMF(ebp + 0x74) = xmm3; /* movss */

loc_003BA3D9: ;
    ecx = MEM32(ebp + 0x30);
    if (CMP_NE(ecx, 2)) goto loc_003BA440; /* jne: not equal / not zero */

loc_003BA3E1: ;
    xmm0 = MEMF(ebp + 0x70); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003BA404; /* jnp: not parity */

loc_003BA3EF: ;
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x70) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_003BA404; /* jbe: below or equal (unsigned <=) */

loc_003BA3FF: ;
    MEMF(ebp + 0x70) = xmm3; /* movss */

loc_003BA404: ;
    if (CMP_NE(ecx, 2)) goto loc_003BA440; /* jne: not equal / not zero */

loc_003BA409: ;
    xmm0 = MEMF(ebp + 0x70); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003BA440; /* jp: parity */

loc_003BA417: ;
    SET_LO8(eax, MEM8(ebp + 0x8C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BA440; /* jne: not equal / not zero */

loc_003BA421: ;
    ecx = edi;
    PUSH32(esp, 0); sub_003BAF30(); /* call 0x003BAF30 */

loc_003BA428: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA440; /* je: equal / zero */

loc_003BA42C: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = ebp;
    MEM8(ebp + 0x8C) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BA43D: ;
    xmm3 = 0.0f; /* xorps self = zero */

loc_003BA440: ;
    eax = MEM32(ebp + 0x30);
    eax--;
    if ((eax == 0)) goto loc_003BA469; /* je: equal / zero */

loc_003BA446: ;
    eax = eax - 2;
    eax = edi;
    if ((eax == 0)) goto loc_003BA45E; /* je: equal / zero */

loc_003BA44D: ;
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0); sub_002F73A0(); /* call 0x002F73A0 */

loc_003BA457: ;
    PUSH32(esp, 0x42C80000);
    goto loc_003BA47A;

loc_003BA45E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002F73A0(); /* call 0x002F73A0 */

loc_003BA465: ;
    PUSH32(esp, 0);
    goto loc_003BA47A;

loc_003BA469: ;
    PUSH32(esp, 0x42200000);
    eax = edi;
    PUSH32(esp, 0); sub_002F73A0(); /* call 0x002F73A0 */

loc_003BA475: ;
    PUSH32(esp, 0x42200000);

loc_003BA47A: ;
    eax = edi;
    PUSH32(esp, 0); sub_002F7410(); /* call 0x002F7410 */

loc_003BA481: ;
    eax = MEM32(ebp + 0x30);
    esp = esp + 8;
    if (CMP_NE(eax, 3)) goto loc_003BA496; /* jne: not equal / not zero */

loc_003BA48C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003BAB70(); /* call 0x003BAB70 */

loc_003BA493: ;
    xmm3 = 0.0f; /* xorps self = zero */

loc_003BA496: ;
    ebx = 0; /* xor self */
    if (CMP_A(MEM16(edi + 0x3AE), LO16(ebx))) goto loc_003BA4AC; /* ja: above (unsigned >) */

loc_003BA4A1: ;
    SET_LO8(eax, MEM8(ebp + 0x42));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BA4AC; /* jne: not equal / not zero */

loc_003BA4A8: ;
    MEM8(ebp + 0x42) = 1;

loc_003BA4AC: ;
    if (CMP_NE(MEM8(ebp + 0x42), 1)) goto loc_003BA669; /* jne: not equal / not zero */

loc_003BA4B6: ;
    SET_LO8(eax, MEM8(ebp + 0x8F));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BA50B; /* jne: not equal / not zero */

loc_003BA4C0: ;
    if (CMP_A(MEM16(edi + 0x3AE), LO16(ebx))) goto loc_003BA50B; /* ja: above (unsigned >) */

loc_003BA4C9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x437A0000);
    PUSH32(esp, 0x3F800000);
    esi = edi + 0x78;
    PUSH32(esp, ebx);
    MEM8(ebp + 0x8F) = 1;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_003BA4E7: ;
    eax = MEM32(ebp + 0x84);
    esp = esp + 0x1C;
    if (CMP_EQ(eax, ebx)) goto loc_003BA50B; /* je: equal / zero */

loc_003BA4F4: ;
    MEM16(eax + 0x3AE) = LO16(ebx);
    ecx = MEM32(ebp + 0x84);
    edx = MEM32(ecx + 0x570);
    MEM8(edx + 0x42) = 1;

loc_003BA50B: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BA515: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(ebp + 0x78) = xmm0; /* movss */
    MEM8(edi + 0xB4) = 0;
    MEM8(ebp + 0x42) = 2;
    SET_LO8(eax, MEM8(edi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA55A; /* je: equal / zero */

loc_003BA537: ;
    ecx = ZX16(MEM16(edi + 0x60));
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    PUSH32(esp, ecx);
    ecx = edx + eax + -1744;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00306280(); /* call 0x00306280 */

loc_003BA557: ;
    esp = esp + 8;

loc_003BA55A: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_003BA562: ;
    if (TEST_Z(eax, eax)) goto loc_003BA666; /* je: equal / zero */

loc_003BA56A: ;
    SET_LO8(eax, MEM8(0x864EC1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_003BA666; /* jle: less or equal (signed <=) */

loc_003BA57B: ;
    MEM32(esp + 0x1C) = 0x864EC8;

loc_003BA583: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_003BA640; /* je: equal / zero */

loc_003BA58F: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003BA59D; /* jne: not equal / not zero */

loc_003BA598: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003BA59D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_003BA5EB; /* je: equal / zero */

loc_003BA5C3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x88)) goto loc_003BA5EB; /* jb: below (unsigned <) */

loc_003BA5CF: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003BA5D9: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003BA5E4: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003BA60F; /* jne: not equal / not zero */

loc_003BA5EB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003BA5FD: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003BA608: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003BA618; /* je: equal / zero */

loc_003BA60F: ;
    PUSH32(esp, 0); sub_00257800(); /* call 0x00257800 */

loc_003BA614: ;
    esi = eax;
    goto loc_003BA61A;

loc_003BA618: ;
    esi = 0; /* xor self */

loc_003BA61A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x68), _icall_esp); /* indirect call */
    }

loc_003BA622: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003BA62E: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BA640: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x14);
    edx = edx + 0xA50;
    MEM32(esp + 0x1C) = edx;
    edx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax++;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, edx)) goto loc_003BA583; /* jl: less (signed <) */

loc_003BA666: ;
    xmm3 = 0.0f; /* xorps self = zero */

loc_003BA669: ;
    if (CMP_NE(MEM8(ebp + 0x42), 2)) goto loc_003BA6C0; /* jne: not equal / not zero */

loc_003BA66F: ;
    ecx = MEM32(edi + 0x468);
    ecx = ecx & 0xFFFFFFF7u;
    MEM8(edi + 0x234) = 0xFF;
    MEM32(edi + 0x468) = ecx;
    xmm0 = MEMF(ebp + 0x78); /* movss */
    SET_LO8(eax, MEM8(ebp + 0x40));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 - MEMF(esp + 0x10); /* subss */
    MEMF(ebp + 0x78) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BA6C0; /* jne: not equal / not zero */

loc_003BA69C: ;
    xmm0 = MEMF(0x649430); /* movss */
    MEMF(edi + 0x7C) = xmm0; /* movss */
    /* comiss xmm3, MEMF(ebp + 0x78) - sets EFLAGS */
    if ((xmm3 < MEMF(ebp + 0x78))) goto loc_003BA6C0; /* jb: below (unsigned <) */

loc_003BA6AF: ;
    esi = ebp;
    PUSH32(esp, 0); sub_003B83F0(); /* call 0x003B83F0 */

loc_003BA6B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_003BA6C0: ;
    eax = MEM32(ebp + 0x84);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_003BA6D2; /* je: equal / zero */

loc_003BA6CC: ;
    ecx = MEM32(eax + 0x570);

loc_003BA6D2: ;
    edx = MEM32(ebp + 0x30);
    if (CMP_NE(edx, 2)) goto loc_003BA6E8; /* jne: not equal / not zero */

loc_003BA6DA: ;
    xmm0 = MEMF(ebp + 0x70); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003BA6F1; /* jnp: not parity */

loc_003BA6E8: ;
    if (CMP_NE(edx, 3)) goto loc_003BA806; /* jne: not equal / not zero */

loc_003BA6F1: ;
    if (TEST_Z(ecx, ecx)) goto loc_003BA806; /* je: equal / zero */

loc_003BA6F9: ;
    edx = MEM32(ecx + 0x30);
    if (CMP_NE(edx, 2)) goto loc_003BA70F; /* jne: not equal / not zero */

loc_003BA701: ;
    xmm0 = MEMF(ecx + 0x70); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003BA718; /* jnp: not parity */

loc_003BA70F: ;
    if (CMP_NE(edx, 3)) goto loc_003BA806; /* jne: not equal / not zero */

loc_003BA718: ;
    if (CMP_NE(MEM32(ebp + 0x90), 0xFFFFFFFFu)) goto loc_003BA75A; /* jne: not equal / not zero */

loc_003BA721: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, ecx);
    ecx = 0xB33;
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_003BA737: ;
    edx = MEM32(0x847024);
    ecx = 0xCAA;
    MEM32(ebp + 0x94) = ecx;
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_003BA754: ;
    MEM32(ebp + 0x90) = eax;

loc_003BA75A: ;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003BA7CC; /* je: equal / zero */

loc_003BA764: ;
    if (CMP_GE(eax, 0x205)) goto loc_003BA7CC; /* jge: greater or equal (signed >=) */

loc_003BA76B: ;
    ecx = MEM32(edi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_003BA7CC; /* je: equal / zero */

loc_003BA772: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_003BA7CC; /* je: equal / zero */

loc_003BA779: ;
    edx = MEM32(edx + 0x18);
    if (TEST_Z(edx, edx)) goto loc_003BA7CC; /* je: equal / zero */

loc_003BA780: ;
    if (CMP_NE(edx, 0x3E7)) goto loc_003BA78F; /* jne: not equal / not zero */

loc_003BA788: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003BA78D: ;
    goto loc_003BA7CC;

loc_003BA78F: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 2)) goto loc_003BA7A1; /* ja: above (unsigned >) */

loc_003BA79A: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003BA79F: ;
    goto loc_003BA7CC;

loc_003BA7A1: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x1C));
    eax = MEM32(eax + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = edi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_003BA7C9: ;
    esp = esp + 0x20;

loc_003BA7CC: ;
    SET_LO8(eax, MEM8(ebp + 0x8E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA876; /* je: equal / zero */

loc_003BA7DA: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_003BA876; /* je: equal / zero */

loc_003BA7E8: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEM8(ebp + 0x8E) = 0;
    eax = MEM32(edi + 0x3C4);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_003BA804: ;
    goto loc_003BA876;

loc_003BA806: ;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003BA876; /* je: equal / zero */

loc_003BA810: ;
    if (CMP_GE(eax, 0x205)) goto loc_003BA876; /* jge: greater or equal (signed >=) */

loc_003BA817: ;
    ecx = MEM32(edi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_003BA876; /* je: equal / zero */

loc_003BA81E: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_003BA876; /* je: equal / zero */

loc_003BA825: ;
    edx = MEM32(edx);
    if (TEST_Z(edx, edx)) goto loc_003BA876; /* je: equal / zero */

loc_003BA82B: ;
    if (CMP_NE(edx, 0x3E7)) goto loc_003BA83A; /* jne: not equal / not zero */

loc_003BA833: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003BA838: ;
    goto loc_003BA876;

loc_003BA83A: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0)) goto loc_003BA84C; /* ja: above (unsigned >) */

loc_003BA845: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003BA84A: ;
    goto loc_003BA876;

loc_003BA84C: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = edi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_003BA873: ;
    esp = esp + 0x20;

loc_003BA876: ;
    eax = MEM32(edi + 0xA4);
    if (CMP_EQ(eax, 2)) goto loc_003BA886; /* je: equal / zero */

loc_003BA881: ;
    if (CMP_NE(eax, 3)) goto loc_003BA8F3; /* jne: not equal / not zero */

loc_003BA886: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_003BA8F3; /* je: equal / zero */

loc_003BA890: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_003BA89A: ;
    if (TEST_Z(eax, eax)) goto loc_003BA8F3; /* je: equal / zero */

loc_003BA89E: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D10))) goto loc_003BA8F3; /* jbe: below or equal (unsigned <=) */

loc_003BA8AF: ;
    if (CMP_NE(MEM32(ebp + 0x30), 3)) goto loc_003BA8F3; /* jne: not equal / not zero */

loc_003BA8B5: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003BB3C0(); /* call 0x003BB3C0 */

loc_003BA8BC: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = ZX8(MEM8(ebp + 0xA4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA8D6; /* je: equal / zero */

loc_003BA8C7: ;
    eax = eax + 0xFFFFFFECu;
    if (CMP_G(eax, 0x32)) goto loc_003BA8E5; /* jg: greater (signed >) */

loc_003BA8CF: ;
    eax = 0x32;
    goto loc_003BA8E5;

loc_003BA8D6: ;
    eax = eax + 0x14;
    if (CMP_L(eax, 0xFF)) goto loc_003BA8E5; /* jl: less (signed <) */

loc_003BA8E0: ;
    eax = 0xFF;

loc_003BA8E5: ;
    SET_LO8(ecx, LO8(eax));
    MEM8(ebp + 0xA4) = LO8(eax);
    MEM8(edi + 0xB4) = LO8(ecx);

loc_003BA8F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000532D0(); /* call 0x000532D0 */

loc_003BA8FE: ;
    esp = esp + 8;
    esi = ebp;
    PUSH32(esp, 0); sub_003B82B0(); /* call 0x003B82B0 */

loc_003BA908: ;
    PUSH32(esp, 0); sub_003B6040(); /* call 0x003B6040 */

loc_003BA90D: ;
    esi = edi;
    eax = ebp;
    PUSH32(esp, 0); sub_003BAF80(); /* call 0x003BAF80 */

loc_003BA916: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003BB2A0(); /* call 0x003BB2A0 */

loc_003BA91D: ;
    esi = ebp;
    PUSH32(esp, 0); sub_003BA930(); /* call 0x003BA930 */

loc_003BA924: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003BA927: ;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BA930
 * Original: 0x003BA930 - 0x003BA993 (99 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BA930(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BA930: ;
    SET_LO8(eax, MEM8(esi + 0xAC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BA945; /* je: equal / zero */

loc_003BA93A: ;
    eax = MEM32(esi + 0xA8);
    if (CMP_EQ(eax, MEM32(esi + 0x7C))) goto loc_003BA992; /* je: equal / zero */

loc_003BA945: ;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0xA8) = eax;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    eax = MEM32(esi + 0x50);
    MEM8(esi + 0xAC) = 1;
    if (CMP_NE(eax, 1)) goto loc_003BA978; /* jne: not equal / not zero */

loc_003BA95D: ;
    PUSH32(esp, 0x641EA8);
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_003BA967: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 0x641E9C);
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_003BA974: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003BA978: ;
    PUSH32(esp, 0x641E9C);
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_003BA982: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 0x641EA8);
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_003BA98F: ;
    esp = esp + 8;

loc_003BA992: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BA9A0
 * Original: 0x003BA9A0 - 0x003BAA6C (204 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BA9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BA9A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    ebx = ebp;
    edi = esi;
    PUSH32(esp, 0); sub_003B5EA0(); /* call 0x003B5EA0 */

loc_003BA9B8: ;
    SET_LO8(eax, MEM8(ebp + 0x40));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003BAA33; /* jne: not equal / not zero */

loc_003BA9C1: ;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x4A);
    ecx = MEM32(esi + 0x30);
    if (CMP_EQ(ecx, edx)) goto loc_003BAA33; /* je: equal / zero */

loc_003BA9CC: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4A);
    if (CMP_A(eax, 5)) goto loc_003BAA2B; /* ja: above (unsigned >) */

loc_003BA9D5: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3BAA88); /* switch: 6 entries, 6 targets */
    if (_jt == 0x003BA9DCu) goto loc_003BA9DC;
    if (_jt == 0x003BA9EBu) goto loc_003BA9EB;
    if (_jt == 0x003BAA03u) goto loc_003BAA03;
    if (_jt == 0x003BAA0Fu) goto loc_003BAA0F;
    if (_jt == 0x003BAA1Cu) goto loc_003BAA1C;
    if (_jt == 0x003BAA2Bu) goto loc_003BAA2B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003BA9DC: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esi + 0x70) = xmm0; /* movss */
    goto loc_003BAA2B;

loc_003BA9EB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esi + 0x8C) = 1;
    MEMF(esi + 0x70) = xmm0; /* movss */
    MEM8(esi + 0x8E) = 1;
    goto loc_003BAA2B;

loc_003BAA03: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x70) = xmm0; /* movss */
    eax = 0; /* xor self */
    goto loc_003BAA2B;

loc_003BAA0F: ;
    if (CMP_EQ(ecx, 5)) goto loc_003BAA2B; /* je: equal / zero */

loc_003BAA14: ;
    MEM8(esi + 0x42) = 1;
    eax = ecx;
    goto loc_003BAA2B;

loc_003BAA1C: ;
    if (CMP_NE(ecx, 4)) goto loc_003BAA2B; /* jne: not equal / not zero */

loc_003BAA21: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x78) = xmm0; /* movss */
    eax = ecx;

loc_003BAA2B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BAA33: ;
    if (CMP_EQ(MEM8(ebp + 0x6C), LO8(ebx))) { sub_003BAA6C(); return; } /* je: equal / zero */

loc_003BAA38: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(ebp + 0x70);
    edx = MEM32(eax + 0x64);
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_003BAA47: ;
    if (CMP_EQ(eax, ebx)) { sub_003BAA6C(); return; } /* je: equal / zero */

loc_003BAA4B: ;
    MEM32(esi + 0x84) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xAC);
    POP32(esp, edi);
    MEM32(esi + 0x88) = ecx;
    MEM8(esi + 0x80) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BAAE0
 * Original: 0x003BAAE0 - 0x003BAB03 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BAAE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003BAAE0: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM8(ecx + 0x2C) = 0;
    PUSH32(esp, 2);
    MEMF(ecx + 0x74) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) { sub_003BAB03(); return; } /* je: equal / zero */

loc_003BAAFB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BAB00: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BAB10
 * Original: 0x003BAB10 - 0x003BAB20 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BAB10(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BAB10: ;
    eax = MEM32(ecx + 0x30);
    if (CMP_EQ(eax, 2)) { sub_003BAB20(); return; } /* je: equal / zero */

loc_003BAB18: ;
    if (CMP_EQ(eax, 3)) { sub_003BAB20(); return; } /* je: equal / zero */

loc_003BAB1D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003BAB30
 * Original: 0x003BAB30 - 0x003BAB67 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BAB30(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BAB30: ;
    eax = MEM32(ecx + 0x84);
    edx = MEM32(eax + 0x570);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(edx, ebx)) goto loc_003BAB63; /* je: equal / zero */

loc_003BAB43: ;
    if (CMP_NE(MEM8(edx + 0x42), LO8(ebx))) goto loc_003BAB51; /* jne: not equal / not zero */

loc_003BAB48: ;
    if (CMP_NE(MEM16(eax + 0x3AE), LO16(ebx))) goto loc_003BAB65; /* jne: not equal / not zero */

loc_003BAB51: ;
    MEM8(ecx + 0x80) = LO8(ebx);
    MEM32(ecx + 0x84) = ebx;
    MEM32(ecx + 0x88) = ebx;

loc_003BAB63: ;
    eax = 0; /* xor self */

loc_003BAB65: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003BAB70
 * Original: 0x003BAB70 - 0x003BAF29 (953 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BAB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BAB70: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    eax = MEM32(esi + 0x23C);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_003BAB8F; /* je: equal / zero */

loc_003BAB8A: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BAB8F: ;
    if (CMP_NE(MEM32(ebp + 0x7C), 1)) goto loc_003BAF20; /* jne: not equal / not zero */

loc_003BAB99: ;
    if (CMP_NE(MEM8(ebp + 0x42), LO8(ebx))) goto loc_003BAF20; /* jne: not equal / not zero */

loc_003BABA2: ;
    if (CMP_EQ(MEM32(ebp + 0x84), ebx)) goto loc_003BAF20; /* je: equal / zero */

loc_003BABAE: ;
    if (CMP_EQ(MEM8(ebp + 0x8C), LO8(ebx))) goto loc_003BAF20; /* je: equal / zero */

loc_003BABBA: ;
    eax = MEM32(esi + 0x23C);
    if (CMP_EQ(eax, ebx)) goto loc_003BAF20; /* je: equal / zero */

loc_003BABC8: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BABCD: ;
    if (TEST_Z(eax, eax)) goto loc_003BAF20; /* je: equal / zero */

loc_003BABD5: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_003BAB30(); /* call 0x003BAB30 */

loc_003BABDC: ;
    if (TEST_Z(eax, eax)) goto loc_003BAF20; /* je: equal / zero */

loc_003BABE4: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003BB3C0(); /* call 0x003BB3C0 */

loc_003BABEB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BAF20; /* jne: not equal / not zero */

loc_003BABF3: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BABFE: ;
    eax = MEM32(eax + 0x238);
    eax = MEM32(eax);
    xmm0 = MEMF(0x648E5C); /* movss */
    ecx = esi + 0x78;
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = 0x870ED4;
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003BB430(); /* call 0x003BB430 */

loc_003BAC3B: ;
    (void)0; /* cmp MEM32(eax), ebx - flags set for next jcc */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x648E5C); /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_EQ(MEM32(eax), ebx)) goto loc_003BAF20; /* je: equal / zero */

loc_003BAC56: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = eax;
    goto loc_003BAC70;

loc_003BAC5D: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    goto loc_003BAC70;

    /* nop */
    /* nop */

loc_003BAC70: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_003BAF09; /* je: equal / zero */

loc_003BAC85: ;
    xmm1 = MEMF(esi + 0x7C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003BAF09; /* jbe: below or equal (unsigned <=) */

loc_003BAC93: ;
    eax = MEM32(esp + 0x38);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    edi = esi + 0x78;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003BACA4: ;
    xmm1 = MEMF(0x648F08); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003BAF09; /* jbe: below or equal (unsigned <=) */

loc_003BACB8: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    eax = esi;
    ecx = 0xC94;
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_003BACCE: ;
    ecx = MEM32(ebp + 0x84);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    ecx = ecx + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_003BACEA: ;
    eax = MEM32(ebp + 0x84);
    eax = eax + 0x78;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(edi) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    edx = MEM32(eax);
    ecx = esi + 0x84;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esi + 0x7C);
    esp = esp + 0xC;
    MEM32(esi + 0x3B8) = ecx;
    PUSH32(esp, 0x870ED4);
    ecx = esi;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_003BAD33: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(edx + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BAD42: ;
    if (CMP_EQ(eax, ebx)) goto loc_003BAD72; /* je: equal / zero */

loc_003BAD46: ;
    SET_LO16(eax, MEM16(eax + 0x60));
    if (CMP_EQ(LO16(eax), MEM16(esi + 0x60))) goto loc_003BAD72; /* je: equal / zero */

loc_003BAD50: ;
    if (CMP_NE(MEM8(ebp + 0xAD), LO8(ebx))) goto loc_003BAD72; /* jne: not equal / not zero */

loc_003BAD58: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00242A80(); /* call 0x00242A80 */

loc_003BAD68: ;
    esp = esp + 0x14;
    MEM8(ebp + 0xAD) = 1;

loc_003BAD72: ;
    if (CMP_EQ(MEM32(esi + 0x564), ebx)) goto loc_003BAE52; /* je: equal / zero */

loc_003BAD7E: ;
    PUSH32(esp, 0); sub_00241760(); /* call 0x00241760 */

loc_003BAD83: ;
    if (TEST_NZ(eax, eax)) goto loc_003BAE52; /* jne: not equal / not zero */

loc_003BAD8B: ;
    eax = ZX16(MEM16(esi + 0x60));
    eax = eax << 5;
    edx = MEM32(eax + 0x771C50);
    ecx = 1;
    if (CMP_NE(edx, ecx)) goto loc_003BADB7; /* jne: not equal / not zero */

loc_003BADA1: ;
    edx = MEM32(eax + 0x771C60);
    if (CMP_LE(edx, MEM32(eax + 0x771C5C))) goto loc_003BADB7; /* jle: less or equal (signed <=) */

loc_003BADAF: ;
    if (CMP_EQ(MEM8(eax + 0x771C64), LO8(ebx))) goto loc_003BADE4; /* je: equal / zero */

loc_003BADB7: ;
    MEM32(eax + 0x771C50) = ecx;
    MEM32(eax + 0x771C54) = ebx;
    MEM8(eax + 0x771C58) = 0xFF;
    MEM8(eax + 0x771C59) = 0xFF;
    MEM8(eax + 0x771C5A) = 0xFF;
    MEM32(eax + 0x771C5C) = ebx;
    MEM32(eax + 0x771C60) = ebx;

loc_003BADE4: ;
    eax = ZX16(MEM16(esi + 0x60));
    eax = eax << 5;
    if (CMP_NE(MEM32(eax + 0x771C50), ebx)) goto loc_003BAE09; /* jne: not equal / not zero */

loc_003BADF3: ;
    ecx = MEM32(eax + 0x771C60);
    if (CMP_LE(ecx, MEM32(eax + 0x771C5C))) goto loc_003BAE09; /* jle: less or equal (signed <=) */

loc_003BAE01: ;
    if (CMP_EQ(MEM8(eax + 0x771C64), LO8(ebx))) goto loc_003BAE3A; /* je: equal / zero */

loc_003BAE09: ;
    MEM32(eax + 0x771C50) = ebx;
    MEM32(eax + 0x771C54) = ebx;
    MEM8(eax + 0x771C58) = 0xFF;
    MEM8(eax + 0x771C59) = 0xFF;
    MEM8(eax + 0x771C5A) = 0xFF;
    MEM32(eax + 0x771C5C) = 0x1E;
    MEM32(eax + 0x771C60) = ebx;

loc_003BAE3A: ;
    edx = MEM32(esi + 0x564);
    eax = MEM32(edx + 4);
    if (CMP_NE(MEM8(eax + 0x8CF), 1)) goto loc_003BAE52; /* jne: not equal / not zero */

loc_003BAE4C: ;
    MEM8(eax + 0x8CF) = LO8(ebx);

loc_003BAE52: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0x624) = xmm0; /* movss */
    MEMF(esi + 0x62C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esi + 0x628) = xmm1; /* movss */
    MEMF(esi + 0x630) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi + 0x250));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_003BAF09; /* je: equal / zero */

loc_003BAE8F: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm0 = xmm0 + MEMF(eax + ecx + -1624); /* addss */
    edx = eax + ecx + -1744;
    MEMF(edx + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(edx + 0x7C); /* addss */
    MEMF(edx + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(edx + 0x80); /* addss */
    MEMF(edx + 0x80) = xmm0; /* movss */
    ecx = MEM32(edx + 0x78);
    eax = edx + 0x84;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 0x7C);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 0x80);
    MEM32(eax + 8) = ecx;
    eax = edx;
    PUSH32(esp, 0); sub_002F8680(); /* call 0x002F8680 */

loc_003BAF00: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BAF09; /* je: equal / zero */

loc_003BAF04: ;
    PUSH32(esp, 0); sub_00091240(); /* call 0x00091240 */

loc_003BAF09: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(esp + 0x34) = eax;
    if (CMP_NE(ecx, ebx)) goto loc_003BAC5D; /* jne: not equal / not zero */

loc_003BAF1F: ;
    POP32(esp, edi);

loc_003BAF20: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BAF30
 * Original: 0x003BAF30 - 0x003BAF6F (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BAF30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003BAF30: ;
    eax = MEM32(ecx + 0xA4);
    if (CMP_EQ(eax, 2)) goto loc_003BAF40; /* je: equal / zero */

loc_003BAF3B: ;
    if (CMP_NE(eax, 3)) { sub_003BAF6F(); return; } /* jne: not equal / not zero */

loc_003BAF40: ;
    eax = MEM32(ecx + 0x3C4);
    if (TEST_Z(eax, eax)) { sub_003BAF6F(); return; } /* je: equal / zero */

loc_003BAF4A: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_003BAF54: ;
    if (TEST_Z(eax, eax)) { sub_003BAF6F(); return; } /* je: equal / zero */

loc_003BAF58: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648D10) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D10))) { sub_003BAF6F(); return; } /* jbe: below or equal (unsigned <=) */

loc_003BAF69: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003BAF80
 * Original: 0x003BAF80 - 0x003BB284 (772 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BAF80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BAF80: ;
    esp = esp - 0x398;
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x84B49C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BB27C; /* je: equal / zero */

loc_003BAF96: ;
    eax = esi + 0x78;
    PUSH32(esp, eax);
    eax = MEM32(0x8470DC);
    eax = eax + 0x330;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003BAFAA: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(0x648EB8); /* subss */
    xmm1 = xmm1 * MEMF(0x648EB4); /* mulss */
    xmm1 = xmm1 * MEMF(0x648EB0); /* mulss */
    xmm0 = MEMF(0x75ECB0); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D3C); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003BAFEE; /* ja: above (unsigned >) */

loc_003BAFE1: ;
    xmm1 = MEMF(0x648EAC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003BAFF1; /* jbe: below or equal (unsigned <=) */

loc_003BAFEE: ;
    xmm0 = xmm1; /* movaps */

loc_003BAFF1: ;
    eax = MEM32(0x84A144);
    if (CMP_LE(eax & eax, 0)) goto loc_003BB002; /* jle: less or equal (signed <=) */

loc_003BAFFA: ;
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */

loc_003BB002: ;
    xmm1 = MEMF(0x648E68); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003BB012; /* jbe: below or equal (unsigned <=) */

loc_003BB00F: ;
    xmm0 = xmm1; /* movaps */

loc_003BB012: ;
    eax = ZX16(MEM16(esi + 0x60));
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_003BB022; /* jns: not sign (positive) */

loc_003BB01D: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_003BB022: ;
    if (CMP_A(eax, 3)) goto loc_003BB074; /* ja: above (unsigned >) */

loc_003BB027: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3BB284); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003BB02Eu) goto loc_003BB02E;
    if (_jt == 0x003BB037u) goto loc_003BB037;
    if (_jt == 0x003BB047u) goto loc_003BB047;
    if (_jt == 0x003BB05Cu) goto loc_003BB05C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003BB02E: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x77616F) = LO8(eax);
    goto loc_003BB065;

loc_003BB037: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = 0;
    MEM8(0x77616F) = LO8(eax);
    goto loc_003BB06A;

loc_003BB047: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = 0;
    MEM8(0x77616F) = LO8(eax);
    goto loc_003BB06F;

loc_003BB05C: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x77616F) = 0;

loc_003BB065: ;
    MEM8(0x776171) = LO8(eax);

loc_003BB06A: ;
    MEM8(0x776170) = LO8(eax);

loc_003BB06F: ;
    MEM8(0x77616E) = LO8(eax);

loc_003BB074: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BB095; /* je: equal / zero */

loc_003BB085: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_003BB095: ;
    eax = MEM32(edi + 0x84);
    if (TEST_Z(eax, eax)) goto loc_003BB0C0; /* je: equal / zero */

loc_003BB09F: ;
    ecx = ZX16(MEM16(eax + 0x60));
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xE4;
    PUSH32(esp, 0x641E90);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_003BB0BB: ;
    esp = esp + 0x10;
    goto loc_003BB0DA;

loc_003BB0C0: ;
    ecx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, ecx);
    edx = esp + 0xE0;
    PUSH32(esp, 0x641E80);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_003BB0D7: ;
    esp = esp + 0xC;

loc_003BB0DA: ;
    SET_LO8(eax, MEM8(esi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BB0F5; /* je: equal / zero */

loc_003BB0E4: ;
    eax = ZX8(LO8(eax));
    eax--;
    PUSH32(esp, eax);
    PUSH32(esp, 0x641C90);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    goto loc_003BB104;

loc_003BB0F5: ;
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, edx);
    PUSH32(esp, 0x641C84);
    eax = esp + 0x1C;
    PUSH32(esp, eax);

loc_003BB104: ;
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_003BB109: ;
    eax = MEM32(esi + 0x23C);
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BB118: ;
    if (TEST_NZ(eax, eax)) goto loc_003BB121; /* jne: not equal / not zero */

loc_003BB11C: ;
    ebx = ebx | 0xFFFFFFFFu;
    goto loc_003BB125;

loc_003BB121: ;
    ebx = ZX16(MEM16(eax + 0x60));

loc_003BB125: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_003BB12C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = 0x641C74;
    if (TEST_NZ(eax, eax)) goto loc_003BB13A; /* jne: not equal / not zero */

loc_003BB135: ;
    edx = 0x641C64;

loc_003BB13A: ;
    eax = MEM32(edi + 0x7C);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x641E74;
    if (TEST_Z(eax, eax)) goto loc_003BB14B; /* je: equal / zero */

loc_003BB146: ;
    ecx = 0x641E6C;

loc_003BB14B: ;
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(esi + 0x3AE));
    eax = MEM32(edi + 0x30);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x88);
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM16(esi + 0xAC);
    eax = MEM32(eax * 4 + 0x74EDA4);
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(edi + 0x80));
    edi = (uint32_t)(int32_t)SMEM16(edi + 0x4E);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = esp + 0x104;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x641DB8);
    ecx = esp + 0x1DC;
    PUSH32(esp, 0xFA);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004704E6(); /* call 0x004704E6 */

loc_003BB1A2: ;
    esp = esp + 0x38;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003BB27B; /* je: equal / zero */

loc_003BB1AF: ;
    ecx = MEM32(esi + 0x80);
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    PUSH32(esp, 0x46EA6000);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    edi = esp + 0x1C;
    ebx = esp + 0x20;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_003BB1EA: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_003BB211; /* je: equal / zero */

loc_003BB1F1: ;
    eax = (int32_t)MEMF(esp + 8); /* cvttss2si */
    ecx = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    edx = esp + 0x1A8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_003BB20E: ;
    esp = esp + 0xC;

loc_003BB211: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BB250; /* je: equal / zero */

loc_003BB240: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_003BB250: ;
    eax = 0x14;
    MEM16(0x776168) = LO16(eax);
    MEM16(0x776164) = LO16(eax);
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BB26C: ;
    if (TEST_Z(eax, eax)) goto loc_003BB27B; /* je: equal / zero */

loc_003BB270: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BB27B: ;
    POP32(esp, ebx);

loc_003BB27C: ;
    POP32(esp, edi);
    esp = esp + 0x398;
    esp += 4; return; /* ret */

}

/**
 * sub_003BB2A0
 * Original: 0x003BB2A0 - 0x003BB3BC (284 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB2A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003BB2A0: ;
    esp = esp - 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003BB2AD: ;
    if (TEST_Z(eax, eax)) goto loc_003BB3B7; /* je: equal / zero */

loc_003BB2B5: ;
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(eax, 2)) goto loc_003BB2C6; /* je: equal / zero */

loc_003BB2BD: ;
    if (CMP_NE(eax, 3)) goto loc_003BB3B7; /* jne: not equal / not zero */

loc_003BB2C6: ;
    eax = MEM32(esi + 0x50);
    esi = esi + 0x98;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    MEM32(esp + 4) = ecx;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x78); /* subss */
    ecx = MEM32(esi + 8);
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp + 8) = edx;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x7C); /* subss */
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 0xC) = ecx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x80); /* subss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    edx = MEM32(esp + 0xC);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEM32(esp + 0x14) = ecx;
    xmm1 = MEMF(esp + 0x14); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    edx = MEM32(esp + 0x14);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEM32(esp + 4) = ecx;
    xmm0 = xmm0 + MEMF(esp + 4); /* addss */
    MEMF(eax + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 8) = edx;
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEM32(esp + 0xC) = ecx;
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    MEMF(eax + 0x80) = xmm0; /* movss */

loc_003BB3B7: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003BB3C0
 * Original: 0x003BB3C0 - 0x003BB3CF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB3C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BB3C0: ;
    ecx = MEM32(eax + 0x7C);
    esp = esp - 0x14;
    if (TEST_NZ(ecx, ecx)) { sub_003BB3CF(); return; } /* jne: not equal / not zero */

loc_003BB3CA: ;
    eax = MEM32(eax + 0x50);
    g_seh_ebp = ebp; sub_003BB3D5(); return; /* tail jmp 0x003BB3D5 */

}

/**
 * sub_003BB430
 * Original: 0x003BB430 - 0x003BB43E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB430(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BB430: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) { sub_003BB43E(); return; } /* jne: not equal / not zero */

loc_003BB437: ;
    eax = eax + 4;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BB480
 * Original: 0x003BB480 - 0x003BB6AC (556 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BB480: ;
    esp = esp - 0x454;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x46C);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_003BB4A4; /* je: equal / zero */

loc_003BB49E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_003BB4A4: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_003BB4B1: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_003BB5BA; /* jne: not equal / not zero */

loc_003BB4C4: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_003BB680; /* jbe: below or equal (unsigned <=) */

loc_003BB4CC: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;

loc_003BB4E5: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x46C);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x468);
    eax = MEM32(eax);
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x38) = ecx;
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x3C); /* addss */
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0x44) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_003BB5A5; /* jbe: below or equal (unsigned <=) */

loc_003BB584: ;
    eax = MEM32(esi);
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_003BB5A5; /* jne: not equal / not zero */

loc_003BB58C: ;
    ecx = MEM32(eax + 0x238);
    edx = MEM32(esp + 0x470);
    if (CMP_NE(MEM32(ecx), edx)) goto loc_003BB5A5; /* jne: not equal / not zero */

loc_003BB59D: ;
    MEM32(esp + 0x46C) = MEM32(esp + 0x46C) + 4;

loc_003BB5A5: ;
    eax = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, eax)) goto loc_003BB4E5; /* jl: less (signed <) */

loc_003BB5B5: ;
    goto loc_003BB680;

loc_003BB5BA: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_003BB680; /* jbe: below or equal (unsigned <=) */

loc_003BB5C2: ;
    edx = esp + 0x58;
    ecx = esp + 0x20;
    eax = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;

loc_003BB5D8: ;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x468);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx);
    MEM32(esp + 0x28) = edx;
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x2C); /* addss */
    MEM32(esp + ebx * 4 + 0x64) = esi;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
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
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0x40) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_003BB670; /* jbe: below or equal (unsigned <=) */

loc_003BB66F: ;
    ebx++;

loc_003BB670: ;
    edx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, edx)) goto loc_003BB5D8; /* jl: less (signed <) */

loc_003BB680: ;
    edi = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(edi, edi)) goto loc_003BB4B1; /* jne: not equal / not zero */

loc_003BB68D: ;
    eax = MEM32(esp + 0x46C);
    edx = MEM32(esp + 0x54);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x454;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003BB6B0
 * Original: 0x003BB6B0 - 0x003BB702 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB6B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003BB6B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + 0x78;
    edi = MEM32(edx);
    esi = ecx;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(eax + 0x68);
    (void)0; /* cmp eax, 0x132 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(eax, 0x132)) goto loc_003BB6EB; /* je: equal / zero */

loc_003BB6D6: ;
    if (CMP_EQ(eax, 0xC6)) goto loc_003BB6EB; /* je: equal / zero */

loc_003BB6DD: ;
    if (CMP_EQ(eax, 0x135)) goto loc_003BB6EB; /* je: equal / zero */

loc_003BB6E4: ;
    if (CMP_NE(eax, 0x105)) goto loc_003BB6F3; /* jne: not equal / not zero */

loc_003BB6EB: ;
    xmm0 = MEMF(0x648E38); /* movss */

loc_003BB6F3: ;
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(ecx + 4) = xmm1; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003BB710
 * Original: 0x003BB710 - 0x003BB7C7 (183 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB710(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BB710: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_003BB7BD; /* jne: not equal / not zero */

loc_003BB723: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003BB731; /* jne: not equal / not zero */

loc_003BB72C: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003BB731: ;
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
    if (TEST_Z(esi, esi)) goto loc_003BB781; /* je: equal / zero */

loc_003BB759: ;
    if (CMP_B(MEM32(esi + 0x80), 0x604)) goto loc_003BB781; /* jb: below (unsigned <) */

loc_003BB765: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003BB76F: ;
    PUSH32(esp, 0x604);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003BB77A: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003BB7A5; /* jne: not equal / not zero */

loc_003BB781: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003BB793: ;
    PUSH32(esp, 0x604);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003BB79E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003BB7AF; /* je: equal / zero */

loc_003BB7A5: ;
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0); sub_003BB7D0(); /* call 0x003BB7D0 */

loc_003BB7AD: ;
    goto loc_003BB7B1;

loc_003BB7AF: ;
    eax = 0; /* xor self */

loc_003BB7B1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(ebx + 0x570) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_003BB7C5; /* je: equal / zero */

loc_003BB7BD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xC), _icall_esp); /* indirect call */
    }

loc_003BB7C5: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003BB7D0
 * Original: 0x003BB7D0 - 0x003BB8BA (234 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB7D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BB7D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edi = esi;
    PUSH32(esp, 0); sub_003B5BC0(); /* call 0x003B5BC0 */

loc_003BB7DF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax | 0xFFFFFFFFu;
    ebx = 0; /* xor self */
    MEM32(esi + 0x5E4) = eax;
    MEM32(esi + 0x5E8) = eax;
    MEM32(esi + 0x5EC) = eax;
    MEM32(esi + 0x5F0) = eax;
    MEM32(esi + 0x5F4) = eax;
    MEM32(esi + 0x5F8) = eax;
    MEM32(esi + 0x5FC) = eax;
    MEM32(esi + 0x600) = eax;
    (void)0; /* cmp MEM32(esi + 0x30), ebx - flags set for next jcc */
    MEM32(esi) = 0x641F60;
    MEM32(esi + 4) = 5;
    MEMF(esi + 0x6C) = xmm0; /* movss */
    MEMF(esi + 0x70) = xmm0; /* movss */
    MEMF(esi + 0x74) = xmm0; /* movss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    MEMF(esi + 0x80) = xmm0; /* movss */
    MEMF(esi + 0x84) = xmm0; /* movss */
    MEMF(esi + 0x88) = xmm0; /* movss */
    MEMF(esi + 0x8C) = xmm0; /* movss */
    MEMF(esi + 0x90) = xmm0; /* movss */
    MEMF(esi + 0x98) = xmm0; /* movss */
    MEM8(esi + 0x94) = LO8(ebx);
    MEM8(esi + 0x9C) = LO8(ebx);
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEMF(esi + 0xA8) = xmm0; /* movss */
    if (CMP_EQ(MEM32(esi + 0x30), ebx)) goto loc_003BB895; /* je: equal / zero */

loc_003BB892: ;
    MEM32(esi + 0x30) = ebx;

loc_003BB895: ;
    eax = MEM32(ebp + 0x68);
    if (CMP_EQ(eax, 0x132)) { sub_003BB8BA(); return; } /* je: equal / zero */

loc_003BB89F: ;
    if (CMP_EQ(eax, 0xC6)) { sub_003BB8BA(); return; } /* je: equal / zero */

loc_003BB8A6: ;
    if (CMP_EQ(eax, 0x135)) goto loc_003BB8B4; /* je: equal / zero */

loc_003BB8AD: ;
    if (CMP_NE(eax, 0x105)) { sub_003BB8BA(); return; } /* jne: not equal / not zero */

loc_003BB8B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x16);
    g_seh_ebp = ebp; sub_003BB8BE(); return; /* tail jmp 0x003BB8BE */

}

/**
 * sub_003BBB60
 * Original: 0x003BBB60 - 0x003BBC5C (252 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BBB60(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BBB60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x5E4);
    PUSH32(esp, edi);
    edi = ebx + 0x5E4;
    esi = esi | 0xFFFFFFFFu;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebx) = 0x641F60;
    if (CMP_EQ(eax, esi)) goto loc_003BBB9A; /* je: equal / zero */

loc_003BBB7E: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x5E8);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_003BBB92: ;
    MEM32(edi) = esi;
    MEM32(ebx + 0x5E8) = esi;

loc_003BBB9A: ;
    eax = MEM32(ebx + 0x5FC);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    edi = ebx + 0x5FC;
    if (CMP_EQ(eax, esi)) goto loc_003BBBC7; /* je: equal / zero */

loc_003BBBAA: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    ecx = MEM32(ebx + 0x600);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_003BBBBF: ;
    MEM32(edi) = esi;
    MEM32(ebx + 0x600) = esi;

loc_003BBBC7: ;
    eax = MEM32(ebx + 0x5EC);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    edi = ebx + 0x5EC;
    if (CMP_EQ(eax, esi)) goto loc_003BBBEE; /* je: equal / zero */

loc_003BBBD7: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    ecx = MEM32(ebx + 0x5F0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_003BBBEC: ;
    MEM32(edi) = esi;

loc_003BBBEE: ;
    eax = MEM32(ebx + 0x5F4);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    edi = ebx + 0x5F4;
    if (CMP_EQ(eax, esi)) goto loc_003BBC14; /* je: equal / zero */

loc_003BBBFE: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x5F8);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_003BBC12: ;
    MEM32(edi) = esi;

loc_003BBC14: ;
    eax = MEM32(ebx + 0x68);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = ebx + 0x68;
    if (TEST_Z(eax, eax)) goto loc_003BBC23; /* je: equal / zero */

loc_003BBC1E: ;
    PUSH32(esp, 0); sub_0032D790(); /* call 0x0032D790 */

loc_003BBC23: ;
    ecx = MEM32(ebx + 0xB0);
    if (TEST_Z(ecx, ecx)) goto loc_003BBC33; /* je: equal / zero */

loc_003BBC2D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003BBC33: ;
    eax = MEM32(ebx + 0xB4);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ebx + 0xB4;
    MEM32(ebx + 0xB0) = 0;
    if (TEST_Z(eax, eax)) goto loc_003BBC52; /* je: equal / zero */

loc_003BBC4D: ;
    PUSH32(esp, 0); sub_003326A0(); /* call 0x003326A0 */

loc_003BBC52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = 0x64218C;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003BBC60
 * Original: 0x003BBC60 - 0x003BBC8F (47 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BBC60(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BBC60: ;
    if (CMP_NE(MEM32(esi + 0x5E4), 0xFFFFFFFFu)) goto loc_003BBC8C; /* jne: not equal / not zero */

loc_003BBC69: ;
    eax = MEM32(0x847024);
    ecx = 0xD3C;
    MEM32(esi + 0x5E8) = ecx;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_003BBC86: ;
    MEM32(esi + 0x5E4) = eax;

loc_003BBC8C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BBC90
 * Original: 0x003BBC90 - 0x003BBCC8 (56 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BBC90(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BBC90: ;
    eax = MEM32(esi + 0x5E4);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x5E4;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003BBCC6; /* je: equal / zero */

loc_003BBCA2: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5E8);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_003BBCB6: ;
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(esi + 0x5E8) = 0xFFFFFFFFu;

loc_003BBCC6: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BBCD0
 * Original: 0x003BBCD0 - 0x003BBD08 (56 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BBCD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BBCD0: ;
    eax = MEM32(esi + 0x5FC);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x5FC;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003BBD06; /* je: equal / zero */

loc_003BBCE2: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x600);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_003BBCF6: ;
    MEM32(edi) = 0xFFFFFFFFu;
    MEM32(esi + 0x600) = 0xFFFFFFFFu;

loc_003BBD06: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BBD10
 * Original: 0x003BBD10 - 0x003BBD64 (84 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BBD10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BBD10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x68);
    esi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    SET_LO8(ecx, 0); /* xor self */
    (void)0; /* cmp eax, 0x138 - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(ebx);
    if (CMP_EQ(eax, 0x138)) goto loc_003BBD55; /* je: equal / zero */

loc_003BBD2C: ;
    if (CMP_EQ(eax, 0xC5)) goto loc_003BBD55; /* je: equal / zero */

loc_003BBD33: ;
    if (CMP_NE(MEM32(esi + 0x30), 3)) goto loc_003BBD4E; /* jne: not equal / not zero */

loc_003BBD39: ;
    eax = MEM32(edi + 0x238);
    eax = MEM32(eax);
    if (TEST_NZ(eax, eax)) goto loc_003BBD49; /* jne: not equal / not zero */

loc_003BBD45: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_003BBD66(); return; /* tail jmp 0x003BBD66 */

loc_003BBD49: ;
    if (CMP_EQ(eax, 1)) { sub_003BBD64(); return; } /* je: equal / zero */

loc_003BBD4E: ;
    MEM8(esp + 0xF) = 1;
    g_seh_ebp = ebp; sub_003BBD66(); return; /* tail jmp 0x003BBD66 */

loc_003BBD55: ;
    edx = MEM32(edi + 0x238);
    if (CMP_NE(MEM32(edx), 0)) { sub_003BBD64(); return; } /* jne: not equal / not zero */

loc_003BBD60: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_003BBD66(); return; /* tail jmp 0x003BBD66 */

}

/**
 * sub_003BBE00
 * Original: 0x003BBE00 - 0x003BBFD9 (473 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BBE00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BBE00: ;
    esp = esp - 0x34;
    xmm0 = MEMF(0x649AA8); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    ebp = MEM32(ebx + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x14) = 0x10;
    esi = 0x6D00;

loc_003BBE32: ;
    eax = MEM32(0x84A5FC);
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(MEM8(eax + ecx), 0x35)) goto loc_003BBFB1; /* jne: not equal / not zero */

loc_003BBE45: ;
    if (CMP_NE(MEM32(esi + edi + 0x64), 0x35)) goto loc_003BBFB1; /* jne: not equal / not zero */

loc_003BBE50: ;
    eax = MEM32(esi + edi + 0x68);
    if (CMP_EQ(eax, 0xDF)) goto loc_003BBE74; /* je: equal / zero */

loc_003BBE5B: ;
    if (CMP_EQ(eax, 0xE9)) goto loc_003BBE74; /* je: equal / zero */

loc_003BBE62: ;
    if (CMP_EQ(eax, 0x12F)) goto loc_003BBE74; /* je: equal / zero */

loc_003BBE69: ;
    if (CMP_NE(eax, 0xEC)) goto loc_003BBFB1; /* jne: not equal / not zero */

loc_003BBE74: ;
    eax = MEM32(esi + edi + 0x570);
    edx = MEM32(eax + 0x1F0);
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    if (TEST_Z(ecx, ecx)) goto loc_003BBFB1; /* je: equal / zero */

loc_003BBE90: ;
    if (TEST_Z(eax, eax)) goto loc_003BBEA4; /* je: equal / zero */

loc_003BBE94: ;
    eax = edx;
    if (TEST_Z(eax, eax)) goto loc_003BBEA4; /* je: equal / zero */

loc_003BBE9A: ;
    edx = MEM32(eax + 0x238);
    eax = MEM32(edx);
    goto loc_003BBEA9;

loc_003BBEA4: ;
    eax = 2;

loc_003BBEA9: ;
    ecx = MEM32(ebp + 0x238);
    if (CMP_EQ(eax, MEM32(ecx))) goto loc_003BBFB1; /* je: equal / zero */

loc_003BBEB7: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = ebp + 0x78;
    eax = esi + edi + 0x78;
    ecx = esp + 0x38;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x38;
    MEM32(esp + 0x28) = edx;
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
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x30)); /* sqrtss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x41);
    ecx = MEM32(esp + 0x14);
    ecx++;
    if (CMP_NE(ecx, eax)) goto loc_003BBF74; /* jne: not equal / not zero */

loc_003BBF66: ;
    xmm1 = xmm1 * MEMF(0x648E68); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */

loc_003BBF74: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x18))) goto loc_003BBFB1; /* jbe: below or equal (unsigned <=) */

loc_003BBF81: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    eax = ebp;
    PUSH32(esp, 0); sub_003BCF40(); /* call 0x003BCF40 */

loc_003BBF91: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(0x84A5F8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BBFB1; /* je: equal / zero */

loc_003BBF9B: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    xmm0 = MEMF(esp + 0x18); /* movss */
    SET_LO8(eax, LO8(eax) + 1);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x13) = LO8(eax);

loc_003BBFB1: ;
    edx = MEM32(esp + 0x14);
    edx++;
    esi = esi + 0x6D0;
    (void)0; /* cmp esi, 0x36800 - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(esi, 0x36800)) goto loc_003BBE32; /* jl: less (signed <) */

loc_003BBFCC: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x13);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_003BBFE0
 * Original: 0x003BBFE0 - 0x003BC010 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BBFE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BBFE0: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    ebx = eax;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_003BC000; /* jne: not equal / not zero */

loc_003BBFEF: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_003BC000: ;
    SET_LO8(eax, MEM8(0x87674D));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003BC010(); return; } /* je: equal / zero */

loc_003BC009: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_003BC270
 * Original: 0x003BC270 - 0x003BC2BC (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC270(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003BC270: ;
    if (CMP_NE(MEM32(esi + 0x30), 3)) goto loc_003BC2B7; /* jne: not equal / not zero */

loc_003BC276: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 0x84) - sets EFLAGS */
    if ((xmm0 < MEMF(esi + 0x84))) goto loc_003BC2B7; /* jb: below (unsigned <) */

loc_003BC282: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003BC289: ;
    if (TEST_Z(eax, eax)) goto loc_003BC2BB; /* je: equal / zero */

loc_003BC28D: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, 0x135)) goto loc_003BC2AC; /* je: equal / zero */

loc_003BC29A: ;
    if (CMP_EQ(eax, 0x105)) goto loc_003BC2AC; /* je: equal / zero */

loc_003BC2A1: ;
    eax = esi;
    PUSH32(esp, 0); sub_003BBFE0(); /* call 0x003BBFE0 */

loc_003BC2A8: ;
    MEM8(esi + 0x41) = LO8(eax);
    esp += 4; return; /* ret */

loc_003BC2AC: ;
    eax = esi;
    PUSH32(esp, 0); sub_003BBE00(); /* call 0x003BBE00 */

loc_003BC2B3: ;
    MEM8(esi + 0x41) = LO8(eax);
    esp += 4; return; /* ret */

loc_003BC2B7: ;
    MEM8(esi + 0x41) = 0;

loc_003BC2BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BC2C0
 * Original: 0x003BC2C0 - 0x003BC84D (1421 bytes, 376 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BC2C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x863D08);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (TEST_Z(eax, eax)) goto loc_003BC848; /* je: equal / zero */

loc_003BC2D1: ;
    eax = MEM32(ebp + 0x50);
    if (CMP_NE(MEM32(eax + 0x64), 0x2D)) goto loc_003BC848; /* jne: not equal / not zero */

loc_003BC2DE: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = ebp;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x44), _icall_esp); /* indirect call */
    }

loc_003BC2FB: ;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0x138)) goto loc_003BC77D; /* je: equal / zero */

loc_003BC309: ;
    if (CMP_EQ(eax, 0xC5)) goto loc_003BC77D; /* je: equal / zero */

loc_003BC314: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x24), _icall_esp); /* indirect call */
    }

loc_003BC31D: ;
    MEM8(edi + 0x1B7) = 0x19;
    MEM8(edi + 0x250) = 0;
    eax = MEM32(ebp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_003BC342; /* je: equal / zero */

loc_003BC332: ;
    if (CMP_EQ(eax, 1)) goto loc_003BC342; /* je: equal / zero */

loc_003BC337: ;
    eax = MEM32(edi + 0x468);
    eax = eax & 0xFFFFFFF7u;
    goto loc_003BC34B;

loc_003BC342: ;
    eax = MEM32(edi + 0x468);
    eax = eax | 8;

loc_003BC34B: ;
    xmm0 = MEMF(edi + 0x110); /* movss */
    MEM32(edi + 0x468) = eax;
    eax = MEM32(edi + 0x200);
    eax = eax & 0xFFFFFFFBu;
    eax = eax | 0x80;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEM32(edi + 0x200) = eax;
    if ((xmm0 <= MEMF(0x648D14))) goto loc_003BC37F; /* jbe: below or equal (unsigned <=) */

loc_003BC376: ;
    eax = eax | 4;
    MEM32(edi + 0x200) = eax;

loc_003BC37F: ;
    eax = MEM32(edi + 0x468);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    (void)0; /* cmp MEM32(ebp + 0x30), 3 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ebp + 0x30), 3)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) - 1);
    MEM8(edi + 0x444) = 0x38;
    MEM32(edi + 0x204) = 0xA7;
    MEM8(edi + 0x17A) = 1;
    ecx = ecx & 0xA;
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEM8(edi + 0x20C) = LO8(ecx);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_003BC3E4; /* je: equal / zero */

loc_003BC3BA: ;
    eax = eax & 0xFFFFFFBFu;
    MEM32(edi + 0x468) = eax;
    edx = MEM32(esi + 0x78);
    MEM32(edi + 0x84) = edx;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, 0x870ED4);
    ecx = edi;
    MEM32(edi + 0x8C) = eax;
    PUSH32(esp, 0); sub_00055700(); /* call 0x00055700 */

loc_003BC3E4: ;
    SET_LO8(eax, MEM8(edi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BC564; /* je: equal / zero */

loc_003BC3F2: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(edi + 0x238);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    edx = MEM32(ecx + esi + -1176);
    esi = ecx + esi + -1744;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0); sub_0004DFE0(); /* call 0x0004DFE0 */

loc_003BC41C: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    ebx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_003BC427: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BC468; /* je: equal / zero */

loc_003BC42B: ;
    eax = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00306280(); /* call 0x00306280 */

loc_003BC436: ;
    xmm0 = MEMF(0x648D20); /* movss */
    edx = MEM32(ebp);
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    MEM8(ebp + 0x2C) = 0;
    MEMF(ebp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BC457: ;
    eax = MEM32(esi + 0xD0);
    MEM32(edi + 0xD0) = eax;
    goto loc_003BC564;

loc_003BC468: ;
    eax = MEM32(ebx + 0x178);
    if (TEST_Z(eax, eax)) goto loc_003BC564; /* je: equal / zero */

loc_003BC476: ;
    SET_LO8(eax, MEM8(edi + 0xB4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BC564; /* je: equal / zero */

loc_003BC484: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x3C), _icall_esp); /* indirect call */
    }

loc_003BC48C: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BC564; /* je: equal / zero */

loc_003BC494: ;
    if (CMP_EQ(MEM32(ebp + 0x30), 2)) goto loc_003BC55D; /* je: equal / zero */

loc_003BC49E: ;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0x132)) goto loc_003BC507; /* je: equal / zero */

loc_003BC4A8: ;
    if (CMP_EQ(eax, 0xC6)) goto loc_003BC507; /* je: equal / zero */

loc_003BC4AF: ;
    if (CMP_EQ(eax, 0x135)) goto loc_003BC4C1; /* je: equal / zero */

loc_003BC4B6: ;
    if (CMP_NE(eax, 0x105)) goto loc_003BC55D; /* jne: not equal / not zero */

loc_003BC4C1: ;
    eax = MEM32(0x847024);
    ebx = MEM32(eax + 0x40);
    esi = edi;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_003BC4D0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BC55D; /* je: equal / zero */

loc_003BC4D8: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003BC4FA; /* je: equal / zero */

loc_003BC4E2: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    ecx = 0xC5E;
    goto loc_003BC542;

loc_003BC4FA: ;
    eax = MEM32(edi + 0x580);
    ecx = 0xC5E;
    goto loc_003BC542;

loc_003BC507: ;
    eax = MEM32(0x847024);
    ebx = MEM32(eax + 0x40);
    esi = edi;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_003BC516: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BC55D; /* je: equal / zero */

loc_003BC51A: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003BC537; /* je: equal / zero */

loc_003BC524: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_003BC53D;

loc_003BC537: ;
    eax = MEM32(edi + 0x580);

loc_003BC53D: ;
    ecx = 0xC5D;

loc_003BC542: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edx = edi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_003BC55D: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_003BD7E0(); /* call 0x003BD7E0 */

loc_003BC564: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003BD5B0(); /* call 0x003BD5B0 */

loc_003BC56B: ;
    SET_LO16(eax, MEM16(edi + 0x174));
    xmm0 = xmm0 - MEMF(edi + 0x1C0); /* subss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x1C0); /* addss */
    SET_LO16(eax, LO16(eax) + 0x4000);
    ecx = SX16(LO16(eax));
    MEMF(edi + 0x1C0) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    eax = edi;
    MEMF(edi + 0x114) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002E9550(); /* call 0x002E9550 */

loc_003BC5B4: ;
    ecx = MEM32(ebp + 0x30);
    (void)0; /* cmp ecx, 3 - flags set for next jcc */
    xmm1 = 0.0f; /* xorps self = zero */
    POP32(esp, ebx);
    if (CMP_EQ(ecx, 3)) goto loc_003BC5DE; /* je: equal / zero */

loc_003BC5C0: ;
    xmm0 = MEMF(ebp + 0x88); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003BC5DE; /* jp: parity */

loc_003BC5D1: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002EA190(); /* call 0x002EA190 */

loc_003BC5D9: ;
    esp = esp + 8;
    goto loc_003BC610;

loc_003BC5DE: ;
    xmm0 = MEMF(ebp + 0x88); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x88) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_003BC613; /* jbe: below or equal (unsigned <=) */

loc_003BC5F9: ;
    (void)0; /* cmp ecx, 8 - flags set for next jcc */
    MEMF(ebp + 0x88) = xmm1; /* movss */
    if (CMP_NE(ecx, 8)) goto loc_003BC613; /* jne: not equal / not zero */

loc_003BC606: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BC610: ;
    xmm1 = 0.0f; /* xorps self = zero */

loc_003BC613: ;
    if (CMP_NE(MEM32(ebp + 0x30), 3)) goto loc_003BC645; /* jne: not equal / not zero */

loc_003BC619: ;
    xmm0 = MEMF(ebp + 0x84); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003BC645; /* jnp: not parity */

loc_003BC62A: ;
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x84) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_003BC645; /* jbe: below or equal (unsigned <=) */

loc_003BC63D: ;
    MEMF(ebp + 0x84) = xmm1; /* movss */

loc_003BC645: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003BC64D: ;
    if (TEST_NZ(eax, eax)) goto loc_003BC676; /* jne: not equal / not zero */

loc_003BC651: ;
    eax = MEM32(ebp + 0x30);
    if (CMP_NE(eax, 6)) goto loc_003BC664; /* jne: not equal / not zero */

loc_003BC659: ;
    MEM16(edi + 0x3AE) = 0;
    goto loc_003BC676;

loc_003BC664: ;
    if (CMP_NE(eax, 7)) goto loc_003BC676; /* jne: not equal / not zero */

loc_003BC669: ;
    MEM16(edi + 0x3AE) = 0;
    MEM8(ebp + 0x42) = 1;

loc_003BC676: ;
    if (CMP_A(MEM16(edi + 0x3AE), 0)) goto loc_003BC718; /* ja: above (unsigned >) */

loc_003BC684: ;
    SET_LO8(ecx, MEM8(edi + 0x209));
    SET_LO8(ecx, LO8(ecx) | 0x40);
    MEM8(edi + 0xB4) = 0;
    MEM8(edi + 0x209) = LO8(ecx);
    MEM8(edi + 0x234) = 0xFF;
    eax = MEM32(ebp + 0x68);
    SET_LO16(ecx, ZX8(MEM8(eax + 0x12)));
    SET_LO16(edx, ZX8(MEM8(eax + 0x11)));
    eax = ecx + edx;
    MEM16(edi + 0x3B0) = LO16(eax);
    MEM16(edi + 0x3AE) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + 0x42));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BC6E7; /* jne: not equal / not zero */

loc_003BC6C6: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003BD3D0(); /* call 0x003BD3D0 */

loc_003BC6CD: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003BC6D5: ;
    if (TEST_NZ(eax, eax)) goto loc_003BC718; /* jne: not equal / not zero */

loc_003BC6D9: ;
    esi = ebp;
    PUSH32(esp, 0); sub_003B83F0(); /* call 0x003B83F0 */

loc_003BC6E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_003BC6E7: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BC6F2: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_003BC6FA: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = ebp;
    MEMF(ebp + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BC714: ;
    MEM8(ebp + 0x42) = 2;

loc_003BC718: ;
    eax = MEM32(ebp + 0x30);
    if (CMP_EQ(eax, 4)) goto loc_003BC725; /* je: equal / zero */

loc_003BC720: ;
    if (CMP_NE(eax, 5)) goto loc_003BC799; /* jne: not equal / not zero */

loc_003BC725: ;
    SET_LO8(eax, MEM8(ebp + 0x40));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BC799; /* jne: not equal / not zero */

loc_003BC72C: ;
    SET_LO8(eax, MEM8(ebp + 0x42));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BC73D; /* jne: not equal / not zero */

loc_003BC733: ;
    SET_LO8(eax, MEM8(ebp + 0x5CE));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BC751; /* je: equal / zero */

loc_003BC73D: ;
    xmm0 = MEMF(0x649430); /* movss */
    MEMF(edi + 0x7C) = xmm0; /* movss */
    MEM8(edi + 0xB4) = 0;

loc_003BC751: ;
    xmm0 = MEMF(ebp + 0x8C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x8C) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_003BC799; /* jb: below (unsigned <) */

loc_003BC76F: ;
    esi = ebp;
    PUSH32(esp, 0); sub_003B83F0(); /* call 0x003B83F0 */

loc_003BC776: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_003BC77D: ;
    MEM8(edi + 0x234) = 0xFF;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = ebp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BC78E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0xD4) = xmm0; /* movss */

loc_003BC799: ;
    esi = ebp;
    PUSH32(esp, 0); sub_003BC270(); /* call 0x003BC270 */

loc_003BC7A0: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003BDA40(); /* call 0x003BDA40 */

loc_003BC7A7: ;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0x132)) goto loc_003BC7C6; /* je: equal / zero */

loc_003BC7B1: ;
    if (CMP_EQ(eax, 0xC6)) goto loc_003BC7C6; /* je: equal / zero */

loc_003BC7B8: ;
    if (CMP_EQ(eax, 0x135)) goto loc_003BC7C6; /* je: equal / zero */

loc_003BC7BF: ;
    if (CMP_NE(eax, 0x105)) goto loc_003BC7D4; /* jne: not equal / not zero */

loc_003BC7C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000532D0(); /* call 0x000532D0 */

loc_003BC7D1: ;
    esp = esp + 8;

loc_003BC7D4: ;
    esi = ebp;
    PUSH32(esp, 0); sub_003B82B0(); /* call 0x003B82B0 */

loc_003BC7DB: ;
    PUSH32(esp, 0); sub_003B6040(); /* call 0x003B6040 */

loc_003BC7E0: ;
    eax = ebp;
    PUSH32(esp, 0); sub_003BD1A0(); /* call 0x003BD1A0 */

loc_003BC7E7: ;
    if (CMP_NE(MEM32(ebp + 0x30), 3)) goto loc_003BC809; /* jne: not equal / not zero */

loc_003BC7ED: ;
    eax = MEM32(ebp + 0x50);
    eax = eax + 0x78;
    edx = MEM32(eax);
    ecx = ebp + 0x5D0;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;

loc_003BC809: ;
    ecx = MEM32(ebp + 0x50);
    SET_LO8(eax, MEM8(ecx + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BC831; /* je: equal / zero */

loc_003BC816: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = edx + eax + -1744;
    MEM32(ebp + 0x5DC) = ecx;

loc_003BC831: ;
    xmm0 = MEMF(edi + 0x7C); /* movss */
    /* comiss xmm0, MEMF(0x64B404) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x64B404))) goto loc_003BC846; /* jbe: below or equal (unsigned <=) */

loc_003BC83F: ;
    MEM8(edi + 0xB4) = 0;

loc_003BC846: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003BC848: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BC850
 * Original: 0x003BC850 - 0x003BC8E1 (145 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BC850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BC850: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebx + 0x60));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BC88E; /* je: equal / zero */

loc_003BC861: ;
    esi = MEM32(ebx + 0x5C);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_003BC874; /* je: equal / zero */

loc_003BC869: ;
    SET_LO16(eax, MEM16(ebx + 0x5A));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_003BC872: ;
    goto loc_003BC880;

loc_003BC874: ;
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0x5A);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_003BC880: ;
    if (TEST_Z(eax, eax)) goto loc_003BC892; /* je: equal / zero */

loc_003BC884: ;
    SET_LO8(eax, MEM8(eax + 0x60));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ebp + 0x41) = LO8(eax);
    goto loc_003BC892;

loc_003BC88E: ;
    MEM8(ebp + 0x41) = 0;

loc_003BC892: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, 0x132)) { sub_003BC8E1(); return; } /* je: equal / zero */

loc_003BC8A0: ;
    if (CMP_EQ(eax, 0xC6)) { sub_003BC8E1(); return; } /* je: equal / zero */

loc_003BC8A7: ;
    if (CMP_EQ(eax, 0x135)) { sub_003BC8E1(); return; } /* je: equal / zero */

loc_003BC8AE: ;
    if (CMP_EQ(eax, 0x105)) { sub_003BC8E1(); return; } /* je: equal / zero */

loc_003BC8B5: ;
    ecx = ZX8(MEM8(ebp + 0x1C));
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    MEMF(ebp + 0x14) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    POP32(esp, esi);
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(ebp + 0x18) = xmm1; /* movss */
    MEM8(ebp + 0x1C) = 1;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BCAC0
 * Original: 0x003BCAC0 - 0x003BCB0A (74 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCAC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003BCAC0: ;
    eax = MEM32(esp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x648D20); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x2C) = 0;
    MEMF(esi + 0x88) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) { sub_003BCB0A(); return; } /* je: equal / zero */

loc_003BCADF: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEMF(esi + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BCAF6: ;
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esi + 0x84) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BCB20
 * Original: 0x003BCB20 - 0x003BCB30 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCB20(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BCB20: ;
    eax = MEM32(ecx + 0x30);
    if (CMP_EQ(eax, 4)) { sub_003BCB30(); return; } /* je: equal / zero */

loc_003BCB28: ;
    if (CMP_EQ(eax, 5)) { sub_003BCB30(); return; } /* je: equal / zero */

loc_003BCB2D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003BCB40
 * Original: 0x003BCB40 - 0x003BCB4B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCB40(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BCB40: ;
    eax = MEM32(eax + 0x570);
    if (TEST_NZ(eax, eax)) { sub_003BCB4B(); return; } /* jne: not equal / not zero */

loc_003BCB4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BCB60
 * Original: 0x003BCB60 - 0x003BCBF0 (144 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCB60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003BCB60: ;
    eax = MEM32(esp + 0x10);
    esp = esp - 8;
    (void)0; /* cmp eax, 0x4F - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = MEM32(edi + 0x570);
    if (CMP_NE(eax, 0x4F)) goto loc_003BCBC6; /* jne: not equal / not zero */

loc_003BCB78: ;
    if (CMP_NE(MEM32(esi + 0x30), 3)) goto loc_003BCBC6; /* jne: not equal / not zero */

loc_003BCB7E: ;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0x132)) goto loc_003BCB9D; /* je: equal / zero */

loc_003BCB88: ;
    if (CMP_EQ(eax, 0xC6)) goto loc_003BCB9D; /* je: equal / zero */

loc_003BCB8F: ;
    if (CMP_EQ(eax, 0x135)) goto loc_003BCB9D; /* je: equal / zero */

loc_003BCB96: ;
    if (CMP_NE(eax, 0x105)) goto loc_003BCBC6; /* jne: not equal / not zero */

loc_003BCB9D: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00134EF0(); /* call 0x00134EF0 */

loc_003BCBAA: ;
    xmm0 = MEMF(0x64908C); /* movss */
    edx = MEM32(esi);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = esi;
    MEMF(esi + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BCBC6: ;
    SET_LO8(eax, MEM8(edi + 0x10B));
    PUSH32(esp, 0x5B);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_003BCBE7: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003BCBF0
 * Original: 0x003BCBF0 - 0x003BCC65 (117 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;

loc_003BCBF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003BCC53; /* je: equal / zero */

loc_003BCC0B: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_003BCC44: ;
    esp = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003BCC53: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003BCC61: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003BCC70
 * Original: 0x003BCC70 - 0x003BCCE5 (117 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCC70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;

loc_003BCC70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003BCCD3; /* je: equal / zero */

loc_003BCC8B: ;
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_003BCCC4: ;
    esp = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003BCCD3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003BCCE1: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003BCCF0
 * Original: 0x003BCCF0 - 0x003BCD65 (117 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCCF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;

loc_003BCCF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003BCD53; /* je: equal / zero */

loc_003BCD0B: ;
    xmm0 = MEMF(eax + 0x70); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_003BCD44: ;
    esp = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003BCD53: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_003BCD61: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003BCD70
 * Original: 0x003BCD70 - 0x003BCD7D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCD70(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BCD70: ;
    if (CMP_EQ(MEM32(ecx + 0x30), 5)) goto loc_003BCD7A; /* je: equal / zero */

loc_003BCD76: ;
    MEM8(ecx + 0x42) = 1;

loc_003BCD7A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BCD80
 * Original: 0x003BCD80 - 0x003BCF3F (447 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCD80(void)
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

loc_003BCD80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x134;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = eax;
    eax = esi + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0x132 - flags set for next jcc */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    if (CMP_EQ(eax, 0x132)) goto loc_003BCDCD; /* je: equal / zero */

loc_003BCDB8: ;
    if (CMP_EQ(eax, 0xC6)) goto loc_003BCDCD; /* je: equal / zero */

loc_003BCDBF: ;
    if (CMP_EQ(eax, 0x135)) goto loc_003BCDCD; /* je: equal / zero */

loc_003BCDC6: ;
    if (CMP_NE(eax, 0x105)) goto loc_003BCDD5; /* jne: not equal / not zero */

loc_003BCDCD: ;
    xmm0 = MEMF(0x648E38); /* movss */

loc_003BCDD5: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    SET_LO8(eax, MEM8(edi + 0xBC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BCF36; /* jne: not equal / not zero */

loc_003BCDF3: ;
    eax = edi;
    MEM8(edi + 0xBC) = 1;
    PUSH32(esp, 0); sub_003BD9F0(); /* call 0x003BD9F0 */

loc_003BCE01: ;
    eax--;
    if ((eax == 0)) goto loc_003BCE12; /* je: equal / zero */

loc_003BCE04: ;
    eax--;
    if ((eax == 0)) goto loc_003BCE12; /* je: equal / zero */

loc_003BCE07: ;
    eax--;
    xmm0 = MEMF(0x59D948); /* movss */
    if ((eax == 0)) goto loc_003BCE1A; /* je: equal / zero */

loc_003BCE12: ;
    xmm0 = MEMF(0x6493C8); /* movss */

loc_003BCE1A: ;
    PUSH32(esp, 0x4100000);
    ecx = 0x639;
    eax = 0x642000;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_003BCE34: ;
    esp = esp + 4;
    MEM32(esp + 0x18) = 0;
    edi = edi + 0xBE;

loc_003BCE45: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    ebx = 0; /* xor self */
    MEM32(esp + 0x1C) = ebx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fcos  */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */

loc_003BCE63: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    /* fld st(0) */
    /* FPU: fsin  */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = esp + 0x70;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x64) = (float)fp_top(); fp_popp(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcos  */
    MEMF(esp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_003BCEBB: ;
    eax = MEM32(esp + 0x154);
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_003BCEEA; /* je: equal / zero */

loc_003BCEC9: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, MEMF(esp + 0x44) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_003BCEEA; /* jbe: below or equal (unsigned <=) */

loc_003BCED6: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003BCEE5: ;
    MEM16(edi) = LO16(eax);
    goto loc_003BCEEF;

loc_003BCEEA: ;
    MEM16(edi) = 0x5DC;

loc_003BCEEF: ;
    ebx = ebx + 0xA;
    edi = edi + 2;
    (void)0; /* cmp ebx, 0xB4 - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_L(ebx, 0xB4)) goto loc_003BCE63; /* jl: less (signed <) */

loc_003BCF05: ;
    eax = MEM32(esp + 0x18);
    eax = eax + 0xA;
    (void)0; /* cmp eax, 0x168 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, 0x168)) goto loc_003BCE45; /* jl: less (signed <) */

loc_003BCF1B: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;

loc_003BCF36: ;
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
 * sub_003BCF40
 * Original: 0x003BCF40 - 0x003BCFCE (142 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BCF40: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ebx;
    esi = ecx;
    PUSH32(esp, 0); sub_003BCD80(); /* call 0x003BCD80 */

loc_003BCF4F: ;
    ecx = MEM32(esi);
    xmm1 = MEMF(0x648D14); /* movss */
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    xmm5 = MEMF(0x648D34); /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 / MEMF(esp + 0x34); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    esi = MEM32(esp + 0x18);
    xmm2 = xmm0; /* movaps */
    MEM32(esp + 0x1C) = edx;
    xmm2 = xmm2 * MEMF(esp + 0x1C); /* mulss */
    MEM32(esp + 0x20) = eax;
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0; /* movss */
    edi = MEM32(esp + 0x20);
    MEM32(esp + 0x28) = ecx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x2C) = edi;
    if ((xmm5 <= xmm0)) { sub_003BCFCE(); return; } /* jbe: below or equal (unsigned <=) */

loc_003BCFC9: ;
    xmm0 = xmm5; /* movaps */
    g_seh_ebp = ebp; sub_003BCFD6(); return; /* tail jmp 0x003BCFD6 */

}

/**
 * sub_003BD1A0
 * Original: 0x003BD1A0 - 0x003BD3B1 (529 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD1A0(void)
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

loc_003BD1A0: ;
    esp = esp - 0x208;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x84B49D));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_003BD3A8; /* je: equal / zero */

loc_003BD1B9: ;
    eax = MEM32(0x8470DC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x50);
    ebp = esi + 0x78;
    eax = eax + 0x330;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_003BD1D2: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(0x648EB8); /* subss */
    xmm1 = xmm1 * MEMF(0x648EB4); /* mulss */
    xmm1 = xmm1 * MEMF(0x648EB0); /* mulss */
    xmm0 = MEMF(0x75ECB0); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D3C); /* movss */
    esp = esp + 8;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003BD216; /* ja: above (unsigned >) */

loc_003BD209: ;
    xmm1 = MEMF(0x648EAC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003BD219; /* jbe: below or equal (unsigned <=) */

loc_003BD216: ;
    xmm0 = xmm1; /* movaps */

loc_003BD219: ;
    if (CMP_LE(MEM32(0x84A144), ebx)) goto loc_003BD229; /* jle: less or equal (signed <=) */

loc_003BD221: ;
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */

loc_003BD229: ;
    xmm1 = MEMF(0x648E68); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003BD239; /* jbe: below or equal (unsigned <=) */

loc_003BD236: ;
    xmm0 = xmm1; /* movaps */

loc_003BD239: ;
    eax = ZX16(MEM16(esi + 0x60));
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_003BD249; /* jns: not sign (positive) */

loc_003BD244: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_003BD249: ;
    if (CMP_A(eax, 3)) goto loc_003BD298; /* ja: above (unsigned >) */

loc_003BD24E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3BD3B4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003BD255u) goto loc_003BD255;
    if (_jt == 0x003BD25Eu) goto loc_003BD25E;
    if (_jt == 0x003BD26Du) goto loc_003BD26D;
    if (_jt == 0x003BD281u) goto loc_003BD281;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003BD255: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x77616F) = LO8(eax);
    goto loc_003BD289;

loc_003BD25E: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(ebx);
    MEM8(0x77616F) = LO8(eax);
    goto loc_003BD28E;

loc_003BD26D: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(ebx);
    MEM8(0x77616F) = LO8(eax);
    goto loc_003BD293;

loc_003BD281: ;
    SET_LO8(eax, 0xFF);
    MEM8(0x77616F) = LO8(ebx);

loc_003BD289: ;
    MEM8(0x776171) = LO8(eax);

loc_003BD28E: ;
    MEM8(0x776170) = LO8(eax);

loc_003BD293: ;
    MEM8(0x77616E) = LO8(eax);

loc_003BD298: ;
    (void)0; /* cmp MEM8(0x7819D5), LO8(ebx) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_003BD2B8; /* je: equal / zero */

loc_003BD2A8: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_003BD2B8: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_003BD2BF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = 0x641C74;
    if (TEST_NZ(eax, eax)) goto loc_003BD2CD; /* jne: not equal / not zero */

loc_003BD2C8: ;
    eax = 0x641C64;

loc_003BD2CD: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xAC);
    fp_push(MEMF(edi + 0x6C)); /* fld float */
    esp = esp - 8;
    edx = esp + 0x28;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x641FA8);
    PUSH32(esp, 0xFA);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004704E6(); /* call 0x004704E6 */

loc_003BD2F4: ;
    edx = MEM32(esi + 0x80);
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    esp = esp + 0x20;
    PUSH32(esp, 0x46EA6000);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(ebp); /* movss */
    edi = esp + 0x24;
    ebx = esp + 0x28;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_003BD332: ;
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_003BD358; /* je: equal / zero */

loc_003BD33B: ;
    ecx = (int32_t)MEMF(esp + 8); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_003BD355: ;
    esp = esp + 0xC;

loc_003BD358: ;
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = LO8(eax);
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BD397; /* je: equal / zero */

loc_003BD387: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_003BD397: ;
    eax = 0x14;
    MEM16(0x776168) = LO16(eax);
    MEM16(0x776164) = LO16(eax);

loc_003BD3A8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x208;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003BD3D0
 * Original: 0x003BD3D0 - 0x003BD57D (429 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD3D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003BD3D0: ;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x5CE));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_003BD577; /* jne: not equal / not zero */

loc_003BD3E7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = esi;
    MEM8(esi + 0x5CE) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BD3F7: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x437A0000);
    MEMF(esi + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0x3F800000);
    esi = esi + 0x5D0;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_003BD422: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003BD427: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_003BD433; /* jns: not sign (positive) */

loc_003BD42E: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_003BD433: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esi);
    xmm1 = MEMF(0x648D1C); /* movss */
    edx = MEM32(esi + 4);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x6493B0); /* movss */
    eax = eax + 3;
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0E8); /* movss */
    PUSH32(esp, 0xFF);
    MEM32(esp + 0x30) = ecx;
    MEM16(esp + 0x2C) = LO16(eax);
    eax = MEM32(esi + 8);
    ecx = esp + 0x28;
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM16(esp + 0x44) = 0x15E;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEM8(esp + 0x90) = LO8(ebx);
    MEM8(esp + 0x88) = 1;
    MEM8(esp + 0x89) = LO8(ebx);
    MEM8(esp + 0x8A) = LO8(ebx);
    MEM16(esp + 0x8C) = 0x64;
    MEM16(esp + 0x8E) = 0x32;
    MEM16(esp + 0x4C) = LO16(ebx);
    MEM16(esp + 0x4E) = LO16(ebx);
    MEM16(esp + 0x50) = LO16(ebx);
    MEM16(esp + 0x52) = LO16(ebx);
    MEM16(esp + 0x92) = 1;
    MEM32(esp + 0x30) = 0x2D;
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_003BD55B: ;
    PUSH32(esp, 0xFF);
    edx = esp + 0x34;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = 0x2E;
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_003BD574: ;
    esp = esp + 0x34;

loc_003BD577: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD580
 * Original: 0x003BD580 - 0x003BD5AD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD580(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BD580: ;
    edx = MEM32(ecx + 0x30);
    eax = MEM32(esp + 4);
    if (CMP_EQ(eax, edx)) goto loc_003BD5AA; /* je: equal / zero */

loc_003BD58B: ;
    if (CMP_L(eax, 2)) goto loc_003BD5A3; /* jl: less (signed <) */

loc_003BD590: ;
    if (CMP_G(eax, 3)) goto loc_003BD599; /* jg: greater (signed >) */

loc_003BD595: ;
    MEM8(ecx + 0x2C) = 0;

loc_003BD599: ;
    if (CMP_NE(eax, 2)) goto loc_003BD5A3; /* jne: not equal / not zero */

loc_003BD59E: ;
    if (CMP_EQ(edx, 3)) goto loc_003BD5AA; /* je: equal / zero */

loc_003BD5A3: ;
    if (CMP_EQ(eax, edx)) goto loc_003BD5AA; /* je: equal / zero */

loc_003BD5A7: ;
    MEM32(ecx + 0x30) = eax;

loc_003BD5AA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BD5B0
 * Original: 0x003BD5B0 - 0x003BD7DB (555 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BD5B0: ;
    esp = esp - 8;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x30);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    esi = MEM32(edi + 0x50);
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (CMP_NE(eax, 2)) goto loc_003BD6A7; /* jne: not equal / not zero */

loc_003BD5D1: ;
    xmm0 = MEMF(edi + 0xA8); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    ebx = 0; /* xor self */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(esp + 0x10) = ebx;
    MEMF(edi + 0xA8) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_003BD7A8; /* jb: below (unsigned <) */

loc_003BD5F8: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BD601: ;
    ecx = MEM32(0x847024);
    ebp = MEM32(ecx + 0x40);
    edi = MEM32(ebp + 4);
    edx = MEM32(edi);
    ecx = 0; /* xor self */

loc_003BD611: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_003BD637; /* je: equal / zero */

loc_003BD617: ;
    if (CMP_EQ(MEM8(eax + 8), 0)) goto loc_003BD636; /* je: equal / zero */

loc_003BD61D: ;
    if (CMP_NE(MEM32(eax + 0x2C), 0x8ED)) goto loc_003BD636; /* jne: not equal / not zero */

loc_003BD626: ;
    if (CMP_NE(MEM32(eax + 0x30), 0)) goto loc_003BD636; /* jne: not equal / not zero */

loc_003BD62C: ;
    if (CMP_EQ(MEM32(eax + 0x24), esi)) goto loc_003BD64A; /* je: equal / zero */

loc_003BD631: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_003BD64A; /* je: equal / zero */

loc_003BD636: ;
    ebx++;

loc_003BD637: ;
    if (CMP_EQ(ebx, MEM32(edi + 8))) goto loc_003BD652; /* je: equal / zero */

loc_003BD63C: ;
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, 0x80)) goto loc_003BD611; /* jl: less (signed <) */

loc_003BD648: ;
    goto loc_003BD652;

loc_003BD64A: ;
    if (CMP_GE(ecx & ecx, 0)) goto loc_003BD7A8; /* jge: greater or equal (signed >=) */

loc_003BD652: ;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_003BD657: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BD7A8; /* je: equal / zero */

loc_003BD65F: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003BD67C; /* je: equal / zero */

loc_003BD669: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_003BD682;

loc_003BD67C: ;
    eax = MEM32(esi + 0x580);

loc_003BD682: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esi + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    edx = 0x8ED;
    PUSH32(esp, ebp);
    eax = esi;
    ecx = edx;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_003BD6A2: ;
    goto loc_003BD7A8;

loc_003BD6A7: ;
    if (CMP_EQ(eax, 3)) goto loc_003BD795; /* je: equal / zero */

loc_003BD6B0: ;
    SET_LO8(eax, MEM8(esi + 0x251));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BD758; /* je: equal / zero */

loc_003BD6C6: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    PUSH32(esp, esi);
    ebx = ecx + edx + -1744;
    MEM16(esi + 0x21A) = 0xBB8;
    PUSH32(esp, 0); sub_002E6400(); /* call 0x002E6400 */

loc_003BD6EB: ;
    SET_LO8(eax, MEM8(ebx + 0x20C));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BD701; /* je: equal / zero */

loc_003BD6F8: ;
    if (TEST_Z(MEM8(0x7FDD3C), 4)) goto loc_003BD719; /* je: equal / zero */

loc_003BD701: ;
    if (CMP_BE(MEM16(esi + 0x428), 8)) goto loc_003BD719; /* jbe: below or equal (unsigned <=) */

loc_003BD70B: ;
    xmm0 = MEMF(0x64938C); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_003BD719: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003BD720: ;
    if (TEST_Z(eax, eax)) goto loc_003BD738; /* je: equal / zero */

loc_003BD724: ;
    SET_LO8(eax, MEM8(edi + 0x2C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BD72F; /* jne: not equal / not zero */

loc_003BD72B: ;
    MEM8(edi + 0x2C) = 1;

loc_003BD72F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BD738: ;
    eax = ZX8(MEM8(esi + 0x251));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = ZX8(MEM8(eax + ecx + -1477));
    MEM32(edi + 0x34) = edx;
    goto loc_003BD7A8;

loc_003BD758: ;
    xmm0 = MEMF(esi + 0x110); /* movss */
    xmm0 = xmm0 * MEMF(0x6490A0); /* mulss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    if (CMP_NE(MEM8(edi + 0x2C), 1)) goto loc_003BD7A8; /* jne: not equal / not zero */

loc_003BD776: ;
    xmm0 = MEMF(0x648D20); /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    MEM8(edi + 0x2C) = 0;
    MEMF(edi + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BD793: ;
    goto loc_003BD7A8;

loc_003BD795: ;
    edx = MEM32(esi + 0xA4);
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edx, 2)) ? 1 : 0); /* sete */
    ecx++;
    MEM32(esp + 0x10) = ecx;

loc_003BD7A8: ;
    edx = MEM32(esp + 0x10);
    if (CMP_EQ(edx, MEM32(esi + 0xA4))) goto loc_003BD7CD; /* je: equal / zero */

loc_003BD7B4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_003BD7CA: ;
    esp = esp + 0x18;

loc_003BD7CD: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003BD7E0
 * Original: 0x003BD7E0 - 0x003BD9E6 (518 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD7E0(void)
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

loc_003BD7E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x50);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x5DC);
    if (TEST_Z(esi, esi)) goto loc_003BD9E3; /* je: equal / zero */

loc_003BD7F3: ;
    eax = MEM32(esi + 0x64);
    edx = 1;
    if (CMP_NE(eax, edx)) goto loc_003BD9E3; /* jne: not equal / not zero */

loc_003BD803: ;
    SET_LO8(eax, MEM8(ebx + 0x5E0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BD9E3; /* jne: not equal / not zero */

loc_003BD811: ;
    MEM8(ebx + 0x5E0) = LO8(edx);
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0xFFFF - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003BD89B; /* je: equal / zero */

loc_003BD822: ;
    if (CMP_GE(eax, 0x205)) goto loc_003BD89B; /* jge: greater or equal (signed >=) */

loc_003BD829: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_003BD89B; /* je: equal / zero */

loc_003BD830: ;
    edi = MEM32(ecx + 0x50);
    if (TEST_Z(edi, edi)) goto loc_003BD89B; /* je: equal / zero */

loc_003BD837: ;
    edi = MEM32(edi + 0x2A54);
    if (TEST_Z(edi, edi)) goto loc_003BD89B; /* je: equal / zero */

loc_003BD841: ;
    if (CMP_NE(edi, 0x3E7)) goto loc_003BD850; /* jne: not equal / not zero */

loc_003BD849: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003BD84E: ;
    goto loc_003BD89B;

loc_003BD850: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x387)) goto loc_003BD863; /* ja: above (unsigned >) */

loc_003BD85C: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003BD861: ;
    goto loc_003BD89B;

loc_003BD863: ;
    eax = MEM32(ecx + 0x50);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x2A58));
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F933333);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x2A5C);
    eax = MEM32(eax + 0x2A54);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x387);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_003BD898: ;
    esp = esp + 0x20;

loc_003BD89B: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(esi + 0xA4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ecx + 0x474) = edx;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(esi + 0xA4);
    MEM32(eax + 0x480) = ecx;
    eax = MEM32(esi + 0xA4);
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x484) = eax;
    edi = MEM32(esi + 0x568);
    SET_LO8(eax, 0xFF);
    MEM8(esi + 0x17D) = LO8(eax);
    MEM8(esi + 0x180) = LO8(eax);
    MEMF(esi + 0x110) = xmm0; /* movss */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003BD8FE: ;
    MEM16(esi + 0x170) = MEM16(esi + 0x170) + LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x170));
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM16(esi + 0x174) = LO16(eax);
    MEMF(edi + 0x14) = xmm0; /* movss */
    ecx = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx++;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3E2AAAAB);
    PUSH32(esp, 0x306360);
    PUSH32(esp, 0); sub_0030F240(); /* call 0x0030F240 */

loc_003BD939: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM8(ebx + 0x2C) = 0;
    MEMF(ebx + 0x84) = xmm0; /* movss */
    edi = MEM32(ebp + 0x23C);
    esp = esp + 0x20;
    eax = esi;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003BD95D: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BD9C9; /* je: equal / zero */

loc_003BD966: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BD9C9; /* jne: not equal / not zero */

loc_003BD96F: ;
    eax = MEM32(0x863D08);
    if (TEST_Z(eax, eax)) goto loc_003BD9C9; /* je: equal / zero */

loc_003BD978: ;
    if (CMP_EQ(MEM32(ebx + 0x30), 3)) goto loc_003BD9C9; /* je: equal / zero */

loc_003BD97E: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_003BD985: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003BD995; /* je: equal / zero */

loc_003BD98C: ;
    PUSH32(esp, 0); sub_0027D3C0(); /* call 0x0027D3C0 */

loc_003BD991: ;
    esi = eax;
    goto loc_003BD997;

loc_003BD995: ;
    esi = 0; /* xor self */

loc_003BD997: ;
    MEM8(esi + 0x40) = 2;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0xAC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM32(esi + 0x3C) = edx;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003BD9B1: ;
    edi = MEM32(esi);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_003BD9BD: ;
    eax = MEM32(eax + 0x9DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 4), _icall_esp); /* indirect call */
    }

loc_003BD9C9: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BD9D2: ;
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(ebx + 0xA8) = xmm0; /* movss */
    POP32(esp, edi);

loc_003BD9E3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003BD9F0
 * Original: 0x003BD9F0 - 0x003BDA2F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD9F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BD9F0: ;
    ecx = MEM32(eax + 0x50);
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, 0x132)) { sub_003BDA2F(); return; } /* je: equal / zero */

loc_003BD9FD: ;
    if (CMP_EQ(eax, 0xC6)) { sub_003BDA2F(); return; } /* je: equal / zero */

loc_003BDA04: ;
    if (CMP_EQ(eax, 0x135)) goto loc_003BDA29; /* je: equal / zero */

loc_003BDA0B: ;
    if (CMP_EQ(eax, 0x105)) goto loc_003BDA29; /* je: equal / zero */

loc_003BDA12: ;
    if (CMP_EQ(eax, 0x138)) goto loc_003BDA23; /* je: equal / zero */

loc_003BDA19: ;
    if (CMP_EQ(eax, 0xC5)) goto loc_003BDA23; /* je: equal / zero */

loc_003BDA20: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003BDA23: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003BDA29: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_003BDA40
 * Original: 0x003BDA40 - 0x003BDD56 (790 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDA40(void)
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

loc_003BDA40: ;
    esp = esp - 0x38;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x41));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x50);
    MEMF(esp + 0xC) = xmm7; /* movss */
    MEMF(esp + 0x10) = xmm7; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003BDD56(); return; } /* je: equal / zero */

loc_003BDA72: ;
    ecx = MEM32(0x84A5F8);
    eax = SX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, ebp);
    ebp = eax + ecx + -1744;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_003BDBE5; /* je: equal / zero */

loc_003BDA97: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = edi;
    ebx = esp + 0x48;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_003BDAA9: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BDAC8; /* je: equal / zero */

loc_003BDAB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    eax = edi;
    ebx = esp + 0x30;
    PUSH32(esp, 0); sub_001A81B0(); /* call 0x001A81B0 */

loc_003BDAC1: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BDAD3; /* jne: not equal / not zero */

loc_003BDAC8: ;
    ecx = esp + 0x24;
    eax = edi;
    PUSH32(esp, 0); sub_003BB6B0(); /* call 0x003BB6B0 */

loc_003BDAD3: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    POP32(esp, ebx);

loc_003BDADD: ;
    fp_push(MEMF(ebp + 0x78)); /* fld float */
    xmm1 = MEMF(ebp + 0x7C); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm1 = xmm1 + MEMF(0x6490B8); /* addss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x80)); /* fld float */
    ecx = MEM32(esp + 0x2C);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003BDB1C: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    xmm0 = xmm0 - MEMF(edi + 0x114); /* subss */
    xmm3 = MEMF(0x648F60); /* movss */
    esp = esp + 8;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    POP32(esp, ebp);
    if ((xmm7 <= xmm0)) goto loc_003BDB49; /* jbe: below or equal (unsigned <=) */

loc_003BDB3D: ;
    /* nop */

loc_003BDB40: ;
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 > xmm0)) goto loc_003BDB40; /* ja: above (unsigned >) */

loc_003BDB49: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003BDB59; /* jbe: below or equal (unsigned <=) */

loc_003BDB4E: ;
    edi = edi;

loc_003BDB50: ;
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_003BDB50; /* ja: above (unsigned >) */

loc_003BDB59: ;
    eax = MEM32(edi + 0x68);
    (void)0; /* cmp eax, 0x138 - flags set for next jcc */
    xmm1 = MEMF(0x648D38); /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    if (CMP_EQ(eax, 0x138)) goto loc_003BDB78; /* je: equal / zero */

loc_003BDB71: ;
    if (CMP_NE(eax, 0xC5)) goto loc_003BDB86; /* jne: not equal / not zero */

loc_003BDB78: ;
    xmm1 = MEMF(0x6492E8); /* movss */
    MEMF(esp + 8) = xmm1; /* movss */

loc_003BDB86: ;
    /* comiss xmm7, MEMF(esi + 0x78) - sets EFLAGS */
    if ((xmm7 <= MEMF(esi + 0x78))) goto loc_003BDBA5; /* jbe: below or equal (unsigned <=) */

loc_003BDB8C: ;
    xmm2 = MEMF(esi + 0x78); /* movss */

loc_003BDB91: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm2 = xmm1; /* movaps */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    if ((xmm7 > xmm2)) goto loc_003BDB91; /* ja: above (unsigned >) */

loc_003BDBA0: ;
    MEMF(esi + 0x78) = xmm2; /* movss */

loc_003BDBA5: ;
    xmm1 = MEMF(esi + 0x78); /* movss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 < xmm3)) goto loc_003BDBC6; /* jb: below (unsigned <) */

loc_003BDBAF: ;
    xmm2 = xmm1; /* movaps */

loc_003BDBB2: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    xmm2 = xmm1; /* movaps */
    if ((xmm1 >= xmm3)) goto loc_003BDBB2; /* jae: above or equal (unsigned >=) */

loc_003BDBC1: ;
    MEMF(esi + 0x78) = xmm2; /* movss */

loc_003BDBC6: ;
    xmm1 = MEMF(esi + 0x78); /* movss */
    xmm6 = MEMF(0x648E6C); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    /* comiss xmm2, xmm6 - sets EFLAGS */
    if ((xmm2 < xmm6)) goto loc_003BDC15; /* jb: below (unsigned <) */

loc_003BDBDF: ;
    xmm0 = xmm0 - xmm3; /* subss */
    goto loc_003BDC26;

loc_003BDBE5: ;
    edx = edi + 0x78;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x24) = ecx;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 - MEMF(0x648E5C); /* subss */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    goto loc_003BDADD;

loc_003BDC15: ;
    xmm4 = MEMF(0x648F64); /* movss */
    /* comiss xmm4, xmm2 - sets EFLAGS */
    if ((xmm4 < xmm2)) goto loc_003BDC26; /* jb: below (unsigned <) */

loc_003BDC22: ;
    xmm1 = xmm1 - xmm3; /* subss */

loc_003BDC26: ;
    xmm5 = MEMF(0x7F9F5C); /* movss */
    xmm5 = xmm5 * MEMF(0x7FA21C); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 8); /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esi + 0x78) = xmm0; /* movss */
    if ((xmm0 <= xmm3)) goto loc_003BDC66; /* jbe: below or equal (unsigned <=) */

loc_003BDC60: ;
    xmm0 = xmm0 - xmm3; /* subss */
    goto loc_003BDC6F;

loc_003BDC66: ;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_003BDC74; /* jbe: below or equal (unsigned <=) */

loc_003BDC6B: ;
    xmm0 = xmm0 + xmm3; /* addss */

loc_003BDC6F: ;
    MEMF(esi + 0x78) = xmm0; /* movss */

loc_003BDC74: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x2C);
    xmm4 = MEMF(esi + 0x7C); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003BDCB8: ;
    xmm0 = xmm0 * MEMF(0x64934C); /* mulss */
    xmm1 = xmm0; /* movaps */
    esp = esp + 8;
    xmm1 = xmm1 - xmm4; /* subss */
    /* comiss xmm1, xmm6 - sets EFLAGS */
    if ((xmm1 < xmm6)) goto loc_003BDCD5; /* jb: below (unsigned <) */

loc_003BDCCF: ;
    xmm0 = xmm0 - xmm3; /* subss */
    goto loc_003BDCE6;

loc_003BDCD5: ;
    xmm2 = MEMF(0x648F64); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_003BDCE6; /* jb: below (unsigned <) */

loc_003BDCE2: ;
    xmm4 = xmm4 - xmm3; /* subss */

loc_003BDCE6: ;
    xmm4 = xmm4 - xmm0; /* subss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm4 = xmm4 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    if ((xmm0 <= xmm3)) goto loc_003BDD0D; /* jbe: below or equal (unsigned <=) */

loc_003BDD07: ;
    xmm0 = xmm0 - xmm3; /* subss */
    goto loc_003BDD16;

loc_003BDD0D: ;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 <= xmm0)) goto loc_003BDD1B; /* jbe: below or equal (unsigned <=) */

loc_003BDD12: ;
    xmm0 = xmm0 + xmm3; /* addss */

loc_003BDD16: ;
    MEMF(esi + 0x7C) = xmm0; /* movss */

loc_003BDD1B: ;
    SET_LO8(eax, MEM8(esi + 0x94));
    xmm0 = MEMF(0x648E38); /* movss */
    SET_LO8(ecx, 1);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEMF(esi + 0x98) = xmm0; /* movss */
    MEM8(esi + 0x94) = LO8(ecx);
    MEMF(esi + 0x90) = xmm7; /* movss */
    g_seh_ebp = ebp; sub_003BDE60(); return; /* tail jmp 0x003BDE60 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003BDEA0
 * Original: 0x003BDEA0 - 0x003BE37A (1242 bytes, 332 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BDEA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4;

loc_003BDEA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x50);
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BDEBF: ;
    ecx = eax;
    eax = MEM32(esi + 0xB0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x5C) = ecx;
    if (TEST_Z(eax, eax)) goto loc_003BE2A0; /* je: equal / zero */

loc_003BDED3: ;
    xmm0 = MEMF(eax + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA210); /* addss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    ecx = MEM32(esi + 0xB0);
    eax = MEM32(ecx + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003BDF0D; /* je: equal / zero */

loc_003BDEF2: ;
    edx = MEM32(ecx + 8);
    if (CMP_LE(edx & edx, 0)) goto loc_003BDF0D; /* jle: less or equal (signed <=) */

loc_003BDEF9: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ebx = MEM32(eax + edx + 0x64);
    if (TEST_NZ(ebx, ebx)) goto loc_003BDF3A; /* jne: not equal / not zero */

loc_003BDF0D: ;
    if (TEST_Z(ecx, ecx)) goto loc_003BDF17; /* je: equal / zero */

loc_003BDF11: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_003BDF17: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi + 0xB0) = 0;
    MEMF(esi + 0xAC) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003BDF3A: ;
    eax = MEM32(ecx + 8);
    if (CMP_LE(eax & eax, 0)) goto loc_003BE371; /* jle: less or equal (signed <=) */

loc_003BDF45: ;
    xmm0 = MEMF(ecx + 0x1C); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x18) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x18))) goto loc_003BE371; /* jbe: below or equal (unsigned <=) */

loc_003BDF54: ;
    xmm0 = xmm0 - MEMF(ecx + 0x18); /* subss */
    ebx = MEM32(ecx + 0x10);
    xmm1 = MEMF(0x648D14); /* movss */
    xmm4 = MEMF(0x648E18); /* movss */
    MEMF(ecx + 0x1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax--;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(ecx + 0xC);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x5C) = ecx;
    xmm0 = xmm0 * xmm4; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0x64;
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003BDFBD: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003BDFD2: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x114); /* addss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm4; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x64;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003BDFF4: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003BE007: ;
    xmm0 = MEMF(edi + 0x78); /* movss */
    xmm1 = MEMF(edi + 0x7C); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x80); /* movss */
    edx = esp + 0x40;
    eax = esp + 0x34;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x1C;
    edx = esp + 0x34;
    eax = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ZX8(MEM8(esi + 0xB8));
    eax = eax - 0;
    if ((eax == 0)) goto loc_003BE17E; /* je: equal / zero */

loc_003BE0BF: ;
    eax--;
    if ((eax != 0)) goto loc_003BE231; /* jne: not equal / not zero */

loc_003BE0C6: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x114); /* addss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm4; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x64;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003BE0E8: ;
    esp = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003BE0F9: ;
    xmm0 = MEMF(0x6497D4); /* movss */
    ecx = esp + 0x28;
    edx = esp + 0x34;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x1C;
    ecx = esp + 0x34;
    edx = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    goto loc_003BE231;

loc_003BE17E: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(edi + 0x114); /* addss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm4; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x64;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_003BE1A0: ;
    esp = esp + 4;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003BE1B3: ;
    xmm0 = MEMF(0x6490B0); /* movss */
    eax = esp + 0x28;
    ecx = esp + 0x34;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x1C;
    eax = ecx;
    ecx = edx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_003BE231: ;
    eax = MEM32(esp + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_003BE27A; /* je: equal / zero */

loc_003BE239: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + edx;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0030D330(); /* call 0x0030D330 */

loc_003BE25D: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003BBC90(); /* call 0x003BBC90 */

loc_003BE265: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = edi;
    ecx = 0xD40;
    PUSH32(esp, 0); sub_00024E50(); /* call 0x00024E50 */

loc_003BE27A: ;
    SET_LO8(edx, MEM8(esi + 0xB8));
    SET_LO8(edx, LO8(edx) + 1);
    eax = ZX8(LO8(edx));
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_003BE291; /* jns: not sign (positive) */

loc_003BE28C: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_003BE291: ;
    MEM8(esi + 0xB8) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003BE2A0: ;
    xmm0 = MEMF(esi + 0xAC); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003BE2C0; /* jbe: below or equal (unsigned <=) */

loc_003BE2B0: ;
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(esi + 0xAC) = xmm0; /* movss */

loc_003BE2C0: ;
    SET_LO8(eax, MEM8(esi + 0x41));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BE371; /* je: equal / zero */

loc_003BE2CB: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    /* comiss xmm0, MEMF(0x649368) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649368))) goto loc_003BE371; /* jbe: below or equal (unsigned <=) */

loc_003BE2DD: ;
    xmm2 = MEMF(0x648CE4); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_003BE371; /* jbe: below or equal (unsigned <=) */

loc_003BE2EE: ;
    if (TEST_Z(ecx, ecx)) goto loc_003BE371; /* je: equal / zero */

loc_003BE2F2: ;
    ecx = MEM32(ecx + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_003BE371; /* je: equal / zero */

loc_003BE2FC: ;
    if (CMP_EQ(MEM32(ecx + 0xBC), 2)) goto loc_003BE371; /* je: equal / zero */

loc_003BE305: ;
    /* comiss xmm1, MEMF(esi + 0xAC) - sets EFLAGS */
    if ((xmm1 < MEMF(esi + 0xAC))) goto loc_003BE371; /* jb: below (unsigned <) */

loc_003BE30E: ;
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(eax);
    ecx = MEM32(ecx * 4 + 0x800580);
    xmm0 = MEMF(ecx + 0xCC); /* movss */
    edi = MEM32(ecx + 0xC8);
    ebx = MEM32(eax + 0x50);
    PUSH32(esp, 0x20);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_003BE33B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003BE369; /* je: equal / zero */

loc_003BE342: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x41);
    edx = MEM32(esi + 0x50);
    xmm0 = MEMF(esp + 0x58); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx--;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00383E40(); /* call 0x00383E40 */

loc_003BE35A: ;
    MEM32(esi + 0xB0) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003BE369: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xB0) = eax;

loc_003BE371: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE380
 * Original: 0x003BE380 - 0x003BE3DD (93 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE380(void)
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

loc_003BE380: ;
    esp = esp - 0x40;
    xmm1 = MEMF(0x7F9F5C); /* movss */
    xmm1 = xmm1 * MEMF(0x7FA21C); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ebp = MEM32(esi + 0x50);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(esi + 0x6C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x70); /* addss */
    /* comiss xmm0, MEMF(0x59D948) - sets EFLAGS */
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esi + 0x70) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x59D948))) { sub_003BE3DD(); return; } /* jbe: below or equal (unsigned <=) */

loc_003BE3C3: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMD(0x649300)); /* fld double */
    PUSH32(esp, 0); sub_0047F05E(); /* call 0x0047F05E */

loc_003BE3D2: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_003BE404(); return; /* tail jmp 0x003BE404 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003BE6B0
 * Original: 0x003BE6B0 - 0x003BE6B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE6B0(void)
{

loc_003BE6B0: ;
    eax = 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE6C0
 * Original: 0x003BE6C0 - 0x003BE70E (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE6C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BE6C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003BE6C8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_003BE6D0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_003BE70E(); return; } /* je: equal / zero */

loc_003BE6D4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_003BE6D0; /* jl: less (signed <) */

loc_003BE6E0: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x6423BC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_003BE707: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BE730
 * Original: 0x003BE730 - 0x003BE776 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE730(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BE730: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003BE738: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_003BE740: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_003BE776(); return; } /* je: equal / zero */

loc_003BE744: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_003BE740; /* jl: less (signed <) */

loc_003BE750: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x6423A4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_003BE76F: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BE7A0
 * Original: 0x003BE7A0 - 0x003BE7FA (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE7A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BE7A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003BE7A8: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_003BE7B0: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_003BE7FA(); return; } /* je: equal / zero */

loc_003BE7B4: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_003BE7B0; /* jl: less (signed <) */

loc_003BE7C0: ;
    edx = 0x600E6C;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x38);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x37));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x36));
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x642348);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_003BE7F3: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BE810
 * Original: 0x003BE810 - 0x003BE89D (141 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE810(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BE810: ;
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_003BE89B; /* je: equal / zero */

loc_003BE81B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x642338);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003BE828: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003BE85B; /* je: equal / zero */

loc_003BE835: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_003BE85B; /* je: equal / zero */

loc_003BE83F: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003BE85B; /* je: equal / zero */

loc_003BE846: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x642338;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003BE858: ;
    esp = esp + 4;

loc_003BE85B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x642328);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003BE867: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003BE89A; /* je: equal / zero */

loc_003BE874: ;
    edi = MEM32(edi + 0x4B0);
    if (TEST_Z(edi, edi)) goto loc_003BE89A; /* je: equal / zero */

loc_003BE87E: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003BE89A; /* je: equal / zero */

loc_003BE885: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 1);
    ebx = 0x642328;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003BE897: ;
    esp = esp + 4;

loc_003BE89A: ;
    POP32(esp, ebx);

loc_003BE89B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BE8A0
 * Original: 0x003BE8A0 - 0x003BE92D (141 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE8A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BE8A0: ;
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_003BE92B; /* je: equal / zero */

loc_003BE8AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x642338);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003BE8B8: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003BE8EB; /* je: equal / zero */

loc_003BE8C5: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_003BE8EB; /* je: equal / zero */

loc_003BE8CF: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003BE8EB; /* je: equal / zero */

loc_003BE8D6: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 1);
    ebx = 0x642338;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003BE8E8: ;
    esp = esp + 4;

loc_003BE8EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x642328);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_003BE8F7: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003BE92A; /* je: equal / zero */

loc_003BE904: ;
    edi = MEM32(edi + 0x4B0);
    if (TEST_Z(edi, edi)) goto loc_003BE92A; /* je: equal / zero */

loc_003BE90E: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003BE92A; /* je: equal / zero */

loc_003BE915: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x642328;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_003BE927: ;
    esp = esp + 4;

loc_003BE92A: ;
    POP32(esp, ebx);

loc_003BE92B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BE930
 * Original: 0x003BE930 - 0x003BEA33 (259 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BE930: ;
    ecx = MEM32(eax + 0x570);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_003BEA31; /* je: equal / zero */

loc_003BE943: ;
    edx = MEM32(eax + 0x238);
    edx = MEM32(edx);
    edx = edx - 0;
    xmm0 = 0.0f; /* xorps self = zero */
    if ((edx == 0)) goto loc_003BE976; /* je: equal / zero */

loc_003BE953: ;
    edx--;
    if ((edx == 0)) goto loc_003BE960; /* je: equal / zero */

loc_003BE956: ;
    MEMF(edi) = xmm0; /* movss */
    MEMF(esi) = xmm0; /* movss */
    goto loc_003BE98E;

loc_003BE960: ;
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    goto loc_003BE98A;

loc_003BE976: ;
    xmm1 = MEMF(0x648D18); /* movss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */

loc_003BE98A: ;
    MEMF(esi) = xmm1; /* movss */

loc_003BE98E: ;
    if (CMP_NE(MEM32(ecx + 8), 1)) goto loc_003BE9F5; /* jne: not equal / not zero */

loc_003BE994: ;
    eax = MEM32(eax + 0x238);
    eax = MEM32(eax);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003BE9DA; /* je: equal / zero */

loc_003BE9A1: ;
    eax--;
    if ((eax == 0)) goto loc_003BE9BF; /* je: equal / zero */

loc_003BE9A4: ;
    xmm0 = MEMF(0x649278); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003BE9BF: ;
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003BE9DA: ;
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003BE9F5: ;
    ecx = MEM32(eax + 0x238);
    eax = MEM32(ecx);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003BEA18; /* je: equal / zero */

loc_003BEA02: ;
    eax--;
    if ((eax != 0)) goto loc_003BEA20; /* jne: not equal / not zero */

loc_003BEA05: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(ebp) = xmm0; /* movss */
    MEMF(ebx) = xmm0; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003BEA18: ;
    xmm0 = MEMF(0x6490F4); /* movss */

loc_003BEA20: ;
    MEMF(ebp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(ebx) = xmm0; /* movss */

loc_003BEA31: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003BEA40
 * Original: 0x003BEA40 - 0x003BEBF8 (440 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEA40(void)
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

loc_003BEA40: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x570);
    if (TEST_Z(ebp, ebp)) goto loc_003BEBF3; /* je: equal / zero */

loc_003BEA56: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    esi = esp + 0x18;
    ebx = esp + 0x14;
    edi = esp + 0x1C;
    PUSH32(esp, 0); sub_003BE930(); /* call 0x003BE930 */

loc_003BEA6F: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x30); /* addss */
    esp = esp + 4;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    if ((xmm0 < xmm2)) goto loc_003BEAA5; /* jb: below (unsigned <) */

loc_003BEA9C: ;
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(ebp + 0x30) = xmm0; /* movss */

loc_003BEAA5: ;
    xmm0 = MEMF(ebp + 0x30); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003BEABE; /* jbe: below or equal (unsigned <=) */

loc_003BEAB7: ;
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = xmm2; /* movaps */

loc_003BEABE: ;
    xmm1 = xmm1 * MEMF(0x648D3C); /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x34); /* addss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(ebp + 0x34) = xmm1; /* movss */
    if ((xmm1 < xmm3)) goto loc_003BEAF2; /* jb: below (unsigned <) */

loc_003BEAE1: ;
    edx = (int32_t)xmm1; /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebp + 0x34) = xmm1; /* movss */

loc_003BEAF2: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648DD0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003BEB35; /* jbe: below or equal (unsigned <=) */

loc_003BEB0F: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    eax = (int32_t)xmm1; /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    if ((xmm1 >= MEMF(0x648CF8))) goto loc_003BEB3B; /* jae: above or equal (unsigned >=) */

loc_003BEB26: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003BEB3B; /* jnp: not parity */

loc_003BEB2F: ;
    xmm0 = xmm0 - xmm3; /* subss */
    goto loc_003BEB3B;

loc_003BEB35: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_003BEB3B: ;
    esi = MEM32(esp + 0x24);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x9F0); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003BEB7C; /* jnp: not parity */

loc_003BEB58: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x642314);
    eax = ebp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00313740(); /* call 0x00313740 */

loc_003BEB6B: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    esp = esp + 0xC;
    MEMF(ebp + 0x9F0) = xmm0; /* movss */

loc_003BEB7C: ;
    xmm0 = MEMF(ebp + 0x9F4); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003BEBB6; /* jnp: not parity */

loc_003BEB8F: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x642304);
    eax = ebp + 0x378;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00313740(); /* call 0x00313740 */

loc_003BEBA5: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0xC;
    MEMF(ebp + 0x9F4) = xmm0; /* movss */

loc_003BEBB6: ;
    xmm0 = MEMF(ebp + 0x9F8); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003BEBF0; /* jnp: not parity */

loc_003BEBC9: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6422FC);
    eax = ebp + 0x6B4;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00313740(); /* call 0x00313740 */

loc_003BEBDF: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    esp = esp + 0xC;
    MEMF(ebp + 0x9F8) = xmm0; /* movss */

loc_003BEBF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003BEBF3: ;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003BEC00
 * Original: 0x003BEC00 - 0x003BEC6D (109 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEC00(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BEC00: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x570);
    if (TEST_Z(esi, esi)) goto loc_003BEC6B; /* je: equal / zero */

loc_003BEC0B: ;
    SET_LO8(eax, MEM8(esi + 0x2D));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = 1;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BEC22; /* jne: not equal / not zero */

loc_003BEC18: ;
    eax = edi;
    MEM8(esi + 0x2D) = LO8(ebx);
    PUSH32(esp, 0); sub_003BE810(); /* call 0x003BE810 */

loc_003BEC22: ;
    if (CMP_NE(MEM8(esi + 0x2C), LO8(ebx))) goto loc_003BEC4E; /* jne: not equal / not zero */

loc_003BEC27: ;
    SET_LO16(eax, MEM16(edi + 0x3AE));
    if (CMP_NE(LO16(eax), MEM16(edi + 0x3B0))) goto loc_003BEC61; /* jne: not equal / not zero */

loc_003BEC37: ;
    eax = edi;
    MEM8(esi + 0x2C) = 0;
    PUSH32(esp, 0); sub_003BE810(); /* call 0x003BE810 */

loc_003BEC42: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003BEA40(); /* call 0x003BEA40 */

loc_003BEC48: ;
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003BEC4E: ;
    if (CMP_A(MEM16(edi + 0x3AE), LO16(ebx))) goto loc_003BEC61; /* ja: above (unsigned >) */

loc_003BEC57: ;
    eax = edi;
    MEM8(esi + 0x2C) = LO8(ebx);
    PUSH32(esp, 0); sub_003BE8A0(); /* call 0x003BE8A0 */

loc_003BEC61: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003BEA40(); /* call 0x003BEA40 */

loc_003BEC67: ;
    esp = esp + 4;
    POP32(esp, ebx);

loc_003BEC6B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BEC70
 * Original: 0x003BEC70 - 0x003BEDBC (332 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEC70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEC70: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    xmm2 = MEMF(0x648E84); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x570);
    eax = MEM32(ebp + 0x38);
    xmm1 = MEMF(eax + 0xC); /* movss */
    ecx = MEM32(eax + 8);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 / MEMF(eax + 0x10); /* divss */
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_003BECC3; /* jp: parity */

loc_003BECBD: ;
    MEMF(esp + 0x10) = xmm1; /* movss */

loc_003BECC3: ;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003BECD2; /* jp: parity */

loc_003BECCC: ;
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_003BECD2: ;
    eax = MEM32(0x84A19C);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_003BECE2; /* jne: not equal / not zero */

loc_003BECDD: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003BECE2: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_003BED2A; /* je: equal / zero */

loc_003BED08: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_003BED2A; /* jb: below (unsigned <) */

loc_003BED11: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003BED1B: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003BED23: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_003BED4B; /* jne: not equal / not zero */

loc_003BED2A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003BED3C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003BED44: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_003BEDBC(); return; } /* je: equal / zero */

loc_003BED4B: ;
    ecx = MEM32(esp + 0x20);
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
    MEM32(eax) = 0x642190;
    SET_LO16(edx, MEM16(ecx + 0xAC));
    MEM16(eax + 0x34) = LO16(edx);
    SET_LO8(ecx, MEM8(ecx + 0x3AE));
    SET_LO8(edx, MEM8(esp + 0x18));
    POP32(esp, edi);
    MEM8(eax + 0x36) = LO8(ecx);
    ecx = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    MEM8(eax + 0x37) = LO8(edx);
    edx = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    POP32(esp, esi);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(edx);
    ecx = MEM32(ebp + 0xA4C);
    POP32(esp, ebp);
    MEM32(eax + 0x3C) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003BEDD0
 * Original: 0x003BEDD0 - 0x003BF2B6 (1254 bytes, 341 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEDD0(void)
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

loc_003BEDD0: ;
    eax = MEM32(0x863D08);
    esp = esp - 0x28;
    if (CMP_NE(eax, 3)) goto loc_003BF2B2; /* jne: not equal / not zero */

loc_003BEDE1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    ecx = MEM32(esi + 0x570);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    PUSH32(esp, 0x6422E0);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0); sub_003BFEF0(); /* call 0x003BFEF0 */

loc_003BEE03: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_003BF2B0; /* jne: not equal / not zero */

loc_003BEE0E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x570);
    eax = MEM32(ebx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    if (TEST_NZ(eax, eax)) goto loc_003BEE28; /* jne: not equal / not zero */

loc_003BEE21: ;
    MEM32(ebx + 8) = 2;

loc_003BEE28: ;
    edi = esi;
    PUSH32(esp, 0); sub_003BEC00(); /* call 0x003BEC00 */

loc_003BEE2F: ;
    (void)0; /* cmp MEM16(esi + 0x3AE), 0 - flags set for next jcc */
    MEM8(esi + 0x234) = 0;
    if (CMP_NE(MEM16(esi + 0x3AE), 0)) goto loc_003BEE49; /* jne: not equal / not zero */

loc_003BEE40: ;
    MEM16(esi + 0x3AE) = 1;

loc_003BEE49: ;
    if (TEST_Z(ebp, ebp)) goto loc_003BEE52; /* je: equal / zero */

loc_003BEE4D: ;
    PUSH32(esp, 0); sub_001BBD20(); /* call 0x001BBD20 */

loc_003BEE52: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003BEE5D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x7FA21C); /* movss */
    if (TEST_NZ(eax, eax)) goto loc_003BEE70; /* jne: not equal / not zero */

loc_003BEE69: ;
    SET_LO8(eax, MEM8(ebx + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BEEC1; /* je: equal / zero */

loc_003BEE70: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BEEB4; /* je: equal / zero */

loc_003BEE79: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BEEB4; /* je: equal / zero */

loc_003BEE82: ;
    xmm1 = MEMF(ebx + 0x24); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x24) = xmm1; /* movss */
    if ((xmm2 < xmm1)) goto loc_003BEEC4; /* jb: below (unsigned <) */

loc_003BEE98: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(ebx + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(ebx + 0x28) = xmm1; /* movss */
    goto loc_003BEEC4;

loc_003BEEB4: ;
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(ebx + 0x28) = xmm1; /* movss */

loc_003BEEC1: ;
    xmm2 = 0.0f; /* xorps self = zero */

loc_003BEEC4: ;
    xmm1 = MEMF(ebx + 0x28); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 < xmm2)) goto loc_003BEEFD; /* jb: below (unsigned <) */

loc_003BEECE: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm0 * MEMF(0x64A230); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x1C); /* addss */
    MEMF(ebx + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x64B2DC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x1C) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_003BEF1D; /* jbe: below or equal (unsigned <=) */

loc_003BEEF6: ;
    MEMF(ebx + 0x1C) = xmm1; /* movss */
    goto loc_003BEF1D;

loc_003BEEFD: ;
    xmm1 = MEMF(ebx + 0x1C); /* movss */
    xmm0 = xmm0 * MEMF(0x64A230); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x1C) = xmm1; /* movss */
    if ((xmm2 <= xmm1)) goto loc_003BEF1D; /* jbe: below or equal (unsigned <=) */

loc_003BEF18: ;
    MEMF(ebx + 0x1C) = xmm2; /* movss */

loc_003BEF1D: ;
    eax = 0; /* xor self */
    ecx = ebx + 0xA0C;

loc_003BEF25: ;
    if (CMP_NE(MEM32(ecx), 0)) goto loc_003BEFEE; /* jne: not equal / not zero */

loc_003BEF2E: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 0x10)) goto loc_003BEF25; /* jl: less (signed <) */

loc_003BEF37: ;
    eax = 0x10;
    MEM32(esp + 0x28) = eax;
    edi = eax;

loc_003BEF42: ;
    eax = 0x10;
    MEM32(esp + 0x30) = eax;
    goto loc_003BEF50;

    /* nop */

loc_003BEF50: ;
    eax = ebx;
    ecx = ebx;
    if (CMP_NE(eax, ecx)) goto loc_003BEF62; /* jne: not equal / not zero */

loc_003BEF58: ;
    if (CMP_EQ(edi, MEM32(esp + 0x30))) goto loc_003BF28A; /* je: equal / zero */

loc_003BEF62: ;
    ebp = MEM32(eax + edi * 4 + 0xA0C);
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003BF25B; /* je: equal / zero */

loc_003BEF77: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_003BF21C; /* je: equal / zero */

loc_003BEF84: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003BEF8A: ;
    if (TEST_NZ(eax, eax)) goto loc_003BEFA3; /* jne: not equal / not zero */

loc_003BEF8E: ;
    ecx = ZX16(MEM16(ebp + 0x60));

loc_003BEF92: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    if (CMP_EQ(edx, ecx)) goto loc_003BEFA3; /* je: equal / zero */

loc_003BEF9D: ;
    eax++;
    if (CMP_L(eax, 2)) goto loc_003BEF92; /* jl: less (signed <) */

loc_003BEFA3: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x444);
    edx = MEM32(ecx + 0x280);
    SET_LO8(ecx, MEM8(edx + 3));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003BEFCA; /* jne: not equal / not zero */

loc_003BEFBC: ;
    SET_LO8(ecx, 5);
    MEM8(ebp + 0x181) = LO8(ecx);
    MEM8(ebp + 0x180) = LO8(ecx);

loc_003BEFCA: ;
    ecx = MEM32(eax + 0xBC);
    ebx = 1;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(ecx, ebx)) goto loc_003BEFF9; /* jne: not equal / not zero */

loc_003BEFDE: ;
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_0036B570(); /* call 0x0036B570 */

loc_003BEFE6: ;
    esp = esp + 4;
    goto loc_003BF0AF;

loc_003BEFEE: ;
    edi = eax;
    MEM32(esp + 0x28) = edi;
    goto loc_003BEF42;

loc_003BEFF9: ;
    SET_LO8(ecx, MEM8(eax + 0x508));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003BF0A3; /* jne: not equal / not zero */

loc_003BF007: ;
    MEM8(eax + 0x508) = 1;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    eax = ebp;
    MEM8(esp + 0x1B) = 1;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003BF020: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BF037; /* jne: not equal / not zero */

loc_003BF02F: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_003BF037: ;
    ecx = MEM32(0x75E500);
    eax = 8;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_NE(ecx, eax)) goto loc_003BF064; /* jne: not equal / not zero */

loc_003BF04C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003BF0A3; /* ja: above (unsigned >) */

loc_003BF064: ;
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
    ecx = 0xB58;
    MEMF(0x75E504) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_003BF0A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002507C0(); /* call 0x002507C0 */

loc_003BF0AC: ;
    esp = esp + 0xC;

loc_003BF0AF: ;
    SET_LO8(ecx, MEM8(ebp + 0x135));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) eax = ebx; /* cmovne */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(eax, eax)) goto loc_003BF0D7; /* je: equal / zero */

loc_003BF0C6: ;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x508) = 0;
    MEM32(esp + 0x18) = ebx;

loc_003BF0D7: ;
    ebx = MEM32(eax * 4 + 0x5A0068);
    if (TEST_Z(ebx, ebx)) goto loc_003BF1AD; /* je: equal / zero */

loc_003BF0E6: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(ecx + 0x20));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003BF1AD; /* jne: not equal / not zero */

loc_003BF0F5: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF107; /* je: equal / zero */

loc_003BF0FE: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF136; /* je: equal / zero */

loc_003BF107: ;
    eax = ZX16(MEM16(ebp + 0x60));
    edx = MEM32(0x84B330);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8CC);
    eax = eax + edx + 0xD0;
    edx = MEM32(eax);
    edx = edx | 0x40000;
    PUSH32(esp, ebp);
    edi = ecx + 0xA50;
    MEM32(eax) = edx;
    PUSH32(esp, 0); sub_003C1370(); /* call 0x003C1370 */

loc_003BF134: ;
    goto loc_003BF1A9;

loc_003BF136: ;
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296340(); /* call 0x00296340 */

loc_003BF140: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(eax, eax)) goto loc_003BF1AD; /* je: equal / zero */

loc_003BF148: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_003BF14F: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003BF15F; /* je: equal / zero */

loc_003BF156: ;
    PUSH32(esp, 0); sub_00328470(); /* call 0x00328470 */

loc_003BF15B: ;
    edi = eax;
    goto loc_003BF161;

loc_003BF15F: ;
    edi = 0; /* xor self */

loc_003BF161: ;
    eax = MEM32(esp + 0x3C);
    MEM32(edi + 0x38) = 3;
    SET_LO16(ecx, MEM16(eax + 0xAC));
    esi = ebp;
    MEM16(edi + 0x34) = LO16(ecx);
    PUSH32(esp, 0); sub_00289400(); /* call 0x00289400 */

loc_003BF17E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax--;
    PUSH32(esp, 0x1F4);
    esi = edi;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x40) = ebx;
    MEM8(edi + 0x44) = 1;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003BF197: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x9DC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BF1A9: ;
    edi = MEM32(esp + 0x28);

loc_003BF1AD: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0x18);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF1DD; /* je: equal / zero */

loc_003BF1B9: ;
    if (TEST_NZ(eax, eax)) goto loc_003BF1EB; /* jne: not equal / not zero */

loc_003BF1BD: ;
    edi = esp + 0x24;
    eax = esp + 0x20;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_003BF1CE: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0); sub_00251300(); /* call 0x00251300 */

loc_003BF1D7: ;
    edi = MEM32(esp + 0x28);
    goto loc_003BF1E1;

loc_003BF1DD: ;
    if (TEST_NZ(eax, eax)) goto loc_003BF1EB; /* jne: not equal / not zero */

loc_003BF1E1: ;
    if (CMP_NE(MEM16(ebp + 0x3AE), 0)) goto loc_003BF214; /* jne: not equal / not zero */

loc_003BF1EB: ;
    eax = MEM32(esp + 0x14);
    edx = ebp;
    PUSH32(esp, 0); sub_003C1340(); /* call 0x003C1340 */

loc_003BF1F6: ;
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0xBC), 1)) goto loc_003BF214; /* je: equal / zero */

loc_003BF205: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_003C0580(); /* call 0x003C0580 */

loc_003BF211: ;
    esp = esp + 4;

loc_003BF214: ;
    ebx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x3C);

loc_003BF21C: ;
    if (CMP_GE(edi, 0x10)) goto loc_003BEF50; /* jge: greater or equal (signed >=) */

loc_003BF225: ;
    edi++;
    (void)0; /* cmp edi, 0x10 - flags set for next jcc */
    MEM32(esp + 0x28) = edi;
    if (CMP_GE(edi, 0x10)) goto loc_003BEF50; /* jge: greater or equal (signed >=) */

loc_003BF233: ;
    eax = ebx;
    eax = eax + edi * 4 + 0xA0C;
    /* nop */

loc_003BF240: ;
    if (CMP_NE(MEM32(eax), 0)) goto loc_003BEF50; /* jne: not equal / not zero */

loc_003BF249: ;
    edi++;
    eax = eax + 4;
    (void)0; /* cmp edi, 0x10 - flags set for next jcc */
    MEM32(esp + 0x28) = edi;
    if (CMP_L(edi, 0x10)) goto loc_003BF240; /* jl: less (signed <) */

loc_003BF256: ;
    goto loc_003BEF50;

loc_003BF25B: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF26D; /* je: equal / zero */

loc_003BF264: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF21C; /* je: equal / zero */

loc_003BF26D: ;
    eax = MEM32(esi + 0x23C);
    MEM8(eax + 0x10) = 0;
    MEM8(eax + 8) = 0;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    goto loc_003BF21C;

loc_003BF28A: ;
    edi = ebx;
    PUSH32(esp, 0); sub_003BF820(); /* call 0x003BF820 */

loc_003BF291: ;
    MEM8(ebx + 0x20) = 0;
    SET_LO8(eax, MEM8(0x863D11));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF2B0; /* je: equal / zero */

loc_003BF2A0: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF2B0; /* je: equal / zero */

loc_003BF2A9: ;
    eax = esi;
    PUSH32(esp, 0); sub_00261910(); /* call 0x00261910 */

loc_003BF2B0: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003BF2B2: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003BF2C0
 * Original: 0x003BF2C0 - 0x003BF2EB (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF2C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003BF2C0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + 8;
    ecx = 0x10;
    edx = 0; /* xor self */
    /* nop */

loc_003BF2D0: ;
    MEM32(eax + -8) = edx;
    MEM32(eax + -4) = edx;
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm0; /* movss */
    MEM32(eax + 8) = 0xFFFFFFFFu;
    eax = eax + 0x14;
    ecx--;
    if ((ecx != 0)) goto loc_003BF2D0; /* jne: not equal / not zero */

loc_003BF2EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF2F0
 * Original: 0x003BF2F0 - 0x003BF32F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF2F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BF2F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    esi = esi + 0x7270;
    edi = 0x70;

loc_003BF303: ;
    if (CMP_NE(MEM32(esi + -1292), 0x36)) goto loc_003BF323; /* jne: not equal / not zero */

loc_003BF30C: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_003BF323; /* je: equal / zero */

loc_003BF312: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003BF323; /* je: equal / zero */

loc_003BF319: ;
    eax = eax + 0xA50;
    PUSH32(esp, 0); sub_003BF2C0(); /* call 0x003BF2C0 */

loc_003BF323: ;
    esi = esi + 0x6D0;
    edi--;
    if ((edi != 0)) goto loc_003BF303; /* jne: not equal / not zero */

loc_003BF32C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF330
 * Original: 0x003BF330 - 0x003BF4FE (462 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BF330: ;
    esp = esp - 0xC;
    xmm5 = MEMF(0x5A0060); /* movss */
    xmm6 = MEMF(0x5A005C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM8(esp + 0xF) = LO8(ebx);
    edi = edi + 8;
    MEM32(esp + 0x14) = 0x10;
    PUSH32(esp, esi);
    /* nop */

loc_003BF360: ;
    esi = MEM32(edi);
    if (CMP_EQ(esi, ebx)) goto loc_003BF4C1; /* je: equal / zero */

loc_003BF36A: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_003BF4A5; /* je: equal / zero */

loc_003BF378: ;
    ecx = MEM32(esi + 0x64);
    ebp = 1;
    if (CMP_NE(ecx, ebp)) goto loc_003BF4A5; /* jne: not equal / not zero */

loc_003BF388: ;
    eax = MEM32(eax + 0xBC);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    xmm4 = xmm5; /* movaps */
    if (CMP_EQ(eax, ebp)) goto loc_003BF413; /* je: equal / zero */

loc_003BF395: ;
    xmm4 = xmm6; /* movaps */
    xmm3 = xmm6; /* movaps */

loc_003BF39B: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x9FC);
    ecx = ecx + 0x78;
    PUSH32(esp, ecx);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003BF3B2: ;
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm3 = xmm3 * MEMF(0x648D20); /* mulss */
    esp = esp + 8;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_003BF3EA; /* ja: above (unsigned >) */

loc_003BF3C6: ;
    if (CMP_BE(MEM16(esi + 0x3AE), LO16(ebx))) goto loc_003BF3EA; /* jbe: below or equal (unsigned <=) */

loc_003BF3CF: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_003BF3EA; /* je: equal / zero */

loc_003BF3D9: ;
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_003BF3EA; /* jne: not equal / not zero */

loc_003BF3E1: ;
    if (CMP_EQ(MEM32(esi + 0x64), ebp)) goto loc_003BF4C1; /* je: equal / zero */

loc_003BF3EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003BF3F0: ;
    if (TEST_NZ(eax, eax)) goto loc_003BF41C; /* jne: not equal / not zero */

loc_003BF3F4: ;
    ecx = ZX16(MEM16(esi + 0x60));
    goto loc_003BF400;

    /* nop */

loc_003BF400: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    eax++;
    if (CMP_EQ(edx, ecx)) goto loc_003BF418; /* je: equal / zero */

loc_003BF40C: ;
    if (CMP_L(eax, 2)) goto loc_003BF400; /* jl: less (signed <) */

loc_003BF411: ;
    goto loc_003BF41C;

loc_003BF413: ;
    xmm3 = xmm5; /* movaps */
    goto loc_003BF39B;

loc_003BF418: ;
    if (CMP_NE(eax, ebx)) goto loc_003BF495; /* jne: not equal / not zero */

loc_003BF41C: ;
    if (CMP_EQ(MEM32(0x863D04), ebp)) goto loc_003BF495; /* je: equal / zero */

loc_003BF424: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = esi;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_00289370(); /* call 0x00289370 */

loc_003BF434: ;
    ebp = eax;
    esp = esp + 4;
    if (CMP_EQ(ebp, ebx)) goto loc_003BF495; /* je: equal / zero */

loc_003BF43D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_003BF444: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_003BF454; /* je: equal / zero */

loc_003BF44B: ;
    PUSH32(esp, 0); sub_003BF500(); /* call 0x003BF500 */

loc_003BF450: ;
    esi = eax;
    goto loc_003BF456;

loc_003BF454: ;
    esi = 0; /* xor self */

loc_003BF456: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 0x140);
    eax = MEM32(edx + 0x9FC);
    SET_LO16(ecx, MEM16(eax + 0xAC));
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM16(esi + 0x34) = LO16(ecx);
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = ebx;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003BF487: ;
    ecx = MEM32(ebp + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003BF495: ;
    xmm5 = MEMF(0x5A0060); /* movss */
    xmm6 = MEMF(0x5A005C); /* movss */

loc_003BF4A5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi + -8) = ebx;
    MEM32(edi + -4) = ebx;
    MEM32(edi) = ebx;
    MEMF(edi + 4) = xmm0; /* movss */
    MEM32(edi + 8) = 0xFFFFFFFFu;
    MEM8(esp + 0x13) = 1;

loc_003BF4C1: ;
    eax = MEM32(esp + 0x18);
    edi = edi + 0x14;
    eax--;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_003BF360; /* jne: not equal / not zero */

loc_003BF4D3: ;
    (void)0; /* cmp MEM8(esp + 0x13), LO8(ebx) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(MEM8(esp + 0x13), LO8(ebx))) goto loc_003BF4F6; /* je: equal / zero */

loc_003BF4DB: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_003BF4F6; /* je: equal / zero */

loc_003BF4E4: ;
    if (CMP_EQ(MEM8(0x862C5C), LO8(ebx))) goto loc_003BF4F6; /* je: equal / zero */

loc_003BF4EC: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003BF540(); /* call 0x003BF540 */

loc_003BF4F6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BF500
 * Original: 0x003BF500 - 0x003BF532 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF500(void)
{

loc_003BF500: ;
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
    MEM32(eax) = 0x642260;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF540
 * Original: 0x003BF540 - 0x003BF6DD (413 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BF540: ;
    eax = MEM32(0x863D04);
    esp = esp - 0x10;
    if (CMP_EQ(eax, 1)) goto loc_003BF6D7; /* je: equal / zero */

loc_003BF551: ;
    SET_LO8(eax, MEM8(0x862C5C));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_003BF6D6; /* je: equal / zero */

loc_003BF561: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    edi = edi + 8;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = 0x10;
    goto loc_003BF580;

    /* nop */

loc_003BF580: ;
    esi = MEM32(edi);
    if (CMP_EQ(esi, ebx)) goto loc_003BF6B9; /* je: equal / zero */

loc_003BF58A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003BF590: ;
    if (TEST_NZ(eax, eax)) goto loc_003BF5BB; /* jne: not equal / not zero */

loc_003BF594: ;
    ecx = ZX16(MEM16(esi + 0x60));
    goto loc_003BF5A0;

    /* nop */

loc_003BF5A0: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    eax++;
    if (CMP_EQ(edx, ecx)) goto loc_003BF5B3; /* je: equal / zero */

loc_003BF5AC: ;
    if (CMP_L(eax, 2)) goto loc_003BF5A0; /* jl: less (signed <) */

loc_003BF5B1: ;
    goto loc_003BF5BB;

loc_003BF5B3: ;
    if (CMP_NE(eax, ebx)) goto loc_003BF6B9; /* jne: not equal / not zero */

loc_003BF5BB: ;
    edi = MEM32(edi);
    edx = MEM32(esp + 0x24);
    esi = esp + 0x14;
    eax = edi;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_003BF710(); /* call 0x003BF710 */

loc_003BF5D0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF6B9; /* je: equal / zero */

loc_003BF5D8: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = edi;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_00289370(); /* call 0x00289370 */

loc_003BF5E8: ;
    ebp = eax;
    esp = esp + 4;
    if (CMP_EQ(ebp, ebx)) goto loc_003BF6B9; /* je: equal / zero */

loc_003BF5F5: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_003BF602; /* jne: not equal / not zero */

loc_003BF5FD: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003BF602: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_003BF64A; /* je: equal / zero */

loc_003BF628: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_003BF64A; /* jb: below (unsigned <) */

loc_003BF631: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003BF63B: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003BF643: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_003BF66B; /* jne: not equal / not zero */

loc_003BF64A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003BF65C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003BF664: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_003BF674; /* je: equal / zero */

loc_003BF66B: ;
    PUSH32(esp, 0); sub_003BF500(); /* call 0x003BF500 */

loc_003BF670: ;
    esi = eax;
    goto loc_003BF676;

loc_003BF674: ;
    esi = 0; /* xor self */

loc_003BF676: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx + 0x140);
    eax = MEM32(edx + 0x9FC);
    SET_LO16(ecx, MEM16(eax + 0xAC));
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xC8);
    MEM16(esi + 0x34) = LO16(ecx);
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003BF6AB: ;
    eax = MEM32(ebp + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003BF6B9: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    edi = edi + 0x14;
    eax--;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_003BF580; /* jne: not equal / not zero */

loc_003BF6D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003BF6D6: ;
    POP32(esp, ebx);

loc_003BF6D7: ;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF6E0
 * Original: 0x003BF6E0 - 0x003BF70E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF6E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003BF6E0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x140) = ecx;
    eax = eax + 8;
    ecx = 0x10;
    edx = 0; /* xor self */

loc_003BF6F3: ;
    MEM32(eax + -8) = edx;
    MEM32(eax + -4) = edx;
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm0; /* movss */
    MEM32(eax + 8) = 0xFFFFFFFFu;
    eax = eax + 0x14;
    ecx--;
    if ((ecx != 0)) goto loc_003BF6F3; /* jne: not equal / not zero */

loc_003BF70D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF710
 * Original: 0x003BF710 - 0x003BF731 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF710(void)
{
    int _flags = 0; /* fallback flag var */

loc_003BF710: ;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esi) = 0xFFFFFFFFu;
    eax = 0; /* xor self */
    ecx = edx + 8;
    edi = edi;

loc_003BF720: ;
    if (CMP_EQ(MEM32(ecx), edi)) { sub_003BF731(); return; } /* je: equal / zero */

loc_003BF724: ;
    eax++;
    ecx = ecx + 0x14;
    if (CMP_L(eax, 0x10)) goto loc_003BF720; /* jl: less (signed <) */

loc_003BF72D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003BF820
 * Original: 0x003BF820 - 0x003BF8D0 (176 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF820(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003BF820: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = edi + 0xA50;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003BF330(); /* call 0x003BF330 */

loc_003BF831: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_003BF847; /* je: equal / zero */

loc_003BF83A: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF8CB; /* je: equal / zero */

loc_003BF847: ;
    xmm0 = (float)(int32_t)MEM32(edi + 0xA4C); /* cvtsi2ss */
    xmm1 = MEMF(0x849C30); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003BF8CB; /* jb: below (unsigned <) */

loc_003BF85C: ;
    eax = 0; /* xor self */
    edx = esp + 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_003C1540(); /* call 0x003C1540 */

loc_003BF86F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF8CB; /* je: equal / zero */

loc_003BF873: ;
    ecx = MEM32(esp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_003BF8CB; /* je: equal / zero */

loc_003BF87B: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = edi + 0xC;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003894D0(); /* call 0x003894D0 */

loc_003BF892: ;
    SET_LO8(eax, MEM8(0x862C5C));
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003BF8B8; /* je: equal / zero */

loc_003BF89E: ;
    xmm0 = MEMF(0x849C30); /* movss */
    xmm0 = xmm0 + MEMF(0x649340); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEM32(edi + 0xA4C) = eax;

loc_003BF8B8: ;
    PUSH32(esp, 0); sub_00289400(); /* call 0x00289400 */

loc_003BF8BD: ;
    eax--;
    POP32(esp, esi);
    if (((int32_t)eax < 0)) goto loc_003BF8CB; /* js: sign (negative) */

loc_003BF8C1: ;
    ecx = 0x862C40;
    PUSH32(esp, 0); sub_00296470(); /* call 0x00296470 */

loc_003BF8CB: ;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003BFEF0
 * Original: 0x003BFEF0 - 0x003C0157 (615 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFEF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BFEF0: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    eax = MEM32(ebx + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ebx + 0x20C) = 0;
    if (TEST_Z(eax, eax)) goto loc_003BFF17; /* je: equal / zero */

loc_003BFF0C: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_003C0157(); return; } /* jne: not equal / not zero */

loc_003BFF17: ;
    xmm0 = MEMF(0x64AA14); /* movss */
    eax = ebx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(ebx + 0xA0) = 7;
    PUSH32(esp, 0); sub_003C1180(); /* call 0x003C1180 */

loc_003BFF33: ;
    edi = eax;
    eax = edi + 0xA50;
    ecx = edi;
    MEM32(edi + 0xA4C) = 0;
    MEM8(edi + 4) = 1;
    MEM32(edi + 0x9FC) = ebx;
    PUSH32(esp, 0); sub_003BF6E0(); /* call 0x003BF6E0 */

loc_003BFF56: ;
    xmm0 = MEMF(0x648D34); /* movss */
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(edi + 0x374) = 0;
    MEM8(edi + 0x6B0) = 0;
    MEM8(edi + 0x9EC) = 0;
    MEMF(edi + 0x9F0) = xmm0; /* movss */
    MEMF(edi + 0x9F4) = xmm0; /* movss */
    MEMF(edi + 0x9F8) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_003BFF99; /* jne: not equal / not zero */

loc_003BFF94: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003BFF99: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_003BFFE1; /* je: equal / zero */

loc_003BFFBF: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_003BFFE1; /* jb: below (unsigned <) */

loc_003BFFC8: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003BFFD2: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003BFFDA: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003C0002; /* jne: not equal / not zero */

loc_003BFFE1: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003BFFF3: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003BFFFB: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003C0038; /* je: equal / zero */

loc_003C0002: ;
    ecx = MEM32(ebx + 0x238);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = 0x63AFE8;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEM32(eax + 8) = edx;
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x14) = 0;
    MEM8(ecx + 4) = 1;
    goto loc_003C003A;

loc_003C0038: ;
    eax = 0; /* xor self */

loc_003C003A: ;
    MEM32(edi + 0x38) = eax;
    eax = MEM32(ebx + 0x238);
    esi = 0; /* xor self */
    edx = 0; /* xor self */
    MEM8(eax + 4) = 1;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;

loc_003C0053: ;
    ecx = MEM32(0x76FE00);
    eax = MEM32(ecx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003C0064; /* je: equal / zero */

loc_003C0060: ;
    ecx = MEM32(eax);
    goto loc_003C0066;

loc_003C0064: ;
    ecx = 0; /* xor self */

loc_003C0066: ;
    if (CMP_GE(esi, ecx)) { sub_003C0157(); return; } /* jge: greater or equal (signed >=) */

loc_003C006E: ;
    ebp = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_003C0085; /* je: equal / zero */

loc_003C0074: ;
    if (TEST_S(edx, edx)) goto loc_003C0085; /* jl: less (signed <) */

loc_003C0078: ;
    if (CMP_AE(esi, MEM32(eax))) goto loc_003C0085; /* jae: above or equal (unsigned >=) */

loc_003C007C: ;
    eax = MEM32(eax + 4);
    eax = eax + edx;
    if ((eax == 0)) goto loc_003C0085; /* je: equal / zero */

loc_003C0083: ;
    ebp = MEM32(eax);

loc_003C0085: ;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_003C0090: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003C013A; /* je: equal / zero */

loc_003C009B: ;
    eax = MEM32(0x76FE00);
    PUSH32(esp, ebp);
    esi = esp + 0x38;
    PUSH32(esp, 0); sub_003ECD90(); /* call 0x003ECD90 */

loc_003C00AA: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003C00C1; /* je: equal / zero */

loc_003C00B1: ;
    PUSH32(esp, 0x76FE20);
    eax = esi;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003C00C1: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(0x76FE00);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003ECE40(); /* call 0x003ECE40 */

loc_003C00DB: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = ebx + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003C00E9: ;
    xmm1 = MEMF(esp + 0x34); /* movss */
    esp = esp + 0x18;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003C013A; /* jbe: below or equal (unsigned <=) */

loc_003C00F7: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E6C); /* addss */
    ecx = edi + 0xC;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 4) = eax;
    MEMF(edi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    MEM32(ecx + 8) = edx;
    MEMF(edi + 0x1C) = xmm0; /* movss */

loc_003C013A: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx++;
    eax = eax + 0xC;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    edx = eax;
    esi = ecx;
    goto loc_003C0053;

}

/**
 * sub_003C0580
 * Original: 0x003C0580 - 0x003C0632 (178 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0580(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003C0580: ;
    eax = MEM32(ecx + 0x568);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ebx)) goto loc_003C060A; /* je: equal / zero */

loc_003C058E: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_003C060A; /* jne: not equal / not zero */

loc_003C0596: ;
    (void)0; /* cmp MEM8(0x849B80), LO8(ebx) - flags set for next jcc */
    esi = ZX16(MEM16(ecx + 0x60));
    if (CMP_EQ(MEM8(0x849B80), LO8(ebx))) goto loc_003C05B3; /* je: equal / zero */

loc_003C05A2: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_003C05B3; /* je: equal / zero */

loc_003C05A7: ;
    eax = 3;
    PUSH32(esp, 0); sub_0021FFA0(); /* call 0x0021FFA0 */

loc_003C05B1: ;
    goto loc_003C060A;

loc_003C05B3: ;
    eax = MEM32(0x849ACC);
    if (CMP_EQ(eax, 4)) goto loc_003C05C2; /* je: equal / zero */

loc_003C05BD: ;
    if (CMP_NE(eax, 5)) goto loc_003C060A; /* jne: not equal / not zero */

loc_003C05C2: ;
    eax = MEM32(0x849AA4);
    if (CMP_EQ(eax, ebx)) goto loc_003C0600; /* je: equal / zero */

loc_003C05CB: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E70(); /* call 0x00036E70 */

loc_003C05D7: ;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F82B8);
    SET_LO8(ecx, 0); /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_003C05FD: ;
    esp = esp + 0x10;

loc_003C0600: ;
    MEM32(0x849ACC) = 6;

loc_003C060A: ;
    if (CMP_EQ(MEM8(0x863D11), LO8(ebx))) goto loc_003C061A; /* je: equal / zero */

loc_003C0612: ;
    if (CMP_EQ(MEM8(0x862C5C), LO8(ebx))) { sub_003C0632(); return; } /* je: equal / zero */

loc_003C061A: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x23C);
    POP32(esp, esi);
    MEM8(eax + 0x10) = LO8(ebx);
    MEM8(eax + 8) = LO8(ebx);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0720
 * Original: 0x003C0720 - 0x003C07D2 (178 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0720(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C0720: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_003C0733; /* jne: not equal / not zero */

loc_003C072E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003C0733: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_003C077B; /* je: equal / zero */

loc_003C0759: ;
    if (CMP_B(MEM32(esi + 0x80), 0x58)) goto loc_003C077B; /* jb: below (unsigned <) */

loc_003C0762: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C076C: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C0774: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_003C079C; /* jne: not equal / not zero */

loc_003C077B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C078D: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C0795: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_003C07D2(); return; } /* je: equal / zero */

loc_003C079C: ;
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
    MEM8(eax + 0x44) = LO8(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x639120;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C07E0
 * Original: 0x003C07E0 - 0x003C0865 (133 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C07E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C07E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x34);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C07F3: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C07FD: ;
    eax = MEM32(edi + 0x38);
    esp = esp + 8;
    if (CMP_EQ(eax, 3)) goto loc_003C0817; /* je: equal / zero */

loc_003C0808: ;
    if (CMP_EQ(eax, 4)) goto loc_003C0817; /* je: equal / zero */

loc_003C080D: ;
    if (CMP_EQ(eax, 6)) goto loc_003C0817; /* je: equal / zero */

loc_003C0812: ;
    if (CMP_NE(eax, 5)) goto loc_003C082F; /* jne: not equal / not zero */

loc_003C0817: ;
    eax = MEM32(edi + 0x40);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C0821: ;
    eax = ZX8(MEM8(edi + 0x44));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C082C: ;
    esp = esp + 8;

loc_003C082F: ;
    if (CMP_NE(MEM32(edi + 0x38), 6)) goto loc_003C0860; /* jne: not equal / not zero */

loc_003C0835: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C083F: ;
    eax = MEM32(edi + 0x4C);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C0849: ;
    eax = MEM32(edi + 0x50);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C0853: ;
    eax = MEM32(edi + 0x54);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C085D: ;
    esp = esp + 0x10;

loc_003C0860: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0870
 * Original: 0x003C0870 - 0x003C092A (186 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0870(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C0870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C087F: ;
    PUSH32(esp, 3);
    MEM16(edi + 0x34) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C088A: ;
    esp = esp + 8;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x3C) = 0;
    if (CMP_EQ(eax, 3)) goto loc_003C08AB; /* je: equal / zero */

loc_003C089C: ;
    if (CMP_EQ(eax, 4)) goto loc_003C08AB; /* je: equal / zero */

loc_003C08A1: ;
    if (CMP_EQ(eax, 6)) goto loc_003C08AB; /* je: equal / zero */

loc_003C08A6: ;
    if (CMP_NE(eax, 5)) goto loc_003C08C7; /* jne: not equal / not zero */

loc_003C08AB: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C08B2: ;
    PUSH32(esp, 1);
    MEM32(edi + 0x40) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C08BC: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(edi + 0x44) = LO8(eax);

loc_003C08C7: ;
    if (CMP_NE(MEM32(edi + 0x38), 6)) goto loc_003C0925; /* jne: not equal / not zero */

loc_003C08CD: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C08D4: ;
    esp = esp + 4;
    if (TEST_Z(eax, 0x80000)) goto loc_003C08E3; /* je: equal / zero */

loc_003C08DE: ;
    eax = eax | 0xFFF00000u;

loc_003C08E3: ;
    PUSH32(esp, 0x14);
    MEM32(edi + 0x48) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C08ED: ;
    esp = esp + 4;
    if (TEST_Z(eax, 0x80000)) goto loc_003C08FC; /* je: equal / zero */

loc_003C08F7: ;
    eax = eax | 0xFFF00000u;

loc_003C08FC: ;
    PUSH32(esp, 0x14);
    MEM32(edi + 0x4C) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C0906: ;
    esp = esp + 4;
    if (TEST_Z(eax, 0x80000)) goto loc_003C0915; /* je: equal / zero */

loc_003C0910: ;
    eax = eax | 0xFFF00000u;

loc_003C0915: ;
    PUSH32(esp, 3);
    MEM32(edi + 0x50) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C091F: ;
    esp = esp + 4;
    MEM32(edi + 0x54) = eax;

loc_003C0925: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0930
 * Original: 0x003C0930 - 0x003C0DD7 (1191 bytes, 370 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C0930: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_003C0945: ;
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 8) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_003C0DCC; /* je: equal / zero */

loc_003C0953: ;
    edx = MEM32(0x84A5FC);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    esi = esi + 0x6D00;
    eax = 0x10;
    ecx = esi;
    PUSH32(esp, edi);
    edi = edi;

loc_003C0970: ;
    if (CMP_NE(MEM8(eax + edx), 0x37)) goto loc_003C0987; /* jne: not equal / not zero */

loc_003C0976: ;
    SET_LO16(edi, MEM16(ecx + 0xAC));
    if (CMP_EQ(LO16(edi), MEM16(ebp + 0x34))) goto loc_003C0A20; /* je: equal / zero */

loc_003C0987: ;
    eax++;
    ecx = ecx + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_003C0970; /* jl: less (signed <) */

loc_003C0995: ;
    eax = 0x10;
    /* nop */

loc_003C09A0: ;
    if (CMP_NE(MEM8(eax + edx), 0x36)) goto loc_003C09B3; /* jne: not equal / not zero */

loc_003C09A6: ;
    SET_LO16(ecx, MEM16(esi + 0xAC));
    if (CMP_EQ(LO16(ecx), MEM16(ebp + 0x34))) goto loc_003C09C3; /* je: equal / zero */

loc_003C09B3: ;
    eax++;
    esi = esi + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_003C09A0; /* jl: less (signed <) */

loc_003C09C1: ;
    esi = 0; /* xor self */

loc_003C09C3: ;
    ecx = MEM32(ebp + 0x38);
    if (CMP_NE(ecx, 3)) goto loc_003C09D4; /* jne: not equal / not zero */

loc_003C09CB: ;
    if (CMP_EQ(MEM32(ebp + 0x40), 0x6EE6AE1)) goto loc_003C0A10; /* je: equal / zero */

loc_003C09D4: ;
    if (CMP_EQ(ecx, 6)) goto loc_003C0A19; /* je: equal / zero */

loc_003C09D9: ;
    if (CMP_EQ(ecx, 5)) goto loc_003C0A10; /* je: equal / zero */

loc_003C09DE: ;
    if (TEST_Z(esi, esi)) goto loc_003C0DCA; /* je: equal / zero */

loc_003C09E6: ;
    eax = MEM32(esi + 0x570);
    if (TEST_Z(eax, eax)) goto loc_003C0DCA; /* je: equal / zero */

loc_003C09F4: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C09FF: ;
    eax = MEM32(esi + 0x64);
    if (CMP_EQ(eax, 0x36)) goto loc_003C0A10; /* je: equal / zero */

loc_003C0A07: ;
    if (CMP_NE(eax, 0x37)) goto loc_003C0DCA; /* jne: not equal / not zero */

loc_003C0A10: ;
    if (CMP_A(ecx, 6)) goto loc_003C0DCA; /* ja: above (unsigned >) */

loc_003C0A19: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C0DD8); /* switch: 7 entries, 7 targets */
    if (_jt == 0x003C0A24u) goto loc_003C0A24;
    if (_jt == 0x003C0AC2u) goto loc_003C0AC2;
    if (_jt == 0x003C0B58u) goto loc_003C0B58;
    if (_jt == 0x003C0B8Du) goto loc_003C0B8D;
    if (_jt == 0x003C0C25u) goto loc_003C0C25;
    if (_jt == 0x003C0CD5u) goto loc_003C0CD5;
    if (_jt == 0x003C0D5Bu) goto loc_003C0D5B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C0A20: ;
    esi = ecx;
    goto loc_003C09C3;

loc_003C0A24: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0A31: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003C0A3C: ;
    if (TEST_NZ(eax, eax)) goto loc_003C0DCA; /* jne: not equal / not zero */

loc_003C0A44: ;
    edi = MEM32(ebp + 0x3C);
    edx = ebx + 0xA38;
    eax = edi;
    PUSH32(esp, 0); sub_00299330(); /* call 0x00299330 */

loc_003C0A54: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0A5C: ;
    eax = edi;
    ecx = edx;
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_003C0A65: ;
    edi = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003C0A70: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_003C0A77: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003C0A87; /* je: equal / zero */

loc_003C0A7E: ;
    PUSH32(esp, 0); sub_00328470(); /* call 0x00328470 */

loc_003C0A83: ;
    esi = eax;
    goto loc_003C0A89;

loc_003C0A87: ;
    esi = 0; /* xor self */

loc_003C0A89: ;
    MEM32(esi + 0x38) = 1;
    SET_LO16(edx, MEM16(ebp + 0x34));
    MEM16(esi + 0x34) = LO16(edx);
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003C0AAA: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_003C0AB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C0AC2: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* jne: not equal / not zero */

loc_003C0ACF: ;
    ecx = MEM32(ebp + 0x3C);
    SET_LO8(eax, MEM8(ecx + 0x862CCB));
    if (CMP_LE(LO8(eax), 0xFF)) goto loc_003C0B05; /* jle: less or equal (signed <=) */

loc_003C0ADC: ;
    ecx = MEM32(0x84A5F8);
    edi = MEM32(esi + 0x23C);
    eax = SX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003C0AF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C0B05: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_003C0B0C: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003C0B1C; /* je: equal / zero */

loc_003C0B13: ;
    PUSH32(esp, 0); sub_00328470(); /* call 0x00328470 */

loc_003C0B18: ;
    esi = eax;
    goto loc_003C0B1E;

loc_003C0B1C: ;
    esi = 0; /* xor self */

loc_003C0B1E: ;
    MEM32(esi + 0x38) = 2;
    SET_LO16(edx, MEM16(ebp + 0x34));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM16(esi + 0x34) = LO16(edx);
    MEM32(esi + 0x3C) = 0;
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003C0B40: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003C0B4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C0B58: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0B65: ;
    esi = MEM32(esi + 0x23C);
    POP32(esp, edi);
    MEM8(esi + 0x10) = 0;
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C0B8D: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0B9A: ;
    edi = MEM32(ebp + 0x3C);
    edx = ebx + 0xA38;
    eax = edi;
    PUSH32(esp, 0); sub_00299330(); /* call 0x00299330 */

loc_003C0BAA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0BB2: ;
    ebx = MEM32(ebp + 0x40);
    ecx = edx;
    eax = edi;
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_003C0BBE: ;
    if (CMP_EQ(ebx, 0x6EE6AE1)) goto loc_003C0BE5; /* je: equal / zero */

loc_003C0BC6: ;
    edi = MEM32(esi + 0x570);
    PUSH32(esp, eax);
    edi = edi + 0xA50;
    PUSH32(esp, 0); sub_003C1370(); /* call 0x003C1370 */

loc_003C0BD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C0BE5: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0); sub_00328810(); /* call 0x00328810 */

loc_003C0BF1: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0BFC: ;
    eax = MEM32(esi + 0x114);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x40);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003894D0(); /* call 0x003894D0 */

loc_003C0C15: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C0C25: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0C32: ;
    ebx = MEM32(ebp + 0x3C);
    edx = MEM32(esp + 0x10);
    edx = edx + 0xA38;
    eax = ebx;
    PUSH32(esp, 0); sub_00299330(); /* call 0x00299330 */

loc_003C0C46: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0C4E: ;
    ebp = MEM32(ebp + 0x40);
    esi = MEM32(esi + 0x570);
    edi = 0; /* xor self */
    if (CMP_G(ebp, 0x7769A7C)) goto loc_003C0C8B; /* jg: greater (signed >) */

loc_003C0C61: ;
    if (CMP_EQ(ebp, 0x7769A7C)) goto loc_003C0C84; /* je: equal / zero */

loc_003C0C63: ;
    if (CMP_EQ(ebp, 0x74045)) goto loc_003C0C7D; /* je: equal / zero */

loc_003C0C6B: ;
    if (CMP_EQ(ebp, 0x1C96DF9)) goto loc_003C0CA2; /* je: equal / zero */

loc_003C0C73: ;
    if (CMP_EQ(ebp, 0x2480609)) goto loc_003C0C9B; /* je: equal / zero */

loc_003C0C7B: ;
    goto loc_003C0CA7;

loc_003C0C7D: ;
    edi = 0xA;
    goto loc_003C0CA7;

loc_003C0C84: ;
    edi = 9;
    goto loc_003C0CA7;

loc_003C0C8B: ;
    if (CMP_EQ(ebp, 0x85CBD45)) goto loc_003C0CA2; /* je: equal / zero */

loc_003C0C93: ;
    if (CMP_NE(ebp, 0x9374EC5)) goto loc_003C0CA7; /* jne: not equal / not zero */

loc_003C0C9B: ;
    edi = 7;
    goto loc_003C0CA7;

loc_003C0CA2: ;
    edi = 6;

loc_003C0CA7: ;
    PUSH32(esp, 1);
    eax = ebx;
    ecx = edx;
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_003C0CB2: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    esi = esi + 0xC;
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0); sub_003B6E10(); /* call 0x003B6E10 */

loc_003C0CC5: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C0CD5: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0CE2: ;
    edi = MEM32(ebp + 0x3C);
    esi = ebx + 0xA38;
    eax = edi;
    edx = esi;
    PUSH32(esp, 0); sub_00299330(); /* call 0x00299330 */

loc_003C0CF4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0CFC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    eax = edi;
    ecx = esi;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_003C0D1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    eax = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, 0); sub_003B6E10(); /* call 0x003B6E10 */

loc_003C0D30: ;
    ecx = MEM32(ebp + 0x54);
    esp = esp + 0x18;
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_003C0D45: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003B8750(); /* call 0x003B8750 */

loc_003C0D4B: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C0D5B: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0D64: ;
    edi = MEM32(ebp + 0x3C);
    esi = ebx + 0xA38;
    eax = edi;
    edx = esi;
    PUSH32(esp, 0); sub_00299330(); /* call 0x00299330 */

loc_003C0D76: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C0DCA; /* je: equal / zero */

loc_003C0D7A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    eax = edi;
    ecx = esi;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_003C0D9A: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    edx = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003B6E10(); /* call 0x003B6E10 */

loc_003C0DAE: ;
    esp = esp + 0x18;
    edx = eax;
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_00299370(); /* call 0x00299370 */

loc_003C0DBF: ;
    PUSH32(esp, eax);
    eax = edx;
    PUSH32(esp, 0); sub_003B9CB0(); /* call 0x003B9CB0 */

loc_003C0DC7: ;
    esp = esp + 8;

loc_003C0DCA: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003C0DCC: ;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0EC0
 * Original: 0x003C0EC0 - 0x003C0ED7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0EC0(void)
{

loc_003C0EC0: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C0ED0: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0EE0
 * Original: 0x003C0EE0 - 0x003C0F04 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C0EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C0EEF: ;
    esp = esp + 4;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_003C0EFB; /* jns: not sign (positive) */

loc_003C0EF6: ;
    eax = eax | 0xFFFF0000u;

loc_003C0EFB: ;
    MEM16(edi + 0x34) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0F10
 * Original: 0x003C0F10 - 0x003C0F5C (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0F10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003C0F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_003C0F21: ;
    if (TEST_Z(eax, eax)) goto loc_003C0F55; /* je: equal / zero */

loc_003C0F25: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_003C0F32: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_003C0F55; /* je: equal / zero */

loc_003C0F37: ;
    eax = MEM32(eax + 0x570);
    if (TEST_Z(eax, eax)) goto loc_003C0F55; /* je: equal / zero */

loc_003C0F41: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003C0F55; /* je: equal / zero */

loc_003C0F48: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */

loc_003C0F55: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0F60
 * Original: 0x003C0F60 - 0x003C100F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C0F60: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_003C0F73; /* jne: not equal / not zero */

loc_003C0F6E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003C0F73: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_003C0FBB; /* je: equal / zero */

loc_003C0F99: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_003C0FBB; /* jb: below (unsigned <) */

loc_003C0FA2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C0FAC: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C0FB4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_003C0FDC; /* jne: not equal / not zero */

loc_003C0FBB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C0FCD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C0FD5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_003C100F(); return; } /* je: equal / zero */

loc_003C0FDC: ;
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
    MEM32(eax) = 0x642190;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1020
 * Original: 0x003C1020 - 0x003C1036 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1020(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C1020: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x34);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_003C102D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_003C1036(); return; } /* je: equal / zero */

loc_003C1032: ;
    SET_LO8(eax, MEM8(eax + 0x60));
    esp += 4; return; /* ret */

}

/**
 * sub_003C1040
 * Original: 0x003C1040 - 0x003C1086 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1040(void)
{

loc_003C1040: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x34);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1053: ;
    eax = ZX8(MEM8(edi + 0x36));
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C105E: ;
    eax = ZX8(MEM8(edi + 0x37));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1069: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x38);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1074: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C107E: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1090
 * Original: 0x003C1090 - 0x003C10DF (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1090(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C1090: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C109F: ;
    PUSH32(esp, 6);
    MEM16(edi + 0x34) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C10AA: ;
    PUSH32(esp, 2);
    MEM8(edi + 0x36) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C10B4: ;
    PUSH32(esp, 8);
    MEM8(edi + 0x37) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C10BE: ;
    esp = esp + 0x10;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_003C10CA; /* jns: not sign (positive) */

loc_003C10C5: ;
    eax = eax | 0xFFFFFF00u;

loc_003C10CA: ;
    PUSH32(esp, 0xC);
    MEM8(edi + 0x38) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C10D4: ;
    esp = esp + 4;
    MEM32(edi + 0x3C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C10E0
 * Original: 0x003C10E0 - 0x003C117A (154 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C10E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003C10E0: ;
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(0x863D08), 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_003C1172; /* jne: not equal / not zero */

loc_003C10F1: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C1172; /* jne: not equal / not zero */

loc_003C10FA: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0x34);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_003C1107: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_003C1172; /* je: equal / zero */

loc_003C110C: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x570);
    if (TEST_Z(esi, esi)) goto loc_003C1171; /* je: equal / zero */

loc_003C1117: ;
    SET_LO16(ecx, ZX8(MEM8(ebx + 0x36)));
    MEM16(eax + 0x3AE) = LO16(ecx);
    SET_LO8(eax, MEM8(esi + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C1171; /* je: equal / zero */

loc_003C112A: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x38);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_003C1153; /* jp: parity */

loc_003C1145: ;
    xmm0 = MEMF(0x648E84); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_003C1153: ;
    eax = MEM32(esi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_003C1168; /* je: equal / zero */

loc_003C115A: ;
    ecx = MEM32(esp + 8);
    edx = ZX8(MEM8(ebx + 0x37));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00343100(); /* call 0x00343100 */

loc_003C1168: ;
    edx = MEM32(ebx + 0x3C);
    MEM32(esi + 0xA4C) = edx;

loc_003C1171: ;
    POP32(esp, esi);

loc_003C1172: ;
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1180
 * Original: 0x003C1180 - 0x003C12C6 (326 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1180(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C1180: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x570);
    if (TEST_NZ(eax, eax)) goto loc_003C12C4; /* jne: not equal / not zero */

loc_003C1191: ;
    eax = MEM32(0x847024);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x40);
    PUSH32(esp, esi);
    esi = edi;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_003C11A2: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C11E8; /* je: equal / zero */

loc_003C11A6: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003C11C3; /* je: equal / zero */

loc_003C11B0: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_003C11C9;

loc_003C11C3: ;
    eax = MEM32(edi + 0x580);

loc_003C11C9: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1D);
    edx = edi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_003C11E8: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003C11F6; /* jne: not equal / not zero */

loc_003C11F1: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003C11F6: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_003C1246; /* je: equal / zero */

loc_003C121C: ;
    if (CMP_B(MEM32(esi + 0x80), 0xB94)) goto loc_003C1246; /* jb: below (unsigned <) */

loc_003C1228: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C1232: ;
    PUSH32(esp, 0xB94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C123D: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_003C126C; /* jne: not equal / not zero */

loc_003C1246: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C1258: ;
    PUSH32(esp, 0xB94);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C1263: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_003C127F; /* je: equal / zero */

loc_003C126C: ;
    eax = esi + 0xA50;
    MEM32(esi) = 0x64218C;
    PUSH32(esp, 0); sub_003C12D0(); /* call 0x003C12D0 */

loc_003C127D: ;
    goto loc_003C1281;

loc_003C127F: ;
    esi = 0; /* xor self */

loc_003C1281: ;
    MEM32(edi + 0x570) = esi;
    MEM32(edi + 0x574) = 0x3BFEB0;
    eax = 0; /* xor self */
    edx = esi + 4;
    ecx = 0x2E4;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = 0x1010101;
    MEM32(esi + 0xA00) = eax;
    MEM32(esi + 0xA04) = eax;
    MEM16(esi + 0xA08) = LO16(eax);
    MEM8(esi + 0xA0A) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    MEM8(edx) = 0;
    POP32(esp, ebx);

loc_003C12C4: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C12D0
 * Original: 0x003C12D0 - 0x003C12FC (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C12D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003C12D0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    ecx = eax + 8;
    edx = 0x10;
    esi = 0; /* xor self */
    edi = edi;

loc_003C12E0: ;
    MEM32(ecx + -8) = esi;
    MEM32(ecx + -4) = esi;
    MEM32(ecx) = esi;
    MEMF(ecx + 4) = xmm0; /* movss */
    MEM32(ecx + 8) = 0xFFFFFFFFu;
    ecx = ecx + 0x14;
    edx--;
    if ((edx != 0)) goto loc_003C12E0; /* jne: not equal / not zero */

loc_003C12FA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1300
 * Original: 0x003C1300 - 0x003C1338 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1300(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C1300: ;
    edx = edi + 0xA0C;
    eax = 0; /* xor self */
    ecx = edx;
    /* nop */

loc_003C1310: ;
    if (CMP_EQ(esi, MEM32(ecx))) goto loc_003C1337; /* je: equal / zero */

loc_003C1314: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 0x10)) goto loc_003C1310; /* jl: less (signed <) */

loc_003C131D: ;
    eax = 0; /* xor self */
    ecx = edx;

loc_003C1321: ;
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_003C1330; /* je: equal / zero */

loc_003C1326: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 0x10)) goto loc_003C1321; /* jl: less (signed <) */

loc_003C132F: ;
    esp += 4; return; /* ret */

loc_003C1330: ;
    MEM32(edi + eax * 4 + 0xA0C) = esi;

loc_003C1337: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C1340
 * Original: 0x003C1340 - 0x003C1361 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1340(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C1340: ;
    eax = eax + 0xA0C;
    ecx = 0x10;
    /* nop */

loc_003C1350: ;
    if (CMP_NE(edx, MEM32(eax))) goto loc_003C135A; /* jne: not equal / not zero */

loc_003C1354: ;
    MEM32(eax) = 0;

loc_003C135A: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_003C1350; /* jne: not equal / not zero */

loc_003C1360: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C1370
 * Original: 0x003C1370 - 0x003C1484 (276 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1370: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = edi + 8;
    ecx = 0; /* xor self */
    eax = esi;
    /* nop */

loc_003C1380: ;
    if (CMP_NE(MEM32(eax + -4), ebx)) goto loc_003C138D; /* jne: not equal / not zero */

loc_003C1385: ;
    if (CMP_EQ(MEM32(eax), ebp)) goto loc_003C147F; /* je: equal / zero */

loc_003C138D: ;
    ecx++;
    eax = eax + 0x14;
    if (CMP_L(ecx, 0x10)) goto loc_003C1380; /* jl: less (signed <) */

loc_003C1396: ;
    xmm0 = MEMF(0x849C30); /* movss */
    SET_LO8(ecx, 0); /* xor self */
    eax = edi + 0xC;
    edx = 2;

loc_003C13A8: ;
    if (CMP_EQ(MEM32(eax + -4), 0)) goto loc_003C13BC; /* je: equal / zero */

loc_003C13AE: ;
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003C13BC; /* jb: below (unsigned <) */

loc_003C13B7: ;
    xmm0 = xmm1; /* movaps */
    SET_LO8(ecx, 1);

loc_003C13BC: ;
    if (CMP_EQ(MEM32(eax + 0x10), 0)) goto loc_003C13D1; /* je: equal / zero */

loc_003C13C2: ;
    xmm1 = MEMF(eax + 0x14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003C13D1; /* jb: below (unsigned <) */

loc_003C13CC: ;
    xmm0 = xmm1; /* movaps */
    SET_LO8(ecx, 1);

loc_003C13D1: ;
    if (CMP_EQ(MEM32(eax + 0x24), 0)) goto loc_003C13E6; /* je: equal / zero */

loc_003C13D7: ;
    xmm1 = MEMF(eax + 0x28); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003C13E6; /* jb: below (unsigned <) */

loc_003C13E1: ;
    xmm0 = xmm1; /* movaps */
    SET_LO8(ecx, 1);

loc_003C13E6: ;
    if (CMP_EQ(MEM32(eax + 0x38), 0)) goto loc_003C13FB; /* je: equal / zero */

loc_003C13EC: ;
    xmm1 = MEMF(eax + 0x3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003C13FB; /* jb: below (unsigned <) */

loc_003C13F6: ;
    xmm0 = xmm1; /* movaps */
    SET_LO8(ecx, 1);

loc_003C13FB: ;
    if (CMP_EQ(MEM32(eax + 0x4C), 0)) goto loc_003C1410; /* je: equal / zero */

loc_003C1401: ;
    xmm1 = MEMF(eax + 0x50); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003C1410; /* jb: below (unsigned <) */

loc_003C140B: ;
    xmm0 = xmm1; /* movaps */
    SET_LO8(ecx, 1);

loc_003C1410: ;
    if (CMP_EQ(MEM32(eax + 0x60), 0)) goto loc_003C1425; /* je: equal / zero */

loc_003C1416: ;
    xmm1 = MEMF(eax + 0x64); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003C1425; /* jb: below (unsigned <) */

loc_003C1420: ;
    xmm0 = xmm1; /* movaps */
    SET_LO8(ecx, 1);

loc_003C1425: ;
    if (CMP_EQ(MEM32(eax + 0x74), 0)) goto loc_003C143A; /* je: equal / zero */

loc_003C142B: ;
    xmm1 = MEMF(eax + 0x78); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003C143A; /* jb: below (unsigned <) */

loc_003C1435: ;
    xmm0 = xmm1; /* movaps */
    SET_LO8(ecx, 1);

loc_003C143A: ;
    if (CMP_EQ(MEM32(eax + 0x88), 0)) goto loc_003C1455; /* je: equal / zero */

loc_003C1443: ;
    xmm1 = MEMF(eax + 0x8C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003C1455; /* jb: below (unsigned <) */

loc_003C1450: ;
    xmm0 = xmm1; /* movaps */
    SET_LO8(ecx, 1);

loc_003C1455: ;
    eax = eax + 0xA0;
    edx--;
    if ((edx != 0)) goto loc_003C13A8; /* jne: not equal / not zero */

loc_003C1461: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003C146D; /* je: equal / zero */

loc_003C1465: ;
    xmm0 = xmm0 + MEMF(0x648E54); /* addss */

loc_003C146D: ;
    eax = 0; /* xor self */
    ecx = esi;

loc_003C1471: ;
    if (CMP_EQ(MEM32(ecx), 0)) { sub_003C1484(); return; } /* je: equal / zero */

loc_003C1476: ;
    eax++;
    ecx = ecx + 0x14;
    if (CMP_L(eax, 0x10)) goto loc_003C1471; /* jl: less (signed <) */

loc_003C147F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C14C0
 * Original: 0x003C14C0 - 0x003C1540 (128 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C14C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C14C0: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C153C; /* jne: not equal / not zero */

loc_003C14CE: ;
    ecx = esi + 8;
    eax = 0; /* xor self */
    edx = ecx;

loc_003C14D5: ;
    if (CMP_EQ(MEM32(edx), ebp)) goto loc_003C1502; /* je: equal / zero */

loc_003C14D9: ;
    eax++;
    edx = edx + 0x14;
    if (CMP_L(eax, 0x10)) goto loc_003C14D5; /* jl: less (signed <) */

loc_003C14E2: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_003C153C; /* je: equal / zero */

loc_003C14E7: ;
    eax = 0; /* xor self */
    /* nop */

loc_003C14F0: ;
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_003C1530; /* je: equal / zero */

loc_003C14F5: ;
    eax++;
    ecx = ecx + 0x14;
    if (CMP_L(eax, 0x10)) goto loc_003C14F0; /* jl: less (signed <) */

loc_003C14FE: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003C1502: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_003C1521; /* je: equal / zero */

loc_003C1507: ;
    if (TEST_NZ(edi, edi)) goto loc_003C1516; /* jne: not equal / not zero */

loc_003C150B: ;
    eax = eax + eax * 4;
    MEM32(esi + eax * 4 + 8) = edi;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003C1516: ;
    ecx = eax + eax * 4;
    MEM32(esi + ecx * 4 + 0x10) = edi;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003C1521: ;
    edx = eax + eax * 4;
    MEM32(esi + edx * 4 + 8) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003C1530: ;
    eax = eax + eax * 4;
    eax = esi + eax * 4;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0x10) = edi;

loc_003C153C: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1540
 * Original: 0x003C1540 - 0x003C1674 (308 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1540: ;
    xmm0 = MEMF(0x849C30); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    ecx = 2;
    eax = ebx + 0xC;

loc_003C1555: ;
    ebp = MEM32(eax + -4);
    if (TEST_Z(ebp, ebp)) goto loc_003C1568; /* je: equal / zero */

loc_003C155C: ;
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax))) goto loc_003C1568; /* jbe: below or equal (unsigned <=) */

loc_003C1561: ;
    xmm0 = MEMF(eax); /* movss */
    esi = ecx + -2;

loc_003C1568: ;
    ebp = MEM32(eax + 0x10);
    if (TEST_Z(ebp, ebp)) goto loc_003C157D; /* je: equal / zero */

loc_003C156F: ;
    /* comiss xmm0, MEMF(eax + 0x14) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x14))) goto loc_003C157D; /* jbe: below or equal (unsigned <=) */

loc_003C1575: ;
    xmm0 = MEMF(eax + 0x14); /* movss */
    esi = ecx + -1;

loc_003C157D: ;
    ebp = MEM32(eax + 0x24);
    if (TEST_Z(ebp, ebp)) goto loc_003C1591; /* je: equal / zero */

loc_003C1584: ;
    /* comiss xmm0, MEMF(eax + 0x28) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x28))) goto loc_003C1591; /* jbe: below or equal (unsigned <=) */

loc_003C158A: ;
    xmm0 = MEMF(eax + 0x28); /* movss */
    esi = ecx;

loc_003C1591: ;
    ebp = MEM32(eax + 0x38);
    if (TEST_Z(ebp, ebp)) goto loc_003C15A6; /* je: equal / zero */

loc_003C1598: ;
    /* comiss xmm0, MEMF(eax + 0x3C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x3C))) goto loc_003C15A6; /* jbe: below or equal (unsigned <=) */

loc_003C159E: ;
    xmm0 = MEMF(eax + 0x3C); /* movss */
    esi = ecx + 1;

loc_003C15A6: ;
    ebp = MEM32(eax + 0x4C);
    if (TEST_Z(ebp, ebp)) goto loc_003C15BB; /* je: equal / zero */

loc_003C15AD: ;
    /* comiss xmm0, MEMF(eax + 0x50) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x50))) goto loc_003C15BB; /* jbe: below or equal (unsigned <=) */

loc_003C15B3: ;
    xmm0 = MEMF(eax + 0x50); /* movss */
    esi = ecx + 2;

loc_003C15BB: ;
    ebp = MEM32(eax + 0x60);
    if (TEST_Z(ebp, ebp)) goto loc_003C15D0; /* je: equal / zero */

loc_003C15C2: ;
    /* comiss xmm0, MEMF(eax + 0x64) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x64))) goto loc_003C15D0; /* jbe: below or equal (unsigned <=) */

loc_003C15C8: ;
    xmm0 = MEMF(eax + 0x64); /* movss */
    esi = ecx + 3;

loc_003C15D0: ;
    ebp = MEM32(eax + 0x74);
    if (TEST_Z(ebp, ebp)) goto loc_003C15E5; /* je: equal / zero */

loc_003C15D7: ;
    /* comiss xmm0, MEMF(eax + 0x78) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x78))) goto loc_003C15E5; /* jbe: below or equal (unsigned <=) */

loc_003C15DD: ;
    xmm0 = MEMF(eax + 0x78); /* movss */
    esi = ecx + 4;

loc_003C15E5: ;
    ebp = MEM32(eax + 0x88);
    if (TEST_Z(ebp, ebp)) goto loc_003C1603; /* je: equal / zero */

loc_003C15EF: ;
    /* comiss xmm0, MEMF(eax + 0x8C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x8C))) goto loc_003C1603; /* jbe: below or equal (unsigned <=) */

loc_003C15F8: ;
    xmm0 = MEMF(eax + 0x8C); /* movss */
    esi = ecx + 5;

loc_003C1603: ;
    ecx = ecx + 8;
    ebp = ecx + -2;
    eax = eax + 0xA0;
    if (CMP_L(ebp, 0x10)) goto loc_003C1555; /* jl: less (signed <) */

loc_003C1617: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_003C1669; /* je: equal / zero */

loc_003C161C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esi + esi * 4;
    eax = ebx + eax * 4;
    ecx = eax;
    ebp = MEM32(ecx);
    MEM32(edx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(ecx + 8);
    MEM32(edx + 8) = ebp;
    ebp = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ebp;
    ecx = MEM32(ecx + 0x10);
    MEM32(edx + 0x10) = ecx;
    PUSH32(esp, ebx);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_003BF540(); /* call 0x003BF540 */

loc_003C1669: ;
    eax = 0; /* xor self */
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(esi, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1680
 * Original: 0x003C1680 - 0x003C16AF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1680(void)
{

loc_003C1680: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C168F: ;
    PUSH32(esp, 3);
    MEM16(edi + 0x34) = LO16(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C169A: ;
    PUSH32(esp, 5);
    MEM32(edi + 0x38) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C16A4: ;
    esp = esp + 0xC;
    MEM32(edi + 0x3C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C16B0
 * Original: 0x003C16B0 - 0x003C16DF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C16B0(void)
{

loc_003C16B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C16C3: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C16CD: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C16D7: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C16E0
 * Original: 0x003C16E0 - 0x003C1755 (117 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C16E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C16E0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0x34);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_003C16F0: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_003C174D; /* je: equal / zero */

loc_003C16F6: ;
    eax = MEM32(ebx + 0x38);
    if (TEST_S(eax, eax)) goto loc_003C1711; /* jl: less (signed <) */

loc_003C16FD: ;
    if (CMP_GE(eax, 2)) goto loc_003C1711; /* jge: greater or equal (signed >=) */

loc_003C1702: ;
    SET_LO8(eax, MEM8(eax + 0x862CCB));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_003C1711; /* je: equal / zero */

loc_003C170C: ;
    eax = SX8(LO8(eax));
    goto loc_003C1714;

loc_003C1711: ;
    eax = eax | 0xFFFFFFFFu;

loc_003C1714: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    PUSH32(esp, esi);
    esi = eax;
    if ((eax == 0)) goto loc_003C174C; /* je: equal / zero */

loc_003C1727: ;
    PUSH32(esp, 0); sub_00289400(); /* call 0x00289400 */

loc_003C172C: ;
    eax = MEM32(edi + 0x570);
    if (TEST_Z(eax, eax)) goto loc_003C174C; /* je: equal / zero */

loc_003C1736: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003C174C; /* je: equal / zero */

loc_003C173D: ;
    edi = MEM32(ebx + 0x3C);
    PUSH32(esp, esi);
    esi = eax + 0xA50;
    PUSH32(esp, 0); sub_003C14C0(); /* call 0x003C14C0 */

loc_003C174C: ;
    POP32(esp, esi);

loc_003C174D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1760
 * Original: 0x003C1760 - 0x003C180F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1760(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C1760: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_003C1773; /* jne: not equal / not zero */

loc_003C176E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003C1773: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_003C17BB; /* je: equal / zero */

loc_003C1799: ;
    if (CMP_B(MEM32(esi + 0x80), 0x40)) goto loc_003C17BB; /* jb: below (unsigned <) */

loc_003C17A2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C17AC: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C17B4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_003C17DC; /* jne: not equal / not zero */

loc_003C17BB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C17CD: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C17D5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_003C180F(); return; } /* je: equal / zero */

loc_003C17DC: ;
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
    MEM32(eax) = 0x642260;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1820
 * Original: 0x003C1820 - 0x003C1826 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1820(void)
{

loc_003C1820: ;
    eax = 0x23;
    esp += 4; return; /* ret */

}

/**
 * sub_003C1830
 * Original: 0x003C1830 - 0x003C188B (91 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1830(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C1830: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003C1838: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_003C1840: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_003C188B(); return; } /* je: equal / zero */

loc_003C1844: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_003C1840; /* jl: less (signed <) */

loc_003C1850: ;
    edx = 0x600E6C;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x39));
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x642468);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_003C1884: ;
    esp = esp + 0x28;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C18A0
 * Original: 0x003C18A0 - 0x003C19B3 (275 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C18A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C18A0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi) = 0x60C220;
    MEM32(edi + 4) = 0;
    MEM32(edi + 8) = 0;
    MEMF(edi + 0xC) = xmm0; /* movss */
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEM32(edi + 0x14) = eax;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C18D8; /* jne: not equal / not zero */

loc_003C18CF: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_003C18F4; /* jne: not equal / not zero */

loc_003C18D8: ;
    esi = MEM32(esp + 0xC);
    if (CMP_NE(MEM16(esi + 0xAC), 0)) goto loc_003C18F8; /* jne: not equal / not zero */

loc_003C18E6: ;
    PUSH32(esp, 0); sub_002625D0(); /* call 0x002625D0 */

loc_003C18EB: ;
    MEM16(esi + 0xAC) = LO16(eax);
    goto loc_003C18F8;

loc_003C18F4: ;
    esi = MEM32(esp + 0xC);

loc_003C18F8: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0xA0) = 3;
    if (TEST_NZ(eax, eax)) goto loc_003C190D; /* jne: not equal / not zero */

loc_003C1908: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003C190D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_003C1955; /* je: equal / zero */

loc_003C1933: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_003C1955; /* jb: below (unsigned <) */

loc_003C193C: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C1946: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C194E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003C1976; /* jne: not equal / not zero */

loc_003C1955: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C1967: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C196F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_003C19B3(); return; } /* je: equal / zero */

loc_003C1976: ;
    ecx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 0x238);
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(eax) = 0x63AFE8;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x14) = 0;
    MEM8(ecx + 4) = 1;
    MEM32(eax) = 0x63AFD0;
    g_seh_ebp = ebp; sub_003C19B5(); return; /* tail jmp 0x003C19B5 */

}

/**
 * sub_003C19D0
 * Original: 0x003C19D0 - 0x003C1A58 (136 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C19D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003C19D0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C19E5; /* jne: not equal / not zero */

loc_003C19DC: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_003C19FB; /* jne: not equal / not zero */

loc_003C19E5: ;
    if (CMP_NE(MEM16(ebx + 0xAC), 0)) goto loc_003C19FB; /* jne: not equal / not zero */

loc_003C19EF: ;
    PUSH32(esp, 0); sub_002625D0(); /* call 0x002625D0 */

loc_003C19F4: ;
    MEM16(ebx + 0xAC) = LO16(eax);

loc_003C19FB: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xAC);
    MEM32(esi + 0x34) = eax;
    SET_LO8(ecx, MEM8(edi + 8));
    MEM8(esi + 0x38) = LO8(ecx);
    edx = (int32_t)MEMF(edi + 0xC); /* cvttss2si */
    MEM32(esi + 0x3C) = edx;
    eax = MEM32(edi + 4);
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 / MEMF(eax + 0x10); /* divss */
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x39) = LO8(eax);
    ebx = ebx + 0x52C;
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM32(esi + 0x40) = ecx;
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esi + 0x44) = edx;
    ecx = MEM32(ebx);
    eax = esi + 0x48;
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0x14);
    MEM32(esi + 0x5C) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1A60
 * Original: 0x003C1A60 - 0x003C1ACC (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1A60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003C1A60: ;
    if (CMP_NE(MEM8(edx + 0x38), 2)) goto loc_003C1A70; /* jne: not equal / not zero */

loc_003C1A66: ;
    xmm0 = (float)(int32_t)MEM32(edx + 0x3C); /* cvtsi2ss */
    MEMF(eax + 0xC) = xmm0; /* movss */

loc_003C1A70: ;
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x38);
    MEM32(eax + 8) = ecx;
    eax = MEM32(eax + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = (float)(int32_t)MEM32(edx + 0x40); /* cvtsi2ss */
    if (TEST_Z(eax, eax)) goto loc_003C1AAD; /* je: equal / zero */

loc_003C1A83: ;
    ecx = ZX8(MEM8(edx + 0x39));
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(eax + 8), ecx)) goto loc_003C1AA7; /* je: equal / zero */

loc_003C1A8D: ;
    esi = MEM32(eax + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(eax + 8) = ecx;
    if (TEST_Z(esi, esi)) goto loc_003C1AA7; /* je: equal / zero */

loc_003C1A97: ;
    MEM8(esi + 4) = 0;
    esi = MEM32(eax + 4);
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 4);
    MEM8(ecx + 4) = 1;

loc_003C1AA7: ;
    MEMF(eax + 0xC) = xmm0; /* movss */
    POP32(esp, esi);

loc_003C1AAD: ;
    eax = MEM32(esp + 4);
    edx = edx + 0x48;
    ecx = MEM32(edx);
    eax = eax + 0x52C;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1AD0
 * Original: 0x003C1AD0 - 0x003C1AEA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1AD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C1AD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x38));
    if (CMP_EQ(LO8(eax), 2)) { sub_003C1AEA(); return; } /* je: equal / zero */

loc_003C1ADC: ;
    if (CMP_EQ(LO8(eax), 1)) { sub_003C1AEA(); return; } /* je: equal / zero */

loc_003C1AE0: ;
    eax = SX8(LO8(eax));
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C1B40
 * Original: 0x003C1B40 - 0x003C1BC8 (136 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1B40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003C1B40: ;
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C1B5C; /* je: equal / zero */

loc_003C1B4C: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C1B5C; /* je: equal / zero */

loc_003C1B55: ;
    eax = edi;
    PUSH32(esp, 0); sub_00261910(); /* call 0x00261910 */

loc_003C1B5C: ;
    (void)0; /* cmp MEM32(0x863D04), 1 - flags set for next jcc */
    xmm2 = MEMF(0x7FA21C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_003C1B82; /* je: equal / zero */

loc_003C1B70: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C1BA7; /* je: equal / zero */

loc_003C1B79: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C1BA7; /* je: equal / zero */

loc_003C1B82: ;
    if (CMP_NE(MEM32(esi + 8), 2)) goto loc_003C1BA7; /* jne: not equal / not zero */

loc_003C1B88: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0xC) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_003C1BA7; /* jb: below (unsigned <) */

loc_003C1B9B: ;
    MEMF(esi + 0xC) = xmm1; /* movss */
    MEM32(esi + 8) = 0;

loc_003C1BA7: ;
    xmm0 = MEMF(esi + 0x10); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003C1BBA; /* jbe: below or equal (unsigned <=) */

loc_003C1BB1: ;
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esi + 0x10) = xmm0; /* movss */

loc_003C1BBA: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edi = edi + 0x78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_003C1BC6: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1BD0
 * Original: 0x003C1BD0 - 0x003C1D54 (388 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1BD0: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(MEM32(0x863D04), 1)) { sub_003C1D54(); return; } /* je: equal / zero */

loc_003C1BE0: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003C1D54(); return; } /* jne: not equal / not zero */

loc_003C1BED: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    xmm0 = MEMF(eax + 0xC); /* movss */
    eax = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(edi + 8), eax)) goto loc_003C1C33; /* jne: not equal / not zero */

loc_003C1C01: ;
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003C1C22; /* jnp: not parity */

loc_003C1C14: ;
    xmm2 = MEMF(edi + 0xC); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_003C1C33; /* jp: parity */

loc_003C1C22: ;
    if (CMP_NE(ecx, MEM32(esp + 0x14))) goto loc_003C1C33; /* jne: not equal / not zero */

loc_003C1C28: ;
    /* ucomiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003C1C57; /* jnp: not parity */

loc_003C1C33: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x864EC1);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_003C1C57; /* jle: less or equal (signed <=) */

loc_003C1C40: ;
    PUSH32(esp, ebx);
    ebx = 0x864EC8;

loc_003C1C46: ;
    if (CMP_NE(MEM8(ebx), 0)) goto loc_003C1C5B; /* jne: not equal / not zero */

loc_003C1C4B: ;
    eax++;
    ebx = ebx + 0xA50;
    if (CMP_L(eax, ecx)) goto loc_003C1C46; /* jl: less (signed <) */

loc_003C1C56: ;
    POP32(esp, ebx);

loc_003C1C57: ;
    POP32(esp, edi);
    esp += 28; return; /* ret 24 */

loc_003C1C5B: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003C1C69; /* jne: not equal / not zero */

loc_003C1C64: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003C1C69: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, ebp);
    edx++;
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_003C1CB3; /* je: equal / zero */

loc_003C1C91: ;
    if (CMP_B(MEM32(esi + 0x80), 0x60)) goto loc_003C1CB3; /* jb: below (unsigned <) */

loc_003C1C9A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C1CA4: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C1CAC: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003C1CD4; /* jne: not equal / not zero */

loc_003C1CB3: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C1CC5: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C1CCD: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003C1CDD; /* je: equal / zero */

loc_003C1CD4: ;
    PUSH32(esp, 0); sub_003C1DA0(); /* call 0x003C1DA0 */

loc_003C1CD9: ;
    esi = eax;
    goto loc_003C1CDF;

loc_003C1CDD: ;
    esi = 0; /* xor self */

loc_003C1CDF: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_003C19D0(); /* call 0x003C19D0 */

loc_003C1CE8: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    SET_LO8(ecx, MEM8(esp + 0x18));
    edx = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    MEM8(esi + 0x39) = LO8(eax);
    eax = MEM32(esp + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0x38) = LO8(ecx);
    ecx = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x40) = ecx;
    if (TEST_Z(eax, eax)) goto loc_003C1D33; /* je: equal / zero */

loc_003C1D10: ;
    MEM32(esp + 0x18) = eax;
    edi = esp + 0x1C;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_003C1D21: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C1D33; /* je: equal / zero */

loc_003C1D25: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x54) = 1;
    MEM32(esi + 0x58) = edx;

loc_003C1D33: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0); sub_004168D0(); /* call 0x004168D0 */

loc_003C1D3F: ;
    ecx = MEM32(ebx + 0x9DC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003C1D4D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003C1DA0
 * Original: 0x003C1DA0 - 0x003C1DEB (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1DA0(void)
{

loc_003C1DA0: ;
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = edx | 0xFFFFFFFFu;
    esi = 0; /* xor self */
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
    MEM32(eax) = 0x6423F8;
    edi = eax + 0x48;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    POP32(esp, edi);
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x5C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1DF0
 * Original: 0x003C1DF0 - 0x003C1E70 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1DF0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003C1DFE; /* jne: not equal / not zero */

loc_003C1DF9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003C1DFE: ;
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
    if (TEST_Z(esi, esi)) goto loc_003C1E48; /* je: equal / zero */

loc_003C1E26: ;
    if (CMP_B(MEM32(esi + 0x80), 0x60)) goto loc_003C1E48; /* jb: below (unsigned <) */

loc_003C1E2F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C1E39: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C1E41: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003C1E69; /* jne: not equal / not zero */

loc_003C1E48: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C1E5A: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C1E62: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_003C1E70(); return; } /* je: equal / zero */

loc_003C1E69: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003C1DA0(); return; /* tail jmp 0x003C1DA0 */

}

/**
 * sub_003C1E80
 * Original: 0x003C1E80 - 0x003C1F1E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1E80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x5C);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1E92: ;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1E9C: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x38);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1EA7: ;
    eax = ZX8(MEM8(edi + 0x39));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1EB2: ;
    eax = MEM32(edi + 0x40);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1EBC: ;
    SET_LO8(eax, MEM8(edi + 0x38));
    esp = esp + 0x14;
    if (CMP_NE(LO8(eax), 2)) goto loc_003C1ED3; /* jne: not equal / not zero */

loc_003C1EC6: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1ED0: ;
    esp = esp + 4;

loc_003C1ED3: ;
    eax = MEM32(edi + 0x5C);
    if (TEST_NZ(eax, eax)) goto loc_003C1F19; /* jne: not equal / not zero */

loc_003C1EDA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edi + 0x48;
    ebp = 3;

loc_003C1EE4: ;
    eax = MEM32(ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1EED: ;
    esp = esp + 4;
    ebx = ebx + 4;
    ebp--;
    if ((ebp != 0)) goto loc_003C1EE4; /* jne: not equal / not zero */

loc_003C1EF6: ;
    eax = MEM32(edi + 0x54);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1F00: ;
    eax = MEM32(edi + 0x54);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003C1F19; /* je: equal / zero */

loc_003C1F0C: ;
    eax = MEM32(edi + 0x58);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_003C1F16: ;
    esp = esp + 4;

loc_003C1F19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1F20
 * Original: 0x003C1F20 - 0x003C1FD7 (183 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1F20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1F20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = ecx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C1F2F: ;
    PUSH32(esp, 0x10);
    MEM32(edi + 0x5C) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C1F39: ;
    esp = esp + 8;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_003C1F45; /* jns: not sign (positive) */

loc_003C1F40: ;
    eax = eax | 0xFFFF0000u;

loc_003C1F45: ;
    PUSH32(esp, 2);
    MEM32(edi + 0x34) = eax;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C1F4F: ;
    PUSH32(esp, 2);
    MEM8(edi + 0x38) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C1F59: ;
    PUSH32(esp, 8);
    MEM8(edi + 0x39) = LO8(eax);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C1F63: ;
    esp = esp + 0xC;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_003C1F6F; /* jns: not sign (positive) */

loc_003C1F6A: ;
    eax = eax | 0xFFFFFF00u;

loc_003C1F6F: ;
    MEM32(edi + 0x40) = eax;
    if (CMP_NE(MEM8(edi + 0x38), 2)) goto loc_003C1F8F; /* jne: not equal / not zero */

loc_003C1F78: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C1F7F: ;
    esp = esp + 4;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_003C1F8C; /* je: equal / zero */

loc_003C1F87: ;
    eax = eax | 0xFFFFE000u;

loc_003C1F8C: ;
    MEM32(edi + 0x3C) = eax;

loc_003C1F8F: ;
    eax = MEM32(edi + 0x5C);
    if (TEST_NZ(eax, eax)) goto loc_003C1FD2; /* jne: not equal / not zero */

loc_003C1F96: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edi + 0x48;
    ebp = 3;

loc_003C1FA0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C1FA7: ;
    MEM32(ebx) = eax;
    esp = esp + 4;
    ebx = ebx + 4;
    ebp--;
    if ((ebp != 0)) goto loc_003C1FA0; /* jne: not equal / not zero */

loc_003C1FB2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C1FB9: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    MEM32(edi + 0x54) = eax;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003C1FD2; /* je: equal / zero */

loc_003C1FC5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_003C1FCC: ;
    esp = esp + 4;
    MEM32(edi + 0x58) = eax;

loc_003C1FD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1FE0
 * Original: 0x003C1FE0 - 0x003C205B (123 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1FE0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_003C1FE0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_003C1FF1: ;
    if (TEST_Z(eax, eax)) goto loc_003C2054; /* je: equal / zero */

loc_003C1FF5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x34);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_003C2002: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_003C2052; /* je: equal / zero */

loc_003C2008: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_003C2052; /* je: equal / zero */

loc_003C200F: ;
    edi = MEM32(esi + 0x570);
    if (TEST_Z(edi, edi)) goto loc_003C2052; /* je: equal / zero */

loc_003C2019: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003C201F: ;
    eax = eax - 0x577BDC;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    eax = eax & edi;
    if ((eax == 0)) goto loc_003C2052; /* je: equal / zero */

loc_003C202E: ;
    SET_LO8(ecx, MEM8(0x862C5C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003C2049; /* jne: not equal / not zero */

loc_003C2038: ;
    PUSH32(esp, esi);
    edx = ebx;
    PUSH32(esp, 0); sub_003C1A60(); /* call 0x003C1A60 */

loc_003C2040: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003C2049: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_003C2052: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003C2054: ;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2060
 * Original: 0x003C2060 - 0x003C207C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2060(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C2060: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x570);
    if (TEST_Z(edi, edi)) goto loc_003C2078; /* je: equal / zero */

loc_003C206F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_003C19D0(); /* call 0x003C19D0 */

loc_003C2077: ;
    POP32(esp, esi);

loc_003C2078: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C2080
 * Original: 0x003C2080 - 0x003C2095 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2080(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C2080: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x34);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_002623F0(); /* call 0x002623F0 */

loc_003C208C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_003C2095(); return; } /* je: equal / zero */

loc_003C2091: ;
    SET_LO8(eax, MEM8(eax + 0x60));
    esp += 4; return; /* ret */

}

/**
 * sub_003C20A0
 * Original: 0x003C20A0 - 0x003C21F7 (343 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C20A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C20A0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, ebx);
    eax = 1;
    PUSH32(esp, 0); sub_003C18A0(); /* call 0x003C18A0 */

loc_003C20B0: ;
    MEM32(edi) = 0x60C220;
    eax = MEM32(ebx + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003C2129; /* je: equal / zero */

loc_003C20C0: ;
    if (CMP_GE(eax, 0x205)) goto loc_003C2129; /* jge: greater or equal (signed >=) */

loc_003C20C7: ;
    ecx = MEM32(ebx + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_003C2129; /* je: equal / zero */

loc_003C20CE: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_003C2129; /* je: equal / zero */

loc_003C20D5: ;
    ecx = MEM32(ecx);
    if (TEST_Z(ecx, ecx)) goto loc_003C2129; /* je: equal / zero */

loc_003C20DB: ;
    if (CMP_NE(ecx, 0x3E7)) goto loc_003C20EA; /* jne: not equal / not zero */

loc_003C20E3: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003C20E8: ;
    goto loc_003C2129;

loc_003C20EA: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0)) goto loc_003C20FC; /* ja: above (unsigned >) */

loc_003C20F5: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003C20FA: ;
    goto loc_003C2129;

loc_003C20FC: ;
    eax = MEM32(ebx + 0x74);
    eax = MEM32(eax + 0x50);
    edx = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = ebx;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_003C2126: ;
    esp = esp + 0x20;

loc_003C2129: ;
    ecx = MEM32(edi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_003C2136; /* je: equal / zero */

loc_003C2130: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_003C2136: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003C2144; /* jne: not equal / not zero */

loc_003C213F: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003C2144: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (TEST_Z(esi, esi)) goto loc_003C218C; /* je: equal / zero */

loc_003C216A: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_003C218C; /* jb: below (unsigned <) */

loc_003C2173: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C217D: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C2185: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003C21AD; /* jne: not equal / not zero */

loc_003C218C: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C219E: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C21A6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_003C21F7(); return; } /* je: equal / zero */

loc_003C21AD: ;
    ecx = MEM32(ebx + 0x238);
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(eax) = 0x63AFE8;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x14) = 0;
    MEM8(ecx + 4) = 1;
    MEM32(eax) = 0x63AFD0;
    MEM32(edi + 4) = eax;
    eax = MEM32(ebx + 0x238);
    MEM8(eax + 4) = 1;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2210
 * Original: 0x003C2210 - 0x003C2580 (880 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2210: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 0x570);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(edi + 0x234) = 0xFF;
    if (TEST_NZ(eax, eax)) goto loc_003C22C6; /* jne: not equal / not zero */

loc_003C222F: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_003C223D; /* jne: not equal / not zero */

loc_003C2238: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003C223D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_003C2285; /* je: equal / zero */

loc_003C2263: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_003C2285; /* jb: below (unsigned <) */

loc_003C226C: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C2276: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C227E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003C22A6; /* jne: not equal / not zero */

loc_003C2285: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_003C2297: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003C229F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003C22AF; /* je: equal / zero */

loc_003C22A6: ;
    ebx = edi;
    PUSH32(esp, 0); sub_003C20A0(); /* call 0x003C20A0 */

loc_003C22AD: ;
    goto loc_003C22B1;

loc_003C22AF: ;
    eax = 0; /* xor self */

loc_003C22B1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x570) = eax;
    if (TEST_Z(eax, eax)) goto loc_003C2579; /* je: equal / zero */

loc_003C22BF: ;
    eax = edi;
    PUSH32(esp, 0); sub_002F8750(); /* call 0x002F8750 */

loc_003C22C6: ;
    esi = MEM32(edi + 0x570);
    PUSH32(esp, ebp);
    eax = edi;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_003C1B40(); /* call 0x003C1B40 */

loc_003C22D8: ;
    SET_LO8(eax, MEM8(0x862C5C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = MEM32(0x84A5F8);
    ebp = ebx;
    MEM32(esp + 0x10) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C22FE; /* jne: not equal / not zero */

loc_003C22F1: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C243C; /* jne: not equal / not zero */

loc_003C22FE: ;
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm3 = MEMF(0x6493EC); /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_003C2361; /* jle: less or equal (signed <=) */

loc_003C2311: ;
    esi = eax;

loc_003C2313: ;
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003C2358; /* je: equal / zero */

loc_003C231D: ;
    eax = MEM32(ebp + 0x238);
    ecx = MEM32(eax);
    eax = MEM32(edi + 0x238);
    eax = MEM32(eax);
    if (CMP_EQ(eax, ecx)) goto loc_003C233B; /* je: equal / zero */

loc_003C2331: ;
    if (CMP_EQ(eax, 2)) goto loc_003C233B; /* je: equal / zero */

loc_003C2336: ;
    if (CMP_NE(ecx, 2)) goto loc_003C2358; /* jne: not equal / not zero */

loc_003C233B: ;
    ecx = edi + 0x78;
    PUSH32(esp, ecx);
    edx = ebp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003C2348: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_003C2358; /* jbe: below or equal (unsigned <=) */

loc_003C2350: ;
    MEM32(esp + 0x10) = 1;

loc_003C2358: ;
    ebp = ebp + 0x6D0;
    esi--;
    if ((esi != 0)) goto loc_003C2313; /* jne: not equal / not zero */

loc_003C2361: ;
    esi = 0x10;
    ebx = ebx + 0x6D78;
    /* nop */

loc_003C2370: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + esi), 0)) goto loc_003C23C6; /* je: equal / zero */

loc_003C237B: ;
    if (TEST_Z(ebp, ebp)) goto loc_003C23C6; /* je: equal / zero */

loc_003C237F: ;
    eax = MEM32(ebp + 0x238);
    if (TEST_Z(eax, eax)) goto loc_003C23C6; /* je: equal / zero */

loc_003C2389: ;
    ecx = MEM32(eax);
    eax = MEM32(edi + 0x238);
    eax = MEM32(eax);
    if (CMP_EQ(eax, ecx)) goto loc_003C23A5; /* je: equal / zero */

loc_003C2397: ;
    if (CMP_EQ(eax, 2)) goto loc_003C23A5; /* je: equal / zero */

loc_003C239C: ;
    if (CMP_EQ(ecx, 2)) goto loc_003C23A5; /* je: equal / zero */

loc_003C23A1: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003C23A7;

loc_003C23A5: ;
    SET_LO8(eax, 1);

loc_003C23A7: ;
    if (CMP_NE(MEM32(ebx + -16), 0x10E)) goto loc_003C23C6; /* jne: not equal / not zero */

loc_003C23B0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C23C6; /* je: equal / zero */

loc_003C23B4: ;
    ecx = edi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003C23BE: ;
    esp = esp + 8;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_003C23DC; /* ja: above (unsigned >) */

loc_003C23C6: ;
    esi++;
    ebx = ebx + 0x6D0;
    if (CMP_L(esi, 0x80)) goto loc_003C2370; /* jl: less (signed <) */

loc_003C23D5: ;
    ebx = 1;
    goto loc_003C23E5;

loc_003C23DC: ;
    ebx = 1;
    MEM32(esp + 0x10) = ebx;

loc_003C23E5: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    xmm0 = MEMF(eax + 0xC); /* movss */
    ecx = MEM32(eax + 8);
    eax = MEM32(esp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(edx + 8);
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003C2420; /* je: equal / zero */

loc_003C2405: ;
    if (CMP_EQ(eax, ebx)) goto loc_003C2441; /* je: equal / zero */

loc_003C2409: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003C1BD0(); /* call 0x003C1BD0 */

loc_003C241E: ;
    goto loc_003C2441;

loc_003C2420: ;
    if (TEST_Z(eax, eax)) goto loc_003C2441; /* je: equal / zero */

loc_003C2424: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003C1BD0(); /* call 0x003C1BD0 */

loc_003C243A: ;
    goto loc_003C2441;

loc_003C243C: ;
    ebx = 1;

loc_003C2441: ;
    ecx = MEM32(esp + 0x1C);
    (void)0; /* cmp MEM32(ecx + 8), ebx - flags set for next jcc */
    eax = MEM32(edi + 0xA4);
    POP32(esp, ebp);
    if (CMP_NE(MEM32(ecx + 8), ebx)) goto loc_003C24F7; /* jne: not equal / not zero */

loc_003C2455: ;
    esi = 2;
    if (CMP_EQ(eax, esi)) goto loc_003C2579; /* je: equal / zero */

loc_003C2462: ;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003C2579; /* je: equal / zero */

loc_003C2470: ;
    if (CMP_GE(eax, 0x205)) goto loc_003C2579; /* jge: greater or equal (signed >=) */

loc_003C247B: ;
    ecx = MEM32(edi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_003C2579; /* je: equal / zero */

loc_003C2486: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_003C2579; /* je: equal / zero */

loc_003C2491: ;
    edx = MEM32(edx + 0x18);
    if (TEST_Z(edx, edx)) goto loc_003C2579; /* je: equal / zero */

loc_003C249C: ;
    if (CMP_NE(edx, 0x3E7)) goto loc_003C24AF; /* jne: not equal / not zero */

loc_003C24A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_003C24AF: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), LO16(esi))) goto loc_003C24C4; /* ja: above (unsigned >) */

loc_003C24B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_003C24C4: ;
    eax = MEM32(ecx + 0x50);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0x1C));
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = edi;
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_003C24ED: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003C24F7: ;
    if (CMP_EQ(eax, ebx)) goto loc_003C2579; /* je: equal / zero */

loc_003C24FF: ;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003C2579; /* je: equal / zero */

loc_003C2509: ;
    if (CMP_GE(eax, 0x205)) goto loc_003C2579; /* jge: greater or equal (signed >=) */

loc_003C2510: ;
    ecx = MEM32(edi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_003C2579; /* je: equal / zero */

loc_003C2517: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_003C2579; /* je: equal / zero */

loc_003C251E: ;
    edx = MEM32(edx + 0xC);
    if (TEST_Z(edx, edx)) goto loc_003C2579; /* je: equal / zero */

loc_003C2525: ;
    if (CMP_NE(edx, 0x3E7)) goto loc_003C2538; /* jne: not equal / not zero */

loc_003C252D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_003C2538: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), LO16(ebx))) goto loc_003C254D; /* ja: above (unsigned >) */

loc_003C2542: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_003C254D: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x10));
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = edi;
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_003C2576: ;
    esp = esp + 0x20;

loc_003C2579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003C2640
 * Original: 0x003C2640 - 0x003C268E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2640(void)
{

loc_003C2640: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003B5BC0(); /* call 0x003B5BC0 */

loc_003C264C: ;
    MEM32(edi) = 0x6424C8;
    MEM32(edi + 4) = 6;
    ecx = MEM32(esi + 0x23C);
    eax = 0; /* xor self */
    MEM8(ecx + 0x18) = LO8(eax);
    edx = MEM32(esi + 0x238);
    MEM32(edx) = 2;
    MEM32(edi + 0x6C) = eax;
    esi = esi + 0x78;
    ecx = MEM32(esi);
    eax = edi + 0x70;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2690
 * Original: 0x003C2690 - 0x003C2708 (120 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2690: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    MEM32(esi + 0x7C) = eax;
    PUSH32(esp, edi);
    MEM8(esi + 0x80) = LO8(eax);
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_003C26AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_003C26BB: ;
    ecx = MEM32(0x828B48);
    ebx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - ecx;
    PUSH32(esp, 0x3E8);
    edx = edx - ebx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_003C26D9: ;
    edx = MEM32(esi + 0x6C);
    ebx = MEM32(esp + 0x10);
    eax = eax - edx;
    if (CMP_BE(eax, 0x7D0)) { sub_003C2708(); return; } /* jbe: below or equal (unsigned <=) */

loc_003C26E9: ;
    eax = MEM32(ebx + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003C26F4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_003C2701; /* jne: not equal / not zero */

loc_003C26FA: ;
    PUSH32(esp, 0); sub_003C29C0(); /* call 0x003C29C0 */

loc_003C26FF: ;
    g_seh_ebp = ebp; sub_003C2720(); return; /* tail jmp 0x003C2720 */

loc_003C2701: ;
    PUSH32(esp, 0); sub_003C2B60(); /* call 0x003C2B60 */

loc_003C2706: ;
    g_seh_ebp = ebp; sub_003C2720(); return; /* tail jmp 0x003C2720 */

}

/**
 * sub_003C27E0
 * Original: 0x003C27E0 - 0x003C286E (142 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C27E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003C27E0: ;
    SET_LO8(eax, MEM8(ecx + 0x209));
    xmm0 = MEMF(0x648E54); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) | 0x40);
    ebx = 0; /* xor self */
    /* comiss xmm0, MEMF(ecx + 0x260) - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(0x84A144);
    MEM8(ecx + 0x209) = LO8(eax);
    if ((xmm0 < MEMF(ecx + 0x260))) goto loc_003C2830; /* jb: below (unsigned <) */

loc_003C2809: ;
    if (TEST_S(esi, esi)) goto loc_003C286B; /* jl: less (signed <) */

loc_003C280D: ;
    /* nop */

loc_003C2810: ;
    edx = ZX8(LO8(ebx));
    MEM8(edx + ecx + 0xBD) = 0;
    MEM8(edx + ecx + 0xBF) = 0x64;
    PUSH32(esp, 0); sub_002F60E0(); /* call 0x002F60E0 */

loc_003C2828: ;
    ebx++;
    if (CMP_LE(ebx, esi)) goto loc_003C2810; /* jle: less or equal (signed <=) */

loc_003C282D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003C2830: ;
    if (TEST_S(esi, esi)) goto loc_003C286B; /* jl: less (signed <) */

loc_003C2834: ;
    SET_LO8(eax, MEM8(edi + ebx + 0x7C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = ZX8(LO8(ebx));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C2851; /* je: equal / zero */

loc_003C283F: ;
    MEM8(edx + ecx + 0xBD) = 0x1E;
    MEM8(edx + ecx + 0xBF) = 0x50;
    goto loc_003C2861;

loc_003C2851: ;
    MEM8(edx + ecx + 0xBD) = 0xFF;
    MEM8(edx + ecx + 0xBF) = 0x14;

loc_003C2861: ;
    PUSH32(esp, 0); sub_002F60E0(); /* call 0x002F60E0 */

loc_003C2866: ;
    ebx++;
    if (CMP_LE(ebx, esi)) goto loc_003C2834; /* jle: less or equal (signed <=) */

loc_003C286B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2870
 * Original: 0x003C2870 - 0x003C299C (300 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2870: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x23C);
    esi = ecx;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003C2884: ;
    ebp = MEM32(esp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    (void)0; /* cmp MEM16(ebp + 0x48), 0xFFFFFFFEu - flags set for next jcc */
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_EQ(MEM16(ebp + 0x48), 0xFFFFFFFEu)) goto loc_003C2943; /* je: equal / zero */

loc_003C289C: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_003C28A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_003C28B7: ;
    eax = eax - MEM32(0x828B48);
    ecx = MEM32(0x828B4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    edx = edx - ecx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_003C28D3: ;
    eax = eax - MEM32(esi + 0x6C);
    if (CMP_B(eax, 0x7D0)) goto loc_003C2996; /* jb: below (unsigned <) */

loc_003C28E1: ;
    esi = MEM32(ebp + 0x44);
    SET_LO16(eax, MEM16(ebp + 0x48));
    PUSH32(esp, 0); sub_00289500(); /* call 0x00289500 */

loc_003C28ED: ;
    edi = MEM32(edi + 0x23C);
    esi = eax;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003C28FA: ;
    if (TEST_Z(esi, esi)) goto loc_003C2996; /* je: equal / zero */

loc_003C2902: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C2996; /* jne: not equal / not zero */

loc_003C290E: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xB);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003C291C: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    esp = esp + 8;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8DA);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003C293D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003C2943: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C295A; /* je: equal / zero */

loc_003C2947: ;
    PUSH32(esp, 0); sub_00416770(); /* call 0x00416770 */

loc_003C294C: ;
    MEM32(esi + 0x6C) = eax;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003C295A: ;
    eax = MEM32(edi + 0x23C);
    MEM8(eax + 0x10) = 0;
    MEM8(eax + 8) = 0;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    xmm0 = (float)(int32_t)MEM32(ebp + 0x4C); /* cvtsi2ss */
    MEMF(edi + 0x78) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebp + 0x50); /* cvtsi2ss */
    MEMF(edi + 0x7C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(ebp + 0x54); /* cvtsi2ss */
    MEMF(edi + 0x80) = xmm0; /* movss */

loc_003C2996: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C29A0
 * Original: 0x003C29A0 - 0x003C29BA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C29A0(void)
{

loc_003C29A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003B5D70(); /* call 0x003B5D70 */

loc_003C29AF: ;
    MEM32(esi + 0x34) = 0xB;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C29C0
 * Original: 0x003C29C0 - 0x003C2B51 (401 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C29C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C29C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    xmm0 = MEMF(ebp + 0x260); /* movss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    PUSH32(esp, edi);
    MEMF(ebp + 0x260) = xmm0; /* movss */
    /* TODO: rdtsc  */
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_003C29ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_003C29FA: ;
    ecx = MEM32(0x828B48);
    edi = MEM32(0x828B4C);
    PUSH32(esp, ebx);
    eax = eax - ecx;
    PUSH32(esp, 0x3E8);
    edx = edx - edi - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_003C2A17: ;
    edi = MEM32(esp + 0x10);
    eax = eax - MEM32(edi + 0x6C);
    if (CMP_B(eax, 0x7D0)) goto loc_003C2B4B; /* jb: below (unsigned <) */

loc_003C2A29: ;
    SET_LO8(eax, MEM8(0x6BCFEB));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_003C2B31; /* jle: less or equal (signed <=) */

loc_003C2A3A: ;
    PUSH32(esp, esi);
    goto loc_003C2A40;

    /* nop */

loc_003C2A40: ;
    eax = MEM32(0x84A5F8);
    esi = ebx + eax;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003C2B12; /* je: equal / zero */

loc_003C2A56: ;
    ecx = MEM32(ebp + 0x74);
    edx = ZX16(MEM16(ecx + 0xE));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1EE);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 * MEMF(ebp + 0x260); /* mulss */
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    edx = ebp + 0x78;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm3 = xmm3 * MEMF(0x648CF0); /* mulss */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003C2A8D: ;
    xmm1 = xmm3; /* movaps */
    esp = esp + 8;
    xmm1 = xmm1 * xmm3; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003C2B12; /* jbe: below or equal (unsigned <=) */

loc_003C2A9C: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x444);
    SET_LO8(eax, MEM8(ecx + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C2AFC; /* jne: not equal / not zero */

loc_003C2AAF: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x28), _icall_esp); /* indirect call */
    }

loc_003C2AB6: ;
    if (TEST_Z(eax, eax)) goto loc_003C2B12; /* je: equal / zero */

loc_003C2ABA: ;
    edi = MEM32(ebp + 0x23C);
    eax = esi;
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_003C2AC7: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xB);
    eax = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003C2AD5: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    esp = esp + 8;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8DA);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_003C2AF6: ;
    edi = MEM32(esp + 0x14);
    goto loc_003C2B12;

loc_003C2AFC: ;
    esi = MEM32(esi + 0x564);
    if (TEST_Z(esi, esi)) goto loc_003C2B12; /* je: equal / zero */

loc_003C2B06: ;
    edx = ZX8(MEM8(esi + 0x2A8));
    MEM8(edx + edi + 0x7C) = 1;

loc_003C2B12: ;
    eax = MEM32(esp + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    eax++;
    ebx = ebx + 0x6D0;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_003C2A40; /* jl: less (signed <) */

loc_003C2B30: ;
    POP32(esp, esi);

loc_003C2B31: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C2B4B; /* je: equal / zero */

loc_003C2B3A: ;
    if (CMP_NE(MEM32(0x863D04), 1)) goto loc_003C2B4B; /* jne: not equal / not zero */

loc_003C2B43: ;
    eax = ebp + 0x78;
    PUSH32(esp, 0); sub_00341640(); /* call 0x00341640 */

loc_003C2B4B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2B60
 * Original: 0x003C2B60 - 0x003C2C8B (299 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2B60: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x23C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_003C2B72: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_003C2B96; /* je: equal / zero */

loc_003C2B78: ;
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003C2B96; /* je: equal / zero */

loc_003C2B82: ;
    esi = MEM32(eax + 0x444);
    MEM8(esi + 0x10) = 1;
    PUSH32(esp, 0); sub_0032E2B0(); /* call 0x0032E2B0 */

loc_003C2B91: ;
    PUSH32(esp, 0); sub_0032E330(); /* call 0x0032E330 */

loc_003C2B96: ;
    xmm0 = MEMF(ebp + 0x260); /* movss */
    xmm0 = xmm0 - MEMF(0x648D80); /* subss */
    esi = MEM32(esp + 0x10);
    MEMF(ebp + 0x260) = xmm0; /* movss */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x28), _icall_esp); /* indirect call */
    }

loc_003C2BB9: ;
    if (TEST_Z(eax, eax)) goto loc_003C2C85; /* je: equal / zero */

loc_003C2BC1: ;
    if (CMP_EQ(MEM16(edi + 0x3AE), 0)) goto loc_003C2BD9; /* je: equal / zero */

loc_003C2BCB: ;
    eax = MEM32(edi + 0x568);
    if (TEST_NZ(eax, eax)) goto loc_003C2C85; /* jne: not equal / not zero */

loc_003C2BD9: ;
    eax = MEM32(ebp + 0x23C);
    MEM8(eax + 0x10) = 0;
    MEM8(eax + 8) = 0;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    eax = MEM32(edi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003C2C32; /* je: equal / zero */

loc_003C2BFE: ;
    SET_LO8(ecx, MEM8(eax + 0x661));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003C2C32; /* jne: not equal / not zero */

loc_003C2C08: ;
    ecx = MEM32(edi + 0x298);
    ecx = ecx & 0x1E0;
    if (CMP_EQ(ecx, 0x20)) goto loc_003C2C32; /* je: equal / zero */

loc_003C2C19: ;
    edi = edi + 0x78;
    edx = MEM32(edi);
    ebp = ebp + 0x78;
    MEM32(ebp) = edx;
    eax = MEM32(edi + 4);
    MEM32(ebp + 4) = eax;
    ecx = MEM32(edi + 8);
    MEM32(ebp + 8) = ecx;
    goto loc_003C2C49;

loc_003C2C32: ;
    edx = esi + 0x70;
    eax = MEM32(edx);
    ebp = ebp + 0x78;
    MEM32(ebp) = eax;
    ecx = MEM32(edx + 4);
    MEM32(ebp + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(ebp + 8) = edx;

loc_003C2C49: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_003C2C56: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_003C2C64: ;
    ebp = MEM32(0x828B48);
    edi = MEM32(0x828B4C);
    PUSH32(esp, 0);
    eax = eax - ebp;
    PUSH32(esp, 0x3E8);
    edx = edx - edi - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_003C2C82: ;
    MEM32(esi + 0x6C) = eax;

loc_003C2C85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2C90
 * Original: 0x003C2C90 - 0x003C2CD3 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2C90(void)
{
    int _flags = 0; /* fallback flag var */

loc_003C2C90: ;
    eax = MEM32(ecx + 0x68);
    if (CMP_EQ(eax, edx)) goto loc_003C2CAF; /* je: equal / zero */

loc_003C2C97: ;
    if (CMP_NE(edx, 0xFF)) goto loc_003C2CA7; /* jne: not equal / not zero */

loc_003C2C9F: ;
    if (CMP_EQ(eax, MEM32(ecx + 0x74))) goto loc_003C2CAF; /* je: equal / zero */

loc_003C2CA4: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003C2CA7: ;
    if (CMP_NE(edx, 0xFE)) goto loc_003C2CD0; /* jne: not equal / not zero */

loc_003C2CAF: ;
    if (CMP_EQ(MEM32(ecx + 0x6C), esi)) goto loc_003C2CBC; /* je: equal / zero */

loc_003C2CB4: ;
    if (CMP_NE(esi, 0xFF)) goto loc_003C2CD0; /* jne: not equal / not zero */

loc_003C2CBC: ;
    eax = MEM32(ecx + 0x70);
    if (CMP_EQ(eax, edi)) { sub_003C2CD3(); return; } /* je: equal / zero */

loc_003C2CC3: ;
    if (CMP_NE(edi, 0xFF)) goto loc_003C2CD0; /* jne: not equal / not zero */

loc_003C2CCB: ;
    if (CMP_EQ(eax, MEM32(ecx + 0x7C))) { sub_003C2CD3(); return; } /* je: equal / zero */

loc_003C2CD0: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003C2CE0
 * Original: 0x003C2CE0 - 0x003C370C (2604 bytes, 642 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2CE0(void)
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

loc_003C2CE0: ;
    SET_LO8(eax, MEM8(0x84B4C4));
    esp = esp - 0x18C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x84B4BC);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C2D0F; /* je: equal / zero */

loc_003C2CFA: ;
    if (CMP_EQ(eax, ebx)) goto loc_003C2D17; /* je: equal / zero */

loc_003C2CFE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_003C2D04: ;
    eax = MEM32(0x84B4BC);
    MEM8(eax + 0x28) = 1;
    goto loc_003C2D17;

loc_003C2D0F: ;
    if (CMP_EQ(eax, ebx)) goto loc_003C2D17; /* je: equal / zero */

loc_003C2D13: ;
    MEM8(eax + 0x28) = 0;

loc_003C2D17: ;
    eax = MEM32(0x802324);
    ebp = MEM32(0x84A5F8);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_BE(eax, ebx)) goto loc_003C3701; /* jbe: below or equal (unsigned <=) */

loc_003C2D30: ;
    edi = 0; /* xor self */

loc_003C2D32: ;
    edx = MEM32(0x84B4A0);
    SET_LO8(eax, MEM8(edi + edx + 0x15));
    ecx = ZX8(LO8(eax));
    ecx = ecx >> 2;
    ecx--;
    if (CMP_A(ecx, 0x1E)) goto loc_003C3276; /* ja: above (unsigned >) */

loc_003C2D4C: ;
    ecx = ZX8(MEM8(ecx + 0x3C3724));
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C370C); /* switch: 6 entries, 5 targets */
    if (_jt == 0x003C2D5Au) goto loc_003C2D5A;
    if (_jt == 0x003C319Cu) goto loc_003C319C;
    if (_jt == 0x003C3218u) goto loc_003C3218;
    if (_jt == 0x003C322Eu) goto loc_003C322E;
    if (_jt == 0x003C3276u) goto loc_003C3276;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C2D5A: ;
    ecx = MEM32(edi + edx + 0x20);
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    eax = edi + edx + 0x20;
    if (CMP_NE(ecx, 1)) goto loc_003C2D6E; /* jne: not equal / not zero */

loc_003C2D67: ;
    ecx = ecx ^ 3;
    MEM32(eax) = ecx;
    goto loc_003C2DCE;

loc_003C2D6E: ;
    if (CMP_NE(ecx, 2)) goto loc_003C2DCE; /* jne: not equal / not zero */

loc_003C2D73: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + edx);
    ecx = (uint32_t)(int32_t)SMEM16(edi + edx + 2);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(edi + edx + 4);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX16(MEM16(edi + edx + 0x1E));
    edx = MEM32(0x847024);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(edx + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ebx = esp + 0x44;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00025610(); /* call 0x00025610 */

loc_003C2DB8: ;
    ecx = MEM32(0x84B4A0);
    ebp = MEM32(0x84A5F8);
    MEM32(edi + ecx + 0x20) = 0;
    ebx = 0; /* xor self */

loc_003C2DCE: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_003C3276; /* jne: not equal / not zero */

loc_003C2DDB: ;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    edx = MEM32(0x84B4A0);
    eax = edi + edx;
    if (CMP_EQ(ebp, ebx)) goto loc_003C3276; /* je: equal / zero */

loc_003C2DEC: ;
    if (CMP_EQ(eax, ebx)) goto loc_003C3276; /* je: equal / zero */

loc_003C2DF4: ;
    if (CMP_EQ(MEM8(eax + 0x14), 1)) goto loc_003C3276; /* je: equal / zero */

loc_003C2DFE: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm1 = MEMF(ebp + 0x7C); /* movss */
    xmm0 = MEMF(ebp + 0x78); /* movss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    (void)0; /* test MEM8(eax + 0x16), 1 - flags set for next jcc */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(ebp + 0x80); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    if (TEST_Z(MEM8(eax + 0x16), 1)) goto loc_003C2E63; /* je: equal / zero */

loc_003C2E45: ;
    xmm3 = MEMF(ebp + 0x7C); /* movss */
    xmm3 = xmm3 - MEMF(ebp + 0x294); /* subss */
    xmm4 = MEMF(0x648D1C); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 < xmm3)) goto loc_003C3276; /* jb: below (unsigned <) */

loc_003C2E63: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_003C3276; /* ja: above (unsigned >) */

loc_003C2E74: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C3744); /* switch: 8 entries, 8 targets */
    if (_jt == 0x003C2E7Bu) goto loc_003C2E7B;
    if (_jt == 0x003C2F4Au) goto loc_003C2F4A;
    if (_jt == 0x003C2F7Fu) goto loc_003C2F7F;
    if (_jt == 0x003C3032u) goto loc_003C3032;
    if (_jt == 0x003C339Du) goto loc_003C339D;
    if (_jt == 0x003C3475u) goto loc_003C3475;
    if (_jt == 0x003C34D8u) goto loc_003C34D8;
    if (_jt == 0x003C359Bu) goto loc_003C359B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C2E7B: ;
    xmm4 = MEMF(eax + 0xC); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_003C2E97; /* ja: above (unsigned >) */

loc_003C2E8D: ;
    xmm4 = MEMF(eax + 0x10); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_003C2EF0; /* jbe: below or equal (unsigned <=) */

loc_003C2E97: ;
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

loc_003C2EF0: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x34)); /* sqrtss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(esp + 0x30) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x30))) goto loc_003C3276; /* jbe: below or equal (unsigned <=) */

loc_003C2F27: ;
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x648CF8))) goto loc_003C3276; /* jbe: below or equal (unsigned <=) */

loc_003C2F34: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_003C317E; /* ja: above (unsigned >) */

loc_003C2F45: ;
    goto loc_003C3276;

loc_003C2F4A: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C2F66: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    esp = esp + 4;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003C317E; /* ja: above (unsigned >) */

loc_003C2F7A: ;
    goto loc_003C3276;

loc_003C2F7F: ;
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
    if ((xmm6 <= xmm4)) goto loc_003C3276; /* jbe: below or equal (unsigned <=) */

loc_003C2FAC: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm4, xmm6 - sets EFLAGS */
    if ((xmm4 <= xmm6)) goto loc_003C3276; /* jbe: below or equal (unsigned <=) */

loc_003C2FBB: ;
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
    if ((xmm5 <= xmm0)) goto loc_003C3276; /* jbe: below or equal (unsigned <=) */

loc_003C2FF4: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003C3276; /* jbe: below or equal (unsigned <=) */

loc_003C3003: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C3276; /* jbe: below or equal (unsigned <=) */

loc_003C3020: ;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 > MEMF(0x648CF8))) goto loc_003C317E; /* ja: above (unsigned >) */

loc_003C302D: ;
    goto loc_003C3276;

loc_003C3032: ;
    xmm4 = MEMF(eax + 0x30); /* movss */
    xmm3 = MEMF(eax + 0x2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ebp + 0x8C); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x84); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
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
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(ebp + 0x88); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x10); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    if ((xmm7 <= xmm2)) goto loc_003C3276; /* jbe: below or equal (unsigned <=) */

loc_003C30F8: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_003C3276; /* jb: below (unsigned <) */

loc_003C3101: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x38) = ecx;
    xmm2 = xmm6; /* movaps */
    /* FPU: fdivr dword ptr [esp + 0x20] */
    xmm2 = xmm2 * MEMF(esp + 0x24); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C3276; /* jbe: below or equal (unsigned <=) */

loc_003C3156: ;
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * MEMF(esp + 0x14); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 < xmm7)) goto loc_003C3276; /* jb: below (unsigned <) */

loc_003C316D: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003C3276; /* jbe: below or equal (unsigned <=) */

loc_003C317E: ;
    eax = MEM32(0x84B4A0);
    esi = edi + eax;
    PUSH32(esp, 0); sub_003C5F50(); /* call 0x003C5F50 */

loc_003C318B: ;
    ebp = MEM32(0x84A5F8);
    esi = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    goto loc_003C3276;

loc_003C319C: ;
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) goto loc_003C31AB; /* jne: not equal / not zero */

loc_003C31A2: ;
    MEM32(edi + edx + 0x20) = ebx;
    goto loc_003C3276;

loc_003C31AB: ;
    ecx = MEM32(edi + edx + 0x20);
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    eax = edi + edx + 0x20;
    if (CMP_NE(ecx, 1)) goto loc_003C31C3; /* jne: not equal / not zero */

loc_003C31B8: ;
    MEM32(eax) = 2;
    goto loc_003C3276;

loc_003C31C3: ;
    if (CMP_NE(ecx, 2)) goto loc_003C3276; /* jne: not equal / not zero */

loc_003C31CC: ;
    ecx = ZX8(MEM8(edi + edx + 0x17));
    eax = MEM32(0x847024);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(edi + edx + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00020030(); /* call 0x00020030 */

loc_003C31E6: ;
    eax = MEM32(0x84B4A0);
    edx = ZX8(MEM8(edi + eax + 0x17));
    ecx = MEM32(0x847024);
    eax = MEM32(edi + eax + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00020030(); /* call 0x00020030 */

loc_003C3207: ;
    eax = MEM32(0x84B4A0);
    ebp = MEM32(0x84A5F8);
    MEM32(edi + eax + 0x20) = ebx;
    goto loc_003C3276;

loc_003C3218: ;
    ecx = 0; /* xor self */
    edx = 2;
    eax = esi;
    PUSH32(esp, 0); sub_003C5BA0(); /* call 0x003C5BA0 */

loc_003C3226: ;
    ebp = MEM32(0x84A5F8);
    goto loc_003C3276;

loc_003C322E: ;
    if (CMP_EQ(MEM8(edi + edx + 0x17), 9)) goto loc_003C3276; /* je: equal / zero */

loc_003C3235: ;
    eax = MEM32(edi + edx + 0x1C);
    eax = eax & 0xFF;
    ecx = edi + edx + 0x1C;
    if ((eax == 0)) goto loc_003C3276; /* je: equal / zero */

loc_003C3244: ;
    if (CMP_NE(MEM8(edi + edx + 0x14), 0)) goto loc_003C324E; /* jne: not equal / not zero */

loc_003C324B: ;
    eax--;
    goto loc_003C3250;

loc_003C324E: ;
    eax = 0; /* xor self */

loc_003C3250: ;
    edx = MEM32(ecx);
    edx = edx & 0xFFFFFF00u;
    edx = edx | eax;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ecx) = edx;
    if (CMP_NE(eax, ebx)) goto loc_003C3276; /* jne: not equal / not zero */

loc_003C3260: ;
    eax = MEM32(0x84B4A0);
    ecx = ZX8(MEM8(edi + eax + 0x1D));
    MEM8(ecx + 0x77496C) = 0;
    MEM16(edi + eax + 0x1C) = LO16(ebx);

loc_003C3276: ;
    eax = MEM32(0x802324);
    esi++;
    edi = edi + 0x78;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_B(esi, eax)) goto loc_003C2D32; /* jb: below (unsigned <) */

loc_003C328B: ;
    if (CMP_BE(eax, ebx)) goto loc_003C3701; /* jbe: below or equal (unsigned <=) */

loc_003C3293: ;
    edi = 0; /* xor self */
    goto loc_003C32A0;

    /* nop */
    edi = edi;

loc_003C32A0: ;
    edx = MEM32(0x84B4A0);
    ecx = ZX8(MEM8(edi + edx + 0x15));
    eax = MEM32(0x802024);
    esi = edi + edx;
    ecx = ecx >> 2;
    eax = eax >> LO8(ecx);
    if (TEST_Z(LO8(eax), 1)) goto loc_003C32DA; /* je: equal / zero */

loc_003C32BC: ;
    SET_LO8(eax, MEM8(0x84B4AC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C32CC; /* je: equal / zero */

loc_003C32C5: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C32DA; /* jne: not equal / not zero */

loc_003C32CC: ;
    PUSH32(esp, 1);
    SET_LO8(edx, 0); /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_003C5790(); /* call 0x003C5790 */

loc_003C32D7: ;
    esp = esp + 4;

loc_003C32DA: ;
    SET_LO8(eax, MEM8(0x84B4AD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C36F0; /* je: equal / zero */

loc_003C32E7: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    ecx = MEM32(0x84B4A0);
    eax = edi + ecx;
    if (TEST_Z(ebp, ebp)) goto loc_003C36F0; /* je: equal / zero */

loc_003C32F8: ;
    if (TEST_Z(eax, eax)) goto loc_003C36F0; /* je: equal / zero */

loc_003C3300: ;
    if (CMP_EQ(MEM8(eax + 0x14), 1)) goto loc_003C36F0; /* je: equal / zero */

loc_003C330A: ;
    edx = (uint32_t)(int32_t)SMEM16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm6 = MEMF(ebp + 0x7C); /* movss */
    xmm0 = MEMF(ebp + 0x78); /* movss */
    xmm3 = MEMF(ebp + 0x80); /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x1EC);
    MEMF(esp + 0x20) = xmm2; /* movss */
    xmm6 = xmm6 - xmm2; /* subss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x1EE);
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    (void)0; /* test MEM8(eax + 0x16), 1 - flags set for next jcc */
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(esp + 0x28) = xmm4; /* movss */
    if (TEST_Z(MEM8(eax + 0x16), 1)) goto loc_003C3385; /* je: equal / zero */

loc_003C3367: ;
    xmm4 = MEMF(ebp + 0x7C); /* movss */
    xmm4 = xmm4 - MEMF(ebp + 0x294); /* subss */
    xmm7 = MEMF(0x648D1C); /* movss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 < xmm4)) goto loc_003C36F0; /* jb: below (unsigned <) */

loc_003C3385: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_003C36F0; /* ja: above (unsigned >) */

loc_003C3396: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C3754); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C339Du) goto loc_003C339D;
    if (_jt == 0x003C3475u) goto loc_003C3475;
    if (_jt == 0x003C34D8u) goto loc_003C34D8;
    if (_jt == 0x003C359Bu) goto loc_003C359B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C339D: ;
    xmm2 = MEMF(eax + 0xC); /* movss */
    xmm1 = MEMF(0x648E54); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_003C33B9; /* ja: above (unsigned >) */

loc_003C33AF: ;
    xmm2 = MEMF(eax + 0x10); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_003C3412; /* jbe: below or equal (unsigned <=) */

loc_003C33B9: ;
    xmm2 = MEMF(eax + 0x30); /* movss */
    xmm1 = MEMF(eax + 0x2C); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm4 = MEMF(eax + 0x24); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x28); /* movss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm0 = xmm7; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm6 = xmm1; /* movaps */

loc_003C3412: ;
    xmm1 = xmm3; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x38)); /* sqrtss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm0, MEMF(esp + 0x2C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x2C))) goto loc_003C36F0; /* jbe: below or equal (unsigned <=) */

loc_003C344D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_003C36F0; /* jbe: below or equal (unsigned <=) */

loc_003C345F: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 > xmm6)) goto loc_003C36EB; /* ja: above (unsigned >) */

loc_003C3470: ;
    goto loc_003C36F0;

loc_003C3475: ;
    ecx = esp + 0x3C;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm6; /* movss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    MEM32(esp + 0x10) = ecx;
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
    MEMF(esp + 0x30) = xmm1; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm0, MEMF(esp + 0x30) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x30))) goto loc_003C36EB; /* ja: above (unsigned >) */

loc_003C34D3: ;
    goto loc_003C36F0;

loc_003C34D8: ;
    xmm1 = MEMF(eax + 0x2C); /* movss */
    xmm2 = MEMF(eax + 0x30); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm4 = xmm2; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 + xmm5; /* addss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 <= xmm4)) goto loc_003C36F0; /* jbe: below or equal (unsigned <=) */

loc_003C3509: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 - xmm5; /* subss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_003C36F0; /* jbe: below or equal (unsigned <=) */

loc_003C351C: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(eax + 0x24); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x28); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 + xmm5; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_003C36F0; /* jbe: below or equal (unsigned <=) */

loc_003C3559: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 - xmm5; /* subss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_003C36F0; /* jbe: below or equal (unsigned <=) */

loc_003C356C: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003C36F0; /* jbe: below or equal (unsigned <=) */

loc_003C3589: ;
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm1 > MEMF(0x648CF8))) goto loc_003C36EB; /* ja: above (unsigned >) */

loc_003C3596: ;
    goto loc_003C36F0;

loc_003C359B: ;
    xmm5 = MEMF(eax + 0x30); /* movss */
    xmm4 = MEMF(eax + 0x2C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm0 = MEMF(ebp + 0x84); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(ebp + 0x8C); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x4C) = xmm7; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x34); /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm5 = MEMF(eax + 0x24); /* movss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm7 = MEMF(eax + 0x28); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm4 = xmm4 - xmm1; /* subss */
    xmm1 = MEMF(ebp + 0x88); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x20); /* subss */
    xmm3 = xmm0; /* movaps */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esp + 0x48) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    if ((xmm0 <= xmm3)) goto loc_003C36F0; /* jbe: below or equal (unsigned <=) */

loc_003C366D: ;
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 < xmm0)) goto loc_003C36F0; /* jb: below (unsigned <) */

loc_003C3672: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x10) = ecx;
    xmm0 = xmm7; /* movaps */
    /* FPU: fdivr dword ptr [esp + 0x18] */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C36F0; /* jbe: below or equal (unsigned <=) */

loc_003C36C7: ;
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * MEMF(esp + 0x1C); /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 < MEMF(0x648CF8))) goto loc_003C36F0; /* jb: below (unsigned <) */

loc_003C36DE: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C36F0; /* jbe: below or equal (unsigned <=) */

loc_003C36EB: ;
    MEM8(esp + ebx + 0x5C) = 1;

loc_003C36F0: ;
    eax = MEM32(0x802324);
    ebx++;
    edi = edi + 0x78;
    if (CMP_B(ebx, eax)) goto loc_003C32A0; /* jb: below (unsigned <) */

loc_003C3701: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003C3770
 * Original: 0x003C3770 - 0x003C3CFB (1419 bytes, 353 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3770(void)
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

loc_003C3770: ;
    esp = esp - 0x44;
    eax = MEM32(0x802324);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_BE(eax, esi)) goto loc_003C3CF6; /* jbe: below or equal (unsigned <=) */

loc_003C3787: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84B4A0);
    PUSH32(esp, edi);

loc_003C3790: ;
    SET_LO8(eax, MEM8(esi + ebp + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C3CD9; /* jne: not equal / not zero */

loc_003C379C: ;
    SET_LO8(eax, MEM8(esi + ebp + 0x15));
    SET_LO8(eax, LO8(eax) & 0xFC);
    if (CMP_NE(LO8(eax), 0x18)) goto loc_003C3CD9; /* jne: not equal / not zero */

loc_003C37AA: ;
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = eax;
    goto loc_003C37C0;

    /* nop */
    goto loc_003C37C0;

    /* nop */

loc_003C37C0: ;
    ecx = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(ecx + ebx), 0)) goto loc_003C3CC0; /* je: equal / zero */

loc_003C37D0: ;
    edx = MEM32(0x84A5F8);
    SET_LO8(ecx, MEM8(eax + edx + 0xA1));
    eax = eax + edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003C37EC; /* je: equal / zero */

loc_003C37E3: ;
    if (CMP_NE(LO8(ecx), 1)) goto loc_003C3CC0; /* jne: not equal / not zero */

loc_003C37EC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = esi + ebp;
    if (TEST_Z(eax, eax)) goto loc_003C3CC0; /* je: equal / zero */

loc_003C37F7: ;
    if (TEST_Z(edi, edi)) goto loc_003C3CC0; /* je: equal / zero */

loc_003C37FF: ;
    if (CMP_EQ(MEM8(edi + 0x14), 1)) goto loc_003C3CC0; /* je: equal / zero */

loc_003C3809: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    edx = (uint32_t)(int32_t)SMEM16(edi + 2);
    xmm1 = MEMF(eax + 0x7C); /* movss */
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 4);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1EE);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1EC);
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    (void)0; /* test MEM8(edi + 0x16), 1 - flags set for next jcc */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x80); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    if (TEST_Z(MEM8(edi + 0x16), 1)) goto loc_003C388A; /* je: equal / zero */

loc_003C386C: ;
    xmm3 = MEMF(eax + 0x7C); /* movss */
    xmm3 = xmm3 - MEMF(eax + 0x294); /* subss */
    xmm4 = MEMF(0x648D1C); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 < xmm3)) goto loc_003C3CC0; /* jb: below (unsigned <) */

loc_003C388A: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_003C3CC0; /* ja: above (unsigned >) */

loc_003C389B: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C3CFC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C38A2u) goto loc_003C38A2;
    if (_jt == 0x003C3A49u) goto loc_003C3A49;
    if (_jt == 0x003C3A82u) goto loc_003C3A82;
    if (_jt == 0x003C3B45u) goto loc_003C3B45;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C38A2: ;
    xmm4 = MEMF(edi + 0xC); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_003C38BE; /* ja: above (unsigned >) */

loc_003C38B4: ;
    xmm4 = MEMF(edi + 0x10); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_003C3917; /* jbe: below or equal (unsigned <=) */

loc_003C38BE: ;
    xmm4 = MEMF(edi + 0x30); /* movss */
    xmm6 = MEMF(edi + 0x2C); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(edi + 0x28); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm6 = MEMF(edi + 0x24); /* movss */
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

loc_003C3917: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x28)); /* sqrtss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 6);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm0, MEMF(esp + 0x2C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x2C))) goto loc_003C3CBA; /* jbe: below or equal (unsigned <=) */

loc_003C3952: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0x30); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003C3CBA; /* jbe: below or equal (unsigned <=) */

loc_003C3964: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 8);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003C3CBA; /* jbe: below or equal (unsigned <=) */

loc_003C3975: ;
    ebp = MEM32(0x84B4A0);

loc_003C397B: ;
    edx = (int32_t)MEMF(eax + 0x7C); /* cvttss2si */
    SET_LO8(ecx, MEM8(esi + ebp + 0x17));
    SET_LO16(edx, LO16(edx) - MEM16(esi + ebp + 2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003C3C8A; /* jne: not equal / not zero */

loc_003C3991: ;
    ecx = (int32_t)MEMF(eax + 0x78); /* cvttss2si */
    eax = (int32_t)MEMF(eax + 0x80); /* cvttss2si */
    SET_LO16(eax, LO16(eax) - MEM16(esi + ebp + 4));
    SET_LO16(ecx, LO16(ecx) - MEM16(esi + ebp));
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    edx = SX16(LO16(edx));
    eax = SX16(LO16(ecx));
    PUSH32(esp, edx);
    edi = esi + ebp + 6;
    ebp = (uint32_t)(int32_t)SMEM16(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0029D490(); /* call 0x0029D490 */

loc_003C39BF: ;
    esp = esp + 0xC;
    if (CMP_GE(eax, ebp)) goto loc_003C3CBA; /* jge: greater or equal (signed >=) */

loc_003C39CA: ;
    xmm1 = MEMF(0x648EA4); /* movss */
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003C39E6; /* jbe: below or equal (unsigned <=) */

loc_003C39E3: ;
    xmm0 = xmm1; /* movaps */

loc_003C39E6: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    eax = MEM32(0x84B4A0);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0x437F0000);
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(esi + eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + eax + 0x10);
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + eax + 2);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + eax);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    goto loc_003C3CB2;

loc_003C3A49: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C3A65: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 6);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    esp = esp + 4;
    xmm1 = xmm1 + xmm5; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003C3975; /* ja: above (unsigned >) */

loc_003C3A7D: ;
    goto loc_003C3CBA;

loc_003C3A82: ;
    xmm6 = MEMF(edi + 0x2C); /* movss */
    xmm3 = MEMF(edi + 0x30); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 6);
    xmm4 = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 + xmm5; /* addss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 <= xmm4)) goto loc_003C3CC0; /* jbe: below or equal (unsigned <=) */

loc_003C3AB3: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 - xmm5; /* subss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_003C3CC0; /* jbe: below or equal (unsigned <=) */

loc_003C3AC6: ;
    xmm4 = MEMF(edi + 0x24); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(edi + 0x28); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 + xmm5; /* addss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_003C3CC0; /* jbe: below or equal (unsigned <=) */

loc_003C3B03: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 - xmm5; /* subss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_003C3CC0; /* jbe: below or equal (unsigned <=) */

loc_003C3B16: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C3CC0; /* jbe: below or equal (unsigned <=) */

loc_003C3B33: ;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 > MEMF(0x648CF8))) goto loc_003C397B; /* ja: above (unsigned >) */

loc_003C3B40: ;
    goto loc_003C3CC0;

loc_003C3B45: ;
    xmm4 = MEMF(edi + 0x30); /* movss */
    xmm3 = MEMF(edi + 0x2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(eax + 0x8C); /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x84); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x18) = xmm6; /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm4 = MEMF(edi + 0x24); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(edi + 0x28); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(eax + 0x88); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x34); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    MEMF(esp + 0x38) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    if ((xmm7 <= xmm2)) goto loc_003C3CC0; /* jbe: below or equal (unsigned <=) */

loc_003C3C0B: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_003C3CC0; /* jb: below (unsigned <) */

loc_003C3C14: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x40) = ecx;
    xmm2 = xmm6; /* movaps */
    /* FPU: fdivr dword ptr [esp + 0x14] */
    xmm2 = xmm2 * MEMF(esp + 0x10); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C3CC0; /* jbe: below or equal (unsigned <=) */

loc_003C3C65: ;
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * MEMF(esp + 0x1C); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 < xmm7)) goto loc_003C3CC0; /* jb: below (unsigned <) */

loc_003C3C78: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003C3CC0; /* jbe: below or equal (unsigned <=) */

loc_003C3C85: ;
    goto loc_003C397B;

loc_003C3C8A: ;
    ecx = MEM32(eax + 0x80);
    edx = MEM32(eax + 0x294);
    eax = MEM32(eax + 0x78);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x43160000);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);

loc_003C3CB2: ;
    PUSH32(esp, 0); sub_0008E250(); /* call 0x0008E250 */

loc_003C3CB7: ;
    esp = esp + 0x28;

loc_003C3CBA: ;
    ebp = MEM32(0x84B4A0);

loc_003C3CC0: ;
    eax = MEM32(esp + 0x20);
    eax = eax + 0x6D0;
    ebx++;
    (void)0; /* cmp eax, 0x36800 - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(eax, 0x36800)) goto loc_003C37C0; /* jl: less (signed <) */

loc_003C3CD9: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(0x802324);
    eax++;
    esi = esi + 0x78;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_B(eax, ecx)) goto loc_003C3790; /* jb: below (unsigned <) */

loc_003C3CF3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003C3CF6: ;
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
 * sub_003C3D10
 * Original: 0x003C3D10 - 0x003C41A7 (1175 bytes, 276 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3D10(void)
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

loc_003C3D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x708;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0x40;
    ebx = ecx;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_003C3D2B: ;
    xmm0 = MEMF(esi + 0x330); /* movss */
    ecx = MEM32(esi + 0x118);
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x334); /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x338); /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x33C); /* movss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x340); /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x344); /* movss */
    ecx = ecx & 0xFFFBFFFFu;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEMF(esp + 0xCC) = xmm0; /* movss */
    xmm0 = MEMF(0x648E60); /* movss */
    MEMF(esi + 0x384) = xmm0; /* movss */
    MEM32(esi + 0x118) = ecx;
    if (TEST_Z(edi, edi)) goto loc_003C41A1; /* je: equal / zero */

loc_003C3DBB: ;
    goto loc_003C3DC0;

    /* nop */

loc_003C3DC0: ;
    eax = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_003C4197; /* je: equal / zero */

loc_003C3DCA: ;
    if (CMP_EQ(MEM8(eax + 0x14), 1)) goto loc_003C4197; /* je: equal / zero */

loc_003C3DD4: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm1 = MEMF(esp + 0xBC); /* movss */
    xmm0 = MEMF(esp + 0xB8); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    (void)0; /* test MEM8(eax + 0x16), 1 - flags set for next jcc */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC0); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    if (TEST_Z(MEM8(eax + 0x16), 1)) goto loc_003C3E38; /* je: equal / zero */

loc_003C3E27: ;
    xmm3 = MEMF(0x648D1C); /* movss */
    /* comiss xmm3, xmm5 - sets EFLAGS */
    if ((xmm3 < xmm5)) goto loc_003C4197; /* jb: below (unsigned <) */

loc_003C3E38: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_003C4197; /* ja: above (unsigned >) */

loc_003C3E49: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x3C41A8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C3E50u) goto loc_003C3E50;
    if (_jt == 0x003C3F1Bu) goto loc_003C3F1B;
    if (_jt == 0x003C3F50u) goto loc_003C3F50;
    if (_jt == 0x003C3FFFu) goto loc_003C3FFF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C3E50: ;
    xmm4 = MEMF(eax + 0xC); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_003C3E6C; /* ja: above (unsigned >) */

loc_003C3E62: ;
    xmm4 = MEMF(eax + 0x10); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_003C3EC5; /* jbe: below or equal (unsigned <=) */

loc_003C3E6C: ;
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

loc_003C3EC5: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x24)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x1C))) goto loc_003C4197; /* jbe: below or equal (unsigned <=) */

loc_003C3EFC: ;
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 <= xmm5)) goto loc_003C4197; /* jbe: below or equal (unsigned <=) */

loc_003C3F05: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_003C4142; /* ja: above (unsigned >) */

loc_003C3F16: ;
    goto loc_003C4197;

loc_003C3F1B: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C3F37: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    esp = esp + 4;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_003C4142; /* ja: above (unsigned >) */

loc_003C3F4B: ;
    goto loc_003C4197;

loc_003C3F50: ;
    xmm6 = MEMF(eax + 0x2C); /* movss */
    xmm3 = MEMF(eax + 0x30); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm4 = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 - xmm7; /* subss */
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm7, xmm4 - sets EFLAGS */
    if ((xmm7 <= xmm4)) goto loc_003C4197; /* jbe: below or equal (unsigned <=) */

loc_003C3F7D: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_003C4197; /* jbe: below or equal (unsigned <=) */

loc_003C3F8C: ;
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
    /* comiss xmm6, xmm0 - sets EFLAGS */
    if ((xmm6 <= xmm0)) goto loc_003C4197; /* jbe: below or equal (unsigned <=) */

loc_003C3FC5: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_003C4197; /* jbe: below or equal (unsigned <=) */

loc_003C3FD4: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C4197; /* jbe: below or equal (unsigned <=) */

loc_003C3FF1: ;
    /* comiss xmm2, xmm5 - sets EFLAGS */
    if ((xmm2 > xmm5)) goto loc_003C4142; /* ja: above (unsigned >) */

loc_003C3FFA: ;
    goto loc_003C4197;

loc_003C3FFF: ;
    xmm4 = MEMF(eax + 0x30); /* movss */
    xmm3 = MEMF(eax + 0x2C); /* movss */
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
    xmm4 = MEMF(eax + 0x24); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(eax + 0x28); /* movss */
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
    if ((xmm7 <= xmm2)) goto loc_003C4197; /* jbe: below or equal (unsigned <=) */

loc_003C40C8: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_003C4197; /* jb: below (unsigned <) */

loc_003C40D1: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x28) = ecx;
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
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C4197; /* jbe: below or equal (unsigned <=) */

loc_003C4122: ;
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * MEMF(esp + 0x18); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 < xmm7)) goto loc_003C4197; /* jb: below (unsigned <) */

loc_003C4135: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003C4197; /* jbe: below or equal (unsigned <=) */

loc_003C4142: ;
    ecx = MEM32(ebx);
    eax = ZX8(MEM8(ecx + 0x15));
    eax = eax >> 2;
    eax--;
    if ((eax != 0)) goto loc_003C4197; /* jne: not equal / not zero */

loc_003C414E: ;
    eax = ZX8(MEM8(ecx + 0x17));
    eax = eax - 0;
    if ((eax == 0)) goto loc_003C4186; /* je: equal / zero */

loc_003C4157: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_003C416E; /* je: equal / zero */

loc_003C415C: ;
    eax = eax - 4;
    if ((eax != 0)) goto loc_003C4197; /* jne: not equal / not zero */

loc_003C4161: ;
    eax = MEM32(esi + 0x118);
    eax = eax & 0xFFFBFFFFu;
    goto loc_003C4191;

loc_003C416E: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    eax = eax + ecx;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0x384) = xmm0; /* movss */
    goto loc_003C4197;

loc_003C4186: ;
    eax = MEM32(esi + 0x118);
    eax = eax | 0x40000;

loc_003C4191: ;
    MEM32(esi + 0x118) = eax;

loc_003C4197: ;
    ebx = ebx + 4;
    edi--;
    if ((edi != 0)) goto loc_003C3DC0; /* jne: not equal / not zero */

loc_003C41A1: ;
    POP32(esp, edi);
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
 * sub_003C41C0
 * Original: 0x003C41C0 - 0x003C41FC (60 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C41C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C41C0: ;
    esp = esp - 0x1C4;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1D8);
    eax = ZX8(MEM8(edi + 0x236));
    esi = MEM32(edi + 0x564);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x3C) = 0x3E8;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x6C) = esi;
    if (TEST_NZ(esi, esi)) { sub_003C41FC(); return; } /* jne: not equal / not zero */

loc_003C41F2: ;
    MEM32(esp + 0x44) = 0xFF;
    g_seh_ebp = ebp; sub_003C4210(); return; /* tail jmp 0x003C4210 */

}

/**
 * sub_003C5790
 * Original: 0x003C5790 - 0x003C5B81 (1009 bytes, 253 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5790(void)
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

loc_003C5790: ;
    esp = esp - 0x24;
    if (TEST_Z(ecx, ecx)) goto loc_003C5B78; /* je: equal / zero */

loc_003C579B: ;
    if (TEST_Z(esi, esi)) goto loc_003C5B78; /* je: equal / zero */

loc_003C57A3: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = 1;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003C57B5; /* je: equal / zero */

loc_003C57AC: ;
    if (CMP_EQ(MEM8(esi + 0x14), LO8(eax))) goto loc_003C5B7D; /* je: equal / zero */

loc_003C57B5: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    xmm1 = MEMF(ecx + 0x7C); /* movss */
    xmm0 = MEMF(ecx + 0x78); /* movss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x28);
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x80); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    if (TEST_Z(edx, edx)) goto loc_003C581E; /* je: equal / zero */

loc_003C57FE: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1EC);
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1EE);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm3; /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    goto loc_003C5829;

loc_003C581E: ;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm5 = xmm3; /* movaps */
    MEMF(esp) = xmm3; /* movss */

loc_003C5829: ;
    if (TEST_Z(MEM8(esi + 0x16), LO8(eax))) goto loc_003C584F; /* je: equal / zero */

loc_003C582E: ;
    xmm3 = MEMF(ecx + 0x7C); /* movss */
    xmm3 = xmm3 - MEMF(ecx + 0x294); /* subss */
    xmm4 = MEMF(0x648D1C); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 < xmm3)) goto loc_003C5B7D; /* jb: below (unsigned <) */

loc_003C584C: ;
    xmm3 = 0.0f; /* xorps self = zero */

loc_003C584F: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x15));
    edx = edx & 3;
    if (CMP_A(edx, 3)) goto loc_003C5B7D; /* ja: above (unsigned >) */

loc_003C5860: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x3C5B84); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003C5867u) goto loc_003C5867;
    if (_jt == 0x003C593Fu) goto loc_003C593F;
    if (_jt == 0x003C5979u) goto loc_003C5979;
    if (_jt == 0x003C5A3Du) goto loc_003C5A3D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003C5867: ;
    xmm6 = MEMF(esi + 0xC); /* movss */
    xmm4 = MEMF(0x648E54); /* movss */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 > xmm4)) goto loc_003C5883; /* ja: above (unsigned >) */

loc_003C5879: ;
    xmm6 = MEMF(esi + 0x10); /* movss */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 <= xmm4)) goto loc_003C58DF; /* jbe: below or equal (unsigned <=) */

loc_003C5883: ;
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
    xmm2 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm0 = xmm7; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - xmm7; /* subss */

loc_003C58DF: ;
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    MEMF(esp + 8) = xmm4; /* movss */
    xmm0 = sqrtf(MEMF(esp + 8)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm5; /* addss */
    /* comiss xmm0, MEMF(esp + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 4))) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C591A: ;
    xmm3 = xmm3 - MEMF(esp); /* subss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C5928: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C5939: ;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_003C593F: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_003C595B: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    esp = esp + 4;
    xmm1 = xmm1 + xmm5; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C5973: ;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_003C5979: ;
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
    if ((xmm7 <= xmm4)) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C59AA: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm7 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7 = xmm7 - xmm5; /* subss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C59BD: ;
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
    if ((xmm6 <= xmm0)) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C59FA: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm6 = xmm6 - xmm5; /* subss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C5A0D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C5A2A: ;
    /* comiss xmm2, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm2 <= MEMF(0x648CF8))) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C5A37: ;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_003C5A3D: ;
    xmm4 = MEMF(esi + 0x30); /* movss */
    xmm3 = MEMF(esi + 0x2C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ecx + 0x8C); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x84); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 8) = xmm6; /* movss */
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
    xmm1 = xmm1 * MEMF(esp + 4); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(ecx + 0x88); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0xC); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp) = xmm2; /* movss */
    if ((xmm7 <= xmm2)) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C5AFE: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_003C5B7D; /* jb: below (unsigned <) */

loc_003C5B03: ;
    fp_push(MEMF(esp)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 4); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    /* FPU: fdivr dword ptr [esp] */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x14) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C5B52: ;
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 * MEMF(esp + 4); /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    /* comiss xmm5, xmm7 - sets EFLAGS */
    if ((xmm5 < xmm7)) goto loc_003C5B7D; /* jb: below (unsigned <) */

loc_003C5B65: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_003C5B7D; /* jbe: below or equal (unsigned <=) */

loc_003C5B72: ;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_003C5B78: ;
    eax = 1;

loc_003C5B7D: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003C5BA0
 * Original: 0x003C5BA0 - 0x003C5F4A (938 bytes, 269 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C5BA0: ;
    esp = esp - 0x10;
    edx = edx - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((edx == 0)) goto loc_003C5D85; /* je: equal / zero */

loc_003C5BB0: ;
    edx--;
    if ((edx == 0)) goto loc_003C5C68; /* je: equal / zero */

loc_003C5BB7: ;
    edx--;
    if ((edx != 0)) goto loc_003C5F42; /* jne: not equal / not zero */

loc_003C5BBE: ;
    edi = MEM32(0x84B4A0);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x78);
    SET_LO8(ecx, MEM8(esi + edi + 0x17));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003C5BE5; /* je: equal / zero */

loc_003C5BD1: ;
    if (CMP_NE(LO8(ecx), 5)) goto loc_003C5F42; /* jne: not equal / not zero */

loc_003C5BDA: ;
    if (CMP_EQ(MEM8(esi + edi + 0x14), 1)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5BE5: ;
    ebp = MEM32(0x84B4A4);
    eax = eax << 4;
    ebx = eax;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x40);
    edx = MEM32(ebx + ebp + 4);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, eax);
    eax = MEM32(ebx + ebp);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_003C5C09: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C5F42; /* jne: not equal / not zero */

loc_003C5C11: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + edi);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + edi + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + edi + 4);
    ecx = esp + 0x14;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + edi + 0x18);
    ebx = ebx + ebp;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_003C5C51: ;
    MEM32(ebx) = eax;
    edx = MEM32(0x84B4A0);
    eax = MEM32(esi + edx + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C5C68: ;
    esi = MEM32(0x84B4A0);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    edx = ZX8(MEM8(edx + esi + 0x17));
    edx--;
    if ((edx == 0)) goto loc_003C5D1B; /* je: equal / zero */

loc_003C5C7F: ;
    edx = edx - 5;
    if ((edx != 0)) goto loc_003C5F42; /* jne: not equal / not zero */

loc_003C5C88: ;
    if (TEST_Z(ecx, ecx)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5C90: ;
    edx = MEM32(ecx + 0x564);
    if (TEST_Z(edx, edx)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5C9E: ;
    eax = eax << 4;
    esi = eax;
    eax = MEM32(0x84B4A4);
    SET_LO8(ecx, MEM8(esi + eax + 0xC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003C5F42; /* je: equal / zero */

loc_003C5CB4: ;
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(esi + eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001F910(); /* call 0x0001F910 */

loc_003C5CC7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C5D08; /* je: equal / zero */

loc_003C5CCB: ;
    edx = MEM32(0x847024);
    ecx = MEM32(edx + 0x3C);
    eax = MEM32(0x84B4A4);
    eax = MEM32(esi + eax + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001E8B0(); /* call 0x0001E8B0 */

loc_003C5CE5: ;
    if (TEST_Z(eax, eax)) goto loc_003C5CFA; /* je: equal / zero */

loc_003C5CE9: ;
    SET_LO8(ebx, 0); /* xor self */
    edi = eax;
    MEM8(eax + 0x1E) = 0;
    MEM8(eax + 0x21) = 1;
    PUSH32(esp, 0); sub_000212C0(); /* call 0x000212C0 */

loc_003C5CFA: ;
    ecx = MEM32(0x84B4A4);
    MEM32(esi + ecx + 8) = 0xFFFFFFFFu;

loc_003C5D08: ;
    edx = MEM32(0x84B4A4);
    POP32(esp, edi);
    MEM8(esi + edx + 0xC) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C5D1B: ;
    if (TEST_Z(ecx, ecx)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5D23: ;
    edx = MEM32(ecx + 0x564);
    if (TEST_Z(edx, edx)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5D31: ;
    eax = eax << 4;
    esi = eax;
    eax = MEM32(0x84B4A4);
    edi = esi + eax;
    SET_LO8(eax, MEM8(edi + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C5F42; /* je: equal / zero */

loc_003C5D49: ;
    ecx = MEM32(0x847024);
    ebx = MEM32(ecx + 0x40);
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_003C5D5D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003C5D79; /* je: equal / zero */

loc_003C5D61: ;
    PUSH32(esp, ebx);
    ecx = edx;
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_003C5D69: ;
    edx = MEM32(0x84B4A4);
    edi = esi + edx;
    MEM32(edi + 4) = 0xFFFFFFFFu;

loc_003C5D79: ;
    MEM8(edi + 0xC) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C5D85: ;
    esi = MEM32(0x84B4A0);
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    edx = ZX8(MEM8(esi + ebp + 0x17));
    edx--;
    if ((edx == 0)) goto loc_003C5EA2; /* je: equal / zero */

loc_003C5D9C: ;
    edx = edx - 3;
    if ((edx == 0)) goto loc_003C5E47; /* je: equal / zero */

loc_003C5DA5: ;
    edx = edx - 2;
    if ((edx != 0)) goto loc_003C5F42; /* jne: not equal / not zero */

loc_003C5DAE: ;
    if (TEST_Z(ecx, ecx)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5DB6: ;
    edx = MEM32(ecx + 0x564);
    if (TEST_Z(edx, edx)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5DC4: ;
    eax = eax << 4;
    esi = eax;
    eax = MEM32(0x84B4A4);
    SET_LO8(ecx, MEM8(esi + eax + 0xC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003C5DF6; /* je: equal / zero */

loc_003C5DD6: ;
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(esi + eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001F910(); /* call 0x0001F910 */

loc_003C5DE9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C5F42; /* jne: not equal / not zero */

loc_003C5DF1: ;
    eax = MEM32(0x84B4A4);

loc_003C5DF6: ;
    edx = MEM32(0x847024);
    ecx = MEM32(edx + 0x3C);
    eax = MEM32(esi + eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001F9F0(); /* call 0x0001F9F0 */

loc_003C5E09: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C5F42; /* jne: not equal / not zero */

loc_003C5E11: ;
    eax = MEM32(0x84B4A0);
    ebp = MEM32(eax + ebp + 0x18);
    ecx = MEM32(0x84B4A4);
    edx = MEM32(0x847024);
    MEM32(esi + ecx + 8) = ebp;
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0001E750(); /* call 0x0001E750 */

loc_003C5E34: ;
    ecx = MEM32(0x84B4A4);
    POP32(esp, edi);
    MEM8(esi + ecx + 0xC) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C5E47: ;
    if (TEST_Z(ecx, ecx)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5E4F: ;
    eax = MEM32(ecx + 0x564);
    if (TEST_Z(eax, eax)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5E5D: ;
    eax = MEM32(0x84A144);
    if (TEST_NZ(eax, eax)) goto loc_003C5F42; /* jne: not equal / not zero */

loc_003C5E6A: ;
    edi = MEM32(esi + ebp + 0x20);
    ebx = MEM32(esi + ebp + 0x1C);
    ebp = MEM32(esi + ebp + 0x18);
    ecx = MEM32(0x847024);
    esi = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_003C2C90(); /* call 0x003C2C90 */

loc_003C5E85: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C5F42; /* jne: not equal / not zero */

loc_003C5E8D: ;
    eax = MEM32(0x847024);
    PUSH32(esp, edi);
    esi = ebp;
    PUSH32(esp, 0); sub_00018A60(); /* call 0x00018A60 */

loc_003C5E9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003C5EA2: ;
    if (TEST_Z(ecx, ecx)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5EAA: ;
    edx = MEM32(ecx + 0x564);
    if (TEST_Z(edx, edx)) goto loc_003C5F42; /* je: equal / zero */

loc_003C5EB8: ;
    edx = MEM32(0x84B4A4);
    eax = eax << 4;
    ebx = eax;
    SET_LO8(eax, MEM8(ebx + edx + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = ebx + edx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C5F42; /* jne: not equal / not zero */

loc_003C5ECE: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x40);
    edx = MEM32(edi + 4);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, 0); sub_00024D20(); /* call 0x00024D20 */

loc_003C5EE5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003C5F3E; /* jne: not equal / not zero */

loc_003C5EE9: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + ebp);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x84B4A4);
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + ebp + 2);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + ebp + 4);
    edx = esp + 0x14;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edi = ebx + ecx;
    ecx = MEM32(esi + ebp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_003C5F30: ;
    MEM32(edi) = eax;
    eax = MEM32(0x84B4A0);
    ecx = MEM32(eax + ebp + 0x18);
    MEM32(edi + 4) = ecx;

loc_003C5F3E: ;
    MEM8(edi + 0xC) = 1;

loc_003C5F42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003C5F50
 * Original: 0x003C5F50 - 0x003C5FD0 (128 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5F50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003C5F50: ;
    eax = MEM32(esi + 0x20);
    esp = esp - 0xC;
    if (TEST_NZ(eax, eax)) goto loc_003C5FC5; /* jne: not equal / not zero */

loc_003C5F5A: ;
    SET_LO8(eax, MEM8(esi + 0x17));
    edx = 0; /* xor self */
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_003C5F68; /* jns: not sign (positive) */

loc_003C5F63: ;
    edx = 4;

loc_003C5F68: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 2);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x847024);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx + 0x40);
    ecx = ZX16(MEM16(esi + 0x1E));
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (TEST_NZ(ecx, ecx)) goto loc_003C5FA6; /* jne: not equal / not zero */

loc_003C5FA1: ;
    if (TEST_Z(LO8(edx), 0x40)) goto loc_003C5FC5; /* je: equal / zero */

loc_003C5FA6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edi = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_003C5FC4: ;
    POP32(esp, edi);

loc_003C5FC5: ;
    MEM32(esi + 0x20) = 1;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
