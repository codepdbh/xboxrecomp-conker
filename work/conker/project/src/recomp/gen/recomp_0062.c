/**
 * Burnout 3 - Recompiled code chunk 62
 * Functions: 250 (0x004A0710 - 0x004B205D)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004A0710
 * Original: 0x004A0710 - 0x004A073A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0710(void)
{

loc_004A0710: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x20));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(esp + 0x20));
    esi = esp + 0x14;
    PUSH32(esp, MEM32(esp + 0x20));
    esp = esp - 0xC;
    edi = esp;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_004AED07(); /* call 0x004AED07 */

loc_004A0735: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004A073A
 * Original: 0x004A073A - 0x004A0745 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A073A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A073A: ;
    if (TEST_NZ(ecx, ecx)) { sub_004A0745(); return; } /* jne: not equal / not zero */

loc_004A073E: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A0756(); return; /* tail jmp 0x004A0756 */

}

/**
 * sub_004A0759
 * Original: 0x004A0759 - 0x004A0778 (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0759(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A0759: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1EC;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    ebx = ecx;
    if (CMP_EQ(eax, esi)) { sub_004A0778(); return; } /* je: equal / zero */

loc_004A076F: ;
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) { sub_004A0778(); return; } /* je: equal / zero */

loc_004A0775: ;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_004A077D(); return; /* tail jmp 0x004A077D */

}

/**
 * sub_004A08EB
 * Original: 0x004A08EB - 0x004A0A19 (302 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A08EB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A08EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x728);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 1;
    if (CMP_EQ(eax, ebx)) goto loc_004A090E; /* je: equal / zero */

loc_004A0908: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A090E: ;
    eax = MEM32(esi + 0x734);
    if (CMP_EQ(eax, ebx)) goto loc_004A0920; /* je: equal / zero */

loc_004A0918: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A0920: ;
    eax = MEM32(esi + 0xCAC);
    if (CMP_EQ(eax, ebx)) goto loc_004A0932; /* je: equal / zero */

loc_004A092A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A0932: ;
    eax = MEM32(esi + 0x14D8);
    if (CMP_EQ(eax, ebx)) goto loc_004A0947; /* je: equal / zero */

loc_004A093C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A0944: ;
    MEM32(ebp + -4) = ebx;

loc_004A0947: ;
    eax = MEM32(esi + 0x14E0);
    if (CMP_EQ(eax, ebx)) goto loc_004A095C; /* je: equal / zero */

loc_004A0951: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A0959: ;
    MEM32(ebp + -4) = ebx;

loc_004A095C: ;
    eax = MEM32(esi + 0x18A4);
    if (CMP_EQ(eax, ebx)) goto loc_004A097B; /* je: equal / zero */

loc_004A0966: ;
    eax = MEM32(eax + 0x14D0);
    if (CMP_EQ(eax, ebx)) goto loc_004A097B; /* je: equal / zero */

loc_004A0970: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A0978: ;
    MEM32(ebp + -4) = ebx;

loc_004A097B: ;
    eax = MEM32(esi + 0x1398);
    if (CMP_EQ(eax, ebx)) goto loc_004A09BD; /* je: equal / zero */

loc_004A0985: ;
    (void)0; /* cmp MEM32(esi + 0x139C), ebx - flags set for next jcc */
    eax = MEM32(eax + 0x164);
    if (CMP_NE(MEM32(esi + 0x139C), ebx)) goto loc_004A09AE; /* jne: not equal / not zero */

loc_004A0993: ;
    if (CMP_EQ(eax, ebx)) goto loc_004A09A2; /* je: equal / zero */

loc_004A0997: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A099F: ;
    MEM32(ebp + -4) = ebx;

loc_004A09A2: ;
    eax = MEM32(esi + 0x1398);
    eax = MEM32(eax + 0x170);

loc_004A09AE: ;
    if (CMP_EQ(eax, ebx)) goto loc_004A09BD; /* je: equal / zero */

loc_004A09B2: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A09BA: ;
    MEM32(ebp + -4) = ebx;

loc_004A09BD: ;
    edi = esi + 0x1870;
    MEM32(ebp + -8) = 0xD;

loc_004A09CA: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_004A0A09; /* je: equal / zero */

loc_004A09D0: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2AA6(); /* call 0x004B2AA6 */

loc_004A09D8: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A0A07; /* jge: greater or equal (signed >=) */

loc_004A09DC: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0); sub_004B20C3(); /* call 0x004B20C3 */

loc_004A09E5: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_004A0A05; /* je: equal / zero */

loc_004A09EB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0); sub_004B39B7(); /* call 0x004B39B7 */

loc_004A09F5: ;
    if (TEST_S(eax, eax)) goto loc_004A0A05; /* jl: less (signed <) */

loc_004A09F9: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A0A01: ;
    if (TEST_Z(eax, eax)) goto loc_004A09F9; /* je: equal / zero */

loc_004A0A05: ;
    ebx = 0; /* xor self */

loc_004A0A07: ;
    MEM32(edi) = ebx;

loc_004A0A09: ;
    edi = edi + 4;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if ((MEM32(ebp + -8) != 0)) goto loc_004A09CA; /* jne: not equal / not zero */

loc_004A0A11: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004A0A19
 * Original: 0x004A0A19 - 0x004A0A28 (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0A19(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A0A19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (TEST_NZ(ecx, ecx)) { sub_004A0A28(); return; } /* jne: not equal / not zero */

loc_004A0A21: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A0A4B(); return; /* tail jmp 0x004A0A4B */

}

/**
 * sub_004A0A4F
 * Original: 0x004A0A4F - 0x004A0A8E (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0A4F(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A0A4F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x94);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004A0A64; /* je: equal / zero */

loc_004A0A5E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049CB45(); /* call 0x0049CB45 */

loc_004A0A64: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004A125D(); /* call 0x004A125D */

loc_004A0A6B: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004A08EB(); /* call 0x004A08EB */

loc_004A0A72: ;
    edi = esi + 0x98;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_0043087B(); /* call 0x0043087B */

loc_004A0A7F: ;
    MEM32(edi) = MEM32(edi) & 0;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_0049CB5C(); /* call 0x0049CB5C */

loc_004A0A8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A0A8E
 * Original: 0x004A0A8E - 0x004A0AB6 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0A8E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A0A8E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x190;

loc_004A0A97: ;
    eax = 0;
    ecx = 0x75F02C;
    edx = 1;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if (TEST_Z(eax, eax)) { sub_004A0AB6(); return; } /* je: equal / zero */

loc_004A0AAD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0042E379(); /* call 0x0042E379 */

loc_004A0AB4: ;
    goto loc_004A0A97;

}

/**
 * sub_004A0B8B
 * Original: 0x004A0B8B - 0x004A0B9C (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0B8B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A0B8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    if (TEST_NZ(ecx, ecx)) { sub_004A0B9C(); return; } /* jne: not equal / not zero */

loc_004A0B95: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A0BF9(); return; /* tail jmp 0x004A0BF9 */

}

/**
 * sub_004A0BFD
 * Original: 0x004A0BFD - 0x004A0C30 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0BFD(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A0BFD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi + 0x160;
    (void)0; /* cmp MEM32(esi), 0 - flags set for next jcc */
    ebx = ecx;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_004A0C1D; /* je: equal / zero */

loc_004A0C11: ;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004A0C1A: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_004A0C1D: ;
    PUSH32(esp, 0xA7);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A0C2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A0C30
 * Original: 0x004A0C30 - 0x004A0C5B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A0C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    eax = eax - 0;
    PUSH32(esp, edi);
    ebx = ecx;
    if ((eax == 0)) { sub_004A0C5B(); return; } /* je: equal / zero */

loc_004A0C46: ;
    eax--;
    if ((eax == 0)) goto loc_004A0C53; /* je: equal / zero */

loc_004A0C49: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004A0D00(); return; /* tail jmp 0x004A0D00 */

loc_004A0C53: ;
    eax = MEM32(esi + 0x1C);
    g_seh_ebp = ebp; sub_004A0D00(); return; /* tail jmp 0x004A0D00 */

}

/**
 * sub_004A0D07
 * Original: 0x004A0D07 - 0x004A0D12 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0D07(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0D07: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A0B8B(); return; /* tail jmp 0x004A0B8B */

}

/**
 * sub_004A0D12
 * Original: 0x004A0D12 - 0x004A0D42 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0D12(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A0D12: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA7);
    eax = ebx + eax + 0x168;
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0); sub_004B5390(); /* call 0x004B5390 */

loc_004A0D32: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(ebp + 0x1C);
    MEM32(esi) = eax;
    if (TEST_NZ(eax, eax)) { sub_004A0D42(); return; } /* jne: not equal / not zero */

loc_004A0D3B: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_004A0DA3(); return; /* tail jmp 0x004A0DA3 */

}

/**
 * sub_004A0DAA
 * Original: 0x004A0DAA - 0x004A0DC4 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0DAA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A0DAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(ecx, edi)) { sub_004A0DC4(); return; } /* jne: not equal / not zero */

loc_004A0DBA: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A0F07(); return; /* tail jmp 0x004A0F07 */

}

/**
 * sub_004A0F0C
 * Original: 0x004A0F0C - 0x004A0F1B (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0F0C(void)
{
    uint32_t ebp;

loc_004A0F0C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004A0DAA(); return; /* tail jmp 0x004A0DAA */

}

/**
 * sub_004A0F1B
 * Original: 0x004A0F1B - 0x004A0F36 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0F1B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0F1B: ;
    eax = MEM32(esp + 4);
    if (CMP_NE(MEM32(eax + 0xC), 0x1500F0)) { sub_004A0F36(); return; } /* jne: not equal / not zero */

loc_004A0F28: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 8);
    ecx = ecx + 0x1C;
    MEM32(edx) = ecx;
    g_seh_ebp = ebp; sub_004A0F3D(); return; /* tail jmp 0x004A0F3D */

}

/**
 * sub_004A0F43
 * Original: 0x004A0F43 - 0x004A0F89 (70 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0F43(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0F43: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM32(esi + 0xC), 0x1500F0)) { sub_004A0F89(); return; } /* jne: not equal / not zero */

loc_004A0F51: ;
    eax = MEM32(esi + 0x66C);
    eax = MEM32(eax + 0xA8);
    if (TEST_Z(eax, eax)) goto loc_004A0F74; /* je: equal / zero */

loc_004A0F61: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A0F67: ;
    eax = MEM32(esi + 0x66C);
    MEM32(eax + 0xA8) = MEM32(eax + 0xA8) & 0;

loc_004A0F74: ;
    eax = MEM32(esi + 0x66C);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    MEM32(esi + 0x66C) = MEM32(esi + 0x66C) & 0;
    g_seh_ebp = ebp; sub_004A0F90(); return; /* tail jmp 0x004A0F90 */

}

/**
 * sub_004A0FE0
 * Original: 0x004A0FE0 - 0x004A100B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0FE0: ;
    ecx = MEM32(esp + 4);
    if (CMP_NE(MEM32(ecx + 0xC), 0x1500F0)) { sub_004A100B(); return; } /* jne: not equal / not zero */

loc_004A0FED: ;
    eax = MEM32(ecx + 0xA4);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx + 0xB0;
    edx = MEM32(eax);
    MEM32(esi) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004A100F(); return; /* tail jmp 0x004A100F */

}

/**
 * sub_004A1018
 * Original: 0x004A1018 - 0x004A1043 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1018(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A1018: ;
    ecx = MEM32(esp + 4);
    if (CMP_NE(MEM32(ecx + 0xC), 0x1500F0)) { sub_004A1043(); return; } /* jne: not equal / not zero */

loc_004A1025: ;
    eax = MEM32(ecx + 0x684);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx + 0x694;
    edx = MEM32(eax);
    MEM32(esi) = edx;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004A1047(); return; /* tail jmp 0x004A1047 */

}

/**
 * sub_004A1050
 * Original: 0x004A1050 - 0x004A10A2 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A1050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x3CC), ebx - flags set for next jcc */
    ebp = ecx;
    if (CMP_BE(MEM32(esi + 0x3CC), ebx)) goto loc_004A1080; /* jbe: below or equal (unsigned <=) */

loc_004A1063: ;
    PUSH32(esp, edi);
    edi = esi + 0x3D0;

loc_004A106A: ;
    PUSH32(esp, MEM32(edi));
    ecx = ebp;
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A1073: ;
    ebx++;
    edi = edi + 4;
    if (CMP_B(ebx, MEM32(esi + 0x3CC))) goto loc_004A106A; /* jb: below (unsigned <) */

loc_004A107F: ;
    POP32(esp, edi);

loc_004A1080: ;
    MEM32(esi + 0x3CC) = MEM32(esi + 0x3CC) & 0;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = esi + 0x298;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004A1093: ;
    MEM32(eax) = 1;
    eax = eax + 0x14;
    ecx--;
    if ((ecx != 0)) goto loc_004A1093; /* jne: not equal / not zero */

loc_004A109F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A10E2
 * Original: 0x004A10E2 - 0x004A10E9 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A10E2(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A10E2: ;
    if (TEST_NZ(ecx, ecx)) { sub_004A10E9(); return; } /* jne: not equal / not zero */

loc_004A10E6: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_004A10F0
 * Original: 0x004A10F0 - 0x004A111E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A10F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A10F0: ;
    ecx = MEM32(ecx + 0xD0);
    eax = 0; /* xor self */

loc_004A10F8: ;
    edx = MEM32(ecx);
    if (CMP_NE(edx, MEM32(esp + 4))) goto loc_004A110F; /* jne: not equal / not zero */

loc_004A1100: ;
    edx = MEM32(ecx + 4);
    if (CMP_NE(edx, MEM32(esp + 8))) goto loc_004A110F; /* jne: not equal / not zero */

loc_004A1109: ;
    if (TEST_Z(MEM8(ecx + 8), 3)) goto loc_004A111B; /* je: equal / zero */

loc_004A110F: ;
    eax++;
    ecx = ecx + 0x70;
    if (CMP_B(eax, 4)) goto loc_004A10F8; /* jb: below (unsigned <) */

loc_004A1118: ;
    eax = eax | 0xFFFFFFFFu;

loc_004A111B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A111E
 * Original: 0x004A111E - 0x004A1138 (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A111E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A111E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    ebx++;
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebp + -16) = ebx;
    if (CMP_NE(ecx, edx)) { sub_004A1138(); return; } /* jne: not equal / not zero */

loc_004A1131: ;
    eax = ebx;
    g_seh_ebp = ebp; sub_004A11BD(); return; /* tail jmp 0x004A11BD */

}

/**
 * sub_004A11C0
 * Original: 0x004A11C0 - 0x004A11D4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A11C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A11C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    if (CMP_NE(ebx, ebp)) { sub_004A11D4(); return; } /* jne: not equal / not zero */

loc_004A11CA: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A1258(); return; /* tail jmp 0x004A1258 */

}

/**
 * sub_004A125D
 * Original: 0x004A125D - 0x004A129A (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A125D(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A125D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x728;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004A1276; /* je: equal / zero */

loc_004A126D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A1273: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004A1276: ;
    edi = esi + 0x724;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004A128D; /* je: equal / zero */

loc_004A1282: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2AA6(); /* call 0x004B2AA6 */

loc_004A128A: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004A128D: ;
    POP32(esp, edi);
    MEM32(esi + 0x72C) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A129A
 * Original: 0x004A129A - 0x004A12D7 (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A129A(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A129A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x734;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004A12B3; /* je: equal / zero */

loc_004A12AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A12B0: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004A12B3: ;
    edi = esi + 0x730;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004A12CA; /* je: equal / zero */

loc_004A12BF: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2AA6(); /* call 0x004B2AA6 */

loc_004A12C7: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004A12CA: ;
    POP32(esp, edi);
    MEM32(esi + 0x738) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A12D7
 * Original: 0x004A12D7 - 0x004A1314 (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A12D7(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A12D7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xCAC;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004A12F0; /* je: equal / zero */

loc_004A12E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A12ED: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004A12F0: ;
    edi = esi + 0xCA8;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004A1307; /* je: equal / zero */

loc_004A12FC: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2AA6(); /* call 0x004B2AA6 */

loc_004A1304: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004A1307: ;
    POP32(esp, edi);
    MEM32(esi + 0xCB0) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A1314
 * Original: 0x004A1314 - 0x004A131F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1314(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A1314: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A111E(); return; /* tail jmp 0x004A111E */

}

/**
 * sub_004A131F
 * Original: 0x004A131F - 0x004A146E (335 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A131F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A131F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1A8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B64);
    MEM32(ebp + -16) = esi;
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A1349: ;
    (void)0; /* cmp MEM32(esi + 0x594), ebx - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(MEM32(esi + 0x594), ebx)) goto loc_004A13F0; /* jbe: below or equal (unsigned <=) */

loc_004A1358: ;
    esi = esi + 0x598;
    MEM32(ebp + 0xC) = esi;

loc_004A1361: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax);
    eax = MEM32(0x881AC8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(0x881ACC);
    MEM32(ebp + -8) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = esi + 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B44);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A138C: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B30);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A139F: ;
    PUSH32(esp, 0x18);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAA0(); /* call 0x0046DAA0 */

loc_004A13AA: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -424;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046DA9A(); /* call 0x0046DA9A */

loc_004A13BC: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -424;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046DA94(); /* call 0x0046DA94 */

loc_004A13D7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    if (CMP_B(ecx, MEM32(eax + 0x594))) goto loc_004A1361; /* jb: below (unsigned <) */

loc_004A13F0: ;
    ecx = MEM32(0x881B58);
    eax = MEM32(0x561094);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(0x881B5C);
    MEM32(ebp + -8) = ecx;
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B44);
    esi = eax;
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A141C: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B30);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A142F: ;
    PUSH32(esp, 0x18);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAA0(); /* call 0x0046DAA0 */

loc_004A143A: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -424;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046DA9A(); /* call 0x0046DA9A */

loc_004A144C: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -424;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046DA94(); /* call 0x0046DA94 */

loc_004A1467: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A146E
 * Original: 0x004A146E - 0x004A15BF (337 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A146E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A146E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C0;
    PUSH32(esp, ebx);
    eax = MEM32(0x561094);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x881B58);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(0x881B5C);
    MEM32(ebp + -8) = ecx;
    ecx = ebp + -44;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B44);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A14AE: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B30);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A14C3: ;
    PUSH32(esp, 0x18);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAA0(); /* call 0x0046DAA0 */

loc_004A14CE: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -448;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046DA9A(); /* call 0x0046DA9A */

loc_004A14E0: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -448;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046DA94(); /* call 0x0046DA94 */

loc_004A14FA: ;
    eax = MEM32(esi + 0x594);
    eax--;
    if (((int32_t)eax < 0)) goto loc_004A1593; /* js: sign (negative) */

loc_004A1507: ;
    ecx = esi + eax * 4 + 0x598;
    eax++;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;

loc_004A1515: ;
    eax = MEM32(ebp + -8);
    esi = MEM32(eax);
    eax = MEM32(0x881AC8);
    MEM32(ebp + -20) = eax;
    eax = MEM32(0x881ACC);
    MEM32(ebp + -16) = eax;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = esi + 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B44);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A1540: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B30);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A1553: ;
    PUSH32(esp, 0x18);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAA0(); /* call 0x0046DAA0 */

loc_004A155E: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -448;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046DA9A(); /* call 0x0046DA9A */

loc_004A1570: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -448;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046DA94(); /* call 0x0046DA94 */

loc_004A158A: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 4;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_004A1515; /* jne: not equal / not zero */

loc_004A1593: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B64);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A15A8: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    esi = ebp + -64;
    /* repe cmpsd - string compare, ecx iterations */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, (1 /* strings matched (repe cmpsb) */) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A15BF
 * Original: 0x004A15BF - 0x004A1678 (185 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A15BF(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A15BF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    (void)0; /* cmp MEM32(ebx + 0xC), 0 - flags set for next jcc */
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x14);
    if (CMP_NE(MEM32(ebx + 0xC), 0)) goto loc_004A1671; /* jne: not equal / not zero */

loc_004A15D4: ;
    if (TEST_NZ(edx, edx)) goto loc_004A1608; /* jne: not equal / not zero */

loc_004A15D8: ;
    eax = MEM32(eax + 0x18);
    if (CMP_B(eax, 4)) goto loc_004A15EC; /* jb: below (unsigned <) */

loc_004A15E0: ;
    MEM32(ebx + 0xC) = 0x1500F0;
    goto loc_004A1671;

loc_004A15EC: ;
    if (CMP_NE(eax, 2)) goto loc_004A15FA; /* jne: not equal / not zero */

loc_004A15F1: ;
    MEM32(ebx + 0xC) = 0x80151904u;
    goto loc_004A1671;

loc_004A15FA: ;
    if (CMP_NE(eax, 3)) goto loc_004A1671; /* jne: not equal / not zero */

loc_004A15FF: ;
    MEM32(ebx + 0xC) = 0x80151903u;
    goto loc_004A1671;

loc_004A1608: ;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    if (CMP_EQ(esi, 0x2734)) goto loc_004A1670; /* je: equal / zero */

loc_004A1613: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(esi, esi)) goto loc_004A1632; /* jne: not equal / not zero */

loc_004A1618: ;
    PUSH32(esp, 0xA);
    edi = eax + 0x1C;
    POP32(esp, ecx);
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax + 0x18) = 4;
    MEM32(ebx + 0xC) = 0x1500F0;
    goto loc_004A1665;

loc_004A1632: ;
    ecx = MEM32(ecx + 0xC4);
    edi = 0x274C;
    if (CMP_NE(esi, edi)) goto loc_004A1654; /* jne: not equal / not zero */

loc_004A1641: ;
    MEM32(ecx + 0x34) = edi;
    MEM32(eax + 0x18) = 2;
    MEM32(ebx + 0xC) = 0x80151904u;
    goto loc_004A1665;

loc_004A1654: ;
    MEM32(ecx + 0x34) = esi;
    MEM32(eax + 0x18) = 3;
    MEM32(ebx + 0xC) = 0x80151903u;

loc_004A1665: ;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) & 0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0048D6C9(); /* call 0x0048D6C9 */

loc_004A166F: ;
    POP32(esp, edi);

loc_004A1670: ;
    POP32(esp, esi);

loc_004A1671: ;
    eax = MEM32(ebx + 0xC);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A16AA
 * Original: 0x004A16AA - 0x004A1796 (236 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A16AA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A16AA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edx = ecx;
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    PUSH32(esp, esi);
    ecx = edx;
    edi = eax + edx + 0x5EC;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004A16D8: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    ebx = edi + 0x18;
    MEM32(esi) = 0x4A15BF;
    MEM32(esi + 4) = 0x4A1678;
    MEM32(esi + 0x10) = edi;
    MEM32(ebp + 8) = ebx;

loc_004A16F2: ;
    MEM32(ebp + 0x10) = ebx;
    eax = 0;
    ecx = MEM32(ebp + 0x10);
    edx = 1;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_004A175C; /* je: equal / zero */

loc_004A170B: ;
    if (CMP_EQ(eax, 1)) goto loc_004A1757; /* je: equal / zero */

loc_004A1710: ;
    if (CMP_EQ(eax, 2)) goto loc_004A172F; /* je: equal / zero */

loc_004A1715: ;
    if (CMP_NE(eax, 3)) goto loc_004A1744; /* jne: not equal / not zero */

loc_004A171A: ;
    MEM32(ebp + 0x10) = ebx;
    eax = 3;
    ecx = MEM32(ebp + 0x10);
    edx = 0;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    goto loc_004A16F2;

loc_004A172F: ;
    MEM32(ebp + 0x10) = ebx;
    eax = 2;
    ecx = MEM32(ebp + 0x10);
    edx = 0;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    goto loc_004A16F2;

loc_004A1744: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_004A178C;

loc_004A1746: ;
    if (CMP_A(eax, 5)) goto loc_004A178C; /* ja: above (unsigned >) */

loc_004A174B: ;
    MEM32(esi + 0xC) = 0x1500F0;

loc_004A1752: ;
    MEM32(ebp + -4) = ecx;
    goto loc_004A178C;

loc_004A1757: ;
    MEM32(esi + 0xC) = ecx;
    goto loc_004A1752;

loc_004A175C: ;
    eax = MEM32(ebp + 0xC);
    ebx = esi + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0048D6B2(); /* call 0x0048D6B2 */

loc_004A176D: ;
    if (TEST_NZ(eax, eax)) goto loc_004A1775; /* jne: not equal / not zero */

loc_004A1771: ;
    if (CMP_NE(MEM32(ebx), eax)) goto loc_004A1786; /* jne: not equal / not zero */

loc_004A1775: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 3;
    MEM32(ebx) = MEM32(ebx) & 0;
    eax = 0x80151903u;

loc_004A1786: ;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0xC) = eax;

loc_004A178C: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A1796
 * Original: 0x004A1796 - 0x004A17E6 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1796(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A1796: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x5DC;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x66C));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -1500;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x38));
    edi = ecx;
    PUSH32(esp, MEM32(esi + 0x34));
    MEM32(ebp + -4) = 0x5C0;
    PUSH32(esp, 0); sub_004B7028(); /* call 0x004B7028 */

loc_004A17C9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(eax & eax, 0)) { sub_004A17E6(); return; } /* jge: greater or equal (signed >=) */

loc_004A17D0: ;
    edi = MEM32(edi + 0xC4);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) | 8;
    MEM32(ebp + 8) = 0x80150008u;
    g_seh_ebp = ebp; sub_004A18A9(); return; /* tail jmp 0x004A18A9 */

}

/**
 * sub_004A18B2
 * Original: 0x004A18B2 - 0x004A1BAF (765 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A18B2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A18B2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax = eax - 6;
    PUSH32(esp, edi);
    edi = ecx;
    if ((eax == 0)) goto loc_004A1AD4; /* je: equal / zero */

loc_004A18C9: ;
    eax--;
    eax--;
    if ((eax != 0)) goto loc_004A1B9A; /* jne: not equal / not zero */

loc_004A18D1: ;
    eax = esi + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A18DA: ;
    ebx = 0x1500F0;
    if (CMP_NE(eax, ebx)) goto loc_004A1A68; /* jne: not equal / not zero */

loc_004A18E7: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = esi + 0x74;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B5577(); /* call 0x004B5577 */

loc_004A18FD: ;
    PUSH32(esp, MEM32(esi + 0x66C));
    eax = esi + 0xAC;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B7362(); /* call 0x004B7362 */

loc_004A1914: ;
    edx = eax;
    edx = edx & 0xFFFF;
    if (CMP_EQ(edx, 0x25)) goto loc_004A1A05; /* je: equal / zero */

loc_004A1925: ;
    if (CMP_EQ(edx, 0x19)) goto loc_004A1A05; /* je: equal / zero */

loc_004A192E: ;
    if (CMP_EQ(eax, 0xC000006Du)) goto loc_004A1A21; /* je: equal / zero */

loc_004A1939: ;
    if (CMP_NE(eax, 0xC000009Au)) goto loc_004A1962; /* jne: not equal / not zero */

loc_004A1940: ;
    edi = MEM32(edi + 0xC4);
    eax = MEM32(edi + 0x30);
    eax = eax & 0xFFFFFBFFu;
    eax = eax | 0x1800;
    MEM32(edi + 0x30) = eax;
    MEM32(esi + 0xC) = 0x80150008u;
    goto loc_004A1B9A;

loc_004A1962: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A19B5; /* jge: greater or equal (signed >=) */

loc_004A1966: ;
    ecx = MEM32(edi + 0xC4);
    ebx = MEM32(ecx + 0x30);
    ebx = ebx & 0xFFFFEFFFu;
    ebx = ebx | 0xC00;
    MEM32(ecx + 0x30) = ebx;
    ecx = MEM32(edi + 0xC4);
    MEM32(ecx + 0x34) = eax;
    if (CMP_NE(MEM32(esi + 0x34), 0)) goto loc_004A1B77; /* jne: not equal / not zero */

loc_004A1991: ;
    if (CMP_EQ(edx, 6)) goto loc_004A199F; /* je: equal / zero */

loc_004A1996: ;
    if (CMP_NE(edx, 0x18)) goto loc_004A1B77; /* jne: not equal / not zero */

loc_004A199F: ;
    edi = MEM32(edi + 0xC4);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) | 0x10;
    MEM32(esi + 0xC) = 0x80151006u;
    goto loc_004A1B9A;

loc_004A19B5: ;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFFEBFFu;
    ecx = ecx | 0x800;
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(esi + 0x66C);
    MEM32(esi + 0x10) = 0x63;
    MEM32(esi + 0xC) = ebx;
    eax = MEM32(eax + 0xAC);
    if (TEST_Z(eax, eax)) goto loc_004A1B9A; /* je: equal / zero */

loc_004A19EB: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A19F3: ;
    eax = MEM32(esi + 0x66C);
    MEM32(eax + 0xAC) = MEM32(eax + 0xAC) & 0;
    goto loc_004A1B9A;

loc_004A1A05: ;
    ecx = MEM32(esi + 0x14);
    if (CMP_AE(ecx, 2)) goto loc_004A1A4F; /* jae: above or equal (unsigned >=) */

loc_004A1A0D: ;
    ecx++;
    MEM32(esi + 0x14) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004A1796(); /* call 0x004A1796 */

loc_004A1A19: ;
    if (TEST_S(eax, eax)) goto loc_004A1B97; /* jl: less (signed <) */

loc_004A1A21: ;
    PUSH32(esp, 0);
    eax = esi + 0x74;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004A1A2E: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A1B9A; /* jge: greater or equal (signed >=) */

loc_004A1A36: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFFF3FFu;
    edi = edi | 0x1000;
    goto loc_004A1A83;

loc_004A1A4F: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFFEFFFu;
    edi = edi | 0xC00;
    goto loc_004A1A83;

loc_004A1A68: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A1A8D; /* jge: greater or equal (signed >=) */

loc_004A1A6C: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFFF7FFu;
    edi = edi | 0x1400;

loc_004A1A83: ;
    MEM32(edx + 0x30) = edi;
    ecx = MEM32(ecx);
    goto loc_004A1B74;

loc_004A1A8D: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004A1A92: ;
    if (CMP_B(eax, MEM32(esi + 0x1C))) goto loc_004A1B9A; /* jb: below (unsigned <) */

loc_004A1A9B: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1;
    eax = MEM32(esi + 0x18);
    if (CMP_B(eax, MEM32(0x6515DC))) goto loc_004A1ABF; /* jb: below (unsigned <) */

loc_004A1AA9: ;
    edi = MEM32(edi + 0xC4);
    MEM8(edi + 0x31) = MEM8(edi + 0x31) | 0x1C;
    MEM32(esi + 0xC) = 0x80151909u;
    goto loc_004A1B9A;

loc_004A1ABF: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004A1796(); /* call 0x004A1796 */

loc_004A1AC7: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A1B9A; /* jge: greater or equal (signed >=) */

loc_004A1ACF: ;
    goto loc_004A1B97;

loc_004A1AD4: ;
    ebx = esi + 0x3C;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004A15BF(); /* call 0x004A15BF */

loc_004A1ADF: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A1B89; /* jne: not equal / not zero */

loc_004A1AEA: ;
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004A0F1B(); /* call 0x004A0F1B */

loc_004A1AF6: ;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFBFFFFu;
    ecx = ecx | 0x80000;
    MEM32(eax + 0x30) = ecx;
    ebx = esi + 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0x6C;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xAC;
    MEM32(esi + 0x70) = ecx;
    MEM32(eax) = 0x5C0;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC4);
    PUSH32(esp, MEM32(eax + 0x4C));
    ecx = edi;
    PUSH32(esp, 0); sub_004B57FC(); /* call 0x004B57FC */

loc_004A1B3C: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004A1796(); /* call 0x004A1796 */

loc_004A1B44: ;
    if (TEST_S(eax, eax)) goto loc_004A1B97; /* jl: less (signed <) */

loc_004A1B48: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004A1B52: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A1B80; /* jge: greater or equal (signed >=) */

loc_004A1B56: ;
    ecx = MEM32(edi + 0xC4);
    edx = MEM32(ecx + 0x30);
    edx = edx & 0xFFFFF3FFu;
    edx = edx | 0x1000;
    MEM32(ecx + 0x30) = edx;
    ecx = MEM32(edi + 0xC4);

loc_004A1B74: ;
    MEM32(ecx + 0x34) = eax;

loc_004A1B77: ;
    MEM32(esi + 0xC) = 0x80151908u;
    goto loc_004A1B9A;

loc_004A1B80: ;
    MEM32(esi + 0x10) = 8;
    goto loc_004A1B9A;

loc_004A1B89: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A1B9A; /* jge: greater or equal (signed >=) */

loc_004A1B8D: ;
    edi = MEM32(edi + 0xC4);
    MEM8(edi + 0x32) = MEM8(edi + 0x32) | 0xC;

loc_004A1B97: ;
    MEM32(esi + 0xC) = eax;

loc_004A1B9A: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004A1BA8; /* je: equal / zero */

loc_004A1BA1: ;
    MEM32(esi + 0x10) = 0x63;

loc_004A1BA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A1C37
 * Original: 0x004A1C37 - 0x004A1CAB (116 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1C37(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A1C37: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2015);
    PUSH32(esp, 0x670);
    edi = ecx;
    PUSH32(esp, 0); sub_004B53EE(); /* call 0x004B53EE */

loc_004A1C4E: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_004A1C9A; /* je: equal / zero */

loc_004A1C54: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004A1C5C: ;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0x14);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    MEM32(esi + 0x38) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x2014);
    PUSH32(esp, 0x568);
    ecx = edi;
    MEM32(esi) = 0x4A18B2;
    MEM32(esi + 4) = 0x4A1BAF;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0); sub_004B53EE(); /* call 0x004B53EE */

loc_004A1C90: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x66C) = eax;
    if (TEST_NZ(eax, eax)) { sub_004A1CAB(); return; } /* jne: not equal / not zero */

loc_004A1C9A: ;
    eax = MEM32(edi + 0xC4);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    ebx = 0x80150008u;
    g_seh_ebp = ebp; sub_004A1D05(); return; /* tail jmp 0x004A1D05 */

}

/**
 * sub_004A1D31
 * Original: 0x004A1D31 - 0x004A1ECF (414 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1D31(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A1D31: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0x7C0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    ebx = ecx;
    MEM32(ebp + 0x70) = 0x5C0;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_004A0A19(); /* call 0x004A0A19 */

loc_004A1D53: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A1D58; /* jge: greater or equal (signed >=) */

loc_004A1D57: ;
    esi++;

loc_004A1D58: ;
    eax = MEM32(0x561128);
    if (TEST_Z(MEM8(eax), 2)) goto loc_004A1D65; /* je: equal / zero */

loc_004A1D62: ;
    esi = 0; /* xor self */
    esi++;

loc_004A1D65: ;
    if (TEST_NZ(esi, esi)) goto loc_004A1E57; /* jne: not equal / not zero */

loc_004A1D6D: ;
    esi = MEM32(0x561094);
    PUSH32(esp, 4);
    POP32(esp, ecx);
    edi = 0x881B9C;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004A1E57; /* je: equal / zero */

loc_004A1D85: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    PUSH32(esp, esi);
    eax = ebp + 0x24;
    PUSH32(esp, eax);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x102);
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_004A1D9F: ;
    if (TEST_NZ(eax, eax)) goto loc_004A1E57; /* jne: not equal / not zero */

loc_004A1DA7: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x561094));
    PUSH32(esp, esi);
    PUSH32(esp, 0x881B1C);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A1DC1: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + -396;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA8E(); /* call 0x0046DA8E */

loc_004A1DD3: ;
    eax = ebp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -396;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA88(); /* call 0x0046DA88 */

loc_004A1DE4: ;
    PUSH32(esp, 0x1C);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -136;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    esi = ebp + 0x10;
    edi = ebp + -124;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = ebp + 0x24;
    edi = ebp + -56;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = 0x881B8C;
    edi = ebp + -80;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    esi = MEM32(ebp + 0x7C);
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 0x664), edi)) { sub_004A1ECF(); return; } /* jne: not equal / not zero */

loc_004A1E22: ;
    PUSH32(esp, 0x2014);
    PUSH32(esp, 0x568);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53EE(); /* call 0x004B53EE */

loc_004A1E33: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x664) = eax;
    if (CMP_NE(eax, edi)) { sub_004A1ECF(); return; } /* jne: not equal / not zero */

loc_004A1E41: ;
    ebx = MEM32(ebx + 0xC4);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) | 8;
    MEM32(ebp + 0x7C) = 0x80150008u;
    g_seh_ebp = ebp; sub_004A1FB9(); return; /* tail jmp 0x004A1FB9 */

loc_004A1E57: ;
    eax = MEM32(0x10118);
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(eax + 0x1D4), esi)) goto loc_004A1EB9; /* je: equal / zero */

loc_004A1E66: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D70A(); /* call 0x0048D70A */

loc_004A1E6F: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    eax = ebp + -14;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A1E86: ;
    ecx = 0; /* xor self */

loc_004A1E88: ;
    eax = ZX8(MEM8(ebp + ecx + 0x3C));
    PUSH32(esp, 0xA);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    SET_LO8(edx, LO8(edx) + 0x30);
    MEM8(ebp + ecx + 0x10) = LO8(edx);
    ecx++;
    if (CMP_B(ecx, 0xC)) goto loc_004A1E88; /* jb: below (unsigned <) */

loc_004A1EA0: ;
    MEM8(ebp + 0x19) = 0x39;
    MEM8(ebp + 0x18) = 0x39;
    esi = 0x881B78;
    edi = ebp + 0x24;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    goto loc_004A1DE4;

loc_004A1EB9: ;
    ebx = MEM32(ebx + 0xC4);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) | 2;
    MEM32(ebp + 0x7C) = 0x80151905u;
    g_seh_ebp = ebp; sub_004A1FB9(); return; /* tail jmp 0x004A1FB9 */

}

/**
 * sub_004A1FC6
 * Original: 0x004A1FC6 - 0x004A23B3 (1005 bytes, 284 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A1FC6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A1FC6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x10);
    eax = eax - 6;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = edi;
    if ((eax == 0)) goto loc_004A22DF; /* je: equal / zero */

loc_004A1FE1: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_004A200F; /* je: equal / zero */

loc_004A1FE5: ;
    eax = eax - 0xA;
    if ((eax != 0)) goto loc_004A239E; /* jne: not equal / not zero */

loc_004A1FEE: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004A1FF3: ;
    if (CMP_B(eax, MEM32(ebx + 0x1C))) goto loc_004A239E; /* jb: below (unsigned <) */

loc_004A1FFC: ;
    MEM32(ebx + 0x10) = 0x63;
    MEM32(ebx + 0xC) = 0x1500F0;
    goto loc_004A239E;

loc_004A200F: ;
    esi = ebx + 0x6C;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A201A: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A226E; /* jne: not equal / not zero */

loc_004A2025: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B5577(); /* call 0x004B5577 */

loc_004A2038: ;
    PUSH32(esp, MEM32(ebx + 0x664));
    eax = ebx + 0xA4;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B7362(); /* call 0x004B7362 */

loc_004A204F: ;
    edx = eax;
    edx = edx & 0xFFFF;
    if (CMP_EQ(edx, 0x25)) goto loc_004A220E; /* je: equal / zero */

loc_004A2060: ;
    if (CMP_EQ(edx, 0x19)) goto loc_004A220E; /* je: equal / zero */

loc_004A2069: ;
    if (CMP_EQ(eax, 0xC000006Du)) goto loc_004A222A; /* je: equal / zero */

loc_004A2074: ;
    if (CMP_NE(eax, 0xC000009Au)) goto loc_004A209D; /* jne: not equal / not zero */

loc_004A207B: ;
    edi = MEM32(edi + 0xC4);
    eax = MEM32(edi + 0x30);
    eax = eax & 0xFFFFFF7Fu;
    eax = eax | 0x300;
    MEM32(edi + 0x30) = eax;
    MEM32(ebx + 0xC) = 0x80150008u;
    goto loc_004A239E;

loc_004A209D: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A20F3; /* jge: greater or equal (signed >=) */

loc_004A20A1: ;
    ecx = MEM32(edi + 0xC4);
    esi = MEM32(ecx + 0x30);
    esi = esi & 0xFFFFFDFFu;
    esi = esi | 0x180;
    (void)0; /* cmp edx, 0x18 - flags set for next jcc */
    MEM32(ecx + 0x30) = esi;
    ecx = MEM32(edi + 0xC4);
    MEM32(ecx + 0x34) = eax;
    if (CMP_EQ(edx, 0x18)) goto loc_004A20DD; /* je: equal / zero */

loc_004A20C7: ;
    if (CMP_EQ(edx, 6)) goto loc_004A20DD; /* je: equal / zero */

loc_004A20CC: ;
    if (CMP_EQ(edx, 0x12)) goto loc_004A20DD; /* je: equal / zero */

loc_004A20D1: ;
    MEM32(ebx + 0xC) = 0x80151906u;
    goto loc_004A239E;

loc_004A20DD: ;
    edi = MEM32(edi + 0xC4);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) | 4;
    MEM32(ebx + 0xC) = 0x80151905u;
    goto loc_004A239E;

loc_004A20F3: ;
    eax = MEM32(ebx + 0x664);
    eax = MEM32(eax + 0xAC);
    if (TEST_NZ(eax, eax)) goto loc_004A2129; /* jne: not equal / not zero */

loc_004A2103: ;
    eax = edi + 0xC4;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x30);
    edx = edx & 0xFFFFFDFFu;
    edx = edx | 0x180;
    MEM32(ecx + 0x30) = edx;
    ecx = MEM32(eax);
    eax = 0x80151906u;
    goto loc_004A21BF;

loc_004A2129: ;
    ecx = MEM32(eax);
    MEM32(edi + 0x24) = ecx;
    eax = MEM32(eax + 4);
    MEM32(edi + 0x28) = eax;
    eax = MEM32(ebx + 0x664);
    esi = MEM32(eax + 0xAC);
    esi = esi + 8;
    edi = edi + 0x30;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = MEM32(ebx + 0x664);
    esi = MEM32(eax + 0xAC);
    eax = MEM32(ebp + -4);
    esi = esi + 0x18;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = eax + 0x48;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x664);
    esi = MEM32(ecx + 0xAC);
    esi = esi + 0x2C;
    PUSH32(esp, 6);
    edi = eax + 0x5C;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x664);
    esi = MEM32(ecx + 0xAC);
    esi = esi + 0x44;
    edi = eax + 0x74;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ecx = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_004A651A(); /* call 0x004A651A */

loc_004A2198: ;
    if (TEST_NZ(eax, eax)) goto loc_004A21C7; /* jne: not equal / not zero */

loc_004A219C: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0xC4;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x30);
    edx = edx & 0xFFFFFDFFu;
    edx = edx | 0x180;
    MEM32(ecx + 0x30) = edx;
    ecx = MEM32(eax);
    eax = 0x8015000Bu;

loc_004A21BF: ;
    MEM32(ecx + 0x34) = eax;
    goto loc_004A239B;

loc_004A21C7: ;
    esi = MEM32(ebp + -4);
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFFFD7Fu;
    ecx = ecx | 0x100;
    MEM32(eax + 0x30) = ecx;
    MEM32(ebx + 0x10) = 0x12;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004A21EE: ;
    ecx = eax;
    eax = 0x7D0;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    ecx = ecx + eax;
    eax = ebx + 0x20;
    MEM32(ebx + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0049CBD9(); /* call 0x0049CBD9 */

loc_004A2209: ;
    goto loc_004A239E;

loc_004A220E: ;
    ecx = MEM32(ebx + 0x14);
    if (CMP_AE(ecx, 2)) goto loc_004A2255; /* jae: above or equal (unsigned >=) */

loc_004A2216: ;
    ecx++;
    MEM32(ebx + 0x14) = ecx;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004A1D31(); /* call 0x004A1D31 */

loc_004A2222: ;
    if (TEST_S(eax, eax)) goto loc_004A239B; /* jl: less (signed <) */

loc_004A222A: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004A2234: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A239E; /* jge: greater or equal (signed >=) */

loc_004A223C: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    esi = MEM32(edx + 0x30);
    esi = esi & 0xFFFFFE7Fu;
    esi = esi | 0x200;
    goto loc_004A2289;

loc_004A2255: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    esi = MEM32(edx + 0x30);
    esi = esi & 0xFFFFFDFFu;
    esi = esi | 0x180;
    goto loc_004A2289;

loc_004A226E: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A2296; /* jge: greater or equal (signed >=) */

loc_004A2272: ;
    ecx = edi + 0xC4;
    edx = MEM32(ecx);
    esi = MEM32(edx + 0x30);
    esi = esi & 0xFFFFFEFFu;
    esi = esi | 0x280;

loc_004A2289: ;
    MEM32(edx + 0x30) = esi;
    ecx = MEM32(ecx);

loc_004A228E: ;
    MEM32(ecx + 0x34) = eax;
    goto loc_004A20D1;

loc_004A2296: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004A229B: ;
    if (CMP_B(eax, MEM32(ebx + 0x1C))) goto loc_004A239E; /* jb: below (unsigned <) */

loc_004A22A4: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + 1;
    eax = MEM32(ebx + 0x18);
    if (CMP_B(eax, MEM32(0x6515E0))) goto loc_004A22CA; /* jb: below (unsigned <) */

loc_004A22B2: ;
    edi = MEM32(edi + 0xC4);
    MEM16(edi + 0x30) = MEM16(edi + 0x30) | 0x380;
    MEM32(ebx + 0xC) = 0x80151907u;
    goto loc_004A239E;

loc_004A22CA: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004A1D31(); /* call 0x004A1D31 */

loc_004A22D2: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A239E; /* jge: greater or equal (signed >=) */

loc_004A22DA: ;
    goto loc_004A239B;

loc_004A22DF: ;
    esi = ebx + 0x34;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004A15BF(); /* call 0x004A15BF */

loc_004A22EA: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A238D; /* jne: not equal / not zero */

loc_004A22F5: ;
    eax = ebx + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004A0F1B(); /* call 0x004A0F1B */

loc_004A2301: ;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFEFFFFu;
    ecx = ecx | 0x20000;
    MEM32(eax + 0x30) = ecx;
    esi = ebx + 0x6C;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x64;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = ebx + 0xA4;
    MEM32(ebx + 0x68) = ecx;
    MEM32(eax) = 0x5C0;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC4);
    PUSH32(esp, MEM32(eax + 0x4C));
    ecx = edi;
    PUSH32(esp, 0); sub_004B57FC(); /* call 0x004B57FC */

loc_004A2347: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004A1D31(); /* call 0x004A1D31 */

loc_004A234F: ;
    if (TEST_S(eax, eax)) goto loc_004A239B; /* jl: less (signed <) */

loc_004A2353: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004A235D: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A2384; /* jge: greater or equal (signed >=) */

loc_004A2361: ;
    ecx = MEM32(edi + 0xC4);
    edx = MEM32(ecx + 0x30);
    edx = edx & 0xFFFFFE7Fu;
    edx = edx | 0x200;
    MEM32(ecx + 0x30) = edx;
    ecx = MEM32(edi + 0xC4);
    goto loc_004A228E;

loc_004A2384: ;
    MEM32(ebx + 0x10) = 8;
    goto loc_004A239E;

loc_004A238D: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A239E; /* jge: greater or equal (signed >=) */

loc_004A2391: ;
    edi = MEM32(edi + 0xC4);
    MEM8(edi + 0x32) = MEM8(edi + 0x32) | 3;

loc_004A239B: ;
    MEM32(ebx + 0xC) = eax;

loc_004A239E: ;
    eax = MEM32(ebx + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004A23AC; /* je: equal / zero */

loc_004A23A5: ;
    MEM32(ebx + 0x10) = 0x63;

loc_004A23AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A243B
 * Original: 0x004A243B - 0x004A2479 (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A243B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A243B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    MEM32(ebx) = MEM32(ebx) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2016);
    PUSH32(esp, 0x668);
    edi = ecx;
    PUSH32(esp, 0); sub_004B53EE(); /* call 0x004B53EE */

loc_004A245D: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) { sub_004A2479(); return; } /* jne: not equal / not zero */

loc_004A2463: ;
    eax = MEM32(edi + 0xC4);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    MEM32(ebp + -4) = 0x80150008u;
    g_seh_ebp = ebp; sub_004A2531(); return; /* tail jmp 0x004A2531 */

}

/**
 * sub_004A254A
 * Original: 0x004A254A - 0x004A2BD8 (1678 bytes, 441 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A254A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004A254A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;

loc_004A255B: ;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, 2);
    ecx = 0; /* xor self */
    POP32(esp, edx);
    eax = eax - edx;
    MEM32(ebp + 8) = ecx;
    if ((eax == 0)) goto loc_004A27F8; /* je: equal / zero */

loc_004A256E: ;
    eax--;
    if ((eax == 0)) goto loc_004A26BA; /* je: equal / zero */

loc_004A2575: ;
    eax--;
    if ((eax == 0)) goto loc_004A2635; /* je: equal / zero */

loc_004A257C: ;
    eax--;
    if ((eax == 0)) goto loc_004A264D; /* je: equal / zero */

loc_004A2583: ;
    eax = eax - edx;
    if ((eax != 0)) goto loc_004A2A2E; /* jne: not equal / not zero */

loc_004A258B: ;
    edi = ebx + 0x88;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ecx)) goto loc_004A2607; /* je: equal / zero */

loc_004A2597: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A18B2(); /* call 0x004A18B2 */

loc_004A259F: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A25FF; /* jne: not equal / not zero */

loc_004A25A6: ;
    eax = ebx + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0); sub_004A0F43(); /* call 0x004A0F43 */

loc_004A25B6: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A25BF: ;
    MEM32(edi) = MEM32(edi) & 0;
    eax = ebx + 0x84;
    MEM32(eax) = MEM32(eax) + 1;
    eax = MEM32(eax);
    if (CMP_AE(eax, MEM32(esi + 0x594))) goto loc_004A2607; /* jae: above or equal (unsigned >=) */

loc_004A25D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 8));
    ecx = esi;
    PUSH32(esp, MEM32(esi + eax * 4 + 0x598));
    PUSH32(esp, MEM32(ebx + 0xB0));
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004A1C37(); /* call 0x004A1C37 */

loc_004A25EE: ;
    if (TEST_S(eax, eax)) goto loc_004A269F; /* jl: less (signed <) */

loc_004A25F6: ;
    MEM32(ebx + 0xB0) = MEM32(ebx + 0xB0) & 0;
    goto loc_004A2607;

loc_004A25FF: ;
    if (TEST_S(eax, eax)) goto loc_004A2B21; /* jl: less (signed <) */

loc_004A2607: ;
    if (CMP_NE(MEM32(edi), 0)) goto loc_004A2B60; /* jne: not equal / not zero */

loc_004A2610: ;
    eax = MEM32(ebx + 0x84);
    if (CMP_EQ(eax, MEM32(esi + 0x594))) goto loc_004A2AED; /* je: equal / zero */

loc_004A2622: ;
    MEM32(ebx + 0x10) = 0x63;
    MEM32(ebx + 0xC) = 0x1500F0;
    goto loc_004A255B;

loc_004A2635: ;
    (void)0; /* cmp MEM32(ebx + 0xA8), ecx - flags set for next jcc */
    eax = MEM32(esi + 0xC4);
    if (CMP_EQ(MEM32(ebx + 0xA8), ecx)) goto loc_004A2649; /* je: equal / zero */

loc_004A2643: ;
    MEM8(eax + 0x33) = MEM8(eax + 0x33) | 3;
    goto loc_004A264D;

loc_004A2649: ;
    MEM8(eax + 0x33) = MEM8(eax + 0x33) & 0xFC;

loc_004A264D: ;
    if (CMP_NE(MEM32(ebx + 0xA8), ecx)) goto loc_004A2B46; /* jne: not equal / not zero */

loc_004A2659: ;
    edi = ebx + 0xB0;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ecx)) goto loc_004A2670; /* je: equal / zero */

loc_004A2665: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A266D: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004A2670: ;
    if (CMP_BE(MEM32(esi + 0x594), 0)) goto loc_004A26A7; /* jbe: below or equal (unsigned <=) */

loc_004A2679: ;
    eax = ebx + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    eax = MEM32(ebx + 0x84);
    PUSH32(esp, MEM32(esi + eax * 4 + 0x598));
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004A1C37(); /* call 0x004A1C37 */

loc_004A269B: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A26AE; /* jge: greater or equal (signed >=) */

loc_004A269F: ;
    MEM32(ebx + 0xC) = eax;
    goto loc_004A2B60;

loc_004A26A7: ;
    MEM32(ebp + 8) = 1;

loc_004A26AE: ;
    MEM32(ebx + 0x10) = 7;
    goto loc_004A2A1F;

loc_004A26BA: ;
    PUSH32(esp, MEM32(esi + 0x734));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A26C7: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A27EB; /* jne: not equal / not zero */

loc_004A26D2: ;
    eax = MEM32(ebx + 0xB0);
    ecx = eax + 0x150;
    PUSH32(esp, ecx);
    eax = eax + 0x140;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A146E(); /* call 0x004A146E */

loc_004A26EC: ;
    if (TEST_Z(eax, eax)) goto loc_004A27D9; /* je: equal / zero */

loc_004A26F4: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B5F7(); /* call 0x0042B5F7 */

loc_004A26FD: ;
    edi = MEM32(ebx + 0xB0);
    eax = MEM32(ebp + -8);
    if (CMP_L(eax, MEM32(edi + 0x2C))) goto loc_004A279D; /* jl: less (signed <) */

loc_004A270F: ;
    if (CMP_G(eax, MEM32(edi + 0x2C))) goto loc_004A271D; /* jg: greater (signed >) */

loc_004A2711: ;
    eax = MEM32(ebp + -12);
    if (CMP_BE(eax, MEM32(edi + 0x28))) goto loc_004A279D; /* jbe: below or equal (unsigned <=) */

loc_004A271D: ;
    eax = MEM32(edi + 0x28);
    edx = MEM32(edi + 0x30);
    ecx = MEM32(edi + 0x2C);
    edx = edx - eax;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    eax = eax - ecx - _cf; /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004A2738: ;
    ecx = MEM32(edi + 0x28);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -12);
    eax = eax - ecx;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(ebp + -16) = edx;
    edx = MEM32(edi + 0x2C);
    PUSH32(esp, 0x64);
    ecx = ecx - edx - _cf; /* sbb */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004A2759: ;
    if (CMP_G(MEM32(ebp + -16), edx)) goto loc_004A279D; /* jg: greater (signed >) */

loc_004A275E: ;
    if (CMP_L(MEM32(ebp + -16), edx)) goto loc_004A2765; /* jl: less (signed <) */

loc_004A2760: ;
    if (CMP_AE(MEM32(ebp + -20), eax)) goto loc_004A279D; /* jae: above or equal (unsigned >=) */

loc_004A2765: ;
    if (CMP_EQ(MEM32(ebx + 0xA8), 0)) goto loc_004A277A; /* je: equal / zero */

loc_004A276E: ;
    MEM32(ebx + 0x10) = 4;
    goto loc_004A255B;

loc_004A277A: ;
    MEM32(ebx + 0xB0) = MEM32(ebx + 0xB0) & 0;
    MEM32(ebx + 0xAC) = edi;

loc_004A2787: ;
    eax = MEM32(esi + 0xC4);
    MEM8(eax + 0x33) = MEM8(eax + 0x33) & 0xFC;
    MEM32(ebx + 0x10) = 5;
    goto loc_004A255B;

loc_004A279D: ;
    if (CMP_EQ(MEM32(ebx + 0xA8), 0)) goto loc_004A2787; /* je: equal / zero */

loc_004A27A6: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFEFFFFFFu;
    ecx = ecx | 0x2000000;
    MEM32(eax + 0x30) = ecx;
    eax = 0; /* xor self */
    eax++;
    MEM32(ebx + 0xA4) = eax;
    MEM32(ebx + 0xC) = 0x1500F0;
    MEM32(esi + 0x73C) = eax;
    goto loc_004A2B60;

loc_004A27D9: ;
    eax = ebx + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x730));
    goto loc_004A2A05;

loc_004A27EB: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A2B60; /* jge: greater or equal (signed >=) */

loc_004A27F3: ;
    goto loc_004A276E;

loc_004A27F8: ;
    eax = MEM32(esi + 0x738);
    if (CMP_EQ(eax, 1)) goto loc_004A2B60; /* je: equal / zero */

loc_004A2807: ;
    if (CMP_EQ(eax, edx)) goto loc_004A281A; /* je: equal / zero */

loc_004A280B: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    if (CMP_EQ(eax, ecx)) goto loc_004A281A; /* je: equal / zero */

loc_004A2812: ;
    MEM32(ebx + 0x10) = ecx;
    goto loc_004A255B;

loc_004A281A: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFDFFFFFFu;
    ecx = ecx | 0x1000000;
    PUSH32(esp, 0x2014);
    MEM32(eax + 0x30) = ecx;
    PUSH32(esp, 0x568);
    ecx = esi;
    PUSH32(esp, 0); sub_004B53EE(); /* call 0x004B53EE */

loc_004A2843: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0xB0) = eax;
    if (TEST_Z(eax, eax)) goto loc_004A2B4F; /* je: equal / zero */

loc_004A2851: ;
    ecx = MEM32(ebx + 0x14);
    MEM32(eax) = ecx;
    ecx = MEM32(ebx + 0x18);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0x594), eax)) goto loc_004A2894; /* jbe: below or equal (unsigned <=) */

loc_004A2866: ;
    ecx = esi + 0x598;
    MEM32(ebp + 8) = ecx;

loc_004A286F: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx);
    edi = MEM32(ecx);
    edx = MEM32(ebx + 0xB0);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    MEM32(edx + eax * 8 + 8) = edi;
    ecx = MEM32(ecx + 4);
    MEM32(edx + eax * 8 + 0xC) = ecx;
    eax++;
    if (CMP_B(eax, MEM32(esi + 0x594))) goto loc_004A286F; /* jb: below (unsigned <) */

loc_004A2894: ;
    eax = 0; /* xor self */
    ecx = ebx + 0x8C;
    edi = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebx + 0xB0);
    edx = eax + 0xB0;
    PUSH32(esp, ecx);
    MEM32(ebx + 0x98) = 0x4B8;
    MEM32(ebx + 0x9C) = edx;
    MEM32(ebx + 0x94) = eax;
    PUSH32(esp, MEM32(esi + 0x730));
    ecx = esi;
    PUSH32(esp, 0); sub_004B38AC(); /* call 0x004B38AC */

loc_004A28D3: ;
    if (TEST_S(eax, eax)) goto loc_004A2A11; /* jl: less (signed <) */

loc_004A28DB: ;
    edi = ebx + 0x8C;
    if (CMP_EQ(MEM32(edi), 0)) goto loc_004A2A11; /* je: equal / zero */

loc_004A28EA: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B5F7(); /* call 0x0042B5F7 */

loc_004A28F3: ;
    eax = MEM32(ebx + 0xB0);
    ecx = MEM32(eax + 0x34);
    if (CMP_G(ecx, MEM32(ebp + -8))) goto loc_004A2913; /* jg: greater (signed >) */

loc_004A2901: ;
    if (CMP_L(ecx, MEM32(ebp + -8))) goto loc_004A29FE; /* jl: less (signed <) */

loc_004A2907: ;
    ecx = MEM32(eax + 0x30);
    if (CMP_B(ecx, MEM32(ebp + -12))) goto loc_004A29FE; /* jb: below (unsigned <) */

loc_004A2913: ;
    if (CMP_EQ(MEM32(ebx + 0x90), 0)) goto loc_004A293F; /* je: equal / zero */

loc_004A291C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x734));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x730));
    PUSH32(esp, 0); sub_004B3D57(); /* call 0x004B3D57 */

loc_004A2930: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_S(eax, eax)) ? 1 : 0); /* setl */
    ecx = ecx + 3;
    goto loc_004A2812;

loc_004A293F: ;
    ecx = eax + 0x150;
    PUSH32(esp, ecx);
    eax = eax + 0x140;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A146E(); /* call 0x004A146E */

loc_004A2953: ;
    if (TEST_Z(eax, eax)) goto loc_004A29FE; /* je: equal / zero */

loc_004A295B: ;
    edi = MEM32(ebx + 0xB0);
    eax = MEM32(ebp + -8);
    if (CMP_L(eax, MEM32(edi + 0x2C))) goto loc_004A29C3; /* jl: less (signed <) */

loc_004A2969: ;
    if (CMP_G(eax, MEM32(edi + 0x2C))) goto loc_004A2973; /* jg: greater (signed >) */

loc_004A296B: ;
    eax = MEM32(ebp + -12);
    if (CMP_BE(eax, MEM32(edi + 0x28))) goto loc_004A29C3; /* jbe: below or equal (unsigned <=) */

loc_004A2973: ;
    eax = MEM32(edi + 0x28);
    edx = MEM32(edi + 0x30);
    ecx = MEM32(edi + 0x2C);
    edx = edx - eax;
    eax = MEM32(edi + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    eax = eax - ecx - _cf; /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004A298E: ;
    ecx = MEM32(edi + 0x28);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -12);
    eax = eax - ecx;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(ebp + -24) = edx;
    edx = MEM32(edi + 0x2C);
    PUSH32(esp, 0x64);
    ecx = ecx - edx - _cf; /* sbb */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004A29AF: ;
    if (CMP_G(MEM32(ebp + -24), edx)) goto loc_004A29C3; /* jg: greater (signed >) */

loc_004A29B4: ;
    if (CMP_L(MEM32(ebp + -24), edx)) goto loc_004A2765; /* jl: less (signed <) */

loc_004A29BA: ;
    if (CMP_B(MEM32(ebp + -28), eax)) goto loc_004A2765; /* jb: below (unsigned <) */

loc_004A29C3: ;
    if (CMP_EQ(MEM32(ebx + 0xA8), 0)) goto loc_004A2787; /* je: equal / zero */

loc_004A29D0: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFEFFFFFFu;
    ecx = ecx | 0x2000000;
    MEM32(eax + 0x30) = ecx;
    MEM32(ebx + 0xA4) = 1;
    MEM32(ebx + 0xC) = 0x1500F0;
    goto loc_004A2B60;

loc_004A29FE: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x730));

loc_004A2A05: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004B3961(); /* call 0x004B3961 */

loc_004A2A0C: ;
    goto loc_004A276E;

loc_004A2A11: ;
    MEM32(ebx + 0x10) = 4;
    MEM32(ebp + 8) = 1;

loc_004A2A1F: ;
    if (CMP_NE(MEM32(ebp + 8), 0)) goto loc_004A255B; /* jne: not equal / not zero */

loc_004A2A29: ;
    goto loc_004A2B60;

loc_004A2A2E: ;
    eax = eax - 0x5C;
    if ((eax != 0)) goto loc_004A2B60; /* jne: not equal / not zero */

loc_004A2A37: ;
    if (CMP_NE(MEM32(ebx + 0xC), 0x1500F0)) goto loc_004A2B60; /* jne: not equal / not zero */

loc_004A2A44: ;
    if (CMP_NE(MEM32(ebx + 0xA4), ecx)) goto loc_004A2B60; /* jne: not equal / not zero */

loc_004A2A50: ;
    if (CMP_NE(MEM32(ebx + 0xA0), ecx)) goto loc_004A2B60; /* jne: not equal / not zero */

loc_004A2A5C: ;
    eax = MEM32(esi + 0x738);
    if (CMP_EQ(eax, edx)) goto loc_004A2A74; /* je: equal / zero */

loc_004A2A66: ;
    if (CMP_EQ(eax, 4)) goto loc_004A2A74; /* je: equal / zero */

loc_004A2A6B: ;
    if (CMP_NE(eax, 6)) goto loc_004A2B60; /* jne: not equal / not zero */

loc_004A2A74: ;
    eax = MEM32(ebp + -4);
    esi = MEM32(ebx + 0xB0);
    edi = eax + 0x740;
    ecx = 0x15A;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax + 0x890;
    PUSH32(esp, ecx);
    ecx = eax + 0x880;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_004A131F(); /* call 0x004A131F */

loc_004A2A9F: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    eax = ecx + 0x7F0;
    PUSH32(esp, eax);
    eax = ecx + 0x740;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x734));
    PUSH32(esp, MEM32(ecx + 0x730));
    PUSH32(esp, 0); sub_004B4516(); /* call 0x004B4516 */

loc_004A2AC3: ;
    if (TEST_S(eax, eax)) goto loc_004A2ADE; /* jl: less (signed <) */

loc_004A2AC7: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x738) = 3;
    MEM32(eax + 0x73C) = 1;

loc_004A2ADE: ;
    esi = MEM32(ebp + -4);
    MEM32(ebx + 0xA0) = 1;
    goto loc_004A2B60;

loc_004A2AED: ;
    eax = ebx + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xB0));
    ecx = esi;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004A1C37(); /* call 0x004A1C37 */

loc_004A2B0A: ;
    if (TEST_S(eax, eax)) goto loc_004A269F; /* jl: less (signed <) */

loc_004A2B12: ;
    MEM32(ebx + 0xB0) = MEM32(ebx + 0xB0) & 0;
    MEM32(ebx + 0x84) = MEM32(ebx + 0x84) + 1;
    goto loc_004A2B60;

loc_004A2B21: ;
    ecx = MEM32(ebx + 0x84);
    if (CMP_BE(ecx, MEM32(esi + 0x594))) goto loc_004A269F; /* jbe: below or equal (unsigned <=) */

loc_004A2B33: ;
    if (CMP_NE(eax, 0x80151908u)) goto loc_004A269F; /* jne: not equal / not zero */

loc_004A2B3E: ;
    eax = eax + 0xC;
    goto loc_004A269F;

loc_004A2B46: ;
    MEM32(ebx + 0xC) = 0x80151916u;
    goto loc_004A2B60;

loc_004A2B4F: ;
    eax = MEM32(esi + 0xC4);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    MEM32(ebx + 0xC) = 0x80150008u;

loc_004A2B60: ;
    eax = MEM32(ebx + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004A2BCE; /* je: equal / zero */

loc_004A2B67: ;
    MEM32(ebx + 0x10) = 0x63;
    if (CMP_GE(eax & eax, 0)) goto loc_004A2BCE; /* jge: greater or equal (signed >=) */

loc_004A2B70: ;
    eax = MEM32(esi + 0xC4);
    if (CMP_NE(MEM32(eax + 0x44), 0)) goto loc_004A2BCE; /* jne: not equal / not zero */

loc_004A2B7C: ;
    if (CMP_EQ(MEM32(ebx + 0xAC), 0)) goto loc_004A2BCE; /* je: equal / zero */

loc_004A2B85: ;
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFEFFFFFFu;
    ecx = ecx | 0x2000000;
    edi = ebx + 0xB0;
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004A2BAE; /* je: equal / zero */

loc_004A2BA3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A2BAB: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004A2BAE: ;
    eax = MEM32(ebx + 0xAC);
    MEM32(ebx + 0xAC) = MEM32(ebx + 0xAC) & 0;
    MEM32(edi) = eax;
    MEM32(ebx + 0xA4) = 1;
    MEM32(ebx + 0xC) = 0x1500F0;

loc_004A2BCE: ;
    eax = MEM32(ebx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A2BD8
 * Original: 0x004A2BD8 - 0x004A2C17 (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2BD8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A2BD8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    MEM32(edi) = MEM32(edi) & 0;
    PUSH32(esp, 0x2017);
    esi = ecx;
    PUSH32(esp, 0xB4);
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); sub_004B53EE(); /* call 0x004B53EE */

loc_004A2BF9: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) { sub_004A2C17(); return; } /* jne: not equal / not zero */

loc_004A2BFF: ;
    eax = MEM32(esi + 0xC4);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    MEM32(edi) = MEM32(edi) & ebx;
    eax = 0x80150008u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004A2C6A
 * Original: 0x004A2C6A - 0x004A2CB7 (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2C6A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A2C6A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x5DC;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x694));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -1500;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x34));
    edi = ecx;
    MEM32(ebp + -4) = 0x5C0;
    PUSH32(esp, 0); sub_004B7DCD(); /* call 0x004B7DCD */

loc_004A2C9A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(eax & eax, 0)) { sub_004A2CB7(); return; } /* jge: greater or equal (signed >=) */

loc_004A2CA1: ;
    edi = MEM32(edi + 0xC4);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) | 8;
    MEM32(ebp + 8) = 0x80150008u;
    g_seh_ebp = ebp; sub_004A2D7A(); return; /* tail jmp 0x004A2D7A */

}

/**
 * sub_004A2D83
 * Original: 0x004A2D83 - 0x004A3556 (2003 bytes, 540 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A2D83(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004A2D83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(ebx + 0x48), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(MEM32(ebx + 0x48), 0)) goto loc_004A2DD1; /* je: equal / zero */

loc_004A2D9A: ;
    edi = ebx + 0x38;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004A15BF(); /* call 0x004A15BF */

loc_004A2DA3: ;
    (void)0; /* cmp eax, 0x1500F0 - flags set for next jcc */
    MEM32(ebx + 0x50) = eax;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A2DD1; /* jne: not equal / not zero */

loc_004A2DAD: ;
    eax = ebx + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004A0F1B(); /* call 0x004A0F1B */

loc_004A2DB9: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFEFFFFFu;
    ecx = ecx | 0x200000;
    MEM32(eax + 0x30) = ecx;

loc_004A2DD1: ;
    eax = MEM32(ebx + 0x10);
    eax--;
    eax--;
    if ((eax == 0)) goto loc_004A2FDD; /* je: equal / zero */

loc_004A2DDC: ;
    eax--;
    if ((eax == 0)) goto loc_004A2EBB; /* je: equal / zero */

loc_004A2DE3: ;
    eax--;
    if ((eax == 0)) goto loc_004A32CA; /* je: equal / zero */

loc_004A2DEA: ;
    eax--;
    if ((eax == 0)) goto loc_004A32E6; /* je: equal / zero */

loc_004A2DF1: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_004A3183; /* jne: not equal / not zero */

loc_004A2DFA: ;
    edi = ebx + 0x74;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A2E05: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A328D; /* jne: not equal / not zero */

loc_004A2E10: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004B5577(); /* call 0x004B5577 */

loc_004A2E23: ;
    PUSH32(esp, MEM32(ebx + 0x694));
    eax = ebx + 0xAC;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x34));
    PUSH32(esp, 0); sub_004B76E8(); /* call 0x004B76E8 */

loc_004A2E3D: ;
    ecx = eax;
    ecx = ecx & 0xFFFF;
    if (CMP_NE(ecx, 0x25)) goto loc_004A2E5F; /* jne: not equal / not zero */

loc_004A2E4A: ;
    ecx = MEM32(ebx + 0x14);
    if (CMP_AE(ecx, 2)) goto loc_004A339E; /* jae: above or equal (unsigned >=) */

loc_004A2E56: ;
    ecx++;
    MEM32(ebx + 0x14) = ecx;
    goto loc_004A315D;

loc_004A2E5F: ;
    if (CMP_EQ(eax, 0xC000006Du)) goto loc_004A33BA; /* je: equal / zero */

loc_004A2E6A: ;
    if (CMP_EQ(eax, 0xC000009Au)) goto loc_004A33EB; /* je: equal / zero */

loc_004A2E75: ;
    if (TEST_S(eax, eax)) goto loc_004A340F; /* jl: less (signed <) */

loc_004A2E7D: ;
    eax = MEM32(ebx + 0x694);
    if (CMP_L(MEM32(eax + 0xD8), 0)) goto loc_004A345A; /* jl: less (signed <) */

loc_004A2E90: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFF5FFFu;
    ecx = ecx | 0x4000;
    MEM32(eax + 0x30) = ecx;
    MEM32(ebx + 0xC) = 0x1500F0;
    MEM32(ebx + 0x10) = 0x63;
    goto loc_004A2DD1;

loc_004A2EBB: ;
    PUSH32(esp, MEM32(esi + 0xCAC));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A2EC8: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A2FD0; /* jne: not equal / not zero */

loc_004A2ED3: ;
    eax = MEM32(ebx + 0x694);
    ecx = eax + 0x2C8;
    PUSH32(esp, ecx);
    eax = eax + 0x2B8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A146E(); /* call 0x004A146E */

loc_004A2EED: ;
    if (TEST_Z(eax, eax)) goto loc_004A2FBE; /* je: equal / zero */

loc_004A2EF5: ;
    edi = MEM32(ebx + 0x694);
    eax = MEM32(ebp + -8);
    if (CMP_L(eax, MEM32(edi + 0x68))) goto loc_004A2F7E; /* jl: less (signed <) */

loc_004A2F03: ;
    if (CMP_G(eax, MEM32(edi + 0x68))) goto loc_004A2F0D; /* jg: greater (signed >) */

loc_004A2F05: ;
    eax = MEM32(ebp + -12);
    if (CMP_BE(eax, MEM32(edi + 0x64))) goto loc_004A2F7E; /* jbe: below or equal (unsigned <=) */

loc_004A2F0D: ;
    eax = MEM32(edi + 0x64);
    edx = MEM32(edi + 0x6C);
    ecx = MEM32(edi + 0x68);
    edx = edx - eax;
    eax = MEM32(edi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    eax = eax - ecx - _cf; /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004A2F28: ;
    ecx = MEM32(edi + 0x64);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -12);
    eax = eax - ecx;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(ebp + -16) = edx;
    edx = MEM32(edi + 0x68);
    PUSH32(esp, 0x64);
    ecx = ecx - edx - _cf; /* sbb */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004A2F49: ;
    if (CMP_G(MEM32(ebp + -16), edx)) goto loc_004A2F7E; /* jg: greater (signed >) */

loc_004A2F4E: ;
    if (CMP_L(MEM32(ebp + -16), edx)) goto loc_004A2F55; /* jl: less (signed <) */

loc_004A2F50: ;
    if (CMP_AE(MEM32(ebp + -20), eax)) goto loc_004A2F7E; /* jae: above or equal (unsigned >=) */

loc_004A2F55: ;
    if (CMP_NE(MEM32(ebx + 0x688), 0)) goto loc_004A3177; /* jne: not equal / not zero */

loc_004A2F62: ;
    eax = ebx + 0x68C;
    ecx = MEM32(eax);
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(ebx + 0x690) = edi;
    MEM32(ebx + 0x694) = ecx;
    goto loc_004A3153;

loc_004A2F7E: ;
    if (CMP_EQ(MEM32(ebx + 0x688), 0)) goto loc_004A3153; /* je: equal / zero */

loc_004A2F8B: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFBFFFFFFu;
    ecx = ecx | 0x8000000;
    MEM32(eax + 0x30) = ecx;
    eax = 0; /* xor self */
    eax++;
    MEM32(ebx + 0x684) = eax;
    MEM32(ebx + 0xC) = 0x1500F0;
    MEM32(esi + 0xCB4) = eax;
    goto loc_004A34DE;

loc_004A2FBE: ;
    eax = ebx + 0x66C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xCA8));
    goto loc_004A3170;

loc_004A2FD0: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A34DE; /* jge: greater or equal (signed >=) */

loc_004A2FD8: ;
    goto loc_004A3177;

loc_004A2FDD: ;
    eax = MEM32(esi + 0xCB0);
    if (CMP_EQ(eax, 1)) goto loc_004A34DE; /* je: equal / zero */

loc_004A2FEC: ;
    if (CMP_EQ(eax, 2)) goto loc_004A2FFC; /* je: equal / zero */

loc_004A2FF1: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    if (CMP_NE(eax, ecx)) goto loc_004A30BA; /* jne: not equal / not zero */

loc_004A2FFC: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xF7FFFFFFu;
    ecx = ecx | 0x4000000;
    MEM32(eax + 0x30) = ecx;
    eax = 0; /* xor self */
    ecx = ebx + 0x66C;
    edi = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebx + 0x694);
    edx = eax + 0x1B8;
    PUSH32(esp, ecx);
    MEM32(ebx + 0x678) = 0x528;
    MEM32(ebx + 0x67C) = edx;
    MEM32(ebx + 0x674) = eax;
    PUSH32(esp, MEM32(esi + 0xCA8));
    ecx = esi;
    PUSH32(esp, 0); sub_004B38AC(); /* call 0x004B38AC */

loc_004A3053: ;
    if (TEST_S(eax, eax)) goto loc_004A3177; /* jl: less (signed <) */

loc_004A305B: ;
    edi = ebx + 0x66C;
    if (CMP_EQ(MEM32(edi), 0)) goto loc_004A3177; /* je: equal / zero */

loc_004A306A: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B5F7(); /* call 0x0042B5F7 */

loc_004A3073: ;
    eax = MEM32(ebx + 0x694);
    ecx = MEM32(eax + 0x70);
    if (CMP_G(ecx, MEM32(ebp + -8))) goto loc_004A3093; /* jg: greater (signed >) */

loc_004A3081: ;
    if (CMP_L(ecx, MEM32(ebp + -8))) goto loc_004A3169; /* jl: less (signed <) */

loc_004A3087: ;
    ecx = MEM32(eax + 0x6C);
    if (CMP_B(ecx, MEM32(ebp + -12))) goto loc_004A3169; /* jb: below (unsigned <) */

loc_004A3093: ;
    if (CMP_EQ(MEM32(ebx + 0x670), 0)) goto loc_004A30C2; /* je: equal / zero */

loc_004A309C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xCAC));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0xCA8));
    PUSH32(esp, 0); sub_004B3D57(); /* call 0x004B3D57 */

loc_004A30B0: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_S(eax, eax)) ? 1 : 0); /* setl */
    ecx = ecx + 3;

loc_004A30BA: ;
    MEM32(ebx + 0x10) = ecx;
    goto loc_004A2DD1;

loc_004A30C2: ;
    ecx = eax + 0x2C8;
    PUSH32(esp, ecx);
    eax = eax + 0x2B8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A146E(); /* call 0x004A146E */

loc_004A30D6: ;
    if (TEST_Z(eax, eax)) goto loc_004A3169; /* je: equal / zero */

loc_004A30DE: ;
    edi = MEM32(ebx + 0x694);
    eax = MEM32(ebp + -8);
    if (CMP_L(eax, MEM32(edi + 0x68))) goto loc_004A3146; /* jl: less (signed <) */

loc_004A30EC: ;
    if (CMP_G(eax, MEM32(edi + 0x68))) goto loc_004A30F6; /* jg: greater (signed >) */

loc_004A30EE: ;
    eax = MEM32(ebp + -12);
    if (CMP_BE(eax, MEM32(edi + 0x64))) goto loc_004A3146; /* jbe: below or equal (unsigned <=) */

loc_004A30F6: ;
    eax = MEM32(edi + 0x64);
    edx = MEM32(edi + 0x6C);
    ecx = MEM32(edi + 0x68);
    edx = edx - eax;
    eax = MEM32(edi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    eax = eax - ecx - _cf; /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004A3111: ;
    ecx = MEM32(edi + 0x64);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -12);
    eax = eax - ecx;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(ebp + -24) = edx;
    edx = MEM32(edi + 0x68);
    PUSH32(esp, 0x64);
    ecx = ecx - edx - _cf; /* sbb */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004A3132: ;
    if (CMP_G(MEM32(ebp + -24), edx)) goto loc_004A3146; /* jg: greater (signed >) */

loc_004A3137: ;
    if (CMP_L(MEM32(ebp + -24), edx)) goto loc_004A2F55; /* jl: less (signed <) */

loc_004A313D: ;
    if (CMP_B(MEM32(ebp + -28), eax)) goto loc_004A2F55; /* jb: below (unsigned <) */

loc_004A3146: ;
    if (CMP_NE(MEM32(ebx + 0x688), 0)) goto loc_004A3370; /* jne: not equal / not zero */

loc_004A3153: ;
    eax = MEM32(esi + 0xC4);
    MEM8(eax + 0x33) = MEM8(eax + 0x33) & 0xF3;

loc_004A315D: ;
    MEM32(ebx + 0x10) = 5;
    goto loc_004A2DD1;

loc_004A3169: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xCA8));

loc_004A3170: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004B3961(); /* call 0x004B3961 */

loc_004A3177: ;
    MEM32(ebx + 0x10) = 4;
    goto loc_004A2DD1;

loc_004A3183: ;
    eax = eax - 0x5B;
    if ((eax != 0)) goto loc_004A34DE; /* jne: not equal / not zero */

loc_004A318C: ;
    if (CMP_NE(MEM32(ebx + 0xC), 0x1500F0)) goto loc_004A34DE; /* jne: not equal / not zero */

loc_004A3199: ;
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(ebx + 0x684), edi)) goto loc_004A34DE; /* jne: not equal / not zero */

loc_004A31A7: ;
    if (CMP_NE(MEM32(ebx + 0x680), edi)) goto loc_004A34DE; /* jne: not equal / not zero */

loc_004A31B3: ;
    eax = MEM32(esi + 0xCB0);
    if (CMP_EQ(eax, 2)) goto loc_004A31CC; /* je: equal / zero */

loc_004A31BE: ;
    if (CMP_EQ(eax, 4)) goto loc_004A31CC; /* je: equal / zero */

loc_004A31C3: ;
    if (CMP_NE(eax, 6)) goto loc_004A34DE; /* jne: not equal / not zero */

loc_004A31CC: ;
    eax = ebx + 0x694;
    edx = MEM32(eax);
    ecx = MEM32(edx + 0x30);
    if (CMP_A(ecx, 0xC)) goto loc_004A31FB; /* ja: above (unsigned >) */

loc_004A31DC: ;
    if (CMP_BE(ecx & ecx, 0)) goto loc_004A3216; /* jbe: below or equal (unsigned <=) */

loc_004A31E0: ;
    eax = edx;
    eax = MEM32(eax + 0x30);
    ecx = edx + 0x200;

loc_004A31EB: ;
    if (CMP_GE(MEM32(ecx), 0)) goto loc_004A31F3; /* jge: greater or equal (signed >=) */

loc_004A31F0: ;
    edi = 0; /* xor self */
    edi++;

loc_004A31F3: ;
    ecx = ecx + 4;
    eax--;
    if ((eax != 0)) goto loc_004A31EB; /* jne: not equal / not zero */

loc_004A31F9: ;
    goto loc_004A3212;

loc_004A31FB: ;
    PUSH32(esp, 0x10);
    eax = edx + 0x200;
    POP32(esp, ecx);

loc_004A3204: ;
    if (CMP_GE(MEM32(eax), 0)) goto loc_004A320C; /* jge: greater or equal (signed >=) */

loc_004A3209: ;
    edi = 0; /* xor self */
    edi++;

loc_004A320C: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_004A3204; /* jne: not equal / not zero */

loc_004A3212: ;
    if (TEST_NZ(edi, edi)) goto loc_004A327E; /* jne: not equal / not zero */

loc_004A3216: ;
    eax = MEM32(ebp + -4);
    edi = eax + 0xCB8;
    esi = edx;
    ecx = 0x1B8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax + 0xF80;
    PUSH32(esp, ecx);
    ecx = eax + 0xF70;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_004A131F(); /* call 0x004A131F */

loc_004A323D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    eax = ecx + 0xE70;
    PUSH32(esp, eax);
    eax = ecx + 0xCB8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0xCAC));
    PUSH32(esp, MEM32(ecx + 0xCA8));
    PUSH32(esp, 0); sub_004B4516(); /* call 0x004B4516 */

loc_004A3261: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(ebp + -4);
    if (TEST_S(eax, eax)) goto loc_004A327E; /* jl: less (signed <) */

loc_004A3268: ;
    eax = esi;
    MEM32(eax + 0xCB0) = 3;
    MEM32(eax + 0xCB4) = 1;

loc_004A327E: ;
    MEM32(ebx + 0x680) = 1;
    goto loc_004A34DE;

loc_004A328D: ;
    if (TEST_S(eax, eax)) goto loc_004A3491; /* jl: less (signed <) */

loc_004A3295: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004A329A: ;
    if (CMP_B(eax, MEM32(ebx + 0x1C))) goto loc_004A34DE; /* jb: below (unsigned <) */

loc_004A32A3: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + 1;
    eax = MEM32(ebx + 0x18);
    if (CMP_AE(eax, MEM32(0x6515DC))) goto loc_004A34B2; /* jae: above or equal (unsigned >=) */

loc_004A32B5: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004A2C6A(); /* call 0x004A2C6A */

loc_004A32BD: ;
    if (TEST_S(eax, eax)) goto loc_004A34D2; /* jl: less (signed <) */

loc_004A32C5: ;
    goto loc_004A34DE;

loc_004A32CA: ;
    eax = MEM32(esi + 0xC4);
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebx + 0x688), edi)) goto loc_004A32E0; /* je: equal / zero */

loc_004A32DA: ;
    MEM8(eax + 0x33) = MEM8(eax + 0x33) | 0xC;
    goto loc_004A32E8;

loc_004A32E0: ;
    MEM8(eax + 0x33) = MEM8(eax + 0x33) & 0xF3;
    goto loc_004A32E8;

loc_004A32E6: ;
    edi = 0; /* xor self */

loc_004A32E8: ;
    if (CMP_NE(MEM32(ebx + 0x688), edi)) goto loc_004A34D7; /* jne: not equal / not zero */

loc_004A32F4: ;
    if (CMP_EQ(MEM32(ebx + 0x34), edi)) goto loc_004A34D7; /* je: equal / zero */

loc_004A32FD: ;
    eax = MEM32(ebx + 0x50);
    if (CMP_L(eax, edi)) goto loc_004A34C5; /* jl: less (signed <) */

loc_004A3308: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A34DE; /* jne: not equal / not zero */

loc_004A3313: ;
    eax = ebx + 0x6C;
    if (CMP_NE(MEM32(eax), edi)) goto loc_004A3344; /* jne: not equal / not zero */

loc_004A331A: ;
    ecx = ebx + 0xAC;
    MEM32(ebx + 0x70) = ecx;
    ecx = ebx + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 8));
    MEM32(eax) = 0x5C0;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, MEM32(eax + 0x4C));
    ecx = esi;
    PUSH32(esp, 0); sub_004B57FC(); /* call 0x004B57FC */

loc_004A3344: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004A2C6A(); /* call 0x004A2C6A */

loc_004A334C: ;
    if (CMP_L(eax, edi)) goto loc_004A34D2; /* jl: less (signed <) */

loc_004A3354: ;
    PUSH32(esp, edi);
    eax = ebx + 0x74;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004A3360: ;
    if (CMP_L(eax, edi)) goto loc_004A33CF; /* jl: less (signed <) */

loc_004A3364: ;
    MEM32(ebx + 0x10) = 8;
    goto loc_004A34DE;

loc_004A3370: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFBFFFFFFu;
    ecx = ecx | 0x8000000;
    MEM32(eax + 0x30) = ecx;
    MEM32(ebx + 0x684) = 1;
    MEM32(ebx + 0xC) = 0x1500F0;
    goto loc_004A34DE;

loc_004A339E: ;
    ecx = esi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFF7FFFu;
    edi = edi | 0x6000;
    goto loc_004A34A8;

loc_004A33BA: ;
    PUSH32(esp, 0);
    eax = ebx + 0x74;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004A33C7: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A34DE; /* jge: greater or equal (signed >=) */

loc_004A33CF: ;
    ecx = esi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFF9FFFu;
    edi = edi | 0x8000;
    goto loc_004A34A8;

loc_004A33EB: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFFDFFFu;
    ecx = ecx | 0xC000;
    MEM32(eax + 0x30) = ecx;
    MEM32(ebx + 0xC) = 0x80150008u;
    goto loc_004A34DE;

loc_004A340F: ;
    ecx = esi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFF7FFFu;
    edi = edi | 0x6000;
    MEM32(edx + 0x30) = edi;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x34) = eax;
    eax = eax & 0xFFFF;
    if (CMP_EQ(eax, 0x14)) goto loc_004A344E; /* je: equal / zero */

loc_004A3438: ;
    if (CMP_EQ(eax, 0x20)) goto loc_004A344E; /* je: equal / zero */

loc_004A343D: ;
    if (CMP_EQ(eax, 0x1F)) goto loc_004A344E; /* je: equal / zero */

loc_004A3442: ;
    MEM32(ebx + 0xC) = 0x8015190Au;
    goto loc_004A34DE;

loc_004A344E: ;
    MEM32(ebx + 0xC) = 0x80151915u;
    goto loc_004A34DE;

loc_004A345A: ;
    eax = esi + 0xC4;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x30);
    edx = edx & 0xFFFF7FFFu;
    edx = edx | 0x6000;
    MEM32(ecx + 0x30) = edx;
    eax = MEM32(eax);
    ecx = ebx + 0x694;
    edx = MEM32(ecx);
    edx = MEM32(edx + 0xD8);
    MEM32(eax + 0x34) = edx;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0xD8);
    goto loc_004A34D2;

loc_004A3491: ;
    ecx = esi + 0xC4;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x30);
    edi = edi & 0xFFFFBFFFu;
    edi = edi | 0xA000;

loc_004A34A8: ;
    MEM32(edx + 0x30) = edi;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x34) = eax;
    goto loc_004A3442;

loc_004A34B2: ;
    eax = MEM32(esi + 0xC4);
    MEM8(eax + 0x31) = MEM8(eax + 0x31) | 0xE0;
    MEM32(ebx + 0xC) = 0x8015190Bu;
    goto loc_004A34DE;

loc_004A34C5: ;
    eax = MEM32(esi + 0xC4);
    MEM8(eax + 0x32) = MEM8(eax + 0x32) | 0x30;
    eax = MEM32(ebx + 0x50);

loc_004A34D2: ;
    MEM32(ebx + 0xC) = eax;
    goto loc_004A34DE;

loc_004A34D7: ;
    MEM32(ebx + 0xC) = 0x80151916u;

loc_004A34DE: ;
    eax = MEM32(ebx + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004A354C; /* je: equal / zero */

loc_004A34E5: ;
    MEM32(ebx + 0x10) = 0x63;
    if (CMP_GE(eax & eax, 0)) goto loc_004A354C; /* jge: greater or equal (signed >=) */

loc_004A34EE: ;
    eax = MEM32(esi + 0xC4);
    if (CMP_NE(MEM32(eax + 0x44), 0)) goto loc_004A354C; /* jne: not equal / not zero */

loc_004A34FA: ;
    if (CMP_EQ(MEM32(ebx + 0x690), 0)) goto loc_004A354C; /* je: equal / zero */

loc_004A3503: ;
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFBFFFFFFu;
    ecx = ecx | 0x8000000;
    edi = ebx + 0x694;
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004A352C; /* je: equal / zero */

loc_004A3521: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A3529: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004A352C: ;
    eax = MEM32(ebx + 0x690);
    MEM32(ebx + 0x690) = MEM32(ebx + 0x690) & 0;
    MEM32(edi) = eax;
    MEM32(ebx + 0x684) = 1;
    MEM32(ebx + 0xC) = 0x1500F0;

loc_004A354C: ;
    eax = MEM32(ebx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A35D3
 * Original: 0x004A35D3 - 0x004A3691 (190 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A35D3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A35D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2019);
    PUSH32(esp, 0x698);
    edi = ecx;
    PUSH32(esp, 0); sub_004B53EE(); /* call 0x004B53EE */

loc_004A35EC: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_004A3653; /* je: equal / zero */

loc_004A35F2: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004A35FA: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x688) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x2018);
    ebx = 0x6E0;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi) = 0x4A2D83;
    MEM32(esi + 4) = 0x4A3556;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0); sub_004B53EE(); /* call 0x004B53EE */

loc_004A3632: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x694) = eax;
    if (TEST_Z(eax, eax)) goto loc_004A3653; /* je: equal / zero */

loc_004A363C: ;
    PUSH32(esp, 0x2018);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004B53EE(); /* call 0x004B53EE */

loc_004A3649: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x68C) = eax;
    if (TEST_NZ(eax, eax)) { sub_004A3691(); return; } /* jne: not equal / not zero */

loc_004A3653: ;
    eax = MEM32(edi + 0xC4);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 8;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + 0x10) = 0x80150008u;
    if (TEST_Z(esi, esi)) goto loc_004A3687; /* je: equal / zero */

loc_004A366E: ;
    if (CMP_EQ(MEM32(esi + 0x48), 0)) goto loc_004A367F; /* je: equal / zero */

loc_004A3674: ;
    eax = esi + 0x38;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A367F: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A3687: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004A3853
 * Original: 0x004A3853 - 0x004A3866 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3853(void)
{

loc_004A3853: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_004A12D7(); /* call 0x004A12D7 */

loc_004A385B: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0); sub_004B29FF(); /* call 0x004B29FF */

loc_004A3864: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A3A03
 * Original: 0x004A3A03 - 0x004A3A1D (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3A03(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A3A03: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_004A10F0(); /* call 0x004A10F0 */

loc_004A3A10: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A3A1D
 * Original: 0x004A3A1D - 0x004A3A28 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3A1D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A3A1D: ;
    if (TEST_NZ(ecx, ecx)) { sub_004A3A28(); return; } /* jne: not equal / not zero */

loc_004A3A21: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A3A83(); return; /* tail jmp 0x004A3A83 */

}

/**
 * sub_004A3AC6
 * Original: 0x004A3AC6 - 0x004A3B10 (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3AC6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A3AC6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0; /* xor self */
    edx = ecx + 0xD4;
    PUSH32(esp, esi);

loc_004A3AD2: ;
    esi = MEM32(edx);
    if (CMP_EQ(esi, MEM32(ebp + 8))) goto loc_004A3AE5; /* je: equal / zero */

loc_004A3AD9: ;
    eax++;
    edx = edx + 0x14;
    if (CMP_L(eax, 0x10)) goto loc_004A3AD2; /* jl: less (signed <) */

loc_004A3AE2: ;
    eax = eax | 0xFFFFFFFFu;

loc_004A3AE5: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_004A3B10(); return; } /* je: equal / zero */

loc_004A3AEB: ;
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xE4);
    if (TEST_Z(eax, eax)) { sub_004A3B10(); return; } /* je: equal / zero */

loc_004A3AF9: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B813D(); /* call 0x004B813D */

loc_004A3B0E: ;
    g_seh_ebp = ebp; sub_004A3B15(); return; /* tail jmp 0x004A3B15 */

}

/**
 * sub_004A3B19
 * Original: 0x004A3B19 - 0x004A3B66 (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3B19(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A3B19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0; /* xor self */
    edx = ecx + 0xD4;
    PUSH32(esp, esi);

loc_004A3B25: ;
    esi = MEM32(edx);
    if (CMP_EQ(esi, MEM32(ebp + 8))) goto loc_004A3B38; /* je: equal / zero */

loc_004A3B2C: ;
    eax++;
    edx = edx + 0x14;
    if (CMP_L(eax, 0x10)) goto loc_004A3B25; /* jl: less (signed <) */

loc_004A3B35: ;
    eax = eax | 0xFFFFFFFFu;

loc_004A3B38: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_004A3B66(); return; } /* je: equal / zero */

loc_004A3B3E: ;
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0xE4);
    if (TEST_Z(eax, eax)) { sub_004A3B66(); return; } /* je: equal / zero */

loc_004A3B4C: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B69DB(); /* call 0x004B69DB */

loc_004A3B64: ;
    g_seh_ebp = ebp; sub_004A3B6B(); return; /* tail jmp 0x004A3B6B */

}

/**
 * sub_004A3B6F
 * Original: 0x004A3B6F - 0x004A3B74 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3B6F(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A3B6F: ;
    g_seh_ebp = ebp; sub_004A3A86(); return; /* tail jmp 0x004A3A86 */

}

/**
 * sub_004A3B74
 * Original: 0x004A3B74 - 0x004A3B9B (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3B74(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A3B74: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004A3AC6(); /* call 0x004A3AC6 */

loc_004A3B8E: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    eax = ecx;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004A3B9B
 * Original: 0x004A3B9B - 0x004A3BC5 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3B9B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A3B9B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004A3B19(); /* call 0x004A3B19 */

loc_004A3BB8: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    eax = ecx;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004A3BC5
 * Original: 0x004A3BC5 - 0x004A3BE0 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3BC5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A3BC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004A3A1D(); /* call 0x004A3A1D */

loc_004A3BD7: ;
    if (TEST_S(eax, eax)) { sub_004A3BE0(); return; } /* jl: less (signed <) */

loc_004A3BDB: ;
    eax = MEM32(ebp + -8);
    g_seh_ebp = ebp; sub_004A3BE2(); return; /* tail jmp 0x004A3BE2 */

}

/**
 * sub_004A3BE6
 * Original: 0x004A3BE6 - 0x004A3F13 (813 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A3BE6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A3BE6: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0xE0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x7C);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 0xC8), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + 0x70) = esi;
    if (CMP_NE(MEM32(esi + 0xC8), ebx)) goto loc_004A3DCB; /* jne: not equal / not zero */

loc_004A3C08: ;
    ecx = MEM32(esi + 0xCB0);
    edi = 0; /* xor self */
    edi++;
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_004A3C21; /* je: equal / zero */

loc_004A3C17: ;
    if (CMP_EQ(ecx, 3)) goto loc_004A3C21; /* je: equal / zero */

loc_004A3C1C: ;
    if (CMP_NE(ecx, 5)) goto loc_004A3C6B; /* jne: not equal / not zero */

loc_004A3C21: ;
    PUSH32(esp, MEM32(esi + 0xCAC));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A3C2E: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A3C6B; /* jne: not equal / not zero */

loc_004A3C35: ;
    ecx = MEM32(esi + 0xCB0);
    if (CMP_NE(ecx, edi)) goto loc_004A3C4B; /* jne: not equal / not zero */

loc_004A3C3F: ;
    MEM32(esi + 0xCB0) = 2;
    goto loc_004A3C6B;

loc_004A3C4B: ;
    if (CMP_NE(ecx, 3)) goto loc_004A3C5C; /* jne: not equal / not zero */

loc_004A3C50: ;
    MEM32(esi + 0xCB0) = 4;
    goto loc_004A3C6B;

loc_004A3C5C: ;
    if (CMP_NE(ecx, 5)) goto loc_004A3C6B; /* jne: not equal / not zero */

loc_004A3C61: ;
    MEM32(esi + 0xCB0) = 6;

loc_004A3C6B: ;
    if (CMP_EQ(MEM32(esi + 0xCB4), 0)) goto loc_004A3CB2; /* je: equal / zero */

loc_004A3C74: ;
    if (CMP_B(MEM32(ebx + 0x14), 0xF)) goto loc_004A3CB2; /* jb: below (unsigned <) */

loc_004A3C7A: ;
    ecx = MEM32(esi + 0xCB0);
    if (CMP_EQ(ecx, 2)) goto loc_004A3C8A; /* je: equal / zero */

loc_004A3C85: ;
    if (CMP_NE(ecx, 4)) goto loc_004A3CB2; /* jne: not equal / not zero */

loc_004A3C8A: ;
    PUSH32(esp, MEM32(esi + 0xCAC));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0xCA8));
    PUSH32(esp, 0); sub_004B3873(); /* call 0x004B3873 */

loc_004A3C9D: ;
    if (TEST_S(eax, eax)) goto loc_004A3CAB; /* jl: less (signed <) */

loc_004A3CA1: ;
    MEM32(esi + 0xCB0) = 5;

loc_004A3CAB: ;
    MEM32(esi + 0xCB4) = MEM32(esi + 0xCB4) & 0;

loc_004A3CB2: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A3CBD; /* jge: greater or equal (signed >=) */

loc_004A3CB6: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004A12D7(); /* call 0x004A12D7 */

loc_004A3CBD: ;
    ecx = MEM32(esi + 0x738);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_004A3CD3; /* je: equal / zero */

loc_004A3CC9: ;
    if (CMP_EQ(ecx, 3)) goto loc_004A3CD3; /* je: equal / zero */

loc_004A3CCE: ;
    if (CMP_NE(ecx, 5)) goto loc_004A3D1D; /* jne: not equal / not zero */

loc_004A3CD3: ;
    PUSH32(esp, MEM32(esi + 0x734));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A3CE0: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A3D1D; /* jne: not equal / not zero */

loc_004A3CE7: ;
    ecx = MEM32(esi + 0x738);
    if (CMP_NE(ecx, edi)) goto loc_004A3CFD; /* jne: not equal / not zero */

loc_004A3CF1: ;
    MEM32(esi + 0x738) = 2;
    goto loc_004A3D1D;

loc_004A3CFD: ;
    if (CMP_NE(ecx, 3)) goto loc_004A3D0E; /* jne: not equal / not zero */

loc_004A3D02: ;
    MEM32(esi + 0x738) = 4;
    goto loc_004A3D1D;

loc_004A3D0E: ;
    if (CMP_NE(ecx, 5)) goto loc_004A3D1D; /* jne: not equal / not zero */

loc_004A3D13: ;
    MEM32(esi + 0x738) = 6;

loc_004A3D1D: ;
    if (CMP_EQ(MEM32(esi + 0x73C), 0)) goto loc_004A3D64; /* je: equal / zero */

loc_004A3D26: ;
    if (CMP_B(MEM32(ebx + 0x14), 0xF)) goto loc_004A3D64; /* jb: below (unsigned <) */

loc_004A3D2C: ;
    ecx = MEM32(esi + 0x738);
    if (CMP_EQ(ecx, 2)) goto loc_004A3D3C; /* je: equal / zero */

loc_004A3D37: ;
    if (CMP_NE(ecx, 4)) goto loc_004A3D64; /* jne: not equal / not zero */

loc_004A3D3C: ;
    PUSH32(esp, MEM32(esi + 0x734));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x730));
    PUSH32(esp, 0); sub_004B3873(); /* call 0x004B3873 */

loc_004A3D4F: ;
    if (TEST_S(eax, eax)) goto loc_004A3D5D; /* jl: less (signed <) */

loc_004A3D53: ;
    MEM32(esi + 0x738) = 5;

loc_004A3D5D: ;
    MEM32(esi + 0x73C) = MEM32(esi + 0x73C) & 0;

loc_004A3D64: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A3D6F; /* jge: greater or equal (signed >=) */

loc_004A3D68: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004A129A(); /* call 0x004A129A */

loc_004A3D6F: ;
    eax = MEM32(ebx + 0x54);
    if (TEST_Z(eax, eax)) goto loc_004A3DCB; /* je: equal / zero */

loc_004A3D76: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004BC831(); /* call 0x004BC831 */

loc_004A3D7E: ;
    if (TEST_Z(eax, eax)) goto loc_004A3DCB; /* je: equal / zero */

loc_004A3D82: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x54));
    ecx = esi;
    PUSH32(esp, 0); sub_004BB9BC(); /* call 0x004BB9BC */

loc_004A3D90: ;
    PUSH32(esp, MEM32(ebx + 0x54));
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0); sub_004BC1EA(); /* call 0x004BC1EA */

loc_004A3D9C: ;
    MEM32(ebx + 0x54) = MEM32(ebx + 0x54) & 0;
    PUSH32(esp, 0x8043);
    PUSH32(esp, MEM32(ebx + 0x50));
    ecx = esi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A3DAF: ;
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) & 0;
    if (CMP_EQ(edi, 0x1500F0)) goto loc_004A3DC3; /* je: equal / zero */

loc_004A3DBB: ;
    if (CMP_NE(edi, 0x80151917u)) goto loc_004A3DCB; /* jne: not equal / not zero */

loc_004A3DC3: ;
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, 0); sub_0049CF23(); /* call 0x0049CF23 */

loc_004A3DCB: ;
    ecx = MEM32(esi + 0x72C);
    if (CMP_EQ(ecx, 8)) goto loc_004A3EF0; /* je: equal / zero */

loc_004A3DDA: ;
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, 1)) goto loc_004A3DE6; /* je: equal / zero */

loc_004A3DE1: ;
    if (CMP_NE(ecx, 5)) goto loc_004A3E20; /* jne: not equal / not zero */

loc_004A3DE6: ;
    PUSH32(esp, MEM32(esi + 0x728));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A3DF3: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A3E20; /* jne: not equal / not zero */

loc_004A3DFA: ;
    ecx = MEM32(esi + 0x72C);
    if (CMP_NE(ecx, 1)) goto loc_004A3E11; /* jne: not equal / not zero */

loc_004A3E05: ;
    MEM32(esi + 0x72C) = 2;
    goto loc_004A3E20;

loc_004A3E11: ;
    if (CMP_NE(ecx, 5)) goto loc_004A3E20; /* jne: not equal / not zero */

loc_004A3E16: ;
    MEM32(esi + 0x72C) = 6;

loc_004A3E20: ;
    if (CMP_NE(MEM32(ebx + 0xB0), 0)) goto loc_004A3EE5; /* jne: not equal / not zero */

loc_004A3E2D: ;
    ecx = MEM32(esi + 0x72C);
    if (CMP_EQ(ecx, 2)) goto loc_004A3E41; /* je: equal / zero */

loc_004A3E38: ;
    if (CMP_NE(ecx, 6)) goto loc_004A3EE5; /* jne: not equal / not zero */

loc_004A3E41: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + 0x34;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B5F7(); /* call 0x0042B5F7 */

loc_004A3E54: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;

loc_004A3E58: ;
    eax = MEM32(ebp + 0x7C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + ebx;
    ecx = MEM32(eax + 0xCC);
    edx = MEM32(eax + 0xD0);
    edi = ecx;
    edi = edi | edx;
    if ((edi == 0)) goto loc_004A3EB1; /* je: equal / zero */

loc_004A3E72: ;
    if (TEST_NZ(MEM8(eax + 0xD4), 3)) goto loc_004A3EB1; /* jne: not equal / not zero */

loc_004A3E7B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x728));
    MEM32(ebp + 0x34) = ecx;
    PUSH32(esp, MEM32(esi + 0x724));
    ecx = esi;
    MEM32(ebp + 0x38) = edx;
    PUSH32(esp, 0); sub_004B4516(); /* call 0x004B4516 */

loc_004A3E9C: ;
    if (TEST_S(eax, eax)) goto loc_004A3EB1; /* jl: less (signed <) */

loc_004A3EA0: ;
    PUSH32(esp, MEM32(esi + 0x728));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A3EAD: ;
    if (TEST_Z(eax, eax)) goto loc_004A3EA0; /* je: equal / zero */

loc_004A3EB1: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    if (CMP_B(MEM32(ebp + 0x7C), 4)) goto loc_004A3E58; /* jb: below (unsigned <) */

loc_004A3EBA: ;
    PUSH32(esp, MEM32(esi + 0x728));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x724));
    PUSH32(esp, 0); sub_004B3873(); /* call 0x004B3873 */

loc_004A3ECD: ;
    if (TEST_S(eax, eax)) goto loc_004A3EDB; /* jl: less (signed <) */

loc_004A3ED1: ;
    MEM32(esi + 0x72C) = 5;

loc_004A3EDB: ;
    MEM32(ebx + 0xB0) = 1;

loc_004A3EE5: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A3EF0; /* jge: greater or equal (signed >=) */

loc_004A3EE9: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004A125D(); /* call 0x004A125D */

loc_004A3EF0: ;
    eax = MEM32(ebx + 0x14);
    if (CMP_BE(eax, 1)) { sub_004A3F13(); return; } /* jbe: below or equal (unsigned <=) */

loc_004A3EF8: ;
    if (CMP_AE(eax, 0x63)) { sub_004A3F13(); return; } /* jae: above or equal (unsigned >=) */

loc_004A3EFD: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004A3F02: ;
    if (CMP_B(eax, MEM32(ebx + 0x2C))) { sub_004A3F13(); return; } /* jb: below (unsigned <) */

loc_004A3F07: ;
    MEM32(ebx + 0x10) = 0x80151911u;
    g_seh_ebp = ebp; sub_004A43A5(); return; /* tail jmp 0x004A43A5 */

}

/**
 * sub_004A513B
 * Original: 0x004A513B - 0x004A5158 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A513B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A513B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(esi, edi)) { sub_004A5158(); return; } /* jne: not equal / not zero */

loc_004A514E: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A5733(); return; /* tail jmp 0x004A5733 */

}

/**
 * sub_004A5739
 * Original: 0x004A5739 - 0x004A5750 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5739(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A5739: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (TEST_NZ(esi, esi)) { sub_004A5750(); return; } /* jne: not equal / not zero */

loc_004A5749: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A579F(); return; /* tail jmp 0x004A579F */

}

/**
 * sub_004A5AD4
 * Original: 0x004A5AD4 - 0x004A5AEE (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5AD4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A5AD4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x8C4;
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_NZ(ebx, ebx)) { sub_004A5AEE(); return; } /* jne: not equal / not zero */

loc_004A5AE4: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A5B74(); return; /* tail jmp 0x004A5B74 */

}

/**
 * sub_004A5B79
 * Original: 0x004A5B79 - 0x004A5D2B (434 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5B79(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A5B79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2F0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(esi, ecx)) { sub_004A5D2B(); return; } /* jne: not equal / not zero */

loc_004A5B92: ;
    ebx = MEM32(ebp + 0xC);
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (CMP_EQ(ebx, ecx)) goto loc_004A5CE1; /* je: equal / zero */

loc_004A5BA0: ;
    eax = MEM32(ebx);
    if (CMP_BE(eax, 5)) goto loc_004A5D13; /* jbe: below or equal (unsigned <=) */

loc_004A5BAB: ;
    if (CMP_B(eax, 0x100)) goto loc_004A5BBD; /* jb: below (unsigned <) */

loc_004A5BB2: ;
    if (CMP_B(eax, 0x10000)) goto loc_004A5D13; /* jb: below (unsigned <) */

loc_004A5BBD: ;
    eax = 0; /* xor self */
    ecx = 0x2F9;
    edi = ebx + 0x1C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_NE(MEM32(ebx), 8)) goto loc_004A5BF9; /* jne: not equal / not zero */

loc_004A5BCE: ;
    MEM32(ebx + 0x10) = 0x9FC;
    ecx = MEM32(0x75F028);
    ebx = ebx + 0x9FC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004A11C0(); /* call 0x004A11C0 */

loc_004A5BE7: ;
    eax = ebx + 0x1C4;
    ecx = MEM32(eax + 0x30);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) & 0;
    MEM32(eax + 0x3C) = ecx;
    goto loc_004A5BFD;

loc_004A5BF9: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;

loc_004A5BFD: ;
    eax = MEM32(0x10118);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    (void)0; /* cmp MEM32(eax + 0x1D4), 0x56525347 - flags set for next jcc */
    edi = MEM32(0x561060);
    ebx = MEM32(0x561064);
    if (CMP_EQ(MEM32(eax + 0x1D4), 0x56525347)) goto loc_004A5C7B; /* je: equal / zero */

loc_004A5C1E: ;
    if (TEST_Z(MEM8(ebp + 0x10), 1)) goto loc_004A5C2C; /* je: equal / zero */

loc_004A5C24: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004302F8(); /* call 0x004302F8 */

loc_004A5C2C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x881C48);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004A5C37: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = ebp + -24;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 1);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_004A5C5F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_004A5C7B; /* jl: less (signed <) */

loc_004A5C66: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = 0x881C38;
    MEM32(ebp + 8) = 0x881C14;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_004A5C7B: ;
    eax = MEM32(0x10118);
    if (CMP_EQ(MEM32(eax + 0x1D4), 0x56525347)) goto loc_004A5C92; /* je: equal / zero */

loc_004A5C8C: ;
    if (CMP_GE(MEM32(ebp + -4), 0)) goto loc_004A5CDE; /* jge: greater or equal (signed >=) */

loc_004A5C92: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x881BEC);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004A5C9D: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = ebp + -24;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 1);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_004A5CC5: ;
    if (TEST_S(eax, eax)) goto loc_004A5CDE; /* jl: less (signed <) */

loc_004A5CC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = 0x881C38;
    MEM32(ebp + 8) = 0x881BD4;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_004A5CDE: ;
    ebx = MEM32(ebp + 0xC);

loc_004A5CE1: ;
    ecx = MEM32(0x75F028);
    if (TEST_Z(ecx, ecx)) goto loc_004A5CF0; /* je: equal / zero */

loc_004A5CEB: ;
    PUSH32(esp, 0); sub_004A08EB(); /* call 0x004A08EB */

loc_004A5CF0: ;
    eax = MEM32(0x10118);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 8));
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    eax = eax + eax + -1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042E562(); /* call 0x0042E562 */

loc_004A5D0E: ;
    g_seh_ebp = ebp; sub_004A5E7F(); return; /* tail jmp 0x004A5E7F */

loc_004A5D13: ;
    eax = MEM32(0x10118);
    if (CMP_NE(MEM32(eax + 0x1D4), 0x56525347)) goto loc_004A5CE1; /* jne: not equal / not zero */

loc_004A5D24: ;
    esi = 0; /* xor self */
    MEM32(ebp + 8) = ecx;
    goto loc_004A5CE1;

}

/**
 * sub_004A5E86
 * Original: 0x004A5E86 - 0x004A5F06 (128 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5E86(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A5E86: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC00;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* test MEM8(0x10124), 0x10 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(0x10124), 0x10)) goto loc_004A5ED2; /* je: equal / zero */

loc_004A5E9D: ;
    eax = 0; /* xor self */
    ecx = 0x300;
    edi = ebp + -3072;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax++;
    MEM32(ebp + -3072) = eax;
    MEM32(ebp + -3064) = eax;
    eax = ebp + -3072;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ebp + -3068) = ebx;
    MEM32(ebp + -3060) = ebx;
    PUSH32(esp, 0); sub_0042E3DB(); /* call 0x0042E3DB */

loc_004A5ED2: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x18));
    edi = 0x881C9C;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x881C90);
    PUSH32(esp, 0); sub_00430176(); /* call 0x00430176 */

loc_004A5EEB: ;
    if (TEST_S(eax, eax)) goto loc_004A5EF4; /* jl: less (signed <) */

loc_004A5EEF: ;
    edi = 0x881C7C;

loc_004A5EF4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004A5B79(); /* call 0x004A5B79 */

loc_004A5EFD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A5F06
 * Original: 0x004A5F06 - 0x004A5F1C (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5F06(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A5F06: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC00;
    eax = 0; /* xor self */
    if (CMP_NE(ecx, eax)) { sub_004A5F1C(); return; } /* jne: not equal / not zero */

loc_004A5F15: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A5F5D(); return; /* tail jmp 0x004A5F5D */

}

/**
 * sub_004A5F61
 * Original: 0x004A5F61 - 0x004A5F6F (14 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5F61(void)
{

loc_004A5F61: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = 0; /* xor self */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A5F6F
 * Original: 0x004A5F6F - 0x004A5F72 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5F6F(void)
{

loc_004A5F6F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A5F72
 * Original: 0x004A5F72 - 0x004A5F7D (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5F72(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A5F72: ;
    if (TEST_NZ(ecx, ecx)) { sub_004A5F7D(); return; } /* jne: not equal / not zero */

loc_004A5F76: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A5F84(); return; /* tail jmp 0x004A5F84 */

}

/**
 * sub_004A5F87
 * Original: 0x004A5F87 - 0x004A5F92 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5F87(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A5F87: ;
    if (TEST_NZ(ecx, ecx)) { sub_004A5F92(); return; } /* jne: not equal / not zero */

loc_004A5F8B: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A5F9C(); return; /* tail jmp 0x004A5F9C */

}

/**
 * sub_004A5F9F
 * Original: 0x004A5F9F - 0x004A5FD2 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5F9F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A5F9F: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(MEM32(esi + 0x72C), 1)) goto loc_004A5FD0; /* jne: not equal / not zero */

loc_004A5FAB: ;
    PUSH32(esp, MEM32(esi + 0x728));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A5FB8: ;
    if (TEST_Z(eax, eax)) goto loc_004A5FAB; /* je: equal / zero */

loc_004A5FBC: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A5FC6; /* jge: greater or equal (signed >=) */

loc_004A5FBE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004A125D(); return; /* tail jmp 0x004A125D */

loc_004A5FC6: ;
    MEM32(esi + 0x72C) = 2;

loc_004A5FD0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004A5FD2
 * Original: 0x004A5FD2 - 0x004A5FFB (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5FD2(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A5FD2: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1B);
    POP32(esp, ecx);
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax + 0x6C) = MEM32(eax + 0x6C) & 0;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (((int32_t)(ecx & ecx) >= 0)) goto loc_004A5FF8; /* jns: not sign (positive) */

loc_004A5FF5: ;
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) | ecx;

loc_004A5FF8: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A5FFB
 * Original: 0x004A5FFB - 0x004A605E (99 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A5FFB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A5FFB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1B4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    POP32(esp, esi);
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(ebp + 0xC), edi)) { sub_004A605E(); return; } /* je: equal / zero */

loc_004A601E: ;
    PUSH32(esp, MEM32(0x561094));
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A6029: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    eax = MEM32(0x561094);
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x881B44);
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -8) = edx;
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A6052: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_seh_ebp = ebp; sub_004A609B(); return; /* tail jmp 0x004A609B */

}

/**
 * sub_004A60F0
 * Original: 0x004A60F0 - 0x004A6197 (167 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A60F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A60F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1B4;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, ebx)) { sub_004A6197(); return; } /* je: equal / zero */

loc_004A6109: ;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    eax = MEM32(0x561094);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B44);
    esi = esi + 0x50;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + -8) = edx;
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A6138: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x881B30);
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004A614D: ;
    PUSH32(esp, 0x18);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAA0(); /* call 0x0046DAA0 */

loc_004A6158: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -436;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046DA9A(); /* call 0x0046DA9A */

loc_004A616A: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -436;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046DA94(); /* call 0x0046DA94 */

loc_004A6180: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x561094));
    g_seh_ebp = ebp; sub_004A621F(); return; /* tail jmp 0x004A621F */

}

/**
 * sub_004A6263
 * Original: 0x004A6263 - 0x004A637F (284 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6263(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A6263: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(ebp + 8);
    ebx = ecx;
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_004A60F0(); /* call 0x004A60F0 */

loc_004A627C: ;
    if (TEST_Z(eax, eax)) goto loc_004A6379; /* je: equal / zero */

loc_004A6284: ;
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -48;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebx + 0x724);
    if (TEST_Z(ecx, ecx)) goto loc_004A62BE; /* je: equal / zero */

loc_004A6299: ;
    edi = ebp + -24;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(esi);
    MEM32(ebp + -48) = eax;
    eax = MEM32(esi + 4);
    MEM32(ebp + -44) = eax;
    eax = ebp + -48;
    MEM32(ebp + -16) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B38AC(); /* call 0x004B38AC */

loc_004A62BE: ;
    edi = MEM32(ebp + 0x1C);
    ecx = MEM32(edi);
    eax = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_004A62F0; /* jbe: below or equal (unsigned <=) */

loc_004A62C9: ;
    edx = MEM32(ebp + 0x18);
    MEM32(ebp + 0xC) = edx;

loc_004A62CF: ;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx);
    if (CMP_NE(edx, MEM32(esi))) goto loc_004A62E7; /* jne: not equal / not zero */

loc_004A62D8: ;
    edx = MEM32(ebp + 0xC);
    edx = MEM32(edx + 4);
    if (CMP_EQ(edx, MEM32(esi + 4))) { sub_004A637F(); return; } /* je: equal / zero */

loc_004A62E7: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x70;
    eax++;
    if (CMP_B(eax, MEM32(edi))) goto loc_004A62CF; /* jb: below (unsigned <) */

loc_004A62F0: ;
    ebx = MEM32(ebp + 0x14);
    edx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_004A6311; /* jbe: below or equal (unsigned <=) */

loc_004A62F9: ;
    eax = MEM32(ebx + edx * 8 + 4);
    if (CMP_B(eax, MEM32(ebp + -36))) goto loc_004A6311; /* jb: below (unsigned <) */

loc_004A6302: ;
    if (CMP_A(eax, MEM32(ebp + -36))) goto loc_004A630C; /* ja: above (unsigned >) */

loc_004A6304: ;
    eax = MEM32(ebx + edx * 8);
    if (CMP_B(eax, MEM32(ebp + -40))) goto loc_004A6311; /* jb: below (unsigned <) */

loc_004A630C: ;
    edx++;
    if (CMP_B(edx, MEM32(edi))) goto loc_004A62F9; /* jb: below (unsigned <) */

loc_004A6311: ;
    if (CMP_BE(ecx, edx)) goto loc_004A6354; /* jbe: below or equal (unsigned <=) */

loc_004A6315: ;
    eax = ebx + ecx * 8;
    MEM32(ebp + 0xC) = eax;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + MEM32(ebp + 0x18);
    ecx = ecx - edx;
    MEM32(ebp + 0x14) = ecx;

loc_004A6328: ;
    PUSH32(esp, 0x1C);
    esi = eax + -112;
    edi = eax;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ecx + -8);
    MEM32(ecx) = esi;
    esi = MEM32(ecx + -4);
    MEM32(ecx + 4) = esi;
    ecx = ecx - 8;
    eax = eax - 0x70;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    MEM32(ebp + 0xC) = ecx;
    if ((MEM32(ebp + 0x14) != 0)) goto loc_004A6328; /* jne: not equal / not zero */

loc_004A634E: ;
    edi = MEM32(ebp + 0x1C);
    esi = MEM32(ebp + 8);

loc_004A6354: ;
    ecx = MEM32(ebp + -4);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A5FD2(); /* call 0x004A5FD2 */

loc_004A6369: ;
    eax = MEM32(ebp + -40);
    MEM32(ebx + edx * 8) = eax;
    eax = MEM32(ebp + -36);
    MEM32(ebx + edx * 8 + 4) = eax;
    MEM32(edi) = MEM32(edi) + 1;
    POP32(esp, edi);

loc_004A6379: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004A639E
 * Original: 0x004A639E - 0x004A63B8 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A639E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A639E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2D4;
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_NZ(ebx, ebx)) { sub_004A63B8(); return; } /* jne: not equal / not zero */

loc_004A63AE: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A6515(); return; /* tail jmp 0x004A6515 */

}

/**
 * sub_004A651A
 * Original: 0x004A651A - 0x004A6534 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A651A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A651A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1EC;
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(MEM32(ebx + 0x1C), 0x56525347)) { sub_004A6534(); return; } /* jne: not equal / not zero */

loc_004A652F: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_004A6536(); return; /* tail jmp 0x004A6536 */

}

/**
 * sub_004A65B7
 * Original: 0x004A65B7 - 0x004A660B (84 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A65B7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A65B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, esi);
    ebx = eax + 0x1B7C;
    PUSH32(esp, edi);
    edi = ebx;
    MEM32(ebp + -8) = edi;

loc_004A65D0: ;
    ecx = MEM32(edi);
    ecx = ecx | MEM32(edi + 4);
    if ((ecx == 0)) goto loc_004A65E3; /* je: equal / zero */

loc_004A65D7: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    esi = ebp + 8;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004A6602; /* je: equal / zero */

loc_004A65E3: ;
    edi = MEM32(ebp + -8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    edi = edi + 8;
    (void)0; /* cmp MEM32(ebp + -4), 4 - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    if (CMP_B(MEM32(ebp + -4), 4)) goto loc_004A65D0; /* jb: below (unsigned <) */

loc_004A65F5: ;
    if (CMP_NE(MEM32(ebp + 0x10), 0)) { sub_004A660B(); return; } /* jne: not equal / not zero */

loc_004A65FB: ;
    eax = 0x80155100u;
    g_seh_ebp = ebp; sub_004A6629(); return; /* tail jmp 0x004A6629 */

loc_004A6602: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx << 3;
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; sub_004A660D(); return; /* tail jmp 0x004A660D */

}

/**
 * sub_004A6630
 * Original: 0x004A6630 - 0x004A668B (91 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A6630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM8(ebp + -12) = LO8(eax);
    MEM8(ebp + -11) = LO8(eax);
    MEM8(ebp + -10) = LO8(eax);
    MEM8(ebp + -9) = LO8(eax);
    MEM8(ebp + -8) = LO8(eax);
    MEM8(ebp + -7) = LO8(eax);
    MEM8(ebp + -6) = LO8(eax);
    MEM8(ebp + -5) = LO8(eax);
    MEM32(ebp + -4) = eax;
    edx = ebx + 0x1B7C;

loc_004A665E: ;
    eax = MEM32(edx);
    eax = eax | MEM32(edx + 4);
    if ((eax == 0)) goto loc_004A6673; /* je: equal / zero */

loc_004A6665: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx;
    esi = ebp + 8;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) { sub_004A668B(); return; } /* je: equal / zero */

loc_004A6673: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    edx = edx + 8;
    if (CMP_B(MEM32(ebp + -4), 4)) goto loc_004A665E; /* jb: below (unsigned <) */

loc_004A667F: ;
    eax = 0x80155100u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A66F8
 * Original: 0x004A66F8 - 0x004A670A (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A66F8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A66F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(ecx, ebx)) { sub_004A670A(); return; } /* jne: not equal / not zero */

loc_004A6703: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A676D(); return; /* tail jmp 0x004A676D */

}

/**
 * sub_004A6772
 * Original: 0x004A6772 - 0x004A6787 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6772(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A6772: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    if (CMP_NE(ecx, edx)) { sub_004A6787(); return; } /* jne: not equal / not zero */

loc_004A677D: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A686F(); return; /* tail jmp 0x004A686F */

}

/**
 * sub_004A68D0
 * Original: 0x004A68D0 - 0x004A6948 (120 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A68D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A68D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_004A6940; /* jbe: below or equal (unsigned <=) */

loc_004A68E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    esi = esi + 8;
    MEM32(ebp + 0xC) = eax;

loc_004A68EA: ;
    if (CMP_EQ(MEM32(ebp + 8), ebx)) goto loc_004A68F4; /* je: equal / zero */

loc_004A68EF: ;
    if (CMP_EQ(MEM32(esi + -4), ebx)) goto loc_004A6937; /* je: equal / zero */

loc_004A68F4: ;
    eax = MEM32(esi + -8);
    edi = edi + 8;
    eax = eax & 0xF00000;
    if ((eax == 0)) goto loc_004A6934; /* je: equal / zero */

loc_004A6901: ;
    if (CMP_EQ(eax, 0x100000)) goto loc_004A6918; /* je: equal / zero */

loc_004A6908: ;
    if (CMP_NE(eax, 0x200000)) goto loc_004A6937; /* jne: not equal / not zero */

loc_004A690F: ;
    eax = MEM32(esi + 4);

loc_004A6912: ;
    edi = edi + eax + 2;
    goto loc_004A6937;

loc_004A6918: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_0042F03B(); /* call 0x0042F03B */

loc_004A6923: ;
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFDE9);
    PUSH32(esp, 0); sub_0047E879(); /* call 0x0047E879 */

loc_004A6932: ;
    goto loc_004A6912;

loc_004A6934: ;
    edi = edi + 8;

loc_004A6937: ;
    esi = esi + 0x10;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_004A68EA; /* jne: not equal / not zero */

loc_004A693F: ;
    POP32(esp, esi);

loc_004A6940: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A6948
 * Original: 0x004A6948 - 0x004A6A9F (343 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6948(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A6948: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(eax, edi)) goto loc_004A6A9A; /* jbe: below or equal (unsigned <=) */

loc_004A6959: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    ebx = ebx + 8;
    MEM32(ebp + 0x10) = eax;

loc_004A6964: ;
    if (CMP_EQ(MEM32(ebp + 8), edi)) goto loc_004A6972; /* je: equal / zero */

loc_004A6969: ;
    if (CMP_EQ(MEM32(ebx + -4), edi)) goto loc_004A6A8C; /* je: equal / zero */

loc_004A6972: ;
    eax = MEM32(ebx + -8);
    ecx = 0xF00000;
    eax = eax & ecx;
    if ((eax == 0)) goto loc_004A6A63; /* je: equal / zero */

loc_004A6982: ;
    if (CMP_EQ(eax, 0x100000)) goto loc_004A6A04; /* je: equal / zero */

loc_004A6989: ;
    if (CMP_EQ(eax, 0x200000)) goto loc_004A69B8; /* je: equal / zero */

loc_004A6990: ;
    if (CMP_NE(eax, ecx)) goto loc_004A6A8C; /* jne: not equal / not zero */

loc_004A6998: ;
    eax = MEM32(ebp + 0x1C);
    eax = eax - MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x18);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebx + -8);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4;
    MEM32(ecx) = eax;
    goto loc_004A6A8C;

loc_004A69B8: ;
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    ecx = eax;
    ecx = ecx - MEM32(ebp + 0xC);
    MEM32(edx) = ecx;
    ecx = MEM32(ebx + -8);
    MEM32(eax) = ecx;
    SET_LO16(ecx, MEM16(ebx + 4));
    eax = eax + 4;
    MEM16(eax) = LO16(ecx);
    esi = MEM32(ebx);
    eax++;
    eax++;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(ebp + 0x1C) = eax;
    if (CMP_EQ(esi, edi)) goto loc_004A6A8C; /* je: equal / zero */

loc_004A69E7: ;
    ecx = MEM32(ebx + 4);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = eax + MEM32(ebx + 4);
    edi = 0; /* xor self */
    goto loc_004A6A89;

loc_004A6A04: ;
    esi = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = esi;
    eax = eax - MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0); sub_0042F03B(); /* call 0x0042F03B */

loc_004A6A20: ;
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, edi);
    edi = 0xFDE9;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047E879(); /* call 0x0047E879 */

loc_004A6A30: ;
    ecx = MEM32(ebx + -8);
    MEM32(esi) = ecx;
    PUSH32(esp, 0);
    esi = esi + 4;
    MEM16(esi) = LO16(eax);
    PUSH32(esp, 0);
    esi++;
    PUSH32(esp, eax);
    esi++;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx));
    MEM32(ebp + 0x1C) = eax;
    PUSH32(esp, 0); sub_0042F03B(); /* call 0x0042F03B */

loc_004A6A4D: ;
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047E879(); /* call 0x0047E879 */

loc_004A6A59: ;
    esi = esi + MEM32(ebp + 0x1C);
    edi = 0; /* xor self */
    MEM32(ebp + 0x1C) = esi;
    goto loc_004A6A8C;

loc_004A6A63: ;
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    ecx = eax;
    ecx = ecx - MEM32(ebp + 0xC);
    MEM32(edx) = ecx;
    ecx = MEM32(ebx + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebx);
    eax = eax + 4;
    MEM32(eax) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(eax + 4) = ecx;
    eax = eax + 8;

loc_004A6A89: ;
    MEM32(ebp + 0x1C) = eax;

loc_004A6A8C: ;
    ebx = ebx + 0x10;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_004A6964; /* jne: not equal / not zero */

loc_004A6A98: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004A6A9A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004A6A9F
 * Original: 0x004A6A9F - 0x004A6ACB (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6A9F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A6A9F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -16) = esi;
    if (CMP_NE(eax, esi)) { sub_004A6ACB(); return; } /* jne: not equal / not zero */

loc_004A6ABF: ;
    MEM32(ebp + 8) = 0x1500F0;
    g_seh_ebp = ebp; sub_004A6B8E(); return; /* tail jmp 0x004A6B8E */

}

/**
 * sub_004A6B97
 * Original: 0x004A6B97 - 0x004A6BD1 (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6B97(void)
{

loc_004A6B97: ;
    eax = MEM32(esp + 0xC);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    edx = eax + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 0x40));
    eax = MEM32(esp + 0x38);
    PUSH32(esp, MEM32(eax * 4 + 0x651674));
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_004ADD9D(); /* call 0x004ADD9D */

loc_004A6BCE: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004A6C3C
 * Original: 0x004A6C3C - 0x004A6D99 (349 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6C3C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A6C3C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x801B);
    PUSH32(esp, 0x50);
    edi = ecx;
    PUSH32(esp, 0); sub_004B5395(); /* call 0x004B5395 */

loc_004A6C55: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_004A6CFC; /* je: equal / zero */

loc_004A6C62: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004A6C6A: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x1C);
    MEM32(eax) = 0x4A6A9F;
    eax = MEM32(esi);
    MEM32(eax + 4) = 0x4A6BD1;
    eax = MEM32(esi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(eax + 8) = ecx;
    ecx = edi;
    PUSH32(esp, 0); sub_004B5395(); /* call 0x004B5395 */

loc_004A6C8F: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x48) = eax;
    eax = MEM32(esi);
    if (CMP_EQ(MEM32(eax + 0x48), 0)) goto loc_004A6CFC; /* je: equal / zero */

loc_004A6C9C: ;
    ebx = MEM32(ebp + 0x10);
    if (TEST_Z(ebx, ebx)) goto loc_004A6CCA; /* je: equal / zero */

loc_004A6CA3: ;
    eax = 0x118;
    if (CMP_AE(ebx, eax)) goto loc_004A6CAE; /* jae: above or equal (unsigned >=) */

loc_004A6CAC: ;
    ebx = eax;

loc_004A6CAE: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004B5390(); /* call 0x004B5390 */

loc_004A6CB8: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x40) = eax;
    eax = MEM32(esi);
    if (CMP_EQ(MEM32(eax + 0x40), 0)) goto loc_004A6CFC; /* je: equal / zero */

loc_004A6CC5: ;
    MEM32(eax + 0x44) = ebx;
    goto loc_004A6CD7;

loc_004A6CCA: ;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) & 0;
    eax = MEM32(esi);
    MEM32(eax + 0x44) = 0x118;

loc_004A6CD7: ;
    ebx = MEM32(ebp + 0x20);
    eax = 0; /* xor self */
    if (CMP_EQ(ebx, eax)) goto loc_004A6D57; /* je: equal / zero */

loc_004A6CE0: ;
    eax = ebx;
    PUSH32(esp, 0x1E);
    eax = eax << 2;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B5390(); /* call 0x004B5390 */

loc_004A6CEF: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x3C) = eax;
    eax = MEM32(esi);
    if (CMP_NE(MEM32(eax + 0x3C), 0)) goto loc_004A6D5E; /* jne: not equal / not zero */

loc_004A6CFC: ;
    eax = MEM32(esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = 0x8007000Eu;
    if (TEST_Z(eax, eax)) goto loc_004A6D8F; /* je: equal / zero */

loc_004A6D0D: ;
    eax = MEM32(eax + 0x48);
    if (TEST_Z(eax, eax)) goto loc_004A6D1E; /* je: equal / zero */

loc_004A6D14: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A6D1E: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x40);
    if (TEST_Z(eax, eax)) goto loc_004A6D31; /* je: equal / zero */

loc_004A6D27: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A6D31: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_004A6D44; /* je: equal / zero */

loc_004A6D3A: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A6D44: ;
    PUSH32(esp, 0x801B);
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A6D52: ;
    MEM32(esi) = MEM32(esi) & 0;
    goto loc_004A6D8F;

loc_004A6D57: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x3C) = eax;
    goto loc_004A6D60;

loc_004A6D5E: ;
    eax = 0; /* xor self */

loc_004A6D60: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0x24);
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(esi);
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x30) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x34) = ebx;
    ecx = MEM32(esi);
    MEM32(ecx + 0x4C) = eax;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(eax + 0x18) = ecx;

loc_004A6D8F: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004A6D99
 * Original: 0x004A6D99 - 0x004A6DAE (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6D99(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A6D99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    if (CMP_NE(edi, esi)) { sub_004A6DAE(); return; } /* jne: not equal / not zero */

loc_004A6DA7: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A6E17(); return; /* tail jmp 0x004A6E17 */

}

/**
 * sub_004A6E1D
 * Original: 0x004A6E1D - 0x004A6F19 (252 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6E1D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A6E1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0x2C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x20), esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    MEM32(eax) = esi;
    if (CMP_BE(MEM32(ebp + 0x20), esi)) goto loc_004A6E51; /* jbe: below or equal (unsigned <=) */

loc_004A6E3A: ;
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + 0x20);
    eax = eax + 4;

loc_004A6E43: ;
    if (CMP_NE(MEM32(eax), 1)) goto loc_004A6E4B; /* jne: not equal / not zero */

loc_004A6E48: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;

loc_004A6E4B: ;
    eax = eax + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_004A6E43; /* jne: not equal / not zero */

loc_004A6E51: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004A68D0(); /* call 0x004A68D0 */

loc_004A6E61: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x28));
    edi = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    edi = edi + 0x48;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A6C3C(); /* call 0x004A6C3C */

loc_004A6E7F: ;
    if (CMP_L(eax, esi)) goto loc_004A6F13; /* jl: less (signed <) */

loc_004A6E87: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + -12);
    esi = MEM32(ebx + 0x48);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D70A(); /* call 0x0048D70A */

loc_004A6E97: ;
    ecx = MEM32(ebp + -8);
    MEM32(esi) = edi;
    edi = MEM32(ebp + -4);
    eax = MEM32(edi + 4);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x34) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x40) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 0x48);
    ecx = eax + ecx * 4 + 0x48;
    PUSH32(esp, ecx);
    ecx = eax + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004A6948(); /* call 0x004A6948 */

loc_004A6EE8: ;
    ecx = MEM32(ebp + 0x20);
    if (CMP_BE(ecx & ecx, 0)) goto loc_004A6EFE; /* jbe: below or equal (unsigned <=) */

loc_004A6EEF: ;
    eax = MEM32(ebp + 0x24);
    eax = eax + 4;

loc_004A6EF5: ;
    MEM32(eax) = MEM32(eax) & 0;
    eax = eax + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_004A6EF5; /* jne: not equal / not zero */

loc_004A6EFE: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 0x48));
    PUSH32(esp, 0); sub_004A6B97(); /* call 0x004A6B97 */

loc_004A6F0D: ;
    ecx = MEM32(ebp + 0x2C);
    MEM32(ecx) = ebx;
    POP32(esp, ebx);

loc_004A6F13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_004A6F19
 * Original: 0x004A6F19 - 0x004A700E (245 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A6F19(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A6F19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = 0; /* xor self */
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = ebx;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -19) = LO8(ebx);
    MEM8(ebp + -18) = LO8(ebx);
    MEM8(ebp + -17) = LO8(ebx);
    MEM8(ebp + -16) = LO8(ebx);
    MEM8(ebp + -15) = LO8(ebx);
    MEM8(ebp + -14) = LO8(ebx);
    MEM8(ebp + -13) = LO8(ebx);
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_004A68D0(); /* call 0x004A68D0 */

loc_004A6F51: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = eax + 0x38;
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + -12) = eax;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A6C3C(); /* call 0x004A6C3C */

loc_004A6F75: ;
    if (CMP_L(eax, ebx)) goto loc_004A7009; /* jl: less (signed <) */

loc_004A6F7D: ;
    eax = MEM32(ebp + -12);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + -8);
    esi = MEM32(edi + 0x48);
    MEM32(esi) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D70A(); /* call 0x0048D70A */

loc_004A6FA2: ;
    ecx = MEM32(ebp + -4);
    MEM16(esi + 0x30) = LO16(ebx);
    PUSH32(esp, 0); sub_004A10E2(); /* call 0x004A10E2 */

loc_004A6FAE: ;
    if (CMP_EQ(eax, ebx)) goto loc_004A6FC6; /* je: equal / zero */

loc_004A6FB2: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);

loc_004A6FB5: ;
    edx = MEM32(eax);
    edx = edx | MEM32(eax + 4);
    if ((edx == 0)) goto loc_004A6FC0; /* je: equal / zero */

loc_004A6FBC: ;
    MEM16(esi + 0x30) = MEM16(esi + 0x30) + 1;

loc_004A6FC0: ;
    eax = eax + 0x70;
    ecx--;
    if ((ecx != 0)) goto loc_004A6FB5; /* jne: not equal / not zero */

loc_004A6FC6: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004A111E(); /* call 0x004A111E */

loc_004A6FCE: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0x34) = ecx;
    MEM16(esi + 0x32) = LO16(eax);
    eax = MEM32(edi + 0x48);
    edx = eax + ecx * 4 + 0x38;
    PUSH32(esp, edx);
    edx = eax + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004A6948(); /* call 0x004A6948 */

loc_004A6FF2: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(edi + 0x48));
    PUSH32(esp, 0); sub_004A6B97(); /* call 0x004A6B97 */

loc_004A7002: ;
    ecx = MEM32(ebp + 0x20);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004A7009: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004A700E
 * Original: 0x004A700E - 0x004A7024 (22 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A700E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A700E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    if (CMP_NE(esi, ebx)) { sub_004A7024(); return; } /* jne: not equal / not zero */

loc_004A701D: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A7083(); return; /* tail jmp 0x004A7083 */

}

/**
 * sub_004A7089
 * Original: 0x004A7089 - 0x004A709A (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7089(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A7089: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(esi, esi)) { sub_004A709A(); return; } /* jne: not equal / not zero */

loc_004A7093: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A70D9(); return; /* tail jmp 0x004A70D9 */

}

/**
 * sub_004A70DE
 * Original: 0x004A70DE - 0x004A70EE (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A70DE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A70DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (TEST_NZ(ecx, ecx)) { sub_004A70EE(); return; } /* jne: not equal / not zero */

loc_004A70E5: ;
    eax = 0x80150005u;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004A70F4
 * Original: 0x004A70F4 - 0x004A7105 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A70F4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A70F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    if (TEST_NZ(ecx, ecx)) { sub_004A7105(); return; } /* jne: not equal / not zero */

loc_004A70FE: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A712F(); return; /* tail jmp 0x004A712F */

}

/**
 * sub_004A7133
 * Original: 0x004A7133 - 0x004A71AB (120 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7133(void)
{

loc_004A7133: ;
    edx = ecx;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(edx + 0x10) = ecx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x14CC) = eax;
    MEM32(edx + 0x14D0) = eax;
    MEM32(edx + 0x1560) = eax;
    MEM32(edx + 0x1564) = eax;
    MEM32(edx + 0x1568) = eax;
    MEM32(edx + 0x156C) = eax;
    MEM32(edx + 0x1570) = eax;
    MEM32(edx + 0x1578) = eax;
    MEM32(edx + 0x157C) = eax;
    MEM32(edx + 8) = 7;
    ecx = 0x12C;
    edi = edx + 0x1C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x400;
    edi = edx + 0x4CC;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A71AB
 * Original: 0x004A71AB - 0x004A71D1 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A71AB(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A71AB: ;
    if (CMP_NE(MEM32(ecx + 4), 0)) goto loc_004A71C1; /* jne: not equal / not zero */

loc_004A71B1: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_004A71C1; /* je: equal / zero */

loc_004A71B7: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = 7;

loc_004A71C1: ;
    ecx = MEM32(ecx + 4);
    if (TEST_Z(ecx, ecx)) goto loc_004A71D0; /* je: equal / zero */

loc_004A71C8: ;
    PUSH32(esp, MEM32(ecx + 8));
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004A71D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004A71D1
 * Original: 0x004A71D1 - 0x004A71EA (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A71D1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A71D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    if (TEST_NZ(edi, edi)) { sub_004A71EA(); return; } /* jne: not equal / not zero */

loc_004A71E0: ;
    eax = 0x8000FFFFu;
    g_seh_ebp = ebp; sub_004A7288(); return; /* tail jmp 0x004A7288 */

}

/**
 * sub_004A728C
 * Original: 0x004A728C - 0x004A72B6 (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A728C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A728C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_004A72AF; /* je: equal / zero */

loc_004A729A: ;
    edx = MEM32(esp + 0xC);

loc_004A729E: ;
    if (CMP_EQ(eax, edx)) goto loc_004A72AB; /* je: equal / zero */

loc_004A72A2: ;
    ecx = eax;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ebx)) goto loc_004A729E; /* jne: not equal / not zero */

loc_004A72AB: ;
    if (CMP_NE(eax, ebx)) { sub_004A72B6(); return; } /* jne: not equal / not zero */

loc_004A72AF: ;
    eax = 0x8000FFFFu;
    g_seh_ebp = ebp; sub_004A7327(); return; /* tail jmp 0x004A7327 */

}

/**
 * sub_004A732C
 * Original: 0x004A732C - 0x004A7376 (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A732C(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A732C: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_B(MEM32(esi + 0x14), 0x64)) goto loc_004A733E; /* jb: below (unsigned <) */

loc_004A7335: ;
    PUSH32(esp, 0); sub_004A71D1(); /* call 0x004A71D1 */

loc_004A733A: ;
    if (TEST_S(eax, eax)) goto loc_004A7372; /* jl: less (signed <) */

loc_004A733E: ;
    eax = MEM32(esi + 0x14);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    eax = eax << 2;
    PUSH32(esp, eax);
    edi = esi + 0x1C;
    eax = esi + 0x28;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004A7356: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    MEM32(edi) = eax;
    SET_LO16(eax, MEM16(esp + 0x1C));
    esp = esp + 0xC;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    MEM16(esi + 0x20) = LO16(eax);
    eax = 0; /* xor self */
    POP32(esp, edi);

loc_004A7372: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A7376
 * Original: 0x004A7376 - 0x004A73D2 (92 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7376(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A7376: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ebx = ecx;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_004A7386: ;
    esi = eax + eax + 2;
    eax = MEM32(ebx + 0x18);
    eax = eax + esi;
    (void)0; /* cmp eax, 0x1000 - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    if (CMP_BE(eax, 0x1000)) goto loc_004A73A5; /* jbe: below or equal (unsigned <=) */

loc_004A739A: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_004A71D1(); /* call 0x004A71D1 */

loc_004A73A1: ;
    if (TEST_S(eax, eax)) goto loc_004A73CC; /* jl: less (signed <) */

loc_004A73A5: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM32(ebx + 0x14), eax)) goto loc_004A73C9; /* jbe: below or equal (unsigned <=) */

loc_004A73AC: ;
    ecx = ebx + 0x20;

loc_004A73AF: ;
    edx = MEM32(ecx + -4);
    if (CMP_NE(edx, MEM32(ebp + 8))) goto loc_004A73C0; /* jne: not equal / not zero */

loc_004A73B7: ;
    SET_LO16(edx, MEM16(ecx));
    if (CMP_EQ(LO16(edx), MEM16(ebp + 0xC))) { sub_004A73D2(); return; } /* je: equal / zero */

loc_004A73C0: ;
    eax++;
    ecx = ecx + 0xC;
    if (CMP_B(eax, MEM32(ebx + 0x14))) goto loc_004A73AF; /* jb: below (unsigned <) */

loc_004A73C9: ;
    eax = 0; /* xor self */
    eax++;

loc_004A73CC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A7450
 * Original: 0x004A7450 - 0x004A74A5 (85 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A7450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x14);
    esi = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_004A747F; /* jbe: below or equal (unsigned <=) */

loc_004A746A: ;
    eax = edi + 0x20;

loc_004A746D: ;
    if (CMP_NE(MEM32(eax + -4), edx)) goto loc_004A7477; /* jne: not equal / not zero */

loc_004A7472: ;
    if (CMP_EQ(MEM16(eax), LO16(ebx))) { sub_004A74A5(); return; } /* je: equal / zero */

loc_004A7477: ;
    esi++;
    eax = eax + 0xC;
    if (CMP_B(esi, ecx)) goto loc_004A746D; /* jb: below (unsigned <) */

loc_004A747F: ;
    eax = MEM32(ebp + 0x14);
    MEM16(eax) = MEM16(eax) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0); sub_004A732C(); /* call 0x004A732C */

loc_004A748F: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_004A749C; /* jl: less (signed <) */

loc_004A7495: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004A71AB(); /* call 0x004A71AB */

loc_004A749C: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004A74FD
 * Original: 0x004A74FD - 0x004A751E (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A74FD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A74FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp ecx, MEM32(esi + 4) - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -16) = edi;
    if (CMP_EQ(ecx, MEM32(esi + 4))) { sub_004A751E(); return; } /* je: equal / zero */

loc_004A7517: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004A7A96(); return; /* tail jmp 0x004A7A96 */

}

/**
 * sub_004A7BB5
 * Original: 0x004A7BB5 - 0x004A7BCA (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7BB5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A7BB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(edi, edi)) { sub_004A7BCA(); return; } /* jne: not equal / not zero */

loc_004A7BC0: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A7C71(); return; /* tail jmp 0x004A7C71 */

}

/**
 * sub_004A7C76
 * Original: 0x004A7C76 - 0x004A7C97 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7C76(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A7C76: ;
    eax = MEM32(esp + 4);
    eax = eax - 0x407;
    if ((eax == 0)) { sub_004A7C97(); return; } /* je: equal / zero */

loc_004A7C81: ;
    eax = eax - 0xB;
    if ((eax == 0)) goto loc_004A7C93; /* je: equal / zero */

loc_004A7C86: ;
    eax--;
    if ((eax == 0)) goto loc_004A7C8E; /* je: equal / zero */

loc_004A7C89: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004A7C99(); return; /* tail jmp 0x004A7C99 */

loc_004A7C8E: ;
    PUSH32(esp, 4);

loc_004A7C90: ;
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_004A7C99(); return; /* tail jmp 0x004A7C99 */

loc_004A7C93: ;
    PUSH32(esp, 3);
    goto loc_004A7C90;

}

/**
 * sub_004A7C9C
 * Original: 0x004A7C9C - 0x004A7CA2 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7C9C(void)
{

loc_004A7C9C: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A7CA2
 * Original: 0x004A7CA2 - 0x004A7CB4 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7CA2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A7CA2: ;
    if (CMP_NE(MEM32(esp + 4), 0)) { sub_004A7CB4(); return; } /* jne: not equal / not zero */

loc_004A7CA9: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_004A7C76(); /* call 0x004A7C76 */

loc_004A7CB2: ;
    g_seh_ebp = ebp; sub_004A7CB7(); return; /* tail jmp 0x004A7CB7 */

}

/**
 * sub_004A7CC9
 * Original: 0x004A7CC9 - 0x004A7D82 (185 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7CC9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004A7CC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_004A7D7E; /* je: equal / zero */

loc_004A7CDC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    POP32(esp, edx);
    ecx = edx;
    edi = ebp + -64;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    MEM32(ebp + -64) = 1;
    MEM32(ebp + -56) = 8;
    MEM32(ebp + -52) = edx;
    MEM32(ebp + -36) = 0x1F;
    MEM32(ebp + -20) = 0x2F;
    PUSH32(esp, 0); sub_0049CB7D(); /* call 0x0049CB7D */

loc_004A7D1B: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_GE(eax, 4)) goto loc_004A7D3F; /* jge: greater or equal (signed >=) */

loc_004A7D23: ;
    if (TEST_S(eax, eax)) goto loc_004A7D3F; /* jl: less (signed <) */

loc_004A7D27: ;
    ecx = MEM32(eax * 4 + 0x651688);
    if (TEST_Z(ecx, ecx)) goto loc_004A7D3F; /* je: equal / zero */

loc_004A7D32: ;
    ebx = MEM32(ebp + -60);
    ebx = ebx & ecx;
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = (uint32_t)(-(int32_t)ebx);
    goto loc_004A7D79;

loc_004A7D3F: ;
    if (CMP_NE(eax, 2)) goto loc_004A7D79; /* jne: not equal / not zero */

loc_004A7D44: ;
    eax = MEM32(ebp + -56);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = 0xFFFFFF00u;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_004A7D68; /* jns: not sign (positive) */

loc_004A7D50: ;
    ebx = MEM32(ebp + -4);
    edi = eax;
    edx = esi + esi * 8;
    edi = edi & ecx;
    if (CMP_BE(edi, MEM32(ebx + edx * 8 + 0x13CC))) goto loc_004A7D68; /* jbe: below or equal (unsigned <=) */

loc_004A7D63: ;
    ebx = 0; /* xor self */
    ebx++;
    goto loc_004A7D6A;

loc_004A7D68: ;
    ebx = 0; /* xor self */

loc_004A7D6A: ;
    edx = MEM32(ebp + -4);
    eax = eax & ecx;
    ecx = esi + esi * 8;
    MEM32(edx + ecx * 8 + 0x13CC) = eax;

loc_004A7D79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);

loc_004A7D7E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A7D82
 * Original: 0x004A7D82 - 0x004A7EA1 (287 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7D82(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A7D82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(edi + 0x40), eax - flags set for next jcc */
    ebx = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(MEM32(edi + 0x40), eax)) goto loc_004A7E76; /* je: equal / zero */

loc_004A7D9C: ;
    if (CMP_NE(MEM32(edi + 0x44), 0x34)) goto loc_004A7E76; /* jne: not equal / not zero */

loc_004A7DA6: ;
    if (CMP_EQ(MEM32(edi + 0x48), eax)) goto loc_004A7E76; /* je: equal / zero */

loc_004A7DAF: ;
    PUSH32(esp, 0x8021);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_004B53DA(); /* call 0x004B53DA */

loc_004A7DBB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_NZ(eax, eax)) goto loc_004A7DCC; /* jne: not equal / not zero */

loc_004A7DC2: ;
    esi = 0x8007000Eu;
    goto loc_004A7E7B;

loc_004A7DCC: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax + 0xC) = 1;
    esi = MEM32(edi + 0x40);
    eax = ebx + 0x14C8;
    MEM32(esi) = 8;
    MEM32(esi + 4) = 0x14;
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049CFA8(); /* call 0x0049CFA8 */

loc_004A7E01: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = MEM32(ebp + 8);
    eax = eax + eax * 8;
    ecx = MEM32(ebx + eax * 8 + 0x13A8);
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(ebx + eax * 8 + 0x13AC);
    MEM32(esi + 0x24) = eax;
    SET_LO16(eax, MEM16(ebp + 0xC));
    PUSH32(esp, 1);
    MEM16(esi + 0x28) = LO16(eax);
    eax = 0; /* xor self */
    MEM32(esi + 0x2A) = eax;
    MEM16(esi + 0x2E) = 0x14;
    MEM32(esi + 0x30) = 0x800;
    PUSH32(esp, MEM32(edi + 8));
    ecx = ebx;
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(edi + 0x44));
    PUSH32(esp, MEM32(edi + 0x40));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = edi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x48));
    PUSH32(esp, MEM32(0x651684));
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004ADD9D(); /* call 0x004ADD9D */

loc_004A7E62: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_004A7E7B; /* jl: less (signed <) */

loc_004A7E68: ;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    MEM32(edi + 0x18) = eax;
    goto loc_004A7E8B;

loc_004A7E76: ;
    esi = 0x80150007u;

loc_004A7E7B: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_004A7E8B; /* je: equal / zero */

loc_004A7E81: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A7E8B: ;
    if (CMP_NE(esi, 0x80072747u)) goto loc_004A7E98; /* jne: not equal / not zero */

loc_004A7E93: ;
    esi = 0x80152006u;

loc_004A7E98: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A7EA1
 * Original: 0x004A7EA1 - 0x004A7FA5 (260 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A7EA1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A7EA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -16) = esi;
    if (CMP_EQ(eax, esi)) goto loc_004A7F9C; /* je: equal / zero */

loc_004A7EC5: ;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A7ECC: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(eax, esi)) goto loc_004A7F9C; /* je: equal / zero */

loc_004A7ED7: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A7F1D; /* jne: not equal / not zero */

loc_004A7EDE: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004A7EFD: ;
    (void)0; /* cmp MEM32(ebp + -12), esi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(MEM32(ebp + -12), esi)) goto loc_004A7F0E; /* je: equal / zero */

loc_004A7F05: ;
    if (CMP_EQ(MEM32(ebp + -16), 0xC8)) goto loc_004A7F1D; /* je: equal / zero */

loc_004A7F0E: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004A7F13: ;
    MEM32(ebx + 0x34) = eax;
    MEM32(ebp + -4) = 0x80150007u;

loc_004A7F1D: ;
    if (CMP_L(MEM32(ebp + -4), esi)) goto loc_004A7F63; /* jl: less (signed <) */

loc_004A7F22: ;
    eax = MEM32(ebx + 0x38);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    edx = MEM32(ebp + -12);
    if (CMP_EQ(eax, esi)) goto loc_004A7F63; /* je: equal / zero */

loc_004A7F2C: ;
    ecx = MEM32(edx + 0x28);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edx + 0x2C);
    PUSH32(esp, edi);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(edx + 0x30);
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    esi = edx + 0x34;
    edi = eax + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(edx + 0x58);
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(edx + 0x5C);
    MEM32(eax + 0x40) = ecx;
    esi = edx + 0x60;
    edi = eax + 0x44;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = 0; /* xor self */
    POP32(esp, edi);

loc_004A7F63: ;
    eax = MEM32(ebx + 0x18);
    if (CMP_EQ(eax, esi)) goto loc_004A7F9C; /* je: equal / zero */

loc_004A7F6A: ;
    eax = MEM32(eax + 8);
    if (CMP_EQ(eax, esi)) goto loc_004A7F7C; /* je: equal / zero */

loc_004A7F71: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A7F7C: ;
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, MEM32(eax));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A7F89: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x8021);
    PUSH32(esp, MEM32(ebx + 0x18));
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A7F99: ;
    MEM32(ebx + 0x18) = esi;

loc_004A7F9C: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A81CE
 * Original: 0x004A81CE - 0x004A81EC (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A81CE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A81CE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0); sub_004B5390(); /* call 0x004B5390 */

loc_004A81DF: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) { sub_004A81EC(); return; } /* jne: not equal / not zero */

loc_004A81E5: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_004A821A(); return; /* tail jmp 0x004A821A */

}

/**
 * sub_004A8220
 * Original: 0x004A8220 - 0x004A823B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A8220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(ebx, ebx)) { sub_004A823B(); return; } /* jne: not equal / not zero */

loc_004A822F: ;
    MEM32(ebp + 0x14) = 6;
    g_seh_ebp = ebp; sub_004A82FC(); return; /* tail jmp 0x004A82FC */

}

/**
 * sub_004A8304
 * Original: 0x004A8304 - 0x004A83A7 (163 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8304(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A8304: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x128;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = 0; /* xor self */
    PUSH32(esp, 0x48);
    POP32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = ebp + -296;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x30);
    MEM32(ebp + -296) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + eax * 8;
    ecx = MEM32(ebx + eax * 8 + 0x13A8);
    eax = MEM32(ebx + eax * 8 + 0x13AC);
    MEM32(ebp + -288) = ecx;
    PUSH32(esp, 0x15);
    MEM32(ebp + -284) = eax;
    POP32(esp, ecx);
    edi = ebp + -280;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = ebp + -192;
    PUSH32(esp, eax);
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    PUSH32(esp, 0); sub_0042B5F7(); /* call 0x0042B5F7 */

loc_004A836C: ;
    eax = MEM32(ebx + 0xD0);
    PUSH32(esp, 4);
    ecx = ebp + -184;
    POP32(esp, edx);

loc_004A837B: ;
    esi = eax;
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = eax + 0x70;
    ecx = ecx + 0xC;
    edx--;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    if ((edx != 0)) goto loc_004A837B; /* jne: not equal / not zero */

loc_004A838B: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042E250(); /* call 0x0042E250 */

loc_004A8396: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (CMP_NE(eax, edi)) { sub_004A83A7(); return; } /* jne: not equal / not zero */

loc_004A839D: ;
    esi = 0x80004005u;
    g_seh_ebp = ebp; sub_004A8428(); return; /* tail jmp 0x004A8428 */

}

/**
 * sub_004A845C
 * Original: 0x004A845C - 0x004A857A (286 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A845C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A845C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = esi + 0x10;
    (void)0; /* cmp MEM32(edi), ebx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -16) = ebx;
    if (CMP_NE(MEM32(edi), ebx)) goto loc_004A84CA; /* jne: not equal / not zero */

loc_004A847D: ;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(ecx, ebx)) goto loc_004A84CA; /* je: equal / zero */

loc_004A8484: ;
    eax = MEM32(esi + 0x18);
    if (CMP_BE(eax, ebx)) goto loc_004A84CA; /* jbe: below or equal (unsigned <=) */

loc_004A848B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 8));
    eax = eax + eax * 4;
    PUSH32(esp, 0x7530);
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x651680));
    MEM32(ebp + -12) = 0x100;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0); sub_004A7C76(); /* call 0x004A7C76 */

loc_004A84BC: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004ADD9D(); /* call 0x004ADD9D */

loc_004A84C7: ;
    MEM32(ebp + -4) = eax;

loc_004A84CA: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_004A852B; /* je: equal / zero */

loc_004A84D0: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A84D9: ;
    (void)0; /* cmp eax, 0x1500F0 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A852B; /* jne: not equal / not zero */

loc_004A84E3: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, ebx);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004A84F6: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, ebx)) goto loc_004A850F; /* jl: less (signed <) */

loc_004A84FD: ;
    if (CMP_EQ(MEM32(ebp + -16), 0xC8)) goto loc_004A850F; /* je: equal / zero */

loc_004A8506: ;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_004A8570;

loc_004A850F: ;
    PUSH32(esp, MEM32(edi));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A8519: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(esi + 0x14));
    MEM32(edi) = ebx;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A8528: ;
    MEM32(esi + 0x14) = ebx;

loc_004A852B: ;
    if (CMP_L(MEM32(ebp + -4), ebx)) goto loc_004A8570; /* jl: less (signed <) */

loc_004A8530: ;
    eax = MEM32(esi + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_004A8558; /* je: equal / zero */

loc_004A8537: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A8540: ;
    (void)0; /* cmp eax, 0x1500F0 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A8558; /* jne: not equal / not zero */

loc_004A854A: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A8555: ;
    MEM32(esi + 0xC) = ebx;

loc_004A8558: ;
    if (CMP_L(MEM32(ebp + -4), ebx)) goto loc_004A8570; /* jl: less (signed <) */

loc_004A855D: ;
    if (CMP_NE(MEM32(edi), ebx)) goto loc_004A856D; /* jne: not equal / not zero */

loc_004A8561: ;
    (void)0; /* cmp MEM32(esi + 0xC), ebx - flags set for next jcc */
    MEM32(ebp + -4) = 0x1500F0;
    if (CMP_EQ(MEM32(esi + 0xC), ebx)) goto loc_004A8570; /* je: equal / zero */

loc_004A856D: ;
    MEM32(ebp + -4) = ebx;

loc_004A8570: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A857A
 * Original: 0x004A857A - 0x004A85CA (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A857A(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A857A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(eax, eax)) goto loc_004A8593; /* je: equal / zero */

loc_004A8589: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A858F: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;

loc_004A8593: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_004A85A8; /* je: equal / zero */

loc_004A859A: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A85A4: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;

loc_004A85A8: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004A85BB; /* je: equal / zero */

loc_004A85AF: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A85B7: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;

loc_004A85BB: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A85C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A85CA
 * Original: 0x004A85CA - 0x004A860C (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A85CA(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A85CA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM32(esi + 0x58), 0)) goto loc_004A8601; /* jne: not equal / not zero */

loc_004A85D5: ;
    eax = ecx + 0x14D4;
    if (CMP_NE(MEM32(eax), 0)) goto loc_004A8605; /* jne: not equal / not zero */

loc_004A85E0: ;
    edx = ecx + 0x14D8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_004B4419(); /* call 0x004B4419 */

loc_004A85F6: ;
    if (TEST_S(eax, eax)) goto loc_004A8608; /* jl: less (signed <) */

loc_004A85FA: ;
    MEM32(esi + 0x58) = 1;

loc_004A8601: ;
    eax = 0; /* xor self */
    goto loc_004A8608;

loc_004A8605: ;
    eax = 0; /* xor self */
    eax++;

loc_004A8608: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A860C
 * Original: 0x004A860C - 0x004A8632 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A860C(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A860C: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(edx + 0x58), eax)) goto loc_004A862F; /* je: equal / zero */

loc_004A8617: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ecx + 0x14D8));
    esi = ecx + 0x14D4;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_004B39B7(); /* call 0x004B39B7 */

loc_004A862B: ;
    MEM32(esi) = MEM32(esi) & 0;
    POP32(esp, esi);

loc_004A862F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A8632
 * Original: 0x004A8632 - 0x004A86C6 (148 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8632(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A8632: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(eax + 0x58), ebp - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(eax + 0x58), ebp)) goto loc_004A86C0; /* je: equal / zero */

loc_004A8644: ;
    MEM32(eax + 0x58) = ebp;
    eax = MEM32(esi + 0x14D4);
    if (CMP_EQ(eax, ebp)) goto loc_004A8683; /* je: equal / zero */

loc_004A8651: ;
    ecx = MEM32(esi + 0x14D8);
    if (CMP_EQ(ecx, ebp)) goto loc_004A8683; /* je: equal / zero */

loc_004A865B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B39B7(); /* call 0x004B39B7 */

loc_004A8664: ;
    ebx = eax;
    if (CMP_L(ebx, ebp)) goto loc_004A8683; /* jl: less (signed <) */

loc_004A866A: ;
    MEM32(esi + 0x14D4) = ebp;

loc_004A8670: ;
    PUSH32(esp, MEM32(esi + 0x14D8));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A867D: ;
    ebx = eax;
    if (CMP_EQ(ebx, ebp)) goto loc_004A8670; /* je: equal / zero */

loc_004A8683: ;
    eax = MEM32(esi + 0x14D4);
    if (CMP_EQ(eax, ebp)) goto loc_004A869B; /* je: equal / zero */

loc_004A868D: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2AA6(); /* call 0x004B2AA6 */

loc_004A8695: ;
    MEM32(esi + 0x14D4) = ebp;

loc_004A869B: ;
    PUSH32(esp, edi);
    edi = esi + 0x14D8;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebp)) goto loc_004A86B2; /* je: equal / zero */

loc_004A86A8: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A86B0: ;
    MEM32(edi) = ebp;

loc_004A86B2: ;
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_GE(ebx, ebp)) goto loc_004A86C0; /* jge: greater or equal (signed >=) */

loc_004A86B7: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0); sub_004B29FF(); /* call 0x004B29FF */

loc_004A86C0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A86C6
 * Original: 0x004A86C6 - 0x004A8708 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A86C6(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A86C6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM32(esi + 0x5C), 0)) goto loc_004A86FD; /* jne: not equal / not zero */

loc_004A86D1: ;
    eax = ecx + 0x14DC;
    if (CMP_NE(MEM32(eax), 0)) goto loc_004A8701; /* jne: not equal / not zero */

loc_004A86DC: ;
    edx = ecx + 0x14E0;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_004B4419(); /* call 0x004B4419 */

loc_004A86F2: ;
    if (TEST_S(eax, eax)) goto loc_004A8704; /* jl: less (signed <) */

loc_004A86F6: ;
    MEM32(esi + 0x5C) = 1;

loc_004A86FD: ;
    eax = 0; /* xor self */
    goto loc_004A8704;

loc_004A8701: ;
    eax = 0; /* xor self */
    eax++;

loc_004A8704: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A8708
 * Original: 0x004A8708 - 0x004A872E (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8708(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A8708: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(edx + 0x5C), eax)) goto loc_004A872B; /* je: equal / zero */

loc_004A8713: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ecx + 0x14E0));
    esi = ecx + 0x14DC;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_004B39B7(); /* call 0x004B39B7 */

loc_004A8727: ;
    MEM32(esi) = MEM32(esi) & 0;
    POP32(esp, esi);

loc_004A872B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A872E
 * Original: 0x004A872E - 0x004A87C2 (148 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A872E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A872E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(eax + 0x5C), ebp - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(eax + 0x5C), ebp)) goto loc_004A87BC; /* je: equal / zero */

loc_004A8740: ;
    MEM32(eax + 0x5C) = ebp;
    eax = MEM32(esi + 0x14DC);
    if (CMP_EQ(eax, ebp)) goto loc_004A877F; /* je: equal / zero */

loc_004A874D: ;
    ecx = MEM32(esi + 0x14E0);
    if (CMP_EQ(ecx, ebp)) goto loc_004A877F; /* je: equal / zero */

loc_004A8757: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B39B7(); /* call 0x004B39B7 */

loc_004A8760: ;
    ebx = eax;
    if (CMP_L(ebx, ebp)) goto loc_004A877F; /* jl: less (signed <) */

loc_004A8766: ;
    MEM32(esi + 0x14DC) = ebp;

loc_004A876C: ;
    PUSH32(esp, MEM32(esi + 0x14E0));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A8779: ;
    ebx = eax;
    if (CMP_EQ(ebx, ebp)) goto loc_004A876C; /* je: equal / zero */

loc_004A877F: ;
    eax = MEM32(esi + 0x14DC);
    if (CMP_EQ(eax, ebp)) goto loc_004A8797; /* je: equal / zero */

loc_004A8789: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2AA6(); /* call 0x004B2AA6 */

loc_004A8791: ;
    MEM32(esi + 0x14DC) = ebp;

loc_004A8797: ;
    PUSH32(esp, edi);
    edi = esi + 0x14E0;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebp)) goto loc_004A87AE; /* je: equal / zero */

loc_004A87A4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A87AC: ;
    MEM32(edi) = ebp;

loc_004A87AE: ;
    (void)0; /* cmp ebx, ebp - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_GE(ebx, ebp)) goto loc_004A87BC; /* jge: greater or equal (signed >=) */

loc_004A87B3: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0); sub_004B29FF(); /* call 0x004B29FF */

loc_004A87BC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A87C2
 * Original: 0x004A87C2 - 0x004A88A9 (231 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A87C2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A87C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -16) = ebx;
    if (CMP_EQ(esi, ebx)) goto loc_004A88A0; /* je: equal / zero */

loc_004A87E6: ;
    PUSH32(esp, edi);

loc_004A87E7: ;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A87F1: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(eax, ebx)) goto loc_004A8803; /* jne: not equal / not zero */

loc_004A87F8: ;
    MEM32(ebp + -16) = esi;
    esi = MEM32(esi + 4);
    goto loc_004A8897;

loc_004A8803: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004A8834; /* jne: not equal / not zero */

loc_004A880A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004A881D: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_L(eax, ebx)) goto loc_004A8834; /* jl: less (signed <) */

loc_004A8824: ;
    if (CMP_EQ(MEM32(ebp + -12), 0xC8)) goto loc_004A8834; /* je: equal / zero */

loc_004A882D: ;
    MEM32(ebp + -8) = 0x80004005u;

loc_004A8834: ;
    eax = MEM32(ebp + -16);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edi = esi;
    esi = MEM32(esi + 4);
    if (CMP_NE(eax, ebx)) goto loc_004A8848; /* jne: not equal / not zero */

loc_004A8840: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x18) = esi;
    goto loc_004A884B;

loc_004A8848: ;
    MEM32(eax + 4) = esi;

loc_004A884B: ;
    PUSH32(esp, MEM32(edi));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A8855: ;
    (void)0; /* cmp MEM32(edi + 0xC), ebx - flags set for next jcc */
    eax = MEM32(edi + 8);
    if (CMP_EQ(MEM32(edi + 0xC), ebx)) goto loc_004A8875; /* je: equal / zero */

loc_004A885D: ;
    if (CMP_EQ(eax, ebx)) goto loc_004A886A; /* je: equal / zero */

loc_004A8861: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A886A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A8873: ;
    goto loc_004A8892;

loc_004A8875: ;
    if (CMP_EQ(eax, ebx)) goto loc_004A8884; /* je: equal / zero */

loc_004A8879: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A8884: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x8021);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A8892: ;
    if (CMP_L(MEM32(ebp + -8), ebx)) goto loc_004A889F; /* jl: less (signed <) */

loc_004A8897: ;
    if (CMP_NE(esi, ebx)) goto loc_004A87E7; /* jne: not equal / not zero */

loc_004A889F: ;
    POP32(esp, edi);

loc_004A88A0: ;
    eax = MEM32(ebp + -8);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A88A9
 * Original: 0x004A88A9 - 0x004A89A0 (247 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A88A9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A88A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    ebx = ecx;
    if (CMP_EQ(esi, ebp)) goto loc_004A899A; /* je: equal / zero */

loc_004A88BC: ;
    if (CMP_EQ(MEM32(esi + 0x18), ebp)) goto loc_004A8916; /* je: equal / zero */

loc_004A88C1: ;
    PUSH32(esp, edi);

loc_004A88C2: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A88CE: ;
    edi = MEM32(esi + 0x18);
    eax = MEM32(edi + 4);
    MEM32(esi + 0x18) = eax;
    (void)0; /* cmp MEM32(edi + 0xC), ebp - flags set for next jcc */
    eax = MEM32(edi + 8);
    if (CMP_EQ(MEM32(edi + 0xC), ebp)) goto loc_004A88F5; /* je: equal / zero */

loc_004A88DF: ;
    if (CMP_EQ(eax, ebp)) goto loc_004A88EB; /* je: equal / zero */

loc_004A88E3: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A88EB: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004A88F3: ;
    goto loc_004A8910;

loc_004A88F5: ;
    if (CMP_EQ(eax, ebp)) goto loc_004A8903; /* je: equal / zero */

loc_004A88F9: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A8903: ;
    PUSH32(esp, 0x8021);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A8910: ;
    if (CMP_NE(MEM32(esi + 0x18), ebp)) goto loc_004A88C2; /* jne: not equal / not zero */

loc_004A8915: ;
    POP32(esp, edi);

loc_004A8916: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A8632(); /* call 0x004A8632 */

loc_004A891E: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A872E(); /* call 0x004A872E */

loc_004A8926: ;
    eax = MEM32(esi + 0x60);
    if (CMP_EQ(eax, ebp)) goto loc_004A8938; /* je: equal / zero */

loc_004A892D: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A8935: ;
    MEM32(esi + 0x60) = ebp;

loc_004A8938: ;
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(eax, ebp)) goto loc_004A894A; /* je: equal / zero */

loc_004A893F: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53CC(); /* call 0x004B53CC */

loc_004A8947: ;
    MEM32(esi + 0x30) = ebp;

loc_004A894A: ;
    eax = MEM32(esi + 0x40);
    if (CMP_EQ(eax, ebp)) goto loc_004A8961; /* je: equal / zero */

loc_004A8951: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A895B: ;
    MEM32(esi + 0x40) = ebp;
    MEM32(esi + 0x44) = ebp;

loc_004A8961: ;
    eax = MEM32(esi + 0x48);
    if (CMP_EQ(eax, ebp)) goto loc_004A8978; /* je: equal / zero */

loc_004A8968: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A8972: ;
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x4C) = ebp;

loc_004A8978: ;
    if (CMP_NE(MEM32(esi + 0xC), 3)) goto loc_004A8993; /* jne: not equal / not zero */

loc_004A897E: ;
    eax = MEM32(esi + 0x54);
    if (CMP_EQ(eax, ebp)) goto loc_004A8993; /* je: equal / zero */

loc_004A8985: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = ebx;
    PUSH32(esp, 0); sub_0049CB9E(); /* call 0x0049CB9E */

loc_004A8990: ;
    MEM32(esi + 0x54) = ebp;

loc_004A8993: ;
    MEM32(esi + 0x10) = 0xC;

loc_004A899A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A89A0
 * Original: 0x004A89A0 - 0x004A89D6 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A89A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A89A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = esi + 0x14CC;
    if (CMP_EQ(edi, MEM32(eax))) goto loc_004A89BC; /* je: equal / zero */

loc_004A89B2: ;
    eax = esi + 0x14D0;
    if (CMP_NE(edi, MEM32(eax))) goto loc_004A89BF; /* jne: not equal / not zero */

loc_004A89BC: ;
    MEM32(eax) = MEM32(eax) & 0;

loc_004A89BF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004A88A9(); /* call 0x004A88A9 */

loc_004A89C7: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A89D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A89D6
 * Original: 0x004A89D6 - 0x004A89EE (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A89D6(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A89D6: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    eax = eax + eax * 8;
    (void)0; /* cmp MEM32(ecx + eax * 8 + 0x13DC), edx - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM32(ecx + eax * 8 + 0x13DC), edx)) ? 1 : 0); /* setne */
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A89EE
 * Original: 0x004A89EE - 0x004A8A1F (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A89EE(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A89EE: ;
    edx = 0; /* xor self */
    eax = ecx + 0x13A8;
    PUSH32(esp, esi);

loc_004A89F7: ;
    esi = MEM32(eax);
    if (CMP_NE(esi, MEM32(esp + 8))) goto loc_004A8A08; /* jne: not equal / not zero */

loc_004A89FF: ;
    esi = MEM32(eax + 4);
    if (CMP_EQ(esi, MEM32(esp + 0xC))) goto loc_004A8A11; /* je: equal / zero */

loc_004A8A08: ;
    edx++;
    eax = eax + 0x48;
    if (CMP_B(edx, 4)) goto loc_004A89F7; /* jb: below (unsigned <) */

loc_004A8A11: ;
    eax = edx + edx * 8;
    eax = ecx + eax * 8 + 0x13A8;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A8A1F
 * Original: 0x004A8A1F - 0x004A8A44 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8A1F(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A8A1F: ;
    eax = 0; /* xor self */
    ecx = ecx + 0x13A8;

loc_004A8A27: ;
    edx = MEM32(ecx);
    if (CMP_NE(edx, MEM32(esp + 4))) goto loc_004A8A38; /* jne: not equal / not zero */

loc_004A8A2F: ;
    edx = MEM32(ecx + 4);
    if (CMP_EQ(edx, MEM32(esp + 8))) goto loc_004A8A41; /* je: equal / zero */

loc_004A8A38: ;
    eax++;
    ecx = ecx + 0x48;
    if (CMP_B(eax, 4)) goto loc_004A8A27; /* jb: below (unsigned <) */

loc_004A8A41: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A8A44
 * Original: 0x004A8A44 - 0x004A8A64 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8A44(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A8A44: ;
    eax = 0; /* xor self */
    edx = ecx + 0x13B0;
    PUSH32(esp, esi);

loc_004A8A4D: ;
    esi = MEM32(edx);
    if (CMP_EQ(esi, MEM32(esp + 8))) { sub_004A8A64(); return; } /* je: equal / zero */

loc_004A8A55: ;
    eax++;
    edx = edx + 0x48;
    if (CMP_B(eax, 4)) goto loc_004A8A4D; /* jb: below (unsigned <) */

loc_004A8A5E: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A8A70
 * Original: 0x004A8A70 - 0x004A8AA3 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A8A70: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(edx + 0xC));
    eax = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(esi & esi, 0)) goto loc_004A8A9C; /* jbe: below or equal (unsigned <=) */

loc_004A8A80: ;
    ecx = edx + 0x30;

loc_004A8A83: ;
    edi = MEM32(ecx);
    if (CMP_NE(edi, MEM32(esp + 0x10))) goto loc_004A8A94; /* jne: not equal / not zero */

loc_004A8A8B: ;
    edi = MEM32(ecx + 4);
    if (CMP_EQ(edi, MEM32(esp + 0x14))) { sub_004A8AA3(); return; } /* je: equal / zero */

loc_004A8A94: ;
    eax++;
    ecx = ecx + 0x74;
    if (CMP_B(eax, esi)) goto loc_004A8A83; /* jb: below (unsigned <) */

loc_004A8A9C: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A8AAC
 * Original: 0x004A8AAC - 0x004A8ACF (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8AAC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A8AAC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    edi = ecx;
    PUSH32(esp, 0); sub_0049CB72(); /* call 0x0049CB72 */

loc_004A8ABC: ;
    if (TEST_Z(LO8(eax), 1)) { sub_004A8ACF(); return; } /* je: equal / zero */

loc_004A8AC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = edi;
    PUSH32(esp, 0); sub_004A7D82(); /* call 0x004A7D82 */

loc_004A8ACD: ;
    g_seh_ebp = ebp; sub_004A8AF5(); return; /* tail jmp 0x004A8AF5 */

}

/**
 * sub_004A8AFA
 * Original: 0x004A8AFA - 0x004A8B12 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8AFA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A8AFA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    SET_LO16(eax, MEM16(ebp + 0xC));
    ecx = 0xFA;
    if (CMP_BE(LO16(eax), LO16(ecx))) { sub_004A8B12(); return; } /* jbe: below or equal (unsigned <=) */

loc_004A8B0B: ;
    eax = 0x80150001u;
    g_seh_ebp = ebp; sub_004A8B78(); return; /* tail jmp 0x004A8B78 */

}

/**
 * sub_004A8B83
 * Original: 0x004A8B83 - 0x004A8C0D (138 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8B83(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A8B83: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0xC));
    (void)0; /* cmp LO16(ecx), 0xFA - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(LO16(ecx), 0xFA)) goto loc_004A8BC5; /* jb: below (unsigned <) */

loc_004A8B97: ;
    ecx = ecx + 0xFFFFFFE7u;
    edx = 0; /* xor self */
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM16(eax + 0xC) = LO16(ecx);
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_004A8BC5; /* jbe: below or equal (unsigned <=) */

loc_004A8BA5: ;
    ecx = eax + 0x30;

loc_004A8BA8: ;
    esi = MEM32(ecx + 0x190);
    MEM32(ecx) = esi;
    esi = MEM32(ecx + 0x194);
    MEM32(ecx + 4) = esi;
    esi = ZX16(MEM16(eax + 0xC));
    edx++;
    ecx = ecx + 0x10;
    if (CMP_B(edx, esi)) goto loc_004A8BA8; /* jb: below (unsigned <) */

loc_004A8BC5: ;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    if (CMP_BE(MEM16(eax + 0xC), LO16(edx))) goto loc_004A8BF1; /* jbe: below or equal (unsigned <=) */

loc_004A8BD5: ;
    ecx = eax + 0x30;

loc_004A8BD8: ;
    ebx = MEM32(ecx);
    if (CMP_NE(ebx, edi)) goto loc_004A8BE5; /* jne: not equal / not zero */

loc_004A8BDE: ;
    ebx = MEM32(ecx + 4);
    if (CMP_EQ(ebx, esi)) goto loc_004A8C05; /* je: equal / zero */

loc_004A8BE5: ;
    ebx = ZX16(MEM16(eax + 0xC));
    edx++;
    ecx = ecx + 0x10;
    if (CMP_B(edx, ebx)) goto loc_004A8BD8; /* jb: below (unsigned <) */

loc_004A8BF1: ;
    edx = edx + 3;
    edx = edx << 4;
    MEM32(edx + eax) = edi;
    MEM32(edx + eax + 4) = esi;
    MEM16(eax + 0xC) = MEM16(eax + 0xC) + 1;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;

loc_004A8C05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004A8C0D
 * Original: 0x004A8C0D - 0x004A8C7A (109 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8C0D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A8C0D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx + 0xC));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    edx = 0; /* xor self */
    if (CMP_BE(esi & esi, 0)) goto loc_004A8C47; /* jbe: below or equal (unsigned <=) */

loc_004A8C1F: ;
    eax = ecx + 0x30;
    PUSH32(esp, ebx);

loc_004A8C23: ;
    ebx = MEM32(eax);
    if (CMP_NE(ebx, MEM32(esp + 0x14))) goto loc_004A8C34; /* jne: not equal / not zero */

loc_004A8C2B: ;
    ebx = MEM32(eax + 4);
    if (CMP_EQ(ebx, MEM32(esp + 0x18))) goto loc_004A8C42; /* je: equal / zero */

loc_004A8C34: ;
    ebx = ZX16(MEM16(ecx + 0xC));
    edx++;
    eax = eax + 0x10;
    if (CMP_B(edx, ebx)) goto loc_004A8C23; /* jb: below (unsigned <) */

loc_004A8C40: ;
    goto loc_004A8C46;

loc_004A8C42: ;
    edi = 0; /* xor self */
    edx++;
    edi++;

loc_004A8C46: ;
    POP32(esp, ebx);

loc_004A8C47: ;
    if (CMP_AE(edx, esi)) goto loc_004A8C6A; /* jae: above or equal (unsigned >=) */

loc_004A8C4B: ;
    eax = edx + 2;
    eax = eax << 4;
    eax = eax + ecx;

loc_004A8C53: ;
    esi = MEM32(eax + 0x10);
    MEM32(eax) = esi;
    esi = MEM32(eax + 0x14);
    MEM32(eax + 4) = esi;
    esi = ZX16(MEM16(ecx + 0xC));
    edx++;
    eax = eax + 0x10;
    if (CMP_B(edx, esi)) goto loc_004A8C53; /* jb: below (unsigned <) */

loc_004A8C6A: ;
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(edi, 1)) { sub_004A8C7A(); return; } /* jne: not equal / not zero */

loc_004A8C71: ;
    MEM16(ecx + 0xC) = MEM16(ecx + 0xC) - 1;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    g_seh_ebp = ebp; sub_004A8C7E(); return; /* tail jmp 0x004A8C7E */

}

/**
 * sub_004A8C83
 * Original: 0x004A8C83 - 0x004A8C99 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8C83(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A8C83: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_004A8C95; /* je: equal / zero */

loc_004A8C8B: ;
    SET_LO16(eax, MEM16(ecx + 0xC));
    if (CMP_BE(LO16(eax), 0x64)) { sub_004A8C99(); return; } /* jbe: below or equal (unsigned <=) */

loc_004A8C95: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004A8CF1(); return; /* tail jmp 0x004A8CF1 */

}

/**
 * sub_004A8CF8
 * Original: 0x004A8CF8 - 0x004A8D33 (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8CF8(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A8CF8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) { sub_004A8D33(); return; } /* je: equal / zero */

loc_004A8D01: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    if (CMP_A(LO16(eax), 0xFA)) { sub_004A8D33(); return; } /* ja: above (unsigned >) */

loc_004A8D0B: ;
    ecx = ZX16(LO16(eax));
    edx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_004A8D2C; /* jbe: below or equal (unsigned <=) */

loc_004A8D14: ;
    eax = esi + 0x38;

loc_004A8D17: ;
    esi = MEM32(eax + -8);
    esi = esi | MEM32(eax + -4);
    if ((esi == 0)) { sub_004A8D33(); return; } /* je: equal / zero */

loc_004A8D1F: ;
    if (TEST_NZ(MEM8(eax), 3)) { sub_004A8D33(); return; } /* jne: not equal / not zero */

loc_004A8D24: ;
    edx++;
    eax = eax + 0x10;
    if (CMP_B(edx, ecx)) goto loc_004A8D17; /* jb: below (unsigned <) */

loc_004A8D2C: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A8D37
 * Original: 0x004A8D37 - 0x004A8D65 (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8D37(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A8D37: ;
    ecx = MEM32(ecx + 0xD0);
    PUSH32(esp, 4);
    POP32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);

loc_004A8D43: ;
    esi = MEM32(ecx);
    if (CMP_NE(esi, MEM32(esp + 8))) goto loc_004A8D5B; /* jne: not equal / not zero */

loc_004A8D4B: ;
    esi = MEM32(ecx + 4);
    if (CMP_NE(esi, MEM32(esp + 0xC))) goto loc_004A8D5B; /* jne: not equal / not zero */

loc_004A8D54: ;
    if (TEST_Z(MEM8(ecx + 8), 3)) goto loc_004A8D5B; /* je: equal / zero */

loc_004A8D5A: ;
    eax++;

loc_004A8D5B: ;
    ecx = ecx + 0x70;
    edx--;
    if ((edx != 0)) goto loc_004A8D43; /* jne: not equal / not zero */

loc_004A8D61: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A8D65
 * Original: 0x004A8D65 - 0x004A8D85 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8D65(void)
{

loc_004A8D65: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    eax = eax + ecx;
    ecx = 0x100;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A8D85
 * Original: 0x004A8D85 - 0x004A8E00 (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8D85(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A8D85: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    MEM32(esi + 0x14D0) = eax;
    MEM32(esi + 0x14CC) = eax;
    MEM32(esi + 0x14D4) = eax;
    MEM32(esi + 0x14D8) = eax;
    MEM32(esi + 0x14DC) = eax;
    MEM32(esi + 0x14E0) = eax;
    MEM32(esi + 0x14C8) = 1;
    edx = esi + 0x13B4;
    POP32(esp, ebx);

loc_004A8DC3: ;
    PUSH32(esp, 0x12);
    eax = 0; /* xor self */
    edi = edx + -12;
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(edx) = MEM32(edx) | 2;
    edx = edx + 0x48;
    ebx--;
    if ((ebx != 0)) goto loc_004A8DC3; /* jne: not equal / not zero */

loc_004A8DD6: ;
    PUSH32(esp, 8);
    edi = esi + 0x14E4;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0048D66F(); /* call 0x0048D66F */

loc_004A8DE4: ;
    PUSH32(esp, 0x10);
    esi = esi + 0x14EC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0048D66F(); /* call 0x0048D66F */

loc_004A8DF2: ;
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(eax, LO8(eax) | 0x80);
    MEM8(edi) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004A8E00
 * Original: 0x004A8E00 - 0x004A8F17 (279 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8E00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A8E00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x14D0;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_004A8E1C; /* je: equal / zero */

loc_004A8E14: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A88A9(); /* call 0x004A88A9 */

loc_004A8E1A: ;
    MEM32(edi) = ebx;

loc_004A8E1C: ;
    edi = esi + 0x14CC;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_004A8E32; /* je: equal / zero */

loc_004A8E28: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A88A9(); /* call 0x004A88A9 */

loc_004A8E30: ;
    MEM32(edi) = ebx;

loc_004A8E32: ;
    edi = esi + 0x14E0;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_004A8E48; /* je: equal / zero */

loc_004A8E3E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A8E46: ;
    MEM32(edi) = ebx;

loc_004A8E48: ;
    edi = esi + 0x14DC;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_004A8E5E; /* je: equal / zero */

loc_004A8E54: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2AA6(); /* call 0x004B2AA6 */

loc_004A8E5C: ;
    MEM32(edi) = ebx;

loc_004A8E5E: ;
    edi = esi + 0x14D8;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_004A8E74; /* je: equal / zero */

loc_004A8E6A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004A8E72: ;
    MEM32(edi) = ebx;

loc_004A8E74: ;
    edi = esi + 0x14D4;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_004A8E8A; /* je: equal / zero */

loc_004A8E80: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2AA6(); /* call 0x004B2AA6 */

loc_004A8E88: ;
    MEM32(edi) = ebx;

loc_004A8E8A: ;
    ebp = 0; /* xor self */
    edi = esi + 0x13D8;

loc_004A8E92: ;
    eax = MEM32(edi + -4);
    if (CMP_EQ(eax, ebx)) goto loc_004A8EA4; /* je: equal / zero */

loc_004A8E99: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B53CC(); /* call 0x004B53CC */

loc_004A8EA1: ;
    MEM32(edi + -4) = ebx;

loc_004A8EA4: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_004A8EB4; /* je: equal / zero */

loc_004A8EAA: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B53CC(); /* call 0x004B53CC */

loc_004A8EB2: ;
    MEM32(edi) = ebx;

loc_004A8EB4: ;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, ebx)) goto loc_004A8EC6; /* je: equal / zero */

loc_004A8EBB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004A88A9(); /* call 0x004A88A9 */

loc_004A8EC3: ;
    MEM32(edi + 4) = ebx;

loc_004A8EC6: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x1580;
    PUSH32(esp, 0); sub_004A8D65(); /* call 0x004A8D65 */

loc_004A8ED2: ;
    eax = MEM32(edi + 8);
    if (CMP_EQ(eax, ebx)) goto loc_004A8EE5; /* je: equal / zero */

loc_004A8ED9: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); sub_004B9E6F(); /* call 0x004B9E6F */

loc_004A8EE2: ;
    MEM32(edi + 8) = ebx;

loc_004A8EE5: ;
    eax = MEM32(edi + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_004A8EFC; /* je: equal / zero */

loc_004A8EEC: ;
    PUSH32(esp, 0x80A6);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A8EF9: ;
    MEM32(edi + 0xC) = ebx;

loc_004A8EFC: ;
    ebp++;
    edi = edi + 0x48;
    if (CMP_B(ebp, 4)) goto loc_004A8E92; /* jb: below (unsigned <) */

loc_004A8F05: ;
    PUSH32(esp, 0x48);
    POP32(esp, ecx);
    edi = esi + 0x13A8;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004A8F17
 * Original: 0x004A8F17 - 0x004A8F2F (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8F17(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A8F17: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (TEST_NZ(edi, edi)) { sub_004A8F2F(); return; } /* jne: not equal / not zero */

loc_004A8F25: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A8FCD(); return; /* tail jmp 0x004A8FCD */

}

/**
 * sub_004A8FD2
 * Original: 0x004A8FD2 - 0x004A8FE8 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A8FD2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A8FD2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(ecx, edi)) { sub_004A8FE8(); return; } /* jne: not equal / not zero */

loc_004A8FDE: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A9157(); return; /* tail jmp 0x004A9157 */

}

/**
 * sub_004A915C
 * Original: 0x004A915C - 0x004A9171 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A915C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A915C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(esi, esi)) { sub_004A9171(); return; } /* jne: not equal / not zero */

loc_004A9167: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A924C(); return; /* tail jmp 0x004A924C */

}

/**
 * sub_004A9251
 * Original: 0x004A9251 - 0x004A9266 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9251(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A9251: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(esi, esi)) { sub_004A9266(); return; } /* jne: not equal / not zero */

loc_004A925C: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A9368(); return; /* tail jmp 0x004A9368 */

}

/**
 * sub_004A936D
 * Original: 0x004A936D - 0x004A9382 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A936D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A936D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(esi, esi)) { sub_004A9382(); return; } /* jne: not equal / not zero */

loc_004A9378: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004A9480(); return; /* tail jmp 0x004A9480 */

}

/**
 * sub_004A98DB
 * Original: 0x004A98DB - 0x004A99DB (256 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A98DB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A98DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(ecx + 0x70), 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    SET_LO8(eax, (CMP_EQ(MEM32(ecx + 0x70), 0xFFFFFFFFu)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx + 0x70), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(ebx + 0x70), 0xFFFFFFFFu)) ? 1 : 0); /* sete */
    eax = eax - edx;
    if ((eax != 0)) goto loc_004A99D6; /* jne: not equal / not zero */

loc_004A9903: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    if (CMP_EQ(edi, esi)) goto loc_004A9987; /* je: equal / zero */

loc_004A990F: ;
    edx = 0x8000000;
    eax = esi;
    ebx = edi;
    eax = eax & edx;
    ebx = ebx & edx;
    eax = eax - ebx;
    if ((eax != 0)) goto loc_004A99D4; /* jne: not equal / not zero */

loc_004A9924: ;
    edx = 0x10000000;
    eax = esi;
    ebx = edi;
    eax = eax & edx;
    ebx = ebx & edx;
    eax = eax - ebx;
    if ((eax != 0)) goto loc_004A99D4; /* jne: not equal / not zero */

loc_004A9939: ;
    edx = 0x4000000;
    (void)0; /* test edx, esi - flags set for next jcc */
    ebx = 0x20000000;
    if (TEST_Z(edx, esi)) goto loc_004A9950; /* je: equal / zero */

loc_004A9947: ;
    if (TEST_NZ(ebx, esi)) goto loc_004A9950; /* jne: not equal / not zero */

loc_004A994B: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_004A9952;

loc_004A9950: ;
    eax = 0; /* xor self */

loc_004A9952: ;
    if (TEST_Z(edx, edi)) goto loc_004A995F; /* je: equal / zero */

loc_004A9956: ;
    if (TEST_NZ(ebx, edi)) goto loc_004A995F; /* jne: not equal / not zero */

loc_004A995A: ;
    edx = 0; /* xor self */
    edx++;
    goto loc_004A9961;

loc_004A995F: ;
    edx = 0; /* xor self */

loc_004A9961: ;
    eax = eax - edx;
    if ((eax != 0)) goto loc_004A99D4; /* jne: not equal / not zero */

loc_004A9965: ;
    eax = esi;
    ebx = edi;
    eax = eax >> 1;
    edx = 0x40000000;
    ebx = ebx >> 1;
    eax = eax & edx;
    ebx = ebx & edx;
    eax = eax - ebx;
    if ((eax != 0)) goto loc_004A99D4; /* jne: not equal / not zero */

loc_004A997A: ;
    esi = esi & edx;
    edi = edi & edx;
    esi = esi - edi;
    eax = esi;
    if ((esi != 0)) goto loc_004A99D4; /* jne: not equal / not zero */

loc_004A9984: ;
    ebx = MEM32(ebp + 0xC);

loc_004A9987: ;
    eax = MEM32(ecx + 0x1C);
    esi = eax;
    esi = esi & 1;
    if (TEST_Z(LO8(eax), 4)) goto loc_004A9995; /* je: equal / zero */

loc_004A9993: ;
    esi = 0; /* xor self */

loc_004A9995: ;
    eax = MEM32(ebx + 0x1C);
    edx = eax;
    edx = edx & 1;
    if (TEST_Z(LO8(eax), 4)) goto loc_004A99A3; /* je: equal / zero */

loc_004A99A1: ;
    edx = 0; /* xor self */

loc_004A99A3: ;
    eax = edx;
    eax = eax - esi;
    if ((eax != 0)) goto loc_004A99D4; /* jne: not equal / not zero */

loc_004A99A9: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    if (CMP_EQ(MEM32(ecx + 0x30), eax)) goto loc_004A99B6; /* je: equal / zero */

loc_004A99B4: ;
    esi = 0; /* xor self */

loc_004A99B6: ;
    if (CMP_EQ(MEM32(ebx + 0x30), eax)) goto loc_004A99BD; /* je: equal / zero */

loc_004A99BB: ;
    edx = 0; /* xor self */

loc_004A99BD: ;
    edx = edx - esi;
    if ((edx == 0)) goto loc_004A99C5; /* je: equal / zero */

loc_004A99C1: ;
    eax = edx;
    goto loc_004A99D4;

loc_004A99C5: ;
    ebx = ebx + 0xC;
    ecx = ecx + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_004A99D2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004A99D4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004A99D6: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A99DB
 * Original: 0x004A99DB - 0x004A9AF7 (284 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A99DB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A99DB: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0x88;
    eax = MEM32(ebp + 0x7C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x70) = ecx;
    if (TEST_Z(eax, eax)) goto loc_004A9AEE; /* je: equal / zero */

loc_004A99F4: ;
    ecx = eax + 0x30;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + 0x68) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_004A9AEE; /* je: equal / zero */

loc_004A9A02: ;
    SET_LO16(eax, MEM16(eax + 0xC));
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_004A9AEE; /* jbe: below or equal (unsigned <=) */

loc_004A9A0F: ;
    if (CMP_A(LO16(eax), 0x64)) goto loc_004A9AEE; /* ja: above (unsigned >) */

loc_004A9A19: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    eax = edi + -1;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x64) = edi;
    if (CMP_BE(eax & eax, 0)) goto loc_004A9A6E; /* jbe: below or equal (unsigned <=) */

loc_004A9A29: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x74);
    ebx = ebx + ecx;
    MEM32(ebp + 0x7C) = eax;

loc_004A9A33: ;
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, ebx);
    esi = ebx + -116;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A98DB(); /* call 0x004A98DB */

loc_004A9A40: ;
    if (CMP_LE(eax & eax, 0)) goto loc_004A9A63; /* jle: less or equal (signed <=) */

loc_004A9A44: ;
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    PUSH32(esp, 0x1D);
    edi = ebp + -20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, ecx);
    esi = ebx;
    edi = ebx + -116;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    esi = ebp + -20;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebp + 0x64);

loc_004A9A63: ;
    ebx = ebx - 0x74;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) - 1;
    if ((MEM32(ebp + 0x7C) != 0)) goto loc_004A9A33; /* jne: not equal / not zero */

loc_004A9A6B: ;
    ecx = MEM32(ebp + 0x68);

loc_004A9A6E: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_BE(edi, eax)) goto loc_004A9AEB; /* jbe: below or equal (unsigned <=) */

loc_004A9A78: ;
    ebx = ecx + 0x74;
    MEM32(ebp + 0x60) = ebx;

loc_004A9A7E: ;
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    MEM32(ebp + 0x6C) = eax;
    esi = ebx + 0x74;
    edi = ebp + -20;
    PUSH32(esp, ebx);
    eax = ebp + -20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A98DB(); /* call 0x004A98DB */

loc_004A9A9C: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A9AC9; /* jge: greater or equal (signed >=) */

loc_004A9AA0: ;
    esi = ebx;
    edi = ebx + 0x74;

loc_004A9AA5: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) - 1;
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    ebx = ebx - 0x74;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x70);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    edi = ebx + 0x74;
    esi = ebx;
    PUSH32(esp, 0); sub_004A98DB(); /* call 0x004A98DB */

loc_004A9AC2: ;
    if (TEST_S(eax, eax)) goto loc_004A9AA5; /* jl: less (signed <) */

loc_004A9AC6: ;
    ebx = MEM32(ebp + 0x60);

loc_004A9AC9: ;
    edi = MEM32(ebp + 0x6C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x74);
    edi = edi + MEM32(ebp + 0x68);
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) + 1;
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, 0x1D);
    ebx = ebx + 0x74;
    (void)0; /* cmp eax, MEM32(ebp + 0x64) - flags set for next jcc */
    POP32(esp, ecx);
    esi = ebp + -20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebp + 0x60) = ebx;
    if (CMP_B(eax, MEM32(ebp + 0x64))) goto loc_004A9A7E; /* jb: below (unsigned <) */

loc_004A9AEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004A9AEE: ;
    eax = 0; /* xor self */
    ebp = ebp + 0x74;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A9AF7
 * Original: 0x004A9AF7 - 0x004A9BCD (214 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9AF7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A9AF7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x80;
    eax = MEM32(ebp + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(eax, eax)) goto loc_004A9BC7; /* je: equal / zero */

loc_004A9B0E: ;
    ecx = eax + 0x30;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_004A9BC7; /* je: equal / zero */

loc_004A9B1C: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(eax + 0xC));
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(ebp + -12) = ebx;
    if (CMP_BE(ebx, edx)) goto loc_004A9BC6; /* jbe: below or equal (unsigned <=) */

loc_004A9B2F: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax + ecx;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    esi = eax;
    edi = ebp + -128;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebp + 8) = edx;
    if (CMP_BE(edx & edx, 0)) goto loc_004A9B76; /* jbe: below or equal (unsigned <=) */

loc_004A9B49: ;
    ebx = eax + -116;

loc_004A9B4C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A98DB(); /* call 0x004A98DB */

loc_004A9B59: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004A9B73; /* jge: greater or equal (signed >=) */

loc_004A9B5D: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    edi = ebx + 0x74;
    PUSH32(esp, 0x1D);
    esi = ebx;
    POP32(esp, ecx);
    ebx = ebx - 0x74;
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_A(MEM32(ebp + 8), 0)) goto loc_004A9B4C; /* ja: above (unsigned >) */

loc_004A9B73: ;
    ebx = MEM32(ebp + -12);

loc_004A9B76: ;
    eax = ebx + -1;
    ebx = MEM32(ebp + 8);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (CMP_AE(ebx, eax)) goto loc_004A9BB3; /* jae: above or equal (unsigned >=) */

loc_004A9B83: ;
    ebx++;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x74);
    ebx = ebx + MEM32(ebp + -8);

loc_004A9B8A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A98DB(); /* call 0x004A98DB */

loc_004A9B97: ;
    if (CMP_LE(eax & eax, 0)) goto loc_004A9BB3; /* jle: less or equal (signed <=) */

loc_004A9B9B: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    eax = MEM32(ebp + 8);
    edi = ebx + -116;
    PUSH32(esp, 0x1D);
    esi = ebx;
    POP32(esp, ecx);
    ebx = ebx + 0x74;
    (void)0; /* cmp eax, MEM32(ebp + 0xC) - flags set for next jcc */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_B(eax, MEM32(ebp + 0xC))) goto loc_004A9B8A; /* jb: below (unsigned <) */

loc_004A9BB3: ;
    edi = MEM32(ebp + 8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x74);
    edi = edi + MEM32(ebp + -8);
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    esi = ebp + -128;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_004A9BC6: ;
    POP32(esp, ebx);

loc_004A9BC7: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004A9BCD
 * Original: 0x004A9BCD - 0x004A9C71 (164 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9BCD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A9BCD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), edi - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(MEM32(ebp + 0x10), edi)) goto loc_004A9C6A; /* je: equal / zero */

loc_004A9BE2: ;
    edx = MEM32(ebp + 0x14);
    if (CMP_NE(MEM8(edx + 0x24), 3)) goto loc_004A9C6A; /* jne: not equal / not zero */

loc_004A9BEB: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + eax * 8;
    PUSH32(esp, esi);
    esi = ecx + eax * 8;
    eax = MEM32(esi + 0x13D4);
    if (CMP_EQ(eax, edi)) goto loc_004A9C69; /* je: equal / zero */

loc_004A9BFF: ;
    if (CMP_BE(MEM16(eax + 0xC), LO16(edi))) goto loc_004A9C69; /* jbe: below or equal (unsigned <=) */

loc_004A9C05: ;
    ecx = MEM32(edx);
    edx = MEM32(edx + 4);
    MEM32(ebp + -8) = edx;
    PUSH32(esp, ebx);

loc_004A9C0E: ;
    edx = ZX16(LO16(edi));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    ebx = MEM32(edx + eax + 0x30);
    if (CMP_NE(ebx, ecx)) goto loc_004A9C25; /* jne: not equal / not zero */

loc_004A9C1C: ;
    edx = MEM32(edx + eax + 0x34);
    if (CMP_EQ(edx, MEM32(ebp + -8))) goto loc_004A9C2E; /* je: equal / zero */

loc_004A9C25: ;
    edi++;
    if (CMP_B(LO16(edi), MEM16(eax + 0xC))) goto loc_004A9C0E; /* jb: below (unsigned <) */

loc_004A9C2C: ;
    goto loc_004A9C68;

loc_004A9C2E: ;
    ecx = ZX16(LO16(edi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    edi = ecx + eax + 0x4C;
    edx = MEM32(edi);
    if (TEST_Z(edx, 0x8000000)) goto loc_004A9C68; /* je: equal / zero */

loc_004A9C42: ;
    ecx = MEM32(ebp + -4);
    edx = edx & 0xF7FFFFFFu;
    PUSH32(esp, eax);
    MEM32(edi) = edx;
    PUSH32(esp, 0); sub_004A99DB(); /* call 0x004A99DB */

loc_004A9C53: ;
    eax = MEM32(esi + 0x13DC);
    MEM32(esi + 0x13B4) = MEM32(esi + 0x13B4) | 8;
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004A9C68: ;
    POP32(esp, ebx);

loc_004A9C69: ;
    POP32(esp, esi);

loc_004A9C6A: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004A9C93
 * Original: 0x004A9C93 - 0x004A9D2E (155 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9C93(void)
{
    int _flags = 0; /* fallback flag var */

loc_004A9C93: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    (void)0; /* cmp eax, 0xC - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(eax, 0xC)) goto loc_004A9CC0; /* je: equal / zero */

loc_004A9CA3: ;
    if (CMP_EQ(eax, 5)) goto loc_004A9CAD; /* je: equal / zero */

loc_004A9CA8: ;
    if (CMP_NE(eax, 6)) goto loc_004A9CB4; /* jne: not equal / not zero */

loc_004A9CAD: ;
    MEM32(esi + 0x10) = 8;

loc_004A9CB4: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004A9CBC: ;
    if (TEST_Z(eax, eax)) goto loc_004A9CB4; /* je: equal / zero */

loc_004A9CC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = edi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4A9BCD);
    PUSH32(esp, 0); sub_004B8FA0(); /* call 0x004B8FA0 */

loc_004A9CD2: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004A88A9(); /* call 0x004A88A9 */

loc_004A9CDA: ;
    eax = MEM32(esi + 0x14);
    eax = eax + eax * 8;
    eax = edi + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) & 0xFFFFFFEFu;
    eax = MEM32(esi + 0x14);
    eax = eax + eax * 8;
    eax = MEM32(edi + eax * 8 + 0x13D4);
    if (TEST_Z(eax, eax)) goto loc_004A9D11; /* je: equal / zero */

loc_004A9CFB: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B53CC(); /* call 0x004B53CC */

loc_004A9D03: ;
    eax = MEM32(esi + 0x14);
    eax = eax + eax * 8;
    MEM32(edi + eax * 8 + 0x13D4) = MEM32(edi + eax * 8 + 0x13D4) & 0;

loc_004A9D11: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0x1F);
    eax = eax + eax * 8;
    MEM32(edi + eax * 8 + 0x13DC) = MEM32(edi + eax * 8 + 0x13DC) & 0;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004A9D29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004A9D2E
 * Original: 0x004A9D2E - 0x004A9D4A (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9D2E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A9D2E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    SET_LO16(edx, MEM16(ebp + 0xC));
    (void)0; /* cmp LO16(edx), 0x64 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(LO16(edx), 0x64)) { sub_004A9D4A(); return; } /* jbe: below or equal (unsigned <=) */

loc_004A9D40: ;
    eax = 0x80150001u;
    g_seh_ebp = ebp; sub_004A9E29(); return; /* tail jmp 0x004A9E29 */

}

/**
 * sub_004A9E3B
 * Original: 0x004A9E3B - 0x004A9E56 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A9E3B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A9E3B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0xC);
    eax = eax | MEM32(ebp + 0x10);
    MEM32(ebp + -8) = ecx;
    if ((eax != 0)) { sub_004A9E56(); return; } /* jne: not equal / not zero */

loc_004A9E4C: ;
    eax = 0x80070057u;
    g_seh_ebp = ebp; sub_004AA012(); return; /* tail jmp 0x004AA012 */

}

/**
 * sub_004AA016
 * Original: 0x004AA016 - 0x004AA140 (298 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA016(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AA016: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    eax = eax | MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ecx;
    if ((eax == 0)) { sub_004AA140(); return; } /* je: equal / zero */

loc_004AA02C: ;
    if (CMP_A(MEM32(ebp + 0x18), 0x10)) { sub_004AA140(); return; } /* ja: above (unsigned >) */

loc_004AA036: ;
    if (CMP_EQ(MEM32(ebp + 0x18), 0)) { sub_004AA140(); return; } /* je: equal / zero */

loc_004AA040: ;
    edx = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(edx + 0xC));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    esi = ZX16(LO16(ecx));
    if (CMP_BE(esi & esi, 0)) goto loc_004AA073; /* jbe: below or equal (unsigned <=) */

loc_004AA052: ;
    eax = edx + 0x30;

loc_004AA055: ;
    edi = MEM32(eax);
    if (CMP_NE(edi, MEM32(ebp + 0xC))) goto loc_004AA064; /* jne: not equal / not zero */

loc_004AA05C: ;
    edi = MEM32(eax + 4);
    if (CMP_EQ(edi, MEM32(ebp + 0x10))) goto loc_004AA073; /* je: equal / zero */

loc_004AA064: ;
    edi = ZX16(MEM16(edx + 0xC));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = eax + 0x74;
    if (CMP_B(MEM32(ebp + -4), edi)) goto loc_004AA055; /* jb: below (unsigned <) */

loc_004AA073: ;
    if (CMP_NE(MEM32(ebp + -4), esi)) goto loc_004AA0AE; /* jne: not equal / not zero */

loc_004AA078: ;
    if (CMP_NE(LO16(ecx), 0x64)) goto loc_004AA0A9; /* jne: not equal / not zero */

loc_004AA07E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    esi = eax + edx;
    if (CMP_NE(MEM32(esi + 0xA0), 0xFFFFFFFFu)) goto loc_004AA09F; /* jne: not equal / not zero */

loc_004AA093: ;
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = esi + 0x30;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    goto loc_004AA0AE;

loc_004AA09F: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004AA145(); return; /* tail jmp 0x004AA145 */

loc_004AA0A9: ;
    ecx++;
    MEM16(edx + 0xC) = LO16(ecx);

loc_004AA0AE: ;
    eax = MEM32(ebp + -4);
    esi = MEM32(ebp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = eax + edx;
    ecx = MEM32(eax + 0xA0);
    if (CMP_AE(esi, ecx)) goto loc_004AA0CD; /* jae: above or equal (unsigned >=) */

loc_004AA0C3: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_004AA0CD; /* je: equal / zero */

loc_004AA0C8: ;
    if (CMP_NE(ecx, 0xFFFFFFFEu)) goto loc_004AA13C; /* jne: not equal / not zero */

loc_004AA0CD: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(eax + 0x4C);
    ecx = ecx & 0x3FFFFFFF;
    ecx = ecx | MEM32(ebp + 0x1C);
    MEM32(eax + 0xA0) = esi;
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(ebp + 0x18);
    if (CMP_BE(ecx & ecx, 0)) goto loc_004AA121; /* jbe: below or equal (unsigned <=) */

loc_004AA0F5: ;
    esi = MEM32(ebp + 0x14);
    if (TEST_Z(esi, esi)) goto loc_004AA121; /* je: equal / zero */

loc_004AA0FC: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ecx >> 2;
    edi = eax + 0x3C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = ebx;
    (void)0; /* cmp ecx, 0x10 - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_AE(ecx, 0x10)) goto loc_004AA11D; /* jae: above or equal (unsigned >=) */

loc_004AA116: ;
    MEM8(eax + ecx + 0x3C) = 0;
    goto loc_004AA121;

loc_004AA11D: ;
    MEM8(eax + 0x4B) = 0;

loc_004AA121: ;
    if (CMP_EQ(MEM32(ebp + 0x20), 0xFFFFFFFFu)) goto loc_004AA130; /* je: equal / zero */

loc_004AA127: ;
    if (CMP_EQ(MEM32(ebp + 0x20), 0xFFFFFFFEu)) goto loc_004AA130; /* je: equal / zero */

loc_004AA12D: ;
    MEM32(edx + 8) = MEM32(edx + 8) + 1;

loc_004AA130: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A9AF7(); /* call 0x004A9AF7 */

loc_004AA13C: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AA145(); return; /* tail jmp 0x004AA145 */

}

/**
 * sub_004AA14B
 * Original: 0x004AA14B - 0x004AA219 (206 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA14B(void)
{
    int _flags = 0; /* fallback flag var */

loc_004AA14B: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(edx + 0xC));
    ebx = 0; /* xor self */
    if (CMP_BE(esi & esi, 0)) goto loc_004AA212; /* jbe: below or equal (unsigned <=) */

loc_004AA15F: ;
    eax = edx + 0x30;
    PUSH32(esp, edi);

loc_004AA163: ;
    edi = MEM32(eax);
    if (CMP_NE(edi, MEM32(esp + 0x14))) goto loc_004AA174; /* jne: not equal / not zero */

loc_004AA16B: ;
    edi = MEM32(eax + 4);
    if (CMP_EQ(edi, MEM32(esp + 0x18))) goto loc_004AA185; /* je: equal / zero */

loc_004AA174: ;
    edi = ZX16(MEM16(edx + 0xC));
    ebx++;
    eax = eax + 0x74;
    if (CMP_B(ebx, edi)) goto loc_004AA163; /* jb: below (unsigned <) */

loc_004AA180: ;
    goto loc_004AA211;

loc_004AA185: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004AA1EF; /* je: equal / zero */

loc_004AA18E: ;
    if (CMP_EQ(eax, 0xFFFFFFFEu)) goto loc_004AA1EF; /* je: equal / zero */

loc_004AA193: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    ecx = MEM32(ecx + edx + 0xA0);
    if (CMP_AE(eax, ecx)) goto loc_004AA1AD; /* jae: above or equal (unsigned >=) */

loc_004AA1A3: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_004AA1AD; /* je: equal / zero */

loc_004AA1A8: ;
    if (CMP_NE(ecx, 0xFFFFFFFEu)) goto loc_004AA211; /* jne: not equal / not zero */

loc_004AA1AD: ;
    ebx++;
    if (CMP_AE(ebx, esi)) goto loc_004AA1D1; /* jae: above or equal (unsigned >=) */

loc_004AA1B2: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = eax + edx + -68;

loc_004AA1BB: ;
    PUSH32(esp, 0x1D);
    esi = eax + 0x74;
    edi = eax;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ZX16(MEM16(edx + 0xC));
    ebx++;
    eax = eax + 0x74;
    if (CMP_B(ebx, ecx)) goto loc_004AA1BB; /* jb: below (unsigned <) */

loc_004AA1D1: ;
    MEM16(edx + 0xC) = MEM16(edx + 0xC) - 1;
    SET_LO16(esi, MEM16(edx + 0xC));
    MEM32(edx + 8) = MEM32(edx + 8) + 1;
    esi = ZX16(LO16(esi));
    eax = 0; /* xor self */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x74);
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    edi = esi + edx + 0x30;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    goto loc_004AA211;

loc_004AA1EF: ;
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x74);
    esi = esi + edx;
    MEM8(esi + 0x4F) = MEM8(esi + 0x4F) & 0xC3;
    MEM32(esi + 0xA0) = eax;
    eax = 0; /* xor self */
    edi = esi + 0x98;
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0); sub_004A9AF7(); /* call 0x004A9AF7 */

loc_004AA211: ;
    POP32(esp, edi);

loc_004AA212: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004AA219
 * Original: 0x004AA219 - 0x004AA26B (82 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA219(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AA219: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(edx + 0xC));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(esi & esi, 0)) goto loc_004AA265; /* jbe: below or equal (unsigned <=) */

loc_004AA22B: ;
    eax = edx + 0x30;
    PUSH32(esp, ebx);

loc_004AA22F: ;
    ebx = MEM32(eax);
    if (CMP_NE(ebx, MEM32(ebp + 0xC))) goto loc_004AA23E; /* jne: not equal / not zero */

loc_004AA236: ;
    ebx = MEM32(eax + 4);
    if (CMP_EQ(ebx, MEM32(ebp + 0x10))) goto loc_004AA248; /* je: equal / zero */

loc_004AA23E: ;
    edi++;
    eax = eax + 0x74;
    if (CMP_B(edi, esi)) goto loc_004AA22F; /* jb: below (unsigned <) */

loc_004AA246: ;
    goto loc_004AA264;

loc_004AA248: ;
    esi = MEM32(ebp + 0x14);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = eax + edx + 0x4C;
    esi = ~esi;
    esi = esi & MEM32(eax);
    PUSH32(esp, edi);
    esi = esi | MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    MEM32(eax) = esi;
    PUSH32(esp, 0); sub_004A9AF7(); /* call 0x004A9AF7 */

loc_004AA264: ;
    POP32(esp, ebx);

loc_004AA265: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004AA26B
 * Original: 0x004AA26B - 0x004AA2E4 (121 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA26B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AA26B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    ecx = ZX16(MEM16(edi + 0xC));
    ebx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_004AA2DE; /* jbe: below or equal (unsigned <=) */

loc_004AA281: ;
    eax = edi + 0x30;

loc_004AA284: ;
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ebp + 0xC))) goto loc_004AA293; /* jne: not equal / not zero */

loc_004AA28B: ;
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, MEM32(ebp + 0x10))) goto loc_004AA29D; /* je: equal / zero */

loc_004AA293: ;
    ebx++;
    eax = eax + 0x74;
    if (CMP_B(ebx, ecx)) goto loc_004AA284; /* jb: below (unsigned <) */

loc_004AA29B: ;
    goto loc_004AA2DE;

loc_004AA29D: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ebp + 0x18);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = eax + edi;
    MEM8(eax + 0x4F) = MEM8(eax + 0x4F) | 8;
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    MEM32(eax + 0x60) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x5C) = esi;
    MEM32(eax + 0x98) = edx;
    MEM32(eax + 0x9C) = esi;
    PUSH32(esp, 0); sub_004A9AF7(); /* call 0x004A9AF7 */

loc_004AA2DD: ;
    POP32(esp, esi);

loc_004AA2DE: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004AA2E4
 * Original: 0x004AA2E4 - 0x004AA35B (119 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA2E4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AA2E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -8) = ecx;
    ecx = ZX16(MEM16(ebx + 0xC));
    if (CMP_BE(ecx & ecx, 0)) goto loc_004AA356; /* jbe: below or equal (unsigned <=) */

loc_004AA2FC: ;
    eax = ebx + 0x30;

loc_004AA2FF: ;
    edx = MEM32(eax);
    if (CMP_NE(edx, MEM32(ebp + 0xC))) goto loc_004AA30E; /* jne: not equal / not zero */

loc_004AA306: ;
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, MEM32(ebp + 0x10))) goto loc_004AA31B; /* je: equal / zero */

loc_004AA30E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = eax + 0x74;
    if (CMP_B(MEM32(ebp + -4), ecx)) goto loc_004AA2FF; /* jb: below (unsigned <) */

loc_004AA319: ;
    goto loc_004AA356;

loc_004AA31B: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + ebx;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx + 0x58;
    esi = ebp + 0x14;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_004AA354; /* jne: not equal / not zero */

loc_004AA335: ;
    MEM8(edx + 0x4F) = MEM8(edx + 0x4F) & 0xF7;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    edi = edx + 0x50;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = 0; /* xor self */
    edi = edx + 0x98;
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, ebx);
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0); sub_004A9AF7(); /* call 0x004A9AF7 */

loc_004AA354: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004AA356: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004AA35B
 * Original: 0x004AA35B - 0x004AA387 (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA35B(void)
{
    int _flags = 0; /* fallback flag var */

loc_004AA35B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(MEM16(eax + 0xC), LO16(esi))) goto loc_004AA37D; /* jbe: below or equal (unsigned <=) */

loc_004AA368: ;
    edx = eax + 0x4C;
    PUSH32(esp, edi);

loc_004AA36C: ;
    MEM8(edx + 3) = MEM8(edx + 3) & 0xCB;
    edi = ZX16(MEM16(eax + 0xC));
    esi++;
    edx = edx + 0x74;
    if (CMP_B(esi, edi)) goto loc_004AA36C; /* jb: below (unsigned <) */

loc_004AA37C: ;
    POP32(esp, edi);

loc_004AA37D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A99DB(); /* call 0x004A99DB */

loc_004AA383: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AA387
 * Original: 0x004AA387 - 0x004AA39C (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA387(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AA387: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(edi, edi)) { sub_004AA39C(); return; } /* jne: not equal / not zero */

loc_004AA392: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AA497(); return; /* tail jmp 0x004AA497 */

}

/**
 * sub_004AA49C
 * Original: 0x004AA49C - 0x004AA4B6 (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA49C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AA49C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    if (CMP_NE(ebx, esi)) { sub_004AA4B6(); return; } /* jne: not equal / not zero */

loc_004AA4AC: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AA670(); return; /* tail jmp 0x004AA670 */

}

/**
 * sub_004AA676
 * Original: 0x004AA676 - 0x004AA68E (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA676(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AA676: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(ecx, eax)) { sub_004AA68E(); return; } /* jne: not equal / not zero */

loc_004AA684: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AA852(); return; /* tail jmp 0x004AA852 */

}

/**
 * sub_004AA856
 * Original: 0x004AA856 - 0x004AA86F (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AA856(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AA856: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    if (CMP_NE(esi, edi)) { sub_004AA86F(); return; } /* jne: not equal / not zero */

loc_004AA865: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AAA31(); return; /* tail jmp 0x004AAA31 */

}

/**
 * sub_004AAA37
 * Original: 0x004AAA37 - 0x004AAA53 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AAA37(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AAA37: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = ecx;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    if (CMP_NE(edi, eax)) { sub_004AAA53(); return; } /* jne: not equal / not zero */

loc_004AAA49: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AACB0(); return; /* tail jmp 0x004AACB0 */

}

/**
 * sub_004AACB5
 * Original: 0x004AACB5 - 0x004AB3E8 (1843 bytes, 585 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AACB5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AACB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax = eax - 0;
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    if ((eax == 0)) goto loc_004AB13E; /* je: equal / zero */

loc_004AACD2: ;
    eax--;
    if ((eax == 0)) goto loc_004AB16E; /* je: equal / zero */

loc_004AACD9: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_004AAE3F; /* je: equal / zero */

loc_004AACE1: ;
    eax--;
    if ((eax == 0)) goto loc_004AAE96; /* je: equal / zero */

loc_004AACE8: ;
    eax = eax - 6;
    if ((eax == 0)) goto loc_004AACFA; /* je: equal / zero */

loc_004AACED: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_004AAE8C; /* je: equal / zero */

loc_004AACF5: ;
    goto loc_004AB3E4;

loc_004AACFA: ;
    PUSH32(esp, MEM32(ebx + 0x14D8));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AAD07: ;
    edi = eax;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004AB3E0; /* jne: not equal / not zero */

loc_004AAD15: ;
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AAD22: ;
    edi = eax;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004AB3E0; /* jne: not equal / not zero */

loc_004AAD30: ;
    eax = MEM32(esi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_004AAD43; /* je: equal / zero */

loc_004AAD37: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53CC(); /* call 0x004B53CC */

loc_004AAD3F: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0;

loc_004AAD43: ;
    eax = ebx + 0x13D8;
    edi = 0; /* xor self */
    MEM32(ebp + 8) = eax;

loc_004AAD4E: ;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(MEM32(eax + -4), 0)) goto loc_004AAD81; /* je: equal / zero */

loc_004AAD57: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A89D6(); /* call 0x004A89D6 */

loc_004AAD5F: ;
    if (TEST_NZ(eax, eax)) goto loc_004AAD81; /* jne: not equal / not zero */

loc_004AAD63: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + -4);
    if (CMP_NE(MEM32(eax + 8), 0xFFFFFFFFu)) goto loc_004AADAA; /* jne: not equal / not zero */

loc_004AAD6F: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + -4));
    PUSH32(esp, 0); sub_004B53CC(); /* call 0x004B53CC */

loc_004AAD7A: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + -4) = MEM32(eax + -4) & 0;

loc_004AAD81: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_004AAD9E; /* je: equal / zero */

loc_004AAD8A: ;
    if (CMP_NE(MEM32(eax + 8), 0xFFFFFFFFu)) goto loc_004AADD1; /* jne: not equal / not zero */

loc_004AAD90: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53CC(); /* call 0x004B53CC */

loc_004AAD98: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;

loc_004AAD9E: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x48;
    edi++;
    if (CMP_B(edi, 4)) goto loc_004AAD4E; /* jb: below (unsigned <) */

loc_004AADA8: ;
    goto loc_004AAE07;

loc_004AADAA: ;
    eax = edi + edi * 8;
    eax = ebx + eax * 8 + 0x13D4;
    ecx = MEM32(eax);
    MEM32(esi + 0x30) = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x14D8));
    PUSH32(esp, MEM32(ebx + 0x14D4));
    goto loc_004AADF6;

loc_004AADD1: ;
    eax = edi + edi * 8;
    eax = ebx + eax * 8 + 0x13D8;
    ecx = MEM32(eax);
    MEM32(esi + 0x30) = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x14E0));
    PUSH32(esp, MEM32(ebx + 0x14DC));

loc_004AADF6: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_004B4516(); /* call 0x004B4516 */

loc_004AADFD: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004AB370; /* jl: less (signed <) */

loc_004AAE07: ;
    if (CMP_NE(MEM32(esi + 0x30), 0)) goto loc_004AB3E4; /* jne: not equal / not zero */

loc_004AAE11: ;
    ebx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A860C(); /* call 0x004A860C */

loc_004AAE1C: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004AB370; /* jl: less (signed <) */

loc_004AAE26: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A8708(); /* call 0x004A8708 */

loc_004AAE2E: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004AB370; /* jl: less (signed <) */

loc_004AAE38: ;
    MEM32(esi + 0x10) = 3;

loc_004AAE3F: ;
    PUSH32(esp, MEM32(ebx + 0x14D8));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AAE4C: ;
    edi = eax;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004AB3E0; /* jne: not equal / not zero */

loc_004AAE5A: ;
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AAE67: ;
    edi = eax;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004AB3E0; /* jne: not equal / not zero */

loc_004AAE75: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A8632(); /* call 0x004A8632 */

loc_004AAE7D: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A872E(); /* call 0x004A872E */

loc_004AAE85: ;
    MEM32(esi + 0x10) = 0xC;

loc_004AAE8C: ;
    edi = 0x1500F0;
    goto loc_004AB370;

loc_004AAE96: ;
    eax = 0; /* xor self */
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AAEAD: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_004AB3E4; /* je: equal / zero */

loc_004AAEB7: ;
    if (TEST_S(edi, edi)) goto loc_004AB36D; /* jl: less (signed <) */

loc_004AAEBD: ;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004AB3E0; /* jne: not equal / not zero */

loc_004AAEC9: ;
    ebx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004AAEEC: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004AB370; /* jl: less (signed <) */

loc_004AAEF6: ;
    edi = MEM32(ebp + -36);
    if (TEST_Z(edi, edi)) goto loc_004AB134; /* je: equal / zero */

loc_004AAF01: ;
    if (CMP_NE(MEM32(ebp + -40), 0xC8)) goto loc_004AB134; /* jne: not equal / not zero */

loc_004AAF0E: ;
    PUSH32(esp, 4);
    eax = ebx + 0x13B4;
    POP32(esp, ecx);

loc_004AAF17: ;
    edx = MEM32(eax + -12);
    edx = edx | MEM32(eax + -8);
    if ((edx == 0)) goto loc_004AAF27; /* je: equal / zero */

loc_004AAF1F: ;
    if (TEST_NZ(MEM8(eax), 1)) goto loc_004AAF27; /* jne: not equal / not zero */

loc_004AAF24: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;

loc_004AAF27: ;
    eax = eax + 0x48;
    ecx--;
    if ((ecx != 0)) goto loc_004AAF17; /* jne: not equal / not zero */

loc_004AAF2D: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + -20), eax - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_BE(MEM32(ebp + -20), eax)) goto loc_004AB0F1; /* jbe: below or equal (unsigned <=) */

loc_004AAF41: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x20;
    eax = 0; /* xor self */
    if (CMP_A(eax, MEM32(ebp + -44))) goto loc_004AB12A; /* ja: above (unsigned >) */

loc_004AAF50: ;
    ecx = MEM32(ebp + -48);
    if (CMP_B(eax, MEM32(ebp + -44))) goto loc_004AAF5E; /* jb: below (unsigned <) */

loc_004AAF55: ;
    if (CMP_A(MEM32(ebp + 8), ecx)) goto loc_004AB12A; /* ja: above (unsigned >) */

loc_004AAF5E: ;
    eax = MEM32(edi + 4);
    if (CMP_B(eax, 0x10)) goto loc_004AB12A; /* jb: below (unsigned <) */

loc_004AAF6A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    eax = 0; /* xor self */
    if (CMP_A(eax, MEM32(ebp + -44))) goto loc_004AB12A; /* ja: above (unsigned >) */

loc_004AAF78: ;
    if (CMP_B(eax, MEM32(ebp + -44))) goto loc_004AAF83; /* jb: below (unsigned <) */

loc_004AAF7A: ;
    if (CMP_A(MEM32(ebp + 8), ecx)) goto loc_004AB12A; /* ja: above (unsigned >) */

loc_004AAF83: ;
    PUSH32(esp, MEM32(edi + 8));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A8A44(); /* call 0x004A8A44 */

loc_004AAF8D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (TEST_Z(eax, eax)) goto loc_004AB12A; /* je: equal / zero */

loc_004AAF98: ;
    ecx = MEM32(edi + 4);
    eax = edi + 0x30;
    MEM32(ebp + -28) = eax;
    eax = ecx + eax + -16;
    MEM32(ebp + -24) = eax;
    eax = MEM32(edi + 0x20);
    if (TEST_S(eax, eax)) goto loc_004AAFC1; /* jl: less (signed <) */

loc_004AAFAF: ;
    if (CMP_EQ(eax, 0x1512F0)) goto loc_004AAFC1; /* je: equal / zero */

loc_004AAFB6: ;
    if (CMP_NE(eax, 0x1512F1)) goto loc_004AB04B; /* jne: not equal / not zero */

loc_004AAFC1: ;
    if (CMP_EQ(eax, 0x80151200u)) goto loc_004AAFDE; /* je: equal / zero */

loc_004AAFC8: ;
    if (CMP_LE(eax, 0x1512EF)) goto loc_004AB11F; /* jle: less or equal (signed <=) */

loc_004AAFD3: ;
    if (CMP_G(eax, 0x1512F1)) goto loc_004AB11F; /* jg: greater (signed >) */

loc_004AAFDE: ;
    eax = MEM32(esi + 0x3C);
    ecx = 0; /* xor self */
    MEM32(ebp + -12) = eax;

loc_004AAFE6: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    edx = MEM32(ebp + -16);
    if (CMP_NE(eax, MEM32(edx))) goto loc_004AB006; /* jne: not equal / not zero */

loc_004AAFF2: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    if (CMP_NE(eax, MEM32(edx + 4))) goto loc_004AB006; /* jne: not equal / not zero */

loc_004AAFFD: ;
    eax = MEM32(ebp + -12);
    if (TEST_Z(MEM8(eax + 8), 3)) goto loc_004AB010; /* je: equal / zero */

loc_004AB006: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0x70;
    ecx++;
    if (CMP_B(ecx, 4)) goto loc_004AAFE6; /* jb: below (unsigned <) */

loc_004AB010: ;
    if (CMP_AE(ecx, 4)) goto loc_004AB04B; /* jae: above or equal (unsigned >=) */

loc_004AB015: ;
    eax = ecx + ecx * 8;
    eax = ebx + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) | 0x40;
    if (CMP_EQ(MEM32(edi + 0x20), 0x1512F1)) goto loc_004AB04B; /* je: equal / zero */

loc_004AB02B: ;
    edx = MEM32(esi + 0x3C);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + edx + 0x6C;
    if (CMP_L(MEM32(eax), 0)) goto loc_004AB041; /* jl: less (signed <) */

loc_004AB03C: ;
    edx = MEM32(edi + 0x20);
    MEM32(eax) = edx;

loc_004AB041: ;
    ecx = ecx + ebx + 0x6B8;
    MEM8(ecx) = MEM8(ecx) | 1;

loc_004AB04B: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x2C);
    edx = MEM32(eax + 8);
    ecx = MEM32(edi + 0x24);
    if (CMP_EQ(edx, ecx)) goto loc_004AB082; /* je: equal / zero */

loc_004AB05B: ;
    PUSH32(esp, MEM32(ebp + -24));
    edx = ebp + -28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx + 0x28));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A9D2E(); /* call 0x004A9D2E */

loc_004AB073: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004AB370; /* jl: less (signed <) */

loc_004AB07D: ;
    edi = MEM32(ebp + -8);
    goto loc_004AB08A;

loc_004AB082: ;
    if (TEST_Z(edx, edx)) goto loc_004AB08A; /* je: equal / zero */

loc_004AB086: ;
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;

loc_004AB08A: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x30);
    edx = MEM32(eax + 8);
    ecx = MEM32(edi + 0x2A);
    if (CMP_EQ(edx, ecx)) goto loc_004AB0C9; /* je: equal / zero */

loc_004AB09A: ;
    PUSH32(esp, MEM32(ebp + -24));
    edx = ebp + -28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx + 0x2E));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A8AFA(); /* call 0x004A8AFA */

loc_004AB0B2: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004AB370; /* jl: less (signed <) */

loc_004AB0BC: ;
    eax = MEM32(ebp + -24);
    if (CMP_NE(MEM32(ebp + -28), eax)) goto loc_004AB12A; /* jne: not equal / not zero */

loc_004AB0C4: ;
    edi = MEM32(ebp + -8);
    goto loc_004AB0D1;

loc_004AB0C9: ;
    if (TEST_Z(edx, edx)) goto loc_004AB0D1; /* je: equal / zero */

loc_004AB0CD: ;
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;

loc_004AB0D1: ;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 1;
    eax = MEM32(edi + 4);
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    edi = edi + eax + 0x20;
    eax = MEM32(ebp + -32);
    (void)0; /* cmp eax, MEM32(ebp + -20) - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    if (CMP_B(eax, MEM32(ebp + -20))) goto loc_004AAF41; /* jb: below (unsigned <) */

loc_004AB0F1: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004AB0FD: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004AB107: ;
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004AB113: ;
    MEM32(esi + 0x10) = 0xA;
    goto loc_004AB3E4;

loc_004AB11F: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(eax + 0x20);
    goto loc_004AB3E0;

loc_004AB12A: ;
    edi = 0x80150001u;
    goto loc_004AB370;

loc_004AB134: ;
    edi = 0x80004005u;
    goto loc_004AB370;

loc_004AB13E: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A85CA(); /* call 0x004A85CA */

loc_004AB146: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_004AB159; /* je: equal / zero */

loc_004AB14C: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004AB154: ;
    goto loc_004AB3E0;

loc_004AB159: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A86C6(); /* call 0x004A86C6 */

loc_004AB161: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_004AB14C; /* jne: not equal / not zero */

loc_004AB167: ;
    MEM32(esi + 0x10) = 1;

loc_004AB16E: ;
    PUSH32(esp, MEM32(ebx + 0x14D8));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AB17B: ;
    edi = eax;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004AB3E0; /* jne: not equal / not zero */

loc_004AB189: ;
    PUSH32(esp, MEM32(ebx + 0x14E0));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AB196: ;
    edi = eax;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004AB3E0; /* jne: not equal / not zero */

loc_004AB1A4: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    eax = ebx + 0x13B4;
    MEM32(ebp + -20) = eax;

loc_004AB1B1: ;
    ecx = MEM32(eax + -12);
    ecx = ecx | MEM32(eax + -8);
    if ((ecx == 0)) goto loc_004AB21B; /* je: equal / zero */

loc_004AB1B9: ;
    if (TEST_NZ(MEM8(eax), 1)) goto loc_004AB21B; /* jne: not equal / not zero */

loc_004AB1BE: ;
    eax = 0; /* xor self */
    ecx = esi + 0x1C;
    edi = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, MEM32(ebx + 0x14D4));
    ecx = ebx;
    PUSH32(esp, 0); sub_004B38AC(); /* call 0x004B38AC */

loc_004AB1E1: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004AB370; /* jl: less (signed <) */

loc_004AB1EB: ;
    eax = 0; /* xor self */
    ecx = esi + 0x1C;
    edi = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, MEM32(ebx + 0x14DC));
    ecx = ebx;
    PUSH32(esp, 0); sub_004B38AC(); /* call 0x004B38AC */

loc_004AB20E: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004AB370; /* jl: less (signed <) */

loc_004AB218: ;
    eax = MEM32(ebp + -20);

loc_004AB21B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    eax = eax + 0x48;
    (void)0; /* cmp MEM32(ebp + -32), 4 - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (CMP_B(MEM32(ebp + -32), 4)) goto loc_004AB1B1; /* jb: below (unsigned <) */

loc_004AB22A: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    ebx = MEM32(esi + 0x40);
    eax = eax + 0x13A8;
    MEM32(ebp + -20) = eax;

loc_004AB23C: ;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    if ((ecx == 0)) goto loc_004AB33C; /* je: equal / zero */

loc_004AB247: ;
    if (TEST_NZ(MEM8(eax + 0xC), 1)) goto loc_004AB33C; /* jne: not equal / not zero */

loc_004AB251: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(ebp + -16);
    eax = ecx + eax + 0xC;
    esi = eax + 1;

loc_004AB25E: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004AB25E; /* jne: not equal / not zero */

loc_004AB265: ;
    eax = eax - esi;
    esi = eax + 1;
    eax = 0; /* xor self */
    ecx = esi + 0x98;
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edi = MEM32(ebp + -4);
    eax = esi + 0x78;
    MEM32(ebx + 4) = eax;
    eax = edi + 0x14C8;
    MEM32(ebx) = 0x401;
    ecx = MEM32(eax);
    MEM32(ebx + 8) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    PUSH32(esp, 0);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + -40) = esi;
    PUSH32(esp, 0); sub_0049CFA8(); /* call 0x0049CFA8 */

loc_004AB2AE: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(ebp + -20);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(eax);
    MEM32(ebx + 0x20) = ecx;
    eax = MEM32(eax + 4);
    MEM32(ebx + 0x24) = eax;
    eax = MEM32(edi + 4);
    MEM32(ebx + 0x76) = eax;
    eax = ebx + 0x2A;
    PUSH32(esp, eax);
    MEM16(ebx + 0x28) = LO16(esi);
    PUSH32(esp, 0); sub_0048D70A(); /* call 0x0048D70A */

loc_004AB2D5: ;
    eax = MEM32(edi + 0x14E4);
    MEM32(ebx + 0x4E) = eax;
    eax = MEM32(edi + 0x14E8);
    MEM32(ebx + 0x52) = eax;
    eax = MEM32(ebp + -20);
    esi = edi + 0x14EC;
    edx = MEM32(ebp + 8);
    edi = ebx + 0x56;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ecx = MEM32(eax + 0x2C);
    ecx = MEM32(ecx + 8);
    esi = MEM32(ebp + -16);
    MEM32(ebx + 0x66) = ecx;
    eax = MEM32(eax + 0x30);
    eax = MEM32(eax + 8);
    MEM32(ebx + 0x6A) = eax;
    eax = MEM32(ebp + -40);
    edx = MEM32(edx + 0x3C);
    esi = esi + edx + 0xC;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebx + 0x98;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + 8);
    ebx = ebx + eax + 0x98;
    eax = MEM32(ebp + -20);

loc_004AB33C: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0x70;
    eax = eax + 0x48;
    (void)0; /* cmp MEM32(ebp + -16), 0x1C0 - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (CMP_B(MEM32(ebp + -16), 0x1C0)) goto loc_004AB23C; /* jb: below (unsigned <) */

loc_004AB353: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x8021);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_004B53DA(); /* call 0x004B53DA */

loc_004AB362: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) goto loc_004AB381; /* jne: not equal / not zero */

loc_004AB368: ;
    edi = 0x8007000Eu;

loc_004AB36D: ;
    ebx = MEM32(ebp + -4);

loc_004AB370: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A88A9(); /* call 0x004A88A9 */

loc_004AB378: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_004AB381: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    MEM32(ebx + 8) = eax;
    ecx = 0; /* xor self */
    ecx++;
    PUSH32(esp, ecx);
    MEM32(ebx + 0xC) = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, MEM32(esi + 0x40));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(0x651680));
    PUSH32(esp, 0x401);
    PUSH32(esp, 0); sub_004A7C76(); /* call 0x004A7C76 */

loc_004AB3B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004ADD9D(); /* call 0x004ADD9D */

loc_004AB3BF: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004AB3D7; /* jl: less (signed <) */

loc_004AB3C5: ;
    eax = MEM32(esi + 0x18);
    MEM32(ebx + 4) = eax;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x10) = 4;
    goto loc_004AB3E4;

loc_004AB3D7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004AB3E0: ;
    if (TEST_S(edi, edi)) goto loc_004AB36D; /* jl: less (signed <) */

loc_004AB3E4: ;
    edi = 0; /* xor self */
    goto loc_004AB378;

}

/**
 * sub_004AB3E8
 * Original: 0x004AB3E8 - 0x004AB6E5 (765 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AB3E8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AB3E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(MEM32(ebp + 0x10), ecx)) goto loc_004AB405; /* ja: above (unsigned >) */

loc_004AB3FB: ;
    if (CMP_B(MEM32(ebp + 0xC), 0x3E)) goto loc_004AB6D4; /* jb: below (unsigned <) */

loc_004AB405: ;
    edi = MEM32(ebp + 8);
    ebx = MEM32(edi + 4);
    eax = ebx + 0x20;
    if (CMP_NE(MEM32(ebp + 0xC), eax)) goto loc_004AB6D4; /* jne: not equal / not zero */

loc_004AB417: ;
    if (CMP_NE(MEM32(ebp + 0x10), ecx)) goto loc_004AB6D4; /* jne: not equal / not zero */

loc_004AB420: ;
    eax = MEM32(edi + 0x2A);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(eax, ecx)) goto loc_004AB436; /* jge: greater or equal (signed >=) */

loc_004AB42A: ;
    MEM32(ebp + 8) = 0x80150007u;
    goto loc_004AB6DB;

loc_004AB436: ;
    PUSH32(esp, MEM32(edi + 0x24));
    esi = MEM32(edi + 0x20);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A89EE(); /* call 0x004A89EE */

loc_004AB445: ;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(edi + 0x3A);
    ecx = ebx + edi + 0x20;
    ebx = edi + eax * 4 + 0x3E;
    (void)0; /* cmp ebx, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_A(ebx, ecx)) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB45E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = edi + 0x3E;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A8A1F(); /* call 0x004A8A1F */

loc_004AB46F: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049CB88(); /* call 0x0049CB88 */

loc_004AB478: ;
    esi = 0; /* xor self */
    (void)0; /* cmp MEM16(edi + 0x34), LO16(esi) - flags set for next jcc */
    MEM32(ebp + -16) = esi;
    if (CMP_BE(MEM16(edi + 0x34), LO16(esi))) goto loc_004AB6CF; /* jbe: below or equal (unsigned <=) */

loc_004AB487: ;
    goto loc_004AB48B;

loc_004AB489: ;
    esi = 0; /* xor self */

loc_004AB48B: ;
    edx = MEM32(ebp + -8);
    eax = ebx;
    ebx = ebx + 6;
    if (CMP_A(ebx, edx)) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB49B: ;
    ecx = ZX16(MEM16(eax + 4));
    eax = ZX16(MEM16(edi + 0x28));
    ecx = ecx + ebx;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    if (CMP_L(eax, esi)) goto loc_004AB6B9; /* jl: less (signed <) */

loc_004AB4B0: ;
    if (CMP_LE(eax, 1)) goto loc_004AB5CC; /* jle: less or equal (signed <=) */

loc_004AB4B9: ;
    if (CMP_EQ(eax, 2)) goto loc_004AB54C; /* je: equal / zero */

loc_004AB4C2: ;
    if (CMP_EQ(eax, 3)) goto loc_004AB510; /* je: equal / zero */

loc_004AB4C7: ;
    if (CMP_NE(eax, 4)) goto loc_004AB6B9; /* jne: not equal / not zero */

loc_004AB4D0: ;
    eax = ebx;
    ebx = ebx + 0x1A;
    if (CMP_A(ebx, edx)) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB4DD: ;
    if (CMP_A(ebx, ecx)) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB4E5: ;
    (void)0; /* cmp MEM16(eax + 0x18), LO16(esi) - flags set for next jcc */
    ecx = MEM32(ebp + -4);
    if (CMP_NE(MEM16(eax + 0x18), LO16(esi))) goto loc_004AB4F5; /* jne: not equal / not zero */

loc_004AB4EE: ;
    PUSH32(esp, 0x20000000);
    goto loc_004AB4FA;

loc_004AB4F5: ;
    PUSH32(esp, 0x10000000);

loc_004AB4FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0); sub_004AA219(); /* call 0x004AA219 */

loc_004AB50B: ;
    goto loc_004AB6B9;

loc_004AB510: ;
    eax = ebx;
    ebx = ebx + 0x1C;
    if (CMP_A(ebx, edx)) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB51D: ;
    if (CMP_A(ebx, ecx)) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB525: ;
    PUSH32(esp, MEM32(eax + 0x18));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0); sub_004AA26B(); /* call 0x004AA26B */

loc_004AB547: ;
    goto loc_004AB6B9;

loc_004AB54C: ;
    esi = ebx + 0x1C;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    eax = ebx;
    if (CMP_A(esi, edx)) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB559: ;
    if (CMP_A(esi, ecx)) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB561: ;
    SET_LO16(edx, MEM16(eax + 0x1A));
    ecx = ZX16(MEM16(eax + 0x18));
    ebx = ZX16(LO16(edx));
    ebx = ebx + esi;
    ebx = ebx + ecx;
    if (CMP_A(ebx, MEM32(ebp + -8))) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB579: ;
    if (CMP_A(ebx, MEM32(ebp + -12))) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB582: ;
    if (CMP_A(LO16(edx), 8)) goto loc_004AB6B9; /* ja: above (unsigned >) */

loc_004AB58C: ;
    if (CMP_A(MEM16(eax + 0x18), 0x18)) goto loc_004AB6B9; /* ja: above (unsigned >) */

loc_004AB597: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ZX16(LO16(ecx));
    ecx = ecx + eax + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0); sub_004A9E3B(); /* call 0x004A9E3B */

loc_004AB5C7: ;
    goto loc_004AB6B9;

loc_004AB5CC: ;
    edx = ebx + 0x14;
    esi = ebx;
    ebx = edx;
    if (CMP_A(ebx, MEM32(ebp + -8))) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB5DC: ;
    if (CMP_A(ebx, ecx)) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB5E4: ;
    ecx = ZX16(MEM16(esi + 0x12));
    ebx = ebx + ecx;
    if (CMP_A(ebx, MEM32(ebp + -8))) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB5F3: ;
    if (CMP_A(ebx, MEM32(ebp + -12))) goto loc_004AB6D4; /* ja: above (unsigned >) */

loc_004AB5FC: ;
    eax = ZX16(MEM16(esi + 0xC));
    if (TEST_Z(eax, eax)) goto loc_004AB6B9; /* je: equal / zero */

loc_004AB608: ;
    if (CMP_EQ(eax, 1)) goto loc_004AB67D; /* je: equal / zero */

loc_004AB60D: ;
    if (CMP_EQ(eax, 2)) goto loc_004AB658; /* je: equal / zero */

loc_004AB612: ;
    if (CMP_EQ(eax, 3)) goto loc_004AB64C; /* je: equal / zero */

loc_004AB617: ;
    if (CMP_LE(eax, 3)) goto loc_004AB643; /* jle: less or equal (signed <=) */

loc_004AB619: ;
    if (CMP_G(eax, 5)) goto loc_004AB643; /* jg: greater (signed >) */

loc_004AB61E: ;
    if (CMP_L(MEM32(esi + 0xE), 0)) goto loc_004AB6B9; /* jl: less (signed <) */

loc_004AB628: ;
    PUSH32(esp, MEM32(esi));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(esi + 8));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0); sub_004AA14B(); /* call 0x004AA14B */

loc_004AB63E: ;
    MEM32(ebp + 8) = eax;
    goto loc_004AB6B9;

loc_004AB643: ;
    MEM32(ebp + 8) = 0x80070057u;
    goto loc_004AB6B9;

loc_004AB64C: ;
    if (CMP_L(MEM32(esi + 0xE), 0)) goto loc_004AB6B9; /* jl: less (signed <) */

loc_004AB652: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0);
    goto loc_004AB665;

loc_004AB658: ;
    if (CMP_L(MEM32(esi + 0xE), 0)) goto loc_004AB6B9; /* jl: less (signed <) */

loc_004AB65E: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x80000000u);

loc_004AB665: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0); sub_004AA016(); /* call 0x004AA016 */

loc_004AB67B: ;
    goto loc_004AB63E;

loc_004AB67D: ;
    if (CMP_L(MEM32(esi + 0xE), 0)) goto loc_004AB6A3; /* jl: less (signed <) */

loc_004AB683: ;
    PUSH32(esp, MEM32(esi));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, 0); sub_004AA016(); /* call 0x004AA016 */

loc_004AB6A0: ;
    MEM32(ebp + 8) = eax;

loc_004AB6A3: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x40);
    if (TEST_Z(eax, eax)) goto loc_004AB6B9; /* je: equal / zero */

loc_004AB6AD: ;
    PUSH32(esp, MEM32(esi + 0xE));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004BD771(); /* call 0x004BD771 */

loc_004AB6B9: ;
    if (CMP_NE(ebx, MEM32(ebp + -12))) goto loc_004AB6D4; /* jne: not equal / not zero */

loc_004AB6BE: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    SET_LO16(eax, MEM16(ebp + -16));
    if (CMP_B(LO16(eax), MEM16(edi + 0x34))) goto loc_004AB489; /* jb: below (unsigned <) */

loc_004AB6CF: ;
    if (CMP_EQ(ebx, MEM32(ebp + -8))) goto loc_004AB6DB; /* je: equal / zero */

loc_004AB6D4: ;
    MEM32(ebp + 8) = 0x80150001u;

loc_004AB6DB: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004AB6E5
 * Original: 0x004AB6E5 - 0x004ABB1F (1082 bytes, 326 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AB6E5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AB6E5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    eax = eax + eax * 8;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = esi + eax * 8 + 0x13B4;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -12) = edi;
    MEM32(eax) = MEM32(eax) | 0x10;
    eax = MEM32(ebx + 0x60);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(eax, edi)) goto loc_004AB732; /* je: equal / zero */

loc_004AB715: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AB71B: ;
    if (CMP_NE(eax, 0x1500F1)) goto loc_004AB732; /* jne: not equal / not zero */

loc_004AB722: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) | 8;

loc_004AB732: ;
    eax = MEM32(ebx + 0x10);
    eax = eax - 5;
    if ((eax == 0)) goto loc_004AB899; /* je: equal / zero */

loc_004AB73E: ;
    eax--;
    if ((eax == 0)) goto loc_004AB880; /* je: equal / zero */

loc_004AB745: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_004AB766; /* je: equal / zero */

loc_004AB749: ;
    eax--;
    if ((eax == 0)) goto loc_004AB788; /* je: equal / zero */

loc_004AB74C: ;
    eax--;
    if ((eax == 0)) goto loc_004AB805; /* je: equal / zero */

loc_004AB753: ;
    eax--;
    if ((eax == 0)) goto loc_004AB84C; /* je: equal / zero */

loc_004AB75A: ;
    eax--;
    if ((eax == 0)) goto loc_004AB876; /* je: equal / zero */

loc_004AB761: ;
    goto loc_004ABAE0;

loc_004AB766: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004A85CA(); /* call 0x004A85CA */

loc_004AB76E: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_004AB781; /* je: equal / zero */

loc_004AB774: ;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004AB77C: ;
    goto loc_004AB97C;

loc_004AB781: ;
    MEM32(ebx + 0x10) = 9;

loc_004AB788: ;
    PUSH32(esp, MEM32(esi + 0x14D8));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AB795: ;
    edi = eax;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004AB97C; /* jne: not equal / not zero */

loc_004AB7A3: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    edi = MEM32(esi + eax * 8 + 0x13D4);
    if (TEST_Z(edi, edi)) goto loc_004AB7FE; /* je: equal / zero */

loc_004AB7B4: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004A8C83(); /* call 0x004A8C83 */

loc_004AB7BE: ;
    if (TEST_NZ(eax, eax)) goto loc_004AB7C5; /* jne: not equal / not zero */

loc_004AB7C2: ;
    MEM32(edi + 8) = MEM32(edi + 8) & eax;

loc_004AB7C5: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13D4;
    ecx = MEM32(eax);
    MEM32(ebx + 0x30) = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(ebx + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14D8));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x14D4));
    PUSH32(esp, 0); sub_004B4516(); /* call 0x004B4516 */

loc_004AB7F4: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004ABB0E; /* jl: less (signed <) */

loc_004AB7FE: ;
    MEM32(ebx + 0x10) = 0xA;

loc_004AB805: ;
    PUSH32(esp, MEM32(esi + 0x14D8));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AB812: ;
    edi = eax;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004AB97C; /* jne: not equal / not zero */

loc_004AB820: ;
    eax = MEM32(ebx + 0x30);
    if (TEST_Z(eax, eax)) goto loc_004AB833; /* je: equal / zero */

loc_004AB827: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B53CC(); /* call 0x004B53CC */

loc_004AB82F: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) & 0;

loc_004AB833: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004A860C(); /* call 0x004A860C */

loc_004AB83B: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004ABB0E; /* jl: less (signed <) */

loc_004AB845: ;
    MEM32(ebx + 0x10) = 0xB;

loc_004AB84C: ;
    PUSH32(esp, MEM32(esi + 0x14D8));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AB859: ;
    edi = eax;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004AB97C; /* jne: not equal / not zero */

loc_004AB867: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004A8632(); /* call 0x004A8632 */

loc_004AB86F: ;
    MEM32(ebx + 0x10) = 0xC;

loc_004AB876: ;
    edi = 0x1500F0;
    goto loc_004ABB0E;

loc_004AB880: ;
    if (CMP_NE(MEM32(ebx + 0x18), edi)) goto loc_004AB899; /* jne: not equal / not zero */

loc_004AB885: ;
    PUSH32(esp, MEM32(ebx + 8));
    MEM32(ebx + 0x10) = 8;
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004AB894: ;
    goto loc_004AB984;

loc_004AB899: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = eax + 0x13BC;
    esi = eax + 0x13C4;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    esi = MEM32(ebp + -4);
    if (1 /* strings matched (repe cmpsb) */) goto loc_004AB8F8; /* je: equal / zero */

loc_004AB8BA: ;
    PUSH32(esp, MEM32(eax + 0x13D4));
    ecx = esi;
    PUSH32(esp, 0); sub_004AA35B(); /* call 0x004AA35B */

loc_004AB8C7: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8;
    ecx = MEM32(eax + 0x13BC);
    MEM32(eax + 0x13C4) = ecx;
    ecx = MEM32(eax + 0x13C0);
    MEM32(eax + 0x13C8) = ecx;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) | 8;

loc_004AB8F8: ;
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(ebx + 0x18), edi)) goto loc_004AB9CA; /* jne: not equal / not zero */

loc_004AB903: ;
    eax = MEM32(ebx + 0x14);
    ecx = eax + eax * 8;
    if (TEST_NZ(MEM8(esi + ecx * 8 + 0x13B4), 0x20)) goto loc_004AB94C; /* jne: not equal / not zero */

loc_004AB913: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0049CB72(); /* call 0x0049CB72 */

loc_004AB91B: ;
    if (TEST_NZ(LO8(eax), 3)) goto loc_004AB94C; /* jne: not equal / not zero */

loc_004AB91F: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) | 0x20;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    esi = esi + eax * 8 + 0x13B4;
    MEM32(esi) = MEM32(esi) | 8;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004AB947: ;
    esi = MEM32(ebp + -4);
    goto loc_004AB984;

loc_004AB94C: ;
    if (CMP_EQ(MEM32(ebx + 0x34), edi)) goto loc_004AB960; /* je: equal / zero */

loc_004AB951: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004AB956: ;
    eax = eax - MEM32(ebx + 0x34);
    if (CMP_B(eax, 0x7530)) goto loc_004AB9CA; /* jb: below (unsigned <) */

loc_004AB960: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(ebx + 0x34) = edi;
    PUSH32(esp, 0); sub_004A8AAC(); /* call 0x004A8AAC */

loc_004AB96B: ;
    edi = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_004AB9BC; /* jge: greater or equal (signed >=) */

loc_004AB971: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004AB976: ;
    MEM32(ebx + 0x34) = eax;

loc_004AB979: ;
    esi = MEM32(ebp + -4);

loc_004AB97C: ;
    if (TEST_S(edi, edi)) goto loc_004ABB0E; /* jl: less (signed <) */

loc_004AB984: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13B4;
    ecx = MEM32(eax);
    if (TEST_Z(LO8(ecx), 8)) goto loc_004ABAE7; /* je: equal / zero */

loc_004AB99C: ;
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_004ABAE7; /* je: equal / zero */

loc_004AB9A5: ;
    if (CMP_NE(MEM32(ebx + 0x10), 5)) goto loc_004ABAE7; /* jne: not equal / not zero */

loc_004AB9AF: ;
    MEM32(eax) = MEM32(eax) & 0xFFFFFFF7u;
    edi = 0x1500F1;
    goto loc_004ABAE9;

loc_004AB9BC: ;
    if (CMP_EQ(MEM32(ebx + 0x18), 0)) goto loc_004AB9CA; /* je: equal / zero */

loc_004AB9C2: ;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004AB9CA: ;
    eax = MEM32(ebx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_004ABA8D; /* je: equal / zero */

loc_004AB9D5: ;
    PUSH32(esp, MEM32(eax));
    ecx = esi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AB9DE: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_004AB979; /* je: equal / zero */

loc_004AB9E4: ;
    if (CMP_NE(edi, 0x1500F0)) goto loc_004ABA29; /* jne: not equal / not zero */

loc_004AB9EC: ;
    ecx = MEM32(ebp + -4);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004ABA0D: ;
    (void)0; /* cmp MEM32(ebp + -8), esi - flags set for next jcc */
    edi = eax;
    if (CMP_EQ(MEM32(ebp + -8), esi)) goto loc_004ABA1D; /* je: equal / zero */

loc_004ABA14: ;
    if (CMP_EQ(MEM32(ebp + -12), 0xC8)) goto loc_004ABA35; /* je: equal / zero */

loc_004ABA1D: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004ABA22: ;
    edi = 0x80150007u;
    goto loc_004ABA32;

loc_004ABA29: ;
    if (CMP_GE(edi & edi, 0)) goto loc_004ABA39; /* jge: greater or equal (signed >=) */

loc_004ABA2D: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004ABA32: ;
    MEM32(ebx + 0x34) = eax;

loc_004ABA35: ;
    if (TEST_S(edi, edi)) goto loc_004ABA6A; /* jl: less (signed <) */

loc_004ABA39: ;
    PUSH32(esp, MEM32(ebp + -16));
    esi = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + -20));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004AB3E8(); /* call 0x004AB3E8 */

loc_004ABA4C: ;
    if (TEST_S(eax, eax)) goto loc_004ABA62; /* jl: less (signed <) */

loc_004ABA50: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    eax = esi + eax * 8 + 0x13B4;
    MEM32(eax) = MEM32(eax) | 8;
    goto loc_004ABA6A;

loc_004ABA62: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004ABA67: ;
    MEM32(ebx + 0x34) = eax;

loc_004ABA6A: ;
    eax = MEM32(ebx + 0x18);
    if (TEST_Z(eax, eax)) goto loc_004ABA8A; /* je: equal / zero */

loc_004ABA71: ;
    PUSH32(esp, MEM32(eax));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004ABA7B: ;
    PUSH32(esp, MEM32(ebx + 0x18));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004ABA86: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) & 0;

loc_004ABA8A: ;
    esi = MEM32(ebp + -4);

loc_004ABA8D: ;
    if (CMP_NE(MEM32(ebx + 0x10), 6)) goto loc_004ABAB7; /* jne: not equal / not zero */

loc_004ABA93: ;
    PUSH32(esp, MEM32(ebx + 8));
    MEM32(ebx + 0x10) = 8;
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004ABAA2: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    esi = esi + eax * 8 + 0x13B4;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFF7u;
    goto loc_004AB947;

loc_004ABAB7: ;
    if (CMP_EQ(MEM32(ebx + 0x34), 0)) goto loc_004ABACF; /* je: equal / zero */

loc_004ABABD: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004ABAC2: ;
    eax = eax - MEM32(ebx + 0x34);
    if (CMP_B(eax, 0x7530)) goto loc_004ABADD; /* jb: below (unsigned <) */

loc_004ABACC: ;
    esi = MEM32(ebp + -4);

loc_004ABACF: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004A8AAC(); /* call 0x004A8AAC */

loc_004ABAD7: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004ABB0B; /* jl: less (signed <) */

loc_004ABADD: ;
    esi = MEM32(ebp + -4);

loc_004ABAE0: ;
    edi = 0; /* xor self */
    goto loc_004AB97C;

loc_004ABAE7: ;
    edi = 0; /* xor self */

loc_004ABAE9: ;
    eax = MEM32(ebx + 0x14);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx + 0x10), 5 - flags set for next jcc */
    eax = eax + eax * 8;
    SET_LO8(ecx, (CMP_NE(MEM32(ebx + 0x10), 5)) ? 1 : 0); /* setne */
    eax = esi + eax * 8 + 0x13B4;
    ecx = ecx << 4;
    ecx = ecx ^ MEM32(eax);
    ecx = ecx & 0x10;
    MEM32(eax) = MEM32(eax) ^ ecx;
    goto loc_004ABB16;

loc_004ABB0B: ;
    esi = MEM32(ebp + -4);

loc_004ABB0E: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004A88A9(); /* call 0x004A88A9 */

loc_004ABB16: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ABB1F
 * Original: 0x004ABB1F - 0x004ABB43 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ABB1F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ABB1F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x64);
    edi = ecx;
    PUSH32(esp, 0); sub_004B5395(); /* call 0x004B5395 */

loc_004ABB2D: ;
    esi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_NE(eax, ebx)) { sub_004ABB43(); return; } /* jne: not equal / not zero */

loc_004ABB39: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_004ABBE7(); return; /* tail jmp 0x004ABBE7 */

}

/**
 * sub_004ABBED
 * Original: 0x004ABBED - 0x004ABDBB (462 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ABBED(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004ABBED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -12) = edi;
    MEM32(ebx) = edi;
    PUSH32(esp, 0); sub_004ABB1F(); /* call 0x004ABB1F */

loc_004ABC15: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    esi = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    if (CMP_L(eax, edi)) goto loc_004ABD9D; /* jl: less (signed <) */

loc_004ABC23: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & edi;
    edx = MEM32(ebp + -4);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & edi;
    MEM32(esi + 0x3C) = eax;
    eax = eax + 0xC;
    MEM32(ebp + -20) = eax;
    eax = edx + 0x1584;
    edx = edx + 0x13B4;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + 8) = edx;

loc_004ABC4A: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x3C);
    eax = eax + ecx;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    if ((ecx == 0)) goto loc_004ABD3B; /* je: equal / zero */

loc_004ABC5D: ;
    if (TEST_NZ(MEM8(eax + 8), 3)) goto loc_004ABD3B; /* jne: not equal / not zero */

loc_004ABC67: ;
    if (TEST_NZ(MEM8(edx), 1)) goto loc_004ABD3B; /* jne: not equal / not zero */

loc_004ABC70: ;
    ebx = edx + -12;
    PUSH32(esp, 0x12);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ebp + 0xC);
    edi = MEM32(eax + ecx);
    MEM32(ebx) = edi;
    eax = MEM32(eax + ecx + 4);
    MEM32(edx) = MEM32(edx) | 2;
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    PUSH32(esp, 0x2033);
    PUSH32(esp, 0x2D80);
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0); sub_004B5395(); /* call 0x004B5395 */

loc_004ABCA6: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x2C) = eax;
    if (TEST_Z(eax, eax)) goto loc_004ABD96; /* je: equal / zero */

loc_004ABCB1: ;
    ecx = MEM32(esi + 0x3C);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(edi + ecx);
    MEM32(eax) = edx;
    ecx = MEM32(edi + ecx + 4);
    PUSH32(esp, 0x2034);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0xFD0);
    PUSH32(esp, 0); sub_004B5395(); /* call 0x004B5395 */

loc_004ABCD5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x30) = eax;
    if (TEST_Z(eax, eax)) goto loc_004ABD96; /* je: equal / zero */

loc_004ABCE0: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(edi + ecx);
    MEM32(eax) = edx;
    ecx = MEM32(edi + ecx + 4);
    PUSH32(esp, 0x8092);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x1988);
    PUSH32(esp, 0); sub_004B5395(); /* call 0x004B5395 */

loc_004ABD01: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x38) = eax;
    if (TEST_Z(eax, eax)) goto loc_004ABD96; /* je: equal / zero */

loc_004ABD0C: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = MEM8(eax) | 0x80;
    eax = MEM32(ebp + -16);
    MEM32(eax) = 1;
    eax = MEM32(ebp + -20);
    ecx = eax + 1;

loc_004ABD21: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004ABD21; /* jne: not equal / not zero */

loc_004ABD28: ;
    ebx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + -12);
    edx = MEM32(ebp + 8);
    eax = eax - ecx;
    eax = eax + 0x99;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) + eax;

loc_004ABD3B: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x70;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0xB0;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 0x70;
    edx = edx + 0x48;
    (void)0; /* cmp MEM32(ebp + 0xC), 0x1C0 - flags set for next jcc */
    MEM32(ebp + 8) = edx;
    if (CMP_B(MEM32(ebp + 0xC), 0x1C0)) goto loc_004ABC4A; /* jb: below (unsigned <) */

loc_004ABD5D: ;
    if (CMP_BE(edi & edi, 0)) goto loc_004ABDB0; /* jbe: below or equal (unsigned <=) */

loc_004ABD61: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, 0); sub_004B5390(); /* call 0x004B5390 */

loc_004ABD6E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x40) = eax;
    if (TEST_Z(eax, eax)) goto loc_004ABD96; /* je: equal / zero */

loc_004ABD75: ;
    ecx = MEM32(ebp + -4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x128C);
    eax = edi + 0x100;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0); sub_004B5390(); /* call 0x004B5390 */

loc_004ABD8F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x48) = eax;
    if (TEST_NZ(eax, eax)) goto loc_004ABDB7; /* jne: not equal / not zero */

loc_004ABD96: ;
    MEM32(ebp + -8) = 0x8007000Eu;

loc_004ABD9D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A88A9(); /* call 0x004A88A9 */

loc_004ABDA6: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_004ABDB0: ;
    MEM32(esi + 0x10) = 0xC;

loc_004ABDB7: ;
    MEM32(ebx) = esi;
    goto loc_004ABDA6;

}

/**
 * sub_004ABDBB
 * Original: 0x004ABDBB - 0x004ABDEA (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ABDBB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004ABDBB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x138;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = MEM32(eax) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1F);
    esi = ecx;
    PUSH32(esp, 0x1C);
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); sub_004B5395(); /* call 0x004B5395 */

loc_004ABDDA: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) { sub_004ABDEA(); return; } /* jne: not equal / not zero */

loc_004ABDE0: ;
    esi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_004AC009(); return; /* tail jmp 0x004AC009 */

}

/**
 * sub_004AC046
 * Original: 0x004AC046 - 0x004AC063 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AC046(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AC046: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(ebx, esi)) { sub_004AC063(); return; } /* jne: not equal / not zero */

loc_004AC059: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AC39C(); return; /* tail jmp 0x004AC39C */

}

/**
 * sub_004AC3A2
 * Original: 0x004AC3A2 - 0x004AC3BA (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AC3A2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AC3A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    if (CMP_NE(ebx, esi)) { sub_004AC3BA(); return; } /* jne: not equal / not zero */

loc_004AC3B0: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AC458(); return; /* tail jmp 0x004AC458 */

}

/**
 * sub_004AC45E
 * Original: 0x004AC45E - 0x004AC473 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AC45E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AC45E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    if (CMP_NE(edi, esi)) { sub_004AC473(); return; } /* jne: not equal / not zero */

loc_004AC46C: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AC4D9(); return; /* tail jmp 0x004AC4D9 */

}

/**
 * sub_004AC4DF
 * Original: 0x004AC4DF - 0x004AC50E (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AC4DF(void)
{
    int _flags = 0; /* fallback flag var */

loc_004AC4DF: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB5);
    eax = eax + ecx;
    edx = 0; /* xor self */
    PUSH32(esp, 0x14);
    MEM8(eax + 0x18A8) = LO8(edx);
    eax = eax + 0x18B1;
    POP32(esp, ecx);

loc_004AC4FB: ;
    MEM32(eax + -8) = edx;
    MEM32(eax + -4) = edx;
    MEM8(eax) = LO8(edx);
    eax = eax + 9;
    ecx--;
    if ((ecx != 0)) goto loc_004AC4FB; /* jne: not equal / not zero */

loc_004AC509: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AC50E
 * Original: 0x004AC50E - 0x004AC5B4 (166 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AC50E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AC50E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = 0; /* xor self */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xB5);
    eax = ecx;
    ecx = edi + eax;
    edx = ecx + 0x18A9;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = edx;

loc_004AC531: ;
    edx = MEM32(ebp + 8);
    edx = MEM32(edx);
    if (CMP_NE(edx, MEM32(ebp + 0xC))) goto loc_004AC546; /* jne: not equal / not zero */

loc_004AC53B: ;
    edx = MEM32(ebp + 8);
    edx = MEM32(edx + 4);
    if (CMP_EQ(edx, MEM32(ebp + 0x10))) goto loc_004AC550; /* je: equal / zero */

loc_004AC546: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 9;
    esi++;
    if (CMP_B(esi, 0x14)) goto loc_004AC531; /* jb: below (unsigned <) */

loc_004AC550: ;
    if (CMP_NE(esi, 0x14)) goto loc_004AC598; /* jne: not equal / not zero */

loc_004AC555: ;
    esi = ZX8(MEM8(ecx + 0x18A8));
    edx = edi + esi * 8;
    edx = edx + esi;
    eax = eax + edx;
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0x18A9) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0x18AD) = edx;
    MEM8(eax + 0x18B1) = 0;
    SET_LO8(eax, MEM8(ecx + 0x18A8));
    SET_LO8(eax, LO8(eax) + 1);
    eax = ZX8(LO8(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x14);
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = MEM32(ebp + -4);
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM8(ecx + 0x18A8) = LO8(edx);

loc_004AC598: ;
    if (CMP_AE(esi, ebx)) { sub_004AC5B4(); return; } /* jae: above or equal (unsigned >=) */

loc_004AC59A: ;
    ecx = MEM32(ebp + 0x18);
    ebx = 0; /* xor self */
    ebx++;
    ebx = ebx << LO8(ecx);
    edx = edi + esi * 8;
    edx = edx + esi;
    if (TEST_Z(MEM8(edx + eax + 0x18B1), LO8(ebx))) { sub_004AC5B4(); return; } /* je: equal / zero */

loc_004AC5B0: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AC5CC(); return; /* tail jmp 0x004AC5CC */

}

/**
 * sub_004AC5D3
 * Original: 0x004AC5D3 - 0x004AC5F2 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AC5D3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AC5D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(eax, edi)) { sub_004AC5F2(); return; } /* jne: not equal / not zero */

loc_004AC5EB: ;
    ebx = 0x1500F0;
    g_seh_ebp = ebp; sub_004AC663(); return; /* tail jmp 0x004AC663 */

}

/**
 * sub_004AC6A8
 * Original: 0x004AC6A8 - 0x004AC751 (169 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AC6A8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AC6A8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x8036;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    edi = ecx;
    PUSH32(esp, 0); sub_004B5395(); /* call 0x004B5395 */

loc_004AC6C2: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_004AC711; /* je: equal / zero */

loc_004AC6CB: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004AC6D3: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x10);
    MEM32(eax) = 0x4AC5D3;
    eax = MEM32(esi);
    MEM32(eax + 4) = 0x4AC66C;
    eax = MEM32(esi);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    if (CMP_BE(MEM32(ebp + 0xC), 0)) goto loc_004AC73B; /* jbe: below or equal (unsigned <=) */

loc_004AC6F8: ;
    PUSH32(esp, 0x37);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, 0); sub_004B5395(); /* call 0x004B5395 */

loc_004AC704: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esi);
    if (CMP_NE(MEM32(eax + 0x14), 0)) goto loc_004AC73B; /* jne: not equal / not zero */

loc_004AC711: ;
    eax = MEM32(esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = 0x8007000Eu;
    if (TEST_Z(eax, eax)) goto loc_004AC747; /* je: equal / zero */

loc_004AC71E: ;
    eax = MEM32(eax + 0x14);
    if (TEST_Z(eax, eax)) goto loc_004AC72F; /* je: equal / zero */

loc_004AC725: ;
    PUSH32(esp, 0x37);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004AC72F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004AC739: ;
    goto loc_004AC747;

loc_004AC73B: ;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;

loc_004AC747: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004AC751
 * Original: 0x004AC751 - 0x004AC76D (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AC751(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AC751: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ecx;
    if (CMP_NE(ecx, ebx)) { sub_004AC76D(); return; } /* jne: not equal / not zero */

loc_004AC763: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AC8C2(); return; /* tail jmp 0x004AC8C2 */

}

/**
 * sub_004AC9DA
 * Original: 0x004AC9DA - 0x004ACB5A (384 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AC9DA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AC9DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    MEM32(esi) = 0x4AC9C7;
    MEM32(esi + 4) = 0x4B5327;
    eax = 0; /* xor self */
    ebx = esi + 0x12C;
    edi = ebx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); sub_004B5074(); /* call 0x004B5074 */

loc_004ACA0C: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0x28) = eax;
    if (CMP_L(eax, edi)) goto loc_004ACB28; /* jl: less (signed <) */

loc_004ACA17: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004ACA1F: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x80;
    ecx = MEM32(esi + 0x11C);
    if (CMP_EQ(ecx, edi)) goto loc_004ACA4F; /* je: equal / zero */

loc_004ACA2D: ;
    eax = MEM32(esi + 0x114);
    if (CMP_EQ(eax, edi)) goto loc_004ACA4A; /* je: equal / zero */

loc_004ACA37: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004ACA3F: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0x28) = eax;
    if (CMP_L(eax, edi)) goto loc_004ACB28; /* jl: less (signed <) */

loc_004ACA4A: ;
    MEM32(esi + 0x14) = edi;
    goto loc_004ACA84;

loc_004ACA4F: ;
    eax = MEM32(esi + 0x28);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ecx = MEM32(ebp + -4);
    if (CMP_EQ(eax, edi)) goto loc_004ACA6C; /* je: equal / zero */

loc_004ACA59: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049CBD9(); /* call 0x0049CBD9 */

loc_004ACA63: ;
    MEM32(esi + 0x14) = 1;
    goto loc_004ACA84;

loc_004ACA6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B51E8(); /* call 0x004B51E8 */

loc_004ACA72: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0x28) = eax;
    if (CMP_L(eax, edi)) goto loc_004ACB28; /* jl: less (signed <) */

loc_004ACA7D: ;
    MEM32(esi + 0x14) = 2;

loc_004ACA84: ;
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(esi + 0x30);
    ebx = MEM32(ebp + 0x18);
    edi = esi + 0xA8;
    MEM32(edi) = eax;
    eax = MEM32(esi + 0xB0);
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0xAC) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_004ACAF2; /* je: equal / zero */

loc_004ACAAA: ;
    (void)0; /* cmp MEM32(ebp + 0x14), edx - flags set for next jcc */
    PUSH32(esp, MEM32(esi + 0x18));
    if (CMP_EQ(MEM32(ebp + 0x14), edx)) goto loc_004ACAD0; /* je: equal / zero */

loc_004ACAB2: ;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004B4936(); /* call 0x004B4936 */

loc_004ACACB: ;
    MEM32(ebp + 0x28) = eax;
    goto loc_004ACB02;

loc_004ACAD0: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004B475D(); /* call 0x004B475D */

loc_004ACAF0: ;
    goto loc_004ACACB;

loc_004ACAF2: ;
    if (CMP_NE(MEM32(esi + 0x11C), 0)) goto loc_004ACB02; /* jne: not equal / not zero */

loc_004ACAFB: ;
    MEM32(ebp + 0x28) = 0x80070057u;

loc_004ACB02: ;
    if (CMP_L(MEM32(ebp + 0x28), 0)) goto loc_004ACB28; /* jl: less (signed <) */

loc_004ACB08: ;
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) goto loc_004ACB48; /* je: equal / zero */

loc_004ACB0E: ;
    if (TEST_Z(ebx, ebx)) goto loc_004ACB48; /* je: equal / zero */

loc_004ACB12: ;
    ecx = MEM32(edi);
    eax = ecx + ebx;
    (void)0; /* cmp eax, MEM32(esi + 0xB4) - flags set for next jcc */
    MEM32(edi) = eax;
    if (CMP_BE(eax, MEM32(esi + 0xB4))) goto loc_004ACB33; /* jbe: below or equal (unsigned <=) */

loc_004ACB21: ;
    MEM32(ebp + 0x28) = 0x8007007Au;

loc_004ACB28: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004ACB31: ;
    goto loc_004ACB50;

loc_004ACB33: ;
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = eax + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004ACB45: ;
    esp = esp + 0xC;

loc_004ACB48: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004ACB4D: ;
    MEM32(esi + 0x20) = eax;

loc_004ACB50: ;
    eax = MEM32(ebp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_004ACBDA
 * Original: 0x004ACBDA - 0x004ACBED (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ACBDA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004ACBDA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (TEST_NZ(ecx, ecx)) { sub_004ACBED(); return; } /* jne: not equal / not zero */

loc_004ACBE3: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004ACC74(); return; /* tail jmp 0x004ACC74 */

}

/**
 * sub_004ACDC5
 * Original: 0x004ACDC5 - 0x004ACFB8 (499 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ACDC5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004ACDC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004ACDDA: ;
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_004ACFAF; /* je: equal / zero */

loc_004ACDE4: ;
    if (CMP_L(eax, edi)) goto loc_004ACF9F; /* jl: less (signed <) */

loc_004ACDEA: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5577(); /* call 0x004B5577 */

loc_004ACDFB: ;
    if (CMP_L(eax, edi)) goto loc_004ACF9F; /* jl: less (signed <) */

loc_004ACE03: ;
    if (CMP_EQ(MEM32(ebp + 8), edi)) goto loc_004ACEA6; /* je: equal / zero */

loc_004ACE0C: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B4E5D(); /* call 0x004B4E5D */

loc_004ACE1B: ;
    if (CMP_L(eax, edi)) goto loc_004ACF9F; /* jl: less (signed <) */

loc_004ACE23: ;
    if (CMP_EQ(MEM32(ebp + -4), edi)) goto loc_004ACE87; /* je: equal / zero */

loc_004ACE28: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x108), _icall_esp); /* indirect call */
    }

loc_004ACE31: ;
    if (CMP_L(eax, edi)) goto loc_004ACF9F; /* jl: less (signed <) */

loc_004ACE39: ;
    if (CMP_NE(eax, 0x15FFFE)) goto loc_004ACE74; /* jne: not equal / not zero */

loc_004ACE40: ;
    edi = esi + 0x80;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_0048D720(); /* call 0x0048D720 */

loc_004ACE4D: ;
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B51E8(); /* call 0x004B51E8 */

loc_004ACE58: ;
    if (TEST_S(eax, eax)) goto loc_004ACF9F; /* jl: less (signed <) */

loc_004ACE60: ;
    MEM32(esi + 0x14) = 2;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004ACE6C: ;
    MEM32(esi + 0x20) = eax;
    goto loc_004ACFAF;

loc_004ACE74: ;
    edx = MEM32(esi + 0xF0);
    ecx = esi + 0xD8;
    MEM32(ecx) = MEM32(ecx) + edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) + edi + _cf; /* adc */
    goto loc_004ACECB;

loc_004ACE87: ;
    if (TEST_NZ(MEM8(esi + 0xF4), 3)) goto loc_004ACECB; /* jne: not equal / not zero */

loc_004ACE90: ;
    edx = MEM32(ebp + 8);
    ecx = esi + 0xD8;
    MEM32(ecx) = MEM32(ecx) + edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) + edi + _cf; /* adc */
    MEM32(esi + 0xF0) = MEM32(esi + 0xF0) + edx;
    goto loc_004ACECB;

loc_004ACEA6: ;
    if (TEST_Z(MEM8(esi + 0x1A), 0x80)) goto loc_004ACEC6; /* je: equal / zero */

loc_004ACEAC: ;
    ecx = MEM32(esi + 0xD8);
    MEM32(esi + 0xD0) = ecx;
    ecx = MEM32(esi + 0xDC);
    MEM32(esi + 0xD4) = ecx;
    goto loc_004ACECB;

loc_004ACEC6: ;
    eax = 0x80072746u;

loc_004ACECB: ;
    if (CMP_L(eax, edi)) goto loc_004ACF9F; /* jl: less (signed <) */

loc_004ACED3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x110), _icall_esp); /* indirect call */
    }

loc_004ACEDC: ;
    if (CMP_L(eax, edi)) goto loc_004ACF9F; /* jl: less (signed <) */

loc_004ACEE4: ;
    if (CMP_NE(eax, edi)) goto loc_004ACF22; /* jne: not equal / not zero */

loc_004ACEE6: ;
    ecx = MEM32(esi + 0x124);
    if (CMP_EQ(ecx, edi)) goto loc_004ACF16; /* je: equal / zero */

loc_004ACEF0: ;
    eax = MEM32(esi + 0x114);
    if (CMP_EQ(eax, edi)) goto loc_004ACF0A; /* je: equal / zero */

loc_004ACEFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004ACF02: ;
    if (CMP_L(eax, edi)) goto loc_004ACF9F; /* jl: less (signed <) */

loc_004ACF0A: ;
    MEM32(esi + 0x14) = 6;
    goto loc_004ACFAF;

loc_004ACF16: ;
    MEM32(esi + 0x14) = 7;
    goto loc_004ACFAF;

loc_004ACF22: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x10C), _icall_esp); /* indirect call */
    }

loc_004ACF2B: ;
    if (TEST_Z(eax, eax)) goto loc_004ACF53; /* je: equal / zero */

loc_004ACF2F: ;
    eax = MEM32(esi + 0x114);
    if (CMP_EQ(eax, edi)) goto loc_004ACF4A; /* je: equal / zero */

loc_004ACF39: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x120));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004ACF46: ;
    if (CMP_L(eax, edi)) goto loc_004ACF9F; /* jl: less (signed <) */

loc_004ACF4A: ;
    MEM32(esi + 0x14) = 5;
    goto loc_004ACFAF;

loc_004ACF53: ;
    ecx = MEM32(esi + 0xF0);
    eax = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xB4);
    eax = eax + ecx;
    edx = edx - ecx;
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0xAC) = eax;
    PUSH32(esp, edi);
    eax = esi + 0xA8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    ecx = ebx;
    MEM32(eax) = edx;
    PUSH32(esp, 0); sub_004B57FC(); /* call 0x004B57FC */

loc_004ACF8F: ;
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004ACF9B: ;
    if (CMP_GE(eax, edi)) goto loc_004ACFAB; /* jge: greater or equal (signed >=) */

loc_004ACF9F: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 8;
    goto loc_004ACFAF;

loc_004ACFAB: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;

loc_004ACFAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AD08D
 * Original: 0x004AD08D - 0x004AD0B2 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD08D(void)
{
    uint32_t ebp;

loc_004AD08D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004AC9DA(); /* call 0x004AC9DA */

loc_004AD0AE: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004AD217
 * Original: 0x004AD217 - 0x004AD238 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD217(void)
{
    int _cf = 0; /* carry flag */

loc_004AD217: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    edx++;
    (void)0; /* cmp edx, MEM32(eax + 0x14) - flags set for next jcc */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = (uint32_t)(-(int32_t)edx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(eax + 0x2C));
    PUSH32(esp, MEM32(eax + 0x24));
    PUSH32(esp, MEM32(eax + 0x30));
    PUSH32(esp, 0); sub_004B4B77(); /* call 0x004B4B77 */

loc_004AD235: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AD238
 * Original: 0x004AD238 - 0x004AD3A7 (367 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD238(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004AD238: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    MEM32(esi) = 0x4AD204;
    MEM32(esi + 4) = 0x4B5327;
    eax = 0; /* xor self */
    ebx = esi + 0x12C;
    edi = ebx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); sub_004B5074(); /* call 0x004B5074 */

loc_004AD26A: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0x1C) = eax;
    if (CMP_L(eax, edi)) goto loc_004AD375; /* jl: less (signed <) */

loc_004AD275: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004AD27D: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) & 0x7F;
    ecx = MEM32(esi + 0x114);
    if (CMP_EQ(ecx, edi)) goto loc_004AD2AD; /* je: equal / zero */

loc_004AD28B: ;
    eax = MEM32(esi + 0x10C);
    if (CMP_EQ(eax, edi)) goto loc_004AD2A8; /* je: equal / zero */

loc_004AD295: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004AD29D: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0x1C) = eax;
    if (CMP_L(eax, edi)) goto loc_004AD375; /* jl: less (signed <) */

loc_004AD2A8: ;
    MEM32(esi + 0x14) = edi;
    goto loc_004AD2E2;

loc_004AD2AD: ;
    eax = MEM32(esi + 0x28);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ecx = MEM32(ebp + -4);
    if (CMP_EQ(eax, edi)) goto loc_004AD2CA; /* je: equal / zero */

loc_004AD2B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049CBD9(); /* call 0x0049CBD9 */

loc_004AD2C1: ;
    MEM32(esi + 0x14) = 1;
    goto loc_004AD2E2;

loc_004AD2CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B51E8(); /* call 0x004B51E8 */

loc_004AD2D0: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0x1C) = eax;
    if (CMP_L(eax, edi)) goto loc_004AD375; /* jl: less (signed <) */

loc_004AD2DB: ;
    MEM32(esi + 0x14) = 2;

loc_004AD2E2: ;
    (void)0; /* cmp MEM32(ebp + 0x14), 0 - flags set for next jcc */
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(esi + 0xE8);
    edx = MEM32(esi + 0xEC);
    edi = esi + 0xA8;
    MEM32(edi) = eax;
    eax = MEM32(esi + 0xB0);
    MEM32(esi + 0xAC) = eax;
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) goto loc_004AD314; /* je: equal / zero */

loc_004AD30E: ;
    ecx = ecx + MEM32(ebp + 0x18);
    edx = edx + 0 + _cf; /* adc */

loc_004AD314: ;
    ebx = MEM32(esi + 0x30);
    if (TEST_Z(ebx, ebx)) goto loc_004AD33C; /* je: equal / zero */

loc_004AD31B: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004B4936(); /* call 0x004B4936 */

loc_004AD337: ;
    MEM32(ebp + 0x1C) = eax;
    goto loc_004AD34C;

loc_004AD33C: ;
    if (CMP_NE(MEM32(esi + 0x114), 0)) goto loc_004AD34C; /* jne: not equal / not zero */

loc_004AD345: ;
    MEM32(ebp + 0x1C) = 0x80070057u;

loc_004AD34C: ;
    if (CMP_L(MEM32(ebp + 0x1C), 0)) goto loc_004AD375; /* jl: less (signed <) */

loc_004AD352: ;
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) goto loc_004AD395; /* je: equal / zero */

loc_004AD358: ;
    edx = MEM32(ebp + 0x18);
    if (TEST_Z(edx, edx)) goto loc_004AD395; /* je: equal / zero */

loc_004AD35F: ;
    ecx = MEM32(edi);
    eax = ecx + edx;
    (void)0; /* cmp eax, MEM32(esi + 0xB4) - flags set for next jcc */
    MEM32(edi) = eax;
    if (CMP_BE(eax, MEM32(esi + 0xB4))) goto loc_004AD380; /* jbe: below or equal (unsigned <=) */

loc_004AD36E: ;
    MEM32(ebp + 0x1C) = 0x8007007Au;

loc_004AD375: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004AD37E: ;
    goto loc_004AD39D;

loc_004AD380: ;
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = eax + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004AD392: ;
    esp = esp + 0xC;

loc_004AD395: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004AD39A: ;
    MEM32(esi + 0x20) = eax;

loc_004AD39D: ;
    eax = MEM32(ebp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004AD440
 * Original: 0x004AD440 - 0x004AD4D1 (145 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004AD440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x3C;
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AD454: ;
    if (TEST_Z(eax, eax)) goto loc_004AD4C8; /* je: equal / zero */

loc_004AD458: ;
    if (TEST_S(eax, eax)) goto loc_004AD46C; /* jl: less (signed <) */

loc_004AD45A: ;
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5542(); /* call 0x004B5542 */

loc_004AD468: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004AD471; /* jge: greater or equal (signed >=) */

loc_004AD46C: ;
    MEM32(esi + 0xC) = eax;
    goto loc_004AD4BE;

loc_004AD471: ;
    edi = MEM32(ebp + 8);
    edx = MEM32(esi + 0xA8);
    eax = esi + 0xD8;
    MEM32(eax) = MEM32(eax) + edi;
    MEM32(eax + 4) = MEM32(eax + 4) + 0 + _cf; /* adc */
    eax = edx + 3;
    eax = eax & 0xFFFFFFFCu;
    if (CMP_EQ(eax, edx)) goto loc_004AD4AC; /* je: equal / zero */

loc_004AD490: ;
    ecx = MEM32(esi + 0xAC);
    PUSH32(esp, edi);
    ecx = ecx + edx;
    edi = ecx;
    edi = edi - edx;
    edi = edi + eax;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004AD4A6: ;
    edi = MEM32(ebp + 8);
    esp = esp + 0xC;

loc_004AD4AC: ;
    eax = MEM32(esi + 0xB0);
    MEM32(esi + 0xA8) = MEM32(esi + 0xA8) + edi;
    MEM32(esi + 0xAC) = eax;

loc_004AD4BE: ;
    MEM32(esi + 0x14C) = 1;

loc_004AD4C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AD518
 * Original: 0x004AD518 - 0x004AD52B (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD518(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AD518: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (TEST_NZ(ecx, ecx)) { sub_004AD52B(); return; } /* jne: not equal / not zero */

loc_004AD521: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AD5B2(); return; /* tail jmp 0x004AD5B2 */

}

/**
 * sub_004AD5B6
 * Original: 0x004AD5B6 - 0x004AD5C7 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD5B6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AD5B6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (TEST_NZ(ecx, ecx)) { sub_004AD5C7(); return; } /* jne: not equal / not zero */

loc_004AD5BD: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AD64E(); return; /* tail jmp 0x004AD64E */

}

/**
 * sub_004AD6B8
 * Original: 0x004AD6B8 - 0x004AD877 (447 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD6B8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004AD6B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AD6CE: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_004AD86E; /* je: equal / zero */

loc_004AD6D8: ;
    if (CMP_L(eax, ebx)) goto loc_004AD85B; /* jl: less (signed <) */

loc_004AD6DE: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B5577(); /* call 0x004B5577 */

loc_004AD6ED: ;
    if (CMP_L(eax, ebx)) goto loc_004AD85B; /* jl: less (signed <) */

loc_004AD6F5: ;
    eax = MEM32(esi + 0x18);
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    edx = MEM32(ebp + 8);
    if (TEST_Z(LO8(eax), 2)) goto loc_004AD70F; /* je: equal / zero */

loc_004AD6FF: ;
    ecx = esi + 0xF4;
    edx = edx - MEM32(ecx);
    eax = eax & 0xFFFFFFFDu;
    MEM32(ecx) = ebx;
    MEM32(esi + 0x18) = eax;

loc_004AD70F: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0xE0;
    MEM32(eax) = MEM32(eax) + edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(eax + 4) = MEM32(eax + 4) + ebx + _cf; /* adc */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x104), _icall_esp); /* indirect call */
    }

loc_004AD724: ;
    if (CMP_L(eax, ebx)) goto loc_004AD85B; /* jl: less (signed <) */

loc_004AD72C: ;
    if (CMP_NE(eax, ebx)) goto loc_004AD7E9; /* jne: not equal / not zero */

loc_004AD732: ;
    edi = 0; /* xor self */
    edi++;
    if (TEST_NZ(MEM8(esi + 0x1A), 0x10)) goto loc_004AD740; /* jne: not equal / not zero */

loc_004AD73B: ;
    if (CMP_NE(MEM8(esi + 0x34), LO8(ebx))) goto loc_004AD74C; /* jne: not equal / not zero */

loc_004AD740: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x80));
    PUSH32(esp, 0); sub_0048D72B(); /* call 0x0048D72B */

loc_004AD74C: ;
    eax = MEM32(esi + 0xB0);
    ecx = MEM32(esi + 0xB4);
    MEM32(esi + 0xAC) = eax;
    eax = esi + 0xA8;
    MEM32(eax) = ecx;
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    PUSH32(esp, 0); sub_004B57FC(); /* call 0x004B57FC */

loc_004AD77E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004AD78B: ;
    if (CMP_L(eax, ebx)) goto loc_004AD85B; /* jl: less (signed <) */

loc_004AD793: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    eax = MEM32(esi + 0x18);
    (void)0; /* test eax, 0x800000 - flags set for next jcc */
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0xD4) = ebx;
    if (TEST_Z(eax, 0x800000)) goto loc_004AD7C1; /* je: equal / zero */

loc_004AD7B3: ;
    ecx = MEM32(esi + 0xB4);
    MEM32(esi + 0xD0) = ecx;
    goto loc_004AD7C7;

loc_004AD7C1: ;
    MEM32(esi + 0xD0) = ebx;

loc_004AD7C7: ;
    eax = eax & 0x400000;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax + 5;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = edi;
    MEM32(esi + 0x14) = eax;
    goto loc_004AD86E;

loc_004AD7E9: ;
    edx = MEM32(ebp + 8);
    ecx = esi + 0xA8;
    eax = MEM32(ecx);
    if (CMP_AE(edx, eax)) goto loc_004AD831; /* jae: above or equal (unsigned >=) */

loc_004AD7F8: ;
    MEM32(esi + 0xAC) = MEM32(esi + 0xAC) + edx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    edi = 0; /* xor self */
    PUSH32(esp, ebx);
    edi++;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x80));
    eax = eax - edx;
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004B57FC(); /* call 0x004B57FC */

loc_004AD81A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004AD827: ;
    if (CMP_L(eax, ebx)) goto loc_004AD85B; /* jl: less (signed <) */

loc_004AD82B: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;
    goto loc_004AD86E;

loc_004AD831: ;
    eax = MEM32(esi + 0xB0);
    MEM32(esi + 0xAC) = eax;
    MEM32(ecx) = ebx;
    eax = MEM32(esi + 0x10C);
    if (CMP_EQ(eax, ebx)) goto loc_004AD867; /* je: equal / zero */

loc_004AD849: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x118));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004AD857: ;
    if (CMP_GE(eax, ebx)) goto loc_004AD867; /* jge: greater or equal (signed >=) */

loc_004AD85B: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 9;
    goto loc_004AD870;

loc_004AD867: ;
    MEM32(esi + 0x14) = 3;

loc_004AD86E: ;
    eax = 0; /* xor self */

loc_004AD870: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AD877
 * Original: 0x004AD877 - 0x004ADA1A (419 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AD877(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004AD877: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AD88C: ;
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_004ADA11; /* je: equal / zero */

loc_004AD896: ;
    if (CMP_L(eax, edi)) goto loc_004ADA01; /* jl: less (signed <) */

loc_004AD89C: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5577(); /* call 0x004B5577 */

loc_004AD8AD: ;
    if (CMP_L(eax, edi)) goto loc_004ADA01; /* jl: less (signed <) */

loc_004AD8B5: ;
    if (CMP_EQ(MEM32(ebp + 8), edi)) goto loc_004AD919; /* je: equal / zero */

loc_004AD8BA: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B4E5D(); /* call 0x004B4E5D */

loc_004AD8C9: ;
    if (CMP_L(eax, edi)) goto loc_004ADA01; /* jl: less (signed <) */

loc_004AD8D1: ;
    if (CMP_EQ(MEM32(ebp + -4), edi)) goto loc_004AD8FA; /* je: equal / zero */

loc_004AD8D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x108), _icall_esp); /* indirect call */
    }

loc_004AD8DF: ;
    if (CMP_L(eax, edi)) goto loc_004ADA01; /* jl: less (signed <) */

loc_004AD8E7: ;
    edx = MEM32(esi + 0xF0);
    ecx = esi + 0xD8;
    MEM32(ecx) = MEM32(ecx) + edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) + edi + _cf; /* adc */
    goto loc_004AD93E;

loc_004AD8FA: ;
    if (TEST_NZ(MEM8(esi + 0xF4), 3)) goto loc_004AD93E; /* jne: not equal / not zero */

loc_004AD903: ;
    edx = MEM32(ebp + 8);
    ecx = esi + 0xD8;
    MEM32(ecx) = MEM32(ecx) + edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) + edi + _cf; /* adc */
    MEM32(esi + 0xF0) = MEM32(esi + 0xF0) + edx;
    goto loc_004AD93E;

loc_004AD919: ;
    if (TEST_Z(MEM8(esi + 0x1A), 0x80)) goto loc_004AD939; /* je: equal / zero */

loc_004AD91F: ;
    ecx = MEM32(esi + 0xD8);
    MEM32(esi + 0xD0) = ecx;
    ecx = MEM32(esi + 0xDC);
    MEM32(esi + 0xD4) = ecx;
    goto loc_004AD93E;

loc_004AD939: ;
    eax = 0x80072746u;

loc_004AD93E: ;
    if (CMP_L(eax, edi)) goto loc_004ADA01; /* jl: less (signed <) */

loc_004AD946: ;
    if (TEST_NZ(MEM8(esi + 0xF4), 3)) goto loc_004AD9B5; /* jne: not equal / not zero */

loc_004AD94F: ;
    eax = esi + 0xD8;
    ecx = MEM32(eax + 4);
    if (CMP_A(ecx, MEM32(esi + 0xD4))) goto loc_004AD976; /* ja: above (unsigned >) */

loc_004AD960: ;
    if (CMP_B(ecx, MEM32(esi + 0xD4))) goto loc_004AD96C; /* jb: below (unsigned <) */

loc_004AD962: ;
    ecx = MEM32(eax);
    if (CMP_AE(ecx, MEM32(esi + 0xD0))) goto loc_004AD976; /* jae: above or equal (unsigned >=) */

loc_004AD96C: ;
    eax = MEM32(eax);
    if (CMP_B(eax, MEM32(esi + 0xB4))) goto loc_004AD9B5; /* jb: below (unsigned <) */

loc_004AD976: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x80));
    PUSH32(esp, 0); sub_0048D72B(); /* call 0x0048D72B */

loc_004AD983: ;
    eax = MEM32(esi + 0x11C);
    if (CMP_EQ(eax, edi)) goto loc_004AD9AC; /* je: equal / zero */

loc_004AD98D: ;
    edx = MEM32(esi + 0x10C);
    if (CMP_EQ(edx, edi)) goto loc_004AD9A3; /* je: equal / zero */

loc_004AD997: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_004AD99F: ;
    if (CMP_L(eax, edi)) goto loc_004ADA01; /* jl: less (signed <) */

loc_004AD9A3: ;
    MEM32(esi + 0x14) = 8;
    goto loc_004ADA11;

loc_004AD9AC: ;
    MEM32(esi + 0x14) = 9;
    goto loc_004ADA11;

loc_004AD9B5: ;
    ecx = MEM32(esi + 0xF0);
    eax = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xB4);
    eax = eax + ecx;
    edx = edx - ecx;
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    MEM32(esi + 0xAC) = eax;
    PUSH32(esp, edi);
    eax = esi + 0xA8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    ecx = ebx;
    MEM32(eax) = edx;
    PUSH32(esp, 0); sub_004B57FC(); /* call 0x004B57FC */

loc_004AD9F1: ;
    PUSH32(esp, edi);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004AD9FD: ;
    if (CMP_GE(eax, edi)) goto loc_004ADA0D; /* jge: greater or equal (signed >=) */

loc_004ADA01: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 9;
    goto loc_004ADA13;

loc_004ADA0D: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;

loc_004ADA11: ;
    eax = 0; /* xor self */

loc_004ADA13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADA1A
 * Original: 0x004ADA1A - 0x004ADBB3 (409 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADA1A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004ADA1A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004ADA31: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_004ADBAA; /* je: equal / zero */

loc_004ADA3B: ;
    if (CMP_L(eax, ebx)) goto loc_004ADB9A; /* jl: less (signed <) */

loc_004ADA41: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B5577(); /* call 0x004B5577 */

loc_004ADA50: ;
    if (CMP_L(eax, ebx)) goto loc_004ADB9A; /* jl: less (signed <) */

loc_004ADA58: ;
    if (CMP_EQ(MEM32(ebp + 8), ebx)) goto loc_004ADABE; /* je: equal / zero */

loc_004ADA5D: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B4E5D(); /* call 0x004B4E5D */

loc_004ADA6D: ;
    if (CMP_L(eax, ebx)) goto loc_004ADB9A; /* jl: less (signed <) */

loc_004ADA75: ;
    if (CMP_EQ(MEM32(ebp + -8), ebx)) goto loc_004ADA9F; /* je: equal / zero */

loc_004ADA7A: ;
    ecx = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x108), _icall_esp); /* indirect call */
    }

loc_004ADA84: ;
    if (CMP_L(eax, ebx)) goto loc_004ADB9A; /* jl: less (signed <) */

loc_004ADA8C: ;
    edx = MEM32(esi + 0xF0);
    ecx = esi + 0xD8;
    MEM32(ecx) = MEM32(ecx) + edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) + ebx + _cf; /* adc */
    goto loc_004ADAE3;

loc_004ADA9F: ;
    if (TEST_NZ(MEM8(esi + 0xF4), 3)) goto loc_004ADAE3; /* jne: not equal / not zero */

loc_004ADAA8: ;
    edx = MEM32(ebp + 8);
    ecx = esi + 0xD8;
    MEM32(ecx) = MEM32(ecx) + edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) + ebx + _cf; /* adc */
    MEM32(esi + 0xF0) = MEM32(esi + 0xF0) + edx;
    goto loc_004ADAE3;

loc_004ADABE: ;
    if (TEST_Z(MEM8(esi + 0x1A), 0x80)) goto loc_004ADADE; /* je: equal / zero */

loc_004ADAC4: ;
    ecx = MEM32(esi + 0xD8);
    MEM32(esi + 0xD0) = ecx;
    ecx = MEM32(esi + 0xDC);
    MEM32(esi + 0xD4) = ecx;
    goto loc_004ADAE3;

loc_004ADADE: ;
    eax = 0x80072746u;

loc_004ADAE3: ;
    if (CMP_L(eax, ebx)) goto loc_004ADB9A; /* jl: less (signed <) */

loc_004ADAEB: ;
    if (TEST_NZ(MEM8(esi + 0xF4), 3)) goto loc_004ADB4F; /* jne: not equal / not zero */

loc_004ADAF4: ;
    eax = MEM32(esi + 0xDC);
    ecx = MEM32(esi + 0xD4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edx = MEM32(esi + 0xD8);
    edi = MEM32(esi + 0xD0);
    if (CMP_A(eax, ecx)) goto loc_004ADB2E; /* ja: above (unsigned >) */

loc_004ADB10: ;
    if (CMP_B(eax, ecx)) goto loc_004ADB16; /* jb: below (unsigned <) */

loc_004ADB12: ;
    if (CMP_AE(edx, edi)) goto loc_004ADB24; /* jae: above or equal (unsigned >=) */

loc_004ADB16: ;
    ebx = MEM32(esi + 0xD8);
    if (CMP_B(ebx, MEM32(esi + 0xB4))) goto loc_004ADB4D; /* jb: below (unsigned <) */

loc_004ADB24: ;
    if (CMP_B(eax, ecx)) goto loc_004ADB3B; /* jb: below (unsigned <) */

loc_004ADB28: ;
    if (CMP_A(eax, ecx)) goto loc_004ADB2E; /* ja: above (unsigned >) */

loc_004ADB2A: ;
    if (CMP_B(edx, edi)) goto loc_004ADB3B; /* jb: below (unsigned <) */

loc_004ADB2E: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi + 0x80));
    PUSH32(esp, 0); sub_0048D72B(); /* call 0x0048D72B */

loc_004ADB3B: ;
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) | 0x20;
    MEM32(esi + 0x14) = 7;
    eax = 0x15FFFD;
    goto loc_004ADBAC;

loc_004ADB4D: ;
    ebx = 0; /* xor self */

loc_004ADB4F: ;
    ecx = MEM32(esi + 0xF0);
    eax = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xB4);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    eax = eax + ecx;
    PUSH32(esp, ebx);
    MEM32(esi + 0xAC) = eax;
    eax = esi + 0xA8;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x80));
    edx = edx - ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = edx;
    PUSH32(esp, 0); sub_004B57FC(); /* call 0x004B57FC */

loc_004ADB8C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004ADB96: ;
    if (CMP_GE(eax, ebx)) goto loc_004ADBA6; /* jge: greater or equal (signed >=) */

loc_004ADB9A: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = 9;
    goto loc_004ADBAC;

loc_004ADBA6: ;
    MEM8(esi + 0x1B) = MEM8(esi + 0x1B) | 0x20;

loc_004ADBAA: ;
    eax = 0; /* xor self */

loc_004ADBAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ADC46
 * Original: 0x004ADC46 - 0x004ADC62 (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADC46(void)
{

loc_004ADC46: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0); sub_004AD238(); /* call 0x004AD238 */

loc_004ADC5F: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004ADC62
 * Original: 0x004ADC62 - 0x004ADCED (139 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADC62(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004ADC62: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x140;
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004ADC7B: ;
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(ebp + 0x3C);
    MEM32(ebx + 0x148) = eax;
    eax = ebx + 0x104;
    MEM32(esi) = 0x4AD438;
    edi = 0; /* xor self */
    MEM32(ebx + 0x14C) = edi;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    MEM32(eax) = 0x4AD3A7;
    MEM32(eax + 4) = 0x4ACBA9;
    MEM32(eax + 8) = 0x4AD3D3;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edi;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004ADCC4: ;
    esi = MEM32(ebp + 0x38);
    (void)0; /* cmp esi, edi - flags set for next jcc */
    eax = MEM32(ebp + 0x30);
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = edi;
    MEM32(ebx + 0x10) = edi;
    if (CMP_EQ(esi, edi)) { sub_004ADCED(); return; } /* je: equal / zero */

loc_004ADCD7: ;
    eax = esi + 4;
    if (CMP_EQ(MEM32(eax), edi)) { sub_004ADCED(); return; } /* je: equal / zero */

loc_004ADCDE: ;
    edi = ebx + 0x30;
    esi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + 0x38);
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_004ADD04(); return; /* tail jmp 0x004ADD04 */

}

/**
 * sub_004ADD9D
 * Original: 0x004ADD9D - 0x004ADDB2 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADD9D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004ADD9D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(ecx, ecx)) { sub_004ADDB2(); return; } /* jne: not equal / not zero */

loc_004ADDA8: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004ADE84(); return; /* tail jmp 0x004ADE84 */

}

/**
 * sub_004ADEF6
 * Original: 0x004ADEF6 - 0x004ADF0B (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADEF6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ADEF6: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042F03B(); /* call 0x0042F03B */

loc_004ADF01: ;
    if (CMP_NE(MEM16(edi), 0)) { sub_004ADF0B(); return; } /* jne: not equal / not zero */

loc_004ADF07: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004ADF3C(); return; /* tail jmp 0x004ADF3C */

}

/**
 * sub_004ADF52
 * Original: 0x004ADF52 - 0x004ADF69 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ADF52(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004ADF52: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(ecx, esi)) { sub_004ADF69(); return; } /* jne: not equal / not zero */

loc_004ADF5F: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AE02D(); return; /* tail jmp 0x004AE02D */

}

/**
 * sub_004AE1E2
 * Original: 0x004AE1E2 - 0x004AE1F9 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE1E2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AE1E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(ecx, esi)) { sub_004AE1F9(); return; } /* jne: not equal / not zero */

loc_004AE1EF: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AE5B0(); return; /* tail jmp 0x004AE5B0 */

}

/**
 * sub_004AE5C3
 * Original: 0x004AE5C3 - 0x004AE6CB (264 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE5C3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AE5C3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x178), edi - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(MEM32(esi + 0x178), edi)) goto loc_004AE652; /* je: equal / zero */

loc_004AE5DE: ;
    eax = MEM32(esi + 0x164);
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    ecx = MEM32(eax * 4 + 0x651698);
    if (CMP_NE(eax, 4)) goto loc_004AE5F8; /* jne: not equal / not zero */

loc_004AE5F0: ;
    edx = MEM32(esi + 0x17C);
    goto loc_004AE5FA;

loc_004AE5F8: ;
    edx = 0; /* xor self */

loc_004AE5FA: ;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 8));
    eax = ecx;
    PUSH32(esp, 0x7530);
    PUSH32(esp, MEM32(esi + 0x170));
    eax = eax << 3;
    PUSH32(esp, MEM32(esi + 0x168));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x174));
    PUSH32(esp, MEM32(esi + 0x16C));
    PUSH32(esp, MEM32(eax + 0x881DF4));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x881DF0));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004AE63C: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x178) = edi;
    if (CMP_L(eax, edi)) goto loc_004AE6C5; /* jl: less (signed <) */

loc_004AE646: ;
    MEM32(esi + 0x160) = 1;
    goto loc_004AE6C5;

loc_004AE652: ;
    if (CMP_NE(MEM32(esi + 0x160), edi)) goto loc_004AE661; /* jne: not equal / not zero */

loc_004AE65A: ;
    eax = 0x1500F0;
    goto loc_004AE6C5;

loc_004AE661: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AE66B: ;
    if (CMP_EQ(eax, edi)) goto loc_004AE6C4; /* je: equal / zero */

loc_004AE66F: ;
    MEM32(esi + 0x184) = eax;
    if (CMP_L(eax, edi)) goto loc_004AE6C4; /* jl: less (signed <) */

loc_004AE677: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004AE695: ;
    if (CMP_L(eax, edi)) goto loc_004AE6C4; /* jl: less (signed <) */

loc_004AE699: ;
    if (CMP_EQ(MEM32(ebp + -4), edi)) goto loc_004AE6BF; /* je: equal / zero */

loc_004AE69E: ;
    if (CMP_NE(MEM32(ebp + 8), 0xC8)) goto loc_004AE6BF; /* jne: not equal / not zero */

loc_004AE6A7: ;
    if (CMP_NE(eax, 0x159203)) goto loc_004AE6C4; /* jne: not equal / not zero */

loc_004AE6AE: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004BFAA2(); /* call 0x004BFAA2 */

loc_004AE6BD: ;
    goto loc_004AE6C4;

loc_004AE6BF: ;
    eax = 0x8015000Au;

loc_004AE6C4: ;
    POP32(esp, ebx);

loc_004AE6C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE6CB
 * Original: 0x004AE6CB - 0x004AE74F (132 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE6CB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004AE6CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = esi + 0x160;
    ebp = 0; /* xor self */
    (void)0; /* cmp MEM32(edi), ebp - flags set for next jcc */
    ebx = ecx;
    if (CMP_EQ(MEM32(edi), ebp)) goto loc_004AE6EC; /* je: equal / zero */

loc_004AE6E1: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004AE6EA: ;
    MEM32(edi) = ebp;

loc_004AE6EC: ;
    if (CMP_NE(MEM32(esi + 0x164), 4)) goto loc_004AE70B; /* jne: not equal / not zero */

loc_004AE6F5: ;
    edi = esi + 0x17C;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebp)) goto loc_004AE70B; /* je: equal / zero */

loc_004AE701: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004AE709: ;
    MEM32(edi) = ebp;

loc_004AE70B: ;
    edi = esi + 0x168;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebp)) goto loc_004AE723; /* je: equal / zero */

loc_004AE717: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004AE721: ;
    MEM32(edi) = ebp;

loc_004AE723: ;
    edi = esi + 0x16C;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebp)) goto loc_004AE73B; /* je: equal / zero */

loc_004AE72F: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004AE739: ;
    MEM32(edi) = ebp;

loc_004AE73B: ;
    PUSH32(esp, 0x802F);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004AE748: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE74F
 * Original: 0x004AE74F - 0x004AE7EC (157 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE74F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AE74F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    eax = eax - 0;
    if ((eax == 0)) goto loc_004AE793; /* je: equal / zero */

loc_004AE75E: ;
    eax--;
    if ((eax == 0)) goto loc_004AE77A; /* je: equal / zero */

loc_004AE761: ;
    eax--;
    if ((eax == 0)) goto loc_004AE76C; /* je: equal / zero */

loc_004AE764: ;
    eax--;
    eax = 0x80004005u;
    goto loc_004AE7E7;

loc_004AE76C: ;
    MEM32(esi + 0xC) = 3;
    eax = 0x1500F0;
    goto loc_004AE7E7;

loc_004AE77A: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004AE782: ;
    if (TEST_Z(eax, eax)) goto loc_004AE7E7; /* je: equal / zero */

loc_004AE786: ;
    if (TEST_S(eax, eax)) goto loc_004AE7E7; /* jl: less (signed <) */

loc_004AE788: ;
    MEM32(esi + 0xC) = 2;
    eax = 0; /* xor self */
    goto loc_004AE7E7;

loc_004AE793: ;
    eax = MEM32(esi + -138624);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esi + -138616);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0x14);
    edx = eax + 0x100;
    MEM32(ebp + 8) = edx;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x7530);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x881E30);
    PUSH32(esp, 7);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_004ADD9D(); /* call 0x004ADD9D */

loc_004AE7DC: ;
    if (TEST_S(eax, eax)) goto loc_004AE7E7; /* jl: less (signed <) */

loc_004AE7E0: ;
    MEM32(esi + 0xC) = 1;

loc_004AE7E7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AE806
 * Original: 0x004AE806 - 0x004AE833 (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE806(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AE806: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x802F);
    PUSH32(esp, 0x758);
    ebx = ecx;
    PUSH32(esp, 0); sub_004B5395(); /* call 0x004B5395 */

loc_004AE821: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) { sub_004AE833(); return; } /* jne: not equal / not zero */

loc_004AE827: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_004AE8B5(); return; /* tail jmp 0x004AE8B5 */

}

/**
 * sub_004AE8BE
 * Original: 0x004AE8BE - 0x004AE8D7 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AE8BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AE8BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(ecx, edx)) { sub_004AE8D7(); return; } /* jne: not equal / not zero */

loc_004AE8CD: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AEA94(); return; /* tail jmp 0x004AEA94 */

}

/**
 * sub_004AEA98
 * Original: 0x004AEA98 - 0x004AEAAF (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEA98(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AEA98: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (TEST_NZ(ecx, ecx)) { sub_004AEAAF(); return; } /* jne: not equal / not zero */

loc_004AEAA5: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AEBEE(); return; /* tail jmp 0x004AEBEE */

}

/**
 * sub_004AEBF2
 * Original: 0x004AEBF2 - 0x004AEC0D (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEBF2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AEBF2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = edx;
    if (CMP_NE(ecx, edx)) { sub_004AEC0D(); return; } /* jne: not equal / not zero */

loc_004AEC03: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AED03(); return; /* tail jmp 0x004AED03 */

}

/**
 * sub_004AED07
 * Original: 0x004AED07 - 0x004AED19 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AED07(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AED07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_NZ(ebx, ebx)) { sub_004AED19(); return; } /* jne: not equal / not zero */

loc_004AED12: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004AED98(); return; /* tail jmp 0x004AED98 */

}

/**
 * sub_004AED9D
 * Original: 0x004AED9D - 0x004AEE4A (173 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AED9D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AED9D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0x1C);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(edx, edx)) { sub_004AEE4A(); return; } /* je: equal / zero */

loc_004AEDAD: ;
    MEM32(edx) = MEM32(edx) & 0;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ecx + eax * 4 + 0x10);
    esi = 0xFFFFFF00u;
    eax = eax & esi;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_004AEDCF; /* je: equal / zero */

loc_004AEDC4: ;
    edi = MEM32(ebp + 0x10);
    edi = MEM32(ecx + edi * 4 + 0x10);
    edi = edi & esi;
    goto loc_004AEDD2;

loc_004AEDCF: ;
    edi = MEM32(ebp + 8);

loc_004AEDD2: ;
    esi = MEM32(ebp + 0x14);
    esi = MEM32(esi);
    if (CMP_BE(eax, esi)) { sub_004AEE4A(); return; } /* jbe: below or equal (unsigned <=) */

loc_004AEDDB: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx - esi;
    esi = MEM32(ebp + 0x14);
    ebx = ebx >> 8;
    MEM32(edx) = ebx;
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 8), eax)) goto loc_004AEDF6; /* je: equal / zero */

loc_004AEDF1: ;
    esi = MEM32(ebp + 0x18);
    MEM32(esi) = edi;

loc_004AEDF6: ;
    esi = MEM32(edx);
    if (CMP_BE(esi, 3)) goto loc_004AEE02; /* jbe: below or equal (unsigned <=) */

loc_004AEDFD: ;
    PUSH32(esp, 2);
    POP32(esp, esi);
    goto loc_004AEE03;

loc_004AEE02: ;
    esi--;

loc_004AEE03: ;
    ebx = edx + 0x10;
    esi = edx + esi * 4 + 0x10;

loc_004AEE0A: ;
    if (CMP_AE(eax, MEM32(edx))) goto loc_004AEE31; /* jae: above or equal (unsigned >=) */

loc_004AEE0E: ;
    edi = MEM32(ebp + 0xC);
    edi = edi + eax;
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    edi = MEM32(ecx + edi * 4 + 0x14);
    MEM32(esi + -12) = edi;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_004AEE2B; /* je: equal / zero */

loc_004AEE20: ;
    edi = MEM32(ebp + 0x10);
    edi = edi + eax;
    edi = MEM32(ecx + edi * 4 + 0x14);
    goto loc_004AEE2D;

loc_004AEE2B: ;
    edi = 0; /* xor self */

loc_004AEE2D: ;
    MEM32(esi) = edi;
    goto loc_004AEE38;

loc_004AEE31: ;
    MEM32(ebx + -12) = MEM32(ebx + -12) & 0;
    MEM32(ebx) = MEM32(ebx) & 0;

loc_004AEE38: ;
    eax++;
    esi = esi - 4;
    ebx = ebx + 4;
    if (CMP_B(eax, 3)) goto loc_004AEE0A; /* jb: below (unsigned <) */

loc_004AEE44: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004AEE4C(); return; /* tail jmp 0x004AEE4C */

}

/**
 * sub_004AEE52
 * Original: 0x004AEE52 - 0x004AEEAD (91 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEE52(void)
{
    int _flags = 0; /* fallback flag var */

loc_004AEE52: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, 0xF);
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(esi + 0xC), 0)) goto loc_004AEE6B; /* je: equal / zero */

loc_004AEE5F: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004AEE64: ;
    eax = eax - MEM32(esi + 0xC);
    if (CMP_B(eax, ebx)) goto loc_004AEEAA; /* jb: below (unsigned <) */

loc_004AEE6B: ;
    PUSH32(esp, edi);
    edx = esi + 0x10;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    edi = edx;
    ecx = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 8));
    MEM32(edx) = 1;
    MEM32(esi + 0x18) = 8;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x2C) = 0x1F;
    MEM32(esi + 0x3C) = 0x2F;
    PUSH32(esp, 0); sub_0049CB7D(); /* call 0x0049CB7D */

loc_004AEEA1: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004AEEA6: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);

loc_004AEEAA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004AEEAD
 * Original: 0x004AEEAD - 0x004AEECA (29 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEEAD(void)
{
    int _flags = 0; /* fallback flag var */

loc_004AEEAD: ;
    PUSH32(esp, esi);
    eax = ecx;
    edx = 0; /* xor self */
    PUSH32(esp, 8);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    ecx = eax + 0xD;
    POP32(esp, esi);

loc_004AEEC0: ;
    MEM32(ecx) = edx;
    ecx = ecx + 9;
    esi--;
    if ((esi != 0)) goto loc_004AEEC0; /* jne: not equal / not zero */

loc_004AEEC8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AEECA
 * Original: 0x004AEECA - 0x004AEEE4 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEECA(void)
{

loc_004AEECA: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5C;
    PUSH32(esp, 0); sub_004AEEAD(); /* call 0x004AEEAD */

loc_004AEED5: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    MEM32(esi + 4) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004AEEE4
 * Original: 0x004AEEE4 - 0x004AEF6A (134 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEEE4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AEEE4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(eax, MEM32(ecx + 4))) goto loc_004AEF0D; /* jne: not equal / not zero */

loc_004AEEF1: ;
    edx = ecx + eax * 8;
    if (CMP_EQ(MEM32(eax + edx + 0xD), esi)) goto loc_004AEF0D; /* je: equal / zero */

loc_004AEEFA: ;
    MEM32(ecx + 8) = 1;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    if (CMP_B(MEM32(ecx + 4), 8)) goto loc_004AEF0D; /* jb: below (unsigned <) */

loc_004AEF0A: ;
    MEM32(ecx + 4) = esi;

loc_004AEF0D: ;
    eax = MEM32(ecx);
    edx = ecx + eax * 8;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(eax + edx + 0xD) = edi;
    eax = MEM32(ecx);
    edx = ecx + eax * 8;
    MEM32(ebp + 0xC) = ecx;
    SET_LO8(ecx, MEM8(ebp + 8));
    MEM8(eax + edx + 0xC) = LO8(ecx);
    eax = MEM32(ebp + 0x10);
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */
    ecx = MEM32(ebp + 0xC);
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), 8)) goto loc_004AEF37; /* je: equal / zero */

loc_004AEF34: ;
    PUSH32(esp, 4);
    POP32(esp, esi);

loc_004AEF37: ;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_004AEF3E; /* je: equal / zero */

loc_004AEF3B: ;
    esi = esi | 8;

loc_004AEF3E: ;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_004AEF48; /* je: equal / zero */

loc_004AEF42: ;
    esi = esi | 0x100;

loc_004AEF48: ;
    edx = MEM32(ecx);
    eax = eax & 0xFF0000;
    eax = eax << 4;
    eax = eax | esi;
    esi = ecx + edx * 8;
    MEM32(edx + esi + 0x11) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    (void)0; /* cmp MEM32(ecx), 8 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_B(MEM32(ecx), 8)) goto loc_004AEF66; /* jb: below (unsigned <) */

loc_004AEF63: ;
    MEM32(ecx) = MEM32(ecx) & 0;

loc_004AEF66: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004AEF6A
 * Original: 0x004AEF6A - 0x004AEF81 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEF6A(void)
{

loc_004AEF6A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = ecx + 0x5C;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004AEEE4(); /* call 0x004AEEE4 */

loc_004AEF7E: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004AEF81
 * Original: 0x004AEF81 - 0x004AEFA8 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEF81(void)
{

loc_004AEF81: ;
    eax = MEM32(esp + 8);
    edx = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    PUSH32(esp, MEM32(eax + 0x18));
    ecx = ecx + edx;
    PUSH32(esp, MEM32(eax + 0x14));
    eax = ZX8(MEM8(eax + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004AEF6A(); /* call 0x004AEF6A */

loc_004AEFA5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AEFA8
 * Original: 0x004AEFA8 - 0x004AF03B (147 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AEFA8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AEFA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    MEM32(ebp + -4) = ecx;
    esi = ebp + -708;
    POP32(esp, edi);
    ebx = 0xB0;

loc_004AEFC5: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004AEECA(); /* call 0x004AEECA */

loc_004AEFCC: ;
    esi = esi + ebx;
    edi--;
    if ((edi != 0)) goto loc_004AEFC5; /* jne: not equal / not zero */

loc_004AEFD1: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -4);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + -4);
    ecx = ebx;
    edi = ebp + -708;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = eax + 0x50;
    MEM32(ebp + -4) = 4;

loc_004AEFF1: ;
    esi = MEM32(ebp + 8);
    ecx = 0; /* xor self */

loc_004AEFF6: ;
    edx = MEM32(esi);
    edi = MEM32(esi + 4);
    edx = edx | edi;
    if ((edx == 0)) goto loc_004AF010; /* je: equal / zero */

loc_004AEFFF: ;
    edx = MEM32(esi);
    edi = MEM32(ebp + 0xC);
    if (CMP_NE(edx, MEM32(edi))) goto loc_004AF010; /* jne: not equal / not zero */

loc_004AF008: ;
    edx = MEM32(esi + 4);
    if (CMP_EQ(edx, MEM32(edi + 4))) { sub_004AF03B(); return; } /* je: equal / zero */

loc_004AF010: ;
    ecx++;
    esi = esi + 0x70;
    if (CMP_B(ecx, 4)) goto loc_004AEFF6; /* jb: below (unsigned <) */

loc_004AF019: ;
    ecx = 0x100;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x70;
    eax = eax + ebx;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_004AEFF1; /* jne: not equal / not zero */

loc_004AF034: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AF052
 * Original: 0x004AF052 - 0x004AF073 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF052(void)
{

loc_004AF052: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = 0x100;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AF073
 * Original: 0x004AF073 - 0x004AF112 (159 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF073(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AF073: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_004AEE52(); /* call 0x004AEE52 */

loc_004AF080: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = esi + 0x54;
    PUSH32(esp, eax);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_004AED9D(); /* call 0x004AED9D */

loc_004AF099: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_004AF0F4; /* je: equal / zero */

loc_004AF0A0: ;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_004AF0F4; /* je: equal / zero */

loc_004AF0A6: ;
    eax = MEM32(edi);
    if (CMP_BE(eax, 3)) goto loc_004AF0B0; /* jbe: below or equal (unsigned <=) */

loc_004AF0AD: ;
    PUSH32(esp, 3);
    POP32(esp, eax);

loc_004AF0B0: ;
    if (CMP_BE(eax & eax, 0)) goto loc_004AF0F4; /* jbe: below or equal (unsigned <=) */

loc_004AF0B4: ;
    edi = edi + 0x10;
    MEM32(ebp + 8) = eax;
    PUSH32(esp, ebx);

loc_004AF0BB: ;
    eax = MEM32(edi);
    ecx = eax;
    eax = eax & 0xFFFFFF;
    ecx = ecx >> 0x18;
    ebx = eax;
    MEM8(ebp + 0xC) = LO8(ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004B9243(); /* call 0x004B9243 */

loc_004AF0D7: ;
    if (TEST_Z(eax, eax)) goto loc_004AF0EB; /* je: equal / zero */

loc_004AF0DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + -12));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004AEF6A(); /* call 0x004AEF6A */

loc_004AF0EB: ;
    edi = edi + 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_004AF0BB; /* jne: not equal / not zero */

loc_004AF0F3: ;
    POP32(esp, ebx);

loc_004AF0F4: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004AED9D(); /* call 0x004AED9D */

loc_004AF109: ;
    eax = eax | MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004AF112
 * Original: 0x004AF112 - 0x004AF135 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF112(void)
{
    int _flags = 0; /* fallback flag var */

loc_004AF112: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = ecx;

loc_004AF118: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004AF052(); /* call 0x004AF052 */

loc_004AF124: ;
    esi++;
    edi = edi + 0xB0;
    if (CMP_B(esi, 4)) goto loc_004AF118; /* jb: below (unsigned <) */

loc_004AF130: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AF135
 * Original: 0x004AF135 - 0x004AF157 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF135(void)
{

loc_004AF135: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = ecx + eax;
    PUSH32(esp, 0); sub_004AF073(); /* call 0x004AF073 */

loc_004AF154: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004AF157
 * Original: 0x004AF157 - 0x004AF18D (54 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF157(void)
{

loc_004AF157: ;
    PUSH32(esp, 0x3562726B);
    PUSH32(esp, 0x882178);
    PUSH32(esp, 0x8820A8);
    PUSH32(esp, 0x881FD8);
    PUSH32(esp, 0x881F08);
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10000);
    PUSH32(esp, MEM32(esp + 0x28));
    PUSH32(esp, 0); sub_004C07B4(); /* call 0x004C07B4 */

loc_004AF18A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004AF18D
 * Original: 0x004AF18D - 0x004AF1AE (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF18D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AF18D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004AF19B; /* jne: not equal / not zero */

loc_004AF196: ;
    eax = 0x80000001u;

loc_004AF19B: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004AF1A6: ;
    if (TEST_NZ(eax, eax)) { sub_004AF1AE(); return; } /* jne: not equal / not zero */

loc_004AF1AA: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AF1F8(); return; /* tail jmp 0x004AF1F8 */

}

/**
 * sub_004AF200
 * Original: 0x004AF200 - 0x004AF221 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AF200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004AF20E; /* jne: not equal / not zero */

loc_004AF209: ;
    eax = 0x80000008u;

loc_004AF20E: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004AF219: ;
    if (TEST_NZ(eax, eax)) { sub_004AF221(); return; } /* jne: not equal / not zero */

loc_004AF21D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AF26B(); return; /* tail jmp 0x004AF26B */

}

/**
 * sub_004AF273
 * Original: 0x004AF273 - 0x004AF29E (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF273(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AF273: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    if (TEST_NZ(eax, eax)) goto loc_004AF282; /* jne: not equal / not zero */

loc_004AF27D: ;
    eax = 0x80000001u;

loc_004AF282: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AF293: ;
    if (TEST_NZ(eax, eax)) { sub_004AF29E(); return; } /* jne: not equal / not zero */

loc_004AF297: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AF326(); return; /* tail jmp 0x004AF326 */

}

/**
 * sub_004AF32E
 * Original: 0x004AF32E - 0x004AF35A (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF32E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AF32E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004AF33E; /* jne: not equal / not zero */

loc_004AF33B: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004AF33E: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AF34F: ;
    if (TEST_NZ(eax, eax)) { sub_004AF35A(); return; } /* jne: not equal / not zero */

loc_004AF353: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AF3E5(); return; /* tail jmp 0x004AF3E5 */

}

/**
 * sub_004AF3EA
 * Original: 0x004AF3EA - 0x004AF46F (133 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF3EA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004AF3EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    if (TEST_NZ(eax, eax)) goto loc_004AF3F7; /* jne: not equal / not zero */

loc_004AF3F4: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004AF3F7: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AF408: ;
    if (TEST_Z(eax, eax)) goto loc_004AF46B; /* je: equal / zero */

loc_004AF40C: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    goto loc_004AF445;

loc_004AF412: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C13E3(); /* call 0x004C13E3 */

loc_004AF41E: ;
    if (TEST_Z(eax, eax)) { sub_004AF46F(); return; } /* je: equal / zero */

loc_004AF422: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C23B4(); /* call 0x004C23B4 */

loc_004AF42C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) { sub_004AF46F(); return; } /* je: equal / zero */

loc_004AF432: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004AF32E(); /* call 0x004AF32E */

loc_004AF43F: ;
    if (TEST_Z(eax, eax)) { sub_004AF46F(); return; } /* je: equal / zero */

loc_004AF443: ;
    esi = MEM32(esi);

loc_004AF445: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C15EA(); /* call 0x004C15EA */

loc_004AF450: ;
    if (TEST_NZ(eax, eax)) goto loc_004AF412; /* jne: not equal / not zero */

loc_004AF454: ;
    MEM32(esi) = MEM32(esi) & eax;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004AF464: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);

loc_004AF46B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AF473
 * Original: 0x004AF473 - 0x004AF49C (41 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF473(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AF473: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004AF483; /* jne: not equal / not zero */

loc_004AF480: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004AF483: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AF494: ;
    if (TEST_NZ(eax, eax)) { sub_004AF49C(); return; } /* jne: not equal / not zero */

loc_004AF498: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AF4FC(); return; /* tail jmp 0x004AF4FC */

}

/**
 * sub_004AF501
 * Original: 0x004AF501 - 0x004AF586 (133 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF501(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004AF501: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    if (TEST_NZ(eax, eax)) goto loc_004AF50E; /* jne: not equal / not zero */

loc_004AF50B: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004AF50E: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AF51F: ;
    if (TEST_Z(eax, eax)) goto loc_004AF582; /* je: equal / zero */

loc_004AF523: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    goto loc_004AF55C;

loc_004AF529: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C13E3(); /* call 0x004C13E3 */

loc_004AF535: ;
    if (TEST_Z(eax, eax)) { sub_004AF586(); return; } /* je: equal / zero */

loc_004AF539: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C23B4(); /* call 0x004C23B4 */

loc_004AF543: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) { sub_004AF586(); return; } /* je: equal / zero */

loc_004AF549: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004AFC0B(); /* call 0x004AFC0B */

loc_004AF556: ;
    if (TEST_Z(eax, eax)) { sub_004AF586(); return; } /* je: equal / zero */

loc_004AF55A: ;
    esi = MEM32(esi);

loc_004AF55C: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C15EA(); /* call 0x004C15EA */

loc_004AF567: ;
    if (TEST_NZ(eax, eax)) goto loc_004AF529; /* jne: not equal / not zero */

loc_004AF56B: ;
    MEM32(esi) = MEM32(esi) & eax;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004AF57B: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);

loc_004AF582: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004AF58A
 * Original: 0x004AF58A - 0x004AF5B6 (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF58A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AF58A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004AF59A; /* jne: not equal / not zero */

loc_004AF597: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004AF59A: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AF5AB: ;
    if (TEST_NZ(eax, eax)) { sub_004AF5B6(); return; } /* jne: not equal / not zero */

loc_004AF5AF: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AF641(); return; /* tail jmp 0x004AF641 */

}

/**
 * sub_004AF646
 * Original: 0x004AF646 - 0x004AF674 (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AF646(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AF646: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004AF658; /* jne: not equal / not zero */

loc_004AF653: ;
    eax = 0x4000001E;

loc_004AF658: ;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AF669: ;
    if (TEST_NZ(eax, eax)) { sub_004AF674(); return; } /* jne: not equal / not zero */

loc_004AF66D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AFADB(); return; /* tail jmp 0x004AFADB */

}

/**
 * sub_004AFADF
 * Original: 0x004AFADF - 0x004AFC0B (300 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFADF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004AFADF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004AFAEF; /* jne: not equal / not zero */

loc_004AFAEC: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004AFAEF: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AFB00: ;
    if (TEST_Z(eax, eax)) goto loc_004AFC07; /* je: equal / zero */

loc_004AFB08: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = esi;
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AFB27: ;
    if (TEST_NZ(eax, eax)) goto loc_004AFB32; /* jne: not equal / not zero */

loc_004AFB2B: ;
    eax = 0; /* xor self */
    goto loc_004AFC05;

loc_004AFB32: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004C1D00(); /* call 0x004C1D00 */

loc_004AFB40: ;
    if (TEST_Z(eax, eax)) goto loc_004AFB2B; /* je: equal / zero */

loc_004AFB44: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004AFB52: ;
    if (TEST_Z(eax, eax)) goto loc_004AFB2B; /* je: equal / zero */

loc_004AFB56: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C13E3(); /* call 0x004C13E3 */

loc_004AFB62: ;
    eax = 0x80000001u;
    if (CMP_NE(MEM32(ebp + -12), eax)) goto loc_004AFBA8; /* jne: not equal / not zero */

loc_004AFB6C: ;
    MEM8(esi) = MEM8(esi) | 0x80;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AFB80: ;
    if (TEST_Z(eax, eax)) goto loc_004AFB2B; /* je: equal / zero */

loc_004AFB84: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004C1D00(); /* call 0x004C1D00 */

loc_004AFB92: ;
    if (TEST_Z(eax, eax)) goto loc_004AFB2B; /* je: equal / zero */

loc_004AFB96: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004AFBA4: ;
    if (TEST_Z(eax, eax)) goto loc_004AFB2B; /* je: equal / zero */

loc_004AFBA8: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AFBBD: ;
    if (TEST_Z(eax, eax)) goto loc_004AFB2B; /* je: equal / zero */

loc_004AFBC5: ;
    esi = esi + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004C22AE(); /* call 0x004C22AE */

loc_004AFBD3: ;
    if (TEST_Z(eax, eax)) goto loc_004AFB2B; /* je: equal / zero */

loc_004AFBDB: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004AFBE9: ;
    if (TEST_Z(eax, eax)) goto loc_004AFB2B; /* je: equal / zero */

loc_004AFBF1: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004AFBFF: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);

loc_004AFC05: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004AFC07: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004AFC0B
 * Original: 0x004AFC0B - 0x004AFC37 (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFC0B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AFC0B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004AFC1B; /* jne: not equal / not zero */

loc_004AFC18: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004AFC1B: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AFC2C: ;
    if (TEST_NZ(eax, eax)) { sub_004AFC37(); return; } /* jne: not equal / not zero */

loc_004AFC30: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AFCC2(); return; /* tail jmp 0x004AFCC2 */

}

/**
 * sub_004AFCC7
 * Original: 0x004AFCC7 - 0x004AFCEB (36 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFCC7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AFCC7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004AFCD4; /* jne: not equal / not zero */

loc_004AFCD1: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004AFCD4: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004AFCE3: ;
    if (TEST_NZ(eax, eax)) { sub_004AFCEB(); return; } /* jne: not equal / not zero */

loc_004AFCE7: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AFD49(); return; /* tail jmp 0x004AFD49 */

}

/**
 * sub_004AFD4E
 * Original: 0x004AFD4E - 0x004AFD79 (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFD4E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AFD4E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    if (TEST_NZ(eax, eax)) goto loc_004AFD5D; /* jne: not equal / not zero */

loc_004AFD58: ;
    eax = 0x8000000Cu;

loc_004AFD5D: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AFD6E: ;
    if (TEST_NZ(eax, eax)) { sub_004AFD79(); return; } /* jne: not equal / not zero */

loc_004AFD72: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AFE00(); return; /* tail jmp 0x004AFE00 */

}

/**
 * sub_004AFE08
 * Original: 0x004AFE08 - 0x004AFE33 (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFE08(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AFE08: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    if (TEST_NZ(eax, eax)) goto loc_004AFE17; /* jne: not equal / not zero */

loc_004AFE12: ;
    eax = 0x80000002u;

loc_004AFE17: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AFE28: ;
    if (TEST_NZ(eax, eax)) { sub_004AFE33(); return; } /* jne: not equal / not zero */

loc_004AFE2C: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004AFEBA(); return; /* tail jmp 0x004AFEBA */

}

/**
 * sub_004AFEC2
 * Original: 0x004AFEC2 - 0x004AFEF0 (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004AFEC2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004AFEC2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004AFED4; /* jne: not equal / not zero */

loc_004AFECF: ;
    eax = 0x40000001;

loc_004AFED4: ;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004AFEE5: ;
    if (TEST_NZ(eax, eax)) { sub_004AFEF0(); return; } /* jne: not equal / not zero */

loc_004AFEE9: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B00AC(); return; /* tail jmp 0x004B00AC */

}

/**
 * sub_004B00B0
 * Original: 0x004B00B0 - 0x004B00DC (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B00B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B00B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004B00C0; /* jne: not equal / not zero */

loc_004B00BD: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B00C0: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B00D1: ;
    if (TEST_NZ(eax, eax)) { sub_004B00DC(); return; } /* jne: not equal / not zero */

loc_004B00D5: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B02C6(); return; /* tail jmp 0x004B02C6 */

}

/**
 * sub_004B02CB
 * Original: 0x004B02CB - 0x004B06E9 (1054 bytes, 345 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B02CB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004B02CB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004B02DB; /* jne: not equal / not zero */

loc_004B02D8: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B02DB: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B02EC: ;
    if (TEST_Z(eax, eax)) goto loc_004B06E4; /* je: equal / zero */

loc_004B02F4: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = esi;
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B030F: ;
    if (TEST_NZ(eax, eax)) goto loc_004B031A; /* jne: not equal / not zero */

loc_004B0313: ;
    eax = 0; /* xor self */
    goto loc_004B06E3;

loc_004B031A: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004AFC0B(); /* call 0x004AFC0B */

loc_004B0327: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B032B: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B0339: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B033D: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000001u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B0352: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0356: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004AF3EA(); /* call 0x004AF3EA */

loc_004B0364: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0368: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B0376: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B037A: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000002u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B038F: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0393: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C1D00(); /* call 0x004C1D00 */

loc_004B03A1: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B03A9: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B03B7: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B03BF: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C13E3(); /* call 0x004C13E3 */

loc_004B03CB: ;
    eax = 0x80000003u;
    (void)0; /* cmp MEM32(ebp + -16), eax - flags set for next jcc */
    PUSH32(esp, 0x18);
    POP32(esp, edi);
    if (CMP_NE(MEM32(ebp + -16), eax)) goto loc_004B041F; /* jne: not equal / not zero */

loc_004B03D8: ;
    MEM8(esi) = MEM8(esi) | 0x80;
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B03EC: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B03F4: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C24F3(); /* call 0x004C24F3 */

loc_004B0401: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0409: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B0417: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B041F: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000004u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B0434: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B043C: ;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C1BBB(); /* call 0x004C1BBB */

loc_004B044A: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0452: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B0460: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0468: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000005u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B047D: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0485: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C24F3(); /* call 0x004C24F3 */

loc_004B0492: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B049A: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B04A8: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B04B0: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C13E3(); /* call 0x004C13E3 */

loc_004B04BC: ;
    eax = 0x80000006u;
    if (CMP_NE(MEM32(ebp + -16), eax)) goto loc_004B050D; /* jne: not equal / not zero */

loc_004B04C6: ;
    MEM8(esi) = MEM8(esi) | 0x40;
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B04DA: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B04E2: ;
    eax = esi + 0x3E;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C24F3(); /* call 0x004C24F3 */

loc_004B04EF: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B04F7: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B0505: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B050D: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000007u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B0522: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B052A: ;
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C24F3(); /* call 0x004C24F3 */

loc_004B0537: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B053F: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B054D: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0555: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C13E3(); /* call 0x004C13E3 */

loc_004B0561: ;
    eax = 0x80000008u;
    if (CMP_NE(MEM32(ebp + -16), eax)) goto loc_004B05B2; /* jne: not equal / not zero */

loc_004B056B: ;
    MEM8(esi) = MEM8(esi) | 0x20;
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B057F: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0587: ;
    eax = esi + 0x5A;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C24F3(); /* call 0x004C24F3 */

loc_004B0594: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B059C: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B05AA: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B05B2: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80000009u);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B05C7: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B05CF: ;
    eax = esi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C1DD4(); /* call 0x004C1DD4 */

loc_004B05DD: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B05E5: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B05F3: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B05FB: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8000000Au);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B0610: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0618: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi + 0x6C;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004AF473(); /* call 0x004AF473 */

loc_004B0625: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B062D: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B063B: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0643: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C13E3(); /* call 0x004C13E3 */

loc_004B064F: ;
    eax = 0x8000000Bu;
    if (CMP_NE(MEM32(ebp + -16), eax)) goto loc_004B06A1; /* jne: not equal / not zero */

loc_004B0659: ;
    MEM8(esi) = MEM8(esi) | 0x10;
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B066D: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B0675: ;
    eax = esi + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004AF501(); /* call 0x004AF501 */

loc_004B0683: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B068B: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B0699: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B06A1: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004C13E3(); /* call 0x004C13E3 */

loc_004B06AD: ;
    if (CMP_NE(MEM32(ebp + -16), 0x8000000Cu)) goto loc_004B06CF; /* jne: not equal / not zero */

loc_004B06B6: ;
    MEM8(esi) = MEM8(esi) | 8;
    esi = esi + 0x78;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004AFD4E(); /* call 0x004AFD4E */

loc_004B06C7: ;
    if (TEST_Z(eax, eax)) goto loc_004B0313; /* je: equal / zero */

loc_004B06CF: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C156F(); /* call 0x004C156F */

loc_004B06DD: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);

loc_004B06E3: ;
    POP32(esp, edi);

loc_004B06E4: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B06E9
 * Original: 0x004B06E9 - 0x004B0717 (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B06E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B06E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B06FB; /* jne: not equal / not zero */

loc_004B06F6: ;
    eax = 0x4000000F;

loc_004B06FB: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B070C: ;
    if (TEST_NZ(eax, eax)) { sub_004B0717(); return; } /* jne: not equal / not zero */

loc_004B0710: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B081F(); return; /* tail jmp 0x004B081F */

}

/**
 * sub_004B0823
 * Original: 0x004B0823 - 0x004B0851 (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0823(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0823: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B0835; /* jne: not equal / not zero */

loc_004B0830: ;
    eax = 0x4000001B;

loc_004B0835: ;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B0846: ;
    if (TEST_NZ(eax, eax)) { sub_004B0851(); return; } /* jne: not equal / not zero */

loc_004B084A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B09D9(); return; /* tail jmp 0x004B09D9 */

}

/**
 * sub_004B09DD
 * Original: 0x004B09DD - 0x004B0A06 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B09DD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B09DD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B09ED; /* jne: not equal / not zero */

loc_004B09E8: ;
    eax = 0x4000000B;

loc_004B09ED: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B09FE: ;
    if (TEST_NZ(eax, eax)) { sub_004B0A06(); return; } /* jne: not equal / not zero */

loc_004B0A02: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0A2B(); return; /* tail jmp 0x004B0A2B */

}

/**
 * sub_004B0A2F
 * Original: 0x004B0A2F - 0x004B0A58 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0A2F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0A2F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B0A3F; /* jne: not equal / not zero */

loc_004B0A3A: ;
    eax = 0x4000000D;

loc_004B0A3F: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B0A50: ;
    if (TEST_NZ(eax, eax)) { sub_004B0A58(); return; } /* jne: not equal / not zero */

loc_004B0A54: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0A7D(); return; /* tail jmp 0x004B0A7D */

}

/**
 * sub_004B0A81
 * Original: 0x004B0A81 - 0x004B0AAA (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0A81(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0A81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B0A91; /* jne: not equal / not zero */

loc_004B0A8C: ;
    eax = 0x40000019;

loc_004B0A91: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B0AA2: ;
    if (TEST_NZ(eax, eax)) { sub_004B0AAA(); return; } /* jne: not equal / not zero */

loc_004B0AA6: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0ACF(); return; /* tail jmp 0x004B0ACF */

}

/**
 * sub_004B0AD3
 * Original: 0x004B0AD3 - 0x004B0AFC (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0AD3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0AD3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B0AE3; /* jne: not equal / not zero */

loc_004B0ADE: ;
    eax = 0x4000001A;

loc_004B0AE3: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C1374(); /* call 0x004C1374 */

loc_004B0AF4: ;
    if (TEST_NZ(eax, eax)) { sub_004B0AFC(); return; } /* jne: not equal / not zero */

loc_004B0AF8: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0B21(); return; /* tail jmp 0x004B0B21 */

}

/**
 * sub_004B0B25
 * Original: 0x004B0B25 - 0x004B0B46 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0B25(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0B25: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004B0B33; /* jne: not equal / not zero */

loc_004B0B2E: ;
    eax = 0x80000001u;

loc_004B0B33: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B0B3E: ;
    if (TEST_NZ(eax, eax)) { sub_004B0B46(); return; } /* jne: not equal / not zero */

loc_004B0B42: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0B99(); return; /* tail jmp 0x004B0B99 */

}

/**
 * sub_004B0BA1
 * Original: 0x004B0BA1 - 0x004B0BC3 (34 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0BA1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0BA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004B0BB0; /* jne: not equal / not zero */

loc_004B0BAD: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B0BB0: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B0BBB: ;
    if (TEST_NZ(eax, eax)) { sub_004B0BC3(); return; } /* jne: not equal / not zero */

loc_004B0BBF: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0C34(); return; /* tail jmp 0x004B0C34 */

}

/**
 * sub_004B0C37
 * Original: 0x004B0C37 - 0x004B0C5C (37 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0C37(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0C37: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = edx;
    if (TEST_NZ(eax, eax)) goto loc_004B0C49; /* jne: not equal / not zero */

loc_004B0C46: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B0C49: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B0C54: ;
    if (TEST_NZ(eax, eax)) { sub_004B0C5C(); return; } /* jne: not equal / not zero */

loc_004B0C58: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0CA8(); return; /* tail jmp 0x004B0CA8 */

}

/**
 * sub_004B0CAC
 * Original: 0x004B0CAC - 0x004B0CFA (78 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0CAC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004B0CAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004B0CBA; /* jne: not equal / not zero */

loc_004B0CB7: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B0CBA: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B0CC5: ;
    if (TEST_Z(eax, eax)) goto loc_004B0CF5; /* je: equal / zero */

loc_004B0CC9: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    goto loc_004B0CE1;

loc_004B0CD1: ;
    ecx = esi + 4;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_004B0BA1(); /* call 0x004B0BA1 */

loc_004B0CDB: ;
    if (TEST_Z(eax, eax)) { sub_004B0CFA(); return; } /* je: equal / zero */

loc_004B0CDF: ;
    esi = MEM32(esi);

loc_004B0CE1: ;
    if (TEST_NZ(esi, esi)) goto loc_004B0CD1; /* jne: not equal / not zero */

loc_004B0CE5: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C231B(); /* call 0x004C231B */

loc_004B0CEE: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);

loc_004B0CF5: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B0CFE
 * Original: 0x004B0CFE - 0x004B0D20 (34 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0CFE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0CFE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004B0D0D; /* jne: not equal / not zero */

loc_004B0D0A: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B0D0D: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B0D18: ;
    if (TEST_NZ(eax, eax)) { sub_004B0D20(); return; } /* jne: not equal / not zero */

loc_004B0D1C: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0D91(); return; /* tail jmp 0x004B0D91 */

}

/**
 * sub_004B0D94
 * Original: 0x004B0D94 - 0x004B0DBB (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0D94(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0D94: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B0DA1; /* jne: not equal / not zero */

loc_004B0D9E: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B0DA1: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B0DB0: ;
    if (TEST_NZ(eax, eax)) { sub_004B0DBB(); return; } /* jne: not equal / not zero */

loc_004B0DB4: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0E6D(); return; /* tail jmp 0x004B0E6D */

}

/**
 * sub_004B0E72
 * Original: 0x004B0E72 - 0x004B0E96 (36 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0E72(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0E72: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B0E7F; /* jne: not equal / not zero */

loc_004B0E7C: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B0E7F: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B0E8E: ;
    if (TEST_NZ(eax, eax)) { sub_004B0E96(); return; } /* jne: not equal / not zero */

loc_004B0E92: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0F12(); return; /* tail jmp 0x004B0F12 */

}

/**
 * sub_004B0F17
 * Original: 0x004B0F17 - 0x004B0F3B (36 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0F17(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0F17: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004B0F28; /* jne: not equal / not zero */

loc_004B0F23: ;
    eax = 0x80000003u;

loc_004B0F28: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B0F33: ;
    if (TEST_NZ(eax, eax)) { sub_004B0F3B(); return; } /* jne: not equal / not zero */

loc_004B0F37: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B0F84(); return; /* tail jmp 0x004B0F84 */

}

/**
 * sub_004B0F8D
 * Original: 0x004B0F8D - 0x004B0FB7 (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B0F8D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B0F8D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B0F9D; /* jne: not equal / not zero */

loc_004B0F98: ;
    eax = 0x40000001;

loc_004B0F9D: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B0FAC: ;
    if (TEST_NZ(eax, eax)) { sub_004B0FB7(); return; } /* jne: not equal / not zero */

loc_004B0FB0: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B110B(); return; /* tail jmp 0x004B110B */

}

/**
 * sub_004B1110
 * Original: 0x004B1110 - 0x004B113A (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B1110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B1120; /* jne: not equal / not zero */

loc_004B111B: ;
    eax = 0x40000002;

loc_004B1120: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B112F: ;
    if (TEST_NZ(eax, eax)) { sub_004B113A(); return; } /* jne: not equal / not zero */

loc_004B1133: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B1387(); return; /* tail jmp 0x004B1387 */

}

/**
 * sub_004B138C
 * Original: 0x004B138C - 0x004B13B6 (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B138C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B138C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B139C; /* jne: not equal / not zero */

loc_004B1397: ;
    eax = 0x4000000E;

loc_004B139C: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B13AB: ;
    if (TEST_NZ(eax, eax)) { sub_004B13B6(); return; } /* jne: not equal / not zero */

loc_004B13AF: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B14FB(); return; /* tail jmp 0x004B14FB */

}

/**
 * sub_004B1500
 * Original: 0x004B1500 - 0x004B1528 (40 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B1500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = edx;
    if (TEST_NZ(eax, eax)) goto loc_004B1512; /* jne: not equal / not zero */

loc_004B150F: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B1512: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B151D: ;
    if (TEST_NZ(eax, eax)) { sub_004B1528(); return; } /* jne: not equal / not zero */

loc_004B1521: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B17F6(); return; /* tail jmp 0x004B17F6 */

}

/**
 * sub_004B17FA
 * Original: 0x004B17FA - 0x004B184E (84 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B17FA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004B17FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B1807; /* jne: not equal / not zero */

loc_004B1804: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B1807: ;
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B1814: ;
    if (TEST_Z(eax, eax)) goto loc_004B184A; /* je: equal / zero */

loc_004B1818: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    goto loc_004B1834;

loc_004B1820: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004B0F8D(); /* call 0x004B0F8D */

loc_004B182E: ;
    if (TEST_Z(eax, eax)) { sub_004B184E(); return; } /* je: equal / zero */

loc_004B1832: ;
    esi = MEM32(esi);

loc_004B1834: ;
    if (TEST_NZ(esi, esi)) goto loc_004B1820; /* jne: not equal / not zero */

loc_004B1838: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C231B(); /* call 0x004C231B */

loc_004B1843: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);

loc_004B184A: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B1852
 * Original: 0x004B1852 - 0x004B1873 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1852(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B1852: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004B1860; /* jne: not equal / not zero */

loc_004B185B: ;
    eax = 0x80000000u;

loc_004B1860: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B186B: ;
    if (TEST_NZ(eax, eax)) { sub_004B1873(); return; } /* jne: not equal / not zero */

loc_004B186F: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B18BE(); return; /* tail jmp 0x004B18BE */

}

/**
 * sub_004B18C6
 * Original: 0x004B18C6 - 0x004B18E7 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B18C6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B18C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004B18D4; /* jne: not equal / not zero */

loc_004B18CF: ;
    eax = 0x80000002u;

loc_004B18D4: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B18DF: ;
    if (TEST_NZ(eax, eax)) { sub_004B18E7(); return; } /* jne: not equal / not zero */

loc_004B18E3: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B1932(); return; /* tail jmp 0x004B1932 */

}

/**
 * sub_004B193A
 * Original: 0x004B193A - 0x004B195B (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B193A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B193A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004B1948; /* jne: not equal / not zero */

loc_004B1943: ;
    eax = 0x8000000Bu;

loc_004B1948: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B1953: ;
    if (TEST_NZ(eax, eax)) { sub_004B195B(); return; } /* jne: not equal / not zero */

loc_004B1957: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B19A6(); return; /* tail jmp 0x004B19A6 */

}

/**
 * sub_004B19AE
 * Original: 0x004B19AE - 0x004B19D8 (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B19AE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B19AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B19BE; /* jne: not equal / not zero */

loc_004B19B9: ;
    eax = 0x4000001D;

loc_004B19BE: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B19CD: ;
    if (TEST_NZ(eax, eax)) { sub_004B19D8(); return; } /* jne: not equal / not zero */

loc_004B19D1: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B1B4A(); return; /* tail jmp 0x004B1B4A */

}

/**
 * sub_004B1B4F
 * Original: 0x004B1B4F - 0x004B1B77 (40 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1B4F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B1B4F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = edx;
    if (TEST_NZ(eax, eax)) goto loc_004B1B61; /* jne: not equal / not zero */

loc_004B1B5E: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B1B61: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B1B6C: ;
    if (TEST_NZ(eax, eax)) { sub_004B1B77(); return; } /* jne: not equal / not zero */

loc_004B1B70: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B1E0A(); return; /* tail jmp 0x004B1E0A */

}

/**
 * sub_004B1E0E
 * Original: 0x004B1E0E - 0x004B1E38 (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1E0E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B1E0E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B1E1E; /* jne: not equal / not zero */

loc_004B1E19: ;
    eax = 0x40000016;

loc_004B1E1E: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B1E2D: ;
    if (TEST_NZ(eax, eax)) { sub_004B1E38(); return; } /* jne: not equal / not zero */

loc_004B1E31: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B1F14(); return; /* tail jmp 0x004B1F14 */

}

/**
 * sub_004B1F19
 * Original: 0x004B1F19 - 0x004B1F38 (31 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B1F19(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B1F19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004B1F25; /* jne: not equal / not zero */

loc_004B1F22: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004B1F25: ;
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B1F30: ;
    if (TEST_NZ(eax, eax)) { sub_004B1F38(); return; } /* jne: not equal / not zero */

loc_004B1F34: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B2013
 * Original: 0x004B2013 - 0x004B2039 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2013(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B2013: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B2022; /* jne: not equal / not zero */

loc_004B201D: ;
    eax = 0x4000000A;

loc_004B2022: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B2031: ;
    if (TEST_NZ(eax, eax)) { sub_004B2039(); return; } /* jne: not equal / not zero */

loc_004B2035: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B2058(); return; /* tail jmp 0x004B2058 */

}

/**
 * sub_004B205D
 * Original: 0x004B205D - 0x004B2083 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B205D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B205D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_004B206C; /* jne: not equal / not zero */

loc_004B2067: ;
    eax = 0x4000000C;

loc_004B206C: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C22C4(); /* call 0x004C22C4 */

loc_004B207B: ;
    if (TEST_NZ(eax, eax)) { sub_004B2083(); return; } /* jne: not equal / not zero */

loc_004B207F: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B20A2(); return; /* tail jmp 0x004B20A2 */

}
