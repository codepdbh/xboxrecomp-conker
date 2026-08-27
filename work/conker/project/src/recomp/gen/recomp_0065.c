/**
 * Burnout 3 - Recompiled code chunk 65
 * Functions: 250 (0x004C6483 - 0x004CE466)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004C6483
 * Original: 0x004C6483 - 0x004C64A3 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6483(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6483: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0); sub_004C369F(); /* call 0x004C369F */

loc_004C648D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) { sub_004C64A3(); return; } /* je: equal / zero */

loc_004C6492: ;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x586064;
    ecx = eax;
    g_seh_ebp = ebp; sub_004C64A5(); return; /* tail jmp 0x004C64A5 */

}

/**
 * sub_004C652D
 * Original: 0x004C652D - 0x004C6545 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C652D(void)
{
    int _cf = 0; /* carry flag */

loc_004C652D: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    eax = eax + 0xFFFFFFF8u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C6101(); /* call 0x004C6101 */

loc_004C6542: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6545
 * Original: 0x004C6545 - 0x004C656F (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6545(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6545: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C654C: ;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(0x4E1668), edi - flags set for next jcc */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), edi)) { sub_004C656F(); return; } /* je: equal / zero */

loc_004C6559: ;
    if (CMP_EQ(ebx, edi)) goto loc_004C6568; /* je: equal / zero */

loc_004C655D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C6568: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C65DC(); return; /* tail jmp 0x004C65DC */

}

/**
 * sub_004C65E1
 * Original: 0x004C65E1 - 0x004C660B (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C65E1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C65E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C65E8: ;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(0x4E1668), edi - flags set for next jcc */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), edi)) { sub_004C660B(); return; } /* je: equal / zero */

loc_004C65F5: ;
    if (CMP_EQ(ebx, edi)) goto loc_004C6604; /* je: equal / zero */

loc_004C65F9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C6604: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C666D(); return; /* tail jmp 0x004C666D */

}

/**
 * sub_004C6672
 * Original: 0x004C6672 - 0x004C669F (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6672(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6672: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C667B: ;
    (void)0; /* cmp MEM32(0x4E1668), edi - flags set for next jcc */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(0x4E1668), edi)) { sub_004C669F(); return; } /* je: equal / zero */

loc_004C6686: ;
    if (CMP_EQ(esi, edi)) goto loc_004C6695; /* je: equal / zero */

loc_004C668A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C6695: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004C6775(); return; /* tail jmp 0x004C6775 */

}

/**
 * sub_004C6795
 * Original: 0x004C6795 - 0x004C67B9 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6795(void)
{
    int _cf = 0; /* carry flag */

loc_004C6795: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = eax + 0xFFFFFFF8u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C6545(); /* call 0x004C6545 */

loc_004C67B6: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C67B9
 * Original: 0x004C67B9 - 0x004C67DD (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C67B9(void)
{
    int _cf = 0; /* carry flag */

loc_004C67B9: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = eax + 0xFFFFFFF8u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C65E1(); /* call 0x004C65E1 */

loc_004C67DA: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C67DD
 * Original: 0x004C67DD - 0x004C67FD (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C67DD(void)
{
    int _cf = 0; /* carry flag */

loc_004C67DD: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = eax + 0xFFFFFFF8u;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C6672(); /* call 0x004C6672 */

loc_004C67FA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C67FD
 * Original: 0x004C67FD - 0x004C681B (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C67FD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C67FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x60;
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0); sub_004C369F(); /* call 0x004C369F */

loc_004C680D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) { sub_004C681B(); return; } /* je: equal / zero */

loc_004C6812: ;
    ecx = eax;
    PUSH32(esp, 0); sub_004C6072(); /* call 0x004C6072 */

loc_004C6819: ;
    g_seh_ebp = ebp; sub_004C681D(); return; /* tail jmp 0x004C681D */

}

/**
 * sub_004C6936
 * Original: 0x004C6936 - 0x004C6950 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6936(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6936: ;
    eax = MEM32(0x4E1CF0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_004C6950(); return; } /* je: equal / zero */

loc_004C6942: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004C6948: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_004C699D(); return; /* tail jmp 0x004C699D */

}

/**
 * sub_004C69A3
 * Original: 0x004C69A3 - 0x004C69EA (71 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C69A3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C69A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C69AE: ;
    esi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6936(); /* call 0x004C6936 */

loc_004C69BA: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004C69D3; /* jl: less (signed <) */

loc_004C69C0: ;
    eax = MEM32(ebp + -4);
    ecx = eax;
    eax = eax + 8;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_004C69D3: ;
    if (TEST_Z(esi, esi)) goto loc_004C69E2; /* je: equal / zero */

loc_004C69D7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C69E2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C69EA
 * Original: 0x004C69EA - 0x004C6A41 (87 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C69EA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C69EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C38BE(); /* call 0x004C38BE */

loc_004C69FA: ;
    edi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6936(); /* call 0x004C6936 */

loc_004C6A06: ;
    esi = MEM32(ebp + -4);
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_004C6A1F; /* jl: less (signed <) */

loc_004C6A0F: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C65E1(); /* call 0x004C65E1 */

loc_004C6A1D: ;
    ebx = eax;

loc_004C6A1F: ;
    if (TEST_Z(esi, esi)) goto loc_004C6A29; /* je: equal / zero */

loc_004C6A23: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_004C6A29: ;
    if (TEST_Z(edi, edi)) goto loc_004C6A38; /* je: equal / zero */

loc_004C6A2D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004C6A38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6A41
 * Original: 0x004C6A41 - 0x004C6A88 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6A41(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C6A41: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56118C), _icall_esp); /* indirect call */
    }

loc_004C6A50: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_004C6A82; /* je: equal / zero */

loc_004C6A56: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561208), _icall_esp); /* indirect call */
    }

loc_004C6A5D: ;
    edx = MEM32(0x4E1D18);
    MEM32(edx) = MEM32(edx) + eax;
    if (CMP_EQ(MEM32(esp + 0x10), 0)) goto loc_004C6A82; /* je: equal / zero */

loc_004C6A6C: ;
    ecx = eax;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_004C6A82: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C6A88
 * Original: 0x004C6A88 - 0x004C6AA0 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6A88(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6A88: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561208), _icall_esp); /* indirect call */
    }

loc_004C6A92: ;
    ecx = MEM32(0x4E1D18);
    MEM32(ecx) = MEM32(ecx) - eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561190)); return; /* indirect tail jmp */

}

/**
 * sub_004C6AA0
 * Original: 0x004C6AA0 - 0x004C6AEF (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C6AA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610B0), _icall_esp); /* indirect call */
    }

loc_004C6AB7: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_004C6AE9; /* je: equal / zero */

loc_004C6ABD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610B4), _icall_esp); /* indirect call */
    }

loc_004C6AC4: ;
    edx = MEM32(0x4E1D14);
    MEM32(edx) = MEM32(edx) + eax;
    if (CMP_EQ(MEM32(esp + 0x14), 0)) goto loc_004C6AE9; /* je: equal / zero */

loc_004C6AD3: ;
    ecx = eax;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_004C6AE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C6AEF
 * Original: 0x004C6AEF - 0x004C6B07 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6AEF(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6AEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610B4), _icall_esp); /* indirect call */
    }

loc_004C6AF9: ;
    ecx = MEM32(0x4E1D14);
    MEM32(ecx) = MEM32(ecx) - eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5610BC)); return; /* indirect tail jmp */

}

/**
 * sub_004C6B07
 * Original: 0x004C6B07 - 0x004C6B6F (104 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6B07(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C6B07: ;
    ecx = MEM32(0x4E1C64);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_004C6B43; /* je: equal / zero */

loc_004C6B16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C996B(); /* call 0x004C996B */

loc_004C6B1C: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_004C6B49; /* je: equal / zero */

loc_004C6B22: ;
    if (CMP_EQ(MEM32(esp + 0x10), 0)) goto loc_004C6B45; /* je: equal / zero */

loc_004C6B29: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, ebx);
    goto loc_004C6B45;

loc_004C6B43: ;
    edx = 0; /* xor self */

loc_004C6B45: ;
    if (TEST_NZ(edx, edx)) goto loc_004C6B69; /* jne: not equal / not zero */

loc_004C6B49: ;
    PUSH32(esp, MEM32(esp + 0x10));
    esi = esi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004C6A41(); /* call 0x004C6A41 */

loc_004C6B5A: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_004C6B69; /* je: equal / zero */

loc_004C6B60: ;
    MEM32(edx) = 0x6C6F6F70;
    edx = edx + 4;

loc_004C6B69: ;
    eax = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C6B6F
 * Original: 0x004C6B6F - 0x004C6B88 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6B6F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6B6F: ;
    edx = MEM32(esp + 4);
    eax = edx + -4;
    ecx = MEM32(eax);
    if (CMP_NE(ecx, 0x6C6F6F70)) { sub_004C6B88(); return; } /* jne: not equal / not zero */

loc_004C6B80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6A88(); /* call 0x004C6A88 */

loc_004C6B86: ;
    g_seh_ebp = ebp; sub_004C6BA0(); return; /* tail jmp 0x004C6BA0 */

}

/**
 * sub_004C6C30
 * Original: 0x004C6C30 - 0x004C6C59 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6C30(void)
{

loc_004C6C30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax) = 1;
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0xE));
    MEM8(eax + 3) = LO8(edx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6C59
 * Original: 0x004C6C59 - 0x004C6C80 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6C59(void)
{

loc_004C6C59: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax) = 0x69;
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = 4;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6C80
 * Original: 0x004C6C80 - 0x004C6CA6 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6C80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx + 0x18;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    edi = 0x4E12B0;
    esi = eax;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) { sub_004C6CA6(); return; } /* jne: not equal / not zero */

loc_004C6C9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0); sub_004C6C30(); /* call 0x004C6C30 */

loc_004C6CA4: ;
    g_seh_ebp = ebp; sub_004C6CC0(); return; /* tail jmp 0x004C6CC0 */

}

/**
 * sub_004C6CC9
 * Original: 0x004C6CC9 - 0x004C6D0C (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6CC9(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C6CC9: ;
    ecx = MEM32(esp + 8);
    eax = ZX16(MEM16(ecx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax--;
    if ((eax == 0)) goto loc_004C6CFC; /* je: equal / zero */

loc_004C6CD6: ;
    eax = eax - 0x68;
    if ((eax == 0)) goto loc_004C6CF0; /* je: equal / zero */

loc_004C6CDB: ;
    eax = eax - 0xFF95;
    if ((eax != 0)) goto loc_004C6D06; /* jne: not equal / not zero */

loc_004C6CE2: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004C6C80(); /* call 0x004C6C80 */

loc_004C6CEC: ;
    esi = eax;
    goto loc_004C6D06;

loc_004C6CF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004C6C59(); /* call 0x004C6C59 */

loc_004C6CFA: ;
    goto loc_004C6D06;

loc_004C6CFC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004C6C30(); /* call 0x004C6C30 */

loc_004C6D06: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6D22
 * Original: 0x004C6D22 - 0x004C6D49 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6D22(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004C6D22: ;
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
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(3) */
    /* fstp st(0) */
    /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C6D49
 * Original: 0x004C6D49 - 0x004C6D7B (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6D49(void)
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

loc_004C6D49: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) { sub_004C6D7B(); return; } /* jne: not equal / not zero */

loc_004C6D5A: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004C6D79: ;
    g_seh_ebp = ebp; sub_004C6D7D(); return; /* tail jmp 0x004C6D7D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C6D80
 * Original: 0x004C6D80 - 0x004C6D98 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6D80(void)
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

loc_004C6D80: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_004C6D98(); return; } /* jp: parity */

loc_004C6D91: ;
    eax = 0xFFFFD8F0u;
    g_seh_ebp = ebp; sub_004C6DC6(); return; /* tail jmp 0x004C6DC6 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C6DC9
 * Original: 0x004C6DC9 - 0x004C6E06 (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6DC9(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004C6DC9: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(edx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(edx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C6E06
 * Original: 0x004C6E06 - 0x004C6E4F (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6E06(void)
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

loc_004C6E06: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 8), 1 - flags set for next jcc */
    ecx = MEM32(ebp + 0x10);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 0x14);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    if (CMP_EQ(MEM32(ebp + 8), 1)) goto loc_004C6E40; /* je: equal / zero */

loc_004C6E25: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_004C6E40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C951A(); /* call 0x004C951A */

loc_004C6E46: ;
    eax = MEM32(ebp + 0x18);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C6E4F
 * Original: 0x004C6E4F - 0x004C6E67 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6E4F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C6E4F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    (void)0; /* cmp MEM32(ebp + 8), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(ebp + 8), 1)) { sub_004C6E67(); return; } /* je: equal / zero */

loc_004C6E5C: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    g_seh_ebp = ebp; sub_004C6E76(); return; /* tail jmp 0x004C6E76 */

}

/**
 * sub_004C6FB2
 * Original: 0x004C6FB2 - 0x004C7029 (119 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6FB2(void)
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

loc_004C6FB2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C6D22(); /* call 0x004C6D22 */

loc_004C6FE2: ;
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ebp + -12;
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, eax);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C6D22(); /* call 0x004C6D22 */

loc_004C7007: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebp + 8] */
    POP32(esp, edi);
    POP32(esp, esi);
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 5 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    if (1 /* jp after test - parity */) { sub_004C7029(); return; } /* jp: parity */

loc_004C7016: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_004C7044(); return; /* tail jmp 0x004C7044 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C7048
 * Original: 0x004C7048 - 0x004C706B (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7048(void)
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

loc_004C7048: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 8), 1 - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(eax + 8)); /* fld float */
    if (CMP_NE(MEM32(ebp + 8), 1)) { sub_004C706B(); return; } /* jne: not equal / not zero */

loc_004C7057: ;
    ecx = MEM32(ebp + 0x14);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    g_seh_ebp = ebp; sub_004C7088(); return; /* tail jmp 0x004C7088 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C7093
 * Original: 0x004C7093 - 0x004C7198 (261 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7093(void)
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

loc_004C7093: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, esi);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp + 0xc] */
    PUSH32(esp, edi);
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_004C7198(); return; } /* jne: not equal / not zero */

loc_004C70AB: ;
    if (CMP_EQ(MEM32(ebp + 0x20), 0)) goto loc_004C70CC; /* je: equal / zero */

loc_004C70B1: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp + 0x10] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_004C70CC; /* jne: not equal / not zero */

loc_004C70BE: ;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = 0xFFFFD8F0u;
    g_seh_ebp = ebp; sub_004C719E(); return; /* tail jmp 0x004C719E */

loc_004C70CC: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp + 0x10] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004C70DF; /* jne: not equal / not zero */

loc_004C70D9: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x1C) = eax;

loc_004C70DF: ;
    edi = MEM32(ebp + 0x14);
    if (TEST_Z(edi, edi)) goto loc_004C717E; /* je: equal / zero */

loc_004C70EA: ;
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_004C717E; /* je: equal / zero */

loc_004C70F5: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    MEM32(ebp + 0x1C) = esi;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push((double)SMEM32(ebp + 0x1C)); /* fild */
    if (CMP_GE(esi & esi, 0)) goto loc_004C710F; /* jge: greater or equal (signed >=) */

loc_004C7109: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004C710F: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_push(1.0); /* fld1 */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_004C711F: ;
    if (CMP_B(eax, esi)) goto loc_004C7126; /* jb: below (unsigned <) */

loc_004C7123: ;
    eax = esi + -1;

loc_004C7126: ;
    if (TEST_NZ(eax, eax)) goto loc_004C7138; /* jne: not equal / not zero */

loc_004C712A: ;
    eax = MEM32(edi);
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEM32(ebp + -4) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_004C715C;

loc_004C7138: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = edi + eax * 4;
    edx = MEM32(ecx + -4);
    ecx = MEM32(ecx);
    MEM32(ebp + 0x10) = eax;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    if (CMP_GE(eax & eax, 0)) goto loc_004C7156; /* jge: greater or equal (signed >=) */

loc_004C7150: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004C7156: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fstp st(0) */

loc_004C715C: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_004C3774(); /* call 0x004C3774 */

loc_004C7177: ;
    ecx = MEM32(ebp + 0x24);
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_004C719E(); return; /* tail jmp 0x004C719E */

loc_004C717E: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C6D49(); /* call 0x004C6D49 */

loc_004C7196: ;
    goto loc_004C7177;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C71A4
 * Original: 0x004C71A4 - 0x004C71CD (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C71A4(void)
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

loc_004C71A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_004C71B7; /* jge: greater or equal (signed >=) */

loc_004C71B1: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004C71B7: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_004C71CD(); return; } /* jp: parity */

loc_004C71C3: ;
    eax = MEM32(ebp + 0x18);
    /* fstp st(0) */
    MEM32(eax) = MEM32(eax) & 0;
    g_seh_ebp = ebp; sub_004C7230(); return; /* tail jmp 0x004C7230 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C7234
 * Original: 0x004C7234 - 0x004C72F0 (188 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7234(void)
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

loc_004C7234: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_EQ(MEM32(ebp + 0x18), 0)) { sub_004C72F0(); return; } /* je: equal / zero */

loc_004C7241: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D10)); /* fld float */
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr st(1) */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004C7296; /* jne: not equal / not zero */

loc_004C7292: ;
    fp_push(1.0); /* fld1 */
    goto loc_004C72A8;

loc_004C7296: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004C72AB; /* jp: parity */

loc_004C72A6: ;
    fp_push(0.0); /* fldz */

loc_004C72A8: ;
    MEMF(ebp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */

loc_004C72AB: ;
    /* fld st(2) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(2) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004C72C4; /* jp: parity */

loc_004C72B6: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */

loc_004C72C4: ;
    /* fstp st(0) */
    PUSH32(esp, ecx);
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C6D80(); /* call 0x004C6D80 */

loc_004C72D8: ;
    ecx = MEM32(ebp + 0x1C);
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_004C6D80(); /* call 0x004C6D80 */

loc_004C72E9: ;
    ecx = MEM32(ebp + 0x20);
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_004C72FF(); return; /* tail jmp 0x004C72FF */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C7303
 * Original: 0x004C7303 - 0x004C7392 (143 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7303(void)
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

loc_004C7303: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_004C7318; /* je: equal / zero */

loc_004C7316: ;
    fp_top() = -fp_top(); /* fchs */

loc_004C7318: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004C7321: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = eax;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_004C7335; /* je: equal / zero */

loc_004C7333: ;
    fp_top() = -fp_top(); /* fchs */

loc_004C7335: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004C733E: ;
    if (CMP_GE(ecx, 0x2D)) { sub_004C7392(); return; } /* jge: greater or equal (signed >=) */

loc_004C7343: ;
    if (CMP_GE(eax, 0x2D)) { sub_004C7392(); return; } /* jge: greater or equal (signed >=) */

loc_004C7348: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    edi = edi << 2;
    fp_push(MEMF(edi + 0x4CED60)); /* fld float */
    esi = esi << 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C3774(); /* call 0x004C3774 */

loc_004C7369: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    fp_push(MEMF(edi + 0x4CECA8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    /* FPU: fsubr dword ptr [0x648d14] */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C3774(); /* call 0x004C3774 */

loc_004C7389: ;
    ecx = MEM32(ebp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C73A1(); return; /* tail jmp 0x004C73A1 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C73A5
 * Original: 0x004C73A5 - 0x004C73CC (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C73A5(void)
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

loc_004C73A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x648CF8)); /* fld float */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_004C73CC(); return; } /* jp: parity */

loc_004C73C2: ;
    eax = MEM32(ebp + 0x14);
    /* fstp st(0) */
    MEM32(eax) = MEM32(eax) & 0;
    g_seh_ebp = ebp; sub_004C741A(); return; /* tail jmp 0x004C741A */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C741E
 * Original: 0x004C741E - 0x004C743D (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C741E(void)
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

loc_004C741E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) { sub_004C743D(); return; } /* jne: not equal / not zero */

loc_004C7435: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    g_seh_ebp = ebp; sub_004C7443(); return; /* tail jmp 0x004C7443 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C753A
 * Original: 0x004C753A - 0x004C75A9 (111 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C753A(void)
{

loc_004C753A: ;
    MEM32(0x4E1D1C) = 0x4C6E06;
    MEM32(0x4E1D20) = 0x4C6E4F;
    MEM32(0x4E1D24) = 0x4C6FB2;
    MEM32(0x4E1D28) = 0x4C7048;
    MEM32(0x4E1D2C) = 0x4C7093;
    MEM32(0x4E1D30) = 0x4C71A4;
    MEM32(0x4E1D34) = 0x4C7234;
    MEM32(0x4E1D38) = 0x4C7303;
    MEM32(0x4E1D3C) = 0x4C73A5;
    MEM32(0x4E1D40) = 0x4C741E;
    MEM32(0x4E1D44) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_004C75A9
 * Original: 0x004C75A9 - 0x004C75C8 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C75A9(void)
{

loc_004C75A9: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = 0x1000;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = 0x8000;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004C75C8
 * Original: 0x004C75C8 - 0x004C75E8 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C75C8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C75C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    edi = 0x626F5344;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004C75DB: ;
    if (TEST_Z(eax, eax)) { sub_004C75E8(); return; } /* je: equal / zero */

loc_004C75DF: ;
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    g_seh_ebp = ebp; sub_004C75EA(); return; /* tail jmp 0x004C75EA */

}

/**
 * sub_004C763D
 * Original: 0x004C763D - 0x004C76A4 (103 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C763D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C763D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = MEM32(eax + 0x10);
    ebx = MEM32(eax);
    eax = MEM32(ebx + 0x80C);
    eax = eax + MEM32(ebx + 0x804);
    ecx = MEM32(edi + 0x20);
    esi = ebx + eax * 4 + 0x818;
    eax = MEM32(esi);
    eax--;
    eax = eax << 5;
    eax = eax + 0x28;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -16) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_004C7686; /* je: equal / zero */

loc_004C7679: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C767F: ;
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & 0;
    eax = MEM32(ebp + -16);

loc_004C7686: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004C7693: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x20) = eax;
    if (TEST_NZ(eax, eax)) { sub_004C76A4(); return; } /* jne: not equal / not zero */

loc_004C769A: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_004C77AB(); return; /* tail jmp 0x004C77AB */

}

/**
 * sub_004C77B2
 * Original: 0x004C77B2 - 0x004C77C7 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C77B2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C77B2: ;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    edx--;
    if (CMP_BE(ecx, edx)) { sub_004C77C7(); return; } /* jbe: below or equal (unsigned <=) */

loc_004C77C0: ;
    eax = 0x88780032u;
    g_seh_ebp = ebp; sub_004C77D6(); return; /* tail jmp 0x004C77D6 */

}

/**
 * sub_004C77D9
 * Original: 0x004C77D9 - 0x004C783E (101 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C77D9(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C77D9: ;
    edx = MEM32(esp + 8);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(edx, edx)) goto loc_004C77F6; /* jne: not equal / not zero */

loc_004C77E2: ;
    esi = MEM32(ecx + 0x18);
    (void)0; /* cmp esi, 0x8000 - flags set for next jcc */
    edx = MEM32(ecx + 0x1C);
    if (CMP_EQ(esi, 0x8000)) goto loc_004C783A; /* je: equal / zero */

loc_004C77F0: ;
    if (TEST_Z(edx, edx)) goto loc_004C783A; /* je: equal / zero */

loc_004C77F4: ;
    goto loc_004C77FA;

loc_004C77F6: ;
    esi = MEM32(esp + 8);

loc_004C77FA: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    eax = eax + 0x800;

loc_004C7807: ;
    if (CMP_NE(MEM32(eax + 0x10), 0)) goto loc_004C7807; /* jne: not equal / not zero */

loc_004C780D: ;
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = ebx >> 2;
    ebx = ebx - MEM32(eax + 4);
    edx = edx >> 2;
    ebx = ebx - 0x206;
    MEM32(eax) = ebx;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = 2;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) & 0;
    MEM32(ecx + 0x18) = 0x8000;
    POP32(esp, ebx);

