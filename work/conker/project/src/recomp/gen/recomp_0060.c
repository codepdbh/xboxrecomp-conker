/**
 * Burnout 3 - Recompiled code chunk 60
 * Functions: 250 (0x0048C420 - 0x0049410F)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0048C420
 * Original: 0x0048C420 - 0x0048C459 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C420(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C420: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84D44C);
    if (TEST_Z(eax, eax)) goto loc_0048C439; /* je: equal / zero */

loc_0048C42A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C436: ;
    esp = esp + 4;

loc_0048C439: ;
    MEM32(0x84D44C) = 0;
    MEM32(0x84D450) = 0;
    MEM32(0x84D454) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C460
 * Original: 0x0048C460 - 0x0048C492 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C460(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C460: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0x877DE0;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_0048C46C: ;
    eax = MEM32(0x877DE4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0048C486; /* je: equal / zero */

loc_0048C47A: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C483: ;
    esp = esp + 4;

loc_0048C486: ;
    MEM32(0x877DE4) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C4A0
 * Original: 0x0048C4A0 - 0x0048C4D9 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C4A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C4A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84DAB0);
    if (TEST_Z(eax, eax)) goto loc_0048C4B9; /* je: equal / zero */

loc_0048C4AA: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C4B6: ;
    esp = esp + 4;

loc_0048C4B9: ;
    MEM32(0x84DAB0) = 0;
    MEM32(0x84DAB4) = 0;
    MEM32(0x84DAB8) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C4E0
 * Original: 0x0048C4E0 - 0x0048C4ED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C4E0(void)
{

loc_0048C4E0: ;
    PUSH32(esp, esi);
    esi = 0x84DAEC;
    PUSH32(esp, 0); sub_002D1E10(); /* call 0x002D1E10 */

loc_0048C4EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C4F0
 * Original: 0x0048C4F0 - 0x0048C4FD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C4F0(void)
{

loc_0048C4F0: ;
    PUSH32(esp, esi);
    esi = 0x87A1DC;
    PUSH32(esp, 0); sub_00082DC0(); /* call 0x00082DC0 */

loc_0048C4FB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C500
 * Original: 0x0048C500 - 0x0048C50D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C500(void)
{

loc_0048C500: ;
    PUSH32(esp, esi);
    esi = 0x84EB9C;
    PUSH32(esp, 0); sub_00082CB0(); /* call 0x00082CB0 */

loc_0048C50B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C510
 * Original: 0x0048C510 - 0x0048C51D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C510(void)
{

loc_0048C510: ;
    PUSH32(esp, esi);
    esi = 0x87A1C8;
    PUSH32(esp, 0); sub_00084980(); /* call 0x00084980 */

loc_0048C51B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C520
 * Original: 0x0048C520 - 0x0048C559 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C520(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C520: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84EC00);
    if (TEST_Z(eax, eax)) goto loc_0048C539; /* je: equal / zero */

loc_0048C52A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C536: ;
    esp = esp + 4;

loc_0048C539: ;
    MEM32(0x84EC00) = 0;
    MEM32(0x84EC04) = 0;
    MEM32(0x84EC08) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C560
 * Original: 0x0048C560 - 0x0048C56D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C560(void)
{

loc_0048C560: ;
    PUSH32(esp, esi);
    esi = 0x84EC58;
    PUSH32(esp, 0); sub_000A2550(); /* call 0x000A2550 */

loc_0048C56B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C570
 * Original: 0x0048C570 - 0x0048C5BC (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C570(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C570: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0x75A11C;
    PUSH32(esp, 0); sub_000A2320(); /* call 0x000A2320 */

loc_0048C57C: ;
    eax = MEM32(0x75A10C);
    esi = 0; /* xor self */
    if (CMP_B(eax, 8)) goto loc_0048C5A2; /* jb: below (unsigned <) */

loc_0048C588: ;
    eax = MEM32(0x75A0F8);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(eax, esi)) goto loc_0048C5A2; /* je: equal / zero */

loc_0048C595: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C59F: ;
    esp = esp + 4;

loc_0048C5A2: ;
    MEM32(0x75A108) = esi;
    MEM16(0x75A0F8) = LO16(esi);
    MEM32(0x75A10C) = 7;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C5C0
 * Original: 0x0048C5C0 - 0x0048C5C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C5C0(void)
{

loc_0048C5C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C5D0
 * Original: 0x0048C5D0 - 0x0048C5D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C5D0(void)
{

loc_0048C5D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C5E0
 * Original: 0x0048C5E0 - 0x0048C622 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C5E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C5E0: ;
    edx = MEM32(0x7F9F60);
    ecx = MEM32(0x875DF0);
    eax = MEM32(0x875DEC);
    PUSH32(esp, edi);
    edi = 0x80;

loc_0048C5F7: ;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_0048C611; /* jne: not equal / not zero */

loc_0048C5FC: ;
    ecx = ecx | 1;
    MEM32(0x875DE4) = edx;
    MEM32(0x875DE8) = 0;
    eax = 0; /* xor self */

loc_0048C611: ;
    eax--;
    edi--;
    if ((edi != 0)) goto loc_0048C5F7; /* jne: not equal / not zero */

loc_0048C615: ;
    MEM32(0x875DEC) = eax;
    MEM32(0x875DF0) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C630
 * Original: 0x0048C630 - 0x0048C631 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C630(void)
{

loc_0048C630: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C640
 * Original: 0x0048C640 - 0x0048C651 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C640(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C640: ;
    eax = MEM32(0x75A12C);
    if (TEST_Z(eax, eax)) goto loc_0048C650; /* je: equal / zero */

loc_0048C649: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0048C64F: ;
    POP32(esp, ecx);

loc_0048C650: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C660
 * Original: 0x0048C660 - 0x0048C66D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C660(void)
{

loc_0048C660: ;
    PUSH32(esp, esi);
    esi = 0x878788;
    PUSH32(esp, 0); sub_00293830(); /* call 0x00293830 */

loc_0048C66B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C670
 * Original: 0x0048C670 - 0x0048C6A9 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C670(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C670: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x85E408);
    if (TEST_Z(eax, eax)) goto loc_0048C689; /* je: equal / zero */

loc_0048C67A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C686: ;
    esp = esp + 4;

loc_0048C689: ;
    MEM32(0x85E408) = 0;
    MEM32(0x85E40C) = 0;
    MEM32(0x85E410) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C6B0
 * Original: 0x0048C6B0 - 0x0048C6B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C6B0(void)
{

loc_0048C6B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C6C0
 * Original: 0x0048C6C0 - 0x0048C6C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C6C0(void)
{

loc_0048C6C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C6D0
 * Original: 0x0048C6D0 - 0x0048C709 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C6D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C6D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x85E55C);
    if (TEST_Z(eax, eax)) goto loc_0048C6E9; /* je: equal / zero */

loc_0048C6DA: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C6E6: ;
    esp = esp + 4;

loc_0048C6E9: ;
    MEM32(0x85E55C) = 0;
    MEM32(0x85E560) = 0;
    MEM32(0x85E564) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C710
 * Original: 0x0048C710 - 0x0048C749 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C710(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C710: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x85E56C);
    if (TEST_Z(eax, eax)) goto loc_0048C729; /* je: equal / zero */

loc_0048C71A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C726: ;
    esp = esp + 4;

loc_0048C729: ;
    MEM32(0x85E56C) = 0;
    MEM32(0x85E570) = 0;
    MEM32(0x85E574) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C750
 * Original: 0x0048C750 - 0x0048C776 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C750(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C750: ;
    eax = MEM32(0x85E578);
    if (TEST_Z(eax, eax)) goto loc_0048C775; /* je: equal / zero */

loc_0048C759: ;
    eax = MEM32(0x85E57C);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(0x85E57C);
    if (CMP_NE(MEM32(eax), 0)) goto loc_0048C775; /* jne: not equal / not zero */

loc_0048C76A: ;
    PUSH32(esp, 0x85E57C);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C774: ;
    POP32(esp, ecx);

loc_0048C775: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C780
 * Original: 0x0048C780 - 0x0048C7A6 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C780(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C780: ;
    eax = MEM32(0x862670);
    if (TEST_Z(eax, eax)) goto loc_0048C7A5; /* je: equal / zero */

loc_0048C789: ;
    eax = MEM32(0x862674);
    MEM32(eax) = MEM32(eax) - 1;
    eax = MEM32(0x862674);
    if (CMP_NE(MEM32(eax), 0)) goto loc_0048C7A5; /* jne: not equal / not zero */

loc_0048C79A: ;
    PUSH32(esp, 0x862674);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C7A4: ;
    POP32(esp, ecx);

loc_0048C7A5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C7B0
 * Original: 0x0048C7B0 - 0x0048C7E9 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C7B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C7B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x86267C);
    if (TEST_Z(eax, eax)) goto loc_0048C7C9; /* je: equal / zero */

loc_0048C7BA: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C7C6: ;
    esp = esp + 4;

loc_0048C7C9: ;
    MEM32(0x86267C) = 0;
    MEM32(0x862680) = 0;
    MEM32(0x862684) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C7F0
 * Original: 0x0048C7F0 - 0x0048C829 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C7F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C7F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x862690);
    if (TEST_Z(eax, eax)) goto loc_0048C809; /* je: equal / zero */

loc_0048C7FA: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C806: ;
    esp = esp + 4;

loc_0048C809: ;
    MEM32(0x862690) = 0;
    MEM32(0x862694) = 0;
    MEM32(0x862698) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C830
 * Original: 0x0048C830 - 0x0048C869 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C830(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C830: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8626A0);
    if (TEST_Z(eax, eax)) goto loc_0048C849; /* je: equal / zero */

loc_0048C83A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C846: ;
    esp = esp + 4;

loc_0048C849: ;
    MEM32(0x8626A0) = 0;
    MEM32(0x8626A4) = 0;
    MEM32(0x8626A8) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C870
 * Original: 0x0048C870 - 0x0048C8A9 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C870(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C870: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8626B0);
    if (TEST_Z(eax, eax)) goto loc_0048C889; /* je: equal / zero */

loc_0048C87A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C886: ;
    esp = esp + 4;

loc_0048C889: ;
    MEM32(0x8626B0) = 0;
    MEM32(0x8626B4) = 0;
    MEM32(0x8626B8) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C8B0
 * Original: 0x0048C8B0 - 0x0048C8BD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C8B0(void)
{

loc_0048C8B0: ;
    PUSH32(esp, esi);
    esi = 0x877DA8;
    PUSH32(esp, 0); sub_002981B0(); /* call 0x002981B0 */

loc_0048C8BB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C8C0
 * Original: 0x0048C8C0 - 0x0048C8F9 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C8C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C8C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8626D8);
    if (TEST_Z(eax, eax)) goto loc_0048C8D9; /* je: equal / zero */

loc_0048C8CA: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C8D6: ;
    esp = esp + 4;

loc_0048C8D9: ;
    MEM32(0x8626D8) = 0;
    MEM32(0x8626DC) = 0;
    MEM32(0x8626E0) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C900
 * Original: 0x0048C900 - 0x0048C939 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C900(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C900: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8626E8);
    if (TEST_Z(eax, eax)) goto loc_0048C919; /* je: equal / zero */

loc_0048C90A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C916: ;
    esp = esp + 4;

loc_0048C919: ;
    MEM32(0x8626E8) = 0;
    MEM32(0x8626EC) = 0;
    MEM32(0x8626F0) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C940
 * Original: 0x0048C940 - 0x0048C94D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C940(void)
{

loc_0048C940: ;
    PUSH32(esp, esi);
    esi = 0x8626F8;
    PUSH32(esp, 0); sub_0023B420(); /* call 0x0023B420 */

loc_0048C94B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C950
 * Original: 0x0048C950 - 0x0048C95B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C950(void)
{

loc_0048C950: ;
    PUSH32(esp, 0x8629CC);
    PUSH32(esp, 0); sub_00244FB0(); /* call 0x00244FB0 */

loc_0048C95A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C960
 * Original: 0x0048C960 - 0x0048C98F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C960(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C960: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x862C14);
    PUSH32(esp, 0); sub_00253EE0(); /* call 0x00253EE0 */

loc_0048C96B: ;
    eax = MEM32(0x862C18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_0048C983; /* je: equal / zero */

loc_0048C977: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C980: ;
    esp = esp + 4;

loc_0048C983: ;
    MEM32(0x862C18) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C990
 * Original: 0x0048C990 - 0x0048C99A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C990(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C990: ;
    eax = 0x862C40;
    g_seh_ebp = ebp; sub_00257FB0(); return; /* tail jmp 0x00257FB0 */

}

/**
 * sub_0048C9E0
 * Original: 0x0048C9E0 - 0x0048CA19 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C9E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048C9E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x86ECF4);
    if (TEST_Z(eax, eax)) goto loc_0048C9F9; /* je: equal / zero */

loc_0048C9EA: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048C9F6: ;
    esp = esp + 4;

loc_0048C9F9: ;
    MEM32(0x86ECF4) = 0;
    MEM32(0x86ECF8) = 0;
    MEM32(0x86ECFC) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CA20
 * Original: 0x0048CA20 - 0x0048CA4F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048CA20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x86ED30);
    PUSH32(esp, 0); sub_00267C80(); /* call 0x00267C80 */

loc_0048CA2B: ;
    eax = MEM32(0x86ED34);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_0048CA43; /* je: equal / zero */

loc_0048CA37: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048CA40: ;
    esp = esp + 4;

loc_0048CA43: ;
    MEM32(0x86ED34) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CA50
 * Original: 0x0048CA50 - 0x0048CA5D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA50(void)
{

loc_0048CA50: ;
    PUSH32(esp, esi);
    esi = 0x86EE00;
    PUSH32(esp, 0); sub_000A2320(); /* call 0x000A2320 */

loc_0048CA5B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CA60
 * Original: 0x0048CA60 - 0x0048CA99 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048CA60: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x86EE2C);
    if (TEST_Z(eax, eax)) goto loc_0048CA79; /* je: equal / zero */

loc_0048CA6A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048CA76: ;
    esp = esp + 4;

loc_0048CA79: ;
    MEM32(0x86EE2C) = 0;
    MEM32(0x86EE30) = 0;
    MEM32(0x86EE34) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CAA0
 * Original: 0x0048CAA0 - 0x0048CAD9 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CAA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048CAA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x87C000);
    if (TEST_Z(eax, eax)) goto loc_0048CAB9; /* je: equal / zero */

loc_0048CAAA: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048CAB6: ;
    esp = esp + 4;

loc_0048CAB9: ;
    MEM32(0x87C000) = 0;
    MEM32(0x87C004) = 0;
    MEM32(0x87C008) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CAE0
 * Original: 0x0048CAE0 - 0x0048CB19 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CAE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048CAE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x87B570);
    if (TEST_Z(eax, eax)) goto loc_0048CAF9; /* je: equal / zero */

loc_0048CAEA: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048CAF6: ;
    esp = esp + 4;

loc_0048CAF9: ;
    MEM32(0x87B570) = 0;
    MEM32(0x87B574) = 0;
    MEM32(0x87B578) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CB20
 * Original: 0x0048CB20 - 0x0048CB52 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048CB20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0x86EE80;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_0048CB2C: ;
    eax = MEM32(0x86EE84);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0048CB46; /* je: equal / zero */

loc_0048CB3A: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048CB43: ;
    esp = esp + 4;

loc_0048CB46: ;
    MEM32(0x86EE84) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CB60
 * Original: 0x0048CB60 - 0x0048CB99 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048CB60: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x86EED8);
    if (TEST_Z(eax, eax)) goto loc_0048CB79; /* je: equal / zero */

loc_0048CB6A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048CB76: ;
    esp = esp + 4;

loc_0048CB79: ;
    MEM32(0x86EED8) = 0;
    MEM32(0x86EEDC) = 0;
    MEM32(0x86EEE0) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CBA0
 * Original: 0x0048CBA0 - 0x0048CBAD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CBA0(void)
{

loc_0048CBA0: ;
    PUSH32(esp, esi);
    esi = 0x878760;
    PUSH32(esp, 0); sub_00293830(); /* call 0x00293830 */

loc_0048CBAB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CBB0
 * Original: 0x0048CBB0 - 0x0048CBBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CBB0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CBB0: ;
    eax = 0x86EEFC;
    g_seh_ebp = ebp; sub_00294DA0(); return; /* tail jmp 0x00294DA0 */

}

/**
 * sub_0048CC00
 * Original: 0x0048CC00 - 0x0048CC43 (67 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC00(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC00: ;
    eax = MEM32(0x86EFE8);
    ecx = MEM32(eax + 4);
    MEM32(ecx + 0x86EFE8) = 0x606A30;
    ecx = 0x86EFEC;
    PUSH32(esp, 0); sub_000A1800(); /* call 0x000A1800 */

loc_0048CC1C: ;
    edx = MEM32(0x86EFE8);
    eax = MEM32(edx + 4);
    MEM32(eax + 0x86EFE8) = 0x606A24;
    MEM32(0x86F048) = 0x5F1144;
    ecx = 0x86F048;
    g_seh_ebp = ebp; sub_0046DB9B(); return; /* tail jmp 0x0046DB9B */

}

/**
 * sub_0048CC60
 * Original: 0x0048CC60 - 0x0048CC6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC60(void)
{

loc_0048CC60: ;
    MEM32(0x75A1C0) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CC70
 * Original: 0x0048CC70 - 0x0048CC7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC70(void)
{

loc_0048CC70: ;
    MEM32(0x75A1E8) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CC80
 * Original: 0x0048CC80 - 0x0048CC8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC80(void)
{

loc_0048CC80: ;
    MEM32(0x87C878) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CC90
 * Original: 0x0048CC90 - 0x0048CC9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC90(void)
{

loc_0048CC90: ;
    MEM32(0x87C8A0) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CCA0
 * Original: 0x0048CCA0 - 0x0048CCAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCA0(void)
{

loc_0048CCA0: ;
    MEM32(0x87C8C8) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CCB0
 * Original: 0x0048CCB0 - 0x0048CCBD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCB0(void)
{

loc_0048CCB0: ;
    PUSH32(esp, esi);
    esi = 0x86F408;
    PUSH32(esp, 0); sub_002D1E10(); /* call 0x002D1E10 */

loc_0048CCBB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CCC0
 * Original: 0x0048CCC0 - 0x0048CCCD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCC0(void)
{

loc_0048CCC0: ;
    PUSH32(esp, esi);
    esi = 0x86F430;
    PUSH32(esp, 0); sub_002D1E10(); /* call 0x002D1E10 */

loc_0048CCCB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CCD0
 * Original: 0x0048CCD0 - 0x0048CCDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCD0(void)
{

loc_0048CCD0: ;
    MEM32(0x87BE94) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CCE0
 * Original: 0x0048CCE0 - 0x0048CCEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCE0(void)
{

loc_0048CCE0: ;
    MEM32(0x87BEBC) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CCF0
 * Original: 0x0048CCF0 - 0x0048CCFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCF0(void)
{

loc_0048CCF0: ;
    MEM32(0x87BEE4) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CD00
 * Original: 0x0048CD00 - 0x0048CD0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD00(void)
{

loc_0048CD00: ;
    MEM32(0x87BF0C) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CD10
 * Original: 0x0048CD10 - 0x0048CD1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD10(void)
{

loc_0048CD10: ;
    MEM32(0x87BF34) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CD20
 * Original: 0x0048CD20 - 0x0048CD2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD20(void)
{

loc_0048CD20: ;
    MEM32(0x87BF5C) = 0x606A68;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CD30
 * Original: 0x0048CD30 - 0x0048CD62 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048CD30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0x878690;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_0048CD3C: ;
    eax = MEM32(0x878694);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0048CD56; /* je: equal / zero */

loc_0048CD4A: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048CD53: ;
    esp = esp + 4;

loc_0048CD56: ;
    MEM32(0x878694) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CD70
 * Original: 0x0048CD70 - 0x0048CDC5 (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CD70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x870BE4;
    ebp = 0x80;
    ebx = 0; /* xor self */

loc_0048CD80: ;
    edi = MEM32(esi + -40);
    esi = esi - 0x28;
    if (CMP_EQ(edi, ebx)) goto loc_0048CDB5; /* je: equal / zero */

loc_0048CD8A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0048CD90: ;
    if (TEST_NZ(eax, eax)) goto loc_0048CDB5; /* jne: not equal / not zero */

loc_0048CD94: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0048CDB2: ;
    esp = esp + 4;

loc_0048CDB5: ;
    ebp--;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    if ((ebp != 0)) goto loc_0048CD80; /* jne: not equal / not zero */

loc_0048CDC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CDD0
 * Original: 0x0048CDD0 - 0x0048CDDD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CDD0(void)
{

loc_0048CDD0: ;
    PUSH32(esp, esi);
    esi = 0x870E4C;
    PUSH32(esp, 0); sub_002D1E10(); /* call 0x002D1E10 */

loc_0048CDDB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CDE0
 * Original: 0x0048CDE0 - 0x0048CE19 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CDE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048CDE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x870E7C);
    if (TEST_Z(eax, eax)) goto loc_0048CDF9; /* je: equal / zero */

loc_0048CDEA: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048CDF6: ;
    esp = esp + 4;

loc_0048CDF9: ;
    MEM32(0x870E7C) = 0;
    MEM32(0x870E80) = 0;
    MEM32(0x870E84) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CE20
 * Original: 0x0048CE20 - 0x0048CE59 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CE20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048CE20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x870E8C);
    if (TEST_Z(eax, eax)) goto loc_0048CE39; /* je: equal / zero */

loc_0048CE2A: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0048CE36: ;
    esp = esp + 4;

loc_0048CE39: ;
    MEM32(0x870E8C) = 0;
    MEM32(0x870E90) = 0;
    MEM32(0x870E94) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CE60
 * Original: 0x0048CE60 - 0x0048CE9F (63 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CE60(void)
{

loc_0048CE60: ;
    PUSH32(esp, esi);
    esi = 0x875404;
    MEM32(0x875400) = 0x63E250;
    PUSH32(esp, 0); sub_002D1E10(); /* call 0x002D1E10 */

loc_0048CE75: ;
    esi = 0x8753D8;
    PUSH32(esp, 0); sub_002D1E10(); /* call 0x002D1E10 */

loc_0048CE7F: ;
    esi = 0x8753B0;
    PUSH32(esp, 0); sub_002D1E10(); /* call 0x002D1E10 */

loc_0048CE89: ;
    esi = 0x875384;
    MEM32(0x875380) = 0x63E250;
    PUSH32(esp, 0); sub_002D1E10(); /* call 0x002D1E10 */

loc_0048CE9D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CEA0
 * Original: 0x0048CEA0 - 0x0048CEAD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CEA0(void)
{

loc_0048CEA0: ;
    PUSH32(esp, esi);
    esi = 0x87544C;
    PUSH32(esp, 0); sub_0037DA50(); /* call 0x0037DA50 */

loc_0048CEAB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CEB0
 * Original: 0x0048CEB0 - 0x0048CEEB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CEB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048CEB0: ;
    ecx = MEM32(0x75B8EC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(0x75B8E8) = 0x6453EC;
    if (CMP_EQ(ecx, esi)) goto loc_0048CECD; /* je: equal / zero */

loc_0048CEC7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0048CECD: ;
    ecx = MEM32(0x75B8F0);
    if (CMP_EQ(ecx, esi)) goto loc_0048CEDD; /* je: equal / zero */

loc_0048CED7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0048CEDD: ;
    MEM32(0x75B8F0) = esi;
    MEM32(0x75B8EC) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CEF0
 * Original: 0x0048CEF0 - 0x0048CEFD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CEF0(void)
{

loc_0048CEF0: ;
    PUSH32(esp, esi);
    esi = 0x84D0F8;
    PUSH32(esp, 0); sub_00405740(); /* call 0x00405740 */

loc_0048CEFB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CF00
 * Original: 0x0048CF00 - 0x0048CF01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CF00(void)
{

loc_0048CF00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CF10
 * Original: 0x0048CF10 - 0x0048CF11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CF10(void)
{

loc_0048CF10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CF40
 * Original: 0x0048CF40 - 0x0048CF6D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CF40(void)
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

loc_0048CF40: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648D28)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0048CF68; /* jp: parity */

loc_0048CF57: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d24] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0048CF6A; /* jp: parity */

loc_0048CF64: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

loc_0048CF68: ;
    /* fstp st(0) */

loc_0048CF6A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048CF6D
 * Original: 0x0048CF6D - 0x0048D01C (175 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CF6D(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048CF6D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(ebp + 0x14);
    fp_push(MEMF(0x648CE0)); /* fld float */
    PUSH32(esp, edi);
    /* fld st(2) */
    edi = MEM32(ebp + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr st(1) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* FPU: fsubrp st(1) */
    fp_push(MEMF(0x648D10)); /* fld float */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, edi);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, esi);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D01C
 * Original: 0x0048D01C - 0x0048D0ED (209 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D01C(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048D01C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(ebp + 0x14);
    fp_push(MEMF(0x648CE0)); /* fld float */
    PUSH32(esp, edi);
    /* fld st(2) */
    edi = MEM32(ebp + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr st(1) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* FPU: fsubrp st(1) */
    fp_push(MEMF(0x648D10)); /* fld float */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, edi);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, esi);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D0ED
 * Original: 0x0048D0ED - 0x0048D149 (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D0ED(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048D0ED: ;
    eax = MEM32(esp + 4);
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 8);
    fp_push(0.0); /* fldz */
    MEM32(eax + 0x30) = ecx;
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0xC);
    fp_push(0.0); /* fldz */
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(esp + 0x10);
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x38) = ecx;
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D149
 * Original: 0x0048D149 - 0x0048D1DD (148 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D149(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048D149: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = ebp + 0xC;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + -8)); /* fld float */
    /* FPU: fsincos  */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEM32(eax + 0x2C) = 0xBF800000u;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    /* FPU: fdivr st(1) */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fdivr dword ptr [ebp + 0x18] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D1DD
 * Original: 0x0048D1DD - 0x0048D27F (162 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D1DD(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048D1DD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x648D14)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fdivr st(1) */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fdivr st(2) */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CE0)); /* fld float */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fdivr st(2) */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D27F
 * Original: 0x0048D27F - 0x0048D2A7 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D27F(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048D27F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + 8);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D2A7
 * Original: 0x0048D2A7 - 0x0048D2CA (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D2A7(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048D2A7: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(3) */
    /* fstp st(0) */
    /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D2CA
 * Original: 0x0048D2CA - 0x0048D316 (76 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D2CA(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048D2CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, esi);
    fp_push(MEMF(eax + 8)); /* fld float */
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = ebp + -12;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebp + 8);
    edi = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D316
 * Original: 0x0048D316 - 0x0048D33B (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D316(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048D316: ;
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D33B
 * Original: 0x0048D33B - 0x0048D3B7 (124 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D33B(void)
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

loc_0048D33B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0048D2A7(); /* call 0x0048D2A7 */

loc_0048D34C: ;
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0048CF40(); /* call 0x0048CF40 */

loc_0048D360: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0048D375; /* je: equal / zero */

loc_0048D367: ;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(eax, esi)) goto loc_0048D3B1; /* je: equal / zero */

loc_0048D36E: ;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    goto loc_0048D3B1;

loc_0048D375: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x6492f8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0048D3A0; /* jne: not equal / not zero */

loc_0048D385: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    eax = ebp + -12;
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D27F(); /* call 0x0048D27F */

loc_0048D399: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    goto loc_0048D36E;

loc_0048D3A0: ;
    eax = MEM32(ebp + 8);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_0048D3B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D3B7
 * Original: 0x0048D3B7 - 0x0048D4AB (244 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D3B7(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048D3B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = MEM32(ebp + 0xC);
    eax = ebp + -12;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D316(); /* call 0x0048D316 */

loc_0048D3CE: ;
    esp = esp + 0xC;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D33B(); /* call 0x0048D33B */

loc_0048D3DB: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D2CA(); /* call 0x0048D2CA */

loc_0048D3EB: ;
    esp = esp + 0xC;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D33B(); /* call 0x0048D33B */

loc_0048D3F8: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D2CA(); /* call 0x0048D2CA */

loc_0048D409: ;
    fp_push(MEMF(ebp + -24)); /* fld float */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x20) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -16)); /* fld float */
    ecx = MEM32(ebp + -36);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0xC;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -28);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -12);
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -36)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -32)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -4);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEM32(eax + 0x28) = ecx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, esi);
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D4AB
 * Original: 0x0048D4AB - 0x0048D54F (164 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D4AB(void)
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

loc_0048D4AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0048CF40(); /* call 0x0048CF40 */

loc_0048D4E6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0048D4FE; /* je: equal / zero */

loc_0048D4ED: ;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(eax, esi)) goto loc_0048D54A; /* je: equal / zero */

loc_0048D4F4: ;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    POP32(esp, edi);
    goto loc_0048D54A;

loc_0048D4FE: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x6492f8] */
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 0x41 - flags set for next jcc */
    eax = MEM32(ebp + 8);
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0048D537; /* jne: not equal / not zero */

loc_0048D511: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_0048D547;

loc_0048D537: ;
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */

loc_0048D547: ;
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */

loc_0048D54A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D54F
 * Original: 0x0048D54F - 0x0048D587 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D54F(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0048D54F: ;
    ecx = MEM32(esp + 0xC);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 8);
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0048D610
 * Original: 0x0048D610 - 0x0048D620 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048D610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (TEST_NZ(ecx, ecx)) { sub_0048D620(); return; } /* jne: not equal / not zero */

loc_0048D617: ;
    eax = 0x276D;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0048D659
 * Original: 0x0048D659 - 0x0048D664 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D659(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D659: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D637(); return; /* tail jmp 0x0048D637 */

}

/**
 * sub_0048D664
 * Original: 0x0048D664 - 0x0048D66F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D664(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D664: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D648(); return; /* tail jmp 0x0048D648 */

}

/**
 * sub_0048D66F
 * Original: 0x0048D66F - 0x0048D67A (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D66F(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D66F: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D5D3(); return; /* tail jmp 0x0048D5D3 */

}

/**
 * sub_0048D67A
 * Original: 0x0048D67A - 0x0048D685 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D67A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D67A: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D5A0(); return; /* tail jmp 0x0048D5A0 */

}

/**
 * sub_0048D685
 * Original: 0x0048D685 - 0x0048D690 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D685(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D685: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D5B1(); return; /* tail jmp 0x0048D5B1 */

}

/**
 * sub_0048D690
 * Original: 0x0048D690 - 0x0048D69B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D690(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D690: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D5C2(); return; /* tail jmp 0x0048D5C2 */

}

/**
 * sub_0048D69B
 * Original: 0x0048D69B - 0x0048D6AD (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D69B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048D69B: ;
    ecx = MEM32(0x75F024);
    if (TEST_NZ(ecx, ecx)) { sub_0048D6AD(); return; } /* jne: not equal / not zero */

loc_0048D6A5: ;
    eax = 0x276D;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0048D6B2
 * Original: 0x0048D6B2 - 0x0048D6C4 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D6B2(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048D6B2: ;
    ecx = MEM32(0x75F024);
    if (TEST_NZ(ecx, ecx)) { sub_0048D6C4(); return; } /* jne: not equal / not zero */

loc_0048D6BC: ;
    eax = 0x276D;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0048D6C9
 * Original: 0x0048D6C9 - 0x0048D6D4 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D6C9(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D6C9: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D5FF(); return; /* tail jmp 0x0048D5FF */

}

/**
 * sub_0048D6D4
 * Original: 0x0048D6D4 - 0x0048D6E3 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D6D4(void)
{
    uint32_t ebp;

loc_0048D6D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F024);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0048D610(); return; /* tail jmp 0x0048D610 */

}

/**
 * sub_0048D6E3
 * Original: 0x0048D6E3 - 0x0048D6F9 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D6E3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048D6E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F024);
    if (TEST_NZ(ecx, ecx)) { sub_0048D6F9(); return; } /* jne: not equal / not zero */

loc_0048D6F0: ;
    eax = 0x276D;
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_0048D6FF
 * Original: 0x0048D6FF - 0x0048D70A (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D6FF(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D6FF: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D626(); return; /* tail jmp 0x0048D626 */

}

/**
 * sub_0048D70A
 * Original: 0x0048D70A - 0x0048D715 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D70A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D70A: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D5F0(); return; /* tail jmp 0x0048D5F0 */

}

/**
 * sub_0048D715
 * Original: 0x0048D715 - 0x0048D720 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D715(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D715: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0049C9C0(); return; /* tail jmp 0x0049C9C0 */

}

/**
 * sub_0048D720
 * Original: 0x0048D720 - 0x0048D72B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D720(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D720: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0049C8EB(); return; /* tail jmp 0x0049C8EB */

}

/**
 * sub_0048D72B
 * Original: 0x0048D72B - 0x0048D736 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D72B(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D72B: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0049AE18(); return; /* tail jmp 0x0049AE18 */

}

/**
 * sub_0048D736
 * Original: 0x0048D736 - 0x0048D741 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D736(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D736: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0049AEB5(); return; /* tail jmp 0x0049AEB5 */

}

/**
 * sub_0048D741
 * Original: 0x0048D741 - 0x0048D750 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D741(void)
{
    uint32_t ebp;

loc_0048D741: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F024);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0049B74A(); return; /* tail jmp 0x0049B74A */

}

/**
 * sub_0048D750
 * Original: 0x0048D750 - 0x0048D75B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D750(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D750: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0049B985(); return; /* tail jmp 0x0049B985 */

}

/**
 * sub_0048D75B
 * Original: 0x0048D75B - 0x0048D766 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D75B(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D75B: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0049BA09(); return; /* tail jmp 0x0049BA09 */

}

/**
 * sub_0048D766
 * Original: 0x0048D766 - 0x0048D775 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D766(void)
{
    uint32_t ebp;

loc_0048D766: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F024);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0049BB04(); return; /* tail jmp 0x0049BB04 */

}

/**
 * sub_0048D775
 * Original: 0x0048D775 - 0x0048D784 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D775(void)
{
    uint32_t ebp;

loc_0048D775: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F024);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0049BE8B(); return; /* tail jmp 0x0049BE8B */

}

/**
 * sub_0048D784
 * Original: 0x0048D784 - 0x0048D78F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D784(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D784: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0049BF5F(); return; /* tail jmp 0x0049BF5F */

}

/**
 * sub_0048D78F
 * Original: 0x0048D78F - 0x0048D79E (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D78F(void)
{
    uint32_t ebp;

loc_0048D78F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F024);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0049C3C1(); return; /* tail jmp 0x0049C3C1 */

}

/**
 * sub_0048D79E
 * Original: 0x0048D79E - 0x0048D7AD (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D79E(void)
{
    uint32_t ebp;

loc_0048D79E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F024);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0049C45E(); return; /* tail jmp 0x0049C45E */

}

/**
 * sub_0048D7AD
 * Original: 0x0048D7AD - 0x0048D7BC (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D7AD(void)
{
    uint32_t ebp;

loc_0048D7AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F024);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0049C51C(); return; /* tail jmp 0x0049C51C */

}

/**
 * sub_0048D7BC
 * Original: 0x0048D7BC - 0x0048D7CB (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D7BC(void)
{
    uint32_t ebp;

loc_0048D7BC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F024);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0049C5B7(); return; /* tail jmp 0x0049C5B7 */

}

/**
 * sub_0048D7FF
 * Original: 0x0048D7FF - 0x0048D816 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D7FF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048D7FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    if (CMP_NE(ebx, edi)) { sub_0048D816(); return; } /* jne: not equal / not zero */

loc_0048D80F: ;
    eax = 0x276D;
    g_seh_ebp = ebp; sub_0048D869(); return; /* tail jmp 0x0048D869 */

}

/**
 * sub_0048D86F
 * Original: 0x0048D86F - 0x0048D881 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D86F(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048D86F: ;
    ecx = MEM32(0x75F024);
    if (TEST_NZ(ecx, ecx)) { sub_0048D881(); return; } /* jne: not equal / not zero */

loc_0048D879: ;
    eax = 0x276D;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0048D886
 * Original: 0x0048D886 - 0x0048D898 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D886(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048D886: ;
    ecx = MEM32(0x75F024);
    if (TEST_NZ(ecx, ecx)) { sub_0048D898(); return; } /* jne: not equal / not zero */

loc_0048D890: ;
    eax = 0x276D;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0048D89D
 * Original: 0x0048D89D - 0x0048D8A8 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D89D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D89D: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D7CE(); return; /* tail jmp 0x0048D7CE */

}

/**
 * sub_0048D8A8
 * Original: 0x0048D8A8 - 0x0048D8B3 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D8A8(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D8A8: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D7DF(); return; /* tail jmp 0x0048D7DF */

}

