/**
 * Burnout 3 - Recompiled code chunk 64
 * Functions: 250 (0x004BD94F - 0x004C644A)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004BD94F
 * Original: 0x004BD94F - 0x004BD9FC (173 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD94F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BD94F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x30);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x28));
    esi = eax + eax * 4;
    PUSH32(esp, MEM32(ebp + 0x24));
    esi = esi << 2;
    PUSH32(esp, 0x4BD924);
    PUSH32(esp, 0x4BD7D4);
    PUSH32(esp, MEM32(ebp + 0x20));
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0xC);
    PUSH32(esp, MEM32(esi + 0x882D84));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004BD70B(); /* call 0x004BD70B */

loc_004BD997: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x882D7C));
    esi = MEM32(ebp + -4);
    ecx = esi;
    PUSH32(esp, 0); sub_004BAA19(); /* call 0x004BAA19 */

loc_004BD9A8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_004BD9F2; /* jl: less (signed <) */

loc_004BD9AF: ;
    eax = MEM32(edi);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFE0u;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(edi);
    eax = esi + 0x14C8;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    MEM32(eax) = MEM32(eax) + 1;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0049CFA8(); /* call 0x0049CFA8 */

loc_004BD9DF: ;
    eax = MEM32(ebx);
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebx);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;

loc_004BD9F2: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_004BD9FC
 * Original: 0x004BD9FC - 0x004BDA16 (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD9FC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BD9FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    if (CMP_NE(esi, ebx)) { sub_004BDA16(); return; } /* jne: not equal / not zero */

loc_004BDA0C: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BDCA7(); return; /* tail jmp 0x004BDCA7 */

}

/**
 * sub_004BDCAD
 * Original: 0x004BDCAD - 0x004BDCC6 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BDCAD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BDCAD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    if (CMP_NE(esi, eax)) { sub_004BDCC6(); return; } /* jne: not equal / not zero */

loc_004BDCBC: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BDEC7(); return; /* tail jmp 0x004BDEC7 */

}

/**
 * sub_004BDECC
 * Original: 0x004BDECC - 0x004BDEE5 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BDECC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BDECC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = 0; /* xor self */
    if (CMP_NE(ebx, eax)) { sub_004BDEE5(); return; } /* jne: not equal / not zero */

loc_004BDEDB: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BE0C9(); return; /* tail jmp 0x004BE0C9 */

}

/**
 * sub_004BE0CE
 * Original: 0x004BE0CE - 0x004BE0FB (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE0CE(void)
{
    uint32_t ebp;

loc_004BE0CE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004BD9FC(); /* call 0x004BD9FC */

loc_004BE0F7: ;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_004BE0FB
 * Original: 0x004BE0FB - 0x004BE128 (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE0FB(void)
{
    uint32_t ebp;

loc_004BE0FB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(ebp + 0x1C));
    esi = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x18));
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_004BDCAD(); /* call 0x004BDCAD */

loc_004BE122: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004BE128
 * Original: 0x004BE128 - 0x004BE163 (59 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE128(void)
{
    uint32_t ebp;

loc_004BE128: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x30));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(ebp + 0x2C));
    esi = ebp + 0x18;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    esp = esp - 0xC;
    edi = esp;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = ebp + 0xC;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_004BDECC(); /* call 0x004BDECC */

loc_004BE15D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 48; return; /* ret 44 */

}

/**
 * sub_004BE163
 * Original: 0x004BE163 - 0x004BE172 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE163(void)
{
    uint32_t ebp;

loc_004BE163: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004BD61A(); return; /* tail jmp 0x004BD61A */

}

/**
 * sub_004BE172
 * Original: 0x004BE172 - 0x004BE17D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE172(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BE172: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004C2CE4(); return; /* tail jmp 0x004C2CE4 */

}

/**
 * sub_004BE17D
 * Original: 0x004BE17D - 0x004BE24A (205 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE17D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BE17D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x228;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM16(ebp + -542) = MEM16(ebp + -542) & 0;
    MEM16(ebp + -540) = MEM16(ebp + -540) & 0;
    MEM32(ebp + -552) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -548) = eax;
    SET_LO16(eax, MEM16(ebp + 0x18));
    MEM16(ebp + -544) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x1C));
    MEM16(ebp + -538) = LO16(eax);
    eax = MEM32(ebp + 0x10);
    ecx = ebp + -536;
    ecx = ecx - eax;

loc_004BE1CD: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BE1CD; /* jne: not equal / not zero */

loc_004BE1D7: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ebp + -24;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(esi + 0x22C);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x228);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = eax + 1;

loc_004BE1FE: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BE1FE; /* jne: not equal / not zero */

loc_004BE205: ;
    eax = eax - ecx;
    edi = eax + 0x11;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -552;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x238));
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_004BE225: ;
    if (TEST_NZ(eax, eax)) { sub_004BE24A(); return; } /* jne: not equal / not zero */

loc_004BE229: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BE22E: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BE239; /* jg: greater (signed >) */

loc_004BE232: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BE237: ;
    g_seh_ebp = ebp; sub_004BE26E(); return; /* tail jmp 0x004BE26E */

loc_004BE239: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BE23E: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    g_seh_ebp = ebp; sub_004BE26E(); return; /* tail jmp 0x004BE26E */

}

/**
 * sub_004BE274
 * Original: 0x004BE274 - 0x004BE33D (201 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE274(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004BE274: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x29C);
    ebx = ebx - MEM32(esi + 0x228);
    PUSH32(esp, edi);
    if ((ebx == 0)) goto loc_004BE328; /* je: equal / zero */

loc_004BE296: ;
    eax = 0; /* xor self */
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    edi = esi + 0x95F4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = 0; /* xor self */
    edi = ebp + -24;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(esi + 0x22C);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x228);
    MEM32(ebp + -16) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = esi + 0x95F4;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x238));
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_004BE2E5: ;
    if (TEST_NZ(eax, eax)) goto loc_004BE30D; /* jne: not equal / not zero */

loc_004BE2E9: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BE2EE: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BE2FC; /* jg: greater (signed >) */

loc_004BE2F2: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BE2F7: ;
    MEM32(ebp + -4) = eax;
    goto loc_004BE333;

loc_004BE2FC: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BE301: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    goto loc_004BE2F7;

loc_004BE30D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi + 0x1518;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_004BE31B: ;
    MEM32(esi + 0x228) = MEM32(esi + 0x228) + ebx;
    MEM32(esi + 0x22C) = MEM32(esi + 0x22C) + 0 + _cf; /* adc */

loc_004BE328: ;
    PUSH32(esp, MEM32(esi + 0x238));
    PUSH32(esp, 0); sub_0042C165(); /* call 0x0042C165 */

loc_004BE333: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE33D
 * Original: 0x004BE33D - 0x004BE469 (300 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE33D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BE33D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, 0); sub_004C27E5(); /* call 0x004C27E5 */

loc_004BE359: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (TEST_S(eax, eax)) goto loc_004BE457; /* jl: less (signed <) */

loc_004BE364: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ebp + 0x18);
    (void)0; /* cmp ecx, MEM32(eax) - flags set for next jcc */
    ebx = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = ecx;
    if (CMP_A(ecx, MEM32(eax))) goto loc_004BE38F; /* ja: above (unsigned >) */

loc_004BE374: ;
    eax = ecx;
    ecx = ecx >> 2;
    esi = esi + 0x3C;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(ebp + 8);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ebx = ebx + MEM32(eax + 0x38);
    esi = eax;

loc_004BE38F: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0); sub_004A10E2(); /* call 0x004A10E2 */

loc_004BE397: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (TEST_Z(eax, eax)) goto loc_004BE3CA; /* je: equal / zero */

loc_004BE39E: ;
    ecx = MEM32(ebp + -12);
    eax = 0; /* xor self */
    esi = esi + 0x48;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + 0x14) = ecx;

loc_004BE3AC: ;
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + -20);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004BE3C5; /* je: equal / zero */

loc_004BE3BB: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 0x70;
    eax++;
    if (CMP_B(eax, 4)) goto loc_004BE3AC; /* jb: below (unsigned <) */

loc_004BE3C5: ;
    if (CMP_NE(eax, 4)) goto loc_004BE3D4; /* jne: not equal / not zero */

loc_004BE3CA: ;
    eax = 0x80150003u;
    goto loc_004BE462;

loc_004BE3D4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x90;
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + -4);
    if (CMP_A(ecx, MEM32(edx))) goto loc_004BE447; /* ja: above (unsigned >) */

loc_004BE3E5: ;
    esi = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    ecx = MEM32(esi + 0x14);
    MEM32(ebx) = ecx;
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx + 8);
    MEM32(ebx + 4) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM8(ebx + 9) = LO8(ecx);
    ecx = MEM32(ebp + 0x10);
    MEM32(ebx + 0xA) = ecx;
    ecx = MEM32(esi + 0x1E0);
    MEM32(ebx + 0x86) = ecx;
    ecx = MEM32(esi + 0x244);
    MEM32(ebx + 0x8C) = ecx;
    ecx = MEM32(ebp + -12);
    SET_LO8(eax, MEM8(eax + ecx + 9));
    MEM16(ebx + 0x8A) = MEM16(ebx + 0x8A) & 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    MEM8(ebx + 8) = LO8(eax);
    esi = esi + 0x119F4;
    edi = ebx + 0xE;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0x19);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebx + 0x22;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_004BE447: ;
    eax = MEM32(ebp + -4);
    if (CMP_BE(eax, MEM32(edx))) goto loc_004BE45A; /* jbe: below or equal (unsigned <=) */

loc_004BE44E: ;
    MEM32(ebp + -16) = 0x8007007Au;
    goto loc_004BE45A;

loc_004BE457: ;
    edx = MEM32(ebp + 0x18);

loc_004BE45A: ;
    eax = MEM32(ebp + -4);
    MEM32(edx) = eax;
    eax = MEM32(ebp + -16);

loc_004BE462: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004BE469
 * Original: 0x004BE469 - 0x004BE4BC (83 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE469(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BE469: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM8(ebp + -20) = 0;
    edi = ebp + -19;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    ebx = esi + -800;
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    eax = ebx;
    ecx = eax + 1;

loc_004BE490: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BE490; /* jne: not equal / not zero */

loc_004BE497: ;
    edi = MEM32(esi + -864);
    eax = eax - ecx;
    edi = edi + eax;
    eax = MEM32(esi + -4640);
    ecx = eax + edi;
    if (CMP_B(ecx, 0x10000)) { sub_004BE4BC(); return; } /* jb: below (unsigned <) */

loc_004BE4B2: ;
    eax = 0x80070044u;
    g_seh_ebp = ebp; sub_004BE5E0(); return; /* tail jmp 0x004BE5E0 */

}

/**
 * sub_004BE5E7
 * Original: 0x004BE5E7 - 0x004BE6EE (263 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE5E7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BE5E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    eax = ebx + 0x10AC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BE5FE: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_004BE6E6; /* je: equal / zero */

loc_004BE608: ;
    if (TEST_S(esi, esi)) goto loc_004BE6E6; /* jl: less (signed <) */

loc_004BE60E: ;
    if (CMP_NE(MEM32(ebx + 0x1F4), 0)) goto loc_004BE621; /* jne: not equal / not zero */

loc_004BE617: ;
    esi = 0x8015C004u;
    goto loc_004BE6E6;

loc_004BE621: ;
    PUSH32(esp, edi);
    edi = ebx + 0x21BF4;
    eax = ebx + 0x219F4;
    edx = edi;
    MEM32(ebp + 8) = edi;
    edx = edx - eax;

loc_004BE635: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004BE635; /* jne: not equal / not zero */

loc_004BE63F: ;
    edi--;

loc_004BE640: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004BE640; /* jne: not equal / not zero */

loc_004BE648: ;
    esi = 0x56185C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_00433AC1(); /* call 0x00433AC1 */

loc_004BE656: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004BE6AB; /* je: equal / zero */

loc_004BE65B: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042D1FA(); /* call 0x0042D1FA */

loc_004BE669: ;
    if (TEST_Z(eax, eax)) goto loc_004BE6AB; /* je: equal / zero */

loc_004BE66D: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebx + 0x1D8);
    MEM32(ebx + 0x1E8) = eax;
    eax = eax + 0x3FFF;
    eax = eax & 0xFFFFC000u;
    MEM32(ebx + 0x1E0) = MEM32(ebx + 0x1E0) + eax;
    eax = ZX16(MEM16(ebx + 0x58));
    if (CMP_BE(ecx, MEM32(eax + ebx + 0x6A))) goto loc_004BE69D; /* jbe: below or equal (unsigned <=) */

loc_004BE696: ;
    esi = 0x8015C003u;
    goto loc_004BE6E6;

loc_004BE69D: ;
    MEM32(ebx + 0x1D4) = 1;
    esi = 0; /* xor self */
    goto loc_004BE6D9;

loc_004BE6AB: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BE6B0: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BE6BD; /* jg: greater (signed >) */

loc_004BE6B4: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BE6B9: ;
    esi = eax;
    goto loc_004BE6D0;

loc_004BE6BD: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BE6C2: ;
    esi = eax;
    esi = esi & 0xFFFF;
    esi = esi | 0x80070000u;

loc_004BE6D0: ;
    if (TEST_S(esi, esi)) goto loc_004BE6D9; /* jl: less (signed <) */

loc_004BE6D4: ;
    esi = 0x80004005u;

loc_004BE6D9: ;
    PUSH32(esp, 0); sub_00433DA6(); /* call 0x00433DA6 */

loc_004BE6DE: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042D27C(); /* call 0x0042D27C */

loc_004BE6E6: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE787
 * Original: 0x004BE787 - 0x004BE80B (132 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE787(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BE787: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = ebx + 0x21BF4;
    ecx = ebx + 0x219F4;
    MEM32(ebp + 8) = edx;
    MEM32(ebp + 8) = MEM32(ebp + 8) - ecx;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);

loc_004BE7A9: ;
    SET_LO8(edx, MEM8(eax));
    esi = MEM32(ebp + 8);
    MEM8(esi + eax) = LO8(edx);
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BE7A9; /* jne: not equal / not zero */

loc_004BE7B6: ;
    edi = ebx + 0x21BF4;
    edi--;

loc_004BE7BD: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004BE7BD; /* jne: not equal / not zero */

loc_004BE7C5: ;
    esi = 0x56185C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, ecx);
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_004336E6(); /* call 0x004336E6 */

loc_004BE7DB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_004BE80B(); return; } /* je: equal / zero */

loc_004BE7E1: ;
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 0x14));
    PUSH32(esp, 0); sub_00433730(); /* call 0x00433730 */

loc_004BE7FB: ;
    if (TEST_Z(eax, eax)) { sub_004BE80B(); return; } /* je: equal / zero */

loc_004BE7FF: ;
    MEM32(ebx + 0x1D4) = 6;
    g_seh_ebp = ebp; sub_004BE82D(); return; /* tail jmp 0x004BE82D */

}

/**
 * sub_004BE835
 * Original: 0x004BE835 - 0x004BE9C1 (396 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE835(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004BE835: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ebx + 0x158C;
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BE84E: ;
    if (TEST_Z(eax, eax)) goto loc_004BE9BB; /* je: equal / zero */

loc_004BE856: ;
    if (TEST_S(eax, eax)) goto loc_004BE9BB; /* jl: less (signed <) */

loc_004BE85C: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B5542(); /* call 0x004B5542 */

loc_004BE86D: ;
    if (TEST_S(eax, eax)) goto loc_004BE9BB; /* jl: less (signed <) */

loc_004BE875: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebx + 0x1430;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_004BE888: ;
    eax = MEM32(ebp + 8);
    MEM32(ebx + 0x210) = MEM32(ebx + 0x210) + eax;
    eax = MEM32(ebx + 0x21C);
    eax = ebx + eax + 0x95F4;
    MEM32(eax) = MEM32(eax) & 0;
    SET_LO16(ecx, MEM16(ebp + 8));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 8));
    MEM16(eax + 4) = LO16(ecx);
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + -4);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 0x220) = MEM32(ebx + 0x220) + ecx;
    ecx = MEM32(ebx + 0x1FC);
    ecx = ecx + ecx * 8;
    MEM32(ebx + 0x224) = MEM32(ebx + 0x224) + 0 + _cf; /* adc */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 8;
    ecx = ebx + ecx * 4 + 0x2A0;
    MEM16(ecx) = MEM16(ecx) + 1;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    eax = ebx + 0x14A4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_004BE8FF: ;
    eax = MEM32(ebp + 8);
    MEM32(ebx + 0x21C) = MEM32(ebx + 0x21C) + eax;
    eax = MEM32(ebx + 0x21C);
    edi = MEM32(ebp + -8);
    esi = ebx + 0x15C0;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 8));
    eax = eax & 0xFFFFFE00u;
    PUSH32(esp, MEM32(ebx + 0x234));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 0x230));
    PUSH32(esp, eax);
    eax = ebx + 0x95F4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x15DC));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004BE941: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004BE94B: ;
    if (TEST_S(eax, eax)) goto loc_004BE9BA; /* jl: less (signed <) */

loc_004BE94F: ;
    edx = MEM32(ebx + 0x224);
    eax = MEM32(ebx + 0x218);
    ecx = 0; /* xor self */
    if (CMP_A(edx, ecx)) goto loc_004BE9AA; /* ja: above (unsigned >) */

loc_004BE961: ;
    if (CMP_B(edx, ecx)) goto loc_004BE96D; /* jb: below (unsigned <) */

loc_004BE963: ;
    ecx = MEM32(ebx + 0x220);
    if (CMP_AE(ecx, eax)) goto loc_004BE9AA; /* jae: above or equal (unsigned >=) */

loc_004BE96D: ;
    esi = ebx + 0x158C;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x15F4;
    PUSH32(esp, MEM32(ebx + 0x224));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 0x220));
    PUSH32(esp, 0x8000);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x15A8));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004BE99C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004BE9A6: ;
    if (TEST_S(eax, eax)) goto loc_004BE9BA; /* jl: less (signed <) */

loc_004BE9AA: ;
    MEM8(ebx + 0x1B) = MEM8(ebx + 0x1B) | 0x80;
    MEM32(ebx + 0x1D4) = 8;
    eax = 0; /* xor self */

loc_004BE9BA: ;
    POP32(esp, edi);

loc_004BE9BB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BE9C1
 * Original: 0x004BE9C1 - 0x004BEA77 (182 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BE9C1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004BE9C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x15C0;
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BE9D9: ;
    if (TEST_Z(eax, eax)) goto loc_004BEA70; /* je: equal / zero */

loc_004BE9E1: ;
    if (TEST_S(eax, eax)) goto loc_004BEA70; /* jl: less (signed <) */

loc_004BE9E7: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5542(); /* call 0x004B5542 */

loc_004BE9F7: ;
    if (TEST_S(eax, eax)) goto loc_004BEA70; /* jl: less (signed <) */

loc_004BE9FB: ;
    ecx = MEM32(ebp + 8);
    eax = esi + 0x21C;
    MEM32(eax) = MEM32(eax) - ecx;
    PUSH32(esp, MEM32(eax));
    eax = ecx + esi + 0x95F4;
    PUSH32(esp, eax);
    eax = esi + 0x95F4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004BEA1C: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esi + 0x224);
    eax = esi + 0x230;
    esp = esp + 0xC;
    MEM32(eax) = MEM32(eax) + ecx;
    MEM32(eax + 4) = MEM32(eax + 4) + 0 + _cf; /* adc */
    MEM32(esi + 0x1D8) = MEM32(esi + 0x1D8) + ecx;
    MEM32(esi + 0x1DC) = MEM32(esi + 0x1DC) + ecx;
    eax = MEM32(esi + 0x218);
    ecx = 0; /* xor self */
    if (CMP_B(edx, ecx)) goto loc_004BEA64; /* jb: below (unsigned <) */

loc_004BEA4C: ;
    if (CMP_A(edx, ecx)) goto loc_004BEA58; /* ja: above (unsigned >) */

loc_004BEA4E: ;
    ecx = MEM32(esi + 0x220);
    if (CMP_B(ecx, eax)) goto loc_004BEA64; /* jb: below (unsigned <) */

loc_004BEA58: ;
    MEM32(esi + 0x1D4) = 9;
    goto loc_004BEA6E;

loc_004BEA64: ;
    MEM32(esi + 0x1D4) = 7;

loc_004BEA6E: ;
    eax = 0; /* xor self */

loc_004BEA70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BEA77
 * Original: 0x004BEA77 - 0x004BEB21 (170 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BEA77(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BEA77: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x15A8;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004BEA94: ;
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = esi + 0x1430;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_004BEAA7: ;
    eax = MEM32(esi + 0x204);
    ecx = esi + eax + 0x119F4;
    eax = ecx;
    edi = eax + 1;

loc_004BEAB9: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BEAB9; /* jne: not equal / not zero */

loc_004BEAC0: ;
    eax = eax - edi;
    ebx = eax;
    eax = esi + 0x219F4;
    edi = eax + 1;

loc_004BEACD: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BEACD; /* jne: not equal / not zero */

loc_004BEAD4: ;
    edx = MEM32(esi + 0x218);
    PUSH32(esp, edx);
    eax = eax - edi;
    edi = esi + 0x15F4;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = eax + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_0043347E(); /* call 0x0043347E */

loc_004BEAF9: ;
    if (TEST_NZ(eax, eax)) { sub_004BEB21(); return; } /* jne: not equal / not zero */

loc_004BEAFD: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BEB02: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BEB10; /* jg: greater (signed >) */

loc_004BEB06: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BEB0B: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_004BEB38(); return; /* tail jmp 0x004BEB38 */

loc_004BEB10: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BEB15: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    goto loc_004BEB0B;

}

/**
 * sub_004BEB42
 * Original: 0x004BEB42 - 0x004BEBA5 (99 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BEB42(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004BEB42: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x15C0;
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BEB5A: ;
    if (TEST_Z(eax, eax)) goto loc_004BEB9E; /* je: equal / zero */

loc_004BEB5E: ;
    if (TEST_S(eax, eax)) goto loc_004BEB9E; /* jl: less (signed <) */

loc_004BEB60: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5542(); /* call 0x004B5542 */

loc_004BEB70: ;
    if (TEST_S(eax, eax)) goto loc_004BEB9E; /* jl: less (signed <) */

loc_004BEB74: ;
    ecx = MEM32(esi + 0x21C);
    eax = esi + 0x230;
    MEM32(eax) = MEM32(eax) + ecx;
    MEM32(esi + 0x1D4) = 0xB;
    MEM32(eax + 4) = MEM32(eax + 4) + 0 + _cf; /* adc */
    MEM32(esi + 0x1D8) = MEM32(esi + 0x1D8) + ecx;
    MEM32(esi + 0x1DC) = MEM32(esi + 0x1DC) + ecx;
    eax = 0; /* xor self */

loc_004BEB9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BEBA5
 * Original: 0x004BEBA5 - 0x004BED05 (352 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BEBA5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BEBA5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x652F64));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C527(); /* call 0x0042C527 */

loc_004BEBC8: ;
    if (TEST_NZ(eax, eax)) goto loc_004BEBE5; /* jne: not equal / not zero */

loc_004BEBCC: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BEBD1: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BECC9; /* jg: greater (signed >) */

loc_004BEBD9: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BEBDE: ;
    esi = eax;
    g_seh_ebp = ebp; sub_004BED2F(); return; /* tail jmp 0x004BED2F */

loc_004BEBE5: ;
    PUSH32(esp, 0); sub_00433AC1(); /* call 0x00433AC1 */

loc_004BEBEA: ;
    if (TEST_Z(eax, eax)) goto loc_004BEBCC; /* je: equal / zero */

loc_004BEBEE: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_004BEBFA: ;
    if (TEST_Z(eax, eax)) goto loc_004BEBCC; /* je: equal / zero */

loc_004BEBFE: ;
    esi = MEM32(ebp + 8);
    eax = esi + 0x14A4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_004BEC0D: ;
    eax = MEM32(esi + 0x29C);
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, edi);

loc_004BEC1A: ;
    eax = 0; /* xor self */
    edi = ebp + -40;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -32) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8000);
    eax = esi + 0x95FC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + -28) = ebx;
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_004BEC49: ;
    if (TEST_Z(eax, eax)) goto loc_004BECDE; /* je: equal / zero */

loc_004BEC51: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    ebx = esi + 0x95F4;
    MEM32(ebx) = MEM32(ebx) & 0;
    MEM16(ebx + 4) = LO16(eax);
    MEM16(ebx + 6) = LO16(eax);
    eax = eax + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, ebx);
    eax = esi + 0x14A4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_004BEC7C: ;
    eax = 0; /* xor self */
    edi = ebp + -40;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    edi = MEM32(ebp + -12);
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebp + -32) = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x238));
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_004BECA7: ;
    if (TEST_Z(eax, eax)) goto loc_004BECDE; /* je: equal / zero */

loc_004BECAB: ;
    edi = edi + MEM32(ebp + -4);
    eax = 0; /* xor self */
    (void)0; /* cmp eax, MEM32(ebp + -16) - flags set for next jcc */
    MEM32(ebp + -12) = edi;
    if (CMP_G(eax, MEM32(ebp + -16))) { sub_004BED05(); return; } /* jg: greater (signed >) */

loc_004BECB8: ;
    if (CMP_L(eax, MEM32(ebp + -16))) goto loc_004BECC2; /* jl: less (signed <) */

loc_004BECBA: ;
    eax = MEM32(ebp + 8);
    if (CMP_AE(eax, MEM32(ebp + -20))) { sub_004BED05(); return; } /* jae: above or equal (unsigned >=) */

loc_004BECC2: ;
    ebx = 0; /* xor self */
    goto loc_004BEC1A;

loc_004BECC9: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BECCE: ;
    esi = eax;
    esi = esi & 0xFFFF;
    esi = esi | 0x80070000u;
    g_seh_ebp = ebp; sub_004BED2F(); return; /* tail jmp 0x004BED2F */

loc_004BECDE: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BECE3: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BECF0; /* jg: greater (signed >) */

loc_004BECE7: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BECEC: ;
    esi = eax;
    g_seh_ebp = ebp; sub_004BED2E(); return; /* tail jmp 0x004BED2E */

loc_004BECF0: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BECF5: ;
    esi = eax;
    esi = esi & 0xFFFF;
    esi = esi | 0x80070000u;
    g_seh_ebp = ebp; sub_004BED2E(); return; /* tail jmp 0x004BED2E */

}

/**
 * sub_004BED45
 * Original: 0x004BED45 - 0x004BEF17 (466 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BED45(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BED45: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x1D8);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = ecx;
    MEM32(ebx + 0x244) = eax;
    PUSH32(esp, 0); sub_004BE274(); /* call 0x004BE274 */

loc_004BED64: ;
    if (TEST_S(eax, eax)) goto loc_004BEF12; /* jl: less (signed <) */

loc_004BED6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx + 0x280;
    PUSH32(esp, eax);
    esi = ebx + 0x1518;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_004BED81: ;
    eax = 0; /* xor self */
    edi = ebx + 0x294;
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, esi);
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_004BED91: ;
    eax = MEM32(ebx + 0x1F0);
    eax = eax + eax * 8;
    eax = eax << 2;
    PUSH32(esp, eax);
    ecx = ebx + 0x29C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_004BEDAB: ;
    eax = ebx + 0x264;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_004BEDB8: ;
    eax = 0; /* xor self */
    edi = ebx + 0x278;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebx + 0x238));
    PUSH32(esp, 0); sub_0042BFC5(); /* call 0x0042BFC5 */

loc_004BEDE0: ;
    if (TEST_Z(eax, eax)) goto loc_004BEEAF; /* je: equal / zero */

loc_004BEDE8: ;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    edx = ebx + 0x95F4;
    edi = edx;
    PUSH32(esp, 0x20);
    esi = ebx + 0x23C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, esi);
    edx = edx + 0x60;
    PUSH32(esp, 0x48);
    POP32(esp, ecx);
    edi = edx;
    eax = 0; /* xor self */
    edx = edx + esi;
    PUSH32(esp, 8);
    MEM32(ebp + 8) = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebp + -4) = edx;
    PUSH32(esp, 0); sub_0042DC47(); /* call 0x0042DC47 */

loc_004BEE19: ;
    esi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_004BEEAF; /* je: equal / zero */

loc_004BEE24: ;
    PUSH32(esp, 0x7C);
    edi = ebx + 0x95F4;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042DC5B(); /* call 0x0042DC5B */

loc_004BEE33: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_004BEE3C: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0042DBE5(); /* call 0x0042DBE5 */

loc_004BEE43: ;
    esi = ebx + 0x1518;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_004BEE52: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_004BEE5E: ;
    eax = ebx + 0x119F4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_004BEE6B: ;
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x180);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x238));
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_004BEE82: ;
    if (TEST_Z(eax, eax)) goto loc_004BEEAF; /* je: equal / zero */

loc_004BEE86: ;
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x1F0);
    eax = eax + eax * 8;
    eax = eax << 2;
    PUSH32(esp, eax);
    eax = ebx + 0x29C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x238));
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_004BEEAB: ;
    if (TEST_NZ(eax, eax)) goto loc_004BEED0; /* jne: not equal / not zero */

loc_004BEEAF: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BEEB4: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BEEBF; /* jg: greater (signed >) */

loc_004BEEB8: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BEEBD: ;
    goto loc_004BEF10;

loc_004BEEBF: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BEEC4: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    goto loc_004BEF10;

loc_004BEED0: ;
    PUSH32(esp, MEM32(ebx + 0x238));
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004BEEDB: ;
    PUSH32(esp, MEM32(ebx + 0x1D8));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebx + 0x15DC));
    MEM32(ebx + 0x238) = MEM32(ebx + 0x238) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_004BCE10(); /* call 0x004BCE10 */

loc_004BEEF6: ;
    if (TEST_S(eax, eax)) goto loc_004BEF10; /* jl: less (signed <) */

loc_004BEEFA: ;
    ecx = MEM32(ebx + 0x2C0);
    MEM32(ebx + 0x1DC) = MEM32(ebx + 0x1DC) + ecx;
    MEM32(ebx + 0x1D4) = 0xD;

loc_004BEF10: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004BEF12: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BEF17
 * Original: 0x004BEF17 - 0x004BF0A7 (400 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BEF17(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BEF17: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = edi + 0x21DF8;
    eax = edi + 0x95F4;
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = 0x8400;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004BEF47: ;
    eax = MEM32(edi + 8);
    ebx = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    eax = MEM32(edi + 0x15DC);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(edi + 0x244);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esi + 0xE8) = eax;
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 0xE8));
    MEM32(esi + 0xEC) = edx;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF);
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0x1C) = 0xEA60;
    MEM32(esi + 0x24) = ebx;
    PUSH32(esp, 0); sub_004B4A6C(); /* call 0x004B4A6C */

loc_004BEFA5: ;
    if (CMP_L(eax, ebx)) goto loc_004BF0A0; /* jl: less (signed <) */

loc_004BEFAD: ;
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) | 1;
    eax = 0xEA60;
    if (CMP_BE(MEM32(esi + 0x28), eax)) goto loc_004BEFBE; /* jbe: below or equal (unsigned <=) */

loc_004BEFBB: ;
    MEM32(esi + 0x28) = eax;

loc_004BEFBE: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x140;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004BEFCD: ;
    ecx = esi + 0x140;
    MEM32(ecx) = 0x4AD4D1;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x148) = eax;
    eax = esi + 0x104;
    MEM32(esi + 0x14C) = ebx;
    MEM32(eax + 0x14) = ecx;
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = 0x4AD3A7;
    MEM32(eax + 4) = 0x4ACBA9;
    MEM32(eax + 8) = 0x4ADE88;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x18) = ebx;
    eax = edi + 0x15F4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = 0x8000;
    PUSH32(esp, 0); sub_004BE33D(); /* call 0x004BE33D */

loc_004BF02B: ;
    if (CMP_L(eax, ebx)) goto loc_004BF0A0; /* jl: less (signed <) */

loc_004BF02F: ;
    (void)0; /* cmp MEM32(edi + 0x20), 3 - flags set for next jcc */
    eax = MEM32(ebp + 8);
    if (CMP_NE(MEM32(edi + 0x20), 3)) goto loc_004BF076; /* jne: not equal / not zero */

loc_004BF038: ;
    ecx = 0x8000;
    ecx = ecx - eax;
    MEM32(ebp + -8) = ecx;
    ecx = edi + 0x21F4C;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi + 8));
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = eax + edi + 0x15F4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x1C));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_004C2C47(); /* call 0x004C2C47 */

loc_004BF065: ;
    if (CMP_GE(eax, ebx)) goto loc_004BF070; /* jge: greater or equal (signed >=) */

loc_004BF069: ;
    if (CMP_NE(eax, 0x80152102u)) goto loc_004BF0A0; /* jne: not equal / not zero */

loc_004BF070: ;
    eax = MEM32(ebp + 8);
    eax = eax + MEM32(ebp + -8);

loc_004BF076: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = edi + 0x15F4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x882E70);
    PUSH32(esp, 0); sub_004AD238(); /* call 0x004AD238 */

loc_004BF08E: ;
    if (CMP_L(eax, ebx)) goto loc_004BF0A0; /* jl: less (signed <) */

loc_004BF092: ;
    MEM8(edi + 0x1B) = MEM8(edi + 0x1B) | 0x80;
    MEM32(edi + 0x1D4) = 0xE;