loc_004C783A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C783E
 * Original: 0x004C783E - 0x004C7852 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C783E(void)
{

loc_004C783E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(ecx + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004CD169(); /* call 0x004CD169 */

loc_004C784F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C7852
 * Original: 0x004C7852 - 0x004C7869 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7852(void)
{

loc_004C7852: ;
    eax = ecx + 4;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004CD169(); /* call 0x004CD169 */

loc_004C7866: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C7869
 * Original: 0x004C7869 - 0x004C78AA (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7869(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C7869: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    if (TEST_Z(edi, edi)) goto loc_004C7885; /* je: equal / zero */

loc_004C7874: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004CD088(); /* call 0x004CD088 */

loc_004C787B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C7881: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;

loc_004C7885: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004C7896; /* je: equal / zero */

loc_004C788C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C7892: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;

loc_004C7896: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_004C78A7; /* je: equal / zero */

loc_004C789D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C78A3: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;

loc_004C78A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C78AA
 * Original: 0x004C78AA - 0x004C7943 (153 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C78AA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C78AA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    MEM32(ebp + -4) = edx;
    ebx = MEM32(ebp + 8);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    esi = MEM32(eax);
    eax = 0; /* xor self */
    esi = esi + 0x800;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x800);
    MEM32(esi) = eax;
    eax = MEM32(ebx + 0x804);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebx + 0x808);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 0x80C);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebx + 0x814);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 8);
    eax = eax + 0xFFFFF7E8u;
    PUSH32(esp, eax);
    eax = ebx + 0x818;
    PUSH32(esp, eax);
    PUSH32(esp, 0x818);
    PUSH32(esp, 0); sub_004CD1BB(); /* call 0x004CD1BB */

loc_004C7919: ;
    edi = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004C763D(); /* call 0x004C763D */

loc_004C7924: ;
    if (TEST_S(eax, eax)) goto loc_004C793C; /* jl: less (signed <) */

loc_004C7928: ;
    ecx = MEM32(ebp + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_004C7934; /* je: equal / zero */

loc_004C792F: ;
    edx = MEM32(edi + 0x20);
    MEM32(ecx) = edx;

loc_004C7934: ;
    PUSH32(esp, 6);
    edi = edi + 0x24;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_004C793C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C7943
 * Original: 0x004C7943 - 0x004C79EC (169 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7943(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C7943: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    edi = ecx;
    PUSH32(esp, 0); sub_004C77B2(); /* call 0x004C77B2 */

loc_004C7955: ;
    if (TEST_S(eax, eax)) goto loc_004C79E7; /* jl: less (signed <) */

loc_004C795D: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax);
    edx = MEM32(ebp + 8);
    eax = MEM32(eax + 0x804);
    edx = MEM32(edx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = edx + eax * 4 + 0x17D0618;
    esi = esi + MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004CD1BB(); /* call 0x004CD1BB */

loc_004C798A: ;
    if (TEST_Z(MEM8(ebp + 0x18), 1)) goto loc_004C79C7; /* je: equal / zero */

loc_004C7990: ;
    eax = MEM32(edi + 0x18);
    if (CMP_EQ(eax, 0x8000)) goto loc_004C79B9; /* je: equal / zero */

loc_004C799A: ;
    ecx = MEM32(edi + 0x1C);
    edx = ecx + eax;
    if (CMP_AE(edx, esi)) goto loc_004C79AE; /* jae: above or equal (unsigned >=) */

loc_004C79A4: ;
    edx = esi;
    edx = edx - ecx;
    edx = edx - eax;
    ebx = ebx + edx;
    goto loc_004C79B9;

loc_004C79AE: ;
    ecx = esi + ebx;
    if (CMP_BE(eax, ecx)) goto loc_004C79B9; /* jbe: below or equal (unsigned <=) */

loc_004C79B5: ;
    ebx = eax;
    ebx = ebx - esi;

loc_004C79B9: ;
    if (CMP_B(eax, esi)) goto loc_004C79BF; /* jb: below (unsigned <) */

loc_004C79BD: ;
    eax = esi;

loc_004C79BF: ;
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + ebx;
    MEM32(edi + 0x18) = eax;
    goto loc_004C79E3;

loc_004C79C7: ;
    eax = MEM32(ebp + 8);
    edi = MEM32(eax + 8);
    edi = edi + MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    ecx = ebx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_004C79E3: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);

loc_004C79E7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004C79EC
 * Original: 0x004C79EC - 0x004C7A26 (58 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C79EC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C79EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004C77B2(); /* call 0x004C77B2 */

loc_004C79FB: ;
    if (TEST_S(eax, eax)) goto loc_004C7A22; /* jl: less (signed <) */

loc_004C79FF: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    esi = esi + MEM32(ebp + 0xC);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);

loc_004C7A22: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C7A26
 * Original: 0x004C7A26 - 0x004C7A50 (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7A26(void)
{

loc_004C7A26: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C7A50
 * Original: 0x004C7A50 - 0x004C7AE8 (152 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7A50(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C7A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x586074;
    MEM32(esi + 4) = 1;
    PUSH32(esp, 0); sub_004CDB63(); /* call 0x004CDB63 */

loc_004C7A6F: ;
    ecx = esi + 0x60;
    MEM32(esi) = 0x586090;
    MEM32(edi) = 0x58608C;
    MEM32(esi + 0x58) = 0x4E164C;
    MEM32(esi + 0x5C) = 0x4E1650;
    PUSH32(esp, 0); sub_004C961E(); /* call 0x004C961E */

loc_004C7A91: ;
    PUSH32(esp, 3);
    eax = esi + 0x488;
    POP32(esp, ecx);

loc_004C7A9A: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = eax + 8;
    ecx--;
    if ((ecx != 0)) goto loc_004C7A9A; /* jne: not equal / not zero */

loc_004C7AA5: ;
    eax = esi + 0x4A0;
    MEM32(esi + 0x4A4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x4A8;
    MEM32(esi + 0x4AC) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x4B0;
    MEM32(esi + 0x4B4) = eax;
    MEM32(eax) = eax;
    eax = MEM32(esi + 0x58);
    MEM32(eax) = 0xC0;
    eax = MEM32(esi + 0x5C);
    MEM32(eax) = 0x40;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7AE8
 * Original: 0x004C7AE8 - 0x004C7B17 (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7AE8(void)
{
    uint32_t ebp;

loc_004C7AE8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C7AFF: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    ebx = esi + 0x488;
    MEM32(ebp + -4) = 3;
    edi = MEM32(ebx);
    g_seh_ebp = ebp; sub_004C7B23(); return; /* tail jmp 0x004C7B23 */

}

/**
 * sub_004C7B4B
 * Original: 0x004C7B4B - 0x004C7B7D (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7B4B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C7B4B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C7B62: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x70);
    if (TEST_Z(MEM32(eax + 8), 0x200010)) { sub_004C7B7D(); return; } /* je: equal / zero */

loc_004C7B78: ;
    edx = MEM32(esi + 0x5C);
    g_seh_ebp = ebp; sub_004C7B83(); return; /* tail jmp 0x004C7B83 */

}

/**
 * sub_004C7BDC
 * Original: 0x004C7BDC - 0x004C7C49 (109 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7BDC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C7BDC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C7BF1: ;
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    edi = 0; /* xor self */
    if (CMP_BE(MEM8(edx + 0x64), 0)) goto loc_004C7C34; /* jbe: below or equal (unsigned <=) */

loc_004C7C03: ;
    eax = ZX16(LO16(edi));
    eax = edx + eax * 2 + 0xC;
    ecx = ZX16(MEM16(eax));
    MEM16(eax) = MEM16(eax) | 0xFFFF;
    MEM32(esi + ecx * 4 + 0x88) = MEM32(esi + ecx * 4 + 0x88) & 0;
    if (CMP_AE(ecx, 0x40)) goto loc_004C7C24; /* jae: above or equal (unsigned >=) */

loc_004C7C1F: ;
    eax = MEM32(esi + 0x5C);
    goto loc_004C7C27;

loc_004C7C24: ;
    eax = MEM32(esi + 0x58);

loc_004C7C27: ;
    MEM32(eax) = MEM32(eax) + 1;
    SET_LO16(eax, ZX8(MEM8(edx + 0x64)));
    edi++;
    if (CMP_B(LO16(edi), LO16(eax))) goto loc_004C7C03; /* jb: below (unsigned <) */

loc_004C7C34: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C7C43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7C49
 * Original: 0x004C7C49 - 0x004C7C8F (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7C49(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7C49: ;
    eax = MEM32(0x4E1C5C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x4E1DF0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    eax++;
    POP32(esp, ebx);
    MEM32(0x4E1C5C) = eax;
    edi = ecx + 8;
    eax = ~eax;
    MEM32(esi) = eax;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); sub_004CD8D6(); /* call 0x004CD8D6 */

loc_004C7C70: ;
    eax = MEM32(0x4E1DF4);
    MEM32(0xFE801324u) = eax;
    eax = MEM32(0x4E1C5C);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(0xFE801334u) = eax;
    PUSH32(esp, 0); sub_004CD8D6(); /* call 0x004CD8D6 */

loc_004C7C8D: ;
    g_seh_ebp = ebp; sub_004C7C9E(); return; /* tail jmp 0x004C7C9E */

}

/**
 * sub_004C7CAC
 * Original: 0x004C7CAC - 0x004C7CCB (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7CAC(void)
{
    uint32_t ebp;

loc_004C7CAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_004C7C49(); /* call 0x004C7C49 */

loc_004C7CBA: ;
    ebx = esi + 0x488;
    MEM32(ebp + -4) = 3;
    edi = MEM32(ebx);
    g_seh_ebp = ebp; sub_004C7CEB(); return; /* tail jmp 0x004C7CEB */

}

/**
 * sub_004C7D25
 * Original: 0x004C7D25 - 0x004C7D51 (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7D25(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C7D25: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x4B8;
    MEM32(ebp + 8) = eax;
    edx = 0;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);

loc_004C7D3F: ;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if ((MEM32(ecx) != eax)) goto loc_004C7D3F; /* jne: not equal / not zero */

loc_004C7D44: ;
    MEM32(esi + 0x4C0) = MEM32(esi + 0x4C0) | eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7D51
 * Original: 0x004C7D51 - 0x004C7DBF (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7D51(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C7D51: ;
    MEM32(0x4E1658) = MEM32(0x4E1658) + 1;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_004CD968(); /* call 0x004CD968 */

loc_004C7D67: ;
    ecx = MEM32(esi + 0x1C);
    if (TEST_Z(ecx, ecx)) goto loc_004C7D73; /* je: equal / zero */

loc_004C7D6E: ;
    PUSH32(esp, 0); sub_004CE34C(); /* call 0x004CE34C */

loc_004C7D73: ;
    ecx = MEM32(esi + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_004C7D7F; /* je: equal / zero */

loc_004C7D7A: ;
    PUSH32(esp, 0); sub_004CE34C(); /* call 0x004CE34C */

loc_004C7D7F: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004CDABD(); /* call 0x004CDABD */

loc_004C7D86: ;
    ecx = edi;
    MEM32(-24772612) = 1;
    PUSH32(esp, 0); sub_004CD642(); /* call 0x004CD642 */

loc_004C7D97: ;
    ecx = MEM32(esi + 0x1C);
    if (TEST_Z(ecx, ecx)) goto loc_004C7DA5; /* je: equal / zero */

loc_004C7D9E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_004CE40C(); /* call 0x004CE40C */

loc_004C7DA5: ;
    ecx = MEM32(esi + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_004C7DB3; /* je: equal / zero */

loc_004C7DAC: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_004CE40C(); /* call 0x004CE40C */

loc_004C7DB3: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0); sub_004CD968(); /* call 0x004CD968 */

loc_004C7DBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C7DBF
 * Original: 0x004C7DBF - 0x004C7E49 (138 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7DBF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7DBF: ;
    MEM32(0x4E1634) = MEM32(0x4E1634) + 1;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004CE34C(); /* call 0x004CE34C */

loc_004C7DD2: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0); sub_004CE34C(); /* call 0x004CE34C */

loc_004C7DDA: ;
    edi = esi + 8;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0); sub_004CD968(); /* call 0x004CD968 */

loc_004C7DE6: ;
    ebx = 0; /* xor self */
    ebx++;
    (void)0; /* test MEM8(0x4E1DB8), LO8(ebx) - flags set for next jcc */
    MEM32(-24903684) = ebx;
    MEM32(-24903920) = ebx;
    MEM32(-24903916) = 0xFF;
    MEM32(-25153492) = 0;
    PUSH32(esp, 3);
    POP32(esp, eax);
    MEM32(0xFE83FFFCu) = eax;
    MEM32(-24772612) = ebx;
    MEM32(-24772848) = ebx;
    MEM32(-24772844) = 0xFFFFFFFFu;
    MEM32(0xFE85FFFCu) = eax;
    if (TEST_NZ(MEM8(0x4E1DB8), LO8(ebx))) { sub_004C7E49(); return; } /* jne: not equal / not zero */

loc_004C7E34: ;
    eax = MEM32(0x4E15E0);
    MEM32(0x4E1DB8) = MEM32(0x4E1DB8) | ebx;
    eax = eax >> 2;
    MEM32(0x4E15E8) = eax;
    g_seh_ebp = ebp; sub_004C7E4E(); return; /* tail jmp 0x004C7E4E */

}

/**
 * sub_004C7EA6
 * Original: 0x004C7EA6 - 0x004C7EF6 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7EA6(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C7EA6: ;
    eax = MEM32(esp + 4);
    if (CMP_AE(eax, 0x100)) goto loc_004C7EF3; /* jae: above or equal (unsigned >=) */

loc_004C7EB1: ;
    if (CMP_NE(MEM32(ecx + 0x84), 0)) goto loc_004C7EF3; /* jne: not equal / not zero */

loc_004C7EBA: ;
    PUSH32(esp, esi);
    esi = MEM32(0x4E1E00);
    edx = eax;
    edx = edx << 7;
    (void)0; /* test MEM32(edx + esi + 4), 0x800000 - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(MEM32(edx + esi + 4), 0x800000)) goto loc_004C7EF3; /* jne: not equal / not zero */

loc_004C7ED1: ;
    ecx = MEM32(ecx + eax * 4 + 0x88);
    edx = ZX8(MEM8(ecx + 0x64));
    edx = ZX16(MEM16(ecx + edx * 2 + 0xA));
    if (CMP_NE(eax, edx)) goto loc_004C7EF3; /* jne: not equal / not zero */

loc_004C7EE5: ;
    eax = ecx + 0x4C;
    if (CMP_EQ(MEM32(eax), eax)) goto loc_004C7EF3; /* je: equal / zero */

loc_004C7EEC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004CA2A5(); /* call 0x004CA2A5 */

loc_004C7EF3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7EF6
 * Original: 0x004C7EF6 - 0x004C7F1B (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7EF6(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C7EF6: ;
    eax = MEM32(esp + 4);
    if (TEST_NZ(MEM8(eax + 8), 2)) goto loc_004C7F15; /* jne: not equal / not zero */

loc_004C7F00: ;
    ecx = ecx + 0x4B0;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;

loc_004C7F15: ;
    eax = 0; /* xor self */
    eax++;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C7F1B
 * Original: 0x004C7F1B - 0x004C7F59 (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7F1B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C7F1B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x4A8;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, MEM32(esi) - flags set for next jcc */
    PUSH32(esp, eax);
    SET_LO8(ebx, (CMP_EQ(eax, MEM32(esi))) ? 1 : 0); /* sete */
    PUSH32(esp, 0); sub_004C3680(); /* call 0x004C3680 */

loc_004C7F37: ;
    eax = MEM32(esi);
    if (CMP_NE(eax, esi)) { sub_004C7F59(); return; } /* jne: not equal / not zero */

loc_004C7F3D: ;
    eax = edi + 0x4E8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_004C7F4A: ;
    edi = edi + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611C8), _icall_esp); /* indirect call */
    }

loc_004C7F57: ;
    g_seh_ebp = ebp; sub_004C7F77(); return; /* tail jmp 0x004C7F77 */

}

/**
 * sub_004C7F7D
 * Original: 0x004C7F7D - 0x004C7F9C (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7F7D(void)
{
    uint32_t ebp;

loc_004C7F7D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C7F94: ;
    edi = ebx + 0x4A8;
    g_seh_ebp = ebp; sub_004C7FD0(); return; /* tail jmp 0x004C7FD0 */

}

/**
 * sub_004C7FFF
 * Original: 0x004C7FFF - 0x004C8026 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C7FFF(void)
{
    uint32_t ebp;

loc_004C7FFF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, ebx);
    eax = ebp + -8;
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C801E: ;
    edi = ebx + 0x4B0;
    g_seh_ebp = ebp; sub_004C8030(); return; /* tail jmp 0x004C8030 */

}

/**
 * sub_004C80A7
 * Original: 0x004C80A7 - 0x004C80DE (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C80A7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C80A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C80B8: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    if (CMP_B(eax, 4)) goto loc_004C80B8; /* jb: below (unsigned <) */

loc_004C80C5: ;
    eax = MEM32(ebp + 8);
    eax = eax & 7;
    ecx = ebp + -8;
    MEM32(0xFE820280u) = eax;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C80D8: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C80DE
 * Original: 0x004C80DE - 0x004C8123 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C80DE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C80DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C80F2: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    if (CMP_B(eax, 4)) goto loc_004C80F2; /* jb: below (unsigned <) */

loc_004C80FF: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ecx + eax + 0x10));
    ecx = ecx & 7;
    MEM32(eax * 4 + -25034240) = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C811C: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8123
 * Original: 0x004C8123 - 0x004C8145 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8123(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8123: ;
    edx = MEM32(esp + 4);
    edx = ZX8(MEM8(edx + 0x64));
    ecx = ecx + 0x53C;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = edx + esi;
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 0x1D - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_BE(edx, 0x1D)) { sub_004C8145(); return; } /* jbe: below or equal (unsigned <=) */

loc_004C813E: ;
    eax = 0x88780032u;
    g_seh_ebp = ebp; sub_004C8147(); return; /* tail jmp 0x004C8147 */

}

/**
 * sub_004C814A
 * Original: 0x004C814A - 0x004C815B (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C814A(void)
{

loc_004C814A: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x64));
    MEM32(ecx + 0x53C) = MEM32(ecx + 0x53C) - eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C815B
 * Original: 0x004C815B - 0x004C829A (319 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C815B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C815B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x53C);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_004C8293; /* je: equal / zero */

loc_004C8179: ;
    PUSH32(esp, 1);
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004C8188: ;
    edi = eax;
    ebx = edi;
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x7FF8FFF2;
    ebx = ebx + 0x8007000Eu;
    MEM32(ebp + -20) = ebx;
    if (((int32_t)ebx < 0)) goto loc_004C8289; /* js: sign (negative) */

loc_004C81A5: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    ecx = ebp + -28;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C81B1: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    eax = esi + 0x88;
    ecx = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0x100;

loc_004C81CA: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_004C8214; /* je: equal / zero */

loc_004C81D3: ;
    SET_LO16(edx, MEM16(eax + 0x12));
    SET_LO16(edx, LO16(edx) & 0x447);
    if (CMP_NE(LO16(edx), 0x43)) goto loc_004C8208; /* jne: not equal / not zero */

loc_004C81E2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (CMP_BE(MEM8(eax + 0x64), 0)) goto loc_004C8208; /* jbe: below or equal (unsigned <=) */

loc_004C81EC: ;
    edx = eax + 0xC;

loc_004C81EF: ;
    SET_LO16(ebx, MEM16(edx));
    MEM16(edi + ecx * 2) = LO16(ebx);
    ebx = ZX8(MEM8(eax + 0x64));
    ecx++;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    edx++;
    edx++;
    if (CMP_B(MEM32(ebp + -4), ebx)) goto loc_004C81EF; /* jb: below (unsigned <) */

loc_004C8205: ;
    ebx = MEM32(ebp + -20);

loc_004C8208: ;
    SET_LO16(edx, MEM16(eax + 0x12));
    SET_LO16(edx, LO16(edx) & 0xFFBF);
    MEM16(eax + 0x12) = LO16(edx);

loc_004C8214: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    if ((MEM32(ebp + -12) != 0)) goto loc_004C81CA; /* jne: not equal / not zero */

loc_004C821D: ;
    MEM32(esi + 0x53C) = MEM32(esi + 0x53C) & 0;
    eax = ecx + 3;

loc_004C8227: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, eax)) goto loc_004C8227; /* jb: below (unsigned <) */

loc_004C8234: ;
    eax = ZX16(MEM16(edi));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(0xFE8202F8u) = eax;
    MEM32(-25033988) = 1;
    if (CMP_BE(ecx & ecx, 0)) goto loc_004C8270; /* jbe: below or equal (unsigned <=) */

loc_004C824E: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(edi + eax * 2));
    edx = MEM32(ebp + -16);
    edx = edx & 0xFFFF0000u;
    eax = eax | edx;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    (void)0; /* cmp MEM32(ebp + -4), ecx - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    MEM32(0xFE820140u) = eax;
    if (CMP_B(MEM32(ebp + -4), ecx)) goto loc_004C824E; /* jb: below (unsigned <) */

loc_004C8270: ;
    MEM32(-25033988) = 0;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    ecx = ebp + -28;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C8289: ;
    if (TEST_Z(edi, edi)) goto loc_004C8293; /* je: equal / zero */

loc_004C828D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C8293: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C829A
 * Original: 0x004C829A - 0x004C8351 (183 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C829A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C829A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x224;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_004C36E9(); /* call 0x004C36E9 */

loc_004C82AE: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(MEM16(eax + 0x80), 0xFFF)) goto loc_004C8346; /* je: equal / zero */

loc_004C82C0: ;
    eax = MEM32(eax + 8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004C8346; /* je: equal / zero */

loc_004C82C8: ;
    PUSH32(esp, edi);
    edi = 0x118;
    PUSH32(esp, edi);
    ecx = ebp + -548;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C79EC(); /* call 0x004C79EC */

loc_004C82E1: ;
    if (TEST_S(eax, eax)) goto loc_004C8345; /* jl: less (signed <) */

loc_004C82E5: ;
    eax = ebp + -548;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    eax = eax + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C48F4(); /* call 0x004C48F4 */

loc_004C82FA: ;
    MEM32(ebp + -532) = MEM32(ebp + -532) | 4;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -532;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0); sub_004C7943(); /* call 0x004C7943 */

loc_004C831C: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0x108);
    eax = ebp + -268;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0); sub_004C7943(); /* call 0x004C7943 */

loc_004C8339: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004C77D9(); /* call 0x004C77D9 */

loc_004C8345: ;
    POP32(esp, edi);

loc_004C8346: ;
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_004C370E(); /* call 0x004C370E */

loc_004C834E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C8379
 * Original: 0x004C8379 - 0x004C8424 (171 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8379(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8379: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x586090;
    MEM32(esi + 8) = 0x58608C;
    PUSH32(esp, 0); sub_004C7AE8(); /* call 0x004C7AE8 */

loc_004C8391: ;
    if (CMP_EQ(MEM32(0x4E1D48), 0)) goto loc_004C83AC; /* je: equal / zero */

loc_004C839A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1D48);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561170), _icall_esp); /* indirect call */
    }

loc_004C83A5: ;
    MEM32(0x4E1D48) = MEM32(0x4E1D48) & 0;

loc_004C83AC: ;
    eax = esi + 0x4E8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_004C83B9: ;
    ebp = MEM32(0x5611C8);
    edi = esi + 0x4C8;
    if (CMP_NE(MEM16(edi), 0x13)) goto loc_004C83D1; /* jne: not equal / not zero */

loc_004C83CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_004C83CE: ;
    MEM16(edi) = ~MEM16(edi);

loc_004C83D1: ;
    ebx = esi + 0x510;
    if (CMP_NE(MEM16(ebx), 0x13)) goto loc_004C83E9; /* jne: not equal / not zero */

loc_004C83DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_004C83E0: ;
    SET_LO16(eax, MEM16(edi));
    SET_LO16(eax, ~LO16(eax));
    MEM16(ebx) = LO16(eax);

loc_004C83E9: ;
    edi = esi + 0x52C;
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM32(edi), ebx)) goto loc_004C83FF; /* je: equal / zero */

loc_004C83F5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56112C), _icall_esp); /* indirect call */
    }

loc_004C83FD: ;
    MEM32(edi) = ebx;

loc_004C83FF: ;
    eax = MEM32(esi + 0x58);
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x5C);
    ecx = esi + 0x60;
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_004C963E(); /* call 0x004C963E */

loc_004C8411: ;
    ecx = esi + 8;
    PUSH32(esp, 0); sub_004CDB86(); /* call 0x004CDB86 */

loc_004C8419: ;
    POP32(esp, edi);
    MEM32(esi) = 0x586074;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C8424
 * Original: 0x004C8424 - 0x004C843C (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8424(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8424: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x56120C);
    esi = ecx;
    ebp = 0x4C7D25;
    ebx = 0x4E1D48;
    g_seh_ebp = ebp; sub_004C8453(); return; /* tail jmp 0x004C8453 */

}

/**
 * sub_004C8466
 * Original: 0x004C8466 - 0x004C847C (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8466(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C8466: ;
    if (CMP_NE(MEM32(esp + 4), 0x8000)) goto loc_004C8479; /* jne: not equal / not zero */

loc_004C8470: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_004C7EA6(); /* call 0x004C7EA6 */

loc_004C8479: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C847C
 * Original: 0x004C847C - 0x004C84C0 (68 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C847C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C847C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C8491: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    if (TEST_Z(LO8(eax), 2)) goto loc_004C84AE; /* je: equal / zero */

loc_004C849B: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 1)) goto loc_004C84A7; /* je: equal / zero */

loc_004C84A0: ;
    PUSH32(esp, 0); sub_004C3680(); /* call 0x004C3680 */

loc_004C84A5: ;
    goto loc_004C84AE;

loc_004C84A7: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004C7F1B(); /* call 0x004C7F1B */

loc_004C84AE: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFDu;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C84BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C84E7
 * Original: 0x004C84E7 - 0x004C852E (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C84E7(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C84E7: ;
    eax = MEM32(0xFE801100u);
    PUSH32(esp, esi);
    edx = 0xF00;
    PUSH32(esp, edi);
    eax = eax & edx;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    edi = ecx;
    ecx = MEM32(-25160960);
    esi = MEM32(-25160956);
    if (CMP_NE(eax, edx)) goto loc_004C8516; /* jne: not equal / not zero */

loc_004C8507: ;
    ecx = ecx & 0xFFFF;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); sub_004C8466(); /* call 0x004C8466 */

loc_004C8516: ;
    esi = edi + 8;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004CD90D(); /* call 0x004CD90D */

loc_004C8522: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_004CD90D(); /* call 0x004CD90D */

loc_004C852B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C852E
 * Original: 0x004C852E - 0x004C8604 (214 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C852E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C852E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    eax = eax | MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = edi;
    if ((eax == 0)) goto loc_004C85F7; /* je: equal / zero */

loc_004C854A: ;
    eax = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_004C8554: ;
    eax = MEM32(esi + 0x1C);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi + 0x18);
    if (CMP_G(eax & eax, 0)) goto loc_004C8574; /* jg: greater (signed >) */

loc_004C855E: ;
    if (TEST_S(eax, eax)) goto loc_004C8564; /* jl: less (signed <) */

loc_004C8560: ;
    if (CMP_A(ecx & ecx, 0)) goto loc_004C8574; /* ja: above (unsigned >) */

loc_004C8564: ;
    edx = MEM32(ebp + -12);
    edx = edx - ecx;
    ecx = MEM32(ebp + -8);
    ecx = ecx - eax - _cf; /* sbb */
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = ecx;

loc_004C8574: ;
    eax = MEM32(esi + 0x1C);
    if (CMP_L(eax, MEM32(ebp + -8))) goto loc_004C85F7; /* jl: less (signed <) */

loc_004C857C: ;
    if (CMP_G(eax, MEM32(ebp + -8))) goto loc_004C8586; /* jg: greater (signed >) */

loc_004C857E: ;
    eax = MEM32(esi + 0x18);
    if (CMP_BE(eax, MEM32(ebp + -12))) goto loc_004C85F7; /* jbe: below or equal (unsigned <=) */

loc_004C8586: ;
    (void)0; /* test MEM8(esi + 8), 2 - flags set for next jcc */
    MEM32(ebp + 8) = 1;
    if (TEST_Z(MEM8(esi + 8), 2)) goto loc_004C859B; /* je: equal / zero */

loc_004C8593: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004C847C(); /* call 0x004C847C */

loc_004C859B: ;
    ecx = edi + 0x4A8;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) goto loc_004C85C8; /* je: equal / zero */

loc_004C85A7: ;
    edx = MEM32(esi + 0x18);
    edi = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);

loc_004C85AE: ;
    ebx = MEM32(eax + 0x1C);
    if (CMP_G(ebx, edi)) goto loc_004C85C4; /* jg: greater (signed >) */

loc_004C85B5: ;
    if (CMP_L(ebx, edi)) goto loc_004C85BE; /* jl: less (signed <) */

loc_004C85B7: ;
    ebx = MEM32(eax + 0x18);
    if (CMP_A(ebx, edx)) goto loc_004C85C4; /* ja: above (unsigned >) */

loc_004C85BE: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, ecx)) goto loc_004C85AE; /* jne: not equal / not zero */

loc_004C85C4: ;
    edi = MEM32(ebp + -4);
    POP32(esp, ebx);

loc_004C85C8: ;
    MEM32(esi) = eax;
    eax = MEM32(eax + 4);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    eax = MEM32(esi);
    MEM32(eax + 4) = esi;
    if (CMP_NE(esi, MEM32(ecx))) goto loc_004C85FB; /* jne: not equal / not zero */

loc_004C85DB: ;
    eax = edi + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    edi = edi + 0x4E8;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_004C85F5: ;
    goto loc_004C85FB;

loc_004C85F7: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;

loc_004C85FB: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8604
 * Original: 0x004C8604 - 0x004C8659 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8604(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C8604: ;
    PUSH32(esp, ebx);
    ebx = MEM32(-25161728);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    edi = edi & 1;
    esi = ecx;
    if ((edi == 0)) goto loc_004C8653; /* je: equal / zero */

loc_004C8616: ;
    MEM32(-25161728) = ebx;
    MEM32(esi + 0x4B8) = MEM32(esi + 0x4B8) | ebx;
    if (TEST_Z(LO8(ebx), 0x10)) goto loc_004C862C; /* je: equal / zero */

loc_004C8627: ;
    PUSH32(esp, 0); sub_004C84E7(); /* call 0x004C84E7 */

loc_004C862C: ;
    if (TEST_Z(LO8(ebx), 8)) goto loc_004C8638; /* je: equal / zero */

loc_004C8631: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004C7D51(); /* call 0x004C7D51 */

loc_004C8638: ;
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_004C864E; /* je: equal / zero */

loc_004C863D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esi + 0x4C8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E0), _icall_esp); /* indirect call */
    }

loc_004C864E: ;
    eax = MEM32(0xFE801000u);

loc_004C8653: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C8659
 * Original: 0x004C8659 - 0x004C8681 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8659(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C8659: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C866E: ;
    esi = MEM32(ebp + 8);
    (void)0; /* test MEM8(esi + 8), 1 - flags set for next jcc */
    ecx = edi;
    PUSH32(esp, esi);
    if (TEST_Z(MEM8(esi + 8), 1)) { sub_004C8681(); return; } /* je: equal / zero */

loc_004C867A: ;
    PUSH32(esp, 0); sub_004C7EF6(); /* call 0x004C7EF6 */

loc_004C867F: ;
    g_seh_ebp = ebp; sub_004C8686(); return; /* tail jmp 0x004C8686 */

}

/**
 * sub_004C86AC
 * Original: 0x004C86AC - 0x004C879E (242 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C86AC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C86AC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 8;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0); sub_004CDFED(); /* call 0x004CDFED */

loc_004C86BD: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004C8780; /* jl: less (signed <) */

loc_004C86C7: ;
    PUSH32(esp, 0x7FF);
    ecx = esi + 0x60;
    PUSH32(esp, 0); sub_004C9660(); /* call 0x004C9660 */

loc_004C86D4: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004C8780; /* jl: less (signed <) */

loc_004C86DE: ;
    ebx = MEM32(0x5610E4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4C84C0);
    eax = esi + 0x4C8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_004C86F3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x4E8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561148), _icall_esp); /* indirect call */
    }

loc_004C8702: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4C8351);
    eax = esi + 0x510;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_004C8711: ;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561168), _icall_esp); /* indirect call */
    }

loc_004C871E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    ebx = 0x4E1D48;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4C86A0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56116C), _icall_esp); /* indirect call */
    }

loc_004C8739: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561164), _icall_esp); /* indirect call */
    }

loc_004C8740: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004C8749; /* jne: not equal / not zero */

loc_004C8744: ;
    edi = 0x80004005u;

loc_004C8749: ;
    if (TEST_S(edi, edi)) goto loc_004C8780; /* jl: less (signed <) */

loc_004C874D: ;
    PUSH32(esp, 1);
    ecx = ebp;
    MEM32(-25161728) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_004CD89F(); /* call 0x004CD89F */

loc_004C8760: ;
    eax = esi + 0x52C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(eax) = 0x4C835D;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56112C), _icall_esp); /* indirect call */
    }

loc_004C8775: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004C80A7(); /* call 0x004C80A7 */

loc_004C877E: ;
    edi = eax;

loc_004C8780: ;
    ebx = 0; /* xor self */

loc_004C8782: ;
    if (TEST_S(edi, edi)) goto loc_004C8796; /* jl: less (signed <) */

loc_004C8786: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004C80DE(); /* call 0x004C80DE */

loc_004C878E: ;
    ebx++;
    (void)0; /* cmp ebx, 0x20 - flags set for next jcc */
    edi = eax;
    if (CMP_B(ebx, 0x20)) goto loc_004C8782; /* jb: below (unsigned <) */

loc_004C8796: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C879E
 * Original: 0x004C879E - 0x004C87B9 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C879E(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C879E: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (CMP_EQ(esi, eax)) goto loc_004C87B3; /* je: equal / zero */

loc_004C87A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004C7A26(); /* call 0x004C7A26 */

loc_004C87B3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C87B9
 * Original: 0x004C87B9 - 0x004C87D1 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C87B9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C87B9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    eax = eax << 4;
    eax = ZX8(MEM8(eax + ecx + 0xF));
    eax--;
    if ((eax == 0)) { sub_004C87D1(); return; } /* je: equal / zero */

loc_004C87CA: ;
    eax = eax - 0x7F;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004C87D4(); return; /* tail jmp 0x004C87D4 */

}

/**
 * sub_004C87D7
 * Original: 0x004C87D7 - 0x004C87F0 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C87D7(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C87D7: ;
    ecx = MEM32(ecx + 0x70);
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x14)); }
    if (CMP_NE(MEM16(ecx + 0xC), 0x69)) goto loc_004C87ED; /* jne: not equal / not zero */

loc_004C87EA: ;
    eax = eax << 6;

loc_004C87ED: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C87F0
 * Original: 0x004C87F0 - 0x004C8807 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C87F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C87F0: ;
    ecx = MEM32(ecx + 0x70);
    if (CMP_NE(MEM16(ecx + 0xC), 0x69)) { sub_004C8807(); return; } /* jne: not equal / not zero */

loc_004C87FA: ;
    eax = MEM32(esp + 4);
    eax = eax >> 6;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x14));
    g_seh_ebp = ebp; sub_004C880F(); return; /* tail jmp 0x004C880F */

}

/**
 * sub_004C8812
 * Original: 0x004C8812 - 0x004C882A (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8812(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C8812: ;
    eax = ecx + 0xA8;
    if (CMP_NE(MEM32(eax), eax)) goto loc_004C8826; /* jne: not equal / not zero */

loc_004C881C: ;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(ecx + 0x194), eax)) goto loc_004C8829; /* je: equal / zero */

loc_004C8826: ;
    eax = 0; /* xor self */
    eax++;

loc_004C8829: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C882A
 * Original: 0x004C882A - 0x004C88CE (164 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C882A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C882A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0); sub_004C9CC4(); /* call 0x004C9CC4 */

loc_004C8835: ;
    ebx = 0; /* xor self */
    if (CMP_L(eax, ebx)) { sub_004C88CE(); return; } /* jl: less (signed <) */

loc_004C883F: ;
    eax = MEM32(esi + 0x80);
    eax = MEM32(eax + 0xBC);
    eax = eax + eax * 2;
    PUSH32(esp, 1);
    eax = eax << 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004C885E: ;
    MEM32(esi + 0xC0) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    if (((int32_t)eax < 0)) { sub_004C88CE(); return; } /* js: sign (negative) */

loc_004C8874: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(MEM32(ecx + 0xBC), ebx)) goto loc_004C88B8; /* jbe: below or equal (unsigned <=) */

loc_004C8885: ;
    edx = esi + 0xB0;
    PUSH32(esp, ebp);

loc_004C888C: ;
    ecx = MEM32(esi + 0xC0);
    ecx = ecx + ebx;
    MEM32(ecx) = edx;
    ebp = MEM32(edx + 4);
    MEM32(ecx + 4) = ebp;
    MEM32(edx + 4) = ecx;
    ebp = MEM32(ecx + 4);
    MEM32(ebp) = ecx;
    ecx = MEM32(esi + 0x80);
    edi++;
    ebx = ebx + 0x30;
    if (CMP_B(edi, MEM32(ecx + 0xBC))) goto loc_004C888C; /* jb: below (unsigned <) */

loc_004C88B7: ;
    POP32(esp, ebp);

loc_004C88B8: ;
    ecx = MEM32(esi + 0x80);
    (void)0; /* test MEM8(ecx + 0xA), 4 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(MEM8(ecx + 0xA), 4)) { sub_004C88CE(); return; } /* jne: not equal / not zero */

loc_004C88C5: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004CAE82(); return; /* tail jmp 0x004CAE82 */

}

/**
 * sub_004C88D1
 * Original: 0x004C88D1 - 0x004C8943 (114 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C88D1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C88D1: ;
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

loc_004C88E7: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) goto loc_004C8933; /* jne: not equal / not zero */

loc_004C88F0: ;
    if (TEST_Z(MEM8(ebp + 8), 6)) goto loc_004C8919; /* je: equal / zero */

loc_004C88F6: ;
    if (TEST_Z(MEM8(ebp + 8), 4)) goto loc_004C890A; /* je: equal / zero */

loc_004C88FC: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) | 0x1000);
    MEM16(esi + 0x12) = LO16(eax);
    goto loc_004C8910;

loc_004C890A: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xEFFF;

loc_004C8910: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CA4E6(); /* call 0x004CA4E6 */

loc_004C8917: ;
    goto loc_004C8921;

loc_004C8919: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004CB2D1(); /* call 0x004CB2D1 */

loc_004C8921: ;
    if (TEST_NZ(MEM8(ebp + 8), 4)) goto loc_004C8933; /* jne: not equal / not zero */

loc_004C8927: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_004C8933: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C893B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8943
 * Original: 0x004C8943 - 0x004C899D (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8943(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C8943: ;
    edx = ZX16(MEM16(ecx + 0x12));
    eax = ecx + 0xB0;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(eax), eax - flags set for next jcc */
    eax = MEM32(esp + 4);
    SET_LO8(ecx, (CMP_NE(MEM32(eax), eax)) ? 1 : 0); /* setne */
    (void)0; /* test HI8(edx), 0x20 - flags set for next jcc */
    MEM32(eax) = ecx;
    if (TEST_Z(HI8(edx), 0x20)) goto loc_004C8963; /* je: equal / zero */

loc_004C895F: ;
    MEM8(eax + 2) = MEM8(eax + 2) | 8;

loc_004C8963: ;
    ecx = edx;
    ecx = ecx & 3;
    if (CMP_NE(LO8(ecx), 3)) goto loc_004C8989; /* jne: not equal / not zero */

loc_004C896D: ;
    if (TEST_Z(LO16(edx), 0x444)) goto loc_004C8994; /* je: equal / zero */

loc_004C8974: ;
    MEM8(eax + 2) = MEM8(eax + 2) | 2;
    (void)0; /* test HI8(edx), 4 - flags set for next jcc */
    ecx = MEM32(eax);
    if (TEST_Z(HI8(edx), 4)) goto loc_004C8998; /* je: equal / zero */

loc_004C897F: ;
    ecx = ecx | 0x40000;
    MEM32(eax) = ecx;
    goto loc_004C8998;

loc_004C8989: ;
    ecx = 0x8001;
    edx = edx & ecx;
    if (CMP_NE(edx, ecx)) goto loc_004C8998; /* jne: not equal / not zero */

loc_004C8994: ;
    MEM8(eax + 2) = MEM8(eax + 2) | 1;

loc_004C8998: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C899D
 * Original: 0x004C899D - 0x004C89CA (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C899D(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C899D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_004CB2D1(); /* call 0x004CB2D1 */

loc_004C89A9: ;
    eax = MEM32(esi + 0x80);
    MEM32(esi + 0x190) = edi;
    if (TEST_Z(MEM8(eax + 0xA), 4)) goto loc_004C89C7; /* je: equal / zero */

loc_004C89BB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_004C89C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C89CA
 * Original: 0x004C89CA - 0x004C8B23 (345 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C89CA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C89CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = eax << 4;
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax + edi + 0x88;
    eax = MEM32(esi + 8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_004C8A02; /* je: equal / zero */

loc_004C89FC: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;

loc_004C8A02: ;
    PUSH32(esp, 0xFFFF);
    ecx = edi;
    PUSH32(esp, 0); sub_004C87F0(); /* call 0x004C87F0 */

loc_004C8A0E: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    MEM32(ebp + -28) = eax;
    if (CMP_BE(MEM32(ebp + -4), 0)) goto loc_004C8B17; /* jbe: below or equal (unsigned <=) */

loc_004C8A1B: ;
    if (CMP_AE(MEM32(ebx + 8), 0x10)) goto loc_004C8B0F; /* jae: above or equal (unsigned >=) */

loc_004C8A25: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    ecx = ecx - eax;
    if (CMP_B(ecx, MEM32(ebp + -28))) goto loc_004C8A35; /* jb: below (unsigned <) */

loc_004C8A32: ;
    ecx = MEM32(ebp + -28);

loc_004C8A35: ;
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004CD9CA(); /* call 0x004CD9CA */

loc_004C8A47: ;
    PUSH32(esp, MEM32(ebp + -24));
    ecx = edi;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0); sub_004C87D7(); /* call 0x004C87D7 */

loc_004C8A54: ;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0); sub_004C87F0(); /* call 0x004C87F0 */

loc_004C8A5F: ;
    (void)0; /* cmp MEM32(ebp + -32), 0 - flags set for next jcc */
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(MEM32(ebp + -32), 0)) goto loc_004C8B0F; /* je: equal / zero */

loc_004C8A6C: ;
    eax = MEM32(edi + 0x80);
    eax = ZX8(MEM8(eax + 0xF));
    eax = eax << 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -36) = eax;
    eax = ZX8(MEM8(edi + 0x64));
    ecx = eax + eax * 2;

loc_004C8A88: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, ecx)) goto loc_004C8A88; /* jb: below (unsigned <) */

