/**
 * Burnout 3 - Recompiled code chunk 48
 * Functions: 250 (0x00423620 - 0x0042E5F2)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

extern void conker_debug_string(uint32_t xbox_va);

/**
 * sub_00423620
 * Original: 0x00423620 - 0x004236C1 (161 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423620(void)
{
    int _flags = 0; /* fallback flag var */

loc_00423620: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00423667; /* je: equal / zero */

loc_00423629: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x15BD);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423640: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423667; /* je: equal / zero */

loc_0042364C: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x15BE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423664: ;
    esp = esp + 0x10;

loc_00423667: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00423678: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) goto loc_004236C0; /* jl: less (signed <) */

loc_0042367F: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x21AC);
    PUSH32(esp, edx);
    edx = ecx + eax + 0x82EA18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A061E(); /* call 0x004A061E */

loc_0042369D: ;
    if (TEST_Z(eax, eax)) goto loc_004236C0; /* je: equal / zero */

loc_004236A1: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004236C0; /* je: equal / zero */

loc_004236AA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64683C);
    PUSH32(esp, 0x15C6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004236BD: ;
    esp = esp + 0x10;

loc_004236C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004236D0
 * Original: 0x004236D0 - 0x00423795 (197 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004236D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004236D0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00423740; /* je: equal / zero */

loc_004236D9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x15D5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004236F0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423740; /* je: equal / zero */

loc_004236FC: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x15D6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423714: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423740; /* je: equal / zero */

loc_00423720: ;
    ecx = MEM32(0x84BFA8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647BDC);
    PUSH32(esp, 0x15D7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042373D: ;
    esp = esp + 0x10;

loc_00423740: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_004228C0(); /* call 0x004228C0 */

loc_00423751: ;
    esp = esp + 8;
    if (TEST_S(eax, eax)) goto loc_00423794; /* jl: less (signed <) */

loc_00423758: ;
    ecx = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x56);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x21AC);
    edx = ecx + eax + 0x82EA18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A05AF(); /* call 0x004A05AF */

loc_00423771: ;
    if (TEST_Z(eax, eax)) goto loc_00423794; /* je: equal / zero */

loc_00423775: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00423794; /* je: equal / zero */

loc_0042377E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64683C);
    PUSH32(esp, 0x15DF);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423791: ;
    esp = esp + 0x10;

loc_00423794: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004237A0
 * Original: 0x004237A0 - 0x00423822 (130 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004237A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004237A0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00423810; /* je: equal / zero */

loc_004237A9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x1629);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004237C0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423810; /* je: equal / zero */

loc_004237CC: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x162A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004237E4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423810; /* je: equal / zero */

loc_004237F0: ;
    ecx = MEM32(0x84BEF0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648670);
    PUSH32(esp, 0x162C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042380D: ;
    esp = esp + 0x10;

loc_00423810: ;
    if (CMP_NE(MEM32(0x84BEFC), 2)) { sub_00423822(); return; } /* jne: not equal / not zero */

loc_00423819: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A056D(); /* call 0x004A056D */

loc_00423821: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00423830
 * Original: 0x00423830 - 0x004238E3 (179 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423830(void)
{
    int _flags = 0; /* fallback flag var */

loc_00423830: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004238A1; /* je: equal / zero */

loc_0042383A: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648654);
    PUSH32(esp, 0x163E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423851: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004238A1; /* je: equal / zero */

loc_0042385D: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648624);
    PUSH32(esp, 0x163F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423875: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004238A1; /* je: equal / zero */

loc_00423881: ;
    edi = MEM32(0x84BFA8);
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647BDC);
    PUSH32(esp, 0x1640);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042389E: ;
    esp = esp + 0x10;

loc_004238A1: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    esp = esp - 0xC;
    edi = esp;
    MEM32(edi) = eax;
    edx = 0; /* xor self */
    MEM32(edi + 4) = ecx;
    PUSH32(esp, esi);
    MEM32(edi + 8) = edx;
    PUSH32(esp, 0); sub_004A05BA(); /* call 0x004A05BA */

loc_004238BE: ;
    if (TEST_Z(eax, eax)) goto loc_004238E1; /* je: equal / zero */

loc_004238C2: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004238E1; /* je: equal / zero */

loc_004238CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64683C);
    PUSH32(esp, 0x164A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004238DE: ;
    esp = esp + 0x10;

loc_004238E1: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004238F0
 * Original: 0x004238F0 - 0x00423925 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004238F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004238F0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00423919; /* je: equal / zero */

loc_004238F9: ;
    ecx = MEM32(0x84BFAC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B28);
    PUSH32(esp, 0x16A4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423916: ;
    esp = esp + 0x10;

loc_00423919: ;
    eax = MEM32(0x82E798);
    edx = MEM32(0x82E79C);
    esp += 4; return; /* ret */

}

/**
 * sub_00423930
 * Original: 0x00423930 - 0x0042395F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423930(void)
{
    int _flags = 0; /* fallback flag var */

loc_00423930: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00423959; /* je: equal / zero */

loc_00423939: ;
    ecx = MEM32(0x84BFAC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B28);
    PUSH32(esp, 0x16DA);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423956: ;
    esp = esp + 0x10;

loc_00423959: ;
    eax = 0x82E74C;
    esp += 4; return; /* ret */

}

/**
 * sub_00423960
 * Original: 0x00423960 - 0x00423997 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423960(void)
{
    int _flags = 0; /* fallback flag var */

loc_00423960: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00423989; /* je: equal / zero */

loc_00423969: ;
    ecx = MEM32(0x84BFAC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B28);
    PUSH32(esp, 0x16FA);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423986: ;
    esp = esp + 0x10;

loc_00423989: ;
    eax = MEM32(0x82E75C);
    eax = eax >> 0x1B;
    eax = ~eax;
    eax = eax & 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004239A0
 * Original: 0x004239A0 - 0x00423AEB (331 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004239A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004239A0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00423A42; /* je: equal / zero */

loc_004239AD: ;
    ecx = MEM32(0x84BFAC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B28);
    PUSH32(esp, 0x1704);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004239CA: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423A42; /* je: equal / zero */

loc_004239D6: ;
    edx = MEM32(0x84BF60);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64802C);
    PUSH32(esp, 0x1705);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004239F3: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423A42; /* je: equal / zero */

loc_004239FF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64819C);
    PUSH32(esp, 0xDD7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423A12: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423A42; /* je: equal / zero */

loc_00423A1E: ;
    (void)0; /* cmp MEM32(0x84BF68), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(MEM32(0x84BF68), 1)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648174);
    PUSH32(esp, 0xDD8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423A3A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00423A42: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84BF6C) = 1;
    if (TEST_Z(eax, eax)) goto loc_00423A8F; /* je: equal / zero */

loc_00423A50: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648388);
    PUSH32(esp, 0xDE4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423A63: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00423A8F; /* je: equal / zero */

loc_00423A6F: ;
    edx = MEM32(0x84BF70);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(edx & edx, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64813C);
    PUSH32(esp, 0xDE5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423A8C: ;
    esp = esp + 0x10;

loc_00423A8F: ;
    eax = MEM32(0x82E76C);
    ecx = MEM32(0x82E768);
    PUSH32(esp, 0x84BF60);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x84BF74) = 0;
    PUSH32(esp, 0); sub_004A04F0(); /* call 0x004A04F0 */

loc_00423AB2: ;
    if (TEST_Z(eax, eax)) goto loc_00423AE0; /* je: equal / zero */

loc_00423AB6: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84BF64) = 0;
    if (TEST_Z(eax, eax)) goto loc_00423AEA; /* je: equal / zero */

loc_00423AC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1710);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423ADC: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00423AE0: ;
    MEM32(0x84BF64) = 1;

loc_00423AEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00423AF0
 * Original: 0x00423AF0 - 0x00423D2F (575 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423AF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00423AF0: ;
    SET_LO8(eax, MEM8(0x84BF0C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00423D2E; /* jne: not equal / not zero */

loc_00423AFD: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00423B26; /* je: equal / zero */

loc_00423B06: ;
    ecx = MEM32(0x84BFDC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647B00);
    PUSH32(esp, 0x175A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423B23: ;
    esp = esp + 0x10;

loc_00423B26: ;
    PUSH32(esp, 0x978);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00423B30: ;
    MEM32(0x84BFDC) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00423B61; /* je: equal / zero */

loc_00423B41: ;
    edx = MEM32(0x84BFE0);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647AD8);
    PUSH32(esp, 0x175D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423B5E: ;
    esp = esp + 0x10;

loc_00423B61: ;
    PUSH32(esp, 0x19400);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00423B6B: ;
    MEM32(0x84BFE0) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00423B9C; /* je: equal / zero */

loc_00423B7C: ;
    ecx = MEM32(0x84BFF4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647AB0);
    PUSH32(esp, 0x1760);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423B99: ;
    esp = esp + 0x10;

loc_00423B9C: ;
    PUSH32(esp, 0x978);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00423BA6: ;
    MEM32(0x84BFF4) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00423BD7; /* je: equal / zero */

loc_00423BB7: ;
    edx = MEM32(0x84BFF8);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647A88);
    PUSH32(esp, 0x1763);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423BD4: ;
    esp = esp + 0x10;

loc_00423BD7: ;
    PUSH32(esp, 0x19400);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00423BE1: ;
    MEM32(0x84BFF8) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84C000) = 0x1940;
    if (TEST_Z(eax, eax)) goto loc_00423C1C; /* je: equal / zero */

loc_00423BFC: ;
    ecx = MEM32(0x84BFFC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647A5C);
    PUSH32(esp, 0x1768);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423C19: ;
    esp = esp + 0x10;

loc_00423C1C: ;
    edx = MEM32(0x84C000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00423C28: ;
    MEM32(0x84BFFC) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00423C59; /* je: equal / zero */

loc_00423C39: ;
    ecx = MEM32(0x84C028);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647A30);
    PUSH32(esp, 0x176B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423C56: ;
    esp = esp + 0x10;

loc_00423C59: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00423C63: ;
    MEM32(0x84C028) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00423C94; /* je: equal / zero */

loc_00423C74: ;
    edx = MEM32(0x84C030);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647A08);
    PUSH32(esp, 0x176E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423C91: ;
    esp = esp + 0x10;

loc_00423C94: ;
    PUSH32(esp, 0x115C);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00423C9E: ;
    MEM32(0x84C030) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00423CCF; /* je: equal / zero */

loc_00423CAF: ;
    ecx = MEM32(0x84C034);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6479E0);
    PUSH32(esp, 0x1771);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423CCC: ;
    esp = esp + 0x10;

loc_00423CCF: ;
    PUSH32(esp, 0x19400);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00423CD9: ;
    MEM32(0x84C034) = eax;
    eax = MEM32(0x84BE58);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84C03C) = 0x1940;
    if (TEST_Z(eax, eax)) goto loc_00423D14; /* je: equal / zero */

loc_00423CF4: ;
    edx = MEM32(0x84C038);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6479B0);
    PUSH32(esp, 0x1776);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00423D11: ;
    esp = esp + 0x10;

loc_00423D14: ;
    eax = MEM32(0x84C03C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00423D1F: ;
    esp = esp + 4;
    MEM32(0x84C038) = eax;
    MEM8(0x84BF0C) = 1;

loc_00423D2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00423D30
 * Original: 0x00423D30 - 0x00423F60 (560 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423D30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00423D30: ;
    SET_LO8(eax, MEM8(0x84BF0C));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00423F5E; /* je: equal / zero */

loc_00423D40: ;
    PUSH32(esp, esi);
    esi = 0x84BFC0;

loc_00423D46: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_00423D78; /* je: equal / zero */

loc_00423D4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00423D52: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_00423D76; /* je: equal / zero */

loc_00423D5C: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x178D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00423D73: ;
    esp = esp + 0x10;

loc_00423D76: ;
    MEM32(esi) = ebx;

loc_00423D78: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x84BFD0)) goto loc_00423D46; /* jl: less (signed <) */

loc_00423D83: ;
    eax = MEM32(0x84BFD0);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(eax, ebx)) goto loc_00423DBD; /* je: equal / zero */

loc_00423D8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00423D93: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_00423DB7; /* je: equal / zero */

loc_00423D9D: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1795);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00423DB4: ;
    esp = esp + 0x10;

loc_00423DB7: ;
    MEM32(0x84BFD0) = ebx;

loc_00423DBD: ;
    eax = MEM32(0x84BFD4);
    if (CMP_EQ(eax, ebx)) goto loc_00423DF6; /* je: equal / zero */

loc_00423DC6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00423DCC: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_00423DF0; /* je: equal / zero */

loc_00423DD6: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x179C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00423DED: ;
    esp = esp + 0x10;

loc_00423DF0: ;
    MEM32(0x84BFD4) = ebx;

loc_00423DF6: ;
    eax = MEM32(0x84BFE8);
    if (CMP_EQ(eax, ebx)) goto loc_00423E2F; /* je: equal / zero */

loc_00423DFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00423E05: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_00423E29; /* je: equal / zero */

loc_00423E0F: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x17A3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00423E26: ;
    esp = esp + 0x10;

loc_00423E29: ;
    MEM32(0x84BFE8) = ebx;

loc_00423E2F: ;
    eax = MEM32(0x84C008);
    if (CMP_EQ(eax, ebx)) goto loc_00423E68; /* je: equal / zero */

loc_00423E38: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00423E3E: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_00423E62; /* je: equal / zero */

loc_00423E48: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x17AA);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00423E5F: ;
    esp = esp + 0x10;

loc_00423E62: ;
    MEM32(0x84C008) = ebx;

loc_00423E68: ;
    eax = MEM32(0x84BFDC);
    if (CMP_EQ(eax, ebx)) goto loc_00423E80; /* je: equal / zero */

loc_00423E71: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00423E77: ;
    esp = esp + 4;
    MEM32(0x84BFDC) = ebx;

loc_00423E80: ;
    eax = MEM32(0x84BFE0);
    if (CMP_EQ(eax, ebx)) goto loc_00423E98; /* je: equal / zero */

loc_00423E89: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00423E8F: ;
    esp = esp + 4;
    MEM32(0x84BFE0) = ebx;

loc_00423E98: ;
    eax = MEM32(0x84BFF4);
    if (CMP_EQ(eax, ebx)) goto loc_00423EB0; /* je: equal / zero */

loc_00423EA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00423EA7: ;
    esp = esp + 4;
    MEM32(0x84BFF4) = ebx;

loc_00423EB0: ;
    eax = MEM32(0x84BFF8);
    if (CMP_EQ(eax, ebx)) goto loc_00423EC8; /* je: equal / zero */

loc_00423EB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00423EBF: ;
    esp = esp + 4;
    MEM32(0x84BFF8) = ebx;

loc_00423EC8: ;
    eax = MEM32(0x84BFFC);
    if (CMP_EQ(eax, ebx)) goto loc_00423EE6; /* je: equal / zero */

loc_00423ED1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00423ED7: ;
    esp = esp + 4;
    MEM32(0x84BFFC) = ebx;
    MEM32(0x84C000) = ebx;

loc_00423EE6: ;
    eax = MEM32(0x84C028);
    if (CMP_EQ(eax, ebx)) goto loc_00423EFE; /* je: equal / zero */

loc_00423EEF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00423EF5: ;
    esp = esp + 4;
    MEM32(0x84C028) = ebx;

loc_00423EFE: ;
    eax = MEM32(0x84C030);
    if (CMP_EQ(eax, ebx)) goto loc_00423F16; /* je: equal / zero */

loc_00423F07: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00423F0D: ;
    esp = esp + 4;
    MEM32(0x84C030) = ebx;

loc_00423F16: ;
    eax = MEM32(0x84C034);
    if (CMP_EQ(eax, ebx)) goto loc_00423F2E; /* je: equal / zero */

loc_00423F1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00423F25: ;
    esp = esp + 4;
    MEM32(0x84C034) = ebx;

loc_00423F2E: ;
    eax = MEM32(0x84C038);
    if (CMP_EQ(eax, ebx)) goto loc_00423F4C; /* je: equal / zero */

loc_00423F37: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00423F3D: ;
    esp = esp + 4;
    MEM32(0x84C038) = ebx;
    MEM32(0x84C03C) = ebx;

loc_00423F4C: ;
    MEM32(0x84BFEC) = ebx;
    MEM32(0x84C00C) = ebx;
    MEM8(0x84BF0C) = LO8(ebx);

loc_00423F5E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00423F60
 * Original: 0x00423F60 - 0x00424229 (713 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00423F60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00423F60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x84BFC0;
    edi = 0; /* xor self */
    /* nop */

loc_00423F70: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, edi)) goto loc_00423FAE; /* je: equal / zero */

loc_00423F76: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_00423F7C: ;
    if (TEST_Z(eax, eax)) goto loc_00423FAE; /* je: equal / zero */

loc_00423F80: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00423F88: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, edi)) goto loc_00423FAC; /* je: equal / zero */

loc_00423F92: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1802);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00423FA9: ;
    esp = esp + 0x10;

loc_00423FAC: ;
    MEM32(esi) = edi;

loc_00423FAE: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x84BFD0)) goto loc_00423F70; /* jl: less (signed <) */

loc_00423FB9: ;
    eax = MEM32(0x84BFD0);
    if (CMP_EQ(eax, edi)) goto loc_00424001; /* je: equal / zero */

loc_00423FC2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_00423FC8: ;
    if (TEST_Z(eax, eax)) goto loc_00424001; /* je: equal / zero */

loc_00423FCC: ;
    eax = MEM32(0x84BFD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00423FD7: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, edi)) goto loc_00423FFB; /* je: equal / zero */

loc_00423FE1: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1813);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00423FF8: ;
    esp = esp + 0x10;

loc_00423FFB: ;
    MEM32(0x84BFD0) = edi;

loc_00424001: ;
    eax = MEM32(0x84BFD4);
    if (CMP_EQ(eax, edi)) goto loc_0042406B; /* je: equal / zero */

loc_0042400A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_00424010: ;
    if (CMP_EQ(eax, edi)) goto loc_0042406B; /* je: equal / zero */

loc_00424014: ;
    if (CMP_EQ(eax, 0x1500F0)) goto loc_00424020; /* je: equal / zero */

loc_0042401B: ;
    MEM32(0x84BFE4) = eax;

loc_00424020: ;
    eax = MEM32(0x84BF14);
    if (CMP_EQ(eax, edi)) goto loc_00424035; /* je: equal / zero */

loc_00424029: ;
    ecx = MEM32(0x84BF20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424032: ;
    esp = esp + 4;

loc_00424035: ;
    edx = MEM32(0x84BFD4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00424041: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, edi)) goto loc_00424065; /* je: equal / zero */

loc_0042404B: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1827);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00424062: ;
    esp = esp + 0x10;

loc_00424065: ;
    MEM32(0x84BFD4) = edi;

loc_0042406B: ;
    eax = MEM32(0x84BFE8);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    esi = 3;
    if (CMP_EQ(eax, edi)) goto loc_0042411F; /* je: equal / zero */

loc_0042407D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_00424083: ;
    if (CMP_EQ(eax, edi)) goto loc_0042411F; /* je: equal / zero */

loc_0042408B: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004240DE; /* jne: not equal / not zero */

loc_00424092: ;
    ecx = MEM32(0x84BFFC);
    edx = MEM32(0x84C000);
    eax = MEM32(0x84BFF4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x84BFF0);
    PUSH32(esp, edx);
    edx = MEM32(0x84BFE8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A06E3(); /* call 0x004A06E3 */

loc_004240B9: ;
    if (CMP_L(eax, edi)) goto loc_004240DE; /* jl: less (signed <) */

loc_004240BD: ;
    eax = MEM32(0x84BF10);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x84BFEC) = 2;
    if (CMP_EQ(eax, edi)) goto loc_004240E9; /* je: equal / zero */

loc_004240D0: ;
    ecx = MEM32(0x84BF1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004240D9: ;
    esp = esp + 4;
    goto loc_004240E9;

loc_004240DE: ;
    MEM32(0x84BFEC) = esi;
    MEM32(0x84C004) = eax;

loc_004240E9: ;
    edx = MEM32(0x84BFE8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_004240F5: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, edi)) goto loc_00424119; /* je: equal / zero */

loc_004240FF: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1849);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00424116: ;
    esp = esp + 0x10;

loc_00424119: ;
    MEM32(0x84BFE8) = edi;

loc_0042411F: ;
    eax = MEM32(0x84C008);
    if (CMP_EQ(eax, edi)) goto loc_00424225; /* je: equal / zero */

loc_0042412C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_00424132: ;
    if (CMP_EQ(eax, edi)) goto loc_00424225; /* je: equal / zero */

loc_0042413A: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004241B1; /* jne: not equal / not zero */

loc_00424141: ;
    ecx = MEM32(0x84C038);
    edx = MEM32(0x84C03C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x84C034);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(0x84C010);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x84C024));
    PUSH32(esp, 0x84C040);
    PUSH32(esp, ecx);
    ecx = MEM32(0x84C030);
    PUSH32(esp, edx);
    edx = MEM32(0x84C008);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A0701(); /* call 0x004A0701 */

loc_00424183: ;
    if (CMP_L(eax, edi)) goto loc_004241DF; /* jl: less (signed <) */

loc_00424187: ;
    eax = MEM32(esp + 8);
    MEM32(0x84C010) = eax;
    eax = MEM32(0x84BF18);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x84C00C) = 2;
    if (CMP_EQ(eax, edi)) goto loc_004241F0; /* je: equal / zero */

loc_004241A3: ;
    ecx = MEM32(0x84BF24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004241AC: ;
    esp = esp + 4;
    goto loc_004241F0;

loc_004241B1: ;
    if (CMP_NE(eax, 0x80159003u)) goto loc_004241DF; /* jne: not equal / not zero */

loc_004241B8: ;
    eax = MEM32(0x84BF18);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x84C010) = edi;
    MEM32(0x84C00C) = 2;
    if (CMP_EQ(eax, edi)) goto loc_004241F0; /* je: equal / zero */

loc_004241D1: ;
    edx = MEM32(0x84BF24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004241DA: ;
    esp = esp + 4;
    goto loc_004241F0;

loc_004241DF: ;
    MEM32(0x84C010) = edi;
    MEM32(0x84C00C) = esi;
    MEM32(0x84C044) = eax;

loc_004241F0: ;
    eax = MEM32(0x84C008);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_004241FB: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, edi)) goto loc_0042421F; /* je: equal / zero */

loc_00424205: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1878);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0042421C: ;
    esp = esp + 0x10;

loc_0042421F: ;
    MEM32(0x84C008) = edi;

loc_00424225: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00424230
 * Original: 0x00424230 - 0x004242B5 (133 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00424230: ;
    eax = MEM32(0x84BFBC);
    if (TEST_Z(eax, eax)) goto loc_0042426D; /* je: equal / zero */

loc_00424239: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0042423F: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00424263; /* je: equal / zero */

loc_00424249: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x188D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00424260: ;
    esp = esp + 0x10;

loc_00424263: ;
    MEM32(0x84BFBC) = 0;

loc_0042426D: ;
    eax = MEM32(0x84BFB8);
    if (TEST_Z(eax, eax)) goto loc_004242AA; /* je: equal / zero */

loc_00424276: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0042427C: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_004242A0; /* je: equal / zero */

loc_00424286: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1893);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0042429D: ;
    esp = esp + 0x10;

loc_004242A0: ;
    MEM32(0x84BFB8) = 0;

loc_004242AA: ;
    MEM32(0x75864C) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_004242C0
 * Original: 0x004242C0 - 0x004242D2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004242C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004242C0: ;
    eax = MEM32(0x84BFBC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_004242D2(); return; } /* je: equal / zero */

loc_004242CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_004242D0: ;
    g_seh_ebp = ebp; sub_004242E5(); return; /* tail jmp 0x004242E5 */

}

/**
 * sub_004243B0
 * Original: 0x004243B0 - 0x0042443B (139 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004243B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004243B0: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00424400; /* je: equal / zero */

loc_004243BA: ;
    (void)0; /* cmp ecx, MEM32(0x758650) - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(ecx, MEM32(0x758650))) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647958);
    PUSH32(esp, 0x18C0);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004243D5: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00424400; /* je: equal / zero */

loc_004243E1: ;
    (void)0; /* cmp MEM32(0x75864C), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(0x75864C), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64792C);
    PUSH32(esp, 0x18C1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004243FD: ;
    esp = esp + 0x10;

loc_00424400: ;
    esi = MEM32(0x75864C);
    esi = esi * 8 + 0x82DDC0;
    eax = esp + 8;
    edx = esi;
    ecx = 0x82DDC0;
    PUSH32(esp, 0); sub_00427EC0(); /* call 0x00427EC0 */

loc_0042441D: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(eax, esi)) { sub_0042443B(); return; } /* je: equal / zero */

loc_00424422: ;
    edx = MEM32(esp + 8);
    if (CMP_B(edx, MEM32(eax + 4))) { sub_0042443B(); return; } /* jb: below (unsigned <) */

loc_0042442B: ;
    if (CMP_A(edx, MEM32(eax + 4))) goto loc_00424435; /* ja: above (unsigned >) */

loc_0042442D: ;
    ecx = MEM32(esp + 4);
    if (CMP_B(ecx, MEM32(eax))) { sub_0042443B(); return; } /* jb: below (unsigned <) */

loc_00424435: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00424440
 * Original: 0x00424440 - 0x004244B0 (112 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00424440: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00424469; /* je: equal / zero */

loc_00424449: ;
    ecx = MEM32(0x84BFBC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647900);
    PUSH32(esp, 0x18D7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424466: ;
    esp = esp + 0x10;

loc_00424469: ;
    PUSH32(esp, 0x75864C);
    PUSH32(esp, 0x82BFF0);
    PUSH32(esp, 0x84BFB8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFA);
    PUSH32(esp, esi);
    MEM32(0x758650) = esi;
    PUSH32(esp, 0); sub_004A063F(); /* call 0x004A063F */

loc_0042448B: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_004244AF; /* je: equal / zero */

loc_00424495: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x18DF);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004244AC: ;
    esp = esp + 0x10;

loc_004244AF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004244B0
 * Original: 0x004244B0 - 0x00424567 (183 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004244B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004244B0: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004244DC; /* je: equal / zero */

loc_004244BC: ;
    esi = MEM32(0x84BFBC);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647900);
    PUSH32(esp, 0x18ED);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004244D9: ;
    esp = esp + 0x10;

loc_004244DC: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    esp = esp - 0xC;
    ebx = esp;
    eax = esi;
    MEM32(ebx) = eax;
    ecx = edi;
    edx = 0; /* xor self */
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A0659(); /* call 0x004A0659 */

loc_00424501: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00424529; /* je: equal / zero */

loc_0042450A: ;
    (void)0; /* cmp MEM32(0x75864C), 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM32(0x75864C), 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478B0);
    PUSH32(esp, 0x18F1);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424526: ;
    esp = esp + 0x10;

loc_00424529: ;
    eax = MEM32(0x75864C);
    MEM32(eax * 8 + 0x82DDC0) = esi;
    MEM32(eax * 8 + 0x82DDC4) = edi;
    eax++;
    MEM32(0x75864C) = eax;
    eax = eax * 8 + 0x82DDC0;
    edx = eax;
    edx = edx - 0x82DDC0;
    edx = (uint32_t)((int32_t)edx >> 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82DDC0);
    PUSH32(esp, 0); sub_00427B00(); /* call 0x00427B00 */

loc_00424560: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00424570
 * Original: 0x00424570 - 0x004245E7 (119 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424570(void)
{
    int _flags = 0; /* fallback flag var */

loc_00424570: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0042459C; /* je: equal / zero */

loc_0042457C: ;
    esi = MEM32(0x84BFBC);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647900);
    PUSH32(esp, 0x18F8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424599: ;
    esp = esp + 0x10;

loc_0042459C: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    esp = esp - 0xC;
    esi = esp;
    MEM32(esi) = eax;
    edx = 0; /* xor self */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A067B(); /* call 0x004A067B */

loc_004245BD: ;
    edi = MEM32(0x75864C);
    edi = edi * 8 + 0x82DDC0;
    ebx = esp + 0x14;
    eax = 0x82DDC0;
    PUSH32(esp, 0); sub_00427AB0(); /* call 0x00427AB0 */

loc_004245D8: ;
    eax = MEM32(0x75864C);
    POP32(esp, edi);
    eax--;
    POP32(esp, esi);
    MEM32(0x75864C) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004245F0
 * Original: 0x004245F0 - 0x0042466D (125 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004245F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004245F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0042461B; /* je: equal / zero */

loc_004245FB: ;
    esi = MEM32(0x84BFB4);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647878);
    PUSH32(esp, 0x1900);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424618: ;
    esp = esp + 0x10;

loc_0042461B: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x84BFB0);
    edx = 0; /* xor self */
    PUSH32(esp, edx);
    esi = esp + 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esp = esp - 0xC;
    esi = esp;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = 0;
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0); sub_004A069D(); /* call 0x004A069D */

loc_00424650: ;
    if (TEST_Z(eax, eax)) { sub_0042466D(); return; } /* je: equal / zero */

loc_00424654: ;
    edx = MEM32(0x84BFB0);
    PUSH32(esp, edx);
    MEM32(0x84BFB4) = 2;
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0042466A: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00424680
 * Original: 0x00424680 - 0x0042471A (154 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424680(void)
{
    int _flags = 0; /* fallback flag var */

loc_00424680: ;
    eax = MEM32(0x84BFB0);
    if (TEST_Z(eax, eax)) goto loc_00424719; /* je: equal / zero */

loc_0042468D: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004246B5; /* je: equal / zero */

loc_00424696: ;
    (void)0; /* cmp MEM32(0x84BFB4), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BFB4), 1)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64783C);
    PUSH32(esp, 0x1920);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004246B2: ;
    esp = esp + 0x10;

loc_004246B5: ;
    edx = MEM32(0x84BFB0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_004246C1: ;
    if (TEST_Z(eax, eax)) goto loc_00424719; /* je: equal / zero */

loc_004246C5: ;
    if (CMP_EQ(eax, 0x1500F0)) goto loc_004246D6; /* je: equal / zero */

loc_004246CC: ;
    MEM32(0x84BFB4) = 2;

loc_004246D6: ;
    eax = MEM32(0x84BFB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_004246E1: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00424705; /* je: equal / zero */

loc_004246EB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x192B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00424702: ;
    esp = esp + 0x10;

loc_00424705: ;
    MEM32(0x84BFB0) = 0;
    MEM32(0x84BFB4) = 0;

loc_00424719: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00424720
 * Original: 0x00424720 - 0x004247B1 (145 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00424720: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00424793; /* je: equal / zero */

loc_0042472D: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647818);
    PUSH32(esp, 0x193C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424744: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00424793; /* je: equal / zero */

loc_00424750: ;
    (void)0; /* cmp edi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6477E0);
    PUSH32(esp, 0x193D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424768: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00424793; /* je: equal / zero */

loc_00424774: ;
    (void)0; /* cmp MEM32(0x84BEFC), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BEFC), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485F4);
    PUSH32(esp, 0x193E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424790: ;
    esp = esp + 0x10;

loc_00424793: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_00424798: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    ecx = MEM32(edx + eax + 4);
    esi = edx + eax;
    eax = MEM32(esi);
    eax = eax | ecx;
    if ((eax == 0)) { sub_004247B1(); return; } /* je: equal / zero */

loc_004247AA: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_004247B3(); return; /* tail jmp 0x004247B3 */

}

/**
 * sub_00424870
 * Original: 0x00424870 - 0x004248EE (126 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424870(void)
{
    int _flags = 0; /* fallback flag var */

loc_00424870: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004248DF; /* je: equal / zero */

loc_00424879: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647818);
    PUSH32(esp, 0x195D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424890: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004248DF; /* je: equal / zero */

loc_0042489C: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6477E0);
    PUSH32(esp, 0x195E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004248B4: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004248DF; /* je: equal / zero */

loc_004248C0: ;
    (void)0; /* cmp MEM32(0x84BEFC), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BEFC), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485F4);
    PUSH32(esp, 0x195F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004248DC: ;
    esp = esp + 0x10;

loc_004248DF: ;
    ecx = MEM32(esi * 4 + 0x84BFC0);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_004248F0
 * Original: 0x004248F0 - 0x00424980 (144 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004248F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004248F0: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0042491A; /* je: equal / zero */

loc_004248FA: ;
    esi = MEM32(0x84BFD0);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64773C);
    PUSH32(esp, 0x1970);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424917: ;
    esp = esp + 0x10;

loc_0042491A: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x84BFD0);
    edx = 0; /* xor self */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    esp = esp - 0xC;
    eax = 0; /* xor self */
    esi = esp;
    MEM32(esi) = eax;
    ecx = 0; /* xor self */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0); sub_004A0710(); /* call 0x004A0710 */

loc_0042493D: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0042497E; /* jge: greater or equal (signed >=) */

loc_00424941: ;
    eax = MEM32(0x84BFD0);
    if (TEST_Z(eax, eax)) goto loc_0042497E; /* je: equal / zero */

loc_0042494A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00424950: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00424974; /* je: equal / zero */

loc_0042495A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x197D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00424971: ;
    esp = esp + 0x10;

loc_00424974: ;
    MEM32(0x84BFD0) = 0;

loc_0042497E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00424980
 * Original: 0x00424980 - 0x00424990 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00424980: ;
    eax = MEM32(0x84BFE4);
    if (TEST_Z(eax, eax)) { sub_00424990(); return; } /* je: equal / zero */

loc_00424989: ;
    ecx = 2;
    g_seh_ebp = ebp; sub_0042499C(); return; /* tail jmp 0x0042499C */

}

/**
 * sub_00424A00
 * Original: 0x00424A00 - 0x00424B54 (340 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00424A00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x30);
    MEM32(eax) = 0;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    ebx = ecx;
    if (CMP_LE(edx & edx, 0)) goto loc_00424A54; /* jle: less or equal (signed <=) */

loc_00424A19: ;
    /* nop */

loc_00424A20: ;
    esi = MEM32(ecx);
    if (CMP_NE(esi, MEM32(esp + 0x1C))) goto loc_00424A3A; /* jne: not equal / not zero */

loc_00424A28: ;
    esi = MEM32(ecx + 4);
    if (CMP_NE(esi, MEM32(esp + 0x20))) goto loc_00424A3A; /* jne: not equal / not zero */

loc_00424A31: ;
    esi = MEM32(ecx + 0xC);
    if (CMP_EQ(esi, MEM32(esp + 0x24))) goto loc_00424A46; /* je: equal / zero */

loc_00424A3A: ;
    esi = MEM32(edi);
    eax++;
    ecx = ecx + 0x18;
    if (CMP_L(eax, esi)) goto loc_00424A20; /* jl: less (signed <) */

loc_00424A44: ;
    goto loc_00424A54;

loc_00424A46: ;
    ecx = eax + eax * 2;
    esi = ebx + ecx * 8;
    if (TEST_NZ(esi, esi)) goto loc_00424AD7; /* jne: not equal / not zero */

