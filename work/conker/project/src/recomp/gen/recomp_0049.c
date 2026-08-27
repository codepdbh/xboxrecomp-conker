/**
 * Burnout 3 - Recompiled code chunk 49
 * Functions: 250 (0x0042E61B - 0x00436D61)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

extern void conker_trace_point(uint32_t xbox_va);

/**
 * sub_0042E61B
 * Original: 0x0042E61B - 0x0042E63D (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E61B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E61B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561118), _icall_esp); /* indirect call */
    }

loc_0042E634: ;
    if (TEST_S(eax, eax)) { sub_0042E63D(); return; } /* jl: less (signed <) */

loc_0042E638: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_0042E645(); return; /* tail jmp 0x0042E645 */

}

/**
 * sub_0042E649
 * Original: 0x0042E649 - 0x0042E65F (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E649(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E649: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (TEST_Z(MEM8(ebp + 0x11), 0x80)) { sub_0042E65F(); return; } /* je: equal / zero */

loc_0042E652: ;
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) { sub_0042E65F(); return; } /* je: equal / zero */

loc_0042E658: ;
    PUSH32(esp, 0xC000000Du);
    g_seh_ebp = ebp; sub_0042E67A(); return; /* tail jmp 0x0042E67A */

}

/**
 * sub_0042E685
 * Original: 0x0042E685 - 0x0042E69C (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E685(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E685: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561120), _icall_esp); /* indirect call */
    }

loc_0042E693: ;
    if (TEST_S(eax, eax)) { sub_0042E69C(); return; } /* jl: less (signed <) */

loc_0042E697: ;
    PUSH32(esp, 0x1C);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0042E6A4(); return; /* tail jmp 0x0042E6A4 */

}

/**
 * sub_0042E6A7
 * Original: 0x0042E6A7 - 0x0042E6B5 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E6A7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E6A7: ;
    eax = MEM32(esp + 4);
    if (CMP_G(eax, 9)) { sub_0042E6B5(); return; } /* jg: greater (signed >) */

loc_0042E6B0: ;
    eax = eax + 0x30;
    g_seh_ebp = ebp; sub_0042E6B8(); return; /* tail jmp 0x0042E6B8 */

}

/**
 * sub_0042E6BB
 * Original: 0x0042E6BB - 0x0042E74D (146 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E6BB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0042E6BB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0042E718; /* je: equal / zero */

loc_0042E6D8: ;
    edi = eax;

loc_0042E6DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10000);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0042E6EC: ;
    ecx = eax;
    eax = ZX16(LO16(edi));
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFF);
    ecx = ecx + eax;
    PUSH32(esp, 0xFFFFFFC5u);
    ebx = ebx + edx + _cf; /* adc */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470CD0(); /* call 0x00470CD0 */

loc_0042E706: ;
    esi++;
    esi++;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi));
    (void)0; /* test LO16(edi), LO16(edi) - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edx;
    if (TEST_NZ(LO16(edi), LO16(edi))) goto loc_0042E6DA; /* jne: not equal / not zero */

loc_0042E718: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0xB);
    POP32(esp, esi);
    ebx = 0; /* xor self */

loc_0042E720: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    ecx = ebx;
    PUSH32(esp, 0); sub_00470CB0(); /* call 0x00470CB0 */

loc_0042E72D: ;
    eax = eax & 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E6A7(); /* call 0x0042E6A7 */

loc_0042E736: ;
    MEM8(esi + edi) = LO8(eax);
    ebx = ebx + 4;
    esi--;
    if (CMP_LE(ebx, 0x2C)) goto loc_0042E720; /* jle: less or equal (signed <=) */

loc_0042E742: ;
    MEM8(edi + 0xC) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042E74D
 * Original: 0x0042E74D - 0x0042E78D (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E74D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E74D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 0xC), esi)) goto loc_0042E764; /* je: equal / zero */

loc_0042E759: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042BECB(); /* call 0x0042BECB */

loc_0042E764: ;
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    eax = ebp + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_0042E777: ;
    if (TEST_Z(eax, eax)) goto loc_0042E781; /* je: equal / zero */

loc_0042E77B: ;
    if (CMP_EQ(MEM32(ebp + -4), 2)) { sub_0042E78D(); return; } /* je: equal / zero */

loc_0042E781: ;
    if (CMP_EQ(MEM16(ebp + 0xE), 0xFEFF)) { sub_0042E78D(); return; } /* je: equal / zero */

loc_0042E789: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042E790(); return; /* tail jmp 0x0042E790 */

}

/**
 * sub_0042E795
 * Original: 0x0042E795 - 0x0042E918 (387 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E795(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E795: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x130;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = 0; /* xor self */
    MEM32(ebp + -16) = esi;
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    MEM32(ebp + -8) = esi;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0042E7BE: ;
    POP32(esp, ecx);
    MEM32(ebp + -20) = eax;
    MEM16(ebp + -24) = LO16(esi);

loc_0042E7C6: ;
    ebx = 0; /* xor self */
    if (CMP_NE(MEM32(ebp + -8), ebx)) goto loc_0042E7F2; /* jne: not equal / not zero */

loc_0042E7CD: ;
    PUSH32(esp, ebx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_0042E7E1: ;
    if (TEST_Z(eax, eax)) goto loc_0042E90E; /* je: equal / zero */

loc_0042E7E9: ;
    if (CMP_EQ(MEM32(ebp + -12), ebx)) goto loc_0042E90E; /* je: equal / zero */

loc_0042E7F2: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    ecx = ebp + -304;
    eax = edi;
    eax = eax - ecx;
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax >> 1);
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = ecx + eax * 2;
    eax = ebp + -304;
    if (TEST_Z(esi, esi)) goto loc_0042E86D; /* je: equal / zero */

loc_0042E812: ;
    PUSH32(esp, 0x561600);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004700A3(); /* call 0x004700A3 */

loc_0042E81D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    if (TEST_Z(eax, eax)) goto loc_0042E7C6; /* je: equal / zero */

loc_0042E830: ;
    ecx = edi;
    eax = eax - ecx;
    eax = eax + 4;
    if (CMP_AE(eax, ebx)) goto loc_0042E866; /* jae: above or equal (unsigned >=) */

loc_0042E83B: ;
    ebx = ebx - eax;
    esi = ebx;
    eax = ebp + eax + -304;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0042E850: ;
    edi = ebp + esi + -304;
    esi = esi >> 1;
    eax = 0x8C;
    esp = esp + 0xC;
    eax = eax - esi;
    MEM32(ebp + -4) = eax;

loc_0042E866: ;
    esi = 0; /* xor self */
    goto loc_0042E7C6;

loc_0042E86D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004700A3(); /* call 0x004700A3 */

loc_0042E876: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0042E8B5; /* je: equal / zero */

loc_0042E87C: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + ecx;
    if (CMP_NE(MEM16(ecx + eax), 0x3D)) goto loc_0042E8B5; /* jne: not equal / not zero */

loc_0042E888: ;
    edi = eax + ecx + 2;
    PUSH32(esp, 0x561600);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_004700A3(); /* call 0x004700A3 */

loc_0042E89A: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(esi, esi)) goto loc_0042E8C2; /* jne: not equal / not zero */

loc_0042E8A2: ;
    esi++;
    edi = ebp + -304;
    MEM32(ebp + -4) = 0x8C;
    goto loc_0042E7C6;

loc_0042E8B5: ;
    eax = 0; /* xor self */
    eax++;
    esi = eax;
    MEM32(ebp + -8) = eax;
    goto loc_0042E7C6;

loc_0042E8C2: ;
    eax = esi;
    eax = eax - edi;
    edi = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax >> 1);
    edi--;
    if (CMP_L(edi, eax)) goto loc_0042E8D2; /* jl: less (signed <) */

loc_0042E8D0: ;
    edi = eax;

loc_0042E8D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_0042E8DE: ;
    eax = MEM32(ebp + 0x10);
    MEM16(eax + edi * 2) = MEM16(eax + edi * 2) & 0;
    eax = ebp + -304;
    esi = esi - eax;
    esi = esi + 4;
    esp = esp + 0xC;
    if (CMP_AE(esi, ebx)) goto loc_0042E907; /* jae: above or equal (unsigned >=) */

loc_0042E8F8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = esi - ebx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042BECB(); /* call 0x0042BECB */

loc_0042E907: ;
    MEM32(ebp + -16) = 1;

loc_0042E90E: ;
    eax = MEM32(ebp + -16);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0042E918
 * Original: 0x0042E918 - 0x0042E933 (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E918(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E918: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_NZ(MEM32(esi), 0x10)) { sub_0042E933(); return; } /* jne: not equal / not zero */

loc_0042E92C: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042EA14(); return; /* tail jmp 0x0042EA14 */

}

/**
 * sub_0042EA19
 * Original: 0x0042EA19 - 0x0042EA8A (113 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EA19(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042EA19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x100;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80100000u);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_0042EA3A: ;
    edi = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) { sub_0042EA8A(); return; } /* je: equal / zero */

loc_0042EA41: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042E74D(); /* call 0x0042E74D */

loc_0042EA49: ;
    if (TEST_Z(eax, eax)) goto loc_0042EA7D; /* je: equal / zero */

loc_0042EA4D: ;
    PUSH32(esp, 0x80);
    eax = ebp + -256;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5615B0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042E795(); /* call 0x0042E795 */

loc_0042EA64: ;
    if (TEST_Z(eax, eax)) goto loc_0042EA7D; /* je: equal / zero */

loc_0042EA68: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -256;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470101(); /* call 0x00470101 */

loc_0042EA77: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0042EA82; /* je: equal / zero */

loc_0042EA7D: ;
    esi = 0x491;

loc_0042EA82: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0042EA88: ;
    g_seh_ebp = ebp; sub_0042EA91(); return; /* tail jmp 0x0042EA91 */

}

/**
 * sub_0042EA99
 * Original: 0x0042EA99 - 0x0042EAF5 (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EA99(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042EA99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_0042EABA: ;
    esi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0042EAF0; /* je: equal / zero */

loc_0042EAC1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -48;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -32;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_0042EAD6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x28);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56102C), _icall_esp); /* indirect call */
    }

loc_0042EAE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0042EAEF: ;
    POP32(esp, edi);

loc_0042EAF0: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042EAF5
 * Original: 0x0042EAF5 - 0x0042ED36 (577 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EAF5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042EAF5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x258;
    eax = MEM32(ebp + 8);
    edx = ebp + -296;
    edx = edx - eax;

loc_0042EB09: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042EB09; /* jne: not equal / not zero */

loc_0042EB13: ;
    eax = ebp + -296;
    edx = eax + 1;

loc_0042EB1C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042EB1C; /* jne: not equal / not zero */

loc_0042EB23: ;
    eax = eax - edx;
    ecx = 0xF7;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    eax = ebp + eax + -296;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0042E6BB(); /* call 0x0042E6BB */

loc_0042EB3D: ;
    eax = ebp + -296;
    ecx = eax + 1;

loc_0042EB46: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0042EB46; /* jne: not equal / not zero */

loc_0042EB4D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax - ecx;
    (void)0; /* cmp MEM32(ebp + 0x10), 3 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(MEM32(ebp + 0x10), 3)) goto loc_0042EB90; /* jne: not equal / not zero */

loc_0042EB5A: ;
    esi = ebp + edi + -296;
    eax = 0x561548;
    edx = esi;
    edx = edx - eax;

loc_0042EB6A: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042EB6A; /* jne: not equal / not zero */

loc_0042EB74: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042EA19(); /* call 0x0042EA19 */

loc_0042EB83: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi) = 0;
    if (TEST_Z(eax, eax)) goto loc_0042ED08; /* je: equal / zero */

loc_0042EB8E: ;
    goto loc_0042EC05;

loc_0042EB90: ;
    PUSH32(esp, 0);
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C54D(); /* call 0x0042C54D */

loc_0042EB9E: ;
    if (TEST_NZ(eax, eax)) goto loc_0042EC11; /* jne: not equal / not zero */

loc_0042EBA2: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0042EBA7: ;
    (void)0; /* cmp eax, 0xB7 - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    ebx = 0x491;
    if (CMP_NE(eax, 0xB7)) goto loc_0042EBF4; /* jne: not equal / not zero */

loc_0042EBB6: ;
    esi = ebp + edi + -296;
    eax = 0x561548;
    edx = esi;
    edx = edx - eax;

loc_0042EBC6: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042EBC6; /* jne: not equal / not zero */

loc_0042EBD0: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042EA19(); /* call 0x0042EA19 */

loc_0042EBDF: ;
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM8(esi) = 0;
    if (TEST_NZ(ebx, ebx)) goto loc_0042EC0C; /* jne: not equal / not zero */

loc_0042EBE8: ;
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042EA99(); /* call 0x0042EA99 */

loc_0042EBF4: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 1)) goto loc_0042EC02; /* je: equal / zero */

loc_0042EBFA: ;
    if (TEST_Z(ebx, ebx)) goto loc_0042ED08; /* je: equal / zero */

loc_0042EC02: ;
    eax = MEM32(ebp + 0x14);

loc_0042EC05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

loc_0042EC0C: ;
    PUSH32(esp, 0x52);
    POP32(esp, eax);
    goto loc_0042EC05;

loc_0042EC11: ;
    esi = ebp + edi + -296;
    eax = 0x561548;
    edx = esi;
    edx = edx - eax;

loc_0042EC21: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042EC21; /* jne: not equal / not zero */

loc_0042EC2B: ;
    eax = ebp + -296;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042EC3C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -28;
    MEM32(ebp + -16) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, 0xC0100000u);
    eax = ebp + 8;
    ebx++;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0xFFFFFFFDu;
    MEM32(ebp + -12) = 0x40;
    MEM32(ebp + -8) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56105C), _icall_esp); /* indirect call */
    }

loc_0042EC7D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi) = 0;
    if (CMP_GE(eax & eax, 0)) goto loc_0042EC92; /* jge: greater or equal (signed >=) */

loc_0042EC84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561054), _icall_esp); /* indirect call */
    }

loc_0042EC8B: ;
    esi = eax;
    g_seh_ebp = ebp; sub_0042ED45(); return; /* tail jmp 0x0042ED45 */

loc_0042EC92: ;
    (void)0; /* test MEM8(ebp + 0x14), LO8(ebx) - flags set for next jcc */
    eax = 0x561648;
    if (TEST_NZ(MEM8(ebp + 0x14), LO8(ebx))) goto loc_0042ECA1; /* jne: not equal / not zero */

loc_0042EC9C: ;
    eax = 0x561628;

loc_0042ECA1: ;
    PUSH32(esp, 0x561608);
    PUSH32(esp, 0x561600);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x5615B0);
    PUSH32(esp, 0xFEFF);
    PUSH32(esp, eax);
    eax = ebp + -600;
    PUSH32(esp, 0x98);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EE4A(); /* call 0x0046EE4A */

loc_0042ECCC: ;
    eax = ebp + -600;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0042ECD8: ;
    esi = eax;
    esp = esp + 0x28;
    esi = esi << 1;
    if ((esi == 0)) goto loc_0042ED00; /* je: equal / zero */

loc_0042ECE1: ;
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -600;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_0042ECF7: ;
    if (TEST_Z(eax, eax)) { sub_0042ED36(); return; } /* je: equal / zero */

loc_0042ECFB: ;
    esi = esi - MEM32(ebp + 0xC);
    if ((esi != 0)) goto loc_0042ECE1; /* jne: not equal / not zero */

loc_0042ED00: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0042ED08: ;
    esi = MEM32(ebp + 0x18);
    if (TEST_Z(esi, esi)) goto loc_0042ED2F; /* je: equal / zero */

loc_0042ED0F: ;
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    eax = ebp + -296;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0042ED20: ;
    ebx--;
    if (CMP_AE(edi, ebx)) goto loc_0042ED2F; /* jae: above or equal (unsigned >=) */

loc_0042ED25: ;
    eax = edi + esi;
    MEM8(eax) = 0x5C;
    MEM8(eax + 1) = 0;

loc_0042ED2F: ;
    eax = 0; /* xor self */
    goto loc_0042EC05;

}

/**
 * sub_0042ED58
 * Original: 0x0042ED58 - 0x0042EE28 (208 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042ED58(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042ED58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x144;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x561670;
    edi = ebp + -324;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = ebp + -324;
    MEM8(edi) = MEM8(esi); esi++; edi++; /* movsb */
    edx = eax + 1;

loc_0042ED79: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042ED79; /* jne: not equal / not zero */

loc_0042ED80: ;
    ecx = MEM32(ebp + 8);
    eax = eax - edx;
    PUSH32(esp, ebx);
    ebx = ebp + eax + -324;
    edx = ebx;
    edx = edx - ecx;

loc_0042ED91: ;
    SET_LO8(eax, MEM8(ecx));
    MEM8(edx + ecx) = LO8(eax);
    ecx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0042ED91; /* jne: not equal / not zero */

loc_0042ED9B: ;
    eax = ebp + -324;
    edx = eax + 1;

loc_0042EDA4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042EDA4; /* jne: not equal / not zero */

loc_0042EDAB: ;
    eax = eax - edx;
    ecx = 0x137;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    eax = ebp + eax + -324;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0042E6BB(); /* call 0x0042E6BB */

loc_0042EDC5: ;
    eax = ebp + -324;
    ecx = eax + 1;

loc_0042EDCE: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0042EDCE; /* jne: not equal / not zero */

loc_0042EDD5: ;
    eax = eax - ecx;
    edi = eax;
    esi = ebp + edi + -324;
    eax = 0x561548;
    edx = esi;
    edx = edx - eax;

loc_0042EDE9: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042EDE9; /* jne: not equal / not zero */

loc_0042EDF3: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042EA19(); /* call 0x0042EA19 */

loc_0042EDFC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi) = 0;
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_0042EE22; /* jne: not equal / not zero */

loc_0042EE04: ;
    PUSH32(esp, eax);
    MEM8(ebp + edi + -323) = LO8(eax);
    eax = ebp + -324;
    PUSH32(esp, eax);
    MEM8(esi) = 0x5C;
    PUSH32(esp, 0); sub_0042FD42(); /* call 0x0042FD42 */

loc_0042EE1B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561054), _icall_esp); /* indirect call */
    }

loc_0042EE22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042EE28
 * Original: 0x0042EE28 - 0x0042EF32 (266 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EE28(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042EE28: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x104;
    eax = MEM32(ebp + 8);
    edx = ebp + -260;
    edx = edx - eax;

loc_0042EE3C: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042EE3C; /* jne: not equal / not zero */

loc_0042EE46: ;
    eax = ebp + -260;
    edx = eax + 1;

loc_0042EE4F: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042EE4F; /* jne: not equal / not zero */

loc_0042EE56: ;
    eax = eax - edx;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = 0x5615D0;
    ecx = ebp + ebx + -260;
    PUSH32(esp, edi);
    ecx = ecx - eax;

loc_0042EE6B: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0042EE6B; /* jne: not equal / not zero */

loc_0042EE75: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C6B3(); /* call 0x0042C6B3 */

loc_0042EE85: ;
    edi = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0042EF29; /* je: equal / zero */

loc_0042EE90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042E918(); /* call 0x0042E918 */

loc_0042EE9A: ;
    if (TEST_NZ(eax, eax)) goto loc_0042EEDE; /* jne: not equal / not zero */

loc_0042EE9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C7C0(); /* call 0x0042C7C0 */

loc_0042EEA5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_0042EECE; /* je: equal / zero */

loc_0042EEAC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042E918(); /* call 0x0042E918 */

loc_0042EEB6: ;
    if (TEST_NZ(eax, eax)) goto loc_0042EEC8; /* jne: not equal / not zero */

loc_0042EEBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C7C0(); /* call 0x0042C7C0 */

loc_0042EEC1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0042EEAC; /* jne: not equal / not zero */

loc_0042EEC8: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_0042EEDE; /* jne: not equal / not zero */

loc_0042EECE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0042EED4: ;
    PUSH32(esp, 0x12);
    edi = edi | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042EEDE: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0042EF29; /* je: equal / zero */

loc_0042EEE3: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x110);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0042EEF2: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0042EF19; /* je: equal / zero */

loc_0042EEF8: ;
    PUSH32(esp, 0x104);
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi + 0xC;
    PUSH32(esp, eax);
    MEM32(esi) = 0x53425645;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0042EF15: ;
    edi = esi;
    goto loc_0042EF29;

loc_0042EF19: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0042EF1F: ;
    PUSH32(esp, 8);
    edi = edi | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042EF29: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042EF32
 * Original: 0x0042EF32 - 0x0042EF79 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EF32(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042EF32: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_0042C7C0(); /* call 0x0042C7C0 */

loc_0042EF44: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0042EF72; /* je: equal / zero */

loc_0042EF4A: ;
    PUSH32(esp, ebx);
    ebx = esi + 0xC;

loc_0042EF4E: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0); sub_0042E918(); /* call 0x0042E918 */

loc_0042EF5B: ;
    if (TEST_NZ(eax, eax)) goto loc_0042EF71; /* jne: not equal / not zero */

loc_0042EF5F: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_0042C7C0(); /* call 0x0042C7C0 */

loc_0042EF6B: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_0042EF4E; /* jne: not equal / not zero */

loc_0042EF71: ;
    POP32(esp, ebx);

loc_0042EF72: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042EF79
 * Original: 0x0042EF79 - 0x0042EFCF (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EF79(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042EF79: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 0x434F4E54 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(edx, 0x434F4E54)) goto loc_0042EFB7; /* je: equal / zero */

loc_0042EF8A: ;
    if (CMP_EQ(edx, 0x4E49434B)) goto loc_0042EFA7; /* je: equal / zero */

loc_0042EF92: ;
    if (CMP_EQ(edx, 0x53425645)) goto loc_0042EFB7; /* je: equal / zero */

loc_0042EF9A: ;
    if (CMP_NE(edx, 0xBE4BEA00u)) goto loc_0042EFCB; /* jne: not equal / not zero */

loc_0042EFA2: ;
    esi = MEM32(ecx + 0xC);
    goto loc_0042EFBA;

loc_0042EFA7: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0042EFB2: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_0042EFCB;

loc_0042EFB7: ;
    esi = MEM32(ecx + 4);

loc_0042EFBA: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0042EFC5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0042EFCB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042EFCF
 * Original: 0x0042EFCF - 0x0042F026 (87 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EFCF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042EFCF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x561678);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042EFDB: ;
    esi = 0; /* xor self */
    MEM32(ebp + -4) = esi;
    edx = MEM32(ebp + 0xC);
    MEM32(ebp + -32) = edx;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    if (CMP_EQ(MEM32(ebp + 0x10), esi)) goto loc_0042F01D; /* je: equal / zero */

loc_0042EFF1: ;
    if (CMP_EQ(MEM32(ebp + 0x10), esi)) goto loc_0042F015; /* je: equal / zero */

loc_0042EFF6: ;
    SET_LO16(ecx, MEM16(edx));
    if (CMP_EQ(LO16(ecx), LO16(esi))) goto loc_0042F010; /* je: equal / zero */

loc_0042EFFE: ;
    MEM16(eax) = LO16(ecx);
    eax++;
    eax++;
    MEM32(ebp + -28) = eax;
    edx++;
    edx++;
    MEM32(ebp + -32) = edx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    goto loc_0042EFF1;

loc_0042F010: ;
    if (CMP_NE(MEM32(ebp + 0x10), esi)) goto loc_0042F01A; /* jne: not equal / not zero */

loc_0042F015: ;
    eax--;
    eax--;
    MEM32(ebp + -28) = eax;

loc_0042F01A: ;
    MEM16(eax) = LO16(esi);

loc_0042F01D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_0042F033(); return; /* tail jmp 0x0042F033 */

}

/**
 * sub_0042F03B
 * Original: 0x0042F03B - 0x0042F075 (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F03B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F03B: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x561688);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042F047: ;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_0042F06B; /* je: equal / zero */

loc_0042F04D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0042F059: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_0042F06D;

    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

loc_0042F06B: ;
    eax = 0; /* xor self */

loc_0042F06D: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042F072: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F075
 * Original: 0x0042F075 - 0x0042F094 (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F075(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F075: ;
    PUSH32(esp, 0); sub_00430742(); /* call 0x00430742 */

loc_0042F07A: ;
    PUSH32(esp, 0); sub_0042F732(); /* call 0x0042F732 */

loc_0042F07F: ;
    eax = MEM32(0x20);
    eax = MEM32(eax + 0x250);
    if (TEST_Z(eax, eax)) { sub_0042F094(); return; } /* je: equal / zero */

loc_0042F08F: ;
    ecx = MEM32(eax + 0x24);
    g_seh_ebp = ebp; sub_0042F096(); return; /* tail jmp 0x0042F096 */

}

/**
 * sub_0042F094
 * Original: 0x0042F094 - 0x0042F096 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F094(void)
{

loc_0042F094: ;
    ecx = 0; /* xor self */
    sub_0042F096(); return; /* seeded fallthrough continuation */

}

/**
 * sub_0042F096
 * Original: 0x0042F096 - 0x0042F0E9 (83 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F096(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042F096: ;
    if (TEST_Z(ecx, ecx)) goto loc_0042F0C1; /* je: equal / zero */

loc_0042F09A: ;
    PUSH32(esp, edi);
    eax = MEM32(0x28);
    edi = MEM32(4);
    edx = MEM32(0x75F014);
    edx = MEM32(edi + edx * 4);
    edx = edx - MEM32(eax + 0x28);
    MEM8(ecx) = 1;
    edx = edx + 8;
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);

loc_0042F0C1: ;
    PUSH32(esp, 0); sub_004306B5(); /* call 0x004306B5 */

loc_0042F0C6: ;
    PUSH32(esp, 0); sub_0043065D(); /* call 0x0043065D */

loc_0042F0CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002A3670(); /* call 0x002A3670 */

loc_0042F0D6: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0042F6BC(); /* call 0x0042F6BC */

loc_0042F0E4: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * xbe_entry_point
 * Original: 0x0042F0E9 - 0x0042F15B (114 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xbe_entry_point(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042F0E9: ;
    ecx = MEM32(0x10118);
    eax = MEM32(0x10108);
    eax = eax - ecx;
    eax = eax + 0x10000;
    if (CMP_AE(eax, MEM32(ecx))) goto loc_0042F101; /* jae: above or equal (unsigned >=) */

loc_0042F0FF: ;
    MEM32(ecx) = eax;

loc_0042F101: ;
    eax = MEM32(0x5616A4);
    eax = eax - MEM32(0x561694);
    ecx = MEM32(0x561698);
    PUSH32(esp, esi);
    eax = eax + ecx + 0xF;
    PUSH32(esp, edi);
    eax = eax & 0xFFFFFFF0u;
    PUSH32(esp, 0xFFFFFFFCu);
    POP32(esp, ecx);
    eax = eax + 4;
    MEM32(0x87CA68) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(0x56169C);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x42F075);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_0042DFDA(); /* call 0x0042DFDA */

loc_0042F142: ;
    edi = eax;
    if (CMP_NE(edi, esi)) goto loc_0042F152; /* jne: not equal / not zero */

loc_0042F148: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0042F6BC(); /* call 0x0042F6BC */

loc_0042F152: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0042F158: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0042F15B
 * Original: 0x0042F15B - 0x0042F17D (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F15B(void)
{
    uint32_t ebp;

loc_0042F15B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_0042F172: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561054), _icall_esp); /* indirect call */
    }

loc_0042F179: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0042F17E
 * Original: 0x0042F17E - 0x0042F1A6 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F17E(void)
{

loc_0042F17E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042F18E: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 4) = esi;
    MEM32(eax) = 0xFFFFFFFCu;
    MEM32(eax + 8) = 0x80;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042F1A6
 * Original: 0x0042F1A6 - 0x0042F1B3 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F1A6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F1A6: ;
    eax = MEM32(esp + 8);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_0042F1B3(); return; } /* jne: not equal / not zero */

loc_0042F1AF: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042F1D1(); return; /* tail jmp 0x0042F1D1 */

}

/**
 * sub_0042F1D4
 * Original: 0x0042F1D4 - 0x0042F24C (120 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F1D4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042F1D4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, 0x800021);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 3);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042F20A: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_0042F245; /* jl: less (signed <) */

loc_0042F210: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561034), _icall_esp); /* indirect call */
    }

loc_0042F225: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042F230: ;
    if (TEST_S(esi, esi)) goto loc_0042F245; /* jl: less (signed <) */

loc_0042F234: ;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -24));
    if (CMP_EQ(eax, MEM32(ebp + 0xC))) goto loc_0042F245; /* je: equal / zero */

loc_0042F240: ;
    esi = 0xC000014Fu;

loc_0042F245: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042F24C
 * Original: 0x0042F24C - 0x0042F320 (212 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F24C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042F24C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi;
    esi = eax + 1;
    ebx = 0; /* xor self */

loc_0042F25F: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0042F25F; /* jne: not equal / not zero */

loc_0042F266: ;
    ecx = MEM32(ebp + 0x10);
    eax = eax - esi;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = eax + edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0042F27A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042F285: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -16;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = ebx;
    MEM32(ebp + -20) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56105C), _icall_esp); /* indirect call */
    }

loc_0042F2B5: ;
    edi = eax;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM8(esi) = LO8(ebx);
    if (CMP_L(edi, ebx)) { sub_0042F320(); return; } /* jl: less (signed <) */

loc_0042F2BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -84;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561030), _icall_esp); /* indirect call */
    }

loc_0042F2D2: ;
    edi = eax;
    if (CMP_L(edi, ebx)) goto loc_0042F315; /* jl: less (signed <) */

loc_0042F2D8: ;
    if (CMP_NE(MEM32(ebp + -44), ebx)) goto loc_0042F315; /* jne: not equal / not zero */

loc_0042F2DD: ;
    if (CMP_NE(MEM32(ebp + -40), ebx)) goto loc_0042F315; /* jne: not equal / not zero */

loc_0042F2E2: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042E0BC(); /* call 0x0042E0BC */

loc_0042F2EA: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_0042F315; /* je: equal / zero */

loc_0042F2F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042E131(); /* call 0x0042E131 */

loc_0042F2F9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561028), _icall_esp); /* indirect call */
    }

loc_0042F30B: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = eax;
    PUSH32(esp, 0); sub_0042E0DD(); /* call 0x0042E0DD */

loc_0042F315: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042F31E: ;
    g_seh_ebp = ebp; sub_0042F32A(); return; /* tail jmp 0x0042F32A */

}

/**
 * sub_0042F333
 * Original: 0x0042F333 - 0x0042F38A (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F333(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042F333: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x284;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4021);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    edi = 0x80;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -8) = 0x40;
    MEM32(ebp + -12) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56105C), _icall_esp); /* indirect call */
    }

loc_0042F378: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(eax, ebx)) { sub_0042F38A(); return; } /* jl: less (signed <) */

