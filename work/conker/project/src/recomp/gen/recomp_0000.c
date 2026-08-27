/**
 * Burnout 3 - Recompiled code chunk 0
 * Functions: 250 (0x00011000 - 0x0001ACD0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00011000
 * Original: 0x00011000 - 0x0001106B (107 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011000(void)
{

loc_00011000: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0029E6B0(); /* call 0x0029E6B0 */

loc_00011008: ;
    eax = 0xFF;
    edx = 0x32;
    ecx = 0x80;
    MEM32(edi + 0x30) = eax;
    MEM32(edi + 0x34) = eax;
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x40) = eax;
    MEM32(edi + 0x50) = eax;
    MEM32(edi + 0x54) = eax;
    MEM32(edi + 0x60) = eax;
    MEM32(edi) = 0x587BD4;
    MEM32(edi + 0x24) = 0;
    MEM32(edi + 0x28) = 0xC8;
    MEM32(edi + 0x2C) = 0;
    MEM32(edi + 0x3C) = edx;
    MEM32(edi + 0x44) = ecx;
    MEM32(edi + 0x48) = ecx;
    MEM32(edi + 0x4C) = ecx;
    MEM32(edi + 0x58) = edx;
    MEM32(edi + 0x5C) = edx;
    MEM32(edi + 0x64) = 0;
    eax = edi;
    MEM8(0x847047) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011070
 * Original: 0x00011070 - 0x000110A3 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011070(void)
{
    int _flags = 0; /* fallback flag var */

loc_00011070: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x587BD4;
    MEM8(0x847047) = 0;
    PUSH32(esp, 0); sub_0029E7C0(); /* call 0x0029E7C0 */

loc_00011085: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0001109D; /* je: equal / zero */

loc_0001108C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001109A: ;
    esp = esp + 4;

loc_0001109D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000110B0
 * Original: 0x000110B0 - 0x000110F3 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000110B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000110B0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = MEM32(ebp + 4);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 8) = eax;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000110CB: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 4) = eax;
    if (CMP_NE(eax, ebx)) { sub_000110F3(); return; } /* jne: not equal / not zero */

loc_000110D7: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_000110E7: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000116D0
 * Original: 0x000116D0 - 0x000116E6 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000116D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000116D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8086E8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) { sub_000116E6(); return; } /* jne: not equal / not zero */

loc_000116DF: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_000116E4: ;
    g_seh_ebp = ebp; sub_000116EB(); return; /* tail jmp 0x000116EB */

}

/**
 * sub_000118A0
 * Original: 0x000118A0 - 0x00011A73 (467 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000118A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000118A0: ;
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    eax = MEM32(ebx + eax + 0x24);
    if (CMP_A(eax, 0xB)) goto loc_00011A6E; /* ja: above (unsigned >) */

loc_000118BB: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x11AC4)); return; /* indirect tail jmp */

    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_000118C9: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_000118D7; /* je: equal / zero */

loc_000118D0: ;
    PUSH32(esp, 0); sub_00011F90(); /* call 0x00011F90 */

loc_000118D5: ;
    goto loc_000118D9;

loc_000118D7: ;
    eax = 0; /* xor self */

loc_000118D9: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    if (CMP_EQ(MEM32(edx + esi * 4), 0)) goto loc_00011A5A; /* je: equal / zero */

loc_000118EC: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    eax = eax + ebx;
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00011908: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00011916; /* je: equal / zero */

loc_0001190F: ;
    PUSH32(esp, 0); sub_000120A0(); /* call 0x000120A0 */

loc_00011914: ;
    goto loc_00011918;

loc_00011916: ;
    eax = 0; /* xor self */

loc_00011918: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    if (CMP_EQ(MEM32(edx + esi * 4), 0)) goto loc_00011A5A; /* je: equal / zero */

loc_0001192B: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    eax = eax + ebx;
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00011947: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00011955; /* je: equal / zero */

loc_0001194E: ;
    PUSH32(esp, 0); sub_00012210(); /* call 0x00012210 */

loc_00011953: ;
    goto loc_00011957;

loc_00011955: ;
    eax = 0; /* xor self */

loc_00011957: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    if (CMP_EQ(MEM32(edx + esi * 4), 0)) goto loc_00011A5A; /* je: equal / zero */

loc_0001196A: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    eax = eax + ebx;
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00011986: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00011994; /* je: equal / zero */

loc_0001198D: ;
    PUSH32(esp, 0); sub_000122C0(); /* call 0x000122C0 */

loc_00011992: ;
    goto loc_00011996;

loc_00011994: ;
    eax = 0; /* xor self */

loc_00011996: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    if (CMP_EQ(MEM32(edx + esi * 4), 0)) goto loc_00011A5A; /* je: equal / zero */

loc_000119A9: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    eax = eax + ebx;
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_000119C5: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_000119D3; /* je: equal / zero */

loc_000119CC: ;
    PUSH32(esp, 0); sub_00012310(); /* call 0x00012310 */

loc_000119D1: ;
    goto loc_000119D5;

loc_000119D3: ;
    eax = 0; /* xor self */

loc_000119D5: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    if (CMP_EQ(MEM32(edx + esi * 4), 0)) goto loc_00011A5A; /* je: equal / zero */

loc_000119E4: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    eax = eax + ebx;
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00011A00: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00011A0E; /* je: equal / zero */

loc_00011A07: ;
    PUSH32(esp, 0); sub_00012380(); /* call 0x00012380 */

loc_00011A0C: ;
    goto loc_00011A10;

loc_00011A0E: ;
    eax = 0; /* xor self */

loc_00011A10: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    if (CMP_EQ(MEM32(edx + esi * 4), 0)) goto loc_00011A5A; /* je: equal / zero */

loc_00011A1F: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    eax = eax + ebx;
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_00011A3B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00011A49; /* je: equal / zero */

loc_00011A42: ;
    PUSH32(esp, 0); sub_000123E0(); /* call 0x000123E0 */

loc_00011A47: ;
    goto loc_00011A4B;

loc_00011A49: ;
    eax = 0; /* xor self */

loc_00011A4B: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    if (CMP_NE(MEM32(edx + esi * 4), 0)) { sub_00011A73(); return; } /* jne: not equal / not zero */

loc_00011A5A: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00011A6B: ;
    esp = esp + 0xC;

loc_00011A6E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011B30
 * Original: 0x00011B30 - 0x00011B60 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011B30: ;
    eax = MEM32(esp + 0xC);
    eax--;
    if (((int32_t)eax < 0)) goto loc_00011B5D; /* js: sign (negative) */

loc_00011B37: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_00011B50: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_00011B54: ;
    esi = esi + ebp;
    edi--;
    if ((edi != 0)) goto loc_00011B50; /* jne: not equal / not zero */

loc_00011B59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00011B5D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00011B80
 * Original: 0x00011B80 - 0x00011BAA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011B80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00011B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00011BB0(); /* call 0x00011BB0 */

loc_00011B88: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00011BA4; /* je: equal / zero */

loc_00011B8F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00011BA4; /* je: equal / zero */

loc_00011B97: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00011BA1: ;
    esp = esp + 4;

loc_00011BA4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011BB0
 * Original: 0x00011BB0 - 0x00011C06 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011BB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00011BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x5AC5B8;
    if (TEST_Z(eax, eax)) goto loc_00011BD0; /* je: equal / zero */

loc_00011BC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00011BC6: ;
    esp = esp + 4;
    MEM32(esi + 0x18) = 0;

loc_00011BD0: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00011BE7; /* je: equal / zero */

loc_00011BD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00011BDD: ;
    esp = esp + 4;
    MEM32(esi + 0x1C) = 0;

loc_00011BE7: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x60654C;
    if (TEST_Z(eax, eax)) goto loc_00011C04; /* je: equal / zero */

loc_00011BF4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00011BFA: ;
    esp = esp + 4;
    MEM32(esi + 0xC) = 0;

loc_00011C04: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011C10
 * Original: 0x00011C10 - 0x00011C3C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011C10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    edi = MEM32(ebp);
    PUSH32(esp, 0); sub_0029ECC0(); /* call 0x0029ECC0 */

loc_00011C27: ;
    ecx = MEM32(ebp + 0x24);
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(ebp + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (TEST_NZ(eax, eax)) { sub_00011C3C(); return; } /* jne: not equal / not zero */

loc_00011C37: ;
    MEM32(esi + 0x10) = eax;
    g_seh_ebp = ebp; sub_00011C48(); return; /* tail jmp 0x00011C48 */

}

/**
 * sub_00011D10
 * Original: 0x00011D10 - 0x00011D4E (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00011D10: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    if (TEST_Z(esi, esi)) goto loc_00011D4A; /* je: equal / zero */

loc_00011D18: ;
    edx = MEM32(ecx + 0x1C);
    if (TEST_Z(edx, edx)) goto loc_00011D4A; /* je: equal / zero */

loc_00011D1F: ;
    eax = MEM32(ecx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00011D4A; /* je: equal / zero */

loc_00011D26: ;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    (void)0; /* cmp MEM8(esi), 0 - flags set for next jcc */
    if (CMP_EQ(MEM8(esi), 0)) eax = edx; /* cmove */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC660);
    PUSH32(esp, 0); sub_001F6340(); /* call 0x001F6340 */

loc_00011D47: ;
    esp = esp + 0xC;

loc_00011D4A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00011D50
 * Original: 0x00011D50 - 0x00011D60 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00011D50: ;
    eax = MEM32(ecx + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00011D5F; /* je: equal / zero */

loc_00011D57: ;
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM8(eax), 0)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);

loc_00011D5F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011DC0
 * Original: 0x00011DC0 - 0x00011E1F (95 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011DC0(void)
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

loc_00011DC0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 > MEMF(esp + 8))) goto loc_00011DE4; /* ja: above (unsigned >) */

loc_00011DDC: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_00011DE4: ;
    xmm1 = MEMF(ecx + 0x24); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 0x20); /* subss */
    xmm1 = xmm1 * MEMF(esp); /* mulss */
    eax = MEM32(ecx + 0x28);
    xmm1 = xmm1 + MEMF(ecx + 0x20); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    eax = MEM32(ecx + 0x28);
    xmm0 = MEMF(ecx + 0x18); /* movss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax))) { sub_00011E1F(); return; } /* jbe: below or equal (unsigned <=) */

loc_00011E14: ;
    edx = eax;
    eax = MEM32(ecx + 0x18);
    MEM32(edx) = eax;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00011E40
 * Original: 0x00011E40 - 0x00011E6F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011E40(void)
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

loc_00011E40: ;
    eax = MEM32(ecx + 0x28);
    if (TEST_Z(eax, eax)) goto loc_00011E6C; /* je: equal / zero */

loc_00011E47: ;
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(ecx + 0xC);
    xmm1 = MEMF(esp + 8); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC654);
    PUSH32(esp, 0); sub_001F6340(); /* call 0x001F6340 */

loc_00011E69: ;
    esp = esp + 0x10;

loc_00011E6C: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00011E70
 * Original: 0x00011E70 - 0x00011E9B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011E70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    edi = MEM32(ebx);
    PUSH32(esp, 0); sub_0029ECC0(); /* call 0x0029ECC0 */

loc_00011E86: ;
    ecx = MEM32(ebx + 0x24);
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(ebx + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (TEST_NZ(eax, eax)) { sub_00011E9B(); return; } /* jne: not equal / not zero */

loc_00011E96: ;
    MEM32(esi + 0x10) = eax;
    g_seh_ebp = ebp; sub_00011EA7(); return; /* tail jmp 0x00011EA7 */

}

/**
 * sub_00011EE0
 * Original: 0x00011EE0 - 0x00011F44 (100 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011EE0(void)
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

loc_00011EE0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm1 = MEMF(0x648D34); /* movss */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 > MEMF(esp + 8))) goto loc_00011F04; /* ja: above (unsigned >) */

loc_00011EFC: ;
    xmm1 = MEMF(0x648D14); /* movss */

loc_00011F04: ;
    xmm0 = MEMF(ecx + 0x24); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x20); /* subss */
    xmm0 = xmm0 * MEMF(esp); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x20); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x28); /* addss */
    xmm1 = MEMF(ecx + 0x18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ecx + 0x28) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_00011F44(); return; } /* jbe: below or equal (unsigned <=) */

loc_00011F30: ;
    eax = MEM32(ecx + 0x18);
    MEM32(ecx + 0x28) = eax;
    eax = (int32_t)MEMF(ecx + 0x28); /* cvttss2si */
    ecx = MEM32(ecx + 0x2C);
    MEM32(ecx) = eax;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00011F60
 * Original: 0x00011F60 - 0x00011F8A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00011F60: ;
    eax = MEM32(ecx + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00011F87; /* je: equal / zero */

loc_00011F67: ;
    eax = MEM32(eax);
    ecx = MEM32(ecx + 0xC);
    xmm1 = MEMF(esp + 8); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AC648);
    PUSH32(esp, 0); sub_001F6340(); /* call 0x001F6340 */

loc_00011F84: ;
    esp = esp + 0xC;

loc_00011F87: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00011F90
 * Original: 0x00011F90 - 0x00011FB5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F90(void)
{

loc_00011F90: ;
    ecx = 0; /* xor self */
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax) = 0x5AC540;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00011FC0
 * Original: 0x00011FC0 - 0x00011FEA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011FC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00011FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00011FF0(); /* call 0x00011FF0 */

loc_00011FC8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00011FE4; /* je: equal / zero */

loc_00011FCF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00011FE4; /* je: equal / zero */

loc_00011FD7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00011FE1: ;
    esp = esp + 4;

loc_00011FE4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011FF0
 * Original: 0x00011FF0 - 0x00012046 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00011FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x5AC540;
    if (TEST_Z(eax, eax)) goto loc_00012010; /* je: equal / zero */

loc_00012000: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00012006: ;
    esp = esp + 4;
    MEM32(esi + 0x18) = 0;

loc_00012010: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00012027; /* je: equal / zero */

loc_00012017: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0001201D: ;
    esp = esp + 4;
    MEM32(esi + 0x1C) = 0;

loc_00012027: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x60654C;
    if (TEST_Z(eax, eax)) goto loc_00012044; /* je: equal / zero */

loc_00012034: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0001203A: ;
    esp = esp + 4;
    MEM32(esi + 0xC) = 0;

loc_00012044: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012050
 * Original: 0x00012050 - 0x00012097 (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012050(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012050: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FE8) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FE9) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FEA) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FEB) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FEC) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FED) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FEE) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x20));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(ecx + 0x20) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_000120A0
 * Original: 0x000120A0 - 0x000120C5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120A0(void)
{

loc_000120A0: ;
    ecx = 0; /* xor self */
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax) = 0x5AC528;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000120D0
 * Original: 0x000120D0 - 0x000120FA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000120D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00012100(); /* call 0x00012100 */

loc_000120D8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000120F4; /* je: equal / zero */

loc_000120DF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_000120F4; /* je: equal / zero */

loc_000120E7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000120F1: ;
    esp = esp + 4;

loc_000120F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012100
 * Original: 0x00012100 - 0x00012156 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012100(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012100: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x5AC528;
    if (TEST_Z(eax, eax)) goto loc_00012120; /* je: equal / zero */

loc_00012110: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00012116: ;
    esp = esp + 4;
    MEM32(esi + 0x18) = 0;

loc_00012120: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00012137; /* je: equal / zero */

loc_00012127: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0001212D: ;
    esp = esp + 4;
    MEM32(esi + 0x1C) = 0;

loc_00012137: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x60654C;
    if (TEST_Z(eax, eax)) goto loc_00012154; /* je: equal / zero */

loc_00012144: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0001214A: ;
    esp = esp + 4;
    MEM32(esi + 0xC) = 0;

loc_00012154: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012160
 * Original: 0x00012160 - 0x00012201 (161 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012160(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012160: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FEF) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF0) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FF1) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF2) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FF3) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF4) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FF5) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF6) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FF7) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF8) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FFC) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FFD) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FFE) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FFF) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF9) = LO8(edx);
    MEM8(0x847031) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FFA) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FFB) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(ecx + 0x20) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00012210
 * Original: 0x00012210 - 0x0001222B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012210(void)
{

loc_00012210: ;
    ecx = ecx | 0xFFFFFFFFu;
    edx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC630;
    esp += 4; return; /* ret */

}

/**
 * sub_00012230
 * Original: 0x00012230 - 0x0001226E (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012230: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x60654C;
    if (TEST_Z(eax, eax)) goto loc_00012250; /* je: equal / zero */

loc_00012240: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00012246: ;
    esp = esp + 4;
    MEM32(esi + 0xC) = 0;

loc_00012250: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00012268; /* je: equal / zero */

loc_00012257: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00012265: ;
    esp = esp + 4;

loc_00012268: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012270
 * Original: 0x00012270 - 0x000122B8 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012270(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012270: ;
    eax = MEM32(0x8470DC);
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) goto loc_000122B7; /* je: equal / zero */

loc_0001227F: ;
    ecx = MEM32(0x657C4C);
    if (TEST_Z(ecx, ecx)) goto loc_000122B0; /* je: equal / zero */

loc_00012289: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xB);
    eax = eax + 0x78;
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000122B0: ;
    MEM8(0x847034) = 1;

loc_000122B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000122C0
 * Original: 0x000122C0 - 0x000122DB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000122C0(void)
{

loc_000122C0: ;
    ecx = ecx | 0xFFFFFFFFu;
    edx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC618;
    esp += 4; return; /* ret */

}

/**
 * sub_000122E0
 * Original: 0x000122E0 - 0x00012309 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000122E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000122E0: ;
    SET_LO8(eax, MEM8(0x847034));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00012308; /* je: equal / zero */

loc_000122E9: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB;
    PUSH32(esp, 0); sub_00025660(); /* call 0x00025660 */

loc_00012301: ;
    MEM8(0x847034) = 0;

loc_00012308: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012310
 * Original: 0x00012310 - 0x0001232B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012310(void)
{

loc_00012310: ;
    ecx = ecx | 0xFFFFFFFFu;
    edx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC600;
    esp += 4; return; /* ret */

}

/**
 * sub_00012330
 * Original: 0x00012330 - 0x00012368 (56 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012330: ;
    ecx = MEM32(ecx + 0x14);
    eax = ecx + -4;
    if (CMP_A(eax, 3)) goto loc_00012367; /* ja: above (unsigned >) */

loc_0001233B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x12368); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00012342u) goto loc_00012342;
    if (_jt == 0x00012347u) goto loc_00012347;
    if (_jt == 0x0001234Cu) goto loc_0001234C;
    if (_jt == 0x00012351u) goto loc_00012351;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00012342: ;
    g_seh_ebp = ebp; sub_00015FC0(); return; /* tail jmp 0x00015FC0 */

loc_00012347: ;
    g_seh_ebp = ebp; sub_00015F80(); return; /* tail jmp 0x00015F80 */

loc_0001234C: ;
    g_seh_ebp = ebp; sub_000160B0(); return; /* tail jmp 0x000160B0 */

loc_00012351: ;
    PUSH32(esp, 0); sub_00015FC0(); /* call 0x00015FC0 */

loc_00012356: ;
    SET_LO8(eax, 1);
    MEM8(0x846FE8) = LO8(eax);
    MEM8(0x846FE9) = LO8(eax);
    MEM8(0x846FEA) = LO8(eax);

loc_00012367: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012380
 * Original: 0x00012380 - 0x000123A4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012380(void)
{

loc_00012380: ;
    ecx = 0; /* xor self */
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax) = 0x5AC5D0;
    esp += 4; return; /* ret */

}

/**
 * sub_000123B0
 * Original: 0x000123B0 - 0x000123DC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000123B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000123B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5AC5D0;
    PUSH32(esp, 0); sub_00011BB0(); /* call 0x00011BB0 */

loc_000123BE: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000123D6; /* je: equal / zero */

loc_000123C5: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000123D3: ;
    esp = esp + 4;

loc_000123D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000123E0
 * Original: 0x000123E0 - 0x000123FB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000123E0(void)
{

loc_000123E0: ;
    ecx = ecx | 0xFFFFFFFFu;
    edx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC5A0;
    esp += 4; return; /* ret */

}

/**
 * sub_00012400
 * Original: 0x00012400 - 0x0001240C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012400(void)
{

loc_00012400: ;
    eax = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00018430(); /* call 0x00018430 */

loc_0001240B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012410
 * Original: 0x00012410 - 0x00012435 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012410(void)
{

loc_00012410: ;
    ecx = 0; /* xor self */
    edx = edx | 0xFFFFFFFFu;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax) = 0x5AC570;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00012440
 * Original: 0x00012440 - 0x0001246A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012440: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00012470(); /* call 0x00012470 */

loc_00012448: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00012464; /* je: equal / zero */

loc_0001244F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00012464; /* je: equal / zero */

loc_00012457: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00012461: ;
    esp = esp + 4;

loc_00012464: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012470
 * Original: 0x00012470 - 0x000124C6 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012470(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012470: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x5AC570;
    if (TEST_Z(eax, eax)) goto loc_00012490; /* je: equal / zero */

loc_00012480: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00012486: ;
    esp = esp + 4;
    MEM32(esi + 0x18) = 0;

loc_00012490: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_000124A7; /* je: equal / zero */

loc_00012497: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0001249D: ;
    esp = esp + 4;
    MEM32(esi + 0x1C) = 0;

loc_000124A7: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x60654C;
    if (TEST_Z(eax, eax)) goto loc_000124C4; /* je: equal / zero */

loc_000124B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_000124BA: ;
    esp = esp + 4;
    MEM32(esi + 0xC) = 0;

loc_000124C4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000124D0
 * Original: 0x000124D0 - 0x000124FC (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000124D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000124D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    edi = MEM32(ebp);
    PUSH32(esp, 0); sub_0029ECC0(); /* call 0x0029ECC0 */

loc_000124E7: ;
    ecx = MEM32(ebp + 0x24);
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(ebp + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (TEST_NZ(eax, eax)) { sub_000124FC(); return; } /* jne: not equal / not zero */

loc_000124F7: ;
    MEM32(esi + 0x10) = eax;
    g_seh_ebp = ebp; sub_00012508(); return; /* tail jmp 0x00012508 */

}

/**
 * sub_000125C0
 * Original: 0x000125C0 - 0x000125F9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000125C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000125C0: ;
    edx = MEM32(ecx + 0x1C);
    if (TEST_Z(edx, edx)) goto loc_000125F6; /* je: equal / zero */

loc_000125C7: ;
    eax = MEM32(ecx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_000125F6; /* je: equal / zero */

loc_000125CE: ;
    xmm1 = MEMF(esp + 8); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x20));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) eax = edx; /* cmove */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC660);
    PUSH32(esp, 0); sub_001F6340(); /* call 0x001F6340 */

loc_000125F3: ;
    esp = esp + 0xC;

loc_000125F6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012600
 * Original: 0x00012600 - 0x00012622 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012600(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012600: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(0x802024);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00012622(); return; } /* je: equal / zero */