loc_004BF0A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF0FE
 * Original: 0x004BF0FE - 0x004BF247 (329 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF0FE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BF0FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx + 0x21DF8;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004BF117: ;
    PUSH32(esp, 0); sub_00433DA6(); /* call 0x00433DA6 */

loc_004BF11C: ;
    esi = ebx + 0x15A8;
    eax = MEM32(esi);
    edi = edi | 0xFFFFFFFFu;
    if (CMP_EQ(eax, edi)) goto loc_004BF137; /* je: equal / zero */

loc_004BF12B: ;
    if (TEST_Z(eax, eax)) goto loc_004BF137; /* je: equal / zero */

loc_004BF12F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004BF135: ;
    MEM32(esi) = edi;

loc_004BF137: ;
    esi = ebx + 0x15DC;
    eax = MEM32(esi);
    if (CMP_EQ(eax, edi)) goto loc_004BF14F; /* je: equal / zero */

loc_004BF143: ;
    if (TEST_Z(eax, eax)) goto loc_004BF14F; /* je: equal / zero */

loc_004BF147: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004BF14D: ;
    MEM32(esi) = edi;

loc_004BF14F: ;
    esi = ebx + 0x238;
    eax = MEM32(esi);
    if (CMP_EQ(eax, edi)) goto loc_004BF167; /* je: equal / zero */

loc_004BF15B: ;
    if (TEST_Z(eax, eax)) goto loc_004BF167; /* je: equal / zero */

loc_004BF15F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004BF165: ;
    MEM32(esi) = edi;

loc_004BF167: ;
    ecx = ebx + 0x21BF4;
    eax = ebx + 0x219F4;
    edx = ecx;
    edx = edx - eax;
    MEM32(ebp + 8) = edx;

loc_004BF17A: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004BF17A; /* jne: not equal / not zero */

loc_004BF184: ;
    edi = ebx + 0x21BF4;
    edi--;

loc_004BF18B: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004BF18B; /* jne: not equal / not zero */

loc_004BF193: ;
    esi = 0x56185C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_0042D27C(); /* call 0x0042D27C */

loc_004BF1A8: ;
    eax = ebx + 0x219F4;

loc_004BF1AE: ;
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(ebp + 8);
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004BF1AE; /* jne: not equal / not zero */

loc_004BF1BB: ;
    edi = ebx + 0x21BF4;
    edi--;

loc_004BF1C2: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004BF1C2; /* jne: not equal / not zero */

loc_004BF1CA: ;
    esi = 0x882E68;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    PUSH32(esp, 0); sub_0042D27C(); /* call 0x0042D27C */

loc_004BF1DE: ;
    eax = MEM32(ebx + 0x24);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_004BF1F3; /* je: equal / zero */

loc_004BF1E7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004BF1F0: ;
    MEM32(ebx + 0x24) = edi;

loc_004BF1F3: ;
    eax = MEM32(ebx + 0x28);
    if (CMP_EQ(eax, edi)) goto loc_004BF206; /* je: equal / zero */

loc_004BF1FA: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004BF203: ;
    MEM32(ebx + 0x28) = edi;

loc_004BF206: ;
    esi = ebx + 0x21F48;
    eax = MEM32(esi);
    if (CMP_EQ(eax, edi)) goto loc_004BF21D; /* je: equal / zero */

loc_004BF212: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004BF21B: ;
    MEM32(esi) = edi;

loc_004BF21D: ;
    esi = ebx + 0x21F4C;
    eax = MEM32(esi);
    if (CMP_EQ(eax, edi)) goto loc_004BF234; /* je: equal / zero */

loc_004BF229: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004BF232: ;
    MEM32(esi) = edi;

loc_004BF234: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x1D4) = 0x11;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BF247
 * Original: 0x004BF247 - 0x004BF269 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF247(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BF247: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1D4);
    (void)0; /* cmp eax, 0x11 - flags set for next jcc */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_GE(eax, 0x11)) { sub_004BF269(); return; } /* jge: greater or equal (signed >=) */

loc_004BF25D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x882E20), _icall_esp); /* indirect call */
    }

loc_004BF265: ;
    edi = eax;
    g_seh_ebp = ebp; sub_004BF273(); return; /* tail jmp 0x004BF273 */

}

/**
 * sub_004BF2F5
 * Original: 0x004BF2F5 - 0x004BF48C (407 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF2F5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BF2F5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = eax + 1;

loc_004BF306: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BF306; /* jne: not equal / not zero */

loc_004BF30D: ;
    ebx = MEM32(ebp + 8);
    eax = eax - ecx;
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    ecx = 0x87D6;
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004BF328: ;
    eax = MEM32(ebp + 0x20);
    MEM32(ebx + 0x1D4) = MEM32(ebx + 0x1D4) & 0;
    MEM32(ebx + 0x238) = MEM32(ebx + 0x238) | 0xFFFFFFFFu;
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + 0x1C) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebx + 0x18) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    ecx = esi;
    MEM32(ebx) = 0x4BF247;
    MEM32(ebx + 4) = 0x4BF2C3;
    MEM32(ebx + 0xC) = 1;
    PUSH32(esp, 0); sub_004A3A1D(); /* call 0x004A3A1D */

loc_004BF36F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_004BF482; /* jl: less (signed <) */

loc_004BF37A: ;
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0); sub_004C281C(); /* call 0x004C281C */

loc_004BF386: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004BF396; /* jge: greater or equal (signed >=) */

loc_004BF38A: ;
    MEM32(ebp + 8) = 0x8015C009u;
    goto loc_004BF482;

loc_004BF396: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C27F9(); /* call 0x004C27F9 */

loc_004BF3A0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_004BF482; /* jl: less (signed <) */

loc_004BF3AB: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + 0x14);
    eax = ecx;
    esi = edi;
    ecx = ecx >> 2;
    edi = ebx + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(edx + 0xC);
    edi = ebx + 0x21F58;
    MEM32(ebx + 0x2C) = eax;
    MEM32(ebx + 0x30) = edi;
    if (CMP_EQ(MEM32(edx + 0xC), 0)) goto loc_004BF3F7; /* je: equal / zero */

loc_004BF3D9: ;
    esi = MEM32(edx + 0x10);
    if (TEST_Z(esi, esi)) goto loc_004BF3F3; /* je: equal / zero */

loc_004BF3E0: ;
    ecx = MEM32(edx + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    goto loc_004BF3F7;

loc_004BF3F3: ;
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) & 0;

loc_004BF3F7: ;
    MEM32(ebx + 0x34) = ebx;
    ecx = MEM32(edx + 4);
    if (TEST_Z(ecx, ecx)) goto loc_004BF41D; /* je: equal / zero */

loc_004BF401: ;
    esi = MEM32(edx + 0x10);
    if (TEST_Z(esi, esi)) goto loc_004BF42B; /* je: equal / zero */

loc_004BF408: ;
    if (CMP_B(ecx, esi)) goto loc_004BF42B; /* jb: below (unsigned <) */

loc_004BF40C: ;
    eax = MEM32(edx + 0xC);
    eax = eax + esi;
    if (CMP_AE(ecx, eax)) goto loc_004BF42B; /* jae: above or equal (unsigned >=) */

loc_004BF415: ;
    ecx = ecx - esi;
    ecx = ecx + MEM32(ebx + 0x30);
    MEM32(ebx + 0x24) = ecx;

loc_004BF41D: ;
    ecx = MEM32(edx + 8);
    if (TEST_Z(ecx, ecx)) goto loc_004BF449; /* je: equal / zero */

loc_004BF424: ;
    esi = MEM32(edx + 0x10);
    if (TEST_NZ(esi, esi)) goto loc_004BF434; /* jne: not equal / not zero */

loc_004BF42B: ;
    MEM32(ebp + 8) = 0x8015C005u;
    goto loc_004BF482;

loc_004BF434: ;
    if (CMP_B(ecx, esi)) goto loc_004BF42B; /* jb: below (unsigned <) */

loc_004BF438: ;
    eax = MEM32(edx + 0xC);
    eax = eax + esi;
    if (CMP_AE(ecx, eax)) goto loc_004BF42B; /* jae: above or equal (unsigned >=) */

loc_004BF441: ;
    ecx = ecx - esi;
    ecx = ecx + MEM32(ebx + 0x30);
    MEM32(ebx + 0x28) = ecx;

loc_004BF449: ;
    eax = MEM32(ebp + 0x18);
    esi = ebx + 0x219F4;
    edi = esi;
    ecx = eax;
    edi = edi - eax;

loc_004BF458: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BF458; /* jne: not equal / not zero */

loc_004BF462: ;
    ecx = MEM32(ebp + -8);
    if (CMP_EQ(MEM8(ecx + eax + -1), 0x5C)) goto loc_004BF47E; /* je: equal / zero */

loc_004BF46C: ;
    esi--;

loc_004BF46D: ;
    SET_LO8(ecx, MEM8(esi + 1));
    esi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004BF46D; /* jne: not equal / not zero */

loc_004BF475: ;
    edi = esi;
    esi = 0x5D71D8;
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */

loc_004BF47E: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;

loc_004BF482: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004BF48C
 * Original: 0x004BF48C - 0x004BF4AC (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF48C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BF48C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x310;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(ebx, edi)) { sub_004BF4AC(); return; } /* jne: not equal / not zero */

loc_004BF4A2: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BF781(); return; /* tail jmp 0x004BF781 */

}

/**
 * sub_004BF787
 * Original: 0x004BF787 - 0x004BF7B0 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF787(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BF787: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x12C;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), 3 - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_EQ(MEM32(ebp + 8), 3)) ? 1 : 0); /* sete */
    edi = ecx;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -16) = eax;
    if (TEST_NZ(edi, edi)) { sub_004BF7B0(); return; } /* jne: not equal / not zero */

loc_004BF7A6: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BF949(); return; /* tail jmp 0x004BF949 */

}

/**
 * sub_004BF94E
 * Original: 0x004BF94E - 0x004BF962 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BF94E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BF94E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    if (TEST_NZ(ecx, ecx)) { sub_004BF962(); return; } /* jne: not equal / not zero */

loc_004BF958: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BFA9E(); return; /* tail jmp 0x004BFA9E */

}

/**
 * sub_004BFAA2
 * Original: 0x004BFAA2 - 0x004BFB6F (205 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFAA2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BFAA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = 0x198;
    PUSH32(esp, 0); sub_004C2785(); /* call 0x004C2785 */

loc_004BFAC1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + 0x5BC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ebx = eax + 0x188;
    ecx = edx;
    MEM32(eax + 0x5B8) = ecx;
    ecx = MEM32(ebp + -8);
    edi = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(eax + 0x5A0) = 1;
    MEM32(eax + 0x5B0) = ebx;
    MEM32(eax + 0x5AC) = 0x418;
    MEM32(eax + 0x5A4) = edi;
    MEM32(eax + 0x5A8) = ebx;
    MEM32(eax + 0x5B4) = edi;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004BFB20: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    esi = esi + MEM32(ebp + -4);
    MEM32(ebx) = 0x4AE74F;
    MEM32(ebx + 4) = 0x4AE7EC;
    ecx = MEM32(eax + 8);
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(ebx + 0xC) = edi;
    ecx = MEM32(ecx + 4);
    MEM32(ebx + 0x18) = ecx;
    MEM32(ebx + 0x1C) = edi;
    MEM32(ebx + 0x20) = edi;
    SET_LO16(ecx, MEM16(eax + 0x5D8));
    MEM16(ebx + 0x24) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi));
    esi++;
    esi++;
    (void)0; /* cmp LO16(ecx), 0x14 - flags set for next jcc */
    MEM16(ebx + 0x26) = LO16(ecx);
    if (CMP_BE(LO16(ecx), 0x14)) { sub_004BFB6F(); return; } /* jbe: below or equal (unsigned <=) */

loc_004BFB68: ;
    eax = 0x8015C005u;
    g_seh_ebp = ebp; sub_004BFBC8(); return; /* tail jmp 0x004BFBC8 */

}

/**
 * sub_004BFBCF
 * Original: 0x004BFBCF - 0x004BFDD9 (522 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFBCF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BFBCF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    ebx = MEM32(ebp + 8);
    MEM32(ebx + 0x1F4) = MEM32(ebx + 0x1F4) + 1;
    MEM32(ebx + 0x1F0) = 2;
    MEM32(ebx + 0x23C) = 0x4643534D;
    MEM32(ebx + 0x240) = ecx;
    MEM32(ebx + 0x248) = ecx;
    eax = MEM32(ebx + 0x1F0);
    MEM32(ebx + 0x250) = ecx;
    MEM16(ebx + 0x254) = 0x103;
    eax = eax + eax * 8;
    eax = eax * 4 + 0x180;
    MEM32(ebx + 0x24C) = eax;
    SET_LO16(eax, MEM16(ebx + 0x1F0));
    MEM16(ebx + 0x256) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0x1F4));
    MEM16(ebx + 0x258) = LO16(eax);
    MEM16(ebx + 0x25A) = 4;
    MEM16(ebx + 0x25C) = LO16(ecx);
    MEM16(ebx + 0x25E) = LO16(ecx);
    MEM16(ebx + 0x260) = 0x158;
    MEM8(ebx + 0x262) = 0x1C;
    MEM8(ebx + 0x263) = LO8(ecx);
    eax = MEM32(ebx + 0x1F4);
    edx = MEM32(ebx + 0x20C);
    eax = eax << 4;
    edx = edx + eax;
    eax = MEM32(ebx + 0x24C);
    eax = edx + eax + 0x20F;
    edx = MEM32(ebx + 0x1E8);
    edi = 0xFFFFFE00u;
    eax = eax & edi;
    MEM32(ebx + 0x230) = eax;
    eax = edx + 0x7FFF;
    eax = eax >> 0xF;
    edx = edx + eax * 8;
    MEM16(ebx + 0x2A0) = LO16(eax);
    eax = 0; /* xor self */
    eax++;
    esi = edx + 0x1FF;
    esi = esi & edi;
    edi = MEM32(ebx + 0x230);
    edi = edi - edx;
    edi = edi + esi;
    MEM32(ebx + 0x1FC) = eax;
    MEM32(ebx + 0x200) = eax;
    eax = MEM32(ebx + 0x230);
    esi = esi + eax;
    MEM32(ebx + 0x1EC) = edx;
    MEM32(ebx + 0x29C) = edi;
    edx = ebx + 0x1D8;
    edi = MEM32(edx);
    edi = edi + esi;
    eax = ebx + 0x2C0;
    MEM32(eax) = esi;
    MEM32(ebx + 0x230) = esi;
    MEM32(ebx + 0x234) = ecx;
    MEM16(ebx + 0x2A2) = LO16(ecx);
    MEM32(ebx + 0x210) = ecx;
    MEM32(ebx + 0x21C) = ecx;
    MEM16(ebx + 0x2C4) = LO16(ecx);
    MEM16(ebx + 0x2C6) = LO16(ecx);
    MEM32(ebx + 0x244) = edi;
    eax = MEM32(eax);
    MEM32(edx) = eax;
    eax = MEM32(ebx + 0x24C);
    MEM32(ebx + 0x228) = eax;
    eax = ebx + 0x204;
    edx = MEM32(eax);
    MEM32(eax) = ecx;
    eax = ebx + 0x21BF4;
    esi = ebx + 0x219F4;
    edi = eax;
    MEM32(ebx + 0x22C) = ecx;
    MEM32(ebx + 0x208) = edx;
    edi = edi - esi;

loc_004BFD65: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi + esi) = LO8(eax);
    esi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004BFD65; /* jne: not equal / not zero */

loc_004BFD6F: ;
    edi = ebx + 0x21BF4;
    edi--;

loc_004BFD76: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004BFD76; /* jne: not equal / not zero */

loc_004BFD7E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    esi = 0x882E68;
    PUSH32(esp, 3);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0xC0000000u);
    eax = ebx + 0x21BF4;
    PUSH32(esp, eax);
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_004BFDA2: ;
    esi = eax;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    if (CMP_NE(esi, 0xFFFFFFFFu)) { sub_004BFDD9(); return; } /* jne: not equal / not zero */

loc_004BFDAC: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BFDB1: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BFDC1; /* jg: greater (signed >) */

loc_004BFDB5: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BFDBA: ;
    esi = eax;
    g_seh_ebp = ebp; sub_004BFEA6(); return; /* tail jmp 0x004BFEA6 */

loc_004BFDC1: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BFDC6: ;
    esi = eax;
    esi = esi & 0xFFFF;
    esi = esi | 0x80070000u;
    g_seh_ebp = ebp; sub_004BFEA6(); return; /* tail jmp 0x004BFEA6 */

}

/**
 * sub_004BFEAF
 * Original: 0x004BFEAF - 0x004C010B (604 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BFEAF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BFEAF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x200);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, MEM32(esi + 0x1F4) - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_AE(eax, MEM32(esi + 0x1F4))) goto loc_004C0050; /* jae: above or equal (unsigned >=) */

loc_004BFED8: ;
    eax = MEM32(esi + 0x204);
    if (CMP_AE(eax, MEM32(esi + 0x208))) goto loc_004C0050; /* jae: above or equal (unsigned >=) */

loc_004BFEEA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = eax + esi + 0x119F4;
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_004BFF07: ;
    ebx = eax;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_004BFF3E; /* jne: not equal / not zero */

loc_004BFF11: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BFF16: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BFF26; /* jg: greater (signed >) */

loc_004BFF1A: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BFF1F: ;
    ebx = eax;
    goto loc_004C0102;

loc_004BFF26: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BFF2B: ;
    ebx = eax;
    ebx = ebx & 0xFFFF;
    ebx = ebx | 0x80070000u;
    goto loc_004C0102;

loc_004BFF3E: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_004BFF48: ;
    if (TEST_NZ(eax, eax)) goto loc_004BFF79; /* jne: not equal / not zero */

loc_004BFF4C: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BFF51: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BFF61; /* jg: greater (signed >) */

loc_004BFF55: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BFF5A: ;
    ebx = eax;
    goto loc_004C00D8;

loc_004BFF61: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BFF66: ;
    ebx = eax;
    ebx = ebx & 0xFFFF;
    ebx = ebx | 0x80070000u;
    goto loc_004C00D8;

loc_004BFF79: ;
    if (CMP_BE(MEM32(ebp + -12), edi)) goto loc_004BFF88; /* jbe: below or equal (unsigned <=) */

loc_004BFF7E: ;
    ebx = 0x800703EEu;
    goto loc_004C00D8;

loc_004BFF88: ;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x218) = eax;
    eax = esi + 0x1430;
    PUSH32(esp, eax);
    MEM32(esi + 0x220) = edi;
    MEM32(esi + 0x224) = edi;
    MEM32(esi + 0x15A8) = ebx;
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_004BFFAF: ;
    eax = esi + 0x219F4;
    ecx = eax + 1;

loc_004BFFB8: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BFFB8; /* jne: not equal / not zero */

loc_004BFFBF: ;
    eax = eax - ecx;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x1FC));
    PUSH32(esp, edi);
    eax = eax + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x218));
    ecx = MEM32(esi + 0x204);
    eax = eax + ecx + 0x119F4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x210));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004BE17D(); /* call 0x004BE17D */

loc_004BFFEE: ;
    ebx = eax;
    if (CMP_L(ebx, edi)) goto loc_004C00D8; /* jl: less (signed <) */

loc_004BFFF8: ;
    ecx = MEM32(ebp + -4);
    ebx = esi + 0x158C;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0x15F4;
    PUSH32(esp, MEM32(esi + 0x224));
    PUSH32(esp, MEM32(esi + 0x220));
    PUSH32(esp, 0x8000);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x15A8));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004C0028: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004C0033: ;
    ebx = eax;
    if (CMP_L(ebx, edi)) goto loc_004C00D8; /* jl: less (signed <) */

loc_004C003D: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x80;
    MEM32(esi + 0x1D4) = 7;
    goto loc_004C0102;

loc_004C0050: ;
    eax = MEM32(esi + 0x1FC);
    eax = eax + eax * 8;
    eax = esi + eax * 4 + 0x2A4;
    PUSH32(esp, eax);
    eax = esi + 0x14A4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_004C006D: ;
    ecx = MEM32(esi + 0x1FC);
    eax = 0; /* xor self */
    ecx = ecx + ecx * 8;
    edi = esi + ecx * 4 + 0x2B8;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(esi + 0x21C);
    MEM32(esi + 0x1FC) = MEM32(esi + 0x1FC) + 1;
    if (TEST_Z(eax, eax)) goto loc_004C00F8; /* je: equal / zero */

loc_004C0091: ;
    ecx = MEM32(ebp + -4);
    edi = esi + 0x15C0;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    eax = eax + 0x1FF;
    PUSH32(esp, MEM32(esi + 0x234));
    eax = eax & 0xFFFFFE00u;
    PUSH32(esp, MEM32(esi + 0x230));
    PUSH32(esp, eax);
    eax = esi + 0x95F4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x15DC));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004C00C7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004C00D2: ;
    ebx = eax;
    if (CMP_GE(ebx & ebx, 0)) goto loc_004C00E8; /* jge: greater or equal (signed >=) */

loc_004C00D8: ;
    if (CMP_EQ(MEM32(ebp + -8), 0xFFFFFFFFu)) goto loc_004C0102; /* je: equal / zero */

loc_004C00DE: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004C00E6: ;
    goto loc_004C0102;

loc_004C00E8: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x80;
    MEM32(esi + 0x1D4) = 0xA;
    goto loc_004C0102;

loc_004C00F8: ;
    MEM32(esi + 0x1D4) = 0xC;

loc_004C0102: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C010B
 * Original: 0x004C010B - 0x004C014E (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C010B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C010B: ;
    eax = MEM32(esp + 4);
    if (CMP_L(eax, 0x408)) { sub_004C014E(); return; } /* jl: less (signed <) */

loc_004C0116: ;
    if (CMP_LE(eax, 0x409)) goto loc_004C0149; /* jle: less or equal (signed <=) */

loc_004C011D: ;
    if (CMP_LE(eax, 0x40E)) goto loc_004C0145; /* jle: less or equal (signed <=) */

loc_004C0124: ;
    if (CMP_EQ(eax, 0x40F)) goto loc_004C0141; /* je: equal / zero */

loc_004C012B: ;
    if (CMP_EQ(eax, 0x410)) goto loc_004C013D; /* je: equal / zero */

loc_004C0132: ;
    if (CMP_NE(eax, 0x411)) { sub_004C014E(); return; } /* jne: not equal / not zero */

loc_004C0139: ;
    PUSH32(esp, 4);
    g_seh_ebp = ebp; sub_004C0150(); return; /* tail jmp 0x004C0150 */

loc_004C013D: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_004C0150(); return; /* tail jmp 0x004C0150 */

loc_004C0141: ;
    PUSH32(esp, 3);
    g_seh_ebp = ebp; sub_004C0150(); return; /* tail jmp 0x004C0150 */

loc_004C0145: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004C0151(); return; /* tail jmp 0x004C0151 */

loc_004C0149: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C0151(); return; /* tail jmp 0x004C0151 */

}

/**
 * sub_004C0154
 * Original: 0x004C0154 - 0x004C016C (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0154(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C0154: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 8 + 0x13E4);
    if (TEST_Z(eax, eax)) goto loc_004C0169; /* je: equal / zero */

loc_004C0166: ;
    MEM32(eax) = MEM32(eax) & 0;

loc_004C0169: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C016C
 * Original: 0x004C016C - 0x004C01A8 (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C016C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C016C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    edx = ecx;
    eax = 0; /* xor self */
    ecx = edx + 0x1854;
    (void)0; /* cmp MEM32(ecx), eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -4) = eax;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_004C0191; /* jne: not equal / not zero */

loc_004C018C: ;
    esi = MEM32(edx + 4);
    MEM32(ecx) = esi;

loc_004C0191: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 6);
    POP32(esp, edi);
    if (CMP_AE(MEM32(ecx), edi)) { sub_004C01A8(); return; } /* jae: above or equal (unsigned >=) */

loc_004C019B: ;
    esi = MEM32(ebp + -20);
    eax = 0x80150001u;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_004C01C0(); return; /* tail jmp 0x004C01C0 */

}

/**
 * sub_004C0312
 * Original: 0x004C0312 - 0x004C0328 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0312(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C0312: ;
    eax = MEM32(esp + 8);
    if (CMP_NE(MEM8(eax + 0x24), 4)) goto loc_004C0325; /* jne: not equal / not zero */

loc_004C031C: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_004C0154(); /* call 0x004C0154 */

loc_004C0325: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C0363
 * Original: 0x004C0363 - 0x004C06B0 (845 bytes, 261 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0363(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C0363: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(ebx + 0x160), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -12) = edi;
    if (CMP_EQ(MEM32(ebx + 0x160), 0)) goto loc_004C04E0; /* je: equal / zero */

loc_004C0384: ;
    esi = ebx + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004C038D: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_004C06A9; /* je: equal / zero */

loc_004C0397: ;
    if (CMP_L(eax, ecx)) goto loc_004C06A9; /* jl: less (signed <) */

loc_004C039D: ;
    PUSH32(esp, ecx);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004C03B4: ;
    if (TEST_S(eax, eax)) goto loc_004C06A9; /* jl: less (signed <) */

loc_004C03BC: ;
    edx = MEM32(ebp + -8);
    if (TEST_Z(edx, edx)) goto loc_004C058E; /* je: equal / zero */

loc_004C03C7: ;
    if (CMP_NE(MEM32(ebp + -16), 0xC8)) goto loc_004C058E; /* jne: not equal / not zero */

loc_004C03D4: ;
    if (CMP_B(MEM32(ebp + 8), 0x30)) goto loc_004C058E; /* jb: below (unsigned <) */

loc_004C03DE: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 0x30;
    if (CMP_NE(MEM32(edx), 0x45C)) goto loc_004C058E; /* jne: not equal / not zero */

loc_004C03EE: ;
    eax = edx + 8;
    (void)0; /* cmp MEM32(eax), 4 - flags set for next jcc */
    MEM32(ebp + -24) = eax;
    if (CMP_A(MEM32(eax), 4)) goto loc_004C058E; /* ja: above (unsigned >) */

loc_004C03FD: ;
    eax = MEM32(edx + 0x20);
    if (TEST_S(eax, eax)) goto loc_004C06A9; /* jl: less (signed <) */

loc_004C0408: ;
    ecx = edx + 0x2C;
    SET_LO16(eax, MEM16(ecx));
    (void)0; /* cmp LO16(eax), 8 - flags set for next jcc */
    MEM32(ebp + -20) = ecx;
    if (CMP_A(LO16(eax), 8)) goto loc_004C058E; /* ja: above (unsigned >) */

loc_004C041B: ;
    eax = ZX16(LO16(eax));
    eax = eax << 3;
    if (CMP_A(eax, MEM32(ebp + 8))) goto loc_004C058E; /* ja: above (unsigned >) */

loc_004C042A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - eax;
    eax = edx + 0x2E;
    MEM32(ebp + -4) = eax;
    SET_LO16(eax, MEM16(eax));
    if (CMP_A(LO16(eax), 8)) goto loc_004C058E; /* ja: above (unsigned >) */

loc_004C0440: ;
    eax = ZX16(LO16(eax));
    if (CMP_A(eax, MEM32(ebp + 8))) goto loc_004C058E; /* ja: above (unsigned >) */

loc_004C044C: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - eax;
    eax = MEM32(ebp + -24);
    edx = edx + 0x30;
    MEM32(ebp + -8) = edx;
    SET_LO16(edx, MEM16(ecx));
    eax = MEM32(eax);
    eax = eax + eax * 8;
    eax = MEM32(edi + eax * 8 + 0x13E4);
    MEM16(eax + 4) = LO16(edx);
    ecx = ZX16(MEM16(ecx));
    esi = MEM32(ebp + -8);
    ecx = ecx << 3;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -20);
    ecx = ZX16(MEM16(ecx));
    ecx = edx + ecx * 8;
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + -4);
    SET_LO16(edx, MEM16(ecx));
    MEM16(eax + 0x48) = LO16(edx);
    ecx = ZX16(MEM16(ecx));
    esi = MEM32(ebp + -8);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + 0x4A;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + -4);
    ecx = ZX16(MEM16(ecx));
    MEM32(ebp + -8) = MEM32(ebp + -8) + ecx;
    ecx = MEM32(ebp + -12);
    edi = ebx + 0x10;
    PUSH32(esp, edi);
    MEM32(eax) = 1;
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004C04D0: ;
    PUSH32(esp, 0x54);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebx + 0x160) = MEM32(ebx + 0x160) & eax;
    edi = MEM32(ebp + -12);

loc_004C04E0: ;
    eax = MEM32(edi + 0xD0);
    ecx = edi + 0x13E4;
    esi = 0; /* xor self */
    MEM32(ebp + -4) = ecx;

loc_004C04F1: ;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    if ((ecx == 0)) goto loc_004C0518; /* je: equal / zero */

loc_004C04F8: ;
    if (TEST_NZ(MEM8(eax + 8), 3)) goto loc_004C0518; /* jne: not equal / not zero */

loc_004C04FE: ;
    edx = 0; /* xor self */
    edx++;
    ecx = esi;
    edx = edx << LO8(ecx);
    if (TEST_Z(MEM32(ebx + 0xC), edx)) goto loc_004C0518; /* je: equal / zero */

loc_004C050A: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_004C0598; /* je: equal / zero */

loc_004C0518: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x48;
    esi++;
    eax = eax + 0x70;
    if (CMP_B(esi, 4)) goto loc_004C04F1; /* jb: below (unsigned <) */

loc_004C0525: ;
    esi = MEM32(ebx + 0x164);
    if (TEST_Z(esi, esi)) goto loc_004C06A4; /* je: equal / zero */

loc_004C0533: ;
    edi = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x4C);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xC));
    MEM32(ebp + -4) = 0x156;
    PUSH32(esp, 0); sub_004C016C(); /* call 0x004C016C */

loc_004C0552: ;
    if (TEST_S(eax, eax)) goto loc_004C06A9; /* jl: less (signed <) */

loc_004C055A: ;
    edi = edi + MEM32(ebp + -4);
    eax = MEM32(esi + 0xB4);
    ebx = MEM32(esi + 0xB0);
    MEM32(esi + 0xEC) = MEM32(esi + 0xEC) & 0;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0xE8) = edi;
    edi = esi + 0xA8;
    MEM32(edi) = eax;
    edx = ebp + -280;
    eax = ebx;
    goto loc_004C064D;

loc_004C058E: ;
    eax = 0x8015000Au;
    goto loc_004C06A9;

loc_004C0598: ;
    PUSH32(esp, 0);
    eax = ebx + 0x174;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebx + 0x168) = 0x411;
    MEM32(ebx + 0x16C) = 0xC;
    MEM32(ebx + 0x170) = esi;
    PUSH32(esp, 0); sub_0049CFA8(); /* call 0x0049CFA8 */

loc_004C05C2: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    eax = MEM32(edi + 0xD0);
    ecx = MEM32(esi + eax);
    MEM32(ebx + 0x188) = ecx;
    eax = MEM32(esi + eax + 4);
    MEM32(ebx + 0x18C) = eax;
    eax = edi + 0x1854;
    esi = 0; /* xor self */
    if (CMP_NE(MEM32(eax), esi)) goto loc_004C05EF; /* jne: not equal / not zero */

loc_004C05EA: ;
    ecx = MEM32(edi + 4);
    MEM32(eax) = ecx;

loc_004C05EF: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(ebx + 0x190) = eax;
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x168;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x178);
    eax = ebx + 0x194;
    PUSH32(esp, eax);
    PUSH32(esp, 0x882DB8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x13);
    ecx = edi;
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004C062C: ;
    if (CMP_L(eax, esi)) goto loc_004C06A9; /* jl: less (signed <) */

loc_004C0630: ;
    MEM32(ebx + 0x160) = 1;
    eax = 0; /* xor self */
    goto loc_004C06A9;

loc_004C063E: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_004C0657; /* je: equal / zero */

loc_004C0642: ;
    if (CMP_EQ(LO8(ecx), 0xA)) goto loc_004C0657; /* je: equal / zero */

loc_004C0647: ;
    if (CMP_EQ(LO8(ecx), 0xD)) goto loc_004C0657; /* je: equal / zero */

loc_004C064C: ;
    eax++;

loc_004C064D: ;
    SET_LO8(ecx, MEM8(eax));
    if (CMP_NE(LO8(ecx), 0x20)) goto loc_004C063E; /* jne: not equal / not zero */

loc_004C0654: ;
    eax++;
    goto loc_004C0670;

loc_004C0657: ;
    eax = 0x80150007u;
    goto loc_004C06A9;

loc_004C065E: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_004C0657; /* je: equal / zero */

loc_004C0662: ;
    if (CMP_EQ(LO8(ecx), 0xA)) goto loc_004C0657; /* je: equal / zero */

loc_004C0667: ;
    if (CMP_EQ(LO8(ecx), 0xD)) goto loc_004C0657; /* je: equal / zero */

loc_004C066C: ;
    MEM8(edx) = LO8(ecx);
    eax++;
    edx++;

loc_004C0670: ;
    SET_LO8(ecx, MEM8(eax));
    if (CMP_NE(LO8(ecx), 0x20)) goto loc_004C065E; /* jne: not equal / not zero */

loc_004C0677: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, MEM32(esi + 0xEC));
    eax = ebp + -280;
    PUSH32(esp, MEM32(esi + 0xE8));
    MEM8(edx) = 0;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, 0); sub_004B4936(); /* call 0x004B4936 */