loc_0042F37F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042F388: ;
    g_seh_ebp = ebp; sub_0042F394(); return; /* tail jmp 0x0042F394 */

}

/**
 * sub_0042F667
 * Original: 0x0042F667 - 0x0042F6BC (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F667(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042F667: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, 0x561400);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0042F67E: ;
    esp = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6510C4);
    PUSH32(esp, 0x6510BC);
    PUSH32(esp, 0); sub_0042F333(); /* call 0x0042F333 */

loc_0042F69A: ;
    if (TEST_S(eax, eax)) goto loc_0042F6B8; /* jl: less (signed <) */

loc_0042F69E: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -12;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6510D4);
    PUSH32(esp, 0x6510CC);
    PUSH32(esp, 0); sub_0042F333(); /* call 0x0042F333 */

loc_0042F6B8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042F6BC
 * Original: 0x0042F6BC - 0x0042F718 (92 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F6BC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042F6BC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC00;
    eax = MEM32(0x10118);
    if (CMP_EQ(MEM32(eax + 8), 0xFFFE0000u)) { sub_0042F718(); return; } /* je: equal / zero */

loc_0042F6D3: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x300;
    edi = ebp + -3072;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -3068) = MEM32(ebp + -3068) & 0;
    MEM32(ebp + -3072) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -3064) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -3060) = eax;
    eax = ebp + -3072;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0042E3DB(); /* call 0x0042E3DB */

loc_0042F713: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042F721
 * Original: 0x0042F721 - 0x0042F732 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F721(void)
{

loc_0042F721: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_0042F1D4(); /* call 0x0042F1D4 */

loc_0042F72F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F732
 * Original: 0x0042F732 - 0x0042F7DF (173 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F732(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042F732: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    ebx++;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0x6515A8);
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56112C), _icall_esp); /* indirect call */
    }

loc_0042F74F: ;
    PUSH32(esp, 0); sub_00432F34(); /* call 0x00432F34 */

loc_0042F754: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -52;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -52;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ebp + -52) = 0x30;
    PUSH32(esp, MEM32(0x10138));
    PUSH32(esp, MEM32(0x10134));
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00431A46(); /* call 0x00431A46 */

loc_0042F780: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x87CA54) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0042F7D9; /* je: equal / zero */

loc_0042F789: ;
    if (TEST_NZ(MEM8(0x10124), 8)) goto loc_0042F7B4; /* jne: not equal / not zero */

loc_0042F792: ;
    PUSH32(esp, 0x6510B4);
    PUSH32(esp, 0); sub_0042F721(); /* call 0x0042F721 */

loc_0042F79C: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0042F7B4; /* jge: greater or equal (signed >=) */

loc_0042F7A0: ;
    PUSH32(esp, 2);
    eax = ebx;
    POP32(esp, ecx);

loc_0042F7A5: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042F6BC(); /* call 0x0042F6BC */

loc_0042F7AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0042F7B4: ;
    eax = MEM32(0x561128);
    if (TEST_NZ(MEM8(eax), 8)) { sub_0042F7DF(); return; } /* jne: not equal / not zero */

loc_0042F7BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6510AC);
    PUSH32(esp, 0x6510A4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561078), _icall_esp); /* indirect call */
    }

loc_0042F7CE: ;
    if (CMP_GE(eax, edi)) { sub_0042F7DF(); return; } /* jge: greater or equal (signed >=) */

loc_0042F7D2: ;
    if (CMP_EQ(eax, 0xC0000035u)) { sub_0042F7DF(); return; } /* je: equal / zero */

loc_0042F7D9: ;
    eax = ebx;
    ecx = ebx;
    goto loc_0042F7A5;

}

/**
 * sub_0042F8A1
 * Original: 0x0042F8A1 - 0x0042F8E5 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F8A1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042F8A1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x70;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    MEM32(ebp + -52) = eax;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100003);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -56) = edi;
    MEM32(ebp + -48) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042F8D4: ;
    if (CMP_GE(eax, edi)) { sub_0042F8E5(); return; } /* jge: greater or equal (signed >=) */

loc_0042F8D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042F8DE: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042FBC0(); return; /* tail jmp 0x0042FBC0 */

}

/**
 * sub_0042FBC5
 * Original: 0x0042FBC5 - 0x0042FD42 (381 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FBC5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0042FBC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    MEM8(ebp + -8) = 1;
    PUSH32(esp, ebx);

loc_0042FBD5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x146);
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56106C), _icall_esp); /* indirect call */
    }

loc_0042FBF3: ;
    edi = eax;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM8(ebp + -8) = LO8(ebx);
    if (CMP_L(edi, ebx)) goto loc_0042FCE1; /* jl: less (signed <) */

loc_0042FC00: ;
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(esi + 0x38);
    MEM8(eax + esi + 0x40) = 0;
    eax = esi + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    ebx = ebx >> 4;
    PUSH32(esp, eax);
    SET_LO8(ebx, LO8(ebx) & 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042FC1F: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -24;
    MEM32(ebp + -32) = ecx;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, 0x40);
    MEM32(ebp + -36) = eax;
    POP32(esp, eax);
    MEM32(ebp + -28) = eax;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0xFFFFFFC1u;
    ecx = ecx + eax;
    ecx = ecx | 0x4000;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    eax = eax | 0x110100;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042FC64: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0042FCE1; /* jl: less (signed <) */

loc_0042FC6A: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0042FC79; /* je: equal / zero */

loc_0042FC6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_0042FBC5(); /* call 0x0042FBC5 */

loc_0042FC77: ;
    goto loc_0042FCD0;

loc_0042FC79: ;
    edx = MEM32(esi + 0x38);
    if (TEST_Z(LO8(edx), 1)) goto loc_0042FCB1; /* je: equal / zero */

loc_0042FC81: ;
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edi = ebp + -76;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0x28);
    eax = ebp + -76;
    PUSH32(esp, eax);
    eax = ebp + -16;
    edx = edx & 0x3126;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    edx = edx | 0x80;
    MEM32(ebp + -44) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56102C), _icall_esp); /* indirect call */
    }

loc_0042FCAF: ;
    edi = eax;

loc_0042FCB1: ;
    if (TEST_S(edi, edi)) goto loc_0042FCD0; /* jl: less (signed <) */

loc_0042FCB5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0xF;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM8(ebp + 0xF) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56102C), _icall_esp); /* indirect call */
    }

loc_0042FCCE: ;
    edi = eax;

loc_0042FCD0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042FCD9: ;
    if (CMP_GE(edi & edi, 0)) goto loc_0042FBD5; /* jge: greater or equal (signed >=) */

loc_0042FCE1: ;
    (void)0; /* cmp edi, 0x80000006u - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(edi, 0x80000006u)) goto loc_0042FCF2; /* je: equal / zero */

loc_0042FCEA: ;
    if (CMP_NE(edi, 0xC000000Fu)) goto loc_0042FD3A; /* jne: not equal / not zero */

loc_0042FCF2: ;
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -76;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x38);
    esi = MEM32(0x56102C);
    eax = eax & 0x3126;
    eax = eax | 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + -44) = eax;
    PUSH32(esp, 0x28);
    eax = ebp + -76;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0042FD23: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0xF;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM8(ebp + 0xF) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0042FD38: ;
    edi = eax;

loc_0042FD3A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042FD42
 * Original: 0x0042FD42 - 0x0042FDB1 (111 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FD42(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042FD42: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x164;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042FD59: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    eax = ebp + -20;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 3);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x110101);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042FD8A: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_0042FDAA; /* jl: less (signed <) */

loc_0042FD90: ;
    eax = ebp + -356;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042FBC5(); /* call 0x0042FBC5 */

loc_0042FD9F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042FDAA: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042FDB1
 * Original: 0x0042FDB1 - 0x0042FDF1 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FDB1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042FDB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x561840);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0042FDCA: ;
    esp = esp + 0x10;
    if (CMP_GE(eax & eax, 0)) { sub_0042FDF1(); return; } /* jge: greater or equal (signed >=) */

loc_0042FDD1: ;
    eax = MEM32(esp + 8);
    edx = eax + 1;

loc_0042FDD8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042FDD8; /* jne: not equal / not zero */

loc_0042FDDF: ;
    eax = eax - edx;
    eax = eax + 7;
    PUSH32(esp, 0x7A);
    MEM32(esi) = eax;
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042FDED: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042FDF7(); return; /* tail jmp 0x0042FDF7 */

}

/**
 * sub_0042FDFB
 * Original: 0x0042FDFB - 0x0042FE7A (127 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FDFB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042FDFB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x561060);
    PUSH32(esp, edi);
    edi = 0x651510;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0042FE18: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0042FE1F: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) - 1;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042F721(); /* call 0x0042F721 */

loc_0042FE2C: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0042FE4F; /* jl: less (signed <) */

loc_0042FE32: ;
    esi = 0x651560;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561084), _icall_esp); /* indirect call */
    }

loc_0042FE3E: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561078), _icall_esp); /* indirect call */
    }

loc_0042FE49: ;
    edi = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_0042FE73; /* jge: greater or equal (signed >=) */

loc_0042FE4F: ;
    esi = MEM32(0x561054);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0042FE58: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_G(eax & eax, 0)) goto loc_0042FE63; /* jg: greater (signed >) */

loc_0042FE5D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0042FE5F: ;
    ebx = eax;
    goto loc_0042FE73;

loc_0042FE63: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0042FE65: ;
    ebx = eax;
    ebx = ebx & 0xFFFF;
    ebx = ebx | 0x80070000u;

loc_0042FE73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0042FE7A
 * Original: 0x0042FE7A - 0x0042FF46 (204 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FE7A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042FE7A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x188;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0x8000080);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_0042FEA2: ;
    edi = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0042FF0F; /* je: equal / zero */

loc_0042FEA9: ;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ebx = 0x178;
    PUSH32(esp, ebx);
    eax = ebp + -392;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_0042FEC1: ;
    if (TEST_Z(eax, eax)) goto loc_0042FF0F; /* je: equal / zero */

loc_0042FEC5: ;
    if (CMP_NE(MEM32(ebp + 8), ebx)) goto loc_0042FF08; /* jne: not equal / not zero */

loc_0042FECA: ;
    eax = MEM32(ebp + -112);
    if (CMP_B(eax, MEM32(ebp + -132))) goto loc_0042FF08; /* jb: below (unsigned <) */

loc_0042FED5: ;
    eax = eax - MEM32(ebp + -132);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0); sub_0042BECB(); /* call 0x0042BECB */

loc_0042FEE7: ;
    if (TEST_Z(eax, eax)) goto loc_0042FF0F; /* je: equal / zero */

loc_0042FEEB: ;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    esi = 0x1D0;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_0042FEFF: ;
    if (TEST_Z(eax, eax)) goto loc_0042FF0F; /* je: equal / zero */

loc_0042FF03: ;
    if (CMP_EQ(MEM32(ebp + 8), esi)) goto loc_0042FF31; /* je: equal / zero */

loc_0042FF08: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042FF0F: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0042FF14: ;
    if (CMP_G(eax & eax, 0)) goto loc_0042FF1F; /* jg: greater (signed >) */

loc_0042FF18: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0042FF1D: ;
    goto loc_0042FF2E;

loc_0042FF1F: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0042FF24: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;

loc_0042FF2E: ;
    MEM32(ebp + -4) = eax;

loc_0042FF31: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0042FF3C; /* je: equal / zero */

loc_0042FF36: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0042FF3C: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042FF46
 * Original: 0x0042FF46 - 0x0042FFC7 (129 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FF46(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042FF46: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x428;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM8(ebp + -544) = 0;
    MEM32(ebp + -16) = 0x40;
    MEM32(ebp + -20) = 0x6510A4;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561080), _icall_esp); /* indirect call */
    }

loc_0042FF77: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = 0x208;
    if (TEST_S(eax, eax)) { sub_0042FFC7(); return; } /* jl: less (signed <) */

loc_0042FF80: ;
    MEM16(ebp + -12) = MEM16(ebp + -12) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -1064;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM16(ebp + -10) = LO16(esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56107C), _icall_esp); /* indirect call */
    }

loc_0042FFA2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    edi = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042FFAD: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_S(edi, edi)) { sub_0042FFC7(); return; } /* jl: less (signed <) */

loc_0042FFB2: ;
    eax = ZX16(MEM16(ebp + -12));
    eax++;
    if (CMP_BE(eax, esi)) goto loc_0042FFBD; /* jbe: below or equal (unsigned <=) */

loc_0042FFBB: ;
    eax = esi;

loc_0042FFBD: ;
    PUSH32(esp, eax);
    eax = ebp + -1064;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_0042FFCD(); return; /* tail jmp 0x0042FFCD */

}

/**
 * sub_0042FFFF
 * Original: 0x0042FFFF - 0x00430045 (70 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FFFF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042FFFF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = MEM32(edx) | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    MEM32(esi) = eax;
    ecx = MEM32(0x561110);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, eax)) { sub_00430045(); return; } /* je: equal / zero */

loc_0043001B: ;
    ecx = MEM32(ecx);
    if (CMP_EQ(ecx, eax)) { sub_00430045(); return; } /* je: equal / zero */

loc_00430021: ;
    edi = ecx;
    ecx = edi + 0x214;
    if (TEST_Z(MEM8(ecx), 1)) goto loc_0043003F; /* je: equal / zero */

loc_0043002E: ;
    ecx = ecx + 4;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    ecx = ecx + 4;
    eax = 0; /* xor self */
    MEM32(esi) = ecx;
    eax++;
    g_seh_ebp = ebp; sub_00430048(); return; /* tail jmp 0x00430048 */

loc_0043003F: ;
    ecx = MEM32(edi);
    MEM32(edx) = ecx;
    g_seh_ebp = ebp; sub_00430048(); return; /* tail jmp 0x00430048 */

}

/**
 * sub_00430063
 * Original: 0x00430063 - 0x004300E2 (127 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430063(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00430063: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x21C;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM8(edi) = 0;
    MEM32(ebp + -12) = 0x40;
    MEM32(ebp + -16) = 0x6510A4;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561080), _icall_esp); /* indirect call */
    }

loc_00430093: ;
    if (TEST_S(eax, eax)) { sub_004300E2(); return; } /* jl: less (signed <) */

loc_00430097: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ebp + -540;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM16(ebp + -6) = 0x208;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56107C), _icall_esp); /* indirect call */
    }

loc_004300BB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_004300C6: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_S(esi, esi)) { sub_004300E2(); return; } /* jl: less (signed <) */

loc_004300CB: ;
    eax = ZX16(MEM16(ebp + -8));
    eax++;
    if (CMP_AE(MEM32(ebp + 0xC), eax)) goto loc_004300D8; /* jae: above or equal (unsigned >=) */

loc_004300D5: ;
    eax = MEM32(ebp + 0xC);

loc_004300D8: ;
    PUSH32(esp, eax);
    eax = ebp + -540;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_004300EA(); return; /* tail jmp 0x004300EA */

}

/**
 * sub_004300F5
 * Original: 0x004300F5 - 0x00430176 (129 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004300F5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004300F5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(0x561110);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = eax + 1;

loc_00430107: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00430107; /* jne: not equal / not zero */

loc_0043010E: ;
    eax = eax - ecx;
    ecx = eax + 1;
    eax = MEM32(ebp + 0xC);
    edi = eax + 1;

loc_00430119: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00430119; /* jne: not equal / not zero */

loc_00430120: ;
    eax = eax - edi;
    eax = eax + ecx + 8;
    if (CMP_AE(eax, 0x1EC)) goto loc_00430170; /* jae: above or equal (unsigned >=) */

loc_0043012D: ;
    eax = esi + 0x214;
    MEM16(eax) = 1;
    eax++;
    eax++;
    MEM16(eax) = LO16(ecx);
    edx = MEM32(esi);
    eax++;
    eax++;
    MEM32(eax) = edx;
    eax = eax + 4;
    if (CMP_NE(MEM32(esi), 0xFFFFFFFFu)) goto loc_0043014E; /* jne: not equal / not zero */

loc_0043014B: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_0043014E: ;
    esi = MEM32(ebp + 8);
    edi = eax;
    edi = edi - esi;

loc_00430155: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + esi) = LO8(edx);
    esi++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00430155; /* jne: not equal / not zero */

loc_0043015F: ;
    edx = MEM32(ebp + 0xC);
    eax = eax + ecx;
    eax = eax - edx;

loc_00430166: ;
    SET_LO8(ecx, MEM8(edx));
    MEM8(eax + edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00430166; /* jne: not equal / not zero */

loc_00430170: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00430176
 * Original: 0x00430176 - 0x004302F8 (386 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430176(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00430176: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    esp = esp - 0x45C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x56185C);
    ebx = ebx | 0xFFFFFFFFu;
    MEM32(ebp + 0x64) = 0x104;
    PUSH32(esp, 0); sub_0042FDB1(); /* call 0x0042FDB1 */

loc_004301A3: ;
    if (TEST_Z(eax, eax)) goto loc_004302DC; /* je: equal / zero */

loc_004301AB: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_004301C5: ;
    ebx = eax;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_004302DC; /* je: equal / zero */

loc_004301D0: ;
    eax = ebp + -144;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042D478(); /* call 0x0042D478 */

loc_004301E2: ;
    if (TEST_Z(eax, eax)) goto loc_004302DC; /* je: equal / zero */

loc_004301EA: ;
    if (TEST_Z(MEM8(ebp + -112), 1)) goto loc_004302DC; /* je: equal / zero */

loc_004301F4: ;
    eax = 0; /* xor self */
    edi = ebp + 0x50;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0x44);
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + -92);
    POP32(esp, esi);
    (void)0; /* cmp MEM32(ebp + -88), esi - flags set for next jcc */
    MEM32(ebp + 0x58) = eax;
    if (CMP_NE(MEM32(ebp + -88), esi)) goto loc_004302DC; /* jne: not equal / not zero */

loc_00430210: ;
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_00430223: ;
    if (TEST_Z(eax, eax)) goto loc_004302DC; /* je: equal / zero */

loc_0043022B: ;
    if (CMP_NE(MEM32(ebp + 0x64), esi)) goto loc_004302DC; /* jne: not equal / not zero */

loc_00430234: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_00430240: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_00430251: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_00430261: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebp + -84;
    esi = ebp + 0x3C;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_004302DC; /* jne: not equal / not zero */

loc_00430270: ;
    ecx = MEM32(ebp + -8);
    if (CMP_A(ecx, 0x10)) goto loc_004302DC; /* ja: above (unsigned >) */

loc_00430278: ;
    if (CMP_BE(ecx & ecx, 0)) goto loc_0043028A; /* jbe: below or equal (unsigned <=) */

loc_0043027C: ;
    edx = MEM32(ebp + eax * 4 + -4);
    if (CMP_EQ(edx, MEM32(ebp + 0x78))) goto loc_0043028A; /* je: equal / zero */

loc_00430285: ;
    eax++;
    if (CMP_B(eax, ecx)) goto loc_0043027C; /* jb: below (unsigned <) */

loc_0043028A: ;
    if (CMP_EQ(eax, ecx)) goto loc_004302DC; /* je: equal / zero */

loc_0043028E: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    MEM32(ebp + 0x64) = 0x104;
    PUSH32(esp, 0); sub_0042FDB1(); /* call 0x0042FDB1 */

loc_004302A8: ;
    if (TEST_NZ(eax, eax)) goto loc_004302B8; /* jne: not equal / not zero */

loc_004302AC: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004302B1: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004302B6: ;
    goto loc_004302DC;

loc_004302B8: ;
    eax = ebp + -1012;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042FE7A(); /* call 0x0042FE7A */

loc_004302CB: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_004302DC; /* jl: less (signed <) */

loc_004302D1: ;
    eax = MEM32(ebp + 0x74);
    if (CMP_EQ(MEM32(ebp + -1004), eax)) goto loc_004302E1; /* je: equal / zero */

loc_004302DC: ;
    esi = 0x8007000Du;

loc_004302E1: ;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_004302EC; /* je: equal / zero */

loc_004302E6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004302EC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x68;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004302F8
 * Original: 0x004302F8 - 0x0043036F (119 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004302F8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004302F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1EC;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042FDFB(); /* call 0x0042FDFB */

loc_00430307: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    edi = 0x561898;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042FE7A(); /* call 0x0042FE7A */

loc_00430319: ;
    if (TEST_S(eax, eax)) goto loc_0043036A; /* jl: less (signed <) */

loc_0043031D: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + -320);
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0x561888);
    PUSH32(esp, 0); sub_0042FE7A(); /* call 0x0042FE7A */

loc_00430335: ;
    if (TEST_S(eax, eax)) goto loc_0043035E; /* jl: less (signed <) */

loc_00430339: ;
    if (CMP_B(MEM32(ebp + -320), esi)) goto loc_0043035E; /* jb: below (unsigned <) */

loc_00430341: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0x56186C);
    PUSH32(esp, 0); sub_0042FE7A(); /* call 0x0042FE7A */

loc_00430352: ;
    if (TEST_S(eax, eax)) goto loc_0043035E; /* jl: less (signed <) */

loc_00430356: ;
    if (CMP_AE(MEM32(ebp + -320), esi)) goto loc_00430369; /* jae: above or equal (unsigned >=) */

loc_0043035E: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042FF46(); /* call 0x0042FF46 */

loc_00430369: ;
    POP32(esp, esi);

loc_0043036A: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043036F
 * Original: 0x0043036F - 0x004303A7 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043036F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043036F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2D4;
    ecx = MEM32(0x10118);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    if (CMP_NE(esi, eax)) { sub_004303A7(); return; } /* jne: not equal / not zero */

loc_00430388: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ecx + 8));
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(ebp + 0xC), eax)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + -1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E562(); /* call 0x0042E562 */

loc_004303A2: ;
    g_seh_ebp = ebp; sub_004304EB(); return; /* tail jmp 0x004304EB */

}

/**
 * sub_004304F0
 * Original: 0x004304F0 - 0x00430655 (357 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004304F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004304F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0x1050;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004304FD: ;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    (void)0; /* cmp eax, 0xFFFE0000u - flags set for next jcc */
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(eax, 0xFFFE0000u)) goto loc_00430651; /* je: equal / zero */

loc_00430513: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -4176;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042FFFF(); /* call 0x0042FFFF */

loc_00430529: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    ebx = 0x168;
    if (TEST_NZ(eax, eax)) goto loc_0043054A; /* jne: not equal / not zero */

loc_00430535: ;
    PUSH32(esp, ebx);
    eax = ebp + -1104;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00430063(); /* call 0x00430063 */

loc_00430542: ;
    edi = ebp + -1104;
    goto loc_0043054D;

loc_0043054A: ;
    edi = MEM32(ebp + -12);

loc_0043054D: ;
    eax = edi;
    edx = eax + 1;

loc_00430552: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00430552; /* jne: not equal / not zero */

loc_00430559: ;
    eax = eax - edx;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x561130);
    ecx = ZX16(MEM16(eax));
    if (CMP_BE(ecx, esi)) goto loc_00430618; /* jbe: below or equal (unsigned <=) */

loc_0043056E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_00430578: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_00430618; /* jne: not equal / not zero */

loc_00430583: ;
    eax = MEM32(0x561130);
    ecx = ZX16(MEM16(eax));
    eax = MEM32(eax + 4);
    esi++;
    ecx = ecx - esi;
    PUSH32(esp, ecx);
    eax = eax + esi;
    PUSH32(esp, eax);
    eax = ebp + -384;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_004305A1: ;
    eax = MEM32(0x561130);
    eax = ZX16(MEM16(eax));
    eax = eax - esi;
    MEM8(ebp + eax + -384) = 0;
    eax = ebp + -384;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5618AC);
    PUSH32(esp, 0x5AC8A0);
    eax = ebp + -744;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_004305D1: ;
    esp = esp + 0x20;
    if (TEST_S(eax, eax)) goto loc_0043064E; /* jl: less (signed <) */

loc_004305D8: ;
    eax = MEM32(0x10118);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0xAC));
    eax = ebp + -384;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00430176(); /* call 0x00430176 */

loc_004305F4: ;
    if (TEST_S(eax, eax)) goto loc_00430618; /* jl: less (signed <) */

loc_004305F8: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    eax++;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ebp + -4176;
    PUSH32(esp, 0);
    eax = eax & ecx;
    PUSH32(esp, eax);
    eax = ebp + -744;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043036F(); /* call 0x0043036F */

loc_00430618: ;
    if (CMP_EQ(MEM32(ebp + -16), 0)) goto loc_0043064E; /* je: equal / zero */

loc_0043061E: ;
    eax = edi;
    edx = eax + 1;

loc_00430623: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00430623; /* jne: not equal / not zero */

loc_0043062A: ;
    eax = eax - edx;
    esi = 0x6510A4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM16(ebp + -8) = LO16(eax);
    MEM16(ebp + -6) = LO16(eax);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561084), _icall_esp); /* indirect call */
    }

loc_00430643: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561078), _icall_esp); /* indirect call */
    }

loc_0043064E: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00430651: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00430655
 * Original: 0x00430655 - 0x0043065D (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430655(void)
{

loc_00430655: ;
    eax = MEM32(0x561134);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0043065D
 * Original: 0x0043065D - 0x004306B5 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043065D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043065D: ;
    eax = MEM32(0x655658);
    if (TEST_Z(eax, eax)) goto loc_00430668; /* je: equal / zero */

loc_00430666: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00430668: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x65101C;
    edi = 0x651034;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    esi = eax;
    if (CMP_AE(eax, edi)) goto loc_0043068E; /* jae: above or equal (unsigned >=) */

loc_0043067A: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00430687; /* je: equal / zero */

loc_00430680: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00430687; /* je: equal / zero */

loc_00430685: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00430687: ;
    esi = esi + 4;
    if (CMP_B(esi, edi)) goto loc_0043067A; /* jb: below (unsigned <) */

loc_0043068E: ;
    esi = 0x64F990;
    eax = esi;
    edi = 0x651018;
    if (CMP_AE(eax, edi)) goto loc_004306B2; /* jae: above or equal (unsigned >=) */

loc_0043069E: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_004306AB; /* je: equal / zero */

loc_004306A4: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004306AB; /* je: equal / zero */

loc_004306A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004306AB: ;
    esi = esi + 4;
    if (CMP_B(esi, edi)) goto loc_0043069E; /* jb: below (unsigned <) */

loc_004306B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004306B5
 * Original: 0x004306B5 - 0x004306DE (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004306B5(void)
{
    int _flags = 0; /* fallback flag var */

loc_004306B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x64F980;
    edi = 0x64F98C;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    esi = eax;
    if (CMP_AE(eax, edi)) goto loc_004306DB; /* jae: above or equal (unsigned >=) */

loc_004306C7: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_004306D4; /* je: equal / zero */

loc_004306CD: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004306D4; /* je: equal / zero */

loc_004306D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004306D4: ;
    esi = esi + 4;
    if (CMP_B(esi, edi)) goto loc_004306C7; /* jb: below (unsigned <) */

loc_004306DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004306DE
 * Original: 0x004306DE - 0x00430742 (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004306DE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004306DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x8001003Cu);
    edx = 0x7FFF0000;
    eax = eax - edx;
    ecx = ZX16(MEM16(eax + 6));
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0x14));
    esi = esi + eax;
    ecx = ecx + ecx * 4;
    eax = esi + ecx * 8 + -16;
    (void)0; /* cmp MEM32(eax), 0x54494E49 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(MEM32(eax), 0x54494E49)) goto loc_00430740; /* jne: not equal / not zero */

loc_0043070A: ;
    eax = MEM32(eax + 0xC);
    MEM16(ebp + -6) = MEM16(ebp + -6) & 0;
    eax = eax - edx;
    eax = eax >> 0xC;
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ecx & 0xF;
    ecx = ecx << 0x10;
    ecx = ecx | 0xC09B00;
    PUSH32(esp, ecx);
    MEM16(ebp + -8) = LO16(eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_00433024(); /* call 0x00433024 */

loc_00430735: ;
    MEM32(0x87CA58) = eax;
    MEM32(0x87CA5C) = edx;

loc_00430740: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00430742
 * Original: 0x00430742 - 0x00430806 (196 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430742(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00430742: ;
    eax = MEM32(0x561128);
    eax = MEM32(eax);
    ecx = MEM32(0x561138);
    ecx = ZX16(MEM16(ecx + 4));
    eax = eax >> 1;
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & 1);
    (void)0; /* cmp ecx, 0xF68 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ecx, 0xF68)) goto loc_004307AD; /* je: equal / zero */

loc_00430762: ;
    if (CMP_EQ(ecx, 0xFC2)) goto loc_004307A2; /* je: equal / zero */

loc_0043076A: ;
    if (CMP_EQ(ecx, 0xFC7)) goto loc_00430792; /* je: equal / zero */

loc_00430772: ;
    if (CMP_LE(ecx, 0x12D0)) goto loc_004307F1; /* jle: less or equal (signed <=) */

loc_0043077A: ;
    if (CMP_G(ecx, 0x12D2)) goto loc_004307F1; /* jg: greater (signed >) */

loc_00430782: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFF1611u;
    eax = eax + 0x8003838Fu;
    goto loc_004307BB;

loc_00430792: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFF12CBu;
    eax = eax + 0x800398CDu;
    goto loc_004307BB;

loc_004307A2: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x8002AB88u;
    goto loc_004307BB;

loc_004307AD: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFF1471u;
    eax = eax + 0x80039749u;

loc_004307BB: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_004307F1; /* je: equal / zero */

loc_004307C1: ;
    if (CMP_NE(MEM32(esi), 0x20C5048D)) goto loc_004307F1; /* jne: not equal / not zero */

loc_004307C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610C0), _icall_esp); /* indirect call */
    }

loc_004307D2: ;
    edi = MEM32(0x5610B8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004307E1: ;
    /* TODO: cli  */
    MEM32(esi) = 0x28C5048D;
    /* TODO: sti  */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004307EF: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004307F1: ;
    eax = MEM32(0x20);
    (void)0; /* cmp MEM32(eax + 0x250), 0 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(MEM32(eax + 0x250), 0)) { sub_00430806(); return; } /* jne: not equal / not zero */

loc_00430801: ;
    g_seh_ebp = ebp; sub_004306DE(); return; /* tail jmp 0x004306DE */

}

/**
 * sub_00430807
 * Original: 0x00430807 - 0x00430828 (33 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430807(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00430807: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_0043081F: ;
    if (TEST_S(eax, eax)) { sub_00430828(); return; } /* jl: less (signed <) */

loc_00430823: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0043082C
 * Original: 0x0043082C - 0x0043087B (79 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043082C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043082C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x10);
    eax = eax & 5;
    ecx = 0x1000;
    eax = eax | ecx;
    if (CMP_AE(edx, ecx)) goto loc_0043084E; /* jae: above or equal (unsigned >=) */

loc_00430843: ;
    if (TEST_NZ(edx, edx)) goto loc_0043084C; /* jne: not equal / not zero */

loc_00430847: ;
    eax = eax | 2;
    goto loc_00430856;

loc_0043084C: ;
    edx = ecx;

loc_0043084E: ;
    if (CMP_BE(MEM32(ebp + 0xC), edx)) goto loc_00430856; /* jbe: below or equal (unsigned <=) */

loc_00430853: ;
    edx = MEM32(ebp + 0xC);

loc_00430856: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00431A46(); /* call 0x00431A46 */

loc_00430867: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_00430874; /* jne: not equal / not zero */

loc_0043086D: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_00430874: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043087B
 * Original: 0x0043087B - 0x0043088B (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043087B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043087B: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_0043103B(); /* call 0x0043103B */

loc_00430884: ;
    if (TEST_NZ(eax, eax)) { sub_0043088B(); return; } /* jne: not equal / not zero */

loc_00430888: ;
    eax++;
    g_seh_ebp = ebp; sub_00430894(); return; /* tail jmp 0x00430894 */

}

/**
 * sub_00430897
 * Original: 0x00430897 - 0x004308AE (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430897(void)
{

loc_00430897: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_004325E5(); /* call 0x004325E5 */

loc_004308A8: ;
    eax = ZX8(LO8(eax));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004308AE
 * Original: 0x004308AE - 0x004308B4 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004308AE(void)
{

loc_004308AE: ;
    eax = MEM32(0x87CA54);
    esp += 4; return; /* ret */

}

/**
 * sub_004308B4
 * Original: 0x004308B4 - 0x004308D1 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004308B4(void)
{

loc_004308B4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    eax = eax >> 3;
    eax = eax & 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x87CA54));
    PUSH32(esp, 0); sub_00431E6A(); /* call 0x00431E6A */

loc_004308CE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004308D1
 * Original: 0x004308D1 - 0x004308EF (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004308D1(void)
{
    int _cf = 0; /* carry flag */

loc_004308D1: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x87CA54));
    PUSH32(esp, 0); sub_004325E5(); /* call 0x004325E5 */

loc_004308E2: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    eax = eax & MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004308EF
 * Original: 0x004308EF - 0x00430A0F (288 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004308EF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004308EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = eax + 0x4C;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ecx), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ecx), ebx)) goto loc_00430A02; /* jne: not equal / not zero */