loc_0001260D: ;
    edx = edx | 0x80000000u;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM32(0x802024) = edx;
    MEM8(ecx + 0x20) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00012640
 * Original: 0x00012640 - 0x00012671 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012640(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00012640: ;
    eax = MEM32(ecx + 0x20);
    if (CMP_NE(eax, MEM32(esp + 4))) { sub_00012671(); return; } /* jne: not equal / not zero */

loc_00012649: ;
    xmm0 = MEMF(ecx + 0x14); /* movss */
    /* ucomiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00012671(); return; } /* jp: parity */

loc_00012659: ;
    xmm0 = MEMF(ecx + 0x18); /* movss */
    /* ucomiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00012671(); return; } /* jp: parity */

loc_00012669: ;
    eax = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00012680
 * Original: 0x00012680 - 0x000126A7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012680(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012680: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5AC670;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_000126A1; /* je: equal / zero */

loc_00012690: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001269E: ;
    esp = esp + 4;

loc_000126A1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000126B0
 * Original: 0x000126B0 - 0x000127DD (301 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000126B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000126B0: ;
    PUSH32(esp, ecx);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = ecx;
    /* comiss xmm0, MEMF(ebp + 0x1C) - sets EFLAGS */
    if ((xmm0 < MEMF(ebp + 0x1C))) { sub_000127DD(); return; } /* jb: below (unsigned <) */

loc_000126C1: ;
    xmm5 = MEMF(ebp + 0x18); /* movss */
    xmm6 = MEMF(ebp + 0x14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000126D2: ;
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(ebp + 0x1C) = xmm0; /* movss */
    SET_LO8(eax, MEM8(0x846FEF));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001270F; /* je: equal / zero */

loc_000126F2: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esi = MEM32(0x847024);
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x5AC688);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001270C: ;
    esp = esp + 0xC;

loc_0001270F: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001271D; /* jne: not equal / not zero */

loc_00012718: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001271D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00012765; /* je: equal / zero */

loc_00012743: ;
    if (CMP_B(MEM32(esi + 0x80), 0x44)) goto loc_00012765; /* jb: below (unsigned <) */

loc_0001274C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00012756: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001275E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00012786; /* jne: not equal / not zero */

loc_00012765: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00012777: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001277F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00012791; /* je: equal / zero */

loc_00012786: ;
    PUSH32(esp, 0); sub_000209B0(); /* call 0x000209B0 */

loc_0001278B: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_000127AC; /* jne: not equal / not zero */

loc_00012791: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_000127A2: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000127AC: ;
    eax = MEM32(ebp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_000127BA; /* je: equal / zero */

loc_000127B3: ;
    eax = eax ^ 0xFFFF;
    goto loc_000127BC;

loc_000127BA: ;
    eax = 0; /* xor self */

loc_000127BC: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    ebx = ebx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00020D10(); /* call 0x00020D10 */

loc_000127CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x28);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_000127D5: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00012800
 * Original: 0x00012800 - 0x000128B4 (180 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012800(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012800: ;
    eax = MEM32(0x84700C);
    if (TEST_NZ(eax, eax)) goto loc_000128B3; /* jne: not equal / not zero */

loc_0001280D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001281B; /* jne: not equal / not zero */

loc_00012816: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001281B: ;
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
    if (TEST_Z(esi, esi)) goto loc_00012865; /* je: equal / zero */

loc_00012843: ;
    if (CMP_B(MEM32(esi + 0x80), 4)) goto loc_00012865; /* jb: below (unsigned <) */

loc_0001284C: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00012856: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001285E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00012886; /* jne: not equal / not zero */

loc_00012865: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00012877: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001287F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0001288E; /* je: equal / zero */

loc_00012886: ;
    POP32(esp, edi);
    MEM32(0x84700C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001288E: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    MEM32(0x84700C) = 0;
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_000128A9: ;
    eax = MEM32(0x84700C);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000128B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000128C0
 * Original: 0x000128C0 - 0x000128F7 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000128C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000128C0: ;
    SET_LO8(ecx, MEM8(eax + 9));
    esp = esp - 8;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_000128F7(); return; } /* jne: not equal / not zero */

loc_000128CA: ;
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM8(eax + 9) = 1;
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x18) = xmm0; /* movss */
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012950
 * Original: 0x00012950 - 0x00012A15 (197 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012950(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00012950: ;
    if (TEST_Z(ecx, ecx)) goto loc_00012A12; /* je: equal / zero */

loc_00012958: ;
    SET_LO8(edx, MEM8(eax + 0x1C));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00012A12; /* jne: not equal / not zero */

loc_00012963: ;
    SET_LO8(edx, MEM8(eax + 9));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000129AD; /* je: equal / zero */

loc_0001296A: ;
    xmm0 = MEMF(eax + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA218); /* addss */
    /* comiss xmm0, MEMF(eax + 0x14) - sets EFLAGS */
    MEMF(eax + 0x18) = xmm0; /* movss */
    if ((xmm0 < MEMF(eax + 0x14))) goto loc_0001298E; /* jb: below (unsigned <) */

loc_00012982: ;
    edx = MEM32(eax + 0x10);
    MEM32(eax + 4) = edx;
    MEM8(eax + 9) = 0;
    goto loc_000129B5;

loc_0001298E: ;
    xmm0 = xmm0 / MEMF(eax + 0x14); /* divss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0xC); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 4) = xmm0; /* movss */
    goto loc_000129B5;

loc_000129AD: ;
    SET_LO8(edx, MEM8(esp + 4));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00012A12; /* je: equal / zero */

loc_000129B5: ;
    xmm0 = MEMF(eax + 4); /* movss */
    xmm1 = MEMF(0x648D2C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000129EC; /* jbe: below or equal (unsigned <=) */

loc_000129CD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 8);
    MEMF(esp + 4) = xmm0; /* movss */
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00400E40(); /* call 0x00400E40 */

loc_000129E6: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_000129EC: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000129FF; /* jbe: below or equal (unsigned <=) */

loc_000129F9: ;
    MEMF(esp + 4) = xmm1; /* movss */

loc_000129FF: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00400E40(); /* call 0x00400E40 */

loc_00012A0F: ;
    esp = esp + 0xC;

loc_00012A12: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012A20
 * Original: 0x00012A20 - 0x00012A66 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A20(void)
{

loc_00012A20: ;
    MEM32(esi) = 0x5AC6A4;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_000140A0(); /* call 0x000140A0 */

loc_00012A32: ;
    MEM32(esi + 0xC) = eax;
    MEM8(eax + 0x1D) = 1;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(eax) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 8) = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 0x14) = LO8(eax);
    MEM8(esi + 0x15) = LO8(eax);
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    MEM32(esi + 0x1C) = 0xFFFFFFFFu;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00012A70
 * Original: 0x00012A70 - 0x00012A9A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00012AA0(); /* call 0x00012AA0 */

loc_00012A78: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00012A94; /* je: equal / zero */

loc_00012A7F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00012A94; /* je: equal / zero */

loc_00012A87: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00012A91: ;
    esp = esp + 4;

loc_00012A94: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012AA0
 * Original: 0x00012AA0 - 0x00012B03 (99 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00012AA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx + 8;
    MEM32(ecx) = 0x5AC6A4;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00013830(); /* call 0x00013830 */

loc_00012ABA: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    edi = 0; /* xor self */
    MEM32(esi + 8) = edi;
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00013950(); /* call 0x00013950 */

loc_00012AE1: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(eax, edi)) goto loc_00012AF9; /* je: equal / zero */

loc_00012AEC: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00012AF6: ;
    esp = esp + 4;

loc_00012AF9: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012B10
 * Original: 0x00012B10 - 0x00012B96 (134 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012B10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    SET_LO8(eax, MEM8(ebx + 0x15));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00012B47; /* jne: not equal / not zero */

loc_00012B1E: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    edx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_00013BB0(); /* call 0x00013BB0 */

loc_00012B2F: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0xC);
    ebp = MEM32(edx + 0xC);
    ecx--;
    (void)0; /* cmp ebp, ecx - flags set for next jcc */
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    if (CMP_NE(ebp, ecx)) goto loc_00012B44; /* jne: not equal / not zero */

loc_00012B41: ;
    MEM8(ebx + 0x14) = LO8(eax);

loc_00012B44: ;
    MEM8(ebx + 0x15) = LO8(eax);

loc_00012B47: ;
    SET_LO8(eax, MEM8(ebx + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00012B92; /* je: equal / zero */

loc_00012B4E: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00012BA0(); /* call 0x00012BA0 */

loc_00012B55: ;
    if (CMP_EQ(MEM32(ebx + 0x1C), eax)) goto loc_00012B64; /* je: equal / zero */

loc_00012B5A: ;
    MEM32(ebx + 0x1C) = eax;
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;

loc_00012B64: ;
    eax = MEM32(ebx + 0x18);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00012B7F; /* jne: not equal / not zero */

loc_00012B6C: ;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00012CD0(); /* call 0x00012CD0 */

loc_00012B74: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00013220(); /* call 0x00013220 */

loc_00012B7B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00012B7F: ;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00013050(); /* call 0x00013050 */

loc_00012B8B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00013220(); /* call 0x00013220 */

loc_00012B92: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012BA0
 * Original: 0x00012BA0 - 0x00012CC7 (295 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012BA0: ;
    esp = esp - 0x34;
    xmm0 = MEMF(0x648E84); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    edi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00012CBF; /* jle: less or equal (signed <=) */

loc_00012BCB: ;
    eax = esp + 0x20;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, esi);
    ebx = ebp + 8;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = ecx;
    edi = edi;

loc_00012BE0: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00012C05; /* jne: not equal / not zero */

loc_00012BED: ;
    /* nop */

loc_00012BF0: ;
    if (CMP_GE(MEM32(eax + 0xC), edi)) goto loc_00012BFA; /* jge: greater or equal (signed >=) */

loc_00012BF5: ;
    eax = MEM32(eax + 8);
    goto loc_00012BFE;

loc_00012BFA: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00012BFE: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00012BF0; /* je: equal / zero */

loc_00012C05: ;
    (void)0; /* cmp ecx, MEM32(ebx + 4) - flags set for next jcc */
    eax = ecx;
    if (CMP_EQ(ecx, MEM32(ebx + 4))) goto loc_00012C11; /* je: equal / zero */

loc_00012C0C: ;
    if (CMP_GE(edi, MEM32(ecx + 0xC))) goto loc_00012C37; /* jge: greater or equal (signed >=) */

loc_00012C11: ;
    eax = 0; /* xor self */
    edx = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    esi = esp + 0x4C;
    ecx = ebx;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0); sub_000136E0(); /* call 0x000136E0 */

loc_00012C35: ;
    eax = MEM32(eax);

loc_00012C37: ;
    eax = eax + 0x10;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x4C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00012CAD; /* jbe: below or equal (unsigned <=) */

loc_00012CA3: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = edi;

loc_00012CAD: ;
    eax = MEM32(ebp + 0x10);
    edi++;
    if (CMP_L(edi, eax)) goto loc_00012BE0; /* jl: less (signed <) */

loc_00012CB9: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00012CBF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x34;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012CD0
 * Original: 0x00012CD0 - 0x00012D29 (89 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012CD0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    edx = ecx + -1;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x10);
    if (CMP_GE(edx & edx, 0)) goto loc_00012CEF; /* jge: greater or equal (signed >=) */

loc_00012CE6: ;
    if (CMP_NE(MEM32(ebx + 4), 1)) goto loc_00012CEF; /* jne: not equal / not zero */

loc_00012CEC: ;
    edx = esi + -1;

loc_00012CEF: ;
    eax = ecx + 1;
    if (CMP_NE(eax, esi)) goto loc_00012CFE; /* jne: not equal / not zero */

loc_00012CF6: ;
    eax = MEM32(ebx + 4);
    eax--;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */

loc_00012CFE: ;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) { sub_00012D29(); return; } /* je: equal / zero */

loc_00012D03: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00012D1A; /* je: equal / zero */

loc_00012D08: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = ebx;
    PUSH32(esp, 0); sub_00012D40(); /* call 0x00012D40 */

loc_00012D14: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012D1A: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00013050(); /* call 0x00013050 */

loc_00012D23: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012D40
 * Original: 0x00012D40 - 0x00013019 (729 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D40(void)
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

loc_00012D40: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, edi);
    edi = esi + 8;
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_00012D5A: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x48);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x20;
    MEM32(esp + 0x48) = ecx;
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0xC) = xmm1; /* movss */
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_00012DC7: ;
    MEM32(esp + 0x48) = eax;
    eax = esp + 0x58;
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_00012DD4: ;
    edx = esp + 0x38;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x58) = edx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x58);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x38;
    MEM32(esp + 0x58) = eax;
    edx = MEM32(esp + 0x58);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / MEMF(esp + 0x48); /* divss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x50;
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_00012E91: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x54;
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_00012E9E: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x48);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x2C;
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x48);
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
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 / MEMF(esp + 0x14); /* divss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00012F9D; /* jbe: below or equal (unsigned <=) */

loc_00012F5A: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00012F8D; /* jbe: below or equal (unsigned <=) */

loc_00012F5F: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [esp + 0xc] */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [esp + 0xc] */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00012FA2; /* jbe: below or equal (unsigned <=) */

loc_00012F8D: ;
    eax = esp + 0x38;
    xmm1 = xmm2; /* movaps */
    MEM32(esp + 0x58) = eax;
    MEM32(esi + 0x18) = ebp;
    goto loc_00012FB1;

loc_00012F9D: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_00013019(); return; } /* jbe: below or equal (unsigned <=) */

loc_00012FA2: ;
    edx = MEM32(esp + 0x54);
    ecx = esp + 0x2C;
    MEM32(esp + 0x58) = ecx;
    MEM32(esi + 0x18) = edx;

loc_00012FB1: ;
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x58);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_00012FE5: ;
    MEM32(esp + 0x50) = eax;
    ecx = MEM32(esp + 0x50);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x4C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00013050
 * Original: 0x00013050 - 0x000131F2 (418 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013050(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00013050: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = ebx + 8;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_00013065: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x1C;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x1C;
    MEM32(esp + 0x2C) = ecx;
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
    MEMF(esp + 0xC) = xmm1; /* movss */
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_000130D2: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_000130DF: ;
    edx = esp + 0x10;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x10;
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
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    ecx = MEM32(esp + 0x38);
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 / MEMF(esp + 0xC); /* divss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEM32(ebx + 0x18) = ecx;
    if ((xmm0 <= MEMF(0x648CF8))) { sub_000131F2(); return; } /* jbe: below or equal (unsigned <=) */

loc_00013185: ;
    edx = eax;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x38) = edx;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_000131BF: ;
    MEM32(esp + 0x34) = eax;
    ecx = MEM32(esp + 0x34);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00013220
 * Original: 0x00013220 - 0x00013685 (1125 bytes, 355 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013220: ;
    SET_LO8(eax, MEM8(0x846FEC));
    esp = esp - 0xA0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001367C; /* je: equal / zero */

loc_00013233: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xAC);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax--;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(eax & eax, 0)) goto loc_0001356C; /* jle: less or equal (signed <=) */

loc_00013250: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ebp = ebp + 8;
    goto loc_00013270;

loc_0001326A: ;
    edi = MEM32(esp + 0x10);
    edi = edi;

loc_00013270: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00013295; /* jne: not equal / not zero */

loc_0001327D: ;
    /* nop */

loc_00013280: ;
    if (CMP_GE(MEM32(eax + 0xC), edi)) goto loc_0001328A; /* jge: greater or equal (signed >=) */

loc_00013285: ;
    eax = MEM32(eax + 8);
    goto loc_0001328E;

loc_0001328A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0001328E: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00013280; /* je: equal / zero */

loc_00013295: ;
    (void)0; /* cmp ecx, MEM32(ebp + 4) - flags set for next jcc */
    eax = ecx;
    if (CMP_EQ(ecx, MEM32(ebp + 4))) goto loc_000132A1; /* je: equal / zero */

loc_0001329C: ;
    if (CMP_GE(edi, MEM32(ecx + 0xC))) goto loc_000132CA; /* jge: greater or equal (signed >=) */

loc_000132A1: ;
    eax = 0; /* xor self */
    edx = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x64) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x5C;
    esi = esp + 0xA4;
    ecx = ebp;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x64) = edx;
    PUSH32(esp, 0); sub_000136E0(); /* call 0x000136E0 */

loc_000132C8: ;
    eax = MEM32(eax);

loc_000132CA: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    ecx = eax + 0x10;
    PUSH32(esp, 0);
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_000132FF: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    esp = esp + 0x34;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    edx = edi + 1;
    MEM32(esp + 0x34) = edx;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0001332B; /* jne: not equal / not zero */

loc_00013316: ;
    if (CMP_GE(MEM32(eax + 0xC), edx)) goto loc_00013320; /* jge: greater or equal (signed >=) */

loc_0001331B: ;
    eax = MEM32(eax + 8);
    goto loc_00013324;

loc_00013320: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00013324: ;
    SET_LO8(ebx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00013316; /* je: equal / zero */

loc_0001332B: ;
    if (CMP_EQ(ecx, MEM32(ebp + 4))) goto loc_00013335; /* je: equal / zero */

loc_00013330: ;
    if (CMP_GE(edx, MEM32(ecx + 0xC))) goto loc_00013362; /* jge: greater or equal (signed >=) */

loc_00013335: ;
    eax = 0; /* xor self */
    esi = eax;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x80) = esi;
    MEM32(esp + 0x84) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x7C;
    esi = esp + 0xAC;
    ecx = ebp;
    MEM32(esp + 0x7C) = edx;
    PUSH32(esp, 0); sub_000136E0(); /* call 0x000136E0 */

loc_00013362: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00013385; /* jne: not equal / not zero */

loc_0001336F: ;
    /* nop */

loc_00013370: ;
    if (CMP_GE(MEM32(eax + 0xC), edi)) goto loc_0001337A; /* jge: greater or equal (signed >=) */

loc_00013375: ;
    eax = MEM32(eax + 8);
    goto loc_0001337E;

loc_0001337A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0001337E: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00013370; /* je: equal / zero */

loc_00013385: ;
    if (CMP_EQ(ecx, MEM32(ebp + 4))) goto loc_0001338F; /* je: equal / zero */

loc_0001338A: ;
    if (CMP_GE(edi, MEM32(ecx + 0xC))) goto loc_000133B6; /* jge: greater or equal (signed >=) */

loc_0001338F: ;
    eax = 0; /* xor self */
    edx = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x4C;
    esi = esp + 0xA0;
    ecx = ebp;
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x54) = edx;
    PUSH32(esp, 0); sub_000136E0(); /* call 0x000136E0 */

loc_000133B6: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000133D8; /* jne: not equal / not zero */

loc_000133C3: ;
    if (CMP_GE(MEM32(eax + 0xC), edi)) goto loc_000133CD; /* jge: greater or equal (signed >=) */

loc_000133C8: ;
    eax = MEM32(eax + 8);
    goto loc_000133D1;

loc_000133CD: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000133D1: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000133C3; /* je: equal / zero */

loc_000133D8: ;
    (void)0; /* cmp ecx, MEM32(ebp + 4) - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(ecx, MEM32(ebp + 4))) goto loc_000133E6; /* je: equal / zero */

loc_000133E1: ;
    if (CMP_GE(edi, MEM32(ecx + 0xC))) goto loc_00013413; /* jge: greater or equal (signed >=) */

loc_000133E6: ;
    eax = 0; /* xor self */
    edx = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x6C;
    esi = esp + 0xA8;
    ecx = ebp;
    MEM32(esp + 0x6C) = edi;
    MEM32(esp + 0x74) = edx;
    PUSH32(esp, 0); sub_000136E0(); /* call 0x000136E0 */

loc_0001340D: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;

loc_00013413: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00013435; /* jne: not equal / not zero */

loc_00013420: ;
    if (CMP_GE(MEM32(eax + 0xC), edi)) goto loc_0001342A; /* jge: greater or equal (signed >=) */

loc_00013425: ;
    eax = MEM32(eax + 8);
    goto loc_0001342E;

loc_0001342A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0001342E: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00013420; /* je: equal / zero */

loc_00013435: ;
    (void)0; /* cmp ecx, MEM32(ebp + 4) - flags set for next jcc */
    ebx = ecx;
    if (CMP_EQ(ecx, MEM32(ebp + 4))) goto loc_00013441; /* je: equal / zero */

loc_0001343C: ;
    if (CMP_GE(edi, MEM32(ecx + 0xC))) goto loc_00013479; /* jge: greater or equal (signed >=) */

loc_00013441: ;
    eax = 0; /* xor self */
    edx = eax;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x94) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x8C;
    esi = esp + 0xB0;
    ecx = ebp;
    MEM32(esp + 0x8C) = edi;
    MEM32(esp + 0x94) = edx;
    PUSH32(esp, 0); sub_000136E0(); /* call 0x000136E0 */

loc_00013477: ;
    ebx = MEM32(eax);

loc_00013479: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0001349B; /* jne: not equal / not zero */

loc_00013486: ;
    if (CMP_GE(MEM32(eax + 0xC), edi)) goto loc_00013490; /* jge: greater or equal (signed >=) */

loc_0001348B: ;
    eax = MEM32(eax + 8);
    goto loc_00013494;

loc_00013490: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00013494: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00013486; /* je: equal / zero */

loc_0001349B: ;
    (void)0; /* cmp ecx, MEM32(ebp + 4) - flags set for next jcc */
    eax = ecx;
    if (CMP_EQ(ecx, MEM32(ebp + 4))) goto loc_000134A7; /* je: equal / zero */

loc_000134A2: ;
    if (CMP_GE(edi, MEM32(ecx + 0xC))) goto loc_000134D0; /* jge: greater or equal (signed >=) */

loc_000134A7: ;
    eax = 0; /* xor self */
    edx = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    esi = esp + 0x9C;
    ecx = ebp;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0); sub_000136E0(); /* call 0x000136E0 */

loc_000134CE: ;
    eax = MEM32(eax);

loc_000134D0: ;
    xmm0 = MEMF(eax + 0x10); /* movss */
    PUSH32(esp, 0x47C35000);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x18);
    edx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esp + 0x54;
    ebx = esp + 0x50;
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_000134FD: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0001354F; /* je: equal / zero */

loc_00013504: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x656CA8); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001352D; /* je: equal / zero */

loc_0001351D: ;
    xmm0 = xmm0 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_0001352D: ;
    eax = MEM32(esp + 0x10);
    ecx = (int32_t)MEMF(esp + 0x40); /* cvttss2si */
    edx = (int32_t)MEMF(esp + 0x3C); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC6D8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0001354C: ;
    esp = esp + 0x10;

loc_0001354F: ;
    ecx = MEM32(esp + 0xB4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x34);
    edx--;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, edx)) goto loc_0001326A; /* jl: less (signed <) */

loc_0001356A: ;
    ebp = ecx;

loc_0001356C: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 4);
    ecx = MEM32(ebp + 0x10);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    edi = ebp + 8;
    ecx--;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00013595; /* jne: not equal / not zero */

loc_00013580: ;
    if (CMP_GE(MEM32(eax + 0xC), ecx)) goto loc_0001358A; /* jge: greater or equal (signed >=) */

loc_00013585: ;
    eax = MEM32(eax + 8);
    goto loc_0001358E;

loc_0001358A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0001358E: ;
    SET_LO8(ebx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00013580; /* je: equal / zero */

loc_00013595: ;
    (void)0; /* cmp edx, MEM32(edi + 4) - flags set for next jcc */
    eax = edx;
    if (CMP_EQ(edx, MEM32(edi + 4))) goto loc_000135A1; /* je: equal / zero */

loc_0001359C: ;
    if (CMP_GE(ecx, MEM32(edx + 0xC))) goto loc_000135C7; /* jge: greater or equal (signed >=) */

loc_000135A1: ;
    eax = 0; /* xor self */
    esi = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    esi = esp + 0x3C;
    ecx = edi;
    PUSH32(esp, 0); sub_000136E0(); /* call 0x000136E0 */

loc_000135C5: ;
    eax = MEM32(eax);

loc_000135C7: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    ecx = eax + 0x10;
    PUSH32(esp, 0);
    eax = esp + 0x48;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_00013611: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    ecx = MEM32(esp + 0xF4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x7C;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_00013665: ;
    ecx = MEM32(ebp + 0x1C);
    eax = ebp + 0x1C;
    esp = esp + 0x68;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00013678; /* je: equal / zero */

loc_00013673: ;
    PUSH32(esp, 0); sub_00013690(); /* call 0x00013690 */

loc_00013678: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0001367C: ;
    esp = esp + 0xA0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013690
 * Original: 0x00013690 - 0x000136DA (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00013690: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_00013B80(); /* call 0x00013B80 */

loc_0001369E: ;
    if (CMP_EQ(eax, MEM32(edi + 4))) goto loc_000136AA; /* je: equal / zero */

loc_000136A3: ;
    ecx = MEM32(esi);
    if (CMP_GE(ecx, MEM32(eax + 0xC))) goto loc_000136D2; /* jge: greater or equal (signed >=) */

loc_000136AA: ;
    esi = MEM32(esi);
    ecx = 0; /* xor self */
    edx = ecx;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    esi = esp + 8;
    ecx = edi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_000136E0(); /* call 0x000136E0 */

loc_000136D0: ;
    eax = MEM32(eax);

loc_000136D2: ;
    eax = eax + 0x10;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000136E0
 * Original: 0x000136E0 - 0x00013706 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000136E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000136E0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax;
    eax = MEM32(edi + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(edi + 4);
    if (TEST_NZ(eax, eax)) { sub_00013706(); return; } /* jne: not equal / not zero */

loc_000136F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000139D0(); /* call 0x000139D0 */

loc_000136FC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013830
 * Original: 0x00013830 - 0x0001388D (93 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013830(void)
{
    int _flags = 0; /* fallback flag var */

loc_00013830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x1D));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = ecx;
    esi = edi;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00013887; /* jne: not equal / not zero */

loc_00013842: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00013830(); /* call 0x00013830 */

loc_0001384D: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_0001387E; /* je: equal / zero */

loc_00013853: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00013859: ;
    if (TEST_NZ(eax, eax)) goto loc_0001387E; /* jne: not equal / not zero */

loc_0001385D: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0001387B: ;
    esp = esp + 4;

loc_0001387E: ;
    SET_LO8(eax, MEM8(esi + 0x1D));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00013842; /* je: equal / zero */

loc_00013887: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013890
 * Original: 0x00013890 - 0x00013937 (167 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013890: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, 1);
    MEM8(esp + 8) = LO8(ecx);
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000138CD; /* jne: not equal / not zero */

loc_000138AA: ;
    edx = MEM32(ebx);
    /* nop */

loc_000138B0: ;
    (void)0; /* cmp edx, MEM32(eax + 0xC) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(edx, MEM32(eax + 0xC))) ? 1 : 0); /* setl */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = eax;
    MEM8(esp + 8) = LO8(ecx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000138C4; /* je: equal / zero */

loc_000138C0: ;
    eax = MEM32(eax);
    goto loc_000138C7;

loc_000138C4: ;
    eax = MEM32(eax + 8);

loc_000138C7: ;
    if (CMP_EQ(MEM8(eax + 0x1D), 0)) goto loc_000138B0; /* je: equal / zero */

loc_000138CD: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001390C; /* je: equal / zero */

loc_000138D7: ;
    eax = MEM32(ebp + 4);
    if (CMP_NE(esi, MEM32(eax))) goto loc_000138FF; /* jne: not equal / not zero */

loc_000138DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_000139D0(); /* call 0x000139D0 */

loc_000138EF: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = edx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000138FF: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_00013BB0(); /* call 0x00013BB0 */

loc_00013908: ;
    eax = MEM32(esp + 0x10);

loc_0001390C: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_GE(ecx, MEM32(ebx))) { sub_00013937(); return; } /* jge: greater or equal (signed >=) */

loc_00013913: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_000139D0(); /* call 0x000139D0 */

loc_00013927: ;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = ecx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013950
 * Original: 0x00013950 - 0x0001399B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013950: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, MEM32(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(eax, MEM32(ecx))) { sub_0001399B(); return; } /* jne: not equal / not zero */

loc_00013965: ;
    if (CMP_NE(ebx, ecx)) { sub_0001399B(); return; } /* jne: not equal / not zero */

loc_00013969: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00013830(); /* call 0x00013830 */

loc_00013974: ;
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
 * sub_000139D0
 * Original: 0x000139D0 - 0x00013A83 (179 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000139D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000139D0: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    if (CMP_B(MEM32(edi + 8), 0xFFFFFFE)) goto loc_00013A4C; /* jb: below (unsigned <) */

loc_000139E2: ;
    PUSH32(esp, 0x13);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6C4);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00013A06: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_00013A0F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_00013A35: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_00013A4C: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00014160(); /* call 0x00014160 */

loc_00013A5F: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x5C) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(esi, eax)) { sub_00013A83(); return; } /* jne: not equal / not zero */

loc_00013A73: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    g_seh_ebp = ebp; sub_00013AA6(); return; /* tail jmp 0x00013AA6 */

}

/**
 * sub_00013B80
 * Original: 0x00013B80 - 0x00013BAD (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013B80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00013B80: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00013BAA; /* jne: not equal / not zero */

loc_00013B8D: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    PUSH32(esp, ebx);

loc_00013B94: ;
    if (CMP_GE(MEM32(ecx + 0xC), edx)) goto loc_00013B9E; /* jge: greater or equal (signed >=) */

loc_00013B99: ;
    ecx = MEM32(ecx + 8);
    goto loc_00013BA2;

loc_00013B9E: ;
    eax = ecx;
    ecx = MEM32(ecx);

loc_00013BA2: ;
    SET_LO8(ebx, MEM8(ecx + 0x1D));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00013B94; /* je: equal / zero */

loc_00013BA9: ;
    POP32(esp, ebx);

loc_00013BAA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013BB0
 * Original: 0x00013BB0 - 0x00013BBF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013BB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00013BB0: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00013BBF(); return; } /* je: equal / zero */

