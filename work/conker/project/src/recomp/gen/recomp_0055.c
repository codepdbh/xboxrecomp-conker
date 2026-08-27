/**
 * Burnout 3 - Recompiled code chunk 55
 * Functions: 250 (0x004833C0 - 0x004848E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004833C0
 * Original: 0x004833C0 - 0x004833D1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004833C0(void)
{
    float xmm0;

loc_004833C0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x84ED7C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004833E0
 * Original: 0x004833E0 - 0x004833EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004833E0(void)
{

loc_004833E0: ;
    MEM32(0x84ED80) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004833F0
 * Original: 0x004833F0 - 0x004833FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004833F0(void)
{

loc_004833F0: ;
    MEM32(0x84ED84) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483400
 * Original: 0x00483400 - 0x0048350B (267 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483400(void)
{

loc_00483400: ;
    SET_LO16(eax, MEM16(0x6B433C));
    SET_LO16(ecx, MEM16(0x6B4320));
    SET_LO16(edx, MEM16(0x6B4330));
    MEM16(0x84ED88) = LO16(eax);
    SET_LO16(eax, MEM16(0x6B4334));
    MEM16(0x84ED8A) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x6B4338));
    MEM16(0x84ED8C) = LO16(edx);
    SET_LO16(edx, MEM16(0x6B4350));
    MEM16(0x84ED8E) = LO16(eax);
    SET_LO16(eax, MEM16(0x6B434C));
    MEM16(0x84ED90) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x6B46C4));
    MEM16(0x84ED92) = LO16(edx);
    SET_LO16(edx, MEM16(0x6B46BC));
    MEM16(0x84ED94) = LO16(eax);
    SET_LO16(eax, MEM16(0x6B46C0));
    MEM16(0x84ED96) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x6B432C));
    MEM16(0x84ED98) = LO16(edx);
    SET_LO16(edx, MEM16(0x6B4328));
    MEM16(0x84ED9A) = LO16(eax);
    SET_LO16(eax, MEM16(0x6B46C8));
    MEM16(0x84ED9C) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x6B46CC));
    MEM16(0x84ED9E) = LO16(edx);
    SET_LO16(edx, MEM16(0x6B4348));
    MEM16(0x84EDA0) = LO16(eax);
    SET_LO16(eax, MEM16(0x6B4324));
    MEM16(0x84EDA2) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x6B46B8));
    MEM16(0x84EDA4) = LO16(edx);
    SET_LO16(edx, MEM16(0x6B4344));
    MEM16(0x84EDA6) = LO16(eax);
    SET_LO16(eax, MEM16(0x6B431C));
    MEM16(0x84EDA8) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x6B4340));
    MEM16(0x84EDAA) = LO16(edx);
    MEM16(0x84EDAC) = LO16(eax);
    MEM16(0x84EDAE) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00483510
 * Original: 0x00483510 - 0x0048351B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483510(void)
{

loc_00483510: ;
    MEM32(0x84EDB0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483520
 * Original: 0x00483520 - 0x0048352B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483520(void)
{

loc_00483520: ;
    MEM32(0x84EDB4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483530
 * Original: 0x00483530 - 0x0048353B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483530(void)
{

loc_00483530: ;
    MEM32(0x84EDB8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483540
 * Original: 0x00483540 - 0x0048354F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483540(void)
{

loc_00483540: ;
    PUSH32(esp, 1);
    edx = 0; /* xor self */
    eax = 0x84EDC0;
    PUSH32(esp, 0); sub_0013B730(); /* call 0x0013B730 */