/**
 * sub_0048D8B3
 * Original: 0x0048D8B3 - 0x0048D8BE (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D8B3(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D8B3: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D7F0(); return; /* tail jmp 0x0048D7F0 */

}

/**
 * sub_0048D8BE
 * Original: 0x0048D8BE - 0x0048D8C9 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D8BE(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048D8BE: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048D7FF(); return; /* tail jmp 0x0048D7FF */

}

/**
 * sub_0048D8C9
 * Original: 0x0048D8C9 - 0x0048D8F3 (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048D8C9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048D8C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x218;
    PUSH32(esp, esi);

loc_0048D8D3: ;
    eax = 0;
    ecx = 0x75F020;
    edx = 1;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) { sub_0048D8F3(); return; } /* je: equal / zero */

loc_0048D8EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042E379(); /* call 0x0042E379 */

loc_0048D8F1: ;
    goto loc_0048D8D3;

}

/**
 * sub_0048DACF
 * Original: 0x0048DACF - 0x0048DAE6 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DACF(void)
{

loc_0048DACF: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x75F024);
    PUSH32(esp, 0); sub_0048D8C9(); /* call 0x0048D8C9 */

loc_0048DAE3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048DAE6
 * Original: 0x0048DAE6 - 0x0048DB01 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DAE6(void)
{

loc_0048DAE6: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x75F024);
    PUSH32(esp, 0); sub_0048D8C9(); /* call 0x0048D8C9 */

loc_0048DAFE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0048DB01
 * Original: 0x0048DB01 - 0x0048DB29 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DB01(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048DB01: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;

loc_0048DB0B: ;
    eax = 0;
    ecx = 0x75F020;
    edx = 1;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if (CMP_EQ(eax, ebx)) { sub_0048DB29(); return; } /* je: equal / zero */

loc_0048DB21: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042E379(); /* call 0x0042E379 */

loc_0048DB27: ;
    goto loc_0048DB0B;

}

/**
 * sub_0048DBD4
 * Original: 0x0048DBD4 - 0x0048DBE1 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DBD4(void)
{

loc_0048DBD4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x75F024);
    PUSH32(esp, 0); sub_0048DB01(); /* call 0x0048DB01 */

loc_0048DBE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048DBF2
 * Original: 0x0048DBF2 - 0x0048DC26 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DBF2(void)
{

loc_0048DBF2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x8BC;
    PUSH32(esp, 0); sub_00492F34(); /* call 0x00492F34 */

loc_0048DC06: ;
    MEM32(esi + 0x8C4) = MEM32(esi + 0x8C4) - 1;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_0048DC19: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00493441(); /* call 0x00493441 */

loc_0048DC21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048DC36
 * Original: 0x0048DC36 - 0x0048DC62 (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DC36(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048DC36: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    eax = edx + 8;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + 8) = eax;
    eax = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    /* TODO: xadd dword ptr [ecx], eax */
    eax--;
    if (TEST_NZ(eax, eax)) goto loc_0048DC5D; /* jne: not equal / not zero */

loc_0048DC55: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_004932D7(); /* call 0x004932D7 */

loc_0048DC5D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048DC89
 * Original: 0x0048DC89 - 0x0048DC9B (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DC89(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048DC89: ;
    eax = MEM32(ecx + 0xAC8);
    edx = ZX16(MEM16(ecx + 0xAD4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_0048DCB0(); return; /* tail jmp 0x0048DCB0 */

}

/**
 * sub_0048DCBC
 * Original: 0x0048DCBC - 0x0048DD50 (148 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DCBC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048DCBC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    eax = MEM32(ebp + 8);
    (void)0; /* test MEM8(eax), 0xE0 - flags set for next jcc */
    edx = MEM32(eax);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = edx;
    edx = MEM32(eax + 4);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edx;
    edi = ecx + 0xA98;
    if (TEST_Z(MEM8(eax), 0xE0)) goto loc_0048DCE0; /* je: equal / zero */

loc_0048DCDD: ;
    edi = MEM32(ebp + 0xC);

loc_0048DCE0: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_0048DCF8: ;
    MEM8(ebp + -8) = MEM8(ebp + -8) + 1;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_0048DD10: ;
    eax = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0x10);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    esi = ebp + -48;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 0x1C);
    edi = MEM32(ebp + 0x18);
    esi = ebp + eax + -48;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    PUSH32(esp, 0); sub_0046DAA0(); /* call 0x0046DAA0 */

loc_0048DD4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0048DD50
 * Original: 0x0048DD50 - 0x0048DDA5 (85 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DD50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048DD50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x188;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), 8 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    SET_LO8(eax, (CMP_NE(MEM32(ebp + 0x10), 8)) ? 1 : 0); /* setne */
    esi = eax;
    eax = ebp + -392;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA9A(); /* call 0x0046DA9A */

loc_0048DD75: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -392;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA94(); /* call 0x0046DA94 */

loc_0048DDA0: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0048DDA5
 * Original: 0x0048DDA5 - 0x0048DDF2 (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DDA5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048DDA5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    (void)0; /* cmp MEM32(ebp + 0x1C), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ebx = esi + 0x86;
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) goto loc_0048DDC0; /* jne: not equal / not zero */

loc_0048DDBD: ;
    ebx = esi + 0x54;

loc_0048DDC0: ;
    edi = MEM32(ebp + 0x14);
    SET_LO8(eax, MEM8(edi));
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    MEM8(ebp + 0xB) = LO8(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_0048DDE2: ;
    ebx = ebx + 0x14;
    MEM8(edi) = MEM8(edi) + 1;
    if (CMP_NE(MEM32(ebp + 0x14), 3)) { sub_0048DDF2(); return; } /* jne: not equal / not zero */

loc_0048DDED: ;
    ebx = ebp + -20;
    g_seh_ebp = ebp; sub_0048DE07(); return; /* tail jmp 0x0048DE07 */

}

/**
 * sub_0048DE6C
 * Original: 0x0048DE6C - 0x0048DE87 (27 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DE6C(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048DE6C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    /* TODO: pushfd  */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ebp = ecx;
    edi = ebp + -256;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_0048DE7B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    /* TODO: popfd  */
    POP32(esp, ebp);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0048DEAF
 * Original: 0x0048DEAF - 0x0048DEEF (64 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DEAF(void)
{
    uint32_t ebp;

loc_0048DEAF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0048DEC9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 4));
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edx;
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0048DEDA: ;
    edx = edx ^ MEM32(ebp + -8);
    ecx = MEM32(ebp + 0x10);
    eax = eax ^ MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0048DF09
 * Original: 0x0048DF09 - 0x0048E0D6 (461 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048DF09(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048DF09: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ecx;
    PUSH32(esp, 0); sub_0049ABF0(); /* call 0x0049ABF0 */

loc_0048DF1A: ;
    if (TEST_S(eax, eax)) goto loc_0048E0D1; /* jl: less (signed <) */

loc_0048DF22: ;
    PUSH32(esp, 0x100000);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_0048DF2E: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0049A269(); /* call 0x0049A269 */

loc_0048DF35: ;
    if (TEST_S(eax, eax)) goto loc_0048E0D1; /* jl: less (signed <) */

loc_0048DF3D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(0x56118C);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebx + 0xD));
    edi = (uint32_t)((int32_t)edi * (int32_t)0xF4);
    eax = ebx + 0xA80;
    PUSH32(esp, 0x6F54454E);
    PUSH32(esp, edi);
    MEM32(ebx + 0xA84) = eax;
    MEM32(eax) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0048DF65: ;
    edx = eax;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ebp + 8) = edx;
    if (TEST_Z(edx, edx)) goto loc_0048DF85; /* je: equal / zero */

loc_0048DF6E: ;
    ecx = edi;
    edi = edx;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    edx = MEM32(ebp + 8);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_0048DF85: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ebx + 0xAC8) = edx;
    if (TEST_Z(edx, edx)) goto loc_0048DFDB; /* je: equal / zero */

loc_0048DF8F: ;
    edi = ZX8(MEM8(ebx + 0xE));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x130);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7054454E);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0048DFA1: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_0048DFBB; /* je: equal / zero */

loc_0048DFA7: ;
    ecx = edi;
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_0048DFBB: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ebx + 0xACC) = edx;
    if (TEST_Z(edx, edx)) goto loc_0048DFDB; /* je: equal / zero */

loc_0048DFC5: ;
    PUSH32(esp, 0xA54);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_004308B4(); /* call 0x004308B4 */

loc_0048DFD1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0xD1C) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0048DFE5; /* jne: not equal / not zero */

loc_0048DFDB: ;
    eax = 0x2747;
    goto loc_0048E0CF;

loc_0048DFE5: ;
    esi = MEM32(0x10118);
    esi = esi + 0xB0;
    edi = ebp + -19;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = ebp + -60;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x5611B0));
    MEM8(ebp + -20) = 0;
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_0048E017: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x5611B0));
    MEM8(ebp + -20) = 1;
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_0048E034: ;
    edi = ebx + 0xA98;
    esi = ebp + -60;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = ebx + 0xAA8;
    PUSH32(esp, 0x18);
    edi = eax;
    esi = ebp + -44;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0046DAA0(); /* call 0x0046DAA0 */

loc_0048E059: ;
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x5611B0));
    MEM8(ebp + -20) = 2;
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_0048E078: ;
    eax = MEM32(ebp + -60);
    MEM32(ebx + 0xAC0) = eax;
    eax = MEM32(ebp + -56);
    MEM32(ebx + 0xAC4) = eax;
    PUSH32(esp, 2);
    eax = ebx + 0xAD6;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00493400(); /* call 0x00493400 */

loc_0048E09A: ;
    eax = ZX8(MEM8(ebx + 0x42));
    eax = eax + eax * 4;
    MEM32(ebx + 0xADC) = eax;
    eax = ebx + 0xAE0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_0048E0B4: ;
    PUSH32(esp, 4);
    eax = ebx + 0x8B8;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM16(ebx + 0x8CE) = 0x20C;
    PUSH32(esp, 0); sub_00493400(); /* call 0x00493400 */

loc_0048E0CD: ;
    eax = 0; /* xor self */

loc_0048E0CF: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0048E0D1: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048E0D6
 * Original: 0x0048E0D6 - 0x0048E1B9 (227 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E0D6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048E0D6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 8);
    (void)0; /* test edx, 0x1000000 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(edx, 0x1000000)) goto loc_0048E1B5; /* jne: not equal / not zero */

loc_0048E0F1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0x10);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0048E1B4; /* je: equal / zero */

loc_0048E101: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    if (CMP_B(edi, 0x14)) goto loc_0048E1B3; /* jb: below (unsigned <) */

loc_0048E10E: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0xC));
    eax = eax >> 2;
    eax = eax & 0x3C;
    (void)0; /* cmp eax, 0x14 - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (CMP_B(eax, 0x14)) goto loc_0048E1B2; /* jb: below (unsigned <) */

loc_0048E129: ;
    if (CMP_A(eax, edi)) goto loc_0048E1B2; /* ja: above (unsigned >) */

loc_0048E131: ;
    if (CMP_EQ(MEM16(esi + 2), 0)) goto loc_0048E1B2; /* je: equal / zero */

loc_0048E138: ;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_0048E1B2; /* je: equal / zero */

loc_0048E13E: ;
    if (TEST_NZ(edx, 0x2000000)) goto loc_0048E181; /* jne: not equal / not zero */

loc_0048E146: ;
    eax = MEM32(ebx + 0xC);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = ecx;
    SET_LO16(eax, LO16(edi));
    SET_HI8(ecx, LO8(eax));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    MEM8(ebp + -8) = 0;
    MEM8(ebp + -7) = 6;
    SET_LO8(ecx, HI8(eax));
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM16(ebp + -6) = LO16(ecx);
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_0048E171: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_0048E177: ;
    if (CMP_NE(eax, 0xFFFF)) goto loc_0048E1B2; /* jne: not equal / not zero */

loc_0048E17E: ;
    eax = MEM32(ebp + 0xC);

loc_0048E181: ;
    if (CMP_EQ(MEM32(ebx + 0xC), 0)) goto loc_0048E1B2; /* je: equal / zero */

loc_0048E187: ;
    SET_LO16(ecx, MEM16(esi + 2));
    edi = edi - eax;
    PUSH32(esp, edi);
    MEM16(ebp + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi));
    eax = eax + esi;
    PUSH32(esp, eax);
    esi = esi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM16(ebp + 0x14) = LO16(ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0049F717(); /* call 0x0049F717 */

loc_0048E1B2: ;
    POP32(esp, esi);

loc_0048E1B3: ;
    POP32(esp, edi);

loc_0048E1B4: ;
    POP32(esp, ebx);

loc_0048E1B5: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0048E1B9
 * Original: 0x0048E1B9 - 0x0048E20F (86 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E1B9(void)
{
    uint32_t ebp;

loc_0048E1B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(edx) = 0x45;
    SET_LO8(eax, MEM8(esi + 0x16));
    MEM16(edx + 2) = MEM16(edx + 2) & 0;
    MEM8(edx + 1) = LO8(eax);
    eax = esi + 0x8B8;
    MEM32(ebp + 8) = eax;
    eax = 1;
    ecx = MEM32(ebp + 8);
    /* TODO: xadd dword ptr [ecx], eax */
    eax++;
    MEM16(edx + 6) = MEM16(edx + 6) & 0;
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    MEM16(edx + 4) = LO16(ecx);
    SET_LO8(eax, MEM8(esi + 0x17));
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & 0;
    MEM8(edx + 8) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x10));
    MEM8(edx + 9) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    MEM32(edx + 0x10) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0048E20F
 * Original: 0x0048E20F - 0x0048E21B (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E20F(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048E20F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x8C4;
    g_seh_ebp = ebp; sub_0048E228(); return; /* tail jmp 0x0048E228 */

}

/**
 * sub_0048E230
 * Original: 0x0048E230 - 0x0048E25B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E230(void)
{

loc_0048E230: ;
    MEM32(ecx + 0xA88) = MEM32(ecx + 0xA88) & 0;
    MEM32(ecx + 0xA8C) = MEM32(ecx + 0xA8C) & 0;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(edx + 4) = esi;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) | 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048DC36(); /* call 0x0048DC36 */

loc_0048E257: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048E25B
 * Original: 0x0048E25B - 0x0048E26C (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E25B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048E25B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = ecx;
    if (TEST_NZ(edi, edi)) { sub_0048E26C(); return; } /* jne: not equal / not zero */

loc_0048E268: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0048E2DC(); return; /* tail jmp 0x0048E2DC */

}

/**
 * sub_0048E2E1
 * Original: 0x0048E2E1 - 0x0048E3DB (250 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E2E1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048E2E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = MEM32(ebp + 8) & ebx;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + 8;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_0048E2F6: ;
    if (TEST_NZ(eax, eax)) goto loc_0048E304; /* jne: not equal / not zero */

loc_0048E2FA: ;
    if (TEST_Z(MEM8(ebp + 0x14), 4)) goto loc_0048E3D5; /* je: equal / zero */

loc_0048E304: ;
    ecx = ebp + 0x10;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_0048E30C: ;
    if (TEST_Z(eax, eax)) goto loc_0048E3D5; /* je: equal / zero */

loc_0048E314: ;
    eax = ebx;
    eax = BSWAP32(eax); /* bswap */
    eax = ~eax;
    ecx = eax + 1;
    if (TEST_NZ(eax, ecx)) goto loc_0048E3D5; /* jne: not equal / not zero */

loc_0048E325: ;
    PUSH32(esp, edi);
    edi = esi + 0xA80;
    eax = MEM32(edi);
    if (CMP_EQ(eax, edi)) goto loc_0048E353; /* je: equal / zero */

loc_0048E332: ;
    edx = MEM32(eax + 0x10);
    (void)0; /* cmp edx, MEM32(ebp + 8) - flags set for next jcc */
    ecx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ebp + 8))) goto loc_0048E34D; /* jne: not equal / not zero */

loc_0048E33C: ;
    if (CMP_NE(MEM32(eax + 0x14), ebx)) goto loc_0048E34D; /* jne: not equal / not zero */

loc_0048E341: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0048E39D; /* jne: not equal / not zero */

loc_0048E345: ;
    edx = MEM32(eax + 0x18);
    if (CMP_EQ(edx, MEM32(ebp + 0x10))) goto loc_0048E39D; /* je: equal / zero */

loc_0048E34D: ;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    eax = ecx;
    if (CMP_NE(ecx, edi)) goto loc_0048E332; /* jne: not equal / not zero */

loc_0048E353: ;
    PUSH32(esp, 0x3754454E);
    PUSH32(esp, 0x1C);
    ecx = esi;
    PUSH32(esp, 0); sub_004932A5(); /* call 0x004932A5 */

loc_0048E361: ;
    if (TEST_Z(eax, eax)) goto loc_0048E3D4; /* je: equal / zero */

loc_0048E365: ;
    MEM32(eax + 8) = 1;

loc_0048E36C: ;
    MEM32(esi + 0xA88) = MEM32(esi + 0xA88) & 0;
    MEM32(esi + 0xA8C) = MEM32(esi + 0xA8C) & 0;
    SET_LO16(ecx, MEM16(ebp + 0x14));
    SET_LO16(edx, MEM16(ebp + 0x18));
    MEM16(eax + 0xC) = LO16(ecx);
    MEM16(eax + 0xE) = LO16(edx);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ebx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(edi);
    goto loc_0048E3C0;

loc_0048E39D: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    goto loc_0048E36C;

loc_0048E3A9: ;
    esi = MEM32(ecx);
    MEM32(ebp + 0x14) = esi;
    esi = MEM32(ecx + 0x14);
    if (CMP_A(ebx, esi)) goto loc_0048E3C4; /* ja: above (unsigned >) */

loc_0048E3B5: ;
    if (CMP_NE(ebx, esi)) goto loc_0048E3BD; /* jne: not equal / not zero */

loc_0048E3B7: ;
    if (CMP_B(LO16(edx), MEM16(ecx + 0xE))) goto loc_0048E3C4; /* jb: below (unsigned <) */

loc_0048E3BD: ;
    ecx = MEM32(ebp + 0x14);

loc_0048E3C0: ;
    if (CMP_NE(ecx, edi)) goto loc_0048E3A9; /* jne: not equal / not zero */

loc_0048E3C4: ;
    MEM32(eax) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = eax;
    MEM32(ecx + 4) = eax;

loc_0048E3D4: ;
    POP32(esp, edi);

loc_0048E3D5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0048E3DB
 * Original: 0x0048E3DB - 0x0048E44C (113 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E3DB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048E3DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + 8;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_0048E3E9: ;
    if (TEST_Z(eax, eax)) goto loc_0048E447; /* je: equal / zero */

loc_0048E3ED: ;
    ecx = ebp + 0x10;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_0048E3F5: ;
    if (TEST_Z(eax, eax)) goto loc_0048E447; /* je: equal / zero */

loc_0048E3F9: ;
    eax = MEM32(esi + 0x26C);
    ecx = MEM32(esi + 0x268);
    edx = eax;
    eax = eax & MEM32(ebp + 0x10);
    edx = edx & ecx;
    if (CMP_NE(edx, eax)) goto loc_0048E447; /* jne: not equal / not zero */

loc_0048E410: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0); sub_0048E25B(); /* call 0x0048E25B */

loc_0048E41A: ;
    if (TEST_Z(eax, eax)) goto loc_0048E447; /* je: equal / zero */

loc_0048E41E: ;
    ecx = MEM32(eax + 0x18);
    if (CMP_EQ(ecx, MEM32(ebp + 0xC))) goto loc_0048E430; /* je: equal / zero */

loc_0048E426: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0048DC36(); /* call 0x0048DC36 */

loc_0048E42E: ;
    goto loc_0048E447;

loc_0048E430: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0); sub_0048E2E1(); /* call 0x0048E2E1 */

loc_0048E447: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0048E44C
 * Original: 0x0048E44C - 0x0048E4C1 (117 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E44C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048E44C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) & 0xE0);
    esi = ecx;
    if ((LO8(eax) == 0)) goto loc_0048E474; /* je: equal / zero */

loc_0048E462: ;
    if (CMP_EQ(LO8(eax), 0x80)) goto loc_0048E4A5; /* je: equal / zero */

loc_0048E466: ;
    if (CMP_EQ(LO8(eax), 0xE0)) goto loc_0048E474; /* je: equal / zero */

loc_0048E46A: ;
    eax = 0x2726;
    g_seh_ebp = ebp; sub_0048E542(); return; /* tail jmp 0x0048E542 */

loc_0048E474: ;
    if (CMP_EQ(LO8(eax), 0x80)) goto loc_0048E4A5; /* je: equal / zero */

loc_0048E478: ;
    if (CMP_EQ(LO8(eax), 0xE0)) goto loc_0048E4A5; /* je: equal / zero */

loc_0048E47C: ;
    PUSH32(esp, 0x60);
    eax = ebp + -96;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00493400(); /* call 0x00493400 */

loc_0048E489: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x4A0130);
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4A0190);
    eax = ebp + -192;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAA6(); /* call 0x0046DAA6 */

loc_0048E4A5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0048E4AB: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(ebp + 8) = LO8(eax);
    PUSH32(esp, 0); sub_0048DC89(); /* call 0x0048DC89 */

loc_0048E4B6: ;
    if (TEST_Z(eax, eax)) { sub_0048E4C1(); return; } /* je: equal / zero */

loc_0048E4BA: ;
    esi = 0x2735;
    g_seh_ebp = ebp; sub_0048E537(); return; /* tail jmp 0x0048E537 */

}

/**
 * sub_0048E548
 * Original: 0x0048E548 - 0x0048E59E (86 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E548(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048E548: ;
    edx = ZX8(MEM8(ecx + 0xE));
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(ecx + 0xACC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(edx & edx, 0)) goto loc_0048E596; /* jbe: below or equal (unsigned <=) */

loc_0048E559: ;
    if (CMP_EQ(MEM8(eax + 2), 0)) goto loc_0048E58E; /* je: equal / zero */

loc_0048E55F: ;
    if (TEST_NZ(MEM8(eax), 4)) goto loc_0048E58E; /* jne: not equal / not zero */

loc_0048E564: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 3);
    edi = edi + 0xA;
    POP32(esp, ecx);
    esi = eax + 0xCE;
    ebx = 0; /* xor self */
    /* repe cmpsw - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0048E58E; /* jne: not equal / not zero */

loc_0048E57B: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(eax + 0xC0);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    ebx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_0048E598; /* je: equal / zero */

loc_0048E58E: ;
    eax = eax + 0x130;
    edx--;
    if ((edx != 0)) goto loc_0048E559; /* jne: not equal / not zero */

loc_0048E596: ;
    eax = 0; /* xor self */

loc_0048E598: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0048E59E
 * Original: 0x0048E59E - 0x0048E60F (113 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E59E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048E59E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = ZX8(MEM8(edi + 0xE));
    (void)0; /* test ebx, ebx - flags set for next jcc */
    esi = MEM32(edi + 0xACC);
    if (CMP_BE(ebx & ebx, 0)) goto loc_0048E607; /* jbe: below or equal (unsigned <=) */

loc_0048E5B1: ;
    if (CMP_EQ(MEM8(esi + 2), 0)) goto loc_0048E5FE; /* je: equal / zero */

loc_0048E5B7: ;
    if (TEST_Z(MEM8(esi), 4)) goto loc_0048E5FE; /* je: equal / zero */

loc_0048E5BC: ;
    eax = MEM32(esi + 0xB8);
    if (CMP_NE(eax, MEM32(esp + 0x10))) goto loc_0048E5FE; /* jne: not equal / not zero */

loc_0048E5C8: ;
    eax = MEM32(esi + 0xC0);
    if (CMP_EQ(eax, MEM32(esp + 0x14))) { sub_0048E60F(); return; } /* je: equal / zero */

loc_0048E5D4: ;
    ecx = MEM32(edi + 0xAEC);
    if (TEST_Z(ecx, ecx)) goto loc_0048E5E6; /* je: equal / zero */

loc_0048E5DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A3B6F(); /* call 0x004A3B6F */

loc_0048E5E4: ;
    goto loc_0048E5E8;

loc_0048E5E6: ;
    eax = 0; /* xor self */

loc_0048E5E8: ;
    if (TEST_Z(eax, eax)) goto loc_0048E5FE; /* je: equal / zero */

loc_0048E5EC: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0xD0);
    if (CMP_EQ(ecx, MEM32(eax + 0xD0))) { sub_0048E60F(); return; } /* je: equal / zero */

loc_0048E5FE: ;
    esi = esi + 0x130;
    ebx--;
    if ((ebx != 0)) goto loc_0048E5B1; /* jne: not equal / not zero */

loc_0048E607: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0048E613
 * Original: 0x0048E613 - 0x0048E650 (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E613(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048E613: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xACC);
    eax = 0; /* xor self */
    if (TEST_Z(esi, esi)) goto loc_0048E64C; /* je: equal / zero */

loc_0048E620: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    if (TEST_Z(ebx, ebx)) goto loc_0048E64B; /* je: equal / zero */

loc_0048E629: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0048E64B; /* jne: not equal / not zero */

loc_0048E62D: ;
    ecx = ZX8(MEM8(ecx + 0xE));
    edx = ebx;
    edx = edx >> 0x18;
    if (CMP_AE(edx, ecx)) goto loc_0048E64B; /* jae: above or equal (unsigned >=) */

loc_0048E63A: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x130);
    edx = edx + esi;
    eax = edx;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_0048E64B; /* je: equal / zero */

loc_0048E649: ;
    eax = 0; /* xor self */

loc_0048E64B: ;
    POP32(esp, ebx);

loc_0048E64C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048E650
 * Original: 0x0048E650 - 0x0048E682 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E650(void)
{

loc_0048E650: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x1D8;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax + 0x18) = esi;
    esi = MEM32(edx);
    MEM32(eax + 0x1C) = esi;
    edx = MEM32(edx);
    MEM32(eax + 0x20) = edx;
    edx = ZX8(MEM8(ecx + 0x43));
    edx = edx + edx * 4;
    MEM32(eax + 0x24) = edx;
    ecx = ZX8(MEM8(ecx + 0x44));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x32);
    MEM32(eax + 0x28) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048E682
 * Original: 0x0048E682 - 0x0048E6CE (76 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E682(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0048E682: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* test MEM8(ebx), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(ebx), 2)) { sub_0048E6CE(); return; } /* je: equal / zero */

loc_0048E693: ;
    edi = MEM32(ebp + 0x24);
    esi = MEM32(ebp + 0xC);
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0xFFFFFFDCu;
    edi = edi + 0x24;
    edi = ebp + edi + -116;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + 0x24);
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0x24;
    PUSH32(esp, 9);
    esi = ebx + 0xC4;
    edi = ebp + edi + -116;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebp + 8) = 0x48;
    g_seh_ebp = ebp; sub_0048E707(); return; /* tail jmp 0x0048E707 */

}

/**
 * sub_0048E7B9
 * Original: 0x0048E7B9 - 0x0048E7FA (65 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E7B9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048E7B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(ebx, ebx)) { sub_0048E7FA(); return; } /* je: equal / zero */

loc_0048E7C7: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_0048E7FA(); return; } /* jne: not equal / not zero */

loc_0048E7CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0048E7D1: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(ebp + 8) = LO8(eax);
    PUSH32(esp, 0); sub_0048E613(); /* call 0x0048E613 */

loc_0048E7DC: ;
    if (TEST_Z(eax, eax)) goto loc_0048E7EA; /* je: equal / zero */

loc_0048E7E0: ;
    if (CMP_EQ(MEM8(eax + 2), 1)) goto loc_0048E7EA; /* je: equal / zero */

loc_0048E7E6: ;
    esi = 0; /* xor self */
    goto loc_0048E7ED;

loc_0048E7EA: ;
    esi = 0; /* xor self */
    esi++;

loc_0048E7ED: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0048E7F6: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0048E7FC(); return; /* tail jmp 0x0048E7FC */

}

/**
 * sub_0048E802
 * Original: 0x0048E802 - 0x0048E827 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E802(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048E802: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); sub_0048E613(); /* call 0x0048E613 */

loc_0048E813: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (TEST_Z(eax, eax)) goto loc_0048E820; /* je: equal / zero */

loc_0048E81A: ;
    if (CMP_AE(MEM8(eax + 2), 6)) { sub_0048E827(); return; } /* jae: above or equal (unsigned >=) */

loc_0048E820: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0048E918(); return; /* tail jmp 0x0048E918 */

}

/**
 * sub_0048E91C
 * Original: 0x0048E91C - 0x0048EA2A (270 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048E91C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048E91C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0048E92B: ;
    edx = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    PUSH32(esp, 9);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x268);
    MEM32(edx) = eax;
    esi = ebx + 0x1E0;
    edi = edx + 0xA;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    esi = 0; /* xor self */
    (void)0; /* test MEM8(ebx + 0xA78), 1 - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    if (TEST_Z(MEM8(ebx + 0xA78), 1)) goto loc_0048EA17; /* je: equal / zero */

loc_0048E960: ;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    if (CMP_NE(LO8(eax), 5)) goto loc_0048E973; /* jne: not equal / not zero */

loc_0048E96A: ;
    MEM32(ebp + 8) = 4;
    goto loc_0048E998;

loc_0048E973: ;
    if (CMP_EQ(LO8(eax), 0xC)) goto loc_0048E991; /* je: equal / zero */

loc_0048E977: ;
    if (CMP_EQ(LO8(eax), 0xD)) goto loc_0048E991; /* je: equal / zero */

loc_0048E97B: ;
    if (CMP_EQ(LO8(eax), 0xE)) goto loc_0048E991; /* je: equal / zero */

loc_0048E97F: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 0x16 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(eax), 0x16)) ? 1 : 0); /* setne */
    ecx--;
    ecx = ecx & 0x2E;
    ecx++;
    ecx++;
    MEM32(ebp + 8) = ecx;
    goto loc_0048E998;

loc_0048E991: ;
    MEM32(ebp + 8) = 8;

loc_0048E998: ;
    if (CMP_EQ(MEM32(ebx + 0x8D0), esi)) goto loc_0048E9A4; /* je: equal / zero */

loc_0048E9A0: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) | 0x20;

loc_0048E9A4: ;
    if (CMP_EQ(MEM32(ebx + 0x8E0), esi)) goto loc_0048E9B0; /* je: equal / zero */

loc_0048E9AC: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) | 0x40;

loc_0048E9B0: ;
    if (CMP_B(MEM32(ebx + 0xAF0), 6)) goto loc_0048EA0A; /* jb: below (unsigned <) */

loc_0048E9B9: ;
    eax = MEM32(ebx + 0xAF4);
    if (CMP_EQ(eax, esi)) goto loc_0048EA0A; /* je: equal / zero */

loc_0048E9C3: ;
    eax = MEM32(eax + 0xD8);
    MEM32(edx + 4) = eax;
    eax = ebx + 0x91E;
    if (CMP_EQ(MEM16(eax), LO16(esi))) goto loc_0048E9E0; /* je: equal / zero */

loc_0048E9D7: ;
    if (TEST_NZ(MEM8(ebx + 0x8CD), 1)) goto loc_0048E9EB; /* jne: not equal / not zero */

loc_0048E9E0: ;
    eax = MEM32(ebx + 0xAF4);
    eax = eax + 0xDC;

loc_0048E9EB: ;
    SET_LO16(eax, MEM16(eax));
    MEM16(edx + 8) = LO16(eax);
    esi = MEM32(ebx + 0xAF4);
    PUSH32(esp, 5);
    esi = esi + 0xC4;
    MEM8(ebp + 8) = MEM8(ebp + 8) | 0x80;
    edi = edx + 0x10;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0048EA0A: ;
    if (TEST_Z(MEM8(ebx + 0xA7B), 0x80)) goto loc_0048EA17; /* je: equal / zero */

loc_0048EA13: ;
    MEM8(ebp + 9) = MEM8(ebp + 9) | 0x80;

loc_0048EA17: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0048EA20: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048EA2A
 * Original: 0x0048EA2A - 0x0048EA7D (83 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EA2A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048EA2A: ;
    if (CMP_NE(MEM32(ecx + 0xAF0), 7)) goto loc_0048EA7C; /* jne: not equal / not zero */

loc_0048EA33: ;
    eax = MEM32(ecx + 0xACC);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0xE));
    if (CMP_BE(esi & esi, 0)) goto loc_0048EA61; /* jbe: below or equal (unsigned <=) */

loc_0048EA42: ;
    if (TEST_Z(MEM8(eax), 4)) goto loc_0048EA59; /* je: equal / zero */

loc_0048EA47: ;
    SET_LO8(edx, MEM8(eax + 2));
    if (CMP_EQ(LO8(edx), 8)) goto loc_0048EA7B; /* je: equal / zero */

loc_0048EA4F: ;
    if (CMP_B(LO8(edx), 3)) goto loc_0048EA59; /* jb: below (unsigned <) */

loc_0048EA54: ;
    if (CMP_BE(LO8(edx), 5)) goto loc_0048EA7B; /* jbe: below or equal (unsigned <=) */

loc_0048EA59: ;
    eax = eax + 0x130;
    esi--;
    if ((esi != 0)) goto loc_0048EA42; /* jne: not equal / not zero */

loc_0048EA61: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ecx + 0xAF8));
    MEM32(ecx + 0xAF0) = 6;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_0048EA7B: ;
    POP32(esp, esi);

loc_0048EA7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048EAAB
 * Original: 0x0048EAAB - 0x0048EB86 (219 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EAAB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048EAAB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0048EABB: ;
    ebx = MEM32(ebp + 8);
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    MEM8(ebp + -12) = LO8(eax);
    if (CMP_AE(ebx, 4)) { sub_0048EB86(); return; } /* jae: above or equal (unsigned >=) */

loc_0048EACA: ;
    eax = MEM32(ebp + 0x10);
    ebx = ebx + 0x16;
    ebx = ebx << 7;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = ebx + esi;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = edi;
    MEM32(ebp + 0x10) = eax;
    if (CMP_BE(eax & eax, 0)) goto loc_0048EB80; /* jbe: below or equal (unsigned <=) */

loc_0048EAE7: ;
    goto loc_0048EAEC;

loc_0048EAE9: ;
    edi = MEM32(ebp + 8);

loc_0048EAEC: ;
    ecx = MEM32(edi);
    eax = ecx;
    eax = eax >> 2;
    edx = ecx;
    eax = eax & 0x1F;
    edx = edx & 3;
    edx++;
    (void)0; /* cmp edx, MEM32(ebp + 0x10) - flags set for next jcc */
    esi = ebx + eax * 4 + 8;
    MEM32(ebp + -8) = esi;
    if (CMP_A(edx, MEM32(ebp + 0x10))) goto loc_0048EB80; /* ja: above (unsigned >) */

loc_0048EB08: ;
    esi = edx + eax;
    if (CMP_A(esi, 0xF)) goto loc_0048EB80; /* ja: above (unsigned >) */

loc_0048EB10: ;
    esi = MEM32(ebp + -8);
    esi = MEM32(esi);
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0xFFFFFF00u;
    MEM32(ebp + -4) = esi;
    if (0) goto loc_0048EB3B; /* jbe: below or equal (unsigned <=) */

loc_0048EB24: ;
    esi = esi >> 2;
    esi = esi & 0x1F;
    if (CMP_NE(esi, eax)) goto loc_0048EB80; /* jne: not equal / not zero */

loc_0048EB2E: ;
    eax = MEM32(ebp + -4);
    eax = eax & 3;
    esi = edx + -1;
    if (CMP_NE(eax, esi)) goto loc_0048EB80; /* jne: not equal / not zero */

loc_0048EB3B: ;
    if (CMP_BE(MEM32(ebp + 0xC), 0)) goto loc_0048EB4A; /* jbe: below or equal (unsigned <=) */

loc_0048EB41: ;
    esi = MEM32(ebp + -8);
    ecx = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_0048EB6E;

loc_0048EB4A: ;
    ecx = ecx & 0x7F;
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    MEM32(edi) = ecx;
    if (CMP_BE(edx, 1)) goto loc_0048EB71; /* jbe: below or equal (unsigned <=) */

loc_0048EB54: ;
    ecx = edx * 4 + -4;
    esi = ecx;
    ecx = ecx >> 2;
    edi = edi + 4;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_0048EB6E: ;
    edi = MEM32(ebp + 8);

loc_0048EB71: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - edx;
    eax = edi + edx * 4;
    MEM32(ebp + 8) = eax;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_0048EAE9; /* jne: not equal / not zero */

loc_0048EB80: ;
    esi = 0; /* xor self */
    esi++;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0048EB88(); return; /* tail jmp 0x0048EB88 */

}