loc_0043090B: ;
    ecx = MEM32(eax + 0x48);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (CMP_EQ(ecx, ebx)) goto loc_0043095B; /* je: equal / zero */

loc_00430915: ;
    eax = MEM32(ecx + 8);
    if (CMP_EQ(eax, MEM32(ecx + 4))) goto loc_0043095B; /* je: equal / zero */

loc_0043091D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = 0x1000;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    edx = MEM32(ecx + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -12;
    edx = edx + ecx;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561118), _icall_esp); /* indirect call */
    }

loc_0043093F: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0043094A; /* jge: greater or equal (signed >=) */

loc_00430943: ;
    eax = 0; /* xor self */
    goto loc_00430A08;

loc_0043094A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax + 8) = MEM32(eax + 8) + ecx;
    eax = MEM32(ebp + 8);
    goto loc_004309DF;

loc_0043095B: ;
    edi = MEM32(0x561118);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = 0x10000;
    MEM32(ebp + 8) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0043097D: ;
    if (TEST_S(eax, eax)) goto loc_00430943; /* jl: less (signed <) */

loc_00430981: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = 0x1000;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00430997: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004309B0; /* jge: greater or equal (signed >=) */

loc_0043099B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56111C), _icall_esp); /* indirect call */
    }

loc_004309AE: ;
    goto loc_00430943;

loc_004309B0: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x48);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x48) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = eax + 0x10;
    MEM32(ebp + -12) = ecx;

loc_004309DF: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + -12);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x18);
    eax = eax + 0x4C;
    goto loc_004309F6;

loc_004309EF: ;
    MEM32(eax) = edx;
    eax = edx;
    edx = edx + 0x10;

loc_004309F6: ;
    if (CMP_B(edx, ecx)) goto loc_004309EF; /* jb: below (unsigned <) */

loc_004309FA: ;
    MEM32(eax) = ebx;
    ecx = MEM32(esi + 0x18);
    ecx = ecx + 0x4C;

loc_00430A02: ;
    eax = MEM32(ecx);
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_00430A08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430A0F
 * Original: 0x00430A0F - 0x00430A30 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430A0F(void)
{

loc_00430A0F: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x4C);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(ecx + 0x4C) = eax;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00430A30
 * Original: 0x00430A30 - 0x00430A41 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430A30(void)
{
    uint32_t ebp;

loc_00430A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    ebx = esi + 0x38;
    g_seh_ebp = ebp; sub_00430A77(); return; /* tail jmp 0x00430A77 */

}

/**
 * sub_00430AC3
 * Original: 0x00430AC3 - 0x00430B09 (70 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430AC3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00430AC3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi + 0x38;
    esi = MEM32(eax);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (TEST_Z(esi, esi)) goto loc_00430B00; /* je: equal / zero */

loc_00430ADE: ;
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x14);

loc_00430AE6: ;
    if (CMP_B(MEM32(esi + 8), eax)) goto loc_00430AF4; /* jb: below (unsigned <) */

loc_00430AEB: ;
    if (TEST_Z(ecx, ecx)) { sub_00430B09(); return; } /* je: equal / zero */

loc_00430AEF: ;
    if (CMP_EQ(MEM32(esi + 4), ecx)) { sub_00430B09(); return; } /* je: equal / zero */

loc_00430AF4: ;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = esi;
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_00430AE6; /* jne: not equal / not zero */

loc_00430B00: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00430C4E
 * Original: 0x00430C4E - 0x00430C7A (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430C4E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00430C4E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    if (TEST_NZ(MEM8(eax + 0x14), 1)) { sub_00430C7A(); return; } /* jne: not equal / not zero */

loc_00430C5B: ;
    eax = MEM32(eax + 0x20);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    MEM32(ebp + -4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56111C), _icall_esp); /* indirect call */
    }

loc_00430C78: ;
    g_seh_ebp = ebp; sub_00430C7C(); return; /* tail jmp 0x00430C7C */

}

/**
 * sub_00430C80
 * Original: 0x00430C80 - 0x00430F25 (677 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00430C80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(edi + 2));
    eax = eax << 4;
    esi = edi;
    esi = esi - eax;
    if (CMP_EQ(esi, edi)) goto loc_00430DD8; /* je: equal / zero */

loc_00430C9F: ;
    if (TEST_NZ(MEM8(esi + 5), 1)) goto loc_00430DD8; /* jne: not equal / not zero */

loc_00430CA9: ;
    ecx = ZX16(MEM16(esi));
    eax = MEM32(ebp + 0x10);
    ecx = ecx + MEM32(eax);
    if (CMP_A(ecx, 0xFF00)) goto loc_00430DDB; /* ja: above (unsigned >) */

loc_00430CBD: ;
    if (CMP_EQ(MEM8(ebp + 0x14), 0)) goto loc_00430D32; /* je: equal / zero */

loc_00430CC3: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0xC);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(ecx, edx)) goto loc_00430CF7; /* jne: not equal / not zero */

loc_00430CD2: ;
    SET_LO16(ecx, MEM16(edi));
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_00430CF7; /* jae: above or equal (unsigned >=) */

loc_00430CDC: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_00430CF7: ;
    SET_LO8(ecx, MEM8(edi + 5));
    if (TEST_Z(LO8(ecx), 4)) goto loc_00430D28; /* je: equal / zero */

loc_00430CFF: ;
    eax = ZX16(MEM16(edi));
    eax = eax << 4;
    eax = eax - 0x18;
    if (TEST_Z(LO8(ecx), 2)) goto loc_00430D15; /* je: equal / zero */

loc_00430D0D: ;
    if (CMP_BE(eax, 4)) goto loc_00430D15; /* jbe: below or equal (unsigned <=) */

loc_00430D12: ;
    eax = eax - 4;

loc_00430D15: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56113C), _icall_esp); /* indirect call */
    }

loc_00430D25: ;
    eax = MEM32(ebp + 0x10);

loc_00430D28: ;
    ecx = ZX16(MEM16(edi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    MEM8(ebp + 0x14) = 0;

loc_00430D32: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(ecx, edx)) goto loc_00430D66; /* jne: not equal / not zero */

loc_00430D41: ;
    SET_LO16(ecx, MEM16(esi));
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_00430D66; /* jae: above or equal (unsigned >=) */

loc_00430D4B: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_00430D66: ;
    SET_LO8(ecx, MEM8(esi + 5));
    if (TEST_Z(LO8(ecx), 4)) goto loc_00430D97; /* je: equal / zero */

loc_00430D6E: ;
    eax = ZX16(MEM16(esi));
    eax = eax << 4;
    eax = eax - 0x18;
    if (TEST_Z(LO8(ecx), 2)) goto loc_00430D84; /* je: equal / zero */

loc_00430D7C: ;
    if (CMP_BE(eax, 4)) goto loc_00430D84; /* jbe: below or equal (unsigned <=) */

loc_00430D81: ;
    eax = eax - 4;

loc_00430D84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56113C), _icall_esp); /* indirect call */
    }

loc_00430D94: ;
    eax = MEM32(ebp + 0x10);

loc_00430D97: ;
    SET_LO8(ecx, MEM8(edi + 5));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    MEM8(esi + 5) = LO8(ecx);
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00430DB0; /* je: equal / zero */

loc_00430DA5: ;
    ecx = ZX8(MEM8(esi + 4));
    ecx = MEM32(ebx + ecx * 4 + 0x60);
    MEM32(ecx + 0x40) = esi;

loc_00430DB0: ;
    ecx = ZX16(MEM16(esi));
    MEM32(eax) = MEM32(eax) + ecx;
    ecx = ZX16(MEM16(esi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    (void)0; /* test MEM8(esi + 5), 0x10 - flags set for next jcc */
    SET_LO16(ecx, MEM16(eax));
    edi = esi;
    MEM16(esi) = LO16(ecx);
    if (TEST_NZ(MEM8(esi + 5), 0x10)) goto loc_00430DDB; /* jne: not equal / not zero */

loc_00430DC9: ;
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(eax));
    ecx = ecx << 4;
    MEM16(ecx + esi + 2) = LO16(edx);
    goto loc_00430DDB;

loc_00430DD8: ;
    eax = MEM32(ebp + 0x10);

loc_00430DDB: ;
    if (TEST_NZ(MEM8(edi + 5), 0x10)) goto loc_00430F1C; /* jne: not equal / not zero */

loc_00430DE5: ;
    ecx = MEM32(eax);
    esi = ecx;
    esi = esi << 4;
    esi = esi + edi;
    if (TEST_NZ(MEM8(esi + 5), 1)) goto loc_00430F1C; /* jne: not equal / not zero */

loc_00430DF8: ;
    edx = ZX16(MEM16(esi));
    edx = edx + ecx;
    if (CMP_A(edx, 0xFF00)) goto loc_00430F1C; /* ja: above (unsigned >) */

loc_00430E09: ;
    if (CMP_EQ(MEM8(ebp + 0x14), 0)) goto loc_00430E7A; /* je: equal / zero */

loc_00430E0F: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0xC);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(ecx, edx)) goto loc_00430E43; /* jne: not equal / not zero */

loc_00430E1E: ;
    SET_LO16(ecx, MEM16(edi));
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_00430E43; /* jae: above or equal (unsigned >=) */

loc_00430E28: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_00430E43: ;
    SET_LO8(ecx, MEM8(edi + 5));
    if (TEST_Z(LO8(ecx), 4)) goto loc_00430E74; /* je: equal / zero */

loc_00430E4B: ;
    eax = ZX16(MEM16(edi));
    eax = eax << 4;
    eax = eax - 0x18;
    if (TEST_Z(LO8(ecx), 2)) goto loc_00430E61; /* je: equal / zero */

loc_00430E59: ;
    if (CMP_BE(eax, 4)) goto loc_00430E61; /* jbe: below or equal (unsigned <=) */

loc_00430E5E: ;
    eax = eax - 4;

loc_00430E61: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56113C), _icall_esp); /* indirect call */
    }

loc_00430E71: ;
    eax = MEM32(ebp + 0x10);

loc_00430E74: ;
    ecx = ZX16(MEM16(edi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;

loc_00430E7A: ;
    SET_LO8(ecx, MEM8(esi + 5));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    MEM8(edi + 5) = LO8(ecx);
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00430E93; /* je: equal / zero */

loc_00430E88: ;
    ecx = ZX8(MEM8(edi + 4));
    ecx = MEM32(ebx + ecx * 4 + 0x60);
    MEM32(ecx + 0x40) = edi;

loc_00430E93: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(ecx, edx)) goto loc_00430EC7; /* jne: not equal / not zero */

loc_00430EA2: ;
    SET_LO16(ecx, MEM16(esi));
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_00430EC7; /* jae: above or equal (unsigned >=) */

loc_00430EAC: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    eax = eax + ebx + 0x160;
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    eax = MEM32(ebp + 0x10);

loc_00430EC7: ;
    SET_LO8(ecx, MEM8(esi + 5));
    if (TEST_Z(LO8(ecx), 4)) goto loc_00430EF8; /* je: equal / zero */

loc_00430ECF: ;
    eax = ZX16(MEM16(esi));
    eax = eax << 4;
    eax = eax - 0x18;
    if (TEST_Z(LO8(ecx), 2)) goto loc_00430EE5; /* je: equal / zero */

loc_00430EDD: ;
    if (CMP_BE(eax, 4)) goto loc_00430EE5; /* jbe: below or equal (unsigned <=) */

loc_00430EE2: ;
    eax = eax - 4;

loc_00430EE5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56113C), _icall_esp); /* indirect call */
    }

loc_00430EF5: ;
    eax = MEM32(ebp + 0x10);

loc_00430EF8: ;
    ecx = ZX16(MEM16(esi));
    MEM32(eax) = MEM32(eax) + ecx;
    ecx = ZX16(MEM16(esi));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    (void)0; /* test MEM8(edi + 5), 0x10 - flags set for next jcc */
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi) = LO16(ecx);
    if (TEST_NZ(MEM8(edi + 5), 0x10)) goto loc_00430F1C; /* jne: not equal / not zero */

loc_00430F0F: ;
    ecx = MEM32(eax);
    SET_LO16(eax, MEM16(eax));
    ecx = ecx << 4;
    MEM16(ecx + edi + 2) = LO16(eax);

loc_00430F1C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00430F25
 * Original: 0x00430F25 - 0x0043101F (250 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430F25(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00430F25: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(eax + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 2));
    ecx = ZX8(LO8(edx));
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + ecx * 4 + 0x60);
    MEM32(ebp + -8) = ecx;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 0xF) = LO8(ecx);
    ecx = MEM32(ebp + 0x10);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) + ecx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(ebp + -1) = LO8(edx);
    if (TEST_Z(ecx, ecx)) goto loc_0043100E; /* je: equal / zero */

loc_00430F5B: ;
    goto loc_00430F63;

loc_00430F5D: ;
    SET_LO8(edx, MEM8(ebp + -1));
    ecx = MEM32(ebp + 0x10);

loc_00430F63: ;
    if (CMP_BE(ecx, 0xFF00)) goto loc_00430F81; /* jbe: below or equal (unsigned <=) */

loc_00430F6B: ;
    (void)0; /* cmp ecx, 0xFF01 - flags set for next jcc */
    ebx = 0xFF00;
    if (CMP_NE(ecx, 0xFF01)) goto loc_00430F7B; /* jne: not equal / not zero */

loc_00430F78: ;
    ebx = ebx + 0xFFFFFFF0u;

loc_00430F7B: ;
    MEM8(eax + 5) = 0;
    goto loc_00430F89;

loc_00430F81: ;
    ebx = ecx;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    MEM8(eax + 5) = LO8(ecx);

loc_00430F89: ;
    MEM8(eax + 5) = MEM8(eax + 5) & 0xF8;
    (void)0; /* cmp LO16(ebx), 0x80 - flags set for next jcc */
    MEM16(eax + 2) = LO16(esi);
    MEM8(eax + 4) = LO8(edx);
    MEM16(eax) = LO16(ebx);
    if (CMP_AE(LO16(ebx), 0x80)) goto loc_00430FC9; /* jae: above or equal (unsigned >=) */

loc_00430F9E: ;
    ecx = ZX16(LO16(ebx));
    esi = edi + ecx * 8 + 0x180;
    if (CMP_NE(MEM32(esi), esi)) goto loc_00430FDF; /* jne: not equal / not zero */

loc_00430FAC: ;
    edx = ecx;
    edx = edx >> 3;
    edx = edx + edi + 0x160;
    MEM32(ebp + 8) = edx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    ecx = MEM32(ebp + 8);
    MEM8(ecx) = MEM8(ecx) | LO8(edx);
    goto loc_00430FDF;

loc_00430FC9: ;
    ecx = edi + 0x180;
    esi = MEM32(ecx);
    goto loc_00430FDB;

loc_00430FD3: ;
    if (CMP_BE(LO16(ebx), MEM16(esi + -8))) goto loc_00430FDF; /* jbe: below or equal (unsigned <=) */

loc_00430FD9: ;
    esi = MEM32(esi);

loc_00430FDB: ;
    if (CMP_NE(ecx, esi)) goto loc_00430FD3; /* jne: not equal / not zero */

loc_00430FDF: ;
    edx = MEM32(esi + 4);
    ecx = eax + 8;
    MEM32(ecx) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(edx) = ecx;
    MEM32(esi + 4) = ecx;
    ecx = ZX16(LO16(ebx));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ecx;
    ecx = ecx << 4;
    eax = eax + ecx;
    ecx = MEM32(ebp + -8);
    (void)0; /* cmp eax, MEM32(ecx + 0x2C) - flags set for next jcc */
    esi = ebx;
    if (CMP_AE(eax, MEM32(ecx + 0x2C))) goto loc_00431018; /* jae: above or equal (unsigned >=) */

loc_00431004: ;
    if (CMP_NE(MEM32(ebp + 0x10), 0)) goto loc_00430F5D; /* jne: not equal / not zero */

loc_0043100E: ;
    if (TEST_NZ(MEM8(ebp + 0xF), 0x10)) goto loc_00431018; /* jne: not equal / not zero */

loc_00431014: ;
    MEM16(eax + 2) = LO16(esi);

loc_00431018: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043101F
 * Original: 0x0043101F - 0x0043102E (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043101F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043101F: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(MEM8(eax + 5), 8)) { sub_0043102E(); return; } /* je: equal / zero */

loc_00431029: ;
    eax = eax + 0xFFFFFFE8u;
    g_seh_ebp = ebp; sub_00431038(); return; /* tail jmp 0x00431038 */

}

/**
 * sub_0043103B
 * Original: 0x0043103B - 0x004310CA (143 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043103B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043103B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (TEST_Z(edi, edi)) goto loc_004310C3; /* je: equal / zero */

loc_00431047: ;
    PUSH32(esp, ebx);
    ebx = edi + 0x58;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    goto loc_0043106C;

loc_00431050: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    MEM32(ebp + -4) = esi;
    esi = MEM32(esi);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56111C), _icall_esp); /* indirect call */
    }

loc_0043106C: ;
    if (CMP_NE(ebx, esi)) goto loc_00431050; /* jne: not equal / not zero */

loc_00431070: ;
    if (TEST_NZ(MEM8(edi + 0x14), 1)) goto loc_0043107D; /* jne: not equal / not zero */

loc_00431076: ;
    MEM32(edi + 0x580) = MEM32(edi + 0x580) & 0;

loc_0043107D: ;
    esi = MEM32(edi + 0x48);
    MEM32(edi + 0x48) = MEM32(edi + 0x48) & 0;
    goto loc_004310A2;

loc_00431086: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    MEM32(ebp + -4) = esi;
    esi = MEM32(esi);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56111C), _icall_esp); /* indirect call */
    }

loc_004310A2: ;
    if (TEST_NZ(esi, esi)) goto loc_00431086; /* jne: not equal / not zero */

loc_004310A6: ;
    PUSH32(esp, 0x40);
    edi = edi + 0x160;
    POP32(esp, esi);

loc_004310AF: ;
    edi = edi - 4;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004310BE; /* je: equal / zero */

loc_004310B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00430C4E(); /* call 0x00430C4E */

loc_004310BE: ;
    esi--;
    if ((esi != 0)) goto loc_004310AF; /* jne: not equal / not zero */

loc_004310C1: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004310C3: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004310CA
 * Original: 0x004310CA - 0x004310E3 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004310CA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004310CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if (CMP_BE(edx, MEM32(ebx + 0x1C))) { sub_004310E3(); return; } /* jbe: below or equal (unsigned <=) */

loc_004310DC: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_004314C3(); return; /* tail jmp 0x004314C3 */

}

/**
 * sub_004314C8
 * Original: 0x004314C8 - 0x004314D8 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004314C8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004314C8: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ecx + -11));
    if (TEST_NZ(LO8(eax), 1)) { sub_004314D8(); return; } /* jne: not equal / not zero */

loc_004314D3: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_004314F4(); return; /* tail jmp 0x004314F4 */

}

/**
 * sub_004314F7
 * Original: 0x004314F7 - 0x0043152D (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004314F7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004314F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0x20);
    eax = eax - MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x1000;
    ecx = ebx;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0x57;
    edi = edi & 0xFFFFFFF0u;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    if (CMP_NE(eax, MEM32(ebp + 0x18))) { g_seh_ebp = ebp; sub_0043152D(); return; } /* jne: not equal / not zero */

loc_00431524: ;
    SET_LO16(eax, MEM16(eax));
    MEM16(ebp + -4) = LO16(eax);
    g_seh_ebp = ebp; sub_00431531(); return; /* tail jmp 0x00431531 */

}

/**
 * sub_0043152D
 * Original: 0x0043152D - 0x00431531 (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043152D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043152D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    g_seh_ebp = ebp; sub_00431531(); return; /* seeded fallthrough continuation */

}

/**
 * sub_00431531
 * Original: 0x00431531 - 0x00431615 (228 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431531(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431531: ;
    ecx = MEM32(ebp + 0x1C);
    eax = edi;
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 4);
    MEM32(ebp + -12) = eax;
    eax = edi + 0x10;
    if (CMP_B(eax, ecx)) goto loc_0043157B; /* jb: below (unsigned <) */

loc_00431545: ;
    if (CMP_AE(eax, MEM32(ebp + 0x20))) goto loc_0043156B; /* jae: above or equal (unsigned >=) */

loc_0043154A: ;
    eax = edi;
    eax = eax - ecx;
    eax = eax + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ebx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561118), _icall_esp); /* indirect call */
    }

loc_00431567: ;
    if (CMP_GE(eax & eax, 0)) goto loc_00431572; /* jge: greater or equal (signed >=) */

loc_0043156B: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_0043160E;

loc_00431572: ;
    ecx = MEM32(ebp + 0x1C);
    ecx = ecx + MEM32(ebp + 0xC);
    MEM32(ebp + 0x1C) = ecx;

loc_0043157B: ;
    eax = MEM32(ebp + 0x20);
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x1000;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    SET_LO16(edx, MEM16(ebp + -4));
    SET_LO8(ebx, MEM8(ebp + 0x10));
    MEM16(esi + 2) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + -12));
    MEM16(esi) = LO16(edx);
    edx = MEM32(ebp + 0x14);
    MEM32(esi + 0x14) = edx;
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x18) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(ebp + -8);
    edx = edx << 0xC;
    edx = edx + MEM32(ebp + 0x18);
    MEM8(esi + 5) = 1;
    MEM32(esi + 0x2C) = edx;
    edx = MEM32(ebp + -8);
    MEM8(esi + 4) = LO8(ebx);
    MEM32(esi + 0x10) = 0xFFEEFFEEu;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x24) = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x30) = eax;
    if (TEST_Z(eax, eax)) goto loc_004315E4; /* je: equal / zero */

loc_004315D6: ;
    eax = eax << 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00430A30(); /* call 0x00430A30 */

loc_004315E1: ;
    ecx = MEM32(ebp + 0x1C);

loc_004315E4: ;
    edx = MEM32(ebp + 8);
    eax = ZX8(LO8(ebx));
    ecx = ecx - edi;
    MEM32(edx + eax * 4 + 0x60) = esi;
    SET_LO16(eax, MEM16(esi));
    ecx = (uint32_t)((int32_t)ecx >> 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM8(edi + 5) = 0x10;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, edx);
    MEM16(edi + 2) = LO16(eax);
    MEM8(edi + 4) = LO8(ebx);
    PUSH32(esp, 0); sub_00430F25(); /* call 0x00430F25 */

loc_0043160C: ;
    SET_LO8(eax, 1);

loc_0043160E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00431615
 * Original: 0x00431615 - 0x0043179C (391 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431615(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00431615: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ebx + 0xFFF;
    esi = esi >> 0xC;
    eax = esi;
    eax = eax << 0xC;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    MEM8(ebp + -12) = 0x40;
    MEM8(ebp + 0xF) = 0;

loc_0043163D: ;
    ecx = ZX8(MEM8(ebp + 0xF));
    ecx = MEM32(edi + ecx * 4 + 0x60);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00431670; /* je: equal / zero */

loc_0043164C: ;
    if (CMP_A(esi, MEM32(ecx + 0x30))) goto loc_0043167C; /* ja: above (unsigned >) */

loc_00431651: ;
    if (CMP_A(eax, MEM32(ecx + 0x1C))) goto loc_0043167C; /* ja: above (unsigned >) */

loc_00431656: ;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00430AC3(); /* call 0x00430AC3 */

loc_00431663: ;
    if (TEST_NZ(eax, eax)) goto loc_0043175F; /* jne: not equal / not zero */

loc_0043166B: ;
    eax = MEM32(ebp + -8);
    goto loc_0043167C;

loc_00431670: ;
    if (CMP_NE(MEM8(ebp + -12), 0x40)) goto loc_0043167C; /* jne: not equal / not zero */

loc_00431676: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    MEM8(ebp + -12) = LO8(ecx);

loc_0043167C: ;
    MEM8(ebp + 0xF) = MEM8(ebp + 0xF) + 1;
    if (CMP_B(MEM8(ebp + 0xF), 0x40)) goto loc_0043163D; /* jb: below (unsigned <) */

loc_00431685: ;
    if (CMP_EQ(MEM8(ebp + -12), 0x40)) goto loc_00431793; /* je: equal / zero */

loc_0043168F: ;
    if (TEST_Z(MEM8(edi + 0x14), 2)) goto loc_00431793; /* je: equal / zero */

loc_00431699: ;
    ecx = MEM32(edi + 0x20);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebx + 0x1000;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_A(eax, ecx)) goto loc_004316B3; /* ja: above (unsigned >) */

loc_004316B0: ;
    MEM32(ebp + 8) = ecx;

loc_004316B3: ;
    esi = MEM32(0x561118);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ebx = 0x2000;
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004316CD: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004316FF; /* jge: greater or equal (signed >=) */

loc_004316D1: ;
    ecx = MEM32(ebp + 0xC);
    if (CMP_EQ(MEM32(ebp + 8), ecx)) goto loc_004316F7; /* je: equal / zero */

loc_004316D9: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 1;
    if (CMP_AE(MEM32(ebp + 8), ecx)) goto loc_004316E4; /* jae: above or equal (unsigned >=) */

loc_004316E1: ;
    MEM32(ebp + 8) = ecx;

loc_004316E4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004316F3: ;
    if (TEST_S(eax, eax)) goto loc_004316D1; /* jl: less (signed <) */

loc_004316F7: ;
    if (TEST_S(eax, eax)) goto loc_00431793; /* jl: less (signed <) */

loc_004316FF: ;
    eax = MEM32(ebp + 8);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) + eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x24);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (CMP_A(ecx, eax)) goto loc_00431715; /* ja: above (unsigned >) */

loc_00431712: ;
    MEM32(ebp + -16) = eax;

loc_00431715: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_00431728: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_00431780; /* jl: less (signed <) */

loc_0043172E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -16);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004314F7(); /* call 0x004314F7 */

loc_0043174A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00431753; /* jne: not equal / not zero */

loc_0043174E: ;
    esi = 0xC0000017u;

loc_00431753: ;
    if (TEST_S(esi, esi)) goto loc_00431780; /* jl: less (signed <) */

loc_00431757: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x28);
    goto loc_00431795;

loc_0043175F: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 4;
    PUSH32(esp, 0);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00430C80(); /* call 0x00430C80 */

loc_00431770: ;
    PUSH32(esp, MEM32(ebp + -8));
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00430F25(); /* call 0x00430F25 */

loc_0043177C: ;
    eax = esi;
    goto loc_00431795;

loc_00431780: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56111C), _icall_esp); /* indirect call */
    }

loc_00431793: ;
    eax = 0; /* xor self */

loc_00431795: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043179C
 * Original: 0x0043179C - 0x004317C0 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043179C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043179C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if (CMP_EQ(MEM32(ebx + 0x584), 0)) { sub_004317C0(); return; } /* je: equal / zero */

loc_004317AF: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00430F25(); /* call 0x00430F25 */

loc_004317BB: ;
    g_seh_ebp = ebp; sub_00431A41(); return; /* tail jmp 0x00431A41 */

}

/**
 * sub_00431A46
 * Original: 0x00431A46 - 0x00431DF5 (943 bytes, 297 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431A46(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431A46: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x5618B8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00431A52: ;
    esi = 0; /* xor self */
    MEM32(ebp + -28) = esi;
    ebx = 0; /* xor self */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -120;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x1C);
    if (CMP_EQ(eax, esi)) goto loc_00431AA9; /* je: equal / zero */

loc_00431A6A: ;
    MEM32(ebp + -4) = esi;
    if (CMP_NE(MEM32(eax), 0x30)) goto loc_00431A81; /* jne: not equal / not zero */

loc_00431A72: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_00431A7E: ;
    esp = esp + 0xC;

loc_00431A81: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_00431AA1;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    MEM32(ebp + -44) = eax;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

loc_00431AA1: ;
    if (CMP_L(ebx, esi)) goto loc_00431DF1; /* jl: less (signed <) */

loc_00431AA9: ;
    if (TEST_Z(MEM8(0x87CA52), 0x20)) goto loc_00431AB6; /* je: equal / zero */

loc_00431AB2: ;
    MEM8(ebp + 8) = MEM8(ebp + 8) | 0x80;

loc_00431AB6: ;
    if (CMP_NE(MEM32(ebp + -116), esi)) goto loc_00431AC3; /* jne: not equal / not zero */

loc_00431ABB: ;
    eax = MEM32(0x651598);
    MEM32(ebp + -116) = eax;

loc_00431AC3: ;
    if (CMP_NE(MEM32(ebp + -112), esi)) goto loc_00431AD0; /* jne: not equal / not zero */