loc_004C06A4: ;
    eax = 0x1500F0;

loc_004C06A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C06B0
 * Original: 0x004C06B0 - 0x004C06D3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C06B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C06B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA5);
    PUSH32(esp, 0x310);
    edi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_004B5390(); /* call 0x004B5390 */

loc_004C06C6: ;
    esi = eax;
    if (CMP_NE(esi, ebx)) { sub_004C06D3(); return; } /* jne: not equal / not zero */

loc_004C06CC: ;
    ebx = 0x8007000Eu;
    g_seh_ebp = ebp; sub_004C0716(); return; /* tail jmp 0x004C0716 */

}

/**
 * sub_004C071E
 * Original: 0x004C071E - 0x004C0732 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C071E(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C071E: ;
    eax = MEM32(esp + 4);
    if (CMP_EQ(MEM32(eax + 0x20), 0)) goto loc_004C072F; /* je: equal / zero */

loc_004C0728: ;
    MEM32(eax + 0x20) = MEM32(eax + 0x20) & 0;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;

loc_004C072F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0732
 * Original: 0x004C0732 - 0x004C0746 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0732(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C0732: ;
    eax = MEM32(esp + 4);
    if (CMP_EQ(MEM32(eax + 0x20), 0)) goto loc_004C0743; /* je: equal / zero */

loc_004C073C: ;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;
    MEM32(eax + 0x20) = MEM32(eax + 0x20) & 0;

loc_004C0743: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0746
 * Original: 0x004C0746 - 0x004C075C (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0746(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C0746: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_004C0759; /* je: equal / zero */

loc_004C074E: ;
    eax = MEM32(ecx + 0x34);
    if (CMP_EQ(ecx, eax)) goto loc_004C0759; /* je: equal / zero */

loc_004C0755: ;
    MEM32(eax + 0x38) = MEM32(eax + 0x38) & 0;

loc_004C0759: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C075C
 * Original: 0x004C075C - 0x004C0768 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C075C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C075C: ;
    if (CMP_EQ(MEM32(esp + 4), 0)) { sub_004C0768(); return; } /* je: equal / zero */

loc_004C0763: ;
    g_seh_ebp = ebp; sub_004C0746(); return; /* tail jmp 0x004C0746 */

}

/**
 * sub_004C076B
 * Original: 0x004C076B - 0x004C0781 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C076B(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C076B: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_004C077E; /* je: equal / zero */

loc_004C0773: ;
    eax = MEM32(ecx + 0x30);
    if (CMP_EQ(ecx, eax)) goto loc_004C077E; /* je: equal / zero */

loc_004C077A: ;
    MEM32(eax + 0x34) = MEM32(eax + 0x34) & 0;

loc_004C077E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0781
 * Original: 0x004C0781 - 0x004C07B4 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0781(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C0781: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_004C07B1; /* je: equal / zero */

loc_004C0789: ;
    if (CMP_EQ(MEM32(esp + 8), 0)) goto loc_004C07B1; /* je: equal / zero */

loc_004C0790: ;
    ecx = MEM32(esp + 0xC);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_004C07B1; /* je: equal / zero */

loc_004C0799: ;
    eax = MEM32(eax + 0xC);
    if (CMP_AE(ecx, MEM32(eax + 0xC))) goto loc_004C07B1; /* jae: above or equal (unsigned >=) */

loc_004C07A1: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 4);
    if (TEST_Z(ecx, ecx)) goto loc_004C07B1; /* je: equal / zero */

loc_004C07AB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004C07B1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C07B4
 * Original: 0x004C07B4 - 0x004C07F7 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C07B4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C07B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x2C);
    MEM32(eax + 8) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ebp + 0x24);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x10);
    (void)0; /* test LO8(ecx), 3 - flags set for next jcc */
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ebp + 0x28);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = edx;
    if (TEST_NZ(LO8(ecx), 3)) goto loc_004C07E7; /* jne: not equal / not zero */

loc_004C07E2: ;
    if (TEST_Z(HI8(ecx), 7)) goto loc_004C07F3; /* je: equal / zero */

loc_004C07E7: ;
    ecx = MEM32(ebp + 0x1C);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + 0x20);
    MEM32(eax + 0x1C) = ecx;

loc_004C07F3: ;
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_004C07F7
 * Original: 0x004C07F7 - 0x004C081B (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C07F7(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C07F7: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_BE(ecx & ecx, 0)) goto loc_004C0814; /* jbe: below or equal (unsigned <=) */

loc_004C0802: ;
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    (void)0; /* cmp esi, MEM32(edx + eax * 4) - flags set for next jcc */
    eax++;
    if (_flags /* jb: below (unsigned <) */) goto loc_004C0817;

loc_004C0810: ;
    if (CMP_B(eax, ecx)) goto loc_004C0802; /* jb: below (unsigned <) */

loc_004C0814: ;
    eax = ecx + 1;

loc_004C0817: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C081B
 * Original: 0x004C081B - 0x004C0878 (93 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C081B(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C081B: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    if (CMP_BE(ecx, 1)) goto loc_004C0836; /* jbe: below or equal (unsigned <=) */

loc_004C0829: ;
    esi = MEM32(eax + 0x24);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 0x7F);
    MEM8(esi) = LO8(edx);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;

loc_004C0836: ;
    ecx = ecx - 3;
    edx = MEM32(esp + 0xC);
    if ((ecx == 0)) goto loc_004C085F; /* je: equal / zero */

loc_004C083F: ;
    ecx--;
    if ((ecx == 0)) goto loc_004C0852; /* je: equal / zero */

loc_004C0842: ;
    ecx--;
    if ((ecx != 0)) goto loc_004C086C; /* jne: not equal / not zero */

loc_004C0845: ;
    esi = MEM32(eax + 0x24);
    ecx = edx;
    ecx = ecx >> 0x18;
    MEM8(esi) = LO8(ecx);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;

loc_004C0852: ;
    esi = MEM32(eax + 0x24);
    ecx = edx;
    ecx = ecx >> 0x10;
    MEM8(esi) = LO8(ecx);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;

loc_004C085F: ;
    esi = MEM32(eax + 0x24);
    ecx = edx;
    ecx = ecx >> 8;
    MEM8(esi) = LO8(ecx);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;

loc_004C086C: ;
    ecx = MEM32(eax + 0x24);
    MEM8(ecx) = LO8(edx);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C0878
 * Original: 0x004C0878 - 0x004C0A61 (489 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0878(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C0878: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_EQ(MEM32(ebp + 0x18), 0)) goto loc_004C0A5D; /* je: equal / zero */

loc_004C0885: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    POP32(esp, esi);
    if (CMP_B(MEM32(ebp + 0xC), esi)) goto loc_004C089D; /* jb: below (unsigned <) */

loc_004C0891: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 3;
    eax = eax + ecx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 7;

loc_004C089D: ;
    (void)0; /* cmp MEM32(ebp + 0x14), esi - flags set for next jcc */
    edx = MEM32(ebp + 0x10);
    if (CMP_B(MEM32(ebp + 0x14), esi)) goto loc_004C08B4; /* jb: below (unsigned <) */

loc_004C08A5: ;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx >> 3;
    edx = edx + ecx;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 7;
    MEM32(ebp + 0x10) = edx;

loc_004C08B4: ;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_004C08E6; /* je: equal / zero */

loc_004C08BC: ;
    esi = esi - MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0xC);
    if (CMP_B(MEM32(ebp + 0x18), esi)) goto loc_004C097E; /* jb: below (unsigned <) */

loc_004C08CB: ;
    if (CMP_AE(MEM32(ebp + 0x14), ecx)) goto loc_004C0924; /* jae: above or equal (unsigned >=) */

loc_004C08D0: ;
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + 0x14));
    SET_LO8(ebx, MEM8(edx));
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - esi;
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    SET_LO8(ebx, LO8(ebx) & MEM8(esi + 0x882EF8));
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    eax++;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + esi;

loc_004C08E6: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);
    if (CMP_B(MEM32(ebp + 0x18), ebx)) goto loc_004C0A16; /* jb: below (unsigned <) */

loc_004C08F2: ;
    if (CMP_NE(MEM32(ebp + 0x14), 0)) goto loc_004C09E4; /* jne: not equal / not zero */

loc_004C08FC: ;
    ecx = MEM32(ebp + 0x18);
    ecx = ecx >> 3;
    MEM32(ebp + 0xC) = ecx;
    ebx = ecx;
    ecx = ecx >> 2;
    esi = edx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    eax = eax + ebx;
    edx = edx + ebx;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 7;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    goto loc_004C0A16;

loc_004C0924: ;
    ecx = MEM32(ebp + 0xC);
    if (CMP_NE(MEM32(ebp + 0x14), ecx)) goto loc_004C0941; /* jne: not equal / not zero */

loc_004C092C: ;
    SET_LO8(ecx, MEM8(esi + 0x882EF8));
    SET_LO8(ecx, LO8(ecx) & MEM8(edx));
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - esi;
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    edx++;
    eax++;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    goto loc_004C08E6;

loc_004C0941: ;
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x14);
    edi = edi - ecx;
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + 0x14));
    MEM32(ebp + 0xC) = edi;
    SET_LO8(ecx, LO8(ecx) + 8);
    edi = edx + 1;
    SET_LO8(ebx, MEM8(edi));
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    ecx = 0x882F00;
    ecx = ecx - MEM32(ebp + 0x14);
    SET_LO8(ecx, MEM8(ecx));
    SET_LO8(ecx, LO8(ecx) & MEM8(edx));
    SET_LO8(edx, LO8(ecx));
    ecx = MEM32(ebp + 0xC);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM32(ebp + 0x14) = ecx;
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    eax++;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - esi;
    edx = edi;
    goto loc_004C08E6;

loc_004C097E: ;
    if (CMP_A(MEM32(ebp + 0x14), ecx)) goto loc_004C09A5; /* ja: above (unsigned >) */

loc_004C0983: ;
    SET_LO8(edx, MEM8(edx));
    edi = MEM32(ebp + 0x18);
    SET_LO8(ecx, 8);
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + 0x18));
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + 0x14));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    ecx = esi;
    ecx = ecx - edi;
    SET_LO8(edx, LO8(edx) & MEM8(edi + 0x882EF8));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax) = MEM8(eax) | LO8(edx);
    goto loc_004C0A5A;

loc_004C09A5: ;
    ecx = MEM32(ebp + 0x14);
    edi = 0x882F00;
    edi = edi - ecx;
    SET_LO8(ebx, MEM8(edi));
    ecx = ecx - MEM32(ebp + 0xC);
    SET_LO8(ebx, LO8(ebx) & MEM8(edx));
    PUSH32(esp, 8);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    POP32(esp, ecx);
    ecx = ecx - MEM32(ebp + 0x14);
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    if (CMP_BE(MEM32(ebp + 0x18), ecx)) goto loc_004C0A5A; /* jbe: below or equal (unsigned <=) */

loc_004C09C9: ;
    edx = MEM32(ebp + 0x10);
    SET_LO8(edx, MEM8(edx + 1));
    SET_LO8(ecx, 0x10);
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + 0x18));
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + 0x14));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    ecx = esi;
    ecx = ecx - MEM32(ebp + 0x18);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(edx, LO8(edx) | MEM8(eax));
    goto loc_004C0A58;

loc_004C09E4: ;
    ebx = ebx - MEM32(ebp + 0x14);
    MEM32(ebp + 0x10) = ebx;
    goto loc_004C09EF;

loc_004C09EC: ;
    ebx = MEM32(ebp + 0x10);

loc_004C09EF: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 8;
    esi = edx + 1;
    SET_LO8(edx, MEM8(edx));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(ecx, MEM8(esi));
    MEM8(ebp + 0xF) = LO8(ecx);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ebx, MEM8(ebp + 0xF));
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEM8(eax) = LO8(edx);
    eax++;
    (void)0; /* cmp MEM32(ebp + 0x18), 8 - flags set for next jcc */
    edx = esi;
    if (CMP_AE(MEM32(ebp + 0x18), 8)) goto loc_004C09EC; /* jae: above or equal (unsigned >=) */

loc_004C0A16: ;
    if (CMP_EQ(MEM32(ebp + 0x18), 0)) goto loc_004C0A5A; /* je: equal / zero */

loc_004C0A1C: ;
    SET_LO8(ebx, MEM8(edx));
    ecx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    ecx = MEM32(ebp + 0x18);
    SET_LO8(ebx, LO8(ebx) & MEM8(ecx + 0x882EA0));
    ecx = MEM32(ebp + 0x14);
    ecx = ecx + esi;
    (void)0; /* cmp ecx, 8 - flags set for next jcc */
    MEM8(ebp + 0xF) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    if (CMP_BE(ecx, 8)) goto loc_004C0A5A; /* jbe: below or equal (unsigned <=) */

loc_004C0A3E: ;
    ebx = MEM32(ebp + 0x14);
    ecx = esi;
    SET_LO8(ecx, MEM8(ebx + ecx + 0x882E98));
    SET_LO8(ecx, LO8(ecx) & MEM8(edx + 1));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(ecx, 8);
    SET_LO8(ecx, LO8(ecx) - LO8(ebx));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    SET_LO8(edx, LO8(edx) | MEM8(ebp + 0xF));

loc_004C0A58: ;
    MEM8(eax) = LO8(edx);

loc_004C0A5A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);

loc_004C0A5D: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004C0A61
 * Original: 0x004C0A61 - 0x004C0A78 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0A61(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C0A61: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_004C0A75; /* je: equal / zero */

loc_004C0A69: ;
    edx = eax + 1;

loc_004C0A6C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004C0A6C; /* jne: not equal / not zero */

loc_004C0A73: ;
    eax = eax - edx;

loc_004C0A75: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0A78
 * Original: 0x004C0A78 - 0x004C0A82 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0A78(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0A78: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    g_seh_ebp = ebp; sub_004C0A8E(); return; /* tail jmp 0x004C0A8E */

}

/**
 * sub_004C0A95
 * Original: 0x004C0A95 - 0x004C0A9F (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0A95(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0A95: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    g_seh_ebp = ebp; sub_004C0AAB(); return; /* tail jmp 0x004C0AAB */

}

/**
 * sub_004C0AB2
 * Original: 0x004C0AB2 - 0x004C0AC5 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0AB2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0AB2: ;
    if (CMP_L(MEM8(esp + 4), 0x30)) { sub_004C0AC5(); return; } /* jl: less (signed <) */

loc_004C0AB9: ;
    if (CMP_G(MEM8(esp + 4), 0x39)) { sub_004C0AC5(); return; } /* jg: greater (signed >) */

loc_004C0AC0: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C0AC7(); return; /* tail jmp 0x004C0AC7 */

}

/**
 * sub_004C0ACA
 * Original: 0x004C0ACA - 0x004C0AD2 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0ACA(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0ACA: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004C0AE7(); return; /* tail jmp 0x004C0AE7 */

}

/**
 * sub_004C0AF1
 * Original: 0x004C0AF1 - 0x004C0C11 (288 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0AF1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0AF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_Z(edi, edi)) { sub_004C0C11(); return; } /* je: equal / zero */

loc_004C0AFF: ;
    esi = MEM32(esp + 0x10);
    if (TEST_Z(esi, esi)) { sub_004C0C11(); return; } /* je: equal / zero */

loc_004C0B0B: ;
    eax = ZX8(MEM8(esi + 6));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 5));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 4));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 3));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 2));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x8830D0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_004C0B34: ;
    SET_LO16(eax, MEM16(esi + 8));
    esp = esp + 0x20;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_004C0B7D; /* je: equal / zero */

loc_004C0B40: ;
    ecx = ZX16(LO16(eax));
    eax = ecx;
    PUSH32(esp, 0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    if (TEST_NZ(edx, edx)) goto loc_004C0B57; /* jne: not equal / not zero */

loc_004C0B4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8830C8);
    goto loc_004C0B71;

loc_004C0B57: ;
    eax = ecx;
    PUSH32(esp, 0xA);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    if (TEST_NZ(edx, edx)) goto loc_004C0B6B; /* jne: not equal / not zero */

loc_004C0B63: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8830C0);
    goto loc_004C0B71;

loc_004C0B6B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8830B8);

loc_004C0B71: ;
    eax = edi + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_004C0B7A: ;
    esp = esp + 0xC;

loc_004C0B7D: ;
    if (CMP_EQ(MEM8(esi + 0xA), 0)) goto loc_004C0B91; /* je: equal / zero */

loc_004C0B83: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C0A61(); /* call 0x004C0A61 */

loc_004C0B89: ;
    MEM16(eax + edi) = 0x5A;
    goto loc_004C0C0B;

loc_004C0B91: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_004C0BC3; /* jle: less or equal (signed <=) */

loc_004C0B9A: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, 0x3C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (TEST_Z(edx, edx)) goto loc_004C0BBB; /* je: equal / zero */

loc_004C0BA7: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8830B0);
    goto loc_004C0BFA;

loc_004C0BBB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8830A8);
    goto loc_004C0BFA;

loc_004C0BC3: ;
    if (((int32_t)eax >= 0)) goto loc_004C0C0B; /* jge: greater or equal (signed >=) */

loc_004C0BC5: ;
    ecx = SX16(LO16(eax));
    eax = ecx;
    PUSH32(esp, 0x3C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    if (TEST_Z(edx, edx)) goto loc_004C0BEC; /* je: equal / zero */

loc_004C0BD4: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = (uint32_t)(-(int32_t)edx);
    edx = edx - eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8830A0);
    goto loc_004C0BFA;

loc_004C0BEC: ;
    eax = ecx;
    PUSH32(esp, 0xFFFFFFC4u);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, eax);
    PUSH32(esp, 0x883098);

loc_004C0BFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C0A61(); /* call 0x004C0A61 */

loc_004C0C00: ;
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_004C0C08: ;
    esp = esp + 0xC;

loc_004C0C0B: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C0C13(); return; /* tail jmp 0x004C0C13 */

}

/**
 * sub_004C0C18
 * Original: 0x004C0C18 - 0x004C0C65 (77 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0C18(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C0C18: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(ecx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C0AB2(); /* call 0x004C0AB2 */

loc_004C0C26: ;
    if (TEST_Z(eax, eax)) goto loc_004C0C55; /* je: equal / zero */

loc_004C0C2A: ;
    PUSH32(esp, edi);

loc_004C0C2B: ;
    if (CMP_EQ(edx, 1)) goto loc_004C0C45; /* je: equal / zero */

loc_004C0C30: ;
    eax = edx;
    PUSH32(esp, 0xA);
    edx = 0; /* xor self */
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = eax;
    eax = esi + esi * 4;
    esi = SX8(LO8(ebx));
    esi = esi + eax * 2 + -48;

loc_004C0C45: ;
    ecx++;
    ebx = 0; /* xor self */
    SET_LO8(ebx, MEM8(ecx));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C0AB2(); /* call 0x004C0AB2 */

loc_004C0C50: ;
    if (TEST_NZ(eax, eax)) goto loc_004C0C2B; /* jne: not equal / not zero */

loc_004C0C54: ;
    POP32(esp, edi);

loc_004C0C55: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    eax = esi;
    POP32(esp, esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C0C65
 * Original: 0x004C0C65 - 0x004C0E4B (486 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0C65(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C0C65: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    if (CMP_EQ(edi, eax)) { sub_004C0E4B(); return; } /* je: equal / zero */

loc_004C0C7B: ;
    esi = MEM32(ebp + 0xC);
    if (CMP_EQ(esi, eax)) { sub_004C0E4B(); return; } /* je: equal / zero */

loc_004C0C86: ;
    PUSH32(esp, esi);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_004C0A61(); /* call 0x004C0A61 */

loc_004C0C9B: ;
    if (CMP_L(eax, 0xA)) { sub_004C0E4B(); return; } /* jl: less (signed <) */

loc_004C0CA4: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0ACA(); /* call 0x004C0ACA */

loc_004C0CAC: ;
    PUSH32(esp, 2);
    POP32(esp, ebx);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, ebx);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C0ACA(); /* call 0x004C0ACA */

loc_004C0CBC: ;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, ebx);
    eax = esi + 6;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C0ACA(); /* call 0x004C0ACA */

loc_004C0CC9: ;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, ebx);
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C0ACA(); /* call 0x004C0ACA */

loc_004C0CD6: ;
    esi = esi + 0xA;
    MEM32(ebp + -32) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi));
    (void)0; /* cmp LO8(eax), 0x2E - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    if (CMP_EQ(LO8(eax), 0x2E)) goto loc_004C0D6D; /* je: equal / zero */

loc_004C0CEB: ;
    if (CMP_EQ(LO8(eax), 0x2C)) goto loc_004C0D6D; /* je: equal / zero */

loc_004C0CEF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C0AB2(); /* call 0x004C0AB2 */

loc_004C0CF5: ;
    if (TEST_Z(eax, eax)) goto loc_004C0DA9; /* je: equal / zero */

loc_004C0CFD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0ACA(); /* call 0x004C0ACA */

loc_004C0D04: ;
    esi = esi + ebx;
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi));
    (void)0; /* cmp LO8(eax), 0x2E - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    if (CMP_EQ(LO8(eax), 0x2E)) goto loc_004C0D52; /* je: equal / zero */

loc_004C0D14: ;
    if (CMP_EQ(LO8(eax), 0x2C)) goto loc_004C0D52; /* je: equal / zero */

loc_004C0D18: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C0AB2(); /* call 0x004C0AB2 */

loc_004C0D1E: ;
    if (TEST_Z(eax, eax)) goto loc_004C0DA9; /* je: equal / zero */

loc_004C0D26: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0ACA(); /* call 0x004C0ACA */

loc_004C0D2D: ;
    esi = esi + ebx;
    MEM32(ebp + 0xC) = eax;
    SET_LO8(eax, MEM8(esi));
    (void)0; /* cmp LO8(eax), 0x2E - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    if (CMP_EQ(LO8(eax), 0x2E)) goto loc_004C0D3F; /* je: equal / zero */

loc_004C0D3B: ;
    if (CMP_NE(LO8(eax), 0x2C)) goto loc_004C0DA9; /* jne: not equal / not zero */

loc_004C0D3F: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi + 1;
    edx = 0x3E8;
    PUSH32(esp, 0); sub_004C0C18(); /* call 0x004C0C18 */

loc_004C0D50: ;
    goto loc_004C0DA3;

loc_004C0D52: ;
    ecx = esi + 1;
    eax = ebp + 8;
    esi = 0x186A0;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_004C0C18(); /* call 0x004C0C18 */

loc_004C0D65: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    PUSH32(esp, 0x64);
    POP32(esp, ecx);
    goto loc_004C0D96;

loc_004C0D6D: ;
    ecx = esi + 1;
    eax = ebp + 8;
    esi = 0x989680;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_004C0C18(); /* call 0x004C0C18 */

loc_004C0D80: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    edx = 0; /* xor self */
    ecx = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = 0x2710;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    MEM32(ebp + -8) = eax;
    eax = edx;

loc_004C0D96: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ebp + 0xC) = eax;
    eax = edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }

loc_004C0DA3: ;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_004C0DA9: ;
    SET_LO8(eax, MEM8(esi));
    ebx = 0; /* xor self */
    ebx++;
    if (CMP_NE(LO8(eax), 0x5A)) goto loc_004C0DB8; /* jne: not equal / not zero */

loc_004C0DB2: ;
    MEM32(ebp + -16) = ebx;
    esi++;
    goto loc_004C0E07;

loc_004C0DB8: ;
    if (CMP_NE(LO8(eax), 0x2B)) goto loc_004C0DDE; /* jne: not equal / not zero */

loc_004C0DBC: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi + 1;
    edx = 0x2710;
    PUSH32(esp, 0); sub_004C0C18(); /* call 0x004C0C18 */

loc_004C0DCD: ;
    PUSH32(esp, 0x64);
    edx = 0; /* xor self */
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax + edx;
    MEM32(ebp + -12) = eax;
    goto loc_004C0E04;

loc_004C0DDE: ;
    if (CMP_NE(LO8(eax), 0x2D)) goto loc_004C0E07; /* jne: not equal / not zero */

loc_004C0DE2: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi + 1;
    edx = 0x2710;
    PUSH32(esp, 0); sub_004C0C18(); /* call 0x004C0C18 */

loc_004C0DF3: ;
    edx = 0; /* xor self */
    PUSH32(esp, 0x64);
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    edx = (uint32_t)(-(int32_t)edx);
    edx = edx - eax;
    MEM32(ebp + -12) = edx;

loc_004C0E04: ;
    esi = MEM32(ebp + 8);

loc_004C0E07: ;
    if (CMP_NE(MEM8(esi), 0)) { sub_004C0E4B(); return; } /* jne: not equal / not zero */

loc_004C0E0C: ;
    SET_LO16(eax, MEM16(ebp + -20));
    MEM16(edi) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + -24));
    MEM8(edi + 2) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -28));
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -32));
    MEM8(edi + 4) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -8));
    MEM8(edi + 5) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(edi + 6) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + -4));
    MEM16(edi + 8) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + -16));
    MEM8(edi + 0xA) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + -12));
    MEM16(edi + 0xC) = LO16(eax);
    eax = ebx;
    g_seh_ebp = ebp; sub_004C0E4D(); return; /* tail jmp 0x004C0E4D */

}

/**
 * sub_004C0E54
 * Original: 0x004C0E54 - 0x004C0E94 (64 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0E54(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C0E54: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    ecx = eax;
    ebx = edx;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0);
    eax = eax - ecx;
    PUSH32(esp, 8);
    edx = edx - ebx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004C0E78: ;
    ecx = MEM32(esi + 0x20);
    ebx = 0; /* xor self */
    eax = eax + ecx;
    edx = edx + ebx + _cf; /* adc */
    eax = eax + MEM32(esp + 0x14);
    edx = edx + ebx + _cf; /* adc */
    eax = 0; /* xor self */
    eax = eax | edx;
    if ((eax == 0)) { sub_004C0E94(); return; } /* je: equal / zero */

loc_004C0E8D: ;
    PUSH32(esp, 0xFFFFFC14u);
    g_seh_ebp = ebp; sub_004C0EB2(); return; /* tail jmp 0x004C0EB2 */

}

/**
 * sub_004C0EC0
 * Original: 0x004C0EC0 - 0x004C0F1A (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C0EC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C071E(); /* call 0x004C071E */

loc_004C0ECB: ;
    eax = MEM32(esi + 0x10);
    if (CMP_NE(eax, MEM32(esi + 0x24))) goto loc_004C0EEB; /* jne: not equal / not zero */

loc_004C0ED3: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0E54(); /* call 0x004C0E54 */

loc_004C0EDB: ;
    if (TEST_Z(eax, eax)) goto loc_004C0F16; /* je: equal / zero */

loc_004C0EDF: ;
    eax = MEM32(esi + 0x24);
    if (CMP_NE(MEM8(eax), 0)) goto loc_004C0F0B; /* jne: not equal / not zero */

loc_004C0EE7: ;
    eax++;
    MEM32(esi + 0x24) = eax;

loc_004C0EEB: ;
    eax = MEM32(esi + 0x24);
    eax = eax - MEM32(esi + 0x10);
    (void)0; /* cmp eax, MEM32(esi + 0x14) - flags set for next jcc */
    MEM32(esi + 0x18) = eax;
    if (CMP_AE(eax, MEM32(esi + 0x14))) goto loc_004C0F04; /* jae: above or equal (unsigned >=) */

loc_004C0EF9: ;
    PUSH32(esp, 0x3EA);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C0F04: ;
    eax = 0; /* xor self */
    eax++;

loc_004C0F07: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004C0F0B: ;
    PUSH32(esp, 0xFFFFFC15u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C0F16: ;
    eax = 0; /* xor self */
    goto loc_004C0F07;

}

/**
 * sub_004C0F1A
 * Original: 0x004C0F1A - 0x004C1067 (333 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C0F1A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C0F1A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_004C100C; /* je: equal / zero */

loc_004C0F2B: ;
    edx = MEM32(ebp + 8);
    ebx = MEM32(edx + 0x10);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + 0xC) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_004C1016; /* je: equal / zero */

loc_004C0F3C: ;
    ecx = MEM32(edx + 0x14);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(edx + 0x20), eax - flags set for next jcc */
    edi = ecx;
    SET_LO8(eax, (CMP_NE(MEM32(edx + 0x20), eax)) ? 1 : 0); /* setne */
    edi = edi - eax;
    edi = edi - MEM32(edx + 0x24);
    edi = edi + ebx;
    if (CMP_AE(edi, esi)) goto loc_004C100C; /* jae: above or equal (unsigned >=) */

loc_004C0F58: ;
    if (TEST_Z(MEM8(edx + 0x30), 8)) goto loc_004C0F68; /* je: equal / zero */

loc_004C0F5E: ;
    PUSH32(esp, 0xFFFFFC11u);
    goto loc_004C105D;

loc_004C0F68: ;
    if (TEST_Z(MEM8(edx + 0x2C), 3)) goto loc_004C0F7D; /* je: equal / zero */

loc_004C0F6E: ;
    eax = 0x80;
    if (CMP_BE(esi, eax)) goto loc_004C0F79; /* jbe: below or equal (unsigned <=) */

loc_004C0F77: ;
    eax = esi;

loc_004C0F79: ;
    eax = eax + ecx;
    goto loc_004C0F9B;

loc_004C0F7D: ;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    edi = esi;
    if (CMP_A(esi, ecx)) goto loc_004C0F85; /* ja: above (unsigned >) */

loc_004C0F83: ;
    edi = ecx;

loc_004C0F85: ;
    eax = 0x100;
    if (CMP_AE(edi, eax)) goto loc_004C0F96; /* jae: above or equal (unsigned >=) */

loc_004C0F8E: ;
    if (CMP_A(esi, ecx)) goto loc_004C0F98; /* ja: above (unsigned >) */

loc_004C0F92: ;
    esi = ecx;
    goto loc_004C0F98;

loc_004C0F96: ;
    esi = eax;

loc_004C0F98: ;
    eax = ecx + esi;

loc_004C0F9B: ;
    ecx = ecx + 3;
    MEM32(edx + 0x14) = eax;
    edi = eax;
    eax = MEM32(edx);
    esi = MEM32(eax + 8);
    ecx = ecx & 0xFFFFFFFCu;
    ebx = ebx + ecx;
    if (CMP_NE(esi, ebx)) goto loc_004C0FD0; /* jne: not equal / not zero */

loc_004C0FB1: ;
    edi = edi + 3;
    edi = edi & 0xFFFFFFFCu;
    edi = edi - ecx;
    ecx = edi + esi;
    (void)0; /* cmp ecx, MEM32(eax + 4) - flags set for next jcc */
    MEM32(eax + 8) = ecx;
    if (CMP_BE(ecx, MEM32(eax + 4))) goto loc_004C0FCB; /* jbe: below or equal (unsigned <=) */

loc_004C0FC4: ;
    MEM32(eax + 8) = esi;
    eax = 0; /* xor self */
    goto loc_004C0FFF;

loc_004C0FCB: ;
    eax = MEM32(ebp + 0xC);
    goto loc_004C0FFF;

loc_004C0FD0: ;
    ecx = edi + 3;
    ecx = ecx & 0xFFFFFFFCu;
    MEM32(eax + 8) = MEM32(eax + 8) + ecx;
    ebx = esi;
    esi = MEM32(eax + 8);
    if (CMP_BE(esi, MEM32(eax + 4))) goto loc_004C0FEA; /* jbe: below or equal (unsigned <=) */

loc_004C0FE3: ;
    MEM32(eax + 8) = ebx;
    ebx = 0; /* xor self */
    goto loc_004C0FFD;

loc_004C0FEA: ;
    esi = MEM32(ebp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_004C0FFD: ;
    eax = ebx;

loc_004C0FFF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edx + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_004C1058; /* je: equal / zero */

loc_004C1006: ;
    eax = eax - MEM32(ebp + 0xC);
    MEM32(edx + 0x24) = MEM32(edx + 0x24) + eax;

loc_004C100C: ;
    eax = 0; /* xor self */
    eax++;

loc_004C100F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_004C1016: ;
    eax = MEM32(edx + 0x28);
    esi = esi + eax;
    eax = 0x80;
    if (CMP_A(esi, eax)) goto loc_004C1026; /* ja: above (unsigned >) */

loc_004C1024: ;
    esi = eax;

loc_004C1026: ;
    eax = MEM32(edx);
    MEM32(edx + 0x14) = esi;
    ecx = MEM32(eax + 8);
    esi = esi + 3;
    esi = esi & 0xFFFFFFFCu;
    esi = esi + ecx;
    (void)0; /* cmp esi, MEM32(eax + 4) - flags set for next jcc */
    MEM32(eax + 8) = esi;
    if (CMP_BE(esi, MEM32(eax + 4))) goto loc_004C1043; /* jbe: below or equal (unsigned <=) */

loc_004C103E: ;
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */

loc_004C1043: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edx + 0x10) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_004C1054; /* je: equal / zero */

loc_004C104A: ;
    eax = MEM32(edx + 0x28);
    eax = eax + ecx;
    MEM32(edx + 0x24) = eax;
    goto loc_004C100C;

loc_004C1054: ;
    MEM32(edx + 0x24) = MEM32(edx + 0x24) & 0;

loc_004C1058: ;
    PUSH32(esp, 0xFFFFFC12u);

loc_004C105D: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004C0A78(); /* call 0x004C0A78 */