loc_00424A54: ;
    eax = MEM32(esp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00424B50; /* je: equal / zero */

loc_00424A60: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00424A8C; /* je: equal / zero */

loc_00424A6A: ;
    (void)0; /* cmp edx, MEM32(esp + 0x10) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(edx, MEM32(esp + 0x10))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6476B0);
    PUSH32(esp, 0x19D9);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00424A83: ;
    ecx = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00424A8C: ;
    eax = MEM32(edi);
    if (CMP_GE(eax, MEM32(esp + 0x10))) goto loc_00424B50; /* jge: greater or equal (signed >=) */

loc_00424A98: ;
    edx = MEM32(esp + 0x1C);
    eax = eax + eax * 2;
    esi = ebx + eax * 8;
    eax = MEM32(esp + 0x20);
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x10) = 0;
    eax = MEM32(edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    eax = eax << 4;
    eax = eax + edx;
    MEM32(esi + 0x14) = eax;
    MEM32(edi) = MEM32(edi) + 1;
    goto loc_00424ADD;

loc_00424AD7: ;
    ecx = MEM32(0x84BE58);

loc_00424ADD: ;
    eax = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00424B04; /* jle: less or equal (signed <=) */

loc_00424AE6: ;
    eax = MEM32(esi + 0x14);
    /* nop */

loc_00424AF0: ;
    edx = ZX16(MEM16(eax));
    if (CMP_EQ(edx, MEM32(esp + 0x28))) goto loc_00424B04; /* je: equal / zero */

loc_00424AF9: ;
    edx = MEM32(esi + 0x10);
    edi++;
    eax = eax + 0x10;
    if (CMP_L(edi, edx)) goto loc_00424AF0; /* jl: less (signed <) */

loc_00424B04: ;
    if (TEST_Z(ecx, ecx)) goto loc_00424B24; /* je: equal / zero */

loc_00424B08: ;
    (void)0; /* cmp edi, MEM32(esp + 0x18) - flags set for next jcc */
    SET_LO8(eax, (CMP_L(edi, MEM32(esp + 0x18))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647690);
    PUSH32(esp, 0x19EF);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00424B21: ;
    esp = esp + 0x10;

loc_00424B24: ;
    if (CMP_GE(edi, MEM32(esp + 0x18))) goto loc_00424B50; /* jge: greater or equal (signed >=) */

loc_00424B2A: ;
    eax = MEM32(esi + 0x10);
    if (CMP_L(edi, eax)) goto loc_00424B3D; /* jl: less (signed <) */

loc_00424B31: ;
    ecx = MEM32(esp + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_00424B3D; /* je: equal / zero */

loc_00424B39: ;
    eax++;
    MEM32(esi + 0x10) = eax;

loc_00424B3D: ;
    if (CMP_GE(edi, MEM32(esi + 0x10))) goto loc_00424B50; /* jge: greater or equal (signed >=) */

loc_00424B42: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esp + 0x30);
    edi = edi << 4;
    edi = edi + eax;
    MEM32(ecx) = edi;

loc_00424B50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00424B60
 * Original: 0x00424B60 - 0x00424BEB (139 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00424B60: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00424BD2; /* je: equal / zero */

loc_00424B6C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647818);
    PUSH32(esp, 0x1A0E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424B83: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00424BD2; /* je: equal / zero */

loc_00424B8F: ;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, 4)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6477E0);
    PUSH32(esp, 0x1A0F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424BA7: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00424BD2; /* je: equal / zero */

loc_00424BB3: ;
    (void)0; /* cmp MEM32(0x84BEFC), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BEFC), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6485F4);
    PUSH32(esp, 0x1A10);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424BCF: ;
    esp = esp + 0x10;

loc_00424BD2: ;
    PUSH32(esp, 0); sub_004A0451(); /* call 0x004A0451 */

loc_00424BD7: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    edx = MEM32(esi + eax);
    esi = esi + eax;
    edx = edx | MEM32(esi + 4);
    if ((edx == 0)) { sub_00424BEB(); return; } /* je: equal / zero */

loc_00424BE4: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_00424BED(); return; /* tail jmp 0x00424BED */

}

/**
 * sub_00424C50
 * Original: 0x00424C50 - 0x00424C61 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00424C50: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84BFE4);
    if (TEST_Z(eax, eax)) { sub_00424C61(); return; } /* je: equal / zero */

loc_00424C5A: ;
    ecx = 2;
    g_seh_ebp = ebp; sub_00424C6D(); return; /* tail jmp 0x00424C6D */

}

/**
 * sub_00424D00
 * Original: 0x00424D00 - 0x00424D11 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00424D00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84BFE4);
    if (TEST_Z(eax, eax)) { sub_00424D11(); return; } /* je: equal / zero */

loc_00424D0A: ;
    eax = 2;
    g_seh_ebp = ebp; sub_00424D1E(); return; /* tail jmp 0x00424D1E */

}

/**
 * sub_00424DC0
 * Original: 0x00424DC0 - 0x00424DD4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00424DC0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BFE4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_00424DD4(); return; } /* je: equal / zero */

loc_00424DCD: ;
    ecx = 2;
    g_seh_ebp = ebp; sub_00424DE0(); return; /* tail jmp 0x00424DE0 */

}

/**
 * sub_00424E50
 * Original: 0x00424E50 - 0x00424E60 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00424E50: ;
    eax = MEM32(0x84BFE4);
    if (TEST_Z(eax, eax)) { sub_00424E60(); return; } /* je: equal / zero */

loc_00424E59: ;
    ecx = 2;
    g_seh_ebp = ebp; sub_00424E6C(); return; /* tail jmp 0x00424E6C */

}

/**
 * sub_00424F30
 * Original: 0x00424F30 - 0x00424F78 (72 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424F30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00424F30: ;
    eax = MEM32(0x84BFD4);
    if (TEST_Z(eax, eax)) goto loc_00424F6D; /* je: equal / zero */

loc_00424F39: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00424F3F: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00424F63; /* je: equal / zero */

loc_00424F49: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1ADC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00424F60: ;
    esp = esp + 0x10;

loc_00424F63: ;
    MEM32(0x84BFD4) = 0;

loc_00424F6D: ;
    MEM32(0x84BFE4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00424F80
 * Original: 0x00424F80 - 0x00424FDD (93 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424F80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00424F80: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00424FD2; /* je: equal / zero */

loc_00424F89: ;
    ecx = MEM32(0x84BFEC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647638);
    PUSH32(esp, 0x1B03);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424FA6: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00424FD2; /* je: equal / zero */

loc_00424FB2: ;
    edx = MEM32(0x84BFE8);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647610);
    PUSH32(esp, 0x1B04);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00424FCF: ;
    esp = esp + 0x10;

loc_00424FD2: ;
    MEM32(0x84BFF0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00424FE0
 * Original: 0x00424FE0 - 0x00425077 (151 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00424FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00424FE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042502D; /* je: equal / zero */

loc_00424FEA: ;
    ecx = MEM32(0x84BFEC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647638);
    PUSH32(esp, 0x1B14);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425007: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042502D; /* je: equal / zero */

loc_00425013: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_G(esi & esi, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647670);
    PUSH32(esp, 0x1B15);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042502A: ;
    esp = esp + 0x10;

loc_0042502D: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(0x84BFF8);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x84BFF4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x65);
    eax = 0x84BFF0;
    PUSH32(esp, 0); sub_00424A00(); /* call 0x00424A00 */

loc_00425059: ;
    eax = MEM32(esp + 0x24);
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) goto loc_00425075; /* je: equal / zero */

loc_00425064: ;
    MEM16(eax) = LO16(edi);
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = 0;

loc_00425075: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00425080
 * Original: 0x00425080 - 0x004250EA (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00425080: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_004250D0; /* je: equal / zero */

loc_0042508D: ;
    ecx = MEM32(0x84BFEC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647638);
    PUSH32(esp, 0x1B8A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004250AA: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004250D0; /* je: equal / zero */

loc_004250B6: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_G(esi & esi, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647670);
    PUSH32(esp, 0x1B8B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004250CD: ;
    esp = esp + 0x10;

loc_004250D0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = 0xFFFF;
    PUSH32(esp, 0); sub_00424FE0(); /* call 0x00424FE0 */

loc_004250E4: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004250F0
 * Original: 0x004250F0 - 0x0042517D (141 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004250F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004250F0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425142; /* je: equal / zero */

loc_004250F9: ;
    ecx = MEM32(0x84BFEC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647638);
    PUSH32(esp, 0x1BA7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425116: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425142; /* je: equal / zero */

loc_00425122: ;
    edx = MEM32(0x84BFE8);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647610);
    PUSH32(esp, 0x1BA8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042513F: ;
    esp = esp + 0x10;

loc_00425142: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x84BFF4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x84BFE8);
    PUSH32(esp, 0);
    MEM32(0x84BF10) = eax;
    eax = MEM32(0x84BFF0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x84BF1C) = ecx;
    PUSH32(esp, 0); sub_004A06D8(); /* call 0x004A06D8 */

loc_0042516E: ;
    if (TEST_S(eax, eax)) { sub_0042517D(); return; } /* jl: less (signed <) */

loc_00425172: ;
    MEM32(0x84BFEC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004251D0
 * Original: 0x004251D0 - 0x00425226 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004251D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004251D0: ;
    eax = MEM32(0x84BFE8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_0042520C; /* je: equal / zero */

loc_004251DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_004251E2: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_00425206; /* je: equal / zero */

loc_004251EC: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1BCA);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00425203: ;
    esp = esp + 0x10;

loc_00425206: ;
    MEM32(0x84BFE8) = esi;

loc_0042520C: ;
    MEM32(0x84BF10) = esi;
    MEM32(0x84BF1C) = esi;
    MEM32(0x84BFEC) = esi;
    MEM32(0x84C004) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00425230
 * Original: 0x00425230 - 0x00425314 (228 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00425230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004252A2; /* je: equal / zero */

loc_0042523D: ;
    (void)0; /* cmp MEM32(0x84BFEC), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BFEC), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6475D8);
    PUSH32(esp, 0x1BE4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425259: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004252A2; /* je: equal / zero */

loc_00425265: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_G(esi & esi, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647670);
    PUSH32(esp, 0x1BE5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042527C: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004252A2; /* je: equal / zero */

loc_00425288: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6475C0);
    PUSH32(esp, 0x1BE6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042529F: ;
    esp = esp + 0x10;

loc_004252A2: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(0x84BFF8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x84BFF4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x65);
    eax = 0x84BFF0;
    PUSH32(esp, 0); sub_00424A00(); /* call 0x00424A00 */

loc_004252D3: ;
    esi = MEM32(esp + 0x28);
    esp = esp + 0x24;
    if (TEST_Z(esi, esi)) { sub_00425314(); return; } /* je: equal / zero */

loc_004252DE: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) { sub_00425314(); return; } /* je: equal / zero */

loc_004252E5: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_0042530A; /* je: equal / zero */

loc_004252EF: ;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, 1)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647590);
    PUSH32(esp, 0x1BEE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00425307: ;
    esp = esp + 0x10;

loc_0042530A: ;
    eax = MEM32(esi + 8);
    MEM32(edi) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00425320
 * Original: 0x00425320 - 0x004253AC (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425320(void)
{
    int _flags = 0; /* fallback flag var */

loc_00425320: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425391; /* je: equal / zero */

loc_0042532C: ;
    (void)0; /* cmp MEM32(0x84BFEC), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84BFEC), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6475D8);
    PUSH32(esp, 0x1C87);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425348: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425391; /* je: equal / zero */

loc_00425354: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_G(esi & esi, 0)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647670);
    PUSH32(esp, 0x1C88);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042536B: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425391; /* je: equal / zero */

loc_00425377: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6475C0);
    PUSH32(esp, 0x1C89);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042538E: ;
    esp = esp + 0x10;

loc_00425391: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00425230(); /* call 0x00425230 */

loc_004253A7: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004253B0
 * Original: 0x004253B0 - 0x0042543E (142 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004253B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004253B0: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if (TEST_Z(eax, eax)) goto loc_00425427; /* je: equal / zero */

loc_004253BB: ;
    ebp = MEM32(0x84C00C);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ebp, ebp)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647528);
    PUSH32(esp, 0x1CBE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004253D8: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425427; /* je: equal / zero */

loc_004253E4: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(edi & edi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647508);
    PUSH32(esp, 0x1CBF);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004253FB: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425427; /* je: equal / zero */

loc_00425407: ;
    (void)0; /* cmp edi, 0x65 - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(edi, 0x65)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6474DC);
    PUSH32(esp, 0x1CC0);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042541F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00425427: ;
    ebx = MEM32(esp + 0x10);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ebp = MEM32(esp + 0xC);
    if (CMP_A(ebx & ebx, 0)) goto loc_00425437; /* ja: above (unsigned >) */

loc_00425433: ;
    if (CMP_BE(ebp & ebp, 0)) { sub_0042543E(); return; } /* jbe: below or equal (unsigned <=) */

loc_00425437: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_00425440(); return; /* tail jmp 0x00425440 */

}

/**
 * sub_004254D0
 * Original: 0x004254D0 - 0x004255C1 (241 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004254D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004254D0: ;
    eax = MEM32(0x84BE58);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_00425594; /* je: equal / zero */

loc_004254E5: ;
    (void)0; /* cmp MEM32(0x84C00C), esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C00C), esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647528);
    PUSH32(esp, 0x1CDA);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425500: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, esi)) goto loc_00425594; /* je: equal / zero */

loc_00425510: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(edi, esi)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647508);
    PUSH32(esp, 0x1CDB);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425527: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, esi)) goto loc_00425594; /* je: equal / zero */

loc_00425533: ;
    (void)0; /* cmp edi, 0x65 - flags set for next jcc */
    SET_LO8(ecx, (CMP_LE(edi, 0x65)) ? 1 : 0); /* setle */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6474DC);
    PUSH32(esp, 0x1CDC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042554B: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, esi)) goto loc_00425594; /* je: equal / zero */

loc_00425557: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_G(ebx, esi)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6474A0);
    PUSH32(esp, 0x1CDD);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042556E: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, esi)) goto loc_00425594; /* je: equal / zero */

loc_0042557A: ;
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_G(ebp, esi)) ? 1 : 0); /* setg */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647670);
    PUSH32(esp, 0x1CDE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425591: ;
    esp = esp + 0x10;

loc_00425594: ;
    MEM32(0x84C018) = esi;
    MEM32(0x84C01C) = esi;
    MEM32(0x84C024) = esi;
    MEM32(0x84C040) = esi;
    POP32(esp, esi);
    MEM32(0x84C02C) = ebp;
    MEM32(0x84C020) = ebx;
    MEM32(0x84C010) = edi;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004255D0
 * Original: 0x004255D0 - 0x0042563E (110 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004255D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004255D0: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425621; /* je: equal / zero */

loc_004255D9: ;
    ecx = MEM32(0x84C00C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647528);
    PUSH32(esp, 0x1D2A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004255F6: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425621; /* je: equal / zero */

loc_00425602: ;
    (void)0; /* cmp MEM32(0x84C024), 0x40 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(MEM32(0x84C024), 0x40)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64746C);
    PUSH32(esp, 0x1D2C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042561E: ;
    esp = esp + 0x10;

loc_00425621: ;
    eax = MEM32(0x84C024);
    if (CMP_GE(eax, 0x40)) goto loc_0042563D; /* jge: greater or equal (signed >=) */

loc_0042562B: ;
    ecx = MEM32(0x84C028);
    MEM16(ecx + eax * 2) = 0xFFFE;
    eax++;
    MEM32(0x84C024) = eax;

loc_0042563D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00425640
 * Original: 0x00425640 - 0x004256AE (110 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425640(void)
{
    int _flags = 0; /* fallback flag var */

loc_00425640: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425691; /* je: equal / zero */

loc_00425649: ;
    ecx = MEM32(0x84C00C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647528);
    PUSH32(esp, 0x1D4C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425666: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425691; /* je: equal / zero */

loc_00425672: ;
    (void)0; /* cmp MEM32(0x84C024), 0x40 - flags set for next jcc */
    SET_LO8(edx, (CMP_L(MEM32(0x84C024), 0x40)) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64746C);
    PUSH32(esp, 0x1D4E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042568E: ;
    esp = esp + 0x10;

loc_00425691: ;
    eax = MEM32(0x84C024);
    if (CMP_GE(eax, 0x40)) goto loc_004256AD; /* jge: greater or equal (signed >=) */

loc_0042569B: ;
    ecx = MEM32(0x84C028);
    MEM16(ecx + eax * 2) = 0xFFFF;
    eax++;
    MEM32(0x84C024) = eax;

loc_004256AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004256B0
 * Original: 0x004256B0 - 0x00425717 (103 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004256B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004256B0: ;
    eax = MEM32(0x84BE58);
    esp = esp - 0xC;
    if (TEST_Z(eax, eax)) goto loc_004256DC; /* je: equal / zero */

loc_004256BC: ;
    ecx = MEM32(0x84C00C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647528);
    PUSH32(esp, 0x1D5D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004256D9: ;
    esp = esp + 0x10;

loc_004256DC: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(0x84C01C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    MEM32(0x84BF18) = edx;
    edx = MEM32(0x84C018);
    MEM32(0x84BF24) = eax;
    if (CMP_A(ecx & ecx, 0)) goto loc_00425703; /* ja: above (unsigned >) */

loc_004256FF: ;
    if (CMP_BE(edx & edx, 0)) { sub_00425717(); return; } /* jbe: below or equal (unsigned <=) */

loc_00425703: ;
    eax = esp;
    MEM32(esp + 8) = 0;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00425719(); return; /* tail jmp 0x00425719 */

}

/**
 * sub_004257A0
 * Original: 0x004257A0 - 0x004257FC (92 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004257A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004257A0: ;
    eax = MEM32(0x84C008);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_004257DC; /* je: equal / zero */

loc_004257AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_004257B2: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_004257D6; /* je: equal / zero */

loc_004257BC: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x1D8D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004257D3: ;
    esp = esp + 0x10;

loc_004257D6: ;
    MEM32(0x84C008) = esi;

loc_004257DC: ;
    MEM32(0x84BF18) = esi;
    MEM32(0x84BF24) = esi;
    MEM32(0x84C00C) = esi;
    MEM32(0x84C010) = esi;
    MEM32(0x84C044) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00425800
 * Original: 0x00425800 - 0x00425887 (135 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425800(void)
{
    int _flags = 0; /* fallback flag var */

loc_00425800: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425875; /* je: equal / zero */

loc_0042580C: ;
    (void)0; /* cmp MEM32(0x84C00C), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C00C), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647438);
    PUSH32(esp, 0x1DAA);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425828: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425875; /* je: equal / zero */

loc_00425834: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647418);
    PUSH32(esp, 0x1DAB);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042584B: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425875; /* je: equal / zero */

loc_00425857: ;
    (void)0; /* cmp esi, MEM32(0x84C010) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, MEM32(0x84C010))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6473EC);
    PUSH32(esp, 0x1DAC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425872: ;
    esp = esp + 0x10;

loc_00425875: ;
    ecx = MEM32(0x84C030);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    eax = MEM32(esi + ecx);
    edx = MEM32(esi + ecx + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00425890
 * Original: 0x00425890 - 0x00425914 (132 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00425890: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425905; /* je: equal / zero */

loc_0042589C: ;
    (void)0; /* cmp MEM32(0x84C00C), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C00C), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647438);
    PUSH32(esp, 0x1DB8);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004258B8: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425905; /* je: equal / zero */

loc_004258C4: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647418);
    PUSH32(esp, 0x1DB9);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004258DB: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425905; /* je: equal / zero */

loc_004258E7: ;
    (void)0; /* cmp esi, MEM32(0x84C010) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, MEM32(0x84C010))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6473EC);
    PUSH32(esp, 0x1DBA);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425902: ;
    esp = esp + 0x10;

loc_00425905: ;
    edx = MEM32(0x84C030);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    eax = esi + edx + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00425920
 * Original: 0x00425920 - 0x004259AE (142 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00425920: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_0042596D; /* je: equal / zero */

loc_0042592C: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647418);
    PUSH32(esp, 0x1DD2);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425943: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0042596D; /* je: equal / zero */

loc_0042594F: ;
    (void)0; /* cmp esi, MEM32(0x84C010) - flags set for next jcc */
    SET_LO8(edx, (CMP_L(esi, MEM32(0x84C010))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6473EC);
    PUSH32(esp, 0x1DD3);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042596A: ;
    esp = esp + 0x10;

loc_0042596D: ;
    edx = MEM32(0x84C024);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    esi = edx + ecx;
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    edx = ecx;
    if (CMP_GE(ecx, esi)) goto loc_004259AC; /* jge: greater or equal (signed >=) */

loc_00425983: ;
    PUSH32(esp, edi);
    edi = MEM32(0x84C034);
    ecx = ecx << 4;
    ecx = ecx + edi;
    PUSH32(esp, ebp);

loc_00425990: ;
    ebp = ZX16(MEM16(ecx));
    if (CMP_EQ(ebp, ebx)) goto loc_004259A3; /* je: equal / zero */

loc_00425997: ;
    edx++;
    ecx = ecx + 0x10;
    if (CMP_L(edx, esi)) goto loc_00425990; /* jl: less (signed <) */

loc_0042599F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004259A3: ;
    edx = edx << 4;
    edx = edx + edi;
    POP32(esp, ebp);
    eax = edx;
    POP32(esp, edi);

loc_004259AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004259B0
 * Original: 0x004259B0 - 0x00425A8E (222 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004259B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004259B0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425A4C; /* je: equal / zero */

loc_004259C0: ;
    (void)0; /* cmp MEM32(0x84C00C), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C00C), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647438);
    PUSH32(esp, 0x1DF4);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004259DC: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425A4C; /* je: equal / zero */

loc_004259E8: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647418);
    PUSH32(esp, 0x1DF5);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004259FF: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425A4C; /* je: equal / zero */

loc_00425A0B: ;
    (void)0; /* cmp esi, MEM32(0x84C010) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, MEM32(0x84C010))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6473EC);
    PUSH32(esp, 0x1DF6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425A26: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425A4C; /* je: equal / zero */

loc_00425A32: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6475C0);
    PUSH32(esp, 0x1DF7);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425A49: ;
    esp = esp + 0x10;

loc_00425A4C: ;
    eax = esi;
    PUSH32(esp, 0); sub_00425920(); /* call 0x00425920 */

loc_00425A53: ;
    esi = eax;
    if (TEST_Z(esi, esi)) { sub_00425A8E(); return; } /* je: equal / zero */

loc_00425A59: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) { sub_00425A8E(); return; } /* je: equal / zero */

loc_00425A60: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00425A85; /* je: equal / zero */

loc_00425A6A: ;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 1)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647590);
    PUSH32(esp, 0x1DFD);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00425A82: ;
    esp = esp + 0x10;

loc_00425A85: ;
    ecx = MEM32(esi + 8);
    MEM32(edi) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00425AA0
 * Original: 0x00425AA0 - 0x00425B84 (228 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00425AA0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425B3C; /* je: equal / zero */

loc_00425AB0: ;
    (void)0; /* cmp MEM32(0x84C00C), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C00C), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647438);
    PUSH32(esp, 0x1E15);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425ACC: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425B3C; /* je: equal / zero */

loc_00425AD8: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647418);
    PUSH32(esp, 0x1E16);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425AEF: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425B3C; /* je: equal / zero */

loc_00425AFB: ;
    (void)0; /* cmp esi, MEM32(0x84C010) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, MEM32(0x84C010))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6473EC);
    PUSH32(esp, 0x1E17);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425B16: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425B3C; /* je: equal / zero */

loc_00425B22: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6475C0);
    PUSH32(esp, 0x1E18);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425B39: ;
    esp = esp + 0x10;

loc_00425B3C: ;
    eax = esi;
    PUSH32(esp, 0); sub_00425920(); /* call 0x00425920 */

loc_00425B43: ;
    esi = eax;
    if (TEST_Z(esi, esi)) { sub_00425B84(); return; } /* je: equal / zero */

loc_00425B49: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) { sub_00425B84(); return; } /* je: equal / zero */

loc_00425B50: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00425B75; /* je: equal / zero */

loc_00425B5A: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64755C);
    PUSH32(esp, 0x1E1E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00425B72: ;
    esp = esp + 0x10;

loc_00425B75: ;
    ecx = MEM32(esi + 8);
    MEM32(edi) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(edi + 4) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00425B90
 * Original: 0x00425B90 - 0x00425C3C (172 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425B90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00425B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425C2D; /* je: equal / zero */

loc_00425BA1: ;
    (void)0; /* cmp MEM32(0x84C00C), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C00C), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647438);
    PUSH32(esp, 0x1E56);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425BBD: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425C2D; /* je: equal / zero */

loc_00425BC9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647418);
    PUSH32(esp, 0x1E57);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425BE0: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425C2D; /* je: equal / zero */

loc_00425BEC: ;
    (void)0; /* cmp esi, MEM32(0x84C010) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, MEM32(0x84C010))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6473EC);
    PUSH32(esp, 0x1E58);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425C07: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425C2D; /* je: equal / zero */

loc_00425C13: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6475C0);
    PUSH32(esp, 0x1E59);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425C2A: ;
    esp = esp + 0x10;

loc_00425C2D: ;
    ebx = 0xFFFE;
    eax = esi;
    PUSH32(esp, 0); sub_00425AA0(); /* call 0x00425AA0 */

loc_00425C39: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00425C40
 * Original: 0x00425C40 - 0x00425CEC (172 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425C40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00425C40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425CDD; /* je: equal / zero */

loc_00425C51: ;
    (void)0; /* cmp MEM32(0x84C00C), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C00C), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647438);
    PUSH32(esp, 0x1E8A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425C6D: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425CDD; /* je: equal / zero */

loc_00425C79: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi & esi, 0)) ? 1 : 0); /* setge */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647418);
    PUSH32(esp, 0x1E8B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425C90: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425CDD; /* je: equal / zero */

loc_00425C9C: ;
    (void)0; /* cmp esi, MEM32(0x84C010) - flags set for next jcc */
    SET_LO8(ecx, (CMP_L(esi, MEM32(0x84C010))) ? 1 : 0); /* setl */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6473EC);
    PUSH32(esp, 0x1E8C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425CB7: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00425CDD; /* je: equal / zero */

loc_00425CC3: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6475C0);
    PUSH32(esp, 0x1E8D);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425CDA: ;
    esp = esp + 0x10;

loc_00425CDD: ;
    ebx = 0xFFFF;
    eax = esi;
    PUSH32(esp, 0); sub_004259B0(); /* call 0x004259B0 */

loc_00425CE9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00425CF0
 * Original: 0x00425CF0 - 0x00425D8F (159 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425CF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00425CF0: ;
    SET_LO8(eax, MEM8(0x84C128));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00425D8E; /* jne: not equal / not zero */

loc_00425CFD: ;
    PUSH32(esp, esi);
    esi = 0x84C168;

loc_00425D03: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00425D27; /* je: equal / zero */

loc_00425D0C: ;
    (void)0; /* cmp MEM32(esi), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(esi), 0)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647384);
    PUSH32(esp, 0x27BA);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425D24: ;
    esp = esp + 0x10;

loc_00425D27: ;
    PUSH32(esp, 0x1F40);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00425D31: ;
    MEM32(esi) = eax;
    esi = esi + 4;
    esp = esp + 4;
    if (CMP_L(esi, 0x84C178)) goto loc_00425D03; /* jl: less (signed <) */

loc_00425D41: ;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00425D6B; /* je: equal / zero */

loc_00425D4B: ;
    edx = MEM32(0x84C14C);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64735C);
    PUSH32(esp, 0x27BE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425D68: ;
    esp = esp + 0x10;

loc_00425D6B: ;
    PUSH32(esp, 0x4B0);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00425D75: ;
    esp = esp + 4;
    MEM32(0x84C14C) = eax;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_00425D82: ;
    MEM32(0x758658) = eax;
    MEM8(0x84C128) = 1;

loc_00425D8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00425D90
 * Original: 0x00425D90 - 0x00425DD4 (68 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00425D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00425D90: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(eax, eax)) goto loc_00425DC4; /* je: equal / zero */

loc_00425D9F: ;
    ecx = MEM32(0x84C12C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647324);
    PUSH32(esp, 0x287A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00425DBC: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00425DC4: ;
    if (TEST_S(esi, esi)) { sub_00425DD4(); return; } /* jl: less (signed <) */

loc_00425DC8: ;
    if (CMP_G(esi, 3)) { sub_00425DD4(); return; } /* jg: greater (signed >) */

loc_00425DCD: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_00425DD6(); return; /* tail jmp 0x00425DD6 */

}

/**
 * sub_00426060
 * Original: 0x00426060 - 0x004260C1 (97 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00426060(void)
{
    int _flags = 0; /* fallback flag var */

loc_00426060: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004260AB; /* je: equal / zero */

loc_00426069: ;
    (void)0; /* cmp MEM32(0x84C12C), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C12C), 1)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6472C4);
    PUSH32(esp, 0x2944);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00426085: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004260AB; /* je: equal / zero */

loc_00426091: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6472AC);
    PUSH32(esp, 0x2945);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004260A8: ;
    esp = esp + 0x10;

loc_004260AB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x82CFC8);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_004260B6: ;
    esp = esp + 8;
    MEM8(0x84C1A8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004260D0
 * Original: 0x004260D0 - 0x00426170 (160 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004260D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004260D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ecx;
    if (TEST_Z(eax, eax)) goto loc_00426121; /* je: equal / zero */

loc_004260DF: ;
    (void)0; /* cmp MEM32(0x84C12C), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C12C), 1)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6472C4);
    PUSH32(esp, 0x29AC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004260FB: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_00426121; /* je: equal / zero */

loc_00426107: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647290);
    PUSH32(esp, 0x29AD);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042611E: ;
    esp = esp + 0x10;

loc_00426121: ;
    eax = MEM32(0x84C1B0);
    if (TEST_Z(eax, eax)) goto loc_0042613D; /* je: equal / zero */

loc_0042612A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00426130: ;
    esp = esp + 4;
    MEM32(0x84C1B0) = 0;

loc_0042613D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00426143: ;
    ecx = MEM32(esp + 0x10);
    MEM32(0x84C1AC) = ecx;
    ecx = edi;
    edx = ecx;
    MEM32(0x84C1B4) = edi;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    esp = esp + 4;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    MEM32(0x84C1B0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00426170
 * Original: 0x00426170 - 0x0042638C (540 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00426170(void)
{
    int _flags = 0; /* fallback flag var */

loc_00426170: ;
    SET_LO8(eax, MEM8(0x84C190));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_004261E8; /* je: equal / zero */

loc_00426179: ;
    SET_LO8(eax, MEM8(0x84C1A8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00426194; /* jne: not equal / not zero */

loc_00426182: ;
    PUSH32(esp, 0x577B74);
    PUSH32(esp, 0x82CFC8);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_00426191: ;
    esp = esp + 8;

loc_00426194: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82CFC8);
    PUSH32(esp, 0x82CFC8);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_004261A5: ;
    ecx = MEM32(0x84C150);
    esp = esp + 4;
    eax = eax + eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004B9E55(); /* call 0x004B9E55 */

loc_004261BE: ;
    if (TEST_S(eax, eax)) goto loc_004262C6; /* jl: less (signed <) */

loc_004261C6: ;
    edx = MEM32(0x84C150);
    PUSH32(esp, 0);
    PUSH32(esp, 0x758658);
    PUSH32(esp, 4);
    PUSH32(esp, 0x4C5);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004B9E55(); /* call 0x004B9E55 */

loc_004261E0: ;
    if (TEST_S(eax, eax)) goto loc_004262C6; /* jl: less (signed <) */

loc_004261E8: ;
    SET_LO8(eax, MEM8(0x84C191));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0042629A; /* je: equal / zero */

loc_004261F5: ;
    eax = MEM32(0x84C150);
    PUSH32(esp, 0);
    PUSH32(esp, 0x75865C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B9E55(); /* call 0x004B9E55 */

loc_0042620E: ;
    if (TEST_S(eax, eax)) goto loc_004262C6; /* jl: less (signed <) */

loc_00426216: ;
    ecx = MEM32(0x84C150);
    PUSH32(esp, 0);
    PUSH32(esp, 0x84C1AC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x4C3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004B9E55(); /* call 0x004B9E55 */

loc_00426230: ;
    if (TEST_S(eax, eax)) goto loc_004262C6; /* jl: less (signed <) */

loc_00426238: ;
    eax = MEM32(0x84C1B0);
    if (TEST_Z(eax, eax)) goto loc_00426251; /* je: equal / zero */

loc_00426241: ;
    eax = MEM32(0x84C1B4);
    if (TEST_Z(eax, eax)) goto loc_00426251; /* je: equal / zero */

loc_0042624A: ;
    ecx = 1;
    goto loc_00426253;

loc_00426251: ;
    ecx = 0; /* xor self */

loc_00426253: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00426276; /* je: equal / zero */

loc_0042625C: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647250);
    PUSH32(esp, 0x2A2B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00426273: ;
    esp = esp + 0x10;

loc_00426276: ;
    eax = MEM32(0x84C1B0);
    ecx = MEM32(0x84C1B4);
    edx = MEM32(0x84C150);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x9C1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004B9E55(); /* call 0x004B9E55 */

loc_00426296: ;
    if (TEST_S(eax, eax)) goto loc_004262C6; /* jl: less (signed <) */

loc_0042629A: ;
    eax = MEM32(0x84C18C);
    if (CMP_EQ(eax, 2)) goto loc_004262A9; /* je: equal / zero */

loc_004262A4: ;
    if (CMP_NE(eax, 3)) goto loc_004262DB; /* jne: not equal / not zero */

loc_004262A9: ;
    eax = MEM32(0x84C150);
    PUSH32(esp, 0);
    PUSH32(esp, 0x84C198);
    PUSH32(esp, 8);
    PUSH32(esp, 0x581);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B9E55(); /* call 0x004B9E55 */

loc_004262C2: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004262D6; /* jge: greater or equal (signed >=) */

loc_004262C6: ;
    MEM32(0x84C130) = eax;
    MEM32(0x84C12C) = 3;
    esp += 4; return; /* ret */

loc_004262D6: ;
    eax = MEM32(0x84C18C);

loc_004262DB: ;
    if (CMP_EQ(eax, 5)) goto loc_004262E5; /* je: equal / zero */

loc_004262E0: ;
    if (CMP_NE(eax, 6)) goto loc_0042632F; /* jne: not equal / not zero */

loc_004262E5: ;
    SET_LO8(eax, MEM8(0x84C1B8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00426300; /* jne: not equal / not zero */

loc_004262EE: ;
    PUSH32(esp, 0x577B74);
    PUSH32(esp, 0x82D1D0);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_004262FD: ;
    esp = esp + 8;

loc_00426300: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82D1D0);
    PUSH32(esp, 0x82D1D0);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00426311: ;
    edx = MEM32(0x84C150);
    esp = esp + 4;
    ecx = eax + eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x682);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004B9E55(); /* call 0x004B9E55 */

loc_0042632A: ;
    eax = MEM32(0x84C18C);

loc_0042632F: ;
    if (CMP_NE(eax, 5)) goto loc_00426352; /* jne: not equal / not zero */

loc_00426334: ;
    eax = MEM32(0x84C150);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82B8F8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x791);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B9E55(); /* call 0x004B9E55 */

loc_0042634D: ;
    eax = MEM32(0x84C18C);

loc_00426352: ;
    if (CMP_NE(eax, 6)) goto loc_0042638B; /* jne: not equal / not zero */

loc_00426357: ;
    ecx = MEM32(0x84C150);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82E7EC);
    PUSH32(esp, 8);
    PUSH32(esp, 0x783);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004B9E55(); /* call 0x004B9E55 */

loc_00426371: ;
    edx = MEM32(0x84C150);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82E7E0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x787);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004B9E55(); /* call 0x004B9E55 */

loc_0042638B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00426390
 * Original: 0x00426390 - 0x0042660F (639 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00426390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00426390: ;
    eax = MEM32(0x84BE58);
    esp = esp - 0x6C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    esi = 1;
    if (CMP_EQ(eax, edi)) goto loc_004263EC; /* je: equal / zero */

loc_004263A7: ;
    (void)0; /* cmp MEM32(0x84C12C), esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C12C), esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6472C4);
    PUSH32(esp, 0x2A7B);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004263C2: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (CMP_EQ(eax, edi)) goto loc_004263EC; /* je: equal / zero */

loc_004263CE: ;
    (void)0; /* cmp MEM32(0x84C154), edi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(0x84C154), edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647228);
    PUSH32(esp, 0x2A7C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004263E9: ;
    esp = esp + 0x10;

loc_004263EC: ;
    eax = MEM32(esp + 0x80);
    ecx = MEM32(esp + 0x84);
    MEM32(0x84C1BC) = eax;
    MEM32(0x84C1C0) = ecx;
    MEM32(0x84C12C) = 2;
    PUSH32(esp, 0); sub_00426170(); /* call 0x00426170 */

loc_00426414: ;
    if (CMP_EQ(MEM32(0x84C12C), 3)) goto loc_00426607; /* je: equal / zero */

loc_00426421: ;
    eax = MEM32(0x84C18C);
    if (CMP_EQ(eax, esi)) goto loc_00426555; /* je: equal / zero */

loc_0042642E: ;
    if (CMP_EQ(eax, 8)) goto loc_00426555; /* je: equal / zero */

loc_00426437: ;
    if (CMP_NE(eax, 4)) goto loc_004264CC; /* jne: not equal / not zero */

loc_00426440: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, edi)) goto loc_00426467; /* je: equal / zero */

loc_00426449: ;
    (void)0; /* cmp MEM32(0x84C188), esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(0x84C188), esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647200);
    PUSH32(esp, 0x2A99);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00426464: ;
    esp = esp + 0x10;

loc_00426467: ;
    esi = MEM32(0x84C150);
    ecx = MEM32(0x84C1A0);
    edx = MEM32(0x84C1A4);
    PUSH32(esp, 0x84C154);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = esp + 0x1C;
    PUSH32(esp, esi);
    esi = MEM32(0x84C14C);
    esp = esp - 0xC;
    MEM16(esp + 0x30) = LO16(edi);
    MEM32(esp + 0x2C) = 0x10;
    ebp = MEM32(esi);
    ebx = esp;
    MEM32(ebx) = ebp;
    ebp = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(ebx + 4) = ebp;
    MEM32(ebx + 8) = esi;
    esp = esp - 0xC;
    esi = esp;
    MEM32(esi) = ecx;
    eax = 0; /* xor self */
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    eax = MEM32(0x84C1CC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004BE128(); /* call 0x004BE128 */

loc_004264C7: ;
    goto loc_004265AF;

loc_004264CC: ;
    if (CMP_EQ(eax, 3)) goto loc_00426501; /* je: equal / zero */

loc_004264D1: ;
    if (CMP_EQ(eax, 2)) goto loc_00426501; /* je: equal / zero */

loc_004264D6: ;
    ecx = MEM32(0x84C14C);
    edx = MEM32(0x84C188);
    eax = MEM32(0x84C150);
    PUSH32(esp, 0x84C154);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x84C1CC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004BB24E(); /* call 0x004BB24E */

loc_004264FC: ;
    goto loc_004265AF;

loc_00426501: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, edi)) goto loc_0042651F; /* je: equal / zero */

loc_0042650A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6471D0);
    PUSH32(esp, 0x2AAE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042651C: ;
    esp = esp + 0x10;

loc_0042651F: ;
    edx = MEM32(0x84C150);
    eax = MEM32(0x84C19C);
    ecx = MEM32(0x84C198);
    PUSH32(esp, 0x84C154);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(0x84C14C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x84C188);
    PUSH32(esp, ecx);
    ecx = MEM32(0x84C1CC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004BE0CE(); /* call 0x004BE0CE */

loc_00426553: ;
    goto loc_004265AF;

loc_00426555: ;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, edi)) goto loc_0042657C; /* je: equal / zero */

loc_0042655E: ;
    (void)0; /* cmp MEM32(0x84C188), esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(0x84C188), esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647200);
    PUSH32(esp, 0x2A8C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00426579: ;
    esp = esp + 0x10;

loc_0042657C: ;
    eax = MEM32(0x84C150);
    ecx = MEM32(0x84C14C);
    PUSH32(esp, 0x84C154);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = MEM32(0x84C1CC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004BE0FB(); /* call 0x004BE0FB */

loc_004265AF: ;
    if (CMP_GE(eax, edi)) goto loc_00426607; /* jge: greater or equal (signed >=) */

loc_004265B3: ;
    MEM32(0x84C130) = eax;
    eax = MEM32(0x84C154);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(0x84C12C) = 3;
    if (CMP_EQ(eax, edi)) goto loc_004265FB; /* je: equal / zero */

loc_004265CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_004265D1: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, edi)) goto loc_004265F5; /* je: equal / zero */