loc_004C8A95: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    if (CMP_BE(eax & eax, 0)) goto loc_004C8AF7; /* jbe: below or equal (unsigned <=) */

loc_004C8A9D: ;
    eax = edi + 0xC;

loc_004C8AA0: ;
    ecx = ZX16(MEM16(eax));
    edx = MEM32(ebp + 8);
    esi = MEM32(edi + 0x84);
    ecx = edx + ecx * 2;
    ecx = ecx << 4;
    ecx = ecx + MEM32(ebx + 8);
    esi = esi & 0xFFFF0000u;
    esi = esi | MEM32(ebp + -32);
    edx = ecx;
    ecx = ecx & 0x3FFFC0;
    MEM32(-25034352) = ecx;
    ecx = MEM32(ebp + -16);
    edx = edx & 0x3F;
    MEM32(edx * 8 + -25033216) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(ebp + -16) = MEM32(ebp + -16) + ecx;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    MEM32(edx * 8 + -25033212) = esi;
    ecx = ZX8(MEM8(edi + 0x64));
    eax++;
    eax++;
    if (CMP_B(MEM32(ebp + -20), ecx)) goto loc_004C8AA0; /* jb: below (unsigned <) */

loc_004C8AF4: ;
    esi = MEM32(ebp + 0xC);

loc_004C8AF7: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 8) = MEM32(ebx + 8) + 1;
    if (CMP_B(eax, MEM32(ebp + -4))) goto loc_004C8A1B; /* jb: below (unsigned <) */

loc_004C8B0F: ;
    eax = MEM32(ebp + -8);
    if (CMP_B(eax, MEM32(ebp + -4))) { sub_004C8B23(); return; } /* jb: below (unsigned <) */

loc_004C8B17: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C7A26(); /* call 0x004C7A26 */

loc_004C8B1E: ;
    eax = MEM32(ebp + -8);
    g_seh_ebp = ebp; sub_004C8B26(); return; /* tail jmp 0x004C8B26 */

}

/**
 * sub_004C8B2D
 * Original: 0x004C8B2D - 0x004C8C02 (213 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8B2D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C8B2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax;

loc_004C8B3B: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, ecx)) goto loc_004C8B3B; /* jb: below (unsigned <) */

loc_004C8B48: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    if (CMP_BE(eax & eax, 0)) goto loc_004C8BA5; /* jbe: below or equal (unsigned <=) */

loc_004C8B54: ;
    eax = edx + 9;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + 8) = eax;
    edi = esi + 0xC;
    PUSH32(esp, ebx);

loc_004C8B63: ;
    eax = ZX16(MEM16(edi));
    ebx = MEM32(ebp + 8);
    ebx = MEM32(ebx);
    ecx = edx + eax * 2;
    ecx = ecx << 0xC;
    ecx = ecx & 0xFFFF00;
    ebx = ebx & 0xFF;
    ecx = ecx | ebx;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(0xFE8202F8u) = eax;
    if (TEST_NZ(edx, edx)) goto loc_004C8B90; /* jne: not equal / not zero */

loc_004C8B88: ;
    MEM32(-25033952) = ecx;
    goto loc_004C8B96;

loc_004C8B90: ;
    MEM32(-25033892) = ecx;

loc_004C8B96: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = ZX8(MEM8(esi + 0x64));
    edi++;
    edi++;
    if (CMP_B(MEM32(ebp + -4), eax)) goto loc_004C8B63; /* jb: below (unsigned <) */

loc_004C8BA4: ;
    POP32(esp, ebx);

loc_004C8BA5: ;
    ecx = MEM32(esi + 0x68);
    eax = edx;
    eax = eax << 4;
    MEM8(ecx + eax + 0xF) = 0x80;
    eax = esi + 0x194;
    ecx = MEM32(eax);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = ecx + 1;
    MEM32(eax) = edi;
    POP32(esp, edi);
    if (TEST_NZ(ecx, ecx)) goto loc_004C8BCA; /* jne: not equal / not zero */

loc_004C8BC4: ;
    MEM32(esi + 0x190) = edx;

loc_004C8BCA: ;
    eax = MEM32(esi + 0x80);
    if (TEST_NZ(MEM8(eax + 0xB), 0x40)) goto loc_004C8BE5; /* jne: not equal / not zero */

loc_004C8BD6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_004C8BE5: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CB6DC(); /* call 0x004CB6DC */

loc_004C8BEC: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFBFFu;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004CA5BE(); /* call 0x004CA5BE */

loc_004C8BFD: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8C02
 * Original: 0x004C8C02 - 0x004C8C4E (76 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8C02(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C8C02: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x24);
    (void)0; /* cmp eax, 0x8000000Au - flags set for next jcc */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(eax, 0x8000000Au)) goto loc_004C8C19; /* je: equal / zero */

loc_004C8C15: ;
    MEM32(esp + 0x14) = eax;

loc_004C8C19: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0xC));
    edi = esi + 8;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D0), _icall_esp); /* indirect call */
    }

loc_004C8C29: ;
    PUSH32(esp, MEM32(esp + 0x14));
    eax = MEM32(ebx + 0x80);
    PUSH32(esp, MEM32(eax + 0xC4));
    PUSH32(esp, MEM32(eax + 0xC0));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0055943E(); /* call 0x0055943E */

loc_004C8C48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8C4E
 * Original: 0x004C8C4E - 0x004C8C8E (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8C4E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8C4E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0); sub_004CB2D1(); /* call 0x004CB2D1 */

loc_004C8C5A: ;
    ebx = 0; /* xor self */
    edi = esi + 0xD8;

loc_004C8C62: ;
    if (TEST_Z(MEM8(edi), 1)) goto loc_004C8C6F; /* je: equal / zero */

loc_004C8C67: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_004C8C6F: ;
    ebx++;
    edi = edi + 0x20;
    if (CMP_B(ebx, 6)) goto loc_004C8C62; /* jb: below (unsigned <) */

loc_004C8C78: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x3111);
    PUSH32(esp, 0); sub_004CB8C3(); /* call 0x004CB8C3 */

loc_004C8C84: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C9E22(); return; /* tail jmp 0x004C9E22 */

}

/**
 * sub_004C8CBD
 * Original: 0x004C8CBD - 0x004C8CD7 (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8CBD(void)
{

loc_004C8CBD: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    eax = eax + ecx + 0xD0;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C847C(); /* call 0x004C847C */

loc_004C8CD4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8CD7
 * Original: 0x004C8CD7 - 0x004C8D82 (171 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8CD7(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C8CD7: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004CB26C(); /* call 0x004CB26C */

loc_004C8CE7: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x5860A0;
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004C8CF6: ;
    MEM32(esi + 0x80) = eax;
    eax = esi + 0xB0;
    MEM32(esi + 0xB4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0xA8;
    PUSH32(esp, 2);
    MEM32(esi + 0xAC) = eax;
    MEM32(eax) = eax;
    eax = esi + 0xB8;
    POP32(esp, ecx);
    PUSH32(esp, 0x10);
    MEM32(esi + 0xBC) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x88;
    POP32(esp, edx);

loc_004C8D32: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = eax + edx;
    ecx--;
    if ((ecx != 0)) goto loc_004C8D32; /* jne: not equal / not zero */

loc_004C8D3C: ;
    ecx = 0; /* xor self */
    eax = esi + 0xD0;

loc_004C8D44: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 0xC) = esi;
    ecx++;
    eax = eax + 0x20;
    if (CMP_B(ecx, 6)) goto loc_004C8D44; /* jb: below (unsigned <) */

loc_004C8D58: ;
    MEM32(esi + 0xD8) = MEM32(esi + 0xD8) | 5;
    MEM32(esi + 0xF8) = MEM32(esi + 0xF8) | 1;
    MEM32(esi + 0x118) = MEM32(esi + 0x118) | 5;
    MEM32(esi + 0x138) = MEM32(esi + 0x138) | 5;
    ecx = esi + 0x12;
    PUSH32(esp, 0); sub_004C9C82(); /* call 0x004C9C82 */

loc_004C8D7C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8D82
 * Original: 0x004C8D82 - 0x004C8DBB (57 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8D82(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C8D82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = eax | MEM32(ebp + 0xC);
    esi = ecx;
    if ((eax == 0)) goto loc_004C8DA7; /* je: equal / zero */

loc_004C8D93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_004C8DA3: ;
    if (TEST_NZ(eax, eax)) goto loc_004C8DB3; /* jne: not equal / not zero */

loc_004C8DA7: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    PUSH32(esp, 0); sub_004C88D1(); /* call 0x004C88D1 */

loc_004C8DB1: ;
    edi = eax;

loc_004C8DB3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C8DBB
 * Original: 0x004C8DBB - 0x004C8E22 (103 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8DBB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C8DBB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    eax = ebx + 9;
    eax = eax << 4;
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax + esi;
    if (CMP_NE(MEM32(edi), 0)) goto loc_004C8E18; /* jne: not equal / not zero */

loc_004C8DD9: ;
    ecx = esi + 0xA8;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) goto loc_004C8E0A; /* je: equal / zero */

loc_004C8DE5: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004C89CA(); /* call 0x004C89CA */

loc_004C8DEE: ;
    if (TEST_Z(eax, eax)) goto loc_004C8E0A; /* je: equal / zero */

loc_004C8DF2: ;
    eax = MEM32(esi + 0x80);
    (void)0; /* test MEM8(eax + 0xB), 0x60 - flags set for next jcc */
    MEM32(ebp + -4) = 1;
    if (TEST_NZ(MEM8(eax + 0xB), 0x60)) goto loc_004C8E10; /* jne: not equal / not zero */

loc_004C8E05: ;
    if (CMP_B(MEM32(edi), 0x10)) goto loc_004C8DD9; /* jb: below (unsigned <) */

loc_004C8E0A: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_004C8E18; /* je: equal / zero */

loc_004C8E10: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004C8B2D(); /* call 0x004C8B2D */

loc_004C8E18: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C8E22
 * Original: 0x004C8E22 - 0x004C8E98 (118 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8E22(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C8E22: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    ebx = edi + 0xB8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C8E41: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(ebx, esi)) goto loc_004C8E7F; /* jne: not equal / not zero */

loc_004C8E46: ;
    goto loc_004C8E5C;

loc_004C8E48: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C8C02(); /* call 0x004C8C02 */

loc_004C8E53: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C8E5B: ;
    PUSH32(esp, esi);

loc_004C8E5C: ;
    eax = edi + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C879E(); /* call 0x004C879E */

loc_004C8E68: ;
    ecx = ebp + -8;
    ebx = eax;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C8E72: ;
    if (CMP_NE(ebx, esi)) goto loc_004C8E48; /* jne: not equal / not zero */

loc_004C8E76: ;
    goto loc_004C8E91;

loc_004C8E78: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = ecx;
    PUSH32(esp, esi);

loc_004C8E7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C879E(); /* call 0x004C879E */

loc_004C8E85: ;
    if (CMP_NE(eax, esi)) goto loc_004C8E78; /* jne: not equal / not zero */

loc_004C8E89: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C8E91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8E98
 * Original: 0x004C8E98 - 0x004C8EC0 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8E98(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C8E98: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_EQ(LO8(eax), 3)) goto loc_004C8EAB; /* je: equal / zero */

loc_004C8EA4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_004C8EAB: ;
    PUSH32(esp, 0x8000000Au);
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C8E22(); /* call 0x004C8E22 */

loc_004C8EBE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C8EC0
 * Original: 0x004C8EC0 - 0x004C8EDD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C8EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_004C8812(); /* call 0x004C8812 */

loc_004C8ECB: ;
    if (TEST_Z(eax, eax)) { sub_004C8EDD(); return; } /* je: equal / zero */

loc_004C8ECF: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x800);
    PUSH32(esp, 0); sub_004C9C82(); /* call 0x004C9C82 */

loc_004C8EDB: ;
    g_seh_ebp = ebp; sub_004C8EE8(); return; /* tail jmp 0x004C8EE8 */

}

/**
 * sub_004C8EED
 * Original: 0x004C8EED - 0x004C8FB0 (195 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8EED(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C8EED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C8F02: ;
    eax = MEM32(ebp + 8);
    ecx = eax + 9;
    ecx = ecx << 4;
    ebx = ecx + esi;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_004C8FA2; /* je: equal / zero */

loc_004C8F17: ;
    ecx = ZX8(MEM8(esi + 0x64));
    edx = ecx + ecx;
    PUSH32(esp, edi);

loc_004C8F1F: ;
    edi = MEM32(-25034736);
    edi = edi >> 2;
    if (CMP_B(edi, edx)) goto loc_004C8F1F; /* jb: below (unsigned <) */

loc_004C8F2C: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    if (CMP_BE(ecx & ecx, 0)) goto loc_004C8F6C; /* jbe: below or equal (unsigned <=) */

loc_004C8F34: ;
    edi = esi + 0xC;

loc_004C8F37: ;
    ecx = ZX16(MEM16(edi));
    edx = eax + ecx * 2;
    edx = edx << 0xC;
    edx = edx & 0xFFFF00;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(-25033992) = ecx;
    if (TEST_NZ(eax, eax)) goto loc_004C8F58; /* jne: not equal / not zero */

loc_004C8F50: ;
    MEM32(-25033952) = edx;
    goto loc_004C8F5E;

loc_004C8F58: ;
    MEM32(-25033892) = edx;

loc_004C8F5E: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    ecx = ZX8(MEM8(esi + 0x64));
    edi++;
    edi++;
    if (CMP_B(MEM32(ebp + 8), ecx)) goto loc_004C8F37; /* jb: below (unsigned <) */

loc_004C8F6C: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = eax << 4;
    edi = eax + esi;
    eax = edi + 0x88;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C8E22(); /* call 0x004C8E22 */

loc_004C8F83: ;
    MEM32(edi + 0x94) = MEM32(edi + 0x94) & 0;
    MEM32(ebx) = MEM32(ebx) & 0;
    MEM32(esi + 0x194) = MEM32(esi + 0x194) - 1;
    eax = esi + 0x190;
    ecx = MEM32(eax);
    ecx--;
    ecx = ecx & 1;
    MEM32(eax) = ecx;
    POP32(esp, edi);

loc_004C8FA2: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C8FAA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C8FB0
 * Original: 0x004C8FB0 - 0x004C9090 (224 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C8FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C8FB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = ZX8(MEM8(0x24));
    edi = 0; /* xor self */
    (void)0; /* test MEM8(esi + 0x12), 1 - flags set for next jcc */
    MEM8(ebp + -1) = LO8(eax);
    MEM32(ebp + -12) = edi;
    if (TEST_Z(MEM8(esi + 0x12), 1)) goto loc_004C907E; /* je: equal / zero */

loc_004C8FD4: ;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C8FDC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_004C8FE4: ;
    edi++;
    if (CMP_B(edi, 6)) goto loc_004C8FDC; /* jb: below (unsigned <) */

loc_004C8FEA: ;
    edi = MEM32(esi + 0x190);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = 2;
    ebx = 0x80004004u;

loc_004C8FFD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004C8EED(); /* call 0x004C8EED */

loc_004C9006: ;
    edi--;
    edi = edi & 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if ((MEM32(ebp + -8) != 0)) goto loc_004C8FFD; /* jne: not equal / not zero */

loc_004C900F: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x190) = edi;
    PUSH32(esp, 0); sub_004CB2D1(); /* call 0x004CB2D1 */

loc_004C901F: ;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C9027: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CB1E7(); /* call 0x004CB1E7 */

loc_004C902E: ;
    PUSH32(esp, ebx);
    eax = esi + 0xA8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C8E22(); /* call 0x004C8E22 */

loc_004C903D: ;
    eax = MEM32(esi + 0x80);
    (void)0; /* test MEM8(eax + 0xA), 4 - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(MEM8(eax + 0xA), 4)) goto loc_004C9063; /* je: equal / zero */

loc_004C904A: ;
    (void)0; /* cmp MEM8(ebp + -1), 0 - flags set for next jcc */
    ecx = esi;
    if (CMP_NE(MEM8(ebp + -1), 0)) goto loc_004C9059; /* jne: not equal / not zero */

loc_004C9052: ;
    PUSH32(esp, 0); sub_004C8C4E(); /* call 0x004C8C4E */

loc_004C9057: ;
    goto loc_004C9069;

loc_004C9059: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_004C9063: ;
    if (CMP_NE(MEM8(ebp + -1), 0)) goto loc_004C9072; /* jne: not equal / not zero */

loc_004C9069: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004C8E98(); /* call 0x004C8E98 */

loc_004C9070: ;
    goto loc_004C907E;

loc_004C9072: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_004C907E: ;
    if (CMP_NE(MEM32(ebp + 8), 0)) goto loc_004C908A; /* jne: not equal / not zero */

loc_004C9084: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xCFFF;

loc_004C908A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9090
 * Original: 0x004C9090 - 0x004C90A0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9090(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C9090: ;
    if (TEST_NZ(MEM16(ecx + 0x12), 0x8002)) goto loc_004C909F; /* jne: not equal / not zero */

loc_004C9098: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004C8FB0(); /* call 0x004C8FB0 */

loc_004C909F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C90A0
 * Original: 0x004C90A0 - 0x004C9184 (228 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C90A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C90A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -20;
    MEM32(ebp + -12) = 1;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C90C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_004C90C2: ;
    edi = MEM32(esi + 0x190);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;

loc_004C90CC: ;
    ebx = esi + 0x68;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004C87B9(); /* call 0x004C87B9 */

loc_004C90D7: ;
    if (TEST_Z(eax, eax)) goto loc_004C911E; /* je: equal / zero */

loc_004C90DB: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004C8EED(); /* call 0x004C8EED */

loc_004C90E5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    if (TEST_Z(MEM16(esi + 0x12), 0x1000)) goto loc_004C9111; /* je: equal / zero */

loc_004C90F1: ;
    ecx = MEM32(ebx);
    eax = edi;
    eax = eax << 4;
    if (CMP_NE(MEM8(eax + ecx + 0xE), 0)) goto loc_004C9111; /* jne: not equal / not zero */

loc_004C90FF: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xEFFF;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) | 0x2000);
    MEM16(esi + 0x12) = LO16(eax);

loc_004C9111: ;
    edi--;
    edi = edi & 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    if (CMP_B(MEM32(ebp + -8), 2)) goto loc_004C90CC; /* jb: below (unsigned <) */

loc_004C911E: ;
    if (TEST_NZ(MEM16(esi + 0x12), 0x2000)) goto loc_004C9161; /* jne: not equal / not zero */

loc_004C9126: ;
    edi = MEM32(esi + 0x194);
    edi = edi + MEM32(esi + 0x190);
    edi = edi & 1;
    ebx = 0; /* xor self */

loc_004C9137: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004C8DBB(); /* call 0x004C8DBB */

loc_004C913F: ;
    if (TEST_Z(eax, eax)) goto loc_004C9153; /* je: equal / zero */

loc_004C9143: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 2;
    edi--;
    edi = edi & 1;
    ebx++;
    if (CMP_B(ebx, 2)) goto loc_004C9137; /* jb: below (unsigned <) */

loc_004C9151: ;
    goto loc_004C9157;

loc_004C9153: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_004C9157: ;
    if (CMP_NE(MEM32(ebp + -12), 0)) goto loc_004C90C2; /* jne: not equal / not zero */

loc_004C9161: ;
    eax = MEM32(esi + 0x80);
    (void)0; /* test MEM8(eax + 0xB), 0x40 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(MEM8(eax + 0xB), 0x40)) goto loc_004C9176; /* je: equal / zero */

loc_004C916F: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004C8E98(); /* call 0x004C8E98 */

loc_004C9176: ;
    ecx = ebp + -20;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C917E: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C920C
 * Original: 0x004C920C - 0x004C9269 (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C920C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C920C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x5860A0;
    edi = 0; /* xor self */

loc_004C9218: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004C8CBD(); /* call 0x004C8CBD */

loc_004C9220: ;
    edi++;
    if (CMP_B(edi, 6)) goto loc_004C9218; /* jb: below (unsigned <) */

loc_004C9226: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004C8FB0(); /* call 0x004C8FB0 */

loc_004C922F: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004C8C4E(); /* call 0x004C8C4E */

loc_004C9236: ;
    edi = esi + 0x80;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004C924B; /* je: equal / zero */

loc_004C9242: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004C9248: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004C924B: ;
    edi = esi + 0xC0;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004C9260; /* je: equal / zero */

loc_004C9257: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C925D: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004C9260: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004CB6A4(); return; /* tail jmp 0x004CB6A4 */

}

/**
 * sub_004C9358
 * Original: 0x004C9358 - 0x004C9426 (206 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9358(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C9358: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); sub_00559420(); /* call 0x00559420 */

loc_004C9370: ;
    ecx = esi + 0x12;
    if (TEST_NZ(MEM16(ecx), 0x2000)) goto loc_004C9395; /* jne: not equal / not zero */

loc_004C937A: ;
    SET_LO16(edx, 0xF7FF);
    PUSH32(esp, 0); sub_004CB8C3(); /* call 0x004CB8C3 */

loc_004C9383: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_004C938C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_004C9395: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CAE82(); /* call 0x004CAE82 */

loc_004C939C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (TEST_S(eax, eax)) goto loc_004C941E; /* jl: less (signed <) */

loc_004C93A3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C93AD: ;
    PUSH32(esp, MEM32(esi + 0xB0));
    PUSH32(esp, 0); sub_004C3680(); /* call 0x004C3680 */

loc_004C93B8: ;
    ecx = ebp + -16;
    ebx = eax;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C93C2: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 6);
    eax = ebx + 8;
    POP32(esp, ecx);
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(ebx + 0x24) = 0x8000000Au;
    PUSH32(esp, MEM32(ebx + 0xC));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D0), _icall_esp); /* indirect call */
    }

loc_004C93E7: ;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C93EF: ;
    esi = MEM32(ebp + -4);
    eax = esi + 0xA8;
    MEM32(ebx) = eax;
    eax = MEM32(eax + 4);
    MEM32(ebx + 4) = eax;
    MEM32(eax) = ebx;
    eax = MEM32(ebx);
    ecx = ebp + -16;
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C940F: ;
    (void)0; /* test MEM8(esi + 0x12), 0x20 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(MEM8(esi + 0x12), 0x20)) goto loc_004C941E; /* jne: not equal / not zero */

loc_004C9417: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004C90A0(); /* call 0x004C90A0 */

loc_004C941E: ;
    eax = MEM32(ebp + -8);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9426
 * Original: 0x004C9426 - 0x004C945A (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9426(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9426: ;
    eax = MEM32(esp + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(eax, eax)) { sub_004C945A(); return; } /* jne: not equal / not zero */

loc_004C9431: ;
    PUSH32(esp, edi);
    edi = esi + 0x12;
    if (TEST_Z(MEM8(edi), 0x20)) goto loc_004C9449; /* je: equal / zero */

loc_004C943A: ;
    SET_LO16(eax, MEM16(edi));
    SET_LO16(eax, LO16(eax) & 0xFFDF);
    MEM16(edi) = LO16(eax);
    PUSH32(esp, 0); sub_004C90A0(); /* call 0x004C90A0 */

loc_004C9449: ;
    eax = ZX16(MEM16(edi));
    eax = eax & 0xFFFFFFBBu;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004CA5BE(); /* call 0x004CA5BE */

loc_004C9457: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_004C94B0(); return; /* tail jmp 0x004C94B0 */

}

/**
 * sub_004C951A
 * Original: 0x004C951A - 0x004C95A3 (137 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C951A(void)
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

loc_004C951A: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    /* fld st(0) */
    fp_push(MEMF(esi)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004C954E; /* jp: parity */

loc_004C9532: ;
    /* fld st(0) */
    fp_push(MEMF(esi + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004C954E; /* jp: parity */

loc_004C9540: ;
    /* fld st(0) */
    fp_push(MEMF(esi + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004C959F; /* jnp: not parity */

loc_004C954E: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648E84)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004C959F; /* jnp: not parity */

loc_004C9563: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004C959F; /* jnp: not parity */

loc_004C9571: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004C959F; /* jnp: not parity */

loc_004C957F: ;
    PUSH32(esp, esi);
    /* fstp st(0) */
    PUSH32(esp, 0); sub_004C6D22(); /* call 0x004C6D22 */

loc_004C9587: ;
    fp_push(1.0); /* fld1 */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_004C959F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C95A3
 * Original: 0x004C95A3 - 0x004C95C1 (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C95A3(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004C95A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = 0x45800000;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    /* FPU: fyl2x  */
    MEM32(ebp + -8) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -8);
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
 * sub_004C95C1
 * Original: 0x004C95C1 - 0x004C95F7 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C95C1(void)
{

loc_004C95C1: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = edx;
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    SET_LO16(ecx, MEM16(esp + 8));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C95F7
 * Original: 0x004C95F7 - 0x004C961E (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C95F7(void)
{

loc_004C95F7: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = edx;
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C961E
 * Original: 0x004C961E - 0x004C963E (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C961E(void)
{

loc_004C961E: ;
    eax = ecx;
    ecx = eax + 4;
    MEM32(eax + 8) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0xC;
    MEM32(eax) = 0x5860C8;
    MEM32(eax + 0x1C) = 0x4E1654;
    MEM32(eax + 0x10) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004C963E
 * Original: 0x004C963E - 0x004C9660 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C963E(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C963E: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x5860C8;
    if (TEST_Z(eax, eax)) goto loc_004C9658; /* je: equal / zero */

loc_004C964E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004C9654: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;

loc_004C9658: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C9660
 * Original: 0x004C9660 - 0x004C96EB (139 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C9660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebp + 8));
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = edi;
    PUSH32(esp, 1);
    eax = edi + edi * 4 + 5;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004C9685: ;
    ebx = eax;
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x7FF8FFF2;
    ebx = ebx + 0x8007000Eu;
    MEM32(esi + 0x14) = eax;
    if (((int32_t)ebx < 0)) goto loc_004C96E2; /* js: sign (negative) */

loc_004C969C: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C95C1(); /* call 0x004C95C1 */

loc_004C96AD: ;
    MEM32(esi + 0x18) = eax;
    eax = edi + 1;
    if (CMP_BE(eax, 1)) goto loc_004C96E2; /* jbe: below or equal (unsigned <=) */

loc_004C96B8: ;
    ecx = esi + 0xC;
    MEM32(ebp + 8) = 0x14;
    edx = eax + -1;

loc_004C96C5: ;
    eax = MEM32(esi + 0x14);
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x14;
    edx--;
    MEM32(eax) = ecx;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    MEM32(ecx + 4) = eax;
    edi = MEM32(eax + 4);
    MEM32(edi) = eax;
    if ((edx != 0)) goto loc_004C96C5; /* jne: not equal / not zero */

loc_004C96E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C96EB
 * Original: 0x004C96EB - 0x004C97BC (209 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C96EB(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C96EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    esi = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_004C97B5; /* je: equal / zero */

loc_004C96FC: ;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 0x14));
    if (CMP_B(MEM16(eax + 0xA), LO16(ebx))) goto loc_004C97B4; /* jb: below (unsigned <) */

loc_004C970C: ;
    edx = edi + 4;
    eax = MEM32(edx);
    if (CMP_EQ(eax, edx)) goto loc_004C97B4; /* je: equal / zero */

loc_004C9719: ;
    if (CMP_NE(MEM32(eax + 0xC), 0)) goto loc_004C9734; /* jne: not equal / not zero */

loc_004C971F: ;
    SET_LO16(ecx, MEM16(eax + 0xA));
    if (CMP_B(LO16(ecx), LO16(ebx))) goto loc_004C9734; /* jb: below (unsigned <) */

loc_004C9728: ;
    if (TEST_Z(esi, esi)) goto loc_004C9732; /* je: equal / zero */

loc_004C972C: ;
    if (CMP_AE(LO16(ecx), MEM16(esi + 0xA))) goto loc_004C9734; /* jae: above or equal (unsigned >=) */

loc_004C9732: ;
    esi = eax;

loc_004C9734: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, edx)) goto loc_004C9719; /* jne: not equal / not zero */

loc_004C973A: ;
    if (TEST_Z(esi, esi)) goto loc_004C97B4; /* je: equal / zero */

loc_004C973E: ;
    if (CMP_AE(LO16(ebx), MEM16(esi + 0xA))) goto loc_004C976D; /* jae: above or equal (unsigned >=) */

loc_004C9744: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, 0); sub_004C3680(); /* call 0x004C3680 */

loc_004C974C: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0xA));
    SET_LO16(ecx, LO16(ecx) - LO16(ebx));
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 8));
    SET_LO16(ecx, LO16(ecx) + LO16(ebx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004C95C1(); /* call 0x004C95C1 */

loc_004C9769: ;
    MEM16(esi + 0xA) = LO16(ebx);

loc_004C976D: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(esi + 0xA));
    MEM32(esi + 0xC) = 1;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x1C);
    MEM32(eax) = MEM32(eax) - ecx;
    if (CMP_NE(esi, MEM32(edi + 0x18))) goto loc_004C97B4; /* jne: not equal / not zero */

loc_004C9789: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    edx = edi + 4;
    eax = MEM32(edx);
    goto loc_004C97B0;

loc_004C9794: ;
    if (CMP_NE(MEM32(eax + 0xC), 0)) goto loc_004C97AE; /* jne: not equal / not zero */

loc_004C979A: ;
    ecx = MEM32(edi + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_004C97AB; /* je: equal / zero */

loc_004C97A1: ;
    SET_LO16(ebx, MEM16(eax + 0xA));
    if (CMP_BE(LO16(ebx), MEM16(ecx + 0xA))) goto loc_004C97AE; /* jbe: below or equal (unsigned <=) */

loc_004C97AB: ;
    MEM32(edi + 0x18) = eax;

loc_004C97AE: ;
    eax = MEM32(eax);

loc_004C97B0: ;
    if (CMP_NE(eax, edx)) goto loc_004C9794; /* jne: not equal / not zero */

loc_004C97B4: ;
    POP32(esp, ebx);

loc_004C97B5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C97BC
 * Original: 0x004C97BC - 0x004C97DD (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C97BC(void)
{

loc_004C97BC: ;
    eax = MEM32(esp + 8);
    SET_LO16(edx, MEM16(eax + 0xA));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM16(esi + 0xA) = MEM16(esi + 0xA) + LO16(edx);
    PUSH32(esp, eax);
    ecx = ecx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C7A26(); /* call 0x004C7A26 */

loc_004C97D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C97DD
 * Original: 0x004C97DD - 0x004C984A (109 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C97DD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C97DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    eax = ebx;
    eax = eax << 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D0), _icall_esp); /* indirect call */
    }

loc_004C97FB: ;
    if (TEST_Z(ebx, ebx)) goto loc_004C9845; /* je: equal / zero */

loc_004C97FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);

loc_004C9804: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D4), _icall_esp); /* indirect call */
    }

loc_004C980D: ;
    ecx = ebp + -8;
    esi = eax;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C9817: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    if (CMP_B(eax, 8)) goto loc_004C9817; /* jb: below (unsigned <) */

loc_004C9824: ;
    MEM32(-25032700) = edi;
    ecx = ebp + -8;
    MEM32(-25032696) = esi;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C9838: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x1000;
    edi++;
    ebx--;
    if ((ebx != 0)) goto loc_004C9804; /* jne: not equal / not zero */

loc_004C9843: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004C9845: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C984A
 * Original: 0x004C984A - 0x004C9861 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C984A(void)
{

loc_004C984A: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = eax << 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D0), _icall_esp); /* indirect call */
    }