loc_004C1063: ;
    eax = 0; /* xor self */
    goto loc_004C100F;

}

/**
 * sub_004C1067
 * Original: 0x004C1067 - 0x004C1098 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1067(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C1067: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_004C107D; /* je: equal / zero */

loc_004C1072: ;
    eax = MEM32(eax + 0x38);
    if (CMP_A(eax, MEM32(0x652F58))) goto loc_004C108E; /* ja: above (unsigned >) */

loc_004C107D: ;
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) { sub_004C1098(); return; } /* je: equal / zero */

loc_004C1083: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_BE(eax, MEM32(0x652F5C))) { sub_004C1098(); return; } /* jbe: below or equal (unsigned <=) */

loc_004C108E: ;
    eax = 0xFFFFFC14u;
    g_seh_ebp = ebp; sub_004C1142(); return; /* tail jmp 0x004C1142 */

}

/**
 * sub_004C1147
 * Original: 0x004C1147 - 0x004C116A (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1147(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C1147: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    eax = eax - MEM32(ecx + 0x10);
    (void)0; /* cmp eax, MEM32(ecx + 0x14) - flags set for next jcc */
    MEM32(ecx + 0x18) = eax;
    if (CMP_AE(eax, MEM32(ecx + 0x14))) goto loc_004C1164; /* jae: above or equal (unsigned >=) */

loc_004C1159: ;
    PUSH32(esp, 0x3EA);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C1164: ;
    eax = 0; /* xor self */
    eax++;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C116A
 * Original: 0x004C116A - 0x004C118A (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C116A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C116A: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    edx = MEM32(esp + 8);
    edx = edx + eax;
    if (CMP_B(edx, eax)) { sub_004C118A(); return; } /* jb: below (unsigned <) */

loc_004C117B: ;
    eax = MEM32(ecx + 0x14);
    eax = eax + MEM32(ecx + 0x10);
    if (CMP_A(edx, eax)) { sub_004C118A(); return; } /* ja: above (unsigned >) */

loc_004C1185: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C1197(); return; /* tail jmp 0x004C1197 */

}

/**
 * sub_004C119A
 * Original: 0x004C119A - 0x004C11D1 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C119A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C119A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_004C11AB; /* je: equal / zero */

loc_004C11A9: ;
    MEM32(esi) = eax;

loc_004C11AB: ;
    edi = MEM32(ebp + 0x18);
    if (TEST_Z(edi, edi)) goto loc_004C11C0; /* je: equal / zero */

loc_004C11B2: ;
    if (CMP_NE(MEM32(ebp + 0x10), 0)) goto loc_004C11C6; /* jne: not equal / not zero */

loc_004C11B8: ;
    eax = MEM32(eax + 0x24);
    eax = eax + MEM32(ebp + 0xC);
    g_seh_ebp = ebp; sub_004C11FA(); return; /* tail jmp 0x004C11FA */

loc_004C11C0: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) { sub_004C11D1(); return; } /* je: equal / zero */

loc_004C11C6: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx - MEM32(eax + 0x24);
    ecx = ecx + MEM32(eax + 0x10);
    g_seh_ebp = ebp; sub_004C11D4(); return; /* tail jmp 0x004C11D4 */

}

/**
 * sub_004C1209
 * Original: 0x004C1209 - 0x004C129B (146 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1209(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C1209: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C116A(); /* call 0x004C116A */

loc_004C1218: ;
    if (TEST_Z(eax, eax)) goto loc_004C1293; /* je: equal / zero */

loc_004C121C: ;
    ecx = MEM32(esi + 0x24);
    eax = ZX8(MEM8(ecx));
    edi = eax;
    eax = eax & 0x1F;
    edi = edi & 0xE0;
    ebx = eax;
    ecx++;
    (void)0; /* cmp ebx, 0x1F - flags set for next jcc */
    MEM32(esi + 0x24) = ecx;
    if (CMP_NE(ebx, 0x1F)) goto loc_004C1266; /* jne: not equal / not zero */

loc_004C1238: ;
    ebx = 0; /* xor self */

loc_004C123A: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C116A(); /* call 0x004C116A */

loc_004C1242: ;
    if (TEST_Z(eax, eax)) goto loc_004C1293; /* je: equal / zero */

loc_004C1246: ;
    eax = MEM32(esi + 0x24);
    ecx = ZX8(MEM8(eax));
    eax++;
    (void)0; /* test ebx, 0xE0000000u - flags set for next jcc */
    MEM32(esi + 0x24) = eax;
    if (TEST_NZ(ebx, 0xE0000000u)) goto loc_004C1288; /* jne: not equal / not zero */

loc_004C1258: ;
    eax = ecx;
    eax = eax & 0x7F;
    ebx = ebx << 7;
    ebx = ebx | eax;
    if (TEST_S(LO8(ecx), LO8(ecx))) goto loc_004C123A; /* js: sign (negative) */

loc_004C1266: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_004C1278; /* je: equal / zero */

loc_004C126E: ;
    ecx = edi;
    ecx = ecx & 0x20;
    MEM32(eax) = ecx;
    edi = edi & 0xFFFFFFDFu;

loc_004C1278: ;
    edi = edi << 0x18;
    edi = edi | ebx;
    if (CMP_NE(MEM32(esp + 0x14), edi)) goto loc_004C1288; /* jne: not equal / not zero */

loc_004C1283: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_004C1295;

loc_004C1288: ;
    PUSH32(esp, 0xFFFFFC0Du);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C1293: ;
    eax = 0; /* xor self */

loc_004C1295: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C129B
 * Original: 0x004C129B - 0x004C1374 (217 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C129B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C129B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_004C12AB; /* je: equal / zero */

loc_004C12A8: ;
    MEM32(ebx) = MEM32(ebx) & 0;

loc_004C12AB: ;
    esi = MEM32(ebp + 8);
    edi = 0; /* xor self */
    edi++;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C116A(); /* call 0x004C116A */

loc_004C12B8: ;
    if (TEST_Z(eax, eax)) goto loc_004C136B; /* je: equal / zero */

loc_004C12C0: ;
    eax = MEM32(esi + 0x24);
    ecx = ZX8(MEM8(eax));
    eax++;
    MEM32(esi + 0x24) = eax;
    eax = 0x80;
    if (CMP_AE(ecx, eax)) goto loc_004C12DA; /* jae: above or equal (unsigned >=) */

loc_004C12D3: ;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = ecx;
    goto loc_004C1348;

loc_004C12DA: ;
    if (CMP_NE(ecx, eax)) goto loc_004C12EA; /* jne: not equal / not zero */

loc_004C12DC: ;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = MEM32(edx) & 0;
    if (TEST_Z(ebx, ebx)) goto loc_004C1360; /* je: equal / zero */

loc_004C12E6: ;
    MEM32(ebx) = edi;
    goto loc_004C1348;

loc_004C12EA: ;
    if (CMP_A(ecx, 0x84)) goto loc_004C1360; /* ja: above (unsigned >) */

loc_004C12F2: ;
    edi = ecx + -128;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C116A(); /* call 0x004C116A */

loc_004C12FC: ;
    if (TEST_Z(eax, eax)) goto loc_004C136B; /* je: equal / zero */

loc_004C1300: ;
    eax = 0; /* xor self */
    edi--;
    if ((edi == 0)) goto loc_004C1337; /* je: equal / zero */

loc_004C1305: ;
    edi--;
    if ((edi == 0)) goto loc_004C132A; /* je: equal / zero */

loc_004C1308: ;
    edi--;
    if ((edi == 0)) goto loc_004C131B; /* je: equal / zero */

loc_004C130B: ;
    edi--;
    if ((edi != 0)) goto loc_004C1343; /* jne: not equal / not zero */

loc_004C130E: ;
    ecx = MEM32(esi + 0x24);
    eax = ZX8(MEM8(ecx));
    eax = eax << 0x18;
    ecx++;
    MEM32(esi + 0x24) = ecx;

loc_004C131B: ;
    ecx = MEM32(esi + 0x24);
    edx = ZX8(MEM8(ecx));
    edx = edx << 0x10;
    eax = eax | edx;
    ecx++;
    MEM32(esi + 0x24) = ecx;

loc_004C132A: ;
    ecx = MEM32(esi + 0x24);
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ecx));
    eax = eax | edx;
    ecx++;
    MEM32(esi + 0x24) = ecx;

loc_004C1337: ;
    ecx = MEM32(esi + 0x24);
    edx = ZX8(MEM8(ecx));
    eax = eax | edx;
    ecx++;
    MEM32(esi + 0x24) = ecx;

loc_004C1343: ;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = eax;

loc_004C1348: ;
    if (TEST_Z(ebx, ebx)) goto loc_004C1356; /* je: equal / zero */

loc_004C134C: ;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_004C1356; /* je: equal / zero */

loc_004C1351: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_004C136D;

loc_004C1356: ;
    PUSH32(esp, MEM32(edx));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C116A(); /* call 0x004C116A */

loc_004C135E: ;
    goto loc_004C136D;

loc_004C1360: ;
    PUSH32(esp, 0xFFFFFC15u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C136B: ;
    eax = 0; /* xor self */

loc_004C136D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C1374
 * Original: 0x004C1374 - 0x004C13DB (103 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1374(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C1374: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (TEST_Z(edi, edi)) goto loc_004C1385; /* je: equal / zero */

loc_004C1383: ;
    MEM32(edi) = esi;

loc_004C1385: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    eax = eax | 0x20000000;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1209(); /* call 0x004C1209 */

loc_004C1396: ;
    if (TEST_Z(eax, eax)) { sub_004C13DB(); return; } /* je: equal / zero */

loc_004C139A: ;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C129B(); /* call 0x004C129B */

loc_004C13A8: ;
    if (TEST_Z(eax, eax)) { sub_004C13DB(); return; } /* je: equal / zero */

loc_004C13AC: ;
    if (TEST_NZ(edi, edi)) goto loc_004C13C9; /* jne: not equal / not zero */

loc_004C13B0: ;
    if (CMP_EQ(MEM32(ebp + 0x10), edi)) goto loc_004C13B9; /* je: equal / zero */

loc_004C13B5: ;
    eax = 0; /* xor self */
    goto loc_004C13BF;

loc_004C13B9: ;
    eax = MEM32(esi + 0x24);
    eax = eax + MEM32(ebp + 8);

loc_004C13BF: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C13DD(); return; /* tail jmp 0x004C13DD */

loc_004C13C9: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C119A(); /* call 0x004C119A */

loc_004C13D9: ;
    g_seh_ebp = ebp; sub_004C13DD(); return; /* tail jmp 0x004C13DD */

}

/**
 * sub_004C13E3
 * Original: 0x004C13E3 - 0x004C146E (139 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C13E3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C13E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    ecx = ecx + edx;
    edi = esi + 1;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (CMP_A(edi, ecx)) goto loc_004C1465; /* ja: above (unsigned >) */

loc_004C1408: ;
    edx = ZX8(MEM8(esi));
    ecx = edx;
    edx = edx & 0x1F;
    ecx = ecx & 0xC0;
    (void)0; /* cmp edx, 0x1F - flags set for next jcc */
    MEM32(eax + 0x24) = edi;
    if (CMP_NE(edx, 0x1F)) goto loc_004C1448; /* jne: not equal / not zero */

loc_004C141E: ;
    edx = 0; /* xor self */

loc_004C1420: ;
    edi++;
    if (CMP_A(edi, MEM32(ebp + 8))) goto loc_004C1465; /* ja: above (unsigned >) */

loc_004C1426: ;
    (void)0; /* test edx, 0xE0000000u - flags set for next jcc */
    ebx = MEM32(eax + 0x24);
    ebx = ZX8(MEM8(ebx));
    MEM32(ebp + -4) = ebx;
    MEM32(eax + 0x24) = edi;
    if (TEST_NZ(edx, 0xE0000000u)) goto loc_004C145A; /* jne: not equal / not zero */

loc_004C143A: ;
    ebx = ebx & 0x7F;
    edx = edx << 7;
    edx = edx | ebx;
    if (TEST_NZ(MEM8(ebp + -4), 0x80)) goto loc_004C1420; /* jne: not equal / not zero */

loc_004C1448: ;
    ecx = ecx << 0x18;
    ecx = ecx | edx;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = ecx;
    MEM32(eax + 0x24) = esi;
    eax = 0; /* xor self */
    eax++;
    goto loc_004C1467;

loc_004C145A: ;
    PUSH32(esp, 0xFFFFFC0Du);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C1465: ;
    eax = 0; /* xor self */

loc_004C1467: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C146E
 * Original: 0x004C146E - 0x004C156F (257 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C146E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C146E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1209(); /* call 0x004C1209 */

loc_004C1480: ;
    if (TEST_Z(eax, eax)) goto loc_004C1568; /* je: equal / zero */

loc_004C1488: ;
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C129B(); /* call 0x004C129B */

loc_004C1494: ;
    if (TEST_Z(eax, eax)) goto loc_004C1568; /* je: equal / zero */

loc_004C149C: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_B(eax, 1)) goto loc_004C155D; /* jb: below (unsigned <) */

loc_004C14A8: ;
    eax--;
    if ((eax == 0)) goto loc_004C154A; /* je: equal / zero */

loc_004C14AF: ;
    eax--;
    if ((eax == 0)) goto loc_004C1536; /* je: equal / zero */

loc_004C14B6: ;
    eax--;
    if ((eax == 0)) goto loc_004C1519; /* je: equal / zero */

loc_004C14B9: ;
    eax--;
    if ((eax == 0)) goto loc_004C14F3; /* je: equal / zero */

loc_004C14BC: ;
    eax--;
    if ((eax != 0)) goto loc_004C14EC; /* jne: not equal / not zero */

loc_004C14BF: ;
    eax = MEM32(esi + 0x24);
    if (CMP_NE(MEM8(eax), 0)) goto loc_004C14EC; /* jne: not equal / not zero */

loc_004C14C7: ;
    edx = ZX8(MEM8(eax + 3));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + 1));
    SET_LO8(ecx, MEM8(eax + 2));
    eax = ZX8(MEM8(eax + 4));
    ecx = ecx << 8;
    ecx = ecx | edx;
    ecx = ecx << 8;
    ecx = ecx | eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 5;
    goto loc_004C1558;

loc_004C14EC: ;
    PUSH32(esp, 0xFFFFFC14u);
    goto loc_004C1562;

loc_004C14F3: ;
    eax = MEM32(esi + 0x24);
    ecx = ZX8(MEM8(eax + 1));
    SET_HI8(ecx, MEM8(eax));
    edx = ZX8(MEM8(eax + 2));
    eax = ZX8(MEM8(eax + 3));
    ecx = ecx << 8;
    ecx = ecx | edx;
    ecx = ecx << 8;
    ecx = ecx | eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 4;
    goto loc_004C1558;

loc_004C1519: ;
    eax = MEM32(esi + 0x24);
    ecx = ZX8(MEM8(eax + 1));
    SET_HI8(ecx, MEM8(eax));
    eax = ZX8(MEM8(eax + 2));
    ecx = ecx << 8;
    ecx = ecx | eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 3;
    goto loc_004C1558;

loc_004C1536: ;
    eax = MEM32(esi + 0x24);
    ecx = ZX8(MEM8(eax + 1));
    SET_HI8(ecx, MEM8(eax));
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 2;
    goto loc_004C1558;

loc_004C154A: ;
    eax = MEM32(esi + 0x24);
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_004C1558: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_004C156A;

loc_004C155D: ;
    PUSH32(esp, 0xFFFFFC15u);

loc_004C1562: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C1568: ;
    eax = 0; /* xor self */

loc_004C156A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C156F
 * Original: 0x004C156F - 0x004C15DB (108 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C156F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C156F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0xFFFFFC15u;
    if (TEST_NZ(esi, esi)) goto loc_004C1585; /* jne: not equal / not zero */

loc_004C1583: ;
    esi = edi;

loc_004C1585: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_004C1599; /* je: equal / zero */

loc_004C158D: ;
    if (CMP_NE(MEM32(esi + 0x24), eax)) goto loc_004C15C4; /* jne: not equal / not zero */

loc_004C1592: ;
    MEM32(edi + 0x24) = eax;

loc_004C1595: ;
    ebx = 0; /* xor self */
    goto loc_004C15C4;

loc_004C1599: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C116A(); /* call 0x004C116A */

loc_004C15A1: ;
    if (TEST_Z(eax, eax)) goto loc_004C15BF; /* je: equal / zero */

loc_004C15A5: ;
    eax = MEM32(esi + 0x24);
    if (CMP_NE(MEM8(eax), 0)) goto loc_004C15C4; /* jne: not equal / not zero */

loc_004C15AD: ;
    if (CMP_NE(MEM8(eax + 1), 0)) goto loc_004C15C4; /* jne: not equal / not zero */

loc_004C15B3: ;
    eax = eax + 2;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(esi + 0x24) = eax;
    if (CMP_EQ(esi, edi)) goto loc_004C1595; /* je: equal / zero */

loc_004C15BD: ;
    goto loc_004C1592;

loc_004C15BF: ;
    ebx = 0xFFFFFC16u;

loc_004C15C4: ;
    if (TEST_Z(esi, esi)) goto loc_004C15D2; /* je: equal / zero */

loc_004C15C8: ;
    if (CMP_EQ(esi, edi)) goto loc_004C15D2; /* je: equal / zero */

loc_004C15CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C076B(); /* call 0x004C076B */

loc_004C15D2: ;
    if (TEST_NZ(ebx, ebx)) { sub_004C15DB(); return; } /* jne: not equal / not zero */

loc_004C15D6: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C15E4(); return; /* tail jmp 0x004C15E4 */

}

/**
 * sub_004C15EA
 * Original: 0x004C15EA - 0x004C15FF (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C15EA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C15EA: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) { sub_004C15FF(); return; } /* je: equal / zero */

loc_004C15F2: ;
    ecx = MEM32(esp + 4);
    (void)0; /* cmp MEM32(ecx + 0x24), eax - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    g_seh_ebp = ebp; sub_004C1626(); return; /* tail jmp 0x004C1626 */

}

/**
 * sub_004C1629
 * Original: 0x004C1629 - 0x004C1694 (107 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1629(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C1629: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = eax;
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) + eax;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(ecx + 0x3C), esi)) goto loc_004C165D; /* je: equal / zero */

loc_004C1644: ;
    edx = MEM32(ecx + 0x4C);
    if (CMP_B(edx, eax)) goto loc_004C1683; /* jb: below (unsigned <) */

loc_004C164B: ;
    esi = MEM32(ecx + 0x48);
    PUSH32(esp, edi);
    edi = esi + eax;
    edx = edx - eax;
    MEM32(ecx + 0x48) = edi;
    MEM32(ecx + 0x4C) = edx;
    POP32(esp, edi);
    goto loc_004C167F;

loc_004C165D: ;
    if (CMP_BE(edx, eax)) goto loc_004C1665; /* jbe: below or equal (unsigned <=) */

loc_004C1661: ;
    esi = 0; /* xor self */
    goto loc_004C1683;

loc_004C1665: ;
    edx = MEM32(ecx);
    esi = MEM32(edx + 8);
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    eax = eax + esi;
    (void)0; /* cmp eax, MEM32(edx + 4) - flags set for next jcc */
    MEM32(edx + 8) = eax;
    if (CMP_BE(eax, MEM32(edx + 4))) goto loc_004C167F; /* jbe: below or equal (unsigned <=) */

loc_004C167A: ;
    MEM32(edx + 8) = esi;
    esi = 0; /* xor self */

loc_004C167F: ;
    if (TEST_NZ(esi, esi)) goto loc_004C168E; /* jne: not equal / not zero */

loc_004C1683: ;
    PUSH32(esp, 0xFFFFFC12u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C168E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C1694
 * Original: 0x004C1694 - 0x004C172D (153 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1694(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C1694: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0x10);
    eax = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = ecx + 3;
    ecx = ecx & 0xFFFFFFFCu;
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) + ecx;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebx + 0x3C), esi)) goto loc_004C16C1; /* je: equal / zero */

loc_004C16B1: ;
    if (CMP_NE(MEM32(ebp + 0xC), esi)) goto loc_004C171A; /* jne: not equal / not zero */

loc_004C16B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C1629(); /* call 0x004C1629 */

loc_004C16BD: ;
    esi = eax;
    goto loc_004C1716;

loc_004C16C1: ;
    if (CMP_A(eax, ecx)) goto loc_004C171A; /* ja: above (unsigned >) */

loc_004C16C5: ;
    ecx = ecx + 3;
    if (CMP_EQ(MEM32(ebp + 0xC), esi)) goto loc_004C16FD; /* je: equal / zero */

loc_004C16CD: ;
    esi = MEM32(ebx);
    eax = esi + 8;
    edx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFCu;
    MEM32(eax) = MEM32(eax) + ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_BE(edi, MEM32(esi + 4))) goto loc_004C16E7; /* jbe: below or equal (unsigned <=) */

loc_004C16E1: ;
    MEM32(eax) = edx;
    edx = 0; /* xor self */
    goto loc_004C16FA;

loc_004C16E7: ;
    esi = MEM32(ebp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_004C16FA: ;
    POP32(esp, edi);
    goto loc_004C1714;

loc_004C16FD: ;
    eax = MEM32(ebx);
    edx = MEM32(eax + 8);
    ecx = ecx & 0xFFFFFFFCu;
    ecx = ecx + edx;
    (void)0; /* cmp ecx, MEM32(eax + 4) - flags set for next jcc */
    MEM32(eax + 8) = ecx;
    if (CMP_BE(ecx, MEM32(eax + 4))) goto loc_004C1714; /* jbe: below or equal (unsigned <=) */

loc_004C170F: ;
    MEM32(eax + 8) = edx;
    edx = 0; /* xor self */

loc_004C1714: ;
    esi = edx;

loc_004C1716: ;
    if (TEST_NZ(esi, esi)) goto loc_004C1725; /* jne: not equal / not zero */

loc_004C171A: ;
    PUSH32(esp, 0xFFFFFC12u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C1725: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C172D
 * Original: 0x004C172D - 0x004C1759 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C172D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C172D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C0732(); /* call 0x004C0732 */

loc_004C1737: ;
    edx = MEM32(ecx + 0x10);
    if (TEST_Z(edx, edx)) { sub_004C1759(); return; } /* je: equal / zero */

loc_004C173E: ;
    eax = MEM32(ecx + 0x24);
    if (CMP_NE(edx, eax)) goto loc_004C174B; /* jne: not equal / not zero */

loc_004C1745: ;
    MEM8(eax) = 0;
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) + 1;

loc_004C174B: ;
    eax = MEM32(ecx + 0x24);
    eax = eax - MEM32(ecx + 0x10);
    MEM32(ecx + 0x18) = eax;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C1761(); return; /* tail jmp 0x004C1761 */

}

/**
 * sub_004C1764
 * Original: 0x004C1764 - 0x004C1835 (209 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1764(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C1764: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) { sub_004C1835(); return; } /* je: equal / zero */

loc_004C1775: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(eax, eax)) { sub_004C1835(); return; } /* je: equal / zero */

loc_004C1780: ;
    MEM32(eax) = MEM32(eax) & 0;
    edx = MEM32(ebp + 8);
    esi = MEM32(edx + 8);
    eax = esi + 0x3C;
    (void)0; /* cmp eax, MEM32(edx + 4) - flags set for next jcc */
    MEM32(edx + 8) = eax;
    if (CMP_BE(eax, MEM32(edx + 4))) goto loc_004C1799; /* jbe: below or equal (unsigned <=) */

loc_004C1794: ;
    MEM32(edx + 8) = esi;
    esi = 0; /* xor self */

loc_004C1799: ;
    if (TEST_Z(esi, esi)) goto loc_004C182E; /* je: equal / zero */

loc_004C17A1: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0xF);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & eax;
    MEM32(esi) = edx;
    MEM32(esi + 4) = 0x44434E45;
    eax = MEM32(ebx + 8);
    MEM32(esi + 0x30) = eax;
    eax = MEM32(ebp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0xC) = ebx;
    if (TEST_Z(eax, eax)) goto loc_004C17DA; /* je: equal / zero */

loc_004C17C6: ;
    ecx = MEM32(ebp + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_004C17DA; /* je: equal / zero */

loc_004C17CD: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 8;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x14) = ecx;

loc_004C17DA: ;
    edi = MEM32(ebp + 0x1C);
    if (TEST_Z(edi, edi)) goto loc_004C17E9; /* je: equal / zero */

loc_004C17E1: ;
    MEM32(esi + 0x34) = edi;
    eax = MEM32(edi + 0x2C);
    goto loc_004C17EF;

loc_004C17E9: ;
    MEM32(esi + 0x34) = esi;
    eax = MEM32(ebx + 4);

loc_004C17EF: ;
    (void)0; /* test MEM8(esi + 0x30), 8 - flags set for next jcc */
    MEM32(esi + 0x2C) = eax;
    if (TEST_NZ(MEM8(esi + 0x30), 8)) goto loc_004C1817; /* jne: not equal / not zero */

loc_004C17F8: ;
    if (TEST_Z(edi, edi)) goto loc_004C181E; /* je: equal / zero */

loc_004C17FC: ;
    if (TEST_NZ(LO8(eax), 3)) goto loc_004C1805; /* jne: not equal / not zero */

loc_004C1800: ;
    if (TEST_Z(HI8(eax), 7)) goto loc_004C1827; /* je: equal / zero */

loc_004C1805: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0F1A(); /* call 0x004C0F1A */

loc_004C180D: ;
    if (TEST_Z(eax, eax)) goto loc_004C182E; /* je: equal / zero */

loc_004C1811: ;
    eax = MEM32(esi + 0x10);
    MEM8(eax) = 0;

loc_004C1817: ;
    if (TEST_Z(edi, edi)) goto loc_004C181E; /* je: equal / zero */

loc_004C181B: ;
    MEM32(edi + 0x38) = esi;

loc_004C181E: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004C183A(); return; /* tail jmp 0x004C183A */

loc_004C1827: ;
    eax = 0xFFFFFC0Bu;
    g_seh_ebp = ebp; sub_004C183A(); return; /* tail jmp 0x004C183A */

loc_004C182E: ;
    eax = 0xFFFFFC12u;
    g_seh_ebp = ebp; sub_004C183A(); return; /* tail jmp 0x004C183A */

}

/**
 * sub_004C1841
 * Original: 0x004C1841 - 0x004C19AB (362 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1841(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C1841: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, ebx)) { sub_004C19AB(); return; } /* je: equal / zero */

loc_004C1854: ;
    edi = MEM32(ebp + 0xC);
    if (CMP_EQ(edi, ebx)) { sub_004C19AB(); return; } /* je: equal / zero */

loc_004C185F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C1866: ;
    (void)0; /* test MEM8(ebp + 0x14), 8 - flags set for next jcc */
    MEM32(edi) = ebx;
    if (TEST_Z(MEM8(ebp + 0x14), 8)) goto loc_004C1896; /* je: equal / zero */

loc_004C186E: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_EQ(eax, ebx)) goto loc_004C1884; /* je: equal / zero */

loc_004C1875: ;
    ecx = MEM32(ebp + 0x1C);
    if (CMP_EQ(ecx, ebx)) goto loc_004C1884; /* je: equal / zero */

loc_004C187C: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ecx;
    goto loc_004C18A9;

loc_004C1884: ;
    PUSH32(esp, 0xFFFFFC0Fu);

loc_004C1889: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C188F: ;
    edi = eax;
    g_seh_ebp = ebp; sub_004C19B0(); return; /* tail jmp 0x004C19B0 */

loc_004C1896: ;
    if (TEST_NZ(MEM8(ebp + 0x14), 4)) goto loc_004C18A6; /* jne: not equal / not zero */

loc_004C189C: ;
    eax = MEM32(esi + 0x2C);
    eax = eax | MEM32(ebp + 0x14);
    if (TEST_NZ(LO8(eax), 1)) goto loc_004C18B2; /* jne: not equal / not zero */

loc_004C18A6: ;
    eax = MEM32(esi + 0x10);

loc_004C18A9: ;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = ebx;

loc_004C18B2: ;
    eax = MEM32(esi + 0x14);
    if (CMP_BE(eax, MEM32(0x652F5C))) goto loc_004C18C4; /* jbe: below or equal (unsigned <=) */

loc_004C18BD: ;
    PUSH32(esp, 0xFFFFFC14u);
    goto loc_004C1889;

loc_004C18C4: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(ebp + 0x10);
    if (CMP_AE(ecx, MEM32(eax + 0xC))) goto loc_004C19A1; /* jae: above or equal (unsigned >=) */

loc_004C18D3: ;
    (void)0; /* cmp MEM32(esi + 0x40), ebx - flags set for next jcc */
    MEM32(esi + 0x50) = ebx;
    if (CMP_EQ(MEM32(esi + 0x40), ebx)) goto loc_004C18E0; /* je: equal / zero */

loc_004C18DB: ;
    if (CMP_NE(MEM32(esi + 0x44), ebx)) goto loc_004C18E3; /* jne: not equal / not zero */

loc_004C18E0: ;
    MEM32(esi + 0x3C) = ebx;

loc_004C18E3: ;
    eax = MEM32(eax + 0x14);
    ecx = ecx << 2;
    PUSH32(esp, MEM32(ecx + eax));
    MEM32(ebp + 0x14) = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1629(); /* call 0x004C1629 */

loc_004C18F5: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_004C199A; /* je: equal / zero */

loc_004C18FF: ;
    ecx = MEM32(esi + 0x28);
    if (TEST_Z(LO8(ecx), 3)) goto loc_004C192B; /* je: equal / zero */

loc_004C1907: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 0x1C);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(edx + ecx);
    if (CMP_EQ(ecx, ebx)) goto loc_004C19A1; /* je: equal / zero */

loc_004C191B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004C191F: ;
    if (TEST_Z(eax, eax)) goto loc_004C1951; /* je: equal / zero */

loc_004C1923: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0EC0(); /* call 0x004C0EC0 */

loc_004C1929: ;
    goto loc_004C1964;

loc_004C192B: ;
    if (TEST_Z(HI8(ecx), 7)) goto loc_004C1990; /* je: equal / zero */

loc_004C1930: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 0x1C);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(edx + ecx);
    if (CMP_EQ(ecx, ebx)) goto loc_004C19A1; /* je: equal / zero */

loc_004C1940: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004C1945: ;
    if (TEST_Z(eax, eax)) goto loc_004C1951; /* je: equal / zero */

loc_004C1949: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1147(); /* call 0x004C1147 */

loc_004C194F: ;
    goto loc_004C1964;

loc_004C1951: ;
    eax = MEM32(esi + 0x30);
    if (CMP_L(MEM32(eax + 0x1C), ebx)) goto loc_004C1964; /* jl: less (signed <) */

loc_004C1959: ;
    PUSH32(esp, 0xFFFFFC15u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C1964: ;
    eax = MEM32(esi + 0x30);
    if (CMP_GE(MEM32(eax + 0x1C), ebx)) goto loc_004C1988; /* jge: greater or equal (signed >=) */

loc_004C196C: ;
    eax = MEM32(esi + 0x34);
    if (CMP_EQ(eax, ebx)) goto loc_004C1985; /* je: equal / zero */

loc_004C1973: ;
    edx = MEM32(eax + 0x34);
    PUSH32(esp, eax);
    MEM32(eax + 0x30) = eax;
    PUSH32(esp, 0); sub_004C076B(); /* call 0x004C076B */

loc_004C197F: ;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    eax = edx;
    if (CMP_NE(edx, ebx)) goto loc_004C1973; /* jne: not equal / not zero */

loc_004C1985: ;
    MEM32(esi + 0x34) = ebx;

loc_004C1988: ;
    eax = MEM32(esi + 0x30);
    edi = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_004C19B0(); return; /* tail jmp 0x004C19B0 */

loc_004C1990: ;
    PUSH32(esp, 0xFFFFFC0Bu);
    goto loc_004C1889;

loc_004C199A: ;
    edi = 0xFFFFFC12u;
    g_seh_ebp = ebp; sub_004C19B4(); return; /* tail jmp 0x004C19B4 */

loc_004C19A1: ;
    PUSH32(esp, 0xFFFFFC10u);
    goto loc_004C1889;

}

/**
 * sub_004C19D4
 * Original: 0x004C19D4 - 0x004C1BBB (487 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C19D4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C19D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C1209(); /* call 0x004C1209 */

loc_004C19ED: ;
    if (TEST_Z(eax, eax)) goto loc_004C1BB2; /* je: equal / zero */

loc_004C19F5: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C129B(); /* call 0x004C129B */

loc_004C1A03: ;
    if (TEST_Z(eax, eax)) goto loc_004C1BB2; /* je: equal / zero */

loc_004C1A0B: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 8), edi)) goto loc_004C1AE9; /* je: equal / zero */

loc_004C1A16: ;
    esi = MEM32(ebp + 0x10);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(esi) = edi;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi + 4) = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C119A(); /* call 0x004C119A */

loc_004C1A32: ;
    if (TEST_Z(eax, eax)) goto loc_004C1BB2; /* je: equal / zero */

loc_004C1A3A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C15EA(); /* call 0x004C15EA */

loc_004C1A45: ;
    if (TEST_Z(eax, eax)) goto loc_004C1AD8; /* je: equal / zero */

loc_004C1A4D: ;
    goto loc_004C1A51;

loc_004C1A4F: ;
    edi = 0; /* xor self */

loc_004C1A51: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C19D4(); /* call 0x004C19D4 */