loc_004265DB: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, edi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x2ACD);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004265F2: ;
    esp = esp + 0x10;

loc_004265F5: ;
    MEM32(0x84C154) = edi;

loc_004265FB: ;
    MEM32(0x84C1BC) = edi;
    MEM32(0x84C1C0) = edi;

loc_00426607: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_00426610
 * Original: 0x00426610 - 0x004266CE (190 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00426610(void)
{
    int _flags = 0; /* fallback flag var */

loc_00426610: ;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_004266A5; /* je: equal / zero */

loc_0042661D: ;
    (void)0; /* cmp MEM32(0x84C12C), 2 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(0x84C12C), 2)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647194);
    PUSH32(esp, 0x2ADC);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00426639: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004266A5; /* je: equal / zero */

loc_00426645: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647170);
    PUSH32(esp, 0x2ADD);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042665C: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004266A5; /* je: equal / zero */

loc_00426668: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647154);
    PUSH32(esp, 0x2ADE);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042667F: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_004266A5; /* je: equal / zero */

loc_0042668B: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x647134);
    PUSH32(esp, 0x2ADF);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004266A2: ;
    esp = esp + 0x10;

loc_004266A5: ;
    eax = MEM32(0x84C1D0);
    MEM32(ebx) = eax;
    ecx = MEM32(0x84C1D8);
    MEM32(esi) = ecx;
    edx = MEM32(0x84C1DC);
    MEM32(esi + 4) = edx;
    eax = MEM32(0x84C1E0);
    MEM32(edi) = eax;
    ecx = MEM32(0x84C1E4);
    MEM32(edi + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004266D0
 * Original: 0x004266D0 - 0x00426D1C (1612 bytes, 449 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004266D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004266D0: ;
    eax = MEM32(0x84C154);
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = 3;
    if (CMP_EQ(eax, ebx)) goto loc_004267B1; /* je: equal / zero */

loc_004266E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_004266EF: ;
    if (CMP_EQ(eax, ebx)) goto loc_00426797; /* je: equal / zero */

loc_004266F7: ;
    if (CMP_EQ(eax, 0x1500F0)) goto loc_0042670B; /* je: equal / zero */

loc_004266FE: ;
    MEM32(0x84C130) = eax;
    MEM32(0x84C12C) = esi;
    goto loc_00426711;

loc_0042670B: ;
    MEM32(0x84C12C) = ebx;

loc_00426711: ;
    eax = MEM32(0x84C1BC);
    if (CMP_EQ(eax, ebx)) goto loc_00426726; /* je: equal / zero */

loc_0042671A: ;
    ecx = MEM32(0x84C1C0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00426723: ;
    esp = esp + 4;

loc_00426726: ;
    edx = MEM32(0x84C154);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00426732: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_00426756; /* je: equal / zero */

loc_0042673C: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x2B38);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00426753: ;
    esp = esp + 0x10;

loc_00426756: ;
    eax = MEM32(0x84C150);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x84C154) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_004267B1; /* je: equal / zero */

loc_00426765: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B9E4A(); /* call 0x004B9E4A */

loc_0042676B: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_0042678F; /* je: equal / zero */

loc_00426775: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x2B3E);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0042678C: ;
    esp = esp + 0x10;

loc_0042678F: ;
    MEM32(0x84C150) = ebx;
    goto loc_004267B1;

loc_00426797: ;
    eax = MEM32(0x84C154);
    PUSH32(esp, 0x84C1E0);
    PUSH32(esp, 0x84C1D8);
    PUSH32(esp, 0x84C1D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B9E64(); /* call 0x004B9E64 */

loc_004267B1: ;
    eax = MEM32(0x84C158);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = 2;
    if (CMP_EQ(eax, ebx)) goto loc_0042681A; /* je: equal / zero */

loc_004267C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_004267C6: ;
    if (CMP_EQ(eax, ebx)) goto loc_0042681A; /* je: equal / zero */

loc_004267CA: ;
    if (CMP_EQ(eax, 0x1500F0)) goto loc_004267DE; /* je: equal / zero */

loc_004267D1: ;
    MEM32(0x84C138) = eax;
    MEM32(0x84C134) = ebp;
    goto loc_004267E4;

loc_004267DE: ;
    MEM32(0x84C134) = ebx;

loc_004267E4: ;
    ecx = MEM32(0x84C158);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_004267F0: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_00426814; /* je: equal / zero */

loc_004267FA: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x2B5C);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00426811: ;
    esp = esp + 0x10;

loc_00426814: ;
    MEM32(0x84C158) = ebx;

loc_0042681A: ;
    eax = MEM32(0x84C164);
    if (CMP_EQ(eax, ebx)) goto loc_004268B6; /* je: equal / zero */

loc_00426827: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_0042682D: ;
    if (CMP_EQ(eax, ebx)) goto loc_004268B6; /* je: equal / zero */

loc_00426835: ;
    if (CMP_EQ(eax, 0x1500F0)) goto loc_00426849; /* je: equal / zero */

loc_0042683C: ;
    MEM32(0x84C144) = ebp;
    MEM32(0x84C148) = eax;
    goto loc_00426881;

loc_00426849: ;
    eax = MEM32(0x84C164);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B9E15(); /* call 0x004B9E15 */

loc_00426857: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_0042687B; /* je: equal / zero */

loc_00426861: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x2B6F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00426878: ;
    esp = esp + 0x10;

loc_0042687B: ;
    MEM32(0x84C144) = ebx;

loc_00426881: ;
    eax = MEM32(0x84C164);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_0042688C: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_004268B0; /* je: equal / zero */

loc_00426896: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x2B74);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004268AD: ;
    esp = esp + 0x10;

loc_004268B0: ;
    MEM32(0x84C164) = ebx;

loc_004268B6: ;
    eax = MEM32(0x84C15C);
    if (CMP_EQ(eax, ebx)) goto loc_00426CF3; /* je: equal / zero */

loc_004268C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_004268C9: ;
    if (CMP_EQ(eax, ebx)) goto loc_00426CF3; /* je: equal / zero */

loc_004268D1: ;
    if (CMP_EQ(eax, 0x1500F0)) goto loc_004268E8; /* je: equal / zero */

loc_004268D8: ;
    MEM32(0x84C140) = eax;
    MEM32(0x84C13C) = esi;
    goto loc_00426CF3;

loc_004268E8: ;
    ecx = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x84C13C) = ebp;
    PUSH32(esp, 0); sub_004B9DEC(); /* call 0x004B9DEC */

loc_00426901: ;
    if (CMP_L(eax, ebx)) goto loc_00426CB2; /* jl: less (signed <) */

loc_00426909: ;
    (void)0; /* test MEM8(esp + 0x34), 8 - flags set for next jcc */
    MEM32(0x84C1F0) = ebx;
    if (TEST_Z(MEM8(esp + 0x34), 8)) goto loc_00426987; /* je: equal / zero */

loc_00426916: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_0042698D; /* je: equal / zero */

loc_0042691E: ;
    edx = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82E7DC);
    PUSH32(esp, 0x82DB38);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x6C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_0042693F: ;
    if (CMP_GE(eax, ebx)) goto loc_00426950; /* jge: greater or equal (signed >=) */

loc_00426943: ;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = eax;
    goto loc_0042698D;

loc_00426950: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_0042698D; /* je: equal / zero */

loc_00426958: ;
    ecx = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x758660);
    PUSH32(esp, 4);
    PUSH32(esp, 0x4C5);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_00426976: ;
    if (CMP_GE(eax, ebx)) goto loc_0042698D; /* jge: greater or equal (signed >=) */

loc_0042697A: ;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = eax;
    goto loc_0042698D;

loc_00426987: ;
    MEM32(0x82E7DC) = ebx;

loc_0042698D: ;
    if (TEST_Z(MEM8(esp + 0x34), 4)) goto loc_00426B22; /* je: equal / zero */

loc_00426998: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_00426B22; /* je: equal / zero */

loc_004269A4: ;
    eax = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x758664);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3C2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_004269C0: ;
    if (CMP_GE(eax, ebx)) goto loc_004269D4; /* jge: greater or equal (signed >=) */

loc_004269C4: ;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = eax;
    goto loc_00426B22;

loc_004269D4: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_00426B22; /* je: equal / zero */

loc_004269E0: ;
    edx = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x84C1E8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x4C3);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_004269FE: ;
    if (CMP_GE(eax, ebx)) goto loc_00426A12; /* jge: greater or equal (signed >=) */

loc_00426A02: ;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = eax;
    goto loc_00426B22;

loc_00426A12: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_00426B22; /* je: equal / zero */

loc_00426A1E: ;
    eax = MEM32(0x84C1EC);
    if (CMP_EQ(eax, ebx)) goto loc_00426A36; /* je: equal / zero */

loc_00426A27: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_00426A2D: ;
    esp = esp + 4;
    MEM32(0x84C1EC) = ebx;

loc_00426A36: ;
    PUSH32(esp, 0x499A);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_00426A40: ;
    esp = esp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x84C1F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x499A);
    MEM32(0x84C1EC) = eax;
    eax = MEM32(0x84C15C);
    PUSH32(esp, 0x9C1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_00426A64: ;
    if (CMP_NE(eax, 0x80155A02u)) goto loc_00426B0B; /* jne: not equal / not zero */

loc_00426A6F: ;
    ecx = MEM32(0x84C1F0);
    edx = MEM32(0x84C1EC);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = ecx >> 2;
    edi = edx;
    eax = 0xEEEEEEEEu;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0x84C164);
    ecx = esi;
    ecx = ecx & 3;
    PUSH32(esp, ebx);
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    ecx = MEM32(0x84C1F0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(0x84C15C);
    PUSH32(esp, 0x9C1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004B9E06(); /* call 0x004B9E06 */

loc_00426AB0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_GE(eax & eax, 0)) goto loc_00426AF9; /* jge: greater or equal (signed >=) */

loc_00426AB5: ;
    eax = MEM32(0x84C164);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00426AC0: ;
    esi = eax;
    eax = MEM32(0x84BE58);
    if (CMP_EQ(eax, ebx)) goto loc_00426AE5; /* je: equal / zero */

loc_00426ACB: ;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(esi, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x2BFF);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00426AE2: ;
    esp = esp + 0x10;

loc_00426AE5: ;
    MEM32(0x84C164) = ebx;
    MEM32(0x84C144) = ebp;
    MEM32(0x84C148) = esi;
    goto loc_00426B22;

loc_00426AF9: ;
    MEM32(0x84C148) = ebx;
    MEM32(0x84C144) = 1;
    goto loc_00426B22;

loc_00426B0B: ;
    if (CMP_GE(eax, ebx)) goto loc_00426B1C; /* jge: greater or equal (signed >=) */

loc_00426B0F: ;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = eax;
    goto loc_00426B22;

loc_00426B1C: ;
    MEM32(0x84C144) = ebx;

loc_00426B22: ;
    SET_LO8(edx, MEM8(esp + 0x34));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    if (((int32_t)(LO8(edx) & LO8(edx)) >= 0)) goto loc_00426B3D; /* jns: not sign (positive) */

loc_00426B32: ;
    MEM32(0x84C200) = ecx;
    MEM32(0x84C204) = eax;

loc_00426B3D: ;
    if (TEST_Z(LO8(edx), 0x40)) goto loc_00426B4D; /* je: equal / zero */

loc_00426B42: ;
    MEM32(0x84C208) = ecx;
    MEM32(0x84C20C) = eax;

loc_00426B4D: ;
    (void)0; /* cmp MEM8(esp + 0x1C), 3 - flags set for next jcc */
    esi = 3;
    if (CMP_NE(MEM8(esp + 0x1C), 3)) goto loc_00426B91; /* jne: not equal / not zero */

loc_00426B59: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_00426CBD; /* je: equal / zero */

loc_00426B65: ;
    eax = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x84C1F8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x581);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_00426B82: ;
    if (CMP_GE(eax, ebx)) goto loc_00426B91; /* jge: greater or equal (signed >=) */

loc_00426B86: ;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = eax;

loc_00426B91: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    if (CMP_EQ(LO8(eax), 5)) goto loc_00426B9D; /* je: equal / zero */

loc_00426B99: ;
    if (CMP_NE(LO8(eax), 6)) goto loc_00426BD5; /* jne: not equal / not zero */

loc_00426B9D: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_00426BD5; /* je: equal / zero */

loc_00426BA5: ;
    edx = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82E7F8);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x682);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_00426BC6: ;
    if (CMP_GE(eax, ebx)) goto loc_00426BD5; /* jge: greater or equal (signed >=) */

loc_00426BCA: ;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = eax;

loc_00426BD5: ;
    if (CMP_NE(MEM8(esp + 0x1C), 5)) goto loc_00426C15; /* jne: not equal / not zero */

loc_00426BDC: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_00426CBD; /* je: equal / zero */

loc_00426BE8: ;
    ecx = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82CFA8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x791);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_00426C06: ;
    if (CMP_GE(eax, ebx)) goto loc_00426C15; /* jge: greater or equal (signed >=) */

loc_00426C0A: ;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = eax;

loc_00426C15: ;
    if (CMP_NE(MEM8(esp + 0x1C), 6)) goto loc_00426C7E; /* jne: not equal / not zero */

loc_00426C1C: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_00426CBD; /* je: equal / zero */

loc_00426C28: ;
    eax = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82B8F0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x783);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_00426C45: ;
    if (CMP_L(eax, ebx)) goto loc_00426C73; /* jl: less (signed <) */

loc_00426C49: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_00426C7E; /* je: equal / zero */

loc_00426C51: ;
    edx = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82D1C8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x787);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_00426C6F: ;
    if (CMP_GE(eax, ebx)) goto loc_00426C7E; /* jge: greater or equal (signed >=) */

loc_00426C73: ;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = eax;

loc_00426C7E: ;
    if (CMP_NE(MEM8(esp + 0x1C), 7)) goto loc_00426CBD; /* jne: not equal / not zero */

loc_00426C85: ;
    if (CMP_EQ(MEM32(0x84C13C), esi)) goto loc_00426CBD; /* je: equal / zero */

loc_00426C8D: ;
    ecx = MEM32(0x84C15C);
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x837E48);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0xB81);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004B9DF7(); /* call 0x004B9DF7 */

loc_00426CAE: ;
    if (CMP_GE(eax, ebx)) goto loc_00426CBD; /* jge: greater or equal (signed >=) */

loc_00426CB2: ;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = eax;

loc_00426CBD: ;
    edx = MEM32(0x84C15C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00426CC9: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, ebx)) goto loc_00426CED; /* je: equal / zero */

loc_00426CD3: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x2C8F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00426CEA: ;
    esp = esp + 0x10;

loc_00426CED: ;
    MEM32(0x84C15C) = ebx;

loc_00426CF3: ;
    (void)0; /* cmp MEM8(0x84C128), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(MEM8(0x84C128), LO8(ebx))) goto loc_00426D16; /* je: equal / zero */

loc_00426CFC: ;
    esi = 0; /* xor self */
    edi = edi;

loc_00426D00: ;
    eax = esi;
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_00426D07: ;
    if (TEST_Z(eax, eax)) goto loc_00426D10; /* je: equal / zero */

loc_00426D0B: ;
    PUSH32(esp, 0); sub_00426D20(); /* call 0x00426D20 */

loc_00426D10: ;
    esi++;
    if (CMP_L(esi, 4)) goto loc_00426D00; /* jl: less (signed <) */

loc_00426D16: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00426D20
 * Original: 0x00426D20 - 0x00426D31 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00426D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00426D20: ;
    PUSH32(esp, ecx);
    if (TEST_S(esi, esi)) { sub_00426D31(); return; } /* jl: less (signed <) */

loc_00426D25: ;
    if (CMP_G(esi, 3)) { sub_00426D31(); return; } /* jg: greater (signed >) */

loc_00426D2A: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_00426D33(); return; /* tail jmp 0x00426D33 */

}

/**
 * sub_00426DB0
 * Original: 0x00426DB0 - 0x00426DC1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00426DB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00426DB0: ;
    PUSH32(esp, ecx);
    if (TEST_S(esi, esi)) { sub_00426DC1(); return; } /* jl: less (signed <) */

loc_00426DB5: ;
    if (CMP_G(esi, 3)) { sub_00426DC1(); return; } /* jg: greater (signed >) */

loc_00426DBA: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_00426DC3(); return; /* tail jmp 0x00426DC3 */

}

/**
 * sub_00426E20
 * Original: 0x00426E20 - 0x00426E34 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00426E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00426E20: ;
    PUSH32(esp, ecx);
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_S(edi, edi)) { sub_00426E34(); return; } /* jl: less (signed <) */

loc_00426E28: ;
    if (CMP_G(edi, 3)) { sub_00426E34(); return; } /* jg: greater (signed >) */

loc_00426E2D: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_00426E36(); return; /* tail jmp 0x00426E36 */

}

/**
 * sub_00427010
 * Original: 0x00427010 - 0x00427024 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427010: ;
    PUSH32(esp, ecx);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_S(esi, esi)) { sub_00427024(); return; } /* jl: less (signed <) */

loc_00427018: ;
    if (CMP_G(esi, 3)) { sub_00427024(); return; } /* jg: greater (signed >) */

loc_0042701D: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_00427026(); return; /* tail jmp 0x00427026 */

}

/**
 * sub_004270D0
 * Original: 0x004270D0 - 0x004270E4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004270D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004270D0: ;
    PUSH32(esp, ecx);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_S(esi, esi)) { sub_004270E4(); return; } /* jl: less (signed <) */

loc_004270D8: ;
    if (CMP_G(esi, 3)) { sub_004270E4(); return; } /* jg: greater (signed >) */

loc_004270DD: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_004270E6(); return; /* tail jmp 0x004270E6 */

}

/**
 * sub_00427190
 * Original: 0x00427190 - 0x004271A6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427190: ;
    esp = esp - 0x1C;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_S(edi, edi)) { sub_004271A6(); return; } /* jl: less (signed <) */

loc_0042719A: ;
    if (CMP_G(edi, 3)) { sub_004271A6(); return; } /* jg: greater (signed >) */

loc_0042719F: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_004271A8(); return; /* tail jmp 0x004271A8 */

}

/**
 * sub_004272A0
 * Original: 0x004272A0 - 0x004272B4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004272A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004272A0: ;
    PUSH32(esp, ecx);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_S(esi, esi)) { sub_004272B4(); return; } /* jl: less (signed <) */

loc_004272A8: ;
    if (CMP_G(esi, 3)) { sub_004272B4(); return; } /* jg: greater (signed >) */

loc_004272AD: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_004272B6(); return; /* tail jmp 0x004272B6 */

}

/**
 * sub_00427360
 * Original: 0x00427360 - 0x00427374 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427360: ;
    PUSH32(esp, ecx);
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_S(edi, edi)) { sub_00427374(); return; } /* jl: less (signed <) */

loc_00427368: ;
    if (CMP_G(edi, 3)) { sub_00427374(); return; } /* jg: greater (signed >) */

loc_0042736D: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_00427376(); return; /* tail jmp 0x00427376 */

}

/**
 * sub_004274D0
 * Original: 0x004274D0 - 0x004274E4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004274D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004274D0: ;
    PUSH32(esp, ecx);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_S(esi, esi)) { sub_004274E4(); return; } /* jl: less (signed <) */

loc_004274D8: ;
    if (CMP_G(esi, 3)) { sub_004274E4(); return; } /* jg: greater (signed >) */

loc_004274DD: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_004274E6(); return; /* tail jmp 0x004274E6 */

}

/**
 * sub_004275E0
 * Original: 0x004275E0 - 0x004275F4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004275E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004275E0: ;
    PUSH32(esp, ecx);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_S(esi, esi)) { sub_004275F4(); return; } /* jl: less (signed <) */

loc_004275E8: ;
    if (CMP_G(esi, 3)) { sub_004275F4(); return; } /* jg: greater (signed >) */

loc_004275ED: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_004275F6(); return; /* tail jmp 0x004275F6 */

}

/**
 * sub_004276F0
 * Original: 0x004276F0 - 0x00427732 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004276F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004276F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x84BE58);
    if (TEST_Z(eax, eax)) goto loc_00427722; /* je: equal / zero */

loc_004276FD: ;
    ecx = MEM32(0x84C13C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646FC4);
    PUSH32(esp, 0x2E0F);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0042771A: ;
    eax = MEM32(0x84BE58);
    esp = esp + 0x10;

loc_00427722: ;
    if (TEST_S(esi, esi)) { sub_00427732(); return; } /* jl: less (signed <) */

loc_00427726: ;
    if (CMP_G(esi, 3)) { sub_00427732(); return; } /* jg: greater (signed >) */

loc_0042772B: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_00427734(); return; /* tail jmp 0x00427734 */

}

/**
 * sub_00427870
 * Original: 0x00427870 - 0x00427881 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427870(void)
{
    int _flags = 0; /* fallback flag var */

loc_00427870: ;
    eax = MEM32(0x84C1F0);
    if (CMP_BE(eax & eax, 0)) { sub_00427881(); return; } /* jbe: below or equal (unsigned <=) */

loc_00427879: ;
    MEM32(ecx) = eax;
    eax = MEM32(0x84C1EC);
    esp += 4; return; /* ret */

}

/**
 * sub_00427890
 * Original: 0x00427890 - 0x004278E6 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00427890: ;
    eax = MEM32(0x84C15C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_004278CC; /* je: equal / zero */

loc_0042789C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_004278A2: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_004278C6; /* je: equal / zero */

loc_004278AC: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x2E78);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004278C3: ;
    esp = esp + 0x10;

loc_004278C6: ;
    MEM32(0x84C15C) = esi;

loc_004278CC: ;
    MEM32(0x84C1C4) = esi;
    MEM32(0x84C1C8) = esi;
    MEM32(0x84C13C) = esi;
    MEM32(0x84C140) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004278F0
 * Original: 0x004278F0 - 0x00427944 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004278F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004278F0: ;
    eax = MEM32(0x84C160);
    if (TEST_Z(eax, eax)) goto loc_00427943; /* je: equal / zero */

loc_004278F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_004278FF: ;
    if (TEST_Z(eax, eax)) goto loc_00427943; /* je: equal / zero */

loc_00427903: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_00427943; /* jne: not equal / not zero */

loc_0042790A: ;
    eax = MEM32(0x84C160);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00427915: ;
    ecx = MEM32(0x84BE58);
    if (TEST_Z(ecx, ecx)) goto loc_00427939; /* je: equal / zero */

loc_0042791F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6478DC);
    PUSH32(esp, 0x2EB2);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00427936: ;
    esp = esp + 0x10;

loc_00427939: ;
    MEM32(0x84C160) = 0;

loc_00427943: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00427950
 * Original: 0x00427950 - 0x00427AAF (351 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427950(void)
{
    int _flags = 0; /* fallback flag var */

loc_00427950: ;
    eax = MEM32(0x84C210);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) goto loc_004279FD; /* je: equal / zero */

loc_00427960: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_00427966: ;
    if (CMP_EQ(eax, esi)) goto loc_004279FD; /* je: equal / zero */

loc_0042796E: ;
    if (CMP_L(eax, esi)) goto loc_004279B9; /* jl: less (signed <) */

loc_00427970: ;
    eax = MEM32(0x84C210);
    PUSH32(esp, 0x82CFC0);
    PUSH32(esp, 0x82CFB0);
    PUSH32(esp, 0x82B8E0);
    PUSH32(esp, eax);
    MEM32(0x84C214) = esi;
    PUSH32(esp, 0); sub_004BE172(); /* call 0x004BE172 */

loc_00427990: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_004279C8; /* je: equal / zero */

loc_0042799A: ;
    (void)0; /* cmp eax, 0x1500F0 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, 0x1500F0)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x646F94);
    PUSH32(esp, 0x2FF6);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004279B4: ;
    esp = esp + 0x10;
    goto loc_004279C8;

loc_004279B9: ;
    MEM32(0x84C214) = 4;
    MEM32(0x82E7E8) = eax;

loc_004279C8: ;
    eax = MEM32(0x84C210);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_004279D3: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_004279F7; /* je: equal / zero */

loc_004279DD: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x2FFF);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_004279F4: ;
    esp = esp + 0x10;

loc_004279F7: ;
    MEM32(0x84C210) = esi;

loc_004279FD: ;
    eax = MEM32(0x84C218);
    if (CMP_EQ(eax, esi)) goto loc_00427AAD; /* je: equal / zero */

loc_00427A0A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0400(); /* call 0x004A0400 */

loc_00427A10: ;
    if (CMP_EQ(eax, esi)) goto loc_00427AAD; /* je: equal / zero */

loc_00427A18: ;
    if (CMP_L(eax, esi)) goto loc_00427A69; /* jl: less (signed <) */

loc_00427A1A: ;
    eax = MEM32(0x84C21C);
    if (CMP_EQ(eax, 1)) goto loc_00427A61; /* je: equal / zero */

loc_00427A24: ;
    if (CMP_NE(eax, 2)) goto loc_00427A61; /* jne: not equal / not zero */

loc_00427A29: ;
    eax = MEM32(0x84C218);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x84C220);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004BE163(); /* call 0x004BE163 */

loc_00427A3D: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_00427A61; /* je: equal / zero */

loc_00427A47: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x301A);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00427A5E: ;
    esp = esp + 0x10;

loc_00427A61: ;
    MEM32(0x84C21C) = esi;
    goto loc_00427A78;

loc_00427A69: ;
    MEM32(0x84C21C) = 4;
    MEM32(0x82E7E8) = eax;

loc_00427A78: ;
    eax = MEM32(0x84C218);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A040B(); /* call 0x004A040B */

loc_00427A83: ;
    ecx = MEM32(0x84BE58);
    if (CMP_EQ(ecx, esi)) goto loc_00427AA7; /* je: equal / zero */

loc_00427A8D: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x648BC0);
    PUSH32(esp, 0x3025);
    PUSH32(esp, 0x648BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00427AA4: ;
    esp = esp + 0x10;

loc_00427AA7: ;
    MEM32(0x84C218) = esi;

loc_00427AAD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00427AB0
 * Original: 0x00427AB0 - 0x00427B00 (80 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00427AB0: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, edi)) goto loc_00427AFE; /* je: equal / zero */

loc_00427AB5: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    /* nop */

loc_00427AC0: ;
    esi = MEM32(eax);
    if (CMP_NE(esi, ecx)) goto loc_00427ACD; /* jne: not equal / not zero */

loc_00427AC6: ;
    esi = MEM32(eax + 4);
    if (CMP_EQ(esi, edx)) goto loc_00427AD6; /* je: equal / zero */

loc_00427ACD: ;
    eax = eax + 8;
    if (CMP_NE(eax, edi)) goto loc_00427AC0; /* jne: not equal / not zero */

loc_00427AD4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00427AD6: ;
    if (CMP_EQ(eax, edi)) goto loc_00427AFE; /* je: equal / zero */

loc_00427ADA: ;
    ecx = eax + 8;
    if (CMP_EQ(ecx, edi)) goto loc_00427AFE; /* je: equal / zero */

loc_00427AE1: ;
    edx = MEM32(ecx);
    (void)0; /* cmp edx, MEM32(ebx) - flags set for next jcc */
    esi = MEM32(ecx + 4);
    if (CMP_NE(edx, MEM32(ebx))) goto loc_00427AEF; /* jne: not equal / not zero */

loc_00427AEA: ;
    if (CMP_EQ(esi, MEM32(ebx + 4))) goto loc_00427AF7; /* je: equal / zero */

loc_00427AEF: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = esi;
    eax = eax + 8;

loc_00427AF7: ;
    ecx = ecx + 8;
    if (CMP_NE(ecx, edi)) goto loc_00427AE1; /* jne: not equal / not zero */

loc_00427AFE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00427B00
 * Original: 0x00427B00 - 0x00427B9A (154 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427B00: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = ebx;
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_LE(eax, 0x20)) goto loc_00427B83; /* jle: less or equal (signed <=) */

loc_00427B1B: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_00427B20: ;
    if (CMP_LE(esi & esi, 0)) { sub_00427B9A(); return; } /* jle: less or equal (signed <=) */

loc_00427B24: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00427BD0(); /* call 0x00427BD0 */

loc_00427B30: ;
    ebp = MEM32(esp + 0x20);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esi + eax;
    eax = MEM32(esp + 0x1C);
    ecx = ebx;
    edx = eax;
    ecx = ecx - ebp;
    edx = edx - edi;
    esp = esp + 0xC;
    ecx = ecx & 0xFFFFFFF8u;
    edx = edx & 0xFFFFFFF8u;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(edx, ecx)) goto loc_00427B69; /* jge: greater or equal (signed >=) */

loc_00427B5E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00427B00(); /* call 0x00427B00 */

loc_00427B65: ;
    edi = ebp;
    goto loc_00427B74;

loc_00427B69: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00427B00(); /* call 0x00427B00 */

loc_00427B70: ;
    ebx = MEM32(esp + 0x1C);

loc_00427B74: ;
    eax = ebx;
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 3);
    esp = esp + 0xC;
    if (CMP_G(eax, 0x20)) goto loc_00427B20; /* jg: greater (signed >) */

loc_00427B83: ;
    if (CMP_LE(eax, 1)) goto loc_00427B92; /* jle: less or equal (signed <=) */

loc_00427B88: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00427E30(); /* call 0x00427E30 */

loc_00427B8F: ;
    esp = esp + 8;