loc_00013BB9: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00013C10
 * Original: 0x00013C10 - 0x00013C4F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C10(void)
{

loc_00013C10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_0046E587(); /* call 0x0046E587 */

loc_00013C1E: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi + 0xC;
    MEM32(esi) = 0x5AC69C;
    PUSH32(esp, eax);
    edi = edi + 0xC;
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = eax;
    PUSH32(esp, edi);
    MEM8(ecx + 4) = LO8(eax);
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_00013C42: ;
    POP32(esp, edi);
    MEM32(esi) = 0x5AC694;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013C50
 * Original: 0x00013C50 - 0x00013C89 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C50(void)
{

loc_00013C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_0046E587(); /* call 0x0046E587 */

loc_00013C5E: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi + 0xC;
    MEM32(esi) = 0x5AC69C;
    PUSH32(esp, eax);
    edi = edi + 0xC;
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = eax;
    PUSH32(esp, edi);
    MEM8(ecx + 4) = LO8(eax);
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_00013C82: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013C90
 * Original: 0x00013C90 - 0x00013CC9 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00013C90: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = 0;
    MEM8(esi + 4) = 0;
    edi = eax + 1;
    /* nop */

loc_00013CB0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00013CB0; /* jne: not equal / not zero */

loc_00013CB7: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00013CC2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013CD0
 * Original: 0x00013CD0 - 0x00013D66 (150 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013CD0: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    esp = esp - 0x44;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00013D4A; /* je: equal / zero */

loc_00013CE0: ;
    PUSH32(esp, 0x1B);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6A8);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00013D04: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_00013D0D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_00013D33: ;
    PUSH32(esp, 0x64B604);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC68C;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_00013D4A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x60;
    ebp = eax;
    PUSH32(esp, 0); sub_00014260(); /* call 0x00014260 */

loc_00013D57: ;
    eax = MEM32(ebp);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00013D66(); return; } /* je: equal / zero */

loc_00013D61: ;
    edi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00013D7F(); return; /* tail jmp 0x00013D7F */

}

/**
 * sub_00013FC0
 * Original: 0x00013FC0 - 0x00013FF3 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013FC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00013FC0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x1D));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00013FD5; /* jne: not equal / not zero */

loc_00013FD2: ;
    MEM32(edx + 4) = ecx;

loc_00013FD5: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_00013FF3(); return; } /* jne: not equal / not zero */

loc_00013FE7: ;
    MEM32(edx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014020
 * Original: 0x00014020 - 0x0001403D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014020(void)
{
    int _flags = 0; /* fallback flag var */

loc_00014020: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0001403C; /* jne: not equal / not zero */

loc_0001402A: ;
    /* nop */

loc_00014030: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00014030; /* je: equal / zero */

loc_0001403C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014040
 * Original: 0x00014040 - 0x00014074 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014040(void)
{
    int _flags = 0; /* fallback flag var */

loc_00014040: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x1D));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00014055; /* jne: not equal / not zero */

loc_00014052: ;
    MEM32(edx + 4) = ecx;

loc_00014055: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_00014074(); return; } /* jne: not equal / not zero */

loc_00014067: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000140A0
 * Original: 0x000140A0 - 0x00014136 (150 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000140A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000140A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F6F0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000140D4: ;
    esp = esp + 0x10;
    MEM32(ebp + -24) = eax;
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_000140EB; /* je: equal / zero */

loc_000140E9: ;
    MEM32(eax) = ebx;

loc_000140EB: ;
    edx = 1;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -40) = ebx;
    ecx = eax + 4;
    MEM32(ebp + -44) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_00014102; /* je: equal / zero */

loc_00014100: ;
    MEM32(ecx) = ebx;

loc_00014102: ;
    MEM32(ebp + -20) = 2;
    MEM32(ebp + -48) = ebx;
    ecx = eax + 8;
    MEM32(ebp + -52) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_00014118; /* je: equal / zero */

loc_00014116: ;
    MEM32(ecx) = ebx;

loc_00014118: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM8(eax + 0x1C) = LO8(edx);
    MEM8(eax + 0x1D) = LO8(ebx);
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
 * sub_00014160
 * Original: 0x00014160 - 0x000141DF (127 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00014160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F6E0);
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
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00014194: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_000141C3; /* je: equal / zero */

loc_000141AA: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_000142C0(); /* call 0x000142C0 */

loc_000141C3: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00014240
 * Original: 0x00014240 - 0x0001425C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014240(void)
{
    int _flags = 0; /* fallback flag var */

loc_00014240: ;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0001425B; /* jne: not equal / not zero */

loc_00014249: ;
    /* nop */

loc_00014250: ;
    eax = ecx;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00014250; /* je: equal / zero */

loc_0001425B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014260
 * Original: 0x00014260 - 0x000142B7 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014260(void)
{
    int _flags = 0; /* fallback flag var */

loc_00014260: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000142B6; /* jne: not equal / not zero */

loc_00014269: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x1D));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0001428F; /* jne: not equal / not zero */

loc_00014274: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0001428B; /* jne: not equal / not zero */

loc_0001427D: ;
    /* nop */

loc_00014280: ;
    ecx = eax;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00014280; /* je: equal / zero */

loc_0001428B: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001428F: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000142B3; /* jne: not equal / not zero */

loc_00014299: ;
    /* nop */

loc_000142A0: ;
    ecx = MEM32(edx);
    if (CMP_NE(ecx, MEM32(eax + 8))) goto loc_000142B3; /* jne: not equal / not zero */

loc_000142A7: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000142A0; /* je: equal / zero */

loc_000142B3: ;
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_000142B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000142C0
 * Original: 0x000142C0 - 0x000142F9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000142C0(void)
{

loc_000142C0: ;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax + 0xC;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 0x1C) = LO8(edx);
    MEM8(eax + 0x1D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00014300
 * Original: 0x00014300 - 0x0001432C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014300(void)
{
    int _flags = 0; /* fallback flag var */

loc_00014300: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5AC68C;
    PUSH32(esp, 0); sub_000148A0(); /* call 0x000148A0 */

loc_0001430E: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00014326; /* je: equal / zero */

loc_00014315: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00014323: ;
    esp = esp + 4;

loc_00014326: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014330
 * Original: 0x00014330 - 0x0001433A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00014330: ;
    if (CMP_B(MEM32(ecx + 0x24), 0x10)) { sub_0001433A(); return; } /* jb: below (unsigned <) */

loc_00014336: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00014340
 * Original: 0x00014340 - 0x0001434B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014340(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014340: ;
    MEM32(ecx) = 0x5AC68C;
    g_seh_ebp = ebp; sub_000148A0(); return; /* tail jmp 0x000148A0 */

}

/**
 * sub_00014350
 * Original: 0x00014350 - 0x00014383 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014350(void)
{

loc_00014350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_00014358: ;
    eax = 0; /* xor self */
    ecx = esi + 0xC;
    MEM32(esi) = 0x5AC69C;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = 0xF;
    PUSH32(esp, eax);
    MEM8(ecx + 4) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_0001437D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014390
 * Original: 0x00014390 - 0x0001439D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014390(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014390: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;
    g_seh_ebp = ebp; sub_000143A0(); return; /* tail jmp 0x000143A0 */

}

/**
 * sub_000143C0
 * Original: 0x000143C0 - 0x000143D2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000143C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000143C0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx + 0x18);
    (void)0; /* cmp edx, 0x10 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(edx, 0x10)) { sub_000143D2(); return; } /* jb: below (unsigned <) */

loc_000143CD: ;
    eax = MEM32(ebx + 4);
    g_seh_ebp = ebp; sub_000143D5(); return; /* tail jmp 0x000143D5 */

}

/**
 * sub_000144B0
 * Original: 0x000144B0 - 0x000144F9 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000144B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000144B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    (void)0; /* cmp MEM32(edi + 0x14), esi - flags set for next jcc */
    ebx = ecx;
    if (CMP_AE(MEM32(edi + 0x14), esi)) goto loc_000144C8; /* jae: above or equal (unsigned >=) */

loc_000144C3: ;
    PUSH32(esp, 0); sub_0046DAB7(); /* call 0x0046DAB7 */

loc_000144C8: ;
    ebp = MEM32(edi + 0x14);
    eax = MEM32(esp + 0x1C);
    ebp = ebp - esi;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    if (CMP_B(eax, ebp)) ebp = eax; /* cmovb */
    if (CMP_NE(ebx, edi)) { sub_000144F9(); return; } /* jne: not equal / not zero */

loc_000144DA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ebp = ebp + esi;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0); sub_000145A0(); /* call 0x000145A0 */

loc_000144E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0); sub_000145A0(); /* call 0x000145A0 */

loc_000144F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000145A0
 * Original: 0x000145A0 - 0x00014614 (116 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000145A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000145A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 0x14), ebp - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_AE(MEM32(esi + 0x14), ebp)) goto loc_000145B3; /* jae: above or equal (unsigned >=) */

loc_000145AE: ;
    PUSH32(esp, 0); sub_0046DAB7(); /* call 0x0046DAB7 */

loc_000145B3: ;
    eax = MEM32(esi + 0x14);
    edi = MEM32(esp + 0x14);
    eax = eax - ebp;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    if (CMP_B(eax, edi)) edi = eax; /* cmovb */
    if (CMP_BE(edi & edi, 0)) goto loc_0001460C; /* jbe: below or equal (unsigned <=) */

loc_000145C5: ;
    ecx = MEM32(esi + 0x18);
    (void)0; /* cmp ecx, 0x10 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = esi + 4;
    if (CMP_B(ecx, 0x10)) goto loc_000145D5; /* jb: below (unsigned <) */

loc_000145D1: ;
    edx = MEM32(ebx);
    goto loc_000145D7;

loc_000145D5: ;
    edx = ebx;

loc_000145D7: ;
    if (CMP_B(ecx, 0x10)) goto loc_000145E0; /* jb: below (unsigned <) */

loc_000145DC: ;
    ecx = MEM32(ebx);
    goto loc_000145E2;

loc_000145E0: ;
    ecx = ebx;

loc_000145E2: ;
    eax = eax - edi;
    edx = edx + ebp;
    PUSH32(esp, eax);
    edx = edx + edi;
    PUSH32(esp, edx);
    ecx = ecx + ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_000145F2: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    eax = eax - edi;
    esp = esp + 0xC;
    (void)0; /* cmp ecx, 0x10 - flags set for next jcc */
    MEM32(esi + 0x14) = eax;
    if (CMP_B(ecx, 0x10)) goto loc_00014607; /* jb: below (unsigned <) */

loc_00014605: ;
    ebx = MEM32(ebx);

loc_00014607: ;
    MEM8(ebx + eax) = 0;
    POP32(esp, ebx);

loc_0001460C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014620
 * Original: 0x00014620 - 0x0001465B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00014620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F6D0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    MEM32(ebp + -28) = ebx;
    eax = MEM32(ebp + 8);
    esi = eax;
    esi = esi | 0xF;
    MEM32(ebp + -20) = esi;
    if (CMP_BE(esi, 0xFFFFFFFEu)) { sub_0001465B(); return; } /* jbe: below or equal (unsigned <=) */

loc_00014656: ;
    MEM32(ebp + -20) = eax;
    g_seh_ebp = ebp; sub_0001467F(); return; /* tail jmp 0x0001467F */

}

/**
 * sub_00014790
 * Original: 0x00014790 - 0x000147AC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014790(void)
{

loc_00014790: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000147A6: ;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000147B0
 * Original: 0x000147B0 - 0x0001480F (95 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000147B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000147B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000147FB; /* je: equal / zero */

loc_000147C0: ;
    if (CMP_B(MEM32(ebx + 0x18), 0x10)) goto loc_000147FB; /* jb: below (unsigned <) */

loc_000147C6: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = ebx + 4;
    if (CMP_BE(ebp & ebp, 0)) goto loc_000147E5; /* jbe: below or equal (unsigned <=) */

loc_000147D1: ;
    PUSH32(esp, esi);
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, esi);

loc_000147E5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_000147FB; /* je: equal / zero */

loc_000147EE: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000147F8: ;
    esp = esp + 4;

loc_000147FB: ;
    MEM32(ebx + 0x14) = ebp;
    MEM32(ebx + 0x18) = 0xF;
    MEM8(ebx + ebp + 4) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014810
 * Original: 0x00014810 - 0x00014835 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014810(void)
{

loc_00014810: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    esi = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = 0xF;
    PUSH32(esp, eax);
    MEM8(esi + 4) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_0001482F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014840
 * Original: 0x00014840 - 0x0001486A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014840(void)
{
    int _flags = 0; /* fallback flag var */

loc_00014840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_000148A0(); /* call 0x000148A0 */

loc_00014848: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00014864; /* je: equal / zero */

loc_0001484F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00014864; /* je: equal / zero */

loc_00014857: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00014861: ;
    esp = esp + 4;

loc_00014864: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014870
 * Original: 0x00014870 - 0x0001489C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014870(void)
{
    int _flags = 0; /* fallback flag var */

loc_00014870: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5AC694;
    PUSH32(esp, 0); sub_000148A0(); /* call 0x000148A0 */

loc_0001487E: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00014896; /* je: equal / zero */

loc_00014885: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00014893: ;
    esp = esp + 4;

loc_00014896: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000148A0
 * Original: 0x000148A0 - 0x000148E4 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000148A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000148A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5AC69C;
    if (CMP_B(MEM32(esi + 0x24), 0x10)) goto loc_000148C8; /* jb: below (unsigned <) */

loc_000148B0: ;
    eax = MEM32(esi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_000148C8; /* je: equal / zero */

loc_000148BB: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000148C5: ;
    esp = esp + 4;

loc_000148C8: ;
    MEM32(esi + 0x24) = 0xF;
    MEM32(esi + 0x20) = 0;
    ecx = esi;
    MEM8(esi + 0x10) = 0;
    PUSH32(esp, 0); sub_0046E5D6(); /* call 0x0046E5D6 */

loc_000148E1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000148F0
 * Original: 0x000148F0 - 0x000148FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000148F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000148F0: ;
    MEM32(ecx) = 0x5AC694;
    g_seh_ebp = ebp; sub_000148A0(); return; /* tail jmp 0x000148A0 */

}

/**
 * sub_00014900
 * Original: 0x00014900 - 0x00014937 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00014900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_B(MEM32(esi + 0x18), 0x10)) goto loc_00014922; /* jb: below (unsigned <) */

loc_0001490A: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00014922; /* je: equal / zero */

loc_00014915: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001491F: ;
    esp = esp + 4;

loc_00014922: ;
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = 0;
    MEM8(esi + 4) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014940
 * Original: 0x00014940 - 0x000149F9 (185 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014940: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    if (CMP_NE(MEM32(0x84A19C), edi)) goto loc_00014968; /* jne: not equal / not zero */

loc_00014963: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00014968: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    ebx = 0xC;
    if (CMP_EQ(esi, edi)) goto loc_000149B5; /* je: equal / zero */

loc_00014993: ;
    if (CMP_B(MEM32(esi + 0x80), ebx)) goto loc_000149B5; /* jb: below (unsigned <) */

loc_0001499B: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000149A5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000149AC: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, edi)) goto loc_000149D7; /* jne: not equal / not zero */

loc_000149B5: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000149C7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000149CE: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, edi)) { sub_000149F9(); return; } /* je: equal / zero */

loc_000149D7: ;
    PUSH32(esp, 0); sub_0002B580(); /* call 0x0002B580 */

loc_000149DC: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = edi;
    g_seh_ebp = ebp; sub_000149FB(); return; /* tail jmp 0x000149FB */

}

/**
 * sub_00014DC0
 * Original: 0x00014DC0 - 0x00014E03 (67 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014DC0: ;
    edx = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00014DED; /* jne: not equal / not zero */

loc_00014DD8: ;
    if (CMP_GE(MEM32(eax + 0xC), edx)) goto loc_00014DE2; /* jge: greater or equal (signed >=) */

loc_00014DDD: ;
    eax = MEM32(eax + 8);
    goto loc_00014DE6;

loc_00014DE2: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00014DE6: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00014DD8; /* je: equal / zero */

loc_00014DED: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_00014E03(); return; } /* je: equal / zero */

loc_00014DF8: ;
    if (CMP_L(edx, MEM32(ecx + 0xC))) { sub_00014E03(); return; } /* jl: less (signed <) */

loc_00014DFD: ;
    eax = esp + 8;
    g_seh_ebp = ebp; sub_00014E0B(); return; /* tail jmp 0x00014E0B */

}

/**
 * sub_00014E30
 * Original: 0x00014E30 - 0x00014E7B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014E30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014E30: ;
    edx = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00014E65; /* jne: not equal / not zero */

loc_00014E49: ;
    /* nop */

loc_00014E50: ;
    if (CMP_GE(MEM32(eax + 0xC), edx)) goto loc_00014E5A; /* jge: greater or equal (signed >=) */

loc_00014E55: ;
    eax = MEM32(eax + 8);
    goto loc_00014E5E;

loc_00014E5A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00014E5E: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00014E50; /* je: equal / zero */

loc_00014E65: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_00014E7B(); return; } /* je: equal / zero */

loc_00014E70: ;
    if (CMP_L(edx, MEM32(ecx + 0xC))) { sub_00014E7B(); return; } /* jl: less (signed <) */

loc_00014E75: ;
    eax = esp + 8;
    g_seh_ebp = ebp; sub_00014E83(); return; /* tail jmp 0x00014E83 */

}

/**
 * sub_00014EB0
 * Original: 0x00014EB0 - 0x00014EFB (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014EB0: ;
    edx = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00014EE5; /* jne: not equal / not zero */

loc_00014EC9: ;
    /* nop */

loc_00014ED0: ;
    if (CMP_GE(MEM32(eax + 0xC), edx)) goto loc_00014EDA; /* jge: greater or equal (signed >=) */

loc_00014ED5: ;
    eax = MEM32(eax + 8);
    goto loc_00014EDE;

loc_00014EDA: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00014EDE: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00014ED0; /* je: equal / zero */

loc_00014EE5: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_00014EFB(); return; } /* je: equal / zero */

loc_00014EF0: ;
    if (CMP_L(edx, MEM32(ecx + 0xC))) { sub_00014EFB(); return; } /* jl: less (signed <) */

loc_00014EF5: ;
    eax = esp + 8;
    g_seh_ebp = ebp; sub_00014F03(); return; /* tail jmp 0x00014F03 */

}

/**
 * sub_00014F30
 * Original: 0x00014F30 - 0x00014F7B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014F30: ;
    edx = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00014F65; /* jne: not equal / not zero */

loc_00014F49: ;
    /* nop */

loc_00014F50: ;
    if (CMP_GE(MEM32(eax + 0xC), edx)) goto loc_00014F5A; /* jge: greater or equal (signed >=) */

loc_00014F55: ;
    eax = MEM32(eax + 8);
    goto loc_00014F5E;

loc_00014F5A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00014F5E: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00014F50; /* je: equal / zero */

loc_00014F65: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_00014F7B(); return; } /* je: equal / zero */

loc_00014F70: ;
    if (CMP_L(edx, MEM32(ecx + 0xC))) { sub_00014F7B(); return; } /* jl: less (signed <) */

loc_00014F75: ;
    eax = esp + 8;
    g_seh_ebp = ebp; sub_00014F83(); return; /* tail jmp 0x00014F83 */

}

/**
 * sub_00014FB0
 * Original: 0x00014FB0 - 0x00014FFB (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014FB0: ;
    edx = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00014FE5; /* jne: not equal / not zero */

loc_00014FC9: ;
    /* nop */

loc_00014FD0: ;
    if (CMP_GE(MEM32(eax + 0xC), edx)) goto loc_00014FDA; /* jge: greater or equal (signed >=) */

loc_00014FD5: ;
    eax = MEM32(eax + 8);
    goto loc_00014FDE;

loc_00014FDA: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00014FDE: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00014FD0; /* je: equal / zero */

loc_00014FE5: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_00014FFB(); return; } /* je: equal / zero */

loc_00014FF0: ;
    if (CMP_L(edx, MEM32(ecx + 0xC))) { sub_00014FFB(); return; } /* jl: less (signed <) */

loc_00014FF5: ;
    eax = esp + 8;
    g_seh_ebp = ebp; sub_00015003(); return; /* tail jmp 0x00015003 */

}

/**
 * sub_00015030
 * Original: 0x00015030 - 0x0001507B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015030: ;
    edx = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00015065; /* jne: not equal / not zero */

loc_00015049: ;
    /* nop */

loc_00015050: ;
    if (CMP_GE(MEM32(eax + 0xC), edx)) goto loc_0001505A; /* jge: greater or equal (signed >=) */

loc_00015055: ;
    eax = MEM32(eax + 8);
    goto loc_0001505E;

loc_0001505A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0001505E: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00015050; /* je: equal / zero */

loc_00015065: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_0001507B(); return; } /* je: equal / zero */

loc_00015070: ;
    if (CMP_L(edx, MEM32(ecx + 0xC))) { sub_0001507B(); return; } /* jl: less (signed <) */

loc_00015075: ;
    eax = esp + 8;
    g_seh_ebp = ebp; sub_00015083(); return; /* tail jmp 0x00015083 */

}

/**
 * sub_000150B0
 * Original: 0x000150B0 - 0x000150EE (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000150B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000150B0: ;
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000150D8; /* jne: not equal / not zero */

loc_000150C3: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_000150CD; /* jge: greater or equal (signed >=) */

loc_000150C8: ;
    eax = MEM32(eax + 8);
    goto loc_000150D1;

loc_000150CD: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000150D1: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000150C3; /* je: equal / zero */

loc_000150D8: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_000150EE(); return; } /* je: equal / zero */

loc_000150E3: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_000150EE(); return; } /* jl: less (signed <) */

loc_000150E8: ;
    eax = esp + 4;
    g_seh_ebp = ebp; sub_000150F6(); return; /* tail jmp 0x000150F6 */

}

/**
 * sub_00015110
 * Original: 0x00015110 - 0x0001514F (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015110: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00015139; /* jne: not equal / not zero */

loc_00015124: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_0001512E; /* jge: greater or equal (signed >=) */

loc_00015129: ;
    eax = MEM32(eax + 8);
    goto loc_00015132;

loc_0001512E: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00015132: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00015124; /* je: equal / zero */

loc_00015139: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_0001514F(); return; } /* je: equal / zero */

loc_00015144: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_0001514F(); return; } /* jl: less (signed <) */

loc_00015149: ;
    eax = esp + 4;
    g_seh_ebp = ebp; sub_00015157(); return; /* tail jmp 0x00015157 */

}

/**
 * sub_00015170
 * Original: 0x00015170 - 0x000151AF (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015170: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00015199; /* jne: not equal / not zero */

loc_00015184: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_0001518E; /* jge: greater or equal (signed >=) */

loc_00015189: ;
    eax = MEM32(eax + 8);
    goto loc_00015192;

loc_0001518E: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00015192: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00015184; /* je: equal / zero */

loc_00015199: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_000151AF(); return; } /* je: equal / zero */

loc_000151A4: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_000151AF(); return; } /* jl: less (signed <) */

loc_000151A9: ;
    eax = esp + 4;
    g_seh_ebp = ebp; sub_000151B7(); return; /* tail jmp 0x000151B7 */

}

/**
 * sub_000151D0
 * Original: 0x000151D0 - 0x0001520F (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000151D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000151D0: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000151F9; /* jne: not equal / not zero */

loc_000151E4: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_000151EE; /* jge: greater or equal (signed >=) */

loc_000151E9: ;
    eax = MEM32(eax + 8);
    goto loc_000151F2;

loc_000151EE: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000151F2: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000151E4; /* je: equal / zero */

loc_000151F9: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_0001520F(); return; } /* je: equal / zero */

loc_00015204: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_0001520F(); return; } /* jl: less (signed <) */

loc_00015209: ;
    eax = esp + 4;
    g_seh_ebp = ebp; sub_00015217(); return; /* tail jmp 0x00015217 */

}

/**
 * sub_00015230
 * Original: 0x00015230 - 0x0001526F (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015230: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00015259; /* jne: not equal / not zero */

loc_00015244: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_0001524E; /* jge: greater or equal (signed >=) */

loc_00015249: ;
    eax = MEM32(eax + 8);
    goto loc_00015252;

loc_0001524E: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00015252: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00015244; /* je: equal / zero */

loc_00015259: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_0001526F(); return; } /* je: equal / zero */

loc_00015264: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_0001526F(); return; } /* jl: less (signed <) */

loc_00015269: ;
    eax = esp + 4;
    g_seh_ebp = ebp; sub_00015277(); return; /* tail jmp 0x00015277 */

}

/**
 * sub_00015290
 * Original: 0x00015290 - 0x000152CF (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015290: ;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000152B9; /* jne: not equal / not zero */

loc_000152A4: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_000152AE; /* jge: greater or equal (signed >=) */

loc_000152A9: ;
    eax = MEM32(eax + 8);
    goto loc_000152B2;

loc_000152AE: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000152B2: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000152A4; /* je: equal / zero */

loc_000152B9: ;
    eax = MEM32(edx + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_000152CF(); return; } /* je: equal / zero */

loc_000152C4: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_000152CF(); return; } /* jl: less (signed <) */

loc_000152C9: ;
    eax = esp + 4;
    g_seh_ebp = ebp; sub_000152D7(); return; /* tail jmp 0x000152D7 */

}

/**
 * sub_000152F0
 * Original: 0x000152F0 - 0x00015316 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000152F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000152F0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax;
    eax = MEM32(edi + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(edi + 4);
    if (TEST_NZ(eax, eax)) { sub_00015316(); return; } /* jne: not equal / not zero */