loc_004C1A62: ;
    if (TEST_Z(eax, eax)) goto loc_004C1ABF; /* je: equal / zero */

loc_004C1A66: ;
    eax = MEM32(ebp + -12);
    if (CMP_EQ(eax, edi)) goto loc_004C1ABF; /* je: equal / zero */

loc_004C1A6D: ;
    if (CMP_NE(MEM32(ebp + 0x14), edi)) goto loc_004C1AD0; /* jne: not equal / not zero */

loc_004C1A72: ;
    ecx = MEM32(esi);
    eax = ecx + eax + 7;
    eax = eax >> 3;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C1694(); /* call 0x004C1694 */

loc_004C1A87: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(eax, edi)) goto loc_004C1BB2; /* je: equal / zero */

loc_004C1A92: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C0878(); /* call 0x004C0878 */

loc_004C1AA1: ;
    eax = MEM32(ebp + -12);
    MEM32(esi) = MEM32(esi) + eax;
    eax = MEM32(esi);
    edi = eax;
    edi = edi & 7;
    if ((edi == 0)) goto loc_004C1ABF; /* je: equal / zero */

loc_004C1AAF: ;
    ecx = MEM32(esi + 4);
    eax = eax >> 3;
    eax = eax + ecx;
    SET_LO8(ecx, MEM8(edi + 0x882EAC));
    MEM8(eax) = MEM8(eax) & LO8(ecx);

loc_004C1ABF: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C15EA(); /* call 0x004C15EA */

loc_004C1ACA: ;
    if (TEST_NZ(eax, eax)) goto loc_004C1A4F; /* jne: not equal / not zero */

loc_004C1ACE: ;
    goto loc_004C1AD8;

loc_004C1AD0: ;
    MEM32(esi) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esi + 4) = eax;

loc_004C1AD8: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004C1AE4: ;
    goto loc_004C1BB4;

loc_004C1AE9: ;
    edi = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    if (CMP_NE(edi, edx)) goto loc_004C1AFF; /* jne: not equal / not zero */

loc_004C1AF2: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    goto loc_004C1B9D;

loc_004C1AFF: ;
    eax = 0; /* xor self */
    eax++;
    if (CMP_NE(edi, eax)) goto loc_004C1B16; /* jne: not equal / not zero */

loc_004C1B06: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + 1;
    goto loc_004C1BB4;

loc_004C1B16: ;
    ecx = MEM32(ebx + 0x24);
    SET_LO8(ecx, MEM8(ecx));
    if (CMP_AE(LO8(ecx), 8)) goto loc_004C1BA7; /* jae: above or equal (unsigned >=) */

loc_004C1B24: ;
    edi--;
    ecx = ZX8(LO8(ecx));
    esi = edi;
    esi = esi << 3;
    esi = esi - ecx;
    ecx = esi;
    esi = MEM32(ebp + 0x10);
    MEM32(esi) = ecx;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + 1;
    (void)0; /* cmp MEM32(ebp + 0x14), edx - flags set for next jcc */
    ecx = MEM32(ebx + 0x24);
    MEM32(ebp + 0xC) = edi;
    if (CMP_EQ(MEM32(ebp + 0x14), edx)) goto loc_004C1B4C; /* je: equal / zero */

loc_004C1B44: ;
    MEM32(esi + 4) = ecx;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + edi;
    goto loc_004C1BB4;

loc_004C1B4C: ;
    ecx = MEM32(esi);
    if (CMP_EQ(ecx, edx)) goto loc_004C1BA2; /* je: equal / zero */

loc_004C1B52: ;
    ecx = ecx + 7;
    ecx = ecx >> 3;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C1629(); /* call 0x004C1629 */

loc_004C1B5F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_004C1BB2; /* je: equal / zero */

loc_004C1B66: ;
    esi = MEM32(ebx + 0x24);
    ecx = edi;
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(ebp + 0x10);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(eax);
    esi = esi & 7;
    if ((esi == 0)) goto loc_004C1B97; /* je: equal / zero */

loc_004C1B85: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 0xC);
    eax = ecx + eax + -1;
    SET_LO8(ecx, MEM8(esi + 0x882EAC));
    MEM8(eax) = MEM8(eax) & LO8(ecx);

loc_004C1B97: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + eax;

loc_004C1B9D: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_004C1BB4;

loc_004C1BA2: ;
    MEM32(esi + 4) = edx;
    goto loc_004C1BB4;

loc_004C1BA7: ;
    PUSH32(esp, 0xFFFFFC15u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C1BB2: ;
    eax = 0; /* xor self */

loc_004C1BB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C1BBB
 * Original: 0x004C1BBB - 0x004C1BD1 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1BBB(void)
{

loc_004C1BBB: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004C19D4(); /* call 0x004C19D4 */

loc_004C1BCE: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C1BD1
 * Original: 0x004C1BD1 - 0x004C1CAC (219 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1BD1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C1BD1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C1209(); /* call 0x004C1209 */

loc_004C1BEA: ;
    if (TEST_Z(eax, eax)) goto loc_004C1C2B; /* je: equal / zero */

loc_004C1BEE: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C129B(); /* call 0x004C129B */

loc_004C1BFC: ;
    if (TEST_Z(eax, eax)) goto loc_004C1C2B; /* je: equal / zero */

loc_004C1C00: ;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + -4), eax)) { sub_004C1CAC(); return; } /* je: equal / zero */

loc_004C1C0B: ;
    ebx = MEM32(ebp + 0x10);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C119A(); /* call 0x004C119A */

loc_004C1C27: ;
    if (TEST_NZ(eax, eax)) goto loc_004C1C8F; /* jne: not equal / not zero */

loc_004C1C2B: ;
    eax = 0; /* xor self */

loc_004C1C2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_004C1C34: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C1BD1(); /* call 0x004C1BD1 */

loc_004C1C42: ;
    if (TEST_Z(eax, eax)) goto loc_004C1C2B; /* je: equal / zero */

loc_004C1C46: ;
    eax = MEM32(ebp + -16);
    if (TEST_Z(eax, eax)) goto loc_004C1C8F; /* je: equal / zero */

loc_004C1C4D: ;
    ecx = MEM32(ebx);
    eax = ecx + eax + 1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C1694(); /* call 0x004C1694 */

loc_004C1C5F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_004C1C2B; /* je: equal / zero */

loc_004C1C66: ;
    edi = MEM32(ebx);
    ecx = MEM32(ebp + -16);
    esi = MEM32(ebp + -12);
    edi = edi + eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebp + -16);
    MEM32(ebx) = MEM32(ebx) + eax;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    edi = MEM32(ebp + 8);
    MEM8(eax + ecx) = 0;

loc_004C1C8F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C15EA(); /* call 0x004C15EA */

loc_004C1C9A: ;
    if (TEST_NZ(eax, eax)) goto loc_004C1C34; /* jne: not equal / not zero */

loc_004C1C9E: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004C1CAA: ;
    goto loc_004C1C2D;

}

/**
 * sub_004C1D00
 * Original: 0x004C1D00 - 0x004C1DBA (186 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C1D00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1209(); /* call 0x004C1209 */

loc_004C1D14: ;
    if (TEST_Z(eax, eax)) goto loc_004C1D5A; /* je: equal / zero */

loc_004C1D18: ;
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C129B(); /* call 0x004C129B */

loc_004C1D24: ;
    if (TEST_Z(eax, eax)) goto loc_004C1D5A; /* je: equal / zero */

loc_004C1D28: ;
    ecx = MEM32(esi + 0x24);
    eax = ZX8(MEM8(ecx));
    ebx = MEM32(ebp + 0xC);
    edx = eax;
    edi = ebx;
    edx = edx & 0x80;
    edi--;
    if ((edi == 0)) { sub_004C1DBA(); return; } /* je: equal / zero */

loc_004C1D3E: ;
    edi--;
    if ((edi == 0)) goto loc_004C1DA6; /* je: equal / zero */

loc_004C1D41: ;
    edi--;
    if ((edi == 0)) goto loc_004C1D89; /* je: equal / zero */

loc_004C1D44: ;
    edi--;
    if ((edi == 0)) goto loc_004C1D63; /* je: equal / zero */

loc_004C1D47: ;
    (void)0; /* cmp ebx, 1 - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax + 0xFFFFFC14u;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C1D5A: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_004C1D63: ;
    edi = ZX8(MEM8(ecx + 1));
    eax = eax << 8;
    edi = edi | eax;
    eax = ZX8(MEM8(ecx + 2));
    edi = edi << 8;
    edi = edi | eax;
    eax = ZX8(MEM8(ecx + 3));
    ecx = MEM32(ebp + 0x10);
    edi = edi << 8;
    edi = edi | eax;
    MEM32(ecx) = edi;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 4;
    g_seh_ebp = ebp; sub_004C1DC2(); return; /* tail jmp 0x004C1DC2 */

loc_004C1D89: ;
    edi = ZX8(MEM8(ecx + 1));
    eax = eax << 8;
    edi = edi | eax;
    eax = ZX8(MEM8(ecx + 2));
    ecx = MEM32(ebp + 0x10);
    edi = edi << 8;
    edi = edi | eax;
    MEM32(ecx) = edi;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 3;
    g_seh_ebp = ebp; sub_004C1DC2(); return; /* tail jmp 0x004C1DC2 */

loc_004C1DA6: ;
    edi = ZX8(MEM8(ecx + 1));
    ecx = MEM32(ebp + 0x10);
    eax = eax << 8;
    edi = edi | eax;
    MEM32(ecx) = edi;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 2;
    g_seh_ebp = ebp; sub_004C1DC2(); return; /* tail jmp 0x004C1DC2 */

}

/**
 * sub_004C1DD4
 * Original: 0x004C1DD4 - 0x004C1EFD (297 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1DD4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C1DD4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    edi = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_004C1209(); /* call 0x004C1209 */

loc_004C1DF2: ;
    if (TEST_Z(eax, eax)) { sub_004C1EFD(); return; } /* je: equal / zero */

loc_004C1DFA: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C129B(); /* call 0x004C129B */

loc_004C1E08: ;
    if (TEST_Z(eax, eax)) { sub_004C1EFD(); return; } /* je: equal / zero */

loc_004C1E10: ;
    if (CMP_EQ(MEM32(ebp + -8), edi)) goto loc_004C1EC1; /* je: equal / zero */

loc_004C1E19: ;
    ebx = MEM32(ebp + 0x10);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(ebx) = edi;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C119A(); /* call 0x004C119A */

loc_004C1E32: ;
    if (TEST_Z(eax, eax)) { sub_004C1EFD(); return; } /* je: equal / zero */

loc_004C1E3A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C15EA(); /* call 0x004C15EA */

loc_004C1E45: ;
    if (TEST_Z(eax, eax)) goto loc_004C1EB3; /* je: equal / zero */

loc_004C1E49: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C1DD4(); /* call 0x004C1DD4 */

loc_004C1E57: ;
    if (TEST_Z(eax, eax)) { sub_004C1EFD(); return; } /* je: equal / zero */

loc_004C1E5F: ;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0); sub_004C0A61(); /* call 0x004C0A61 */

loc_004C1E66: ;
    PUSH32(esp, MEM32(ebp + -4));
    edi = eax;
    PUSH32(esp, 0); sub_004C0A61(); /* call 0x004C0A61 */

loc_004C1E70: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_004C1EA1; /* je: equal / zero */

loc_004C1E76: ;
    eax = esi + edi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C1694(); /* call 0x004C1694 */

loc_004C1E85: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = eax;
    if (TEST_Z(eax, eax)) { sub_004C1EFD(); return; } /* je: equal / zero */

loc_004C1E8B: ;
    ecx = esi + 1;
    esi = MEM32(ebp + -4);
    edi = edi + eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_004C1EA1: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C15EA(); /* call 0x004C15EA */

loc_004C1EAC: ;
    if (TEST_NZ(eax, eax)) goto loc_004C1E49; /* jne: not equal / not zero */

loc_004C1EB0: ;
    esi = MEM32(ebp + 8);

loc_004C1EB3: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004C1EBF: ;
    g_seh_ebp = ebp; sub_004C1EFF(); return; /* tail jmp 0x004C1EFF */

loc_004C1EC1: ;
    ebx = MEM32(ebp + 0xC);
    eax = ebx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1629(); /* call 0x004C1629 */

loc_004C1ECE: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    edx = MEM32(ebp + 0x10);
    MEM32(edx) = eax;
    if (CMP_EQ(eax, edi)) { sub_004C1EFD(); return; } /* je: equal / zero */

loc_004C1ED7: ;
    esi = MEM32(esi + 0x24);
    edi = eax;
    ecx = ebx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(edx);
    MEM8(ebx + eax) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + ebx;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C1EFF(); return; /* tail jmp 0x004C1EFF */

}

/**
 * sub_004C1F06
 * Original: 0x004C1F06 - 0x004C1F2C (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1F06(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C1F06: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    if (TEST_Z(edx, edx)) { sub_004C1F2C(); return; } /* je: equal / zero */

loc_004C1F11: ;
    ecx = MEM32(eax + 0x24);
    if (CMP_NE(edx, ecx)) goto loc_004C1F1E; /* jne: not equal / not zero */

loc_004C1F18: ;
    MEM8(ecx) = 0;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;

loc_004C1F1E: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx - MEM32(eax + 0x10);
    MEM32(eax + 0x18) = ecx;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C1F34(); return; /* tail jmp 0x004C1F34 */

}

/**
 * sub_004C1F37
 * Original: 0x004C1F37 - 0x004C1FF9 (194 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1F37(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C1F37: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    ebx = eax;
    eax = eax & 0x1FFFFFFF;
    PUSH32(esp, 0x882EC4);
    ebx = ebx >> 0x18;
    PUSH32(esp, eax);
    ebx = ebx & 0xE0;
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0); sub_004C07F7(); /* call 0x004C07F7 */

loc_004C1F60: ;
    esi = MEM32(ebp + 8);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0F1A(); /* call 0x004C0F1A */

loc_004C1F6C: ;
    if (TEST_Z(eax, eax)) { sub_004C1FF9(); return; } /* je: equal / zero */

loc_004C1F74: ;
    if (CMP_NE(edi, 1)) goto loc_004C1F85; /* jne: not equal / not zero */

loc_004C1F79: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = MEM32(esi + 0x24);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    MEM8(ecx) = LO8(eax);
    goto loc_004C1FF1;

loc_004C1F85: ;
    eax = MEM32(esi + 0x24);
    SET_LO8(ebx, LO8(ebx) | 0x1F);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    eax = MEM32(esi + 0x24);
    ecx = edi;
    ecx--;
    ecx--;
    if ((ecx == 0)) goto loc_004C1FE9; /* je: equal / zero */

loc_004C1F99: ;
    ecx--;
    if ((ecx == 0)) goto loc_004C1FD8; /* je: equal / zero */

loc_004C1F9C: ;
    ecx--;
    if ((ecx == 0)) goto loc_004C1FC7; /* je: equal / zero */

loc_004C1F9F: ;
    ecx--;
    if ((ecx == 0)) goto loc_004C1FB6; /* je: equal / zero */

loc_004C1FA2: ;
    ecx--;
    if ((ecx != 0)) goto loc_004C1FF4; /* jne: not equal / not zero */

loc_004C1FA5: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 0x1C;
    SET_LO8(ecx, LO8(ecx) | 0x80);
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    eax = MEM32(esi + 0x24);

loc_004C1FB6: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 0x15;
    SET_LO8(ecx, LO8(ecx) | 0x80);
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    eax = MEM32(esi + 0x24);

loc_004C1FC7: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 0xE;
    SET_LO8(ecx, LO8(ecx) | 0x80);
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    eax = MEM32(esi + 0x24);

loc_004C1FD8: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 7;
    SET_LO8(ecx, LO8(ecx) | 0x80);
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    eax = MEM32(esi + 0x24);

loc_004C1FE9: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    MEM8(eax) = LO8(ecx);

loc_004C1FF1: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_004C1FF4: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C1FFB(); return; /* tail jmp 0x004C1FFB */

}

/**
 * sub_004C2002
 * Original: 0x004C2002 - 0x004C2038 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2002(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C2002: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x882ED8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C07F7(); /* call 0x004C07F7 */

loc_004C2015: ;
    edi = eax;
    eax = edi + esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004C0F1A(); /* call 0x004C0F1A */

loc_004C2024: ;
    if (TEST_Z(eax, eax)) { sub_004C2038(); return; } /* je: equal / zero */

loc_004C2028: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0); sub_004C081B(); /* call 0x004C081B */

loc_004C2033: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C203A(); return; /* tail jmp 0x004C203A */

}

/**
 * sub_004C203F
 * Original: 0x004C203F - 0x004C2083 (68 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C203F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C203F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C1F37(); /* call 0x004C1F37 */

loc_004C204F: ;
    if (TEST_Z(eax, eax)) { sub_004C2083(); return; } /* je: equal / zero */

loc_004C2053: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C2002(); /* call 0x004C2002 */

loc_004C205C: ;
    if (TEST_Z(eax, eax)) { sub_004C2083(); return; } /* je: equal / zero */

loc_004C2060: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x24);
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + eax;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C2085(); return; /* tail jmp 0x004C2085 */

}

/**
 * sub_004C208A
 * Original: 0x004C208A - 0x004C20C5 (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C208A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C208A: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1F37(); /* call 0x004C1F37 */

loc_004C2099: ;
    if (TEST_Z(eax, eax)) { sub_004C20C5(); return; } /* je: equal / zero */

loc_004C209D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C2002(); /* call 0x004C2002 */

loc_004C20A5: ;
    if (TEST_Z(eax, eax)) { sub_004C20C5(); return; } /* je: equal / zero */

loc_004C20A9: ;
    (void)0; /* cmp MEM8(esp + 0x10), 0 - flags set for next jcc */
    ecx = MEM32(esi + 0x24);
    SET_LO8(eax, (CMP_EQ(MEM8(esp + 0x10), 0)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    eax = eax & 0xFF;
    MEM8(ecx) = LO8(eax);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C20C7(); return; /* tail jmp 0x004C20C7 */

}

/**
 * sub_004C20CB
 * Original: 0x004C20CB - 0x004C214C (129 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C20CB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C20CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1F37(); /* call 0x004C1F37 */

loc_004C20DC: ;
    if (TEST_Z(eax, eax)) { sub_004C214C(); return; } /* je: equal / zero */

loc_004C20E0: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, 0x882EE8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C07F7(); /* call 0x004C07F7 */

loc_004C20F1: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C2002(); /* call 0x004C2002 */

loc_004C20FA: ;
    if (TEST_Z(eax, eax)) { sub_004C214C(); return; } /* je: equal / zero */

loc_004C20FE: ;
    eax = edi;
    eax--;
    if ((eax == 0)) goto loc_004C213F; /* je: equal / zero */

loc_004C2103: ;
    eax--;
    if ((eax == 0)) goto loc_004C2132; /* je: equal / zero */

loc_004C2106: ;
    eax--;
    if ((eax == 0)) goto loc_004C2125; /* je: equal / zero */

loc_004C2109: ;
    eax--;
    if ((eax == 0)) goto loc_004C2118; /* je: equal / zero */

loc_004C210C: ;
    eax--;
    if ((eax != 0)) goto loc_004C2147; /* jne: not equal / not zero */

loc_004C210F: ;
    eax = MEM32(esi + 0x24);
    MEM8(eax) = 0;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_004C2118: ;
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    eax = eax >> 0x18;
    MEM8(ecx) = LO8(eax);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_004C2125: ;
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    eax = eax >> 0x10;
    MEM8(ecx) = LO8(eax);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_004C2132: ;
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    eax = eax >> 8;
    MEM8(ecx) = LO8(eax);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_004C213F: ;
    eax = MEM32(esi + 0x24);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_004C2147: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C214E(); return; /* tail jmp 0x004C214E */

}

/**
 * sub_004C2154
 * Original: 0x004C2154 - 0x004C2176 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2154(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C2154: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    if (TEST_NZ(eax, eax)) { sub_004C2176(); return; } /* jne: not equal / not zero */

loc_004C2164: ;
    PUSH32(esp, 0xFFFFFC15u);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C2171: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_004C21EF(); return; /* tail jmp 0x004C21EF */

}

/**
 * sub_004C228D
 * Original: 0x004C228D - 0x004C22AE (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C228D(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C228D: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0); sub_004C2154(); /* call 0x004C2154 */

loc_004C22A4: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_004C22AB; /* jne: not equal / not zero */

loc_004C22A9: ;
    eax = 0; /* xor self */

loc_004C22AB: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C22AE
 * Original: 0x004C22AE - 0x004C22C4 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C22AE(void)
{

loc_004C22AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004C228D(); /* call 0x004C228D */

loc_004C22C1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C22C4
 * Original: 0x004C22C4 - 0x004C2315 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C22C4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C22C4: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax | 0x20000000;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1F37(); /* call 0x004C1F37 */

loc_004C22D9: ;
    if (TEST_Z(eax, eax)) { sub_004C2315(); return; } /* je: equal / zero */

loc_004C22DD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0F1A(); /* call 0x004C0F1A */

loc_004C22E5: ;
    if (TEST_Z(eax, eax)) { sub_004C2315(); return; } /* je: equal / zero */

loc_004C22E9: ;
    (void)0; /* cmp MEM32(esi + 0x2C), 0x200 - flags set for next jcc */
    eax = MEM32(esi + 0x24);
    if (CMP_EQ(MEM32(esi + 0x2C), 0x200)) goto loc_004C2303; /* je: equal / zero */

loc_004C22F5: ;
    eax = eax - MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    goto loc_004C2310;

loc_004C2303: ;
    MEM8(eax) = 0x80;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    MEM32(eax) = MEM32(eax) & 0;

loc_004C2310: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C2317(); return; /* tail jmp 0x004C2317 */

}

/**
 * sub_004C231B
 * Original: 0x004C231B - 0x004C23AB (144 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C231B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C231B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(esi + 0x2C), 0x200 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(esi + 0x2C), 0x200)) goto loc_004C2389; /* je: equal / zero */

loc_004C232D: ;
    edi = MEM32(esi + 0x10);
    edi = edi + MEM32(ebp + 0xC);
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, 4);
    ebx = ebx - edi;
    PUSH32(esp, 0x882ED8);
    ebx--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C07F7(); /* call 0x004C07F7 */

loc_004C2346: ;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(eax, 1)) goto loc_004C2352; /* jne: not equal / not zero */

loc_004C234E: ;
    MEM8(edi) = LO8(ebx);
    goto loc_004C23A6;

loc_004C2352: ;
    eax--;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0F1A(); /* call 0x004C0F1A */

loc_004C235A: ;
    if (TEST_Z(eax, eax)) { sub_004C23AB(); return; } /* je: equal / zero */

loc_004C235E: ;
    edi = MEM32(esi + 0x10);
    edi = edi + MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    eax = edi + 1;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004C2374: ;
    esp = esp + 0xC;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 0x24) = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C081B(); /* call 0x004C081B */

loc_004C2384: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + ebx;
    goto loc_004C23A6;

loc_004C2389: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0F1A(); /* call 0x004C0F1A */

loc_004C2391: ;
    if (TEST_Z(eax, eax)) { sub_004C23AB(); return; } /* je: equal / zero */

loc_004C2395: ;
    eax = esi + 0x24;
    ecx = MEM32(eax);
    MEM8(ecx) = 0;
    MEM32(eax) = MEM32(eax) + 1;
    ecx = MEM32(eax);
    MEM8(ecx) = 0;
    MEM32(eax) = MEM32(eax) + 1;

loc_004C23A6: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C23AD(); return; /* tail jmp 0x004C23AD */

}

/**
 * sub_004C23B4
 * Original: 0x004C23B4 - 0x004C23B9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C23B4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C23B4: ;
    g_seh_ebp = ebp; sub_004C1629(); return; /* tail jmp 0x004C1629 */

}

/**
 * sub_004C23B9
 * Original: 0x004C23B9 - 0x004C24E7 (302 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C23B9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C23B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(esi, edi)) { sub_004C24E7(); return; } /* je: equal / zero */

loc_004C23CC: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A78(); /* call 0x004C0A78 */

loc_004C23D3: ;
    ebx = MEM32(ebp + 0x14);
    if (TEST_Z(LO8(ebx), 8)) goto loc_004C23F0; /* je: equal / zero */

loc_004C23DB: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 8;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x14) = eax;
    goto loc_004C241D;

loc_004C23F0: ;
    eax = MEM32(esi + 0x30);
    ecx = eax;
    ecx = ecx | ebx;
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_004C240D; /* je: equal / zero */

loc_004C23FC: ;
    eax = eax & 0xFFFFFFF7u;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x14) = edi;
    goto loc_004C241D;

loc_004C240D: ;
    if (TEST_NZ(LO8(ebx), 4)) goto loc_004C2417; /* jne: not equal / not zero */

loc_004C2412: ;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_004C2423; /* jne: not equal / not zero */

loc_004C2417: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x24) = eax;

loc_004C241D: ;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x20) = edi;

loc_004C2423: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(ebp + 0x10);
    if (CMP_AE(ecx, MEM32(eax + 0xC))) goto loc_004C24DA; /* jae: above or equal (unsigned >=) */

loc_004C2432: ;
    edx = MEM32(esi + 0x2C);
    if (TEST_Z(LO8(edx), 3)) goto loc_004C245A; /* je: equal / zero */

loc_004C243A: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + ecx * 4);
    if (CMP_EQ(ecx, edi)) goto loc_004C24DA; /* je: equal / zero */

loc_004C2448: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004C244E: ;
    if (TEST_Z(eax, eax)) goto loc_004C247C; /* je: equal / zero */

loc_004C2452: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C172D(); /* call 0x004C172D */

loc_004C2458: ;
    goto loc_004C248F;

loc_004C245A: ;
    if (TEST_Z(HI8(edx), 7)) goto loc_004C24D3; /* je: equal / zero */

loc_004C245F: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + ecx * 4);
    if (CMP_EQ(ecx, edi)) goto loc_004C24DA; /* je: equal / zero */

loc_004C2469: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004C2470: ;
    if (TEST_Z(eax, eax)) goto loc_004C247C; /* je: equal / zero */

loc_004C2474: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1F06(); /* call 0x004C1F06 */

loc_004C247A: ;
    goto loc_004C248F;

loc_004C247C: ;
    eax = MEM32(esi + 0x34);
    if (CMP_L(MEM32(eax + 0x1C), edi)) goto loc_004C248F; /* jl: less (signed <) */

loc_004C2484: ;
    PUSH32(esp, 0xFFFFFC15u);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A78(); /* call 0x004C0A78 */

loc_004C248F: ;
    eax = MEM32(esi + 0x34);
    if (CMP_GE(MEM32(eax + 0x1C), edi)) goto loc_004C24CB; /* jge: greater or equal (signed >=) */

loc_004C2497: ;
    eax = MEM32(esi + 0x30);
    eax = eax | ebx;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_004C24AF; /* je: equal / zero */

loc_004C24A0: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x14) = edi;

loc_004C24AF: ;
    eax = MEM32(esi + 0x38);
    if (CMP_EQ(eax, edi)) goto loc_004C24C8; /* je: equal / zero */

loc_004C24B6: ;
    edx = MEM32(eax + 0x38);
    PUSH32(esp, eax);
    MEM32(eax + 0x34) = eax;
    PUSH32(esp, 0); sub_004C075C(); /* call 0x004C075C */

loc_004C24C2: ;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    eax = edx;
    if (CMP_NE(edx, edi)) goto loc_004C24B6; /* jne: not equal / not zero */

loc_004C24C8: ;
    MEM32(esi + 0x38) = edi;

loc_004C24CB: ;
    eax = MEM32(esi + 0x34);
    eax = MEM32(eax + 0x1C);
    g_seh_ebp = ebp; sub_004C24EC(); return; /* tail jmp 0x004C24EC */

loc_004C24D3: ;
    PUSH32(esp, 0xFFFFFC0Bu);
    goto loc_004C24DF;

loc_004C24DA: ;
    PUSH32(esp, 0xFFFFFC10u);

loc_004C24DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C0A78(); /* call 0x004C0A78 */

loc_004C24E5: ;
    g_seh_ebp = ebp; sub_004C24EC(); return; /* tail jmp 0x004C24EC */

}

/**
 * sub_004C24F3
 * Original: 0x004C24F3 - 0x004C2535 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C24F3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C24F3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1DD4(); /* call 0x004C1DD4 */

loc_004C250A: ;
    if (TEST_Z(eax, eax)) goto loc_004C252F; /* je: equal / zero */

loc_004C250E: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004C0C65(); /* call 0x004C0C65 */

loc_004C2519: ;
    if (TEST_Z(eax, eax)) goto loc_004C2522; /* je: equal / zero */

loc_004C251D: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_004C2531;

loc_004C2522: ;
    PUSH32(esp, 0xFFFFFC15u);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C0A95(); /* call 0x004C0A95 */

loc_004C252F: ;
    eax = 0; /* xor self */

loc_004C2531: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C2535
 * Original: 0x004C2535 - 0x004C25F7 (194 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2535(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C2535: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    esi = 0x3E8;
    if (CMP_A(edi, esi)) goto loc_004C2588; /* ja: above (unsigned >) */

loc_004C254A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C1F37(); /* call 0x004C1F37 */

loc_004C2553: ;
    if (TEST_Z(eax, eax)) { sub_004C25F7(); return; } /* je: equal / zero */

loc_004C255B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C2002(); /* call 0x004C2002 */

loc_004C2562: ;
    if (TEST_Z(eax, eax)) { sub_004C25F7(); return; } /* je: equal / zero */

loc_004C256A: ;
    esi = MEM32(ebp + 0x14);
    ecx = edi;
    edi = MEM32(ebx + 0x24);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + eax;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C25F9(); return; /* tail jmp 0x004C25F9 */

loc_004C2588: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004C2595: ;
    if (TEST_Z(eax, eax)) { sub_004C25F7(); return; } /* je: equal / zero */

loc_004C2599: ;
    if (TEST_Z(edi, edi)) goto loc_004C25EC; /* je: equal / zero */

loc_004C259D: ;
    goto loc_004C25A7;

loc_004C259F: ;
    edi = MEM32(ebp + 0x10);
    esi = 0x3E8;

loc_004C25A7: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM32(ebp + 0xC) = esi;
    if (CMP_A(edi, esi)) goto loc_004C25B1; /* ja: above (unsigned >) */

loc_004C25AE: ;
    MEM32(ebp + 0xC) = edi;

loc_004C25B1: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C1F37(); /* call 0x004C1F37 */

loc_004C25B9: ;
    if (TEST_Z(eax, eax)) { sub_004C25F7(); return; } /* je: equal / zero */

loc_004C25BD: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C2002(); /* call 0x004C2002 */

loc_004C25C6: ;
    if (TEST_Z(eax, eax)) { sub_004C25F7(); return; } /* je: equal / zero */

loc_004C25CA: ;
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebx + 0x24);
    esi = MEM32(ebp + 0x14);
    eax = ecx;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + eax;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_004C259F; /* jne: not equal / not zero */

loc_004C25EC: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C231B(); /* call 0x004C231B */

loc_004C25F5: ;
    g_seh_ebp = ebp; sub_004C25F9(); return; /* tail jmp 0x004C25F9 */

}

/**
 * sub_004C2600
 * Original: 0x004C2600 - 0x004C2673 (115 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C2600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = edi + 7;
    esi = esi >> 3;
    PUSH32(esp, ebx);
    MEM32(ebp + 0x10) = esi;
    PUSH32(esp, 0); sub_004C1F37(); /* call 0x004C1F37 */

loc_004C261E: ;
    if (TEST_Z(eax, eax)) { sub_004C2673(); return; } /* je: equal / zero */

loc_004C2622: ;
    eax = esi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C2002(); /* call 0x004C2002 */

loc_004C262C: ;
    if (TEST_Z(eax, eax)) { sub_004C2673(); return; } /* je: equal / zero */

loc_004C2630: ;
    ecx = MEM32(ebx + 0x24);
    edi--;
    PUSH32(esp, 7);
    POP32(esp, eax);
    edi = edi & eax;
    eax = eax - edi;
    MEM8(ecx) = LO8(eax);
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + 1;
    edi = MEM32(ebx + 0x24);
    ecx = esi;
    esi = MEM32(ebp + 0x14);
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = edx;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(ebx + 0x24);
    if (TEST_Z(eax, eax)) goto loc_004C266E; /* je: equal / zero */

loc_004C2662: ;
    ecx = 0x882EB4;
    ecx = ecx - eax;
    SET_LO8(eax, MEM8(ecx));
    MEM8(ebx + -1) = MEM8(ebx + -1) & LO8(eax);

loc_004C266E: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004C2675(); return; /* tail jmp 0x004C2675 */

}

/**
 * sub_004C267C
 * Original: 0x004C267C - 0x004C26AC (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C267C(void)
{
    uint32_t ebp;

loc_004C267C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM8(ebp + -32) = 0;
    PUSH32(esp, 0); sub_004C0AF1(); /* call 0x004C0AF1 */

loc_004C2692: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C0A61(); /* call 0x004C0A61 */

loc_004C269C: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C2535(); /* call 0x004C2535 */