loc_00427B92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00427BD0
 * Original: 0x00427BD0 - 0x00427DC2 (498 bytes, 192 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427BD0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    eax = esi;
    eax = eax - ebp;
    eax = (uint32_t)((int32_t)eax >> 3);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    ebx = ebp + eax * 8;
    eax = esi + -8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_00427F10(); /* call 0x00427F10 */

loc_00427BFA: ;
    esp = esp + 4;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    eax = ebx;
    edi = ebx + 8;
    if (CMP_AE(ebp, ebx)) goto loc_00427C30; /* jae: above or equal (unsigned >=) */

loc_00427C06: ;
    ecx = MEM32(eax + -4);
    edx = MEM32(eax + 4);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    esi = MEM32(eax + -8);
    ebx = MEM32(eax);
    if (CMP_B(ecx, edx)) goto loc_00427C2C; /* jb: below (unsigned <) */

loc_00427C15: ;
    if (CMP_A(ecx, edx)) goto loc_00427C1B; /* ja: above (unsigned >) */

loc_00427C17: ;
    if (CMP_B(esi, ebx)) goto loc_00427C2C; /* jb: below (unsigned <) */

loc_00427C1B: ;
    if (CMP_B(edx, ecx)) goto loc_00427C2C; /* jb: below (unsigned <) */

loc_00427C1F: ;
    if (CMP_A(edx, ecx)) goto loc_00427C25; /* ja: above (unsigned >) */

loc_00427C21: ;
    if (CMP_B(ebx, esi)) goto loc_00427C2C; /* jb: below (unsigned <) */

loc_00427C25: ;
    eax = eax + 0xFFFFFFF8u;
    if (CMP_B(ebp, eax)) goto loc_00427C06; /* jb: below (unsigned <) */

loc_00427C2C: ;
    esi = MEM32(esp + 0x2C);

loc_00427C30: ;
    if (CMP_AE(edi, esi)) goto loc_00427C64; /* jae: above or equal (unsigned >=) */

loc_00427C34: ;
    ebx = MEM32(eax);
    esi = MEM32(eax + 4);
    /* nop */

loc_00427C40: ;
    ecx = MEM32(edi + 4);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    edx = MEM32(edi);
    if (CMP_B(ecx, esi)) goto loc_00427C64; /* jb: below (unsigned <) */

loc_00427C49: ;
    if (CMP_A(ecx, esi)) goto loc_00427C4F; /* ja: above (unsigned >) */

loc_00427C4B: ;
    if (CMP_B(edx, ebx)) goto loc_00427C64; /* jb: below (unsigned <) */

loc_00427C4F: ;
    if (CMP_B(esi, ecx)) goto loc_00427C64; /* jb: below (unsigned <) */

loc_00427C53: ;
    if (CMP_A(esi, ecx)) goto loc_00427C59; /* ja: above (unsigned >) */

loc_00427C55: ;
    if (CMP_B(ebx, edx)) goto loc_00427C64; /* jb: below (unsigned <) */

loc_00427C59: ;
    ecx = MEM32(esp + 0x2C);
    edi = edi + 8;
    if (CMP_B(edi, ecx)) goto loc_00427C40; /* jb: below (unsigned <) */

loc_00427C64: ;
    edx = edi;
    ecx = eax;

loc_00427C68: ;
    if (CMP_AE(edx, MEM32(esp + 0x2C))) goto loc_00427CBE; /* jae: above or equal (unsigned >=) */

loc_00427C6E: ;
    edi = edi;

loc_00427C70: ;
    ebx = MEM32(edx + 4);
    (void)0; /* cmp MEM32(eax + 4), ebx - flags set for next jcc */
    ebp = MEM32(edx);
    esi = MEM32(eax);
    if (CMP_B(MEM32(eax + 4), ebx)) goto loc_00427CB3; /* jb: below (unsigned <) */

loc_00427C7C: ;
    if (CMP_A(MEM32(eax + 4), ebx)) goto loc_00427C82; /* ja: above (unsigned >) */

loc_00427C7E: ;
    if (CMP_B(esi, ebp)) goto loc_00427CB3; /* jb: below (unsigned <) */

loc_00427C82: ;
    if (CMP_B(ebx, MEM32(eax + 4))) goto loc_00427CBE; /* jb: below (unsigned <) */

loc_00427C87: ;
    if (CMP_A(ebx, MEM32(eax + 4))) goto loc_00427C8D; /* ja: above (unsigned >) */

loc_00427C89: ;
    if (CMP_B(ebp, esi)) goto loc_00427CBE; /* jb: below (unsigned <) */

loc_00427C8D: ;
    esi = edi;
    ebp = MEM32(esi);
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(esp + 0x14) = ebp;
    ebp = MEM32(edx);
    MEM32(esi) = ebp;
    MEM32(esi + 4) = ebx;
    esi = MEM32(esp + 0x10);
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x14);
    edi = edi + 8;
    MEM32(edx + 4) = esi;

loc_00427CB3: ;
    esi = MEM32(esp + 0x2C);
    edx = edx + 8;
    if (CMP_B(edx, esi)) goto loc_00427C70; /* jb: below (unsigned <) */

loc_00427CBE: ;
    if (CMP_BE(ecx, MEM32(esp + 0x28))) goto loc_00427D0B; /* jbe: below or equal (unsigned <=) */

loc_00427CC4: ;
    esi = MEM32(ecx + -4);
    (void)0; /* cmp esi, MEM32(eax + 4) - flags set for next jcc */
    ebx = MEM32(ecx + -8);
    ebp = MEM32(eax);
    if (CMP_B(esi, MEM32(eax + 4))) goto loc_00427CFC; /* jb: below (unsigned <) */

loc_00427CD1: ;
    if (CMP_A(esi, MEM32(eax + 4))) goto loc_00427CD7; /* ja: above (unsigned >) */

loc_00427CD3: ;
    if (CMP_B(ebx, ebp)) goto loc_00427CFC; /* jb: below (unsigned <) */

loc_00427CD7: ;
    if (CMP_B(MEM32(eax + 4), esi)) goto loc_00427D07; /* jb: below (unsigned <) */

loc_00427CDC: ;
    if (CMP_A(MEM32(eax + 4), esi)) goto loc_00427CE2; /* ja: above (unsigned >) */

loc_00427CDE: ;
    if (CMP_B(ebp, ebx)) goto loc_00427D07; /* jb: below (unsigned <) */

loc_00427CE2: ;
    ebp = MEM32(ecx + -8);
    esi = MEM32(eax + -8);
    ebx = MEM32(eax + -4);
    eax = eax - 8;
    MEM32(eax) = ebp;
    ebp = MEM32(ecx + -4);
    MEM32(eax + 4) = ebp;
    MEM32(ecx + -8) = esi;
    MEM32(ecx + -4) = ebx;

loc_00427CFC: ;
    esi = MEM32(esp + 0x28);
    ecx = ecx + 0xFFFFFFF8u;
    if (CMP_B(esi, ecx)) goto loc_00427CC4; /* jb: below (unsigned <) */

loc_00427D07: ;
    (void)0; /* cmp ecx, MEM32(esp + 0x28) - flags set for next jcc */

loc_00427D0B: ;
    esi = MEM32(esp + 0x2C);
    if (CMP_NE(ecx, MEM32(esp + 0x28))) goto loc_00427D67; /* jne: not equal / not zero */

loc_00427D11: ;
    if (CMP_EQ(edx, esi)) { sub_00427DC2(); return; } /* je: equal / zero */

loc_00427D19: ;
    if (CMP_EQ(edi, edx)) goto loc_00427D31; /* je: equal / zero */

loc_00427D1D: ;
    ebp = MEM32(edi);
    esi = MEM32(eax);
    ebx = MEM32(eax + 4);
    MEM32(eax) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(eax + 4) = ebp;
    MEM32(edi) = esi;
    MEM32(edi + 4) = ebx;

loc_00427D31: ;
    ebx = eax;
    ebp = MEM32(ebx);
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(ebx + 4);
    esi = edx;
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(esi);
    MEM32(ebx) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(ebx + 4) = ebp;
    ebx = MEM32(esp + 0x18);
    MEM32(esi) = ebx;
    ebx = MEM32(esp + 0x1C);
    edi = edi + 8;
    eax = eax + 8;
    edx = edx + 8;
    MEM32(esi + 4) = ebx;
    goto loc_00427C68;

loc_00427D67: ;
    ecx = ecx - 8;
    if (CMP_NE(edx, esi)) goto loc_00427DA6; /* jne: not equal / not zero */

loc_00427D6E: ;
    eax = eax - 8;
    if (CMP_EQ(ecx, eax)) goto loc_00427D89; /* je: equal / zero */

loc_00427D75: ;
    ebp = MEM32(eax);
    esi = MEM32(ecx);
    ebx = MEM32(ecx + 4);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ebx;

loc_00427D89: ;
    ebp = MEM32(edi + -8);
    esi = MEM32(eax);
    ebx = MEM32(eax + 4);
    edi = edi - 8;
    MEM32(eax) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(eax + 4) = ebp;
    MEM32(edi) = esi;
    MEM32(edi + 4) = ebx;
    goto loc_00427C68;

loc_00427DA6: ;
    ebp = MEM32(ecx);
    esi = MEM32(edx);
    ebx = MEM32(edx + 4);
    MEM32(edx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(edx + 4) = ebp;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = ebx;
    edx = edx + 8;
    goto loc_00427C68;

}

/**
 * sub_00427DE0
 * Original: 0x00427DE0 - 0x00427E27 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00427DE0: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi - edi;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_LE(eax, 1)) goto loc_00427E25; /* jle: less or equal (signed <=) */

loc_00427DEF: ;
    edx = MEM32(edi);
    eax = MEM32(edi + esi + -8);
    ecx = MEM32(edi + esi + -4);
    MEM32(edi + esi + -8) = edx;
    edx = MEM32(edi + 4);
    MEM32(edi + esi + -4) = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esi + -8;
    edx = (uint32_t)((int32_t)edx >> 3);
    ecx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_00428040(); /* call 0x00428040 */

loc_00427E15: ;
    esi = esi - 8;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    esp = esp + 8;
    if (CMP_G(eax, 1)) goto loc_00427DEF; /* jg: greater (signed >) */

loc_00427E25: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00427E30
 * Original: 0x00427E30 - 0x00427EB6 (134 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427E30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427E30: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_EQ(ebp, eax)) goto loc_00427EB4; /* je: equal / zero */

loc_00427E3D: ;
    PUSH32(esp, esi);
    esi = ebp + 8;
    if (CMP_EQ(esi, eax)) goto loc_00427EB3; /* je: equal / zero */

loc_00427E45: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = esi + 8;
    /* nop */

loc_00427E50: ;
    ecx = MEM32(esi + 4);
    (void)0; /* cmp ecx, MEM32(ebp + 4) - flags set for next jcc */
    edx = MEM32(esi);
    if (CMP_A(ecx, MEM32(ebp + 4))) goto loc_00427E6C; /* ja: above (unsigned >) */

loc_00427E5A: ;
    if (CMP_B(ecx, MEM32(ebp + 4))) goto loc_00427E61; /* jb: below (unsigned <) */

loc_00427E5C: ;
    if (CMP_AE(edx, MEM32(ebp))) goto loc_00427E6C; /* jae: above or equal (unsigned >=) */

loc_00427E61: ;
    if (CMP_EQ(ebp, esi)) goto loc_00427EA3; /* je: equal / zero */

loc_00427E65: ;
    if (CMP_EQ(esi, ebx)) goto loc_00427EA3; /* je: equal / zero */

loc_00427E69: ;
    PUSH32(esp, ebp);
    goto loc_00427E99;

loc_00427E6C: ;
    edi = MEM32(ebx + -12);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    eax = ebx + -16;
    if (CMP_A(ecx, edi)) goto loc_00427EA3; /* ja: above (unsigned >) */

loc_00427E76: ;
    if (CMP_B(ecx, edi)) goto loc_00427E80; /* jb: below (unsigned <) */

loc_00427E78: ;
    if (CMP_AE(edx, MEM32(eax))) goto loc_00427EA3; /* jae: above or equal (unsigned >=) */

loc_00427E7C: ;
    /* nop */

loc_00427E80: ;
    edi = eax;
    eax = eax - 8;
    if (CMP_B(ecx, MEM32(eax + 4))) goto loc_00427E80; /* jb: below (unsigned <) */

loc_00427E8A: ;
    if (CMP_A(ecx, MEM32(eax + 4))) goto loc_00427E90; /* ja: above (unsigned >) */

loc_00427E8C: ;
    if (CMP_B(edx, MEM32(eax))) goto loc_00427E80; /* jb: below (unsigned <) */

loc_00427E90: ;
    if (CMP_EQ(edi, esi)) goto loc_00427EA3; /* je: equal / zero */

loc_00427E94: ;
    if (CMP_EQ(esi, ebx)) goto loc_00427EA3; /* je: equal / zero */

loc_00427E98: ;
    PUSH32(esp, edi);

loc_00427E99: ;
    eax = esi;
    PUSH32(esp, 0); sub_00428100(); /* call 0x00428100 */

loc_00427EA0: ;
    esp = esp + 4;

loc_00427EA3: ;
    eax = MEM32(esp + 0x18);
    esi = esi + 8;
    ebx = ebx + 8;
    if (CMP_NE(esi, eax)) goto loc_00427E50; /* jne: not equal / not zero */

loc_00427EB1: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00427EB3: ;
    POP32(esp, esi);

loc_00427EB4: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00427EC0
 * Original: 0x00427EC0 - 0x00427F04 (68 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00427EC0: ;
    PUSH32(esp, esi);
    esi = edx;
    esi = esi - ecx;
    esi = (uint32_t)((int32_t)esi >> 3);
    if (CMP_LE(esi & esi, 0)) goto loc_00427F00; /* jle: less or equal (signed <=) */

loc_00427ECC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);

loc_00427ED3: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    edx = MEM32(ecx + eax * 8 + 4);
    if (CMP_A(edx, edi)) goto loc_00427EF8; /* ja: above (unsigned >) */

loc_00427EE2: ;
    if (CMP_B(edx, edi)) goto loc_00427EEB; /* jb: below (unsigned <) */

loc_00427EE4: ;
    edx = MEM32(ecx + eax * 8);
    if (CMP_AE(edx, ebx)) goto loc_00427EF8; /* jae: above or equal (unsigned >=) */

loc_00427EEB: ;
    edx = edx | 0xFFFFFFFFu;
    edx = edx - eax;
    ecx = ecx + eax * 8 + 8;
    esi = esi + edx;
    goto loc_00427EFA;

loc_00427EF8: ;
    esi = eax;

loc_00427EFA: ;
    if (CMP_G(esi & esi, 0)) goto loc_00427ED3; /* jg: greater (signed >) */

loc_00427EFE: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00427F00: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00427F10
 * Original: 0x00427F10 - 0x00427F7B (107 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427F10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427F10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = ebp;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_LE(eax, 0x28)) { sub_00427F7B(); return; } /* jle: less or equal (signed <=) */

loc_00427F22: ;
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = eax * 8;
    esi = esi << 4;
    eax = edi + ecx;
    edx = esi + ecx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_00427FD0(); /* call 0x00427FD0 */

loc_00427F49: ;
    ecx = ebx;
    edx = edi + ebx;
    ecx = ecx - edi;
    eax = ebx;
    PUSH32(esp, 0); sub_00427FD0(); /* call 0x00427FD0 */

loc_00427F57: ;
    edx = MEM32(esp + 0x14);
    ebp = ebp - edi;
    ecx = edx;
    ecx = ecx - esi;
    eax = ebp;
    PUSH32(esp, 0); sub_00427FD0(); /* call 0x00427FD0 */

loc_00427F68: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    edx = ebp;
    eax = ebx;
    POP32(esp, ebp);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00427FD0(); return; /* tail jmp 0x00427FD0 */

}

/**
 * sub_00427F90
 * Original: 0x00427F90 - 0x00427FC4 (52 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00427F90: ;
    eax = eax - edi;
    eax = (uint32_t)((int32_t)eax >> 3);
    PUSH32(esp, ebx);
    ebx = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 1);
    if (CMP_LE(esi & esi, 0)) goto loc_00427FC1; /* jle: less or equal (signed <=) */

loc_00427FA4: ;
    eax = MEM32(edi + esi * 8 + -4);
    ecx = MEM32(edi + esi * 8 + -8);
    esi--;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = ebx;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00428040(); /* call 0x00428040 */

loc_00427FBA: ;
    esp = esp + 8;
    if (CMP_G(esi & esi, 0)) goto loc_00427FA4; /* jg: greater (signed >) */

loc_00427FC1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00427FD0
 * Original: 0x00427FD0 - 0x00428033 (99 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427FD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    if (CMP_A(esi, edi)) goto loc_00427FF2; /* ja: above (unsigned >) */

loc_00427FE2: ;
    if (CMP_B(esi, edi)) goto loc_00427FE8; /* jb: below (unsigned <) */

loc_00427FE4: ;
    if (CMP_AE(ebx, ebp)) goto loc_00427FF2; /* jae: above or equal (unsigned >=) */

loc_00427FE8: ;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = edi;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = esi;

loc_00427FF2: ;
    esi = MEM32(edx + 4);
    edi = MEM32(eax + 4);
    (void)0; /* cmp esi, edi - flags set for next jcc */
    ebx = MEM32(edx);
    ebp = MEM32(eax);
    if (CMP_A(esi, edi)) goto loc_00428010; /* ja: above (unsigned >) */

loc_00428000: ;
    if (CMP_B(esi, edi)) goto loc_00428006; /* jb: below (unsigned <) */

loc_00428002: ;
    if (CMP_AE(ebx, ebp)) goto loc_00428010; /* jae: above or equal (unsigned >=) */

loc_00428006: ;
    MEM32(edx) = ebp;
    MEM32(edx + 4) = edi;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = esi;

loc_00428010: ;
    edx = MEM32(eax + 4);
    esi = MEM32(ecx + 4);
    (void)0; /* cmp edx, esi - flags set for next jcc */
    edi = MEM32(eax);
    ebx = MEM32(ecx);
    if (CMP_A(edx, esi)) goto loc_0042802E; /* ja: above (unsigned >) */

loc_0042801E: ;
    if (CMP_B(edx, esi)) goto loc_00428024; /* jb: below (unsigned <) */

loc_00428020: ;
    if (CMP_AE(edi, ebx)) goto loc_0042802E; /* jae: above or equal (unsigned >=) */

loc_00428024: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = esi;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = edx;

loc_0042802E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00428040
 * Original: 0x00428040 - 0x004280A8 (104 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428040(void)
{
    int _flags = 0; /* fallback flag var */

loc_00428040: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = ecx + ecx + 2;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    ebx = ecx;
    if (CMP_GE(eax, edx)) goto loc_0042807F; /* jge: greater or equal (signed >=) */

loc_0042804E: ;
    PUSH32(esp, edi);
    /* nop */

loc_00428050: ;
    edi = MEM32(esi + eax * 8 + 4);
    if (CMP_A(edi, MEM32(esi + eax * 8 + -4))) goto loc_00428066; /* ja: above (unsigned >) */

loc_0042805A: ;
    if (CMP_B(edi, MEM32(esi + eax * 8 + -4))) goto loc_00428065; /* jb: below (unsigned <) */

loc_0042805C: ;
    edi = MEM32(esi + eax * 8);
    if (CMP_AE(edi, MEM32(esi + eax * 8 + -8))) goto loc_00428066; /* jae: above or equal (unsigned >=) */

loc_00428065: ;
    eax--;

loc_00428066: ;
    edi = MEM32(esi + eax * 8);
    MEM32(esi + ecx * 8) = edi;
    edi = MEM32(esi + eax * 8 + 4);
    MEM32(esi + ecx * 8 + 4) = edi;
    ecx = eax;
    eax = eax + eax + 2;
    if (CMP_L(eax, edx)) goto loc_00428050; /* jl: less (signed <) */

loc_0042807E: ;
    POP32(esp, edi);

loc_0042807F: ;
    if (CMP_NE(eax, edx)) goto loc_00428093; /* jne: not equal / not zero */

loc_00428081: ;
    eax = MEM32(esi + edx * 8 + -8);
    MEM32(esi + ecx * 8) = eax;
    eax = MEM32(esi + edx * 8 + -4);
    MEM32(esi + ecx * 8 + 4) = eax;
    ecx = edx + -1;

loc_00428093: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004280B0(); /* call 0x004280B0 */

loc_004280A2: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004280B0
 * Original: 0x004280B0 - 0x004280F9 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004280B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004280B0: ;
    eax = ecx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_GE(ebx, ecx)) goto loc_004280E9; /* jge: greater or equal (signed >=) */

loc_004280BC: ;
    PUSH32(esp, edi);
    /* nop */

loc_004280C0: ;
    edx = MEM32(esi + eax * 8 + 4);
    (void)0; /* cmp edx, MEM32(esp + 0xC) - flags set for next jcc */
    edi = MEM32(esi + eax * 8);
    if (CMP_A(edx, MEM32(esp + 0xC))) goto loc_004280E8; /* ja: above (unsigned >) */

loc_004280CD: ;
    if (CMP_B(edx, MEM32(esp + 0xC))) goto loc_004280D5; /* jb: below (unsigned <) */

loc_004280CF: ;
    if (CMP_AE(edi, MEM32(esp + 8))) goto loc_004280E8; /* jae: above or equal (unsigned >=) */

loc_004280D5: ;
    MEM32(esi + ecx * 8 + 4) = edx;
    MEM32(esi + ecx * 8) = edi;
    ecx = eax;
    eax--;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_L(ebx, ecx)) goto loc_004280C0; /* jl: less (signed <) */

loc_004280E8: ;
    POP32(esp, edi);

loc_004280E9: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esi + ecx * 8) = eax;
    MEM32(esi + ecx * 8 + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00428100
 * Original: 0x00428100 - 0x004281B0 (176 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00428100: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi - ebp;
    ecx = ebx;
    ecx = ecx - ebp;
    edi = (uint32_t)((int32_t)edi >> 3);
    ecx = (uint32_t)((int32_t)ecx >> 3);
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = ecx;
    esi = edi;
    if (TEST_Z(edi, edi)) goto loc_0042812B; /* je: equal / zero */

loc_00428120: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = esi;
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = edx;
    if (TEST_NZ(edx, edx)) goto loc_00428120; /* jne: not equal / not zero */

loc_0042812B: ;
    if (CMP_GE(eax, ecx)) goto loc_004281A9; /* jge: greater or equal (signed >=) */

loc_0042812F: ;
    if (CMP_LE(eax & eax, 0)) goto loc_004281A9; /* jle: less or equal (signed <=) */

loc_00428133: ;
    esi = ebp + eax * 8;
    MEM32(esp + 0x18) = eax;
    goto loc_00428140;

    /* nop */

loc_00428140: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(esp + 0xC) = eax;
    eax = esi + edi * 8;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    if (CMP_EQ(eax, ebx)) eax = ebp; /* cmove */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    edx = esi;
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(eax, esi)) goto loc_0042818E; /* je: equal / zero */

loc_0042815B: ;
    goto loc_00428160;

    /* nop */

loc_00428160: ;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = ebx;
    ecx = ecx - eax;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    edx = eax;
    if (CMP_GE(edi, ecx)) goto loc_00428182; /* jge: greater or equal (signed >=) */

loc_00428177: ;
    ecx = edi * 8;
    eax = eax + ecx;
    goto loc_0042818A;

loc_00428182: ;
    eax = edi;
    eax = eax - ecx;
    eax = ebp + eax * 8;

loc_0042818A: ;
    if (CMP_NE(eax, esi)) goto loc_00428160; /* jne: not equal / not zero */

loc_0042818E: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x18);
    esi = esi - 8;
    eax--;
    MEM32(edx) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_00428140; /* jne: not equal / not zero */

loc_004281A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_004281B0
 * Original: 0x004281B0 - 0x004281F1 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004281B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004281B0: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5583D8);
    PUSH32(esp, 0); sub_0055A539(); /* call 0x0055A539 */

loc_004281C6: ;
    if (TEST_Z(eax, eax)) { sub_004281F1(); return; } /* je: equal / zero */

loc_004281CA: ;
    edx = MEM32(esp);
    ecx = MEM32(0x84C224);
    eax = MEM32(esp + 4);
    edx = ~edx;
    edx = edx & ecx;
    edx = edx | eax;
    MEM32(0x84C224) = edx;
    MEM32(0x84C228) = 1;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00428200
 * Original: 0x00428200 - 0x0042824E (78 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428200(void)
{

loc_00428200: ;
    PUSH32(esp, 0x558344);
    PUSH32(esp, 0); sub_0055A517(); /* call 0x0055A517 */

loc_0042820A: ;
    MEM32(0x84C22C) = eax;
    eax = 0; /* xor self */
    MEM32(0x838054) = eax;
    MEM32(0x838058) = eax;
    MEM32(0x838050) = eax;
    MEM32(0x838068) = eax;
    MEM32(0x83806C) = eax;
    MEM32(0x838064) = eax;
    MEM32(0x83807C) = eax;
    MEM32(0x838080) = eax;
    MEM32(0x838078) = eax;
    MEM32(0x838090) = eax;
    MEM32(0x838094) = eax;
    MEM32(0x83808C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00428250
 * Original: 0x00428250 - 0x0042829E (78 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428250(void)
{

loc_00428250: ;
    PUSH32(esp, 0x558350);
    PUSH32(esp, 0); sub_0055A517(); /* call 0x0055A517 */

loc_0042825A: ;
    MEM32(0x84C238) = eax;
    eax = 0; /* xor self */
    MEM32(0x8380A4) = eax;
    MEM32(0x8380A8) = eax;
    MEM32(0x8380A0) = eax;
    MEM32(0x8380B8) = eax;
    MEM32(0x8380BC) = eax;
    MEM32(0x8380B4) = eax;
    MEM32(0x8380CC) = eax;
    MEM32(0x8380D0) = eax;
    MEM32(0x8380C8) = eax;
    MEM32(0x8380E0) = eax;
    MEM32(0x8380E4) = eax;
    MEM32(0x8380DC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0042829E
 * Original: 0x0042829E - 0x004282C3 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042829E(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0042829E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(1.0); /* fld1 */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004282C3
 * Original: 0x004282C3 - 0x004282F3 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004282C3(void)
{
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004282C3: ;
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
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004282F3
 * Original: 0x004282F3 - 0x00428323 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004282F3(void)
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

loc_004282F3: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648D28)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0042831C; /* jp: parity */

loc_0042830A: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d24] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0042831E; /* jp: parity */

loc_00428317: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_00428320;

loc_0042831C: ;
    /* fstp st(0) */

loc_0042831E: ;
    eax = 0; /* xor self */

loc_00428320: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00428323
 * Original: 0x00428323 - 0x00428393 (112 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428323(void)
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

loc_00428323: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004282C3(); /* call 0x004282C3 */

loc_00428333: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004282F3(); /* call 0x004282F3 */

loc_00428349: ;
    if (TEST_Z(eax, eax)) goto loc_00428358; /* je: equal / zero */

loc_0042834D: ;
    if (CMP_EQ(ebx, esi)) goto loc_0042838D; /* je: equal / zero */

loc_00428351: ;
    edi = ebx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    goto loc_0042838D;

loc_00428358: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x6492f8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0042837F; /* jne: not equal / not zero */

loc_00428368: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    eax = ebp + -16;
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0042829E(); /* call 0x0042829E */

loc_0042837B: ;
    esi = eax;
    goto loc_00428351;

loc_0042837F: ;
    fp_push(0.0); /* fldz */
    MEMF(ebx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebx + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_0042838D: ;
    POP32(esp, edi);
    eax = ebx;
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
 * sub_00428393
 * Original: 0x00428393 - 0x0042841D (138 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428393(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00428393: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    xmm2 = MEMF(eax); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += MEMF(ecx + 0x30) (packed 4xfloat) */
    eax = MEM32(ebp + 8);
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* shufps xmm2, xmm2, 0xfe */
    MEMF(eax + 8) = xmm2; /* movss */
    /* shufps xmm2, xmm2, 0xff */
    MEMF(ebp + -4) = xmm2; /* movss */
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_004282F3(); /* call 0x004282F3 */

loc_004283FA: ;
    if (TEST_NZ(eax, eax)) goto loc_00428417; /* jne: not equal / not zero */

loc_004283FE: ;
    fp_push(1.0); /* fld1 */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_00428417: ;
    eax = edx;
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
 * sub_0042841D
 * Original: 0x0042841D - 0x0042851B (254 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042841D(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0042841D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm2 = MEMF(eax); /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm0 = MEMF(eax); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1 *= MEMF(ecx + 0x30) (packed 4xfloat) */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    xmm3 = MEMF(eax + 0x10); /* movaps */
    /* shufps xmm3, xmm3, 0 */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x10); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm0 = MEMF(eax + 0x10); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x10); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1 *= MEMF(ecx + 0x30) (packed 4xfloat) */
    /* addps: xmm3 += xmm0 (packed 4xfloat) */
    xmm4 = MEMF(eax + 0x20); /* movaps */
    /* shufps xmm4, xmm4, 0 */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    /* mulps: xmm4 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x20); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm0 = MEMF(eax + 0x20); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm4 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x20); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1 *= MEMF(ecx + 0x30) (packed 4xfloat) */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    xmm5 = MEMF(eax + 0x30); /* movaps */
    /* shufps xmm5, xmm5, 0 */
    /* addps: xmm4 += xmm1 (packed 4xfloat) */
    /* mulps: xmm5 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x30); /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm0 = MEMF(eax + 0x30); /* movaps */
    /* shufps xmm0, xmm0, 0xaa */
    /* mulps: xmm0 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + 0x30); /* movaps */
    /* shufps xmm1, xmm1, 0xff */
    /* mulps: xmm1 *= MEMF(ecx + 0x30) (packed 4xfloat) */
    ecx = MEM32(esp + 4);
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    MEMF(ecx) = xmm2; /* movaps */
    MEMF(ecx + 0x10) = xmm3; /* movaps */
    MEMF(ecx + 0x20) = xmm4; /* movaps */
    MEMF(ecx + 0x30) = xmm5; /* movaps */
    eax = MEM32(esp + 4);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042851B
 * Original: 0x0042851B - 0x00428815 (762 bytes, 300 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042851B(void)
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

loc_0042851B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x58;
    edx = MEM32(eax + 0x10);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(ebp + -32) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ebp + -36) = edx;
    fp_push(MEMF(ebp + -36)); /* fld float */
    edx = MEM32(eax + 0x20);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -28) = edx;
    fp_push(MEMF(ebp + -32)); /* fld float */
    edx = MEM32(eax + 0x24);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -8) = edx;
    edx = MEM32(eax + 0x30);
    MEM32(ebp + -24) = edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    edx = MEM32(eax + 0x34);
    MEM32(ebp + -4) = edx;
    edx = MEM32(eax + 0x38);
    MEMF(ebp + -16) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + -20) = edx;
    fp_push(MEMF(ebp + -8)); /* fld float */
    edx = MEM32(eax + 0x3C);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -60) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -56) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEM32(ebp + -4) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -52) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    MEMF(ebp + -44) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    MEMF(ebp + -36) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    MEMF(ebp + -40) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fst */
    /* fld st(5) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(4) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -88) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(6) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -84) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(5) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -80) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(4) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -76) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ebp + -60)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -72) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -56)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ebp + -52)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -64) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -52)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -56)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ebp + -60)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -16) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(eax);
    fp_push(MEMF(ebp + -40)); /* fld float */
    MEM32(ebp + -60) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(eax + 0x10);
    MEM32(ebp + -32) = edx;
    edx = MEM32(eax + 0x20);
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEM32(ebp + -28) = edx;
    fp_push(MEMF(ebp + -44)); /* fld float */
    edx = MEM32(eax + 0x24);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -8) = edx;
    edx = MEM32(eax + 0x30);
    MEM32(ebp + -24) = edx;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    eax = MEM32(eax + 0x34);
    fp_push(MEMF(ebp + -12)); /* fld float */
    MEM32(ebp + -4) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(5) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -20) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(6) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -40) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(5) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -44) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(4) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(5) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -56) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -16)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(2) */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -60)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(4) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -36) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + -52) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -56)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if (TEST_Z(ecx, ecx)) goto loc_004287F7; /* je: equal / zero */

loc_004287F5: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fst */

loc_004287F7: ;
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    PUSH32(esp, ecx);
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -12)); /* fld float */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_0042880D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) { sub_00428815(); return; } /* jne: not equal / not zero */