loc_004C985E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C9861
 * Original: 0x004C9861 - 0x004C9886 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9861(void)
{

loc_004C9861: ;
    eax = ecx;
    ecx = eax + 8;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x5860CC;
    MEM32(0x4E1C64) = eax;
    MEM32(eax + 0xC) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004C9886
 * Original: 0x004C9886 - 0x004C98AD (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9886(void)
{
    uint32_t ebp;

loc_004C9886: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    MEM32(edi) = 0x5860CC;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C98A1: ;
    MEM32(0x4E1C64) = MEM32(0x4E1C64) & 0;
    esi = edi + 8;
    g_seh_ebp = ebp; sub_004C98BA(); return; /* tail jmp 0x004C98BA */

}

/**
 * sub_004C98E7
 * Original: 0x004C98E7 - 0x004C996B (132 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C98E7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C98E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C98FC: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x5C);
    edx = edx - eax;
    POP32(esp, ecx);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = (uint32_t)(-(int32_t)edi);
    if ((edi == 0)) goto loc_004C995B; /* je: equal / zero */

loc_004C990F: ;
    ecx = MEM32(ebp + 8);
    eax = eax + ecx;
    MEM32(eax + 8) = ecx;
    ecx = esi + 8;
    MEM32(eax) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    MEM32(eax + 4) = ebx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    edx = edx + 0xFFFFFFF4u;
    PUSH32(esp, edx);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C95F7(); /* call 0x004C95F7 */

loc_004C993E: ;
    ecx = MEM32(esi + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(ecx, ecx)) goto loc_004C994E; /* je: equal / zero */

loc_004C9946: ;
    edx = MEM32(eax + 8);
    if (CMP_BE(edx, MEM32(ecx + 8))) goto loc_004C9951; /* jbe: below or equal (unsigned <=) */

loc_004C994E: ;
    MEM32(esi + 0x18) = eax;

loc_004C9951: ;
    eax = MEM32(0x4E1DC0);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) + ecx;

loc_004C995B: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C9963: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C996B
 * Original: 0x004C996B - 0x004C9A4C (225 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C996B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004C996B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C9982: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x18);
    esi = esi + 0x17;
    esi = esi >> 3;
    esi = esi << 3;
    if (TEST_Z(eax, eax)) goto loc_004C9A32; /* je: equal / zero */

loc_004C9999: ;
    if (CMP_B(MEM32(eax + 8), esi)) goto loc_004C9A32; /* jb: below (unsigned <) */

loc_004C99A2: ;
    edx = edi + 0x10;
    eax = MEM32(edx);
    if (CMP_EQ(eax, edx)) goto loc_004C9A32; /* je: equal / zero */

loc_004C99AF: ;
    if (CMP_NE(MEM32(eax + 0xC), 0)) goto loc_004C99C7; /* jne: not equal / not zero */

loc_004C99B5: ;
    ecx = MEM32(eax + 8);
    if (CMP_B(ecx, esi)) goto loc_004C99C7; /* jb: below (unsigned <) */

loc_004C99BC: ;
    if (TEST_Z(ebx, ebx)) goto loc_004C99C5; /* je: equal / zero */

loc_004C99C0: ;
    if (CMP_AE(ecx, MEM32(ebx + 8))) goto loc_004C99C7; /* jae: above or equal (unsigned >=) */

loc_004C99C5: ;
    ebx = eax;

loc_004C99C7: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, edx)) goto loc_004C99AF; /* jne: not equal / not zero */

loc_004C99CD: ;
    if (TEST_Z(ebx, ebx)) goto loc_004C9A32; /* je: equal / zero */

loc_004C99D1: ;
    eax = MEM32(ebx + 8);
    ecx = esi + 0x50;
    if (CMP_AE(ecx, eax)) goto loc_004C99ED; /* jae: above or equal (unsigned >=) */

loc_004C99DB: ;
    PUSH32(esp, ebx);
    eax = eax - esi;
    PUSH32(esp, eax);
    eax = ebx + esi;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004C95F7(); /* call 0x004C95F7 */

loc_004C99EA: ;
    MEM32(ebx + 8) = esi;

loc_004C99ED: ;
    MEM32(ebx + 0xC) = 0x706F6C73;
    if (CMP_NE(ebx, MEM32(edi + 0x18))) goto loc_004C9A22; /* jne: not equal / not zero */

loc_004C99F9: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    ecx = edi + 0x10;
    eax = MEM32(ecx);
    goto loc_004C9A1E;

loc_004C9A04: ;
    if (CMP_NE(MEM32(eax + 0xC), 0)) goto loc_004C9A1C; /* jne: not equal / not zero */

loc_004C9A0A: ;
    edx = MEM32(edi + 0x18);
    if (TEST_Z(edx, edx)) goto loc_004C9A19; /* je: equal / zero */

loc_004C9A11: ;
    esi = MEM32(eax + 8);
    if (CMP_BE(esi, MEM32(edx + 8))) goto loc_004C9A1C; /* jbe: below or equal (unsigned <=) */

loc_004C9A19: ;
    MEM32(edi + 0x18) = eax;

loc_004C9A1C: ;
    eax = MEM32(eax);

loc_004C9A1E: ;
    if (CMP_NE(eax, ecx)) goto loc_004C9A04; /* jne: not equal / not zero */

loc_004C9A22: ;
    eax = MEM32(0x4E1DBC);
    ecx = MEM32(ebx + 8);
    MEM32(eax) = MEM32(eax) + ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_004C9A32: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C9A3A: ;
    eax = ebx;
    ebx = ebx + 0x10;
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    eax = eax & ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9A4C
 * Original: 0x004C9A4C - 0x004C9A67 (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9A4C(void)
{

loc_004C9A4C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 8) = MEM32(esi + 8) + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C3680(); /* call 0x004C3680 */

loc_004C9A61: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C9A82
 * Original: 0x004C9A82 - 0x004C9ABC (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9A82(void)
{
    uint32_t ebp;

loc_004C9A82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = ebx;
    eax = eax & 0xFFF;
    esi = eax + ecx + 0xFFF;
    ecx = ebp + -8;
    esi = esi >> 0xC;
    ebx = ebx & 0xFFFFF000u;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C9AB5: ;
    ecx = edi + 4;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; sub_004C9ACF(); return; /* tail jmp 0x004C9ACF */

}

/**
 * sub_004C9B11
 * Original: 0x004C9B11 - 0x004C9B27 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9B11(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9B11: ;
    eax = MEM32(esp + 4);
    edx = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx) = MEM32(ecx) + edx;
    PUSH32(esp, edi);
    edi = esi + 4;
    g_seh_ebp = ebp; sub_004C9B36(); return; /* tail jmp 0x004C9B36 */

}

/**
 * sub_004C9B88
 * Original: 0x004C9B88 - 0x004C9BB7 (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9B88(void)
{
    uint32_t ebp;

loc_004C9B88: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    esi = esi + 0xFFFFFFF0u;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C9BA4: ;
    eax = MEM32(0x4E1DBC);
    ecx = MEM32(esi + 8);
    MEM32(eax) = MEM32(eax) - ecx;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    ebx = edi + 0x10;
    g_seh_ebp = ebp; sub_004C9BD1(); return; /* tail jmp 0x004C9BD1 */

}

/**
 * sub_004C9C21
 * Original: 0x004C9C21 - 0x004C9C6C (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9C21(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C9C21: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C9C35: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - 1;
    if ((MEM32(eax + 0xC) != 0)) goto loc_004C9C5F; /* jne: not equal / not zero */

loc_004C9C3D: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004C9B11(); /* call 0x004C9B11 */

loc_004C9C4E: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C9C56: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C984A(); /* call 0x004C984A */

loc_004C9C5D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004C9C5F: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C9C67: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C9C82
 * Original: 0x004C9C82 - 0x004C9C86 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9C82(void)
{

loc_004C9C82: ;
    MEM16(ecx) = MEM16(ecx) | LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C9C86
 * Original: 0x004C9C86 - 0x004C9CA8 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9C86(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004C9C86: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4E1D40), _icall_esp); /* indirect call */
    }

loc_004C9CA5: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004C9CA8
 * Original: 0x004C9CA8 - 0x004C9CC4 (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9CA8(void)
{
    int _flags = 0; /* fallback flag var */

loc_004C9CA8: ;
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_BE(MEM32(ecx + 4), edx)) goto loc_004C9CC3; /* jbe: below or equal (unsigned <=) */

loc_004C9CB1: ;
    PUSH32(esp, esi);

loc_004C9CB2: ;
    esi = MEM32(ecx);
    MEM8(edx + esi + 0xF) = 0x80;
    eax++;
    edx = edx + 0x10;
    if (CMP_B(eax, MEM32(ecx + 4))) goto loc_004C9CB2; /* jb: below (unsigned <) */

loc_004C9CC2: ;
    POP32(esp, esi);

loc_004C9CC3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C9CC4
 * Original: 0x004C9CC4 - 0x004C9D07 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9CC4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C9CC4: ;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(esp + 4), eax)) goto loc_004C9CD0; /* je: equal / zero */

loc_004C9CCC: ;
    MEM8(ecx + 0x17) = MEM8(ecx + 0x17) | 1;

loc_004C9CD0: ;
    edx = MEM32(ecx + 0x70);
    PUSH32(esp, esi);
    esi = 0x2000;
    if (TEST_Z(MEM32(edx + 8), esi)) goto loc_004C9CE4; /* je: equal / zero */

loc_004C9CDE: ;
    MEM16(ecx + 0x16) = MEM16(ecx + 0x16) | 0x43F;

loc_004C9CE4: ;
    if (CMP_EQ(MEM32(esp + 8), eax)) goto loc_004C9CEE; /* je: equal / zero */

loc_004C9CEA: ;
    MEM8(ecx + 0x1A) = MEM8(ecx + 0x1A) | 0x80;

loc_004C9CEE: ;
    if (TEST_NZ(MEM32(edx + 8), 0x182000)) goto loc_004C9CFB; /* jne: not equal / not zero */

loc_004C9CF7: ;
    MEM8(ecx + 0x15) = MEM8(ecx + 0x15) | 0xE0;

loc_004C9CFB: ;
    (void)0; /* test MEM32(edx + 8), esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(MEM32(edx + 8), esi)) { sub_004C9D07(); return; } /* je: equal / zero */

loc_004C9D01: ;
    MEM8(ecx + 0x64) = 1;
    g_seh_ebp = ebp; sub_004C9D0C(); return; /* tail jmp 0x004C9D0C */

}

/**
 * sub_004C9D0F
 * Original: 0x004C9D0F - 0x004C9DC5 (182 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9D0F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C9D0F: ;
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

loc_004C9D25: ;
    ecx = MEM32(esi + 0x70);
    eax = ZX8(MEM8(ecx + 0xE));
    eax--;
    eax = (uint32_t)((int32_t)eax >> 1);
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_EQ(LO8(eax), MEM8(esi + 0x64))) goto loc_004C9D49; /* je: equal / zero */

loc_004C9D36: ;
    if (TEST_Z(MEM8(esi + 0x12), 1)) goto loc_004C9D46; /* je: equal / zero */

loc_004C9D3C: ;
    edi = 0x88780032u;
    g_seh_ebp = ebp; sub_004C9E14(); return; /* tail jmp 0x004C9E14 */

loc_004C9D46: ;
    MEM8(esi + 0x64) = LO8(eax);

loc_004C9D49: ;
    eax = ZX16(MEM16(ecx + 0xC));
    eax--;
    if ((eax == 0)) goto loc_004C9D67; /* je: equal / zero */

loc_004C9D50: ;
    eax = eax - 0x68;
    if ((eax != 0)) goto loc_004C9DA2; /* jne: not equal / not zero */

loc_004C9D55: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    eax = eax | 0xA0000000u;

loc_004C9D62: ;
    MEM32(esi + 0x14) = eax;
    goto loc_004C9DA2;

loc_004C9D67: ;
    SET_LO8(eax, MEM8(ecx + 0xF));
    if (CMP_EQ(LO8(eax), 8)) goto loc_004C9D9E; /* je: equal / zero */

loc_004C9D6E: ;
    if (CMP_EQ(LO8(eax), 0x10)) goto loc_004C9D8F; /* je: equal / zero */

loc_004C9D72: ;
    if (CMP_EQ(LO8(eax), 0x18)) goto loc_004C9D80; /* je: equal / zero */

loc_004C9D76: ;
    if (CMP_NE(LO8(eax), 0x20)) goto loc_004C9DA2; /* jne: not equal / not zero */

loc_004C9D7A: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 0xF0;
    goto loc_004C9DA2;

loc_004C9D80: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    eax = eax | 0xE0000000u;
    goto loc_004C9D62;

loc_004C9D8F: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    eax = eax | 0x50000000;
    goto loc_004C9D62;

loc_004C9D9E: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) & 0xF;

loc_004C9DA2: ;
    eax = ZX8(MEM8(ecx + 0xE));
    eax--;
    eax = eax << 0x10;
    eax = eax ^ MEM32(esi + 0x14);
    eax = eax & 0x1F0000;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) ^ eax;
    (void)0; /* cmp MEM8(ecx + 0xE), 1 - flags set for next jcc */
    eax = MEM32(esi + 0x14);
    if (CMP_NE(MEM8(ecx + 0xE), 1)) { sub_004C9DC5(); return; } /* jne: not equal / not zero */

loc_004C9DBE: ;
    eax = eax & 0xF7FFFFFFu;
    g_seh_ebp = ebp; sub_004C9DCA(); return; /* tail jmp 0x004C9DCA */

}

/**
 * sub_004C9E22
 * Original: 0x004C9E22 - 0x004C9EAA (136 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9E22(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C9E22: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004C9E38: ;
    ebx = esi + 0x12;
    if (TEST_Z(MEM8(ebx), 1)) goto loc_004C9E9E; /* je: equal / zero */

loc_004C9E40: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (CMP_BE(MEM8(esi + 0x64), 0)) goto loc_004C9E82; /* jbe: below or equal (unsigned <=) */

loc_004C9E4A: ;
    edx = esi + 0xC;
    PUSH32(esp, edi);

loc_004C9E4E: ;
    edi = ZX16(MEM16(edx));
    edi = edi << 7;
    edi = edi + MEM32(0x4E1E00);
    eax = 0; /* xor self */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ZX16(MEM16(edx));
    edi = MEM32(0x4E1E00);
    ecx = eax;
    ecx = ecx << 7;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(ecx + edi + 0x7C) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    edx++;
    edx++;
    if (CMP_B(MEM32(ebp + -4), eax)) goto loc_004C9E4E; /* jb: below (unsigned <) */

loc_004C9E81: ;
    POP32(esp, edi);

loc_004C9E82: ;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C7BDC(); /* call 0x004C7BDC */

loc_004C9E93: ;
    SET_LO16(edx, 0x10);
    ecx = ebx;
    PUSH32(esp, 0); sub_004CB8C3(); /* call 0x004CB8C3 */

loc_004C9E9E: ;
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004C9EA6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004C9EAA
 * Original: 0x004C9EAA - 0x004C9ED2 (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9EAA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C9EAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    ecx = MEM32(ecx + 0x70);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(edx & edx, 0)) goto loc_004C9ECE; /* jbe: below or equal (unsigned <=) */

loc_004C9EBE: ;
    ecx = ecx + 0x28;

loc_004C9EC1: ;
    esi = ZX8(MEM8(ecx));
    MEM32(ebp + eax * 4 + -32) = esi;
    eax++;
    ecx++;
    if (CMP_B(eax, edx)) goto loc_004C9EC1; /* jb: below (unsigned <) */

loc_004C9ECE: ;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_004C9EED(); return; /* tail jmp 0x004C9EED */

}

/**
 * sub_004C9F5B
 * Original: 0x004C9F5B - 0x004CA1A6 (587 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C9F5B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004C9F5B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x4C;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x70);
    (void)0; /* cmp MEM32(ebx + 0xB8), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -44) = ecx;
    if (CMP_EQ(MEM32(ebx + 0xB8), 0)) goto loc_004CA047; /* je: equal / zero */

loc_004C9F7B: ;
    if (TEST_Z(MEM8(ebx + 0xB), 1)) goto loc_004CA047; /* je: equal / zero */

loc_004C9F85: ;
    eax = ebx;
    eax = MEM32(eax + 0xB8);
    edi = MEM32(eax + 8);
    edi = edi + MEM32(eax + 4);
    eax = 0xFFFFD8F0u;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(ebp + -16) = edi;
    if (CMP_GE(edi, eax)) goto loc_004C9FA3; /* jge: greater or equal (signed >=) */

loc_004C9F9F: ;
    edi = eax;
    goto loc_004C9FA9;

loc_004C9FA3: ;
    if (CMP_LE(edi & edi, 0)) goto loc_004C9FAC; /* jle: less or equal (signed <=) */

loc_004C9FA7: ;
    edi = 0; /* xor self */

loc_004C9FA9: ;
    MEM32(ebp + -16) = edi;

loc_004C9FAC: ;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(edx + 0x1C);
    esi = esi + MEM32(edx + 0x14);
    esi = esi + MEM32(edx + 0xC);
    esi = esi + edi;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(ebp + -12) = esi;
    if (CMP_GE(esi, eax)) goto loc_004C9FCC; /* jge: greater or equal (signed >=) */

loc_004C9FC7: ;
    MEM32(ebp + -12) = eax;
    goto loc_004C9FD4;

loc_004C9FCC: ;
    if (CMP_LE(esi & esi, 0)) goto loc_004C9FD4; /* jle: less or equal (signed <=) */

loc_004C9FD0: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_004C9FD4: ;
    edx = MEM32(ecx + 0x70);
    esi = MEM32(edx + 0xB8);
    edx = MEM32(esi + 0x1C);
    edx = edx + MEM32(esi + 0x10);
    edx = edx + edi;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(ebp + -8) = edx;
    if (CMP_GE(edx, eax)) goto loc_004C9FF1; /* jge: greater or equal (signed >=) */

loc_004C9FEC: ;
    MEM32(ebp + -8) = eax;
    goto loc_004C9FF9;

loc_004C9FF1: ;
    if (CMP_LE(edx & edx, 0)) goto loc_004C9FF9; /* jle: less or equal (signed <=) */

loc_004C9FF5: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;

loc_004C9FF9: ;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(edx + 0x1C);
    esi = esi + MEM32(edx + 0x18);
    esi = esi + MEM32(edx + 0xC);
    esi = esi + edi;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(ebp + -20) = esi;
    if (CMP_GE(esi, eax)) goto loc_004CA019; /* jge: greater or equal (signed >=) */

loc_004CA014: ;
    MEM32(ebp + -20) = eax;
    goto loc_004CA021;

loc_004CA019: ;
    if (CMP_LE(esi & esi, 0)) goto loc_004CA021; /* jle: less or equal (signed <=) */

loc_004CA01D: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;

loc_004CA021: ;
    edx = MEM32(ebx + 0xB8);
    edx = MEM32(edx + 0x20);
    edx = edx + edi;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_GE(edx, eax)) goto loc_004CA038; /* jge: greater or equal (signed >=) */

loc_004CA033: ;
    MEM32(ebp + -4) = eax;
    goto loc_004CA040;

loc_004CA038: ;
    if (CMP_LE(edx & edx, 0)) goto loc_004CA040; /* jle: less or equal (signed <=) */

loc_004CA03C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_004CA040: ;
    MEM32(ebp + -36) = 1;

loc_004CA047: ;
    edi = ZX8(MEM8(ecx + 0x64));
    eax = MEM32(ebx + 0x24);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    esi = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -32) = eax;
    if (CMP_BE(edi & edi, 0)) goto loc_004CA19F; /* jbe: below or equal (unsigned <=) */

loc_004CA062: ;
    edi = 0xFFF;

loc_004CA067: ;
    ebx = 0; /* xor self */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -40) = eax;
    goto loc_004CA07A;

loc_004CA077: ;
    eax = MEM32(ebp + -40);

loc_004CA07A: ;
    if (CMP_B(ebx, eax)) { sub_004CA1A6(); return; } /* jb: below (unsigned <) */

loc_004CA082: ;
    eax = esi + 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));
    if (CMP_AE(ebx, eax)) { sub_004CA1A6(); return; } /* jae: above or equal (unsigned >=) */

loc_004CA091: ;
    edx = MEM32(ecx + 0x70);
    eax = ZX8(MEM8(edx + ebx + 0x28));
    eax = MEM32(edx + eax * 4 + 0x30);
    eax = eax + MEM32(edx + 0x1C);
    esi = ebp + ebx * 4 + -76;
    eax = (uint32_t)(-(int32_t)eax);
    (void)0; /* cmp MEM32(ebp + -36), 0 - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_EQ(MEM32(ebp + -36), 0)) goto loc_004CA0E4; /* je: equal / zero */

loc_004CA0AE: ;
    SET_LO8(ebx, MEM8(ebx + edx + 0x28));
    if (CMP_EQ(LO8(ebx), 2)) goto loc_004CA0DF; /* je: equal / zero */

loc_004CA0B7: ;
    if (CMP_BE(LO8(ebx), 5)) goto loc_004CA0DA; /* jbe: below or equal (unsigned <=) */

loc_004CA0BC: ;
    if (CMP_BE(LO8(ebx), 7)) goto loc_004CA0D5; /* jbe: below or equal (unsigned <=) */

loc_004CA0C1: ;
    if (CMP_BE(LO8(ebx), 9)) goto loc_004CA0D0; /* jbe: below or equal (unsigned <=) */

loc_004CA0C6: ;
    if (CMP_NE(LO8(ebx), 0xA)) goto loc_004CA0DA; /* jne: not equal / not zero */

loc_004CA0CB: ;
    eax = eax - MEM32(ebp + -4);
    goto loc_004CA0E2;

loc_004CA0D0: ;
    eax = eax - MEM32(ebp + -8);
    goto loc_004CA0E2;

loc_004CA0D5: ;
    eax = eax - MEM32(ebp + -12);
    goto loc_004CA0E2;

loc_004CA0DA: ;
    eax = eax - MEM32(ebp + -16);
    goto loc_004CA0E2;

loc_004CA0DF: ;
    eax = eax - MEM32(ebp + -20);

loc_004CA0E2: ;
    MEM32(esi) = eax;

loc_004CA0E4: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x64);
    eax = eax << 6;
    edx = 0; /* xor self */
    POP32(esp, ebx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ebx = MEM32(ebp + -24);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_BE(eax, edi)) goto loc_004CA0FB; /* jbe: below or equal (unsigned <=) */

loc_004CA0F9: ;
    MEM32(esi) = edi;

loc_004CA0FB: ;
    esi = MEM32(ebp + -28);
    ebx++;
    (void)0; /* cmp ebx, 8 - flags set for next jcc */
    MEM32(ebp + -24) = ebx;
    if (CMP_B(ebx, 8)) goto loc_004CA077; /* jb: below (unsigned <) */

loc_004CA10B: ;
    eax = MEM32(ebp + -48);
    edx = MEM32(ebp + -72);
    ecx = eax;
    ecx = ecx & 0xF;
    edx = edx << 4;
    ecx = ecx | edx;
    edx = MEM32(ebp + -76);
    ecx = ecx << 0xC;
    edx = edx & edi;
    ecx = ecx | edx;
    edx = MEM32(ebp + -52);
    ecx = ecx << 4;
    ebx = edx;
    ebx = ebx & 0xF;
    ecx = ecx | ebx;
    ebx = MEM32(ebp + 8);
    MEM32(ebx + esi * 4) = ecx;
    ecx = MEM32(ebp + -64);
    ebx = eax;
    ebx = ebx & 0xF0;
    ecx = ecx << 8;
    ebx = ebx | ecx;
    ecx = MEM32(ebp + -68);
    ebx = ebx << 8;
    ecx = ecx & edi;
    ebx = ebx | ecx;
    ebx = ebx << 4;
    ecx = edx;
    ecx = ecx >> 4;
    ecx = ecx & 0xF;
    ebx = ebx | ecx;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + esi * 4 + 0xC) = ebx;
    ebx = MEM32(ebp + -56);
    eax = eax & 0xF00;
    ebx = ebx << 0xC;
    eax = eax | ebx;
    ebx = MEM32(ebp + -60);
    eax = eax << 4;
    ebx = ebx & edi;
    eax = eax | ebx;
    edx = edx >> 8;
    eax = eax << 4;
    edx = edx & 0xF;
    eax = eax | edx;
    MEM32(ecx + esi * 4 + 0x18) = eax;
    ecx = MEM32(ebp + -44);
    eax = ZX8(MEM8(ecx + 0x64));
    esi++;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    MEM32(ebp + -28) = esi;
    if (CMP_B(esi, eax)) goto loc_004CA067; /* jb: below (unsigned <) */

loc_004CA19F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA1AF
 * Original: 0x004CA1AF - 0x004CA1C2 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA1AF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CA1AF: ;
    edx = MEM32(ecx + 0x70);
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    if (TEST_Z(esi, 0x182000)) { sub_004CA1C2(); return; } /* je: equal / zero */

loc_004CA1BE: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004CA224(); return; /* tail jmp 0x004CA224 */

}

/**
 * sub_004CA231
 * Original: 0x004CA231 - 0x004CA2A5 (116 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA231(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CA231: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ecx + 0x70);
    edx = MEM32(eax + 0xB0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(edx, ebx)) goto loc_004CA278; /* je: equal / zero */

loc_004CA244: ;
    edx = MEM32(edx + 0x20);
    if (CMP_EQ(edx, ebx)) goto loc_004CA278; /* je: equal / zero */

loc_004CA24B: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x70);
    (void)0; /* test MEM32(esi + 8), 0x82000 - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(MEM32(esi + 8), 0x82000)) goto loc_004CA278; /* je: equal / zero */

loc_004CA259: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 2;
    eax = MEM32(ecx + 8);
    edx = MEM32(edx + 0x50);
    eax = eax + 0x498;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_004CA29E; /* je: equal / zero */

loc_004CA271: ;
    edx = edx + 0xFFFFFFB4u;
    MEM32(eax) = edx;
    goto loc_004CA2A0;

loc_004CA278: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, 0x182000)) goto loc_004CA28A; /* je: equal / zero */

loc_004CA282: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 2;
    goto loc_004CA29B;

loc_004CA28A: ;
    (void)0; /* test eax, 0x200010 - flags set for next jcc */
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, 0x200010)) goto loc_004CA299; /* je: equal / zero */

loc_004CA294: ;
    MEM8(eax) = 1;
    goto loc_004CA29B;

loc_004CA299: ;
    MEM8(eax) = LO8(ebx);

loc_004CA29B: ;
    eax = MEM32(ebp + 0xC);

loc_004CA29E: ;
    MEM32(eax) = ebx;

loc_004CA2A0: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CA2A5
 * Original: 0x004CA2A5 - 0x004CA300 (91 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA2A5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CA2A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX8(MEM8(esi + 0x65));
    eax = ecx + ecx * 2;
    eax = eax << 2;
    edx = MEM32(eax + 0x4E14E8);
    PUSH32(esp, edi);
    edi = MEM32(edx + -25165824);
    MEM32(ebp + -4) = edi;
    edi = MEM32(eax + 0x4E14EC);
    eax = MEM32(eax + 0x4E14F0);
    edi = MEM32(edi + -25165824);
    eax = MEM32(eax + -25165824);
    MEM32(ebp + -28) = eax;
    eax = MEM32(esi + 8);
    ecx = eax + ecx * 8 + 0x488;
    eax = MEM32(esi + 0x50);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + -24) = edi;
    if (CMP_NE(ecx, eax)) { sub_004CA300(); return; } /* jne: not equal / not zero */

loc_004CA2F7: ;
    edi = 0; /* xor self */
    eax = 0xFFFF;
    g_seh_ebp = ebp; sub_004CA30C(); return; /* tail jmp 0x004CA30C */

}

/**
 * sub_004CA481
 * Original: 0x004CA481 - 0x004CA4E6 (101 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA481(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CA481: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CA496: ;
    MEM32(0x4E1C68) = MEM32(0x4E1C68) + 1;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 1);
    ecx = ecx + 8;
    PUSH32(esp, 0); sub_004CDE78(); /* call 0x004CDE78 */

loc_004CA4A9: ;
    ebx = eax;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x8001);
    if (CMP_NE(LO16(eax), 0x8001)) goto loc_004CA4C2; /* jne: not equal / not zero */

loc_004CA4B9: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004CA2A5(); /* call 0x004CA2A5 */

loc_004CA4C2: ;
    if (TEST_Z(ebx, ebx)) goto loc_004CA4D3; /* je: equal / zero */

loc_004CA4C6: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    ecx = ecx + 8;
    PUSH32(esp, 0); sub_004CDE78(); /* call 0x004CDE78 */

loc_004CA4D3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_004CA4DA: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CA4E2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CA4E6
 * Original: 0x004CA4E6 - 0x004CA56A (132 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA4E6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CA4E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CA4FA: ;
    ecx = esi + 0x12;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) goto loc_004CA55F; /* jne: not equal / not zero */

loc_004CA505: ;
    SET_LO16(edx, 8);
    PUSH32(esp, 0); sub_004C9C82(); /* call 0x004C9C82 */

loc_004CA50E: ;
    eax = ZX8(MEM8(esi + 0x64));
    MEM8(esi + 0x16) = MEM8(esi + 0x16) & 0x7F;
    ecx = eax + eax * 2;

loc_004CA519: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, ecx)) goto loc_004CA519; /* jb: below (unsigned <) */

loc_004CA526: ;
    edx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_004CA55F; /* jbe: below or equal (unsigned <=) */

loc_004CA52C: ;
    eax = esi + 0xC;

loc_004CA52F: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = ZX16(MEM16(eax));
    MEM32(-25033992) = ecx;
    ecx = MEM32(esi + 0x14);
    if (TEST_Z(edx, edx)) goto loc_004CA545; /* je: equal / zero */

loc_004CA53F: ;
    ecx = ecx | 0x400000;

loc_004CA545: ;
    MEM32(-25033980) = ecx;
    ecx = ZX16(MEM16(eax));
    MEM32(-25034452) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    edx++;
    eax++;
    eax++;
    if (CMP_B(edx, ecx)) goto loc_004CA52F; /* jb: below (unsigned <) */

loc_004CA55F: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CA567: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CA56A
 * Original: 0x004CA56A - 0x004CA5BE (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA56A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004CA56A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_004CA57C: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x8001);
    if (CMP_NE(LO16(eax), 0x8001)) goto loc_004CA5B2; /* jne: not equal / not zero */

loc_004CA58A: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x7C);
    edx = MEM32(ebp + -4);
    ecx = ecx + 0x4C4B40;
    eax = eax + 0 + _cf; /* adc */
    if (CMP_L(edx, eax)) goto loc_004CA5BB; /* jl: less (signed <) */

loc_004CA5A0: ;
    if (CMP_G(edx, eax)) goto loc_004CA5A9; /* jg: greater (signed >) */

loc_004CA5A2: ;
    eax = MEM32(ebp + -8);
    if (CMP_B(eax, ecx)) goto loc_004CA5BB; /* jb: below (unsigned <) */

loc_004CA5A9: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CA481(); /* call 0x004CA481 */

loc_004CA5B0: ;
    goto loc_004CA5BB;

loc_004CA5B2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_004CA5BB: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CA5BE
 * Original: 0x004CA5BE - 0x004CA6A4 (230 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA5BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004CA5BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CA5D9: ;
    eax = 0; /* xor self */
    edi = esi + 0x12;
    SET_LO16(eax, MEM16(edi));
    ebx = 0x444;
    MEM32(ebp + 8) = MEM32(ebp + 8) & ebx;
    eax = eax & ebx;
    if (CMP_EQ(eax, MEM32(ebp + 8))) goto loc_004CA692; /* je: equal / zero */

loc_004CA5F4: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi));
    eax = eax & 0x40;
    ecx = ecx & 0x40;
    if (CMP_EQ(eax, ecx)) goto loc_004CA61C; /* je: equal / zero */

loc_004CA605: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_004CA617; /* je: equal / zero */

loc_004CA60D: ;
    PUSH32(esp, 0); sub_004C8123(); /* call 0x004C8123 */

loc_004CA612: ;
    MEM32(ebp + -4) = eax;
    goto loc_004CA61C;

loc_004CA617: ;
    PUSH32(esp, 0); sub_004C814A(); /* call 0x004C814A */