loc_00431AC8: ;
    eax = MEM32(0x65159C);
    MEM32(ebp + -112) = eax;

loc_00431AD0: ;
    if (CMP_NE(MEM32(ebp + -108), esi)) goto loc_00431ADD; /* jne: not equal / not zero */

loc_00431AD5: ;
    eax = MEM32(0x6515A4);
    MEM32(ebp + -108) = eax;

loc_00431ADD: ;
    if (CMP_NE(MEM32(ebp + -104), esi)) goto loc_00431AEA; /* jne: not equal / not zero */

loc_00431AE2: ;
    eax = MEM32(0x6515A0);
    MEM32(ebp + -104) = eax;

loc_00431AEA: ;
    if (CMP_NE(MEM32(ebp + -100), esi)) goto loc_00431AF6; /* jne: not equal / not zero */

loc_00431AEF: ;
    MEM32(ebp + -100) = 0x7FFDEFFF;

loc_00431AF6: ;
    if (CMP_EQ(MEM32(ebp + -96), esi)) goto loc_00431B04; /* je: equal / zero */

loc_00431AFB: ;
    if (CMP_BE(MEM32(ebp + -96), 0xFF000)) goto loc_00431B0B; /* jbe: below or equal (unsigned <=) */

loc_00431B04: ;
    MEM32(ebp + -96) = 0xFF000;

loc_00431B0B: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_NE(eax, esi)) goto loc_00431B38; /* jne: not equal / not zero */

loc_00431B12: ;
    MEM32(ebp + 0x14) = 0x1000;
    eax = MEM32(ebp + 0x10);
    if (CMP_NE(eax, esi)) goto loc_00431B29; /* jne: not equal / not zero */

loc_00431B20: ;
    MEM32(ebp + 0x10) = 0x40000;
    goto loc_00431B65;

loc_00431B29: ;
    eax = eax + 0xFFF;
    eax = eax & 0xFFFFF000u;

loc_00431B33: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_00431B65;

loc_00431B38: ;
    eax = eax + 0xFFF;
    ecx = 0xFFFFF000u;
    eax = eax & ecx;
    MEM32(ebp + 0x14) = eax;
    edx = MEM32(ebp + 0x10);
    if (CMP_NE(edx, esi)) goto loc_00431B5A; /* jne: not equal / not zero */

loc_00431B4E: ;
    eax = eax + 0xFFFF;
    eax = eax & 0xFFFF0000u;
    goto loc_00431B33;

loc_00431B5A: ;
    edx = edx + 0xFFF;
    edx = edx & ecx;
    MEM32(ebp + 0x10) = edx;

loc_00431B65: ;
    MEM32(ebp + -36) = 0x590;
    if (TEST_NZ(MEM8(ebp + 8), 1)) goto loc_00431B8A; /* jne: not equal / not zero */

loc_00431B72: ;
    if (CMP_EQ(MEM32(ebp + 0x18), esi)) goto loc_00431B7D; /* je: equal / zero */

loc_00431B77: ;
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) | 0x80;
    goto loc_00431B93;

loc_00431B7D: ;
    MEM32(ebp + -36) = 0x5AC;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | 0xFFFFFFFFu;
    goto loc_00431B93;

loc_00431B8A: ;
    if (CMP_NE(MEM32(ebp + 0x18), esi)) goto loc_00431DF1; /* jne: not equal / not zero */

loc_00431B93: ;
    edi = MEM32(ebp + 0xC);
    if (CMP_EQ(edi, esi)) goto loc_00431C68; /* je: equal / zero */

loc_00431B9E: ;
    if (CMP_EQ(MEM32(ebp + -84), esi)) goto loc_00431BDE; /* je: equal / zero */

loc_00431BA3: ;
    ebx = MEM32(ebp + -92);
    if (CMP_EQ(ebx, esi)) goto loc_00431DF1; /* je: equal / zero */

loc_00431BAE: ;
    eax = MEM32(ebp + -88);
    if (CMP_EQ(eax, esi)) goto loc_00431DF1; /* je: equal / zero */

loc_00431BB9: ;
    if (CMP_A(ebx, eax)) goto loc_00431DF1; /* ja: above (unsigned >) */

loc_00431BC1: ;
    if (TEST_NZ(MEM8(ebp + 8), 2)) goto loc_00431DF1; /* jne: not equal / not zero */

loc_00431BCB: ;
    MEM32(ebp + -32) = edi;
    ebx = ebx + edi;
    MEM32(ebp + 0x10) = eax;
    ecx = 0x400;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    goto loc_00431C59;

loc_00431BDE: ;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(0x561120);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_00431BED: ;
    if (TEST_S(eax, eax)) goto loc_00431DF1; /* jl: less (signed <) */

loc_00431BF5: ;
    edi = MEM32(ebp + -72);
    if (CMP_NE(edi, MEM32(ebp + 0xC))) goto loc_00431DF1; /* jne: not equal / not zero */

loc_00431C01: ;
    if (CMP_EQ(MEM32(ebp + -56), 0x10000)) goto loc_00431DF1; /* je: equal / zero */

loc_00431C0E: ;
    MEM32(ebp + -32) = edi;
    eax = 0x1000;
    if (CMP_NE(MEM32(ebp + -56), eax)) goto loc_00431C54; /* jne: not equal / not zero */

loc_00431C1B: ;
    ecx = 0x400;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -60);
    MEM32(ebp + 0x14) = eax;
    ecx = MEM32(ebp + -32);
    ebx = eax + ecx;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_00431C37: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x10) = ecx;
    if (TEST_S(eax, eax)) goto loc_00431C59; /* jl: less (signed <) */

loc_00431C41: ;
    if (CMP_NE(MEM32(ebp + -56), 0x2000)) goto loc_00431C59; /* jne: not equal / not zero */

loc_00431C4A: ;
    eax = MEM32(ebp + -60);
    eax = eax + ecx;
    MEM32(ebp + 0x10) = eax;
    goto loc_00431C59;

loc_00431C54: ;
    MEM32(ebp + 0x14) = eax;
    ebx = edi;

loc_00431C59: ;
    MEM32(ebp + -40) = 1;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = eax;
    goto loc_00431CA4;

loc_00431C68: ;
    if (CMP_NE(MEM32(ebp + -84), esi)) goto loc_00431DF1; /* jne: not equal / not zero */

loc_00431C71: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561118), _icall_esp); /* indirect call */
    }

loc_00431C87: ;
    if (TEST_S(eax, eax)) goto loc_00431DF1; /* jl: less (signed <) */

loc_00431C8F: ;
    MEM32(ebp + -40) = esi;
    if (CMP_NE(MEM32(ebp + 0x14), esi)) goto loc_00431C9E; /* jne: not equal / not zero */

loc_00431C97: ;
    MEM32(ebp + 0x14) = 0x1000;

loc_00431C9E: ;
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -32) = ebx;

loc_00431CA4: ;
    if (CMP_NE(MEM32(ebp + -32), ebx)) goto loc_00431CE9; /* jne: not equal / not zero */

loc_00431CA9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561118), _icall_esp); /* indirect call */
    }

loc_00431CC0: ;
    if (CMP_GE(eax & eax, 0)) goto loc_00431CE6; /* jge: greater or equal (signed >=) */

loc_00431CC4: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_00431DF1; /* jne: not equal / not zero */

loc_00431CCE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56111C), _icall_esp); /* indirect call */
    }

loc_00431CE1: ;
    goto loc_00431DF1;

loc_00431CE6: ;
    ebx = ebx + MEM32(ebp + 0x14);

loc_00431CE9: ;
    edx = MEM32(ebp + -28);
    eax = edx + 0x597;
    eax = eax & 0xFFFFFFF8u;
    esi = MEM32(ebp + -36);
    edi = 0x80;
    esi = esi + edi;
    edx = edx + 0x4C;
    PUSH32(esp, 8);
    POP32(esp, ecx);

loc_00431D05: ;
    MEM32(edx) = eax;
    edx = eax;
    eax = eax + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_00431D05; /* jne: not equal / not zero */

loc_00431D0F: ;
    ecx = eax;
    MEM32(edx) = MEM32(edx) & 0;
    if (TEST_Z(MEM8(0x87CA51), 8)) goto loc_00431D3E; /* je: equal / zero */

loc_00431D1D: ;
    eax = eax + 7;
    eax = eax & 0xFFFFFFF8u;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x17C) = eax;
    eax = 0x60C;
    esi = esi + eax;
    ecx = MEM32(ebp + -28);
    ecx = MEM32(ecx + 0x17C);
    ecx = ecx + eax;

loc_00431D3E: ;
    esi = esi + 0xF;
    esi = esi & 0xFFFFFFF0u;
    eax = esi;
    eax = eax >> 4;
    edx = MEM32(ebp + -28);
    MEM16(edx) = LO16(eax);
    eax = MEM32(ebp + -28);
    MEM8(eax + 5) = 1;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x10) = 0xEEFFEEFFu;
    edx = MEM32(ebp + -28);
    eax = MEM32(ebp + 8);
    MEM32(edx + 0x14) = eax;
    eax = eax & 0x6001007D;
    edx = MEM32(ebp + -28);
    MEM32(edx + 0x18) = eax;
    eax = MEM32(ebp + -28);
    MEM16(eax + 0x170) = MEM16(eax + 0x170) | 0xFFFF;
    edx = ecx;
    eax = MEM32(ebp + -28);
    edx = edx - eax;
    MEM16(eax + 0x3A) = LO16(edx);
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0;
    eax = MEM32(ebp + -28);
    eax = eax + 0x180;

loc_00431D9A: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = eax + 8;
    edi--;
    if ((edi != 0)) goto loc_00431D9A; /* jne: not equal / not zero */

loc_00431DA5: ;
    eax = MEM32(ebp + -28);
    edx = eax + 0x58;
    MEM32(eax + 0x5C) = edx;
    eax = MEM32(ebp + -28);
    edx = MEM32(eax + 0x5C);
    MEM32(eax + 0x58) = edx;
    edi = MEM32(ebp + 0x18);
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_00431DC8; /* jne: not equal / not zero */

loc_00431DBF: ;
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561000), _icall_esp); /* indirect call */
    }

loc_00431DC8: ;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x580) = edi;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0);
    eax = MEM32(ebp + -28);
    esi = esi + eax;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004314F7(); /* call 0x004314F7 */

loc_00431DED: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { g_seh_ebp = ebp; sub_00431DF5(); return; } /* jne: not equal / not zero */

loc_00431DF1: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00431E62(); return; /* tail jmp 0x00431E62 */

}

/**
 * sub_00431DF5
 * Original: 0x00431DF5 - 0x00431E6A (117 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431DF5(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431DF5: ;
    eax = MEM32(ebp + -28);
    MEM16(eax + 0x38) = MEM16(eax + 0x38) & 0;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -116);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -112);
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -108);
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + -104);
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -100);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -96);
    eax = eax + 0xF;
    eax = eax >> 4;
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -84);
    MEM32(eax + 0x584) = ecx;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x50) = 0x1F;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = 0xFFFFFFF0u;
    eax = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00431E67: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00431E6A
 * Original: 0x00431E6A - 0x004325C9 (1887 bytes, 563 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431E6A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431E6A: ;
    conker_trace_point(0x00431E6A);
    PUSH32(esp, 0x180);
    PUSH32(esp, 0x5618C8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00431E79: ;
    esi = MEM32(ebp + 8);
    ebx = esi;
    MEM32(ebp + -136) = ebx;
    MEM8(ebp + -26) = 0;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx | MEM32(esi + 0x18);
    MEM32(ebp + 0xC) = ecx;
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00431E99; /* jne: not equal / not zero */

loc_00431E98: ;
    eax++;

loc_00431E99: ;
    eax = eax + 0x1F;
    eax = eax & 0xFFFFFFF0u;
    MEM32(ebp + -32) = eax;
    edi = eax;
    edi = edi >> 4;
    MEM32(ebp + -40) = edi;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_00431EC3; /* jne: not equal / not zero */

loc_00431EB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_00431EBF: ;
    MEM8(ebp + -26) = 1;

loc_00431EC3: ;
    if (CMP_AE(edi, 0x80)) goto loc_00432060; /* jae: above or equal (unsigned >=) */

loc_00431ECF: ;
    eax = esi + edi * 8 + 0x180;
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(MEM32(eax), eax)) goto loc_00431F65; /* je: equal / zero */

loc_00431EE1: ;
    eax = MEM32(eax + 4);
    eax = eax - 8;
    MEM32(ebp + -52) = eax;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ebp + -25) = LO8(edx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -288) = ecx;
    edi = MEM32(eax + 0xC);
    MEM32(ebp + -316) = edi;
    MEM32(edi) = ecx;
    MEM32(ecx + 4) = edi;
    if (CMP_NE(ecx, edi)) goto loc_00431F41; /* jne: not equal / not zero */

loc_00431F0B: ;
    ecx = ZX16(MEM16(eax));
    edi = ecx;
    edi = edi >> 3;
    MEM32(ebp + -144) = edi;
    ecx = ecx & 7;
    edi = 0; /* xor self */
    edi++;
    edi = edi << LO8(ecx);
    MEM32(ebp + -240) = edi;
    ecx = MEM32(ebp + -144);
    ecx = ecx + esi + 0x160;
    MEM32(ebp + -76) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx ^ edi;
    edi = MEM32(ebp + -76);
    MEM8(edi) = LO8(ecx);

loc_00431F41: ;
    ecx = MEM32(ebp + -40);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) - ecx;
    MEM32(ebp + -56) = eax;
    edx = edx & 0x10;
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(eax + 5) = LO8(edx);
    ecx = MEM32(ebp + -32);
    ecx = ecx - MEM32(ebp + 0x10);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = 0;
    goto loc_00432455;

loc_00431F65: ;
    ecx = MEM32(ebp + -40);
    edx = ecx;
    edx = edx >> 5;
    MEM32(ebp + -160) = edx;
    edi = esi + edx * 4 + 0x160;
    MEM32(ebp + -48) = edi;
    ecx = ecx & 0x1F;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    eax--;
    eax = ~eax;
    eax = eax & MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;
    edx = edx - 0;
    if ((edx == 0)) goto loc_00431FA6; /* je: equal / zero */

loc_00431F98: ;
    edx--;
    if ((edx == 0)) goto loc_00431FBD; /* je: equal / zero */

loc_00431F9B: ;
    edx--;
    if ((edx == 0)) goto loc_00431FD4; /* je: equal / zero */

loc_00431F9E: ;
    edx--;
    if ((edx == 0)) goto loc_00431FEB; /* je: equal / zero */

loc_00431FA1: ;
    goto loc_00432069;

loc_00431FA6: ;
    if (TEST_Z(eax, eax)) goto loc_00431FB2; /* je: equal / zero */

loc_00431FAA: ;
    edi = esi + 0x180;
    goto loc_00431FF5;

loc_00431FB2: ;
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;

loc_00431FBD: ;
    if (TEST_Z(eax, eax)) goto loc_00431FC9; /* je: equal / zero */

loc_00431FC1: ;
    edi = esi + 0x280;
    goto loc_00431FF5;

loc_00431FC9: ;
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;

loc_00431FD4: ;
    if (TEST_Z(eax, eax)) goto loc_00431FE0; /* je: equal / zero */

loc_00431FD8: ;
    edi = esi + 0x380;
    goto loc_00431FF5;

loc_00431FE0: ;
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    edi = edi + 4;
    MEM32(ebp + -48) = edi;

loc_00431FEB: ;
    if (TEST_Z(eax, eax)) goto loc_00432069; /* je: equal / zero */

loc_00431FEF: ;
    edi = esi + 0x480;

loc_00431FF5: ;
    MEM32(ebp + -44) = edi;
    ecx = eax;
    PUSH32(esp, 0); sub_00433020(); /* call 0x00433020 */

loc_00431FFF: ;
    eax = SX8(LO8(eax));
    eax = edi + eax * 8;
    MEM32(ebp + -44) = eax;
    eax = MEM32(eax + 4);
    eax = eax - 8;
    MEM32(ebp + -52) = eax;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -304) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -168) = edx;
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(ecx, edx)) goto loc_004320E4; /* jne: not equal / not zero */

loc_00432030: ;
    ecx = ZX16(MEM16(eax));
    edx = ecx;
    edx = edx >> 3;
    MEM32(ebp + -248) = edx;
    ecx = ecx & 7;
    edi = 0; /* xor self */
    edi++;
    edi = edi << LO8(ecx);
    MEM32(ebp + -176) = edi;
    esi = edx + esi + 0x160;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi));
    ecx = ecx ^ edi;
    MEM8(esi) = LO8(ecx);
    goto loc_004320E4;

loc_00432060: ;
    if (CMP_A(edi, MEM32(esi + 0x1C))) goto loc_004324A4; /* ja: above (unsigned >) */

loc_00432069: ;
    edx = esi + 0x180;
    MEM32(ebp + -44) = edx;
    eax = MEM32(edx + 4);
    MEM32(ebp + -68) = eax;
    if (CMP_EQ(edx, eax)) goto loc_004320B9; /* je: equal / zero */

loc_0043207C: ;
    eax = eax + 0xFFFFFFF8u;
    MEM32(ebp + -52) = eax;
    eax = ZX16(MEM16(eax));
    if (CMP_B(eax, MEM32(ebp + -40))) goto loc_004320B9; /* jb: below (unsigned <) */

loc_0043208A: ;
    ecx = MEM32(edx);

loc_0043208C: ;
    MEM32(ebp + -68) = ecx;
    if (CMP_EQ(edx, ecx)) goto loc_004320B9; /* je: equal / zero */

loc_00432093: ;
    eax = ecx + -8;
    MEM32(ebp + -52) = eax;
    esi = ZX16(MEM16(eax));
    if (CMP_B(esi, MEM32(ebp + -40))) goto loc_004320B5; /* jb: below (unsigned <) */

loc_004320A1: ;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -148) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -184) = edx;
    goto loc_004320DF;

loc_004320B5: ;
    ecx = MEM32(ecx);
    goto loc_0043208C;

loc_004320B9: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00431615(); /* call 0x00431615 */

loc_004320C2: ;
    MEM32(ebp + -52) = eax;
    if (TEST_Z(eax, eax)) goto loc_00432498; /* je: equal / zero */

loc_004320CD: ;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -256) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -192) = edx;

loc_004320DF: ;
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;

loc_004320E4: ;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + -25) = LO8(ecx);
    ecx = ZX16(MEM16(eax));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    MEM32(ebp + -56) = eax;
    MEM8(eax + 5) = 1;
    edx = ZX16(MEM16(eax));
    ecx = MEM32(ebp + -40);
    edx = edx - ecx;
    MEM32(ebp + -104) = edx;
    MEM16(eax) = LO16(ecx);
    ecx = MEM32(ebp + -32);
    ecx = ecx - MEM32(ebp + 0x10);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = 0;
    if (TEST_Z(edx, edx)) goto loc_00432443; /* je: equal / zero */

loc_0043211A: ;
    if (CMP_NE(edx, 1)) goto loc_00432138; /* jne: not equal / not zero */

loc_0043211F: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax));
    ecx++;
    MEM16(eax) = LO16(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 6));
    ecx = ecx + 0x10;
    MEM8(eax + 6) = LO8(ecx);
    goto loc_00432443;

loc_00432138: ;
    esi = MEM32(ebp + -40);
    esi = esi << 4;
    esi = esi + eax;
    MEM32(ebp + -320) = esi;
    SET_LO8(ecx, MEM8(ebp + -25));
    MEM8(esi + 5) = LO8(ecx);
    SET_LO16(edi, MEM16(ebp + -40));
    MEM16(esi + 2) = LO16(edi);
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(esi + 4) = LO8(eax);
    MEM16(esi) = LO16(edx);
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00432221; /* je: equal / zero */

loc_00432166: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    eax = eax & 0x10;
    MEM8(esi + 5) = LO8(eax);
    if (CMP_AE(LO16(edx), 0x80)) goto loc_004321D6; /* jae: above or equal (unsigned >=) */

loc_00432178: ;
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -200) = edi;
    if (CMP_NE(MEM32(edi), edi)) goto loc_004321C2; /* jne: not equal / not zero */

loc_0043218C: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    MEM32(ebp + -132) = eax;
    ecx = ecx & 7;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    MEM32(ebp + -264) = eax;
    ecx = MEM32(ebp + -132);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -100) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx | eax;
    eax = MEM32(ebp + -100);
    MEM8(eax) = LO8(ecx);

loc_004321C2: ;
    MEM32(ebp + -208) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -296) = ecx;
    goto loc_004323D3;

loc_004321D6: ;
    ecx = ebx + 0x180;
    MEM32(ebp + -216) = ecx;
    eax = MEM32(ecx);

loc_004321E4: ;
    MEM32(ebp + -124) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_004321FD; /* je: equal / zero */

loc_004321EB: ;
    edi = eax + -8;
    MEM32(ebp + -272) = edi;
    if (CMP_BE(LO16(edx), MEM16(edi))) goto loc_004321FD; /* jbe: below or equal (unsigned <=) */

loc_004321F9: ;
    eax = MEM32(eax);
    goto loc_004321E4;

loc_004321FD: ;
    MEM32(ebp + -224) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -312) = edi;

loc_0043220C: ;
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(esi + 0xC) = edi;
    MEM32(edi) = ecx;
    MEM32(eax + 4) = ecx;

loc_00432219: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + edx;
    goto loc_00432428;

loc_00432221: ;
    eax = edx;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + -232) = eax;
    SET_LO8(ecx, MEM8(eax + 5));
    if (TEST_Z(LO8(ecx), 1)) goto loc_004322E9; /* je: equal / zero */

loc_0043223A: ;
    MEM16(eax + 2) = LO16(edx);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    eax = eax & 0x10;
    MEM8(esi + 5) = LO8(eax);
    if (CMP_AE(LO16(edx), 0x80)) goto loc_004322AE; /* jae: above or equal (unsigned >=) */

loc_00432250: ;
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -280) = edi;
    if (CMP_NE(MEM32(edi), edi)) goto loc_0043229A; /* jne: not equal / not zero */

loc_00432264: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    MEM32(ebp + -108) = eax;
    ecx = ecx & 7;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    MEM32(ebp + -152) = eax;
    ecx = MEM32(ebp + -108);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -140) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx | eax;
    eax = MEM32(ebp + -140);
    MEM8(eax) = LO8(ecx);

loc_0043229A: ;
    MEM32(ebp + -156) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -164) = ecx;
    goto loc_004323D3;

loc_004322AE: ;
    ecx = ebx + 0x180;
    MEM32(ebp + -172) = ecx;
    eax = MEM32(ecx);

loc_004322BC: ;
    MEM32(ebp + -116) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_004322D5; /* je: equal / zero */

loc_004322C3: ;
    edi = eax + -8;
    MEM32(ebp + -180) = edi;
    if (CMP_BE(LO16(edx), MEM16(edi))) goto loc_004322D5; /* jbe: below or equal (unsigned <=) */

loc_004322D1: ;
    eax = MEM32(eax);
    goto loc_004322BC;

loc_004322D5: ;
    MEM32(ebp + -188) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -196) = edi;
    goto loc_0043220C;

loc_004322E9: ;
    MEM8(esi + 5) = LO8(ecx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -204) = ecx;
    edi = MEM32(eax + 0xC);
    MEM32(ebp + -212) = edi;
    MEM32(edi) = ecx;
    MEM32(ecx + 4) = edi;
    if (CMP_NE(ecx, edi)) goto loc_00432341; /* jne: not equal / not zero */

loc_00432307: ;
    SET_LO16(ecx, MEM16(eax));
    if (CMP_AE(LO16(ecx), 0x80)) goto loc_00432341; /* jae: above or equal (unsigned >=) */

loc_00432311: ;
    ecx = ZX16(LO16(ecx));
    edi = ecx;
    edi = edi >> 3;
    MEM32(ebp + -80) = edi;
    ecx = ecx & 7;
    edi = 0; /* xor self */
    edi++;
    edi = edi << LO8(ecx);
    MEM32(ebp + -220) = edi;
    ecx = MEM32(ebp + -80);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -96) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx ^ edi;
    edi = MEM32(ebp + -96);
    MEM8(edi) = LO8(ecx);

loc_00432341: ;
    ecx = ZX16(MEM16(eax));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    eax = ZX16(MEM16(eax));
    edx = edx + eax;
    MEM32(ebp + -104) = edx;
    if (CMP_A(edx, 0xFF00)) goto loc_00432420; /* ja: above (unsigned >) */

loc_0043235B: ;
    MEM16(esi) = LO16(edx);
    if (TEST_NZ(MEM8(esi + 5), 0x10)) goto loc_0043236E; /* jne: not equal / not zero */

loc_00432364: ;
    eax = edx;
    eax = eax << 4;
    MEM16(eax + esi + 2) = LO16(edx);

loc_0043236E: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    eax = eax & 0x10;
    MEM8(esi + 5) = LO8(eax);
    if (CMP_AE(LO16(edx), 0x80)) goto loc_004323E5; /* jae: above or equal (unsigned >=) */

loc_00432380: ;
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -228) = edi;
    if (CMP_NE(MEM32(edi), edi)) goto loc_004323C4; /* jne: not equal / not zero */

loc_00432394: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    eax = eax >> 3;
    MEM32(ebp + -112) = eax;
    ecx = ecx & 7;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    MEM32(ebp + -236) = eax;
    ecx = MEM32(ebp + -112);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -120) = ecx;
    ecx = ZX8(MEM8(ecx));
    ecx = ecx | eax;
    eax = MEM32(ebp + -120);
    MEM8(eax) = LO8(ecx);

loc_004323C4: ;
    MEM32(ebp + -244) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -252) = ecx;

loc_004323D3: ;
    eax = esi + 8;
    MEM32(eax) = edi;
    MEM32(esi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(edi + 4) = eax;
    goto loc_00432219;

loc_004323E5: ;
    ecx = ebx + 0x180;
    MEM32(ebp + -260) = ecx;
    eax = MEM32(ecx);

loc_004323F3: ;
    MEM32(ebp + -128) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_0043240C; /* je: equal / zero */

loc_004323FA: ;
    edi = eax + -8;
    MEM32(ebp + -268) = edi;
    if (CMP_BE(LO16(edx), MEM16(edi))) goto loc_0043240C; /* jbe: below or equal (unsigned <=) */

loc_00432408: ;
    eax = MEM32(eax);
    goto loc_004323F3;

loc_0043240C: ;
    MEM32(ebp + -276) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -284) = edi;
    goto loc_0043220C;

loc_00432420: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00430F25(); /* call 0x00430F25 */

loc_00432428: ;
    MEM8(ebp + -25) = 0;
    if (TEST_Z(MEM8(esi + 5), 0x10)) goto loc_00432443; /* je: equal / zero */

loc_00432432: ;
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(ebp + -292) = eax;
    MEM32(eax + 0x40) = esi;

loc_00432443: ;
    if (TEST_Z(MEM8(ebp + -25), 0x10)) goto loc_00432455; /* je: equal / zero */

loc_00432449: ;
    eax = MEM32(ebp + -56);
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(ecx, LO8(ecx) | 0x10);
    MEM8(eax + 5) = LO8(ecx);

loc_00432455: ;
    esi = MEM32(ebp + -56);
    esi = esi + 0x10;
    MEM32(ebp + -60) = esi;
    if (CMP_EQ(MEM8(ebp + -26), 0)) goto loc_00432474; /* je: equal / zero */

loc_00432464: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00432470: ;
    MEM8(ebp + -26) = 0;

loc_00432474: ;
    if (TEST_Z(MEM8(ebp + 0xC), 8)) goto loc_0043258C; /* je: equal / zero */

loc_0043247E: ;
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    edi = esi;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    goto loc_0043258C;

loc_00432498: ;
    MEM32(ebp + -72) = 0xC0000017u;
    goto loc_00432549;

loc_004324A4: ;
    if (TEST_Z(MEM8(esi + 0x14), 2)) goto loc_00432542; /* je: equal / zero */

loc_004324AE: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = MEM32(ebp + 0xC);
    eax = eax << 0x14;
    eax = ~eax;
    eax = eax & 0x800000;
    eax = eax | 0x1000;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561118), _icall_esp); /* indirect call */
    }

loc_004324DB: ;
    MEM32(ebp + -72) = eax;
    if (TEST_S(eax, eax)) goto loc_00432549; /* jl: less (signed <) */

loc_004324E2: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = MEM32(ebp + -36);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -32);
    eax = eax - MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -36);
    MEM16(ecx + 0x20) = LO16(eax);
    eax = MEM32(ebp + -36);
    MEM8(eax + 0x25) = 0xB;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -36);
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ebp + -36);
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x1C) = ecx;
    esi = esi + 0x58;
    MEM32(ebp + -300) = esi;
    eax = MEM32(esi + 4);
    MEM32(ebp + -308) = eax;
    ecx = MEM32(ebp + -36);
    MEM32(ecx) = esi;
    ecx = MEM32(ebp + -36);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ebp + -36);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -36);
    MEM32(esi + 4) = eax;
    esi = MEM32(ebp + -36);
    esi = esi + 0x30;
    goto loc_00432589;

loc_00432542: ;
    MEM32(ebp + -72) = 0xC0000023u;

loc_00432549: ;
    if (TEST_Z(MEM8(ebp + 0xC), 4)) goto loc_00432587; /* je: equal / zero */

loc_0043254F: ;
    MEM32(ebp + -400) = 0xC0000017u;
    MEM32(ebp + -392) = MEM32(ebp + -392) & 0;
    MEM32(ebp + -384) = 1;
    MEM32(ebp + -396) = MEM32(ebp + -396) & 0;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -380) = eax;
    eax = ebp + -400;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610C4), _icall_esp); /* indirect call */
    }

loc_00432587: ;
    esi = 0; /* xor self */

loc_00432589: ;
    MEM32(ebp + -60) = esi;

loc_0043258C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_004325D2(); /* call 0x004325D2 */

loc_00432595: ;
    if (TEST_Z(esi, esi)) goto loc_004325BF; /* je: equal / zero */

loc_00432599: ;
    MEM32(ebp + -92) = esi;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -88) = eax;
    MEM32(ebp + -84) = MEM32(ebp + -84) & 0;
    eax = MEM32(0x20);
    eax = MEM32(eax + 0x250);
    if (TEST_Z(eax, eax) || eax == 0xEEEEEEEEu) goto loc_004325BF; /* absent thread cache callback */

loc_004325B6: ;
    ecx = ebp + -92;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_004325BF: ;
    eax = esi;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004325C6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004325D2
 * Original: 0x004325D2 - 0x004325E5 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004325D2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004325D2: ;
    if (CMP_EQ(MEM8(ebp + -26), 0)) goto loc_004325E4; /* je: equal / zero */