loc_00015303: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00015440(); /* call 0x00015440 */

loc_0001530C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015440
 * Original: 0x00015440 - 0x000154F3 (179 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015440: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    if (CMP_B(MEM32(edi + 8), 0x1FFFFFFE)) goto loc_000154BC; /* jb: below (unsigned <) */

loc_00015452: ;
    PUSH32(esp, 0x13);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6C4);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00015476: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_0001547F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_000154A5: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_000154BC: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0002B4E0(); /* call 0x0002B4E0 */

loc_000154CF: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x5C) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(esi, eax)) { sub_000154F3(); return; } /* jne: not equal / not zero */

loc_000154E3: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    g_seh_ebp = ebp; sub_00015516(); return; /* tail jmp 0x00015516 */

}

/**
 * sub_000155F0
 * Original: 0x000155F0 - 0x00015697 (167 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000155F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000155F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, 1);
    MEM8(esp + 8) = LO8(ecx);
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0001562D; /* jne: not equal / not zero */

loc_0001560A: ;
    edx = MEM32(ebx);
    /* nop */

loc_00015610: ;
    (void)0; /* cmp edx, MEM32(eax + 0xC) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(edx, MEM32(eax + 0xC))) ? 1 : 0); /* setl */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = eax;
    MEM8(esp + 8) = LO8(ecx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00015624; /* je: equal / zero */

loc_00015620: ;
    eax = MEM32(eax);
    goto loc_00015627;

loc_00015624: ;
    eax = MEM32(eax + 8);

loc_00015627: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00015610; /* je: equal / zero */

loc_0001562D: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi;
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001566C; /* je: equal / zero */

loc_00015637: ;
    eax = MEM32(ebp + 4);
    if (CMP_NE(esi, MEM32(eax))) goto loc_0001565F; /* jne: not equal / not zero */

loc_0001563E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00015440(); /* call 0x00015440 */

loc_0001564F: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = edx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001565F: ;
    edx = esp + 0x10;
    PUSH32(esp, 0); sub_0002B6A0(); /* call 0x0002B6A0 */

loc_00015668: ;
    eax = MEM32(esp + 0x10);

loc_0001566C: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_GE(ecx, MEM32(ebx))) { sub_00015697(); return; } /* jge: greater or equal (signed >=) */

loc_00015673: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0); sub_00015440(); /* call 0x00015440 */

loc_00015687: ;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = ecx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000156B0
 * Original: 0x000156B0 - 0x000156C8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156B0(void)
{

loc_000156B0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA88);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_000156C5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000156D0
 * Original: 0x000156D0 - 0x000156E8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156D0(void)
{

loc_000156D0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA7C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_000156E5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000156F0
 * Original: 0x000156F0 - 0x00015708 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156F0(void)
{

loc_000156F0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA74);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015705: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015710
 * Original: 0x00015710 - 0x00015728 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015710(void)
{

loc_00015710: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA64);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015725: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015730
 * Original: 0x00015730 - 0x00015748 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015730(void)
{

loc_00015730: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA5C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015745: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015750
 * Original: 0x00015750 - 0x00015768 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015750(void)
{

loc_00015750: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015765: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015770
 * Original: 0x00015770 - 0x00015788 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015770(void)
{

loc_00015770: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA44);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015785: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015790
 * Original: 0x00015790 - 0x000157A8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015790(void)
{

loc_00015790: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_000157A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000157B0
 * Original: 0x000157B0 - 0x000157C8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000157B0(void)
{

loc_000157B0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_000157C5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000157D0
 * Original: 0x000157D0 - 0x000157E8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000157D0(void)
{

loc_000157D0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_000157E5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000157F0
 * Original: 0x000157F0 - 0x00015808 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000157F0(void)
{

loc_000157F0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA08);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015805: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015810
 * Original: 0x00015810 - 0x00015828 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015810(void)
{

loc_00015810: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9F8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015825: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015830
 * Original: 0x00015830 - 0x00015848 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015830(void)
{

loc_00015830: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9E8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015845: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015850
 * Original: 0x00015850 - 0x00015868 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015850(void)
{

loc_00015850: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9E0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015865: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015870
 * Original: 0x00015870 - 0x00015888 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015870(void)
{

loc_00015870: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9D0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015885: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015890
 * Original: 0x00015890 - 0x000158A8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015890(void)
{

loc_00015890: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9C4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_000158A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000158B0
 * Original: 0x000158B0 - 0x000158C8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158B0(void)
{

loc_000158B0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9B8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_000158C5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000158D0
 * Original: 0x000158D0 - 0x000158E8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158D0(void)
{

loc_000158D0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9B4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_000158E5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000158F0
 * Original: 0x000158F0 - 0x00015908 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158F0(void)
{

loc_000158F0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9AC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015905: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015910
 * Original: 0x00015910 - 0x00015928 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015910(void)
{

loc_00015910: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC99C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015925: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015930
 * Original: 0x00015930 - 0x00015948 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015930(void)
{

loc_00015930: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC98C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015945: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015950
 * Original: 0x00015950 - 0x00015968 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015950(void)
{

loc_00015950: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC97C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015965: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015970
 * Original: 0x00015970 - 0x00015988 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015970(void)
{

loc_00015970: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC970);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015985: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015990
 * Original: 0x00015990 - 0x000159A8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015990(void)
{

loc_00015990: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC968);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_000159A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000159B0
 * Original: 0x000159B0 - 0x000159D4 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000159B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000159B0: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(0x648D2C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_000159D4(); return; } /* jbe: below or equal (unsigned <=) */

loc_000159C9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_000159E7(); return; /* tail jmp 0x000159E7 */

}

/**
 * sub_00015A10
 * Original: 0x00015A10 - 0x00015A3F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A10(void)
{
    float xmm0;

loc_00015A10: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    MEMF(eax + 4) = xmm0; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEM32(eax) = 0x5AC7B0;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015A40
 * Original: 0x00015A40 - 0x00015A58 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A40(void)
{

loc_00015A40: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC960);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015A55: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015A60
 * Original: 0x00015A60 - 0x00015A84 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015A60: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(0x648D2C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_00015A84(); return; } /* jbe: below or equal (unsigned <=) */

loc_00015A79: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00015A97(); return; /* tail jmp 0x00015A97 */

}

/**
 * sub_00015AC0
 * Original: 0x00015AC0 - 0x00015AEF (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015AC0(void)
{
    float xmm0;

loc_00015AC0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    MEMF(eax + 4) = xmm0; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEM32(eax) = 0x5AC788;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015AF0
 * Original: 0x00015AF0 - 0x00015B1F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015AF0(void)
{
    float xmm0;

loc_00015AF0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    MEMF(eax + 4) = xmm0; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEM32(eax) = 0x5AC7F8;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015B20
 * Original: 0x00015B20 - 0x00015B4F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B20(void)
{
    float xmm0;

loc_00015B20: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    MEMF(eax + 4) = xmm0; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEM32(eax) = 0x5AC720;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015B50
 * Original: 0x00015B50 - 0x00015B68 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B50(void)
{

loc_00015B50: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC958);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015B65: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015B70
 * Original: 0x00015B70 - 0x00015B94 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015B70: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(0x648D2C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_00015B94(); return; } /* jbe: below or equal (unsigned <=) */

loc_00015B89: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00015BA7(); return; /* tail jmp 0x00015BA7 */

}

/**
 * sub_00015BD0
 * Original: 0x00015BD0 - 0x00015BF4 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015BD0: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(0x648D2C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_00015BF4(); return; } /* jbe: below or equal (unsigned <=) */

loc_00015BE9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00015C07(); return; /* tail jmp 0x00015C07 */

}

/**
 * sub_00015C30
 * Original: 0x00015C30 - 0x00015C5F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C30(void)
{
    float xmm0;

loc_00015C30: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    MEMF(eax + 4) = xmm0; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEM32(eax) = 0x5AC6F0;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015C60
 * Original: 0x00015C60 - 0x00015C84 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015C60: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(0x648D2C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_00015C84(); return; } /* jbe: below or equal (unsigned <=) */

loc_00015C79: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00015C97(); return; /* tail jmp 0x00015C97 */

}

/**
 * sub_00015CC0
 * Original: 0x00015CC0 - 0x00015CD8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015CC0(void)
{

loc_00015CC0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC948);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015CD5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015CE0
 * Original: 0x00015CE0 - 0x00015CF8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015CE0(void)
{

loc_00015CE0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC938);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015CF5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D00
 * Original: 0x00015D00 - 0x00015D18 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D00(void)
{

loc_00015D00: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC928);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015D15: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D20
 * Original: 0x00015D20 - 0x00015D38 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D20(void)
{

loc_00015D20: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC918);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00012950(); /* call 0x00012950 */

loc_00015D35: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D40
 * Original: 0x00015D40 - 0x00015D64 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015D40: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(0x648D2C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_00015D64(); return; } /* jbe: below or equal (unsigned <=) */

loc_00015D59: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00015D77(); return; /* tail jmp 0x00015D77 */

}

/**
 * sub_00015DA0
 * Original: 0x00015DA0 - 0x00015DCF (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015DA0(void)
{
    float xmm0;

loc_00015DA0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    MEMF(eax + 4) = xmm0; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEM32(eax) = 0x5AC730;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015DD0
 * Original: 0x00015DD0 - 0x00015E07 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015DD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00015DD0: ;
    if (CMP_GE(edx, 0x29)) goto loc_00015E06; /* jge: greater or equal (signed >=) */

loc_00015DD5: ;
    if (TEST_S(edx, edx)) goto loc_00015E06; /* jl: less (signed <) */

loc_00015DD9: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x847010);
    eax = MEM32(esi + edx * 4);
    xmm0 = MEMF(eax + 4); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000128C0(); /* call 0x000128C0 */

loc_00015DF7: ;
    edx = MEM32(esi + edx * 4);
    SET_LO8(eax, MEM8(edx + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00015E06; /* jne: not equal / not zero */

loc_00015E02: ;
    MEM8(edx + 8) = 1;

loc_00015E06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015E10
 * Original: 0x00015E10 - 0x00015E5A (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015E10: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 0xC);
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 8;
    eax = MEM32(ecx + 4);
    if (CMP_NE(MEM8(eax + 0x1D), 0)) goto loc_00015E44; /* jne: not equal / not zero */

loc_00015E2B: ;
    goto loc_00015E30;

    /* nop */

loc_00015E30: ;
    if (CMP_GE(MEM32(eax + 0xC), esi)) goto loc_00015E3A; /* jge: greater or equal (signed >=) */

loc_00015E35: ;
    eax = MEM32(eax + 8);
    goto loc_00015E3E;

loc_00015E3A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00015E3E: ;
    if (CMP_EQ(MEM8(eax + 0x1D), 0)) goto loc_00015E30; /* je: equal / zero */

loc_00015E44: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(ecx, eax)) { sub_00015E5A(); return; } /* je: equal / zero */

loc_00015E4F: ;
    if (CMP_L(esi, MEM32(ecx + 0xC))) { sub_00015E5A(); return; } /* jl: less (signed <) */

loc_00015E54: ;
    eax = esp + 8;
    g_seh_ebp = ebp; sub_00015E62(); return; /* tail jmp 0x00015E62 */

}

/**
 * sub_00015E90
 * Original: 0x00015E90 - 0x00015EAB (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E90(void)
{

loc_00015E90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_0002E7A0(); /* call 0x0002E7A0 */

loc_00015E9C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00024C00(); /* call 0x00024C00 */

loc_00015EA2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00024C90(); /* call 0x00024C90 */

loc_00015EA8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00015EB0
 * Original: 0x00015EB0 - 0x00015F7B (203 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00015EB0: ;
    SET_LO8(ecx, MEM8(0x847267));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    SET_LO8(eax, 1);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00015EC7; /* je: equal / zero */

loc_00015EC0: ;
    MEM8(0x847001) = LO8(eax);
    SET_LO8(ebx, LO8(eax));

loc_00015EC7: ;
    SET_LO8(ecx, MEM8(0x847266));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00015ED6; /* je: equal / zero */

loc_00015ED1: ;
    MEM8(0x847032) = LO8(eax);

loc_00015ED6: ;
    PUSH32(esp, 0); sub_000164F0(); /* call 0x000164F0 */

loc_00015EDB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x847024) = eax;
    if (TEST_Z(eax, eax)) goto loc_00015F60; /* je: equal / zero */

loc_00015EE4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000162A0(); /* call 0x000162A0 */

loc_00015EEA: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00015EF3; /* je: equal / zero */

loc_00015EEE: ;
    PUSH32(esp, 0); sub_00018030(); /* call 0x00018030 */

loc_00015EF3: ;
    PUSH32(esp, edi);
    edi = MEM32(0x847024);
    PUSH32(esp, 0); sub_000179D0(); /* call 0x000179D0 */

loc_00015EFF: ;
    SET_LO8(eax, MEM8(0x846FF0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00015F1C; /* je: equal / zero */

loc_00015F09: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AC8F4);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00015F19: ;
    esp = esp + 4;

loc_00015F1C: ;
    PUSH32(esp, 0); sub_00012800(); /* call 0x00012800 */

loc_00015F21: ;
    MEM32(0x847028) = eax;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xDDA);
    MEM32(0x84706C) = ecx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00015F3E: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x847070) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00015F78; /* jne: not equal / not zero */

loc_00015F4A: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00015F5A: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00015F60: ;
    SET_LO8(eax, MEM8(0x846FF0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00015F78; /* je: equal / zero */

loc_00015F69: ;
    PUSH32(esp, 0x5AC8C4);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00015F75: ;
    esp = esp + 4;

loc_00015F78: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00015F80
 * Original: 0x00015F80 - 0x00015FB1 (49 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015F80(void)
{
    float xmm0;

loc_00015F80: ;
    PUSH32(esp, 0); sub_00015FC0(); /* call 0x00015FC0 */

loc_00015F85: ;
    xmm0 = MEMF(0x648F08); /* movss */
    SET_LO8(eax, 1);
    MEM8(0x847008) = LO8(eax);
    MEMF(0x656CA4) = xmm0; /* movss */
    MEM8(0x846FE8) = LO8(eax);
    MEM8(0x846FE9) = LO8(eax);
    MEM8(0x846FEA) = LO8(eax);
    MEM8(0x846FEB) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00015FC0
 * Original: 0x00015FC0 - 0x000160A2 (226 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015FC0(void)
{
    float xmm0;

loc_00015FC0: ;
    xmm0 = MEMF(0x648F08); /* movss */
    SET_LO8(eax, 0); /* xor self */
    MEMF(0x656CA4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(0x656CA8) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEM8(0x846FE8) = LO8(eax);
    MEM8(0x846FE9) = LO8(eax);
    MEM8(0x846FEA) = LO8(eax);
    MEM8(0x846FEB) = LO8(eax);
    MEM8(0x847008) = LO8(eax);
    MEMF(0x656CAC) = xmm0; /* movss */
    MEM8(0x846FEC) = LO8(eax);
    MEM8(0x846FED) = LO8(eax);
    MEM8(0x846FEF) = LO8(eax);
    MEM8(0x846FF0) = LO8(eax);
    MEM8(0x846FF1) = LO8(eax);
    MEM8(0x846FF2) = LO8(eax);
    MEM8(0x846FF3) = LO8(eax);
    MEM8(0x846FF4) = LO8(eax);
    MEM8(0x846FF5) = LO8(eax);
    MEM8(0x846FF6) = LO8(eax);
    MEM8(0x846FF7) = LO8(eax);
    MEM8(0x846FF8) = LO8(eax);
    MEM8(0x846FFC) = LO8(eax);
    MEM8(0x846FFD) = LO8(eax);
    MEM8(0x846FFE) = LO8(eax);
    MEM8(0x847031) = LO8(eax);
    MEM8(0x846FFF) = LO8(eax);
    MEM8(0x846FF9) = LO8(eax);
    MEM8(0x846FFA) = LO8(eax);
    MEM8(0x846FFB) = LO8(eax);
    MEM8(0x847000) = LO8(eax);
    MEM8(0x847032) = LO8(eax);
    MEM8(0x847003) = LO8(eax);
    MEM8(0x847006) = LO8(eax);
    MEM8(0x847007) = LO8(eax);
    MEM8(0x847004) = LO8(eax);
    MEM8(0x847005) = LO8(eax);
    MEM32(0x657C4C) = 0xB37;
    MEM8(0x847034) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000160B0
 * Original: 0x000160B0 - 0x000160DC (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160B0(void)
{
    float xmm0;

loc_000160B0: ;
    PUSH32(esp, 0); sub_00015FC0(); /* call 0x00015FC0 */

loc_000160B5: ;
    xmm0 = MEMF(0x648F08); /* movss */
    SET_LO8(eax, 1);
    MEM8(0x846FE8) = LO8(eax);
    MEM8(0x846FE9) = LO8(eax);
    MEM8(0x846FEA) = LO8(eax);
    MEM8(0x847008) = LO8(eax);
    MEMF(0x656CA4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000160E0
 * Original: 0x000160E0 - 0x0001610C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000160E0: ;
    esp = esp - 8;
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_000160FA: ;
    if (TEST_NZ(eax, eax)) { sub_0001610C(); return; } /* jne: not equal / not zero */

loc_000160FE: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00016103: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

}

/**
 * sub_00016130
 * Original: 0x00016130 - 0x0001625D (301 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016130(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00016130: ;
    xmm1 = MEMF(0x648D14); /* movss */
    SET_LO8(edx, MEM8(0x847262));
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    (void)0; /* cmp LO8(edx), LO8(ecx) - flags set for next jcc */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x15) = LO8(ecx);
    MEM8(eax + 0x16) = LO8(ecx);
    MEM32(eax + 0x18) = ecx;
    MEMF(eax + 0x1C) = xmm1; /* movss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    MEMF(eax + 0x24) = xmm1; /* movss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    xmm2 = xmm0; /* movaps */
    if (CMP_NE(LO8(edx), LO8(ecx))) goto loc_0001617B; /* jne: not equal / not zero */

loc_00016178: ;
    xmm2 = xmm1; /* movaps */

loc_0001617B: ;
    (void)0; /* cmp MEM8(0x847261), LO8(ecx) - flags set for next jcc */
    MEMF(eax + 0x2C) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    if (CMP_NE(MEM8(0x847261), LO8(ecx))) goto loc_0001618E; /* jne: not equal / not zero */

loc_0001618B: ;
    xmm2 = xmm1; /* movaps */

loc_0001618E: ;
    SET_LO8(edx, MEM8(0x847263));
    (void)0; /* cmp LO8(edx), LO8(ecx) - flags set for next jcc */
    MEMF(eax + 0x30) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    if (CMP_NE(LO8(edx), LO8(ecx))) goto loc_000161A3; /* jne: not equal / not zero */

loc_000161A0: ;
    xmm2 = xmm1; /* movaps */

loc_000161A3: ;
    (void)0; /* cmp LO8(edx), LO8(ecx) - flags set for next jcc */
    MEMF(eax + 0x34) = xmm2; /* movss */
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_000161AF; /* je: equal / zero */

loc_000161AC: ;
    xmm1 = xmm0; /* movaps */

loc_000161AF: ;
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM8(eax + 0x60) = LO8(ecx);
    MEM8(eax + 0x61) = LO8(ecx);
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = 0x19;
    MEM32(eax + 0x6C) = 0xFF;
    MEM32(eax + 0x74) = 0x19;
    MEM32(eax + 0x78) = 0xFF;
    MEM32(eax + 0x80) = ecx;
    MEM8(eax + 0x84) = LO8(ecx);
    MEM8(eax + 0x85) = LO8(ecx);
    MEM8(eax + 0x86) = LO8(ecx);
    edx = 2;
    MEM32(eax + 0x70) = edx;
    MEM32(eax + 0x7C) = edx;
    MEMF(eax + 0x88) = xmm0; /* movss */
    MEMF(eax + 0x8C) = xmm0; /* movss */
    MEMF(eax + 0x90) = xmm0; /* movss */
    MEMF(eax + 0x94) = xmm0; /* movss */
    MEMF(eax + 0x98) = xmm0; /* movss */
    MEMF(eax + 0x9C) = xmm0; /* movss */
    MEMF(eax + 0xA0) = xmm0; /* movss */
    MEMF(eax + 0xA4) = xmm0; /* movss */
    MEMF(eax + 0xA8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00016260
 * Original: 0x00016260 - 0x00016291 (49 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016260: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    esi = esi + ecx;
    eax--;
    if (((int32_t)eax < 0)) goto loc_0001628C; /* js: sign (negative) */

loc_00016278: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00016281: ;
    esi = esi - ebx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_00016287: ;
    edi--;
    if ((edi != 0)) goto loc_00016281; /* jne: not equal / not zero */

loc_0001628A: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0001628C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000162A0
 * Original: 0x000162A0 - 0x000164F0 (592 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000162A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000162A0: ;
    esp = esp - 0x10C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x114);
    SET_LO8(eax, MEM8(ebp + 0x60));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000164C6; /* jne: not equal / not zero */

loc_000162B9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(ebp + 0x60) = 1;
    PUSH32(esp, edi);
    ebx = 0x16620;
    edi = 0x165C0;
    MEM32(0x84B89C) = 0x18E20;
    MEM32(0x84B8A0) = 0x630C0;
    MEM32(0x84B8A4) = 0x18DF0;
    PUSH32(esp, 0); sub_00400FB0(); /* call 0x00400FB0 */

loc_000162ED: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_00019010(); /* call 0x00019010 */

loc_000162F4: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) goto loc_00016306; /* je: equal / zero */

loc_000162FD: ;
    esi = eax;
    PUSH32(esp, 0); sub_00018CD0(); /* call 0x00018CD0 */

loc_00016304: ;
    goto loc_00016308;

loc_00016306: ;
    eax = 0; /* xor self */

loc_00016308: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x80) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00016325; /* jne: not equal / not zero */

loc_00016312: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00016322: ;
    esp = esp + 0xC;

loc_00016325: ;
    MEM32(0x84BCA4) = 0x18E40;
    PUSH32(esp, 0); sub_00401000(); /* call 0x00401000 */

loc_00016334: ;
    PUSH32(esp, 0); sub_0001DE60(); /* call 0x0001DE60 */

loc_00016339: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x3C) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_000164C3; /* je: equal / zero */

loc_00016344: ;
    PUSH32(esp, 0); sub_00022CC0(); /* call 0x00022CC0 */

loc_00016349: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x40) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_000164C3; /* je: equal / zero */

loc_00016354: ;
    PUSH32(esp, 0); sub_00034260(); /* call 0x00034260 */

loc_00016359: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x44) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_000164C3; /* je: equal / zero */

loc_00016364: ;
    PUSH32(esp, 0x780AB8);
    PUSH32(esp, 0x5AC8A8);
    eax = esp + 0x20;
    PUSH32(esp, 0x102);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0001637D: ;
    esp = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM8(esp + 0x137) = LO8(ebx);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_000163A0: ;
    edi = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_000164DE; /* je: equal / zero */

loc_000163AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C271(); /* call 0x0042C271 */

loc_000163B2: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_000164D0; /* je: equal / zero */

loc_000163BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_000163C2: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x5C) = eax;
    if (CMP_NE(eax, ebx)) goto loc_000163DF; /* jne: not equal / not zero */

loc_000163CC: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_000163DC: ;
    esp = esp + 0xC;

loc_000163DF: ;
    eax = MEM32(ebp + 0x5C);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_000163F4: ;
    if (TEST_NZ(eax, eax)) goto loc_00016406; /* jne: not equal / not zero */

loc_000163F8: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_000163FD: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001F04F0(); /* call 0x001F04F0 */

loc_00016406: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0001640C: ;
    ecx = MEM32(ebp + 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 5;
    eax = 4;
    PUSH32(esp, 0); sub_00401A10(); /* call 0x00401A10 */

loc_00016420: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00016435; /* jne: not equal / not zero */

loc_00016427: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0001642C: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001F04F0(); /* call 0x001F04F0 */

loc_00016435: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebp);
    MEMF(0x84B908) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00017360(); /* call 0x00017360 */

loc_0001644B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00017520(); /* call 0x00017520 */

loc_00016451: ;
    PUSH32(esp, 0); sub_00016680(); /* call 0x00016680 */

loc_00016456: ;
    edx = MEM32(ebp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00034320(); /* call 0x00034320 */

loc_0001645F: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00016466: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x64) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00016483; /* jne: not equal / not zero */

loc_00016470: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00016480: ;
    esp = esp + 0xC;

loc_00016483: ;
    eax = MEM32(ebp + 0x64);
    MEM32(eax) = ebx;
    ecx = MEM32(ebp + 0x64);
    MEM32(ecx + 4) = ebx;
    edx = MEM32(ebp + 0x64);
    MEM32(edx + 8) = ebx;
    eax = MEM32(ebp + 0x64);
    MEM32(eax + 0xC) = ebx;
    ecx = MEM32(ebp + 0x64);
    MEM32(ecx + 0x10) = ebx;
    edx = MEM32(ebp + 0x64);
    MEM32(edx + 0x14) = ebx;
    eax = MEM32(ebp + 0x64);
    MEM32(eax + 0x18) = ebx;
    ecx = MEM32(ebp + 0x64);
    MEM32(ecx + 0x1C) = ebx;
    edx = MEM32(ebp + 0x64);
    MEM32(edx + 0x20) = ebx;
    eax = MEM32(ebp + 0x64);
    MEM32(eax + 0x24) = ebx;
    PUSH32(esp, 0); sub_00401190(); /* call 0x00401190 */

loc_000164C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000164C6: ;
    POP32(esp, ebp);
    esp = esp + 0x10C;
    esp += 8; return; /* ret 4 */

loc_000164D0: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_000164D5: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001F04F0(); /* call 0x001F04F0 */

loc_000164DE: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_000164E3: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001F04F0(); /* call 0x001F04F0 */

loc_000164EC: ;
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */
    __debugbreak(); /* int3 */

}

/**
 * sub_000164F0
 * Original: 0x000164F0 - 0x000165A9 (185 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000164F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000164F0: ;
    eax = MEM32(0x847014);
    if (TEST_NZ(eax, eax)) goto loc_000165A8; /* jne: not equal / not zero */

loc_000164FD: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001650B; /* jne: not equal / not zero */

loc_00016506: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001650B: ;
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
    if (TEST_Z(esi, esi)) goto loc_0001655B; /* je: equal / zero */

loc_00016533: ;
    if (CMP_B(MEM32(esi + 0x80), 0xAC)) goto loc_0001655B; /* jb: below (unsigned <) */

loc_0001653F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00016549: ;
    PUSH32(esp, 0xAC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00016554: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0001657F; /* jne: not equal / not zero */

loc_0001655B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001656D: ;
    PUSH32(esp, 0xAC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00016578: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_000165A9(); return; } /* je: equal / zero */

loc_0001657F: ;
    PUSH32(esp, 0); sub_00016130(); /* call 0x00016130 */

loc_00016584: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x847014) = eax;
    if (TEST_NZ(eax, eax)) goto loc_000165A6; /* jne: not equal / not zero */

loc_0001658D: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001659E: ;
    eax = MEM32(0x847014);
    esp = esp + 0xC;

loc_000165A6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000165A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00016680
 * Original: 0x00016680 - 0x000166AE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016680(void)
{
    int _flags = 0; /* fallback flag var */

loc_00016680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0001668B: ;
    ebx = 0; /* xor self */
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x847010) = eax;
    if (CMP_NE(eax, ebx)) { sub_000166AE(); return; } /* jne: not equal / not zero */

loc_00016699: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_000166A9: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017360
 * Original: 0x00017360 - 0x0001738E (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017360(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017360: ;
    PUSH32(esp, 0x130);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0001736A: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = eax;
    if (TEST_NZ(eax, eax)) { sub_0001738E(); return; } /* jne: not equal / not zero */

loc_00017378: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00017388: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000174C0
 * Original: 0x000174C0 - 0x00017511 (81 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000174C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000174C0: ;
    eax = MEM32(0x847040);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_LE(edi, eax)) goto loc_000174D5; /* jle: less or equal (signed <=) */

loc_000174CE: ;
    eax = edi;
    MEM32(0x847040) = eax;

loc_000174D5: ;
    if (CMP_LE(eax, 4)) goto loc_000174DF; /* jle: less or equal (signed <=) */

loc_000174DA: ;
    if (CMP_NE(edi, 3)) goto loc_0001750D; /* jne: not equal / not zero */

loc_000174DF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_000174E3: ;
    eax = MEM32(ebp + 4);
    ebx = MEM32(esi + eax);
    if (CMP_NE(MEM32(ebx + 0x24), edi)) goto loc_00017500; /* jne: not equal / not zero */

loc_000174EE: ;
    if (CMP_NE(MEM32(ebx + 8), 1)) goto loc_00017500; /* jne: not equal / not zero */

loc_000174F4: ;
    SET_LO8(eax, MEM8(ebx + 0x22));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00017500; /* jne: not equal / not zero */

loc_000174FB: ;
    PUSH32(esp, 0); sub_00035950(); /* call 0x00035950 */

loc_00017500: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x130)) goto loc_000174E3; /* jl: less (signed <) */

loc_0001750B: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0001750D: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017520
 * Original: 0x00017520 - 0x00017555 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017520(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017520: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00017620(); /* call 0x00017620 */

loc_0001752B: ;
    PUSH32(esp, 0xE8);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00017535: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_NZ(eax, eax)) { sub_00017555(); return; } /* jne: not equal / not zero */

loc_0001753E: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001754E: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017620
 * Original: 0x00017620 - 0x0001762D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017620(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017620: ;
    eax = 0x780AB8;
    esp = esp - 0x24;
    edx = eax + 1;
    g_seh_ebp = ebp; sub_00017630(); return; /* tail jmp 0x00017630 */

}

/**
 * sub_00017950
 * Original: 0x00017950 - 0x000179C7 (119 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017950(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017950: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = edx;
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = ebx;
    MEM8(esp + 0x14) = LO8(ebx);
    esi = eax + 1;
    /* nop */

loc_00017970: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00017970; /* jne: not equal / not zero */

loc_00017977: ;
    eax = eax - esi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00017984: ;
    esi = MEM32(edi + 0x54);
    eax = esp + 0x10;
    ebx = esp + 0xC;
    PUSH32(esp, 0); sub_000191A0(); /* call 0x000191A0 */

loc_00017994: ;
    (void)0; /* cmp MEM32(esp + 0x28), 0x10 - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_B(MEM32(esp + 0x28), 0x10)) goto loc_000179B4; /* jb: below (unsigned <) */

loc_0001799D: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_000179B4; /* je: equal / zero */

loc_000179A8: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000179B1: ;
    esp = esp + 4;

loc_000179B4: ;
    ecx = MEM32(edi + 0x54);
    eax = MEM32(esp + 4);
    if (CMP_EQ(eax, MEM32(ecx + 4))) { sub_000179C7(); return; } /* je: equal / zero */

loc_000179C0: ;
    eax = MEM32(eax + 0x28);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_000179D0
 * Original: 0x000179D0 - 0x00017A38 (104 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000179D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000179D0: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_000179D5: ;
    MEM32(0x847038) = eax;
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_00017A37; /* je: equal / zero */

loc_000179E1: ;
    if (CMP_EQ(MEM32(edi), 0)) goto loc_00017A37; /* je: equal / zero */

loc_000179E6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x687E50;
    /* nop */

loc_000179F0: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 4);
    ebx = MEM32(ecx + eax * 4);
    SET_LO8(eax, MEM8(ebx + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017A0C; /* je: equal / zero */

loc_000179FF: ;
    PUSH32(esp, 0); sub_00035760(); /* call 0x00035760 */

loc_00017A04: ;
    if (CMP_EQ(eax, 2)) goto loc_00017A0C; /* je: equal / zero */

loc_00017A09: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;

loc_00017A0C: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x687F80)) goto loc_000179F0; /* jl: less (signed <) */

loc_00017A17: ;
    esi = 0; /* xor self */
    /* nop */

loc_00017A20: ;
    edx = MEM32(edi);
    ebx = MEM32(esi + edx);
    PUSH32(esp, 0); sub_0002D0C0(); /* call 0x0002D0C0 */

loc_00017A2A: ;
    esi = esi + 4;
    if (CMP_L(esi, 0xE8)) goto loc_00017A20; /* jl: less (signed <) */

loc_00017A35: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00017A37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00017A40
 * Original: 0x00017A40 - 0x00017A4A (10 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017A40(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017A40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00017A50(); return; /* tail jmp 0x00017A50 */

}

/**
 * sub_00017B40
 * Original: 0x00017B40 - 0x00017C29 (233 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017B40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017B40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ecx + 8) = 0;
    edx = 0; /* xor self */
    SET_LO8(ebx, 1);
    /* nop */

loc_00017B50: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(edx + eax);
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00017B68; /* jne: not equal / not zero */

loc_00017B5C: ;
    if (CMP_EQ(MEM8(eax + 0x22), 0)) goto loc_00017B81; /* je: equal / zero */

loc_00017B62: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00017B81; /* je: equal / zero */

loc_00017B68: ;
    esi = MEM32(eax + 0x18);
    if (TEST_NZ(esi, esi)) goto loc_00017B81; /* jne: not equal / not zero */

loc_00017B6F: ;
    if (CMP_NE(MEM8(eax + 0x14), 0)) goto loc_00017B81; /* jne: not equal / not zero */

loc_00017B75: ;
    if (CMP_NE(MEM8(eax + 0x21), 0)) goto loc_00017B7E; /* jne: not equal / not zero */

loc_00017B7B: ;
    MEM8(eax + 0x21) = LO8(ebx);

loc_00017B7E: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;

loc_00017B81: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + edx + 4);
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00017B9A; /* jne: not equal / not zero */

loc_00017B8E: ;
    if (CMP_EQ(MEM8(eax + 0x22), 0)) goto loc_00017BB3; /* je: equal / zero */

loc_00017B94: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00017BB3; /* je: equal / zero */

loc_00017B9A: ;
    esi = MEM32(eax + 0x18);
    if (TEST_NZ(esi, esi)) goto loc_00017BB3; /* jne: not equal / not zero */

loc_00017BA1: ;
    if (CMP_NE(MEM8(eax + 0x14), 0)) goto loc_00017BB3; /* jne: not equal / not zero */

loc_00017BA7: ;
    if (CMP_NE(MEM8(eax + 0x21), 0)) goto loc_00017BB0; /* jne: not equal / not zero */

loc_00017BAD: ;
    MEM8(eax + 0x21) = LO8(ebx);

loc_00017BB0: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;

loc_00017BB3: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(edx + eax + 8);
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00017BCC; /* jne: not equal / not zero */

loc_00017BC0: ;
    if (CMP_EQ(MEM8(eax + 0x22), 0)) goto loc_00017BE5; /* je: equal / zero */

loc_00017BC6: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00017BE5; /* je: equal / zero */

loc_00017BCC: ;
    esi = MEM32(eax + 0x18);
    if (TEST_NZ(esi, esi)) goto loc_00017BE5; /* jne: not equal / not zero */

loc_00017BD3: ;
    if (CMP_NE(MEM8(eax + 0x14), 0)) goto loc_00017BE5; /* jne: not equal / not zero */

loc_00017BD9: ;
    if (CMP_NE(MEM8(eax + 0x21), 0)) goto loc_00017BE2; /* jne: not equal / not zero */

loc_00017BDF: ;
    MEM8(eax + 0x21) = LO8(ebx);

loc_00017BE2: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;

loc_00017BE5: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(edx + eax + 0xC);
    if (CMP_NE(MEM8(eax + 0x15), 0)) goto loc_00017BFE; /* jne: not equal / not zero */

loc_00017BF2: ;
    if (CMP_EQ(MEM8(eax + 0x22), 0)) goto loc_00017C17; /* je: equal / zero */

loc_00017BF8: ;
    if (CMP_EQ(MEM8(eax + 0x15), 0)) goto loc_00017C17; /* je: equal / zero */

loc_00017BFE: ;
    esi = MEM32(eax + 0x18);
    if (TEST_NZ(esi, esi)) goto loc_00017C17; /* jne: not equal / not zero */

loc_00017C05: ;
    if (CMP_NE(MEM8(eax + 0x14), 0)) goto loc_00017C17; /* jne: not equal / not zero */

loc_00017C0B: ;
    if (CMP_NE(MEM8(eax + 0x21), 0)) goto loc_00017C14; /* jne: not equal / not zero */

loc_00017C11: ;
    MEM8(eax + 0x21) = LO8(ebx);

loc_00017C14: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;

loc_00017C17: ;
    edx = edx + 0x10;
    if (CMP_L(edx, 0x130)) goto loc_00017B50; /* jl: less (signed <) */

loc_00017C26: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017C30
 * Original: 0x00017C30 - 0x00017C78 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017C30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017C30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_00017C34: ;
    eax = MEM32(edi + 4);
    ebx = MEM32(esi + eax);
    SET_LO8(eax, MEM8(ebx + 0x15));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00017C6A; /* jne: not equal / not zero */

loc_00017C41: ;
    SET_LO8(eax, MEM8(ebx + 0x22));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00017C6A; /* jne: not equal / not zero */

loc_00017C48: ;
    SET_LO8(eax, MEM8(ebx + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017C6A; /* je: equal / zero */

loc_00017C4F: ;
    PUSH32(esp, 0); sub_00035760(); /* call 0x00035760 */

loc_00017C54: ;
    if (CMP_NE(eax, 2)) goto loc_00017C6A; /* jne: not equal / not zero */

loc_00017C59: ;
    SET_LO8(eax, MEM8(0x849DB4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017C67; /* je: equal / zero */

loc_00017C62: ;
    PUSH32(esp, 0); sub_0025BB80(); /* call 0x0025BB80 */

loc_00017C67: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) - 1;

loc_00017C6A: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x130)) goto loc_00017C34; /* jl: less (signed <) */

loc_00017C75: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017C80
 * Original: 0x00017C80 - 0x00017C93 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017C80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017C80: ;
    PUSH32(esp, 0); sub_00017B40(); /* call 0x00017B40 */

loc_00017C85: ;
    eax = MEM32(ecx + 8);
    if (TEST_Z(eax, eax)) goto loc_00017C92; /* je: equal / zero */

loc_00017C8C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00017EF0(); /* call 0x00017EF0 */

loc_00017C92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00017CA0
 * Original: 0x00017CA0 - 0x00017CE5 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017CA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017CA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_00017CA4: ;
    eax = MEM32(ebx + 4);
    eax = MEM32(edi + eax);
    ecx = MEM32(eax + 0x18);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00017CD7; /* jle: less or equal (signed <=) */

loc_00017CB1: ;
    ecx--;
    MEM32(eax + 0x18) = ecx;
    SET_LO8(edx, MEM8(0x846FF3));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00017CD7; /* je: equal / zero */

loc_00017CBF: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D3C20);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00017CD4: ;
    esp = esp + 0xC;

loc_00017CD7: ;
    edi = edi + 4;
    if (CMP_L(edi, 0x130)) goto loc_00017CA4; /* jl: less (signed <) */

loc_00017CE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00017CF0
 * Original: 0x00017CF0 - 0x00017E18 (296 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017CF0(void)
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

loc_00017CF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_00017CFA: ;
    esi = MEM32(ebp + 0x18);
    ecx = eax;
    ecx = ecx - esi;
    if (CMP_B(ecx, 0x10)) { sub_00017E18(); return; } /* jb: below (unsigned <) */

loc_00017D0A: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00017D1C; /* jge: greater or equal (signed >=) */

loc_00017D16: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00017D1C: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 0x18) = eax;
    SET_LO8(ecx, MEM8(0x846FFB));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00017D47; /* je: equal / zero */

loc_00017D33: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC884);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00017D44: ;
    esp = esp + 8;

loc_00017D47: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017D9C; /* je: equal / zero */

loc_00017D4F: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017D9C; /* je: equal / zero */

loc_00017D56: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    edi = MEM32(ebx + 0x1C);
    esi = MEM32(ebx + 0x18);
    eax = ebp;
    PUSH32(esp, 0); sub_00017FF0(); /* call 0x00017FF0 */

loc_00017D67: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017D9B; /* je: equal / zero */

loc_00017D6B: ;
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0001ED00(); /* call 0x0001ED00 */

loc_00017D75: ;
    esi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017D90; /* je: equal / zero */

loc_00017D7F: ;
    PUSH32(esp, 0); sub_00018F50(); /* call 0x00018F50 */

loc_00017D84: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF410(); /* call 0x002AF410 */

loc_00017D8D: ;
    esp = esp + 4;

loc_00017D90: ;
    MEM32(ebp + 0x10) = 0;
    MEM8(ebp + 0x14) = 0;

loc_00017D9B: ;
    POP32(esp, ebx);

loc_00017D9C: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00017E20(); /* call 0x00017E20 */

loc_00017DA3: ;
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, 0); sub_0001DF20(); /* call 0x0001DF20 */

loc_00017DAB: ;
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, 0); sub_00024630(); /* call 0x00024630 */

loc_00017DB3: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0x86));
    edx = ebp + 0xA0;
    PUSH32(esp, edx);
    eax = ebp + 0x94;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00034AB0(); /* call 0x00034AB0 */

loc_00017DD2: ;
    SET_LO8(eax, MEM8(ebp + 0x61));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017DE4; /* je: equal / zero */

loc_00017DD9: ;
    SET_LO8(eax, MEM8(ebp + 0x16));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017DE4; /* je: equal / zero */

loc_00017DE0: ;
    MEM8(ebp + 0x61) = 0;

loc_00017DE4: ;
    PUSH32(esp, 0); sub_00401190(); /* call 0x00401190 */

loc_00017DE9: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00017DFE; /* je: equal / zero */

loc_00017DF0: ;
    SET_LO8(eax, MEM8(ebp + 0x16));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017DFE; /* je: equal / zero */

loc_00017DF7: ;
    edi = ebp;
    PUSH32(esp, 0); sub_00017C30(); /* call 0x00017C30 */

loc_00017DFE: ;
    eax = MEM32(ebp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_00017E18(); return; } /* je: equal / zero */

loc_00017E06: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00017EF0(); /* call 0x00017EF0 */

loc_00017E0C: ;
    POP32(esp, esi);
    ecx = ebp;
    POP32(esp, ebp);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00017B40(); return; /* tail jmp 0x00017B40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00017E20
 * Original: 0x00017E20 - 0x00017EE4 (196 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017E20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00017E20: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x84B944); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    ecx = esi + 0x88;
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(0x84B948); /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x84B94C); /* movss */
    MEMF(ecx + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x6497E4); /* movss */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(ecx);
    eax = esi + 0x94;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x84A144);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, (TEST_NZ(edx, edx)) ? 1 : 0); /* setne */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x86) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00017EDF; /* je: equal / zero */

loc_00017EB8: ;
    eax = MEM32(0x8470DC);
    eax = eax + 0x770;
    if ((eax == 0)) goto loc_00017EDF; /* je: equal / zero */

loc_00017EC4: ;
    eax = eax + 0x2F4;
    edx = MEM32(eax);
    esi = esi + 0xA0;
    MEM32(esi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;

loc_00017EDF: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00017EF0
 * Original: 0x00017EF0 - 0x00017EFA (10 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017EF0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017EF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_00017F00(); return; /* tail jmp 0x00017F00 */

}

/**
 * sub_00017FF0
 * Original: 0x00017FF0 - 0x0001801D (45 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00017FF0: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(esi, esi)) goto loc_00018019; /* je: equal / zero */

loc_00017FF5: ;
    ecx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00018019; /* jle: less or equal (signed <=) */

loc_00017FFB: ;
    edx = MEM32(eax + 4);
    edi = edi;

loc_00018000: ;
    eax = MEM32(esi + ecx * 4);
    eax = MEM32(edx + eax * 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00018014; /* jne: not equal / not zero */

loc_0001800D: ;
    SET_LO8(ebx, MEM8(eax + 0x22));
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0001801D(); return; } /* je: equal / zero */

loc_00018014: ;
    ecx++;
    if (CMP_L(ecx, edi)) goto loc_00018000; /* jl: less (signed <) */

loc_00018019: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018030
 * Original: 0x00018030 - 0x000180A3 (115 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018030: ;
    SET_LO8(eax, MEM8(0x84725D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000180A2; /* je: equal / zero */

loc_00018039: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_00018055: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00018068; /* jne: not equal / not zero */

loc_0001805A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0); sub_0042C54D(); /* call 0x0042C54D */

loc_00018066: ;
    goto loc_0001806E;

loc_00018068: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0001806E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x657BFC);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_0001808A: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0001809C; /* jne: not equal / not zero */

loc_0001808F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x657BFC);
    PUSH32(esp, 0); sub_0042C54D(); /* call 0x0042C54D */

loc_0001809B: ;
    esp += 4; return; /* ret */

loc_0001809C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_000180A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000180B0
 * Original: 0x000180B0 - 0x00018153 (163 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000180B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000180B0: ;
    eax = MEM32(edi + 0x48);
    esp = esp - 0x108;
    if (TEST_Z(eax, eax)) goto loc_0001814C; /* je: equal / zero */

loc_000180C1: ;
    eax = MEM32(edi + 0x4C);
    ecx = MEM32(eax * 4 + 0x69CF90);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0x5AC878);
    edx = esp + 0x14;
    PUSH32(esp, 0x102);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000180E6: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD0000000u);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM8(esp + 0x127) = 0;
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_0001810D: ;
    esi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00018138; /* je: equal / zero */

loc_00018114: ;
    edx = MEM32(edi + 0x48);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3768);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_00018132: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_00018138: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00018141: ;
    esp = esp + 4;
    MEM32(edi + 0x48) = 0;
    POP32(esp, esi);

loc_0001814C: ;
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_00018160
 * Original: 0x00018160 - 0x00018321 (449 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018160: ;
    esp = esp - 0x508;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x514);
    eax = MEM32(esi + 0x48);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_00018316; /* je: equal / zero */

loc_0001817C: ;
    eax = MEM32(eax);
    ecx = MEM32(eax * 4 + 0x69CF90);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x657BFC);
    PUSH32(esp, 0x5AC86C);
    edx = esp + 0x1C;
    PUSH32(esp, 0x102);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000181A0: ;
    esp = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xD0000000u);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM8(esp + 0x12F) = LO8(ebx);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_000181C3: ;
    ebp = eax;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_00018315; /* je: equal / zero */

loc_000181CE: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx);
    eax = MEM32(edx * 4 + 0x69CF90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC864);
    ecx = esp + 0x11C;
    PUSH32(esp, 0x3FE);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000181F2: ;
    eax = esp + 0x124;
    esp = esp + 0x10;
    MEM8(esp + 0x513) = LO8(ebx);
    MEM32(esp + 0xC) = ebx;
    edx = eax + 1;
    /* nop */

