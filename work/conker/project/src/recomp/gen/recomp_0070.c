/**
 * Burnout 3 - Recompiled code chunk 70
 * Functions: 250 (0x0054E8B5 - 0x0055A82A)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0054E8B5
 * Original: 0x0054E8B5 - 0x0054E8EF (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E8B5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E8B5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E8C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_0054E8D7: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054E8E8; /* je: equal / zero */

loc_0054E8DF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054E8E8: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054E8EF
 * Original: 0x0054E8EF - 0x0054E921 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E8EF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E8EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E902: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x18), _icall_esp); /* indirect call */
    }

loc_0054E90B: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054E91C; /* je: equal / zero */

loc_0054E913: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054E91C: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0054E921
 * Original: 0x0054E921 - 0x0054E95D (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E921(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E921: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E934: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0); sub_0054DD7B(); /* call 0x0054DD7B */

loc_0054E945: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054E956; /* je: equal / zero */

loc_0054E94D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054E956: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0054E95D
 * Original: 0x0054E95D - 0x0054E98F (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E95D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E95D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E970: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x14), _icall_esp); /* indirect call */
    }

loc_0054E979: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054E98A; /* je: equal / zero */

loc_0054E981: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054E98A: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0054E98F
 * Original: 0x0054E98F - 0x0054EA0F (128 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054E98F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054E98F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054E9A4: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    edx = esi + 0x4C;
    MEM32(edx) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x50) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = esi + 0x15C;
    MEM32(esi + 0x54) = eax;
    eax = MEM32(ecx);
    ebx = 0x10000;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) | ebx;
    if (CMP_EQ(eax, ecx)) goto loc_0054E9E9; /* je: equal / zero */

loc_0054E9D0: ;
    PUSH32(esp, edi);

loc_0054E9D1: ;
    edi = eax + -264;
    esi = edx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(eax + -272) = MEM32(eax + -272) | ebx;
    eax = MEM32(eax);
    if (CMP_NE(eax, ecx)) goto loc_0054E9D1; /* jne: not equal / not zero */

loc_0054E9E8: ;
    POP32(esp, edi);

loc_0054E9E9: ;
    (void)0; /* cmp MEM32(ebp + 0x14), 0 - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(MEM32(ebp + 0x14), 0)) goto loc_0054E9F9; /* jne: not equal / not zero */

loc_0054E9F1: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054E9F6: ;
    MEM32(ebp + -8) = eax;

loc_0054E9F9: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054EA08; /* je: equal / zero */

loc_0054E9FF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054EA08: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0054EA0F
 * Original: 0x0054EA0F - 0x0054EA3A (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EA0F(void)
{
    uint32_t ebp;

loc_0054EA0F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054EA20: ;
    edx = 0x400000;
    ecx = esi + 0x15C;
    eax = MEM32(ecx);
    ebx = 0; /* xor self */
    MEM32(esi + 0x44) = MEM32(esi + 0x44) | edx;
    MEM32(esi + 0x84) = edi;
    g_seh_ebp = ebp; sub_0054EA48(); return; /* tail jmp 0x0054EA48 */

}

/**
 * sub_0054EA6F
 * Original: 0x0054EA6F - 0x0054EAFB (140 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EA6F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054EA6F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054EA80: ;
    eax = MEM32(edi);
    MEM32(esi + 0xC4) = eax;
    eax = MEM32(edi + 4);
    MEM32(esi + 0xC8) = eax;
    eax = MEM32(edi + 8);
    MEM32(esi + 0xCC) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0xD0) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0xD4) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0xD8) = eax;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0xDC) = eax;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0xE0) = eax;
    eax = MEM32(edi + 0x20);
    MEM8(esi + 0xC2) = MEM8(esi + 0xC2) | 0x7F;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), ebx - flags set for next jcc */
    MEM32(esi + 0xE4) = eax;
    if (CMP_NE(MEM32(ebp + 8), ebx)) goto loc_0054EAE5; /* jne: not equal / not zero */

loc_0054EADE: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054EAE3: ;
    ebx = eax;

loc_0054EAE5: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054EAF4; /* je: equal / zero */

loc_0054EAEB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054EAF4: ;
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054EAFB
 * Original: 0x0054EAFB - 0x0054EB7B (128 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EAFB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054EAFB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054EB10: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    edx = esi + 0x58;
    MEM32(edx) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = esi + 0x15C;
    MEM32(esi + 0x60) = eax;
    eax = MEM32(ecx);
    ebx = 0x20000;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) | ebx;
    if (CMP_EQ(eax, ecx)) goto loc_0054EB55; /* je: equal / zero */

loc_0054EB3C: ;
    PUSH32(esp, edi);

loc_0054EB3D: ;
    edi = eax + -252;
    esi = edx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(eax + -272) = MEM32(eax + -272) | ebx;
    eax = MEM32(eax);
    if (CMP_NE(eax, ecx)) goto loc_0054EB3D; /* jne: not equal / not zero */

loc_0054EB54: ;
    POP32(esp, edi);

loc_0054EB55: ;
    (void)0; /* cmp MEM32(ebp + 0x14), 0 - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(MEM32(ebp + 0x14), 0)) goto loc_0054EB65; /* jne: not equal / not zero */

loc_0054EB5D: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054EB62: ;
    MEM32(ebp + -8) = eax;

loc_0054EB65: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054EB74; /* je: equal / zero */

loc_0054EB6B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054EB74: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0054EB7B
 * Original: 0x0054EB7B - 0x0054EBC0 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EB7B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054EB7B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054EB8C: ;
    eax = MEM32(ebp + 8);
    MEM8(esi + 0x46) = MEM8(esi + 0x46) | 4;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), edi - flags set for next jcc */
    MEM32(esi + 0x64) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x68) = eax;
    if (CMP_NE(MEM32(ebp + 0x10), edi)) goto loc_0054EBAA; /* jne: not equal / not zero */

loc_0054EBA3: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054EBA8: ;
    edi = eax;

loc_0054EBAA: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054EBB9; /* je: equal / zero */

loc_0054EBB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054EBB9: ;
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0054EBC0
 * Original: 0x0054EBC0 - 0x0054EBFF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054EBC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054EBD1: ;
    eax = MEM32(ebp + 8);
    MEM8(esi + 0x46) = MEM8(esi + 0x46) | 0x10;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    MEM32(esi + 0x78) = eax;
    if (CMP_NE(MEM32(ebp + 0xC), edi)) goto loc_0054EBE9; /* jne: not equal / not zero */

loc_0054EBE2: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054EBE7: ;
    edi = eax;

loc_0054EBE9: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054EBF8; /* je: equal / zero */

loc_0054EBEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054EBF8: ;
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054EBFF
 * Original: 0x0054EBFF - 0x0054EC41 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EBFF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054EBFF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054EC10: ;
    eax = MEM32(ebp + 8);
    MEM8(esi + 0x46) = MEM8(esi + 0x46) | 0x20;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    MEM32(esi + 0x80) = eax;
    if (CMP_NE(MEM32(ebp + 0xC), edi)) goto loc_0054EC2B; /* jne: not equal / not zero */

loc_0054EC24: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054EC29: ;
    edi = eax;

loc_0054EC2B: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054EC3A; /* je: equal / zero */

loc_0054EC31: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054EC3A: ;
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054EC41
 * Original: 0x0054EC41 - 0x0054EC80 (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EC41(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054EC41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054EC52: ;
    eax = MEM32(ebp + 8);
    MEM8(esi + 0x46) = MEM8(esi + 0x46) | 0x20;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    MEM32(esi + 0x7C) = eax;
    if (CMP_NE(MEM32(ebp + 0xC), edi)) goto loc_0054EC6A; /* jne: not equal / not zero */

loc_0054EC63: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054EC68: ;
    edi = eax;

loc_0054EC6A: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054EC79; /* je: equal / zero */

loc_0054EC70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054EC79: ;
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054EC80
 * Original: 0x0054EC80 - 0x0054ECC2 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EC80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054EC80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054EC91: ;
    eax = MEM32(ebp + 8);
    MEM8(esi + 0x46) = MEM8(esi + 0x46) | 0x80;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    MEM32(esi + 0x88) = eax;
    if (CMP_NE(MEM32(ebp + 0xC), edi)) goto loc_0054ECAC; /* jne: not equal / not zero */

loc_0054ECA5: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054ECAA: ;
    edi = eax;

loc_0054ECAC: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054ECBB; /* je: equal / zero */

loc_0054ECB2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054ECBB: ;
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054ECC2
 * Original: 0x0054ECC2 - 0x0054ED04 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054ECC2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054ECC2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054ECD3: ;
    eax = MEM32(ebp + 8);
    MEM8(esi + 0x47) = MEM8(esi + 0x47) | 2;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    MEM32(esi + 0x90) = eax;
    if (CMP_NE(MEM32(ebp + 0xC), edi)) goto loc_0054ECEE; /* jne: not equal / not zero */

loc_0054ECE7: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054ECEC: ;
    edi = eax;

loc_0054ECEE: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054ECFD; /* je: equal / zero */

loc_0054ECF4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054ECFD: ;
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054ED04
 * Original: 0x0054ED04 - 0x0054ED46 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054ED04(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054ED04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054ED15: ;
    eax = MEM32(ebp + 8);
    MEM8(esi + 0x47) = MEM8(esi + 0x47) | 1;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    MEM32(esi + 0x8C) = eax;
    if (CMP_NE(MEM32(ebp + 0xC), edi)) goto loc_0054ED30; /* jne: not equal / not zero */

loc_0054ED29: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054ED2E: ;
    edi = eax;

loc_0054ED30: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054ED3F; /* je: equal / zero */

loc_0054ED36: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054ED3F: ;
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054ED46
 * Original: 0x0054ED46 - 0x0054EDBC (118 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054ED46(void)
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

loc_0054ED46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054ED58: ;
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_BE(edi & edi, 0)) goto loc_0054ED83; /* jbe: below or equal (unsigned <=) */

loc_0054ED60: ;
    ecx = esi + 0x120;

loc_0054ED66: ;
    edx = MEM32(ebp + 8);
    edx = ZX8(MEM8(eax + edx));
    MEM32(ebp + -8) = edx;
    eax++;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + 4;
    if (CMP_B(eax, edi)) goto loc_0054ED66; /* jb: below (unsigned <) */

loc_0054ED83: ;
    MEM8(esi + 0x47) = MEM8(esi + 0x47) | 1;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    eax = esi + 0x120;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = edi;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_0054EDA6; /* jne: not equal / not zero */

loc_0054ED9F: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054EDA4: ;
    ebx = eax;

loc_0054EDA6: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054EDB5; /* je: equal / zero */

loc_0054EDAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054EDB5: ;
    eax = ebx;
    POP32(esp, ebx);
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
 * sub_0054EDBC
 * Original: 0x0054EDBC - 0x0054EE0C (80 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EDBC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054EDBC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    MEM32(0x5559E8) = MEM32(0x5559E8) | 4;
    MEM32(0x555A08) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(0x555A0C) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(0x555A10) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(0x555A14) = ecx;
    ecx = MEM32(ebp + 0x18);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x20), eax - flags set for next jcc */
    MEM32(0x555A18) = ecx;
    ecx = MEM32(ebp + 0x1C);
    MEM32(0x555A1C) = ecx;
    if (CMP_NE(MEM32(ebp + 0x20), eax)) goto loc_0054EE08; /* jne: not equal / not zero */

loc_0054EE03: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054EE08: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0054EE0C
 * Original: 0x0054EE0C - 0x0054EEA7 (155 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EE0C(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054EE0C: ;
    ecx = MEM32(eax);
    MEM32(0x5557A4) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(0x5557A8) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(0x5557AC) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(0x5557B0) = ecx;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, MEM32(esp + 4));
    MEM32(0x5557B4) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(0x5557B8) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(0x5557BC) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(0x5557C0) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(0x5557C4) = ecx;
    ecx = MEM32(eax + 0x24);
    MEM32(0x5557C8) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(0x5557CC) = ecx;
    ecx = MEM32(eax + 0x2C);
    MEM16(0x5557A0) = MEM16(0x5557A0) | 0xFFF;
    MEM32(0x5557D0) = ecx;
    ecx = MEM32(0x555774);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C67DD(); /* call 0x004C67DD */

loc_0054EE94: ;
    if (TEST_S(eax, eax)) goto loc_0054EEA4; /* jl: less (signed <) */

loc_0054EE98: ;
    if (CMP_NE(MEM32(esp + 4), 0)) goto loc_0054EEA4; /* jne: not equal / not zero */

loc_0054EE9F: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_0054EEA4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054EEA7
 * Original: 0x0054EEA7 - 0x0054EED7 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054EEA7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054EEA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(0x4E1660);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    ecx = eax;
    ecx = ecx & 0xFFFF;
    if (CMP_EQ(ecx, 2)) goto loc_0054EECE; /* je: equal / zero */

loc_0054EEC7: ;
    if (TEST_Z(eax, 0x10000)) { sub_0054EED7(); return; } /* je: equal / zero */

loc_0054EECE: ;
    if (TEST_S(eax, eax)) { sub_0054EED7(); return; } /* js: sign (negative) */

loc_0054EED2: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0054EED9(); return; /* tail jmp 0x0054EED9 */

}

/**
 * sub_0054F082
 * Original: 0x0054F082 - 0x0054F0F4 (114 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F082(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054F082: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054F094: ;
    edi = 0; /* xor self */
    if (TEST_Z(MEM8(esi + 0x17), 0x20)) { sub_0054F0F4(); return; } /* je: equal / zero */

loc_0054F09C: ;
    eax = esi + 0x44;
    MEM32(eax) = MEM32(eax) & 0x10000;
    PUSH32(esp, eax);
    edi = 0x5559E8;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C606D(); /* call 0x004C606D */

loc_0054F0B1: ;
    ebx = esi + 0xE8;
    PUSH32(esp, ebx);
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5557A0);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C523F(); /* call 0x004C523F */

loc_0054F0CE: ;
    MEM32(ebx) = MEM32(ebx) & 0xDC;
    eax = MEM32(ebx);
    if (TEST_Z(LO8(eax), 0x10)) goto loc_0054F0EE; /* je: equal / zero */

loc_0054F0DA: ;
    ecx = esi + 0x15C;
    eax = MEM32(ecx);
    goto loc_0054F0EA;

loc_0054F0E4: ;
    MEM32(eax + -108) = MEM32(eax + -108) | 0x10;
    eax = MEM32(eax);

loc_0054F0EA: ;
    if (CMP_NE(eax, ecx)) goto loc_0054F0E4; /* jne: not equal / not zero */

loc_0054F0EE: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    g_seh_ebp = ebp; sub_0054F152(); return; /* tail jmp 0x0054F152 */

}

/**
 * sub_0054F184
 * Original: 0x0054F184 - 0x0054F279 (245 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F184(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0054F184: ;
    fp_push(0.0); /* fldz */
    edx = MEM32(eax + 0x14);
    MEMF(eax + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, esi);
    fp_push(0.0); /* fldz */
    ecx = 0x168;
    MEMF(eax + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    fp_push(0.0); /* fldz */
    edi = 0; /* xor self */
    MEM32(eax + 0x64) = ecx;
    MEMF(eax + 0x54) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x68) = ecx;
    fp_push(0.0); /* fldz */
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(0x555788), edi - flags set for next jcc */
    MEMF(eax + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    esi = eax + 0x9C;
    fp_push(0.0); /* fldz */
    SET_LO8(ecx, (CMP_NE(MEM32(0x555788), edi)) ? 1 : 0); /* setne */
    (void)0; /* test edx, 0x20000000 - flags set for next jcc */
    MEMF(eax + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x44) = 0xFFFF0000u;
    fp_push(0.0); /* fldz */
    MEM32(eax + 0x48) = edi;
    MEM32(eax + 0x78) = edi;
    MEMF(eax + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x80) = 0x4E6E6B28;
    fp_push(0.0); /* fldz */
    MEM32(eax + 0x84) = edi;
    MEM32(eax + 0x94) = edi;
    MEMF(eax + 0x6C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x98) = edi;
    fp_push(0.0); /* fldz */
    MEM32(esi) = ecx;
    MEMF(eax + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x74) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x7C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(eax + 0x90) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(edx, 0x20000000)) goto loc_0054F22E; /* je: equal / zero */

loc_0054F224: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_0054F22E; /* je: equal / zero */

loc_0054F229: ;
    ecx = ecx | 2;
    MEM32(esi) = ecx;

loc_0054F22E: ;
    fp_push(0.0); /* fldz */
    MEM32(eax + 0xC4) = edi;
    MEMF(eax + 0xD4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0xC8) = edi;
    MEM32(eax + 0xCC) = edi;
    fp_push(0.0); /* fldz */
    MEM32(eax + 0xD0) = edi;
    MEMF(eax + 0xDC) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0xD8) = edi;
    MEM32(eax + 0xE0) = edi;
    POP32(esp, edi);
    MEM32(eax + 0xC0) = 0x7F0000;
    MEM32(eax + 0xE4) = 0x3E800000;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0054F279
 * Original: 0x0054F279 - 0x0054F29B (34 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F279(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054F279: ;
    (void)0; /* cmp MEM32(0x555788), 0 - flags set for next jcc */
    MEM32(eax + 0x44) = 0xFFFF0000u;
    MEM32(eax + 0xC0) = 0x7F0000;
    if (CMP_EQ(MEM32(0x555788), 0)) { sub_0054F29B(); return; } /* je: equal / zero */

loc_0054F293: ;
    MEM32(eax + 0x9C) = MEM32(eax + 0x9C) | 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0054F2A3
 * Original: 0x0054F2A3 - 0x0054F2FE (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F2A3(void)
{

loc_0054F2A3: ;
    ecx = MEM32(eax + 0x150);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x4C;
    edi = eax + 0x4C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM8(eax + 0x46) = MEM8(eax + 0x46) | 1;
    edx = MEM32(eax + 0x44);
    esi = ecx + 0x58;
    edi = eax + 0x58;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edx = edx | 0x20000;
    MEM32(eax + 0x44) = edx;
    esi = ecx + 0x6C;
    edi = eax + 0x6C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edx = edx | 0x80000;
    MEM32(eax + 0x44) = edx;
    ecx = MEM32(ecx + 0x84);
    MEM32(eax + 0xE8) = MEM32(eax + 0xE8) | 0x10;
    edx = edx | 0x400000;
    POP32(esp, edi);
    MEM32(eax + 0x84) = ecx;
    MEM32(eax + 0x44) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054F2FE
 * Original: 0x0054F2FE - 0x0054F36A (108 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F2FE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054F2FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0054F565(); /* call 0x0054F565 */

loc_0054F309: ;
    ebp = MEM32(0x561004);
    ebx = edi + 0x7C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_0054F315: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(edi + 0x5C) = 4;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054F323: ;
    esi = edi + 0x9C;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0054F343; /* je: equal / zero */

loc_0054F32F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_0054F335: ;
    eax = edi;
    PUSH32(esp, 0); sub_0054F3CF(); /* call 0x0054F3CF */

loc_0054F33C: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0054F343: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_0054F346: ;
    eax = edi + 0x64;
    if (CMP_EQ(MEM32(eax), eax)) goto loc_0054F354; /* je: equal / zero */

loc_0054F34D: ;
    eax = edi;
    PUSH32(esp, 0); sub_0054D8EA(); /* call 0x0054D8EA */

loc_0054F354: ;
    eax = MEM32(edi + 0x1C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0054F362; /* je: equal / zero */

loc_0054F35C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0054F362: ;
    ebp = edi + 0x6C;
    esi = MEM32(ebp);
    g_seh_ebp = ebp; sub_0054F379(); return; /* tail jmp 0x0054F379 */

}

/**
 * sub_0054F39B
 * Original: 0x0054F39B - 0x0054F3AE (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F39B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054F39B: ;
    MEM32(eax) = MEM32(eax) - 1;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if ((MEM32(eax) != 0)) goto loc_0054F3AA; /* jne: not equal / not zero */

loc_0054F3A2: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054F3AE(); /* call 0x0054F3AE */

loc_0054F3AA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054F3AE
 * Original: 0x0054F3AE - 0x0054F3CF (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F3AE(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054F3AE: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_0054F2FE(); /* call 0x0054F2FE */

loc_0054F3B7: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0054F3C8; /* je: equal / zero */

loc_0054F3BE: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00553B1E(); /* call 0x00553B1E */

loc_0054F3C7: ;
    POP32(esp, ecx);

loc_0054F3C8: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054F3CF
 * Original: 0x0054F3CF - 0x0054F3F2 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F3CF(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054F3CF: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi + 0x98;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0054F3F0; /* je: equal / zero */

loc_0054F3DE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E367(); /* call 0x0042E367 */

loc_0054F3E6: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0054F3ED: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_0054F3F0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054F3F2
 * Original: 0x0054F3F2 - 0x0054F461 (111 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F3F2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054F3F2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0054F565(); /* call 0x0054F565 */

loc_0054F3FE: ;
    eax = MEM32(edi + 0x1C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0054F410; /* je: equal / zero */

loc_0054F406: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_0054F40C: ;
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) | 0xFFFFFFFFu;

loc_0054F410: ;
    esi = edi + 0x74;
    (void)0; /* cmp MEM32(esi), esi - flags set for next jcc */
    MEM8(edi + 0x20) = 0;
    if (CMP_NE(MEM32(esi), esi)) goto loc_0054F422; /* jne: not equal / not zero */

loc_0054F41B: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0054F46D(); /* call 0x0054F46D */

loc_0054F422: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) { sub_0054F461(); return; } /* jne: not equal / not zero */

loc_0054F428: ;
    ecx = MEM32(edi + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi;
    if (TEST_Z(ecx, ecx)) goto loc_0054F434; /* je: equal / zero */

loc_0054F431: ;
    eax = ecx + 8;

loc_0054F434: ;
    if (CMP_EQ(MEM32(ebp + 8), 1)) goto loc_0054F449; /* je: equal / zero */

loc_0054F43A: ;
    if (TEST_Z(ecx, ecx)) goto loc_0054F449; /* je: equal / zero */

loc_0054F43E: ;
    if (CMP_NE(MEM32(ebp + 8), 2)) goto loc_0054F44B; /* jne: not equal / not zero */

loc_0054F444: ;
    eax = MEM32(eax + 4);
    goto loc_0054F44B;

loc_0054F449: ;
    eax = MEM32(eax);

loc_0054F44B: ;
    if (CMP_NE(eax, esi)) goto loc_0054F45C; /* jne: not equal / not zero */

loc_0054F44F: ;
    if (CMP_EQ(MEM32(ebp + 8), 2)) goto loc_0054F459; /* je: equal / zero */

loc_0054F455: ;
    eax = MEM32(esi);
    goto loc_0054F45C;

loc_0054F459: ;
    eax = MEM32(edi + 0x78);

loc_0054F45C: ;
    eax = eax + 0xFFFFFFF8u;
    g_seh_ebp = ebp; sub_0054F464(); return; /* tail jmp 0x0054F464 */

}

/**
 * sub_0054F46D
 * Original: 0x0054F46D - 0x0054F528 (187 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F46D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054F46D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    (void)0; /* test MEM8(ecx + 0x58), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(ecx + 0x58), 1)) { sub_0054F528(); return; } /* je: equal / zero */

loc_0054F480: ;
    eax = ebp + -12;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = eax;
    eax = ecx + 0x6C;
    edx = MEM32(eax);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    esi = ecx + 0x74;
    MEM32(ecx + 0x78) = esi;
    MEM32(esi) = esi;
    if (CMP_EQ(edx, eax)) goto loc_0054F4C4; /* je: equal / zero */

loc_0054F49A: ;
    edi = edx;
    edx = MEM32(edx);
    eax = edi + 8;
    MEM32(edi + 0xC) = eax;
    MEM32(eax) = eax;
    ebx = ebp + -12;
    MEM32(eax) = ebx;
    ebx = MEM32(ebp + -8);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(ebp + -8);
    MEM32(ebx) = eax;
    ebx = MEM32(eax);
    MEM32(ebx + 4) = eax;
    eax = ecx + 0x6C;
    if (CMP_NE(edx, eax)) goto loc_0054F49A; /* jne: not equal / not zero */

loc_0054F4C2: ;
    goto loc_0054F4C7;

loc_0054F4C4: ;
    edi = MEM32(ebp + -4);

loc_0054F4C7: ;
    ebx = MEM32(ecx + 0x60);
    goto loc_0054F51E;

loc_0054F4CC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0054C8DE(); /* call 0x0054C8DE */

loc_0054F4D2: ;
    ecx = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;
    eax = ebp + -12;
    edx = 0; /* xor self */
    if (CMP_EQ(ecx, eax)) goto loc_0054F4F3; /* je: equal / zero */

loc_0054F4E1: ;
    (void)0; /* cmp edx, MEM32(ebp + -4) - flags set for next jcc */
    edi = ecx + -8;
    ecx = MEM32(ecx);
    if (CMP_EQ(edx, MEM32(ebp + -4))) goto loc_0054F4F3; /* je: equal / zero */

loc_0054F4EB: ;
    eax = ebp + -12;
    edx++;
    if (CMP_NE(ecx, eax)) goto loc_0054F4E1; /* jne: not equal / not zero */

loc_0054F4F3: ;
    if (CMP_EQ(edx, ebx)) goto loc_0054F51E; /* je: equal / zero */

loc_0054F4F7: ;
    eax = edi + 8;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax) = esi;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    ebx--;
    MEM32(ecx + 4) = eax;

loc_0054F51E: ;
    eax = ebp + -12;
    if (CMP_NE(MEM32(ebp + -12), eax)) goto loc_0054F4CC; /* jne: not equal / not zero */

loc_0054F526: ;
    g_seh_ebp = ebp; sub_0054F54E(); return; /* tail jmp 0x0054F54E */

}

/**
 * sub_0054F553
 * Original: 0x0054F553 - 0x0054F565 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F553(void)
{

loc_0054F553: ;
    PUSH32(esp, MEM32(eax + 0x9C));
    MEM8(eax + 0x20) = 0;
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_0054F562: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0054F565
 * Original: 0x0054F565 - 0x0054F5AB (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F565(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054F565: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = edi + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054F576: ;
    PUSH32(esp, 3);
    POP32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0054F5AB(); /* call 0x0054F5AB */

loc_0054F580: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0054F598; /* je: equal / zero */

loc_0054F585: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(edi + 0x10));
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0054D6F9(); /* call 0x0054D6F9 */

loc_0054F594: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0;

loc_0054F598: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054F5A7; /* je: equal / zero */

loc_0054F59E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054F5A7: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0054F5AB
 * Original: 0x0054F5AB - 0x0054F5CA (31 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F5AB(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054F5AB: ;
    eax = 0; /* xor self */
    eax++;
    edx = esi;
    edx--;
    edx--;
    if ((edx == 0)) goto loc_0054F5C0; /* je: equal / zero */

loc_0054F5B4: ;
    edx--;
    if ((edx != 0)) goto loc_0054F5C6; /* jne: not equal / not zero */

loc_0054F5B7: ;
    if (CMP_EQ(MEM32(ecx + 0x5C), 2)) goto loc_0054F5C6; /* je: equal / zero */

loc_0054F5BD: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0054F5C0: ;
    if (CMP_EQ(MEM32(ecx + 0x5C), 2)) goto loc_0054F5BD; /* je: equal / zero */

loc_0054F5C6: ;
    MEM32(ecx + 0x5C) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_0054F5CA
 * Original: 0x0054F5CA - 0x0054F5F6 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F5CA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054F5CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054F5DD: ;
    if (CMP_NE(MEM32(esi + 0x5C), 2)) { sub_0054F5F6(); return; } /* jne: not equal / not zero */

loc_0054F5E3: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054F5F2; /* je: equal / zero */

loc_0054F5E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054F5F2: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0054F627(); return; /* tail jmp 0x0054F627 */

}

/**
 * sub_0054F62C
 * Original: 0x0054F62C - 0x0054F65D (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F62C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054F62C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = edi + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054F63D: ;
    PUSH32(esp, 3);
    POP32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0054F5AB(); /* call 0x0054F5AB */

loc_0054F647: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054F65B; /* je: equal / zero */

loc_0054F652: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054F65B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0054F65D
 * Original: 0x0054F65D - 0x0054F6BA (93 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F65D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054F65D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi + 0x7C;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0054DD93(); /* call 0x0054DD93 */

loc_0054F671: ;
    (void)0; /* test MEM8(esi + 0x58), 2 - flags set for next jcc */
    edi = MEM32(esi + 0x5C);
    if (TEST_NZ(MEM8(esi + 0x58), 2)) goto loc_0054F68C; /* jne: not equal / not zero */

loc_0054F67A: ;
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0054F68C; /* je: equal / zero */

loc_0054F681: ;
    ecx = esi + 0x74;
    if (CMP_NE(MEM32(eax + 8), ecx)) goto loc_0054F68C; /* jne: not equal / not zero */

loc_0054F689: ;
    PUSH32(esp, 3);
    POP32(esp, edi);

loc_0054F68C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_0054F3F2(); /* call 0x0054F3F2 */

loc_0054F697: ;
    if (CMP_NE(edi, 2)) goto loc_0054F6A5; /* jne: not equal / not zero */

loc_0054F69C: ;
    eax = esi;
    PUSH32(esp, 0); sub_0054F553(); /* call 0x0054F553 */

loc_0054F6A3: ;
    ebx = eax;

loc_0054F6A5: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054F6B4; /* je: equal / zero */

loc_0054F6AB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054F6B4: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0054F6BA
 * Original: 0x0054F6BA - 0x0054F6E1 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F6BA(void)
{

loc_0054F6BA: ;
    MEM16(eax + 0x18) = MEM16(eax + 0x18) | 0xFFFF;
    MEM16(eax + 0x3A) = MEM16(eax + 0x3A) | 0xFFFF;
    MEM16(eax + 0x3C) = MEM16(eax + 0x3C) | 0xFFFF;
    ecx = eax + 8;
    MEM32(eax + 0x34) = 1;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 0xC) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0054F6E1
 * Original: 0x0054F6E1 - 0x0054F755 (116 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F6E1(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054F6E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054F6EA: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 4);
    edi = ZX8(LO8(eax));
    eax = ZX16(MEM16(esi + 0x18));
    eax = eax + eax * 4;
    if (TEST_Z(MEM8(ecx + eax * 4 + 0x38), 8)) goto loc_0054F70E; /* je: equal / zero */

loc_0054F701: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = esi;
    PUSH32(esp, 0); sub_0055014C(); /* call 0x0055014C */

loc_0054F70D: ;
    POP32(esp, ebx);

loc_0054F70E: ;
    eax = esi + 8;
    if (CMP_EQ(MEM32(eax), eax)) goto loc_0054F71C; /* je: equal / zero */

loc_0054F715: ;
    eax = esi;
    PUSH32(esp, 0); sub_0054C8C6(); /* call 0x0054C8C6 */

loc_0054F71C: ;
    if (CMP_EQ(MEM32(esi), esi)) goto loc_0054F725; /* je: equal / zero */

loc_0054F720: ;
    PUSH32(esp, 0); sub_0054D902(); /* call 0x0054D902 */

loc_0054F725: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x555774));
    PUSH32(esp, 0); sub_0054BDA9(); /* call 0x0054BDA9 */

loc_0054F731: ;
    esi = MEM32(esi + 0x24);
    if (TEST_Z(esi, esi)) goto loc_0054F743; /* je: equal / zero */

loc_0054F738: ;
    PUSH32(esp, 0x64848011);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0054F743: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(edi, edi)) goto loc_0054F754; /* je: equal / zero */

loc_0054F749: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054F754: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0054F755
 * Original: 0x0054F755 - 0x0054F7B3 (94 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F755(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054F755: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x555758;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_0054F766: ;
    MEM32(ebx + 0x34) = MEM32(ebx + 0x34) - 1;
    eax = MEM32(ebx + 0x34);
    if (CMP_NE(eax, 1)) goto loc_0054F797; /* jne: not equal / not zero */

loc_0054F771: ;
    eax = ZX16(MEM16(ebx + 0x18));
    ecx = MEM32(ebx + 0x14);
    ecx = MEM32(ecx + 4);
    eax = eax + eax * 4;
    if (TEST_NZ(MEM8(ecx + eax * 4 + 0x38), 8)) goto loc_0054F78E; /* jne: not equal / not zero */

loc_0054F785: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0055014C(); /* call 0x0055014C */

loc_0054F78E: ;
    if (TEST_Z(MEM8(ebx + 0x38), 0x80)) goto loc_0054F797; /* je: equal / zero */

loc_0054F794: ;
    MEM32(ebx + 0x34) = MEM32(ebx + 0x34) - 1;

loc_0054F797: ;
    esi = MEM32(ebx + 0x34);
    if (TEST_NZ(esi, esi)) goto loc_0054F7A6; /* jne: not equal / not zero */

loc_0054F79E: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0054F7B3(); /* call 0x0054F7B3 */

loc_0054F7A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054F7AD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0054F7B3
 * Original: 0x0054F7B3 - 0x0054F7D4 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F7B3(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054F7B3: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_0054F6E1(); /* call 0x0054F6E1 */

loc_0054F7BC: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0054F7CD; /* je: equal / zero */

loc_0054F7C3: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00553B1E(); /* call 0x00553B1E */

loc_0054F7CC: ;
    POP32(esp, ecx);

loc_0054F7CD: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054F7D4
 * Original: 0x0054F7D4 - 0x0054F9AE (474 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F7D4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054F7D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    esi = ecx;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054F7E5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    eax = ZX8(LO8(eax));
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    MEM32(edi + 0x1C) = eax;
    eax = ZX16(LO16(ebx));
    MEM32(edi + 0x14) = esi;
    MEM16(edi + 0x18) = LO16(ebx);
    ecx = MEM32(esi + 4);
    eax = eax + eax * 4;
    eax = eax << 2;
    if (TEST_Z(MEM8(ecx + eax + 0x38), 8)) goto loc_0054F93B; /* je: equal / zero */

loc_0054F817: ;
    eax = ecx + eax + 0x38;
    ecx = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    ecx = ecx >> 0x1B;
    edx++;
    edx = edx << LO8(ecx);
    MEM32(edi + 0x10) = edx;
    eax = MEM32(eax + 8);
    eax = eax + MEM32(esi + 4);
    MEM16(edi + 0x3A) = MEM16(edi + 0x3A) | 0xFFFF;
    MEM32(ebp + 8) = eax;
    ecx = 0; /* xor self */
    esi = edx;

loc_0054F83C: ;
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    if (TEST_NZ(esi, edx)) goto loc_0054F850; /* jne: not equal / not zero */

loc_0054F845: ;
    ecx++;
    if (CMP_B(ecx, 0x20)) goto loc_0054F83C; /* jb: below (unsigned <) */

loc_0054F84B: ;
    ecx = MEM32(ebp + -8);
    goto loc_0054F85E;

loc_0054F850: ;
    edx = MEM32(0x555774);
    ecx = ZX16(MEM16(edx + ecx * 2 + 0x94));

loc_0054F85E: ;
    esi = eax;
    PUSH32(esp, 0);
    ebx = ecx;
    eax = edi;
    PUSH32(esp, 0); sub_0055086E(); /* call 0x0055086E */

loc_0054F86B: ;
    esi = eax;
    if (CMP_EQ(LO16(esi), 0xFFFF)) goto loc_0054F92D; /* je: equal / zero */

loc_0054F878: ;
    edx = MEM32(ebp + 8);
    eax = ZX16(LO16(esi));
    ebx = edx + eax * 8 + 4;
    eax = edi;
    MEM32(ebp + 8) = ebx;
    PUSH32(esp, 0); sub_0055096F(); /* call 0x0055096F */

loc_0054F88C: ;
    edx = ZX16(MEM16(edi + 0x18));
    ecx = MEM32(edi + 0x14);
    MEM16(edi + 0x3C) = LO16(eax);
    MEM16(edi + 0x3A) = LO16(esi);
    ecx = MEM32(ecx + 4);
    eax = ZX16(LO16(eax));
    edx = edx + edx * 4;
    edx = MEM32(ecx + edx * 4 + 0x48);
    eax = eax + eax * 2;
    edx = edx & 0x7FFFFFF;
    eax = edx + eax * 8;
    eax = eax + MEM32(ecx + 0x24);
    eax = eax + ecx + 4;
    if (TEST_Z(MEM8(eax), 0x20)) goto loc_0054F8DC; /* je: equal / zero */

loc_0054F8C0: ;
    eax = ZX16(MEM16(eax + 2));
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ebx = edi;
    PUSH32(esp, 0); sub_00550A31(); /* call 0x00550A31 */

loc_0054F8CE: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_0054F994; /* jl: less (signed <) */

loc_0054F8D9: ;
    ebx = MEM32(ebp + 8);

loc_0054F8DC: ;
    if (TEST_Z(ebx, ebx)) goto loc_0054F994; /* je: equal / zero */

loc_0054F8E4: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    ebx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00550A31(); /* call 0x00550A31 */

loc_0054F8F3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0054F994; /* jge: greater or equal (signed >=) */

loc_0054F8FE: ;
    eax = MEM32(edi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0054F994; /* je: equal / zero */

loc_0054F909: ;
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0054F918; /* je: equal / zero */

loc_0054F913: ;
    PUSH32(esp, 0); sub_0054DFC5(); /* call 0x0054DFC5 */

loc_0054F918: ;
    eax = MEM32(edi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0054F927; /* je: equal / zero */

loc_0054F91F: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054F9AE(); /* call 0x0054F9AE */

loc_0054F927: ;
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) & 0;
    goto loc_0054F994;

loc_0054F92D: ;
    MEM16(edi + 0x3A) = MEM16(edi + 0x3A) | 0xFFFF;
    MEM16(edi + 0x3C) = MEM16(edi + 0x3C) | 0xFFFF;
    goto loc_0054F994;

loc_0054F93B: ;
    PUSH32(esp, 0x6484A002);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054F947: ;
    if (TEST_Z(eax, eax)) goto loc_0054F954; /* je: equal / zero */

loc_0054F94B: ;
    PUSH32(esp, 0); sub_00550D57(); /* call 0x00550D57 */

loc_0054F950: ;
    ecx = eax;
    goto loc_0054F956;

loc_0054F954: ;
    ecx = 0; /* xor self */

loc_0054F956: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    MEM32(edi + 0x28) = ecx;
    MEM32(ebp + -4) = eax;
    if (((int32_t)eax < 0)) goto loc_0054F994; /* js: sign (negative) */

loc_0054F96E: ;
    PUSH32(esp, 0xFFFF);
    eax = edi;
    PUSH32(esp, 0); sub_00550DE6(); /* call 0x00550DE6 */

loc_0054F97A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0054F994; /* jge: greater or equal (signed >=) */

loc_0054F981: ;
    eax = MEM32(edi + 0x28);
    if (TEST_Z(eax, eax)) goto loc_0054F990; /* je: equal / zero */

loc_0054F988: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054F9AE(); /* call 0x0054F9AE */

loc_0054F990: ;
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0;

loc_0054F994: ;
    (void)0; /* cmp MEM32(ebp + -12), 0 - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(ebp + -12), 0)) goto loc_0054F9A7; /* je: equal / zero */

loc_0054F99C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054F9A7: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054F9AE
 * Original: 0x0054F9AE - 0x0054F9CF (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F9AE(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054F9AE: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_00550D71(); /* call 0x00550D71 */

loc_0054F9B7: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0054F9C8; /* je: equal / zero */

loc_0054F9BE: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00553B1E(); /* call 0x00553B1E */

loc_0054F9C7: ;
    POP32(esp, ecx);

loc_0054F9C8: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054F9CF
 * Original: 0x0054F9CF - 0x0054FAB1 (226 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054F9CF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054F9CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054F9DA: ;
    eax = ZX8(LO8(eax));
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    (void)0; /* test MEM8(ebp + 8), 1 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(MEM8(ebp + 8), 1)) goto loc_0054FA02; /* je: equal / zero */

loc_0054F9EA: ;
    eax = ZX16(MEM16(esi + 0x18));
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 4);
    eax = eax + eax * 4;
    if (TEST_NZ(MEM8(ecx + eax * 4 + 0x38), 8)) goto loc_0054FA02; /* jne: not equal / not zero */

loc_0054F9FE: ;
    MEM8(esi + 0x38) = MEM8(esi + 0x38) | 0x80;

loc_0054FA02: ;
    eax = ZX16(MEM16(esi + 0x18));
    edx = MEM32(esi + 0x14);
    ecx = eax + eax * 4;
    eax = MEM32(edx + 4);
    ecx = ecx << 2;
    if (TEST_Z(MEM8(eax + ecx + 0x38), 8)) goto loc_0054FA68; /* je: equal / zero */

loc_0054FA19: ;
    if (TEST_Z(MEM8(ebp + 9), 1)) goto loc_0054FA37; /* je: equal / zero */

loc_0054FA1F: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054FA30; /* je: equal / zero */

loc_0054FA25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054FA30: ;
    eax = 0x80070057u;
    goto loc_0054FAAB;

loc_0054FA37: ;
    SET_LO16(eax, MEM16(esi + 0x3C));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0054FA79; /* je: equal / zero */

loc_0054FA41: ;
    SET_LO16(edi, MEM16(esi + 0x3A));
    if (CMP_EQ(LO16(edi), 0xFFFF)) goto loc_0054FA5D; /* je: equal / zero */

loc_0054FA4C: ;
    edx = MEM32(edx + 4);
    ecx = MEM32(edx + ecx + 0x40);
    edi = ZX16(LO16(edi));
    ecx = ecx + edi * 8;
    ebx = ecx + edx + 4;

loc_0054FA5D: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00550488(); /* call 0x00550488 */

loc_0054FA66: ;
    goto loc_0054FA73;

loc_0054FA68: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0); sub_00551012(); /* call 0x00551012 */

loc_0054FA73: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0054FA98; /* jl: less (signed <) */

loc_0054FA79: ;
    ecx = MEM32(0x555774);
    eax = esi + 8;
    ecx = ecx + 0x64;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 1;

loc_0054FA98: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0054FAA9; /* je: equal / zero */

loc_0054FA9E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054FAA9: ;
    eax = edi;

loc_0054FAAB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0054FAB1
 * Original: 0x0054FAB1 - 0x0054FB2D (124 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054FAB1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054FAB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054FAC0: ;
    MEM8(edi + 0x38) = MEM8(edi + 0x38) | 4;
    ebx = MEM32(ebp + 8);
    esi = ZX8(LO8(eax));
    SET_LO16(eax, MEM16(edi + 0x38));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ebx), 1 - flags set for next jcc */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = edx;
    if (TEST_Z(LO8(ebx), 1)) goto loc_0054FAE3; /* je: equal / zero */

loc_0054FADB: ;
    SET_LO16(eax, LO16(eax) | 0x80);
    MEM16(edi + 0x38) = LO16(eax);

loc_0054FAE3: ;
    (void)0; /* cmp MEM32(edi + 0x34), 1 - flags set for next jcc */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    if (CMP_NE(MEM32(edi + 0x34), 1)) { sub_0054FB2D(); return; } /* jne: not equal / not zero */

loc_0054FAEC: ;
    eax = MEM32(edi + 0x28);
    if (CMP_EQ(eax, edx)) goto loc_0054FAF9; /* je: equal / zero */

loc_0054FAF3: ;
    if (CMP_NE(MEM16(eax + 0x30), LO16(ecx))) { sub_0054FB2D(); return; } /* jne: not equal / not zero */

loc_0054FAF9: ;
    eax = MEM32(edi + 0x2C);
    if (CMP_EQ(eax, edx)) goto loc_0054FB06; /* je: equal / zero */

loc_0054FB00: ;
    if (CMP_NE(MEM16(eax + 0x30), LO16(ecx))) { sub_0054FB2D(); return; } /* jne: not equal / not zero */

loc_0054FB06: ;
    eax = MEM32(edi + 0x30);
    if (CMP_EQ(eax, edx)) goto loc_0054FB13; /* je: equal / zero */

loc_0054FB0D: ;
    if (CMP_NE(MEM16(eax + 0x30), LO16(ecx))) { sub_0054FB2D(); return; } /* jne: not equal / not zero */

loc_0054FB13: ;
    eax = edi;
    PUSH32(esp, 0); sub_0054F755(); /* call 0x0054F755 */

loc_0054FB1A: ;
    if (TEST_Z(esi, esi)) goto loc_0054FB29; /* je: equal / zero */

loc_0054FB1E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054FB29: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0054FBA9(); return; /* tail jmp 0x0054FBA9 */

}

/**
 * sub_0054FBB0
 * Original: 0x0054FBB0 - 0x0054FBCD (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054FBB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054FBB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054FBBE: ;
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(MEM32(ebp + 8), 0)) { sub_0054FBCD(); return; } /* je: equal / zero */

loc_0054FBC7: ;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) | 4;
    g_seh_ebp = ebp; sub_0054FBD1(); return; /* tail jmp 0x0054FBD1 */

}

/**
 * sub_0054FC07
 * Original: 0x0054FC07 - 0x0054FD3B (308 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054FC07(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054FC07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054FC14: ;
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    SET_LO16(eax, MEM16(edi + 0x38));
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0054FC84; /* je: equal / zero */

loc_0054FC22: ;
    SET_LO16(eax, LO16(eax) & 0xFFF);
    if (CMP_NE(MEM32(edi + 0x28), 0)) goto loc_0054FC30; /* jne: not equal / not zero */

loc_0054FC2C: ;
    SET_LO16(eax, LO16(eax) | 0xC000);

loc_0054FC30: ;
    edx = MEM32(edi + 0x2C);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM16(edi + 0x38) = LO16(eax);
    if (TEST_Z(edx, edx)) goto loc_0054FC69; /* je: equal / zero */

loc_0054FC3B: ;
    MEM8(edi + 0x39) = MEM8(edi + 0x39) | 0x10;
    ecx = MEM32(edi + 0x30);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO16(eax, MEM16(edi + 0x38));
    if (TEST_Z(ecx, ecx)) goto loc_0054FC59; /* je: equal / zero */

loc_0054FC4A: ;
    esi = 0x400;
    if (TEST_Z(MEM32(edx + 0x38), esi)) goto loc_0054FC84; /* je: equal / zero */

loc_0054FC54: ;
    (void)0; /* test MEM32(ecx + 0x38), esi - flags set for next jcc */
    goto loc_0054FC5D;

loc_0054FC59: ;
    (void)0; /* test MEM8(edx + 0x39), 4 - flags set for next jcc */

loc_0054FC5D: ;
    if (TEST_Z(MEM8(edx + 0x39), 4)) goto loc_0054FC84; /* je: equal / zero */

loc_0054FC5F: ;
    SET_LO16(eax, LO16(eax) | 1);
    MEM16(edi + 0x38) = LO16(eax);
    goto loc_0054FC84;

loc_0054FC69: ;
    eax = MEM32(edi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0054FC7E; /* je: equal / zero */

loc_0054FC70: ;
    if (TEST_Z(MEM8(eax + 0x39), 4)) goto loc_0054FC84; /* je: equal / zero */

loc_0054FC76: ;
    MEM16(edi + 0x38) = MEM16(edi + 0x38) | 0x2001;
    goto loc_0054FC84;

loc_0054FC7E: ;
    MEM16(edi + 0x38) = MEM16(edi + 0x38) | 0x3001;

loc_0054FC84: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 0x38));
    if (TEST_Z(LO8(edx), 1)) goto loc_0054FD20; /* je: equal / zero */

loc_0054FC93: ;
    edx = edx & 0xFFBE;
    eax = edx;
    eax = eax >> 0xC;
    eax = eax & 3;
    (void)0; /* cmp LO16(eax), 1 - flags set for next jcc */
    MEM16(edi + 0x38) = LO16(edx);
    if (CMP_NE(LO16(eax), 1)) goto loc_0054FCB9; /* jne: not equal / not zero */

loc_0054FCAB: ;
    ecx = MEM32(edi + 0x2C);
    if (TEST_Z(ecx, ecx)) goto loc_0054FCB9; /* je: equal / zero */

loc_0054FCB2: ;
    PUSH32(esp, 0); sub_00551192(); /* call 0x00551192 */

loc_0054FCB7: ;
    goto loc_0054FD20;

loc_0054FCB9: ;
    if (CMP_NE(LO16(eax), 2)) goto loc_0054FCC6; /* jne: not equal / not zero */

loc_0054FCBF: ;
    ecx = MEM32(edi + 0x30);
    if (TEST_NZ(ecx, ecx)) goto loc_0054FCB2; /* jne: not equal / not zero */

loc_0054FCC6: ;
    eax = ZX16(LO16(edx));
    eax = eax >> 0xE;
    if (CMP_EQ(eax, 3)) goto loc_0054FD20; /* je: equal / zero */

loc_0054FCD1: ;
    esi = edi + eax * 4 + 0x28;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_0054FD20; /* je: equal / zero */

loc_0054FCDB: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(eax + 4);
    eax = ZX16(MEM16(edi + 0x18));
    eax = eax + eax * 4;
    eax = MEM32(edx + eax * 4 + 0x48);
    eax = eax & 0x7FFFFFF;
    eax = eax + MEM32(edx + 0x24);
    eax = eax + edx;
    SET_LO16(edx, MEM16(edi + 0x3C));
    if (CMP_AE(LO16(edx), MEM16(eax))) goto loc_0054FD19; /* jae: above or equal (unsigned >=) */

loc_0054FCFF: ;
    edx = ZX16(LO16(edx));
    edx = edx + edx * 2;
    if (TEST_Z(MEM8(eax + edx * 8 + 4), 0x10)) goto loc_0054FD19; /* je: equal / zero */

loc_0054FD0C: ;
    MEM32(ecx + 0x38) = MEM32(ecx + 0x38) | 0x40;
    eax = MEM32(esi);
    PUSH32(esp, 0); sub_00551934(); /* call 0x00551934 */

loc_0054FD17: ;
    goto loc_0054FD20;

loc_0054FD19: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_005513DB(); /* call 0x005513DB */

loc_0054FD20: ;
    SET_LO16(eax, MEM16(edi + 0x38));
    esi = 0; /* xor self */
    if (TEST_Z(LO8(eax), 0x10)) { sub_0054FD3B(); return; } /* je: equal / zero */

loc_0054FD2A: ;
    if (CMP_NE(MEM32(edi + 0x2C), esi)) { sub_0054FD3B(); return; } /* jne: not equal / not zero */

loc_0054FD2F: ;
    if (CMP_NE(MEM32(edi + 0x30), esi)) { sub_0054FD3B(); return; } /* jne: not equal / not zero */

loc_0054FD34: ;
    PUSH32(esp, 0); sub_00550B45(); /* call 0x00550B45 */

loc_0054FD39: ;
    g_seh_ebp = ebp; sub_0054FD4E(); return; /* tail jmp 0x0054FD4E */

}

/**
 * sub_0054FD62
 * Original: 0x0054FD62 - 0x0054FD86 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054FD62(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054FD62: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054FD6E: ;
    edi = ZX8(LO8(eax));
    eax = 0; /* xor self */
    ecx = ebx + 0x28;

loc_0054FD76: ;
    if (CMP_NE(MEM32(ecx), 0)) { sub_0054FD86(); return; } /* jne: not equal / not zero */

loc_0054FD7B: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 3)) goto loc_0054FD76; /* jl: less (signed <) */

loc_0054FD84: ;
    g_seh_ebp = ebp; sub_0054FD95(); return; /* tail jmp 0x0054FD95 */

}

/**
 * sub_0054FDB9
 * Original: 0x0054FDB9 - 0x0054FE94 (219 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054FDB9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0054FDB9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054FDCA: ;
    (void)0; /* cmp MEM32(ebp + 0xC), edi - flags set for next jcc */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(MEM32(ebp + 0xC), edi)) goto loc_0054FE3E; /* je: equal / zero */

loc_0054FDD5: ;
    if (CMP_NE(MEM32(ebx + 0x24), edi)) goto loc_0054FDFC; /* jne: not equal / not zero */

loc_0054FDDA: ;
    PUSH32(esp, 0x64848011);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0054FDE6: ;
    MEM32(ebx + 0x24) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    MEM32(ebp + -4) = eax;
    if (((int32_t)eax < 0)) goto loc_0054FE7A; /* js: sign (negative) */

loc_0054FDFC: ;
    esi = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(esi));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0054FE1B; /* je: equal / zero */

loc_0054FE08: ;
    ecx = MEM32(ebx + 0x24);
    eax = ZX16(LO16(eax));
    eax = eax + eax * 2;
    edi = ecx + eax * 8;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    goto loc_0054FE7A;

loc_0054FE1B: ;
    edx = 0; /* xor self */
    eax = 0; /* xor self */

loc_0054FE1F: ;
    edi = MEM32(ebx + 0x24);
    esi = MEM32(ebp + 8);
    edi = edi + eax;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x24);
    MEM16(eax + ecx) = LO16(edx);
    eax = eax + 0x18;
    edx++;
    if (CMP_B(eax, 0x78)) goto loc_0054FE1F; /* jb: below (unsigned <) */

loc_0054FE3C: ;
    goto loc_0054FE7A;

loc_0054FE3E: ;
    esi = MEM32(ebx + 0x24);
    if (CMP_EQ(esi, edi)) goto loc_0054FE7A; /* je: equal / zero */

loc_0054FE45: ;
    eax = MEM32(ebp + 8);
    SET_LO16(edx, MEM16(eax));
    if (CMP_EQ(LO16(edx), 0xFFFF)) goto loc_0054FE64; /* je: equal / zero */

loc_0054FE52: ;
    edx = ZX16(LO16(edx));
    PUSH32(esp, 6);
    edx = edx + edx * 2;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = esi + edx * 8;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    goto loc_0054FE7A;

loc_0054FE64: ;
    edx = 0; /* xor self */

loc_0054FE66: ;
    edi = MEM32(ebx + 0x24);
    edi = edi + edx;
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    edx = edx + 0x18;
    (void)0; /* cmp edx, 0x78 - flags set for next jcc */
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_B(edx, 0x78)) goto loc_0054FE66; /* jb: below (unsigned <) */

loc_0054FE7A: ;
    (void)0; /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_0054FE8D; /* je: equal / zero */

loc_0054FE82: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054FE8D: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054FE94
 * Original: 0x0054FE94 - 0x0054FEBC (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054FE94(void)
{
    int _flags = 0; /* fallback flag var */

loc_0054FE94: ;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054FE99: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x28);
    edx = MEM32(esp + 8);
    eax = ZX8(LO8(eax));
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 0x3C) = edx;
    if (TEST_Z(eax, eax)) goto loc_0054FEB9; /* je: equal / zero */

loc_0054FEAE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054FEB9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0054FEBC
 * Original: 0x0054FEBC - 0x0054FF0C (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054FEBC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054FEBC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054FEC9: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (TEST_Z(esi, esi)) goto loc_0054FEF8; /* je: equal / zero */

loc_0054FED3: ;
    PUSH32(esp, ebx);
    MEM32(edi + 0x1C) = esi;
    ebx = edi + 0x28;
    MEM32(ebp + -4) = 3;

loc_0054FEE1: ;
    esi = MEM32(ebx);
    if (TEST_Z(esi, esi)) goto loc_0054FEEF; /* je: equal / zero */

loc_0054FEE7: ;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, 0); sub_00550F8B(); /* call 0x00550F8B */

loc_0054FEEF: ;
    ebx = ebx + 4;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_0054FEE1; /* jne: not equal / not zero */

loc_0054FEF7: ;
    POP32(esp, ebx);

loc_0054FEF8: ;
    (void)0; /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_0054FF0A; /* je: equal / zero */

loc_0054FEFF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0054FF0A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0054FF0C
 * Original: 0x0054FF0C - 0x0054FF3C (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054FF0C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054FF0C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054FF16: ;
    eax = ZX8(LO8(eax));
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, MEM32(esi + 0x28) - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(edi, MEM32(esi + 0x28))) { sub_0054FF3C(); return; } /* jne: not equal / not zero */

loc_0054FF23: ;
    eax = ZX16(MEM16(esi + 0x18));
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 4);
    eax = eax + eax * 4;
    MEM16(ecx + eax * 4 + 0x3A) = MEM16(ecx + eax * 4 + 0x3A) | 0xFFFF;
    MEM32(esi + 0x28) = ebx;
    g_seh_ebp = ebp; sub_0054FF4E(); return; /* tail jmp 0x0054FF4E */

}

/**
 * sub_0054FF7C
 * Original: 0x0054FF7C - 0x0055010B (399 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054FF7C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0054FF7C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0054FF89: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 4);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    eax = ZX16(MEM16(esi + 0x18));
    eax = eax + eax * 4;
    eax = eax << 2;
    if (TEST_Z(MEM8(eax + edx + 0x38), 8)) goto loc_005500F7; /* je: equal / zero */

loc_0054FFAA: ;
    ecx = edx;
    edx = MEM32(ecx + eax + 0x48);
    eax = ZX16(MEM16(esi + 0x3C));
    PUSH32(esp, ebx);
    ebx = 0x7FFFFFF;
    edx = edx & ebx;
    eax = eax + eax * 2;
    eax = edx + eax * 8;
    eax = eax + MEM32(ecx + 0x24);
    edx = eax + ecx + 4;
    eax = MEM32(esi + 0x30);
    if (CMP_NE(edi, eax)) goto loc_0055004B; /* jne: not equal / not zero */

loc_0054FFD0: ;
    ecx = MEM32(esi + 0x2C);
    edi = 0; /* xor self */
    if (CMP_EQ(ecx, edi)) goto loc_00550036; /* je: equal / zero */

loc_0054FFD9: ;
    if (TEST_Z(MEM8(edx), 0x40)) goto loc_0054FFEC; /* je: equal / zero */

loc_0054FFDE: ;
    MEM32(ecx + 0x38) = MEM32(ecx + 0x38) | 0x40;
    eax = MEM32(esi + 0x2C);

loc_0054FFE5: ;
    PUSH32(esp, 0); sub_00551934(); /* call 0x00551934 */

loc_0054FFEA: ;
    goto loc_00550005;

loc_0054FFEC: ;
    edx = MEM32(ecx + 0x10);
    SET_LO8(edx, MEM8(edx + 9));
    eax = MEM32(eax + 0x10);
    if (CMP_NE(LO8(edx), MEM8(eax + 9))) goto loc_00550005; /* jne: not equal / not zero */

loc_0054FFFA: ;
    if (CMP_EQ(LO8(edx), 0xFF)) goto loc_00550005; /* je: equal / zero */

loc_0054FFFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005513DB(); /* call 0x005513DB */

loc_00550005: ;
    eax = MEM32(esi + 0x28);
    if (CMP_EQ(eax, edi)) goto loc_00550010; /* je: equal / zero */

loc_0055000C: ;
    MEM8(eax + 0x39) = MEM8(eax + 0x39) | 8;

loc_00550010: ;
    eax = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x14);
    MEM32(esi + 0x28) = eax;
    ecx = eax;
    eax = ZX16(MEM16(esi + 0x18));
    MEM32(esi + 0x30) = edi;
    edx = MEM32(edx + 4);
    SET_LO16(ecx, MEM16(ecx + 0x24));
    eax = eax + eax * 4;
    MEM16(edx + eax * 4 + 0x3A) = LO16(ecx);
    goto loc_005500F6;

loc_00550036: ;
    ecx = MEM32(esi + 0x28);
    if (CMP_EQ(ecx, edi)) goto loc_00550005; /* je: equal / zero */

loc_0055003D: ;
    if (TEST_Z(MEM8(edx), 0x10)) goto loc_0054FFFF; /* je: equal / zero */

loc_00550042: ;
    MEM32(ecx + 0x38) = MEM32(ecx + 0x38) | 0x40;
    eax = MEM32(esi + 0x28);
    goto loc_0054FFE5;

loc_0055004B: ;
    if (CMP_NE(edi, MEM32(esi + 0x2C))) goto loc_005500F6; /* jne: not equal / not zero */

loc_00550054: ;
    ecx = MEM32(esi + 0x28);
    if (TEST_Z(ecx, ecx)) goto loc_00550075; /* je: equal / zero */

loc_0055005B: ;
    if (TEST_Z(MEM8(edx), 0x10)) goto loc_0055006E; /* je: equal / zero */

loc_00550060: ;
    MEM32(ecx + 0x38) = MEM32(ecx + 0x38) | 0x40;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0); sub_00551934(); /* call 0x00551934 */

loc_0055006C: ;
    goto loc_00550075;

loc_0055006E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_005513DB(); /* call 0x005513DB */

loc_00550075: ;
    ecx = MEM32(esi + 0x30);
    if (TEST_Z(ecx, ecx)) goto loc_005500F6; /* je: equal / zero */

loc_0055007C: ;
    eax = MEM32(esi + 0x2C);
    edx = MEM32(eax + 0x10);
    SET_LO8(edx, MEM8(edx + 9));
    if (CMP_EQ(LO8(edx), 0xFF)) goto loc_005500F1; /* je: equal / zero */

loc_0055008A: ;
    edi = MEM32(ecx + 0x10);
    if (CMP_NE(LO8(edx), MEM8(edi + 9))) goto loc_005500F1; /* jne: not equal / not zero */

loc_00550092: ;
    PUSH32(esp, 1);
    edx = 0; /* xor self */
    edi = ebp + -4;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00553532(); /* call 0x00553532 */

loc_005500A0: ;
    if (TEST_S(eax, eax)) goto loc_005500F6; /* jl: less (signed <) */

loc_005500A4: ;
    eax = MEM32(ebp + -4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_005500F6; /* je: equal / zero */

loc_005500AC: ;
    edx = ZX16(MEM16(esi + 0x18));
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 4);
    edx = edx + edx * 4;
    edi = MEM32(ecx + edx * 4 + 0x48);
    edx = ZX16(MEM16(esi + 0x3C));
    edi = edi & ebx;
    edx = edx + edx * 2;
    edx = edi + edx * 8;
    edx = edx + MEM32(ecx + 0x24);
    ecx = edx + ecx + 4;
    if (TEST_Z(MEM8(ecx), 0x40)) goto loc_005500E3; /* je: equal / zero */

loc_005500D5: ;
    ecx = ZX16(MEM16(ecx + 6));
    if (CMP_B(eax, ecx)) goto loc_005500E1; /* jb: below (unsigned <) */

loc_005500DD: ;
    eax = eax - ecx;
    goto loc_005500E3;

loc_005500E1: ;
    eax = 0; /* xor self */

loc_005500E3: ;
    edx = 0; /* xor self */
    PUSH32(esp, 2);
    edx++;
    ecx = esi;
    PUSH32(esp, 0); sub_00550914(); /* call 0x00550914 */

loc_005500EF: ;
    goto loc_005500F6;

loc_005500F1: ;
    PUSH32(esp, 0); sub_00551192(); /* call 0x00551192 */

loc_005500F6: ;
    POP32(esp, ebx);

loc_005500F7: ;
    (void)0; /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_00550109; /* je: equal / zero */

loc_005500FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00550109: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055010B
 * Original: 0x0055010B - 0x0055012C (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055010B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055010B: ;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_00550110: ;
    edx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    ecx = esi + 0x28;
    PUSH32(esp, edi);

loc_00550119: ;
    edi = MEM32(esp + 8);
    if (CMP_EQ(edi, MEM32(ecx))) { sub_0055012C(); return; } /* je: equal / zero */

loc_00550121: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 3)) goto loc_00550119; /* jl: less (signed <) */

loc_0055012A: ;
    g_seh_ebp = ebp; sub_00550139(); return; /* tail jmp 0x00550139 */

}

/**
 * sub_0055014C
 * Original: 0x0055014C - 0x00550254 (264 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055014C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055014C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x5C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = ebp + -12;
    MEM32(ebp + -8) = edi;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00550161: ;
    eax = ZX16(MEM16(ebx + 0x18));
    PUSH32(esp, MEM32(ebp + 0xC));
    edx = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_0054D830(); /* call 0x0054D830 */

loc_00550174: ;
    if (CMP_EQ(eax, edi)) goto loc_0055018E; /* je: equal / zero */

loc_00550178: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    esi = eax;
    edi = ebp + -52;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ZX16(MEM16(ebx + 0x18));
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -44) = ecx;
    edi = 0; /* xor self */

loc_0055018E: ;
    ecx = MEM32(ebx + 0x24);
    edx = 0; /* xor self */
    edx++;
    if (CMP_EQ(ecx, edi)) goto loc_005501BA; /* je: equal / zero */

loc_00550198: ;
    esi = MEM32(ebp + 0xC);
    esi = esi + esi * 2;
    esi = ecx + esi * 8;
    if (CMP_EQ(MEM32(esi + 0xC), edi)) goto loc_005501BA; /* je: equal / zero */

loc_005501A6: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -92;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ZX16(MEM16(ebx + 0x18));
    MEM32(ebp + -84) = ecx;
    MEM32(ebp + -4) = edx;
    edi = 0; /* xor self */

loc_005501BA: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx - edi;
    if ((ecx == 0)) goto loc_00550208; /* je: equal / zero */

loc_005501C1: ;
    ecx--;
    if ((ecx == 0)) goto loc_005501FB; /* je: equal / zero */

loc_005501C4: ;
    ecx--;
    if ((ecx == 0)) goto loc_005501ED; /* je: equal / zero */

loc_005501C7: ;
    ecx--;
    if ((ecx == 0)) goto loc_005501DA; /* je: equal / zero */

loc_005501CA: ;
    ecx--;
    if ((ecx != 0)) goto loc_0055021B; /* jne: not equal / not zero */

loc_005501CD: ;
    SET_LO8(ecx, MEM8(ebx + 0x20));
    if (TEST_NZ(LO8(ecx), 2)) goto loc_00550216; /* jne: not equal / not zero */

loc_005501D5: ;
    SET_LO8(ecx, LO8(ecx) | 2);
    goto loc_00550211;

loc_005501DA: ;
    SET_LO8(ecx, MEM8(ebx + 0x21));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_005501E6; /* je: equal / zero */

loc_005501E1: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = edi;

loc_005501E6: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(ebx + 0x21) = LO8(ecx);
    goto loc_0055021B;

loc_005501ED: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 8);
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -68) = ecx;
    goto loc_0055021B;

loc_005501FB: ;
    SET_LO8(ecx, MEM8(ebx + 0x20));
    if (TEST_NZ(LO8(ecx), 4)) goto loc_00550216; /* jne: not equal / not zero */

loc_00550203: ;
    SET_LO8(ecx, LO8(ecx) | 4);
    goto loc_00550211;

loc_00550208: ;
    SET_LO8(ecx, MEM8(ebx + 0x20));
    if (TEST_NZ(LO8(edx), LO8(ecx))) goto loc_00550216; /* jne: not equal / not zero */

loc_0055020F: ;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));

loc_00550211: ;
    MEM8(ebx + 0x20) = LO8(ecx);
    goto loc_0055021B;

loc_00550216: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = edi;

loc_0055021B: ;
    if (CMP_EQ(eax, edi)) goto loc_0055022D; /* je: equal / zero */

loc_0055021F: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = MEM32(0x555774);
    PUSH32(esp, 0); sub_0054C055(); /* call 0x0054C055 */

loc_0055022D: ;
    if (CMP_EQ(MEM32(ebp + -4), edi)) goto loc_00550240; /* je: equal / zero */

loc_00550232: ;
    eax = ebp + -92;
    PUSH32(esp, eax);
    eax = MEM32(0x555774);
    PUSH32(esp, 0); sub_0054C055(); /* call 0x0054C055 */

loc_00550240: ;
    (void)0; /* cmp MEM32(ebp + -8), edi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(MEM32(ebp + -8), edi)) goto loc_00550250; /* je: equal / zero */

loc_00550247: ;
    SET_LO8(ecx, MEM8(ebp + -12));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00550250: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00550254
 * Original: 0x00550254 - 0x0055028F (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550254(void)
{
    int _flags = 0; /* fallback flag var */

loc_00550254: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0055025B: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 3);
    edx = ZX8(LO8(eax));
    ecx = ecx + 0x28;
    POP32(esp, esi);

loc_00550268: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_00550275; /* je: equal / zero */

loc_0055026E: ;
    edi = MEM32(esp + 0x10);
    MEM32(eax + 0x38) = MEM32(eax + 0x38) | edi;

loc_00550275: ;
    ecx = ecx + 4;
    esi--;
    if ((esi != 0)) goto loc_00550268; /* jne: not equal / not zero */

loc_0055027B: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_0055028C; /* je: equal / zero */

loc_00550281: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0055028C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055028F
 * Original: 0x0055028F - 0x005502FF (112 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055028F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055028F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0055029D: ;
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    if (TEST_Z(MEM8(eax + 0x14), 2)) goto loc_005502E6; /* je: equal / zero */

loc_005502AE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & ebx;
    PUSH32(esp, edi);
    edi = esi + 0x28;

loc_005502B5: ;
    if (CMP_GE(MEM32(ebp + -4), 3)) goto loc_005502E5; /* jge: greater or equal (signed >=) */

loc_005502BB: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_005502DB; /* je: equal / zero */

loc_005502C1: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(MEM8(ecx + 0xB), 1)) goto loc_005502DB; /* je: equal / zero */

loc_005502CA: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_005538EF(); /* call 0x005538EF */

loc_005502D2: ;
    esi = MEM32(edi);
    ebx = eax;
    PUSH32(esp, 0); sub_00551661(); /* call 0x00551661 */

loc_005502DB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    edi = edi + 4;
    if (CMP_GE(ebx & ebx, 0)) goto loc_005502B5; /* jge: greater or equal (signed >=) */

loc_005502E5: ;
    POP32(esp, edi);

loc_005502E6: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_005502F7; /* je: equal / zero */

loc_005502EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_005502F7: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005502FF
 * Original: 0x005502FF - 0x0055032C (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005502FF(void)
{
    int _flags = 0; /* fallback flag var */

loc_005502FF: ;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_00550304: ;
    edx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    ecx = esi + 0x28;

loc_0055030C: ;
    if (CMP_NE(MEM32(ecx), 0)) { sub_0055032C(); return; } /* jne: not equal / not zero */

loc_00550311: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 3)) goto loc_0055030C; /* jl: less (signed <) */

loc_0055031A: ;
    if (TEST_Z(edx, edx)) goto loc_00550329; /* je: equal / zero */

loc_0055031E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00550329: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    esp += 4; return; /* ret */

}

/**
 * sub_0055034A
 * Original: 0x0055034A - 0x0055036C (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055034A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055034A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_00550354: ;
    edi = ZX8(LO8(eax));
    eax = 0; /* xor self */
    ecx = esi + 0x28;

loc_0055035C: ;
    if (CMP_NE(MEM32(ecx), 0)) { sub_0055036C(); return; } /* jne: not equal / not zero */

loc_00550361: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 3)) goto loc_0055035C; /* jl: less (signed <) */

loc_0055036A: ;
    g_seh_ebp = ebp; sub_005503A1(); return; /* tail jmp 0x005503A1 */

}

/**
 * sub_005503B5
 * Original: 0x005503B5 - 0x005503D3 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005503B5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005503B5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_005503BB: ;
    edi = ZX8(LO8(eax));
    eax = MEM32(esi + 0x28);
    if (TEST_Z(eax, eax)) { sub_005503D3(); return; } /* je: equal / zero */

loc_005503C5: ;
    ecx = MEM32(0x555774);
    eax = eax + 8;
    ecx = ecx + 0x54;
    g_seh_ebp = ebp; sub_005503FE(); return; /* tail jmp 0x005503FE */

}

/**
 * sub_0055041E
 * Original: 0x0055041E - 0x00550454 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055041E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055041E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_00550425: ;
    edi = ZX8(LO8(eax));
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax + 0x28);
    if (TEST_Z(esi, esi)) goto loc_00550440; /* je: equal / zero */

loc_00550433: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0); sub_0055144B(); /* call 0x0055144B */

loc_00550440: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(edi, edi)) goto loc_00550451; /* je: equal / zero */

loc_00550446: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00550451: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00550454
 * Original: 0x00550454 - 0x00550488 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550454(void)
{
    int _flags = 0; /* fallback flag var */

loc_00550454: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_0055045C: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + 0x38));
    esi = esi << 0xC;
    eax = ZX8(LO8(eax));
    ecx = ecx & 0xFFFF0FFEu;
    ecx = ecx | esi;
    ecx = ecx | 1;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM16(edi + 0x38) = LO16(ecx);
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00550487; /* je: equal / zero */

loc_0055047C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00550487: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00550488
 * Original: 0x00550488 - 0x0055086E (998 bytes, 353 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550488(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00550488: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(esi, LO16(eax));
    PUSH32(esp, 0); sub_0054AFA0(); /* call 0x0054AFA0 */

loc_00550499: ;
    edi = MEM32(ebp + 8);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -36) = eax;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax + 4);
    eax = ZX16(MEM16(edi + 0x18));
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 4 + 0x48);
    eax = eax & 0x7FFFFFF;
    eax = eax + MEM32(ecx + 0x24);
    edx = 0; /* xor self */
    eax = eax + ecx;
    ecx = ZX16(LO16(esi));
    MEM16(edi + 0x3C) = LO16(esi);
    ecx = ecx + ecx * 2;
    esi = eax + ecx * 8 + 4;
    (void)0; /* test MEM8(esi), 0x20 - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -32) = esi;
    if (TEST_Z(MEM8(esi), 0x20)) goto loc_0055050A; /* je: equal / zero */

loc_005504EA: ;
    if (CMP_NE(MEM32(edi + 0x2C), edx)) goto loc_0055050A; /* jne: not equal / not zero */

loc_005504EF: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 2));
    ebx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00550A31(); /* call 0x00550A31 */

loc_005504FF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_00550830; /* jl: less (signed <) */

loc_0055050A: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00550554; /* je: equal / zero */

loc_00550511: ;
    if (CMP_NE(MEM32(edi + 0x30), 0)) goto loc_00550554; /* jne: not equal / not zero */

loc_00550517: ;
    eax = ZX16(MEM16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ebx = edi;
    PUSH32(esp, 0); sub_00550A31(); /* call 0x00550A31 */

loc_00550524: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_0055055E; /* jge: greater or equal (signed >=) */

loc_0055052B: ;
    eax = MEM32(edi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00550554; /* je: equal / zero */

loc_00550532: ;
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00550541; /* je: equal / zero */

loc_0055053C: ;
    PUSH32(esp, 0); sub_0054DFC5(); /* call 0x0054DFC5 */

loc_00550541: ;
    eax = MEM32(edi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_00550550; /* je: equal / zero */

loc_00550548: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054F9AE(); /* call 0x0054F9AE */

loc_00550550: ;
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) & 0;

loc_00550554: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_00550830; /* jl: less (signed <) */

loc_0055055E: ;
    ecx = MEM32(edi + 0x2C);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_00550592; /* je: equal / zero */

loc_00550567: ;
    if (TEST_Z(MEM8(esi), 0x10)) goto loc_00550573; /* je: equal / zero */

loc_0055056C: ;
    MEM32(ebp + -24) = 0x20;

loc_00550573: ;
    eax = MEM32(ebp + -24);
    eax = eax | 9;
    PUSH32(esp, 0); sub_00551012(); /* call 0x00551012 */

loc_0055057E: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(eax, ebx)) goto loc_0055059B; /* jge: greater or equal (signed >=) */

loc_00550585: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_005513DB(); /* call 0x005513DB */

loc_0055058F: ;
    MEM32(edi + 0x2C) = ebx;

loc_00550592: ;
    if (CMP_L(MEM32(ebp + -4), ebx)) goto loc_00550830; /* jl: less (signed <) */

loc_0055059B: ;
    if (CMP_EQ(MEM32(edi + 0x28), ebx)) goto loc_00550798; /* je: equal / zero */

loc_005505A4: ;
    esi = MEM32(0x555774);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055485B(); /* call 0x0055485B */

loc_005505B3: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2710);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_005505C6: ;
    esi = MEM32(ebp + -32);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    MEM32(ebp + 0xC) = eax;
    eax = ecx;
    eax = eax & 0xF;
    eax--;
    if ((eax == 0)) goto loc_00550732; /* je: equal / zero */

loc_005505DD: ;
    eax--;
    if ((eax == 0)) goto loc_0055070F; /* je: equal / zero */

loc_005505E4: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_005506B2; /* je: equal / zero */

loc_005505EC: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_00550641; /* je: equal / zero */

loc_005505F1: ;
    if (((int32_t)(LO8(ecx) & LO8(ecx)) >= 0)) goto loc_0055079D; /* jns: not sign (positive) */

loc_005505F9: ;
    ecx = MEM32(0x555774);
    eax = MEM32(edi + 0x28);
    esi = MEM32(ecx + 0x90);
    esi = esi - MEM32(eax + 0x4C);
    eax = 0; /* xor self */
    esi = esi + MEM32(ebp + 0xC);
    eax++;
    (void)0; /* cmp MEM32(edi + 0x2C), ebx - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(MEM32(edi + 0x2C), ebx)) goto loc_0055061C; /* je: equal / zero */

loc_00550619: ;
    PUSH32(esp, eax);
    goto loc_00550623;

loc_0055061C: ;
    if (CMP_EQ(MEM32(edi + 0x30), ebx)) goto loc_0055062E; /* je: equal / zero */

loc_00550621: ;
    PUSH32(esp, 2);

loc_00550623: ;
    ecx = edi;
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00550914(); /* call 0x00550914 */

loc_0055062E: ;
    ecx = MEM32(edi + 0x28);
    eax = MEM32(ecx + 0x48);
    eax = eax - MEM32(ecx + 0x58);
    eax = eax + esi;
    MEM32(ebp + -16) = eax;
    goto loc_005507A1;

loc_00550641: ;
    if (CMP_NE(MEM32(edi + 0x2C), ebx)) goto loc_0055064F; /* jne: not equal / not zero */

loc_00550646: ;
    if (CMP_EQ(MEM32(edi + 0x30), ebx)) goto loc_005507A1; /* je: equal / zero */

loc_0055064F: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 1);
    edx = 0; /* xor self */
    edi = ebp + -8;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00553532(); /* call 0x00553532 */

loc_00550663: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_005506A8; /* jl: less (signed <) */

loc_0055066A: ;
    eax = MEM32(ebp + -8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_005506A8; /* je: equal / zero */

loc_00550672: ;
    ecx = MEM32(esi + 0x28);
    edx = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    eax = eax + MEM32(ecx + 0x58);
    edx++;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + -12) = edx;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_005506A8; /* je: equal / zero */

loc_00550686: ;
    edi = MEM32(ecx + 0x48);
    if (CMP_BE(eax, edi)) goto loc_005506A8; /* jbe: below or equal (unsigned <=) */

loc_0055068D: ;
    ebx = MEM32(ebp + 0xC);
    ebx = ebx - MEM32(ecx + 0x4C);
    if (CMP_BE(eax, ebx)) goto loc_005506A8; /* jbe: below or equal (unsigned <=) */

loc_00550697: ;
    eax = eax - edi;
    (void)0; /* cmp MEM32(esi + 0x2C), 0 - flags set for next jcc */
    ecx = esi;
    if (CMP_EQ(MEM32(esi + 0x2C), 0)) goto loc_005506A4; /* je: equal / zero */

loc_005506A1: ;
    PUSH32(esp, edx);
    goto loc_005506F3;

loc_005506A4: ;
    PUSH32(esp, 2);
    goto loc_005506F3;

loc_005506A8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM8(esi + 0x38) = MEM8(esi + 0x38) | 0x40;
    goto loc_00550707;

loc_005506B2: ;
    edi = MEM32(edi + 0x28);
    eax = ebp + -16;
    PUSH32(esp, eax);
    ebx = ebp + -8;
    PUSH32(esp, 0); sub_005535A2(); /* call 0x005535A2 */

loc_005506C1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_005506FC; /* jl: less (signed <) */

loc_005506C8: ;
    edx = MEM32(ebp + -8);
    (void)0; /* cmp edx, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + -12) = 1;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_005506FC; /* je: equal / zero */

loc_005506D7: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x28);
    edx = edx + MEM32(eax + 0x58);
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_005506FF; /* je: equal / zero */

loc_005506E5: ;
    if (TEST_Z(edx, edx)) goto loc_005506FF; /* je: equal / zero */

loc_005506E9: ;
    eax = ecx;
    PUSH32(esp, 0); sub_00550A1C(); /* call 0x00550A1C */

loc_005506F0: ;
    PUSH32(esp, eax);
    eax = edx;

loc_005506F3: ;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00550914(); /* call 0x00550914 */

loc_005506FA: ;
    goto loc_00550707;

loc_005506FC: ;
    ecx = MEM32(ebp + 8);

loc_005506FF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM8(ecx + 0x38) = MEM8(ecx + 0x38) | 0x40;

loc_00550707: ;
    edi = MEM32(ebp + 8);
    goto loc_005507A1;

loc_0055070F: ;
    eax = MEM32(esi + 0xC);
    eax = eax - MEM32(esi + 8);
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054C8DE(); /* call 0x0054C8DE */

loc_0055071C: ;
    eax = eax + MEM32(esi + 8);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, eax);
    goto loc_00550744;

loc_00550732: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 8));

loc_00550744: ;
    PUSH32(esp, MEM32(edi + 0x28));
    PUSH32(esp, 0); sub_0055362B(); /* call 0x0055362B */

loc_0055074C: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, ebx)) goto loc_00550793; /* jl: less (signed <) */

loc_00550753: ;
    if (CMP_EQ(MEM32(ebp + -8), 0xFFFFFFFFu)) goto loc_00550793; /* je: equal / zero */

loc_00550759: ;
    esi = MEM32(edi + 0x28);
    eax = esi;
    PUSH32(esp, 0); sub_00553889(); /* call 0x00553889 */

loc_00550763: ;
    ecx = eax;
    eax = MEM32(esi + 0x48);
    eax = eax - MEM32(esi + 0x58);
    ecx = ecx + MEM32(ebp + -8);
    eax = eax - MEM32(esi + 0x4C);
    MEM32(ebp + -12) = 1;
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;
    eax = edi;
    PUSH32(esp, 0); sub_00550A1C(); /* call 0x00550A1C */

loc_00550784: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    edx = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_00550914(); /* call 0x00550914 */

loc_00550791: ;
    goto loc_005507A1;

loc_00550793: ;
    MEM32(ebp + -4) = ebx;
    goto loc_0055079D;

loc_00550798: ;
    if (CMP_EQ(MEM32(ebp + 0x10), ebx)) goto loc_005507A1; /* je: equal / zero */

loc_0055079D: ;
    MEM8(edi + 0x38) = MEM8(edi + 0x38) | 0x40;

loc_005507A1: ;
    ebx = 0; /* xor self */
    if (CMP_L(MEM32(ebp + -4), ebx)) goto loc_00550830; /* jl: less (signed <) */

loc_005507AC: ;
    if (CMP_EQ(MEM32(edi + 0x30), ebx)) goto loc_0055082B; /* je: equal / zero */

loc_005507B1: ;
    esi = MEM32(ebp + -32);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    ecx = eax;
    ecx = ecx & 0x100;
    if ((ecx == 0)) goto loc_005507C8; /* je: equal / zero */

loc_005507C3: ;
    if (CMP_NE(MEM32(ebp + -28), ebx)) goto loc_005507D7; /* jne: not equal / not zero */

loc_005507C8: ;
    if (CMP_NE(LO16(ecx), LO16(ebx))) goto loc_005507D2; /* jne: not equal / not zero */

loc_005507CD: ;
    if (CMP_NE(MEM32(ebp + -12), ebx)) goto loc_005507D7; /* jne: not equal / not zero */

loc_005507D2: ;
    if (TEST_Z(HI8(eax), 6)) goto loc_005507E4; /* je: equal / zero */

loc_005507D7: ;
    PUSH32(esp, MEM32(ebp + -16));
    eax = edi;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0); sub_005509B2(); /* call 0x005509B2 */

loc_005507E4: ;
    eax = MEM32(ebp + -32);
    eax = ZX16(MEM16(eax));
    PUSH32(esp, 0x20);
    ecx = eax;
    POP32(esp, edx);
    ecx = ecx & edx;
    if ((ecx == 0)) goto loc_005507F7; /* je: equal / zero */

loc_005507F3: ;
    if (TEST_NZ(LO8(eax), 0x40)) goto loc_00550804; /* jne: not equal / not zero */

loc_005507F7: ;
    ebx = 0; /* xor self */
    if (CMP_NE(LO16(ecx), LO16(ebx))) goto loc_00550809; /* jne: not equal / not zero */

loc_005507FE: ;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00550809; /* je: equal / zero */

loc_00550802: ;
    goto loc_00550806;

loc_00550804: ;
    ebx = 0; /* xor self */

loc_00550806: ;
    MEM32(ebp + -24) = edx;

loc_00550809: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(edi + 0x30);
    eax = eax | 9;
    PUSH32(esp, 0); sub_00551012(); /* call 0x00551012 */

loc_00550817: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(eax, ebx)) goto loc_00550854; /* jge: greater or equal (signed >=) */

loc_0055081E: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_005513DB(); /* call 0x005513DB */

loc_00550828: ;
    MEM32(edi + 0x30) = ebx;

loc_0055082B: ;
    if (CMP_GE(MEM32(ebp + -4), ebx)) goto loc_00550854; /* jge: greater or equal (signed >=) */

loc_00550830: ;
    ecx = MEM32(edi + 0x2C);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_00550843; /* je: equal / zero */

loc_00550839: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_005513DB(); /* call 0x005513DB */

loc_00550840: ;
    MEM32(edi + 0x2C) = ebx;

loc_00550843: ;
    ecx = MEM32(edi + 0x30);
    if (CMP_EQ(ecx, ebx)) goto loc_00550854; /* je: equal / zero */

loc_0055084A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_005513DB(); /* call 0x005513DB */

loc_00550851: ;
    MEM32(edi + 0x30) = ebx;

loc_00550854: ;
    (void)0; /* cmp MEM32(ebp + -36), ebx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(ebp + -36), ebx)) goto loc_00550867; /* je: equal / zero */

loc_0055085C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x555758);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_00550867: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055086E
 * Original: 0x0055086E - 0x0055090E (160 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055086E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055086E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), edx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = 0xFFFF;
    if (CMP_EQ(MEM32(ebp + 8), edx)) goto loc_005508A1; /* je: equal / zero */

loc_00550884: ;
    SET_LO16(eax, MEM16(eax + 0x3A));
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_005508A1; /* je: equal / zero */

loc_0055088E: ;
    ecx = ZX16(LO16(eax));
    ecx = esi + ecx * 8 + 4;
    if (CMP_B(LO16(ebx), MEM16(ecx + 4))) goto loc_005508A1; /* jb: below (unsigned <) */

loc_0055089B: ;
    if (CMP_BE(LO16(ebx), MEM16(ecx + 6))) goto loc_0055090A; /* jbe: below or equal (unsigned <=) */

loc_005508A1: ;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0x1FFF;
    ecx = ecx & edi;
    if (0) goto loc_00550905; /* jbe: below or equal (unsigned <=) */

loc_005508AD: ;
    eax = 0; /* xor self */

loc_005508AF: ;
    eax = esi + eax * 8 + 4;
    if (CMP_B(LO16(ebx), MEM16(eax + 4))) goto loc_005508C5; /* jb: below (unsigned <) */

loc_005508B9: ;
    if (CMP_A(LO16(ebx), MEM16(eax + 6))) goto loc_005508C5; /* ja: above (unsigned >) */

loc_005508BF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(ebp + -8) = edx;

loc_005508C5: ;
    edx++;
    eax = ZX16(LO16(edx));
    if (CMP_B(eax, ecx)) goto loc_005508AF; /* jb: below (unsigned <) */

loc_005508CD: ;
    if (CMP_BE(MEM32(ebp + -4), 1)) goto loc_00550905; /* jbe: below or equal (unsigned <=) */

loc_005508D3: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_0054C8DE(); /* call 0x0054C8DE */

loc_005508DB: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    eax++;
    edx = edx & edi;
    MEM32(ebp + 8) = ecx;
    if (0) goto loc_00550905; /* jbe: below or equal (unsigned <=) */

loc_005508E7: ;
    ecx = esi + ecx * 8 + 4;
    if (CMP_B(LO16(ebx), MEM16(ecx + 4))) goto loc_005508FA; /* jb: below (unsigned <) */

loc_005508F1: ;
    if (CMP_A(LO16(ebx), MEM16(ecx + 6))) goto loc_005508FA; /* ja: above (unsigned >) */

loc_005508F7: ;
    eax--;
    if ((eax == 0)) { sub_0055090E(); return; } /* je: equal / zero */

loc_005508FA: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    ecx = ZX16(MEM16(ebp + 8));
    if (CMP_B(ecx, edx)) goto loc_005508E7; /* jb: below (unsigned <) */

loc_00550905: ;
    SET_LO16(eax, MEM16(ebp + -8));
    POP32(esp, edi);

loc_0055090A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00550914
 * Original: 0x00550914 - 0x00550965 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550914(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00550914: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    ecx = MEM32(ecx + edx * 4 + 0x28);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x30));
    if (CMP_EQ(LO16(esi), 7)) { sub_00550965(); return; } /* je: equal / zero */

loc_00550929: ;
    if (CMP_EQ(LO16(esi), 8)) { sub_00550965(); return; } /* je: equal / zero */

loc_0055092F: ;
    MEM16(ebp + -50) = MEM16(ebp + -50) & 0;
    eax = eax << 8;
    eax = eax | 0xE;
    MEM32(ebp + -56) = eax;
    eax = edx;
    eax = eax << 2;
    eax = eax | MEM32(ebp + 8);
    MEM8(ebp + -52) = 8;
    MEM32(ebp + -48) = eax;
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEM8(ebp + -51) = 0;
    MEM32(ebp + -44) = 1;
    PUSH32(esp, 0); sub_00551FBD(); /* call 0x00551FBD */

loc_00550963: ;
    g_seh_ebp = ebp; sub_0055096A(); return; /* tail jmp 0x0055096A */

}

/**
 * sub_0055096F
 * Original: 0x0055096F - 0x0055097D (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055096F(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055096F: ;
    SET_LO16(ecx, MEM16(eax + 0x3A));
    if (CMP_NE(LO16(ecx), 0xFFFF)) { sub_0055097D(); return; } /* jne: not equal / not zero */

loc_0055097A: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_005509B2
 * Original: 0x005509B2 - 0x00550A1C (106 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005509B2(void)
{
    int _flags = 0; /* fallback flag var */

loc_005509B2: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    eax = eax & 0x780;
    if (CMP_EQ(eax, 0x80)) goto loc_00550A0E; /* je: equal / zero */

loc_005509C6: ;
    if (CMP_EQ(eax, 0x100)) goto loc_00550A04; /* je: equal / zero */

loc_005509CD: ;
    if (CMP_EQ(eax, 0x200)) goto loc_005509FC; /* je: equal / zero */

loc_005509D4: ;
    if (CMP_NE(eax, 0x400)) goto loc_00550A18; /* jne: not equal / not zero */

loc_005509DB: ;
    eax = MEM32(esi + 0x14);
    eax = eax - MEM32(esi + 0x10);
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054C8DE(); /* call 0x0054C8DE */

loc_005509E8: ;
    eax = eax + MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, eax);

loc_005509ED: ;
    edi = MEM32(edi + 0x30);
    eax = edi;
    PUSH32(esp, 0); sub_005534CA(); /* call 0x005534CA */

loc_005509F7: ;
    MEM32(edi + 0x48) = eax;
    goto loc_00550A18;

loc_005509FC: ;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    goto loc_005509ED;

loc_00550A04: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 0xC));
    goto loc_005509ED;

loc_00550A0E: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x48) = ecx;

loc_00550A18: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00550A1C
 * Original: 0x00550A1C - 0x00550A26 (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550A1C(void)
{
    int _flags = 0; /* fallback flag var */

loc_00550A1C: ;
    if (CMP_EQ(MEM32(eax + 0x2C), 0)) { sub_00550A26(); return; } /* je: equal / zero */

loc_00550A22: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_00550A31
 * Original: 0x00550A31 - 0x00550A4A (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550A31(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00550A31: ;
    PUSH32(esp, 0x6484A002);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00550A3D: ;
    if (TEST_Z(eax, eax)) { sub_00550A4A(); return; } /* je: equal / zero */

loc_00550A41: ;
    PUSH32(esp, 0); sub_00550D57(); /* call 0x00550D57 */

loc_00550A46: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00550A4C(); return; /* tail jmp 0x00550A4C */

}

/**
 * sub_00550A95
 * Original: 0x00550A95 - 0x00550AB1 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550A95(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00550A95: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    SET_LO16(eax, MEM16(edi + 0x38));
    edx = 0; /* xor self */
    (void)0; /* test LO16(eax), 0x404 - flags set for next jcc */
    MEM32(esp) = edx;
    MEM32(esp + 4) = edx;
    if (TEST_Z(LO16(eax), 0x404)) { sub_00550AB1(); return; } /* je: equal / zero */

loc_00550AAA: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00550B42(); return; /* tail jmp 0x00550B42 */

}

/**
 * sub_00550B45
 * Original: 0x00550B45 - 0x00550B82 (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550B45(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00550B45: ;
    MEM8(edi + 0x38) = MEM8(edi + 0x38) & 0xEF;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax + 4);
    eax = ZX16(MEM16(edi + 0x18));
    eax = eax + eax * 4;
    edx = MEM32(ecx + eax * 4 + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = edx + ecx;
    esi = 0xFFFF;
    eax = edi;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0055096F(); /* call 0x0055096F */

loc_00550B6C: ;
    (void)0; /* cmp LO16(eax), LO16(esi) - flags set for next jcc */
    MEM16(edi + 0x3A) = LO16(esi);
    if (CMP_EQ(LO16(eax), LO16(esi))) { sub_00550B82(); return; } /* je: equal / zero */

loc_00550B75: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00550488(); /* call 0x00550488 */

loc_00550B7E: ;
    ebx = eax;
    g_seh_ebp = ebp; sub_00550B86(); return; /* tail jmp 0x00550B86 */

}

/**
 * sub_00550B8B
 * Original: 0x00550B8B - 0x00550B94 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550B8B(void)
{

loc_00550B8B: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00550B94
 * Original: 0x00550B94 - 0x00550BAC (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550B94(void)
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

loc_00550B94: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e5c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_00550BAC(); return; } /* jp: parity */

loc_00550BA5: ;
    eax = 0x8000;
    g_seh_ebp = ebp; sub_00550BEF(); return; /* tail jmp 0x00550BEF */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00550BF2
 * Original: 0x00550BF2 - 0x00550C47 (85 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550BF2(void)
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

loc_00550BF2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649048] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00550C15; /* jne: not equal / not zero */

loc_00550C0E: ;
    MEM32(ebp + 8) = 0x41B40000;

loc_00550C15: ;
    fp_push(MEMD(0x648D60)); /* fld double */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_004716B4(); /* call 0x004716B4 */

loc_00550C29: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00550B8B(); /* call 0x00550B8B */

loc_00550C38: ;
    ecx = 0xFFFF;
    if (CMP_BE(eax, ecx)) goto loc_00550C43; /* jbe: below or equal (unsigned <=) */

loc_00550C41: ;
    eax = ecx;

loc_00550C43: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00550C47
 * Original: 0x00550C47 - 0x00550C6C (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550C47(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00550C47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFFFFCEu);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = eax & 0x7FFFFFFF;
    eax = ZX16(MEM16(eax * 4 + 0x5557DA));
    MEM32(ebp + -4) = eax;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
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
 * sub_00550C6C
 * Original: 0x00550C6C - 0x00550C8A (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550C6C(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00550C6C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00550B8B(); /* call 0x00550B8B */

loc_00550C7F: ;
    eax = (uint32_t)(int32_t)SMEM16(eax * 4 + 0x5557D8);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00550C8A
 * Original: 0x00550C8A - 0x00550CB9 (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550C8A(void)
{
    int _flags = 0; /* fallback flag var */

loc_00550C8A: ;
    ecx = MEM32(eax + 4);
    edx = ZX16(MEM16(ecx + 0x20));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(edx & edx, 0)) goto loc_00550CB2; /* jbe: below or equal (unsigned <=) */

loc_00550C99: ;
    esi = ecx;
    eax = MEM32(esi + 0x14);
    eax = eax + esi;

loc_00550CA0: ;
    SET_LO16(esi, MEM16(eax));
    if (CMP_EQ(LO16(esi), MEM16(esp + 0xC))) { sub_00550CB9(); return; } /* je: equal / zero */

loc_00550CAA: ;
    edi++;
    eax = eax + 0x18;
    if (CMP_B(edi, edx)) goto loc_00550CA0; /* jb: below (unsigned <) */

loc_00550CB2: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00550CC4
 * Original: 0x00550CC4 - 0x00550D14 (80 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550CC4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00550CC4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx + 4);
    eax = eax + esi;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_00550D0F; /* je: equal / zero */

loc_00550CD6: ;
    ecx = MEM32(ecx + 4);
    edx = ZX16(MEM16(ecx + 0x20));
    ecx = MEM32(ecx + 0x14);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edx = edx + edx * 2;
    ecx = ecx + edx * 8;
    if (CMP_AE(esi, ecx)) goto loc_00550D07; /* jae: above or equal (unsigned >=) */

loc_00550CEE: ;
    SET_LO16(edx, MEM16(eax));
    PUSH32(esp, edi);
    edi = eax;
    edi = edi - esi;

loc_00550CF6: ;
    if (CMP_NE(MEM16(edi + esi), LO16(edx))) goto loc_00550D06; /* jne: not equal / not zero */

loc_00550CFC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    esi = esi + 0x18;
    if (CMP_B(esi, ecx)) goto loc_00550CF6; /* jb: below (unsigned <) */

loc_00550D06: ;
    POP32(esp, edi);

loc_00550D07: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -4);
    MEM32(ecx) = edx;

loc_00550D0F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00550D14
 * Original: 0x00550D14 - 0x00550D26 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550D14(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00550D14: ;
    eax = MEM32(eax + 0x28);
    if (TEST_Z(eax, eax)) { sub_00550D26(); return; } /* je: equal / zero */

loc_00550D1B: ;
    if (CMP_NE(MEM32(esp + 4), eax)) { sub_00550D26(); return; } /* jne: not equal / not zero */

loc_00550D21: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_00550D28(); return; /* tail jmp 0x00550D28 */

}

/**
 * sub_00550D2B
 * Original: 0x00550D2B - 0x00550D3D (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550D2B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00550D2B: ;
    eax = MEM32(eax + 0x2C);
    if (TEST_Z(eax, eax)) { sub_00550D3D(); return; } /* je: equal / zero */

loc_00550D32: ;
    if (CMP_NE(MEM32(esp + 4), eax)) { sub_00550D3D(); return; } /* jne: not equal / not zero */

loc_00550D38: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_00550D3F(); return; /* tail jmp 0x00550D3F */

}

/**
 * sub_00550D42
 * Original: 0x00550D42 - 0x00550D57 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550D42(void)
{
    int _flags = 0; /* fallback flag var */

loc_00550D42: ;
    eax = ZX16(MEM16(ecx + 0x12));
    if (CMP_AE(MEM32(esp + 4), eax)) goto loc_00550D50; /* jae: above or equal (unsigned >=) */

loc_00550D4C: ;
    eax = MEM32(esp + 4);

loc_00550D50: ;
    MEM16(ecx + 0x12) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00550D57
 * Original: 0x00550D57 - 0x00550D71 (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550D57(void)
{

loc_00550D57: ;
    MEM16(eax + 0x30) = MEM16(eax + 0x30) & 0;
    ecx = eax + 8;
    MEM32(eax + 0xC) = ecx;
    MEM32(ecx) = ecx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 0x38) = 0x400;
    esp += 4; return; /* ret */

}

/**
 * sub_00550D71
 * Original: 0x00550D71 - 0x00550DCE (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550D71(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00550D71: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 8;
    if (CMP_EQ(MEM32(eax), eax)) goto loc_00550D90; /* je: equal / zero */

loc_00550D7C: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;

loc_00550D90: ;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00550DA6; /* je: equal / zero */

loc_00550D97: ;
    PUSH32(esp, 0x6484800D);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00550DA2: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0;

loc_00550DA6: ;
    eax = MEM32(edi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00550DB8; /* je: equal / zero */

loc_00550DAD: ;
    PUSH32(esp, 0x64848015);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00550DB8: ;
    esi = MEM32(edi + 0x44);
    if (TEST_Z(esi, esi)) { sub_00550DCE(); return; } /* je: equal / zero */

loc_00550DBF: ;
    PUSH32(esp, 0); sub_0054FF0C(); /* call 0x0054FF0C */

loc_00550DC4: ;
    eax = MEM32(edi + 0x44);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0054F755(); return; /* tail jmp 0x0054F755 */

}

/**
 * sub_00550DD1
 * Original: 0x00550DD1 - 0x00550DE6 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550DD1(void)
{
    int _flags = 0; /* fallback flag var */

loc_00550DD1: ;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) - 1;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    if ((MEM32(eax + 0x40) != 0)) goto loc_00550DE2; /* jne: not equal / not zero */

loc_00550DDA: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054F9AE(); /* call 0x0054F9AE */

loc_00550DE2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00550DE6
 * Original: 0x00550DE6 - 0x00550E15 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550DE6(void)
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

loc_00550DE6: ;
    SET_LO16(edx, MEM16(eax + 0x18));
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx + 4);
    MEMF(esi + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esi + 0x44) = eax;
    MEM32(eax + 0x34) = MEM32(eax + 0x34) + 1;
    if (CMP_NE(MEM16(esp + 0xC), 0xFFFF)) { sub_00550E15(); return; } /* jne: not equal / not zero */

loc_00550E08: ;
    eax = ZX16(LO16(edx));
    eax = eax + eax * 4;
    SET_LO16(edx, MEM16(ecx + eax * 4 + 0x3A));
    g_seh_ebp = ebp; sub_00550E19(); return; /* tail jmp 0x00550E19 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00550F8B
 * Original: 0x00550F8B - 0x00550FEB (96 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550F8B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00550F8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_00550FE7; /* je: equal / zero */

loc_00550F99: ;
    PUSH32(esp, 0); sub_0054DF98(); /* call 0x0054DF98 */

loc_00550F9E: ;
    eax = MEM32(esi + 0x10);
    (void)0; /* cmp MEM8(eax + 8), LO8(ebx) - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(MEM8(eax + 8), LO8(ebx))) goto loc_00550FD8; /* jbe: below or equal (unsigned <=) */

loc_00550FA9: ;
    eax = MEM32(esi + 0x34);
    ecx = eax + ebx;
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_00550FC3; /* je: equal / zero */

loc_00550FB6: ;
    ecx = ZX8(MEM8(ecx + 1));
    ecx = ecx & 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0054E22F(); /* call 0x0054E22F */

loc_00550FC3: ;
    eax = MEM32(esi + 0x10);
    eax = ZX8(MEM8(eax + 8));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ebx = ebx + 0x88;
    if (CMP_B(MEM32(ebp + -4), eax)) goto loc_00550FA9; /* jb: below (unsigned <) */

loc_00550FD8: ;
    eax = MEM32(esi + 0x10);
    eax = ZX8(MEM8(eax + 0xE));
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_00550D42(); /* call 0x00550D42 */

loc_00550FE7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00550FEB
 * Original: 0x00550FEB - 0x00551012 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00550FEB(void)
{
    int _flags = 0; /* fallback flag var */

loc_00550FEB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edx) = LO8(eax);
    MEM8(edx + 4) = 4;
    eax = MEM32(esi + 0x10);
    (void)0; /* test MEM8(eax + 0xB), 0x10 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(MEM8(eax + 0xB), 0x10)) goto loc_00551009; /* je: equal / zero */

loc_00551005: ;
    MEM8(edx + 5) = MEM8(edx + 5) | 4;

loc_00551009: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax);
    MEM32(edx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00551012
 * Original: 0x00551012 - 0x00551022 (16 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551012(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00551012: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    esi = ecx;
    POP32(esp, edi);
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) { sub_00551022(); return; } /* jns: not sign (positive) */

loc_0055101E: ;
    PUSH32(esp, 4);
    g_seh_ebp = ebp; sub_00551028(); return; /* tail jmp 0x00551028 */

}

/**
 * sub_0055109B
 * Original: 0x0055109B - 0x00551192 (247 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055109B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055109B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x4C;
    ecx = MEM32(ebx + 0x10);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM8(ecx + 8), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_BE(MEM8(ecx + 8), LO8(eax))) goto loc_00551176; /* jbe: below or equal (unsigned <=) */

loc_005510BA: ;
    MEM32(ebp + -4) = eax;

loc_005510BD: ;
    edi = MEM32(ebx + 0x34);
    edi = edi + MEM32(ebp + -4);
    MEM8(edi) = MEM8(edi) | 1;
    (void)0; /* cmp MEM32(edi + 0x38), 0 - flags set for next jcc */
    SET_LO16(eax, MEM16(edi));
    MEM16(ebp + -20) = LO16(eax);
    if (CMP_NE(MEM32(edi + 0x38), 0)) goto loc_005510E1; /* jne: not equal / not zero */

loc_005510D3: ;
    edx = ebp + -76;
    esi = ebx;
    PUSH32(esp, 0); sub_00550FEB(); /* call 0x00550FEB */

loc_005510DD: ;
    eax = edx;
    goto loc_00551124;

loc_005510E1: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    esi = edi;
    PUSH32(esp, 0); sub_00551A8F(); /* call 0x00551A8F */

loc_005510ED: ;
    if (TEST_Z(eax, eax)) goto loc_00551114; /* je: equal / zero */

loc_005510F1: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx | 0x10;
    MEM16(edi) = LO16(ecx);
    SET_LO16(eax, MEM16(eax + 6));
    MEM16(edi + 0x54) = LO16(eax);
    if (TEST_Z(MEM8(ebx + 0x39), 1)) goto loc_0055110E; /* je: equal / zero */

loc_00551108: ;
    MEM32(edi + 0x58) = MEM32(edi + 0x58) & 0;
    goto loc_00551114;

loc_0055110E: ;
    eax = MEM32(edi + 0x50);
    MEM32(edi + 0x58) = eax;

loc_00551114: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    esi = edi;
    PUSH32(esp, 0); sub_00551A8F(); /* call 0x00551A8F */

loc_00551120: ;
    if (TEST_Z(eax, eax)) goto loc_00551142; /* je: equal / zero */

loc_00551124: ;
    if (TEST_Z(MEM8(ebx + 0x39), 1)) goto loc_00551130; /* je: equal / zero */

loc_0055112A: ;
    MEM32(edi + 0x50) = MEM32(edi + 0x50) & 0;
    goto loc_00551137;

loc_00551130: ;
    ecx = ZX16(MEM16(eax + 6));
    MEM32(edi + 0x50) = ecx;

loc_00551137: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0055220F(); /* call 0x0055220F */

loc_0055113F: ;
    MEM32(ebp + -12) = eax;

loc_00551142: ;
    if (CMP_L(MEM32(ebp + -12), 0)) goto loc_0055118B; /* jl: less (signed <) */

loc_00551148: ;
    edi = MEM32(edi + 4);
    if (TEST_Z(edi, edi)) goto loc_0055115C; /* je: equal / zero */

loc_0055114F: ;
    if (CMP_EQ(MEM32(edi + 0x20), 0)) goto loc_0055115C; /* je: equal / zero */

loc_00551155: ;
    MEM32(ebp + -16) = 1;

loc_0055115C: ;
    eax = MEM32(ebx + 0x10);
    eax = ZX8(MEM8(eax + 8));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x88;
    if (CMP_B(MEM32(ebp + -8), eax)) goto loc_005510BD; /* jb: below (unsigned <) */

loc_00551176: ;
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) | 4;
    (void)0; /* cmp MEM32(ebp + -16), 0 - flags set for next jcc */
    eax = MEM32(ebx + 0x38);
    if (CMP_NE(MEM32(ebp + -16), 0)) goto loc_0055118B; /* jne: not equal / not zero */

loc_00551183: ;
    eax = eax | 0x400;
    MEM32(ebx + 0x38) = eax;

loc_0055118B: ;
    eax = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00551192
 * Original: 0x00551192 - 0x0055123E (172 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551192(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00551192: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO16(eax, MEM16(ebx + 0x30));
    if (CMP_EQ(LO16(eax), 7)) { sub_0055123E(); return; } /* je: equal / zero */

loc_005511A8: ;
    if (CMP_EQ(LO16(eax), 8)) { sub_0055123E(); return; } /* je: equal / zero */

loc_005511B2: ;
    (void)0; /* test MEM8(ebx + 0x38), 4 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(MEM8(ebx + 0x38), 4)) goto loc_005511C4; /* jne: not equal / not zero */

loc_005511B9: ;
    PUSH32(esp, 0); sub_0055109B(); /* call 0x0055109B */

loc_005511BE: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_00551239; /* jl: less (signed <) */

loc_005511C4: ;
    eax = MEM32(ebx + 0x10);
    edx = 0; /* xor self */
    if (CMP_BE(MEM8(eax + 8), LO8(edx))) goto loc_005511EA; /* jbe: below or equal (unsigned <=) */

loc_005511CE: ;
    ecx = 0; /* xor self */

loc_005511D0: ;
    eax = MEM32(ebx + 0x34);
    eax = eax + ecx;
    MEM8(eax) = MEM8(eax) & 0xFE;
    eax = MEM32(ebx + 0x10);
    eax = ZX8(MEM8(eax + 8));
    edx++;
    ecx = ecx + 0x88;
    if (CMP_B(edx, eax)) goto loc_005511D0; /* jb: below (unsigned <) */

loc_005511EA: ;
    (void)0; /* test MEM8(ebx + 0x38), 0x20 - flags set for next jcc */
    MEM16(ebx + 0x30) = 2;
    if (TEST_Z(MEM8(ebx + 0x38), 0x20)) goto loc_005511FD; /* je: equal / zero */

loc_005511F6: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00551934(); /* call 0x00551934 */

loc_005511FD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00551B0C(); /* call 0x00551B0C */

loc_00551203: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_00551239; /* jl: less (signed <) */

loc_00551209: ;
    PUSH32(esp, esi);
    esi = MEM32(0x555774);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055485B(); /* call 0x0055485B */

loc_00551219: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2710);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0055122B: ;
    esi = MEM32(ebx + 0x44);
    MEM32(ebx + 0x4C) = eax;
    eax = ebx;
    PUSH32(esp, 0); sub_0054FF7C(); /* call 0x0054FF7C */

loc_00551238: ;
    POP32(esp, esi);

loc_00551239: ;
    eax = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00551243(); return; /* tail jmp 0x00551243 */

}

/**
 * sub_00551246
 * Original: 0x00551246 - 0x005513DB (405 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551246(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00551246: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    SET_LO8(ebx, (CMP_EQ(MEM32(ebp + 8), 1)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    esi = edi;
    ebx = ebx * 4 + 2;
    PUSH32(esp, 0); sub_0055324F(); /* call 0x0055324F */

loc_0055126B: ;
    if (TEST_Z(eax, eax)) goto loc_005513D5; /* je: equal / zero */

loc_00551273: ;
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0055127B: ;
    eax = MEM32(edi + 0x10);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM8(eax + 8), 0 - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (CMP_BE(MEM8(eax + 8), 0)) goto loc_005512FB; /* jbe: below or equal (unsigned <=) */

loc_00551289: ;
    ebx = 0; /* xor self */
    MEM32(ebp + -8) = ebx;

loc_0055128E: ;
    eax = MEM32(edi + 0x34);
    eax = eax + ebx;
    if (CMP_EQ(MEM32(ebp + 8), esi)) goto loc_005512AF; /* je: equal / zero */

loc_00551298: ;
    MEM8(eax) = MEM8(eax) | 1;
    eax = MEM32(edi + 0x34);
    eax = eax + ebx;
    if (TEST_Z(MEM8(eax), 0x20)) goto loc_005512E3; /* je: equal / zero */

loc_005512A5: ;
    esi = MEM32(eax + 4);
    PUSH32(esp, 0); sub_0054E3EB(); /* call 0x0054E3EB */

loc_005512AD: ;
    goto loc_005512E1;

loc_005512AF: ;
    MEM8(eax) = MEM8(eax) & 0xFE;
    eax = MEM32(edi + 0x34);
    eax = eax + ebx;
    if (TEST_Z(MEM8(eax), 0x20)) goto loc_005512E3; /* je: equal / zero */

loc_005512BC: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0); sub_0054E510(); /* call 0x0054E510 */

loc_005512C4: ;
    eax = MEM32(edi + 0x38);
    if (TEST_Z(HI8(eax), 4)) goto loc_005512E3; /* je: equal / zero */

loc_005512CC: ;
    ebx = MEM32(edi + 0x44);
    PUSH32(esp, esi);
    eax = eax & 0xFFFFFBFFu;
    PUSH32(esp, esi);
    MEM32(edi + 0x38) = eax;
    PUSH32(esp, 0); sub_0055014C(); /* call 0x0055014C */

loc_005512DE: ;
    ebx = MEM32(ebp + -8);

loc_005512E1: ;
    esi = 0; /* xor self */

loc_005512E3: ;
    eax = MEM32(edi + 0x10);
    eax = ZX8(MEM8(eax + 8));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ebx = ebx + 0x88;
    (void)0; /* cmp MEM32(ebp + -4), eax - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (CMP_B(MEM32(ebp + -4), eax)) goto loc_0055128E; /* jb: below (unsigned <) */

loc_005512FB: ;
    if (CMP_EQ(MEM32(ebp + -20), esi)) goto loc_0055130C; /* je: equal / zero */

loc_00551300: ;
    SET_LO8(ecx, MEM8(ebp + -24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00551309: ;
    MEM32(ebp + -20) = esi;

loc_0055130C: ;
    eax = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_00551316: ;
    if (CMP_EQ(MEM32(ebp + 8), esi)) goto loc_0055132C; /* je: equal / zero */

loc_0055131B: ;
    eax = MEM32(ebp + -16);
    MEM32(edi + 0x50) = eax;
    eax = MEM32(ebp + -12);
    MEM32(edi + 0x54) = eax;
    goto loc_005513D5;

loc_0055132C: ;
    eax = MEM32(edi + 0x50);
    MEM32(ebp + -16) = MEM32(ebp + -16) - eax;
    eax = MEM32(edi + 0x54);
    MEM32(ebp + -12) = MEM32(ebp + -12) - eax - _cf; /* sbb */
    PUSH32(esp, MEM32(ebp + -12));
    eax = MEM32(0x555774);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054BDE9(); /* call 0x0054BDE9 */

loc_00551349: ;
    ecx = ebp + -24;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00551351: ;
    eax = MEM32(edi + 0x10);
    (void)0; /* cmp MEM8(eax + 8), 0 - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (CMP_BE(MEM8(eax + 8), 0)) goto loc_005513AD; /* jbe: below or equal (unsigned <=) */

loc_0055135D: ;
    eax = MEM32(edi + 0x34);
    eax = esi + eax + 0xC;
    ebx = MEM32(eax);
    goto loc_00551392;

loc_00551368: ;
    eax = ebx;
    (void)0; /* cmp MEM16(eax + 8), 0 - flags set for next jcc */
    ebx = MEM32(ebx);
    if (CMP_NE(MEM16(eax + 8), 0)) goto loc_0055138B; /* jne: not equal / not zero */

loc_00551373: ;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + ecx;
    ecx = MEM32(ebp + -12);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + ecx + _cf; /* adc */
    ecx = MEM32(0x555774);
    edx = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0055138B: ;
    eax = MEM32(edi + 0x34);
    eax = esi + eax + 0xC;

loc_00551392: ;
    if (CMP_NE(ebx, eax)) goto loc_00551368; /* jne: not equal / not zero */

loc_00551396: ;
    eax = MEM32(edi + 0x10);
    eax = ZX8(MEM8(eax + 8));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    esi = esi + 0x88;
    if (CMP_B(MEM32(ebp + -4), eax)) goto loc_0055135D; /* jb: below (unsigned <) */

loc_005513AB: ;
    esi = 0; /* xor self */

loc_005513AD: ;
    if (CMP_EQ(MEM32(ebp + -20), esi)) goto loc_005513BB; /* je: equal / zero */

loc_005513B2: ;
    SET_LO8(ecx, MEM8(ebp + -24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_005513BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2710);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_005513CC: ;
    MEM32(edi + 0x58) = MEM32(edi + 0x58) + eax;
    MEM32(edi + 0x50) = esi;
    MEM32(edi + 0x54) = esi;

loc_005513D5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005513DB
 * Original: 0x005513DB - 0x0055144B (112 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005513DB(void)
{
    int _flags = 0; /* fallback flag var */

loc_005513DB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) | eax;
    eax = MEM32(esi + 0x38);
    ebx = 0; /* xor self */
    if (TEST_NZ(LO8(eax), 2)) goto loc_0055142C; /* jne: not equal / not zero */

loc_005513EF: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(MEM8(eax + 8), LO8(ebx))) goto loc_0055142B; /* jbe: below or equal (unsigned <=) */

loc_005513FA: ;
    edx = 0; /* xor self */

loc_005513FC: ;
    eax = MEM32(esi + 0x34);
    eax = eax + edx;
    ecx = MEM32(eax + 4);
    if (CMP_EQ(ecx, ebx)) goto loc_00551419; /* je: equal / zero */

loc_00551408: ;
    if (CMP_EQ(MEM32(ecx + 0x20), ebx)) goto loc_00551419; /* je: equal / zero */

loc_0055140D: ;
    if (CMP_EQ(MEM32(eax + 0x50), ebx)) goto loc_00551419; /* je: equal / zero */

loc_00551412: ;
    MEM8(eax + 0x84) = MEM8(eax + 0x84) | 0x10;

loc_00551419: ;
    eax = MEM32(esi + 0x10);
    eax = ZX8(MEM8(eax + 8));
    edi++;
    edx = edx + 0x88;
    if (CMP_B(edi, eax)) goto loc_005513FC; /* jb: below (unsigned <) */

loc_0055142B: ;
    POP32(esp, edi);

loc_0055142C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 7);
    POP32(esp, ebx);
    PUSH32(esp, 0); sub_0055324F(); /* call 0x0055324F */

loc_00551435: ;
    if (TEST_Z(eax, eax)) goto loc_0055143E; /* je: equal / zero */

loc_00551439: ;
    PUSH32(esp, 0); sub_00553A6B(); /* call 0x00553A6B */

loc_0055143E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00552EFF(); /* call 0x00552EFF */

loc_00551444: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055144B
 * Original: 0x0055144B - 0x00551475 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055144B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055144B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, 0x555698);
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_00551463: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) { sub_00551475(); return; } /* jne: not equal / not zero */

loc_0055146A: ;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0x28) = eax;
    g_seh_ebp = ebp; sub_00551527(); return; /* tail jmp 0x00551527 */

}

/**
 * sub_0055152C
 * Original: 0x0055152C - 0x0055156D (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055152C(void)
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

loc_0055152C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + 8) = edx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    PUSH32(esp, edi);
    if (CMP_GE(edx & edx, 0)) goto loc_00551548; /* jge: greater or equal (signed >=) */

loc_00551542: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00551548: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00550B8B(); /* call 0x00550B8B */

loc_0055155D: ;
    edi = eax;
    eax = ZX16(MEM16(esi + 4));
    if (CMP_G(edi, eax)) { sub_0055156D(); return; } /* jg: greater (signed >) */

loc_00551567: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    g_seh_ebp = ebp; sub_005515C4(); return; /* tail jmp 0x005515C4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00551661
 * Original: 0x00551661 - 0x00551690 (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551661(void)
{
    int _flags = 0; /* fallback flag var */

loc_00551661: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_BE(MEM8(eax + 8), LO8(ebx))) goto loc_0055168D; /* jbe: below or equal (unsigned <=) */

loc_0055166F: ;
    eax = MEM32(esi + 0x34);
    eax = eax + ebx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00551690(); /* call 0x00551690 */

loc_0055167B: ;
    eax = MEM32(esi + 0x10);
    eax = ZX8(MEM8(eax + 8));
    edi++;
    ebx = ebx + 0x88;
    if (CMP_B(edi, eax)) goto loc_0055166F; /* jb: below (unsigned <) */

loc_0055168D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00551690
 * Original: 0x00551690 - 0x00551809 (377 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00551690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x7C;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_00551805; /* je: equal / zero */

loc_005516A4: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 4));
    PUSH32(esp, edi);
    edx = edx & 0xFFFF01FFu;
    edx = (uint32_t)(-(int32_t)edx);
    edx = edx << 4;
    edi = SX16(LO16(edx));
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x26);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x1E);
    edi = edi + edx;
    edi = edi + ecx;
    if (((int32_t)edi < 0)) goto loc_005516CF; /* js: sign (negative) */

loc_005516CD: ;
    edi = 0; /* xor self */

loc_005516CF: ;
    SET_LO8(eax, MEM8(eax + 0xA));
    PUSH32(esp, ebx);
    ebx = MEM32(0x555774);
    MEM8(ebp + -1) = LO8(eax);
    eax = ZX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ebp + -8;
    edx = ebx;
    PUSH32(esp, 0); sub_0054C268(); /* call 0x0054C268 */

loc_005516EB: ;
    if (TEST_Z(eax, eax)) goto loc_005516F2; /* je: equal / zero */

loc_005516EF: ;
    edi = edi + MEM32(ebp + -8);

loc_005516F2: ;
    if (CMP_EQ(MEM8(ebp + -1), 0xFF)) goto loc_0055170E; /* je: equal / zero */

loc_005516F8: ;
    PUSH32(esp, 0xFF);
    esi = ebp + -8;
    edx = ebx;
    PUSH32(esp, 0); sub_0054C268(); /* call 0x0054C268 */

loc_00551707: ;
    if (TEST_Z(eax, eax)) goto loc_0055170E; /* je: equal / zero */

loc_0055170B: ;
    edi = edi + MEM32(ebp + -8);

loc_0055170E: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = 0xFFFFD8F0u;
    if (CMP_LE(edi, ebx)) goto loc_0055171D; /* jle: less or equal (signed <=) */

loc_00551719: ;
    edi = 0; /* xor self */
    goto loc_00551723;

loc_0055171D: ;
    if (CMP_GE(edi, esi)) goto loc_00551723; /* jge: greater or equal (signed >=) */

loc_00551721: ;
    edi = esi;

loc_00551723: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054E484(); /* call 0x0054E484 */

loc_0055172F: ;
    eax = ebp + -124;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0); sub_0054E6E6(); /* call 0x0054E6E6 */

loc_0055173E: ;
    if (TEST_S(eax, eax)) goto loc_00551802; /* jl: less (signed <) */

loc_00551746: ;
    eax = ebp + -32;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    eax = 0; /* xor self */
    MEM32(ebp + -16) = ebx;
    SET_LO16(eax, MEM16(ecx + 4));
    edi = 0; /* xor self */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + 8) = ebx;
    eax = eax >> 9;
    SET_LO8(eax, LO8(eax) & 0x7F);
    (void)0; /* cmp MEM32(ebp + -124), edi - flags set for next jcc */
    SET_LO16(edx, ZX8(LO8(eax)));
    if (CMP_BE(MEM32(ebp + -124), edi)) goto loc_00551802; /* jbe: below or equal (unsigned <=) */

loc_00551775: ;
    if (TEST_NZ(edi, edi)) goto loc_005517A2; /* jne: not equal / not zero */

loc_00551779: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    if (CMP_NE(MEM32(ebp + ebx * 8 + -120), eax)) goto loc_005517A2; /* jne: not equal / not zero */

loc_00551782: ;
    edi = MEM32(ebp + -16);
    edi = edi << 3;
    MEM32(ebp + edi + -32) = eax;
    eax = ZX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFFFFCEu);
    if (CMP_G(eax, esi)) goto loc_00551798; /* jg: greater (signed >) */

loc_00551796: ;
    eax = esi;

loc_00551798: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    MEM32(ebp + edi + -28) = eax;
    edi = 0; /* xor self */
    edi++;

loc_005517A2: ;
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_005517D8; /* jne: not equal / not zero */

loc_005517A8: ;
    PUSH32(esp, 0xA);
    POP32(esp, eax);
    if (CMP_NE(MEM32(ebp + ebx * 8 + -120), eax)) goto loc_005517D8; /* jne: not equal / not zero */

loc_005517B1: ;
    ebx = MEM32(ebp + -16);
    ebx = ebx << 3;
    MEM32(ebp + ebx + -32) = eax;
    eax = ZX8(MEM8(ecx + 0xF));
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax << 8;
    if (CMP_G(eax, esi)) goto loc_005517CA; /* jg: greater (signed >) */

loc_005517C8: ;
    eax = esi;

loc_005517CA: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    MEM32(ebp + ebx + -28) = eax;
    MEM32(ebp + -8) = 1;

loc_005517D8: ;
    ebx = MEM32(ebp + 8);
    ebx++;
    (void)0; /* cmp ebx, MEM32(ebp + -124) - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    if (CMP_B(ebx, MEM32(ebp + -124))) goto loc_00551775; /* jb: below (unsigned <) */

loc_005517E4: ;
    if (TEST_NZ(edi, edi)) goto loc_005517ED; /* jne: not equal / not zero */

loc_005517E8: ;
    if (CMP_EQ(MEM32(ebp + -8), edi)) goto loc_00551802; /* je: equal / zero */

loc_005517ED: ;
    eax = ebp + -32;
    MEM32(ebp + -12) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0); sub_0054E5A0(); /* call 0x0054E5A0 */

loc_00551802: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);

loc_00551805: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00551809
 * Original: 0x00551809 - 0x00551846 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551809(void)
{
    int _flags = 0; /* fallback flag var */

loc_00551809: ;
    eax = MEM32(edx + 4);
    if (TEST_Z(eax, eax)) goto loc_00551845; /* je: equal / zero */

loc_00551810: ;
    ecx = MEM32(ecx + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    ecx = ecx + esi;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x20);
    edx = (uint32_t)(int32_t)SMEM16(edx + 0x1C);
    ecx = ecx + esi;
    ecx = ecx + edx;
    edx = 0x1FFF;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_G(ecx, edx)) goto loc_0055183D; /* jg: greater (signed >) */

loc_00551834: ;
    edx = 0xFFFF8001u;
    if (CMP_GE(ecx, edx)) goto loc_0055183F; /* jge: greater or equal (signed >=) */

loc_0055183D: ;
    ecx = edx;

loc_0055183F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0054E4CA(); /* call 0x0054E4CA */

loc_00551845: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00551846
 * Original: 0x00551846 - 0x00551934 (238 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551846(void)
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

loc_00551846: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    if (CMP_EQ(MEM32(esi + 4), 0)) goto loc_00551930; /* je: equal / zero */

loc_00551856: ;
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), eax - flags set for next jcc */
    edi = ebp + -24;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 8), eax)) goto loc_005518AD; /* je: equal / zero */

loc_00551867: ;
    eax = MEM32(edx + 0x10);
    MEM32(ebp + -24) = 2;
    SET_LO16(eax, MEM16(eax + 0x12));
    SET_LO16(eax, LO16(eax) >> 3);
    eax = ZX16(LO16(eax));
    MEM32(ebp + 8) = eax;
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00550B94(); /* call 0x00550B94 */

loc_0055188B: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(edx + 0x10);
    MEM32(ebp + -16) = ecx;
    edx = ZX16(MEM16(eax + 0x10));
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = edx;
    eax = ZX8(MEM8(eax + 0x12));
    eax = eax & 7;
    MEM32(ebp + -20) = eax;
    goto loc_00551924;

loc_005518AD: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x2A));
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x22));
    if (CMP_L(LO16(eax), 0x2000)) goto loc_005518C2; /* jl: less (signed <) */

loc_005518BD: ;
    eax = 0x2000;

loc_005518C2: ;
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_005518CB; /* jle: less or equal (signed <=) */

loc_005518C7: ;
    edx = eax;
    goto loc_005518CD;

loc_005518CB: ;
    edx = 0; /* xor self */

loc_005518CD: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x2C));
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x24));
    if (CMP_L(LO16(eax), 0xC80)) goto loc_005518E2; /* jl: less (signed <) */

loc_005518DD: ;
    eax = 0xC80;

loc_005518E2: ;
    if (CMP_LE(LO16(eax) & LO16(eax), 0)) goto loc_005518EB; /* jle: less or equal (signed <=) */

loc_005518E7: ;
    ecx = eax;
    goto loc_005518ED;

loc_005518EB: ;
    ecx = 0; /* xor self */

loc_005518ED: ;
    eax = SX16(LO16(edx));
    MEM32(ebp + 8) = eax;
    PUSH32(esp, ecx);
    MEM32(ebp + -24) = 1;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00550B94(); /* call 0x00550B94 */

loc_00551906: ;
    eax = ZX16(LO16(eax));
    MEM32(ebp + -16) = eax;
    eax = SX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00550BF2(); /* call 0x00550BF2 */

loc_00551915: ;
    ecx = MEM32(ebp + -16);
    eax = ZX16(LO16(eax));
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;

loc_00551924: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, 0); sub_0054E65A(); /* call 0x0054E65A */

loc_00551930: ;
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
 * sub_00551934
 * Original: 0x00551934 - 0x00551A28 (244 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551934(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00551934: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    MEM32(ebp + -56) = MEM32(ebp + -56) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    edi = ebp + -52;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -56);
    MEM8(ebp + -51) = MEM8(ebp + -51) | 1;
    eax = eax & 0xFFFFFF06u;
    eax = eax | 6;
    MEM32(ebp + -56) = eax;
    eax = MEM32(esi + 0x44);
    ecx = ZX16(MEM16(eax + 0x18));
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx + 4);
    ecx = ecx + ecx * 4;
    (void)0; /* test MEM8(edx + ecx * 4 + 0x38), 8 - flags set for next jcc */
    ecx = MEM32(eax + 0x14);
    MEM8(ebp + -52) = 8;
    if (TEST_Z(MEM8(edx + ecx * 4 + 0x38), 8)) { sub_00551A28(); return; } /* je: equal / zero */

loc_00551981: ;
    edx = ZX16(MEM16(eax + 0x18));
    ecx = MEM32(ecx + 4);
    ebx = MEM32(esi + 0x38);
    edx = edx + edx * 4;
    edi = MEM32(ecx + edx * 4 + 0x48);
    edx = ZX16(MEM16(eax + 0x3C));
    edi = edi & 0x7FFFFFF;
    edx = edx + edx * 2;
    edx = edi + edx * 8;
    edx = edx + MEM32(ecx + 0x24);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    edi = edx + ecx + 4;
    PUSH32(esp, esi);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_005519D3; /* je: equal / zero */

loc_005519AF: ;
    PUSH32(esp, 0); sub_00550D14(); /* call 0x00550D14 */

loc_005519B4: ;
    if (TEST_Z(eax, eax)) goto loc_005519BE; /* je: equal / zero */

loc_005519B8: ;
    eax = ZX16(MEM16(edi + 4));
    goto loc_005519C2;

loc_005519BE: ;
    eax = ZX16(MEM16(edi + 6));

loc_005519C2: ;
    SET_LO8(ecx, MEM8(ebp + -42));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2710);
    SET_LO8(ecx, LO8(ecx) & 0xF0);
    ebx = ebx & 0xFFFFFFDFu;
    goto loc_005519F8;

loc_005519D3: ;
    PUSH32(esp, 0); sub_00550D2B(); /* call 0x00550D2B */

loc_005519D8: ;
    if (TEST_Z(eax, eax)) goto loc_005519E2; /* je: equal / zero */

loc_005519DC: ;
    eax = ZX16(MEM16(edi + 4));
    goto loc_005519E6;

loc_005519E2: ;
    eax = ZX16(MEM16(edi + 6));

loc_005519E6: ;
    SET_LO8(ecx, MEM8(ebp + -42));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2710);
    SET_LO8(ecx, LO8(ecx) & 0xF1);
    SET_LO8(ecx, LO8(ecx) | 1);
    ebx = ebx & 0xFFFFFFBFu;

loc_005519F8: ;
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(ecx, LO8(ecx) | 0x10);
    (void)0; /* cmp eax, 0x2FAF080 - flags set for next jcc */
    MEM32(ebp + -48) = eax;
    MEM32(esi + 0x38) = ebx;
    MEM16(ebp + -44) = 0xE700;
    MEM8(ebp + -42) = LO8(ecx);
    if (CMP_BE(eax, 0x2FAF080)) goto loc_00551A1A; /* jbe: below or equal (unsigned <=) */

loc_00551A14: ;
    MEM8(ebp + -41) = 0x64;
    g_seh_ebp = ebp; sub_00551A73(); return; /* tail jmp 0x00551A73 */

loc_00551A1A: ;
    edx = 0; /* xor self */
    ecx = 0x7A120;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM8(ebp + -41) = LO8(eax);
    g_seh_ebp = ebp; sub_00551A73(); return; /* tail jmp 0x00551A73 */

}

/**
 * sub_00551A8F
 * Original: 0x00551A8F - 0x00551ADF (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551A8F(void)
{
    int _flags = 0; /* fallback flag var */

loc_00551A8F: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    edx = 0xFF;
    ebx = 0; /* xor self */
    edi = edi & edx;
    if ((edi == 0)) goto loc_00551AD8; /* je: equal / zero */

loc_00551AA3: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 4);
    ecx = ecx >> 8;
    eax = eax + ecx;
    ecx = ZX16(MEM16(esi + 0x14));
    eax = eax + ecx;

loc_00551ABB: ;
    ecx = MEM32(eax);
    ecx = ecx & edx;
    if (CMP_A(ecx, MEM32(esp + 0x14))) goto loc_00551ACB; /* ja: above (unsigned >) */

loc_00551AC5: ;
    if (CMP_AE(ecx, MEM32(esp + 0x10))) goto loc_00551ADA; /* jae: above or equal (unsigned >=) */

loc_00551ACB: ;
    ecx = ZX8(MEM8(eax + 4));
    ebx++;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    eax = eax + ecx + 8;
    if (CMP_B(ebx, edi)) goto loc_00551ABB; /* jb: below (unsigned <) */

loc_00551AD8: ;
    eax = 0; /* xor self */

loc_00551ADA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00551ADF
 * Original: 0x00551ADF - 0x00551B08 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551ADF(void)
{
    int _flags = 0; /* fallback flag var */

loc_00551ADF: ;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00551B05; /* je: equal / zero */

loc_00551AE6: ;
    ecx = ZX8(MEM8(eax + 8));
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00551B05; /* jle: less or equal (signed <=) */

loc_00551AF0: ;
    eax = MEM32(esi + 0x34);
    eax = eax + 4;

loc_00551AF6: ;
    if (CMP_NE(MEM32(eax), 0)) { sub_00551B08(); return; } /* jne: not equal / not zero */

loc_00551AFB: ;
    edx++;
    eax = eax + 0x88;
    if (CMP_L(edx, ecx)) goto loc_00551AF6; /* jl: less (signed <) */

loc_00551B05: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00551B0C
 * Original: 0x00551B0C - 0x00551F96 (1162 bytes, 349 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551B0C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00551B0C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x60;
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    PUSH32(esp, 0xD);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -92;
    MEM32(ebp + -96) = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x10);
    (void)0; /* cmp MEM8(eax + 8), LO8(edx) - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -36) = edx;
    MEM32(ebp + -12) = edx;
    if (CMP_BE(MEM8(eax + 8), LO8(edx))) goto loc_00551F8E; /* jbe: below or equal (unsigned <=) */

loc_00551B3D: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = edx;
    PUSH32(esp, ebx);

loc_00551B45: ;
    ebx = MEM32(edi + 0x34);
    ebx = ebx + MEM32(ebp + -20);
    MEM32(ebp + -16) = edx;
    if (TEST_NZ(MEM8(ebx), 0x80)) goto loc_00551F2F; /* jne: not equal / not zero */

loc_00551B57: ;
    SET_LO16(eax, MEM16(ebx + 0x84));
    if (TEST_Z(LO8(eax), 4)) goto loc_00551B71; /* je: equal / zero */

loc_00551B62: ;
    SET_LO16(eax, LO16(eax) & 0xFFF9);
    SET_LO16(eax, LO16(eax) | 1);
    MEM16(ebx + 0x84) = LO16(eax);

loc_00551B71: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00552825(); /* call 0x00552825 */

loc_00551B77: ;
    (void)0; /* test MEM8(ebx), 7 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_NZ(MEM8(ebx), 7)) goto loc_00551F2D; /* jne: not equal / not zero */

loc_00551B83: ;
    eax = MEM32(ebx + 0x38);
    if (TEST_Z(eax, eax)) goto loc_00551F4B; /* je: equal / zero */

loc_00551B8E: ;
    eax = MEM32(eax);
    ecx = ZX8(MEM8(ebx + 0x19));
    eax = eax & 0xFF;
    if (CMP_AE(ecx, eax)) goto loc_00551F2D; /* jae: above or equal (unsigned >=) */

loc_00551BA1: ;
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_00551BC6; /* jne: not equal / not zero */

loc_00551BA7: ;
    PUSH32(esp, MEM32(0x555774));
    PUSH32(esp, 0); sub_0054BF61(); /* call 0x0054BF61 */

loc_00551BB2: ;
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    MEM32(ebp + -4) = eax;

loc_00551BC6: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_00551BED; /* jl: less (signed <) */

loc_00551BCC: ;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x10) = ebx;
    ecx = MEM32(ebx + 0x38);
    ecx = MEM32(ecx);
    edx = MEM32(edi + 0x44);
    edx = MEM32(edx + 0x14);
    ecx = ecx >> 8;
    ecx = ecx + MEM32(edx + 4);
    edx = ZX16(MEM16(ebx + 0x14));
    esi = ecx + edx;
    MEM32(eax + 0x14) = esi;

loc_00551BED: ;
    ecx = MEM32(esi);
    eax = ecx;
    eax = eax >> 8;
    if (TEST_Z(MEM8(esi + 5), 0x20)) goto loc_00551C26; /* je: equal / zero */

loc_00551BFA: ;
    ecx = ecx & 0xFF;
    if (CMP_NE(ecx, 4)) goto loc_00551C0F; /* jne: not equal / not zero */

loc_00551C05: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx >> 8;
    eax = eax + ecx;
    goto loc_00551C26;

loc_00551C0F: ;
    if (CMP_EQ(ecx, 5)) goto loc_00551C05; /* je: equal / zero */

loc_00551C14: ;
    if (CMP_EQ(ecx, 7)) goto loc_00551C05; /* je: equal / zero */

loc_00551C19: ;
    if (CMP_EQ(ecx, 0xE)) goto loc_00551C05; /* je: equal / zero */

loc_00551C1E: ;
    if (CMP_NE(ecx, 6)) goto loc_00551C26; /* jne: not equal / not zero */

loc_00551C23: ;
    eax = eax + MEM32(esi + 8);

loc_00551C26: ;
    if (CMP_BE(eax, MEM32(ebp + -16))) goto loc_00551C2E; /* jbe: below or equal (unsigned <=) */

loc_00551C2B: ;
    MEM32(ebp + -16) = eax;

loc_00551C2E: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_00551DB5; /* jl: less (signed <) */

loc_00551C38: ;
    ecx = ebp + -40;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00551C40: ;
    MEM8(ebx + 0x19) = MEM8(ebx + 0x19) + 1;
    SET_LO16(eax, ZX8(MEM8(esi + 4)));
    eax = eax + 8;
    MEM16(ebx + 0x14) = MEM16(ebx + 0x14) + LO16(eax);
    if (CMP_EQ(MEM32(ebp + -36), 0)) goto loc_00551C62; /* je: equal / zero */

loc_00551C55: ;
    SET_LO8(ecx, MEM8(ebp + -40));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00551C5E: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;

loc_00551C62: ;
    edx = MEM32(esi);
    edi = MEM32(ebx + 0x7C);
    eax = edx;
    eax = eax >> 8;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = edi;
    if (CMP_AE(eax, edi)) goto loc_00551DA3; /* jae: above or equal (unsigned >=) */

loc_00551C7A: ;
    edx = edx & 0xFF;
    (void)0; /* cmp edx, 0x12 - flags set for next jcc */
    MEM32(ebp + -28) = edx;
    if (CMP_A(edx, 0x12)) goto loc_00551DB5; /* ja: above (unsigned >) */

loc_00551C8C: ;
    ecx = ZX8(MEM8(edx + 0x551FAA));
    { uint32_t _jt = MEM32(ecx * 4 + 0x551F96); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00551C9Au) goto loc_00551C9A;
    if (_jt == 0x00551D9Au) goto loc_00551D9A;
    if (_jt == 0x00551DA3u) goto loc_00551DA3;
    if (_jt == 0x00551DB5u) goto loc_00551DB5;
    if (_jt == 0x00551DDDu) goto loc_00551DDD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00551C9A: ;
    SET_LO8(ecx, MEM8(esi + 5));
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_00551DA3; /* je: equal / zero */

loc_00551CA6: ;
    MEM8(ebp + -91) = LO8(ecx);
    ecx = MEM32(esi + 0xC);
    ecx = ecx >> 8;
    ecx = ecx + eax;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(ebp + -96) = edx;
    MEM8(ebp + -92) = 0x38;
    if (CMP_A(ecx, edi)) goto loc_00551CEC; /* ja: above (unsigned >) */

loc_00551CBC: ;
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM8(ebp + -91) = MEM8(ebp + -91) & 0xDF;
    MEM16(ebp + -90) = MEM16(ebp + -90) & 0;
    MEM16(ebp + -88) = LO16(eax);
    MEM16(ebp + -86) = LO16(eax);
    SET_LO8(eax, MEM8(esi + 0xC));
    MEM8(ebp + -84) = LO8(eax);
    MEM32(ebp + -84) = MEM32(ebp + -84) & 0xFF;
    if (CMP_NE(edx, 7)) goto loc_00551E56; /* jne: not equal / not zero */

loc_00551CE7: ;
    goto loc_00551D85;

loc_00551CEC: ;
    eax = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 6));
    eax = eax >> 8;
    edi = ZX16(LO16(edx));
    ecx = ecx - MEM32(ebp + -24);
    MEM32(ebp + -4) = edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = 0; /* xor self */
    ecx = ecx << 8;
    edi = eax;
    eax = MEM32(ebp + -24);
    eax = eax - MEM32(ebp + -32);
    eax = eax + edi + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edi = eax;
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM16(ebp + -86) = LO16(eax);
    SET_LO8(eax, MEM8(esi + 0xC));
    MEM8(ebp + -84) = LO8(eax);
    eax = MEM32(ebp + -84);
    eax = eax & 0xFF;
    ecx = ecx | eax;
    eax = MEM32(ebp + -4);
    eax = eax - edi;
    (void)0; /* cmp MEM32(ebp + -28), 4 - flags set for next jcc */
    MEM32(ebp + -84) = ecx;
    SET_LO16(ecx, MEM16(esi + 8));
    MEM16(ebp + -90) = LO16(eax);
    if (CMP_NE(MEM32(ebp + -28), 4)) goto loc_00551D66; /* jne: not equal / not zero */

loc_00551D48: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    edx = SX16(LO16(ecx));
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = ZX16(MEM16(esi + 6));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = eax + ecx;
    MEM16(ebp + -88) = LO16(eax);
    goto loc_00551E56;

loc_00551D66: ;
    if (CMP_EQ(MEM32(ebp + -28), 5)) goto loc_00551D48; /* je: equal / zero */

loc_00551D6C: ;
    eax = ZX16(MEM16(esi + 0xA));
    edx = ZX16(LO16(ecx));
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = ZX16(MEM16(esi + 6));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = eax + ecx;
    MEM16(ebp + -88) = LO16(eax);

loc_00551D85: ;
    SET_LO16(eax, MEM16(esi + 0x10));
    MEM16(ebp + -80) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x12));
    MEM16(ebp + -78) = LO16(eax);
    goto loc_00551E56;

loc_00551D9A: ;
    if (TEST_NZ(MEM8(ebx + 0x84), 2)) goto loc_00551DB5; /* jne: not equal / not zero */

loc_00551DA3: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + -8);
    PUSH32(esp, 0); sub_005520A1(); /* call 0x005520A1 */

loc_00551DAE: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;

loc_00551DB2: ;
    MEM32(ebp + -4) = eax;

loc_00551DB5: ;
    eax = MEM32(ebx + 0x38);
    eax = MEM32(eax);
    ecx = ZX8(MEM8(ebx + 0x19));
    eax = eax & 0xFF;
    if (CMP_AE(ecx, eax)) goto loc_00551E6A; /* jae: above or equal (unsigned >=) */

loc_00551DCB: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_00551F10; /* jl: less (signed <) */

loc_00551DD5: ;
    edi = MEM32(ebp + 8);
    goto loc_00551BA1;

loc_00551DDD: ;
    if (TEST_Z(MEM8(esi + 5), 0x20)) goto loc_00551DB5; /* je: equal / zero */

loc_00551DE3: ;
    edx = MEM32(esi + 0xC);
    edx = edx >> 8;
    eax = eax + edx;
    if (CMP_B(eax, edi)) goto loc_00551DB5; /* jb: below (unsigned <) */

loc_00551DEF: ;
    ecx = ZX16(MEM16(esi + 6));
    eax = edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = edi - MEM32(ebp + -32);
    edx = 0; /* xor self */
    MEM32(ebp + -28) = eax;
    eax = edi + eax + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -28));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -28)); }
    if (CMP_AE(eax, ecx)) goto loc_00551DB5; /* jae: above or equal (unsigned >=) */

loc_00551E0C: ;
    edx = MEM32(esi);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -28));
    ecx = ecx << 8;
    edx = edx + ecx;
    edx = edx & 0xFFFFFF0Eu;
    edx = edx | 0xE;
    MEM32(ebp + -96) = edx;
    SET_LO8(edx, MEM8(esi + 5));
    MEM8(ebp + -91) = LO8(edx);
    SET_LO16(edx, MEM16(esi + 6));
    SET_LO16(edx, LO16(edx) - LO16(eax));
    eax = MEM32(esi + 8);
    MEM16(ebp + -90) = LO16(edx);
    MEM32(ebp + -88) = eax;
    eax = MEM32(esi + 0xC);
    edx = eax;
    edx = edx - ecx;
    edx = edx ^ eax;
    edx = edx & 0xFF;
    eax = eax - ecx;
    edx = edx ^ eax;
    MEM8(ebp + -92) = 0x38;
    MEM32(ebp + -84) = edx;

loc_00551E56: ;
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + -12);
    PUSH32(esp, 0); sub_00551FBD(); /* call 0x00551FBD */

loc_00551E65: ;
    goto loc_00551DB2;

loc_00551E6A: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_00551F10; /* jl: less (signed <) */

loc_00551E74: ;
    if (TEST_Z(MEM8(ebx), 0x10)) goto loc_00551F10; /* je: equal / zero */

loc_00551E7D: ;
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_00551EA2; /* jne: not equal / not zero */

loc_00551E83: ;
    PUSH32(esp, MEM32(0x555774));
    PUSH32(esp, 0); sub_0054BF61(); /* call 0x0054BF61 */

loc_00551E8E: ;
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    MEM32(ebp + -4) = eax;

loc_00551EA2: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_00551EF2; /* jl: less (signed <) */

loc_00551EA8: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x10) = ebx;
    edx = MEM32(0x5559DC);
    ecx++;
    ecx = ecx << 8;
    edx = edx & 0xFF;
    ecx = ecx ^ edx;
    MEM32(0x5559DC) = ecx;
    if (TEST_Z(MEM8(ebx + 0x84), 2)) goto loc_00551ED8; /* je: equal / zero */

loc_00551ED2: ;
    MEM8(ebx + 1) = MEM8(ebx + 1) | 4;
    goto loc_00551EDC;

loc_00551ED8: ;
    MEM8(ebx + 1) = MEM8(ebx + 1) & 0xFB;

loc_00551EDC: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax + 0x14) = 0x5559DC;
    PUSH32(esp, 0); sub_005520A1(); /* call 0x005520A1 */

loc_00551EEB: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -4) = eax;

loc_00551EF2: ;
    if (CMP_NE(MEM16(ebx + 0x54), 0xFFFF)) goto loc_00551F10; /* jne: not equal / not zero */

loc_00551EFA: ;
    SET_LO16(eax, MEM16(ebx + 0x84));
    if (TEST_Z(LO8(eax), 2)) goto loc_00551F10; /* je: equal / zero */

loc_00551F05: ;
    SET_LO16(eax, LO16(eax) | 4);
    MEM16(ebx + 0x84) = LO16(eax);

loc_00551F10: ;
    eax = MEM32(ebp + -8);
    if (TEST_Z(eax, eax)) goto loc_00551F26; /* je: equal / zero */

loc_00551F17: ;
    edi = MEM32(0x555774);
    PUSH32(esp, 0); sub_005549FF(); /* call 0x005549FF */

loc_00551F22: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;

loc_00551F26: ;
    MEM32(ebx + 0x7C) = MEM32(ebx + 0x7C) & 0;
    edi = MEM32(ebp + 8);

loc_00551F2D: ;
    edx = 0; /* xor self */

loc_00551F2F: ;
    eax = MEM32(edi + 0x10);
    eax = ZX8(MEM8(eax + 8));
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 0x88;
    if (CMP_B(MEM32(ebp + -12), eax)) goto loc_00551B45; /* jb: below (unsigned <) */

loc_00551F49: ;
    goto loc_00551F8C;

loc_00551F4B: ;
    if (CMP_NE(MEM8(ebx + 0x19), 0)) goto loc_00551F8C; /* jne: not equal / not zero */

loc_00551F51: ;
    ecx = ebp + -40;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00551F59: ;
    MEM8(ebx + 0x19) = MEM8(ebx + 0x19) + 1;
    if (CMP_EQ(MEM32(ebp + -36), 0)) goto loc_00551F6B; /* je: equal / zero */

loc_00551F62: ;
    SET_LO8(ecx, MEM8(ebp + -40));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00551F6B: ;
    if (TEST_NZ(MEM8(ebx + 0x84), 2)) goto loc_00551F8C; /* jne: not equal / not zero */

loc_00551F74: ;
    edx = ebp + -96;
    esi = edi;
    PUSH32(esp, 0); sub_00550FEB(); /* call 0x00550FEB */

loc_00551F7E: ;
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00551FBD(); /* call 0x00551FBD */

loc_00551F89: ;
    MEM32(ebp + -4) = eax;

loc_00551F8C: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_00551F8E: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00551FBD
 * Original: 0x00551FBD - 0x00551FD9 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00551FBD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00551FBD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_00551FD9(); return; } /* jne: not equal / not zero */

loc_00551FCB: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x10);
    ecx = ZX8(MEM8(ecx + 8));
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00551FDC(); return; /* tail jmp 0x00551FDC */

}

/**
 * sub_005520A1
 * Original: 0x005520A1 - 0x0055220F (366 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005520A1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_005520A1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 0x10);
    esi = MEM32(edi + 0x14);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM8(ebx + 0x19), 1 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -16) = ecx;
    if (CMP_NE(MEM8(ebx + 0x19), 1)) goto loc_005520D8; /* jne: not equal / not zero */

loc_005520C6: ;
    if (CMP_NE(MEM8(esi), 0xE)) goto loc_005520D1; /* jne: not equal / not zero */

loc_005520CB: ;
    if (CMP_EQ(MEM8(esi + 0xC), 1)) goto loc_005520D8; /* je: equal / zero */

loc_005520D1: ;
    MEM32(ebp + -8) = 1;

loc_005520D8: ;
    eax = MEM32(esi);
    eax = eax & 0xFF;
    eax = eax - 6;
    if ((eax == 0)) goto loc_00552128; /* je: equal / zero */

loc_005520E4: ;
    eax = eax - 6;
    if ((eax == 0)) goto loc_005520F1; /* je: equal / zero */

loc_005520E9: ;
    eax--;
    if ((eax != 0)) goto loc_0055214B; /* jne: not equal / not zero */

loc_005520EC: ;
    MEM8(ebx) = MEM8(ebx) | 2;
    goto loc_0055214B;

loc_005520F1: ;
    ecx = ebp + -20;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_005520F9: ;
    if (TEST_Z(MEM8(ebx), 0x10)) goto loc_00552113; /* je: equal / zero */

loc_005520FE: ;
    SET_LO8(eax, MEM8(ebx + 0x19));
    MEM8(ebx + 0x18) = LO8(eax);
    SET_LO16(eax, MEM16(ebx + 0x14));
    MEM16(ebx + 0x16) = LO16(eax);
    MEM32(ebp + -8) = 1;

loc_00552113: ;
    if (CMP_EQ(MEM32(ebp + -16), 0)) goto loc_0055214B; /* je: equal / zero */

loc_00552119: ;
    SET_LO8(ecx, MEM8(ebp + -20));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00552122: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    goto loc_0055214B;

loc_00552128: ;
    eax = MEM32(ebx + 4);
    if (CMP_NE(eax, ecx)) goto loc_00552138; /* jne: not equal / not zero */

loc_0055212F: ;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_0055214B;

loc_00552138: ;
    ecx = MEM32(ebp + 8);
    if (TEST_Z(MEM8(ecx + 0x38), 0x20)) goto loc_0055214B; /* je: equal / zero */

loc_00552141: ;
    PUSH32(esp, 0xFFFFE700u);
    PUSH32(esp, 0); sub_0054E484(); /* call 0x0054E484 */

loc_0055214B: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_00552192; /* je: equal / zero */

loc_00552151: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_005521F8; /* jl: less (signed <) */

loc_0055215B: ;
    eax = MEM32(0x555774);
    PUSH32(esp, 0); sub_00554AEC(); /* call 0x00554AEC */

loc_00552165: ;
    ecx = ebp + -20;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0055216D: ;
    esi = MEM32(0x555774);
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055485B(); /* call 0x0055485B */

loc_0055217C: ;
    if (CMP_EQ(MEM32(ebp + -16), 0)) goto loc_0055218F; /* je: equal / zero */

loc_00552182: ;
    SET_LO8(ecx, MEM8(ebp + -20));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0055218B: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;

loc_0055218F: ;
    esi = MEM32(ebp + -12);

loc_00552192: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_005521F8; /* jl: less (signed <) */

loc_00552198: ;
    PUSH32(esp, MEM32(ebx + 0x7C));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x555774));
    eax = edi;
    PUSH32(esp, 0); sub_00554903(); /* call 0x00554903 */

loc_005521B2: ;
    eax = ZX8(MEM8(ebx + 0x19));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(edi + 0x18) = MEM32(edi + 0x18) + eax;
    ecx = ebp + -20;
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + edx + _cf; /* adc */
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_005521C5: ;
    ebx = ebx + 0xC;
    (void)0; /* cmp MEM32(ebp + -16), 0 - flags set for next jcc */
    MEM32(edi) = ebx;
    ebx = MEM32(ebx + 4);
    MEM32(edi + 4) = ebx;
    MEM32(ebx) = edi;
    eax = MEM32(edi);
    MEM32(eax + 4) = edi;
    if (CMP_EQ(MEM32(ebp + -16), 0)) goto loc_005521E6; /* je: equal / zero */

loc_005521DD: ;
    SET_LO8(ecx, MEM8(ebp + -20));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_005521E6: ;
    eax = MEM32(0x555774);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx), _icall_esp); /* indirect call */
    }

loc_005521F1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00552205; /* jge: greater or equal (signed >=) */

loc_005521F8: ;
    eax = edi;
    edi = MEM32(0x555774);
    PUSH32(esp, 0); sub_005549FF(); /* call 0x005549FF */

loc_00552205: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055220F
 * Original: 0x0055220F - 0x0055253F (816 bytes, 263 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055220F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0055220F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x38);
    eax = eax & 0x100;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 5));
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(edi + 0x78) = MEM32(edi + 0x78) | 0xFFFFFFFFu;
    MEM32(ebp + -8) = 1;
    eax = eax & 2;
    (void)0; /* test MEM8(esi + 5), 4 - flags set for next jcc */
    MEM32(ebp + -24) = eax;
    if (TEST_Z(MEM8(esi + 5), 4)) goto loc_00552286; /* je: equal / zero */

loc_0055224C: ;
    eax = MEM32(ebx + 0x44);
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_0054CBC8(); /* call 0x0054CBC8 */

loc_00552263: ;
    if (TEST_Z(eax, eax)) goto loc_00552426; /* je: equal / zero */

loc_0055226B: ;
    (void)0; /* test MEM8(esi + 5), 0x40 - flags set for next jcc */
    ecx = ZX16(MEM16(eax + 2));
    eax = ZX16(MEM16(eax));
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = eax;
    if (TEST_Z(MEM8(esi + 5), 0x40)) goto loc_00552294; /* je: equal / zero */

loc_0055227E: ;
    eax = MEM32(esi + 8);
    MEM32(edi + 0x78) = eax;
    goto loc_00552294;

loc_00552286: ;
    eax = ZX16(MEM16(esi + 0xA));
    MEM32(ebp + -12) = eax;
    eax = ZX16(MEM16(esi + 8));
    MEM32(ebp + -16) = eax;

loc_00552294: ;
    eax = MEM32(edi + 0x74);
    if (TEST_Z(eax, eax)) goto loc_005522A3; /* je: equal / zero */

loc_0055229B: ;
    PUSH32(esp, MEM32(ebx + 0x44));
    PUSH32(esp, 0); sub_005542CC(); /* call 0x005542CC */

loc_005522A3: ;
    eax = MEM32(ebp + -24);
    eax = eax | MEM32(ebp + -20);
    if ((eax != 0)) goto loc_00552457; /* jne: not equal / not zero */

loc_005522AF: ;
    eax = MEM32(ebx + 0x44);
    esi = MEM32(eax + 0x14);
    eax = MEM32(ebp + -12);
    PUSH32(esp, 0); sub_0054D481(); /* call 0x0054D481 */

loc_005522BD: ;
    if (TEST_Z(eax, eax)) goto loc_00552426; /* je: equal / zero */

loc_005522C5: ;
    ecx = MEM32(eax + 0x1C);
    if (TEST_Z(ecx, ecx)) goto loc_005522D5; /* je: equal / zero */

loc_005522CC: ;
    ecx = MEM32(ecx);
    ecx = ~ecx;
    ecx = ecx & 1;
    goto loc_005522D7;

loc_005522D5: ;
    ecx = 0; /* xor self */

loc_005522D7: ;
    if (TEST_NZ(ecx, ecx)) goto loc_005522E2; /* jne: not equal / not zero */

loc_005522DB: ;
    MEM32(ebp + -8) = 0x40000001;

loc_005522E2: ;
    MEM32(edi + 0x74) = eax;
    ebx = MEM32(ebx + 0x44);
    edi = eax;
    PUSH32(esp, 0); sub_00554274(); /* call 0x00554274 */

loc_005522EF: ;
    ecx = MEM32(ebp + -16);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(esi + 0x74);
    eax = esi + 0x5C;
    PUSH32(esp, ecx);
    MEM16(esi + 0x56) = LO16(ecx);
    PUSH32(esp, 0); sub_00554399(); /* call 0x00554399 */

loc_00552305: ;
    ecx = ebp + -44;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_00554338(); /* call 0x00554338 */

loc_00552310: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_005532D8(); /* call 0x005532D8 */

loc_00552318: ;
    eax = MEM32(esi + 0x80);
    if (TEST_NZ(eax, eax)) goto loc_00552430; /* jne: not equal / not zero */

loc_00552326: ;
    MEM8(esi + 0x84) = MEM8(esi + 0x84) | 1;

loc_0055232D: ;
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);

loc_00552333: ;
    esi = edi + 4;
    if (CMP_NE(MEM32(esi), 0)) goto loc_00552388; /* jne: not equal / not zero */

loc_0055233B: ;
    SET_LO16(ecx, MEM16(ebx + 0x30));
    SET_LO16(ecx, LO16(ecx) - 4);
    SET_LO16(ecx, (uint32_t)(-(int32_t)LO16(ecx)));
    eax = 0x80000000u;
    PUSH32(esp, esi);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & eax;
    ecx = ecx + eax;
    eax = MEM32(ebx + 0x10);
    eax = ZX8(MEM8(eax + 0xE));
    ecx = ecx | eax;
    eax = ZX16(MEM16(ebp + -42));
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ecx);
    ecx = MEM32(0x555774);
    PUSH32(esp, 0); sub_0054BA70(); /* call 0x0054BA70 */

loc_00552375: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_00552538; /* jl: less (signed <) */

loc_00552380: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x74);
    MEM32(eax + 0xC) = ecx;

loc_00552388: ;
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0); sub_004C3995(); /* call 0x004C3995 */

loc_00552390: ;
    MEM16(edi + 0x1C) = LO16(eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, 0); sub_0054E72C(); /* call 0x0054E72C */

loc_0055239F: ;
    edx = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00551809(); /* call 0x00551809 */

loc_005523A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00551690(); /* call 0x00551690 */

loc_005523AF: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(MEM8(eax + 0xB), 4)) goto loc_005523C3; /* je: equal / zero */

loc_005523B8: ;
    PUSH32(esp, 1);
    esi = edi;
    edx = ebx;
    PUSH32(esp, 0); sub_00551846(); /* call 0x00551846 */

loc_005523C3: ;
    eax = MEM32(ebx + 0x44);
    eax = MEM32(eax + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_005523F7; /* je: equal / zero */

loc_005523CD: ;
    esi = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 1));
    edi = eax;
    esi = esi + 4;
    eax = MEM32(esi);
    ecx = ecx & 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0054E22F(); /* call 0x0054E22F */

loc_005523E5: ;
    eax = MEM32(ebx + 0x10);
    eax = ZX8(MEM8(eax + 0xE));
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00550D42(); /* call 0x00550D42 */

loc_005523F4: ;
    edi = MEM32(ebp + 0xC);

loc_005523F7: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(MEM8(eax + 0xB), 2)) goto loc_0055240A; /* je: equal / zero */

loc_00552400: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0054E6A0(); /* call 0x0054E6A0 */

loc_0055240A: ;
    eax = edi + 4;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(eax);
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(eax + 0x1C), esi)) goto loc_00552508; /* je: equal / zero */

loc_0055241D: ;
    PUSH32(esp, 0); sub_0054E1D8(); /* call 0x0054E1D8 */

loc_00552422: ;
    if (TEST_Z(eax, eax)) goto loc_00552494; /* je: equal / zero */

loc_00552426: ;
    eax = 0x80004005u;
    goto loc_00552538;

loc_00552430: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0055232D; /* jne: not equal / not zero */

loc_00552439: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(MEM16(eax + 0x54), 0xFFFF)) goto loc_0055244B; /* jne: not equal / not zero */

loc_00552444: ;
    MEM32(eax + 0x80) = MEM32(eax + 0x80) & 0;

loc_0055244B: ;
    MEM8(eax + 0x84) = MEM8(eax + 0x84) | 2;
    goto loc_0055232D;

loc_00552457: ;
    if (CMP_EQ(MEM32(ebp + -20), 0)) goto loc_00552473; /* je: equal / zero */

loc_0055245D: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAC44);
    MEM32(ebp + -8) = 0x40000001;
    PUSH32(esp, 2);
    goto loc_0055248A;

loc_00552473: ;
    if (CMP_EQ(MEM32(ebp + -24), 0)) goto loc_00552333; /* je: equal / zero */

loc_0055247D: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xBB80);
    PUSH32(esp, 1);

loc_0055248A: ;
    PUSH32(esp, 0); sub_004C39DF(); /* call 0x004C39DF */

loc_0055248F: ;
    goto loc_00552333;

loc_00552494: ;
    if (CMP_L(MEM32(ebp + -4), esi)) goto loc_005524FD; /* jl: less (signed <) */

loc_00552499: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(edi + 0x74);
    esi = edi + 0x5C;
    PUSH32(esp, 0); sub_0055410D(); /* call 0x0055410D */

loc_005524A9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_005524FD; /* jl: less (signed <) */

loc_005524B0: ;
    eax = MEM32(edi + 0x80);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_005524CF; /* je: equal / zero */

loc_005524BB: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, 0); sub_0054E772(); /* call 0x0054E772 */

loc_005524C6: ;
    MEM32(edi + 0x80) = MEM32(edi + 0x80) & 0;
    goto loc_005524DE;

loc_005524CF: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0054E772(); /* call 0x0054E772 */

loc_005524DB: ;
    esi = MEM32(ebp + 0xC);

loc_005524DE: ;
    eax = MEM32(ebp + 0x10);
    if (CMP_EQ(MEM16(eax + 6), 0)) goto loc_005524FD; /* je: equal / zero */

loc_005524E8: ;
    PUSH32(esp, MEM32(edi + 0x70));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(edi + 0x6C));
    PUSH32(esp, 0); sub_0054E7A9(); /* call 0x0054E7A9 */

loc_005524F5: ;
    esi = MEM32(esi);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | 1;
    goto loc_0055251B;

loc_005524FD: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0xFFFFFFFEu;
    goto loc_0055251E;

loc_00552508: ;
    MEM16(edi + 2) = MEM16(edi + 2) | 0xFFFF;
    if (CMP_L(MEM32(ebp + -4), esi)) goto loc_0055251E; /* jl: less (signed <) */

loc_00552513: ;
    PUSH32(esp, ebx);
    esi = edi;
    PUSH32(esp, 0); sub_0055253F(); /* call 0x0055253F */

loc_0055251B: ;
    MEM32(ebp + -4) = eax;

loc_0055251E: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(MEM8(eax + 0xB), 1)) goto loc_00552535; /* je: equal / zero */

loc_00552527: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    PUSH32(esp, 1);
    eax = ebx;
    PUSH32(esp, 0); sub_0055397C(); /* call 0x0055397C */

loc_00552535: ;
    eax = MEM32(ebp + -4);

loc_00552538: ;
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
 * sub_0055253F
 * Original: 0x0055253F - 0x005526DA (411 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055253F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055253F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebp + -28;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x40), eax - flags set for next jcc */
    POP32(esp, ecx);
    edi = ebp + -72;
    ebx = esi + 0x5C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_NE(MEM32(esi + 0x40), eax)) goto loc_005526D4; /* jne: not equal / not zero */

loc_00552566: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(MEM8(eax + 0x39), 1)) goto loc_005525A3; /* je: equal / zero */

loc_0055256F: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAC44);
    PUSH32(esp, 2);
    POP32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C39DF(); /* call 0x004C39DF */

loc_00552583: ;
    MEM16(esi + 0x56) = MEM16(esi + 0x56) | 0xFFFF;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x3C);
    eax = MEM32(eax + 0x1C);
    ebx = 0x4000;
    MEM32(ebp + -24) = eax;
    MEM32(esi + 0x44) = 0xFA0000;
    goto loc_00552602;

loc_005525A3: ;
    edi = MEM32(esi + 0x60);
    eax = MEM32(esi + 0x74);
    PUSH32(esp, 0);
    ecx = ebx;
    edi = edi & 3;
    PUSH32(esp, 0); sub_0055412C(); /* call 0x0055412C */

loc_005525B5: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 4);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 0x20);
    ecx = ecx + MEM32(eax + 8);
    ecx = ecx + MEM32(ebx + 8);
    (void)0; /* cmp MEM32(ebx + 0x14), 0 - flags set for next jcc */
    MEM32(ebp + -20) = ecx;
    if (CMP_NE(MEM32(ebx + 0x14), 0)) goto loc_005525DC; /* jne: not equal / not zero */

loc_005525D6: ;
    eax = MEM32(ebx + 0xC);
    MEM32(ebx + 0x14) = eax;

loc_005525DC: ;
    if (CMP_NE(MEM32(esi + 0x50), 0)) goto loc_005525E7; /* jne: not equal / not zero */

loc_005525E2: ;
    eax = MEM32(ebx + 0xC);
    goto loc_005525ED;

loc_005525E7: ;
    eax = MEM32(ebx + 0x10);
    eax = eax + MEM32(ebx + 0x14);

loc_005525ED: ;
    MEM32(esi + 0x44) = eax;
    eax = MEM32(esi + 0x74);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x20);
    eax = eax + MEM32(ebx + 8);
    ebx = MEM32(ebp + -8);
    MEM32(esi + 0x48) = eax;

loc_00552602: ;
    MEM8(esi) = MEM8(esi) | 8;
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054BC08(); /* call 0x0054BC08 */

loc_00552613: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (TEST_S(eax, eax)) goto loc_00552655; /* jl: less (signed <) */

loc_0055261A: ;
    if (CMP_NE(edi, 2)) goto loc_00552645; /* jne: not equal / not zero */

loc_0055261F: ;
    eax = ebx;
    eax = eax << 3;
    MEM32(ebp + -16) = eax;
    edi = esi + 0x4C;
    PUSH32(esp, edi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050A58D(); /* call 0x0050A58D */

loc_00552634: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (TEST_S(eax, eax)) goto loc_00552655; /* jl: less (signed <) */

loc_0055263B: ;
    edi = MEM32(edi);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x24), _icall_esp); /* indirect call */
    }

loc_00552643: ;
    goto loc_00552655;

loc_00552645: ;
    eax = ZX16(MEM16(esi + 0x56));
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x74);
    PUSH32(esp, 0); sub_00554184(); /* call 0x00554184 */

loc_00552652: ;
    MEM32(esi + 0x3C) = eax;

loc_00552655: ;
    MEM8(esi) = MEM8(esi) | 4;
    if (CMP_L(MEM32(ebp + -8), 0)) goto loc_005526D1; /* jl: less (signed <) */

loc_0055265E: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_005526FC(); /* call 0x005526FC */

loc_0055266A: ;
    ebx = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = ebx;
    edi = 0x7FFFFFFF;

loc_00552677: ;
    eax = MEM32(esi + 0x40);
    MEM32(ebx + eax + 0x18) = 0xFFFF;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0xC);
    ecx = ecx & edi;
    (void)0; /* cmp MEM32(ebp + -12), 0 - flags set for next jcc */
    MEM32(ebx + eax + 0x14) = ecx;
    if (CMP_EQ(MEM32(ebp + -12), 0)) goto loc_005526C6; /* je: equal / zero */

loc_00552694: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = ecx & edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -4));
    ecx = ecx + MEM32(eax + 8);
    eax = eax + ebx;
    MEM32(ebp + -72) = ecx;
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -68) = ecx;
    eax = eax + 0x10;
    ecx = ebp + -72;
    MEM32(ebp + -60) = eax;
    PUSH32(esp, 0); sub_00552AEB(); /* call 0x00552AEB */

loc_005526C3: ;
    MEM32(ebp + -8) = eax;

loc_005526C6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ebx = ebx + 0x20;
    if (CMP_B(ebx, 0x40)) goto loc_00552677; /* jb: below (unsigned <) */

loc_005526D1: ;
    eax = MEM32(ebp + -8);

loc_005526D4: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005526DA
 * Original: 0x005526DA - 0x005526F9 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005526DA(void)
{
    int _flags = 0; /* fallback flag var */

loc_005526DA: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM32(eax + 0x40), ecx)) { sub_005526F9(); return; } /* je: equal / zero */

loc_005526E1: ;
    if (CMP_NE(MEM32(eax + 0x44), ecx)) goto loc_005526F0; /* jne: not equal / not zero */

loc_005526E6: ;
    if (CMP_NE(MEM32(eax + 0x50), ecx)) goto loc_005526F0; /* jne: not equal / not zero */

loc_005526EB: ;
    if (TEST_Z(MEM8(eax), 0x10)) { sub_005526F9(); return; } /* je: equal / zero */

loc_005526F0: ;
    if (TEST_Z(MEM8(eax), 8)) { sub_005526F9(); return; } /* je: equal / zero */

loc_005526F5: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_005526FC
 * Original: 0x005526FC - 0x005527DB (223 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005526FC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005526FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    edi = 0; /* xor self */
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (TEST_Z(LO8(ecx), 4)) goto loc_005527AB; /* je: equal / zero */

loc_0055271B: ;
    if (CMP_EQ(MEM32(esi + 0x74), edx)) goto loc_00552762; /* je: equal / zero */

loc_00552720: ;
    eax = MEM32(esi + 0x60);
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_EQ(LO8(eax), 2)) goto loc_00552762; /* je: equal / zero */

loc_00552729: ;
    if (TEST_Z(MEM8(esi + 0x84), 1)) goto loc_0055274F; /* je: equal / zero */

loc_00552732: ;
    if (TEST_NZ(MEM8(esi + 0x5C), 1)) goto loc_00552742; /* jne: not equal / not zero */

loc_00552738: ;
    if (CMP_EQ(MEM32(esi + 0x3C), edx)) goto loc_0055274F; /* je: equal / zero */

loc_0055273D: ;
    if (CMP_NE(MEM32(esi + 0x6C), edx)) goto loc_0055274F; /* jne: not equal / not zero */

loc_00552742: ;
    PUSH32(esp, 1);
    eax = ebx;
    PUSH32(esp, 0); sub_00552E26(); /* call 0x00552E26 */

loc_0055274B: ;
    edi = eax;
    goto loc_0055278F;

loc_0055274F: ;
    PUSH32(esp, 0); sub_005527E5(); /* call 0x005527E5 */

loc_00552754: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_005527D7; /* je: equal / zero */

loc_00552759: ;
    MEM32(ebp + -4) = 1;
    goto loc_0055278F;

loc_00552762: ;
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x24), _icall_esp); /* indirect call */
    }

loc_0055276B: ;
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(eax);
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

loc_00552778: ;
    edi = MEM32(ebp + -8);
    edi = edi >> 1;
    edi = edi & 1;
    if ((edi == 0)) goto loc_005527D7; /* je: equal / zero */

loc_00552782: ;
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(eax);
    edx = esi + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x20), _icall_esp); /* indirect call */
    }

loc_0055278F: ;
    eax = 0; /* xor self */
    if (CMP_NE(edi, eax)) goto loc_0055279F; /* jne: not equal / not zero */

loc_00552795: ;
    if (CMP_EQ(MEM32(ebp + -4), eax)) goto loc_005527D7; /* je: equal / zero */

loc_0055279A: ;
    if (CMP_EQ(MEM32(ebp + 8), eax)) goto loc_005527D1; /* je: equal / zero */

loc_0055279F: ;
    MEM8(ebx + 0x39) = MEM8(ebx + 0x39) | 4;
    MEM8(esi) = MEM8(esi) & 0xFB;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    goto loc_005527C5;

loc_005527AB: ;
    eax = MEM32(ebx + 0x38);
    edi = 0; /* xor self */
    edi++;
    if (TEST_Z(HI8(eax), 4)) { sub_005527DB(); return; } /* je: equal / zero */

loc_005527B6: ;
    if (TEST_Z(LO8(ecx), 0x20)) { sub_005527DB(); return; } /* je: equal / zero */

loc_005527BB: ;
    eax = eax & 0xFFFFFBFFu;
    PUSH32(esp, edx);
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, edx);

loc_005527C5: ;
    ebx = MEM32(ebx + 0x44);
    PUSH32(esp, 0); sub_0055014C(); /* call 0x0055014C */

loc_005527CD: ;
    if (TEST_NZ(edi, edi)) { sub_005527DB(); return; } /* jne: not equal / not zero */

loc_005527D1: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) { sub_005527DB(); return; } /* jne: not equal / not zero */

loc_005527D7: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_005527DE(); return; /* tail jmp 0x005527DE */

}

/**
 * sub_005527E5
 * Original: 0x005527E5 - 0x0055281A (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005527E5(void)
{
    int _flags = 0; /* fallback flag var */

loc_005527E5: ;
    ecx = MEM32(esi + 0x40);
    eax = 0; /* xor self */
    edx = ecx + 0x18;

loc_005527ED: ;
    if (CMP_NE(MEM32(edx + -8), 0x8000000Au)) goto loc_00552819; /* jne: not equal / not zero */

loc_005527F6: ;
    if (CMP_NE(MEM32(edx), 0xAAAA)) goto loc_0055280D; /* jne: not equal / not zero */

loc_005527FE: ;
    if (CMP_NE(MEM32(esi + 0x4C), 0)) goto loc_0055280D; /* jne: not equal / not zero */

loc_00552804: ;
    if (CMP_NE(MEM32(edx + 4), 0x103)) { sub_0055281A(); return; } /* jne: not equal / not zero */

loc_0055280D: ;
    eax++;
    edx = edx + 0x20;
    if (CMP_B(eax, 2)) goto loc_005527ED; /* jb: below (unsigned <) */

loc_00552816: ;
    eax = eax | 0xFFFFFFFFu;

loc_00552819: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00552825
 * Original: 0x00552825 - 0x0055283D (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00552825(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00552825: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx + 0x40), edi - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(MEM32(ebx + 0x40), edi)) { sub_0055283D(); return; } /* jne: not equal / not zero */

loc_00552836: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00552A63(); return; /* tail jmp 0x00552A63 */

}

/**
 * sub_00552A68
 * Original: 0x00552A68 - 0x00552AEB (131 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00552A68(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00552A68: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    eax = eax << 5;
    edi = eax + ecx + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(edi + 8) = 0xFFFF;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0); sub_0054E8B5(); /* call 0x0054E8B5 */

loc_00552A91: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_00552AC8; /* jl: less (signed <) */

loc_00552A98: ;
    eax = ZX16(MEM16(esi + 2));
    if (CMP_NE(MEM32(ebp + 0xC), eax)) goto loc_00552AC8; /* jne: not equal / not zero */

loc_00552AA1: ;
    if (CMP_EQ(MEM32(esi + 0x3C), 0)) goto loc_00552AC2; /* je: equal / zero */

loc_00552AA7: ;
    SET_LO16(eax, MEM16(esi));
    if (TEST_Z(HI8(eax), 0x10)) goto loc_00552AB8; /* je: equal / zero */

loc_00552AAF: ;
    SET_LO16(eax, LO16(eax) | 0x8000);
    MEM16(esi) = LO16(eax);
    goto loc_00552AC2;

loc_00552AB8: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00552E26(); /* call 0x00552E26 */

loc_00552AC2: ;
    MEM16(esi + 2) = MEM16(esi + 2) | 0xFFFF;

loc_00552AC8: ;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + 4);
    eax = eax & 0x7FFFFFFF;
    if (CMP_BE(ecx, eax)) goto loc_00552ADF; /* jbe: below or equal (unsigned <=) */

loc_00552ADD: ;
    eax = ecx;

loc_00552ADF: ;
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00552AEB
 * Original: 0x00552AEB - 0x00552E26 (827 bytes, 282 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00552AEB(void)
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

loc_00552AEB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(edi + 0x40);
    eax = eax << 5;
    (void)0; /* cmp MEM32(edi + 0x74), 0 - flags set for next jcc */
    ebx = eax + edx + 0x10;
    esi = ebx + 4;
    eax = MEM32(esi);
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(MEM32(edi + 0x74), 0)) goto loc_00552B1F; /* je: equal / zero */

loc_00552B19: ;
    eax = edi + 0x5C;
    MEM32(ebp + -20) = eax;

loc_00552B1F: ;
    edx = edi + 0x84;
    MEM32(ebx) = 0x8000000Au;
    MEM32(ebx + 8) = 0xAAAA;
    SET_LO16(eax, MEM16(edx));
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00552B56; /* je: equal / zero */

loc_00552B39: ;
    SET_LO16(eax, LO16(eax) | 0x10);
    (void)0; /* cmp MEM32(edi + 0x50), 0 - flags set for next jcc */
    MEM16(edx) = LO16(eax);
    if (CMP_EQ(MEM32(edi + 0x50), 0)) goto loc_00552B56; /* je: equal / zero */

loc_00552B46: ;
    eax = MEM32(edi + 0x68);
    eax = eax - MEM32(edi + 0x70);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) & 0;
    eax = eax - MEM32(edi + 0x6C);
    MEM32(edi + 0x44) = MEM32(edi + 0x44) + eax;

loc_00552B56: ;
    if (CMP_EQ(MEM32(edi + 0x44), 0)) goto loc_00552DF9; /* je: equal / zero */

loc_00552B60: ;
    if (CMP_NE(MEM32(edi + 0x4C), 0)) goto loc_00552BEF; /* jne: not equal / not zero */

loc_00552B6A: ;
    eax = MEM32(edi + 0x48);
    MEM32(ebx + 0x14) = eax;
    eax = edi + 0x80;
    edx = MEM32(eax);
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_00552B8C; /* je: equal / zero */

loc_00552B7D: ;
    if (TEST_Z(edx, edx)) goto loc_00552B8C; /* je: equal / zero */

loc_00552B81: ;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + edx;
    edx = MEM32(eax);
    MEM32(edi + 0x48) = MEM32(edi + 0x48) + edx;
    MEM32(edi + 0x44) = MEM32(edi + 0x44) - edx;

loc_00552B8C: ;
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(edi + 0x44);
    if (CMP_AE(eax, MEM32(ecx + 4))) goto loc_00552BCC; /* jae: above or equal (unsigned >=) */

loc_00552B97: ;
    MEM32(esi) = eax;
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 0x74);
    edx = MEM32(edx + 0x1C);
    edx = MEM32(edx + 0x20);
    eax = edx + eax + -1;
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 0x74);
    esi = MEM32(edx + 0x1C);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x20));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x20)); }
    esi = MEM32(ebp + -12);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 0x74);
    edx = MEM32(edx + 0x1C);
    edx = MEM32(edx + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM32(ecx + 4) = edx;

loc_00552BCC: ;
    PUSH32(esp, MEM32(ecx + 4));
    eax = ebx + 0xC;
    PUSH32(esp, MEM32(ecx));
    ebx = MEM32(edi + 0x74);
    PUSH32(esp, 0); sub_005541C1(); /* call 0x005541C1 */

loc_00552BDC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_00552C47; /* jl: less (signed <) */

loc_00552BE3: ;
    eax = MEM32(esi);
    MEM32(edi + 0x44) = MEM32(edi + 0x44) - eax;
    eax = MEM32(esi);
    MEM32(edi + 0x48) = MEM32(edi + 0x48) + eax;
    goto loc_00552C47;

loc_00552BEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(ecx + 8) = esi;
    eax = MEM32(edi + 0x4C);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_00552BFE: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_00552C31; /* jl: less (signed <) */

loc_00552C05: ;
    eax = MEM32(edi + 0x4C);
    ecx = MEM32(eax);
    edx = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x20), _icall_esp); /* indirect call */
    }

loc_00552C12: ;
    eax = MEM32(edi + 0x4C);
    ecx = MEM32(eax);
    edx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x1C), _icall_esp); /* indirect call */
    }

loc_00552C23: ;
    eax = MEM32(ebp + -12);
    eax = eax - MEM32(ebp + -16);
    MEM32(edi + 0x44) = eax;
    eax = MEM32(ebp + -8);
    goto loc_00552C36;

loc_00552C31: ;
    eax = MEM32(ebp + -8);
    MEM32(esi) = eax;

loc_00552C36: ;
    if (CMP_AE(MEM32(esi), eax)) goto loc_00552C47; /* jae: above or equal (unsigned >=) */

loc_00552C3A: ;
    MEM32(edi + 0x44) = MEM32(edi + 0x44) & 0;
    MEM32(ebx + 8) = 0xFFFF;
    MEM32(esi) = eax;

loc_00552C47: ;
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(edi + 0x44), esi - flags set for next jcc */
    ecx = 0x800;
    if (CMP_EQ(MEM32(edi + 0x44), esi)) goto loc_00552C5C; /* je: equal / zero */

loc_00552C53: ;
    if (TEST_Z(MEM16(edi), LO16(ecx))) goto loc_00552E1C; /* je: equal / zero */

loc_00552C5C: ;
    if (CMP_EQ(MEM32(edi + 0x50), esi)) goto loc_00552C66; /* je: equal / zero */

loc_00552C61: ;
    if (TEST_Z(MEM16(edi), LO16(ecx))) goto loc_00552CA2; /* je: equal / zero */

loc_00552C66: ;
    SET_LO16(eax, MEM16(edi));
    if (TEST_Z(LO16(ecx), LO16(eax))) goto loc_00552C78; /* je: equal / zero */

loc_00552C6E: ;
    SET_LO16(eax, LO16(eax) & 0xF7FF);
    MEM16(edi) = LO16(eax);
    MEM32(edi + 0x50) = esi;

loc_00552C78: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi));
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00552E1C; /* je: equal / zero */

loc_00552C85: ;
    SET_LO16(eax, LO16(eax) | 0x1400);
    (void)0; /* test HI8(eax), 2 - flags set for next jcc */
    MEM16(edi) = LO16(eax);
    if (TEST_Z(HI8(eax), 2)) goto loc_00552CA2; /* je: equal / zero */

loc_00552C91: ;
    SET_LO16(eax, LO16(eax) & 0xFDFF);
    MEM16(edi) = LO16(eax);
    eax = MEM32(0x555774);
    PUSH32(esp, 0); sub_00554B3E(); /* call 0x00554B3E */

loc_00552CA2: ;
    eax = edi;
    PUSH32(esp, 0); sub_005526DA(); /* call 0x005526DA */

loc_00552CA9: ;
    if (TEST_Z(eax, eax)) goto loc_00552E1C; /* je: equal / zero */

loc_00552CB1: ;
    eax = MEM32(edi + 0x50);
    if (CMP_NE(eax, esi)) goto loc_00552CBD; /* jne: not equal / not zero */

loc_00552CB8: ;
    eax = MEM32(edi + 0x58);
    goto loc_00552CC5;

loc_00552CBD: ;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00552CC8; /* je: equal / zero */

loc_00552CC4: ;
    eax--;

loc_00552CC5: ;
    MEM32(edi + 0x50) = eax;

loc_00552CC8: ;
    eax = MEM32(edi + 0x78);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00552D6A; /* je: equal / zero */

loc_00552CD4: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x44);
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054CBC8(); /* call 0x0054CBC8 */

loc_00552CEC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00552D01; /* jne: not equal / not zero */

loc_00552CF3: ;
    MEM8(edi + 1) = MEM8(edi + 1) | 0x10;
    eax = 0x80004005u;
    goto loc_00552E1F;

loc_00552D01: ;
    ecx = MEM32(ebx + 0x44);
    eax = ZX16(MEM16(eax + 2));
    esi = MEM32(ecx + 0x14);
    PUSH32(esp, 0); sub_0054D481(); /* call 0x0054D481 */

loc_00552D10: ;
    esi = MEM32(ebp + 0xC);
    edi = eax;
    eax = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(eax));
    MEM16(esi + 0x56) = LO16(eax);
    eax = MEM32(esi + 0x74);
    if (CMP_EQ(eax, edi)) goto loc_00552D39; /* je: equal / zero */

loc_00552D26: ;
    PUSH32(esp, MEM32(ebx + 0x44));
    PUSH32(esp, 0); sub_005542CC(); /* call 0x005542CC */

loc_00552D2E: ;
    MEM32(esi + 0x74) = edi;
    ebx = MEM32(ebx + 0x44);
    PUSH32(esp, 0); sub_00554274(); /* call 0x00554274 */

loc_00552D39: ;
    ecx = ZX16(MEM16(esi + 0x56));
    eax = esi + 0x5C;
    PUSH32(esp, ecx);
    edx = edi;
    PUSH32(esp, 0); sub_00554399(); /* call 0x00554399 */

loc_00552D48: ;
    ebx = eax;
    eax = ZX16(MEM16(esi + 0x56));
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_00554184(); /* call 0x00554184 */

loc_00552D56: ;
    edi = MEM32(ebp + 0xC);
    MEM32(esi + 0x3C) = eax;
    if (CMP_NE(MEM32(ebx + 0x14), 0)) goto loc_00552D6D; /* jne: not equal / not zero */

loc_00552D62: ;
    eax = MEM32(ebx + 0xC);
    MEM32(ebx + 0x14) = eax;
    goto loc_00552D6D;

loc_00552D6A: ;
    ebx = MEM32(ebp + -20);

loc_00552D6D: ;
    if (CMP_NE(MEM32(edi + 0x50), 0)) goto loc_00552D7B; /* jne: not equal / not zero */

loc_00552D73: ;
    eax = MEM32(ebx + 0xC);
    eax = eax - MEM32(ebx + 0x10);
    goto loc_00552D7E;

loc_00552D7B: ;
    eax = MEM32(ebx + 0x14);

loc_00552D7E: ;
    esi = MEM32(edi + 0x74);
    MEM32(edi + 0x44) = eax;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ebx + 0x10);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x20));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x20)); }
    eax = MEM32(edi + 0x4C);
    MEM32(edi + 0x44) = MEM32(edi + 0x44) + edx;
    if (TEST_Z(eax, eax)) goto loc_00552DA4; /* je: equal / zero */

loc_00552D99: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x18), _icall_esp); /* indirect call */
    }

loc_00552D9F: ;
    MEM8(edi) = MEM8(edi) | 4;
    goto loc_00552E1C;

loc_00552DA4: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x20);
    eax = eax + MEM32(ebx + 8);
    ecx = MEM32(ebx + 0x10);
    eax = eax + ecx;
    MEM32(edi + 0x48) = eax;
    ecx = MEM32(esi + 0x1C);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x20));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x20)); }
    MEM32(edi + 0x48) = eax;
    ecx = MEM32(esi + 0x1C);
    ecx = MEM32(ecx + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    (void)0; /* cmp MEM32(edi + 0x3C), 0 - flags set for next jcc */
    MEM32(edi + 0x48) = ecx;
    if (CMP_EQ(MEM32(edi + 0x3C), 0)) goto loc_00552E1C; /* je: equal / zero */

loc_00552DD2: ;
    PUSH32(esp, 1);
    ecx = edi + 0x5C;
    eax = esi;
    PUSH32(esp, 0); sub_0055412C(); /* call 0x0055412C */

loc_00552DDE: ;
    ecx = MEM32(edi + 0x44);
    MEM32(edi + 0x48) = MEM32(edi + 0x48) + eax;
    if (CMP_AE(ecx, eax)) goto loc_00552DEA; /* jae: above or equal (unsigned >=) */

loc_00552DE8: ;
    eax = ecx;

loc_00552DEA: ;
    ecx = ecx - eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM32(edi + 0x44) = ecx;
    MEM16(edi + 2) = LO16(eax);
    goto loc_00552E1C;

loc_00552DF9: ;
    MEM32(ebx + 8) = 0xDEAD;
    PUSH32(esp, 0); sub_004C5248(); /* call 0x004C5248 */

loc_00552E05: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, 0); sub_0054BBC0(); /* call 0x0054BBC0 */

loc_00552E0D: ;
    if (TEST_NZ(eax, eax)) goto loc_00552E14; /* jne: not equal / not zero */

loc_00552E11: ;
    MEM8(edi) = MEM8(edi) & 0xF7;

loc_00552E14: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0); sub_0054E95D(); /* call 0x0054E95D */

loc_00552E1C: ;
    eax = MEM32(ebp + -4);

loc_00552E1F: ;
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
 * sub_00552E26
 * Original: 0x00552E26 - 0x00552E61 (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00552E26(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00552E26: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, 1);
    ecx = esi + 0x5C;
    PUSH32(esp, 0); sub_0055412C(); /* call 0x0055412C */

loc_00552E3D: ;
    edx = eax;
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), eax - flags set for next jcc */
    POP32(esp, ecx);
    edi = ebp + -24;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_EQ(MEM32(ebp + 8), eax)) { sub_00552E61(); return; } /* je: equal / zero */

loc_00552E4E: ;
    eax = MEM32(esi + 0x3C);
    if (CMP_NE(MEM32(eax + 0x10), 0x103)) { sub_00552E61(); return; } /* jne: not equal / not zero */

loc_00552E5A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00552EF9(); return; /* tail jmp 0x00552EF9 */

}

/**
 * sub_00552EFF
 * Original: 0x00552EFF - 0x005531AD (686 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00552EFF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00552EFF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    SET_LO16(edx, MEM16(edi + 0x30));
    ebx = 0; /* xor self */
    (void)0; /* cmp LO16(edx), 8 - flags set for next jcc */
    MEM32(ebp + -16) = ebx;
    if (CMP_EQ(LO16(edx), 8)) goto loc_005531A7; /* je: equal / zero */

loc_00552F1D: ;
    if (CMP_EQ(LO16(edx), 1)) goto loc_005531A7; /* je: equal / zero */

loc_00552F27: ;
    eax = MEM32(edi + 0x44);
    ecx = ZX16(MEM16(eax + 0x18));
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 4);
    ecx = ecx + ecx * 4;
    eax = ZX8(MEM8(eax + ecx * 4 + 0x38));
    eax = eax >> 2;
    eax = eax & 1;
    PUSH32(esp, esi);
    MEM32(ebp + -20) = eax;
    if ((eax == 0)) goto loc_00552F67; /* je: equal / zero */

loc_00552F48: ;
    if (CMP_EQ(LO16(edx), 7)) goto loc_00552F67; /* je: equal / zero */

loc_00552F4E: ;
    esi = edi;
    PUSH32(esp, 0); sub_0055389F(); /* call 0x0055389F */

loc_00552F55: ;
    if (TEST_Z(eax, eax)) goto loc_00552F67; /* je: equal / zero */

loc_00552F59: ;
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0); sub_005513DB(); /* call 0x005513DB */

loc_00552F62: ;
    goto loc_005531A6;

loc_00552F67: ;
    eax = MEM32(edi + 0x10);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    if (CMP_BE(MEM8(eax + 8), 0)) goto loc_0055312A; /* jbe: below or equal (unsigned <=) */

loc_00552F78: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;

loc_00552F7C: ;
    esi = MEM32(edi + 0x34);
    esi = esi + MEM32(ebp + -8);
    if (CMP_NE(MEM16(edi + 0x30), 7)) goto loc_00552FFD; /* jne: not equal / not zero */

loc_00552F89: ;
    ebx = MEM32(edi + 0x38);
    SET_LO16(eax, MEM16(esi));
    ebx = ebx >> 1;
    ebx = ebx & 1;
    if (TEST_NZ(LO8(eax), 0x40)) goto loc_00552FFD; /* jne: not equal / not zero */

loc_00552F98: ;
    SET_LO16(eax, LO16(eax) | 0x40);
    (void)0; /* cmp MEM8(esi + 0x19), 0 - flags set for next jcc */
    MEM16(esi) = LO16(eax);
    if (CMP_EQ(MEM8(esi + 0x19), 0)) goto loc_00552FB4; /* je: equal / zero */

loc_00552FA5: ;
    eax = MEM32(0x555774);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00554A63(); /* call 0x00554A63 */

loc_00552FB4: ;
    ecx = MEM32(esi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00552FFD; /* je: equal / zero */

loc_00552FBB: ;
    MEM8(esi) = MEM8(esi) & 0xEF;
    SET_LO16(eax, MEM16(esi));
    if (TEST_Z(LO8(eax), 0x20)) goto loc_00552FFA; /* je: equal / zero */

loc_00552FC5: ;
    SET_LO16(eax, LO16(eax) & 0xFFDF);
    MEM16(esi) = LO16(eax);
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ebx, ebx)) ? 1 : 0); /* sete */
    PUSH32(esp, 0); sub_0054E425(); /* call 0x0054E425 */

loc_00552FD8: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(MEM32(eax + 0x20), 0)) goto loc_00552FFD; /* je: equal / zero */

loc_00552FE1: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0054E86F(); /* call 0x0054E86F */

loc_00552FEA: ;
    if (TEST_Z(MEM8(ebp + -2), 2)) goto loc_00552FFD; /* je: equal / zero */

loc_00552FF0: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0); sub_0054E510(); /* call 0x0054E510 */

loc_00552FF8: ;
    goto loc_00552FFD;

loc_00552FFA: ;
    ebx = 0; /* xor self */
    ebx++;

loc_00552FFD: ;
    if (TEST_NZ(MEM8(esi), 0x80)) goto loc_0055310D; /* jne: not equal / not zero */

loc_00553006: ;
    if (TEST_NZ(ebx, ebx)) goto loc_00553107; /* jne: not equal / not zero */

loc_0055300E: ;
    SET_LO16(eax, MEM16(edi + 0x30));
    if (CMP_EQ(LO16(eax), 6)) goto loc_00553110; /* je: equal / zero */

loc_0055301C: ;
    if (CMP_EQ(LO16(eax), 5)) goto loc_00553110; /* je: equal / zero */

loc_00553026: ;
    if (CMP_EQ(LO16(eax), 4)) goto loc_00553110; /* je: equal / zero */

loc_00553030: ;
    eax = esi + 0xC;
    if (CMP_NE(MEM32(eax), eax)) goto loc_00553110; /* jne: not equal / not zero */

loc_0055303B: ;
    eax = MEM32(esi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_0055305B; /* je: equal / zero */

loc_00553042: ;
    SET_LO8(ecx, MEM8(esi + 0x19));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0055305B; /* je: equal / zero */

loc_00553049: ;
    eax = MEM32(eax);
    ecx = ZX8(LO8(ecx));
    eax = eax & 0xFF;
    if (CMP_B(ecx, eax)) goto loc_00553110; /* jb: below (unsigned <) */

loc_0055305B: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0055306F; /* je: equal / zero */

loc_00553062: ;
    PUSH32(esp, 0); sub_0054E1D8(); /* call 0x0054E1D8 */

loc_00553067: ;
    if (TEST_NZ(eax, eax)) goto loc_00553110; /* jne: not equal / not zero */

loc_0055306F: ;
    SET_LO16(eax, MEM16(esi));
    if (TEST_NZ(LO8(eax), 4)) goto loc_00553110; /* jne: not equal / not zero */

loc_0055307A: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_005530B2; /* je: equal / zero */

loc_0055307E: ;
    if (TEST_Z(LO8(eax), 0x20)) goto loc_00553095; /* je: equal / zero */

loc_00553082: ;
    if (CMP_NE(MEM32(ebp + -20), 0)) goto loc_005530B2; /* jne: not equal / not zero */

loc_00553088: ;
    eax = esi;
    PUSH32(esp, 0); sub_005526DA(); /* call 0x005526DA */

loc_0055308F: ;
    if (TEST_NZ(eax, eax)) goto loc_00553110; /* jne: not equal / not zero */

loc_00553093: ;
    goto loc_005530B2;

loc_00553095: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, 0); sub_0054E86F(); /* call 0x0054E86F */

loc_005530A1: ;
    if (TEST_Z(MEM8(ebp + -2), 8)) goto loc_00553082; /* je: equal / zero */

loc_005530A7: ;
    eax = MEM32(esi + 4);
    MEM8(esi) = MEM8(esi) & 0xF7;
    PUSH32(esp, 0); sub_0054E8EF(); /* call 0x0054E8EF */

loc_005530B2: ;
    ecx = MEM32(esi + 0x40);
    if (TEST_Z(ecx, ecx)) goto loc_005530C2; /* je: equal / zero */

loc_005530B9: ;
    PUSH32(esp, 0); sub_0054BBC0(); /* call 0x0054BBC0 */

loc_005530BE: ;
    if (TEST_NZ(eax, eax)) goto loc_00553110; /* jne: not equal / not zero */

loc_005530C2: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_00553107; /* je: equal / zero */

loc_005530C9: ;
    if (CMP_EQ(MEM32(eax + 0x1C), 0)) goto loc_00553107; /* je: equal / zero */

loc_005530CF: ;
    SET_LO16(ecx, MEM16(esi));
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00553107; /* je: equal / zero */

loc_005530D7: ;
    if (TEST_NZ(HI8(ecx), 4)) goto loc_00553107; /* jne: not equal / not zero */

loc_005530DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0054E772(); /* call 0x0054E772 */

loc_005530E3: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 4;
    SET_LO16(eax, MEM16(esi));
    if (TEST_Z(HI8(eax), 2)) goto loc_00553110; /* je: equal / zero */

loc_005530EF: ;
    SET_LO16(eax, LO16(eax) & 0xFDFF);
    MEM16(esi) = LO16(eax);
    eax = MEM32(0x555774);
    edi = esi;
    PUSH32(esp, 0); sub_00554B3E(); /* call 0x00554B3E */

loc_00553102: ;
    edi = MEM32(ebp + 8);
    goto loc_00553110;

loc_00553107: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005531E1(); /* call 0x005531E1 */

loc_0055310D: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;

loc_00553110: ;
    eax = MEM32(edi + 0x10);
    eax = ZX8(MEM8(eax + 8));
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x88;
    if (CMP_B(MEM32(ebp + -12), eax)) goto loc_00552F7C; /* jb: below (unsigned <) */

loc_0055312A: ;
    eax = MEM32(edi + 0x10);
    eax = ZX8(MEM8(eax + 8));
    (void)0; /* cmp MEM32(ebp + -16), eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + -16), eax)) goto loc_005531A1; /* jne: not equal / not zero */

loc_00553137: ;
    esi = MEM32(edi + 0x44);
    PUSH32(esp, 0); sub_0055010B(); /* call 0x0055010B */

loc_0055313F: ;
    MEM32(edi + 0x40) = MEM32(edi + 0x40) + 1;
    if (CMP_EQ(MEM32(edi), edi)) goto loc_0055314D; /* je: equal / zero */

loc_00553146: ;
    eax = edi;
    PUSH32(esp, 0); sub_005547D0(); /* call 0x005547D0 */

loc_0055314D: ;
    eax = MEM32(edi + 0x10);
    eax = ZX8(MEM8(eax + 9));
    edx = MEM32(0x555774);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054BB82(); /* call 0x0054BB82 */

loc_00553160: ;
    if (TEST_Z(eax, eax)) goto loc_0055316B; /* je: equal / zero */

loc_00553164: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00551192(); /* call 0x00551192 */

loc_0055316B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    POP32(esp, ebx);
    esi = edi;
    PUSH32(esp, 0); sub_0055324F(); /* call 0x0055324F */

loc_00553177: ;
    eax = MEM32(edi + 0x44);
    eax = MEM32(eax + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00553186; /* je: equal / zero */

loc_00553181: ;
    PUSH32(esp, 0); sub_0054DFC5(); /* call 0x0054DFC5 */

loc_00553186: ;
    esi = MEM32(edi + 0x3C);
    eax = edi;
    PUSH32(esp, 0); sub_00550DD1(); /* call 0x00550DD1 */

loc_00553190: ;
    if (TEST_Z(esi, esi)) goto loc_005531A6; /* je: equal / zero */

loc_00553194: ;
    if (CMP_NE(MEM32(esi + 0x5C), 2)) goto loc_005531A6; /* jne: not equal / not zero */

loc_0055319A: ;
    PUSH32(esp, 0); sub_0054F65D(); /* call 0x0054F65D */

loc_0055319F: ;
    goto loc_005531A6;

loc_005531A1: ;
    PUSH32(esp, 0); sub_00551B0C(); /* call 0x00551B0C */

loc_005531A6: ;
    POP32(esp, esi);

loc_005531A7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005531AD
 * Original: 0x005531AD - 0x005531E1 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005531AD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005531AD: ;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_BE(MEM8(eax + 8), LO8(ebx))) goto loc_005531DB; /* jbe: below or equal (unsigned <=) */

loc_005531B8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */

loc_005531BC: ;
    esi = MEM32(edi + 0x34);
    esi = esi + ebp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_005531E1(); /* call 0x005531E1 */

loc_005531C7: ;
    eax = MEM32(edi + 0x10);
    eax = ZX8(MEM8(eax + 8));
    ebx++;
    ebp = ebp + 0x88;
    if (CMP_B(ebx, eax)) goto loc_005531BC; /* jb: below (unsigned <) */

loc_005531D9: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_005531DB: ;
    MEM32(edi + 0x38) = MEM32(edi + 0x38) & 0xFFFFFFFBu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005531E1
 * Original: 0x005531E1 - 0x0055324F (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005531E1(void)
{
    int _flags = 0; /* fallback flag var */

loc_005531E1: ;
    eax = MEM32(0x555774);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00554A63(); /* call 0x00554A63 */

loc_005531F1: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_00553200; /* je: equal / zero */

loc_005531F8: ;
    PUSH32(esp, 0); sub_0054DFC5(); /* call 0x0054DFC5 */

loc_005531FD: ;
    MEM32(esi + 4) = edi;

loc_00553200: ;
    if (CMP_EQ(MEM32(esi + 0x40), edi)) goto loc_00553230; /* je: equal / zero */

loc_00553205: ;
    eax = MEM32(esi + 0x4C);
    if (CMP_EQ(eax, edi)) goto loc_00553212; /* je: equal / zero */

loc_0055320C: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_00553212: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(0x555774);
    ecx = ecx + 0x24;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    MEM32(esi + 0x40) = edi;

loc_00553230: ;
    eax = MEM32(esi + 0x74);
    if (CMP_EQ(eax, edi)) goto loc_00553246; /* je: equal / zero */

loc_00553237: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, MEM32(ecx + 0x44));
    PUSH32(esp, 0); sub_005542CC(); /* call 0x005542CC */

loc_00553243: ;
    MEM32(esi + 0x74) = edi;

loc_00553246: ;
    MEM16(esi) = 0x80;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055324F
 * Original: 0x0055324F - 0x005532D8 (137 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055324F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055324F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00553261: ;
    edi = 0; /* xor self */
    edi++;
    eax = ebx;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_005532A3; /* je: equal / zero */

loc_0055326A: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_00553298; /* je: equal / zero */

loc_0055326E: ;
    eax--;
    if ((eax == 0)) goto loc_00553298; /* je: equal / zero */

loc_00553271: ;
    eax--;
    if ((eax == 0)) goto loc_00553285; /* je: equal / zero */

loc_00553274: ;
    eax--;
    if ((eax != 0)) goto loc_005532B1; /* jne: not equal / not zero */

loc_00553277: ;
    eax = ZX16(MEM16(esi + 0x30));
    if (CMP_L(eax, 7)) goto loc_005532B1; /* jl: less (signed <) */

loc_00553280: ;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    goto loc_005532AF;

loc_00553285: ;
    eax = ZX16(MEM16(esi + 0x30));
    if (CMP_L(eax, 4)) goto loc_005532B1; /* jl: less (signed <) */

loc_0055328E: ;
    if (CMP_LE(eax, 5)) goto loc_0055329F; /* jle: less or equal (signed <=) */

loc_00553293: ;
    (void)0; /* cmp eax, 7 - flags set for next jcc */
    goto loc_0055329D;

loc_00553298: ;
    (void)0; /* cmp MEM16(esi + 0x30), 7 - flags set for next jcc */

loc_0055329D: ;
    if (CMP_NE(MEM16(esi + 0x30), 7)) goto loc_005532B1; /* jne: not equal / not zero */

loc_0055329F: ;
    edi = 0; /* xor self */
    goto loc_005532C2;

loc_005532A3: ;
    eax = ZX16(MEM16(esi + 0x30));
    if (CMP_L(eax, 4)) goto loc_005532B1; /* jl: less (signed <) */

loc_005532AC: ;
    (void)0; /* cmp eax, 5 - flags set for next jcc */

loc_005532AF: ;
    if (CMP_LE(eax, 5)) goto loc_0055329F; /* jle: less or equal (signed <=) */

loc_005532B1: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_005532BE; /* je: equal / zero */

loc_005532B8: ;
    ecx = ZX16(MEM16(esi + 0x30));
    MEM32(eax) = ecx;

loc_005532BE: ;
    MEM16(esi + 0x30) = LO16(ebx);

loc_005532C2: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_005532D1; /* je: equal / zero */

loc_005532C8: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_005532D1: ;
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005532D8
 * Original: 0x005532D8 - 0x005534CA (498 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005532D8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005532D8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 0x48);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = 1;
    MEM32(esi + 0x7C) = eax;
    if (CMP_EQ(eax, ecx)) goto loc_005534C7; /* je: equal / zero */

loc_005532FE: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = ebp + -8;
    edi = ebp + -4;
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0); sub_00553532(); /* call 0x00553532 */

loc_0055330F: ;
    if (TEST_S(eax, eax)) goto loc_005534C6; /* jl: less (signed <) */

loc_00553317: ;
    edi = MEM32(ebp + -4);
    if (TEST_Z(edi, edi)) goto loc_005534C6; /* je: equal / zero */

loc_00553322: ;
    eax = MEM32(esi + 0x70);
    if (TEST_NZ(eax, eax)) goto loc_0055332C; /* jne: not equal / not zero */

loc_00553329: ;
    eax = MEM32(esi + 0x68);

loc_0055332C: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(MEM8(eax + 0xB), 0x18)) goto loc_0055334E; /* je: equal / zero */

loc_00553338: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    eax = esi + 0x60;
    PUSH32(esp, 0); sub_00554493(); /* call 0x00554493 */

loc_00553343: ;
    MEM32(esi + 0x80) = eax;
    goto loc_0055341F;

loc_0055334E: ;
    eax = MEM32(esi + 0x38);
    if (CMP_BE(MEM32(eax) & 0xFF, 0)) goto loc_0055341F; /* jbe: below or equal (unsigned <=) */

loc_0055335D: ;
    eax = MEM32(esi + 0x7C);
    if (CMP_B(eax, edi)) goto loc_0055339E; /* jb: below (unsigned <) */

loc_00553364: ;
    SET_LO16(ecx, MEM16(esi + 0x54));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0055339E; /* je: equal / zero */

loc_0055336D: ;
    edx = 0; /* xor self */
    if (CMP_NE(LO16(ecx), 0xFFFF)) goto loc_0055337D; /* jne: not equal / not zero */

loc_00553376: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    MEM32(esi + 0x7C) = edx;
    goto loc_0055339E;

loc_0055337D: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = ZX16(LO16(ecx));
    if (CMP_B(eax, edx)) goto loc_00553392; /* jb: below (unsigned <) */

loc_00553386: ;
    MEM8(esi) = MEM8(esi) & 0xEF;
    MEM16(esi + 0x54) = MEM16(esi + 0x54) & 0;
    eax = edx;
    goto loc_00553398;

loc_00553392: ;
    ecx = ecx - eax;
    MEM16(esi + 0x54) = LO16(ecx);

loc_00553398: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) - eax;

loc_0055339E: ;
    ecx = MEM32(esi + 0x7C);
    if (CMP_BE(ecx, MEM32(ebp + -8))) goto loc_0055341F; /* jbe: below or equal (unsigned <=) */

loc_005533A6: ;
    ecx = ecx - MEM32(ebp + -8);
    eax = esi + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00554493(); /* call 0x00554493 */

loc_005533B2: ;
    edi = MEM32(esi + 0x50);
    (void)0; /* test edi, edi - flags set for next jcc */
    ecx = eax;
    MEM32(esi + 0x80) = ecx;
    if (TEST_Z(edi, edi)) goto loc_0055341F; /* je: equal / zero */

loc_005533C1: ;
    ebx = MEM32(esi + 0x6C);
    eax = MEM32(ebp + -4);
    eax = eax + ebx;
    if (CMP_B(ecx, eax)) goto loc_0055341F; /* jb: below (unsigned <) */

loc_005533CD: ;
    eax = MEM32(esi + 0x74);
    eax = MEM32(eax + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_005533E0; /* je: equal / zero */

loc_005533D7: ;
    eax = MEM32(eax);
    eax = ~eax;
    eax = eax & 1;
    goto loc_005533E2;

loc_005533E0: ;
    eax = 0; /* xor self */

loc_005533E2: ;
    edx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = ecx;
    if (TEST_Z(eax, eax)) goto loc_005533F9; /* je: equal / zero */

loc_005533EA: ;
    eax = eax - ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    edx = edx + ebx;
    MEM32(esi + 0x80) = edx;
    goto loc_0055341F;

loc_005533F9: ;
    eax = eax - ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    if (CMP_B(eax, edi)) goto loc_00553404; /* jb: below (unsigned <) */

loc_00553402: ;
    eax = edi;

loc_00553404: ;
    if (CMP_EQ(edi, 0xFFFF)) goto loc_00553411; /* je: equal / zero */

loc_0055340C: ;
    edi = edi - eax;
    MEM32(esi + 0x50) = edi;

loc_00553411: ;
    edx = MEM32(ebp + -4);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ecx = ecx - edx;
    MEM32(esi + 0x80) = ecx;

loc_0055341F: ;
    ecx = MEM32(esi + 0x60);
    eax = ecx;
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_NE(LO8(eax), 1)) goto loc_00553436; /* jne: not equal / not zero */

loc_0055342A: ;
    PUSH32(esp, 0x24);
    POP32(esp, eax);
    MEM32(ebp + -12) = 9;
    goto loc_00553443;

loc_00553436: ;
    PUSH32(esp, 0);
    (void)0; /* test ecx, 0x80000000u - flags set for next jcc */
    POP32(esp, eax);
    SET_LO8(eax, (TEST_NZ(ecx, 0x80000000u)) ? 1 : 0); /* setne */
    eax++;

loc_00553443: ;
    edi = MEM32(esi + 0x80);
    ecx = ecx >> 2;
    ecx = ecx & 7;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(esi + 0x74);
    eax = edi;
    eax = eax - edx;
    MEM32(esi + 0x80) = eax;
    edx = MEM32(ecx + 0x1C);
    if (TEST_Z(edx, edx)) goto loc_00553475; /* je: equal / zero */

loc_0055346C: ;
    edx = MEM32(edx);
    edx = ~edx;
    edx = edx & 1;
    goto loc_00553477;

loc_00553475: ;
    edx = 0; /* xor self */

loc_00553477: ;
    if (TEST_Z(edx, edx)) goto loc_00553491; /* je: equal / zero */

loc_0055347B: ;
    if (CMP_B(eax, MEM32(esi + 0x68))) goto loc_005534C6; /* jb: below (unsigned <) */

loc_00553480: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x50), eax - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(esi + 0x50), eax)) ? 1 : 0); /* setne */
    eax--;
    MEM32(esi + 0x80) = eax;
    goto loc_005534C6;

loc_00553491: ;
    if (CMP_B(eax, MEM32(esi + 0x68))) goto loc_0055349F; /* jb: below (unsigned <) */

loc_00553496: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) | 0xFFFFFFFFu;
    goto loc_005534C6;

loc_0055349F: ;
    edx = MEM32(ecx + 0x1C);
    edi = MEM32(edx + 0x20);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + -12));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    MEM32(esi + 0x80) = eax;
    ecx = MEM32(ecx + 0x1C);
    ecx = MEM32(ecx + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -12));
    MEM32(esi + 0x80) = ecx;

loc_005534C6: ;
    POP32(esp, edi);

loc_005534C7: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005534CA
 * Original: 0x005534CA - 0x0055352B (97 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005534CA(void)
{
    int _flags = 0; /* fallback flag var */

loc_005534CA: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(MEM8(ecx + 8), 0)) goto loc_00553524; /* jbe: below or equal (unsigned <=) */

loc_005534D7: ;
    edx = MEM32(eax + 0x34);
    ecx = MEM32(edx + 0x38);
    ecx = MEM32(ecx);
    esi = ecx;
    esi = esi & 0xFF;
    if ((esi == 0)) goto loc_00553524; /* je: equal / zero */

loc_005534E9: ;
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 4);
    ecx = ecx >> 8;
    eax = eax + ecx;
    ecx = ZX16(MEM16(edx + 0x14));
    eax = eax + ecx;

loc_005534FD: ;
    if (CMP_NE(MEM8(eax), 0xE)) goto loc_00553517; /* jne: not equal / not zero */

loc_00553502: ;
    if (CMP_NE(MEM8(eax + 0xC), 0)) goto loc_00553517; /* jne: not equal / not zero */

loc_00553508: ;
    ecx = MEM32(eax + 8);
    if (CMP_B(ecx, MEM32(esp + 0xC))) goto loc_00553517; /* jb: below (unsigned <) */

loc_00553511: ;
    if (CMP_BE(ecx, MEM32(esp + 0x10))) { sub_0055352B(); return; } /* jbe: below or equal (unsigned <=) */

loc_00553517: ;
    ecx = ZX8(MEM8(eax + 4));
    edi++;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    eax = eax + ecx + 8;
    if (CMP_B(edi, esi)) goto loc_005534FD; /* jb: below (unsigned <) */

loc_00553524: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00553532
 * Original: 0x00553532 - 0x00553569 (55 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553532(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00553532: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = edx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(ecx, ebx)) goto loc_0055354A; /* jne: not equal / not zero */

loc_00553547: ;
    ecx = MEM32(eax + 0x34);

loc_0055354A: ;
    if (CMP_EQ(esi, ebx)) goto loc_00553550; /* je: equal / zero */

loc_0055354E: ;
    MEM32(esi) = ebx;

loc_00553550: ;
    edx = MEM32(eax + 0x10);
    if (TEST_Z(MEM8(edx + 0xB), 0x18)) { sub_00553569(); return; } /* je: equal / zero */

loc_00553559: ;
    eax = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0054DD1C(); /* call 0x0054DD1C */

loc_00553567: ;
    g_seh_ebp = ebp; sub_0055359C(); return; /* tail jmp 0x0055359C */

}

/**
 * sub_005535A2
 * Original: 0x005535A2 - 0x0055361B (121 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005535A2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005535A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(edi + 0x10);
    (void)0; /* test MEM8(eax + 0xB), 0x18 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(MEM8(eax + 0xB), 0x18)) goto loc_005535D9; /* je: equal / zero */

loc_005535B1: ;
    eax = MEM32(edi + 0x44);
    esi = MEM32(eax + 0x14);
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0054DD1C(); /* call 0x0054DD1C */

loc_005535C4: ;
    if (TEST_S(eax, eax)) { sub_0055361B(); return; } /* jl: less (signed <) */

loc_005535C8: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(edi + 0x58);
    eax = eax + MEM32(edi + 0x48);
    MEM32(ebx) = MEM32(ebx) - eax;
    g_seh_ebp = ebp; sub_00553624(); return; /* tail jmp 0x00553624 */

loc_005535D9: ;
    if (CMP_BE(MEM8(eax + 8), 0)) { sub_0055361B(); return; } /* jbe: below or equal (unsigned <=) */

loc_005535DF: ;
    esi = MEM32(0x555774);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055485B(); /* call 0x0055485B */

loc_005535EE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2710);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00553600: ;
    PUSH32(esp, MEM32(ebp + 8));
    edx = MEM32(edi + 0x34);
    ecx = eax;
    eax = MEM32(edi + 0x44);
    eax = MEM32(eax + 0x14);
    ecx = ecx - MEM32(edi + 0x58);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0054DB6D(); /* call 0x0054DB6D */

loc_00553619: ;
    g_seh_ebp = ebp; sub_00553626(); return; /* tail jmp 0x00553626 */

}

/**
 * sub_0055362B
 * Original: 0x0055362B - 0x00553889 (606 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055362B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0055362B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x34);
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(0x555774);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(eax) = edi;
    eax = ebp + -36;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -24) = edi;
    PUSH32(esp, 0); sub_0055485B(); /* call 0x0055485B */

loc_0055365F: ;
    eax = MEM32(ebp + -36);
    eax = eax - MEM32(ebx + 0x30);
    ecx = MEM32(ebp + -32);
    ecx = ecx - MEM32(ebx + 0x34) - _cf; /* sbb */
    PUSH32(esp, edi);
    PUSH32(esp, 0x2710);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00553678: ;
    ecx = MEM32(0x555774);
    esi = MEM32(ecx + 0x90);
    ecx = ebp + -28;
    MEM32(ebp + -12) = eax;
    esi = esi + eax;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00553691: ;
    edi = ebx + 0xC;
    ecx = MEM32(edi);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(ecx, edi)) goto loc_005536DD; /* je: equal / zero */

loc_0055369D: ;
    goto loc_005536A2;

loc_0055369F: ;
    ecx = MEM32(ebp + -4);

loc_005536A2: ;
    eax = MEM32(ecx + 0x14);
    if (CMP_NE(MEM8(eax), 0xE)) goto loc_005536D4; /* jne: not equal / not zero */

loc_005536AA: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = ZX16(MEM16(ecx + 0xA));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00553A82(); /* call 0x00553A82 */

loc_005536C4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebp + -4);
    if (TEST_Z(eax, eax)) goto loc_005536D4; /* je: equal / zero */

loc_005536CB: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = 1;

loc_005536D4: ;
    ecx = MEM32(ecx);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(ecx, edi)) goto loc_0055369F; /* jne: not equal / not zero */

loc_005536DD: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + -24), edi)) goto loc_005536ED; /* je: equal / zero */

loc_005536E4: ;
    SET_LO8(ecx, MEM8(ebp + -28));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_005536ED: ;
    eax = MEM32(ebp + 0x1C);
    if (CMP_NE(MEM32(eax), edi)) goto loc_0055387F; /* jne: not equal / not zero */

loc_005536F8: ;
    if (CMP_EQ(MEM16(ebx + 0x54), LO16(edi))) goto loc_0055384C; /* je: equal / zero */

loc_00553702: ;
    eax = MEM32(ebx + 0x38);
    (void)0; /* test MEM32(eax), 0xFF - flags set for next jcc */
    MEM32(ebp + -24) = eax;
    if (CMP_BE(MEM32(eax) & 0xFF, 0)) goto loc_00553831; /* jbe: below or equal (unsigned <=) */

loc_00553714: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x44);
    eax = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054D92E(); /* call 0x0054D92E */

loc_0055372D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (TEST_S(eax, eax)) goto loc_00553831; /* jl: less (signed <) */

loc_00553738: ;
    eax = MEM32(ebp + -4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00553831; /* je: equal / zero */

loc_00553744: ;
    if (TEST_Z(eax, eax)) goto loc_00553831; /* je: equal / zero */

loc_0055374C: ;
    if (CMP_EQ(MEM32(edi + 0x48), 0)) goto loc_00553789; /* je: equal / zero */

loc_00553752: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2710);
    PUSH32(esp, MEM32(ebp + -32));
    MEM32(ebp + -16) = eax;
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0055376A: ;
    eax = eax - MEM32(edi + 0x4C);
    edx = 0; /* xor self */
    eax = eax + MEM32(ebp + -16);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    edx = 0; /* xor self */
    ecx = eax;
    eax = MEM32(ebp + -16);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    eax = MEM32(ebp + -4);
    if (CMP_NE(ecx, eax)) goto loc_00553789; /* jne: not equal / not zero */

loc_00553786: ;
    eax = eax - MEM32(ebp + -12);

loc_00553789: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x1C);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00553839; /* jne: not equal / not zero */

loc_0055379C: ;
    SET_LO16(eax, MEM16(ebp + -16));
    if (CMP_AE(LO16(eax), MEM16(ebx + 0x54))) goto loc_00553831; /* jae: above or equal (unsigned >=) */

loc_005537AA: ;
    if (TEST_Z(esi, esi)) goto loc_005537BA; /* je: equal / zero */

loc_005537AE: ;
    if (CMP_BE(esi, MEM32(ebp + -4))) goto loc_005537B8; /* jbe: below or equal (unsigned <=) */

loc_005537B3: ;
    esi = esi - MEM32(ebp + -4);
    goto loc_005537BA;

loc_005537B8: ;
    esi = 0; /* xor self */

loc_005537BA: ;
    eax = MEM32(ebp + -24);
    edi = MEM32(eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x44);
    eax = MEM32(eax + 0x14);
    edi = edi >> 8;
    edi = edi + MEM32(eax + 4);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_005537D2: ;
    if (CMP_NE(MEM8(edi), 0xE)) goto loc_005537FD; /* jne: not equal / not zero */

loc_005537D7: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = edi;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00553A82(); /* call 0x00553A82 */

loc_005537F0: ;
    if (TEST_Z(eax, eax)) goto loc_005537FD; /* je: equal / zero */

loc_005537F4: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = 1;

loc_005537FD: ;
    eax = ZX8(MEM8(edi + 4));
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    edi = edi + eax + 8;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax);
    eax = eax & 0xFF;
    if (CMP_B(MEM32(ebp + -12), eax)) goto loc_005537D2; /* jb: below (unsigned <) */

loc_00553817: ;
    eax = MEM32(ebp + 0x1C);
    if (CMP_NE(MEM32(eax), 0)) goto loc_00553825; /* jne: not equal / not zero */

loc_0055381F: ;
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -8) = MEM32(ebp + -8) + ecx;

loc_00553825: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0055379C; /* je: equal / zero */

loc_00553831: ;
    eax = MEM32(ebp + 0x1C);
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00553859; /* je: equal / zero */

loc_00553839: ;
    edi = MEM32(ebp + 0x14);
    eax = MEM32(edi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0055384F; /* je: equal / zero */

loc_00553843: ;
    ecx = MEM32(ebp + -8);
    eax = eax + ecx;
    MEM32(edi) = eax;
    goto loc_0055384F;

loc_0055384C: ;
    edi = MEM32(ebp + 0x14);

loc_0055384F: ;
    eax = MEM32(ebp + 0x1C);
    if (CMP_NE(MEM32(eax), 0)) goto loc_0055387F; /* jne: not equal / not zero */

loc_00553857: ;
    goto loc_0055385C;

loc_00553859: ;
    edi = MEM32(ebp + 0x14);

loc_0055385C: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 1);
    edx = 0; /* xor self */
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00553532(); /* call 0x00553532 */

loc_0055386C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (TEST_S(eax, eax)) goto loc_0055387F; /* jl: less (signed <) */

loc_00553873: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0055387F; /* je: equal / zero */

loc_0055387A: ;
    eax = eax - MEM32(esi + 0x48);
    MEM32(edi) = eax;

loc_0055387F: ;
    eax = MEM32(ebp + -20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00553889
 * Original: 0x00553889 - 0x0055389F (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553889(void)
{

loc_00553889: ;
    eax = MEM32(eax + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2710);
    PUSH32(esp, MEM32(eax + 0x34));
    PUSH32(esp, MEM32(eax + 0x30));
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0055389E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055389F
 * Original: 0x0055389F - 0x005538EA (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055389F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055389F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_BE(MEM8(eax + 8), LO8(ebx))) goto loc_005538E5; /* jbe: below or equal (unsigned <=) */

loc_005538AE: ;
    ecx = MEM32(esi + 0x34);
    eax = ZX8(LO8(ebx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x88);
    eax = MEM32(eax + ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_005538DB; /* je: equal / zero */

loc_005538C2: ;
    if (CMP_EQ(MEM32(eax + 0x20), 0)) goto loc_005538DB; /* je: equal / zero */

loc_005538C8: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0054E86F(); /* call 0x0054E86F */

loc_005538D1: ;
    if (TEST_S(eax, eax)) goto loc_005538DB; /* jl: less (signed <) */

loc_005538D5: ;
    if (TEST_NZ(MEM8(ebp + -2), 4)) { sub_005538EA(); return; } /* jne: not equal / not zero */

loc_005538DB: ;
    eax = MEM32(esi + 0x10);
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_B(LO8(ebx), MEM8(eax + 8))) goto loc_005538AE; /* jb: below (unsigned <) */

loc_005538E5: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005538EF
 * Original: 0x005538EF - 0x0055397C (141 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005538EF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005538EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x44);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax + 4);
    eax = MEM32(esi + 0x10);
    eax = ZX16(MEM16(eax + 0xC));
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    eax = eax + eax * 4;
    edi = edx + eax * 8;
    edi = edi + ecx;
    SET_LO8(ebx, 0); /* xor self */

loc_00553919: ;
    eax = MEM32(esi + 0x10);
    if (CMP_AE(LO8(ebx), MEM8(eax + 8))) goto loc_00553949; /* jae: above or equal (unsigned >=) */

loc_00553921: ;
    ecx = MEM32(esi + 0x34);
    eax = ZX8(LO8(ebx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x88);
    ecx = MEM32(eax + ecx + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00553941; /* je: equal / zero */

loc_00553935: ;
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_0055397C(); /* call 0x0055397C */

loc_0055393E: ;
    MEM32(ebp + -4) = eax;

loc_00553941: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_GE(MEM32(ebp + -4), 0)) goto loc_00553919; /* jge: greater or equal (signed >=) */

loc_00553949: ;
    eax = MEM32(esi + 0x44);
    esi = MEM32(eax + 0x1C);
    if (TEST_Z(esi, esi)) goto loc_0055395E; /* je: equal / zero */

loc_00553953: ;
    edi = ZX8(MEM8(edi + 0x1C));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0054EA0F(); /* call 0x0054EA0F */

loc_0055395E: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_00553975; /* jl: less (signed <) */

loc_00553967: ;
    if (CMP_NE(MEM32(ebp + 8), 0)) goto loc_00553975; /* jne: not equal / not zero */

loc_0055396D: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_00553972: ;
    MEM32(ebp + -4) = eax;

loc_00553975: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055397C
 * Original: 0x0055397C - 0x00553A6B (239 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055397C(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0055397C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x44);
    eax = MEM32(eax + 0x10);
    eax = ZX16(MEM16(eax + 0xC));
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + 0x10);
    eax = eax + eax * 4;
    ebx = edx + eax * 8;
    ebx = ebx + ecx;
    eax = ZX16(MEM16(ebx + 2));
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054EB7B(); /* call 0x0054EB7B */

loc_005539AB: ;
    if (TEST_S(eax, eax)) goto loc_00553A66; /* jl: less (signed <) */

loc_005539B3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054EBC0(); /* call 0x0054EBC0 */

loc_005539BF: ;
    if (TEST_S(eax, eax)) goto loc_00553A66; /* jl: less (signed <) */

loc_005539C7: ;
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebx + 0x1C));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0054EA0F(); /* call 0x0054EA0F */

loc_005539D3: ;
    if (TEST_S(eax, eax)) goto loc_00553A65; /* jl: less (signed <) */

loc_005539DB: ;
    fp_push(MEMF(0x648E84)); /* fld float */
    edi = 0; /* xor self */
    edi++;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0054EBFF(); /* call 0x0054EBFF */

loc_005539EE: ;
    if (TEST_S(eax, eax)) goto loc_00553A65; /* jl: less (signed <) */

loc_005539F2: ;
    fp_push(MEMF(ebx + 8)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0054EC41(); /* call 0x0054EC41 */

loc_005539FF: ;
    if (TEST_S(eax, eax)) goto loc_00553A65; /* jl: less (signed <) */

loc_00553A03: ;
    fp_push(MEMF(ebx + 0xC)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0054EBFF(); /* call 0x0054EBFF */

loc_00553A10: ;
    if (TEST_S(eax, eax)) goto loc_00553A65; /* jl: less (signed <) */

loc_00553A14: ;
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0054EC80(); /* call 0x0054EC80 */

loc_00553A21: ;
    if (TEST_S(eax, eax)) goto loc_00553A65; /* jl: less (signed <) */

loc_00553A25: ;
    fp_push(MEMF(ebx + 0x18)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0054ECC2(); /* call 0x0054ECC2 */

loc_00553A32: ;
    if (TEST_S(eax, eax)) goto loc_00553A65; /* jl: less (signed <) */

loc_00553A36: ;
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0054ED04(); /* call 0x0054ED04 */

loc_00553A43: ;
    if (TEST_S(eax, eax)) goto loc_00553A65; /* jl: less (signed <) */

loc_00553A47: ;
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebx + 0x1D));
    ebx = ebx + 0x1E;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0054ED46(); /* call 0x0054ED46 */

loc_00553A55: ;
    if (TEST_S(eax, eax)) goto loc_00553A65; /* jl: less (signed <) */

loc_00553A59: ;
    if (CMP_NE(MEM32(esp + 0x10), 0)) goto loc_00553A65; /* jne: not equal / not zero */

loc_00553A60: ;
    PUSH32(esp, 0); sub_0054EEA7(); /* call 0x0054EEA7 */

loc_00553A65: ;
    POP32(esp, edi);

loc_00553A66: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00553A6B
 * Original: 0x00553A6B - 0x00553A82 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553A6B(void)
{
    int _flags = 0; /* fallback flag var */

loc_00553A6B: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x3C);
    if (TEST_Z(edi, edi)) goto loc_00553A80; /* je: equal / zero */

loc_00553A73: ;
    PUSH32(esp, 0); sub_0054F62C(); /* call 0x0054F62C */

loc_00553A78: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    MEM8(esi + 0x39) = MEM8(esi + 0x39) & 0xFE;

loc_00553A80: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00553A82
 * Original: 0x00553A82 - 0x00553B15 (147 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553A82(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00553A82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00553B15(); return; } /* jne: not equal / not zero */

loc_00553A96: ;
    ecx = MEM32(esi + 8);
    (void)0; /* cmp ecx, MEM32(ebp + 0x10) - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_B(ecx, MEM32(ebp + 0x10))) { sub_00553B15(); return; } /* jb: below (unsigned <) */

loc_00553AA1: ;
    if (CMP_A(ecx, MEM32(ebp + 0x14))) { sub_00553B15(); return; } /* ja: above (unsigned >) */

loc_00553AA6: ;
    if (TEST_Z(MEM8(esi + 5), 0x20)) goto loc_00553AC5; /* je: equal / zero */

loc_00553AAC: ;
    ecx = ZX16(MEM16(esi + 6));
    eax = eax >> 8;
    edx = 0; /* xor self */
    edi = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = eax;
    if (TEST_Z(edi, edi)) goto loc_00553AC5; /* je: equal / zero */

loc_00553ABF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC));
    edi = edi - eax;

loc_00553AC5: ;
    eax = MEM32(ebp + 8);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC));
    ecx = ecx + MEM32(eax + 0x58);
    eax = MEM32(esi);
    esi = MEM32(ebp + 0x1C);
    eax = eax >> 8;
    ecx = ecx + eax;
    if (CMP_A(ecx, MEM32(esi))) { sub_00553B15(); return; } /* ja: above (unsigned >) */

loc_00553ADF: ;
    eax = MEM32(ebp + 0x18);
    edx = ecx + edi;
    if (CMP_B(edx, eax)) { sub_00553B15(); return; } /* jb: below (unsigned <) */

loc_00553AE9: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edx = MEM32(ebp + 0x20);
    edi = MEM32(ebp + -4);
    MEM32(edx) = edi;
    if (CMP_BE(eax, ecx)) goto loc_00553B0E; /* jbe: below or equal (unsigned <=) */

loc_00553AF5: ;
    if (TEST_Z(ebx, ebx)) goto loc_00553B0E; /* je: equal / zero */

loc_00553AF9: ;
    edx = ebx;
    edx = edx - ecx;
    eax = edx + eax + -1;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = eax + ecx;
    MEM32(esi) = eax;
    goto loc_00553B10;

loc_00553B0E: ;
    MEM32(esi) = ecx;

loc_00553B10: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_00553B17(); return; /* tail jmp 0x00553B17 */

}

/**
 * sub_00553B1E
 * Original: 0x00553B1E - 0x00553B2D (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553B1E(void)
{

loc_00553B1E: ;
    PUSH32(esp, 0x6484A000);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00553B2C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00553B2D
 * Original: 0x00553B2D - 0x00553B6E (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553B2D(void)
{

loc_00553B2D: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    eax = esi + 0x58;
    MEM32(esi + 0x5C) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x50;
    MEM32(esi + 0x54) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x48;
    MEM32(esi + 0x4C) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x40;
    MEM32(esi + 0x44) = eax;
    MEM32(eax) = eax;
    eax = MEM32(0x555774);
    MEM32(esi) = 1;
    PUSH32(esp, 0); sub_0054B434(); /* call 0x0054B434 */

loc_00553B6B: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00553B6E
 * Original: 0x00553B6E - 0x00553BB2 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553B6E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00553B6E: ;
    PUSH32(esp, esi);
    esi = MEM32(0x555774);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0054B458(); /* call 0x0054B458 */

loc_00553B7D: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00553B95; /* je: equal / zero */

loc_00553B84: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0054E5E6(); /* call 0x0054E5E6 */

loc_00553B8D: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 0); sub_0054DFC5(); /* call 0x0054DFC5 */

loc_00553B95: ;
    eax = edi;
    PUSH32(esp, 0); sub_0055400C(); /* call 0x0055400C */

loc_00553B9C: ;
    if (TEST_Z(MEM8(edi + 0x60), 0xC)) goto loc_00553B95; /* je: equal / zero */

loc_00553BA2: ;
    eax = MEM32(edi + 0x1C);
    if (TEST_Z(eax, eax)) { sub_00553BB2(); return; } /* je: equal / zero */

loc_00553BA9: ;
    eax = MEM32(eax);
    eax = ~eax;
    eax = eax & 1;
    g_seh_ebp = ebp; sub_00553BB4(); return; /* tail jmp 0x00553BB4 */

}

/**
 * sub_00553BE9
 * Original: 0x00553BE9 - 0x00553BFC (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553BE9(void)
{
    int _flags = 0; /* fallback flag var */

loc_00553BE9: ;
    MEM32(eax) = MEM32(eax) - 1;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if ((MEM32(eax) != 0)) goto loc_00553BF8; /* jne: not equal / not zero */

loc_00553BF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00553BFC(); /* call 0x00553BFC */

loc_00553BF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00553BFC
 * Original: 0x00553BFC - 0x00553C1D (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553BFC(void)
{
    int _flags = 0; /* fallback flag var */

loc_00553BFC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_00553B6E(); /* call 0x00553B6E */

loc_00553C05: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00553C16; /* je: equal / zero */

loc_00553C0C: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00553B1E(); /* call 0x00553B1E */

loc_00553C15: ;
    POP32(esp, ecx);

loc_00553C16: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00553C1D
 * Original: 0x00553C1D - 0x00553CD1 (180 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553C1D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00553C1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0x48;
    esi = MEM32(edi);
    if (CMP_EQ(esi, edi)) goto loc_00553C72; /* je: equal / zero */

loc_00553C32: ;
    edx = ebx + 0x40;

loc_00553C35: ;
    eax = esi;
    ecx = MEM32(eax);
    ebx = MEM32(eax + 4);
    esi = MEM32(esi);
    MEM32(ecx + 4) = ebx;
    ecx = MEM32(eax + 4);
    ebx = MEM32(eax);
    MEM32(ecx) = ebx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    ecx = 0x103;

loc_00553C52: ;
    if (CMP_EQ(MEM32(eax + 0x10), ecx)) goto loc_00553C52; /* je: equal / zero */

loc_00553C57: ;
    if (CMP_EQ(MEM32(eax + 0x24), ecx)) goto loc_00553C52; /* je: equal / zero */

loc_00553C5C: ;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(eax) = edx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    if (CMP_NE(esi, edi)) goto loc_00553C35; /* jne: not equal / not zero */

loc_00553C6F: ;
    ebx = MEM32(ebp + 8);

loc_00553C72: ;
    if (TEST_NZ(MEM8(ebx + 0x60), 8)) goto loc_00553CCA; /* jne: not equal / not zero */

loc_00553C78: ;
    eax = ebx + 0x40;
    esi = MEM32(eax);
    goto loc_00553CC6;

loc_00553C7F: ;
    edi = esi;
    eax = ZX16(MEM16(edi + 0xC));
    esi = MEM32(esi);
    PUSH32(esp, eax);
    eax = ebp + -24;
    edx = ebx;
    PUSH32(esp, 0); sub_00554399(); /* call 0x00554399 */

loc_00553C92: ;
    eax = MEM32(ebp + -20);
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_EQ(LO8(eax), 1)) goto loc_00553CAB; /* je: equal / zero */

loc_00553C9B: ;
    eax = MEM32(ebp + -20);
    SET_LO8(eax, LO8(eax) & 0x1C);
    if (CMP_A(LO8(eax), 8)) goto loc_00553CAB; /* ja: above (unsigned >) */

loc_00553CA4: ;
    PUSH32(esp, 0x64840014);
    goto loc_00553CB0;

loc_00553CAB: ;
    PUSH32(esp, 0xEE840014u);

loc_00553CB0: ;
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00553CB8: ;
    PUSH32(esp, 0x6484800E);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00553CC3: ;
    eax = ebx + 0x40;

loc_00553CC6: ;
    if (CMP_NE(esi, eax)) goto loc_00553C7F; /* jne: not equal / not zero */

loc_00553CCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00553CD1
 * Original: 0x00553CD1 - 0x00553D3B (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553CD1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00553CD1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    MEM32(esi + 0x60) = MEM32(esi + 0x60) | 4;
    MEM32(esi + 0x7C) = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(eax + 8);
    ecx = ecx + eax;
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(eax + 0x10);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = ecx + eax;
    PUSH32(esp, 1);
    MEM32(esi + 0x20) = ecx;
    ecx = MEM32(0x555774);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_0054BA70(); /* call 0x0054BA70 */

loc_00553D0A: ;
    if (TEST_S(eax, eax)) goto loc_00553D38; /* jl: less (signed <) */

loc_00553D0E: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xBB80);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004C39DF(); /* call 0x004C39DF */

loc_00553D20: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, 0); sub_0054E72C(); /* call 0x0054E72C */

loc_00553D2B: ;
    if (TEST_S(eax, eax)) goto loc_00553D38; /* jl: less (signed <) */

loc_00553D2F: ;
    PUSH32(esp, MEM32(edi));
    eax = esi;
    PUSH32(esp, 0); sub_005540F5(); /* call 0x005540F5 */

loc_00553D38: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00553D3B
 * Original: 0x00553D3B - 0x00553FE3 (680 bytes, 228 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553D3B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00553D3B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    esi = 0; /* xor self */
    (void)0; /* test MEM8(ebx + 0x60), 4 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    if (TEST_NZ(MEM8(ebx + 0x60), 4)) goto loc_00553D98; /* jne: not equal / not zero */

loc_00553D51: ;
    if (CMP_NE(MEM32(ebx + 0x64), esi)) goto loc_00553D98; /* jne: not equal / not zero */

loc_00553D56: ;
    esi = MEM32(ebp + 8);
    edi = ebx + 4;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0x64840008);
    esi = 0x800;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00553D70: ;
    ecx = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    MEM32(ebx + 0x18) = ecx;
    if (((int32_t)eax < 0)) goto loc_00553FDC; /* js: sign (negative) */

loc_00553D89: ;
    PUSH32(esp, esi);
    eax = ebx + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_005541C1(); /* call 0x005541C1 */

loc_00553D93: ;
    goto loc_00553FDC;

loc_00553D98: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(ecx + 8);
    eax = eax + ecx;
    (void)0; /* cmp MEM32(ebx + 0x64), esi - flags set for next jcc */
    MEM32(ebx + 0x1C) = eax;
    if (CMP_NE(MEM32(ebx + 0x64), esi)) goto loc_00553E18; /* jne: not equal / not zero */

loc_00553DA8: ;
    esi = MEM32(eax + 0x20);
    eax = MEM32(ecx + 0x14);
    eax = eax + MEM32(ecx + 0x10);
    edx = 0; /* xor self */
    eax = eax + esi + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)esi);
    if (CMP_BE(edi, 0x800)) goto loc_00553E16; /* jbe: below or equal (unsigned <=) */

loc_00553DC6: ;
    esi = 0x64840008;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00553DD2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00553DD9: ;
    ecx = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    MEM32(ebx + 0x18) = ecx;
    MEM32(ebx + 0x1C) = 0;
    if (((int32_t)eax < 0)) goto loc_00553FDC; /* js: sign (negative) */

loc_00553DF9: ;
    PUSH32(esp, edi);
    eax = ebx + 0x68;
    PUSH32(esp, ecx);
    MEM32(ebx + 0x70) = 0;
    PUSH32(esp, 0); sub_005541C1(); /* call 0x005541C1 */

loc_00553E0A: ;
    MEM32(ebx + 0x60) = MEM32(ebx + 0x60) & 0xFFFFFFFBu;
    MEM32(ebx + 0x64) = edi;
    goto loc_00553FDC;

loc_00553E16: ;
    esi = 0; /* xor self */

loc_00553E18: ;
    eax = MEM32(ecx + 8);
    eax = eax + ecx;
    MEM32(ebx + 0x1C) = eax;
    eax = MEM32(ecx + 0x10);
    eax = eax + ecx;
    MEM32(ebx + 0x20) = eax;
    eax = MEM32(ebx + 0x1C);
    if (TEST_NZ(MEM8(eax + 2), 2)) goto loc_00553FD9; /* jne: not equal / not zero */

loc_00553E35: ;
    (void)0; /* cmp MEM32(eax + 4), esi - flags set for next jcc */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + -20) = esi;
    if (CMP_BE(MEM32(eax + 4), esi)) goto loc_00553FD9; /* jbe: below or equal (unsigned <=) */

loc_00553E47: ;
    MEM32(ebp + -24) = esi;

loc_00553E4A: ;
    if (CMP_L(MEM32(ebp + -4), esi)) goto loc_00553FD9; /* jl: less (signed <) */

loc_00553E53: ;
    edi = MEM32(ebx + 0x20);
    edi = edi + MEM32(ebp + -24);
    PUSH32(esp, 1);
    ecx = edi;
    eax = ebx;
    PUSH32(esp, 0); sub_0055412C(); /* call 0x0055412C */

loc_00553E64: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(edi + 4);
    SET_LO8(eax, LO8(eax) & 3);
    if (CMP_EQ(LO8(eax), 2)) goto loc_00553E8E; /* je: equal / zero */

loc_00553E70: ;
    eax = MEM32(edi);
    ecx = eax;
    eax = eax >> 1;
    ecx = ecx & 1;
    eax = eax & 1;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(ecx, esi)) goto loc_00553E93; /* je: equal / zero */

loc_00553E86: ;
    if (CMP_NE(MEM32(edi + 0x10), esi)) goto loc_00553E8E; /* jne: not equal / not zero */

loc_00553E8B: ;
    MEM32(ebp + 8) = esi;

loc_00553E8E: ;
    if (CMP_NE(MEM32(ebp + -8), esi)) goto loc_00553E9C; /* jne: not equal / not zero */

loc_00553E93: ;
    if (CMP_EQ(MEM32(ebp + 8), esi)) goto loc_00553FC3; /* je: equal / zero */

loc_00553E9C: ;
    PUSH32(esp, 0x6484800E);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00553EA8: ;
    esi = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    MEM32(ebp + -4) = eax;
    if (((int32_t)eax < 0)) goto loc_00553FC1; /* js: sign (negative) */

loc_00553EC1: ;
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    SET_LO16(eax, MEM16(ebp + -20));
    MEM16(esi + 0xC) = LO16(eax);
    eax = MEM32(ebp + -12);
    MEM32(esi + 4) = esi;
    MEM32(esi) = esi;
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_00553EE5; /* je: equal / zero */

loc_00553EDA: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_00553EE5; /* je: equal / zero */

loc_00553EE0: ;
    eax = eax + eax;
    MEM32(ebp + -16) = eax;

loc_00553EE5: ;
    eax = MEM32(edi + 4);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    if (CMP_EQ(LO8(ecx), 1)) goto loc_00553EFF; /* je: equal / zero */

loc_00553EF2: ;
    SET_LO8(eax, LO8(eax) & 0x1C);
    if (CMP_A(LO8(eax), 8)) goto loc_00553EFF; /* ja: above (unsigned >) */

loc_00553EF8: ;
    PUSH32(esp, 0x64840014);
    goto loc_00553F04;

loc_00553EFF: ;
    PUSH32(esp, 0xEE840014u);

loc_00553F04: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00553F0C: ;
    MEM32(esi + 8) = eax;
    ecx = MEM32(edi + 8);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebx + 0x18);
    ecx = ecx + MEM32(eax + 0x20);
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    MEM32(esi + 0x18) = ecx;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_00553FAF; /* jl: less (signed <) */

loc_00553F32: ;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_00553F8B; /* je: equal / zero */

loc_00553F38: ;
    ecx = MEM32(ebx + 0x1C);
    eax = MEM32(edi + 0x10);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x20));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x20)); }
    if (TEST_Z(edx, edx)) goto loc_00553F4B; /* je: equal / zero */

loc_00553F47: ;
    MEM8(esi + 0xE) = MEM8(esi + 0xE) | 1;

loc_00553F4B: ;
    (void)0; /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    ecx = esi + 0x24;
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_00553F57; /* jne: not equal / not zero */

loc_00553F54: ;
    ecx = esi + 0x10;

loc_00553F57: ;
    eax = MEM32(esi + 0x18);
    eax = eax + MEM32(edi + 0x10);
    edx = 0; /* xor self */
    MEM32(ecx + 8) = eax;
    edi = MEM32(ebx + 0x1C);
    eax = MEM32(ecx + 8);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(edi + 0x20));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(edi + 0x20)); }
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(ecx + 8) = eax;
    eax = MEM32(ebx + 0x1C);
    edx = MEM32(ecx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0x20));
    MEM32(ecx + 8) = edx;
    PUSH32(esp, MEM32(esi + 8));
    eax = ecx;
    PUSH32(esp, 0); sub_005541C1(); /* call 0x005541C1 */

loc_00553F88: ;
    MEM32(ebp + -4) = eax;

loc_00553F8B: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_00553FAF; /* jl: less (signed <) */

loc_00553F91: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_00553FAF; /* je: equal / zero */

loc_00553F97: ;
    ecx = MEM32(esi + 8);
    ecx = ecx - MEM32(ebp + -12);
    PUSH32(esp, MEM32(ebp + -12));
    ecx = ecx + MEM32(ebp + -16);
    eax = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_005541C1(); /* call 0x005541C1 */

loc_00553FAC: ;
    MEM32(ebp + -4) = eax;

loc_00553FAF: ;
    eax = ebx + 0x48;
    MEM32(esi) = eax;
    eax = MEM32(eax + 4);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    eax = MEM32(esi);
    MEM32(eax + 4) = esi;

loc_00553FC1: ;
    esi = 0; /* xor self */

loc_00553FC3: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -24) = MEM32(ebp + -24) + 0x18;
    if (CMP_B(ecx, MEM32(eax + 4))) goto loc_00553E4A; /* jb: below (unsigned <) */

loc_00553FD9: ;
    eax = MEM32(ebp + -4);

loc_00553FDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00553FE3
 * Original: 0x00553FE3 - 0x00554003 (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00553FE3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00553FE3: ;
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi));
    edx++;
    edx = edx << LO8(ecx);
    if (CMP_EQ(MEM32(esp + 8), 0)) { sub_00554003(); return; } /* je: equal / zero */

loc_00553FF4: ;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) | edx;
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = eax + 0x28;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00554008(); return; /* tail jmp 0x00554008 */

}

/**
 * sub_0055400C
 * Original: 0x0055400C - 0x005540F5 (233 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055400C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055400C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x60);
    if (TEST_NZ(LO8(ecx), 4)) goto loc_00554056; /* jne: not equal / not zero */

loc_0055401D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x555784), _icall_esp); /* indirect call */
    }

loc_00554030: ;
    if (TEST_Z(eax, eax)) goto loc_005540F2; /* je: equal / zero */

loc_00554038: ;
    MEM32(esi + 0x60) = MEM32(esi + 0x60) | 4;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_00553D3B(); /* call 0x00553D3B */

loc_00554045: ;
    if (CMP_GE(eax & eax, 0)) goto loc_005540F2; /* jge: greater or equal (signed >=) */

loc_0055404D: ;
    MEM32(esi + 0x60) = MEM32(esi + 0x60) | 8;
    goto loc_005540F2;

loc_00554056: ;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_005540F2; /* jne: not equal / not zero */

loc_0055405F: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0055406F; /* je: equal / zero */

loc_00554066: ;
    eax = MEM32(eax);
    eax = ~eax;
    eax = eax & 1;
    goto loc_00554071;

loc_0055406F: ;
    eax = 0; /* xor self */

loc_00554071: ;
    if (TEST_Z(eax, eax)) goto loc_0055407D; /* je: equal / zero */

loc_00554075: ;
    ecx = ecx | 1;
    MEM32(esi + 0x60) = ecx;
    goto loc_005540F2;

loc_0055407D: ;
    PUSH32(esp, edi);
    edi = esi + 0x48;
    edx = MEM32(edi);
    if (CMP_EQ(edx, edi)) goto loc_005540BE; /* je: equal / zero */

loc_00554087: ;
    PUSH32(esp, ebx);

loc_00554088: ;
    eax = edx;
    (void)0; /* cmp MEM32(eax + 0x10), 0x103 - flags set for next jcc */
    edx = MEM32(edx);
    if (CMP_EQ(MEM32(eax + 0x10), 0x103)) goto loc_005540B9; /* je: equal / zero */

loc_00554095: ;
    ebx = MEM32(eax + 4);
    ecx = MEM32(eax);
    MEM32(ecx + 4) = ebx;
    ecx = MEM32(eax + 4);
    ebx = MEM32(eax);
    MEM32(ecx) = ebx;
    MEM32(eax + 4) = eax;
    ecx = esi + 0x40;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;

loc_005540B9: ;
    if (CMP_NE(edx, edi)) goto loc_00554088; /* jne: not equal / not zero */

loc_005540BD: ;
    POP32(esp, ebx);

loc_005540BE: ;
    if (TEST_Z(MEM8(esi + 0x24), 8)) goto loc_005540F1; /* je: equal / zero */

loc_005540C4: ;
    if (CMP_NE(MEM32(edi), edi)) goto loc_005540CC; /* jne: not equal / not zero */

loc_005540C8: ;
    MEM32(esi + 0x60) = MEM32(esi + 0x60) | 1;

loc_005540CC: ;
    if (TEST_Z(MEM8(esi + 0x60), 1)) goto loc_005540F1; /* je: equal / zero */

loc_005540D2: ;
    eax = 0; /* xor self */
    PUSH32(esp, 6);
    edi = ebp + -20;
    MEM32(edi) = eax; edi += 4; /* stosd */
    POP32(esp, ecx);
    eax = ebp + -44;
    esi = esi + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(0x555774);
    edi = ebp + -44;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0054C055(); /* call 0x0054C055 */

loc_005540F1: ;
    POP32(esp, edi);

loc_005540F2: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005540F5
 * Original: 0x005540F5 - 0x0055410D (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005540F5(void)
{

loc_005540F5: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, MEM32(eax + 0x24));
    ecx = ecx + eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0054E5E6(); /* call 0x0054E5E6 */

loc_0055410A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055410D
 * Original: 0x0055410D - 0x0055412C (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055410D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055410D: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_005540F5(); /* call 0x005540F5 */

loc_00554116: ;
    if (TEST_S(eax, eax)) goto loc_00554129; /* jl: less (signed <) */

loc_0055411A: ;
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_0054E620(); /* call 0x0054E620 */

loc_00554129: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055412C
 * Original: 0x0055412C - 0x00554150 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055412C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055412C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00554338(); /* call 0x00554338 */

loc_0055413E: ;
    (void)0; /* cmp MEM16(ebp + -18), 6 - flags set for next jcc */
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x20);
    if (CMP_NE(MEM16(ebp + -18), 6)) { sub_00554150(); return; } /* jne: not equal / not zero */

loc_0055414B: ;
    ecx = ecx + ecx * 2;
    g_seh_ebp = ebp; sub_0055415A(); return; /* tail jmp 0x0055415A */

}

/**
 * sub_00554184
 * Original: 0x00554184 - 0x0055418F (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554184(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00554184: ;
    PUSH32(esp, esi);
    esi = eax;
    edx = esi + 0x48;
    ecx = MEM32(edx);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_0055419D(); return; /* tail jmp 0x0055419D */

}

/**
 * sub_005541C1
 * Original: 0x005541C1 - 0x00554274 (179 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005541C1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005541C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = 0; /* xor self */
    edi = ebp + -28;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    ecx = 0; /* xor self */
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = 1;
    MEM32(edi) = eax; edi += 4; /* stosd */
    if (CMP_NE(esi, ecx)) goto loc_005541EB; /* jne: not equal / not zero */

loc_005541E5: ;
    MEM32(ebp + -8) = ecx;
    esi = ebp + -28;

loc_005541EB: ;
    eax = MEM32(esi + 8);
    eax = eax + MEM32(ebx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi + 8) = eax;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x555780), _icall_esp); /* indirect call */
    }

loc_00554205: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = 0x80070000u;
    if (TEST_NZ(eax, eax)) goto loc_00554232; /* jne: not equal / not zero */

loc_0055420E: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00554213: ;
    if (CMP_NE(eax, 0x3E5)) goto loc_00554220; /* jne: not equal / not zero */

loc_0055421A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    goto loc_00554232;

loc_00554220: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0055422B; /* jle: less or equal (signed <=) */

loc_00554224: ;
    eax = eax & 0xFFFF;
    eax = eax | edi;

loc_0055422B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_0055426B; /* jl: less (signed <) */

loc_00554232: ;
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_0055426B; /* jne: not equal / not zero */

loc_00554238: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x555784), _icall_esp); /* indirect call */
    }

loc_00554248: ;
    if (TEST_NZ(eax, eax)) goto loc_0055426B; /* jne: not equal / not zero */

loc_0055424C: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00554251: ;
    if (CMP_G(eax & eax, 0)) goto loc_0055425C; /* jg: greater (signed >) */

loc_00554255: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0055425A: ;
    goto loc_00554268;

loc_0055425C: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00554261: ;
    eax = eax & 0xFFFF;
    eax = eax | edi;

loc_00554268: ;
    MEM32(ebp + -4) = eax;

loc_0055426B: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00554274
 * Original: 0x00554274 - 0x0055427C (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554274(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00554274: ;
    PUSH32(esp, esi);
    esi = edi + 0x50;
    eax = MEM32(esi);
    g_seh_ebp = ebp; sub_00554283(); return; /* tail jmp 0x00554283 */

}

/**
 * sub_005542CC
 * Original: 0x005542CC - 0x00554318 (76 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005542CC(void)
{
    int _flags = 0; /* fallback flag var */

loc_005542CC: ;
    edx = eax + 0x50;
    ecx = MEM32(edx);
    if (CMP_EQ(ecx, edx)) goto loc_00554315; /* je: equal / zero */

loc_005542D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_005542D7: ;
    esi = ecx;
    edi = MEM32(esi + 8);
    (void)0; /* cmp edi, MEM32(esp + 0xC) - flags set for next jcc */
    ecx = MEM32(ecx);
    if (CMP_NE(edi, MEM32(esp + 0xC))) goto loc_005542E9; /* jne: not equal / not zero */

loc_005542E4: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    if ((MEM32(esi + 0xC) == 0)) goto loc_005542EF; /* je: equal / zero */

loc_005542E9: ;
    if (CMP_NE(ecx, edx)) goto loc_005542D7; /* jne: not equal / not zero */

loc_005542ED: ;
    goto loc_00554313;

loc_005542EF: ;
    PUSH32(esp, 0); sub_00553BE9(); /* call 0x00553BE9 */

loc_005542F4: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, 0x64848011);
    MEM32(eax) = ecx;
    PUSH32(esp, esi);
    MEM32(esi + 4) = esi;
    MEM32(esi) = esi;
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00554313: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00554315: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00554318
 * Original: 0x00554318 - 0x00554323 (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554318(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00554318: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi + 0x50;
    esi = MEM32(edi);
    g_seh_ebp = ebp; sub_00554331(); return; /* tail jmp 0x00554331 */

}

/**
 * sub_00554338
 * Original: 0x00554338 - 0x00554399 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554338(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00554338: ;
    if (CMP_EQ(MEM32(esp + 4), 0)) goto loc_00554396; /* je: equal / zero */

loc_0055433F: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, MEM32(esp + 4));
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    if (CMP_EQ(LO8(edx), 1)) goto loc_0055437B; /* je: equal / zero */

loc_00554350: ;
    ecx = eax;
    eax = eax & 0x80000000u;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 8;
    eax = eax + 8;
    PUSH32(esp, eax);
    eax = ecx;
    eax = eax >> 5;
    eax = eax & 0x3FFFFFF;
    ecx = ecx >> 2;
    PUSH32(esp, eax);
    ecx = ecx & 7;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C39DF(); /* call 0x004C39DF */

loc_00554379: ;
    goto loc_00554396;

loc_0055437B: ;
    eax = MEM32(ecx + 4);
    ecx = eax;
    ecx = ecx >> 5;
    ecx = ecx & 0x3FFFFFF;
    eax = eax >> 2;
    PUSH32(esp, ecx);
    eax = eax & 7;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C39E4(); /* call 0x004C39E4 */

loc_00554396: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00554399
 * Original: 0x00554399 - 0x00554413 (122 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554399(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00554399: ;
    ecx = MEM32(edx + 0x1C);
    (void)0; /* test MEM8(ecx + 2), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(MEM8(ecx + 2), 2)) { sub_00554413(); return; } /* je: equal / zero */

loc_005543A4: ;
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0xC));
    ecx = ecx + MEM32(edx + 0x20);
    esi = 0; /* xor self */
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax) = esi;
    esi = MEM32(edx + 0x1C);
    esi = MEM32(esi + 0x24);
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx);
    edi = MEM32(edx + 0x1C);
    esi = esi & 0x1FFFFF;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edi + 0x20));
    MEM32(eax + 8) = esi;
    edi = MEM32(edx + 0x1C);
    edi = MEM32(edi + 4);
    edi--;
    if (CMP_NE(MEM32(esp + 0xC), edi)) goto loc_005543F5; /* jne: not equal / not zero */

loc_005543E1: ;
    edx = MEM32(edx + 0x18);
    ecx = MEM32(ecx);
    edx = MEM32(edx + 0x24);
    ecx = ecx >> 0x15;
    edx = edx - ecx;
    edx = edx - esi;
    MEM32(eax + 0xC) = edx;
    g_seh_ebp = ebp; sub_00554425(); return; /* tail jmp 0x00554425 */

loc_005543F5: ;
    edi = MEM32(ecx + 4);
    edx = MEM32(edx + 0x1C);
    ecx = MEM32(ecx);
    edi = edi & 0x1FFFFF;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(edx + 0x20));
    ecx = ecx >> 0x15;
    edi = edi - ecx;
    edi = edi - esi;
    MEM32(eax + 0xC) = edi;
    g_seh_ebp = ebp; sub_00554425(); return; /* tail jmp 0x00554425 */

}

/**
 * sub_0055442A
 * Original: 0x0055442A - 0x00554452 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055442A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055442A: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = esi;
    PUSH32(esp, edi);
    SET_LO8(ecx, LO8(ecx) & 3);
    edi = 0; /* xor self */
    edx = 0; /* xor self */
    if (CMP_NE(LO8(ecx), 1)) { sub_00554452(); return; } /* jne: not equal / not zero */

loc_0055443C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00554446: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_00554450: ;
    g_seh_ebp = ebp; sub_00554460(); return; /* tail jmp 0x00554460 */

}

/**
 * sub_00554493
 * Original: 0x00554493 - 0x005544FE (107 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554493(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00554493: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = esi;
    eax = eax >> 5;
    eax = eax & 0x3FFFFFF;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(ebp + 8);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_005544B8: ;
    edi = eax;
    eax = esi;
    SET_LO8(eax, LO8(eax) & 3);
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    ebx = edx;
    if (CMP_NE(LO8(eax), 1)) goto loc_005544D3; /* jne: not equal / not zero */

loc_005544C4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004710C0(); /* call 0x004710C0 */

loc_005544CF: ;
    edi = edi - eax;
    ebx = ebx - edx - _cf; /* sbb */

loc_005544D3: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, edi);
    eax = eax >> 2;
    eax = eax & 7;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_005544E5: ;
    POP32(esp, edi);
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (((int32_t)(esi & esi) >= 0)) goto loc_005544FA; /* jns: not sign (positive) */

loc_005544EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_005544F7: ;
    MEM32(ebp + -4) = edx;

loc_005544FA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005544FE
 * Original: 0x005544FE - 0x00554513 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005544FE(void)
{
    int _flags = 0; /* fallback flag var */

loc_005544FE: ;
    edx = MEM32(ecx + 0x1C);
    if (CMP_G(edx, MEM32(eax + 4))) { sub_00554513(); return; } /* jg: greater (signed >) */

loc_00554506: ;
    if (CMP_L(edx, MEM32(eax + 4))) goto loc_0055450F; /* jl: less (signed <) */

loc_00554508: ;
    ecx = MEM32(ecx + 0x18);
    if (CMP_A(ecx, MEM32(eax))) { sub_00554513(); return; } /* ja: above (unsigned >) */

loc_0055450F: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_00554516
 * Original: 0x00554516 - 0x00554541 (43 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554516(void)
{
    int _flags = 0; /* fallback flag var */

loc_00554516: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    if (CMP_G(ecx, eax)) goto loc_0055453C; /* jg: greater (signed >) */

loc_00554527: ;
    if (CMP_L(ecx, eax)) goto loc_0055452D; /* jl: less (signed <) */

loc_00554529: ;
    if (CMP_AE(edx, esi)) goto loc_00554532; /* jae: above or equal (unsigned >=) */

loc_0055452D: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00554532: ;
    if (CMP_L(ecx, eax)) { sub_00554541(); return; } /* jl: less (signed <) */

loc_00554536: ;
    if (CMP_G(ecx, eax)) goto loc_0055453C; /* jg: greater (signed >) */

loc_00554538: ;
    if (CMP_BE(edx, esi)) { sub_00554541(); return; } /* jbe: below or equal (unsigned <=) */

loc_0055453C: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00554545
 * Original: 0x00554545 - 0x00554557 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554545(void)
{
    int _flags = 0; /* fallback flag var */

loc_00554545: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00554556; /* je: equal / zero */

loc_0055454B: ;
    PUSH32(esp, 0x64848011);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_00554556: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00554557
 * Original: 0x00554557 - 0x0055457D (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554557(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00554557: ;
    eax = esi;
    PUSH32(esp, 0x64848011);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_00554567: ;
    MEM32(edi) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x7FF8FFF2;
    eax = eax + 0x8007000Eu;
    if (((int32_t)eax < 0)) goto loc_0055457C; /* js: sign (negative) */

loc_00554579: ;
    MEM32(edi + 4) = esi;

loc_0055457C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055457D
 * Original: 0x0055457D - 0x005545BB (62 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055457D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055457D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO16(ecx, MEM16(eax + 8));
    if (CMP_BE(LO16(ecx), 1)) goto loc_005545B1; /* jbe: below or equal (unsigned <=) */

loc_0055458E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00554590: ;
    eax = 0; /* xor self */
    SET_LO16(eax, LO16(ecx));
    SET_LO16(eax, LO16(eax) >> 1);
    esi = ZX16(LO16(eax));
    edi = ZX16(LO16(ecx));
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_005547B3(); /* call 0x005547B3 */

loc_005545A6: ;
    ecx = MEM32(ebp + -4);
    if (CMP_A(LO16(ecx), 1)) goto loc_00554590; /* ja: above (unsigned >) */

loc_005545AF: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_005545B1: ;
    eax = ebx;
    PUSH32(esp, 0); sub_005545F9(); /* call 0x005545F9 */

loc_005545B8: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005545BB
 * Original: 0x005545BB - 0x005545C4 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005545BB(void)
{
    int _flags = 0; /* fallback flag var */

loc_005545BB: ;
    if (CMP_NE(MEM32(ecx + 8), 0)) { sub_005545C4(); return; } /* jne: not equal / not zero */

loc_005545C1: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_005545D7
 * Original: 0x005545D7 - 0x005545F9 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005545D7(void)
{
    int _flags = 0; /* fallback flag var */

loc_005545D7: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(esi + 8), edi)) goto loc_005545F5; /* je: equal / zero */

loc_005545DF: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx);
    PUSH32(esp, 0); sub_005544FE(); /* call 0x005544FE */

loc_005545E8: ;
    if (TEST_Z(eax, eax)) goto loc_005545F5; /* je: equal / zero */

loc_005545EC: ;
    eax = esi;
    PUSH32(esp, 0); sub_005545F9(); /* call 0x005545F9 */

loc_005545F3: ;
    edi = eax;

loc_005545F5: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_005545F9
 * Original: 0x005545F9 - 0x0055460C (19 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005545F9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005545F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 8);
    if (CMP_A(eax & eax, 0)) { sub_0055460C(); return; } /* ja: above (unsigned >) */

loc_00554608: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0055467C(); return; /* tail jmp 0x0055467C */

}

/**
 * sub_0055467F
 * Original: 0x0055467F - 0x00554691 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055467F(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055467F: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 8);
    if (CMP_A(MEM32(ebx + 4), eax)) { sub_00554691(); return; } /* ja: above (unsigned >) */

loc_0055468A: ;
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005546D3
 * Original: 0x005546D3 - 0x0055478E (187 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005546D3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_005546D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp + -16;
    ebx = eax;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_005546E9: ;
    edi = 0; /* xor self */
    edi++;
    (void)0; /* cmp MEM32(ebx + 8), edi - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    if (CMP_B(MEM32(ebx + 8), edi)) goto loc_00554779; /* jb: below (unsigned <) */

loc_005546F8: ;
    MEM32(ebp + -4) = 2;
    PUSH32(esp, esi);

loc_00554700: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + edi * 4 + -4);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 8);
    if (CMP_NE(ecx, MEM32(ebp + 8))) goto loc_00554768; /* jne: not equal / not zero */

loc_00554711: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + ecx + _cf; /* adc */
    eax = MEM32(ebx + 8);
    if (CMP_A(MEM32(ebp + -4), eax)) goto loc_00554768; /* ja: above (unsigned >) */

loc_00554725: ;
    esi = edi + edi;
    if (CMP_AE(esi, eax)) goto loc_00554741; /* jae: above or equal (unsigned >=) */

loc_0055472C: ;
    eax = MEM32(ebx);
    ecx = eax + esi * 4;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + -4);
    PUSH32(esp, 0); sub_00554516(); /* call 0x00554516 */

loc_0055473B: ;
    if (CMP_NE(eax, 1)) goto loc_00554741; /* jne: not equal / not zero */

loc_00554740: ;
    esi++;

loc_00554741: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx + esi * 4 + -4);
    ecx = MEM32(ecx + edi * 4 + -4);
    eax = eax + 0x18;
    PUSH32(esp, 0); sub_005544FE(); /* call 0x005544FE */

loc_00554753: ;
    if (TEST_NZ(eax, eax)) goto loc_00554768; /* jne: not equal / not zero */

loc_00554757: ;
    PUSH32(esp, 0); sub_005547B3(); /* call 0x005547B3 */

loc_0055475C: ;
    eax = MEM32(ebx + 8);
    ecx = esi + esi;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    edi = esi;
    if (CMP_BE(ecx, eax)) goto loc_00554725; /* jbe: below or equal (unsigned <=) */

loc_00554768: ;
    edi = MEM32(ebp + -8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    edi++;
    (void)0; /* cmp edi, MEM32(ebx + 8) - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    if (CMP_BE(edi, MEM32(ebx + 8))) goto loc_00554700; /* jbe: below or equal (unsigned <=) */

loc_00554778: ;
    POP32(esp, esi);

loc_00554779: ;
    (void)0; /* cmp MEM32(ebp + -12), 0 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(ebp + -12), 0)) goto loc_0055478A; /* je: equal / zero */

loc_00554781: ;
    SET_LO8(ecx, MEM8(ebp + -16));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0055478A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055478E
 * Original: 0x0055478E - 0x005547B3 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055478E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055478E: ;
    if (CMP_EQ(eax, esi)) goto loc_005547B2; /* je: equal / zero */

loc_00554792: ;
    ecx = MEM32(edx);
    eax = eax << 2;
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax + -4);
    MEM32(ecx + esi * 4 + -4) = edi;
    ecx = MEM32(edx);
    ecx = MEM32(ecx + esi * 4 + -4);
    MEM16(ecx + 8) = LO16(esi);
    ecx = MEM32(edx);
    MEM32(eax + ecx + -4) = MEM32(eax + ecx + -4) & 0;
    POP32(esp, edi);

loc_005547B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005547B3
 * Original: 0x005547B3 - 0x005547D0 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005547B3(void)
{

loc_005547B3: ;
    eax = MEM32(ebx);
    ecx = eax + edi * 4 + -4;
    eax = MEM32(eax + esi * 4 + -4);
    edx = MEM32(ecx);
    MEM32(ecx) = eax;
    MEM16(eax + 8) = LO16(edi);
    eax = MEM32(ebx);
    MEM32(eax + esi * 4 + -4) = edx;
    MEM16(edx + 8) = LO16(esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005547D0
 * Original: 0x005547D0 - 0x005547E9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005547D0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005547D0: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    g_seh_ebp = ebp; sub_00550DD1(); return; /* tail jmp 0x00550DD1 */

}

/**
 * sub_005547E9
 * Original: 0x005547E9 - 0x005547FB (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005547E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005547E9: ;
    SET_LO16(eax, MEM16(ebx + 0xD8));
    if (TEST_Z(LO8(eax), 1)) { sub_005547FB(); return; } /* je: equal / zero */

loc_005547F4: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00554858(); return; /* tail jmp 0x00554858 */

}

/**
 * sub_0055485B
 * Original: 0x0055485B - 0x005548A6 (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055485B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0055485B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0055486F: ;
    eax = MEM32(0xFE80200Cu);
    ebx = MEM32(esi + 0x144);
    if (CMP_AE(eax, ebx)) { sub_005548A6(); return; } /* jae: above or equal (unsigned >=) */

loc_0055487E: ;
    if (CMP_AE(eax, 0x186A0)) goto loc_0055489C; /* jae: above or equal (unsigned >=) */

loc_00554885: ;
    if (CMP_BE(ebx, 0x40000000)) goto loc_0055489C; /* jbe: below or equal (unsigned <=) */

loc_0055488D: ;
    edx = 0; /* xor self */
    ecx = eax;
    ecx = ecx - ebx;
    edx = edx - edi - _cf; /* sbb */
    ecx = ecx + edi;
    edx = edx + 1 + _cf; /* adc */
    g_seh_ebp = ebp; sub_005548AC(); return; /* tail jmp 0x005548AC */

loc_0055489C: ;
    ecx = 0; /* xor self */
    MEM32(esi + 0x144) = eax;
    g_seh_ebp = ebp; sub_005548AA(); return; /* tail jmp 0x005548AA */

}

/**
 * sub_00554903
 * Original: 0x00554903 - 0x00554932 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554903(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00554903: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = eax + 0x18;
    MEM32(esi) = MEM32(esi) & 0;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) { sub_00554932(); return; } /* je: equal / zero */

loc_00554917: ;
    ecx = MEM32(eax + 0x14);
    if (CMP_EQ(MEM8(ecx), 0xE)) { sub_00554932(); return; } /* je: equal / zero */

loc_0055491F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_00554926: ;
    MEM32(esi) = MEM32(esi) + 1;
    MEM32(esi + 4) = MEM32(esi + 4) + 0 + _cf; /* adc */
    g_seh_ebp = ebp; sub_005549B3(); return; /* tail jmp 0x005549B3 */

}

/**
 * sub_005549B8
 * Original: 0x005549B8 - 0x005549FF (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005549B8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005549B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    edi = eax;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_005549CC: ;
    eax = MEM32(edi + 0x160);
    if (CMP_EQ(MEM32(eax), 0)) goto loc_005549ED; /* je: equal / zero */

loc_005549D7: ;
    goto loc_005549E4;

loc_005549D9: ;
    PUSH32(esp, 0); sub_005549FF(); /* call 0x005549FF */

loc_005549DE: ;
    eax = MEM32(edi + 0x160);

loc_005549E4: ;
    PUSH32(esp, 0); sub_005545F9(); /* call 0x005545F9 */

loc_005549E9: ;
    if (TEST_NZ(eax, eax)) goto loc_005549D9; /* jne: not equal / not zero */

loc_005549ED: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_005549FD; /* je: equal / zero */

loc_005549F4: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_005549FD: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005549FF
 * Original: 0x005549FF - 0x00554A63 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005549FF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005549FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    ecx = ebp + -8;
    esi = eax;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00554A13: ;
    if (CMP_EQ(MEM32(esi + 0x10), 0)) goto loc_00554A2D; /* je: equal / zero */

loc_00554A19: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    MEM32(esi + 4) = esi;
    MEM32(esi) = esi;

loc_00554A2D: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(MEM8(eax + 5), 1)) goto loc_00554A4B; /* je: equal / zero */

loc_00554A36: ;
    eax = eax + 0xFFFFFFF8u;
    ecx = edi + 0x34;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;

loc_00554A4B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0054BFDD(); /* call 0x0054BFDD */

loc_00554A51: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_00554A61; /* je: equal / zero */

loc_00554A58: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00554A61: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00554A63
 * Original: 0x00554A63 - 0x00554AEC (137 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554A63(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00554A63: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + -8;
    esi = eax;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00554A7A: ;
    edi = MEM32(ebp + 8);
    eax = ebp + -16;
    edi = edi + 0xC;
    ebx = MEM32(edi);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = edi;
    PUSH32(esp, 0); sub_0055485B(); /* call 0x0055485B */

loc_00554A8E: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    eax = MEM32(ebp + -12);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax + _cf; /* adc */
    if (CMP_EQ(ebx, edi)) goto loc_00554AD6; /* je: equal / zero */

loc_00554A9E: ;
    edi = ebx;
    eax = MEM32(edi + 0x1C);
    (void)0; /* cmp eax, MEM32(ebp + 0x10) - flags set for next jcc */
    ebx = MEM32(ebx);
    if (CMP_L(eax, MEM32(ebp + 0x10))) goto loc_00554AC8; /* jl: less (signed <) */

loc_00554AAA: ;
    if (CMP_G(eax, MEM32(ebp + 0x10))) goto loc_00554AB4; /* jg: greater (signed >) */

loc_00554AAC: ;
    eax = MEM32(edi + 0x18);
    if (CMP_B(eax, MEM32(ebp + 0xC))) goto loc_00554AC8; /* jb: below (unsigned <) */

loc_00554AB4: ;
    if (CMP_EQ(MEM16(edi + 8), 0)) goto loc_00554AC8; /* je: equal / zero */

loc_00554ABB: ;
    ecx = MEM32(esi + 0x160);
    eax = edi;
    PUSH32(esp, 0); sub_0055457D(); /* call 0x0055457D */

loc_00554AC8: ;
    eax = edi;
    edi = esi;
    PUSH32(esp, 0); sub_005549FF(); /* call 0x005549FF */

loc_00554AD1: ;
    if (CMP_NE(ebx, MEM32(ebp + 8))) goto loc_00554A9E; /* jne: not equal / not zero */

loc_00554AD6: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_00554AE8; /* je: equal / zero */

loc_00554ADF: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00554AE8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00554AEC
 * Original: 0x00554AEC - 0x00554B3E (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554AEC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00554AEC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    ecx = ebp + -8;
    esi = eax;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00554B01: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055485B(); /* call 0x0055485B */

loc_00554B0A: ;
    eax = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_00554B14: ;
    eax = MEM32(ebp + -16);
    eax = eax - MEM32(ebp + -24);
    ecx = MEM32(ebp + -12);
    ecx = ecx - MEM32(ebp + -20) - _cf; /* sbb */
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    MEM32(esi + 0x158) = eax;
    MEM32(esi + 0x15C) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_00554B3C; /* je: equal / zero */

loc_00554B33: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00554B3C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00554B3E
 * Original: 0x00554B3E - 0x00554BA0 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554B3E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00554B3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM8(edi + 1) = MEM8(edi + 1) & 0xFB;
    SET_LO16(ecx, MEM16(edi + 0x54));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    SET_LO16(eax, MEM16(edi));
    if (TEST_Z(LO16(ecx), LO16(ecx))) { sub_00554BA0(); return; } /* je: equal / zero */

loc_00554B5A: ;
    (void)0; /* cmp LO16(ecx), 0xFFFF - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x18));
    MEM8(edi + 0x19) = LO8(eax);
    SET_LO16(eax, MEM16(edi + 0x16));
    MEM16(edi + 0x14) = LO16(eax);
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_00554B74; /* je: equal / zero */

loc_00554B6F: ;
    ecx--;
    MEM16(edi + 0x54) = LO16(ecx);

loc_00554B74: ;
    eax = esi;
    PUSH32(esp, 0); sub_00554AEC(); /* call 0x00554AEC */

loc_00554B7B: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00554B83: ;
    eax = edi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055485B(); /* call 0x0055485B */

loc_00554B8C: ;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_00554B9B; /* je: equal / zero */

loc_00554B92: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00554B9B: ;
    MEM8(edi) = MEM8(edi) & 0xFD;
    g_seh_ebp = ebp; sub_00554BA7(); return; /* tail jmp 0x00554BA7 */

}

/**
 * sub_00554BAA
 * Original: 0x00554BAA - 0x00554C41 (151 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554BAA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00554BAA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_00554BBD: ;
    edi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    ebx = edi + 0x18;
    if (CMP_L(eax, MEM32(ebx + 4))) goto loc_00554C13; /* jl: less (signed <) */

loc_00554BCB: ;
    if (CMP_G(eax, MEM32(ebx + 4))) goto loc_00554BD4; /* jg: greater (signed >) */

loc_00554BCD: ;
    eax = MEM32(ebp + -8);
    if (CMP_B(eax, MEM32(ebx))) goto loc_00554C13; /* jb: below (unsigned <) */

loc_00554BD4: ;
    eax = ZX8(MEM8(0x24));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    esi = 0; /* xor self */
    eax = ecx;
    if (CMP_EQ(eax, esi)) goto loc_00554C15; /* je: equal / zero */

loc_00554BEB: ;
    ecx = ebp + -16;
    MEM32(ebp + -12) = esi;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00554BF6: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00554C04: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_00554C0B: ;
    (void)0; /* cmp MEM32(ebp + -12), 0 - flags set for next jcc */
    edi = eax;
    g_seh_ebp = ebp; sub_00554C62(); return; /* tail jmp 0x00554C62 */

loc_00554C13: ;
    esi = 0; /* xor self */

loc_00554C15: ;
    ecx = ebp + -16;
    MEM32(ebp + -12) = esi;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_00554C20: ;
    ebx = MEM32(ebp + 8);
    if (TEST_NZ(MEM8(ebx + 0xD8), 1)) { sub_00554C41(); return; } /* jne: not equal / not zero */

loc_00554C2C: ;
    if (CMP_EQ(MEM32(ebp + -12), esi)) goto loc_00554C3A; /* je: equal / zero */

loc_00554C31: ;
    SET_LO8(ecx, MEM8(ebp + -16));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00554C3A: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00554C6F(); return; /* tail jmp 0x00554C6F */

}

/**
 * sub_00554C76
 * Original: 0x00554C76 - 0x00554C9E (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554C76(void)
{
    uint32_t ebp;

loc_00554C76: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_00554C85: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    MEM8(eax + 0xD8) = MEM8(eax + 0xD8) & 0xFD;
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 8), _icall_esp); /* indirect call */
    }

loc_00554C9A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00554CD4
 * Original: 0x00554CD4 - 0x005550E1 (1037 bytes, 319 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00554CD4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00554CD4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x54;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    SET_LO16(ecx, MEM16(esi));
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    edx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -12) = edi;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_005550D8; /* jne: not equal / not zero */

loc_00554D02: ;
    eax = MEM32(ebx);
    eax = eax & 0xFF;
    (void)0; /* cmp eax, 0x12 - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (CMP_A(eax, 0x12)) goto loc_005550C0; /* ja: above (unsigned >) */

loc_00554D15: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5550E1); /* switch: 19 entries, 15 targets */
    if (_jt == 0x00554D1Cu) goto loc_00554D1C;
    if (_jt == 0x00554D2Fu) goto loc_00554D2F;
    if (_jt == 0x00554D64u) goto loc_00554D64;
    if (_jt == 0x00554DACu) goto loc_00554DAC;
    if (_jt == 0x00554E22u) goto loc_00554E22;
    if (_jt == 0x00554E42u) goto loc_00554E42;
    if (_jt == 0x00554E61u) goto loc_00554E61;
    if (_jt == 0x00554EA3u) goto loc_00554EA3;
    if (_jt == 0x00554EFDu) goto loc_00554EFD;
    if (_jt == 0x00554F75u) goto loc_00554F75;
    if (_jt == 0x00554FE5u) goto loc_00554FE5;
    if (_jt == 0x0055504Bu) goto loc_0055504B;
    if (_jt == 0x0055506Cu) goto loc_0055506C;
    if (_jt == 0x00555096u) goto loc_00555096;
    if (_jt == 0x005550C0u) goto loc_005550C0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00554D1C: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_0055512D(); /* call 0x0055512D */

loc_00554D27: ;
    MEM32(ebp + -4) = eax;
    goto loc_005550BA;

loc_00554D2F: ;
    SET_LO16(ecx, MEM16(ebx + 0xE));
    SET_LO16(eax, MEM16(ebx + 0xC));
    PUSH32(esp, 0); sub_00555437(); /* call 0x00555437 */

loc_00554D3C: ;
    MEM16(esi + 0x20) = MEM16(esi + 0x20) + LO16(eax);
    SET_LO16(ecx, MEM16(ebx + 0x12));
    SET_LO16(eax, MEM16(ebx + 0x10));
    PUSH32(esp, 0); sub_00555437(); /* call 0x00555437 */

loc_00554D4D: ;
    MEM16(esi + 0x1E) = MEM16(esi + 0x1E) + LO16(eax);
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_00551809(); /* call 0x00551809 */

loc_00554D5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00551690(); /* call 0x00551690 */

loc_00554D61: ;
    edx = MEM32(ebp + -8);

loc_00554D64: ;
    MEM8(esi + 0x84) = MEM8(esi + 0x84) & 0xF7;
    if (TEST_NZ(MEM8(esi), 1)) goto loc_00554D7A; /* jne: not equal / not zero */

loc_00554D70: ;
    eax = edx;
    PUSH32(esp, 0); sub_0054E510(); /* call 0x0054E510 */

loc_00554D77: ;
    edx = MEM32(ebp + -8);

loc_00554D7A: ;
    MEM8(esi) = MEM8(esi) | 0x20;
    (void)0; /* cmp MEM32(edx + 0x1C), 0 - flags set for next jcc */
    SET_LO16(eax, MEM16(esi));
    if (CMP_NE(MEM32(edx + 0x1C), 0)) goto loc_00554D98; /* jne: not equal / not zero */

loc_00554D86: ;
    if (TEST_Z(MEM8(edi + 0x39), 4)) goto loc_005550C0; /* je: equal / zero */

loc_00554D90: ;
    if (TEST_NZ(LO8(eax), 4)) goto loc_005550C0; /* jne: not equal / not zero */

loc_00554D98: ;
    MEM8(edi + 0x39) = MEM8(edi + 0x39) & 0xFB;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x44);
    PUSH32(esp, 0); sub_0055014C(); /* call 0x0055014C */

loc_00554DA7: ;
    goto loc_005550C0;

loc_00554DAC: ;
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_005550C0; /* je: equal / zero */

loc_00554DB5: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    SET_LO8(ebx, (CMP_NE(eax, 2)) ? 1 : 0); /* setne */
    (void)0; /* test LO8(ecx), 0x10 - flags set for next jcc */
    eax = ebx;
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00554E09; /* je: equal / zero */

loc_00554DC4: ;
    if (CMP_NE(MEM16(esi + 0x54), 0)) goto loc_00554DDF; /* jne: not equal / not zero */

loc_00554DCB: ;
    SET_LO16(ecx, LO16(ecx) & 0xFFDF);
    MEM16(esi) = LO16(ecx);
    ecx = edx;
    PUSH32(esp, 0); sub_0054E425(); /* call 0x0054E425 */

loc_00554DDA: ;
    goto loc_005550C0;

loc_00554DDF: ;
    if (TEST_NZ(HI8(ecx), 4)) goto loc_005550C0; /* jne: not equal / not zero */

loc_00554DE8: ;
    if (CMP_EQ(MEM32(edx + 0x20), 0)) goto loc_00554DCB; /* je: equal / zero */

loc_00554DEE: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = 0x2000;
    eax = eax & edx;
    eax = eax + edx;
    eax = eax | ecx;
    SET_LO16(eax, LO16(eax) | 0x800);
    MEM16(esi) = LO16(eax);
    goto loc_005550C0;

loc_00554E09: ;
    if (TEST_Z(eax, eax)) goto loc_00554DCB; /* je: equal / zero */

loc_00554E0D: ;
    if (CMP_EQ(MEM32(edx + 0x20), 0)) goto loc_00554DCB; /* je: equal / zero */

loc_00554E13: ;
    if (CMP_EQ(MEM32(esi + 0x50), 0)) goto loc_00554DCB; /* je: equal / zero */

loc_00554E19: ;
    MEM8(esi + 0x84) = MEM8(esi + 0x84) | 0x10;
    goto loc_00554DCB;

loc_00554E22: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + 0xC);
    edi = esi + 0x20;
    PUSH32(esp, 0); sub_005551F6(); /* call 0x005551F6 */

loc_00554E30: ;
    ecx = MEM32(ebp + -12);
    edx = esi;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_00551809(); /* call 0x00551809 */

loc_00554E3D: ;
    goto loc_005550BA;

loc_00554E42: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + 0xC);
    edi = esi + 0x1E;
    PUSH32(esp, 0); sub_005551F6(); /* call 0x005551F6 */

loc_00554E50: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_00551690(); /* call 0x00551690 */

loc_00554E5C: ;
    goto loc_005550BA;

loc_00554E61: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + 0xC);
    edi = esi + 0x22;
    PUSH32(esp, 0); sub_005551F6(); /* call 0x005551F6 */

loc_00554E6F: ;
    SET_LO16(ecx, MEM16(ebx + 0x12));
    MEM32(ebp + -4) = eax;
    SET_LO16(eax, MEM16(ebx + 0x10));
    PUSH32(esp, 0); sub_00555437(); /* call 0x00555437 */

loc_00554E7F: ;
    edi = MEM32(ebp + 8);
    edi = edi + 0x124;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM16(esi + 0x24) = LO16(eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F8), _icall_esp); /* indirect call */
    }

loc_00554E93: ;
    edx = MEM32(ebp + -12);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00551846(); /* call 0x00551846 */

loc_00554E9D: ;
    PUSH32(esp, edi);
    goto loc_005550B4;

loc_00554EA3: ;
    eax = ebp + -84;
    MEM32(ebp + -16) = eax;
    eax = MEM32(edi + 0x44);
    eax = MEM32(eax + 0x1C);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax + 8;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -8) = 0;
    if ((eax == 0)) goto loc_00554EE5; /* je: equal / zero */

loc_00554EC2: ;
    ebx = ebx + 0xA;

loc_00554EC5: ;
    edi = ZX16(MEM16(ebx + -2));
    ecx = MEM32(ebp + -8);
    ecx = ecx << 3;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    MEM32(ebp + ecx + -84) = edi;
    edi = (uint32_t)(int32_t)SMEM16(ebx);
    ebx = ebx + 4;
    (void)0; /* cmp MEM32(ebp + -8), eax - flags set for next jcc */
    MEM32(ebp + ecx + -80) = edi;
    if (CMP_B(MEM32(ebp + -8), eax)) goto loc_00554EC5; /* jb: below (unsigned <) */

loc_00554EE5: ;
    if (TEST_Z(edx, edx)) goto loc_00554EF4; /* je: equal / zero */

loc_00554EE9: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = edx;
    PUSH32(esp, 0); sub_0054E55A(); /* call 0x0054E55A */

loc_00554EF4: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 1;
    goto loc_005550C0;

loc_00554EFD: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + -16), 0xB - flags set for next jcc */
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    edi = ebp + -60;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ZX16(MEM16(ebx + 0xA));
    MEM32(ebp + -48) = eax;
    eax = ZX16(MEM16(ebx + 0xE));
    MEM32(ebp + -40) = eax;
    eax = ZX16(MEM16(ebx + 8));
    MEM32(ebp + -52) = eax;
    eax = ZX16(MEM16(ebx + 0xC));
    MEM32(ebp + -44) = eax;
    eax = ZX16(MEM16(ebx + 0x10));
    MEM32(ebp + -36) = eax;
    eax = ZX8(MEM8(ebx + 0x13));
    MEM32(ebp + -56) = eax;
    eax = ZX8(MEM8(ebx + 0x12));
    MEM32(ebp + -32) = eax;
    if (CMP_NE(MEM32(ebp + -16), 0xB)) goto loc_00554F55; /* jne: not equal / not zero */

loc_00554F3E: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    MEM32(ebp + -32) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x17);
    MEM32(ebp + -24) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x16);
    MEM32(ebp + -28) = eax;
    goto loc_00554F5C;

loc_00554F55: ;
    MEM32(ebp + -60) = 1;

loc_00554F5C: ;
    eax = MEM32(ebp + -8);
    if (TEST_Z(eax, eax)) goto loc_005550C0; /* je: equal / zero */

loc_00554F67: ;
    ecx = ebp + -60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0054E7E3(); /* call 0x0054E7E3 */

loc_00554F70: ;
    goto loc_005550C0;

loc_00554F75: ;
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + -16), 8 - flags set for next jcc */
    POP32(esp, ecx);
    edi = ebp + -44;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ZX8(MEM8(ebx + 0xA));
    if (CMP_NE(MEM32(ebp + -16), 8)) goto loc_00554FA6; /* jne: not equal / not zero */

loc_00554F89: ;
    eax = eax << 2;
    MEM32(ebp + -36) = eax;
    eax = ZX16(MEM16(ebx + 8));
    MEM32(ebp + -40) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0xB);
    MEM32(ebp + -44) = 1;
    MEM32(ebp + -32) = eax;
    goto loc_00554FCC;

loc_00554FA6: ;
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;
    eax = eax << 2;
    MEM32(ebp + -36) = eax;
    eax = ZX16(MEM16(ebx + 8));
    MEM32(ebp + -40) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0xB);
    MEM32(ebp + -32) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0xD);
    MEM32(ebp + -24) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0xC);
    MEM32(ebp + -28) = eax;

loc_00554FCC: ;
    eax = MEM32(ebp + -8);
    if (TEST_Z(eax, eax)) goto loc_005550C0; /* je: equal / zero */

loc_00554FD7: ;
    ecx = ebp + -44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0054E829(); /* call 0x0054E829 */

loc_00554FE0: ;
    goto loc_005550C0;

loc_00554FE5: ;
    if (CMP_NE(MEM8(ebx + 0xC), 0)) goto loc_0055503E; /* jne: not equal / not zero */

loc_00554FEB: ;
    eax = MEM32(ebp + 0xC);
    MEM16(eax + 0xA) = MEM16(eax + 0xA) + 1;
    SET_LO16(eax, MEM16(eax + 0xA));
    if (CMP_B(LO16(eax), MEM16(ebx + 6))) goto loc_00555002; /* jb: below (unsigned <) */

loc_00554FFC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    goto loc_00555031;

loc_00555002: ;
    eax = MEM32(ebx + 0xC);
    eax = eax >> 8;
    ecx = 0x2710;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = ZX16(MEM16(ebx + 6));
    esi = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_00555021: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + eax;
    MEM32(ebp + -4) = 1;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + edx + _cf; /* adc */

loc_00555031: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x44);
    PUSH32(esp, 0); sub_0055014C(); /* call 0x0055014C */

loc_0055503C: ;
    goto loc_005550BA;

loc_0055503E: ;
    eax = MEM32(ebx + 8);
    edi = MEM32(edi + 0x44);
    PUSH32(esp, 0); sub_00550454(); /* call 0x00550454 */

loc_00555049: ;
    goto loc_005550BA;

loc_0055504B: ;
    if (TEST_Z(MEM8(ebx + 6), 1)) goto loc_00555060; /* je: equal / zero */

loc_00555051: ;
    if (TEST_NZ(HI8(ecx), 4)) goto loc_00555060; /* jne: not equal / not zero */

loc_00555056: ;
    SET_LO16(ecx, LO16(ecx) | 0x200);
    MEM16(esi) = LO16(ecx);
    goto loc_005550C0;

loc_00555060: ;
    eax = MEM32(ebp + 8);
    edi = esi;
    PUSH32(esp, 0); sub_00554B3E(); /* call 0x00554B3E */

loc_0055506A: ;
    goto loc_005550C0;

loc_0055506C: ;
    esi = MEM32(ebp + 8);
    edi = esi + 0x124;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F8), _icall_esp); /* indirect call */
    }

loc_0055507C: ;
    PUSH32(esp, 1);
    eax = ebx + 8;
    PUSH32(esp, 0); sub_0054EE0C(); /* call 0x0054EE0C */

loc_00555086: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F4), _icall_esp); /* indirect call */
    }

loc_0055508D: ;
    MEM8(esi + 0xD8) = MEM8(esi + 0xD8) | 4;
    goto loc_005550C0;

loc_00555096: ;
    edi = MEM32(ebp + 8);
    esi = edi + 0x124;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F8), _icall_esp); /* indirect call */
    }

loc_005550A6: ;
    ebx = ebx + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0055565A(); /* call 0x0055565A */

loc_005550B3: ;
    PUSH32(esp, esi);

loc_005550B4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F4), _icall_esp); /* indirect call */
    }

loc_005550BA: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_005550CD; /* jne: not equal / not zero */

loc_005550C0: ;
    eax = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_005549FF(); /* call 0x005549FF */

loc_005550CB: ;
    goto loc_005550D8;

loc_005550CD: ;
    eax = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx), _icall_esp); /* indirect call */
    }

loc_005550D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005551F6
 * Original: 0x005551F6 - 0x00555233 (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005551F6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005551F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x14);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0xA), LO16(ebx) - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(MEM16(esi + 0xA), LO16(ebx))) goto loc_00555219; /* jne: not equal / not zero */

loc_0055520C: ;
    if (TEST_Z(MEM8(eax + 5), 0x10)) goto loc_00555219; /* je: equal / zero */

loc_00555212: ;
    SET_LO16(ecx, MEM16(edi));
    MEM16(esi + 0xC) = LO16(ecx);

loc_00555219: ;
    SET_LO8(ecx, MEM8(eax + 5));
    if (TEST_Z(LO8(ecx), 0x20)) { sub_00555233(); return; } /* je: equal / zero */

loc_00555221: ;
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ebp + -4;
    PUSH32(esp, 0); sub_0055526D(); /* call 0x0055526D */

loc_0055522C: ;
    ebx = eax;
    eax = MEM32(ebp + -4);
    g_seh_ebp = ebp; sub_0055524E(); return; /* tail jmp 0x0055524E */

}

/**
 * sub_0055526D
 * Original: 0x0055526D - 0x00555299 (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055526D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055526D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    (void)0; /* cmp MEM8(edi), 5 - flags set for next jcc */
    eax = ZX16(MEM16(edi + 6));
    MEM32(ebp + -4) = eax;
    if (CMP_NE(MEM8(edi), 5)) { sub_00555299(); return; } /* jne: not equal / not zero */

loc_00555281: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_005552FF(); /* call 0x005552FF */

loc_0055528A: ;
    eax = SX16(LO16(eax));
    MEM32(ebx) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    eax = eax - ecx;
    MEM32(ebx) = eax;
    g_seh_ebp = ebp; sub_005552B8(); return; /* tail jmp 0x005552B8 */

}

/**
 * sub_005552FF
 * Original: 0x005552FF - 0x0055539C (157 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005552FF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005552FF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = eax + 0x124;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F8), _icall_esp); /* indirect call */
    }

loc_00555326: ;
    if (CMP_NE(MEM8(esi), 5)) { sub_0055539C(); return; } /* jne: not equal / not zero */

loc_0055532B: ;
    if (TEST_Z(MEM8(esi + 5), 0x10)) goto loc_00555353; /* je: equal / zero */

loc_00555331: ;
    eax = MEM32(ebp + 0xC);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x10);
    SET_LO16(ebx, MEM16(eax + 4));
    MEM32(ebp + -4) = edi;
    ebx = ebx & 0x1FF;
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = ebx << 4;

loc_00555353: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    SET_LO8(ecx, MEM8(esi + 0xC));
    edi = edi + eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = ZX16(MEM16(esi + 6));
    MEM32(ebp + 8) = eax;
    if (CMP_LE(edi & edi, 0)) goto loc_00555370; /* jle: less or equal (signed <=) */

loc_0055536E: ;
    edi = 0; /* xor self */

loc_00555370: ;
    if (CMP_LE(MEM32(ebp + -4), 0)) goto loc_0055537A; /* jle: less or equal (signed <=) */

loc_00555376: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_0055537A: ;
    eax = 0xFFFFE700u;
    if (CMP_GE(edi, eax)) goto loc_00555385; /* jge: greater or equal (signed >=) */

loc_00555383: ;
    edi = eax;

loc_00555385: ;
    if (CMP_GE(MEM32(ebp + -4), eax)) goto loc_0055538D; /* jge: greater or equal (signed >=) */

loc_0055538A: ;
    MEM32(ebp + -4) = eax;

loc_0055538D: ;
    edx = ebx + edi;
    if (CMP_GE(edx, eax)) goto loc_00555398; /* jge: greater or equal (signed >=) */

loc_00555394: ;
    ebx = eax;
    ebx = ebx - edi;

loc_00555398: ;
    edi = edi + ebx;
    g_seh_ebp = ebp; sub_005553C7(); return; /* tail jmp 0x005553C7 */

}

/**
 * sub_00555437
 * Original: 0x00555437 - 0x0055545A (35 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555437(void)
{
    int _flags = 0; /* fallback flag var */

loc_00555437: ;
    if (CMP_EQ(LO16(eax), LO16(ecx))) goto loc_00555459; /* je: equal / zero */

loc_0055543C: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_L(LO16(eax), LO16(ecx))) goto loc_00555443; /* jl: less (signed <) */

loc_00555441: ;
    esi = ecx;

loc_00555443: ;
    edx = SX16(LO16(eax));
    eax = SX16(LO16(ecx));
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0054C8DE(); /* call 0x0054C8DE */

loc_00555456: ;
    eax = eax + esi;
    POP32(esp, esi);

loc_00555459: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055545A
 * Original: 0x0055545A - 0x005554E3 (137 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055545A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055545A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    ecx = ebp + -8;
    esi = eax;
    PUSH32(esp, 0); sub_0054B17B(); /* call 0x0054B17B */

loc_0055546F: ;
    ecx = MEM32(esi + 0x160);
    eax = ebp + -16;
    PUSH32(esp, 0); sub_005545BB(); /* call 0x005545BB */

loc_0055547D: ;
    if (TEST_Z(eax, eax)) goto loc_005554D1; /* je: equal / zero */

loc_00555481: ;
    SET_LO16(eax, MEM16(esi + 0xD8));
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    ecx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    if (TEST_Z(LO8(eax), 2)) goto loc_005554A4; /* je: equal / zero */

loc_00555492: ;
    if (CMP_G(edx, MEM32(esi + 0x154))) goto loc_005554D1; /* jg: greater (signed >) */

loc_0055549A: ;
    if (CMP_L(edx, MEM32(esi + 0x154))) goto loc_005554A4; /* jl: less (signed <) */

loc_0055549C: ;
    if (CMP_AE(ecx, MEM32(esi + 0x150))) goto loc_005554D1; /* jae: above or equal (unsigned >=) */

loc_005554A4: ;
    SET_LO16(eax, LO16(eax) | 2);
    MEM16(esi + 0xD8) = LO16(eax);
    eax = esi + 0x108;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esi + 0x150) = ecx;
    MEM32(esi + 0x154) = edx;
    PUSH32(esp, ecx);
    esi = esi + 0xE0;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561140), _icall_esp); /* indirect call */
    }

loc_005554D1: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_005554E1; /* je: equal / zero */

loc_005554D8: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_005554E1: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005554F0
 * Original: 0x005554F0 - 0x00555528 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005554F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005554F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx);
    ecx = eax;
    ecx = ecx & 0xFF;
    PUSH32(esp, esi);
    esi = ecx * 8 + 0x5556B8;
    ecx = eax;
    eax = eax >> 8;
    ecx = ecx >> 0x11;
    edx = 0x1FF;
    MEM32(ebp + -4) = eax;
    ecx = ecx & edx;
    eax = eax & edx;
    if (CMP_NE(ecx, eax)) { sub_00555528(); return; } /* jne: not equal / not zero */

loc_00555524: ;
    edx = eax;
    g_seh_ebp = ebp; sub_00555546(); return; /* tail jmp 0x00555546 */

}

/**
 * sub_0055565A
 * Original: 0x0055565A - 0x00555688 (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055565A(void)
{
    uint32_t ebp;

loc_0055565A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    edi = ebp + -72;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_005554F0(); /* call 0x005554F0 */

loc_0055566F: ;
    MEM32(ebp + -8) = eax;
    eax = edi;
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_0054E55A(); /* call 0x0054E55A */

loc_00555683: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00555A40
 * Original: 0x00555A40 - 0x00555A61 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555A40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00555A40: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    edx = MEM32(esp + 4);
    if ((xmm0 <= xmm1)) { sub_00555A61(); return; } /* jbe: below or equal (unsigned <=) */

loc_00555A4C: ;
    xmm0 = MEMF(0x648EEC); /* movss */
    MEMF(edx) = xmm0; /* movss */
    MEMF(ecx) = xmm0; /* movss */
    MEMF(eax) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00555B20
 * Original: 0x00555B20 - 0x00555D4F (559 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555B20(void)
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

loc_00555B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x148;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_00555D49; /* je: equal / zero */

loc_00555B36: ;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00555D49; /* je: equal / zero */

loc_00555B44: ;
    edx = ebx;
    eax = esp + 0xA0;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00555B52: ;
    edi = ZX8(MEM8(ebp + 8));
    edi = edi + edi * 2;
    edi = edi << 4;
    eax = esp + 0x60;
    edi = edi + 0x556938;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = ebx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00555B72: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edi = edi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00555B85: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x14;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(0x5A005C); /* addss */
    xmm0 = xmm0 - MEMF(0x6493C0); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = esp + 0xAC;
    edi = esp + 0x30;
    MEMF(esp + 0x38) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_00555BD9: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00555D49; /* je: equal / zero */

loc_00555BE4: ;
    xmm0 = MEMF(esp + 0xA0); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    eax = esp + 0x1C;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_00555A40(); /* call 0x00555A40 */

loc_00555C0B: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    xmm0 = MEMF(0x64A984); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A980); /* movss */
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x64A97C); /* movss */
    edx = esp + 0x34;
    MEM8(esp + 0x41) = LO8(eax);
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x60) = LO8(eax);
    MEM8(esp + 0x61) = LO8(eax);
    PUSH32(esp, edx);
    SET_LO8(eax, LO8(eax) | 0xFF);
    edx = 0; /* xor self */
    MEM32(esp + 0x40) = ecx;
    MEM8(esp + 0x44) = 1;
    MEM32(esp + 0x4C) = 0xC;
    MEM16(esp + 0x50) = 0x28;
    MEM16(esp + 0x52) = 0x1E;
    MEM16(esp + 0x58) = 0x19;
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00156070(); /* call 0x00156070 */

loc_00555C94: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00555C9C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xE;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 0xF;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00555CB2: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00555CBF: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM8(esp + 9) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00555CCC: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    MEM8(esp + 0xE) = LO8(eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00555CE7: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x6490B4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_00555D19: ;
    xmm0 = MEMF(0x5A0060); /* movss */
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3951B717);
    PUSH32(esp, 0x459C4000);
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_00555D38: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    eax = ebx;
    PUSH32(esp, 0); sub_00185180(); /* call 0x00185180 */

loc_00555D46: ;
    esp = esp + 0x44;

loc_00555D49: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00555D50
 * Original: 0x00555D50 - 0x00555DAD (93 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555D50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00555D50: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(MEM8(eax + 0x64), 1)) goto loc_00555DA7; /* je: equal / zero */

loc_00555D5A: ;
    SET_LO16(edx, MEM16(eax + 0x36));
    if (CMP_GE(LO16(edx), 0x20)) goto loc_00555D77; /* jge: greater or equal (signed >=) */

loc_00555D64: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0x7B));
    ecx = SX16(LO16(edx));
    ecx = ecx << 3;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_LE(esi, ecx)) goto loc_00555D77; /* jle: less or equal (signed <=) */

loc_00555D74: ;
    MEM8(eax + 0x7B) = LO8(ecx);

loc_00555D77: ;
    if (CMP_LE(LO16(edx), MEM16(eax + 0x328))) goto loc_00555DA7; /* jle: less or equal (signed <=) */

loc_00555D80: ;
    xmm0 = MEMF(eax + 0x32C); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(eax + 0x38); /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */

loc_00555DA7: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00555DB0
 * Original: 0x00555DB0 - 0x00555F77 (455 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555DB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;

loc_00555DB0: ;
    esp = esp - 0x80;
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = 0x303;
    MEM32(esp + 0x34) = 0x29;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00555DCC: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_00555DD8; /* jns: not sign (positive) */

loc_00555DD3: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_00555DD8: ;
    xmm6 = 0.0f; /* xorps self = zero */
    eax = eax + 0x14;
    MEM16(esp + 8) = LO16(eax);
    MEMF(esp + 0xC) = xmm6; /* movss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    MEM8(esp + 0x14) = 0xB0;
    MEM8(esp + 0x15) = 0xA0;
    MEM8(esp + 0x16) = 0x2A;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00555E03: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x17) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00555E17: ;
    xmm0 = xmm0 * MEMF(0x64A330); /* mulss */
    xmm0 = xmm0 + MEMF(0x64925C); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00555E65: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649294); /* addss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00555E88: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x68;
    edx = edx - 0x19;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xB0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00555EA5: ;
    esp = esp + 0xC;
    MEMF(esp + 0x70) = xmm6; /* movss */
    MEM32(esp + 0x74) = 0xE05;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00555EBB: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), 1)) goto loc_00555EC8; /* je: equal / zero */

loc_00555EC0: ;
    MEM32(esp + 0x70) = 0xE45;

loc_00555EC8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00555ECD: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00555ED9; /* je: equal / zero */

loc_00555ED1: ;
    MEM32(esp + 0x70) = MEM32(esp + 0x70) | 0x80;

loc_00555ED9: ;
    xmm0 = MEMF(0x64A32C); /* movss */
    eax = 2;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, eax);
    ecx = 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x10;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64A334); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM8(esp + 0x8C) = 8;
    MEM8(esp + 0x8D) = 0xFF;
    MEM16(esp + 0x48) = 0xA;
    MEM16(esp + 0x4A) = 0x19;
    MEM16(esp + 0x4C) = 0x1B;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_00555F5B: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_00555F6B; /* je: equal / zero */

loc_00555F62: ;
    edx = MEM32(esp);
    MEM32(eax + 0x170) = edx;

loc_00555F6B: ;
    eax = 1;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00555F80
 * Original: 0x00555F80 - 0x005561B7 (567 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00555F80(void)
{
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;

loc_00555F80: ;
    esp = esp - 0xD4;
    xmm0 = MEMF(esp + 0xE0); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE4); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE8); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x70) = 0x29E8;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 0x78) = 0x20;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00556013: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64925C); /* addss */
    xmm6 = MEMF(0x648D80); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0055603A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x58;
    edx = edx - 0x3F;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x108);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00556057: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0055605C: ;
    xmm5 = MEMF(0x649298); /* movss */
    xmm7 = MEMF(0x649248); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00556083: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0055609A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x32;
    MEM32(esp + 0x80) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_005560B1: ;
    xmm0 = xmm0 * MEMF(0x6493C8); /* mulss */
    xmm0 = xmm0 - MEMF(0x649830); /* subss */
    xmm5 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_005560D8: ;
    xmm0 = xmm0 * MEMF(0x5A0060); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    ebx = 0; /* xor self */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x88) = LO8(ebx);
    MEM32(esp + 0x8C) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0055610D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0x94) = 0x556880;
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0x9C) = ebx;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x90) = LO8(edx);
    edx = MEM32(esp + 0x124);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = 0x13E6E0;
    MEM32(esp + 0xD0) = 0x13E8F0;
    MEM8(esp + 0xD8) = 2;
    MEM32(esp + 0xDC) = ebx;
    MEM8(esp + 0xE0) = LO8(ebx);
    MEM16(esp + 0xE2) = 0x20;
    MEM16(esp + 0xE4) = 7;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_005561A6: ;
    esp = esp + 0x2C;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_005561C0
 * Original: 0x005561C0 - 0x005563EA (554 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005561C0(void)
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

loc_005561C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x108;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(ebx, ebx)) goto loc_005563E4; /* je: equal / zero */

loc_005561DB: ;
    edx = ebx;
    eax = esp + 0x60;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_005561E6: ;
    edx = MEM32(0x7FA200);
    esi = MEM32(0x8470DC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    PUSH32(esp, 1);
    edx = edx + esi;
    ecx = 7;
    PUSH32(esp, 0); sub_00047FA0(); /* call 0x00047FA0 */

loc_00556206: ;
    xmm0 = MEMF(ebx + 0x78); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    esp = esp + 4;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x64925C); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = esp + 0x6C;
    edi = esp + 0x24;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_00556259: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0055626D; /* je: equal / zero */

loc_00556260: ;
    xmm0 = MEMF(esp + 0x60); /* movss */
    MEM8(esp + 0x13) = 1;
    goto loc_00556275;

loc_0055626D: ;
    xmm0 = MEMF(ebx + 0x294); /* movss */

loc_00556275: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    eax = esp + 0x30;
    ecx = esp + 0x28;
    PUSH32(esp, 0); sub_00555A40(); /* call 0x00555A40 */

loc_00556293: ;
    xmm0 = MEMF(0x5A0060); /* movss */
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3951B717);
    PUSH32(esp, 0x459C4000);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_005562B2: ;
    xmm0 = MEMF(0x64A978); /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x64A974); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64A970); /* movss */
    MEM32(esp + 0x44) = ecx;
    ecx = esp + 0x44;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64A120); /* movss */
    PUSH32(esp, ecx);
    SET_LO8(eax, LO8(eax) | 0xFF);
    edx = 0; /* xor self */
    MEM8(esp + 0x54) = 1;
    MEM8(esp + 0x55) = 0xFF;
    MEM32(esp + 0x5C) = 0x19;
    MEM16(esp + 0x60) = 0x65;
    MEM16(esp + 0x62) = 0x58;
    MEM16(esp + 0x68) = 0x13;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM8(esp + 0x74) = 0;
    MEM8(esp + 0x75) = 0;
    PUSH32(esp, 0); sub_00156070(); /* call 0x00156070 */

loc_00556341: ;
    SET_LO8(eax, MEM8(esp + 0x2B));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_005563D3; /* je: equal / zero */

loc_00556350: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00556355: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 0xA;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0055636B: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00556378: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEM8(esp + 0x15) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00556385: ;
    PUSH32(esp, 0xFF);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM8(esp + 0x32) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_005563A1: ;
    xmm0 = xmm0 * MEMF(0x64964C); /* mulss */
    eax = MEM32(esp + 0x3C);
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_005563D0: ;
    esp = esp + 0x2C;

loc_005563D3: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0); sub_00185180(); /* call 0x00185180 */

loc_005563E1: ;
    esp = esp + 8;

loc_005563E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_005563F0
 * Original: 0x005563F0 - 0x00556415 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005563F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_005563F0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x38));
    if (CMP_GE(LO16(eax), 0x20)) goto loc_0055640F; /* jge: greater or equal (signed >=) */

loc_005563FE: ;
    edx = ZX8(MEM8(ecx + 0x4C));
    eax = SX16(LO16(eax));
    eax = eax << 3;
    if (CMP_LE(edx, eax)) goto loc_0055640F; /* jle: less or equal (signed <=) */

loc_0055640C: ;
    MEM8(ecx + 0x4C) = LO8(eax);

loc_0055640F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00556420
 * Original: 0x00556420 - 0x005565E3 (451 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556420(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;

loc_00556420: ;
    esp = esp - 0x80;
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = 0x303;
    MEM32(esp + 0x34) = 0x29;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0055643C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm6; /* movss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    MEM8(esp + 0x14) = 0xB0;
    MEM8(esp + 0x15) = 0xA0;
    MEM8(esp + 0x16) = 0x2A;
    edx = edx + 0x19;
    MEM16(esp + 8) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0055646F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x17) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00556483: ;
    xmm0 = xmm0 * MEMF(0x64A330); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EBC); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x90); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x94); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x98); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_005564D1: ;
    xmm0 = xmm0 * MEMF(0x64925C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649BB0); /* addss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_005564F4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x68;
    edx = edx - 0x15;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xB0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00556511: ;
    esp = esp + 0xC;
    MEMF(esp + 0x70) = xmm6; /* movss */
    MEM32(esp + 0x74) = 0xE05;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00556527: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), 1)) goto loc_00556534; /* je: equal / zero */

loc_0055652C: ;
    MEM32(esp + 0x70) = 0xE45;

loc_00556534: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00556539: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00556545; /* je: equal / zero */

loc_0055653D: ;
    MEM32(esp + 0x70) = MEM32(esp + 0x70) | 0x80;

loc_00556545: ;
    xmm0 = MEMF(0x64A32C); /* movss */
    eax = 2;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, eax);
    ecx = 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x10;
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x64A328); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM8(esp + 0x8C) = 9;
    MEM8(esp + 0x8D) = 0xFF;
    MEM16(esp + 0x48) = 0x19;
    MEM16(esp + 0x4A) = 0xA;
    MEM16(esp + 0x4C) = 0x20;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_005565C7: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_005565D7; /* je: equal / zero */

loc_005565CE: ;
    edx = MEM32(esp);
    MEM32(eax + 0x170) = edx;

loc_005565D7: ;
    eax = 1;
    esp = esp + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_005565F0
 * Original: 0x005565F0 - 0x00556636 (70 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005565F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_005565F0: ;
    ecx = MEM32(0x7FA20C);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00556633; /* je: equal / zero */

loc_005565FE: ;
    edi = edi;

loc_00556600: ;
    ecx--;
    xmm0 = MEMF(eax + 0x88); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x170); /* mulss */
    MEMF(eax + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x170); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x90); /* mulss */
    MEMF(eax + 0x90) = xmm0; /* movss */
    if ((ecx != 0)) goto loc_00556600; /* jne: not equal / not zero */

loc_00556633: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00556640
 * Original: 0x00556640 - 0x00556877 (567 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556640(void)
{
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;

loc_00556640: ;
    esp = esp - 0xD4;
    xmm0 = MEMF(esp + 0xE0); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE4); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xE8); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x70) = 0x29E8;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 0x78) = 0x20;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_005566D3: ;
    xmm0 = xmm0 * MEMF(0x64A4A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    xmm6 = MEMF(0x648D80); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_005566FA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x58;
    edx = edx - 0x28;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x108);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00556717: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0055671C: ;
    xmm5 = MEMF(0x649298); /* movss */
    xmm7 = MEMF(0x649248); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00556743: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0055675A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x32;
    MEM32(esp + 0x80) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00556771: ;
    xmm0 = xmm0 * MEMF(0x64AF68); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AF64); /* subss */
    xmm5 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00556798: ;
    xmm0 = xmm0 * MEMF(0x64AF60); /* mulss */
    xmm0 = xmm0 + MEMF(0x5A005C); /* addss */
    ebx = 0; /* xor self */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x88) = LO8(ebx);
    MEM32(esp + 0x8C) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_005567CD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x4C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0x94) = 0x556880;
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0x9C) = ebx;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x90) = LO8(edx);
    edx = MEM32(esp + 0x124);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = 0x13E6E0;
    MEM32(esp + 0xD0) = 0x13E8F0;
    MEM8(esp + 0xD8) = 2;
    MEM32(esp + 0xDC) = ebx;
    MEM8(esp + 0xE0) = LO8(ebx);
    MEM16(esp + 0xE2) = 0x20;
    MEM16(esp + 0xE4) = 7;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00556866: ;
    esp = esp + 0x2C;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_00556880
 * Original: 0x00556880 - 0x00556935 (181 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556880(void)
{
    float xmm0, xmm1, xmm2;

loc_00556880: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(eax + 0x78); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x60); /* addss */
    MEMF(eax + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x90); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x7C); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x64); /* addss */
    MEMF(eax + 0x64) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x80); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x68); /* addss */
    MEMF(eax + 0x68) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x7C); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x84); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x88); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x8C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x7C) = xmm2; /* movss */
    MEMF(eax + 0x44) = xmm1; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00556938
 * Original: 0x00556938 - 0x00556964 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556938(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00556938: ;
    esi--;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    edx = (uint32_t)((int32_t)MEM32(ebp) * (int32_t)0xC2880000u);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    eax++;
    MEM8(esi + 0x6000C41) = (uint32_t)((int32_t)MEM8(esi + 0x6000C41) >> 0);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: in al, dx */
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM8(esi), HI8(ebx) - flags set for next jcc */
    edx = edx | edi;
    edi = edi & MEM32(0x3DCCCCCD);
    /* nop */
    esp += 15737; return; /* ret 15733 */

}

/**
 * sub_005569E0
 * Original: 0x005569E0 - 0x005569F5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005569E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_005569E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2D);
    eax = 0x48;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_005569ED: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_005569F5(); return; } /* jne: not equal / not zero */

loc_005569F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00556A30
 * Original: 0x00556A30 - 0x00556A88 (88 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00556A30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi + 0x2C), 1)) goto loc_00556A86; /* je: equal / zero */

loc_00556A3B: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x3C) = MEM16(esi + 0x3C) - LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x3C));
    if (((int32_t)MEM16(esi + 0x3C) >= 0)) goto loc_00556A86; /* jns: not sign (positive) */

loc_00556A4B: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00556A5C; /* jne: not equal / not zero */

loc_00556A52: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 0x4C) = 0;

loc_00556A5C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00556A86; /* jne: not equal / not zero */

loc_00556A65: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00556A6C: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00556A86; /* jl: less (signed <) */

loc_00556A73: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_00556A88(); return; } /* je: equal / zero */

loc_00556A80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00556A83: ;
    esp = esp + 4;

loc_00556A86: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00556AA0
 * Original: 0x00556AA0 - 0x00556B8E (238 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556AA0(void)
{
    float xmm0;

loc_00556AA0: ;
    esp = esp - 0x40;
    edx = MEM32(eax + 4);
    xmm0 = MEMF(0x648CE4); /* movss */
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64ADD8); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64ADD4); /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E68); /* movss */
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x50;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64ADD0); /* movss */
    PUSH32(esp, 1);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0); /* xor self */
    esi = esp + 0x1C;
    MEM32(esp + 0x1C) = 0xA;
    MEM32(esp + 0x20) = 7;
    MEM16(esp + 0x30) = 0;
    MEM16(esp + 0x32) = 0xFF;
    MEM16(esp + 0x34) = 0xFFCB;
    MEM16(esp + 0x36) = 0x18;
    MEM16(esp + 0x48) = 0x32;
    MEM16(esp + 0x4A) = 0x14;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4550(); /* call 0x000F4550 */

loc_00556B86: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00556B90
 * Original: 0x00556B90 - 0x00556D58 (456 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556B90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00556B90: ;
    esp = esp - 0xD4;
    edx = MEM32(0x595D1C);
    eax = MEM32(0x595D14);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648D80); /* movss */
    xmm2 = MEMF(esi + 0x18); /* movss */
    ecx = MEM32(0x595D18);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x60) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0xE4);
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x68) = edx;
    edx = MEM32(esp + 0xE8);
    PUSH32(esp, edx);
    xmm2 = xmm2 * xmm1; /* mulss */
    PUSH32(esp, 4);
    MEM32(esp + 0x7C) = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    PUSH32(esp, ebx);
    eax = 0xFF;
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x1C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEM8(esp + 0x90) = LO8(eax);
    MEM16(esp + 0xC4) = LO16(eax);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    PUSH32(esp, 3);
    MEM32(esp + 0xE8) = eax;
    MEM32(esp + 0xEC) = eax;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(esp + 0xF4);
    eax = esp + 0x1C;
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEM32(esp + 0x8C) = 0x980;
    MEM32(esp + 0x94) = ecx;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM32(esp + 0x9C) = ebx;
    MEM32(esp + 0xC4) = 0xCF570;
    MEM32(esp + 0xA4) = 0x556D60;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = 0x13E6E0;
    MEM32(esp + 0xC0) = 0x13EC40;
    MEM8(esp + 0xC8) = LO8(ebx);
    MEM32(esp + 0xCC) = ebx;
    MEM8(esp + 0xD0) = LO8(ebx);
    MEM16(esp + 0xD2) = 1;
    MEM32(esp + 0xEC) = ebx;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00556D43: ;
    esp = esp + 0x20;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_00556D51; /* je: equal / zero */

loc_00556D4B: ;
    MEM32(eax + 0x290) = esi;

loc_00556D51: ;
    esp = esp + 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_00556D60
 * Original: 0x00556D60 - 0x00556DB7 (87 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556D60(void)
{
    float xmm0, xmm1;

loc_00556D60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x290);
    xmm1 = MEMF(ecx + 0x18); /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x64) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x68) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00556DC0
 * Original: 0x00556DC0 - 0x00556F34 (372 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556DC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00556DC0: ;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    eax = esp + 4;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_00556DD0: ;
    eax = MEM32(esp + 0x11C);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esi + 0x18); /* movss */
    SET_LO16(edx, MEM16(esp + 0x120));
    MEM32(esp + 0x58) = eax;
    eax = 2;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x80) = eax;
    eax = 0xFF;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM8(esp + 0x48) = LO8(eax);
    MEM8(esp + 0x49) = LO8(eax);
    MEM8(esp + 0x4A) = LO8(eax);
    MEM8(esp + 0x4B) = LO8(eax);
    MEM8(esp + 0x3C) = LO8(eax);
    MEM16(esp + 0x46) = LO16(eax);
    eax = MEM32(esp + 0x124);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    PUSH32(esp, 3);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    PUSH32(esp, 0x17);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    PUSH32(esp, ebx);
    ecx = 1;
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0x27);
    PUSH32(esp, 0x597978);
    eax = esp + 0x2C;
    MEM32(esp + 0x74) = 0x303;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x7C) = LO8(ecx);
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0x9C) = 4;
    MEM32(esp + 0xA4) = ebx;
    MEM16(esp + 0x2E) = LO16(edx);
    MEM32(esp + 0xAC) = ebx;
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x5C) = 0x4400081;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM16(esp + 0x6C) = LO16(ecx);
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_00556F1F: ;
    esp = esp + 0x28;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_00556F2D; /* je: equal / zero */

loc_00556F27: ;
    MEM32(eax + 0x310) = esi;

loc_00556F2D: ;
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_00556F40
 * Original: 0x00556F40 - 0x00556F97 (87 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556F40(void)
{
    float xmm0, xmm1;

loc_00556F40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x310);
    xmm1 = MEMF(ecx + 0x18); /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x4C) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x44) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x48) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00556FA0
 * Original: 0x00556FA0 - 0x005574AE (1294 bytes, 337 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00556FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x3C4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x3C8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, esi)) goto loc_005572D6; /* je: equal / zero */

loc_00556FC2: ;
    eax = MEM32(ebx + 0x68);
    if (CMP_EQ(eax, 0xE0)) goto loc_00557128; /* je: equal / zero */

loc_00556FD0: ;
    if (CMP_EQ(eax, 0xEA)) goto loc_00557128; /* je: equal / zero */

loc_00556FDB: ;
    if (CMP_EQ(eax, 0xDF)) goto loc_00557128; /* je: equal / zero */

loc_00556FE6: ;
    if (CMP_EQ(eax, 0xE9)) goto loc_00557128; /* je: equal / zero */

loc_00556FF1: ;
    if (CMP_EQ(eax, 0x12F)) goto loc_00557128; /* je: equal / zero */

loc_00556FFC: ;
    if (CMP_EQ(eax, 0xEC)) goto loc_00557128; /* je: equal / zero */

loc_00557007: ;
    if (CMP_EQ(eax, 0x12C)) goto loc_00557128; /* je: equal / zero */

loc_00557012: ;
    if (CMP_EQ(eax, 0xE2)) goto loc_00557128; /* je: equal / zero */

loc_0055701D: ;
    if (CMP_EQ(eax, 0xDE)) goto loc_00557128; /* je: equal / zero */

loc_00557028: ;
    if (CMP_EQ(eax, 0xE8)) goto loc_00557128; /* je: equal / zero */

loc_00557033: ;
    if (CMP_EQ(eax, 0xDD)) goto loc_00557128; /* je: equal / zero */

loc_0055703E: ;
    if (CMP_EQ(eax, 0xC1)) goto loc_00557077; /* je: equal / zero */

loc_00557045: ;
    if (CMP_EQ(eax, 0xCC)) goto loc_00557077; /* je: equal / zero */

loc_0055704C: ;
    eax = ZX8(MEM8(ebp + 0x10));
    ecx = MEM32(eax * 4 + 0x5582C0);
    edx = MEM32(ebx + 0x4B0);
    eax = MEM32(edx + 0x24);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    esi = esp + 0x20;
    edi = 0x5F369C;
    PUSH32(esp, 0); sub_003ECD90(); /* call 0x003ECD90 */

loc_00557072: ;
    esp = esp + 4;
    goto loc_005570DF;

loc_00557077: ;
    eax = ZX8(MEM8(ebp + 0x10));
    xmm0 = MEMF(0x64A2A8); /* movss */
    xmm1 = MEMF(0x64A2A4); /* movss */
    xmm2 = MEMF(0x64A2A0); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A29C); /* movss */
    ecx = eax + eax * 2;
    edx = esp + ecx * 4 + 0x4C;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    edi = 0x5F0C0C;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;

loc_005570DF: ;
    eax = esp + 0x1C0;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_005570EF: ;
    esp = esp + 8;
    ecx = esp + 0x1C0;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00557107: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5A02F0);
    edx = esp + 0x1C8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E25F0(); /* call 0x003E25F0 */

loc_0055711E: ;
    esp = esp + 0xC;
    esi = 0; /* xor self */
    goto loc_0055730A;

loc_00557128: ;
    edi = 0; /* xor self */
    if (CMP_NE(eax, 0xE9)) goto loc_00557138; /* jne: not equal / not zero */

loc_00557131: ;
    edi = 4;
    goto loc_0055716E;

loc_00557138: ;
    if (CMP_NE(eax, 0xEC)) goto loc_00557146; /* jne: not equal / not zero */

loc_0055713F: ;
    edi = 8;
    goto loc_0055716E;

loc_00557146: ;
    if (CMP_NE(eax, 0xE2)) goto loc_00557154; /* jne: not equal / not zero */

loc_0055714D: ;
    edi = 0xC;
    goto loc_0055716E;

loc_00557154: ;
    if (CMP_NE(eax, 0xE8)) goto loc_00557162; /* jne: not equal / not zero */

loc_0055715B: ;
    edi = 0x10;
    goto loc_0055716E;

loc_00557162: ;
    if (CMP_NE(eax, 0xDD)) goto loc_0055716E; /* jne: not equal / not zero */

loc_00557169: ;
    edi = 0x14;

loc_0055716E: ;
    PUSH32(esp, esi);
    SET_LO8(eax, 0x79);
    ecx = esp + 0x1C4;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0055717D: ;
    eax = ZX8(MEM8(ebp + 0x10));
    edi = edi + eax * 2;
    edi = edi * 4 + 0x558260;
    MEM32(esp + 0x18) = esi;
    esp = esp + 4;
    esi = esp + 0x64;
    MEM32(esp + 0x10) = edi;
    goto loc_005571A0;

loc_0055719C: ;
    edi = MEM32(esp + 0x10);

loc_005571A0: ;
    edx = MEM32(ebx + 0x4B0);
    ecx = MEM32(edi);
    eax = MEM32(edx + 0x24);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ECCD0(); /* call 0x003ECCD0 */

loc_005571B4: ;
    esp = esp + 4;
    if (CMP_NE(eax, 1)) goto loc_0055748C; /* jne: not equal / not zero */

loc_005571C0: ;
    eax = MEM32(ebx + 0x4B0);
    edx = MEM32(edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003ECD30(); /* call 0x003ECD30 */

loc_005571D9: ;
    esp = esp + 8;
    if (CMP_NE(eax, 1)) goto loc_0055748C; /* jne: not equal / not zero */

loc_005571E5: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    eax = esp + 0x394;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_005571F6: ;
    esp = esp + 4;
    edx = esp + 0x1C0;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    edi = esi + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0055720B: ;
    eax = esp + 0x390;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0055721A: ;
    ecx = esp + 0x390;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00557229: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    eax++;
    edi = edi + 4;
    esi = esi + 0xC;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edi;
    if (CMP_L(eax, 2)) goto loc_0055719C; /* jl: less (signed <) */

loc_00557249: ;
    edx = esp + 0x7C;
    eax = esp + 0x88;
    ecx = esp + 0x94;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x7C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00557299: ;
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x78);
    ebx = MEM32(ebp + 8);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x7C);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x80);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x84);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;
    esi = 0; /* xor self */
    goto loc_0055730A;

loc_005572D6: ;
    edx = ebx + 0x78;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x5A02F0);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x5A02F4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x5A02F8);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;

loc_0055730A: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x34)) goto loc_0055731E; /* je: equal / zero */

loc_00557314: ;
    (void)0; /* cmp eax, 0x26 - flags set for next jcc */
    MEM8(esp + 0x1B) = 0;
    if (CMP_NE(eax, 0x26)) goto loc_00557323; /* jne: not equal / not zero */

loc_0055731E: ;
    MEM8(esp + 0x1B) = 5;

loc_00557323: ;
    eax = ebx + 0x84;
    ecx = ebx + 0x78;
    edx = esp + 0x34;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(0x7FA21C); /* divss */
    eax = esp + 0x34;
    ecx = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = ecx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    if (CMP_EQ(MEM32(ebp + 0x1C), esi)) { sub_005574AE(); return; } /* je: equal / zero */

loc_005573B5: ;
    edi = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0xA0) = eax;
    PUSH32(esp, 0x4100000);
    ecx = 0x68;
    eax = 0x637EEC;
    esi = edi;
    MEM32(esp + 0x50) = 2;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = ebx;
    PUSH32(esp, 0); sub_002A33F0(); /* call 0x002A33F0 */

loc_005573EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x459C4000);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    esi = esp + 0xD4;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_0055741A: ;
    eax = MEM32(esp + 0xD4);
    esi = 0; /* xor self */
    esp = esp + 0x34;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x780AB0) = esi;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = esi;
    if (CMP_EQ(eax, esi)) goto loc_00557496; /* je: equal / zero */

loc_00557447: ;
    ecx = MEM32(eax + 0x64);
    if (CMP_NE(ecx, 1)) goto loc_00557457; /* jne: not equal / not zero */

loc_0055744F: ;
    edx = MEM32(eax + 0x238);
    goto loc_0055747B;

loc_00557457: ;
    if (CMP_NE(ecx, 0x35)) goto loc_00557496; /* jne: not equal / not zero */

loc_0055745C: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00394EE0(); /* call 0x00394EE0 */

loc_00557463: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00557496; /* je: equal / zero */

loc_00557468: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = MEM32(eax + ecx + 0x238);

loc_0055747B: ;
    eax = MEM32(edi + 0x238);
    ecx = MEM32(edx);
    if (CMP_NE(ecx, MEM32(eax))) goto loc_00557496; /* jne: not equal / not zero */

loc_00557487: ;
    edx = MEM32(ebp + 0x1C);
    MEM32(edx) = esi;

loc_0055748C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00557496: ;
    eax = MEM32(ebp + 0x1C);
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005579E0
 * Original: 0x005579E0 - 0x005579FB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005579E0(void)
{

loc_005579E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_000BD480(); /* call 0x000BD480 */

loc_005579F6: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00557A00
 * Original: 0x00557A00 - 0x00557CD5 (725 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557A00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557A00: ;
    esp = esp - 0x8C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    xmm0 = MEMF(ebp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x5C); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00557CCD; /* jbe: below or equal (unsigned <=) */

loc_00557A32: ;
    xmm1 = MEMF(0x649E4C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEM8(esp + 0x89) = LO8(eax);
    MEM8(esp + 0x8A) = LO8(eax);
    eax = MEM32(ebp + 0x4C);
    xmm1 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x80); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x48) = 0x303;
    MEM8(esp + 0x10) = 0;
    MEM8(esp + 0x11) = 0;
    MEM32(esp + 0x4C) = 0xD1;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM16(esp + 0x50) = 0xC8;
    MEM16(esp + 0x52) = 1;
    ebx = 0x80D017;
    MEM8(esp + 0x94) = 0x19;
    MEM8(esp + 0x97) = 0;
    MEM16(esp + 0x54) = 0x64;
    MEM8(esp + 0x2C) = 0x7B;
    MEM8(esp + 0x2D) = 0x93;
    MEM8(esp + 0x2E) = 0xAA;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */

loc_00557B08: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00557B0D: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00557B19; /* jns: not sign (positive) */

loc_00557B14: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00557B19: ;
    SET_LO8(eax, LO8(eax) + 2);
    MEM8(esp + 0x12) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00557B24: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00557B30; /* jns: not sign (positive) */

loc_00557B2B: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00557B30: ;
    SET_LO8(eax, LO8(eax) + 2);
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00557B3B: ;
    xmm5 = MEMF(0x648CDC); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00557B52: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00557B61: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00557B8A: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00557B96: ;
    eax = eax & 1;
    esi = esi | eax;
    esi = esi << 6;
    ebx = ebx & 0xFFFFFF3Fu;
    ebx = ebx | esi;
    MEM32(esp + 0x8C) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00557BB2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x51;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x74);
    MEM8(esp + 0x2F) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00557BC6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x4C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = (float)(int32_t)MEM32(0x6A33A0); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    edx = edx + 0x64;
    MEM16(esp + 0x20) = LO16(edx);
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00557BFC: ;
    xmm0 = xmm0 * MEMF(ebp + 0x54); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x50); /* addss */
    eax = 2;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x40) = eax;
    SET_LO8(eax, MEM8(ebp + 4));
    esi = 0; /* xor self */
    MEM8(esp + 0x1C) = LO8(eax);
    (void)0; /* cmp MEM32(0x771CD0), 0x2EE - flags set for next jcc */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x3C) = 4;
    MEM32(esp + 0x44) = esi;
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_00557CAB; /* jge: greater or equal (signed >=) */

loc_00557C48: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6C);
    eax = 0x17C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00557C59: ;
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_00557CAB; /* je: equal / zero */

loc_00557C60: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(edx, MEM16(edx));
    ecx = MEM32(0x771CD0);
    ecx++;
    MEM16(eax + 0x2E) = LO16(edx);
    edx = MEM32(esp + 0x14);
    MEM8(eax + 0x154) = 0;
    MEM8(eax + 0x160) = 0;
    MEM32(0x771CD0) = ecx;
    ecx = MEM32(esp + 0x10);
    eax = eax + 0x170;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_00557CAB: ;
    xmm0 = MEMF(ebp + 0x5C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00557B08; /* ja: above (unsigned >) */

loc_00557CCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00557CCD: ;
    POP32(esp, ebp);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_00557CD8
 * Original: 0x00557CD8 - 0x005582CD (1525 bytes, 1059 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00557CD8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00557CD8: ;
    if (_flags /* jl: less (signed <) */) goto loc_00557D1D;

loc_00557CDA: ;
    ebp++;
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) (void)0; /* goto loc_00557D60 - dead code, label not in function */ /* jns: not sign (positive) */

loc_00557CE4: ;
    if (1) goto loc_00557D5B; /* jae: above or equal (unsigned >=) */

loc_00557CE6: ;
    if (1) goto loc_00557D58; /* jae: above or equal (unsigned >=) */

loc_00557CE8: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_00557D55;

loc_00557CEC: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jl: less (signed <) */) goto loc_00557D4F;

loc_00557CF0: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    if (_flags /* jb: below (unsigned <) */) goto loc_00557D5C;

loc_00557CFA: ;
    /* TODO: popal  */
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_00557D6F - dead code, label not in function */

loc_00557CFD: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);
    SET_HI8(ebx, HI8(ebx) ^ MEM8(edi + ebx * 2 + 0x4C));
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_00557D6F - dead code, label not in function */

loc_00557D0D: ;
    /* TODO: popal  */
    if (_flags /* jb: below (unsigned <) */) goto loc_00557D82;

loc_00557D10: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x32657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_00557D1D: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ebx + eax * 2 + 0x45) = MEM8(ebx + eax * 2 + 0x45) + HI8(ebx);
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) (void)0; /* goto loc_00557DA8 - dead code, label not in function */ /* jns: not sign (positive) */

loc_00557D2C: ;
    if (1) goto loc_00557DA3; /* jae: above or equal (unsigned >=) */

loc_00557D2E: ;
    if (1) (void)0; /* goto loc_00557DA0 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_00557D30: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_00557D9D - dead code, label not in function */

loc_00557D34: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jl: less (signed <) */) goto loc_00557D97;

loc_00557D38: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    if (_flags /* jb: below (unsigned <) */) goto loc_00557DA4;

loc_00557D42: ;
    /* TODO: popal  */
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_00557DB7 - dead code, label not in function */

loc_00557D45: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);
    MEM32(edi + ebx * 2 + 0x4C) = MEM32(edi + ebx * 2 + 0x4C) ^ edi;
    edi--;
    ebx++;
    ecx++;

loc_00557D4F: ;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_00557DB7 - dead code, label not in function */

loc_00557D55: ;
    /* TODO: popal  */
    if (_flags /* jb: below (unsigned <) */) goto loc_00557DCA;

loc_00557D58: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);

loc_00557D5B: ;
    PUSH32(esp, ebx);

loc_00557D5C: ;
    PUSH32(esp, 0x31657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ebx + eax * 2 + 0x45) = MEM8(ebx + eax * 2 + 0x45) + HI8(ebx);
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) (void)0; /* goto loc_00557DF0 - dead code, label not in function */ /* jns: not sign (positive) */

loc_00557D74: ;
    if (1) goto loc_00557DEB; /* jae: above or equal (unsigned >=) */

loc_00557D76: ;
    if (1) (void)0; /* goto loc_00557DE8 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_00557D78: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_00557DE5 - dead code, label not in function */

loc_00557D7C: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jl: less (signed <) */) goto loc_00557DDF;

loc_00557D80: ;
    esp--;
    edi--;

loc_00557D82: ;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: bound esp, qword ptr [ecx + 0x72] */
    if (_flags /* jb: below (unsigned <) */) goto loc_00557DF3;

loc_00557D8E: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);
    SET_HI8(ebx, HI8(ebx) ^ MEM8(edi + ebx * 2 + 0x4C));
    edi--;
    ebx++;
    ecx++;

loc_00557D97: ;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: bound esp, qword ptr [ecx + 0x72] */
    if (_flags /* jb: below (unsigned <) */) goto loc_00557E06;

loc_00557DA1: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);

loc_00557DA3: ;
    PUSH32(esp, ebx);

loc_00557DA4: ;
    PUSH32(esp, 0x32657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ebx + eax * 2 + 0x45) = MEM8(ebx + eax * 2 + 0x45) + HI8(ebx);
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) goto loc_00557E38; /* jns: not sign (positive) */

loc_00557DBC: ;
    if (1) goto loc_00557E33; /* jae: above or equal (unsigned >=) */

loc_00557DBE: ;
    if (1) (void)0; /* goto loc_00557E30 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_00557DC0: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_00557E2D - dead code, label not in function */

loc_00557DC4: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jl: less (signed <) */) goto loc_00557E27;

loc_00557DC8: ;
    esp--;
    edi--;

loc_00557DCA: ;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: bound esp, qword ptr [ecx + 0x72] */
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_00557E3B - dead code, label not in function */

loc_00557DD6: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);
    MEM32(edi + ebx * 2 + 0x4C) = MEM32(edi + ebx * 2 + 0x4C) ^ edi;
    edi--;
    ebx++;
    ecx++;

loc_00557DDF: ;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: bound esp, qword ptr [ecx + 0x72] */
    if (_flags /* jb: below (unsigned <) */) goto loc_00557E4E;

loc_00557DE9: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);

loc_00557DEB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x31657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_00557DF3: ;
    MEM8(ebx + eax * 2 + 0x45) = MEM8(ebx + eax * 2 + 0x45) + HI8(ebx);
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) goto loc_00557E7C; /* jns: not sign (positive) */

loc_00557E00: ;
    if (1) (void)0; /* goto loc_00557E76 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_00557E02: ;
    /* TODO: popal  */
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_00557E6F - dead code, label not in function */

loc_00557E06: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jl: less (signed <) */) goto loc_00557E69;

loc_00557E0A: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    /* TODO: bound esp, qword ptr [ecx + 0x72] */
    if (_flags /* jb: below (unsigned <) */) goto loc_00557E7C;

loc_00557E17: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);
    SET_HI8(ebx, HI8(ebx) ^ MEM8(edi + ebx * 2 + 0x4C));
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    /* TODO: bound esp, qword ptr [ecx + 0x72] */

loc_00557E27: ;
    if (_flags /* jb: below (unsigned <) */) goto loc_00557E8E;

loc_00557E29: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x32657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_00557E33: ;
    MEM8(ebx + eax * 2 + 0x45) = MEM8(ebx + eax * 2 + 0x45) + HI8(ebx);
    esi--;

loc_00557E38: ;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) goto loc_00557EBC; /* jns: not sign (positive) */

loc_00557E40: ;
    if (1) goto loc_00557EB6; /* jae: above or equal (unsigned >=) */

loc_00557E42: ;
    /* TODO: popal  */
    if (_flags /* jb: below (unsigned <) */) goto loc_00557EAF;

loc_00557E46: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jl: less (signed <) */) goto loc_00557EA9;

loc_00557E4A: ;
    esp--;
    edi--;
    ebx++;
    ecx++;

loc_00557E4E: ;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    /* TODO: bound esp, qword ptr [ecx + 0x72] */
    if (_flags /* jb: below (unsigned <) */) goto loc_00557EBC;

loc_00557E57: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);
    MEM32(edi + ebx * 2 + 0x4C) = MEM32(edi + ebx * 2 + 0x4C) ^ edi;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    /* TODO: bound esp, qword ptr [ecx + 0x72] */
    if (_flags /* jb: below (unsigned <) */) (void)0; /* goto loc_00557ECE - dead code, label not in function */

loc_00557E69: ;
    /* TODO: insb byte ptr es:[edi], dx */
    POP32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x31657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ebx + eax * 2 + 0x45) = MEM8(ebx + eax * 2 + 0x45) + HI8(ebx);
    esi--;

loc_00557E7C: ;
    PUSH32(esp, esp);
    MEM32(edx + eax * 2 + 0x4F) = MEM32(edx + eax * 2 + 0x4F) ^ edi;
    esp++;
    POP32(esp, ecx);
    if (((int32_t)esp < 0)) goto loc_00557ED9; /* jl: less (signed <) */

loc_00557E85: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    PUSH32(esp, esp);
    POP32(esp, edi);
    PUSH32(esp, edx);
    edi--;
    PUSH32(esp, esp);

loc_00557E8E: ;
    ecx++;
    PUSH32(esp, esp);
    ebp++;
    if (((int32_t)ebp < 0)) goto loc_00557EDA; /* jl: less (signed <) */

loc_00557E93: ;
    PUSH32(esp, ebp);
    esi--;
    POP32(esp, edi);
    PUSH32(esp, edx);
    edi--;
    PUSH32(esp, esp);
    ecx++;
    PUSH32(esp, esp);
    ebp++;
    if (((int32_t)ebp < 0)) goto loc_00557EFD; /* jl: less (signed <) */

loc_00557E9E: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, edx);

loc_00557EA9: ;
    PUSH32(esp, edx);
    ebp++;
    esp--;
    if (((int32_t)esp < 0)) goto loc_00557F0D; /* jl: less (signed <) */

loc_00557EAE: ;
    esp--;

loc_00557EAF: ;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);

loc_00557EB6: ;
    edx++;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;

loc_00557EBC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (((int32_t)MEM8(eax) < 0)) goto loc_00557F0D; /* jl: less (signed <) */

loc_00557ECA: ;
    ebp++;
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + eax * 2 + 0x4F) = MEM32(edx + eax * 2 + 0x4F) ^ edi;
    esp++;
    POP32(esp, ecx);
    if (((int32_t)esp < 0)) (void)0; /* goto loc_00557F29 - dead code, label not in function */ /* jl: less (signed <) */

loc_00557ED5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;

loc_00557ED9: ;
    PUSH32(esp, esp);

loc_00557EDA: ;
    POP32(esp, edi);
    PUSH32(esp, edx);
    edi--;
    PUSH32(esp, esp);
    ecx++;
    PUSH32(esp, esp);
    ebp++;
    if (((int32_t)ebp < 0)) goto loc_00557F2A; /* jl: less (signed <) */

loc_00557EE3: ;
    PUSH32(esp, ebp);
    esi--;
    POP32(esp, edi);
    PUSH32(esp, edx);
    edi--;
    PUSH32(esp, esp);
    ecx++;
    PUSH32(esp, esp);
    ebp++;
    if (((int32_t)ebp < 0)) goto loc_00557F4D; /* jl: less (signed <) */

loc_00557EEE: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, ebx);
    ebp++;
    POP32(esp, edi);
    edx++;
    ecx++;

loc_00557EFD: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    if (((int32_t)esp < 0)) (void)0; /* goto loc_00557F62 - dead code, label not in function */ /* jl: less (signed <) */

loc_00557F03: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;
    ecx++;

loc_00557F0D: ;
    PUSH32(esp, ebx);
    ebp++;
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x657061);
    if (((int32_t)esp < 0)) goto loc_00557F61; /* jl: less (signed <) */

loc_00557F1E: ;
    ebp++;
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) goto loc_00557F5B; /* jns: not sign (positive) */

loc_00557F28: ;
    if (((int32_t)MEM32(edx + 0x6F) < 0)) goto loc_00557F91; /* jl: less (signed <) */

loc_00557F2A: ;
    if ((MEM32(edx + 0x6F) != 0)) (void)0; /* goto loc_00557F9A - dead code, label not in function */ /* jne: not equal / not zero */

loc_00557F2C: ;
    POP32(esp, edi);
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_00557F9F - dead code, label not in function */

loc_00557F31: ;
    if (_flags /* je: equal / zero */) goto loc_00557FAF;

loc_00557F33: ;
    POP32(esp, edi);
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    if (((int32_t)esp < 0)) goto loc_00557FA3; /* jl: less (signed <) */

loc_00557F44: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;

loc_00557F4D: ;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x657061);
    if (((int32_t)esp < 0)) (void)0; /* goto loc_00557F9D - dead code, label not in function */ /* jl: less (signed <) */

loc_00557F5A: ;
    ebp++;

loc_00557F5B: ;
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;

loc_00557F61: ;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) goto loc_00557F97; /* jns: not sign (positive) */

loc_00557F64: ;
    if (((int32_t)MEM32(edx + 0x6F) < 0)) goto loc_00557FCD; /* jl: less (signed <) */

loc_00557F66: ;
    if ((MEM32(edx + 0x6F) != 0)) goto loc_00557FD6; /* jne: not equal / not zero */

loc_00557F68: ;
    POP32(esp, edi);
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jne: not equal / not zero */) goto loc_00557FDB;

loc_00557F6D: ;
    if (_flags /* je: equal / zero */) goto loc_00557FEB;

loc_00557F6F: ;
    POP32(esp, edi);
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, ebx);
    ebp++;
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    if (((int32_t)esp < 0)) goto loc_00557FE4; /* jl: less (signed <) */

loc_00557F85: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, ebx);
    ebp++;

loc_00557F91: ;
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;

loc_00557F97: ;
    esp--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_00557FE5 - dead code, label not in function */ /* jl: less (signed <) */

loc_00557FA2: ;
    ebp++;

loc_00557FA3: ;
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) goto loc_00558028; /* jns: not sign (positive) */

loc_00557FAC: ;
    POP32(esp, edi);
    esp--;
    edi--;

loc_00557FAF: ;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    PUSH32(esp, edx);
    ecx--;
    edi++;
    eax--;
    PUSH32(esp, esp);
    ebp--;
    ecx--;
    esi--;
    ecx--;
    edi++;
    PUSH32(esp, ebp);
    esi--;
    POP32(esp, edi);
    SET_HI8(ebx, HI8(ebx) ^ MEM8(edi + ebx * 2 + 0x4C));
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);

loc_00557FCD: ;
    PUSH32(esp, edx);
    ecx--;
    edi++;
    eax--;
    PUSH32(esp, esp);
    ebp--;
    ecx--;
    esi--;
    ecx--;

loc_00557FD6: ;
    edi++;
    PUSH32(esp, ebp);
    esi--;
    POP32(esp, edi);
    PUSH32(esp, ebx);

loc_00557FDB: ;
    PUSH32(esp, 0x32657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_00557FE4: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_0055802D - dead code, label not in function */ /* jl: less (signed <) */

loc_00557FEA: ;
    ebp++;

loc_00557FEB: ;
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) goto loc_00558070; /* jns: not sign (positive) */

loc_00557FF4: ;
    POP32(esp, edi);
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    PUSH32(esp, edx);
    ecx--;
    edi++;
    eax--;
    PUSH32(esp, esp);
    ebp--;
    ecx--;
    esi--;
    ecx--;
    edi++;
    PUSH32(esp, ebp);
    esi--;
    POP32(esp, edi);
    MEM32(edi + ebx * 2 + 0x4C) = MEM32(edi + ebx * 2 + 0x4C) ^ edi;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    PUSH32(esp, edx);
    ecx--;
    edi++;
    eax--;
    PUSH32(esp, esp);
    ebp--;
    ecx--;
    esi--;
    ecx--;
    edi++;
    PUSH32(esp, ebp);
    esi--;
    POP32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x31657061);

loc_00558028: ;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (((int32_t)MEM8(eax) < 0)) goto loc_00558071; /* jl: less (signed <) */

loc_0055802E: ;
    ebp++;
    esi--;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) (void)0; /* goto loc_005580B4 - dead code, label not in function */ /* jns: not sign (positive) */

loc_00558038: ;
    POP32(esp, edi);
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    esp--;
    ebp++;
    esi++;
    PUSH32(esp, esp);
    ebp--;
    ecx--;
    esi--;
    ecx--;
    edi++;
    PUSH32(esp, ebp);
    esi--;
    POP32(esp, edi);
    SET_HI8(ebx, HI8(ebx) ^ MEM8(edi + ebx * 2 + 0x4C));
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    esp--;
    ebp++;
    esi++;
    PUSH32(esp, esp);
    ebp--;
    ecx--;
    esi--;
    ecx--;
    edi++;
    PUSH32(esp, ebp);
    esi--;
    POP32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x32657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (((int32_t)MEM8(eax) < 0)) goto loc_005580B1; /* jl: less (signed <) */

loc_0055806E: ;
    ebp++;
    esi--;

loc_00558070: ;
    PUSH32(esp, esp);

loc_00558071: ;
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) goto loc_005580F4; /* jns: not sign (positive) */

loc_00558078: ;
    POP32(esp, edi);
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    esp--;
    ebp++;
    esi++;
    PUSH32(esp, esp);
    ebp--;
    ecx--;
    esi--;
    ecx--;
    edi++;
    PUSH32(esp, ebp);
    esi--;
    POP32(esp, edi);
    MEM32(edi + ebx * 2 + 0x4C) = MEM32(edi + ebx * 2 + 0x4C) ^ edi;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    esp--;
    ebp++;
    esi++;
    PUSH32(esp, esp);
    ebp--;
    ecx--;
    esi--;
    ecx--;
    edi++;
    PUSH32(esp, ebp);
    esi--;
    POP32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x31657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_005580F1 - dead code, label not in function */ /* jl: less (signed <) */

loc_005580AE: ;
    ebp++;
    esi--;
    PUSH32(esp, esp);

loc_005580B1: ;
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) goto loc_00558134; /* jns: not sign (positive) */

loc_005580B8: ;
    if ((MEM32(edx + 0x6F) != 0)) goto loc_00558129; /* jne: not equal / not zero */

loc_005580BB: ;
    if (((int32_t)MEM32(edx + 0x6F) < 0)) goto loc_00558124; /* jl: less (signed <) */

loc_005580BD: ;
    if ((MEM32(edx + 0x6F) != 0)) goto loc_0055812D; /* jne: not equal / not zero */

loc_005580BF: ;
    if (0) goto loc_00558130; /* jb: below (unsigned <) */

loc_005580C1: ;
    if ((MEM32(edx + 0x6F) == 0)) goto loc_00558124; /* je: equal / zero */

loc_005580C3: ;
    if ((MEM32(edx + 0x6F) == 0)) goto loc_0055812A; /* je: equal / zero */

loc_005580C5: ;
    if (((int32_t)MEM32(edx + 0x6F) < 0)) goto loc_00558126; /* jl: less (signed <) */

loc_005580C7: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    if (((int32_t)esp < 0)) (void)0; /* goto loc_00558136 - dead code, label not in function */ /* jl: less (signed <) */

loc_005580D7: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ebx + eax * 2 + 0x45) = MEM8(ebx + eax * 2 + 0x45) + HI8(ebx);
    esi--;

loc_005580F4: ;
    PUSH32(esp, esp);
    MEM32(edx + 0x6F) = MEM32(edx + 0x6F) ^ edi;
    if (((int32_t)MEM32(edx + 0x6F) >= 0)) (void)0; /* goto loc_00558178 - dead code, label not in function */ /* jns: not sign (positive) */

loc_005580FC: ;
    if ((MEM32(edx + 0x6F) != 0)) goto loc_0055816D; /* jne: not equal / not zero */

loc_005580FF: ;
    if (((int32_t)MEM32(edx + 0x6F) < 0)) goto loc_00558168; /* jl: less (signed <) */

loc_00558101: ;
    if ((MEM32(edx + 0x6F) != 0)) goto loc_00558171; /* jne: not equal / not zero */

loc_00558103: ;
    if (0) goto loc_00558174; /* jb: below (unsigned <) */

loc_00558105: ;
    if ((MEM32(edx + 0x6F) == 0)) goto loc_00558168; /* je: equal / zero */

loc_00558107: ;
    if ((MEM32(edx + 0x6F) == 0)) goto loc_0055816E; /* je: equal / zero */

loc_00558109: ;
    if (((int32_t)MEM32(edx + 0x6F) < 0)) goto loc_0055816A; /* jl: less (signed <) */

loc_0055810B: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, ebx);
    ebp++;
    POP32(esp, edi);
    edx++;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    if (((int32_t)esp < 0)) goto loc_0055817F; /* jl: less (signed <) */

loc_00558120: ;
    esp--;
    edi--;
    ebx++;
    ecx++;

loc_00558124: ;
    PUSH32(esp, esp);
    edi--;

loc_00558126: ;
    PUSH32(esp, edx);
    POP32(esp, edi);
    edx++;

loc_00558129: ;
    ecx++;

loc_0055812A: ;
    PUSH32(esp, ebx);
    ebp++;
    POP32(esp, edi);

loc_0055812D: ;
    edx++;
    ecx++;
    PUSH32(esp, edx);

loc_00558130: ;
    PUSH32(esp, edx);
    ebp++;
    esp--;
    PUSH32(esp, ebx);

loc_00558134: ;
    PUSH32(esp, 0x657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ebx + eax * 2 + 0x45) = MEM8(ebx + eax * 2 + 0x45) + HI8(ebx);
    esi--;
    PUSH32(esp, esp);
    if (((int32_t)esi < 0)) (void)0; /* goto loc_005581A9 - dead code, label not in function */ /* jl: less (signed <) */

loc_00558147: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jns: not sign (positive) */) goto loc_005581C7;

loc_0055814B: ;
    if (_flags /* jne: not equal / not zero */) goto loc_005581BC;

loc_0055814E: ;
    if (_flags /* jb: below (unsigned <) */) goto loc_005581BF;

loc_00558150: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_005581B3 - dead code, label not in function */

loc_00558152: ;
    if (_flags /* je: equal / zero */) goto loc_005581B9;

loc_00558154: ;
    POP32(esp, edi);
    if (_flags /* js: sign (negative) */) goto loc_005581D3;

loc_00558157: ;
    if (_flags /* jne: not equal / not zero */) goto loc_005581C8;

loc_0055815A: ;
    if (_flags /* jb: below (unsigned <) */) goto loc_005581CB;

loc_0055815C: ;
    if (_flags /* je: equal / zero */) goto loc_005581BF;

loc_0055815E: ;
    if (_flags /* je: equal / zero */) goto loc_005581C5;

loc_00558160: ;
    POP32(esp, edi);
    if (_flags /* jns: not sign (positive) */) goto loc_005581DF;

loc_00558163: ;
    POP32(esp, edi);
    esp--;
    edi--;
    ebx++;
    ecx++;

loc_00558168: ;
    PUSH32(esp, esp);
    edi--;

loc_0055816A: ;
    PUSH32(esp, edx);
    POP32(esp, edi);
    PUSH32(esp, edx);

loc_0055816D: ;
    ecx--;

loc_0055816E: ;
    edi++;
    eax--;
    PUSH32(esp, esp);

loc_00558171: ;
    edx++;
    ecx++;
    PUSH32(esp, edx);

loc_00558174: ;
    PUSH32(esp, edx);
    ebp++;
    esp--;
    if (((int32_t)esp < 0)) goto loc_005581D8; /* jl: less (signed <) */

loc_00558179: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;

loc_0055817F: ;
    PUSH32(esp, edx);
    POP32(esp, edi);
    PUSH32(esp, edx);
    ecx--;
    edi++;
    eax--;
    PUSH32(esp, esp);
    edx++;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (((int32_t)MEM8(eax) < 0)) goto loc_005581DD; /* jl: less (signed <) */

loc_0055819A: ;
    ebp++;
    esi--;
    PUSH32(esp, esp);
    if (((int32_t)esi < 0)) goto loc_00558201; /* jl: less (signed <) */

loc_0055819F: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jns: not sign (positive) */) (void)0; /* goto loc_0055821F - dead code, label not in function */

loc_005581A3: ;
    if (_flags /* jne: not equal / not zero */) goto loc_00558214;

loc_005581A6: ;
    if (_flags /* jb: below (unsigned <) */) goto loc_00558217;

loc_005581A8: ;
    if (_flags /* je: equal / zero */) goto loc_0055820B;

loc_005581AA: ;
    if (_flags /* je: equal / zero */) goto loc_00558211;

loc_005581AC: ;
    POP32(esp, edi);
    if (_flags /* js: sign (negative) */) goto loc_0055822B;

loc_005581AF: ;
    if (_flags /* jne: not equal / not zero */) goto loc_00558220;

loc_005581B2: ;
    if (_flags /* jb: below (unsigned <) */) goto loc_00558223;

loc_005581B4: ;
    if (_flags /* je: equal / zero */) goto loc_00558217;

loc_005581B6: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_0055821D - dead code, label not in function */

loc_005581B8: ;
    POP32(esp, edi);

loc_005581B9: ;
    if (_flags /* jns: not sign (positive) */) goto loc_00558237;

loc_005581BB: ;
    POP32(esp, edi);

loc_005581BC: ;
    esp--;
    edi--;
    ebx++;

loc_005581BF: ;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    esp--;

loc_005581C5: ;
    ebp++;
    esi++;

loc_005581C7: ;
    PUSH32(esp, esp);

loc_005581C8: ;
    edx++;
    ecx++;
    PUSH32(esp, edx);

loc_005581CB: ;
    PUSH32(esp, edx);
    ebp++;
    esp--;
    if (((int32_t)esp < 0)) goto loc_0055822F; /* jl: less (signed <) */

loc_005581D0: ;
    esp--;
    edi--;
    ebx++;

loc_005581D3: ;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);

loc_005581D8: ;
    esp--;
    ebp++;
    esi++;
    PUSH32(esp, esp);
    edx++;

loc_005581DD: ;
    ecx++;
    PUSH32(esp, edx);

loc_005581DF: ;
    PUSH32(esp, edx);
    ebp++;
    esp--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x657061);
    if (((int32_t)esp < 0)) goto loc_0055822D; /* jl: less (signed <) */

loc_005581EA: ;
    ebp++;
    esi--;
    PUSH32(esp, esp);
    if (((int32_t)esi < 0)) goto loc_00558251; /* jl: less (signed <) */

loc_005581EF: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jns: not sign (positive) */) goto loc_0055826F;

loc_005581F3: ;
    POP32(esp, edi);
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    esp--;
    ebp++;
    esi++;
    PUSH32(esp, esp);
    edx++;

loc_00558201: ;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    if (((int32_t)esp < 0)) (void)0; /* goto loc_00558267 - dead code, label not in function */ /* jl: less (signed <) */

loc_00558208: ;
    esp--;
    edi--;
    ebx++;

loc_0055820B: ;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    esp--;

loc_00558211: ;
    ebp++;
    esi++;
    PUSH32(esp, esp);

loc_00558214: ;
    edx++;
    ecx++;
    PUSH32(esp, edx);

loc_00558217: ;
    PUSH32(esp, edx);
    ebp++;
    esp--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x657061);

loc_00558220: ;
    if (((int32_t)esp < 0)) goto loc_00558265; /* jl: less (signed <) */

loc_00558222: ;
    ebp++;

loc_00558223: ;
    esi--;
    PUSH32(esp, esp);
    if (((int32_t)esi < 0)) goto loc_00558289; /* jl: less (signed <) */

loc_00558227: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jns: not sign (positive) */) goto loc_005582A7;

loc_0055822B: ;
    POP32(esp, edi);
    esp--;

loc_0055822D: ;
    edi--;
    ebx++;

loc_0055822F: ;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    PUSH32(esp, edx);
    ecx--;
    edi++;

loc_00558237: ;
    eax--;
    PUSH32(esp, esp);
    edx++;
    ecx++;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ebp++;
    esp--;
    if (((int32_t)esp < 0)) (void)0; /* goto loc_005582A0 - dead code, label not in function */ /* jl: less (signed <) */

loc_00558241: ;
    esp--;
    edi--;
    ebx++;
    ecx++;
    PUSH32(esp, esp);
    edi--;
    PUSH32(esp, edx);
    POP32(esp, edi);
    PUSH32(esp, edx);
    ecx--;
    edi++;
    eax--;
    PUSH32(esp, esp);
    edx++;
    ecx++;
    PUSH32(esp, edx);

loc_00558251: ;
    PUSH32(esp, edx);
    ebp++;
    esp--;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x657061);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: lock adc byte ptr [ebp], 0xac */

loc_00558265: ;
    MEM8(ebp) = MEM8(ebp) + 0xE4 + _cf; /* adc */
    if (_flags /* jnp: not parity */) (void)0; /* goto loc_005582C3 - dead code, label not in function */

loc_0055826B: ;
    SET_HI8(eax, HI8(eax) + HI8(eax));
    if (_flags /* jnp: not parity */) (void)0; /* goto loc_005582C7 - dead code, label not in function */

loc_0055826F: ;
    MEM8(eax + eax * 4 + 0x55) = MEM8(eax + eax * 4 + 0x55) + HI8(ecx);
    MEM8(eax + eax * 4) = MEM8(eax + eax * 4) + HI8(ecx);
    PUSH32(esp, ebp);
    SET_LO8(eax, LO8(eax) + HI8(ecx));
    if (((int32_t)LO8(eax) > 0)) { sub_005582D0(); return; } /* jg: greater (signed >) */

loc_0055827B: ;
    MEM8(eax + 0x5800557F) = MEM8(eax + 0x5800557F) + HI8(eax);
    if (((int32_t)MEM8(eax + 0x5800557F) > 0)) { sub_005582D8(); return; } /* jg: greater (signed >) */

loc_00558283: ;
    MEM8(edi + edi * 2) = MEM8(edi + edi * 2) + LO8(ebx);
    PUSH32(esp, ebp);
    SET_HI8(eax, HI8(eax) + HI8(eax));

loc_00558289: ;
    if (_flags /* jnp: not parity */) { sub_005582E3(); return; }

loc_0055828B: ;
    SET_HI8(eax, HI8(eax) + HI8(eax));
    if (_flags /* jnp: not parity */) { sub_005582E7(); return; }

loc_0055828F: ;
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    if (((int32_t)LO8(eax) <= 0)) { sub_005582E8(); return; } /* jle: less or equal (signed <=) */

loc_00558293: ;
    MEM8(eax + 0x7E) = MEM8(eax + 0x7E) + HI8(ebx);
    PUSH32(esp, ebp);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    if (((int32_t)LO8(eax) <= 0)) { sub_005582F0(); return; } /* jle: less or equal (signed <=) */

loc_0055829B: ;
    MEM8(eax + 0x7E) = MEM8(eax + 0x7E) + HI8(ebx);
    PUSH32(esp, ebp);
    MEM8(esi + edi * 2) = MEM8(esi + edi * 2) + HI8(edx);
    PUSH32(esp, ebp);
    SET_HI8(eax, HI8(eax) + HI8(edx));
    if (((int32_t)HI8(eax) >= 0)) { sub_005582FC(); return; } /* jge: greater or equal (signed >=) */

loc_005582A7: ;
    MEM8(esi + edi * 2) = MEM8(esi + edi * 2) + HI8(edx);
    PUSH32(esp, ebp);
    SET_HI8(eax, HI8(eax) + HI8(edx));
    if (((int32_t)HI8(eax) >= 0)) { sub_00558304(); return; } /* jge: greater or equal (signed >=) */

loc_005582AF: ;
    MEM8(eax + 0x6800557D) = MEM8(eax + 0x6800557D) + HI8(edx);
    if (((int32_t)MEM8(eax + 0x6800557D) >= 0)) { sub_0055830C(); return; } /* jge: greater or equal (signed >=) */

loc_005582B7: ;
    MEM8(eax) = MEM8(eax) + HI8(eax);
    if (((int32_t)MEM8(eax) >= 0)) { sub_00558310(); return; } /* jge: greater or equal (signed >=) */

loc_005582BB: ;
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    if (((int32_t)LO8(eax) < 0)) { sub_00558314(); return; } /* jl: less (signed <) */

loc_005582BF: ;
    MEM8(eax) = MEM8(eax) + HI8(eax);
    MEM8(ebp) = MEM8(ebp) + 0xE8 + _cf; /* adc */
    MEM32(ebp) = MEM32(ebp) + 0x558198 + _cf; /* adc */
    eax++;

}

/**
 * sub_005585C7
 * Original: 0x005585C7 - 0x0055866A (163 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005585C7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005585C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_NE(MEM32(0x5583B0), 0)) goto loc_00558666; /* jne: not equal / not zero */

loc_005585D7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(0x5583B0) = 1;
    PUSH32(esp, 0); sub_00558850(); /* call 0x00558850 */

loc_005585EE: ;
    if (TEST_Z(eax, eax)) goto loc_005585F9; /* je: equal / zero */

loc_005585F2: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    ebx = eax;
    goto loc_00558634;

loc_005585F9: ;
    PUSH32(esp, 0x55835C);
    ecx = esi;
    PUSH32(esp, 0); sub_00558819(); /* call 0x00558819 */

loc_00558605: ;
    PUSH32(esp, 0x558344);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0); sub_00558819(); /* call 0x00558819 */

loc_00558613: ;
    PUSH32(esp, 0x558350);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0); sub_00558819(); /* call 0x00558819 */

loc_00558621: ;
    PUSH32(esp, 4);
    MEM32(ebp + 8) = eax;
    ebx = ebx + edi;
    POP32(esp, eax);
    if (CMP_BE(ebx, eax)) goto loc_0055862F; /* jbe: below or equal (unsigned <=) */

loc_0055862D: ;
    ebx = eax;

loc_0055862F: ;
    if (CMP_BE(MEM32(ebp + 8), eax)) goto loc_00558637; /* jbe: below or equal (unsigned <=) */

loc_00558634: ;
    MEM32(ebp + 8) = eax;

loc_00558637: ;
    edi = 0x5583A4;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(0x5583A5) = LO8(ebx);
    PUSH32(esp, 0); sub_0055885C(); /* call 0x0055885C */

loc_0055864A: ;
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(0x5583A5) = LO8(eax);
    PUSH32(esp, 0); sub_0055885C(); /* call 0x0055885C */

loc_0055865A: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00558560(); /* call 0x00558560 */

loc_00558663: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00558666: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055866A
 * Original: 0x0055866A - 0x00558776 (268 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055866A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055866A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0xC04;
    edi = 0x75FAE8;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = 0x75FAEC;
    PUSH32(esp, 0x5F5F554D);
    PUSH32(esp, 0x60);
    MEM32(0x75FAF0) = eax;
    MEM32(0x75FAEC) = eax;
    PUSH32(esp, 0); sub_0055CB7F(); /* call 0x0055CB7F */

loc_0055869C: ;
    edi = eax;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    MEM32(0x762AF4) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00558850(); /* call 0x00558850 */

loc_005586B3: ;
    if (TEST_NZ(eax, eax)) goto loc_005586CC; /* jne: not equal / not zero */

loc_005586B7: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x5583D8);
    PUSH32(esp, 0); sub_00558819(); /* call 0x00558819 */

loc_005586C4: ;
    ebx = eax;
    ebx++;
    if (CMP_BE(ebx, 8)) goto loc_005586CF; /* jbe: below or equal (unsigned <=) */

loc_005586CC: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_005586CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x560FA8);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_005586DE: ;
    esi = 0; /* xor self */
    if (CMP_BE(ebx & ebx, 0)) goto loc_00558751; /* jbe: below or equal (unsigned <=) */

loc_005586E4: ;
    (void)0; /* cmp esi, 9 - flags set for next jcc */
    eax = esi + 0x41;
    if (CMP_A(esi, 9)) goto loc_005586EF; /* ja: above (unsigned >) */

loc_005586EC: ;
    eax = esi + 0x30;

loc_005586EF: ;
    ecx = MEM32(ebp + -8);
    MEM8(ecx + 0xB) = LO8(eax);
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3A);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x170);
    PUSH32(esp, 0x558410);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561228), _icall_esp); /* indirect call */
    }

loc_00558711: ;
    if (TEST_S(eax, eax)) goto loc_00558751; /* jl: less (signed <) */

loc_00558715: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, 0x5C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -4);
    MEM32(edx) = eax;
    MEM32(edx + 4) = esi;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x1E) = 1;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) | ecx;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFEFu;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0055A5C1(); /* call 0x0055A5C1 */

loc_0055874C: ;
    esi++;
    if (CMP_B(esi, ebx)) goto loc_005586E4; /* jb: below (unsigned <) */

loc_00558751: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x558401) = LO8(ebx);
    (void)0; /* cmp ebx, 1 - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_BE(ebx, 1)) goto loc_00558765; /* jbe: below or equal (unsigned <=) */

loc_0055875F: ;
    MEM8(0x558407) = MEM8(0x558407) << 1;

loc_00558765: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x558400);
    PUSH32(esp, 0); sub_0055885C(); /* call 0x0055885C */

loc_00558772: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00558776
 * Original: 0x00558776 - 0x005587C1 (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558776(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00558776: ;
    PUSH32(esp, ebp);
    ebp = esp;
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = ZX8(LO8(eax));
    MEM8(esi + 0x7A) = LO8(eax);
    ebx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0x44425355);
    eax = eax << 5;
    PUSH32(esp, eax);
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 0x79) = LO8(ebx);
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    PUSH32(esp, 0); sub_0055CB7F(); /* call 0x0055CB7F */

loc_005587A7: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(eax, ebx)) { sub_005587C1(); return; } /* je: equal / zero */

loc_005587AE: ;
    PUSH32(esp, 0x55AA16);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00011B30(); /* call 0x00011B30 */

loc_005587BC: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_005587C3(); return; /* tail jmp 0x005587C3 */

}

/**
 * sub_00558819
 * Original: 0x00558819 - 0x0055884A (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558819(void)
{
    int _flags = 0; /* fallback flag var */

loc_00558819: ;
    edx = MEM32(ecx + 0x9C);
    eax = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_00558847; /* je: equal / zero */

loc_00558825: ;
    ecx = MEM32(ecx + 0x98);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(ecx & ecx, 0)) goto loc_00558843; /* jbe: below or equal (unsigned <=) */

loc_00558831: ;
    esi = edx;

loc_00558833: ;
    edi = MEM32(esi);
    if (CMP_EQ(edi, MEM32(esp + 0xC))) { sub_0055884A(); return; } /* je: equal / zero */

loc_0055883B: ;
    eax++;
    esi = esi + 8;
    if (CMP_B(eax, ecx)) goto loc_00558833; /* jb: below (unsigned <) */

loc_00558843: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00558847: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00558850
 * Original: 0x00558850 - 0x0055885C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558850(void)
{
    int _flags = 0; /* fallback flag var */

loc_00558850: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ecx + 0x9C), eax - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(ecx + 0x9C), eax)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0055885C
 * Original: 0x0055885C - 0x00558A5E (514 bytes, 198 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055885C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055885C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ZX8(MEM8(esi + 1));
    MEM32(ebp + -8) = eax;
    eax = ZX8(MEM8(esi));
    eax = eax - 0;
    edx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -12) = edx;
    if ((eax == 0)) goto loc_005588BC; /* je: equal / zero */

loc_0055887C: ;
    eax--;
    if ((eax == 0)) goto loc_005588B7; /* je: equal / zero */

loc_0055887F: ;
    eax--;
    if ((eax != 0)) goto loc_005588C0; /* jne: not equal / not zero */

loc_00558882: ;
    SET_LO8(eax, MEM8(esi + 2));
    (void)0; /* cmp LO8(eax), MEM8(edx + 0x34) - flags set for next jcc */
    ebx = edx + 0x64;
    if (CMP_BE(LO8(eax), MEM8(edx + 0x34))) goto loc_00558890; /* jbe: below or equal (unsigned <=) */

loc_0055888D: ;
    MEM8(edx + 0x34) = LO8(eax);

loc_00558890: ;
    SET_LO8(eax, MEM8(esi + 1));
    if (CMP_BE(LO8(eax), 4)) goto loc_005588C3; /* jbe: below or equal (unsigned <=) */

loc_00558897: ;
    SET_LO8(eax, LO8(eax) - 4);
    PUSH32(esp, esi);
    ecx = edx;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi) = 1;
    PUSH32(esp, 0); sub_0055885C(); /* call 0x0055885C */

loc_005588A7: ;
    MEM8(esi + 1) = MEM8(esi + 1) + 4;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 4;
    edx = MEM32(ebp + -12);
    MEM8(esi) = 2;
    goto loc_005588C3;

loc_005588B7: ;
    ebx = edx + 0x32;
    goto loc_005588C3;

loc_005588BC: ;
    ebx = edx;
    goto loc_005588C3;

loc_005588C0: ;
    ebx = MEM32(ebp + 8);

loc_005588C3: ;
    SET_LO8(eax, MEM8(esi + 2));
    if (CMP_BE(LO8(eax), MEM8(ebx + 2))) goto loc_005588CE; /* jbe: below or equal (unsigned <=) */

loc_005588CB: ;
    MEM8(ebx + 2) = LO8(eax);

loc_005588CE: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00558925; /* je: equal / zero */

loc_005588DC: ;
    edi = ebx + 3;

loc_005588DF: ;
    if (CMP_AE(MEM32(ebp + 8), 4)) goto loc_00558925; /* jae: above or equal (unsigned >=) */

loc_005588E5: ;
    SET_LO8(eax, MEM8(edi));
    if (CMP_BE(LO8(eax), MEM8(esi + 3))) goto loc_005588F4; /* jbe: below or equal (unsigned <=) */

loc_005588EC: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    edi = edi + 0xA;
    goto loc_0055891F;

loc_005588F4: ;
    if (CMP_AE(MEM32(ebp + 8), 4)) goto loc_00558911; /* jae: above or equal (unsigned >=) */

loc_005588FA: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + 8);
    ecx = ebx + 0x2B;

loc_00558903: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    ecx = ecx - 0xA;
    eax--;
    if ((eax != 0)) goto loc_00558903; /* jne: not equal / not zero */

loc_0055890E: ;
    edx = MEM32(ebp + -12);

loc_00558911: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM8(edi) = LO8(eax);
    edi = edi + 0xA;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;

loc_0055891F: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_005588DF; /* jne: not equal / not zero */

loc_00558925: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0055897C; /* je: equal / zero */

loc_00558933: ;
    edi = ebx + 4;

loc_00558936: ;
    if (CMP_AE(MEM32(ebp + 8), 4)) goto loc_0055897C; /* jae: above or equal (unsigned >=) */

loc_0055893C: ;
    SET_LO8(eax, MEM8(edi));
    if (CMP_BE(LO8(eax), MEM8(esi + 4))) goto loc_0055894B; /* jbe: below or equal (unsigned <=) */

loc_00558943: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    edi = edi + 0xA;
    goto loc_00558976;

loc_0055894B: ;
    if (CMP_AE(MEM32(ebp + 8), 4)) goto loc_00558968; /* jae: above or equal (unsigned >=) */

loc_00558951: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + 8);
    ecx = ebx + 0x2C;

loc_0055895A: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    ecx = ecx - 0xA;
    eax--;
    if ((eax != 0)) goto loc_0055895A; /* jne: not equal / not zero */

loc_00558965: ;
    edx = MEM32(ebp + -12);

loc_00558968: ;
    SET_LO8(eax, MEM8(esi + 4));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM8(edi) = LO8(eax);
    edi = edi + 0xA;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;

loc_00558976: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_00558936; /* jne: not equal / not zero */

loc_0055897C: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_005589D3; /* je: equal / zero */

loc_0055898A: ;
    edi = ebx + 5;

loc_0055898D: ;
    if (CMP_AE(MEM32(ebp + 8), 4)) goto loc_005589D3; /* jae: above or equal (unsigned >=) */

loc_00558993: ;
    SET_LO8(eax, MEM8(edi));
    if (CMP_BE(LO8(eax), MEM8(esi + 5))) goto loc_005589A2; /* jbe: below or equal (unsigned <=) */

loc_0055899A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    edi = edi + 0xA;
    goto loc_005589CD;

loc_005589A2: ;
    if (CMP_AE(MEM32(ebp + 8), 4)) goto loc_005589BF; /* jae: above or equal (unsigned >=) */

loc_005589A8: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + 8);
    ecx = ebx + 0x2D;

loc_005589B1: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    ecx = ecx - 0xA;
    eax--;
    if ((eax != 0)) goto loc_005589B1; /* jne: not equal / not zero */

loc_005589BC: ;
    edx = MEM32(ebp + -12);

loc_005589BF: ;
    SET_LO8(eax, MEM8(esi + 5));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM8(edi) = LO8(eax);
    edi = edi + 0xA;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;

loc_005589CD: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_0055898D; /* jne: not equal / not zero */

loc_005589D3: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00558A2A; /* je: equal / zero */

loc_005589E1: ;
    edi = ebx + 8;

loc_005589E4: ;
    if (CMP_AE(MEM32(ebp + 8), 4)) goto loc_00558A2A; /* jae: above or equal (unsigned >=) */

loc_005589EA: ;
    SET_LO8(eax, MEM8(edi));
    if (CMP_BE(LO8(eax), MEM8(esi + 8))) goto loc_005589F9; /* jbe: below or equal (unsigned <=) */

loc_005589F1: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    edi = edi + 0xA;
    goto loc_00558A24;

loc_005589F9: ;
    if (CMP_AE(MEM32(ebp + 8), 4)) goto loc_00558A16; /* jae: above or equal (unsigned >=) */

loc_005589FF: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + 8);
    ecx = ebx + 0x30;

loc_00558A08: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    ecx = ecx - 0xA;
    eax--;
    if ((eax != 0)) goto loc_00558A08; /* jne: not equal / not zero */

loc_00558A13: ;
    edx = MEM32(ebp + -12);

loc_00558A16: ;
    SET_LO8(eax, MEM8(esi + 8));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM8(edi) = LO8(eax);
    edi = edi + 0xA;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;

loc_00558A24: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_005589E4; /* jne: not equal / not zero */

loc_00558A2A: ;
    SET_LO8(eax, MEM8(esi + 6));
    ecx = edx + 0xB0;
    if (CMP_BE(LO8(eax), MEM8(ecx))) goto loc_00558A39; /* jbe: below or equal (unsigned <=) */

loc_00558A37: ;
    MEM8(ecx) = LO8(eax);

loc_00558A39: ;
    SET_LO8(eax, MEM8(esi + 7));
    ecx = edx + 0xB1;
    if (CMP_BE(LO8(eax), MEM8(ecx))) goto loc_00558A48; /* jbe: below or equal (unsigned <=) */

loc_00558A46: ;
    MEM8(ecx) = LO8(eax);

loc_00558A48: ;
    SET_LO8(eax, MEM8(esi + 9));
    POP32(esp, edi);
    ecx = edx + 0xB2;
    (void)0; /* cmp LO8(eax), MEM8(ecx) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_BE(LO8(eax), MEM8(ecx))) goto loc_00558A5A; /* jbe: below or equal (unsigned <=) */

loc_00558A58: ;
    MEM8(ecx) = LO8(eax);

loc_00558A5A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00558A5E
 * Original: 0x00558A5E - 0x00558B64 (262 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558A5E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00558A5E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM8(ecx + 0xA0) = 0x10;
    (void)0; /* cmp MEM8(0x558310), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(MEM8(0x558310), LO8(eax))) goto loc_00558A87; /* je: equal / zero */

loc_00558A80: ;
    MEM8(ecx + 0xA0) = 0x30;

loc_00558A87: ;
    SET_LO8(eax, MEM8(ecx + 2));
    SET_LO8(edx, MEM8(ecx + 0x34));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(edx, LO8(edx) + MEM8(ecx + 0x66));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) + 3);
    MEM8(ecx + 0xA0) = MEM8(ecx + 0xA0) + LO8(edx);
    if (CMP_BE(LO8(eax), MEM8(ecx + 0xA1))) goto loc_00558AAC; /* jbe: below or equal (unsigned <=) */

loc_00558AA6: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_00558AAC: ;
    SET_LO8(eax, MEM8(ecx + 0x66));
    if (CMP_BE(LO8(eax), MEM8(ecx + 0xA1))) goto loc_00558ABD; /* jbe: below or equal (unsigned <=) */

loc_00558AB7: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_00558ABD: ;
    SET_LO8(eax, MEM8(ecx + 0x34));
    if (CMP_BE(LO8(eax), MEM8(ecx + 0xA1))) goto loc_00558ACE; /* jbe: below or equal (unsigned <=) */

loc_00558AC8: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_00558ACE: ;
    SET_LO8(eax, MEM8(ecx + 0xA1));
    MEM8(ecx + 0xA0) = MEM8(ecx + 0xA0) + LO8(eax);
    eax = ecx + 0x37;
    MEM32(ebp + -12) = 4;

loc_00558AE4: ;
    edi = ZX8(MEM8(eax + 0x32));
    edx = ZX8(MEM8(eax + -50));
    edx = edx + edi;
    edi = ZX8(MEM8(eax));
    edi = edi + esi;
    esi = edi + edx;
    edi = ZX8(MEM8(eax + 0x30));
    edx = ZX8(MEM8(eax + -52));
    edx = edx + edi;
    edi = ZX8(MEM8(eax + -2));
    edi = edi + MEM32(ebp + -4);
    eax = eax + 0xA;
    edi = edi + edx;
    edx = ZX8(MEM8(eax + -61));
    MEM32(ebp + -4) = edi;
    edi = ZX8(MEM8(eax + 0x27));
    edx = edx + edi;
    edi = ZX8(MEM8(eax + -11));
    edi = edi + MEM32(ebp + -8);
    edi = edi + edx;
    edx = ZX8(MEM8(eax + -57));
    MEM32(ecx + 0xA8) = MEM32(ecx + 0xA8) + edx;
    ebx = ZX8(MEM8(eax + 0x2B));
    edx = MEM32(ecx + 0xA8);
    edx = edx + ebx;
    MEM32(ecx + 0xA8) = edx;
    ebx = ZX8(MEM8(eax + -7));
    ebx = ebx + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    MEM32(ebp + -8) = edi;
    MEM32(ecx + 0xA8) = ebx;
    if ((MEM32(ebp + -12) != 0)) goto loc_00558AE4; /* jne: not equal / not zero */

loc_00558B52: ;
    if (CMP_EQ(MEM8(0x558310), 0)) { sub_00558B64(); return; } /* je: equal / zero */

loc_00558B5B: ;
    esi = esi + 0xD;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xD;
    g_seh_ebp = ebp; sub_00558B6B(); return; /* tail jmp 0x00558B6B */

}

/**
 * sub_00558C20
 * Original: 0x00558C20 - 0x00558C9D (125 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558C20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00558C20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x44425355);
    edi = edi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0055CB7F(); /* call 0x0055CB7F */

loc_00558C34: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00558C98; /* je: equal / zero */

loc_00558C3A: ;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    MEM8(0x762BE0) = MEM8(0x762BE0) + 1;
    eax = ZX8(MEM8(0x762BE0));
    ecx = 0x762AF8;
    MEM32(esi) = eax;
    PUSH32(esp, 0); sub_0055AA28(); /* call 0x0055AA28 */

loc_00558C67: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 4;
    MEM32(ecx) = eax;
    MEM8(eax) = 0;
    eax = MEM32(ecx);
    MEM8(eax + 2) = 0x80;
    eax = MEM32(ecx);
    MEM8(eax + 1) = 0x80;
    eax = MEM32(ecx);
    MEM8(eax + 3) = 0x80;
    eax = MEM32(ecx);
    MEM32(eax + 0xC) = esi;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi));
    esi = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00558E07(); /* call 0x00558E07 */

loc_00558C98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00558D09
 * Original: 0x00558D09 - 0x00558DB9 (176 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558D09(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00558D09: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = MEM32(esi);
    PUSH32(esp, 0);
    eax = esi + 0x478;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561148), _icall_esp); /* indirect call */
    }

loc_00558D24: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x55E113);
    eax = esi + 0x4A0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E4), _icall_esp); /* indirect call */
    }

loc_00558D37: ;
    MEM8(esi + 0x460) = 4;
    eax = MEM32(ebx + 0x50);
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    MEM32(ebx + 0x50) = eax;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    edi = ebp + -4;
    ecx++;
    (void)0; /* cmp MEM8(esi + 0x460), LO8(edx) - flags set for next jcc */
    MEM32(edi) = eax; edi += 4; /* stosd */
    if (CMP_BE(MEM8(esi + 0x460), LO8(edx))) goto loc_00558D93; /* jbe: below or equal (unsigned <=) */

loc_00558D62: ;
    eax = ebx + 0x54;

loc_00558D65: ;
    edi = MEM32(eax);
    MEM32(ebp + -8) = edi;
    if (TEST_Z(MEM8(ebp + -8), 1)) goto loc_00558D78; /* je: equal / zero */

loc_00558D70: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) | LO16(ecx);
    MEM16(ebp + -4) = MEM16(ebp + -4) | LO16(ecx);

loc_00558D78: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    edi = MEM32(ebp + -8);
    MEM32(eax) = edi;
    edi = ZX8(MEM8(esi + 0x460));
    edx++;
    eax = eax + 4;
    ecx = ecx << 1;
    if (CMP_B(edx, edi)) goto loc_00558D65; /* jb: below (unsigned <) */

loc_00558D93: ;
    MEM32(ebx + 0x10) = 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00558DA0: ;
    edx = ebp + -4;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_0055E01A(); /* call 0x0055E01A */

loc_00558DAC: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00558DB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00558DB9
 * Original: 0x00558DB9 - 0x00558DC5 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558DB9(void)
{

loc_00558DB9: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0); sub_0055918D(); /* call 0x0055918D */

loc_00558DC2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00558DC5
 * Original: 0x00558DC5 - 0x00558E07 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558DC5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00558DC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    eax = MEM32(0x561128);
    if (CMP_EQ(MEM8(eax + 5), 0xA1)) goto loc_00558E05; /* je: equal / zero */

loc_00558DD6: ;
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM8(ebp + -24) = 3;
    MEM32(ebp + -16) = 0x1000;
    MEM32(ebp + -20) = 0xFED00000u;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561168), _icall_esp); /* indirect call */
    }

loc_00558DF4: ;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x4E0);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00558C20(); /* call 0x00558C20 */

loc_00558E05: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00558E07
 * Original: 0x00558E07 - 0x00558F82 (379 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558E07(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00558E07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM8(ebp + 0xC) = MEM8(ebp + 0xC) - 1;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebp + 0xC));
    MEM32(esi + 0x45C) = edi;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 4) = ecx;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = edi;
    MEM32(esi) = eax;
    PUSH32(esp, 0); sub_005593B3(); /* call 0x005593B3 */

loc_00558E35: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005593BE(); /* call 0x005593BE */

loc_00558E3B: ;
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x56024E);
    eax = esi + 0x440;
    MEM32(ebx + 0x48) = 0x1200;
    MEM32(ebx + 0x4C) = 0;
    MEM32(ebx + 0x50) = 0x80000000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E4), _icall_esp); /* indirect call */
    }

loc_00558E65: ;
    eax = MEM32(edi * 4 + 0x87C944);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 8);
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00558E7B: ;
    MEM8(ebp + 0xF) = LO8(eax);
    eax = MEM32(ebp + 8);
    eax = eax | 1;
    MEM32(ebx + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561178), _icall_esp); /* indirect call */
    }

loc_00558E8F: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00559352(); /* call 0x00559352 */

loc_00558E96: ;
    MEM32(ebx + 4) = 0xBE;
    eax = MEM32(ebx + 0x34);
    eax = eax & 0xA772EED8u;
    eax = eax | 0x27722ED8;
    ecx = eax;
    ecx = ~ecx;
    ecx = ecx ^ eax;
    ecx = ecx & 0x7FFFFFFF;
    eax = ~eax;
    ecx = ecx ^ eax;
    MEM32(ebx + 0x34) = ecx;
    eax = MEM32(0x561128);
    if (TEST_NZ(MEM8(eax), 1)) goto loc_00558F0A; /* jne: not equal / not zero */

loc_00558EC7: ;
    MEM32(ebp + 8) = 2;

loc_00558ECE: ;
    PUSH32(esp, 0); sub_0055E1FD(); /* call 0x0055E1FD */

loc_00558ED3: ;
    edx = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = edx;
    eax = eax - MEM32(0x87C940);
    ecx = esi;
    MEM32(edx + 0x14) = eax;
    eax = MEM32(edx);
    eax = eax & 0xF808FFFFu;
    eax = eax | 0x80000;
    MEM8(edx + 0x11) = 0;
    MEM32(edx) = eax;
    PUSH32(esp, 0); sub_0055F70B(); /* call 0x0055F70B */

loc_00558F02: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_00558ECE; /* jne: not equal / not zero */

loc_00558F07: ;
    edi = MEM32(ebp + -4);

loc_00558F0A: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00558F13: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = edi + 0x87C980;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x55FB7A);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56116C), _icall_esp); /* indirect call */
    }

loc_00558F39: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561164), _icall_esp); /* indirect call */
    }

loc_00558F40: ;
    edx = 0; /* xor self */
    edx++;
    ecx = esi + 0x4C0;
    eax = esi + 0x4C8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(ecx) = 0x55E527;
    MEM32(esi + 0x4C4) = edx;
    MEM32(esi + 0x4CC) = eax;
    MEM32(eax) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56112C), _icall_esp); /* indirect call */
    }

loc_00558F6B: ;
    ecx = esi;
    MEM32(ebx + 0x10) = 0x80000033u;
    PUSH32(esp, 0); sub_00558D09(); /* call 0x00558D09 */

loc_00558F79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00558F82
 * Original: 0x00558F82 - 0x0055918D (523 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558F82(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00558F82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x60;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(0x55855C), esi - flags set for next jcc */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    if (CMP_NE(MEM32(0x55855C), esi)) goto loc_00559188; /* jne: not equal / not zero */

loc_00558FA0: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(0x55855C) = 1;
    PUSH32(esp, 0); sub_00558850(); /* call 0x00558850 */

loc_00558FB4: ;
    MEM32(ebp + -16) = eax;
    eax = 0x5582E4;
    ebx = 0x5582EC;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edi = eax;
    if (CMP_AE(eax, ebx)) goto loc_0055903B; /* jae: above or equal (unsigned >=) */

loc_00558FC7: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_00559014; /* je: equal / zero */

loc_00558FCD: ;
    eax = MEM32(eax + 4);
    MEM32(ebp + esi * 4 + -96) = eax;
    esi++;
    if (CMP_NE(MEM32(ebp + -16), 0)) goto loc_00558FE9; /* jne: not equal / not zero */

loc_00558FDB: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00558819(); /* call 0x00558819 */

loc_00558FE4: ;
    ecx = MEM32(edi);
    MEM8(ecx + 1) = LO8(eax);

loc_00558FE9: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00558FF4; /* je: equal / zero */

loc_00558FF2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00558FF4: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x28);
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    eax = ZX8(MEM8(eax + 1));
    if (TEST_Z(LO8(ecx), 4)) goto loc_00559007; /* je: equal / zero */

loc_00559002: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    goto loc_00559014;

loc_00559007: ;
    if (TEST_Z(LO8(ecx), 8)) goto loc_00559011; /* je: equal / zero */

loc_0055900C: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    goto loc_00559014;

loc_00559011: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;

loc_00559014: ;
    edi = edi + 4;
    if (CMP_B(edi, ebx)) goto loc_00558FC7; /* jb: below (unsigned <) */

loc_0055901B: ;
    if (CMP_EQ(MEM32(ebp + -12), 0)) goto loc_0055902C; /* je: equal / zero */

loc_00559021: ;
    MEM16(0x762CB0) = 0xC;
    goto loc_00559044;

loc_0055902C: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    MEM16(0x762CB0) = 8;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_00559044; /* jne: not equal / not zero */

loc_0055903B: ;
    MEM16(0x762CB0) = 4;

loc_00559044: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    if (CMP_BE(MEM32(ebp + -8), eax)) goto loc_0055904F; /* jbe: below or equal (unsigned <=) */

loc_0055904C: ;
    MEM32(ebp + -8) = eax;

loc_0055904F: ;
    if (CMP_BE(MEM32(ebp + -4), eax)) goto loc_00559057; /* jbe: below or equal (unsigned <=) */

loc_00559054: ;
    MEM32(ebp + -4) = eax;

loc_00559057: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    eax = eax + ecx;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(eax, ecx)) goto loc_0055906C; /* jbe: below or equal (unsigned <=) */

loc_00559069: ;
    MEM32(ebp + -16) = ecx;

loc_0055906C: ;
    eax = MEM32(ebp + -16);
    eax = eax + MEM32(ebp + -8);
    ecx = ZX16(MEM16(0x762CB0));
    MEM32(ebp + -16) = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAB);
    ebx = esi;
    ebx = ebx << 2;
    ecx = ecx + ebx;
    eax = eax + ecx;
    PUSH32(esp, 0x5F444958);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055CB7F(); /* call 0x0055CB7F */

loc_00559099: ;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    MEM32(0x558530) = esi;
    MEM32(0x558548) = esi;
    MEM32(0x558534) = eax;
    MEM32(0x55854C) = eax;
    edi = eax;
    esi = ebp + -96;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(ebp + -16);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edi = 0; /* xor self */
    ecx = 0; /* xor self */
    eax = eax + ebx;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    MEM32(0x762CB8) = ecx;
    if (CMP_BE(edx, edi)) goto loc_005590ED; /* jbe: below or equal (unsigned <=) */

loc_005590D7: ;
    MEM32(eax + 0xA7) = ecx;
    ecx = eax;
    eax = eax + 0xAB;
    edx--;
    if ((edx != 0)) goto loc_005590D7; /* jne: not equal / not zero */

loc_005590E7: ;
    MEM32(0x762CB8) = ecx;

loc_005590ED: ;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM16(0x762CB0), LO16(edi) - flags set for next jcc */
    MEM32(0x762CB4) = eax;
    MEM16(0x762CB2) = LO16(edi);
    if (CMP_BE(MEM16(0x762CB0), LO16(edi))) goto loc_00559121; /* jbe: below or equal (unsigned <=) */

loc_00559104: ;
    ecx = 0; /* xor self */

loc_00559106: ;
    eax = MEM32(0x762CB4);
    eax = ecx + eax + 4;
    MEM8(eax) = MEM8(eax) & 0xFE;
    eax = ZX16(MEM16(0x762CB0));
    edx++;
    ecx = ecx + 0x16;
    if (CMP_B(edx, eax)) goto loc_00559106; /* jb: below (unsigned <) */

loc_00559121: ;
    eax = MEM32(ebp + -8);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    esi = 0x558550;
    if (CMP_EQ(eax, edi)) goto loc_00559142; /* je: equal / zero */

loc_0055912D: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x558550) = 0;
    MEM8(0x558551) = LO8(eax);
    PUSH32(esp, 0); sub_0055885C(); /* call 0x0055885C */

loc_00559142: ;
    eax = MEM32(ebp + -12);
    if (CMP_EQ(eax, edi)) goto loc_0055915E; /* je: equal / zero */

loc_00559149: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x558550) = 2;
    MEM8(0x558551) = LO8(eax);
    PUSH32(esp, 0); sub_0055885C(); /* call 0x0055885C */

loc_0055915E: ;
    eax = MEM32(ebp + -4);
    if (CMP_EQ(eax, edi)) goto loc_0055917A; /* je: equal / zero */

loc_00559165: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x558550) = 1;
    MEM8(0x558551) = LO8(eax);
    PUSH32(esp, 0); sub_0055885C(); /* call 0x0055885C */

loc_0055917A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x762D08);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561148), _icall_esp); /* indirect call */
    }

loc_00559186: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00559188: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055918D
 * Original: 0x0055918D - 0x00559352 (453 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055918D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055918D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ZX8(MEM8(ebx + 0xE));
    eax = MEM32(ebx + 4);
    ecx = ecx << 6;
    ecx = ecx + 0x30;
    (void)0; /* cmp MEM32(ebx), eax - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(MEM32(ebx), eax)) goto loc_005591AD; /* jae: above or equal (unsigned >=) */

loc_005591AB: ;
    MEM32(ebx) = eax;

loc_005591AD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebx + 8);
    ecx = ecx + 8;
    ecx = ecx << 5;
    eax = eax + ecx;
    ecx = MEM32(ebx);
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    eax = eax + ecx;
    ecx = eax;
    eax = ecx + 0xFFF;
    eax = eax >> 0xC;
    edx = eax;
    edx = edx << 4;
    edx = edx + ecx;
    ecx = eax;
    ecx = ecx << 0xC;
    if (CMP_AE(ecx, edx)) goto loc_005591E1; /* jae: above or equal (unsigned >=) */

loc_005591E0: ;
    eax++;

loc_005591E1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = eax << 0xC;
    edi = eax;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56110C), _icall_esp); /* indirect call */
    }

loc_005591F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D0), _icall_esp); /* indirect call */
    }

loc_005591FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D4), _icall_esp); /* indirect call */
    }

loc_00559204: ;
    ecx = esi;
    ecx = ecx - eax;
    MEM32(0x87C940) = ecx;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = edx;
    edx = 0; /* xor self */
    MEM32(0x87C944) = esi;
    MEM32(0x87C948) = edx;
    edi = ZX8(MEM8(ebx + 0xE));
    ecx = esi + eax;
    esi = esi + 0x100;
    eax = 0; /* xor self */
    MEM32(0x87C96C) = edi;
    MEM32(0x87C968) = edx;
    (void)0; /* cmp MEM32(ebx + 4), edx - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    if (CMP_BE(MEM32(ebx + 4), edx)) goto loc_00559293; /* jbe: below or equal (unsigned <=) */

loc_00559255: ;
    edi = MEM32(0x87C968);
    MEM32(esi) = edi;
    edi = MEM32(0x87C948);
    MEM32(0x87C968) = esi;
    esi = esi + MEM32(ebp + -8);
    MEM32(esi + 0x18) = edi;
    MEM32(0x87C948) = esi;
    esi = esi + 0x30;
    eax++;
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_00559255; /* jb: below (unsigned <) */

loc_0055927E: ;
    goto loc_00559293;

loc_00559280: ;
    edi = MEM32(0x87C948);
    MEM32(esi + 0x18) = edi;
    MEM32(0x87C948) = esi;
    esi = esi + 0x30;
    eax++;

loc_00559293: ;
    if (CMP_B(eax, MEM32(ebx))) goto loc_00559280; /* jb: below (unsigned <) */

loc_00559297: ;
    edi = esi + 0x20;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    MEM32(0x87C94C) = edx;
    MEM32(0x87C950) = esi;
    if (CMP_A(edi, ecx)) goto loc_005592D1; /* ja: above (unsigned >) */

loc_005592AD: ;
    eax = esi;
    eax = eax - MEM32(0x87C940);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = esi;
    MEM32(edi + -16) = eax;
    PUSH32(esp, 0); sub_0055F6EE(); /* call 0x0055F6EE */

loc_005592C1: ;
    esi = esi + 0x20;
    edi = edi + 0x20;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    if (CMP_BE(edi, MEM32(ebp + -12))) goto loc_005592AD; /* jbe: below or equal (unsigned <=) */

loc_005592CF: ;
    edx = 0; /* xor self */

loc_005592D1: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(0x87C954) = eax;
    MEM32(0x87C958) = edx;
    MEM32(0x87C95C) = 0x3E8;
    SET_LO16(eax, ZX8(MEM8(ebx + 0xC)));
    MEM16(0x87C960) = LO16(eax);
    SET_LO16(eax, ZX8(MEM8(ebx + 0xD)));
    MEM16(0x87C964) = LO16(eax);
    (void)0; /* cmp ecx, MEM32(ebx + 8) - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_BE(ecx, MEM32(ebx + 8))) goto loc_0055933A; /* jbe: below or equal (unsigned <=) */

loc_00559308: ;
    SET_LO8(ecx, LO8(ecx) - MEM8(ebx + 8));
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_00559323; /* je: equal / zero */

loc_00559310: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 1);
    SET_LO16(esi, ZX8(LO8(edx)));
    SET_LO16(eax, LO16(eax) + LO16(esi));
    MEM16(0x87C964) = LO16(eax);
    SET_LO8(ecx, LO8(ecx) - LO8(edx));

loc_00559323: ;
    SET_LO16(eax, ZX8(LO8(ecx)));
    MEM16(0x87C960) = MEM16(0x87C960) + LO16(eax);
    eax = MEM32(ebp + -4);
    MEM32(ebx + 8) = eax;
    SET_LO16(eax, MEM16(0x87C964));

loc_0055933A: ;
    SET_LO16(ecx, MEM16(0x87C960));
    POP32(esp, esi);
    MEM16(0x87C962) = LO16(ecx);
    MEM16(0x87C966) = LO16(eax);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00559352
 * Original: 0x00559352 - 0x005593B3 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559352(void)
{

loc_00559352: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    eax = eax - MEM32(0x87C940);
    ecx = MEM32(esi);
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    MEM32(ecx + 0x1C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x20) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x24) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x28) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x30) = eax;
    PUSH32(esp, 1);
    MEM16(esi + 0x416) = 0x2772;
    eax = MEM32(esi);
    PUSH32(esp, 3);
    MEM32(eax + 0x40) = 0x2A29;
    PUSH32(esp, 8);
    MEM16(esi + 0x414) = 0x236F;
    PUSH32(esp, 0); sub_0055BF6E(); /* call 0x0055BF6E */

loc_005593A9: ;
    ecx = MEM32(esi);
    eax = ZX16(LO16(eax));
    MEM32(ecx + 0x44) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005593B3
 * Original: 0x005593B3 - 0x005593BE (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005593B3(void)
{

loc_005593B3: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax = MEM32(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005593BE
 * Original: 0x005593BE - 0x005593E7 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005593BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005593BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0x100;
    if (TEST_Z(esi, ecx)) { sub_005593E7(); return; } /* je: equal / zero */

loc_005593D5: ;
    ecx = MEM32(eax + 8);
    ecx = ecx | 8;
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx);

loc_005593E0: ;
    if (TEST_NZ(MEM32(edx + 4), esi)) goto loc_005593E0; /* jne: not equal / not zero */

loc_005593E5: ;
    g_seh_ebp = ebp; sub_0055941B(); return; /* tail jmp 0x0055941B */

}

/**
 * sub_00559420
 * Original: 0x00559420 - 0x0055943E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559420(void)
{
    int _flags = 0; /* fallback flag var */

loc_00559420: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    if (TEST_Z(eax, eax)) goto loc_0055942E; /* je: equal / zero */

loc_0055942B: ;
    MEM32(eax) = MEM32(eax) & 0;

loc_0055942E: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0055943B; /* je: equal / zero */

loc_00559435: ;
    MEM32(eax) = 0x8000000Au;

loc_0055943B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055943E
 * Original: 0x0055943E - 0x0055946E (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055943E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055943E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_00559450; /* je: equal / zero */

loc_0055944B: ;
    edx = MEM32(ebp + 0xC);
    MEM32(ecx) = edx;

loc_00559450: ;
    ecx = MEM32(eax + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(ebp + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_0055945C; /* je: equal / zero */

loc_0055945A: ;
    MEM32(ecx) = edx;

loc_0055945C: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) { sub_0055946E(); return; } /* je: equal / zero */

loc_00559462: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x10), _icall_esp); /* indirect call */
    }

loc_0055946C: ;
    g_seh_ebp = ebp; sub_0055947E(); return; /* tail jmp 0x0055947E */

}

/**
 * sub_00559482
 * Original: 0x00559482 - 0x00559569 (231 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559482(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00559482: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0055B9DF(); /* call 0x0055B9DF */

loc_00559492: ;
    esi = eax;
    (void)0; /* cmp esi, 0x10 - flags set for next jcc */
    ecx = ebx;
    if (CMP_AE(esi, 0x10)) goto loc_00559558; /* jae: above or equal (unsigned >=) */

loc_0055949F: ;
    PUSH32(esp, 0); sub_0055B963(); /* call 0x0055B963 */

loc_005594A4: ;
    SET_LO8(eax, MEM8(eax + 6));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_005594B1; /* jne: not equal / not zero */

loc_005594AB: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    goto loc_005594C0;

loc_005594B1: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00559556; /* jne: not equal / not zero */

loc_005594B9: ;
    MEM32(ebp + 8) = 1;

loc_005594C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); sub_0055B969(); /* call 0x0055B969 */

loc_005594CD: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_005594F0; /* je: equal / zero */

loc_005594D3: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    esi = esi + 0x75F148;
    SET_LO8(eax, MEM8(esi + 0xB));
    SET_LO8(eax, LO8(eax) & 0x6F);
    SET_LO8(ecx, LO8(ecx) << 7);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    SET_LO8(eax, LO8(eax) | 0x10);
    MEM8(esi + 0xB) = LO8(eax);
    goto loc_00559516;

loc_005594F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0); sub_0055B969(); /* call 0x0055B969 */

loc_005594FD: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00559556; /* je: equal / zero */

loc_00559503: ;
    if (CMP_NE(MEM32(ebp + 8), 0)) goto loc_00559556; /* jne: not equal / not zero */

loc_00559509: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    esi = esi + 0x75F1B8;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xEF;

loc_00559516: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 1;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0055B86E(); /* call 0x0055B86E */

loc_00559522: ;
    (void)0; /* test MEM8(esi + 0xB), 0x10 - flags set for next jcc */
    MEM32(esi + 4) = ebx;
    SET_LO8(eax, MEM8(edi + 2));
    MEM8(esi + 0xA) = LO8(eax);
    SET_LO16(eax, MEM16(edi + 4));
    MEM16(esi + 8) = LO16(eax);
    if (TEST_Z(MEM8(esi + 0xB), 0x10)) goto loc_00559545; /* je: equal / zero */

loc_00559539: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 2;
    goto loc_00559548;

loc_00559545: ;
    eax = 0; /* xor self */
    eax++;

loc_00559548: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_0055B87F(); /* call 0x0055B87F */

loc_00559550: ;
    PUSH32(esp, 0);
    ecx = ebx;
    goto loc_0055955D;

loc_00559556: ;
    ecx = ebx;

loc_00559558: ;
    PUSH32(esp, 0x80000400u);

loc_0055955D: ;
    PUSH32(esp, 0); sub_0055B10C(); /* call 0x0055B10C */

loc_00559562: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00559569
 * Original: 0x00559569 - 0x00559585 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559569(void)
{
    uint32_t ebp;

loc_00559569: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    MEM32(ebp + 8) = eax;
    eax = 1;
    ecx = MEM32(ebp + 8);
    /* TODO: xadd dword ptr [ecx], eax */
    eax++;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00559620
 * Original: 0x00559620 - 0x00559639 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00559620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(MEM8(esi + 0xB), 1)) { sub_00559639(); return; } /* jne: not equal / not zero */

loc_0055962F: ;
    eax = 0x8007048Fu;
    g_seh_ebp = ebp; sub_0055972A(); return; /* tail jmp 0x0055972A */

}

/**
 * sub_0055972F
 * Original: 0x0055972F - 0x00559748 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055972F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055972F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(MEM8(esi + 0xB), 1)) { sub_00559748(); return; } /* jne: not equal / not zero */

loc_0055973E: ;
    eax = 0x8007048Fu;
    g_seh_ebp = ebp; sub_0055982F(); return; /* tail jmp 0x0055982F */

}

/**
 * sub_00559834
 * Original: 0x00559834 - 0x00559848 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559834(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00559834: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    edx = MEM32(ecx + 4);
    if (TEST_Z(edx, edx)) { sub_00559848(); return; } /* je: equal / zero */

loc_00559843: ;
    MEM32(edx + 0x18) = eax;
    g_seh_ebp = ebp; sub_0055984A(); return; /* tail jmp 0x0055984A */

}

/**
 * sub_00559850
 * Original: 0x00559850 - 0x00559866 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559850(void)
{
    int _flags = 0; /* fallback flag var */

loc_00559850: ;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_00559863; /* je: equal / zero */

loc_00559856: ;
    edx = MEM32(eax + 0x18);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ecx) = edx;
    if (TEST_NZ(edx, edx)) goto loc_00559865; /* jne: not equal / not zero */

loc_0055985F: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & edx;
    esp += 4; return; /* ret */

loc_00559863: ;
    eax = 0; /* xor self */

loc_00559865: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00559866
 * Original: 0x00559866 - 0x00559895 (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559866(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00559866: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    PUSH32(esp, 0x6B776168);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56118C), _icall_esp); /* indirect call */
    }

loc_00559882: ;
    edx = eax;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (TEST_NZ(edx, edx)) { sub_00559895(); return; } /* jne: not equal / not zero */

loc_0055988B: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_005599B2(); return; /* tail jmp 0x005599B2 */

}

/**
 * sub_005599B8
 * Original: 0x005599B8 - 0x005599E9 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005599B8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005599B8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -12) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_005599CB: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(edi + 0x18);
    SET_LO8(eax, MEM8(eax + 0x17));
    ebx = 0; /* xor self */
    if (TEST_Z(LO8(eax), 1)) { sub_005599E9(); return; } /* je: equal / zero */

loc_005599DA: ;
    eax = MEM32(edi + 0x18);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0xFE;
    ebx = MEM32(edi + 0x18);
    ebx = ebx + 0x18;
    g_seh_ebp = ebp; sub_005599FA(); return; /* tail jmp 0x005599FA */

}

/**
 * sub_00559BEA
 * Original: 0x00559BEA - 0x00559DD0 (486 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559BEA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00559BEA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = MEM32(esi + 0x18);
    MEM32(ebp + -20) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x15));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esi;
    MEM8(ebp + -1) = LO8(ecx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00559C11; /* je: equal / zero */

loc_00559C0E: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) - 1;

loc_00559C11: ;
    if (TEST_Z(MEM8(esi + 0xB), 0x10)) goto loc_00559D50; /* je: equal / zero */

loc_00559C1B: ;
    (void)0; /* cmp MEM8(eax + 0x10), 0 - flags set for next jcc */
    esi = edx + 0x4C;
    if (CMP_NE(MEM8(eax + 0x10), 0)) goto loc_00559C27; /* jne: not equal / not zero */

loc_00559C24: ;
    esi = MEM32(eax + 8);

loc_00559C27: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    if (CMP_BE(MEM32(ecx + 4), 0)) goto loc_00559D12; /* jbe: below or equal (unsigned <=) */

loc_00559C38: ;
    ecx = ecx + 8;
    MEM32(ebp + -8) = ecx;

loc_00559C3E: ;
    (void)0; /* cmp MEM8(ebp + -1), 0 - flags set for next jcc */
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x14);
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(MEM8(ebp + -1), 0)) goto loc_00559C5F; /* je: equal / zero */

loc_00559C4B: ;
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x11);
    ebx = (uint32_t)(int32_t)SMEM8(ebp + -1);
    edi = edi + MEM32(ebp + -12);
    if (CMP_NE(edi, ebx)) goto loc_00559C5F; /* jne: not equal / not zero */

loc_00559C5A: ;
    ecx++;
    ecx++;
    MEM32(ebp + -16) = ecx;

loc_00559C5F: ;
    edi = MEM32(ebp + -8);
    edi = ZX16(MEM16(edi));
    ebx = edi;
    SET_LO16(ebx, LO16(ebx) & 0xF000);
    if (CMP_NE(LO16(ebx), 0x9000)) goto loc_00559CD6; /* jne: not equal / not zero */

loc_00559C73: ;
    if (TEST_Z(LO16(edi), 0xFFF)) goto loc_00559CBF; /* je: equal / zero */

loc_00559C7A: ;
    edi = MEM32(ebp + -8);
    edi = ZX16(MEM16(edi));
    edi = edi & 0xFFF;
    ecx = ecx - edi;
    esi = esi + edi + -2;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi));
    ecx = ecx >> 1;
    esi++;
    esi++;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00559CD8; /* je: equal / zero */

loc_00559C9C: ;
    eax = edi;
    SET_LO16(ebx, LO16(eax));
    edi = esi;
    ebx = ebx << 0x10;
    SET_LO16(ebx, LO16(eax));
    ecx = ecx >> 1;
    eax = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ecx + ecx + _cf; /* adc */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2) = LO16(eax); }
    edi += ecx * 2; ecx = 0; /* rep stosw */
    eax = MEM32(ebp + -16);
    esi = esi + eax * 2;

loc_00559CBA: ;
    eax = MEM32(ebp + 0xC);
    goto loc_00559CD8;

loc_00559CBF: ;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    esi = esi + MEM32(ebp + -16);
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    goto loc_00559CBA;

loc_00559CD6: ;
    esi = esi + ecx;

loc_00559CD8: ;
    if (CMP_EQ(MEM8(ebp + -1), 0)) goto loc_00559CFC; /* je: equal / zero */

loc_00559CDE: ;
    ecx = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(ecx));
    SET_LO16(ecx, LO16(ecx) & 0xF000);
    if (CMP_NE(LO16(ecx), 0x8000)) goto loc_00559CFC; /* jne: not equal / not zero */

loc_00559CF0: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x11));
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + -12));
    MEM8(edx + 0x16) = MEM8(edx + 0x16) + LO8(ecx);

loc_00559CFC: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    ecx = MEM32(ebp + 8);
    edi = MEM32(ebp + -12);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    if (CMP_B(edi, MEM32(ecx + 4))) goto loc_00559C3E; /* jb: below (unsigned <) */

loc_00559D12: ;
    if (CMP_EQ(MEM8(eax + 0x10), 0)) goto loc_00559D50; /* je: equal / zero */

loc_00559D18: ;
    ecx = MEM32(eax + 0xC);
    edi = MEM32(eax + 8);
    ebx = ecx;
    ecx = ecx >> 2;
    esi = edx + 0x4C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    if (CMP_EQ(MEM32(edx + 0x40), 0)) goto loc_00559D50; /* je: equal / zero */

loc_00559D35: ;
    ecx = MEM32(edx + 0x48);
    esi = MEM32(eax + 0xC);
    edi = MEM32(edx + 0x44);
    ebx = ecx;
    ecx = ecx >> 2;
    esi = edx + esi + 0x4C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_00559D50: ;
    esi = MEM32(ebp + -20);
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM32(esi + 8), ebx)) goto loc_00559D62; /* je: equal / zero */

loc_00559D5A: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = MEM32(ecx) + edi;

loc_00559D62: ;
    if (CMP_EQ(MEM8(eax + 0x10), 0)) goto loc_00559D7C; /* je: equal / zero */

loc_00559D68: ;
    ecx = MEM32(edx + 0x40);
    if (CMP_EQ(ecx, ebx)) goto loc_00559D7C; /* je: equal / zero */

loc_00559D6F: ;
    if (CMP_EQ(MEM32(ecx + 8), ebx)) goto loc_00559D7C; /* je: equal / zero */

loc_00559D74: ;
    ecx = MEM32(ecx + 8);
    edi = MEM32(edx + 0x48);
    MEM32(ecx) = MEM32(ecx) + edi;

loc_00559D7C: ;
    ecx = ZX8(MEM8(eax + 0x13));
    SET_LO8(eax, MEM8(eax + 0x12));
    MEM8(edx + 0x17) = MEM8(edx + 0x17) | LO8(eax);
    if (CMP_EQ(ecx, ebx)) goto loc_00559DBB; /* je: equal / zero */

loc_00559D8A: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -48;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(ebp + -40);
    if (TEST_Z(eax, eax)) goto loc_00559D9B; /* je: equal / zero */

loc_00559D99: ;
    ebx = MEM32(eax);

loc_00559D9B: ;
    PUSH32(esp, MEM32(ebp + -20));
    ecx = edx + 0xC;
    PUSH32(esp, 0); sub_00559834(); /* call 0x00559834 */

loc_00559DA6: ;
    eax = MEM32(ebp + -24);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0x10));
    eax = ebp + -48;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055943E(); /* call 0x0055943E */

loc_00559DBB: ;
    ecx = MEM32(ebp + -24);
    (void)0; /* test MEM8(ecx + 0xB), 0x20 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(MEM8(ecx + 0xB), 0x20)) goto loc_00559DCC; /* je: equal / zero */

loc_00559DC7: ;
    PUSH32(esp, 0); sub_005599B8(); /* call 0x005599B8 */

loc_00559DCC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00559DD0
 * Original: 0x00559DD0 - 0x00559E51 (129 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00559DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x18);
    SET_LO8(edx, MEM8(ecx + 0x17));
    if (TEST_NZ(LO8(edx), 1)) goto loc_00559DF1; /* jne: not equal / not zero */

loc_00559DE4: ;
    if (CMP_EQ(MEM8(ecx + 0x2B), 0)) goto loc_00559DF1; /* je: equal / zero */

loc_00559DEA: ;
    eax = MEM32(ecx + 0x1C);
    if (TEST_NZ(eax, eax)) goto loc_00559E0F; /* jne: not equal / not zero */

loc_00559DF1: ;
    if (TEST_NZ(LO8(edx), 2)) goto loc_00559E03; /* jne: not equal / not zero */

loc_00559DF6: ;
    if (CMP_EQ(MEM8(ecx + 0x3F), 0)) goto loc_00559E03; /* je: equal / zero */

loc_00559DFC: ;
    eax = MEM32(ecx + 0x30);
    if (TEST_NZ(eax, eax)) goto loc_00559E0F; /* jne: not equal / not zero */

loc_00559E03: ;
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00559850(); /* call 0x00559850 */

loc_00559E0B: ;
    if (TEST_Z(eax, eax)) goto loc_00559E4E; /* je: equal / zero */

loc_00559E0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00559E11: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    esi = eax;
    edi = ebp + -24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, eax);
    ecx = ecx + 0xC;
    PUSH32(esp, 0); sub_00559834(); /* call 0x00559834 */

loc_00559E27: ;
    PUSH32(esp, 0x80004004u);
    PUSH32(esp, MEM32(ebx + 0x14));
    eax = ebp + -24;
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055943E(); /* call 0x0055943E */

loc_00559E3D: ;
    ecx = MEM32(ebx + 0x18);
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00559850(); /* call 0x00559850 */

loc_00559E48: ;
    if (TEST_NZ(eax, eax)) goto loc_00559E11; /* jne: not equal / not zero */

loc_00559E4C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00559E4E: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00559E51
 * Original: 0x00559E51 - 0x00559EB9 (104 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559E51(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00559E51: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* test MEM8(ebx + 0xB), 0x10 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    if (TEST_NZ(MEM8(ebx + 0xB), 0x10)) goto loc_00559E6B; /* jne: not equal / not zero */

loc_00559E68: ;
    esi = MEM32(ebp + 0xC);

loc_00559E6B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00559E71: ;
    (void)0; /* test MEM8(ebx + 0xB), 0x20 - flags set for next jcc */
    MEM8(ebp + 0xB) = LO8(eax);
    if (TEST_Z(MEM8(ebx + 0xB), 0x20)) { sub_00559EB9(); return; } /* je: equal / zero */

loc_00559E7A: ;
    ecx = MEM32(ebx + 0x18);
    ecx = ecx + 0xC;
    PUSH32(esp, 0); sub_00559850(); /* call 0x00559850 */

loc_00559E85: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + 0x10) = edi;
    if (TEST_Z(edi, edi)) goto loc_00559EB0; /* je: equal / zero */

loc_00559E8E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00559420(); /* call 0x00559420 */

loc_00559E94: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x18);
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00559834(); /* call 0x00559834 */

loc_00559EA7: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_005599B8(); /* call 0x005599B8 */

loc_00559EAE: ;
    g_seh_ebp = ebp; sub_00559ED3(); return; /* tail jmp 0x00559ED3 */

loc_00559EB0: ;
    MEM32(ebp + -4) = 0x800700AAu;
    g_seh_ebp = ebp; sub_00559EC0(); return; /* tail jmp 0x00559EC0 */

}

/**
 * sub_00559EE6
 * Original: 0x00559EE6 - 0x00559FBB (213 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559EE6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00559EE6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM8(ebp + -4) = 2;
    SET_LO8(ebx, 0x1F);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00559EFC: ;
    ecx = MEM32(ebp + 8);
    (void)0; /* cmp ecx, 0x558344 - flags set for next jcc */
    edi = MEM32(ebp + 0xC);
    MEM8(ebp + -8) = LO8(eax);
    eax = 0x55835C;
    if (CMP_EQ(ecx, 0x558344)) goto loc_00559F34; /* je: equal / zero */

loc_00559F12: ;
    if (CMP_EQ(ecx, eax)) goto loc_00559F34; /* je: equal / zero */

loc_00559F16: ;
    if (CMP_NE(ecx, 0x558350)) goto loc_00559F71; /* jne: not equal / not zero */

loc_00559F1E: ;
    if (CMP_EQ(MEM16(0x558318), LO16(esi))) goto loc_00559F3E; /* je: equal / zero */

loc_00559F27: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    esi = esi + 0x75F1B8;
    goto loc_00559F71;

loc_00559F34: ;
    if (CMP_NE(MEM16(0x55831C), 0)) goto loc_00559F48; /* jne: not equal / not zero */

loc_00559F3E: ;
    esi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00559FF8(); return; /* tail jmp 0x00559FF8 */

loc_00559F48: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    esi = esi + 0x75F148;
    if (CMP_NE(ecx, eax)) goto loc_00559F6B; /* jne: not equal / not zero */

loc_00559F57: ;
    if (TEST_NZ(MEM8(esi + 0xB), 0x80)) goto loc_00559F67; /* jne: not equal / not zero */

loc_00559F5D: ;
    esi = 0x8007048Fu;
    g_seh_ebp = ebp; sub_00559FF8(); return; /* tail jmp 0x00559FF8 */

loc_00559F67: ;
    SET_LO8(ebx, 0xB5);
    goto loc_00559F71;

loc_00559F6B: ;
    if (TEST_NZ(MEM8(esi + 0xB), 0x80)) goto loc_00559F5D; /* jne: not equal / not zero */

loc_00559F71: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_00559FA8; /* je: equal / zero */

loc_00559F78: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, 0); /* xor self */
    MEM8(ebp + -4) = LO8(ecx);

loc_00559F80: ;
    edx = ZX8(LO8(ecx));
    edx = ZX16(MEM16(edx * 4 + 0x558324));
    if (CMP_EQ(eax, edx)) goto loc_00559F9B; /* je: equal / zero */

loc_00559F8F: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    (void)0; /* cmp LO8(ecx), 8 - flags set for next jcc */
    MEM8(ebp + -4) = LO8(ecx);
    if (CMP_B(LO8(ecx), 8)) goto loc_00559F80; /* jb: below (unsigned <) */

loc_00559F99: ;
    goto loc_00559FA8;

loc_00559F9B: ;
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00559FA8; /* jne: not equal / not zero */

loc_00559FA4: ;
    MEM8(ebp + -4) = 8;

loc_00559FA8: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    if (TEST_Z(LO8(eax), 2)) { sub_00559FBB(); return; } /* je: equal / zero */

loc_00559FAF: ;
    esi = 0; /* xor self */
    ebx = 0x80070020u;
    g_seh_ebp = ebp; sub_0055A08A(); return; /* tail jmp 0x0055A08A */

}

/**
 * sub_0055A11D
 * Original: 0x0055A11D - 0x0055A14D (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A11D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055A11D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00559EE6(); /* call 0x00559EE6 */

loc_0055A136: ;
    if (TEST_S(eax, eax)) goto loc_0055A148; /* jl: less (signed <) */

loc_0055A13A: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0x1C);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(ecx + 0x10) = edx;

loc_0055A148: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0055A14D
 * Original: 0x0055A14D - 0x0055A1A8 (91 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A14D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055A14D: ;
    MEM8(ecx + 0xB) = MEM8(ecx + 0xB) & 0xDF;
    SET_LO8(eax, MEM8(ecx + 0xB));
    if (TEST_NZ(LO8(eax), 0x40)) goto loc_0055A1A7; /* jne: not equal / not zero */

loc_0055A158: ;
    SET_LO8(eax, LO8(eax) | 0x40);
    MEM8(ecx + 0xB) = LO8(eax);
    eax = MEM32(ecx + 0x18);
    MEM8(eax + 0x360) = 0x1C;
    eax = MEM32(ecx + 0x18);
    MEM8(eax + 0x361) = 0x4A;
    eax = MEM32(ecx + 0x18);
    MEM32(eax + 0x368) = 0x55A0A1;
    eax = MEM32(ecx + 0x18);
    MEM32(eax + 0x36C) = ecx;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x37C);
    MEM32(eax + 0x370) = edx;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 4);
    eax = eax + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0055BC1F(); /* call 0x0055BC1F */

loc_0055A1A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A1A8
 * Original: 0x0055A1A8 - 0x0055A228 (128 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A1A8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055A1A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055A1B3: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0x18);
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(eax + 0x37C), edi)) { sub_0055A228(); return; } /* je: equal / zero */

loc_0055A1C2: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    MEM8(eax + 0x350) = 1;
    eax = MEM32(esi + 0x18);
    MEM8(eax + 0x352) = 4;
    eax = MEM32(esi + 0x18);
    MEM32(eax + 0x354) = edi;
    eax = MEM32(esi + 0x18);
    ecx = eax + 0x358;
    MEM32(eax + 0x35C) = ecx;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 0x35C);
    MEM32(eax + 0x358) = ecx;
    if (TEST_NZ(MEM8(esi + 0xB), 8)) goto loc_0055A20B; /* jne: not equal / not zero */

loc_0055A204: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0055A14D(); /* call 0x0055A14D */

loc_0055A20B: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0055A213: ;
    eax = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = eax + 0x350;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561150), _icall_esp); /* indirect call */
    }

loc_0055A226: ;
    g_seh_ebp = ebp; sub_0055A234(); return; /* tail jmp 0x0055A234 */

}

/**
 * sub_0055A2B6
 * Original: 0x0055A2B6 - 0x0055A2D9 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A2B6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055A2B6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    eax = edx + 0xC;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    eax = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    /* TODO: xadd dword ptr [ecx], eax */
    eax--;
    esi = eax;
    if (CMP_GE(esi & esi, 0)) { sub_0055A2D9(); return; } /* jge: greater or equal (signed >=) */

loc_0055A2D5: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0055A2E4(); return; /* tail jmp 0x0055A2E4 */

}

/**
 * sub_0055A349
 * Original: 0x0055A349 - 0x0055A3A9 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A349(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055A349: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 8));
    SET_LO8(ebx, LO8(ebx) + 0x23);
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(ebx) << 1);
    SET_LO8(ebx, LO8(ebx) + MEM8(ebp + 0xC));
    PUSH32(esp, 0x5583B4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_0055A36A: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    eax = 0; /* xor self */
    eax++;
    ebx = 0; /* xor self */
    ecx = ecx - 0x46;
    eax = eax << LO8(ecx);
    (void)0; /* test MEM32(0x75F004), eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (TEST_NZ(MEM32(0x75F004), eax)) { sub_0055A3A9(); return; } /* jne: not equal / not zero */

loc_0055A383: ;
    eax = ebp + -148;
    MEM32(ebp + -12) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM16(ebp + -16) = LO16(ebx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM16(ebp + -14) = 0x3E;
    PUSH32(esp, 0); sub_0055A82A(); /* call 0x0055A82A */

loc_0055A3A5: ;
    edi = eax;
    g_seh_ebp = ebp; sub_0055A3AB(); return; /* tail jmp 0x0055A3AB */

}

/**
 * sub_0055A4B4
 * Original: 0x0055A4B4 - 0x0055A4CF (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A4B4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055A4B4: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | eax;
    if (CMP_EQ(MEM8(esp + 0xC), 0)) { sub_0055A4CF(); return; } /* je: equal / zero */

loc_0055A4CB: ;
    MEM32(ecx) = MEM32(ecx) | eax;
    g_seh_ebp = ebp; sub_0055A4D3(); return; /* tail jmp 0x0055A4D3 */

}

/**
 * sub_0055A4D6
 * Original: 0x0055A4D6 - 0x0055A512 (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A4D6(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055A4D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055A4DE: ;
    edi = MEM32(esp + 0x10);
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx);
    if (TEST_Z(edi, edi)) goto loc_0055A4F1; /* je: equal / zero */

loc_0055A4EC: ;
    ecx = MEM32(edx + 8);
    MEM32(edi) = ecx;

loc_0055A4F1: ;
    edi = MEM32(esp + 0x14);
    if (TEST_Z(edi, edi)) goto loc_0055A503; /* je: equal / zero */

loc_0055A4F9: ;
    ecx = MEM32(edx + 8);
    ecx = ecx & MEM32(edx + 4);
    ecx = ecx & MEM32(edx);
    MEM32(edi) = ecx;

loc_0055A503: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0055A50B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A512
 * Original: 0x0055A512 - 0x0055A517 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A512(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055A512: ;
    g_seh_ebp = ebp; sub_00558BA7(); return; /* tail jmp 0x00558BA7 */

}

/**
 * sub_0055A517
 * Original: 0x0055A517 - 0x0055A539 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A517(void)
{

loc_0055A517: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055A51E: ;
    edx = MEM32(esp + 8);
    esi = MEM32(edx);
    MEM32(edx + 4) = MEM32(edx + 4) & 0;
    SET_LO8(ecx, LO8(eax));
    MEM32(edx + 8) = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0055A533: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055A539
 * Original: 0x0055A539 - 0x0055A553 (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A539(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055A539: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 4), eax)) { sub_0055A553(); return; } /* jne: not equal / not zero */

loc_0055A547: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    g_seh_ebp = ebp; sub_0055A5A1(); return; /* tail jmp 0x0055A5A1 */

}

/**
 * sub_0055A5A6
 * Original: 0x0055A5A6 - 0x0055A5C1 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A5A6(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055A5A6: ;
    eax = MEM32(0x75FAE8);
    if (TEST_Z(eax, eax)) goto loc_0055A5C0; /* je: equal / zero */

loc_0055A5AF: ;
    ecx = MEM32(eax + 8);
    MEM32(0x75FAE8) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;

loc_0055A5C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A5C1
 * Original: 0x0055A5C1 - 0x0055A5E9 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A5C1(void)
{

loc_0055A5C1: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x58);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = edx + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(edx + 0xC) = 4;
    eax = MEM32(0x75FAE8);
    MEM32(edx + 8) = eax;
    MEM32(0x75FAE8) = edx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055A67F
 * Original: 0x0055A67F - 0x0055A69C (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A67F(void)
{

loc_0055A67F: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    eax = eax + ecx * 2;
    ecx = MEM32(0x762AF4);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 8);
    eax = MEM32(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055A69C
 * Original: 0x0055A69C - 0x0055A6CA (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A69C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055A69C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, 0x40000 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    if (TEST_Z(eax, 0x40000)) { sub_0055A6CA(); return; } /* je: equal / zero */

loc_0055A6AF: ;
    edx = MEM32(esi + 0x24);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    MEM8(esi + 0x111) = 0x43;
    MEM32(esi + 0x120) = edx;
    eax = eax & 0xFFFBFFFFu;
    g_seh_ebp = ebp; sub_0055A6FF(); return; /* tail jmp 0x0055A6FF */

}

/**
 * sub_0055A76E
 * Original: 0x0055A76E - 0x0055A788 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A76E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0055A76E: ;
    eax = MEM32(ecx + 0xC);
    edx = 0x80000;
    if (TEST_NZ(edx, eax)) goto loc_0055A787; /* jne: not equal / not zero */

loc_0055A77A: ;
    PUSH32(esp, ecx);
    eax = eax | edx;
    PUSH32(esp, 0);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0); sub_0055A69C(); /* call 0x0055A69C */

loc_0055A787: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A7BD
 * Original: 0x0055A7BD - 0x0055A814 (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A7BD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055A7BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    eax = eax + ecx * 2;
    ecx = MEM32(0x762AF4);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    edi = ecx + eax * 4;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055A7DE: ;
    esi = MEM32(edi + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 8), ebx - flags set for next jcc */
    SET_LO8(ecx, LO8(eax));
    MEM8(ebp + 0xF) = LO8(ecx);
    if (CMP_EQ(MEM32(esi + 8), ebx)) { sub_0055A814(); return; } /* je: equal / zero */

loc_0055A7ED: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 1;
    ecx = esi;
    PUSH32(esp, 0); sub_0055A76E(); /* call 0x0055A76E */

loc_0055A7F8: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0055A801: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561150), _icall_esp); /* indirect call */
    }

loc_0055A812: ;
    g_seh_ebp = ebp; sub_0055A81D(); return; /* tail jmp 0x0055A81D */

}

/**
 * sub_0055A82A
 * Original: 0x0055A82A - 0x0055A867 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A82A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0055A82A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    eax = eax + ecx * 2;
    ecx = MEM32(0x762AF4);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    MEM32(ebp + -8) = ebx;
    edi = ecx + eax * 4;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0055A852: ;
    MEM8(ebp + -1) = LO8(eax);
    PUSH32(esp, 0); sub_0055A5A6(); /* call 0x0055A5A6 */

loc_0055A85A: ;
    esi = eax;
    if (CMP_NE(esi, ebx)) { sub_0055A867(); return; } /* jne: not equal / not zero */

loc_0055A860: ;
    esi = 0xC0000017u;
    g_seh_ebp = ebp; sub_0055A876(); return; /* tail jmp 0x0055A876 */

}