loc_004CA61C: ;
    SET_LO16(ecx, MEM16(edi));
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, LO16(ecx) & LO16(ebx));
    SET_LO16(ecx, (uint32_t)(-(int32_t)LO16(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = 0; /* xor self */
    ecx = (uint32_t)(-(int32_t)ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    if (CMP_EQ(ecx, edx)) goto loc_004CA67F; /* je: equal / zero */

loc_004CA637: ;
    SET_LO8(ecx, MEM8(edi));
    SET_LO8(ecx, LO8(ecx) & 3);
    if (CMP_NE(LO8(ecx), 3)) goto loc_004CA67F; /* jne: not equal / not zero */

loc_004CA641: ;
    ecx = ZX8(MEM8(esi + 0x64));
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x40000;

loc_004CA64E: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, ecx)) goto loc_004CA64E; /* jb: below (unsigned <) */

loc_004CA65B: ;
    edx = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_004CA67F; /* jbe: below or equal (unsigned <=) */

loc_004CA661: ;
    eax = eax & 0xFFFF0000u;
    ecx = esi + 0xC;

loc_004CA669: ;
    ebx = ZX16(MEM16(ecx));
    ebx = ebx | eax;
    MEM32(-25034432) = ebx;
    ebx = ZX8(MEM8(esi + 0x64));
    edx++;
    ecx++;
    ecx++;
    if (CMP_B(edx, ebx)) goto loc_004CA669; /* jb: below (unsigned <) */

loc_004CA67F: ;
    SET_LO16(edx, 0xFBBB);
    ecx = edi;
    PUSH32(esp, 0); sub_004CB8C3(); /* call 0x004CB8C3 */

loc_004CA68A: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_004C9C82(); /* call 0x004C9C82 */

loc_004CA692: ;
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CA69A: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CA6A4
 * Original: 0x004CA6A4 - 0x004CA733 (143 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA6A4(void)
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

loc_004CA6A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -28;
    MEM32(ebp + -8) = esi;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CA6BE: ;
    edx = MEM32(ebp + 8);
    if (TEST_NZ(edx, edx)) goto loc_004CA6D4; /* jne: not equal / not zero */

loc_004CA6C5: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    if (TEST_Z(eax, eax)) goto loc_004CA6D4; /* je: equal / zero */

loc_004CA6D2: ;
    edx = eax;

loc_004CA6D4: ;
    ecx = MEM32(ebp + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = 0xFFFF;
    if (TEST_NZ(ecx, ecx)) goto loc_004CA6F2; /* jne: not equal / not zero */

loc_004CA6E0: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    if (TEST_Z(eax, eax)) { sub_004CA733(); return; } /* je: equal / zero */

loc_004CA6ED: ;
    ecx = eax;
    MEM32(ebp + 0xC) = ecx;

loc_004CA6F2: ;
    if (TEST_Z(edx, edx)) goto loc_004CA6FC; /* je: equal / zero */

loc_004CA6F6: ;
    if (CMP_EQ(MEM32(edx + 0x40), 2)) { sub_004CA733(); return; } /* je: equal / zero */

loc_004CA6FC: ;
    eax = MEM32(0x4E1660);
    edx = eax;
    edx = edx & edi;
    if (CMP_EQ(edx, 2)) goto loc_004CA715; /* je: equal / zero */

loc_004CA70A: ;
    if (TEST_NZ(eax, 0x10000)) goto loc_004CA715; /* jne: not equal / not zero */

loc_004CA711: ;
    eax = 0; /* xor self */
    goto loc_004CA718;

loc_004CA715: ;
    eax = 0; /* xor self */
    eax++;

loc_004CA718: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    edx = ebp + -20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C9C86(); /* call 0x004C9C86 */

loc_004CA731: ;
    g_seh_ebp = ebp; sub_004CA73E(); return; /* tail jmp 0x004CA73E */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CA813
 * Original: 0x004CA813 - 0x004CA87A (103 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA813(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CA813: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CA827: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    if (TEST_NZ(ecx, ecx)) { sub_004CA87A(); return; } /* jne: not equal / not zero */

loc_004CA830: ;
    (void)0; /* cmp MEM32(eax + 4), ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(eax + 4), ecx)) ? 1 : 0); /* setne */
    ecx = ecx << 0xE;
    ecx = ecx ^ MEM32(esi + 0x18);
    ecx = ecx & 0x4000;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) ^ ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx ^ MEM32(esi + 0x2C);
    ecx = ecx & 0x7FFF;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) ^ ecx;
    ecx = MEM32(eax + 8);
    ecx = ecx << 0xC;
    ecx = ecx ^ MEM32(esi + 0x30);
    ecx = ecx & 0x3FF000;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) ^ ecx;
    SET_LO8(ecx, MEM8(eax + 0x14));
    MEM8(esi + 0x34) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0xC));
    MEM8(esi + 0x35) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 0x10));
    MEM8(esi + 0x36) = LO8(eax);
    g_seh_ebp = ebp; sub_004CA8C2(); return; /* tail jmp 0x004CA8C2 */

}

/**
 * sub_004CA942
 * Original: 0x004CA942 - 0x004CA9D6 (148 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CA942(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CA942: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CA958: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    if (TEST_NZ(ecx, ecx)) { sub_004CA9D6(); return; } /* jne: not equal / not zero */

loc_004CA961: ;
    ecx = MEM32(eax + 4);
    ecx = ecx << 0x18;
    ecx = ecx ^ MEM32(esi + 0x40);
    edi = 0xFFF000;
    ecx = ecx & 0xF000000;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) ^ ecx;
    edx = MEM32(eax + 0x18);
    edx = edx ^ MEM32(esi + 0x18);
    ecx = 0xFFF;
    edx = edx & ecx;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) ^ edx;
    SET_LO8(edx, MEM8(eax + 0x20));
    MEM8(esi + 0x1F) = LO8(edx);
    edx = MEM32(eax + 0xC);
    edx = edx ^ MEM32(esi + 0x24);
    edx = edx & ecx;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) ^ edx;
    ebx = MEM32(eax + 8);
    edx = MEM32(esi + 0x24);
    ebx = ebx << 0xC;
    ebx = ebx ^ edx;
    ebx = ebx & edi;
    ebx = ebx ^ edx;
    MEM32(esi + 0x24) = ebx;
    SET_LO8(edx, MEM8(eax + 0x24));
    MEM8(esi + 0x27) = LO8(edx);
    edx = MEM32(eax + 0x14);
    edx = edx ^ MEM32(esi + 0x28);
    edx = edx & ecx;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) ^ edx;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(esi + 0x28);
    edx = edx << 0xC;
    edx = edx ^ ecx;
    edx = edx & edi;
    edx = edx ^ ecx;
    MEM32(esi + 0x28) = edx;
    SET_LO8(eax, MEM8(eax + 0x1C));
    MEM8(esi + 0x2B) = LO8(eax);
    g_seh_ebp = ebp; sub_004CAA44(); return; /* tail jmp 0x004CAA44 */

}

/**
 * sub_004CAAD4
 * Original: 0x004CAAD4 - 0x004CAB0A (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAAD4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CAAD4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CAAEB: ;
    esi = MEM32(ebp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = 0xFFFF;
    if (TEST_Z(esi, esi)) { sub_004CAB0A(); return; } /* je: equal / zero */

loc_004CAAF7: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -32;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + -20);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_004CAB36(); return; /* tail jmp 0x004CAB36 */

}

/**
 * sub_004CAC1E
 * Original: 0x004CAC1E - 0x004CACA9 (139 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAC1E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CAC1E: ;
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

loc_004CAC34: ;
    eax = 0; /* xor self */
    eax++;
    if (TEST_Z(MEM8(esi + 0x12), LO8(eax))) goto loc_004CAC9B; /* je: equal / zero */

loc_004CAC3C: ;
    ecx = ZX8(MEM8(esi + 0x64));
    ecx = ZX16(MEM16(esi + ecx * 2 + 0xA));
    edx = MEM32(0x4E1E00);
    ecx = ecx << 7;
    if (TEST_NZ(MEM32(ecx + edx + 0x54), 0x100000)) goto loc_004CAC9B; /* jne: not equal / not zero */

loc_004CAC58: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    if (CMP_B(ecx, 0xC)) goto loc_004CAC58; /* jb: below (unsigned <) */

loc_004CAC66: ;
    ecx = ZX16(MEM16(esi + 0xC));
    MEM32(-25033992) = ecx;
    MEM32(0xFE8202FCu) = eax;
    eax = ZX16(MEM16(esi + 0xC));
    ecx = MEM32(0x4E1E00);
    eax = eax << 7;
    eax = MEM32(eax + ecx + 0x58);
    eax = eax & 0xFFFFFF;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(-25033988) = edi;
    PUSH32(esp, 0); sub_004C87F0(); /* call 0x004C87F0 */

loc_004CAC99: ;
    edi = eax;

loc_004CAC9B: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CACA3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CACA9
 * Original: 0x004CACA9 - 0x004CACC5 (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CACA9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CACA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (TEST_NZ(MEM8(ecx + 0x12), 1)) { sub_004CACC5(); return; } /* jne: not equal / not zero */

loc_004CACB9: ;
    MEM32(ebp + -4) = 0x88780032u;
    g_seh_ebp = ebp; sub_004CAE31(); return; /* tail jmp 0x004CAE31 */

}

/**
 * sub_004CAE38
 * Original: 0x004CAE38 - 0x004CAE4D (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAE38(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CAE38: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_004CAE47; /* je: equal / zero */

loc_004CAE41: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_004CAE47: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CAE4D
 * Original: 0x004CAE4D - 0x004CAE6B (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAE4D(void)
{

loc_004CAE4D: ;
    eax = MEM32(esp + 4);
    eax = eax << 4;
    eax = eax + MEM32(0x4E1E10);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0); sub_004C9CA8(); /* call 0x004C9CA8 */

loc_004CAE68: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CAE6B
 * Original: 0x004CAE6B - 0x004CAE82 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAE6B(void)
{

loc_004CAE6B: ;
    eax = ZX16(MEM16(esp + 4));
    PUSH32(esp, 4);
    eax = eax * 4 + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CAE4D(); /* call 0x004CAE4D */

loc_004CAE7F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CAE82
 * Original: 0x004CAE82 - 0x004CAFFC (378 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAE82(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CAE82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -20;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CAE9C: ;
    ebx = esi + 0x12;
    if (TEST_NZ(MEM8(ebx), 1)) goto loc_004CAFED; /* jne: not equal / not zero */

loc_004CAEA8: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C7B4B(); /* call 0x004C7B4B */

loc_004CAEB1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_004CAFED; /* jl: less (signed <) */

loc_004CAEBC: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = esi + 0xC;
    SET_LO16(eax, MEM16(edi));
    ecx = esi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CAE6B(); /* call 0x004CAE6B */

loc_004CAECE: ;
    SET_LO16(edx, 1);
    ecx = ebx;
    PUSH32(esp, 0); sub_004C9C82(); /* call 0x004C9C82 */

loc_004CAED9: ;
    ebx = esi + 0x14;
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C9EAA(); /* call 0x004C9EAA */

loc_004CAEE8: ;
    eax = ebp + -56;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C9F5B(); /* call 0x004C9F5B */

loc_004CAEF3: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004CA1AF(); /* call 0x004CA1AF */

loc_004CAEFE: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM8(esi + 0x64), LO8(eax))) goto loc_004CAFD5; /* jbe: below or equal (unsigned <=) */

loc_004CAF09: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    if (CMP_B(ecx, 0x48)) goto loc_004CAF09; /* jb: below (unsigned <) */

loc_004CAF17: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = ZX16(MEM16(edi));
    MEM32(-25033992) = ecx;
    ecx = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_004CAF2C; /* je: equal / zero */

loc_004CAF26: ;
    ecx = ecx | 0x400000;

loc_004CAF2C: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(-25033960) = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(-25033976) = ecx;
    ecx = MEM32(esi + 0x20);
    MEM32(-25033972) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(-25033968) = ecx;
    ecx = MEM32(esi + 0x28);
    MEM32(-25033964) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(-25033904) = ecx;
    ecx = MEM32(esi + 0x30);
    MEM32(-25033876) = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(-25033872) = ecx;
    ecx = MEM32(esi + 0x38);
    MEM32(-25033868) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(-25033864) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(-25033984) = ecx;
    ecx = MEM32(ebp + eax * 4 + -56);
    MEM32(-25033888) = ecx;
    ecx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033884) = ecx;
    ecx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033880) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(-25033860) = ecx;
    MEM32(-25033956) = 0xFFFF;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    edi++;
    edi++;
    if (CMP_B(eax, ecx)) goto loc_004CAF09; /* jb: below (unsigned <) */

loc_004CAFD5: ;
    eax = MEM32(esi + 0x70);
    (void)0; /* test MEM32(eax + 8), 0x200010 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(MEM32(eax + 8), 0x200010)) goto loc_004CAFED; /* je: equal / zero */

loc_004CAFE2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004CA6A4(); /* call 0x004CA6A4 */

loc_004CAFED: ;
    ecx = ebp + -20;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CAFF5: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CAFFC
 * Original: 0x004CAFFC - 0x004CB0BD (193 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CAFFC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CAFFC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CB011: ;
    if (TEST_Z(MEM8(esi + 0x12), 1)) goto loc_004CB0B0; /* je: equal / zero */

loc_004CB01B: ;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C9EAA(); /* call 0x004C9EAA */

loc_004CB02B: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C9F5B(); /* call 0x004C9F5B */

loc_004CB036: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax;
    ecx = ecx << 3;

loc_004CB03F: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, ecx)) goto loc_004CB03F; /* jb: below (unsigned <) */

loc_004CB04C: ;
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_004CB0AF; /* jbe: below or equal (unsigned <=) */

loc_004CB052: ;
    edx = esi + 0xC;

loc_004CB055: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ZX16(MEM16(edx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -4);
    MEM32(-25033988) = 1;
    MEM32(0xFE820300u) = eax;
    eax = MEM32(edi);
    if (TEST_Z(ecx, ecx)) goto loc_004CB07A; /* je: equal / zero */

loc_004CB075: ;
    eax = eax | 0x400000;

loc_004CB07A: ;
    MEM32(0xFE820304u) = eax;
    eax = MEM32(ebp + ecx * 4 + -48);
    MEM32(0xFE820360u) = eax;
    eax = MEM32(ebp + ecx * 4 + -36);
    MEM32(0xFE820364u) = eax;
    eax = MEM32(ebp + ecx * 4 + -24);
    MEM32(0xFE820368u) = eax;
    MEM32(-25033988) = 0;
    eax = ZX8(MEM8(esi + 0x64));
    ecx++;
    edx++;
    edx++;
    if (CMP_B(ecx, eax)) goto loc_004CB055; /* jb: below (unsigned <) */

loc_004CB0AF: ;
    POP32(esp, edi);

loc_004CB0B0: ;
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CB0B8: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB0BD
 * Original: 0x004CB0BD - 0x004CB155 (152 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB0BD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CB0BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CB0D2: ;
    if (TEST_Z(MEM8(esi + 0x12), 1)) goto loc_004CB148; /* je: equal / zero */

loc_004CB0D8: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C9F5B(); /* call 0x004C9F5B */

loc_004CB0E3: ;
    ecx = ZX8(MEM8(esi + 0x64));
    eax = ecx + ecx * 2;
    eax = eax << 1;

loc_004CB0EC: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, eax)) goto loc_004CB0EC; /* jb: below (unsigned <) */

loc_004CB0F9: ;
    eax = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_004CB148; /* jbe: below or equal (unsigned <=) */

loc_004CB0FF: ;
    ecx = esi + 0xC;

loc_004CB102: ;
    edx = ZX16(MEM16(ecx));
    MEM32(-25033992) = edx;
    edx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033988) = 1;
    MEM32(-25033888) = edx;
    edx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033884) = edx;
    edx = MEM32(ebp + eax * 4 + -20);
    MEM32(-25033880) = edx;
    MEM32(-25033988) = 0;
    edx = ZX8(MEM8(esi + 0x64));
    eax++;
    ecx++;
    ecx++;
    if (CMP_B(eax, edx)) goto loc_004CB102; /* jb: below (unsigned <) */

loc_004CB148: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CB150: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB155
 * Original: 0x004CB155 - 0x004CB18E (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB155(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CB155: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CB16B: ;
    eax = MEM32(esi + 0x70);
    if (TEST_Z(MEM32(eax + 8), 0x182000)) { sub_004CB18E(); return; } /* je: equal / zero */

loc_004CB177: ;
    edi = esi + 0x44;
    esi = MEM32(edi);
    goto loc_004CB188;

loc_004CB17E: ;
    ecx = esi + -92;
    PUSH32(esp, 0); sub_004CB155(); /* call 0x004CB155 */

loc_004CB186: ;
    esi = MEM32(esi);

loc_004CB188: ;
    if (CMP_NE(esi, edi)) goto loc_004CB17E; /* jne: not equal / not zero */

loc_004CB18C: ;
    g_seh_ebp = ebp; sub_004CB1D9(); return; /* tail jmp 0x004CB1D9 */

}

/**
 * sub_004CB1E7
 * Original: 0x004CB1E7 - 0x004CB203 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB1E7(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CB1E7: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(MEM8(esi + 0x12), 1)) goto loc_004CB201; /* je: equal / zero */

loc_004CB1F0: ;
    goto loc_004CB1F9;

loc_004CB1F2: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CA56A(); /* call 0x004CA56A */

loc_004CB1F9: ;
    if (TEST_NZ(MEM16(esi + 0x12), 0x8000)) goto loc_004CB1F2; /* jne: not equal / not zero */

loc_004CB201: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB203
 * Original: 0x004CB203 - 0x004CB26C (105 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB203(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CB203: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    if (TEST_Z(MEM8(eax), 0x1F)) goto loc_004CB219; /* je: equal / zero */

loc_004CB214: ;
    PUSH32(esp, 0); sub_004CB0BD(); /* call 0x004CB0BD */

loc_004CB219: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    if (TEST_Z(MEM8(eax), 0x20)) goto loc_004CB22E; /* je: equal / zero */

loc_004CB227: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CB155(); /* call 0x004CB155 */

loc_004CB22E: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    if (TEST_Z(MEM8(eax), 0x40)) goto loc_004CB247; /* je: equal / zero */

loc_004CB23C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004CA6A4(); /* call 0x004CA6A4 */

loc_004CB247: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    if (TEST_Z(MEM8(eax), 0x80)) goto loc_004CB25E; /* je: equal / zero */

loc_004CB255: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004CAAD4(); /* call 0x004CAAD4 */

loc_004CB25E: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    MEM32(eax) = MEM32(eax) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB26C
 * Original: 0x004CB26C - 0x004CB2D1 (101 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB26C(void)
{

loc_004CB26C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x5860DC;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004CB28E: ;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004CB29A: ;
    MEM32(esi + 0x70) = eax;
    eax = esi + 0x4C;
    MEM32(esi + 0x50) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x54;
    MEM32(esi + 0x58) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x5C;
    MEM32(esi + 0x60) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x44;
    MEM32(esi + 0x48) = eax;
    MEM32(eax) = eax;
    MEM8(esi + 0x65) = 0xFF;
    edi = esi + 0xC;
    eax = eax | 0xFFFFFFFFu;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CB2D1
 * Original: 0x004CB2D1 - 0x004CB3E9 (280 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB2D1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CB2D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x12;
    eax = ZX16(MEM16(edi));
    eax = eax & 0xFFFFFFBFu;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_004CA5BE(); /* call 0x004CA5BE */

loc_004CB2EF: ;
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) { sub_004CB3E9(); return; } /* jne: not equal / not zero */

loc_004CB2FB: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CB303: ;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x84) = MEM32(eax + 0x84) + 1;
    SET_LO16(edx, 0x3111);
    ecx = edi;
    PUSH32(esp, 0); sub_004CB8C3(); /* call 0x004CB8C3 */

loc_004CB318: ;
    MEM16(esi + 0x16) = MEM16(esi + 0x16) & 0xFD7F;
    if (CMP_AE(MEM8(esi + 0x65), 3)) goto loc_004CB37A; /* jae: above or equal (unsigned >=) */

loc_004CB324: ;
    SET_LO16(edx, 0x8000);
    PUSH32(esp, 0); sub_004C9C82(); /* call 0x004C9C82 */

loc_004CB32D: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 2;

loc_004CB334: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, ecx)) goto loc_004CB334; /* jb: below (unsigned <) */

loc_004CB341: ;
    edx = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_004CB37A; /* jbe: below or equal (unsigned <=) */

loc_004CB347: ;
    eax = esi + 0xC;

loc_004CB34A: ;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = ZX16(MEM16(eax));
    MEM32(-25033992) = ecx;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(edx, ebx)) goto loc_004CB360; /* je: equal / zero */

loc_004CB35A: ;
    ecx = ecx | 0x400000;

loc_004CB360: ;
    MEM32(-25033980) = ecx;
    ecx = ZX16(MEM16(eax));
    MEM32(-25034456) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    edx++;
    eax++;
    eax++;
    if (CMP_B(edx, ecx)) goto loc_004CB34A; /* jb: below (unsigned <) */

loc_004CB37A: ;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x84) = MEM32(eax + 0x84) - 1;
    eax = esi + 0x78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_004CB38E: ;
    if (CMP_NE(MEM32(ebp + 8), ebx)) goto loc_004CB39E; /* jne: not equal / not zero */

loc_004CB393: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_004CB39E: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    if (CMP_EQ(eax, ebx)) goto loc_004CB3DF; /* je: equal / zero */

loc_004CB3AB: ;
    ecx = MEM32(eax + 0x20);
    if (CMP_EQ(ecx, ebx)) goto loc_004CB3DF; /* je: equal / zero */

loc_004CB3B2: ;
    eax = MEM32(ecx + 0x80);
    if (TEST_Z(MEM32(eax + 8), 0x82000)) goto loc_004CB3DF; /* je: equal / zero */

loc_004CB3C1: ;
    edi = ecx + 0x44;
    eax = MEM32(edi);
    goto loc_004CB3D5;

loc_004CB3C8: ;
    SET_LO8(edx, MEM8(eax + -74));
    SET_LO8(edx, LO8(edx) & 3);
    if (CMP_EQ(LO8(edx), 3)) goto loc_004CB3DF; /* je: equal / zero */

loc_004CB3D3: ;
    eax = MEM32(eax);

loc_004CB3D5: ;
    if (CMP_NE(eax, edi)) goto loc_004CB3C8; /* jne: not equal / not zero */

loc_004CB3D9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004CC214(); /* call 0x004CC214 */

loc_004CB3DF: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CB3E7: ;
    g_seh_ebp = ebp; sub_004CB3F8(); return; /* tail jmp 0x004CB3F8 */

}

/**
 * sub_004CB40B
 * Original: 0x004CB40B - 0x004CB490 (133 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB40B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CB40B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_004C36E9(); /* call 0x004C36E9 */

loc_004CB41A: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) goto loc_004CB485; /* jne: not equal / not zero */

loc_004CB423: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, MEM32(eax + 0xB4));
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0xC);
    eax = eax + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5D4C(); /* call 0x004C5D4C */

loc_004CB43B: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, MEM32(eax + 0xB8));
    edx = MEM32(eax + 0xB4);
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0xC);
    eax = edx + 0x7C;
    PUSH32(esp, eax);
    eax = ecx + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ecx + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C4613(); /* call 0x004C4613 */

loc_004CB465: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x7C) = MEM32(eax + 0x7C) & 0;
    ecx = esi;
    PUSH32(esp, 0); sub_004CB203(); /* call 0x004CB203 */

loc_004CB485: ;
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_004C370E(); /* call 0x004C370E */

loc_004CB48D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB490
 * Original: 0x004CB490 - 0x004CB4B7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CB490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CB4A6: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    if (TEST_NZ(eax, eax)) { sub_004CB4B7(); return; } /* jne: not equal / not zero */

loc_004CB4B3: ;
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_004CB4BA(); return; /* tail jmp 0x004CB4BA */

}

/**
 * sub_004CB59D
 * Original: 0x004CB59D - 0x004CB6A4 (263 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB59D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CB59D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    ecx = ebp + -16;
    MEM32(ebp + -12) = edi;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CB5B4: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    if (CMP_EQ(eax, edi)) goto loc_004CB696; /* je: equal / zero */

loc_004CB5C5: ;
    if (CMP_EQ(MEM32(eax + 0x20), edi)) goto loc_004CB696; /* je: equal / zero */

loc_004CB5CE: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) goto loc_004CB5DF; /* jne: not equal / not zero */

loc_004CB5D7: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004CB2D1(); /* call 0x004CB2D1 */

loc_004CB5DF: ;
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C3680(); /* call 0x004C3680 */

loc_004CB5E8: ;
    if (TEST_Z(MEM8(esi + 0x12), 1)) goto loc_004CB696; /* je: equal / zero */

loc_004CB5F2: ;
    edi = esi + 0x14;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C9EAA(); /* call 0x004C9EAA */

loc_004CB601: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C9F5B(); /* call 0x004C9F5B */

loc_004CB60C: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004CA1AF(); /* call 0x004CA1AF */

loc_004CB617: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 8;

loc_004CB61E: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, ecx)) goto loc_004CB61E; /* jb: below (unsigned <) */

loc_004CB62B: ;
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_004CB696; /* jbe: below or equal (unsigned <=) */

loc_004CB631: ;
    edx = esi + 0xC;

loc_004CB634: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ZX16(MEM16(edx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -4);
    MEM32(-25033988) = 1;
    MEM32(0xFE820300u) = eax;
    eax = MEM32(edi);
    if (TEST_Z(ecx, ecx)) goto loc_004CB659; /* je: equal / zero */

loc_004CB654: ;
    eax = eax | 0x400000;

loc_004CB659: ;
    MEM32(0xFE820304u) = eax;
    eax = MEM32(ebp + ecx * 4 + -52);
    MEM32(0xFE820360u) = eax;
    eax = MEM32(ebp + ecx * 4 + -40);
    MEM32(0xFE820364u) = eax;
    eax = MEM32(ebp + ecx * 4 + -28);
    MEM32(0xFE820368u) = eax;
    eax = MEM32(ebp + -8);
    MEM32(0xFE82037Cu) = eax;
    MEM32(-25033988) = 0;
    eax = ZX8(MEM8(esi + 0x64));
    ecx++;
    edx++;
    edx++;
    if (CMP_B(ecx, eax)) goto loc_004CB634; /* jb: below (unsigned <) */

loc_004CB696: ;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CB69E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB6A4
 * Original: 0x004CB6A4 - 0x004CB6DC (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB6A4(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CB6A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5860DC;
    PUSH32(esp, 0); sub_004CB59D(); /* call 0x004CB59D */

loc_004CB6B2: ;
    eax = MEM32(esi + 0x70);
    if (TEST_Z(eax, eax)) goto loc_004CB6C3; /* je: equal / zero */

loc_004CB6B9: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004CB6BF: ;
    MEM32(esi + 0x70) = MEM32(esi + 0x70) & 0;

loc_004CB6C3: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_004CB6D4; /* je: equal / zero */

loc_004CB6CA: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004CB6D0: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;

loc_004CB6D4: ;
    MEM32(esi) = 0x586074;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB6DC
 * Original: 0x004CB6DC - 0x004CB8A8 (460 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB6DC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004CB6DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x12;
    (void)0; /* test MEM8(edi), 2 - flags set for next jcc */
    MEM32(ebp + -20) = edi;
    if (TEST_NZ(MEM8(edi), 2)) goto loc_004CB8A4; /* jne: not equal / not zero */

loc_004CB6F9: ;
    PUSH32(esp, 0); sub_004CB1E7(); /* call 0x004CB1E7 */

loc_004CB6FE: ;
    SET_LO16(edx, 2);
    ecx = edi;
    PUSH32(esp, 0); sub_004C9C82(); /* call 0x004C9C82 */

loc_004CB709: ;
    eax = MEM32(esi + 0x70);
    if (TEST_Z(MEM8(eax + 8), 0x10)) goto loc_004CB719; /* je: equal / zero */

loc_004CB712: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CB40B(); /* call 0x004CB40B */

loc_004CB719: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    if (TEST_Z(eax, eax)) goto loc_004CB745; /* je: equal / zero */

loc_004CB726: ;
    eax = MEM32(eax + 0x20);
    if (TEST_Z(eax, eax)) goto loc_004CB745; /* je: equal / zero */

loc_004CB72D: ;
    ecx = MEM32(eax + 0x80);
    if (TEST_Z(MEM32(ecx + 8), 0x82000)) goto loc_004CB745; /* je: equal / zero */

loc_004CB73C: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0); sub_004CC0FB(); /* call 0x004CC0FB */

loc_004CB745: ;
    ecx = ebp + -28;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CB74D: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    if (CMP_B(eax, 0x80)) goto loc_004CB74D; /* jb: below (unsigned <) */

loc_004CB75C: ;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x84) = MEM32(eax + 0x84) + 1;
    ecx = esi + 0x68;
    PUSH32(esp, 0); sub_004C9CA8(); /* call 0x004C9CA8 */

loc_004CB76E: ;
    if (TEST_Z(MEM8(edi), 0x10)) goto loc_004CB779; /* je: equal / zero */

loc_004CB773: ;
    MEM8(esi + 0x16) = MEM8(esi + 0x16) | 0x80;
    goto loc_004CB77D;

loc_004CB779: ;
    MEM8(esi + 0x16) = MEM8(esi + 0x16) & 0x7F;

loc_004CB77D: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004CA231(); /* call 0x004CA231 */

loc_004CB78C: ;
    eax = MEM32(ebp + -16);
    if (TEST_Z(eax, eax)) goto loc_004CB79E; /* je: equal / zero */

loc_004CB793: ;
    ecx = ZX8(MEM8(eax + 0x64));
    eax = ZX16(MEM16(eax + ecx * 2 + 0xA));
    goto loc_004CB7B0;

loc_004CB79E: ;
    eax = ZX8(MEM8(ebp + -1));
    eax++;
    eax = eax << 0x10;
    eax = eax & 0x30000;
    eax = eax | 0xFFFF;

loc_004CB7B0: ;
    SET_LO16(ecx, MEM16(edi));
    edx = ZX8(MEM8(esi + 0x64));
    SET_LO16(ecx, LO16(ecx) & 0x444);
    SET_LO16(ecx, (uint32_t)(-(int32_t)LO16(ecx)));
    MEM32(ebp + -12) = eax;
    eax = edx;
    PUSH32(esp, ebx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x40000;
    eax = (uint32_t)((int32_t)eax * (int32_t)7);

loc_004CB7D0: ;
    ebx = MEM32(-25034736);
    ebx = ebx >> 2;
    if (CMP_B(ebx, eax)) goto loc_004CB7D0; /* jb: below (unsigned <) */

loc_004CB7DD: ;
    edx--;
    MEM32(ebp + -8) = edx;
    if (((int32_t)edx < 0)) goto loc_004CB84B; /* js: sign (negative) */

loc_004CB7E3: ;
    ebx = esi + edx * 2 + 0xC;
    edi = 0xFFFF0000u;

loc_004CB7EC: ;
    edx = ZX16(MEM16(ebx));
    eax = MEM32(esi + 0x40);
    eax = eax & edi;
    ecx = ecx & edi;
    eax = eax | edx;
    ecx = ecx | edx;
    (void)0; /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    MEM32(-25033992) = edx;
    MEM32(-25033988) = 1;
    edx = MEM32(esi + 0x14);
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_004CB819; /* je: equal / zero */

loc_004CB813: ;
    edx = edx | 0x400000;

loc_004CB819: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    MEM32(-25033980) = edx;
    edx = MEM32(ebp + -12);
    MEM32(-25034464) = edx;
    ebx--;
    MEM32(0xFE820124u) = eax;
    ebx--;
    (void)0; /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    MEM32(-25034432) = ecx;
    MEM32(-25033988) = 0;
    if (CMP_GE(MEM32(ebp + -8), 0)) goto loc_004CB7EC; /* jge: greater or equal (signed >=) */

loc_004CB848: ;
    edi = MEM32(ebp + -20);

loc_004CB84B: ;
    ecx = MEM32(ebp + -16);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, ebx);
    eax = esi + 0x4C;
    if (TEST_Z(ecx, ecx)) goto loc_004CB85B; /* je: equal / zero */

loc_004CB856: ;
    ecx = ecx + 0x4C;
    goto loc_004CB869;

loc_004CB85B: ;
    ecx = ZX8(MEM8(ebp + -1));
    edx = MEM32(esi + 8);
    ecx = edx + ecx * 8 + 0x488;

loc_004CB869: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(esi + 0x65) = LO8(eax);

loc_004CB880: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    if (CMP_B(eax, 0x80)) goto loc_004CB880; /* jb: below (unsigned <) */

loc_004CB88F: ;
    esi = MEM32(esi + 8);
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    ecx = ebp + -28;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CB8A1: ;
    SET_LO16(eax, MEM16(edi));

loc_004CB8A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CB8C3
 * Original: 0x004CB8C3 - 0x004CB8C7 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB8C3(void)
{

loc_004CB8C3: ;
    MEM16(ecx) = MEM16(ecx) & LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB8C7
 * Original: 0x004CB8C7 - 0x004CB8FA (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB8C7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CB8C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CB8DB: ;
    eax = MEM32(esi + 0x80);
    if (TEST_Z(MEM8(eax + 0xA), 0x18)) { sub_004CB8FA(); return; } /* je: equal / zero */

loc_004CB8E7: ;
    ecx = MEM32(eax + 0xBC);
    ecx = ecx & 0xFFF;
    eax = 0x7FF;
    g_seh_ebp = ebp; sub_004CB921(); return; /* tail jmp 0x004CB921 */

}

/**
 * sub_004CB939
 * Original: 0x004CB939 - 0x004CB97C (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB939(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CB939: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0); sub_004CC214(); /* call 0x004CC214 */

loc_004CB943: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CB1E7(); /* call 0x004CB1E7 */

loc_004CB94A: ;
    ecx = esi + 0x12;
    if (TEST_Z(MEM16(ecx), 0x100)) goto loc_004CB97A; /* je: equal / zero */

loc_004CB954: ;
    PUSH32(esp, edi);
    SET_LO16(edx, 0xFEFF);
    PUSH32(esp, 0); sub_004CB8C3(); /* call 0x004CB8C3 */

loc_004CB95E: ;
    edi = esi + 0x84;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004CB979; /* je: equal / zero */

loc_004CB96A: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_004C9C21(); /* call 0x004C9C21 */

loc_004CB976: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_004CB979: ;
    POP32(esp, edi);

loc_004CB97A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CB97C
 * Original: 0x004CB97C - 0x004CB9D4 (88 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CB97C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CB97C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CB993: ;
    (void)0; /* test MEM8(ebp + 8), 1 - flags set for next jcc */
    ecx = esi;
    if (TEST_Z(MEM8(ebp + 8), 1)) { sub_004CB9D4(); return; } /* je: equal / zero */

loc_004CB99B: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 2;
    edi = MEM32(esi + 0x80);
    ebx = MEM32(edi + 0xCC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C87D7(); /* call 0x004C87D7 */

loc_004CB9B1: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 0xD0);
    eax = eax + ebx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C87D7(); /* call 0x004C87D7 */

loc_004CB9C4: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x200);
    ebx = eax;
    PUSH32(esp, 0); sub_004C9C82(); /* call 0x004C9C82 */

loc_004CB9D2: ;
    g_seh_ebp = ebp; sub_004CB9FB(); return; /* tail jmp 0x004CB9FB */

}

/**
 * sub_004CBABD
 * Original: 0x004CBABD - 0x004CBC3C (383 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBABD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CBABD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    edi = ebp + -44;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ebx = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CBAE0: ;
    ecx = ZX8(MEM8(esi + 0x64));
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 2;
    eax = ecx + ecx * 4;
    eax = eax << 1;

loc_004CBAED: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, eax)) goto loc_004CBAED; /* jb: below (unsigned <) */

loc_004CBAFA: ;
    edi = 0; /* xor self */
    eax = 0; /* xor self */
    edi++;
    if (CMP_BE(ecx, ebx)) goto loc_004CBB73; /* jbe: below or equal (unsigned <=) */

loc_004CBB03: ;
    edx = esi + 0xC;

loc_004CBB06: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = ZX16(MEM16(edx));
    MEM32(-25033992) = ecx;
    MEM32(-25033988) = edi;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_004CBB22; /* je: equal / zero */

loc_004CBB1C: ;
    ecx = ecx | 0x400000;

loc_004CBB22: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033888) = ecx;
    ecx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033884) = ecx;
    ecx = MEM32(ebp + eax * 4 + -20);
    MEM32(-25033880) = ecx;
    ecx = MEM32(esi + 0x154);
    MEM32(-25033824) = ecx;
    MEM32(-25033764) = 0x20;
    MEM32(-25033820) = ebx;
    MEM32(-25033988) = ebx;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    edx++;
    edx++;
    if (CMP_B(eax, ecx)) goto loc_004CBB06; /* jb: below (unsigned <) */