/**
 * sub_0048EB99
 * Original: 0x0048EB99 - 0x0048EC61 (200 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EB99(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048EB99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0048EBA8: ;
    edx = MEM32(ebp + 8);
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    MEM8(ebp + -12) = LO8(eax);
    if (CMP_AE(edx, 4)) { sub_0048EC61(); return; } /* jae: above or equal (unsigned >=) */

loc_0048EBB7: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    edx = edx + 0x16;
    edx = edx << 7;
    edx = edx + esi;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = eax;
    if (CMP_BE(eax & eax, 0)) goto loc_0048EC5C; /* jbe: below or equal (unsigned <=) */

loc_0048EBD7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_0048EBDE;

loc_0048EBDB: ;
    esi = MEM32(ebp + 8);

loc_0048EBDE: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx >> 2;
    ecx = ecx & 0x1F;
    ebx = eax;
    edi = edx + ecx * 4 + 8;
    ebx = ebx & 3;
    MEM32(ebp + -4) = edi;
    edi = 0xFFFFFF00u;
    ebx++;
    eax = eax & edi;
    (void)0; /* cmp ebx, MEM32(ebp + 0xC) - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_A(ebx, MEM32(ebp + 0xC))) goto loc_0048EC37; /* ja: above (unsigned >) */

loc_0048EC04: ;
    if (TEST_Z(eax, eax)) goto loc_0048EC2C; /* je: equal / zero */

loc_0048EC08: ;
    eax = ebx + ecx;
    if (CMP_A(eax, 0xF)) goto loc_0048EC2C; /* ja: above (unsigned >) */

loc_0048EC10: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx & edi;
    if (CMP_BE(MEM32(ebp + -8), ecx)) goto loc_0048EC2C; /* jbe: below or equal (unsigned <=) */

loc_0048EC1C: ;
    ecx = ebx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = 1;

loc_0048EC2C: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - ebx;
    eax = esi + ebx * 4;
    MEM32(ebp + 8) = eax;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_0048EBDB; /* jne: not equal / not zero */

loc_0048EC37: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) goto loc_0048EC5A; /* je: equal / zero */

loc_0048EC3D: ;
    PUSH32(esp, 3);
    esi = edx + 0x48;
    POP32(esp, edi);

loc_0048EC43: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0048EC54; /* je: equal / zero */

loc_0048EC49: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_0048EC54: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_0048EC43; /* jne: not equal / not zero */

loc_0048EC5A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0048EC5C: ;
    esi = 0; /* xor self */
    esi++;
    g_seh_ebp = ebp; sub_0048EC63(); return; /* tail jmp 0x0048EC63 */

}

/**
 * sub_0048EC73
 * Original: 0x0048EC73 - 0x0048ECE0 (109 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EC73(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048EC73: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0048EC81: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(ebp + 8);
    if (CMP_AE(eax, 4)) goto loc_0048ECCF; /* jae: above or equal (unsigned >=) */

loc_0048EC8B: ;
    esi = eax + 0x16;
    esi = esi << 7;
    esi = esi + edi;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 0xC), edi)) goto loc_0048ECB6; /* je: equal / zero */

loc_0048EC9A: ;
    eax = ebp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x5610F8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56104C), _icall_esp); /* indirect call */
    }

loc_0048ECAD: ;
    if (TEST_NZ(eax, eax)) goto loc_0048ECB6; /* jne: not equal / not zero */

loc_0048ECB1: ;
    ecx = MEM32(ebp + 0xC);
    goto loc_0048ECB8;

loc_0048ECB6: ;
    ecx = 0; /* xor self */

loc_0048ECB8: ;
    eax = esi + 0x48;

loc_0048ECBB: ;
    if (CMP_EQ(MEM32(eax), 0)) { sub_0048ECE0(); return; } /* je: equal / zero */

loc_0048ECC0: ;
    edi++;
    eax = eax + 4;
    if (CMP_L(edi, 3)) goto loc_0048ECBB; /* jl: less (signed <) */

loc_0048ECC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561044), _icall_esp); /* indirect call */
    }

loc_0048ECCF: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0048ECD7: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0048EDED
 * Original: 0x0048EDED - 0x0048EEB1 (196 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EDED(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048EDED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0048EDFC: ;
    edi = MEM32(ebp + 8);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(edi + 0xC), esi - flags set for next jcc */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_NE(MEM32(edi + 0xC), esi)) goto loc_0048EE16; /* jne: not equal / not zero */

loc_0048EE09: ;
    MEM32(edi + 8) = MEM32(edi + 8) | 0xFFFFFFFFu;
    MEM32(edi) = esi;
    MEM32(edi + 0xC) = 0x48DE87;

loc_0048EE16: ;
    ecx = MEM32(edi + 0x10);
    if (CMP_EQ(ecx, esi)) goto loc_0048EE26; /* je: equal / zero */

loc_0048EE1D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561044), _icall_esp); /* indirect call */
    }

loc_0048EE23: ;
    MEM32(edi + 0x10) = esi;

loc_0048EE26: ;
    esi = MEM32(ebp + 0x10);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0048EE98; /* je: equal / zero */

loc_0048EE2E: ;
    eax = MEM32(0x561018);
    ecx = MEM32(eax);
    ecx = ecx - MEM32(ebx + 0x1DC);
    eax = 0xC8;
    if (CMP_BE(ecx, eax)) goto loc_0048EE46; /* jbe: below or equal (unsigned <=) */

loc_0048EE44: ;
    ecx = eax;

loc_0048EE46: ;
    eax = eax - ecx;
    esi = esi + 0x19;
    if (CMP_AE(esi, eax)) goto loc_0048EE53; /* jae: above or equal (unsigned >=) */

loc_0048EE4F: ;
    eax = 0; /* xor self */
    goto loc_0048EE67;

loc_0048EE53: ;
    esi = esi - eax;
    esi = esi + 0xC7;
    eax = esi + esi * 4;
    edx = 0; /* xor self */
    ecx = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }

loc_0048EE67: ;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    ecx = MEM32(ebx + 0x1D8);
    esi = eax + ecx + 1;
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_0048EE93; /* je: equal / zero */

loc_0048EE77: ;
    eax = ebp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x5610F8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56104C), _icall_esp); /* indirect call */
    }

loc_0048EE8A: ;
    if (TEST_NZ(eax, eax)) goto loc_0048EE93; /* jne: not equal / not zero */

loc_0048EE8E: ;
    eax = MEM32(ebp + 0xC);
    goto loc_0048EE95;

loc_0048EE93: ;
    eax = 0; /* xor self */

loc_0048EE95: ;
    MEM32(edi + 0x10) = eax;

loc_0048EE98: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_0048EEA1: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0048EEAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0048EEB1
 * Original: 0x0048EEB1 - 0x0048EFD8 (295 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048EEB1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048EEB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x10);
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ecx;
    eax = eax & 0xF;
    eax = eax << 2;
    edi = eax;
    eax = ZX16(MEM16(ebx + 4));
    MEM16(esi + 0xA) = MEM16(esi + 0xA) & 0;
    MEM32(ebp + 8) = eax;
    SET_HI8(ecx, LO8(eax));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(ecx, HI8(eax));
    MEM16(esi + 2) = LO16(ecx);
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_0048EEF1: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - edi;
    eax = ~eax;
    MEM16(esi + 0xA) = LO16(eax);
    eax = MEM32(ebx + 8);
    eax = eax & 7;
    if (CMP_EQ(eax, 3)) goto loc_0048EF67; /* je: equal / zero */

loc_0048EF05: ;
    if (CMP_EQ(eax, 6)) goto loc_0048EF67; /* je: equal / zero */

loc_0048EF0A: ;
    if (CMP_AE(eax, 4)) goto loc_0048EF67; /* jae: above or equal (unsigned >=) */

loc_0048EF0F: ;
    if (CMP_EQ(eax, 2)) goto loc_0048EF1D; /* je: equal / zero */

loc_0048EF14: ;
    if (CMP_NE(eax, 5)) goto loc_0048EFBB; /* jne: not equal / not zero */

loc_0048EF1D: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    SET_LO16(eax, MEM16(ebp + 8));
    SET_HI8(ecx, LO8(eax));
    edi = edi + esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    MEM8(ebp + -12) = 0;
    MEM8(ebp + -11) = 6;
    SET_LO8(ecx, HI8(eax));
    eax = 0; /* xor self */
    MEM16(ebp + -10) = LO16(ecx);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM16(edi + 0x12) = LO16(eax);
    MEM16(edi + 0x10) = LO16(eax);
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_0048EF59: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_0048EF5F: ;
    eax = ~eax;
    MEM16(edi + 0x10) = LO16(eax);
    goto loc_0048EFBB;

loc_0048EF67: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    SET_LO16(eax, MEM16(ebp + 8));
    SET_HI8(ecx, LO8(eax));
    edi = edi + esi;
    PUSH32(esp, edi);
    MEM8(ebp + -12) = 0;
    MEM8(ebp + -11) = 0x11;
    PUSH32(esp, 0xC);
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, LO16(ecx));
    MEM16(ebp + -10) = LO16(eax);
    MEM16(edi + 6) = MEM16(edi + 6) & 0;
    MEM16(edi + 4) = LO16(eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_0048EFA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_0048EFAC: ;
    eax = ~eax;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    eax = eax - ecx;
    MEM16(edi + 6) = LO16(eax);

loc_0048EFBB: ;
    eax = MEM32(ebx + 8);
    if (((int32_t)(eax & eax) >= 0)) { sub_0048EFD8(); return; } /* jns: not sign (positive) */

loc_0048EFC2: ;
    eax = eax & 0x7FFFFFFF;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    MEM32(ebx + 8) = eax;
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    g_seh_ebp = ebp; sub_0048F0D8(); return; /* tail jmp 0x0048F0D8 */

}

/**
 * sub_0048F0E5
 * Original: 0x0048F0E5 - 0x0048F10E (41 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F0E5(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048F0E5: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = ebx + 0xA80;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0048F10B; /* je: equal / zero */

loc_0048F0F5: ;
    if (CMP_EQ(eax, esi)) goto loc_0048F10B; /* je: equal / zero */

loc_0048F0F9: ;
    PUSH32(esp, edi);

loc_0048F0FA: ;
    edi = MEM32(eax);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_0048E230(); /* call 0x0048E230 */

loc_0048F104: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    eax = edi;
    if (CMP_NE(edi, esi)) goto loc_0048F0FA; /* jne: not equal / not zero */

loc_0048F10A: ;
    POP32(esp, edi);

loc_0048F10B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048F10E
 * Original: 0x0048F10E - 0x0048F14C (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F10E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048F10E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0xC);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(edx, edx)) goto loc_0048F126; /* je: equal / zero */

loc_0048F11D: ;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0048F126: ;
    ebx = MEM32(ebp + 0x10);
    if (TEST_Z(ebx, ebx)) goto loc_0048F133; /* je: equal / zero */

loc_0048F12D: ;
    eax = 0; /* xor self */
    edi = ebx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */

loc_0048F133: ;
    if (CMP_NE(MEM32(ebp + 8), 0x100007F)) { sub_0048F14C(); return; } /* jne: not equal / not zero */

loc_0048F13C: ;
    if (TEST_Z(edx, edx)) goto loc_0048F148; /* je: equal / zero */

loc_0048F140: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_0048E91C(); /* call 0x0048E91C */

loc_0048F148: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0048F1AA(); return; /* tail jmp 0x0048F1AA */

}

/**
 * sub_0048F1FE
 * Original: 0x0048F1FE - 0x0048F2C5 (199 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F1FE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048F1FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0); sub_00493470(); /* call 0x00493470 */

loc_0048F218: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = ZX16(MEM16(esi + 4));
    eax = eax + ecx + -12;
    ecx = esi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -44) = eax;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_0048F231: ;
    ecx = MEM32(ebp + 0xC);
    if (TEST_NZ(ecx, ecx)) { sub_0048F2C5(); return; } /* jne: not equal / not zero */

loc_0048F23C: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    edi = eax + 6;
    esi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    MEM16(eax + 4) = MEM16(eax + 4) | 0xFFFF;
    MEM16(eax + 0xC) = 8;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xC) = 0x1000000;
    eax = MEM32(ebp + -8);
    MEM16(eax) = 0x20C;
    MEM16(eax + 2) = 0x20C;
    eax = eax + 8;
    MEM32(eax) = MEM32(eax) & ecx;
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00493400(); /* call 0x00493400 */

loc_0048F288: ;
    ecx = MEM32(ebp + -4);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + -8);
    eax = ecx;
    ecx = ecx & 0xFFFF;
    eax = eax << 0x10;
    eax = eax | ecx;
    ecx = ebx + 0xA98;
    MEM32(ebp + -48) = ecx;
    ecx = ebx + 0xAA8;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -36) = 0x18;
    ecx = ebx + 0xAC0;
    g_seh_ebp = ebp; sub_0048F405(); return; /* tail jmp 0x0048F405 */

}

/**
 * sub_0048F4EA
 * Original: 0x0048F4EA - 0x0048F511 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F4EA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048F4EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ecx + 0xAEC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (TEST_Z(ecx, ecx)) { sub_0048F511(); return; } /* je: equal / zero */

loc_0048F501: ;
    PUSH32(esp, MEM32(edi + 0xC0));
    PUSH32(esp, 0); sub_004A3B6F(); /* call 0x004A3B6F */

loc_0048F50C: ;
    MEM32(ebp + 8) = eax;
    g_seh_ebp = ebp; sub_0048F518(); return; /* tail jmp 0x0048F518 */

}

/**
 * sub_0048F6B9
 * Original: 0x0048F6B9 - 0x0048F6E0 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F6B9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048F6B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ecx + 0xAEC);
    esi = 0; /* xor self */
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_EQ(ecx, esi)) { sub_0048F6E0(); return; } /* je: equal / zero */

loc_0048F6D3: ;
    PUSH32(esp, MEM32(edi + 0xC0));
    PUSH32(esp, 0); sub_004A3B6F(); /* call 0x004A3B6F */

loc_0048F6DE: ;
    g_seh_ebp = ebp; sub_0048F6E2(); return; /* tail jmp 0x0048F6E2 */

}

/**
 * sub_0048F89E
 * Original: 0x0048F89E - 0x0048F94B (173 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F89E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048F89E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ebx + esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40004);
    PUSH32(esp, 0x7654454E);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); sub_004937A4(); /* call 0x004937A4 */

loc_0048F8C7: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + 0x14) = edi;
    if (TEST_Z(edi, edi)) goto loc_0048F944; /* je: equal / zero */

loc_0048F8D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0048E1B9(); /* call 0x0048E1B9 */

loc_0048F8E6: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00493573(); /* call 0x00493573 */

loc_0048F8ED: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO16(ecx, MEM16(ebp + 0xC));
    MEM16(eax) = LO16(ecx);
    ecx = esi + ebx + 4;
    MEM16(eax + 2) = LO16(ecx);
    if (CMP_BE(ebx & ebx, 0)) goto loc_0048F919; /* jbe: below or equal (unsigned <=) */

loc_0048F900: ;
    esi = MEM32(ebp + 0x10);
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + 4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + 0x1C);

loc_0048F919: ;
    if (CMP_BE(esi & esi, 0)) goto loc_0048F934; /* jbe: below or equal (unsigned <=) */

loc_0048F91D: ;
    ecx = esi;
    esi = MEM32(ebp + 0x18);
    edi = eax + ebx + 4;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_0048F934: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_0048F1FE(); /* call 0x0048F1FE */

loc_0048F944: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0048F94B
 * Original: 0x0048F94B - 0x0048F967 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F94B(void)
{

loc_0048F94B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5300);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0); sub_0048F89E(); /* call 0x0048F89E */

loc_0048F964: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0048F967
 * Original: 0x0048F967 - 0x0048FA8D (294 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048F967(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048F967: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0xEC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x7C);
    eax = MEM32(edi + 0x14);
    esi = ecx;
    (void)0; /* cmp edi, MEM32(esi + 0xAF4) - flags set for next jcc */
    MEM32(ebp + 0x68) = eax;
    MEM32(ebp + 0x6C) = esi;
    eax = ebp + -112;
    if (CMP_NE(edi, MEM32(esi + 0xAF4))) goto loc_0048FA31; /* jne: not equal / not zero */

loc_0048F992: ;
    ecx = MEM32(esi + 0xD08);
    MEM32(ebp + -116) = ecx;
    ecx = esi + 0xD00;
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_0048FA35; /* je: equal / zero */

loc_0048F9AA: ;
    edx = esi + 0xB00;
    MEM32(ebp + 0x70) = ecx;
    goto loc_0048FA2B;

loc_0048F9B5: ;
    ecx = MEM32(ebp + 0x70);
    SET_LO8(ecx, MEM8(ecx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0048FA1C; /* je: equal / zero */

loc_0048F9BE: ;
    MEM8(eax) = LO8(ecx);
    ebx = MEM32(edx);
    eax++;
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    if (TEST_Z(LO8(ecx), 1)) goto loc_0048F9DB; /* je: equal / zero */

loc_0048F9D3: ;
    ebx = MEM32(edx + 0x44);
    MEM32(eax) = ebx;
    eax = eax + 4;

loc_0048F9DB: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_0048F9EE; /* je: equal / zero */

loc_0048F9E0: ;
    ebx = MEM32(edx + 0x54);
    MEM32(eax) = ebx;
    ebx = MEM32(edx + 0x58);
    MEM32(eax + 4) = ebx;
    eax = eax + 8;

loc_0048F9EE: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_0048FA1C; /* je: equal / zero */

loc_0048F9F3: ;
    SET_LO8(ecx, MEM8(edx + 0x5C));
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(edx + 0x5C);
    eax++;
    if (CMP_BE(ecx & ecx, 0)) goto loc_0048FA1C; /* jbe: below or equal (unsigned <=) */

loc_0048FA00: ;
    ebx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    esi = edx + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = eax + MEM32(edx + 0x5C);
    edi = MEM32(ebp + 0x7C);
    esi = MEM32(ebp + 0x6C);

loc_0048FA1C: ;
    edx = edx + 0x80;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    ecx = esi + 0xD00;

loc_0048FA2B: ;
    if (CMP_B(edx, ecx)) goto loc_0048F9B5; /* jb: below (unsigned <) */

loc_0048FA2F: ;
    goto loc_0048FA35;

loc_0048FA31: ;
    MEM32(ebp + -116) = MEM32(ebp + -116) & 0;

loc_0048FA35: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = ebp + -120;
    eax = eax - ecx;
    PUSH32(esp, ebx);
    eax = eax - 4;
    PUSH32(esp, eax);
    eax = ebp + -116;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5302);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0048F89E(); /* call 0x0048F89E */

loc_0048FA53: ;
    eax = MEM32(ebp + 0x68);
    if (CMP_BE(MEM32(edi + 0x14), eax)) goto loc_0048FA83; /* jbe: below or equal (unsigned <=) */

loc_0048FA5B: ;
    eax = MEM32(esi + 0x1D8);
    MEM32(edi + 0x20) = eax;
    if (CMP_NE(edi, MEM32(esi + 0xAF4))) goto loc_0048FA83; /* jne: not equal / not zero */

loc_0048FA6C: ;
    (void)0; /* cmp MEM32(esi + 0xD00), ebx - flags set for next jcc */
    MEM32(esi + 0xD08) = ebx;
    if (CMP_EQ(MEM32(esi + 0xD00), ebx)) goto loc_0048FA83; /* je: equal / zero */

loc_0048FA7A: ;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0xD04) = eax;

loc_0048FA83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x74;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048FA8D
 * Original: 0x0048FA8D - 0x0048FAB2 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FA8D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048FA8D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x538;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi));
    SET_LO8(edx, LO8(edx) >> 2);
    ebx = ecx;
    MEM8(esi + 2) = 8;
    edx = edx & 1;
    if ((edx == 0)) { sub_0048FAB2(); return; } /* je: equal / zero */

loc_0048FAAD: ;
    SET_LO8(eax, MEM8(ebx + 0x3E));
    g_seh_ebp = ebp; sub_0048FAB5(); return; /* tail jmp 0x0048FAB5 */

}

/**
 * sub_0048FB82
 * Original: 0x0048FB82 - 0x0048FB99 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FB82(void)
{

loc_0048FB82: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x530B);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0); sub_0048F89E(); /* call 0x0048F89E */

loc_0048FB96: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048FB99
 * Original: 0x0048FB99 - 0x0048FC7F (230 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FB99(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048FB99: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 2));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebp = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0048FC7A; /* je: equal / zero */

loc_0048FBAC: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0048FC7A; /* je: equal / zero */

loc_0048FBB4: ;
    if (CMP_B(LO8(eax), 6)) goto loc_0048FBD0; /* jb: below (unsigned <) */

loc_0048FBB8: ;
    SET_LO16(eax, MEM16(esi));
    if (TEST_NZ(LO8(eax), 8)) goto loc_0048FBD0; /* jne: not equal / not zero */

loc_0048FBBF: ;
    PUSH32(esp, MEM32(esp + 0x10));
    SET_LO16(eax, LO16(eax) | 8);
    PUSH32(esp, esi);
    MEM16(esi) = LO16(eax);
    PUSH32(esp, 0); sub_0048F94B(); /* call 0x0048F94B */

loc_0048FBD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 4));
    ecx = ebp;
    PUSH32(esp, 0); sub_0049B658(); /* call 0x0049B658 */

loc_0048FBDC: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM8(esi + 2), 8 - flags set for next jcc */
    MEM8(esi + 2) = 1;
    SET_LO8(ebx, (CMP_EQ(MEM8(esi + 2), 8)) ? 1 : 0); /* sete */
    MEM16(esi) = MEM16(esi) & 0x17;
    eax = 0; /* xor self */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 3) = 0;
    edi = esi + 0x44;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = 0; /* xor self */
    edi = esi + 0x4C;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_0048FC15: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x2C;
    PUSH32(esp, 0); sub_00493619(); /* call 0x00493619 */

loc_0048FC1E: ;
    edi = 0; /* xor self */
    if (CMP_EQ(ebx, edi)) goto loc_0048FC2B; /* je: equal / zero */

loc_0048FC24: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0048EA2A(); /* call 0x0048EA2A */

loc_0048FC2B: ;
    SET_LO16(eax, MEM16(esi));
    if (TEST_Z(LO8(eax), 2)) goto loc_0048FC3F; /* je: equal / zero */

loc_0048FC32: ;
    MEM32(esi + 0xB8) = edi;
    MEM16(esi + 0xBC) = LO16(edi);

loc_0048FC3F: ;
    if (TEST_Z(LO8(eax), 4)) goto loc_0048FC59; /* je: equal / zero */

loc_0048FC43: ;
    (void)0; /* cmp MEM32(esi + 0x128), edi - flags set for next jcc */
    MEM32(esi + 0xE0) = edi;
    if (CMP_BE(MEM32(esi + 0x128), edi)) goto loc_0048FC59; /* jbe: below or equal (unsigned <=) */

loc_0048FC51: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); sub_00496B02(); /* call 0x00496B02 */

loc_0048FC59: ;
    if (CMP_NE(MEM32(ebp + 0xAF4), esi)) goto loc_0048FC78; /* jne: not equal / not zero */

loc_0048FC61: ;
    eax = 0; /* xor self */
    eax++;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xAF8));
    MEM32(ebp + 0xAF0) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_0048FC78: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0048FC7A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0048FC7F
 * Original: 0x0048FC7F - 0x0048FC9F (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FC7F(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048FC7F: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_EQ(MEM8(edi + 2), 0)) goto loc_0048FC9B; /* je: equal / zero */

loc_0048FC8A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0048FB99(); /* call 0x0048FB99 */

loc_0048FC94: ;
    PUSH32(esp, 0x4C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0048FC9B: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0048FC9F
 * Original: 0x0048FC9F - 0x0048FD03 (100 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FC9F(void)
{
    int _flags = 0; /* fallback flag var */

loc_0048FC9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX8(MEM8(edi + 0xE));
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(edi + 0xACC);
    if (CMP_BE(eax & eax, 0)) goto loc_0048FCFE; /* jbe: below or equal (unsigned <=) */

loc_0048FCB1: ;
    PUSH32(esp, ebx);
    ebx = eax;

loc_0048FCB4: ;
    SET_LO8(eax, MEM8(esi + 2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0048FCF4; /* je: equal / zero */

loc_0048FCBB: ;
    if (CMP_EQ(MEM32(esp + 0x10), 0)) goto loc_0048FCC7; /* je: equal / zero */

loc_0048FCC2: ;
    if (TEST_Z(MEM8(esi), 6)) goto loc_0048FCF4; /* je: equal / zero */

loc_0048FCC7: ;
    if (CMP_B(LO8(eax), 6)) goto loc_0048FCE3; /* jb: below (unsigned <) */

loc_0048FCCB: ;
    SET_LO16(eax, MEM16(esi));
    if (TEST_NZ(LO8(eax), 8)) goto loc_0048FCE3; /* jne: not equal / not zero */

loc_0048FCD2: ;
    PUSH32(esp, 0);
    SET_LO16(eax, LO16(eax) | 8);
    PUSH32(esp, esi);
    ecx = edi;
    MEM16(esi) = LO16(eax);
    PUSH32(esp, 0); sub_0048F94B(); /* call 0x0048F94B */

loc_0048FCE3: ;
    if (CMP_EQ(MEM32(esp + 0x10), 0)) goto loc_0048FCF4; /* je: equal / zero */

loc_0048FCEA: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0048FC7F(); /* call 0x0048FC7F */

loc_0048FCF4: ;
    esi = esi + 0x130;
    ebx--;
    if ((ebx != 0)) goto loc_0048FCB4; /* jne: not equal / not zero */

loc_0048FCFD: ;
    POP32(esp, ebx);

loc_0048FCFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0048FD03
 * Original: 0x0048FD03 - 0x0048FE0D (266 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FD03(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048FD03: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = ZX8(MEM8(esi + 0xE));
    MEM32(esi + 0xAD8) = MEM32(esi + 0xAD8) + ebx;
    ecx = MEM32(esi + 0xAD8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xADC);
    if (CMP_B(ecx, edi)) goto loc_0048FE08; /* jb: below (unsigned <) */

loc_0048FD2C: ;
    eax = MEM32(esi + 0x1D8);
    MEM32(ebp + -12) = eax;
    eax = ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    ecx = ecx - edi;
    edi = MEM32(esi + 0xAD0);
    MEM32(esi + 0xAD8) = ecx;
    ecx = 0; /* xor self */
    if (CMP_NE(edi, ecx)) goto loc_0048FD58; /* jne: not equal / not zero */

loc_0048FD52: ;
    edi = MEM32(esi + 0xACC);

loc_0048FD58: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x130);
    ebx = ebx + MEM32(esi + 0xACC);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (CMP_BE(eax, ecx)) goto loc_0048FE02; /* jbe: below or equal (unsigned <=) */

loc_0048FD6F: ;
    MEM32(ebp + -4) = eax;
    goto loc_0048FD76;

loc_0048FD74: ;
    ecx = 0; /* xor self */

loc_0048FD76: ;
    if (CMP_NE(edi, MEM32(ebp + -8))) goto loc_0048FD81; /* jne: not equal / not zero */

loc_0048FD7B: ;
    edi = MEM32(esi + 0xACC);

loc_0048FD81: ;
    SET_LO8(eax, MEM8(edi + 2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0048FDF3; /* je: equal / zero */

loc_0048FD88: ;
    if (CMP_B(LO8(eax), 6)) goto loc_0048FDF3; /* jb: below (unsigned <) */

loc_0048FD8C: ;
    ebx = MEM32(ebp + -12);
    eax = ebx;
    eax = eax - MEM32(edi + 0x28);
    if (CMP_A(MEM32(edi + 0x18), eax)) goto loc_0048FDA4; /* ja: above (unsigned >) */

loc_0048FD99: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0048FB99(); /* call 0x0048FB99 */

loc_0048FDA2: ;
    goto loc_0048FDF3;

loc_0048FDA4: ;
    eax = ebx;
    eax = eax - MEM32(edi + 0x24);
    if (CMP_A(MEM32(edi + 0x20), eax)) goto loc_0048FDF3; /* ja: above (unsigned >) */

loc_0048FDAE: ;
    if (TEST_Z(MEM8(edi), 4)) goto loc_0048FDDA; /* je: equal / zero */

loc_0048FDB3: ;
    if (CMP_BE(MEM32(edi + 0x1C), eax)) goto loc_0048FDD0; /* jbe: below or equal (unsigned <=) */

loc_0048FDB8: ;
    if (CMP_NE(edi, MEM32(esi + 0xAF4))) goto loc_0048FDF3; /* jne: not equal / not zero */

loc_0048FDC0: ;
    if (CMP_NE(MEM32(esi + 0xD08), ecx)) goto loc_0048FDD0; /* jne: not equal / not zero */

loc_0048FDC8: ;
    if (CMP_EQ(MEM32(esi + 0xD00), ecx)) goto loc_0048FDF3; /* je: equal / zero */

loc_0048FDD0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0048F967(); /* call 0x0048F967 */

loc_0048FDD8: ;
    goto loc_0048FDF3;

loc_0048FDDA: ;
    if (CMP_A(MEM32(edi + 0x1C), eax)) goto loc_0048FDF3; /* ja: above (unsigned >) */

loc_0048FDDF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5301);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0048F89E(); /* call 0x0048F89E */

loc_0048FDF0: ;
    MEM32(edi + 0x20) = ebx;

loc_0048FDF3: ;
    edi = edi + 0x130;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_0048FD74; /* jne: not equal / not zero */

loc_0048FE02: ;
    MEM32(esi + 0xAD0) = edi;

loc_0048FE08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0048FE0D
 * Original: 0x0048FE0D - 0x004900E8 (731 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048FE0D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0048FE0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 0xAF0), 3 - flags set for next jcc */
    ebx = MEM32(esi + 0xD1C);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = esi;
    if (CMP_NE(MEM32(esi + 0xAF0), 3)) goto loc_0048FF58; /* jne: not equal / not zero */

loc_0048FE2E: ;
    SET_LO16(eax, MEM16(ebx + 2));
    ecx = 0x11C;
    if (CMP_BE(LO16(eax), LO16(ecx))) goto loc_0048FEB2; /* jbe: below or equal (unsigned <=) */

loc_0048FE3C: ;
    PUSH32(esp, 0x14);
    edx = ebp + -36;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = ZX16(LO16(eax));
    eax = eax - ecx;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ebx + 0x11C;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00492FF4(); /* call 0x00492FF4 */

loc_0048FE61: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x5611AC));
    edi = ebx + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046DAAC(); /* call 0x0046DAAC */

loc_0048FE74: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0048FEAB; /* je: equal / zero */

loc_0048FE78: ;
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edx = MEM32(0x561138);
    ecx = ebx + 0x11C;
    PUSH32(esp, 0); sub_0048DE6C(); /* call 0x0048DE6C */

loc_0048FE90: ;
    SET_LO8(ecx, 0); /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0048FE98: ;
    PUSH32(esp, 0x40);
    edi = ebx + 0x948;
    POP32(esp, ecx);
    esi = ebx + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + -8);
    goto loc_0048FEB2;

loc_0048FEAB: ;
    MEM8(ebx + 0x948) = 0x53;

loc_0048FEB2: ;
    MEM32(esi + 0xAF0) = 4;
    MEM32(ebx + 0xA48) = MEM32(ebx + 0xA48) & 0;
    eax = 0; /* xor self */
    edi = ebx + 0x11C;
    ecx = 0x200;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebx + 4), edi)) goto loc_0048FF58; /* je: equal / zero */

loc_0048FED9: ;
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x4A0128);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611BC), _icall_esp); /* indirect call */
    }

loc_0048FEEC: ;
    if (CMP_L(eax, edi)) goto loc_0048FF4B; /* jl: less (signed <) */

loc_0048FEF0: ;
    eax = MEM32(ebp + -4);
    MEM32(ebx + 0xA50) = eax;
    eax = MEM32(ebx + 4);
    ecx = 0x800;
    edx = ecx;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = ebx + 0xA48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xAF8));
    MEM32(ebp + -16) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebx + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebp + -12) = edx;
    PUSH32(esp, 2);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611B8), _icall_esp); /* indirect call */
    }

loc_0048FF2F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi) = 0x103;
    if (TEST_NZ(eax, eax)) goto loc_0048FF40; /* jne: not equal / not zero */

loc_0048FF39: ;
    eax = 0xC000009Au;
    goto loc_0048FF52;

loc_0048FF40: ;
    ecx = MEM32(ebp + -4);
    edx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611B4), _icall_esp); /* indirect call */
    }

loc_0048FF4B: ;
    if (CMP_EQ(eax, 0x103)) goto loc_0048FF58; /* je: equal / zero */

loc_0048FF52: ;
    MEM32(ebx + 0xA48) = eax;

loc_0048FF58: ;
    if (CMP_NE(MEM32(esi + 0xAF0), 4)) goto loc_00490072; /* jne: not equal / not zero */

loc_0048FF65: ;
    eax = MEM32(ebx + 0xA48);
    if (CMP_EQ(eax, 0x103)) goto loc_00490072; /* je: equal / zero */

loc_0048FF76: ;
    ecx = 0; /* xor self */
    if (CMP_L(eax, ecx)) goto loc_0048FFCF; /* jl: less (signed <) */

loc_0048FF7C: ;
    SET_LO16(eax, MEM16(ebx + 8));
    if (CMP_AE(LO16(eax), 0x800)) goto loc_0048FFAB; /* jae: above or equal (unsigned >=) */

loc_0048FF86: ;
    PUSH32(esp, 0x14);
    edx = ebx + 0x920;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ZX16(LO16(eax));
    ecx = 0x800;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    eax = eax + ebx + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00492FF4(); /* call 0x00492FF4 */

loc_0048FFAB: ;
    SET_LO16(eax, MEM16(ebx + 0xA));
    if (CMP_A(LO16(eax), 0x7EC)) goto loc_0048FFDC; /* ja: above (unsigned >) */

loc_0048FFB5: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, 5);
    esi = eax + ebx + 0x11C;
    edi = ebx + 0x934;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + -8);
    goto loc_0048FFDC;

loc_0048FFCF: ;
    MEM8(ebx + 0x920) = 0x45;
    MEM32(ebx + 0x921) = eax;

loc_0048FFDC: ;
    edi = ebx + 0xA50;
    ecx = MEM32(edi);
    if (TEST_Z(ecx, ecx)) goto loc_0048FFF1; /* je: equal / zero */

loc_0048FFE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561044), _icall_esp); /* indirect call */
    }

loc_0048FFEE: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_0048FFF1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0048FFF7: ;
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(esi + 0xAF4);
    MEM32(esi + 0xAF0) = 5;
    if (TEST_Z(MEM8(eax), 4)) goto loc_00490014; /* je: equal / zero */

loc_0049000F: ;
    SET_LO8(ecx, MEM8(esi + 0x3E));
    goto loc_00490017;

loc_00490014: ;
    SET_LO8(ecx, MEM8(esi + 0x3C));

loc_00490017: ;
    MEM8(eax + 3) = LO8(ecx);
    ecx = MEM32(esi + 0xAF4);
    (void)0; /* test MEM8(ecx), 4 - flags set for next jcc */
    edi = MEM32(esi + 0x1D8);
    if (TEST_Z(MEM8(ecx), 4)) goto loc_00490030; /* je: equal / zero */

loc_0049002B: ;
    SET_LO8(eax, MEM8(esi + 0x3F));
    goto loc_00490033;

loc_00490030: ;
    SET_LO8(eax, MEM8(esi + 0x3D));

loc_00490033: ;
    eax = ZX8(LO8(eax));
    edx = edi + eax * 4;
    edx = edx + eax;
    ecx = ecx + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_00490047: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x128);
    ebx = ebx + 0x920;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x530A);
    PUSH32(esp, MEM32(esi + 0xAF4));
    ecx = esi;
    PUSH32(esp, 0); sub_0048F89E(); /* call 0x0048F89E */

loc_00490069: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00490072: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00490078: ;
    edi = MEM32(ebp + 8);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, LO8(eax));
    if (TEST_Z(edi, edi)) goto loc_004900AB; /* je: equal / zero */

loc_00490081: ;
    eax = MEM32(esi + 0xAF4);
    if (TEST_Z(eax, eax)) goto loc_004900A4; /* je: equal / zero */

loc_0049008B: ;
    if (CMP_B(MEM32(esi + 0xAF0), 6)) goto loc_004900A4; /* jb: below (unsigned <) */