loc_00018210: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00018210; /* jne: not equal / not zero */

loc_00018217: ;
    eax = eax - edx;
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_0001822E: ;
    PUSH32(esp, 0x5AC834);
    ecx = esp + 0x118;
    PUSH32(esp, 0x3FE);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00018245: ;
    eax = esp + 0x120;
    esp = esp + 0xC;
    MEM32(esp + 0xC) = ebx;
    edx = eax + 1;

loc_00018256: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00018256; /* jne: not equal / not zero */

loc_0001825D: ;
    PUSH32(esp, edi);
    eax = eax - edx;
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x124;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_00018275: ;
    esi = 1;
    edi = 0x65E090;
    /* nop */

loc_00018280: ;
    ecx = MEM32(esp + 0x51C);
    edx = MEM32(ecx + 0x48);
    ecx = MEM32(edx + esi * 4);
    if (CMP_EQ(ecx, ebx)) goto loc_000182FE; /* je: equal / zero */

loc_00018291: ;
    if (CMP_L(edi, 0x65E060)) goto loc_000182A5; /* jl: less (signed <) */

loc_00018299: ;
    if (CMP_GE(edi, 0x687940)) goto loc_000182A5; /* jge: greater or equal (signed >=) */

loc_000182A1: ;
    eax = edi;
    goto loc_000182A7;

loc_000182A5: ;
    eax = 0; /* xor self */

loc_000182A7: ;
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x5AC824);
    eax = esp + 0x12C;
    PUSH32(esp, 0x102);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000182C8: ;
    eax = esp + 0x134;
    esp = esp + 0x1C;
    MEM32(esp + 0x10) = ebx;
    edx = eax + 1;
    /* nop */

loc_000182E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_000182E0; /* jne: not equal / not zero */

loc_000182E7: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    eax = eax - edx;
    PUSH32(esp, eax);
    edx = esp + 0x124;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_000182FE: ;
    edi = edi + 0x30;
    esi++;
    if (CMP_L(edi, 0x687940)) goto loc_00018280; /* jl: less (signed <) */

loc_0001830E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_00018314: ;
    POP32(esp, edi);

loc_00018315: ;
    POP32(esp, ebp);

loc_00018316: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x508;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018330
 * Original: 0x00018330 - 0x00018429 (249 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018330: ;
    esp = esp - 0x108;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_000180B0(); /* call 0x000180B0 */

loc_0001833E: ;
    SET_LO8(eax, MEM8(0x847001));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00018421; /* je: equal / zero */

loc_0001834B: ;
    eax = MEM32(0x7FA1F8);
    PUSH32(esp, 0x3768);
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0001835D: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x48) = eax;
    if (TEST_Z(eax, eax)) goto loc_0001840D; /* je: equal / zero */

loc_0001836B: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx * 4 + 0x69CF90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0x5AC878);
    eax = esp + 0x14;
    PUSH32(esp, 0x102);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0001838F: ;
    esp = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD0000000u);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM8(esp + 0x127) = 0;
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_000183B6: ;
    edi = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_000183F1; /* je: equal / zero */

loc_000183BD: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3768);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_000183DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_000183E1: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x4C);
    MEM32(ecx) = edx;
    POP32(esp, edi);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

loc_000183F1: ;
    edi = MEM32(esi + 0x48);
    ecx = 0xDDA;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x4C);
    MEM32(ecx) = edx;
    POP32(esp, edi);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

loc_0001840D: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0001841E: ;
    esp = esp + 0xC;

loc_00018421: ;
    POP32(esp, edi);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_00018430
 * Original: 0x00018430 - 0x00018555 (293 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018430: ;
    esp = esp - 0x24C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x258);
    PUSH32(esp, edi);
    edi = ebp;
    PUSH32(esp, 0); sub_000180B0(); /* call 0x000180B0 */

loc_00018447: ;
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0x5AC818);
    eax = esp + 0x1C;
    PUSH32(esp, 0x102);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00018460: ;
    esp = esp + 0x10;
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    ebx = 0; /* xor self */
    PUSH32(esp, edx);
    MEM8(esp + 0x11F) = LO8(ebx);
    PUSH32(esp, 0); sub_0042C6B3(); /* call 0x0042C6B3 */

loc_0001847E: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00018549; /* je: equal / zero */

loc_0001848B: ;
    PUSH32(esp, 0x3768);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00018495: ;
    edi = eax;
    esp = esp + 4;
    ecx = 0xDDA;
    eax = 0; /* xor self */
    MEM32(ebp + 0x48) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, esi);
    goto loc_000184B0;

    /* nop */

loc_000184B0: ;
    eax = esp + 0x148;
    PUSH32(esp, eax);
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0x5AC810);
    ecx = esp + 0x24;
    PUSH32(esp, 0x102);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_000184D1: ;
    esp = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xD0000000u);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_000184ED: ;
    esi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00018519; /* je: equal / zero */

loc_000184F4: ;
    ecx = MEM32(ebp + 0x48);
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3768);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_0001850D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_00018513: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00018160(); /* call 0x00018160 */

loc_00018519: ;
    eax = MEM32(esp + 0x10);
    edx = esp + 0x11C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C7C0(); /* call 0x0042C7C0 */

loc_0001852B: ;
    if (TEST_NZ(eax, eax)) goto loc_000184B0; /* jne: not equal / not zero */