loc_004C26A8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C26AC
 * Original: 0x004C26AC - 0x004C2785 (217 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C26AC(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C26AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C1F37(); /* call 0x004C1F37 */

loc_004C26BC: ;
    if (TEST_Z(eax, eax)) goto loc_004C26F1; /* je: equal / zero */

loc_004C26C0: ;
    ebx = MEM32(esp + 0x14);
    if (CMP_L(ebx, 0xFFFF8000u)) goto loc_004C271A; /* jl: less (signed <) */

loc_004C26CC: ;
    if (CMP_GE(ebx, 0x8000)) goto loc_004C271A; /* jge: greater or equal (signed >=) */

loc_004C26D4: ;
    if (CMP_L(ebx, 0xFFFFFF80u)) goto loc_004C26F8; /* jl: less (signed <) */

loc_004C26D9: ;
    if (CMP_GE(ebx, 0x80)) goto loc_004C26F8; /* jge: greater or equal (signed >=) */

loc_004C26E1: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C2002(); /* call 0x004C2002 */

loc_004C26E9: ;
    if (TEST_NZ(eax, eax)) goto loc_004C2775; /* jne: not equal / not zero */

loc_004C26F1: ;
    eax = 0; /* xor self */

loc_004C26F3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_004C26F8: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C2002(); /* call 0x004C2002 */

loc_004C2700: ;
    if (TEST_Z(eax, eax)) goto loc_004C26F1; /* je: equal / zero */

loc_004C2704: ;
    eax = esi + 0x24;
    edx = MEM32(eax);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(edx) = LO8(ecx);
    MEM32(eax) = MEM32(eax) + 1;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(ebx);
    MEM32(eax) = MEM32(eax) + 1;
    goto loc_004C277D;

loc_004C271A: ;
    if (CMP_L(ebx, 0xFF800000u)) goto loc_004C2742; /* jl: less (signed <) */

loc_004C2722: ;
    if (CMP_GE(ebx, 0x800000)) goto loc_004C2742; /* jge: greater or equal (signed >=) */

loc_004C272A: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C2002(); /* call 0x004C2002 */

loc_004C2732: ;
    if (TEST_Z(eax, eax)) goto loc_004C26F1; /* je: equal / zero */

loc_004C2736: ;
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    MEM8(ecx) = LO8(eax);
    goto loc_004C2765;

loc_004C2742: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C2002(); /* call 0x004C2002 */

loc_004C274A: ;
    if (TEST_Z(eax, eax)) goto loc_004C26F1; /* je: equal / zero */

loc_004C274E: ;
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax >> 0x18);
    MEM8(ecx) = LO8(eax);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    eax = MEM32(esi + 0x24);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    MEM8(eax) = LO8(ecx);

loc_004C2765: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    eax = MEM32(esi + 0x24);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx >> 8);
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_004C2775: ;
    eax = MEM32(esi + 0x24);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_004C277D: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_004C26F3;

}

/**
 * sub_004C2785
 * Original: 0x004C2785 - 0x004C27DC (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2785(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C2785: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi);
    PUSH32(esp, 0x1E);
    POP32(esp, ecx);
    if (CMP_B(edx, ecx)) goto loc_004C27D5; /* jb: below (unsigned <) */

loc_004C2794: ;
    eax = MEM32(esp + 0xC);
    ecx = ZX16(MEM16(eax + 0x1C));
    ecx = ecx + 0x1E;
    if (CMP_A(ecx, edx)) goto loc_004C27D5; /* ja: above (unsigned >) */

loc_004C27A3: ;
    esi = ZX16(MEM16(eax));
    esi--;
    if ((esi == 0)) goto loc_004C27C0; /* je: equal / zero */

loc_004C27A9: ;
    esi--;
    if ((esi == 0)) goto loc_004C27B1; /* je: equal / zero */

loc_004C27AC: ;
    PUSH32(esp, 0x32);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_004C27E0(); return; /* tail jmp 0x004C27E0 */

loc_004C27B1: ;
    eax = eax + ecx;
    ecx = ecx + 0xA;
    if (CMP_A(ecx, edx)) goto loc_004C27D5; /* ja: above (unsigned >) */

loc_004C27BA: ;
    eax = ZX16(MEM16(eax + 8));
    goto loc_004C27CD;

loc_004C27C0: ;
    eax = eax + ecx;
    ecx = ecx + 0x16;
    if (CMP_A(ecx, edx)) goto loc_004C27D5; /* ja: above (unsigned >) */

loc_004C27C9: ;
    eax = ZX16(MEM16(eax + 0x14));

loc_004C27CD: ;
    ecx = ecx + eax;
    if (CMP_A(ecx, edx)) goto loc_004C27D5; /* ja: above (unsigned >) */

loc_004C27D3: ;
    if (CMP_EQ(ecx, edx)) { sub_004C27DC(); return; } /* je: equal / zero */

loc_004C27D5: ;
    eax = 0x8015C005u;
    g_seh_ebp = ebp; sub_004C27DE(); return; /* tail jmp 0x004C27DE */

}

/**
 * sub_004C27E5
 * Original: 0x004C27E5 - 0x004C27F9 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C27E5(void)
{

loc_004C27E5: ;
    eax = MEM32(esp + 4);
    ecx = eax + 0x18;
    PUSH32(esp, ecx);
    eax = eax + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C2785(); /* call 0x004C2785 */

loc_004C27F6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C27F9
 * Original: 0x004C27F9 - 0x004C280E (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C27F9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C27F9: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x18);
    if (CMP_BE(eax, 0x198)) { sub_004C280E(); return; } /* jbe: below or equal (unsigned <=) */

loc_004C2807: ;
    eax = 0x8015C005u;
    g_seh_ebp = ebp; sub_004C2819(); return; /* tail jmp 0x004C2819 */

}

/**
 * sub_004C281C
 * Original: 0x004C281C - 0x004C282E (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C281C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C281C: ;
    if (CMP_BE(MEM32(esp + 4), 0)) { sub_004C282E(); return; } /* jbe: below or equal (unsigned <=) */

loc_004C2823: ;
    if (CMP_A(MEM32(esp + 4), 5)) { sub_004C282E(); return; } /* ja: above (unsigned >) */

loc_004C282A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004C2833(); return; /* tail jmp 0x004C2833 */

}

/**
 * sub_004C2836
 * Original: 0x004C2836 - 0x004C2A53 (541 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2836(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C2836: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = edx;
    ecx = eax + 1;
    PUSH32(esp, edi);

loc_004C284C: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_004C284C; /* jne: not equal / not zero */

loc_004C2853: ;
    eax = eax - ecx;
    (void)0; /* cmp MEM32(ebp + 8), 3 - flags set for next jcc */
    edi = eax;
    if (CMP_NE(MEM32(ebp + 8), 3)) goto loc_004C2860; /* jne: not equal / not zero */

loc_004C285D: ;
    edx = 0; /* xor self */
    edx++;

loc_004C2860: ;
    esi = MEM32(ebp + 0x34);
    (void)0; /* cmp MEM32(esi), 0x1E - flags set for next jcc */
    ebx = MEM32(ebp + 0x30);
    if (CMP_B(MEM32(esi), 0x1E)) goto loc_004C28D4; /* jb: below (unsigned <) */

loc_004C286B: ;
    SET_LO16(eax, MEM16(ebp + 0xC));
    ecx = MEM32(ebp + -4);
    MEM16(ebx) = LO16(eax);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    MEM16(ebx + 2) = 1;
    MEM32(ebx + 4) = 0xF;
    MEM32(ebx + 8) = edx;
    PUSH32(esp, 0); sub_004A073A(); /* call 0x004A073A */

loc_004C288E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004A10E2(); /* call 0x004A10E2 */

loc_004C2896: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x30) = eax;
    if (TEST_NZ(eax, eax)) goto loc_004C28A7; /* jne: not equal / not zero */

loc_004C289D: ;
    eax = 0x80150003u;
    goto loc_004C2A4C;

loc_004C28A7: ;
    if (CMP_B(MEM32(ebp + 0x10), 4)) goto loc_004C28B7; /* jb: below (unsigned <) */

loc_004C28AD: ;
    eax = 0x80151006u;
    goto loc_004C2A4C;

loc_004C28B7: ;
    ecx = MEM32(ebp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = eax + ecx;
    ecx = MEM32(eax);
    MEM32(ebx + 0xC) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x10) = ecx;
    SET_LO8(eax, MEM8(eax + 9));
    MEM8(ebp + 0xB) = LO8(eax);
    MEM16(ebx + 0x1C) = LO16(edi);

loc_004C28D4: ;
    edx = edi + 0x1E;
    (void)0; /* cmp edx, MEM32(esi) - flags set for next jcc */
    eax = ebx + 0x1E;
    if (CMP_A(edx, MEM32(esi))) goto loc_004C28F6; /* ja: above (unsigned >) */

loc_004C28DE: ;
    esi = MEM32(ebp + 0x14);
    ecx = edi;
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + 0x34);

loc_004C28F6: ;
    (void)0; /* cmp MEM16(ebp + 0xC), 1 - flags set for next jcc */
    ecx = edx + ebx;
    if (CMP_NE(MEM16(ebp + 0xC), 1)) goto loc_004C2929; /* jne: not equal / not zero */

loc_004C2900: ;
    edx = edx + 0x16;
    if (CMP_A(edx, MEM32(esi))) goto loc_004C293B; /* ja: above (unsigned >) */

loc_004C2907: ;
    eax = 0; /* xor self */
    edi = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    edi = MEM32(ebp + 0x28);
    eax = MEM32(edi);
    MEM32(ecx + 8) = eax;
    eax = MEM32(edi + 4);
    MEM16(ecx + 0x14) = MEM16(ecx + 0x14) & 0;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = 0x5F5E100;
    goto loc_004C293E;

loc_004C2929: ;
    edx = edx + 0xA;
    if (CMP_A(edx, MEM32(esi))) goto loc_004C293B; /* ja: above (unsigned >) */

loc_004C2930: ;
    eax = 0; /* xor self */
    edi = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(ecx + 8) = MEM16(ecx + 8) & 0;

loc_004C293B: ;
    edi = MEM32(ebp + 0x28);

loc_004C293E: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax--;
    if ((eax == 0)) goto loc_004C29C2; /* je: equal / zero */

loc_004C2945: ;
    eax--;
    if ((eax == 0)) goto loc_004C2952; /* je: equal / zero */

loc_004C2948: ;
    eax--;
    if ((eax == 0)) goto loc_004C2996; /* je: equal / zero */

loc_004C294B: ;
    eax--;
    if ((eax != 0)) goto loc_004C2A3C; /* jne: not equal / not zero */

loc_004C2952: ;
    ebx = ebx + edx;
    edx = edx + 0x19;
    if (CMP_A(edx, MEM32(esi))) goto loc_004C2A40; /* ja: above (unsigned >) */

loc_004C295F: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x1850);
    MEM32(ebx) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 4) = eax;
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(ebx + 8) = LO8(eax);
    eax = MEM32(ebp + 0x20);
    MEM32(ebx + 9) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(ebx + 0xD) = eax;
    if (TEST_Z(edi, edi)) goto loc_004C29B9; /* je: equal / zero */

loc_004C2986: ;
    eax = MEM32(edi);
    MEM32(ebx + 0x11) = eax;
    eax = MEM32(edi + 4);
    MEM32(ebx + 0x15) = eax;
    goto loc_004C2A3C;

loc_004C2996: ;
    ebx = ebx + edx;
    edx = edx + 8;
    if (CMP_A(edx, MEM32(esi))) goto loc_004C2A40; /* ja: above (unsigned >) */

loc_004C29A3: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x1850);
    MEM32(ebx) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 4) = eax;
    goto loc_004C2A3C;

loc_004C29B9: ;
    eax = 0; /* xor self */
    edi = ebx + 0x11;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    goto loc_004C2A3C;

loc_004C29C2: ;
    ebx = ebx + edx;
    edx = edx + 0x90;
    if (CMP_A(edx, MEM32(esi))) goto loc_004C2A40; /* ja: above (unsigned >) */

loc_004C29CE: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x1850);
    edi = MEM32(ebp + 0x10);
    MEM32(ebx) = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    eax = MEM32(eax + 8);
    MEM32(ebx + 4) = eax;
    SET_LO8(eax, MEM8(ebp + 0x18));
    MEM8(ebx + 9) = LO8(eax);
    eax = MEM32(ebp + 0x1C);
    MEM32(ebx + 0xA) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebx + 0x86) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(ebx + 0x8C) = eax;
    eax = MEM32(ebp + 0x30);
    SET_LO8(eax, MEM8(edi + eax + 9));
    MEM16(ebx + 0x8A) = MEM16(ebx + 0x8A) & 0;
    (void)0; /* cmp MEM32(ebp + 0x2C), 0 - flags set for next jcc */
    MEM8(ebx + 8) = LO8(eax);
    edi = ebx + 0xE;
    if (CMP_EQ(MEM32(ebp + 0x2C), 0)) goto loc_004C2A2B; /* je: equal / zero */

loc_004C2A1E: ;
    esi = MEM32(ebp + 0x2C);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0x34);
    goto loc_004C2A32;

loc_004C2A2B: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */

loc_004C2A32: ;
    PUSH32(esp, 0x19);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebx + 0x22;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_004C2A3C: ;
    if (CMP_BE(edx, MEM32(esi))) goto loc_004C2A47; /* jbe: below or equal (unsigned <=) */

loc_004C2A40: ;
    MEM32(ebp + -8) = 0x8007007Au;

loc_004C2A47: ;
    eax = MEM32(ebp + -8);
    MEM32(esi) = edx;

loc_004C2A4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 52; return; /* ret 48 */

}

/**
 * sub_004C2A53
 * Original: 0x004C2A53 - 0x004C2A95 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2A53(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C2A53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, 0); sub_004C2FAF(); /* call 0x004C2FAF */

loc_004C2A68: ;
    if (TEST_S(eax, eax)) goto loc_004C2A90; /* jl: less (signed <) */

loc_004C2A6C: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ecx, MEM16(ebp + -8));
    MEM16(eax + 0xA) = MEM16(eax + 0xA) & 0;
    MEM16(eax + 8) = LO16(ecx);
    MEM32(eax) = 0xF;
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    PUSH32(esp, 0); sub_004C350D(); /* call 0x004C350D */

loc_004C2A90: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C2A95
 * Original: 0x004C2A95 - 0x004C2C0C (375 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2A95(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C2A95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(eax, esi)) goto loc_004C2AF0; /* je: equal / zero */

loc_004C2AB2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004C2AB8: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(eax, esi)) goto loc_004C2AF0; /* je: equal / zero */

loc_004C2ABF: ;
    if (CMP_L(eax, esi)) goto loc_004C2C02; /* jl: less (signed <) */

loc_004C2AC7: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = edi;
    PUSH32(esp, 0); sub_004C2A53(); /* call 0x004C2A53 */

loc_004C2AD8: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, esi)) goto loc_004C2C02; /* jl: less (signed <) */

loc_004C2AE3: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004C2AED: ;
    MEM32(ebx + 0xC) = esi;

loc_004C2AF0: ;
    eax = MEM32(ebx + 0x10);
    if (CMP_EQ(eax, esi)) goto loc_004C2BF1; /* je: equal / zero */

loc_004C2AFB: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004C2B03: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(eax, esi)) goto loc_004C2BF1; /* je: equal / zero */

loc_004C2B0E: ;
    if (CMP_L(eax, esi)) goto loc_004C2C02; /* jl: less (signed <) */

loc_004C2B16: ;
    eax = MEM32(ebx + 0x24);
    ecx = MEM32(ebx + 0x28);
    esi = MEM32(ebx + 0x14);
    ecx = ecx - eax;
    MEM32(ebp + 8) = ecx;
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x20);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x18);
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    ecx = edi;
    MEM32(ebp + -12) = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C016C(); /* call 0x004C016C */

loc_004C2B41: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_004C2C02; /* jl: less (signed <) */

loc_004C2B4C: ;
    PUSH32(esp, MEM32(ebx + 0x10));
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004C2B56: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    eax = MEM32(ebx + 0x24);
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0xEC);
    edx = 0; /* xor self */
    eax = eax + MEM32(esi + 0xE8);
    ecx = ecx + edx + _cf; /* adc */
    edx = MEM32(ebp + 8);
    edi = 0; /* xor self */
    eax = eax + edx;
    edx = MEM32(esi + 0xB4);
    ecx = ecx + edi + _cf; /* adc */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = esi + 0xA8;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xB0));
    MEM32(edi) = edx;
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(ebx + 0x1C));
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, 0); sub_004B4936(); /* call 0x004B4936 */

loc_004C2BA5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_004C2C02; /* jl: less (signed <) */

loc_004C2BAC: ;
    ecx = MEM32(ebx + 0x24);
    ecx = ecx + MEM32(ebp + 8);
    edi = MEM32(edi);
    edx = MEM32(ebp + -12);
    edi = edi + MEM32(edx + 0xB0);
    esi = MEM32(ebx + 0x20);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x24);
    ecx = ecx + MEM32(ebp + 8);
    eax = edx + 0xA8;
    MEM32(eax) = MEM32(eax) + ecx;
    eax = MEM32(eax);
    if (CMP_BE(eax, MEM32(edx + 0xB4))) goto loc_004C2BEF; /* jbe: below or equal (unsigned <=) */

loc_004C2BE6: ;
    MEM32(ebp + -4) = 0x8007007Au;
    goto loc_004C2C02;

loc_004C2BEF: ;
    esi = 0; /* xor self */

loc_004C2BF1: ;
    if (CMP_NE(MEM32(ebx + 0xC), esi)) goto loc_004C2C02; /* jne: not equal / not zero */

loc_004C2BF6: ;
    if (CMP_NE(MEM32(ebx + 0x10), esi)) goto loc_004C2C02; /* jne: not equal / not zero */

loc_004C2BFB: ;
    MEM32(ebp + -4) = 0x1500F0;

loc_004C2C02: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C2C47
 * Original: 0x004C2C47 - 0x004C2CE4 (157 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2C47(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C2C47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), 3 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = eax;
    MEM32(esi) = ebx;
    if (CMP_NE(MEM32(ebp + 8), 3)) goto loc_004C2CD9; /* jne: not equal / not zero */

loc_004C2C67: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + 0x14) = 1;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) << LO8(ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004C016C(); /* call 0x004C016C */

loc_004C2C83: ;
    ebx = eax;
    if (CMP_NE(ebx, 0x80152102u)) goto loc_004C2CB1; /* jne: not equal / not zero */

loc_004C2C8D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_004C06B0(); /* call 0x004C06B0 */

loc_004C2CA4: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_004C2CC1; /* jl: less (signed <) */

loc_004C2CAA: ;
    ebx = 0x80152102u;
    goto loc_004C2CDB;

loc_004C2CB1: ;
    if (TEST_S(ebx, ebx)) goto loc_004C2CC1; /* jl: less (signed <) */

loc_004C2CB5: ;
    eax = MEM32(ebp + -8);
    if (CMP_BE(MEM32(edi), eax)) goto loc_004C2CD5; /* jbe: below or equal (unsigned <=) */

loc_004C2CBC: ;
    ebx = 0x8007007Au;

loc_004C2CC1: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_004C2CDB; /* je: equal / zero */

loc_004C2CC7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004C2CD0: ;
    MEM32(esi) = MEM32(esi) & 0;
    goto loc_004C2CDB;

loc_004C2CD5: ;
    ebx = 0; /* xor self */
    goto loc_004C2CDB;

loc_004C2CD9: ;
    MEM32(edi) = ebx;

loc_004C2CDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004C2D39
 * Original: 0x004C2D39 - 0x004C2D51 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2D39(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C2D39: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(ecx, ebx)) { sub_004C2D51(); return; } /* jne: not equal / not zero */

loc_004C2D47: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004C2F29(); return; /* tail jmp 0x004C2F29 */

}

/**
 * sub_004C2FAF
 * Original: 0x004C2FAF - 0x004C2FBA (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2FAF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C2FAF: ;
    if (TEST_NZ(ecx, ecx)) { sub_004C2FBA(); return; } /* jne: not equal / not zero */

loc_004C2FB3: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004C2FD8(); return; /* tail jmp 0x004C2FD8 */

}

/**
 * sub_004C3045
 * Original: 0x004C3045 - 0x004C3077 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3045(void)
{

loc_004C3045: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = eax + 2;
    PUSH32(esp, 0x2F);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470133(); /* call 0x00470133 */

loc_004C3055: ;
    esi = eax;
    esi++;
    esi++;
    PUSH32(esp, 0x2F);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00470133(); /* call 0x00470133 */

loc_004C3061: ;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x24));
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_004C3070: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3558
 * Original: 0x004C3558 - 0x004C3570 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3558(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C3558: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (TEST_NZ(ebx, ebx)) { sub_004C3570(); return; } /* jne: not equal / not zero */

loc_004C3566: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004C3664(); return; /* tail jmp 0x004C3664 */

}

/**
 * sub_004C3680
 * Original: 0x004C3680 - 0x004C369F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3680(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C3680: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, eax)) goto loc_004C369C; /* je: equal / zero */

loc_004C368A: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;

loc_004C369C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C369F
 * Original: 0x004C369F - 0x004C36B0 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C369F(void)
{

loc_004C369F: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004C36AF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C36B0
 * Original: 0x004C36B0 - 0x004C36D2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C36B0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C36B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(0x24));
    SET_LO8(ecx, 2);
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(esi + 4) = eax;
    if ((eax == 0)) goto loc_004C36D0; /* je: equal / zero */

loc_004C36C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561204), _icall_esp); /* indirect call */
    }

loc_004C36CE: ;
    MEM8(esi) = LO8(eax);

loc_004C36D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C36D2
 * Original: 0x004C36D2 - 0x004C36E9 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C36D2(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C36D2: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 4), 0)) goto loc_004C36E7; /* je: equal / zero */

loc_004C36DB: ;
    SET_LO8(ecx, MEM8(esi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004C36E3: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;

loc_004C36E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C36E9
 * Original: 0x004C36E9 - 0x004C370E (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C36E9(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C36E9: ;
    eax = MEM32(0x58);
    if (TEST_Z(eax, eax)) goto loc_004C370D; /* je: equal / zero */

loc_004C36F3: ;
    eax = MEM32(0x4E1620);
    MEM32(0x4E1620) = MEM32(0x4E1620) + 1;
    if (TEST_NZ(eax, eax)) goto loc_004C370D; /* jne: not equal / not zero */

loc_004C3702: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1CF4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F8), _icall_esp); /* indirect call */
    }

loc_004C370D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C370E
 * Original: 0x004C370E - 0x004C372C (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C370E(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C370E: ;
    eax = MEM32(0x58);
    if (TEST_Z(eax, eax)) goto loc_004C372B; /* je: equal / zero */

loc_004C3718: ;
    MEM32(0x4E1620) = MEM32(0x4E1620) - 1;
    if ((MEM32(0x4E1620) != 0)) goto loc_004C372B; /* jne: not equal / not zero */

loc_004C3720: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1CF4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F4), _icall_esp); /* indirect call */
    }

loc_004C372B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C374A
 * Original: 0x004C374A - 0x004C3765 (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C374A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C374A: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    if (CMP_BE(eax & eax, 0)) { sub_004C3765(); return; } /* jbe: below or equal (unsigned <=) */

loc_004C3755: ;
    eax--;
    MEM32(ecx + 4) = eax;
    if ((eax != 0)) { sub_004C3765(); return; } /* jne: not equal / not zero */

loc_004C375B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_004C3761: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004C3768(); return; /* tail jmp 0x004C3768 */

}

/**
 * sub_004C376B
 * Original: 0x004C376B - 0x004C3774 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C376B(void)
{

loc_004C376B: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3774
 * Original: 0x004C3774 - 0x004C378C (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3774(void)
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

loc_004C3774: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_004C378C(); return; } /* jp: parity */

loc_004C3785: ;
    eax = 0xFFFFD8F0u;
    g_seh_ebp = ebp; sub_004C37BA(); return; /* tail jmp 0x004C37BA */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C37BD
 * Original: 0x004C37BD - 0x004C37C1 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C37BD(void)
{

loc_004C37BD: ;
    /* TODO: bsf eax, ecx */
    esp += 4; return; /* ret */

}

/**
 * sub_004C37C1
 * Original: 0x004C37C1 - 0x004C37EA (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C37C1(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004C37C1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4E1D20), _icall_esp); /* indirect call */
    }

loc_004C37E6: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C37EA
 * Original: 0x004C37EA - 0x004C3821 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C37EA(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004C37EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x14));
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4E1D2C), _icall_esp); /* indirect call */
    }

loc_004C381D: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C3821
 * Original: 0x004C3821 - 0x004C3841 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3821(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004C3821: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4E1D30), _icall_esp); /* indirect call */
    }

loc_004C383D: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C3841
 * Original: 0x004C3841 - 0x004C3875 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3841(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004C3841: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x20));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    esp = esp - 0x10;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4E1D34), _icall_esp); /* indirect call */
    }

loc_004C3871: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C3875
 * Original: 0x004C3875 - 0x004C3897 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3875(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004C3875: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4E1D38), _icall_esp); /* indirect call */
    }

loc_004C3894: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C3897
 * Original: 0x004C3897 - 0x004C38BE (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3897(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004C3897: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4E1D3C), _icall_esp); /* indirect call */
    }

loc_004C38BB: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C38BE
 * Original: 0x004C38BE - 0x004C38CD (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C38BE(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C38BE: ;
    eax = ZX8(MEM8(0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_004C38CD(); return; } /* je: equal / zero */

loc_004C38CA: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_004C38DC
 * Original: 0x004C38DC - 0x004C3900 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C38DC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C38DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004C78AA(); /* call 0x004C78AA */

loc_004C38F3: ;
    if (TEST_S(eax, eax)) { sub_004C3900(); return; } /* jl: less (signed <) */

loc_004C38F7: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) | 1;
    g_seh_ebp = ebp; sub_004C3907(); return; /* tail jmp 0x004C3907 */

}

/**
 * sub_004C390B
 * Original: 0x004C390B - 0x004C393E (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C390B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C390B: ;
    eax = MEM32(ecx + 0x80);
    edx = ZX8(MEM8(eax + 0xF));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0xE));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = edx >> 3;
    edx = edx << 5;
    (void)0; /* cmp edx, MEM32(eax + 0x14) - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_BE(edx, MEM32(eax + 0x14))) { sub_004C393E(); return; } /* jbe: below or equal (unsigned <=) */

loc_004C3929: ;
    ecx = eax;
    eax = ZX8(MEM8(ecx + 0xF));
    ecx = ZX8(MEM8(ecx + 0xE));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax >> 3;
    eax = eax << 5;
    g_seh_ebp = ebp; sub_004C3947(); return; /* tail jmp 0x004C3947 */

}

/**
 * sub_004C394A
 * Original: 0x004C394A - 0x004C3960 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C394A(void)
{
    int _cf = 0; /* carry flag */

loc_004C394A: ;
    eax = MEM32(esp + 4);
    ecx = eax + -8;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C395D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3960
 * Original: 0x004C3960 - 0x004C3976 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3960(void)
{
    int _cf = 0; /* carry flag */

loc_004C3960: ;
    eax = MEM32(esp + 4);
    ecx = eax + -28;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C3973: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3976
 * Original: 0x004C3976 - 0x004C3995 (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3976(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C3976: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C397C: ;
    esi = ZX8(LO8(eax));
    PUSH32(esp, 0); sub_004C753A(); /* call 0x004C753A */

loc_004C3984: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(esi, esi)) goto loc_004C3994; /* je: equal / zero */

loc_004C3989: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C3994: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C3995
 * Original: 0x004C3995 - 0x004C39AF (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3995(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C3995: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    ecx = ebp + 8;
    PUSH32(esp, 0); sub_004C36E9(); /* call 0x004C36E9 */

loc_004C39A1: ;
    eax = MEM32(ebp + 8);
    if (CMP_NE(eax, 0xBB80)) { sub_004C39AF(); return; } /* jne: not equal / not zero */

loc_004C39AB: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_004C39D0(); return; /* tail jmp 0x004C39D0 */

}

/**
 * sub_004C39DF
 * Original: 0x004C39DF - 0x004C39E4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C39DF(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C39DF: ;
    g_seh_ebp = ebp; sub_004C6BA3(); return; /* tail jmp 0x004C6BA3 */

}

/**
 * sub_004C39E4
 * Original: 0x004C39E4 - 0x004C39E9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C39E4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C39E4: ;
    g_seh_ebp = ebp; sub_004C6BED(); return; /* tail jmp 0x004C6BED */

}

/**
 * sub_004C39E9
 * Original: 0x004C39E9 - 0x004C39FE (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C39E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C39E9: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_004C39FE(); return; } /* je: equal / zero */

loc_004C39F1: ;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0xC) = eax;
    g_seh_ebp = ebp; sub_004C3A08(); return; /* tail jmp 0x004C3A08 */

}

/**
 * sub_004C3A0B
 * Original: 0x004C3A0B - 0x004C3A28 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3A0B(void)
{

loc_004C3A0B: ;
    eax = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 4) = 2;
    MEM32(eax) = 0x585FE8;
    MEM32(0x4E1CF0) = eax;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004C3A6F
 * Original: 0x004C3A6F - 0x004C3AA9 (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3A6F(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C3A6F: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x585FE8;
    MEM32(0x4E1CF0) = MEM32(0x4E1CF0) & 0;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004C3A90; /* je: equal / zero */

loc_004C3A86: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C3A8C: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;

loc_004C3A90: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_004C3AA1; /* je: equal / zero */

loc_004C3A97: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C3A9D: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;

loc_004C3AA1: ;
    MEM32(esi) = 0x586074;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C3AA9
 * Original: 0x004C3AA9 - 0x004C3AD4 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3AA9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C3AA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C3AB2: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C3AD4(); return; } /* je: equal / zero */

loc_004C3ABE: ;
    if (TEST_Z(edi, edi)) goto loc_004C3ACD; /* je: equal / zero */

loc_004C3AC2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C3ACD: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C3B08(); return; /* tail jmp 0x004C3B08 */

}

/**
 * sub_004C3B0D
 * Original: 0x004C3B0D - 0x004C3B38 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3B0D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C3B0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C3B16: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C3B38(); return; } /* je: equal / zero */

loc_004C3B22: ;
    if (TEST_Z(esi, esi)) goto loc_004C3B31; /* je: equal / zero */

loc_004C3B26: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C3B31: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C3B6A(); return; /* tail jmp 0x004C3B6A */

}

/**
 * sub_004C3B6F
 * Original: 0x004C3B6F - 0x004C3B97 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3B6F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C3B6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C3B75: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C3B97(); return; } /* je: equal / zero */

loc_004C3B81: ;
    if (TEST_Z(esi, esi)) goto loc_004C3B90; /* je: equal / zero */

loc_004C3B85: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C3B90: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C3BCA(); return; /* tail jmp 0x004C3BCA */

}

/**
 * sub_004C3BCE
 * Original: 0x004C3BCE - 0x004C3BF6 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3BCE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C3BCE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C3BD4: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C3BF6(); return; } /* je: equal / zero */

loc_004C3BE0: ;
    if (TEST_Z(esi, esi)) goto loc_004C3BEF; /* je: equal / zero */

loc_004C3BE4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C3BEF: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C3C17(); return; /* tail jmp 0x004C3C17 */

}

/**
 * sub_004C3C1B
 * Original: 0x004C3C1B - 0x004C3C4C (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3C1B(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C3C1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C3C21: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_NE(MEM32(0x4E1668), 0)) goto loc_004C3C39; /* jne: not equal / not zero */

loc_004C3C2D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0); sub_004C7FFF(); /* call 0x004C7FFF */

loc_004C3C39: ;
    if (TEST_Z(esi, esi)) goto loc_004C3C48; /* je: equal / zero */