loc_004CBB73: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CBB7B: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CB6DC(); /* call 0x004CB6DC */

loc_004CBB82: ;
    eax = ZX8(MEM8(esi + 0x64));
    eax = ZX16(MEM16(esi + eax * 2 + 0xA));
    ecx = MEM32(0x4E1E00);
    eax = eax << 7;
    eax = eax + ecx + 0x54;

loc_004CBB98: ;
    if (TEST_NZ(MEM32(eax), 0x100000)) goto loc_004CBB98; /* jne: not equal / not zero */

loc_004CBBA0: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, 0); sub_004CB97C(); /* call 0x004CB97C */

loc_004CBBAA: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CBBB2: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004C9F5B(); /* call 0x004C9F5B */

loc_004CBBBD: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0); sub_004C87D7(); /* call 0x004C87D7 */

loc_004CBBC7: ;
    edx = ZX8(MEM8(esi + 0x64));
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)7);

loc_004CBBD0: ;
    ebx = MEM32(-25034736);
    ebx = ebx >> 2;
    if (CMP_B(ebx, ecx)) goto loc_004CBBD0; /* jb: below (unsigned <) */

loc_004CBBDD: ;
    ecx = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_004CBC2D; /* jbe: below or equal (unsigned <=) */

loc_004CBBE3: ;
    edx = esi + 0xC;

loc_004CBBE6: ;
    ebx = ZX16(MEM16(edx));
    MEM32(-25033992) = ebx;
    MEM32(-25033988) = edi;
    ebx = MEM32(ebp + ecx * 4 + -44);
    MEM32(-25033888) = ebx;
    ebx = MEM32(ebp + ecx * 4 + -32);
    MEM32(-25033884) = ebx;
    ebx = MEM32(ebp + ecx * 4 + -20);
    MEM32(-25033880) = ebx;
    MEM32(0xFE8203D8u) = eax;
    MEM32(-25033988) = 0;
    ebx = ZX8(MEM8(esi + 0x64));
    ecx++;
    edx++;
    edx++;
    if (CMP_B(ecx, ebx)) goto loc_004CBBE6; /* jb: below (unsigned <) */

loc_004CBC2D: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CBC35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CBC3C
 * Original: 0x004CBC3C - 0x004CBC9D (97 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBC3C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CBC3C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CBC50: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) { sub_004CBC9D(); return; } /* jne: not equal / not zero */

loc_004CBC59: ;
    if (CMP_NE(MEM32(ebp + 8), 0)) goto loc_004CBC72; /* jne: not equal / not zero */

loc_004CBC5F: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBBu;

loc_004CBC66: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004CA5BE(); /* call 0x004CA5BE */

loc_004CBC6E: ;
    esi = eax;
    g_seh_ebp = ebp; sub_004CBCA0(); return; /* tail jmp 0x004CBCA0 */

loc_004CBC72: ;
    if (CMP_NE(MEM32(ebp + 8), 1)) goto loc_004CBC84; /* jne: not equal / not zero */

loc_004CBC78: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBFu;
    eax = eax | 4;
    goto loc_004CBC66;

loc_004CBC84: ;
    if (CMP_NE(MEM32(ebp + 8), 2)) goto loc_004CBC96; /* jne: not equal / not zero */

loc_004CBC8A: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFFBu;
    eax = eax | 0x40;
    goto loc_004CBC66;

loc_004CBC96: ;
    esi = 0x80004005u;
    g_seh_ebp = ebp; sub_004CBCA0(); return; /* tail jmp 0x004CBCA0 */

}

/**
 * sub_004CBCAF
 * Original: 0x004CBCAF - 0x004CBCF1 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBCAF(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004CBCAF: ;
    eax = ZX16(MEM16(ecx + 0x12));
    ecx = eax;
    ecx = ecx & 3;
    if (CMP_NE(LO8(ecx), 3)) goto loc_004CBCD8; /* jne: not equal / not zero */

loc_004CBCBD: ;
    ecx = MEM32(esp + 4);
    (void)0; /* test LO16(eax), 0x444 - flags set for next jcc */
    PUSH32(esp, 0);
    POP32(esp, edx);
    SET_LO8(edx, (TEST_NZ(LO16(eax), 0x444)) ? 1 : 0); /* setne */
    edx++;
    (void)0; /* test HI8(eax), 2 - flags set for next jcc */
    MEM32(ecx) = edx;
    if (TEST_Z(HI8(eax), 2)) goto loc_004CBCEC; /* je: equal / zero */

loc_004CBCD3: ;
    MEM32(ecx) = MEM32(ecx) | 4;
    goto loc_004CBCEC;

loc_004CBCD8: ;
    ecx = 0x8001;
    eax = eax & ecx;
    eax = eax - ecx;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    MEM32(ecx) = eax;

loc_004CBCEC: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CBCF1
 * Original: 0x004CBCF1 - 0x004CBDD0 (223 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBCF1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CBCF1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CBD07: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) goto loc_004CBDA1; /* jne: not equal / not zero */

loc_004CBD14: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CAC1E(); /* call 0x004CAC1E */

loc_004CBD1B: ;
    ebx = eax;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_004CBD26; /* je: equal / zero */

loc_004CBD24: ;
    MEM32(eax) = ebx;

loc_004CBD26: ;
    edi = MEM32(ebp + 0xC);
    if (TEST_Z(edi, edi)) goto loc_004CBDBF; /* je: equal / zero */

loc_004CBD31: ;
    PUSH32(esp, 0x20);
    ecx = esi;
    PUSH32(esp, 0); sub_004C87F0(); /* call 0x004C87F0 */

loc_004CBD3A: ;
    ecx = MEM32(esi + 0x80);
    ecx = MEM32(ecx + 0x14);
    if (CMP_AE(eax, ecx)) goto loc_004CBD49; /* jae: above or equal (unsigned >=) */

loc_004CBD47: ;
    eax = ecx;

loc_004CBD49: ;
    eax = eax + ebx;
    MEM32(edi) = eax;
    if (TEST_Z(MEM16(esi + 0x12), 0x200)) goto loc_004CBD8F; /* je: equal / zero */

loc_004CBD55: ;
    ecx = MEM32(esi + 0x80);
    if (CMP_B(ebx, MEM32(ecx + 0xCC))) goto loc_004CBD8F; /* jb: below (unsigned <) */

loc_004CBD63: ;
    edx = MEM32(ecx + 0xD0);
    edx = edx + MEM32(ecx + 0xCC);
    if (CMP_AE(ebx, edx)) goto loc_004CBD8F; /* jae: above or equal (unsigned >=) */

loc_004CBD73: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xD0));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xD0)); }
    MEM32(edi) = edx;
    eax = MEM32(esi + 0x80);
    eax = MEM32(eax + 0xCC);
    eax = eax + edx;
    MEM32(edi) = eax;
    goto loc_004CBDBF;

loc_004CBD8F: ;
    ecx = MEM32(esi + 0x80);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC0));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC0)); }
    MEM32(edi) = edx;
    goto loc_004CBDBF;

loc_004CBDA1: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_004CBDB0; /* je: equal / zero */

loc_004CBDA8: ;
    ecx = MEM32(esi + 0x148);
    MEM32(eax) = ecx;

loc_004CBDB0: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004CBDBF; /* je: equal / zero */

loc_004CBDB7: ;
    ecx = MEM32(esi + 0x148);
    MEM32(eax) = ecx;

loc_004CBDBF: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CBDC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CBE17
 * Original: 0x004CBE17 - 0x004CBE21 (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBE17(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CBE17: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    g_seh_ebp = ebp; sub_004CBE59(); return; /* tail jmp 0x004CBE59 */

}

/**
 * sub_004CBE78
 * Original: 0x004CBE78 - 0x004CBEB2 (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBE78(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CBE78: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x80);
    esi = MEM32(eax + 0xDC);
    if (CMP_BE(esi & esi, 0)) goto loc_004CBEAF; /* jbe: below or equal (unsigned <=) */

loc_004CBE8C: ;
    eax = MEM32(edi + 0x80);
    eax = MEM32(eax + 0xD8);
    eax = eax + esi * 8;
    if (CMP_NE(MEM32(eax + -8), 0xFFFFFFFFu)) goto loc_004CBEAF; /* jne: not equal / not zero */

loc_004CBEA1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610FC), _icall_esp); /* indirect call */
    }

loc_004CBEAC: ;
    esi--;
    if ((esi != 0)) goto loc_004CBE8C; /* jne: not equal / not zero */

loc_004CBEAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBEE1
 * Original: 0x004CBEE1 - 0x004CBEFB (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBEE1(void)
{

loc_004CBEE1: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    eax = eax + ecx + 0x88;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C847C(); /* call 0x004C847C */

loc_004CBEF8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CBEFB
 * Original: 0x004CBEFB - 0x004CBF57 (92 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBEFB(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CBEFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004CB26C(); /* call 0x004CB26C */

loc_004CBF0B: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x586104;
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004CBF1A: ;
    MEM32(esi + 0x80) = eax;
    ecx = 0; /* xor self */
    eax = esi + 0x88;

loc_004CBF28: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 0xC) = esi;
    ecx++;
    eax = eax + 0x20;
    if (CMP_B(ecx, 6)) goto loc_004CBF28; /* jb: below (unsigned <) */

loc_004CBF3C: ;
    MEM32(esi + 0x90) = MEM32(esi + 0x90) | 5;
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) | 5;
    MEM32(esi + 0xD0) = MEM32(esi + 0xD0) | 5;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CBF57
 * Original: 0x004CBF57 - 0x004CBFA7 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBF57(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CBF57: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x12;
    edx = 0x100;
    edi = 0; /* xor self */
    if (TEST_NZ(MEM16(ecx), LO16(edx))) goto loc_004CBFA2; /* jne: not equal / not zero */

loc_004CBF6A: ;
    PUSH32(esp, 0); sub_004C9C82(); /* call 0x004C9C82 */

loc_004CBF6F: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, MEM32(eax + 0xC0));
    ecx = MEM32(esi + 8);
    PUSH32(esp, MEM32(eax + 0xBC));
    ecx = ecx + 0x60;
    PUSH32(esp, 0); sub_004C9A82(); /* call 0x004C9A82 */

loc_004CBF8C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x84) = eax;
    if (TEST_NZ(eax, eax)) { sub_004CBFA7(); return; } /* jne: not equal / not zero */

loc_004CBF96: ;
    ecx = esi;
    edi = 0x8007000Eu;
    PUSH32(esp, 0); sub_004CB939(); /* call 0x004CB939 */

loc_004CBFA2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CBFBC
 * Original: 0x004CBFBC - 0x004CC00E (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CBFBC(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CBFBC: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 0x12;
    edx = 0x100;
    if (TEST_NZ(MEM16(ecx), LO16(edx))) goto loc_004CC00C; /* jne: not equal / not zero */

loc_004CBFCC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C9C82(); /* call 0x004C9C82 */

loc_004CBFD2: ;
    PUSH32(esp, 0x20);
    ecx = edi;
    PUSH32(esp, 0); sub_004C87F0(); /* call 0x004C87F0 */

loc_004CBFDB: ;
    esi = edi + 0x80;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xD4);
    edx = edx - 0xB;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx + MEM32(0x4E1E80);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004C5BED(); /* call 0x004C5BED */

loc_004CBFFC: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + 0xC4));
    ecx = edi;
    PUSH32(esp, 0); sub_004CB8C7(); /* call 0x004CB8C7 */

loc_004CC00B: ;
    POP32(esp, esi);

loc_004CC00C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CC00E
 * Original: 0x004CC00E - 0x004CC0AD (159 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC00E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CC00E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    if (CMP_EQ(MEM32(eax + 0xDC), 0)) goto loc_004CC0AA; /* je: equal / zero */

loc_004CC028: ;
    (void)0; /* test MEM8(esi + 0x17), 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(esi + 0x17), 2)) goto loc_004CC040; /* je: equal / zero */

loc_004CC030: ;
    ebx = MEM32(eax + 0xCC);
    edi = MEM32(eax + 0xD0);
    edi = edi + ebx;
    goto loc_004CC048;

loc_004CC040: ;
    edi = MEM32(eax + 0xC8);
    ebx = 0; /* xor self */

loc_004CC048: ;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004CBCF1(); /* call 0x004CBCF1 */

loc_004CC055: ;
    eax = MEM32(esi + 0x14C);
    if (CMP_A(MEM32(ebp + -4), eax)) goto loc_004CC084; /* ja: above (unsigned >) */

loc_004CC060: ;
    if (CMP_A(eax, edi)) goto loc_004CC084; /* ja: above (unsigned >) */

loc_004CC064: ;
    if (CMP_AE(MEM32(ebp + -4), eax)) goto loc_004CC090; /* jae: above or equal (unsigned >=) */

loc_004CC069: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004CBE17(); /* call 0x004CBE17 */

loc_004CC073: ;
    MEM32(esi + 0x150) = MEM32(esi + 0x150) & 0;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004CBE17(); /* call 0x004CBE17 */

loc_004CC084: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, 0); sub_004CBE17(); /* call 0x004CBE17 */

loc_004CC090: ;
    (void)0; /* test MEM16(esi + 0x12), 0x8002 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(MEM16(esi + 0x12), 0x8002)) goto loc_004CC0AA; /* jne: not equal / not zero */

loc_004CC09A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_004CC0A3: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CBE78(); /* call 0x004CBE78 */

loc_004CC0AA: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CC0AD
 * Original: 0x004CC0AD - 0x004CC0FB (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC0AD(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CC0AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_004CAE82(); /* call 0x004CAE82 */

loc_004CC0B6: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004CC0F6; /* jl: less (signed <) */

loc_004CC0BC: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + 8);
    if (TEST_NZ(HI8(ecx), 0x20)) goto loc_004CC0F6; /* jne: not equal / not zero */

loc_004CC0CA: ;
    if (TEST_Z(ecx, 0x180000)) goto loc_004CC0DB; /* je: equal / zero */

loc_004CC0D2: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CBFBC(); /* call 0x004CBFBC */

loc_004CC0D9: ;
    goto loc_004CC0F6;

loc_004CC0DB: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 0)) goto loc_004CC0F6; /* je: equal / zero */

loc_004CC0E4: ;
    if (CMP_EQ(MEM32(eax + 0xC0), 0)) goto loc_004CC0F6; /* je: equal / zero */

loc_004CC0ED: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CBF57(); /* call 0x004CBF57 */

loc_004CC0F4: ;
    edi = eax;

loc_004CC0F6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CC0FB
 * Original: 0x004CC0FB - 0x004CC115 (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC0FB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC0FB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    (void)0; /* test MEM32(eax + 8), 0x182000 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(MEM32(eax + 8), 0x182000)) { sub_004CC115(); return; } /* je: equal / zero */

loc_004CC110: ;
    ebx = 0; /* xor self */
    ebx++;
    g_seh_ebp = ebp; sub_004CC119(); return; /* tail jmp 0x004CC119 */

}

/**
 * sub_004CC1AB
 * Original: 0x004CC1AB - 0x004CC1F6 (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC1AB(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CC1AB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test MEM16(esi + 0x12), 0x100 - flags set for next jcc */
    MEM32(esi + 0x148) = edi;
    if (TEST_Z(MEM16(esi + 0x12), 0x100)) goto loc_004CC1D0; /* je: equal / zero */

loc_004CC1BF: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, MEM32(eax + 0xC4));
    PUSH32(esp, 0); sub_004CB8C7(); /* call 0x004CB8C7 */

loc_004CC1D0: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) goto loc_004CC1F1; /* jne: not equal / not zero */

loc_004CC1D9: ;
    (void)0; /* test MEM16(esi + 0x12), 0x200 - flags set for next jcc */
    PUSH32(esp, 2);
    POP32(esp, eax);
    if (TEST_Z(MEM16(esi + 0x12), 0x200)) goto loc_004CC1E7; /* je: equal / zero */

loc_004CC1E4: ;
    PUSH32(esp, 3);
    POP32(esp, eax);

loc_004CC1E7: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004CC0FB(); /* call 0x004CC0FB */

loc_004CC1EF: ;
    edi = eax;

loc_004CC1F1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CC1F6
 * Original: 0x004CC1F6 - 0x004CC214 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC1F6(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CC1F6: ;
    SET_LO8(edx, MEM8(ecx + 0x12));
    SET_LO8(edx, LO8(edx) & 3);
    eax = 0; /* xor self */
    if (CMP_NE(LO8(edx), 3)) goto loc_004CC213; /* jne: not equal / not zero */

loc_004CC203: ;
    SET_LO16(eax, MEM16(ecx + 0x12));
    eax = eax >> 9;
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CC0FB(); /* call 0x004CC0FB */

loc_004CC213: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CC214
 * Original: 0x004CC214 - 0x004CC2A4 (144 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC214(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CC214: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    PUSH32(esp, edi);
    SET_LO8(eax, LO8(eax) & 3);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), 3)) goto loc_004CC29C; /* jne: not equal / not zero */

loc_004CC226: ;
    if (TEST_Z(MEM8(esp + 0x10), 1)) goto loc_004CC257; /* je: equal / zero */

loc_004CC22D: ;
    if (TEST_Z(MEM8(esp + 0x10), 2)) goto loc_004CC24E; /* je: equal / zero */

loc_004CC234: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x203);
    if (CMP_NE(LO16(eax), 0x203)) goto loc_004CC24E; /* jne: not equal / not zero */

loc_004CC242: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004CC0FB(); /* call 0x004CC0FB */

loc_004CC248: ;
    ebx = eax;
    if (CMP_L(ebx, edi)) goto loc_004CC29C; /* jl: less (signed <) */

loc_004CC24E: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CA4E6(); /* call 0x004CA4E6 */

loc_004CC255: ;
    goto loc_004CC29C;

loc_004CC257: ;
    eax = MEM32(esi + 0x80);
    if (TEST_NZ(MEM32(eax + 8), 0x182000)) goto loc_004CC275; /* jne: not equal / not zero */

loc_004CC266: ;
    PUSH32(esp, edi);
    eax = esi + 0x148;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004CBCF1(); /* call 0x004CBCF1 */

loc_004CC275: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004CB2D1(); /* call 0x004CB2D1 */

loc_004CC27D: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CC00E(); /* call 0x004CC00E */

loc_004CC284: ;
    eax = MEM32(esi + 0x80);
    if (TEST_Z(MEM8(eax + 0xA), 4)) goto loc_004CC29C; /* je: equal / zero */

loc_004CC290: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_004CC29C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC2A4
 * Original: 0x004CC2A4 - 0x004CC39A (246 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC2A4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CC2A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 3)) goto loc_004CC382; /* jne: not equal / not zero */

loc_004CC2C2: ;
    eax = ZX8(MEM8(esi + 0x64));
    eax = ZX16(MEM16(esi + eax * 2 + 0xA));
    ecx = MEM32(0x4E1E00);
    eax = eax << 7;
    eax = eax + ecx + 0x54;

loc_004CC2D8: ;
    if (TEST_NZ(MEM32(eax), 0x100000)) goto loc_004CC2D8; /* jne: not equal / not zero */

loc_004CC2E0: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x203);
    if (CMP_NE(LO16(eax), 0x203)) goto loc_004CC315; /* jne: not equal / not zero */

loc_004CC2EE: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + 0xD0);
    ecx = ecx + MEM32(eax + 0xCC);
    if (CMP_B(MEM32(ebp + 8), ecx)) goto loc_004CC315; /* jb: below (unsigned <) */

loc_004CC305: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004CC0FB(); /* call 0x004CC0FB */

loc_004CC30E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_004CC38B; /* jl: less (signed <) */

loc_004CC315: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0); sub_004C87D7(); /* call 0x004C87D7 */

loc_004CC320: ;
    ecx = ebp + -12;
    edi = eax;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CC32A: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax;
    ecx = ecx << 2;

loc_004CC333: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    if (CMP_B(edx, ecx)) goto loc_004CC333; /* jb: below (unsigned <) */

loc_004CC340: ;
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_004CC377; /* jbe: below or equal (unsigned <=) */

loc_004CC346: ;
    eax = esi + 0xC;

loc_004CC349: ;
    edx = ZX16(MEM16(eax));
    MEM32(-25033992) = edx;
    MEM32(-25033988) = 1;
    MEM32(-25033768) = edi;
    MEM32(-25033988) = 0;
    edx = ZX8(MEM8(esi + 0x64));
    ecx++;
    eax++;
    eax++;
    if (CMP_B(ecx, edx)) goto loc_004CC349; /* jb: below (unsigned <) */

loc_004CC377: ;
    ecx = ebp + -12;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CC37F: ;
    POP32(esp, edi);
    goto loc_004CC38B;

loc_004CC382: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x148) = eax;

loc_004CC38B: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CC00E(); /* call 0x004CC00E */

loc_004CC392: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CC39A
 * Original: 0x004CC39A - 0x004CC3BC (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC39A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC39A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0); sub_004C9CC4(); /* call 0x004C9CC4 */

loc_004CC3A4: ;
    if (TEST_S(eax, eax)) { sub_004CC3BC(); return; } /* jl: less (signed <) */

loc_004CC3A8: ;
    ecx = MEM32(esi + 0x80);
    if (TEST_NZ(MEM8(ecx + 0xA), 4)) { sub_004CC3BC(); return; } /* jne: not equal / not zero */

loc_004CC3B4: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004CC0AD(); return; /* tail jmp 0x004CC0AD */

}

/**
 * sub_004CC3BE
 * Original: 0x004CC3BE - 0x004CC3D7 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC3BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC3BE: ;
    edx = MEM32(ecx + 0x80);
    eax = 0; /* xor self */
    MEM32(ecx + 0x148) = eax;
    if (TEST_NZ(MEM8(edx + 0xA), 4)) { sub_004CC3D7(); return; } /* jne: not equal / not zero */

loc_004CC3D2: ;
    g_seh_ebp = ebp; sub_004CC0AD(); return; /* tail jmp 0x004CC0AD */

}

/**
 * sub_004CC3D8
 * Original: 0x004CC3D8 - 0x004CC425 (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC3D8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC3D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0); sub_004CC214(); /* call 0x004CC214 */

loc_004CC3E5: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CB1E7(); /* call 0x004CB1E7 */

loc_004CC3EC: ;
    edi = esi + 0x90;

loc_004CC3F2: ;
    if (TEST_Z(MEM8(edi), 1)) goto loc_004CC3FF; /* je: equal / zero */

loc_004CC3F7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_004CC3FF: ;
    ebx++;
    edi = edi + 0x20;
    if (CMP_B(ebx, 6)) goto loc_004CC3F2; /* jb: below (unsigned <) */

loc_004CC408: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CB939(); /* call 0x004CB939 */

loc_004CC40F: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x3111);
    PUSH32(esp, 0); sub_004CB8C3(); /* call 0x004CB8C3 */

loc_004CC41B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_004C9E22(); return; /* tail jmp 0x004C9E22 */

}

/**
 * sub_004CC47D
 * Original: 0x004CC47D - 0x004CC4B6 (57 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC47D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CC47D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = eax | MEM32(ebp + 0xC);
    esi = ecx;
    if ((eax == 0)) goto loc_004CC4A2; /* je: equal / zero */

loc_004CC48E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_004CC49E: ;
    if (TEST_NZ(eax, eax)) goto loc_004CC4AE; /* jne: not equal / not zero */

loc_004CC4A2: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    PUSH32(esp, 0); sub_004CC214(); /* call 0x004CC214 */

loc_004CC4AC: ;
    edi = eax;

loc_004CC4AE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CC4B6
 * Original: 0x004CC4B6 - 0x004CC4D1 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC4B6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC4B6: ;
    if (TEST_Z(MEM8(ecx + 0x12), 1)) goto loc_004CC4C9; /* je: equal / zero */

loc_004CC4BC: ;
    if (TEST_NZ(MEM16(ecx + 0x12), 0x8002)) goto loc_004CC4D0; /* jne: not equal / not zero */

loc_004CC4C4: ;
    g_seh_ebp = ebp; sub_004CC3D8(); return; /* tail jmp 0x004CC3D8 */

loc_004CC4C9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_004CC4D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CC4D1
 * Original: 0x004CC4D1 - 0x004CC50E (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC4D1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC4D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x586104;
    PUSH32(esp, 0); sub_004CC3D8(); /* call 0x004CC3D8 */

loc_004CC4E0: ;
    esi = 0; /* xor self */

loc_004CC4E2: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004CBEE1(); /* call 0x004CBEE1 */

loc_004CC4EA: ;
    esi++;
    if (CMP_B(esi, 6)) goto loc_004CC4E2; /* jb: below (unsigned <) */

loc_004CC4F0: ;
    esi = edi + 0x80;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_004CC505; /* je: equal / zero */

loc_004CC4FC: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004CC502: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_004CC505: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004CB6A4(); return; /* tail jmp 0x004CB6A4 */

}

/**
 * sub_004CC50E
 * Original: 0x004CC50E - 0x004CC52B (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC50E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CC50E: ;
    (void)0; /* cmp MEM32(esp + 4), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(MEM32(esp + 4), 0)) { sub_004CC52B(); return; } /* jne: not equal / not zero */

loc_004CC518: ;
    eax = MEM32(esi + 0x80);
    if (TEST_Z(MEM8(eax + 0xA), 4)) { sub_004CC52B(); return; } /* je: equal / zero */

loc_004CC524: ;
    PUSH32(esp, 0); sub_004CC3D8(); /* call 0x004CC3D8 */

loc_004CC529: ;
    g_seh_ebp = ebp; sub_004CC532(); return; /* tail jmp 0x004CC532 */

}

/**
 * sub_004CC5A9
 * Original: 0x004CC5A9 - 0x004CC5F7 (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC5A9(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004CC5A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(ebp + -8) = 0x40549A78;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: frndint  */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fst */
    /* wait - FPU sync */
    fp_push(1.0); /* fld1 */
    /* FPU: fscale  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEMF(ebp + -20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: f2xm1  */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    MEMF(ebp + -16) = (float)fp_top(); fp_popp(); /* fstp */
    /* wait - FPU sync */
    fp_push(MEMF(ebp + -16)); /* fld float */
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
 * sub_004CC5F7
 * Original: 0x004CC5F7 - 0x004CC61C (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC5F7(void)
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

loc_004CC5F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf4] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_004CC61C(); return; } /* jp: parity */