loc_00428813: ;
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
 * sub_0042889D
 * Original: 0x0042889D - 0x004288F5 (88 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042889D(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0042889D: ;
    fp_push(0.0); /* fldz */
    ecx = MEM32(esp + 4);
    MEMF(eax + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax) = ecx;
    fp_push(0.0); /* fldz */
    ecx = MEM32(esp + 8);
    MEMF(eax + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x14) = ecx;
    fp_push(0.0); /* fldz */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x28) = ecx;
    MEMF(eax + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
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
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004288F5
 * Original: 0x004288F5 - 0x0042894D (88 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004288F5(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004288F5: ;
    fp_push(0.0); /* fldz */
    ecx = MEM32(esp + 4);
    MEMF(eax + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x30) = ecx;
    fp_push(0.0); /* fldz */
    ecx = MEM32(esp + 8);
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x34) = ecx;
    fp_push(0.0); /* fldz */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x38) = ecx;
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
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
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0042894D
 * Original: 0x0042894D - 0x004289C6 (121 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042894D(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0042894D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = ebp + -8;
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 8)); /* fld float */
    /* FPU: fsincos  */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + -4);
    fp_push(0.0); /* fldz */
    MEM32(ecx + 0x18) = eax;
    MEMF(ecx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ecx;
    fp_push(0.0); /* fldz */
    MEMF(ecx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_004289C6
 * Original: 0x004289C6 - 0x00428A3E (120 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004289C6(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004289C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = ebp + -4;
    MEM32(ebp + -12) = eax;
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 8)); /* fld float */
    /* FPU: fsincos  */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fst */
    eax = ecx;
    fp_push(0.0); /* fldz */
    MEMF(ecx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_00428A3E
 * Original: 0x00428A3E - 0x00428AB7 (121 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428A3E(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00428A3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = ebp + -8;
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 8)); /* fld float */
    /* FPU: fsincos  */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fst */
    eax = MEM32(ebp + -4);
    fp_push(0.0); /* fldz */
    MEM32(ecx + 4) = eax;
    MEMF(ecx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ecx;
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_00428AB7
 * Original: 0x00428AB7 - 0x00428BB7 (256 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428AB7(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00428AB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    eax = ebp + -4;
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    /* FPU: fsincos  */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esi = ecx;
    edi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ebp + -28;
    ebx = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00428AF5: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fst */
    /* fld st(2) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(2) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    POP32(esp, edi);
    /* fstp st(0) */
    POP32(esp, esi);
    fp_push(0.0); /* fldz */
    POP32(esp, ebx);
    MEMF(eax + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_00428BB7
 * Original: 0x00428BB7 - 0x00428C91 (218 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428BB7(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00428BB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    fp_push(MEMF(0x648CE0)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -16) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
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
 * sub_00428CA0
 * Original: 0x00428CA0 - 0x00428CEA (74 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428CA0(void)
{
    float xmm1, xmm2, xmm3;

loc_00428CA0: ;
    PUSH32(esp, ecx);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    eax = MEM32(esp);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 8);
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
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00428CF0
 * Original: 0x00428CF0 - 0x00428DD4 (228 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00428CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x50;
    eax = MEM32(0x84C248);
    if (TEST_NZ(eax, eax)) goto loc_00428D18; /* jne: not equal / not zero */

loc_00428D02: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x84C248);
    PUSH32(esp, 0x759920);
    PUSH32(esp, 0x5A048C);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_00428D18: ;
    eax = MEM32(0x84C248);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00428D23: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x81B810);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(0x81B808) = 0x81B810;
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00428D40: ;
    eax = edx;
    ecx = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0xC);
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
    ecx = 0x60;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00428D9E: ;
    ecx = MEM32(0x5499E8);
    eax = ecx + 0x924;
    MEM32(eax) = 1;
    MEM32(ecx + 0x928) = 0;
    MEM32(ecx + 0x92C) = 0x759A90;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00428DC9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00428DD0: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00428DE0
 * Original: 0x00428DE0 - 0x00428E3B (91 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00428DE0: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, LO8(eax));
    edx = ZX8(LO8(edx));
    SET_LO8(ecx, MEM8(esp + 4));
    ecx = ecx << 8;
    ecx = ecx | edx;
    edx = ZX8(MEM8(esp + 8));
    ecx = ecx << 8;
    ecx = ecx | edx;
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEM32(0x83BF68) = ecx;
    if (CMP_NE(LO8(eax), 0xFF)) { sub_00428E3B(); return; } /* jne: not equal / not zero */

loc_00428E04: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00428E0B: ;
    edx = 1;
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00428E1A: ;
    edx = 0; /* xor self */
    ecx = 0x40304;
    MEM32(0x549AF8) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00428E30: ;
    MEM32(0x549AE4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00428EB0
 * Original: 0x00428EB0 - 0x00428F35 (133 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428EB0(void)
{

loc_00428EB0: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = eax;
    edi = MEM32(ecx);
    MEM32(esp + 8) = edi;
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xC) = edi;
    edi = MEM32(esi);
    MEM32(esp + 0x18) = edi;
    edi = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(edx);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x83BF68);
    MEM32(esp + 0x28) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    PUSH32(esp, 0x10);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x48) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00428F2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00428F40
 * Original: 0x00428F40 - 0x00428FA7 (103 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428F40(void)
{

loc_00428F40: ;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 8) = esi;
    esi = MEM32(ecx);
    MEM32(esp + 0x14) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x10);
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x83BF68);
    PUSH32(esp, 3);
    PUSH32(esp, 5);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00428FA2: ;
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00428FB0
 * Original: 0x00428FB0 - 0x00429258 (680 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428FB0(void)
{
    float xmm0;

loc_00428FB0: ;
    esp = esp - 0x80;
    xmm0 = MEMF(esi); /* movss */
    eax = MEM32(0x83BF68);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    PUSH32(esp, 0x10);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x80) = eax;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    eax = esp + 4;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    PUSH32(esp, 5);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    PUSH32(esp, 4);
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0042908D: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    PUSH32(esp, 0x10);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    PUSH32(esp, 5);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    PUSH32(esp, 4);
    MEMF(esp + 0x58) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0042913C: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    PUSH32(esp, 0x10);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    edx = esp + 4;
    PUSH32(esp, edx);
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    PUSH32(esp, 8);
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    PUSH32(esp, 2);
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_00429251: ;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00429260
 * Original: 0x00429260 - 0x00429465 (517 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429260(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00429260: ;
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(esi & esi, 0)) { sub_00429465(); return; } /* jbe: below or equal (unsigned <=) */

loc_00429275: ;
    eax = esp + 0x60;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x88);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x8C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648D10); /* movss */
    ecx = esp + 0x60;
    edx = ecx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ecx;
    ebx = ecx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_004292F4: ;
    eax = esp + 0x3C;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x8C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x90);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648D10); /* movss */
    ecx = esp + 0x3C;
    edx = ecx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ecx;
    ebx = ecx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00429373: ;
    eax = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x90);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x88);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648D10); /* movss */
    ecx = esp + 0x18;
    edx = ecx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ecx;
    ebx = ecx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_004293F2: ;
    edi = MEM32(esp + 0x94);
    edx = MEM32(esp + 0x88);
    esi--;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_00429411: ;
    edx = MEM32(esp + 0xA0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_0042942A: ;
    edx = MEM32(esp + 0xB8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_00429441: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = esp + 0xAC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_0042945B: ;
    esp = esp + 0x50;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}

/**
 * sub_00429640
 * Original: 0x00429640 - 0x0042972B (235 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429640(void)
{
    int _flags = 0; /* fallback flag var */

loc_00429640: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x759B80);
    PUSH32(esp, 0x759B98);
    PUSH32(esp, 0x759BA4);
    MEM32(0x83BF6C) = 0;
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_00429660: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x759B80);
    PUSH32(esp, 0x759BA4);
    PUSH32(esp, 0x759BB0);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_00429676: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x759B80);
    PUSH32(esp, 0x759BB0);
    PUSH32(esp, 0x759BBC);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_0042968C: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x759B80);
    PUSH32(esp, 0x759BBC);
    PUSH32(esp, 0x759B98);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_004296A2: ;
    esp = esp + 0x50;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x759B8C);
    PUSH32(esp, 0x759BA4);
    PUSH32(esp, 0x759B98);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_004296BB: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x759B8C);
    PUSH32(esp, 0x759BB0);
    PUSH32(esp, 0x759BA4);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_004296D1: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x759B8C);
    PUSH32(esp, 0x759BBC);
    PUSH32(esp, 0x759BB0);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_004296E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x759B8C);
    PUSH32(esp, 0x759B98);
    PUSH32(esp, 0x759BBC);
    PUSH32(esp, 0); sub_00429260(); /* call 0x00429260 */

loc_004296FD: ;
    ecx = MEM32(0x83BF6C);
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    esp = esp + 0x50;
    eax = eax + edx;
    if (TEST_Z(esi, esi)) { sub_0042972B(); return; } /* je: equal / zero */

loc_00429718: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x83BF80);
    eax = eax + eax * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0042972A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00429740
 * Original: 0x00429740 - 0x0042980C (204 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00429740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x108;
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(0x84B868);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x10;
    ecx = 0x10;
    edi = esp + 0x50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = eax + 0x90;
    ecx = 0x10;
    edi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = esp + 0x50;
    if (TEST_Z(edx, edx)) goto loc_00429793; /* je: equal / zero */

loc_0042977D: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0xD8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0042978C: ;
    eax = esp + 0xD0;

loc_00429793: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_004297A6: ;
    edx = esp + 0x10;
    eax = edx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0xC);
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
    ecx = 0x60;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_00429806: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00429810
 * Original: 0x00429810 - 0x0042985F (79 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429810(void)
{
    uint32_t ebp;
    float xmm5;

loc_00429810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    xmm5 = MEMF(ebp + 8); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0042983E: ;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042AA00(); /* call 0x0042AA00 */

loc_00429858: ;
    esp = esp + 0x38;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00429860
 * Original: 0x00429860 - 0x00429909 (169 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00429860: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x48);
    edi = edi + eax;
    ebx = ebx + ecx;
    PUSH32(esp, 0); sub_00429EA0(); /* call 0x00429EA0 */

loc_00429874: ;
    edx = MEM32(edi + 0x94);
    PUSH32(esp, 0); sub_00429740(); /* call 0x00429740 */

loc_0042987F: ;
    if (CMP_NE(MEM32(esp + 0xC), 1)) goto loc_004298CE; /* jne: not equal / not zero */

loc_00429886: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x28), LO16(ebp))) goto loc_004298CD; /* jbe: below or equal (unsigned <=) */

loc_0042988F: ;
    /* nop */

loc_00429890: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + ebp * 4);
    (void)0; /* cmp eax, MEM32(ebx) - flags set for next jcc */
    edi = eax + 0x10;
    PUSH32(esp, 0xFF);
    if (CMP_NE(eax, MEM32(ebx))) goto loc_004298B0; /* jne: not equal / not zero */

loc_004298A2: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    goto loc_004298B9;

loc_004298B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);

loc_004298B9: ;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00429F40(); /* call 0x00429F40 */

loc_004298C1: ;
    ecx = ZX16(MEM16(esi + 0x28));
    esp = esp + 0x10;
    ebp++;
    if (CMP_L(ebp, ecx)) goto loc_00429890; /* jl: less (signed <) */

loc_004298CD: ;
    POP32(esp, ebp);

loc_004298CE: ;
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x1C), LO16(edi))) goto loc_00429906; /* jbe: below or equal (unsigned <=) */

loc_004298D6: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + edi * 4);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, 0xFF);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x18));
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042A840(); /* call 0x0042A840 */

loc_004298FA: ;
    eax = ZX16(MEM16(esi + 0x1C));
    esp = esp + 0x18;
    edi++;
    if (CMP_L(edi, eax)) goto loc_004298D6; /* jl: less (signed <) */

loc_00429906: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00429910
 * Original: 0x00429910 - 0x00429CB4 (932 bytes, 226 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00429910: ;
    esp = esp - 0x30;
    eax = MEM32(esp + 0x38);
    edx = MEM32(0x842CE8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x842D00);
    edx = edx << 3;
    PUSH32(esp, edi);
    edi = MEM32(0x842CEC);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(0x84C258);
    esi++;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(0x842CE8) = edx;
    MEM32(0x842D00) = esi;
    ecx = 1;
    if (CMP_NE(edi, eax)) goto loc_00429953; /* jne: not equal / not zero */

loc_0042994F: ;
    MEM32(esp + 0x48) = ecx;

loc_00429953: ;
    SET_LO8(ebx, MEM8(0x84C25C));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ebx = MEM32(0x84C254);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0042997F; /* je: equal / zero */

loc_00429963: ;
    if (CMP_NE(esi, MEM32(0x84C250))) goto loc_0042997F; /* jne: not equal / not zero */

loc_0042996B: ;
    ebp = ebx + 8;
    if (CMP_NE(edx, ebp)) goto loc_0042997F; /* jne: not equal / not zero */

loc_00429972: ;
    MEM8(0x84C25C) = 0;
    MEM32(0x842CFC) = edi;

loc_0042997F: ;
    if (CMP_EQ(MEM8(0x84C25D), 0)) goto loc_004299A4; /* je: equal / zero */

loc_00429988: ;
    if (CMP_NE(esi, MEM32(0x84C250))) goto loc_004299A4; /* jne: not equal / not zero */

loc_00429990: ;
    ebp = ebx + -8;
    if (CMP_NE(edx, ebp)) goto loc_004299A4; /* jne: not equal / not zero */

loc_00429997: ;
    MEM8(0x84C25D) = 0;
    MEM32(0x842CFC) = edi;

loc_004299A4: ;
    ebp = MEM32(esp + 0x44);
    if (TEST_Z(ebp, ebp)) { sub_00429CB4(); return; } /* je: equal / zero */

loc_004299B0: ;
    if (CMP_L(edi, eax)) goto loc_00429B75; /* jl: less (signed <) */

loc_004299B8: ;
    edx = ZX16(MEM16(0x842CE0));
    edx = edx + eax;
    if (CMP_GE(edi, edx)) goto loc_00429B75; /* jge: greater or equal (signed >=) */

loc_004299C9: ;
    if (CMP_NE(edi, eax)) goto loc_00429AD8; /* jne: not equal / not zero */

loc_004299D1: ;
    PUSH32(esp, 0); sub_00429EA0(); /* call 0x00429EA0 */

loc_004299D6: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_00429A4F; /* je: equal / zero */

loc_004299E0: ;
    ecx--;
    if ((ecx != 0)) goto loc_00429A9A; /* jne: not equal / not zero */

loc_004299E7: ;
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    edi = esp + 0x44;
    eax = esp + 0x38;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00429F40(); /* call 0x00429F40 */

loc_00429A4A: ;
    esp = esp + 0x10;
    goto loc_00429A9A;

loc_00429A4F: ;
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x24) = xmm0; /* movss */
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0xFF);
    ecx = eax;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_00429810(); /* call 0x00429810 */

loc_00429A97: ;
    esp = esp + 0x14;

loc_00429A9A: ;
    (void)0; /* cmp MEM32(0x842CF4), 1 - flags set for next jcc */
    esi = MEM32(0x842D00);
    ebx = MEM32(0x842CE8);
    MEM32(0x84C250) = esi;
    MEM32(0x84C254) = ebx;
    if (CMP_NE(MEM32(0x842CF4), 1)) goto loc_00429C26; /* jne: not equal / not zero */

loc_00429ABF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0042B280(); /* call 0x0042B280 */

loc_00429AD0: ;
    edi = MEM32(0x842CEC);
    goto loc_00429AF9;

loc_00429AD8: ;
    if (CMP_NE(MEM32(0x842CF4), ecx)) goto loc_00429B75; /* jne: not equal / not zero */

loc_00429AE4: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(edx, LO8(edx) | 0xFF);
    PUSH32(esp, 0); sub_0042B280(); /* call 0x0042B280 */

loc_00429AF9: ;
    SET_LO16(ebp, MEM16(0x842CF0));
    ecx = (uint32_t)(int32_t)SMEM16(0x842CF8);
    edx = LO16(ebp);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    esp = esp + 8;
    esp = esp - 8;
    eax = esi + esi * 4;
    MEMF(esp + 4) = xmm0; /* movss */
    edx = ecx + eax * 4;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042B190(); /* call 0x0042B190 */

loc_00429B2E: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    SET_LO16(ebp, LO16(ebp) + 0x14);
    esp = esp + 8;
    eax = eax - 0;
    MEM16(0x842CF0) = LO16(ebp);
    if ((eax == 0)) goto loc_00429C1B; /* je: equal / zero */

loc_00429B4E: ;
    eax--;
    if ((eax != 0)) goto loc_00429B71; /* jne: not equal / not zero */

loc_00429B51: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x648CC4);

loc_00429B57: ;
    PUSH32(esp, 0); sub_0042B130(); /* call 0x0042B130 */

loc_00429B5C: ;
    esi = MEM32(0x842D00);
    edi = MEM32(0x842CEC);
    ebx = MEM32(0x84C254);
    esp = esp + 8;

loc_00429B71: ;
    ebp = MEM32(esp + 0x44);

loc_00429B75: ;
    edx = MEM32(0x842CE8);
    eax = edx * 8;
    edi++;
    ebx = ebx - eax;
    (void)0; /* cmp ebx, 0x40 - flags set for next jcc */
    MEM32(0x842CEC) = edi;
    if (CMP_AE(ebx, 0x40)) goto loc_00429C7C; /* jae: above or equal (unsigned >=) */

loc_00429B94: ;
    ecx = MEM32(0x84C250);
    ecx--;
    if (CMP_NE(esi, ecx)) goto loc_00429C7C; /* jne: not equal / not zero */

loc_00429BA3: ;
    PUSH32(esp, 0); sub_00429EA0(); /* call 0x00429EA0 */

loc_00429BA8: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_00429C31; /* je: equal / zero */

loc_00429BB2: ;
    ecx--;
    if ((ecx != 0)) goto loc_00429C76; /* jne: not equal / not zero */

loc_00429BB9: ;
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    edi = esp + 0x44;
    eax = esp + 0x38;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00429F40(); /* call 0x00429F40 */

loc_00429C16: ;
    esp = esp + 0x10;
    goto loc_00429C76;

loc_00429C1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x648CD0);
    goto loc_00429B57;

loc_00429C26: ;
    edi = MEM32(0x842CEC);
    goto loc_00429B75;

loc_00429C31: ;
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x24) = xmm0; /* movss */
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    eax = edx;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0); sub_00429810(); /* call 0x00429810 */

loc_00429C73: ;
    esp = esp + 0x14;

loc_00429C76: ;
    esi = MEM32(0x842D00);

loc_00429C7C: ;
    eax = MEM32(ebp);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00429C8B; /* je: equal / zero */

loc_00429C84: ;
    esi--;
    eax--;
    g_seh_ebp = ebp; sub_00429D67(); return; /* tail jmp 0x00429D67 */

loc_00429C8B: ;
    esi = ebp + 0xC;
    edi = 8;

loc_00429C93: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00429910(); /* call 0x00429910 */

loc_00429CA0: ;
    esp = esp + 8;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_00429C93; /* jne: not equal / not zero */

loc_00429CA9: ;
    MEM32(0x842D00) = MEM32(0x842D00) - 1;
    g_seh_ebp = ebp; sub_00429D6D(); return; /* tail jmp 0x00429D6D */

}

/**
 * sub_00429D90
 * Original: 0x00429D90 - 0x00429E11 (129 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00429D90: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x34);
    esi = esi + edx;
    PUSH32(esp, 0); sub_00429EA0(); /* call 0x00429EA0 */

loc_00429D9B: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, 0); sub_00429740(); /* call 0x00429740 */

loc_00429DA3: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    SET_LO16(edx, MEM16(esp + 0x14));
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(0x842D00) = eax;
    MEM32(0x842CE8) = eax;
    MEM32(0x842CEC) = eax;
    eax = MEM32(edi + 0x18);
    MEM16(0x842CF8) = LO16(ecx);
    ecx = MEM32(esp + 0xC);
    MEM16(0x842CE0) = LO16(edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM16(0x842CF0) = 0x14;
    MEM32(0x842CE4) = ecx;
    MEM32(0x842CF4) = edx;
    MEM32(0x842CFC) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00429910(); /* call 0x00429910 */

loc_00429DFD: ;
    eax = MEM32(0x842CFC);
    esp = esp + 8;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00429E10; /* je: equal / zero */

loc_00429E0B: ;
    MEM32(0x84C258) = eax;

loc_00429E10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00429E20
 * Original: 0x00429E20 - 0x00429E96 (118 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429E20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00429E20: ;
    edx = 1;
    if (CMP_NE(eax, edx)) goto loc_00429E7B; /* jne: not equal / not zero */

loc_00429E29: ;
    eax = MEM32(0x806FD8);
    eax = MEM32(eax + 8);
    if (TEST_Z(LO8(edx), LO8(eax))) goto loc_00429E46; /* je: equal / zero */

loc_00429E35: ;
    ecx = MEM32(0x84C258);
    if (TEST_Z(ecx, ecx)) goto loc_00429E46; /* je: equal / zero */

loc_00429E3F: ;
    ecx--;
    MEM32(0x84C258) = ecx;

loc_00429E46: ;
    if (TEST_Z(LO8(eax), 2)) goto loc_00429E50; /* je: equal / zero */

loc_00429E4A: ;
    MEM32(0x84C258) = MEM32(0x84C258) + 1;

loc_00429E50: ;
    (void)0; /* test LO8(eax), 8 - flags set for next jcc */
    ecx = MEM32(0x84C254);
    if (TEST_Z(LO8(eax), 8)) goto loc_00429E6C; /* je: equal / zero */

loc_00429E5A: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ebx = ebx & 0x3F;
    (void)0; /* cmp LO8(ebx), 0x38 - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(LO8(ebx), 0x38)) goto loc_00429E6C; /* je: equal / zero */

loc_00429E66: ;
    MEM8(0x84C25C) = LO8(edx);

loc_00429E6C: ;
    if (TEST_Z(LO8(eax), 4)) goto loc_00429E7B; /* je: equal / zero */

loc_00429E70: ;
    if (TEST_Z(LO8(ecx), 0x3F)) goto loc_00429E7B; /* je: equal / zero */

loc_00429E75: ;
    MEM8(0x84C25D) = LO8(edx);

loc_00429E7B: ;
    eax = MEM32(0x84C260);
    eax++;
    (void)0; /* cmp eax, 0x32 - flags set for next jcc */
    MEM32(0x84C260) = eax;
    if (CMP_LE(eax, 0x32)) goto loc_00429E95; /* jle: less or equal (signed <=) */

loc_00429E8B: ;
    MEM32(0x84C260) = 0;

loc_00429E95: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00429EA0
 * Original: 0x00429EA0 - 0x00429F38 (152 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00429EA0: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_00429EB6: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00429EC5: ;
    PUSH32(esp, 1);
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00429ED6: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_005373D0(); /* call 0x005373D0 */

loc_00429EDF: ;
    eax = MEM32(0x84C26C);
    if (TEST_NZ(eax, eax)) goto loc_00429EFE; /* jne: not equal / not zero */

loc_00429EE8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x84C26C);
    PUSH32(esp, 0x759BC8);
    PUSH32(esp, 0x759D30);
    PUSH32(esp, 0); sub_005366A0(); /* call 0x005366A0 */

loc_00429EFE: ;
    ecx = MEM32(0x84C26C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00429F0A: ;
    ecx = MEM32(0x5499E8);
    eax = ecx + 0x924;
    MEM32(eax) = 1;
    MEM32(ecx + 0x928) = 0;
    MEM32(ecx + 0x92C) = 0x759C40;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00538690(); return; /* tail jmp 0x00538690 */

}

/**
 * sub_00429F40
 * Original: 0x00429F40 - 0x0042A838 (2296 bytes, 527 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429F40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00429F40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5499E8);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_00543170(); /* call 0x00543170 */

loc_00429F4F: ;
    eax = MEM32(ebx);
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_00429F65; /* jb: below (unsigned <) */

loc_00429F56: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00429F65: ;
    ecx = ZX8(MEM8(esp + 0x14));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(esp + 0x18));
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 4;
    eax = eax + 8;
    MEM32(ebx) = eax;
    eax = MEM32(ebx + 8);
    eax = eax | 0x800;
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM32(ebx + 8) = eax;
    eax = ZX8(MEM8(esp + 0x10));
    PUSH32(esp, ebp);
    edx = edx << 8;
    edx = edx | eax;
    edx = edx << 8;
    ebp = edx;
    ebp = ebp | ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0053ACE0(); /* call 0x0053ACE0 */

loc_00429FAB: ;
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_00429FE7; /* jb: below (unsigned <) */

loc_00429FD8: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00429FE7: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A05C; /* jb: below (unsigned <) */

loc_0042A04D: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A05C: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A0D1; /* jb: below (unsigned <) */

loc_0042A0C2: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A0D1: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A146; /* jb: below (unsigned <) */

loc_0042A137: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A146: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A1BB; /* jb: below (unsigned <) */

loc_0042A1AC: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A1BB: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(edi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A230; /* jb: below (unsigned <) */

loc_0042A221: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A230: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(edi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A2A5; /* jb: below (unsigned <) */

loc_0042A296: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A2A5: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(edi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A31A; /* jb: below (unsigned <) */

loc_0042A30B: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A31A: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(edi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A38F; /* jb: below (unsigned <) */

loc_0042A380: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A38F: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(edi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A404; /* jb: below (unsigned <) */

loc_0042A3F5: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A404: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    PUSH32(esp, 0); sub_0053AD40(); /* call 0x0053AD40 */

loc_0042A442: ;
    ebx = MEM32(0x5499E8);
    PUSH32(esp, 0); sub_00543170(); /* call 0x00543170 */

loc_0042A44D: ;
    eax = MEM32(ebx);
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A463; /* jb: below (unsigned <) */

loc_0042A454: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A463: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 2;
    eax = eax + 8;
    MEM32(ebx) = eax;
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    eax = eax | 0x800;
    PUSH32(esp, 3);
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0); sub_0053ACE0(); /* call 0x0053ACE0 */

loc_0042A488: ;
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    POP32(esp, ebp);
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A4C5; /* jb: below (unsigned <) */

loc_0042A4B6: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A4C5: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(edi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A53A; /* jb: below (unsigned <) */

loc_0042A52B: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A53A: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A5AF; /* jb: below (unsigned <) */

loc_0042A5A0: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A5AF: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(edi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A624; /* jb: below (unsigned <) */

loc_0042A615: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A624: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A699; /* jb: below (unsigned <) */

loc_0042A68A: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A699: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(edi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A70E; /* jb: below (unsigned <) */

loc_0042A6FF: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A70E: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = MEM32(0x5499E8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042A783; /* jb: below (unsigned <) */

loc_0042A774: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A783: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(ebx) = eax;
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0042A7F8; /* jb: below (unsigned <) */

loc_0042A7E9: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A7F8: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0053AD40(); return; /* tail jmp 0x0053AD40 */

}

/**
 * sub_0042A840
 * Original: 0x0042A840 - 0x0042A9FE (446 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042A840: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00543170(); /* call 0x00543170 */

loc_0042A852: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0042A868; /* jb: below (unsigned <) */

loc_0042A859: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A868: ;
    ecx = ZX8(MEM8(esp + 0x20));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(esp + 0x24));
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 4;
    edi = MEM32(esi + 8);
    eax = eax + 8;
    MEM32(esi) = eax;
    eax = ZX8(MEM8(esp + 0x1C));
    SET_LO8(edx, MEM8(esp + 0x18));
    edi = edi | 0x800;
    MEM32(esi + 8) = edi;
    edx = edx << 8;
    edx = edx | eax;
    edx = edx << 8;
    edx = edx | ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0053ACE0(); /* call 0x0053ACE0 */

loc_0042A8AC: ;
    eax = ZX16(MEM16(esp + 0x14));
    if (CMP_LE(eax & eax, 0)) goto loc_0042A93C; /* jle: less or equal (signed <=) */

loc_0042A8B9: ;
    PUSH32(esp, ebx);
    esi = ebp + 4;
    ebx = eax;
    /* nop */

loc_0042A8C0: ;
    xmm0 = MEMF(esi + 4); /* movss */
    edi = MEM32(0x5499E8);
    eax = MEM32(edi);
    (void)0; /* cmp eax, MEM32(edi + 4) - flags set for next jcc */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + -4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_0042A8FC; /* jb: below (unsigned <) */

loc_0042A8ED: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A8FC: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    esi = esi + 0xC;
    ebx--;
    MEM32(edi) = eax;
    if ((ebx != 0)) goto loc_0042A8C0; /* jne: not equal / not zero */

loc_0042A93B: ;
    POP32(esp, ebx);

loc_0042A93C: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebp); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0042A979; /* jb: below (unsigned <) */

loc_0042A96A: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A979: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 0x101518;
    MEMF(eax + 0x10) = xmm0; /* movss */
    eax = eax + 0x14;
    MEM32(esi) = eax;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0042A9CE; /* jb: below (unsigned <) */

loc_0042A9BF: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042A9CE: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(esi) = eax;
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = ecx & 0xFFFFE7FFu;
    (void)0; /* test HI8(eax), 0x10 - flags set for next jcc */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0042A9FD; /* je: equal / zero */

loc_0042A9F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0042A9FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0042AA00
 * Original: 0x0042AA00 - 0x0042ADBA (954 bytes, 260 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042AA00(void)
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

loc_0042AA00: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    PUSH32(esp, 0); sub_00543170(); /* call 0x00543170 */

loc_0042AA10: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0042AA26; /* jb: below (unsigned <) */

loc_0042AA17: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042AA26: ;
    ecx = ZX8(MEM8(esp + 0x24));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(esp + 0x28));
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 4;
    eax = eax + 8;
    MEM32(esi) = eax;
    eax = MEM32(esi + 8);
    eax = eax | 0x800;
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM32(esi + 8) = eax;
    eax = ZX8(MEM8(esp + 0x20));
    edx = edx << 8;
    edx = edx | eax;
    edx = edx << 8;
    esi = edx;
    esi = esi | ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0053ACE0(); /* call 0x0053ACE0 */

loc_0042AA6B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x28) = xmm0; /* movss */
    ebx = 0x28;
    PUSH32(esp, edi);
    /* nop */

loc_0042AA80: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    edx = MEM32(esp + 0x1C);
    /* FPU: fsin  */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0042AAAF: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(0x5499E8);
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (CMP_B(eax, ecx)) goto loc_0042AAE9; /* jb: below (unsigned <) */

loc_0042AADA: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042AAE9: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x64A708); /* addss */
    MEM32(eax) = 0x101518;
    eax = eax + 0x14;
    ebx--;
    MEM32(edi) = eax;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if ((ebx != 0)) goto loc_0042AA80; /* jne: not equal / not zero */

loc_0042AB3D: ;
    edi = MEM32(0x5499E8);
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_0042AB59; /* jb: below (unsigned <) */

loc_0042AB4A: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042AB59: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(edi) = eax;
    eax = MEM32(edi + 8);
    ecx = eax;
    ecx = ecx & 0xFFFFE7FFu;
    (void)0; /* test HI8(eax), 0x10 - flags set for next jcc */
    MEM32(edi + 8) = ecx;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0042AB85; /* je: equal / zero */

loc_0042AB7E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0042AB85: ;
    edi = MEM32(0x5499E8);
    PUSH32(esp, 0); sub_00543170(); /* call 0x00543170 */

loc_0042AB90: ;
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_0042ABA6; /* jb: below (unsigned <) */

loc_0042AB97: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042ABA6: ;
    ebx = MEM32(0x5499E8);
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 4;
    edx = MEM32(edi + 8);
    eax = eax + 8;
    edx = edx | 0x800;
    MEM32(edi) = eax;
    MEM32(edi + 8) = edx;
    eax = MEM32(ebx);
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    edi = esi;
    MEM32(esp + 0x20) = edi;
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0042ABE6; /* jb: below (unsigned <) */

loc_0042ABD7: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042ABE6: ;
    edx = ZX8(MEM8(esp + 0x22));
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = edi;
    ecx = ecx & 0xFF;
    ecx = ecx << 0x10;
    edx = edx | ecx;
    edi = edi & 0xFF00FF00u;
    MEM32(eax) = 0x4194C;
    edx = edx | edi;
    MEM32(eax + 4) = edx;
    eax = eax + 8;
    MEM32(ebx) = eax;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    ebx = 0x28;
    /* nop */

loc_0042AC20: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    edx = MEM32(esp + 0x1C);
    /* FPU: fsin  */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0042AC4F: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(0x5499E8);
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x24) = edx;
    if (CMP_B(eax, ecx)) goto loc_0042AC89; /* jb: below (unsigned <) */

loc_0042AC7A: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042AC89: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(0x64A708); /* addss */
    MEM32(eax) = 0x101518;
    eax = eax + 0x14;
    ebx--;
    MEM32(edi) = eax;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if ((ebx != 0)) goto loc_0042AC20; /* jne: not equal / not zero */

loc_0042ACDD: ;
    edi = MEM32(0x5499E8);
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_0042ACF9; /* jb: below (unsigned <) */

loc_0042ACEA: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042ACF9: ;
    MEM32(eax) = 0x417FC;
    ebx = 0; /* xor self */
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    MEM32(edi) = eax;
    eax = MEM32(edi + 8);
    ecx = eax;
    ecx = ecx & 0xFFFFE7FFu;
    (void)0; /* test HI8(eax), 0x10 - flags set for next jcc */
    MEM32(edi + 8) = ecx;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_0042AD23; /* je: equal / zero */

loc_0042AD1C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_0042AD23: ;
    edi = MEM32(0x5499E8);
    PUSH32(esp, 0); sub_00543170(); /* call 0x00543170 */

loc_0042AD2E: ;
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_0042AD44; /* jb: below (unsigned <) */

loc_0042AD35: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042AD44: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 4;
    edx = MEM32(edi + 8);
    eax = eax + 8;
    edx = edx | 0x800;
    MEM32(edi) = eax;
    MEM32(edi + 8) = edx;
    edi = MEM32(0x5499E8);
    eax = MEM32(edi);
    (void)0; /* cmp eax, MEM32(edi + 4) - flags set for next jcc */
    MEM32(esp + 0x20) = esi;
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_0042AD82; /* jb: below (unsigned <) */

loc_0042AD73: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0042AD82: ;
    edx = ZX8(MEM8(esp + 0x22));
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esi;
    ecx = ecx & 0xFF;
    ecx = ecx << 0x10;
    edx = edx | ecx;
    esi = esi & 0xFF00FF00u;
    MEM32(eax) = 0x4194C;
    edx = edx | esi;
    MEM32(eax + 4) = edx;
    eax = eax + 8;
    MEM32(edi) = eax;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    edi = 0x28;
    g_seh_ebp = ebp; sub_0042ADC0(); return; /* tail jmp 0x0042ADC0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0042AED0
 * Original: 0x0042AED0 - 0x0042AF41 (113 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042AED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042AED0: ;
    PUSH32(esp, ecx);
    if (CMP_A(ecx & ecx, 0)) goto loc_0042AF3F; /* ja: above (unsigned >) */

loc_0042AED5: ;
    ecx = edx;
    edx = edx & 7;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 8) = edx;
    edx = eax;
    PUSH32(esp, esi);
    edx = edx & 7;
    eax = eax >> 3;
    esi = 8;
    ecx = ecx >> 3;
    esi = esi - edx;
    eax = eax + ebp;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_BE(ecx & ecx, 0)) goto loc_0042AF1E; /* jbe: below or equal (unsigned <=) */

loc_0042AF02: ;
    ebp = ecx;

loc_0042AF04: ;
    SET_LO8(ebx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    SET_LO8(ebx, MEM8(edi));
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    SET_LO8(ecx, LO8(ecx) | LO8(ebx));
    edi++;
    ebp--;
    MEM8(eax) = LO8(ecx);
    if ((ebp != 0)) goto loc_0042AF04; /* jne: not equal / not zero */

loc_0042AF1E: ;
    SET_LO8(ebx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    ecx = MEM32(esp + 0x10);
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM8(eax) = LO8(edx);
    if (CMP_B(ecx, esi)) goto loc_0042AF3B; /* jb: below (unsigned <) */

loc_0042AF32: ;
    SET_LO8(edx, MEM8(edi));
    ecx = esi;
    eax++;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax) = MEM8(eax) | LO8(edx);

loc_0042AF3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0042AF3F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0042AF50
 * Original: 0x0042AF50 - 0x0042AF9E (78 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042AF50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042AF50: ;
    PUSH32(esp, ebx);
    ecx = eax;
    ecx = ecx & 7;
    ebx = 0x100;
    ebx = (uint32_t)((int32_t)ebx >> LO8(ecx));
    ecx = MEM32(esp + 0xC);
    edx = eax + ecx + -1;
    PUSH32(esp, esi);
    esi = eax;
    eax = edx;
    edx = edx & 7;
    ecx = 7;
    ecx = ecx - edx;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    ecx = MEM32(esp + 0xC);
    esi = esi >> 3;
    SET_LO8(ebx, LO8(ebx) - 1);
    eax = eax >> 3;
    SET_LO8(edx, LO8(edx) - 1);
    ecx = ecx + esi;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    SET_LO8(edx, ~LO8(edx));
    if (CMP_NE(esi, eax)) { sub_0042AF9E(); return; } /* jne: not equal / not zero */

loc_0042AF8E: ;
    eax = ZX8(MEM8(ecx));
    edx = ZX8(LO8(edx));
    ecx = ZX8(LO8(ebx));
    eax = eax & edx;
    POP32(esp, esi);
    eax = eax & ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0042AFD0
 * Original: 0x0042AFD0 - 0x0042B033 (99 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042AFD0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0042AFD0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esp + 8;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ecx);
    edi = esp + 0x10;
    ebx = 0x42B110;
    eax = 0x842D04;
    PUSH32(esp, 0); sub_003E1900(); /* call 0x003E1900 */

loc_0042AFF1: ;
    eax = MEM32(esp + 0xC);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_0042B033(); return; } /* je: equal / zero */

loc_0042AFFE: ;
    eax = MEM32(eax + 0x12C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0042B02D; /* jne: not equal / not zero */

loc_0042B00A: ;
    eax = MEM32(0x84B7D4);
    if (TEST_Z(eax, eax)) goto loc_0042B01B; /* je: equal / zero */

loc_0042B013: ;
    MEM32(esi) = eax;
    SET_LO8(eax, 1);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0042B01B: ;
    edx = MEM32(0x81B7DC);
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x81B7C8;
    MEM32(esi) = edx;

loc_0042B02D: ;
    SET_LO8(eax, 1);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0042B060
 * Original: 0x0042B060 - 0x0042B0CF (111 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B060: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, ecx);
    edi = esp + 0x10;
    ebx = 0x42B110;
    eax = 0x842D0C;
    PUSH32(esp, 0); sub_003E1900(); /* call 0x003E1900 */

loc_0042B086: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) { sub_0042B0CF(); return; } /* je: equal / zero */

loc_0042B091: ;
    edx = MEM32(eax + 0x124);
    eax = eax + 0x114;
    MEM32(esi) = edx;
    MEM32(ebp) = eax;
    if (CMP_NE(MEM32(esi), 0)) goto loc_0042B0C6; /* jne: not equal / not zero */

loc_0042B0A6: ;
    eax = MEM32(0x84B7D8);
    if (TEST_NZ(eax, eax)) goto loc_0042B0BD; /* jne: not equal / not zero */

loc_0042B0AF: ;
    eax = MEM32(0x81B7DC);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x81B7C8;

loc_0042B0BD: ;
    MEM32(esi) = eax;
    MEM32(ebp) = 0x81B7E0;

loc_0042B0C6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0042B110
 * Original: 0x0042B110 - 0x0042B123 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B110(void)
{
    int _cf = 0; /* carry flag */

loc_0042B110: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 8);
    eax = eax - MEM32(ecx);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_0042B130
 * Original: 0x0042B130 - 0x0042B186 (86 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B130(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042B130: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x881480);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470421(); /* call 0x00470421 */

loc_0042B146: ;
    esp = esp + 0xC;
    if (CMP_LE(eax & eax, 0)) { sub_0042B186(); return; } /* jle: less or equal (signed <=) */

loc_0042B14D: ;
    ecx = MEM32(0x881480);
    edx = MEM32(0x881488);
    PUSH32(esp, esi);
    ecx = ecx + eax;
    eax = MEM32(0x881484);
    PUSH32(esp, edi);
    esi = ecx;
    esi = esi - eax;
    edi = edx + -128;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    POP32(esp, edi);
    MEM32(0x881480) = ecx;
    POP32(esp, esi);
    if (CMP_LE(esi, edi)) goto loc_0042B182; /* jle: less or equal (signed <=) */

loc_0042B175: ;
    eax = edx + eax + -128;
    MEM32(0x881480) = eax;
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

loc_0042B182: ;
    MEM8(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0042B190
 * Original: 0x0042B190 - 0x0042B27D (237 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B190(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0042B190: ;
    PUSH32(esp, esi);
    eax = MEM32(0x881480);
    MEM8(eax) = 1;
    eax = MEM32(0x881480);
    ecx = MEM32(esp + 8);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = 1;
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    SET_LO8(edx, MEM8(esp + 8));
    ecx = ecx >> 0x10;
    MEM8(eax) = HI8(ecx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x881480);
    ecx = MEM32(esp + 8);
    eax++;
    MEM32(0x881480) = eax;
    ecx = ecx >> 8;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x881480);
    SET_LO16(ecx, MEM16(esp + 0xE));
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(edx);
    eax = MEM32(0x881480);
    SET_LO8(edx, MEM8(esp + 0xC));
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = HI8(ecx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x881480);
    SET_LO8(ecx, MEM8(esp + 0xD));
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(edx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = 0;
    edx = MEM32(0x881480);
    eax = MEM32(0x881484);
    ecx = MEM32(0x881488);
    esi = ecx + -128;
    edx = edx - eax;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_LE(edx, esi)) goto loc_0042B260; /* jle: less or equal (signed <=) */

loc_0042B257: ;
    eax = ecx + eax + -128;
    MEM32(0x881480) = eax;

loc_0042B260: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(0x88148C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(0x881490) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0042B280
 * Original: 0x0042B280 - 0x0042B327 (167 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(0x881480);
    MEM8(eax) = 1;
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = 2;
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    SET_LO8(ebx, MEM8(esp + 0x14));
    MEM8(eax) = LO8(ebx);
    eax = MEM32(0x881480);
    SET_LO8(ebx, MEM8(esp + 0x18));
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(ebx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(edx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = 0;
    eax = MEM32(0x881484);
    esi = MEM32(0x881488);
    edi = MEM32(0x881480);
    edi = edi - eax;
    ebp = esi + -128;
    if (CMP_LE(edi, ebp)) goto loc_0042B307; /* jle: less or equal (signed <=) */

loc_0042B2FE: ;
    eax = esi + eax + -128;
    MEM32(0x881480) = eax;

loc_0042B307: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x8814AD) = LO8(ebx);
    MEM8(0x8814AC) = LO8(eax);
    MEM8(0x8814AE) = LO8(edx);
    MEM8(0x8814AF) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0042B330
 * Original: 0x0042B330 - 0x0042B3E6 (182 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B330(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042B330: ;
    ecx = MEM32(0x881480);
    MEM8(ecx) = 1;
    ecx = MEM32(0x881480);
    ecx++;
    MEM32(0x881480) = ecx;
    MEM8(ecx) = 2;
    edx = MEM32(0x881480);
    edx++;
    MEM32(0x881480) = edx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx >> 0x18;
    MEM8(edx) = LO8(ecx);
    esi = MEM32(0x881480);
    esi++;
    MEM32(0x881480) = esi;
    edx = eax;
    edx = edx >> 0x10;
    MEM8(esi) = LO8(edx);
    PUSH32(esp, edi);
    edi = MEM32(0x881480);
    edi++;
    MEM32(0x881480) = edi;
    esi = edi;
    ebx = eax;
    ebx = ebx >> 8;
    MEM8(esi) = LO8(ebx);
    esi = MEM32(0x881480);
    esi++;
    MEM32(0x881480) = esi;
    MEM8(esi) = LO8(eax);
    esi = MEM32(0x881480);
    esi++;
    MEM32(0x881480) = esi;
    MEM8(esi) = 0;
    edi = MEM32(0x881480);
    esi = MEM32(0x881484);
    edi = edi - esi;
    if (CMP_LE(edi, 0x1000)) goto loc_0042B3CB; /* jle: less or equal (signed <=) */

loc_0042B3BF: ;
    esi = esi + 0x1000;
    MEM32(0x881480) = esi;

loc_0042B3CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x8814AE) = LO8(ebx);
    MEM8(0x8814AC) = LO8(ecx);
    MEM8(0x8814AD) = LO8(edx);
    MEM8(0x8814AF) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0042B3F0
 * Original: 0x0042B3F0 - 0x0042B450 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B3F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042B3F0: ;
    eax = MEM32(0x881480);
    MEM8(eax) = 1;
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = 6;
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x881480);
    eax++;
    PUSH32(esp, esi);
    MEM32(0x881480) = eax;
    MEM8(eax) = 0;
    esi = MEM32(0x881480);
    eax = MEM32(0x881484);
    edx = MEM32(0x881488);
    PUSH32(esp, edi);
    esi = esi - eax;
    edi = edx + -128;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x8814A0) = LO8(ecx);
    if (CMP_LE(esi, edi)) goto loc_0042B44F; /* jle: less or equal (signed <=) */

loc_0042B445: ;
    edx = edx + eax + -128;
    MEM32(0x881480) = edx;

loc_0042B44F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0042B450
 * Original: 0x0042B450 - 0x0042B4EE (158 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B450(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0042B450: ;
    PUSH32(esp, esi);
    eax = MEM32(0x881480);
    ecx = MEM32(esp + 8);
    MEM8(eax) = 1;
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = 7;
    eax = MEM32(0x881480);
    SET_LO8(edx, MEM8(esp + 8));
    eax++;
    MEM32(0x881480) = eax;
    ecx = ecx >> 0x10;
    MEM8(eax) = HI8(ecx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x881480);
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(esp + 8); /* movss */
    eax++;
    MEM32(0x881480) = eax;
    ecx = ecx >> 8;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(edx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = 0;
    edx = MEM32(0x881480);
    eax = MEM32(0x881484);
    ecx = MEM32(0x881488);
    esi = ecx + -128;
    edx = edx - eax;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    POP32(esp, esi);
    MEMF(0x881498) = xmm0; /* movss */
    if (CMP_LE(edx, esi)) goto loc_0042B4ED; /* jle: less or equal (signed <=) */

loc_0042B4E4: ;
    eax = ecx + eax + -128;
    MEM32(0x881480) = eax;

loc_0042B4ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0042B4F0
 * Original: 0x0042B4F0 - 0x0042B58E (158 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B4F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0042B4F0: ;
    PUSH32(esp, esi);
    eax = MEM32(0x881480);
    ecx = MEM32(esp + 8);
    MEM8(eax) = 1;
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = 8;
    eax = MEM32(0x881480);
    SET_LO8(edx, MEM8(esp + 8));
    eax++;
    MEM32(0x881480) = eax;
    ecx = ecx >> 0x10;
    MEM8(eax) = HI8(ecx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x881480);
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(esp + 8); /* movss */
    eax++;
    MEM32(0x881480) = eax;
    ecx = ecx >> 8;
    MEM8(eax) = LO8(ecx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = LO8(edx);
    eax = MEM32(0x881480);
    eax++;
    MEM32(0x881480) = eax;
    MEM8(eax) = 0;
    edx = MEM32(0x881480);
    eax = MEM32(0x881484);
    ecx = MEM32(0x881488);
    esi = ecx + -128;
    edx = edx - eax;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    POP32(esp, esi);
    MEMF(0x88149C) = xmm0; /* movss */
    if (CMP_LE(edx, esi)) goto loc_0042B58D; /* jle: less or equal (signed <=) */

loc_0042B584: ;
    eax = ecx + eax + -128;
    MEM32(0x881480) = eax;

loc_0042B58D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0042B590
 * Original: 0x0042B590 - 0x0042B5F2 (98 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B590(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0042B590: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(ecx, MEM8(esi));
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0042B5F0; /* je: equal / zero */

loc_0042B59B: ;
    xmm0 = MEMF(0x881498); /* movss */
    SET_LO8(edx, MEM8(0x8814A0));
    xmm1 = MEMF(0x648CDC); /* movss */
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(0x8814A1);
    /* nop */

loc_0042B5C0: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0042B5D8; /* je: equal / zero */

loc_0042B5C4: ;
    ecx = SX8(LO8(ecx));
    ecx = ZX8(MEM8(ecx + 0x5AC4A8));
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    goto loc_0042B5DF;

loc_0042B5D8: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */

loc_0042B5DF: ;
    ecx = (int32_t)xmm2; /* cvttss2si */
    eax = eax + ecx;
    SET_LO8(ecx, MEM8(esi + 1));
    eax = eax + edi;
    esi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042B5C0; /* jne: not equal / not zero */

loc_0042B5EF: ;
    POP32(esp, edi);

loc_0042B5F0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0042B5F2
 * Original: 0x0042B5F2 - 0x0042B5F7 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B5F2(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B5F2: ;
    g_seh_ebp = ebp; sub_0046DA5E(); return; /* tail jmp 0x0046DA5E */

}

/**
 * sub_0042B5F7
 * Original: 0x0042B5F7 - 0x0042B5FD (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B5F7(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B5F7: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561010)); return; /* indirect tail jmp */

}

/**
 * sub_0042B5FD
 * Original: 0x0042B5FD - 0x0042B614 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B5FD(void)
{

loc_0042B5FD: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_00470478(); /* call 0x00470478 */

loc_0042B60E: ;
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042B614
 * Original: 0x0042B614 - 0x0042B627 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B614(void)
{

loc_0042B614: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_0042B5FD(); /* call 0x0042B5FD */

loc_0042B626: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0042B627
 * Original: 0x0042B627 - 0x0042B648 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B627(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042B627: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 4);
    POP32(esp, edx);
    PUSH32(esp, esi);

loc_0042B633: ;
    SET_LO16(esi, ZX8(MEM8(ecx)));
    MEM16(eax) = LO16(esi);
    eax++;
    eax++;
    ecx++;
    edx--;
    if ((edx != 0)) goto loc_0042B633; /* jne: not equal / not zero */

loc_0042B640: ;
    MEM16(eax) = MEM16(eax) & 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042B648
 * Original: 0x0042B648 - 0x0042B680 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B648(void)
{

loc_0042B648: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(esp + 8);
    SET_LO16(edx, ZX8(MEM8(eax)));
    MEM16(ecx + 2) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    MEM16(ecx + 6) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(eax + 2)));
    MEM16(ecx + 4) = LO16(edx);
    SET_LO16(eax, ZX8(MEM8(eax + 3)));
    MEM16(ecx + 8) = LO16(eax);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042B680
 * Original: 0x0042B680 - 0x0042B72A (170 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042B680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x104;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    eax = ebp + -260;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_0042F15B(); /* call 0x0042F15B */

loc_0042B6A5: ;
    if (TEST_NZ(eax, eax)) goto loc_0042B726; /* jne: not equal / not zero */

loc_0042B6A9: ;
    eax = MEM32(ebp + -256);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    eax = esi + 4;
    PUSH32(esp, eax);
    eax = ebp + -252;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B627(); /* call 0x0042B627 */

loc_0042B6C5: ;
    eax = esi + 0x58;
    PUSH32(esp, eax);
    eax = ebp + -248;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B627(); /* call 0x0042B627 */

loc_0042B6D5: ;
    eax = esi + 0x44;
    PUSH32(esp, eax);
    eax = ebp + -236;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B648(); /* call 0x0042B648 */

loc_0042B6E5: ;
    eax = esi + 0x98;
    PUSH32(esp, eax);
    eax = ebp + -232;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B648(); /* call 0x0042B648 */

loc_0042B6F8: ;
    eax = MEM32(ebp + -220);
    MEM32(esi + 0x54) = eax;
    eax = MEM32(ebp + -216);
    MEM32(esi + 0xA8) = eax;
    eax = MEM32(ebp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0042B724; /* je: equal / zero */

loc_0042B715: ;
    ecx = MEM32(ebp + -172);
    ecx = ecx >> 1;
    ecx = ~ecx;
    ecx = ecx & 1;
    MEM32(eax) = ecx;

loc_0042B724: ;
    eax = 0; /* xor self */

loc_0042B726: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042B72A
 * Original: 0x0042B72A - 0x0042B732 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B72A(void)
{

loc_0042B72A: ;
    eax = MEM32(0x561018);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0042B732
 * Original: 0x0042B732 - 0x0042B79D (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B732(void)
{
    uint32_t ebp;

loc_0042B732: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561014), _icall_esp); /* indirect call */
    }

loc_0042B754: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ecx, MEM16(ebp + -24));
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -22));
    MEM16(eax + 2) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -10));
    MEM16(eax + 4) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -18));
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -16));
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -14));
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -12));
    MEM16(eax + 0xE) = LO16(ecx);
    eax = 0; /* xor self */
    eax++;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042B79D
 * Original: 0x0042B79D - 0x0042B7FD (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B79D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042B79D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax));
    MEM16(ebp + -24) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 2));
    MEM16(ebp + -22) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 6));
    MEM16(ebp + -20) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(ebp + -18) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0xA));
    MEM16(ebp + -16) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0xC));
    SET_LO16(eax, MEM16(eax + 0xE));
    MEM16(ebp + -12) = LO16(eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    MEM16(ebp + -14) = LO16(ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56101C), _icall_esp); /* indirect call */
    }