loc_004325D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004325E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004325E5
 * Original: 0x004325E5 - 0x0043260F (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004325E5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004325E5: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x5618D8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004325F1: ;
    esi = MEM32(ebp + 8);
    ebx = esi;
    MEM32(ebp + -36) = ebx;
    MEM8(ebp + -25) = 0;
    MEM8(ebp + -26) = 1;
    edi = MEM32(ebp + 0x10);
    if (TEST_NZ(edi, edi)) { sub_0043260F(); return; } /* jne: not equal / not zero */

loc_00432608: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_004327BB(); return; /* tail jmp 0x004327BB */

}

/**
 * sub_004327C6
 * Original: 0x004327C6 - 0x004327D9 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004327C6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004327C6: ;
    if (CMP_EQ(MEM8(ebp + -25), 0)) goto loc_004327D8; /* je: equal / zero */

loc_004327CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_004327D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004327D9
 * Original: 0x004327D9 - 0x00432814 (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004327D9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004327D9: ;
    PUSH32(esp, 0x13C);
    PUSH32(esp, 0x5618E8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_004327E8: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -44) = eax;
    MEM8(ebp + -29) = 0;
    esi = MEM32(ebp + 0x10);
    if (TEST_Z(esi, esi)) goto loc_0043280D; /* je: equal / zero */

loc_004327F9: ;
    MEM32(ebp + -116) = esi;
    ecx = MEM32(eax + 0x18);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | ecx;
    edx = MEM32(ebp + 0x14);
    if (CMP_BE(edx, 0x7FFFFFFF)) { sub_00432814(); return; } /* jbe: below or equal (unsigned <=) */

loc_0043280D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00432EE9(); return; /* tail jmp 0x00432EE9 */

}

/**
 * sub_00432EF1
 * Original: 0x00432EF1 - 0x00432F07 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432EF1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00432EF1: ;
    if (CMP_EQ(MEM8(ebp + -29), 0)) goto loc_00432F06; /* je: equal / zero */

loc_00432EF7: ;
    eax = MEM32(ebp + -44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x580));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00432F06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432F07
 * Original: 0x00432F07 - 0x00432F22 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432F07(void)
{

loc_00432F07: ;
    PUSH32(esp, 0xFFFFFFCDu);
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x87CA00);
    PUSH32(esp, ecx);
    eax = 0xB5659000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x87CA20);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_00432F21: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432F34
 * Original: 0x00432F34 - 0x00432FA8 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432F34(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00432F34: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, 0x432F22);
    PUSH32(esp, 0x87CA00);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E4), _icall_esp); /* indirect call */
    }

loc_00432F4C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x87CA20);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561148), _icall_esp); /* indirect call */
    }

loc_00432F59: ;
    eax = MEM32(0x561128);
    MEM32(0x87CA48) = MEM32(0x87CA48) & 0;
    MEM32(0x87CA4C) = MEM32(0x87CA4C) & 0;
    if (TEST_NZ(MEM8(eax), 8)) goto loc_00432FA1; /* jne: not equal / not zero */

loc_00432F71: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); sub_0042F15B(); /* call 0x0042F15B */

loc_00432F86: ;
    if (TEST_NZ(eax, eax)) goto loc_00432F97; /* jne: not equal / not zero */

loc_00432F8A: ;
    eax = MEM32(ebp + -4);
    eax = eax & 1;
    MEM32(0x87CA48) = eax;
    goto loc_00432FA1;

loc_00432F97: ;
    MEM32(0x87CA4C) = 1;

loc_00432FA1: ;
    PUSH32(esp, 0); sub_00432F07(); /* call 0x00432F07 */

loc_00432FA6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00433020
 * Original: 0x00433020 - 0x00433024 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433020(void)
{

loc_00433020: ;
    /* TODO: bsf eax, ecx */
    esp += 4; return; /* ret */

}

/**
 * sub_00433024
 * Original: 0x00433024 - 0x00433049 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433024(void)
{

loc_00433024: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    /* TODO: sgdt [esp + 6] */
    eax = MEM32(esp + 8);
    /* TODO: cli  */
    { uint32_t _tmp = MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    ecx = _tmp; }
    { uint32_t _tmp = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = _tmp; }
    /* TODO: sti  */
    /* TODO: ljmp 8:0x433044 */
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00433049
 * Original: 0x00433049 - 0x00433091 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433049(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00433049: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00433051: ;
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(0x75F024), esi - flags set for next jcc */
    SET_LO8(ebx, LO8(eax));
    if (CMP_NE(MEM32(0x75F024), esi)) goto loc_00433073; /* jne: not equal / not zero */

loc_0043305D: ;
    eax = MEM32(0x20);
    if (CMP_NE(MEM32(eax + 0x24C), esi)) goto loc_00433073; /* jne: not equal / not zero */

loc_0043306B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561188), _icall_esp); /* indirect call */
    }

loc_00433073: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561184), _icall_esp); /* indirect call */
    }

loc_0043307A: ;
    SET_LO8(ecx, LO8(ebx));
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00433084: ;
    eax = esi;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00433094
 * Original: 0x00433094 - 0x004330D9 (69 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433094(void)
{
    int _flags = 0; /* fallback flag var */

loc_00433094: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 4), edi)) goto loc_004330D0; /* jbe: below or equal (unsigned <=) */

loc_004330A1: ;
    eax = MEM32(esi);
    eax = MEM32(eax + edi * 4);
    if (TEST_Z(eax, eax)) goto loc_004330CA; /* je: equal / zero */

loc_004330AA: ;
    if (CMP_EQ(MEM32(esp + 0x10), 0)) goto loc_004330BA; /* je: equal / zero */

loc_004330B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x14), _icall_esp); /* indirect call */
    }

loc_004330B6: ;
    if (TEST_Z(eax, eax)) goto loc_004330C4; /* je: equal / zero */

loc_004330BA: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + edi * 4));
    PUSH32(esp, 0); sub_004308D1(); /* call 0x004308D1 */

loc_004330C4: ;
    eax = MEM32(esi);
    MEM32(eax + edi * 4) = MEM32(eax + edi * 4) & 0;

loc_004330CA: ;
    edi++;
    if (CMP_B(edi, MEM32(esi + 4))) goto loc_004330A1; /* jb: below (unsigned <) */

loc_004330D0: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00433107
 * Original: 0x00433107 - 0x0043319F (152 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433107(void)
{
    int _flags = 0; /* fallback flag var */

loc_00433107: ;
    eax = MEM32(0x652F64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0043313C; /* je: equal / zero */

loc_00433116: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042BECB(); /* call 0x0042BECB */

loc_0043311F: ;
    PUSH32(esp, MEM32(0x652F64));
    PUSH32(esp, 0); sub_0042BE47(); /* call 0x0042BE47 */

loc_0043312A: ;
    PUSH32(esp, MEM32(0x652F64));
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_00433135: ;
    MEM32(0x652F64) = MEM32(0x652F64) | 0xFFFFFFFFu;

loc_0043313C: ;
    PUSH32(esp, 0x4330D9);
    PUSH32(esp, 0x87CB10);
    PUSH32(esp, 0); sub_00433094(); /* call 0x00433094 */

loc_0043314B: ;
    esi = 0x4330F7;
    PUSH32(esp, esi);
    PUSH32(esp, 0x87CCD0);
    PUSH32(esp, 0); sub_00433094(); /* call 0x00433094 */

loc_0043315B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x87CB20);
    PUSH32(esp, 0); sub_00433094(); /* call 0x00433094 */

loc_00433166: ;
    MEM32(0x652F60) = MEM32(0x652F60) | 0xFFFFFFFFu;
    PUSH32(esp, 0x22);
    POP32(esp, ecx);
    PUSH32(esp, 0x1C);
    eax = 0; /* xor self */
    edi = 0x87CA80;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = 0x87CB40;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x75F0D4) = ebx;
    MEM32(0x87CCC8) = ebx;
    MEM32(0x87CCC4) = ebx;
    MEM32(0x87CBB0) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0043319F
 * Original: 0x0043319F - 0x00433220 (129 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043319F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043319F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    if (CMP_BE(eax, esi)) goto loc_00433213; /* jbe: below or equal (unsigned <=) */

loc_004331B6: ;
    edi = MEM32(ebx);
    eax = eax + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    MEM32(ebx + 8) = eax;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(ebp + 8) = edi;
    PUSH32(esp, 0); sub_004308B4(); /* call 0x004308B4 */

loc_004331CF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = eax;
    if (TEST_NZ(eax, eax)) goto loc_004331DC; /* jne: not equal / not zero */

loc_004331D5: ;
    MEM32(ebx) = edi;
    MEM32(ebx + 8) = esi;
    goto loc_00433219;

loc_004331DC: ;
    if (TEST_Z(edi, edi)) goto loc_004331F3; /* je: equal / zero */

loc_004331E0: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    esi = edi;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_004308D1(); /* call 0x004308D1 */

loc_004331F0: ;
    esi = MEM32(ebp + -4);

loc_004331F3: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx);
    ecx = ecx - esi;
    ecx = ecx << 2;
    edi = edx + esi * 4;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 0xC);

loc_00433213: ;
    MEM32(ebx + 4) = eax;
    eax = 0; /* xor self */
    eax++;

loc_00433219: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00433220
 * Original: 0x00433220 - 0x004332C3 (163 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00433220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = ecx | 0xFFFFFFFFu;
    if (CMP_NE(edi, ecx)) goto loc_0043325F; /* jne: not equal / not zero */

loc_00433233: ;
    esi = MEM32(0x87CB24);
    edi = ecx;
    edi = edi - esi;
    eax = eax & 2;
    ebx = 0x87CB20;
    MEM32(ebp + 8) = eax;
    if ((eax != 0)) goto loc_0043328F; /* jne: not equal / not zero */

loc_0043324A: ;
    eax = MEM32(0x87CCC8);
    if (CMP_B(eax, MEM32(0x652F60))) goto loc_0043328F; /* jb: below (unsigned <) */

loc_00433257: ;
    PUSH32(esp, ecx);

loc_00433258: ;
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0043325D: ;
    goto loc_004332BF;

loc_0043325F: ;
    eax = eax & 2;
    ebx = 0x87CCD0;
    MEM32(ebp + 8) = eax;
    if ((eax == 0)) goto loc_0043327C; /* je: equal / zero */

loc_0043326C: ;
    if (CMP_B(edi, MEM32(0x75F0D4))) goto loc_00433257; /* jb: below (unsigned <) */

loc_00433274: ;
    MEM32(0x652F60) = edi;
    goto loc_0043328C;

loc_0043327C: ;
    if (CMP_AE(edi, MEM32(0x652F60))) goto loc_00433257; /* jae: above or equal (unsigned >=) */

loc_00433284: ;
    eax = edi + 1;
    MEM32(0x75F0D4) = eax;

loc_0043328C: ;
    esi = MEM32(ebp + 0xC);

loc_0043328F: ;
    eax = esi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043319F(); /* call 0x0043319F */

loc_00433299: ;
    if (TEST_Z(eax, eax)) goto loc_004332BF; /* je: equal / zero */

loc_0043329D: ;
    eax = MEM32(ebx);
    esi = eax + esi * 4;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_004332AB; /* je: equal / zero */

loc_004332A7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    goto loc_00433258;

loc_004332AB: ;
    ebx = MEM32(ebp + 0x10);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004308B4(); /* call 0x004308B4 */

loc_004332B9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_NZ(eax, eax)) { sub_004332C3(); return; } /* jne: not equal / not zero */

loc_004332BF: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004332FB(); return; /* tail jmp 0x004332FB */

}

/**
 * sub_00433302
 * Original: 0x00433302 - 0x0043331B (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433302(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00433302: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(eax & eax, 0)) { sub_0043331B(); return; } /* jge: greater or equal (signed >=) */

loc_0043330F: ;
    esi = esi | 0xFFFFFFFFu;
    esi = esi - eax;
    edi = 0x87CB20;
    g_seh_ebp = ebp; sub_00433322(); return; /* tail jmp 0x00433322 */

}

/**
 * sub_00433362
 * Original: 0x00433362 - 0x004333B8 (86 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433362(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00433362: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 4);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_B(ebx, eax)) goto loc_00433385; /* jb: below (unsigned <) */

loc_00433382: ;
    MEM32(ebp + 8) = ebx;

loc_00433385: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM32(ebp + 8), ecx)) goto loc_004333AE; /* jbe: below or equal (unsigned <=) */

loc_0043338C: ;
    edi = MEM32(edx);
    esi = MEM32(esi);

loc_00433390: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + ecx);
    SET_LO8(edx, MEM8(eax + 0x561920));
    eax = (uint32_t)(int32_t)SMEM8(esi + ecx);
    SET_LO8(eax, MEM8(eax + 0x561920));
    if (CMP_NE(LO8(edx), LO8(eax))) { sub_004333B8(); return; } /* jne: not equal / not zero */

loc_004333A8: ;
    ecx++;
    if (CMP_B(ecx, MEM32(ebp + 8))) goto loc_00433390; /* jb: below (unsigned <) */

loc_004333AE: ;
    eax = ebx;
    eax = eax - MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004333C2
 * Original: 0x004333C2 - 0x00433447 (133 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004333C2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004333C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    eax = ebp + -40;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -40) = eax;
    edx = eax + 1;

loc_004333D7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004333D7; /* jne: not equal / not zero */

loc_004333DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x87CB14);
    eax = eax - edx;
    ebx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -36) = eax;
    if (CMP_BE(edi & edi, 0)) goto loc_00433415; /* jbe: below or equal (unsigned <=) */

loc_004333F2: ;
    eax = MEM32(0x87CB10);
    esi = MEM32(eax + ebx * 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = esi;
    PUSH32(esp, 0); sub_00433362(); /* call 0x00433362 */

loc_0043340A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_00433443; /* je: equal / zero */

loc_00433410: ;
    ebx++;
    if (CMP_B(ebx, edi)) goto loc_004333F2; /* jb: below (unsigned <) */

loc_00433415: ;
    eax = ebx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x87CB10);
    PUSH32(esp, 0); sub_0043319F(); /* call 0x0043319F */

loc_00433423: ;
    if (TEST_Z(eax, eax)) goto loc_0043343F; /* je: equal / zero */

loc_00433427: ;
    eax = MEM32(ebp + -36);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_004308B4(); /* call 0x004308B4 */

loc_00433435: ;
    if (TEST_NZ(eax, eax)) { sub_00433447(); return; } /* jne: not equal / not zero */

loc_00433439: ;
    MEM32(0x87CB14) = MEM32(0x87CB14) - 1;

loc_0043343F: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00433477(); return; /* tail jmp 0x00433477 */

loc_00433443: ;
    eax = esi;
    g_seh_ebp = ebp; sub_00433477(); return; /* tail jmp 0x00433477 */

}

/**
 * sub_0043347E
 * Original: 0x0043347E - 0x004334DA (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043347E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043347E: ;
    PUSH32(esp, ebp);
    eax = 0x2188;
    ebp = esp + -84;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0043348D: ;
    eax = MEM32(ebp + 0x60);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    esi = eax;
    esi = esi & 1;
    MEM32(ebp + 0x50) = edi;
    MEM32(ebp + 0x4C) = ebx;
    MEM32(ebp + 0x48) = ebx;
    if ((esi == 0)) goto loc_004334AD; /* je: equal / zero */

loc_004334A8: ;
    if (CMP_EQ(MEM32(ebp + 0x6C), ebx)) goto loc_004334CE; /* je: equal / zero */

loc_004334AD: ;
    MEM32(ebp + 0x60) = eax;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) & 2;
    if ((MEM32(ebp + 0x60) != 0)) goto loc_004334BB; /* jne: not equal / not zero */

loc_004334B6: ;
    if (CMP_EQ(MEM32(ebp + 0x68), ebx)) goto loc_004334CE; /* je: equal / zero */

loc_004334BB: ;
    if (CMP_EQ(MEM32(ebp + 0x68), ebx)) goto loc_004334C5; /* je: equal / zero */

loc_004334C0: ;
    if (CMP_EQ(MEM32(ebp + 0x64), ebx)) goto loc_004334CE; /* je: equal / zero */

loc_004334C5: ;
    if (CMP_NE(MEM32(ebp + 0x5C), edi)) { sub_004334DA(); return; } /* jne: not equal / not zero */

loc_004334CA: ;
    if (CMP_NE(esi, ebx)) { sub_004334DA(); return; } /* jne: not equal / not zero */

loc_004334CE: ;
    PUSH32(esp, 0x57);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_004334D5: ;
    g_seh_ebp = ebp; sub_0043368B(); return; /* tail jmp 0x0043368B */

}

/**
 * sub_004336E6
 * Original: 0x004336E6 - 0x0043370A (36 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004336E6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004336E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00433107(); /* call 0x00433107 */

loc_004336EF: ;
    eax = MEM32(ebp + 0xC);
    esi = eax + 1;
    edx = 0; /* xor self */

loc_004336F7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(edx))) goto loc_004336F7; /* jne: not equal / not zero */

loc_004336FE: ;
    eax = eax - esi;
    MEM32(ebp + 0xC) = eax;
    POP32(esp, esi);
    if ((eax != 0)) { sub_0043370A(); return; } /* jne: not equal / not zero */

loc_00433706: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0043372C(); return; /* tail jmp 0x0043372C */

}

/**
 * sub_00433730
 * Original: 0x00433730 - 0x00433795 (101 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00433730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    MEM32(0x87CAA4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(0x87CAA8) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    MEM32(0x87CAAC) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(0x87CAB0) = eax;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM32(0x87CAA0) = eax;
    MEM32(0x87CAB8) = esi;
    PUSH32(esp, 0); sub_004308B4(); /* call 0x004308B4 */

loc_0043376D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x87CAB4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00433790; /* je: equal / zero */

loc_00433776: ;
    PUSH32(esp, edi);
    ecx = esi;
    esi = MEM32(ebp + 0x1C);
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    eax = 0; /* xor self */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax++;
    POP32(esp, edi);

loc_00433790: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00433795
 * Original: 0x00433795 - 0x00433853 (190 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433795(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00433795: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    ecx = MEM32(0x75F0D4);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(0x87CB24), eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = eax;
    if (CMP_BE(MEM32(0x87CB24), eax)) goto loc_0043384B; /* jbe: below or equal (unsigned <=) */

loc_004337BB: ;
    ecx = MEM32(0x87CB20);
    edi = MEM32(ecx + eax * 4);
    if (TEST_Z(edi, edi)) goto loc_00433838; /* je: equal / zero */

loc_004337C8: ;
    if (CMP_A(MEM32(edi + 4), 1)) goto loc_00433838; /* ja: above (unsigned >) */

loc_004337CE: ;
    (void)0; /* test MEM8(edi + 0xC), 2 - flags set for next jcc */
    esi = ebp + -4;
    if (TEST_NZ(MEM8(edi + 0xC), 2)) goto loc_004337DA; /* jne: not equal / not zero */

loc_004337D7: ;
    esi = ebp + -8;

loc_004337DA: ;
    ecx = MEM32(0x87CCD4);
    goto loc_004337F3;

loc_004337E2: ;
    eax = MEM32(esi);
    edx = MEM32(0x87CCD0);
    if (CMP_EQ(MEM32(edx + eax * 4), 0)) goto loc_004337F7; /* je: equal / zero */

loc_004337F0: ;
    eax++;
    MEM32(esi) = eax;

loc_004337F3: ;
    if (CMP_B(MEM32(esi), ecx)) goto loc_004337E2; /* jb: below (unsigned <) */

loc_004337F7: ;
    eax = MEM32(ebp + -8);
    if (CMP_B(MEM32(ebp + -4), eax)) { sub_00433853(); return; } /* jb: below (unsigned <) */

loc_004337FF: ;
    ebx = MEM32(esi);
    eax = ebx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x87CCD0);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0); sub_0043319F(); /* call 0x0043319F */

loc_00433812: ;
    if (TEST_Z(eax, eax)) { sub_00433853(); return; } /* je: equal / zero */

loc_00433816: ;
    MEM32(edi) = ebx;
    eax = MEM32(0x87CCD0);
    MEM32(eax + ebx * 4) = edi;
    eax = MEM32(ebp + -4);
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    if (CMP_AE(eax, MEM32(0x652F60))) goto loc_00433833; /* jae: above or equal (unsigned >=) */

loc_0043382E: ;
    MEM32(0x652F60) = eax;

loc_00433833: ;
    eax = MEM32(ebp + -16);
    MEM32(esi) = eax;

loc_00433838: ;
    eax = MEM32(ebp + -12);
    eax++;
    (void)0; /* cmp eax, MEM32(0x87CB24) - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_B(eax, MEM32(0x87CB24))) goto loc_004337BB; /* jb: below (unsigned <) */

loc_0043384B: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00433857
 * Original: 0x00433857 - 0x0043390B (180 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433857(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00433857: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x87CB10);
    eax = MEM32(ebp + 8);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    SET_LO16(ecx, MEM16(eax + 0x18));
    MEM16(edx + 4) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM16(edx + 6) = LO16(ecx);
    ecx = MEM32(eax + 4);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(edx + 4));
    ebx = ecx;
    edi = edi + edi * 4;
    ecx = ecx >> 2;
    edi = edx + edi * 2 + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = 0; /* xor self */
    if (CMP_BE(MEM32(eax + 0x18), esi)) goto loc_004338FF; /* jbe: below or equal (unsigned <=) */

loc_004338AD: ;
    edi = edx + 0x10;
    MEM32(ebp + 8) = edi;

loc_004338B3: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx + esi * 4);
    ebx = MEM32(ecx + 8);
    if (CMP_GE(ebx & ebx, 0)) goto loc_004338D9; /* jge: greater or equal (signed >=) */

loc_004338C0: ;
    edi = ebx * 4 + 4;
    ebx = MEM32(0x87CB20);
    ebx = ebx - edi;
    edi = MEM32(ebx);
    edi = MEM32(edi);
    MEM32(ecx + 8) = edi;
    edi = MEM32(ebp + 8);

loc_004338D9: ;
    ebx = MEM32(ecx);
    MEM32(edi + -4) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edi) = ebx;
    ebx = ZX16(MEM16(edx + 4));
    SET_LO16(ecx, MEM16(ecx + 8));
    ebx = esi + ebx * 4;
    esi++;
    edi = edi + 8;
    MEM16(edx + ebx * 2 + 0xC) = LO16(ecx);
    (void)0; /* cmp esi, MEM32(eax + 0x18) - flags set for next jcc */
    MEM32(ebp + 8) = edi;
    if (CMP_B(esi, MEM32(eax + 0x18))) goto loc_004338B3; /* jb: below (unsigned <) */

loc_004338FF: ;
    eax = MEM32(eax + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + edx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043390B
 * Original: 0x0043390B - 0x0043391D (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043390B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043390B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    if (CMP_B(eax, ecx)) { sub_0043391D(); return; } /* jb: below (unsigned <) */

loc_00433918: ;
    SET_LO16(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_00433959(); return; /* tail jmp 0x00433959 */

}

/**
 * sub_0043395D
 * Original: 0x0043395D - 0x00433991 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043395D(void)
{
    uint32_t ebp;

loc_0043395D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x74;
    PUSH32(esp, esi);
    eax = ebp + -116;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_0043396D: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(esi + 4));
    eax = ebp + -116;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_0043397F: ;
    esi = esi + 8;
    PUSH32(esp, esi);
    eax = ebp + -116;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_0043398C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00433991
 * Original: 0x00433991 - 0x00433AC1 (304 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433991(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00433991: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_NE(ebx, edi)) goto loc_004339FB; /* jne: not equal / not zero */

loc_004339A5: ;
    esi = MEM32(0x87CAA0);
    esi = esi >> 0x1F;
    eax = MEM32(0x87CA98);
    ebx = ebp + -28;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -28) = edi;
    MEM32(ebp + 0xC) = 0x87CA80;
    if ((esi == 0)) goto loc_004339ED; /* je: equal / zero */

loc_004339C5: ;
    MEM32(0x87CAEC) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0x70);
    POP32(esp, ecx);
    MEM32(0x87CAF0) = ecx;
    edi = 0x87CAF4;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(0x87CAB4) = MEM32(0x87CAB4) + ecx;
    MEM32(0x87CAD0) = MEM32(0x87CAD0) + ecx;
    goto loc_004339F9;

loc_004339ED: ;
    PUSH32(esp, 0x1C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = 0x87CAEC;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_004339F9: ;
    edi = 0; /* xor self */

loc_004339FB: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(0x652F64));
    PUSH32(esp, 0); sub_0042BECB(); /* call 0x0042BECB */

loc_00433A0A: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00433AB8; /* je: equal / zero */

loc_00433A13: ;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(0x652F64));
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_00433A29: ;
    if (TEST_Z(eax, eax)) goto loc_00433AB8; /* je: equal / zero */

loc_00433A31: ;
    eax = MEM32(ebp + 8);
    if (CMP_NE(eax, MEM32(ebx + 4))) goto loc_00433AB8; /* jne: not equal / not zero */

loc_00433A39: ;
    eax = 0; /* xor self */
    eax++;
    if (CMP_EQ(esi, edi)) goto loc_00433ABA; /* je: equal / zero */

loc_00433A40: ;
    PUSH32(esp, 8);
    MEM16(0x87CB40) = 0x70;
    MEM16(0x87CB42) = LO16(eax);
    MEM32(0x87CB48) = edi;
    MEM32(0x87CB44) = edi;
    PUSH32(esp, 0); sub_0042DC47(); /* call 0x0042DC47 */

loc_00433A62: ;
    ebx = eax;
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_00433AB8; /* je: equal / zero */

loc_00433A69: ;
    eax = MEM32(0x87CA98);
    eax = eax + 0xFFFFFFDCu;
    PUSH32(esp, eax);
    PUSH32(esp, 0x87CAA4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042DC5B(); /* call 0x0042DC5B */

loc_00433A7D: ;
    PUSH32(esp, 0xC);
    esi = 0x87CB40;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042DC5B(); /* call 0x0042DC5B */

loc_00433A8B: ;
    PUSH32(esp, 0x87CB4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042DCA9(); /* call 0x0042DCA9 */

loc_00433A96: ;
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x652F64));
    PUSH32(esp, 0); sub_0042BD71(); /* call 0x0042BD71 */

loc_00433AA9: ;
    if (TEST_Z(eax, eax)) goto loc_00433AB8; /* je: equal / zero */

loc_00433AAD: ;
    if (CMP_NE(MEM32(ebp + 8), 0x70)) goto loc_00433AB8; /* jne: not equal / not zero */

loc_00433AB3: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_00433ABA;

loc_00433AB8: ;
    eax = 0; /* xor self */

loc_00433ABA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00433AC1
 * Original: 0x00433AC1 - 0x00433AD2 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433AC1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00433AC1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, 0); sub_00433795(); /* call 0x00433795 */

loc_00433ACC: ;
    if (TEST_NZ(eax, eax)) { sub_00433AD2(); return; } /* jne: not equal / not zero */

loc_00433AD0: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00433DA6
 * Original: 0x00433DA6 - 0x00433DAB (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433DA6(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00433DA6: ;
    g_seh_ebp = ebp; sub_00433107(); return; /* tail jmp 0x00433107 */

}

/**
 * sub_00433DAB
 * Original: 0x00433DAB - 0x00433DC3 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433DAB(void)
{
    int _flags = 0; /* fallback flag var */

loc_00433DAB: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00433DC0; /* je: equal / zero */

loc_00433DB2: ;
    ecx = MEM32(ecx + 0x18);
    ecx = ecx + MEM32(esp + 4);
    ecx = ecx << 5;
    eax = ecx + eax + 8;

loc_00433DC0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00433DC3
 * Original: 0x00433DC3 - 0x00433E03 (64 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433DC3(void)
{

loc_00433DC3: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edx = ecx;
    MEM32(edx) = eax;
    MEM32(edx + 0x38) = eax;
    MEM32(edx + 0x3C) = eax;
    MEM32(edx + 0x54) = eax;
    MEM32(edx + 0x58) = eax;
    MEM32(edx + 0x5C) = eax;
    MEM32(edx + 0x60) = eax;
    MEM32(edx + 0x64) = eax;
    MEM32(edx + 0x78) = 1;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    edi = edx + 4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = edx + 0x40;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = 0; /* xor self */
    edi = edx + 0x28;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00433E03
 * Original: 0x00433E03 - 0x00433E21 (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433E03(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00433E03: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_00433E12: ;
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM32(edi + eax * 4 + 0x40), ebx)) { sub_00433E21(); return; } /* je: equal / zero */

loc_00433E1D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00433E80(); return; /* tail jmp 0x00433E80 */

}

/**
 * sub_00433EA6
 * Original: 0x00433EA6 - 0x00433EBD (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433EA6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00433EA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ecx), edx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_NE(MEM32(ecx), edx)) { sub_00433EBD(); return; } /* jne: not equal / not zero */

loc_00433EB6: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00433F0F(); return; /* tail jmp 0x00433F0F */

}

/**
 * sub_00433F74
 * Original: 0x00433F74 - 0x00433F96 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433F74(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00433F74: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM32(eax + 0x48), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(eax + 0x48), 0)) { sub_00433F96(); return; } /* je: equal / zero */

loc_00433F80: ;
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx);
    esp = esp - 0xC;
    edi = esp;
    esi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_00433F94: ;
    g_seh_ebp = ebp; sub_00433F9B(); return; /* tail jmp 0x00433F9B */

}

/**
 * sub_00433FA0
 * Original: 0x00433FA0 - 0x00433FC2 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00433FA0: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM32(eax + 0x48), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(eax + 0x48), 0)) { sub_00433FC2(); return; } /* je: equal / zero */

loc_00433FAC: ;
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx);
    esp = esp - 0xC;
    edi = esp;
    esi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x20), _icall_esp); /* indirect call */
    }

loc_00433FC0: ;
    g_seh_ebp = ebp; sub_00433FC7(); return; /* tail jmp 0x00433FC7 */

}

/**
 * sub_00433FF0
 * Original: 0x00433FF0 - 0x0043401A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00433FF0: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM32(eax + 0x48), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(eax + 0x48), 0)) { sub_0043401A(); return; } /* je: equal / zero */

loc_00433FFC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x20));
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, MEM32(esp + 0x20));
    eax = MEM32(ecx);
    esp = esp - 0xC;
    edi = esp;
    esi = esp + 0x24;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x3C), _icall_esp); /* indirect call */
    }

loc_00434018: ;
    g_seh_ebp = ebp; sub_0043401F(); return; /* tail jmp 0x0043401F */

}

/**
 * sub_00434024
 * Original: 0x00434024 - 0x0043404E (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434024(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434024: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM32(eax + 0x48), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(eax + 0x48), 0)) { sub_0043404E(); return; } /* je: equal / zero */