loc_004CC60B: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    g_seh_ebp = ebp; sub_004CC61E(); return; /* tail jmp 0x004CC61E */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CC685
 * Original: 0x004CC685 - 0x004CC6BE (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC685(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004CC685: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0x18C;
    esi = 0x4E1538;

loc_004CC691: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC6A6: ;
    edi = MEM32(ecx);
    MEM32(edx + edi) = eax;
    edx = edx + 4;
    esi = esi + 0x14;
    if (CMP_L(edx, 0x19C)) goto loc_004CC691; /* jl: less (signed <) */

loc_004CC6B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CC6BE
 * Original: 0x004CC6BE - 0x004CC6DC (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC6BE(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004CC6BE: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC6D1: ;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x118) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CC6DC
 * Original: 0x004CC6DC - 0x004CC714 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC6DC(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004CC6DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC6F4: ;
    edx = MEM32(ecx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x19C) = eax;
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC708: ;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x1A0) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CC714
 * Original: 0x004CC714 - 0x004CC7AE (154 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC714(void)
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

loc_004CC714: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC72C: ;
    edx = MEM32(ecx);
    MEM32(edx + 0x12C) = eax;
    edx = 0x11C;
    esi = 0x4E1540;

loc_004CC73E: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x12C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_004CC756; /* jge: greater or equal (signed >=) */

loc_004CC750: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004CC756: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC761: ;
    edi = MEM32(ecx);
    MEM32(edx + edi) = eax;
    edx = edx + 4;
    esi = esi + 0x14;
    if (CMP_L(edx, 0x12C)) goto loc_004CC73E; /* jl: less (signed <) */

loc_004CC774: ;
    esi = 0x150;
    edx = 0x4E1544;

loc_004CC77E: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC795: ;
    edi = MEM32(ecx);
    MEM32(esi + edi) = eax;
    esi = esi + 4;
    edx = edx + 0x14;
    if (CMP_L(esi, 0x160)) goto loc_004CC77E; /* jl: less (signed <) */

loc_004CC7A8: ;
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
 * sub_004CC7AE
 * Original: 0x004CC7AE - 0x004CC82B (125 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC7AE(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004CC7AE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x4E1588;
    eax = 0x164;
    PUSH32(esp, edi);
    esi = esi - eax;

loc_004CC7BD: ;
    PUSH32(esp, 2);
    edx = eax;
    POP32(esp, edi);

loc_004CC7C2: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC7D8: ;
    ebx = MEM32(ecx);
    MEM32(edx + ebx) = eax;
    edx = edx + 4;
    edi--;
    if ((edi != 0)) goto loc_004CC7C2; /* jne: not equal / not zero */

loc_004CC7E3: ;
    (void)0; /* cmp edx, 0x184 - flags set for next jcc */
    eax = edx;
    if (CMP_L(edx, 0x184)) goto loc_004CC7BD; /* jl: less (signed <) */

loc_004CC7ED: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC800: ;
    edx = MEM32(ecx);
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, ecx);
    MEM32(edx + 0x188) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC81D: ;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x184) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CC82B
 * Original: 0x004CC82B - 0x004CC878 (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC82B(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CC82B: ;
    eax = 0; /* xor self */

loc_004CC82D: ;
    edx = MEM32(ecx);
    edx = eax + edx + 0xAC;
    MEM32(edx) = MEM32(edx) - 1;
    edx = MEM32(ecx);
    edx = eax + edx + 0xAC;
    MEM32(edx) = MEM32(edx) >> 2;
    edx = MEM32(ecx);
    edx = eax + edx + 0xAC;
    MEM32(edx) = MEM32(edx) + 1;
    eax = eax + 8;
    if (CMP_B(eax, 0x70)) goto loc_004CC82D; /* jb: below (unsigned <) */

loc_004CC857: ;
    eax = MEM32(ecx);
    MEM32(eax + 0x1A4) = 4;
    eax = 0; /* xor self */

loc_004CC865: ;
    edx = MEM32(ecx);
    MEM32(eax + edx + 0x1A8) = MEM32(eax + edx + 0x1A8) & 0;
    eax = eax + 0xC;
    if (CMP_B(eax, 0x78)) goto loc_004CC865; /* jb: below (unsigned <) */

loc_004CC877: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CC878
 * Original: 0x004CC878 - 0x004CC8AA (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC878(void)
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

loc_004CC878: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 8);
    (void)0; /* cmp eax, 0xFFFFD8F0u - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMD(ebp + -8) = fp_top(); fp_popp(); /* fstp */
    if (CMP_G(eax, 0xFFFFD8F0u)) { sub_004CC8AA(); return; } /* jg: greater (signed >) */

loc_004CC897: ;
    eax = MEM32(ebp + 0x18);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    eax = MEM32(ebp + 0x1C);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_004CC931(); return; /* tail jmp 0x004CC931 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CC935
 * Original: 0x004CC935 - 0x004CC9C1 (140 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC935(void)
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

loc_004CC935: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(ebp + 8), 0xFFFFD8F0u)) goto loc_004CC9BD; /* jle: less or equal (signed <=) */

loc_004CC945: ;
    if (CMP_EQ(MEM32(ebp + 0xC), eax)) goto loc_004CC9BD; /* je: equal / zero */

loc_004CC94A: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    eax = eax + eax;
    PUSH32(esp, eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    MEMD(ebp + -8) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004CC5A9(); /* call 0x004CC5A9 */

loc_004CC966: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr qword ptr [0x648d08] */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMD(ebp + -8)); /* fld double */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr qword ptr [0x648d08] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    /* fstp st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648d14] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_004CC9AE; /* jne: not equal / not zero */

loc_004CC9A5: ;
    /* fstp st(0) */
    eax = 0xFFFF;
    goto loc_004CC9BD;

loc_004CC9AE: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC9BD: ;
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
 * sub_004CC9C1
 * Original: 0x004CC9C1 - 0x004CCA22 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CC9C1(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004CC9C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMF(0x586138)); /* fld float */
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ecx;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004CC878(); /* call 0x004CC878 */

loc_004CC9EA: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CC9FC: ;
    ecx = MEM32(edx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEM32(ecx + 0x1AC) = eax;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CCA16: ;
    ecx = MEM32(edx);
    MEM32(ecx + 0x1B0) = eax;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CCA22
 * Original: 0x004CCA22 - 0x004CCACD (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CCA22(void)
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

loc_004CCA22: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_004CCA35; /* jge: greater or equal (signed >=) */

loc_004CCA2F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004CCA35: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CCA50: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    edx = eax;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d14] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004CCA6B; /* jp: parity */

loc_004CCA62: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */

loc_004CCA6B: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CCA78: ;
    fp_push(MEMF(0x58612C)); /* fld float */
    esi = ebp + 0xC;
    PUSH32(esp, esi);
    esi = ebp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax - edx;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004CC878(); /* call 0x004CC878 */

loc_004CCA9B: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CCAAD: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = MEM32(ebp + 8);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEM32(ecx + 4) = eax;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CCAC5: ;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CCACD
 * Original: 0x004CCACD - 0x004CCB37 (106 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CCACD(void)
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

loc_004CCACD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(ecx + 0x18)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(ecx + 0x20)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CCAFD: ;
    eax = eax + MEM32(ecx + 4);
    fp_push(1.0); /* fld1 */
    edx = MEM32(ebp + 0x18);
    MEM32(edx) = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fimul dword ptr [ecx + 0x18] */
    PUSH32(esp, ecx);
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fimul dword ptr [ecx + 0x20] */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_004C376B(); /* call 0x004C376B */

loc_004CCB25: ;
    edi = eax;
    edi = edi + MEM32(ecx + 8);
    edx = 0xFFFFD8F0u;
    if (CMP_GE(edi, edx)) { sub_004CCB37(); return; } /* jge: greater or equal (signed >=) */

loc_004CCB33: ;
    edi = edx;
    g_seh_ebp = ebp; sub_004CCB3D(); return; /* tail jmp 0x004CCB3D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CCBFC
 * Original: 0x004CCBFC - 0x004CCCE6 (234 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CCBFC(void)
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

loc_004CCBFC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    esi = ecx;
    eax = MEM32(esi);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(eax + 0x160);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = eax >> 2;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CCA22(); /* call 0x004CCA22 */

loc_004CCC33: ;
    eax = 0; /* xor self */

loc_004CCC35: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -8);
    MEM32(eax + ecx + 0x1B8) = edx;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx + 0x1BC) = edx;
    eax = eax + 0xC;
    if (CMP_L(eax, 0x24)) goto loc_004CCC35; /* jl: less (signed <) */

loc_004CCC55: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(esi);
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = esi;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(eax + 0x160));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CCA22(); /* call 0x004CCA22 */

loc_004CCC7F: ;
    eax = 0; /* xor self */

loc_004CCC81: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -8);
    MEM32(eax + ecx + 0x20C) = edx;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx + 0x210) = edx;
    eax = eax + 0xC;
    if (CMP_L(eax, 0x18)) goto loc_004CCC81; /* jl: less (signed <) */

loc_004CCCA1: ;
    ebx = 0; /* xor self */
    edi = 0; /* xor self */

loc_004CCCA5: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(esi);
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = esi;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(edi + eax + 0xEC));
    eax = ebx + eax + 0x1D8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CCA22(); /* call 0x004CCA22 */

loc_004CCCD4: ;
    edi = edi + 8;
    ebx = ebx + 0xC;
    if (CMP_L(edi, 0x20)) goto loc_004CCCA5; /* jl: less (signed <) */

loc_004CCCDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CCCE6
 * Original: 0x004CCCE6 - 0x004CCED9 (499 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CCCE6(void)
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

loc_004CCCE6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    MEM32(esi) = eax;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648ce0] */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648d14] */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004CCD3A; /* jp: parity */

loc_004CCD33: ;
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fst */

loc_004CCD3A: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e38] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004CCD4E; /* jne: not equal / not zero */

loc_004CCD47: ;
    MEM32(ebp + 0xC) = 0x42700000;

loc_004CCD4E: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CC82B(); /* call 0x004CC82B */

loc_004CCD55: ;
    fp_push(MEMF(edi + 0x30)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0); sub_004CC9C1(); /* call 0x004CC9C1 */

loc_004CCD64: ;
    eax = MEM32(edi + 0x18);
    eax = eax + MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CC5A9(); /* call 0x004CC5A9 */

loc_004CCD70: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004CC685(); /* call 0x004CC685 */

loc_004CCD7B: ;
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004CC6BE(); /* call 0x004CC6BE */

loc_004CCD87: ;
    eax = MEM32(edi + 0x20);
    eax = eax + MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CC5A9(); /* call 0x004CC5A9 */

loc_004CCD93: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004CC6DC(); /* call 0x004CC6DC */

loc_004CCD9E: ;
    fp_push(MEMF(edi + 0x24)); /* fld float */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004CC714(); /* call 0x004CC714 */

loc_004CCDAC: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004CC5F7(); /* call 0x004CC5F7 */

loc_004CCDB8: ;
    fp_push(MEMF(edi + 0x30)); /* fld float */
    esp = esp - 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = esi;
    fp_push(MEMF(edi + 0x14)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004CCBFC(); /* call 0x004CCBFC */

loc_004CCDD6: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004CC7AE(); /* call 0x004CC7AE */

loc_004CCDE4: ;
    PUSH32(esp, 0xFFFFFFFCu);
    ecx = 0; /* xor self */
    POP32(esp, edi);

loc_004CCDE9: ;
    eax = MEM32(esi);
    eax = ecx + eax + 0xAC;
    edx = MEM32(eax);
    edx++;
    edx = edx & edi;
    ecx = ecx + 8;
    (void)0; /* cmp ecx, 0x70 - flags set for next jcc */
    MEM32(eax) = edx;
    if (CMP_B(ecx, 0x70)) goto loc_004CCDE9; /* jb: below (unsigned <) */

loc_004CCE01: ;
    ecx = 0x118;

loc_004CCE06: ;
    eax = MEM32(esi);
    eax = eax + ecx;
    edx = MEM32(eax);
    edx++;
    edx = edx & edi;
    ecx = ecx + 4;
    (void)0; /* cmp ecx, 0x12C - flags set for next jcc */
    MEM32(eax) = edx;
    if (CMP_L(ecx, 0x12C)) goto loc_004CCE06; /* jl: less (signed <) */

loc_004CCE1C: ;
    edx = 0x130;
    ecx = 0x150;
    PUSH32(esp, ebx);

loc_004CCE27: ;
    eax = MEM32(esi);
    eax = eax + edx;
    ebx = MEM32(eax);
    ebx++;
    ebx = ebx & edi;
    edx = edx + 4;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(eax) = ebx;
    if (CMP_L(edx, ecx)) goto loc_004CCE27; /* jl: less (signed <) */

loc_004CCE39: ;
    eax = MEM32(esi);
    eax = eax + 0x12C;
    edx = MEM32(eax);
    edx++;
    edx = edx & edi;
    MEM32(eax) = edx;

loc_004CCE47: ;
    eax = MEM32(esi);
    eax = eax + ecx;
    edx = MEM32(eax);
    edx++;
    edx = edx & edi;
    ecx = ecx + 4;
    (void)0; /* cmp ecx, 0x160 - flags set for next jcc */
    MEM32(eax) = edx;
    if (CMP_L(ecx, 0x160)) goto loc_004CCE47; /* jl: less (signed <) */

loc_004CCE5D: ;
    eax = MEM32(esi);
    eax = eax + 0x160;
    ecx = MEM32(eax);
    ecx++;
    ecx = ecx & edi;
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */

loc_004CCE6D: ;
    eax = MEM32(esi);
    eax = ecx + eax + 0xAC;
    MEM32(eax) = MEM32(eax) - 1;
    ecx = ecx + 8;
    if (CMP_B(ecx, 0x70)) goto loc_004CCE6D; /* jb: below (unsigned <) */

loc_004CCE80: ;
    edx = 0x11C;

loc_004CCE85: ;
    eax = MEM32(esi);
    ecx = edx + eax;
    eax = MEM32(eax + 0x118);
    MEM32(ecx) = MEM32(ecx) + eax;
    edx = edx + 4;
    if (CMP_L(edx, 0x12C)) goto loc_004CCE85; /* jl: less (signed <) */

loc_004CCE9D: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x118);
    MEM32(eax + 0x12C) = MEM32(eax + 0x12C) + ecx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    ecx = 0; /* xor self */
    eax = MEM32(esi);
    edx = ecx + eax;
    edi = edx + 0x134;
    ebx = MEM32(edi);
    MEM32(ebp + 8) = edx;
    edx = ecx + 0x130;
    eax = eax + edx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(eax);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (CMP_BE(eax, ebx)) { sub_004CCED9(); return; } /* jbe: below or equal (unsigned <=) */

loc_004CCED5: ;
    edi = eax;
    g_seh_ebp = ebp; sub_004CCEDB(); return; /* tail jmp 0x004CCEDB */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004CD06E
 * Original: 0x004CD06E - 0x004CD088 (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD06E(void)
{

loc_004CD06E: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = MEM32(ecx) & 0;
    PUSH32(esp, edi);
    MEM32(ecx + 8) = eax;
    eax = 0; /* xor self */
    edi = ecx + 0x14;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = ecx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD088
 * Original: 0x004CD088 - 0x004CD0B6 (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD088(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CD088: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_004CD0B4; /* je: equal / zero */

loc_004CD092: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_004CD0B4; /* je: equal / zero */

loc_004CD099: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D0), _icall_esp); /* indirect call */
    }

loc_004CD0A3: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_004CD0B4; /* je: equal / zero */

loc_004CD0AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6A88(); /* call 0x004C6A88 */

loc_004CD0B0: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;

loc_004CD0B4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CD0B6
 * Original: 0x004CD0B6 - 0x004CD156 (160 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD0B6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CD0B6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 8), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_NE(MEM32(esi + 8), 1)) ? 1 : 0); /* setne */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    eax = eax + eax + 0xC;
    eax = eax << 4;
    ecx = eax;
    eax = ecx + 0x4E1DD0;
    MEM32(esi + 0x10) = eax;
    ecx = ecx + 0x4E1DE0;
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ecx + 8);
    edx = edx >> 3;
    edx = ZX16(LO16(edx));
    MEM32(esi) = edx;
    MEM32(esi + 4) = ebx;
    edi = MEM32(ecx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -8) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;
    eax = edx;
    eax = eax - ebx;
    if ((eax == 0)) goto loc_004CD139; /* je: equal / zero */

loc_004CD111: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CDA41(); /* call 0x004CDA41 */

loc_004CD122: ;
    ecx = MEM32(ebp + 8);
    MEM32(edi + ecx * 8 + 4) = MEM32(edi + ecx * 8 + 4) & 0;
    MEM32(edi + ecx * 8) = eax;
    eax = MEM32(esi);
    ecx++;
    eax = eax - ebx;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(ecx, eax)) goto loc_004CD111; /* jb: below (unsigned <) */

loc_004CD139: ;
    (void)0; /* cmp MEM32(esi + 8), 0 - flags set for next jcc */
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    if (CMP_EQ(MEM32(esi + 8), 0)) { sub_004CD156(); return; } /* je: equal / zero */

loc_004CD145: ;
    MEM32(0xFE802040u) = eax;
    eax = MEM32(esi);
    eax = eax - MEM32(esi + 4);
    MEM32(0xFE8020D4u) = eax;
    g_seh_ebp = ebp; sub_004CD162(); return; /* tail jmp 0x004CD162 */

}

/**
 * sub_004CD169
 * Original: 0x004CD169 - 0x004CD1BB (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD169(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CD169: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = eax - edx;
    edx = edx - edi;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x4E1EA0);
    if (CMP_BE(edi & edi, 0)) goto loc_004CD1A3; /* jbe: below or equal (unsigned <=) */

loc_004CD184: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = edx + eax * 8;
    esi = esi + 4;

loc_004CD190: ;
    ebx = MEM32(esi);
    MEM32(edx + 4) = MEM32(edx + 4) & 0;
    MEM32(edx) = ebx;
    edx = edx + 8;
    esi = esi + 0x10;
    edi--;
    if ((edi != 0)) goto loc_004CD190; /* jne: not equal / not zero */

loc_004CD1A1: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004CD1A3: ;
    edx = MEM32(ecx);
    edx = edx - MEM32(ecx + 4);
    ecx = MEM32(esp + 0x10);
    eax = eax << 0xC;
    MEM32(-25157420) = edx;
    MEM32(ecx) = eax;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CD1BB
 * Original: 0x004CD1BB - 0x004CD1E3 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD1BB(void)
{

loc_004CD1BB: ;
    eax = ecx;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    edi = edi + MEM32(esp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CD1E3
 * Original: 0x004CD1E3 - 0x004CD2BB (216 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD1E3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CD1E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 8);
    eax = eax - edx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(0x4E1EA0);
    MEM32(ebp + -4) = eax;
    eax = ecx;
    eax = eax >> 0xC;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if (CMP_A(eax, edx)) goto loc_004CD239; /* ja: above (unsigned >) */

loc_004CD20F: ;
    if (CMP_AE(MEM32(ebx + 0x1C), ecx)) goto loc_004CD2B2; /* jae: above or equal (unsigned >=) */

loc_004CD218: ;
    esi = ebx + 0x14;
    edi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0x61645344);
    MEM32(ebx + 0x1C) = ecx;
    PUSH32(esp, 0); sub_004C6A41(); /* call 0x004C6A41 */

loc_004CD232: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x14) = eax;
    if (TEST_NZ(eax, eax)) goto loc_004CD240; /* jne: not equal / not zero */

loc_004CD239: ;
    eax = 0x8007000Eu;
    goto loc_004CD2B4;

loc_004CD240: ;
    edi = MEM32(0x5611D0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004CD24E: ;
    eax = MEM32(ebp + -8);
    if (CMP_BE(eax & eax, 0)) goto loc_004CD287; /* jbe: below or equal (unsigned <=) */

loc_004CD255: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -12);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    esi = ecx + edx * 8;
    MEM32(ebp + -4) = eax;

loc_004CD265: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D4), _icall_esp); /* indirect call */
    }

loc_004CD272: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x1000;
    MEM32(esi) = eax;
    esi = esi + 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_004CD265; /* jne: not equal / not zero */

loc_004CD287: ;
    eax = MEM32(ebx);
    eax = eax - MEM32(ebx + 4);
    eax = eax + MEM32(ebp + -8);
    (void)0; /* cmp MEM32(ebp + -20), 0 - flags set for next jcc */
    MEM32(0xFE8020D4u) = eax;
    if (CMP_EQ(MEM32(ebp + -20), 0)) goto loc_004CD2B2; /* je: equal / zero */

loc_004CD29A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004CD2A4: ;
    if (CMP_EQ(MEM32(ebp + -28), 0)) goto loc_004CD2B2; /* je: equal / zero */

loc_004CD2AA: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0); sub_004C6A88(); /* call 0x004C6A88 */

loc_004CD2B2: ;
    eax = 0; /* xor self */

loc_004CD2B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD2BB
 * Original: 0x004CD2BB - 0x004CD334 (121 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD2BB(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CD2BB: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    edx = ecx;
    edx = edx | eax;
    if ((edx != 0)) goto loc_004CD2D4; /* jne: not equal / not zero */

loc_004CD2C9: ;
    eax = MEM32(0x4E1DCC);
    ecx = MEM32(0x4E1DC8);

loc_004CD2D4: ;
    PUSH32(esp, esi);
    edx = ecx;
    esi = eax;
    esi = (esi << 2) | (edx >> (32 - 2)); /* shld */
    edx = edx << 2;
    edx = edx ^ ecx;
    esi = esi ^ eax;
    esi = (esi << 1) | (edx >> (32 - 1)); /* shld */
    edx = edx << 1;
    edx = edx ^ ecx;
    edx = edx << 0x1C;
    edx = edx ^ eax;
    ecx = (ecx >> 1) | (eax << (32 - 1)); /* shrd */
    esi = 0; /* xor self */
    edx = edx & 0x80000000u;
    eax = eax >> 1;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = esi | ecx;
    edx = edx | eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(0x4E1DC8) = esi;
    MEM32(0x4E1DCC) = edx;
    if (TEST_Z(edi, edi)) goto loc_004CD32F; /* je: equal / zero */

loc_004CD318: ;
    ecx = MEM32(esp + 0x18);
    eax = ecx;
    ecx = ecx >> 2;
    esi = 0x4E1DC8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_004CD32F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004CD334
 * Original: 0x004CD334 - 0x004CD361 (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD334(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CD334: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FA49BCA);
    PUSH32(esp, 0x49DE12BA);
    PUSH32(esp, 0); sub_004CD2BB(); /* call 0x004CD2BB */

loc_004CD348: ;
    PUSH32(esp, 0x50);
    POP32(esp, esi);

loc_004CD34B: ;
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004CD2BB(); /* call 0x004CD2BB */

loc_004CD35A: ;
    esi--;
    if ((esi != 0)) goto loc_004CD34B; /* jne: not equal / not zero */

loc_004CD35D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD361
 * Original: 0x004CD361 - 0x004CD430 (207 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD361(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CD361: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CD334(); /* call 0x004CD334 */

loc_004CD372: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 0x18), edi)) goto loc_004CD3AA; /* je: equal / zero */

loc_004CD379: ;
    esi = MEM32(ebp + 0xC);
    eax = ebp + -8;
    ecx = 0; /* xor self */
    esi = esi - eax;

loc_004CD383: ;
    eax = ebp + ecx + -8;
    SET_LO8(edx, MEM8(esi + eax));
    SET_LO8(edx, LO8(edx) ^ MEM8(eax));
    ecx++;
    (void)0; /* cmp ecx, 8 - flags set for next jcc */
    MEM8(ebp + ecx + -17) = LO8(edx);
    if (CMP_B(ecx, 8)) goto loc_004CD383; /* jb: below (unsigned <) */

loc_004CD396: ;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(eax, edi)) goto loc_004CD3C1; /* je: equal / zero */

loc_004CD39D: ;
    ecx = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    goto loc_004CD3C1;

loc_004CD3AA: ;
    eax = MEM32(ebp + 8);
    if (CMP_NE(eax, edi)) goto loc_004CD3B6; /* jne: not equal / not zero */

loc_004CD3B1: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_004CD42A;

loc_004CD3B6: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;

loc_004CD3C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004CD2BB(); /* call 0x004CD2BB */

loc_004CD3CE: ;
    if (CMP_EQ(MEM32(ebp + 0x18), edi)) goto loc_004CD3DB; /* je: equal / zero */

loc_004CD3D3: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 8;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 8;

loc_004CD3DB: ;
    if (CMP_BE(MEM32(ebp + 0x10), edi)) goto loc_004CD428; /* jbe: below or equal (unsigned <=) */

loc_004CD3E0: ;
    eax = MEM32(ebp + 0xC);
    eax = eax - MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x18) = eax;

loc_004CD3EA: ;
    ecx = MEM32(ebp + 0x14);
    eax = edi;
    eax = eax & 7;
    SET_LO8(ebx, MEM8(ebp + eax + -8));
    SET_LO8(eax, MEM8(ebp + eax + -16));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = edi + ecx;
    ecx = MEM32(ebp + 0x18);
    SET_LO8(ecx, MEM8(ecx + esi));
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    PUSH32(esp, 1);
    eax = ebp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(ebp + 0xB) = LO8(ecx);
    PUSH32(esp, 0); sub_004CD2BB(); /* call 0x004CD2BB */

loc_004CD419: ;
    SET_LO8(ebx, LO8(ebx) ^ MEM8(ebp + 0xF));
    SET_LO8(ebx, LO8(ebx) ^ MEM8(ebp + 0xB));
    edi++;
    (void)0; /* cmp edi, MEM32(ebp + 0x10) - flags set for next jcc */
    MEM8(esi) = LO8(ebx);
    if (CMP_B(edi, MEM32(ebp + 0x10))) goto loc_004CD3EA; /* jb: below (unsigned <) */

loc_004CD427: ;
    POP32(esp, ebx);

loc_004CD428: ;
    eax = 0; /* xor self */

loc_004CD42A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004CD430
 * Original: 0x004CD430 - 0x004CD503 (211 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD430(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CD430: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    if (CMP_B(eax, 0x20)) goto loc_004CD430; /* jb: below (unsigned <) */

loc_004CD43D: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, esi);

loc_004CD442: ;
    esi = MEM32(0x4E1E00);
    edx = ecx;
    edx = edx & 0xFFFF;
    MEM32(eax + esi + 0x7C) = edx;
    eax = eax + 0x80;
    ecx++;
    if (CMP_B(eax, 0x8000)) goto loc_004CD442; /* jb: below (unsigned <) */

loc_004CD461: ;
    eax = MEM32(0x4E1E04);
    MEM32(0xFE80202Cu) = eax;
    eax = MEM32(0x4E1E44);
    MEM32(0xFE802038u) = eax;
    eax = MEM32(0x4E1E54);
    MEM32(0xFE80203Cu) = eax;
    eax = MEM32(0x4E1E24);
    MEM32(0xFE802030u) = eax;
    eax = MEM32(0x4E1E34);
    MEM32(0xFE802034u) = eax;
    eax = MEM32(0x4E1E14);
    MEM32(0xFE80115Cu) = eax;
    eax = 0xFFF;
    MEM32(0xFE8202A4u) = eax;
    MEM32(0xFE8202B0u) = eax;
    MEM32(0xFE8202A0u) = eax;
    MEM32(0xFE8202A8u) = eax;
    MEM32(0xFE8202ACu) = eax;
    MEM32(-25032700) = 0x7FF;
    eax = MEM32(0x4E1E84);
    MEM32(0xFE820808u) = eax;
    eax = MEM32(0x4E13C0);
    edx = MEM32(eax + 0x18);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    edx = edx & ecx;
    edx = edx << 8;
    esi = esi & ecx;
    edx = edx | esi;
    esi = MEM32(eax + 8);
    eax = MEM32(eax);
    edx = edx << 8;
    esi = esi & ecx;
    edx = edx | esi;
    eax = eax & ecx;
    edx = edx << 8;
    edx = edx | eax;
    MEM32(-25034048) = edx;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CD503
 * Original: 0x004CD503 - 0x004CD642 (319 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD503(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004CD503: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x4E1E64);
    MEM32(0xFE802044u) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(-24903936) = esi;
    MEM32(-24903932) = esi;
    eax = MEM32(0x4E1DD8);
    eax = eax >> 0xC;
    eax--;
    MEM32(0xFE8020D8u) = eax;
    MEM32(0xFE801148u) = eax;
    PUSH32(esp, edi);
    MEM32(-25153500) = esi;
    edi = 0x2000;
    MEM32(-25153496) = edi;
    eax = MEM32(0x4E1E60);
    MEM32(ebp + -8) = ecx;
    edx = 0; /* xor self */
    MEM32(ebp + -4) = esi;

loc_004CD554: ;
    ecx = MEM32(0x4E1DD4);
    ebx = MEM32(ebp + -4);
    ecx = ecx + ebx;

loc_004CD55F: ;
    ebx = MEM32(-25034736);
    ebx = ebx & 0xFFFFFFFCu;
    if (CMP_B(ebx, 8)) goto loc_004CD55F; /* jb: below (unsigned <) */

loc_004CD56D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x1000;
    MEM32(-25028608) = edx;
    MEM32(-25028600) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    edx++;
    eax = eax + 8;
    if (CMP_B(edx, 2)) goto loc_004CD554; /* jb: below (unsigned <) */

loc_004CD58E: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    if (CMP_B(eax, 8)) goto loc_004CD58E; /* jb: below (unsigned <) */

loc_004CD59B: ;
    ebx = MEM32(ebp + -8);
    MEM32(-25030656) = esi;
    MEM32(-25030652) = edi;
    edi = 0; /* xor self */
    edi++;
    if (CMP_NE(MEM32(ebx + 0xC), esi)) goto loc_004CD5EC; /* jne: not equal / not zero */

loc_004CD5B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004CD5BF: ;
    if (CMP_EQ(eax, esi)) goto loc_004CD5CC; /* je: equal / zero */

loc_004CD5C3: ;
    ecx = eax;
    PUSH32(esp, 0); sub_004C75A9(); /* call 0x004C75A9 */

loc_004CD5CA: ;
    goto loc_004CD5CE;

loc_004CD5CC: ;
    eax = 0; /* xor self */

loc_004CD5CE: ;
    esi = eax;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 0x7FF8FFF2;
    esi = esi + 0x8007000Eu;
    MEM32(ebx + 0xC) = eax;
    if (((int32_t)esi < 0)) goto loc_004CD5EC; /* js: sign (negative) */

loc_004CD5E5: ;
    ecx = eax;
    PUSH32(esp, 0); sub_004C75C8(); /* call 0x004C75C8 */

loc_004CD5EC: ;
    eax = MEM32(ebp + -8);
    MEM32(-24903684) = edi;
    eax = eax & 0xFFFFFFF7u;
    eax = eax | edi;
    MEM32(0xFE83FF10u) = eax;
    MEM32(-24903916) = 0xFF;
    eax = MEM32(0xFE803024u);
    MEM32(0xFE80302Cu) = eax;
    eax = MEM32(0xFE803034u);
    MEM32(0xFE80303Cu) = eax;
    eax = MEM32(0xFE803044u);
    MEM32(0xFE80304Cu) = eax;
    eax = MEM32(0xFE803054u);
    MEM32(0xFE80305Cu) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(-24903684) = 3;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CD642
 * Original: 0x004CD642 - 0x004CD7E6 (420 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD642(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004CD642: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    eax++;
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(0xFE85FFFCu) = eax;
    (void)0; /* cmp MEM32(esi + 0x10), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(MEM32(esi + 0x10), ebx)) ? 1 : 0); /* sete */
    MEM32(ebp + -12) = ebx;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + -20) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_004CD6A9; /* je: equal / zero */

loc_004CD669: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004CD676: ;
    if (CMP_EQ(eax, ebx)) goto loc_004CD683; /* je: equal / zero */

loc_004CD67A: ;
    ecx = eax;
    PUSH32(esp, 0); sub_004CE944(); /* call 0x004CE944 */

loc_004CD681: ;
    goto loc_004CD685;

loc_004CD683: ;
    eax = 0; /* xor self */

loc_004CD685: ;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x7FF8FFF2;
    edx = edx + 0x8007000Eu;
    MEM32(esi + 0x10) = eax;
    MEM32(ebp + -12) = edx;
    if (((int32_t)edx < 0)) goto loc_004CD6A9; /* js: sign (negative) */

loc_004CD69F: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = eax;
    PUSH32(esp, 0); sub_004CEA56(); /* call 0x004CEA56 */

loc_004CD6A9: ;
    eax = MEM32(0x4E1E74);
    MEM32(0xFE80204Cu) = eax;
    MEM32(-24772864) = ebx;
    MEM32(-24772860) = ebx;
    eax = MEM32(0x4E1DE8);
    eax = eax >> 0xC;
    eax--;
    MEM32(0xFE8020E0u) = eax;
    eax = MEM32(0x4E1E70);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -8) = ebx;
    edi = 0xFE804028u;
    ecx = 0x4E15E0;
    MEM32(ebp + -16) = 2;

loc_004CD6E9: ;
    (void)0; /* test MEM32(ecx), 0xFFFFF000u - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(MEM32(ecx) & 0xFFFFF000u, 0)) goto loc_004CD728; /* jbe: below or equal (unsigned <=) */

loc_004CD6F4: ;
    eax = MEM32(ebp + -8);
    ebx = MEM32(ebp + -24);
    edx = eax;
    edx = edx << 0xC;
    eax = ebx + eax * 8;

loc_004CD702: ;
    ebx = MEM32(0x4E1DE4);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    ebx = ebx + edx;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(eax) = ebx;
    ebx = MEM32(ecx);
    ebx = ebx >> 0xC;
    edx = edx + 0x1000;
    eax = eax + 8;
    if (CMP_B(MEM32(ebp + -4), ebx)) goto loc_004CD702; /* jb: below (unsigned <) */

loc_004CD726: ;
    ebx = 0; /* xor self */

loc_004CD728: ;
    eax = MEM32(ebp + -8);
    eax = eax << 0xC;
    MEM32(edi + -4) = eax;
    edx = MEM32(ecx);
    edx = edx + eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    MEM32(edi) = edx;
    ecx = ecx + 4;
    edi = edi + 0x10;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    if ((MEM32(ebp + -16) != 0)) goto loc_004CD6E9; /* jne: not equal / not zero */

loc_004CD748: ;
    if (CMP_L(MEM32(ebp + -12), ebx)) goto loc_004CD7BA; /* jl: less (signed <) */

loc_004CD74D: ;
    if (CMP_EQ(MEM32(ebp + -20), ebx)) goto loc_004CD7BA; /* je: equal / zero */

loc_004CD752: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004CE9CC(); /* call 0x004CE9CC */

loc_004CD760: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004CE9F4(); /* call 0x004CE9F4 */

loc_004CD76F: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4E1E80);
    PUSH32(esp, 0); sub_004C7852(); /* call 0x004C7852 */

loc_004CD77E: ;
    eax = MEM32(0x4E1660);
    ecx = eax;
    edi = 0xFFFF;
    ecx = ecx & edi;
    if (CMP_EQ(ecx, 2)) goto loc_004CD7BA; /* je: equal / zero */

loc_004CD791: ;
    if (TEST_NZ(eax, 0x10000)) goto loc_004CD7BA; /* jne: not equal / not zero */

loc_004CD798: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0); sub_004CE951(); /* call 0x004CE951 */