loc_004C3C3D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C3C48: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3C4C
 * Original: 0x004C3C4C - 0x004C3C71 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3C4C(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C3C4C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    if (CMP_BE(MEM32(esi), edx)) goto loc_004C3C6D; /* jbe: below or equal (unsigned <=) */

loc_004C3C57: ;
    PUSH32(esp, edi);

loc_004C3C58: ;
    eax = MEM32(esi + 4);
    eax = eax + edx * 8;
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    edx++;
    MEM32(ecx + edi * 4 + 0x30) = eax;
    if (CMP_B(edx, MEM32(esi))) goto loc_004C3C58; /* jb: below (unsigned <) */

loc_004C3C6C: ;
    POP32(esp, edi);

loc_004C3C6D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3C71
 * Original: 0x004C3C71 - 0x004C3CDF (110 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3C71(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C3C71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C3C87: ;
    ecx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    if (CMP_BE(ecx, edi)) goto loc_004C3CA4; /* jbe: below or equal (unsigned <=) */

loc_004C3C90: ;
    edx = ecx;
    PUSH32(esp, ebx);

loc_004C3C93: ;
    ebx = ZX8(MEM8(esi + eax + 0x28));
    if (CMP_NE(MEM32(ebp + 8), ebx)) goto loc_004C3C9E; /* jne: not equal / not zero */

loc_004C3C9D: ;
    edi++;

loc_004C3C9E: ;
    eax++;
    if (CMP_B(eax, edx)) goto loc_004C3C93; /* jb: below (unsigned <) */

loc_004C3CA3: ;
    POP32(esp, ebx);

loc_004C3CA4: ;
    eax = ZX8(MEM8(esi + 0xE));
    if (CMP_AE(edi, eax)) goto loc_004C3CD1; /* jae: above or equal (unsigned >=) */

loc_004C3CAC: ;
    eax = eax - edi;
    ecx = ecx + eax;
    if (CMP_BE(ecx, 8)) goto loc_004C3CBD; /* jbe: below or equal (unsigned <=) */

loc_004C3CB5: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    ecx = ecx - eax;
    MEM32(esi + 0x24) = ecx;

loc_004C3CBD: ;
    if (TEST_Z(eax, eax)) goto loc_004C3CD1; /* je: equal / zero */

loc_004C3CC1: ;
    ecx = MEM32(esi + 0x24);
    SET_LO8(edx, MEM8(ebp + 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    eax--;
    if ((eax != 0)) goto loc_004C3CC1; /* jne: not equal / not zero */

loc_004C3CD1: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C3CD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3CDF
 * Original: 0x004C3CDF - 0x004C3D2C (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3CDF(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C3CDF: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    MEM32(esi) = 0x586008;
    PUSH32(esp, 0); sub_004C3680(); /* call 0x004C3680 */

loc_004C3CF1: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004C3D02; /* je: equal / zero */

loc_004C3CF8: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C3CFE: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;

loc_004C3D02: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_004C3D13; /* je: equal / zero */

loc_004C3D09: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C3D0F: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;

loc_004C3D13: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_004C3D24; /* je: equal / zero */

loc_004C3D1A: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C3D20: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;

loc_004C3D24: ;
    MEM32(esi) = 0x586074;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C3D2C
 * Original: 0x004C3D2C - 0x004C3D45 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D2C(void)
{

loc_004C3D2C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = edx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0); sub_004CB155(); /* call 0x004CB155 */

loc_004C3D42: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3D45
 * Original: 0x004C3D45 - 0x004C3D61 (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D45(void)
{

loc_004C3D45: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 8);
    edx = edx - MEM32(eax + 0x20);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0); sub_004CB0BD(); /* call 0x004CB0BD */

loc_004C3D5E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3D61
 * Original: 0x004C3D61 - 0x004C3D74 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D61(void)
{

loc_004C3D61: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0); sub_004CA813(); /* call 0x004CA813 */

loc_004C3D71: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3D74
 * Original: 0x004C3D74 - 0x004C3D87 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D74(void)
{

loc_004C3D74: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0); sub_004CA942(); /* call 0x004CA942 */

loc_004C3D84: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3D87
 * Original: 0x004C3D87 - 0x004C3D9A (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D87(void)
{

loc_004C3D87: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0); sub_004CAAD4(); /* call 0x004CAAD4 */

loc_004C3D97: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3D9A
 * Original: 0x004C3D9A - 0x004C3DBD (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D9A(void)
{

loc_004C3D9A: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = ecx - esi;
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + ecx;
    MEM32(eax + 0x20) = esi;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, 0); sub_004CB0BD(); /* call 0x004CB0BD */

loc_004C3DB9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3DBD
 * Original: 0x004C3DBD - 0x004C3DDA (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3DBD(void)
{

loc_004C3DBD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0); sub_004C3C4C(); /* call 0x004C3C4C */

loc_004C3DCE: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0); sub_004CB0BD(); /* call 0x004CB0BD */

loc_004C3DD6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3DDA
 * Original: 0x004C3DDA - 0x004C3DEB (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3DDA(void)
{

loc_004C3DDA: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0); sub_004CB40B(); /* call 0x004CB40B */

loc_004C3DE6: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3DEB
 * Original: 0x004C3DEB - 0x004C3DFE (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3DEB(void)
{

loc_004C3DEB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0); sub_004CACA9(); /* call 0x004CACA9 */

loc_004C3DFB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3DFE
 * Original: 0x004C3DFE - 0x004C3F19 (283 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3DFE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C3DFE: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xB8);
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(esp + 0xC);
    if (TEST_Z(esi, esi)) { sub_004C3F19(); return; } /* je: equal / zero */

loc_004C3E18: ;
    edx = MEM32(eax);
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_004C3F19(); return; } /* je: equal / zero */

loc_004C3E22: ;
    MEM32(esi) = edx;
    if (TEST_Z(MEM8(eax), 1)) goto loc_004C3E38; /* je: equal / zero */

loc_004C3E29: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;

loc_004C3E38: ;
    if (TEST_Z(MEM8(eax), 2)) goto loc_004C3E4C; /* je: equal / zero */

loc_004C3E3D: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 8);
    MEM32(edx + 8) = esi;

loc_004C3E4C: ;
    if (TEST_Z(MEM8(eax), 4)) goto loc_004C3E6F; /* je: equal / zero */

loc_004C3E51: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = esi;

loc_004C3E6F: ;
    if (TEST_Z(MEM8(eax), 8)) goto loc_004C3E92; /* je: equal / zero */

loc_004C3E74: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x18);
    MEM32(edx + 0x18) = esi;

loc_004C3E92: ;
    if (TEST_Z(MEM8(eax), 0x10)) goto loc_004C3EB5; /* je: equal / zero */

loc_004C3E97: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x1C);
    MEM32(edx + 0x1C) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x20);
    MEM32(edx + 0x20) = esi;

loc_004C3EB5: ;
    if (TEST_Z(MEM8(eax), 0x20)) goto loc_004C3EC9; /* je: equal / zero */

loc_004C3EBA: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x24);
    MEM32(edx + 0x24) = esi;

loc_004C3EC9: ;
    if (TEST_Z(MEM8(eax), 0x40)) goto loc_004C3EEC; /* je: equal / zero */

loc_004C3ECE: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x28);
    MEM32(edx + 0x28) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x2C);
    MEM32(edx + 0x2C) = esi;

loc_004C3EEC: ;
    if (TEST_Z(MEM8(eax), 0x80)) goto loc_004C3F0F; /* je: equal / zero */

loc_004C3EF1: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x30);
    MEM32(edx + 0x30) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    eax = MEM32(eax + 0x34);
    MEM32(edx + 0x34) = eax;

loc_004C3F0F: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0); sub_004CB203(); /* call 0x004CB203 */

loc_004C3F17: ;
    g_seh_ebp = ebp; sub_004C3F29(); return; /* tail jmp 0x004C3F29 */

}

/**
 * sub_004C3F2F
 * Original: 0x004C3F2F - 0x004C3F43 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3F2F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C3F2F: ;
    (void)0; /* cmp MEM32(esp + 8), 0 - flags set for next jcc */
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    if (CMP_EQ(MEM32(esp + 8), 0)) { sub_004C3F43(); return; } /* je: equal / zero */

loc_004C3F3D: ;
    MEM8(eax + 0xB) = MEM8(eax + 0xB) | 1;
    g_seh_ebp = ebp; sub_004C3F47(); return; /* tail jmp 0x004C3F47 */

}

/**
 * sub_004C3F4C
 * Original: 0x004C3F4C - 0x004C4021 (213 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3F4C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C3F4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xD8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(eax, edi)) goto loc_004C3F73; /* je: equal / zero */

loc_004C3F67: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C3F6D: ;
    MEM32(ebx + 0xD8) = edi;

loc_004C3F73: ;
    eax = MEM32(ebp + 8);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebx + 0xDC) = eax;
    if (CMP_EQ(eax, edi)) goto loc_004C4018; /* je: equal / zero */

loc_004C3F84: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    esi = esi << 3;
    PUSH32(esp, esi);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004C3F96: ;
    ecx = eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x7FF8FFF2;
    ecx = ecx + 0x8007000Eu;
    MEM32(ebx + 0xD8) = eax;
    MEM32(ebp + -8) = ecx;
    if (((int32_t)ecx < 0)) goto loc_004C4017; /* js: sign (negative) */

loc_004C3FB3: ;
    ecx = esi;
    esi = MEM32(ebp + 0xC);
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 0xDC);
    eax--;
    if ((eax == 0)) goto loc_004C4017; /* je: equal / zero */

loc_004C3FD1: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebx + 0xD8);
    ecx = ecx << 3;
    eax = eax + ecx;
    edx = MEM32(eax);
    if (CMP_BE(edx, MEM32(eax + 8))) goto loc_004C4008; /* jbe: below or equal (unsigned <=) */

loc_004C3FE6: ;
    edi = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(eax) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 4) = edi;
    eax = MEM32(ebx + 0xD8);
    MEM32(ecx + eax + 8) = edx;
    MEM32(ecx + eax + 0xC) = esi;
    goto loc_004C400B;

loc_004C4008: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;

loc_004C400B: ;
    eax = MEM32(ebx + 0xDC);
    eax--;
    if (CMP_B(MEM32(ebp + -4), eax)) goto loc_004C3FD1; /* jb: below (unsigned <) */

loc_004C4017: ;
    POP32(esp, esi);

loc_004C4018: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4021
 * Original: 0x004C4021 - 0x004C4054 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4021(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4021: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x586018;
    if (TEST_Z(eax, eax)) goto loc_004C403B; /* je: equal / zero */

loc_004C4031: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C4037: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;

loc_004C403B: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_004C404C; /* je: equal / zero */

loc_004C4042: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C4048: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;

loc_004C404C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C3CDF(); return; /* tail jmp 0x004C3CDF */

}

/**
 * sub_004C409E
 * Original: 0x004C409E - 0x004C40C6 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C409E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C409E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C40A4: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C40C6(); return; } /* je: equal / zero */

loc_004C40B0: ;
    if (TEST_Z(esi, esi)) goto loc_004C40BF; /* je: equal / zero */

loc_004C40B4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C40BF: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C40EB(); return; /* tail jmp 0x004C40EB */

}

/**
 * sub_004C40EF
 * Original: 0x004C40EF - 0x004C4117 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C40EF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C40EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C40F5: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4117(); return; } /* je: equal / zero */

loc_004C4101: ;
    if (TEST_Z(esi, esi)) goto loc_004C4110; /* je: equal / zero */

loc_004C4105: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C4110: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C413A(); return; /* tail jmp 0x004C413A */

}

/**
 * sub_004C413E
 * Original: 0x004C413E - 0x004C4166 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C413E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C413E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C4144: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4166(); return; } /* je: equal / zero */

loc_004C4150: ;
    if (TEST_Z(esi, esi)) goto loc_004C415F; /* je: equal / zero */

loc_004C4154: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C415F: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4193(); return; /* tail jmp 0x004C4193 */

}

/**
 * sub_004C4197
 * Original: 0x004C4197 - 0x004C41BF (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4197(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4197: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C419D: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C41BF(); return; } /* je: equal / zero */

loc_004C41A9: ;
    if (TEST_Z(esi, esi)) goto loc_004C41B8; /* je: equal / zero */

loc_004C41AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C41B8: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C41E4(); return; /* tail jmp 0x004C41E4 */

}

/**
 * sub_004C41E8
 * Original: 0x004C41E8 - 0x004C4213 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C41E8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C41E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C41F1: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4213(); return; } /* je: equal / zero */

loc_004C41FD: ;
    if (TEST_Z(edi, edi)) goto loc_004C420C; /* je: equal / zero */

loc_004C4201: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C420C: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4268(); return; /* tail jmp 0x004C4268 */

}

/**
 * sub_004C426D
 * Original: 0x004C426D - 0x004C4295 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C426D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C426D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C4273: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4295(); return; } /* je: equal / zero */

loc_004C427F: ;
    if (TEST_Z(esi, esi)) goto loc_004C428E; /* je: equal / zero */

loc_004C4283: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C428E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C42BA(); return; /* tail jmp 0x004C42BA */

}

/**
 * sub_004C42BE
 * Original: 0x004C42BE - 0x004C42FC (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C42BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C42BE: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esi) = 0x586038;
    MEM32(edi) = 0x586028;
    if (TEST_Z(eax, eax)) goto loc_004C42E2; /* je: equal / zero */

loc_004C42D8: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C42DE: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;

loc_004C42E2: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_004C42F3; /* je: equal / zero */

loc_004C42E9: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C42EF: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;

loc_004C42F3: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C3CDF(); return; /* tail jmp 0x004C3CDF */

}

/**
 * sub_004C44E1
 * Original: 0x004C44E1 - 0x004C450D (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C44E1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C44E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C44EB: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C450D(); return; } /* je: equal / zero */

loc_004C44F7: ;
    if (TEST_Z(ebx, ebx)) goto loc_004C4506; /* je: equal / zero */

loc_004C44FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C4506: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4553(); return; /* tail jmp 0x004C4553 */

}

/**
 * sub_004C45A9
 * Original: 0x004C45A9 - 0x004C45D4 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C45A9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C45A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C45B2: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C45D4(); return; } /* je: equal / zero */

loc_004C45BE: ;
    if (TEST_Z(esi, esi)) goto loc_004C45CD; /* je: equal / zero */

loc_004C45C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C45CD: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C460E(); return; /* tail jmp 0x004C460E */

}

/**
 * sub_004C4613
 * Original: 0x004C4613 - 0x004C48F4 (737 bytes, 261 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4613(void)
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

loc_004C4613: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    PUSH32(esp, 0); sub_004C36E9(); /* call 0x004C36E9 */

loc_004C4624: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    eax = eax | MEM32(esi);
    (void)0; /* test eax, 0x400000 - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, 0x400000)) goto loc_004C4640; /* je: equal / zero */

loc_004C4638: ;
    eax = eax | 0xFFFF0000u;
    MEM32(ebp + 8) = eax;

loc_004C4640: ;
    (void)0; /* test eax, 0x15200010 - flags set for next jcc */
    edi = MEM32(ebp + 0x18);
    if (TEST_Z(eax, 0x15200010)) goto loc_004C469F; /* je: equal / zero */

loc_004C464A: ;
    if (CMP_EQ(MEM32(esi + 0x40), 2)) goto loc_004C468F; /* je: equal / zero */

loc_004C4650: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    eax = eax >> 2;
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x54));
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    PUSH32(esp, MEM32(esi + 0x50));
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + 0x3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C37EA(); /* call 0x004C37EA */

loc_004C468A: ;
    eax = MEM32(ebp + -52);
    goto loc_004C4694;

loc_004C468F: ;
    eax = 0; /* xor self */
    MEM32(ebp + -52) = eax;

loc_004C4694: ;
    if (CMP_EQ(eax, MEM32(edi + 4))) goto loc_004C469F; /* je: equal / zero */

loc_004C4699: ;
    MEM32(edi) = MEM32(edi) | 1;
    MEM32(edi + 4) = eax;

loc_004C469F: ;
    if (TEST_Z(MEM16(ebp + 0xA), 0x4014)) goto loc_004C46DB; /* je: equal / zero */

loc_004C46A7: ;
    if (CMP_EQ(MEM32(esi + 0x40), 2)) goto loc_004C46CB; /* je: equal / zero */

loc_004C46AD: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0); sub_004C3821(); /* call 0x004C3821 */

loc_004C46C6: ;
    eax = MEM32(ebp + -48);
    goto loc_004C46D0;

loc_004C46CB: ;
    eax = 0; /* xor self */
    MEM32(ebp + -48) = eax;

loc_004C46D0: ;
    if (CMP_EQ(eax, MEM32(edi + 8))) goto loc_004C46DB; /* je: equal / zero */

loc_004C46D5: ;
    MEM32(edi) = MEM32(edi) | 2;
    MEM32(edi + 8) = eax;

loc_004C46DB: ;
    if (TEST_Z(MEM32(ebp + 8), 0x34800008)) goto loc_004C4744; /* je: equal / zero */

loc_004C46E4: ;
    if (CMP_EQ(MEM32(esi + 0x40), 2)) goto loc_004C4727; /* je: equal / zero */

loc_004C46EA: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    eax = eax & 1;
    PUSH32(esp, eax);
    esp = esp - 0x10;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C3841(); /* call 0x004C3841 */

loc_004C471F: ;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -44);
    goto loc_004C4731;

loc_004C4727: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = ecx;

loc_004C4731: ;
    if (CMP_NE(eax, MEM32(edi + 0xC))) goto loc_004C473B; /* jne: not equal / not zero */

loc_004C4736: ;
    if (CMP_EQ(ecx, MEM32(edi + 0x10))) goto loc_004C4744; /* je: equal / zero */

loc_004C473B: ;
    MEM32(edi) = MEM32(edi) | 4;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = ecx;

loc_004C4744: ;
    if (TEST_Z(MEM8(ebp + 0xB), 0x24)) goto loc_004C4797; /* je: equal / zero */

loc_004C474A: ;
    if (CMP_EQ(MEM32(esi + 0x40), 2)) goto loc_004C477A; /* je: equal / zero */

loc_004C4750: ;
    if (TEST_Z(MEM8(esi + 0x58), 2)) goto loc_004C477A; /* je: equal / zero */

loc_004C4756: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C3875(); /* call 0x004C3875 */

loc_004C4772: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -36);
    goto loc_004C4784;

loc_004C477A: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = ecx;

loc_004C4784: ;
    if (CMP_NE(eax, MEM32(edi + 0x14))) goto loc_004C478E; /* jne: not equal / not zero */

loc_004C4789: ;
    if (CMP_EQ(ecx, MEM32(edi + 0x18))) goto loc_004C4797; /* je: equal / zero */

loc_004C478E: ;
    MEM32(edi) = MEM32(edi) | 8;
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0x18) = ecx;

loc_004C4797: ;
    if (TEST_Z(MEM32(ebp + 8), 0x82800028u)) goto loc_004C47E1; /* je: equal / zero */

loc_004C47A0: ;
    if (CMP_EQ(MEM32(esi + 0x40), 2)) goto loc_004C47D1; /* je: equal / zero */

loc_004C47A6: ;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    eax = ebp + -20;
    PUSH32(esp, eax);
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + 0x40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C3897(); /* call 0x004C3897 */

loc_004C47CC: ;
    eax = MEM32(ebp + -20);
    goto loc_004C47D6;

loc_004C47D1: ;
    eax = 0; /* xor self */
    MEM32(ebp + -20) = eax;

loc_004C47D6: ;
    if (CMP_EQ(eax, MEM32(edi + 0x24))) goto loc_004C47E1; /* je: equal / zero */

loc_004C47DB: ;
    MEM32(edi) = MEM32(edi) | 0x20;
    MEM32(edi + 0x24) = eax;

loc_004C47E1: ;
    if (TEST_Z(MEM8(ebp + 0xB), 0x20)) goto loc_004C4832; /* je: equal / zero */

loc_004C47E7: ;
    if (CMP_EQ(MEM32(esi + 0x40), 2)) goto loc_004C47FB; /* je: equal / zero */

loc_004C47ED: ;
    fp_push(MEMF(esi + 0x74)); /* fld float */
    eax = MEM32(esi + 0x78);
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fst */
    MEM32(ebp + -12) = eax;
    goto loc_004C4805;

loc_004C47FB: ;
    fp_push(0.0); /* fldz */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */

loc_004C4805: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004C4822; /* jp: parity */

loc_004C4813: ;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_push(MEMF(ebp + -12)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004C4830; /* jnp: not parity */

loc_004C4822: ;
    eax = MEM32(ebp + -12);
    MEMF(edi + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = MEM32(edi) | 0x40;
    MEM32(edi + 0x2C) = eax;
    goto loc_004C4832;

loc_004C4830: ;
    /* fstp st(0) */

loc_004C4832: ;
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_004C48E5; /* je: equal / zero */

loc_004C483F: ;
    ecx = MEM32(ebp + 0x14);
    if (CMP_EQ(ecx, edx)) goto loc_004C48E5; /* je: equal / zero */

loc_004C484A: ;
    if (TEST_NZ(MEM8(ebp + 0xB), 0x14)) goto loc_004C4860; /* jne: not equal / not zero */

loc_004C4850: ;
    ebx = MEM32(eax);
    ebx = ebx | MEM32(ecx);
    if (TEST_Z(ebx, 0x7F0804)) goto loc_004C48E5; /* je: equal / zero */

loc_004C4860: ;
    if (CMP_EQ(MEM32(esi + 0x40), 2)) goto loc_004C48A1; /* je: equal / zero */

loc_004C4866: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    edx = ebp + -4;
    PUSH32(esp, edx);
    edx = ebp + -8;
    PUSH32(esp, edx);
    edx = ebp + -24;
    PUSH32(esp, edx);
    edx = ebp + -28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004CCACD(); /* call 0x004CCACD */

loc_004C4893: ;
    if (TEST_Z(MEM8(esi + 0x58), 2)) goto loc_004C48AD; /* je: equal / zero */

loc_004C4899: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    goto loc_004C48AD;

loc_004C48A1: ;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = edx;

loc_004C48AD: ;
    eax = MEM32(ebp + -28);
    if (CMP_NE(eax, MEM32(edi + 0x1C))) goto loc_004C48BD; /* jne: not equal / not zero */

loc_004C48B5: ;
    ecx = MEM32(ebp + -24);
    if (CMP_EQ(ecx, MEM32(edi + 0x20))) goto loc_004C48C9; /* je: equal / zero */

loc_004C48BD: ;
    MEM32(edi) = MEM32(edi) | 0x10;
    MEM32(edi + 0x1C) = eax;
    eax = MEM32(ebp + -24);
    MEM32(edi + 0x20) = eax;

loc_004C48C9: ;
    eax = MEM32(ebp + -8);
    if (CMP_NE(eax, MEM32(edi + 0x30))) goto loc_004C48D9; /* jne: not equal / not zero */

loc_004C48D1: ;
    ecx = MEM32(ebp + -4);
    if (CMP_EQ(ecx, MEM32(edi + 0x34))) goto loc_004C48E5; /* je: equal / zero */

loc_004C48D9: ;
    MEM8(edi) = MEM8(edi) | 0x80;
    MEM32(edi + 0x30) = eax;
    eax = MEM32(ebp + -4);
    MEM32(edi + 0x34) = eax;

loc_004C48E5: ;
    ecx = ebp + 8;
    PUSH32(esp, 0); sub_004C370E(); /* call 0x004C370E */

loc_004C48ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_004C48F4
 * Original: 0x004C48F4 - 0x004C492B (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C48F4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C48F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, 0); sub_004C36E9(); /* call 0x004C36E9 */

loc_004C4900: ;
    if (CMP_EQ(MEM32(0x4E1670), 0)) goto loc_004C4911; /* je: equal / zero */

loc_004C4909: ;
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_004CC82B(); /* call 0x004CC82B */

loc_004C4911: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -4;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004CCCE6(); /* call 0x004CCCE6 */

loc_004C491F: ;
    ecx = ebp + 0xC;
    PUSH32(esp, 0); sub_004C370E(); /* call 0x004C370E */

loc_004C4927: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C495B
 * Original: 0x004C495B - 0x004C4983 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C495B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C495B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C4961: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4983(); return; } /* je: equal / zero */

loc_004C496D: ;
    if (TEST_Z(esi, esi)) goto loc_004C497C; /* je: equal / zero */

loc_004C4971: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C497C: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C49A5(); return; /* tail jmp 0x004C49A5 */

}

/**
 * sub_004C49A9
 * Original: 0x004C49A9 - 0x004C49D1 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C49A9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C49A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C49AF: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C49D1(); return; } /* je: equal / zero */

loc_004C49BB: ;
    if (TEST_Z(esi, esi)) goto loc_004C49CA; /* je: equal / zero */

loc_004C49BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C49CA: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C49F3(); return; /* tail jmp 0x004C49F3 */

}

/**
 * sub_004C49F7
 * Original: 0x004C49F7 - 0x004C4A1F (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C49F7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C49F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C49FD: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4A1F(); return; } /* je: equal / zero */

loc_004C4A09: ;
    if (TEST_Z(esi, esi)) goto loc_004C4A18; /* je: equal / zero */

loc_004C4A0D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C4A18: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4A41(); return; /* tail jmp 0x004C4A41 */

}

/**
 * sub_004C4A45
 * Original: 0x004C4A45 - 0x004C4A6D (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A45(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4A45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C4A4B: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4A6D(); return; } /* je: equal / zero */

loc_004C4A57: ;
    if (TEST_Z(esi, esi)) goto loc_004C4A66; /* je: equal / zero */

loc_004C4A5B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C4A66: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4A8F(); return; /* tail jmp 0x004C4A8F */

}

/**
 * sub_004C4A93
 * Original: 0x004C4A93 - 0x004C4ABB (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A93(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4A93: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C4A99: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4ABB(); return; } /* je: equal / zero */

loc_004C4AA5: ;
    if (TEST_Z(esi, esi)) goto loc_004C4AB4; /* je: equal / zero */

loc_004C4AA9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C4AB4: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4ADD(); return; /* tail jmp 0x004C4ADD */

}

/**
 * sub_004C4AE1
 * Original: 0x004C4AE1 - 0x004C4B09 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4AE1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4AE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C4AE7: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4B09(); return; } /* je: equal / zero */

loc_004C4AF3: ;
    if (TEST_Z(esi, esi)) goto loc_004C4B02; /* je: equal / zero */

loc_004C4AF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C4B02: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4B2B(); return; /* tail jmp 0x004C4B2B */

}

/**
 * sub_004C4B2F
 * Original: 0x004C4B2F - 0x004C4B57 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4B2F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4B2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C4B35: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4B57(); return; } /* je: equal / zero */

loc_004C4B41: ;
    if (TEST_Z(esi, esi)) goto loc_004C4B50; /* je: equal / zero */

loc_004C4B45: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C4B50: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4B79(); return; /* tail jmp 0x004C4B79 */

}

/**
 * sub_004C4B7D
 * Original: 0x004C4B7D - 0x004C4BA5 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4B7D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4B7D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C4B83: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4BA5(); return; } /* je: equal / zero */

loc_004C4B8F: ;
    if (TEST_Z(esi, esi)) goto loc_004C4B9E; /* je: equal / zero */

loc_004C4B93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C4B9E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4BC7(); return; /* tail jmp 0x004C4BC7 */

}

/**
 * sub_004C4BCB
 * Original: 0x004C4BCB - 0x004C4BF3 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4BCB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4BCB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C4BD1: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4BF3(); return; } /* je: equal / zero */

loc_004C4BDD: ;
    if (TEST_Z(esi, esi)) goto loc_004C4BEC; /* je: equal / zero */

loc_004C4BE1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C4BEC: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4C15(); return; /* tail jmp 0x004C4C15 */

}

/**
 * sub_004C4C19
 * Original: 0x004C4C19 - 0x004C4C40 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4C19(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4C19: ;
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C4C1E: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C4C40(); return; } /* je: equal / zero */

loc_004C4C2A: ;
    if (TEST_Z(ecx, ecx)) goto loc_004C4C39; /* je: equal / zero */

loc_004C4C2E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C4C39: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C4C62(); return; /* tail jmp 0x004C4C62 */

}

/**
 * sub_004C4F97
 * Original: 0x004C4F97 - 0x004C4FBE (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4F97(void)
{
    uint32_t ebp;
    int _cf = 0; /* carry flag */

loc_004C4F97: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = eax + 0xFFFFFFF8u;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C3AA9(); /* call 0x004C3AA9 */