loc_00490094: ;
    PUSH32(esp, 5);
    esi = eax + 0xC4;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + -8);
    goto loc_004900AB;

loc_004900A4: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */

loc_004900AB: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004900C2; /* je: equal / zero */

loc_004900B2: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x8CC));
    ecx = ecx >> 3;
    ecx = ecx & 1;
    MEM32(eax) = ecx;

loc_004900C2: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_004900D1; /* je: equal / zero */

loc_004900C9: ;
    ecx = MEM32(esi + 0xD0C);
    MEM32(eax) = ecx;

loc_004900D1: ;
    esi = MEM32(esi + 0xAF0);
    SET_LO8(ecx, LO8(edx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004900DF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004900E8
 * Original: 0x004900E8 - 0x004901DA (242 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004900E8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004900E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_004900F9: ;
    edx = MEM32(ebp + 8);
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    MEM8(ebp + -8) = LO8(eax);
    if (CMP_AE(edx, 4)) { sub_004901DA(); return; } /* jae: above or equal (unsigned >=) */

loc_00490108: ;
    if (CMP_A(MEM32(ebp + 0x14), 0x20)) { sub_004901DA(); return; } /* ja: above (unsigned >) */

loc_00490112: ;
    ecx = MEM32(ebp + 0xC);
    eax = edx + 0x16;
    eax = eax << 7;
    eax = eax + esi;
    (void)0; /* cmp MEM32(eax + 0x44), ecx - flags set for next jcc */
    edx = edx + esi + 0xD00;
    if (CMP_EQ(MEM32(eax + 0x44), ecx)) goto loc_00490136; /* je: equal / zero */

loc_00490129: ;
    MEM32(eax + 0x44) = ecx;
    MEM8(edx) = MEM8(edx) | 1;
    MEM32(esi + 0xD04) = MEM32(esi + 0xD04) & 0;

loc_00490136: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 2);
    ebx = 0; /* xor self */
    ebx = MEM32(ebp + -4);
    esi = eax + 0x54;
    POP32(esp, ecx);
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_00490162; /* je: equal / zero */

loc_0049014A: ;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(ecx);
    MEM32(eax + 0x54) = esi;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x58) = ecx;
    MEM8(edx) = MEM8(edx) | 2;
    MEM32(ebx + 0xD04) = MEM32(ebx + 0xD04) & 0;

loc_00490162: ;
    ecx = MEM32(ebp + 0x14);
    if (CMP_NE(ecx, MEM32(eax + 0x5C))) goto loc_0049017C; /* jne: not equal / not zero */

loc_0049016A: ;
    edi = MEM32(ebp + 0x18);
    ebx = 0; /* xor self */
    ebx = MEM32(ebp + -4);
    esi = eax + 0x60;
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004901A1; /* je: equal / zero */

loc_00490179: ;
    ecx = MEM32(ebp + 0x14);

loc_0049017C: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 0x5C) = ecx;
    if (CMP_BE(ecx & ecx, 0)) goto loc_00490197; /* jbe: below or equal (unsigned <=) */

loc_00490183: ;
    esi = MEM32(ebp + 0x18);
    edi = eax + 0x60;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_00490197: ;
    MEM8(edx) = MEM8(edx) | 4;
    MEM32(ebx + 0xD04) = MEM32(ebx + 0xD04) & 0;

loc_004901A1: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 0x1C), ecx)) goto loc_004901D3; /* je: equal / zero */

loc_004901A8: ;
    eax = MEM32(ebx + 0xAF4);
    if (CMP_EQ(eax, ecx)) goto loc_004901D3; /* je: equal / zero */

loc_004901B2: ;
    if (CMP_B(MEM32(ebx + 0xAF0), 6)) goto loc_004901D3; /* jb: below (unsigned <) */

loc_004901BB: ;
    if (CMP_NE(MEM32(ebx + 0xD08), ecx)) goto loc_004901CB; /* jne: not equal / not zero */

loc_004901C3: ;
    if (CMP_EQ(MEM32(ebx + 0xD00), ecx)) goto loc_004901D3; /* je: equal / zero */

loc_004901CB: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_0048F967(); /* call 0x0048F967 */

loc_004901D3: ;
    esi = 0; /* xor self */
    POP32(esp, edi);
    esi++;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004901DC(); return; /* tail jmp 0x004901DC */

}

/**
 * sub_004901EC
 * Original: 0x004901EC - 0x00490334 (328 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004901EC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004901EC: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0xAF0), 4 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(esi + 0xAF0), 4)) goto loc_0049026B; /* jne: not equal / not zero */

loc_00490200: ;
    edi = MEM32(esi + 0x1D8);
    edi = edi + 0x19;
    ebx = 0x103;
    goto loc_0049023B;

loc_00490210: ;
    if (CMP_A(MEM32(esi + 0x1D8), edi)) goto loc_00490249; /* ja: above (unsigned >) */

loc_00490218: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) | 0xFFFFFFFFu;
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(esi + 0xAF8));
    MEM32(esp + 0x2C) = 0xFFFE7960u;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561150), _icall_esp); /* indirect call */
    }

loc_0049023B: ;
    eax = MEM32(esi + 0xD1C);
    if (CMP_EQ(MEM32(eax + 0xA48), ebx)) goto loc_00490210; /* je: equal / zero */

loc_00490249: ;
    eax = MEM32(esi + 0xD1C);
    ecx = MEM32(eax + 0xA50);
    if (CMP_EQ(ecx, ebp)) goto loc_0049026B; /* je: equal / zero */

loc_00490259: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561044), _icall_esp); /* indirect call */
    }

loc_0049025F: ;
    eax = MEM32(esi + 0xD1C);
    MEM32(eax + 0xA50) = ebp;

loc_0049026B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00490271: ;
    MEM8(esp + 0x18) = LO8(eax);
    eax = esi + 0xD20;
    (void)0; /* cmp MEM32(eax), 4 - flags set for next jcc */
    MEM32(esi + 0xAF0) = ebp;
    MEM32(esi + 0xAF4) = ebp;
    if (CMP_NE(MEM32(eax), 4)) goto loc_0049028E; /* jne: not equal / not zero */

loc_0049028C: ;
    MEM32(eax) = ebp;

loc_0049028E: ;
    edi = esi + 0xAF8;
    ecx = MEM32(edi);
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(esi + 0xD2C) = ebp;
    if (CMP_EQ(ecx, ebp)) goto loc_004902A8; /* je: equal / zero */

loc_004902A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561044), _icall_esp); /* indirect call */
    }

loc_004902A6: ;
    MEM32(edi) = ebp;

loc_004902A8: ;
    ebx = esi + 0xB48;
    MEM32(esp + 0x14) = 4;

loc_004902B6: ;
    edi = ebx;
    MEM32(esp + 0x10) = 3;

loc_004902C0: ;
    ecx = MEM32(edi);
    if (CMP_EQ(ecx, ebp)) goto loc_004902CC; /* je: equal / zero */

loc_004902C6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561044), _icall_esp); /* indirect call */
    }

loc_004902CC: ;
    edi = edi + 4;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_004902C0; /* jne: not equal / not zero */

loc_004902D5: ;
    ebx = ebx + 0x80;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    if ((MEM32(esp + 0x14) != 0)) goto loc_004902B6; /* jne: not equal / not zero */

loc_004902E1: ;
    eax = 0; /* xor self */
    ecx = 0x80;
    edi = esi + 0xB00;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(esi + 0xD1C);
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEM32(esi + 0xD00) = ebp;
    MEM32(esi + 0xD04) = ebp;
    MEM32(esi + 0xD08) = ebp;
    MEM32(esi + 0xD0C) = ebp;
    if (CMP_EQ(edi, ebp)) goto loc_00490319; /* je: equal / zero */

loc_00490312: ;
    ecx = 0x295;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_00490319: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_0048FC9F(); /* call 0x0048FC9F */

loc_00490322: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0049032C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00490334
 * Original: 0x00490334 - 0x00490384 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490334(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00490334: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    if (TEST_Z(eax, 0x100000)) goto loc_0049037C; /* je: equal / zero */

loc_00490340: ;
    PUSH32(esp, edi);
    edi = 0x800000;
    if (TEST_NZ(edi, eax)) goto loc_0049037B; /* jne: not equal / not zero */

loc_0049034A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0048FC9F(); /* call 0x0048FC9F */

loc_00490351: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_00497FE2(); /* call 0x00497FE2 */

loc_0049035E: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0049AA95(); /* call 0x0049AA95 */

loc_00490365: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0049410F(); /* call 0x0049410F */

loc_0049036C: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0049869D(); /* call 0x0049869D */

loc_00490373: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_0049037B: ;
    POP32(esp, edi);

loc_0049037C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049A373(); return; /* tail jmp 0x0049A373 */

}

/**
 * sub_00490384
 * Original: 0x00490384 - 0x004906D3 (847 bytes, 265 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490384(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00490384: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(ecx, LO8(ecx) >> 1);
    MEM32(ebp + -4) = edi;
    ecx = ecx & 1;
    if ((ecx == 0)) goto loc_004903AD; /* je: equal / zero */

loc_004903A0: ;
    if (CMP_B(MEM32(edi + 0xAF0), 6)) goto loc_004906CC; /* jb: below (unsigned <) */

loc_004903AD: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp LO16(ecx), LO16(ebx) - flags set for next jcc */
    eax = 0x98;
    if (CMP_NE(LO16(ecx), LO16(ebx))) goto loc_004903BC; /* jne: not equal / not zero */

loc_004903B9: ;
    eax = eax + 0x64;

loc_004903BC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40003);
    PUSH32(esp, 0x7154454E);
    ecx = edi;
    PUSH32(esp, 0); sub_004937A4(); /* call 0x004937A4 */

loc_004903D4: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_004906CC; /* je: equal / zero */

loc_004903DF: ;
    ebx = MEM32(eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = MEM32(ecx) & 0;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0048E1B9(); /* call 0x0048E1B9 */

loc_004903F1: ;
    if (TEST_Z(MEM8(esi), 2)) goto loc_00490537; /* je: equal / zero */

loc_004903FA: ;
    eax = MEM32(edi + 0x268);
    MEM32(ebx + 0xC) = eax;
    SET_LO16(eax, MEM16(edi + 0x8CE));
    MEM16(ebx + 0x14) = LO16(eax);
    eax = MEM32(esi + 0xB8);
    if (TEST_Z(eax, eax)) goto loc_00490424; /* je: equal / zero */

loc_00490418: ;
    MEM32(ebx + 0x10) = eax;
    SET_LO16(eax, MEM16(esi + 0xBC));
    goto loc_00490453;

loc_00490424: ;
    eax = MEM32(esi + 0xC8);
    ecx = MEM32(edi + 0xAF4);
    if (CMP_NE(eax, MEM32(ecx + 0xD8))) goto loc_00490449; /* jne: not equal / not zero */

loc_00490438: ;
    eax = MEM32(esi + 0xC4);
    MEM32(ebx + 0x10) = eax;
    MEM16(ebx + 0x16) = 0x20C;
    goto loc_00490457;

loc_00490449: ;
    MEM32(ebx + 0x10) = eax;
    SET_LO16(eax, MEM16(esi + 0xCC));

loc_00490453: ;
    MEM16(ebx + 0x16) = LO16(eax);

loc_00490457: ;
    if (CMP_NE(MEM8(esi + 2), 3)) goto loc_0049057A; /* jne: not equal / not zero */

loc_00490461: ;
    SET_LO8(eax, MEM8(esi + 3));
    if (CMP_AE(LO8(eax), MEM8(edi + 0x3C))) goto loc_0049057A; /* jae: above or equal (unsigned >=) */

loc_0049046D: ;
    ecx = MEM32(edi + 0xAF4);
    eax = MEM32(esi + 0xC8);
    if (CMP_EQ(eax, MEM32(ecx + 0xD8))) goto loc_0049057A; /* je: equal / zero */

loc_00490485: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_0049057A; /* jne: not equal / not zero */

loc_0049048F: ;
    MEM16(ebp + -52) = MEM16(ebp + -52) & 0;
    eax = MEM32(esi + 0xC0);
    MEM16(ebp + -56) = 0x5804;
    MEM16(ebp + -54) = 0x2E;
    edx = MEM32(eax);
    MEM32(ebp + -48) = edx;
    edx = MEM32(eax + 4);
    MEM32(ebp + -44) = edx;
    edx = MEM32(esi + 4);
    MEM32(ebp + -32) = edx;
    edx = MEM32(esi + 0x44);
    MEM32(ebp + -40) = edx;
    edx = MEM32(esi + 0x48);
    MEM32(ebp + -36) = edx;
    edx = MEM32(ecx + 0xD8);
    MEM32(ebp + -28) = edx;
    edx = edi + 0x91E;
    if (CMP_EQ(MEM16(edx), 0)) goto loc_004904E1; /* je: equal / zero */

loc_004904D8: ;
    if (TEST_NZ(MEM8(edi + 0x8CD), 1)) goto loc_004904E7; /* jne: not equal / not zero */

loc_004904E1: ;
    edx = ecx + 0xDC;

loc_004904E7: ;
    SET_LO16(ecx, MEM16(edx));
    PUSH32(esp, 0xC);
    MEM16(ebp + -24) = LO16(ecx);
    ecx = ebp + -22;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = ebp + -10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22);
    ecx = ebp + -56;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    eax = eax + 8;
    PUSH32(esp, eax);
    MEM16(ebp + -50) = 1;
    PUSH32(esp, 0); sub_00493075(); /* call 0x00493075 */

loc_00490511: ;
    eax = ZX16(MEM16(ebp + -54));
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    esi = esi + 0xD4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5304);
    PUSH32(esp, MEM32(edi + 0xAF4));
    ecx = edi;
    PUSH32(esp, 0); sub_0048F89E(); /* call 0x0048F89E */

loc_00490535: ;
    goto loc_0049057A;

loc_00490537: ;
    ecx = MEM32(ebp + -8);
    MEM8(ecx + 0xB) = MEM8(ecx + 0xB) | 4;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_00490543: ;
    esi = esi + 0xCE;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    esi = MEM32(ebp + -4);
    esi = esi + 0x1E0;
    edi = eax + 6;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM16(eax + 0xC) = 8;
    eax = 0x1000000;
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx + 0x10) = eax;
    MEM16(ebx + 0x14) = 0x20C;
    MEM16(ebx + 0x16) = 0x20C;

loc_0049057A: ;
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) & 0;
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0xC0);
    ebx = ebx + 0x20;
    eax = 0; /* xor self */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(ebx + 4) = MEM16(ebx + 4) & LO16(eax);
    MEM16(ebx + 2) = 0x80;
    eax = MEM32(edx);
    MEM32(ebx + 8) = eax;
    eax = MEM32(edx + 4);
    MEM32(ebx + 0xC) = eax;
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(ebp + -4);
    eax = edx + 0xAE0;
    ecx = MEM32(eax);
    MEM32(ebx + 0x28) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x2C) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    MEM32(eax + 4) = MEM32(eax + 4) + 0 + _cf; /* adc */
    if (CMP_NE(MEM8(esi + 2), 3)) goto loc_004905FE; /* jne: not equal / not zero */

loc_004905CC: ;
    MEM16(ebx) = 0x5800;
    eax = MEM32(esi + 4);
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(esi + 0x44);
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(esi + 0x48);
    MEM32(ebx + 0x1C) = eax;
    eax = ebx + 0x38;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0); sub_0048E91C(); /* call 0x0048E91C */

loc_004905EE: ;
    PUSH32(esp, 9);
    esi = esi + 0xC4;
    edi = ebx + 0x5C;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_00490640;

loc_004905FE: ;
    MEM16(ebx) = 0x5801;
    eax = MEM32(esi + 8);
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(esi + 4);
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(esi + 0x44);
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(esi + 0x48);
    MEM32(ebx + 0x1C) = eax;
    eax = MEM32(esi + 0x4C);
    MEM32(ebx + 0x20) = eax;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 9);
    MEM32(ebx + 0x24) = eax;
    POP32(esp, ecx);
    esi = esi + 0xC4;
    edi = ebx + 0x38;
    eax = ebx + 0x5C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0); sub_0048E91C(); /* call 0x0048E91C */

loc_00490640: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 8);
    esi = ebx + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00493400(); /* call 0x00493400 */

loc_0049064E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x48);
    eax = ebx + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 0x18);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0048DD50(); /* call 0x0048DD50 */

loc_00490668: ;
    edx = ZX16(MEM16(ebx + 2));
    eax = MEM32(ebp + 8);
    edx = edx + ebx;
    if (TEST_Z(MEM8(eax), 2)) goto loc_0049067A; /* je: equal / zero */

loc_00490676: ;
    edx = ebx;
    goto loc_00490696;

loc_0049067A: ;
    PUSH32(esp, 0x18);
    esi = esi + 0x90;
    edi = edx + 4;
    POP32(esp, ecx);
    MEM16(edx) = 0x5880;
    MEM16(edx + 2) = 0x64;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0xC);

loc_00490696: ;
    eax = ZX16(MEM16(edx + 2));
    PUSH32(esp, 0x14);
    eax = eax + edx;
    ecx = eax + 4;
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM16(eax) = 0x5881;
    MEM16(eax + 2) = 0x18;
    eax = eax - ebx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    esi = esi + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00493075(); /* call 0x00493075 */

loc_004906C0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_0048EEB1(); /* call 0x0048EEB1 */

loc_004906CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004906D3
 * Original: 0x004906D3 - 0x00490706 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004906D3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004906D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -8) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_004906E6: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    MEM8(ebp + -12) = LO8(eax);
    PUSH32(esp, 0); sub_0048DC89(); /* call 0x0048DC89 */

loc_004906F3: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (TEST_NZ(edi, edi)) { sub_00490706(); return; } /* jne: not equal / not zero */

loc_004906FC: ;
    esi = 0x2726;
    g_seh_ebp = ebp; sub_00490786(); return; /* tail jmp 0x00490786 */

}

/**
 * sub_00490823
 * Original: 0x00490823 - 0x004908E4 (193 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490823(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00490823: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00490334(); /* call 0x00490334 */

loc_0049082B: ;
    if (TEST_Z(MEM8(esi + 2), 0x10)) goto loc_004908D0; /* je: equal / zero */

loc_00490835: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00497176(); /* call 0x00497176 */

loc_0049083F: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0048F0E5(); /* call 0x0048F0E5 */

loc_00490846: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0048E20F(); /* call 0x0048E20F */

loc_0049084D: ;
    ecx = MEM32(esi + 0xAC8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebp = MEM32(0x561190);
    if (TEST_Z(ecx, ecx)) goto loc_00490897; /* je: equal / zero */

loc_0049085D: ;
    eax = ZX16(MEM16(esi + 0xAD4));
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF4);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = edx + ecx + -244;
    if (CMP_BE(eax & eax, 0)) goto loc_0049088A; /* jbe: below or equal (unsigned <=) */

loc_00490877: ;
    ebx = eax;

loc_00490879: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004906D3(); /* call 0x004906D3 */

loc_00490881: ;
    edi = edi - 0xF4;
    ebx--;
    if ((ebx != 0)) goto loc_00490879; /* jne: not equal / not zero */

loc_0049088A: ;
    eax = MEM32(esi + 0xAC8);
    if (TEST_Z(eax, eax)) goto loc_00490897; /* je: equal / zero */

loc_00490894: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_00490897: ;
    eax = MEM32(esi + 0xACC);
    if (TEST_Z(eax, eax)) goto loc_004908CD; /* je: equal / zero */

loc_004908A1: ;
    edi = eax;
    eax = ZX8(MEM8(esi + 0xE));
    if (CMP_BE(eax & eax, 0)) goto loc_004908C0; /* jbe: below or equal (unsigned <=) */

loc_004908AB: ;
    ebx = eax;

loc_004908AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0048FC7F(); /* call 0x0048FC7F */

loc_004908B7: ;
    edi = edi + 0x130;
    ebx--;
    if ((ebx != 0)) goto loc_004908AD; /* jne: not equal / not zero */

loc_004908C0: ;
    eax = MEM32(esi + 0xACC);
    if (TEST_Z(eax, eax)) goto loc_004908CD; /* je: equal / zero */

loc_004908CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_004908CD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004908D0: ;
    PUSH32(esp, 0x1000000);
    ecx = esi;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_004908DC: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049A4A4(); return; /* tail jmp 0x0049A4A4 */

}

/**
 * sub_004908E4
 * Original: 0x004908E4 - 0x00490A89 (421 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004908E4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004908E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + 2));
    (void)0; /* cmp LO16(edi), 0x2E - flags set for next jcc */
    ebx = ecx;
    MEM32(ebp + -4) = ebx;
    if (CMP_B(LO16(edi), 0x2E)) goto loc_00490A82; /* jb: below (unsigned <) */

loc_00490901: ;
    if (CMP_NE(MEM16(esi), 0x5805)) goto loc_00490925; /* jne: not equal / not zero */

loc_00490908: ;
    if (TEST_Z(MEM8(esi + 6), 2)) goto loc_00490925; /* je: equal / zero */

loc_0049090E: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00496754(); /* call 0x00496754 */

loc_00490920: ;
    goto loc_00490A82;

loc_00490925: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_0048DC89(); /* call 0x0048DC89 */

loc_00490930: ;
    if (TEST_Z(eax, eax)) goto loc_00490A82; /* je: equal / zero */

loc_00490938: ;
    PUSH32(esp, 0xC);
    ecx = esi + 0x22;
    PUSH32(esp, ecx);
    ecx = ZX16(LO16(edi));
    ecx = ecx - 0x2E;
    PUSH32(esp, ecx);
    ecx = esi + 0x2E;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x22);
    PUSH32(esp, esi);
    eax = eax + 8;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0); sub_004930B5(); /* call 0x004930B5 */

loc_0049095A: ;
    if (TEST_Z(eax, eax)) goto loc_00490A82; /* je: equal / zero */

loc_00490962: ;
    SET_LO16(eax, MEM16(esi));
    if (CMP_NE(LO16(eax), 0x5804)) goto loc_00490A2F; /* jne: not equal / not zero */

loc_0049096F: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 2));
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40003);
    PUSH32(esp, 0x7154454E);
    ecx = ebx;
    PUSH32(esp, 0); sub_004937A4(); /* call 0x004937A4 */

loc_0049098D: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + 0xC) = edi;
    if (TEST_Z(edi, edi)) goto loc_00490A82; /* je: equal / zero */

loc_0049099A: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_004909A1: ;
    edi = MEM32(edi);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x11);
    PUSH32(esp, MEM32(esi + 0x1C));
    ebx = edi + 0x20;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0048E1B9(); /* call 0x0048E1B9 */

loc_004909B6: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x268);
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) & 0;
    SET_LO16(eax, MEM16(eax + 0x8CE));
    ecx = MEM32(ebp + 0xC);
    MEM16(ebp + 0x10) = LO16(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_00493480(); /* call 0x00493480 */

loc_004909E3: ;
    ecx = ZX16(MEM16(esi + 2));
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    PUSH32(esp, 0xC);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM16(ebx + 4) = MEM16(ebx + 4) & 0;
    eax = ebx + 0x22;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 2));
    eax = eax - 0x2E;
    PUSH32(esp, eax);
    eax = ebx + 0x2E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x22);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM16(ebx) = 0x5805;
    PUSH32(esp, 0); sub_00493075(); /* call 0x00493075 */

loc_00490A20: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0048EEB1(); /* call 0x0048EEB1 */

loc_00490A2D: ;
    goto loc_00490A82;

loc_00490A2F: ;
    if (CMP_NE(LO16(eax), 0x5805)) goto loc_00490A82; /* jne: not equal / not zero */

loc_00490A35: ;
    if (TEST_Z(MEM8(esi + 6), 1)) goto loc_00490A82; /* je: equal / zero */

loc_00490A3B: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = ebx;
    PUSH32(esp, 0); sub_0048E613(); /* call 0x0048E613 */

loc_00490A45: ;
    if (TEST_Z(eax, eax)) goto loc_00490A82; /* je: equal / zero */

loc_00490A49: ;
    if (CMP_NE(MEM8(eax + 2), 3)) goto loc_00490A82; /* jne: not equal / not zero */

loc_00490A4F: ;
    if (TEST_Z(MEM8(eax), 2)) goto loc_00490A82; /* je: equal / zero */

loc_00490A54: ;
    PUSH32(esp, 2);
    edi = esi + 0x10;
    POP32(esp, ecx);
    esi = eax + 0x44;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_00490A82; /* jne: not equal / not zero */

loc_00490A63: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0xB8) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x10));
    PUSH32(esp, 1);
    MEM16(eax + 0xBC) = LO16(ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00490384(); /* call 0x00490384 */

loc_00490A82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00490A89
 * Original: 0x00490A89 - 0x00490AF8 (111 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490A89(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00490A89: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* cmp MEM8(esi + 2), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(MEM8(esi + 2), 2)) goto loc_00490AE7; /* jne: not equal / not zero */

loc_00490A97: ;
    (void)0; /* test MEM8(esi), 4 - flags set for next jcc */
    MEM8(esi + 2) = 3;
    if (TEST_Z(MEM8(esi), 4)) goto loc_00490AA5; /* je: equal / zero */

loc_00490AA0: ;
    SET_LO8(eax, MEM8(edi + 0x3E));
    goto loc_00490AA8;

loc_00490AA5: ;
    SET_LO8(eax, MEM8(edi + 0x3C));

loc_00490AA8: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 3) = LO8(eax);
    PUSH32(esp, 0); sub_0048E650(); /* call 0x0048E650 */

loc_00490AB3: ;
    PUSH32(esp, 8);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_00493400(); /* call 0x00493400 */

loc_00490AC0: ;
    (void)0; /* test MEM8(esi), 4 - flags set for next jcc */
    ecx = MEM32(edi + 0x1D8);
    if (TEST_Z(MEM8(esi), 4)) goto loc_00490AD0; /* je: equal / zero */

loc_00490ACB: ;
    SET_LO8(eax, MEM8(edi + 0x3F));
    goto loc_00490AD3;

loc_00490AD0: ;
    SET_LO8(eax, MEM8(edi + 0x3D));

loc_00490AD3: ;
    eax = ZX8(LO8(eax));
    ecx = ecx + eax * 4;
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_00490AE7: ;
    SET_LO16(eax, MEM16(esi));
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    ecx = edi;
    if (TEST_Z(LO8(eax), 4)) { sub_00490AF8(); return; } /* je: equal / zero */

loc_00490AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0048F6B9(); /* call 0x0048F6B9 */

loc_00490AF6: ;
    g_seh_ebp = ebp; sub_00490B0C(); return; /* tail jmp 0x00490B0C */

}

/**
 * sub_00490B69
 * Original: 0x00490B69 - 0x00490B8A (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490B69(void)
{
    int _flags = 0; /* fallback flag var */

loc_00490B69: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM8(esi + 2), 2)) goto loc_00490B7A; /* jne: not equal / not zero */

loc_00490B74: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00490A89(); /* call 0x00490A89 */

loc_00490B7A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 0x2C;
    PUSH32(esp, 0); sub_00492F04(); /* call 0x00492F04 */

loc_00490B86: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00490C14
 * Original: 0x00490C14 - 0x00490C56 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490C14(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00490C14: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00490C23: ;
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(0x561018);
    eax = MEM32(eax);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), ebx - flags set for next jcc */
    MEM32(esi + 0xD18) = eax;
    if (CMP_EQ(MEM32(ebp + 0x10), ebx)) { sub_00490C56(); return; } /* je: equal / zero */

loc_00490C3A: ;
    eax = ebp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x5610F8));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56104C), _icall_esp); /* indirect call */
    }

loc_00490C4D: ;
    if (TEST_NZ(eax, eax)) { sub_00490C56(); return; } /* jne: not equal / not zero */

loc_00490C51: ;
    edi = MEM32(ebp + 0x10);
    g_seh_ebp = ebp; sub_00490C58(); return; /* tail jmp 0x00490C58 */

}

/**
 * sub_00490CFF
 * Original: 0x00490CFF - 0x00490D23 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490CFF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00490CFF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x214;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00490D12: ;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), edx - flags set for next jcc */
    MEM8(ebp + -20) = LO8(eax);
    if (CMP_NE(MEM32(ebp + 8), edx)) { sub_00490D23(); return; } /* jne: not equal / not zero */

loc_00490D1C: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00490E49(); return; /* tail jmp 0x00490E49 */

}

/**
 * sub_00490E5A
 * Original: 0x00490E5A - 0x004910F5 (667 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00490E5A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00490E5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00490E6B: ;
    MEM8(ebp + -12) = LO8(eax);
    eax = MEM32(esi + 0xD20);
    edx = 0; /* xor self */
    if (CMP_BE(eax, edx)) goto loc_00490F1E; /* jbe: below or equal (unsigned <=) */

loc_00490E7E: ;
    if (CMP_NE(eax, 4)) goto loc_00490EF5; /* jne: not equal / not zero */

loc_00490E83: ;
    edi = MEM32(esi + 0xD2C);
    if (CMP_B(MEM8(edi + 2), 6)) goto loc_00490EE9; /* jb: below (unsigned <) */

loc_00490E8F: ;
    if (TEST_Z(MEM8(edi), LO8(eax))) goto loc_00490E98; /* je: equal / zero */

loc_00490E93: ;
    SET_LO8(eax, MEM8(esi + 0x3F));
    goto loc_00490E9B;

loc_00490E98: ;
    SET_LO8(eax, MEM8(esi + 0x3D));

loc_00490E9B: ;
    ecx = MEM32(esi + 0x1D8);
    eax = ZX8(LO8(eax));
    ebx = ecx;
    ebx = ebx - MEM32(esi + 0xD24);
    eax = eax + eax * 4;
    if (CMP_BE(ebx, eax)) goto loc_00490F13; /* jbe: below or equal (unsigned <=) */

loc_00490EB3: ;
    eax = MEM32(esi + 0xD28);
    if (CMP_NE(eax, edx)) goto loc_00490ED7; /* jne: not equal / not zero */

loc_00490EBD: ;
    MEM32(esi + 0xD20) = 2;

loc_00490EC7: ;
    if (CMP_EQ(MEM32(ebp + 0xC), edx)) goto loc_00491052; /* je: equal / zero */

loc_00490ED0: ;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    goto loc_00491049;

loc_00490ED7: ;
    eax--;
    MEM32(esi + 0xD28) = eax;
    MEM32(esi + 0xD24) = ecx;
    goto loc_00491090;

loc_00490EE9: ;
    MEM32(esi + 0xD20) = 1;
    goto loc_00490EC7;

loc_00490EF5: ;
    edi = esi + 0xD2C;
    eax = MEM32(edi);
    if (CMP_EQ(eax, edx)) goto loc_00490F11; /* je: equal / zero */

loc_00490F01: ;
    if (CMP_EQ(MEM32(ebp + 0xC), edx)) goto loc_00490F11; /* je: equal / zero */

loc_00490F06: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0048FB99(); /* call 0x0048FB99 */

loc_00490F0F: ;
    edx = 0; /* xor self */

loc_00490F11: ;
    MEM32(edi) = edx;

loc_00490F13: ;
    esi = MEM32(esi + 0xD20);
    goto loc_004910E3;

loc_00490F1E: ;
    ebx = MEM32(esi + 0xAF4);
    if (CMP_NE(ebx, edx)) goto loc_00490FA5; /* jne: not equal / not zero */

loc_00490F28: ;
    edi = ZX8(MEM8(esi + 0xE));
    (void)0; /* cmp edi, edx - flags set for next jcc */
    ebx = MEM32(esi + 0xACC);
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = edx;
    if (CMP_BE(edi, edx)) goto loc_00490FA1; /* jbe: below or equal (unsigned <=) */

loc_00490F3C: ;
    SET_LO8(eax, MEM8(ebx + 2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00490F7A; /* je: equal / zero */

loc_00490F43: ;
    if (TEST_Z(MEM8(ebx), 4)) goto loc_00490F7A; /* je: equal / zero */

loc_00490F48: ;
    ecx = MEM32(ebx + 0xC0);
    if (CMP_EQ(ecx, 0x11)) goto loc_00490F7A; /* je: equal / zero */

loc_00490F53: ;
    if (CMP_EQ(ecx, 0x14)) goto loc_00490F7A; /* je: equal / zero */

loc_00490F58: ;
    if (CMP_AE(LO8(eax), 6)) goto loc_00490FA5; /* jae: above or equal (unsigned >=) */

loc_00490F5C: ;
    if (CMP_NE(MEM32(ebp + -8), edx)) goto loc_00490F6E; /* jne: not equal / not zero */

loc_00490F61: ;
    if (CMP_B(LO8(eax), 3)) goto loc_00490F6E; /* jb: below (unsigned <) */

loc_00490F65: ;
    if (CMP_A(LO8(eax), 5)) goto loc_00490F6E; /* ja: above (unsigned >) */

loc_00490F69: ;
    MEM32(ebp + -8) = ebx;
    goto loc_00490F7A;

loc_00490F6E: ;
    if (CMP_NE(MEM32(ebp + -4), edx)) goto loc_00490F7A; /* jne: not equal / not zero */

loc_00490F73: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_00490F7A; /* jne: not equal / not zero */

loc_00490F77: ;
    MEM32(ebp + -4) = ebx;

loc_00490F7A: ;
    ebx = ebx + 0x130;
    edi--;
    if ((edi != 0)) goto loc_00490F3C; /* jne: not equal / not zero */

loc_00490F83: ;
    if (CMP_EQ(MEM32(ebp + -8), edx)) goto loc_00490F90; /* je: equal / zero */

loc_00490F88: ;
    PUSH32(esp, 4);

loc_00490F8A: ;
    POP32(esp, esi);
    goto loc_004910E3;

loc_00490F90: ;
    if (CMP_EQ(MEM32(ebp + -4), edx)) goto loc_00490FA1; /* je: equal / zero */

loc_00490F95: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, 0); sub_00490A89(); /* call 0x00490A89 */

loc_00490F9F: ;
    goto loc_00490F88;

loc_00490FA1: ;
    PUSH32(esp, 3);
    goto loc_00490F8A;

loc_00490FA5: ;
    eax = MEM32(ebx + 0xD8);
    if (CMP_NE(eax, MEM32(esi + 0x268))) goto loc_00490FBA; /* jne: not equal / not zero */

loc_00490FB3: ;
    esi = 0; /* xor self */
    goto loc_004910E3;

loc_00490FBA: ;
    if (CMP_EQ(MEM16(esi + 0x91E), LO16(edx))) goto loc_00490FDC; /* je: equal / zero */

loc_00490FC3: ;
    if (TEST_Z(MEM8(esi + 0x8CD), 1)) goto loc_00490FDC; /* je: equal / zero */

loc_00490FCC: ;
    eax = 0; /* xor self */
    eax++;
    MEM32(esi + 0xD20) = eax;
    esi = eax;
    goto loc_004910E3;

loc_00490FDC: ;
    edi = MEM32(esi + 0xD2C);
    if (CMP_NE(edi, edx)) goto loc_00491017; /* jne: not equal / not zero */

loc_00490FE6: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0); sub_0048E613(); /* call 0x0048E613 */

loc_00490FF0: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_004910E0; /* je: equal / zero */

loc_00490FFA: ;
    if (TEST_Z(MEM8(edi), 4)) goto loc_004910E0; /* je: equal / zero */

loc_00491003: ;
    eax = MEM32(edi + 0xB8);
    if (CMP_EQ(eax, MEM32(ebx + 0xB8))) goto loc_004910E0; /* je: equal / zero */

loc_00491015: ;
    edx = 0; /* xor self */

loc_00491017: ;
    SET_LO8(eax, MEM8(edi + 2));
    if (CMP_B(LO8(eax), 6)) goto loc_0049109D; /* jb: below (unsigned <) */

loc_0049101E: ;
    SET_LO16(eax, MEM16(edi + 0xDC));
    if (CMP_EQ(LO16(eax), MEM16(ebx + 0xDC))) goto loc_0049105D; /* je: equal / zero */

loc_0049102E: ;
    eax = MEM32(esi + 0xD2C);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esi + 0xD20) = 3;
    if (CMP_EQ(eax, edx)) goto loc_00491052; /* je: equal / zero */

loc_00491042: ;
    if (CMP_EQ(MEM32(ebp + 0xC), edx)) goto loc_00491052; /* je: equal / zero */

loc_00491047: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_00491049: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0048FB99(); /* call 0x0048FB99 */

loc_00491050: ;
    edx = 0; /* xor self */

loc_00491052: ;
    MEM32(esi + 0xD2C) = edx;
    goto loc_00490F13;