loc_0042B7EB: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0042B7FD(); return; } /* jne: not equal / not zero */

loc_0042B7EF: ;
    PUSH32(esp, 0xC000000Du);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042B7F9: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042B80E(); return; /* tail jmp 0x0042B80E */

}

/**
 * sub_0042B812
 * Original: 0x0042B812 - 0x0042B843 (49 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B812(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B812: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    if (CMP_A(eax, ecx)) goto loc_0042B83E; /* ja: above (unsigned >) */

loc_0042B829: ;
    if (CMP_B(eax, ecx)) goto loc_0042B82F; /* jb: below (unsigned <) */

loc_0042B82B: ;
    if (CMP_AE(edx, esi)) goto loc_0042B834; /* jae: above or equal (unsigned >=) */

loc_0042B82F: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0042B845(); return; /* tail jmp 0x0042B845 */

loc_0042B834: ;
    if (CMP_B(eax, ecx)) { sub_0042B843(); return; } /* jb: below (unsigned <) */

loc_0042B838: ;
    if (CMP_A(eax, ecx)) goto loc_0042B83E; /* ja: above (unsigned >) */

loc_0042B83A: ;
    if (CMP_BE(edx, esi)) { sub_0042B843(); return; } /* jbe: below or equal (unsigned <=) */

loc_0042B83E: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042B845(); return; /* tail jmp 0x0042B845 */

}

/**
 * sub_0042B849
 * Original: 0x0042B849 - 0x0042B967 (286 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B849(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042B849: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042B732(); /* call 0x0042B732 */

loc_0042B85F: ;
    esi = MEM32(ebp + 8);
    if (CMP_EQ(MEM16(esi), 0)) goto loc_0042B899; /* je: equal / zero */

loc_0042B868: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042B79D(); /* call 0x0042B79D */

loc_0042B872: ;
    if (TEST_Z(eax, eax)) goto loc_0042B93E; /* je: equal / zero */

loc_0042B87A: ;
    eax = MEM32(edi + 4);
    if (CMP_G(eax, MEM32(ebx + 4))) goto loc_0042B892; /* jg: greater (signed >) */

loc_0042B882: ;
    if (CMP_L(eax, MEM32(ebx + 4))) goto loc_0042B93E; /* jl: less (signed <) */

loc_0042B888: ;
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(ebx))) goto loc_0042B93E; /* jb: below (unsigned <) */

loc_0042B892: ;
    SET_LO8(eax, 1);
    goto loc_0042B940;

loc_0042B899: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 6));
    (void)0; /* cmp LO16(eax), 5 - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_G(LO16(eax), 5)) goto loc_0042B93E; /* jg: greater (signed >) */

loc_0042B8AC: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0042B93E; /* je: equal / zero */

loc_0042B8B5: ;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + 4));
    eax = 0; /* xor self */
    (void)0; /* cmp MEM8(ebp + 0x14), 0 - flags set for next jcc */
    SET_LO16(eax, MEM16(esi + 2));
    MEM8(ebp + 0xB) = 0;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = eax;
    if (CMP_NE(MEM8(ebp + 0x14), 0)) goto loc_0042B8ED; /* jne: not equal / not zero */

loc_0042B8D1: ;
    ecx = ZX16(MEM16(ebp + -54));
    edx = SX16(LO16(eax));
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    ecx = MEM32(ebp + -56);
    if (CMP_GE(edx, ecx)) goto loc_0042B8E2; /* jge: greater or equal (signed >=) */

loc_0042B8DF: ;
    ecx++;
    goto loc_0042B8F0;

loc_0042B8E2: ;
    MEM32(ebp + 0x14) = ecx;
    if (((int32_t)ecx > 0)) goto loc_0042B8F3; /* jg: greater (signed >) */

loc_0042B8E7: ;
    MEM8(ebp + 0xB) = 1;
    goto loc_0042B8F3;

loc_0042B8ED: ;
    ecx = MEM32(ebp + -56);

loc_0042B8F0: ;
    MEM32(ebp + 0x14) = ecx;

loc_0042B8F3: ;
    SET_LO16(ecx, MEM16(ebp + 0x14));
    ebx = MEM32(0x56101C);
    MEM16(ebp + -26) = MEM16(ebp + -26) & 0;
    MEM16(ebp + -38) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 8));
    MEM16(ebp + -34) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM16(ebp + -32) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xC));
    MEM16(ebp + -30) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(ebp + -28) = LO16(eax);
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM16(ebp + -40) = LO16(ecx);
    MEM16(ebp + -36) = 1;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_0042B93A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0042B94A; /* jne: not equal / not zero */

loc_0042B93E: ;
    SET_LO8(eax, 0); /* xor self */

loc_0042B940: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_0042B94A: ;
    eax = ebp + -76;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561014), _icall_esp); /* indirect call */
    }

loc_0042B958: ;
    eax = MEM32(ebp + -62);
    if (CMP_LE(LO16(eax), LO16(edi))) { sub_0042B967(); return; } /* jle: less or equal (signed <=) */

loc_0042B960: ;
    edi = edi - eax;
    edi = edi + 7;
    g_seh_ebp = ebp; sub_0042B96B(); return; /* tail jmp 0x0042B96B */

}

/**
 * sub_0042BA53
 * Original: 0x0042BA53 - 0x0042BA7C (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BA53(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042BA53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0042B680(); /* call 0x0042B680 */

loc_0042BA6A: ;
    if (CMP_EQ(eax, ebx)) { sub_0042BA7C(); return; } /* je: equal / zero */

loc_0042BA6E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042BA74: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0042BBA9(); return; /* tail jmp 0x0042BBA9 */

}

/**
 * sub_0042BBAF
 * Original: 0x0042BBAF - 0x0042BBE1 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BBAF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042BBAF: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0xAC;
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042BA53(); /* call 0x0042BA53 */

loc_0042BBC3: ;
    eax = eax - 0;
    if ((eax == 0)) { sub_0042BBE1(); return; } /* je: equal / zero */

loc_0042BBC8: ;
    eax--;
    if ((eax == 0)) goto loc_0042BBDC; /* je: equal / zero */

loc_0042BBCB: ;
    eax--;
    if ((eax == 0)) goto loc_0042BBD2; /* je: equal / zero */

loc_0042BBCE: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042BBE4(); return; /* tail jmp 0x0042BBE4 */

loc_0042BBD2: ;
    ecx = MEM32(ebp + 0x70);

loc_0042BBD5: ;
    eax = MEM32(ebp + -56);
    eax = eax + ecx;
    g_seh_ebp = ebp; sub_0042BBE4(); return; /* tail jmp 0x0042BBE4 */

loc_0042BBDC: ;
    ecx = MEM32(ebp + 0x1C);
    goto loc_0042BBD5;

}

/**
 * sub_0042BC05
 * Original: 0x0042BC05 - 0x0042BC84 (127 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BC05(void)
{
    uint32_t ebp;
    int _cf = 0; /* carry flag */

loc_0042BC05: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_0042BC15: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042BBAF(); /* call 0x0042BBAF */

loc_0042BC1E: ;
    eax = MEM32(ebp + -8);
    eax = eax - MEM32(ebp + -16);
    ecx = MEM32(ebp + -4);
    ecx = ecx - MEM32(ebp + -12) - _cf; /* sbb */
    MEM32(ebp + -24) = eax;
    eax = ebp + -40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561014), _icall_esp); /* indirect call */
    }

loc_0042BC3E: ;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(ebp + -40));
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -38));
    MEM16(eax + 2) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -26));
    MEM16(eax + 4) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -36));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -34));
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -32));
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -30));
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -28));
    MEM16(eax + 0xE) = LO16(ecx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BC84
 * Original: 0x0042BC84 - 0x0042BD71 (237 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BC84(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0042BC84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_0042BC98; /* je: equal / zero */

loc_0042BC96: ;
    MEM32(edi) = ebx;

loc_0042BC98: ;
    esi = MEM32(ebp + 0x18);
    if (CMP_EQ(esi, ebx)) goto loc_0042BD07; /* je: equal / zero */

loc_0042BC9F: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ~ecx;
    ecx = ecx & esi;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561024), _icall_esp); /* indirect call */
    }

loc_0042BCD9: ;
    if (CMP_L(eax, ebx)) goto loc_0042BCF2; /* jl: less (signed <) */

loc_0042BCDD: ;
    if (CMP_EQ(eax, edi)) goto loc_0042BCF2; /* je: equal / zero */

loc_0042BCE1: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_0042BCED; /* je: equal / zero */

loc_0042BCE8: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_0042BCED: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_0042BD6A;

loc_0042BCF2: ;
    ecx = 0xC0000011u;
    if (CMP_NE(eax, ecx)) goto loc_0042BD62; /* jne: not equal / not zero */

loc_0042BCFB: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_0042BD04; /* je: equal / zero */

loc_0042BD02: ;
    MEM32(eax) = ebx;

loc_0042BD04: ;
    PUSH32(esp, ecx);
    goto loc_0042BD63;

loc_0042BD07: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561024), _icall_esp); /* indirect call */
    }

loc_0042BD1E: ;
    if (CMP_NE(eax, 0x103)) goto loc_0042BD37; /* jne: not equal / not zero */

loc_0042BD25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561020), _icall_esp); /* indirect call */
    }

loc_0042BD30: ;
    if (CMP_L(eax, ebx)) goto loc_0042BD42; /* jl: less (signed <) */

loc_0042BD34: ;
    eax = MEM32(ebp + -8);

loc_0042BD37: ;
    if (CMP_L(eax, ebx)) goto loc_0042BD42; /* jl: less (signed <) */

loc_0042BD3B: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_0042BCED;

loc_0042BD42: ;
    if (CMP_NE(eax, 0xC0000011u)) goto loc_0042BD4D; /* jne: not equal / not zero */

loc_0042BD49: ;
    MEM32(edi) = ebx;
    goto loc_0042BCED;

loc_0042BD4D: ;
    ecx = eax;
    ecx = ecx & 0xC0000000u;
    if (CMP_NE(ecx, 0x80000000u)) goto loc_0042BD62; /* jne: not equal / not zero */

loc_0042BD5D: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_0042BD62: ;
    PUSH32(esp, eax);

loc_0042BD63: ;
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042BD68: ;
    eax = 0; /* xor self */

loc_0042BD6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0042BD71
 * Original: 0x0042BD71 - 0x0042BE47 (214 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BD71(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0042BD71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_0042BD85; /* je: equal / zero */

loc_0042BD83: ;
    MEM32(edi) = ebx;

loc_0042BD85: ;
    esi = MEM32(ebp + 0x18);
    if (CMP_EQ(esi, ebx)) goto loc_0042BDE8; /* je: equal / zero */

loc_0042BD8C: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ~ecx;
    ecx = ecx & esi;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561028), _icall_esp); /* indirect call */
    }

loc_0042BDC6: ;
    ecx = 0xC0000000u;
    edx = eax;
    edx = edx & ecx;
    if (CMP_EQ(edx, ecx)) goto loc_0042BE38; /* je: equal / zero */

loc_0042BDD3: ;
    if (CMP_EQ(eax, edi)) goto loc_0042BE38; /* je: equal / zero */

loc_0042BDD7: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_0042BDE3; /* je: equal / zero */

loc_0042BDDE: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_0042BDE3: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_0042BE40;

loc_0042BDE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561028), _icall_esp); /* indirect call */
    }

loc_0042BDFF: ;
    if (CMP_NE(eax, 0x103)) goto loc_0042BE18; /* jne: not equal / not zero */

loc_0042BE06: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561020), _icall_esp); /* indirect call */
    }

loc_0042BE11: ;
    if (CMP_L(eax, ebx)) goto loc_0042BE23; /* jl: less (signed <) */

loc_0042BE15: ;
    eax = MEM32(ebp + -8);

loc_0042BE18: ;
    if (CMP_L(eax, ebx)) goto loc_0042BE23; /* jl: less (signed <) */

loc_0042BE1C: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_0042BDE3;

loc_0042BE23: ;
    ecx = eax;
    ecx = ecx & 0xC0000000u;
    if (CMP_NE(ecx, 0x80000000u)) goto loc_0042BE38; /* jne: not equal / not zero */

loc_0042BE33: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_0042BE38: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042BE3E: ;
    eax = 0; /* xor self */

loc_0042BE40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0042BE47
 * Original: 0x0042BE47 - 0x0042BE70 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BE47(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042BE47: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561030), _icall_esp); /* indirect call */
    }

loc_0042BE62: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042BE70(); return; } /* jge: greater or equal (signed >=) */

loc_0042BE66: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042BE6C: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042BEC7(); return; /* tail jmp 0x0042BEC7 */

}

/**
 * sub_0042BECB
 * Original: 0x0042BECB - 0x0042BEE2 (23 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BECB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042BECB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) { sub_0042BEE2(); return; } /* je: equal / zero */

loc_0042BEDB: ;
    edi = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    g_seh_ebp = ebp; sub_0042BEEA(); return; /* tail jmp 0x0042BEEA */

}

/**
 * sub_0042BFC5
 * Original: 0x0042BFC5 - 0x0042C081 (188 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BFC5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0042BFC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 0x18);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0042C02F; /* je: equal / zero */

loc_0042BFD3: ;
    eax--;
    if ((eax == 0)) goto loc_0042C004; /* je: equal / zero */

loc_0042BFD6: ;
    eax--;
    if ((eax != 0)) goto loc_0042C004; /* jne: not equal / not zero */

loc_0042BFD9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561030), _icall_esp); /* indirect call */
    }

loc_0042BFEE: ;
    if (TEST_S(eax, eax)) { sub_0042C081(); return; } /* jl: less (signed <) */

loc_0042BFF6: ;
    ecx = MEM32(ebp + -32);
    ecx = ecx + MEM32(ebp + 0xC);
    eax = MEM32(ebp + -28);
    eax = eax + MEM32(ebp + 0x10) + _cf; /* adc */
    goto loc_0042C035;

loc_0042C004: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561030), _icall_esp); /* indirect call */
    }

loc_0042C019: ;
    if (TEST_S(eax, eax)) { sub_0042C081(); return; } /* jl: less (signed <) */

loc_0042C01D: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + 0x10);
    ecx = ecx + eax;
    eax = MEM32(ebp + -4);
    eax = eax + edx + _cf; /* adc */
    goto loc_0042C035;

loc_0042C02F: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);

loc_0042C035: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_G(eax & eax, 0)) goto loc_0042C051; /* jg: greater (signed >) */

loc_0042C03F: ;
    if (TEST_S(eax, eax)) goto loc_0042C045; /* jl: less (signed <) */

loc_0042C041: ;
    if (CMP_AE(ecx & ecx, 0)) goto loc_0042C051; /* jae: above or equal (unsigned >=) */

loc_0042C045: ;
    PUSH32(esp, 0x83);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042C04F: ;
    g_seh_ebp = ebp; sub_0042C087(); return; /* tail jmp 0x0042C087 */

loc_0042C051: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56102C), _icall_esp); /* indirect call */
    }

loc_0042C066: ;
    if (TEST_S(eax, eax)) { sub_0042C081(); return; } /* jl: less (signed <) */

loc_0042C06A: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0042C07C; /* je: equal / zero */

loc_0042C071: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;

loc_0042C07C: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042C089(); return; /* tail jmp 0x0042C089 */

}

/**
 * sub_0042C08D
 * Original: 0x0042C08D - 0x0042C0E7 (90 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C08D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C08D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561030), _icall_esp); /* indirect call */
    }

loc_0042C0A8: ;
    if (TEST_S(eax, eax)) { sub_0042C0E7(); return; } /* jl: less (signed <) */

loc_0042C0AC: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0042C0BE; /* je: equal / zero */

loc_0042C0B3: ;
    ecx = MEM32(ebp + -64);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -60);
    MEM32(eax + 4) = ecx;

loc_0042C0BE: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0042C0D0; /* je: equal / zero */

loc_0042C0C5: ;
    ecx = MEM32(ebp + -56);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -52);
    MEM32(eax + 4) = ecx;

loc_0042C0D0: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0042C0E2; /* je: equal / zero */

loc_0042C0D7: ;
    ecx = MEM32(ebp + -48);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(eax + 4) = ecx;

loc_0042C0E2: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042C0EF(); return; /* tail jmp 0x0042C0EF */

}

/**
 * sub_0042C0F3
 * Original: 0x0042C0F3 - 0x0042C159 (102 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C0F3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C0F3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -48;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0042C117; /* je: equal / zero */

loc_0042C10C: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -48) = ecx;
    MEM32(ebp + -44) = eax;

loc_0042C117: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0042C129; /* je: equal / zero */

loc_0042C11E: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -36) = eax;

loc_0042C129: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0042C13B; /* je: equal / zero */

loc_0042C130: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = eax;

loc_0042C13B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x28);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56102C), _icall_esp); /* indirect call */
    }

loc_0042C150: ;
    if (TEST_S(eax, eax)) { sub_0042C159(); return; } /* jl: less (signed <) */

loc_0042C154: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042C161(); return; /* tail jmp 0x0042C161 */

}

/**
 * sub_0042C165
 * Original: 0x0042C165 - 0x0042C180 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C165(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C165: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561038), _icall_esp); /* indirect call */
    }

loc_0042C177: ;
    if (TEST_S(eax, eax)) { sub_0042C180(); return; } /* jl: less (signed <) */

loc_0042C17B: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042C188(); return; /* tail jmp 0x0042C188 */

}

/**
 * sub_0042C18C
 * Original: 0x0042C18C - 0x0042C1B5 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C18C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C18C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561030), _icall_esp); /* indirect call */
    }

loc_0042C1A7: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042C1B5(); return; } /* jge: greater or equal (signed >=) */

loc_0042C1AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042C1B1: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042C1C6(); return; /* tail jmp 0x0042C1C6 */

}

/**
 * sub_0042C1CA
 * Original: 0x0042C1CA - 0x0042C1F3 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C1CA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C1CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x561050));
    esi = esi | 0xFFFFFFFFu;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56104C), _icall_esp); /* indirect call */
    }

loc_0042C1E7: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042C1F3(); return; } /* jge: greater or equal (signed >=) */

loc_0042C1EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042C1F1: ;
    g_seh_ebp = ebp; sub_0042C26A(); return; /* tail jmp 0x0042C26A */

}

/**
 * sub_0042C271
 * Original: 0x0042C271 - 0x0042C2AC (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C271(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C271: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042C18C(); /* call 0x0042C18C */

loc_0042C282: ;
    if (TEST_Z(eax, eax)) goto loc_0042C2A1; /* je: equal / zero */

loc_0042C286: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0042C292; /* je: equal / zero */

loc_0042C28D: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;

loc_0042C292: ;
    if (CMP_NE(MEM32(ebp + -8), 0xFFFFFFFFu)) goto loc_0042C2A5; /* jne: not equal / not zero */

loc_0042C298: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042C29F: ;
    goto loc_0042C2A5;

loc_0042C2A1: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;