loc_00434030: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x20));
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, MEM32(esp + 0x20));
    eax = MEM32(ecx);
    esp = esp - 0xC;
    edi = esp;
    esi = esp + 0x24;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x58), _icall_esp); /* indirect call */
    }

loc_0043404C: ;
    g_seh_ebp = ebp; sub_00434053(); return; /* tail jmp 0x00434053 */

}

/**
 * sub_00434078
 * Original: 0x00434078 - 0x004340C5 (77 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434078(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434078: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 4;
    edi = esi + 0x50;
    ebp = 0; /* xor self */

loc_0043408C: ;
    if (CMP_EQ(MEM32(edi), ebp)) goto loc_004340B4; /* je: equal / zero */

loc_00434090: ;
    ebx = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 8), ebp)) goto loc_004340AD; /* jbe: below or equal (unsigned <=) */

loc_00434097: ;
    edx = MEM32(esi + 0x38);
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    edx = edx + ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_004340A4: ;
    ebx++;
    ebp = ebp + 0x7C;
    if (CMP_B(ebx, MEM32(esi + 8))) goto loc_00434097; /* jb: below (unsigned <) */

loc_004340AD: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_004340B4: ;
    ebp = 0; /* xor self */
    if (CMP_EQ(MEM32(esp + 0x10), ebp)) { sub_004340C5(); return; } /* je: equal / zero */

loc_004340BC: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    edi = edi - 4;
    goto loc_0043408C;

}

/**
 * sub_004340CB
 * Original: 0x004340CB - 0x00434100 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004340CB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004340CB: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    (void)0; /* test LO8(ebx), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(LO8(ebx), 2)) { sub_00434100(); return; } /* je: equal / zero */

loc_004340D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x434726);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x7C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00016260(); /* call 0x00016260 */

loc_004340EB: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_004340FB; /* je: equal / zero */

loc_004340F0: ;
    PUSH32(esp, 0x8019);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_004340FB: ;
    eax = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00434119(); return; /* tail jmp 0x00434119 */

}

/**
 * sub_0043411E
 * Original: 0x0043411E - 0x0043418E (112 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043411E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043411E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0043412A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75F0D8);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611CC), _icall_esp); /* indirect call */
    }

loc_00434137: ;
    PUSH32(esp, 4);
    edi = esi + 0x28;
    POP32(esp, ebp);

loc_0043413D: ;
    ecx = MEM32(edi);
    if (TEST_Z(ecx, ecx)) goto loc_00434151; /* je: equal / zero */

loc_00434143: ;
    PUSH32(esp, MEM32(0x561B8C));
    PUSH32(esp, 0); sub_00436177(); /* call 0x00436177 */

loc_0043414E: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_00434151: ;
    edi = edi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_0043413D; /* jne: not equal / not zero */

loc_00434157: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0043415F: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00434078(); /* call 0x00434078 */

loc_00434166: ;
    ecx = MEM32(esi + 0x38);
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_00434179; /* je: equal / zero */

loc_0043416F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_004340CB(); /* call 0x004340CB */

loc_00434176: ;
    MEM32(esi + 0x38) = edi;

loc_00434179: ;
    MEM32(0x75F134) = edi;
    MEM32(0x75F11C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00436BE1(); return; /* tail jmp 0x00436BE1 */

}

/**
 * sub_0043418E
 * Original: 0x0043418E - 0x00434199 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043418E(void)
{

loc_0043418E: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x40);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434199
 * Original: 0x00434199 - 0x004341C3 (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434199(void)
{
    int _cf = 0; /* carry flag */

loc_00434199: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2710);
    MEM32(ecx + 0x68) = MEM32(ecx + 0x68) + eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75F100);
    MEM32(ecx + 0x6C) = MEM32(ecx + 0x6C) + 0 + _cf; /* adc */
    PUSH32(esp, MEM32(ecx + 0x6C));
    PUSH32(esp, MEM32(ecx + 0x68));
    PUSH32(esp, 0x75F0D8);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_004341C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004341C3
 * Original: 0x004341C3 - 0x00434268 (165 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004341C3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004341C3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x558344);
    MEM32(esi + 0x60) = eax;
    PUSH32(esp, 0); sub_0055A4D6(); /* call 0x0055A4D6 */

loc_004341E8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x558350);
    MEM32(esi + 0x54) = eax;
    PUSH32(esp, 0); sub_0055A4D6(); /* call 0x0055A4D6 */

loc_004341F7: ;
    edi = MEM32(esi + 0x54);
    MEM32(esi + 0x58) = eax;
    edi = ~edi;
    edi = edi & MEM32(esi + 0x5C);
    eax = ~eax;
    eax = eax & MEM32(esi + 0x60);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = eax;
    ebx = esi + 0x28;

loc_00434210: ;
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    (void)0; /* test edi, eax - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (TEST_NZ(edi, eax)) goto loc_00434226; /* jne: not equal / not zero */

loc_0043421F: ;
    ecx = MEM32(ebp + -8);
    if (TEST_Z(ecx, eax)) goto loc_0043423A; /* je: equal / zero */

loc_00434226: ;
    ecx = MEM32(ebx);
    if (TEST_Z(ecx, ecx)) goto loc_0043423A; /* je: equal / zero */

loc_0043422C: ;
    if (CMP_NE(MEM32(ecx + 0x24), 0)) goto loc_0043423A; /* jne: not equal / not zero */

loc_00434232: ;
    PUSH32(esp, 0); sub_004361EC(); /* call 0x004361EC */

loc_00434237: ;
    eax = MEM32(ebp + -12);

loc_0043423A: ;
    if (TEST_Z(MEM32(esi + 0x54), eax)) goto loc_00434255; /* je: equal / zero */

loc_0043423F: ;
    if (TEST_Z(MEM32(esi + 0x58), eax)) goto loc_00434255; /* je: equal / zero */

loc_00434244: ;
    ecx = MEM32(ebx);
    if (TEST_Z(ecx, ecx)) goto loc_00434255; /* je: equal / zero */

loc_0043424A: ;
    if (CMP_EQ(MEM32(ecx + 0x24), 0)) goto loc_00434255; /* je: equal / zero */

loc_00434250: ;
    PUSH32(esp, 0); sub_00436211(); /* call 0x00436211 */

loc_00434255: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ebx = ebx + 4;
    if (CMP_B(MEM32(ebp + -4), 4)) goto loc_00434210; /* jb: below (unsigned <) */

loc_00434261: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00434268
 * Original: 0x00434268 - 0x00434277 (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434268(void)
{
    int _flags = 0; /* fallback flag var */

loc_00434268: ;
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(MEM32(edi), 0)) { sub_00434277(); return; } /* jne: not equal / not zero */

loc_00434270: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00434298
 * Original: 0x00434298 - 0x004342C8 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434298(void)
{

loc_00434298: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x561B8C));
    edi = ecx;
    esi = edi + eax * 4 + 0x28;
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_00436177(); /* call 0x00436177 */

loc_004342B1: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0); sub_004368B5(); /* call 0x004368B5 */

loc_004342B8: ;
    eax = MEM32(esi);
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    MEM32(esi) = MEM32(esi) & 0;
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) - 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004342C8
 * Original: 0x004342C8 - 0x004342DC (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004342C8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004342C8: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00433DAB(); /* call 0x00433DAB */

loc_004342D1: ;
    if (TEST_NZ(eax, eax)) { sub_004342DC(); return; } /* jne: not equal / not zero */

loc_004342D5: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0043430A(); return; /* tail jmp 0x0043430A */

}

/**
 * sub_0043430D
 * Original: 0x0043430D - 0x00434341 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043430D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043430D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    if (TEST_Z(ecx, ecx)) { sub_00434341(); return; } /* je: equal / zero */

loc_0043431E: ;
    if (CMP_EQ(MEM32(eax + 0x50), 0)) { sub_00434341(); return; } /* je: equal / zero */

loc_00434324: ;
    edx = eax + 0x28;
    if (TEST_Z(edx, edx)) { sub_00434341(); return; } /* je: equal / zero */

loc_0043432B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(eax + 0x50);
    PUSH32(esp, MEM32(ebp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x60), _icall_esp); /* indirect call */
    }

loc_0043433F: ;
    g_seh_ebp = ebp; sub_00434346(); return; /* tail jmp 0x00434346 */

}

/**
 * sub_0043434A
 * Original: 0x0043434A - 0x0043437E (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043434A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043434A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    if (TEST_Z(ecx, ecx)) { sub_0043437E(); return; } /* je: equal / zero */

loc_0043435B: ;
    if (CMP_EQ(MEM32(eax + 0x50), 0)) { sub_0043437E(); return; } /* je: equal / zero */

loc_00434361: ;
    edx = eax + 0x28;
    if (TEST_Z(edx, edx)) { sub_0043437E(); return; } /* je: equal / zero */

loc_00434368: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(eax + 0x50);
    PUSH32(esp, MEM32(ebp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x64), _icall_esp); /* indirect call */
    }

loc_0043437C: ;
    g_seh_ebp = ebp; sub_00434383(); return; /* tail jmp 0x00434383 */

}

/**
 * sub_004343BB
 * Original: 0x004343BB - 0x004343C0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004343BB(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004343BB: ;
    g_seh_ebp = ebp; sub_00433E03(); return; /* tail jmp 0x00433E03 */

}

/**
 * sub_004343C0
 * Original: 0x004343C0 - 0x004343CF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004343C0(void)
{

loc_004343C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004343CF
 * Original: 0x004343CF - 0x004343D4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004343CF(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004343CF: ;
    g_seh_ebp = ebp; sub_00433EA6(); return; /* tail jmp 0x00433EA6 */

}

/**
 * sub_004343D4
 * Original: 0x004343D4 - 0x004343D9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004343D4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004343D4: ;
    g_seh_ebp = ebp; sub_00433F13(); return; /* tail jmp 0x00433F13 */

}

/**
 * sub_004343D9
 * Original: 0x004343D9 - 0x004343DE (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004343D9(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004343D9: ;
    g_seh_ebp = ebp; sub_00433F36(); return; /* tail jmp 0x00433F36 */

}

/**
 * sub_004343DE
 * Original: 0x004343DE - 0x004343FA (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004343DE(void)
{

loc_004343DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_00433F74(); /* call 0x00433F74 */

loc_004343F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004343FA
 * Original: 0x004343FA - 0x00434416 (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004343FA(void)
{

loc_004343FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_00433FA0(); /* call 0x00433FA0 */

loc_00434411: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00434416
 * Original: 0x00434416 - 0x0043441B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434416(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434416: ;
    g_seh_ebp = ebp; sub_00433FCC(); return; /* tail jmp 0x00433FCC */

}

/**
 * sub_0043441B
 * Original: 0x0043441B - 0x0043443F (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043441B(void)
{

loc_0043441B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x20));
    esi = esp + 0x14;
    PUSH32(esp, MEM32(esp + 0x20));
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x20));
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_00433FF0(); /* call 0x00433FF0 */

loc_0043443A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0043443F
 * Original: 0x0043443F - 0x00434463 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043443F(void)
{

loc_0043443F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x20));
    esi = esp + 0x14;
    PUSH32(esp, MEM32(esp + 0x20));
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x20));
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_00434024(); /* call 0x00434024 */

loc_0043445E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00434463
 * Original: 0x00434463 - 0x00434468 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434463(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434463: ;
    g_seh_ebp = ebp; sub_00434058(); return; /* tail jmp 0x00434058 */

}

/**
 * sub_00434468
 * Original: 0x00434468 - 0x00434471 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434468(void)
{
    uint32_t ebp;

loc_00434468: ;
    PUSH32(esp, ebp);
    ebp = esp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0043430D(); return; /* tail jmp 0x0043430D */

}

/**
 * sub_00434471
 * Original: 0x00434471 - 0x0043447A (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434471(void)
{
    uint32_t ebp;

loc_00434471: ;
    PUSH32(esp, ebp);
    ebp = esp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0043434A(); return; /* tail jmp 0x0043434A */

}

/**
 * sub_0043447A
 * Original: 0x0043447A - 0x0043447F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043447A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043447A: ;
    g_seh_ebp = ebp; sub_00434387(); return; /* tail jmp 0x00434387 */

}

/**
 * sub_004344CF
 * Original: 0x004344CF - 0x00434509 (58 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004344CF(void)
{
    int _flags = 0; /* fallback flag var */

loc_004344CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_004344DA: ;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_004341C3(); /* call 0x004341C3 */

loc_004344E3: ;
    PUSH32(esp, 5);
    esi = esi + 0x40;
    POP32(esp, edi);

loc_004344E9: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_004344F5; /* je: equal / zero */

loc_004344EE: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_004344F5: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_004344E9; /* jne: not equal / not zero */

loc_004344FB: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00434503: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00434509
 * Original: 0x00434509 - 0x0043450E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434509(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434509: ;
    g_seh_ebp = ebp; sub_0043447F(); return; /* tail jmp 0x0043447F */

}

/**
 * sub_0043450E
 * Original: 0x0043450E - 0x00434513 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043450E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043450E: ;
    g_seh_ebp = ebp; sub_004344AB(); return; /* tail jmp 0x004344AB */

}

/**
 * sub_00434513
 * Original: 0x00434513 - 0x00434533 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434513(void)
{
    int _flags = 0; /* fallback flag var */

loc_00434513: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0043411E(); /* call 0x0043411E */

loc_0043451B: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0043452D; /* je: equal / zero */

loc_00434522: ;
    PUSH32(esp, 0x801A);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_0043452D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043454E
 * Original: 0x0043454E - 0x0043463C (238 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043454E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043454E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 9);
    edi = ebx + 4;
    POP32(esp, ecx);
    esi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    eax++;
    if (CMP_EQ(MEM32(ebx + 0x24), edi)) goto loc_00434571; /* je: equal / zero */

loc_0043456C: ;
    MEM32(0x75F134) = eax;

loc_00434571: ;
    MEM16(0x75F130) = LO16(edi);
    MEM16(0x75F122) = LO16(eax);
    MEM32(0x75F124) = 0x3E80;
    MEM16(0x75F12E) = 0x10;
    MEM16(0x75F12C) = 2;
    MEM32(0x75F128) = 0x7D00;
    MEM16(0x75F120) = LO16(eax);
    PUSH32(esp, 0); sub_00436C0E(); /* call 0x00436C0E */

loc_004345AF: ;
    esi = eax;
    if (CMP_L(esi, edi)) goto loc_00434633; /* jl: less (signed <) */

loc_004345B5: ;
    esi = MEM32(ebp + 4);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    PUSH32(esp, 0x8019);
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_004345CB: ;
    if (CMP_EQ(eax, edi)) goto loc_004345E2; /* je: equal / zero */

loc_004345CF: ;
    PUSH32(esp, 0x4360B5);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_004345E2: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebx + 0x38) = edi;
    if (TEST_NZ(edi, edi)) goto loc_004345F0; /* jne: not equal / not zero */

loc_004345E9: ;
    esi = 0x8007000Eu;
    goto loc_00434633;

loc_004345F0: ;
    PUSH32(esp, MEM32(0x561B8C));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00433E03(); /* call 0x00433E03 */

loc_004345FC: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_00434633; /* jl: less (signed <) */

loc_00434602: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x75F0D8);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561148), _icall_esp); /* indirect call */
    }

loc_0043460F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x434533);
    PUSH32(esp, 0x75F100);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E4), _icall_esp); /* indirect call */
    }

loc_00434620: ;
    eax = ebx + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_0043462A: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0); sub_00434199(); /* call 0x00434199 */

loc_00434633: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043463C
 * Original: 0x0043463C - 0x00434661 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043463C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043463C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi) = MEM32(edi) & 0;
    PUSH32(esp, 0x801A);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_00434654: ;
    if (TEST_Z(eax, eax)) { sub_00434661(); return; } /* je: equal / zero */

loc_00434658: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00433DC3(); /* call 0x00433DC3 */

loc_0043465F: ;
    g_seh_ebp = ebp; sub_00434663(); return; /* tail jmp 0x00434663 */

}

/**
 * sub_004346AC
 * Original: 0x004346AC - 0x004346DF (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004346AC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004346AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    eax = edx + 0x78;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    eax = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    /* TODO: xadd dword ptr [ecx], eax */
    eax--;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_004346D8; /* jne: not equal / not zero */

loc_004346CB: ;
    if (TEST_Z(edx, edx)) goto loc_004346D8; /* je: equal / zero */

loc_004346CF: ;
    PUSH32(esp, 1);
    ecx = edx;
    PUSH32(esp, 0); sub_00434513(); /* call 0x00434513 */

loc_004346D8: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004346DF
 * Original: 0x004346DF - 0x004346E4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004346DF(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004346DF: ;
    g_seh_ebp = ebp; sub_004346AC(); return; /* tail jmp 0x004346AC */

}

/**
 * sub_00434726
 * Original: 0x00434726 - 0x00434727 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434726(void)
{

loc_00434726: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004347C9
 * Original: 0x004347C9 - 0x004347FE (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004347C9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004347C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    esi = ebx + 0x10;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM32(ebp + -12) = ecx;
    edi = ebp + -8;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0); sub_004C69A3(); /* call 0x004C69A3 */

loc_004347ED: ;
    if (CMP_NE(MEM32(esi), 0)) { sub_004347FE(); return; } /* jne: not equal / not zero */

loc_004347F2: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0043489B(); return; /* tail jmp 0x0043489B */

}

/**
 * sub_004348A3
 * Original: 0x004348A3 - 0x004348D8 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004348A3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004348A3: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    (void)0; /* test LO8(ebx), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(ebx), 2)) { sub_004348D8(); return; } /* je: equal / zero */

loc_004348B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x434726);
    esi = edi + -4;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00016260(); /* call 0x00016260 */

loc_004348C3: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_004348D3; /* je: equal / zero */

loc_004348C8: ;
    PUSH32(esp, 0x801C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_004348D3: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004348EA(); return; /* tail jmp 0x004348EA */

}

/**
 * sub_0043499A
 * Original: 0x0043499A - 0x004349C2 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043499A(void)
{

loc_0043499A: ;
    eax = ecx + 0xFC;
    edx = MEM32(eax);
    MEM32(ecx + edx * 8 + 0x6C) = 1;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + edx * 8 + 0x70) = esi;
    MEM32(eax) = MEM32(eax) + 1;
    MEM32(ecx + 0x100) = MEM32(ecx + 0x100) + 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004349C2
 * Original: 0x004349C2 - 0x004349E9 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004349C2(void)
{

loc_004349C2: ;
    eax = ecx + 0xFC;
    edx = MEM32(eax);
    MEM32(ecx + edx * 8 + 0x6C) = 2;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + edx * 8 + 0x70) = esi;
    MEM32(eax) = MEM32(eax) + 1;
    MEM32(ecx + 0x100) = MEM32(ecx + 0x100) + 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434A0C
 * Original: 0x00434A0C - 0x00434A8D (129 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434A0C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00434A0C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 0xC), eax - flags set for next jcc */
    MEM32(ebp + -4) = 2;
    MEM32(ebp + -12) = eax;
    if (CMP_BE(MEM32(esi + 0xC), eax)) goto loc_00434A8A; /* jbe: below or equal (unsigned <=) */

loc_00434A26: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    ebx++;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, edi);

loc_00434A2E: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_00434A88; /* je: equal / zero */

loc_00434A34: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + -8);
    edi = MEM32(ecx + eax);
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, 0); sub_00435EB4(); /* call 0x00435EB4 */

loc_00434A45: ;
    if (TEST_Z(eax, eax)) goto loc_00434A78; /* je: equal / zero */

loc_00434A49: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0043499A(); /* call 0x0043499A */

loc_00434A51: ;
    (void)0; /* cmp ebx, MEM32(esi + 0xC) - flags set for next jcc */
    ecx = ebx;
    if (CMP_AE(ebx, MEM32(esi + 0xC))) goto loc_00434A69; /* jae: above or equal (unsigned >=) */

loc_00434A58: ;
    eax = MEM32(esi + 8);
    eax = eax + ecx * 4;
    edx = MEM32(eax);
    ecx++;
    MEM32(eax + -4) = edx;
    if (CMP_B(ecx, MEM32(esi + 0xC))) goto loc_00434A58; /* jb: below (unsigned <) */

loc_00434A69: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    MEM32(ecx + eax * 4 + -4) = edi;
    goto loc_00434A7D;

loc_00434A78: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    ebx++;

loc_00434A7D: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    eax = MEM32(ebp + -12);
    if (CMP_B(eax, MEM32(esi + 0xC))) goto loc_00434A2E; /* jb: below (unsigned <) */

loc_00434A88: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00434A8A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00434A8D
 * Original: 0x00434A8D - 0x00434AEB (94 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434A8D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434A8D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    (void)0; /* cmp ebx, MEM32(esi + 0x14) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_AE(ebx, MEM32(esi + 0x14))) goto loc_00434AE6; /* jae: above or equal (unsigned >=) */

loc_00434A9D: ;
    if (TEST_Z(ebp, ebp)) goto loc_00434AE1; /* je: equal / zero */

loc_00434AA1: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + ebx * 4);
    if (CMP_BE(MEM32(edx + 0x14), 0)) goto loc_00434AB8; /* jbe: below or equal (unsigned <=) */

loc_00434AAD: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_004349C2(); /* call 0x004349C2 */

loc_00434AB5: ;
    ebp--;
    goto loc_00434AC5;

loc_00434AB8: ;
    edi = MEM32(edx + 0x24);
    PUSH32(esp, 0x50);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(edx + 0x4C) = eax;

loc_00434AC5: ;
    ebx++;
    if (CMP_B(ebx, MEM32(esi + 0x14))) goto loc_00434A9D; /* jb: below (unsigned <) */

loc_00434ACB: ;
    goto loc_00434AE1;

loc_00434ACD: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + ebx * 4);
    edi = MEM32(edx + 0x24);
    PUSH32(esp, 0x50);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(edx + 0x4C) = eax;
    ebx++;

loc_00434AE1: ;
    if (CMP_B(ebx, MEM32(esi + 0x14))) goto loc_00434ACD; /* jb: below (unsigned <) */

loc_00434AE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00434B0C
 * Original: 0x00434B0C - 0x00434B4F (67 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434B0C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00434B0C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(esi, ebx)) goto loc_00434B46; /* jbe: below or equal (unsigned <=) */

loc_00434B1E: ;
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, edi);
    edi = ecx;

loc_00434B24: ;
    edx = MEM32(edi);
    eax = MEM32(edx);
    if (CMP_NE(eax, MEM32(ebp + 8))) goto loc_00434B35; /* jne: not equal / not zero */

loc_00434B2D: ;
    eax = MEM32(edx + 4);
    if (CMP_EQ(eax, MEM32(ebp + 0xC))) goto loc_00434B3F; /* je: equal / zero */

loc_00434B35: ;
    ebx++;
    edi = edi + 4;
    if (CMP_B(ebx, esi)) goto loc_00434B24; /* jb: below (unsigned <) */

loc_00434B3D: ;
    goto loc_00434B45;

loc_00434B3F: ;
    eax = MEM32(ecx + ebx * 4);
    MEM32(ebp + -4) = eax;

loc_00434B45: ;
    POP32(esp, edi);

loc_00434B46: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00434B4F
 * Original: 0x00434B4F - 0x00434B86 (55 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434B4F(void)
{
    int _flags = 0; /* fallback flag var */

loc_00434B4F: ;
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(esi & esi, 0)) goto loc_00434B81; /* jbe: below or equal (unsigned <=) */

loc_00434B5D: ;
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, ebx);

loc_00434B61: ;
    edx = MEM32(ecx);
    ebx = MEM32(edx);
    if (CMP_NE(ebx, MEM32(esp + 0x10))) goto loc_00434B74; /* jne: not equal / not zero */

loc_00434B6B: ;
    edx = MEM32(edx + 4);
    if (CMP_EQ(edx, MEM32(esp + 0x14))) goto loc_00434B7E; /* je: equal / zero */

loc_00434B74: ;
    edi++;
    ecx = ecx + 4;
    if (CMP_B(edi, esi)) goto loc_00434B61; /* jb: below (unsigned <) */

loc_00434B7C: ;
    goto loc_00434B80;

loc_00434B7E: ;
    eax = edi;

loc_00434B80: ;
    POP32(esp, ebx);

loc_00434B81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00434B86
 * Original: 0x00434B86 - 0x00434BBB (53 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434B86(void)
{
    int _flags = 0; /* fallback flag var */

loc_00434B86: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(ecx + 0x14), esi)) goto loc_00434BB9; /* je: equal / zero */

loc_00434B91: ;
    edx = 0; /* xor self */
    if (CMP_BE(esi & esi, 0)) goto loc_00434BB9; /* jbe: below or equal (unsigned <=) */

loc_00434B97: ;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = ecx + 0x50;

loc_00434B9E: ;
    if (CMP_EQ(MEM32(edi), 0xFFFFFFFFu)) goto loc_00434BAD; /* je: equal / zero */

loc_00434BA3: ;
    edx++;
    edi = edi + 0x60;
    if (CMP_B(edx, esi)) goto loc_00434B9E; /* jb: below (unsigned <) */

loc_00434BAB: ;
    goto loc_00434BB8;

loc_00434BAD: ;
    eax = edx + edx * 2;
    eax = eax << 5;
    eax = eax + ecx;
    MEM32(eax + 0x50) = edx;

loc_00434BB8: ;
    POP32(esp, edi);

loc_00434BB9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00434BBB
 * Original: 0x00434BBB - 0x00434BF5 (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434BBB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00434BBB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00434BD0: ;
    esp = esp - 0xC;
    edi = esp;
    esi = ebp + 8;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ecx = ebx;
    MEM8(ebp + -1) = LO8(eax);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_00434B0C(); /* call 0x00434B0C */

loc_00434BE5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (TEST_Z(eax, eax)) { sub_00434BF5(); return; } /* je: equal / zero */

loc_00434BEC: ;
    MEM32(ebp + -8) = 0x80004005u;
    g_seh_ebp = ebp; sub_00434C17(); return; /* tail jmp 0x00434C17 */

}

/**
 * sub_00434C69
 * Original: 0x00434C69 - 0x00434CE0 (119 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434C69(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434C69: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    edi = ebx;
    edi = edi << 2;
    ecx = MEM32(edi + eax);
    PUSH32(esp, 0); sub_00436F59(); /* call 0x00436F59 */

loc_00434C83: ;
    ebp = eax;
    eax = MEM32(esi + 0x14);
    if (CMP_BE(eax, 1)) goto loc_00434CD9; /* jbe: below or equal (unsigned <=) */

loc_00434C8D: ;
    eax--;
    if (CMP_EQ(ebx, eax)) goto loc_00434CAD; /* je: equal / zero */

loc_00434C92: ;
    eax = MEM32(esi + 0x20);
    ecx = eax + edi;
    edi = MEM32(esi + 0x14);
    eax = MEM32(eax + edi * 4 + -4);
    edx = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x20);
    MEM32(ecx + eax * 4 + -4) = edx;

loc_00434CAD: ;
    edi = MEM32(esi + 0x14);
    goto loc_00434CD6;

loc_00434CB2: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4 + -4);
    PUSH32(esp, 0); sub_00436F59(); /* call 0x00436F59 */

loc_00434CBE: ;
    if (CMP_AE(ebp, eax)) goto loc_00434CD9; /* jae: above or equal (unsigned >=) */

loc_00434CC2: ;
    eax = MEM32(esi + 0x20);
    eax = eax + edi * 4;
    edx = MEM32(eax);
    ecx = MEM32(eax + -4);
    MEM32(eax + -4) = edx;
    eax = MEM32(esi + 0x20);
    MEM32(eax + edi * 4) = ecx;

loc_00434CD6: ;
    edi--;
    if ((edi != 0)) goto loc_00434CB2; /* jne: not equal / not zero */

loc_00434CD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434CE0
 * Original: 0x00434CE0 - 0x00434D31 (81 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00434CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0xC;
    edi = esp;
    esi = ebp + 8;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ebx = ecx;
    MEM32(ebp + -4) = 0x80004005u;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_00434B4F(); /* call 0x00434B4F */

loc_00434D00: ;
    esi = eax;
    if (CMP_AE(esi, MEM32(ebx + 0x18))) goto loc_00434D27; /* jae: above or equal (unsigned >=) */

loc_00434D07: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, 0); sub_00436F73(); /* call 0x00436F73 */

loc_00434D18: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_00434D27; /* jl: less (signed <) */

loc_00434D1F: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00434C69(); /* call 0x00434C69 */

loc_00434D27: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00434D3D
 * Original: 0x00434D3D - 0x00434D72 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434D3D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00434D3D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(ebp + -16) = esi;
    edi = ebp + -12;
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, esi);
    edi = ecx + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); sub_004C69A3(); /* call 0x004C69A3 */

loc_00434D62: ;
    if (CMP_NE(MEM32(edi), esi)) { sub_00434D72(); return; } /* jne: not equal / not zero */

loc_00434D66: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00434E03(); return; /* tail jmp 0x00434E03 */

}

/**
 * sub_00434E7F
 * Original: 0x00434E7F - 0x00434EA4 (37 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434E7F(void)
{
    int _flags = 0; /* fallback flag var */

loc_00434E7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0xC), edi)) goto loc_00434EA1; /* jbe: below or equal (unsigned <=) */

loc_00434E8C: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0); sub_00436443(); /* call 0x00436443 */

loc_00434E97: ;
    if (TEST_S(eax, eax)) goto loc_00434EA1; /* jl: less (signed <) */

loc_00434E9B: ;
    edi++;
    if (CMP_B(edi, MEM32(esi + 0xC))) goto loc_00434E8C; /* jb: below (unsigned <) */

loc_00434EA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00434EA4
 * Original: 0x00434EA4 - 0x00434ECC (40 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434EA4(void)
{
    int _flags = 0; /* fallback flag var */

loc_00434EA4: ;
    eax = ecx;
    edx = 0; /* xor self */
    if (CMP_BE(MEM32(eax + 0x14), edx)) goto loc_00434ECB; /* jbe: below or equal (unsigned <=) */

loc_00434EAD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00434EAF: ;
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + edx * 4);
    esi = MEM32(ecx + 0x24);
    PUSH32(esp, 0x50);
    edi = esi + 0x140;
    POP32(esp, ecx);
    edx++;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_B(edx, MEM32(eax + 0x14))) goto loc_00434EAF; /* jb: below (unsigned <) */

loc_00434EC9: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00434ECB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00434ECC
 * Original: 0x00434ECC - 0x00434F1D (81 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434ECC(void)
{
    int _flags = 0; /* fallback flag var */

loc_00434ECC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = 0x80004005u;
    if (CMP_BE(eax & eax, 0)) goto loc_00434F18; /* jbe: below or equal (unsigned <=) */

loc_00434EDC: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00434F17; /* jbe: below or equal (unsigned <=) */

loc_00434EE3: ;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0); sub_00437AF7(); /* call 0x00437AF7 */

loc_00434EF1: ;
    if (TEST_NZ(eax, eax)) goto loc_00434EFD; /* jne: not equal / not zero */

loc_00434EF5: ;
    edi++;
    if (CMP_B(edi, MEM32(esi + 0x14))) goto loc_00434EE3; /* jb: below (unsigned <) */

loc_00434EFB: ;
    goto loc_00434F17;

loc_00434EFD: ;
    edi = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0x14), edi)) goto loc_00434F15; /* jbe: below or equal (unsigned <=) */