loc_0049105D: ;
    MEM32(esi + 0xD20) = 4;
    if (TEST_Z(MEM8(edi), 4)) goto loc_00491071; /* je: equal / zero */

loc_0049106C: ;
    SET_LO8(eax, MEM8(esi + 0x3E));
    goto loc_00491074;

loc_00491071: ;
    SET_LO8(eax, MEM8(esi + 0x3C));

loc_00491074: ;
    eax = ZX8(LO8(eax));
    eax--;
    MEM32(esi + 0xD28) = eax;
    eax = MEM32(esi + 0x1D8);
    MEM32(esi + 0xD24) = eax;
    MEM32(esi + 0xD2C) = edi;

loc_00491090: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0048FB82(); /* call 0x0048FB82 */

loc_00491098: ;
    goto loc_00490F13;

loc_0049109D: ;
    if (CMP_B(LO8(eax), 3)) goto loc_004910A9; /* jb: below (unsigned <) */

loc_004910A1: ;
    if (CMP_BE(LO8(eax), 5)) goto loc_00490F88; /* jbe: below or equal (unsigned <=) */

loc_004910A9: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_004910C0; /* jne: not equal / not zero */

loc_004910AD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00490A89(); /* call 0x00490A89 */

loc_004910B5: ;
    MEM32(esi + 0xD2C) = edi;
    goto loc_00490F88;

loc_004910C0: ;
    eax = MEM32(esi + 0xD2C);
    if (CMP_EQ(eax, edx)) goto loc_004910DA; /* je: equal / zero */

loc_004910CA: ;
    if (CMP_EQ(MEM32(ebp + 0xC), edx)) goto loc_004910DA; /* je: equal / zero */

loc_004910CF: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0048FB99(); /* call 0x0048FB99 */

loc_004910D8: ;
    edx = 0; /* xor self */

loc_004910DA: ;
    MEM32(esi + 0xD2C) = edx;

loc_004910E0: ;
    esi = 0; /* xor self */
    esi++;

loc_004910E3: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004910EC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004910F5
 * Original: 0x004910F5 - 0x00491184 (143 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004910F5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004910F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ecx = MEM32(eax + 0x10);
    if (CMP_EQ(LO8(ecx), 0x7F)) { sub_00491184(); return; } /* je: equal / zero */

loc_00491108: ;
    edx = MEM32(esi + 0x268);
    if (CMP_EQ(ecx, edx)) { sub_00491184(); return; } /* je: equal / zero */

loc_00491112: ;
    ebx = MEM32(edi + 8);
    SET_LO8(ebx, LO8(ebx) & 7);
    if (CMP_B(LO8(ebx), 4)) goto loc_00491169; /* jb: below (unsigned <) */

loc_0049111D: ;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00491128; /* jne: not equal / not zero */

loc_00491122: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    goto loc_00491146;

loc_00491128: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_0048E613(); /* call 0x0048E613 */

loc_00491130: ;
    if (TEST_Z(eax, eax)) goto loc_00491174; /* je: equal / zero */

loc_00491134: ;
    SET_LO8(ecx, MEM8(eax + 2));
    if (CMP_EQ(LO8(ecx), 1)) goto loc_00491174; /* je: equal / zero */

loc_0049113C: ;
    if (CMP_B(LO8(ecx), 6)) goto loc_00491150; /* jb: below (unsigned <) */

loc_00491141: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);

loc_00491146: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0048F1FE(); /* call 0x0048F1FE */

loc_0049114E: ;
    g_seh_ebp = ebp; sub_00491193(); return; /* tail jmp 0x00491193 */

loc_00491150: ;
    if (TEST_Z(MEM8(eax), 4)) goto loc_0049115E; /* je: equal / zero */

loc_00491155: ;
    if (CMP_B(MEM32(esi + 0xAF0), 6)) goto loc_00491174; /* jb: below (unsigned <) */

loc_0049115E: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00490B69(); /* call 0x00490B69 */

loc_00491167: ;
    g_seh_ebp = ebp; sub_00491193(); return; /* tail jmp 0x00491193 */

loc_00491169: ;
    if (TEST_Z(MEM8(edi + 0xB), 0x10)) goto loc_00491174; /* je: equal / zero */

loc_0049116F: ;
    MEM32(eax + 0xC) = edx;
    g_seh_ebp = ebp; sub_00491187(); return; /* tail jmp 0x00491187 */

loc_00491174: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0049A4E0(); /* call 0x0049A4E0 */

loc_00491182: ;
    g_seh_ebp = ebp; sub_00491193(); return; /* tail jmp 0x00491193 */

}

/**
 * sub_00491199
 * Original: 0x00491199 - 0x004911D1 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491199(void)
{
    uint32_t ebp;

loc_00491199: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0048E1B9(); /* call 0x0048E1B9 */

loc_004911AE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_004911B4: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_004910F5(); /* call 0x004910F5 */

loc_004911C3: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004911CB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004911D1
 * Original: 0x004911D1 - 0x0049128F (190 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004911D1(void)
{
    int _flags = 0; /* fallback flag var */

loc_004911D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(esi + 0xE));
    ecx = MEM32(esi + 0xACC);
    edx = eax;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0x130;
    if (CMP_BE(edx & edx, 0)) goto loc_004911FA; /* jbe: below or equal (unsigned <=) */

loc_004911ED: ;
    if (CMP_EQ(MEM8(edi + 2), 0)) goto loc_004911F8; /* je: equal / zero */

loc_004911F3: ;
    edi = edi + ebx;
    edx--;
    if ((edx != 0)) goto loc_004911ED; /* jne: not equal / not zero */

loc_004911F8: ;
    (void)0; /* test edx, edx - flags set for next jcc */

loc_004911FA: ;
    if (TEST_NZ(edx, edx)) goto loc_00491232; /* jne: not equal / not zero */

loc_004911FC: ;
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00491220; /* jbe: below or equal (unsigned <=) */

loc_00491202: ;
    if (CMP_NE(MEM8(ecx + 2), 1)) goto loc_0049121B; /* jne: not equal / not zero */

loc_00491208: ;
    if (TEST_Z(MEM8(ecx), 3)) goto loc_0049121B; /* je: equal / zero */

loc_0049120D: ;
    if (TEST_Z(edi, edi)) goto loc_00491219; /* je: equal / zero */

loc_00491211: ;
    edx = MEM32(ecx + 0x18);
    if (CMP_AE(edx, MEM32(edi + 0x18))) goto loc_0049121B; /* jae: above or equal (unsigned >=) */

loc_00491219: ;
    edi = ecx;

loc_0049121B: ;
    ecx = ecx + ebx;
    eax--;
    if ((eax != 0)) goto loc_00491202; /* jne: not equal / not zero */

loc_00491220: ;
    if (TEST_NZ(edi, edi)) goto loc_00491228; /* jne: not equal / not zero */

loc_00491224: ;
    eax = 0; /* xor self */
    goto loc_0049128B;

loc_00491228: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0048FC7F(); /* call 0x0048FC7F */

loc_00491232: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0;
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) | 0xFFFFFFFFu;
    MEM32(edi + 0x40) = 0x490B8A;
    MEM16(esi + 0xAD6) = MEM16(esi + 0xAD6) + 1;
    if (CMP_NE(MEM16(esi + 0xAD6), 0)) goto loc_0049125B; /* jne: not equal / not zero */

loc_00491252: ;
    MEM16(esi + 0xAD6) = 1;

loc_0049125B: ;
    eax = edi;
    eax = eax - MEM32(esi + 0xACC);
    SET_LO16(ecx, MEM16(esi + 0xAD6));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 8;
    PUSH32(esp, edi);
    MEM8(edi + 2) = 2;
    eax = ZX8(LO8(eax));
    ecx = ecx | eax;
    ecx = BSWAP32(ecx); /* bswap */
    MEM32(edi + 4) = ecx;
    ecx = esi;
    PUSH32(esp, 0); sub_0048E650(); /* call 0x0048E650 */

loc_00491289: ;
    eax = edi;

loc_0049128B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0049128F
 * Original: 0x0049128F - 0x004912FC (109 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049128F(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049128F: ;
    PUSH32(esp, 0); sub_004911D1(); /* call 0x004911D1 */

loc_00491294: ;
    if (TEST_Z(eax, eax)) goto loc_004912F9; /* je: equal / zero */

loc_00491298: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    MEM16(eax) = 1;
    edi = eax + 0xC4;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x10);
    ecx = eax + 0xB8;
    esi = eax + 0xBC;
    MEM32(eax + 0xC0) = edi;
    MEM16(eax + 0x84) = 8;
    MEM16(eax + 0xB6) = 8;
    MEM32(ecx) = 0x1000000;
    MEM16(esi) = 0x20C;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(edx, LO8(edx) & 0xE0);
    if (CMP_NE(LO8(edx), 0x80)) goto loc_004912F7; /* jne: not equal / not zero */

loc_004912EB: ;
    MEM32(ecx) = MEM32(ecx) & 0;
    MEM16(esi) = MEM16(esi) & 0;
    MEM16(eax) = 2;

loc_004912F7: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004912F9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004912FC
 * Original: 0x004912FC - 0x0049133C (64 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004912FC(void)
{
    int _flags = 0; /* fallback flag var */

loc_004912FC: ;
    PUSH32(esp, 0); sub_004911D1(); /* call 0x004911D1 */

loc_00491301: ;
    if (TEST_Z(eax, eax)) goto loc_00491339; /* je: equal / zero */

loc_00491305: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC0) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax) = 4;
    MEM16(eax + 0x84) = 0x18;
    MEM16(eax + 0xB6) = 0x18;
    MEM32(eax + 0xB8) = ecx;
    MEM16(eax + 0xBC) = 0x20C;

loc_00491339: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049133C
 * Original: 0x0049133C - 0x00491349 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049133C(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049133C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    esi = esi + 0x2C;
    g_seh_ebp = ebp; sub_0049135A(); return; /* tail jmp 0x0049135A */

}

/**
 * sub_00491364
 * Original: 0x00491364 - 0x0049139C (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491364(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00491364: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test MEM8(esi), 4 - flags set for next jcc */
    ebx = ecx;
    MEM8(esi + 2) = 6;
    if (TEST_Z(MEM8(esi), 4)) goto loc_0049138D; /* je: equal / zero */

loc_00491378: ;
    PUSH32(esp, 0); sub_0048EA2A(); /* call 0x0048EA2A */

loc_0049137D: ;
    if (CMP_BE(MEM32(esi + 0x128), edi)) goto loc_0049138D; /* jbe: below or equal (unsigned <=) */

loc_00491385: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00496B02(); /* call 0x00496B02 */

loc_0049138D: ;
    if (CMP_EQ(MEM32(esi + 0x2C), edi)) { sub_0049139C(); return; } /* je: equal / zero */

loc_00491392: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049133C(); /* call 0x0049133C */

loc_0049139A: ;
    g_seh_ebp = ebp; sub_004913B3(); return; /* tail jmp 0x004913B3 */

}

/**
 * sub_004913B9
 * Original: 0x004913B9 - 0x004918BE (1285 bytes, 419 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004913B9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004913B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    (void)0; /* cmp MEM16(ebx + 2), 0x80 - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_B(MEM16(ebx + 2), 0x80)) goto loc_004918B9; /* jb: below (unsigned <) */

loc_004913D2: ;
    eax = ebx + 8;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(edx, LO8(edx) & 0xE0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp LO8(edx), 0x80 - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    MEM8(ebp + -1) = LO8(edx);
    if (CMP_NE(LO8(edx), 0x80)) goto loc_004913F4; /* jne: not equal / not zero */

loc_004913E8: ;
    if (CMP_EQ(MEM32(ecx + 0xAF4), esi)) goto loc_004918B8; /* je: equal / zero */

loc_004913F4: ;
    (void)0; /* cmp MEM16(ebx), 0x5800 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -20) = esi;
    if (CMP_NE(MEM16(ebx), 0x5800)) goto loc_0049142D; /* jne: not equal / not zero */

loc_004913FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048DC89(); /* call 0x0048DC89 */

loc_00491405: ;
    edi = eax;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM32(ebp + -16) = edi;
    if (CMP_EQ(edi, esi)) goto loc_004918B7; /* je: equal / zero */

loc_00491412: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(eax, 0xFFFFFF00u)) goto loc_004918B7; /* je: equal / zero */

loc_00491420: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004918B7; /* jne: not equal / not zero */

loc_00491428: ;
    goto loc_004914D6;

loc_0049142D: ;
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, 0); sub_0048E613(); /* call 0x0048E613 */

loc_00491435: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(eax, esi)) goto loc_004918B7; /* je: equal / zero */

loc_00491440: ;
    if (CMP_EQ(MEM32(ebp + 0xC), esi)) goto loc_004918B7; /* je: equal / zero */

loc_00491449: ;
    if (CMP_EQ(MEM16(ebp + 0x10), LO16(esi))) goto loc_004918B7; /* je: equal / zero */

loc_00491453: ;
    if (TEST_Z(MEM8(eax), 3)) goto loc_004918B7; /* je: equal / zero */

loc_0049145C: ;
    ecx = MEM32(ebx + 0x2C);
    if (CMP_L(ecx, MEM32(eax + 0xEC))) goto loc_004918B7; /* jl: less (signed <) */

loc_0049146B: ;
    if (CMP_G(ecx, MEM32(eax + 0xEC))) goto loc_0049147C; /* jg: greater (signed >) */

loc_0049146D: ;
    ecx = MEM32(ebx + 0x28);
    if (CMP_BE(ecx, MEM32(eax + 0xE8))) goto loc_004918B7; /* jbe: below or equal (unsigned <=) */

loc_0049147C: ;
    SET_LO8(ecx, MEM8(eax + 2));
    if (CMP_EQ(LO8(ecx), 3)) goto loc_0049148D; /* je: equal / zero */

loc_00491484: ;
    if (CMP_NE(LO8(ecx), 6)) goto loc_004918B7; /* jne: not equal / not zero */

loc_0049148D: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = ebx + 0x18;
    esi = eax + 0x44;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_004918B7; /* jne: not equal / not zero */

loc_004914A0: ;
    eax = MEM32(eax + 0xC0);
    edi = MEM32(ebp + -12);
    PUSH32(esp, 2);
    esi = eax;
    MEM32(ebp + -16) = eax;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_004918B7; /* jne: not equal / not zero */

loc_004914BB: ;
    eax = MEM32(ebx + 0x14);
    if (TEST_Z(eax, 0xFFFFFF00u)) goto loc_004918B7; /* je: equal / zero */

loc_004914C9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004918B7; /* jne: not equal / not zero */

loc_004914D1: ;
    edi = MEM32(ebp + -16);
    esi = 0; /* xor self */

loc_004914D6: ;
    (void)0; /* cmp MEM8(ebp + -1), 0x80 - flags set for next jcc */
    MEM32(ebp + -24) = esi;
    if (CMP_EQ(MEM8(ebp + -1), 0x80)) goto loc_00491514; /* je: equal / zero */

loc_004914DF: ;
    PUSH32(esp, 0x5880);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00493126(); /* call 0x00493126 */

loc_004914ED: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(eax, esi)) goto loc_004918B7; /* je: equal / zero */

loc_004914F8: ;
    if (CMP_NE(MEM16(eax + 2), 0x64)) goto loc_004918B7; /* jne: not equal / not zero */

loc_00491503: ;
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00493150(); /* call 0x00493150 */

loc_0049150C: ;
    if (TEST_NZ(eax, eax)) goto loc_004918B7; /* jne: not equal / not zero */

loc_00491514: ;
    PUSH32(esp, 0x5881);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00493126(); /* call 0x00493126 */

loc_00491522: ;
    if (CMP_EQ(eax, esi)) goto loc_004918B7; /* je: equal / zero */

loc_0049152A: ;
    if (CMP_NE(MEM16(eax + 2), 0x18)) goto loc_004918B7; /* jne: not equal / not zero */

loc_00491535: ;
    ecx = eax;
    ecx = ecx - ebx;
    ecx = ecx + 0x18;
    if (CMP_NE(ecx, MEM32(ebp + 0x18))) goto loc_004918B7; /* jne: not equal / not zero */

loc_00491545: ;
    PUSH32(esp, 0x14);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = eax - ebx;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi + 8;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    MEM32(ebp + -32) = ecx;
    PUSH32(esp, 0); sub_004930B5(); /* call 0x004930B5 */

loc_0049155F: ;
    if (TEST_Z(eax, eax)) goto loc_004918B7; /* je: equal / zero */

loc_00491567: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x48);
    esi = ebx + 0x38;
    PUSH32(esp, esi);
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    edi = edi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(ebp + -28) = esi;
    PUSH32(esp, 0); sub_0048DD50(); /* call 0x0048DD50 */

loc_00491584: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048E91C(); /* call 0x0048E91C */

loc_00491590: ;
    SET_LO16(eax, MEM16(ebx));
    (void)0; /* cmp LO16(eax), 0x5800 - flags set for next jcc */
    edi = ebx + 0x5C;
    if (CMP_EQ(LO16(eax), 0x5800)) goto loc_0049159E; /* je: equal / zero */

loc_0049159C: ;
    edi = esi;

loc_0049159E: ;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    esi = ebp + -68;
    edx = 0; /* xor self */
    MEM32(ebp + 0x18) = edi;
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004915D0; /* je: equal / zero */

loc_004915AD: ;
    ecx = MEM32(ebp + -12);
    if (TEST_NZ(MEM8(ecx), 0xE0)) goto loc_004918B7; /* jne: not equal / not zero */

loc_004915B9: ;
    edi = MEM32(ebp + 0x18);
    PUSH32(esp, 3);
    edi = edi + 0xA;
    POP32(esp, ecx);
    esi = ebp + -58;
    edx = 0; /* xor self */
    /* repe cmpsw - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_004918B7; /* jne: not equal / not zero */

loc_004915D0: ;
    if (CMP_NE(LO16(eax), 0x5800)) goto loc_004915DE; /* jne: not equal / not zero */

loc_004915D6: ;
    esi = MEM32(ebp + -28);
    MEM32(ebp + 0x18) = esi;
    goto loc_004915E6;

loc_004915DE: ;
    eax = ebx + 0x5C;
    MEM32(ebp + 0x18) = eax;
    esi = eax;

loc_004915E6: ;
    eax = MEM32(ebp + -12);
    if (TEST_NZ(MEM8(eax), 0xE0)) goto loc_0049160D; /* jne: not equal / not zero */

loc_004915EE: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_004915F6: ;
    edi = esi + 0xA;
    PUSH32(esp, 3);
    esi = eax + 6;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    /* repe cmpsw - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_004918B7; /* jne: not equal / not zero */

loc_0049160A: ;
    esi = MEM32(ebp + 0x18);

loc_0049160D: ;
    eax = MEM32(ebp + -12);
    SET_LO8(eax, MEM8(eax));
    SET_LO8(eax, LO8(eax) & 0xE0);
    if (CMP_NE(LO8(eax), 0x80)) goto loc_0049164E; /* jne: not equal / not zero */

loc_00491618: ;
    eax = MEM32(esi);
    ecx = ebp + 0x18;
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_00491625: ;
    if (TEST_Z(eax, eax)) goto loc_004918B7; /* je: equal / zero */

loc_0049162D: ;
    eax = MEM32(esi + 4);
    ecx = ebp + 0x18;
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_0049163B: ;
    if (TEST_Z(eax, eax)) goto loc_004918B7; /* je: equal / zero */

loc_00491643: ;
    if (CMP_EQ(MEM16(esi + 8), 0)) goto loc_004918B7; /* je: equal / zero */

loc_0049164E: ;
    if (CMP_NE(MEM16(ebx), 0x5800)) goto loc_00491812; /* jne: not equal / not zero */

loc_00491659: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0); sub_0048E548(); /* call 0x0048E548 */

loc_00491667: ;
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(ebx, ebx)) goto loc_00491708; /* je: equal / zero */

loc_00491674: ;
    ecx = MEM32(eax + 0x2C);
    if (CMP_L(ecx, MEM32(ebx + 0xEC))) goto loc_004918B7; /* jl: less (signed <) */

loc_00491683: ;
    if (CMP_G(ecx, MEM32(ebx + 0xEC))) goto loc_00491694; /* jg: greater (signed >) */

loc_00491685: ;
    ecx = MEM32(eax + 0x28);
    if (CMP_BE(ecx, MEM32(ebx + 0xE8))) goto loc_004918B7; /* jbe: below or equal (unsigned <=) */

loc_00491694: ;
    if (CMP_NE(MEM8(ebx + 2), 3)) goto loc_004916BC; /* jne: not equal / not zero */

loc_0049169A: ;
    esi = MEM32(ebp + -8);
    PUSH32(esp, 6);
    esi = esi + 0x1E0;
    POP32(esp, ecx);
    edi = eax + 0x42;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004916B4; /* je: equal / zero */

loc_004916AF: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx - 0xFFFFFFFFu - _cf; /* sbb */

loc_004916B4: ;
    if (CMP_G(edx & edx, 0)) goto loc_004918B7; /* jg: greater (signed >) */

loc_004916BC: ;
    SET_LO8(ecx, MEM8(ebx + 2));
    if (CMP_EQ(LO8(ecx), 2)) goto loc_004916EE; /* je: equal / zero */

loc_004916C4: ;
    if (CMP_EQ(LO8(ecx), 3)) goto loc_004916EE; /* je: equal / zero */

loc_004916C9: ;
    if (CMP_NE(LO8(ecx), 4)) goto loc_004916DD; /* jne: not equal / not zero */

loc_004916CE: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = eax + 0x18;
    esi = ebx + 0x44;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004916EE; /* je: equal / zero */

loc_004916DD: ;
    ecx = MEM32(ebp + -8);
    MEM8(ebx) = MEM8(ebx) | 8;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0048FB99(); /* call 0x0048FB99 */

loc_004916EB: ;
    eax = MEM32(ebp + 0x14);

loc_004916EE: ;
    if (CMP_NE(MEM8(ebx + 2), 1)) goto loc_00491704; /* jne: not equal / not zero */

loc_004916F4: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0048FC7F(); /* call 0x0048FC7F */

loc_004916FF: ;
    eax = MEM32(ebp + 0x14);
    ebx = 0; /* xor self */

loc_00491704: ;
    if (TEST_NZ(ebx, ebx)) goto loc_00491740; /* jne: not equal / not zero */

loc_00491708: ;
    edi = MEM32(ebp + -16);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    eax = eax + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049128F(); /* call 0x0049128F */

loc_00491718: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_004918B7; /* je: equal / zero */

loc_00491722: ;
    eax = MEM32(ebp + 0x14);

loc_00491725: ;
    if (CMP_EQ(MEM8(ebx + 2), 4)) goto loc_004917CF; /* je: equal / zero */

loc_0049172F: ;
    (void)0; /* test MEM8(ebx), 4 - flags set for next jcc */
    edx = MEM32(ebp + -8);
    MEM8(ebx + 2) = 4;
    if (TEST_Z(MEM8(ebx), 4)) goto loc_00491745; /* je: equal / zero */

loc_0049173B: ;
    SET_LO8(ecx, MEM8(edx + 0x3E));
    goto loc_00491748;

loc_00491740: ;
    edi = MEM32(ebp + -16);
    goto loc_00491725;

loc_00491745: ;
    SET_LO8(ecx, MEM8(edx + 0x3C));

loc_00491748: ;
    MEM8(ebx + 3) = LO8(ecx);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ecx = edx;
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0); sub_0048E650(); /* call 0x0048E650 */

loc_00491759: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0x18);
    esi = MEM32(ebp + -8);
    MEM32(ebx + 0x44) = ecx;
    eax = MEM32(eax + 0x1C);
    MEM32(ebx + 0x48) = eax;
    PUSH32(esp, 8);
    eax = ebx + 0x4C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00493400(); /* call 0x00493400 */

loc_00491778: ;
    eax = MEM32(ebp + -24);
    ecx = eax;
    eax = eax + 4;
    PUSH32(esp, 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    eax = edi + 0x90;
    PUSH32(esp, eax);
    edi = edi + 0x30;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -32));
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_0048E682(); /* call 0x0048E682 */

loc_004917A5: ;
    (void)0; /* test MEM8(ebx), 4 - flags set for next jcc */
    eax = MEM32(esi + 0x1D8);
    if (TEST_Z(MEM8(ebx), 4)) goto loc_004917B5; /* je: equal / zero */

loc_004917B0: ;
    SET_LO8(ecx, MEM8(esi + 0x3F));
    goto loc_004917B8;

loc_004917B5: ;
    SET_LO8(ecx, MEM8(esi + 0x3D));

loc_004917B8: ;
    ecx = ZX8(LO8(ecx));
    eax = eax + ecx * 4;
    eax = eax + ecx;
    PUSH32(esp, eax);
    eax = ebx + 0x34;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_004917CC: ;
    eax = MEM32(ebp + 0x14);

loc_004917CF: ;
    (void)0; /* test MEM8(ebx), 2 - flags set for next jcc */
    ecx = MEM32(eax + 0x28);
    MEM32(ebx + 0xE8) = ecx;
    eax = MEM32(eax + 0x2C);
    MEM32(ebx + 0xEC) = eax;
    if (TEST_Z(MEM8(ebx), 2)) goto loc_00491802; /* je: equal / zero */

loc_004917E6: ;
    ecx = MEM32(ebp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_00491802; /* je: equal / zero */

loc_004917ED: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00491802; /* je: equal / zero */

loc_004917F5: ;
    MEM32(ebx + 0xB8) = ecx;
    MEM16(ebx + 0xBC) = LO16(eax);

loc_00491802: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00490384(); /* call 0x00490384 */

loc_0049180D: ;
    goto loc_004918B7;

loc_00491812: ;
    ecx = MEM32(ebx + 0x28);
    eax = MEM32(ebp + -20);
    (void)0; /* test MEM8(eax), 2 - flags set for next jcc */
    MEM32(eax + 0xE8) = ecx;
    ecx = MEM32(ebx + 0x2C);
    MEM32(eax + 0xEC) = ecx;
    if (TEST_Z(MEM8(eax), 2)) goto loc_00491840; /* je: equal / zero */

loc_0049182C: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0xB8) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x10));
    MEM16(eax + 0xBC) = LO16(ecx);

loc_00491840: ;
    if (CMP_NE(MEM8(eax + 2), 6)) goto loc_00491855; /* jne: not equal / not zero */

loc_00491846: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = ebx + 0x20;
    esi = eax + 0x4C;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004918AC; /* je: equal / zero */

loc_00491855: ;
    ecx = MEM32(ebx + 0x20);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ebx + 0x24);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(ebx + 0x14);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -24);
    edx = ecx;
    ecx = ecx + 4;
    PUSH32(esp, 1);
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & ecx;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, edx);
    edx = ecx + 0x90;
    PUSH32(esp, edx);
    ecx = ecx + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -32));
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048E682(); /* call 0x0048E682 */

loc_00491898: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_004918A9: ;
    eax = MEM32(ebp + -20);

loc_004918AC: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00491364(); /* call 0x00491364 */

loc_004918B7: ;
    POP32(esp, edi);

loc_004918B8: ;
    POP32(esp, esi);

loc_004918B9: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004918BE
 * Original: 0x004918BE - 0x00491BB7 (761 bytes, 237 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004918BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004918BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    (void)0; /* cmp MEM16(esi + 2), 0x40 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_B(MEM16(esi + 2), 0x40)) goto loc_00491BB2; /* jb: below (unsigned <) */

loc_004918D6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_0048E613(); /* call 0x0048E613 */

loc_004918DF: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00491BB1; /* je: equal / zero */

loc_004918E9: ;
    if (TEST_Z(MEM8(ebx), 4)) goto loc_00491BB1; /* je: equal / zero */

loc_004918F2: ;
    if (CMP_NE(MEM8(ebx + 2), 3)) goto loc_00491BB1; /* jne: not equal / not zero */

loc_004918FC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = esi + 0x10;
    POP32(esp, ecx);
    esi = ebx + 0x44;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_00491BB0; /* jne: not equal / not zero */

loc_00491910: ;
    edi = MEM32(ebp + 0x14);
    eax = MEM32(edi + 0xC);
    if (TEST_Z(eax, 0xFFFFFF00u)) goto loc_00491BB0; /* je: equal / zero */

loc_00491921: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00491BB0; /* jne: not equal / not zero */

loc_00491929: ;
    PUSH32(esp, 0x5880);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00493126(); /* call 0x00493126 */

loc_00491937: ;
    if (TEST_Z(eax, eax)) goto loc_00491BB0; /* je: equal / zero */

loc_0049193F: ;
    if (CMP_NE(MEM16(eax + 2), 0x64)) goto loc_00491BB0; /* jne: not equal / not zero */

loc_0049194A: ;
    eax = eax + 4;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0); sub_00493150(); /* call 0x00493150 */

loc_00491956: ;
    if (TEST_NZ(eax, eax)) goto loc_00491BB0; /* jne: not equal / not zero */

loc_0049195E: ;
    PUSH32(esp, 0x5883);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00493126(); /* call 0x00493126 */

loc_0049196C: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00491BB0; /* je: equal / zero */

loc_00491976: ;
    eax = ZX16(MEM16(esi + 2));
    eax = eax - edi;
    eax = eax + esi;
    if (CMP_NE(eax, MEM32(ebp + 0x18))) goto loc_00491BB0; /* jne: not equal / not zero */

loc_00491987: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0xAEC);
    if (TEST_Z(ecx, ecx)) goto loc_004919A4; /* je: equal / zero */

loc_00491994: ;
    PUSH32(esp, MEM32(ebx + 0xC0));
    PUSH32(esp, 0); sub_004A3B6F(); /* call 0x004A3B6F */

loc_0049199F: ;
    MEM32(ebp + -8) = eax;
    goto loc_004919A8;

loc_004919A4: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;

loc_004919A8: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_00491BB0; /* je: equal / zero */

loc_004919B2: ;
    eax = MEM32(ebx + 0xE0);
    if (CMP_B(eax, 8)) goto loc_004919C0; /* jb: below (unsigned <) */

loc_004919BD: ;
    PUSH32(esp, 8);
    POP32(esp, eax);

loc_004919C0: ;
    ecx = ZX16(MEM16(esi + 2));
    ecx = ecx - 4;
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebx + 0xE8;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebx + 0xC0));
    ecx = MEM32(eax + 0xAEC);
    PUSH32(esp, 0); sub_004A3B9B(); /* call 0x004A3B9B */

loc_004919EE: ;
    if (TEST_Z(eax, eax)) goto loc_00491BB0; /* je: equal / zero */

loc_004919F6: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, 0x14);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esi - edi;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax + 0xC0;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0); sub_004930B5(); /* call 0x004930B5 */

loc_00491A17: ;
    if (TEST_Z(eax, eax)) goto loc_00491BB0; /* je: equal / zero */

loc_00491A1F: ;
    SET_LO16(eax, MEM16(edi + 6));
    if (TEST_Z(LO8(eax), 1)) goto loc_00491A3B; /* je: equal / zero */

loc_00491A27: ;
    MEM16(ebx + 0xB6) = 8;
    MEM16(ebx + 0x84) = 8;
    goto loc_00491A55;

loc_00491A3B: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_00491BB0; /* je: equal / zero */

loc_00491A43: ;
    MEM16(ebx + 0xB6) = 0x18;
    MEM16(ebx + 0x84) = 0x18;

loc_00491A55: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -12));
    esi = ebx + 0x4C;
    MEM32(esi) = eax;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0048E682(); /* call 0x0048E682 */

loc_00491A82: ;
    PUSH32(esp, 0x20);
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    eax = ebx + 0x64;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0048DD50(); /* call 0x0048DD50 */

loc_00491A9C: ;
    if (CMP_NE(MEM16(edi + 0x3E), 0)) goto loc_00491BB0; /* jne: not equal / not zero */

loc_00491AA7: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(ebp + -16);
    MEM32(ebx + 8) = eax;
    eax = ZX16(MEM16(edi + 0x3C));
    eax = eax + eax * 4;
    MEM32(ebx + 0x24) = eax;
    eax = ZX16(MEM16(edi + 0x3A));
    eax = eax + eax * 4;
    MEM32(ebx + 0x28) = eax;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebx + 0xC4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0x14);
    eax = MEM32(esi + 0x34);
    edi = MEM32(ebp + -4);
    MEM32(ebx + 0xD8) = eax;
    SET_LO16(eax, MEM16(esi + 0x38));
    MEM16(ebx + 0xDC) = LO16(eax);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_00491AF6: ;
    if (CMP_NE(ebx, MEM32(edi + 0xAF4))) goto loc_00491BA0; /* jne: not equal / not zero */

loc_00491B02: ;
    PUSH32(esp, 0x5887);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00493126(); /* call 0x00493126 */

loc_00491B10: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00491B86; /* je: equal / zero */

loc_00491B16: ;
    SET_LO16(eax, MEM16(esi + 2));
    if (CMP_B(LO16(eax), 0x11C)) goto loc_00491B86; /* jb: below (unsigned <) */

loc_00491B20: ;
    if (CMP_A(LO16(eax), 0x91C)) goto loc_00491B86; /* ja: above (unsigned >) */

loc_00491B26: ;
    eax = ZX16(LO16(eax));
    eax = eax + 0xFFFFFFFCu;
    if (TEST_NZ(LO8(eax), 7)) goto loc_00491B86; /* jne: not equal / not zero */

loc_00491B30: ;
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    eax = ebx + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    eax = ebx + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_0048DD50(); /* call 0x0048DD50 */

loc_00491B48: ;
    ecx = ZX16(MEM16(esi + 2));
    edi = MEM32(edi + 0xD1C);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 3);
    POP32(esp, edx);
    ecx = eax;
    ecx = ecx & edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + -4);
    edi = MEM32(esi + 0xD1C);
    PUSH32(esp, 0x4B);
    eax = 0; /* xor self */
    edi = edi + 0x91C;
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0xAF0) = edx;
    MEM8(ebx + 2) = 5;
    edi = esi;
    goto loc_00491B90;

loc_00491B86: ;
    MEM32(edi + 0xAF0) = 6;

loc_00491B90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(edi + 0xAF8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_00491BA0: ;
    if (CMP_EQ(MEM8(ebx + 2), 5)) goto loc_00491BB0; /* je: equal / zero */

loc_00491BA6: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_00491364(); /* call 0x00491364 */

loc_00491BB0: ;
    POP32(esp, edi);

loc_00491BB1: ;
    POP32(esp, ebx);

loc_00491BB2: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00491BB7
 * Original: 0x00491BB7 - 0x00491DA2 (491 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491BB7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00491BB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    (void)0; /* cmp MEM16(esi + 2), 0x24 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_B(MEM16(esi + 2), 0x24)) goto loc_00491D9D; /* jb: below (unsigned <) */

loc_00491BCF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_0048E613(); /* call 0x0048E613 */

loc_00491BD8: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00491D9C; /* je: equal / zero */

loc_00491BE2: ;
    if (TEST_Z(MEM8(ebx), 0x20)) goto loc_00491D9C; /* je: equal / zero */

loc_00491BEB: ;
    if (CMP_NE(MEM8(ebx + 2), 3)) goto loc_00491D9C; /* jne: not equal / not zero */

loc_00491BF5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edi = esi + 0x10;
    POP32(esp, ecx);
    esi = ebx + 0x44;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_00491D9B; /* jne: not equal / not zero */

loc_00491C09: ;
    edi = MEM32(ebp + 0x14);
    eax = MEM32(edi + 0xC);
    if (TEST_Z(eax, 0xFFFFFF00u)) goto loc_00491D9B; /* je: equal / zero */

loc_00491C1A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00491D9B; /* jne: not equal / not zero */

loc_00491C22: ;
    PUSH32(esp, 0x5883);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00493126(); /* call 0x00493126 */

loc_00491C30: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00491D9B; /* je: equal / zero */

loc_00491C3A: ;
    eax = ZX16(MEM16(esi + 2));
    eax = eax - edi;
    eax = eax + esi;
    if (CMP_NE(eax, MEM32(ebp + 0x18))) goto loc_00491D9B; /* jne: not equal / not zero */

loc_00491C4B: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0xAEC);
    if (TEST_Z(ecx, ecx)) goto loc_00491C68; /* je: equal / zero */

loc_00491C58: ;
    PUSH32(esp, MEM32(ebx + 0xC0));
    PUSH32(esp, 0); sub_004A3B6F(); /* call 0x004A3B6F */

loc_00491C63: ;
    MEM32(ebp + 0x14) = eax;
    goto loc_00491C6C;

loc_00491C68: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;

loc_00491C6C: ;
    if (CMP_NE(MEM16(esi), 0x5883)) goto loc_00491D9B; /* jne: not equal / not zero */

loc_00491C77: ;
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) goto loc_00491D9B; /* je: equal / zero */