loc_0042C2A5: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042C2AC
 * Original: 0x0042C2AC - 0x0042C2D4 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C2AC(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042C2AC: ;
    eax = ZX8(MEM8(0x24));
    if (CMP_AE(LO8(eax), 2)) goto loc_0042C2BE; /* jae: above or equal (unsigned >=) */

loc_0042C2B8: ;
    eax = MEM32(0x28);

loc_0042C2BE: ;
    eax = MEM32(0x75F014);
    ecx = MEM32(4);
    eax = MEM32(ecx + eax * 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0042C2D4
 * Original: 0x0042C2D4 - 0x0042C302 (46 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C2D4(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042C2D4: ;
    eax = ZX8(MEM8(0x24));
    if (CMP_AE(LO8(eax), 2)) goto loc_0042C2E6; /* jae: above or equal (unsigned >=) */

loc_0042C2E0: ;
    eax = MEM32(0x28);

loc_0042C2E6: ;
    ecx = MEM32(4);
    eax = MEM32(0x75F014);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C302
 * Original: 0x0042C302 - 0x0042C319 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C302(void)
{

loc_0042C302: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561054), _icall_esp); /* indirect call */
    }

loc_0042C30C: ;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042C314: ;
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C319
 * Original: 0x0042C319 - 0x0042C37E (101 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C319(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042C319: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(esi), 0x103)) goto loc_0042C35E; /* jne: not equal / not zero */

loc_0042C326: ;
    if (CMP_EQ(MEM32(esp + 0x14), 0)) goto loc_0042C342; /* je: equal / zero */

loc_0042C32D: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0042C338; /* jne: not equal / not zero */

loc_0042C334: ;
    eax = MEM32(esp + 8);

loc_0042C338: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E367(); /* call 0x0042E367 */

loc_0042C340: ;
    goto loc_0042C347;

loc_0042C342: ;
    eax = 0x102;

loc_0042C347: ;
    if (CMP_NE(eax, 0x102)) goto loc_0042C35A; /* jne: not equal / not zero */

loc_0042C34E: ;
    PUSH32(esp, 0x3E4);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042C358: ;
    goto loc_0042C378;

loc_0042C35A: ;
    if (TEST_NZ(eax, eax)) goto loc_0042C378; /* jne: not equal / not zero */

loc_0042C35E: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    esi = MEM32(esi);
    if (TEST_S(esi, esi)) goto loc_0042C372; /* jl: less (signed <) */

loc_0042C36D: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_0042C37A;

loc_0042C372: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042C378: ;
    eax = 0; /* xor self */

loc_0042C37A: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0042C37E
 * Original: 0x0042C37E - 0x0042C3FF (129 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C37E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C37E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 0x18);
    eax--;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    POP32(esp, ebx);
    if ((eax == 0)) goto loc_0042C3D3; /* je: equal / zero */

loc_0042C392: ;
    eax--;
    if ((eax == 0)) goto loc_0042C3CA; /* je: equal / zero */

loc_0042C395: ;
    eax--;
    if ((eax == 0)) goto loc_0042C3C5; /* je: equal / zero */

loc_0042C398: ;
    eax--;
    if ((eax == 0)) goto loc_0042C3BC; /* je: equal / zero */

loc_0042C39B: ;
    eax--;
    if ((eax != 0)) goto loc_0042C3AD; /* jne: not equal / not zero */

loc_0042C39E: ;
    (void)0; /* test esi, 0x40000000 - flags set for next jcc */
    MEM32(ebp + 0xC) = 4;
    if (TEST_NZ(esi, 0x40000000)) goto loc_0042C3DA; /* jne: not equal / not zero */

loc_0042C3AD: ;
    PUSH32(esp, 0xC000000Du);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042C3B7: ;
    g_seh_ebp = ebp; sub_0042C4D6(); return; /* tail jmp 0x0042C4D6 */

loc_0042C3BC: ;
    MEM32(ebp + 0xC) = 3;
    goto loc_0042C3DA;

loc_0042C3C5: ;
    MEM32(ebp + 0xC) = ebx;
    goto loc_0042C3DA;

loc_0042C3CA: ;
    MEM32(ebp + 0xC) = 5;
    goto loc_0042C3DA;

loc_0042C3D3: ;
    MEM32(ebp + 0xC) = 2;

loc_0042C3DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042C3E9: ;
    if (CMP_BE(MEM16(ebp + -12), LO16(ebx))) { sub_0042C3FF(); return; } /* jbe: below or equal (unsigned <=) */

loc_0042C3EF: ;
    eax = ZX16(MEM16(ebp + -12));
    if (CMP_NE(MEM8(eax + edi + -1), 0x5C)) { sub_0042C3FF(); return; } /* jne: not equal / not zero */

loc_0042C3FA: ;
    MEM32(ebp + 8) = ebx;
    g_seh_ebp = ebp; sub_0042C403(); return; /* tail jmp 0x0042C403 */

}

/**
 * sub_0042C509
 * Original: 0x0042C509 - 0x0042C51C (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C509(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C509: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042C513: ;
    if (TEST_S(eax, eax)) { sub_0042C51C(); return; } /* jl: less (signed <) */

loc_0042C517: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042C524(); return; /* tail jmp 0x0042C524 */

}

/**
 * sub_0042C527
 * Original: 0x0042C527 - 0x0042C542 (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C527(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C527: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561068), _icall_esp); /* indirect call */
    }

loc_0042C539: ;
    if (TEST_S(eax, eax)) { sub_0042C542(); return; } /* jl: less (signed <) */

loc_0042C53D: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042C54A(); return; /* tail jmp 0x0042C54A */

}

/**
 * sub_0042C54D
 * Original: 0x0042C54D - 0x0042C5AD (96 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C54D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C54D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042C560: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0x80);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 0);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56105C), _icall_esp); /* indirect call */
    }

loc_0042C59B: ;
    if (TEST_S(eax, eax)) { sub_0042C5AD(); return; } /* jl: less (signed <) */

loc_0042C59F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042C5A8: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042C5B5(); return; /* tail jmp 0x0042C5B5 */

}

/**
 * sub_0042C5B9
 * Original: 0x0042C5B9 - 0x0042C60C (83 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C5B9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C5B9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042C5CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 7);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x110000);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042C5FE: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042C60C(); return; } /* jge: greater or equal (signed >=) */

loc_0042C602: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042C608: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042C643(); return; /* tail jmp 0x0042C643 */

}

/**
 * sub_0042C647
 * Original: 0x0042C647 - 0x0042C6B3 (108 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C647(void)
{

loc_0042C647: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(edx + 0x14) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(edx + 0x18) = ecx;
    ecx = MEM32(eax + 0x2C);
    MEM32(edx + 0x1C) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(edx + 0x20) = ecx;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    esi = eax + 0x40;
    edi = edx + 0x2C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(eax + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + edx + 0x2C) = 0;
    MEM8(edx + 0x130) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042C6B3
 * Original: 0x0042C6B3 - 0x0042C7B0 (253 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C6B3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C6B3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x16C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042C6CB: ;
    edx = MEM32(ebp + -4);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    eax = ZX16(MEM16(ebp + -8));
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    if (CMP_BE(eax, edi)) goto loc_0042C6F6; /* jbe: below or equal (unsigned <=) */

loc_0042C6EC: ;
    if (CMP_EQ(MEM8(edx + eax + -1), 0x5C)) goto loc_0042C6F6; /* je: equal / zero */

loc_0042C6F3: ;
    eax--;
    if ((eax != 0)) goto loc_0042C6EC; /* jne: not equal / not zero */

loc_0042C6F6: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx - eax;
    edx = edx + eax;
    (void)0; /* cmp LO16(eax), LO16(edi) - flags set for next jcc */
    MEM16(ebp + -16) = LO16(ecx);
    MEM16(ebp + -14) = LO16(ecx);
    MEM32(ebp + -12) = edx;
    MEM16(ebp + -8) = LO16(eax);
    MEM16(ebp + -6) = LO16(eax);
    if (CMP_EQ(LO16(eax), LO16(edi))) { sub_0042C7B0(); return; } /* je: equal / zero */

loc_0042C719: ;
    if (CMP_EQ(LO16(ecx), LO16(edi))) { sub_0042C7B0(); return; } /* je: equal / zero */

loc_0042C722: ;
    if (CMP_NE(LO16(ecx), 3)) goto loc_0042C73D; /* jne: not equal / not zero */

loc_0042C728: ;
    if (CMP_NE(MEM8(edx), 0x2A)) goto loc_0042C73D; /* jne: not equal / not zero */

loc_0042C72D: ;
    if (CMP_NE(MEM8(edx + 1), 0x2E)) goto loc_0042C73D; /* jne: not equal / not zero */

loc_0042C733: ;
    if (CMP_NE(MEM8(edx + 2), 0x2A)) goto loc_0042C73D; /* jne: not equal / not zero */

loc_0042C739: ;
    MEM16(ebp + -16) = LO16(edi);

loc_0042C73D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 3);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042C75B: ;
    if (CMP_GE(eax, edi)) goto loc_0042C762; /* jge: greater or equal (signed >=) */

loc_0042C75F: ;
    PUSH32(esp, eax);
    goto loc_0042C795;

loc_0042C762: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x148);
    eax = ebp + -364;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56106C), _icall_esp); /* indirect call */
    }

loc_0042C785: ;
    esi = eax;
    if (CMP_GE(esi, edi)) goto loc_0042C79C; /* jge: greater or equal (signed >=) */

loc_0042C78B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042C794: ;
    PUSH32(esp, esi);

loc_0042C795: ;
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042C79A: ;
    g_seh_ebp = ebp; sub_0042C7B7(); return; /* tail jmp 0x0042C7B7 */

loc_0042C79C: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -364;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C647(); /* call 0x0042C647 */

loc_0042C7AB: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_0042C7BA(); return; /* tail jmp 0x0042C7BA */

}

/**
 * sub_0042C7C0
 * Original: 0x0042C7C0 - 0x0042C7FB (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C7C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C7C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x150;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x148);
    eax = ebp + -336;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56106C), _icall_esp); /* indirect call */
    }

loc_0042C7EC: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_GE(eax, esi)) { sub_0042C7FB(); return; } /* jge: greater or equal (signed >=) */

loc_0042C7F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042C7F7: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042C80D(); return; /* tail jmp 0x0042C80D */

}

/**
 * sub_0042C811
 * Original: 0x0042C811 - 0x0042C843 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C811(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C811: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = eax + 1;

loc_0042C81F: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0042C81F; /* jne: not equal / not zero */

loc_0042C826: ;
    eax = eax - ecx;
    MEM16(ebp + -8) = LO16(eax);
    eax = MEM32(ebp + -8);
    eax++;
    MEM16(ebp + -6) = LO16(eax);
    ecx = ebp + -8;
    eax = 1;
    conker_debug_string(MEM32(ebp + -4)); /* int 0x2d, debug service 1 */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C843
 * Original: 0x0042C843 - 0x0042C8A8 (101 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C843(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C843: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x561270);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042C84F: ;
    ecx = MEM32(ebp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_0042C88E; /* je: equal / zero */

loc_0042C856: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_0042C8A3; /* je: equal / zero */

loc_0042C85D: ;
    edx = eax + ecx + -1;
    if (CMP_B(edx, eax)) goto loc_0042C8A3; /* jb: below (unsigned <) */

loc_0042C865: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    SET_LO8(ecx, MEM8(eax));
    ecx = 0xFFFFF000u;
    eax = eax & ecx;
    MEM32(ebp + -28) = eax;
    edx = edx & ecx;
    MEM32(ebp + -32) = edx;

loc_0042C87A: ;
    if (CMP_EQ(eax, edx)) goto loc_0042C88A; /* je: equal / zero */

loc_0042C87E: ;
    eax = eax + 0x1000;
    MEM32(ebp + -28) = eax;
    SET_LO8(ecx, MEM8(eax));
    goto loc_0042C87A;

loc_0042C88A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_0042C88E: ;
    eax = 0; /* xor self */

loc_0042C890: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042C895: ;
    esp += 12; return; /* ret 8 */

loc_0042C8A3: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_0042C890;

}

/**
 * sub_0042C8A8
 * Original: 0x0042C8A8 - 0x0042C911 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C8A8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C8A8: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x561280);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042C8B4: ;
    ecx = MEM32(ebp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_0042C8F7; /* je: equal / zero */

loc_0042C8BB: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_0042C90C; /* je: equal / zero */

loc_0042C8C2: ;
    edx = eax + ecx + -1;
    if (CMP_B(edx, eax)) goto loc_0042C90C; /* jb: below (unsigned <) */

loc_0042C8CA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax) = LO8(ecx);
    ecx = 0xFFFFF000u;
    eax = eax & ecx;
    MEM32(ebp + -28) = eax;
    edx = edx & ecx;
    MEM32(ebp + -32) = edx;

loc_0042C8E1: ;
    if (CMP_EQ(eax, edx)) goto loc_0042C8F3; /* je: equal / zero */

loc_0042C8E5: ;
    eax = eax + 0x1000;
    MEM32(ebp + -28) = eax;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax) = LO8(ecx);
    goto loc_0042C8E1;

loc_0042C8F3: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_0042C8F7: ;
    eax = 0; /* xor self */

loc_0042C8F9: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042C8FE: ;
    esp += 12; return; /* ret 8 */

loc_0042C90C: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_0042C8F9;

}

/**
 * sub_0042C911
 * Original: 0x0042C911 - 0x0042C91F (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C911(void)
{

loc_0042C911: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_0042C843(); /* call 0x0042C843 */

loc_0042C91C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C91F
 * Original: 0x0042C91F - 0x0042C94C (45 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C91F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C91F: ;
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
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_0042C937: ;
    if (TEST_S(eax, eax)) goto loc_0042C948; /* jl: less (signed <) */

loc_0042C93B: ;
    eax = MEM32(ebp + -4);
    if (CMP_BE(eax, 9)) goto loc_0042C94A; /* jbe: below or equal (unsigned <=) */

loc_0042C943: ;
    eax = 0; /* xor self */
    eax++;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0042C948: ;
    eax = 0; /* xor self */

loc_0042C94A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0042C94C
 * Original: 0x0042C94C - 0x0042C9B3 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C94C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042C94C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042C95F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042C991: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042C9B3(); return; } /* jge: greater or equal (signed >=) */

loc_0042C995: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042C99B: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0042C9A0: ;
    if (CMP_NE(eax, 2)) goto loc_0042C9AC; /* jne: not equal / not zero */

loc_0042C9A5: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042C9AC: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042CA3C(); return; /* tail jmp 0x0042CA3C */

}

/**
 * sub_0042CA40
 * Original: 0x0042CA40 - 0x0042CAB9 (121 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CA40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042CA40: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x5613E8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042CA4C: ;
    ebx = 0; /* xor self */
    MEM32(ebp + -28) = ebx;
    esi = MEM32(ebp + 0x10);
    esi = esi + esi;
    MEM32(ebp + 0x10) = esi;
    eax = MEM32(ebp + 0x24);
    eax = eax + eax;
    MEM32(ebp + 0x24) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042CA6E: ;
    MEM32(ebp + -80) = 0xFFFFFFFDu;
    MEM32(ebp + -72) = 0x40;
    eax = ebp + -68;
    MEM32(ebp + -76) = eax;
    edi = 0; /* xor self */
    MEM32(ebp + -40) = edi;
    MEM32(ebp + -44) = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 3);
    eax = ebp + -60;
    PUSH32(esp, eax);
    eax = ebp + -80;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042CAA8: ;
    ecx = 0; /* xor self */
    if (CMP_GE(eax, ecx)) { sub_0042CAB9(); return; } /* jge: greater or equal (signed >=) */

loc_0042CAAE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042CAB4: ;
    g_seh_ebp = ebp; sub_0042CC65(); return; /* tail jmp 0x0042CC65 */

}

/**
 * sub_0042CC6F
 * Original: 0x0042CC6F - 0x0042CC97 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CC6F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042CC6F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042CC78: ;
    if (TEST_Z(ebx, ebx)) goto loc_0042CC87; /* je: equal / zero */

loc_0042CC7C: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0042CC87: ;
    if (TEST_Z(edi, edi)) goto loc_0042CC96; /* je: equal / zero */

loc_0042CC8B: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0042CC96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0042CC97
 * Original: 0x0042CC97 - 0x0042CEE2 (587 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CC97(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0042CC97: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x22C;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 3);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0100000u);
    eax = ebp + -8;
    esi = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebp + -44) = esi;
    MEM32(ebp + -36) = 0x40;
    MEM32(ebp + -40) = 0x56139C;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042CCDA: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_L(eax, esi)) goto loc_0042CEDA; /* jl: less (signed <) */

loc_0042CCE5: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -556;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + -24) = 0x800;
    MEM32(ebp + -20) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561024), _icall_esp); /* indirect call */
    }

loc_0042CD0F: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_L(eax, esi)) goto loc_0042CED1; /* jl: less (signed <) */

loc_0042CD1A: ;
    eax = MEM32(0x561074);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    esi = 0x97315286u;
    edx--;
    (void)0; /* cmp MEM32(ebp + -556), esi - flags set for next jcc */
    PUSH32(esp, edi);
    ebx = 0xAA550000u;
    if (CMP_NE(MEM32(ebp + -556), esi)) goto loc_0042CD44; /* jne: not equal / not zero */

loc_0042CD36: ;
    if (CMP_NE(MEM32(ebp + -52), ebx)) goto loc_0042CD44; /* jne: not equal / not zero */

loc_0042CD3B: ;
    if (CMP_EQ(MEM32(ebp + -552), 2)) goto loc_0042CD66; /* je: equal / zero */

loc_0042CD44: ;
    ecx = 0x80;
    eax = 0; /* xor self */
    edi = ebp + -556;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebp + -556) = esi;
    MEM32(ebp + -552) = 2;
    MEM32(ebp + -52) = ebx;

loc_0042CD66: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    eax = MEM32(0x561074);
    ecx = MEM32(eax);
    if (CMP_BE(ecx, 0x29)) goto loc_0042CD7E; /* jbe: below or equal (unsigned <=) */

loc_0042CD7B: ;
    PUSH32(esp, 0x29);
    POP32(esp, ecx);

loc_0042CD7E: ;
    edi = ecx + -1;
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (CMP_BE(ecx & ecx, 0)) goto loc_0042CDC6; /* jbe: below or equal (unsigned <=) */

loc_0042CD8C: ;
    edi = ebp + -548;

loc_0042CD92: ;
    ebx = MEM32(ebp + -16);
    if (CMP_NE(ebx, MEM32(edi))) goto loc_0042CD9F; /* jne: not equal / not zero */

loc_0042CD99: ;
    if (CMP_NE(MEM32(edi + 8), 0)) goto loc_0042CDA9; /* jne: not equal / not zero */

loc_0042CD9F: ;
    eax++;
    edi = edi + 0xC;
    if (CMP_B(eax, ecx)) goto loc_0042CD92; /* jb: below (unsigned <) */

loc_0042CDA7: ;
    goto loc_0042CDC3;

loc_0042CDA9: ;
    edx = eax + eax * 2;
    esi = MEM32(ebp + edx * 4 + -544);
    esi = esi + 3;
    edx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    if ((esi != 0)) goto loc_0042CE16; /* jne: not equal / not zero */

loc_0042CDC3: ;
    edi = MEM32(ebp + -4);

loc_0042CDC6: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    if (CMP_BE(ecx & ecx, 0)) goto loc_0042CE07; /* jbe: below or equal (unsigned <=) */

loc_0042CDCE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -544;

loc_0042CDD8: ;
    if (CMP_EQ(MEM32(eax + 4), 0)) goto loc_0042CDE5; /* je: equal / zero */

loc_0042CDDE: ;
    ebx = MEM32(ebp + 0x10);
    if (CMP_EQ(MEM32(eax), ebx)) goto loc_0042CDF0; /* je: equal / zero */

loc_0042CDE5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = eax + 0xC;
    if (CMP_B(MEM32(ebp + -4), ecx)) goto loc_0042CDD8; /* jb: below (unsigned <) */

loc_0042CDF0: ;
    if (CMP_NE(MEM32(ebp + -4), ecx)) goto loc_0042CDFB; /* jne: not equal / not zero */

loc_0042CDF5: ;
    esi = MEM32(ebp + 0x10);
    esi = esi + 3;

loc_0042CDFB: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    if (CMP_B(MEM32(ebp + 0x10), ecx)) goto loc_0042CDCE; /* jb: below (unsigned <) */

loc_0042CE03: ;
    if (TEST_NZ(esi, esi)) goto loc_0042CE19; /* jne: not equal / not zero */

loc_0042CE07: ;
    eax = edi + edi * 2;
    esi = MEM32(ebp + eax * 4 + -544);
    esi = esi + 3;
    goto loc_0042CE19;

loc_0042CE16: ;
    edi = MEM32(ebp + -4);

loc_0042CE19: ;
    eax = ecx + 3;
    if (CMP_B(esi, eax)) goto loc_0042CE23; /* jb: below (unsigned <) */

loc_0042CE20: ;
    esi = ecx + 2;

loc_0042CE23: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = esi;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edi;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(0x651070) = eax;
    if (CMP_AE(eax, edx)) goto loc_0042CE50; /* jae: above or equal (unsigned >=) */

loc_0042CE3A: ;
    eax = edx + edx * 2;
    eax = eax << 2;
    PUSH32(esp, eax);
    eax = ebp + -548;
    PUSH32(esp, eax);
    eax = ebp + -536;
    goto loc_0042CE69;

loc_0042CE50: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_0042CE77;

loc_0042CE52: ;
    edi = edi - edx;
    ecx = edi + edi * 2;
    eax = edx + edx * 2;
    ecx = ecx << 2;
    eax = ebp + eax * 4 + -548;
    PUSH32(esp, ecx);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);

loc_0042CE69: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0042CE6F: ;
    eax = MEM32(0x651070);
    esp = esp + 0xC;

loc_0042CE77: ;
    ecx = MEM32(ebp + -16);
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -548) = ecx;
    eax = MEM32(0x651070);
    ecx = 0; /* xor self */
    edx = 0; /* xor self */
    esi = esi + 0xFFFFFFFDu;
    (void)0; /* cmp MEM32(ebp + 8), ecx - flags set for next jcc */
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -544) = esi;
    eax = MEM32(0x651070);
    SET_LO8(edx, (CMP_EQ(MEM32(ebp + 8), ecx)) ? 1 : 0); /* sete */
    eax = eax + eax * 2;
    MEM32(ebp + eax * 4 + -540) = edx;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -556;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561028), _icall_esp); /* indirect call */
    }

loc_0042CECF: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0042CED1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0042CEDA: ;
    eax = MEM32(ebp + -12);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042CEE2
 * Original: 0x0042CEE2 - 0x0042CFE7 (261 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CEE2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042CEE2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042CC97(); /* call 0x0042CC97 */

loc_0042CEFE: ;
    ebx = 0; /* xor self */
    if (CMP_L(eax, ebx)) goto loc_0042CFD6; /* jl: less (signed <) */

loc_0042CF08: ;
    if (CMP_NE(MEM32(ebp + 8), ebx)) goto loc_0042CF15; /* jne: not equal / not zero */

loc_0042CF0D: ;
    (void)0; /* cmp MEM32(ebp + -12), ebx - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(MEM32(ebp + -12), ebx)) goto loc_0042CF1C; /* je: equal / zero */

loc_0042CF15: ;
    MEM32(ebp + 8) = 1;

loc_0042CF1C: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(0x10124);
    PUSH32(esp, 0x56137C);
    eax = ebp + -276;
    ecx = ecx >> 0x1E;
    PUSH32(esp, 0x104);
    esi = 0x4000;
    PUSH32(esp, eax);
    esi = esi << LO8(ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0042CF45: ;
    edi = MEM32(0x561060);
    esp = esp + 0x10;
    eax = ebp + -276;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0042CF5B: ;
    eax = ebp + -276;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0042CF68: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) - 1;
    if (CMP_EQ(MEM32(ebp + 8), ebx)) goto loc_0042CF81; /* je: equal / zero */

loc_0042CF71: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042F8A1(); /* call 0x0042F8A1 */

loc_0042CF7B: ;
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_0042CFDE; /* je: equal / zero */

loc_0042CF81: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042F1D4(); /* call 0x0042F1D4 */

loc_0042CF8B: ;
    ebx = eax;
    if (CMP_GE(ebx & ebx, 0)) goto loc_0042CFB5; /* jge: greater or equal (signed >=) */

loc_0042CF91: ;
    if (CMP_NE(MEM32(ebp + 8), 0)) goto loc_0042CFB1; /* jne: not equal / not zero */

loc_0042CF97: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042F8A1(); /* call 0x0042F8A1 */

loc_0042CFA1: ;
    if (TEST_Z(eax, eax)) goto loc_0042CFB1; /* je: equal / zero */

loc_0042CFA5: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042F1D4(); /* call 0x0042F1D4 */

loc_0042CFAF: ;
    ebx = eax;

loc_0042CFB1: ;
    if (TEST_S(ebx, ebx)) goto loc_0042CFC6; /* jl: less (signed <) */

loc_0042CFB5: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x56136C);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561078), _icall_esp); /* indirect call */
    }

loc_0042CFC4: ;
    ebx = eax;

loc_0042CFC6: ;
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(ebx & ebx, 0)) ? 1 : 0); /* setge */
    edi = eax;
    if (TEST_NZ(edi, edi)) goto loc_0042CFDE; /* jne: not equal / not zero */

loc_0042CFD3: ;
    PUSH32(esp, ebx);
    goto loc_0042CFD9;

loc_0042CFD6: ;
    edi = 0; /* xor self */
    PUSH32(esp, eax);

loc_0042CFD9: ;
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042CFDE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CFE7
 * Original: 0x0042CFE7 - 0x0042D01E (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CFE7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042CFE7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x120;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = 0x40;
    MEM32(ebp + -20) = 0x56136C;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561080), _icall_esp); /* indirect call */
    }

loc_0042D010: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042D01E(); return; } /* jge: greater or equal (signed >=) */

loc_0042D014: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042D01A: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0042D075
 * Original: 0x0042D075 - 0x0042D0D9 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D075(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042D075: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042D088: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042D0BA: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042D0D9(); return; } /* jge: greater or equal (signed >=) */

loc_0042D0BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042D0C4: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0042D0C9: ;
    if (CMP_NE(eax, 2)) goto loc_0042D0D5; /* jne: not equal / not zero */

loc_0042D0CE: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042D0D5: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042D110(); return; /* tail jmp 0x0042D110 */

}

/**
 * sub_0042D114
 * Original: 0x0042D114 - 0x0042D178 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D114(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042D114: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042D127: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042D159: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042D178(); return; } /* jge: greater or equal (signed >=) */

loc_0042D15D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042D163: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0042D168: ;
    if (CMP_NE(eax, 2)) goto loc_0042D174; /* jne: not equal / not zero */

loc_0042D16D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042D174: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042D1AB(); return; /* tail jmp 0x0042D1AB */

}

/**
 * sub_0042D1AF
 * Original: 0x0042D1AF - 0x0042D1ED (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D1AF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042D1AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x4C;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042D1C2: ;
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    eax = ebp + -76;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0xFFFFFFFDu;
    MEM32(ebp + -12) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561088), _icall_esp); /* indirect call */
    }

loc_0042D1E4: ;
    if (TEST_S(eax, eax)) { sub_0042D1ED(); return; } /* jl: less (signed <) */

loc_0042D1E8: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0042D1F6(); return; /* tail jmp 0x0042D1F6 */

}

/**
 * sub_0042D1FA
 * Original: 0x0042D1FA - 0x0042D270 (118 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D1FA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042D1FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x4C;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042D20D: ;
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    eax = ebp + -76;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0xFFFFFFFDu;
    MEM32(ebp + -12) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561088), _icall_esp); /* indirect call */
    }

loc_0042D22F: ;
    if (TEST_S(eax, eax)) { sub_0042D270(); return; } /* jl: less (signed <) */

loc_0042D233: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -28);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -76);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -72);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -68);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + -64);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -60);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -56);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(eax + 0x20) = ecx;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042D278(); return; /* tail jmp 0x0042D278 */

}

/**
 * sub_0042D27C
 * Original: 0x0042D27C - 0x0042D2CF (83 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D27C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042D27C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0042D28F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4040);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 7);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10000);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0042D2C1: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042D2CF(); return; } /* jge: greater or equal (signed >=) */

loc_0042D2C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042D2CB: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042D306(); return; /* tail jmp 0x0042D306 */

}

/**
 * sub_0042D30A
 * Original: 0x0042D30A - 0x0042D32B (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D30A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042D30A: ;
    eax = MEM32(esp + 4);
    eax = eax >> 0xC;
    if (TEST_Z(MEM16(esp + 4), 0xFFF)) goto loc_0042D31B; /* je: equal / zero */

loc_0042D31A: ;
    eax++;

loc_0042D31B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56108C), _icall_esp); /* indirect call */
    }

loc_0042D322: ;
    if (TEST_S(eax, eax)) { sub_0042D32B(); return; } /* jl: less (signed <) */

loc_0042D326: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042D333(); return; /* tail jmp 0x0042D333 */

}

/**
 * sub_0042D336
 * Original: 0x0042D336 - 0x0042D374 (62 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D336(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042D336: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    esi = eax + 1;

loc_0042D341: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0042D341; /* jne: not equal / not zero */

loc_0042D348: ;
    edi = MEM32(esp + 0x10);
    eax = eax - esi;
    esi = edi;
    esi = esi - ecx;

loc_0042D352: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0042D352; /* jne: not equal / not zero */

loc_0042D35C: ;
    eax = eax + edi;
    ecx = 0x561458;
    POP32(esp, edi);
    eax = eax - ecx;
    POP32(esp, esi);

loc_0042D367: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0042D367; /* jne: not equal / not zero */

loc_0042D371: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042D374
 * Original: 0x0042D374 - 0x0042D393 (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D374(void)
{

loc_0042D374: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x561094));
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_0042D390: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042D393
 * Original: 0x0042D393 - 0x0042D46A (215 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D393(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042D393: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    esp = esp - 0x290;
    eax = MEM32(ebp + 0x74);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x78);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0042D3AE; /* jne: not equal / not zero */

loc_0042D3AB: ;
    eax = MEM32(esi + 0x24);

loc_0042D3AE: ;
    ecx = ebp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042D374(); /* call 0x0042D374 */

loc_0042D3B8: ;
    eax = MEM32(esi + 0x18);
    edi = 0x88;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ebx = edi;
    if (CMP_AE(eax, edi)) goto loc_0042D3C8; /* jae: above or equal (unsigned >=) */

loc_0042D3C6: ;
    ebx = eax;

loc_0042D3C8: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042D93B(); /* call 0x0042D93B */

loc_0042D3D7: ;
    ebx = ebx + 0xFFFFFFECu;
    PUSH32(esp, ebx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042D99D(); /* call 0x0042D99D */

loc_0042D3E8: ;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 0x70), eax)) goto loc_0042D448; /* je: equal / zero */

loc_0042D3EF: ;
    esi = MEM32(esi + 0x18);
    if (CMP_BE(esi, edi)) goto loc_0042D448; /* jbe: below or equal (unsigned <=) */

loc_0042D3F6: ;
    edi = esi + -136;
    if (CMP_EQ(edi, eax)) goto loc_0042D448; /* je: equal / zero */

loc_0042D400: ;
    ebx = 0x200;
    goto loc_0042D409;

loc_0042D407: ;
    eax = 0; /* xor self */

loc_0042D409: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = ebx;
    if (CMP_AE(edi, ebx)) goto loc_0042D411; /* jae: above or equal (unsigned >=) */

loc_0042D40F: ;
    esi = edi;

loc_0042D411: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp + -552;
    PUSH32(esp, ecx);
    ecx = ebp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561024), _icall_esp); /* indirect call */
    }

loc_0042D42A: ;
    if (TEST_S(eax, eax)) goto loc_0042D467; /* jl: less (signed <) */

loc_0042D42E: ;
    if (CMP_NE(MEM32(ebp + 0x64), esi)) { sub_0042D46A(); return; } /* jne: not equal / not zero */

loc_0042D433: ;
    PUSH32(esp, esi);
    eax = ebp + -552;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042D99D(); /* call 0x0042D99D */

loc_0042D444: ;
    edi = edi - esi;
    if ((edi != 0)) goto loc_0042D407; /* jne: not equal / not zero */

loc_0042D448: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = ebp + 0x4C;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042D9A2(); /* call 0x0042D9A2 */

loc_0042D45A: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x68;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_0042D467: ;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_0042D46F(); return; /* tail jmp 0x0042D46F */

}

/**
 * sub_0042D478
 * Original: 0x0042D478 - 0x0042D4F0 (120 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D478(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042D478: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(0x561024);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0042D4A5: ;
    if (CMP_L(eax, ebx)) goto loc_0042D4E6; /* jl: less (signed <) */

loc_0042D4A9: ;
    if (CMP_NE(MEM32(ebp + -4), 0x1C)) goto loc_0042D4E1; /* jne: not equal / not zero */

loc_0042D4AF: ;
    esi = MEM32(esi + 0x18);
    eax = 0x88;
    if (CMP_BE(esi, eax)) goto loc_0042D4BD; /* jbe: below or equal (unsigned <=) */

loc_0042D4BB: ;
    esi = eax;

loc_0042D4BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esi + -28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    eax = eax + 0x1C;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0042D4D5: ;
    if (CMP_L(eax, ebx)) goto loc_0042D4E6; /* jl: less (signed <) */

loc_0042D4D9: ;
    eax = esi + -28;
    if (CMP_EQ(MEM32(ebp + -4), eax)) { sub_0042D4F0(); return; } /* je: equal / zero */

loc_0042D4E1: ;
    eax = 0xC0000010u;

loc_0042D4E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042D4EC: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042D552(); return; /* tail jmp 0x0042D552 */

}

/**
 * sub_0042D559
 * Original: 0x0042D559 - 0x0042D608 (175 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D559(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042D559: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    esp = esp - 0x88;
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x78);
    if (TEST_Z(MEM8(esi + 0x23), 0x80)) goto loc_0042D5FC; /* je: equal / zero */

loc_0042D579: ;
    ecx = MEM32(esi + 0x6C);
    if (TEST_Z(ecx, ecx)) { sub_0042D608(); return; } /* je: equal / zero */

loc_0042D584: ;
    if (CMP_NE(MEM32(esi + 0x70), 0x70)) { sub_0042D608(); return; } /* jne: not equal / not zero */

loc_0042D58A: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebp + 0x58;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    eax = ebp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x74));
    MEM32(ebp + 0x60) = ecx;
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_0042D5AB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_0042D608(); return; } /* je: equal / zero */

loc_0042D5B0: ;
    if (CMP_NE(MEM32(ebp + 0x78), 0x70)) { sub_0042D608(); return; } /* jne: not equal / not zero */

loc_0042D5B6: ;
    if (CMP_NE(MEM16(ebx), 0x70)) { sub_0042D608(); return; } /* jne: not equal / not zero */

loc_0042D5BC: ;
    if (CMP_NE(MEM16(ebx + 2), 1)) { sub_0042D608(); return; } /* jne: not equal / not zero */

loc_0042D5C3: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_0042D5CC: ;
    eax = MEM32(esi + 0x18);
    eax = eax - 0x24;
    PUSH32(esp, eax);
    esi = esi + 0x24;
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_0042D5E0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_0042D5EC: ;
    eax = MEM32(ebp + 0x7C);
    eax = eax + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_0042D5FC: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x6C;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042D61A
 * Original: 0x0042D61A - 0x0042D782 (360 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D61A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042D61A: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + 0x7C));
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_0042D640: ;
    esi = eax;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0042D776; /* je: equal / zero */

loc_0042D64B: ;
    eax = MEM32(ebp + 0x78);
    if (CMP_NE(eax, edi)) goto loc_0042D65A; /* jne: not equal / not zero */

loc_0042D652: ;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);

loc_0042D65A: ;
    ecx = ebp + -64;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042D478(); /* call 0x0042D478 */

loc_0042D667: ;
    if (TEST_Z(eax, eax)) goto loc_0042D761; /* je: equal / zero */

loc_0042D66F: ;
    if (TEST_Z(MEM8(ebp + -32), 1)) goto loc_0042D75A; /* je: equal / zero */