loc_00434F04: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0); sub_00436E2E(); /* call 0x00436E2E */

loc_00434F0F: ;
    edi++;
    if (CMP_B(edi, MEM32(esi + 0x14))) goto loc_00434F04; /* jb: below (unsigned <) */

loc_00434F15: ;
    ebx = 0; /* xor self */

loc_00434F17: ;
    POP32(esp, edi);

loc_00434F18: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00434F53
 * Original: 0x00434F53 - 0x00434F90 (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434F53(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00434F53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = ecx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00434F67: ;
    esi = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(0x75F11C);
    eax = MEM32(eax + 0x18);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x20);
    eax = eax + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004C4FBE(); /* call 0x004C4FBE */

loc_00434F8B: ;
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
 * sub_0043501F
 * Original: 0x0043501F - 0x004350E9 (202 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043501F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043501F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0xFC), 0)) goto loc_004350E4; /* je: equal / zero */

loc_00435033: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0043503A: ;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), edx - flags set for next jcc */
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(esi + 0xFC);
    if (CMP_EQ(MEM32(ebp + 8), edx)) goto loc_0043504E; /* je: equal / zero */

loc_0043504A: ;
    edx = eax;
    goto loc_00435070;

loc_0043504E: ;
    if (CMP_B(eax, 2)) goto loc_00435070; /* jb: below (unsigned <) */

loc_00435053: ;
    PUSH32(esp, 2);
    edi = 0; /* xor self */
    POP32(esp, edx);
    edi++;
    ecx = esi + eax * 8 + 0x64;

loc_0043505D: ;
    if (CMP_EQ(MEM32(ecx), 1)) goto loc_0043506D; /* je: equal / zero */

loc_00435062: ;
    edi++;
    ecx = ecx - 8;
    if (CMP_BE(edi, 2)) goto loc_0043505D; /* jbe: below or equal (unsigned <=) */

loc_0043506B: ;
    goto loc_00435070;

loc_0043506D: ;
    edx = 0; /* xor self */
    edx++;

loc_00435070: ;
    if (CMP_B(edx, eax)) goto loc_00435076; /* jb: below (unsigned <) */

loc_00435074: ;
    edx = eax;

loc_00435076: ;
    if (CMP_BE(edx & edx, 0)) goto loc_004350B9; /* jbe: below or equal (unsigned <=) */

loc_0043507A: ;
    PUSH32(esp, ebx);
    ebx = edx;

loc_0043507D: ;
    MEM32(esi + 0xFC) = MEM32(esi + 0xFC) - 1;
    eax = MEM32(esi + 0xFC);
    ecx = MEM32(esi + eax * 8 + 0x6C);
    ecx--;
    if ((ecx == 0)) goto loc_0043509E; /* je: equal / zero */

loc_00435090: ;
    ecx--;
    if ((ecx != 0)) goto loc_004350A7; /* jne: not equal / not zero */

loc_00435093: ;
    ecx = MEM32(esi + eax * 8 + 0x70);
    PUSH32(esp, 0); sub_00436E54(); /* call 0x00436E54 */

loc_0043509C: ;
    goto loc_004350A7;

loc_0043509E: ;
    ecx = MEM32(esi + eax * 8 + 0x70);
    PUSH32(esp, 0); sub_00436482(); /* call 0x00436482 */

loc_004350A7: ;
    ecx = MEM32(esi + 0xFC);
    eax = 0; /* xor self */
    ebx--;
    edi = esi + ecx * 8 + 0x6C;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    if ((ebx != 0)) goto loc_0043507D; /* jne: not equal / not zero */

loc_004350B8: ;
    POP32(esp, ebx);

loc_004350B9: ;
    (void)0; /* cmp MEM32(esi + 0xFC), 0 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM32(esi + 0xFC), 0)) goto loc_004350DB; /* je: equal / zero */

loc_004350C3: ;
    edx = esi + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFFFFD8F0u;
    PUSH32(esp, eax);
    esi = esi + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_004350DB: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004350E4: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004350E9
 * Original: 0x004350E9 - 0x00435164 (123 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004350E9(void)
{
    int _flags = 0; /* fallback flag var */

loc_004350E9: ;
    eax = MEM32(ecx + 0xFC);
    if (TEST_Z(eax, eax)) goto loc_00435161; /* je: equal / zero */

loc_004350F3: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(eax & eax, 0)) goto loc_00435112; /* jbe: below or equal (unsigned <=) */

loc_004350FB: ;
    esi = ecx + 0x70;

loc_004350FE: ;
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(edi, MEM32(esi))) goto loc_00435112; /* je: equal / zero */

loc_00435106: ;
    edx++;
    esi = esi + 8;
    if (CMP_B(edx, MEM32(ecx + 0xFC))) goto loc_004350FE; /* jb: below (unsigned <) */

loc_00435112: ;
    eax--;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    esi = edx;
    if (CMP_AE(edx, eax)) goto loc_00435137; /* jae: above or equal (unsigned >=) */

loc_00435119: ;
    eax = ecx + edx * 8 + 0x6C;

loc_0043511D: ;
    edi = MEM32(eax + 8);
    MEM32(eax) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 4) = edi;
    edi = MEM32(ecx + 0xFC);
    esi++;
    eax = eax + 8;
    edi--;
    if (CMP_B(esi, edi)) goto loc_0043511D; /* jb: below (unsigned <) */

loc_00435137: ;
    eax = MEM32(ecx + 0xFC);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_AE(edx, eax)) goto loc_00435161; /* jae: above or equal (unsigned >=) */

loc_00435143: ;
    eax--;
    MEM32(ecx + 0xFC) = eax;
    MEM32(ecx + eax * 8 + 0x6C) = MEM32(ecx + eax * 8 + 0x6C) & 0;
    eax = MEM32(ecx + 0xFC);
    MEM32(ecx + eax * 8 + 0x70) = MEM32(ecx + eax * 8 + 0x70) & 0;
    MEM32(ecx + 0x100) = MEM32(ecx + 0x100) + 0xFFFFFFFEu;

loc_00435161: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435164
 * Original: 0x00435164 - 0x004351DE (122 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435164(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435164: ;
    eax = MEM32(ecx + 0xFC);
    if (TEST_Z(eax, eax)) goto loc_004351DB; /* je: equal / zero */

loc_0043516E: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(eax & eax, 0)) goto loc_0043518D; /* jbe: below or equal (unsigned <=) */

loc_00435176: ;
    esi = ecx + 0x70;

loc_00435179: ;
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(edi, MEM32(esi))) goto loc_0043518D; /* je: equal / zero */

loc_00435181: ;
    edx++;
    esi = esi + 8;
    if (CMP_B(edx, MEM32(ecx + 0xFC))) goto loc_00435179; /* jb: below (unsigned <) */

loc_0043518D: ;
    eax--;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    esi = edx;
    if (CMP_AE(edx, eax)) goto loc_004351B2; /* jae: above or equal (unsigned >=) */

loc_00435194: ;
    eax = ecx + edx * 8 + 0x6C;

loc_00435198: ;
    edi = MEM32(eax + 8);
    MEM32(eax) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 4) = edi;
    edi = MEM32(ecx + 0xFC);
    esi++;
    eax = eax + 8;
    edi--;
    if (CMP_B(esi, edi)) goto loc_00435198; /* jb: below (unsigned <) */

loc_004351B2: ;
    eax = MEM32(ecx + 0xFC);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_AE(edx, eax)) goto loc_004351DB; /* jae: above or equal (unsigned >=) */

loc_004351BE: ;
    eax--;
    MEM32(ecx + 0xFC) = eax;
    MEM32(ecx + eax * 8 + 0x6C) = MEM32(ecx + eax * 8 + 0x6C) & 0;
    eax = MEM32(ecx + 0xFC);
    MEM32(ecx + eax * 8 + 0x70) = MEM32(ecx + eax * 8 + 0x70) & 0;
    MEM32(ecx + 0x100) = MEM32(ecx + 0x100) - 1;

loc_004351DB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004351DE
 * Original: 0x004351DE - 0x00435205 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004351DE(void)
{
    int _flags = 0; /* fallback flag var */

loc_004351DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0x14), edi)) goto loc_00435200; /* jbe: below or equal (unsigned <=) */

loc_004351E9: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0); sub_004370BD(); /* call 0x004370BD */

loc_004351FA: ;
    edi++;
    if (CMP_B(edi, MEM32(esi + 0x14))) goto loc_004351E9; /* jb: below (unsigned <) */

loc_00435200: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435205
 * Original: 0x00435205 - 0x0043522C (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435205(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435205: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0x14), edi)) goto loc_00435227; /* jbe: below or equal (unsigned <=) */

loc_00435210: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0); sub_00437127(); /* call 0x00437127 */

loc_00435221: ;
    edi++;
    if (CMP_B(edi, MEM32(esi + 0x14))) goto loc_00435210; /* jb: below (unsigned <) */

loc_00435227: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043534F
 * Original: 0x0043534F - 0x004353C9 (122 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043534F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043534F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00435364: ;
    esp = esp - 0xC;
    edi = esp;
    esi = ebp + 8;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ecx = ebx;
    MEM8(ebp + -1) = LO8(eax);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_00434B4F(); /* call 0x00434B4F */

loc_00435379: ;
    edi = eax;
    if (CMP_AE(edi, MEM32(ebx + 0x18))) { sub_004353C9(); return; } /* jae: above or equal (unsigned >=) */

loc_00435380: ;
    eax = MEM32(ebx + 0x20);
    esi = MEM32(eax + edi * 4);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00435164(); /* call 0x00435164 */

loc_0043538E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0); sub_004C5218(); /* call 0x004C5218 */

loc_0043539C: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00436CBB(); /* call 0x00436CBB */

loc_004353A3: ;
    goto loc_004353B1;

loc_004353A5: ;
    eax = MEM32(ebx + 0x20);
    eax = eax + edi * 4;
    ecx = MEM32(eax + 4);
    MEM32(eax) = ecx;
    edi++;

loc_004353B1: ;
    eax = MEM32(ebx + 0x14);
    eax--;
    if (CMP_B(edi, eax)) goto loc_004353A5; /* jb: below (unsigned <) */

loc_004353B9: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 0x20);
    MEM32(ecx + eax * 4 + -4) = MEM32(ecx + eax * 4 + -4) & 0;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) - 1;
    g_seh_ebp = ebp; sub_004353CC(); return; /* tail jmp 0x004353CC */

}

/**
 * sub_00435545
 * Original: 0x00435545 - 0x00435560 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435545(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435545: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0); sub_00435DBA(); /* call 0x00435DBA */

loc_00435550: ;
    if (TEST_Z(eax, eax)) goto loc_0043555C; /* je: equal / zero */

loc_00435554: ;
    eax = 0; /* xor self */
    eax++;
    if (CMP_EQ(MEM32(esi + 0x64), eax)) goto loc_0043555E; /* je: equal / zero */

loc_0043555C: ;
    eax = 0; /* xor self */

loc_0043555E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435560
 * Original: 0x00435560 - 0x00435579 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435560(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435560: ;
    edx = MEM32(ecx + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x74);
    eax = 0; /* xor self */
    esi = esi - 0x14;
    eax++;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_A(edx, esi)) { sub_00435579(); return; } /* ja: above (unsigned >) */

loc_00435572: ;
    edx = edx + 0x14;
    MEM32(ecx + 0x78) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00435594
 * Original: 0x00435594 - 0x004355C8 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435594(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435594: ;
    edx = MEM32(ecx + 0x98);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_004355BD; /* jbe: below or equal (unsigned <=) */

loc_004355A1: ;
    eax = ecx + 0x1C;

loc_004355A4: ;
    ecx = MEM32(eax + -4);
    if (CMP_NE(ecx, MEM32(esp + 8))) goto loc_004355B5; /* jne: not equal / not zero */

loc_004355AD: ;
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esp + 0xC))) goto loc_004355BD; /* je: equal / zero */

loc_004355B5: ;
    esi++;
    eax = eax + 8;
    if (CMP_B(esi, edx)) goto loc_004355A4; /* jb: below (unsigned <) */

loc_004355BD: ;
    eax = 0; /* xor self */
    (void)0; /* cmp esi, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(esi, edx)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004355E9
 * Original: 0x004355E9 - 0x0043561E (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004355E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004355E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    esi = ebx + 0x10;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    MEM32(ebp + -12) = ecx;
    edi = ebp + -8;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0); sub_004C69A3(); /* call 0x004C69A3 */

loc_0043560D: ;
    if (CMP_NE(MEM32(esi), 0)) { sub_0043561E(); return; } /* jne: not equal / not zero */

loc_00435612: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    g_seh_ebp = ebp; sub_004356BB(); return; /* tail jmp 0x004356BB */

}

/**
 * sub_00435800
 * Original: 0x00435800 - 0x0043584B (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00435800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0x14), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    if (CMP_NE(MEM32(ebp + 0x14), 0)) goto loc_0043581C; /* jne: not equal / not zero */

loc_00435810: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x68), _icall_esp); /* indirect call */
    }

loc_00435818: ;
    if (TEST_S(eax, eax)) goto loc_00435845; /* jl: less (signed <) */

loc_0043581C: ;
    eax = MEM32(edi);
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    ecx = ecx + MEM32(esi + 0x14);
    PUSH32(esp, 0); sub_004372AB(); /* call 0x004372AB */

loc_0043582C: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax + eax * 2;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ecx << 5;
    ecx = ecx + MEM32(esi + 0x14);
    PUSH32(esp, 0); sub_004371EC(); /* call 0x004371EC */

loc_00435845: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0043584B
 * Original: 0x0043584B - 0x00435889 (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043584B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043584B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x98);
    if (CMP_AE(edi, 8)) goto loc_00435884; /* jae: above or equal (unsigned >=) */

loc_0043585A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_00435594(); /* call 0x00435594 */

loc_00435867: ;
    if (TEST_NZ(eax, eax)) goto loc_00435883; /* jne: not equal / not zero */

loc_0043586B: ;
    MEM32(esi + edi * 8 + 0x18) = 5;
    eax = MEM32(esi + 0x98);
    MEM32(esi + eax * 8 + 0x1C) = ebx;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;

loc_00435883: ;
    POP32(esp, ebx);

loc_00435884: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435889
 * Original: 0x00435889 - 0x004358C7 (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435889(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435889: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x98);
    if (CMP_AE(edi, 8)) goto loc_004358C2; /* jae: above or equal (unsigned >=) */

loc_00435898: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_00435594(); /* call 0x00435594 */

loc_004358A5: ;
    if (TEST_NZ(eax, eax)) goto loc_004358C1; /* jne: not equal / not zero */

loc_004358A9: ;
    MEM32(esi + edi * 8 + 0x18) = 6;
    eax = MEM32(esi + 0x98);
    MEM32(esi + eax * 8 + 0x1C) = ebx;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;

loc_004358C1: ;
    POP32(esp, ebx);

loc_004358C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435913
 * Original: 0x00435913 - 0x00435959 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435913(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435913: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0); sub_00435560(); /* call 0x00435560 */

loc_00435922: ;
    if (TEST_Z(eax, eax)) goto loc_00435945; /* je: equal / zero */

loc_00435926: ;
    eax = esi + 0x98;
    ecx = MEM32(eax);
    if (CMP_AE(ecx, 8)) goto loc_00435954; /* jae: above or equal (unsigned >=) */

loc_00435933: ;
    MEM32(esi + ecx * 8 + 0x18) = 1;
    ecx = MEM32(eax);
    MEM32(esi + ecx * 8 + 0x1C) = edi;
    MEM32(eax) = MEM32(eax) + 1;
    goto loc_00435954;

loc_00435945: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0043667B(); /* call 0x0043667B */

loc_0043594C: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00435889(); /* call 0x00435889 */

loc_00435954: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435959
 * Original: 0x00435959 - 0x004359CE (117 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435959(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435959: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x98);
    if (CMP_AE(ebx, 8)) goto loc_004359C9; /* jae: above or equal (unsigned >=) */

loc_00435968: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_NE(MEM32(edi + 0x64), 1)) goto loc_004359A1; /* jne: not equal / not zero */

loc_00435973: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00435594(); /* call 0x00435594 */

loc_0043597B: ;
    if (TEST_NZ(eax, eax)) goto loc_00435997; /* jne: not equal / not zero */

loc_0043597F: ;
    MEM32(esi + ebx * 8 + 0x18) = 4;
    eax = MEM32(esi + 0x98);
    MEM32(esi + eax * 8 + 0x1C) = edi;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;

loc_00435997: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00435889(); /* call 0x00435889 */

loc_0043599F: ;
    goto loc_004359C8;

loc_004359A1: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_00435594(); /* call 0x00435594 */

loc_004359AA: ;
    if (TEST_NZ(eax, eax)) goto loc_004359C8; /* jne: not equal / not zero */

loc_004359AE: ;
    MEM32(esi + ebx * 8 + 0x18) = 5;
    eax = MEM32(esi + 0x98);
    ecx = MEM32(edi);
    MEM32(esi + eax * 8 + 0x1C) = ecx;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;

loc_004359C8: ;
    POP32(esp, edi);

loc_004359C9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435A00
 * Original: 0x00435A00 - 0x00435A52 (82 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435A00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00435A00: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00435A0F: ;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    esi = MEM32(ebp + 8);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_00435A23; /* je: equal / zero */

loc_00435A1B: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_00435959(); /* call 0x00435959 */

loc_00435A23: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0043667B(); /* call 0x0043667B */

loc_00435A2A: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_00435A40; /* jl: less (signed <) */

loc_00435A30: ;
    eax = MEM32(esi);
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    ecx = ecx + MEM32(edi + 0x14);
    PUSH32(esp, 0); sub_0043727A(); /* call 0x0043727A */

loc_00435A40: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00435A49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00435AAC
 * Original: 0x00435AAC - 0x00435AE4 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435AAC(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435AAC: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    edx = 0; /* xor self */
    if (CMP_BE(esi & esi, 0)) goto loc_00435ACE; /* jbe: below or equal (unsigned <=) */

loc_00435ABC: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);

loc_00435AC0: ;
    if (CMP_EQ(ecx, MEM32(edi))) goto loc_00435ACD; /* je: equal / zero */

loc_00435AC4: ;
    edx++;
    edi = edi + 4;
    if (CMP_B(edx, MEM32(eax + 0xC))) goto loc_00435AC0; /* jb: below (unsigned <) */

loc_00435ACD: ;
    POP32(esp, edi);

loc_00435ACE: ;
    if (CMP_NE(edx, esi)) goto loc_00435ADB; /* jne: not equal / not zero */

loc_00435AD2: ;
    esi = MEM32(eax + 8);
    MEM32(esi + edx * 4) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;

loc_00435ADB: ;
    PUSH32(esp, 0); sub_00436918(); /* call 0x00436918 */

loc_00435AE0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435AE4
 * Original: 0x00435AE4 - 0x00435B3F (91 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435AE4(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435AE4: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0xC);
    if (CMP_BE(edx & edx, 0)) goto loc_00435B3B; /* jbe: below or equal (unsigned <=) */

loc_00435AEE: ;
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(edx & edx, 0)) goto loc_00435B09; /* jbe: below or equal (unsigned <=) */

loc_00435AF5: ;
    ecx = MEM32(esi + 8);

loc_00435AF8: ;
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(edi, MEM32(ecx))) goto loc_00435B09; /* je: equal / zero */

loc_00435B00: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_B(eax, MEM32(esi + 0xC))) goto loc_00435AF8; /* jb: below (unsigned <) */

loc_00435B09: ;
    if (CMP_AE(eax, edx)) goto loc_00435B3A; /* jae: above or equal (unsigned >=) */

loc_00435B0D: ;
    ecx = MEM32(esi + 8);
    edi = eax;
    eax = MEM32(esi);
    edi = edi << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx + edi));
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x34), _icall_esp); /* indirect call */
    }

loc_00435B1F: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(eax + ecx * 4 + -4);
    MEM32(eax + edi) = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4 + -4) = MEM32(ecx + eax * 4 + -4) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;

loc_00435B3A: ;
    POP32(esp, edi);

loc_00435B3B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435B3F
 * Original: 0x00435B3F - 0x00435B6C (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435B3F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435B3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    MEM32(esi + 0xC) = edi;
    eax = MEM32(0x75F11C);
    eax = MEM32(eax + 8);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x22);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_00435B5E: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (CMP_NE(eax, edi)) { sub_00435B6C(); return; } /* jne: not equal / not zero */

loc_00435B65: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00435B7F(); return; /* tail jmp 0x00435B7F */

}

/**
 * sub_00435B84
 * Original: 0x00435B84 - 0x00435B97 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435B84(void)
{

loc_00435B84: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x22);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00435B91: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435BEF
 * Original: 0x00435BEF - 0x00435BF2 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435BEF(void)
{

loc_00435BEF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00435BF2
 * Original: 0x00435BF2 - 0x00435C15 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435BF2(void)
{

loc_00435BF2: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0x15);
    POP32(esp, ecx);
    MEM8(edx) = LO8(eax);
    MEM16(edx + 2) = LO16(eax);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    edi = edx + 0x14;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435C15
 * Original: 0x00435C15 - 0x00435C2B (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435C15(void)
{

loc_00435C15: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = MEM32(esi) & 0;
    ecx = esi + 4;
    PUSH32(esp, 0); sub_00435BF2(); /* call 0x00435BF2 */

loc_00435C23: ;
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435C2B
 * Original: 0x00435C2B - 0x00435C63 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435C2B(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435C2B: ;
    eax = MEM32(esp + 8);
    eax = eax | 0x218A0000;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00435C3E: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_00435C5E; /* je: equal / zero */

loc_00435C44: ;
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

loc_00435C5E: ;
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00435C63
 * Original: 0x00435C63 - 0x00435C8B (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435C63(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435C63: ;
    if (CMP_EQ(MEM32(esp + 4), 0)) goto loc_00435C88; /* je: equal / zero */

loc_00435C6A: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00435C79; /* je: equal / zero */

loc_00435C72: ;
    eax = eax | 0x218A0000;
    goto loc_00435C7E;

loc_00435C79: ;
    eax = 0x218A2000;

loc_00435C7E: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00435C88: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00435C8B
 * Original: 0x00435C8B - 0x00435CBB (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435C8B(void)
{

loc_00435C8B: ;
    eax = ecx;
    ecx = MEM32(eax + 0x18);
    edx = ecx + ecx * 2;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + edx * 4);
    ecx = 0xA0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(eax + 0x18);
    ecx--;
    ecx = ecx & 1;
    POP32(esp, edi);
    MEM32(eax + 0x18) = ecx;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00435CBB
 * Original: 0x00435CBB - 0x00435CFC (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435CBB(void)
{

loc_00435CBB: ;
    eax = ecx;
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, esi);
    edx = edx + edx * 2;
    esi = MEM32(eax + edx * 4);
    edx = ecx;
    ecx = ecx >> 2;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x3C);
    MEM32(eax + 0x28) = ecx;
    edx--;
    edx = edx & 1;
    ecx++;
    ecx = ecx & 0xFFF;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x3C) = ecx;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435CFC
 * Original: 0x00435CFC - 0x00435D15 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435CFC(void)
{

loc_00435CFC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x30));
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0); sub_0043836A(); /* call 0x0043836A */

loc_00435D10: ;
    eax = MEM32(esi + 0x30);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435D15
 * Original: 0x00435D15 - 0x00435D7A (101 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435D15(void)
{

loc_00435D15: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00435D20: ;
    edx = MEM32(ebx + 0x8C);
    edi = MEM32(ebx + 0x7C);
    ecx = edx + edx * 2 + 0x15;
    ecx = MEM32(ebx + ecx * 4);
    edx = edx + edx * 2;
    esi = MEM32(ebx + edx * 4 + 0x4C);
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x8C);
    ecx++;
    ecx = ecx & 3;
    MEM32(ebx + 0x8C) = ecx;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00435D5D: ;
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = MEM32(ebx + 0x48);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(ebx + 0x7C));
    PUSH32(esp, 0); sub_004384F8(); /* call 0x004384F8 */

loc_00435D74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00435D7A
 * Original: 0x00435D7A - 0x00435D82 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435D7A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435D7A: ;
    ecx = MEM32(ecx + 0x48);
    g_seh_ebp = ebp; sub_00438565(); return; /* tail jmp 0x00438565 */

}

/**
 * sub_00435D82
 * Original: 0x00435D82 - 0x00435D92 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435D82(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435D82: ;
    if (CMP_EQ(MEM32(ecx + 0x44), 0)) { sub_00435D92(); return; } /* je: equal / zero */

loc_00435D88: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(ecx + 0x40);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00435D9E
 * Original: 0x00435D9E - 0x00435DB6 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435D9E(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435D9E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00435CBB(); /* call 0x00435CBB */

loc_00435DA6: ;
    if (TEST_Z(eax, eax)) { sub_00435DB6(); return; } /* je: equal / zero */

loc_00435DAA: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00435D82(); /* call 0x00435D82 */

loc_00435DB1: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435DBA
 * Original: 0x00435DBA - 0x00435E03 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435DBA(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435DBA: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0); sub_00435CBB(); /* call 0x00435CBB */

loc_00435DC2: ;
    if (TEST_Z(eax, eax)) { sub_00435E03(); return; } /* je: equal / zero */

loc_00435DC6: ;
    eax = MEM32(ebx + 0x88);
    ecx = MEM32(ebx + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x24);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    edi = MEM32(ebx + eax * 4 + 0x4C);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 0x88);
    eax++;
    eax = eax & 3;
    POP32(esp, edi);
    MEM32(ebx + 0x88) = eax;
    eax = MEM32(ebx + 0x90);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00435E17
 * Original: 0x00435E17 - 0x00435E8E (119 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435E17(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00435E17: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x90));
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0); sub_0043869C(); /* call 0x0043869C */

loc_00435E2B: ;
    if (TEST_S(eax, eax)) { sub_00435E8E(); return; } /* jl: less (signed <) */

loc_00435E2F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004385D6(); /* call 0x004385D6 */

loc_00435E3D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00435E89; /* jl: less (signed <) */

loc_00435E44: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00435E4A: ;
    MEM32(esi + 0x88) = MEM32(esi + 0x88) & 0;
    MEM32(esi + 0x8C) = MEM32(esi + 0x8C) & 0;
    PUSH32(esp, 4);
    edx = esi + 0x4C;
    POP32(esp, esi);
    PUSH32(esp, ebx);
    MEM8(ebp + 0xF) = LO8(eax);
    PUSH32(esp, edi);

loc_00435E63: ;
    ecx = MEM32(edx + 8);
    edi = MEM32(edx);
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    edx = edx + 0xC;
    esi--;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    if ((esi != 0)) goto loc_00435E63; /* jne: not equal / not zero */

loc_00435E7E: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00435E87: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00435E89: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00435E93(); return; /* tail jmp 0x00435E93 */

}

/**
 * sub_00435E98
 * Original: 0x00435E98 - 0x00435EA0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435E98(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435E98: ;
    ecx = MEM32(ecx + 0x48);
    g_seh_ebp = ebp; sub_00438688(); return; /* tail jmp 0x00438688 */

}

/**
 * sub_00435EB4
 * Original: 0x00435EB4 - 0x00435EBC (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435EB4(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435EB4: ;
    eax = MEM32(ecx + 0x20);
    if (TEST_NZ(eax, eax)) { sub_00435EBC(); return; } /* jne: not equal / not zero */

loc_00435EBB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00435EC0
 * Original: 0x00435EC0 - 0x00435EE0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435EC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x21);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_00435ED2: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) { sub_00435EE0(); return; } /* jne: not equal / not zero */

loc_00435ED9: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00435EE2(); return; /* tail jmp 0x00435EE2 */

}

/**
 * sub_00435EE5
 * Original: 0x00435EE5 - 0x00435F22 (61 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435EE5(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435EE5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00435CBB(); /* call 0x00435CBB */

loc_00435EED: ;
    if (TEST_Z(eax, eax)) { sub_00435F22(); return; } /* je: equal / zero */

loc_00435EF1: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00435D82(); /* call 0x00435D82 */

loc_00435EF8: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00435F05; /* je: equal / zero */

loc_00435EFF: ;
    if (CMP_NE(MEM32(eax + 0xC), 0)) goto loc_00435F1D; /* jne: not equal / not zero */