loc_00491C81: ;
    eax = MEM32(ebx + 0xE0);
    if (CMP_B(eax, 8)) goto loc_00491C8F; /* jb: below (unsigned <) */

loc_00491C8C: ;
    PUSH32(esp, 8);
    POP32(esp, eax);

loc_00491C8F: ;
    ecx = ZX16(MEM16(esi + 2));
    ecx = ecx - 4;
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebx + 0xE8;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebx + 0xC0));
    ecx = MEM32(eax + 0xAEC);
    PUSH32(esp, 0); sub_004A3B9B(); /* call 0x004A3B9B */

loc_00491CBD: ;
    if (TEST_Z(eax, eax)) goto loc_00491D9B; /* je: equal / zero */

loc_00491CC5: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, 0x14);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esi - edi;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax + 0xC0;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0); sub_004930B5(); /* call 0x004930B5 */

loc_00491CE6: ;
    if (TEST_Z(eax, eax)) goto loc_00491D9B; /* je: equal / zero */

loc_00491CEE: ;
    SET_LO16(eax, MEM16(edi + 6));
    if (TEST_Z(LO8(eax), 1)) goto loc_00491D0A; /* je: equal / zero */

loc_00491CF6: ;
    MEM16(ebx + 0xB6) = 8;
    MEM16(ebx + 0x84) = 8;
    goto loc_00491D24;

loc_00491D0A: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_00491D9B; /* je: equal / zero */

loc_00491D12: ;
    MEM16(ebx + 0xB6) = 0x18;
    MEM16(ebx + 0x84) = 0x18;

loc_00491D24: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    MEM32(ebx + 0x4C) = eax;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebx + 0x50) = eax;
    eax = MEM32(ebx + 0x12C);
    PUSH32(esp, 0x10);
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0048DDA5(); /* call 0x0048DDA5 */

loc_00491D4C: ;
    eax = MEM32(edi + 0xC);
    MEM32(ebx + 8) = eax;
    eax = ZX16(MEM16(edi + 0x22));
    eax = eax + eax * 4;
    MEM32(ebx + 0x24) = eax;
    eax = ZX16(MEM16(edi + 0x20));
    ecx = MEM32(ebp + -4);
    eax = eax + eax * 4;
    MEM32(ebx + 0x28) = eax;
    eax = 0; /* xor self */
    edi = ebx + 0xC4;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(ebx + 0xD8) = MEM32(ebx + 0xD8) & 0;
    MEM16(ebx + 0xDC) = MEM16(ebx + 0xDC) & 0;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_00491D90: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00491364(); /* call 0x00491364 */

loc_00491D9B: ;
    POP32(esp, edi);

loc_00491D9C: ;
    POP32(esp, ebx);

loc_00491D9D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00491DA2
 * Original: 0x00491DA2 - 0x00491DD6 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491DA2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00491DA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax + 0xA;
    esi = ebx + 0x1E0;
    edx = 0; /* xor self */
    /* repe cmpsw - string compare, ecx iterations */
    MEM32(ebp + -4) = ebx;
    if (0 /* strings differed (repe cmpsb) */) { sub_00491DD6(); return; } /* jne: not equal / not zero */

loc_00491DC6: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x100007F;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00491EBC(); return; /* tail jmp 0x00491EBC */

}

/**
 * sub_00491EC3
 * Original: 0x00491EC3 - 0x00491F4E (139 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491EC3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00491EC3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + 8;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_00491ED1: ;
    if (TEST_Z(eax, eax)) { sub_00491F4E(); return; } /* je: equal / zero */

loc_00491ED5: ;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(eax, MEM32(esi + 0x268))) { sub_00491F4E(); return; } /* je: equal / zero */

loc_00491EE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00491EE7: ;
    ecx = MEM32(esi + 0xAEC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(ecx, ecx)) goto loc_00491EFD; /* je: equal / zero */

loc_00491EF3: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004A3B6F(); /* call 0x004A3B6F */

loc_00491EFB: ;
    goto loc_00491EFF;

loc_00491EFD: ;
    eax = 0; /* xor self */

loc_00491EFF: ;
    if (TEST_Z(eax, eax)) goto loc_00491F47; /* je: equal / zero */

loc_00491F03: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0048E59E(); /* call 0x0048E59E */

loc_00491F11: ;
    if (TEST_NZ(eax, eax)) goto loc_00491F2D; /* jne: not equal / not zero */

loc_00491F15: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004912FC(); /* call 0x004912FC */

loc_00491F22: ;
    if (TEST_NZ(eax, eax)) goto loc_00491F2D; /* jne: not equal / not zero */

loc_00491F26: ;
    esi = 0x2776;
    goto loc_00491F3A;

loc_00491F2D: ;
    MEM8(eax) = MEM8(eax) | 0x10;
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    esi = 0; /* xor self */

loc_00491F3A: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00491F42: ;
    eax = esi;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00491F53(); return; /* tail jmp 0x00491F53 */

loc_00491F47: ;
    esi = 0x2726;
    goto loc_00491F3A;

}

/**
 * sub_00491F58
 * Original: 0x00491F58 - 0x00492060 (264 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00491F58(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00491F58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    (void)0; /* cmp edi, 4 - flags set for next jcc */
    ebx = ecx;
    if (CMP_B(edi, 4)) goto loc_0049205A; /* jb: below (unsigned <) */

loc_00491F6B: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004930EE(); /* call 0x004930EE */

loc_00491F76: ;
    if (TEST_Z(eax, eax)) goto loc_00492059; /* je: equal / zero */

loc_00491F7E: ;
    SET_LO16(edx, MEM16(esi));
    if (CMP_EQ(LO16(edx), 0x5800)) goto loc_00492047; /* je: equal / zero */

loc_00491F8C: ;
    if (CMP_EQ(LO16(edx), 0x5801)) goto loc_00492047; /* je: equal / zero */

loc_00491F97: ;
    (void)0; /* cmp LO16(edx), 0x5803 - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    if (CMP_NE(LO16(edx), 0x5803)) goto loc_00491FC0; /* jne: not equal / not zero */

loc_00491FA4: ;
    if (TEST_Z(eax, eax)) goto loc_00491FC0; /* je: equal / zero */

loc_00491FA8: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00491FC0; /* je: equal / zero */

loc_00491FAD: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0); sub_004918BE(); /* call 0x004918BE */

loc_00491FBB: ;
    goto loc_00492059;

loc_00491FC0: ;
    if (CMP_NE(LO16(edx), 0x5804)) goto loc_00491FD0; /* jne: not equal / not zero */

loc_00491FC7: ;
    if (TEST_NZ(eax, eax)) goto loc_00491FD0; /* jne: not equal / not zero */

loc_00491FCB: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00491FE0; /* je: equal / zero */

loc_00491FD0: ;
    if (CMP_NE(LO16(edx), 0x5805)) goto loc_00491FF0; /* jne: not equal / not zero */

loc_00491FD7: ;
    if (TEST_Z(eax, eax)) goto loc_00491FF0; /* je: equal / zero */

loc_00491FDB: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00491FF0; /* je: equal / zero */

loc_00491FE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0); sub_004908E4(); /* call 0x004908E4 */

loc_00491FEE: ;
    goto loc_00492059;

loc_00491FF0: ;
    if (CMP_NE(LO16(edx), 0x5809)) goto loc_00492010; /* jne: not equal / not zero */

loc_00491FF7: ;
    if (TEST_Z(eax, eax)) goto loc_00492059; /* je: equal / zero */

loc_00491FFB: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00492010; /* je: equal / zero */

loc_00492000: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0); sub_00491BB7(); /* call 0x00491BB7 */

loc_0049200E: ;
    goto loc_00492059;

loc_00492010: ;
    if (TEST_Z(eax, eax)) goto loc_00492059; /* je: equal / zero */

loc_00492014: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00492059; /* je: equal / zero */

loc_00492019: ;
    if (CMP_NE(LO16(edx), 0x5806)) goto loc_00492030; /* jne: not equal / not zero */

loc_00492020: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0); sub_00495B91(); /* call 0x00495B91 */

loc_0049202E: ;
    goto loc_00492059;

loc_00492030: ;
    if (CMP_NE(LO16(edx), 0x5807)) goto loc_00492059; /* jne: not equal / not zero */

loc_00492037: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0); sub_00496449(); /* call 0x00496449 */

loc_00492045: ;
    goto loc_00492059;

loc_00492047: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004913B9(); /* call 0x004913B9 */

loc_00492059: ;
    POP32(esp, esi);

loc_0049205A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00492060
 * Original: 0x00492060 - 0x004922C2 (610 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00492060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edx;
    if (CMP_B(ebx, 4)) goto loc_004922BB; /* jb: below (unsigned <) */

loc_0049207A: ;
    edi = MEM32(ebp + 0x14);
    eax = ZX16(MEM16(edi + 2));
    if (CMP_NE(ebx, eax)) goto loc_004922BB; /* jne: not equal / not zero */

loc_00492089: ;
    SET_LO16(eax, MEM16(edi));
    if (CMP_NE(LO16(eax), 0x5300)) goto loc_004920C5; /* jne: not equal / not zero */

loc_00492092: ;
    if (CMP_NE(ebx, 8)) goto loc_004922BB; /* jne: not equal / not zero */

loc_0049209B: ;
    esi = MEM32(ebp + 0xC);
    MEM8(esi) = MEM8(esi) | LO8(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0048FB99(); /* call 0x0048FB99 */

loc_004920A8: ;
    eax = MEM32(ebp + -4);
    if (CMP_NE(esi, MEM32(eax + 0xAF4))) goto loc_004922BB; /* jne: not equal / not zero */

loc_004920B7: ;
    ecx = MEM32(edi + 4);
    MEM32(eax + 0xD0C) = ecx;
    goto loc_004922BB;

loc_004920C5: ;
    if (CMP_EQ(LO16(eax), 0x5301)) goto loc_004922BB; /* je: equal / zero */

loc_004920CF: ;
    if (CMP_NE(LO16(eax), 0x5309)) goto loc_004921E7; /* jne: not equal / not zero */

loc_004920D9: ;
    if (CMP_B(ebx, 8)) goto loc_004922BB; /* jb: below (unsigned <) */

loc_004920E2: ;
    if (TEST_NZ(LO8(ebx), 3)) goto loc_004922BB; /* jne: not equal / not zero */

loc_004920EB: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(eax, MEM32(edx + 0xAF4))) goto loc_004922BB; /* jne: not equal / not zero */

loc_004920FA: ;
    eax = edx + 0xD04;
    ecx = MEM32(eax);
    if (CMP_BE(ecx & ecx, 0)) goto loc_00492115; /* jbe: below or equal (unsigned <=) */

loc_00492106: ;
    if (CMP_B(MEM32(edi + 4), ecx)) goto loc_00492115; /* jb: below (unsigned <) */

loc_0049210B: ;
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(edx + 0xD00) = MEM32(edx + 0xD00) & 0;

loc_00492115: ;
    ebx = ebx - 8;
    esi = edi + 8;
    if ((ebx == 0)) goto loc_00492126; /* je: equal / zero */

loc_0049211D: ;
    eax = MEM32(ebp + 0x10);
    MEM32(edx + 0xD08) = eax;

loc_00492126: ;
    eax = esi + ebx;
    MEM32(ebp + 0xC) = eax;
    goto loc_004921DA;

loc_00492131: ;
    if (CMP_B(ebx, 8)) goto loc_004922BB; /* jb: below (unsigned <) */

loc_0049213A: ;
    eax = MEM32(esi);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    ecx = esi + 8;
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 4);
    ebx = ebx - 8;
    (void)0; /* cmp ecx, MEM32(ebp + 0xC) - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    esi = ecx;
    if (CMP_AE(ecx, MEM32(ebp + 0xC))) goto loc_00492181; /* jae: above or equal (unsigned >=) */

loc_00492156: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00492179; /* je: equal / zero */

loc_0049215C: ;
    edi = MEM32(ebp + 0xC);
    eax = eax & 3;
    edi = edi - esi;
    eax++;
    edi = (uint32_t)((int32_t)edi >> 2);
    if (CMP_A(eax, edi)) goto loc_0049217E; /* ja: above (unsigned >) */

loc_0049216C: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    esi = esi + eax * 4;
    if (CMP_B(esi, MEM32(ebp + 0xC))) goto loc_00492156; /* jb: below (unsigned <) */

loc_00492177: ;
    goto loc_00492181;

loc_00492179: ;
    esi = esi + 4;
    goto loc_00492181;

loc_0049217E: ;
    esi = MEM32(ebp + 0xC);

loc_00492181: ;
    eax = ecx;
    eax = eax - esi;
    ebx = ebx + eax;
    if (CMP_BE(MEM32(ebp + 8), 0)) goto loc_004921DA; /* jbe: below or equal (unsigned <=) */

loc_0049218D: ;
    eax = edx + 0xB00;
    edi = edx + 0xD00;
    if (CMP_AE(eax, edi)) goto loc_004921DA; /* jae: above or equal (unsigned >=) */

loc_0049219D: ;
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ebp + -12))) goto loc_004921AC; /* jne: not equal / not zero */

loc_004921A4: ;
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, MEM32(ebp + -8))) goto loc_004921C0; /* je: equal / zero */

loc_004921AC: ;
    edx = MEM32(ebp + -4);
    eax = eax + 0x80;
    edx = edx + 0xD00;
    if (CMP_B(eax, edx)) goto loc_0049219D; /* jb: below (unsigned <) */

loc_004921BE: ;
    goto loc_004921D7;

loc_004921C0: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = eax - ecx;
    eax = eax - 0xB00;
    eax = (uint32_t)((int32_t)eax >> 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048EB99(); /* call 0x0048EB99 */

loc_004921D7: ;
    edx = MEM32(ebp + -4);

loc_004921DA: ;
    if (CMP_A(ebx & ebx, 0)) goto loc_00492131; /* ja: above (unsigned >) */

loc_004921E2: ;
    goto loc_004922BB;

loc_004921E7: ;
    if (CMP_NE(LO16(eax), 0x5304)) goto loc_00492229; /* jne: not equal / not zero */

loc_004921ED: ;
    if (CMP_B(ebx, 0x18)) goto loc_004922BB; /* jb: below (unsigned <) */

loc_004921F6: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(eax, MEM32(edx + 0xAF4))) goto loc_004922BB; /* jne: not equal / not zero */

loc_00492205: ;
    ebx = ebx + 0xFFFFFFE8u;
    PUSH32(esp, ebx);
    edi = edi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM16(eax) = MEM16(eax) & 0;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = MEM32(eax) & 0;
    ecx = edx;
    PUSH32(esp, 0); sub_00491F58(); /* call 0x00491F58 */

loc_00492224: ;
    goto loc_004922BB;

loc_00492229: ;
    if (CMP_NE(LO16(eax), 0x5308)) goto loc_00492240; /* jne: not equal / not zero */

loc_0049222F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00496823(); /* call 0x00496823 */

loc_0049223E: ;
    goto loc_004922BB;

loc_00492240: ;
    if (CMP_NE(LO16(eax), 0x5306)) goto loc_004922A4; /* jne: not equal / not zero */

loc_00492246: ;
    if (CMP_NE(ebx, 0xC)) goto loc_004922BB; /* jne: not equal / not zero */

loc_0049224B: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(MEM8(eax + 2), 8)) goto loc_004922BB; /* jne: not equal / not zero */

loc_00492254: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    ebx = MEM32(eax + 0xE0);
    ecx = eax + 0xE8;

loc_00492264: ;
    PUSH32(esp, 8);
    POP32(esp, esi);
    if (CMP_AE(ebx, esi)) goto loc_0049226D; /* jae: above or equal (unsigned >=) */

loc_0049226B: ;
    esi = ebx;

loc_0049226D: ;
    if (CMP_AE(MEM32(ebp + 0xC), esi)) goto loc_004922BB; /* jae: above or equal (unsigned >=) */

loc_00492272: ;
    esi = MEM32(edi + 4);
    if (CMP_NE(esi, MEM32(ecx))) goto loc_00492281; /* jne: not equal / not zero */

loc_00492279: ;
    esi = MEM32(edi + 8);
    if (CMP_EQ(esi, MEM32(ecx + 4))) goto loc_00492289; /* je: equal / zero */

loc_00492281: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    ecx = ecx + 8;
    goto loc_00492264;

loc_00492289: ;
    MEM8(eax + 2) = 7;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax + 0x34;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_0049229A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_0048EA2A(); /* call 0x0048EA2A */

loc_004922A2: ;
    goto loc_004922BB;

loc_004922A4: ;
    if (CMP_NE(LO16(eax), 0x530C)) goto loc_004922BB; /* jne: not equal / not zero */

loc_004922AA: ;
    eax = edx + 0xD20;
    if (CMP_NE(MEM32(eax), 4)) goto loc_004922BB; /* jne: not equal / not zero */

loc_004922B5: ;
    MEM32(eax) = 1;

loc_004922BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004922C2
 * Original: 0x004922C2 - 0x00492855 (1427 bytes, 472 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004922C2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004922C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x60;
    edx = MEM32(ebp + 0xC);
    (void)0; /* cmp MEM32(edx + 0xC), 0 - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    if (CMP_EQ(MEM32(edx + 0xC), 0)) goto loc_00492851; /* je: equal / zero */

loc_004922D8: ;
    if (CMP_B(MEM32(ebp + 0x14), 0xC)) goto loc_00492851; /* jb: below (unsigned <) */

loc_004922E2: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    (void)0; /* cmp MEM32(esi + 8), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(esi + 8), 0)) goto loc_00492317; /* jne: not equal / not zero */

loc_004922F1: ;
    eax = MEM32(ebp + 8);
    if (TEST_NZ(MEM8(eax + 0xB), 3)) goto loc_0049284F; /* jne: not equal / not zero */

loc_004922FE: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    edi = esi + 0xC;
    esi = ZX16(MEM16(esi));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edx + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00491F58(); /* call 0x00491F58 */

loc_00492312: ;
    goto loc_0049284F;

loc_00492317: ;
    ecx = MEM32(ebp + 8);
    edi = MEM32(ecx + 8);
    edi = edi & 0xFFFFFFFCu;
    edi = edi | 4;
    MEM32(ecx + 8) = edi;
    eax = MEM32(esi + 8);
    eax = eax & 0xFFFFFF00u;
    (void)0; /* cmp MEM32(ebp + 0x14), 0xC - flags set for next jcc */
    MEM32(ebp + -36) = edi;
    if (CMP_B(MEM32(ebp + 0x14), 0xC)) goto loc_0049284F; /* jb: below (unsigned <) */

loc_0049233B: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(edx + 0x10), 0xFFFFFFFFu - flags set for next jcc */
    edx = ZX16(MEM16(ecx + 4));
    SET_LO8(ebx, (CMP_EQ(MEM32(edx + 0x10), 0xFFFFFFFFu)) ? 1 : 0); /* sete */
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    MEM32(ebp + -40) = ebx;
    (void)0; /* cmp MEM32(ebp + -40), 0 - flags set for next jcc */
    ebx = MEM32(ecx);
    edx = edx + ebx + -12;
    ebx = ZX16(MEM16(edx));
    MEM32(ebp + -44) = edx;
    edx = esi + 0xC;
    MEM32(ebp + -80) = edx;
    if (CMP_EQ(MEM32(ebp + -40), 0)) goto loc_004923A7; /* je: equal / zero */

loc_0049236C: ;
    if (TEST_NZ(eax, eax)) goto loc_0049284E; /* jne: not equal / not zero */

loc_00492374: ;
    eax = MEM32(ebp + -12);
    edx = eax + 0xA98;
    MEM32(ebp + -56) = edx;
    edx = eax + 0xAA8;
    eax = eax + 0xAC0;
    MEM32(ebp + -60) = eax;
    eax = ebx;
    eax = eax << 0x10;
    ebx = ebx | eax;
    MEM32(ebp + -68) = edx;
    MEM32(ebp + -64) = 0x18;
    MEM32(ebp + -48) = ebx;
    goto loc_00492428;

loc_004923A7: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048E613(); /* call 0x0048E613 */

loc_004923B0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (TEST_Z(eax, eax)) goto loc_0049284E; /* je: equal / zero */

loc_004923BB: ;
    if (CMP_B(MEM8(eax + 2), 4)) goto loc_0049284E; /* jb: below (unsigned <) */

loc_004923C5: ;
    ecx = ZX16(MEM16(eax + 0xC));
    if (CMP_AE(ebx, ecx)) goto loc_004923D3; /* jae: above or equal (unsigned >=) */

loc_004923CD: ;
    ebx = ebx + 0x10000;

loc_004923D3: ;
    edx = MEM32(eax + 0xC);
    ecx = edx;
    ecx = ecx & 0xFFFF0000u;
    ebx = ebx + ecx;
    ecx = ebx;
    ecx = ecx - edx;
    (void)0; /* cmp ecx, 0x1000 - flags set for next jcc */
    MEM32(ebp + -48) = ebx;
    MEM32(ebp + -72) = ecx;
    if (CMP_A(ecx, 0x1000)) goto loc_0049284E; /* ja: above (unsigned >) */

loc_004923F6: ;
    if (CMP_AE(ecx, 0x20)) goto loc_00492409; /* jae: above or equal (unsigned >=) */

loc_004923FB: ;
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    if (TEST_NZ(MEM32(eax + 0x10), edx)) goto loc_0049284E; /* jne: not equal / not zero */

loc_00492409: ;
    ecx = eax + 0x54;
    MEM32(ebp + -56) = ecx;
    ecx = eax + 0x64;
    MEM32(ebp + -68) = ecx;
    ecx = ZX16(MEM16(eax + 0x84));
    eax = eax + 0x7C;
    MEM32(ebp + -64) = ecx;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -60) = eax;

loc_00492428: ;
    ebx = ebx >> 0x10;
    MEM16(ecx + 6) = LO16(ebx);
    SET_LO8(eax, MEM8(esi + 8));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    (void)0; /* cmp LO8(ecx), 0xF - flags set for next jcc */
    MEM32(ebp + -76) = ebx;
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_A(LO8(ecx), 0xF)) goto loc_0049284E; /* ja: above (unsigned >) */

loc_00492446: ;
    esi = ZX8(LO8(eax));
    eax = 0; /* xor self */
    esi = esi >> 5;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = eax;
    eax = esi;
    eax = eax << 4;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -8) = eax;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0049247A; /* jne: not equal / not zero */

loc_00492469: ;
    ebx = MEM32(ebp + 0x14);
    eax = eax | 4;
    MEM32(ebp + -8) = eax;
    ebx = ebx + 0xFFFFFFF4u;
    goto loc_00492529;

loc_0049247A: ;
    eax = ZX8(LO8(ecx));
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 3);
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = edx;
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    eax = eax << 0x10;
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    MEM32(ebp + -52) = edx;
    edx = edx + edx;
    (void)0; /* cmp LO8(ecx), 1 - flags set for next jcc */
    MEM8(ebp + -1) = LO8(ecx);
    MEM32(ebp + -28) = edx;
    if (CMP_NE(LO8(ecx), 1)) goto loc_004924A8; /* jne: not equal / not zero */

loc_0049249E: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 5;
    edx = edx + 0xC;
    MEM32(ebp + -28) = edx;

loc_004924A8: ;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEM32(ebp + -16) = esi;
    if (CMP_B(esi, edx)) goto loc_004924B2; /* jb: below (unsigned <) */

loc_004924AF: ;
    MEM32(ebp + -16) = edx;

loc_004924B2: ;
    ebx = MEM32(ebp + 0x14);
    edi = edx;
    edi = edi - MEM32(ebp + -16);
    eax = edi + esi + 0xC;
    if (CMP_B(ebx, eax)) goto loc_0049284E; /* jb: below (unsigned <) */

loc_004924C6: ;
    eax = MEM32(ebp + -16);
    eax = eax - edx;
    (void)0; /* cmp LO8(ecx), 4 - flags set for next jcc */
    ebx = eax + ebx + -12;
    if (CMP_NE(LO8(ecx), 4)) goto loc_004924DA; /* jne: not equal / not zero */

loc_004924D4: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 6;
    goto loc_00492526;

loc_004924DA: ;
    if (CMP_B(LO8(ecx), 7)) goto loc_00492526; /* jb: below (unsigned <) */

loc_004924DF: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 7;
    if (CMP_NE(LO8(ecx), 7)) goto loc_0049251C; /* jne: not equal / not zero */

loc_004924E8: ;
    ecx = MEM32(ebp + -44);
    ecx = ZX8(MEM8(ecx + -1));
    edx = ecx;
    edx = edx << 8;
    edx = edx | 0x80;
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    ebx = ecx;
    ecx = MEM32(ebp + 0x14);
    ebx = ebx << 3;
    edx = edi + ebx + 0xD;
    if (CMP_B(ecx, edx)) goto loc_0049284E; /* jb: below (unsigned <) */

loc_00492511: ;
    eax = eax - ebx;
    eax = eax + ecx + -12;
    MEM32(ebp + -24) = eax;
    goto loc_00492526;

loc_0049251C: ;
    if (CMP_NE(LO8(ecx), 0xA)) goto loc_00492526; /* jne: not equal / not zero */

loc_00492521: ;
    MEM32(ebp + -24) = ebx;
    ebx = 0; /* xor self */

loc_00492526: ;
    edi = MEM32(ebp + -36);

loc_00492529: ;
    if (TEST_NZ(LO8(ebx), 7)) goto loc_0049284E; /* jne: not equal / not zero */

loc_00492532: ;
    if (CMP_B(ebx, esi)) goto loc_0049284E; /* jb: below (unsigned <) */

loc_0049253A: ;
    eax = MEM32(ebp + -24);
    eax = eax - MEM32(ebp + -16);
    ecx = MEM32(ebp + -28);
    ecx = ecx + eax;
    eax = ecx + ebx + 0xC;
    if (CMP_NE(MEM32(ebp + 0x14), eax)) goto loc_0049284E; /* jne: not equal / not zero */

loc_00492552: ;
    edi = edi | MEM32(ebp + -8);
    (void)0; /* cmp MEM32(ebp + -40), 0 - flags set for next jcc */
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = edi;
    if (CMP_EQ(MEM32(ebp + -40), 0)) goto loc_00492578; /* je: equal / zero */

loc_00492561: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -24);
    eax = eax >> 7;
    eax = eax & 1;
    edx = edx - eax;
    if (CMP_NE(edx, 8)) goto loc_0049284E; /* jne: not equal / not zero */

loc_00492578: ;
    eax = MEM32(ebp + -44);
    SET_LO16(edx, MEM16(ebp + -76));
    eax = eax + 2;
    esi = eax;
    edi = ebp + -96;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    edi = MEM32(ebp + -80);
    MEM16(eax) = LO16(edx);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(eax + 8);
    eax = MEM32(ebp + -44);
    PUSH32(esp, 0xA);
    MEM32(eax + 4) = edx;
    esi = 0; /* xor self */
    MEM32(eax + 8) = esi;
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ecx + 0xB;
    ecx = ecx & 0xFFFFFFFCu;
    PUSH32(esp, ecx);
    eax = ebx + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -56));
    PUSH32(esp, 0); sub_004930B5(); /* call 0x004930B5 */

loc_004925BF: ;
    if (TEST_NZ(eax, eax)) goto loc_0049261A; /* jne: not equal / not zero */

loc_004925C3: ;
    if (CMP_EQ(MEM32(ebp + -40), esi)) goto loc_0049284E; /* je: equal / zero */

loc_004925CC: ;
    eax = MEM32(ebp + -28);
    eax = eax - MEM32(ebp + -16);
    ecx = MEM32(0x10118);
    eax = eax + ebx;
    eax = eax + edi;
    edx = MEM32(eax);
    eax = eax + 4;
    if (CMP_NE(edx, MEM32(ecx + 8))) goto loc_0049284E; /* jne: not equal / not zero */

loc_004925EA: ;
    ecx = MEM32(ecx + 0xAC);
    eax = MEM32(eax);
    if (CMP_AE(eax, ecx)) goto loc_00492605; /* jae: above or equal (unsigned >=) */

loc_004925F6: ;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xAE8) = MEM32(eax + 0xAE8) | 1;
    goto loc_0049284E;

loc_00492605: ;
    if (0) goto loc_0049284E; /* jbe: below or equal (unsigned <=) */

loc_0049260B: ;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xAE8) = MEM32(eax + 0xAE8) | 2;
    goto loc_0049284E;

loc_0049261A: ;
    if (CMP_BE(ebx, esi)) goto loc_0049266A; /* jbe: below or equal (unsigned <=) */

loc_0049261E: ;
    ecx = MEM32(ebp + -12);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, 0); sub_0048DEAF(); /* call 0x0048DEAF */

loc_00492630: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -64));
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0048DD50(); /* call 0x0048DD50 */

loc_00492645: ;
    ecx = MEM32(ebp + -32);
    if (CMP_BE(ecx, MEM32(ebp + -16))) goto loc_0049266A; /* jbe: below or equal (unsigned <=) */

loc_0049264D: ;
    eax = ebx;
    eax = eax - MEM32(ebp + -16);
    eax = eax + edi;
    ecx = ecx - MEM32(ebp + -16);
    if ((ecx == 0)) goto loc_0049266A; /* je: equal / zero */

loc_00492659: ;
    eax--;
    if (CMP_NE(MEM8(eax), 0)) goto loc_00492662; /* jne: not equal / not zero */

loc_0049265F: ;
    ecx--;
    if ((ecx != 0)) goto loc_00492659; /* jne: not equal / not zero */

loc_00492662: ;
    if (CMP_A(ecx, esi)) goto loc_0049284E; /* ja: above (unsigned >) */

loc_0049266A: ;
    if (CMP_NE(MEM32(ebp + -40), esi)) goto loc_0049273B; /* jne: not equal / not zero */

loc_00492673: ;
    edx = MEM32(ebp + -72);
    if (CMP_AE(edx, 0x20)) goto loc_0049268A; /* jae: above or equal (unsigned >=) */

loc_0049267B: ;
    esi = MEM32(ebp + -20);
    eax = 0; /* xor self */
    eax++;
    ecx = edx;
    eax = eax << LO8(ecx);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | eax;
    goto loc_004926B8;

loc_0049268A: ;
    (void)0; /* cmp edx, 0x3F - flags set for next jcc */
    eax = MEM32(ebp + -20);
    if (CMP_B(edx, 0x3F)) goto loc_0049269B; /* jb: below (unsigned <) */

loc_00492692: ;
    MEM32(eax + 0x10) = 0x80000000u;
    goto loc_004926AF;

loc_0049269B: ;
    esi = MEM32(eax + 0x10);
    ecx = edx + -31;
    esi = esi >> LO8(ecx);
    esi = esi | 0x80000000u;
    MEM32(eax + 0x10) = esi;
    eax = MEM32(ebp + -20);

loc_004926AF: ;
    esi = MEM32(ebp + -20);
    edx = edx + 0xFFFFFFE1u;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + edx;

loc_004926B8: ;
    SET_LO8(eax, MEM8(esi + 2));
    if (CMP_AE(LO8(eax), 7)) goto loc_00492724; /* jae: above or equal (unsigned >=) */

loc_004926BF: ;
    if (CMP_NE(LO8(eax), 5)) goto loc_004926EB; /* jne: not equal / not zero */

loc_004926C3: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00491364(); /* call 0x00491364 */

loc_004926CE: ;
    eax = MEM32(ebp + -12);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax + 0xAF8));
    MEM32(eax + 0xAF0) = 6;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_004926EB: ;
    if (TEST_Z(MEM8(esi), 2)) goto loc_00492709; /* je: equal / zero */

loc_004926F0: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    MEM32(esi + 0xB8) = eax;
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(eax));
    MEM16(esi + 0xBC) = LO16(eax);

loc_00492709: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    MEM8(esi + 2) = 7;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_0049271B: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049133C(); /* call 0x0049133C */

loc_00492724: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x1D8);
    MEM32(esi + 0x18) = eax;
    goto loc_0049273E;

loc_0049273B: ;
    esi = MEM32(ebp + -20);

loc_0049273E: ;
    if (CMP_NE(MEM8(ebp + -1), 0)) goto loc_0049275D; /* jne: not equal / not zero */

loc_00492744: ;
    ebx = ebx - MEM32(ebp + -32);
    ecx = MEM32(ebp + -12);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00492060(); /* call 0x00492060 */

loc_00492758: ;
    goto loc_0049284E;

loc_0049275D: ;
    if (CMP_NE(MEM32(ebp + -52), 0)) goto loc_00492774; /* jne: not equal / not zero */

loc_00492763: ;
    SET_LO16(eax, 0x3E8);
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(esi, LO16(ecx));
    MEM16(ebp + 0x14) = LO16(esi);
    goto loc_004927AF;

loc_00492774: ;
    esi = ebx;
    esi = esi - MEM32(ebp + -16);
    esi = esi + edi;
    if (CMP_NE(MEM32(ebp + -52), 1)) goto loc_004927A4; /* jne: not equal / not zero */

loc_00492781: ;
    SET_LO16(ecx, ZX8(MEM8(esi)));
    eax = 0x3E8;
    ecx = ecx + eax;
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    SET_LO16(ecx, ZX8(MEM8(esi + 1)));
    MEM16(ebp + 0x14) = LO16(edx);
    ecx = ecx + eax;
    SET_HI8(eax, LO8(ecx));
    SET_LO8(eax, HI8(ecx));
    SET_LO16(esi, LO16(eax));
    goto loc_004927AF;

loc_004927A4: ;
    SET_LO16(eax, MEM16(esi));
    SET_LO16(esi, MEM16(esi + 2));
    MEM16(ebp + 0x14) = LO16(eax);

loc_004927AF: ;
    (void)0; /* cmp MEM16(ebp + 0x14), 0 - flags set for next jcc */
    MEM16(ebp + 0x10) = LO16(esi);
    if (CMP_EQ(MEM16(ebp + 0x14), 0)) goto loc_0049284E; /* je: equal / zero */

loc_004927BE: ;
    if (TEST_Z(LO16(esi), LO16(esi))) goto loc_0049284E; /* je: equal / zero */

loc_004927C7: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    eax = eax & 7;
    if (CMP_EQ(eax, 2)) goto loc_004927DA; /* je: equal / zero */

loc_004927D5: ;
    if (CMP_NE(eax, 5)) goto loc_0049281D; /* jne: not equal / not zero */

loc_004927DA: ;
    ecx = MEM32(ebp + -44);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + -4));
    ecx = ecx + 0xFFFFFFF4u;
    eax = eax >> 2;
    eax = eax & 0x3C;
    if (CMP_B(eax, 0x14)) goto loc_0049284E; /* jb: below (unsigned <) */

loc_004927F0: ;
    edx = ebx;
    edx = edx - MEM32(ebp + -32);
    edx = edx + 0x14;
    if (CMP_A(eax, edx)) goto loc_0049284E; /* ja: above (unsigned >) */

loc_004927FC: ;
    eax = eax - 0x14;
    ebx = ebx - eax;
    ebx = ebx - MEM32(ebp + -32);
    eax = eax + edi;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049F717(); /* call 0x0049F717 */

loc_0049281B: ;
    goto loc_0049284E;

loc_0049281D: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -24);
    eax = eax >> 7;
    eax = eax & 1;
    ecx = ecx - eax;
    eax = MEM32(ebp + -28);
    eax = eax - MEM32(ebp + -16);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    eax = eax + ebx;
    ebx = ebx - MEM32(ebp + -32);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049D812(); /* call 0x0049D812 */

loc_0049284E: ;
    POP32(esp, ebx);

loc_0049284F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00492851: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00492855
 * Original: 0x00492855 - 0x0049297B (294 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492855(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00492855: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    (void)0; /* cmp edi, 8 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_B(edi, 8)) goto loc_00492976; /* jb: below (unsigned <) */

loc_0049286B: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(esi + 4));
    SET_HI8(edx, LO8(eax));
    SET_LO8(edx, HI8(eax));
    eax = ZX16(LO16(edx));
    if (CMP_NE(eax, edi)) goto loc_00492975; /* jne: not equal / not zero */

loc_00492882: ;
    SET_LO16(eax, MEM16(esi + 2));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00492975; /* je: equal / zero */

loc_0049288F: ;
    if (CMP_EQ(MEM16(esi), 0)) goto loc_00492975; /* je: equal / zero */

loc_00492899: ;
    if (CMP_EQ(LO16(eax), 0x20C)) goto loc_004928A8; /* je: equal / zero */

loc_0049289F: ;
    if (CMP_NE(LO16(eax), MEM16(ecx + 0x8CE))) goto loc_004928BA; /* jne: not equal / not zero */

loc_004928A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004922C2(); /* call 0x004922C2 */

loc_004928B5: ;
    goto loc_00492975;

loc_004928BA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0x10);
    if (CMP_EQ(ecx, 0x1000000)) goto loc_00492974; /* je: equal / zero */