loc_004CD7A0: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    ecx = MEM32(0x4E1660);
    ecx = ecx & edi;
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(ecx, 1)) ? 1 : 0); /* setne */
    edx++;
    MEM32(eax + 0xC) = edx;

loc_004CD7BA: ;
    eax = MEM32(ebp + -12);
    MEM32(-24772772) = ebx;
    POP32(esp, edi);
    MEM32(-24772848) = 1;
    POP32(esp, esi);
    MEM32(-24772844) = 0xFFFFFFFFu;
    MEM32(-24772612) = 3;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CD7E6
 * Original: 0x004CD7E6 - 0x004CD89F (185 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD7E6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CD7E6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x4E1DE4);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x14;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_004CE7C1(); /* call 0x004CE7C1 */

loc_004CD7FE: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004CD898; /* jl: less (signed <) */

loc_004CD808: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004CE253(); /* call 0x004CE253 */

loc_004CD813: ;
    edi = eax;
    eax = 0; /* xor self */
    if (CMP_L(edi, eax)) goto loc_004CD898; /* jl: less (signed <) */

loc_004CD81B: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CE466(); /* call 0x004CE466 */

loc_004CD825: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004CD898; /* jl: less (signed <) */

loc_004CD82B: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_004CE2BB(); /* call 0x004CE2BB */

loc_004CD838: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_004CE253(); /* call 0x004CE253 */

loc_004CD843: ;
    edi = eax;
    esi = 0; /* xor self */
    if (CMP_L(edi, esi)) goto loc_004CD898; /* jl: less (signed <) */

loc_004CD84B: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004CE466(); /* call 0x004CE466 */

loc_004CD856: ;
    edi = eax;
    if (CMP_L(edi, esi)) goto loc_004CD898; /* jl: less (signed <) */

loc_004CD85C: ;
    (void)0; /* test MEM8(0x4E1662), 1 - flags set for next jcc */
    ecx = MEM32(ebx + 0x18);
    if (TEST_Z(MEM8(0x4E1662), 1)) goto loc_004CD880; /* je: equal / zero */

loc_004CD868: ;
    PUSH32(esp, 0x4000);
    ebp = ebp + 0x2000;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_004CE2BB(); /* call 0x004CE2BB */

loc_004CD879: ;
    PUSH32(esp, 0x2000002);
    goto loc_004CD890;

loc_004CD880: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_004CE2BB(); /* call 0x004CE2BB */

loc_004CD88B: ;
    PUSH32(esp, 0x2000000);

loc_004CD890: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, 0); sub_004CE1E6(); /* call 0x004CE1E6 */

loc_004CD898: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004CD89F
 * Original: 0x004CD89F - 0x004CD8D6 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD89F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CD89F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CD8B0: ;
    eax = MEM32(0xFE801004u);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(ebp + 8), ecx)) ? 1 : 0); /* setne */
    ecx = ecx ^ eax;
    ecx = ecx & 1;
    ecx = ecx ^ eax;
    MEM32(-25161724) = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CD8D2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD8D6
 * Original: 0x004CD8D6 - 0x004CD90D (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD8D6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CD8D6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CD8E7: ;
    eax = MEM32(0xFE801510u);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(ebp + 8), ecx)) ? 1 : 0); /* setne */
    ecx = ecx ^ eax;
    ecx = ecx & 1;
    ecx = ecx ^ eax;
    MEM32(-25160432) = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CD909: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD90D
 * Original: 0x004CD90D - 0x004CD968 (91 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD90D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CD90D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CD91E: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0;
    ecx = MEM32(-25161472);
    if ((eax == 0)) goto loc_004CD94D; /* je: equal / zero */

loc_004CD92C: ;
    eax--;
    if ((eax == 0)) goto loc_004CD945; /* je: equal / zero */

loc_004CD92F: ;
    eax--;
    if ((eax == 0)) goto loc_004CD93D; /* je: equal / zero */

loc_004CD932: ;
    eax--;
    if ((eax != 0)) goto loc_004CD956; /* jne: not equal / not zero */

loc_004CD935: ;
    ecx = ecx & 0xFFFFEFF8u;
    goto loc_004CD956;

loc_004CD93D: ;
    ecx = ecx | 0x1007;
    goto loc_004CD956;

loc_004CD945: ;
    ecx = ecx & 0xFFFFFF1Fu;
    goto loc_004CD956;

loc_004CD94D: ;
    ecx = ecx & 0xFFFFFF9Fu;
    ecx = ecx | 0x80;

loc_004CD956: ;
    MEM32(-25161472) = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CD964: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD968
 * Original: 0x004CD968 - 0x004CD9CA (98 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD968(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CD968: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CD979: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0;
    ecx = MEM32(-25157632);
    if ((eax == 0)) goto loc_004CD9B5; /* je: equal / zero */

loc_004CD987: ;
    eax--;
    if ((eax == 0)) goto loc_004CD9AD; /* je: equal / zero */

loc_004CD98A: ;
    eax--;
    if ((eax == 0)) goto loc_004CD9A5; /* je: equal / zero */

loc_004CD98D: ;
    eax--;
    if ((eax == 0)) goto loc_004CD9A0; /* je: equal / zero */

loc_004CD990: ;
    eax--;
    if ((eax == 0)) goto loc_004CD99B; /* je: equal / zero */

loc_004CD993: ;
    eax--;
    if ((eax != 0)) goto loc_004CD9B8; /* jne: not equal / not zero */

loc_004CD996: ;
    ecx = ecx & 0xFFFFFFF8u;
    goto loc_004CD9B8;

loc_004CD99B: ;
    ecx = ecx | 7;
    goto loc_004CD9B8;

loc_004CD9A0: ;
    ecx = ecx | 0x18;
    goto loc_004CD9B8;

loc_004CD9A5: ;
    ecx = ecx & 0xFFFFFFF7u;
    ecx = ecx | 0x10;
    goto loc_004CD9B8;

loc_004CD9AD: ;
    ecx = ecx & 0xFFFFFFEFu;
    ecx = ecx | 8;
    goto loc_004CD9B8;

loc_004CD9B5: ;
    ecx = ecx & 0xFFFFFFE7u;

loc_004CD9B8: ;
    MEM32(-25157632) = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CD9C6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CD9CA
 * Original: 0x004CD9CA - 0x004CDA41 (119 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CD9CA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CD9CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D4), _icall_esp); /* indirect call */
    }

loc_004CD9D7: ;
    ecx = MEM32(ebp + 0x10);
    edx = eax;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (TEST_Z(ecx, ecx)) goto loc_004CD9ED; /* je: equal / zero */

loc_004CD9EB: ;
    MEM32(ecx) = eax;

loc_004CD9ED: ;
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) goto loc_004CDA3A; /* je: equal / zero */

loc_004CD9F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x1000;
    esi = edi;
    esi = esi - eax;
    if (CMP_AE(esi, MEM32(ebp + 0xC))) goto loc_004CDA30; /* jae: above or equal (unsigned >=) */

loc_004CDA03: ;
    eax = MEM32(ebp + 8);
    eax = eax - edx;
    PUSH32(esp, ebx);
    ebx = esi + edx;
    MEM32(ebp + 8) = eax;
    goto loc_004CDA14;

loc_004CDA11: ;
    eax = MEM32(ebp + 8);

loc_004CDA14: ;
    eax = eax + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D4), _icall_esp); /* indirect call */
    }

loc_004CDA1D: ;
    if (CMP_NE(ebx, eax)) goto loc_004CDA2A; /* jne: not equal / not zero */

loc_004CDA21: ;
    esi = esi + edi;
    ebx = ebx + edi;
    if (CMP_B(esi, MEM32(ebp + 0xC))) goto loc_004CDA11; /* jb: below (unsigned <) */

loc_004CDA2A: ;
    (void)0; /* cmp esi, MEM32(ebp + 0xC) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_B(esi, MEM32(ebp + 0xC))) goto loc_004CDA33; /* jb: below (unsigned <) */

loc_004CDA30: ;
    esi = MEM32(ebp + 0xC);

loc_004CDA33: ;
    eax = MEM32(ebp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);

loc_004CDA3A: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004CDA41
 * Original: 0x004CDA41 - 0x004CDA7E (61 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDA41(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CDA41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_004CD9CA(); /* call 0x004CD9CA */

loc_004CDA5B: ;
    edx = MEM32(esi);
    ecx = 0x1000;
    ecx = ecx - MEM32(ebp + 0xC);
    if (CMP_B(ecx, edx)) goto loc_004CDA6B; /* jb: below (unsigned <) */

loc_004CDA69: ;
    ecx = edx;

loc_004CDA6B: ;
    MEM32(edi) = MEM32(edi) + ecx;
    MEM32(esi) = MEM32(esi) - ecx;
    edx = MEM32(ebp + 0x10);
    (void)0; /* test edx, edx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_004CDA7A; /* je: equal / zero */

loc_004CDA78: ;
    MEM32(edx) = ecx;

loc_004CDA7A: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CDA7E
 * Original: 0x004CDA7E - 0x004CDABD (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDA7E(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004CDA7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0); sub_004C6AA0(); /* call 0x004C6AA0 */

loc_004CDA96: ;
    esi = eax;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 0x7FF8FFF2;
    esi = esi + 0x8007000Eu;
    MEM32(edi) = eax;
    if (((int32_t)esi < 0)) goto loc_004CDAB6; /* js: sign (negative) */

loc_004CDAAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D4), _icall_esp); /* indirect call */
    }

loc_004CDAB3: ;
    MEM32(edi + 4) = eax;

loc_004CDAB6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004CDABD
 * Original: 0x004CDABD - 0x004CDAD9 (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDABD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CDABD: ;
    if (TEST_NZ(MEM8(0x4E1ED0), 1)) { sub_004CDAD9(); return; } /* jne: not equal / not zero */

loc_004CDAC6: ;
    MEM32(0x4E1ED0) = MEM32(0x4E1ED0) | 1;
    eax = 0x800;
    MEM32(0x4E15E8) = eax;
    g_seh_ebp = ebp; sub_004CDADE(); return; /* tail jmp 0x004CDADE */

}

/**
 * sub_004CDB37
 * Original: 0x004CDB37 - 0x004CDB63 (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDB37(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CDB37: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); sub_004CD503(); /* call 0x004CD503 */

loc_004CDB40: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_004CDB5E; /* jl: less (signed <) */

loc_004CDB46: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004CD642(); /* call 0x004CD642 */

loc_004CDB4D: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_004CDB5E; /* jl: less (signed <) */

loc_004CDB53: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2710);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561178), _icall_esp); /* indirect call */
    }

loc_004CDB5E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CDB63
 * Original: 0x004CDB63 - 0x004CDB86 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDB63(void)
{

loc_004CDB63: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x14;
    MEM32(esi) = 0x586144;
    PUSH32(esp, 0); sub_004CE059(); /* call 0x004CE059 */

loc_004CDB74: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004CDB7D: ;
    MEM32(esi + 4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDB86
 * Original: 0x004CDB86 - 0x004CDC2B (165 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDB86(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CDB86: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEM32(esi) = 0x586144;
    if (CMP_EQ(edi, ebp)) goto loc_004CDBAA; /* je: equal / zero */

loc_004CDB9A: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004C7869(); /* call 0x004C7869 */

loc_004CDBA1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004CDBA7: ;
    MEM32(esi + 0xC) = ebp;

loc_004CDBAA: ;
    edi = MEM32(esi + 0x10);
    if (CMP_EQ(edi, ebp)) goto loc_004CDBC1; /* je: equal / zero */

loc_004CDBB1: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004CEA39(); /* call 0x004CEA39 */

loc_004CDBB8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004CDBBE: ;
    MEM32(esi + 0x10) = ebp;

loc_004CDBC1: ;
    edi = 0; /* xor self */
    PUSH32(esp, ebx);

loc_004CDBC4: ;
    if (CMP_EQ(MEM32(edi + 0x4E1DDC), ebp)) goto loc_004CDBE2; /* je: equal / zero */

loc_004CDBCC: ;
    ebx = edi + 0x4E1DD0;
    eax = MEM32(ebx);
    if (CMP_EQ(eax, ebp)) goto loc_004CDBE8; /* je: equal / zero */

loc_004CDBD8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6AEF(); /* call 0x004C6AEF */

loc_004CDBDE: ;
    MEM32(ebx) = ebp;
    goto loc_004CDBE8;

loc_004CDBE2: ;
    MEM32(edi + 0x4E1DD0) = ebp;

loc_004CDBE8: ;
    MEM32(edi + 0x4E1DD4) = ebp;
    MEM32(edi + 0x4E1DD8) = ebp;
    edi = edi + 0x10;
    if (CMP_B(edi, 0x100)) goto loc_004CDBC4; /* jb: below (unsigned <) */

loc_004CDBFF: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebp)) goto loc_004CDC10; /* je: equal / zero */

loc_004CDC07: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004CDC0D: ;
    MEM32(esi + 4) = ebp;

loc_004CDC10: ;
    eax = MEM32(esi + 8);
    if (CMP_EQ(eax, ebp)) goto loc_004CDC20; /* je: equal / zero */

loc_004CDC17: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_004CDC1D: ;
    MEM32(esi + 8) = ebp;

loc_004CDC20: ;
    POP32(esp, edi);
    ecx = esi + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004CE7B4(); return; /* tail jmp 0x004CE7B4 */

}

/**
 * sub_004CDC2B
 * Original: 0x004CDC2B - 0x004CDCF8 (205 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDC2B(void)
{

loc_004CDC2B: ;
    MEM32(-25161724) = 0xD8;
    MEM32(-25161472) = 0x88;
    edx = 0; /* xor self */
    MEM32(-25157632) = edx;
    MEM32(-25160448) = edx;
    MEM32(-25160444) = 0x8000;
    PUSH32(esp, esi);
    MEM32(-25160440) = 0x800040;
    MEM32(-25160436) = edx;
    esi = ecx;
    PUSH32(esp, 0); sub_004CDABD(); /* call 0x004CDABD */

loc_004CDC6F: ;
    MEM32(-25161468) = 0xFF;
    MEM32(-25161464) = 0x3F;
    MEM32(-25161444) = 0x7F;
    MEM32(-25161436) = 0x1FFF;
    MEM32(-25161416) = 0x7FF;
    MEM32(-25161384) = 0x20;
    MEM32(-25161428) = edx;
    eax = 0x8000000;
    MEM32(0xFE801130u) = eax;
    MEM32(-25161408) = edx;
    MEM32(0xFE801144u) = eax;
    MEM32(-25161392) = edx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(0xFE801154u) = eax;
    PUSH32(esp, 0); sub_004CD8D6(); /* call 0x004CD8D6 */

loc_004CDCD9: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_004CD90D(); /* call 0x004CD90D */

loc_004CDCE2: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0); sub_004CD90D(); /* call 0x004CD90D */

loc_004CDCEB: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0); sub_004CD968(); /* call 0x004CD968 */

loc_004CDCF4: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CDCF8
 * Original: 0x004CDCF8 - 0x004CDDD8 (224 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDCF8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CDCF8: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    edx = 0x2000;
    ecx = 0x1000;
    PUSH32(esp, edi);
    MEM32(ebp + 0x70) = ebx;
    MEM32(ebp + 0x74) = esi;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -12) = ecx;
    eax = 0; /* xor self */

loc_004CDD22: ;
    eax = eax + MEM32(esi + 0x4E15E0);
    esi = esi + 4;
    if (CMP_B(esi, 8)) goto loc_004CDD22; /* jb: below (unsigned <) */

loc_004CDD30: ;
    MEM32(ebp + -8) = eax;
    esi = 0x8000;
    PUSH32(esp, 4);
    eax = eax >> 0xC;
    POP32(esp, edi);
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = esi;
    esi = 0x4000;
    eax = eax << 3;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 0x10) = 0x4020;
    MEM32(ebp + 0x14) = esi;
    MEM32(ebp + 0x18) = esi;
    MEM32(ebp + 0x1C) = esi;
    MEM32(ebp + 0x20) = 0x10000;
    MEM32(ebp + 0x24) = esi;
    MEM32(ebp + 0x28) = edx;
    MEM32(ebp + 0x2C) = esi;
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x34) = esi;
    MEM32(ebp + 0x38) = 0x10;
    MEM32(ebp + 0x3C) = esi;
    MEM32(ebp + 0x40) = eax;
    MEM32(ebp + 0x44) = esi;
    MEM32(ebp + 0x48) = ecx;
    MEM32(ebp + 0x4C) = esi;
    MEM32(ebp + 0x50) = 0xC000;
    MEM32(ebp + 0x54) = esi;
    MEM32(ebp + 0x58) = 0x1060;
    MEM32(ebp + 0x5C) = esi;
    PUSH32(esp, 0); sub_004CE8A0(); /* call 0x004CE8A0 */

loc_004CDDAA: ;
    eax = eax >> 0xC;
    eax = eax + edi;
    eax = eax << 0xC;
    MEM32(ebp + 0x60) = eax;
    eax = eax >> 0xC;
    eax = eax << 3;
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(0x4E1C64);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x64) = esi;
    MEM32(ebp + 0x6C) = esi;
    if (TEST_Z(eax, eax)) { sub_004CDDD8(); return; } /* je: equal / zero */

loc_004CDDCD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CAE38(); /* call 0x004CAE38 */

loc_004CDDD3: ;
    MEM32(ebx + 8) = eax;
    g_seh_ebp = ebp; sub_004CDE09(); return; /* tail jmp 0x004CDE09 */

}

/**
 * sub_004CDE78
 * Original: 0x004CDE78 - 0x004CDF55 (221 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDE78(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CDE78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = ebp + -16;
    ebx = 0x29B;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CDE99: ;
    if (CMP_EQ(MEM32(ebp + 8), esi)) goto loc_004CDF2C; /* je: equal / zero */

loc_004CDEA2: ;
    (void)0; /* test MEM8(-25161472), 0xE0 - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    if (TEST_NZ(MEM8(-25161472), 0xE0)) goto loc_004CDF43; /* jne: not equal / not zero */

loc_004CDEB2: ;
    if (TEST_Z(MEM32(-25157632), 0x18)) goto loc_004CDF43; /* je: equal / zero */

loc_004CDEC2: ;
    edi = 0; /* xor self */
    edi++;
    MEM32(ebp + 8) = edi;

loc_004CDEC8: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    if (CMP_B(eax, 4)) goto loc_004CDEC8; /* jb: below (unsigned <) */

loc_004CDED5: ;
    MEM32(-25034484) = esi;
    eax = MEM32(0x4E1E10);
    if (CMP_EQ(eax, esi)) goto loc_004CDF23; /* je: equal / zero */

loc_004CDEE4: ;
    ecx = ebp + -8;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_004C9CA8(); /* call 0x004C9CA8 */

loc_004CDEF2: ;
    MEM32(-25034492) = 2;
    goto loc_004CDF0C;

loc_004CDEFE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561178), _icall_esp); /* indirect call */
    }

loc_004CDF05: ;
    eax = ebx;
    ebx--;
    if (TEST_Z(eax, eax)) goto loc_004CDF19; /* je: equal / zero */

loc_004CDF0C: ;
    ecx = ebp + -8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C87B9(); /* call 0x004C87B9 */

loc_004CDF15: ;
    if (TEST_Z(eax, eax)) goto loc_004CDEFE; /* je: equal / zero */

loc_004CDF19: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C9CA8(); /* call 0x004C9CA8 */

loc_004CDF21: ;
    goto loc_004CDF43;

loc_004CDF23: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561178), _icall_esp); /* indirect call */
    }

loc_004CDF2A: ;
    goto loc_004CDF43;

loc_004CDF2C: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    if (CMP_B(eax, 4)) goto loc_004CDF2C; /* jb: below (unsigned <) */

loc_004CDF39: ;
    MEM32(-25034484) = 1;

loc_004CDF43: ;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CDF4B: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CDF70
 * Original: 0x004CDF70 - 0x004CDFED (125 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDF70(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CDF70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0); sub_004CDE78(); /* call 0x004CDE78 */

loc_004CDF7A: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004CD89F(); /* call 0x004CD89F */

loc_004CDF83: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_004CD8D6(); /* call 0x004CD8D6 */

loc_004CDF8C: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004CD90D(); /* call 0x004CD90D */

loc_004CDF95: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004CD968(); /* call 0x004CD968 */

loc_004CDF9E: ;
    eax = 0xFFFF;
    MEM32(0xFE802054u) = eax;
    MEM32(0xFE802060u) = eax;
    MEM32(0xFE80206Cu) = eax;
    MEM32(0xFE802058u) = eax;
    MEM32(0xFE802064u) = eax;
    MEM32(0xFE802070u) = eax;
    MEM32(0xFE80205Cu) = eax;
    MEM32(0xFE802068u) = eax;
    MEM32(0xFE802074u) = eax;
    MEM32(-24903684) = 0;
    ecx = esi + 0x14;
    MEM32(-24772612) = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004CE736(); return; /* tail jmp 0x004CE736 */

}

/**
 * sub_004CDFED
 * Original: 0x004CDFED - 0x004CE059 (108 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CDFED(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CDFED: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_004CDF70(); /* call 0x004CDF70 */

loc_004CDFF6: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CDCF8(); /* call 0x004CDCF8 */

loc_004CDFFD: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004CE054; /* jl: less (signed <) */

loc_004CE003: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CDC2B(); /* call 0x004CDC2B */

loc_004CE00A: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004CE054; /* jl: less (signed <) */

loc_004CE010: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CD430(); /* call 0x004CD430 */

loc_004CE017: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004CE054; /* jl: less (signed <) */

loc_004CE01D: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CD7E6(); /* call 0x004CD7E6 */

loc_004CE024: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004CE054; /* jl: less (signed <) */

loc_004CE02A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CDB37(); /* call 0x004CDB37 */

loc_004CE031: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004CE054; /* jl: less (signed <) */

loc_004CE037: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_004CD968(); /* call 0x004CD968 */

loc_004CE040: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_004CE40C(); /* call 0x004CE40C */

loc_004CE04A: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_004CE40C(); /* call 0x004CE40C */

loc_004CE054: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CE059
 * Original: 0x004CE059 - 0x004CE061 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE059(void)
{

loc_004CE059: ;
    eax = ecx;
    MEM32(0x4E1C78) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004CE061
 * Original: 0x004CE061 - 0x004CE06D (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE061(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CE061: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0x3E8;
    edi++;
    g_seh_ebp = ebp; sub_004CE07C(); return; /* tail jmp 0x004CE07C */

}

/**
 * sub_004CE08E
 * Original: 0x004CE08E - 0x004CE0BD (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE08E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CE08E: ;
    eax = MEM32(0xFEC0012Cu);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    ebx++;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 0x3E8;
    if (TEST_NZ(LO8(eax), 2)) goto loc_004CE0AA; /* jne: not equal / not zero */

loc_004CE0A2: ;
    eax = eax | 2;
    MEM32(0xFEC0012Cu) = eax;

loc_004CE0AA: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_004CE0B6; /* je: equal / zero */

loc_004CE0AE: ;
    eax = eax & 0xFFFFFFF3u;
    MEM32(0xFEC0012Cu) = eax;

loc_004CE0B6: ;
    esi = 0x100;
    g_seh_ebp = ebp; sub_004CE0CC(); return; /* tail jmp 0x004CE0CC */

}

/**
 * sub_004CE0DE
 * Original: 0x004CE0DE - 0x004CE0F2 (20 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE0DE(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CE0DE: ;
    PUSH32(esp, 2);
    eax = ecx + 0x38;
    POP32(esp, ecx);

loc_004CE0E4: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + 1) = MEM8(eax + 1) + LO8(edx);
    MEM8(eax) = 0;
    eax++;
    eax++;
    ecx--;
    if ((ecx != 0)) goto loc_004CE0E4; /* jne: not equal / not zero */

loc_004CE0F1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004CE0F2
 * Original: 0x004CE0F2 - 0x004CE10F (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE0F2(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CE0F2: ;
    PUSH32(esp, 0); sub_004CE061(); /* call 0x004CE061 */

loc_004CE0F7: ;
    if (TEST_Z(eax, eax)) goto loc_004CE10C; /* je: equal / zero */

loc_004CE0FB: ;
    SET_LO16(ecx, MEM16(esp + 8));
    edx = MEM32(esp + 4);
    MEM16(edx * 2 + -20971520) = LO16(ecx);

loc_004CE10C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CE10F
 * Original: 0x004CE10F - 0x004CE127 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE10F(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CE10F: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0); sub_004CE0F2(); /* call 0x004CE0F2 */

loc_004CE11A: ;
    if (TEST_NZ(eax, eax)) goto loc_004CE123; /* jne: not equal / not zero */

loc_004CE11E: ;
    esi = 0x80004005u;

loc_004CE123: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CE127
 * Original: 0x004CE127 - 0x004CE156 (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE127(void)
{
    uint32_t ebp;

loc_004CE127: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE13B: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x4E1608);
    ecx = ebp + -8;
    MEM8(eax + -20971253) = 0;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CE153: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CE156
 * Original: 0x004CE156 - 0x004CE1A1 (75 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE156(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE156: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE16B: ;
    if (CMP_EQ(MEM8(ebp + 0xC), 0)) { sub_004CE1A1(); return; } /* je: equal / zero */

loc_004CE171: ;
    SET_LO8(ebx, MEM8(ebp + 8));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) + MEM8(ebp + 0xC));
    SET_LO8(ecx, LO8(ecx) - 1);
    if (TEST_Z(MEM8(esi + 0xC), 1)) goto loc_004CE189; /* je: equal / zero */

loc_004CE181: ;
    SET_LO8(ebx, LO8(ebx) & 0x1F);
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    g_seh_ebp = ebp; sub_004CE1A5(); return; /* tail jmp 0x004CE1A5 */

loc_004CE189: ;
    eax = ZX8(LO8(ebx));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebp + 0xC));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = ZX8(LO8(ecx));
    SET_LO8(ebx, LO8(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    SET_LO8(ecx, LO8(edx));
    g_seh_ebp = ebp; sub_004CE1A5(); return; /* tail jmp 0x004CE1A5 */

}

/**
 * sub_004CE1E6
 * Original: 0x004CE1E6 - 0x004CE217 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE1E6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE1E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE1FA: ;
    if (CMP_NE(MEM32(esi), 1)) goto loc_004CE20A; /* jne: not equal / not zero */

loc_004CE1FF: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x28) = eax;
    MEM32(0xFEC0017Cu) = eax;

loc_004CE20A: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CE212: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE217
 * Original: 0x004CE217 - 0x004CE245 (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE217(void)
{

loc_004CE217: ;
    eax = ZX8(MEM8(ecx + 0x25));
    edx = MEM32(ecx + 0x18);
    SET_LO16(eax, MEM16(edx + eax * 8 + 4));
    edx = MEM32(ecx);
    edx = MEM32(edx * 4 + 0x4E1608);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi >> 1;
    SET_LO16(eax, LO16(eax) - LO16(esi));
    MEM16(edx + -20971256) = LO16(eax);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) & 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE253
 * Original: 0x004CE253 - 0x004CE28A (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE253(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE253: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE267: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004CE275: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) { sub_004CE28A(); return; } /* je: equal / zero */

loc_004CE27C: ;
    MEM32(eax) = ecx;
    MEM32(eax + 0x28) = 0x2000000;
    MEM32(eax + 8) = esi;
    g_seh_ebp = ebp; sub_004CE28C(); return; /* tail jmp 0x004CE28C */

}

/**
 * sub_004CE2BB
 * Original: 0x004CE2BB - 0x004CE34C (145 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE2BB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE2BB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE2CF: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(LO8(eax), 2)) goto loc_004CE2DF; /* je: equal / zero */

loc_004CE2D6: ;
    eax = eax & 0xFFFFFFFDu;
    MEM8(esi + 0x24) = MEM8(esi + 0x24) - 1;
    MEM32(esi + 0xC) = eax;

loc_004CE2DF: ;
    SET_LO8(eax, MEM8(esi + 0x25));
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x24));
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ebp + 8);
    SET_LO8(eax, LO8(eax) & 0x1F);
    eax = ZX8(LO8(eax));
    eax = eax << 3;
    MEM32(eax + ecx) = edx;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 1;
    MEM16(edx + eax + 4) = LO16(ecx);
    ecx = MEM32(esi + 0x18);
    ecx = ecx + eax + 4;
    MEM16(ecx + 2) = MEM16(ecx + 2) & 0xC000;
    ecx = MEM32(esi + 0x18);
    ecx = ecx + eax + 4;
    MEM8(ecx + 3) = MEM8(ecx + 3) | 0x40;
    ecx = MEM32(esi + 0x18);
    eax = ecx + eax + 4;
    MEM8(eax + 3) = MEM8(eax + 3) | 0x80;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x24));
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x25));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CE156(); /* call 0x004CE156 */

loc_004CE33F: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CE347: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CE34C
 * Original: 0x004CE34C - 0x004CE3BE (114 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE34C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE34C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE360: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x4E1608);
    MEM8(eax + -20971253) = 2;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x4E1608);
    SET_LO8(ecx, MEM8(eax + -20971253));
    SET_LO8(ecx, LO8(ecx) & 2);

loc_004CE382: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004CE382; /* jne: not equal / not zero */

loc_004CE386: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(eax + -20971264) = ecx;
    if (CMP_NE(MEM32(esi), 1)) goto loc_004CE39C; /* jne: not equal / not zero */

loc_004CE394: ;
    eax = MEM32(esi + 0x28);
    MEM32(0xFEC0017Cu) = eax;

loc_004CE39C: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x24));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x25));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CE156(); /* call 0x004CE156 */

loc_004CE3B3: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CE3BB: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CE3BE
 * Original: 0x004CE3BE - 0x004CE40C (78 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE3BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE3BE: ;
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

loc_004CE3D4: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CE127(); /* call 0x004CE127 */

loc_004CE3DB: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CE34C(); /* call 0x004CE34C */

loc_004CE3E2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004CE156(); /* call 0x004CE156 */

loc_004CE3EF: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFFFFDu;
    if (CMP_EQ(MEM32(ebp + 8), edi)) goto loc_004CE3FE; /* je: equal / zero */

loc_004CE3F8: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x2C) = edi;

loc_004CE3FE: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CE406: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE40C
 * Original: 0x004CE40C - 0x004CE466 (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE40C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE40C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE420: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x4E1608);
    if (TEST_Z(MEM8(eax + -20971258), 1)) goto loc_004CE439; /* je: equal / zero */

loc_004CE432: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CE34C(); /* call 0x004CE34C */

loc_004CE439: ;
    if (CMP_EQ(MEM32(ebp + 8), 0xFFFFFFFFu)) goto loc_004CE449; /* je: equal / zero */

loc_004CE43F: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0); sub_004CE217(); /* call 0x004CE217 */

loc_004CE449: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x4E1608);
    ecx = ebp + -8;
    MEM8(eax + -20971253) = 0x1D;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CE461: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE466
 * Original: 0x004CE466 - 0x004CE508 (162 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE466(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004CE466: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE47C: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 1);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x100);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0); sub_004C6AA0(); /* call 0x004C6AA0 */

loc_004CE4A1: ;
    edi = eax;
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0x7FF8FFF2;
    ebx = 0x8007000Eu;
    edi = edi + ebx;
    MEM32(esi + 0x18) = eax;
    if (((int32_t)edi < 0)) goto loc_004CE4F7; /* js: sign (negative) */

loc_004CE4B9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D4), _icall_esp); /* indirect call */
    }

loc_004CE4C0: ;
    (void)0; /* test MEM8(ebp + 8), 1 - flags set for next jcc */
    MEM32(esi + 0x1C) = eax;
    if (TEST_Z(MEM8(ebp + 8), 1)) goto loc_004CE4EC; /* je: equal / zero */

loc_004CE4C9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0); sub_004C6AA0(); /* call 0x004C6AA0 */

loc_004CE4DC: ;
    MEM32(esi + 0x20) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + ebx;
    edi = eax;

loc_004CE4EC: ;
    if (TEST_S(edi, edi)) goto loc_004CE4F7; /* jl: less (signed <) */

loc_004CE4F0: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004CE34C(); /* call 0x004CE34C */

loc_004CE4F7: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CE4FF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}