loc_0001852F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_00018539: ;
    edx = MEM32(ebp + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00018542: ;
    esp = esp + 4;
    MEM32(ebp + 0x48) = ebx;
    POP32(esp, esi);

loc_00018549: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018560
 * Original: 0x00018560 - 0x0001864A (234 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018560: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = edi;
    PUSH32(esp, 0); sub_00018330(); /* call 0x00018330 */

loc_0001856E: ;
    eax = MEM32(ebp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00018581; /* je: equal / zero */

loc_00018575: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ebx = edi;
    PUSH32(esp, 0); sub_00017A40(); /* call 0x00017A40 */

loc_00018581: ;
    MEM8(edi + 0x14) = 1;
    MEM8(edi + 0x15) = 0;
    MEM32(edi + 0x10) = ebp;
    ecx = MEM32(ebp + 0xC);
    MEM32(edi + 0x74) = ecx;
    edx = MEM32(ebp + 0x10);
    MEM32(edi + 0x78) = edx;
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0x7C) = eax;
    PUSH32(esp, eax);
    ebx = edx;
    esi = ecx;
    eax = edi;
    PUSH32(esp, 0); sub_00018A60(); /* call 0x00018A60 */

loc_000185AA: ;
    SET_LO8(eax, MEM8(ebp + 0x21));
    POP32(esp, esi);
    POP32(esp, ebp);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(0x847262));
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0001864A(); return; } /* je: equal / zero */

loc_000185BD: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000185CC; /* jne: not equal / not zero */

loc_000185C4: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_000185CC: ;
    MEMF(edi + 0x1C) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x759EA0); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x91);
    PUSH32(esp, 0); sub_00401EE0(); /* call 0x00401EE0 */

loc_000185E8: ;
    SET_LO8(eax, MEM8(0x847261));
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000185FF; /* jne: not equal / not zero */

loc_000185F7: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_000185FF: ;
    ecx = (int32_t)MEMF(0x759EA0); /* cvttss2si */
    PUSH32(esp, ecx);
    MEMF(edi + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x93);
    MEMF(edi + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00401EE0(); /* call 0x00401EE0 */

loc_00018624: ;
    edx = (int32_t)MEMF(0x759EA0); /* cvttss2si */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x92);
    MEMF(edi + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00401EE0(); /* call 0x00401EE0 */

loc_00018644: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000187C0
 * Original: 0x000187C0 - 0x0001886E (174 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000187C0(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000187C0: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM8(eax + 0x1C) = 0;
    ebp = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_0002E7A0(); /* call 0x0002E7A0 */

loc_000187D7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00024C00(); /* call 0x00024C00 */

loc_000187DD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00024C90(); /* call 0x00024C90 */

loc_000187E3: ;
    edi = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001E570(); /* call 0x0001E570 */

loc_000187EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0001E5D0(); /* call 0x0001E5D0 */

loc_000187F4: ;
    eax = edi;
    PUSH32(esp, 0); sub_0001E710(); /* call 0x0001E710 */

loc_000187FB: ;
    ecx = (int32_t)MEMF(0x759EA0); /* cvttss2si */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x91);
    MEMF(esi + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00401EE0(); /* call 0x00401EE0 */

loc_0001881B: ;
    edx = (int32_t)MEMF(0x759EA0); /* cvttss2si */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x93);
    MEMF(esi + 0x20) = xmm0; /* movss */
    MEMF(esi + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00401EE0(); /* call 0x00401EE0 */

loc_00018840: ;
    eax = (int32_t)MEMF(0x759EA0); /* cvttss2si */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x92);
    MEMF(esi + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00401EE0(); /* call 0x00401EE0 */

loc_00018860: ;
    esp = esp + 0x18;
    edi = esi;
    PUSH32(esp, 0); sub_00018900(); /* call 0x00018900 */

loc_0001886A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018870
 * Original: 0x00018870 - 0x000188FB (139 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018870(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, 1);
    if (TEST_Z(eax, eax)) goto loc_000188ED; /* je: equal / zero */

loc_0001887F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */

loc_00018883: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(esi + eax);
    SET_LO8(eax, MEM8(ecx + 0x22));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000188E0; /* jne: not equal / not zero */

loc_00018890: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001889E; /* jne: not equal / not zero */

loc_00018897: ;
    SET_LO8(eax, MEM8(ecx + 0x22));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000188E0; /* je: equal / zero */

loc_0001889E: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000188E0; /* jne: not equal / not zero */

loc_000188A5: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000188D9; /* je: equal / zero */

loc_000188AC: ;
    eax = MEM32(ecx + 0x18);
    if (TEST_NZ(eax, eax)) goto loc_000188D9; /* jne: not equal / not zero */

loc_000188B3: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000188D9; /* jne: not equal / not zero */

loc_000188BA: ;
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_00035860(); /* call 0x00035860 */

loc_000188C3: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(esi + ecx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000188DE; /* jne: not equal / not zero */

loc_000188D0: ;
    SET_LO8(ecx, MEM8(eax + 0x22));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000188E0; /* je: equal / zero */

loc_000188D7: ;
    goto loc_000188DE;

loc_000188D9: ;
    PUSH32(esp, 0); sub_00035920(); /* call 0x00035920 */

loc_000188DE: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000188E0: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x130)) goto loc_00018883; /* jl: less (signed <) */

loc_000188EB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000188ED: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_00017CF0(); /* call 0x00017CF0 */

loc_000188F4: ;
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018900
 * Original: 0x00018900 - 0x00018947 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018900(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018900: ;
    eax = MEM32(edi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00018946; /* je: equal / zero */

loc_00018907: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    goto loc_00018910;

    /* nop */

loc_00018910: ;
    eax = MEM32(edi + 0x64);
    ebx = MEM32(esi + eax);
    if (TEST_Z(ebx, ebx)) goto loc_0001893C; /* je: equal / zero */

loc_0001891A: ;
    eax = MEM32(edi + 0x44);
    PUSH32(esp, 0); sub_00035070(); /* call 0x00035070 */

loc_00018922: ;
    ecx = MEM32(edi + 0x64);
    ecx = MEM32(esi + ecx);
    if (TEST_Z(ecx, ecx)) goto loc_00018932; /* je: equal / zero */

loc_0001892C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_00018932: ;
    eax = MEM32(edi + 0x64);
    MEM32(esi + eax) = 0;

loc_0001893C: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x28)) goto loc_00018910; /* jl: less (signed <) */

loc_00018944: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00018946: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00018950
 * Original: 0x00018950 - 0x00018A53 (259 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    ebx = eax;
    if (TEST_S(ebp, ebp)) goto loc_00018A4E; /* jl: less (signed <) */

loc_00018960: ;
    if (CMP_GE(ebp, 0xA)) goto loc_00018A4E; /* jge: greater or equal (signed >=) */

loc_00018969: ;
    eax = MEM32(ebx + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00018A4E; /* je: equal / zero */

loc_00018974: ;
    if (CMP_NE(MEM32(eax + ebp * 4), 0)) goto loc_00018A27; /* jne: not equal / not zero */

loc_0001897E: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001898C; /* jne: not equal / not zero */

loc_00018987: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001898C: ;
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
    if (TEST_Z(esi, esi)) goto loc_000189D6; /* je: equal / zero */

loc_000189B4: ;
    if (CMP_B(MEM32(esi + 0x80), 0x20)) goto loc_000189D6; /* jb: below (unsigned <) */

loc_000189BD: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000189C7: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000189CF: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000189F7; /* jne: not equal / not zero */

loc_000189D6: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_000189E8: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_000189F0: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00018A00; /* je: equal / zero */

loc_000189F7: ;
    esi = eax;
    PUSH32(esp, 0); sub_00012A20(); /* call 0x00012A20 */

loc_000189FE: ;
    goto loc_00018A02;

loc_00018A00: ;
    eax = 0; /* xor self */

loc_00018A02: ;
    ecx = MEM32(ebx + 0x64);
    MEM32(ecx + ebp * 4) = eax;
    edx = MEM32(ebx + 0x64);
    (void)0; /* cmp MEM32(edx + ebp * 4), 0 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(MEM32(edx + ebp * 4), 0)) goto loc_00018A27; /* jne: not equal / not zero */

loc_00018A13: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00018A24: ;
    esp = esp + 0xC;

loc_00018A27: ;
    eax = MEM32(ebx + 0x64);
    eax = MEM32(eax + ebp * 4);
    if (CMP_NE(MEM32(eax + 4), 0xFFFFFFFFu)) goto loc_00018A3A; /* jne: not equal / not zero */

loc_00018A33: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;

loc_00018A3A: ;
    eax = MEM32(ebx + 0x64);
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    eax = MEM32(eax + ebp * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00015E10(); /* call 0x00015E10 */

loc_00018A4E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00018A60
 * Original: 0x00018A60 - 0x00018A78 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018A60: ;
    (void)0; /* cmp esi, 0xFF - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(esi, 0xFF)) { sub_00018A78(); return; } /* jne: not equal / not zero */

loc_00018A70: ;
    eax = MEM32(edi + 0x74);
    MEM32(edi + 0x68) = eax;
    g_seh_ebp = ebp; sub_00018A8E(); return; /* tail jmp 0x00018A8E */

}

/**
 * sub_00018B30
 * Original: 0x00018B30 - 0x00018B96 (102 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018B30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018B30: ;
    SET_LO8(eax, MEM8(0x84725D));
    esp = esp - 0x400;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00018B8F; /* je: equal / zero */

loc_00018B3F: ;
    ecx = MEM32(esp + 0x404);
    eax = esp + 0x408;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EA04(); /* call 0x0046EA04 */

loc_00018B5E: ;
    eax = MEM32(esi + 0x80);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00018B86; /* je: equal / zero */

loc_00018B6B: ;
    SET_LO8(ecx, MEM8(esi + 0x84));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00018B86; /* jne: not equal / not zero */

loc_00018B75: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, 0); sub_00018D90(); /* call 0x00018D90 */

loc_00018B7F: ;
    esp = esp + 0x400;
    esp += 4; return; /* ret */

loc_00018B86: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C811(); /* call 0x0042C811 */

loc_00018B8F: ;
    esp = esp + 0x400;
    esp += 4; return; /* ret */

}

/**
 * sub_00018BA0
 * Original: 0x00018BA0 - 0x00018BDB (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018BA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018BA0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + -1;
    if (CMP_A(eax, 0xF)) { sub_00018BDB(); return; } /* ja: above (unsigned >) */

loc_00018BAB: ;
    eax = ZX8(MEM8(eax + 0x18BEC));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x18BE0)); return; /* indirect tail jmp */

    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, 0); sub_0001E420(); /* call 0x0001E420 */

loc_00018BC1: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    esp += 4; return; /* ret */

    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_00018C00
 * Original: 0x00018C00 - 0x00018C3E (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018C00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018C00: ;
    ecx = MEM32(eax + 4);
    edx = 0; /* xor self */
    PUSH32(esp, ebx);

loc_00018C06: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00018C22; /* jne: not equal / not zero */

loc_00018C0F: ;
    SET_LO8(ebx, MEM8(eax + 0x22));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00018C22; /* jne: not equal / not zero */

loc_00018C16: ;
    if (CMP_G(MEM32(eax + 0x24), esi)) goto loc_00018C22; /* jg: greater (signed >) */

loc_00018C1B: ;
    SET_LO8(ebx, MEM8(eax + 0x20));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_00018C3E(); return; } /* jne: not equal / not zero */

loc_00018C22: ;
    edx++;
    ecx = ecx + 4;
    if (CMP_L(edx, 0x4C)) goto loc_00018C06; /* jl: less (signed <) */

loc_00018C2B: ;
    if (CMP_NE(esi, 4)) goto loc_00018C3A; /* jne: not equal / not zero */

loc_00018C30: ;
    MEM32(0x847040) = 5;

loc_00018C3A: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018C50
 * Original: 0x00018C50 - 0x00018C5A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018C50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018C50: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_NZ(ecx, ecx)) { sub_00018C5A(); return; } /* jne: not equal / not zero */

loc_00018C57: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00018C80
 * Original: 0x00018C80 - 0x00018CC4 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018C80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x5AC7A0;
    if (TEST_Z(eax, eax)) goto loc_00018CA0; /* je: equal / zero */

loc_00018C90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00018C96: ;
    esp = esp + 4;
    MEM32(esi + 0x14) = 0;

loc_00018CA0: ;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    MEM32(esi) = 0x5F0FD4;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00018CBE; /* je: equal / zero */

loc_00018CAD: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00018CBB: ;
    esp = esp + 4;

loc_00018CBE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018CD0
 * Original: 0x00018CD0 - 0x00018D15 (69 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018CD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018CD0: ;
    PUSH32(esp, 0x400);
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x5AC7A0;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x18) = 0x400;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00018CF5: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x14) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00018D12; /* jne: not equal / not zero */

loc_00018CFF: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00018D0F: ;
    esp = esp + 0xC;

loc_00018D12: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00018D20
 * Original: 0x00018D20 - 0x00018D87 (103 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018D20: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_00018D85; /* je: equal / zero */

loc_00018D2C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(edi + 0x18);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EA04(); /* call 0x0046EA04 */

loc_00018D44: ;
    ebx = eax;
    esp = esp + 0x10;
    if (CMP_GE(ebx & ebx, 0)) goto loc_00018D5A; /* jge: greater or equal (signed >=) */

loc_00018D4D: ;
    ebx = MEM32(edi + 0x18);
    ecx = MEM32(edi + 0x14);
    MEM8(ecx + ebx + -1) = 0;
    (void)0; /* test ebx, ebx - flags set for next jcc */

loc_00018D5A: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_00018D6E; /* jle: less or equal (signed <=) */

loc_00018D5C: ;
    edx = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001F18F0(); /* call 0x001F18F0 */

loc_00018D6A: ;
    esp = esp + 8;
    POP32(esp, esi);

loc_00018D6E: ;
    eax = MEM32(edi + 0x14);
    (void)0; /* cmp MEM8(eax + ebx + -1), 0xA - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(MEM8(eax + ebx + -1), 0xA)) goto loc_00018D85; /* jne: not equal / not zero */

loc_00018D79: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F1A10(); /* call 0x001F1A10 */

loc_00018D82: ;
    esp = esp + 4;

loc_00018D85: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00018D90
 * Original: 0x00018D90 - 0x00018DE9 (89 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018D90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    if (TEST_Z(esi, esi)) goto loc_00018DE4; /* je: equal / zero */

loc_00018D9D: ;
    eax = edx;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00018DA3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00018DA3; /* jne: not equal / not zero */

loc_00018DAA: ;
    eax = eax - edi;
    if (CMP_EQ(MEM8(eax + edx + -1), 0xA)) goto loc_00018DC8; /* je: equal / zero */

loc_00018DB3: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC80C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00018DBF: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00018DC8: ;
    eax = edx;
    edi = eax + 1;
    /* nop */

loc_00018DD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00018DD0; /* jne: not equal / not zero */

loc_00018DD7: ;
    eax = eax - edi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F18F0(); /* call 0x001F18F0 */

loc_00018DE0: ;
    esp = esp + 8;
    POP32(esp, edi);

loc_00018DE4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018DF0
 * Original: 0x00018DF0 - 0x00018E17 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018DF0(void)
{

loc_00018DF0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(0x847018) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x84701C) = ecx;
    MEM32(0x762D60) = edx;
    MEM32(0x847020) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00018E20
 * Original: 0x00018E20 - 0x00018E3D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E20(void)
{

loc_00018E20: ;
    eax = MEM32(0x762D60);
    ecx = MEM32(0x847018);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00018E39: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00018E40
 * Original: 0x00018E40 - 0x00018E5B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E40(void)
{

loc_00018E40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC808);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00018E56: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00018E60
 * Original: 0x00018E60 - 0x00018F48 (232 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018E60: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00018ECE; /* je: equal / zero */

loc_00018E6A: ;
    eax = eax + eax * 4;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00018E76: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00018E94; /* jne: not equal / not zero */

loc_00018E7F: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00018E8F: ;
    esp = esp + 0xC;
    goto loc_00018ED0;

loc_00018E94: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_00018ED0; /* jle: less or equal (signed <=) */

loc_00018E9D: ;
    eax = 0; /* xor self */
    /* nop */

loc_00018EA0: ;
    edx = MEM32(esi);
    MEM32(eax + edx) = 0xFFFFFFFFu;
    edx = MEM32(esi);
    MEM32(eax + edx + 4) = ebx;
    edx = MEM32(esi);
    MEM32(eax + edx + 8) = ebx;
    edx = MEM32(esi);
    MEM32(eax + edx + 0xC) = ebx;
    edx = MEM32(esi);
    MEM32(eax + edx + 0x10) = ebx;
    edx = MEM32(esi + 4);
    ecx++;
    eax = eax + 0x14;
    if (CMP_L(ecx, edx)) goto loc_00018EA0; /* jl: less (signed <) */

loc_00018ECC: ;
    goto loc_00018ED0;

loc_00018ECE: ;
    MEM32(esi) = ebx;

loc_00018ED0: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esi + 0x1C) = edi;
    if (CMP_EQ(edi, ebx)) goto loc_00018F24; /* je: equal / zero */

loc_00018ED7: ;
    eax = edi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00018EE4: ;
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x18) = eax;
    if (CMP_NE(eax, ebx)) goto loc_00018F03; /* jne: not equal / not zero */

loc_00018EEE: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_00018EFE: ;
    esp = esp + 0xC;
    goto loc_00018F27;

loc_00018F03: ;
    ecx = MEM32(esi + 0x1C);
    eax = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_00018F27; /* jle: less or equal (signed <=) */

loc_00018F0C: ;
    /* nop */

loc_00018F10: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + eax * 4) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0x1C);
    eax++;
    if (CMP_L(eax, ecx)) goto loc_00018F10; /* jl: less (signed <) */

loc_00018F22: ;
    goto loc_00018F27;

loc_00018F24: ;
    MEM32(esi + 0x18) = ebx;

loc_00018F27: ;
    MEM32(esi + 8) = ebx;
    MEM8(esi + 0x21) = LO8(ebx);
    MEM32(esi + 0xC) = 0x19;
    MEM32(esi + 0x10) = 0xFF;
    MEM32(esi + 0x14) = 2;
    MEM8(esi + 0x20) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018F50
 * Original: 0x00018F50 - 0x00018F7D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018F50: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00018F65; /* je: equal / zero */

loc_00018F56: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00018F5C: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00018F65: ;
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00018F7C; /* je: equal / zero */

loc_00018F6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00018F72: ;
    esp = esp + 4;
    MEM32(esi + 0x18) = 0;

loc_00018F7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00018F80
 * Original: 0x00018F80 - 0x00018FDD (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018F80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00018F80: ;
    ecx = MEM32(edx + 4);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00018FDA; /* jle: less or equal (signed <=) */

loc_00018F89: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = edi;
    /* nop */

loc_00018F90: ;
    if (CMP_EQ(MEM32(esi), 0xFFFFFFFFu)) goto loc_00018FA2; /* je: equal / zero */

loc_00018F95: ;
    eax++;
    esi = esi + 0x14;
    if (CMP_L(eax, ecx)) goto loc_00018F90; /* jl: less (signed <) */

loc_00018F9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00018FA2: ;
    ecx = MEM32(esp + 0xC);
    eax = eax + eax * 4;
    eax = eax << 2;
    MEM32(edi + eax) = ecx;
    ecx = ZX16(MEM16(esp + 0x10));
    esi = MEM32(edx);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x847024);
    xmm0 = xmm0 * MEMF(ecx + 0x20); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM32(eax + esi + 4) = ecx;
    ecx = ZX16(MEM16(esp + 0x14));
    edx = MEM32(edx);
    POP32(esp, edi);
    MEM32(eax + edx + 8) = ecx;
    POP32(esp, esi);

loc_00018FDA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00018FE0
 * Original: 0x00018FE0 - 0x0001900C (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018FE0: ;
    edx = MEM32(ecx + 0x1C);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00019009; /* jle: less or equal (signed <=) */

loc_00018FE9: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    ecx = esi;
    /* nop */

loc_00018FF0: ;
    if (CMP_EQ(MEM32(ecx), 0xFFFFFFFFu)) goto loc_00019001; /* je: equal / zero */

loc_00018FF5: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_00018FF0; /* jl: less (signed <) */

loc_00018FFD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00019001: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + eax * 4) = ecx;
    POP32(esp, esi);

loc_00019009: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019010
 * Original: 0x00019010 - 0x00019094 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019010(void)
{
    int _flags = 0; /* fallback flag var */

loc_00019010: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00019094(); return; } /* je: equal / zero */

loc_0001902B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0001903F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00019074; /* je: equal / zero */

loc_0001904A: ;
    ecx = 0x75DA48;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00019054: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00019071: ;
    esp = esp + 0x14;

loc_00019074: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0001908D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000190C0
 * Original: 0x000190C0 - 0x000190E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000190C0(void)
{

loc_000190C0: ;
    PUSH32(esp, 0); sub_00019770(); /* call 0x00019770 */

loc_000190C5: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x2D) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000190F0
 * Original: 0x000190F0 - 0x00019191 (161 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000190F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000190F0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_00019660(); /* call 0x00019660 */

loc_00019101: ;
    esi = eax;
    if (CMP_EQ(esi, MEM32(ebx + 4))) goto loc_0001912C; /* je: equal / zero */

loc_00019108: ;
    (void)0; /* cmp MEM32(esi + 0x24), 0x10 - flags set for next jcc */
    ecx = MEM32(esi + 0x20);
    if (CMP_B(MEM32(esi + 0x24), 0x10)) goto loc_00019116; /* jb: below (unsigned <) */

loc_00019111: ;
    eax = MEM32(esi + 0x10);
    goto loc_00019119;

loc_00019116: ;
    eax = esi + 0x10;

loc_00019119: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_000199E0(); /* call 0x000199E0 */

loc_00019128: ;
    if (CMP_GE(eax & eax, 0)) goto loc_00019187; /* jge: greater or equal (signed >=) */

loc_0001912C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    MEM32(esp + 0x38) = 0xF;
    MEM32(esp + 0x34) = 0;
    MEM8(esp + 0x24) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_0001914F: ;
    PUSH32(esp, esi);
    eax = esp + 0x18;
    esi = esp + 0x14;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0); sub_00019200(); /* call 0x00019200 */

loc_00019165: ;
    esi = MEM32(eax);
    if (CMP_B(MEM32(esp + 0x2C), 0x10)) goto loc_00019187; /* jb: below (unsigned <) */

loc_0001916E: ;
    eax = MEM32(esp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_00019187; /* je: equal / zero */

loc_0001917A: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00019184: ;
    esp = esp + 4;

loc_00019187: ;
    POP32(esp, edi);
    eax = esi + 0x28;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000191A0
 * Original: 0x000191A0 - 0x000191E9 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000191A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000191A0: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = eax;
    eax = esi;
    PUSH32(esp, 0); sub_00019660(); /* call 0x00019660 */

loc_000191AD: ;
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(eax, MEM32(esi + 4))) { sub_000191E9(); return; } /* je: equal / zero */

loc_000191B6: ;
    (void)0; /* cmp MEM32(eax + 0x24), 0x10 - flags set for next jcc */
    ecx = MEM32(eax + 0x20);
    if (CMP_B(MEM32(eax + 0x24), 0x10)) goto loc_000191C4; /* jb: below (unsigned <) */

loc_000191BF: ;
    eax = MEM32(eax + 0x10);
    goto loc_000191C7;

loc_000191C4: ;
    eax = eax + 0x10;

loc_000191C7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_000199E0(); /* call 0x000199E0 */

loc_000191D6: ;
    if (TEST_S(eax, eax)) { sub_000191E9(); return; } /* jl: less (signed <) */

loc_000191DA: ;
    eax = esp + 4;
    edx = MEM32(eax);
    MEM32(ebx) = edx;
    eax = ebx;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00019200
 * Original: 0x00019200 - 0x00019224 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019200(void)
{
    int _flags = 0; /* fallback flag var */

loc_00019200: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(ebx + 4);
    if (TEST_NZ(eax, eax)) { sub_00019224(); return; } /* jne: not equal / not zero */

loc_00019210: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_000194B0(); /* call 0x000194B0 */

loc_0001921B: ;
    eax = esi;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019380
 * Original: 0x00019380 - 0x0001938E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019380: ;
    edx = MEM32(eax + 0x14);
    if (CMP_B(MEM32(eax + 0x18), 0x10)) { sub_0001938E(); return; } /* jb: below (unsigned <) */

loc_00019389: ;
    eax = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00019391(); return; /* tail jmp 0x00019391 */

}

/**
 * sub_000193B0
 * Original: 0x000193B0 - 0x00019462 (178 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000193B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000193B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    SET_LO8(edx, MEM8(esi + 0x2D));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ebx = eax;
    SET_LO8(eax, 1);
    MEM8(esp + 0xC) = LO8(eax);
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00019412; /* jne: not equal / not zero */

loc_000193D1: ;
    (void)0; /* cmp MEM32(esi + 0x24), 0x10 - flags set for next jcc */
    ecx = MEM32(esi + 0x20);
    ebx = esi;
    if (CMP_B(MEM32(esi + 0x24), 0x10)) goto loc_000193E1; /* jb: below (unsigned <) */

loc_000193DC: ;
    eax = MEM32(esi + 0x10);
    goto loc_000193E4;

loc_000193E1: ;
    eax = esi + 0x10;

loc_000193E4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_000199E0(); /* call 0x000199E0 */

loc_000193F3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_S(eax, eax)) ? 1 : 0); /* setl */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xC) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00019404; /* je: equal / zero */

loc_00019400: ;
    esi = MEM32(esi);
    goto loc_00019407;

loc_00019404: ;
    esi = MEM32(esi + 8);