loc_004928CD: ;
    edx = MEM32(ebp + 8);
    if (TEST_NZ(MEM8(edx + 0xB), 2)) goto loc_00492946; /* jne: not equal / not zero */

loc_004928D6: ;
    if (CMP_EQ(MEM16(esi + 6), 0)) goto loc_00492912; /* je: equal / zero */

loc_004928DD: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = eax;
    SET_LO16(eax, MEM16(esi + 4));
    PUSH32(esp, esi);
    MEM16(ebp + -6) = LO16(eax);
    PUSH32(esp, 0xC);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(ebp + -12) = ecx;
    MEM8(ebp + -8) = 0;
    MEM8(ebp + -7) = 0x11;
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_00492905: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_0049290B: ;
    if (CMP_NE(eax, 0xFFFF)) goto loc_00492974; /* jne: not equal / not zero */

loc_00492912: ;
    SET_LO16(eax, MEM16(esi + 2));
    if (CMP_NE(LO16(eax), 0x4400)) goto loc_0049292E; /* jne: not equal / not zero */

loc_0049291C: ;
    ecx = MEM32(ebp + -4);
    edi = edi + 0xFFFFFFF8u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00498D54(); /* call 0x00498D54 */

loc_0049292C: ;
    goto loc_00492974;

loc_0049292E: ;
    if (CMP_NE(LO16(eax), 0xE804)) goto loc_00492946; /* jne: not equal / not zero */

loc_00492934: ;
    ecx = MEM32(ebp + -4);
    edi = edi + 0xFFFFFFF8u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00494AE3(); /* call 0x00494AE3 */

loc_00492944: ;
    goto loc_00492974;

loc_00492946: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM32(ebx + 0xC), ecx)) goto loc_00492974; /* je: equal / zero */

loc_0049294D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    MEM16(ebp + 0xC) = LO16(eax);
    SET_LO16(eax, MEM16(esi));
    edi = edi + 0xFFFFFFF8u;
    PUSH32(esp, edi);
    esi = esi + 8;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM16(ebp + 0x14) = LO16(eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0049D812(); /* call 0x0049D812 */

loc_00492974: ;
    POP32(esp, ebx);

loc_00492975: ;
    POP32(esp, esi);

loc_00492976: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0049297B
 * Original: 0x0049297B - 0x00492B50 (469 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049297B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049297B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    (void)0; /* cmp MEM16(edi + 4), 0x14 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_B(MEM16(edi + 4), 0x14)) goto loc_00492B4B; /* jb: below (unsigned <) */

loc_00492993: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    SET_LO16(ecx, MEM16(esi + 2));
    eax = ZX8(MEM8(esi));
    SET_HI8(edx, LO8(ecx));
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 0xF0);
    (void)0; /* cmp LO8(ebx), 0x40 - flags set for next jcc */
    SET_LO8(edx, HI8(ecx));
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(ebp + 8) = ecx;
    edx = ZX16(LO16(edx));
    MEM32(ebp + -12) = edx;
    if (CMP_NE(LO8(ebx), 0x40)) goto loc_00492B49; /* jne: not equal / not zero */

loc_004929C2: ;
    eax = eax & 0xF;
    eax = eax << 2;
    ebx = eax;
    (void)0; /* cmp ebx, 0x14 - flags set for next jcc */
    MEM32(ebp + -16) = ebx;
    if (CMP_B(ebx, 0x14)) goto loc_00492B49; /* jb: below (unsigned <) */

loc_004929D6: ;
    if (CMP_A(ebx, edx)) goto loc_00492B49; /* ja: above (unsigned >) */

loc_004929DE: ;
    eax = ZX16(MEM16(edi + 4));
    if (CMP_A(edx, eax)) goto loc_00492B49; /* ja: above (unsigned >) */

loc_004929EA: ;
    eax = MEM32(edi + 8);
    if (TEST_Z(eax, 0x80000)) goto loc_00492A06; /* je: equal / zero */

loc_004929F4: ;
    edx = MEM32(ebp + -4);
    if (CMP_NE(ecx, MEM32(edx + 0x268))) goto loc_00492B49; /* jne: not equal / not zero */

loc_00492A03: ;
    edx = MEM32(ebp + -12);

loc_00492A06: ;
    (void)0; /* cmp ebx, 0x14 - flags set for next jcc */
    MEM16(edi + 4) = LO16(edx);
    if (CMP_BE(ebx, 0x14)) goto loc_00492A22; /* jbe: below or equal (unsigned <=) */

loc_00492A0F: ;
    ecx = ebx + -20;
    ecx = ecx & 0xFFFFFFFCu;
    ecx = ecx << 0x12;
    eax = eax & 0xFF0FFFFFu;
    ecx = ecx | eax;
    MEM32(edi + 8) = ecx;

loc_00492A22: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_00492A2B: ;
    if (CMP_NE(eax, 0xFFFF)) goto loc_00492B49; /* jne: not equal / not zero */

loc_00492A36: ;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_00492B49; /* je: equal / zero */

loc_00492A40: ;
    eax = MEM32(edi + 8);
    ecx = eax;
    ecx = ecx >> 0x18;
    ecx = ecx & 1;
    if ((ecx == 0)) goto loc_00492A57; /* je: equal / zero */

loc_00492A4D: ;
    if (CMP_NE(MEM32(ebp + 8), 0xFFFFFFFFu)) goto loc_00492B49; /* jne: not equal / not zero */

loc_00492A57: ;
    if (CMP_EQ(MEM32(ebp + -8), 0xFFFFFFFFu)) goto loc_00492B49; /* je: equal / zero */

loc_00492A61: ;
    if (TEST_NZ(eax, 0x2000000)) goto loc_00492ACF; /* jne: not equal / not zero */

loc_00492A68: ;
    if (CMP_EQ(MEM8(ebp + 8), 0x7F)) goto loc_00492B49; /* je: equal / zero */

loc_00492A72: ;
    if (CMP_EQ(MEM8(ebp + -8), 0x7F)) goto loc_00492B49; /* je: equal / zero */

loc_00492A7C: ;
    edx = MEM32(ebp + -4);
    edx = MEM32(edx + 0x268);
    if (CMP_NE(MEM32(ebp + -8), edx)) goto loc_00492A94; /* jne: not equal / not zero */

loc_00492A8A: ;
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_00492B49; /* jne: not equal / not zero */

loc_00492A94: ;
    if (TEST_NZ(ecx, ecx)) goto loc_00492ACF; /* jne: not equal / not zero */

loc_00492A98: ;
    if (CMP_EQ(MEM32(ebp + 8), 0xFFFFFFFFu)) goto loc_00492ACF; /* je: equal / zero */

loc_00492A9E: ;
    if (CMP_EQ(edx, MEM32(ebp + 8))) goto loc_00492ACF; /* je: equal / zero */

loc_00492AA3: ;
    SET_LO8(ecx, MEM8(esi + 9));
    if (CMP_NE(LO8(ecx), 0x11)) goto loc_00492ABC; /* jne: not equal / not zero */

loc_00492AAB: ;
    ecx = ebx + 8;
    if (CMP_B(MEM32(ebp + -12), ecx)) goto loc_00492ABC; /* jb: below (unsigned <) */

loc_00492AB3: ;
    if (CMP_EQ(MEM16(ebx + esi + 2), 0x4400)) goto loc_00492ACF; /* je: equal / zero */

loc_00492ABC: ;
    if (CMP_NE(MEM32(ebp + 8), 0x1000000)) goto loc_00492B49; /* jne: not equal / not zero */

loc_00492AC9: ;
    if (CMP_NE(MEM8(esi + 9), 0x11)) goto loc_00492B49; /* jne: not equal / not zero */

loc_00492ACF: ;
    SET_LO16(ecx, 0x3FFF);
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    if (TEST_Z(MEM16(esi + 6), LO16(edx))) goto loc_00492AF4; /* je: equal / zero */

loc_00492ADD: ;
    if (TEST_NZ(eax, 0x3000000)) goto loc_00492B49; /* jne: not equal / not zero */

loc_00492AE4: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00492B50(); /* call 0x00492B50 */

loc_00492AF2: ;
    goto loc_00492B49;

loc_00492AF4: ;
    SET_LO8(edx, MEM8(esi + 9));
    ecx = ebx + esi;
    ebx = MEM32(ebp + -12);
    ebx = ebx - MEM32(ebp + -16);
    if (CMP_NE(LO8(edx), 0x11)) goto loc_00492B1C; /* jne: not equal / not zero */

loc_00492B05: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFFBu;
    PUSH32(esp, esi);
    eax = eax | 3;
    PUSH32(esp, edi);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0); sub_00492855(); /* call 0x00492855 */

loc_00492B1A: ;
    goto loc_00492B49;

loc_00492B1C: ;
    if (CMP_NE(LO8(edx), 6)) goto loc_00492B38; /* jne: not equal / not zero */

loc_00492B21: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFFAu;
    PUSH32(esp, esi);
    eax = eax | 2;
    PUSH32(esp, edi);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0); sub_0048E0D6(); /* call 0x0048E0D6 */

loc_00492B36: ;
    goto loc_00492B49;

loc_00492B38: ;
    if (CMP_NE(LO8(edx), 1)) goto loc_00492B49; /* jne: not equal / not zero */

loc_00492B3D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049FB54(); /* call 0x0049FB54 */

loc_00492B49: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00492B4B: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00492B50
 * Original: 0x00492B50 - 0x00492E0D (701 bytes, 250 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00492B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(edi + 6));
    SET_HI8(ecx, LO8(eax));
    ebx = MEM32(esi + 0x8BC);
    MEM32(ebp + -4) = esi;
    SET_LO8(ecx, HI8(eax));
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    eax = eax >> 0xD;
    eax = eax & 1;
    MEM32(ebp + -20) = eax;
    SET_LO16(eax, MEM16(edi + 4));
    SET_HI8(edx, LO8(eax));
    ecx = ecx & 0x1FFF;
    MEM32(ebp + -8) = ecx;
    SET_LO8(edx, HI8(eax));
    eax = ZX16(LO16(edx));
    edx = ZX8(MEM8(edi + 9));
    eax = eax << 0x10;
    eax = eax | edx;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00492BC5; /* je: equal / zero */

loc_00492BA1: ;
    if (CMP_NE(MEM32(ebx + 0x2C), eax)) goto loc_00492BB6; /* jne: not equal / not zero */

loc_00492BA6: ;
    edx = MEM32(ebx + 0x24);
    if (CMP_NE(edx, MEM32(edi + 0xC))) goto loc_00492BB6; /* jne: not equal / not zero */

loc_00492BAE: ;
    edx = MEM32(ebx + 0x28);
    if (CMP_EQ(edx, MEM32(edi + 0x10))) goto loc_00492BBD; /* je: equal / zero */

loc_00492BB6: ;
    ebx = MEM32(ebx + 0xC);
    if (TEST_NZ(ebx, ebx)) goto loc_00492BA1; /* jne: not equal / not zero */

loc_00492BBD: ;
    if (TEST_NZ(ebx, ebx)) goto loc_00492C90; /* jne: not equal / not zero */

loc_00492BC5: ;
    eax = ZX8(MEM8(esi + 8));
    if (CMP_AE(MEM32(esi + 0x8C4), eax)) goto loc_00492E06; /* jae: above or equal (unsigned >=) */

loc_00492BD5: ;
    ecx = ZX8(MEM8(esi + 9));
    PUSH32(esp, 8);
    ecx = ecx << 8;
    POP32(esp, ebx);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    PUSH32(esp, 0x48DBF2);
    eax = eax + 7;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = eax + 0x47;
    eax = eax & 0xFFFFFFFCu;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40001);
    PUSH32(esp, 0x6C54454E);
    ecx = esi;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0); sub_004937A4(); /* call 0x004937A4 */

loc_00492C0D: ;
    ebx = eax;
    eax = 0; /* xor self */
    if (CMP_EQ(ebx, eax)) goto loc_00492E06; /* je: equal / zero */

loc_00492C19: ;
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) | 0xFFFFFFFFu;
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x20) = 0x48DC26;
    ecx = MEM32(edi + 0xC);
    MEM32(ebx + 0x24) = ecx;
    ecx = MEM32(edi + 0x10);
    MEM32(ebx + 0x28) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(ebx + 0x2C) = ecx;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xFFFFFFBCu;
    edx = ecx;
    MEM32(ebx + 0x30) = eax;
    MEM32(ebx + 0x34) = eax;
    MEM32(ebx + 0x38) = eax;
    MEM32(ebx + 0x3C) = eax;
    MEM32(ebx + 0x40) = eax;
    ecx = ecx >> 2;
    edi = ebx + 0x44;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = ZX8(MEM8(esi + 0x15));
    eax = eax + eax * 4;
    eax = eax + MEM32(esi + 0x1D8);
    ecx = esi;
    PUSH32(esp, eax);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_00492C78: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x8BC;
    PUSH32(esp, 0); sub_00492F04(); /* call 0x00492F04 */

loc_00492C84: ;
    MEM32(esi + 0x8C4) = MEM32(esi + 0x8C4) + 1;
    ecx = MEM32(ebp + -8);
    edi = MEM32(ebp + 0xC);

loc_00492C90: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(ebp + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_00492CD0; /* jne: not equal / not zero */

loc_00492C97: ;
    eax = MEM32(ebx + 0x30);
    if (CMP_BE(eax & eax, 0)) goto loc_00492CAB; /* jbe: below or equal (unsigned <=) */

loc_00492C9E: ;
    if (CMP_NE(eax, edx)) goto loc_00492DFE; /* jne: not equal / not zero */

loc_00492CA6: ;
    goto loc_00492E06;

loc_00492CAB: ;
    esi = edi;
    edi = MEM32(ebx);
    edi = edi - edx;
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    edi = edi + 0x3C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    edi = MEM32(ebp + 0xC);
    MEM32(ebx + 0x30) = edx;

loc_00492CD0: ;
    eax = MEM32(ebp + 0x14);
    eax = eax - edx;
    MEM32(ebp + 0x14) = eax;
    if ((eax == 0)) goto loc_00492D9E; /* je: equal / zero */

loc_00492CDE: ;
    edx = ecx;
    edx = edx << 3;
    MEM32(ebp + -16) = edx;
    edx = edx + eax;
    eax = eax + 7;
    eax = eax >> 3;
    eax = eax + ecx;
    MEM32(ebp + 0xC) = ecx;
    ecx = ZX16(MEM16(ebx + 4));
    MEM32(ebp + -12) = edx;
    edx = edx + 0x3C;
    if (CMP_A(edx, ecx)) goto loc_00492DFE; /* ja: above (unsigned >) */

loc_00492D05: ;
    if (CMP_EQ(MEM32(ebp + -20), 0)) goto loc_00492D11; /* je: equal / zero */

loc_00492D0B: ;
    (void)0; /* test MEM8(ebp + 0x14), 7 - flags set for next jcc */
    goto loc_00492D2F;

loc_00492D11: ;
    ecx = MEM32(ebx + 0x34);
    if (TEST_NZ(ecx, ecx)) goto loc_00492D2C; /* jne: not equal / not zero */

loc_00492D18: ;
    if (CMP_AE(MEM32(ebx + 0x40), eax)) goto loc_00492DFE; /* jae: above or equal (unsigned >=) */

loc_00492D21: ;
    ecx = MEM32(ebp + -12);
    MEM32(ebx + 0x34) = ecx;
    MEM32(ebx + 0x3C) = eax;
    goto loc_00492D35;

loc_00492D2C: ;
    (void)0; /* cmp ecx, MEM32(ebp + -12) - flags set for next jcc */

loc_00492D2F: ;
    if (CMP_NE(ecx, MEM32(ebp + -12))) goto loc_00492DFE; /* jne: not equal / not zero */

loc_00492D35: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    esi = edi + edx;
    edx = MEM32(ebx);
    edi = MEM32(ebp + -16);
    edi = edi + edx + 0x3C;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x3C);
    if (TEST_Z(ecx, ecx)) goto loc_00492D64; /* je: equal / zero */

loc_00492D5C: ;
    if (CMP_A(eax, ecx)) goto loc_00492DFB; /* ja: above (unsigned >) */

loc_00492D64: ;
    if (CMP_AE(MEM32(ebx + 0x40), eax)) goto loc_00492D6C; /* jae: above or equal (unsigned >=) */

loc_00492D69: ;
    MEM32(ebx + 0x40) = eax;

loc_00492D6C: ;
    if (CMP_AE(MEM32(ebp + -8), eax)) goto loc_00492D9B; /* jae: above or equal (unsigned >=) */

loc_00492D71: ;
    ecx = MEM32(ebp + 0xC);
    edx = ecx;
    edx = edx >> 3;
    esi = edx + ebx + 0x44;
    ecx = ecx & 7;
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx++;
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) + ecx;
    MEM8(esi) = MEM8(esi) | LO8(edx);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    if (CMP_B(MEM32(ebp + 0xC), eax)) goto loc_00492D71; /* jb: below (unsigned <) */

loc_00492D9B: ;
    esi = MEM32(ebp + -4);

loc_00492D9E: ;
    eax = MEM32(ebx + 0x30);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_00492E06; /* je: equal / zero */

loc_00492DA7: ;
    ecx = MEM32(ebx + 0x34);
    if (CMP_EQ(ecx, edx)) goto loc_00492E06; /* je: equal / zero */

loc_00492DAE: ;
    edi = MEM32(ebx + 0x38);
    if (CMP_NE(edi, MEM32(ebx + 0x3C))) goto loc_00492E06; /* jne: not equal / not zero */

loc_00492DB6: ;
    PUSH32(esp, 0x3C);
    POP32(esp, edi);
    edi = edi - eax;
    MEM32(ebx) = MEM32(ebx) + edi;
    edi = MEM32(ebx);
    eax = eax + ecx;
    ecx = MEM32(ebx + 8);
    ecx = ecx & 0xFFFFFFF9u;
    ecx = ecx | 1;
    MEM32(ebx + 8) = ecx;
    MEM16(ebx + 4) = LO16(eax);
    SET_HI8(ecx, LO8(eax));
    MEM16(edi + 6) = LO16(edx);
    MEM16(edi + 0xA) = LO16(edx);
    SET_LO8(ecx, HI8(eax));
    MEM16(edi + 2) = LO16(ecx);
    PUSH32(esp, MEM32(ebx + 0x30));
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0049FA18(); /* call 0x0049FA18 */

loc_00492DEB: ;
    eax = ~eax;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM16(edi + 0xA) = LO16(eax);
    PUSH32(esp, 0); sub_0049297B(); /* call 0x0049297B */

loc_00492DF9: ;
    goto loc_00492DFE;

loc_00492DFB: ;
    esi = MEM32(ebp + -4);

loc_00492DFE: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_0048DBF2(); /* call 0x0048DBF2 */

loc_00492E06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00492E0D
 * Original: 0x00492E0D - 0x00492EEF (226 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492E0D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00492E0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    SET_LO8(edx, MEM8(edi + 8));
    esi = eax;
    eax = eax >> 4;
    eax = eax & 7;
    ecx = eax;
    esi = esi >> 5;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = ecx;
    SET_LO8(edx, LO8(edx) & 7);
    esi = esi & 0x7F8;
    SET_LO8(ecx, LO8(ecx) << 5);
    (void)0; /* cmp LO8(edx), 4 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = eax;
    if (CMP_BE(LO8(edx), 4)) goto loc_00492EA8; /* jbe: below or equal (unsigned <=) */

loc_00492E46: ;
    eax = MEM32(edi + 8);
    eax = eax >> 0x10;
    eax = eax & 3;
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    eax = eax << 1;
    (void)0; /* cmp LO8(edx), 6 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(LO8(edx), 6)) goto loc_00492E60; /* jne: not equal / not zero */

loc_00492E5B: ;
    SET_LO8(ecx, LO8(ecx) + 4);
    goto loc_00492E6D;

loc_00492E60: ;
    if (CMP_NE(LO8(edx), 5)) goto loc_00492E6D; /* jne: not equal / not zero */

loc_00492E65: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    eax = eax + 0xC;
    MEM32(ebp + -4) = eax;

loc_00492E6D: ;
    eax = MEM32(ebp + -4);
    (void)0; /* cmp MEM32(ebp + -8), eax - flags set for next jcc */
    eax = MEM32(ebp + -8);
    if (CMP_B(MEM32(ebp + -8), eax)) goto loc_00492E7B; /* jb: below (unsigned <) */

loc_00492E78: ;
    eax = MEM32(ebp + -4);

loc_00492E7B: ;
    if (CMP_NE(LO8(edx), 7)) goto loc_00492EA8; /* jne: not equal / not zero */

loc_00492E80: ;
    edx = ZX16(MEM16(edi + 4));
    edx = edx - MEM32(ebp + -4);
    edx = edx - esi;
    edx = edx + eax + -44;
    MEM32(ebp + -12) = edx;
    edx = MEM32(edi + 8);
    if (((int32_t)(LO8(edx) & LO8(edx)) >= 0)) goto loc_00492E9C; /* jns: not sign (positive) */

loc_00492E97: ;
    SET_LO8(ecx, LO8(ecx) + 7);
    goto loc_00492EA8;

loc_00492E9C: ;
    if (CMP_BE(esi & esi, 0)) goto loc_00492EA5; /* jbe: below or equal (unsigned <=) */

loc_00492EA0: ;
    SET_LO8(ecx, LO8(ecx) + 0xD);
    goto loc_00492EA8;

loc_00492EA5: ;
    SET_LO8(ecx, LO8(ecx) + 0xA);

loc_00492EA8: ;
    edx = MEM32(ebp + 8);
    MEM32(edx) = esi;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + -8);
    MEM32(edx) = ebx;
    edx = MEM32(ebp + 0x10);
    MEM32(edx) = eax;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + -4);
    MEM32(eax) = edx;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + -12);
    MEM32(eax) = edx;
    eax = MEM32(ebp + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00492ED5; /* je: equal / zero */

loc_00492ED3: ;
    MEM8(eax) = LO8(ecx);

loc_00492ED5: ;
    eax = MEM32(ebp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00492EE9; /* je: equal / zero */

loc_00492EDC: ;
    if (TEST_Z(MEM8(edi + 8), 0x80)) goto loc_00492EE9; /* je: equal / zero */

loc_00492EE2: ;
    ecx = esi;
    ecx = ecx >> 3;
    MEM8(eax) = LO8(ecx);

loc_00492EE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00492EEF
 * Original: 0x00492EEF - 0x00492F04 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492EEF(void)
{
    int _flags = 0; /* fallback flag var */

loc_00492EEF: ;
    eax = MEM32(ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 4);
    MEM32(edx + 0xC) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00492EFF; /* jne: not equal / not zero */

loc_00492EFC: ;
    MEM32(ecx + 4) = edx;

loc_00492EFF: ;
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00492F04
 * Original: 0x00492F04 - 0x00492F14 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492F04(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00492F04: ;
    edx = MEM32(ecx + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(edx, edx)) { sub_00492F14(); return; } /* je: equal / zero */

loc_00492F0F: ;
    MEM32(edx + 0xC) = eax;
    g_seh_ebp = ebp; sub_00492F16(); return; /* tail jmp 0x00492F16 */

}

/**
 * sub_00492F20
 * Original: 0x00492F20 - 0x00492F2F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492F20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00492F20: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0xC);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ecx) = edx;
    if (TEST_NZ(edx, edx)) { sub_00492F2F(); return; } /* jne: not equal / not zero */

loc_00492F2B: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00492F34
 * Original: 0x00492F34 - 0x00492F3D (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492F34(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00492F34: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    edx = ecx;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00492F4A(); return; /* tail jmp 0x00492F4A */

}

/**
 * sub_00492F6E
 * Original: 0x00492F6E - 0x00492FD3 (101 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492F6E(void)
{
    int _flags = 0; /* fallback flag var */

loc_00492F6E: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_00492F84; /* je: equal / zero */

loc_00492F79: ;
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(edx + 4) = esi;
    MEM32(eax) = MEM32(eax) & 0;

loc_00492F84: ;
    esi = MEM32(esp + 0xC);
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(eax + 8) = esi;
    if (CMP_AE(esi, 0xFFFFFFFFu)) goto loc_00492FCF; /* jae: above or equal (unsigned >=) */

loc_00492F90: ;
    edx = ecx + 0x1D0;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    if (CMP_EQ(edi, edx)) goto loc_00492FC2; /* je: equal / zero */

loc_00492F9D: ;
    if (CMP_BE(esi, MEM32(edi + 8))) goto loc_00492FC2; /* jbe: below or equal (unsigned <=) */

loc_00492FA2: ;
    ecx = MEM32(ecx + 0x1D4);
    goto loc_00492FAD;

loc_00492FAA: ;
    ecx = MEM32(ecx + 4);

loc_00492FAD: ;
    if (CMP_B(esi, MEM32(ecx + 8))) goto loc_00492FAA; /* jb: below (unsigned <) */

loc_00492FB2: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ecx);
    MEM32(edx + 4) = eax;
    MEM32(ecx) = eax;
    goto loc_00492FCE;

loc_00492FC2: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    MEM32(edx) = eax;

loc_00492FCE: ;
    POP32(esp, edi);

loc_00492FCF: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00492FD3
 * Original: 0x00492FD3 - 0x00492FF4 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492FD3(void)
{
    int _flags = 0; /* fallback flag var */

loc_00492FD3: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1D8);
    esi = esi + MEM32(esp + 0xC);
    if (CMP_AE(esi, MEM32(eax + 8))) goto loc_00492FEE; /* jae: above or equal (unsigned >=) */

loc_00492FE7: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_00492FEE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00492FF4
 * Original: 0x00492FF4 - 0x00493075 (129 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00492FF4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00492FF4: ;
    PUSH32(esp, ebp);
    ebp = esp + -88;
    esp = esp - 0x88;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_0049300A: ;
    esi = 0; /* xor self */
    if (CMP_BE(MEM32(ebp + 0x64), esi)) goto loc_00493020; /* jbe: below or equal (unsigned <=) */

loc_00493011: ;
    PUSH32(esp, MEM32(ebp + 0x64));
    eax = ebp + -48;
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_00493020: ;
    if (CMP_BE(MEM32(ebp + 0x6C), esi)) goto loc_00493034; /* jbe: below or equal (unsigned <=) */

loc_00493025: ;
    PUSH32(esp, MEM32(ebp + 0x6C));
    eax = ebp + -48;
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_00493034: ;
    if (CMP_BE(MEM32(ebp + 0x74), esi)) goto loc_00493048; /* jbe: below or equal (unsigned <=) */

loc_00493039: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    eax = ebp + -48;
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_00493048: ;
    eax = ebp + 0x44;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_00493055: ;
    ecx = MEM32(ebp + 0x7C);
    edi = MEM32(ebp + 0x78);
    eax = ecx;
    ecx = ecx >> 2;
    esi = ebp + 0x44;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    ebp = ebp + 0x58;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00493075
 * Original: 0x00493075 - 0x004930B5 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493075(void)
{
    uint32_t ebp;

loc_00493075: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_00493098: ;
    ecx = MEM32(ebp + 0x24);
    edi = MEM32(ebp + 0x20);
    eax = ecx;
    ecx = ecx >> 2;
    esi = ebp + -20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004930B5
 * Original: 0x004930B5 - 0x004930EE (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004930B5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004930B5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004930D8: ;
    ecx = MEM32(ebp + 0x24);
    esi = MEM32(ebp + 0x20);
    eax = 0; /* xor self */
    edi = ebp + -20;
    /* repe cmpsb - string compare, ecx iterations */
    POP32(esp, edi);
    SET_LO8(eax, (1 /* strings matched (repe cmpsb) */) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004930EE
 * Original: 0x004930EE - 0x00493122 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004930EE(void)
{
    int _flags = 0; /* fallback flag var */

loc_004930EE: ;
    edx = MEM32(esp + 8);
    if (CMP_BE(edx & edx, 0)) goto loc_0049311C; /* jbe: below or equal (unsigned <=) */

loc_004930F6: ;
    eax = MEM32(esp + 4);

loc_004930FA: ;
    if (CMP_B(edx, 4)) { sub_00493122(); return; } /* jb: below (unsigned <) */

loc_004930FF: ;
    SET_LO16(ecx, MEM16(eax + 2));
    if (CMP_B(LO16(ecx), 4)) { sub_00493122(); return; } /* jb: below (unsigned <) */

loc_00493109: ;
    ecx = ZX16(LO16(ecx));
    if (CMP_B(edx, ecx)) { sub_00493122(); return; } /* jb: below (unsigned <) */

loc_00493110: ;
    ecx = ZX16(MEM16(eax + 2));
    edx = edx - ecx;
    eax = eax + ecx;
    if (CMP_A(edx & edx, 0)) goto loc_004930FA; /* ja: above (unsigned >) */

loc_0049311C: ;
    eax = 0; /* xor self */
    eax++;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00493126
 * Original: 0x00493126 - 0x00493150 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493126(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00493126: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_BE(MEM32(ebp + 0xC), 0)) goto loc_0049314A; /* jbe: below or equal (unsigned <=) */

loc_0049312F: ;
    eax = MEM32(ebp + 8);

loc_00493132: ;
    SET_LO16(ecx, MEM16(eax));
    if (CMP_EQ(LO16(ecx), MEM16(ebp + 0x10))) goto loc_0049314C; /* je: equal / zero */

loc_0049313B: ;
    ecx = ZX16(MEM16(eax + 2));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - ecx;
    eax = eax + ecx;
    if (CMP_A(MEM32(ebp + 0xC), 0)) goto loc_00493132; /* ja: above (unsigned >) */

loc_0049314A: ;
    eax = 0; /* xor self */

loc_0049314C: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00493150
 * Original: 0x00493150 - 0x00493198 (72 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493150(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00493150: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    eax++;
    if (CMP_A(MEM8(edx), LO8(eax))) goto loc_00493172; /* ja: above (unsigned >) */

loc_0049315B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F);
    POP32(esp, ecx);
    ebx = 0; /* xor self */
    edi = 0x4A0191;
    esi = edx + 1;
    /* repe cmpsb - string compare, ecx iterations */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (1 /* strings matched (repe cmpsb) */) goto loc_00493195; /* je: equal / zero */

loc_00493172: ;
    eax = 0x4A018C;
    ecx = edx + 0x5C;

loc_0049317A: ;
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ecx))) { sub_00493198(); return; } /* jne: not equal / not zero */

loc_00493180: ;
    eax = eax - 4;
    ecx = ecx - 4;
    if (CMP_A(eax, 0x4A0130)) goto loc_0049317A; /* ja: above (unsigned >) */

loc_0049318D: ;
    eax = MEM32(eax);
    eax--;
    (void)0; /* cmp MEM32(ecx), eax - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;

loc_00493195: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004931A2
 * Original: 0x004931A2 - 0x004932A5 (259 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004931A2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004931A2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ebx;
    PUSH32(esp, edi);
    ebx = ebx + 0x27;
    edi = ecx;
    ebx = ebx >> 5;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_004931BF: ;
    (void)0; /* cmp ebx, 5 - flags set for next jcc */
    MEM8(ebp + -12) = LO8(eax);
    if (CMP_A(ebx, 5)) goto loc_00493244; /* ja: above (unsigned >) */

loc_004931C7: ;
    eax = ebx + -1;
    if (CMP_A(eax, 5)) goto loc_004931E0; /* ja: above (unsigned >) */

loc_004931CF: ;
    ecx = edi + eax * 8 + 0x58;

loc_004931D3: ;
    if (CMP_NE(MEM32(ecx), ecx)) goto loc_004931F4; /* jne: not equal / not zero */

loc_004931D7: ;
    eax++;
    ecx = ecx + 8;
    if (CMP_BE(eax, 5)) goto loc_004931D3; /* jbe: below or equal (unsigned <=) */

loc_004931E0: ;
    esi = 0; /* xor self */

loc_004931E2: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004931EB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_004931F4: ;
    esi = MEM32(edi + eax * 8 + 0x58);
    esi = esi - 8;

loc_004931FB: ;
    ecx = MEM32(esi + 0xC);
    edx = esi + 8;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    eax = ZX16(MEM16(esi + 4));
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_BE(eax, ebx)) goto loc_00493288; /* jbe: below or equal (unsigned <=) */

loc_00493213: ;
    edx = ZX16(LO16(ebx));
    edx = edx << 5;
    edx = edx + esi;
    eax = eax - ebx;
    (void)0; /* cmp LO16(eax), 5 - flags set for next jcc */
    MEM16(esi + 4) = LO16(ebx);
    MEM16(edx + 4) = LO16(eax);
    MEM16(edx + 6) = LO16(ebx);
    SET_LO16(ecx, MEM16(esi + 2));
    MEM32(ebp + 8) = eax;
    MEM16(edx + 2) = LO16(ecx);
    MEM8(edx + 1) = 0;
    if (CMP_A(LO16(eax), 5)) goto loc_0049325F; /* ja: above (unsigned >) */

loc_0049323E: ;
    eax = ZX16(LO16(eax));
    eax--;
    goto loc_00493262;

loc_00493244: ;
    ecx = edi + 0x80;
    eax = MEM32(ecx);
    goto loc_00493259;

loc_0049324E: ;
    esi = eax + -8;
    if (CMP_BE(LO16(ebx), MEM16(esi + 4))) goto loc_004931FB; /* jbe: below or equal (unsigned <=) */

loc_00493257: ;
    eax = MEM32(eax);

loc_00493259: ;
    if (CMP_NE(eax, ecx)) goto loc_0049324E; /* jne: not equal / not zero */

loc_0049325D: ;
    goto loc_004931E0;

loc_0049325F: ;
    PUSH32(esp, 5);
    POP32(esp, eax);

loc_00493262: ;
    edi = edi + eax * 8 + 0x58;
    ecx = MEM32(edi);
    eax = edx + 8;
    MEM32(eax) = ecx;
    MEM32(edx + 0xC) = edi;
    MEM32(ecx + 4) = eax;
    SET_LO16(ecx, MEM16(ebp + 8));
    MEM32(edi) = eax;
    eax = ZX16(MEM16(edx + 4));
    eax = eax << 5;
    MEM16(eax + edx + 6) = LO16(ecx);
    edx = MEM32(ebp + -4);

loc_00493288: ;
    eax = MEM32(ebp + 0xC);
    eax = eax >> 0x10;
    SET_LO8(ebx, LO8(ebx) << 5);
    SET_LO8(ebx, LO8(ebx) - MEM8(ebp + -8));
    MEM8(esi + 1) = 1;
    MEM16(esi + 2) = LO16(eax);
    MEM8(esi) = LO8(ebx);
    esi = edx;
    goto loc_004931E2;

}

/**
 * sub_004932A5
 * Original: 0x004932A5 - 0x004932D7 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004932A5(void)
{
    int _flags = 0; /* fallback flag var */

loc_004932A5: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_004931A2(); /* call 0x004931A2 */

loc_004932B2: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_004932D2; /* je: equal / zero */

loc_004932B8: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);

loc_004932D2: ;
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004932D7
 * Original: 0x004932D7 - 0x0049338D (182 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004932D7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004932D7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(eax, ebx)) goto loc_00493388; /* je: equal / zero */

loc_004932EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + -8;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_004932F7: ;
    SET_LO16(ecx, MEM16(esi + 4));
    MEM8(ebp + 8) = LO8(eax);
    eax = ZX16(MEM16(esi + 6));
    eax = eax << 5;
    edx = esi;
    edx = edx - eax;
    MEM8(esi + 1) = LO8(ebx);
    if (CMP_NE(MEM8(edx + 1), LO8(ebx))) goto loc_00493322; /* jne: not equal / not zero */

loc_00493311: ;
    esi = MEM32(edx + 8);
    edi = MEM32(edx + 0xC);
    MEM32(edi) = esi;
    MEM32(esi + 4) = edi;
    MEM16(edx + 4) = MEM16(edx + 4) + LO16(ecx);
    esi = edx;

loc_00493322: ;
    edx = ZX16(MEM16(esi + 4));
    edx = edx << 5;
    edx = edx + esi;
    if (CMP_NE(MEM8(edx + 1), LO8(ebx))) goto loc_00493343; /* jne: not equal / not zero */

loc_00493330: ;
    eax = MEM32(edx + 0xC);
    edi = MEM32(edx + 8);
    MEM32(eax) = edi;
    MEM32(edi + 4) = eax;
    SET_LO16(eax, MEM16(edx + 4));
    MEM16(esi + 4) = MEM16(esi + 4) + LO16(eax);

loc_00493343: ;
    SET_LO16(eax, MEM16(esi + 4));
    if (CMP_EQ(LO16(eax), LO16(ecx))) goto loc_00493357; /* je: equal / zero */

loc_0049334C: ;
    ecx = ZX16(LO16(eax));
    ecx = ecx << 5;
    MEM16(ecx + esi + 6) = LO16(eax);

loc_00493357: ;
    SET_LO16(eax, MEM16(esi + 4));
    PUSH32(esp, 5);
    POP32(esp, edx);
    if (CMP_A(LO16(eax), LO16(edx))) goto loc_00493367; /* ja: above (unsigned >) */

loc_00493363: ;
    edx = ZX16(LO16(eax));
    edx--;

loc_00493367: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(ebp + 8));
    edx = eax + edx * 8 + 0x58;
    ebx = MEM32(edx);
    edi = esi + 8;
    MEM32(edi) = ebx;
    MEM32(esi + 0xC) = edx;
    MEM32(ebx + 4) = edi;
    MEM32(edx) = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00493386: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00493388: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049338D
 * Original: 0x0049338D - 0x00493400 (115 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049338D(void)
{
    uint32_t ebp;

loc_0049338D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x214;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x200);
    eax = ebp + -532;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); sub_0049D07E(); /* call 0x0049D07E */

loc_004933AB: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x14);
    edx = ebp + -20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp + -532;
    PUSH32(esp, eax);
    edi = ecx + 0x10;
    PUSH32(esp, 8);
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00492FF4(); /* call 0x00492FF4 */

loc_004933CD: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    esi = esi + 0x88;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA8E(); /* call 0x0046DA8E */

loc_004933DF: ;
    eax = ebp + -532;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA88(); /* call 0x0046DA88 */

loc_004933F1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA88(); /* call 0x0046DA88 */

loc_004933FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00493400
 * Original: 0x00493400 - 0x0049342D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493400(void)
{

loc_00493400: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049340A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    esi = esi + 0x88;
    PUSH32(esp, MEM32(esp + 0x14));
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA88(); /* call 0x0046DA88 */

loc_00493420: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00493428: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049342D
 * Original: 0x0049342D - 0x00493441 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049342D(void)
{
    uint32_t ebp;

loc_0049342D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00493400(); /* call 0x00493400 */

loc_0049343C: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00493441
 * Original: 0x00493441 - 0x00493453 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493441(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00493441: ;
    eax = MEM32(esp + 4);
    (void)0; /* test MEM8(eax + 0xA), 4 - flags set for next jcc */
    PUSH32(esp, eax);
    if (TEST_Z(MEM8(eax + 0xA), 4)) { sub_00493453(); return; } /* je: equal / zero */

loc_0049344C: ;
    PUSH32(esp, 0); sub_004932D7(); /* call 0x004932D7 */

loc_00493451: ;
    g_seh_ebp = ebp; sub_00493459(); return; /* tail jmp 0x00493459 */

}

/**
 * sub_0049345C
 * Original: 0x0049345C - 0x00493470 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049345C(void)
{

loc_0049345C: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    edx = edx >> 0x13;
    edx = edx & 1;
    edx = edx << 3;
    eax = eax - edx;
    eax = eax - 0xE;
    esp += 4; return; /* ret */

}

/**
 * sub_00493470
 * Original: 0x00493470 - 0x00493480 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493470(void)
{

loc_00493470: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx);
    eax = eax >> 0x12;
    eax = eax & 0x3C;
    eax = eax + ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00493480
 * Original: 0x00493480 - 0x0049352B (171 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00493480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 8);
    edx = eax;
    PUSH32(esp, ebx);
    edx = edx >> 0x12;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = edx & 0x3C;
    SET_LO8(eax, LO8(eax) & 7);
    (void)0; /* cmp LO8(eax), 4 - flags set for next jcc */
    esi = edx + esi + 0x14;
    if (CMP_B(LO8(eax), 4)) goto loc_00493516; /* jb: below (unsigned <) */

loc_0049349D: ;
    ebx = MEM32(ecx + 8);
    MEM32(ebp + -4) = ebx;
    ebx = ebx >> 0x10;
    ebx = ebx & 3;
    if ((ebx == 0)) goto loc_00493525; /* je: equal / zero */

loc_004934AB: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    eax = edi;
    edx = edi;
    ecx = edi;
    eax = eax >> 5;
    edx = edx >> 4;
    SET_LO8(ecx, LO8(ecx) & 7);
    eax = eax & 0x7F8;
    edx = edx & 7;
    (void)0; /* cmp LO8(ecx), 2 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(LO8(ecx), 2)) goto loc_004934DB; /* je: equal / zero */

loc_004934CC: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx & 7;
    if (CMP_EQ(LO8(ecx), 5)) goto loc_004934DB; /* je: equal / zero */

loc_004934D7: ;
    ecx = 0; /* xor self */
    goto loc_004934DE;

loc_004934DB: ;
    ecx = 0; /* xor self */
    ecx++;

loc_004934DE: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0xC;
    ecx = ecx + ebx * 2;
    if (CMP_AE(edx, ecx)) goto loc_004934EE; /* jae: above or equal (unsigned >=) */

loc_004934EC: ;
    ecx = edx;

loc_004934EE: ;
    eax = eax - ecx;
    (void)0; /* cmp ebx, 1 - flags set for next jcc */
    esi = esi + eax + 0xC;
    if (CMP_NE(ebx, 1)) goto loc_00493516; /* jne: not equal / not zero */

loc_004934F9: ;
    SET_LO16(eax, MEM16(ebp + 8));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO8(ecx, LO8(ecx) + 0x18);
    SET_HI8(ecx, LO8(eax));
    MEM8(esi) = LO8(ecx);
    SET_LO8(ecx, HI8(eax));
    SET_LO8(ecx, LO8(ecx) + 0x18);
    MEM8(esi + 1) = LO8(ecx);
    goto loc_00493525;

loc_00493516: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(esi) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0xC));
    MEM16(esi + 2) = LO16(eax);

