/**
 * Burnout 3 - Recompiled code chunk 44
 * Functions: 250 (0x003DB4F0 - 0x003EC4E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003DB4F0
 * Original: 0x003DB4F0 - 0x003DB543 (83 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB4F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DB4F0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    if (CMP_BE(ebx & ebx, 0)) goto loc_003DB53D; /* jbe: below or equal (unsigned <=) */

loc_003DB4FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;

loc_003DB503: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    edi = esp + 0x28;
    eax = ebp;
    PUSH32(esp, 0); sub_003D91B0(); /* call 0x003D91B0 */

loc_003DB521: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_00428EB0(); /* call 0x00428EB0 */

loc_003DB535: ;
    esi = esi + 8;
    ebx--;
    if ((ebx != 0)) goto loc_003DB503; /* jne: not equal / not zero */

loc_003DB53B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003DB53D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003DB550
 * Original: 0x003DB550 - 0x003DB6B2 (354 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DB550: ;
    esp = esp - 0x64;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x6C);
    if (CMP_BE(eax & eax, 0)) goto loc_003DB6AD; /* jbe: below or equal (unsigned <=) */

loc_003DB560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0xC) = eax;
    goto loc_003DB570;

    /* nop */

loc_003DB570: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edi = esp + 0x70;
    eax = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_003D91B0(); /* call 0x003D91B0 */

loc_003DB58C: ;
    eax = MEM32(esp + 0x88);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    eax = ebx;
    edx = ebp;
    ecx = esi;
    PUSH32(esp, 0); sub_003D9350(); /* call 0x003D9350 */

loc_003DB5B6: ;
    xmm0 = MEMF(0x74FA24); /* movss */
    eax = MEM32(esp + 0x30);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x3C); /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    eax = MEM32(esp + 0x34);
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x48); /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    eax = MEM32(esp + 0x38);
    MEMF(esp + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    esp = esp + 0x20;
    edx = esp + 0x40;
    ecx = esp + 0x4C;
    eax = esp + 0x58;
    MEMF(esp + 0x48) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00428EB0(); /* call 0x00428EB0 */

loc_003DB699: ;
    eax = MEM32(esp + 0xC);
    esi = esi + 8;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_003DB570; /* jne: not equal / not zero */

loc_003DB6AB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003DB6AD: ;
    POP32(esp, ebp);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_003DB6C0
 * Original: 0x003DB6C0 - 0x003DB942 (642 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB6C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DB6C0: ;
    esp = esp - 0x124;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x130);
    if (CMP_BE(eax & eax, 0)) goto loc_003DB93A; /* jbe: below or equal (unsigned <=) */

loc_003DB6D6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_003DB6E0: ;
    ebx = MEM32(esp + 0x138);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    edi = esp + 0x134;
    eax = ebp;
    edx = ebx;
    PUSH32(esp, 0); sub_003D91B0(); /* call 0x003D91B0 */

loc_003DB706: ;
    eax = MEM32(esp + 0x150);
    ecx = MEM32(esp + 0x14C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    eax = ebp;
    edx = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_003D9350(); /* call 0x003D9350 */

loc_003DB730: ;
    xmm0 = MEMF(0x74FA24); /* movss */
    eax = MEM32(esp + 0x60);
    edi = MEM32(esp + 0x4C);
    ebx = MEM32(esp + 0x5C);
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x64); /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x68); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x6C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x70); /* mulss */
    xmm1 = xmm1 + MEMF(edi); /* addss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x74); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x78); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 8); /* addss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x7C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx); /* addss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x80); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 4); /* addss */
    MEM32(esp + 0xC8) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(0x83BF68);
    MEM32(esp + 0xCC) = ecx;
    ecx = MEM32(esp + 0x40);
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x84); /* movss */
    MEM32(esp + 0xD0) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0xD8) = ecx;
    ecx = MEM32(esp + 0x48);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 8); /* addss */
    esp = esp + 0x20;
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xBC) = edx;
    MEM32(esp + 0xC0) = ecx;
    MEM32(esp + 0xC4) = eax;
    PUSH32(esp, 0x10);
    edx = esp + 0xAC;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_003DB869: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 4);
    eax = MEM32(edi);
    MEM32(esp + 0xF0) = edx;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0x10);
    MEM32(esp + 0x100) = edx;
    MEM32(esp + 0xF0) = ecx;
    ecx = MEM32(esp + 0x34);
    edx = esp + 0xEC;
    PUSH32(esp, edx);
    MEM32(esp + 0xF0) = eax;
    eax = MEM32(0x83BF68);
    MEM32(esp + 0x100) = ecx;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    MEM32(esp + 0x104) = eax;
    MEM32(esp + 0x110) = ecx;
    MEM32(esp + 0x114) = eax;
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_003DB8CD: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(ebx + 4);
    eax = MEM32(ebx);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x10);
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x70) = ecx;
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(0x83BF68);
    MEM32(esp + 0x80) = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    MEM32(esp + 0x84) = eax;
    MEM32(esp + 0x90) = ecx;
    MEM32(esp + 0x94) = eax;
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_003DB925: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 8;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_003DB6E0; /* jne: not equal / not zero */

loc_003DB937: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003DB93A: ;
    POP32(esp, ebp);
    esp = esp + 0x124;
    esp += 4; return; /* ret */

}

/**
 * sub_003DB950
 * Original: 0x003DB950 - 0x003DB9A3 (83 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DB950: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    if (CMP_BE(ebx & ebx, 0)) goto loc_003DB99D; /* jbe: below or equal (unsigned <=) */

loc_003DB95F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;

loc_003DB963: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    edi = esp + 0x28;
    eax = ebp;
    PUSH32(esp, 0); sub_003D91B0(); /* call 0x003D91B0 */

loc_003DB981: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_00428F40(); /* call 0x00428F40 */

loc_003DB995: ;
    esi = esi + 8;
    ebx--;
    if ((ebx != 0)) goto loc_003DB963; /* jne: not equal / not zero */

loc_003DB99B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003DB99D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003DB9B0
 * Original: 0x003DB9B0 - 0x003DB9D0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB9B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003DB9B0: ;
    edx = MEM32(0x84B564);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_003DB9CD; /* jle: less or equal (signed <=) */

loc_003DB9BC: ;
    ecx = 0x818ED4;

loc_003DB9C1: ;
    if (CMP_EQ(MEM32(ecx), esi)) { sub_003DB9D0(); return; } /* je: equal / zero */

loc_003DB9C5: ;
    eax++;
    ecx = ecx + 0xC;
    if (CMP_L(eax, edx)) goto loc_003DB9C1; /* jl: less (signed <) */

loc_003DB9CD: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003DB9F0
 * Original: 0x003DB9F0 - 0x003DBAB4 (196 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DB9F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003DB9F0: ;
    ecx = MEM32(0x84B564);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = 0; /* xor self */
    if (CMP_GE(ecx, 0x100)) goto loc_003DBAB2; /* jge: greater or equal (signed >=) */

loc_003DBA07: ;
    if (CMP_AE(ebx, 0x1000)) goto loc_003DBA14; /* jae: above or equal (unsigned >=) */

loc_003DBA0F: ;
    ebx = 0x1000;

loc_003DBA14: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24800000);
    edi = ecx + ecx * 2;
    PUSH32(esp, 0x18);
    edi = edi * 4 + 0x818ED0;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003DBA2C: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_003DBA67; /* je: equal / zero */

loc_003DBA32: ;
    eax = 0; /* xor self */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, 0xB2800000u);
    MEM32(ecx + 0x14) = eax;
    PUSH32(esp, ebx);
    MEM32(esi) = 0x1020001;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003DBA58: ;
    if (TEST_NZ(eax, eax)) goto loc_003DBA6B; /* jne: not equal / not zero */

loc_003DBA5C: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003DBA67: ;
    esi = 0; /* xor self */
    goto loc_003DBA71;

loc_003DBA6B: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = ebx;

loc_003DBA71: ;
    eax = MEM32(0x84B564);
    edx = eax + eax * 2;
    MEM32(edi) = esi;
    edi = MEM32(edx * 4 + 0x818ED0);
    PUSH32(esp, 0); sub_0053B140(); /* call 0x0053B140 */

loc_003DBA87: ;
    ecx = MEM32(0x84B564);
    edx = MEM32(esp + 0x10);
    eax = ecx + ecx * 2;
    eax = eax << 2;
    MEM32(eax + 0x818ED4) = edx;
    ecx++;
    POP32(esp, edi);
    MEM32(eax + 0x818ED8) = ebx;
    eax = eax + 0x818ED0;
    MEM32(0x84B564) = ecx;
    POP32(esp, esi);

loc_003DBAB2: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003DBAC0
 * Original: 0x003DBAC0 - 0x003DBE17 (855 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBAC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DBAC0: ;
    esp = esp - 0x50;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x64);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(edi, edi)) goto loc_003DBE0B; /* je: equal / zero */

loc_003DBADF: ;
    /* nop */

loc_003DBAE0: ;
    SET_LO16(eax, MEM16(edi));
    if (TEST_NZ(LO8(eax), 1)) { sub_003DBE17(); return; } /* jne: not equal / not zero */

loc_003DBAEB: ;
    esi = MEM32(esp + 0x68);
    edx = MEM32(esp + 0x70);
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 3);
    SET_LO8(ecx, LO8(eax));
    eax = ZX16(MEM16(edi + 2));
    ebp = ZX8(LO8(ecx));
    ebp = ebp << 2;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x6C);
    xmm0 = xmm0 * MEMF(0x649694); /* mulss */
    xmm1 = MEMF(eax + ebp); /* movss */
    xmm1 = xmm1 - MEMF(esi + ebp); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + ebp); /* addss */
    xmm1 = MEMF(edx + ebp); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 0x819B2C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM8(esp + 0x64) = LO8(ecx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_003DBB69; /* jbe: below or equal (unsigned <=) */

loc_003DBB42: ;
    ebx = MEM32(esp + 0x74);
    xmm1 = MEMF(ebx + ebp); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 0x819B2C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003DBB69; /* jbe: below or equal (unsigned <=) */

loc_003DBB58: ;
    MEMF(esi + ebp) = xmm0; /* movss */
    ecx = MEM32(edi + 4);
    MEM32(esp + 0x10) = ecx;
    goto loc_003DBDFF;

loc_003DBB69: ;
    xmm1 = MEMF(edx + ebp); /* movss */
    xmm1 = xmm1 + MEMF(ebp + 0x819B2C); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003DBBA2; /* jbe: below or equal (unsigned <=) */

loc_003DBB7B: ;
    ebx = MEM32(esp + 0x74);
    xmm1 = MEMF(ebx + ebp); /* movss */
    xmm1 = xmm1 + MEMF(ebp + 0x819B2C); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003DBBA2; /* jbe: below or equal (unsigned <=) */

loc_003DBB91: ;
    edi = edi + 8;
    MEMF(eax + ebp) = xmm0; /* movss */
    MEM32(esp + 0x10) = edi;
    goto loc_003DBE03;

loc_003DBBA2: ;
    xmm1 = MEMF(esi); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(eax); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    /* comiss xmm0, MEMF(edx + ebp) - sets EFLAGS */
    if ((xmm0 <= MEMF(edx + ebp))) goto loc_003DBC02; /* jbe: below or equal (unsigned <=) */

loc_003DBBE8: ;
    MEMF(esp + ebp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x1C) = 0;
    ebx = 1;
    MEMF(esi + ebp) = xmm0; /* movss */
    goto loc_003DBC17;

loc_003DBC02: ;
    MEMF(esp + ebp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x1C) = 1;
    ebx = 0; /* xor self */
    MEMF(eax + ebp) = xmm0; /* movss */

loc_003DBC17: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x819B2C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    SET_LO8(edx, LO8(ecx));
    ecx = MEM32(esp + 0x84);
    esi = esp + 0x58;
    edi = esp + 0x64;
    PUSH32(esp, 0); sub_003DC600(); /* call 0x003DC600 */

loc_003DBC3D: ;
    edi = MEM32(esp + 0x2C);
    esp = esp + 0x10;
    if (TEST_Z(edi, edi)) goto loc_003DBC51; /* je: equal / zero */

loc_003DBC48: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    goto loc_003DBC58;

loc_003DBC51: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 8;

loc_003DBC58: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003DBAC0(); /* call 0x003DBAC0 */

loc_003DBC72: ;
    esi = eax;
    esp = esp + 0x14;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    if (TEST_Z(esi, esi)) goto loc_003DBDBD; /* je: equal / zero */

loc_003DBC83: ;
    eax = MEM32(0x819B24);
    if (CMP_EQ(eax, 2)) goto loc_003DBDBD; /* je: equal / zero */

loc_003DBC91: ;
    if (TEST_Z(eax, eax)) goto loc_003DBDA9; /* je: equal / zero */

loc_003DBC99: ;
    edx = esp + 0x3C;
    MEM32(esp + 0x20) = edx;
    ecx = 0x819B44;
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = 0x819B38;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(0x819B7C);
    xmm0 = MEMF(esp + ebp + 0x3C); /* movss */
    xmm0 = xmm0 * MEMF(eax + 4); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x819B38); /* addss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 + MEMF(ebp + 0x819B2C); /* addss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_003DBCFC; /* jbe: below or equal (unsigned <=) */

loc_003DBCF8: ;
    if (TEST_NZ(ebx, ebx)) goto loc_003DBD15; /* jne: not equal / not zero */

loc_003DBCFC: ;
    xmm0 = xmm0 - MEMF(ebp + 0x819B2C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003DBDA9; /* jbe: below or equal (unsigned <=) */

loc_003DBD0D: ;
    if (TEST_Z(edi, edi)) goto loc_003DBDA9; /* je: equal / zero */

loc_003DBD15: ;
    xmm0 = MEMF(eax + 4); /* movss */
    ecx = MEM32(esp + 0x74);
    xmm1 = MEMF(esp + 0x3C); /* movss */
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x70);
    SET_LO8(edx, MEM8(esp + 0x64));
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x819B38); /* addss */
    MEMF(ecx) = xmm1; /* movss */
    PUSH32(esp, eax);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x44); /* mulss */
    xmm1 = xmm1 + MEMF(0x819B3C); /* addss */
    MEMF(ecx + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    PUSH32(esp, 0x819B2C);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x819B40); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    MEMF(ecx + 8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003DC600(); /* call 0x003DC600 */

loc_003DBD7C: ;
    esi = MEM32(esp + 0x2C);
    esp = esp + 0x10;
    if (TEST_Z(ebx, ebx)) goto loc_003DBD9E; /* je: equal / zero */

loc_003DBD87: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx + 4);
    eax = eax | esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_003DBDFF;

loc_003DBD9E: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 8;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) | esi;
    goto loc_003DBDFF;

loc_003DBDA9: ;
    eax = MEM32(esp + 0x14);
    eax = eax | esi;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = eax;
    goto loc_003DBDFF;

loc_003DBDBD: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x74);
    SET_LO8(edx, MEM8(esp + 0x64));
    eax = eax | esi;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x819B2C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_003DC600(); /* call 0x003DC600 */

loc_003DBDE6: ;
    esp = esp + 0x10;
    if (TEST_Z(ebx, ebx)) goto loc_003DBDFA; /* je: equal / zero */

loc_003DBDED: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x10) = edx;
    goto loc_003DBDFF;

loc_003DBDFA: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 8;

loc_003DBDFF: ;
    edi = MEM32(esp + 0x10);

loc_003DBE03: ;
    if (TEST_NZ(edi, edi)) goto loc_003DBAE0; /* jne: not equal / not zero */

loc_003DBE0B: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_003DBE40
 * Original: 0x003DBE40 - 0x003DC32A (1258 bytes, 316 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DBE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DBE40: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA8);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(edi, edi)) goto loc_003DC31B; /* je: equal / zero */

loc_003DBE65: ;
    SET_LO16(eax, MEM16(edi));
    if (TEST_NZ(LO8(eax), 1)) goto loc_003DC2E4; /* jne: not equal / not zero */

loc_003DBE70: ;
    esi = MEM32(esp + 0xB0);
    edx = MEM32(esp + 0xAC);
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) >> 1);
    SET_LO8(ebx, LO8(ebx) & 3);
    ebp = ZX8(LO8(ebx));
    ebp = ebp << 2;
    xmm1 = MEMF(esi + ebp); /* movss */
    xmm1 = xmm1 - MEMF(edx + ebp); /* subss */
    xmm1 = xmm1 * MEMF(0x648CEC); /* mulss */
    eax = eax >> 3;
    eax = eax & 1;
    MEM32(esp + 0x24) = eax;
    if ((eax == 0)) goto loc_003DBF22; /* je: equal / zero */

loc_003DBEA9: ;
    ecx = MEM32(edi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_003DBF22; /* je: equal / zero */

loc_003DBEB0: ;
    eax = ZX8(MEM8(edi + 9));
    ecx = ZX8(MEM8(edi + 8));
    xmm3 = MEMF(esi + ebp); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(edi + 0xA));
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(edi + 0xB));
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(edx + ebp); /* addss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(edx + ebp); /* addss */
    xmm4 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(esi + ebp); /* movss */
    xmm1 = xmm1 - xmm4; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    goto loc_003DBF8C;

loc_003DBF22: ;
    if (TEST_Z(eax, eax)) goto loc_003DBF30; /* je: equal / zero */

loc_003DBF26: ;
    eax = ZX8(MEM8(edi + 9));
    ecx = ZX8(MEM8(edi + 8));
    goto loc_003DBF38;

loc_003DBF30: ;
    eax = ZX8(MEM8(edi + 0xA));
    ecx = ZX8(MEM8(edi + 0xB));

loc_003DBF38: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(edx + ebp); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + ebp); /* movss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_003DBF8C: ;
    ecx = MEM32(esp + 0xB4);
    xmm4 = MEMF(ebp + 0x819B2C); /* movss */
    xmm4 = xmm4 + MEMF(ecx + ebp); /* addss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    eax = MEM32(esp + 0xB8);
    if ((xmm0 <= xmm4)) goto loc_003DBFC2; /* jbe: below or equal (unsigned <=) */

loc_003DBFAC: ;
    xmm5 = MEMF(eax + ebp); /* movss */
    xmm5 = xmm5 + MEMF(ebp + 0x819B2C); /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_003DC315; /* ja: above (unsigned >) */

loc_003DBFC2: ;
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x819B2C); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003DBFEA; /* jbe: below or equal (unsigned <=) */

loc_003DBFD4: ;
    xmm5 = MEMF(eax + ebp); /* movss */
    xmm5 = xmm5 - MEMF(ebp + 0x819B2C); /* subss */
    /* comiss xmm5, xmm1 - sets EFLAGS */
    if ((xmm5 > xmm1)) goto loc_003DC315; /* ja: above (unsigned >) */

loc_003DBFEA: ;
    if (CMP_EQ(MEM32(edi + 4), 0)) goto loc_003DC05D; /* je: equal / zero */

loc_003DBFF0: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003DC05D; /* jbe: below or equal (unsigned <=) */

loc_003DBFF5: ;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x819B2C); /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003DC05D; /* jbe: below or equal (unsigned <=) */

loc_003DC007: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x819B2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003DC9A0(); /* call 0x003DC9A0 */

loc_003DC01E: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_003DC315; /* je: equal / zero */

loc_003DC029: ;
    eax = MEM32(0x819B74);
    xmm0 = MEMF(esp + 0x20); /* movss */
    eax++;
    MEM32(0x819B74) = eax;
    eax = MEM32(esp + 0xAC);
    MEMF(eax + ebp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + ebp) = xmm0; /* movss */
    ecx = MEM32(edi + 4);
    MEM32(esp + 0x10) = ecx;
    goto loc_003DC2C9;

loc_003DC05D: ;
    ecx = MEM32(esp + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_003DC0DB; /* je: equal / zero */

loc_003DC065: ;
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 <= xmm4)) goto loc_003DC0DB; /* jbe: below or equal (unsigned <=) */

loc_003DC06A: ;
    xmm0 = MEMF(eax + ebp); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x819B2C); /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_003DC0DB; /* jbe: below or equal (unsigned <=) */

loc_003DC07C: ;
    ecx = MEM32(esp + 0xB4);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x819B2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003DC9A0(); /* call 0x003DC9A0 */

loc_003DC09A: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_003DC315; /* je: equal / zero */

loc_003DC0A5: ;
    ecx = MEM32(0x819B74);
    xmm0 = MEMF(esp + 0x18); /* movss */
    eax = MEM32(esp + 0xAC);
    ecx++;
    MEM32(0x819B74) = ecx;
    MEMF(eax + ebp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    edi = edi + 0xC;
    MEMF(esi + ebp) = xmm0; /* movss */
    MEM32(esp + 0x10) = edi;
    goto loc_003DC2CD;

loc_003DC0DB: ;
    MEM32(0x819B78) = MEM32(0x819B78) + 1;
    xmm0 = MEMF(edx); /* movss */
    ecx = MEM32(esp + 0xB4);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(edx + 4); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(edx + 8); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + ebp); /* movss */
    xmm0 = xmm0 - MEMF(eax + ebp); /* subss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003DC156; /* jbe: below or equal (unsigned <=) */

loc_003DC143: ;
    eax = 1;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = 0;
    goto loc_003DC16A;

loc_003DC156: ;
    MEM32(esp + 0x28) = 0;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x24) = 1;

loc_003DC16A: ;
    xmm0 = MEMF(esp + eax * 4 + 0x2C); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + ebp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + eax * 4 + 0x1C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x819B2C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC8);
    esi = esp + 0x84;
    edi = esp + 0x9C;
    SET_LO8(edx, LO8(ebx));
    MEMF(esp + ebp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003DC600(); /* call 0x003DC600 */

loc_003DC1B7: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_003DC1E6; /* je: equal / zero */

loc_003DC1BE: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x819B2C);
    ecx = edi;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    esi = esp + 0x6C;
    edi = esp + 0x78;
    SET_LO8(edx, LO8(ebx));
    ecx = esp + 0x84;
    PUSH32(esp, 0); sub_003DC600(); /* call 0x003DC600 */

loc_003DC1E3: ;
    esp = esp + 0x10;

loc_003DC1E6: ;
    eax = MEM32(esp + 0x28);
    if (TEST_Z(eax, eax)) goto loc_003DC1F7; /* je: equal / zero */

loc_003DC1EE: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    goto loc_003DC1FE;

loc_003DC1F7: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0xC;

loc_003DC1FE: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003DBE40(); /* call 0x003DBE40 */

loc_003DC218: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + ecx * 4 + 0x30);
    xmm0 = MEMF(esp + ecx * 4 + 0x40); /* movss */
    ecx = MEM32(esp + 0xC4);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0xC0);
    MEM32(eax + ebp) = edx;
    MEMF(ecx + ebp) = xmm0; /* movss */
    edx = MEM32(eax + ebp);
    ebp = MEM32(esp + 0xC8);
    ecx = MEM32(esp + 0xCC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x819B2C);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    esi = esp + 0xBC;
    edi = esp + 0xA4;
    SET_LO8(edx, LO8(ebx));
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003DC600(); /* call 0x003DC600 */

loc_003DC275: ;
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) goto loc_003DC2A5; /* je: equal / zero */

loc_003DC27C: ;
    eax = MEM32(esp + 0x40);
    esi = MEM32(esp + 0xB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x819B2C);
    ecx = edi;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = ebp;
    SET_LO8(edx, LO8(ebx));
    ecx = esp + 0xA8;
    PUSH32(esp, 0); sub_003DC600(); /* call 0x003DC600 */

loc_003DC2A2: ;
    esp = esp + 0x10;

loc_003DC2A5: ;
    eax = MEM32(esp + 0x24);
    if (TEST_Z(eax, eax)) goto loc_003DC2B6; /* je: equal / zero */

loc_003DC2AD: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    goto loc_003DC2BD;

loc_003DC2B6: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0xC;

loc_003DC2BD: ;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x34) = MEM32(esp + 0x34) | ecx;

loc_003DC2C9: ;
    edi = MEM32(esp + 0x10);

loc_003DC2CD: ;
    if (TEST_NZ(edi, edi)) goto loc_003DBE65; /* jne: not equal / not zero */

loc_003DC2D5: ;
    eax = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

loc_003DC2E4: ;
    ecx = MEM32(esp + 0xB0);
    eax = MEM32(esp + 0xAC);
    PUSH32(esp, 0); sub_003DCF90(); /* call 0x003DCF90 */

loc_003DC2F7: ;
    ecx = MEM32(esp + 0x34);
    ecx = ecx | eax;
    eax = MEM32(0x819B70);
    POP32(esp, edi);
    POP32(esp, esi);
    eax++;
    POP32(esp, ebp);
    MEM32(0x819B70) = eax;
    eax = ecx;
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

loc_003DC315: ;
    MEM32(0x819B6C) = MEM32(0x819B6C) + 1;

loc_003DC31B: ;
    eax = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_003DC330
 * Original: 0x003DC330 - 0x003DC429 (249 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC330(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_003DC330: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ecx + 0xB8;
    edi = eax;
    ebx = MEM32(edi);
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    xmm6 = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(eax);
    MEM32(esp + 8) = edi;
    edi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm5 = MEMF(esp + 8); /* movss */
    /* comiss xmm5, xmm6 - sets EFLAGS */
    MEM32(esp + 0xC) = edi;
    POP32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0xC) = eax;
    POP32(esp, ebx);
    xmm0 = xmm6; /* movaps */
    if ((xmm5 > xmm6)) goto loc_003DC37E; /* ja: above (unsigned >) */

loc_003DC37B: ;
    xmm0 = xmm5; /* movaps */

loc_003DC37E: ;
    xmm0 = xmm0 - MEMF(ecx + 0xA0); /* subss */
    xmm4 = MEMF(esp + 0x10); /* movss */
    xmm3 = MEMF(esp + 4); /* movss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    MEMF(edx) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    if ((xmm3 > xmm4)) goto loc_003DC3A1; /* ja: above (unsigned >) */

loc_003DC39E: ;
    xmm0 = xmm3; /* movaps */

loc_003DC3A1: ;
    xmm0 = xmm0 - MEMF(ecx + 0xA4); /* subss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    MEMF(edx + 4) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    if ((xmm1 > xmm2)) goto loc_003DC3C5; /* ja: above (unsigned >) */

loc_003DC3C2: ;
    xmm0 = xmm1; /* movaps */

loc_003DC3C5: ;
    /* comiss xmm6, xmm5 - sets EFLAGS */
    xmm0 = xmm0 - MEMF(ecx + 0xA8); /* subss */
    MEMF(edx + 8) = xmm0; /* movss */
    xmm0 = xmm6; /* movaps */
    if ((xmm6 > xmm5)) goto loc_003DC3DD; /* ja: above (unsigned >) */

loc_003DC3DA: ;
    xmm0 = xmm5; /* movaps */

loc_003DC3DD: ;
    /* comiss xmm4, xmm3 - sets EFLAGS */
    xmm5 = MEMF(ecx + 0xA0); /* movss */
    xmm5 = xmm5 + xmm0; /* addss */
    MEMF(esi) = xmm5; /* movss */
    xmm0 = xmm4; /* movaps */
    if ((xmm4 > xmm3)) goto loc_003DC3F8; /* ja: above (unsigned >) */

loc_003DC3F5: ;
    xmm0 = xmm3; /* movaps */

loc_003DC3F8: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm3 = MEMF(ecx + 0xA4); /* movss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esi + 4) = xmm3; /* movss */
    xmm0 = xmm2; /* movaps */
    if ((xmm2 > xmm1)) goto loc_003DC414; /* ja: above (unsigned >) */

loc_003DC411: ;
    xmm0 = xmm1; /* movaps */

loc_003DC414: ;
    xmm1 = MEMF(ecx + 0xA8); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esi + 8) = xmm1; /* movss */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003DC430
 * Original: 0x003DC430 - 0x003DC46C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC430(void)
{
    int _flags = 0; /* fallback flag var */

loc_003DC430: ;
    ecx = MEM32(0x84B53C);
    esp = esp - 0x64;
    if (TEST_Z(ecx, ecx)) { sub_003DC46C(); return; } /* je: equal / zero */

loc_003DC43D: ;
    eax = MEM32(0x84B540);
    if (TEST_Z(eax, eax)) { sub_003DC46C(); return; } /* je: equal / zero */

loc_003DC446: ;
    SET_LO8(edx, MEM8(0x84B538));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_003DC46C(); return; } /* je: equal / zero */

loc_003DC450: ;
    edx = MEM32(esp + 0x6C);
    edx = ZX16(MEM16(edx + 6));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(edx + ecx);
    eax = eax & MEM32(0x74FA2C);
    if ((eax != 0)) { sub_003DC46C(); return; } /* jne: not equal / not zero */

loc_003DC466: ;
    eax = 0; /* xor self */
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_003DC600
 * Original: 0x003DC600 - 0x003DC98D (909 bytes, 266 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DC600: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = MEM32(esp + 4);
    xmm1 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003DC73E; /* jne: not equal / not zero */

loc_003DC61C: ;
    if (TEST_Z(ebp, ebp)) goto loc_003DC652; /* je: equal / zero */

loc_003DC620: ;
    xmm2 = MEMF(ebx); /* movss */
    xmm2 = xmm2 * MEMF(0x648E2C); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(eax); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_003DC647; /* jb: below (unsigned <) */

loc_003DC63C: ;
    xmm2 = MEMF(ecx); /* movss */
    SET_LO8(ebx, 1);
    /* comiss xmm2, xmm0 - sets EFLAGS */
    goto loc_003DC670;

loc_003DC647: ;
    xmm2 = MEMF(ecx); /* movss */
    SET_LO8(ebx, 0); /* xor self */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    goto loc_003DC670;

loc_003DC652: ;
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 * MEMF(0x648E2C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(eax) - sets EFLAGS */
    if ((xmm0 < MEMF(eax))) goto loc_003DC66B; /* jb: below (unsigned <) */

loc_003DC667: ;
    SET_LO8(ebx, 1);
    goto loc_003DC66D;

loc_003DC66B: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003DC66D: ;
    /* comiss xmm0, MEMF(ecx) - sets EFLAGS */

loc_003DC670: ;
    if ((xmm0 < MEMF(ecx))) goto loc_003DC676; /* jb: below (unsigned <) */

loc_003DC672: ;
    SET_LO8(edx, 1);
    goto loc_003DC678;

loc_003DC676: ;
    SET_LO8(edx, 0); /* xor self */

loc_003DC678: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003DC6F7; /* je: equal / zero */

loc_003DC67C: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ebx = MEM32(eax);
    MEM32(edi) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(edi + 8) = ebx;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_003DC6A8; /* je: equal / zero */

loc_003DC690: ;
    eax = MEM32(ecx);
    MEM32(esi) = eax;
    edx = MEM32(ecx + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(ecx + 8);
    POP32(esp, ebp);
    MEM32(esi + 8) = eax;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003DC6A8: ;
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 - MEMF(eax); /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */

loc_003DC6D2: ;
    MEMF(esi + 4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 - MEMF(eax + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    POP32(esp, ebp);
    MEMF(esi + 8) = xmm1; /* movss */
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003DC6F7: ;
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_003DC98D(); return; } /* je: equal / zero */

loc_003DC6FF: ;
    edx = MEM32(ecx);
    MEM32(esi) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esi + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esi + 8) = edx;
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 - MEMF(eax); /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    goto loc_003DC837;

loc_003DC73E: ;
    if (CMP_NE(LO8(edx), 1)) goto loc_003DC85C; /* jne: not equal / not zero */

loc_003DC747: ;
    if (TEST_Z(ebp, ebp)) goto loc_003DC781; /* je: equal / zero */

loc_003DC74B: ;
    xmm2 = MEMF(ebx + 4); /* movss */
    xmm2 = xmm2 * MEMF(0x648E2C); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(eax + 4); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_003DC775; /* jb: below (unsigned <) */

loc_003DC769: ;
    xmm2 = MEMF(ecx + 4); /* movss */
    SET_LO8(ebx, LO8(edx));
    /* comiss xmm2, xmm0 - sets EFLAGS */
    goto loc_003DC7A2;

loc_003DC775: ;
    xmm2 = MEMF(ecx + 4); /* movss */
    SET_LO8(ebx, 0); /* xor self */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    goto loc_003DC7A2;

loc_003DC781: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 * MEMF(0x648E2C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 4))) goto loc_003DC79C; /* jb: below (unsigned <) */

loc_003DC798: ;
    SET_LO8(ebx, 1);
    goto loc_003DC79E;

loc_003DC79C: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003DC79E: ;
    /* comiss xmm0, MEMF(ecx + 4) - sets EFLAGS */

loc_003DC7A2: ;
    if ((xmm0 < MEMF(ecx + 4))) goto loc_003DC7A8; /* jb: below (unsigned <) */

loc_003DC7A4: ;
    SET_LO8(edx, 1);
    goto loc_003DC7AA;

loc_003DC7A8: ;
    SET_LO8(edx, 0); /* xor self */

loc_003DC7AA: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003DC7F5; /* je: equal / zero */

loc_003DC7AE: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ebx = MEM32(eax);
    MEM32(edi) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(edi + 8) = ebx;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003DC690; /* jne: not equal / not zero */

loc_003DC7C6: ;
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 - MEMF(eax + 4); /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 - MEMF(eax); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    MEMF(esi) = xmm2; /* movss */
    goto loc_003DC6D2;

loc_003DC7F5: ;
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_003DC98D(); return; } /* je: equal / zero */

loc_003DC7FD: ;
    edx = MEM32(ecx);
    MEM32(esi) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esi + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esi + 8) = edx;
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 - MEMF(eax + 4); /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 - MEMF(eax); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    MEMF(edi) = xmm2; /* movss */

loc_003DC837: ;
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 - MEMF(eax + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    POP32(esp, ebp);
    MEMF(edi + 8) = xmm1; /* movss */
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003DC85C: ;
    if (TEST_Z(ebp, ebp)) goto loc_003DC896; /* je: equal / zero */

loc_003DC860: ;
    xmm2 = MEMF(ebx + 8); /* movss */
    xmm2 = xmm2 * MEMF(0x648E2C); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(eax + 8); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_003DC88A; /* jb: below (unsigned <) */

loc_003DC87E: ;
    xmm2 = MEMF(ecx + 8); /* movss */
    SET_LO8(ebx, 1);
    /* comiss xmm2, xmm0 - sets EFLAGS */
    goto loc_003DC8B7;

loc_003DC88A: ;
    xmm2 = MEMF(ecx + 8); /* movss */
    SET_LO8(ebx, 0); /* xor self */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    goto loc_003DC8B7;

loc_003DC896: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x648E2C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 8))) goto loc_003DC8B1; /* jb: below (unsigned <) */

loc_003DC8AD: ;
    SET_LO8(ebx, 1);
    goto loc_003DC8B3;

loc_003DC8B1: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003DC8B3: ;
    /* comiss xmm0, MEMF(ecx + 8) - sets EFLAGS */

loc_003DC8B7: ;
    if ((xmm0 < MEMF(ecx + 8))) goto loc_003DC8BD; /* jb: below (unsigned <) */

loc_003DC8B9: ;
    SET_LO8(edx, 1);
    goto loc_003DC8BF;

loc_003DC8BD: ;
    SET_LO8(edx, 0); /* xor self */

loc_003DC8BF: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003DC92A; /* je: equal / zero */

loc_003DC8C3: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ebx = MEM32(eax);
    MEM32(edi) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(edi + 8) = ebx;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003DC690; /* jne: not equal / not zero */

loc_003DC8DB: ;
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 - MEMF(eax); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    MEMF(esi) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 - MEMF(eax + 4); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 4); /* addss */
    POP32(esp, ebp);
    MEMF(esi + 4) = xmm2; /* movss */
    MEMF(esi + 8) = xmm1; /* movss */
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003DC92A: ;
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_003DC98D(); return; } /* je: equal / zero */

loc_003DC92E: ;
    edx = MEM32(ecx);
    MEM32(esi) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esi + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esi + 8) = edx;
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 - MEMF(eax); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    MEMF(edi) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 - MEMF(eax + 4); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 4); /* addss */
    POP32(esp, ebp);
    MEMF(edi + 4) = xmm2; /* movss */
    MEMF(edi + 8) = xmm1; /* movss */
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003DC9A0
 * Original: 0x003DC9A0 - 0x003DC9F5 (85 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DC9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DC9A0: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    esi = esp + 0x28;
    edi = esp + 0x1C;
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_003DC600(); /* call 0x003DC600 */

loc_003DC9C6: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_003DC9F5(); return; } /* je: equal / zero */

loc_003DC9CD: ;
    edx = MEM32(esp + 0x34);
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = edi;
    edi = MEM32(esp + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, LO8(ebx));
    ecx = esp + 0x28;
    PUSH32(esp, 0); sub_003DC600(); /* call 0x003DC600 */

loc_003DC9EB: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003DCA00
 * Original: 0x003DCA00 - 0x003DCA40 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCA00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DCA00: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    xmm7 = MEMF(ebp); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    xmm1 = MEMF(esi); /* movss */
    PUSH32(esp, edi);
    edi = edx;
    edx = MEM32(esp + 0x2C);
    xmm6 = MEMF(edx); /* movss */
    xmm6 = xmm6 * MEMF(0x648E2C); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm6; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm6; /* movss */
    if ((xmm1 < xmm0)) { sub_003DCA40(); return; } /* jb: below (unsigned <) */

loc_003DCA3C: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_003DCA42(); return; /* tail jmp 0x003DCA42 */

}

/**
 * sub_003DCF90
 * Original: 0x003DCF90 - 0x003DD048 (184 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DCF90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DCF90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(0x819B14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003D88E0(); /* call 0x003D88E0 */

loc_003DCFAA: ;
    esi = 0; /* xor self */
    esp = esp + 0x10;
    if (CMP_BE(MEM16(edi + 2), LO16(esi))) goto loc_003DD042; /* jbe: below or equal (unsigned <=) */

loc_003DCFB9: ;
    ecx = MEM32(0x819B28);
    edx = MEM32(0x74FA18);

loc_003DCFC5: ;
    if (TEST_Z(ecx, ecx)) goto loc_003DCFDC; /* je: equal / zero */

loc_003DCFC9: ;
    eax = MEM32(edi + 4);
    eax = ZX16(MEM16(eax + esi * 2));
    ebx = MEM32(ecx + eax * 4);
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    eax = ecx + eax * 4;
    if (CMP_AE(ebx, edx)) goto loc_003DD039; /* jae: above or equal (unsigned >=) */

loc_003DCFDA: ;
    MEM32(eax) = edx;

loc_003DCFDC: ;
    eax = MEM32(0x819B20);
    ecx = MEM32(edi + 4);
    edx = ZX16(MEM16(ecx + esi * 2));
    ecx = MEM32(eax + 0x10);
    ebx = ZX16(MEM16(eax + 8));
    ecx = ecx + edx * 8;
    edx = MEM32(0x819B7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(eax + 0xA));
    edx = edx + ebx;
    ebx = ZX16(MEM16(eax + 6));
    eax = MEM32(eax);
    edx = edx + ebx;
    PUSH32(esp, edx);
    edx = MEM32(0x819B18);
    PUSH32(esp, eax);
    eax = MEM32(0x819B14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x819B10), _icall_esp); /* indirect call */
    }

loc_003DD01D: ;
    esp = esp + 0x18;
    ebp = ebp | eax;
    if ((ebp == 0)) goto loc_003DD02D; /* je: equal / zero */

loc_003DD024: ;
    eax = MEM32(0x819B24);
    if (TEST_Z(eax, eax)) goto loc_003DD042; /* je: equal / zero */

loc_003DD02D: ;
    ecx = MEM32(0x819B28);
    edx = MEM32(0x74FA18);

loc_003DD039: ;
    eax = ZX16(MEM16(edi + 2));
    esi++;
    if (CMP_B(esi, eax)) goto loc_003DCFC5; /* jb: below (unsigned <) */

loc_003DD042: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003DD050
 * Original: 0x003DD050 - 0x003DD15E (270 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DD050: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    ebp = 0; /* xor self */
    if (TEST_Z(edi, edi)) goto loc_003DD154; /* je: equal / zero */

loc_003DD065: ;
    ebx = MEM32(esp + 0x34);
    esi = MEM32(esp + 0x30);
    /* nop */

loc_003DD070: ;
    SET_LO16(eax, MEM16(edi));
    if (TEST_NZ(LO8(eax), 1)) { sub_003DD15E(); return; } /* jne: not equal / not zero */

loc_003DD07B: ;
    ecx = ZX16(MEM16(edi + 2));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 3);
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    xmm1 = MEMF(eax + ebx); /* movss */
    xmm1 = xmm1 - MEMF(eax + esi); /* subss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649694); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(eax + 0x819B38); /* movss */
    xmm0 = xmm0 + MEMF(eax + esi); /* addss */
    xmm1 = xmm1 - MEMF(eax + 0x819B2C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003DD0C7; /* jbe: below or equal (unsigned <=) */

loc_003DD0BD: ;
    MEMF(eax + esi) = xmm0; /* movss */
    goto loc_003DD149;

loc_003DD0C7: ;
    xmm1 = MEMF(eax + 0x819B38); /* movss */
    xmm1 = xmm1 + MEMF(eax + 0x819B2C); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003DD0E6; /* jbe: below or equal (unsigned <=) */

loc_003DD0DC: ;
    MEMF(eax + ebx) = xmm0; /* movss */
    edi = edi + 8;
    goto loc_003DD14C;

loc_003DD0E6: ;
    xmm1 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(ebx); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + eax + 0x10) = xmm0; /* movss */
    edx = esp + 0x10;
    MEMF(eax + esi) = xmm0; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003DD050(); /* call 0x003DD050 */

loc_003DD144: ;
    esp = esp + 0xC;
    ebp = ebp | eax;

loc_003DD149: ;
    edi = MEM32(edi + 4);

loc_003DD14C: ;
    if (TEST_NZ(edi, edi)) goto loc_003DD070; /* jne: not equal / not zero */

loc_003DD154: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003DD180
 * Original: 0x003DD180 - 0x003DD3A6 (550 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DD180: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(edi, edi)) goto loc_003DD39A; /* je: equal / zero */

loc_003DD19B: ;
    ebp = MEM32(esp + 0x40);
    esi = MEM32(esp + 0x38);
    ebx = MEM32(esp + 0x34);
    goto loc_003DD1B0;

    /* nop */

loc_003DD1B0: ;
    SET_LO16(ecx, MEM16(edi));
    if (TEST_NZ(LO8(ecx), 1)) { sub_003DD3A6(); return; } /* jne: not equal / not zero */

loc_003DD1BC: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 3);
    eax = ZX8(LO8(eax));
    eax = eax << 2;
    xmm1 = MEMF(eax + esi); /* movss */
    xmm1 = xmm1 - MEMF(eax + ebx); /* subss */
    xmm1 = xmm1 * MEMF(0x648CEC); /* mulss */
    ecx = ecx >> 3;
    ecx = ecx & 1;
    if ((ecx == 0)) goto loc_003DD225; /* je: equal / zero */

loc_003DD1E2: ;
    edx = MEM32(edi + 4);
    if (TEST_Z(edx, edx)) goto loc_003DD225; /* je: equal / zero */

loc_003DD1E9: ;
    edx = ZX8(MEM8(edi + 9));
    xmm3 = MEMF(eax + esi); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(edi + 8));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(edi + 0xA));
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + ebx); /* addss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(eax + ebx); /* addss */
    xmm4 = xmm0; /* movaps */
    goto loc_003DD281;

loc_003DD225: ;
    if (TEST_Z(ecx, ecx)) goto loc_003DD262; /* je: equal / zero */

loc_003DD229: ;
    edx = ZX8(MEM8(edi + 9));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(edi + 8));
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + ebx); /* addss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = MEMF(0x648E84); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm5 = xmm2; /* movaps */
    goto loc_003DD299;

loc_003DD262: ;
    edx = ZX8(MEM8(edi + 0xA));
    xmm3 = MEMF(0x649200); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + ebx); /* addss */
    xmm4 = xmm3; /* movaps */
    xmm2 = xmm0; /* movaps */

loc_003DD281: ;
    edx = ZX8(MEM8(edi + 0xB));
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm1 = MEMF(eax + esi); /* movss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm5 = xmm1; /* movaps */

loc_003DD299: ;
    edx = MEM32(esp + 0x3C);
    /* comiss xmm0, MEMF(eax + edx) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + edx))) goto loc_003DD39A; /* ja: above (unsigned >) */

loc_003DD2A7: ;
    xmm0 = MEMF(eax + ebp); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_003DD39A; /* ja: above (unsigned >) */

loc_003DD2B5: ;
    if (CMP_EQ(MEM32(edi + 4), 0)) goto loc_003DD2E6; /* je: equal / zero */

loc_003DD2BB: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003DD2E6; /* jbe: below or equal (unsigned <=) */

loc_003DD2C0: ;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_003DD39A; /* jbe: below or equal (unsigned <=) */

loc_003DD2C9: ;
    xmm0 = MEMF(eax + edx); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003DD39A; /* jbe: below or equal (unsigned <=) */

loc_003DD2D7: ;
    MEMF(eax + ebx) = xmm2; /* movss */
    MEMF(eax + esi) = xmm5; /* movss */
    goto loc_003DD38F;

loc_003DD2E6: ;
    if (TEST_Z(ecx, ecx)) goto loc_003DD317; /* je: equal / zero */

loc_003DD2EA: ;
    /* comiss xmm2, MEMF(eax + edx) - sets EFLAGS */
    if ((xmm2 <= MEMF(eax + edx))) goto loc_003DD317; /* jbe: below or equal (unsigned <=) */

loc_003DD2F0: ;
    /* comiss xmm3, MEMF(eax + ebp) - sets EFLAGS */
    if ((xmm3 <= MEMF(eax + ebp))) goto loc_003DD39A; /* jbe: below or equal (unsigned <=) */

loc_003DD2FA: ;
    xmm0 = MEMF(eax + edx); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_003DD39A; /* jbe: below or equal (unsigned <=) */

loc_003DD308: ;
    MEMF(eax + ebx) = xmm4; /* movss */
    MEMF(eax + esi) = xmm3; /* movss */
    edi = edi + 0xC;
    goto loc_003DD392;

loc_003DD317: ;
    xmm0 = MEMF(ebx); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + eax + 0x14) = xmm3; /* movss */
    MEMF(esp + eax + 0x20) = xmm4; /* movss */
    PUSH32(esp, ebp);
    MEMF(eax + ebx) = xmm2; /* movss */
    PUSH32(esp, edx);
    MEMF(eax + esi) = xmm5; /* movss */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = edi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003DD180(); /* call 0x003DD180 */

loc_003DD382: ;
    ecx = MEM32(esp + 0x24);
    esp = esp + 0x14;
    ecx = ecx | eax;
    MEM32(esp + 0x10) = ecx;

loc_003DD38F: ;
    edi = MEM32(edi + 4);

loc_003DD392: ;
    if (TEST_NZ(edi, edi)) goto loc_003DD1B0; /* jne: not equal / not zero */

loc_003DD39A: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003DD3C0
 * Original: 0x003DD3C0 - 0x003DD52E (366 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD3C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003DD3C0: ;
    esp = esp - 0x24;
    eax = esp + 0xC;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x18;
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x18;
    MEM32(esp) = edx;
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 8) = xmm1; /* movss */
    eax = esp + 0xC;
    MEM32(esp) = eax;
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm4 = MEMF(esp + 8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x649284); /* movss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_003DD4BA; /* jbe: below or equal (unsigned <=) */

loc_003DD4A5: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003DD528; /* jb: below (unsigned <) */

loc_003DD4AD: ;
    MEMF(esi) = xmm1; /* movss */
    eax = 1;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_003DD4BA: ;
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x10); /* mulss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0xC); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_003DD4F3; /* jbe: below or equal (unsigned <=) */

loc_003DD4EE: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_003DD528; /* ja: above (unsigned >) */

loc_003DD4F3: ;
    xmm2 = xmm1; /* movaps */
    xmm5 = xmm4; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm5; /* subss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 > xmm2)) goto loc_003DD528; /* ja: above (unsigned >) */

loc_003DD50A: ;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x3C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 >= xmm3)) { sub_003DD52E(); return; } /* jae: above or equal (unsigned >=) */

loc_003DD51C: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 >= xmm3)) { sub_003DD52E(); return; } /* jae: above or equal (unsigned >=) */

loc_003DD528: ;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_003DD570
 * Original: 0x003DD570 - 0x003DD967 (1015 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD570(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003DD570: ;
    esp = esp - 0x50;
    eax = esp + 0x2C;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x60);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x5C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x20;
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x64);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x5C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x14;
    MEM32(esp) = edx;
    ecx = MEM32(esp + 0x58);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x68);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm3 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm4 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    eax = MEM32(esp + 0x38);
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm6 = xmm5; /* movaps */
    MEMF(esp + 0x40) = xmm0; /* movss */
    edx = MEM32(esp + 0x40);
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x48) = ecx;
    xmm7 = MEMF(esp + 0x48); /* movss */
    MEM32(esp + 0x4C) = edx;
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x34); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x30); /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEM32(esp + 0x44) = eax;
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    /* comiss xmm6, xmm2 - sets EFLAGS */
    MEMF(esp + 4) = xmm2; /* movss */
    if ((xmm6 <= xmm2)) goto loc_003DD7C9; /* jbe: below or equal (unsigned <=) */

loc_003DD6BC: ;
    eax = MEM32(0x84B568);
    if (TEST_NZ(eax, eax)) goto loc_003DD7C3; /* jne: not equal / not zero */

loc_003DD6C9: ;
    /* comiss xmm2, MEMF(0x649324) - sets EFLAGS */
    if ((xmm2 > MEMF(0x649324))) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD6D6: ;
    eax = esp + 8;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x54);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x5C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm4 = MEMF(esp + 0x10); /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm5 = xmm5 * MEMF(esp + 8); /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm4 = xmm4 + xmm5; /* addss */
    /* comiss xmm4, xmm6 - sets EFLAGS */
    if ((xmm4 > xmm6)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD72E: ;
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 > xmm4)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD737: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_003E1E60(); /* call 0x003E1E60 */

loc_003DD749: ;
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm5 = MEMF(esp + 0x3C); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0x1C); /* mulss */
    esp = esp + 4;
    xmm3 = xmm3 + xmm7; /* addss */
    /* comiss xmm3, xmm6 - sets EFLAGS */
    if ((xmm3 > xmm6)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD786: ;
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 + xmm4; /* addss */
    /* comiss xmm2, xmm7 - sets EFLAGS */
    if ((xmm2 > xmm7)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD792: ;
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x6C); /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm5 = xmm0; /* movaps */
    /* comiss xmm2, xmm5 - sets EFLAGS */
    if ((xmm2 > xmm5)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD7BA: ;
    /* comiss xmm5, xmm6 - sets EFLAGS */
    if ((xmm5 <= xmm6)) goto loc_003DD927; /* jbe: below or equal (unsigned <=) */

loc_003DD7C3: ;
    eax = 0; /* xor self */
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_003DD7C9: ;
    xmm0 = MEMF(0x649284); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD7D6: ;
    edx = esp + 8;
    MEM32(esp) = edx;
    ecx = MEM32(esp + 0x54);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x5C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm5 = xmm5 * MEMF(esp + 8); /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm4 = xmm4 + xmm5; /* addss */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 > xmm4)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD830: ;
    /* comiss xmm4, xmm2 - sets EFLAGS */
    if ((xmm4 > xmm2)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD835: ;
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm7 = MEMF(esp + 8); /* movss */
    MEMF(esp + 0x44) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x2C); /* movss */
    eax = MEM32(esp + 0x44);
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    edx = MEM32(esp + 0x4C);
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    ecx = MEM32(esp + 0x48);
    MEM32(esp + 0x38) = eax;
    xmm5 = MEMF(esp + 0x38); /* movss */
    MEM32(esp + 0x40) = edx;
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEM32(esp + 0x3C) = ecx;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm6 = 0.0f; /* xorps self = zero */
    /* comiss xmm6, xmm3 - sets EFLAGS */
    if ((xmm6 > xmm3)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD8E2: ;
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 + xmm4; /* addss */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    if ((xmm7 > xmm2)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD8F2: ;
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x28); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x6C); /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm5 = xmm0; /* movaps */
    /* comiss xmm5, xmm2 - sets EFLAGS */
    if ((xmm5 > xmm2)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD91E: ;
    /* comiss xmm6, xmm5 - sets EFLAGS */
    if ((xmm6 > xmm5)) goto loc_003DD7C3; /* ja: above (unsigned >) */

loc_003DD927: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E5C50(); /* call 0x003E5C50 */

loc_003DD931: ;
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x78);
    eax = MEM32(esp + 0x7C);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    MEMF(edx) = xmm1; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(eax) = xmm0; /* movss */
    esp = esp + 4;
    eax = 1;
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_003DD970
 * Original: 0x003DD970 - 0x003DDC04 (660 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DD970(void)
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

loc_003DD970: ;
    esp = esp - 0x14;
    eax = esp + 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    MEM32(esp + 4) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x649284)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003DDA52; /* jbe: below or equal (unsigned <=) */

loc_003DD9BF: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 8) = xmm2; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(ebx); /* movss */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    xmm1 = xmm1 - MEMF(esi); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003DDA30; /* jbe: below or equal (unsigned <=) */

loc_003DDA12: ;
    /* comiss xmm1, MEMF(ebp) - sets EFLAGS */
    if ((xmm1 <= MEMF(ebp))) goto loc_003DDA1D; /* jbe: below or equal (unsigned <=) */

loc_003DDA18: ;
    MEMF(ebp) = xmm1; /* movss */

loc_003DDA1D: ;
    eax = MEM32(esp + 0x28);
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003DDA70; /* jbe: below or equal (unsigned <=) */

loc_003DDA2A: ;
    MEMF(eax) = xmm0; /* movss */
    goto loc_003DDA70;

loc_003DDA30: ;
    /* comiss xmm0, MEMF(ebp) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp))) goto loc_003DDA3B; /* jbe: below or equal (unsigned <=) */

loc_003DDA36: ;
    MEMF(ebp) = xmm0; /* movss */

loc_003DDA3B: ;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    eax = ecx;
    if ((xmm0 <= xmm1)) goto loc_003DDA70; /* jbe: below or equal (unsigned <=) */

loc_003DDA4A: ;
    edx = ecx;
    MEMF(edx) = xmm1; /* movss */
    goto loc_003DDA70;

loc_003DDA52: ;
    xmm0 = MEMF(edi); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 > MEMF(esi))) { sub_003DDC04(); return; } /* ja: above (unsigned >) */

loc_003DDA5F: ;
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(ebx) - sets EFLAGS */
    if ((xmm0 > MEMF(ebx))) { sub_003DDC04(); return; } /* ja: above (unsigned >) */

loc_003DDA6C: ;
    eax = MEM32(esp + 0x28);

loc_003DDA70: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x649284)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003DDB13; /* jbe: below or equal (unsigned <=) */

loc_003DDA88: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 - MEMF(esi + 4); /* subss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003DDAF9; /* jbe: below or equal (unsigned <=) */

loc_003DDADF: ;
    /* comiss xmm1, MEMF(ebp) - sets EFLAGS */
    if ((xmm1 <= MEMF(ebp))) goto loc_003DDAEA; /* jbe: below or equal (unsigned <=) */

loc_003DDAE5: ;
    MEMF(ebp) = xmm1; /* movss */

loc_003DDAEA: ;
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003DDB31; /* jbe: below or equal (unsigned <=) */

loc_003DDAF3: ;
    MEMF(eax) = xmm0; /* movss */
    goto loc_003DDB31;

loc_003DDAF9: ;
    /* comiss xmm0, MEMF(ebp) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp))) goto loc_003DDB04; /* jbe: below or equal (unsigned <=) */

loc_003DDAFF: ;
    MEMF(ebp) = xmm0; /* movss */

loc_003DDB04: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003DDB31; /* jbe: below or equal (unsigned <=) */

loc_003DDB0D: ;
    MEMF(eax) = xmm1; /* movss */
    goto loc_003DDB31;

loc_003DDB13: ;
    xmm0 = MEMF(edi + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 4))) { sub_003DDC04(); return; } /* ja: above (unsigned >) */

loc_003DDB22: ;
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm0, MEMF(ebx + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(ebx + 4))) { sub_003DDC04(); return; } /* ja: above (unsigned >) */

loc_003DDB31: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x649284)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003DDBE4; /* jbe: below or equal (unsigned <=) */

loc_003DDB49: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm1 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 - MEMF(esi + 8); /* subss */
    xmm1 = xmm1 - MEMF(esi + 8); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003DDBC2; /* jbe: below or equal (unsigned <=) */

loc_003DDBA0: ;
    /* comiss xmm1, MEMF(ebp) - sets EFLAGS */
    if ((xmm1 <= MEMF(ebp))) goto loc_003DDBAB; /* jbe: below or equal (unsigned <=) */

loc_003DDBA6: ;
    MEMF(ebp) = xmm1; /* movss */

loc_003DDBAB: ;
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003DDBFA; /* jbe: below or equal (unsigned <=) */

loc_003DDBB4: ;
    MEMF(eax) = xmm0; /* movss */
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003DDBC2: ;
    /* comiss xmm0, MEMF(ebp) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp))) goto loc_003DDBCD; /* jbe: below or equal (unsigned <=) */

loc_003DDBC8: ;
    MEMF(ebp) = xmm0; /* movss */

loc_003DDBCD: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_003DDBFA; /* jbe: below or equal (unsigned <=) */

loc_003DDBD6: ;
    MEMF(eax) = xmm1; /* movss */
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003DDBE4: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 8))) { sub_003DDC04(); return; } /* ja: above (unsigned >) */

loc_003DDBEF: ;
    xmm0 = MEMF(esi + 8); /* movss */
    /* comiss xmm0, MEMF(ebx + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(ebx + 8))) { sub_003DDC04(); return; } /* ja: above (unsigned >) */

loc_003DDBFA: ;
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003DDC10
 * Original: 0x003DDC10 - 0x003DDE76 (614 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDC10(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003DDC10: ;
    fp_push(MEMF(edi)); /* fld float */
    esp = esp - 0x34;
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, esi);
    fp_push(MEMF(0x648D24)); /* fld float */
    esi = eax;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_003DDE76(); return; } /* ja: above (unsigned >) */

loc_003DDC2A: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_003DDE76(); return; } /* ja: above (unsigned >) */

loc_003DDC3F: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_003DDE76(); return; } /* ja: above (unsigned >) */

loc_003DDC54: ;
    eax = esp + 8;
    MEM32(esp + 4) = eax;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x14;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm3 = MEMF(esp + 0xC); /* movss */
    xmm4 = MEMF(esp + 0x10); /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x18); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * MEMF(esi + 0x1C); /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * MEMF(esi + 0x20); /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(esi + 4); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm3 = MEMF(esi + 8); /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = MEMF(esi); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    MEMF(esp + 8) = xmm5; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x18); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * MEMF(esi + 0x1C); /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * MEMF(esi + 0x20); /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(esi + 4); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm3 = MEMF(esi + 8); /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = MEMF(esi); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm3; /* addss */
    ecx = esp + 0x2C;
    eax = edi;
    MEMF(esp + 0x14) = xmm5; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1780(); /* call 0x003E1780 */

loc_003DDDD1: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0xC); /* mulss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    edx = MEM32(esp + 0x4C);
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x1C); /* mulss */
    esi = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003DD3C0(); /* call 0x003DD3C0 */

loc_003DDE6E: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003DDE80
 * Original: 0x003DDE80 - 0x003DE369 (1257 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DDE80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DDE80: ;
    esp = esp - 0x90;
    xmm0 = MEMF(esp + 0x98); /* movss */
    xmm1 = MEMF(edx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA8);
    xmm1 = xmm1 + MEMF(ebp); /* addss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 4); /* addss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(edx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 8); /* addss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ebx = MEM32(esp + 0xBC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB0);
    xmm1 = xmm1 + MEMF(edi); /* addss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 4); /* addss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edi + 8); /* addss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 8); /* addss */
    eax = esp + 0x54;
    ecx = esp + 0x6C;
    edx = esp + 0x20;
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x54;
    ecx = esp + 0x78;
    edx = esp + 0x60;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x38);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x6C;
    ecx = esp + 0x78;
    edx = esp + 0x84;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x38);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0x68); /* movss */
    xmm0 = MEMF(esp + 0x64); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x60); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = ebx;
    MEM32(eax) = ecx;
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    PUSH32(esp, ebx);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_003DE095: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_003DE35D; /* jne: not equal / not zero */

loc_003DE0A0: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003DE0A7: ;
    edx = esp + 0x48;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0xA8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xB4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x54;
    ecx = esp + 0x3C;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0xA0);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm3 = MEMF(ebx + 4); /* movss */
    xmm3 = xmm3 * MEMF(esp + 0x40); /* mulss */
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    xmm1 = MEMF(ebx + 8); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x50); /* mulss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x3C); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x4C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x48); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm0 >= xmm5)) goto loc_003DE35D; /* jae: above or equal (unsigned >=) */

loc_003DE178: ;
    xmm1 = MEMF(esp + 0xA4); /* movss */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 > xmm3)) goto loc_003DE35D; /* ja: above (unsigned >) */

loc_003DE199: ;
    xmm0 = xmm0 * MEMF(esp + 0xB8); /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_003DE35D; /* ja: above (unsigned >) */

loc_003DE1AF: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E5C50(); /* call 0x003E5C50 */

loc_003DE1B9: ;
    eax = MEM32(esp + 0xC0);
    xmm2 = MEMF(esp + 0x4C); /* movss */
    xmm4 = MEMF(esp + 0x54); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0x50); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm6 = MEMF(ebx + 4); /* movss */
    xmm7 = MEMF(ebx + 8); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x40); /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x44); /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm4 = xmm4 + MEMF(esp + 0x48); /* addss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = xmm0 * MEMF(ebx); /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm1 = xmm1 * MEMF(ebx); /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm7 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x94) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x24); /* movss */
    ecx = MEM32(esp + 0x94);
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    eax = MEM32(esp + 0x9C);
    MEMF(esp + 0x98) = xmm7; /* movss */
    edx = MEM32(esp + 0x98);
    MEM32(esp + 0x1C) = edx;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x20) = eax;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEM32(esp + 0x18) = ecx;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    esp = esp + 4;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    if ((xmm5 > xmm0)) goto loc_003DE35D; /* ja: above (unsigned >) */

loc_003DE2CC: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    eax = ebx;
    PUSH32(esp, 0); sub_003E1E60(); /* call 0x003E1E60 */

loc_003DE2DC: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    esp = esp + 4;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 > xmm0)) goto loc_003DE35D; /* ja: above (unsigned >) */

loc_003DE30A: ;
    PUSH32(esp, ebx);
    eax = esp + 0x88;
    PUSH32(esp, 0); sub_003E1E60(); /* call 0x003E1E60 */

loc_003DE317: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_003DE329: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x44); /* mulss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x40); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x3C); /* mulss */
    esp = esp + 0x10;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) { sub_003DE369(); return; } /* jbe: below or equal (unsigned <=) */

loc_003DE35D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x90;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE380
 * Original: 0x003DE380 - 0x003DE4D6 (342 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DE380: ;
    esp = esp - 0x48;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5C);
    eax = esp + 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x5C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x68);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x14;
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
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm0 = MEMF(0x649284); /* movss */
    /* comiss xmm0, MEMF(esp + 0xC) - sets EFLAGS */
    eax = MEM32(esp + 0x64);
    if ((xmm0 <= MEMF(esp + 0xC))) { sub_003DE4D6(); return; } /* jbe: below or equal (unsigned <=) */

loc_003DE404: ;
    xmm1 = MEMF(ebp); /* movss */
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = MEMF(eax); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    if ((xmm1 <= xmm0)) goto loc_003DE426; /* jbe: below or equal (unsigned <=) */

loc_003DE419: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    goto loc_003DE43B;

loc_003DE426: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_003DE438; /* jbe: below or equal (unsigned <=) */

loc_003DE42B: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    goto loc_003DE43B;

loc_003DE438: ;
    xmm2 = xmm5; /* movaps */

loc_003DE43B: ;
    xmm1 = MEMF(ebp + 4); /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm3 = MEMF(eax + 4); /* movss */
    if ((xmm1 <= xmm0)) goto loc_003DE45C; /* jbe: below or equal (unsigned <=) */

loc_003DE44F: ;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    goto loc_003DE471;

loc_003DE45C: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003DE46E; /* jbe: below or equal (unsigned <=) */

loc_003DE461: ;
    xmm0 = xmm0 - xmm3; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    goto loc_003DE471;

loc_003DE46E: ;
    xmm1 = xmm5; /* movaps */

loc_003DE471: ;
    xmm3 = MEMF(ebp + 8); /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm4 = MEMF(eax + 8); /* movss */
    if ((xmm3 <= xmm0)) goto loc_003DE48F; /* jbe: below or equal (unsigned <=) */

loc_003DE485: ;
    xmm0 = xmm0 - xmm3; /* subss */
    xmm0 = xmm0 * xmm0; /* mulss */
    goto loc_003DE4A1;

loc_003DE48F: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_003DE49E; /* jbe: below or equal (unsigned <=) */

loc_003DE494: ;
    xmm0 = xmm0 - xmm4; /* subss */
    xmm0 = xmm0 * xmm0; /* mulss */
    goto loc_003DE4A1;

loc_003DE49E: ;
    xmm0 = xmm5; /* movaps */

loc_003DE4A1: ;
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_003DE4CE; /* jb: below (unsigned <) */

loc_003DE4BB: ;
    edx = MEM32(esp + 0x70);
    POP32(esp, esi);
    MEMF(edx) = xmm5; /* movss */
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_003DE4CE: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_003DE990
 * Original: 0x003DE990 - 0x003DEBDC (588 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DE990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DE990: ;
    esp = esp - 0xC8;
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xF8);
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0xE4);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xE0);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x38;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0xE8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xE0);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x20;
    MEM32(esp + 8) = edx;
    ecx = MEM32(esp + 0xD4);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xE0);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    SET_LO8(ebx, MEM8(0x84B56C));
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0xBC) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x38); /* movss */
    eax = MEM32(esp + 0xBC);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    ecx = MEM32(esp + 0xC0);
    MEMF(esp + 0xC4) = xmm1; /* movss */
    edx = MEM32(esp + 0xC4);
    MEMF(ebp) = xmm4; /* movss */
    MEMF(ebp + 4) = xmm4; /* movss */
    MEMF(ebp + 8) = xmm4; /* movss */
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x68) = edx;
    if (TEST_Z(LO8(ebx), 1)) goto loc_003DEB1A; /* je: equal / zero */

loc_003DEAE5: ;
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x60); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) goto loc_003DEBD1; /* ja: above (unsigned >) */

loc_003DEB1A: ;
    eax = esp + 0x60;
    MEM32(esp + 8) = eax;
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
    MEMF(esp + 0x88) = xmm1; /* movss */
    xmm0 = MEMF(0x648D54); /* movss */
    /* comiss xmm0, MEMF(esp + 0x88) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x88))) goto loc_003DEBD1; /* ja: above (unsigned >) */

loc_003DEB60: ;
    ecx = esp + 0x2C;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0xDC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xEC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    (void)0; /* test LO8(ebx), 2 - flags set for next jcc */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x68); /* mulss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x64); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x60); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 2)) { sub_003DEBDC(); return; } /* je: equal / zero */

loc_003DEBCC: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 < xmm4)) { sub_003DEBDC(); return; } /* jb: below (unsigned <) */

loc_003DEBD1: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC8;
    esp += 4; return; /* ret */

}

/**
 * sub_003DF3E0
 * Original: 0x003DF3E0 - 0x003DF667 (647 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF3E0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003DF3E0: ;
    esp = esp - 0x34;
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    eax = esp + 0x10;
    PUSH32(esp, esi);
    xmm1 = xmm1 + xmm0; /* addss */
    esi = ecx;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEM32(esp + 4) = eax;
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 8;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x48);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm2 = MEMF(esp + 0x18); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    fp_push(MEMF(0x648D24)); /* fld float */
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm5 = MEMF(esi + 0x1C); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esi + 0xC); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x18); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(esi + 0x20); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(esi + 4); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = MEMF(esi + 8); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm2 = MEMF(esi); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 8); /* movss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    xmm5 = MEMF(esi + 0x1C); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esi + 0xC); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x18); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(esi + 0x20); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(esi + 4); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = MEMF(esi + 8); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm2 = MEMF(esi); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    MEMF(esp + 8) = xmm5; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_003DF667(); return; } /* ja: above (unsigned >) */

loc_003DF59C: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_003DF667(); return; } /* ja: above (unsigned >) */

loc_003DF5B2: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_003DF667(); return; } /* ja: above (unsigned >) */

loc_003DF5C8: ;
    ecx = esp + 0x2C;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_003E1780(); /* call 0x003E1780 */

loc_003DF5D5: ;
    edx = MEM32(esp + 0x4C);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    esi = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    PUSH32(esp, 0x5A02CC);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    PUSH32(esp, 0x3F800000);
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x24); /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    PUSH32(esp, 0x5A02CC);
    eax = esp + 0x18;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x2C); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x20); /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003DD3C0(); /* call 0x003DD3C0 */

loc_003DF65F: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003DF670
 * Original: 0x003DF670 - 0x003DF69B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF670(void)
{
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

loc_003DF670: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0 = MEMF(esp + 4); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003DF69A; /* ja: above (unsigned >) */

loc_003DF694: ;
    xmm0 = MEMF(esp + 8); /* movss */

loc_003DF69A: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003DF6A0
 * Original: 0x003DF6A0 - 0x003DF77C (220 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF6A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003DF6A0: ;
    PUSH32(esp, ecx);
    xmm2 = MEMF(esp + 8); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm0 = xmm5; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 > xmm0)) { sub_003DF77C(); return; } /* ja: above (unsigned >) */

loc_003DF6C7: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 >= xmm4)) goto loc_003DF6E9; /* jae: above or equal (unsigned >=) */

loc_003DF6D9: ;
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 < xmm3)) { sub_003DF77C(); return; } /* jb: below (unsigned <) */

loc_003DF6E9: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp) = xmm0; /* movss */
    xmm3 = MEMF(esp); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 < xmm4)) goto loc_003DF752; /* jb: below (unsigned <) */

loc_003DF70F: ;
    MEMF(esp + 8) = xmm2; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm3 = xmm3 + xmm5; /* addss */
    xmm3 = xmm3 * MEMF(esp + 0xC); /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(eax) = xmm4; /* movss */
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003DF752: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 < xmm3)) { sub_003DF77C(); return; } /* jb: below (unsigned <) */

loc_003DF757: ;
    /* comiss xmm3, xmm5 - sets EFLAGS */
    if ((xmm3 < xmm5)) { sub_003DF77C(); return; } /* jb: below (unsigned <) */

loc_003DF75C: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E5C50(); /* call 0x003E5C50 */

loc_003DF766: ;
    xmm3 = xmm3 - xmm5; /* subss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(eax) = xmm0; /* movss */
    esp = esp + 4;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003DF780
 * Original: 0x003DF780 - 0x003DF9C1 (577 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DF780: ;
    esp = esp - 0x1C;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
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
    MEMF(esp + 8) = xmm1; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 8) = xmm2; /* movss */
    xmm2 = MEMF(esi); /* movss */
    xmm2 = xmm2 * MEMF(eax); /* mulss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 * MEMF(esi + 4); /* mulss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * MEMF(eax); /* mulss */
    xmm3 = MEMF(esp + 8); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 * MEMF(eax + 8); /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 * MEMF(eax + 8); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 4); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x38); /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x34); /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 <= xmm5)) { sub_003DF9C1(); return; } /* jbe: below or equal (unsigned <=) */

loc_003DF889: ;
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x28)); /* sqrtss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esp + 0x28) = xmm3; /* movss */
    if ((xmm0 < xmm3)) { sub_003DF9C1(); return; } /* jb: below (unsigned <) */

loc_003DF8F1: ;
    xmm0 = MEMF(ebp); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 < xmm3)) { sub_003DF9C1(); return; } /* jb: below (unsigned <) */

loc_003DF8FF: ;
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm4 = MEMF(ecx + 8); /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 4); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(edi + 8); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esi + 8); /* addss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(edi); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    if ((xmm0 <= xmm5)) { sub_003DF9C1(); return; } /* jbe: below or equal (unsigned <=) */

loc_003DF960: ;
    xmm1 = MEMF(esp + 0x3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_003DF9C1(); return; } /* jbe: below or equal (unsigned <=) */

loc_003DF96B: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    xmm4 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_003E5C50(); /* call 0x003E5C50 */

loc_003DF978: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    xmm0 = xmm0 * xmm4; /* mulss */
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_003DF987: ;
    PUSH32(esp, ebx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_003DF997: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_003DF99D: ;
    esp = esp + 0x1C;
    if (TEST_NZ(eax, eax)) goto loc_003DF9B1; /* jne: not equal / not zero */

loc_003DF9A4: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003DF9AB: ;
    xmm3 = MEMF(esp + 0x28); /* movss */

loc_003DF9B1: ;
    MEMF(ebp) = xmm3; /* movss */
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003DF9D0
 * Original: 0x003DF9D0 - 0x003DFBC3 (499 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DF9D0(void)
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

loc_003DF9D0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x34);
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
    eax = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x38);
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 8); /* mulss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 4); /* mulss */
    esi = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(ecx); /* mulss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = ebx;
    edx = edi;
    PUSH32(esp, 0); sub_003DFE00(); /* call 0x003DFE00 */

loc_003DFA52: ;
    edi = eax;
    esp = esp + 0x14;
    if (TEST_Z(edi, edi)) goto loc_003DFBBA; /* je: equal / zero */

loc_003DFA5F: ;
    esi = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    ebp = 2;
    /* nop */

loc_003DFA70: ;
    xmm3 = MEMF(esi + 8); /* movss */
    xmm3 = xmm3 * MEMF(ebx + 8); /* mulss */
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 * MEMF(esi); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 * MEMF(ebx + 4); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003DFBAF; /* jbe: below or equal (unsigned <=) */

loc_003DFAA0: ;
    MEM32(esp + 0x38) = esi;
    edx = MEM32(esp + 0x38);
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
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    eax = esp + 0x28;
    xmm0 = xmm0 * xmm3; /* mulss */
    MEM32(esp + 0x1C) = esi;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x38) = eax;
    xmm0 = MEMF(esp + 0x20); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x28;
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x50);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x50);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x50);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0x24) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003DFBAF; /* ja: above (unsigned >) */

loc_003DFBA8: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003DFBAF: ;
    esi = esi + 0xC;
    ebp--;
    if ((ebp != 0)) goto loc_003DFA70; /* jne: not equal / not zero */

loc_003DFBB9: ;
    POP32(esp, ebp);

loc_003DFBBA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003DFBD0
 * Original: 0x003DFBD0 - 0x003DFDF7 (551 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFBD0(void)
{
    uint32_t ebp;
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003DFBD0: ;
    esp = esp - 0x2C;
    eax = esp + 0x14;
    PUSH32(esp, ebp);
    MEM32(esp + 4) = eax;
    ecx = MEM32(esp + 0x38);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x24;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x38);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0xC;
    MEM32(esp + 4) = edx;
    ecx = MEM32(esp + 0x34);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x4C);
    ebp = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_003DF9D0(); /* call 0x003DF9D0 */

loc_003DFC83: ;
    ecx = esp + 0x34;
    esp = esp + 0x1C;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x24;
    MEM32(esp + 8) = edx;
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0xC;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x34);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esi);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); sub_003DF9D0(); /* call 0x003DF9D0 */

loc_003DFD33: ;
    ecx = MEM32(esp + 0x20);
    ecx = ecx | eax;
    edx = esp + 0x34;
    esp = esp + 0x1C;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x24;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x38);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0xC;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x34);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esi);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0); sub_003DF9D0(); /* call 0x003DF9D0 */

loc_003DFDE9: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 0x1C;
    eax = eax | ecx;
    POP32(esp, ebp);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_003DFE00
 * Original: 0x003DFE00 - 0x003DFEEB (235 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFE00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_003DFE00: ;
    xmm4 = MEMF(esp + 0xC); /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x10); /* subss */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) { sub_003DFEEB(); return; } /* ja: above (unsigned >) */

loc_003DFE33: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm3; /* movss */
    if ((xmm0 < xmm3)) { sub_003DFEEB(); return; } /* jb: below (unsigned <) */

loc_003DFE94: ;
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 < xmm3)) { sub_003DFEEB(); return; } /* jb: below (unsigned <) */

loc_003DFE9D: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * MEMF(ecx); /* mulss */
    xmm0 = xmm0 + MEMF(edx); /* addss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(edx + 4); /* addss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    PUSH32(esp, ebx);
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(edx + 8); /* addss */
    ebx = eax;
    MEMF(eax + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003DFEDA: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi) = xmm0; /* movss */
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003DFEF0
 * Original: 0x003DFEF0 - 0x003E0148 (600 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003DFEF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003DFEF0: ;
    esp = esp - 0x1C;
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 * MEMF(edi + 8); /* mulss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 * MEMF(esi + 8); /* mulss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * MEMF(edi + 8); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * MEMF(esi + 8); /* mulss */
    edx = MEM32(esp + 4);
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(esi + 4); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 * MEMF(esi); /* mulss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 8);
    xmm5 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    /* comiss xmm4, xmm2 - sets EFLAGS */
    xmm3 = xmm2; /* movaps */
    MEMF(esp) = xmm2; /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    if ((xmm4 <= xmm2)) goto loc_003E006B; /* jbe: below or equal (unsigned <=) */

loc_003DFFAD: ;
    /* comiss xmm2, MEMF(0x649324) - sets EFLAGS */
    if ((xmm2 > MEMF(0x649324))) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003DFFBA: ;
    xmm4 = MEMF(ecx + 8); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 > xmm3)) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003DFFE5: ;
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 > xmm4)) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003DFFEA: ;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0); sub_003E1E60(); /* call 0x003E1E60 */

loc_003DFFF4: ;
    xmm0 = MEMF(esi); /* movss */
    xmm5 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm6 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * MEMF(esi + 8); /* mulss */
    esp = esp + 4;
    xmm0 = xmm0 + xmm7; /* addss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003E002F: ;
    xmm0 = xmm0 + xmm4; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003E0038: ;
    xmm3 = MEMF(edi + 4); /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(edi + 8); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x20); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    /* comiss xmm2, xmm3 - sets EFLAGS */
    if ((xmm2 <= xmm3)) goto loc_003E0127; /* jbe: below or equal (unsigned <=) */

loc_003E0065: ;
    eax = 0; /* xor self */
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_003E006B: ;
    xmm4 = MEMF(0x649284); /* movss */
    /* comiss xmm4, xmm2 - sets EFLAGS */
    if ((xmm4 > xmm2)) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003E0078: ;
    xmm4 = MEMF(ecx + 8); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    if ((xmm3 > xmm4)) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003E009F: ;
    /* comiss xmm4, xmm2 - sets EFLAGS */
    if ((xmm4 > xmm2)) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003E00A4: ;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0); sub_003E1E60(); /* call 0x003E1E60 */

loc_003E00AE: ;
    xmm0 = MEMF(esi); /* movss */
    xmm5 = MEMF(esp + 8); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm6 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * MEMF(esi + 8); /* mulss */
    esp = esp + 4;
    xmm0 = xmm0 + xmm7; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003E00ED: ;
    xmm0 = xmm0 + xmm4; /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003E00FA: ;
    xmm3 = MEMF(edi + 4); /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm1 = xmm1 * MEMF(edi + 8); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x20); /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 > xmm2)) goto loc_003E0065; /* ja: above (unsigned >) */

loc_003E0127: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E5C50(); /* call 0x003E5C50 */

loc_003E0130: ;
    ecx = MEM32(esp + 0x28);
    xmm0 = xmm0 * xmm3; /* mulss */
    esp = esp + 4;
    MEMF(ecx) = xmm0; /* movss */
    eax = 1;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0150
 * Original: 0x003E0150 - 0x003E08C9 (1913 bytes, 484 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E0150: ;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x8C);
    eax = 1;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x98);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x24;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x98);
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x98);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x94);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x40;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x9C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x94);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x34;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x8C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x94);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x7C) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x40); /* movss */
    eax = MEM32(esp + 0x7C);
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm3 = MEMF(esp + 0x3C); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm5 = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    edx = MEM32(esp + 0x84);
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    ecx = MEM32(esp + 0x80);
    MEM32(esp + 0x68) = ecx;
    xmm0 = xmm0 * MEMF(esp + 0x68); /* mulss */
    MEM32(esp + 0x6C) = edx;
    xmm3 = xmm3 * MEMF(esp + 0x6C); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEM32(esp + 0x64) = eax;
    xmm0 = xmm0 * MEMF(esp + 0x64); /* mulss */
    eax = esp + 0x64;
    xmm3 = xmm3 + xmm0; /* addss */
    xmm5 = xmm5 * xmm5; /* mulss */
    MEM32(esp + 0xC) = eax;
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
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x648D24); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_003E08C9(); return; } /* ja: above (unsigned >) */

loc_003E031C: ;
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_003E08C9(); return; } /* ja: above (unsigned >) */

loc_003E0330: ;
    ecx = esp + 0x34;
    MEM32(esp + 0xC) = ecx;
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
    MEMF(esp + 0x1C) = xmm1; /* movss */
    /* comiss xmm5, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm5 < MEMF(esp + 0x1C))) goto loc_003E0384; /* jb: below (unsigned <) */

loc_003E0368: ;
    edx = MEM32(ebx);
    MEM32(edi) = edx;
    eax = MEM32(ebx + 4);
    POP32(esp, esi);
    MEM32(edi + 4) = eax;
    ecx = MEM32(ebx + 8);
    POP32(esp, ebp);
    MEM32(edi + 8) = ecx;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_003E0384: ;
    xmm6 = MEMF(esp + 0x3C); /* movss */
    xmm6 = xmm6 * MEMF(esp + 0x30); /* mulss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    edx = esp + 0x28;
    xmm6 = xmm6 + xmm0; /* addss */
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
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm4 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 < xmm4)) goto loc_003E042B; /* jb: below (unsigned <) */

loc_003E03EC: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003E0403: ;
    esp = esp + 8;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 < xmm0)) goto loc_003E04FF; /* jb: below (unsigned <) */

loc_003E040F: ;
    edx = MEM32(esi);
    MEM32(edi) = edx;
    eax = MEM32(esi + 4);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 8) = ecx;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_003E042B: ;
    /* comiss xmm6, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm6 <= MEMF(0x648CF8))) goto loc_003E04FF; /* jbe: below or equal (unsigned <=) */

loc_003E0438: ;
    edx = esp + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    xmm0 = xmm4; /* movaps */
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_003E044A: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x60); /* subss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x64); /* subss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    ecx = esp + 0x54;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x68); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2040(); /* call 0x003E2040 */

loc_003E0496: ;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    esp = esp + 0xC;
    xmm1 = xmm1 * xmm5; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003E04FF; /* jb: below (unsigned <) */

loc_003E04A9: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E5C50(); /* call 0x003E5C50 */

loc_003E04B3: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x2C); /* mulss */
    xmm1 = xmm1 + MEMF(ebx); /* addss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 4); /* addss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */

loc_003E04E2: ;
    esp = esp + 4;
    POP32(esp, esi);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 8); /* addss */
    POP32(esp, ebp);
    MEMF(edi + 8) = xmm1; /* movss */
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_003E04FF: ;
    xmm4 = MEMF(esp + 0x38); /* movss */
    xmm4 = xmm4 * MEMF(esp + 0x44); /* mulss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x48); /* mulss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    xmm4 = xmm4 + xmm0; /* addss */
    PUSH32(esp, 0); sub_003E2040(); /* call 0x003E2040 */

loc_003E0535: ;
    xmm7 = xmm0; /* movaps */
    esp = esp + 4;
    /* comiss xmm4, xmm7 - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm7; /* movss */
    if ((xmm4 < xmm7)) goto loc_003E0584; /* jb: below (unsigned <) */

loc_003E0546: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003E055B: ;
    esp = esp + 8;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 < xmm0)) goto loc_003E0640; /* jb: below (unsigned <) */

loc_003E0567: ;
    eax = MEM32(ebp);
    MEM32(edi) = eax;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    MEM32(edi + 4) = ecx;
    edx = MEM32(ebp + 8);
    POP32(esp, ebp);
    MEM32(edi + 8) = edx;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_003E0584: ;
    /* comiss xmm4, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm4 <= MEMF(0x648CF8))) goto loc_003E0640; /* jbe: below or equal (unsigned <=) */

loc_003E0591: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_003E05A3: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x60); /* subss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x64); /* subss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    edx = esp + 0x54;
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x68); /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2040(); /* call 0x003E2040 */

loc_003E05EF: ;
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    esp = esp + 0xC;
    xmm1 = xmm1 * xmm5; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003E0640; /* jb: below (unsigned <) */

loc_003E0602: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E5C50(); /* call 0x003E5C50 */

loc_003E060C: ;
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x44); /* mulss */
    xmm1 = xmm1 + MEMF(ebx); /* addss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebx + 4); /* addss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    goto loc_003E04E2;

loc_003E0640: ;
    ecx = esp + 0x28;
    edx = esp + 0x40;
    eax = esp + 0x70;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x24);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2040(); /* call 0x003E2040 */

loc_003E0689: ;
    xmm1 = MEMF(esp + 0x48); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x30); /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x4C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x44); /* mulss */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm4 = xmm4 + MEMF(esp + 0x10); /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    esp = esp + 4;
    xmm4 = xmm4 - xmm0; /* subss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    MEMF(esp + 0x24) = xmm7; /* movss */
    if ((xmm4 < xmm7)) goto loc_003E0718; /* jb: below (unsigned <) */

loc_003E06D4: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003E0846; /* je: equal / zero */

loc_003E06E0: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003E06EF: ;
    esp = esp + 8;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 < xmm0)) goto loc_003E0846; /* jb: below (unsigned <) */

loc_003E06FB: ;
    ecx = MEM32(ebp);
    MEM32(edi) = ecx;
    edx = MEM32(ebp + 4);
    POP32(esp, esi);
    MEM32(edi + 4) = edx;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    MEM32(edi + 8) = eax;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_003E0718: ;
    xmm6 = 0.0f; /* xorps self = zero */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 <= xmm4)) goto loc_003E0763; /* jbe: below or equal (unsigned <=) */

loc_003E0720: ;
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003E0849; /* je: equal / zero */

loc_003E072C: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1FD0(); /* call 0x003E1FD0 */

loc_003E073B: ;
    esp = esp + 8;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 < xmm0)) goto loc_003E0849; /* jb: below (unsigned <) */

loc_003E0747: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 8) = edx;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_003E0763: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2070(); /* call 0x003E2070 */

loc_003E0777: ;
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    xmm0 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_003E1FA0(); /* call 0x003E1FA0 */

loc_003E0787: ;
    xmm0 = MEMF(esp + 0x84); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x6C); /* subss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x70); /* subss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x8C); /* movss */
    edx = esp + 0x60;
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - MEMF(esp + 0x74); /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2040(); /* call 0x003E2040 */

loc_003E07DC: ;
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    esp = esp + 0x18;
    xmm1 = xmm1 * xmm5; /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_003E0849; /* jb: below (unsigned <) */

loc_003E07EF: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E5C50(); /* call 0x003E5C50 */

loc_003E07F9: ;
    xmm1 = MEMF(esp + 0x74); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x78); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x7C); /* movss */
    esp = esp + 4;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 8); /* addss */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(edi + 8) = xmm1; /* movss */
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

loc_003E0846: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_003E0849: ;
    xmm3 = xmm3 / MEMF(esp + 0x18); /* divss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x64); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x68); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x6C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x3C); /* addss */
    esi = esp + 0x64;
    eax = esp + 0x40;
    ecx = esp + 0x28;
    edx = esp + 0x4C;
    MEMF(esp + 0x54) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E0B40(); /* call 0x003E0B40 */

loc_003E08AC: ;
    if (TEST_Z(eax, eax)) { sub_003E08C9(); return; } /* je: equal / zero */

loc_003E08B0: ;
    PUSH32(esp, edi);
    ecx = edx;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1E30(); /* call 0x003E1E30 */

loc_003E08BA: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_003E08E0
 * Original: 0x003E08E0 - 0x003E0901 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E08E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E08E0: ;
    xmm2 = MEMF(ecx); /* movss */
    xmm1 = MEMF(edx); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    xmm3 = MEMF(eax); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    if ((xmm2 <= xmm1)) { sub_003E0901(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E08F4: ;
    xmm1 = xmm1 - xmm2; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    g_seh_ebp = ebp; sub_003E0916(); return; /* tail jmp 0x003E0916 */

}

/**
 * sub_003E09A0
 * Original: 0x003E09A0 - 0x003E0B36 (406 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E09A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003E09A0: ;
    esp = esp - 0x14;
    xmm4 = MEMF(eax); /* movss */
    xmm5 = MEMF(eax + 4); /* movss */
    xmm3 = MEMF(eax + 8); /* movss */
    eax = esp + 8;
    xmm4 = xmm4 + xmm0; /* addss */
    xmm5 = xmm5 + xmm0; /* addss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm6 = MEMF(esp + 0x10); /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm7 = MEMF(esi + 0x20); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm6 = MEMF(esi + 0x18); /* movss */
    xmm6 = xmm6 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi + 0x1C); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm6 = MEMF(esi + 4); /* movss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm2 = MEMF(esi + 8); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x10); /* mulss */
    xmm6 = xmm6 + xmm2; /* addss */
    xmm2 = MEMF(esi); /* movss */
    xmm2 = xmm2 * MEMF(esp + 8); /* mulss */
    xmm6 = xmm6 + xmm2; /* addss */
    MEMF(esp + 8) = xmm6; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 * MEMF(esp + 0xC); /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    ecx = esp + 8;
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEM32(esp + 4) = ecx;
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp) = xmm1; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, MEMF(esp) - sets EFLAGS */
    if ((xmm0 < MEMF(esp))) { sub_003E0B36(); return; } /* jb: below (unsigned <) */

loc_003E0B2D: ;
    eax = 1;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0B40
 * Original: 0x003E0B40 - 0x003E0C4A (266 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0B40(void)
{
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

loc_003E0B40: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fst */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003E0BEB; /* jbe: below or equal (unsigned <=) */

loc_003E0B59: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003E0BCB; /* jbe: below or equal (unsigned <=) */

loc_003E0B64: ;
    xmm5 = MEMF(edx + 4); /* movss */
    xmm6 = MEMF(edx); /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm3 = MEMF(eax); /* movss */
    xmm4 = MEMF(ecx + 4); /* movss */
    xmm1 = MEMF(ecx); /* movss */

loc_003E0B7F: ;
    xmm2 = xmm1; /* movaps */

loc_003E0B82: ;
    xmm7 = xmm4; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm2 = xmm2 - xmm7; /* subss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm1; /* addss */
    if ((xmm3 <= xmm2)) goto loc_003E0C34; /* jbe: below or equal (unsigned <=) */

loc_003E0BB8: ;
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 > xmm4)) goto loc_003E0BC7; /* ja: above (unsigned >) */

loc_003E0BBD: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 > xmm3)) goto loc_003E0BC7; /* ja: above (unsigned >) */

loc_003E0BC2: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003E0C43; /* jbe: below or equal (unsigned <=) */

loc_003E0BC7: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003E0BCB: ;
    xmm5 = MEMF(edx + 8); /* movss */
    xmm6 = MEMF(edx + 4); /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm4 = MEMF(ecx + 8); /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    goto loc_003E0B7F;

loc_003E0BEB: ;
    xmm1 = MEMF(ecx); /* movss */
    /* fstp st(0) */
    fp_push(MEMF(esi + 8)); /* fld float */
    xmm3 = MEMF(eax); /* movss */
    xmm6 = MEMF(edx); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp)); /* fld float */
    xmm2 = xmm1; /* movaps */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003E0C20; /* jbe: below or equal (unsigned <=) */

loc_003E0C0C: ;
    xmm5 = MEMF(edx + 4); /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm4 = MEMF(ecx + 4); /* movss */
    goto loc_003E0B82;

loc_003E0C20: ;
    xmm5 = MEMF(edx + 8); /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm4 = MEMF(ecx + 8); /* movss */
    goto loc_003E0B82;

loc_003E0C34: ;
    /* comiss xmm4, xmm2 - sets EFLAGS */
    if ((xmm4 > xmm2)) goto loc_003E0BC7; /* ja: above (unsigned >) */

loc_003E0C39: ;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 > xmm1)) goto loc_003E0BC7; /* ja: above (unsigned >) */

loc_003E0C3E: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_003E0BC7; /* ja: above (unsigned >) */

loc_003E0C43: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E0C50
 * Original: 0x003E0C50 - 0x003E0CD3 (131 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E0C50: ;
    eax = MEM32(esp + 4);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    PUSH32(esp, ebp);
    ebp = 2;
    SET_LO8(eax, 0); /* xor self */
    xmm1 = xmm1 - xmm2; /* subss */
    /* nop */

loc_003E0C70: ;
    edx = ZX8(LO8(ebx));
    ecx = edx;
    ecx = ecx << 4;
    xmm0 = MEMF(ecx + edi + 0x4C); /* movss */
    xmm0 = xmm0 * MEMF(esi + 4); /* mulss */
    xmm3 = MEMF(ecx + edi + 0x50); /* movss */
    xmm3 = xmm3 * MEMF(esi + 8); /* mulss */
    ecx = ecx + edi + 0x48;
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esi); /* movss */
    xmm3 = xmm3 * MEMF(ecx); /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 - MEMF(ecx + 0xC); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + edx * 4 + 8) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_003E0CBC; /* jbe: below or equal (unsigned <=) */

loc_003E0CB2: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    ebp = 1;
    if ((xmm0 > xmm2)) { sub_003E0CD3(); return; } /* ja: above (unsigned >) */

loc_003E0CBC: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_BE(LO8(ebx), 5)) goto loc_003E0CC5; /* jbe: below or equal (unsigned <=) */

loc_003E0CC3: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003E0CC5: ;
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_B(LO8(eax), 6)) goto loc_003E0C70; /* jb: below (unsigned <) */

loc_003E0CCB: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003E0CF0
 * Original: 0x003E0CF0 - 0x003E0DC1 (209 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E0CF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(ebp));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    edx = 0x80;
    MEM8(esp + 0xA) = 1;
    MEM8(esp + 0x18) = 0;
    ecx = ecx & eax;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    if (CMP_BE(LO8(ebx) & LO8(ebx), 0)) goto loc_003E0DAF; /* jbe: below or equal (unsigned <=) */

loc_003E0D1F: ;
    xmm2 = 0.0f; /* xorps self = zero */

loc_003E0D22: ;
    SET_LO8(eax, MEM8(edi));
    (void)0; /* test LO8(edx), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xB) = LO8(eax);
    if (TEST_Z(LO8(edx), LO8(eax))) goto loc_003E0D87; /* je: equal / zero */

loc_003E0D2C: ;
    eax = ZX8(LO8(ecx));
    eax = eax << 4;
    eax = eax + MEM32(esp + 0x10);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 * MEMF(esi + 8); /* mulss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * MEMF(esi + 4); /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * MEMF(esi); /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm0 = xmm0 - MEMF(eax + 0xC); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_003E0DB8; /* ja: above (unsigned >) */

loc_003E0D64: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 < xmm0)) goto loc_003E0D82; /* jb: below (unsigned <) */

loc_003E0D70: ;
    SET_LO8(ebx, MEM8(esp + 0xB));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    SET_LO8(ebx, MEM8(esp + 0x14));
    MEM8(edi) = LO8(eax);
    goto loc_003E0D87;

loc_003E0D82: ;
    MEM8(esp + 0xA) = 0;

loc_003E0D87: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003E0D93; /* jne: not equal / not zero */

loc_003E0D8D: ;
    SET_LO8(ecx, 0); /* xor self */
    SET_LO8(edx, 0x80);
    goto loc_003E0D95;

loc_003E0D93: ;
    SET_LO8(edx, LO8(edx) >> 1);

loc_003E0D95: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 0x18) = LO8(eax);
    if (CMP_B(LO8(eax), LO8(ebx))) goto loc_003E0D22; /* jb: below (unsigned <) */

loc_003E0DA7: ;
    SET_LO8(eax, MEM8(esp + 0xA));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003E0DC1(); return; } /* je: equal / zero */

loc_003E0DAF: ;
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003E0DB8: ;
    MEM8(ebp) = LO8(ecx);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E0DD0
 * Original: 0x003E0DD0 - 0x003E0DFF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm3, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E0DD0: ;
    PUSH32(esp, ecx);
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edi));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM8(esp + 0xF) = 0;
    eax = ZX8(LO8(ebx));
    eax = eax << 4;
    /* comiss xmm3, MEMF(eax + ebp + 0x48) - sets EFLAGS */
    eax = eax + ebp + 0x48;
    if ((xmm3 <= MEMF(eax + ebp + 0x48))) { sub_003E0DFF(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E0DF5: ;
    xmm5 = MEMF(ecx); /* movss */
    xmm6 = MEMF(edx); /* movss */
    g_seh_ebp = ebp; sub_003E0E07(); return; /* tail jmp 0x003E0E07 */

}

/**
 * sub_003E0EE0
 * Original: 0x003E0EE0 - 0x003E1047 (359 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E0EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E0EE0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x18);
    eax = ZX8(MEM8(eax));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    edx = 0x80;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    MEM32(esp + 0xC) = ebp;
    MEM8(esp + 0xA) = 0;
    ecx = ecx & eax;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    if (CMP_BE(LO8(ebx) & LO8(ebx), 0)) goto loc_003E103C; /* jbe: below or equal (unsigned <=) */

loc_003E0F10: ;
    xmm3 = 0.0f; /* xorps self = zero */

loc_003E0F13: ;
    eax = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(eax));
    (void)0; /* test LO8(edx), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xB) = LO8(eax);
    if (TEST_Z(LO8(edx), LO8(eax))) goto loc_003E1011; /* je: equal / zero */

loc_003E0F25: ;
    ebp = MEM32(esp + 0x14);
    eax = ZX8(LO8(ecx));
    eax = eax << 4;
    eax = eax + ebp;
    /* comiss xmm3, MEMF(eax) - sets EFLAGS */
    if ((xmm3 <= MEMF(eax))) goto loc_003E0F40; /* jbe: below or equal (unsigned <=) */

loc_003E0F36: ;
    xmm5 = MEMF(esi); /* movss */
    xmm6 = MEMF(edi); /* movss */
    goto loc_003E0F48;

loc_003E0F40: ;
    xmm5 = MEMF(edi); /* movss */
    xmm6 = MEMF(esi); /* movss */

loc_003E0F48: ;
    /* comiss xmm3, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm3 <= MEMF(eax + 4))) goto loc_003E0F5A; /* jbe: below or equal (unsigned <=) */

loc_003E0F4E: ;
    xmm2 = MEMF(esi + 4); /* movss */
    xmm4 = MEMF(edi + 4); /* movss */
    goto loc_003E0F64;

loc_003E0F5A: ;
    xmm2 = MEMF(edi + 4); /* movss */
    xmm4 = MEMF(esi + 4); /* movss */

loc_003E0F64: ;
    /* comiss xmm3, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm3 <= MEMF(eax + 8))) goto loc_003E0F76; /* jbe: below or equal (unsigned <=) */

loc_003E0F6A: ;
    xmm0 = MEMF(esi + 8); /* movss */
    xmm1 = MEMF(edi + 8); /* movss */
    goto loc_003E0F80;

loc_003E0F76: ;
    xmm0 = MEMF(edi + 8); /* movss */
    xmm1 = MEMF(esi + 8); /* movss */

loc_003E0F80: ;
    xmm7 = MEMF(eax + 4); /* movss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm2 = MEMF(eax); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm7 = xmm7 + xmm2; /* addss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm7 = xmm7 + xmm2; /* addss */
    xmm7 = xmm7 - MEMF(eax + 0xC); /* subss */
    /* comiss xmm7, xmm3 - sets EFLAGS */
    if ((xmm7 <= xmm3)) goto loc_003E0FB3; /* jbe: below or equal (unsigned <=) */

loc_003E0FAC: ;
    eax = 3;
    goto loc_003E0FE8;

loc_003E0FB3: ;
    xmm0 = MEMF(eax + 4); /* movss */
    xmm2 = MEMF(eax); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 - MEMF(eax + 0xC); /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_003E0FE6; /* jbe: below or equal (unsigned <=) */

loc_003E0FDF: ;
    eax = 1;
    goto loc_003E0FE8;

loc_003E0FE6: ;
    eax = 0; /* xor self */

loc_003E0FE8: ;
    ebp = MEM32(esp + 0xC);
    ebp = ebp | eax;
    (void)0; /* cmp LO16(ebp), 3 - flags set for next jcc */
    MEM32(esp + 0xC) = ebp;
    if (CMP_EQ(LO16(ebp), 3)) { sub_003E1047(); return; } /* je: equal / zero */

loc_003E0FF8: ;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_003E1011; /* jne: not equal / not zero */

loc_003E0FFD: ;
    SET_LO8(ebx, MEM8(esp + 0xB));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    ebx = MEM32(esp + 0x1C);
    MEM8(ebx) = LO8(eax);
    SET_LO8(ebx, MEM8(esp + 0x18));

loc_003E1011: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_003E101D; /* jne: not equal / not zero */

loc_003E1017: ;
    SET_LO8(ecx, 0); /* xor self */
    SET_LO8(edx, 0x80);
    goto loc_003E101F;

loc_003E101D: ;
    SET_LO8(edx, LO8(edx) >> 1);

loc_003E101F: ;
    SET_LO8(eax, MEM8(esp + 0xA));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 0xA) = LO8(eax);
    if (CMP_B(LO8(eax), LO8(ebx))) goto loc_003E0F13; /* jb: below (unsigned <) */

loc_003E1031: ;
    (void)0; /* cmp LO16(ebp), 1 - flags set for next jcc */
    eax = 1;
    if (CMP_EQ(LO16(ebp), 1)) goto loc_003E1041; /* je: equal / zero */

loc_003E103C: ;
    eax = 2;

loc_003E1041: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1060
 * Original: 0x003E1060 - 0x003E129D (573 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1060(void)
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

loc_003E1060: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x4C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0x20;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x64);
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x60);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x68);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x24;
    MEM32(esp + 0x14) = ecx;
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
    MEMF(esp + 0x10) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003E1134; /* jbe: below or equal (unsigned <=) */

loc_003E10E7: ;
    xmm0 = MEMF(ebx); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 > MEMF(esi))) goto loc_003E112A; /* ja: above (unsigned >) */

loc_003E10F0: ;
    xmm0 = MEMF(edi); /* movss */
    /* comiss xmm0, MEMF(ebp) - sets EFLAGS */
    if ((xmm0 > MEMF(ebp))) goto loc_003E112A; /* ja: above (unsigned >) */

loc_003E10FA: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 4))) goto loc_003E112A; /* ja: above (unsigned >) */

loc_003E1105: ;
    xmm0 = MEMF(edi + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    if ((xmm0 > MEMF(ebp + 4))) goto loc_003E112A; /* ja: above (unsigned >) */

loc_003E1110: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    /* comiss xmm0, MEMF(esi + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 8))) goto loc_003E112A; /* ja: above (unsigned >) */

loc_003E111B: ;
    xmm0 = MEMF(edi + 8); /* movss */
    /* comiss xmm0, MEMF(ebp + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 8))) goto loc_003E1290; /* jbe: below or equal (unsigned <=) */

loc_003E112A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_003E1134: ;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 - MEMF(edi); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 - MEMF(edi + 4); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 - MEMF(edi + 8); /* subss */
    edx = esp + 0x18;
    eax = esp + 0x48;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x64);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x18;
    edx = esp + 0x3C;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(esp + 0x58);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x18;
    ecx = esp + 0x30;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x5C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(esp + 0x60);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x6C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = esp + 0x40;
    edi = esp + 0x4C;
    esi = esp + 0x58;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    PUSH32(esp, 0); sub_003DD970(); /* call 0x003DD970 */

loc_003E124F: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_003E112A; /* je: equal / zero */

loc_003E125A: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x10))) goto loc_003E112A; /* ja: above (unsigned >) */

loc_003E126B: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) goto loc_003E112A; /* ja: above (unsigned >) */

loc_003E1274: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMD(0x648F30)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_003E112A; /* ja: above (unsigned >) */

loc_003E1288: ;
    eax = MEM32(esp + 0x6C);
    MEMF(eax) = xmm0; /* movss */

loc_003E1290: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E12A0
 * Original: 0x003E12A0 - 0x003E161D (893 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E12A0(void)
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

loc_003E12A0: ;
    esp = esp - 0x74;
    fp_push(MEMF(edi)); /* fld float */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, ebx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    PUSH32(esp, esi);
    fp_push(MEMF(0x648D24)); /* fld float */
    ebx = eax;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    esi = ecx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_003E161D(); return; } /* ja: above (unsigned >) */

loc_003E12D6: ;
    xmm0 = MEMF(0x648D24); /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) { sub_003E161D(); return; } /* ja: above (unsigned >) */

loc_003E12ED: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) { sub_003E161D(); return; } /* ja: above (unsigned >) */

loc_003E12F6: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    eax = edi;
    PUSH32(esp, 0); sub_003E1780(); /* call 0x003E1780 */

loc_003E1302: ;
    eax = esp + 0x50;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x84);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x94);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x5C;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x88);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x94);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x68;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x8C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x94);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x74;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x90);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x98);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    ecx = 4;
    eax = esi;
    PUSH32(esp, 0); sub_003E5CA0(); /* call 0x003E5CA0 */

loc_003E13EA: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x58); /* movss */
    eax = MEM32(esp + 0xA8);
    ecx = MEM32(esp + 0xA4);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x5C); /* mulss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x60); /* mulss */
    MEMF(esp + 0x60) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x64); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esp + 0x64) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x68); /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(esp + 0x68) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x6C); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEMF(esp + 0x74) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x78); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x7C) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x80); /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    edx = esp + 0x88;
    PUSH32(esp, edx);
    MEMF(esp + 0x84) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x88); /* movss */
    eax = esp + 0x80;
    PUSH32(esp, eax);
    xmm3 = xmm3 * xmm2; /* mulss */
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    MEMF(esp + 0x90) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x94); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    xmm0 = xmm0 * xmm1; /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    ecx = eax;
    PUSH32(esp, 0x3F800000);
    xmm0 = xmm0 * xmm2; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0xA4) = xmm3; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003DE990(); /* call 0x003DE990 */

loc_003E1515: ;
    ebp = eax;
    esp = esp + 0x30;
    if (TEST_Z(ebp, ebp)) goto loc_003E1614; /* je: equal / zero */

loc_003E1522: ;
    edx = MEM32(esp + 0xA0);
    xmm0 = MEMF(edx); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_003E1614; /* jbe: below or equal (unsigned <=) */

loc_003E153A: ;
    xmm0 = MEMF(esi + 0x18); /* movss */
    xmm3 = MEMF(esi + 4); /* movss */
    xmm6 = MEMF(esi + 0x10); /* movss */
    xmm7 = MEMF(esi + 0x1C); /* movss */
    xmm4 = MEMF(esi); /* movss */
    xmm5 = MEMF(esi + 0xC); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x20); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * MEMF(ebx); /* mulss */
    MEMF(ebx) = xmm0; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm1 = xmm1 * MEMF(ebx + 4); /* mulss */
    MEMF(ebx + 4) = xmm1; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 * MEMF(ebx + 8); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm6 = MEMF(ebx); /* movss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x4C); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm2 = xmm2 + xmm6; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x48); /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm6 = MEMF(ebx); /* movss */
    xmm6 = xmm6 * MEMF(esp + 0x44); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ebx); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    eax = ebx;
    MEMF(ebx) = xmm0; /* movss */
    MEMF(ebx + 4) = xmm2; /* movss */
    MEMF(ebx + 8) = xmm3; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E1614: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
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
 * sub_003E1780
 * Original: 0x003E1780 - 0x003E17FA (122 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1780(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003E1780: ;
    esp = esp - 8;
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * MEMF(eax + 4); /* mulss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm4 = MEMF(eax + 8); /* movss */
    xmm5 = MEMF(eax + 8); /* movss */
    xmm4 = xmm4 * MEMF(eax + 4); /* mulss */
    xmm5 = xmm5 * MEMF(eax); /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(ecx + 4) = xmm1; /* movss */
    MEMF(ecx + 8) = xmm0; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1800
 * Original: 0x003E1800 - 0x003E180E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1800(void)
{

loc_003E1800: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1810
 * Original: 0x003E1810 - 0x003E182E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1810(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E1810: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_003E181C; /* je: equal / zero */

loc_003E1815: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_003E1815; /* jne: not equal / not zero */

loc_003E181C: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 4) = edx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_003E182D; /* je: equal / zero */

loc_003E182B: ;
    MEM32(ecx) = edx;

loc_003E182D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1830
 * Original: 0x003E1830 - 0x003E185A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1830(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E1830: ;
    ecx = eax + 4;
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_003E184C; /* je: equal / zero */

loc_003E1839: ;
    /* nop */

loc_003E1840: ;
    eax = MEM32(ecx);
    esi = MEM32(eax + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = eax + 4;
    if (TEST_NZ(esi, esi)) goto loc_003E1840; /* jne: not equal / not zero */

loc_003E184C: ;
    MEM32(eax + 4) = edx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E1860
 * Original: 0x003E1860 - 0x003E187C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1860(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E1860: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_003E186E; /* je: equal / zero */

loc_003E186C: ;
    MEM32(ecx) = edx;

loc_003E186E: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1880
 * Original: 0x003E1880 - 0x003E1886 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1880(void)
{

loc_003E1880: ;
    ecx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1890
 * Original: 0x003E1890 - 0x003E18F2 (98 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E1890: ;
    ecx = MEM32(eax);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_003E18A8; /* je: equal / zero */

loc_003E189D: ;
    /* nop */

loc_003E18A0: ;
    eax = ecx;
    ecx = MEM32(eax);
    if (TEST_NZ(ecx, ecx)) goto loc_003E18A0; /* jne: not equal / not zero */

loc_003E18A8: ;
    esi = MEM32(eax + 4);
    if (TEST_Z(esi, esi)) goto loc_003E18DB; /* je: equal / zero */

loc_003E18AF: ;
    edi = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x1C), _icall_esp); /* indirect call */
    }

loc_003E18B9: ;
    esp = esp + 0xC;
    if (CMP_G(eax & eax, 0)) goto loc_003E18D7; /* jg: greater (signed >) */

loc_003E18C0: ;
    if (TEST_Z(edi, edi)) goto loc_003E18DD; /* je: equal / zero */

loc_003E18C4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    esi = edi;
    edi = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x1C), _icall_esp); /* indirect call */
    }

loc_003E18D0: ;
    esp = esp + 0xC;
    if (CMP_LE(eax & eax, 0)) goto loc_003E18C0; /* jle: less or equal (signed <=) */

loc_003E18D7: ;
    esi = MEM32(esi);
    goto loc_003E18DD;

loc_003E18DB: ;
    esi = eax;

loc_003E18DD: ;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ebx;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_003E18F1; /* je: equal / zero */

loc_003E18EF: ;
    MEM32(eax) = ebx;

loc_003E18F1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1900
 * Original: 0x003E1900 - 0x003E193B (59 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E1900: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(MEM32(esi), 0)) goto loc_003E1910; /* jne: not equal / not zero */

loc_003E190D: ;
    esi = MEM32(esi + 4);

loc_003E1910: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp) = 0;
    if (TEST_Z(esi, esi)) goto loc_003E1938; /* je: equal / zero */

loc_003E191B: ;
    goto loc_003E1920;

    /* nop */

loc_003E1920: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_003E1924: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003E1935; /* jne: not equal / not zero */

loc_003E192B: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_003E1920; /* jne: not equal / not zero */

loc_003E1932: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003E1935: ;
    MEM32(ebp) = esi;

loc_003E1938: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E1940
 * Original: 0x003E1940 - 0x003E1A3C (252 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E1940: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = eax;
    MEM32(0x84B570) = 1;
    esi = ebx;
    if (CMP_GE(edi & edi, 0)) goto loc_003E1979; /* jge: greater or equal (signed >=) */

loc_003E195B: ;
    ecx = ecx | 0xFFFFFFFFu;
    ecx = ecx - edi;
    eax = 0xBC46147;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = ecx - edx;
    ecx = ecx >> 1;
    ecx = ecx + edx;
    ecx = ecx >> 0xE;
    ecx++;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x7A60);
    ecx = ecx + edi;

loc_003E1979: ;
    if (CMP_LE(ecx, 0x7A60)) goto loc_003E19A6; /* jle: less or equal (signed <=) */

loc_003E1981: ;
    edi = ecx + -31329;
    eax = 0xBC46147;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edi - edx;
    edi = edi >> 1;
    edi = edi + edx;
    edi = edi >> 0xE;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x7A60);
    eax = 0xFFFF85A0u;
    eax = eax - edi;
    ecx = ecx + eax;

loc_003E19A6: ;
    if (CMP_GE(ebx & ebx, 0)) goto loc_003E19C4; /* jge: greater or equal (signed >=) */

loc_003E19AA: ;
    edx = edx | 0xFFFFFFFFu;
    edx = edx - ebx;
    eax = 0x8B6F0481u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = edx;
    esi = esi >> 0xE;
    esi++;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x7581);
    esi = esi + ebx;

loc_003E19C4: ;
    if (CMP_LE(esi, 0x7581)) goto loc_003E19EB; /* jle: less or equal (signed <=) */

loc_003E19CC: ;
    edx = esi + -30082;
    eax = 0x8B6F0481u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 0xE;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x7581);
    eax = 0xFFFF8A7Fu;
    eax = eax - edx;
    esi = esi + eax;

loc_003E19EB: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB1;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm3 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D10); /* movss */
    MEM32(esp + 0x18) = 0x8818C4;
    xmm0 = xmm3; /* movaps */
    xmm2 = xmm1; /* movaps */
    MEM32(esp + 0x14) = 3;
    ebp = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esi;
    esi = 0xA9;
    ebp = ebp + 2;
    ecx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = 0xB2;
    ecx = ecx + 2;
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = edx;
    esi++;
    g_seh_ebp = ebp; sub_003E1A54(); return; /* tail jmp 0x003E1A54 */

}

/**
 * sub_003E1D70
 * Original: 0x003E1D70 - 0x003E1E23 (179 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1D70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_003E1D70: ;
    eax = MEM32(0x84B570);
    if (TEST_NZ(eax, eax)) goto loc_003E1D88; /* jne: not equal / not zero */

loc_003E1D79: ;
    eax = 0x249D;
    ecx = 0x70A;
    PUSH32(esp, 0); sub_003E1940(); /* call 0x003E1940 */

loc_003E1D88: ;
    eax = MEM32(0x881A54);
    ecx = MEM32(0x881A58);
    xmm0 = MEMF(eax * 4 + 0x8818C0); /* movss */
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x8818C0); /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm3 = MEMF(0x648D14); /* movss */
    if ((xmm2 <= xmm0)) goto loc_003E1DB9; /* jbe: below or equal (unsigned <=) */

loc_003E1DB5: ;
    xmm0 = xmm0 + xmm3; /* addss */

loc_003E1DB9: ;
    MEMF(eax * 4 + 0x8818C0) = xmm0; /* movss */
    MEM32(0x881A54) = MEM32(0x881A54) - 1;
    eax = 0x61;
    if ((MEM32(0x881A54) != 0)) goto loc_003E1DD4; /* jne: not equal / not zero */

loc_003E1DCF: ;
    MEM32(0x881A54) = eax;

loc_003E1DD4: ;
    MEM32(0x881A58) = MEM32(0x881A58) - 1;
    if ((MEM32(0x881A58) != 0)) goto loc_003E1DE1; /* jne: not equal / not zero */

loc_003E1DDC: ;
    MEM32(0x881A58) = eax;

loc_003E1DE1: ;
    xmm1 = MEMF(0x881A48); /* movss */
    xmm1 = xmm1 - MEMF(0x881A4C); /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEMF(0x881A48) = xmm1; /* movss */
    if ((xmm2 <= xmm1)) goto loc_003E1E15; /* jbe: below or equal (unsigned <=) */

loc_003E1DFE: ;
    xmm4 = MEMF(0x881A50); /* movss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm1 = xmm4; /* movaps */
    MEMF(0x881A48) = xmm1; /* movss */

loc_003E1E15: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_003E1E22; /* jbe: below or equal (unsigned <=) */

loc_003E1E1E: ;
    xmm0 = xmm0 + xmm3; /* addss */

loc_003E1E22: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1E30
 * Original: 0x003E1E30 - 0x003E1E58 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1E30(void)
{
    float xmm0, xmm1;

loc_003E1E30: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esp += 4; return; /* ret */

}

/**
 * sub_003E1E60
 * Original: 0x003E1E60 - 0x003E1ED3 (115 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1E60(void)
{
    float xmm0, xmm1;

loc_003E1E60: ;
    esp = esp - 0xC;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 4); /* mulss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 * MEMF(eax + 4); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * MEMF(eax + 8); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 4); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * MEMF(eax + 4); /* mulss */
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    MEM32(edx) = eax;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    eax = MEM32(esp + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1EE0
 * Original: 0x003E1EE0 - 0x003E1F4D (109 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1EE0(void)
{
    float xmm0, xmm1, xmm2;

loc_003E1EE0: ;
    esp = esp - 0x14;
    eax = esp + 8;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 8;
    MEM32(esp) = ecx;
    edx = MEM32(esp);
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
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003E1F50
 * Original: 0x003E1F50 - 0x003E1F5C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1F50(void)
{

loc_003E1F50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E1F5A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E1F60
 * Original: 0x003E1F60 - 0x003E1F94 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1F60(void)
{
    float xmm0, xmm1, xmm2;

loc_003E1F60: ;
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
    xmm0 = MEMF(esp); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E1FA0
 * Original: 0x003E1FA0 - 0x003E1FCC (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1FA0(void)
{
    float xmm0, xmm1;

loc_003E1FA0: ;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E1FD0
 * Original: 0x003E1FD0 - 0x003E2039 (105 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E1FD0(void)
{
    float xmm0, xmm1, xmm2;

loc_003E1FD0: ;
    esp = esp - 0x14;
    eax = esp + 8;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 8;
    MEM32(esp) = ecx;
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003E2040
 * Original: 0x003E2040 - 0x003E2070 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2040(void)
{
    float xmm0, xmm1, xmm2;

loc_003E2040: ;
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
    MEMF(esp) = xmm1; /* movss */
    xmm0 = MEMF(esp); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E2070
 * Original: 0x003E2070 - 0x003E2098 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2070(void)
{
    float xmm0, xmm1;

loc_003E2070: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esp += 4; return; /* ret */

}

/**
 * sub_003E20A0
 * Original: 0x003E20A0 - 0x003E20C0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E20A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E20A0: ;
    xmm1 = MEMF(edx); /* movss */
    xmm1 = xmm1 - MEMF(ecx); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    PUSH32(esp, esi);
    if ((xmm0 < xmm2)) { sub_003E20C0(); return; } /* jb: below (unsigned <) */

loc_003E20B9: ;
    esi = 1;
    g_seh_ebp = ebp; sub_003E20C2(); return; /* tail jmp 0x003E20C2 */

}

/**
 * sub_003E2110
 * Original: 0x003E2110 - 0x003E2201 (241 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2110(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003E2110: ;
    esp = esp - 0x30;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(ecx); /* subss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(ecx + 8); /* subss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    eax = esp + 0x18;
    PUSH32(esp, ebx);
    ebx = eax;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E2171: ;
    eax = esp + 0x28;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E217C: ;
    eax = ebx;
    ecx = esp + 0x1C;
    edx = esp + 0x10;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 4) = edx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x648CF8))) { sub_003E2201(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E21F1: ;
    eax = esp + 0x10;
    ebx = esi;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E21FC: ;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_003E2220
 * Original: 0x003E2220 - 0x003E2267 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2220(void)
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

loc_003E2220: ;
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
    MEMF(esp) = xmm1; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003E2267(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E2260: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E2270
 * Original: 0x003E2270 - 0x003E22B1 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2270(void)
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

loc_003E2270: ;
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
    MEMF(esp) = xmm1; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003E22B1(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E22AA: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E22C0
 * Original: 0x003E22C0 - 0x003E238C (204 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E22C0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003E22C0: ;
    esp = esp - 0x18;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    eax = esp;
    PUSH32(esp, ebx);
    ebx = eax;
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E22F6: ;
    eax = MEM32(esp + 0x20);
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E2303: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm5 = MEMF(esp + 0xC); /* movss */
    xmm6 = MEMF(esp + 8); /* movss */
    xmm7 = MEMF(esp + 4); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = MEMF(0x648CE0); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm2 = xmm2 - xmm6; /* subss */
    xmm1 = xmm1 - xmm5; /* subss */
    eax = esi;
    ebx = esi;
    MEMF(esi) = xmm3; /* movss */
    MEMF(esi + 4) = xmm2; /* movss */
    MEMF(esi + 8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E2387: ;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003E2390
 * Original: 0x003E2390 - 0x003E23AB (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2390(void)
{
    float xmm0;

loc_003E2390: ;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E23B0
 * Original: 0x003E23B0 - 0x003E23C2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E23B0(void)
{
    float xmm0;

loc_003E23B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E23D0
 * Original: 0x003E23D0 - 0x003E23FD (45 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E23D0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E23D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x84B574) = 1;
    MEM32(0x819B80) = edx;
    MEM32(0x8814C0) = 0;
    MEM32(0x8814C4) = 0x67;
    esi = 0x8818AC;
    g_seh_ebp = ebp; sub_003E2400(); return; /* tail jmp 0x003E2400 */

}

/**
 * sub_003E2480
 * Original: 0x003E2480 - 0x003E24FF (127 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2480(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E2480: ;
    eax = MEM32(0x84B574);
    if (TEST_NZ(eax, eax)) goto loc_003E2493; /* jne: not equal / not zero */

loc_003E2489: ;
    edx = 1;
    PUSH32(esp, 0); sub_003E23D0(); /* call 0x003E23D0 */

loc_003E2493: ;
    eax = MEM32(0x8814C0);
    ecx = MEM32(0x8814C4);
    edx = MEM32(ecx * 4 + 0x8814C8);
    MEM32(eax * 4 + 0x8814C8) = MEM32(eax * 4 + 0x8814C8) ^ edx;
    edx = MEM32(0x8814C0);
    PUSH32(esp, esi);
    esi = MEM32(edx * 4 + 0x8814C8);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx >> 0x1F);
    eax = ecx;
    eax = eax ^ esi;
    eax = eax - ecx;
    edx++;
    (void)0; /* cmp edx, 0xF9 - flags set for next jcc */
    MEM32(0x8814C0) = edx;
    POP32(esp, esi);
    if (CMP_NE(edx, 0xF9)) goto loc_003E24DF; /* jne: not equal / not zero */

loc_003E24D5: ;
    MEM32(0x8814C0) = 0;

loc_003E24DF: ;
    ecx = MEM32(0x8814C4);
    ecx++;
    (void)0; /* cmp ecx, 0xF9 - flags set for next jcc */
    MEM32(0x8814C4) = ecx;
    if (CMP_NE(ecx, 0xF9)) goto loc_003E24FE; /* jne: not equal / not zero */

loc_003E24F4: ;
    MEM32(0x8814C4) = 0;

loc_003E24FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E2500
 * Original: 0x003E2500 - 0x003E252C (44 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E2500: ;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = edx;
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    esi = eax;
    esi = esi - ecx;
    edi = edx;
    edi = edi - ebp - _cf; /* sbb */
    esi = esi + 1;
    edi = edi + 0 + _cf; /* adc */
    if (CMP_NE(esi, 1)) { sub_003E252C(); return; } /* jne: not equal / not zero */

loc_003E2522: ;
    if (TEST_NZ(edi, edi)) { sub_003E252C(); return; } /* jne: not equal / not zero */

loc_003E2526: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E2550
 * Original: 0x003E2550 - 0x003E25AB (91 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2550(void)
{
    float xmm0;

loc_003E2550: ;
    xmm0 = 0.0f; /* xorps self = zero */
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
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E25B0
 * Original: 0x003E25B0 - 0x003E25BD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E25B0(void)
{

loc_003E25B0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003E25BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E25C0
 * Original: 0x003E25C0 - 0x003E25EC (44 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E25C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E25C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_BE(ebx & ebx, 0)) goto loc_003E25E8; /* jbe: below or equal (unsigned <=) */

loc_003E25D1: ;
    PUSH32(esp, edi);
    edi = ecx;
    edi = edi - esi;

loc_003E25D6: ;
    PUSH32(esp, ebp);
    eax = edi + esi;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003E25E1: ;
    esi = esi + 0xC;
    ebx--;
    if ((ebx != 0)) goto loc_003E25D6; /* jne: not equal / not zero */

loc_003E25E7: ;
    POP32(esp, edi);

loc_003E25E8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E25F0
 * Original: 0x003E25F0 - 0x003E2633 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E25F0(void)
{
    float xmm1, xmm2, xmm3;

loc_003E25F0: ;
    eax = MEM32(esp + 8);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 4);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E2640
 * Original: 0x003E2640 - 0x003E267A (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E2640: ;
    eax = SX8(LO8(eax));
    eax = eax + 0xFFFFFFA8u;
    if (CMP_A(eax, 0x22)) goto loc_003E2679; /* ja: above (unsigned >) */

loc_003E264B: ;
    eax = ZX8(MEM8(eax + 0x3E268C));
    { uint32_t _jt = MEM32(eax * 4 + 0x3E267C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003E2659u) goto loc_003E2659;
    if (_jt == 0x003E2664u) goto loc_003E2664;
    if (_jt == 0x003E266Fu) goto loc_003E266F;
    if (_jt == 0x003E2679u) goto loc_003E2679;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003E2659: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042894D(); /* call 0x0042894D */

loc_003E2663: ;
    esp += 4; return; /* ret */

loc_003E2664: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004289C6(); /* call 0x004289C6 */

loc_003E266E: ;
    esp += 4; return; /* ret */

loc_003E266F: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428A3E(); /* call 0x00428A3E */

loc_003E2679: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E26B0
 * Original: 0x003E26B0 - 0x003E27B4 (260 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E26B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_003E26B0: ;
    if (CMP_EQ(eax, ecx)) goto loc_003E26FA; /* je: equal / zero */

loc_003E26B4: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0x2C);
    MEM32(ecx + 0x2C) = edx;

loc_003E26FA: ;
    xmm3 = MEMF(eax + 0x10); /* movss */
    xmm2 = MEMF(eax + 0x20); /* movss */
    xmm4 = MEMF(eax); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm3 = xmm3 + MEMF(eax + 0x30); /* addss */
    MEMF(ecx + 0x30) = xmm3; /* movss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm4 = MEMF(eax + 0x14); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(eax + 0x24); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm3 = xmm3 + MEMF(eax + 0x34); /* addss */
    MEMF(ecx + 0x34) = xmm3; /* movss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm4 = MEMF(eax + 0x18); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(eax + 0x28); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm3 = xmm3 + MEMF(eax + 0x38); /* addss */
    MEMF(ecx + 0x38) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(eax + 0x1C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(eax + 0x2C); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm3 = xmm3 + MEMF(eax + 0x3C); /* addss */
    MEMF(ecx + 0x3C) = xmm3; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E27C0
 * Original: 0x003E27C0 - 0x003E2809 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E27C0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003E27C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
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
    esp += 4; return; /* ret */

}

/**
 * sub_003E2810
 * Original: 0x003E2810 - 0x003E282F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2810(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E2810: ;
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) { sub_003E282F(); return; } /* jb: below (unsigned <) */

loc_003E2828: ;
    edx = 1;
    g_seh_ebp = ebp; sub_003E2831(); return; /* tail jmp 0x003E2831 */

}

/**
 * sub_003E2A30
 * Original: 0x003E2A30 - 0x003E2AD7 (167 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2A30(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003E2A30: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 - xmm1; /* subss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = xmm2 / xmm4; /* divss */
    xmm4 = xmm2; /* movaps */
    /* FPU: fptan  */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(0x648D34); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm5; /* movss */
    MEMF(eax + 0x38) = xmm2; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm1; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    /* fstp st(0) */
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fdivr st(1) */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E2AE0
 * Original: 0x003E2AE0 - 0x003E2BCC (236 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2AE0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_003E2AE0: ;
    xmm2 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(0x648CE0); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm4 = MEMF(esp + 8); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 / xmm0; /* divss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm6 = xmm1; /* movaps */
    MEMF(eax + 0x30) = xmm3; /* movss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm6 = xmm6 - xmm4; /* subss */
    xmm4 = MEMF(esp + 0x10); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 / xmm6; /* divss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 0x34) = xmm3; /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 - xmm1; /* subss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 / xmm5; /* divss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm1 = xmm1 * MEMF(0x648E1C); /* mulss */
    xmm5 = xmm5 - xmm3; /* subss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm6; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm5; /* movss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm2; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E2BD0
 * Original: 0x003E2BD0 - 0x003E2D30 (352 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2BD0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003E2BD0: ;
    esp = esp - 0x1C;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(eax + 0x2C); /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x24); /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * MEMF(eax + 0xC); /* mulss */
    xmm6 = xmm6 + MEMF(eax + 4); /* addss */
    xmm7 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x3C); /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x34); /* addss */
    xmm7 = xmm7 * MEMF(eax + 0x1C); /* mulss */
    xmm7 = xmm7 + MEMF(eax + 0x14); /* addss */
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x1C); /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x18); /* addss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm2 = xmm2 * MEMF(eax + 0x3C); /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x38); /* addss */
    xmm1 = xmm1 * MEMF(eax + 0x2C); /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x28); /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(eax + 0x1C); /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0x10); /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * MEMF(eax + 0x2C); /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x20); /* addss */
    xmm5 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(eax + 0xC); /* mulss */
    xmm0 = xmm0 + MEMF(eax); /* addss */
    xmm5 = xmm5 * MEMF(eax + 0x3C); /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x30); /* addss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x1C); /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x2C); /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x3C); /* movss */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    MEMF(ecx + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(ecx + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(ecx + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x10) = xmm3; /* movss */
    MEMF(ecx + 0x20) = xmm4; /* movss */
    MEMF(ecx + 0x30) = xmm5; /* movss */
    MEMF(ecx + 4) = xmm6; /* movss */
    MEMF(ecx + 0x14) = xmm7; /* movss */
    MEMF(ecx + 0x28) = xmm1; /* movss */
    MEMF(ecx + 0x2C) = xmm0; /* movss */
    MEMF(ecx + 0x3C) = xmm2; /* movss */
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003E2D30
 * Original: 0x003E2D30 - 0x003E2E57 (295 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2D30(void)
{
    float xmm0, xmm1;

loc_003E2D30: ;
    esp = esp - 8;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x10); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x18); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x20); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x24); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x28); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    xmm0 = MEMF(eax); /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 4)); /* sqrtss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 4)); /* sqrtss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E2E60
 * Original: 0x003E2E60 - 0x003E2F9B (315 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2E60(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003E2E60: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x18;
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    /* FPU: fsincos  */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    /* FPU: fsincos  */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fincstp  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: ffree st(1) */
    xmm0 = MEMF(esp); /* movss */
    xmm6 = MEMF(esp + 0xC); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm4 = MEMF(esp + 4); /* movss */
    xmm7 = MEMF(esp + 8); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm6 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(ecx + 0x28) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(ecx + 0x24) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(ecx + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEMF(ecx + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x1C) = xmm0; /* movss */
    MEMF(ecx + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    MEMF(ecx + 0x10) = xmm7; /* movss */
    MEMF(ecx + 0x20) = xmm1; /* movss */
    MEMF(ecx + 0x3C) = xmm0; /* movss */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E2FA0
 * Original: 0x003E2FA0 - 0x003E3168 (456 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E2FA0(void)
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

loc_003E2FA0: ;
    esp = esp - 0x18;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm4 = MEMF(esp + 0x10); /* movss */
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm7 = MEMF(esp); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 8); /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 4); /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(ecx + 4) = xmm3; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * MEMF(esp); /* mulss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    xmm3 = xmm3 * xmm7; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 - MEMF(esp + 0x14); /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(ecx + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm5 = xmm5 - xmm7; /* subss */
    xmm7 = MEMF(esp + 4); /* movss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    MEMF(ecx + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    MEMF(ecx + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    MEMF(esp + 0xC) = xmm7; /* movss */
    MEMF(ecx + 0x28) = xmm7; /* movss */
    xmm7 = MEMF(0x648D14); /* movss */
    MEMF(ecx + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ecx) = xmm2; /* movss */
    MEMF(ecx + 8) = xmm3; /* movss */
    MEMF(ecx + 0x14) = xmm6; /* movss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    MEMF(ecx + 0x20) = xmm4; /* movss */
    MEMF(ecx + 0x24) = xmm5; /* movss */
    if (1 /* jnp after test - parity */) goto loc_003E30ED; /* jnp: not parity */

loc_003E30CD: ;
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ecx) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(ecx + 4) = xmm2; /* movss */
    MEMF(ecx + 8) = xmm3; /* movss */

loc_003E30ED: ;
    xmm1 = MEMF(esp + 0x20); /* movss */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003E311D; /* jnp: not parity */

loc_003E30FC: ;
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(ecx + 0x10) = xmm2; /* movss */
    MEMF(ecx + 0x14) = xmm6; /* movss */
    MEMF(ecx + 0x18) = xmm0; /* movss */

loc_003E311D: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003E314D; /* jnp: not parity */

loc_003E312C: ;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 0x20) = xmm4; /* movss */
    MEMF(ecx + 0x24) = xmm5; /* movss */
    MEMF(ecx + 0x28) = xmm1; /* movss */

loc_003E314D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    MEMF(ecx + 0x1C) = xmm0; /* movss */
    MEMF(ecx + 0x2C) = xmm0; /* movss */
    MEMF(ecx + 0x3C) = xmm7; /* movss */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E3170
 * Original: 0x003E3170 - 0x003E31B6 (70 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E3170: ;
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0x10;
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_003E31B6(); return; } /* jnp: not parity */

loc_003E3187: ;
    MEMF(esp) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 4) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    ecx = esp;
    eax = edx;
    MEMF(esp + 8) = xmm3; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00428BB7(); /* call 0x00428BB7 */

loc_003E31B4: ;
    g_seh_ebp = ebp; sub_003E3205(); return; /* tail jmp 0x003E3205 */

}

/**
 * sub_003E32F0
 * Original: 0x003E32F0 - 0x003E3545 (597 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E32F0(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E32F0: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    eax = esp + 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x48);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x44);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x10;
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
    xmm0 = MEMF(0x648D34); /* movss */
    xmm0 = xmm0 / MEMF(esp + 8); /* divss */
    edx = ecx;
    eax = ecx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x44) = eax;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm2 = MEMF(edi + 4); /* movss */
    xmm3 = MEMF(edi + 8); /* movss */
    xmm4 = MEMF(edi); /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = MEMF(edi + 8); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    ecx = MEM32(esp + 0x34);
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    eax = MEM32(esp + 0x3C);
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x38) = xmm3; /* movss */
    edx = MEM32(esp + 0x38);
    eax = esp + 0x1C;
    ebx = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E3429: ;
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm3 = MEMF(esp + 0x14); /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    ecx = MEM32(esp + 0x34);
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    eax = MEM32(esp + 0x3C);
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x38) = xmm0; /* movss */
    edx = MEM32(esp + 0x38);
    eax = esp + 0x28;
    ebx = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E34AC: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x20) = xmm0; /* movss */
    ecx = MEM32(ebp);
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(ebp + 4);
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x34) = edx;
    eax = MEM32(ebp + 8);
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    MEMF(esi + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, ebp);
    MEM32(esi + 0x38) = eax;
    MEMF(esi + 0x3C) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_003E3550
 * Original: 0x003E3550 - 0x003E365F (271 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3550(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003E3550: ;
    esp = esp - 0x1C;
    xmm4 = MEMF(ecx + 0x30); /* movss */
    xmm5 = MEMF(ecx + 0x34); /* movss */
    xmm6 = MEMF(ecx + 0x38); /* movss */
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    xmm3 = MEMF(eax); /* movss */
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 8);
    xmm7 = MEMF(eax + 0x10); /* movss */
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x14);
    xmm1 = MEMF(eax + 4); /* movss */
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x24);
    xmm2 = MEMF(eax + 8); /* movss */
    MEM32(eax + 0x18) = edx;
    xmm0 = MEMF(ecx + 0x28); /* movss */
    MEMF(esp) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x20); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x24); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x18); /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(esp); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(eax + 0x30) = xmm7; /* movss */
    MEMF(eax + 0x38) = xmm3; /* movss */
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003E3660
 * Original: 0x003E3660 - 0x003E36AC (76 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003E3660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(ecx, edi)) { sub_003E36AC(); return; } /* jne: not equal / not zero */

loc_003E3671: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_003E3550(); /* call 0x003E3550 */

loc_003E367A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = 0x10;
    esi = eax;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E36E0
 * Original: 0x003E36E0 - 0x003E391C (572 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E36E0(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E36E0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    eax = esp + 8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    MEM32(esp + 0x38) = eax;
    ecx = MEM32(esp + 0x34);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x3C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0xC;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E3728: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm4 = MEMF(ebp); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(ebp + 4); /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(ebp + 8); /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    ecx = MEM32(esp + 0x24);
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(ebp); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(ebp + 4); /* mulss */
    xmm3 = xmm3 * MEMF(ebp + 8); /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    eax = MEM32(esp + 0x2C);
    xmm3 = xmm3 - xmm4; /* subss */
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x28) = xmm3; /* movss */
    edx = MEM32(esp + 0x28);
    eax = esp + 0x18;
    ebx = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E37AA: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x18); /* movss */
    ecx = MEM32(esp + 0x24);
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    edx = MEM32(esp + 0x28);
    MEMF(esi + 0x20) = xmm0; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    eax = MEM32(esp + 0x2C);
    MEMF(esi) = xmm4; /* movss */
    MEMF(esi + 0x10) = xmm3; /* movss */
    xmm6 = MEMF(edi + 8); /* movss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm6 = xmm6 + xmm0; /* addss */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    xmm6 = xmm6 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    MEMF(esi + 0x14) = xmm4; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 0x30) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 4) = xmm3; /* movss */
    MEMF(esi + 0x24) = xmm6; /* movss */
    xmm7 = MEMF(edi + 8); /* movss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm6 = MEMF(edi + 4); /* movss */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm4 = MEMF(edi); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    MEMF(esi + 0x18) = xmm1; /* movss */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm3 = xmm0; /* movaps */
    MEMF(esi + 0x28) = xmm2; /* movss */
    xmm7 = xmm7 + xmm4; /* addss */
    xmm3 = xmm3 - xmm7; /* subss */
    MEMF(esi + 0x34) = xmm3; /* movss */
    MEMF(esi + 8) = xmm5; /* movss */
    xmm3 = MEMF(edi + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(edi + 4); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    POP32(esp, edi);
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    MEMF(esi + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, ebp);
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(esi + 0x38) = xmm1; /* movss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_003E3920
 * Original: 0x003E3920 - 0x003E3982 (98 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3920(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003E3920: ;
    xmm2 = MEMF(0x648E14); /* movss */
    xmm1 = xmm0; /* movaps */
    esp = esp - 8;
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) { sub_003E3982(); return; } /* jb: below (unsigned <) */

loc_003E3937: ;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648E10); /* mulss */
    xmm2 = xmm2 + MEMF(0x648E0C); /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(0x648E08); /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(0x648E04); /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(0x648E00); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(0x648DE0); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E3A70
 * Original: 0x003E3A70 - 0x003E3AC6 (86 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3A70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003E3A70: ;
    xmm0 = MEMF(0x648E14); /* movss */
    xmm2 = xmm1; /* movaps */
    esp = esp - 8;
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) { sub_003E3AC6(); return; } /* jb: below (unsigned <) */

loc_003E3A87: ;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(0x648E10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E0C); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(0x648E08); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(0x648E04); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(0x648E00); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E3BB0
 * Original: 0x003E3BB0 - 0x003E3C18 (104 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3BB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003E3BB0: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 < xmm1)) { sub_003E3C18(); return; } /* jb: below (unsigned <) */

loc_003E3BC4: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648DFC); /* mulss */
    xmm0 = xmm0 - MEMF(0x648DF8); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DF4); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x648DF0); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DEC); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x648DE8); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DE4); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E3CA0
 * Original: 0x003E3CA0 - 0x003E3CCD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3CA0(void)
{
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

loc_003E3CA0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003E3CCD(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E3CB6: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003E3CCD(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E3CC8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E3DF0
 * Original: 0x003E3DF0 - 0x003E3F4B (347 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3DF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_003E3DF0: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_003E3F4B(); return; } /* jnp: not parity */

loc_003E3E06: ;
    edx = MEM32(esp + 4);
    xmm3 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(0x648DCC); /* movss */
    eax = edx;
    eax = eax & 0x7FFFFF;
    eax = eax | 0x3F800000;
    MEM32(esp + 4) = eax;
    xmm1 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * MEMF(0x648DC8); /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm4 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x648DC4); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DC0); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x648DBC); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DB8); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x648DB4); /* subss */
    ecx = edx;
    ecx = ecx >> 0x17;
    ecx = ecx & 0xFF;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DB0); /* addss */
    ecx = ecx - 0x7F;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DAC); /* addss */
    eax = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * xmm4; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003E3F17; /* jnp: not parity */

loc_003E3ED2: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648DA4); /* mulss */
    xmm1 = xmm1 + MEMF(0x648DA0); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D9C); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D98); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D94); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x648D90); /* addss */
    goto loc_003E3F1A;

loc_003E3F17: ;
    xmm1 = xmm3; /* movaps */

loc_003E3F1A: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEMF(esp + 4) = xmm1; /* movss */
    if (((int32_t)(edx & edx) >= 0)) goto loc_003E3F37; /* jns: not sign (positive) */

loc_003E3F24: ;
    edx = (int32_t)xmm4; /* cvttss2si */
    if (TEST_Z(LO8(edx), 1)) goto loc_003E3F37; /* je: equal / zero */

loc_003E3F2D: ;
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(esp + 4) = xmm2; /* movss */

loc_003E3F37: ;
    eax = MEM32(esp + 4);
    ecx = ecx << 0x17;
    eax = eax + ecx;
    MEM32(esp + 4) = eax;
    xmm0 = MEMF(esp + 4); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E3F70
 * Original: 0x003E3F70 - 0x003E3F83 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3F70(void)
{
    float xmm0;

loc_003E3F70: ;
    PUSH32(esp, ecx);
    xmm0 = sqrtf(MEMF(esp + 8)); /* sqrtss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E3F90
 * Original: 0x003E3F90 - 0x003E3FD1 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3F90(void)
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

loc_003E3F90: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648DD0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003E3FCA; /* jbe: below or equal (unsigned <=) */

loc_003E3FA2: ;
    xmm1 = MEMF(esp + 4); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    eax = (int32_t)xmm1; /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    if ((xmm2 > xmm1)) goto loc_003E3FD0; /* ja: above (unsigned >) */

loc_003E3FB8: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003E3FD0; /* jnp: not parity */

loc_003E3FC1: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    esp += 4; return; /* ret */

loc_003E3FCA: ;
    xmm0 = MEMF(esp + 4); /* movss */

loc_003E3FD0: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E3FE0
 * Original: 0x003E3FE0 - 0x003E4022 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E3FE0(void)
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

loc_003E3FE0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648DD0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003E401B; /* jbe: below or equal (unsigned <=) */

loc_003E3FF2: ;
    xmm1 = MEMF(esp + 4); /* movss */
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    eax = (int32_t)xmm1; /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    if ((xmm1 >= MEMF(0x648CF8))) goto loc_003E4021; /* jae: above or equal (unsigned >=) */

loc_003E4009: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003E4021; /* jnp: not parity */

loc_003E4012: ;
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    esp += 4; return; /* ret */

loc_003E401B: ;
    xmm0 = MEMF(esp + 4); /* movss */

loc_003E4021: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E4030
 * Original: 0x003E4030 - 0x003E4058 (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4030(void)
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

loc_003E4030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    /* fld st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_003E404A; /* jb: below (unsigned <) */

loc_003E4048: ;
    /* FPU: fprem  */

loc_003E404A: ;
    /* fstp st(1) */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(ebp + -4); /* movss */
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
 * sub_003E4060
 * Original: 0x003E4060 - 0x003E41C8 (360 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4060(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003E4060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x50;
    xmm1 = MEMF(eax); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    xmm4 = MEMF(eax + 4); /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm6 = MEMF(eax + 0xC); /* movss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm5 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = MEMF(eax + 0xC); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0xC); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm2 = MEMF(eax); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    MEMF(esp + 8) = xmm2; /* movss */
    xmm2 = MEMF(eax); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm4 = MEMF(eax + 4); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm5 = xmm5 + MEMF(esp + 8); /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm3 + MEMF(esp + 8); /* addss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 4); /* subss */
    xmm1 = xmm1 + MEMF(esp + 4); /* addss */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    MEMF(esp + 0x14) = xmm7; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm2 = xmm2 - xmm0; /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = xmm7; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    PUSH32(esp, edx);
    xmm5 = xmm4; /* movaps */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    xmm5 = xmm5 - xmm6; /* subss */
    xmm4 = xmm4 + xmm6; /* addss */
    eax = esp + 0x20;
    MEMF(esp + 0x34) = xmm7; /* movss */
    MEMF(esp + 0x44) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E4440(); /* call 0x003E4440 */

loc_003E41C1: ;
    esp = esp + 0x10;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E41D0
 * Original: 0x003E41D0 - 0x003E4287 (183 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E41D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003E41D0: ;
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(eax); /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x28); /* addss */
    esp = esp - 8;
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648CF8))) { sub_003E4287(); return; } /* jb: below (unsigned <) */

loc_003E41EE: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm3 = xmm0; /* movaps */
    MEMF(esp) = xmm3; /* movss */
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
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(edx + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x24); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x20); /* movss */
    xmm1 = xmm1 - MEMF(eax + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x10); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 8) = xmm1; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E4440
 * Original: 0x003E4440 - 0x003E456B (299 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4440: ;
    ecx = MEM32(esp + 4);
    edx = ZX8(MEM8(ecx * 4 + 0x74FAA0));
    esp = esp - 0x10;
    (void)0; /* test LO8(ecx), 8 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx * 4 + 0x74FAA1));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ecx * 4 + 0x74FAA2));
    if (TEST_Z(LO8(ecx), 8)) { sub_003E456B(); return; } /* je: equal / zero */

loc_003E4474: ;
    ecx = edx + edi * 4;
    xmm0 = MEMF(eax + ecx * 4); /* movss */
    ecx = eax + ecx * 4;
    MEM32(esp + 0x18) = ecx;
    ecx = edx + esi * 4;
    xmm1 = MEMF(eax + ecx * 4); /* movss */
    ecx = eax + ecx * 4;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, MEMF(0x5A03A0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x5A03A0))) goto loc_003E4521; /* jbe: below or equal (unsigned <=) */

loc_003E44C5: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003E44D8: ;
    MEMF(ebx) = xmm0; /* movss */
    ecx = edx + edx * 4;
    ecx = MEM32(eax + ecx * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003E44ED: ;
    ecx = MEM32(esp + 0x3C);
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(ecx) = xmm0; /* movss */
    ecx = edi + edx * 4;
    esp = esp + 0xC;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(eax + ecx * 4); /* subss */
    edx = esi + edx * 4;
    eax = MEM32(eax + edx * 4);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003E4517: ;
    MEMF(ebp) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_003E4668(); return; /* tail jmp 0x003E4668 */

loc_003E4521: ;
    xmm3 = 0.0f; /* xorps self = zero */
    ecx = esi + esi * 4;
    ecx = MEM32(eax + ecx * 4);
    PUSH32(esp, ecx);
    ecx = esi + edi * 4;
    PUSH32(esp, ecx);
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - MEMF(eax + ecx * 4); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003E4541: ;
    ecx = MEM32(esp + 0x18);
    MEMF(ebx) = xmm0; /* movss */
    edx = edx + edx * 4;
    eax = MEM32(eax + edx * 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_003E4556: ;
    edx = MEM32(esp + 0x3C);
    MEMF(edx) = xmm0; /* movss */
    esp = esp + 0x10;
    MEMF(ebp) = xmm3; /* movss */
    g_seh_ebp = ebp; sub_003E466B(); return; /* tail jmp 0x003E466B */

}

/**
 * sub_003E46C0
 * Original: 0x003E46C0 - 0x003E46DF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E46C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003E46C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    xmm1 = MEMF(0x648D10); /* movss */
    if (TEST_Z(LO8(ecx), 0x10)) { sub_003E46DF(); return; } /* je: equal / zero */

loc_003E46D3: ;
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm2 = MEMF(ebp + 8); /* movss */
    g_seh_ebp = ebp; sub_003E46E9(); return; /* tail jmp 0x003E46E9 */

}

/**
 * sub_003E48E0
 * Original: 0x003E48E0 - 0x003E4901 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E48E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm2, xmm3;

loc_003E48E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    (void)0; /* test LO8(edx), 0x10 - flags set for next jcc */
    xmm2 = MEMF(ebp + 0xC); /* movss */
    MEMF(ebp + -8) = xmm2; /* movss */
    if (TEST_Z(LO8(edx), 0x10)) { sub_003E4901(); return; } /* je: equal / zero */

loc_003E48F5: ;
    xmm1 = MEMF(ebp + 0x10); /* movss */
    xmm3 = MEMF(ebp + 8); /* movss */
    g_seh_ebp = ebp; sub_003E490B(); return; /* tail jmp 0x003E490B */

}

/**
 * sub_003E4BB0
 * Original: 0x003E4BB0 - 0x003E4C7B (203 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4BB0(void)
{
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

loc_003E4BB0: ;
    esp = esp - 8;
    xmm3 = MEMF(eax + 4); /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 0xC); /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp) = xmm0; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_003E4C7B(); return; } /* ja: above (unsigned >) */

loc_003E4C07: ;
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
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 8) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(eax + 0xC); /* mulss */
    MEMF(ecx + 0xC) = xmm0; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E4CA0
 * Original: 0x003E4CA0 - 0x003E4E09 (361 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4CA0(void)
{
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

loc_003E4CA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x649284)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003E4E09(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E4CD5: ;
    fp_push(MEMF(ecx)); /* fld float */
    xmm3 = 0.0f; /* xorps self = zero */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm0 = xmm3; /* movaps */
    fp_push(MEMF(0x648D10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_003E4D79; /* jbe: below or equal (unsigned <=) */

loc_003E4CF1: ;
    edx = MEM32(ecx + 8);
    MEM32(eax) = edx;
    xmm1 = MEMF(eax); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 4) = xmm3; /* movss */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(esp + 8) = xmm2; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(esp); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0xC) = xmm3; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003E4D79: ;
    MEMF(eax) = xmm3; /* movss */
    xmm0 = xmm0 - MEMF(ecx + 8); /* subss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(esp + 8) = xmm2; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm0 = MEMF(esp); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0xC) = xmm3; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E4ED0
 * Original: 0x003E4ED0 - 0x003E4F0E (62 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E4ED0: ;
    esp = esp - 0x10;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    MEMF(esp) = xmm1; /* movss */
    if ((xmm0 <= xmm3)) { sub_003E4F0E(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E4EFD: ;
    xmm5 = MEMF(0x648D34); /* movss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm3 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_003E4F11(); return; /* tail jmp 0x003E4F11 */

}

/**
 * sub_003E4FF0
 * Original: 0x003E4FF0 - 0x003E5115 (293 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E4FF0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_003E4FF0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0xC); /* mulss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 4); /* mulss */
    xmm2 = MEMF(eax + 0xC); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 4); /* mulss */
    xmm3 = MEMF(ecx); /* movss */
    xmm3 = xmm3 * MEMF(eax + 4); /* mulss */
    xmm4 = MEMF(eax + 8); /* movss */
    xmm4 = xmm4 * MEMF(ecx + 8); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 * MEMF(eax + 4); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 8); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * MEMF(ecx); /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * MEMF(ecx + 4); /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * MEMF(ecx); /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(eax + 4); /* movss */
    xmm4 = xmm4 * MEMF(ecx + 4); /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(eax); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(eax + 4); /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(eax + 0xC); /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(eax + 8); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    MEMF(edx) = xmm4; /* movss */
    xmm4 = MEMF(eax + 8); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * MEMF(eax + 4); /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * MEMF(eax + 0xC); /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(eax); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    MEMF(edx + 4) = xmm4; /* movss */
    xmm4 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    xmm0 = xmm0 * MEMF(eax + 4); /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm4 = xmm4 - xmm0; /* subss */
    MEMF(edx + 8) = xmm4; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E5120
 * Original: 0x003E5120 - 0x003E5185 (101 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E5120: ;
    esp = esp - 0x10;
    ecx = MEM32(esp + 0x14);
    xmm3 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * MEMF(ecx + 4); /* mulss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0xC); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 8); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp) = xmm1; /* movss */
    if ((xmm0 <= xmm3)) { sub_003E5185(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E5175: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 - xmm3; /* subss */
    xmm3 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    g_seh_ebp = ebp; sub_003E5188(); return; /* tail jmp 0x003E5188 */

}

/**
 * sub_003E5290
 * Original: 0x003E5290 - 0x003E5429 (409 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5290(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003E5290: ;
    esp = esp - 8;
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0xC); /* mulss */
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x18); /* mulss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 * MEMF(eax + 0x18); /* mulss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * MEMF(ecx + 0x10); /* mulss */
    xmm4 = MEMF(ecx + 0x1C); /* movss */
    xmm4 = xmm4 * MEMF(eax + 0x14); /* mulss */
    xmm5 = MEMF(ecx + 0x10); /* movss */
    xmm5 = xmm5 * MEMF(eax + 0x1C); /* mulss */
    xmm6 = MEMF(ecx + 0x20); /* movss */
    xmm6 = xmm6 * MEMF(eax + 8); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0xC); /* mulss */
    xmm7 = MEMF(eax + 0x10); /* movss */
    xmm7 = xmm7 * MEMF(ecx + 0x14); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x1C); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0xC); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x20); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x18); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x1C); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(ecx + 4); /* movss */
    xmm3 = xmm3 * MEMF(eax); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(ecx + 4); /* movss */
    xmm3 = xmm3 * MEMF(eax + 0xC); /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(ecx + 0x10); /* movss */
    xmm4 = xmm4 * MEMF(eax + 0x10); /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(ecx + 4); /* movss */
    xmm4 = xmm4 * MEMF(eax + 0x18); /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(ecx + 0x1C); /* movss */
    xmm5 = xmm5 * MEMF(eax + 0x20); /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(eax + 4); /* movss */
    xmm5 = xmm5 * MEMF(ecx + 0x14); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(ecx + 8); /* movss */
    xmm6 = xmm6 * MEMF(eax); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(ecx + 0x20); /* movss */
    xmm6 = xmm6 * MEMF(eax + 0x14); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = MEMF(ecx + 8); /* movss */
    xmm7 = xmm7 * MEMF(eax + 0xC); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = MEMF(ecx + 8); /* movss */
    xmm7 = xmm7 * MEMF(eax + 0x18); /* mulss */
    MEMF(esp) = xmm6; /* movss */
    xmm6 = MEMF(eax + 0x1C); /* movss */
    xmm6 = xmm6 * MEMF(ecx + 0x14); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = MEMF(ecx + 0x20); /* movss */
    xmm7 = xmm7 * MEMF(eax + 0x20); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = MEMF(eax + 8); /* movss */
    xmm7 = xmm7 * MEMF(ecx + 0x18); /* mulss */
    MEMF(esp + 4) = xmm6; /* movss */
    xmm6 = MEMF(ecx); /* movss */
    xmm6 = xmm6 * MEMF(eax); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = MEMF(eax + 4); /* movss */
    xmm7 = xmm7 * MEMF(ecx + 0xC); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(edx) = xmm6; /* movss */
    MEMF(edx + 0xC) = xmm0; /* movss */
    MEMF(edx + 0x18) = xmm1; /* movss */
    MEMF(edx + 4) = xmm2; /* movss */
    MEMF(edx + 0x10) = xmm3; /* movss */
    MEMF(edx + 0x1C) = xmm4; /* movss */
    MEMF(edx + 8) = xmm5; /* movss */
    xmm0 = MEMF(esp); /* movss */
    MEMF(edx + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(edx + 0x20) = xmm0; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E5430
 * Original: 0x003E5430 - 0x003E54A4 (116 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5430(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_003E5430: ;
    xmm1 = MEMF(ecx + 0x10); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x20); /* mulss */
    xmm0 = MEMF(ecx + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x1C); /* mulss */
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x1C); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x20); /* mulss */
    xmm1 = xmm1 * MEMF(ecx); /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(ecx + 0xC); /* mulss */
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x10); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x14); /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(ecx + 0x18); /* mulss */
    esp = esp - 0xC;
    xmm1 = xmm1 + xmm0; /* addss */
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_003E54A4(); return; } /* jp: parity */

loc_003E549E: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003E5600
 * Original: 0x003E5600 - 0x003E570F (271 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5600(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003E5600: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 4); /* subss */
    ebx = esp + 0x10;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E562F: ;
    xmm4 = MEMF(esp + 0x10); /* movss */
    xmm2 = MEMF(esp + 8); /* movss */
    xmm5 = MEMF(esp + 0x14); /* movss */
    xmm6 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 4); /* addss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0xC) = xmm7; /* movss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    MEMF(esp + 0xC) = xmm7; /* movss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm0 = xmm0 - MEMF(esp + 0xC); /* subss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esi + 0x18) = xmm7; /* movss */
    xmm7 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 + xmm7; /* addss */
    MEMF(esi + 0x10) = xmm1; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esi + 0x1C) = xmm4; /* movss */
    MEMF(esi + 0x14) = xmm6; /* movss */
    MEMF(esi + 0x20) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E5710
 * Original: 0x003E5710 - 0x003E5730 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5710(void)
{
    float xmm0;

loc_003E5710: ;
    edx = MEM32(esp + 4);
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(edx + 4); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    MEMF(eax + 4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E5730
 * Original: 0x003E5730 - 0x003E573F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5730(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E5730: ;
    if (CMP_EQ(ecx, eax)) goto loc_003E573E; /* je: equal / zero */

loc_003E5734: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_003E573E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E5740
 * Original: 0x003E5740 - 0x003E5767 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5740(void)
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

loc_003E5740: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003E5767(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E5761: ;
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E5770
 * Original: 0x003E5770 - 0x003E57E6 (118 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5770(void)
{
    float xmm0, xmm1, xmm2;

loc_003E5770: ;
    esp = esp - 8;
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp) = xmm2; /* movss */
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
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx) = xmm1; /* movss */
    xmm0 = xmm0 * MEMF(eax + 4); /* mulss */
    MEMF(ecx + 4) = xmm0; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E57F0
 * Original: 0x003E57F0 - 0x003E580B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E57F0(void)
{
    float xmm0, xmm1;

loc_003E57F0: ;
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 4) = xmm1; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E5810
 * Original: 0x003E5810 - 0x003E5820 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5810(void)
{
    float xmm0;

loc_003E5810: ;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E5820
 * Original: 0x003E5820 - 0x003E583B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5820(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E5820: ;
    if (CMP_EQ(ecx, eax)) goto loc_003E583A; /* je: equal / zero */

loc_003E5824: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;

loc_003E583A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E5840
 * Original: 0x003E5840 - 0x003E5866 (38 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5840(void)
{
    float xmm0;

loc_003E5840: ;
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E5870
 * Original: 0x003E5870 - 0x003E58D0 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5870(void)
{
    float xmm0, xmm1, xmm2;

loc_003E5870: ;
    esp = esp - 0x18;
    eax = esp + 8;
    MEM32(esp) = eax;
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movups */
    ecx = MEM32(esp + 0x20);
    xmm2 = MEMF(ecx); /* movups */
    /* subps: xmm1 -= xmm2 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm1; /* movups */
    ecx = esp + 8;
    MEM32(esp) = ecx;
    edx = MEM32(esp);
    xmm1 = MEMF(edx); /* movups */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x93 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x93 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x93 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003E58D0
 * Original: 0x003E58D0 - 0x003E58DF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E58D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E58D0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C843(); /* call 0x0042C843 */

loc_003E58D8: ;
    if (TEST_Z(eax, eax)) { sub_003E58DF(); return; } /* je: equal / zero */

loc_003E58DC: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003E5930
 * Original: 0x003E5930 - 0x003E5944 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5930(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E5930: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C843(); /* call 0x0042C843 */

loc_003E5938: ;
    if (TEST_NZ(eax, eax)) goto loc_003E5941; /* jne: not equal / not zero */

loc_003E593C: ;
    if (TEST_Z(LO8(ebx), 0xF)) { sub_003E5944(); return; } /* je: equal / zero */

loc_003E5941: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003E5AB0
 * Original: 0x003E5AB0 - 0x003E5B56 (166 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5AB0(void)
{
    float xmm0, xmm1, xmm2;

loc_003E5AB0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x648DCC); /* movss */
    ecx = eax;
    ecx = ecx & 0x7FFFFF;
    ecx = ecx | 0x3F800000;
    MEM32(esp + 4) = ecx;
    xmm1 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 - MEMF(0x648D14); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648DC8); /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x648DC4); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DC0); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x648DBC); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DB8); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - MEMF(0x648DB4); /* subss */
    eax = eax >> 0x17;
    eax = eax & 0xFF;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DB0); /* addss */
    eax = eax - 0x7F;
    edx = SX16(LO16(eax));
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648DAC); /* addss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    esp += 4; return; /* ret */

}

/**
 * sub_003E5B60
 * Original: 0x003E5B60 - 0x003E5B73 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5B60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003E5B60: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648DA8); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) { sub_003E5B73(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E5B6E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E5C10
 * Original: 0x003E5C10 - 0x003E5C4B (59 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5C10(void)
{
    float xmm0, xmm1, xmm2;

loc_003E5C10: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    xmm0 = MEMF(esp); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E5C50
 * Original: 0x003E5C50 - 0x003E5C7B (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5C50(void)
{
    float xmm0, xmm1, xmm2;

loc_003E5C50: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = 1.0f / xmm0; /* rcpss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03B4); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    xmm0 = MEMF(esp); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E5C80
 * Original: 0x003E5C80 - 0x003E5C98 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5C80(void)
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

loc_003E5C80: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_003E5C98(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E5C92: ;
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003E5CA0
 * Original: 0x003E5CA0 - 0x003E5F9F (767 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E5CA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    if (CMP_L(ebx, 4)) goto loc_003E5EF5; /* jl: less (signed <) */

loc_003E5CBA: ;
    edx = esi + 0xC;
    esi = esi - ebp;
    MEM32(esp + 0x10) = esi;
    esi = ebx + -4;
    esi = esi >> 2;
    esi++;
    ecx = ebp + 4;
    edi = esi * 4;
    goto loc_003E5CE0;

    /* nop */
    /* nop */

loc_003E5CE0: ;
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 4); /* mulss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x10); /* mulss */
    xmm2 = MEMF(eax + 0x20); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 4); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + -4); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * MEMF(ecx); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 * MEMF(ecx + -4); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 * MEMF(eax + 0x1C); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 4); /* mulss */
    ebp = MEM32(esp + 0x10);
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * MEMF(ecx + -4); /* mulss */
    MEMF(ecx + ebp) = xmm0; /* movss */
    MEMF(edx + -4) = xmm1; /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(edx + -12) = xmm2; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x10); /* mulss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0xC); /* mulss */
    xmm2 = MEMF(eax + 0x20); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x10); /* mulss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * MEMF(ecx + 0xC); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 8); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x1C); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0xC); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x10); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * MEMF(ecx + 8); /* mulss */
    MEMF(edx + 4) = xmm0; /* movss */
    MEMF(edx + 8) = xmm1; /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(edx) = xmm2; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x1C); /* mulss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x18); /* mulss */
    xmm2 = MEMF(eax + 0x20); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x1C); /* mulss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * MEMF(ecx + 0x18); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + 0x14); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x14); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x1C); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x18); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x1C); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * MEMF(ecx + 0x14); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(edx + 0xC) = xmm2; /* movss */
    MEMF(edx + 0x10) = xmm0; /* movss */
    MEMF(edx + 0x14) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x28); /* mulss */
    xmm1 = MEMF(eax + 0x10); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x24); /* mulss */
    xmm2 = MEMF(eax + 0x20); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x28); /* mulss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * MEMF(ecx + 0x24); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + 0x20); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x18); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x20); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x1C); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x24); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 0x28); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * MEMF(ecx + 0x20); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(edx + 0x18) = xmm2; /* movss */
    MEMF(edx + 0x1C) = xmm0; /* movss */
    MEMF(edx + 0x20) = xmm1; /* movss */
    ecx = ecx + 0x30;
    edx = edx + 0x30;
    esi--;
    if ((esi != 0)) goto loc_003E5CE0; /* jne: not equal / not zero */

loc_003E5EED: ;
    ebp = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x1C);

loc_003E5EF5: ;
    if (CMP_AE(edi, ebx)) goto loc_003E5F99; /* jae: above or equal (unsigned >=) */

loc_003E5EFD: ;
    ecx = edi + edi * 2;
    ecx = ecx << 2;
    edx = ecx + esi;
    esi = esi - ebp;
    ecx = ecx + ebp + 4;
    ebx = ebx - edi;
    edi = edi;

loc_003E5F10: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm1 = MEMF(ecx + -4); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0xC); /* mulss */
    xmm0 = xmm0 * MEMF(eax + 0x14); /* mulss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 * MEMF(eax + 0x20); /* mulss */
    xmm3 = MEMF(ecx + -4); /* movss */
    xmm3 = xmm3 * MEMF(eax); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x10); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + -4); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x18); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 * MEMF(eax + 0x1C); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm2 = xmm2 * MEMF(ecx); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(ecx + 4); /* movss */
    xmm3 = xmm3 * MEMF(eax + 8); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(edx) = xmm2; /* movss */
    MEMF(ecx + esi) = xmm0; /* movss */
    MEMF(edx + 8) = xmm1; /* movss */
    ecx = ecx + 0xC;
    edx = edx + 0xC;
    ebx--;
    if ((ebx != 0)) goto loc_003E5F10; /* jne: not equal / not zero */

loc_003E5F99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E5FA0
 * Original: 0x003E5FA0 - 0x003E601E (126 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E5FA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_003E5FA0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = esp + 4;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E5FAD: ;
    eax = MEM32(esp + 0x20);
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003E5FBA: ;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm3 = MEMF(esp + 0x18); /* movss */
    xmm4 = MEMF(esp + 0x10); /* movss */
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = MEMF(esp + 8); /* movss */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    POP32(esp, ebx);
    if ((xmm0 < xmm7)) { sub_003E601E(); return; } /* jb: below (unsigned <) */

loc_003E6009: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi) = xmm7; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003E6120
 * Original: 0x003E6120 - 0x003E621A (250 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6120(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003E6120: ;
    ecx = SX8(LO8(ecx));
    ecx = ecx | 0x20;
    ecx = ecx - 0x78;
    if ((ecx == 0)) goto loc_003E61C0; /* je: equal / zero */

loc_003E612F: ;
    ecx--;
    if ((ecx == 0)) goto loc_003E6179; /* je: equal / zero */

loc_003E6132: ;
    ecx--;
    if ((ecx != 0)) goto loc_003E6219; /* jne: not equal / not zero */

loc_003E6139: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 8); /* movss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm3 = xmm0; /* movaps */
    MEMF(eax) = xmm1; /* movss */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0xC) = xmm3; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    goto loc_003E61FB;

loc_003E6179: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    MEMF(eax + 0x10) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm2; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 8) = xmm3; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    goto loc_003E6205;

loc_003E61C0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    MEMF(eax + 0x1C) = xmm3; /* movss */
    MEMF(eax + 0x14) = xmm2; /* movss */

loc_003E61FB: ;
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */

loc_003E6205: ;
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */

loc_003E6219: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E6220
 * Original: 0x003E6220 - 0x003E6262 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6220(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E6220: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x400;
    eax = esp + 0x408;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EA04(); /* call 0x0046EA04 */

loc_003E6242: ;
    esp = esp + 0x10;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_003E6252; /* jne: not equal / not zero */

loc_003E624A: ;
    MEM8(esp + 0x3FF) = 0;

loc_003E6252: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C811(); /* call 0x0042C811 */

loc_003E625B: ;
    esp = esp + 0x400;
    esp += 4; return; /* ret */

}

/**
 * sub_003E6270
 * Original: 0x003E6270 - 0x003E62A0 (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6270(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E6270: ;
    PUSH32(esp, esi);
    esi = MEM32(0x819B88);
    if (TEST_Z(esi, esi)) goto loc_003E629E; /* je: equal / zero */

loc_003E627B: ;
    goto loc_003E6280;

    /* nop */

loc_003E6280: ;
    edx = MEM32(esi + 0x5C);
    eax = MEM32(esi + 0x10);
    edx++;
    MEM32(esi + 0x5C) = edx;
    eax = MEM32(eax + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_003E6297; /* je: equal / zero */

loc_003E6291: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E6294: ;
    esp = esp + 4;

loc_003E6297: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_003E6280; /* jne: not equal / not zero */

loc_003E629E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E62A0
 * Original: 0x003E62A0 - 0x003E62C1 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E62A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E62A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = ecx;
    if (TEST_Z(eax, eax)) { sub_003E62C1(); return; } /* je: equal / zero */

loc_003E62AE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E62B2: ;
    SET_LO8(ecx, MEM8(esi + 0x76));
    eax = 1;
    esp = esp + 8;
    eax = eax << LO8(ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E62C1
 * Original: 0x003E62C1 - 0x003E62EE (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E62C1(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E62C1: ;
    (void)0; /* cmp LO16(ecx), 1 - flags set for next jcc */
    MEM8(esi + 0x76) = 0;
    if (CMP_BE(LO16(ecx), 1)) goto loc_003E62DF; /* jbe: below or equal (unsigned <=) */

loc_003E62CB: ;
    SET_LO16(eax, MEM16(esp));
    SET_LO8(ecx, 0); /* xor self */

loc_003E62D1: ;
    SET_LO16(eax, LO16(eax) >> 1);
    SET_LO8(ecx, LO8(ecx) + 1);
    if (CMP_A(LO16(eax), 1)) goto loc_003E62D1; /* ja: above (unsigned >) */

loc_003E62DC: ;
    MEM8(esi + 0x76) = LO8(ecx);

loc_003E62DF: ;
    SET_LO8(ecx, MEM8(esi + 0x76));
    eax = 1;
    MEM8(esi + 0x75) = LO8(ecx);
    eax = eax << LO8(ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E62F0
 * Original: 0x003E62F0 - 0x003E63C9 (217 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E62F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E62F0: ;
    eax = MEM32(0x84B78C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_003E6318; /* jne: not equal / not zero */

loc_003E62FC: ;
    MEM32(0x819B84) = ebx;
    MEM32(0x819B88) = ebx;
    MEM32(0x84B790) = ebx;
    MEM32(0x84B78C) = 1;

loc_003E6318: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x1F;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    (void)0; /* test LO8(eax), 0x20 - flags set for next jcc */
    MEM32(edx + 8) = 0x49464251;
    MEM32(edx + 0xC) = eax;
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), 0x20)) goto loc_003E633F; /* je: equal / zero */

loc_003E6337: ;
    ecx = eax;
    ecx = ecx | 2;
    MEM32(edx + 0xC) = ecx;

loc_003E633F: ;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_003E6347; /* je: equal / zero */

loc_003E6343: ;
    MEM32(edx + 0xC) = MEM32(edx + 0xC) | 4;

loc_003E6347: ;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_003E636E; /* je: equal / zero */

loc_003E634B: ;
    MEM32(edx + 0x14) = 0x3E63D0;
    MEM32(edx + 0x18) = 0xFAEE0;
    MEM32(edx + 0x1C) = 0x3E64A0;
    MEM32(edx + 0x20) = 0xFAEE0;
    MEM32(edx + 0x24) = 0x3E64B0;

loc_003E636E: ;
    eax = eax | 0xFFFFFFFFu;
    SET_LO8(ecx, 5);
    MEM32(edx + 0x64) = eax;
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 0x50) = eax;
    MEM32(edx + 0x44) = eax;
    MEM32(edx + 0x70) = ebx;
    MEM8(edx + 0x75) = LO8(ecx);
    MEM8(edx + 0x76) = LO8(ecx);
    MEM8(edx + 0x77) = LO8(ebx);
    MEM8(edx + 0x78) = LO8(ebx);
    MEM32(edx + 0x54) = ebx;
    MEM32(edx + 0x28) = esi;
    MEM32(edx + 0x34) = esi;
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ebx;
    (void)0; /* cmp MEM32(0x819B84), ebx - flags set for next jcc */
    eax = 0x819B84;
    if (CMP_EQ(MEM32(0x819B84), ebx)) goto loc_003E63B6; /* je: equal / zero */

loc_003E63A9: ;
    /* nop */

loc_003E63B0: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), ebx)) goto loc_003E63B0; /* jne: not equal / not zero */

loc_003E63B6: ;
    ecx = MEM32(eax + 4);
    MEM32(eax + 4) = edx;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    POP32(esp, ebx);
    if (CMP_EQ(ecx, ebx)) goto loc_003E63C8; /* je: equal / zero */

loc_003E63C6: ;
    MEM32(ecx) = edx;

loc_003E63C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E63D0
 * Original: 0x003E63D0 - 0x003E649D (205 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E63D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E63D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test MEM8(esi + 0xC), 4 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi;
    if (TEST_Z(MEM8(esi + 0xC), 4)) goto loc_003E63E8; /* je: equal / zero */

loc_003E63E2: ;
    eax = eax - MEM32(0x74FB2C);

loc_003E63E8: ;
    ecx = MEM32(esi + 0x10);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x1C), _icall_esp); /* indirect call */
    }

loc_003E63F5: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003E6419; /* je: equal / zero */

loc_003E6400: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_003E6419; /* je: equal / zero */

loc_003E6407: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x645460);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E6416: ;
    esp = esp + 0xC;

loc_003E6419: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x645430);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E642A: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_003E648B; /* je: equal / zero */

loc_003E6435: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6453AC);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E6443: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6453AC);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E6455: ;
    eax = MEM32(esp + 0x20);
    edx = ZX8(MEM8(eax + 3));
    ecx = ZX8(MEM8(eax + 2));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 1));
    eax = ZX8(MEM8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64544C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E6476: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x645448);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E6488: ;
    esp = esp + 0x2C;

loc_003E648B: ;
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E6495: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E64A0
 * Original: 0x003E64A0 - 0x003E64A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E64A0(void)
{

loc_003E64A0: ;
    eax = MEM32(esp + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_003E64B0
 * Original: 0x003E64B0 - 0x003E64D2 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E64B0(void)
{

loc_003E64B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64541C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E64C4: ;
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E64CE: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003E64E0
 * Original: 0x003E64E0 - 0x003E6547 (103 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E64E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E64E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edx + -1;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    ecx = esi + ecx + 0x98;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = ecx;
    ebx = MEM32(eax);
    ecx = MEM32(eax + 4);
    esi = MEM32(eax + 8);
    ecx = ecx + ebx;
    esi = esi + ecx;
    ecx = edx;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = esi;
    esi = 0; /* xor self */
    MEM32(eax + 4) = esi;
    MEM32(eax) = esi;
    MEM32(ecx) = ebx;
    ecx = 0; /* xor self */
    if (CMP_LE(edx, esi)) goto loc_003E6542; /* jle: less or equal (signed <=) */

loc_003E6529: ;
    /* nop */

loc_003E6530: ;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(eax + ecx * 4));
    esi = esi + ebx;
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_003E6530; /* jl: less (signed <) */

loc_003E6542: ;
    MEM32(edi) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E6550
 * Original: 0x003E6550 - 0x003E66BA (362 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6550: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84B794);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_003E65F3; /* jne: not equal / not zero */

loc_003E6569: ;
    ecx = 0x11;
    eax = 0; /* xor self */
    edi = 0x819B90;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x819B90) = 0x3E6790;
    MEM32(0x819B9C) = 0x3E6800;
    MEM32(0x819BB4) = ebx;
    MEM32(0x819BB8) = ebx;
    MEM32(0x819BBC) = ebx;
    MEM32(0x819BC0) = 0x3E6A30;
    MEM32(0x819BCC) = ebx;
    MEM32(0x819BA8) = 0x3E6880;
    MEM32(0x819BAC) = 0x3E6960;
    MEM32(0x819B94) = 0x3E6A00;
    MEM32(0x819BA0) = 0x3E69C0;
    MEM32(0x819BC4) = 0x3E6A80;
    MEM32(0x819BD0) = 0x3E6B50;
    MEM32(0x84B794) = 1;

loc_003E65F3: ;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 0x88) = esi;
    MEM32(esp + 0x24) = esi;
    esi = esi + eax;
    MEM32(edx + 0x8C) = esi;
    ebp = ebp & 0xFFFFFFBBu;
    PUSH32(esp, ebp);
    esi = eax;
    edi = edx + 0x94;
    PUSH32(esp, 0); sub_003E62F0(); /* call 0x003E62F0 */

loc_003E661A: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esp + 0x20));
    esp = esp + 4;
    MEM8(edx + 0x7C) = LO8(ecx);
    eax = 1;
    esi = 0; /* xor self */
    MEM32(edx + 0x10) = 0x819B90;
    MEM8(edx + 0x7D) = LO8(ebx);
    ecx--;
    eax = eax << LO8(ecx);
    SET_LO8(ecx, 0); /* xor self */
    MEM32(edx + 0x84) = edi;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edx + 0x80) = eax;
    ebp = edi + eax + 4;
    if (CMP_L(eax, ebx)) goto loc_003E667E; /* jl: less (signed <) */

loc_003E6650: ;
    eax = 1;
    eax = eax << LO8(ecx);
    if (CMP_GE(eax, esi)) goto loc_003E665D; /* jge: greater or equal (signed >=) */

loc_003E665B: ;
    SET_LO8(ecx, LO8(ecx) + 1);

loc_003E665D: ;
    (void)0; /* cmp LO8(ecx), 2 - flags set for next jcc */
    eax = ZX8(LO8(ecx));
    if (CMP_A(LO8(ecx), 2)) goto loc_003E666A; /* ja: above (unsigned >) */

loc_003E6665: ;
    eax = 2;

loc_003E666A: ;
    edi = MEM32(edx + 0x84);
    MEM8(esi + edi) = LO8(eax);
    eax = MEM32(edx + 0x80);
    esi++;
    if (CMP_LE(esi, eax)) goto loc_003E6650; /* jle: less or equal (signed <=) */

loc_003E667E: ;
    if (TEST_Z(MEM8(edx + 0xC), 2)) goto loc_003E66A1; /* je: equal / zero */

loc_003E6684: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(edx + 0x88);
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0xEEEEEEEEu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_003E66A1: ;
    SET_LO8(eax, MEM8(edx + 0x7C));
    ecx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM32(edx + 0x90) = ebp;
    if (CMP_BE(LO8(eax), LO8(ebx))) { g_seh_ebp = ebp; sub_003E677D(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E66B4: ;
    MEM32(esp + 0x1C) = ebx;
    g_seh_ebp = ebp; sub_003E66BA(); return; /* seeded continuation begins at padding before 0x003E66C0 */

}

/**
 * sub_003E66BA
 * Original: 0x003E66BA - 0x003E673C (130 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E66BA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E66BA: ;
    /* nop */
    eax = MEM32(edx + 0x90);
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);
    eax = eax + esi;
    esi = MEM32(edi + ecx * 4);
    MEM32(eax + 8) = esi;
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + 4) = esi;
    if (CMP_EQ(MEM32(edi + ecx * 4), ebx)) { g_seh_ebp = ebp; sub_003E673C(); return; } /* je: equal / zero */

loc_003E66E5: ;
    edi = MEM32(esp + 0x24);
    MEM32(eax + 0xC) = edi;
    edi = MEM32(eax + 8);
    ebp = edi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)esi);
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + ebp;
    esi = 0; /* xor self */
    edi--;
    if (CMP_LE(edi & edi, 0)) goto loc_003E6719; /* jle: less or equal (signed <=) */

loc_003E66FF: ;
    /* nop */

loc_003E6700: ;
    ebp = MEM32(eax + 4);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)esi);
    edi = esi + 1;
    esi = MEM32(eax + 0xC);
    MEM32(esi + ebp) = edi;
    esi = edi;
    edi = MEM32(eax + 8);
    edi--;
    if (CMP_L(esi, edi)) goto loc_003E6700; /* jl: less (signed <) */

loc_003E6719: ;
    esi = MEM32(eax + 8);
    edi = MEM32(eax + 0xC);
    esi--;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(eax + 4));
    MEM32(esi + edi) = 0xFFFFFFFFu;
    esi = MEM32(eax + 8);
    MEM32(eax + 0x18) = esi;
    esi = MEM32(esp + 0x24);
    MEM32(eax) = ebx;
    MEM32(eax + 0x10) = esi;
    eax = ZX8(MEM8(edx + 0x7C));
    ecx++;
    edi = MEM32(esp + 0x1C) + 0x2C;
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(ecx, eax)) { g_seh_ebp = ebp; sub_003E66BA(); return; }
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* inlined continuation at 0x003E674B */

}

/**
 * sub_003E673C
 * Original: 0x003E673C - 0x003E677D (65 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E673C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E673C: ;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(eax + 0x18) = ebx;
    edi = MEM32(esp + 0x1C);
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x24) = ebx;
    eax = ZX8(MEM8(edx + 0x7C));
    ecx++;
    edi = edi + 0x2C;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(ecx, eax)) { g_seh_ebp = ebp; sub_003E66BA(); return; } /* jl: less (signed <) */

loc_003E6772: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E677D
 * Original: 0x003E677D - 0x003E6788 (11 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E677D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E677D: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E6790
 * Original: 0x003E6790 - 0x003E67C7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6790(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E6790: ;
    edx = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(edx + 0x75));
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 8);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_A(ecx, eax)) eax = ecx; /* cmova */
    ecx = MEM32(edx + 0x84);
    ecx = ZX8(MEM8(ecx + eax));
    eax = MEM32(edx + 0x90);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = MEM32(ecx + eax);
    ecx = ecx + eax;
    if (CMP_NE(edx, 0xFFFFFFFFu)) { sub_003E67C7(); return; } /* jne: not equal / not zero */

loc_003E67C4: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003E67C7
 * Original: 0x003E67C7 - 0x003E67F3 (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E67C7(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E67C7: ;
    eax = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    if (esi == 0 || esi >= 0x08000000 || eax >= 0x08000000 - esi) {
        eax = 0;
        POP32(esp, esi);
        esp += 4; return;
    }
    edx = MEM32(eax + esi);
    eax = eax + esi;
    esi = MEM32(ecx + 0x18);
    MEM32(ecx) = edx;
    edx = MEM32(ecx + 0x14);
    edx++;
    esi--;
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) + 1;
    (void)0; /* cmp edx, MEM32(ecx + 0x1C) - flags set for next jcc */
    MEM32(ecx + 0x14) = edx;
    POP32(esp, esi);
    if (CMP_BE(edx, MEM32(ecx + 0x1C))) goto loc_003E67F2; /* jbe: below or equal (unsigned <=) */

loc_003E67EF: ;
    MEM32(ecx + 0x1C) = edx;

loc_003E67F2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E6800
 * Original: 0x003E6800 - 0x003E687F (127 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6800: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = ZX8(MEM8(esi + 0x7C));
    eax = 2;
    if (CMP_LE(ecx, eax)) goto loc_003E687D; /* jle: less or equal (signed <=) */

loc_003E6812: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x90);
    edi = edi + 0x58;

loc_003E6821: ;
    if (CMP_B(ebx, MEM32(edi + 0xC))) goto loc_003E682B; /* jb: below (unsigned <) */

loc_003E6826: ;
    if (CMP_B(ebx, MEM32(edi + 0x10))) goto loc_003E6837; /* jb: below (unsigned <) */

loc_003E682B: ;
    eax++;
    edi = edi + 0x2C;
    if (CMP_L(eax, ecx)) goto loc_003E6821; /* jl: less (signed <) */

loc_003E6833: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003E6837: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0xC);
    eax = ebx;
    eax = eax - ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebp = eax;
    PUSH32(esp, 0); sub_003E70F0(); /* call 0x003E70F0 */

loc_003E684E: ;
    eax = MEM32(edi);
    MEM32(ebx) = eax;
    eax = MEM32(edi + 0x28);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi) = ebp;
    if (TEST_Z(eax, eax)) goto loc_003E6865; /* je: equal / zero */

loc_003E685E: ;
    MEM32(eax + ebp * 4) = 0;

loc_003E6865: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x18);
    eax = MEM32(edi + 0x24);
    edx--;
    ecx++;
    eax++;
    POP32(esp, ebp);
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x18) = ecx;
    MEM32(edi + 0x24) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003E687D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E6880
 * Original: 0x003E6880 - 0x003E6957 (215 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6880: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_003E6954; /* je: equal / zero */

loc_003E6891: ;
    SET_LO8(ecx, MEM8(ebx + 0x7C));
    eax = 2;
    (void)0; /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_BE(LO8(ecx), LO8(eax))) goto loc_003E6954; /* jbe: below or equal (unsigned <=) */

loc_003E68A5: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0x58;
    goto loc_003E68C0;

    /* nop */
    /* nop */

loc_003E68C0: ;
    esi = MEM32(ebx + 0x90);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + ecx + 0xC);
    esi = esi + ecx;
    if (CMP_B(ebp, eax)) goto loc_003E6931; /* jb: below (unsigned <) */

loc_003E68D4: ;
    if (CMP_AE(ebp, MEM32(esi + 0x10))) goto loc_003E6931; /* jae: above or equal (unsigned >=) */

loc_003E68D9: ;
    eax = MEM32(esi + 0x28);
    if (TEST_NZ(eax, eax)) goto loc_003E6918; /* jne: not equal / not zero */

loc_003E68E0: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebx + 0x4C);
    edi = eax * 4;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003E68F4: ;
    edx = eax;
    esp = esp + 8;
    if (TEST_Z(edx, edx)) goto loc_003E6915; /* je: equal / zero */

loc_003E68FD: ;
    ecx = edi;
    ebp = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebp;
    ebp = MEM32(esp + 0x1C);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_003E6915: ;
    MEM32(esi + 0x28) = edx;

loc_003E6918: ;
    ecx = MEM32(esi + 0x28);
    if (TEST_Z(ecx, ecx)) goto loc_003E6931; /* je: equal / zero */

loc_003E691F: ;
    edx = MEM32(esi + 0xC);
    eax = ebp;
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 4))); }
    edx = MEM32(esp + 0x20);
    MEM32(ecx + eax * 4) = edx;

loc_003E6931: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x18);
    ecx = ZX8(MEM8(ebx + 0x7C));
    eax++;
    esi = esi + 0x2C;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_L(eax, ecx)) goto loc_003E68C0; /* jl: less (signed <) */

loc_003E6951: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003E6954: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E6960
 * Original: 0x003E6960 - 0x003E69C0 (96 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6960(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E6960: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(edi) = 0;
    esi = ZX8(MEM8(eax + 0x7C));
    edx = 2;
    if (CMP_LE(esi, edx)) goto loc_003E69BD; /* jle: less or equal (signed <=) */

loc_003E697D: ;
    ecx = MEM32(eax + 0x90);
    eax = MEM32(esp + 0x10);
    ecx = ecx + 0x58;
    PUSH32(esp, ebx);
    goto loc_003E6990;

    /* nop */

loc_003E6990: ;
    if (CMP_B(eax, MEM32(ecx + 0xC))) goto loc_003E69A1; /* jb: below (unsigned <) */

loc_003E6995: ;
    if (CMP_AE(eax, MEM32(ecx + 0x10))) goto loc_003E69A1; /* jae: above or equal (unsigned >=) */

loc_003E699A: ;
    ebx = MEM32(ecx + 0x28);
    if (TEST_NZ(ebx, ebx)) goto loc_003E69AD; /* jne: not equal / not zero */

loc_003E69A1: ;
    edx++;
    ecx = ecx + 0x2C;
    if (CMP_L(edx, esi)) goto loc_003E6990; /* jl: less (signed <) */

loc_003E69A9: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003E69AD: ;
    eax = eax - MEM32(ecx + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 4))); }
    ecx = MEM32(ecx + 0x28);
    POP32(esp, ebx);
    edx = MEM32(ecx + eax * 4);
    MEM32(edi) = edx;

loc_003E69BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E6A00
 * Original: 0x003E6A00 - 0x003E6A1E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E6A00: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    if (CMP_B(eax, MEM32(ecx + 0x88))) { sub_003E6A1E(); return; } /* jb: below (unsigned <) */

loc_003E6A10: ;
    if (CMP_AE(eax, MEM32(ecx + 0x8C))) { sub_003E6A1E(); return; } /* jae: above or equal (unsigned >=) */

loc_003E6A18: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003E6A1E
 * Original: 0x003E6A1E - 0x003E6A21 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6A1E(void)
{

loc_003E6A1E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003E6A30
 * Original: 0x003E6A30 - 0x003E6A7C (76 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E6A30: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x7C));
    if (CMP_LE(eax & eax, 0)) goto loc_003E6A76; /* jle: less or equal (signed <=) */

loc_003E6A3C: ;
    ecx = MEM32(ecx + 0x90);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;

loc_003E6A47: ;
    eax = MEM32(ecx + 8);
    if (TEST_Z(eax, eax)) goto loc_003E6A6D; /* je: equal / zero */

loc_003E6A4E: ;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003E6A6D; /* je: equal / zero */

loc_003E6A55: ;
    edx = MEM32(ecx + 4);
    esi = MEM32(ecx + 0xC);
    goto loc_003E6A60;

    /* nop */

loc_003E6A60: ;
    ebx = edx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = MEM32(ebx + esi);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_003E6A60; /* jne: not equal / not zero */

loc_003E6A6D: ;
    ecx = ecx + 0x2C;
    edi--;
    if ((edi != 0)) goto loc_003E6A47; /* jne: not equal / not zero */

loc_003E6A73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003E6A76: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003E6A80
 * Original: 0x003E6A80 - 0x003E6B4E (206 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6A80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(ebx + 0x7C));
    eax = 2;
    (void)0; /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    MEM32(esp + 4) = eax;
    if (CMP_BE(LO8(ecx), LO8(eax))) goto loc_003E6B4B; /* jbe: below or equal (unsigned <=) */

loc_003E6A9A: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0x58;
    /* nop */

loc_003E6AB0: ;
    esi = MEM32(ebx + 0x90);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + ecx + 0x28);
    esi = esi + ecx;
    if (TEST_Z(eax, eax)) goto loc_003E6B28; /* je: equal / zero */

loc_003E6AC4: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003E6B28; /* jle: less or equal (signed <=) */

loc_003E6ACD: ;
    /* nop */

loc_003E6AD0: ;
    eax = MEM32(esi + 0x28);
    eax = MEM32(eax + edi * 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_003E6AF5; /* je: equal / zero */

loc_003E6ADD: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    edx = edx + MEM32(esi + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E7330(); /* call 0x003E7330 */

loc_003E6AF0: ;
    esp = esp + 8;
    goto loc_003E6B20;

loc_003E6AF5: ;
    edx = MEM32(esi + 0xC);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = eax + edx;
    if (TEST_Z(MEM8(ebx + 0xC), 4)) goto loc_003E6B12; /* je: equal / zero */

loc_003E6B05: ;
    edx = MEM32(0x74FB2C);
    eax = eax + edx;
    edx = (uint32_t)(-(int32_t)edx);
    ecx = ecx + edx * 2;

loc_003E6B12: ;
    if (TEST_Z(ebp, ebp)) goto loc_003E6B20; /* je: equal / zero */

loc_003E6B16: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_003E6B1D: ;
    esp = esp + 0x10;

loc_003E6B20: ;
    eax = MEM32(esi + 8);
    edi++;
    if (CMP_L(edi, eax)) goto loc_003E6AD0; /* jl: less (signed <) */

loc_003E6B28: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x18);
    ecx = ZX8(MEM8(ebx + 0x7C));
    eax++;
    esi = esi + 0x2C;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_L(eax, ecx)) goto loc_003E6AB0; /* jl: less (signed <) */

loc_003E6B48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003E6B4B: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E6B50
 * Original: 0x003E6B50 - 0x003E6B89 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6B50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6B50: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    edx = ZX8(MEM8(ebp + 0x7C));
    eax = 2;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(edx, eax)) goto loc_003E6B83; /* jle: less or equal (signed <=) */

loc_003E6B64: ;
    ecx = MEM32(ebp + 0x90);
    edi = MEM32(esp + 0x14);
    ecx = ecx + 0x58;

loc_003E6B71: ;
    if (CMP_B(edi, MEM32(ecx + 0xC))) goto loc_003E6B7B; /* jb: below (unsigned <) */

loc_003E6B76: ;
    if (CMP_B(edi, MEM32(ecx + 0x10))) { sub_003E6B89(); return; } /* jb: below (unsigned <) */

loc_003E6B7B: ;
    eax++;
    ecx = ecx + 0x2C;
    if (CMP_L(eax, edx)) goto loc_003E6B71; /* jl: less (signed <) */

loc_003E6B83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E6B89
 * Original: 0x003E6B89 - 0x003E6BB2 (41 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6B89(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6B89: ;
    esi = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0xC);
    eax = edi;
    eax = eax - ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    if (TEST_S(eax, eax)) goto loc_003E6BAB; /* jl: less (signed <) */

loc_003E6B9B: ;
    if (CMP_G(eax, MEM32(ecx + 8))) goto loc_003E6BAB; /* jg: greater (signed >) */

loc_003E6BA0: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + ebx;
    if (CMP_EQ(ecx, edi)) { g_seh_ebp = ebp; sub_003E6BB2(); return; } /* je: equal / zero */

loc_003E6BAB: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E6BB2
 * Original: 0x003E6BB2 - 0x003E6BC9 (23 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6BB2(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6BB2: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E73F0(); /* call 0x003E73F0 */

loc_003E6BBC: ;
    esp = esp + 0x10;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E6BD0
 * Original: 0x003E6BD0 - 0x003E6C11 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6BD0: ;
    esp = esp - 0x110;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x120);
    (void)0; /* test MEM8(esi + 0xC), 8 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(esi + 0xC), 8)) { g_seh_ebp = ebp; sub_003E6C33(); return; } /* je: equal / zero */

loc_003E6BE7: ;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x11C) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { g_seh_ebp = ebp; sub_003E6C11(); return; } /* je: equal / zero */

loc_003E6BF8: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x20;
    PUSH32(esp, 0x84B680);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_003E6C0C: ;
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_003E6C38(); return; /* tail jmp 0x003E6C38 */

}

/**
 * sub_003E6C11
 * Original: 0x003E6C11 - 0x003E6C33 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6C11(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6C11: ;
    SET_LO8(eax, MEM8(0x84B578));
    if (TEST_Z(LO8(eax), LO8(eax))) { g_seh_ebp = ebp; sub_003E6C33(); return; } /* je: equal / zero */

loc_003E6C1A: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x20;
    PUSH32(esp, 0x84B578);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_003E6C2E: ;
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_003E6C38(); return; /* tail jmp 0x003E6C38 */

}

/**
 * sub_003E6C33
 * Original: 0x003E6C33 - 0x003E6C38 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6C33(void)
{

loc_003E6C33: ;
    MEM8(esp + 0x1C) = 0;
    sub_003E6C38(); return; /* seeded fallthrough continuation */

}

/**
 * sub_003E6C38
 * Original: 0x003E6C38 - 0x003E6ED9 (673 bytes, 233 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6C38(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6C38: ;
    SET_LO8(eax, MEM8(0x74FB26));
    ecx = MEM32(0x84B788);
    SET_LO8(edx, MEM8(0x74FB27));
    ebx = MEM32(esp + 0x128);
    edi = MEM32(0x84B784);
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(0x74FB24);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x60);
    MEM8(esp + 0x10) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0xC));
    ecx++;
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = HI8(eax);
    MEM32(esi + 0x60) = ecx;
    MEM32(esp + 0x14) = ebx;
    if (TEST_Z(LO8(eax), 4)) goto loc_003E6C8E; /* je: equal / zero */

loc_003E6C81: ;
    edx = MEM32(0x74FB2C);
    eax = ebx + edx * 2;
    MEM32(esp + 0x14) = eax;

loc_003E6C8E: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx), _icall_esp); /* indirect call */
    }

loc_003E6C99: ;
    ebp = eax;
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) goto loc_003E6E90; /* je: equal / zero */

loc_003E6CA6: ;
    edx = MEM32(esi + 0x4C);
    if (TEST_Z(edx, edx)) goto loc_003E6D4C; /* je: equal / zero */

loc_003E6CB1: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_003E6D59; /* je: equal / zero */

loc_003E6CBF: ;
    eax = esp + 0x1C;
    ebx = eax + 1;

loc_003E6CC6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003E6CC6; /* jne: not equal / not zero */

loc_003E6CCD: ;
    eax = eax - ebx;
    eax = eax + 0x19;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_003E6CD9: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003E6D3A; /* je: equal / zero */

loc_003E6CE0: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, MEM8(esp + 0x11));
    SET_LO8(edx, MEM8(esp + 0x13));
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x12));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(edx);
    if (TEST_Z(edi, edi)) goto loc_003E6D04; /* je: equal / zero */

loc_003E6CFF: ;
    MEM32(eax + 0xC) = edi;
    goto loc_003E6D0B;

loc_003E6D04: ;
    MEM32(eax + 0xC) = 0x587BE4;

loc_003E6D0B: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x5C);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x60);
    MEM32(eax + 8) = ecx;
    edi = eax + 0x18;
    ecx = esp + 0x1C;
    edx = ecx;
    MEM32(eax + 0x14) = edi;
    edi = edi - edx;
    /* nop */

loc_003E6D30: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003E6D30; /* jne: not equal / not zero */

loc_003E6D3A: ;
    ecx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x18), _icall_esp); /* indirect call */
    }

loc_003E6D43: ;
    ebx = MEM32(esp + 0x134);
    goto loc_003E6D56;

loc_003E6D4C: ;
    edx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_003E6D56: ;
    esp = esp + 0xC;

loc_003E6D59: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(LO8(eax), 2)) goto loc_003E6DA7; /* je: equal / zero */

loc_003E6D60: ;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_003E6DA7; /* je: equal / zero */

loc_003E6D64: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    edi = esp + 0x1C;
    SET_LO8(ebx, 0xEE);
    ecx = ebp;
    PUSH32(esp, 0); sub_003E7280(); /* call 0x003E7280 */

loc_003E6D7A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003E6DA0; /* je: equal / zero */

loc_003E6D81: ;
    eax = MEM32(0x84B798);
    if (TEST_Z(eax, eax)) goto loc_003E6DA0; /* je: equal / zero */

loc_003E6D8A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6454A8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E6D9D: ;
    esp = esp + 0x14;

loc_003E6DA0: ;
    ebx = MEM32(esp + 0x128);

loc_003E6DA7: ;
    (void)0; /* test MEM8(esi + 0xC), 4 - flags set for next jcc */
    edx = MEM32(0x74FB2C);
    if (TEST_Z(MEM8(esi + 0xC), 4)) goto loc_003E6DEF; /* je: equal / zero */

loc_003E6DB3: ;
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    edi = ebp;
    eax = 0xBBBBBBBBu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x128);
    ebp = ebp + edx;
    ecx = edx;
    ecx = ecx >> 2;
    edi = edi + ebp;
    eax = 0xDDDDDDDDu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ebx = MEM32(esp + 0x128);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_003E6DEF: ;
    if (TEST_Z(MEM8(esi + 0xC), 1)) goto loc_003E6E11; /* je: equal / zero */

loc_003E6DF5: ;
    ecx = ebx;
    ecx = ecx >> 2;
    eax = 0xCCCCCCCCu;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ebx = MEM32(esp + 0x128);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_003E6E11: ;
    eax = MEM32(esi + 0x50);
    edi = MEM32(esi + 0x34);
    SET_LO8(ecx, MEM8(esi + 0xC));
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    if (CMP_B(ebp, eax)) eax = ebp; /* cmovb */
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esi + 0x54);
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    if (CMP_A(ebp, eax)) eax = ebp; /* cmova */
    MEM32(esi + 0x54) = eax;
    eax = MEM32(esi + 0x30);
    eax = eax + ebx;
    edi = edi - ebx;
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = edi;
    eax = edi;
    if (TEST_Z(LO8(ecx), 4)) goto loc_003E6E51; /* je: equal / zero */

loc_003E6E41: ;
    edi = MEM32(esi + 0x2C);
    ecx = edx + edx;
    edi = edi + ecx;
    eax = eax - ecx;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x34) = eax;

loc_003E6E51: ;
    edi = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x40);
    edi++;
    eax = edi;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    if (CMP_BE(eax, ecx)) eax = ecx; /* cmovbe */
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esi + 0x44);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    if (CMP_B(ebx, eax)) eax = ebx; /* cmovb */
    MEM32(esi + 0x44) = eax;
    eax = MEM32(esi + 0x48);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    if (CMP_A(ebx, eax)) eax = ebx; /* cmova */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x48) = eax;
    if (TEST_Z(ebp, ebp)) goto loc_003E6E93; /* je: equal / zero */

loc_003E6E7F: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003E6EA3; /* je: equal / zero */

loc_003E6E86: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E6E8B: ;
    esp = esp + 0xC;
    goto loc_003E6EA1;

loc_003E6E90: ;
    MEM32(esi + 0x60) = MEM32(esi + 0x60) - 1;

loc_003E6E93: ;
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_003E6EA3; /* je: equal / zero */

loc_003E6E9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E6E9E: ;
    esp = esp + 8;

loc_003E6EA1: ;
    ebp = eax;

loc_003E6EA3: ;
    SET_LO8(eax, MEM8(esi + 0x76));
    SET_LO8(ecx, MEM8(esi + 0x78));
    edx = MEM32(0x74FB28);
    MEM8(esi + 0x75) = LO8(eax);
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM8(esi + 0x77) = LO8(ecx);
    POP32(esp, esi);
    MEM32(0x84B784) = eax;
    MEM32(0x84B788) = eax;
    MEM8(0x84B680) = LO8(eax);
    eax = ebp;
    POP32(esp, ebp);
    MEM32(0x74FB24) = edx;
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_003E6EE0
 * Original: 0x003E6EE0 - 0x003E6F0C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6EE0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    if (CMP_B(eax, MEM32(ecx + 0x50))) { sub_003E6F0C(); return; } /* jb: below (unsigned <) */

loc_003E6EED: ;
    if (CMP_A(eax, MEM32(ecx + 0x54))) { sub_003E6F0C(); return; } /* ja: above (unsigned >) */

loc_003E6EF2: ;
    if (TEST_Z(MEM8(ecx + 0xC), 4)) goto loc_003E6EFE; /* je: equal / zero */

loc_003E6EF8: ;
    eax = eax - MEM32(0x74FB2C);

loc_003E6EFE: ;
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_003E6F0C
 * Original: 0x003E6F0C - 0x003E6F0F (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6F0C(void)
{

loc_003E6F0C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003E6F10
 * Original: 0x003E6F10 - 0x003E7077 (359 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E6F10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E6F10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ebx = 0x3E6EE0;
    eax = 0x819B84;
    PUSH32(esp, 0); sub_003E1900(); /* call 0x003E1900 */

loc_003E6F2D: ;
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esi + 0xC));
    ebx = MEM32(esp + 0x20);
    esp = esp + 4;
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    ebp = edi;
    if (TEST_Z(LO8(eax), 4)) goto loc_003E6F4B; /* je: equal / zero */

loc_003E6F41: ;
    eax = MEM32(0x74FB2C);
    ebp = ebp - eax;
    ebx = ebx + eax * 2;

loc_003E6F4B: ;
    ecx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_003E6F53: ;
    edx = MEM32(esi + 0x10);
    edi = eax;
    eax = MEM32(edx + 8);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(eax, eax)) { g_seh_ebp = ebp; sub_003E7077(); return; } /* je: equal / zero */

loc_003E6F6A: ;
    if (TEST_Z(MEM8(esi + 0xC), 2)) goto loc_003E6F92; /* je: equal / zero */

loc_003E6F70: ;
    if (CMP_AE(ebx, edi)) goto loc_003E6F92; /* jae: above or equal (unsigned >=) */

loc_003E6F74: ;
    ecx = edi;
    ecx = ecx - ebx;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0xEEEEEEEEu;
    edi = ebx + ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x10);

loc_003E6F92: ;
    eax = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_003E6F9B: ;
    edx = eax;
    esp = esp + 0xC;
    if (TEST_Z(edx, edx)) goto loc_003E7056; /* je: equal / zero */

loc_003E6FA8: ;
    eax = MEM32(esi + 0x30);
    ecx = ebx;
    ecx = ecx - edi;
    eax = eax + ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(esi + 0x30) = eax;
    eax = edi;
    eax = eax - ebx;
    ecx = ecx + eax;
    (void)0; /* test MEM8(esi + 0xC), 1 - flags set for next jcc */
    MEM32(esi + 0x34) = ecx;
    if (TEST_Z(MEM8(esi + 0xC), 1)) goto loc_003E6FE3; /* je: equal / zero */

loc_003E6FC6: ;
    if (CMP_BE(ebx, edi)) goto loc_003E6FE3; /* jbe: below or equal (unsigned <=) */

loc_003E6FCA: ;
    ecx = ebx;
    ecx = ecx - edi;
    ebx = ecx;
    ecx = ecx >> 2;
    edi = edi + edx;
    eax = 0xCCCCCCCCu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_003E6FE3: ;
    if (TEST_Z(MEM8(esi + 0xC), 4)) goto loc_003E700A; /* je: equal / zero */

loc_003E6FE9: ;
    ecx = MEM32(0x74FB2C);
    edi = MEM32(esp + 0x1C);
    edx = edx + ecx;
    ebx = ecx;
    ecx = ecx >> 2;
    edi = edi + edx;
    eax = 0xDDDDDDDDu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_003E700A: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esp + 0x1C);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    if (CMP_B(edx, eax)) eax = edx; /* cmovb */
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esi + 0x54);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    if (CMP_A(edx, eax)) eax = edx; /* cmova */
    MEM32(esi + 0x54) = eax;
    eax = MEM32(esi + 0x44);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_B(ecx, eax)) eax = ecx; /* cmovb */
    MEM32(esi + 0x44) = eax;
    eax = MEM32(esi + 0x48);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_A(ecx, eax)) eax = ecx; /* cmova */
    MEM32(esi + 0x48) = eax;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_003E706F; /* je: equal / zero */

loc_003E7041: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E704B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    edx = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003E7056: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_003E706F; /* je: equal / zero */

loc_003E705D: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E706A: ;
    esp = esp + 0xC;
    edx = eax;

loc_003E706F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E7077
 * Original: 0x003E7077 - 0x003E707F (8 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7077(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7077: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E7080
 * Original: 0x003E7080 - 0x003E70EE (110 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7080(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E7080: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ebx = 0x3E6EE0;
    eax = 0x819B84;
    PUSH32(esp, 0); sub_003E1900(); /* call 0x003E1900 */

loc_003E709C: ;
    esi = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esi + 0xC));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 4)) goto loc_003E70B0; /* je: equal / zero */

loc_003E70AA: ;
    edi = edi - MEM32(0x74FB2C);

loc_003E70B0: ;
    edx = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x10);
    edx++;
    MEM32(esi + 0x68) = edx;
    eax = MEM32(ecx + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_003E70DE; /* je: equal / zero */

loc_003E70C1: ;
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E70CA: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_003E70DE; /* je: equal / zero */

loc_003E70D5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_003E70DB: ;
    esp = esp + 4;

loc_003E70DE: ;
    eax = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_003E70E6: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E70F0
 * Original: 0x003E70F0 - 0x003E7229 (313 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E70F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E70F0: ;
    esp = esp - 0x10;
    eax = MEM32(esi + 0xC);
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x74FB2C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(LO8(eax), 4)) goto loc_003E7128; /* je: equal / zero */

loc_003E7113: ;
    edi = ecx;
    edi = edi + edx;
    MEM32(esp + 0x20) = edi;
    edi = edx;
    edi = (uint32_t)(-(int32_t)edi);
    edi = ebx + edi * 2;
    MEM32(esp + 0x24) = edi;
    ebx = edi;

loc_003E7128: ;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_003E71C0; /* je: equal / zero */

loc_003E7130: ;
    ebp = edx + ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ebp = ebp + ebx;
    edi = esp + 0x10;
    SET_LO8(ebx, 0xBB);
    eax = edx;
    PUSH32(esp, 0); sub_003E7280(); /* call 0x003E7280 */

loc_003E7147: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003E7175; /* je: equal / zero */

loc_003E714E: ;
    eax = MEM32(0x84B798);
    if (TEST_Z(eax, eax)) goto loc_003E7175; /* je: equal / zero */

loc_003E7157: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x645488);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E7172: ;
    esp = esp + 0x14;

loc_003E7175: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x74FB2C);
    edi = esp + 0x10;
    SET_LO8(ebx, 0xDD);
    ecx = ebp;
    PUSH32(esp, 0); sub_003E7280(); /* call 0x003E7280 */

loc_003E718C: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003E71B6; /* je: equal / zero */

loc_003E7193: ;
    eax = MEM32(0x84B798);
    if (TEST_Z(eax, eax)) goto loc_003E71B6; /* je: equal / zero */

loc_003E719C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64546C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E71B3: ;
    esp = esp + 0x14;

loc_003E71B6: ;
    edx = MEM32(0x74FB2C);
    ebx = MEM32(esp + 0x24);

loc_003E71C0: ;
    if (TEST_Z(MEM8(esi + 0xC), 2)) goto loc_003E71E1; /* je: equal / zero */

loc_003E71C6: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    ebp = ecx;
    ecx = ecx >> 2;
    eax = 0xEEEEEEEEu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_003E71E1: ;
    if (TEST_Z(MEM8(esi + 0xC), 4)) goto loc_003E71F9; /* je: equal / zero */

loc_003E71E7: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x34);
    edx = edx + edx;
    ecx = ecx - edx;
    eax = eax + edx;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x34) = eax;

loc_003E71F9: ;
    edi = MEM32(esi + 0x34);
    ebp = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x24);
    edi = edi + ebx;
    ebp = ebp - ebx;
    MEM32(esi + 0x34) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x30) = ebp;
    edx--;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    MEM32(esi + 0x3C) = edx;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003E7225; /* je: equal / zero */

loc_003E721A: ;
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E7222: ;
    esp = esp + 8;

loc_003E7225: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003E7230
 * Original: 0x003E7230 - 0x003E727D (77 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7230: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x819B88);
    if (TEST_Z(esi, esi)) goto loc_003E727A; /* je: equal / zero */

loc_003E7240: ;
    PUSH32(esp, edi);

loc_003E7241: ;
    (void)0; /* test MEM8(esi + 0xC), 4 - flags set for next jcc */
    edi = ebp;
    if (TEST_Z(MEM8(esi + 0xC), 4)) goto loc_003E724F; /* je: equal / zero */

loc_003E7249: ;
    edi = edi - MEM32(0x74FB2C);

loc_003E724F: ;
    eax = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_003E7257: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003E7269; /* jne: not equal / not zero */

loc_003E725E: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_003E7241; /* jne: not equal / not zero */

loc_003E7265: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003E7269: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x14), _icall_esp); /* indirect call */
    }

loc_003E7276: ;
    esp = esp + 0xC;
    POP32(esp, edi);

loc_003E727A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E7280
 * Original: 0x003E7280 - 0x003E7327 (167 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7280(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E7280: ;
    PUSH32(esp, ecx);
    edx = ecx;
    edx = edx & 3;
    PUSH32(esp, esi);
    MEM32(esp + 4) = edx;
    if (0) goto loc_003E729F; /* jbe: below or equal (unsigned <=) */

loc_003E728D: ;
    esi = edx;
    /* nop */

loc_003E7290: ;
    if (CMP_BE(eax & eax, 0)) goto loc_003E729F; /* jbe: below or equal (unsigned <=) */

loc_003E7294: ;
    if (CMP_NE(MEM8(ecx), LO8(ebx))) goto loc_003E72FD; /* jne: not equal / not zero */

loc_003E7298: ;
    eax--;
    esi--;
    ecx++;
    if (CMP_A(esi & esi, 0)) goto loc_003E7290; /* ja: above (unsigned >) */

loc_003E729F: ;
    esi = ZX8(LO8(ebx));
    edx = esi;
    edx = edx << 8;
    edx = edx | esi;
    edx = edx << 8;
    edx = edx | esi;
    edx = edx << 8;
    edx = edx | esi;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    esi = ecx;
    if (CMP_BE(eax, 3)) goto loc_003E72CF; /* jbe: below or equal (unsigned <=) */

loc_003E72BA: ;
    /* nop */

loc_003E72C0: ;
    if (CMP_NE(MEM32(esi), edx)) goto loc_003E72E4; /* jne: not equal / not zero */

loc_003E72C4: ;
    eax = eax - 4;
    esi = esi + 4;
    if (CMP_A(eax, 3)) goto loc_003E72C0; /* ja: above (unsigned >) */

loc_003E72CF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = esi;
    if (CMP_BE(eax & eax, 0)) goto loc_003E72DF; /* jbe: below or equal (unsigned <=) */

loc_003E72D5: ;
    if (CMP_NE(MEM8(ecx), LO8(ebx))) goto loc_003E72FD; /* jne: not equal / not zero */

loc_003E72D9: ;
    eax--;
    ecx++;
    if (CMP_A(eax & eax, 0)) goto loc_003E72D5; /* ja: above (unsigned >) */

loc_003E72DF: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003E72E4: ;
    (void)0; /* cmp MEM8(esi), LO8(ebx) - flags set for next jcc */
    ecx = esi;
    if (CMP_NE(MEM8(esi), LO8(ebx))) goto loc_003E72FD; /* jne: not equal / not zero */

loc_003E72EA: ;
    /* nop */

loc_003E72F0: ;
    if (CMP_BE(eax & eax, 0)) goto loc_003E72FD; /* jbe: below or equal (unsigned <=) */

loc_003E72F4: ;
    SET_LO8(edx, MEM8(ecx + 1));
    ecx++;
    eax--;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_003E72F0; /* je: equal / zero */

loc_003E72FD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    MEM32(edi) = 0;
    if (CMP_BE(eax & eax, 0)) goto loc_003E731F; /* jbe: below or equal (unsigned <=) */

loc_003E730D: ;
    /* nop */

loc_003E7310: ;
    if (CMP_EQ(MEM8(ecx), LO8(ebx))) goto loc_003E731F; /* je: equal / zero */

loc_003E7314: ;
    esi = MEM32(edi);
    esi++;
    eax--;
    ecx++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi) = esi;
    if (CMP_A(eax & eax, 0)) goto loc_003E7310; /* ja: above (unsigned >) */

loc_003E731F: ;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E7330
 * Original: 0x003E7330 - 0x003E73E8 (184 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7330: ;
    SET_LO8(edx, MEM8(ebx + 0xC));
    esp = esp - 0x11C;
    (void)0; /* test LO8(edx), 4 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x124);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x12C);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(edx), 4)) goto loc_003E735F; /* je: equal / zero */

loc_003E7351: ;
    edx = MEM32(0x74FB2C);
    esi = esi + edx;
    edx = edx + edx;
    ecx = ecx - edx;
    edi = ecx;

loc_003E735F: ;
    if (TEST_Z(eax, eax)) goto loc_003E73D0; /* je: equal / zero */

loc_003E7363: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, MEM8(eax));
    MEM8(esp + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 3));
    MEM8(esp + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esp + 0xF) = LO8(edx);
    edx = MEM32(eax + 8);
    MEM8(esp + 0xE) = LO8(ecx);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x14);
    MEM32(esp + 0x1C) = edx;
    edx = esp + 0x24;
    MEM32(esp + 0x18) = ecx;
    edx = edx - eax;

loc_003E73A3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003E73A3; /* jne: not equal / not zero */

loc_003E73AD: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    eax = esp + 0x24;
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(ebp, ebp)) goto loc_003E73DE; /* je: equal / zero */

loc_003E73B9: ;
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_003E73C3: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

loc_003E73D0: ;
    if (TEST_Z(ebp, ebp)) goto loc_003E73DE; /* je: equal / zero */

loc_003E73D4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_003E73DB: ;
    esp = esp + 0x10;

loc_003E73DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

}

/**
 * sub_003E73F0
 * Original: 0x003E73F0 - 0x003E74A7 (183 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E73F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E73F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    esp = esp - 8;
    if (TEST_Z(LO8(eax), 4)) goto loc_003E74A3; /* je: equal / zero */

loc_003E7402: ;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_003E74A3; /* je: equal / zero */

loc_003E740A: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(0x74FB2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    edx = ecx + ebp;
    PUSH32(esp, edi);
    esi = ebp;
    ecx = esp + 0x10;
    esi = esi - eax;
    PUSH32(esp, ecx);
    edi = esp + 0x20;
    SET_LO8(ebx, 0xBB);
    ecx = esi;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_003E7280(); /* call 0x003E7280 */

loc_003E7438: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003E745E; /* je: equal / zero */

loc_003E743F: ;
    eax = MEM32(0x84B798);
    if (TEST_Z(eax, eax)) goto loc_003E745E; /* je: equal / zero */

loc_003E7448: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x645488);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E745B: ;
    esp = esp + 0x14;

loc_003E745E: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(0x74FB2C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edi = esp + 0x20;
    SET_LO8(ebx, 0xDD);
    ecx = esi;
    PUSH32(esp, 0); sub_003E7280(); /* call 0x003E7280 */

loc_003E7479: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_003E749F; /* je: equal / zero */

loc_003E7480: ;
    eax = MEM32(0x84B798);
    if (TEST_Z(eax, eax)) goto loc_003E749F; /* je: equal / zero */

loc_003E7489: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64546C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_003E749C: ;
    esp = esp + 0x14;

loc_003E749F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E74A3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E74B0
 * Original: 0x003E74B0 - 0x003E74E1 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E74B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E74B0: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO16(eax, MEM16(ecx));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E74C7; /* je: equal / zero */

loc_003E74BC: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM16(eax + esi + 0xE) = LO16(edx);

loc_003E74C7: ;
    eax = SX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + esi;
    SET_LO16(esi, MEM16(ecx));
    MEM16(eax + 0xC) = LO16(esi);
    MEM16(eax + 0xE) = 0xFFFF;
    MEM16(ecx) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E74F0
 * Original: 0x003E74F0 - 0x003E7519 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E74F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E74F0: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    SET_LO16(ecx, MEM16(eax + esi + 0xE));
    SET_LO16(edx, MEM16(eax + esi + 0xC));
    eax = eax + esi;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    if (CMP_EQ(LO16(ecx), LO16(edi))) { sub_003E7519(); return; } /* je: equal / zero */

loc_003E750C: ;
    ebx = SX16(LO16(ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1C);
    MEM16(ebx + esi + 0xC) = LO16(edx);
    g_seh_ebp = ebp; sub_003E7520(); return; /* tail jmp 0x003E7520 */

}

/**
 * sub_003E7540
 * Original: 0x003E7540 - 0x003E7710 (464 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7540: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84B79C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_003E75F2; /* jne: not equal / not zero */

loc_003E7558: ;
    ecx = 0x11;
    eax = 0; /* xor self */
    edi = 0x819BD8;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x819BD8) = 0x3E7A10;
    MEM32(0x819BDC) = 0x3E7D20;
    MEM32(0x819BE8) = 0x3E87D0;
    MEM32(0x819BE4) = 0x3E7D60;
    MEM32(0x819C04) = 0x3E8190;
    MEM32(0x819BEC) = 0x3E87B0;
    MEM32(0x819C0C) = 0x3E82E0;
    MEM32(0x819BF0) = 0x3E8830;
    MEM32(0x819BF4) = 0x3E8850;
    MEM32(0x819BE0) = 0x3E7FE0;
    MEM32(0x819C08) = 0x3E8220;
    MEM32(0x819C14) = 0x3E8380;
    MEM32(0x819BF8) = 0x3E8870;
    MEM32(0x84B79C) = 1;

loc_003E75F2: ;
    edi = MEM32(esp + 0x24);
    SET_LO8(eax, MEM8(esp + 0x28));
    ebp = ebp - edx;
    ebx = ebp;
    ebp = MEM32(esp + 0x1C);
    esi = esi - edi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(LO8(eax), 2)) goto loc_003E7641; /* je: equal / zero */

loc_003E7613: ;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0xEEEEEEEEu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    ecx = ebx;
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0xEEEEEEEEu;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    esi = MEM32(esp + 0x20);
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_003E7641: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    esi = esi + ebx;
    PUSH32(esp, 0); sub_003E62F0(); /* call 0x003E62F0 */

loc_003E764D: ;
    SET_LO16(ecx, MEM16(esp + 0x20));
    MEM16(edx + 0x80) = LO16(ecx);
    eax = 0; /* xor self */
    ebx = ebx | 0xFFFFFFFFu;
    esi = edx + 0x8C;
    ecx = ebp;
    ecx = ecx >> 2;
    MEM32(edx + 0x10) = 0x819BD8;
    MEM16(edx + 0x82) = LO16(eax);
    MEM16(edx + 0x84) = LO16(eax);
    MEM16(edx + 0x86) = LO16(ebx);
    MEM16(edx + 0x88) = LO16(ebx);
    MEM32(edx + 0x7C) = esi;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x20);
    esp = esp + 4;
    ecx = 0; /* xor self */
    if (CMP_LE(LO16(edi) & LO16(edi), 0)) goto loc_003E76CC; /* jle: less or equal (signed <=) */

loc_003E76A8: ;
    eax = esi + 0xA;
    goto loc_003E76B0;

    /* nop */

loc_003E76B0: ;
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax) = LO16(ebx);
    MEM16(eax + -2) = LO16(ebx);
    MEM16(eax + 2) = LO16(ebx);
    MEM16(eax + 4) = LO16(ebx);
    ecx++;
    eax = eax + 0x1C;
    if (CMP_L(LO16(ecx), LO16(edi))) goto loc_003E76B0; /* jl: less (signed <) */

loc_003E76CC: ;
    MEM16(edx + 0x82) = MEM16(edx + 0x82) + 1;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 4) = ecx;
    MEM16(esi + 8) = LO16(ebx);
    MEM16(esi + 0xA) = LO16(ebx);
    MEM16(esi + 0xC) = LO16(ebx);
    MEM16(esi + 0xE) = LO16(ebx);
    esi = MEM32(edx + 0x2C);
    ecx = MEM32(edx + 0x34);
    esi = esi + eax;
    POP32(esp, edi);
    MEM32(edx + 0x2C) = esi;
    POP32(esp, esi);
    ecx = ecx - eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(edx + 0x34) = ecx;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E7710
 * Original: 0x003E7710 - 0x003E7766 (86 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7710(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E7710: ;
    SET_LO16(eax, MEM16(ecx + 0x86));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    edx = MEM32(ecx + 0x7C);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E7731; /* je: equal / zero */

loc_003E7720: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx + 0xC);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003E7720; /* jne: not equal / not zero */

loc_003E7731: ;
    if (CMP_NE(ecx, MEM32(0x84B790))) goto loc_003E7743; /* jne: not equal / not zero */

loc_003E7739: ;
    MEM32(0x84B790) = 0;

loc_003E7743: ;
    eax = MEM32(ecx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ecx);
    MEM32(edx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_003E7751; /* je: equal / zero */

loc_003E774F: ;
    MEM32(eax) = edx;

loc_003E7751: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0;
    MEM32(ecx + 8) = 0xB6B9BDAEu;
    esp += 4; return; /* ret */

}

/**
 * sub_003E7770
 * Original: 0x003E7770 - 0x003E77CA (90 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7770: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x7C);
    SET_LO16(eax, MEM16(eax + 0x84));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E77C8; /* je: equal / zero */

loc_003E7781: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003E7784: ;
    ecx = SX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    esi = MEM32(ecx + ebx + 4);
    edi = ecx + ebx;
    esi = esi - MEM32(esp + 0x14);
    if (((int32_t)esi < 0)) goto loc_003E77BB; /* js: sign (negative) */

loc_003E7797: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edi);
    ecx = ecx + edx;
    edx = ZX16(MEM16(esp + 0x18));
    ebp = edx + -1;
    if (TEST_Z(ecx, ebp)) goto loc_003E77B7; /* je: equal / zero */

loc_003E77AB: ;
    edx--;
    ebp = edx + ecx;
    edx = ~edx;
    ebp = ebp & edx;
    ecx = ecx - ebp;
    esi = esi + ecx;

loc_003E77B7: ;
    if (CMP_GE(esi & esi, 0)) goto loc_003E77C5; /* jge: greater or equal (signed >=) */

loc_003E77BB: ;
    SET_LO16(eax, MEM16(edi + 0xC));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003E7784; /* jne: not equal / not zero */

loc_003E77C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003E77C8: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E77D0
 * Original: 0x003E77D0 - 0x003E785F (143 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E77D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E77D0: ;
    esp = esp - 8;
    ecx = MEM32(eax + 0x7C);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(eax + 0x84));
    eax = eax | 0xFFFFFFFFu;
    (void)0; /* cmp LO16(ebx), 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    if (CMP_EQ(LO16(ebx), 0xFFFFFFFFu)) goto loc_003E785A; /* je: equal / zero */

loc_003E77EF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003E77F2: ;
    ecx = MEM32(esp + 0x14);
    edx = SX16(LO16(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    esi = MEM32(edx + ecx + 4);
    edi = edx + ecx;
    esi = esi - MEM32(esp + 0x1C);
    if (((int32_t)esi < 0)) goto loc_003E784D; /* js: sign (negative) */

loc_003E7809: ;
    edx = MEM32(esp + 0x24);
    ebp = MEM32(edi);
    ecx = edx + ebp;
    edx = ZX16(MEM16(esp + 0x20));
    eax = edx + -1;
    if (TEST_Z(ecx, eax)) goto loc_003E782A; /* je: equal / zero */

loc_003E781E: ;
    edx--;
    eax = edx + ecx;
    edx = ~edx;
    eax = eax & edx;
    ecx = ecx - eax;
    esi = esi + ecx;

loc_003E782A: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    if (TEST_S(esi, esi)) goto loc_003E784D; /* jl: less (signed <) */

loc_003E7832: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E7847; /* je: equal / zero */

loc_003E7838: ;
    edx = MEM32(esp + 0x14);
    ecx = SX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    if (CMP_AE(ebp, MEM32(ecx + edx))) goto loc_003E784D; /* jae: above or equal (unsigned >=) */

loc_003E7847: ;
    eax = ebx;
    MEM32(esp + 0x10) = eax;

loc_003E784D: ;
    SET_LO16(ebx, MEM16(edi + 0xC));
    if (CMP_NE(LO16(ebx), 0xFFFFFFFFu)) goto loc_003E77F2; /* jne: not equal / not zero */

loc_003E7857: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003E785A: ;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E7860
 * Original: 0x003E7860 - 0x003E78E4 (132 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7860: ;
    esp = esp - 8;
    ecx = MEM32(eax + 0x7C);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax + 0x84));
    eax = eax | 0xFFFFFFFFu;
    (void)0; /* cmp LO16(edi), 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = 0;
    if (CMP_EQ(LO16(edi), 0xFFFFFFFFu)) goto loc_003E78DF; /* je: equal / zero */

loc_003E7883: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_003E7886: ;
    ecx = MEM32(esp + 0x14);
    edx = SX16(LO16(edi));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ebx = edx + ecx;
    edx = MEM32(ebx + 4);
    edx = edx - MEM32(esp + 0x1C);
    if (((int32_t)edx < 0)) goto loc_003E78D2; /* js: sign (negative) */

loc_003E789C: ;
    esi = MEM32(esp + 0x24);
    ecx = MEM32(ebx);
    ecx = ecx + esi;
    esi = ZX16(MEM16(esp + 0x20));
    ebp = esi + -1;
    if (TEST_Z(ecx, ebp)) goto loc_003E78BC; /* je: equal / zero */

loc_003E78B0: ;
    esi--;
    ebp = esi + ecx;
    esi = ~esi;
    ebp = ebp & esi;
    ecx = ecx - ebp;
    edx = edx + ecx;

loc_003E78BC: ;
    if (TEST_S(edx, edx)) goto loc_003E78D2; /* jl: less (signed <) */

loc_003E78C0: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E78CC; /* je: equal / zero */

loc_003E78C6: ;
    if (CMP_GE(MEM32(esp + 0x10), edx)) goto loc_003E78D2; /* jge: greater or equal (signed >=) */

loc_003E78CC: ;
    MEM32(esp + 0x10) = edx;
    eax = edi;

loc_003E78D2: ;
    SET_LO16(edi, MEM16(ebx + 0xC));
    if (CMP_NE(LO16(edi), 0xFFFFFFFFu)) goto loc_003E7886; /* jne: not equal / not zero */

loc_003E78DC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E78DF: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E78F0
 * Original: 0x003E78F0 - 0x003E7974 (132 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E78F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E78F0: ;
    esp = esp - 8;
    ecx = MEM32(eax + 0x7C);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax + 0x84));
    eax = eax | 0xFFFFFFFFu;
    (void)0; /* cmp LO16(edi), 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = 0;
    if (CMP_EQ(LO16(edi), 0xFFFFFFFFu)) goto loc_003E796F; /* je: equal / zero */

loc_003E7913: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_003E7916: ;
    ecx = MEM32(esp + 0x14);
    edx = SX16(LO16(edi));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ebx = edx + ecx;
    edx = MEM32(ebx + 4);
    edx = edx - MEM32(esp + 0x1C);
    if (((int32_t)edx < 0)) goto loc_003E7962; /* js: sign (negative) */

loc_003E792C: ;
    esi = MEM32(esp + 0x24);
    ecx = MEM32(ebx);
    ecx = ecx + esi;
    esi = ZX16(MEM16(esp + 0x20));
    ebp = esi + -1;
    if (TEST_Z(ecx, ebp)) goto loc_003E794C; /* je: equal / zero */

loc_003E7940: ;
    esi--;
    ebp = esi + ecx;
    esi = ~esi;
    ebp = ebp & esi;
    ecx = ecx - ebp;
    edx = edx + ecx;

loc_003E794C: ;
    if (TEST_S(edx, edx)) goto loc_003E7962; /* jl: less (signed <) */

loc_003E7950: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E795C; /* je: equal / zero */

loc_003E7956: ;
    if (CMP_LE(MEM32(esp + 0x10), edx)) goto loc_003E7962; /* jle: less or equal (signed <=) */

loc_003E795C: ;
    MEM32(esp + 0x10) = edx;
    eax = edi;

loc_003E7962: ;
    SET_LO16(edi, MEM16(ebx + 0xC));
    if (CMP_NE(LO16(edi), 0xFFFFFFFFu)) goto loc_003E7916; /* jne: not equal / not zero */

loc_003E796C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003E796F: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E7980
 * Original: 0x003E7980 - 0x003E7A0F (143 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7980: ;
    esp = esp - 8;
    ecx = MEM32(eax + 0x7C);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(eax + 0x84));
    eax = eax | 0xFFFFFFFFu;
    (void)0; /* cmp LO16(ebx), 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    if (CMP_EQ(LO16(ebx), 0xFFFFFFFFu)) goto loc_003E7A0A; /* je: equal / zero */

loc_003E799F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003E79A2: ;
    ecx = MEM32(esp + 0x14);
    edx = SX16(LO16(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    esi = MEM32(edx + ecx + 4);
    edi = edx + ecx;
    esi = esi - MEM32(esp + 0x1C);
    if (((int32_t)esi < 0)) goto loc_003E79FD; /* js: sign (negative) */

loc_003E79B9: ;
    edx = MEM32(esp + 0x24);
    ebp = MEM32(edi);
    ecx = edx + ebp;
    edx = ZX16(MEM16(esp + 0x20));
    eax = edx + -1;
    if (TEST_Z(ecx, eax)) goto loc_003E79DA; /* je: equal / zero */

loc_003E79CE: ;
    edx--;
    eax = edx + ecx;
    edx = ~edx;
    eax = eax & edx;
    ecx = ecx - eax;
    esi = esi + ecx;

loc_003E79DA: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    if (TEST_S(esi, esi)) goto loc_003E79FD; /* jl: less (signed <) */

loc_003E79E2: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E79F7; /* je: equal / zero */

loc_003E79E8: ;
    edx = MEM32(esp + 0x14);
    ecx = SX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    if (CMP_BE(ebp, MEM32(ecx + edx))) goto loc_003E79FD; /* jbe: below or equal (unsigned <=) */

loc_003E79F7: ;
    eax = ebx;
    MEM32(esp + 0x10) = eax;

loc_003E79FD: ;
    SET_LO16(ebx, MEM16(edi + 0xC));
    if (CMP_NE(LO16(ebx), 0xFFFFFFFFu)) goto loc_003E79A2; /* jne: not equal / not zero */

loc_003E7A07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003E7A0A: ;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E7A10
 * Original: 0x003E7A10 - 0x003E7A8D (125 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7A10: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(esi + 0x75));
    eax = MEM32(esi + 0x70);
    PUSH32(esp, edi);
    edi = 1;
    edi = edi << LO8(ecx);
    if (CMP_A(eax, 5)) { sub_003E7A8D(); return; } /* ja: above (unsigned >) */

loc_003E7A29: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x3E7AF0)); return; /* indirect tail jmp */

    ebp = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_003E7A98(); return; /* tail jmp 0x003E7A98 */

    ebp = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    ecx = ebp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_003E77D0(); /* call 0x003E77D0 */

loc_003E7A4F: ;
    g_seh_ebp = ebp; sub_003E7A9F(); return; /* tail jmp 0x003E7A9F */

    ebp = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    edx = ebp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_003E7980(); /* call 0x003E7980 */

loc_003E7A63: ;
    g_seh_ebp = ebp; sub_003E7A9F(); return; /* tail jmp 0x003E7A9F */

    ebp = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    eax = ebp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_003E78F0(); /* call 0x003E78F0 */

loc_003E7A77: ;
    g_seh_ebp = ebp; sub_003E7A9F(); return; /* tail jmp 0x003E7A9F */

    ebp = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    ecx = ebp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_003E7860(); /* call 0x003E7860 */

loc_003E7A8B: ;
    g_seh_ebp = ebp; sub_003E7A9F(); return; /* tail jmp 0x003E7A9F */

}

/**
 * sub_003E7B10
 * Original: 0x003E7B10 - 0x003E7BB1 (161 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7B10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    edi = ecx;
    PUSH32(esp, ebx);
    esi = edi;
    PUSH32(esp, 0); sub_003E7C40(); /* call 0x003E7C40 */

loc_003E7B27: ;
    esi = MEM32(edi + 0x7C);
    SET_LO16(eax, MEM16(ebx));
    ecx = edi + 0x84;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E74F0(); /* call 0x003E74F0 */

loc_003E7B39: ;
    SET_LO16(eax, MEM16(edi + 0x88));
    SET_LO16(ecx, MEM16(ebx));
    esp = esp + 0x10;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E7B57; /* je: equal / zero */

loc_003E7B4C: ;
    edx = SX16(LO16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEM16(edx + esi + 0xE) = LO16(ecx);

loc_003E7B57: ;
    SET_LO16(edx, MEM16(edi + 0x88));
    eax = SX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM16(eax + esi + 0xC) = LO16(edx);
    edx = ZX16(MEM16(esp + 0x10));
    eax = eax + esi;
    MEM16(eax + 0xE) = 0xFFFF;
    MEM16(edi + 0x88) = LO16(ecx);
    eax = (uint32_t)(int32_t)SMEM16(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edi = MEM32(eax + esi);
    ecx = eax + esi;
    eax = edx + ebp;
    edx--;
    eax = eax + edi + -1;
    edx = ~edx;
    eax = eax & edx;
    MEM32(ecx + 0x18) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    SET_LO8(edx, MEM8(ecx + esi + 0x12));
    ecx = ecx + esi + 0x12;
    POP32(esp, edi);
    SET_LO8(edx, LO8(edx) | 1);
    POP32(esp, esi);
    eax = eax - ebp;
    MEM8(ecx) = LO8(edx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E7BC0
 * Original: 0x003E7BC0 - 0x003E7C3C (124 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7BC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esp + 0xC));
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x7C);
    ecx = LO16(ebp);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ecx + edx);
    eax = eax - edi;
    ecx = ecx + edx;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + 0x82));
    ebx = eax;
    eax = SX16(LO16(edi));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    SET_LO16(eax, MEM16(eax + edx + 0x10));
    edi++;
    MEM16(esi + 0x82) = LO16(edi);
    SET_LO16(edi, MEM16(ecx + 0xA));
    esi = SX16(LO16(eax));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    esi = esi + edx;
    MEM16(esi + 0xA) = LO16(edi);
    MEM16(esi + 8) = LO16(ebp);
    SET_LO16(edi, MEM16(ecx + 0xA));
    if (CMP_EQ(LO16(edi), 0xFFFFFFFFu)) goto loc_003E7C22; /* je: equal / zero */

loc_003E7C17: ;
    edi = SX16(LO16(edi));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    MEM16(edi + edx + 8) = LO16(eax);

loc_003E7C22: ;
    edx = MEM32(ecx);
    edx = edx + ebx;
    MEM16(ecx + 0xA) = LO16(eax);
    MEM32(esi) = edx;
    edx = MEM32(ecx + 4);
    edx = edx - ebx;
    POP32(esp, edi);
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E7C40
 * Original: 0x003E7C40 - 0x003E7D19 (217 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7C40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    SET_LO16(edi, LO16(eax));
    SET_LO16(eax, MEM16(esi + 0x82));
    if (CMP_GE(LO16(eax), MEM16(esi + 0x80))) goto loc_003E7D16; /* jge: greater or equal (signed >=) */

loc_003E7C59: ;
    ecx = MEM32(esp + 0xC);
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x7C);
    ecx = MEM32(edx + ebp + 4);
    eax = edx + ebp;
    edx = MEM32(eax);
    ecx = ecx + edx;
    eax = ecx;
    eax = eax - edx;
    if (CMP_B(eax, 0x28)) goto loc_003E7D15; /* jb: below (unsigned <) */

loc_003E7C7F: ;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    (void)0; /* cmp MEM32(esi + 0x70), 5 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(esi + 0x70), 5)) ? 1 : 0); /* sete */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_003E7CB5; /* je: equal / zero */

loc_003E7C91: ;
    ebx = MEM32(esp + 0x18);
    eax = ZX16(LO16(edi));
    eax--;
    edi = ecx;
    edi = edi - ebx;
    ebx = MEM32(esp + 0x1C);
    eax = ~eax;
    eax = eax & edi;
    eax = eax - ebx;
    if (CMP_B(eax, edx)) goto loc_003E7D14; /* jb: below (unsigned <) */

loc_003E7CAB: ;
    if (CMP_A(eax, ecx)) goto loc_003E7D14; /* ja: above (unsigned >) */

loc_003E7CAF: ;
    ecx = eax;
    ecx = ecx - edx;
    goto loc_003E7CD8;

loc_003E7CB5: ;
    ebx = MEM32(esp + 0x1C);
    edi = ZX16(LO16(edi));
    eax = edi + edx;
    edi--;
    eax = eax + ebx + -1;
    ebx = MEM32(esp + 0x18);
    edi = ~edi;
    eax = eax & edi;
    eax = eax + ebx;
    if (CMP_B(eax, edx)) goto loc_003E7D14; /* jb: below (unsigned <) */

loc_003E7CD2: ;
    if (CMP_A(eax, ecx)) goto loc_003E7D14; /* ja: above (unsigned >) */

loc_003E7CD6: ;
    ecx = ecx - eax;

loc_003E7CD8: ;
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, 0x20 - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(ecx, 0x20)) ? 1 : 0); /* setge */
    ecx = edx;
    if (TEST_Z(ecx, ecx)) goto loc_003E7D14; /* je: equal / zero */

loc_003E7CE6: ;
    edi = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi));
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_003E7BC0(); /* call 0x003E7BC0 */

loc_003E7CF7: ;
    esp = esp + 4;
    ecx = esi + 0x84;
    edx = eax;
    eax = ebp;
    PUSH32(esp, 0); sub_003E74B0(); /* call 0x003E74B0 */

loc_003E7D09: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_003E7D14; /* je: equal / zero */

loc_003E7D11: ;
    MEM16(edi) = LO16(edx);

loc_003E7D14: ;
    POP32(esp, ebx);

loc_003E7D15: ;
    POP32(esp, ebp);

loc_003E7D16: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E7D20
 * Original: 0x003E7D20 - 0x003E7D4F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E7D20: ;
    edx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(edx + -8));
    if (TEST_S(LO16(eax), LO16(eax))) { sub_003E7D4F(); return; } /* jl: less (signed <) */

loc_003E7D2D: ;
    ecx = MEM32(esp + 8);
    if (CMP_GE(LO16(eax), MEM16(ecx + 0x80))) { sub_003E7D4F(); return; } /* jge: greater or equal (signed >=) */

loc_003E7D3A: ;
    ecx = MEM32(ecx + 0x7C);
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    if (CMP_NE(edx, MEM32(eax + ecx + 0x18))) { sub_003E7D4F(); return; } /* jne: not equal / not zero */

loc_003E7D49: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003E7D60
 * Original: 0x003E7D60 - 0x003E7DA7 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7D60(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E7D60: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x7C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(eax + -8));
    ecx = ebx + 0x88;
    PUSH32(esp, ecx);
    eax = edi;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_003E74F0(); /* call 0x003E74F0 */

loc_003E7D86: ;
    edx = SX16(LO16(edi));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = edx + esi;
    SET_LO8(edx, MEM8(ecx + 0x13));
    esp = esp + 4;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_003E7DA7(); return; } /* jne: not equal / not zero */

loc_003E7D99: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E7E40(); /* call 0x003E7E40 */

loc_003E7DA0: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E7E40
 * Original: 0x003E7E40 - 0x003E7FD9 (409 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E7E40: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(ebp + 0x7C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + ebx;
    eax = MEM32(edi + 0x18);
    ecx = eax + -8;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    esi = ebp;
    PUSH32(esp, 0); sub_003E70F0(); /* call 0x003E70F0 */

loc_003E7E6D: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), 2)) goto loc_003E7E85; /* je: equal / zero */

loc_003E7E77: ;
    eax = MEM32(esp + 0x18);
    edx = 0xEEEEEEEEu;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;

loc_003E7E85: ;
    SET_LO8(edx, MEM8(edi + 0x12));
    esi = MEM32(esp + 0x1C);
    SET_LO8(edx, LO8(edx) & 0xFC);
    MEM8(edi + 0x12) = LO8(edx);
    edx = ebp + 0x84;
    MEM32(edi + 0x18) = 0;
    SET_LO16(eax, MEM16(edx));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E7EB7; /* je: equal / zero */

loc_003E7EAC: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM16(eax + ebx + 0xE) = LO16(esi);

loc_003E7EB7: ;
    SET_LO16(ecx, MEM16(edx));
    MEM16(edi + 0xC) = LO16(ecx);
    MEM16(edi + 0xE) = 0xFFFF;
    MEM16(edx) = LO16(esi);
    SET_LO16(eax, MEM16(edi + 0xA));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    SET_LO16(ecx, MEM16(edi + 8));
    MEM16(esp + 0x10) = LO16(ecx);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E7F55; /* je: equal / zero */

loc_003E7EDA: ;
    ecx = SX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = ecx + ebx;
    if (TEST_NZ(MEM8(ecx + 0x12), 1)) goto loc_003E7F55; /* jne: not equal / not zero */

loc_003E7EE8: ;
    esi = MEM32(ecx + 4);
    MEM32(edi + 4) = MEM32(edi + 4) + esi;
    SET_LO16(esi, MEM16(ecx + 0xA));
    MEM16(edi + 0xA) = LO16(esi);
    SET_LO16(esi, MEM16(ecx + 0xA));
    if (CMP_EQ(LO16(esi), 0xFFFFFFFFu)) goto loc_003E7F14; /* je: equal / zero */

loc_003E7F00: ;
    edx = SX16(LO16(esi));
    SET_LO16(esi, MEM16(esp + 0x1C));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEM16(edx + ebx + 8) = LO16(esi);
    edx = MEM32(esp + 0x18);

loc_003E7F14: ;
    MEM16(ebp + 0x82) = MEM16(ebp + 0x82) - 1;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x82);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    MEM16(esi + ebx + 0x10) = LO16(eax);
    esi = esi | 0xFFFFFFFFu;
    MEM16(ecx + 0xA) = LO16(esi);
    MEM16(ecx + 8) = LO16(esi);
    PUSH32(esp, edx);
    esi = ebx;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0;
    PUSH32(esp, 0); sub_003E74F0(); /* call 0x003E74F0 */

loc_003E7F4A: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x20);
    esp = esp + 4;

loc_003E7F55: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E7FD3; /* je: equal / zero */

loc_003E7F5F: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    SET_LO8(ecx, MEM8(eax + ebx + 0x12));
    eax = eax + ebx;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_003E7FD3; /* jne: not equal / not zero */

loc_003E7F70: ;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + ecx;
    SET_LO16(ecx, MEM16(edi + 0xA));
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(eax, MEM16(edi + 0xA));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E7F98; /* je: equal / zero */

loc_003E7F88: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM16(eax + ebx + 8) = LO16(ecx);

loc_003E7F98: ;
    MEM16(ebp + 0x82) = MEM16(ebp + 0x82) - 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x82);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM16(eax + ebx + 0x10) = LO16(esi);
    eax = eax | 0xFFFFFFFFu;
    MEM16(edi + 0xA) = LO16(eax);
    MEM16(edi + 8) = LO16(eax);
    eax = esi;
    PUSH32(esp, edx);
    esi = ebx;
    MEM32(edi) = 0;
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0); sub_003E74F0(); /* call 0x003E74F0 */

loc_003E7FD0: ;
    esp = esp + 4;

loc_003E7FD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E7FE0
 * Original: 0x003E7FE0 - 0x003E8021 (65 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E7FE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(esi + -8));
    edx = SX16(LO16(ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x7C);
    if (TEST_Z(MEM8(edx + edi + 0x12), 1)) { sub_003E8021(); return; } /* je: equal / zero */

loc_003E7FFF: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esi + -4);
    edx = edi;
    edx = edx - ebx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E8030(); /* call 0x003E8030 */

loc_003E8011: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_003E8021(); return; } /* je: equal / zero */

loc_003E8018: ;
    MEM32(esi + -4) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8030
 * Original: 0x003E8030 - 0x003E804C (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8030(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E8030: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = (uint32_t)(-(int32_t)ebx);
    (void)0; /* cmp ebx, 0x20 - flags set for next jcc */
    edi = eax;
    esi = MEM32(edi + 0x7C);
    if (CMP_GE(ebx, 0x20)) { sub_003E804C(); return; } /* jge: greater or equal (signed >=) */

loc_003E8043: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8190
 * Original: 0x003E8190 - 0x003E8217 (135 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E8190: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    SET_LO16(edx, MEM16(ebx + 0x86));
    PUSH32(esp, ebp);
    ebp = ebp | 0xFFFFFFFFu;
    (void)0; /* cmp LO16(edx), LO16(ebp) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x7C);
    if (CMP_EQ(LO16(edx), LO16(ebp))) goto loc_003E8213; /* je: equal / zero */

loc_003E81A9: ;
    PUSH32(esp, esi);
    /* nop */

loc_003E81B0: ;
    eax = SX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    SET_LO8(ecx, MEM8(eax + edi + 0x13));
    SET_LO16(esi, MEM16(eax + edi + 0xC));
    eax = eax + edi;
    SET_LO8(ecx, LO8(ecx) - 1);
    MEM8(eax + 0x13) = LO8(ecx);
    if ((LO8(ecx) != 0)) goto loc_003E820B; /* jne: not equal / not zero */

loc_003E81C8: ;
    SET_LO16(ecx, MEM16(eax + 0xE));
    if (CMP_EQ(LO16(ecx), LO16(ebp))) goto loc_003E81DE; /* je: equal / zero */

loc_003E81D1: ;
    ebp = SX16(LO16(ecx));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEM16(edi + ebp + 0xC) = LO16(esi);
    goto loc_003E81E5;

loc_003E81DE: ;
    MEM16(ebx + 0x86) = LO16(esi);

loc_003E81E5: ;
    if (CMP_EQ(LO16(esi), 0xFFFFFFFFu)) goto loc_003E81F6; /* je: equal / zero */

loc_003E81EB: ;
    ebp = SX16(LO16(esi));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1C);
    MEM16(edi + ebp + 0xE) = LO16(ecx);

loc_003E81F6: ;
    PUSH32(esp, edx);
    ebp = ebp | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    MEM16(eax + 0xC) = LO16(ebp);
    MEM16(eax + 0xE) = LO16(ebp);
    PUSH32(esp, 0); sub_003E7E40(); /* call 0x003E7E40 */

loc_003E8208: ;
    esp = esp + 8;

loc_003E820B: ;
    (void)0; /* cmp LO16(esi), LO16(ebp) - flags set for next jcc */
    edx = esi;
    if (CMP_NE(LO16(esi), LO16(ebp))) goto loc_003E81B0; /* jne: not equal / not zero */

loc_003E8212: ;
    POP32(esp, esi);

loc_003E8213: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8220
 * Original: 0x003E8220 - 0x003E82D6 (182 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8220(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E8220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x7C);
    ecx = esi;
    PUSH32(esp, 0); sub_003E87E0(); /* call 0x003E87E0 */

loc_003E822F: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E8246; /* je: equal / zero */

loc_003E8235: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx + 0xA);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003E8235; /* jne: not equal / not zero */

loc_003E8246: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x88));
    eax = ecx;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E8271; /* je: equal / zero */

loc_003E8257: ;
    goto loc_003E8260;

    /* nop */

loc_003E8260: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx + 0xC);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003E8260; /* jne: not equal / not zero */

loc_003E8271: ;
    SET_LO16(eax, MEM16(esi + 0x84));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E8291; /* je: equal / zero */

loc_003E827E: ;
    edi = edi;

loc_003E8280: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx + 0xC);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003E8280; /* jne: not equal / not zero */

loc_003E8291: ;
    SET_LO16(eax, MEM16(esi + 0x86));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E82B1; /* je: equal / zero */

loc_003E829F: ;
    /* nop */

loc_003E82A0: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx + 0xC);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003E82A0; /* jne: not equal / not zero */

loc_003E82B1: ;
    eax = ecx;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E82D3; /* je: equal / zero */

loc_003E82B9: ;
    /* nop */

loc_003E82C0: ;
    ecx = SX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + edx + 0xC));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003E82C0; /* jne: not equal / not zero */

loc_003E82D3: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003E82E0
 * Original: 0x003E82E0 - 0x003E8374 (148 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E82E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E82E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x7C);
    edx = ebp;
    ecx = ebx;
    PUSH32(esp, 0); sub_003E87E0(); /* call 0x003E87E0 */

loc_003E82F2: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_003E8371; /* je: equal / zero */

loc_003E82F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    edi = edi;

loc_003E8300: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    esi = eax + ebp;
    SET_LO8(eax, MEM8(esi + 0x12));
    if (TEST_Z(LO8(eax), 1)) goto loc_003E833F; /* je: equal / zero */

loc_003E8310: ;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + -4);
    if (TEST_Z(LO8(eax), 2)) goto loc_003E832D; /* je: equal / zero */

loc_003E831B: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E7330(); /* call 0x003E7330 */

loc_003E8328: ;
    esp = esp + 8;
    goto loc_003E8365;

loc_003E832D: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0); sub_003E7330(); /* call 0x003E7330 */

loc_003E833A: ;
    esp = esp + 8;
    goto loc_003E8365;

loc_003E833F: ;
    (void)0; /* test MEM8(ebx + 0xC), 4 - flags set for next jcc */
    ecx = MEM32(esi);
    eax = MEM32(esi + 4);
    if (TEST_Z(MEM8(ebx + 0xC), 4)) goto loc_003E8357; /* je: equal / zero */

loc_003E834A: ;
    edx = MEM32(0x74FB2C);
    ecx = ecx + edx;
    edx = (uint32_t)(-(int32_t)edx);
    eax = eax + edx * 2;

loc_003E8357: ;
    if (TEST_Z(edi, edi)) goto loc_003E8365; /* je: equal / zero */

loc_003E835B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_003E8362: ;
    esp = esp + 0x10;

loc_003E8365: ;
    SET_LO16(eax, MEM16(esi + 0xA));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003E8300; /* jne: not equal / not zero */

loc_003E836F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003E8371: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8380
 * Original: 0x003E8380 - 0x003E87A4 (1060 bytes, 317 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E8380: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6456E0);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8395: ;
    eax = MEM32(ebx + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6456CC);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E83A3: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6456B8);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E83B5: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x82);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6456A4);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E83C7: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x645690);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E83D9: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x86);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64567C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E83EB: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x88);
    PUSH32(esp, edx);
    PUSH32(esp, 0x645668);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E83FD: ;
    ebp = MEM32(ebx + 0x7C);
    edi = 0; /* xor self */
    esp = esp + 0x38;
    (void)0; /* cmp MEM16(ebx + 0x80), LO16(edi) - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = edi;
    if (CMP_LE(MEM16(ebx + 0x80), LO16(edi))) goto loc_003E8766; /* jle: less or equal (signed <=) */

loc_003E841A: ;
    PUSH32(esp, esi);
    esi = ebp + 0x14;
    edi = edi;

loc_003E8420: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64565C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E842B: ;
    eax = MEM32(esi + -20);
    ecx = MEM32(esi + -16);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x645648);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E843F: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x645638);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E844D: ;
    eax = MEM32(esi + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64562C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E845B: ;
    ecx = ZX8(MEM8(esi + -2));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64561C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E846A: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + -12);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64560C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8479: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + -10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6455FC);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8488: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + -8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6455EC);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8497: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + -6);
    esp = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6455DC);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E84A9: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6455D0);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E84B8: ;
    ecx = ZX8(MEM8(esi + -1));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6455C4);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E84C7: ;
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E84D1: ;
    SET_LO8(eax, MEM8(esi + -2));
    esp = esp + 0x1C;
    if (TEST_Z(LO8(eax), 1)) goto loc_003E874E; /* je: equal / zero */

loc_003E84DF: ;
    edi = MEM32(esi + 4);
    edx = MEM32(edi + -4);
    edx = edx + edi;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6455AC);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E84F3: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6455A0);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8501: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + -8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x645594);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8510: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + -6);
    PUSH32(esp, edx);
    PUSH32(esp, 0x645588);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E851F: ;
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8529: ;
    eax = MEM32(esi);
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_003E85C8; /* je: equal / zero */

loc_003E8536: ;
    ecx = ZX8(MEM8(eax + 3));
    edx = ZX8(MEM8(eax + 2));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 1));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x645568);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8553: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x645558);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8563: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x645548);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8573: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0xC);
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) goto loc_003E8596; /* je: equal / zero */

loc_003E857F: ;
    eax = ecx;
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64553C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8593: ;
    esp = esp + 0xC;

loc_003E8596: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x645528);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E85A6: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x14);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003E85BB; /* je: equal / zero */

loc_003E85B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E85B8: ;
    esp = esp + 4;

loc_003E85BB: ;
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E85C5: ;
    esp = esp + 4;

loc_003E85C8: ;
    if (TEST_Z(MEM8(ebx + 0xC), 4)) goto loc_003E8621; /* je: equal / zero */

loc_003E85CE: ;
    ebp = MEM32(esi + 4);
    ebp = ebp - MEM32(0x74FB2C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x645514);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E85E2: ;
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) goto loc_003E8614; /* je: equal / zero */

loc_003E85E9: ;
    eax = MEM32(0x74FB2C);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003E8610; /* jbe: below or equal (unsigned <=) */

loc_003E85F4: ;
    ecx = ZX8(MEM8(ebx + ebp));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64550C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8603: ;
    eax = MEM32(0x74FB2C);
    esp = esp + 8;
    ebx++;
    if (CMP_B(ebx, eax)) goto loc_003E85F4; /* jb: below (unsigned <) */

loc_003E8610: ;
    ebx = MEM32(esp + 0x1C);

loc_003E8614: ;
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E861E: ;
    esp = esp + 4;

loc_003E8621: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6454F8);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E862F: ;
    eax = MEM32(edi + -4);
    esp = esp + 8;
    ebp = 0; /* xor self */
    if (CMP_BE(eax, 0x1F)) goto loc_003E86B3; /* jbe: below or equal (unsigned <=) */

loc_003E863C: ;
    /* nop */

loc_003E8640: ;
    eax = MEM32(esi + 4);
    ecx = ZX8(MEM8(eax + ebp));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64550C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8652: ;
    esp = esp + 8;
    ebp++;
    if (CMP_L(ebp, 0x20)) goto loc_003E8640; /* jl: less (signed <) */

loc_003E865B: ;
    if (CMP_BE(MEM32(edi + -4), 0x3F)) goto loc_003E86D4; /* jbe: below or equal (unsigned <=) */

loc_003E8661: ;
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E866B: ;
    PUSH32(esp, 0x6454E0);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8675: ;
    PUSH32(esp, 0x6454DC);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E867F: ;
    PUSH32(esp, 0x6454E0);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8689: ;
    esp = esp + 0x10;
    ebp = 0; /* xor self */
    edi = edi;

loc_003E8690: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edi + -4);
    edx = edx + ebp;
    ecx = ZX8(MEM8(edx + eax + -32));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64550C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E86A8: ;
    esp = esp + 8;
    ebp++;
    if (CMP_L(ebp, 0x20)) goto loc_003E8690; /* jl: less (signed <) */

loc_003E86B1: ;
    goto loc_003E86D4;

loc_003E86B3: ;
    if (CMP_LE(eax & eax, 0)) goto loc_003E86D4; /* jle: less or equal (signed <=) */

loc_003E86B7: ;
    edx = MEM32(esi + 4);
    eax = ZX8(MEM8(edx + ebp));
    PUSH32(esp, eax);
    PUSH32(esp, 0x64550C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E86C9: ;
    eax = MEM32(edi + -4);
    esp = esp + 8;
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_003E86B7; /* jl: less (signed <) */

loc_003E86D4: ;
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E86DE: ;
    SET_LO8(eax, MEM8(ebx + 0xC));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 4)) goto loc_003E8739; /* je: equal / zero */

loc_003E86E8: ;
    ebp = MEM32(esi + 4);
    ebp = ebp + MEM32(edi + -4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x6454C8);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E86F9: ;
    esp = esp + 8;
    if (TEST_Z(ebp, ebp)) goto loc_003E872C; /* je: equal / zero */

loc_003E8700: ;
    eax = MEM32(0x74FB2C);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_003E872C; /* jbe: below or equal (unsigned <=) */

loc_003E870B: ;
    goto loc_003E8710;

    /* nop */

loc_003E8710: ;
    ecx = ZX8(MEM8(edi + ebp));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64550C);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E871F: ;
    eax = MEM32(0x74FB2C);
    esp = esp + 8;
    edi++;
    if (CMP_B(edi, eax)) goto loc_003E8710; /* jb: below (unsigned <) */

loc_003E872C: ;
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8736: ;
    esp = esp + 4;

loc_003E8739: ;
    PUSH32(esp, 0x5D5164);
    PUSH32(esp, 0); sub_003E6220(); /* call 0x003E6220 */

loc_003E8743: ;
    ebp = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    esp = esp + 4;

loc_003E874E: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x80);
    edi++;
    esi = esi + 0x1C;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(edi, edx)) goto loc_003E8420; /* jl: less (signed <) */

loc_003E8765: ;
    POP32(esp, esi);

loc_003E8766: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x84);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003E877F; /* je: equal / zero */

loc_003E8772: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax + ebp + 0xC);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_003E8772; /* jne: not equal / not zero */

loc_003E877F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x86);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003E879D; /* je: equal / zero */

loc_003E878B: ;
    goto loc_003E8790;

    /* nop */

loc_003E8790: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax + ebp + 0xC);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_003E8790; /* jne: not equal / not zero */

loc_003E879D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003E87B0
 * Original: 0x003E87B0 - 0x003E87CB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E87B0(void)
{

loc_003E87B0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + -8);
    edx = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = MEM32(edx + 0x7C);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(ecx + eax + 0x13) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E87D0
 * Original: 0x003E87D0 - 0x003E87D8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E87D0(void)
{

loc_003E87D0: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + -4);
    esp += 4; return; /* ret */

}

/**
 * sub_003E87E0
 * Original: 0x003E87E0 - 0x003E8825 (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E87E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E87E0: ;
    SET_LO16(eax, MEM16(ecx + 0x88));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003E8810; /* jne: not equal / not zero */

loc_003E87ED: ;
    SET_LO16(eax, MEM16(ecx + 0x84));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_003E8810; /* jne: not equal / not zero */

loc_003E87FA: ;
    SET_LO16(eax, MEM16(ecx + 0x86));
    if (CMP_EQ(LO16(eax), 0xFFFF)) { sub_003E8825(); return; } /* je: equal / zero */

loc_003E8807: ;
    goto loc_003E8810;

    /* nop */

loc_003E8810: ;
    ecx = SX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + edx + 8);
    if (CMP_EQ(LO16(ecx), 0xFFFFFFFFu)) { sub_003E8825(); return; } /* je: equal / zero */

loc_003E8821: ;
    eax = ecx;
    goto loc_003E8810;

}

/**
 * sub_003E8830
 * Original: 0x003E8830 - 0x003E884B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8830(void)
{

loc_003E8830: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + -8);
    edx = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = MEM32(edx + 0x7C);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax + 0x14) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E8850
 * Original: 0x003E8850 - 0x003E886D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8850(void)
{

loc_003E8850: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + -8);
    edx = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = MEM32(edx + 0x7C);
    ecx = MEM32(ecx + eax + 0x14);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E8870
 * Original: 0x003E8870 - 0x003E8894 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8870(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E8870: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_003E888C; /* je: equal / zero */

loc_003E8878: ;
    if (CMP_EQ(eax, 4)) goto loc_003E888C; /* je: equal / zero */

loc_003E887D: ;
    if (CMP_EQ(eax, 5)) goto loc_003E888C; /* je: equal / zero */

loc_003E8882: ;
    if (CMP_EQ(eax, 2)) goto loc_003E888C; /* je: equal / zero */

loc_003E8887: ;
    if (CMP_NE(eax, 3)) { sub_003E8894(); return; } /* jne: not equal / not zero */

loc_003E888C: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x70) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003E88A0
 * Original: 0x003E88A0 - 0x003E8994 (244 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E88A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E88A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84B7A0);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_003E894F; /* jne: not equal / not zero */

loc_003E88B3: ;
    PUSH32(esp, edi);
    ecx = 0x11;
    eax = 0; /* xor self */
    edi = 0x819C20;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x819C20) = 0x3E89A0;
    MEM32(0x819C24) = 0x3E9E60;
    MEM32(0x819C30) = 0x3E9E90;
    MEM32(0x819C28) = 0x3E8A60;
    MEM32(0x819C2C) = 0x3E8B10;
    MEM32(0x819C4C) = 0x3E8BB0;
    MEM32(0x819C34) = 0x3E9EA0;
    MEM32(0x819C54) = 0x3E9EB0;
    MEM32(0x819C38) = 0x3E9F30;
    MEM32(0x819C3C) = 0x3E9F40;
    MEM32(0x819C58) = 0x3E9F50;
    MEM32(0x819C50) = 0x3E8C20;
    MEM32(0x819C60) = 0x3E8C40;
    MEM32(0x84B7A0) = 1;
    POP32(esp, edi);

loc_003E894F: ;
    PUSH32(esp, 0x90);
    PUSH32(esp, 0); sub_003E91F0(); /* call 0x003E91F0 */

loc_003E8959: ;
    esi = esi & 0xFFFFFFDFu;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    edx = eax;
    PUSH32(esp, 0); sub_003E62F0(); /* call 0x003E62F0 */

loc_003E8968: ;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 0x10) = 0x819C20;
    MEM8(edx + 0x74) = 2;
    esp = esp + 8;
    MEM32(edx + 0x7C) = ebx;
    MEM32(edx + 0x80) = ebx;
    MEM32(edx + 0x84) = ebx;
    MEM32(edx + 0x88) = ebx;
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E89A0
 * Original: 0x003E89A0 - 0x003E89B8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E89A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E89A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(esi + 0x75));
    (void)0; /* cmp LO8(ecx), MEM8(esi + 0x74) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(LO8(ecx), MEM8(esi + 0x74))) { sub_003E89B8(); return; } /* jbe: below or equal (unsigned <=) */

loc_003E89AF: ;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    g_seh_ebp = ebp; sub_003E89BA(); return; /* tail jmp 0x003E89BA */

}

/**
 * sub_003E8A60
 * Original: 0x003E8A60 - 0x003E8B04 (164 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E8A60: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + -24);
    edx = MEM32(ecx + -28);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(edx + 4) = eax;
    if (CMP_EQ(eax, ebp)) goto loc_003E8A78; /* je: equal / zero */

loc_003E8A76: ;
    MEM32(eax) = edx;

loc_003E8A78: ;
    SET_LO16(esi, MEM16(ecx + -8));
    eax = MEM32(ecx + -4);
    edx = MEM32(esp + 0x18);
    MEM32(ecx + -28) = ebp;
    MEM32(ecx + -24) = ebp;
    ecx = MEM32(ecx + -16);
    edi = ZX16(LO16(esi));
    MEM32(esp + 0x14) = eax;
    eax = edi + edx + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E9800(); /* call 0x003E9800 */

loc_003E8A9D: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebp)) { sub_003E8B04(); return; } /* je: equal / zero */

loc_003E8AA4: ;
    (void)0; /* cmp LO16(esi), LO16(ebp) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = eax + 0x1C;
    if (CMP_EQ(LO16(esi), LO16(ebp))) goto loc_003E8AB6; /* je: equal / zero */

loc_003E8AAD: ;
    ebx = edi + ebx + -1;
    edi--;
    edi = ~edi;
    ebx = ebx & edi;

loc_003E8AB6: ;
    ebp = MEM32(esp + 0x14);
    edi = MEM32(ebp + 0x7C);
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = ebp + 0x7C;
    ecx = ebx + -28;
    if (TEST_Z(edi, edi)) goto loc_003E8ACE; /* je: equal / zero */

loc_003E8AC7: ;
    edx = MEM32(edx);
    if (CMP_NE(MEM32(edx), 0)) goto loc_003E8AC7; /* jne: not equal / not zero */

loc_003E8ACE: ;
    edi = MEM32(edx + 4);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(edx + 4) = ecx;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edi;
    if (TEST_Z(edi, edi)) goto loc_003E8ADF; /* je: equal / zero */

loc_003E8ADD: ;
    MEM32(edi) = ecx;

loc_003E8ADF: ;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = edx;
    SET_LO8(eax, MEM8(ebp + 0x77));
    edx = MEM32(esp + 0x18);
    MEM8(ecx + 0x16) = LO8(eax);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM16(ecx + 0x14) = LO16(esi);
    POP32(esp, esi);
    MEM32(ecx + 0x18) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8B10
 * Original: 0x003E8B10 - 0x003E8B6A (90 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E8B10: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx + -24);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(edx + -28);
    PUSH32(esp, edi);
    edi = edx + -28;
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_003E8B27; /* je: equal / zero */

loc_003E8B25: ;
    MEM32(eax) = ecx;

loc_003E8B27: ;
    SET_LO8(eax, MEM8(edi + 0x16));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(edi) = 0;
    MEM32(edi + 4) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003E8B6A(); return; } /* je: equal / zero */

loc_003E8B3B: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x84);
    eax = eax + 0x84;
    if (TEST_Z(ecx, ecx)) goto loc_003E8B57; /* je: equal / zero */

loc_003E8B4E: ;
    edi = edi;

loc_003E8B50: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_003E8B50; /* jne: not equal / not zero */

loc_003E8B57: ;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 4) = edi;
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_003E8B68; /* je: equal / zero */

loc_003E8B66: ;
    MEM32(ecx) = edi;

loc_003E8B68: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8C20
 * Original: 0x003E8C20 - 0x003E8C3D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8C20(void)
{

loc_003E8C20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E73F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x34), _icall_esp); /* indirect call */
    }

loc_003E8C34: ;
    esp = esp + 0x10;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003E8C40
 * Original: 0x003E8C40 - 0x003E8C5A (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8C40(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E8C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 4);
    esi = edi + -28;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C8A8(); /* call 0x0042C8A8 */

loc_003E8C51: ;
    if (TEST_Z(eax, eax)) { sub_003E8C5A(); return; } /* je: equal / zero */

loc_003E8C55: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8CB0
 * Original: 0x003E8CB0 - 0x003E8CC4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8CB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E8CB0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = eax >> 8;
    if (CMP_B(eax, 0x10000)) { sub_003E8CC4(); return; } /* jb: below (unsigned <) */

loc_003E8CBD: ;
    eax = 0x5F;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E8D20
 * Original: 0x003E8D20 - 0x003E8D2D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8D20(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E8D20: ;
    edx = eax + 0x34;
    PUSH32(esp, esi);
    ecx = edx;
    esi = 0x5F;
    g_seh_ebp = ebp; sub_003E8D30(); return; /* tail jmp 0x003E8D30 */

}

/**
 * sub_003E8D90
 * Original: 0x003E8D90 - 0x003E8DC6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E8D90: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = MEM32(esi + 0x35C);
    SET_LO8(eax, MEM8(esi));
    ebx--;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(LO8(eax), 2)) { sub_003E8DC6(); return; } /* je: equal / zero */

loc_003E8DA8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E9700(); /* call 0x003E9700 */

loc_003E8DAE: ;
    eax = MEM32(esp + 0x30);
    esp = esp + 4;
    POP32(esp, esi);
    eax = eax + 0xFFFFFFF9u;
    POP32(esp, ebx);
    esp = esp + 0x20;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_003E91F0(); return; /* tail jmp 0x003E91F0 */

}

/**
 * sub_003E9160
 * Original: 0x003E9160 - 0x003E91DE (126 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E9160: ;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(ebx + 0x35C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi & 0xFFFFFFFCu;
    edx = esi;
    edx = edx - edi;
    eax = edx + ecx + -17;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = eax;
    edi--;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    if (CMP_LE(edi & edi, 0)) { sub_003E91DE(); return; } /* jle: less or equal (signed <=) */

loc_003E918C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E9A40(); /* call 0x003E9A40 */

loc_003E9193: ;
    ebp = eax;
    eax = MEM32(ebx + 0x2C);
    eax = eax + esi;
    esp = esp + 4;
    if (CMP_NE(ebp, eax)) { sub_003E91DE(); return; } /* jne: not equal / not zero */

loc_003E91A1: ;
    edi = (uint32_t)(-(int32_t)edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E9A40(); /* call 0x003E9A40 */

loc_003E91A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E9A40(); /* call 0x003E9A40 */

loc_003E91B0: ;
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_003E91DE(); return; } /* je: equal / zero */

loc_003E91B8: ;
    ebp = ebp - eax;
    if ((ebp == 0)) { sub_003E91DE(); return; } /* je: equal / zero */

loc_003E91BC: ;
    edx = MEM32(ebx + 0x368);
    ecx = MEM32(ebx + 0x2C);
    esi = esi - ebp;
    edx = edx - ebp;
    esi = esi | 1;
    POP32(esp, edi);
    MEM32(ebx + 0x368) = edx;
    MEM32(ecx + 4) = esi;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003E91F0
 * Original: 0x003E91F0 - 0x003E9209 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E91F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E91F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    if (CMP_B(eax, 0xFFFFFFE0u)) { sub_003E9209(); return; } /* jb: below (unsigned <) */

loc_003E91FA: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_003E91FF: ;
    MEM32(eax) = 0xC;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E95B0
 * Original: 0x003E95B0 - 0x003E96FB (331 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E95B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E95B0: ;
    PUSH32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_003E96F9; /* je: equal / zero */

loc_003E95B9: ;
    edx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx = edx;
    PUSH32(esp, esi);
    esi = MEM32(0x819C68);
    ecx = ecx & 0xFFFFFFFCu;
    if (CMP_A(ecx, esi)) goto loc_003E95F1; /* ja: above (unsigned >) */

loc_003E95CF: ;
    esi = esi | 3;
    MEM32(0x819C68) = esi;
    ecx = ecx >> 3;
    edx = MEM32(ecx * 4 + 0x819C64);
    ecx = ecx * 4 + 0x819C64;
    MEM32(eax + 8) = edx;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003E95F1: ;
    (void)0; /* test LO8(edx), 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(edx), 2)) goto loc_003E96CC; /* jne: not equal / not zero */

loc_003E95FC: ;
    MEM32(0x819C68) = MEM32(0x819C68) | 1;
    edx = MEM32(ecx + eax + 4);
    SET_LO8(ebx, MEM8(eax + 4));
    esi = ecx + eax;
    edx = edx & 0xFFFFFFFCu;
    if (TEST_NZ(LO8(ebx), 1)) goto loc_003E9627; /* jne: not equal / not zero */

loc_003E9615: ;
    edi = MEM32(eax);
    ecx = ecx + edi;
    eax = eax - edi;
    edi = MEM32(eax + 8);
    ebx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ebx;
    MEM32(ebx + 8) = edi;

loc_003E9627: ;
    if (CMP_EQ(esi, MEM32(0x819C94))) goto loc_003E9672; /* je: equal / zero */

loc_003E962F: ;
    edi = MEM32(edx + esi + 4);
    edi = edi & 1;
    MEM32(esp + 0xC) = edi;
    MEM32(esi + 4) = edx;
    if ((edi != 0)) goto loc_003E964D; /* jne: not equal / not zero */

loc_003E963F: ;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = esi;
    MEM32(esi + 8) = edi;
    ecx = ecx + edx;

loc_003E964D: ;
    edx = MEM32(0x819CA4);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = 0x819C9C;
    MEM32(0x819CA4) = eax;
    MEM32(edx + 0xC) = eax;
    edx = ecx;
    edx = edx | 1;
    MEM32(eax + 4) = edx;
    MEM32(ecx + eax) = ecx;
    goto loc_003E9681;

loc_003E9672: ;
    ecx = ecx + edx;
    edx = ecx;
    edx = edx | 1;
    MEM32(eax + 4) = edx;
    MEM32(0x819C94) = eax;

loc_003E9681: ;
    if (CMP_B(ecx, 0x20000)) goto loc_003E96F6; /* jb: below (unsigned <) */

loc_003E9689: ;
    if (TEST_Z(MEM8(0x819C68), 2)) goto loc_003E969F; /* je: equal / zero */

loc_003E9692: ;
    PUSH32(esp, 0x819C68);
    PUSH32(esp, 0); sub_003E9700(); /* call 0x003E9700 */

loc_003E969C: ;
    esp = esp + 4;

loc_003E969F: ;
    eax = MEM32(0x819C94);
    ecx = MEM32(eax + 4);
    eax = MEM32(0x819FAC);
    ecx = ecx & 0xFFFFFFFCu;
    if (CMP_B(ecx, eax)) goto loc_003E96F6; /* jb: below (unsigned <) */

loc_003E96B3: ;
    edx = MEM32(0x819FB0);
    PUSH32(esp, edx);
    ebx = 0x819C68;
    PUSH32(esp, 0); sub_003E9160(); /* call 0x003E9160 */

loc_003E96C4: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003E96CC: ;
    edx = MEM32(eax);
    ebx = MEM32(0x819FB8);
    edi = MEM32(0x819FCC);
    ecx = ecx + edx;
    eax = eax - edx;
    edi = edi - ecx;
    ebx--;
    PUSH32(esp, eax);
    MEM32(0x819FB8) = ebx;
    MEM32(0x819FCC) = edi;
    PUSH32(esp, 0); sub_003E9E10(); /* call 0x003E9E10 */

loc_003E96F3: ;
    esp = esp + 4;

loc_003E96F6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);

loc_003E96F9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9700
 * Original: 0x003E9700 - 0x003E97E8 (232 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E9700: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(ebp);
    if (TEST_Z(ecx, ecx)) { sub_003E97E8(); return; } /* je: equal / zero */

loc_003E9713: ;
    ecx = ecx & 0xFFFFFFFDu;
    MEM32(ebp) = ecx;
    ecx = ecx >> 3;
    eax = ebp + ecx * 4 + -4;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = eax;
    eax = ebp + 4;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    edi = edi;

loc_003E9730: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_003E97CB; /* je: equal / zero */

loc_003E973A: ;
    MEM32(eax) = 0;

loc_003E9740: ;
    ebx = MEM32(ecx + 4);
    eax = MEM32(ecx + 8);
    edx = ebx;
    edx = edx & 0xFFFFFFFEu;
    esi = MEM32(edx + ecx + 4);
    edi = edx + ecx;
    esi = esi & 0xFFFFFFFCu;
    if (TEST_NZ(LO8(ebx), 1)) goto loc_003E9770; /* jne: not equal / not zero */

loc_003E975A: ;
    ebx = MEM32(ecx);
    edx = edx + ebx;
    ecx = ecx - ebx;
    ebp = MEM32(ecx + 0xC);
    ebx = MEM32(ecx + 8);
    MEM32(ebx + 0xC) = ebp;
    MEM32(ebp + 8) = ebx;
    ebp = MEM32(esp + 0x20);

loc_003E9770: ;
    if (CMP_EQ(edi, MEM32(ebp + 0x2C))) goto loc_003E97B2; /* je: equal / zero */

loc_003E9775: ;
    ebx = MEM32(esi + edi + 4);
    ebx = ebx & 1;
    MEM32(esp + 0x18) = ebx;
    MEM32(edi + 4) = esi;
    if ((ebx != 0)) goto loc_003E9793; /* jne: not equal / not zero */

loc_003E9785: ;
    edx = edx + esi;
    esi = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edi;
    MEM32(edi + 8) = esi;

loc_003E9793: ;
    esi = MEM32(ebp + 0x3C);
    edi = ebp + 0x34;
    MEM32(edi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    ebx = edx;
    ebx = ebx | 1;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 8) = esi;
    MEM32(edx + ecx) = edx;
    goto loc_003E97BD;

loc_003E97B2: ;
    esi = esi + edx;
    esi = esi | 1;
    MEM32(ecx + 4) = esi;
    MEM32(ebp + 0x2C) = ecx;

loc_003E97BD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = eax;
    if (TEST_NZ(eax, eax)) goto loc_003E9740; /* jne: not equal / not zero */

loc_003E97C7: ;
    eax = MEM32(esp + 0x10);

loc_003E97CB: ;
    edx = MEM32(esp + 0x14);
    ecx = eax;
    eax = eax + 4;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(ecx, edx)) goto loc_003E9730; /* jne: not equal / not zero */

loc_003E97E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003E9800
 * Original: 0x003E9800 - 0x003E9813 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E9800: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_NZ(ebp, ebp)) { sub_003E9813(); return; } /* jne: not equal / not zero */

loc_003E9809: ;
    POP32(esp, ebp);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_003E91F0(); return; /* tail jmp 0x003E91F0 */

}

/**
 * sub_003E9A00
 * Original: 0x003E9A00 - 0x003E9A18 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E9A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0); sub_004308AE(); /* call 0x004308AE */

loc_003E9A0C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00431E6A(); /* call 0x00431E6A */

loc_003E9A12: ;
    if (TEST_NZ(eax, eax)) { sub_003E9A18(); return; } /* jne: not equal / not zero */

loc_003E9A16: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9A40
 * Original: 0x003E9A40 - 0x003E9A6B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E9A40: ;
    esp = esp - 0x30;
    eax = MEM32(0x876034);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (CMP_NE(eax, esi)) { sub_003E9A6B(); return; } /* jne: not equal / not zero */

loc_003E9A58: ;
    ebp = 0x1000;
    MEM32(0x876034) = ebp;
    MEM32(0x876030) = ebp;
    g_seh_ebp = ebp; sub_003E9A71(); return; /* tail jmp 0x003E9A71 */

}

/**
 * sub_003E9DD0
 * Original: 0x003E9DD0 - 0x003E9E10 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E9DD0: ;
    eax = MEM32(0x876020);
    if (TEST_NZ(eax, eax)) goto loc_003E9DE3; /* jne: not equal / not zero */

loc_003E9DD9: ;
    MEM32(0x876020) = 0x1000;

loc_003E9DE3: ;
    eax = MEM32(0x87601C);
    if (TEST_NZ(eax, eax)) goto loc_003E9DF6; /* jne: not equal / not zero */

loc_003E9DEC: ;
    MEM32(0x87601C) = 0x10000;

loc_003E9DF6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x103000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042E61B(); /* call 0x0042E61B */

loc_003E9E08: ;
    if (TEST_NZ(eax, eax)) goto loc_003E9E0F; /* jne: not equal / not zero */

loc_003E9E0C: ;
    eax = eax | 0xFFFFFFFFu;

loc_003E9E0F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003E9E10
 * Original: 0x003E9E10 - 0x003E9E53 (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E9E10: ;
    eax = MEM32(0x876018);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    if (TEST_NZ(eax, eax)) goto loc_003E9E27; /* jne: not equal / not zero */

loc_003E9E1D: ;
    MEM32(0x876018) = 0x1000;

loc_003E9E27: ;
    eax = MEM32(0x876014);
    if (TEST_NZ(eax, eax)) goto loc_003E9E3A; /* jne: not equal / not zero */

loc_003E9E30: ;
    MEM32(0x876014) = 0x10000;

loc_003E9E3A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E649(); /* call 0x0042E649 */

loc_003E9E4B: ;
    if (TEST_Z(eax, eax)) { sub_003E9E53(); return; } /* je: equal / zero */

loc_003E9E4F: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9E60
 * Original: 0x003E9E60 - 0x003E9E78 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E9E60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x1C);
    esi = esi + 0xFFFFFFE4u;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C843(); /* call 0x0042C843 */

loc_003E9E70: ;
    if (TEST_Z(eax, eax)) { sub_003E9E78(); return; } /* je: equal / zero */

loc_003E9E74: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9E90
 * Original: 0x003E9E90 - 0x003E9E98 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9E90(void)
{

loc_003E9E90: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + -12);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9EA0
 * Original: 0x003E9EA0 - 0x003E9EAC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9EA0(void)
{

loc_003E9EA0: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    ecx = MEM32(esp + 8);
    MEM8(ecx + -6) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9EB0
 * Original: 0x003E9EB0 - 0x003E9F30 (128 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E9EB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi + 0x80);
    if (TEST_Z(esi, esi)) goto loc_003E9EE2; /* je: equal / zero */

loc_003E9EC2: ;
    ebp = MEM32(esp + 0x18);

loc_003E9EC6: ;
    ecx = MEM32(esi + 0x10);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ebp);
    ebx = edi;
    PUSH32(esp, 0); sub_003E7330(); /* call 0x003E7330 */

loc_003E9ED8: ;
    esi = MEM32(esi + 4);
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_003E9EC6; /* jne: not equal / not zero */

loc_003E9EE2: ;
    esi = MEM32(edi + 0x88);
    if (TEST_Z(esi, esi)) goto loc_003E9F2B; /* je: equal / zero */

loc_003E9EEC: ;
    ebp = MEM32(esp + 0x1C);
    edx = MEM32(0x74FB2C);

loc_003E9EF6: ;
    (void)0; /* test MEM8(edi + 0xC), 4 - flags set for next jcc */
    eax = MEM32(esi + 0x10);
    ecx = esi + 0x1C;
    if (TEST_Z(MEM8(edi + 0xC), 4)) goto loc_003E9F10; /* je: equal / zero */

loc_003E9F02: ;
    ebx = edx;
    ecx = ecx + edx;
    ebx = (uint32_t)(-(int32_t)ebx);
    eax = eax + ebx * 2;
    goto loc_003E9F10;

    /* nop */

loc_003E9F10: ;
    if (TEST_Z(ebp, ebp)) goto loc_003E9F24; /* je: equal / zero */

loc_003E9F14: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_003E9F1B: ;
    edx = MEM32(0x74FB2C);
    esp = esp + 0x10;

loc_003E9F24: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_003E9EF6; /* jne: not equal / not zero */

loc_003E9F2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003E9F40
 * Original: 0x003E9F40 - 0x003E9F4E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9F40(void)
{

loc_003E9F40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + -4);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003E9F50
 * Original: 0x003E9F50 - 0x003E9F58 (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9F50(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E9F50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_003E9F60(); return; /* tail jmp 0x003E9F60 */

}

/**
 * sub_003E9FD0
 * Original: 0x003E9FD0 - 0x003EA023 (83 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9FD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003E9FD0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(0x819FE0) = esi;
    MEM32(0x819FE4) = esi;
    eax = 0x81A048;

loc_003E9FE5: ;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    eax = eax + 8;
    if (CMP_L(eax, 0x81A7C0)) goto loc_003E9FE5; /* jl: less (signed <) */

loc_003E9FF4: ;
    MEM32(0x81B7C4) = esi;
    MEM8(0x819FE8) = 1;
    MEM32(0x81B7C0) = esi;
    PUSH32(esp, 0); sub_003EC5B0(); /* call 0x003EC5B0 */

loc_003EA00C: ;
    ecx = 0x100;
    eax = 0; /* xor self */
    edi = 0x81B8D0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(0x84B7F8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EA030
 * Original: 0x003EA030 - 0x003EA06F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA030(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EA030: ;
    eax = MEM32(0x819FE4);
    PUSH32(esp, esi);
    esi = MEM32(0x81B7C0);
    esi = esi & 0x80000000u;
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x81B7C0) = esi;
    if (TEST_Z(eax, eax)) goto loc_003EA06D; /* je: equal / zero */

loc_003EA04E: ;
    PUSH32(esp, edi);
    /* nop */

loc_003EA050: ;
    edi = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    ecx = edx * 4;
    edi = edi << LO8(ecx);
    esi = esi | edi;
    edx++;
    if (TEST_NZ(eax, eax)) goto loc_003EA050; /* jne: not equal / not zero */

loc_003EA066: ;
    MEM32(0x81B7C0) = esi;
    POP32(esp, edi);

loc_003EA06D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EA070
 * Original: 0x003EA070 - 0x003EA0CE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EA070: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0;
    edx = MEM32(0x819FE4);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    eax = edx;
    if (TEST_Z(edx, edx)) goto loc_003EA09C; /* je: equal / zero */

loc_003EA08A: ;
    esi = MEM32(ecx + 8);
    /* nop */

loc_003EA090: ;
    if (CMP_A(MEM32(eax + 8), esi)) { sub_003EA0CE(); return; } /* ja: above (unsigned >) */

loc_003EA095: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_003EA090; /* jne: not equal / not zero */

loc_003EA09C: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = 0x819FE0;
    if (TEST_Z(edx, edx)) goto loc_003EA0BC; /* je: equal / zero */

loc_003EA0A5: ;
    edx = 0x819FE4;
    /* nop */

loc_003EA0B0: ;
    eax = MEM32(edx);
    esi = MEM32(eax + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = eax + 4;
    if (TEST_NZ(esi, esi)) goto loc_003EA0B0; /* jne: not equal / not zero */

loc_003EA0BC: ;
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = 0;
    g_seh_ebp = ebp; sub_003EA030(); return; /* tail jmp 0x003EA030 */

}

/**
 * sub_003EA0E0
 * Original: 0x003EA0E0 - 0x003EA136 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA0E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EA0E0: ;
    ecx = MEM32(0x81B7C4);
    ecx = ecx << 4;
    MEM32(ecx + 0x81A7CC) = edx;
    PUSH32(esp, esi);
    MEM32(ecx + 0x81A7C8) = eax;
    edx = 0; /* xor self */
    esi = 0xEF;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    ecx = ecx + 0x81A7C0;
    POP32(esp, esi);
    eax = edx * 8 + 0x81A048;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_003EA119; /* je: equal / zero */

loc_003EA112: ;
    eax = MEM32(eax);
    if (CMP_NE(MEM32(eax), 0)) goto loc_003EA112; /* jne: not equal / not zero */

loc_003EA119: ;
    edx = MEM32(eax + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    eax = MEM32(0x81B7C4);
    eax++;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    MEM32(0x81B7C4) = eax;
    if (TEST_Z(edx, edx)) goto loc_003EA135; /* je: equal / zero */

loc_003EA133: ;
    MEM32(edx) = ecx;

loc_003EA135: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EA140
 * Original: 0x003EA140 - 0x003EA17B (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA140(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EA140: ;
    ecx = MEM32(0x81B7C0);
    ecx = ecx & 0x7FFFFFFF;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    esi = 0xEF;
    eax = ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    edx = MEM32(edx * 8 + 0x81A04C);
    if (TEST_Z(edx, edx)) goto loc_003EA17A; /* je: equal / zero */

loc_003EA164: ;
    if (CMP_EQ(MEM32(edx + 8), ecx)) goto loc_003EA171; /* je: equal / zero */

loc_003EA169: ;
    edx = MEM32(edx + 4);
    if (TEST_NZ(edx, edx)) goto loc_003EA164; /* jne: not equal / not zero */

loc_003EA170: ;
    esp += 4; return; /* ret */

loc_003EA171: ;
    eax = MEM32(edx + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;

loc_003EA17A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003EA180
 * Original: 0x003EA180 - 0x003EA226 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA180(void)
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

loc_003EA180: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x819FE4);
    ebp = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(0x81A040) = ebp;
    if (TEST_Z(edi, edi)) goto loc_003EA223; /* je: equal / zero */

loc_003EA198: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x819FF0;
    ebx = 1;

loc_003EA1A4: ;
    if (CMP_GE(esi, 0x81A040)) goto loc_003EA21B; /* jge: greater or equal (signed >=) */

loc_003EA1AC: ;
    if (CMP_NE(MEM32(edi + 8), ebx)) goto loc_003EA214; /* jne: not equal / not zero */

loc_003EA1B1: ;
    eax = edi + 0x1C;
    edx = MEM32(eax);
    ecx = esi + 4;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003EA1D5: ;
    MEM8(esi) = LO8(eax);
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003EA1E5: ;
    MEM8(esi + 1) = LO8(eax);
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003EA1F6: ;
    MEM8(esi + 2) = LO8(eax);
    fp_push(MEMF(edi + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003EA207: ;
    MEM8(esi + 3) = LO8(eax);
    MEM8(esi + 0x10) = LO8(ebx);
    MEM8(esi + 0x11) = LO8(ebx);
    ebp++;
    esi = esi + 0x14;

loc_003EA214: ;
    edi = MEM32(edi + 4);
    if (TEST_NZ(edi, edi)) goto loc_003EA1A4; /* jne: not equal / not zero */

loc_003EA21B: ;
    POP32(esp, esi);
    MEM32(0x81A040) = ebp;
    POP32(esp, ebx);

loc_003EA223: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003EA230
 * Original: 0x003EA230 - 0x003EA4B8 (648 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EA230: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x819FE8));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_003EA24B; /* jne: not equal / not zero */

loc_003EA243: ;
    if (TEST_Z(ebp, ebp)) goto loc_003EA4B2; /* je: equal / zero */

loc_003EA24B: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    edx = esp + 0x28;
    ecx = 0xBF;
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003EA28D: ;
    edx = 0x74FB30;
    ecx = 0xBE;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003EA29C: ;
    esi = MEM32(0x819FE4);
    if (TEST_Z(esi, esi)) goto loc_003EA4AC; /* je: equal / zero */

loc_003EA2AA: ;
    PUSH32(esp, edi);
    edi = 0xBC;

loc_003EA2B0: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_003EA4A0; /* je: equal / zero */

loc_003EA2BB: ;
    edx = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003EA2C5: ;
    eax = MEM32(esi + 8);
    eax = eax & 3;
    edi--;
    eax--;
    if ((eax == 0)) goto loc_003EA3DE; /* je: equal / zero */

loc_003EA2D3: ;
    eax--;
    if ((eax == 0)) goto loc_003EA3BE; /* je: equal / zero */

loc_003EA2DA: ;
    eax--;
    if ((eax != 0)) goto loc_003EA48F; /* jne: not equal / not zero */

loc_003EA2E1: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_003EA2FA; /* jne: not equal / not zero */

loc_003EA2E5: ;
    PUSH32(esp, ebp);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003EA2F4: ;
    edx = esp + 0x20;
    goto loc_003EA2FD;

loc_003EA2FA: ;
    edx = esi + 0x28;

loc_003EA2FD: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003EA304: ;
    xmm0 = MEMF(0x648D34); /* movss */
    edx = esi + 0x1C;
    eax = esp + 0x20;
    edi--;
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_003EA3AA; /* jne: not equal / not zero */

loc_003EA34B: ;
    ecx = esp + 0x20;
    edx = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    eax = MEM32(esp + 0x10);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x40);
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
    eax = edx;
    ebx = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003EA3A4: ;
    SET_LO8(ebx, MEM8(0x819FE8));

loc_003EA3AA: ;
    edx = esp + 0x20;
    ecx = edi;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003EA3B5: ;
    edi--;
    edx = esi + 0x40;
    goto loc_003EA487;

loc_003EA3BE: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_003EA3D6; /* jne: not equal / not zero */

loc_003EA3C2: ;
    PUSH32(esp, ebp);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_003EA3D1: ;
    goto loc_003EA483;

loc_003EA3D6: ;
    edx = esi + 0x28;
    goto loc_003EA487;

loc_003EA3DE: ;
    xmm0 = MEMF(0x648D34); /* movss */
    edx = esi + 0x1C;
    eax = esp + 0x20;
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_003EA483; /* jne: not equal / not zero */

loc_003EA424: ;
    ecx = esp + 0x20;
    edx = ecx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    eax = MEM32(esp + 0x10);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x40);
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
    eax = edx;
    ebx = edx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_003EA47D: ;
    SET_LO8(ebx, MEM8(0x819FE8));

loc_003EA483: ;
    edx = esp + 0x20;

loc_003EA487: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003EA48E: ;
    edi--;

loc_003EA48F: ;
    if (TEST_Z(MEM8(esi + 8), 0xC)) goto loc_003EA4A0; /* je: equal / zero */

loc_003EA495: ;
    edx = esi + 0x34;
    ecx = edi;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_003EA49F: ;
    edi--;

loc_003EA4A0: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_003EA2B0; /* jne: not equal / not zero */

loc_003EA4AB: ;
    POP32(esp, edi);

loc_003EA4AC: ;
    PUSH32(esp, 0); sub_003EA180(); /* call 0x003EA180 */

loc_003EA4B1: ;
    POP32(esp, esi);

loc_003EA4B2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_003EA4C0
 * Original: 0x003EA4C0 - 0x003EA4EB (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA4C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EA4C0: ;
    ecx = MEM32(0x81A040);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    if (CMP_LE(ecx, eax)) eax = ecx; /* cmovle */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax + eax * 4;
    ecx = ecx << 2;
    edi = edx;
    edx = ecx;
    ecx = ecx >> 2;
    esi = 0x819FF0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003EA4F0
 * Original: 0x003EA4F0 - 0x003EA701 (529 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA4F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EA4F0: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x4C);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    if (TEST_NZ(ebx, ebx)) goto loc_003EA540; /* jne: not equal / not zero */

loc_003EA502: ;
    eax = MEM32(0x875904);
    if (TEST_NZ(eax, eax)) goto loc_003EA540; /* jne: not equal / not zero */

loc_003EA50B: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x1A14);
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_003EA538; /* jne: not equal / not zero */

loc_003EA51F: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_003EA538; /* jne: not equal / not zero */

loc_003EA52B: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003EA538; /* je: equal / zero */

loc_003EA532: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_003EA538: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    MEM32(0x875904) = ecx;

loc_003EA540: ;
    eax = MEM32(esp + 0x64);
    if (TEST_NZ(eax, eax)) goto loc_003EA567; /* jne: not equal / not zero */

loc_003EA548: ;
    eax = MEM32(0x84B7A8);
    if (TEST_NZ(eax, eax)) goto loc_003EA567; /* jne: not equal / not zero */

loc_003EA551: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x84B7A8);
    PUSH32(esp, 0x74FD40);
    PUSH32(esp, 0x7502D8);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_003EA567: ;
    eax = MEM32(esp + 0x68);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_003EA5B0; /* jne: not equal / not zero */

loc_003EA570: ;
    eax = MEM32(0x84B7AC);
    if (TEST_NZ(eax, eax)) goto loc_003EA5B0; /* jne: not equal / not zero */

loc_003EA579: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003EA588: ;
    if (TEST_Z(eax, eax)) goto loc_003EA5B0; /* je: equal / zero */

loc_003EA58C: ;
    edi = eax + 0xC;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x74FD68;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x84B7AC) = eax;

loc_003EA5B0: ;
    SET_LO8(eax, MEM8(esp + 0x74));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003EA659; /* je: equal / zero */

loc_003EA5BC: ;
    esi = MEM32(0x5499E8);
    ecx = MEM32(esi + 0x1A04);
    if (TEST_Z(ecx, ecx)) goto loc_003EA5F0; /* je: equal / zero */

loc_003EA5CC: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_003EA5EE; /* jne: not equal / not zero */

loc_003EA5D5: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_003EA5EE; /* jne: not equal / not zero */

loc_003EA5E1: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003EA5EE; /* je: equal / zero */

loc_003EA5E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_003EA5EE: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_003EA5F0: ;
    MEM32(0x87AA9C) = ecx;
    ecx = MEM32(esi + 0x1A08);
    if (TEST_Z(ecx, ecx)) goto loc_003EA624; /* je: equal / zero */

loc_003EA600: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_003EA622; /* jne: not equal / not zero */

loc_003EA609: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_003EA622; /* jne: not equal / not zero */

loc_003EA615: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003EA622; /* je: equal / zero */

loc_003EA61C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_003EA622: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_003EA624: ;
    MEM32(0x87AA98) = ecx;
    esi = esi + 0xEE0;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = eax;

loc_003EA659: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = MEM32(esp + 0x58);
    esi = 0x87AA7C;
    if (TEST_NZ(ebx, ebx)) goto loc_003EA66C; /* jne: not equal / not zero */

loc_003EA666: ;
    edi = MEM32(0x875904);

loc_003EA66C: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_003EA673: ;
    edi = MEM32(esp + 0x5C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_003EA698: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_003EA6AB: ;
    esi = 0x87AA60;
    edi = eax;
    MEM32(0x87AA5C) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_003EA6BC: ;
    eax = MEM32(0x87AA60);
    if (CMP_A(eax, 0x3C)) { sub_003EA701(); return; } /* ja: above (unsigned >) */

loc_003EA6C6: ;
    edx = ZX8(MEM8(eax + 0x3EAAA8));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x3EAAA0)); return; /* indirect tail jmp */

    ebx = 0; /* xor self */
    if (CMP_EQ(ebp, ebx)) goto loc_003EA6EE; /* je: equal / zero */

loc_003EA6DA: ;
    if (CMP_EQ(MEM32(esp + 0x64), ebx)) goto loc_003EA6EE; /* je: equal / zero */

loc_003EA6E0: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_003EA753(); return; /* tail jmp 0x003EA753 */

loc_003EA6EE: ;
    eax = 2;
    edi = 0; /* xor self */
    ebp = 0; /* xor self */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;
    g_seh_ebp = ebp; sub_003EA753(); return; /* tail jmp 0x003EA753 */

}

/**
 * sub_003EAAF0
 * Original: 0x003EAAF0 - 0x003EAB80 (144 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAAF0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EAAF0: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    MEM32(0x547340) = eax;
    MEM32(0x54733C) = eax;
    eax = MEM32(0x5499F0);
    ecx = 1;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = eax | ecx;
    MEM32(0x547344) = ecx;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x54734C) = esi;
    MEM32(0x547354) = esi;
    MEM32(0x547358) = esi;
    MEM32(0x5499F0) = eax;
    MEM32(0x54735C) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003EAB49: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    MEM32(0x549AE8) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003EAB5B: ;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x549AE4) = esi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_003EAB70: ;
    MEM32(0x549B04) = 0x10101;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003EA4F0(); return; /* tail jmp 0x003EA4F0 */

}

/**
 * sub_003EAB80
 * Original: 0x003EAB80 - 0x003EAC60 (224 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAB80(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_003EAB80: ;
    eax = MEM32(0x5499E8);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1A14);
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_003EABB3; /* jne: not equal / not zero */

loc_003EAB9A: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_003EABB3; /* jne: not equal / not zero */

loc_003EABA6: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003EABB3; /* je: equal / zero */

loc_003EABAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_003EABB3: ;
    MEM32(edi) = MEM32(edi) + 1;
    esi = esp + 0x10;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_003EABC0: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_003EABF2; /* jge: greater or equal (signed >=) */

loc_003EABEC: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003EABF2: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003EABF9: ;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    edx = MEM32(esp + 0x44);
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = eax;
    if (CMP_GE(edx & edx, 0)) goto loc_003EAC0D; /* jge: greater or equal (signed >=) */

loc_003EAC07: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003EAC0D: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_003EAC14: ;
    /* fstp st(0) */
    edx = esi;
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_003EAC1D: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    ebx = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003EAC2B: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_003EAC4B; /* je: equal / zero */

loc_003EAC31: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003EAC3C: ;
    if (TEST_NZ(eax, eax)) { sub_003EAC60(); return; } /* jne: not equal / not zero */

loc_003EAC40: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003EAC4B: ;
    edx = MEM32(esp + 0x30);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(edx) = esi;
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_003EAC59: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_003EACA0
 * Original: 0x003EACA0 - 0x003EAD77 (215 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EACA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EACA0: ;
    SET_LO8(eax, MEM8(0x875902));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003EACBA; /* je: equal / zero */

loc_003EACB1: ;
    SET_LO8(eax, MEM8(0x84B7A4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003EAD14; /* je: equal / zero */

loc_003EACBA: ;
    eax = MEM32(0x5499E8);
    edi = MEM32(eax + 0x1A14);
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_003EACE7; /* jne: not equal / not zero */

loc_003EACCE: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_003EACE7; /* jne: not equal / not zero */

loc_003EACDA: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003EACE7; /* je: equal / zero */

loc_003EACE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_003EACE7: ;
    MEM32(edi) = MEM32(edi) + 1;
    esi = 0x87AA40;
    ebx = 0; /* xor self */
    MEM32(0x87AA3C) = edi;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_003EACFB: ;
    ecx = MEM32(0x87AA3C);
    PUSH32(esp, ecx);
    MEM32(0x87AA38) = ebx;
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_003EAD0D: ;
    MEM8(0x875902) = 1;

loc_003EAD14: ;
    edx = MEM32(0x87AA3C);
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(edx + 4);
    edi = MEM32(esp + 0x18);
    ebx = MEM32(0x87AA54);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    edx = ebp + 0xC;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    if (TEST_Z(ecx, ecx)) ecx = MEM32(0x87AA58); /* cmove */
    PUSH32(esp, edx);
    edx = MEM32(0x87AA40);
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 0);
    eax = edx;
    if (TEST_Z(edi, edi)) edi = ebx; /* cmove */
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_003EAD50: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_003EAD61: ;
    POP32(esp, edi);
    MEM32(ebp + 4) = esi;
    POP32(esp, esi);
    MEM32(ebp) = 0x40001;
    MEM32(ebp + 8) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EAD80
 * Original: 0x003EAD80 - 0x003EAE4C (204 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EAD80: ;
    SET_LO8(eax, MEM8(0x875901));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003EAD98; /* je: equal / zero */

loc_003EAD8F: ;
    SET_LO8(eax, MEM8(0x84B7A4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003EADFC; /* je: equal / zero */

loc_003EAD98: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x1A08);
    if (TEST_Z(ecx, ecx)) goto loc_003EADCB; /* je: equal / zero */

loc_003EADA7: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_003EADC9; /* jne: not equal / not zero */

loc_003EADB0: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_003EADC9; /* jne: not equal / not zero */

loc_003EADBC: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003EADC9; /* je: equal / zero */

loc_003EADC3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_003EADC9: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_003EADCB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = 0x87AA1C;
    ebx = 0; /* xor self */
    edi = ecx;
    MEM32(0x87AA18) = ecx;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_003EADE1: ;
    ecx = MEM32(0x87AA18);
    PUSH32(esp, ecx);
    MEM32(0x87AA14) = ebx;
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_003EADF3: ;
    POP32(esp, edi);
    MEM8(0x875901) = 1;
    POP32(esp, ebx);

loc_003EADFC: ;
    edx = MEM32(0x87AA18);
    esi = MEM32(edx + 4);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    eax = ecx;
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_003EAE1A: ;
    edx = eax;
    eax = MEM32(0x87AA30);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x87AA34);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_003EAE38: ;
    MEM32(ebp + 4) = esi;
    POP32(esp, esi);
    MEM32(ebp) = 0x40001;
    MEM32(ebp + 8) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003EAE50
 * Original: 0x003EAE50 - 0x003EAF1E (206 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAE50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EAE50: ;
    SET_LO8(eax, MEM8(0x875900));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003EAE69; /* je: equal / zero */

loc_003EAE60: ;
    SET_LO8(eax, MEM8(0x84B7A4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003EAEC8; /* je: equal / zero */

loc_003EAE69: ;
    eax = MEM32(0x5499E8);
    edi = MEM32(eax + 0x1A18);
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_003EAE96; /* jne: not equal / not zero */

loc_003EAE7D: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_003EAE96; /* jne: not equal / not zero */

loc_003EAE89: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_003EAE96; /* je: equal / zero */

loc_003EAE90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_003EAE96: ;
    ecx = MEM32(edi);
    ecx++;
    PUSH32(esp, ebx);
    MEM32(edi) = ecx;
    esi = 0x87A9F8;
    ebx = 0; /* xor self */
    MEM32(0x87A9F4) = edi;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_003EAEAE: ;
    ecx = MEM32(0x87A9F4);
    PUSH32(esp, ecx);
    MEM32(0x87A9F0) = ebx;
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_003EAEC0: ;
    MEM8(0x875900) = 1;
    POP32(esp, ebx);

loc_003EAEC8: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x87AA0C);
    esi = MEM32(0x87A9F4);
    esi = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    if (TEST_Z(ecx, ecx)) ecx = MEM32(0x87AA10); /* cmove */
    edi = ebp + 0x10;
    PUSH32(esp, edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    if (TEST_Z(eax, eax)) eax = edx; /* cmove */
    edi = ebp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edx = edx << 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x12);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_003EAF09: ;
    POP32(esp, edi);
    MEM32(ebp + 4) = esi;
    POP32(esp, esi);
    MEM32(ebp) = 0x40001;
    MEM32(ebp + 8) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003EAF20
 * Original: 0x003EAF20 - 0x003EAFAE (142 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAF20(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EAF20: ;
    esp = esp - 0x14;
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_003EAF49: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_003EAF5C: ;
    edx = MEM32(esp + 0x28);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x87AACC) = eax;
    ecx--;
    ecx = ecx & 0x8007000Eu;
    MEM32(0x87AAC8) = ecx;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_003EAAF0(); /* call 0x003EAAF0 */

loc_003EAF9A: ;
    edx = MEM32(0x87AACC);
    esp = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_003EAFA9: ;
    POP32(esp, edi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003EAFB0
 * Original: 0x003EAFB0 - 0x003EB28E (734 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAFB0(void)
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

loc_003EAFB0: ;
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA4);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    if (CMP_NE(eax, ebx)) goto loc_003EB020; /* jne: not equal / not zero */

loc_003EAFCF: ;
    if (CMP_EQ(MEM8(esp + 0xC8), LO8(ebx))) goto loc_003EB094; /* je: equal / zero */

loc_003EAFDC: ;
    if (CMP_NE(MEM32(0x84B7C0), ebx)) goto loc_003EB01B; /* jne: not equal / not zero */

loc_003EAFE4: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003EAFF3: ;
    if (CMP_EQ(eax, ebx)) goto loc_003EB01B; /* je: equal / zero */

loc_003EAFF7: ;
    edi = eax + 0xC;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x7501E8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x84B7C0) = eax;

loc_003EB01B: ;
    eax = MEM32(0x84B7C0);

loc_003EB020: ;
    MEM32(esp + 0x24) = eax;

loc_003EB024: ;
    if (CMP_NE(MEM32(0x84B7B8), ebx)) goto loc_003EB041; /* jne: not equal / not zero */

loc_003EB02C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x84B7B8);
    PUSH32(esp, 0x750070);
    PUSH32(esp, 0x7502D8);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_003EB041: ;
    if (CMP_EQ(MEM8(esp + 0xC4), LO8(ebx))) goto loc_003EB139; /* je: equal / zero */

loc_003EB04E: ;
    esi = MEM32(0x5499E8);
    ecx = MEM32(esi + 0x1A04);
    if (CMP_EQ(ecx, ebx)) goto loc_003EB082; /* je: equal / zero */

loc_003EB05E: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_003EB080; /* jne: not equal / not zero */

loc_003EB067: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_003EB080; /* jne: not equal / not zero */

loc_003EB073: ;
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_003EB080; /* je: equal / zero */

loc_003EB07A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_003EB080: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_003EB082: ;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 0x1A08);
    if (CMP_NE(ecx, ebx)) goto loc_003EB0E2; /* jne: not equal / not zero */

loc_003EB090: ;
    ecx = 0; /* xor self */
    goto loc_003EB106;

loc_003EB094: ;
    if (CMP_NE(MEM32(0x84B7BC), ebx)) goto loc_003EB0D3; /* jne: not equal / not zero */

loc_003EB09C: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003EB0AB: ;
    if (CMP_EQ(eax, ebx)) goto loc_003EB0D3; /* je: equal / zero */

loc_003EB0AF: ;
    edi = eax + 0xC;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x74FF80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x84B7BC) = eax;

loc_003EB0D3: ;
    ecx = MEM32(0x84B7BC);
    MEM32(esp + 0x24) = ecx;
    goto loc_003EB024;

loc_003EB0E2: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_003EB104; /* jne: not equal / not zero */

loc_003EB0EB: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_003EB104; /* jne: not equal / not zero */

loc_003EB0F7: ;
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_003EB104; /* je: equal / zero */

loc_003EB0FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_003EB104: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_003EB106: ;
    esi = esi + 0xEE0;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esi + 0xC);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esi + 0x10);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = ecx;

loc_003EB139: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_003EB15A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = ebp;
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_003EB16F: ;
    ebp = eax;
    esi = esp + 0x8C;
    ebx = 0; /* xor self */
    edi = ebp;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_003EB185: ;
    edi = MEM32(esp + 0xB0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_003EB1AD: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_003EB1C0: ;
    esi = esp + 0x70;
    edi = eax;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_003EB1CF: ;
    eax = MEM32(esp + 0x70);
    if (CMP_A(eax, 0x3C)) { sub_003EB28E(); return; } /* ja: above (unsigned >) */

loc_003EB1DC: ;
    ecx = ZX8(MEM8(eax + 0x3EB6C0));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x3EB6B8)); return; /* indirect tail jmp */

    eax = MEM32(esp + 0xB4);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_003EB20A; /* je: equal / zero */

loc_003EB1F7: ;
    if (CMP_EQ(MEM32(esp + 0xB8), ebx)) goto loc_003EB20A; /* je: equal / zero */

loc_003EB200: ;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ebx;
    goto loc_003EB217;

loc_003EB20A: ;
    eax = 2;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = eax;

loc_003EB217: ;
    edx = MEM32(esp + 0x84);
    fp_push((double)SMEM32(esp + 0x84)); /* fild */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_GE(edx & edx, 0)) goto loc_003EB237; /* jge: greater or equal (signed >=) */

loc_003EB231: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003EB237: ;
    /* FPU: fdivr dword ptr [0x648d14] */
    eax = MEM32(esp + 0xBC);
    ecx = MEM32(esp + 0x88);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x88)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_003EB264; /* jge: greater or equal (signed >=) */

loc_003EB25E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_003EB264: ;
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0xC0);
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_003EB32E(); return; /* tail jmp 0x003EB32E */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_003EB700
 * Original: 0x003EB700 - 0x003EB8A3 (419 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB700: ;
    eax = MEM32(0x84B7B0);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    if (CMP_NE(eax, ebx)) goto loc_003EB72E; /* jne: not equal / not zero */

loc_003EB714: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x84B7B0);
    PUSH32(esp, 0x74FE58);
    PUSH32(esp, 0x7502D8);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_003EB729: ;
    MEM32(0x87AAC4) = eax;

loc_003EB72E: ;
    (void)0; /* cmp MEM32(0x84B7B4), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(0x84B7B4), ebx)) goto loc_003EB776; /* jne: not equal / not zero */

loc_003EB737: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_003EB746: ;
    if (CMP_EQ(eax, ebx)) goto loc_003EB770; /* je: equal / zero */

loc_003EB74A: ;
    PUSH32(esp, esi);
    edi = eax + 0xC;
    MEM32(eax) = 1;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = edi;
    ecx = 0x3C;
    esi = 0x74FE90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x84B7B4) = eax;
    POP32(esp, esi);

loc_003EB770: ;
    MEM32(0x87AAC4) = ebx;

loc_003EB776: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_003EB797: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    edi = ebp;
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_003EB7AC: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, ebx)) ? 1 : 0); /* setne */
    MEM32(0x87AAC0) = eax;
    eax = MEM32(esp + 0x38);
    POP32(esp, edi);
    ecx--;
    ecx = ecx & 0x8007000Eu;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    if (CMP_EQ(eax, ebx)) eax = MEM32(0x84B7B4); /* cmove */
    MEM32(0x87AAC4) = ecx;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_003EB7D8: ;
    eax = MEM32(esp + 0x30);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    if (CMP_EQ(eax, ebx)) eax = MEM32(0x84B7B0); /* cmove */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_003EB7EB: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, 0x75EEE0);
    eax = 1;
    ecx = 0; /* xor self */
    MEMF(0x75EEEC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_003EB80A: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003EB819: ;
    ecx = MEM32(0x5499F0);
    edx = MEM32(0x84B7B4);
    eax = 3;
    MEM32(0x5473B0) = eax;
    MEM32(0x5473B4) = eax;
    eax = 2;
    ecx = ecx | eax;
    MEM32(0x5499F0) = ecx;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(0x84B7B0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(0x87AAC0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(0x5473CC) = ebx;
    MEM32(0x5473C4) = 1;
    MEM32(0x5473C0) = eax;
    MEM32(0x5473BC) = eax;
    MEM32(0x5473D4) = ebx;
    MEM32(0x5473D8) = ebx;
    MEM32(0x5473DC) = ebx;
    PUSH32(esp, 0); sub_003EAAF0(); /* call 0x003EAAF0 */

loc_003EB88E: ;
    edx = MEM32(0x87AAC0);
    esp = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_003EB89D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB8B0
 * Original: 0x003EB8B0 - 0x003EB9B0 (256 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB8B0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_003EB8B0: ;
    esp = esp - 0x40;
    eax = 0xFFFF00FFu;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x81B7D8);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x81B7D4);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0);
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 6);
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 1);
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, 1);
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 4);
    SET_LO8(eax, 0); /* xor self */
    ecx = 4;
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_003EB91A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    MEM32(0x81B7C8) = 0x40001;
    MEM32(0x81B7D0) = 0;
    MEM32(0x81B7CC) = 0;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E8), _icall_esp); /* indirect call */
    }

loc_003EB944: ;
    esi = eax;
    eax = MEM32(0x81B7DC);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_003EB95C; /* je: equal / zero */

loc_003EB952: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7EC), _icall_esp); /* indirect call */
    }

loc_003EB959: ;
    esp = esp + 4;

loc_003EB95C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    eax = 4;
    PUSH32(esp, ecx);
    ecx = eax;
    edx = 0; /* xor self */
    MEM32(0x81B7DC) = esi;
    PUSH32(esp, 0); sub_0052337D(); /* call 0x0052337D */

loc_003EB97C: ;
    edx = MEM32(0x81B7DC);
    eax = edx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x81B7C8;
    ecx = MEM32(eax + 4);
    ecx = ecx + edx;
    edx = MEM32(eax);
    edx = edx & 0x70000;
    (void)0; /* cmp edx, 0x20000 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(edx, 0x20000)) goto loc_003EB9A9; /* je: equal / zero */

loc_003EB9A3: ;
    ecx = ecx & 0xFFFFFFF;

loc_003EB9A9: ;
    MEM32(eax + 4) = ecx;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB9B0
 * Original: 0x003EB9B0 - 0x003EB9C1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB9B0(void)
{
    int _cf = 0; /* carry flag */

loc_003EB9B0: ;
    eax = MEM32(0x81B7DC);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x81B7C8;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003EB9D0
 * Original: 0x003EB9D0 - 0x003EBA4D (125 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB9D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EB9D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003EB9DA: ;
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003EB9E6: ;
    PUSH32(esp, 0);
    eax = 2;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003EB9F2: ;
    PUSH32(esp, 0);
    eax = 3;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_003EB9FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00536DD0(); /* call 0x00536DD0 */

loc_003EBA09: ;
    esi = 0x547160;
    PUSH32(esp, edi);
    /* nop */
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_003EBA3C; /* je: equal / zero */

loc_003EBA16: ;
    ecx = MEM32(0x5499E8);
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 8) = edx;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_003EBA3C; /* jne: not equal / not zero */

loc_003EBA37: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_003EBA3C: ;
    eax = MEM32(esi + -8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (TEST_NZ(eax, eax)) { sub_003EBA4D(); return; } /* jne: not equal / not zero */

loc_003EBA48: ;
    eax = eax | 0x40;
    g_seh_ebp = ebp; sub_003EBA50(); return; /* tail jmp 0x003EBA50 */

}

/**
 * sub_003EBAC0
 * Original: 0x003EBAC0 - 0x003EBB82 (194 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBAC0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_003EBAC0: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x81B860);
    PUSH32(esp, 0x81B85C);
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x10;
    edi = esp + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    SET_LO8(eax, 0); /* xor self */
    ecx = 4;
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_003EBAF5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    MEM32(0x81B850) = 0x40001;
    MEM32(0x81B858) = edi;
    MEM32(0x81B854) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E8), _icall_esp); /* indirect call */
    }

loc_003EBB17: ;
    esi = eax;
    eax = MEM32(0x81B864);
    esp = esp + 8;
    if (CMP_EQ(eax, edi)) goto loc_003EBB2F; /* je: equal / zero */

loc_003EBB25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7EC), _icall_esp); /* indirect call */
    }

loc_003EBB2C: ;
    esp = esp + 4;

loc_003EBB2F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = 4;
    ecx = eax;
    edx = 0; /* xor self */
    MEM32(0x81B864) = esi;
    PUSH32(esp, 0); sub_0052337D(); /* call 0x0052337D */

loc_003EBB4D: ;
    edx = MEM32(0x81B864);
    eax = edx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x81B850;
    ecx = MEM32(eax + 4);
    ecx = ecx + edx;
    edx = MEM32(eax);
    edx = edx & 0x70000;
    (void)0; /* cmp edx, 0x20000 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(edx, 0x20000)) goto loc_003EBB7B; /* je: equal / zero */

loc_003EBB75: ;
    ecx = ecx & 0xFFFFFFF;

loc_003EBB7B: ;
    MEM32(eax + 4) = ecx;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_003EBB90
 * Original: 0x003EBB90 - 0x003EBBE1 (81 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBB90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003EBB90: ;
    SET_LO8(eax, MEM8(0x750341));
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_003EBBE1(); return; } /* je: equal / zero */

loc_003EBB99: ;
    xmm1 = MEMF(0x84B7F0); /* movss */
    xmm1 = xmm1 * MEMF(0x648D44); /* mulss */
    eax = ZX8(LO8(eax));
    ecx = eax + 1;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(0x75034C) = xmm0; /* movss */
    MEMF(0x750348) = xmm0; /* movss */
    MEMF(0x750344) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(0x750350) = xmm0; /* movss */
    eax = 0x750344;
    esp += 4; return; /* ret */

}

/**
 * sub_003EBC20
 * Original: 0x003EBC20 - 0x003EBC4F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBC20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003EBC20: ;
    SET_LO8(ecx, MEM8(0x750341));
    if (CMP_EQ(LO8(ecx), 0xFF)) { sub_003EBC4F(); return; } /* je: equal / zero */

loc_003EBC2B: ;
    SET_LO8(eax, MEM8(0x750340));
    if (CMP_BE(LO8(eax), 1)) { sub_003EBC4F(); return; } /* jbe: below or equal (unsigned <=) */

loc_003EBC34: ;
    edx = ZX8(LO8(eax));
    ecx = ZX8(LO8(ecx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - MEMF(0x648D14); /* subss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    esp += 4; return; /* ret */

}

/**
 * sub_003EBC60
 * Original: 0x003EBC60 - 0x003EBD29 (201 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBC60(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;

loc_003EBC60: ;
    PUSH32(esp, ecx);
    if (TEST_NZ(eax, eax)) { sub_003EBD29(); return; } /* jne: not equal / not zero */

loc_003EBC69: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(0x81B87C);
    xmm1 = MEMF(0x648D14); /* movss */
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x81B868;
    MEM32(0x84B7F4) = eax;
    MEMF(0x81B8C8) = xmm0; /* movss */
    MEMF(0x81B8C4) = xmm0; /* movss */
    MEMF(0x81B8C0) = xmm0; /* movss */
    MEMF(0x81B8BC) = xmm0; /* movss */
    MEMF(0x81B8B4) = xmm0; /* movss */
    MEMF(0x81B8B0) = xmm0; /* movss */
    MEMF(0x81B8AC) = xmm0; /* movss */
    MEMF(0x81B8A8) = xmm0; /* movss */
    MEMF(0x81B8A0) = xmm0; /* movss */
    MEMF(0x81B89C) = xmm0; /* movss */
    MEMF(0x81B898) = xmm0; /* movss */
    MEMF(0x81B894) = xmm0; /* movss */
    MEMF(0x81B8CC) = xmm1; /* movss */
    MEMF(0x81B8B8) = xmm1; /* movss */
    MEMF(0x81B8A4) = xmm1; /* movss */
    MEMF(0x81B890) = xmm1; /* movss */
    MEMF(0x81B880) = xmm0; /* movss */
    MEMF(0x81B884) = xmm0; /* movss */
    MEMF(0x81B888) = xmm0; /* movss */
    MEMF(0x81B88C) = xmm0; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EBE10
 * Original: 0x003EBE10 - 0x003EC03A (554 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EBE10: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x14);
    ecx = ZX16(MEM16(eax + 2));
    PUSH32(esp, ebx);
    edx = ecx * 4 + 1;
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x84B7F8);
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    ebx = ebx | 0xFFFFFFFFu;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(edx, ecx)) goto loc_003EBF39; /* jle: less or equal (signed <=) */

loc_003EBE41: ;
    esi = 0x81B8D0;
    goto loc_003EBE50;

    /* nop */
    /* nop */

loc_003EBE50: ;
    if (CMP_GE(esi, 0x81BCD0)) goto loc_003EBF34; /* jge: greater or equal (signed >=) */

loc_003EBE5C: ;
    eax = MEM32(esi);
    if (TEST_NZ(eax, eax)) goto loc_003EBE74; /* jne: not equal / not zero */

loc_003EBE62: ;
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_003EBF20; /* jne: not equal / not zero */

loc_003EBE6B: ;
    ebx = MEM32(esp + 0x10);
    goto loc_003EBF20;

loc_003EBE74: ;
    edi = MEM32(esp + 0x30);
    ecx++;
    (void)0; /* cmp MEM32(eax + 0xD8), edi - flags set for next jcc */
    ebp = 1;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(MEM32(eax + 0xD8), edi)) goto loc_003EBF20; /* jne: not equal / not zero */

loc_003EBE92: ;
    edi = MEM32(esp + 0x34);
    if (CMP_NE(MEM32(eax + 0xDC), edi)) goto loc_003EBF20; /* jne: not equal / not zero */

loc_003EBEA2: ;
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_003EBECF; /* jle: less or equal (signed <=) */

loc_003EBEAC: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(eax);
    edi = edi - ecx;

loc_003EBEB4: ;
    ebp = MEM32(edi + ecx);
    if (CMP_NE(ebp, MEM32(ecx))) goto loc_003EBECD; /* jne: not equal / not zero */

loc_003EBEBB: ;
    ebp = MEM32(esp + 0x14);
    edx++;
    ecx = ecx + 4;
    if (CMP_L(edx, ebp)) goto loc_003EBEB4; /* jl: less (signed <) */

loc_003EBEC7: ;
    ebp = MEM32(esp + 0x18);
    goto loc_003EBECF;

loc_003EBECD: ;
    ebp = 0; /* xor self */

loc_003EBECF: ;
    edx = MEM32(eax + 4);
    edi = eax + 4;
    ecx = 0; /* xor self */
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_003EBF01; /* je: equal / zero */

loc_003EBEDC: ;
    /* nop */

loc_003EBEE0: ;
    edx = MEM32(esp + 0x28);
    edx = MEM32(edx + ecx * 4);
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_003EBF01; /* je: equal / zero */

loc_003EBEEC: ;
    if (CMP_NE(MEM32(edi), edx)) goto loc_003EBEFF; /* jne: not equal / not zero */

loc_003EBEF0: ;
    edx = MEM32(esi);
    ecx++;
    edi = edi + 4;
    if (CMP_NE(MEM32(edx + ecx * 4 + 4), 0xFFFFFFFFu)) goto loc_003EBEE0; /* jne: not equal / not zero */

loc_003EBEFD: ;
    goto loc_003EBF01;

loc_003EBEFF: ;
    ebp = 0; /* xor self */

loc_003EBF01: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(eax + ecx * 4 + 4);
    if (CMP_NE(eax, MEM32(edx + ecx * 4))) goto loc_003EBF16; /* jne: not equal / not zero */

loc_003EBF0E: ;
    if (TEST_NZ(ebp, ebp)) goto loc_003EC018; /* jne: not equal / not zero */

loc_003EBF16: ;
    edx = MEM32(0x84B7F8);
    ecx = MEM32(esp + 0x1C);

loc_003EBF20: ;
    ebp = MEM32(esp + 0x10);
    ebp++;
    esi = esi + 4;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(ecx, edx)) goto loc_003EBE50; /* jl: less (signed <) */

loc_003EBF34: ;
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_003EBF3B; /* jne: not equal / not zero */

loc_003EBF39: ;
    ebx = edx;

loc_003EBF3B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE8);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E0), _icall_esp); /* indirect call */
    }

loc_003EBF46: ;
    edi = MEM32(esp + 0x18);
    edi = edi << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebx * 4 + 0x81B8D0) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E0), _icall_esp); /* indirect call */
    }

loc_003EBF5B: ;
    ecx = MEM32(ebx * 4 + 0x81B8D0);
    esi = MEM32(esp + 0x2C);
    MEM32(ecx) = eax;
    edx = MEM32(ebx * 4 + 0x81B8D0);
    ecx = edi;
    edi = MEM32(edx);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(esp + 0x38);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx * 4 + 0x81B8D0);
    edi = MEM32(esp + 0x34);
    ebp = 0; /* xor self */
    MEM32(ecx + 0xD4) = ebp;
    edx = MEM32(ebx * 4 + 0x81B8D0);
    MEM32(edx + 0xD8) = eax;
    ecx = MEM32(ebx * 4 + 0x81B8D0);
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 0xDC) = edx;
    eax = MEM32(ebx * 4 + 0x81B8D0);
    esp = esp + 8;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEM32(eax + 0xE4) = 1;
    if (CMP_EQ(edi, ebp)) { sub_003EC03A(); return; } /* je: equal / zero */

loc_003EBFCE: ;
    eax = ZX16(MEM16(edi + 2));
    eax = eax * 4 + 1;
    esi = eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E0), _icall_esp); /* indirect call */
    }

loc_003EBFE7: ;
    ecx = MEM32(ebx * 4 + 0x81B8D0);
    MEM32(ecx + 0xE0) = eax;
    edx = MEM32(ebx * 4 + 0x81B8D0);
    ecx = esi;
    eax = ecx;
    esi = edi;
    edi = MEM32(edx + 0xE0);
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    esp = esp + 4;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    g_seh_ebp = ebp; sub_003EC047(); return; /* tail jmp 0x003EC047 */

loc_003EC018: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx * 4 + 0x81B8D0);
    edx = MEM32(eax + 0xE4);
    POP32(esp, edi);
    POP32(esp, esi);
    edx++;
    POP32(esp, ebp);
    MEM32(eax + 0xE4) = edx;
    eax = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003EC0A0
 * Original: 0x003EC0A0 - 0x003EC0EB (75 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC0A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EC0A0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(LO8(ebx), 2)) goto loc_003EC0BD; /* je: equal / zero */

loc_003EC0B2: ;
    MEM32(edi) = 0x750700;
    esi = 1;

loc_003EC0BD: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0xDC);
    if (TEST_NZ(LO8(eax), 1)) { sub_003EC0EB(); return; } /* jne: not equal / not zero */

loc_003EC0CB: ;
    if (((int32_t)(ebp & ebp) >= 0)) goto loc_003EC0DD; /* jns: not sign (positive) */

loc_003EC0CF: ;
    MEM32(edi + esi * 4) = 0x7505C4;
    esi++;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003EC0DD: ;
    MEM32(edi + esi * 4) = 0x7505F8;
    esi++;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003EC270
 * Original: 0x003EC270 - 0x003EC315 (165 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EC270: ;
    eax = MEM32(esi + 0xD4);
    esp = esp - 0x8B0;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8B8);
    PUSH32(esp, edi);
    if (CMP_NE(eax, 3)) goto loc_003EC2B2; /* jne: not equal / not zero */

loc_003EC28A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_003EC291: ;
    eax = MEM32(esi + 0xD4);
    eax = eax + eax * 2;
    eax = MEM32(esi + eax * 8 + 0x74);
    ecx = MEM32(eax + -1);
    eax--;
    ecx--;
    MEM32(eax) = ecx;
    if ((ecx != 0)) goto loc_003EC2B2; /* jne: not equal / not zero */

loc_003EC2A7: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003EC2B2: ;
    eax = esi + 0xA4;
    edx = eax;
    edi = MEM32(edx);
    ecx = esi + 0xBC;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edi = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edi;
    edi = MEM32(edx + 0x10);
    edx = MEM32(edx + 0x14);
    MEM32(ecx + 0x10) = edi;
    MEM32(ecx + 0x14) = edx;
    ecx = esi + 0x8C;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    eax = 0; /* xor self */
    if (CMP_NE(ebp, 1)) { sub_003EC315(); return; } /* jne: not equal / not zero */

loc_003EC311: ;
    eax = ebp;
    g_seh_ebp = ebp; sub_003EC31C(); return; /* tail jmp 0x003EC31C */

}

/**
 * sub_003EC430
 * Original: 0x003EC430 - 0x003EC443 (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003EC430: ;
    eax = MEM32(0x7502EC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_003EC443(); return; } /* jne: not equal / not zero */

loc_003EC43F: ;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_003EC461(); return; /* tail jmp 0x003EC461 */

}

/**
 * sub_003EC4E0
 * Original: 0x003EC4E0 - 0x003EC5A1 (193 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC4E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003EC4E0: ;
    eax = MEM32(esi * 4 + 0x81B8D0);
    MEM32(eax + 0xE4) = MEM32(eax + 0xE4) - 1;
    eax = MEM32(esi * 4 + 0x81B8D0);
    ecx = MEM32(eax + 0xE4);
    if (CMP_G(ecx & ecx, 0)) goto loc_003EC5A0; /* jg: greater (signed >) */

loc_003EC502: ;
    ecx = MEM32(eax + 0xD4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_003EC54A; /* jle: less or equal (signed <=) */

loc_003EC50F: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_003EC512: ;
    eax = MEM32(esi * 4 + 0x81B8D0);
    eax = MEM32(eax + edi + 0x8C);
    ecx = MEM32(eax + -1);
    eax--;
    ecx--;
    MEM32(eax) = ecx;
    if ((ecx != 0)) goto loc_003EC534; /* jne: not equal / not zero */

loc_003EC529: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_003EC534: ;
    ecx = MEM32(esi * 4 + 0x81B8D0);
    eax = MEM32(ecx + 0xD4);
    ebx++;
    edi = edi + 0x18;
    if (CMP_L(ebx, eax)) goto loc_003EC512; /* jl: less (signed <) */

loc_003EC549: ;
    POP32(esp, edi);

loc_003EC54A: ;
    edx = MEM32(esi * 4 + 0x81B8D0);
    eax = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E4), _icall_esp); /* indirect call */
    }

loc_003EC55A: ;
    ecx = MEM32(esi * 4 + 0x81B8D0);
    eax = MEM32(ecx + 0xE0);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_003EC579; /* je: equal / zero */

loc_003EC56F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E4), _icall_esp); /* indirect call */
    }

loc_003EC576: ;
    esp = esp + 4;

loc_003EC579: ;
    edx = MEM32(esi * 4 + 0x81B8D0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x84B7E4), _icall_esp); /* indirect call */
    }

loc_003EC587: ;
    eax = MEM32(0x84B7F8);
    esp = esp + 4;
    eax--;
    MEM32(esi * 4 + 0x81B8D0) = 0;
    MEM32(0x84B7F8) = eax;

loc_003EC5A0: ;
    esp += 4; return; /* ret */

}