loc_0048354E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00483550
 * Original: 0x00483550 - 0x0048355F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483550(void)
{

loc_00483550: ;
    PUSH32(esp, 2);
    edx = 0; /* xor self */
    eax = 0x852610;
    PUSH32(esp, 0); sub_0013B730(); /* call 0x0013B730 */

loc_0048355E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00483560
 * Original: 0x00483560 - 0x0048356F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483560(void)
{

loc_00483560: ;
    PUSH32(esp, 4);
    edx = 0; /* xor self */
    eax = 0x855E60;
    PUSH32(esp, 0); sub_0013B730(); /* call 0x0013B730 */

loc_0048356E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00483570
 * Original: 0x00483570 - 0x0048357F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483570(void)
{

loc_00483570: ;
    PUSH32(esp, 3);
    edx = 0; /* xor self */
    eax = 0x8596B0;
    PUSH32(esp, 0); sub_0013B730(); /* call 0x0013B730 */

loc_0048357E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00483580
 * Original: 0x00483580 - 0x0048358B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483580(void)
{

loc_00483580: ;
    MEM32(0x85CEFC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483590
 * Original: 0x00483590 - 0x004835A1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483590(void)
{
    float xmm0;

loc_00483590: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85CF00) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004835B0
 * Original: 0x004835B0 - 0x004835C1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004835B0(void)
{
    float xmm0;

loc_004835B0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85CF04) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004835D0
 * Original: 0x004835D0 - 0x004835DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004835D0(void)
{

loc_004835D0: ;
    MEM32(0x85CF08) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004835E0
 * Original: 0x004835E0 - 0x004835EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004835E0(void)
{

loc_004835E0: ;
    MEM32(0x85CF0C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004835F0
 * Original: 0x004835F0 - 0x00483601 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004835F0(void)
{
    float xmm0;

loc_004835F0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85CF10) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483610
 * Original: 0x00483610 - 0x00483621 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483610(void)
{
    float xmm0;

loc_00483610: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85CF14) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483630
 * Original: 0x00483630 - 0x0048363B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483630(void)
{

loc_00483630: ;
    MEM32(0x85CF18) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483640
 * Original: 0x00483640 - 0x0048364B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483640(void)
{

loc_00483640: ;
    MEM32(0x85CF1C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483650
 * Original: 0x00483650 - 0x0048365B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483650(void)
{

loc_00483650: ;
    MEM32(0x85CF20) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483660
 * Original: 0x00483660 - 0x0048366B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483660(void)
{

loc_00483660: ;
    MEM32(0x85CF24) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483670
 * Original: 0x00483670 - 0x00483681 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483670(void)
{
    float xmm0;

loc_00483670: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85CF28) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483690
 * Original: 0x00483690 - 0x004836A1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483690(void)
{
    float xmm0;

loc_00483690: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85CF2C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004836B0
 * Original: 0x004836B0 - 0x004836BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004836B0(void)
{

loc_004836B0: ;
    MEM32(0x85CF30) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004836C0
 * Original: 0x004836C0 - 0x004836CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004836C0(void)
{

loc_004836C0: ;
    MEM32(0x85CF34) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004836D0
 * Original: 0x004836D0 - 0x004836DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004836D0(void)
{

loc_004836D0: ;
    MEM32(0x85CF38) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004836E0
 * Original: 0x004836E0 - 0x004836EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004836E0(void)
{

loc_004836E0: ;
    MEM32(0x85CF3C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004836F0
 * Original: 0x004836F0 - 0x004836FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004836F0(void)
{

loc_004836F0: ;
    MEM32(0x85CF40) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483700
 * Original: 0x00483700 - 0x0048370B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483700(void)
{

loc_00483700: ;
    MEM32(0x85CF44) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483710
 * Original: 0x00483710 - 0x0048371B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483710(void)
{

loc_00483710: ;
    MEM32(0x85CF48) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483720
 * Original: 0x00483720 - 0x0048372B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483720(void)
{

loc_00483720: ;
    MEM32(0x85CF4C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483730
 * Original: 0x00483730 - 0x00483741 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483730(void)
{
    float xmm0;

loc_00483730: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85CF50) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483750
 * Original: 0x00483750 - 0x00483761 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483750(void)
{
    float xmm0;

loc_00483750: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85CF54) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483770
 * Original: 0x00483770 - 0x0048377B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483770(void)
{

loc_00483770: ;
    MEM32(0x85CF58) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483780
 * Original: 0x00483780 - 0x0048378B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483780(void)
{

loc_00483780: ;
    MEM32(0x85CF5C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483790
 * Original: 0x00483790 - 0x0048379B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483790(void)
{

loc_00483790: ;
    MEM32(0x85CF60) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004837A0
 * Original: 0x004837A0 - 0x004837AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004837A0(void)
{

loc_004837A0: ;
    MEM32(0x85CF64) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004837B0
 * Original: 0x004837B0 - 0x004837C1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004837B0(void)
{
    float xmm0;

loc_004837B0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85CF68) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004837D0
 * Original: 0x004837D0 - 0x004837E1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004837D0(void)
{
    float xmm0;

loc_004837D0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85CF6C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004837F0
 * Original: 0x004837F0 - 0x004837FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004837F0(void)
{

loc_004837F0: ;
    MEM32(0x85CF70) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483800
 * Original: 0x00483800 - 0x0048380B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483800(void)
{

loc_00483800: ;
    MEM32(0x85CF74) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483810
 * Original: 0x00483810 - 0x0048381B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483810(void)
{

loc_00483810: ;
    MEM32(0x85CF78) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483820
 * Original: 0x00483820 - 0x0048382B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483820(void)
{

loc_00483820: ;
    MEM32(0x85CF7C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483830
 * Original: 0x00483830 - 0x0048383B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483830(void)
{

loc_00483830: ;
    MEM32(0x85CF80) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483840
 * Original: 0x00483840 - 0x0048384B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483840(void)
{

loc_00483840: ;
    MEM32(0x85CF84) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483850
 * Original: 0x00483850 - 0x0048385B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483850(void)
{

loc_00483850: ;
    MEM32(0x85CF88) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483860
 * Original: 0x00483860 - 0x0048386B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483860(void)
{

loc_00483860: ;
    MEM32(0x85CF8C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483870
 * Original: 0x00483870 - 0x0048387B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483870(void)
{

loc_00483870: ;
    MEM32(0x85CF90) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483880
 * Original: 0x00483880 - 0x0048388B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483880(void)
{

loc_00483880: ;
    MEM32(0x85CF94) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483890
 * Original: 0x00483890 - 0x0048389B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483890(void)
{

loc_00483890: ;
    MEM32(0x85CF98) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004838A0
 * Original: 0x004838A0 - 0x004838AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004838A0(void)
{

loc_004838A0: ;
    MEM32(0x85CF9C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004838B0
 * Original: 0x004838B0 - 0x004838BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004838B0(void)
{

loc_004838B0: ;
    MEM32(0x85CFA0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004838C0
 * Original: 0x004838C0 - 0x004838CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004838C0(void)
{

loc_004838C0: ;
    MEM32(0x85CFA4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004838D0
 * Original: 0x004838D0 - 0x004838DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004838D0(void)
{

loc_004838D0: ;
    MEM32(0x85CFA8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004838E0
 * Original: 0x004838E0 - 0x004838EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004838E0(void)
{

loc_004838E0: ;
    MEM32(0x85CFAC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004838F0
 * Original: 0x004838F0 - 0x00483901 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004838F0(void)
{
    float xmm0;

loc_004838F0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85CFB0) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483910
 * Original: 0x00483910 - 0x00483921 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483910(void)
{
    float xmm0;

loc_00483910: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85CFB4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483930
 * Original: 0x00483930 - 0x0048393B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483930(void)
{

loc_00483930: ;
    MEM32(0x85CFB8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483940
 * Original: 0x00483940 - 0x0048394B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483940(void)
{

loc_00483940: ;
    MEM32(0x85CFBC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483950
 * Original: 0x00483950 - 0x0048395B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483950(void)
{

loc_00483950: ;
    MEM32(0x85CFC0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483960
 * Original: 0x00483960 - 0x0048396B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483960(void)
{

loc_00483960: ;
    MEM32(0x85CFC4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483970
 * Original: 0x00483970 - 0x0048397B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483970(void)
{

loc_00483970: ;
    MEM32(0x85CFC8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483980
 * Original: 0x00483980 - 0x0048398B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483980(void)
{

loc_00483980: ;
    MEM32(0x85CFCC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483990
 * Original: 0x00483990 - 0x0048399B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483990(void)
{

loc_00483990: ;
    MEM32(0x85CFD0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004839A0
 * Original: 0x004839A0 - 0x004839AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004839A0(void)
{

loc_004839A0: ;
    MEM32(0x85CFD4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004839B0
 * Original: 0x004839B0 - 0x004839BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004839B0(void)
{

loc_004839B0: ;
    MEM32(0x85CFD8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004839C0
 * Original: 0x004839C0 - 0x004839CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004839C0(void)
{

loc_004839C0: ;
    MEM32(0x85CFDC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004839D0
 * Original: 0x004839D0 - 0x004839DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004839D0(void)
{

loc_004839D0: ;
    MEM32(0x85CFE0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004839E0
 * Original: 0x004839E0 - 0x004839EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004839E0(void)
{

loc_004839E0: ;
    MEM32(0x85CFE4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004839F0
 * Original: 0x004839F0 - 0x004839FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004839F0(void)
{

loc_004839F0: ;
    MEM32(0x85CFE8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483A00
 * Original: 0x00483A00 - 0x00483A0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483A00(void)
{

loc_00483A00: ;
    MEM32(0x85CFEC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483A10
 * Original: 0x00483A10 - 0x00483A1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483A10(void)
{

loc_00483A10: ;
    MEM32(0x85CFF0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483A20
 * Original: 0x00483A20 - 0x00483A2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483A20(void)
{

loc_00483A20: ;
    MEM32(0x85CFF4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483A30
 * Original: 0x00483A30 - 0x00483A3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483A30(void)
{

loc_00483A30: ;
    MEM32(0x85CFF8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483A40
 * Original: 0x00483A40 - 0x00483A51 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483A40(void)
{
    float xmm0;

loc_00483A40: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85CFFC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483A60
 * Original: 0x00483A60 - 0x00483A71 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483A60(void)
{
    float xmm0;

loc_00483A60: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D000) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483A80
 * Original: 0x00483A80 - 0x00483A8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483A80(void)
{

loc_00483A80: ;
    MEM32(0x85D004) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483A90
 * Original: 0x00483A90 - 0x00483B04 (116 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483A90(void)
{
    float xmm0;

loc_00483A90: ;
    eax = MEM32(0x6A3118);
    xmm0 = MEMF(0x64909C); /* movss */
    MEMF(0x75CFEC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    ecx = 0xD0;
    MEMF(0x75CFF8) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEM32(0x75CFE8) = eax;
    MEM32(0x75CFF0) = ecx;
    MEM32(0x75CFF4) = eax;
    MEM32(0x75CFFC) = ecx;
    MEM32(0x75D000) = eax;
    MEMF(0x75D004) = xmm0; /* movss */
    MEM32(0x75D008) = ecx;
    MEM32(0x75D00C) = eax;
    MEMF(0x75D010) = xmm0; /* movss */
    MEM32(0x75D014) = ecx;
    MEM32(0x75D018) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00483B10
 * Original: 0x00483B10 - 0x00483B21 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483B10(void)
{
    float xmm0;

loc_00483B10: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D008) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483B30
 * Original: 0x00483B30 - 0x00483B41 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483B30(void)
{
    float xmm0;

loc_00483B30: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D00C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483B50
 * Original: 0x00483B50 - 0x00483B5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483B50(void)
{

loc_00483B50: ;
    MEM32(0x85D010) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483B60
 * Original: 0x00483B60 - 0x00483B71 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483B60(void)
{
    float xmm0;

loc_00483B60: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D014) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483B80
 * Original: 0x00483B80 - 0x00483B91 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483B80(void)
{
    float xmm0;

loc_00483B80: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D018) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483BA0
 * Original: 0x00483BA0 - 0x00483BAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483BA0(void)
{

loc_00483BA0: ;
    MEM32(0x85D01C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483BB0
 * Original: 0x00483BB0 - 0x00483BBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483BB0(void)
{

loc_00483BB0: ;
    MEM32(0x85D020) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483BC0
 * Original: 0x00483BC0 - 0x00483BCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483BC0(void)
{

loc_00483BC0: ;
    MEM32(0x85D024) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483BD0
 * Original: 0x00483BD0 - 0x00483BDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483BD0(void)
{

loc_00483BD0: ;
    MEM32(0x85D028) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483BE0
 * Original: 0x00483BE0 - 0x00483BF1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483BE0(void)
{
    float xmm0;

loc_00483BE0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D02C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483C00
 * Original: 0x00483C00 - 0x00483C11 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483C00(void)
{
    float xmm0;

loc_00483C00: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D030) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483C20
 * Original: 0x00483C20 - 0x00483C2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483C20(void)
{

loc_00483C20: ;
    MEM32(0x85D034) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483C30
 * Original: 0x00483C30 - 0x00483C3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483C30(void)
{

loc_00483C30: ;
    MEM32(0x85D038) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483C40
 * Original: 0x00483C40 - 0x00483C4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483C40(void)
{

loc_00483C40: ;
    MEM32(0x85D03C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483C50
 * Original: 0x00483C50 - 0x00483C5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483C50(void)
{

loc_00483C50: ;
    MEM32(0x85D040) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483C60
 * Original: 0x00483C60 - 0x00483C6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483C60(void)
{

loc_00483C60: ;
    MEM32(0x85D044) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483C70
 * Original: 0x00483C70 - 0x00483C7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483C70(void)
{

loc_00483C70: ;
    MEM32(0x85D048) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483C80
 * Original: 0x00483C80 - 0x00483C8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483C80(void)
{

loc_00483C80: ;
    MEM32(0x85D04C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483C90
 * Original: 0x00483C90 - 0x00483C9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483C90(void)
{

loc_00483C90: ;
    MEM32(0x85D050) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483CA0
 * Original: 0x00483CA0 - 0x00483CB1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483CA0(void)
{
    float xmm0;

loc_00483CA0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D054) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483CC0
 * Original: 0x00483CC0 - 0x00483CD1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483CC0(void)
{
    float xmm0;

loc_00483CC0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D058) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483CE0
 * Original: 0x00483CE0 - 0x00483CEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483CE0(void)
{

loc_00483CE0: ;
    MEM32(0x85D05C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483CF0
 * Original: 0x00483CF0 - 0x00483CFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483CF0(void)
{

loc_00483CF0: ;
    MEM32(0x85D074) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483D00
 * Original: 0x00483D00 - 0x00483D0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483D00(void)
{

loc_00483D00: ;
    MEM32(0x85D078) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483D10
 * Original: 0x00483D10 - 0x00483D1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483D10(void)
{

loc_00483D10: ;
    MEM32(0x85D07C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483D20
 * Original: 0x00483D20 - 0x00483D2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483D20(void)
{

loc_00483D20: ;
    MEM32(0x85D080) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483D30
 * Original: 0x00483D30 - 0x00483D3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483D30(void)
{

loc_00483D30: ;
    MEM32(0x85D084) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483D40
 * Original: 0x00483D40 - 0x00483D4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483D40(void)
{

loc_00483D40: ;
    MEM32(0x85D088) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483D50
 * Original: 0x00483D50 - 0x00483D5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483D50(void)
{

loc_00483D50: ;
    MEM32(0x85D08C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483D60
 * Original: 0x00483D60 - 0x00483D6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483D60(void)
{

loc_00483D60: ;
    MEM32(0x85D090) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483D70
 * Original: 0x00483D70 - 0x00483D7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483D70(void)
{

loc_00483D70: ;
    MEM32(0x85D094) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483D80
 * Original: 0x00483D80 - 0x00483D8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483D80(void)
{

loc_00483D80: ;
    MEM32(0x85D098) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483D90
 * Original: 0x00483D90 - 0x00483D9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483D90(void)
{

loc_00483D90: ;
    MEM32(0x85D09C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483DA0
 * Original: 0x00483DA0 - 0x00483DAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483DA0(void)
{

loc_00483DA0: ;
    MEM32(0x85D0A0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483DB0
 * Original: 0x00483DB0 - 0x00483DBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483DB0(void)
{

loc_00483DB0: ;
    MEM32(0x85D0A4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483DC0
 * Original: 0x00483DC0 - 0x00483DCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483DC0(void)
{

loc_00483DC0: ;
    MEM32(0x85D0A8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483DD0
 * Original: 0x00483DD0 - 0x00483DDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483DD0(void)
{

loc_00483DD0: ;
    MEM32(0x85D0AC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483DE0
 * Original: 0x00483DE0 - 0x00483DEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483DE0(void)
{

loc_00483DE0: ;
    MEM32(0x85D0B0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483DF0
 * Original: 0x00483DF0 - 0x00483DFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483DF0(void)
{

loc_00483DF0: ;
    MEM32(0x85D0B4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483E00
 * Original: 0x00483E00 - 0x00483E0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483E00(void)
{

loc_00483E00: ;
    MEM32(0x85D0B8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483E10
 * Original: 0x00483E10 - 0x00483E1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483E10(void)
{

loc_00483E10: ;
    MEM32(0x85D0BC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483E20
 * Original: 0x00483E20 - 0x00483E2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483E20(void)
{

loc_00483E20: ;
    MEM32(0x85D0C0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483E30
 * Original: 0x00483E30 - 0x00483E3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483E30(void)
{

loc_00483E30: ;
    MEM32(0x85D0C4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483E40
 * Original: 0x00483E40 - 0x00483E4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483E40(void)
{

loc_00483E40: ;
    MEM32(0x85D0C8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483E50
 * Original: 0x00483E50 - 0x00483E5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483E50(void)
{

loc_00483E50: ;
    MEM32(0x85D0CC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483E60
 * Original: 0x00483E60 - 0x00483E6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483E60(void)
{

loc_00483E60: ;
    MEM32(0x85D0D0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483E70
 * Original: 0x00483E70 - 0x00483E7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483E70(void)
{

loc_00483E70: ;
    MEM32(0x85D0D4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483E80
 * Original: 0x00483E80 - 0x00483E8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483E80(void)
{

loc_00483E80: ;
    MEM32(0x85D0D8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483E90
 * Original: 0x00483E90 - 0x00483E9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483E90(void)
{

loc_00483E90: ;
    MEM32(0x85D0DC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483EA0
 * Original: 0x00483EA0 - 0x00483EAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483EA0(void)
{

loc_00483EA0: ;
    MEM32(0x85D0E0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483EB0
 * Original: 0x00483EB0 - 0x00483EBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483EB0(void)
{

loc_00483EB0: ;
    MEM32(0x85D0E4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483EC0
 * Original: 0x00483EC0 - 0x00483ECB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483EC0(void)
{

loc_00483EC0: ;
    MEM32(0x85D0E8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483ED0
 * Original: 0x00483ED0 - 0x00483EDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483ED0(void)
{

loc_00483ED0: ;
    MEM32(0x85D0EC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483EE0
 * Original: 0x00483EE0 - 0x00483EEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483EE0(void)
{

loc_00483EE0: ;
    MEM32(0x85D0F0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483EF0
 * Original: 0x00483EF0 - 0x00483EFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483EF0(void)
{

loc_00483EF0: ;
    MEM32(0x85D0F4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483F00
 * Original: 0x00483F00 - 0x00483F0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483F00(void)
{

loc_00483F00: ;
    MEM32(0x85D0F8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483F10
 * Original: 0x00483F10 - 0x00483F21 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483F10(void)
{
    float xmm0;

loc_00483F10: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D0FC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483F30
 * Original: 0x00483F30 - 0x00483F41 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483F30(void)
{
    float xmm0;

loc_00483F30: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D100) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483F50
 * Original: 0x00483F50 - 0x00483F5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483F50(void)
{

loc_00483F50: ;
    MEM32(0x85D104) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483F60
 * Original: 0x00483F60 - 0x00483F6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483F60(void)
{

loc_00483F60: ;
    MEM32(0x85D108) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483F70
 * Original: 0x00483F70 - 0x00483F81 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483F70(void)
{
    float xmm0;

loc_00483F70: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D10C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483F90
 * Original: 0x00483F90 - 0x00483FA1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483F90(void)
{
    float xmm0;

loc_00483F90: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D110) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483FB0
 * Original: 0x00483FB0 - 0x00483FBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483FB0(void)
{

loc_00483FB0: ;
    MEM32(0x85D114) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00483FC0
 * Original: 0x00483FC0 - 0x00483FD1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483FC0(void)
{
    float xmm0;

loc_00483FC0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D118) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00483FE0
 * Original: 0x00483FE0 - 0x00483FF1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00483FE0(void)
{
    float xmm0;

loc_00483FE0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D11C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484000
 * Original: 0x00484000 - 0x0048400B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484000(void)
{

loc_00484000: ;
    MEM32(0x85D120) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484010
 * Original: 0x00484010 - 0x0048401B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484010(void)
{

loc_00484010: ;
    MEM32(0x85D124) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484020
 * Original: 0x00484020 - 0x0048402B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484020(void)
{

loc_00484020: ;
    MEM32(0x85D128) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484030
 * Original: 0x00484030 - 0x0048403B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484030(void)
{

loc_00484030: ;
    MEM32(0x85D12C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484040
 * Original: 0x00484040 - 0x0048404B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484040(void)
{

loc_00484040: ;
    MEM32(0x85D130) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484050
 * Original: 0x00484050 - 0x0048405B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484050(void)
{

loc_00484050: ;
    MEM32(0x85D134) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484060
 * Original: 0x00484060 - 0x0048406B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484060(void)
{

loc_00484060: ;
    MEM32(0x85D138) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484070
 * Original: 0x00484070 - 0x0048407B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484070(void)
{

loc_00484070: ;
    MEM32(0x85D13C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484080
 * Original: 0x00484080 - 0x0048408B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484080(void)
{

loc_00484080: ;
    MEM32(0x85D140) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484090
 * Original: 0x00484090 - 0x004840A1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484090(void)
{
    float xmm0;

loc_00484090: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D144) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004840B0
 * Original: 0x004840B0 - 0x004840C1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004840B0(void)
{
    float xmm0;

loc_004840B0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D148) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004840D0
 * Original: 0x004840D0 - 0x004840DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004840D0(void)
{

loc_004840D0: ;
    MEM32(0x85D14C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004840E0
 * Original: 0x004840E0 - 0x004840F1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004840E0(void)
{
    float xmm0;

loc_004840E0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D150) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484100
 * Original: 0x00484100 - 0x00484111 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484100(void)
{
    float xmm0;

loc_00484100: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D154) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484120
 * Original: 0x00484120 - 0x0048412B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484120(void)
{

loc_00484120: ;
    MEM32(0x85D158) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484130
 * Original: 0x00484130 - 0x00484141 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484130(void)
{
    float xmm0;

loc_00484130: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D15C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484150
 * Original: 0x00484150 - 0x00484161 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484150(void)
{
    float xmm0;

loc_00484150: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D160) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484170
 * Original: 0x00484170 - 0x0048417B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484170(void)
{

loc_00484170: ;
    MEM32(0x85D164) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484180
 * Original: 0x00484180 - 0x0048418B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484180(void)
{

loc_00484180: ;
    MEM32(0x85D168) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484190
 * Original: 0x00484190 - 0x0048419B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484190(void)
{

loc_00484190: ;
    MEM32(0x85D16C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004841A0
 * Original: 0x004841A0 - 0x004841AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004841A0(void)
{

loc_004841A0: ;
    MEM32(0x85D170) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004841B0
 * Original: 0x004841B0 - 0x004841BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004841B0(void)
{

loc_004841B0: ;
    MEM32(0x85D174) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004841C0
 * Original: 0x004841C0 - 0x004841CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004841C0(void)
{

loc_004841C0: ;
    MEM32(0x85D178) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004841D0
 * Original: 0x004841D0 - 0x004841DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004841D0(void)
{

loc_004841D0: ;
    MEM32(0x85D17C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004841E0
 * Original: 0x004841E0 - 0x004841F1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004841E0(void)
{
    float xmm0;

loc_004841E0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D180) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484200
 * Original: 0x00484200 - 0x00484211 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484200(void)
{
    float xmm0;

loc_00484200: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D184) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484220
 * Original: 0x00484220 - 0x0048422B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484220(void)
{

loc_00484220: ;
    MEM32(0x85D188) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484230
 * Original: 0x00484230 - 0x0048423B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484230(void)
{

loc_00484230: ;
    MEM32(0x85D18C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484240
 * Original: 0x00484240 - 0x00484251 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484240(void)
{
    float xmm0;

loc_00484240: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D190) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484260
 * Original: 0x00484260 - 0x00484271 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484260(void)
{
    float xmm0;

loc_00484260: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D194) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484280
 * Original: 0x00484280 - 0x0048428B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484280(void)
{

loc_00484280: ;
    MEM32(0x85D198) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484290
 * Original: 0x00484290 - 0x0048429B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484290(void)
{

loc_00484290: ;
    MEM32(0x85D19C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004842A0
 * Original: 0x004842A0 - 0x004842AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004842A0(void)
{

loc_004842A0: ;
    MEM32(0x85D1A0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004842B0
 * Original: 0x004842B0 - 0x004842BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004842B0(void)
{

loc_004842B0: ;
    MEM32(0x85D5A8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004842C0
 * Original: 0x004842C0 - 0x004842D1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004842C0(void)
{
    float xmm0;

loc_004842C0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85D5AC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004842E0
 * Original: 0x004842E0 - 0x004842F1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004842E0(void)
{
    float xmm0;

loc_004842E0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85D5B0) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484300
 * Original: 0x00484300 - 0x0048430C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484300(void)
{

loc_00484300: ;
    PUSH32(esp, 0x48C5C0);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_0048430A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00484310
 * Original: 0x00484310 - 0x0048432E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484310(void)
{

loc_00484310: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x7F;
    edi = 0x85D5BC;
    PUSH32(esp, 0x48C5D0);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00484329: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00484330
 * Original: 0x00484330 - 0x0048435D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00484330: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x85D7B8;
    edi = 0x80;
    /* nop */

loc_00484340: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00130CF0(); /* call 0x00130CF0 */

loc_00484347: ;
    esi = esi + 0xC;
    edi--;
    if ((edi != 0)) goto loc_00484340; /* jne: not equal / not zero */

loc_0048434D: ;
    PUSH32(esp, 0x48C5E0);
    PUSH32(esp, 0); sub_0046ED65(); /* call 0x0046ED65 */

loc_00484357: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00484360
 * Original: 0x00484360 - 0x00484371 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484360(void)
{
    float xmm0;

loc_00484360: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DDB8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484380
 * Original: 0x00484380 - 0x00484391 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484380(void)
{
    float xmm0;

loc_00484380: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DDBC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004843A0
 * Original: 0x004843A0 - 0x004843AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004843A0(void)
{

loc_004843A0: ;
    MEM32(0x85DDC0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004843B0
 * Original: 0x004843B0 - 0x004843BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004843B0(void)
{

loc_004843B0: ;
    MEM32(0x85DDC4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004843C0
 * Original: 0x004843C0 - 0x004843CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004843C0(void)
{

loc_004843C0: ;
    MEM32(0x85DDC8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004843D0
 * Original: 0x004843D0 - 0x004843E1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004843D0(void)
{
    float xmm0;

loc_004843D0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DDCC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004843F0
 * Original: 0x004843F0 - 0x00484401 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004843F0(void)
{
    float xmm0;

loc_004843F0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DDD0) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484410
 * Original: 0x00484410 - 0x0048441B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484410(void)
{

loc_00484410: ;
    MEM32(0x85DDD4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484420
 * Original: 0x00484420 - 0x00484431 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484420(void)
{
    float xmm0;

loc_00484420: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DDD8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484440
 * Original: 0x00484440 - 0x00484451 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484440(void)
{
    float xmm0;

loc_00484440: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DDDC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484460
 * Original: 0x00484460 - 0x0048446B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484460(void)
{

loc_00484460: ;
    MEM32(0x85DDE0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484470
 * Original: 0x00484470 - 0x0048447B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484470(void)
{

loc_00484470: ;
    MEM32(0x85DDE4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484480
 * Original: 0x00484480 - 0x00484491 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484480(void)
{
    float xmm0;

loc_00484480: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DDE8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004844A0
 * Original: 0x004844A0 - 0x004844B1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004844A0(void)
{
    float xmm0;

loc_004844A0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DDEC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004844C0
 * Original: 0x004844C0 - 0x004844CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004844C0(void)
{

loc_004844C0: ;
    MEM32(0x85DDF0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004844D0
 * Original: 0x004844D0 - 0x004844DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004844D0(void)
{

loc_004844D0: ;
    MEM32(0x85DDF4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004844E0
 * Original: 0x004844E0 - 0x004844EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004844E0(void)
{

loc_004844E0: ;
    MEM32(0x85DDF8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004844F0
 * Original: 0x004844F0 - 0x00484501 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004844F0(void)
{
    float xmm0;

loc_004844F0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DDFC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484510
 * Original: 0x00484510 - 0x00484521 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484510(void)
{
    float xmm0;

loc_00484510: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DE00) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484530
 * Original: 0x00484530 - 0x0048453B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484530(void)
{

loc_00484530: ;
    MEM32(0x85DE04) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484540
 * Original: 0x00484540 - 0x0048454B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484540(void)
{

loc_00484540: ;
    MEM32(0x85DE08) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484550
 * Original: 0x00484550 - 0x0048455B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484550(void)
{

loc_00484550: ;
    MEM32(0x85DE0C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484560
 * Original: 0x00484560 - 0x0048456B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484560(void)
{

loc_00484560: ;
    MEM32(0x85DE10) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484570
 * Original: 0x00484570 - 0x0048457B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484570(void)
{

loc_00484570: ;
    MEM32(0x85DE14) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484580
 * Original: 0x00484580 - 0x0048458B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484580(void)
{

loc_00484580: ;
    MEM32(0x85DE18) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484590
 * Original: 0x00484590 - 0x004845A1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484590(void)
{
    float xmm0;

loc_00484590: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DE1C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004845B0
 * Original: 0x004845B0 - 0x004845C1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004845B0(void)
{
    float xmm0;

loc_004845B0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DE20) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004845D0
 * Original: 0x004845D0 - 0x004845DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004845D0(void)
{

loc_004845D0: ;
    MEM32(0x85DE24) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004845E0
 * Original: 0x004845E0 - 0x004845EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004845E0(void)
{

loc_004845E0: ;
    MEM32(0x85DE28) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004845F0
 * Original: 0x004845F0 - 0x00484601 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004845F0(void)
{
    float xmm0;

loc_004845F0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DE2C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484610
 * Original: 0x00484610 - 0x00484621 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484610(void)
{
    float xmm0;

loc_00484610: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DE30) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484630
 * Original: 0x00484630 - 0x0048463B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484630(void)
{

loc_00484630: ;
    MEM32(0x85DE34) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484640
 * Original: 0x00484640 - 0x0048464B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484640(void)
{

loc_00484640: ;
    MEM32(0x85DE38) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484650
 * Original: 0x00484650 - 0x0048465B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484650(void)
{

loc_00484650: ;
    MEM32(0x85DE3C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484660
 * Original: 0x00484660 - 0x0048466B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484660(void)
{

loc_00484660: ;
    MEM32(0x85DE40) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484670
 * Original: 0x00484670 - 0x0048467B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484670(void)
{

loc_00484670: ;
    MEM32(0x85DE44) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484680
 * Original: 0x00484680 - 0x0048468B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484680(void)
{

loc_00484680: ;
    MEM32(0x85DE48) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484690
 * Original: 0x00484690 - 0x0048469B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484690(void)
{

loc_00484690: ;
    MEM32(0x85DE4C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004846A0
 * Original: 0x004846A0 - 0x004846AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004846A0(void)
{

loc_004846A0: ;
    MEM32(0x85DE50) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004846B0
 * Original: 0x004846B0 - 0x004846BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004846B0(void)
{

loc_004846B0: ;
    MEM32(0x85DE54) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004846C0
 * Original: 0x004846C0 - 0x004846CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004846C0(void)
{

loc_004846C0: ;
    MEM32(0x85DE58) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004846D0
 * Original: 0x004846D0 - 0x004846DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004846D0(void)
{

loc_004846D0: ;
    MEM32(0x85DE5C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004846E0
 * Original: 0x004846E0 - 0x004846F1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004846E0(void)
{
    float xmm0;

loc_004846E0: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DE60) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484700
 * Original: 0x00484700 - 0x00484711 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484700(void)
{
    float xmm0;

loc_00484700: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DE64) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484720
 * Original: 0x00484720 - 0x0048472B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484720(void)
{

loc_00484720: ;
    MEM32(0x85DE68) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484730
 * Original: 0x00484730 - 0x00484741 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484730(void)
{
    float xmm0;

loc_00484730: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DE6C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484750
 * Original: 0x00484750 - 0x00484761 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484750(void)
{
    float xmm0;

loc_00484750: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DE70) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484770
 * Original: 0x00484770 - 0x0048477B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484770(void)
{

loc_00484770: ;
    MEM32(0x85DE74) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484780
 * Original: 0x00484780 - 0x00484791 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484780(void)
{
    float xmm0;

loc_00484780: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DE78) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004847A0
 * Original: 0x004847A0 - 0x004847B1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004847A0(void)
{
    float xmm0;

loc_004847A0: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DE7C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_004847C0
 * Original: 0x004847C0 - 0x004847CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004847C0(void)
{

loc_004847C0: ;
    MEM32(0x85DE80) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004847D0
 * Original: 0x004847D0 - 0x004847DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004847D0(void)
{

loc_004847D0: ;
    MEM32(0x85DE84) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004847E0
 * Original: 0x004847E0 - 0x004847EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004847E0(void)
{

loc_004847E0: ;
    MEM32(0x85DE88) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004847F0
 * Original: 0x004847F0 - 0x004847FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004847F0(void)
{

loc_004847F0: ;
    MEM32(0x85DE8C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484800
 * Original: 0x00484800 - 0x0048480B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484800(void)
{

loc_00484800: ;
    MEM32(0x85DE90) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484810
 * Original: 0x00484810 - 0x0048481B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484810(void)
{

loc_00484810: ;
    MEM32(0x85DE94) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484820
 * Original: 0x00484820 - 0x00484831 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484820(void)
{
    float xmm0;

loc_00484820: ;
    xmm0 = MEMF(0x648D70); /* movss */
    MEMF(0x85DE98) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484840
 * Original: 0x00484840 - 0x00484851 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484840(void)
{
    float xmm0;

loc_00484840: ;
    xmm0 = MEMF(0x64B41C); /* movss */
    MEMF(0x85DE9C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00484860
 * Original: 0x00484860 - 0x0048486B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484860(void)
{

loc_00484860: ;
    MEM32(0x85DEA0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484870
 * Original: 0x00484870 - 0x0048487B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484870(void)
{

loc_00484870: ;
    MEM32(0x85DEA4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484880
 * Original: 0x00484880 - 0x0048488B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484880(void)
{

loc_00484880: ;
    MEM32(0x85DEA8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00484890
 * Original: 0x00484890 - 0x0048489B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00484890(void)
{

loc_00484890: ;
    MEM32(0x85DEAC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004848A0
 * Original: 0x004848A0 - 0x004848AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004848A0(void)
{

loc_004848A0: ;
    MEM32(0x85DEB0) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004848B0
 * Original: 0x004848B0 - 0x004848BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004848B0(void)
{

loc_004848B0: ;
    MEM32(0x85DEB4) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004848C0
 * Original: 0x004848C0 - 0x004848CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004848C0(void)
{

loc_004848C0: ;
    MEM32(0x85DEB8) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004848D0
 * Original: 0x004848D0 - 0x004848DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004848D0(void)
{

loc_004848D0: ;
    MEM32(0x85DEBC) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_004848E0
 * Original: 0x004848E0 - 0x004848EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004848E0(void)
{

loc_004848E0: ;
    MEM32(0x85DEC0) = 0xA;
    esp += 4; return; /* ret */

}