loc_00019407: ;
    SET_LO8(ecx, MEM8(esi + 0x2D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000193D1; /* je: equal / zero */

loc_0001940E: ;
    ecx = MEM32(esp + 0x14);

loc_00019412: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ebx;
    MEM32(esp + 0x18) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00019451; /* je: equal / zero */

loc_0001941C: ;
    edx = MEM32(ecx + 4);
    if (CMP_NE(ebx, MEM32(edx))) goto loc_00019444; /* jne: not equal / not zero */

loc_00019423: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_000194B0(); /* call 0x000194B0 */

loc_00019432: ;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00019444: ;
    edx = esp + 0x18;
    PUSH32(esp, 0); sub_000198D0(); /* call 0x000198D0 */

loc_0001944D: ;
    esi = MEM32(esp + 0x18);

loc_00019451: ;
    (void)0; /* cmp MEM32(edi + 0x18), 0x10 - flags set for next jcc */
    edx = MEM32(edi + 0x14);
    ecx = esi + 0xC;
    if (CMP_B(MEM32(edi + 0x18), 0x10)) { sub_00019462(); return; } /* jb: below (unsigned <) */

loc_0001945D: ;
    eax = MEM32(edi + 4);
    g_seh_ebp = ebp; sub_00019465(); return; /* tail jmp 0x00019465 */

}

/**
 * sub_000194B0
 * Original: 0x000194B0 - 0x00019563 (179 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000194B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000194B0: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    if (CMP_B(MEM32(edi + 8), 0x7FFFFFE)) goto loc_0001952C; /* jb: below (unsigned <) */

loc_000194C2: ;
    PUSH32(esp, 0x13);
    edi = 0xF;
    esi = 0; /* xor self */
    PUSH32(esp, 0x5AC6C4);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_000194E6: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_000194EF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_00019515: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0001952C: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00019830(); /* call 0x00019830 */

loc_0001953F: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x5C) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(esi, eax)) { sub_00019563(); return; } /* jne: not equal / not zero */

loc_00019553: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    g_seh_ebp = ebp; sub_00019586(); return; /* tail jmp 0x00019586 */

}

/**
 * sub_00019660
 * Original: 0x00019660 - 0x000196AE (78 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019660: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    ebp = eax;
    SET_LO8(eax, MEM8(esi + 0x2D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000196A9; /* jne: not equal / not zero */

loc_00019671: ;
    PUSH32(esp, ebx);
    ebx = edi + 4;

loc_00019675: ;
    (void)0; /* cmp MEM32(edi + 0x18), 0x10 - flags set for next jcc */
    edx = MEM32(edi + 0x14);
    ecx = esi + 0xC;
    if (CMP_B(MEM32(edi + 0x18), 0x10)) goto loc_00019685; /* jb: below (unsigned <) */

loc_00019681: ;
    eax = MEM32(ebx);
    goto loc_00019687;

loc_00019685: ;
    eax = ebx;

loc_00019687: ;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000199E0(); /* call 0x000199E0 */

loc_00019694: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0001969D; /* jge: greater or equal (signed >=) */

loc_00019698: ;
    esi = MEM32(esi + 8);
    goto loc_000196A1;

loc_0001969D: ;
    ebp = esi;
    esi = MEM32(esi);

loc_000196A1: ;
    SET_LO8(eax, MEM8(esi + 0x2D));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00019675; /* je: equal / zero */

loc_000196A8: ;
    POP32(esp, ebx);

loc_000196A9: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000196B0
 * Original: 0x000196B0 - 0x000196E3 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000196B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000196B0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x2D));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000196C5; /* jne: not equal / not zero */

loc_000196C2: ;
    MEM32(edx + 4) = ecx;

loc_000196C5: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_000196E3(); return; } /* jne: not equal / not zero */

loc_000196D7: ;
    MEM32(edx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019710
 * Original: 0x00019710 - 0x00019744 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019710(void)
{
    int _flags = 0; /* fallback flag var */

loc_00019710: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x2D));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00019725; /* jne: not equal / not zero */

loc_00019722: ;
    MEM32(edx + 4) = ecx;

loc_00019725: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    if (CMP_NE(ecx, MEM32(edx + 4))) { sub_00019744(); return; } /* jne: not equal / not zero */

loc_00019737: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019770
 * Original: 0x00019770 - 0x00019806 (150 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00019770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F6C0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000197A4: ;
    esp = esp + 0x10;
    MEM32(ebp + -24) = eax;
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_000197BB; /* je: equal / zero */

loc_000197B9: ;
    MEM32(eax) = ebx;

loc_000197BB: ;
    edx = 1;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -40) = ebx;
    ecx = eax + 4;
    MEM32(ebp + -44) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_000197D2; /* je: equal / zero */

loc_000197D0: ;
    MEM32(ecx) = ebx;

loc_000197D2: ;
    MEM32(ebp + -20) = 2;
    MEM32(ebp + -48) = ebx;
    ecx = eax + 8;
    MEM32(ebp + -52) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_000197E8; /* je: equal / zero */

loc_000197E6: ;
    MEM32(ecx) = ebx;

loc_000197E8: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x2D) = LO8(ebx);
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
 * sub_00019830
 * Original: 0x00019830 - 0x000198AC (124 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00019830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F7D0);
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
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00019864: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_00019890; /* je: equal / zero */

loc_0001987A: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00019990(); /* call 0x00019990 */

loc_00019890: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000198D0
 * Original: 0x000198D0 - 0x000198DF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000198D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000198D0: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_000198DF(); return; } /* je: equal / zero */

loc_000198D9: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00019930
 * Original: 0x00019930 - 0x00019987 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019930(void)
{
    int _flags = 0; /* fallback flag var */

loc_00019930: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00019986; /* jne: not equal / not zero */

loc_00019939: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x2D));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0001995F; /* jne: not equal / not zero */

loc_00019944: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x2D));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0001995B; /* jne: not equal / not zero */

loc_0001994D: ;
    /* nop */

loc_00019950: ;
    ecx = eax;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x2D));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00019950; /* je: equal / zero */

loc_0001995B: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001995F: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00019983; /* jne: not equal / not zero */

loc_00019969: ;
    /* nop */

loc_00019970: ;
    ecx = MEM32(edx);
    if (CMP_NE(ecx, MEM32(eax + 8))) goto loc_00019983; /* jne: not equal / not zero */

loc_00019977: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00019970; /* je: equal / zero */

loc_00019983: ;
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_00019986: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00019990
 * Original: 0x00019990 - 0x000199D7 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019990(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019990: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esi + 4) = ecx;
    edi = esi + 0xC;
    MEM32(esi) = eax;
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0);
    MEM32(edi + 0x18) = 0xF;
    MEM32(edi + 0x14) = 0;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM8(edi + 4) = 0;
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_000199BF: ;
    eax = MEM32(ebp + 0x1C);
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM32(edi + 0x1C) = eax;
    POP32(esp, edi);
    MEM8(esi + 0x2C) = LO8(ecx);
    MEM8(esi + 0x2D) = 0;
    eax = esi;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000199E0
 * Original: 0x000199E0 - 0x00019A52 (114 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000199E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000199E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_AE(MEM32(esi + 0x14), ebp)) goto loc_000199F3; /* jae: above or equal (unsigned >=) */

loc_000199EE: ;
    PUSH32(esp, 0); sub_0046DAB7(); /* call 0x0046DAB7 */

loc_000199F3: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x1C);
    eax = eax - ebp;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    if (CMP_B(eax, edx)) edx = eax; /* cmovb */
    if (TEST_Z(edx, edx)) goto loc_00019A38; /* je: equal / zero */

loc_00019A09: ;
    eax = MEM32(esi + 0x18);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = edx;
    if (CMP_AE(edx, ebx)) ecx = ebx; /* cmovae */
    if (CMP_B(eax, 0x10)) goto loc_00019A1D; /* jb: below (unsigned <) */

loc_00019A18: ;
    eax = MEM32(esi + 4);
    goto loc_00019A20;

loc_00019A1D: ;
    eax = esi + 4;

loc_00019A20: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = eax + ebp;
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    POP32(esp, edi);
    if (1 /* strings matched (repe cmpsb) */) goto loc_00019A34; /* je: equal / zero */

loc_00019A2F: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_00019A34: ;
    if (TEST_NZ(eax, eax)) goto loc_00019A4C; /* jne: not equal / not zero */

loc_00019A38: ;
    if (CMP_AE(edx, ebx)) goto loc_00019A45; /* jae: above or equal (unsigned >=) */

loc_00019A3C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00019A45: ;
    eax = 0; /* xor self */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(edx, ebx)) ? 1 : 0); /* setne */

loc_00019A4C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00019A60
 * Original: 0x00019A60 - 0x00019A9A (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019A60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00019A60: ;
    if (CMP_GE(edx, 0x29)) goto loc_00019A99; /* jge: greater or equal (signed >=) */

loc_00019A65: ;
    if (TEST_S(edx, edx)) goto loc_00019A99; /* jl: less (signed <) */

loc_00019A69: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847010);
    ecx = MEM32(esi + edx * 4);
    xmm1 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00019A86; /* jnp: not parity */

loc_00019A81: ;
    MEMF(ecx + 4) = xmm0; /* movss */

loc_00019A86: ;
    MEM8(ecx + 9) = 0;
    eax = MEM32(esi + edx * 4);
    SET_LO8(ecx, MEM8(eax + 8));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00019A99; /* jne: not equal / not zero */

loc_00019A95: ;
    MEM8(eax + 8) = 1;

loc_00019A99: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00019AA0
 * Original: 0x00019AA0 - 0x00019AF0 (80 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019AA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00019AA0: ;
    eax = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) { sub_00019AF0(); return; } /* je: equal / zero */

loc_00019AA9: ;
    ecx = MEM32(esi + 0xE4);
    if (CMP_EQ(ecx, 1)) { sub_00019AF0(); return; } /* je: equal / zero */

loc_00019AB4: ;
    if (CMP_NE(MEM8(esi + 5), LO8(edx))) { sub_00019AF0(); return; } /* jne: not equal / not zero */

loc_00019AB9: ;
    if (CMP_NE(MEM8(esi + 0xB), LO8(edx))) { sub_00019AF0(); return; } /* jne: not equal / not zero */

loc_00019ABE: ;
    if (CMP_NE(MEM8(esi + 7), LO8(edx))) goto loc_00019AD3; /* jne: not equal / not zero */

loc_00019AC3: ;
    if (CMP_NE(ecx, 4)) goto loc_00019AD3; /* jne: not equal / not zero */

loc_00019AC8: ;
    MEM8(esi + 6) = 1;
    MEM8(esi + 0x155) = LO8(ebx);
    esp += 4; return; /* ret */

loc_00019AD3: ;
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, 0); sub_00400B80(); /* call 0x00400B80 */

loc_00019ADB: ;
    xmm0 = MEMF(0x649108); /* movss */
    MEM8(esi + 5) = 1;
    MEMF(esi + 0x168) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00019B20
 * Original: 0x00019B20 - 0x00019B34 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019B20(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00019B20: ;
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) { sub_00019B34(); return; } /* je: equal / zero */

loc_00019B27: ;
    eax = MEM32(eax + 0x38);
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(eax, LO8(eax) - 4);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_00019B40
 * Original: 0x00019B40 - 0x00019B8A (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019B40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00019B40: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) { sub_00019B8A(); return; } /* je: equal / zero */

loc_00019B47: ;
    SET_LO8(ecx, MEM8(esi + 0x154));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00019B87; /* jne: not equal / not zero */

loc_00019B51: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, edi);
    edi = esi + 0xF0;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00400D90(); /* call 0x00400D90 */

loc_00019B66: ;
    SET_LO8(eax, MEM8(edi));
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(LO8(eax), 1)) goto loc_00019B80; /* jne: not equal / not zero */

loc_00019B70: ;
    xmm0 = MEMF(0x59D944); /* movss */
    MEMF(esi + 0x144) = xmm0; /* movss */

loc_00019B80: ;
    MEM8(esi + 0x154) = 1;

loc_00019B87: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00019B90
 * Original: 0x00019B90 - 0x00019B9C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019B90(void)
{

loc_00019B90: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_0001A0A0(); /* call 0x0001A0A0 */

loc_00019B9A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00019BA0
 * Original: 0x00019BA0 - 0x00019BAF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019BA0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019BA0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0); sub_0001A190(); /* call 0x0001A190 */

loc_00019BA8: ;
    eax = MEM32(ebx);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

}

/**
 * sub_00019BF0
 * Original: 0x00019BF0 - 0x00019D3B (331 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019BF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(0x657C50);
    xmm1 = MEMF(0x648D14); /* movss */
    eax = eax | 0xFFFFFFFFu;
    ebx = 0; /* xor self */
    SET_LO8(ecx, 1);
    MEM32(edi) = 0x5ACA90;
    MEM8(edi + 4) = LO8(ebx);
    MEM8(edi + 5) = LO8(ebx);
    MEM8(edi + 6) = LO8(ebx);
    MEM8(edi + 7) = LO8(ebx);
    MEM8(edi + 8) = LO8(ebx);
    MEM8(edi + 9) = LO8(ebx);
    MEM8(edi + 0xA) = LO8(ebx);
    MEM8(edi + 0xB) = LO8(ecx);
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x14) = ebx;
    MEM32(edi + 0x18) = ebx;
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x24) = eax;
    MEM32(edi + 0x28) = edx;
    MEM32(edi + 0x2C) = eax;
    MEMF(edi + 0x30) = xmm0; /* movss */
    MEMF(edi + 0x34) = xmm1; /* movss */
    MEM32(edi + 0x38) = ebx;
    MEM32(edi + 0x3C) = ebx;
    MEMF(edi + 0xE8) = xmm0; /* movss */
    MEM8(edi + 0xEC) = LO8(ecx);
    MEM8(edi + 0x154) = LO8(ebx);
    MEM8(edi + 0x155) = LO8(ebx);
    MEM8(edi + 0x156) = LO8(ebx);
    MEM8(edi + 0x157) = LO8(ebx);
    MEM8(edi + 0x158) = LO8(ebx);
    MEM32(edi + 0x15C) = ebx;
    MEM8(edi + 0x164) = LO8(ebx);
    MEMF(edi + 0x168) = xmm0; /* movss */
    MEM32(edi + 0x16C) = ebx;
    if (CMP_EQ(MEM8(0x846FF1), LO8(ebx))) goto loc_00019CB6; /* je: equal / zero */

loc_00019C9E: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ebx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5AD330);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00019CB3: ;
    esp = esp + 0x10;

loc_00019CB6: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_00019CC3; /* jne: not equal / not zero */

loc_00019CBE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00019CC3: ;
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
    if (CMP_EQ(esi, ebx)) goto loc_00019D0C; /* je: equal / zero */

loc_00019CEA: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_00019D0C; /* jb: below (unsigned <) */

loc_00019CF3: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00019CFD: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00019D05: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_00019D2D; /* jne: not equal / not zero */

loc_00019D0C: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00019D1E: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00019D26: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_00019D3B(); return; } /* je: equal / zero */

loc_00019D2D: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    g_seh_ebp = ebp; sub_00019D3D(); return; /* tail jmp 0x00019D3D */

}

/**
 * sub_00019D60
 * Original: 0x00019D60 - 0x00019D8A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00019D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00019D90(); /* call 0x00019D90 */

loc_00019D68: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00019D84; /* je: equal / zero */

loc_00019D6F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00019D84; /* je: equal / zero */

loc_00019D77: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00019D81: ;
    esp = esp + 4;

loc_00019D84: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019D90
 * Original: 0x00019D90 - 0x00019EED (349 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019D90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x15C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebx) = 0x5ACA90;
    if (TEST_Z(eax, eax)) goto loc_00019E2C; /* je: equal / zero */

loc_00019DAA: ;
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, eax)) goto loc_00019E02; /* je: equal / zero */

loc_00019DB1: ;
    PUSH32(esp, ebp);

loc_00019DB2: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_00019DBE; /* je: equal / zero */

loc_00019DB8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00019DBE: ;
    edi = MEM32(ebx + 0x15C);
    if (CMP_EQ(esi, edi)) goto loc_00019DF6; /* je: equal / zero */

loc_00019DC8: ;
    ebp = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    edx = ebp;
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(eax + 0xC) = ecx;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00019DEA: ;
    eax = MEM32(edi + 0x10);
    esp = esp + 4;
    eax--;
    esi = ebp;
    MEM32(edi + 0x10) = eax;

loc_00019DF6: ;
    esi = MEM32(esi + 0xC);
    if (CMP_NE(esi, MEM32(ebx + 0x15C))) goto loc_00019DB2; /* jne: not equal / not zero */

loc_00019E01: ;
    POP32(esp, ebp);

loc_00019E02: ;
    edi = MEM32(ebx + 0x15C);
    if (TEST_Z(edi, edi)) goto loc_00019E22; /* je: equal / zero */

loc_00019E0C: ;
    PUSH32(esp, 0); sub_000208E0(); /* call 0x000208E0 */

loc_00019E11: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00019E1F: ;
    esp = esp + 4;

loc_00019E22: ;
    MEM32(ebx + 0x15C) = 0;

loc_00019E2C: ;
    eax = MEM32(ebx + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ebx + 0x14;
    if (TEST_Z(eax, eax)) goto loc_00019E45; /* je: equal / zero */

loc_00019E36: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00400C00(); /* call 0x00400C00 */

loc_00019E3C: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00019E45: ;
    eax = MEM32(ebx + 0x1C);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    ecx = MEM32(0x847024);
    edi = MEM32(ecx + 0x44);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00019E81; /* je: equal / zero */

loc_00019E56: ;
    if (TEST_Z(eax, eax)) goto loc_00019E81; /* je: equal / zero */

loc_00019E5A: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0xC);
    if (CMP_EQ(ecx, edx)) goto loc_00019E7C; /* je: equal / zero */

loc_00019E64: ;
    if (CMP_EQ(MEM32(ecx), eax)) goto loc_00019E6F; /* je: equal / zero */

loc_00019E68: ;
    ecx = ecx + 4;
    if (CMP_NE(ecx, edx)) goto loc_00019E64; /* jne: not equal / not zero */

loc_00019E6F: ;
    if (CMP_EQ(ecx, edx)) goto loc_00019E7C; /* je: equal / zero */

loc_00019E73: ;
    edx = ebx;
    PUSH32(esp, 0); sub_00032990(); /* call 0x00032990 */

loc_00019E7A: ;
    goto loc_00019E81;

loc_00019E7C: ;
    PUSH32(esp, 0); sub_00034C80(); /* call 0x00034C80 */