loc_00493525: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049352B
 * Original: 0x0049352B - 0x0049354D (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049352B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049352B: ;
    PUSH32(esp, esi);
    esi = 0x3E8;
    SET_LO16(eax, LO16(esi));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, LO16(ecx));
    if (CMP_NE(MEM16(esp + 8), LO16(eax))) { sub_0049354D(); return; } /* jne: not equal / not zero */

loc_00493542: ;
    if (CMP_NE(MEM16(esp + 0xC), LO16(eax))) { sub_0049354D(); return; } /* jne: not equal / not zero */

loc_00493549: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0049356F(); return; /* tail jmp 0x0049356F */

}

/**
 * sub_00493573
 * Original: 0x00493573 - 0x00493592 (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493573(void)
{
    int _flags = 0; /* fallback flag var */

loc_00493573: ;
    edx = MEM32(ecx + 8);
    eax = edx;
    eax = eax >> 0x12;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x3C;
    SET_LO8(edx, LO8(edx) & 7);
    (void)0; /* cmp LO8(edx), 4 - flags set for next jcc */
    eax = eax + esi + 0x14;
    POP32(esp, esi);
    if (CMP_B(LO8(edx), 4)) { sub_00493592(); return; } /* jb: below (unsigned <) */

loc_0049358E: ;
    eax = eax + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_004935B4
 * Original: 0x004935B4 - 0x004935F0 (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004935B4(void)
{
    int _flags = 0; /* fallback flag var */

loc_004935B4: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = eax;
    edx = eax;
    eax = eax >> 0x10;
    edx = edx >> 4;
    eax = eax & 3;
    esi = esi >> 5;
    edx = edx & 7;
    eax = eax << 1;
    esi = esi & 0x7F8;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_B(edx, eax)) goto loc_004935DA; /* jb: below (unsigned <) */

loc_004935D8: ;
    edx = eax;

loc_004935DA: ;
    edi = MEM32(ecx + 8);
    edi = edi >> 0x12;
    edi = edi & 0x3C;
    edi = edi - edx;
    edi = edi + MEM32(ecx);
    edi = edi + eax;
    eax = edi + esi + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004935F0
 * Original: 0x004935F0 - 0x00493619 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004935F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004935F0: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ecx + 4), edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ecx + 4), edx)) goto loc_00493603; /* jne: not equal / not zero */

loc_004935FD: ;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;

loc_00493603: ;
    edi = MEM32(ecx);
    esi = MEM32(eax + 4);
    MEM32(esi + 0xC) = edi;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    POP32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00493619
 * Original: 0x00493619 - 0x0049361E (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493619(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00493619: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_seh_ebp = ebp; sub_0049362D(); return; /* tail jmp 0x0049362D */

}

/**
 * sub_00493636
 * Original: 0x00493636 - 0x0049363B (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493636(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00493636: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_seh_ebp = ebp; sub_0049364C(); return; /* tail jmp 0x0049364C */

}

/**
 * sub_00493655
 * Original: 0x00493655 - 0x00493671 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493655(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00493655: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ecx);
    ecx = eax;
    ecx = ecx >> 7;
    ecx = ~ecx;
    if (TEST_Z(LO8(ecx), 1)) { sub_00493671(); return; } /* je: equal / zero */

loc_00493666: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFF;
    g_seh_ebp = ebp; sub_004936B3(); return; /* tail jmp 0x004936B3 */

}

/**
 * sub_004936B7
 * Original: 0x004936B7 - 0x004936DB (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004936B7(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004936B7: ;
    eax = MEM32(0x561018);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x1DC) = eax;
    eax = esi + 0x1D8;
    MEM32(eax) = MEM32(eax) + 1;
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    edi = esi + 0x1D0;
    g_seh_ebp = ebp; sub_004936F7(); return; /* tail jmp 0x004936F7 */

}

/**
 * sub_00493715
 * Original: 0x00493715 - 0x0049373B (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493715(void)
{

loc_00493715: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx + 0x18C;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC8);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, edx);
    eax = 0xFFE17B80u;
    PUSH32(esp, eax);
    ecx = ecx + 0x1A8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611C4), _icall_esp); /* indirect call */
    }

loc_00493739: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049373B
 * Original: 0x0049373B - 0x00493773 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049373B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049373B: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0x100;
    if (TEST_NZ(edi, eax)) goto loc_00493770; /* jne: not equal / not zero */

loc_0049374A: ;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00493768; /* je: equal / zero */

loc_0049374E: ;
    eax = esi + 0x1A8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_0049375B: ;
    eax = esi + 0x18C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611C8), _icall_esp); /* indirect call */
    }

loc_00493768: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_00493770: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004937A4
 * Original: 0x004937A4 - 0x00493856 (178 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004937A4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004937A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    edx = ebx;
    edx = edx & 7;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(esi, esi)) goto loc_004937BC; /* jne: not equal / not zero */

loc_004937B9: ;
    PUSH32(esp, 0x14);
    POP32(esp, esi);

loc_004937BC: ;
    esi = esi + 0x18;
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    MEM32(ebp + 0xC) = esi;
    if (CMP_B(edx, 1)) goto loc_00493840; /* jb: below (unsigned <) */

loc_004937C7: ;
    esi = esi + 0x14;
    if (CMP_B(edx, 4)) goto loc_0049382E; /* jb: below (unsigned <) */

loc_004937CF: ;
    edi = MEM32(ebp + 0x10);
    eax = edi + 7;
    eax = eax & 0xFFFFFFF8u;
    eax = eax - edi;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    edi = eax;
    edi = edi << 4;
    esi = esi + 0x18;
    ebx = ebx | edi;
    if (CMP_BE(edx, 4)) goto loc_00493821; /* jbe: below or equal (unsigned <=) */

loc_004937EC: ;
    edi = ebx;
    edi = edi >> 0x10;
    edi = edi & 3;
    edi = edi << 1;
    if (CMP_NE(edx, 5)) goto loc_004937FE; /* jne: not equal / not zero */

loc_004937FB: ;
    edi = edi + 0xC;

loc_004937FE: ;
    if (CMP_BE(edi, eax)) goto loc_00493806; /* jbe: below or equal (unsigned <=) */

loc_00493802: ;
    edi = edi - eax;
    esi = esi + edi;

loc_00493806: ;
    if (CMP_NE(edx, 7)) goto loc_00493821; /* jne: not equal / not zero */

loc_0049380B: ;
    if (CMP_BE(MEM32(ebp + 0x14), 0)) goto loc_00493821; /* jbe: below or equal (unsigned <=) */

loc_00493811: ;
    esi = esi + MEM32(ebp + 0x14);
    if (CMP_BE(MEM32(ebp + 0x10), 0)) goto loc_00493821; /* jbe: below or equal (unsigned <=) */

loc_0049381A: ;
    ebx = ebx | 0x80;
    esi++;

loc_00493821: ;
    eax = MEM32(ebp + 0x10);
    eax = eax & 0xFFFFFFF8u;
    eax = eax << 5;
    ebx = ebx | eax;
    goto loc_00493840;

loc_0049382E: ;
    if (CMP_NE(edx, 3)) goto loc_00493838; /* jne: not equal / not zero */

loc_00493833: ;
    esi = esi + 8;
    goto loc_00493840;

loc_00493838: ;
    if (CMP_NE(edx, 2)) goto loc_00493840; /* jne: not equal / not zero */

loc_0049383D: ;
    esi = esi + 0x14;

loc_00493840: ;
    esi = esi + MEM32(ebp + 0x10);
    (void)0; /* test ebx, 0x40000 - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    if (TEST_Z(ebx, 0x40000)) { sub_00493856(); return; } /* je: equal / zero */

loc_0049384F: ;
    PUSH32(esp, 0); sub_004931A2(); /* call 0x004931A2 */

loc_00493854: ;
    g_seh_ebp = ebp; sub_0049385C(); return; /* tail jmp 0x0049385C */

}

/**
 * sub_00493893
 * Original: 0x00493893 - 0x004938AB (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493893(void)
{
    int _flags = 0; /* fallback flag var */

loc_00493893: ;
    eax = MEM32(ecx + 8);
    edx = eax;
    SET_LO8(edx, LO8(edx) & 7);
    if (CMP_B(LO8(edx), 4)) { sub_004938AB(); return; } /* jb: below (unsigned <) */

loc_004938A0: ;
    eax = ZX16(MEM16(ecx + 4));
    ecx = MEM32(ecx);
    eax = eax + ecx + -24;
    esp += 4; return; /* ret */

}

/**
 * sub_004938B8
 * Original: 0x004938B8 - 0x004938DE (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004938B8(void)
{
    int _flags = 0; /* fallback flag var */

loc_004938B8: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) { sub_004938DE(); return; } /* je: equal / zero */

loc_004938BE: ;
    ecx = eax;
    ecx = ecx & 0xFF;
    if ((ecx == 0)) { sub_004938DE(); return; } /* je: equal / zero */

loc_004938C8: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_004938DE(); return; } /* je: equal / zero */

loc_004938CD: ;
    SET_LO16(eax, LO16(eax) & 0xF0);
    if (CMP_EQ(LO8(eax), 0xE0)) { sub_004938DE(); return; } /* je: equal / zero */

loc_004938D5: ;
    if (CMP_EQ(ecx, 0x7F)) { sub_004938DE(); return; } /* je: equal / zero */

loc_004938DA: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_004938ED
 * Original: 0x004938ED - 0x004939E5 (248 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004938ED(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004938ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    ebx = ecx;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_004938FD: ;
    eax = MEM32(ebp + 8);
    edx = ebx + 4;
    PUSH32(esp, 0x13);
    POP32(esp, ecx);
    esi = 0x4A01F0;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00493968; /* je: equal / zero */

loc_00493915: ;
    SET_LO8(ecx, MEM8(eax));
    if (CMP_EQ(LO8(ecx), 0xC)) goto loc_00493921; /* je: equal / zero */

loc_0049391C: ;
    if (CMP_NE(LO8(ecx), 0x4C)) goto loc_00493968; /* jne: not equal / not zero */

loc_00493921: ;
    MEM32(ebp + -4) = eax;
    eax = ZX8(LO8(ecx));
    eax--;
    esi = edx;
    if (((int32_t)eax < 0)) goto loc_00493968; /* js: sign (negative) */

loc_0049392C: ;
    edi = edx;
    edi = (uint32_t)(-(int32_t)edi);
    ecx = eax + 1;

loc_00493933: ;
    eax = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(eax));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00493945; /* jne: not equal / not zero */

loc_0049393C: ;
    SET_LO8(eax, MEM8(edi + esi + 0x4A01F0));
    goto loc_0049395F;

loc_00493945: ;
    SET_LO8(edx, MEM8(edi + esi + 0x4A0240));
    if (CMP_AE(LO8(eax), LO8(edx))) goto loc_00493954; /* jae: above or equal (unsigned >=) */

loc_00493950: ;
    MEM8(esi) = LO8(edx);
    goto loc_00493961;

loc_00493954: ;
    SET_LO8(edx, MEM8(edi + esi + 0x4A0290));
    if (CMP_A(LO8(eax), LO8(edx))) goto loc_00493950; /* ja: above (unsigned >) */

loc_0049395F: ;
    MEM8(esi) = LO8(eax);

loc_00493961: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    esi++;
    ecx--;
    if ((ecx != 0)) goto loc_00493933; /* jne: not equal / not zero */

loc_00493968: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0); sub_0049338D(); /* call 0x0049338D */

loc_00493972: ;
    eax = ebx + 0x1D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x1D4) = eax;
    MEM32(eax) = eax;
    PUSH32(esp, 0x4938E1);
    eax = ebx + 0x18C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E4), _icall_esp); /* indirect call */
    }

loc_00493993: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebx + 0x1A8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561148), _icall_esp); /* indirect call */
    }

loc_004939A2: ;
    MEM32(ebx + 0x1D8) = 0x69780;
    eax = MEM32(0x561018);
    eax = MEM32(eax);
    PUSH32(esp, 0x40);
    ecx = ebx;
    MEM32(ebx + 0x1DC) = eax;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_004939C2: ;
    edi = ZX8(MEM8(ebx + 6));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6554454E);
    edi = edi << 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56118C), _icall_esp); /* indirect call */
    }

loc_004939D5: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) { sub_004939E5(); return; } /* jne: not equal / not zero */

loc_004939DB: ;
    eax = 0x80072747u;
    g_seh_ebp = ebp; sub_00493A7F(); return; /* tail jmp 0x00493A7F */

}

/**
 * sub_00493A86
 * Original: 0x00493A86 - 0x00493AAE (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493A86(void)
{

loc_00493A86: ;
    eax = MEM32(ecx + 0x210);
    eax = eax | 0x10000;
    MEM32(0xFEF00110u) = eax;
    eax = 0; /* xor self */
    eax++;
    MEM32(0xFEF00084u) = eax;
    MEM32(0xFEF00094u) = eax;
    MEM32(-17825468) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00493AAE
 * Original: 0x00493AAE - 0x00493B21 (115 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493AAE(void)
{
    int _flags = 0; /* fallback flag var */

loc_00493AAE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x561178);
    PUSH32(esp, edi);
    MEM32(-17825520) = 0;
    edi = 0x1F4;
    MEM32(-17825644) = 0;
    MEM32(-17825660) = 0;
    ebx = edi;

loc_00493ADC: ;
    ebx--;
    if (TEST_NZ(MEM8(-17825640), 1)) goto loc_00493AEF; /* jne: not equal / not zero */

loc_00493AE6: ;
    if (TEST_Z(MEM8(-17825656), 1)) goto loc_00493AF7; /* je: equal / zero */

loc_00493AEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_00493AF3: ;
    if (TEST_NZ(ebx, ebx)) goto loc_00493ADC; /* jne: not equal / not zero */

loc_00493AF7: ;
    MEM32(-17825468) = 4;

loc_00493B01: ;
    edi--;
    if (TEST_NZ(MEM8(-17825468), 8)) goto loc_00493B13; /* jne: not equal / not zero */

loc_00493B0B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_00493B0F: ;
    if (TEST_NZ(edi, edi)) goto loc_00493B01; /* jne: not equal / not zero */

loc_00493B13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(-17825468) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00493B21
 * Original: 0x00493B21 - 0x00493B9F (126 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493B21(void)
{

loc_00493B21: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00493AAE(); /* call 0x00493AAE */

loc_00493B29: ;
    ebx = MEM32(0x561178);
    MEM32(-17825468) = 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    esi = 0xFEF00000u;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_00493B42: ;
    edi = 0; /* xor self */
    MEM32(-17825468) = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_00493B4E: ;
    MEM32(-17825404) = edi;
    MEM32(-17825788) = edi;
    MEM32(-17825280) = edi;
    MEM32(-17825784) = edi;
    MEM32(-17825536) = edi;
    MEM32(-17825532) = edi;
    eax = 0xFEF00088u;
    MEM32(-17825524) = edi;
    MEM32(-17825520) = edi;
    ecx = MEM32(eax);
    MEM32(eax) = ecx;
    eax = eax + 0x10;
    ecx = MEM32(eax);
    MEM32(eax) = ecx;
    eax = 0xFEF00180u;
    ecx = MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(esi);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00493B9F
 * Original: 0x00493B9F - 0x00493BB8 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493B9F(void)
{

loc_00493B9F: ;
    eax = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = ecx + 0x1EC;
    PUSH32(esp, ecx);
    MEM32(0xFEF00004u) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E0), _icall_esp); /* indirect call */
    }

loc_00493BB5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00493BB8
 * Original: 0x00493BB8 - 0x00493C3E (134 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493BB8(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00493BB8: ;
    eax = MEM32(0xFEF00188u);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(edi, edi)) ? 1 : 0); /* sete */
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561184), _icall_esp); /* indirect call */
    }

loc_00493BD4: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = eax;
    if (TEST_NZ(edi, edi)) goto loc_00493BE9; /* jne: not equal / not zero */

loc_00493BDA: ;
    if (CMP_EQ(ebx, MEM32(esi + 0x214))) goto loc_00493C38; /* je: equal / zero */

loc_00493BE2: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00493AAE(); /* call 0x00493AAE */

loc_00493BE9: ;
    eax = ebx;
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x384;
    eax = eax + 0x64;
    (void)0; /* test LO8(ebx), 8 - flags set for next jcc */
    MEM32(esi + 0x210) = eax;
    if (TEST_Z(LO8(ebx), 8)) goto loc_00493C0D; /* je: equal / zero */

loc_00493C04: ;
    MEM32(-17825664) = MEM32(-17825664) & 0xFFFFFFFDu;
    goto loc_00493C14;

loc_00493C0D: ;
    MEM32(-17825664) = MEM32(-17825664) | 2;

loc_00493C14: ;
    if (TEST_NZ(edi, edi)) goto loc_00493C21; /* jne: not equal / not zero */

loc_00493C18: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00493A86(); /* call 0x00493A86 */

loc_00493C1F: ;
    goto loc_00493C32;

loc_00493C21: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_00493C32; /* je: equal / zero */

loc_00493C26: ;
    PUSH32(esp, 0x80000000u);
    ecx = esi;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_00493C32: ;
    MEM32(esi + 0x214) = ebx;

loc_00493C38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00493C3E
 * Original: 0x00493C3E - 0x00493C4F (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493C3E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00493C3E: ;
    eax = MEM32(ecx + 0x260);
    if (TEST_Z(eax, eax)) { sub_00493C4F(); return; } /* je: equal / zero */

loc_00493C48: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_00493C71
 * Original: 0x00493C71 - 0x00493C94 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493C71(void)
{
    int _flags = 0; /* fallback flag var */

loc_00493C71: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00493715(); /* call 0x00493715 */

loc_00493C79: ;
    eax = esi + 0x260;
    if (CMP_EQ(MEM32(eax), 0)) { sub_00493C94(); return; } /* je: equal / zero */

loc_00493C84: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    esi = esi + 0x264;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00493C92: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00493CA2
 * Original: 0x00493CA2 - 0x00493CD1 (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493CA2(void)
{
    uint32_t ebp;

loc_00493CA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    ecx = ecx + 0xFFFFFD9Cu;
    PUSH32(esp, 0); sub_0048E91C(); /* call 0x0048E91C */

loc_00493CB9: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -36);
    edi = ecx + 2;
    esi = ebp + -26;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00493CDD
 * Original: 0x00493CDD - 0x00493E36 (345 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493CDD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00493CDD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x24C);
    ecx = MEM32(edi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edi;
    if (TEST_S(ecx, ecx)) goto loc_00493E2C; /* js: sign (negative) */

loc_00493CFE: ;
    PUSH32(esp, esi);

loc_00493CFF: ;
    if (TEST_Z(ecx, 0x10000)) goto loc_00493E03; /* je: equal / zero */

loc_00493D0B: ;
    if (TEST_Z(ecx, 0x40000000)) goto loc_00493D25; /* je: equal / zero */

loc_00493D13: ;
    eax = ecx;
    eax = eax & 0x3F800000;
    if (CMP_NE(eax, 0x20000000)) goto loc_00493E03; /* jne: not equal / not zero */

loc_00493D25: ;
    if (TEST_Z(MEM8(ebx + 1), 0x10)) goto loc_00493E03; /* je: equal / zero */

loc_00493D2F: ;
    eax = MEM32(edi);
    eax = eax - MEM32(ebx + 0x21C);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    esi = ZX16(MEM16(eax + 0xC));
    MEM32(ebp + -12) = esi;
    esi = 0x60040000;
    edx = ecx;
    ecx = ecx & esi;
    edx = edx & 0xFFFF;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (CMP_NE(ecx, esi)) goto loc_00493D5D; /* jne: not equal / not zero */

loc_00493D58: ;
    if (CMP_BE(edx & edx, 0)) goto loc_00493D5D; /* jbe: below or equal (unsigned <=) */

loc_00493D5C: ;
    edx--;

loc_00493D5D: ;
    if (CMP_B(edx, 0x2A)) goto loc_00493E03; /* jb: below (unsigned <) */

loc_00493D66: ;
    SET_LO16(ecx, MEM16(ebp + -12));
    SET_HI8(ebx, LO8(ecx));
    SET_LO8(ebx, HI8(ecx));
    if (CMP_A(LO16(ebx), 0x5DC)) goto loc_00493DA1; /* ja: above (unsigned >) */

loc_00493D75: ;
    (void)0; /* cmp MEM32(eax + 0xE), 0x3AAAA - flags set for next jcc */
    esi = eax;
    if (CMP_NE(MEM32(eax + 0xE), 0x3AAAA)) goto loc_00493DFD; /* jne: not equal / not zero */

loc_00493D80: ;
    if (CMP_NE(MEM16(eax + 0x12), 0)) goto loc_00493DFD; /* jne: not equal / not zero */

loc_00493D87: ;
    ecx = ZX16(MEM16(eax + 0x14));
    eax = eax + 8;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(ebp + -12) = ecx;
    edx = edx - 8;
    esi = eax;
    MEM16(eax + 0xC) = LO16(ecx);
    goto loc_00493DA4;

loc_00493DA1: ;
    esi = MEM32(ebp + -16);

loc_00493DA4: ;
    eax = eax + 0xE;
    edx = edx - 0xE;
    if (CMP_NE(MEM32(esi), 0xFFFFFFFFu)) goto loc_00493DBE; /* jne: not equal / not zero */

loc_00493DAF: ;
    if (CMP_NE(MEM16(esi + 4), 0xFFFF)) goto loc_00493DBE; /* jne: not equal / not zero */

loc_00493DB7: ;
    ecx = 0x1000000;
    goto loc_00493DD4;

loc_00493DBE: ;
    edi = MEM32(ebp + -8);
    PUSH32(esp, 3);
    edi = edi + 0x1E0;
    POP32(esp, ecx);
    ebx = 0; /* xor self */
    /* repe cmpsw - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_00493DFD; /* jne: not equal / not zero */

loc_00493DD1: ;
    ecx = MEM32(ebp + -20);

loc_00493DD4: ;
    PUSH32(esp, MEM32(ebp + -12));
    ebx = MEM32(ebp + -8);
    MEM32(ebp + -40) = eax;
    eax = 0; /* xor self */
    MEM16(ebp + -34) = LO16(eax);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = eax;
    eax = ebp + -40;
    MEM32(ebp + -32) = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM16(ebp + -36) = LO16(edx);
    PUSH32(esp, 0); sub_0049A9C7(); /* call 0x0049A9C7 */

loc_00493DFB: ;
    goto loc_00493E00;

loc_00493DFD: ;
    ebx = MEM32(ebp + -8);

loc_00493E00: ;
    edi = MEM32(ebp + -4);

loc_00493E03: ;
    MEM32(edi + 4) = 0x800007FDu;
    if (CMP_NE(edi, MEM32(ebx + 0x248))) goto loc_00493E1A; /* jne: not equal / not zero */

loc_00493E12: ;
    edi = MEM32(ebx + 0x244);
    goto loc_00493E1D;

loc_00493E1A: ;
    edi = edi + 8;

loc_00493E1D: ;
    ecx = MEM32(edi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (((int32_t)(ecx & ecx) >= 0)) goto loc_00493CFF; /* jns: not sign (positive) */

loc_00493E2B: ;
    POP32(esp, esi);

loc_00493E2C: ;
    MEM32(ebx + 0x24C) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00493E36
 * Original: 0x00493E36 - 0x00493ED7 (161 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493E36(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00493E36: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = edi + 0x238;

loc_00493E42: ;
    esi = MEM32(ebp);
    if (TEST_Z(esi, esi)) { sub_00493ED7(); return; } /* je: equal / zero */

loc_00493E4D: ;
    (void)0; /* test MEM8(esi + 0xB), 0x20 - flags set for next jcc */
    ebx = MEM32(edi + 0x230);
    if (TEST_Z(MEM8(esi + 0xB), 0x20)) goto loc_00493E6C; /* je: equal / zero */

loc_00493E59: ;
    if (CMP_NE(ebx, MEM32(edi + 0x22C))) goto loc_00493E69; /* jne: not equal / not zero */

loc_00493E61: ;
    ebx = MEM32(edi + 0x228);
    goto loc_00493E6C;

loc_00493E69: ;
    ebx = ebx + 8;

loc_00493E6C: ;
    if (TEST_NZ(MEM8(ebx + 7), 0x80)) { sub_00493ED7(); return; } /* jne: not equal / not zero */

loc_00493E72: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_00492F20(); /* call 0x00492F20 */

loc_00493E79: ;
    if (CMP_NE(ebx, MEM32(edi + 0x22C))) goto loc_00493E89; /* jne: not equal / not zero */

loc_00493E81: ;
    eax = MEM32(edi + 0x228);
    goto loc_00493E8C;

loc_00493E89: ;
    eax = ebx + 8;

loc_00493E8C: ;
    MEM32(edi + 0x230) = eax;
    eax = MEM32(esi + 8);
    eax = eax >> 0x1D;
    eax = eax & 1;
    ecx = ecx | 0xFFFFFFFFu;
    ecx = ecx - eax;
    MEM32(edi + 0x220) = MEM32(edi + 0x220) + ecx;
    eax = MEM32(esi + 8);
    ecx = ZX16(MEM16(esi + 4));
    eax = eax >> 0x13;
    eax = eax & 1;
    eax = ecx + eax * 8 + 0xE;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_00493EC1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D0), _icall_esp); /* indirect call */
    }

loc_00493EC8: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xDF;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x10), _icall_esp); /* indirect call */
    }

loc_00493ED2: ;
    goto loc_00493E42;

}

/**
 * sub_00493F03
 * Original: 0x00493F03 - 0x00493F45 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00493F03(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00493F03: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x260);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) { sub_00493F45(); return; } /* je: equal / zero */

loc_00493F1A: ;
    ebx = MEM32(eax);
    eax = MEM32(edi + 8);
    ecx = ZX16(MEM16(edi + 4));
    eax = eax >> 0x13;
    eax = eax & 1;
    eax = ecx + eax * 8 + 0xE;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_00493F35: ;
    ecx = MEM32(esi + 0x260);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 0x14), _icall_esp); /* indirect call */
    }

loc_00493F40: ;
    g_seh_ebp = ebp; sub_00494029(); return; /* tail jmp 0x00494029 */

}

/**
 * sub_00494030
 * Original: 0x00494030 - 0x0049405D (45 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00494030: ;
    if (CMP_NE(MEM32(ecx + 0x260), 0)) { sub_0049405D(); return; } /* jne: not equal / not zero */

loc_00494039: ;
    if (CMP_LE(MEM32(ecx + 0x220), 0)) goto loc_0049404C; /* jle: less or equal (signed <=) */

loc_00494042: ;
    MEM32(-17825468) = 1;

loc_0049404C: ;
    eax = MEM32(ecx + 0x24C);
    if (TEST_NZ(MEM8(eax + 7), 0x80)) { sub_0049405D(); return; } /* jne: not equal / not zero */

loc_00494058: ;
    g_seh_ebp = ebp; sub_00493CDD(); return; /* tail jmp 0x00493CDD */

}

/**
 * sub_0049405E
 * Original: 0x0049405E - 0x0049410F (177 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049405E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049405E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ebx + 0x260;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_0049409C; /* je: equal / zero */

loc_00494072: ;
    if (CMP_NE(MEM32(ecx + 8), 0x58424456)) goto loc_0049410A; /* jne: not equal / not zero */

loc_0049407F: ;
    if (CMP_B(MEM32(ecx + 0xC), 1)) goto loc_0049410A; /* jb: below (unsigned <) */

loc_00494089: ;
    ebx = ebx + 0x1E0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ecx;
    edx = MEM32(eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x1C), _icall_esp); /* indirect call */
    }

loc_0049409A: ;
    goto loc_0049410A;

loc_0049409C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x1E6;
    edi = ebp + -8;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    esi = MEM32(ebp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = ebx + 0x1E0;
    if (TEST_Z(esi, esi)) goto loc_004940CE; /* je: equal / zero */

loc_004940B7: ;
    if (CMP_NE(MEM32(esi), 0)) goto loc_004940C3; /* jne: not equal / not zero */

loc_004940BC: ;
    if (CMP_EQ(MEM16(esi + 4), 0)) goto loc_004940CE; /* je: equal / zero */

loc_004940C3: ;
    if (TEST_NZ(MEM8(esi), 1)) goto loc_004940CE; /* jne: not equal / not zero */

loc_004940C8: ;
    edi = ebp + -8;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */

loc_004940CE: ;
    PUSH32(esp, 3);
    esi = eax;
    POP32(esp, ecx);
    edi = ebp + -8;
    eax = 0; /* xor self */
    /* repe cmpsw - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_00494108; /* je: equal / zero */

loc_004940DD: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_00493AAE(); /* call 0x00493AAE */

loc_004940E4: ;
    eax = MEM32(ebp + -8);
    MEM32(0xFEF000A8u) = eax;
    eax = ZX16(MEM16(ebp + -4));
    MEM32(0xFEF000ACu) = eax;
    esi = ebp + -8;
    edi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ecx = ebx;
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    PUSH32(esp, 0); sub_00493A86(); /* call 0x00493A86 */

loc_00494108: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0049410A: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049410F
 * Original: 0x0049410F - 0x00494176 (103 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049410F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049410F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x260;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00494135; /* je: equal / zero */

loc_0049411E: ;
    if (CMP_NE(MEM32(ecx + 8), 0x58424456)) goto loc_00494174; /* jne: not equal / not zero */

loc_00494127: ;
    if (CMP_B(MEM32(ecx + 0xC), 2)) goto loc_00494174; /* jb: below (unsigned <) */

loc_0049412D: ;
    eax = ecx;
    edx = MEM32(eax);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

loc_00494135: ;
    eax = MEM32(esi);
    if (TEST_Z(HI8(eax), 4)) goto loc_00494174; /* je: equal / zero */

loc_0049413C: ;
    if (TEST_NZ(HI8(eax), 0x20)) goto loc_00494174; /* jne: not equal / not zero */

loc_00494141: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AA95(); /* call 0x0049AA95 */

loc_00494149: ;
    edi = 0x2710;

loc_0049414E: ;
    if (CMP_EQ(MEM32(esi + 0x238), 0)) goto loc_00494173; /* je: equal / zero */

loc_00494157: ;
    ecx = esi;
    MEM32(-17825468) = 1;
    PUSH32(esp, 0); sub_00493E36(); /* call 0x00493E36 */

loc_00494168: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561178), _icall_esp); /* indirect call */
    }

loc_00494170: ;
    edi--;
    if ((edi != 0)) goto loc_0049414E; /* jne: not equal / not zero */

loc_00494173: ;
    POP32(esp, edi);

loc_00494174: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