loc_00435F05: ;
    ecx = MEM32(esi + 0x2C);
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_00435F1D: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435F26
 * Original: 0x00435F26 - 0x00435F46 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435F26(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435F26: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00438323(); /* call 0x00438323 */

loc_00435F2E: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00435F40; /* je: equal / zero */

loc_00435F35: ;
    PUSH32(esp, 0x8016);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00435F40: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435F46
 * Original: 0x00435F46 - 0x00435F66 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435F46(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435F46: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_004384E4(); /* call 0x004384E4 */

loc_00435F4E: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00435F60; /* je: equal / zero */

loc_00435F55: ;
    PUSH32(esp, 0x8028);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00435F60: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435F66
 * Original: 0x00435F66 - 0x00435F98 (50 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435F66(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435F66: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = 0; /* xor self */
    ebx = edi;
    esi = 0x280;

loc_00435F75: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00435EC0(); /* call 0x00435EC0 */

loc_00435F7D: ;
    if (TEST_S(eax, eax)) goto loc_00435F93; /* jl: less (signed <) */

loc_00435F81: ;
    ebp++;
    ebx = ebx + 0xC;
    if (CMP_B(ebp, 2)) goto loc_00435F75; /* jb: below (unsigned <) */

loc_00435F8A: ;
    PUSH32(esp, esi);
    ecx = edi + 0x24;
    PUSH32(esp, 0); sub_00435EC0(); /* call 0x00435EC0 */

loc_00435F93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00435F98
 * Original: 0x00435F98 - 0x00435FAF (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435F98(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435F98: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    if (TEST_Z(ecx, ecx)) goto loc_00435FAD; /* je: equal / zero */

loc_00435FA2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00435F26(); /* call 0x00435F26 */

loc_00435FA9: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;

loc_00435FAD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435FAF
 * Original: 0x00435FAF - 0x00435FC6 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435FAF(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435FAF: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    if (TEST_Z(ecx, ecx)) goto loc_00435FC4; /* je: equal / zero */

loc_00435FB9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00435F46(); /* call 0x00435F46 */

loc_00435FC0: ;
    MEM32(esi + 0x48) = MEM32(esi + 0x48) & 0;

loc_00435FC4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435FC6
 * Original: 0x00435FC6 - 0x00436023 (93 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435FC6(void)
{
    int _flags = 0; /* fallback flag var */

loc_00435FC6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 0x20), edi)) goto loc_0043601E; /* jne: not equal / not zero */

loc_00435FD1: ;
    PUSH32(esp, 0x8016);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_00435FDD: ;
    if (TEST_Z(eax, eax)) goto loc_00435FEA; /* je: equal / zero */

loc_00435FE1: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00435C15(); /* call 0x00435C15 */

loc_00435FE8: ;
    goto loc_00435FEC;

loc_00435FEA: ;
    eax = 0; /* xor self */

loc_00435FEC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x20) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00435FFA; /* jne: not equal / not zero */

loc_00435FF3: ;
    edi = 0x8007000Eu;
    goto loc_00436017;

loc_00435FFA: ;
    ecx = eax;
    PUSH32(esp, 0); sub_0043844E(); /* call 0x0043844E */

loc_00436001: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_00436017; /* jl: less (signed <) */

loc_00436007: ;
    PUSH32(esp, 0xA);
    ecx = esi + 0x30;
    PUSH32(esp, 0); sub_00435EC0(); /* call 0x00435EC0 */

loc_00436011: ;
    edi = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_0043601E; /* jge: greater or equal (signed >=) */

loc_00436017: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00435F98(); /* call 0x00435F98 */

loc_0043601E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436023
 * Original: 0x00436023 - 0x0043609E (123 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436023(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00436023: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 0x48), edi)) goto loc_00436098; /* jne: not equal / not zero */

loc_0043602F: ;
    PUSH32(esp, 0x8028);
    PUSH32(esp, 0x184);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_0043603E: ;
    if (CMP_EQ(eax, edi)) goto loc_00436046; /* je: equal / zero */

loc_00436042: ;
    MEM32(eax) = edi;
    goto loc_00436048;

loc_00436046: ;
    eax = 0; /* xor self */

loc_00436048: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esi + 0x48) = eax;
    if (CMP_NE(eax, edi)) goto loc_00436058; /* jne: not equal / not zero */

loc_00436051: ;
    edi = 0x8007000Eu;
    goto loc_0043608F;

loc_00436058: ;
    MEM32(esp + 0x10) = edi;
    ebp = esi + 0x4C;
    ebx = 0x280;

loc_00436064: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0); sub_00435EC0(); /* call 0x00435EC0 */

loc_0043606C: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0043608F; /* jl: less (signed <) */

loc_00436072: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    ebp = ebp + 0xC;
    if (CMP_B(MEM32(esp + 0x10), 4)) goto loc_00436064; /* jb: below (unsigned <) */

loc_00436080: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x7C;
    PUSH32(esp, 0); sub_00435EC0(); /* call 0x00435EC0 */

loc_00436089: ;
    edi = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_00436096; /* jge: greater or equal (signed >=) */

loc_0043608F: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00435FAF(); /* call 0x00435FAF */

loc_00436096: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00436098: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0043610F
 * Original: 0x0043610F - 0x00436117 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043610F(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043610F: ;
    ecx = MEM32(ecx + 0x18);
    g_seh_ebp = ebp; sub_00435E07(); return; /* tail jmp 0x00435E07 */

}

/**
 * sub_00436117
 * Original: 0x00436117 - 0x0043613E (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436117(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436117: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0); sub_00435EE5(); /* call 0x00435EE5 */

loc_00436122: ;
    if (TEST_Z(eax, eax)) goto loc_0043613A; /* je: equal / zero */

loc_00436126: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0); sub_00435CFC(); /* call 0x00435CFC */

loc_0043612E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00436DC1(); /* call 0x00436DC1 */

loc_0043613A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043613E
 * Original: 0x0043613E - 0x0043614A (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043613E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043613E: ;
    ecx = MEM32(ecx + 0x18);
    if (TEST_Z(ecx, ecx)) { sub_0043614A(); return; } /* je: equal / zero */

loc_00436145: ;
    g_seh_ebp = ebp; sub_00435F98(); return; /* tail jmp 0x00435F98 */

}

/**
 * sub_0043614B
 * Original: 0x0043614B - 0x0043616A (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043614B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043614B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_0043615A; /* je: equal / zero */

loc_00436155: ;
    PUSH32(esp, 0); sub_00435F98(); /* call 0x00435F98 */

loc_0043615A: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00436164: ;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043616A
 * Original: 0x0043616A - 0x00436176 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043616A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043616A: ;
    ecx = MEM32(ecx + 0x18);
    if (TEST_Z(ecx, ecx)) { sub_00436176(); return; } /* je: equal / zero */

loc_00436171: ;
    g_seh_ebp = ebp; sub_00435FAF(); return; /* tail jmp 0x00435FAF */

}

/**
 * sub_00436177
 * Original: 0x00436177 - 0x004361B2 (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436177(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436177: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0x1C), edi)) goto loc_004361AD; /* je: equal / zero */

loc_00436184: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0043618B: ;
    ecx = MEM32(esi + 0x1C);
    SET_LO8(ebx, LO8(eax));
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x30), _icall_esp); /* indirect call */
    }

loc_00436199: ;
    MEM32(esi + 0x1C) = edi;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x2C), _icall_esp); /* indirect call */
    }

loc_004361A4: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004361AC: ;
    POP32(esp, ebx);

loc_004361AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004361B2
 * Original: 0x004361B2 - 0x004361EC (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004361B2(void)
{
    int _flags = 0; /* fallback flag var */

loc_004361B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_004361C6; /* je: equal / zero */

loc_004361BC: ;
    MEM32(eax + 0x90) = 1;

loc_004361C6: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_004361D7; /* je: equal / zero */

loc_004361CD: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_004361D3: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;

loc_004361D7: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) goto loc_004361E8; /* je: equal / zero */

loc_004361DE: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_004361E4: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;

loc_004361E8: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004361EC
 * Original: 0x004361EC - 0x00436211 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004361EC(void)
{
    int _flags = 0; /* fallback flag var */

loc_004361EC: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x24) = 1;
    PUSH32(esp, MEM32(0x561B8C));
    PUSH32(esp, 0); sub_00436177(); /* call 0x00436177 */

loc_00436201: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x28), 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(esi + 0x28), 2)) ? 1 : 0); /* setne */
    MEM32(esi + 0x28) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436211
 * Original: 0x00436211 - 0x0043622F (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436211(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00436211: ;
    if (CMP_NE(MEM32(ecx + 4), 0)) goto loc_00436225; /* jne: not equal / not zero */

loc_00436217: ;
    eax = MEM32(ecx + 0x28);
    eax--;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax + 3;
    MEM32(ecx + 0x28) = eax;

loc_00436225: ;
    MEM32(ecx + 0x24) = 0;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0043622F
 * Original: 0x0043622F - 0x00436260 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043622F(void)
{

loc_0043622F: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    ecx = eax + eax * 4;
    ecx = ecx << 7;
    ecx = ecx + MEM32(esi + 0x10);
    POP32(esp, edi);
    MEM32(edx + 0x10) = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = 0x280;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00436260
 * Original: 0x00436260 - 0x00436291 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436260(void)
{

loc_00436260: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    ecx = eax + eax * 4;
    ecx = ecx << 7;
    ecx = ecx + MEM32(esi + 0x14);
    POP32(esp, edi);
    MEM32(edx + 0x10) = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = 0x280;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00436291
 * Original: 0x00436291 - 0x0043630B (122 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436291(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00436291: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x3C;
    eax = MEM32(0x75F11C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = ebp + -60;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F8), _icall_esp); /* indirect call */
    }

loc_004362AC: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0043622F(); /* call 0x0043622F */

loc_004362BA: ;
    eax = MEM32(esi);
    ecx = MEM32(0x75F11C);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (CMP_EQ(MEM32(ecx + eax * 4 + 0x28), 0)) goto loc_004362DE; /* je: equal / zero */

loc_004362CD: ;
    ecx = MEM32(edi);
    edx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

loc_004362DE: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0); sub_00435C8B(); /* call 0x00435C8B */

loc_004362EC: ;
    esi = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = ebp + -28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_004362FB: ;
    eax = ebp + -60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F4), _icall_esp); /* indirect call */
    }

loc_00436305: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043630B
 * Original: 0x0043630B - 0x004363F6 (235 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043630B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043630B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); sub_00436260(); /* call 0x00436260 */

loc_0043632B: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_00436333: ;
    if (TEST_Z(eax, eax)) goto loc_004363F1; /* je: equal / zero */

loc_0043633B: ;
    ecx = MEM32(0x75F11C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004342C8(); /* call 0x004342C8 */

loc_00436358: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ebp + -12);
    eax = eax - ecx;
    eax = eax + MEM32(ebp + -4);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    eax = MEM32(ebp + -8);
    edi = MEM32(ebp + -40);
    eax = eax + ecx;
    ebx = 0x140;
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + -4);
    edx = edx - ecx;
    ecx = 0x500;
    if (CMP_AE(edx, ecx)) goto loc_004363AA; /* jae: above or equal (unsigned >=) */

loc_00436386: ;
    edx = edx >> 2;
    ebx = edx;
    MEM32(ebp + 8) = ebx;
    if ((edx == 0)) goto loc_0043639F; /* je: equal / zero */

loc_00436390: ;
    SET_LO16(edx, MEM16(eax + 2));
    MEM16(edi) = LO16(edx);
    edi++;
    edi++;
    eax = eax + 4;
    ebx--;
    if ((ebx != 0)) goto loc_00436390; /* jne: not equal / not zero */

loc_0043639F: ;
    eax = MEM32(ebp + -8);
    ebx = 0x140;
    ebx = ebx - MEM32(ebp + 8);

loc_004363AA: ;
    if (CMP_BE(ebx & ebx, 0)) goto loc_004363BD; /* jbe: below or equal (unsigned <=) */

loc_004363AE: ;
    SET_LO16(edx, MEM16(eax + 2));
    MEM16(edi) = LO16(edx);
    edi++;
    edi++;
    eax = eax + 4;
    ebx--;
    if ((ebx != 0)) goto loc_004363AE; /* jne: not equal / not zero */

loc_004363BD: ;
    POP32(esp, edi);
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + -16), ecx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_B(MEM32(ebp + -16), ecx)) goto loc_004363D0; /* jb: below (unsigned <) */

loc_004363C6: ;
    eax = MEM32(esi + 0x2C);
    eax = eax + ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    goto loc_004363DF;

loc_004363D0: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -12);
    eax = eax + ecx + -640;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }

loc_004363DF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x2C) = edx;
    esi = MEM32(esi + 8);
    eax = MEM32(esi);
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_004363F1: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004363F6
 * Original: 0x004363F6 - 0x0043642D (55 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004363F6(void)
{
    int _flags = 0; /* fallback flag var */

loc_004363F6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_00436406: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_00436425; /* jl: less (signed <) */

loc_0043640C: ;
    if (CMP_NE(MEM32(esi + 0x24), 0)) goto loc_00436422; /* jne: not equal / not zero */

loc_00436412: ;
    if (CMP_NE(MEM32(esi + 0x28), 0)) goto loc_00436422; /* jne: not equal / not zero */

loc_00436418: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_00436177(); /* call 0x00436177 */

loc_00436420: ;
    goto loc_00436425;

loc_00436422: ;
    MEM32(esi + 0x20) = edi;

loc_00436425: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043642D
 * Original: 0x0043642D - 0x0043643B (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043642D(void)
{

loc_0043642D: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043643B
 * Original: 0x0043643B - 0x00436443 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043643B(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043643B: ;
    ecx = MEM32(ecx + 0x18);
    g_seh_ebp = ebp; sub_00435EA0(); return; /* tail jmp 0x00435EA0 */

}

/**
 * sub_00436443
 * Original: 0x00436443 - 0x0043647B (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436443(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436443: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0); sub_00435D9E(); /* call 0x00435D9E */

loc_0043644E: ;
    if (TEST_Z(eax, eax)) { sub_0043647B(); return; } /* je: equal / zero */

loc_00436452: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0); sub_00435EB4(); /* call 0x00435EB4 */

loc_0043645A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0043646D; /* je: equal / zero */

loc_00436461: ;
    if (CMP_AE(eax, 0x154)) goto loc_00436477; /* jae: above or equal (unsigned >=) */

loc_00436468: ;
    eax = eax + 0x14;
    goto loc_00436474;

loc_0043646D: ;
    if (CMP_BE(eax & eax, 0)) goto loc_00436477; /* jbe: below or equal (unsigned <=) */

loc_00436471: ;
    eax = eax + 0xFFFFFFECu;

loc_00436474: ;
    MEM32(esi + 0x30) = eax;

loc_00436477: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436482
 * Original: 0x00436482 - 0x004364DA (88 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436482(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00436482: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00435CFC(); /* call 0x00435CFC */

loc_00436494: ;
    esi = MEM32(ebx + 0x34);
    ecx = ebx + 0x3C;
    edx = MEM32(ecx);
    edx = edx + edx * 4;
    edi = esi + edx * 2;
    esi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    eax = MEM32(ecx);
    eax++;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x38));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x38)); }
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = edx;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_004364BE: ;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if ((MEM32(ecx) != eax)) goto loc_004364BE; /* jne: not equal / not zero */

loc_004364C3: ;
    ebx = ebx + 0x40;
    MEM32(ebp + -8) = ebx;
    eax = 1;
    ecx = MEM32(ebp + -8);
    /* TODO: xadd dword ptr [ecx], eax */
    eax++;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004364DA
 * Original: 0x004364DA - 0x0043650D (51 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004364DA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004364DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x6C);
    if (CMP_BE(eax, ecx)) goto loc_00436504; /* jbe: below or equal (unsigned <=) */

loc_004364EF: ;
    eax = eax - ecx;
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x68);
    eax = eax + ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00435D7A(); /* call 0x00435D7A */

loc_00436504: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) + eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0043650D
 * Original: 0x0043650D - 0x0043655F (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043650D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043650D: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(MEM32(esi + 0x64), 3)) goto loc_0043655D; /* jne: not equal / not zero */

loc_00436516: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0)) goto loc_0043655D; /* je: equal / zero */

loc_0043651C: ;
    PUSH32(esp, 0); sub_004364DA(); /* call 0x004364DA */

loc_00436521: ;
    PUSH32(esp, MEM32(esi + 0x6C));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(esi + 0x68));
    PUSH32(esp, 0); sub_00435E98(); /* call 0x00435E98 */

loc_0043652F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00436535: ;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    SET_LO8(ecx, LO8(eax));
    MEM32(esi + 0x64) = 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00436548: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x6C));
    eax = MEM32(0x75F11C);
    PUSH32(esp, MEM32(esi + 0x78));
    eax = MEM32(eax);
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_0043655D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043655F
 * Original: 0x0043655F - 0x004365A5 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043655F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043655F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0043656D: ;
    SET_LO8(ebx, LO8(eax));
    eax = esi + 0x3C;
    MEM32(ebp + -4) = eax;
    edx = 0;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_0043657F: ;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if ((MEM32(ecx) != eax)) goto loc_0043657F; /* jne: not equal / not zero */

loc_00436584: ;
    esi = esi + 0x40;
    MEM32(ebp + -4) = esi;
    edx = 0;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);

loc_00436594: ;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if ((MEM32(ecx) != eax)) goto loc_00436594; /* jne: not equal / not zero */

loc_00436599: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004365A1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004365A5
 * Original: 0x004365A5 - 0x004365EA (69 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004365A5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004365A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    if (CMP_AE(MEM32(esi + 0x40), eax)) goto loc_004365B7; /* jae: above or equal (unsigned >=) */

loc_004365B4: ;
    eax = MEM32(esi + 0x40);

loc_004365B7: ;
    if (CMP_BE(eax & eax, 0)) goto loc_004365DE; /* jbe: below or equal (unsigned <=) */

loc_004365BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = eax;

loc_004365C5: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(edi);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_004365D4: ;
    ebx = ebx + 0xA;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_004365C5; /* jne: not equal / not zero */

loc_004365DC: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004365DE: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0043655F(); /* call 0x0043655F */

loc_004365E5: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004365EA
 * Original: 0x004365EA - 0x0043667B (145 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004365EA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004365EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -8) = 0x80004005u;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00436601: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x64), ebx - flags set for next jcc */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(MEM32(esi + 0x64), ebx)) goto loc_0043662E; /* je: equal / zero */

loc_0043660B: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x68) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x70) = eax;
    PUSH32(esp, 0x14);
    eax = ecx;
    edx = 0; /* xor self */
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x78) = ebx;
    ecx = ecx - edx;
    MEM32(esi + 0x74) = ecx;

loc_0043662E: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00436637: ;
    if (CMP_EQ(MEM32(esi + 0x64), ebx)) goto loc_00436671; /* je: equal / zero */

loc_0043663C: ;
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    PUSH32(esp, MEM32(esi + 0x70));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(esi + 0x68));
    PUSH32(esp, 0); sub_00435E17(); /* call 0x00435E17 */

loc_00436660: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x6C) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00436671; /* je: equal / zero */

loc_00436667: ;
    MEM32(esi + 0x64) = 1;
    MEM32(ebp + -8) = ebx;

loc_00436671: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043667B
 * Original: 0x0043667B - 0x004366BB (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043667B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043667B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0x80004005u;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0043668A: ;
    edx = MEM32(esi + 0x64);
    if (CMP_EQ(edx, 4)) goto loc_004366AC; /* je: equal / zero */

loc_00436692: ;
    if (CMP_EQ(edx, 3)) goto loc_004366AC; /* je: equal / zero */

loc_00436697: ;
    if (TEST_Z(edx, edx)) goto loc_004366AC; /* je: equal / zero */

loc_0043669B: ;
    if (CMP_EQ(edx, 1)) goto loc_004366A5; /* je: equal / zero */

loc_004366A0: ;
    if (CMP_NE(edx, 2)) goto loc_004366AE; /* jne: not equal / not zero */

loc_004366A5: ;
    MEM32(esi + 0x64) = 3;

loc_004366AC: ;
    edi = 0; /* xor self */

loc_004366AE: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004366B6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004366BB
 * Original: 0x004366BB - 0x00436734 (121 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004366BB(void)
{

loc_004366BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x43609E;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_004366D0: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, ebx);
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 4);
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0xC);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x48) = edi;
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_0043670B: ;
    eax = esi + 0x7C;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x8C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x90) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00436734
 * Original: 0x00436734 - 0x0043677C (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436734(void)
{

loc_00436734: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_00434726(); /* call 0x00434726 */

loc_0043673D: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00436747: ;
    edi = 0x4360AB;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00016260(); /* call 0x00016260 */

loc_0043675A: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00436764: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_0043676E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00016260(); /* call 0x00016260 */

loc_00436779: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004367AA
 * Original: 0x004367AA - 0x004367CE (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004367AA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004367AA: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 0x14), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(esi + 0x14), 0)) { sub_004367CE(); return; } /* jne: not equal / not zero */

loc_004367B4: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_004367C0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x14) = eax;
    if (TEST_NZ(eax, eax)) { sub_004367CE(); return; } /* jne: not equal / not zero */

loc_004367C7: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_004367DC(); return; /* tail jmp 0x004367DC */

}

/**
 * sub_004367E8
 * Original: 0x004367E8 - 0x004367F9 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004367E8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004367E8: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 0x38), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(esi + 0x38), 0)) { sub_004367F9(); return; } /* jne: not equal / not zero */

loc_004367F2: ;
    edi = 0x80004005u;
    g_seh_ebp = ebp; sub_0043684B(); return; /* tail jmp 0x0043684B */

}

/**
 * sub_00436857
 * Original: 0x00436857 - 0x0043687B (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436857(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00436857: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 0x14), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(esi + 0x14), 0)) { sub_0043687B(); return; } /* jne: not equal / not zero */

loc_00436861: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_0043686D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x14) = eax;
    if (TEST_NZ(eax, eax)) { sub_0043687B(); return; } /* jne: not equal / not zero */

loc_00436874: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00436889(); return; /* tail jmp 0x00436889 */

}

/**
 * sub_00436895
 * Original: 0x00436895 - 0x004368B5 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436895(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436895: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00436734(); /* call 0x00436734 */

loc_0043689D: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_004368AF; /* je: equal / zero */

loc_004368A4: ;
    PUSH32(esp, 0x801B);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_004368AF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004368B5
 * Original: 0x004368B5 - 0x004368CF (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004368B5(void)
{

loc_004368B5: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x28) = 0;
    PUSH32(esp, 0); sub_004361B2(); /* call 0x004361B2 */

loc_004368C4: ;
    MEM32(esi + 0x24) = 1;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004368CF
 * Original: 0x004368CF - 0x00436911 (66 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004368CF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004368CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) & 0;
    ebx = 0; /* xor self */

loc_004368E6: ;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0043622F(); /* call 0x0043622F */

loc_004368F2: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    edx = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_00436901: ;
    if (TEST_S(eax, eax)) { sub_00436911(); return; } /* jl: less (signed <) */

loc_00436905: ;
    ebx++;
    if (CMP_B(ebx, 2)) goto loc_004368E6; /* jb: below (unsigned <) */

loc_0043690B: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00436918
 * Original: 0x00436918 - 0x0043692D (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436918(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00436918: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 8), ebx)) { sub_0043692D(); return; } /* jne: not equal / not zero */

loc_00436929: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00436983(); return; /* tail jmp 0x00436983 */

}

/**
 * sub_0043698E
 * Original: 0x0043698E - 0x00436A01 (115 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043698E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043698E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(MEM32(esi + 0x64), 1)) goto loc_004369FE; /* jne: not equal / not zero */

loc_0043699B: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x6C);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (CMP_BE(eax, ecx)) goto loc_004369C2; /* jbe: below or equal (unsigned <=) */

loc_004369A9: ;
    eax = eax - ecx;
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x68);
    eax = eax + ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00435D15(); /* call 0x00435D15 */

loc_004369BE: ;
    if (TEST_S(eax, eax)) goto loc_004369E1; /* jl: less (signed <) */

loc_004369C2: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) + eax;
    eax = MEM32(esi + 0x6C);
    if (CMP_BE(MEM32(esi + 0x70), eax)) goto loc_004369D8; /* jbe: below or equal (unsigned <=) */

loc_004369D0: ;
    eax = MEM32(esi + 0x74);
    if (CMP_A(eax, MEM32(esi + 0x78))) goto loc_004369FE; /* ja: above (unsigned >) */

loc_004369D8: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0043667B(); /* call 0x0043667B */

loc_004369DF: ;
    goto loc_004369F7;

loc_004369E1: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0043667B(); /* call 0x0043667B */

loc_004369E8: ;
    eax = MEM32(0x75F11C);
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x14), _icall_esp); /* indirect call */
    }

loc_004369F7: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0043650D(); /* call 0x0043650D */

loc_004369FE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00436A01
 * Original: 0x00436A01 - 0x00436A39 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436A01(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436A01: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_004361B2(); /* call 0x004361B2 */

loc_00436A09: ;
    ecx = MEM32(esi + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_00436A1B; /* je: equal / zero */

loc_00436A10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00436895(); /* call 0x00436895 */

loc_00436A17: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;

loc_00436A1B: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00436A25: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00436A33: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436A39
 * Original: 0x00436A39 - 0x00436AD1 (152 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436A39(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00436A39: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ebp = 0; /* xor self */
    if (CMP_EQ(MEM32(edi), ebp)) goto loc_00436A4D; /* je: equal / zero */

loc_00436A48: ;
    PUSH32(esp, 0); sub_004368B5(); /* call 0x004368B5 */

loc_00436A4D: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x43677C);
    ebx = 0x75F120;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x558344);
    PUSH32(esp, 0); sub_0055A11D(); /* call 0x0055A11D */

loc_00436A68: ;
    edi = eax;
    if (CMP_L(edi, ebp)) goto loc_00436AC3; /* jl: less (signed <) */

loc_00436A6E: ;
    if (CMP_EQ(MEM32(0x75F134), ebp)) goto loc_00436AA7; /* je: equal / zero */

loc_00436A76: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x436793);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x558350);
    PUSH32(esp, 0); sub_0055A11D(); /* call 0x0055A11D */

loc_00436A8F: ;
    edi = eax;
    if (CMP_L(edi, ebp)) goto loc_00436AC3; /* jl: less (signed <) */

loc_00436A95: ;
    if (CMP_EQ(MEM32(esi + 0x14), ebp)) goto loc_00436AA7; /* je: equal / zero */

loc_00436A9A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00436918(); /* call 0x00436918 */

loc_00436AA1: ;
    edi = eax;
    if (CMP_L(edi, ebp)) goto loc_00436AC3; /* jl: less (signed <) */

loc_00436AA7: ;
    if (CMP_EQ(MEM32(esi + 0x10), ebp)) goto loc_00436AB9; /* je: equal / zero */

loc_00436AAC: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004368CF(); /* call 0x004368CF */

loc_00436AB3: ;
    edi = eax;
    if (CMP_L(edi, ebp)) goto loc_00436AC3; /* jl: less (signed <) */

loc_00436AB9: ;
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = ebp;
    if (CMP_GE(edi, ebp)) goto loc_00436ACA; /* jge: greater or equal (signed >=) */

loc_00436AC3: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004368B5(); /* call 0x004368B5 */

loc_00436ACA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00436AD1
 * Original: 0x00436AD1 - 0x00436B40 (111 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436AD1(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436AD1: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    eax--;
    if ((eax == 0)) goto loc_00436B27; /* je: equal / zero */

loc_00436ADA: ;
    eax--;
    if ((eax == 0)) goto loc_00436B12; /* je: equal / zero */

loc_00436ADD: ;
    eax--;
    if ((eax != 0)) goto loc_00436B3C; /* jne: not equal / not zero */

loc_00436AE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004368B5(); /* call 0x004368B5 */

loc_00436AE6: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00436AF4: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00436A39(); /* call 0x00436A39 */

loc_00436AFB: ;
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = esi;
    PUSH32(esp, 0); sub_00436177(); /* call 0x00436177 */

loc_00436B05: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00436B0F: ;
    POP32(esp, edi);
    goto loc_00436B3C;

loc_00436B12: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00436A39(); /* call 0x00436A39 */

loc_00436B19: ;
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = esi;
    PUSH32(esp, 0); sub_00436177(); /* call 0x00436177 */

loc_00436B23: ;
    PUSH32(esp, 0);
    goto loc_00436B30;

loc_00436B27: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004368B5(); /* call 0x004368B5 */

loc_00436B2E: ;
    PUSH32(esp, 1);

loc_00436B30: ;
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_00436B3C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00436B40
 * Original: 0x00436B40 - 0x00436BA4 (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00436B40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* cmp MEM32(esi + 0x10), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 0x500;
    if (CMP_NE(MEM32(esi + 0x10), 0)) goto loc_00436B6F; /* jne: not equal / not zero */

loc_00436B50: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_00436B58: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(eax, eax)) goto loc_00436B9D; /* je: equal / zero */

loc_00436B5F: ;
    eax = MEM32(0x561B8C);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(0x561B8C);
    MEM32(esi + 0x20) = eax;

loc_00436B6F: ;
    PUSH32(esp, 0x801B);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_00436B7E: ;
    if (TEST_Z(eax, eax)) goto loc_00436B94; /* je: equal / zero */

loc_00436B82: ;
    ecx = MEM32(0x75F11C);
    PUSH32(esp, MEM32(ecx + 0x20));
    ecx = eax;
    PUSH32(esp, 0); sub_004366BB(); /* call 0x004366BB */

loc_00436B92: ;
    goto loc_00436B96;

loc_00436B94: ;
    eax = 0; /* xor self */

loc_00436B96: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x18) = eax;
    if (TEST_NZ(eax, eax)) { sub_00436BA4(); return; } /* jne: not equal / not zero */

loc_00436B9D: ;
    ebx = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00436BD4(); return; /* tail jmp 0x00436BD4 */

}

/**
 * sub_00436C0E
 * Original: 0x00436C0E - 0x00436C5F (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436C0E(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436C0E: ;
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(0x75F138), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(MEM32(0x75F138), 0)) goto loc_00436C5A; /* jne: not equal / not zero */

loc_00436C19: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6000);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561200), _icall_esp); /* indirect call */
    }

loc_00436C26: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 4) = esi;
    if (TEST_NZ(esi, esi)) goto loc_00436C37; /* jne: not equal / not zero */

loc_00436C30: ;
    eax = 0x8007000Eu;
    goto loc_00436C5C;

loc_00436C37: ;
    eax = 0;
    ecx = 0x75F138;
    edx = MEM32(esp + 4);
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if (TEST_Z(eax, eax)) goto loc_00436C5A; /* je: equal / zero */

loc_00436C4C: ;
    eax = esi + -24576;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611FC), _icall_esp); /* indirect call */
    }

loc_00436C5A: ;
    eax = 0; /* xor self */

loc_00436C5C: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00436C5F
 * Original: 0x00436C5F - 0x00436CBB (92 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436C5F(void)
{

loc_00436C5F: ;
    eax = ecx;
    ecx = 0; /* xor self */
    edx = eax + 0x9C;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = 0xFFFF;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x98) = 1;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0xA8) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00436CBB
 * Original: 0x00436CBB - 0x00436D01 (70 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436CBB(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436CBB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_00436CCD; /* je: equal / zero */

loc_00436CC8: ;
    PUSH32(esp, 0); sub_00437FBD(); /* call 0x00437FBD */

loc_00436CCD: ;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x14) = edi;
    edi = MEM32(esi + 0x20);
    eax = 0; /* xor self */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    edi = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    ecx = 0xA0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = esi;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = eax | 0xFFFFFFFFu;
    MEM32(esi + 0x50) = eax;
    edi = esi + 0x28;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436D01
 * Original: 0x00436D01 - 0x00436D61 (96 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436D01(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00436D01: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_00436D43; /* je: equal / zero */

loc_00436D12: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5218(); /* call 0x004C5218 */

loc_00436D1C: ;
    MEM32(ebp + -4) = edi;

loc_00436D1F: ;
    PUSH32(esp, 0); sub_004C5248(); /* call 0x004C5248 */

loc_00436D24: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    edx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

loc_00436D31: ;
    if (TEST_NZ(MEM8(ebp + -2), 1)) goto loc_00436D1F; /* jne: not equal / not zero */

loc_00436D37: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_00436D40: ;
    MEM32(esi + 0x18) = edi;

loc_00436D43: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00436D4D: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x3C));
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00436D5A: ;
    MEM32(esi + 0x3C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00436D61
 * Original: 0x00436D61 - 0x00436D81 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436D61(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436D61: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00438729(); /* call 0x00438729 */

loc_00436D69: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00436D7B; /* je: equal / zero */

loc_00436D70: ;
    PUSH32(esp, 0x8017);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00436D7B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