loc_004C4FBA: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004C4FBE
 * Original: 0x004C4FBE - 0x004C4FE8 (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4FBE(void)
{
    uint32_t ebp;
    int _cf = 0; /* carry flag */

loc_004C4FBE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = eax + 0xFFFFFFF8u;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = (uint32_t)(-(int32_t)ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C3B0D(); /* call 0x004C3B0D */

loc_004C4FE4: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004C4FE8
 * Original: 0x004C4FE8 - 0x004C5008 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4FE8(void)
{
    int _cf = 0; /* carry flag */

loc_004C4FE8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = eax + 0xFFFFFFF8u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C3B6F(); /* call 0x004C3B6F */

loc_004C5005: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5008
 * Original: 0x004C5008 - 0x004C5020 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5008(void)
{
    int _cf = 0; /* carry flag */

loc_004C5008: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    eax = eax + 0xFFFFFFF8u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C3BCE(); /* call 0x004C3BCE */

loc_004C501D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5020
 * Original: 0x004C5020 - 0x004C503C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5020(void)
{
    int _cf = 0; /* carry flag */

loc_004C5020: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C495B(); /* call 0x004C495B */

loc_004C5039: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C503C
 * Original: 0x004C503C - 0x004C5058 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C503C(void)
{
    int _cf = 0; /* carry flag */

loc_004C503C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C49A9(); /* call 0x004C49A9 */

loc_004C5055: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5058
 * Original: 0x004C5058 - 0x004C5074 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5058(void)
{
    int _cf = 0; /* carry flag */

loc_004C5058: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C49F7(); /* call 0x004C49F7 */

loc_004C5071: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5074
 * Original: 0x004C5074 - 0x004C5090 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5074(void)
{
    int _cf = 0; /* carry flag */

loc_004C5074: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C4A45(); /* call 0x004C4A45 */

loc_004C508D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5090
 * Original: 0x004C5090 - 0x004C50AC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5090(void)
{
    int _cf = 0; /* carry flag */

loc_004C5090: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C4A93(); /* call 0x004C4A93 */

loc_004C50A9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C50AC
 * Original: 0x004C50AC - 0x004C50C8 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C50AC(void)
{
    int _cf = 0; /* carry flag */

loc_004C50AC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C4AE1(); /* call 0x004C4AE1 */

loc_004C50C5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C50C8
 * Original: 0x004C50C8 - 0x004C50E4 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C50C8(void)
{
    int _cf = 0; /* carry flag */

loc_004C50C8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C4B2F(); /* call 0x004C4B2F */

loc_004C50E1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C50E4
 * Original: 0x004C50E4 - 0x004C5108 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C50E4(void)
{
    int _cf = 0; /* carry flag */

loc_004C50E4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C409E(); /* call 0x004C409E */

loc_004C5105: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C5108
 * Original: 0x004C5108 - 0x004C5120 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5108(void)
{
    int _cf = 0; /* carry flag */

loc_004C5108: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C40EF(); /* call 0x004C40EF */

loc_004C511D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5120
 * Original: 0x004C5120 - 0x004C5144 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5120(void)
{
    int _cf = 0; /* carry flag */

loc_004C5120: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C413E(); /* call 0x004C413E */

loc_004C5141: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C5144
 * Original: 0x004C5144 - 0x004C5164 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5144(void)
{
    int _cf = 0; /* carry flag */

loc_004C5144: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C41E8(); /* call 0x004C41E8 */

loc_004C5161: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5164
 * Original: 0x004C5164 - 0x004C5180 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5164(void)
{
    int _cf = 0; /* carry flag */

loc_004C5164: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C4197(); /* call 0x004C4197 */

loc_004C517D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5180
 * Original: 0x004C5180 - 0x004C519C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5180(void)
{
    int _cf = 0; /* carry flag */

loc_004C5180: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C426D(); /* call 0x004C426D */

loc_004C5199: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C519C
 * Original: 0x004C519C - 0x004C51B8 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C519C(void)
{
    int _cf = 0; /* carry flag */

loc_004C519C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C4B7D(); /* call 0x004C4B7D */

loc_004C51B5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C51B8
 * Original: 0x004C51B8 - 0x004C51D4 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51B8(void)
{
    int _cf = 0; /* carry flag */

loc_004C51B8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C4BCB(); /* call 0x004C4BCB */

loc_004C51D1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C51D4
 * Original: 0x004C51D4 - 0x004C51F0 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51D4(void)
{
    int _cf = 0; /* carry flag */

loc_004C51D4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C4C19(); /* call 0x004C4C19 */

loc_004C51ED: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C51F0
 * Original: 0x004C51F0 - 0x004C51F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C51F0: ;
    g_seh_ebp = ebp; sub_004C4CB7(); return; /* tail jmp 0x004C4CB7 */

}

/**
 * sub_004C51F5
 * Original: 0x004C51F5 - 0x004C51FA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51F5(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C51F5: ;
    g_seh_ebp = ebp; sub_004C4C65(); return; /* tail jmp 0x004C4C65 */

}

/**
 * sub_004C51FA
 * Original: 0x004C51FA - 0x004C51FF (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51FA(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C51FA: ;
    g_seh_ebp = ebp; sub_004C4D09(); return; /* tail jmp 0x004C4D09 */

}

/**
 * sub_004C51FF
 * Original: 0x004C51FF - 0x004C5204 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51FF(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C51FF: ;
    g_seh_ebp = ebp; sub_004C4D5B(); return; /* tail jmp 0x004C4D5B */

}

/**
 * sub_004C5204
 * Original: 0x004C5204 - 0x004C5209 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5204(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5204: ;
    g_seh_ebp = ebp; sub_004C4DAD(); return; /* tail jmp 0x004C4DAD */

}

/**
 * sub_004C5209
 * Original: 0x004C5209 - 0x004C520E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5209(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5209: ;
    g_seh_ebp = ebp; sub_004C4DFF(); return; /* tail jmp 0x004C4DFF */

}

/**
 * sub_004C520E
 * Original: 0x004C520E - 0x004C5213 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C520E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C520E: ;
    g_seh_ebp = ebp; sub_004C4E51(); return; /* tail jmp 0x004C4E51 */

}

/**
 * sub_004C5213
 * Original: 0x004C5213 - 0x004C5218 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5213(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5213: ;
    g_seh_ebp = ebp; sub_004C4558(); return; /* tail jmp 0x004C4558 */

}

/**
 * sub_004C5218
 * Original: 0x004C5218 - 0x004C5230 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5218(void)
{

loc_004C5218: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004C45A9(); /* call 0x004C45A9 */

loc_004C522D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C5230
 * Original: 0x004C5230 - 0x004C5235 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5230(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5230: ;
    g_seh_ebp = ebp; sub_004C4EA3(); return; /* tail jmp 0x004C4EA3 */

}

/**
 * sub_004C5235
 * Original: 0x004C5235 - 0x004C523A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5235(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5235: ;
    g_seh_ebp = ebp; sub_004C4EF5(); return; /* tail jmp 0x004C4EF5 */

}

/**
 * sub_004C523A
 * Original: 0x004C523A - 0x004C523F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C523A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C523A: ;
    g_seh_ebp = ebp; sub_004C4F47(); return; /* tail jmp 0x004C4F47 */

}

/**
 * sub_004C523F
 * Original: 0x004C523F - 0x004C5248 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C523F(void)
{
    uint32_t ebp;

loc_004C523F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004C4613(); return; /* tail jmp 0x004C4613 */

}

/**
 * sub_004C5248
 * Original: 0x004C5248 - 0x004C5271 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5248(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C5248: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C524E: ;
    esi = ZX8(LO8(eax));
    eax = MEM32(0x4E1CF0);
    if (TEST_Z(eax, eax)) goto loc_004C5260; /* je: equal / zero */

loc_004C525A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C3C1B(); /* call 0x004C3C1B */

loc_004C5260: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(esi, esi)) goto loc_004C5270; /* je: equal / zero */

loc_004C5265: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C5270: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C5271
 * Original: 0x004C5271 - 0x004C52A0 (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5271(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C5271: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C5288: ;
    (void)0; /* cmp MEM32(0x4E1CF0), ebx - flags set for next jcc */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -12) = eax;
    if (CMP_NE(MEM32(0x4E1CF0), ebx)) { sub_004C52A0(); return; } /* jne: not equal / not zero */

loc_004C5296: ;
    esi = 0x88780032u;
    g_seh_ebp = ebp; sub_004C5427(); return; /* tail jmp 0x004C5427 */

}

/**
 * sub_004C548E
 * Original: 0x004C548E - 0x004C5559 (203 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C548E(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C548E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    if (CMP_NE(eax, ecx)) goto loc_004C54C7; /* jne: not equal / not zero */

loc_004C549B: ;
    if (TEST_Z(MEM32(esi + 8), 0x200010)) goto loc_004C54AB; /* je: equal / zero */

loc_004C54A4: ;
    eax = 0x4E13B4;
    goto loc_004C54C7;

loc_004C54AB: ;
    if (CMP_EQ(MEM32(esi + 0xB0), ecx)) goto loc_004C54BA; /* je: equal / zero */

loc_004C54B3: ;
    eax = 0x4CEBAC;
    goto loc_004C54C7;

loc_004C54BA: ;
    eax = ZX8(MEM8(esi + 0xE));
    eax = eax >> 1;
    eax = MEM32(eax * 4 + 0x4CEB9C);

loc_004C54C7: ;
    if (CMP_BE(MEM32(eax), ecx)) goto loc_004C54EA; /* jbe: below or equal (unsigned <=) */

loc_004C54CB: ;
    PUSH32(esp, edi);

loc_004C54CC: ;
    edx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(edx + ecx * 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    edi = MEM32(eax + 4);
    edi = MEM32(edi + ecx * 8 + 4);
    edx = ZX8(LO8(edx));
    ecx++;
    MEM32(esi + edx * 4 + 0x30) = edi;
    if (CMP_B(ecx, MEM32(eax))) goto loc_004C54CC; /* jb: below (unsigned <) */

loc_004C54E9: ;
    POP32(esp, edi);

loc_004C54EA: ;
    eax = MEM32(eax);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0xB0);
    if (TEST_Z(eax, eax)) goto loc_004C5512; /* je: equal / zero */

loc_004C54F9: ;
    eax = MEM32(eax + 0x1C);
    if (TEST_Z(MEM32(eax + 8), 0x82000)) goto loc_004C5512; /* je: equal / zero */

loc_004C5505: ;
    PUSH32(esp, MEM32(eax + 0xD4));
    ecx = esi;
    PUSH32(esp, 0); sub_004C3C71(); /* call 0x004C3C71 */

loc_004C5512: ;
    if (TEST_Z(MEM8(esi + 8), 0x10)) goto loc_004C5555; /* je: equal / zero */

loc_004C5518: ;
    (void)0; /* cmp MEM32(esi + 0x24), 5 - flags set for next jcc */
    PUSH32(esp, 2);
    POP32(esp, edx);
    if (CMP_B(MEM32(esi + 0x24), 5)) goto loc_004C553E; /* jb: below (unsigned <) */

loc_004C5521: ;
    if (CMP_NE(MEM8(esi + 0x2C), LO8(edx))) goto loc_004C553E; /* jne: not equal / not zero */

loc_004C5526: ;
    ecx = esi + 0xB4;
    eax = MEM32(ecx);
    if (TEST_NZ(MEM8(eax + 0x58), LO8(edx))) goto loc_004C5555; /* jne: not equal / not zero */

loc_004C5533: ;
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | edx;
    eax = MEM32(ecx);
    MEM8(eax + 3) = MEM8(eax + 3) | 4;
    goto loc_004C5555;

loc_004C553E: ;
    ecx = esi + 0xB4;
    eax = MEM32(ecx);
    if (TEST_Z(MEM8(eax + 0x58), LO8(edx))) goto loc_004C5555; /* je: equal / zero */

loc_004C554B: ;
    MEM32(eax + 0x58) = MEM32(eax + 0x58) & 0xFFFFFFFDu;
    ecx = MEM32(ecx);
    MEM8(ecx + 3) = MEM8(ecx + 3) | 4;

loc_004C5555: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5559
 * Original: 0x004C5559 - 0x004C562C (211 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5559(void)
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

loc_004C5559: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C556F: ;
    ecx = MEM32(esi + 0xB0);
    if (TEST_Z(ecx, ecx)) goto loc_004C55D1; /* je: equal / zero */

loc_004C5579: ;
    eax = MEM32(ecx + 0x1C);
    if (TEST_Z(MEM32(eax + 8), 0x82000)) goto loc_004C55C4; /* je: equal / zero */

loc_004C5585: ;
    eax = MEM32(eax + 0xD4);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x24), edi - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(MEM32(esi + 0x24), edi)) goto loc_004C55B5; /* jbe: below or equal (unsigned <=) */

loc_004C5595: ;
    eax = MEM32(esi + 0x24);
    edx = esi + 0x28;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, ebx);

loc_004C559F: ;
    SET_LO8(eax, MEM8(edx));
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(ebp + -8), ebx)) goto loc_004C55AE; /* je: equal / zero */

loc_004C55A9: ;
    MEM8(ebp + edi + -16) = LO8(eax);
    edi++;

loc_004C55AE: ;
    edx++;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_004C559F; /* jne: not equal / not zero */

loc_004C55B4: ;
    POP32(esp, ebx);

loc_004C55B5: ;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x24) = edi;

loc_004C55C4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_004C55CA: ;
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) & 0;

loc_004C55D1: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004C55D9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0xB0) = eax;
    if (TEST_Z(eax, eax)) goto loc_004C561E; /* je: equal / zero */

loc_004C55E3: ;
    eax = MEM32(eax + 0x1C);
    if (TEST_Z(MEM32(eax + 8), 0x82000)) goto loc_004C561E; /* je: equal / zero */

loc_004C55EF: ;
    edi = MEM32(eax + 0xD4);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004C3C71(); /* call 0x004C3C71 */

loc_004C5601: ;
    eax = ZX8(MEM8(esi + 0xE));
    MEM32(ebp + 8) = eax;
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C3774(); /* call 0x004C3774 */

loc_004C561A: ;
    MEM32(esi + edi * 4 + 0x30) = eax;

loc_004C561E: ;
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C5626: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C562C
 * Original: 0x004C562C - 0x004C5656 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C562C(void)
{

loc_004C562C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    eax = esi + 0x14;
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x586008;
    MEM32(esi + 0x18) = eax;
    MEM32(eax) = eax;
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004C564D: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5671
 * Original: 0x004C5671 - 0x004C5708 (151 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5671(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C5671: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004C567B: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004C568B: ;
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(MEM8(eax + 8), 0x10)) goto loc_004C5704; /* je: equal / zero */

loc_004C5694: ;
    ecx = MEM32(esi + 8);
    eax = esi + 0x14;
    ecx = ecx + 0x10;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x4E1660);
    edx = eax;
    edx = edx & 0xFFFF;
    (void)0; /* cmp edx, 2 - flags set for next jcc */
    ecx = 0x4000000;
    if (CMP_EQ(edx, 2)) goto loc_004C56CA; /* je: equal / zero */

loc_004C56C3: ;
    if (TEST_Z(eax, 0x10000)) goto loc_004C56E6; /* je: equal / zero */

loc_004C56CA: ;
    if (TEST_S(eax, eax)) goto loc_004C56E6; /* js: sign (negative) */

loc_004C56CE: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 1;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) | ecx;

loc_004C56E6: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(MEM8(eax + 0xA), 2)) goto loc_004C5704; /* je: equal / zero */

loc_004C56EF: ;
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 4;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) | ecx;

loc_004C5704: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5708
 * Original: 0x004C5708 - 0x004C575C (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5708(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C5708: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esi + -28;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi & eax;
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + 0xB0);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, eax)) goto loc_004C5754; /* je: equal / zero */

loc_004C572B: ;
    if (TEST_Z(eax, eax)) goto loc_004C573D; /* je: equal / zero */

loc_004C572F: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0); sub_004CB59D(); /* call 0x004CB59D */

loc_004C5737: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_004C5754; /* jl: less (signed <) */

loc_004C573D: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C5559(); /* call 0x004C5559 */

loc_004C5746: ;
    if (TEST_Z(esi, esi)) goto loc_004C5754; /* je: equal / zero */

loc_004C574A: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0); sub_004CB490(); /* call 0x004CB490 */

loc_004C5752: ;
    ebx = eax;

loc_004C5754: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C575C
 * Original: 0x004C575C - 0x004C5779 (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C575C(void)
{

loc_004C575C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0); sub_004C548E(); /* call 0x004C548E */

loc_004C576D: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0); sub_004CAFFC(); /* call 0x004CAFFC */

loc_004C5775: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5779
 * Original: 0x004C5779 - 0x004C579D (36 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5779(void)
{

loc_004C5779: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xCC) = MEM32(ecx + 0xCC) & 0;
    MEM32(ecx + 0xC4) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0xC8) = eax;
    MEM32(ecx + 0xD0) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C579D
 * Original: 0x004C579D - 0x004C57B5 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C579D(void)
{

loc_004C579D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0); sub_004C562C(); /* call 0x004C562C */

loc_004C57A9: ;
    MEM32(esi) = 0x586018;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C57D0
 * Original: 0x004C57D0 - 0x004C57FB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C57D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C57D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C57D9: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C57FB(); return; } /* je: equal / zero */

loc_004C57E5: ;
    if (TEST_Z(edi, edi)) goto loc_004C57F4; /* je: equal / zero */

loc_004C57E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C57F4: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C584B(); return; /* tail jmp 0x004C584B */

}

/**
 * sub_004C586B
 * Original: 0x004C586B - 0x004C5893 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C586B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C586B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C5871: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C5893(); return; } /* je: equal / zero */

loc_004C587D: ;
    if (TEST_Z(esi, esi)) goto loc_004C588C; /* je: equal / zero */

loc_004C5881: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C588C: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C58B5(); return; /* tail jmp 0x004C58B5 */

}

/**
 * sub_004C58B9
 * Original: 0x004C58B9 - 0x004C58E1 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C58B9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C58B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C58BF: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C58E1(); return; } /* je: equal / zero */

loc_004C58CB: ;
    if (TEST_Z(esi, esi)) goto loc_004C58DA; /* je: equal / zero */

loc_004C58CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C58DA: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C5903(); return; /* tail jmp 0x004C5903 */

}

/**
 * sub_004C59AB
 * Original: 0x004C59AB - 0x004C59C7 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C59AB(void)
{
    int _cf = 0; /* carry flag */

loc_004C59AB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C586B(); /* call 0x004C586B */

loc_004C59C4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C59C7
 * Original: 0x004C59C7 - 0x004C59E3 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C59C7(void)
{
    int _cf = 0; /* carry flag */

loc_004C59C7: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C58B9(); /* call 0x004C58B9 */

loc_004C59E0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C59E3
 * Original: 0x004C59E3 - 0x004C5A03 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C59E3(void)
{
    int _cf = 0; /* carry flag */

loc_004C59E3: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C57D0(); /* call 0x004C57D0 */

loc_004C5A00: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5A03
 * Original: 0x004C5A03 - 0x004C5A08 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5A03(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5A03: ;
    g_seh_ebp = ebp; sub_004C5907(); return; /* tail jmp 0x004C5907 */

}

/**
 * sub_004C5A08
 * Original: 0x004C5A08 - 0x004C5A0D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5A08(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5A08: ;
    g_seh_ebp = ebp; sub_004C5959(); return; /* tail jmp 0x004C5959 */

}

/**
 * sub_004C5A0D
 * Original: 0x004C5A0D - 0x004C5A3F (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5A0D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C5A0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C5A17: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C5A3F(); return; } /* je: equal / zero */

loc_004C5A26: ;
    if (TEST_Z(eax, eax)) goto loc_004C5A35; /* je: equal / zero */

loc_004C5A2A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C5A35: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C5AD2(); return; /* tail jmp 0x004C5AD2 */

}

/**
 * sub_004C5AD6
 * Original: 0x004C5AD6 - 0x004C5B23 (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5AD6(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C5AD6: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 0xB0), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esi) = 0x585FF8;
    if (CMP_EQ(MEM32(esi + 0xB0), 0)) goto loc_004C5AF0; /* je: equal / zero */

loc_004C5AE9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004C5559(); /* call 0x004C5559 */

loc_004C5AF0: ;
    edi = esi + 0xB4;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004C5B05; /* je: equal / zero */

loc_004C5AFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C5B02: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004C5B05: ;
    edi = esi + 0xB8;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004C5B1A; /* je: equal / zero */

loc_004C5B11: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C5B17: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004C5B1A: ;
    POP32(esp, edi);
    MEM32(esi) = 0x586074;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5B23
 * Original: 0x004C5B23 - 0x004C5BA9 (134 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5B23(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C5B23: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_004C6CC9(); /* call 0x004C6CC9 */

loc_004C5B3C: ;
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_004C5B95; /* je: equal / zero */

loc_004C5B42: ;
    if (TEST_NZ(MEM32(esi + 8), 0x200010)) goto loc_004C5B95; /* jne: not equal / not zero */

loc_004C5B4B: ;
    if (CMP_EQ(MEM32(ebp + 0xC), ebx)) goto loc_004C5B95; /* je: equal / zero */

loc_004C5B50: ;
    eax = ebp + -72;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = eax;

loc_004C5B59: ;
    eax = MEM32(ebp + -8);
    if (CMP_AE(eax, 8)) goto loc_004C5B87; /* jae: above or equal (unsigned >=) */

loc_004C5B61: ;
    ecx = edi;
    edx = ebp + eax * 8 + -72;
    PUSH32(esp, 0); sub_004C37BD(); /* call 0x004C37BD */

loc_004C5B6C: ;
    MEM32(edx) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + eax * 8 + -68) = ebx;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    eax = ~eax;
    edi = edi & eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    if (CMP_NE(edi, ebx)) goto loc_004C5B59; /* jne: not equal / not zero */

loc_004C5B87: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C548E(); /* call 0x004C548E */

loc_004C5B92: ;
    ebx = 0; /* xor self */
    ebx++;

loc_004C5B95: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_004C3995(); /* call 0x004C3995 */

loc_004C5B9D: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5BA9
 * Original: 0x004C5BA9 - 0x004C5BED (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5BA9(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C5BA9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004C5B23(); /* call 0x004C5B23 */

loc_004C5BBC: ;
    if (TEST_NZ(eax, eax)) goto loc_004C5BC9; /* jne: not equal / not zero */

loc_004C5BC0: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C548E(); /* call 0x004C548E */

loc_004C5BC9: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_004C5BD1: ;
    if (TEST_S(eax, eax)) goto loc_004C5BE9; /* jl: less (signed <) */

loc_004C5BD5: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0); sub_004CAFFC(); /* call 0x004CAFFC */

loc_004C5BDD: ;
    if (TEST_S(eax, eax)) goto loc_004C5BE9; /* jl: less (signed <) */

loc_004C5BE1: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0); sub_004CB155(); /* call 0x004CB155 */

loc_004C5BE9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5BED
 * Original: 0x004C5BED - 0x004C5C79 (140 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5BED(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C5BED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    edi = 0x80000000u;
    (void)0; /* test MEM32(esi + 8), edi - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (TEST_NZ(MEM32(esi + 8), edi)) goto loc_004C5C15; /* jne: not equal / not zero */

loc_004C5C05: ;
    eax = MEM32(esi + 0xBC);
    if (CMP_EQ(eax, ebx)) goto loc_004C5C1B; /* je: equal / zero */

loc_004C5C0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C5C15: ;
    MEM32(esi + 0xBC) = ebx;

loc_004C5C1B: ;
    eax = MEM32(ebp + 0xC);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0xC0) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_004C5C61; /* je: equal / zero */

loc_004C5C28: ;
    ecx = MEM32(ebp + 8);
    if (CMP_EQ(ecx, ebx)) goto loc_004C5C3A; /* je: equal / zero */

loc_004C5C2F: ;
    MEM32(esi + 8) = MEM32(esi + 8) | edi;
    MEM32(esi + 0xBC) = ecx;
    goto loc_004C5C61;

loc_004C5C3A: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0x7F;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004C5C4A: ;
    MEM32(esi + 0xBC) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    MEM32(ebp + -4) = eax;

loc_004C5C61: ;
    PUSH32(esp, MEM32(esi + 0xC0));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C5779(); /* call 0x004C5779 */

loc_004C5C6F: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5C79
 * Original: 0x004C5C79 - 0x004C5CC0 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5C79(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C5C79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(ebx, edi)) goto loc_004C5C90; /* jne: not equal / not zero */

loc_004C5C88: ;
    (void)0; /* cmp MEM32(ebp + 0x10), edi - flags set for next jcc */
    MEM32(ebp + 0xC) = edi;
    if (CMP_EQ(MEM32(ebp + 0x10), edi)) goto loc_004C5C97; /* je: equal / zero */

loc_004C5C90: ;
    MEM32(ebp + 0xC) = 1;

loc_004C5C97: ;
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C5C9C: ;
    (void)0; /* cmp MEM32(0x4E1668), edi - flags set for next jcc */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(MEM32(0x4E1668), edi)) { sub_004C5CC0(); return; } /* je: equal / zero */

loc_004C5CAA: ;
    if (CMP_EQ(eax, edi)) goto loc_004C5CB9; /* je: equal / zero */

loc_004C5CAE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C5CB9: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C5D21(); return; /* tail jmp 0x004C5D21 */

}

/**
 * sub_004C5D27
 * Original: 0x004C5D27 - 0x004C5D4C (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5D27(void)
{

loc_004C5D27: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi + 4;
    ecx = edi;
    PUSH32(esp, 0); sub_004C562C(); /* call 0x004C562C */

loc_004C5D39: ;
    MEM32(edi) = 0x586028;
    POP32(esp, edi);
    MEM32(esi) = 0x586038;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5D4C
 * Original: 0x004C5D4C - 0x004C5F8C (576 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5D4C(void)
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

loc_004C5D4C: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x78;
    PUSH32(esp, 0); sub_004C36E9(); /* call 0x004C36E9 */

loc_004C5D61: ;
    esi = MEM32(ebp + 0x78);
    ebx = MEM32(ebp + 0x7C);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(ebp + 0x6C) = eax;
    MEM32(ebp + 0x68) = ecx;
    if (TEST_Z(ebx, ebx)) goto loc_004C5D81; /* je: equal / zero */

loc_004C5D76: ;
    eax = eax | MEM32(ebx);
    ecx = ecx | MEM32(ebx + 4);
    MEM32(ebp + 0x6C) = eax;
    MEM32(ebp + 0x68) = ecx;

loc_004C5D81: ;
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), 4)) goto loc_004C5D8B; /* jne: not equal / not zero */

loc_004C5D86: ;
    if (TEST_NZ(LO8(ecx), 0x40)) goto loc_004C5DC0; /* jne: not equal / not zero */

loc_004C5D8B: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6DC9(); /* call 0x004C6DC9 */

loc_004C5D9C: ;
    eax = esi + 0x44;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + -32;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004C5DB9; /* je: equal / zero */

loc_004C5DAD: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | 0x40;
    esi = ebp + -32;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */

loc_004C5DB9: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | 0x40;
    esi = MEM32(ebp + 0x78);

loc_004C5DC0: ;
    eax = MEM32(ebp + 0x6C);
    eax = eax & 0x400000;
    if ((eax == 0)) goto loc_004C5DDB; /* je: equal / zero */

loc_004C5DCA: ;
    if (CMP_EQ(MEM32(ebx + 0x40), 2)) goto loc_004C5DD8; /* je: equal / zero */

loc_004C5DD0: ;
    MEM16(ebp + 0x6E) = MEM16(ebp + 0x6E) | 0x7FF;
    goto loc_004C5DDB;

loc_004C5DD8: ;
    MEM32(ebp + 0x6C) = eax;

loc_004C5DDB: ;
    if (TEST_Z(ebx, ebx)) goto loc_004C5F4E; /* je: equal / zero */

loc_004C5DE3: ;
    ecx = MEM32(ebx + 0x40);
    if (CMP_EQ(ecx, 2)) goto loc_004C5F4E; /* je: equal / zero */

loc_004C5DEF: ;
    if (TEST_NZ(MEM32(ebp + 0x6C), 0x410001)) goto loc_004C5E06; /* jne: not equal / not zero */

loc_004C5DF8: ;
    edx = MEM32(ebp + 0x68);
    eax = 0x18000000;
    edx = edx & eax;
    if (CMP_EQ(edx, eax)) goto loc_004C5E5A; /* je: equal / zero */

loc_004C5E06: ;
    eax = ebp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    eax = ebx + 8;
    PUSH32(esp, eax);
    esi = esi + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4E1D1C), _icall_esp); /* indirect call */
    }

loc_004C5E1D: ;
    eax = ebx + 0x5C;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + 0x48;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004C5E3A; /* je: equal / zero */

loc_004C5E2E: ;
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) | 8;
    esi = ebp + 0x48;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */

loc_004C5E3A: ;
    fp_push(MEMF(ebx + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004C5E53; /* jnp: not parity */

loc_004C5E49: ;
    eax = MEM32(ebp + 0x54);
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) | 0x10;
    MEM32(ebx + 0x68) = eax;

loc_004C5E53: ;
    MEM8(ebp + 0x6B) = MEM8(ebp + 0x6B) | 0x18;
    esi = MEM32(ebp + 0x78);

loc_004C5E5A: ;
    (void)0; /* test MEM32(ebp + 0x6C), 0x18400044 - flags set for next jcc */
    edi = 0x20000000;
    if (TEST_NZ(MEM32(ebp + 0x6C), 0x18400044)) goto loc_004C5E6D; /* jne: not equal / not zero */

loc_004C5E68: ;
    if (TEST_NZ(MEM32(ebp + 0x68), edi)) goto loc_004C5EC4; /* jne: not equal / not zero */

loc_004C5E6D: ;
    fp_push(MEMF(ebx + 0x68)); /* fld float */
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x40));
    PUSH32(esp, 0); sub_004C37C1(); /* call 0x004C37C1 */

loc_004C5E94: ;
    fp_push(MEMF(ebx + 0x74)); /* fld float */
    fp_push(MEMF(ebp + 0x60)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004C5EB2; /* jp: parity */

loc_004C5EA3: ;
    fp_push(MEMF(ebx + 0x78)); /* fld float */
    fp_push(MEMF(ebp + 0x64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004C5EC1; /* jnp: not parity */

loc_004C5EB2: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    MEM32(ebx + 0x74) = eax;
    eax = MEM32(ebp + 0x64);
    MEM32(ebx + 0x78) = eax;

loc_004C5EC1: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;

loc_004C5EC4: ;
    (void)0; /* test MEM16(ebp + 0x6E), 0x808 - flags set for next jcc */
    edi = 0x40000000;
    if (TEST_NZ(MEM16(ebp + 0x6E), 0x808)) goto loc_004C5ED6; /* jne: not equal / not zero */

loc_004C5ED1: ;
    if (TEST_NZ(MEM32(ebp + 0x68), edi)) goto loc_004C5F03; /* jne: not equal / not zero */

loc_004C5ED6: ;
    eax = ebp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = ebx + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4E1D24), _icall_esp); /* indirect call */
    }

loc_004C5EE8: ;
    fp_push(MEMF(ebx + 0x70)); /* fld float */
    fp_push(MEMF(ebp + 0x5C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004C5F00; /* jnp: not parity */

loc_004C5EF7: ;
    eax = MEM32(ebp + 0x5C);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    MEM32(ebx + 0x70) = eax;

loc_004C5F00: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;

loc_004C5F03: ;
    (void)0; /* test MEM32(ebp + 0x6C), 0x8420002 - flags set for next jcc */
    edi = 0x80000000u;
    if (TEST_NZ(MEM32(ebp + 0x6C), 0x8420002)) goto loc_004C5F1A; /* jne: not equal / not zero */

loc_004C5F11: ;
    eax = MEM32(ebp + 0x68);
    eax = eax & edi;
    if (CMP_EQ(eax, edi)) goto loc_004C5F4E; /* je: equal / zero */

loc_004C5F1A: ;
    eax = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x40));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4E1D28), _icall_esp); /* indirect call */
    }

loc_004C5F33: ;
    fp_push(MEMF(ebx + 0x6C)); /* fld float */
    fp_push(MEMF(ebp + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004C5F4B; /* jnp: not parity */

loc_004C5F42: ;
    eax = MEM32(ebp + 0x58);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    MEM32(ebx + 0x6C) = eax;

loc_004C5F4B: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;

loc_004C5F4E: ;
    ecx = MEM32(ebp + 0x6C);
    eax = ecx;
    eax = eax & 0x7F;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_004C5F5B; /* je: equal / zero */

loc_004C5F59: ;
    MEM32(esi) = eax;

loc_004C5F5B: ;
    eax = MEM32(ebp + 0x68);
    eax = eax & 0x7F;
    if ((eax == 0)) goto loc_004C5F66; /* je: equal / zero */

loc_004C5F63: ;
    MEM32(esi + 4) = eax;

loc_004C5F66: ;
    eax = 0xFFFF0000u;
    ecx = ecx & eax;
    if ((ecx == 0)) goto loc_004C5F71; /* je: equal / zero */

loc_004C5F6F: ;
    MEM32(ebx) = ecx;

loc_004C5F71: ;
    ecx = MEM32(ebp + 0x68);
    ecx = ecx & eax;
    if ((ecx == 0)) goto loc_004C5F7B; /* je: equal / zero */

loc_004C5F78: ;
    MEM32(ebx + 4) = ecx;

loc_004C5F7B: ;
    ecx = ebp + 0x78;
    PUSH32(esp, 0); sub_004C370E(); /* call 0x004C370E */

loc_004C5F83: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x70;
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
 * sub_004C5F8C
 * Original: 0x004C5F8C - 0x004C5FB4 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5F8C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5F8C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C5F92: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C5FB4(); return; } /* je: equal / zero */

loc_004C5F9E: ;
    if (TEST_Z(esi, esi)) goto loc_004C5FAD; /* je: equal / zero */

loc_004C5FA2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C5FAD: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C5FD6(); return; /* tail jmp 0x004C5FD6 */

}

/**
 * sub_004C602C
 * Original: 0x004C602C - 0x004C6048 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C602C(void)
{
    int _cf = 0; /* carry flag */

loc_004C602C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C5F8C(); /* call 0x004C5F8C */

loc_004C6045: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6048
 * Original: 0x004C6048 - 0x004C6068 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6048(void)
{
    int _cf = 0; /* carry flag */

loc_004C6048: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = eax + 0xFFFFFFE4u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C5C79(); /* call 0x004C5C79 */

loc_004C6065: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C6068
 * Original: 0x004C6068 - 0x004C606D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6068(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6068: ;
    g_seh_ebp = ebp; sub_004C5FDA(); return; /* tail jmp 0x004C5FDA */

}

/**
 * sub_004C606D
 * Original: 0x004C606D - 0x004C6072 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C606D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C606D: ;
    g_seh_ebp = ebp; sub_004C5D4C(); return; /* tail jmp 0x004C5D4C */

}

/**
 * sub_004C6072
 * Original: 0x004C6072 - 0x004C6101 (143 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6072(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6072: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);
    PUSH32(esp, 0x3F);
    POP32(esp, ebp);
    MEM32(ebx + 4) = 1;
    MEM32(ebx) = 0x586074;
    edi = ebx + 0x38;
    esi = 0x4E12F4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = ebx + 0x80;
    edx = 0xFFF;
    PUSH32(esp, 0xC);
    MEM32(ebx + 0x30) = ebp;
    MEM32(eax) = edx;
    edi = ebx + 0x84;
    POP32(esp, ecx);
    esi = 0x4E12C0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x30) = ebp;
    MEM32(eax) = edx;
    eax = MEM32(0x4E1664);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    if (CMP_A(ecx, 2)) goto loc_004C60D3; /* ja: above (unsigned >) */

loc_004C60CC: ;
    if (TEST_Z(eax, 0xFFFC0000u)) goto loc_004C60D8; /* je: equal / zero */

loc_004C60D3: ;
    PUSH32(esp, 0); sub_0047EA70(); /* call 0x0047EA70 */

loc_004C60D8: ;
    MEM32(0x4E1660) = eax;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    edi = ebx + 0x10;
    eax = 0x1010101;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    PUSH32(esp, 0);
    ecx = ebx;
    MEM8(ebx + 0x2F) = 0;
    PUSH32(esp, 0); sub_004C39E9(); /* call 0x004C39E9 */

loc_004C60FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6101
 * Original: 0x004C6101 - 0x004C612F (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6101(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C6101: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C610A: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C612F(); return; } /* je: equal / zero */

loc_004C6119: ;
    if (TEST_Z(eax, eax)) goto loc_004C6128; /* je: equal / zero */

loc_004C611D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C6128: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C6197(); return; /* tail jmp 0x004C6197 */

}

/**
 * sub_004C61B6
 * Original: 0x004C61B6 - 0x004C61CF (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C61B6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C61B6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    (void)0; /* test eax, 0x182000 - flags set for next jcc */
    MEM32(ebx + 8) = eax;
    if (TEST_Z(eax, 0x182000)) { sub_004C61CF(); return; } /* je: equal / zero */

loc_004C61CA: ;
    MEM32(ebx + 0x20) = ebp;
    g_seh_ebp = ebp; sub_004C61DD(); return; /* tail jmp 0x004C61DD */

}

/**
 * sub_004C62B8
 * Original: 0x004C62B8 - 0x004C62DD (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C62B8(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C62B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi) = 0x586054;
    PUSH32(esp, 0); sub_004C5BED(); /* call 0x004C5BED */

loc_004C62CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004C3F4C(); /* call 0x004C3F4C */

loc_004C62D5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C5AD6(); return; /* tail jmp 0x004C5AD6 */

}

/**
 * sub_004C62DD
 * Original: 0x004C62DD - 0x004C6342 (101 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C62DD(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C62DD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    (void)0; /* test eax, 0x182000 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x4CEB88;
    if (TEST_NZ(eax, 0x182000)) goto loc_004C62F7; /* jne: not equal / not zero */

loc_004C62F4: ;
    ecx = MEM32(esi + 0xC);

loc_004C62F7: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004C61B6(); /* call 0x004C61B6 */

loc_004C6303: ;
    if (TEST_S(eax, eax)) goto loc_004C633D; /* jl: less (signed <) */

loc_004C6307: ;
    ecx = MEM32(esi + 4);
    if (TEST_Z(ecx, 0x180000)) goto loc_004C631D; /* je: equal / zero */

loc_004C6312: ;
    ecx = MEM32(esi + 0x14);
    MEM32(edi + 0xD4) = ecx;
    goto loc_004C632C;

loc_004C631D: ;
    if (TEST_Z(HI8(ecx), 0x20)) goto loc_004C632C; /* je: equal / zero */

loc_004C6322: ;
    MEM32(edi + 0xD4) = 0x1F;

loc_004C632C: ;
    esi = MEM32(esi + 8);
    if (TEST_Z(esi, esi)) goto loc_004C633D; /* je: equal / zero */

loc_004C6333: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_004C5BED(); /* call 0x004C5BED */

loc_004C633D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6342
 * Original: 0x004C6342 - 0x004C6370 (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6342(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6342: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C6348: ;
    (void)0; /* cmp MEM32(0x4E1668), 0 - flags set for next jcc */
    eax = ZX8(LO8(eax));
    MEM32(esp) = eax;
    if (CMP_EQ(MEM32(0x4E1668), 0)) { sub_004C6370(); return; } /* je: equal / zero */

loc_004C6357: ;
    if (TEST_Z(eax, eax)) goto loc_004C6366; /* je: equal / zero */

loc_004C635B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C6366: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C6425(); return; /* tail jmp 0x004C6425 */

}

/**
 * sub_004C644A
 * Original: 0x004C644A - 0x004C6483 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C644A(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C644A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    edi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_004C61B6(); /* call 0x004C61B6 */

loc_004C645F: ;
    if (TEST_S(eax, eax)) goto loc_004C647E; /* jl: less (signed <) */

loc_004C6463: ;
    ecx = MEM32(esi + 4);
    MEM32(edi + 0xBC) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(edi + 0xC0) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0xC4) = ecx;

loc_004C647E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