loc_00019E81: ;
    eax = MEM32(ebx + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = ebx + 0x10;
    MEM32(ebx + 0x1C) = 0xFFFFFFFFu;
    if (TEST_Z(eax, eax)) goto loc_00019EE8; /* je: equal / zero */

loc_00019E92: ;
    SET_LO8(ecx, MEM8(0x846FF1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00019ED9; /* je: equal / zero */

loc_00019E9C: ;
    edx = MEM32(ebx + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5AD2E8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00019EB2: ;
    SET_LO8(eax, MEM8(0x846FF1));
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00019ED9; /* je: equal / zero */

loc_00019EBE: ;
    eax = MEM32(edi);
    ecx = MEM32(ebx + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5AD298);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_00019ED6: ;
    esp = esp + 0x10;

loc_00019ED9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00400C00(); /* call 0x00400C00 */

loc_00019EDF: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_00019EE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00019EF0
 * Original: 0x00019EF0 - 0x0001A03C (332 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019EF0: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x847024);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(eax + edi * 4);
    edi = MEM32(eax);
    MEM32(esi + 0xC) = edi;
    eax = MEM32(eax + 4);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = edx;
    if (TEST_Z(ecx, ecx)) goto loc_00019F95; /* je: equal / zero */

loc_00019F19: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00019F94; /* jle: less or equal (signed <=) */

loc_00019F20: ;
    edi = MEM32(0x847010);
    xmm1 = MEMF(0x648D34); /* movss */
    edi = edi;

loc_00019F30: ;
    ecx = MEM32(esi + 0x38);
    eax = ecx + ebp * 8;
    ecx = MEM32(eax);
    if (CMP_GE(ecx, 0x29)) goto loc_00019F4A; /* jge: greater or equal (signed >=) */

loc_00019F3D: ;
    if (TEST_S(ecx, ecx)) goto loc_00019F4A; /* jl: less (signed <) */

loc_00019F41: ;
    edx = MEM32(edi + ecx * 4);
    if (CMP_NE(MEM8(edx + 8), 0)) goto loc_00019F80; /* jne: not equal / not zero */

loc_00019F4A: ;
    (void)0; /* cmp ecx, 0x29 - flags set for next jcc */
    xmm0 = MEMF(eax + 4); /* movss */
    if (CMP_GE(ecx, 0x29)) goto loc_00019F80; /* jge: greater or equal (signed >=) */

loc_00019F54: ;
    if (TEST_S(ecx, ecx)) goto loc_00019F80; /* jl: less (signed <) */

loc_00019F58: ;
    edx = MEM32(edi + ecx * 4);
    xmm2 = MEMF(edx + 4); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00019F6E; /* jnp: not parity */

loc_00019F69: ;
    MEMF(edx + 4) = xmm0; /* movss */

loc_00019F6E: ;
    MEM8(edx + 9) = 0;
    ecx = MEM32(edi + ecx * 4);
    SET_LO8(eax, MEM8(ecx + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00019F80; /* jne: not equal / not zero */

loc_00019F7C: ;
    MEM8(ecx + 8) = 1;

loc_00019F80: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + ebp * 8);
    MEMF(esi + ecx * 4 + 0x40) = xmm1; /* movss */
    eax = MEM32(esi + 0x3C);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_00019F30; /* jl: less (signed <) */

loc_00019F94: ;
    POP32(esp, ebp);

loc_00019F95: ;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    xmm1 = MEMF(esp + 0x20); /* movss */
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(0x759EAC); /* movss */
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ebx;
    MEMF(esi + 0x34) = xmm1; /* movss */
    MEM32(esi + 0x20) = ecx;
    xmm0 = xmm0 * xmm1; /* mulss */
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_0001A004; /* je: equal / zero */

loc_00019FC9: ;
    if (CMP_EQ(ebx, 0x91)) goto loc_0001A004; /* je: equal / zero */

loc_00019FD1: ;
    if (CMP_EQ(ebx, 0x93)) goto loc_0001A004; /* je: equal / zero */

loc_00019FD9: ;
    if (CMP_EQ(ebx, 0x92)) goto loc_0001A004; /* je: equal / zero */

loc_00019FE1: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00019FF0; /* jbe: below or equal (unsigned <=) */

loc_00019FE9: ;
    MEMF(esi + 0x30) = xmm1; /* movss */
    goto loc_00019FF5;

loc_00019FF0: ;
    MEMF(esi + 0x30) = xmm0; /* movss */

loc_00019FF5: ;
    edx = (int32_t)MEMF(esi + 0x30); /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00401EE0(); /* call 0x00401EE0 */

loc_0001A001: ;
    esp = esp + 8;

loc_0001A004: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esi + 0xE8) = xmm0; /* movss */
    SET_LO8(eax, MEM8(0x846FF1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A037; /* je: equal / zero */

loc_0001A01B: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD258);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A034: ;
    esp = esp + 0x10;

loc_0001A037: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0001A040
 * Original: 0x0001A040 - 0x0001A09F (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A040(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0001A040: ;
    eax = MEM32(ecx + 0x2C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0001A09E; /* je: equal / zero */

loc_0001A048: ;
    if (CMP_EQ(eax, 0x91)) goto loc_0001A09E; /* je: equal / zero */

loc_0001A04F: ;
    if (CMP_EQ(eax, 0x93)) goto loc_0001A09E; /* je: equal / zero */

loc_0001A056: ;
    if (CMP_EQ(eax, 0x92)) goto loc_0001A09E; /* je: equal / zero */

loc_0001A05D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0001A079; /* jbe: below or equal (unsigned <=) */

loc_0001A065: ;
    MEMF(ecx + 0x30) = xmm0; /* movss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00401EE0(); /* call 0x00401EE0 */

loc_0001A075: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0001A079: ;
    xmm0 = MEMF(ecx + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(0x759EAC); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0001A065; /* ja: above (unsigned >) */

loc_0001A08B: ;
    MEMF(ecx + 0x30) = xmm1; /* movss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00401EE0(); /* call 0x00401EE0 */

loc_0001A09B: ;
    esp = esp + 8;

loc_0001A09E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A0A0
 * Original: 0x0001A0A0 - 0x0001A17B (219 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A0A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001A0A0: ;
    eax = MEM32(0x847024);
    ecx = MEM32(edi + 0xC);
    edx = MEM32(eax);
    ecx = MEM32(edx + ecx * 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (TEST_Z(ecx, ecx)) { sub_0001A17B(); return; } /* je: equal / zero */

loc_0001A0B8: ;
    SET_LO8(edx, MEM8(edi + 0xEC));
    esi = MEM32(ecx + 0x1C);
    eax = MEM32(eax + 0x44);
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, edi);
    ebp = edi + 0x10;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001A0FC; /* je: equal / zero */

loc_0001A0CF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00034D20(); /* call 0x00034D20 */

loc_0001A0D5: ;
    ecx = eax;
    eax = MEM32(edi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 0x1AE20;
    PUSH32(esp, 0); sub_00400960(); /* call 0x00400960 */

loc_0001A0E6: ;
    eax = MEM32(ebp);
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_0001A133; /* jne: not equal / not zero */

loc_0001A0F0: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0001A0F5: ;
    PUSH32(esp, 0x5AD230);
    goto loc_0001A125;

loc_0001A0FC: ;
    PUSH32(esp, 0x1AE20);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00034D20(); /* call 0x00034D20 */

loc_0001A107: ;
    ebx = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004008C0(); /* call 0x004008C0 */

loc_0001A111: ;
    eax = MEM32(ebp);
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_0001A133; /* jne: not equal / not zero */

loc_0001A11B: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0001A120: ;
    PUSH32(esp, 0x5AD204);

loc_0001A125: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x645C3C);
    PUSH32(esp, 0); sub_00400F50(); /* call 0x00400F50 */

loc_0001A130: ;
    esp = esp + 0xC;

loc_0001A133: ;
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) { sub_0001A17B(); return; } /* je: equal / zero */

loc_0001A13C: ;
    if (CMP_EQ(MEM8(esp + 0x10), LO8(ebx))) goto loc_0001A149; /* je: equal / zero */

loc_0001A142: ;
    esi = edi;
    PUSH32(esp, 0); sub_00019B40(); /* call 0x00019B40 */

loc_0001A149: ;
    if (CMP_EQ(MEM8(0x846FF1), LO8(ebx))) goto loc_0001A16D; /* je: equal / zero */

loc_0001A151: ;
    ecx = MEM32(ebp);
    edx = MEM32(edi + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5AD1B0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A16A: ;
    esp = esp + 0x10;

loc_0001A16D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edi + 5) = LO8(ebx);
    MEM8(edi + 8) = LO8(ebx);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001A190
 * Original: 0x0001A190 - 0x0001A1F4 (100 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A190(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001A190: ;
    eax = MEM32(ebx + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebx + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0001A1B7; /* je: equal / zero */

loc_0001A19B: ;
    if (CMP_EQ(MEM32(eax + 0x2C), 1)) goto loc_0001A1A8; /* je: equal / zero */

loc_0001A1A1: ;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00400B80(); /* call 0x00400B80 */

loc_0001A1A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00400C00(); /* call 0x00400C00 */

loc_0001A1AE: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_0001A1B7: ;
    SET_LO8(eax, MEM8(0x846FF1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A1DE; /* je: equal / zero */

loc_0001A1C0: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5AD160);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A1DA: ;
    esp = esp + 0x10;
    POP32(esp, esi);

loc_0001A1DE: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0001A1F2; /* je: equal / zero */

loc_0001A1E5: ;
    ecx = 0; /* xor self */
    MEM32(edi) = eax;
    PUSH32(esp, 0); sub_00400B80(); /* call 0x00400B80 */

loc_0001A1EE: ;
    MEM8(ebx + 4) = 0;

loc_0001A1F2: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001A200
 * Original: 0x0001A200 - 0x0001A303 (259 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A200(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0001A200: ;
    eax = MEM32(esi + 0x38);
    esp = esp - 8;
    if (TEST_Z(eax, eax)) goto loc_0001A2FD; /* je: equal / zero */

loc_0001A20E: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0001A2FD; /* je: equal / zero */

loc_0001A219: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0001A2FC; /* jle: less or equal (signed <=) */

loc_0001A227: ;
    ecx = MEM32(0x847010);
    PUSH32(esp, ebx);
    edi = edi;

loc_0001A230: ;
    eax = MEM32(esi + 0x38);
    eax = MEM32(eax + edi * 8);
    edx = MEM32(ecx + eax * 4);
    SET_LO8(ebx, MEM8(edx + 0x1C));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0001A2AE; /* jne: not equal / not zero */

loc_0001A240: ;
    if (CMP_GE(eax, 0x29)) goto loc_0001A250; /* jge: greater or equal (signed >=) */

loc_0001A245: ;
    if (TEST_S(eax, eax)) goto loc_0001A250; /* jl: less (signed <) */

loc_0001A249: ;
    xmm0 = MEMF(edx + 4); /* movss */
    goto loc_0001A253;

loc_0001A250: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0001A253: ;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + eax * 4 + 0x40); /* movss */
    /* ucomiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0001A26E; /* jnp: not parity */

loc_0001A26A: ;
    SET_LO8(ebx, 1);
    goto loc_0001A270;

loc_0001A26E: ;
    SET_LO8(ebx, 0); /* xor self */

loc_0001A270: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A280; /* jne: not equal / not zero */

loc_0001A278: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0001A280; /* jne: not equal / not zero */

loc_0001A27C: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_0001A284;

loc_0001A280: ;
    eax = 0; /* xor self */
    SET_LO8(eax, 1);

loc_0001A284: ;
    edx = MEM32(esi + 0x38);
    edx = MEM32(edx + edi * 8);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0001A296: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0001A2E9; /* je: equal / zero */

loc_0001A29A: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + edi * 8);
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + edx * 4 + 0x40) = xmm0; /* movss */
    goto loc_0001A2E9;

loc_0001A2AE: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001A2EF; /* je: equal / zero */

loc_0001A2B6: ;
    if (CMP_GE(eax, 0x29)) goto loc_0001A2C9; /* jge: greater or equal (signed >=) */

loc_0001A2BB: ;
    if (TEST_S(eax, eax)) goto loc_0001A2C9; /* jl: less (signed <) */

loc_0001A2BF: ;
    eax = MEM32(ecx + eax * 4);
    xmm0 = MEMF(eax + 4); /* movss */
    goto loc_0001A2CC;

loc_0001A2C9: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_0001A2CC: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + edi * 8);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001A2E9: ;
    ecx = MEM32(0x847010);

loc_0001A2EF: ;
    eax = MEM32(esi + 0x3C);
    edi++;
    if (CMP_L(edi, eax)) goto loc_0001A230; /* jl: less (signed <) */

loc_0001A2FB: ;
    POP32(esp, ebx);

loc_0001A2FC: ;
    POP32(esp, edi);

loc_0001A2FD: ;
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001A310
 * Original: 0x0001A310 - 0x0001A385 (117 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001A310: ;
    eax = MEM32(esi + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0001A381; /* je: equal / zero */

loc_0001A31C: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0001A331; /* jne: not equal / not zero */

loc_0001A323: ;
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A331; /* jne: not equal / not zero */

loc_0001A32A: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A381; /* je: equal / zero */

loc_0001A331: ;
    SET_LO8(eax, MEM8(esi + 7));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A381; /* jne: not equal / not zero */

loc_0001A338: ;
    SET_LO8(eax, MEM8(esi + 5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A381; /* jne: not equal / not zero */

loc_0001A33F: ;
    eax = MEM32(esi + 0xE4);
    if (TEST_NZ(eax, eax)) goto loc_0001A381; /* jne: not equal / not zero */

loc_0001A349: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0001A380; /* jle: less or equal (signed <=) */

loc_0001A353: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);

loc_0001A358: ;
    eax = MEM32(esi + 0x38);
    if (CMP_NE(MEM32(eax + edi * 8), ebp)) goto loc_0001A377; /* jne: not equal / not zero */

loc_0001A360: ;
    ecx = eax;
    edx = MEM32(ecx + edi * 8);
    eax = MEM32(0x847010);
    ecx = MEM32(eax + edx * 4);
    eax = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0001A377: ;
    eax = MEM32(esi + 0x3C);
    edi++;
    if (CMP_L(edi, eax)) goto loc_0001A358; /* jl: less (signed <) */

loc_0001A37F: ;
    POP32(esp, ebx);

loc_0001A380: ;
    POP32(esp, edi);

loc_0001A381: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001A390
 * Original: 0x0001A390 - 0x0001A4BE (302 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A390(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001A390: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A3D8; /* jne: not equal / not zero */

loc_0001A395: ;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, MEM8(0x846FF1));
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_0001A485; /* jne: not equal / not zero */

loc_0001A3A3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A3C3; /* je: equal / zero */

loc_0001A3A7: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5AD100);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A3C0: ;
    esp = esp + 0x10;

loc_0001A3C3: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax);
    MEM32(edi + 0x1C) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0001A3D8: ;
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_0001A480; /* jne: not equal / not zero */

loc_0001A3E1: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x1C));
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    edx = edx + 0x41;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00034830(); /* call 0x00034830 */

loc_0001A40B: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x1C) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0001A460; /* je: equal / zero */

loc_0001A412: ;
    SET_LO8(ecx, MEM8(0x846FF1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001A439; /* je: equal / zero */

loc_0001A41C: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(edi + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5AD048);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A436: ;
    esp = esp + 0x14;

loc_0001A439: ;
    ecx = MEM32(0x847024);
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(ecx + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00034FA0(); /* call 0x00034FA0 */

loc_0001A44B: ;
    edx = MEM32(0x847024);
    esi = MEM32(edi + 0x1C);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, 0); sub_00034FF0(); /* call 0x00034FF0 */

loc_0001A45C: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0001A460: ;
    SET_LO8(eax, MEM8(0x846FF1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A4BA; /* je: equal / zero */

loc_0001A469: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD010);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A479: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0001A480: ;
    SET_LO8(eax, MEM8(0x846FF1));

loc_0001A485: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A4A6; /* je: equal / zero */

loc_0001A489: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5AD0A8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A4A3: ;
    esp = esp + 0x14;

loc_0001A4A6: ;
    edx = MEM32(0x847024);
    MEM32(edi + 0x1C) = ebx;
    ecx = MEM32(edx + 0x44);
    eax = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00034FA0(); /* call 0x00034FA0 */

loc_0001A4BA: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0001A4C0
 * Original: 0x0001A4C0 - 0x0001A505 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A4C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0001A4C0: ;
    SET_LO8(eax, MEM8(0x846FF1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A4E7; /* je: equal / zero */

loc_0001A4C9: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5ACFD0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A4E3: ;
    esp = esp + 0x10;
    POP32(esp, esi);

loc_0001A4E7: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x10);
    if (TEST_Z(ebx, ebx)) goto loc_0001A503; /* je: equal / zero */

loc_0001A4EF: ;
    PUSH32(esp, 0); sub_00400AA0(); /* call 0x00400AA0 */

loc_0001A4F4: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0xE8) = xmm0; /* movss */
    MEM8(edi + 4) = 1;

loc_0001A503: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001A510
 * Original: 0x0001A510 - 0x0001A7DE (718 bytes, 207 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001A510: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    xmm0 = MEMF(ebp + 0xE8); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_0001A539; /* jbe: below or equal (unsigned <=) */

loc_0001A529: ;
    xmm0 = xmm0 - MEMF(0x7FA218); /* subss */
    MEMF(ebp + 0xE8) = xmm0; /* movss */

loc_0001A539: ;
    eax = MEM32(ebp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = ebp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_0001A551; /* jne: not equal / not zero */

loc_0001A543: ;
    SET_LO8(eax, MEM8(ebp + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A551; /* jne: not equal / not zero */

loc_0001A54A: ;
    SET_LO8(eax, MEM8(ebp + 0xB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A577; /* je: equal / zero */

loc_0001A551: ;
    SET_LO8(eax, MEM8(ebp + 7));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A577; /* jne: not equal / not zero */

loc_0001A558: ;
    SET_LO8(eax, MEM8(ebp + 5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A577; /* jne: not equal / not zero */

loc_0001A55F: ;
    eax = MEM32(ebp + 0xE4);
    if (TEST_NZ(eax, eax)) goto loc_0001A577; /* jne: not equal / not zero */

loc_0001A569: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ebp;
    PUSH32(esp, 0); sub_0001A200(); /* call 0x0001A200 */

loc_0001A577: ;
    SET_LO8(eax, MEM8(ebp + 0x157));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A599; /* je: equal / zero */

loc_0001A581: ;
    SET_LO8(eax, MEM8(ebp + 0x156));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A599; /* jne: not equal / not zero */

loc_0001A58B: ;
    edi = ebp;
    PUSH32(esp, 0); sub_0001A4C0(); /* call 0x0001A4C0 */

loc_0001A592: ;
    MEM8(ebp + 0x157) = 0;

loc_0001A599: ;
    eax = MEM32(ebp + 0xE4);
    if (CMP_A(eax, 4)) goto loc_0001A763; /* ja: above (unsigned >) */

loc_0001A5A8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1A7E0); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0001A5AFu) goto loc_0001A5AF;
    if (_jt == 0x0001A6C2u) goto loc_0001A6C2;
    if (_jt == 0x0001A72Eu) goto loc_0001A72E;
    if (_jt == 0x0001A734u) goto loc_0001A734;
    if (_jt == 0x0001A763u) goto loc_0001A763;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001A5AF: ;
    SET_LO8(eax, MEM8(ebp + 9));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + 7) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A60D; /* je: equal / zero */

loc_0001A5BA: ;
    SET_LO8(eax, MEM8(0x846FF1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A5DE; /* je: equal / zero */

loc_0001A5C3: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebp + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5ACF40);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A5DB: ;
    esp = esp + 0x10;

loc_0001A5DE: ;
    ebx = MEM32(ebx);
    if (TEST_Z(ebx, ebx)) goto loc_0001A763; /* je: equal / zero */

loc_0001A5E8: ;
    ecx = 1;
    eax = ebx;
    PUSH32(esp, 0); sub_00400B80(); /* call 0x00400B80 */

loc_0001A5F4: ;
    xmm0 = MEMF(0x649108); /* movss */
    MEM8(ebp + 5) = 1;
    MEMF(ebp + 0x168) = xmm0; /* movss */
    goto loc_0001A763;

loc_0001A60D: ;
    SET_LO8(eax, MEM8(ebp + 6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A651; /* je: equal / zero */

loc_0001A614: ;
    MEM8(ebp + 6) = 0;
    SET_LO8(eax, MEM8(0x846FF1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A63C; /* je: equal / zero */

loc_0001A621: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5ACEB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A639: ;
    esp = esp + 0x10;

loc_0001A63C: ;
    ebx = MEM32(ebx);
    if (TEST_NZ(ebx, ebx)) goto loc_0001A5E8; /* jne: not equal / not zero */

loc_0001A642: ;
    MEM32(ebp + 0xE4) = 1;
    goto loc_0001A7C3;

loc_0001A651: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(ebp + 0xE8) - sets EFLAGS */
    if ((xmm0 < MEMF(ebp + 0xE8))) goto loc_0001A763; /* jb: below (unsigned <) */

loc_0001A661: ;
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A763; /* jne: not equal / not zero */

loc_0001A66C: ;
    SET_LO8(eax, MEM8(ebp + 0x157));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A763; /* jne: not equal / not zero */

loc_0001A67A: ;
    SET_LO8(eax, MEM8(ebp + 5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A763; /* jne: not equal / not zero */

loc_0001A685: ;
    SET_LO8(eax, MEM8(ebp + 0x156));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A69B; /* je: equal / zero */

loc_0001A68F: ;
    MEM8(ebp + 0x157) = 1;
    goto loc_0001A763;

loc_0001A69B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi = ebp;
    PUSH32(esp, 0); sub_0001A200(); /* call 0x0001A200 */

loc_0001A6A6: ;
    edi = ebp;
    PUSH32(esp, 0); sub_0001A4C0(); /* call 0x0001A4C0 */

loc_0001A6AD: ;
    eax = MEM32(ebp + 0x16C);
    if (TEST_Z(eax, eax)) goto loc_0001A763; /* je: equal / zero */

loc_0001A6BB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0001A6BD: ;
    goto loc_0001A763;

loc_0001A6C2: ;
    SET_LO8(eax, MEM8(ebp + 9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A721; /* je: equal / zero */

loc_0001A6C9: ;
    SET_LO8(eax, MEM8(0x846FF1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A6ED; /* je: equal / zero */

loc_0001A6D2: ;
    edx = MEM32(ebx);
    eax = MEM32(ebp + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x5ACE30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A6EA: ;
    esp = esp + 0x10;

loc_0001A6ED: ;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_0001A701; /* je: equal / zero */

loc_0001A6F2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00400C00(); /* call 0x00400C00 */

loc_0001A6F8: ;
    esp = esp + 4;
    MEM32(ebx) = 0;

loc_0001A701: ;
    SET_LO8(eax, MEM8(ebp + 0xA));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + 4) = 0;
    MEM8(ebp + 8) = 1;
    MEM8(ebp + 9) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A721; /* je: equal / zero */

loc_0001A714: ;
    PUSH32(esp, 0);
    edi = ebp;
    MEM8(ebp + 0xA) = 0;
    PUSH32(esp, 0); sub_0001A0A0(); /* call 0x0001A0A0 */

loc_0001A721: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0x168) = xmm0; /* movss */
    goto loc_0001A763;

loc_0001A72E: ;
    MEM8(ebp + 7) = 1;
    goto loc_0001A763;

loc_0001A734: ;
    SET_LO8(eax, MEM8(ebp + 0x158));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A763; /* je: equal / zero */

loc_0001A73E: ;
    edi = MEM32(ebx);
    if (TEST_NZ(edi, edi)) goto loc_0001A74B; /* jne: not equal / not zero */

loc_0001A744: ;
    SET_LO8(eax, MEM8(ebp + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A75C; /* je: equal / zero */

loc_0001A74B: ;
    SET_LO8(eax, MEM8(ebp + 5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A75C; /* jne: not equal / not zero */

loc_0001A752: ;
    ebx = 1;
    PUSH32(esp, 0); sub_00400D30(); /* call 0x00400D30 */

loc_0001A75C: ;
    MEM8(ebp + 0x158) = 0;

loc_0001A763: ;
    xmm0 = MEMF(ebp + 0x168); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0001A7D7; /* jbe: below or equal (unsigned <=) */

loc_0001A773: ;
    SET_LO8(eax, MEM8(ebp + 5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001A789; /* jne: not equal / not zero */

loc_0001A77A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp + 0x168) = xmm1; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0001A789: ;
    xmm0 = MEMF(ebp + 0x168); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA218); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebp + 0x168) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_0001A7D7; /* jb: below (unsigned <) */

loc_0001A7A6: ;
    ecx = MEM32(ebp + 0xE4);
    eax = 1;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(ebp + 0x168) = xmm1; /* movss */
    if (CMP_EQ(ecx, eax)) goto loc_0001A7D7; /* je: equal / zero */

loc_0001A7BD: ;
    MEM32(ebp + 0xE4) = eax;

loc_0001A7C3: ;
    MEM8(ebp + 4) = 0;
    MEM8(ebp + 9) = 0;
    MEM8(ebp + 8) = 0;
    MEM8(ebp + 0xB) = 0;
    MEM8(ebp + 5) = 0;

loc_0001A7D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0001A800
 * Original: 0x0001A800 - 0x0001A898 (152 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001A800: ;
    if (CMP_A(edx, 4)) goto loc_0001A897; /* ja: above (unsigned >) */

loc_0001A809: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(edx * 4 + 0x1A898); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0001A811u) goto loc_0001A811;
    if (_jt == 0x0001A82Cu) goto loc_0001A82C;
    if (_jt == 0x0001A847u) goto loc_0001A847;
    if (_jt == 0x0001A862u) goto loc_0001A862;
    if (_jt == 0x0001A87Du) goto loc_0001A87D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001A811: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ACDE0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A827: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001A82C: ;
    edx = MEM32(eax + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ACD88);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A842: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001A847: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ACD38);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A85D: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001A862: ;
    edx = MEM32(eax + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ACCD0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A878: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001A87D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5ACC78);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A893: ;
    esp = esp + 0x10;
    POP32(esp, esi);

loc_0001A897: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0001A8B0
 * Original: 0x0001A8B0 - 0x0001A935 (133 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A8B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0001A8B0: ;
    eax = MEM32(edi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0001A917; /* je: equal / zero */

loc_0001A8B8: ;
    SET_LO8(ecx, MEM8(edi + 7));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0001A911; /* jne: not equal / not zero */

loc_0001A8BF: ;
    SET_LO8(ecx, MEM8(edi + 5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0001A933; /* jne: not equal / not zero */

loc_0001A8C6: ;
    SET_LO8(ecx, MEM8(edi + 9));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0001A933; /* jne: not equal / not zero */

loc_0001A8CD: ;
    SET_LO8(ecx, MEM8(0x846FF1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0001A8F0; /* je: equal / zero */

loc_0001A8D7: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5ACC20);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A8ED: ;
    esp = esp + 0x10;

loc_0001A8F0: ;
    eax = MEM32(edi + 0x10);
    ecx = 1;
    PUSH32(esp, 0); sub_00400B80(); /* call 0x00400B80 */

loc_0001A8FD: ;
    xmm0 = MEMF(0x649108); /* movss */
    MEM8(edi + 5) = 1;
    MEMF(edi + 0x168) = xmm0; /* movss */

loc_0001A911: ;
    MEM8(edi + 9) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001A917: ;
    SET_LO8(eax, MEM8(0x846FF1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001A933; /* je: equal / zero */

loc_0001A920: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACBE0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001A930: ;
    esp = esp + 4;

loc_0001A933: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001A940
 * Original: 0x0001A940 - 0x0001AA46 (262 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001A940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001A940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_0001A958: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0001A96A; /* jne: not equal / not zero */

loc_0001A965: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0001A96A: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0001A9B4; /* je: equal / zero */

loc_0001A990: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_0001A9B4; /* jb: below (unsigned <) */

loc_0001A999: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001A9A3: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001A9AB: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_0001A9D7; /* jne: not equal / not zero */

loc_0001A9B4: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0001A9C6: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0001A9CE: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) { sub_0001AA46(); return; } /* je: equal / zero */

loc_0001A9D7: ;
    ecx = MEM32(0x7F9F60);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x28);
    PUSH32(esp, 0); sub_0001AEA0(); /* call 0x0001AEA0 */

loc_0001A9EA: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0001A9FF; /* jne: not equal / not zero */

loc_0001A9F0: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F05B0(); /* call 0x001F05B0 */

loc_0001A9FC: ;
    esp = esp + 8;

loc_0001A9FF: ;
    edi = MEM32(ebp + 0x15C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00034080(); /* call 0x00034080 */

loc_0001AA0D: ;
    SET_LO8(eax, MEM8(0x846FFC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001AA3E; /* je: equal / zero */

loc_0001AA16: ;
    ecx = MEM32(0x7F9F60);
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebp + 0x28);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5ACB90);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001AA3B: ;
    esp = esp + 0x14;

loc_0001AA3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001AAE0
 * Original: 0x0001AAE0 - 0x0001AB63 (131 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AAE0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0001AAE0: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    if (TEST_NZ(edi, edi)) goto loc_0001AAF6; /* jne: not equal / not zero */

loc_0001AAE8: ;
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001AAF6; /* jne: not equal / not zero */

loc_0001AAEF: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001AB5F; /* je: equal / zero */

loc_0001AAF6: ;
    eax = MEM32(esi + 0xE4);
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_EQ(eax, ebx)) goto loc_0001AB5E; /* je: equal / zero */

loc_0001AB06: ;
    SET_LO8(eax, MEM8(esi + 5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001AB5E; /* jne: not equal / not zero */

loc_0001AB0D: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001AB3C; /* je: equal / zero */

loc_0001AB15: ;
    SET_LO8(eax, MEM8(esi + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001AB31; /* je: equal / zero */

loc_0001AB1C: ;
    eax = esi;
    PUSH32(esp, 0); sub_00019B20(); /* call 0x00019B20 */

loc_0001AB23: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001AB5E; /* jne: not equal / not zero */

loc_0001AB27: ;
    PUSH32(esp, 0); sub_00400D30(); /* call 0x00400D30 */

loc_0001AB2C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0001AB31: ;
    MEM8(esi + 0x158) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0001AB3C: ;
    if (TEST_Z(edi, edi)) goto loc_0001AB57; /* je: equal / zero */

loc_0001AB40: ;
    eax = MEM32(edi + 0x38);
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(eax, LO8(eax) - 4);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001AB57; /* je: equal / zero */

loc_0001AB50: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00400D30(); /* call 0x00400D30 */

loc_0001AB57: ;
    MEM8(esi + 0x158) = 0;

loc_0001AB5E: ;
    POP32(esp, ebx);

loc_0001AB5F: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001AB70
 * Original: 0x0001AB70 - 0x0001AB9C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AB70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001AB70: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5ACAC0;
    PUSH32(esp, 0); sub_00019D90(); /* call 0x00019D90 */

loc_0001AB7E: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0001AB96; /* je: equal / zero */

loc_0001AB85: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001AB93: ;
    esp = esp + 4;

loc_0001AB96: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001ABA0
 * Original: 0x0001ABA0 - 0x0001ABB3 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001ABA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001ABA0: ;
    SET_LO8(eax, MEM8(ecx + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0001ABB3(); return; } /* je: equal / zero */

loc_0001ABA7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0); sub_0001A0A0(); /* call 0x0001A0A0 */

loc_0001ABB1: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001ABE0
 * Original: 0x0001ABE0 - 0x0001AC0C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001ABE0(void)
{
    float xmm0;

loc_0001ABE0: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_00019BF0(); /* call 0x00019BF0 */

loc_0001ABE8: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEM32(edi) = 0x5ACAA8;
    MEMF(edi + 0x170) = xmm0; /* movss */
    MEM32(edi + 0x174) = 0;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0001AC10
 * Original: 0x0001AC10 - 0x0001AC3C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AC10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001AC10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5ACAA8;
    PUSH32(esp, 0); sub_00019D90(); /* call 0x00019D90 */

loc_0001AC1E: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0001AC36; /* je: equal / zero */

loc_0001AC25: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0001AC33: ;
    esp = esp + 4;

loc_0001AC36: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0001AC40
 * Original: 0x0001AC40 - 0x0001ACC4 (132 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AC40(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0001AC40: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x20);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    esi = ecx;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    MEMF(esi + 0x170) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00019EF0(); /* call 0x00019EF0 */

loc_0001AC83: ;
    xmm0 = MEMF(esi + 0x170); /* movss */
    esi = MEM32(esi + 0x174);
    MEMF(esp + 0x28) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0001ACA6: ;
    edi = eax;
    eax = esi;
    PUSH32(esp, 0); sub_00401830(); /* call 0x00401830 */

loc_0001ACAF: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    POP32(esp, edi);
    MEMF(esi * 4 + 0x84BA10) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 44; return; /* ret 40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0001ACD0
 * Original: 0x0001ACD0 - 0x0001ADBD (237 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001ACD0(void)
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

loc_0001ACD0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x846FFD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001ACEB; /* jne: not equal / not zero */

loc_0001ACDE: ;
    SET_LO8(eax, MEM8(0x846FF1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001AD7C; /* je: equal / zero */

loc_0001ACEB: ;
    ecx = MEM32(edi + 0x174);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004017B0(); /* call 0x004017B0 */

loc_0001ACFC: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001AD0C: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB0C);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001AD1C: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esi = MEM32(0x847024);
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    esp = esp + 8;
    PUSH32(esp, 0x5ACAFC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001AD37: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    esi = MEM32(0x847024);
    MEMD(esp + 4) = fp_top(); fp_popp(); /* fstp */
    esp = esp + 4;
    PUSH32(esp, 0x5ACAEC);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001AD52: ;
    edx = MEM32(0x7F9F60);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5ACAD8);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001AD69: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_0001AD79: ;
    esp = esp + 0x18;

loc_0001AD7C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = MEMF(esp + 0x10); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(edi + 0x174);
    MEMF(edi + 0x170) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0001AD9F: ;
    edi = eax;
    eax = esi;
    PUSH32(esp, 0); sub_00401830(); /* call 0x00401830 */

loc_0001ADA8: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    POP32(esp, edi);
    MEMF(esi * 4 + 0x84BA10) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