loc_0042D679: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_0042D75A; /* je: equal / zero */

loc_0042D684: ;
    PUSH32(esp, 0x24830000);
    eax = eax + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0042D694: ;
    ebx = eax;
    if (CMP_NE(ebx, edi)) goto loc_0042D6A1; /* jne: not equal / not zero */

loc_0042D69A: ;
    PUSH32(esp, 8);
    goto loc_0042D75C;

loc_0042D6A1: ;
    eax = 0; /* xor self */
    edi = ebx + 0x28;
    MEM32(ebx + 0x10) = edi;
    MEM32(edi) = eax; edi += 4; /* stosd */
    edi = ebx + 0x14;
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebx + 0x10);
    eax = eax + 0x70;
    MEM32(ebx + 0xC) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042D559(); /* call 0x0042D559 */

loc_0042D6C2: ;
    if (TEST_Z(eax, eax)) goto loc_0042D761; /* je: equal / zero */

loc_0042D6CA: ;
    eax = 0; /* xor self */
    edi = ebp + 0x5C;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x64) = eax;
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebx + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_0042D6EE: ;
    if (TEST_Z(eax, eax)) goto loc_0042D761; /* je: equal / zero */

loc_0042D6F2: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_NE(eax, MEM32(ebp + 0x7C))) goto loc_0042D761; /* jne: not equal / not zero */

loc_0042D6FA: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax + 8);
    ecx = ecx + eax;
    MEM32(ebx + 4) = ecx;
    ecx = MEM32(eax + 8);
    ecx = ecx + eax;
    PUSH32(esp, esi);
    MEM32(ebx + 8) = ecx;
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0042D713: ;
    eax = ebp + -180;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_0042D71F: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -180;
    PUSH32(esp, MEM32(ebx + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_0042D731: ;
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    eax = ebp + -180;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_0042D741: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebp + 0x18;
    esi = ebp + 0x48;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0042D767; /* jne: not equal / not zero */

loc_0042D750: ;
    MEM32(ebx) = 0x66736378;
    eax = ebx;
    goto loc_0042D778;

loc_0042D75A: ;
    PUSH32(esp, 2);

loc_0042D75C: ;
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042D761: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0042D767: ;
    if (TEST_Z(ebx, ebx)) goto loc_0042D776; /* je: equal / zero */

loc_0042D76B: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0042D776: ;
    eax = 0; /* xor self */

loc_0042D778: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x70;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042D782
 * Original: 0x0042D782 - 0x0042D7AD (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D782(void)
{
    uint32_t ebp;

loc_0042D782: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x104;
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0042D336(); /* call 0x0042D336 */

loc_0042D79A: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042D61A(); /* call 0x0042D61A */

loc_0042D7A9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042D7AD
 * Original: 0x0042D7AD - 0x0042D7EE (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D7AD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042D7AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(ebp + 0xC);
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_AE(edx, ecx)) { sub_0042D7EE(); return; } /* jae: above or equal (unsigned >=) */

loc_0042D7C1: ;
    ecx = MEM32(eax);
    ecx = ecx + ecx * 4;
    ecx = ecx << 2;
    esi = ecx + edx * 8 + 0x10;
    esi = MEM32(esi + eax);
    esi = esi + ecx;
    ecx = esi + eax + 0xC;
    esi = MEM32(ebp + 0x10);
    MEM32(esi) = ecx;
    ecx = MEM32(eax);
    ecx = ecx + ecx * 4;
    eax = eax + edx * 8;
    eax = MEM32(eax + ecx * 4 + 0xC);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_0042D80B(); return; /* tail jmp 0x0042D80B */

}

/**
 * sub_0042D821
 * Original: 0x0042D821 - 0x0042D8A4 (131 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D821(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042D821: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    edx = eax + 1;

loc_0042D830: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042D830; /* jne: not equal / not zero */

loc_0042D837: ;
    eax = eax - edx;
    MEM16(ebp + -16) = LO16(eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    esi = esi + eax;
    PUSH32(esp, edi);
    edi = esi;
    if ((esi == 0)) goto loc_0042D899; /* je: equal / zero */

loc_0042D84E: ;
    SET_LO16(eax, MEM16(esi + 6));
    MEM16(ebp + -8) = LO16(eax);
    eax = ZX16(MEM16(esi + 4));
    eax = eax + eax * 4;
    eax = esi + eax * 2 + 0xC;
    MEM32(ebp + -4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610A4), _icall_esp); /* indirect call */
    }

loc_0042D874: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_0042D895; /* je: equal / zero */

loc_0042D87A: ;
    if (CMP_GE(eax, ecx)) goto loc_0042D881; /* jge: greater or equal (signed >=) */

loc_0042D87C: ;
    SET_LO16(esi, MEM16(esi));
    goto loc_0042D885;

loc_0042D881: ;
    SET_LO16(esi, MEM16(esi + 2));

loc_0042D885: ;
    if (CMP_EQ(LO16(esi), LO16(ecx))) goto loc_0042D899; /* je: equal / zero */

loc_0042D88A: ;
    esi = ZX16(LO16(esi));
    esi = esi + edi;
    if (CMP_NE(esi, ecx)) goto loc_0042D84E; /* jne: not equal / not zero */

loc_0042D893: ;
    goto loc_0042D899;

loc_0042D895: ;
    if (CMP_NE(esi, ecx)) { sub_0042D8A4(); return; } /* jne: not equal / not zero */

loc_0042D899: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042D8A0: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042D916(); return; /* tail jmp 0x0042D916 */

}

/**
 * sub_0042D91C
 * Original: 0x0042D91C - 0x0042D93B (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D91C(void)
{
    uint32_t ebp;

loc_0042D91C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = ebp + 0x14;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042D821(); /* call 0x0042D821 */

loc_0042D937: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0042D93B
 * Original: 0x0042D93B - 0x0042D99D (98 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D93B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042D93B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    if (CMP_BE(MEM32(ebp + 0xC), 0x40)) goto loc_0042D94E; /* jbe: below or equal (unsigned <=) */

loc_0042D947: ;
    MEM32(ebp + 0xC) = 0x40;

loc_0042D94E: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -64;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebp + -64;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);

loc_0042D975: ;
    MEM32(ebp + eax * 4 + -64) = MEM32(ebp + eax * 4 + -64) ^ 0x36363636;
    eax++;
    if (CMP_B(eax, 0x10)) goto loc_0042D975; /* jb: below (unsigned <) */

loc_0042D983: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_0042D98B: ;
    PUSH32(esp, 0x40);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_0042D999: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042D99D
 * Original: 0x0042D99D - 0x0042D9A2 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D99D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042D99D: ;
    g_seh_ebp = ebp; sub_0046DA76(); return; /* tail jmp 0x0046DA76 */

}

/**
 * sub_0042D9A2
 * Original: 0x0042D9A2 - 0x0042DA14 (114 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D9A2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042D9A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x54;
    PUSH32(esp, 0x40);
    POP32(esp, eax);
    if (CMP_BE(MEM32(ebp + 0x10), eax)) goto loc_0042D9B3; /* jbe: below or equal (unsigned <=) */

loc_0042D9B0: ;
    MEM32(ebp + 0x10) = eax;

loc_0042D9B3: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -84;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 0x10);
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebp + -84;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = 0; /* xor self */

loc_0042D9D8: ;
    MEM32(ebp + eax * 4 + -84) = MEM32(ebp + eax * 4 + -84) ^ 0x5C5C5C5C;
    eax++;
    if (CMP_B(eax, 0x10)) goto loc_0042D9D8; /* jb: below (unsigned <) */

loc_0042D9E6: ;
    esi = MEM32(ebp + 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_0042D9F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_0042D9F9: ;
    PUSH32(esp, 0x54);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_0042DA05: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_0042DA0E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0042DA14
 * Original: 0x0042DA14 - 0x0042DA89 (117 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DA14(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042DA14: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x108;
    PUSH32(esp, esi);
    esi = MEM32(0x561094);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, edi);
    ecx = 0; /* xor self */

loc_0042DA29: ;
    SET_LO8(eax, LO8(eax) | MEM8(ecx + esi));
    ecx++;
    if (CMP_L(ecx, 0x10)) goto loc_0042DA29; /* jl: less (signed <) */

loc_0042DA32: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0042DA5A; /* jne: not equal / not zero */

loc_0042DA36: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    eax = ebp + -264;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0); sub_0042F15B(); /* call 0x0042F15B */

loc_0042DA54: ;
    esi = ebp + -210;

loc_0042DA5A: ;
    edi = MEM32(ebp + 8);
    edi = edi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042D93B(); /* call 0x0042D93B */

loc_0042DA69: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_0042DA74: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042D9A2(); /* call 0x0042D9A2 */

loc_0042DA80: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042DA89
 * Original: 0x0042DA89 - 0x0042DAA8 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DA89(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DA89: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x10118);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0042DA9E: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) { sub_0042DAA8(); return; } /* jne: not equal / not zero */

loc_0042DAA4: ;
    PUSH32(esp, 8);
    g_seh_ebp = ebp; sub_0042DAD6(); return; /* tail jmp 0x0042DAD6 */

}

/**
 * sub_0042DB09
 * Original: 0x0042DB09 - 0x0042DB23 (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DB09(void)
{

loc_0042DB09: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_0042DB1E: ;
    eax = 0; /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042DB23
 * Original: 0x0042DB23 - 0x0042DB7C (89 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DB23(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042DB23: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi);
    ebx = 0; /* xor self */
    ebx++;
    esi = esi & ebx;
    if (TEST_Z(eax, eax)) goto loc_0042DB66; /* je: equal / zero */

loc_0042DB3D: ;
    if (TEST_Z(esi, esi)) goto loc_0042DB44; /* je: equal / zero */

loc_0042DB41: ;
    eax = ebp + -20;

loc_0042DB44: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(edi + 4));
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042D9A2(); /* call 0x0042D9A2 */

loc_0042DB53: ;
    if (TEST_Z(esi, esi)) goto loc_0042DB66; /* je: equal / zero */

loc_0042DB57: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042DA14(); /* call 0x0042DA14 */

loc_0042DB64: ;
    ebx = eax;

loc_0042DB66: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0042DB71: ;
    POP32(esp, edi);
    POP32(esp, esi);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(ebx, ebx)) { sub_0042DB7C(); return; } /* je: equal / zero */

loc_0042DB78: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042DB81(); return; /* tail jmp 0x0042DB81 */

}

/**
 * sub_0042DB85
 * Original: 0x0042DB85 - 0x0042DBA4 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DB85(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042DB85: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0042DB92: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) { sub_0042DBA4(); return; } /* jne: not equal / not zero */

loc_0042DB98: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042DB9F: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0042DBBB
 * Original: 0x0042DBBB - 0x0042DBE5 (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DBBB(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042DBBB: ;
    (void)0; /* cmp MEM32(esp + 8), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(MEM32(esp + 8), 0)) goto loc_0042DBD4; /* je: equal / zero */

loc_0042DBC7: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_0042DBD4: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0042DBDF: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042DBE5
 * Original: 0x0042DBE5 - 0x0042DC01 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DBE5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DBE5: ;
    eax = MEM32(esp + 4);
    if (CMP_BE(eax, 2)) goto loc_0042DBFD; /* jbe: below or equal (unsigned <=) */

loc_0042DBEE: ;
    if (CMP_EQ(eax, 4)) goto loc_0042DBFD; /* je: equal / zero */

loc_0042DBF3: ;
    if (CMP_NE(eax, 8)) { sub_0042DC01(); return; } /* jne: not equal / not zero */

loc_0042DBF8: ;
    PUSH32(esp, 0x64);

loc_0042DBFA: ;
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0042DC03(); return; /* tail jmp 0x0042DC03 */

loc_0042DBFD: ;
    PUSH32(esp, 0x14);
    goto loc_0042DBFA;

}

/**
 * sub_0042DC06
 * Original: 0x0042DC06 - 0x0042DC3A (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DC06(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DC06: ;
    eax = MEM32(esp + 4);
    if (CMP_BE(eax, 1)) goto loc_0042DC2E; /* jbe: below or equal (unsigned <=) */

loc_0042DC0F: ;
    if (CMP_EQ(eax, 2)) goto loc_0042DC27; /* je: equal / zero */

loc_0042DC14: ;
    if (CMP_EQ(eax, 4)) goto loc_0042DC27; /* je: equal / zero */

loc_0042DC19: ;
    if (CMP_NE(eax, 8)) { sub_0042DC3A(); return; } /* jne: not equal / not zero */

loc_0042DC1E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x75F008), _icall_esp); /* indirect call */
    }

loc_0042DC25: ;
    g_seh_ebp = ebp; sub_0042DC44(); return; /* tail jmp 0x0042DC44 */

loc_0042DC27: ;
    PUSH32(esp, 0); sub_0042DB85(); /* call 0x0042DB85 */

loc_0042DC2C: ;
    g_seh_ebp = ebp; sub_0042DC44(); return; /* tail jmp 0x0042DC44 */

loc_0042DC2E: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DA89(); /* call 0x0042DA89 */

loc_0042DC38: ;
    g_seh_ebp = ebp; sub_0042DC44(); return; /* tail jmp 0x0042DC44 */

}

/**
 * sub_0042DC47
 * Original: 0x0042DC47 - 0x0042DC5B (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DC47(void)
{

loc_0042DC47: ;
    eax = MEM32(0x10118);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_0042DC06(); /* call 0x0042DC06 */

loc_0042DC58: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DC5B
 * Original: 0x0042DC5B - 0x0042DCA2 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DC5B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042DC5B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    if (CMP_BE(eax, 1)) goto loc_0042DC94; /* jbe: below or equal (unsigned <=) */

loc_0042DC68: ;
    if (CMP_EQ(eax, 2)) goto loc_0042DC86; /* je: equal / zero */

loc_0042DC6D: ;
    if (CMP_EQ(eax, 4)) goto loc_0042DC86; /* je: equal / zero */

loc_0042DC72: ;
    if (CMP_NE(eax, 8)) { sub_0042DCA2(); return; } /* jne: not equal / not zero */

loc_0042DC77: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x75F00C), _icall_esp); /* indirect call */
    }

loc_0042DC84: ;
    g_seh_ebp = ebp; sub_0042DCA5(); return; /* tail jmp 0x0042DCA5 */

loc_0042DC86: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DB09(); /* call 0x0042DB09 */

loc_0042DC92: ;
    g_seh_ebp = ebp; sub_0042DCA5(); return; /* tail jmp 0x0042DCA5 */

loc_0042DC94: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DB09(); /* call 0x0042DB09 */

loc_0042DCA0: ;
    g_seh_ebp = ebp; sub_0042DCA5(); return; /* tail jmp 0x0042DCA5 */

}

/**
 * sub_0042DCA9
 * Original: 0x0042DCA9 - 0x0042DCE8 (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DCA9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DCA9: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    if (CMP_BE(eax, 1)) goto loc_0042DCDC; /* jbe: below or equal (unsigned <=) */

loc_0042DCB4: ;
    if (CMP_EQ(eax, 2)) goto loc_0042DCD0; /* je: equal / zero */

loc_0042DCB9: ;
    if (CMP_EQ(eax, 4)) goto loc_0042DCD0; /* je: equal / zero */

loc_0042DCBE: ;
    if (CMP_NE(eax, 8)) { sub_0042DCE8(); return; } /* jne: not equal / not zero */

loc_0042DCC3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x75F010), _icall_esp); /* indirect call */
    }

loc_0042DCCE: ;
    g_seh_ebp = ebp; sub_0042DCEB(); return; /* tail jmp 0x0042DCEB */

loc_0042DCD0: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DBBB(); /* call 0x0042DBBB */

loc_0042DCDA: ;
    g_seh_ebp = ebp; sub_0042DCEB(); return; /* tail jmp 0x0042DCEB */

loc_0042DCDC: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042DB23(); /* call 0x0042DB23 */

loc_0042DCE6: ;
    g_seh_ebp = ebp; sub_0042DCEB(); return; /* tail jmp 0x0042DCEB */

}

/**
 * sub_0042DCEE
 * Original: 0x0042DCEE - 0x0042DD08 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DCEE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042DCEE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    ecx = MEM32(ebp + 8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_0042DD08(); return; } /* je: equal / zero */

loc_0042DCFC: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    edx = eax;
    eax = ecx + eax + -1;
    g_seh_ebp = ebp; sub_0042DD0D(); return; /* tail jmp 0x0042DD0D */

}

/**
 * sub_0042DD31
 * Original: 0x0042DD31 - 0x0042DD5E (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DD31(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042DD31: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610B0), _icall_esp); /* indirect call */
    }

loc_0042DD4A: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0042DD57; /* jne: not equal / not zero */

loc_0042DD50: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0042DD57: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0042DD5E
 * Original: 0x0042DD5E - 0x0042DD6B (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DD5E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DD5E: ;
    if (CMP_EQ(MEM32(esp + 8), 0)) { sub_0042DD6B(); return; } /* je: equal / zero */

loc_0042DD65: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5610B8)); return; /* indirect tail jmp */

}

/**
 * sub_0042DD6E
 * Original: 0x0042DD6E - 0x0042DD74 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DD6E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DD6E: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5610BC)); return; /* indirect tail jmp */

}

/**
 * sub_0042DD74
 * Original: 0x0042DD74 - 0x0042DD7A (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DD74(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DD74: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5610C0)); return; /* indirect tail jmp */

}

/**
 * sub_0042DD7A
 * Original: 0x0042DD7A - 0x0042DDCA (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DD7A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DD7A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x5614F8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042DD86: ;
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -32) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    if (CMP_EQ(MEM32(ebp + 0x10), ebx)) goto loc_0042DDC1; /* je: equal / zero */

loc_0042DD9C: ;
    if (CMP_EQ(MEM32(ebp + 0x10), ebx)) goto loc_0042DDBB; /* je: equal / zero */

loc_0042DDA1: ;
    SET_LO8(edx, MEM8(ecx));
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0042DDB6; /* je: equal / zero */

loc_0042DDA7: ;
    MEM8(eax) = LO8(edx);
    eax++;
    MEM32(ebp + -28) = eax;
    ecx++;
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    goto loc_0042DD9C;

loc_0042DDB6: ;
    if (CMP_NE(MEM32(ebp + 0x10), ebx)) goto loc_0042DDBF; /* jne: not equal / not zero */

loc_0042DDBB: ;
    eax--;
    MEM32(ebp + -28) = eax;

loc_0042DDBF: ;
    MEM8(eax) = LO8(ebx);

loc_0042DDC1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_0042DDD7(); return; /* tail jmp 0x0042DDD7 */

}

/**
 * sub_0042DDDF
 * Original: 0x0042DDDF - 0x0042DE1D (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DDDF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DDDF: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x561508);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042DDEB: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_0042DE13; /* je: equal / zero */

loc_0042DDF2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edx = eax + 1;

loc_0042DDF9: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0042DDF9; /* jne: not equal / not zero */

loc_0042DE00: ;
    eax = eax - edx;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_0042DE15;

    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

loc_0042DE13: ;
    eax = 0; /* xor self */

loc_0042DE15: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042DE1A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DE1D
 * Original: 0x0042DE1D - 0x0042DE39 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DE1D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DE1D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x651080;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_0042DE2C: ;
    esi = MEM32(0x65109C);
    edi = 0x65109C;
    g_seh_ebp = ebp; sub_0042DE44(); return; /* tail jmp 0x0042DE44 */

}

/**
 * sub_0042DE55
 * Original: 0x0042DE55 - 0x0042DEAB (86 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DE55(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042DE55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x50;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = eax & 1;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -76) = eax;
    MEM32(ebp + -68) = 0x42DE55;
    if (TEST_Z(esi, esi)) goto loc_0042DE98; /* je: equal / zero */

loc_0042DE7D: ;
    ecx = MEM32(ebp + 0x10);
    if (CMP_BE(ecx, 0xF)) goto loc_0042DE88; /* jbe: below or equal (unsigned <=) */

loc_0042DE85: ;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);

loc_0042DE88: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -64) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0042DE9C; /* je: equal / zero */

loc_0042DE8F: ;
    PUSH32(esp, edi);
    edi = ebp + -60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    goto loc_0042DE9C;

loc_0042DE98: ;
    MEM32(ebp + -64) = MEM32(ebp + -64) & 0;

loc_0042DE9C: ;
    eax = ebp + -80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610C4), _icall_esp); /* indirect call */
    }

loc_0042DEA6: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0042DEAB
 * Original: 0x0042DEAB - 0x0042DEBD (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DEAB(void)
{

loc_0042DEAB: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(0x87CA64);
    MEM32(0x87CA64) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DEBD
 * Original: 0x0042DEBD - 0x0042DEED (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DEBD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DEBD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = 0x651080;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_0042DECA: ;
    if (CMP_EQ(MEM32(esp + 0xC), 0)) { sub_0042DEED(); return; } /* je: equal / zero */

loc_0042DED1: ;
    ecx = MEM32(0x6510A0);
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x65109C;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(0x6510A0) = eax;
    g_seh_ebp = ebp; sub_0042DEFB(); return; /* tail jmp 0x0042DEFB */

}

/**
 * sub_0042DF06
 * Original: 0x0042DF06 - 0x0042DF1F (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DF06(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DF06: ;
    eax = MEM32(0x20);
    eax = MEM32(eax + 0x250);
    if (TEST_Z(eax, eax)) { sub_0042DF1F(); return; } /* je: equal / zero */

loc_0042DF16: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_0042DF1D: ;
    g_seh_ebp = ebp; sub_0042DF21(); return; /* tail jmp 0x0042DF21 */

}

/**
 * sub_0042DF42
 * Original: 0x0042DF42 - 0x0042DFC0 (126 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DF42(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DF42: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x561518);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0042DF4E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(0x28);
    MEM32(ebp + -32) = eax;
    edx = MEM32(eax + 0x28);
    edx = edx + 4;
    MEM32(ebp + -36) = edx;
    MEM32(edx + -4) = edx;
    ebx = MEM32(0x561698);
    esi = MEM32(0x561694);
    ebx = ebx - esi;
    MEM32(ebp + -40) = ebx;
    ecx = ebx;
    edi = edx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(0x5616A4);
    if (TEST_Z(ecx, ecx)) goto loc_0042DFA7; /* je: equal / zero */

loc_0042DF94: ;
    eax = 0; /* xor self */
    edi = ebx + edx;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_0042DFA7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0042DE1D(); /* call 0x0042DE1D */

loc_0042DFAE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 8), _icall_esp); /* indirect call */
    }

loc_0042DFB4: ;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0042DE1D(); /* call 0x0042DE1D */

loc_0042DFBE: ;
    g_seh_ebp = ebp; sub_0042DFCC(); return; /* tail jmp 0x0042DFCC */

}

/**
 * sub_0042DFDA
 * Original: 0x0042DFDA - 0x0042E041 (103 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DFDA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042DFDA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0042DFE9; /* jne: not equal / not zero */

loc_0042DFE4: ;
    eax = MEM32(0x10130);

loc_0042DFE9: ;
    ecx = MEM32(ebp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42DF42);
    PUSH32(esp, 0);
    ecx = ecx >> 2;
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(0x87CA68));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610CC), _icall_esp); /* indirect call */
    }

loc_0042E019: ;
    ecx = eax;
    if (CMP_GE(ecx & ecx, 0)) { sub_0042E041(); return; } /* jge: greater or equal (signed >=) */

loc_0042E01F: ;
    eax = ZX8(MEM8(0x24));
    if (CMP_AE(LO8(eax), 2)) { sub_0042E041(); return; } /* jae: above or equal (unsigned >=) */

loc_0042E02B: ;
    eax = MEM32(0x28);
    if (CMP_EQ(MEM32(eax + 0x28), 0)) { sub_0042E041(); return; } /* je: equal / zero */

loc_0042E037: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042E03D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042E044(); return; /* tail jmp 0x0042E044 */

}

/**
 * sub_0042E048
 * Original: 0x0042E048 - 0x0042E055 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E048(void)
{

loc_0042E048: ;
    eax = MEM32(0x28);
    eax = MEM32(eax + 0x12C);
    esp += 4; return; /* ret */

}

/**
 * sub_0042E055
 * Original: 0x0042E055 - 0x0042E080 (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E055(void)
{
    uint32_t ebp;

loc_0042E055: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(0x561060);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_0042E06D: ;
    esi = MEM32(0x1011C);
    edi = MEM32(0x10120);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    esi = esi + edi;
    g_seh_ebp = ebp; sub_0042E0A0(); return; /* tail jmp 0x0042E0A0 */

}

/**
 * sub_0042E0BC
 * Original: 0x0042E0BC - 0x0042E0D6 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E0BC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E0BC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610D4), _icall_esp); /* indirect call */
    }

loc_0042E0C8: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042E0D6(); return; } /* jge: greater or equal (signed >=) */

loc_0042E0CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042E0D2: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042E0D9(); return; /* tail jmp 0x0042E0D9 */

}

/**
 * sub_0042E0DD
 * Original: 0x0042E0DD - 0x0042E0F5 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E0DD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E0DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610D8), _icall_esp); /* indirect call */
    }

loc_0042E0E7: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042E0F5(); return; } /* jge: greater or equal (signed >=) */

loc_0042E0EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042E0F1: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042E0F8(); return; /* tail jmp 0x0042E0F8 */

}

/**
 * sub_0042E0FB
 * Original: 0x0042E0FB - 0x0042E111 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E0FB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E0FB: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_0042E055(); /* call 0x0042E055 */

loc_0042E104: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_0042E111(); return; } /* je: equal / zero */

loc_0042E109: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E0BC(); /* call 0x0042E0BC */

loc_0042E10F: ;
    g_seh_ebp = ebp; sub_0042E113(); return; /* tail jmp 0x0042E113 */

}

/**
 * sub_0042E116
 * Original: 0x0042E116 - 0x0042E12C (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E116(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E116: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_0042E055(); /* call 0x0042E055 */

loc_0042E11F: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_0042E12C(); return; } /* je: equal / zero */

loc_0042E124: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E0DD(); /* call 0x0042E0DD */

loc_0042E12A: ;
    g_seh_ebp = ebp; sub_0042E12E(); return; /* tail jmp 0x0042E12E */

}

/**
 * sub_0042E131
 * Original: 0x0042E131 - 0x0042E13B (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E131(void)
{

loc_0042E131: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E13B
 * Original: 0x0042E13B - 0x0042E14C (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E13B(void)
{

loc_0042E13B: ;
    ecx = MEM32(esp + 4);
    /* TODO: rdtsc  */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    eax = 0; /* xor self */
    eax++;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E14C
 * Original: 0x0042E14C - 0x0042E160 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E14C(void)
{

loc_0042E14C: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    MEM32(eax) = 0x2BB5C755;
    eax = 0; /* xor self */
    eax++;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E187
 * Original: 0x0042E187 - 0x0042E1BA (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E187(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E187: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    eax = ebp + -8;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x561050));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56104C), _icall_esp); /* indirect call */
    }

loc_0042E1A9: ;
    if (CMP_GE(eax & eax, 0)) { sub_0042E1BA(); return; } /* jge: greater or equal (signed >=) */

loc_0042E1AD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042E1B3: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0042E24C(); return; /* tail jmp 0x0042E24C */

}

/**
 * sub_0042E250
 * Original: 0x0042E250 - 0x0042E26E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) { sub_0042E26E(); return; } /* je: equal / zero */

loc_0042E25C: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042F17E(); /* call 0x0042F17E */

loc_0042E26C: ;
    g_seh_ebp = ebp; sub_0042E270(); return; /* tail jmp 0x0042E270 */

}

/**
 * sub_0042E2B1
 * Original: 0x0042E2B1 - 0x0042E2C6 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E2B1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E2B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610FC), _icall_esp); /* indirect call */
    }

loc_0042E2BD: ;
    if (TEST_S(eax, eax)) { sub_0042E2C6(); return; } /* jl: less (signed <) */

loc_0042E2C1: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0042E2CE(); return; /* tail jmp 0x0042E2CE */

}

/**
 * sub_0042E2D1
 * Original: 0x0042E2D1 - 0x0042E315 (68 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E2D1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E2D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042F1A6(); /* call 0x0042F1A6 */

loc_0042E2E3: ;
    esi = eax;

loc_0042E2E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561100), _icall_esp); /* indirect call */
    }

loc_0042E2F4: ;
    if (TEST_S(eax, eax)) goto loc_0042E307; /* jl: less (signed <) */

loc_0042E2F8: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) goto loc_0042E310; /* je: equal / zero */

loc_0042E2FE: ;
    if (CMP_EQ(eax, 0x101)) goto loc_0042E2E5; /* je: equal / zero */

loc_0042E305: ;
    goto loc_0042E310;

loc_0042E307: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C302(); /* call 0x0042C302 */

loc_0042E30D: ;
    eax = eax | 0xFFFFFFFFu;

loc_0042E310: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0042E315
 * Original: 0x0042E315 - 0x0042E361 (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E315(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E315: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042F1A6(); /* call 0x0042F1A6 */

loc_0042E327: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0042E33A; /* jne: not equal / not zero */

loc_0042E32D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & eax;
    MEM32(ebp + -4) = 0x80000000u;
    esi = ebp + -8;

loc_0042E33A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561104), _icall_esp); /* indirect call */
    }

loc_0042E346: ;
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_0042E353; /* je: equal / zero */

loc_0042E34C: ;
    if (CMP_EQ(eax, 0x101)) goto loc_0042E33A; /* je: equal / zero */

loc_0042E353: ;
    ecx = 0xC0;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(eax, ecx)) { sub_0042E361(); return; } /* jne: not equal / not zero */

loc_0042E35D: ;
    eax = ecx;
    g_seh_ebp = ebp; sub_0042E363(); return; /* tail jmp 0x0042E363 */

}

/**
 * sub_0042E367
 * Original: 0x0042E367 - 0x0042E379 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E367(void)
{

loc_0042E367: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_0042E2D1(); /* call 0x0042E2D1 */

loc_0042E376: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042E379
 * Original: 0x0042E379 - 0x0042E387 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E379(void)
{

loc_0042E379: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_0042E315(); /* call 0x0042E315 */

loc_0042E384: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E387
 * Original: 0x0042E387 - 0x0042E3AB (36 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E387(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E387: ;
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
    PUSH32(esp, 0x104);
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_0042E3A2: ;
    if (TEST_S(eax, eax)) { sub_0042E3AB(); return; } /* jl: less (signed <) */

loc_0042E3A6: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0042E3AF
 * Original: 0x0042E3AF - 0x0042E3D6 (39 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E3AF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E3AF: ;
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
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_0042E3C7: ;
    if (TEST_S(eax, eax)) { sub_0042E3D6(); return; } /* jl: less (signed <) */

loc_0042E3CB: ;
    if (TEST_NZ(MEM8(ebp + -4), 4)) { sub_0042E3D6(); return; } /* jne: not equal / not zero */

loc_0042E3D1: ;
    eax = 0; /* xor self */
    eax++;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0042E3DB
 * Original: 0x0042E3DB - 0x0042E40E (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E3DB(void)
{
    int _flags = 0; /* fallback flag var */

loc_0042E3DB: ;
    eax = 0x651050;
    PUSH32(esp, esi);
    esi = eax;
    ecx = eax;
    eax = 0x651058;
    edx = 0; /* xor self */
    (void)0; /* cmp esi, eax - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_AE(esi, eax)) goto loc_0042E3FC; /* jae: above or equal (unsigned >=) */

loc_0042E3F1: ;
    if (CMP_NE(MEM32(ecx), edx)) { sub_0042E40E(); return; } /* jne: not equal / not zero */

loc_0042E3F5: ;
    ecx = ecx + 4;
    if (CMP_B(ecx, eax)) goto loc_0042E3F1; /* jb: below (unsigned <) */

loc_0042E3FC: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_0043036F(); /* call 0x0043036F */

loc_0042E40B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042E41D
 * Original: 0x0042E41D - 0x0042E454 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E41D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E41D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(0x561110);
    (void)0; /* cmp MEM32(eax), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = 0x1000;
    if (CMP_NE(MEM32(eax), 0)) goto loc_0042E43F; /* jne: not equal / not zero */

loc_0042E430: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56110C), _icall_esp); /* indirect call */
    }

loc_0042E437: ;
    ecx = MEM32(0x561110);
    MEM32(ecx) = eax;

loc_0042E43F: ;
    eax = MEM32(0x561110);
    eax = MEM32(eax);
    if (TEST_NZ(eax, eax)) { sub_0042E454(); return; } /* jne: not equal / not zero */

loc_0042E44A: ;
    eax = 0xC0000017u;
    g_seh_ebp = ebp; sub_0042E4F9(); return; /* tail jmp 0x0042E4F9 */

}

/**
 * sub_0042E4FE
 * Original: 0x0042E4FE - 0x0042E55A (92 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E4FE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E4FE: ;
    eax = MEM32(0x561110);
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) { sub_0042E55A(); return; } /* je: equal / zero */

loc_0042E509: ;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, 2)) goto loc_0042E523; /* je: equal / zero */

loc_0042E510: ;
    if (CMP_EQ(eax, 3)) goto loc_0042E523; /* je: equal / zero */

loc_0042E515: ;
    edx = MEM32(0x10118);
    ecx = MEM32(ecx + 4);
    if (CMP_NE(ecx, MEM32(edx + 8))) { sub_0042E55A(); return; } /* jne: not equal / not zero */

loc_0042E523: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = MEM32(0x561110);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi + 0x400;
    ecx = 0x300;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(0x561110);
    ecx = MEM32(eax);
    MEM32(eax) = MEM32(eax) & 0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610BC), _icall_esp); /* indirect call */
    }

loc_0042E554: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0042E55F(); return; /* tail jmp 0x0042E55F */

}

/**
 * sub_0042E562
 * Original: 0x0042E562 - 0x0042E5A9 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E562(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E562: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0042E41D(); /* call 0x0042E41D */

loc_0042E57B: ;
    if (TEST_S(eax, eax)) goto loc_0042E59E; /* jl: less (signed <) */

loc_0042E57F: ;
    eax = MEM32(0x20);
    eax = MEM32(eax + 0x250);
    if (TEST_Z(eax, eax)) goto loc_0042E596; /* je: equal / zero */

loc_0042E58F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_0042E596: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561114), _icall_esp); /* indirect call */
    }

loc_0042E59E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561054), _icall_esp); /* indirect call */
    }

loc_0042E5A5: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0042E5A9
 * Original: 0x0042E5A9 - 0x0042E5D3 (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E5A9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E5A9: ;
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
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_0042E5C1: ;
    if (TEST_S(eax, eax)) { sub_0042E5D3(); return; } /* jl: less (signed <) */

loc_0042E5C5: ;
    eax = MEM32(ebp + -4);
    eax = eax >> 0x10;
    eax = eax & 0x5F;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_0042E5D7(); return; /* tail jmp 0x0042E5D7 */

}

/**
 * sub_0042E5F2
 * Original: 0x0042E5F2 - 0x0042E617 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E5F2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0042E5F2: ;
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
    PUSH32(esp, 0x103);
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_0042E60D: ;
    if (TEST_S(eax, eax)) { sub_0042E617(); return; } /* jl: less (signed <) */

loc_0042E611: ;
    eax = ZX8(MEM8(ebp + -3));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
