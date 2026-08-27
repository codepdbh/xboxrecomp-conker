/**
 * Burnout 3 - Recompiled code chunk 50
 * Functions: 250 (0x00436D81 - 0x00446B35)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00436D81
 * Original: 0x00436D81 - 0x00436DA1 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436D81(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436D81: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00437D54(); /* call 0x00437D54 */

loc_00436D89: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00436D9B; /* je: equal / zero */

loc_00436D90: ;
    PUSH32(esp, 0x8024);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00436D9B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00436DA1
 * Original: 0x00436DA1 - 0x00436DC1 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436DA1(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436DA1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00438834(); /* call 0x00438834 */

loc_00436DA9: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00436DBB; /* je: equal / zero */

loc_00436DB0: ;
    PUSH32(esp, 0x8029);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00436DBB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00436DC1
 * Original: 0x00436DC1 - 0x00436DF6 (53 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436DC1(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436DC1: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    edx = 0; /* xor self */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    edi = ecx;
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00436DEF; /* jbe: below or equal (unsigned <=) */

loc_00436DD6: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = eax;

loc_00436DDD: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004381BF(); /* call 0x004381BF */

loc_00436DE6: ;
    esi = esi + 0xA;
    ebx--;
    ecx = eax;
    if ((ebx != 0)) goto loc_00436DDD; /* jne: not equal / not zero */

loc_00436DEE: ;
    POP32(esp, ebx);

loc_00436DEF: ;
    POP32(esp, edi);
    eax = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00436DF6
 * Original: 0x00436DF6 - 0x00436E2E (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436DF6(void)
{

loc_00436DF6: ;
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
    ecx = ecx << 6;
    ecx = ecx + MEM32(esi + 0x1C);
    PUSH32(esp, 0x50);
    MEM32(edx) = ecx;
    edi = MEM32(edx);
    MEM32(edx + 0x10) = eax;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    MEM32(edx + 4) = 0x140;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00436E2E
 * Original: 0x00436E2E - 0x00436E4E (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436E2E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00436E2E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0); sub_004380B7(); /* call 0x004380B7 */

loc_00436E41: ;
    if (TEST_S(eax, eax)) { sub_00436E4E(); return; } /* jl: less (signed <) */

loc_00436E45: ;
    MEM32(esi + 0x48) = 1;
    g_seh_ebp = ebp; sub_00436E51(); return; /* tail jmp 0x00436E51 */

}

/**
 * sub_00436E54
 * Original: 0x00436E54 - 0x00436E6E (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436E54(void)
{

loc_00436E54: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0); sub_0043873C(); /* call 0x0043873C */

loc_00436E65: ;
    MEM32(esi + 0x4C) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436E6E
 * Original: 0x00436E6E - 0x00436F27 (185 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436E6E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00436E6E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(MEM32(ebx + 0x5C), 2)) goto loc_00436F22; /* jne: not equal / not zero */

loc_00436E81: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00436DF6(); /* call 0x00436DF6 */

loc_00436E8F: ;
    eax = MEM32(ebx + 0x58);
    ecx = MEM32(ebp + -20);
    edi = MEM32(ebp + -24);
    esi = eax + eax * 4;
    eax = ecx;
    esi = esi << 6;
    esi = esi + MEM32(ebx + 0x24);
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    eax++;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(ebx + 0x18);
    esi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(ebx + 0x58) = edx;
    ecx = MEM32(eax);
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_00436ECD: ;
    if (CMP_NE(MEM32(ebx + 0x58), esi)) goto loc_00436F20; /* jne: not equal / not zero */

loc_00436ED2: ;
    edi = MEM32(ebx + 0x24);
    eax = 0; /* xor self */
    ecx = 0xF0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F8), _icall_esp); /* indirect call */
    }

loc_00436EE8: ;
    ecx = MEM32(ebx + 0x54);
    PUSH32(esp, 0x3C0);
    PUSH32(esp, MEM32(ebx + 0x24));
    PUSH32(esp, 0); sub_00438848(); /* call 0x00438848 */

loc_00436EF8: ;
    edi = eax;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F4), _icall_esp); /* indirect call */
    }

loc_00436F04: ;
    if (CMP_NE(edi, 1)) goto loc_00436F1D; /* jne: not equal / not zero */

loc_00436F09: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0x18));
    MEM32(ebx + 0x5C) = 3;
    PUSH32(esp, 0); sub_004C5218(); /* call 0x004C5218 */

loc_00436F1B: ;
    goto loc_00436F20;

loc_00436F1D: ;
    MEM32(ebx + 0x58) = esi;

loc_00436F20: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00436F22: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00436F27
 * Original: 0x00436F27 - 0x00436F57 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436F27(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00436F27: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, 0); sub_00437AF7(); /* call 0x00437AF7 */

loc_00436F32: ;
    if (TEST_Z(eax, eax)) { sub_00436F57(); return; } /* je: equal / zero */

loc_00436F36: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    POP32(esp, ecx);
    edi = esi + 0x140;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    PUSH32(esp, 0); sub_00436E2E(); /* call 0x00436E2E */

loc_00436F4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00436E54(); return; /* tail jmp 0x00436E54 */

}

/**
 * sub_00436F59
 * Original: 0x00436F59 - 0x00436F73 (26 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436F59(void)
{
    int _flags = 0; /* fallback flag var */

loc_00436F59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    eax = eax | 0xFFFFFFFFu;
    ecx = ecx + 0x28;
    POP32(esp, esi);

loc_00436F63: ;
    edx = MEM32(ecx);
    if (CMP_AE(edx, eax)) goto loc_00436F6B; /* jae: above or equal (unsigned >=) */

loc_00436F69: ;
    eax = edx;

loc_00436F6B: ;
    ecx = ecx + 4;
    esi--;
    if ((esi != 0)) goto loc_00436F63; /* jne: not equal / not zero */

loc_00436F71: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436F73
 * Original: 0x00436F73 - 0x00436F98 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436F73(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00436F73: ;
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

loc_00436F82: ;
    edi = MEM32(ebp + 8);
    MEM8(ebp + -1) = LO8(eax);
    eax = esi + 0x40;
    edx = MEM32(eax);
    if (CMP_B(edi, edx)) { sub_00436F98(); return; } /* jb: below (unsigned <) */

loc_00436F91: ;
    ebx = 0x80004005u;
    g_seh_ebp = ebp; sub_00437013(); return; /* tail jmp 0x00437013 */

}

/**
 * sub_0043701C
 * Original: 0x0043701C - 0x00437061 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043701C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043701C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0043702A: ;
    ecx = MEM32(ebp + 0xC);
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + 8);
    if (CMP_AE(eax, 4)) { sub_00437061(); return; } /* jae: above or equal (unsigned >=) */

loc_00437038: ;
    if (CMP_EQ(MEM32(ecx), 1)) goto loc_00437044; /* je: equal / zero */

loc_0043703D: ;
    esi = 0x80004005u;
    g_seh_ebp = ebp; sub_004370B5(); return; /* tail jmp 0x004370B5 */

loc_00437044: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx);
    edi = MEM32(esi + 0x3C);
    eax = eax << 3;
    MEM32(eax + edi) = edx;
    ecx = MEM32(ecx + 4);
    edx = MEM32(esi + 0x3C);
    ecx = MEM32(ecx + 4);
    MEM32(edx + eax + 4) = ecx;
    g_seh_ebp = ebp; sub_0043709D(); return; /* tail jmp 0x0043709D */

}

/**
 * sub_004370BD
 * Original: 0x004370BD - 0x00437127 (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004370BD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004370BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_004370CE: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(edi + 0x3C);
    edx = ebp + -44;
    ecx = ebp + -40;
    ebx = 0; /* xor self */
    edx = edx - eax;
    ecx = ecx - eax;

loc_004370E0: ;
    (void)0; /* cmp ebx, MEM32(ebp + 8) - flags set for next jcc */
    esi = MEM32(eax);
    MEM32(edx + eax) = esi;
    esi = 0xFFFFD8F0u;
    if (CMP_EQ(ebx, MEM32(ebp + 8))) goto loc_004370F2; /* je: equal / zero */

loc_004370EF: ;
    esi = MEM32(eax + 4);

loc_004370F2: ;
    MEM32(ecx + eax) = esi;
    ebx++;
    eax = eax + 8;
    if (CMP_B(ebx, 4)) goto loc_004370E0; /* jb: below (unsigned <) */

loc_004370FE: ;
    eax = ebp + -44;
    MEM32(ebp + -8) = eax;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0x18));
    MEM32(ebp + -12) = 4;
    PUSH32(esp, 0); sub_004C520E(); /* call 0x004C520E */

loc_00437117: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00437120: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437127
 * Original: 0x00437127 - 0x0043715F (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437127(void)
{
    uint32_t ebp;

loc_00437127: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00437136: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0x3C);
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    MEM32(ebp + -8) = 4;
    PUSH32(esp, 0); sub_004C520E(); /* call 0x004C520E */

loc_00437151: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00437159: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043715F
 * Original: 0x0043715F - 0x004371EC (141 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043715F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043715F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;

loc_0043716D: ;
    PUSH32(esp, 0); sub_004C5248(); /* call 0x004C5248 */

loc_00437172: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

loc_0043717F: ;
    if (TEST_NZ(MEM8(ebp + -6), 1)) goto loc_0043716D; /* jne: not equal / not zero */

loc_00437185: ;
    PUSH32(esp, 0); sub_004C5248(); /* call 0x004C5248 */

loc_0043718A: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0); sub_004C5209(); /* call 0x004C5209 */

loc_00437194: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0043719A: ;
    edi = MEM32(esi + 0x1C);
    MEM8(ebp + -1) = LO8(eax);
    eax = 0; /* xor self */
    ecx = 0xA0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = 0; /* xor self */

loc_004371AB: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

loc_004371B8: ;
    if (TEST_Z(MEM8(ebp + -8), 1)) goto loc_004371D9; /* je: equal / zero */

loc_004371BE: ;
    PUSH32(esp, edi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00436DF6(); /* call 0x00436DF6 */

loc_004371CA: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = ebp + -32;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_004371D9: ;
    edi++;
    if (CMP_B(edi, 2)) goto loc_004371AB; /* jb: below (unsigned <) */

loc_004371DF: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004371E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004371EC
 * Original: 0x004371EC - 0x0043727A (142 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004371EC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004371EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0); sub_00438AB1(); /* call 0x00438AB1 */

loc_00437204: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_00437272; /* jl: less (signed <) */

loc_0043720A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00437211: ;
    (void)0; /* cmp MEM32(ebp + 0x10), 0 - flags set for next jcc */
    PUSH32(esp, 2);
    MEM8(ebp + 0xB) = LO8(eax);
    POP32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) goto loc_0043723B; /* je: equal / zero */

loc_0043721D: ;
    eax = MEM32(esi + 0x44);
    MEM32(ebp + -8) = edi;
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    MEM32(ebp + -16) = 1;
    MEM32(ebp + -12) = eax;
    ecx = ebp + -16;
    goto loc_0043723E;

loc_0043723B: ;
    ecx = esi + 0x40;

loc_0043723E: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5A08(); /* call 0x004C5A08 */

loc_00437248: ;
    SET_LO8(ecx, MEM8(ebp + 0xB));
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00437257: ;
    if (TEST_S(ebx, ebx)) goto loc_00437271; /* jl: less (signed <) */

loc_0043725B: ;
    MEM32(esi + 0x5C) = edi;
    edi = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    ecx = 0xF0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    PUSH32(esp, 0); sub_0043715F(); /* call 0x0043715F */

loc_00437271: ;
    POP32(esp, edi);

loc_00437272: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043727A
 * Original: 0x0043727A - 0x004372AB (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043727A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043727A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00437284: ;
    (void)0; /* cmp MEM32(esi + 0x5C), 2 - flags set for next jcc */
    SET_LO8(ebx, LO8(eax));
    if (CMP_NE(MEM32(esi + 0x5C), 2)) goto loc_004372A1; /* jne: not equal / not zero */

loc_0043728C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x18));
    MEM32(esi + 0x5C) = 3;
    PUSH32(esp, 0); sub_004C5218(); /* call 0x004C5218 */

loc_004372A1: ;
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ebx));
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5610E8)); return; /* indirect tail jmp */

}

/**
 * sub_004372AB
 * Original: 0x004372AB - 0x004372C0 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004372AB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004372AB: ;
    if (CMP_NE(MEM32(ecx + 0x5C), 3)) { sub_004372C0(); return; } /* jne: not equal / not zero */

loc_004372B1: ;
    MEM32(ecx + 0x5C) = 4;
    ecx = MEM32(ecx + 0x54);
    g_seh_ebp = ebp; sub_00438834(); return; /* tail jmp 0x00438834 */

}

/**
 * sub_004372C1
 * Original: 0x004372C1 - 0x0043730B (74 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004372C1(void)
{
    uint32_t ebp;

loc_004372C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -24;
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0); sub_00436DF6(); /* call 0x00436DF6 */

loc_004372D8: ;
    ecx = MEM32(ebp + -20);
    esi = MEM32(ebx + 0x24);
    edi = MEM32(ebp + -24);
    eax = ecx;
    ecx = ecx >> 2;
    esi = esi + 0x140;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ebx = MEM32(ebx + 0x18);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_00437304: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437339
 * Original: 0x00437339 - 0x0043737E (69 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437339(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00437339: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    MEM16(ebp + -20) = MEM16(ebp + -20) & 0;
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + -18;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = 0; /* xor self */
    edi = ebp + -40;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x21);
    eax = eax << 3;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_0043736D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x3C) = eax;
    if (TEST_NZ(eax, eax)) { sub_0043737E(); return; } /* jne: not equal / not zero */

loc_00437374: ;
    edi = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00437471(); return; /* tail jmp 0x00437471 */

}

/**
 * sub_00437479
 * Original: 0x00437479 - 0x00437549 (208 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437479(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00437479: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    esi = ecx;
    edi = esi + 0x28;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 2);
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0); sub_00437339(); /* call 0x00437339 */

loc_0043749B: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_00437539; /* jl: less (signed <) */

loc_004374A5: ;
    PUSH32(esp, 0x8017);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_004374B1: ;
    if (TEST_Z(eax, eax)) goto loc_004374BC; /* je: equal / zero */

loc_004374B5: ;
    MEM32(eax) = MEM32(eax) & 0;
    ecx = eax;
    goto loc_004374BE;

loc_004374BC: ;
    ecx = 0; /* xor self */

loc_004374BE: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0xC) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00437534; /* je: equal / zero */

loc_004374C5: ;
    PUSH32(esp, 0); sub_004387CA(); /* call 0x004387CA */

loc_004374CA: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_00437539; /* jl: less (signed <) */

loc_004374D0: ;
    PUSH32(esp, 0x8024);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_004374DF: ;
    if (TEST_Z(eax, eax)) goto loc_004374EE; /* je: equal / zero */

loc_004374E3: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00436C5F(); /* call 0x00436C5F */

loc_004374EA: ;
    edx = eax;
    goto loc_004374F0;

loc_004374EE: ;
    edx = 0; /* xor self */

loc_004374F0: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esi + 0x10) = edx;
    if (TEST_Z(edx, edx)) goto loc_00437534; /* je: equal / zero */

loc_004374F7: ;
    PUSH32(esp, 0xA);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    ecx = ebx;
    edi = ebp + -40;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(0x75F11C);
    MEM32(ebp + -36) = ebx;
    eax = MEM32(eax + 0x1C);
    MEM32(ebp + -8) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0); sub_00437D8F(); /* call 0x00437D8F */

loc_0043751C: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_00437539; /* jl: less (signed <) */

loc_00437522: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_0043752B: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0x20) = edi;
    if (TEST_NZ(edi, edi)) { sub_00437549(); return; } /* jne: not equal / not zero */

loc_00437534: ;
    ebx = 0x8007000Eu;

loc_00437539: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00437551(); /* call 0x00437551 */

loc_00437540: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437551
 * Original: 0x00437551 - 0x0043759B (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437551(void)
{
    int _flags = 0; /* fallback flag var */

loc_00437551: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00436D01(); /* call 0x00436D01 */

loc_00437559: ;
    ecx = MEM32(esi + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_0043756B; /* je: equal / zero */

loc_00437560: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00436D61(); /* call 0x00436D61 */

loc_00437567: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;

loc_0043756B: ;
    ecx = MEM32(esi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_0043757D; /* je: equal / zero */

loc_00437572: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00436D81(); /* call 0x00436D81 */

loc_00437579: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;

loc_0043757D: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00437587: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00437595: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043759B
 * Original: 0x0043759B - 0x004375D3 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043759B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043759B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00436D01(); /* call 0x00436D01 */

loc_004375A3: ;
    ecx = MEM32(esi + 0x54);
    if (TEST_Z(ecx, ecx)) goto loc_004375B5; /* je: equal / zero */

loc_004375AA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00436DA1(); /* call 0x00436DA1 */

loc_004375B1: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) & 0;

loc_004375B5: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_004375BF: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_004375CD: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004375D3
 * Original: 0x004375D3 - 0x004376B2 (223 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004375D3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004375D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, 0); sub_00437339(); /* call 0x00437339 */

loc_004375E9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_004376A2; /* jl: less (signed <) */

loc_004375F4: ;
    PUSH32(esp, 0x8017);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_00437600: ;
    if (TEST_Z(eax, eax)) goto loc_0043760B; /* je: equal / zero */

loc_00437604: ;
    MEM32(eax) = MEM32(eax) & 0;
    ecx = eax;
    goto loc_0043760D;

loc_0043760B: ;
    ecx = 0; /* xor self */

loc_0043760D: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0xC) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0043769B; /* je: equal / zero */

loc_00437618: ;
    PUSH32(esp, 0); sub_004387CA(); /* call 0x004387CA */

loc_0043761D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_004376A2; /* jl: less (signed <) */

loc_00437624: ;
    PUSH32(esp, 0x8024);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_00437633: ;
    if (TEST_Z(eax, eax)) goto loc_00437642; /* je: equal / zero */

loc_00437637: ;
    ecx = eax;
    PUSH32(esp, 0); sub_00436C5F(); /* call 0x00436C5F */

loc_0043763E: ;
    edx = eax;
    goto loc_00437644;

loc_00437642: ;
    edx = 0; /* xor self */

loc_00437644: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esi + 0x10) = edx;
    if (TEST_Z(edx, edx)) goto loc_0043769B; /* je: equal / zero */

loc_0043764B: ;
    PUSH32(esp, 0xA);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -64;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(0x75F11C);
    MEM32(ebp + -60) = 0xA;
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0x28);
    MEM32(ebp + -32) = eax;
    POP32(esp, eax);
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -52) = eax;
    eax = ebp + -64;
    PUSH32(esp, eax);
    ecx = edx;
    MEM32(ebp + -56) = 0x50;
    PUSH32(esp, 0); sub_00437D8F(); /* call 0x00437D8F */

loc_00437682: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_004376A2; /* jl: less (signed <) */

loc_00437689: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_00437692: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0x20) = edi;
    if (TEST_NZ(edi, edi)) { sub_004376B2(); return; } /* jne: not equal / not zero */

loc_0043769B: ;
    MEM32(ebp + 8) = 0x8007000Eu;

loc_004376A2: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00437551(); /* call 0x00437551 */

loc_004376A9: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004376E9
 * Original: 0x004376E9 - 0x0043775C (115 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004376E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004376E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    edi = 0; /* xor self */
    edi++;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x1C));
    esi = ecx;
    PUSH32(esp, 0); sub_00437339(); /* call 0x00437339 */

loc_004376FE: ;
    ebp = eax;
    ebx = 0; /* xor self */
    if (CMP_L(ebp, ebx)) goto loc_0043774C; /* jl: less (signed <) */

loc_00437706: ;
    PUSH32(esp, 0x8029);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_00437712: ;
    if (CMP_EQ(eax, ebx)) goto loc_00437729; /* je: equal / zero */

loc_00437716: ;
    MEM32(eax) = ebx;
    MEM32(eax + 0x44) = edi;
    MEM32(eax + 0x48) = ebx;
    MEM32(eax + 0x4C) = ebx;
    MEM32(eax + 0x50) = ebx;
    MEM32(eax + 0x54) = ebx;
    goto loc_0043772B;

loc_00437729: ;
    eax = 0; /* xor self */

loc_0043772B: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x54) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00437747; /* je: equal / zero */

loc_00437732: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0xBB);
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_0043773E: ;
    edi = eax;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esi + 0x20) = edi;
    if (CMP_NE(edi, ebx)) { sub_0043775C(); return; } /* jne: not equal / not zero */

loc_00437747: ;
    ebp = 0x8007000Eu;

loc_0043774C: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0043759B(); /* call 0x0043759B */

loc_00437753: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043778D
 * Original: 0x0043778D - 0x004377AB (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043778D(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043778D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0); sub_00435C2B(); /* call 0x00435C2B */

loc_0043779B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_Z(eax, eax)) goto loc_004377A7; /* je: equal / zero */

loc_004377A1: ;
    eax = 0; /* xor self */
    eax++;
    MEM32(esi + 4) = eax;

loc_004377A7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004377AB
 * Original: 0x004377AB - 0x004377E4 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004377AB(void)
{
    uint32_t ebp;

loc_004377AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_004377BC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004377CE: ;
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, MEM32(esi + 0x90));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_004377E1: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004377E4
 * Original: 0x004377E4 - 0x00437808 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004377E4(void)
{

loc_004377E4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x3C) = ecx;
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00437801: ;
    MEM32(esi + 0x48) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437808
 * Original: 0x00437808 - 0x00437840 (56 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437808(void)
{
    int _flags = 0; /* fallback flag var */

loc_00437808: ;
    eax = 0; /* xor self */
    if (CMP_NE(MEM32(0x75F228), eax)) goto loc_0043783D; /* jne: not equal / not zero */

loc_00437812: ;
    if (CMP_NE(MEM32(0x75F22C), eax)) goto loc_0043783D; /* jne: not equal / not zero */

loc_0043781A: ;
    ecx = MEM32(esp + 4);
    MEM32(0x75F228) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x75F22C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(0x75F230) = ecx;
    MEM32(0x75F234) = eax;

loc_0043783D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00437840
 * Original: 0x00437840 - 0x00437897 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00437840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    eax = eax - MEM32(0x75F228);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(0x75F234);
    PUSH32(esp, edi);
    edi = MEM32(0x75F230);
    PUSH32(esp, esi);
    ecx = ebx;
    ecx = ecx - MEM32(0x75F22C) - _cf; /* sbb */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470CD0(); /* call 0x00470CD0 */

loc_00437871: ;
    MEM32(ebp + -4) = edx;
    ecx = esi;
    edx = edi;
    edx = (edx >> 1) | (ecx << (32 - 1)); /* shrd */
    ecx = ecx >> 1;
    if (CMP_A(ebx, ecx)) { sub_00437897(); return; } /* ja: above (unsigned >) */

loc_00437882: ;
    if (CMP_B(ebx, ecx)) goto loc_00437889; /* jb: below (unsigned <) */

loc_00437884: ;
    if (CMP_AE(MEM32(ebp + 8), edx)) { sub_00437897(); return; } /* jae: above or equal (unsigned >=) */

loc_00437889: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - eax;
    ebx = ebx - MEM32(ebp + -4) - _cf; /* sbb */
    edi = ecx;
    esi = ebx;
    g_seh_ebp = ebp; sub_004378A1(); return; /* tail jmp 0x004378A1 */

}

/**
 * sub_004378AC
 * Original: 0x004378AC - 0x004378E1 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004378AC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004378AC: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    (void)0; /* test LO8(ebx), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(ebx), 2)) { sub_004378E1(); return; } /* je: equal / zero */

loc_004378B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x434726);
    esi = edi + -4;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00016260(); /* call 0x00016260 */

loc_004378CC: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_004378DC; /* je: equal / zero */

loc_004378D1: ;
    PUSH32(esp, 0x8025);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_004378DC: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004378F3(); return; /* tail jmp 0x004378F3 */

}

/**
 * sub_004378F8
 * Original: 0x004378F8 - 0x00437956 (94 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004378F8(void)
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

loc_004378F8: ;
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    if (CMP_NE(MEM32(ecx), edx)) goto loc_00437908; /* jne: not equal / not zero */

loc_00437902: ;
    MEM32(ecx) = 0x14;

loc_00437908: ;
    if (CMP_NE(MEM32(ecx + 0xC), edx)) goto loc_00437914; /* jne: not equal / not zero */

loc_0043790D: ;
    MEM32(ecx + 0xC) = 0x50;

loc_00437914: ;
    if (CMP_NE(MEM32(ecx + 8), edx)) goto loc_00437920; /* jne: not equal / not zero */

loc_00437919: ;
    MEM32(ecx + 8) = 0x1F4;

loc_00437920: ;
    if (CMP_NE(MEM32(ecx + 0x10), edx)) goto loc_0043792C; /* jne: not equal / not zero */

loc_00437925: ;
    MEM32(ecx + 0x10) = 0xF0;

loc_0043792C: ;
    fp_push(MEMD(ecx + 0x18)); /* fld double */
    fp_push(MEMD(0x648F30)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00437947; /* jp: parity */

loc_0043793E: ;
    fp_push(MEMD(0x561C18)); /* fld double */
    MEMD(ecx + 0x18) = fp_top(); fp_popp(); /* fstp */

loc_00437947: ;
    if (CMP_NE(MEM32(ecx + 0x20), edx)) goto loc_00437953; /* jne: not equal / not zero */

loc_0043794C: ;
    MEM32(ecx + 0x20) = 0xA;

loc_00437953: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00437956
 * Original: 0x00437956 - 0x00437A03 (173 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437956(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00437956: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_00437978: ;
    eax = eax + MEM32(esi + 0x30);
    edx = MEM32(esi + 0x4C);
    ecx = 0xFFF;
    eax = eax & ecx;
    ebx = eax + 0x1000;
    edi = ebx;
    edi = edi - edx;
    edx = edx + ebx;
    ebx = MEM32(esp + 0x10);
    edi = edi & ecx;
    edx = edx & ecx;
    if (CMP_AE(edi, edx)) goto loc_004379AD; /* jae: above or equal (unsigned >=) */

loc_0043799D: ;
    if (CMP_B(ebx, edi)) goto loc_004379B5; /* jb: below (unsigned <) */

loc_004379A1: ;
    if (CMP_A(ebx, edx)) goto loc_004379B5; /* ja: above (unsigned >) */

loc_004379A5: ;
    edx = 0; /* xor self */
    if (CMP_AE(ebx, eax)) goto loc_004379CE; /* jae: above or equal (unsigned >=) */

loc_004379AB: ;
    goto loc_00437A00;

loc_004379AD: ;
    if (CMP_AE(ebx, edi)) goto loc_004379C0; /* jae: above or equal (unsigned >=) */

loc_004379B1: ;
    if (CMP_BE(ebx, edx)) goto loc_004379C0; /* jbe: below or equal (unsigned <=) */

loc_004379B5: ;
    MEM32(esi + 0xA4) = MEM32(esi + 0xA4) + 1;
    PUSH32(esp, 2);
    POP32(esp, edx);
    goto loc_004379EE;

loc_004379C0: ;
    if (CMP_AE(eax, edx)) goto loc_004379F6; /* jae: above or equal (unsigned >=) */

loc_004379C4: ;
    if (CMP_A(eax, ebx)) goto loc_004379FE; /* ja: above (unsigned >) */

loc_004379C8: ;
    if (CMP_A(ebx, edx)) goto loc_004379FE; /* ja: above (unsigned >) */

loc_004379CC: ;
    edx = 0; /* xor self */

loc_004379CE: ;
    ebx = ebx - eax;
    eax = MEM32(esp + 0x14);
    ebx = ebx & ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esi + 0xC));
    ecx = 0; /* xor self */
    ebx = ebx + MEM32(esi + 0x20);
    ecx = ecx + MEM32(esi + 0x24) + _cf; /* adc */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;

loc_004379E7: ;
    MEM32(esi + 0xA4) = MEM32(esi + 0xA4) & 0;

loc_004379EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_004379F6: ;
    if (CMP_A(edi, ebx)) goto loc_004379CC; /* ja: above (unsigned >) */

loc_004379FA: ;
    if (CMP_AE(ebx, eax)) goto loc_004379CC; /* jae: above or equal (unsigned >=) */

loc_004379FE: ;
    edx = 0; /* xor self */

loc_00437A00: ;
    edx++;
    goto loc_004379E7;

}

/**
 * sub_00437A03
 * Original: 0x00437A03 - 0x00437A2D (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437A03(void)
{
    int _flags = 0; /* fallback flag var */

loc_00437A03: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(edx) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00437A16; /* je: equal / zero */

loc_00437A12: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0;

loc_00437A16: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    if (TEST_Z(ecx, ecx)) goto loc_00437A2A; /* je: equal / zero */

loc_00437A22: ;
    if (CMP_NE(MEM32(edx), 0)) goto loc_00437A2A; /* jne: not equal / not zero */

loc_00437A27: ;
    MEM32(ecx) = MEM32(ecx) & 0;

loc_00437A2A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437A2D
 * Original: 0x00437A2D - 0x00437A66 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437A2D(void)
{
    int _flags = 0; /* fallback flag var */

loc_00437A2D: ;
    ecx = MEM32(ecx + 0x18);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_00437A63; /* je: equal / zero */

loc_00437A36: ;
    PUSH32(esp, esi);

loc_00437A37: ;
    esi = MEM32(ecx + 4);
    (void)0; /* cmp MEM32(esp + 0xC), esi - flags set for next jcc */
    edx = MEM32(ecx);
    if (CMP_B(MEM32(esp + 0xC), esi)) goto loc_00437A62; /* jb: below (unsigned <) */

loc_00437A42: ;
    if (CMP_A(MEM32(esp + 0xC), esi)) goto loc_00437A4A; /* ja: above (unsigned >) */

loc_00437A44: ;
    if (CMP_B(MEM32(esp + 8), edx)) goto loc_00437A62; /* jb: below (unsigned <) */

loc_00437A4A: ;
    if (CMP_NE(MEM32(esp + 8), edx)) goto loc_00437A56; /* jne: not equal / not zero */

loc_00437A50: ;
    if (CMP_EQ(MEM32(esp + 0xC), esi)) goto loc_00437A5F; /* je: equal / zero */

loc_00437A56: ;
    ecx = MEM32(ecx + 0x10);
    if (TEST_NZ(ecx, ecx)) goto loc_00437A37; /* jne: not equal / not zero */

loc_00437A5D: ;
    goto loc_00437A62;

loc_00437A5F: ;
    eax = 0; /* xor self */
    eax++;

loc_00437A62: ;
    POP32(esp, esi);

loc_00437A63: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437A66
 * Original: 0x00437A66 - 0x00437A84 (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437A66(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00437A66: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ecx + 0x54) = MEM32(ecx + 0x54) + 1;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x18);
    if (TEST_NZ(ebx, ebx)) { sub_00437A84(); return; } /* jne: not equal / not zero */

loc_00437A79: ;
    eax = MEM32(ebp + 8);
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x18) = eax;
    g_seh_ebp = ebp; sub_00437AEF(); return; /* tail jmp 0x00437AEF */

}

/**
 * sub_00437AF7
 * Original: 0x00437AF7 - 0x00437B23 (44 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437AF7(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00437AF7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(esi + 0x58), edi)) goto loc_00437B1C; /* je: equal / zero */

loc_00437B04: ;
    PUSH32(esp, 0); sub_004377AB(); /* call 0x004377AB */

loc_00437B09: ;
    eax = eax - MEM32(esi + 0x28);
    edx = edx - MEM32(esi + 0x2C) - _cf; /* sbb */
    eax = eax - MEM32(esi + 0x20);
    MEM32(esp + 0xC) = edx;
    if (CMP_L(eax, MEM32(esi + 0x38))) goto loc_00437B1C; /* jl: less (signed <) */

loc_00437B1B: ;
    edi++;

loc_00437B1C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00437B23
 * Original: 0x00437B23 - 0x00437B73 (80 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437B23(void)
{
    int _flags = 0; /* fallback flag var */

loc_00437B23: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    esi = ecx;
    MEM32(edi) = ebx;
    PUSH32(esp, 0); sub_00437AF7(); /* call 0x00437AF7 */

loc_00437B35: ;
    if (TEST_Z(eax, eax)) goto loc_00437B6B; /* je: equal / zero */

loc_00437B39: ;
    if (CMP_BE(MEM32(esi + 0x54), ebx)) goto loc_00437B65; /* jbe: below or equal (unsigned <=) */

loc_00437B3E: ;
    edx = MEM32(esi + 0x20);
    ecx = esi + 0x18;
    eax = MEM32(ecx);
    if (CMP_NE(edx, MEM32(eax))) goto loc_00437B65; /* jne: not equal / not zero */

loc_00437B4A: ;
    edx = MEM32(esi + 0x24);
    if (CMP_NE(edx, MEM32(eax + 4))) goto loc_00437B65; /* jne: not equal / not zero */

loc_00437B52: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00437A03(); /* call 0x00437A03 */

loc_00437B5E: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    ebx = eax;
    goto loc_00437B6B;

loc_00437B65: ;
    MEM32(edi) = 1;

loc_00437B6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437B73
 * Original: 0x00437B73 - 0x00437B8D (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437B73(void)
{
    int _flags = 0; /* fallback flag var */

loc_00437B73: ;
    edx = MEM32(ecx + 0x14);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(edx, edx)) goto loc_00437B87; /* je: equal / zero */

loc_00437B7E: ;
    MEM32(edx + 0xC) = eax;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x10) = edx;

loc_00437B87: ;
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437B8D
 * Original: 0x00437B8D - 0x00437D54 (455 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437B8D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00437B8D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(0x58);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_00437BAE; /* je: equal / zero */

loc_00437BA4: ;
    eax = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F8), _icall_esp); /* indirect call */
    }

loc_00437BAE: ;
    edx = MEM32(esi + 0x48);
    fp_push((double)SMEM32(esi + 0x80)); /* fild */
    eax = MEM32(esi + 0x80);
    edx = edx - MEM32(esi + 0x50);
    if (CMP_GE(eax & eax, 0)) goto loc_00437BCA; /* jge: greater or equal (signed >=) */

loc_00437BC4: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00437BCA: ;
    eax = MEM32(esi + 0x88);
    MEMD(ebp + -12) = fp_top(); fp_pop(); /* fst */
    (void)0; /* test eax, eax - flags set for next jcc */
    fp_push((double)SMEM32(esi + 0x88)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00437BE3; /* jge: greater or equal (signed >=) */

loc_00437BDD: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00437BE3: ;
    /* FPU: fdivrp st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom qword ptr [0x648d08] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00437BF6; /* jnp: not parity */

loc_00437BF2: ;
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */

loc_00437BF6: ;
    fp_push(MEMD(ebp + -12)); /* fld double */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom qword ptr [0x648d08] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00437C0D; /* jnp: not parity */

loc_00437C09: ;
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */

loc_00437C0D: ;
    eax = MEM32(esi + 0x5C);
    MEMD(esi + 0x78) = fp_top(); fp_pop(); /* fst */
    fp_push(1.0); /* fld1 */
    eax = eax + edx * 8;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMD(eax) = fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esi + 0x5C);
    ecx = eax + edx * 8;
    /* fstp st(0) */
    MEM32(esi + 0x80) = edi;
    /* fstp st(0) */
    MEM32(esi + 0x88) = edi;
    fp_push(MEMD(ecx)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [esi + 0x68] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00437CF4; /* jp: parity */

loc_00437C4A: ;
    if (CMP_BE(edx, edi)) goto loc_00437D3B; /* jbe: below or equal (unsigned <=) */

loc_00437C52: ;
    fp_push(MEMD(ecx + -8)); /* fld double */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(ecx)); /* fld double */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00437D3B; /* jne: not equal / not zero */

loc_00437C6E: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x38);
    ecx = 0; /* xor self */
    edx = edx - eax;
    eax = MEM32(esi + 0x3C);
    eax = eax - ecx - _cf; /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_004377E4(); /* call 0x004377E4 */

loc_00437C86: ;
    ebx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + ebx;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + eax + _cf; /* adc */
    if (CMP_BE(MEM32(esi + 0x54), edi)) goto loc_00437D3B; /* jbe: below or equal (unsigned <=) */

loc_00437C9A: ;
    edi = MEM32(esi + 0x18);
    eax = MEM32(edi + 4);
    edx = MEM32(esi + 0x24);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    ecx = MEM32(edi);
    if (CMP_B(edx, eax)) goto loc_00437D3B; /* jb: below (unsigned <) */

loc_00437CAD: ;
    if (CMP_A(edx, eax)) goto loc_00437CBA; /* ja: above (unsigned >) */

loc_00437CAF: ;
    edx = MEM32(esi + 0x20);
    if (CMP_BE(edx, ecx)) goto loc_00437D3B; /* jbe: below or equal (unsigned <=) */

loc_00437CBA: ;
    PUSH32(esp, 0);
    ecx = ecx + ebx;
    POP32(esp, edx);
    eax = eax + edx + _cf; /* adc */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_00437A2D(); /* call 0x00437A2D */

loc_00437CCA: ;
    if (TEST_Z(eax, eax)) goto loc_00437CEA; /* je: equal / zero */

loc_00437CCE: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00437A03(); /* call 0x00437A03 */

loc_00437CDD: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00437B73(); /* call 0x00437B73 */

loc_00437CE8: ;
    goto loc_00437D3B;

loc_00437CEA: ;
    MEM32(edi) = MEM32(edi) + ebx;
    PUSH32(esp, 0);
    POP32(esp, eax);
    MEM32(edi + 4) = MEM32(edi + 4) + eax + _cf; /* adc */
    goto loc_00437D3B;

loc_00437CF4: ;
    edx++;
    if (CMP_AE(edx, MEM32(esi + 0x60))) goto loc_00437D3B; /* jae: above or equal (unsigned >=) */

loc_00437CFA: ;
    fp_push(MEMD(ecx + 8)); /* fld double */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(ecx)); /* fld double */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00437D3B; /* jne: not equal / not zero */

loc_00437D12: ;
    if (CMP_NE(MEM32(esi + 0x20), edi)) goto loc_00437D1C; /* jne: not equal / not zero */

loc_00437D17: ;
    if (CMP_EQ(MEM32(esi + 0x24), edi)) goto loc_00437D3B; /* je: equal / zero */

loc_00437D1C: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x3C);
    ecx = 0; /* xor self */
    eax = eax + MEM32(esi + 0x38);
    edx = edx + ecx + _cf; /* adc */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004377E4(); /* call 0x004377E4 */

loc_00437D32: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) - eax;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) - edi - _cf; /* sbb */

loc_00437D3B: ;
    eax = MEM32(0x58);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00437D52; /* je: equal / zero */

loc_00437D48: ;
    eax = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F4), _icall_esp); /* indirect call */
    }

loc_00437D52: ;
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
 * sub_00437D54
 * Original: 0x00437D54 - 0x00437D8F (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437D54(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00437D54: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x5C));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00437D61: ;
    ecx = MEM32(esi);
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0;
    if (TEST_Z(ecx, ecx)) goto loc_00437D75; /* je: equal / zero */

loc_00437D6B: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_004378AC(); /* call 0x004378AC */

loc_00437D72: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_00437D75: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_00435C63(); /* call 0x00435C63 */

loc_00437D7F: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    ecx = esi + 0x9C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00437777(); return; /* tail jmp 0x00437777 */

}

/**
 * sub_00437D8F
 * Original: 0x00437D8F - 0x00437DD6 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437D8F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00437D8F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x90;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_0042E14C(); /* call 0x0042E14C */

loc_00437DAB: ;
    if (TEST_NZ(eax, eax)) { sub_00437DD6(); return; } /* jne: not equal / not zero */

loc_00437DAF: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00437DB4: ;
    if (CMP_G(eax & eax, 0)) goto loc_00437DC5; /* jg: greater (signed >) */

loc_00437DB8: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00437DBD: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_00437FA7(); return; /* tail jmp 0x00437FA7 */

loc_00437DC5: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00437DCA: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    goto loc_00437DBD;

}

/**
 * sub_00437FBD
 * Original: 0x00437FBD - 0x00438057 (154 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437FBD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00437FBD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00437FC8: ;
    PUSH32(esp, MEM32(esi + 0x44));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x40));
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0); sub_004377E4(); /* call 0x004377E4 */

loc_00437FD9: ;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x54), ebx - flags set for next jcc */
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM8(esi + 0x84) = LO8(ebx);
    MEM32(esi + 0x88) = ebx;
    if (CMP_EQ(MEM32(esi + 0x54), ebx)) goto loc_0043802A; /* je: equal / zero */

loc_00438007: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ebp = esi + 0x18;

loc_0043800F: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); sub_00437A03(); /* call 0x00437A03 */

loc_00438018: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00437B73(); /* call 0x00437B73 */

loc_00438023: ;
    if (CMP_NE(MEM32(esi + 0x54), ebx)) goto loc_0043800F; /* jne: not equal / not zero */

loc_00438028: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0043802A: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0x60), ebx)) goto loc_00438047; /* jbe: below or equal (unsigned <=) */

loc_00438031: ;
    edx = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x5C);
    MEM32(ecx + eax * 8) = edx;
    edx = MEM32(esi + 0x6C);
    MEM32(ecx + eax * 8 + 4) = edx;
    eax++;
    if (CMP_B(eax, MEM32(esi + 0x60))) goto loc_00438031; /* jb: below (unsigned <) */

loc_00438047: ;
    SET_LO8(ecx, MEM8(esp + 0xB));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_00438051: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00438057
 * Original: 0x00438057 - 0x004380B7 (96 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438057(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00438057: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + eax;
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + eax + _cf; /* adc */
    eax = MEM32(esp + 0xC);
    eax = eax - MEM32(esi + 0x48);
    ebp = 0; /* xor self */
    eax = eax & 0xFFF;
    (void)0; /* cmp MEM32(esi + 0x54), ebp - flags set for next jcc */
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x88) = ebp;
    MEM32(esi + 0x80) = ebp;
    if (CMP_EQ(MEM32(esi + 0x54), ebp)) goto loc_004380B2; /* je: equal / zero */

loc_0043808F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ebx = esi + 0x18;

loc_00438097: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_00437A03(); /* call 0x00437A03 */

loc_004380A0: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00437B73(); /* call 0x00437B73 */

loc_004380AB: ;
    if (CMP_NE(MEM32(esi + 0x54), ebp)) goto loc_00438097; /* jne: not equal / not zero */

loc_004380B0: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004380B2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004380B7
 * Original: 0x004380B7 - 0x004381AB (244 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004380B7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004380B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(ebp + -8) = esi;
    MEM32(eax) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_004380D2: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00437B23(); /* call 0x00437B23 */

loc_004380E0: ;
    if (CMP_NE(eax, esi)) goto loc_00438146; /* jne: not equal / not zero */

loc_004380E4: ;
    if (CMP_NE(MEM32(ebp + -12), esi)) goto loc_004380F5; /* jne: not equal / not zero */

loc_004380E9: ;
    MEM32(ebp + -8) = 0x80004005u;
    goto loc_00438198;

loc_004380F5: ;
    if (CMP_NE(MEM32(ebx + 0xA0), esi)) goto loc_0043818E; /* jne: not equal / not zero */

loc_00438101: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebp + 8);
    esi = MEM32(ebx + 0x9C);
    eax = ecx;
    ecx = ecx >> 2;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    MEM32(ebx + 0xA0) = 1;
    SET_LO16(eax, MEM16(edx));
    ecx = eax;
    ecx = ecx & 0xFFFFFFF0u;
    ecx = ecx + 0x10;
    eax = eax & 0xF;
    ecx = ecx ^ eax;
    MEM16(edx) = LO16(ecx);
    goto loc_0043818E;

loc_00438146: ;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(eax + 8);
    edi = MEM32(ebp + 8);
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(ebp + 0xC);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x10);
    MEM32(edx) = ecx;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(eax + 8);
    edi = MEM32(ebx + 0x9C);
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + 0xA0) = MEM32(ebx + 0xA0) & 0;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00437B73(); /* call 0x00437B73 */

loc_0043818E: ;
    eax = MEM32(ebx + 0xC);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + eax;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + 0 + _cf; /* adc */

loc_00438198: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004381A1: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004381AB
 * Original: 0x004381AB - 0x004381B6 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004381AB(void)
{
    int _flags = 0; /* fallback flag var */

loc_004381AB: ;
    eax = ecx + 0x14;
    if (CMP_NE(MEM32(eax), 0)) { sub_004381B6(); return; } /* jne: not equal / not zero */

loc_004381B3: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_004381BF
 * Original: 0x004381BF - 0x004382F8 (313 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004381BF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004381BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_004381D4: ;
    esi = MEM32(ebp + 8);
    edi = ZX16(MEM16(esi));
    MEM8(ebp + -1) = LO8(eax);
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) & 0xF);
    edi = edi >> 4;
    (void)0; /* cmp MEM32(ebx + 0x58), 0 - flags set for next jcc */
    MEM8(ebp + 0xB) = LO8(eax);
    if (CMP_NE(MEM32(ebx + 0x58), 0)) goto loc_00438240; /* jne: not equal / not zero */

loc_004381ED: ;
    (void)0; /* cmp MEM32(ebx + 0x98), 0 - flags set for next jcc */
    ecx = ebx;
    if (CMP_EQ(MEM32(ebx + 0x98), 0)) goto loc_0043821A; /* je: equal / zero */

loc_004381F8: ;
    PUSH32(esp, 0); sub_004377AB(); /* call 0x004377AB */

loc_004381FD: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    MEM32(ebp + -16) = eax;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edx;
    PUSH32(esp, 0); sub_00437808(); /* call 0x00437808 */

loc_0043820D: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_00437840(); /* call 0x00437840 */

loc_00438218: ;
    goto loc_0043821F;

loc_0043821A: ;
    PUSH32(esp, 0); sub_004377AB(); /* call 0x004377AB */

loc_0043821F: ;
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) & 0;
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) & 0;
    MEM32(ebx + 0x28) = eax;
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM32(ebx + 0x2C) = edx;
    MEM8(ebx + 0x84) = LO8(eax);
    MEM32(ebx + 0x30) = edi;
    MEM32(ebx + 0x58) = 1;

loc_00438240: ;
    if (CMP_EQ(LO8(eax), MEM8(ebx + 0x84))) goto loc_00438258; /* je: equal / zero */

loc_00438248: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_00437B8D(); /* call 0x00437B8D */

loc_0043824F: ;
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(ebx + 0x84) = LO8(eax);

loc_00438258: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00437956(); /* call 0x00437956 */

loc_00438264: ;
    MEM32(ebx + 0x80) = MEM32(ebx + 0x80) + 1;
    eax = eax - 0;
    if ((eax == 0)) goto loc_0043829B; /* je: equal / zero */

loc_0043826F: ;
    eax--;
    if ((eax == 0)) { sub_004382F8(); return; } /* je: equal / zero */

loc_00438276: ;
    eax--;
    if ((eax != 0)) goto loc_004382E5; /* jne: not equal / not zero */

loc_00438279: ;
    eax = MEM32(ebx + 0xA8);
    if (CMP_AE(eax, MEM32(ebx + 0xA4))) goto loc_004382E5; /* jae: above or equal (unsigned >=) */

loc_00438287: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00438057(); /* call 0x00438057 */

loc_0043828F: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00437956(); /* call 0x00437956 */

loc_0043829B: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_004381AB(); /* call 0x004381AB */

loc_004382A2: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_004382E5; /* je: equal / zero */

loc_004382A9: ;
    ecx = MEM32(ebp + -16);
    edi = MEM32(eax + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebx + 0x10);
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00437A66(); /* call 0x00437A66 */

loc_004382D0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_004382E5; /* jge: greater or equal (signed >=) */

loc_004382D7: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00437B73(); /* call 0x00437B73 */

loc_004382DF: ;
    MEM32(ebx + 0x80) = MEM32(ebx + 0x80) - 1;

loc_004382E5: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_004382EE: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043830B
 * Original: 0x0043830B - 0x00438323 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043830B(void)
{
    uint32_t ebp;

loc_0043830B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_0043831D: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00438323
 * Original: 0x00438323 - 0x00438336 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438323(void)
{
    int _flags = 0; /* fallback flag var */

loc_00438323: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_00438334; /* je: equal / zero */

loc_0043832B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00438B80(); /* call 0x00438B80 */

loc_00438331: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_00438334: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00438336
 * Original: 0x00438336 - 0x0043836A (52 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438336(void)
{
    int _flags = 0; /* fallback flag var */

loc_00438336: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    ecx = 0; /* xor self */

loc_0043833E: ;
    eax = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    if (CMP_BE(eax, esi)) goto loc_00438351; /* jbe: below or equal (unsigned <=) */

loc_0043834F: ;
    esi = eax;

loc_00438351: ;
    ecx++;
    if (CMP_B(ecx, 0x140)) goto loc_0043833E; /* jb: below (unsigned <) */

loc_0043835A: ;
    if (CMP_BE(esi, MEM32(esp + 0x10))) goto loc_00438363; /* jbe: below or equal (unsigned <=) */

loc_00438360: ;
    edi = 0; /* xor self */
    edi++;

loc_00438363: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043836A
 * Original: 0x0043836A - 0x004383E9 (127 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043836A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043836A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO16(eax, ZX8(LO8(eax)));
    ecx = ecx << 4;
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    edi = ebp + -24;
    eax = eax | ecx;
    MEM16(edx) = LO16(eax);
    SET_LO16(eax, LO16(eax) >> 4);
    MEM16(esi + 6) = LO16(eax);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    edx = edx + 2;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -16) = edx;
    MEM16(ebp + -12) = 8;
    eax = MEM32(0x58);
    if (TEST_Z(eax, eax)) { sub_004383E9(); return; } /* je: equal / zero */

loc_004383B9: ;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F8), _icall_esp); /* indirect call */
    }

loc_004383C3: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x438DB0);
    PUSH32(esp, MEM32(0x75F138));
    PUSH32(esp, 0); sub_0043830B(); /* call 0x0043830B */

loc_004383DD: ;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F4), _icall_esp); /* indirect call */
    }

loc_004383E7: ;
    g_seh_ebp = ebp; sub_004383FB(); return; /* tail jmp 0x004383FB */

}

/**
 * sub_00438403
 * Original: 0x00438403 - 0x0043844E (75 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438403(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00438403: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ebx = ecx + 0x18;
    PUSH32(esp, 0x15);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00438B20(); /* call 0x00438B20 */

loc_00438430: ;
    if (TEST_Z(eax, eax)) goto loc_00438444; /* je: equal / zero */

loc_00438434: ;
    PUSH32(esp, 0x15);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebx;
    MEM32(ebp + -4) = 0x80004005u;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_00438444: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043844E
 * Original: 0x0043844E - 0x00438478 (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043844E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043844E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00438B40(); /* call 0x00438B40 */

loc_0043845C: ;
    if (TEST_Z(eax, eax)) goto loc_0043846C; /* je: equal / zero */

loc_00438460: ;
    ecx = esi;
    edi = 0x8007000Eu;
    PUSH32(esp, 0); sub_00438323(); /* call 0x00438323 */

loc_0043846C: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = 0x258;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00438478
 * Original: 0x00438478 - 0x004384A2 (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438478(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00438478: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x6C));
    eax = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0); sub_00438336(); /* call 0x00438336 */

loc_0043848D: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(eax, ecx)) { sub_004384A2(); return; } /* je: equal / zero */

loc_00438496: ;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x6C) = 0x320;
    g_seh_ebp = ebp; sub_004384BD(); return; /* tail jmp 0x004384BD */

}

/**
 * sub_004384E4
 * Original: 0x004384E4 - 0x004384F8 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004384E4(void)
{
    int _flags = 0; /* fallback flag var */

loc_004384E4: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_004384F6; /* je: equal / zero */

loc_004384ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043A3E5(); /* call 0x0043A3E5 */

loc_004384F3: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_004384F6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004384F8
 * Original: 0x004384F8 - 0x00438565 (109 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004384F8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004384F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    edx = ecx + 0x44;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);

loc_0043850D: ;
    edi = MEM32(ebp + 8);
    ebx = (uint32_t)(int32_t)SMEM16(edi + eax * 4 + 2);
    edi = (uint32_t)(int32_t)SMEM16(edi + eax * 4);
    ebx = ebx + edi;
    ebx = (uint32_t)((int32_t)ebx >> 1);
    MEM16(edx + eax * 2) = LO16(ebx);
    eax++;
    if (CMP_B(eax, 0xA0)) goto loc_0043850D; /* jb: below (unsigned <) */

loc_00438529: ;
    eax = ZX16(MEM16(ecx + 0xE));
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x140);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, 0); sub_0043B032(); /* call 0x0043B032 */

loc_0043854E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_GE(eax & eax, 0)) goto loc_0043855C; /* jge: greater or equal (signed >=) */

loc_00438553: ;
    MEM32(edi) = esi;
    MEM32(ebp + -4) = 0x80004005u;

loc_0043855C: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00438565
 * Original: 0x00438565 - 0x004385CD (104 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438565(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00438565: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -4) = esi;

loc_0043857E: ;
    eax = ZX16(MEM16(edi + 0xE));
    if (CMP_B(eax, ebx)) goto loc_00438588; /* jb: below (unsigned <) */

loc_00438586: ;
    eax = ebx;

loc_00438588: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_0043B412(); /* call 0x0043B412 */

loc_0043859D: ;
    if (TEST_NZ(eax, eax)) { sub_004385CD(); return; } /* jne: not equal / not zero */

loc_004385A1: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    ebx = ebx - eax;
    if (CMP_BE(eax, esi)) goto loc_004385B4; /* jbe: below or equal (unsigned <=) */

loc_004385B0: ;
    if (CMP_A(ebx, esi)) goto loc_0043857E; /* ja: above (unsigned >) */

loc_004385B4: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    ecx = edi;
    PUSH32(esp, 0); sub_004384E4(); /* call 0x004384E4 */

loc_004385C3: ;
    eax = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004385D6
 * Original: 0x004385D6 - 0x00438688 (178 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004385D6(void)
{

loc_004385D6: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(edx) = 0x46464952;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    edx = edx + ecx;
    MEM32(edx) = eax;
    edx = edx + ecx;
    MEM32(edx) = 0x45564157;
    edx = edx + ecx;
    MEM32(edx) = 0x20746D66;
    PUSH32(esp, 0x40);
    edx = edx + ecx;
    POP32(esp, edi);
    MEM32(edx) = edi;
    edx = edx + ecx;
    MEM16(edx) = 0xA;
    MEM16(edx + 0xE) = 0x10;
    ebx = MEM32(esi + 8);
    MEM32(edx + 8) = ebx;
    SET_LO16(ebx, MEM16(esi + 0xE));
    MEM16(edx + 0xC) = LO16(ebx);
    SET_LO16(ebx, MEM16(esi + 0xC));
    MEM16(edx + 2) = LO16(ebx);
    ebx = MEM32(esi + 4);
    MEM32(edx + 4) = ebx;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM16(edx + 0x10) = 0x2E;
    MEM16(edx + 0x12) = 0x10;
    MEM32(edx + 0x14) = ecx;
    SET_LO16(ecx, MEM16(esi + 0x34));
    MEM16(edx + 0x22) = LO16(eax);
    MEM16(edx + 0x20) = LO16(ecx);
    ecx = MEM32(esi + 0x38);
    MEM32(edx + 0x24) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(edx + 0x28) = ecx;
    ecx = MEM32(esi + 0x40);
    MEM32(edx + 0x30) = eax;
    MEM32(edx + 0x34) = eax;
    MEM32(edx + 0x38) = eax;
    MEM32(edx + 0x3C) = eax;
    MEM32(edx + 0x2C) = ecx;
    edx = edx + edi;
    PUSH32(esp, 0x5C);
    MEM32(edx) = 0x61746164;
    MEM32(edx + 4) = eax;
    POP32(esp, eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043869C
 * Original: 0x0043869C - 0x004386CC (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043869C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043869C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = 0; /* xor self */
    if (CMP_EQ(MEM32(esi), ebp)) goto loc_004386BA; /* je: equal / zero */

loc_004386A6: ;
    if (CMP_NE(MEM32(esp + 0xC), ebp)) goto loc_004386B3; /* jne: not equal / not zero */

loc_004386AC: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00438724(); return; /* tail jmp 0x00438724 */

loc_004386B3: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004384E4(); /* call 0x004384E4 */

loc_004386BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004394E5(); /* call 0x004394E5 */

loc_004386C1: ;
    if (CMP_GE(eax & eax, 0)) { sub_004386CC(); return; } /* jge: greater or equal (signed >=) */

loc_004386C5: ;
    ebp = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0043871A(); return; /* tail jmp 0x0043871A */

}

/**
 * sub_00438729
 * Original: 0x00438729 - 0x0043873C (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438729(void)
{
    int _flags = 0; /* fallback flag var */

loc_00438729: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_0043873A; /* je: equal / zero */

loc_00438731: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00438B90(); /* call 0x00438B90 */

loc_00438737: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_0043873A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043873C
 * Original: 0x0043873C - 0x004387A7 (107 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043873C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043873C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    esi = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -24;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    ebx = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    MEM16(ebp + -6) = 8;
    MEM16(ebp + -12) = 9;
    eax = MEM32(0x58);
    if (CMP_EQ(eax, ebx)) { sub_004387A7(); return; } /* je: equal / zero */

loc_00438778: ;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F8), _icall_esp); /* indirect call */
    }

loc_00438782: ;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x438F20);
    PUSH32(esp, MEM32(0x75F138));
    PUSH32(esp, 0); sub_0043830B(); /* call 0x0043830B */

loc_00438799: ;
    esi = eax;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F4), _icall_esp); /* indirect call */
    }

loc_004387A5: ;
    g_seh_ebp = ebp; sub_004387B8(); return; /* tail jmp 0x004387B8 */

}

/**
 * sub_004387CA
 * Original: 0x004387CA - 0x004387EC (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004387CA(void)
{
    int _flags = 0; /* fallback flag var */

loc_004387CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00438B60(); /* call 0x00438B60 */

loc_004387D7: ;
    if (TEST_Z(eax, eax)) goto loc_004387E7; /* je: equal / zero */

loc_004387DB: ;
    ecx = esi;
    edi = 0x8007000Eu;
    PUSH32(esp, 0); sub_00438729(); /* call 0x00438729 */

loc_004387E7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004387EC
 * Original: 0x004387EC - 0x00438813 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004387EC(void)
{
    uint32_t ebp;

loc_004387EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_0043880D: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00438813
 * Original: 0x00438813 - 0x00438834 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438813(void)
{
    uint32_t ebp;

loc_00438813: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0xC), _icall_esp); /* indirect call */
    }

loc_0043882E: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00438834
 * Original: 0x00438834 - 0x00438848 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438834(void)
{
    int _flags = 0; /* fallback flag var */

loc_00438834: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00438846; /* je: equal / zero */

loc_0043883D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043C0AB(); /* call 0x0043C0AB */

loc_00438843: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_00438846: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00438848
 * Original: 0x00438848 - 0x00438960 (280 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438848(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00438848: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ecx;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -12) = edi;

loc_00438861: ;
    if (CMP_NE(MEM32(esi + 0x50), edi)) goto loc_004388AC; /* jne: not equal / not zero */

loc_00438866: ;
    ecx = MEM32(esi + 0x4C);
    if (CMP_NE(ecx, edi)) goto loc_00438898; /* jne: not equal / not zero */

loc_0043886D: ;
    if (CMP_NE(MEM32(esi + 0x54), edi)) goto loc_00438893; /* jne: not equal / not zero */

loc_00438872: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_0043C14A(); /* call 0x0043C14A */

loc_00438879: ;
    ecx = 0; /* xor self */
    ecx++;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEM32(esi + 0x54) = ecx;
    if (CMP_EQ(eax, 4)) goto loc_0043895B; /* je: equal / zero */

loc_00438888: ;
    if (CMP_EQ(eax, 0x80004005u)) goto loc_0043895B; /* je: equal / zero */

loc_00438893: ;
    MEM32(esi + 0x44) = edi;
    goto loc_004388AC;

loc_00438898: ;
    eax = ZX16(MEM16(esi + 0xE));
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esi + 0x44) = 1;
    if (CMP_AE(ecx, eax)) goto loc_004388A9; /* jae: above or equal (unsigned >=) */

loc_004388A7: ;
    eax = ecx;

loc_004388A9: ;
    MEM32(esi + 0x50) = eax;

loc_004388AC: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x44));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x50));
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x43D32F);
    PUSH32(esp, MEM32(0x75F138));
    PUSH32(esp, 0); sub_004387EC(); /* call 0x004387EC */

loc_004388D1: ;
    ebx = eax;
    if (CMP_EQ(ebx, 0x80004005u)) { sub_00438960(); return; } /* je: equal / zero */

loc_004388DF: ;
    eax = MEM32(ebp + -8);
    MEM32(esi + 0x48) = MEM32(esi + 0x48) + eax;
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) - eax;
    MEM32(esi + 0x50) = MEM32(esi + 0x50) - eax;
    eax = MEM32(ebp + -12);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x44) = edi;
    if (CMP_EQ(eax, edi)) goto loc_00438932; /* je: equal / zero */

loc_004388F5: ;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -16;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x43C0E5);
    PUSH32(esp, MEM32(0x75F138));
    PUSH32(esp, 0); sub_00438813(); /* call 0x00438813 */

loc_00438919: ;
    if (TEST_NZ(eax, eax)) { sub_00438960(); return; } /* jne: not equal / not zero */

loc_0043891D: ;
    ecx = ZX16(MEM16(esi + 0x12));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -16));
    eax = MEM32(ebp + -20);
    if (CMP_NE(eax, ecx)) { sub_00438960(); return; } /* jne: not equal / not zero */

loc_0043892C: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax;

loc_00438932: ;
    if (CMP_EQ(ebx, 4)) goto loc_0043894C; /* je: equal / zero */

loc_00438937: ;
    if (CMP_EQ(ebx, 0x80040004u)) goto loc_0043894C; /* je: equal / zero */

loc_0043893F: ;
    eax = ZX16(MEM16(esi + 0x12));
    if (CMP_AE(MEM32(ebp + 0xC), eax)) goto loc_004388AC; /* jae: above or equal (unsigned >=) */

loc_0043894C: ;
    eax = ZX16(MEM16(esi + 0x12));
    if (CMP_AE(MEM32(ebp + 0xC), eax)) goto loc_00438861; /* jae: above or equal (unsigned >=) */

loc_00438959: ;
    g_seh_ebp = ebp; sub_00438967(); return; /* tail jmp 0x00438967 */

loc_0043895B: ;
    MEM32(ebp + -4) = ecx;
    g_seh_ebp = ebp; sub_00438967(); return; /* tail jmp 0x00438967 */

}

/**
 * sub_00438971
 * Original: 0x00438971 - 0x00438A82 (273 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438971(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00438971: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    esi = edx + 4;
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    edi = MEM32(eax);
    ecx = 0x561C40;
    (void)0; /* cmp edi, MEM32(ecx) - flags set for next jcc */
    MEM32(ebp + -4) = 0x80004005u;
    if (CMP_NE(edi, MEM32(ecx))) goto loc_00438A79; /* jne: not equal / not zero */

loc_0043899E: ;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    eax = eax + ecx;
    edi = MEM32(eax);
    (void)0; /* cmp edi, 0x40 - flags set for next jcc */
    MEM32(ebp + 8) = edi;
    if (CMP_BE(edi, 0x40)) goto loc_00438A79; /* jbe: below or equal (unsigned <=) */

loc_004389B1: ;
    eax = eax + ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    edi = 0x561C38;
    if (CMP_NE(ebx, MEM32(edi))) goto loc_00438A78; /* jne: not equal / not zero */

loc_004389C3: ;
    eax = eax + ecx;
    ebx = MEM32(eax);
    edi = 0x561C30;
    if (CMP_NE(ebx, MEM32(edi))) goto loc_00438A78; /* jne: not equal / not zero */

loc_004389D4: ;
    eax = eax + ecx;
    if (CMP_NE(MEM32(eax), 0x40)) goto loc_00438A78; /* jne: not equal / not zero */

loc_004389DF: ;
    eax = eax + ecx;
    if (CMP_NE(MEM16(eax), 0xA)) goto loc_00438A78; /* jne: not equal / not zero */

loc_004389EB: ;
    if (CMP_NE(MEM16(eax + 0xE), 0x10)) goto loc_00438A78; /* jne: not equal / not zero */

loc_004389F6: ;
    if (CMP_NE(MEM16(eax + 2), 1)) goto loc_00438A78; /* jne: not equal / not zero */

loc_004389FD: ;
    MEM16(edx + 0x10) = 0xA;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    SET_LO16(edi, MEM16(eax + 0xC));
    MEM16(edx + 0xE) = LO16(edi);
    SET_LO16(edi, MEM16(eax + 2));
    MEM16(edx + 0xC) = LO16(edi);
    edi = MEM32(eax + 4);
    MEM32(esi) = edi;
    if (CMP_NE(MEM16(eax + 0x12), 0x10)) goto loc_00438A78; /* jne: not equal / not zero */

loc_00438A25: ;
    if (CMP_NE(MEM32(eax + 0x14), ecx)) goto loc_00438A78; /* jne: not equal / not zero */

loc_00438A2A: ;
    if (CMP_NE(MEM16(eax + 0x10), 0x2E)) goto loc_00438A78; /* jne: not equal / not zero */

loc_00438A31: ;
    SET_LO16(esi, MEM16(eax + 0x20));
    MEM16(edx + 0x34) = LO16(esi);
    esi = MEM32(eax + 0x24);
    MEM32(edx + 0x38) = esi;
    esi = MEM32(eax + 0x28);
    MEM32(edx + 0x3C) = esi;
    esi = MEM32(eax + 0x2C);
    MEM32(edx + 0x40) = esi;
    eax = eax + 0x40;
    edi = MEM32(eax);
    esi = 0x561C28;
    if (CMP_NE(edi, MEM32(esi))) goto loc_00438A78; /* jne: not equal / not zero */

loc_00438A59: ;
    esi = MEM32(ebp + 8);
    eax = eax + ecx;
    ecx = MEM32(eax);
    esi = esi + 0xFFFFFFACu;
    if (CMP_NE(ecx, esi)) goto loc_00438A78; /* jne: not equal / not zero */

loc_00438A67: ;
    MEM32(edx + 0x50) = MEM32(edx + 0x50) & 0;
    eax = eax + 4;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(edx + 0x48) = eax;
    MEM32(edx + 0x4C) = ecx;

loc_00438A78: ;
    POP32(esp, ebx);

loc_00438A79: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00438A82
 * Original: 0x00438A82 - 0x00438AA3 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438A82(void)
{
    int _flags = 0; /* fallback flag var */

loc_00438A82: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0043CEE2(); /* call 0x0043CEE2 */

loc_00438A8E: ;
    if (CMP_GE(eax & eax, 0)) { sub_00438AA3(); return; } /* jge: greater or equal (signed >=) */

loc_00438A92: ;
    ecx = esi;
    ebx = 0x8007000Eu;
    PUSH32(esp, 0); sub_00438834(); /* call 0x00438834 */

loc_00438A9E: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00438AB1
 * Original: 0x00438AB1 - 0x00438AC0 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438AB1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00438AB1: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi), 0)) { sub_00438AC0(); return; } /* je: equal / zero */

loc_00438AB9: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00438B11(); return; /* tail jmp 0x00438B11 */

}

/**
 * sub_00438B20
 * Original: 0x00438B20 - 0x00438B38 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438B20(void)
{

loc_00438B20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0043D4E0(); /* call 0x0043D4E0 */

loc_00438B2F: ;
    esp = esp + 8;
    eax = ZX16(LO16(eax));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00438B40
 * Original: 0x00438B40 - 0x00438B55 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438B40(void)
{

loc_00438B40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00439300(); /* call 0x00439300 */

loc_00438B4F: ;
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00438B60
 * Original: 0x00438B60 - 0x00438B75 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438B60(void)
{

loc_00438B60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00439390(); /* call 0x00439390 */

loc_00438B6F: ;
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00438B80
 * Original: 0x00438B80 - 0x00438B90 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438B80(void)
{

loc_00438B80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004391F0(); /* call 0x004391F0 */

loc_00438B8A: ;
    esp = esp + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00438B90
 * Original: 0x00438B90 - 0x00438BA0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438B90(void)
{

loc_00438B90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00439270(); /* call 0x00439270 */

loc_00438B9A: ;
    esp = esp + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00438C40
 * Original: 0x00438C40 - 0x00438C5F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438C40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00438C40: ;
    esp = esp - 0x108;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    if (TEST_NZ(esi, esi)) { sub_00438C5F(); return; } /* jne: not equal / not zero */

loc_00438C52: ;
    eax = 0x181A;
    POP32(esp, esi);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_00438DB0
 * Original: 0x00438DB0 - 0x00438DCF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00438DB0: ;
    esp = esp - 0x108;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    if (TEST_NZ(esi, esi)) { sub_00438DCF(); return; } /* jne: not equal / not zero */

loc_00438DC2: ;
    eax = 0x181A;
    POP32(esp, esi);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_00438F20
 * Original: 0x00438F20 - 0x004391D4 (692 bytes, 233 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438F20(void)
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

loc_00438F20: ;
    esp = esp - 0x168;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x170);
    if (TEST_Z(ebx, ebx)) { sub_004391D4(); return; } /* je: equal / zero */

loc_00438F36: ;
    if (CMP_NE(MEM32(ebx), 0xFACE)) { sub_004391D4(); return; } /* jne: not equal / not zero */

loc_00438F42: ;
    if (CMP_EQ(MEM8(ebx + 0xC), 0xB)) goto loc_00438F55; /* je: equal / zero */

loc_00438F48: ;
    eax = 0x17E3;
    POP32(esp, ebx);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

loc_00438F55: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x17C);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x10);
    MEM32(ebx + 0x1C) = esi;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043E380(); /* call 0x0043E380 */

loc_00438F6D: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_004390A9; /* je: equal / zero */

loc_00438F78: ;
    if (TEST_NZ(esi, esi)) goto loc_00438F8C; /* jne: not equal / not zero */

loc_00438F7C: ;
    eax = 0x181A;

loc_00438F81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

loc_00438F8C: ;
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_00438FA3; /* jne: not equal / not zero */

loc_00438F93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17F2;
    POP32(esp, ebx);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

loc_00438FA3: ;
    if (CMP_NE(MEM32(esi), 0)) goto loc_00438FB8; /* jne: not equal / not zero */

loc_00438FA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17ED;
    POP32(esp, ebx);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

loc_00438FB8: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    if (CMP_B(MEM16(esi + 0xE), LO16(eax))) goto loc_00438FD2; /* jb: below (unsigned <) */

loc_00438FC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x1801;
    POP32(esp, ebx);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

loc_00438FD2: ;
    if (CMP_B(MEM16(esi + 0x12), LO16(eax))) goto loc_00438FE8; /* jb: below (unsigned <) */

loc_00438FD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x1806;
    POP32(esp, ebx);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

loc_00438FE8: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    (void)0; /* cmp LO8(eax), 7 - flags set for next jcc */
    ebp = esi + 0x10;
    if (CMP_BE(LO8(eax), 7)) goto loc_00439002; /* jbe: below or equal (unsigned <=) */

loc_00438FF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17F7;
    POP32(esp, ebx);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

loc_00439002: ;
    if (CMP_BE(MEM8(esi + 0x14), 7)) goto loc_00439018; /* jbe: below or equal (unsigned <=) */

loc_00439008: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x17FC;
    POP32(esp, ebx);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

loc_00439018: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0043E810(); /* call 0x0043E810 */

loc_0043901E: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0043905F; /* je: equal / zero */

loc_00439025: ;
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043E720(); /* call 0x0043E720 */

loc_00439038: ;
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_00438F81; /* jne: not equal / not zero */

loc_00439043: ;
    eax = MEM32(edi + 4);
    ecx = ZX16(MEM16(esi + 0xC));
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    eax = esi + 0xE;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0043E6B0(); /* call 0x0043E6B0 */

loc_0043905C: ;
    esp = esp + 0x18;

loc_0043905F: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    ecx = esp + 0x1B;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    MEM32(esp + 0x20) = 0;
    MEM8(esp + 0x1F) = 0;
    eax = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0043D5B0(); /* call 0x0043D5B0 */

loc_0043908E: ;
    edx = esp + 0xDC;
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043D6D0(); /* call 0x0043D6D0 */

loc_004390A4: ;
    esp = esp + 0x24;
    goto loc_004390BA;

loc_004390A9: ;
    if (TEST_Z(esi, esi)) goto loc_00438F7C; /* je: equal / zero */

loc_004390B1: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_00438FA8; /* je: equal / zero */

loc_004390BA: ;
    edx = MEM32(edi);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0043E1F0(); /* call 0x0043E1F0 */

loc_004390CA: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xDC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0043E5E0(); /* call 0x0043E5E0 */

loc_004390E9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0043E810(); /* call 0x0043E810 */

loc_004390EF: ;
    edx = MEM32(edi);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0043E390(); /* call 0x0043E390 */

loc_004390FB: ;
    eax = MEM32(edi + 0x80);
    esp = esp + 0x2C;
    if (TEST_Z(eax, eax)) goto loc_004391C7; /* je: equal / zero */

loc_0043910C: ;
    eax = MEM32(esp + 0x184);
    fp_push(MEMF(esp + 0x114)); /* fld float */
    ecx = MEM32(esp + 0x4C);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x50);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(esp + 0x78);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(esp + 0x24);
    eax = eax + 0x34;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;

loc_004391C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x168;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004391F0
 * Original: 0x004391F0 - 0x00439200 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004391F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_004391F0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_NZ(edi, edi)) { sub_00439200(); return; } /* jne: not equal / not zero */

loc_004391F9: ;
    eax = 0x181A;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439270
 * Original: 0x00439270 - 0x0043927E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439270(void)
{
    int _flags = 0; /* fallback flag var */

loc_00439270: ;
    eax = MEM32(esp + 4);
    if (TEST_NZ(eax, eax)) { sub_0043927E(); return; } /* jne: not equal / not zero */

loc_00439278: ;
    eax = 0x181A;
    esp += 4; return; /* ret */

}

/**
 * sub_00439300
 * Original: 0x00439300 - 0x00439310 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439300(void)
{
    int _flags = 0; /* fallback flag var */

loc_00439300: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_NZ(edi, edi)) { sub_00439310(); return; } /* jne: not equal / not zero */

loc_00439309: ;
    eax = 0x181A;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439390
 * Original: 0x00439390 - 0x004393A0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439390(void)
{
    int _flags = 0; /* fallback flag var */

loc_00439390: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_NZ(ebx, ebx)) { sub_004393A0(); return; } /* jne: not equal / not zero */

loc_00439399: ;
    eax = 0x181A;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00439440
 * Original: 0x00439440 - 0x0043945E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439440(void)
{
    int _flags = 0; /* fallback flag var */

loc_00439440: ;
    PUSH32(esp, 0x8012);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0043944C: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx) = eax;
    if (TEST_NZ(eax, eax)) { sub_0043945E(); return; } /* jne: not equal / not zero */

loc_00439459: ;
    SET_LO16(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0043949E
 * Original: 0x0043949E - 0x004394E5 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043949E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043949E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043EB71(); /* call 0x0043EB71 */

loc_004394BC: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_004394E1; /* jne: not equal / not zero */

loc_004394C3: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = ZX16(MEM16(ebp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ZX16(MEM16(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0043ED53(); /* call 0x0043ED53 */

loc_004394DE: ;
    esp = esp + 0x18;

loc_004394E1: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004394E5
 * Original: 0x004394E5 - 0x004394F5 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004394E5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004394E5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(esi, esi)) { sub_004394F5(); return; } /* jne: not equal / not zero */

loc_004394EE: ;
    eax = 0x80070057u;
    g_seh_ebp = ebp; sub_00439533(); return; /* tail jmp 0x00439533 */

}

/**
 * sub_00439537
 * Original: 0x00439537 - 0x0043A3D9 (3746 bytes, 1013 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439537(void)
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

loc_00439537: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax++;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(esi, edi)) { sub_0043A3D9(); return; } /* je: equal / zero */

loc_00439556: ;
    ebx = MEM32(ebp + 0xC);
    if (CMP_EQ(ebx, edi)) { sub_0043A3D9(); return; } /* je: equal / zero */

loc_00439561: ;
    if (CMP_NE(MEM32(esi + 0x28), edi)) { sub_0043A3D9(); return; } /* jne: not equal / not zero */

loc_0043956A: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x4748) = edi;
    MEM32(esi + 0x4750) = edi;
    MEM32(esi + 0x475C) = edi;
    MEM32(esi + 0x5804) = edi;
    MEM32(esi + 0x5808) = edi;
    MEM32(esi + 0x580C) = edi;
    MEM32(esi + 0x5814) = edi;
    MEM32(esi + 0x5810) = edi;
    MEM32(esi + 0x5960) = edi;
    MEM32(esi + 0x5970) = edi;
    MEM32(esi + 0x5968) = edi;
    MEM32(esi + 0x4784) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x4710) = edi;
    MEM32(esi + 0x470C) = edi;
    MEM32(esi + 0x4708) = edi;
    MEM32(esi + 0x4704) = edi;
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x715C) = edi;
    MEM32(esi + 0x7150) = edi;
    MEM32(esi + 0x4638) = edi;
    MEM32(esi + 0x46C4) = edi;
    MEM32(esi + 0x4610) = edi;
    MEM32(esi + 0x5930) = edi;
    MEM32(esi + 0x719C) = edi;
    MEM32(esi + 0x9230) = edi;
    MEM32(esi + 0x7154) = edi;
    MEM32(esi + 0x925C) = edi;
    PUSH32(esp, 0); sub_0043EF55(); /* call 0x0043EF55 */

loc_00439615: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043A15A; /* jne: not equal / not zero */

loc_0043961E: ;
    PUSH32(esp, MEM32(ebx + 4));
    eax = ZX16(MEM16(ebx + 8));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0); sub_0043E9B5(); /* call 0x0043E9B5 */

loc_0043962D: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A15A; /* je: equal / zero */

loc_0043963B: ;
    eax = esi + 0x7184;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043EB59(); /* call 0x0043EB59 */

loc_00439647: ;
    SET_LO16(eax, MEM16(ebx + 8));
    MEM16(esi + 8) = LO16(eax);
    eax = MEM32(ebx);
    MEM32(esi) = eax;
    eax = MEM32(ebx + 4);
    MEM32(esi + 4) = eax;
    SET_LO16(eax, MEM16(ebx + 0xA));
    MEM16(esi + 0xA) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0xE));
    MEM16(esi + 0xC) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0x10));
    MEM16(esi + 0xE) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0x12));
    MEM16(esi + 0x10) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0x14));
    MEM16(esi + 0x12) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0x16));
    MEM16(esi + 0x14) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0x18));
    MEM16(esi + 0x16) = LO16(eax);
    SET_LO16(eax, MEM16(ebx + 0x20));
    MEM16(esi + 0x18) = LO16(eax);
    eax = MEM32(ebx + 0x1C);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ebx + 0x28);
    MEM32(esi + 0x20) = eax;
    (void)0; /* test MEM8(ebx + 0x35), 0x10 - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(MEM8(ebx + 0x35), 0x10)) goto loc_004396B7; /* je: equal / zero */

loc_004396AC: ;
    MEM16(esi + 0x4788) = 0x10;
    goto loc_004396C0;

loc_004396B7: ;
    MEM16(esi + 0x4788) = 0xA;

loc_004396C0: ;
    eax = MEM32(ebx + 0x34);
    eax = eax >> 0xD;
    ecx = 0; /* xor self */
    ecx++;
    eax = eax & ecx;
    MEM16(esi + 0x57D8) = LO16(eax);
    eax = MEM32(ebx + 0x34);
    eax = eax >> 0xE;
    eax = eax & ecx;
    MEM16(esi + 0x57DA) = LO16(eax);
    (void)0; /* test MEM8(ebx + 0x34), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, 4);
    POP32(esp, edx);
    if (TEST_Z(MEM8(ebx + 0x34), LO8(ecx))) goto loc_004397AB; /* je: equal / zero */

loc_004396ED: ;
    MEM32(esi + 0x7164) = ecx;
    if (TEST_Z(MEM8(ebx + 0x34), 2)) goto loc_00439701; /* je: equal / zero */

loc_004396F9: ;
    MEM32(esi + 0x7170) = ecx;
    goto loc_00439779;

loc_00439701: ;
    MEM32(esi + 0x7170) = edi;
    eax = MEM32(ebx + 0x34);
    if (TEST_Z(eax, 0x200000)) goto loc_0043972F; /* je: equal / zero */

loc_00439711: ;
    MEM16(esi + 0x7174) = 0x14;
    MEM16(esi + 0x7176) = 8;
    MEM32(esi + 0x7178) = 0x3E000000;
    goto loc_00439779;

loc_0043972F: ;
    if (TEST_Z(eax, 0x400000)) goto loc_00439752; /* je: equal / zero */

loc_00439736: ;
    MEM16(esi + 0x7174) = 0x28;
    MEM16(esi + 0x7176) = LO16(edx);
    MEM32(esi + 0x7178) = 0x3E800000;
    goto loc_00439779;

loc_00439752: ;
    if (TEST_Z(eax, 0x800000)) { sub_0043A3D9(); return; } /* je: equal / zero */

loc_0043975D: ;
    MEM16(esi + 0x7174) = 0x50;
    MEM16(esi + 0x7176) = 2;
    MEM32(esi + 0x7178) = 0x3F000000;

loc_00439779: ;
    eax = MEM32(ebx + 0x34);
    eax = eax >> 2;
    eax = eax & 0xF;
    MEM16(esi + 0x716C) = LO16(eax);
    eax = MEM32(ebx + 0x34);
    SET_LO8(eax, LO8(eax) & 0x40);
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    MEM32(esi + 0x7168) = eax;
    eax = MEM32(ebx + 0x34);
    eax = eax >> 7;
    SET_LO8(eax, LO8(eax) & 0xF);
    MEM8(esi + 0x716E) = LO8(eax);
    goto loc_004397B1;

loc_004397AB: ;
    MEM32(esi + 0x7164) = edi;

loc_004397B1: ;
    eax = MEM32(ebx);
    fp_push((double)SMEM32(ebx)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_004397BF; /* jge: greater or equal (signed >=) */

loc_004397B9: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004397BF: ;
    /* FPU: fdivr dword ptr [0x648d70] */
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x60) = ecx;
    MEM16(esi + 0x7180) = LO16(edi);
    MEM32(esi + 0x50) = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x717C) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX16(MEM16(eax + 0xC));
    MEM32(esi + 0x58) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(esi + 0x64) = eax;
    eax = edx + eax + 5;
    MEM32(esi + 0x4C) = eax;
    eax = ZX16(MEM16(esi + 0x12));
    MEM32(esi + 0x2C) = ecx;
    ecx = ZX16(MEM16(esi + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = ZX16(MEM16(esi + 0xE));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(esi + 0x1C);
    MEM32(esi + 0x4620) = eax;
    eax = eax + ecx + 0x400;
    MEM32(esi + 0x4738) = eax;
    MEM32(esi + 0x4740) = eax;
    eax = eax + eax;
    PUSH32(esp, eax);
    MEM16(esi + 0x24) = 3;
    MEM32(esi + 0x4744) = 0x400;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439841: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x4748) = eax;
    if (CMP_EQ(eax, edi)) { sub_0043A3D9(); return; } /* je: equal / zero */

loc_00439850: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(esi + 0x4744), edi)) goto loc_0043986D; /* jle: less or equal (signed <=) */

loc_0043985A: ;
    ecx = MEM32(esi + 0x4748);
    MEM16(ecx + eax * 2) = LO16(edi);
    eax++;
    if (CMP_L(eax, MEM32(esi + 0x4744))) goto loc_0043985A; /* jl: less (signed <) */

loc_0043986D: ;
    eax = MEM32(esi + 0x4744);
    ecx = MEM32(esi + 0x4748);
    eax = ecx + eax * 2;
    MEM32(esi + 0x474C) = eax;
    eax = MEM32(esi + 0x4738);
    eax = eax << 1;
    PUSH32(esp, eax);
    MEM32(esi + 0x473C) = edi;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439896: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x4750) = eax;
    if (CMP_EQ(eax, edi)) { sub_0043A3D9(); return; } /* je: equal / zero */

loc_004398A5: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(esi + 0x4744), edi)) goto loc_004398C2; /* jle: less or equal (signed <=) */

loc_004398AF: ;
    ecx = MEM32(esi + 0x4750);
    MEM16(ecx + eax * 2) = LO16(edi);
    eax++;
    if (CMP_L(eax, MEM32(esi + 0x4744))) goto loc_004398AF; /* jl: less (signed <) */

loc_004398C2: ;
    eax = MEM32(esi + 0x4744);
    ecx = MEM32(esi + 0x4750);
    eax = ecx + eax * 2;
    MEM32(esi + 0x4754) = eax;
    eax = MEM32(esi + 0x4738);
    MEM32(esi + 0x4758) = eax;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_004398EC: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x475C) = eax;
    if (CMP_EQ(eax, edi)) { sub_0043A3D9(); return; } /* je: equal / zero */

loc_004398FB: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(esi + 0x4744), edi)) goto loc_00439919; /* jle: less or equal (signed <=) */

loc_00439905: ;
    ecx = MEM32(esi + 0x475C);
    fp_push(0.0); /* fldz */
    MEMF(ecx + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax++;
    if (CMP_L(eax, MEM32(esi + 0x4744))) goto loc_00439905; /* jl: less (signed <) */

loc_00439919: ;
    eax = 0; /* xor self */
    PUSH32(esp, 7);
    POP32(esp, ecx);
    edi = esi + 0x4764;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0x475C);
    eax = MEM32(esi + 0x4744);
    eax = ecx + eax * 4;
    MEM32(esi + 0x4760) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x1C);
    ecx = MEM32(ecx + 8);
    MEM32(esi + 0x4790) = ecx;
    SET_LO16(ecx, MEM16(esi + 0x4788));
    MEM16(esi + 0x478A) = LO16(ecx);
    eax = MEM32(eax + 0x1C);
    eax = MEM32(eax + 4);
    MEM32(esi + 0x478C) = eax;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439971: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x5804) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043A364; /* je: equal / zero */

loc_00439980: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043998D: ;
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x5808) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_0043999E: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_004399AB: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x580C) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_004399BA: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_004399C7: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x5814) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_004399D6: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_004399E3: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x5810) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_004399F2: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x10), LO16(edi))) goto loc_00439A35; /* jbe: below or equal (unsigned <=) */

loc_004399FA: ;
    edx = MEM32(esi + 0x5804);
    eax = ecx;
    eax = eax << 2;
    MEM32(eax + edx) = edi;
    edx = MEM32(esi + 0x5808);
    MEM32(eax + edx) = edi;
    edx = MEM32(esi + 0x580C);
    MEM32(eax + edx) = edi;
    edx = MEM32(esi + 0x5814);
    MEM32(eax + edx) = edi;
    edx = MEM32(esi + 0x5810);
    MEM32(eax + edx) = edi;
    eax = ZX16(MEM16(esi + 0x10));
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_004399FA; /* jl: less (signed <) */

loc_00439A35: ;
    (void)0; /* cmp MEM16(esi + 0x10), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 8) = edi;
    if (CMP_BE(MEM16(esi + 0x10), LO16(edi))) goto loc_00439B2C; /* jbe: below or equal (unsigned <=) */

loc_00439A42: ;
    eax = ZX16(MEM16(esi + 0x4788));
    edi = MEM32(ebp + 8);
    eax = eax << 2;
    PUSH32(esp, eax);
    edi = edi << 2;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439A58: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x5804);
    MEM32(edi + ecx) = eax;
    eax = MEM32(esi + 0x5804);
    if (CMP_EQ(MEM32(edi + eax), 0)) goto loc_0043A364; /* je: equal / zero */

loc_00439A72: ;
    eax = ZX16(MEM16(esi + 0x4788));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439A82: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x5808);
    MEM32(edi + ecx) = eax;
    eax = MEM32(esi + 0x5808);
    if (CMP_EQ(MEM32(edi + eax), 0)) goto loc_0043A364; /* je: equal / zero */

loc_00439A9C: ;
    eax = ZX16(MEM16(esi + 0x4788));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439AAC: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x580C);
    MEM32(edi + ecx) = eax;
    eax = MEM32(esi + 0x580C);
    if (CMP_EQ(MEM32(edi + eax), 0)) goto loc_0043A364; /* je: equal / zero */

loc_00439AC6: ;
    eax = ZX16(MEM16(esi + 0x4788));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439AD6: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x5814);
    MEM32(edi + ecx) = eax;
    eax = MEM32(esi + 0x5814);
    if (CMP_EQ(MEM32(edi + eax), 0)) goto loc_0043A364; /* je: equal / zero */

loc_00439AF0: ;
    eax = ZX16(MEM16(esi + 0x4788));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439B00: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x5810);
    MEM32(edi + ecx) = eax;
    eax = MEM32(esi + 0x5810);
    if (CMP_EQ(MEM32(edi + eax), 0)) goto loc_0043A364; /* je: equal / zero */

loc_00439B1A: ;
    eax = ZX16(MEM16(esi + 0x10));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_00439A42; /* jl: less (signed <) */

loc_00439B2A: ;
    edi = 0; /* xor self */

loc_00439B2C: ;
    ecx = 0; /* xor self */
    if (CMP_LE(MEM32(esi + 0x478C), edi)) goto loc_00439B80; /* jle: less or equal (signed <=) */

loc_00439B36: ;
    MEM32(ebp + 8) = edi;
    eax = esi + 0x47D8;

loc_00439B3F: ;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    edx = MEM32(esi + 0x478C);
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(esi + 0x478C)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_00439B5E; /* jge: greater or equal (signed >=) */

loc_00439B58: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00439B5E: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 2;
    ecx++;
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x64a754] */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    if (CMP_L(ecx, MEM32(esi + 0x478C))) goto loc_00439B3F; /* jl: less (signed <) */

loc_00439B80: ;
    ecx = ZX16(MEM16(esi + 0x4788));
    eax = 0; /* xor self */
    eax++;
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_LE(ecx, eax)) goto loc_00439BDD; /* jle: less or equal (signed <=) */

loc_00439B92: ;
    edi = esi + 0x4798;

loc_00439B98: ;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    eax = MEM32(esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push((double)SMEM32(esi)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00439BB5; /* jge: greater or equal (signed >=) */

loc_00439BAF: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00439BB5: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_004713D4(); /* call 0x004713D4 */

loc_00439BC8: ;
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ZX16(MEM16(esi + 0x4788));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    edi = edi + 4;
    eax++;
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_00439B98; /* jl: less (signed <) */

loc_00439BDD: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x4788), LO16(ecx) - flags set for next jcc */
    MEM32(esi + 0x4794) = 0x3F8000FC;
    if (CMP_BE(MEM16(esi + 0x4788), LO16(ecx))) goto loc_00439C23; /* jbe: below or equal (unsigned <=) */

loc_00439BF2: ;
    eax = esi + 0x5898;

loc_00439BF8: ;
    edx = ZX16(MEM16(esi + 0x478A));
    ecx++;
    MEM32(ebp + 8) = ecx;
    edx = edx + edx + 2;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(ebp + 8) = edx;
    /* FPU: fidiv dword ptr [ebp + 8] */
    MEMF(eax + -64) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX16(MEM16(esi + 0x4788));
    eax = eax + 4;
    if (CMP_L(ecx, edx)) goto loc_00439BF8; /* jl: less (signed <) */

loc_00439C23: ;
    eax = ZX16(MEM16(esi + 0x4788));
    PUSH32(esp, eax);
    eax = esi + 0x5818;
    PUSH32(esp, eax);
    eax = esi + 0x5858;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_00439C3E: ;
    edi = MEM32(esi);
    fp_push((double)SMEM32(esi)); /* fild */
    esp = esp + 0xC;
    if (CMP_GE(edi & edi, 0)) goto loc_00439C4F; /* jge: greater or equal (signed >=) */

loc_00439C49: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00439C4F: ;
    fp_push(MEMD(0x561C70)); /* fld double */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00439C62: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esi + 0x5938) = eax;
    eax = eax + 8;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(esi + 0x5994) = eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00439C82: ;
    ecx = ZX16(MEM16(esi + 0x14));
    MEM32(esi + 0x593C) = eax;
    eax = MEM32(esi + 0x4738);
    eax = eax - MEM32(esi + 0x4744);
    edx = 0; /* xor self */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = ZX16(MEM16(esi + 0xE));
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    MEM32(ebp + 8) = edi;
    MEM32(esi + 0x597C) = edx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(esi + 0x5980) = edx;
    MEM32(esi + 0x5984) = edx;
    MEM32(esi + 0x5978) = edx;
    eax--;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0x5934) = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_00439CD4; /* jge: greater or equal (signed >=) */

loc_00439CCE: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00439CD4: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = esi + 0x5948;
    MEM32(esi + 0x5944) = 0x3DCCCCCD;
    MEM32(esi + 0x598C) = 0x41F00000;
    MEMF(esi + 0x5940) = (float)fp_top(); fp_pop(); /* fst */
    ecx = esi + 0x594C;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 8) = 4;

loc_00439D09: ;
    edi = MEM32(eax);
    MEM32(ecx) = edi;
    ecx = ecx + 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_00439D09; /* jne: not equal / not zero */

loc_00439D15: ;
    eax = MEM32(eax);
    MEM32(esi + 0x595C) = eax;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    MEM32(esi + 0x5974) = edx;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439D30: ;
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x5960) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439D41: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439D4E: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x5970) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439D5D: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439D6A: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x5968) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439D79: ;
    eax = ZX16(MEM16(esi + 0xE));
    ecx = ZX16(MEM16(esi + 0x14));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x4780) = eax;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439D93: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x4784) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439DA2: ;
    eax = ZX16(MEM16(0x575574));
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439DB2: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x7154) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439DC1: ;
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_0043EAAB(); /* call 0x0043EAAB */

loc_00439DCE: ;
    esp = esp + 0xC;
    if (CMP_EQ(eax, edi)) { sub_0043A3D9(); return; } /* je: equal / zero */

loc_00439DD9: ;
    PUSH32(esp, MEM32(esi));
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x7154));
    PUSH32(esp, 0); sub_00443295(); /* call 0x00443295 */

loc_00439DEA: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) { sub_0043A3D9(); return; } /* jne: not equal / not zero */

loc_00439DF5: ;
    ecx = ZX16(MEM16(esi + 0x16));
    eax = ZX16(MEM16(esi + 0x18));
    eax = eax + ecx + 1;
    ecx = ZX16(MEM16(esi + 0x12));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = ZX16(MEM16(esi + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = ZX16(MEM16(esi + 0xE));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi)); }
    MEM32(esi + 0x48) = edi;
    MEM16(esi + 0x54) = LO16(edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439E2E: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x44) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439E3A: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439E47: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x4710) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439E56: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439E63: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x470C) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439E72: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439E7F: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x4708) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439E8E: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439E9B: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x4704) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439EAA: ;
    ecx = MEM32(esi + 0x64);
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    MEM32(esi + 0x68) = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x74) = edi;
    eax++;
    PUSH32(esp, eax);
    MEM32(esi + 0x6C) = eax;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439EC8: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x70) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0043A364; /* je: equal / zero */

loc_00439ED4: ;
    eax = eax | 0xFFFFFFFFu;
    edi = esi + 0x78;
    ecx = 0x640;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0x3278) = MEM32(esi + 0x3278) & 0;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x478A));
    PUSH32(esp, eax);
    eax = esi + 0x5998;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004423B2(); /* call 0x004423B2 */

loc_00439F02: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx), 0x1F40 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(ebx), 0x1F40)) ? 1 : 0); /* setne */
    eax--;
    eax = eax & 0xBEF8;
    eax = eax + 0x3FA8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00439F1E: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x7150) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043A364; /* je: equal / zero */

loc_00439F2F: ;
    fp_push(0.0); /* fldz */
    MEMF(esi + 0x472C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(MEM32(esi), 0x1F40)) goto loc_00439F66; /* jne: not equal / not zero */

loc_00439F3F: ;
    eax = MEM32(esi + 4);
    if (CMP_NE(eax, 0x3E8)) goto loc_00439F55; /* jne: not equal / not zero */

loc_00439F49: ;
    MEM32(esi + 0x472C) = 0x41000000;
    goto loc_00439F66;

loc_00439F55: ;
    if (CMP_NE(eax, 0x271)) goto loc_00439F66; /* jne: not equal / not zero */

loc_00439F5C: ;
    MEM32(esi + 0x472C) = 0x41500000;

loc_00439F66: ;
    edi = 0; /* xor self */
    edi++;
    if (CMP_EQ(MEM32(esi + 0x20), edi)) goto loc_0043A085; /* je: equal / zero */

loc_00439F72: ;
    eax = MEM32(esi + 0x7184);
    if (TEST_Z(eax, eax)) goto loc_00439F8C; /* je: equal / zero */

loc_00439F7C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00439F7E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x719C) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043A364; /* je: equal / zero */

loc_00439F8C: ;
    ecx = MEM32(esi + 0x718C);
    if (TEST_Z(ecx, ecx)) goto loc_00439FFA; /* je: equal / zero */

loc_00439F96: ;
    edi = esi + 0x71A4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esi + 0x71A0;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 4));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0xE));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 8));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(esi + 0x719C));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00439FC7: ;
    ebx = eax;
    esp = esp + 0x24;
    if (CMP_GE(ebx & ebx, 0)) goto loc_0043A012; /* jge: greater or equal (signed >=) */

loc_00439FD0: ;
    ecx = MEM32(esi + 0x719C);
    if (TEST_Z(ecx, ecx)) goto loc_00439FF3; /* je: equal / zero */

loc_00439FDA: ;
    eax = MEM32(esi + 0x7198);
    if (TEST_Z(eax, eax)) { sub_0043A3D9(); return; } /* je: equal / zero */

loc_00439FE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00439FEB: ;
    MEM32(esi + 0x719C) = MEM32(esi + 0x719C) & 0;
    POP32(esp, ecx);

loc_00439FF3: ;
    eax = ebx;
    g_seh_ebp = ebp; sub_0043A3DE(); return; /* tail jmp 0x0043A3DE */

loc_00439FFA: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    MEM32(esi + 0x71A0) = MEM32(esi + 0x71A0) & 0;
    MEM32(ebp + -4) = edi;
    edi = esi + 0x71A4;
    MEM16(edi) = MEM16(edi) & 0;

loc_0043A012: ;
    SET_LO16(edi, MEM16(edi));
    if (CMP_BE(LO16(edi) & LO16(edi), 0)) goto loc_0043A035; /* jbe: below or equal (unsigned <=) */

loc_0043A01A: ;
    eax = ZX16(LO16(edi));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043A026: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x9230) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043A364; /* je: equal / zero */

loc_0043A035: ;
    edx = ZX16(MEM16(esi + 0x10));
    eax = ZX16(MEM16(esi + 0x12));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ZX16(MEM16(esi + 0xE));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi)); }
    edx = ZX16(MEM16(esi + 0x18));
    edi = ZX16(MEM16(esi + 0x16));
    ecx = MEM32(esi + 0x71A0);
    edx = edx + edi + 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax - ecx;
    if (CMP_G(eax & eax, 0)) goto loc_0043A06C; /* jg: greater (signed >) */

loc_0043A06A: ;
    eax = 0; /* xor self */

loc_0043A06C: ;
    MEM32(esi + 0x462C) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x4628) = MEM32(esi + 0x4628) & 0;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = eax;

loc_0043A085: ;
    MEM32(esi + 0x71A8) = MEM32(esi + 0x71A8) & 0;
    ebx = MEM32(ebp + -8);
    MEM16(esi + 0x71AE) = LO16(ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0x20);
    edi = esi + 0x91B0;
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ZX16(MEM16(esi + 0xE));
    eax = ZX16(MEM16(esi + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(esi + 0x9244) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x9248) = ebx;
    MEM32(esi + 0x924C) = eax;
    eax = ZX16(MEM16(esi + 0x478A));
    ecx = MEM32(esi + 0x5994);
    eax = eax + ecx;
    if (CMP_G(eax, ebx)) goto loc_0043A0D8; /* jg: greater (signed >) */

loc_0043A0D6: ;
    eax = ebx;

loc_0043A0D8: ;
    edx = ZX16(MEM16(esi + 0x10));
    ecx = ZX16(MEM16(esi + 0x12));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ZX16(MEM16(esi + 0xE));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = ecx + eax + 0x600;
    MEM32(esi + 0x7158) = eax;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043A100: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x715C) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043A364; /* je: equal / zero */

loc_0043A10F: ;
    ecx = ZX16(MEM16(esi + 0x478A));
    edx = MEM32(esi + 0x5994);
    ecx = ecx + edx;
    if (CMP_LE(ecx, ebx)) goto loc_0043A124; /* jle: less or equal (signed <=) */

loc_0043A122: ;
    ebx = ecx;

loc_0043A124: ;
    eax = eax + ebx * 4;
    MEM32(esi + 0x7160) = eax;
    eax = 0; /* xor self */
    eax++;
    MEM32(esi + 0x4670) = eax;
    MEM32(esi + 0x4624) = eax;
    eax = MEM32(esi);
    if (CMP_EQ(eax, 0x1F40)) goto loc_0043A196; /* je: equal / zero */

loc_0043A145: ;
    if (CMP_EQ(eax, 0x2B11)) goto loc_0043A187; /* je: equal / zero */

loc_0043A14C: ;
    if (CMP_EQ(eax, 0x3E80)) goto loc_0043A177; /* je: equal / zero */

loc_0043A153: ;
    if (CMP_EQ(eax, 0x5622)) goto loc_0043A164; /* je: equal / zero */

loc_0043A15A: ;
    eax = 0x80040000u;
    g_seh_ebp = ebp; sub_0043A3DE(); return; /* tail jmp 0x0043A3DE */

loc_0043A164: ;
    ebx = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(ebx + 0x14));
    eax = eax + eax * 4;
    eax = eax * 4 + 0x18;
    goto loc_0043A1A3;

loc_0043A177: ;
    ebx = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(ebx + 0x14));
    eax = eax + eax * 4;
    eax = eax + eax + 0xE;
    goto loc_0043A1A3;

loc_0043A187: ;
    ebx = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(ebx + 0x14));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    eax = eax + 0x22;
    goto loc_0043A1A3;

loc_0043A196: ;
    ebx = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(ebx + 0x14));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    eax = eax + 0x13;

loc_0043A1A3: ;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043A1AC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x4638) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043A364; /* je: equal / zero */

loc_0043A1BB: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    eax = ZX16(MEM16(esi + 0xE));
    ecx = ZX16(MEM16(esi + 0x10));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(esi + 0x1C);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = eax;
    eax = ZX16(MEM16(esi + 0x12));
    edi = edi + eax;
    eax = MEM32(esi + 0x20);
    if (CMP_EQ(eax, 2)) goto loc_0043A1EE; /* je: equal / zero */

loc_0043A1E5: ;
    if (TEST_Z(eax, eax)) goto loc_0043A1EE; /* je: equal / zero */

loc_0043A1E9: ;
    if (CMP_NE(eax, 4)) goto loc_0043A1F8; /* jne: not equal / not zero */

loc_0043A1EE: ;
    eax = edi + edi * 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    edi = eax;

loc_0043A1F8: ;
    eax = edi + 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043A204: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x4610) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043A364; /* je: equal / zero */

loc_0043A213: ;
    eax = eax + 0x1C;
    MEM32(esi + 0x4610) = eax;
    ecx = 0; /* xor self */
    MEM32(eax + -8) = ecx;
    eax = MEM32(esi + 0x4610);
    MEM32(eax + -12) = MEM32(eax + -12) | 0xFFFFFFFFu;
    MEM32(esi + 0x4614) = edi;
    if (CMP_NE(MEM32(esi + 0x20), 2)) goto loc_0043A248; /* jne: not equal / not zero */

loc_0043A237: ;
    eax = 0; /* xor self */
    eax++;
    MEM32(esi + 0x4724) = eax;
    MEM32(esi + 0x4728) = eax;
    goto loc_0043A254;

loc_0043A248: ;
    MEM32(esi + 0x4724) = ecx;
    MEM32(esi + 0x4728) = ecx;

loc_0043A254: ;
    PUSH32(esp, 0x13C);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043A25E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x46C4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043A364; /* je: equal / zero */

loc_0043A26D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00440CDF(); /* call 0x00440CDF */

loc_0043A273: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) { sub_0043A3D9(); return; } /* jne: not equal / not zero */

loc_0043A27C: ;
    eax = MEM32(ebx + 0x18);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0x5938));
    ecx = esi + 0x58D8;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(eax + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 8));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00440A23(); /* call 0x00440A23 */

loc_0043A2B0: ;
    esp = esp + 0x20;
    if (TEST_NZ(eax, eax)) goto loc_0043A364; /* jne: not equal / not zero */

loc_0043A2BB: ;
    eax = MEM32(esi + 0x5934);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x138);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043A2CD: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x5930) = edi;
    if (TEST_Z(edi, edi)) goto loc_0043A364; /* je: equal / zero */

loc_0043A2DE: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax; edi += 4; /* stosd */
    edi = 0; /* xor self */
    if (CMP_LE(MEM32(esi + 0x5934), edi)) goto loc_0043A32B; /* jle: less or equal (signed <=) */

loc_0043A2EB: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & edi;

loc_0043A2EE: ;
    eax = MEM32(ebx + 0x18);
    eax = ZX16(MEM16(eax + 0xC));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x593C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    eax = esi + 0x58D8;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x5930);
    eax = eax + MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004409D5(); /* call 0x004409D5 */

loc_0043A318: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x138;
    esp = esp + 0x14;
    edi++;
    if (CMP_L(edi, MEM32(esi + 0x5934))) goto loc_0043A2EE; /* jl: less (signed <) */

loc_0043A32B: ;
    eax = ZX16(MEM16(esi + 0xE));
    ecx = ZX16(MEM16(esi + 0x10));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(esi + 0x1C);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x12));
    MEM16(esi + 0x461C) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax++;
    eax = eax << 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043A355: ;
    edi = eax;
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x925C) = edi;
    if (CMP_NE(edi, ebx)) goto loc_0043A36B; /* jne: not equal / not zero */

loc_0043A364: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0043A3DE(); return; /* tail jmp 0x0043A3DE */

loc_0043A36B: ;
    ecx = ZX16(MEM16(esi + 0x461C));
    ecx++;
    ecx = ecx << 4;
    edx = ecx;
    eax = 0; /* xor self */
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edx = ZX16(MEM16(esi + 0xE));
    eax = ZX16(MEM16(esi + 0x10));
    MEM32(esi + 0x925C) = MEM32(esi + 0x925C) + 0x10;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ecx = MEM32(esi + 0x925C);
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(ecx + -16) = eax;
    PUSH32(esp, ebx);
    MEM32(ecx + -12) = edx;
    edi = MEM32(esi + 0x925C);
    PUSH32(esp, 0x989680);
    PUSH32(esp, MEM32(edi + -12));
    PUSH32(esp, MEM32(edi + -16));
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0043A3BE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0043A3C8: ;
    MEM32(edi + -8) = eax;
    MEM32(edi + -4) = edx;
    MEM16(esi + 0x9260) = LO16(ebx);
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0043A3DE(); return; /* tail jmp 0x0043A3DE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043A3E5
 * Original: 0x0043A3E5 - 0x0043A7BA (981 bytes, 351 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A3E5(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043A3E5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_0043A7B6; /* je: equal / zero */

loc_0043A3F2: ;
    eax = MEM32(esi + 0x4748);
    if (TEST_Z(eax, eax)) goto loc_0043A403; /* je: equal / zero */

loc_0043A3FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A402: ;
    POP32(esp, ecx);

loc_0043A403: ;
    eax = MEM32(esi + 0x4750);
    if (TEST_Z(eax, eax)) goto loc_0043A414; /* je: equal / zero */

loc_0043A40D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A413: ;
    POP32(esp, ecx);

loc_0043A414: ;
    eax = MEM32(esi + 0x475C);
    if (TEST_Z(eax, eax)) goto loc_0043A425; /* je: equal / zero */

loc_0043A41E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A424: ;
    POP32(esp, ecx);

loc_0043A425: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x10), LO16(edi))) goto loc_0043A4C4; /* jbe: below or equal (unsigned <=) */

loc_0043A432: ;
    eax = MEM32(esi + 0x5804);
    if (TEST_Z(eax, eax)) goto loc_0043A44D; /* je: equal / zero */

loc_0043A43C: ;
    ecx = ZX16(LO16(edi));
    eax = MEM32(eax + ecx * 4);
    if (TEST_Z(eax, eax)) goto loc_0043A44D; /* je: equal / zero */

loc_0043A446: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A44C: ;
    POP32(esp, ecx);

loc_0043A44D: ;
    eax = MEM32(esi + 0x5808);
    if (TEST_Z(eax, eax)) goto loc_0043A468; /* je: equal / zero */

loc_0043A457: ;
    ecx = ZX16(LO16(edi));
    eax = MEM32(eax + ecx * 4);
    if (TEST_Z(eax, eax)) goto loc_0043A468; /* je: equal / zero */

loc_0043A461: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A467: ;
    POP32(esp, ecx);

loc_0043A468: ;
    eax = MEM32(esi + 0x580C);
    if (TEST_Z(eax, eax)) goto loc_0043A483; /* je: equal / zero */

loc_0043A472: ;
    ecx = ZX16(LO16(edi));
    eax = MEM32(eax + ecx * 4);
    if (TEST_Z(eax, eax)) goto loc_0043A483; /* je: equal / zero */

loc_0043A47C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A482: ;
    POP32(esp, ecx);

loc_0043A483: ;
    eax = MEM32(esi + 0x5814);
    if (TEST_Z(eax, eax)) goto loc_0043A49E; /* je: equal / zero */

loc_0043A48D: ;
    ecx = ZX16(LO16(edi));
    eax = MEM32(eax + ecx * 4);
    if (TEST_Z(eax, eax)) goto loc_0043A49E; /* je: equal / zero */

loc_0043A497: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A49D: ;
    POP32(esp, ecx);

loc_0043A49E: ;
    eax = MEM32(esi + 0x5810);
    if (TEST_Z(eax, eax)) goto loc_0043A4B9; /* je: equal / zero */

loc_0043A4A8: ;
    ecx = ZX16(LO16(edi));
    eax = MEM32(eax + ecx * 4);
    if (TEST_Z(eax, eax)) goto loc_0043A4B9; /* je: equal / zero */

loc_0043A4B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A4B8: ;
    POP32(esp, ecx);

loc_0043A4B9: ;
    edi++;
    if (CMP_B(LO16(edi), MEM16(esi + 0x10))) goto loc_0043A432; /* jb: below (unsigned <) */

loc_0043A4C4: ;
    eax = MEM32(esi + 0x5804);
    if (TEST_Z(eax, eax)) goto loc_0043A4D5; /* je: equal / zero */

loc_0043A4CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A4D4: ;
    POP32(esp, ecx);

loc_0043A4D5: ;
    eax = MEM32(esi + 0x5808);
    if (TEST_Z(eax, eax)) goto loc_0043A4E6; /* je: equal / zero */

loc_0043A4DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A4E5: ;
    POP32(esp, ecx);

loc_0043A4E6: ;
    eax = MEM32(esi + 0x580C);
    if (TEST_Z(eax, eax)) goto loc_0043A4F7; /* je: equal / zero */

loc_0043A4F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A4F6: ;
    POP32(esp, ecx);

loc_0043A4F7: ;
    eax = MEM32(esi + 0x5814);
    if (TEST_Z(eax, eax)) goto loc_0043A508; /* je: equal / zero */

loc_0043A501: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A507: ;
    POP32(esp, ecx);

loc_0043A508: ;
    eax = MEM32(esi + 0x5810);
    if (TEST_Z(eax, eax)) goto loc_0043A519; /* je: equal / zero */

loc_0043A512: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A518: ;
    POP32(esp, ecx);

loc_0043A519: ;
    eax = MEM32(esi + 0x5930);
    if (TEST_Z(eax, eax)) goto loc_0043A52A; /* je: equal / zero */

loc_0043A523: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A529: ;
    POP32(esp, ecx);

loc_0043A52A: ;
    eax = MEM32(esi + 0x5960);
    if (TEST_Z(eax, eax)) goto loc_0043A53B; /* je: equal / zero */

loc_0043A534: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A53A: ;
    POP32(esp, ecx);

loc_0043A53B: ;
    eax = MEM32(esi + 0x5970);
    if (TEST_Z(eax, eax)) goto loc_0043A54C; /* je: equal / zero */

loc_0043A545: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A54B: ;
    POP32(esp, ecx);

loc_0043A54C: ;
    eax = MEM32(esi + 0x5968);
    if (TEST_Z(eax, eax)) goto loc_0043A55D; /* je: equal / zero */

loc_0043A556: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A55C: ;
    POP32(esp, ecx);

loc_0043A55D: ;
    eax = MEM32(esi + 0x4784);
    if (TEST_Z(eax, eax)) goto loc_0043A56E; /* je: equal / zero */

loc_0043A567: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A56D: ;
    POP32(esp, ecx);

loc_0043A56E: ;
    eax = MEM32(esi + 0x44);
    if (TEST_Z(eax, eax)) goto loc_0043A57C; /* je: equal / zero */

loc_0043A575: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A57B: ;
    POP32(esp, ecx);

loc_0043A57C: ;
    eax = MEM32(esi + 0x4710);
    if (TEST_Z(eax, eax)) goto loc_0043A58D; /* je: equal / zero */

loc_0043A586: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A58C: ;
    POP32(esp, ecx);

loc_0043A58D: ;
    eax = MEM32(esi + 0x470C);
    if (TEST_Z(eax, eax)) goto loc_0043A59E; /* je: equal / zero */

loc_0043A597: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A59D: ;
    POP32(esp, ecx);

loc_0043A59E: ;
    eax = MEM32(esi + 0x4708);
    if (TEST_Z(eax, eax)) goto loc_0043A5AF; /* je: equal / zero */

loc_0043A5A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A5AE: ;
    POP32(esp, ecx);

loc_0043A5AF: ;
    eax = MEM32(esi + 0x4704);
    if (TEST_Z(eax, eax)) goto loc_0043A5C0; /* je: equal / zero */

loc_0043A5B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A5BF: ;
    POP32(esp, ecx);

loc_0043A5C0: ;
    eax = MEM32(esi + 0x70);
    if (TEST_Z(eax, eax)) goto loc_0043A5CE; /* je: equal / zero */

loc_0043A5C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A5CD: ;
    POP32(esp, ecx);

loc_0043A5CE: ;
    eax = MEM32(esi + 0x715C);
    if (TEST_Z(eax, eax)) goto loc_0043A5DF; /* je: equal / zero */

loc_0043A5D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A5DE: ;
    POP32(esp, ecx);

loc_0043A5DF: ;
    eax = MEM32(esi + 0x4638);
    if (TEST_Z(eax, eax)) goto loc_0043A5F0; /* je: equal / zero */

loc_0043A5E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A5EF: ;
    POP32(esp, ecx);

loc_0043A5F0: ;
    if (CMP_EQ(MEM32(esi + 0x20), 1)) goto loc_0043A6F2; /* je: equal / zero */

loc_0043A5FA: ;
    edi = MEM32(esi + 0x5934);
    eax = MEM32(esi + 0x4664);
    edi++;
    if (TEST_Z(eax, eax)) goto loc_0043A612; /* je: equal / zero */

loc_0043A60B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A611: ;
    POP32(esp, ecx);

loc_0043A612: ;
    eax = MEM32(esi + 0x4660);
    if (TEST_Z(eax, eax)) goto loc_0043A623; /* je: equal / zero */

loc_0043A61C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A622: ;
    POP32(esp, ecx);

loc_0043A623: ;
    eax = MEM32(esi + 0x465C);
    if (TEST_Z(eax, eax)) goto loc_0043A634; /* je: equal / zero */

loc_0043A62D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A633: ;
    POP32(esp, ecx);

loc_0043A634: ;
    eax = MEM32(esi + 0x463C);
    if (TEST_Z(eax, eax)) goto loc_0043A645; /* je: equal / zero */

loc_0043A63E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A644: ;
    POP32(esp, ecx);

loc_0043A645: ;
    eax = MEM32(esi + 0x4640);
    if (TEST_Z(eax, eax)) goto loc_0043A656; /* je: equal / zero */

loc_0043A64F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A655: ;
    POP32(esp, ecx);

loc_0043A656: ;
    eax = MEM32(esi + 0x4644);
    if (TEST_Z(eax, eax)) goto loc_0043A667; /* je: equal / zero */

loc_0043A660: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A666: ;
    POP32(esp, ecx);

loc_0043A667: ;
    eax = MEM32(esi + 0x4648);
    if (TEST_Z(eax, eax)) goto loc_0043A678; /* je: equal / zero */

loc_0043A671: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A677: ;
    POP32(esp, ecx);

loc_0043A678: ;
    eax = MEM32(esi + 0x464C);
    if (TEST_Z(eax, eax)) goto loc_0043A689; /* je: equal / zero */

loc_0043A682: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A688: ;
    POP32(esp, ecx);

loc_0043A689: ;
    eax = MEM32(esi + 0x4658);
    if (TEST_Z(eax, eax)) goto loc_0043A69A; /* je: equal / zero */

loc_0043A693: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A699: ;
    POP32(esp, ecx);

loc_0043A69A: ;
    eax = MEM32(esi + 0x4654);
    if (TEST_Z(eax, eax)) goto loc_0043A6AB; /* je: equal / zero */

loc_0043A6A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A6AA: ;
    POP32(esp, ecx);

loc_0043A6AB: ;
    eax = MEM32(esi + 0x4668);
    if (TEST_Z(eax, eax)) goto loc_0043A6BC; /* je: equal / zero */

loc_0043A6B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A6BB: ;
    POP32(esp, ecx);

loc_0043A6BC: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edi = eax;
    edi = (uint32_t)((int32_t)edi >> 1);
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    eax = esi + 0x5988;
    ecx = ecx << 2;
    MEM32(eax) = MEM32(eax) + ecx;
    eax = MEM32(eax);
    if ((MEM32(eax) == 0)) goto loc_0043A6DF; /* je: equal / zero */

loc_0043A6D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A6DE: ;
    POP32(esp, ecx);

loc_0043A6DF: ;
    eax = esi + 0x596C;
    MEM32(eax) = MEM32(eax) - edi;
    eax = MEM32(eax);
    if ((MEM32(eax) == 0)) goto loc_0043A6F2; /* je: equal / zero */

loc_0043A6EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A6F1: ;
    POP32(esp, ecx);

loc_0043A6F2: ;
    eax = MEM32(esi + 0x4634);
    if (TEST_Z(eax, eax)) goto loc_0043A703; /* je: equal / zero */

loc_0043A6FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A702: ;
    POP32(esp, ecx);

loc_0043A703: ;
    eax = MEM32(esi + 0x7150);
    if (TEST_Z(eax, eax)) goto loc_0043A714; /* je: equal / zero */

loc_0043A70D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A713: ;
    POP32(esp, ecx);

loc_0043A714: ;
    eax = MEM32(esi + 0x46C4);
    if (TEST_Z(eax, eax)) goto loc_0043A725; /* je: equal / zero */

loc_0043A71E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A724: ;
    POP32(esp, ecx);

loc_0043A725: ;
    eax = MEM32(esi + 0x7154);
    if (TEST_Z(eax, eax)) goto loc_0043A736; /* je: equal / zero */

loc_0043A72F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A735: ;
    POP32(esp, ecx);

loc_0043A736: ;
    eax = esi + 0x4610;
    MEM32(eax) = MEM32(eax) + 0xFFFFFFE4u;
    eax = MEM32(eax);
    if ((MEM32(eax) == 0)) goto loc_0043A74A; /* je: equal / zero */

loc_0043A743: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A749: ;
    POP32(esp, ecx);

loc_0043A74A: ;
    if (CMP_EQ(MEM32(esi + 0x20), 1)) goto loc_0043A77E; /* je: equal / zero */

loc_0043A750: ;
    edi = esi + 0x719C;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_0043A76D; /* je: equal / zero */

loc_0043A75C: ;
    ecx = MEM32(esi + 0x7198);
    if (TEST_Z(ecx, ecx)) goto loc_0043A76D; /* je: equal / zero */

loc_0043A766: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0043A769: ;
    MEM32(edi) = MEM32(edi) & 0;
    POP32(esp, ecx);

loc_0043A76D: ;
    eax = MEM32(esi + 0x9230);
    if (TEST_Z(eax, eax)) goto loc_0043A77E; /* je: equal / zero */

loc_0043A777: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A77D: ;
    POP32(esp, ecx);

loc_0043A77E: ;
    eax = esi + 0x925C;
    MEM32(eax) = MEM32(eax) + 0xFFFFFFF0u;
    eax = MEM32(eax);
    if ((MEM32(eax) == 0)) goto loc_0043A792; /* je: equal / zero */

loc_0043A78B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A791: ;
    POP32(esp, ecx);

loc_0043A792: ;
    eax = esi + 0x58D8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044097A(); /* call 0x0044097A */

loc_0043A79E: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    eax = 0; /* xor self */
    ecx = 0x311A;
    edi = esi;
    PUSH32(esp, esi);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043A7B3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);

loc_0043A7B6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043A7BA
 * Original: 0x0043A7BA - 0x0043A842 (136 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A7BA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043A7BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi + 0x3278) = MEM32(esi + 0x3278) & 0;
    eax = esi + 0x327C;
    ecx = MEM32(eax);
    eax = SX16(LO16(ecx));
    MEM32(esi + 0x460C) = eax;
    MEM32(ebp + 8) = ecx;
    edx = 0; /* xor self */
    eax = esi + 0x78;

loc_0043A7E4: ;
    if (CMP_EQ(MEM32(eax), 0xFFFFFFFFu)) goto loc_0043A7FB; /* je: equal / zero */

loc_0043A7E9: ;
    MEM32(esi + 0x3278) = MEM32(esi + 0x3278) + 1;
    edx++;
    eax = eax + 4;
    if (CMP_L(edx, 0x640)) goto loc_0043A7E4; /* jl: less (signed <) */

loc_0043A7FB: ;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    eax = MEM32(esi + 0x3278);
    edx = MEM32(esi + 0x48);
    ebx = MEM32(ebp + 0x10);
    MEM32(esi + eax * 4 + 0x78) = edx;
    eax = MEM32(esi + 0x3278);
    edx = MEM32(ebx + 0xC);
    MEM32(esi + eax * 4 + 0x1978) = edx;
    eax = MEM32(esi + 0x48);
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_0043A83C; /* je: equal / zero */

loc_0043A824: ;
    eax = eax + ecx + 2;

loc_0043A828: ;
    ecx = MEM32(esi + 0x40);
    ecx = ecx << 3;
    if (CMP_B(eax, ecx)) { sub_0043A842(); return; } /* jb: below (unsigned <) */

loc_0043A832: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0043A96E(); return; /* tail jmp 0x0043A96E */

loc_0043A83C: ;
    eax = eax + ecx + 1;
    goto loc_0043A828;

}

/**
 * sub_0043A972
 * Original: 0x0043A972 - 0x0043AA58 (230 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A972(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043A972: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    edx = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(esi + 0x68);
    edx = edx << 3;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x48);
    ebx = edx;
    ebx = ebx - ecx;
    edi = edi + eax;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    if (CMP_GE(edi, ebx)) goto loc_0043A9A5; /* jge: greater or equal (signed >=) */

loc_0043A9A2: ;
    MEM32(ebp + 8) = edi;

loc_0043A9A5: ;
    eax = eax + ecx;
    if (CMP_LE(eax, edx)) goto loc_0043A9B6; /* jle: less or equal (signed <=) */

loc_0043A9AB: ;
    eax = eax - edx;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = ebx;
    MEM32(esi + 0x68) = ebx;

loc_0043A9B6: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x54));
    edi = 0; /* xor self */
    eax = ZX16(LO16(ecx));
    edi++;
    edx = ecx + 1;
    ecx = MEM32(esi + 0x50);
    MEM16(esi + 0x54) = LO16(edx);
    edi = edi << LO8(ecx);
    edx = ZX16(LO16(edx));
    if (CMP_L(edx, edi)) goto loc_0043A9DA; /* jl: less (signed <) */

loc_0043A9D5: ;
    MEM16(esi + 0x54) = MEM16(esi + 0x54) & 0;

loc_0043A9DA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edx = 0; /* xor self */
    edi = ecx;
    ecx = MEM32(esi + 0x58);
    edx++;
    edx = edx << LO8(ecx);
    ecx = MEM32(esi + 0x68);
    edx--;
    MEM32(ebp + 8) = MEM32(ebp + 8) - ecx;
    MEM32(ebp + -24) = edx;
    if (((int32_t)MEM32(ebp + 8) < 0)) goto loc_0043AA4E; /* js: sign (negative) */

loc_0043A9F4: ;
    ecx = MEM32(esi + 0x64);
    ebx = 0; /* xor self */
    ebx++;
    ebx = ebx << LO8(ecx);
    if (CMP_GE(MEM32(esi + 0x68), ebx)) goto loc_0043AA4E; /* jge: greater or equal (signed >=) */

loc_0043AA01: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    ecx = esi + 0x78;

loc_0043AA08: ;
    ebx = MEM32(ecx);
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_0043AA2E; /* je: equal / zero */

loc_0043AA0F: ;
    if (CMP_GE(ebx, MEM32(ebp + 8))) goto loc_0043AA2E; /* jge: greater or equal (signed >=) */

loc_0043AA14: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ebx = edx + -1;
    if (CMP_EQ(MEM32(ebp + -4), ebx)) goto loc_0043AA2E; /* je: equal / zero */

loc_0043AA1F: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    ecx = ecx + 4;
    if (CMP_L(MEM32(ebp + -8), 0x640)) goto loc_0043AA08; /* jl: less (signed <) */

loc_0043AA2E: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = MEM32(ecx) & 0;
    ecx = MEM32(ebp + -8);
    edx = MEM32(esi + 0x64);
    ebx = MEM32(esi + 0x58);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(esi + 0x5C);
    ecx = ecx + edx;
    ecx = ecx + ebx;
    edi = edi + ecx;
    if (CMP_BE(edi, 0x20)) { sub_0043AA58(); return; } /* jbe: below or equal (unsigned <=) */

loc_0043AA4E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0043AD2A(); return; /* tail jmp 0x0043AD2A */

}

/**
 * sub_0043AD2F
 * Original: 0x0043AD2F - 0x0043ADC6 (151 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AD2F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0043AD2F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x925C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ecx + 0x9260));
    edi = edi << 4;
    esi = eax + edi;
    eax = MEM32(ebp + 0x10);
    if (CMP_L(eax, MEM32(esi + -4))) goto loc_0043ADC2; /* jl: less (signed <) */

loc_0043AD54: ;
    if (CMP_G(eax, MEM32(esi + -4))) goto loc_0043AD5E; /* jg: greater (signed >) */

loc_0043AD56: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_BE(eax, MEM32(esi + -8))) goto loc_0043ADC2; /* jbe: below or equal (unsigned <=) */

loc_0043AD5E: ;
    edx = ZX16(MEM16(ecx + 0xE));
    eax = ZX16(MEM16(ecx + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax + MEM32(esi + -16);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ecx + 0x473C);
    ebx = edx;
    ebx = ebx + MEM32(esi + -12) + _cf; /* adc */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_L(edx, ebx)) goto loc_0043ADC2; /* jl: less (signed <) */

loc_0043AD82: ;
    if (CMP_G(edx, ebx)) goto loc_0043AD89; /* jg: greater (signed >) */

loc_0043AD84: ;
    if (CMP_B(eax, MEM32(ebp + -8))) goto loc_0043ADC2; /* jb: below (unsigned <) */

loc_0043AD89: ;
    eax = MEM32(ecx + 0x925C);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + edi + 8) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(eax + edi + 0xC) = edx;
    edx = ZX16(MEM16(ecx + 0x9260));
    eax = MEM32(ecx + 0x473C);
    esi = MEM32(ecx + 0x925C);
    edx = edx << 4;
    MEM32(edx + esi) = eax;
    MEM32(edx + esi + 4) = MEM32(edx + esi + 4) & 0;
    MEM16(ecx + 0x9260) = MEM16(ecx + 0x9260) + 1;

loc_0043ADC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0043ADC6
 * Original: 0x0043ADC6 - 0x0043AF2A (356 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043ADC6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0043ADC6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    ecx = MEM32(ebp + 8);
    eax = ZX16(MEM16(ecx + 0x10));
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(ecx + 0x12));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = ZX16(MEM16(ecx + 0xE));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0x9260));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_0043AE3E; /* jbe: below or equal (unsigned <=) */

loc_0043ADF9: ;
    edi = MEM32(ecx + 0x925C);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -16) = edx;

loc_0043AE08: ;
    edx = ZX16(MEM16(ebp + 8));
    edx = edx << 4;
    eax = MEM32(edx + edi);
    eax = eax - MEM32(ebp + -20);
    esi = MEM32(edx + edi + 4);
    esi = esi - MEM32(ebp + -16) - _cf; /* sbb */
    if (CMP_G(esi & esi, 0)) goto loc_0043AE38; /* jg: greater (signed >) */

loc_0043AE20: ;
    if (TEST_S(esi, esi)) goto loc_0043AE26; /* jl: less (signed <) */

loc_0043AE22: ;
    if (CMP_AE(eax & eax, 0)) goto loc_0043AE38; /* jae: above or equal (unsigned >=) */

loc_0043AE26: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    SET_LO16(eax, MEM16(ebp + 8));
    if (CMP_B(LO16(eax), MEM16(ecx + 0x9260))) goto loc_0043AE08; /* jb: below (unsigned <) */

loc_0043AE36: ;
    goto loc_0043AE3E;

loc_0043AE38: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;

loc_0043AE3E: ;
    edi = MEM32(ecx + 0x925C);
    esi = ZX16(MEM16(ebp + -8));
    esi = esi << 4;
    eax = ebx;
    ebx = MEM32(esi + edi + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = ebx - eax;
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + edi + -12);
    eax = eax - edx - _cf; /* sbb */
    MEM32(edi + -16) = ebx;
    MEM32(edi + -12) = eax;
    eax = MEM32(ecx + 0x925C);
    MEM32(ebp + -16) = edx;
    edx = MEM32(esi + eax + -8);
    MEM32(eax + -8) = edx;
    edx = MEM32(esi + eax + -4);
    MEM32(eax + -4) = edx;
    eax = MEM32(ebp + -8);
    edi = 0; /* xor self */
    (void)0; /* cmp LO16(eax), MEM16(ecx + 0x9260) - flags set for next jcc */
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -4) = eax;
    if (CMP_AE(LO16(eax), MEM16(ecx + 0x9260))) goto loc_0043AEE8; /* jae: above or equal (unsigned >=) */

loc_0043AE8E: ;
    edx = MEM32(ecx + 0x925C);
    esi = ZX16(MEM16(ebp + -4));
    esi = esi << 4;
    ebx = MEM32(esi + edx + 4);
    eax = ZX16(LO16(edi));
    edi = MEM32(esi + edx);
    eax = eax << 4;
    edi = edi - MEM32(ebp + -20);
    MEM32(ebp + -12) = edx;
    ebx = ebx - MEM32(ebp + -16) - _cf; /* sbb */
    MEM32(edx + eax) = edi;
    MEM32(edx + eax + 4) = ebx;
    edx = MEM32(ecx + 0x925C);
    edi = MEM32(esi + edx + 8);
    MEM32(edx + eax + 8) = edi;
    edi = MEM32(ebp + 8);
    esi = MEM32(esi + edx + 0xC);
    edi++;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(edx + eax + 0xC) = esi;
    SET_LO16(eax, MEM16(ebp + -4));
    (void)0; /* cmp LO16(eax), MEM16(ecx + 0x9260) - flags set for next jcc */
    MEM32(ebp + 8) = edi;
    if (CMP_B(LO16(eax), MEM16(ecx + 0x9260))) goto loc_0043AE8E; /* jb: below (unsigned <) */

loc_0043AEE5: ;
    eax = MEM32(ebp + -8);

loc_0043AEE8: ;
    MEM16(ecx + 0x9260) = MEM16(ecx + 0x9260) - LO16(eax);
    if (CMP_AE(LO16(edi), MEM16(ecx + 0x461C))) goto loc_0043AF25; /* jae: above or equal (unsigned >=) */

loc_0043AEF8: ;
    edx = 0; /* xor self */

loc_0043AEFA: ;
    esi = MEM32(ecx + 0x925C);
    eax = ZX16(LO16(edi));
    eax = eax << 4;
    MEM32(eax + esi) = edx;
    MEM32(eax + esi + 4) = edx;
    esi = MEM32(ecx + 0x925C);
    MEM32(eax + esi + 8) = edx;
    edi++;
    MEM32(eax + esi + 0xC) = edx;
    if (CMP_B(LO16(edi), MEM16(ecx + 0x461C))) goto loc_0043AEFA; /* jb: below (unsigned <) */

loc_0043AF25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0043AF2A
 * Original: 0x0043AF2A - 0x0043AFFD (211 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AF2A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043AF2A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x4610);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    eax = eax + edi;
    SET_LO8(ecx, MEM8(eax));
    (void)0; /* cmp LO8(ecx), 1 - flags set for next jcc */
    SET_LO8(ebx, MEM8(eax + -28));
    if (CMP_NE(LO8(ecx), 1)) { sub_0043AFFD(); return; } /* jne: not equal / not zero */

loc_0043AF4F: ;
    eax = MEM32(eax + 4);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x9244));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x9244)); }
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0); sub_00444B7E(); /* call 0x00444B7E */

loc_0043AF64: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004464A1(); /* call 0x004464A1 */

loc_0043AF6D: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_0043AFF8; /* jne: not equal / not zero */

loc_0043AF78: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0043AF87; /* jne: not equal / not zero */

loc_0043AF7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00444D9D(); /* call 0x00444D9D */

loc_0043AF82: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043AFF8; /* jne: not equal / not zero */

loc_0043AF87: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00444CF4(); /* call 0x00444CF4 */

loc_0043AF8D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043AFF8; /* jne: not equal / not zero */

loc_0043AF92: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    eax = MEM32(esi + 0x4610);
    eax = MEM32(edi + eax + 8);
    MEM32(esi + 0x4630) = eax;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0043AFB1; /* jne: not equal / not zero */

loc_0043AFA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00442B94(); /* call 0x00442B94 */

loc_0043AFAC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043AFF8; /* jne: not equal / not zero */

loc_0043AFB1: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0044142C(); /* call 0x0044142C */

loc_0043AFBA: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043AFF8; /* jne: not equal / not zero */

loc_0043AFC0: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00441FB7(); /* call 0x00441FB7 */

loc_0043AFC9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043AFF8; /* jne: not equal / not zero */

loc_0043AFCF: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00442F0A(); /* call 0x00442F0A */

loc_0043AFD8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043AFF8; /* jne: not equal / not zero */

loc_0043AFDE: ;
    eax = MEM32(esi + 0x4610);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043A7BA(); /* call 0x0043A7BA */

loc_0043AFEF: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0043AFF8; /* jne: not equal / not zero */

loc_0043AFF6: ;
    eax = 0; /* xor self */

loc_0043AFF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0043B032
 * Original: 0x0043B032 - 0x0043B412 (992 bytes, 318 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B032(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043B032: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(ebx, edi)) goto loc_0043B406; /* je: equal / zero */

loc_0043B045: ;
    if (CMP_EQ(MEM32(ebp + 0xC), edi)) goto loc_0043B406; /* je: equal / zero */

loc_0043B04E: ;
    if (CMP_EQ(MEM32(ebp + 0x14), edi)) goto loc_0043B406; /* je: equal / zero */

loc_0043B057: ;
    if (CMP_EQ(MEM32(ebp + 0x20), edi)) goto loc_0043B406; /* je: equal / zero */

loc_0043B060: ;
    if (CMP_EQ(MEM32(ebp + 0x28), edi)) goto loc_0043B406; /* je: equal / zero */

loc_0043B069: ;
    if (CMP_EQ(MEM32(ebp + 0x34), edi)) goto loc_0043B077; /* je: equal / zero */

loc_0043B06E: ;
    if (CMP_EQ(MEM32(ebp + 0x3C), edi)) goto loc_0043B406; /* je: equal / zero */

loc_0043B077: ;
    if (CMP_EQ(MEM32(ebx + 0x28), edi)) goto loc_0043B3FF; /* je: equal / zero */

loc_0043B080: ;
    MEM32(ebx + 0x9254) = 0x43F3A6;
    MEM32(ebx + 0x9258) = 0x43F6A8;
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_0043B099: ;
    if (TEST_Z(eax, eax)) goto loc_0043B0B0; /* je: equal / zero */

loc_0043B09D: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    /* TODO: stmxcsr dword ptr [esp] */
    POP32(esp, eax);
    eax = eax | 0x8000;
    PUSH32(esp, eax);
    /* TODO: ldmxcsr dword ptr [esp] */
    POP32(esp, eax);
    POP32(esp, eax);

loc_0043B0B0: ;
    SET_LO16(eax, MEM16(ebx + 0x478A));
    if (CMP_EQ(LO16(eax), 0xA)) goto loc_0043B0C7; /* je: equal / zero */

loc_0043B0BD: ;
    if (CMP_NE(LO16(eax), 0x10)) goto loc_0043B3FF; /* jne: not equal / not zero */

loc_0043B0C7: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    esi = MEM32(ebx + 0x4620);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebp + 8) = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043AD2F(); /* call 0x0043AD2F */

loc_0043B0DC: ;
    edi = ZX16(MEM16(ebx + 0xC));
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    esp = esp + 0xC;
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0043B141; /* jbe: below or equal (unsigned <=) */

loc_0043B0F0: ;
    eax = MEM32(ebx + 0x473C);
    edx = MEM32(ebx + 0x1C);
    eax = eax + ecx;
    edx = edx + esi;
    if (CMP_AE(eax, edx)) goto loc_0043B141; /* jae: above or equal (unsigned >=) */

loc_0043B101: ;
    edi = MEM32(ebp + 0xC);
    SET_LO16(edi, MEM16(edi + ecx * 2));
    edx = ebx + 0x4754;
    esi = MEM32(edx);
    MEM16(esi + eax * 2) = LO16(edi);
    eax = MEM32(ebx + 0x473C);
    edx = MEM32(edx);
    esi = MEM32(ebx + 0x474C);
    eax = eax + ecx;
    eax = eax << 1;
    SET_LO16(edx, MEM16(eax + edx));
    MEM16(eax + esi) = LO16(edx);
    esi = ZX16(MEM16(ebx + 0xC));
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    esi = MEM32(ebp + 8);
    ecx++;
    if (CMP_B(ecx, eax)) goto loc_0043B0F0; /* jb: below (unsigned <) */

loc_0043B141: ;
    eax = ZX16(MEM16(ebx + 0xC));
    MEM32(ebx + 0x473C) = MEM32(ebx + 0x473C) + ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    eax = MEM32(ebx + 0x1C);
    eax = eax + esi;
    if (CMP_AE(MEM32(ebx + 0x473C), eax)) goto loc_0043B183; /* jae: above or equal (unsigned >=) */

loc_0043B160: ;
    eax = MEM32(ebp + 0x28);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x2C);
    if (CMP_EQ(eax, ecx)) goto loc_0043B170; /* je: equal / zero */

loc_0043B16E: ;
    MEM32(eax) = ecx;

loc_0043B170: ;
    if (CMP_EQ(MEM32(ebp + 0x34), ecx)) goto loc_0043B3FB; /* je: equal / zero */

loc_0043B179: ;
    eax = MEM32(ebp + 0x3C);
    MEM32(eax) = ecx;
    goto loc_0043B3FB;

loc_0043B183: ;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x34), edi - flags set for next jcc */
    MEM32(ebx + 0x2C) = 1;
    if (CMP_NE(MEM32(ebp + 0x34), edi)) goto loc_0043B194; /* jne: not equal / not zero */

loc_0043B191: ;
    MEM32(ebx + 0x2C) = edi;

loc_0043B194: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00444B1F(); /* call 0x00444B1F */

loc_0043B19A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00445057(); /* call 0x00445057 */

loc_0043B1A0: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(eax, edi)) goto loc_0043B40B; /* jne: not equal / not zero */

loc_0043B1AA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441D4E(); /* call 0x00441D4E */

loc_0043B1B0: ;
    PUSH32(esp, ebx);
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0); sub_00446200(); /* call 0x00446200 */

loc_0043B1B9: ;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(MEM32(ebp + 0xC), 0)) goto loc_0043B1D8; /* jle: less or equal (signed <=) */

loc_0043B1C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043AF2A(); /* call 0x0043AF2A */

loc_0043B1C8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043B40B; /* jne: not equal / not zero */

loc_0043B1D2: ;
    edi++;
    if (CMP_L(edi, MEM32(ebp + 0xC))) goto loc_0043B1C1; /* jl: less (signed <) */

loc_0043B1D8: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0x4610);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x38) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 0x34) = MEM32(ebx + 0x34) + 1;
    ecx = MEM32(ebx + 0x34);
    MEM32(ebx + 0x3C) = eax;
    eax = 0x7FFF;
    if (CMP_LE(ecx, eax)) goto loc_0043B204; /* jle: less or equal (signed <=) */

loc_0043B201: ;
    MEM32(ebx + 0x34) = eax;

loc_0043B204: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + 1;
    eax = MEM32(ebx + 0x30);
    if (CMP_BE(eax, 0xFFFFFFFFu)) goto loc_0043B213; /* jbe: below or equal (unsigned <=) */

loc_0043B20F: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) | 0xFFFFFFFFu;

loc_0043B213: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441406(); /* call 0x00441406 */

loc_0043B21C: ;
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = ebp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043A972(); /* call 0x0043A972 */

loc_0043B233: ;
    esp = esp + 0x20;
    if (TEST_NZ(eax, eax)) goto loc_0043B40B; /* jne: not equal / not zero */

loc_0043B23E: ;
    eax = MEM32(ebp + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0043B24A; /* je: equal / zero */

loc_0043B245: ;
    ecx = MEM32(ebp + 0x28);
    MEM32(eax) = ecx;

loc_0043B24A: ;
    eax = MEM32(ebp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0043B25C; /* je: equal / zero */

loc_0043B251: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x1C);
    MEM32(eax + 4) = ecx;

loc_0043B25C: ;
    if (CMP_EQ(MEM32(ebp + 0x34), 0)) goto loc_0043B296; /* je: equal / zero */

loc_0043B262: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xC);
    ecx = SX16(LO16(esi));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x38);
    if (CMP_L(ecx, eax)) goto loc_0043B3FF; /* jl: less (signed <) */

loc_0043B278: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebx + 0x7160));
    PUSH32(esp, 0); sub_00446A72(); /* call 0x00446A72 */

loc_0043B287: ;
    eax = ZX16(MEM16(ebx + 0xC));
    ecx = MEM32(ebp + 0x3C);
    esp = esp + 0xC;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    MEM32(ecx) = eax;

loc_0043B296: ;
    ecx = MEM32(ebx + 0x473C);
    ecx = ecx - esi;
    ecx = ecx + MEM32(ebx + 0x4744);
    edi = MEM32(ebx + 0x4748);
    ecx = ecx << 1;
    edx = ecx;
    ecx = ecx >> 2;
    eax = esi + esi;
    esi = edi + eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(ebp + 8);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x473C);
    edi = MEM32(ebx + 0x4750);
    ecx = ecx - edx;
    ecx = ecx + MEM32(ebx + 0x4744);
    esi = edi + eax;
    ecx = ecx << 1;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x4744);
    ecx = ecx + MEM32(ebx + 0x1C);
    edi = MEM32(ebx + 0x475C);
    ecx = ecx << 2;
    eax = ecx;
    ecx = ecx >> 2;
    esi = edi + edx * 4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = ZX16(MEM16(ebx + 0x478A));
    ecx = MEM32(ebx + 0x5994);
    eax = eax + ecx;
    ecx = MEM32(ebx + 0x9248);
    if (CMP_LE(eax, ecx)) goto loc_0043B328; /* jle: less or equal (signed <=) */

loc_0043B326: ;
    ecx = eax;

loc_0043B328: ;
    edi = MEM32(ebx + 0x7160);
    eax = edx;
    eax = eax - ecx;
    ecx = MEM32(ebx + 0x3C);
    ecx = ecx - eax;
    esi = edi + eax * 4;
    ecx = ecx << 2;
    eax = eax - edx;
    edi = edi + eax * 4;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 0x3C);
    if (CMP_L(eax, edx)) goto loc_0043B3FF; /* jl: less (signed <) */

loc_0043B35B: ;
    esi = MEM32(ebx + 0x38);
    if (CMP_L(esi, edx)) goto loc_0043B3FF; /* jl: less (signed <) */

loc_0043B366: ;
    ecx = MEM32(ebx + 0x473C);
    if (CMP_B(ecx, edx)) goto loc_0043B3FF; /* jb: below (unsigned <) */

loc_0043B374: ;
    ecx = ecx - edx;
    eax = eax - edx;
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) & 0;
    MEM32(ebx + 0x473C) = ecx;
    ecx = ZX16(MEM16(ebx + 0x12));
    MEM32(ebx + 0x3C) = eax;
    eax = ZX16(MEM16(ebx + 0x14));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = ZX16(MEM16(ebx + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebx + 0x5934);
    esi = esi - edx;
    ecx = ecx - eax;
    MEM32(ebx + 0x38) = esi;
    if ((ecx == 0)) goto loc_0043B3E7; /* je: equal / zero */

loc_0043B3A6: ;
    MEM32(ebp + 0x34) = MEM32(ebp + 0x34) & 0;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x138);
    MEM32(ebp + 0x28) = esi;
    edx = 0x138;
    goto loc_0043B3BF;

loc_0043B3BC: ;
    esi = MEM32(ebp + 0x28);

loc_0043B3BF: ;
    ecx = MEM32(ebx + 0x5930);
    edi = MEM32(ebp + 0x34);
    MEM32(ebp + 0x34) = MEM32(ebp + 0x34) + edx;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + edx;
    esi = esi + ecx;
    edi = edi + ecx;
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 1;
    PUSH32(esp, 0x4E);
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x5934);
    ecx = ecx - eax;
    if (CMP_B(MEM32(ebp + 0x3C), ecx)) goto loc_0043B3BC; /* jb: below (unsigned <) */

loc_0043B3E7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043ADC6(); /* call 0x0043ADC6 */

loc_0043B3ED: ;
    (void)0; /* cmp MEM16(ebx + 0x24), 3 - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_NE(MEM16(ebx + 0x24), 3)) goto loc_0043B3FB; /* jne: not equal / not zero */

loc_0043B3F5: ;
    MEM16(ebx + 0x24) = 1;

loc_0043B3FB: ;
    eax = 0; /* xor self */
    goto loc_0043B40B;

loc_0043B3FF: ;
    eax = 0x80004005u;
    goto loc_0043B40B;

loc_0043B406: ;
    eax = 0x80070057u;

loc_0043B40B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 64; return; /* ret 60 */

}

/**
 * sub_0043B412
 * Original: 0x0043B412 - 0x0043B859 (1095 bytes, 349 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B412(void)
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

loc_0043B412: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ebx, esi)) goto loc_0043B84D; /* je: equal / zero */

loc_0043B427: ;
    if (CMP_EQ(MEM32(ebp + 0xC), esi)) goto loc_0043B84D; /* je: equal / zero */

loc_0043B430: ;
    if (CMP_EQ(MEM32(ebp + 0x14), esi)) goto loc_0043B84D; /* je: equal / zero */

loc_0043B439: ;
    if (CMP_EQ(MEM32(ebp + 0x20), esi)) goto loc_0043B447; /* je: equal / zero */

loc_0043B43E: ;
    if (CMP_EQ(MEM32(ebp + 0x28), esi)) goto loc_0043B84D; /* je: equal / zero */

loc_0043B447: ;
    if (CMP_EQ(MEM32(ebx + 0x28), esi)) goto loc_0043B6BA; /* je: equal / zero */

loc_0043B450: ;
    MEM32(ebx + 0x9254) = 0x43F3A6;
    MEM32(ebx + 0x9258) = 0x43F6A8;
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_0043B469: ;
    if (TEST_Z(eax, eax)) goto loc_0043B480; /* je: equal / zero */

loc_0043B46D: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    /* TODO: stmxcsr dword ptr [esp] */
    POP32(esp, eax);
    eax = eax | 0x8000;
    PUSH32(esp, eax);
    /* TODO: ldmxcsr dword ptr [esp] */
    POP32(esp, eax);
    POP32(esp, eax);

loc_0043B480: ;
    (void)0; /* cmp MEM32(ebp + 0x20), esi - flags set for next jcc */
    eax = MEM32(ebx + 0x4620);
    MEM32(ebp + 8) = eax;
    MEM32(ebx + 0x2C) = 1;
    if (CMP_NE(MEM32(ebp + 0x20), esi)) goto loc_0043B498; /* jne: not equal / not zero */

loc_0043B495: ;
    MEM32(ebx + 0x2C) = esi;

loc_0043B498: ;
    (void)0; /* cmp MEM16(ebx + 0x24), 2 - flags set for next jcc */
    ecx = MEM32(ebx + 0x473C);
    if (CMP_EQ(MEM16(ebx + 0x24), 2)) goto loc_0043B578; /* je: equal / zero */

loc_0043B4A9: ;
    eax = MEM32(ebx + 0x4738);
    eax = eax - MEM32(ebx + 0x4744);
    MEM32(ebx + 0x4740) = ecx;
    if (CMP_AE(ecx, eax)) goto loc_0043B4F6; /* jae: above or equal (unsigned >=) */

loc_0043B4BF: ;
    eax = eax - ecx;
    ecx = 0; /* xor self */
    if (CMP_LE(eax, esi)) goto loc_0043B4F0; /* jle: less or equal (signed <=) */

loc_0043B4C7: ;
    edx = MEM32(ebx + 0x473C);
    edi = MEM32(ebx + 0x4754);
    edx = edx + ecx;
    MEM16(edi + edx * 2) = LO16(esi);
    edx = MEM32(ebx + 0x473C);
    edi = MEM32(ebx + 0x474C);
    edx = edx + ecx;
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM16(edi + edx * 2) = LO16(esi);
    if (CMP_L(ecx, eax)) goto loc_0043B4C7; /* jl: less (signed <) */

loc_0043B4F0: ;
    MEM32(ebx + 0x473C) = MEM32(ebx + 0x473C) + eax;

loc_0043B4F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00444B1F(); /* call 0x00444B1F */

loc_0043B4FC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00445057(); /* call 0x00445057 */

loc_0043B502: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(eax, esi)) goto loc_0043B852; /* jne: not equal / not zero */

loc_0043B50C: ;
    if (CMP_NE(MEM32(ebx + 0x4614), esi)) goto loc_0043B5D8; /* jne: not equal / not zero */

loc_0043B518: ;
    eax = MEM32(ebx + 0x68);
    eax = eax + MEM32(ebx + 0x48);
    if ((eax == 0)) goto loc_0043B5D1; /* je: equal / zero */

loc_0043B524: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043A972(); /* call 0x0043A972 */

loc_0043B53B: ;
    esp = esp + 0x18;
    if (CMP_NE(eax, esi)) goto loc_0043B852; /* jne: not equal / not zero */

loc_0043B546: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_EQ(eax, esi)) goto loc_0043B552; /* je: equal / zero */

loc_0043B54D: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;

loc_0043B552: ;
    eax = MEM32(ebp + 0x1C);
    if (CMP_EQ(eax, esi)) goto loc_0043B564; /* je: equal / zero */

loc_0043B559: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;

loc_0043B564: ;
    if (CMP_EQ(MEM32(ebp + 0x20), esi)) goto loc_0043B67B; /* je: equal / zero */

loc_0043B56D: ;
    eax = MEM32(ebp + 0x28);
    MEM32(eax) = MEM32(eax) & 0;
    goto loc_0043B67B;

loc_0043B578: ;
    edx = MEM32(ebx + 0x4744);
    eax = MEM32(ebx + 0x1C);
    eax = eax - edx;
    if (CMP_B(ecx, eax)) goto loc_0043B50C; /* jb: below (unsigned <) */

loc_0043B587: ;
    eax = MEM32(ebx + 0x4738);
    eax = eax - edx;
    if (CMP_AE(ecx, eax)) goto loc_0043B4F6; /* jae: above or equal (unsigned >=) */

loc_0043B597: ;
    eax = eax - ecx;
    ecx = 0; /* xor self */
    if (CMP_LE(eax, esi)) goto loc_0043B4F6; /* jle: less or equal (signed <=) */

loc_0043B5A3: ;
    edx = MEM32(ebx + 0x473C);
    edi = MEM32(ebx + 0x4754);
    edx = edx + ecx;
    MEM16(edi + edx * 2) = LO16(esi);
    edx = MEM32(ebx + 0x473C);
    edi = MEM32(ebx + 0x474C);
    edx = edx + ecx;
    ecx++;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM16(edi + edx * 2) = LO16(esi);
    if (CMP_L(ecx, eax)) goto loc_0043B5A3; /* jl: less (signed <) */

loc_0043B5CC: ;
    goto loc_0043B4F6;

loc_0043B5D1: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;
    goto loc_0043B564;

loc_0043B5D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441D4E(); /* call 0x00441D4E */

loc_0043B5DE: ;
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0); sub_00446200(); /* call 0x00446200 */

loc_0043B5E6: ;
    POP32(esp, ecx);
    edi = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_LE(esi & esi, 0)) goto loc_0043B604; /* jle: less or equal (signed <=) */

loc_0043B5EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043AF2A(); /* call 0x0043AF2A */

loc_0043B5F5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043B852; /* jne: not equal / not zero */

loc_0043B5FF: ;
    edi++;
    if (CMP_L(edi, esi)) goto loc_0043B5EE; /* jl: less (signed <) */

loc_0043B604: ;
    ecx = MEM32(ebx + 0x4610);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x38) = ecx;
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(ebx + 0x3C) = eax;
    PUSH32(esp, 0); sub_00441406(); /* call 0x00441406 */

loc_0043B624: ;
    eax = MEM32(ebx + 0x4614);
    (void)0; /* cmp eax, MEM32(ebx + 0x4618) - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(eax, MEM32(ebx + 0x4618))) goto loc_0043B63B; /* jne: not equal / not zero */

loc_0043B634: ;
    MEM32(ebx + 0x4614) = MEM32(ebx + 0x4614) & 0;

loc_0043B63B: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043A972(); /* call 0x0043A972 */

loc_0043B652: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) goto loc_0043B852; /* jne: not equal / not zero */

loc_0043B65D: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0043B669; /* je: equal / zero */

loc_0043B664: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;

loc_0043B669: ;
    eax = MEM32(ebp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0043B67B; /* je: equal / zero */

loc_0043B670: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;

loc_0043B67B: ;
    eax = MEM32(ebx + 0x473C);
    edi = MEM32(ebp + 8);
    if (CMP_AE(eax, edi)) goto loc_0043B68A; /* jae: above or equal (unsigned >=) */

loc_0043B688: ;
    edi = eax;

loc_0043B68A: ;
    eax = MEM32(ebx + 0x3C);
    if (CMP_AE(eax, edi)) goto loc_0043B693; /* jae: above or equal (unsigned >=) */

loc_0043B691: ;
    edi = eax;

loc_0043B693: ;
    (void)0; /* cmp MEM32(ebp + 0x20), 0 - flags set for next jcc */
    MEM32(ebp + 0x14) = edi;
    if (CMP_EQ(MEM32(ebp + 0x20), 0)) goto loc_0043B6E2; /* je: equal / zero */

loc_0043B69C: ;
    if (CMP_BE(edi & edi, 0)) goto loc_0043B6E2; /* jbe: below or equal (unsigned <=) */

loc_0043B6A0: ;
    eax = MEM32(ebx + 0x4740);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    esi = edi;
    if (CMP_LE(edi, eax)) goto loc_0043B6AE; /* jle: less or equal (signed <=) */

loc_0043B6AC: ;
    esi = eax;

loc_0043B6AE: ;
    eax = ZX16(MEM16(ebx + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    if (CMP_GE(MEM32(ebp + 0x24), eax)) goto loc_0043B6C4; /* jge: greater or equal (signed >=) */

loc_0043B6BA: ;
    eax = 0x80004005u;
    goto loc_0043B852;

loc_0043B6C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebx + 0x7160));
    PUSH32(esp, 0); sub_00446A72(); /* call 0x00446A72 */

loc_0043B6D3: ;
    eax = ZX16(MEM16(ebx + 0xC));
    ecx = MEM32(ebp + 0x28);
    esp = esp + 0xC;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    MEM32(ecx) = eax;

loc_0043B6E2: ;
    eax = MEM32(ebx + 0x38);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ecx = eax;
    if (CMP_L(eax, edi)) goto loc_0043B6ED; /* jl: less (signed <) */

loc_0043B6EB: ;
    ecx = edi;

loc_0043B6ED: ;
    ecx = SX16(LO16(ecx));
    eax = eax - ecx;
    MEM32(ebx + 0x38) = eax;
    eax = SX16(LO16(edi));
    MEM32(ebx + 0x3C) = MEM32(ebx + 0x3C) - eax;
    eax = MEM32(ebx + 0x3C);
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx + 0x4614), edx - flags set for next jcc */
    MEM16(ebx + 0x24) = 2;
    if (CMP_NE(MEM32(ebx + 0x4614), edx)) goto loc_0043B716; /* jne: not equal / not zero */

loc_0043B70E: ;
    if (CMP_EQ(eax, edx)) goto loc_0043B849; /* je: equal / zero */

loc_0043B716: ;
    eax = MEM32(ebx + 0x4744);
    eax = eax - MEM32(ebp + 8);
    eax = eax + MEM32(ebx + 0x473C);
    if (CMP_LE(eax & eax, 0)) goto loc_0043B763; /* jle: less or equal (signed <=) */

loc_0043B729: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + ecx;

loc_0043B72E: ;
    eax = MEM32(ebx + 0x4748);
    SET_LO16(esi, MEM16(ecx + eax));
    MEM16(eax + edx * 2) = LO16(esi);
    eax = MEM32(ebx + 0x4750);
    SET_LO16(esi, MEM16(ecx + eax));
    MEM16(eax + edx * 2) = LO16(esi);
    eax = MEM32(ebx + 0x4744);
    eax = eax - MEM32(ebp + 8);
    edx++;
    eax = eax + MEM32(ebx + 0x473C);
    ecx++;
    ecx++;
    if (CMP_L(edx, eax)) goto loc_0043B72E; /* jl: less (signed <) */

loc_0043B760: ;
    edi = MEM32(ebp + 0x14);

loc_0043B763: ;
    eax = MEM32(ebx + 0x4744);
    eax = eax + MEM32(ebx + 0x1C);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0043B795; /* jle: less or equal (signed <=) */

loc_0043B772: ;
    edx = MEM32(ebp + 8);
    edx = edx << 2;

loc_0043B778: ;
    eax = MEM32(ebx + 0x475C);
    fp_push(MEMF(edx + eax)); /* fld float */
    edx = edx + 4;
    MEMF(eax + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebx + 0x4744);
    eax = eax + MEM32(ebx + 0x1C);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_0043B778; /* jl: less (signed <) */

loc_0043B795: ;
    eax = ZX16(MEM16(ebx + 0x478A));
    ecx = MEM32(ebx + 0x5994);
    eax = eax + ecx;
    ecx = MEM32(ebx + 0x9248);
    if (CMP_LE(eax, ecx)) goto loc_0043B7B0; /* jle: less or equal (signed <=) */

loc_0043B7AE: ;
    ecx = eax;

loc_0043B7B0: ;
    eax = edi;
    eax = eax - ecx;
    if (CMP_GE(eax, MEM32(ebx + 0x3C))) goto loc_0043B7D5; /* jge: greater or equal (signed >=) */

loc_0043B7B9: ;
    edx = eax;
    edx = edx - edi;
    edx = edx << 2;

loc_0043B7C0: ;
    ecx = MEM32(ebx + 0x7160);
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    eax++;
    MEMF(edx + ecx) = (float)fp_top(); fp_popp(); /* fstp */
    edx = edx + 4;
    if (CMP_L(eax, MEM32(ebx + 0x3C))) goto loc_0043B7C0; /* jl: less (signed <) */

loc_0043B7D5: ;
    ecx = ZX16(MEM16(ebx + 0x12));
    eax = ZX16(MEM16(ebx + 0x14));
    MEM32(ebx + 0x473C) = MEM32(ebx + 0x473C) - edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = ZX16(MEM16(ebx + 0x10));
    MEM32(ebx + 0x4740) = MEM32(ebx + 0x4740) - edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebx + 0x5934);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    ecx = ecx - eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0043B842; /* jle: less or equal (signed <=) */

loc_0043B803: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x138);
    MEM32(ebp + 0x14) = ecx;
    edx = 0x138;

loc_0043B817: ;
    ecx = MEM32(ebx + 0x5930);
    esi = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0x20);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + edx;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + edx;
    esi = esi + ecx;
    edi = edi + ecx;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1;
    PUSH32(esp, 0x4E);
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x5934);
    ecx = ecx - eax;
    if (CMP_L(MEM32(ebp + 0x28), ecx)) goto loc_0043B817; /* jl: less (signed <) */

loc_0043B842: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043ADC6(); /* call 0x0043ADC6 */

loc_0043B848: ;
    POP32(esp, ecx);

loc_0043B849: ;
    eax = 0; /* xor self */
    goto loc_0043B852;

loc_0043B84D: ;
    eax = 0x80070057u;

loc_0043B852: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043B859
 * Original: 0x0043B859 - 0x0043BAAA (593 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B859(void)
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

loc_0043B859: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    MEM32(edi) = MEM32(edi) & 0;
    ecx = ZX16(MEM16(ebx + 8));
    edx = MEM32(esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    if (CMP_BE(edx, eax)) goto loc_0043B887; /* jbe: below or equal (unsigned <=) */

loc_0043B881: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi) = eax;

loc_0043B887: ;
    if (CMP_NE(MEM32(ebx + 0x30), 0)) goto loc_0043B8AC; /* jne: not equal / not zero */

loc_0043B88D: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00448C77(); /* call 0x00448C77 */

loc_0043B899: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_0043BAA2; /* jl: less (signed <) */

loc_0043B8A7: ;
    goto loc_0043BA50;

loc_0043B8AC: ;
    eax = MEM32(ebx + 0x27C);
    (void)0; /* cmp eax, MEM32(ebx + 0x280) - flags set for next jcc */
    edi = MEM32(esi);
    MEM32(ebp + 8) = edi;
    if (CMP_L(eax, MEM32(ebx + 0x280))) goto loc_0043B9EA; /* jl: less (signed <) */

loc_0043B8C3: ;
    eax = MEM32(ebx + 0xFB0);
    if (TEST_Z(eax, eax)) goto loc_0043BA9B; /* je: equal / zero */

loc_0043B8D1: ;
    ecx = ebx + 0xF64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx + 0xF60;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(ebx + 8));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x278));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 0x274));
    ecx = ebp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 0xF6C));
    PUSH32(esp, MEM32(ebx + 0xF5C));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0043B907: ;
    esi = 0; /* xor self */
    esp = esp + 0x20;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, esi)) goto loc_0043BAA2; /* jl: less (signed <) */

loc_0043B917: ;
    ecx = MEM32(ebp + 0x14);
    if (CMP_NE(ecx, MEM32(ebx + 0xF6C))) goto loc_0043BA9B; /* jne: not equal / not zero */

loc_0043B926: ;
    eax = 0; /* xor self */
    eax++;
    (void)0; /* cmp MEM32(ebx + 0xC4), esi - flags set for next jcc */
    MEM32(ebx + 0x27C) = esi;
    MEM32(ebx + 0x280) = ecx;
    if (CMP_NE(MEM32(ebx + 0xC4), esi)) goto loc_0043B945; /* jne: not equal / not zero */

loc_0043B93D: ;
    if (CMP_NE(MEM32(ebx + 0xC0), eax)) goto loc_0043B959; /* jne: not equal / not zero */

loc_0043B945: ;
    fp_push(0.0); /* fldz */
    MEM32(ebx + 0xEC8) = esi;
    MEMF(ebx + 0xECC) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebx + 0xED0) = eax;

loc_0043B959: ;
    if (CMP_EQ(MEM32(ebx + 0xED0), esi)) goto loc_0043B976; /* je: equal / zero */

loc_0043B961: ;
    eax = MEM32(ebx + 0x274);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004479C3(); /* call 0x004479C3 */

loc_0043B970: ;
    esp = esp + 0x10;
    MEM32(ebp + -4) = eax;

loc_0043B976: ;
    if (CMP_L(MEM32(ebp + -4), esi)) goto loc_0043BAA2; /* jl: less (signed <) */

loc_0043B97F: ;
    SET_LO16(eax, MEM16(ebx + 0xCE));
    if (CMP_BE(LO16(eax), LO16(esi))) goto loc_0043B9C6; /* jbe: below or equal (unsigned <=) */

loc_0043B98B: ;
    ecx = ZX16(LO16(eax));
    if (CMP_L(MEM32(ebx + 0x280), ecx)) goto loc_0043BA9B; /* jl: less (signed <) */

loc_0043B99A: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x280));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004476B5(); /* call 0x004476B5 */

loc_0043B9AB: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, esi)) goto loc_0043BAA2; /* jl: less (signed <) */

loc_0043B9B9: ;
    eax = ZX16(MEM16(ebx + 0xCE));
    MEM32(ebx + 0x280) = eax;

loc_0043B9C6: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x280));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x274));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00447CF4(); /* call 0x00447CF4 */

loc_0043B9DC: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, esi)) goto loc_0043BAA2; /* jl: less (signed <) */

loc_0043B9EA: ;
    eax = MEM32(ebx + 0x27C);
    ecx = MEM32(ebx + 0x280);
    if (CMP_GE(eax, ecx)) goto loc_0043BA9B; /* jge: greater or equal (signed >=) */

loc_0043B9FE: ;
    ecx = ecx - eax;
    if (CMP_B(edi, ecx)) goto loc_0043BA07; /* jb: below (unsigned <) */

loc_0043BA04: ;
    MEM32(ebp + 8) = ecx;

loc_0043BA07: ;
    ecx = ZX16(MEM16(ebx + 8));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 8));
    edx = MEM32(ebx + 0x274);
    edi = MEM32(ebp + 0x10);
    esi = edx + eax * 2;
    edx = MEM32(ebp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    eax = ZX16(LO16(ecx));
    MEM32(edx) = eax;
    edx = ZX16(MEM16(ebx + 8));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = edx;
    MEM32(ebx + 0x27C) = MEM32(ebx + 0x27C) + ecx;
    MEM32(ebx + 0xC0) = MEM32(ebx + 0xC0) & 0;

loc_0043BA50: ;
    edi = MEM32(ebp + 0x1C);
    if (TEST_Z(edi, edi)) goto loc_0043BA8B; /* je: equal / zero */

loc_0043BA57: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x989680);
    PUSH32(esp, MEM32(ebx + 0xF94));
    PUSH32(esp, MEM32(ebx + 0xF90));
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0043BA6F: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0043BA7A: ;
    eax = eax + MEM32(ebx + 0xF80);
    edx = edx + MEM32(ebx + 0xF84) + _cf; /* adc */
    MEM32(edi) = eax;
    MEM32(edi + 4) = edx;

loc_0043BA8B: ;
    eax = MEM32(esi);
    ebx = ebx + 0xF90;
    MEM32(ebx) = MEM32(ebx) + eax;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 0 + _cf; /* adc */
    goto loc_0043BAA2;

loc_0043BA9B: ;
    MEM32(ebp + -4) = 0x80004005u;

loc_0043BAA2: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_0043BAAA
 * Original: 0x0043BAAA - 0x0043BBBB (273 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BAAA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043BAAA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_0043BBB6; /* je: equal / zero */

loc_0043BABA: ;
    PUSH32(esp, esi);
    esi = edi + 0x8C;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_0043BAD0; /* je: equal / zero */

loc_0043BAC7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043BACD: ;
    POP32(esp, ecx);
    MEM32(esi) = ebx;

loc_0043BAD0: ;
    esi = edi + 0x25C;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_0043BAE5; /* je: equal / zero */

loc_0043BADC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043BAE2: ;
    POP32(esp, ecx);
    MEM32(esi) = ebx;

loc_0043BAE5: ;
    (void)0; /* cmp MEM32(edi + 0x110), ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_EQ(MEM32(edi + 0x110), ebx)) goto loc_0043BB32; /* je: equal / zero */

loc_0043BAEE: ;
    ebp = 0; /* xor self */
    if (CMP_BE(MEM16(edi + 0xC), LO16(ebx))) goto loc_0043BB20; /* jbe: below or equal (unsigned <=) */

loc_0043BAF6: ;
    eax = MEM32(edi + 0x110);
    esi = ZX16(LO16(ebp));
    esi = esi << 2;
    eax = MEM32(esi + eax);
    if (CMP_EQ(eax, ebx)) goto loc_0043BB19; /* je: equal / zero */

loc_0043BB09: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043BB0F: ;
    eax = MEM32(edi + 0x110);
    POP32(esp, ecx);
    MEM32(esi + eax) = ebx;

loc_0043BB19: ;
    ebp++;
    if (CMP_B(LO16(ebp), MEM16(edi + 0xC))) goto loc_0043BAF6; /* jb: below (unsigned <) */

loc_0043BB20: ;
    PUSH32(esp, MEM32(edi + 0x110));
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043BB2B: ;
    POP32(esp, ecx);
    MEM32(edi + 0x110) = ebx;

loc_0043BB32: ;
    if (CMP_EQ(MEM32(edi + 0x114), ebx)) goto loc_0043BB7E; /* je: equal / zero */

loc_0043BB3A: ;
    ebp = 0; /* xor self */
    if (CMP_BE(MEM16(edi + 0xC), LO16(ebx))) goto loc_0043BB6C; /* jbe: below or equal (unsigned <=) */

loc_0043BB42: ;
    eax = MEM32(edi + 0x114);
    esi = ZX16(LO16(ebp));
    esi = esi << 2;
    eax = MEM32(esi + eax);
    if (CMP_EQ(eax, ebx)) goto loc_0043BB65; /* je: equal / zero */

loc_0043BB55: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043BB5B: ;
    eax = MEM32(edi + 0x114);
    POP32(esp, ecx);
    MEM32(esi + eax) = ebx;

loc_0043BB65: ;
    ebp++;
    if (CMP_B(LO16(ebp), MEM16(edi + 0xC))) goto loc_0043BB42; /* jb: below (unsigned <) */

loc_0043BB6C: ;
    PUSH32(esp, MEM32(edi + 0x114));
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043BB77: ;
    POP32(esp, ecx);
    MEM32(edi + 0x114) = ebx;

loc_0043BB7E: ;
    esi = edi + 0x1DC;
    eax = MEM32(esi);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(eax, ebx)) goto loc_0043BB94; /* je: equal / zero */

loc_0043BB8B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043BB91: ;
    POP32(esp, ecx);
    MEM32(esi) = ebx;

loc_0043BB94: ;
    esi = edi + 0x274;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_0043BBA9; /* je: equal / zero */

loc_0043BBA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043BBA6: ;
    POP32(esp, ecx);
    MEM32(esi) = ebx;

loc_0043BBA9: ;
    ecx = 0x3F2;
    eax = 0; /* xor self */
    MEM32(edi + 0x34) = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, esi);

loc_0043BBB6: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0043BBBB
 * Original: 0x0043BBBB - 0x0043BD2A (367 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BBBB(void)
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

loc_0043BBBB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x10C), LO16(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(esi + 0x28) = 3;
    MEM32(esi + 0x2C) = ebx;
    MEM16(esi + 0x9E) = LO16(ebx);
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x94) = ebx;
    if (CMP_BE(MEM16(esi + 0x10C), LO16(ebx))) goto loc_0043BC22; /* jbe: below or equal (unsigned <=) */

loc_0043BBF4: ;
    eax = ZX16(LO16(ecx));
    edx = eax + 1;
    MEM32(ebp + 8) = edx;
    edx = ZX16(MEM16(esi + 0x10C));
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    edx = edx + edx + 2;
    MEM32(ebp + 8) = edx;
    ecx++;
    /* FPU: fidiv dword ptr [ebp + 8] */
    MEMF(esi + eax * 4 + 0x118) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_B(LO16(ecx), MEM16(esi + 0x10C))) goto loc_0043BBF4; /* jb: below (unsigned <) */

loc_0043BC22: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x1E0));
    MEM16(esi + 0x1FA) = LO16(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1DC));
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0043BC3E: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x10C));
    MEM16(esi + 0xD6) = 1;
    MEM16(esi + 0x1AE) = 0x28;
    PUSH32(esp, eax);
    eax = esi + 0x21C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0043BC66: ;
    esp = esp + 0x10;
    eax = 0; /* xor self */
    PUSH32(esp, 8);
    edi = esi + 0x2A0;
    ecx = 0x307;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    MEM16(esi + 0x298) = LO16(ebx);
    edi = esi + 0x1FC;
    eax = 0x3F800000;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = 0; /* xor self */
    eax++;
    POP32(esp, edi);
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0xF80) = ebx;
    MEM32(esi + 0xF84) = ebx;
    MEM32(esi + 0xF88) = ebx;
    MEM32(esi + 0xF8C) = ebx;
    MEM32(esi + 0xF90) = ebx;
    MEM32(esi + 0xF94) = ebx;
    MEM32(esi + 0xF98) = ebx;
    MEM32(esi + 0xF9C) = ebx;
    MEM32(esi + 0xFA0) = ebx;
    MEM32(esi + 0xF60) = ebx;
    MEM32(esi + 0xF64) = ebx;
    MEM32(esi + 0x27C) = ebx;
    MEM32(esi + 0x280) = ebx;
    MEM32(esi + 0x26C) = ebx;
    MEM32(esi + 0x270) = ebx;
    MEM32(esi + 0x268) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0x48) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043BD2A
 * Original: 0x0043BD2A - 0x0043BD58 (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BD2A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043BD2A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0xFB8);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_0043BD48; /* je: equal / zero */

loc_0043BD3B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xF5C));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0043BD43: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_S(eax, eax)) goto loc_0043BD56; /* jl: less (signed <) */

loc_0043BD48: ;
    MEM32(esi + 0xF64) = MEM32(esi + 0xF64) & 0;
    MEM32(esi + 0xF60) = MEM32(esi + 0xF60) & 0;

loc_0043BD56: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043BD58
 * Original: 0x0043BD58 - 0x0043BE0E (182 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BD58(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043BD58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = ZX16(MEM16(esi + 0x9C));
    ebx = ebx << 3;
    ecx = eax + edi;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + 0x14) = ebx;
    if (CMP_G(ecx, ebx)) goto loc_0043BE04; /* jg: greater (signed >) */

loc_0043BD82: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00448E25(); /* call 0x00448E25 */

loc_0043BD8C: ;
    MEM32(ebp + 8) = eax;
    eax = ZX16(MEM16(esi + 0x9C));
    edi = edi + eax;
    eax = ZX16(MEM16(esi + 0xB0));
    ecx = eax + edi;
    esp = esp + 0xC;
    if (CMP_G(ecx, ebx)) goto loc_0043BE04; /* jg: greater (signed >) */

loc_0043BDA9: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00448E25(); /* call 0x00448E25 */

loc_0043BDB3: ;
    ecx = ZX16(MEM16(esi + 0xA2));
    MEM32(ebp + -4) = eax;
    eax = ZX16(MEM16(esi + 0xB0));
    esp = esp + 0xC;
    edi = edi + eax;
    ebx = 0; /* xor self */

loc_0043BDCB: ;
    eax = ecx + edi;
    if (CMP_G(eax, MEM32(ebp + 0x14))) goto loc_0043BE04; /* jg: greater (signed >) */

loc_0043BDD3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00448E25(); /* call 0x00448E25 */

loc_0043BDDD: ;
    ecx = ZX16(MEM16(esi + 0xA2));
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    esp = esp + 0xC;
    edi = edi + ecx;
    ebx = ebx + eax;
    edx--;
    if (CMP_EQ(eax, edx)) goto loc_0043BDCB; /* je: equal / zero */

loc_0043BDF5: ;
    eax = ZX16(MEM16(esi + 0xA8));
    ecx = eax + edi;
    if (CMP_LE(ecx, MEM32(ebp + 0x14))) { sub_0043BE0E(); return; } /* jle: less or equal (signed <=) */

loc_0043BE04: ;
    eax = 0x80040004u;
    g_seh_ebp = ebp; sub_0043BEA1(); return; /* tail jmp 0x0043BEA1 */

}

/**
 * sub_0043BEA6
 * Original: 0x0043BEA6 - 0x0043BEE4 (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BEA6(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043BEA6: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = MEM32(edx) & 0;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    if (CMP_NE(ecx, 1)) goto loc_0043BECD; /* jne: not equal / not zero */

loc_0043BEB9: ;
    ecx = MEM32(eax + 0x280);
    eax = MEM32(eax + 0x27C);
    if (CMP_LE(ecx, eax)) goto loc_0043BEE3; /* jle: less or equal (signed <=) */

loc_0043BEC9: ;
    ecx = ecx - eax;
    goto loc_0043BEE1;

loc_0043BECD: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0043BEE3; /* jne: not equal / not zero */

loc_0043BED1: ;
    ecx = MEM32(eax + 0x26C);
    if (CMP_BE(ecx & ecx, 0)) goto loc_0043BEE3; /* jbe: below or equal (unsigned <=) */

loc_0043BEDB: ;
    ecx = ecx - MEM32(eax + 0x270);

loc_0043BEE1: ;
    MEM32(edx) = ecx;

loc_0043BEE3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043BEE4
 * Original: 0x0043BEE4 - 0x0043BF1D (57 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BEE4(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043BEE4: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM32(eax + 0xFA0), ecx)) goto loc_0043BF16; /* je: equal / zero */

loc_0043BEF2: ;
    edx = MEM32(eax + 0xF88);
    MEM32(eax + 0xF80) = edx;
    edx = MEM32(eax + 0xF8C);
    MEM32(eax + 0xF84) = edx;
    MEM32(eax + 0xF90) = ecx;
    MEM32(eax + 0xF94) = ecx;

loc_0043BF16: ;
    MEM32(eax + 0xF9C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0043BF1D
 * Original: 0x0043BF1D - 0x0043BFB2 (149 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BF1D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043BF1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    esi = esi + 0xDA;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    eax = 0; /* xor self */
    edi = ebp + -20;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    eax = eax + 0x38;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -4) = eax;

loc_0043BF52: ;
    eax = ZX16(MEM16(ebp + 8));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_00448E25(); /* call 0x00448E25 */

loc_0043BF61: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 3;
    esp = esp + 0xC;
    if (CMP_AE(eax, 7)) goto loc_0043BF8E; /* jae: above or equal (unsigned >=) */

loc_0043BF6D: ;
    ecx = ebp + eax * 2 + -20;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx));
    if (CMP_AE(LO16(edx), 3)) { sub_0043BFB2(); return; } /* jae: above or equal (unsigned >=) */

loc_0043BF7C: ;
    ebx = ZX16(LO16(edx));
    eax = eax + eax * 2;
    eax = eax + ebx;
    edx++;
    MEM16(esi + eax * 2) = LO16(edi);
    MEM16(ecx) = LO16(edx);
    goto loc_0043BFA4;

loc_0043BF8E: ;
    if ((edx != 0)) { sub_0043BFB2(); return; } /* jne: not equal / not zero */

loc_0043BF90: ;
    if (CMP_AE(MEM16(ebp + -6), 4)) { sub_0043BFB2(); return; } /* jae: above or equal (unsigned >=) */

loc_0043BF97: ;
    eax = ZX16(MEM16(ebp + -6));
    MEM16(ebp + -6) = MEM16(ebp + -6) + 1;
    MEM16(esi + eax * 2 + 0x2A) = LO16(edi);

loc_0043BFA4: ;
    edi++;
    if (CMP_B(LO16(edi), 0x11)) goto loc_0043BF52; /* jb: below (unsigned <) */

loc_0043BFAB: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0043BFB9
 * Original: 0x0043BFB9 - 0x0043C00E (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BFB9(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043BFB9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = MEM32(esi) & 0;
    if (CMP_LE(MEM32(eax + 0xC), 0)) goto loc_0043BFFE; /* jle: less or equal (signed <=) */

loc_0043BFCB: ;
    PUSH32(esp, edi);

loc_0043BFCC: ;
    edi = MEM32(eax + 0x14);
    if (CMP_A(edi, 0x18)) goto loc_0043BFFD; /* ja: above (unsigned >) */

loc_0043BFD4: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - 1;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(eax + 0x10);
    edx = ZX8(LO8(edx));
    ecx = ecx << 8;
    ecx = ecx | edx;
    edi = edi + 8;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edi;
    MEM32(esi) = MEM32(esi) + 8;
    if (CMP_G(MEM32(eax + 0xC), 0)) goto loc_0043BFCC; /* jg: greater (signed >) */

loc_0043BFFD: ;
    POP32(esp, edi);

loc_0043BFFE: ;
    (void)0; /* cmp MEM32(eax + 0xC), 0 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_L(MEM32(eax + 0xC), 0)) { sub_0043C00E(); return; } /* jl: less (signed <) */

loc_0043C005: ;
    if (CMP_A(MEM32(eax + 0x14), 0x20)) { sub_0043C00E(); return; } /* ja: above (unsigned >) */

loc_0043C00B: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0043C014
 * Original: 0x0043C014 - 0x0043C070 (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C014(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043C014: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    eax = MEM32(esp + 4);
    edx = edx >> 3;
    edx = edx + MEM32(eax);
    PUSH32(esp, esi);
    MEM32(eax + 8) = edx;
    esi = MEM32(ecx);
    edx = MEM32(eax + 4);
    esi = esi >> 3;
    edx = edx - esi;
    MEM32(eax + 0xC) = edx;
    if (((int32_t)edx < 0)) goto loc_0043C069; /* js: sign (negative) */

loc_0043C036: ;
    esi = MEM32(ecx);
    esi = esi & 7;
    if ((esi != 0)) goto loc_0043C047; /* jne: not equal / not zero */

loc_0043C03D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    goto loc_0043C063;

loc_0043C047: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(edx));
    edx++;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 8);
    POP32(esp, edx);
    edx = edx - esi;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - 1;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = edx;
    MEM32(ecx) = MEM32(ecx) + edx;
    POP32(esp, ebx);

loc_0043C063: ;
    if (CMP_GE(MEM32(eax + 0xC), 0)) { sub_0043C070(); return; } /* jge: greater or equal (signed >=) */

loc_0043C069: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043C074
 * Original: 0x0043C074 - 0x0043C0AB (55 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C074(void)
{

loc_0043C074: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax + 0xFA4) = ecx;
    MEM32(eax + 0xFA8) = ecx;
    MEM32(eax + 0xFAC) = ecx;
    MEM32(eax + 0xFB0) = ecx;
    MEM32(eax + 0xFB4) = ecx;
    MEM32(eax + 0xFB8) = ecx;
    MEM32(eax + 0xFBC) = ecx;
    MEM32(eax + 0xFC0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0043C0AB
 * Original: 0x0043C0AB - 0x0043C0E5 (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C0AB(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043C0AB: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_Z(edi, edi)) goto loc_0043C0E1; /* je: equal / zero */

loc_0043C0B4: ;
    PUSH32(esp, esi);
    esi = edi + 0xF5C;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0043C0D2; /* je: equal / zero */

loc_0043C0C1: ;
    ecx = MEM32(edi + 0xFC0);
    if (TEST_Z(ecx, ecx)) goto loc_0043C0D2; /* je: equal / zero */

loc_0043C0CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0043C0CE: ;
    MEM32(esi) = MEM32(esi) & 0;
    POP32(esp, ecx);

loc_0043C0D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0043BAAA(); /* call 0x0043BAAA */

loc_0043C0D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043C0DE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);

loc_0043C0E1: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043C14A
 * Original: 0x0043C14A - 0x0043C161 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C14A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043C14A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_NZ(esi, esi)) { sub_0043C161(); return; } /* jne: not equal / not zero */

loc_0043C15A: ;
    eax = 0x80070057u;
    g_seh_ebp = ebp; sub_0043C1B2(); return; /* tail jmp 0x0043C1B2 */

}

/**
 * sub_0043C1B7
 * Original: 0x0043C1B7 - 0x0043C1CA (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C1B7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043C1B7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_NZ(esi, esi)) { sub_0043C1CA(); return; } /* jne: not equal / not zero */

loc_0043C1C3: ;
    eax = 0x80070057u;
    g_seh_ebp = ebp; sub_0043C201(); return; /* tail jmp 0x0043C201 */

}

/**
 * sub_0043C206
 * Original: 0x0043C206 - 0x0043C9B8 (1970 bytes, 503 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C206(void)
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

loc_0043C206: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, ebx)) goto loc_0043C9AE; /* je: equal / zero */

loc_0043C21A: ;
    edi = MEM32(ebp + 0xC);
    if (CMP_EQ(edi, ebx)) goto loc_0043C9AE; /* je: equal / zero */

loc_0043C225: ;
    if (CMP_NE(MEM32(esi + 0x34), ebx)) goto loc_0043C9AE; /* jne: not equal / not zero */

loc_0043C22E: ;
    ecx = 0; /* xor self */
    ecx++;
    if (TEST_Z(MEM8(edi + 0x34), LO8(ecx))) goto loc_0043C317; /* je: equal / zero */

loc_0043C23A: ;
    MEM32(esi + 0x284) = ecx;
    if (TEST_Z(MEM8(edi + 0x34), 2)) goto loc_0043C251; /* je: equal / zero */

loc_0043C246: ;
    MEM32(esi + 0x28C) = ecx;
    goto loc_0043C2E5;

loc_0043C251: ;
    fp_push(MEMF(0x648E14)); /* fld float */
    MEM32(esi + 0x28C) = ebx;
    MEMF(esi + 0x294) = (float)fp_top(); fp_pop(); /* fst */
    MEM16(esi + 0x292) = 0x28;
    MEM16(esi + 0x290) = 4;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, 0x200000)) goto loc_0043C29F; /* je: equal / zero */

loc_0043C27F: ;
    /* fstp st(0) */
    MEM16(esi + 0x292) = 0x14;
    MEM16(esi + 0x290) = 8;
    MEM32(esi + 0x294) = 0x3E000000;
    goto loc_0043C2E5;

loc_0043C29F: ;
    if (TEST_Z(eax, 0x400000)) goto loc_0043C2C0; /* je: equal / zero */

loc_0043C2A6: ;
    MEMF(esi + 0x294) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(esi + 0x292) = 0x28;
    MEM16(esi + 0x290) = 4;
    goto loc_0043C2E5;

loc_0043C2C0: ;
    (void)0; /* test eax, 0x800000 - flags set for next jcc */
    /* fstp st(0) */
    if (TEST_Z(eax, 0x800000)) goto loc_0043C2E5; /* je: equal / zero */

loc_0043C2C9: ;
    MEM16(esi + 0x292) = 0x50;
    MEM16(esi + 0x290) = 2;
    MEM32(esi + 0x294) = 0x3F000000;

loc_0043C2E5: ;
    eax = MEM32(edi + 0x34);
    eax = eax >> 2;
    eax = eax & 0xF;
    MEM16(esi + 0x288) = LO16(eax);
    eax = MEM32(edi + 0x34);
    SET_LO8(eax, LO8(eax) & 0x40);
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    MEM32(esi + 0xEC4) = eax;
    eax = MEM32(edi + 0x34);
    eax = eax >> 7;
    SET_LO8(eax, LO8(eax) & 0xF);
    MEM8(esi + 0xEC0) = LO8(eax);
    goto loc_0043C327;

loc_0043C317: ;
    MEM32(esi + 0x284) = ebx;
    MEM32(esi + 0x28C) = 1;

loc_0043C327: ;
    eax = MEM32(edi + 0x34);
    eax = eax >> 0xB;
    eax = eax & ecx;
    MEM32(esi + 0x14) = eax;
    if (TEST_Z(MEM8(edi + 0x35), 0x10)) goto loc_0043C343; /* je: equal / zero */

loc_0043C338: ;
    MEM16(esi + 0x10C) = 0x10;
    goto loc_0043C34C;

loc_0043C343: ;
    MEM16(esi + 0x10C) = 0xA;

loc_0043C34C: ;
    eax = MEM32(edi + 0x34);
    eax = eax >> 0xD;
    eax = eax & ecx;
    MEM16(esi + 0x1A0) = LO16(eax);
    eax = MEM32(edi + 0x34);
    eax = eax >> 0xE;
    eax = eax & ecx;
    MEM16(esi + 0x1A2) = LO16(eax);
    eax = MEM32(edi + 0x34);
    eax = eax >> 0xF;
    eax = eax & 0xF;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM16(edi + 0x18) = LO16(eax);
    PUSH32(esp, 0); sub_0043BF1D(); /* call 0x0043BF1D */

loc_0043C37E: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(eax, ebx)) goto loc_0043C9B3; /* jne: not equal / not zero */

loc_0043C388: ;
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x10) = eax;
    SET_LO16(eax, MEM16(edi + 8));
    MEM16(esi + 4) = LO16(eax);
    eax = MEM32(edi);
    MEM32(esi) = eax;
    SET_LO16(eax, MEM16(edi + 0xA));
    MEM16(esi + 6) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0xE));
    MEM16(esi + 8) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0x10));
    MEM16(esi + 0xA) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0x12));
    MEM16(esi + 0xC) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0x18));
    edi = 0; /* xor self */
    MEM16(esi + 0xE) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x10C));
    edi++;
    (void)0; /* cmp LO16(eax), 0xA - flags set for next jcc */
    MEM32(esi + 0xB4) = edi;
    if (CMP_NE(LO16(eax), 0xA)) goto loc_0043C3EC; /* jne: not equal / not zero */

loc_0043C3D8: ;
    MEM16(esi + 0x19E) = 0x18;
    MEM16(esi + 0x19C) = 0x30;
    goto loc_0043C404;

loc_0043C3EC: ;
    if (CMP_NE(LO16(eax), 0x10)) goto loc_0043C404; /* jne: not equal / not zero */

loc_0043C3F2: ;
    MEM16(esi + 0x19E) = 0x22;
    MEM16(esi + 0x19C) = 0x3C;

loc_0043C404: ;
    eax = ZX16(MEM16(esi + 6));
    eax = eax << 3;
    PUSH32(esp, eax);
    MEM16(esi + 0xA2) = 6;
    PUSH32(esp, 0); sub_00448DF1(); /* call 0x00448DF1 */

loc_0043C41A: ;
    MEM16(esi + 0xA8) = LO16(eax);
    eax = ZX16(MEM16(esi + 6));
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 0xF68);
    eax = eax << 1;
    PUSH32(esp, 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0x9C) = 4;
    MEM16(esi + 0xB0) = LO16(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DF1(); /* call 0x00448DF1 */

loc_0043C44C: ;
    MEM16(esi + 0xCC) = LO16(eax);
    eax = ZX16(MEM16(esi + 0xC));
    eax = eax << 2;
    PUSH32(esp, eax);
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM16(esi + 0x9E) = LO16(ebx);
    MEM32(esi + 0x28) = 3;
    MEM32(esi + 0xBC) = ebx;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043C47D: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x110) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0043C8BC; /* je: equal / zero */

loc_0043C48E: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0xC), LO16(ebx))) goto loc_0043C4AD; /* jbe: below or equal (unsigned <=) */

loc_0043C496: ;
    eax = 0; /* xor self */

loc_0043C498: ;
    edx = MEM32(esi + 0x110);
    ecx++;
    MEM32(edx + eax * 4) = ebx;
    edx = ZX16(MEM16(esi + 0xC));
    eax = SX16(LO16(ecx));
    if (CMP_L(eax, edx)) goto loc_0043C498; /* jl: less (signed <) */

loc_0043C4AD: ;
    eax = ZX16(MEM16(esi + 0xC));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043C4BA: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x114) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0043C8BC; /* je: equal / zero */

loc_0043C4C9: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0xC), LO16(ebx))) goto loc_0043C4E8; /* jbe: below or equal (unsigned <=) */

loc_0043C4D1: ;
    eax = 0; /* xor self */

loc_0043C4D3: ;
    edx = MEM32(esi + 0x114);
    ecx++;
    MEM32(edx + eax * 4) = ebx;
    edx = ZX16(MEM16(esi + 0xC));
    eax = SX16(LO16(ecx));
    if (CMP_L(eax, edx)) goto loc_0043C4D3; /* jl: less (signed <) */

loc_0043C4E8: ;
    (void)0; /* cmp MEM16(esi + 0xC), LO16(ebx) - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(MEM16(esi + 0xC), LO16(ebx))) goto loc_0043C530; /* jbe: below or equal (unsigned <=) */

loc_0043C4F1: ;
    eax = 0; /* xor self */

loc_0043C4F3: ;
    edi = eax;
    eax = ZX16(MEM16(esi + 0x10C));
    eax = eax << 2;
    PUSH32(esp, eax);
    edi = edi << 2;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043C508: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x110);
    MEM32(edi + ecx) = eax;
    eax = MEM32(esi + 0x110);
    if (CMP_EQ(MEM32(edi + eax), ebx)) goto loc_0043C8BC; /* je: equal / zero */

loc_0043C521: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = ZX16(MEM16(esi + 0xC));
    if (CMP_L(eax, ecx)) goto loc_0043C4F3; /* jl: less (signed <) */

loc_0043C530: ;
    (void)0; /* cmp MEM16(esi + 0xC), LO16(ebx) - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(MEM16(esi + 0xC), LO16(ebx))) goto loc_0043C578; /* jbe: below or equal (unsigned <=) */

loc_0043C539: ;
    eax = 0; /* xor self */

loc_0043C53B: ;
    edi = eax;
    eax = ZX16(MEM16(esi + 0x10C));
    eax = eax << 2;
    PUSH32(esp, eax);
    edi = edi << 2;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043C550: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x114);
    MEM32(edi + ecx) = eax;
    eax = MEM32(esi + 0x114);
    if (CMP_EQ(MEM32(edi + eax), ebx)) goto loc_0043C8BC; /* je: equal / zero */

loc_0043C569: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = ZX16(MEM16(esi + 0xC));
    if (CMP_L(eax, ecx)) goto loc_0043C53B; /* jl: less (signed <) */

loc_0043C578: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x10C), LO16(ebx))) goto loc_0043C5B5; /* jbe: below or equal (unsigned <=) */

loc_0043C583: ;
    eax = 0; /* xor self */

loc_0043C585: ;
    edx = eax + 1;
    MEM32(ebp + 8) = edx;
    edx = ZX16(MEM16(esi + 0x10C));
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    edx = edx + edx + 2;
    MEM32(ebp + 8) = edx;
    ecx++;
    /* FPU: fidiv dword ptr [ebp + 8] */
    MEMF(esi + eax * 4 + 0x118) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX16(MEM16(esi + 0x10C));
    eax = SX16(LO16(ecx));
    if (CMP_L(eax, edx)) goto loc_0043C585; /* jl: less (signed <) */

loc_0043C5B5: ;
    eax = MEM32(esi);
    fp_push((double)SMEM32(esi)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0043C5C3; /* jge: greater or equal (signed >=) */

loc_0043C5BD: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0043C5C3: ;
    fp_push(MEMD(0x561C70)); /* fld double */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0043C5D6: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = eax;
    MEM32(esi + 0x1A4) = edi;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0043C5EF: ;
    MEM32(esi + 0x1A8) = eax;
    eax = edi + 8;
    MEM32(esi + 0x1E0) = eax;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043C607: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x1DC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0043C8BC; /* je: equal / zero */

loc_0043C616: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x1E0));
    MEM16(esi + 0x1FA) = LO16(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0043C62D: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x10C));
    MEM16(esi + 0xD6) = 1;
    MEM16(esi + 0x1AE) = 0x28;
    PUSH32(esp, eax);
    eax = esi + 0x21C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0043C655: ;
    eax = 0; /* xor self */
    edi = esi + 0x2A0;
    ecx = 0x307;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x10C), LO16(ebx))) goto loc_0043C6A2; /* jbe: below or equal (unsigned <=) */

loc_0043C672: ;
    edx = eax + 1;
    MEM32(ebp + 8) = edx;
    edx = ZX16(MEM16(esi + 0x10C));
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    edx = edx + edx + 2;
    MEM32(ebp + 8) = edx;
    ecx++;
    /* FPU: fidiv dword ptr [ebp + 8] */
    MEMF(esi + eax * 4 + 0x158) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX16(MEM16(esi + 0x10C));
    eax = SX16(LO16(ecx));
    if (CMP_L(eax, edx)) goto loc_0043C672; /* jl: less (signed <) */

loc_0043C6A2: ;
    PUSH32(esp, 8);
    eax = 0x3F800000;
    edi = esi + 0x1FC;
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x1A4);
    eax = eax - MEM32(esi + 0x1A8);
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    SET_LO16(eax, MEM16(esi + 0x1A8));
    MEM16(esi + 0x1CA) = LO16(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x648F08)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0043C6E5: ;
    fp_push(MEMF(0x649E08)); /* fld float */
    SET_LO16(edi, LO16(eax));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM16(esi + 0x1CC) = LO16(edi);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0043C6FC: ;
    MEM16(ebp + -4) = LO16(eax);
    MEM16(esi + 0x1CE) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x1A4));
    SET_LO16(eax, LO16(eax) - 1);
    MEM16(ebp + 8) = LO16(eax);
    MEM16(esi + 0x1D0) = LO16(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0043C720: ;
    edx = MEM32(ebp + -4);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x1A8));
    eax = eax << 5;
    MEM16(esi + 0x1D4) = LO16(eax);
    SET_LO16(eax, LO16(eax) >> 1);
    ecx = ecx + ecx;
    edi = edi - ecx;
    ecx = MEM32(ebp + 8);
    ecx = ecx + edi * 2;
    ecx = ecx + edx + 1;
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    eax--;
    MEM16(esi + 0x1D8) = LO16(eax);
    eax = SX16(LO16(ecx));
    PUSH32(esp, eax);
    MEM16(esi + 0x1D2) = LO16(ecx);
    MEM16(esi + 0x1D6) = LO16(edx);
    PUSH32(esp, 0); sub_00448DF1(); /* call 0x00448DF1 */

loc_0043C76A: ;
    MEM16(esi + 0x1B2) = LO16(eax);
    eax = ZX16(MEM16(esi + 0x1D4));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DF1(); /* call 0x00448DF1 */

loc_0043C77E: ;
    MEM16(esi + 0x1B4) = LO16(eax);
    eax = MEM32(esi + 0x1A4);
    eax = eax - MEM32(esi + 0x1A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DF1(); /* call 0x00448DF1 */

loc_0043C797: ;
    edi = 0; /* xor self */
    edi++;
    esp = esp + 0xC;
    (void)0; /* cmp MEM32(esi + 0xB4), ebx - flags set for next jcc */
    MEM16(esi + 0x1B0) = LO16(eax);
    MEM32(esi + 0xC0) = edi;
    MEM32(esi + 0x48) = edi;
    if (CMP_EQ(MEM32(esi + 0xB4), ebx)) goto loc_0043C7BE; /* je: equal / zero */

loc_0043C7B5: ;
    eax = ZX16(MEM16(esi + 0x19C));
    goto loc_0043C7CC;

loc_0043C7BE: ;
    eax = ZX16(MEM16(esi + 0x19E));
    ecx = ZX16(MEM16(esi + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);

loc_0043C7CC: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0); sub_00446B46(); /* call 0x00446B46 */

loc_0043C7D7: ;
    ecx = ZX16(MEM16(esi + 0xC));
    eax = SX16(LO16(eax));
    eax = eax + 0x10;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + 8);
    eax = eax + ecx + 0x19;
    eax = eax >> 3;
    PUSH32(esp, eax);
    MEM32(esi + 0x90) = eax;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043C7FA: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x8C) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0043C8BC; /* je: equal / zero */

loc_0043C80B: ;
    ecx = ZX16(MEM16(esi + 0xC));
    eax = ZX16(MEM16(esi + 0xA));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = ZX16(MEM16(esi + 0x10C));
    eax = eax + ecx;
    ecx = MEM32(esi + 0x1E0);
    eax = eax + ecx;
    MEM32(esi + 0x264) = eax;
    eax = eax << 2;
    PUSH32(esp, eax);
    MEM32(esi + 0x94) = ebx;
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043C83C: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x25C) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0043C8BC; /* je: equal / zero */

loc_0043C847: ;
    ecx = ZX16(MEM16(esi + 0x10C));
    ecx = ecx + MEM32(esi + 0x1E0);
    MEM32(esi + 0x38) = ebx;
    eax = eax + ecx * 4;
    MEM32(esi + 0x260) = eax;
    eax = MEM32(esi + 0x274);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x270) = ebx;
    MEM32(esi + 0x26C) = ebx;
    MEM32(esi + 0x268) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi + 0x30) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_0043C892; /* je: equal / zero */

loc_0043C88B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0043C891: ;
    POP32(esp, ecx);

loc_0043C892: ;
    ecx = MEM32(esi + 0xF68);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = eax + ecx;
    MEM32(esi + 0x278) = eax;
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_0043C8AF: ;
    edi = eax;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x274) = edi;
    if (CMP_NE(edi, ebx)) goto loc_0043C8C6; /* jne: not equal / not zero */

loc_0043C8BC: ;
    eax = 0x8007000Eu;
    goto loc_0043C9B3;

loc_0043C8C6: ;
    ecx = MEM32(esi + 0x278);
    fp_push(0.0); /* fldz */
    ecx = ecx << 1;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    ecx = ZX16(MEM16(esi + 0x10C));
    eax = MEM32(esi + 0x274);
    MEM32(esi + 0xF54) = eax;
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi + 0xED4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    MEMF(esi + 0xECC) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0xEC8) = ebx;
    MEM32(esi + 0xED0) = ebx;
    MEM16(esi + 0xF58) = LO16(ebx);
    MEM16(esi + 0x298) = LO16(ebx);
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0xF60) = ebx;
    MEM32(esi + 0xF64) = ebx;
    MEM32(esi + 0x27C) = ebx;
    MEM32(esi + 0x280) = ebx;
    MEM32(esi + 0xF80) = ebx;
    MEM32(esi + 0xF84) = ebx;
    MEM32(esi + 0xF88) = ebx;
    MEM32(esi + 0xF8C) = ebx;
    MEM32(esi + 0xF90) = ebx;
    MEM32(esi + 0xF94) = ebx;
    MEM32(esi + 0xF98) = ebx;
    MEM32(esi + 0xF9C) = ebx;
    MEM32(esi + 0xFA0) = ebx;
    eax = 0; /* xor self */
    goto loc_0043C9B3;

loc_0043C9AE: ;
    eax = 0x80004005u;

loc_0043C9B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_0043C9B8
 * Original: 0x0043C9B8 - 0x0043CB8A (466 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C9B8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043C9B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 0x14), edi)) goto loc_0043CB80; /* je: equal / zero */

loc_0043C9CC: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebx + 0x74));
    eax = MEM32(ebx + 0x54);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebx + 0x58) = eax;
    PUSH32(esp, MEM32(ebx + 0x70));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043BD58(); /* call 0x0043BD58 */

loc_0043C9E4: ;
    ecx = MEM32(ebx + 0xA4);
    MEM32(ebx + 0x54) = MEM32(ebx + 0x54) + ecx;
    esp = esp + 0x10;
    if (CMP_NE(eax, edi)) goto loc_0043CB80; /* jne: not equal / not zero */

loc_0043C9F8: ;
    (void)0; /* cmp MEM32(ebx + 0x38), edi - flags set for next jcc */
    MEM32(ebx + 0x3C) = edi;
    MEM32(ebx + 0x4C) = edi;
    if (CMP_EQ(MEM32(ebx + 0x38), edi)) goto loc_0043CA09; /* je: equal / zero */

loc_0043CA03: ;
    MEM32(ebx + 0x38) = edi;
    MEM32(ebx + 0x40) = edi;

loc_0043CA09: ;
    esi = 0; /* xor self */
    esi++;
    if (CMP_NE(MEM32(ebx + 0x40), edi)) goto loc_0043CA1A; /* jne: not equal / not zero */

loc_0043CA11: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043C1B7(); /* call 0x0043C1B7 */

loc_0043CA17: ;
    MEM32(ebx + 0x3C) = esi;

loc_0043CA1A: ;
    if (CMP_NE(MEM32(ebx + 0x28), 3)) goto loc_0043CA90; /* jne: not equal / not zero */

loc_0043CA20: ;
    if (CMP_NE(MEM32(ebx + 0x3C), edi)) goto loc_0043CA3B; /* jne: not equal / not zero */

loc_0043CA25: ;
    if (CMP_NE(MEM32(ebx + 0xAC), edi)) goto loc_0043CA3B; /* jne: not equal / not zero */

loc_0043CA2D: ;
    if (CMP_NE(MEM16(ebx + 0xA0), LO16(edi))) goto loc_0043CA3B; /* jne: not equal / not zero */

loc_0043CA36: ;
    MEM32(ebx + 0x4C) = edi;
    goto loc_0043CA3E;

loc_0043CA3B: ;
    MEM32(ebx + 0x4C) = esi;

loc_0043CA3E: ;
    ecx = MEM32(ebx + 0xAC);
    if (CMP_EQ(ecx, edi)) goto loc_0043CA74; /* je: equal / zero */

loc_0043CA48: ;
    eax = MEM32(ebp + 0x18);
    MEM32(ebx + 0xBC) = ecx;
    edx = MEM32(eax);
    eax = MEM32(ebx + 0x6C);
    eax = eax << 3;
    eax = eax - edx;
    if (CMP_AE(ecx, eax)) goto loc_0043CA61; /* jae: above or equal (unsigned >=) */

loc_0043CA5F: ;
    eax = ecx;

loc_0043CA61: ;
    ecx = MEM32(ebp + 0x18);
    edx = edx + eax;
    MEM32(ecx) = edx;
    MEM32(ebx + 0xBC) = MEM32(ebx + 0xBC) - eax;
    MEM32(ebx + 0xAC) = edi;

loc_0043CA74: ;
    if (CMP_EQ(MEM32(ebx + 0x3C), edi)) goto loc_0043CA90; /* je: equal / zero */

loc_0043CA79: ;
    SET_LO16(eax, MEM16(ebx + 0xA0));
    MEM16(ebx + 0x9E) = LO16(eax);
    eax = MEM32(ebx + 0xA4);
    MEM32(ebx + 0x54) = eax;

loc_0043CA90: ;
    eax = MEM32(ebx + 0xAC);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebx + 0x28) = esi;
    MEM32(ebx + 0xF98) = edi;
    MEM32(ebx + 0xF9C) = edi;
    if (CMP_NE(eax, edi)) goto loc_0043CACB; /* jne: not equal / not zero */

loc_0043CAA9: ;
    if (CMP_NE(MEM32(ebx + 0x7C), edi)) goto loc_0043CACB; /* jne: not equal / not zero */

loc_0043CAAE: ;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x2C) = edi;
    PUSH32(esp, 0); sub_0043BEE4(); /* call 0x0043BEE4 */

loc_0043CAB7: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ebx = ebx + 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043C014(); /* call 0x0043C014 */

loc_0043CAC3: ;
    esp = esp + 0xC;
    goto loc_0043CB85;

loc_0043CACB: ;
    if (CMP_NE(MEM32(ebx + 0x30), esi)) goto loc_0043CB1A; /* jne: not equal / not zero */

loc_0043CAD0: ;
    if (CMP_NE(eax, edi)) goto loc_0043CB1A; /* jne: not equal / not zero */

loc_0043CAD4: ;
    if (CMP_EQ(MEM32(ebx + 0x7C), edi)) goto loc_0043CB1A; /* je: equal / zero */

loc_0043CAD9: ;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebx + 0x5C) = esi;
    MEM32(ebx + 0x88) = esi;
    eax = ebp + -36;
    esi = ebx + 0x68;
    edi = ebp + -36;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0043C014(); /* call 0x0043C014 */

loc_0043CAF9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043CB85; /* jne: not equal / not zero */

loc_0043CB03: ;
    ecx = MEM32(ebp + -20);
    MEM32(ebx + 0x74) = MEM32(ebx + 0x74) & eax;
    MEM32(ebx + 0x60) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(ebx + 0x64) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(ebx + 0x70) = ecx;
    goto loc_0043CB85;

loc_0043CB1A: ;
    PUSH32(esp, ebx);
    MEM32(ebx + 0xF98) = esi;
    PUSH32(esp, 0); sub_0043BEE4(); /* call 0x0043BEE4 */

loc_0043CB26: ;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -36;
    esi = ebx + 0x68;
    edi = ebp + -36;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0043C014(); /* call 0x0043C014 */

loc_0043CB3D: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0043CB85; /* jne: not equal / not zero */

loc_0043CB47: ;
    eax = MEM32(ebx + 0x7C);
    esi = MEM32(ebp + -16);
    PUSH32(esp, 0x20);
    edx = esi + eax;
    POP32(esp, ecx);
    if (CMP_A(edx, ecx)) goto loc_0043CB80; /* ja: above (unsigned >) */

loc_0043CB57: ;
    eax = MEM32(ebp + -20);
    edi = MEM32(ebx + 0x78);
    ecx = ecx - esi;
    eax = eax << LO8(ecx);
    MEM32(ebx + 0x7C) = edx;
    eax = eax >> LO8(ecx);
    ecx = esi;
    edi = edi << LO8(ecx);
    eax = eax | edi;
    MEM32(ebx + 0x78) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebx + 0x70) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebx + 0x74) = eax;
    eax = MEM32(ebp + 0x14);
    goto loc_0043CB85;

loc_0043CB80: ;
    eax = 0x80004005u;

loc_0043CB85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0043CB8A
 * Original: 0x0043CB8A - 0x0043CC74 (234 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CB8A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043CB8A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ebx) = edi;
    (void)0; /* cmp MEM32(esi + 0x54), edi - flags set for next jcc */
    MEM16(esi + 0xCE) = LO16(edi);
    if (CMP_LE(MEM32(esi + 0x54), edi)) goto loc_0043CC60; /* jle: less or equal (signed <=) */

loc_0043CBAA: ;
    if (CMP_NE(MEM32(esi + 0x7C), edi)) goto loc_0043CBDD; /* jne: not equal / not zero */

loc_0043CBAF: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043BFB9(); /* call 0x0043BFB9 */

loc_0043CBBC: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(eax, edi)) goto loc_0043CC69; /* jne: not equal / not zero */

loc_0043CBC6: ;
    eax = MEM32(ebp + 8);
    if (CMP_NE(eax, edi)) goto loc_0043CBD7; /* jne: not equal / not zero */

loc_0043CBCD: ;
    eax = 0x80040004u;
    goto loc_0043CC69;

loc_0043CBD7: ;
    MEM32(esi + 0xB8) = MEM32(esi + 0xB8) + eax;

loc_0043CBDD: ;
    edx = MEM32(esi + 0x7C);
    if (CMP_BE(edx, edi)) goto loc_0043CC59; /* jbe: below or equal (unsigned <=) */

loc_0043CBE4: ;
    eax = MEM32(esi + 0x78);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    ecx = ecx - edx;
    eax = eax << LO8(ecx);
    eax = eax >> 0x1F;
    edx--;
    (void)0; /* cmp MEM32(esi + 0x48), edi - flags set for next jcc */
    MEM32(esi + 0x7C) = edx;
    if (CMP_EQ(MEM32(esi + 0x48), edi)) goto loc_0043CC06; /* je: equal / zero */

loc_0043CBFA: ;
    ecx = SX16(LO16(eax));
    MEM32(esi + 0xC0) = ecx;
    MEM32(esi + 0x48) = edi;

loc_0043CC06: ;
    if (CMP_NE(LO16(eax), LO16(edi))) goto loc_0043CC46; /* jne: not equal / not zero */

loc_0043CC0B: ;
    ebx = 0; /* xor self */
    ebx++;
    (void)0; /* cmp MEM32(esi + 0x30), edi - flags set for next jcc */
    MEM32(esi + 0x2C) = 2;
    if (CMP_NE(MEM32(esi + 0x30), edi)) goto loc_0043CC38; /* jne: not equal / not zero */

loc_0043CC1A: ;
    (void)0; /* cmp MEM32(esi + 0xF5C), edi - flags set for next jcc */
    MEM32(esi + 0x28) = 8;
    MEM32(esi + 0xC4) = ebx;
    if (CMP_EQ(MEM32(esi + 0xF5C), edi)) goto loc_0043CC3E; /* je: equal / zero */

loc_0043CC2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043BD2A(); /* call 0x0043BD2A */

loc_0043CC35: ;
    POP32(esp, ecx);
    goto loc_0043CC3E;

loc_0043CC38: ;
    MEM32(esi + 0xC4) = edi;

loc_0043CC3E: ;
    MEM32(esi + 0x30) = ebx;
    ebx = MEM32(ebp + 0xC);
    goto loc_0043CC50;

loc_0043CC46: ;
    MEM32(esi + 0x2C) = 1;
    MEM32(esi + 0x30) = edi;

loc_0043CC50: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    MEM32(ebx) = edi;
    eax = 0; /* xor self */
    goto loc_0043CC6F;

loc_0043CC59: ;
    eax = 0x80004005u;
    goto loc_0043CC69;

loc_0043CC60: ;
    PUSH32(esp, 4);
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x7C) = edi;
    POP32(esp, eax);

loc_0043CC69: ;
    MEM32(ebx) = 1;

loc_0043CC6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CC74
 * Original: 0x0043CC74 - 0x0043CD77 (259 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CC74(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043CC74: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0x7C);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 0x80004005u;
    if (CMP_BE(edx & edx, 0)) goto loc_0043CCF8; /* jbe: below or equal (unsigned <=) */

loc_0043CC90: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    if (CMP_BE(edx, ecx)) goto loc_0043CCA2; /* jbe: below or equal (unsigned <=) */

loc_0043CC9B: ;
    eax = edi;
    goto loc_0043CD72;

loc_0043CCA2: ;
    eax = MEM32(esi + 0x78);
    ebx = MEM32(ebp + 0x10);
    ecx = ecx - edx;
    eax = eax << LO8(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = eax;
    ecx = ecx >> 0x18;
    MEM8(ebp + 8) = LO8(ecx);
    ecx = eax;
    ecx = ecx >> 0x10;
    MEM8(ebp + 9) = LO8(ecx);
    ecx = eax;
    MEM8(ebp + 0xB) = LO8(eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ecx >> 8;
    PUSH32(esp, esi);
    MEM8(ebp + 0xA) = LO8(ecx);
    PUSH32(esp, 0); sub_00448B44(); /* call 0x00448B44 */

loc_0043CCD7: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, edi)) goto loc_0043CD1E; /* je: equal / zero */

loc_0043CCDE: ;
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) - ecx;
    ecx = MEM32(esi + 0x6C);
    ecx = ecx - MEM32(esi + 0x74);
    ecx = ecx << 3;
    MEM32(esi + 0xB8) = ecx;
    if (CMP_NE(MEM32(ebx), 0)) goto loc_0043CD3B; /* jne: not equal / not zero */

loc_0043CCF8: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi + 0x6C);
    eax = eax << 3;
    PUSH32(esp, eax);
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    ebx = esi + 0x68;
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00448B44(); /* call 0x00448B44 */

loc_0043CD14: ;
    esp = esp + 0x14;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(eax, edi)) goto loc_0043CD22; /* jne: not equal / not zero */

loc_0043CD1E: ;
    eax = edi;
    goto loc_0043CD72;

loc_0043CD22: ;
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043C014(); /* call 0x0043C014 */

loc_0043CD2F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043CD69; /* jne: not equal / not zero */

loc_0043CD35: ;
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);

loc_0043CD3B: ;
    ecx = MEM32(esi + 0x6C);
    ecx = ecx << 3;
    if (CMP_NE(MEM32(esi + 0xB8), ecx)) goto loc_0043CD55; /* jne: not equal / not zero */

loc_0043CD49: ;
    if (CMP_NE(MEM32(ebx), 0)) goto loc_0043CD55; /* jne: not equal / not zero */

loc_0043CD4E: ;
    eax = 0x80040004u;
    goto loc_0043CD69;

loc_0043CD55: ;
    if (TEST_NZ(eax, eax)) goto loc_0043CD5E; /* jne: not equal / not zero */

loc_0043CD59: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & eax;
    goto loc_0043CD69;

loc_0043CD5E: ;
    ecx = 0x80040004u;
    if (CMP_NE(eax, ecx)) goto loc_0043CD69; /* jne: not equal / not zero */

loc_0043CD67: ;
    eax = ecx;

loc_0043CD69: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = 1;

loc_0043CD72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0043CD77
 * Original: 0x0043CD77 - 0x0043CDFE (135 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CD77(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043CD77: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(edi) = MEM32(edi) & 0;
    eax = ZX16(MEM16(esi + 0xCC));
    if (CMP_AE(MEM32(esi + 0x7C), eax)) goto loc_0043CDB8; /* jae: above or equal (unsigned >=) */

loc_0043CD91: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043BFB9(); /* call 0x0043BFB9 */

loc_0043CD9E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043CDF4; /* jne: not equal / not zero */

loc_0043CDA4: ;
    eax = MEM32(ebp + 8);
    if (TEST_NZ(eax, eax)) goto loc_0043CDB2; /* jne: not equal / not zero */

loc_0043CDAB: ;
    eax = 0x80040004u;
    goto loc_0043CDF4;

loc_0043CDB2: ;
    MEM32(esi + 0xB8) = MEM32(esi + 0xB8) + eax;

loc_0043CDB8: ;
    edx = ZX16(MEM16(esi + 0xCC));
    eax = MEM32(esi + 0x7C);
    if (CMP_B(eax, edx)) goto loc_0043CDEF; /* jb: below (unsigned <) */

loc_0043CDC6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x78);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    ecx = ecx - eax;
    ebx = ebx << LO8(ecx);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    ecx = ecx - edx;
    ebx = ebx >> LO8(ecx);
    eax = eax - edx;
    MEM32(esi + 0x7C) = eax;
    ebx = ebx << 5;
    MEM16(esi + 0xCE) = LO16(ebx);
    MEM32(edi) = MEM32(edi) & 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    goto loc_0043CDFA;

loc_0043CDEF: ;
    eax = 0x80004005u;

loc_0043CDF4: ;
    MEM32(edi) = 1;

loc_0043CDFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CDFE
 * Original: 0x0043CDFE - 0x0043CE5C (94 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CDFE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043CDFE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = edi + 0x68;
    if (CMP_NE(MEM32(esi + 0x14), 0)) goto loc_0043CE32; /* jne: not equal / not zero */

loc_0043CE0F: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043BFB9(); /* call 0x0043BFB9 */

loc_0043CE19: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0043CE58; /* jne: not equal / not zero */

loc_0043CE1F: ;
    ecx = MEM32(ebp + 8);
    if (TEST_NZ(ecx, ecx)) goto loc_0043CE2D; /* jne: not equal / not zero */

loc_0043CE26: ;
    eax = 0x80040004u;
    goto loc_0043CE58;

loc_0043CE2D: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) + ecx;

loc_0043CE32: ;
    eax = MEM32(esi + 0x14);
    if (CMP_BE(eax & eax, 0)) goto loc_0043CE53; /* jbe: below or equal (unsigned <=) */

loc_0043CE39: ;
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    ecx = ecx - eax;
    eax = MEM32(esi + 0x10);
    eax = eax << LO8(ecx);
    eax = eax >> 0x1F;
    MEM32(edi + 0xC8) = eax;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) - 1;
    eax = 0; /* xor self */
    goto loc_0043CE58;

loc_0043CE53: ;
    eax = 0x80004005u;

loc_0043CE58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0043CE5C
 * Original: 0x0043CE5C - 0x0043CEDA (126 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CE5C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043CE5C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if (CMP_L(MEM32(ebx + 0x58), 0)) { sub_0043CEDA(); return; } /* jl: less (signed <) */

loc_0043CE6C: ;
    eax = MEM32(ebx + 0xB8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    MEM32(ebp + 8) = eax;
    POP32(esp, ecx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -36;
    esi = ebx + 0x68;
    edi = ebp + -36;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0043C014(); /* call 0x0043C014 */

loc_0043CE8F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) { sub_0043CEDA(); return; } /* jne: not equal / not zero */

loc_0043CE97: ;
    eax = MEM32(ebx + 0xB8);
    if (CMP_NE(MEM32(ebp + 8), eax)) { sub_0043CEDA(); return; } /* jne: not equal / not zero */

loc_0043CEA2: ;
    eax = MEM32(ebp + -24);
    MEM32(ebx + 0x74) = eax;
    eax = MEM32(ebx + 0x58);
    if (CMP_LE(eax & eax, 0)) goto loc_0043CEB5; /* jle: less or equal (signed <=) */

loc_0043CEAF: ;
    eax--;
    MEM32(ebx + 0x58) = eax;
    goto loc_0043CED6;

loc_0043CEB5: ;
    eax = MEM32(ebx + 0x60);
    MEM32(ebx + 0x5C) = MEM32(ebx + 0x5C) & 0;
    MEM32(ebx + 0x88) = MEM32(ebx + 0x88) & 0;
    MEM32(ebx + 0x78) = eax;
    eax = MEM32(ebx + 0x64);
    MEM32(ebx + 0x7C) = eax;
    MEM32(ebx + 0xF9C) = 1;

loc_0043CED6: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0043CEDF(); return; /* tail jmp 0x0043CEDF */

}

/**
 * sub_0043CEE2
 * Original: 0x0043CEE2 - 0x0043CEF8 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CEE2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043CEE2: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(ebx, esi)) { sub_0043CEF8(); return; } /* jne: not equal / not zero */

loc_0043CEEE: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0043CF98(); return; /* tail jmp 0x0043CF98 */

}

/**
 * sub_0043CF9D
 * Original: 0x0043CF9D - 0x0043CFB1 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CF9D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043CF9D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_NZ(edi, edi)) { sub_0043CFB1(); return; } /* jne: not equal / not zero */

loc_0043CFA7: ;
    eax = 0x80070057u;
    g_seh_ebp = ebp; sub_0043D089(); return; /* tail jmp 0x0043D089 */

}

/**
 * sub_0043D08E
 * Original: 0x0043D08E - 0x0043D0B6 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D08E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043D08E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi) = MEM32(edi) & 0;
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043CDFE(); /* call 0x0043CDFE */

loc_0043D0A8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(eax & eax, 0)) { sub_0043D0B6(); return; } /* jge: greater or equal (signed >=) */

loc_0043D0AE: ;
    MEM32(edi) = 1;
    g_seh_ebp = ebp; sub_0043D0E0(); return; /* tail jmp 0x0043D0E0 */

}

/**
 * sub_0043D0E3
 * Original: 0x0043D0E3 - 0x0043D32F (588 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D0E3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043D0E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ebx;
    if (CMP_EQ(esi, ebx)) goto loc_0043D320; /* je: equal / zero */

loc_0043D0FC: ;
    edi = MEM32(ebp + 0xC);
    if (CMP_EQ(edi, ebx)) goto loc_0043D320; /* je: equal / zero */

loc_0043D107: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(edi) = ebx;
    PUSH32(esp, 0); sub_0043BEA6(); /* call 0x0043BEA6 */

loc_0043D110: ;
    (void)0; /* cmp MEM32(edi), ebx - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_A(MEM32(edi), ebx)) goto loc_0043D327; /* ja: above (unsigned >) */

loc_0043D11A: ;
    eax = MEM32(esi + 0x2C);
    eax = eax - ebx;
    if ((eax == 0)) goto loc_0043D2AB; /* je: equal / zero */

loc_0043D125: ;
    eax--;
    if ((eax == 0)) goto loc_0043D265; /* je: equal / zero */

loc_0043D12C: ;
    eax--;
    if ((eax == 0)) goto loc_0043D259; /* je: equal / zero */

loc_0043D133: ;
    eax--;
    if ((eax == 0)) goto loc_0043D22C; /* je: equal / zero */

loc_0043D13A: ;
    eax--;
    if ((eax != 0)) goto loc_0043D11A; /* jne: not equal / not zero */

loc_0043D13D: ;
    eax = MEM32(esi + 0xFAC);
    if (CMP_EQ(eax, ebx)) goto loc_0043D2F2; /* je: equal / zero */

loc_0043D14B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x88));
    ecx = esi + 0x84;
    PUSH32(esp, ecx);
    ecx = esi + 0x7C;
    PUSH32(esp, ecx);
    ecx = esi + 0x80;
    PUSH32(esp, ecx);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    ecx = esi + 0x6C;
    PUSH32(esp, ecx);
    ecx = esi + 0x74;
    PUSH32(esp, ecx);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    ecx = esi + 0xF64;
    PUSH32(esp, ecx);
    ecx = esi + 0xF60;
    PUSH32(esp, ecx);
    ecx = ebp + -2;
    PUSH32(esp, ecx);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x28), 8 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(esi + 0x28), 8)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    ecx = ebp + 0xA;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0xF5C));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0043D1A3: ;
    MEM32(ebp + -8) = eax;
    eax = ZX16(MEM16(ebp + 0xA));
    esp = esp + 0x40;
    (void)0; /* cmp MEM32(ebp + -12), ebx - flags set for next jcc */
    MEM32(edi) = eax;
    if (CMP_EQ(MEM32(ebp + -12), ebx)) goto loc_0043D1D8; /* je: equal / zero */

loc_0043D1B4: ;
    (void)0; /* cmp MEM32(esi + 0x4C), ebx - flags set for next jcc */
    MEM32(esi + 0x2C) = ebx;
    if (CMP_EQ(MEM32(esi + 0x4C), ebx)) goto loc_0043D1D8; /* je: equal / zero */

loc_0043D1BC: ;
    if (CMP_NE(MEM32(esi + 0xF98), ebx)) goto loc_0043D220; /* jne: not equal / not zero */

loc_0043D1C4: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esi + 0xF90) = eax;
    MEM32(esi + 0xF94) = edx;
    MEM32(esi + 0x4C) = ebx;

loc_0043D1D8: ;
    eax = MEM32(edi);
    MEM32(esi + 0xF6C) = eax;
    SET_LO16(eax, MEM16(esi + 0xCE));
    if (CMP_BE(LO16(eax), LO16(ebx))) goto loc_0043D1F5; /* jbe: below or equal (unsigned <=) */

loc_0043D1EC: ;
    if (CMP_BE(MEM32(edi), ebx)) goto loc_0043D1F5; /* jbe: below or equal (unsigned <=) */

loc_0043D1F0: ;
    eax = ZX16(LO16(eax));
    MEM32(edi) = eax;

loc_0043D1F5: ;
    if (CMP_EQ(MEM32(esi + 0xFA0), ebx)) goto loc_0043D2F9; /* je: equal / zero */

loc_0043D201: ;
    if (CMP_EQ(MEM32(esi + 0xF98), ebx)) goto loc_0043D2F9; /* je: equal / zero */

loc_0043D20D: ;
    edi = MEM32(edi);
    if (CMP_BE(edi, ebx)) goto loc_0043D2F9; /* jbe: below or equal (unsigned <=) */

loc_0043D217: ;
    if (CMP_EQ(MEM32(esi + 0x4C), ebx)) goto loc_0043D2D9; /* je: equal / zero */

loc_0043D220: ;
    MEM32(ebp + -8) = 0x80004005u;
    goto loc_0043D327;

loc_0043D22C: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043CD77(); /* call 0x0043CD77 */

loc_0043D236: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -8) = eax;
    if (CMP_L(eax, ebx)) goto loc_0043D327; /* jl: less (signed <) */

loc_0043D243: ;
    if (CMP_EQ(MEM32(ebp + -4), 1)) goto loc_0043D327; /* je: equal / zero */

loc_0043D24D: ;
    MEM32(esi + 0x2C) = 4;
    goto loc_0043D11A;

loc_0043D259: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043D08E(); /* call 0x0043D08E */

loc_0043D263: ;
    goto loc_0043D2C4;

loc_0043D265: ;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043CC74(); /* call 0x0043CC74 */

loc_0043D270: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_L(eax, ebx)) goto loc_0043D327; /* jl: less (signed <) */

loc_0043D27E: ;
    if (CMP_EQ(MEM32(esi + 0xFA0), ebx)) goto loc_0043D2CD; /* je: equal / zero */

loc_0043D286: ;
    if (CMP_EQ(MEM32(esi + 0xF98), ebx)) goto loc_0043D2CD; /* je: equal / zero */

loc_0043D28E: ;
    eax = MEM32(edi);
    if (CMP_BE(eax, ebx)) goto loc_0043D2CD; /* jbe: below or equal (unsigned <=) */

loc_0043D294: ;
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esi + 0xF90) = eax;
    MEM32(esi + 0xF94) = edx;
    MEM32(esi + 0xF98) = ebx;
    goto loc_0043D2CD;

loc_0043D2AB: ;
    if (CMP_EQ(MEM32(esi + 0xF9C), ebx)) goto loc_0043D2BA; /* je: equal / zero */

loc_0043D2B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043BEE4(); /* call 0x0043BEE4 */

loc_0043D2B9: ;
    POP32(esp, ecx);

loc_0043D2BA: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043CB8A(); /* call 0x0043CB8A */

loc_0043D2C4: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -8) = eax;
    if (CMP_L(eax, ebx)) goto loc_0043D327; /* jl: less (signed <) */

loc_0043D2CD: ;
    if (CMP_NE(MEM32(ebp + -4), 1)) goto loc_0043D11A; /* jne: not equal / not zero */

loc_0043D2D7: ;
    goto loc_0043D327;

loc_0043D2D9: ;
    eax = edi;
    eax = (uint32_t)(-(int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esi + 0xF90) = eax;
    MEM32(esi + 0xF94) = edx;
    MEM32(esi + 0xF98) = ebx;
    goto loc_0043D2F9;

loc_0043D2F2: ;
    MEM32(ebp + -8) = 0x80004005u;

loc_0043D2F9: ;
    if (CMP_L(MEM32(ebp + -8), ebx)) goto loc_0043D327; /* jl: less (signed <) */

loc_0043D2FE: ;
    if (CMP_EQ(MEM32(esi + 0x5C), ebx)) goto loc_0043D30F; /* je: equal / zero */

loc_0043D303: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043CE5C(); /* call 0x0043CE5C */

loc_0043D309: ;
    POP32(esp, ecx);
    MEM32(ebp + -8) = eax;
    goto loc_0043D327;

loc_0043D30F: ;
    eax = MEM32(esi + 0x6C);
    eax = eax - MEM32(esi + 0x74);
    eax = eax << 3;
    MEM32(esi + 0xB8) = eax;
    goto loc_0043D327;

loc_0043D320: ;
    MEM32(ebp + -8) = 0x80070057u;

loc_0043D327: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0043D32F
 * Original: 0x0043D32F - 0x0043D4CE (415 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D32F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043D32F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(esi, ebx)) { sub_0043D4CE(); return; } /* je: equal / zero */

loc_0043D345: ;
    eax = MEM32(ebp + 0x24);
    if (CMP_EQ(eax, ebx)) { sub_0043D4CE(); return; } /* je: equal / zero */

loc_0043D350: ;
    ecx = MEM32(ebp + 0x14);
    if (CMP_EQ(ecx, ebx)) { sub_0043D4CE(); return; } /* je: equal / zero */

loc_0043D35B: ;
    (void)0; /* cmp MEM32(ebp + 0x18), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(eax) = ebx;
    if (CMP_EQ(MEM32(ebp + 0x18), ebx)) goto loc_0043D3BB; /* je: equal / zero */

loc_0043D363: ;
    eax = MEM32(esi + 0x28);
    edi = 0; /* xor self */
    edi++;
    if (CMP_EQ(eax, edi)) goto loc_0043D37A; /* je: equal / zero */

loc_0043D36D: ;
    if (CMP_EQ(eax, 3)) goto loc_0043D37A; /* je: equal / zero */

loc_0043D372: ;
    if (CMP_EQ(eax, 6)) goto loc_0043D37A; /* je: equal / zero */

loc_0043D377: ;
    MEM32(esi + 0x28) = edi;

loc_0043D37A: ;
    edx = MEM32(ebp + 0x20);
    if (CMP_L(edx, MEM32(esi + 0xF84))) goto loc_0043D3A6; /* jl: less (signed <) */

loc_0043D385: ;
    eax = MEM32(ebp + 0x1C);
    if (CMP_G(edx, MEM32(esi + 0xF84))) goto loc_0043D392; /* jg: greater (signed >) */

loc_0043D38A: ;
    if (CMP_BE(eax, MEM32(esi + 0xF80))) goto loc_0043D3A6; /* jbe: below or equal (unsigned <=) */

loc_0043D392: ;
    MEM32(esi + 0xFA0) = edi;
    MEM32(esi + 0xF88) = eax;
    MEM32(esi + 0xF8C) = edx;
    goto loc_0043D3AC;

loc_0043D3A6: ;
    MEM32(esi + 0xFA0) = ebx;

loc_0043D3AC: ;
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1;
    eax = MEM32(esi + 0x50);
    if (CMP_BE(eax, 0xFFFFFFFFu)) goto loc_0043D3BB; /* jbe: below or equal (unsigned <=) */

loc_0043D3B7: ;
    MEM32(esi + 0x50) = MEM32(esi + 0x50) | 0xFFFFFFFFu;

loc_0043D3BB: ;
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    edx = esi + 0x68;
    edi = esi + 0xB8;
    MEM32(edi) = MEM32(edi) & 0;
    MEM32(edx) = ebx;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = eax;
    MEM32(ecx) = MEM32(ecx) & 0;
    ecx = MEM32(esi + 0xBC);
    if (TEST_Z(ecx, ecx)) goto loc_0043D412; /* je: equal / zero */

loc_0043D3E5: ;
    eax = MEM32(esi + 0x6C);
    eax = eax << 3;
    if (CMP_AE(ecx, eax)) goto loc_0043D3F1; /* jae: above or equal (unsigned >=) */

loc_0043D3EF: ;
    eax = ecx;

loc_0043D3F1: ;
    MEM32(edi) = MEM32(edi) + eax;
    ecx = ecx - eax;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esi + 0xBC) = ecx;
    PUSH32(esp, 0); sub_0043C014(); /* call 0x0043C014 */

loc_0043D402: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0043D4BD; /* jne: not equal / not zero */

loc_0043D40F: ;
    eax = MEM32(ebp + 0x10);

loc_0043D412: ;
    ecx = MEM32(esi + 0x28);
    if (CMP_EQ(ecx, 1)) goto loc_0043D439; /* je: equal / zero */

loc_0043D41A: ;
    if (CMP_EQ(ecx, 3)) goto loc_0043D439; /* je: equal / zero */

loc_0043D41F: ;
    if (CMP_EQ(ecx, 5)) goto loc_0043D460; /* je: equal / zero */

loc_0043D424: ;
    if (CMP_EQ(ecx, 6)) goto loc_0043D439; /* je: equal / zero */

loc_0043D429: ;
    if (CMP_LE(ecx, 6)) goto loc_0043D4BD; /* jle: less or equal (signed <=) */

loc_0043D42F: ;
    if (CMP_LE(ecx, 8)) goto loc_0043D460; /* jle: less or equal (signed <=) */

loc_0043D434: ;
    goto loc_0043D4BD;

loc_0043D439: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043C9B8(); /* call 0x0043C9B8 */

loc_0043D445: ;
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_0043D4BD; /* jl: less (signed <) */

loc_0043D44F: ;
    if (CMP_EQ(MEM32(esi + 0x44), 0)) goto loc_0043D460; /* je: equal / zero */

loc_0043D455: ;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) & 0;
    MEM32(esi + 0x28) = 8;

loc_0043D460: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043D0E3(); /* call 0x0043D0E3 */

loc_0043D469: ;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) & 0;
    (void)0; /* cmp eax, 0x80040004u - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_NE(eax, 0x80040004u)) goto loc_0043D48F; /* jne: not equal / not zero */

loc_0043D479: ;
    if (CMP_NE(MEM32(esi + 0x28), 8)) goto loc_0043D486; /* jne: not equal / not zero */

loc_0043D47F: ;
    MEM32(esi + 0x44) = 1;

loc_0043D486: ;
    MEM32(esi + 0x28) = 5;
    goto loc_0043D4BD;

loc_0043D48F: ;
    if (CMP_NE(eax, 0x80040002u)) goto loc_0043D4A2; /* jne: not equal / not zero */

loc_0043D496: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043C1B7(); /* call 0x0043C1B7 */

loc_0043D49C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    goto loc_0043D4BD;

loc_0043D4A2: ;
    if (CMP_NE(eax, 4)) goto loc_0043D4B6; /* jne: not equal / not zero */

loc_0043D4A7: ;
    if (CMP_NE(MEM32(esi + 0x28), 8)) goto loc_0043D4BD; /* jne: not equal / not zero */

loc_0043D4AD: ;
    MEM32(esi + 0x44) = 1;
    goto loc_0043D4BD;

loc_0043D4B6: ;
    MEM32(esi + 0x28) = 7;

loc_0043D4BD: ;
    eax = MEM32(esi + 0x6C);
    eax = eax - MEM32(esi + 0x74);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0043D4D3(); return; /* tail jmp 0x0043D4D3 */

}

/**
 * sub_0043D4E0
 * Original: 0x0043D4E0 - 0x0043D4FA (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D4E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043D4E0: ;
    esp = esp - 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    esi = 0; /* xor self */
    if (TEST_NZ(edi, edi)) { sub_0043D4FA(); return; } /* jne: not equal / not zero */

loc_0043D4EF: ;
    POP32(esp, edi);
    eax = 0x19FB;
    POP32(esp, esi);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_0043D540
 * Original: 0x0043D540 - 0x0043D5A9 (105 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D540(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043D540: ;
    esp = esp - 0x18;
    ecx = MEM32(esp + 0x24);
    SET_LO16(eax, MEM16(esp + 0x2C));
    edx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ecx;
    ecx = ZX16(MEM16(esp + 0x34));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM16(esp + 0xC) = LO16(eax);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 8) = eax;
    MEM32(edi + 0x3C) = 0;
    MEM32(edi + 0x40) = ecx;
    esi = 0x562CC0;
    /* nop */

loc_0043D580: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    eax = ZX8(MEM8(edi));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00448F60(); /* call 0x00448F60 */

loc_0043D592: ;
    esi = esi + 2;
    esp = esp + 0xC;
    edi = edi + 4;
    if (CMP_L(esi, 0x562CE2)) goto loc_0043D580; /* jl: less (signed <) */

loc_0043D5A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0043D5B0
 * Original: 0x0043D5B0 - 0x0043D620 (112 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D5B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043D5B0: ;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(esp + 0x2C));
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    MEM16(esp + 0xC) = LO16(eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0xC) = eax;
    edi = ebx;
    esi = 0x562CC0;

loc_0043D5E3: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00449000(); /* call 0x00449000 */

loc_0043D5F6: ;
    ecx = ZX8(MEM8(esp + 0x44));
    MEM32(edi) = ecx;
    esi = esi + 2;
    esp = esp + 0xC;
    edi = edi + 4;
    if (CMP_L(esi, 0x562CE2)) goto loc_0043D5E3; /* jl: less (signed <) */

loc_0043D60E: ;
    SET_LO16(edx, MEM16(ebx + 0x40));
    eax = MEM32(esp + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax) = LO16(edx);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0043D620
 * Original: 0x0043D620 - 0x0043D6D0 (176 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D620(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043D620: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    edx = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    ebp = ebx + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00449700(); /* call 0x00449700 */

loc_0043D640: ;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00449750(); /* call 0x00449750 */

loc_0043D656: ;
    edx = MEM32(ebx + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00449660(); /* call 0x00449660 */

loc_0043D65F: ;
    PUSH32(esp, eax);
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0); sub_004496C0(); /* call 0x004496C0 */

loc_0043D668: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    eax = MEM32(ebp);
    MEMF(ebx + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004496F0(); /* call 0x004496F0 */

loc_0043D685: ;
    MEMF(ebx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(ebx + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0043E980(); /* call 0x0043E980 */

loc_0043D690: ;
    MEM32(edi) = eax;
    eax = ebx + 0x54;
    esi = eax;
    edi = ebx + 0x84;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = MEM32(ebp);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, 0xC);
    ecx = ecx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004491C0(); /* call 0x004491C0 */

loc_0043D6B8: ;
    edx = MEM32(ebp);
    eax = MEM32(esp + 0x60);
    esp = esp + 0x48;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x38) = edx;
    ecx = MEM32(ebx + 0x28);
    POP32(esp, ebp);
    MEM32(eax + 0x3C) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043D6D0
 * Original: 0x0043D6D0 - 0x0043D756 (134 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D6D0(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043D6D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0043E820(); /* call 0x0043E820 */

loc_0043D6E3: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0043E830(); /* call 0x0043E830 */

loc_0043D6ED: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x20);
    ecx = MEM32(ebx + 4);
    edi = esi + 0x2C;
    PUSH32(esp, edi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00449750(); /* call 0x00449750 */

loc_0043D70B: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004496C0(); /* call 0x004496C0 */

loc_0043D714: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fst */
    eax = MEM32(edi);
    MEMF(esi + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004496F0(); /* call 0x004496F0 */

loc_0043D72E: ;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043E9A0(); /* call 0x0043E9A0 */

loc_0043D738: ;
    MEMF(esi + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    esi = esi + 0x54;
    PUSH32(esp, esi);
    ebx = ebx + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00449480(); /* call 0x00449480 */

loc_0043D74D: ;
    esp = esp + 0x40;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043D760
 * Original: 0x0043D760 - 0x0043D786 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D760(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043D760: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8008);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0043D76E: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    esp = esp + 8;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(eax) = esi;
    if (CMP_NE(esi, edi)) { sub_0043D786(); return; } /* jne: not equal / not zero */

loc_0043D77F: ;
    POP32(esp, edi);
    SET_LO16(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043D840
 * Original: 0x0043D840 - 0x0043D89B (91 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D840(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043D840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_0043D896; /* je: equal / zero */

loc_0043D84B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0044AC50(); /* call 0x0044AC50 */

loc_0043D851: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044ABC0(); /* call 0x0044ABC0 */

loc_0043D85A: ;
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0044A640(); /* call 0x0044A640 */

loc_0043D863: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044A480(); /* call 0x0044A480 */

loc_0043D86C: ;
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044A0A0(); /* call 0x0044A0A0 */

loc_0043D875: ;
    edx = MEM32(esi + 0x48);
    PUSH32(esp, 0x8009);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0043D883: ;
    PUSH32(esp, 0x8008);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0043D88E: ;
    esp = esp + 0x24;
    PUSH32(esp, 0); sub_00449CF0(); /* call 0x00449CF0 */

loc_0043D896: ;
    SET_LO16(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043D8A0
 * Original: 0x0043D8A0 - 0x0043D922 (130 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D8A0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0043D8A0: ;
    esp = esp - 0x808;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x91);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044AD20(); /* call 0x0044AD20 */

loc_0043D8BA: ;
    PUSH32(esp, 0x123);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, 0x562CE8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044AE50(); /* call 0x0044AE50 */

loc_0043D8D1: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x123);
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00449DC0(); /* call 0x00449DC0 */

loc_0043D8E3: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0x83C);
    PUSH32(esp, 9);
    ecx = esp + 0x30;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, 0x123);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0044ADB0(); /* call 0x0044ADB0 */

loc_0043D906: ;
    eax = MEM32(esp + 0x848);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044A740(); /* call 0x0044A740 */

loc_0043D918: ;
    esp = esp + 0x44;
    esp = esp + 0x808;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043D930
 * Original: 0x0043D930 - 0x0043D9CE (158 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D930(void)
{

loc_0043D930: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x414;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044B220(); /* call 0x0044B220 */

loc_0043D941: ;
    edx = MEM32(esp + 0x424);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x91);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00449E90(); /* call 0x00449E90 */

loc_0043D95C: ;
    ecx = MEM32(esp + 0x444);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(ecx) = eax;
    PUSH32(esp, esi);
    eax = eax + 0x91;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0044AD20(); /* call 0x0044AD20 */

loc_0043D977: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40000000);
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044B1A0(); /* call 0x0044B1A0 */

loc_0043D98A: ;
    edx = esp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0044B160(); /* call 0x0044B160 */

loc_0043D995: ;
    esp = esp + 0x40;
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044ADB0(); /* call 0x0044ADB0 */

loc_0043D9A6: ;
    ecx = MEM32(esp + 0x434);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0044AF40(); /* call 0x0044AF40 */

loc_0043D9BA: ;
    edx = MEM32(esp + 0x448);
    esp = esp + 0x20;
    MEM32(edx) = esi;
    POP32(esp, esi);
    esp = esp + 0x414;
    esp += 4; return; /* ret */

}

/**
 * sub_0043D9D0
 * Original: 0x0043D9D0 - 0x0043DCA1 (721 bytes, 211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D9D0(void)
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

loc_0043D9D0: ;
    esp = esp - 0xFC0;
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xFD8);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    ecx = 0x64;
    edi = esp + 0x20;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x64;
    edi = esp + 0x1B0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1B4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xFE0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xFE0);
    ecx = esp + 0x34C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = 0x3F800000;
    ebp = esi + 0x28;
    PUSH32(esp, 0); sub_0044BED0(); /* call 0x0044BED0 */

loc_0043DA3C: ;
    edx = MEM32(esp + 0x34);
    fp_push(MEMF(0x6496EC)); /* fld float */
    ecx = esp + 0x358;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    eax = esp + 0x1C8;
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x36C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0044BD10(); /* call 0x0044BD10 */

loc_0043DA75: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    edx = esp + 0x1E4;
    PUSH32(esp, edx);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    edx = esp + 0x384;
    PUSH32(esp, edx);
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044B440(); /* call 0x0044B440 */

loc_0043DA9D: ;
    esp = esp + 0x4C;
    PUSH32(esp, 0x100);
    ecx = esp + 0x344;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0044B9E0(); /* call 0x0044B9E0 */

loc_0043DAB3: ;
    eax = MEM32(ebx + 0x44);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0043DB8B; /* je: equal / zero */

loc_0043DAC1: ;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(MEM16(eax + 0x40), 0)) goto loc_0043DADE; /* jne: not equal / not zero */

loc_0043DACC: ;
    if (CMP_NE(MEM16(eax + 0x42), 0)) goto loc_0043DADE; /* jne: not equal / not zero */

loc_0043DAD3: ;
    if (CMP_EQ(MEM16(eax + 0x44), 0)) goto loc_0043DB8B; /* je: equal / zero */

loc_0043DADE: ;
    fp_push(MEMF(eax + 0x38)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648f30] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0043DAFA; /* jp: parity */

loc_0043DAF2: ;
    MEM32(esp + 0xC) = 0x3F800000;

loc_0043DAFA: ;
    edx = esp + 0x1B0;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x34C;
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0044B910(); /* call 0x0044B910 */

loc_0043DB1B: ;
    esp = esp + 0x14;
    MEM32(esp + 0x10) = 0;
    esi = esp + 0xBCC;
    edi = 0x100;

loc_0043DB32: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0043DB3F: ;
    (void)0; /* cmp LO16(eax), 0x100 - flags set for next jcc */
    ecx = SX16(LO16(eax));
    edx = MEM32(esp + ecx * 4 + 0x340);
    MEM32(esi) = edx;
    if (CMP_GE(LO16(eax), 0x100)) goto loc_0043DB57; /* jge: greater or equal (signed >=) */

loc_0043DB51: ;
    eax = edx;
    MEM32(esi) = eax;
    goto loc_0043DB60;

loc_0043DB57: ;
    ecx = MEM32(esp + 0x73C);
    MEM32(esi) = ecx;

loc_0043DB60: ;
    edx = MEM32(esp + 0x10);
    edx++;
    esi = esi + 4;
    edi--;
    MEM32(esp + 0x10) = edx;
    if ((edi != 0)) goto loc_0043DB32; /* jne: not equal / not zero */

loc_0043DB6F: ;
    ecx = 0x100;
    esi = esp + 0xBCC;
    edi = esp + 0x340;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0xFDC);

loc_0043DB8B: ;
    edx = esp + 0x1B0;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    edi = esi + 0x50;
    PUSH32(esp, edi);
    ecx = esp + 0x34C;
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044B910(); /* call 0x0044B910 */

loc_0043DBAB: ;
    eax = MEM32(ebx + 0x44);
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_0043DBC2; /* je: equal / zero */

loc_0043DBB5: ;
    fp_push(MEMF(edi)); /* fld float */
    edx = MEM32(esp + 0x14);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(edx + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0043DBC2: ;
    eax = esi + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0x1B4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_0044B8B0(); /* call 0x0044B8B0 */

loc_0043DBD5: ;
    edi = MEM32(esp + 0xFEC);
    eax = MEM32(esp + 0xFF0);
    ecx = MEM32(esp + 0xFDC);
    edx = esp + 0x74C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = eax + 0x91;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044AD20(); /* call 0x0044AD20 */

loc_0043DBFF: ;
    edx = esp + 0x75C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40000000);
    eax = edx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044B1A0(); /* call 0x0044B1A0 */

loc_0043DC15: ;
    ecx = esp + 0x76C;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044B160(); /* call 0x0044B160 */

loc_0043DC23: ;
    edx = MEM32(esp + 0x1020);
    eax = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x780;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044B730(); /* call 0x0044B730 */

loc_0043DC3F: ;
    /* fstp st(0) */
    edx = MEM32(ebx + 0x34);
    eax = MEM32(ebp);
    ecx = MEM32(ebx + 0x30);
    esp = esp + 0x48;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xFF4);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044B360(); /* call 0x0044B360 */

loc_0043DC63: ;
    MEMF(ebp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, 0xC);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0044A4B0(); /* call 0x0044A4B0 */

loc_0043DC77: ;
    ecx = MEM32(esp + 0x100C);
    eax = SX16(LO16(eax));
    esp = esp + 0x24;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(ecx) = eax;
    if (CMP_NE(eax, 1)) goto loc_0043DC97; /* jne: not equal / not zero */

loc_0043DC8B: ;
    fp_push(MEMF(ebp)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp) = (float)fp_top(); fp_popp(); /* fstp */

loc_0043DC97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xFC0;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043DCB0
 * Original: 0x0043DCB0 - 0x0043DCBF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DCB0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0043DCB0: ;
    if (CMP_EQ(MEM16(eax + 0x44), 0)) { sub_0043DCBF(); return; } /* je: equal / zero */

loc_0043DCB7: ;
    fp_push(MEMF(eax + 0x50)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043DD20
 * Original: 0x0043DD20 - 0x0043DD64 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DD20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043DD20: ;
    esp = esp - 0xC1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC30);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC30);
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x20);
    ebx = MEM32(esi);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    if (TEST_NZ(eax, ecx)) { sub_0043DD64(); return; } /* jne: not equal / not zero */

loc_0043DD55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO16(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DEA0
 * Original: 0x0043DEA0 - 0x0043E02A (394 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DEA0(void)
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

loc_0043DEA0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = 0x3F800000;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM16(ecx + 0x40) = LO16(esi);
    MEM16(ecx + 0x42) = LO16(esi);
    MEM16(ecx + 0x44) = LO16(esi);
    MEM32(ecx + 0x50) = esi;
    MEM32(ecx + 0x48) = esi;
    MEM32(ecx + 0x4C) = esi;
    fp_push(MEMF(edx + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    PUSH32(esp, edi);
    edi = 1;
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0043DF26; /* jne: not equal / not zero */

loc_0043DEE1: ;
    MEM16(ecx + 0x40) = LO16(edi);
    fp_push(MEMF(edx + 4)); /* fld float */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0043DF0E; /* jp: parity */

loc_0043DF04: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648D10)); /* fld float */
    goto loc_0043DF23;

loc_0043DF0E: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x6492e4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0043DF23; /* jne: not equal / not zero */

loc_0043DF1B: ;
    /* fstp st(0) */
    fp_push(MEMF(0x6492E4)); /* fld float */

loc_0043DF23: ;
    MEMF(ecx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */

loc_0043DF26: ;
    fp_push(MEMF(edx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0043DF79; /* jne: not equal / not zero */

loc_0043DF35: ;
    MEM16(ecx + 0x40) = LO16(edi);
    fp_push(MEMF(edx)); /* fld float */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648e58] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0043DF61; /* jp: parity */

loc_0043DF57: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648E58)); /* fld float */
    goto loc_0043DF76;

loc_0043DF61: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0043DF76; /* jne: not equal / not zero */

loc_0043DF6E: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648CF0)); /* fld float */

loc_0043DF76: ;
    MEMF(ecx + 0x38) = (float)fp_top(); fp_popp(); /* fstp */

loc_0043DF79: ;
    fp_push(MEMF(edx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0043DFD1; /* jne: not equal / not zero */

loc_0043DF89: ;
    MEM32(ecx + 0x4C) = esi;
    fp_push(MEMF(edx + 0xC)); /* fld float */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648f08] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0043DFB5; /* jp: parity */

loc_0043DFAB: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648F08)); /* fld float */
    goto loc_0043DFCA;

loc_0043DFB5: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x562f38] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0043DFCA; /* jne: not equal / not zero */

loc_0043DFC2: ;
    /* fstp st(0) */
    fp_push(MEMF(0x562F38)); /* fld float */

loc_0043DFCA: ;
    MEMF(ecx + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(ecx + 0x42) = LO16(edi);

loc_0043DFD1: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_0043E024; /* jne: not equal / not zero */

loc_0043DFE1: ;
    eax = MEM32(edx + 8);
    MEM32(ecx + 0x50) = eax;
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf8] */
    MEM16(ecx + 0x44) = LO16(edi);
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0043E00C; /* jp: parity */

loc_0043DFFB: ;
    /* fstp st(0) */
    POP32(esp, edi);
    fp_push(MEMF(0x648CF8)); /* fld float */
    SET_LO16(eax, 0); /* xor self */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0043E00C: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648d14] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0043E021; /* jne: not equal / not zero */

loc_0043E019: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648D14)); /* fld float */

loc_0043E021: ;
    MEMF(ecx + 0x50) = (float)fp_top(); fp_popp(); /* fstp */

loc_0043E024: ;
    POP32(esp, edi);
    SET_LO16(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043E030
 * Original: 0x0043E030 - 0x0043E09C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E030(void)
{

loc_0043E030: ;
    eax = MEM32(esp + 8);
    SET_LO16(edx, MEM16(eax + 0x42));
    ecx = MEM32(esp + 4);
    MEM16(ecx + 0x42) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x44));
    MEM16(ecx + 0x44) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x40));
    MEM16(ecx + 0x40) = LO16(edx);
    edx = MEM32(eax + 0x38);
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0x48);
    MEM32(ecx + 0x48) = edx;
    edx = MEM32(eax + 0x4C);
    MEM32(ecx + 0x4C) = edx;
    eax = MEM32(eax + 0x50);
    MEM32(ecx + 0x50) = eax;
    SET_LO16(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0043E0A0
 * Original: 0x0043E0A0 - 0x0043E135 (149 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E0A0(void)
{

loc_0043E0A0: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(eax));
    ecx = MEM32(esp + 8);
    MEM16(ecx) = LO16(edx);
    edx = ZX16(MEM16(eax));
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 8));
    edi = edi + edx;
    edx = edi + esi;
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x38);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x3C);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x24) = edx;
    SET_LO16(edx, MEM16(eax + 0x40));
    MEM16(ecx + 0x34) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x42));
    MEM16(ecx + 0x36) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x44));
    MEM16(ecx + 0x38) = LO16(edx);
    edx = MEM32(eax + 0x50);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 0x4C);
    MEM32(ecx + 0x40) = edx;
    eax = MEM32(eax + 0x48);
    POP32(esp, edi);
    MEM32(ecx + 0x3C) = eax;
    SET_LO16(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E140
 * Original: 0x0043E140 - 0x0043E1E2 (162 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E140(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E140: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    SET_LO16(esi, MEM16(edx));
    MEM16(ecx) = LO16(esi);
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    esi = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(edx + 0x10);
    MEM32(ecx + 0x10) = esi;
    esi = MEM32(edx + 0x14);
    MEM32(ecx + 0x38) = esi;
    esi = MEM32(edx + 0x18);
    MEM32(ecx + 0x3C) = esi;
    esi = MEM32(edx + 0x28);
    MEM32(ecx + 0x20) = esi;
    esi = MEM32(edx + 0x30);
    MEM32(ecx + 0x28) = esi;
    esi = MEM32(edx + 0x2C);
    MEM32(ecx + 0x24) = esi;
    esi = MEM32(edx + 0x1C);
    MEM32(ecx + 0x14) = esi;
    esi = MEM32(edx + 0x20);
    MEM32(ecx + 0x18) = esi;
    esi = MEM32(edx + 0x24);
    MEM32(ecx + 0x1C) = esi;
    SET_LO16(esi, MEM16(edx + 0x34));
    MEM16(ecx + 0x40) = LO16(esi);
    SET_LO16(esi, MEM16(edx + 0x36));
    MEM16(ecx + 0x42) = LO16(esi);
    SET_LO16(esi, MEM16(edx + 0x38));
    MEM16(ecx + 0x44) = LO16(esi);
    esi = MEM32(edx + 0x44);
    MEM32(ecx + 0x50) = esi;
    esi = MEM32(edx + 0x40);
    MEM32(ecx + 0x4C) = esi;
    esi = MEM32(edx + 0x3C);
    MEM32(ecx + 0x48) = esi;
    esi = ZX16(MEM16(ecx));
    edi = ZX16(MEM16(ecx + 0xA));
    ecx = ZX16(MEM16(ecx + 8));
    ecx = ecx + esi;
    esi = MEM32(edx + 4);
    ecx = ecx + edi;
    eax = 0; /* xor self */
    POP32(esp, edi);
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(ecx, esi)) goto loc_0043E1E1; /* je: equal / zero */

loc_0043E1DC: ;
    eax = 0x19CA;

loc_0043E1E1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E1F0
 * Original: 0x0043E1F0 - 0x0043E230 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E1F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043E1F0: ;
    edx = MEM32(esp + 4);
    (void)0; /* cmp MEM32(edx), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(edx), 0)) { sub_0043E230(); return; } /* jne: not equal / not zero */

loc_0043E200: ;
    eax = MEM32(edx + 8);
    MEM32(ebx + 0x50) = eax;
    MEM32(ebx + 0x28) = 0x42FA0000;
    MEM32(ebx) = 0x42FA0000;
    MEM32(ebx + 0x2C) = 0;
    MEM32(ebx + 4) = 0;
    esi = MEM32(edx + 0xC);
    edi = ebx + 0x54;
    ecx = 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    g_seh_ebp = ebp; sub_0043E282(); return; /* tail jmp 0x0043E282 */

}

/**
 * sub_0043E2E0
 * Original: 0x0043E2E0 - 0x0043E318 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E2E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E2E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x800B);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0043E2ED: ;
    ebx = eax;
    eax = MEM32(esp + 0x10);
    esp = esp + 8;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(eax) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_0043E312; /* je: equal / zero */

loc_0043E2FC: ;
    PUSH32(esp, 0x800C);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0043E308: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0xC) = eax;
    if (TEST_NZ(eax, eax)) { sub_0043E318(); return; } /* jne: not equal / not zero */

loc_0043E312: ;
    SET_LO16(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E350
 * Original: 0x0043E350 - 0x0043E37E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E350(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E350: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0043E379; /* je: equal / zero */

loc_0043E35B: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x800C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0043E369: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x800B);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0043E376: ;
    esp = esp + 0x10;

loc_0043E379: ;
    SET_LO16(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E380
 * Original: 0x0043E380 - 0x0043E387 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E380(void)
{

loc_0043E380: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E390
 * Original: 0x0043E390 - 0x0043E3AA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E390(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E390: ;
    eax = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_0043E3A9; /* jne: not equal / not zero */

loc_0043E398: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_0043E3A9; /* jne: not equal / not zero */

loc_0043E3A3: ;
    MEM32(eax) = 0;

loc_0043E3A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E3B0
 * Original: 0x0043E3B0 - 0x0043E3D5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E3B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E3B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8005);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0); sub_0043E910(); /* call 0x0043E910 */

loc_0043E3C0: ;
    esi = eax;
    eax = MEM32(esp + 0x10);
    esp = esp + 8;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(eax) = esi;
    if (TEST_NZ(esi, esi)) { sub_0043E3D5(); return; } /* jne: not equal / not zero */

loc_0043E3CF: ;
    SET_LO16(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E4C0
 * Original: 0x0043E4C0 - 0x0043E524 (100 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E4C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E4C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_0043E51A; /* je: equal / zero */

loc_0043E4CB: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x8002);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0043E4D9: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0x8003);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0043E4E7: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044C250(); /* call 0x0044C250 */

loc_0043E4F0: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x8004);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0043E4FE: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0x8004);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0043E50C: ;
    PUSH32(esp, 0x8005);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043E950(); /* call 0x0043E950 */

loc_0043E517: ;
    esp = esp + 0x2C;

loc_0043E51A: ;
    PUSH32(esp, 0); sub_00449CF0(); /* call 0x00449CF0 */

loc_0043E51F: ;
    SET_LO16(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E530
 * Original: 0x0043E530 - 0x0043E57E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E530(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E530: ;
    ecx = MEM32(eax + 0x60);
    edx = 0; /* xor self */
    if (CMP_EQ(ecx, edx)) goto loc_0043E57D; /* je: equal / zero */

loc_0043E539: ;
    ecx = MEM32(eax + 0x58);
    MEM32(eax + 0x5C) = ecx;
    ecx = MEM32(eax + 0x6C);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(eax + 0x70) = ecx;
    if (CMP_NE(ecx, edx)) goto loc_0043E558; /* jne: not equal / not zero */

loc_0043E549: ;
    if (CMP_EQ(MEM32(eax + 0x78), edx)) goto loc_0043E553; /* je: equal / zero */

loc_0043E54E: ;
    if (CMP_EQ(MEM32(eax + 0x74), edx)) goto loc_0043E558; /* je: equal / zero */

loc_0043E553: ;
    MEM32(eax + 0x7C) = edx;
    goto loc_0043E55F;

loc_0043E558: ;
    MEM32(eax + 0x7C) = 1;

loc_0043E55F: ;
    if (CMP_EQ(MEM32(eax + 0x74), edx)) goto loc_0043E571; /* je: equal / zero */

loc_0043E564: ;
    MEM32(eax + 0x78) = MEM32(eax + 0x78) + 1;
    MEM32(eax + 0x6C) = edx;
    MEM32(eax + 0x74) = edx;
    MEM32(eax + 0x60) = edx;
    esp += 4; return; /* ret */

loc_0043E571: ;
    MEM32(eax + 0x78) = edx;
    MEM32(eax + 0x6C) = edx;
    MEM32(eax + 0x74) = edx;
    MEM32(eax + 0x60) = edx;

loc_0043E57D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E580
 * Original: 0x0043E580 - 0x0043E5E0 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E580(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E580: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x60);
    ecx = 0; /* xor self */
    if (CMP_EQ(esi, ecx)) goto loc_0043E5DE; /* je: equal / zero */

loc_0043E58A: ;
    esi = MEM32(eax + 0x8C);
    MEM32(eax + 0x84) = esi;
    esi = MEM32(eax + 0x90);
    MEM32(eax + 0x88) = esi;
    esi = MEM32(esp + 8);
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x90) = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1C);
    ecx = 0x41;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x10);
    edi = MEM32(eax + 0x20);
    ecx = 0x41;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = edx + 0x28;
    edi = eax + 0x28;
    ecx = 0xA;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(edx);
    MEM32(eax + 0x24) = ecx;
    POP32(esp, edi);

loc_0043E5DE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E5E0
 * Original: 0x0043E5E0 - 0x0043E6AD (205 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E5E0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043E5E0: ;
    esp = esp - 0x210;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x220);
    PUSH32(esp, edi);
    eax = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_0043E530(); /* call 0x0043E530 */

loc_0043E600: ;
    ebp = MEM32(esp + 0x22C);
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    ebx = esi + 0x14;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0044C940(); /* call 0x0044C940 */

loc_0043E618: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x244);
    ecx = MEM32(esp + 0x240);
    edi = MEM32(esp + 0x234);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x50);
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x134;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0044CBF0(); /* call 0x0044CBF0 */

loc_0043E650: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0044CAB0(); /* call 0x0044CAB0 */

loc_0043E66E: ;
    ecx = MEM32(esp + 0x26C);
    edx = MEM32(esp + 0x4C);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044C980(); /* call 0x0044C980 */

loc_0043E686: ;
    esp = esp + 0x50;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x120;
    PUSH32(esp, edx);
    edx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_0043E580(); /* call 0x0043E580 */

loc_0043E69F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E6B0
 * Original: 0x0043E6B0 - 0x0043E720 (112 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E6B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E6B0: ;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(esp + 0x28));
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    (void)0; /* cmp ebx, 8 - flags set for next jcc */
    MEM16(esp + 8) = LO16(eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 8) = eax;
    if (CMP_B(ebx, 8)) goto loc_0043E708; /* jb: below (unsigned <) */

loc_0043E6E4: ;
    PUSH32(esp, edi);
    edi = ebx;
    edi = edi >> 3;
    /* nop */

loc_0043E6F0: ;
    PUSH32(esp, 8);
    ecx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00449000(); /* call 0x00449000 */

loc_0043E6FD: ;
    esp = esp + 0xC;
    esi++;
    ebx = ebx - 8;
    edi--;
    if ((edi != 0)) goto loc_0043E6F0; /* jne: not equal / not zero */

loc_0043E707: ;
    POP32(esp, edi);

loc_0043E708: ;
    edx = SX16(LO16(ebx));
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00449000(); /* call 0x00449000 */

loc_0043E717: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E720
 * Original: 0x0043E720 - 0x0043E732 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043E720: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (TEST_NZ(eax, eax)) { sub_0043E732(); return; } /* jne: not equal / not zero */

loc_0043E72B: ;
    eax = 0x181A;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E810
 * Original: 0x0043E810 - 0x0043E818 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E810(void)
{

loc_0043E810: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x60));
    esp += 4; return; /* ret */

}

/**
 * sub_0043E820
 * Original: 0x0043E820 - 0x0043E828 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E820(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0043E820: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043E830
 * Original: 0x0043E830 - 0x0043E838 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E830(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0043E830: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043E840
 * Original: 0x0043E840 - 0x0043E851 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E840(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E840: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    if (CMP_NE(eax, ecx)) { sub_0043E851(); return; } /* jne: not equal / not zero */

loc_0043E84C: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E910
 * Original: 0x0043E910 - 0x0043E943 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E910(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E910: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax | 0x21890000;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0043E925: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_0043E93F; /* je: equal / zero */

loc_0043E92B: ;
    PUSH32(esp, edi);
    ecx = esi;
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

loc_0043E93F: ;
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E950
 * Original: 0x0043E950 - 0x0043E97A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E950(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E950: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0043E979; /* je: equal / zero */

loc_0043E958: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0043E96D; /* je: equal / zero */

loc_0043E960: ;
    eax = eax | 0x21890000;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0043E96C: ;
    esp += 4; return; /* ret */

loc_0043E96D: ;
    eax = 0x21892000;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0043E979: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E980
 * Original: 0x0043E980 - 0x0043E995 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E980(void)
{

loc_0043E980: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x562F80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044CC90(); /* call 0x0044CC90 */

loc_0043E991: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E9A0
 * Original: 0x0043E9A0 - 0x0043E9B5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E9A0(void)
{

loc_0043E9A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x562F80);
    PUSH32(esp, 0); sub_0044CD90(); /* call 0x0044CD90 */

loc_0043E9B1: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E9B5
 * Original: 0x0043E9B5 - 0x0043E9EA (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E9B5(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043E9B5: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    PUSH32(esp, esi);

loc_0043E9BA: ;
    ecx = ZX16(LO16(edx));
    ecx = ecx + ecx * 2;
    ecx = ecx * 4 + 0x5636C0;
    esi = MEM32(ecx);
    if (CMP_NE(esi, MEM32(esp + 8))) goto loc_0043E9D9; /* jne: not equal / not zero */

loc_0043E9CF: ;
    esi = ZX16(MEM16(ecx + 4));
    if (CMP_EQ(esi, MEM32(esp + 0xC))) goto loc_0043E9E2; /* je: equal / zero */

loc_0043E9D9: ;
    ecx = 0; /* xor self */
    edx++;
    if (CMP_B(LO16(edx), 4)) goto loc_0043E9BA; /* jb: below (unsigned <) */

loc_0043E9E2: ;
    if (TEST_NZ(ecx, ecx)) { sub_0043E9EA(); return; } /* jne: not equal / not zero */

loc_0043E9E6: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EA20
 * Original: 0x0043EA20 - 0x0043EA60 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EA20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043EA20: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 0x1F40 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_EQ(ecx, 0x1F40)) { sub_0043EA60(); return; } /* je: equal / zero */

loc_0043EA2F: ;
    if (CMP_EQ(ecx, 0x2B11)) goto loc_0043EA57; /* je: equal / zero */

loc_0043EA37: ;
    if (CMP_EQ(ecx, 0x3E80)) goto loc_0043EA50; /* je: equal / zero */

loc_0043EA3F: ;
    if (CMP_EQ(ecx, 0x5622)) goto loc_0043EA49; /* je: equal / zero */

loc_0043EA47: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0043EA49: ;
    edx = 0x5632F8;
    goto loc_0043EA5C;

loc_0043EA50: ;
    edx = 0x563288;
    g_seh_ebp = ebp; sub_0043EA65(); return; /* tail jmp 0x0043EA65 */

loc_0043EA57: ;
    edx = 0x563250;

loc_0043EA5C: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_0043EA67(); return; /* tail jmp 0x0043EA67 */

}

/**
 * sub_0043EAAB
 * Original: 0x0043EAAB - 0x0043EAEB (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EAAB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043EAAB: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 0x1F40 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_EQ(ecx, 0x1F40)) { sub_0043EAEB(); return; } /* je: equal / zero */

loc_0043EABA: ;
    if (CMP_EQ(ecx, 0x2B11)) goto loc_0043EAE2; /* je: equal / zero */

loc_0043EAC2: ;
    if (CMP_EQ(ecx, 0x3E80)) goto loc_0043EADB; /* je: equal / zero */

loc_0043EACA: ;
    if (CMP_EQ(ecx, 0x5622)) goto loc_0043EAD4; /* je: equal / zero */

loc_0043EAD2: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0043EAD4: ;
    edx = 0x563628;
    goto loc_0043EAE7;

loc_0043EADB: ;
    edx = 0x5634F8;
    g_seh_ebp = ebp; sub_0043EAF0(); return; /* tail jmp 0x0043EAF0 */

loc_0043EAE2: ;
    edx = 0x563460;

loc_0043EAE7: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_0043EAF2(); return; /* tail jmp 0x0043EAF2 */

}

/**
 * sub_0043EB36
 * Original: 0x0043EB36 - 0x0043EB59 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EB36(void)
{
    int _cf = 0; /* carry flag */

loc_0043EB36: ;
    eax = MEM32(esp + 4);
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0xC);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = eax + ecx;
    edx = edx + esi + _cf; /* adc */
    PUSH32(esp, esi);
    eax = eax - 1;
    PUSH32(esp, ecx);
    edx = edx - esi - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0043EB57: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EB59
 * Original: 0x0043EB59 - 0x0043EB71 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EB59(void)
{

loc_0043EB59: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EB71
 * Original: 0x0043EB71 - 0x0043ECA5 (308 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EB71(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0043EB71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    ecx++;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ebx;
    edi = ecx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -24) = ecx;

loc_0043EB91: ;
    eax = ZX16(MEM16(ebp + -8));
    edx = MEM32(ebp + 8);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = eax + eax * 2;
    eax = eax * 4 + 0x5636C0;
    if (TEST_Z(edx, edx)) goto loc_0043EBB2; /* je: equal / zero */

loc_0043EBA6: ;
    ebx = MEM32(eax);
    ebx = ebx - MEM32(edx);
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx++;
    MEM32(ebp + -16) = ebx;

loc_0043EBB2: ;
    edx = MEM32(ebp + 0xC);
    if (TEST_Z(edx, edx)) goto loc_0043EBC6; /* je: equal / zero */

loc_0043EBB9: ;
    SET_LO16(edi, MEM16(eax + 4));
    SET_LO16(edi, LO16(edi) - MEM16(edx));
    SET_LO16(edi, (uint32_t)(-(int32_t)LO16(edi)));
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi++;

loc_0043EBC6: ;
    if (TEST_Z(ebx, ebx)) goto loc_0043EC8D; /* je: equal / zero */

loc_0043EBCE: ;
    if (TEST_Z(edi, edi)) goto loc_0043EC8D; /* je: equal / zero */

loc_0043EBD6: ;
    esi = MEM32(eax + 8);
    eax = ZX16(MEM16(eax + 6));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    MEM32(ebp + -28) = eax;
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_0043EC8D; /* jbe: below or equal (unsigned <=) */

loc_0043EBED: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0043EC0E; /* je: equal / zero */

loc_0043EBF4: ;
    edx = ZX16(MEM16(ebp + -4));
    eax = MEM32(eax);
    ebx = 0; /* xor self */
    eax = eax << 3;
    edx = edx << 5;
    (void)0; /* cmp MEM32(edx + esi), eax - flags set for next jcc */
    SET_LO8(ebx, (CMP_EQ(MEM32(edx + esi), eax)) ? 1 : 0); /* sete */
    MEM32(ebp + -20) = ebx;
    ebx = MEM32(ebp + -16);

loc_0043EC0E: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0043EC2A; /* je: equal / zero */

loc_0043EC15: ;
    ecx = ZX16(MEM16(ebp + -4));
    ecx = ecx << 5;
    SET_LO16(ecx, MEM16(ecx + esi + 4));
    SET_LO16(ecx, LO16(ecx) - MEM16(eax));
    SET_LO16(ecx, (uint32_t)(-(int32_t)LO16(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx++;

loc_0043EC2A: ;
    eax = MEM32(ebp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0043EC55; /* je: equal / zero */

loc_0043EC31: ;
    SET_LO16(edx, MEM16(eax));
    if (CMP_B(LO16(edx), 1)) goto loc_0043EC51; /* jb: below (unsigned <) */

loc_0043EC3A: ;
    eax = ZX16(MEM16(ebp + -4));
    eax = eax << 5;
    if (CMP_A(LO16(edx), MEM16(eax + esi + 6))) goto loc_0043EC51; /* ja: above (unsigned >) */

loc_0043EC48: ;
    MEM32(ebp + -12) = 1;
    goto loc_0043EC55;

loc_0043EC51: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_0043EC55: ;
    eax = MEM32(ebp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0043EC67; /* je: equal / zero */

loc_0043EC5C: ;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(eax), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(eax), 1)) ? 1 : 0); /* sete */
    MEM32(ebp + -24) = edx;

loc_0043EC67: ;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + -20), eax)) goto loc_0043EC7C; /* je: equal / zero */

loc_0043EC6E: ;
    if (CMP_EQ(ecx, eax)) goto loc_0043EC7C; /* je: equal / zero */

loc_0043EC72: ;
    if (CMP_EQ(MEM32(ebp + -12), eax)) goto loc_0043EC7C; /* je: equal / zero */

loc_0043EC77: ;
    if (CMP_NE(MEM32(ebp + -24), eax)) { sub_0043ECA5(); return; } /* jne: not equal / not zero */

loc_0043EC7C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    SET_LO16(eax, MEM16(ebp + -28));
    if (CMP_B(MEM16(ebp + -4), LO16(eax))) goto loc_0043EBED; /* jb: below (unsigned <) */

loc_0043EC8D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    if (CMP_B(MEM16(ebp + -8), 4)) goto loc_0043EB91; /* jb: below (unsigned <) */

loc_0043EC9B: ;
    eax = 0x80070057u;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0043ECA9
 * Original: 0x0043ECA9 - 0x0043ECE6 (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043ECA9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043ECA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    (void)0; /* cmp ecx, 0x1F40 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, 0x1F40)) { sub_0043ECE6(); return; } /* je: equal / zero */

loc_0043ECB8: ;
    if (CMP_EQ(ecx, 0x2B11)) goto loc_0043ECE2; /* je: equal / zero */

loc_0043ECC0: ;
    if (CMP_EQ(ecx, 0x3E80)) goto loc_0043ECDE; /* je: equal / zero */

loc_0043ECC8: ;
    if (CMP_EQ(ecx, 0x5622)) goto loc_0043ECD7; /* je: equal / zero */

loc_0043ECD0: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_0043ED50(); return; /* tail jmp 0x0043ED50 */

loc_0043ECD7: ;
    PUSH32(esp, 0x29);
    POP32(esp, eax);
    PUSH32(esp, 6);
    g_seh_ebp = ebp; sub_0043ECEB(); return; /* tail jmp 0x0043ECEB */

loc_0043ECDE: ;
    PUSH32(esp, 0x21);
    g_seh_ebp = ebp; sub_0043ECE8(); return; /* tail jmp 0x0043ECE8 */

loc_0043ECE2: ;
    PUSH32(esp, 0x19);
    g_seh_ebp = ebp; sub_0043ECE8(); return; /* tail jmp 0x0043ECE8 */

}

/**
 * sub_0043ED53
 * Original: 0x0043ED53 - 0x0043ED7A (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043ED53(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043ED53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0043E9B5(); /* call 0x0043E9B5 */

loc_0043ED67: ;
    ebx = eax;
    esp = esp + 0xC;
    if (TEST_NZ(ebx, ebx)) { sub_0043ED7A(); return; } /* jne: not equal / not zero */

loc_0043ED70: ;
    eax = 0x80040000u;
    g_seh_ebp = ebp; sub_0043EF52(); return; /* tail jmp 0x0043EF52 */

}

/**
 * sub_0043EF55
 * Original: 0x0043EF55 - 0x0043F1F4 (671 bytes, 213 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EF55(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0043EF55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0xA;
    PUSH32(esp, edx);
    ebx = esi + 4;
    PUSH32(esp, ebx);
    edi = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043EB71(); /* call 0x0043EB71 */

loc_0043EF7B: ;
    esp = esp + 0x18;
    if (TEST_NZ(eax, eax)) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043EF86: ;
    ecx = ZX16(MEM16(edi));
    ebx = MEM32(ebx);
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043E9B5(); /* call 0x0043E9B5 */

loc_0043EF95: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043F1DC; /* je: equal / zero */

loc_0043EFA3: ;
    PUSH32(esp, MEM32(esi + 0x28));
    edi = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0043EA20(); /* call 0x0043EA20 */

loc_0043EFAF: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043F1DC; /* je: equal / zero */

loc_0043EFBD: ;
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0043EAAB(); /* call 0x0043EAAB */

loc_0043EFC7: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (TEST_Z(eax, eax)) goto loc_0043F1DC; /* je: equal / zero */

loc_0043EFD5: ;
    SET_LO16(ecx, MEM16(esi + 0xA));
    eax = MEM32(ebp + 8);
    if (CMP_NE(LO16(ecx), MEM16(eax + 4))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043EFE6: ;
    ecx = MEM32(eax + 0x18);
    SET_LO16(edi, MEM16(esi + 0x10));
    if (CMP_NE(LO16(edi), MEM16(ecx))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043EFF6: ;
    SET_LO16(ebx, MEM16(esi + 0x12));
    if (CMP_NE(LO16(ebx), MEM16(ecx + 2))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F004: ;
    SET_LO16(edx, MEM16(esi + 0x14));
    if (CMP_NE(LO16(edx), MEM16(ecx + 4))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F012: ;
    SET_LO16(eax, MEM16(esi + 0x16));
    if (CMP_NE(LO16(eax), MEM16(ecx + 6))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F020: ;
    eax = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(eax + 0x14));
    edx = ZX16(LO16(edx));
    ecx = ZX16(LO16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ZX16(LO16(ebx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ZX16(LO16(edi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    if (CMP_NE(MEM32(esi + 0x1C), ecx)) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F045: ;
    if (CMP_NE(MEM16(esi + 0xE), 2)) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F050: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x18));
    (void)0; /* cmp MEM16(esi + 0x20), LO16(ecx) - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(MEM16(esi + 0x20), LO16(ecx))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F063: ;
    if (CMP_A(LO16(ecx), LO16(eax))) { sub_0043F1F4(); return; } /* ja: above (unsigned >) */

loc_0043F06C: ;
    ecx = MEM32(esi + 0x34);
    edi = MEM32(ebp + -4);
    eax = 0; /* xor self */
    eax++;
    edx = ecx;
    edx = edx & eax;
    if (CMP_NE(edx, MEM32(edi + 8))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F082: ;
    edx = ecx;
    edx = edx >> 1;
    edx = edx & eax;
    if (CMP_NE(edx, MEM32(edi + 0xC))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F091: ;
    edx = ecx;
    edx = edx >> 2;
    edx = edx & 0xF;
    if (CMP_NE(LO16(edx), MEM16(edi + 0x10))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F0A3: ;
    edx = ecx;
    edx = edx >> 6;
    edx = edx & eax;
    if (CMP_NE(edx, MEM32(edi + 0x14))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F0B3: ;
    edx = ecx;
    edx = edx >> 7;
    edx = edx & 0xF;
    if (CMP_NE(LO16(edx), MEM16(edi + 0x18))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F0C5: ;
    edx = ecx;
    edx = edx >> 0xB;
    ebx = 0; /* xor self */
    edx = edx & eax;
    (void)0; /* cmp MEM32(esi + 0x28), eax - flags set for next jcc */
    SET_LO8(ebx, (CMP_NE(MEM32(esi + 0x28), eax)) ? 1 : 0); /* setne */
    if (CMP_NE(edx, ebx)) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F0DC: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x1C);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM16(edx), 0x10 - flags set for next jcc */
    ebx = ecx;
    SET_LO8(eax, (CMP_EQ(MEM16(edx), 0x10)) ? 1 : 0); /* sete */
    ebx = ebx >> 0xC;
    ebx = ebx & 1;
    if (CMP_NE(ebx, eax)) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F0FB: ;
    eax = ecx;
    eax = eax >> 0xD;
    eax = eax & 1;
    if (CMP_NE(LO16(eax), MEM16(edx + 0xE))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F10D: ;
    eax = ecx;
    eax = eax >> 0xE;
    eax = eax & 1;
    if (CMP_NE(LO16(eax), MEM16(edx + 0xC))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F11F: ;
    eax = ecx;
    eax = eax >> 0xF;
    eax = eax & 0xF;
    if (CMP_NE(LO16(eax), MEM16(ebp + -8))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F131: ;
    if (TEST_Z(ecx, 0x80000)) { sub_0043F1F4(); return; } /* je: equal / zero */

loc_0043F13D: ;
    if (TEST_Z(ecx, 0x100000)) { sub_0043F1F4(); return; } /* je: equal / zero */

loc_0043F149: ;
    ecx = ecx >> 0x15;
    ecx = ecx & 7;
    if (CMP_NE(LO16(ecx), MEM16(edi + 0x1A))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F159: ;
    edi = MEM32(ebp + -16);
    ebx = 0; /* xor self */
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    edi = edi + 0xA;
    MEM32(ebp + 8) = 0x11;

loc_0043F16E: ;
    eax = ZX16(MEM16(edi));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00443235(); /* call 0x00443235 */

loc_0043F17E: ;
    esp = esp + 0x10;
    ebx = ebx + 3;
    edi = edi + 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_0043F16E; /* jne: not equal / not zero */

loc_0043F18C: ;
    eax = MEM32(esi + 0x38);
    if (CMP_NE(eax, MEM32(ebp + -12))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F194: ;
    eax = MEM32(esi + 0x3C);
    if (CMP_NE(eax, MEM32(ebp + -8))) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F19C: ;
    if (CMP_NE(MEM16(esi + 0x30), 0)) { sub_0043F1F4(); return; } /* jne: not equal / not zero */

loc_0043F1A3: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x28), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(esi + 0x28), 1)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x12));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x18));
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x20));
    eax++;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_0043ECA9(); /* call 0x0043ECA9 */

loc_0043F1D5: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0043F1E3; /* je: equal / zero */

loc_0043F1DC: ;
    eax = 0x80040000u;
    g_seh_ebp = ebp; sub_0043F1F9(); return; /* tail jmp 0x0043F1F9 */

loc_0043F1E3: ;
    eax = MEM32(esi + 0x2C);
    eax = eax - MEM32(ebp + 8);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x80004005u;
    g_seh_ebp = ebp; sub_0043F1F9(); return; /* tail jmp 0x0043F1F9 */

}

/**
 * sub_0043F1FE
 * Original: 0x0043F1FE - 0x0043F21C (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F1FE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043F1FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(ebp + 0x14), edi)) { sub_0043F21C(); return; } /* jne: not equal / not zero */

loc_0043F20E: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = esi;
    g_seh_ebp = ebp; sub_0043F231(); return; /* tail jmp 0x0043F231 */

}

/**
 * sub_0043F3A6
 * Original: 0x0043F3A6 - 0x0043F5C7 (545 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F3A6(void)
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

loc_0043F3A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0x2020;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0043F3B3: ;
    ecx = ZX16(MEM16(ebp + 0xC));
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    if (CMP_A(LO16(eax), 0x400)) { sub_0043F5C7(); return; } /* ja: above (unsigned >) */

loc_0043F3C6: ;
    if (CMP_EQ(LO16(eax), 1)) { sub_0043F5C7(); return; } /* je: equal / zero */

loc_0043F3D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, LO16(eax));
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    eax = 0x400;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO16(esi, LO16(esi) >> 1);
    ebx = ZX16(LO16(esi));
    esi = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -12) = eax;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0043F41C; /* jle: less or equal (signed <=) */

loc_0043F3F9: ;
    eax = 0; /* xor self */

loc_0043F3FB: ;
    edx = esi + eax * 8;
    fp_push(MEMF(edx)); /* fld float */
    eax = eax << 2;
    MEMF(ebp + eax + -6176) = (float)fp_top(); fp_popp(); /* fstp */
    ecx++;
    fp_push(MEMF(edx + 4)); /* fld float */
    MEMF(ebp + eax + -8224) = (float)fp_top(); fp_popp(); /* fstp */
    eax = SX16(LO16(ecx));
    if (CMP_L(eax, ebx)) goto loc_0043F3FB; /* jl: less (signed <) */

loc_0043F41C: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax--;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebp + -8224;
    PUSH32(esp, eax);
    eax = ebp + -6176;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F1FE(); /* call 0x0043F1FE */

loc_0043F437: ;
    esp = esp + 0x10;
    edx = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0043F465; /* jle: less or equal (signed <=) */

loc_0043F440: ;
    eax = 0; /* xor self */

loc_0043F442: ;
    ecx = eax;
    ecx = ecx << 2;
    fp_push(MEMF(ebp + ecx + -6176)); /* fld float */
    eax = esi + eax * 8;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    edx++;
    fp_push(MEMF(ebp + ecx + -8224)); /* fld float */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = SX16(LO16(edx));
    if (CMP_L(eax, ebx)) goto loc_0043F442; /* jl: less (signed <) */

loc_0043F465: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, 2);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    POP32(esp, eax);
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    MEMF(ebp + -4128) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -4124) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + edi * 4 + -4128) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ebp + edi * 4 + -4124) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(ebx, eax)) goto loc_0043F564; /* jle: less or equal (signed <=) */

loc_0043F49B: ;
    fp_push(MEMF(0x648D10)); /* fld float */
    ebx = eax;

loc_0043F4A3: ;
    ecx = edi;
    ecx = ecx - ebx;
    ecx = ecx << 2;
    eax = ecx + esi;
    fp_push(MEMF(eax)); /* fld float */
    edi = ebx;
    edi = edi << 2;
    edx = edi + esi;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(eax)); /* fld float */
    eax = ZX16(MEM16(ebp + -12));
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = SX16(LO16(eax));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax << 3;
    edx = eax + 0x577368;
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    (void)0; /* cmp ebx, MEM32(ebp + -20) - flags set for next jcc */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + edi + -4128) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + edi + -4124) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(ebp + -4);
    /* fld st(4) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + ecx + -4128) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + ecx + -4124) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_L(ebx, MEM32(ebp + -20))) goto loc_0043F4A3; /* jl: less (signed <) */

loc_0043F55F: ;
    ebx = MEM32(ebp + -20);
    /* fstp st(0) */

loc_0043F564: ;
    eax = ZX16(MEM16(ebp + -12));
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx = ebx;
    ecx = ecx << 2;
    eax = SX16(LO16(eax));
    fp_push(MEMF(ecx + esi + 4)); /* fld float */
    /* fld st(0) */
    eax = eax << 3;
    edi = edi + 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + ecx + -4128) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp + ecx + -4124) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0043F5C0; /* jle: less or equal (signed <=) */

loc_0043F5A9: ;
    eax = 0; /* xor self */

loc_0043F5AB: ;
    eax = eax << 2;
    fp_push(MEMF(ebp + eax + -4128)); /* fld float */
    ecx++;
    MEMF(eax + esi) = (float)fp_top(); fp_popp(); /* fstp */
    eax = SX16(LO16(ecx));
    if (CMP_L(eax, edi)) goto loc_0043F5AB; /* jl: less (signed <) */

loc_0043F5C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
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
 * sub_0043F5CE
 * Original: 0x0043F5CE - 0x0043F5E5 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F5CE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0043F5CE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x400;
    if (CMP_EQ(MEM16(ebp + 0x10), 1)) { sub_0043F5E5(); return; } /* je: equal / zero */

loc_0043F5DE: ;
    eax = 0x80070057u;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0043F6BB
 * Original: 0x0043F6BB - 0x0043F6F3 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F6BB(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043F6BB: ;
    eax = MEM32(esp + 8);
    eax = eax | 0x21890000;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0043F6CE: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_0043F6EE; /* je: equal / zero */

loc_0043F6D4: ;
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

loc_0043F6EE: ;
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043F6F3
 * Original: 0x0043F6F3 - 0x0043F71B (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F6F3(void)
{
    int _flags = 0; /* fallback flag var */

loc_0043F6F3: ;
    if (CMP_EQ(MEM32(esp + 4), 0)) goto loc_0043F718; /* je: equal / zero */

loc_0043F6FA: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0043F709; /* je: equal / zero */

loc_0043F702: ;
    eax = eax | 0x21890000;
    goto loc_0043F70E;

loc_0043F709: ;
    eax = 0x21892000;

loc_0043F70E: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0043F718: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043F71B
 * Original: 0x0043F71B - 0x0043F727 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F71B(void)
{

loc_0043F71B: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_0043F6BB(); /* call 0x0043F6BB */

loc_0043F726: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F727
 * Original: 0x0043F727 - 0x0043F733 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F727(void)
{

loc_0043F727: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_0043F6F3(); /* call 0x0043F6F3 */

loc_0043F732: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F733
 * Original: 0x0043F733 - 0x0043F7BA (135 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F733(void)
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

loc_0043F733: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ZX16(MEM16(esi + 4));
    MEM32(ebp + 8) = eax;
    eax = ZX16(MEM16(esi + 6));
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(ebp + 8) = eax;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) + 1;
    eax = MEM32(esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    /* FPU: fidiv dword ptr [ebp + 8] */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    fp_push((double)SMEM32(esi)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0043F764; /* jge: greater or equal (signed >=) */

loc_0043F75E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0043F764: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0043F777: ;
    edx = eax;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_LE(edi, edx)) goto loc_0043F783; /* jle: less or equal (signed <=) */

loc_0043F780: ;
    MEM32(esi + 0x40) = edx;

loc_0043F783: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fstp st(1) */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fstp st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0043F7BA(); return; } /* jne: not equal / not zero */

loc_0043F7AB: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    /* fstp st(1) */
    g_seh_ebp = ebp; sub_0043F7BE(); return; /* tail jmp 0x0043F7BE */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043F8E1
 * Original: 0x0043F8E1 - 0x0043F8F5 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F8E1(void)
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

loc_0043F8E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    if (CMP_GE(eax, 1)) { sub_0043F8F5(); return; } /* jge: greater or equal (signed >=) */

loc_0043F8ED: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
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
 * sub_0043F94F
 * Original: 0x0043F94F - 0x0043F99B (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F94F(void)
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

loc_0043F94F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x18);
    (void)0; /* cmp eax, 0x1F40 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, 0x1F40)) { sub_0043F99B(); return; } /* je: equal / zero */

loc_0043F95F: ;
    if (CMP_EQ(eax, 0x2B11)) goto loc_0043F98E; /* je: equal / zero */

loc_0043F966: ;
    if (CMP_EQ(eax, 0x3E80)) goto loc_0043F981; /* je: equal / zero */

loc_0043F96D: ;
    if (CMP_NE(eax, 0x5622)) { sub_0043F99B(); return; } /* jne: not equal / not zero */

loc_0043F974: ;
    fp_push(MEMF(0x653184)); /* fld float */
    ebx = 0x653174;
    g_seh_ebp = ebp; sub_0043F9A6(); return; /* tail jmp 0x0043F9A6 */

loc_0043F981: ;
    fp_push(MEMF(0x653170)); /* fld float */
    ebx = 0x653160;
    g_seh_ebp = ebp; sub_0043F9A6(); return; /* tail jmp 0x0043F9A6 */

loc_0043F98E: ;
    fp_push(MEMF(0x65315C)); /* fld float */
    ebx = 0x65314C;
    g_seh_ebp = ebp; sub_0043F9A6(); return; /* tail jmp 0x0043F9A6 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043F9FE
 * Original: 0x0043F9FE - 0x0043FAF0 (242 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F9FE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0043F9FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx + 0x6C);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ecx + 0x68);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    MEM32(ebp + -44) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), eax - flags set for next jcc */
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -12) = eax;
    if (CMP_LE(MEM32(ebp + 0x10), eax)) goto loc_0043FA4D; /* jle: less or equal (signed <=) */

loc_0043FA2B: ;
    if (CMP_NE(MEM32(ebp + -12), 0)) goto loc_0043FA3B; /* jne: not equal / not zero */

loc_0043FA31: ;
    ebx = MEM32(ebp + 8);
    fp_push(MEMF(ebx + edi * 4)); /* fld float */
    MEMF(edx + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax++;

loc_0043FA3B: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    if (CMP_NE(MEM32(ebp + -12), esi)) goto loc_0043FA47; /* jne: not equal / not zero */

loc_0043FA43: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_0043FA47: ;
    edi++;
    if (CMP_L(edi, MEM32(ebp + 0x10))) goto loc_0043FA2B; /* jl: less (signed <) */

loc_0043FA4D: ;
    fp_push(0.0); /* fldz */
    MEMF(edx + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = edx + eax * 4 + 4;
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edi = MEM32(ecx + 0x5C);
    MEM32(ebp + -40) = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    if (CMP_LE(eax, edi)) goto loc_0043FA7D; /* jle: less or equal (signed <=) */

loc_0043FA7A: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;

loc_0043FA7D: ;
    ecx = MEM32(ecx + 0x60);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(ebp + -12) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    if (CMP_GE(eax, ecx)) goto loc_0043FA92; /* jge: greater or equal (signed >=) */

loc_0043FA8F: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;

loc_0043FA92: ;
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_0043FA97: ;
    if (TEST_Z(eax, eax)) { sub_0043FAF0(); return; } /* je: equal / zero */

loc_0043FA9B: ;
    eax = MEM32(ebp + -8);
    eax = eax - MEM32(ebp + -12);
    eax++;
    ecx = eax;
    ecx = ecx >> 2;
    if (TEST_Z(eax, 3)) goto loc_0043FAB1; /* je: equal / zero */

loc_0043FAAE: ;
    ecx = ecx + 1;

loc_0043FAB1: ;
    ebx = MEM32(ebp + -12);
    eax = MEM32(ebp + -20);
    edi = eax + ebx * 4;

loc_0043FABA: ;
    xmm7 = 0.0f; /* xorps self = zero */
    esi = MEM32(ebp + 0xC);
    edx = esi + ebx * 4;
    eax = MEM32(ebp + -40);
    eax = eax - ebx;

loc_0043FAC8: ;
    xmm0 = MEMF(edx); /* movups */
    xmm1 = MEMF(esi); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    edx = edx + 4;
    esi = esi + 4;
    eax--;
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    if ((eax != 0)) goto loc_0043FAC8; /* jne: not equal / not zero */

loc_0043FAE2: ;
    MEMF(edi) = xmm7; /* movups */
    edi = edi + 0x10;
    ebx = ebx + 4;
    ecx--;
    if ((ecx != 0)) goto loc_0043FABA; /* jne: not equal / not zero */

loc_0043FAEE: ;
    g_seh_ebp = ebp; sub_0043FB2C(); return; /* tail jmp 0x0043FB2C */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0043FF71
 * Original: 0x0043FF71 - 0x0044070F (1950 bytes, 570 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FF71(void)
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

loc_0043FF71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x24);
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    MEM32(ebp + -24) = eax;
    eax = MEM32(ecx + 0x28);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ecx + 0x2C);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ecx + 0x30);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx + 0x34);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ecx + 0x44);
    MEM32(ebp + -20) = eax;
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648f38] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0043FFC6; /* jp: parity */

loc_0043FFB3: ;
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -20)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(0x648F38)); /* fld float */

loc_0043FFC6: ;
    eax = MEM32(ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    edi = 0; /* xor self */
    POP32(esp, ebx);
    esi = ecx + 0x4C;
    fp_push(MEMF(esi)); /* fld float */
    edi++;
    (void)0; /* cmp eax, 0x1F40 - flags set for next jcc */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e5c] */
    fp_push(MEMF(0x648E64)); /* fld float */
    PUSH32(esp, 2);
    POP32(esp, edx);
    if (CMP_NE(eax, 0x1F40)) goto loc_0044023B; /* jne: not equal / not zero */

loc_0043FFF3: ;
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004400D3; /* jnp: not parity */

loc_0043FFFE: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_0044033B; /* je: equal / zero */

loc_00440011: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004400DA; /* jne: not equal / not zero */

loc_00440028: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563718] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440234; /* je: equal / zero */

loc_00440040: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64a96c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440234; /* je: equal / zero */

loc_00440054: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440078; /* jp: parity */

loc_00440064: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d40] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440192; /* je: equal / zero */

loc_00440078: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044009C; /* jne: not equal / not zero */

loc_00440088: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440682; /* jnp: not parity */

loc_0044009C: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648dd8] */

loc_004400A5: ;
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440682; /* je: equal / zero */

loc_004400B0: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563710] */

loc_004400B9: ;
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004400D3; /* jne: not equal / not zero */

loc_004400C0: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx + 0x54] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440682; /* jnp: not parity */

loc_004400D3: ;
    eax = 0; /* xor self */
    goto loc_00440684;

loc_004400DA: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx + 0x54] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440199; /* jne: not equal / not zero */

loc_004400E8: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440123; /* jne: not equal / not zero */

loc_004400FB: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64a248] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440123; /* jp: parity */

loc_0044010B: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563708] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004403E2; /* jnp: not parity */

loc_00440123: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044015A; /* jp: parity */

loc_00440133: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649d7c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044015A; /* jp: parity */

loc_00440143: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440682; /* je: equal / zero */

loc_0044015A: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649228] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440192; /* je: equal / zero */

loc_0044016A: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf0] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440234; /* jp: parity */

loc_0044017E: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440234; /* jne: not equal / not zero */

loc_00440192: ;
    eax = edx;
    goto loc_00440684;

loc_00440199: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440511; /* jnp: not parity */

loc_004401AD: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d40] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044065A; /* jp: parity */

loc_004401C1: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004401FC; /* jne: not equal / not zero */

loc_004401D4: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64a248] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004401FC; /* jp: parity */

loc_004401E4: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563708] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440682; /* jnp: not parity */

loc_004401FC: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d40] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440192; /* je: equal / zero */

loc_0044020C: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d3c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044061A; /* jp: parity */

loc_00440220: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649b50] */
    /* fnstsw ax - store FPU status word */

loc_0044022B: ;
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440682; /* jne: not equal / not zero */

loc_00440234: ;
    eax = ebx;
    goto loc_00440684;

loc_0044023B: ;
    if (CMP_NE(eax, 0x2B11)) goto loc_00440316; /* jne: not equal / not zero */

loc_00440246: ;
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004400D3; /* jnp: not parity */

loc_00440251: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_0044033B; /* je: equal / zero */

loc_00440264: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440360; /* je: equal / zero */

loc_0044027B: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx + 0x54] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_004400E8; /* je: equal / zero */

loc_00440289: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440511; /* jnp: not parity */

loc_0044029D: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d40] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044065A; /* jp: parity */

loc_004402B1: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004402EC; /* jne: not equal / not zero */

loc_004402C4: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64a248] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004402EC; /* jp: parity */

loc_004402D4: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563708] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440682; /* jnp: not parity */

loc_004402EC: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d40] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044020C; /* jne: not equal / not zero */

loc_00440300: ;
    goto loc_00440192;

loc_00440305: ;
    if (CMP_GE(MEM32(ebp + -8), 3)) goto loc_00440698; /* jge: greater or equal (signed >=) */

loc_0044030F: ;
    ebx = 0; /* xor self */
    goto loc_0044069B;

loc_00440316: ;
    (void)0; /* cmp eax, 0x3E80 - flags set for next jcc */
    /* fnstsw ax - store FPU status word */
    if (CMP_NE(eax, 0x3E80)) goto loc_0044043E; /* jne: not equal / not zero */

loc_00440323: ;
    if (1 /* jnp after test - parity */) goto loc_004400D3; /* jnp: not parity */

loc_0044032C: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440349; /* jne: not equal / not zero */

loc_0044033B: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf4] */
    goto loc_0044045F;

loc_00440349: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004400DA; /* jne: not equal / not zero */

loc_00440360: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563718] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440234; /* je: equal / zero */

loc_00440378: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64a96c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440234; /* je: equal / zero */

loc_0044038C: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004403B0; /* jp: parity */

loc_0044039C: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d40] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440192; /* je: equal / zero */

loc_004403B0: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004403D4; /* jne: not equal / not zero */

loc_004403C0: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440682; /* jnp: not parity */

loc_004403D4: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    goto loc_004400A5;

loc_004403E2: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649228] */
    goto loc_00440501;

loc_004403F0: ;
    /* fstp st(0) */
    PUSH32(esp, 6);
    /* fstp st(0) */
    POP32(esp, ebx);
    /* fstp st(0) */
    g_seh_ebp = ebp; sub_00440712(); return; /* tail jmp 0x00440712 */

loc_004403FE: ;
    /* fstp st(0) */
    ebx = 0; /* xor self */
    /* fstp st(0) */
    /* fstp st(0) */
    g_seh_ebp = ebp; sub_00440712(); return; /* tail jmp 0x00440712 */

loc_0044040B: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563718] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) { sub_0044070F(); return; } /* je: equal / zero */

loc_00440423: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ce0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) { sub_0044070F(); return; } /* je: equal / zero */

loc_00440437: ;
    eax = edi;
    g_seh_ebp = ebp; sub_00440712(); return; /* tail jmp 0x00440712 */

loc_0044043E: ;
    if (1 /* jnp after test - parity */) goto loc_004400D3; /* jnp: not parity */

loc_00440447: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440490; /* jne: not equal / not zero */

loc_00440456: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563700] */

loc_0044045F: ;
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440234; /* je: equal / zero */

loc_0044046A: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563718] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440234; /* je: equal / zero */

loc_00440482: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x5636f8] */
    goto loc_004400B9;

loc_00440490: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440028; /* je: equal / zero */

loc_004404A7: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx + 0x54] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440199; /* jne: not equal / not zero */

loc_004404B5: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440123; /* jne: not equal / not zero */

loc_004404CC: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64a248] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440123; /* jp: parity */

loc_004404E0: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563708] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440123; /* jp: parity */

loc_004404F8: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x5636f0] */

loc_00440501: ;
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440682; /* jnp: not parity */

loc_0044050C: ;
    goto loc_00440192;

loc_00440511: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440546; /* jne: not equal / not zero */

loc_00440524: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx + 0x58] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440546; /* jne: not equal / not zero */

loc_0044052E: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563708] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440682; /* jnp: not parity */

loc_00440546: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64a96c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440234; /* je: equal / zero */

loc_0044055A: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649228] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440192; /* je: equal / zero */

loc_0044056E: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440234; /* je: equal / zero */

loc_00440582: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004405B9; /* jp: parity */

loc_00440592: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648f24] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004405B9; /* jp: parity */

loc_004405A2: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440682; /* je: equal / zero */

loc_004405B9: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004405DD; /* jne: not equal / not zero */

loc_004405C9: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440682; /* jnp: not parity */

loc_004405DD: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d3c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00440234; /* jne: not equal / not zero */

loc_004405F1: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d3c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440234; /* jp: parity */

loc_00440605: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648f24] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440682; /* jnp: not parity */

loc_00440615: ;
    goto loc_00440234;

loc_0044061A: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649228] */
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    /* fnstsw ax - store FPU status word */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649b50] */
    (void)0; /* test HI8(eax), 0x41 - flags set for next jcc */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044022B; /* jne: not equal / not zero */

loc_00440639: ;
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440234; /* je: equal / zero */

loc_00440642: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440682; /* jp: parity */

loc_00440655: ;
    goto loc_00440192;

loc_0044065A: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64a96c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440234; /* je: equal / zero */

loc_0044066E: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e74] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00440192; /* je: equal / zero */

loc_00440682: ;
    eax = edi;

loc_00440684: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(esi);
    MEM32(ebp + -4) = edx;
    edx = eax;
    if (TEST_NZ(eax, eax)) goto loc_004403F0; /* jne: not equal / not zero */

loc_00440693: ;
    goto loc_00440305;

loc_00440698: ;
    ebx = MEM32(ebp + -16);

loc_0044069B: ;
    ebx--;
    if (CMP_LE(ebx & ebx, 0)) goto loc_004403FE; /* jle: less or equal (signed <=) */

loc_004406A4: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esi)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fstp st(0) */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    (void)0; /* test HI8(eax), 5 - flags set for next jcc */
    /* fstp st(0) */
    if (1 /* jnp after test - parity */) goto loc_00440437; /* jnp: not parity */

loc_004406BF: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004406E3; /* jne: not equal / not zero */

loc_004406CF: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648ea8] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00440437; /* jnp: not parity */

loc_004406E3: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044040B; /* jp: parity */

loc_004406F7: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d40] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044040B; /* jne: not equal / not zero */

loc_0044070B: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_00440711(); return; /* tail jmp 0x00440711 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004407C3
 * Original: 0x004407C3 - 0x0044080D (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004407C3(void)
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

loc_004407C3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebp + 0xc] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0044080D(); return; } /* jne: not equal / not zero */

loc_004407D6: ;
    /* FPU: fdivr st(1) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_004407E3: ;
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004407FB; /* jne: not equal / not zero */

loc_004407F7: ;
    /* fld st(1) */
    goto loc_004407FD;

loc_004407FB: ;
    /* fld st(0) */

loc_004407FD: ;
    /* fld st(2) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    /* fld st(1) */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    /* fstp st(3) */
    /* fstp st(0) */
    g_seh_ebp = ebp; sub_00440840(); return; /* tail jmp 0x00440840 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00440844
 * Original: 0x00440844 - 0x004408B2 (110 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440844(void)
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

loc_00440844: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    MEM32(edi) = MEM32(edi) & 0;
    fp_push(MEMF(edx)); /* fld float */
    ecx++;
    if (CMP_LE(MEM32(ebp + 0xC), ecx)) goto loc_004408A5; /* jle: less or equal (signed <=) */

loc_0044085C: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [edx + ecx*4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0044086D; /* jne: not equal / not zero */

loc_00440866: ;
    /* fstp st(0) */
    fp_push(MEMF(edx + ecx * 4)); /* fld float */
    MEM32(edi) = ecx;

loc_0044086D: ;
    ecx++;
    if (CMP_L(ecx, MEM32(ebp + 0xC))) goto loc_0044085C; /* jl: less (signed <) */

loc_00440873: ;
    (void)0; /* cmp MEM32(edi), 0 - flags set for next jcc */
    /* fstp st(0) */
    if (CMP_EQ(MEM32(edi), 0)) goto loc_004408A7; /* je: equal / zero */

loc_0044087A: ;
    esi = MEM32(ebp + 0x14);
    MEM32(esi) = MEM32(esi) & 0;

loc_00440880: ;
    eax = MEM32(esi);
    fp_push(MEMF(edx + eax * 4)); /* fld float */
    ecx = eax + 1;

loc_00440888: ;
    if (CMP_GE(ecx, MEM32(ebp + 0xC))) { sub_004408B2(); return; } /* jge: greater or equal (signed >=) */

loc_0044088D: ;
    if (CMP_EQ(MEM32(edi), ecx)) goto loc_004408A2; /* je: equal / zero */

loc_00440891: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [edx + ecx*4] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004408A2; /* jne: not equal / not zero */

loc_0044089B: ;
    /* fstp st(0) */
    fp_push(MEMF(edx + ecx * 4)); /* fld float */
    MEM32(esi) = ecx;

loc_004408A2: ;
    ecx++;
    goto loc_00440888;

loc_004408A5: ;
    /* fstp st(0) */

loc_004408A7: ;
    esi = MEM32(ebp + 0x14);
    MEM32(esi) = 1;
    goto loc_00440880;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004408B8
 * Original: 0x004408B8 - 0x004408E6 (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004408B8(void)
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

loc_004408B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    fp_push(0.0); /* fldz */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ebx + 0x10;
    fp_push(MEMF(esi)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ebp + 8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_004408E6(); return; } /* jne: not equal / not zero */

loc_004408E2: ;
    fp_push(MEMF(esi)); /* fld float */
    g_seh_ebp = ebp; sub_004408E9(); return; /* tail jmp 0x004408E9 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044097A
 * Original: 0x0044097A - 0x004409D5 (91 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044097A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0044097A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0044098D; /* je: equal / zero */

loc_00440986: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0044098C: ;
    POP32(esp, ecx);

loc_0044098D: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0044099B; /* je: equal / zero */

loc_00440994: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_0044099A: ;
    POP32(esp, ecx);

loc_0044099B: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004409A9; /* je: equal / zero */

loc_004409A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_004409A8: ;
    POP32(esp, ecx);

loc_004409A9: ;
    eax = MEM32(esi + 0x50);
    if (TEST_Z(eax, eax)) goto loc_004409B7; /* je: equal / zero */

loc_004409B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_004409B6: ;
    POP32(esp, ecx);

loc_004409B7: ;
    eax = MEM32(esi + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_004409C5; /* je: equal / zero */

loc_004409BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_004409C4: ;
    POP32(esp, ecx);

loc_004409C5: ;
    esi = MEM32(esi + 0x54);
    if (TEST_Z(esi, esi)) goto loc_004409D3; /* je: equal / zero */

loc_004409CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0043F727(); /* call 0x0043F727 */

loc_004409D2: ;
    POP32(esp, ecx);

loc_004409D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004409D5
 * Original: 0x004409D5 - 0x00440A23 (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004409D5(void)
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

loc_004409D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x10);
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_004409E8; /* jge: greater or equal (signed >=) */

loc_004409E2: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004409E8: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_004409F9: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0x5C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    MEM32(ecx + 0x60) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ecx + 0x64) = eax;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 0x50);
    MEM32(ecx + 0x6C) = edx;
    edx = MEM32(eax + 0x4C);
    MEM32(ecx + 0x68) = edx;
    eax = MEM32(eax + 0x54);
    MEM32(ecx + 0x70) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00440A23
 * Original: 0x00440A23 - 0x00440ABB (152 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440A23(void)
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

loc_00440A23: ;
    PUSH32(esp, ebp);
    ebp = esp;
    SET_LO16(edx, MEM16(ebp + 0x14));
    SET_LO16(ecx, MEM16(ebp + 0x10));
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM16(esi + 4) = LO16(edx);
    edx = ZX16(LO16(edx));
    MEM16(esi + 6) = LO16(ecx);
    MEM32(ebp + 0x10) = edx;
    ecx = ZX16(LO16(ecx));
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEM32(ebp + 0x10) = ecx;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 8) = eax;
    /* FPU: fidiv dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x10) = eax;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi) = eax;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = 0x41F00000;
    MEM32(esi + 0x34) = 0x3DCCCCCD;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00440A8A; /* jge: greater or equal (signed >=) */

loc_00440A84: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00440A8A: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00440A9D: ;
    MEM32(esi + 0x38) = eax;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0043F71B(); /* call 0x0043F71B */

loc_00440AA9: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 0x20) = eax;
    if (CMP_NE(eax, edi)) { sub_00440ABB(); return; } /* jne: not equal / not zero */

loc_00440AB1: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_00440B87(); return; /* tail jmp 0x00440B87 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00440B8B
 * Original: 0x00440B8B - 0x00440C66 (219 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440B8B(void)
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

loc_00440B8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ZX16(MEM16(esi + 6));
    ecx = ZX16(MEM16(esi + 4));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0); sub_00448E10(); /* call 0x00448E10 */

loc_00440BAE: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648d24] */
    esp = esp + 0xC;
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440BC6; /* jp: parity */

loc_00440BBE: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648D24)); /* fld float */

loc_00440BC6: ;
    /* fld st(0) */
    edi = MEM32(ebp + 0x10);
    /* FPU: fldlg2  */
    PUSH32(esp, MEM32(ebp + 8));
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    PUSH32(esp, ebx);
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    MEMF(edi + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0043F8E1(); /* call 0x0043F8E1 */

loc_00440BF9: ;
    eax = 0; /* xor self */
    MEMF(edi + 0x54) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* cmp MEM32(ebp + 8), eax - flags set for next jcc */
    fp_push(0.0); /* fldz */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(MEM32(ebp + 8), eax)) goto loc_00440C21; /* jle: less or equal (signed <=) */

loc_00440C07: ;
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    eax++;
    (void)0; /* cmp eax, MEM32(ebp + 8) - flags set for next jcc */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if (CMP_L(eax, MEM32(ebp + 8))) goto loc_00440C07; /* jl: less (signed <) */

loc_00440C14: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x649284] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440C29; /* jp: parity */

loc_00440C21: ;
    /* fstp st(0) */
    fp_push(MEMF(0x649284)); /* fld float */

loc_00440C29: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fld st(0) */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(edi + 0x58) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(ebp + 8));
    /* fstp st(0) */
    /* fstp st(0) */
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0043F94F(); /* call 0x0043F94F */

loc_00440C4F: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0); sub_0043F9FE(); /* call 0x0043F9FE */

loc_00440C5E: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_00440C66
 * Original: 0x00440C66 - 0x00440CDF (121 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440C66(void)
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

loc_00440C66: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = ZX16(MEM16(ecx + 6));
    ecx = ZX16(MEM16(ecx + 4));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (CMP_LE(eax & eax, 0)) goto loc_00440CDC; /* jle: less or equal (signed <=) */

loc_00440C85: ;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    PUSH32(esp, ebx);
    ebx = edi;
    PUSH32(esp, esi);
    /* FPU: fdivr dword ptr [0x648d14] */
    esi = MEM32(ebp + 0xC);
    ebx = ebx << 2;
    MEM32(ebp + 0x10) = eax;
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */

loc_00440C9E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00448E10(); /* call 0x00448E10 */

loc_00440CA6: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648d24] */
    esp = esp + 0xC;
    esi = esi + ebx;
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440CC0; /* jp: parity */

loc_00440CB8: ;
    /* fstp st(0) */
    fp_push(MEMF(0x648D24)); /* fld float */

loc_00440CC0: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    /* fstp st(0) */
    PUSH32(esp, 0); sub_0043F733(); /* call 0x0043F733 */

loc_00440CD3: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((MEM32(ebp + 0x10) != 0)) goto loc_00440C9E; /* jne: not equal / not zero */

loc_00440CDA: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00440CDC: ;
    POP32(esp, edi);
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
 * sub_00440CDF
 * Original: 0x00440CDF - 0x00440CFF (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440CDF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00440CDF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x46C4);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (TEST_NZ(esi, esi)) { sub_00440CFF(); return; } /* jne: not equal / not zero */

loc_00440CF5: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_00440E8F(); return; /* tail jmp 0x00440E8F */

}

/**
 * sub_00440E93
 * Original: 0x00440E93 - 0x00440EE0 (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440E93(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00440E93: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x46C4);
    PUSH32(esp, 4);
    eax = esi + 0x18;
    edx = esi + 0x5C;
    POP32(esp, ebx);

loc_00440EA9: ;
    ecx = MEM32(edx);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = ecx;
    eax = eax + 4;
    edx = edx + 0x38;
    ebx--;
    if ((ebx != 0)) goto loc_00440EA9; /* jne: not equal / not zero */

loc_00440EB9: ;
    eax = MEM32(edi + 0x9248);
    fp_push((double)SMEM32(edi + 0x9248)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00440ECF; /* jge: greater or equal (signed >=) */

loc_00440EC9: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00440ECF: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00440ED7: ;
    POP32(esp, edi);
    MEM32(esi + 0x54) = eax;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00440EE0
 * Original: 0x00440EE0 - 0x00440FCD (237 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440EE0(void)
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

loc_00440EE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = ZX16(MEM16(ecx + 0xE));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ecx + 0x14));
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    esi = MEM32(ebp + 0x10);
    ebx = MEM32(ecx + 0x4610);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebx + esi + 4);
    esi = MEM32(ebp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(ecx + 0x46C4);
    esi = MEM32(ecx + 0x7154);
    ebx = 0; /* xor self */
    MEM32(ebp + 8) = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x138);
    eax = eax + MEM32(ecx + 0x5930);
    (void)0; /* cmp MEM32(ebp + 0x14), ebx - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(MEM32(ebp + 0x14), ebx)) { sub_00440FCD(); return; } /* jne: not equal / not zero */

loc_00440F3C: ;
    ebx = ZX16(MEM16(ecx + 0x10));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    if (CMP_LE(ebx & ebx, 0)) goto loc_00440FBB; /* jle: less or equal (signed <=) */

loc_00440F47: ;
    MEM32(ebp + 0x10) = eax;

loc_00440F4A: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    ebx = MEM32(ebp + 0xC);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xE);
    edi = edi + MEM32(ebx + eax * 4);
    edi = MEM32(edx + edi * 4 + 0x64);
    edi = MEM32(esi + edi * 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + edi;
    MEM32(edx + eax * 4 + 0x40) = MEM32(edx + eax * 4 + 0x40) + 1;
    if (TEST_NZ(eax, eax)) goto loc_00440FA1; /* jne: not equal / not zero */

loc_00440F6C: ;
    if (CMP_EQ(MEM32(ecx + 0x4724), eax)) goto loc_00440FA1; /* je: equal / zero */

loc_00440F74: ;
    eax = MEM32(ebp + -8);
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563d90] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00440FA1; /* jp: parity */

loc_00440F87: ;
    edi = MEM32(edx + 0x3C);
    edi = MEM32(esi + edi * 8);
    eax = ebx;
    eax = MEM32(eax);
    eax = MEM32(edx + eax * 4 + 0x64);
    edi = edi - MEM32(esi + eax * 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + edi;
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1;
    MEM32(edx + 0x40) = MEM32(edx + 0x40) - 1;

loc_00440FA1: ;
    eax = ZX16(MEM16(ecx + 0x10));
    edi = ZX16(MEM16(ecx + 0x14));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x138;
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_00440F4A; /* jl: less (signed <) */

loc_00440FBB: ;
    eax = MEM32(ebp + -4);
    ecx = ZX16(MEM16(ecx + 0x14));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_0044107A(); return; /* tail jmp 0x0044107A */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00441083
 * Original: 0x00441083 - 0x004410C6 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441083(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00441083: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    (void)0; /* cmp eax, MEM32(ebp + 0x1C) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = MEM32(edi + 0x7154);
    esi = MEM32(edi + 0x46C4);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + 0x18) = eax;
    MEM32(ebp + -36) = ebx;
    MEM32(ebp + -20) = 1;
    if (CMP_GE(eax, MEM32(ebp + 0x1C))) { sub_004410C6(); return; } /* jge: greater or equal (signed >=) */

loc_004410BD: ;
    MEM32(ebp + -20) = 3;
    g_seh_ebp = ebp; sub_004410FC(); return; /* tail jmp 0x004410FC */

}

/**
 * sub_0044142C
 * Original: 0x0044142C - 0x004414A1 (117 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044142C(void)
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

loc_0044142C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x4620);
    fp_push((double)SMEM32(esi + 0x4620)); /* fild */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esi + 0x46C4);
    PUSH32(esp, edi);
    if (CMP_GE(ecx & ecx, 0)) goto loc_00441451; /* jge: greater or equal (signed >=) */

loc_0044144B: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00441451: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00441459: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esi + 0x4610);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    edx = edx + ecx;
    eax = (uint32_t)((int32_t)eax >> 3);
    if (CMP_NE(MEM8(edx), 0)) goto loc_0044149B; /* jne: not equal / not zero */

loc_0044146F: ;
    ecx = MEM32(esi + 0x68);
    ecx = ecx + MEM32(esi + 0x4C);
    edi = MEM32(esi + 0x48);
    SET_LO8(edx, MEM8(edx + -28));
    ecx = ecx + edi;
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_004414A1(); return; } /* jne: not equal / not zero */

loc_00441481: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_0044149B; /* jne: not equal / not zero */

loc_00441487: ;
    ecx = edi;
    eax = esi + 0x4628;
    ecx = ecx >> 3;
    if (CMP_GE(ecx, MEM32(eax))) goto loc_0044149B; /* jge: greater or equal (signed >=) */

loc_00441496: ;
    edi = (uint32_t)((int32_t)edi >> 3);
    MEM32(eax) = edi;

loc_0044149B: ;
    eax = 0; /* xor self */
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
 * sub_00441512
 * Original: 0x00441512 - 0x0044158B (121 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441512(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00441512: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x46C4);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(esi + 0x58) = ecx;
    edi = esi + 0x40;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + 0x10);
    (void)0; /* cmp eax, MEM32(ebp + 0x14) - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    MEM32(esi + 0x50) = ecx;
    edi = eax;
    if (CMP_GE(eax, MEM32(ebp + 0x14))) goto loc_00441583; /* jge: greater or equal (signed >=) */

loc_00441540: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(ebp + 8) = eax;

loc_00441546: ;
    eax = MEM32(ebx + 0x4610);
    ecx = MEM32(ebp + 8);
    if (CMP_NE(MEM8(ecx + eax), 1)) goto loc_0044156A; /* jne: not equal / not zero */

loc_00441555: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00440EE0(); /* call 0x00440EE0 */

loc_00441562: ;
    esp = esp + 0x10;
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    goto loc_00441579;

loc_0044156A: ;
    eax = MEM32(ebx + 0x46C4);
    eax = MEM32(eax + 0x54);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    MEM32(esi + 0x58) = MEM32(esi + 0x58) + 1;

loc_00441579: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x1C;
    edi++;
    if (CMP_L(edi, MEM32(ebp + 0x14))) goto loc_00441546; /* jl: less (signed <) */

loc_00441583: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0044158B
 * Original: 0x0044158B - 0x00441D44 (1977 bytes, 551 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044158B(void)
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

loc_0044158B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x46C4);
    ecx = MEM32(esi + 0x4610);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = MEM32(ecx + eax + 4);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(esi + 0xE));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    edx = eax;
    eax = ZX16(MEM16(esi + 0x14));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esi + 0x7154);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x138);
    edx = edx + MEM32(esi + 0x5930);
    (void)0; /* cmp MEM16(esi + 0x10), 0 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_BE(MEM16(esi + 0x10), 0)) goto loc_004416B5; /* jbe: below or equal (unsigned <=) */

loc_004415E4: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esi + 0x5970);
    ebx = MEM32(ebp + -8);
    ecx = ecx << 2;
    eax = MEM32(ecx + eax);
    ebx = MEM32(ebx + eax * 4 + 0x18);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xE);
    ebx = ebx + edi;
    MEM32(ebp + -16) = edi;
    edi = MEM32(ebp + -8);
    edi = MEM32(edi + ebx * 4 + 0x64);
    ebx = MEM32(ebp + -8);
    MEM32(ebp + ecx + -36) = edi;
    edi = MEM32(ebp + -8);
    edi = MEM32(edi + eax * 4 + 0x28);
    edi = edi + MEM32(ebp + -16);
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(ebx + edi * 4 + 0x64);
    MEM32(ebp + ecx + -48) = edi;
    if (TEST_NZ(eax, eax)) goto loc_0044167A; /* jne: not equal / not zero */

loc_00441628: ;
    if (CMP_EQ(MEM32(esi + 0x4724), eax)) goto loc_0044167A; /* je: equal / zero */

loc_00441630: ;
    edi = ZX16(MEM16(esi + 0x14));
    MEM32(ebp + -16) = MEM32(ebp + -16) & eax;
    if (CMP_LE(edi & edi, 0)) goto loc_0044166F; /* jle: less or equal (signed <=) */

loc_0044163B: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x138);
    eax = eax + edx + 0x4C;
    MEM32(ebp + -12) = eax;

loc_0044164E: ;
    eax = MEM32(ebp + -12);
    fp_push(MEMF(eax)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x563d90] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_0044167A; /* je: equal / zero */

loc_00441660: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0x138;
    if (CMP_L(MEM32(ebp + -16), edi)) goto loc_0044164E; /* jl: less (signed <) */

loc_0044166F: ;
    eax = MEM32(ebx + 0x3C);
    MEM32(ebp + ecx + -48) = eax;
    MEM32(ebp + ecx + -36) = eax;

loc_0044167A: ;
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + ecx + -36);
    edi = MEM32(eax + edi * 8);
    ebx = MEM32(esi + 0x470C);
    MEM32(ecx + ebx) = edi;
    ebx = ZX16(MEM16(esi + 0x14));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + 0x10));
    edi = MEM32(ebp + ecx + -48);
    ebx = ebx + MEM32(eax + edi * 8);
    eax = MEM32(esi + 0x4708);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM32(ecx + eax) = ebx;
    eax = ZX16(MEM16(esi + 0x10));
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_004415E4; /* jl: less (signed <) */

loc_004416B5: ;
    ecx = MEM32(esi);
    if (CMP_NE(ecx, 0x1F40)) goto loc_004418D7; /* jne: not equal / not zero */

loc_004416C3: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, 0x1F4)) goto loc_004416D8; /* je: equal / zero */

loc_004416CD: ;
    if (CMP_NE(eax, 0x271)) goto loc_00441811; /* jne: not equal / not zero */

loc_004416D8: ;
    ebx = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x10), LO16(ebx))) goto loc_00441C47; /* jbe: below or equal (unsigned <=) */

loc_004416E4: ;
    edi = esi + 0x46CA;

loc_004416EA: ;
    eax = MEM32(esi + 0x5970);
    ecx = ebx;
    ecx = ecx << 2;
    eax = MEM32(ecx + eax);
    if (TEST_S(eax, eax)) { sub_00441D44(); return; } /* jl: less (signed <) */

loc_00441700: ;
    if (CMP_LE(eax, 1)) goto loc_004417EE; /* jle: less or equal (signed <=) */

loc_00441709: ;
    if (CMP_EQ(eax, 2)) goto loc_004417C7; /* je: equal / zero */

loc_00441712: ;
    if (CMP_NE(eax, 3)) { sub_00441D44(); return; } /* jne: not equal / not zero */

loc_0044171B: ;
    eax = ZX16(MEM16(esi + 0x14));
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    if (CMP_EQ(MEM32(esi + 4), 0x271)) goto loc_00441760; /* je: equal / zero */

loc_0044172B: ;
    edx = MEM32(esi + 0x5930);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x138);
    edx = eax + edx + 0x4C;
    fp_push(MEMF(edx)); /* fld float */
    fp_push(MEMF(esi + 0x5920)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 0x591C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0044177C; /* jp: parity */

loc_00441760: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x60);
    edx = MEM32(esi + 0x470C);
    if (CMP_AE(MEM32(ecx + edx), eax)) goto loc_004417EE; /* jae: above or equal (unsigned >=) */

loc_00441771: ;
    edx = MEM32(esi + 0x4708);
    (void)0; /* cmp MEM32(ecx + edx), eax - flags set for next jcc */
    goto loc_004417E4;

loc_0044177C: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_push(MEMF(esi + 0x5920)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 0x591C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004417EE; /* jp: parity */

loc_004417A1: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x38);
    edx = MEM32(esi + 0x470C);
    if (CMP_AE(MEM32(ecx + edx), eax)) goto loc_004417EE; /* jae: above or equal (unsigned >=) */

loc_004417B2: ;
    edx = MEM32(esi + 0x4708);
    if (CMP_B(MEM32(ecx + edx), eax)) goto loc_004417EE; /* jb: below (unsigned <) */

loc_004417BD: ;
    MEM32(ebp + ecx + -36) = 7;
    goto loc_004417EE;

loc_004417C7: ;
    eax = MEM32(esi + 0x470C);
    edx = MEM32(ecx + eax);
    eax = MEM32(ebp + -4);
    if (CMP_B(edx, MEM32(eax + 0x38))) goto loc_004417EE; /* jb: below (unsigned <) */

loc_004417D8: ;
    edx = MEM32(esi + 0x4708);
    edx = MEM32(ecx + edx);
    (void)0; /* cmp edx, MEM32(eax + 0x60) - flags set for next jcc */

loc_004417E4: ;
    if (CMP_B(edx, MEM32(eax + 0x60))) goto loc_004417EE; /* jb: below (unsigned <) */

loc_004417E6: ;
    MEM32(ebp + ecx + -36) = 0xC;

loc_004417EE: ;
    SET_LO16(eax, MEM16(ebp + ecx + -36));
    MEM16(edi + -2) = 1;
    MEM16(edi) = LO16(eax);
    eax = ZX16(MEM16(esi + 0x10));
    ebx++;
    edi = edi + 0x14;
    if (CMP_L(ebx, eax)) goto loc_004416EA; /* jl: less (signed <) */

loc_0044180C: ;
    goto loc_00441C47;

loc_00441811: ;
    if (CMP_NE(eax, 0x3E8)) goto loc_004418D7; /* jne: not equal / not zero */

loc_0044181C: ;
    ebx = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x10), LO16(ebx))) goto loc_00441C47; /* jbe: below or equal (unsigned <=) */

loc_00441828: ;
    ecx = esi + 0x46C8;

loc_0044182E: ;
    eax = ebx;
    eax = eax << 2;
    edx = ebp + eax + -36;
    SET_LO16(edi, MEM16(edx));
    MEM16(ecx) = 1;
    MEM16(ecx + 2) = LO16(edi);
    edi = MEM32(esi + 0x5970);
    edi = MEM32(eax + edi);
    if (CMP_EQ(edi, 2)) goto loc_00441856; /* je: equal / zero */

loc_00441851: ;
    if (CMP_NE(edi, 3)) goto loc_004418C2; /* jne: not equal / not zero */

loc_00441856: ;
    edx = MEM32(edx);
    (void)0; /* cmp edx, 0xA - flags set for next jcc */
    MEM32(ebp + 8) = edx;
    if (CMP_NE(edx, 0xA)) goto loc_0044187E; /* jne: not equal / not zero */

loc_00441860: ;
    edx = MEM32(esi + 0x4708);
    edi = MEM32(eax + edx);
    edx = MEM32(ebp + -4);
    if (CMP_B(edi, MEM32(edx + 0x68))) goto loc_00441881; /* jb: below (unsigned <) */

loc_00441871: ;
    MEM16(ecx) = 2;
    MEM16(ecx + 4) = 0xD;
    goto loc_00441881;

loc_0044187E: ;
    edx = MEM32(ebp + -4);

loc_00441881: ;
    if (CMP_NE(MEM32(ebp + 8), 0xD)) goto loc_004418A0; /* jne: not equal / not zero */

loc_00441887: ;
    edi = MEM32(esi + 0x4708);
    edi = MEM32(eax + edi);
    if (CMP_B(edi, MEM32(edx + 0x78))) goto loc_004418A0; /* jb: below (unsigned <) */

loc_00441895: ;
    MEM16(ecx) = 2;
    MEM16(ecx + 4) = 0xF;

loc_004418A0: ;
    if (CMP_NE(MEM32(ebp + 8), 0xF)) goto loc_004418C2; /* jne: not equal / not zero */

loc_004418A6: ;
    edi = MEM32(esi + 0x4708);
    eax = MEM32(eax + edi);
    if (CMP_B(eax, MEM32(edx + 0x80))) goto loc_004418C2; /* jb: below (unsigned <) */

loc_004418B7: ;
    MEM16(ecx) = 2;
    MEM16(ecx + 4) = 0x10;

loc_004418C2: ;
    eax = ZX16(MEM16(esi + 0x10));
    ebx++;
    ecx = ecx + 0x14;
    if (CMP_L(ebx, eax)) goto loc_0044182E; /* jl: less (signed <) */

loc_004418D2: ;
    goto loc_00441C47;

loc_004418D7: ;
    if (CMP_NE(ecx, 0x2B11)) goto loc_004419C7; /* jne: not equal / not zero */

loc_004418E3: ;
    if (CMP_NE(MEM32(esi + 4), 0x4E2)) goto loc_004419C7; /* jne: not equal / not zero */

loc_004418F0: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    if (CMP_BE(MEM16(esi + 0x10), 0)) goto loc_00441C47; /* jbe: below or equal (unsigned <=) */

loc_004418FF: ;
    eax = esi + 0x46CA;
    MEM32(ebp + -16) = eax;

loc_00441908: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x5970);
    eax = eax << 2;
    ecx = MEM32(eax + ecx);
    if (TEST_S(ecx, ecx)) { sub_00441D44(); return; } /* jl: less (signed <) */

loc_0044191F: ;
    if (CMP_LE(ecx, 1)) goto loc_0044199B; /* jle: less or equal (signed <=) */

loc_00441924: ;
    if (CMP_EQ(ecx, 2)) goto loc_00441978; /* je: equal / zero */

loc_00441929: ;
    if (CMP_NE(ecx, 3)) { sub_00441D44(); return; } /* jne: not equal / not zero */

loc_00441932: ;
    ecx = ebp + eax + -36;
    edx = MEM32(ecx);
    if (CMP_AE(edx, 0x17)) goto loc_00441959; /* jae: above or equal (unsigned >=) */

loc_0044193D: ;
    edi = MEM32(esi + 0x4708);
    edi = MEM32(eax + edi);
    ebx = MEM32(ebp + -4);
    if (CMP_B(edi, MEM32(ebx + 0xB8))) goto loc_00441959; /* jb: below (unsigned <) */

loc_00441951: ;
    MEM32(ecx) = 0x17;
    goto loc_0044199B;

loc_00441959: ;
    PUSH32(esp, 0x14);
    POP32(esp, edi);
    if (CMP_AE(edx, edi)) goto loc_0044199B; /* jae: above or equal (unsigned >=) */

loc_00441960: ;
    edx = MEM32(esi + 0x4708);
    edx = MEM32(eax + edx);
    ebx = MEM32(ebp + -4);
    if (CMP_B(edx, MEM32(ebx + 0xA0))) goto loc_0044199B; /* jb: below (unsigned <) */

loc_00441974: ;
    MEM32(ecx) = edi;
    goto loc_0044199B;

loc_00441978: ;
    ecx = ebp + eax + -36;
    if (CMP_AE(MEM32(ecx), 0x14)) goto loc_0044199B; /* jae: above or equal (unsigned >=) */

loc_00441981: ;
    edx = MEM32(esi + 0x4708);
    edx = MEM32(eax + edx);
    edi = MEM32(ebp + -4);
    if (CMP_B(edx, MEM32(edi + 0xA0))) goto loc_0044199B; /* jb: below (unsigned <) */

loc_00441995: ;
    MEM32(ecx) = 0x14;

loc_0044199B: ;
    ecx = MEM32(ebp + -16);
    SET_LO16(eax, MEM16(ebp + eax + -36));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM16(ecx + -2) = 1;
    MEM16(ecx) = LO16(eax);
    eax = ZX16(MEM16(esi + 0x10));
    ecx = ecx + 0x14;
    (void)0; /* cmp MEM32(ebp + 8), eax - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_00441908; /* jl: less (signed <) */

loc_004419C2: ;
    goto loc_00441C47;

loc_004419C7: ;
    if (CMP_NE(ecx, 0x3E80)) goto loc_00441B5E; /* jne: not equal / not zero */

loc_004419D3: ;
    eax = MEM32(esi + 4);
    if (CMP_NE(eax, 0x5DC)) goto loc_00441A7E; /* jne: not equal / not zero */

loc_004419E1: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    if (CMP_BE(MEM16(esi + 0x10), 0)) goto loc_00441C47; /* jbe: below or equal (unsigned <=) */

loc_004419F0: ;
    edi = MEM32(ebp + -4);
    edx = esi + 0x46CA;

loc_004419F9: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x5970);
    eax = eax << 2;
    ecx = MEM32(eax + ecx);
    if (TEST_S(ecx, ecx)) { sub_00441D44(); return; } /* jl: less (signed <) */

loc_00441A10: ;
    if (CMP_LE(ecx, 1)) goto loc_00441A5C; /* jle: less or equal (signed <=) */

loc_00441A15: ;
    if (CMP_G(ecx, 3)) { sub_00441D44(); return; } /* jg: greater (signed >) */

loc_00441A1E: ;
    ecx = ebp + eax + -36;
    if (CMP_AE(MEM32(ecx), 0x1D)) goto loc_00441A40; /* jae: above or equal (unsigned >=) */

loc_00441A27: ;
    ebx = MEM32(esi + 0x4708);
    ebx = MEM32(eax + ebx);
    if (CMP_B(ebx, MEM32(edi + 0xE8))) goto loc_00441A40; /* jb: below (unsigned <) */

loc_00441A38: ;
    MEM32(ecx) = 0x1D;
    goto loc_00441A5C;

loc_00441A40: ;
    if (CMP_AE(MEM32(ecx), 0x1C)) goto loc_00441A5C; /* jae: above or equal (unsigned >=) */

loc_00441A45: ;
    ebx = MEM32(esi + 0x4708);
    ebx = MEM32(eax + ebx);
    if (CMP_B(ebx, MEM32(edi + 0xE0))) goto loc_00441A5C; /* jb: below (unsigned <) */

loc_00441A56: ;
    MEM32(ecx) = 0x1C;

loc_00441A5C: ;
    SET_LO16(eax, MEM16(ebp + eax + -36));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM16(edx + -2) = 1;
    MEM16(edx) = LO16(eax);
    eax = ZX16(MEM16(esi + 0x10));
    edx = edx + 0x14;
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_004419F9; /* jl: less (signed <) */

loc_00441A79: ;
    goto loc_00441C47;

loc_00441A7E: ;
    if (CMP_NE(eax, 0x7D0)) goto loc_00441B5E; /* jne: not equal / not zero */

loc_00441A89: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    if (CMP_BE(MEM16(esi + 0x10), 0)) goto loc_00441C47; /* jbe: below or equal (unsigned <=) */

loc_00441A98: ;
    eax = esi + 0x46CA;
    MEM32(ebp + -16) = eax;

loc_00441AA1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x5970);
    eax = eax << 2;
    ecx = MEM32(eax + ecx);
    if (TEST_S(ecx, ecx)) { sub_00441D44(); return; } /* jl: less (signed <) */

loc_00441AB8: ;
    if (CMP_LE(ecx, 1)) goto loc_00441B32; /* jle: less or equal (signed <=) */

loc_00441ABD: ;
    if (CMP_EQ(ecx, 2)) goto loc_00441B11; /* je: equal / zero */

loc_00441AC2: ;
    if (CMP_NE(ecx, 3)) { sub_00441D44(); return; } /* jne: not equal / not zero */

loc_00441ACB: ;
    ecx = ebp + eax + -36;
    edx = MEM32(ecx);
    if (CMP_AE(edx, 0x1F)) goto loc_00441AF2; /* jae: above or equal (unsigned >=) */

loc_00441AD6: ;
    edi = MEM32(esi + 0x4708);
    edi = MEM32(eax + edi);
    ebx = MEM32(ebp + -4);
    if (CMP_B(edi, MEM32(ebx + 0xF8))) goto loc_00441AF2; /* jb: below (unsigned <) */

loc_00441AEA: ;
    MEM32(ecx) = 0x1F;
    goto loc_00441B32;

loc_00441AF2: ;
    PUSH32(esp, 0x1C);
    POP32(esp, edi);
    if (CMP_AE(edx, edi)) goto loc_00441B32; /* jae: above or equal (unsigned >=) */

loc_00441AF9: ;
    edx = MEM32(esi + 0x4708);
    edx = MEM32(eax + edx);
    ebx = MEM32(ebp + -4);
    if (CMP_B(edx, MEM32(ebx + 0xE0))) goto loc_00441B32; /* jb: below (unsigned <) */

loc_00441B0D: ;
    MEM32(ecx) = edi;
    goto loc_00441B32;

loc_00441B11: ;
    PUSH32(esp, 0x1C);
    ecx = ebp + eax + -36;
    POP32(esp, edx);
    if (CMP_AE(MEM32(ecx), edx)) goto loc_00441B32; /* jae: above or equal (unsigned >=) */

loc_00441B1C: ;
    edi = MEM32(esi + 0x4708);
    edi = MEM32(eax + edi);
    ebx = MEM32(ebp + -4);
    if (CMP_B(edi, MEM32(ebx + 0xE0))) goto loc_00441B32; /* jb: below (unsigned <) */

loc_00441B30: ;
    MEM32(ecx) = edx;

loc_00441B32: ;
    ecx = MEM32(ebp + -16);
    SET_LO16(eax, MEM16(ebp + eax + -36));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM16(ecx + -2) = 1;
    MEM16(ecx) = LO16(eax);
    eax = ZX16(MEM16(esi + 0x10));
    ecx = ecx + 0x14;
    (void)0; /* cmp MEM32(ebp + 8), eax - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_00441AA1; /* jl: less (signed <) */

loc_00441B59: ;
    goto loc_00441C47;

loc_00441B5E: ;
    if (CMP_NE(ecx, 0x5622)) { sub_00441D44(); return; } /* jne: not equal / not zero */

loc_00441B6A: ;
    if (CMP_NE(MEM32(esi + 4), 0x9C4)) { sub_00441D44(); return; } /* jne: not equal / not zero */

loc_00441B77: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    if (CMP_BE(MEM16(esi + 0x10), 0)) goto loc_00441C47; /* jbe: below or equal (unsigned <=) */

loc_00441B86: ;
    eax = esi + 0x46CA;
    MEM32(ebp + -16) = eax;

loc_00441B8F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x5970);
    eax = eax << 2;
    ecx = MEM32(eax + ecx);
    if (TEST_S(ecx, ecx)) { sub_00441D44(); return; } /* jl: less (signed <) */

loc_00441BA6: ;
    if (CMP_LE(ecx, 1)) goto loc_00441C20; /* jle: less or equal (signed <=) */

loc_00441BAB: ;
    if (CMP_EQ(ecx, 2)) goto loc_00441BFF; /* je: equal / zero */

loc_00441BB0: ;
    if (CMP_NE(ecx, 3)) { sub_00441D44(); return; } /* jne: not equal / not zero */

loc_00441BB9: ;
    ecx = ebp + eax + -36;
    edx = MEM32(ecx);
    if (CMP_AE(edx, 0x27)) goto loc_00441BE0; /* jae: above or equal (unsigned >=) */

loc_00441BC4: ;
    edi = MEM32(esi + 0x4708);
    edi = MEM32(eax + edi);
    ebx = MEM32(ebp + -4);
    if (CMP_B(edi, MEM32(ebx + 0x138))) goto loc_00441BE0; /* jb: below (unsigned <) */

loc_00441BD8: ;
    MEM32(ecx) = 0x27;
    goto loc_00441C20;

loc_00441BE0: ;
    PUSH32(esp, 0x24);
    POP32(esp, edi);
    if (CMP_AE(edx, edi)) goto loc_00441C20; /* jae: above or equal (unsigned >=) */

loc_00441BE7: ;
    edx = MEM32(esi + 0x4708);
    edx = MEM32(eax + edx);
    ebx = MEM32(ebp + -4);
    if (CMP_B(edx, MEM32(ebx + 0x120))) goto loc_00441C20; /* jb: below (unsigned <) */

loc_00441BFB: ;
    MEM32(ecx) = edi;
    goto loc_00441C20;

loc_00441BFF: ;
    PUSH32(esp, 0x24);
    ecx = ebp + eax + -36;
    POP32(esp, edx);
    if (CMP_AE(MEM32(ecx), edx)) goto loc_00441C20; /* jae: above or equal (unsigned >=) */

loc_00441C0A: ;
    edi = MEM32(esi + 0x4708);
    edi = MEM32(eax + edi);
    ebx = MEM32(ebp + -4);
    if (CMP_B(edi, MEM32(ebx + 0x120))) goto loc_00441C20; /* jb: below (unsigned <) */

loc_00441C1E: ;
    MEM32(ecx) = edx;

loc_00441C20: ;
    ecx = MEM32(ebp + -16);
    SET_LO16(eax, MEM16(ebp + eax + -36));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM16(ecx + -2) = 1;
    MEM16(ecx) = LO16(eax);
    eax = ZX16(MEM16(esi + 0x10));
    ecx = ecx + 0x14;
    (void)0; /* cmp MEM32(ebp + 8), eax - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_00441B8F; /* jl: less (signed <) */

loc_00441C47: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax--;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00441CCA; /* jl: less (signed <) */

loc_00441C56: ;
    ecx = MEM32(esi + 0x4708);
    edi = MEM32(esi + 0x470C);
    edx = ebp + -32;
    edx = edx - ecx;
    ebx = ebp + -44;
    ebx = ebx - ecx;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -24) = ebx;
    edx = ebp + -36;
    edx = edx - ecx;
    ebx = ebp + -48;
    edi = edi - ecx;
    ebx = ebx - ecx;
    eax = ecx + eax * 4;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -12) = ebx;
    goto loc_00441C8C;

loc_00441C89: ;
    edx = MEM32(ebp + -16);

loc_00441C8C: ;
    ecx = MEM32(edi + eax);
    ebx = MEM32(ebp + -12);
    MEM32(edx + eax) = ecx;
    edx = MEM32(eax);
    MEM32(ebx + eax) = edx;
    ebx = MEM32(ebp + -4);
    if (CMP_GE(MEM32(ebp + 8), ebx)) goto loc_00441CBE; /* jge: greater or equal (signed >=) */

loc_00441CA2: ;
    ebx = MEM32(ebp + -20);
    ebx = MEM32(ebx + eax);
    ebx = ebx + ecx;
    ecx = MEM32(ebp + -16);
    MEM32(ecx + eax) = ebx;
    ecx = MEM32(ebp + -24);
    ecx = MEM32(ecx + eax);
    ecx = ecx + edx;
    edx = MEM32(ebp + -12);
    MEM32(edx + eax) = ecx;

loc_00441CBE: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    eax = eax - 4;
    if (CMP_GE(MEM32(ebp + 8), 0)) goto loc_00441C89; /* jge: greater or equal (signed >=) */

loc_00441CCA: ;
    edi = MEM32(esi + 0x68);
    eax = MEM32(ebp + 0xC);
    edi = edi + MEM32(esi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x4618));
    eax++;
    PUSH32(esp, eax);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00441512(); /* call 0x00441512 */

loc_00441CED: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x4618));
    ebx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ebp + -8);
    eax = eax + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ebx = ebx + edi;
    PUSH32(esp, 0); sub_00441512(); /* call 0x00441512 */

loc_00441D09: ;
    edx = MEM32(esi + 0x4710);
    ecx = eax;
    eax = MEM32(ebp + -48);
    ecx = ecx + edi;
    eax = eax - ebx;
    eax = eax + ecx;
    ecx = ZX16(MEM16(esi + 0x10));
    MEM32(edx + ecx * 4 + -4) = eax;
    ecx = ZX16(MEM16(esi + 0x10));
    esp = esp + 0x28;
    ecx = ecx - 2;
    if (((int32_t)ecx < 0)) goto loc_00441D40; /* js: sign (negative) */

loc_00441D2E: ;
    edi = MEM32(esi + 0x4710);
    edx = eax;
    edx = edx - MEM32(ebp + ecx * 4 + -32);
    MEM32(edi + ecx * 4) = edx;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_00441D2E; /* jns: not sign (positive) */

loc_00441D40: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00441D49(); return; /* tail jmp 0x00441D49 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00441D4E
 * Original: 0x00441D4E - 0x00441FB7 (617 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441D4E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00441D4E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    ecx = MEM32(ebp + 8);
    eax = ZX16(MEM16(ecx + 0xE));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx + 0x14));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(ecx + 0x4620);
    esi = MEM32(ecx + 0x38);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(ecx + 0x24), 3 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x3C);
    MEM32(ebp + -4) = edx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ecx + 0x9244);
    MEM32(ebp + -12) = eax;
    if (CMP_NE(MEM16(ecx + 0x24), 3)) goto loc_00441E15; /* jne: not equal / not zero */

loc_00441D90: ;
    edx = MEM32(ecx + 0x4610);
    SET_LO8(ebx, MEM8(ecx + 0x4670));
    MEM8(edx + -28) = LO8(ebx);
    edx = MEM32(ecx + 0x4610);
    ebx = 0; /* xor self */
    if (CMP_NE(MEM32(ecx + 0x4740), ebx)) goto loc_00441E08; /* jne: not equal / not zero */

loc_00441DAF: ;
    MEM32(edx + 4) = ebx;
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 8) = ebx;
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 0x20) = ebx;
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 0x24) = ebx;
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(ecx + 0x4610);
    MEM32(eax + 0x18) = ebx;
    edx = MEM32(ecx + 0x4610);
    eax = 0; /* xor self */
    eax++;
    MEM8(edx) = LO8(eax);
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 0x14) = ebx;
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 0x10) = MEM32(edx + 0x10) | 0xFFFFFFFFu;
    MEM32(ecx + 0x4614) = eax;
    goto loc_00441FAC;

loc_00441E08: ;
    MEM32(edx + 0x14) = ebx;
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 0x10) = MEM32(edx + 0x10) | 0xFFFFFFFFu;

loc_00441E15: ;
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 4) = esi;
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 8) = edi;
    edx = MEM32(ecx + 0x4610);
    MEM8(edx) = 1;
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 0x10) = MEM32(edx + 0x10) | 0xFFFFFFFFu;
    edx = MEM32(ecx + 0x4610);
    MEM32(edx + 0x14) = ebx;
    if (CMP_GE(esi, MEM32(ecx + 0x4740))) goto loc_00441F3E; /* jge: greater or equal (signed >=) */

loc_00441E4F: ;
    goto loc_00441E57;

loc_00441E51: ;
    edi = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);

loc_00441E57: ;
    ebx = MEM32(ebp + -16);
    edx = MEM32(ecx + 0x4738);
    edx = edx - MEM32(ecx + 0x4744);
    ebx = esi + ebx * 4;
    ebx = ebx + eax;
    if (CMP_A(ebx, edx)) goto loc_00441F3C; /* ja: above (unsigned >) */

loc_00441E73: ;
    edx = MEM32(ebp + 8);
    ebx = MEM32(ecx + 0x4610);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    edi = edi + eax;
    esi = esi + eax;
    MEM32(ebp + -8) = edi;
    edi = esi;
    edi = edi - eax;
    MEM32(edx + ebx + 8) = edi;
    edi = MEM32(ecx + 0x4610);
    ebx = MEM32(ebp + -8);
    MEM32(edx + edi + 0x20) = esi;
    edi = MEM32(ecx + 0x4610);
    MEM32(edx + edi + 0x24) = ebx;
    edi = MEM32(ecx + 0x4610);
    MEM32(edx + edi + 0xC) = eax;
    eax = MEM32(ecx + 0x4610);
    MEM32(edx + eax + 0x18) = MEM32(edx + eax + 0x18) | 0xFFFFFFFFu;
    eax = MEM32(ecx + 0x4610);
    MEM32(edx + eax + 0x34) = 0xFFFFFFFEu;
    eax = MEM32(ecx + 0x4610);
    ebx = MEM32(ecx + 0x4740);
    edi = edx + eax;
    eax = MEM32(edi + 4);
    MEM32(ebp + -20) = ebx;
    ebx = MEM32(edi + 0xC);
    ebx = ebx + eax;
    eax = MEM32(ebp + -20);
    if (CMP_LE(ebx, eax)) goto loc_00441EEF; /* jle: less or equal (signed <=) */

loc_00441EE9: ;
    eax = eax - MEM32(edi + 4);
    MEM32(edi + 0x18) = eax;

loc_00441EEF: ;
    eax = MEM32(ecx + 0x4610);
    edx = edx + eax;
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM32(edx + 0xC), ebx)) goto loc_00441F03; /* je: equal / zero */

loc_00441EFE: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    goto loc_00441F09;

loc_00441F03: ;
    eax = MEM32(edx + 8);
    MEM32(edx + 4) = eax;

loc_00441F09: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x4610);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEM8(edx + eax) = 1;
    eax = MEM32(ecx + 0x4610);
    MEM32(edx + eax + 0x10) = MEM32(edx + eax + 0x10) | 0xFFFFFFFFu;
    eax = MEM32(ecx + 0x4610);
    MEM32(edx + eax + 0x14) = ebx;
    if (CMP_L(esi, MEM32(ecx + 0x4740))) goto loc_00441E51; /* jl: less (signed <) */

loc_00441F3A: ;
    goto loc_00441F3E;

loc_00441F3C: ;
    ebx = 0; /* xor self */

loc_00441F3E: ;
    eax = ZX16(MEM16(ecx + 0x18));
    edx = MEM32(ecx + 0x4610);
    eax++;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -4));
    MEM32(ecx + 0x4614) = ebx;
    if (CMP_GE(MEM32(edx + 4), eax)) goto loc_00441F88; /* jge: greater or equal (signed >=) */

loc_00441F58: ;
    eax = MEM32(ecx + 0x4614);
    if (CMP_GE(eax, MEM32(ebp + 8))) goto loc_00441F88; /* jge: greater or equal (signed >=) */

loc_00441F63: ;
    eax++;
    MEM32(ecx + 0x4614) = eax;
    eax = ZX16(MEM16(ecx + 0x18));
    esi = MEM32(ecx + 0x4614);
    edi = MEM32(ecx + 0x4610);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    eax++;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -4));
    if (CMP_L(MEM32(esi + edi + 4), eax)) goto loc_00441F58; /* jl: less (signed <) */

loc_00441F88: ;
    esi = MEM32(ebp + -4);
    eax = 0; /* xor self */
    if (CMP_GE(MEM32(edx + 4), esi)) goto loc_00441FAC; /* jge: greater or equal (signed >=) */

loc_00441F92: ;
    edx = MEM32(ecx + 0x4614);

loc_00441F98: ;
    if (CMP_GE(eax, edx)) goto loc_00441FAC; /* jge: greater or equal (signed >=) */

loc_00441F9C: ;
    edi = MEM32(ecx + 0x4610);
    ebx = ebx + 0x1C;
    eax++;
    if (CMP_L(MEM32(ebx + edi + 4), esi)) goto loc_00441F98; /* jl: less (signed <) */

loc_00441FAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x4618) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00441FB7
 * Original: 0x00441FB7 - 0x00442315 (862 bytes, 303 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00441FB7(void)
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

loc_00441FB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x4610);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    edx = ecx + eax;
    (void)0; /* cmp MEM8(edx), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM8(edx), 1)) { sub_00442315(); return; } /* jne: not equal / not zero */

loc_00441FDD: ;
    eax = MEM32(ebx + 0x473C);
    ecx = ZX16(MEM16(ebx + 0x14));
    MEM32(ebp + -8) = eax;
    eax = ZX16(MEM16(ebx + 0xE));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(ebx + 0x46C4);
    PUSH32(esp, ebx);
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 0); sub_00440E93(); /* call 0x00440E93 */

loc_00442003: ;
    eax = MEM32(ebx + 0x68);
    eax = eax + MEM32(ebx + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebx + 0x4614));
    MEM32(ebp + -16) = eax;
    eax = edi + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_00441512(); /* call 0x00441512 */

loc_00442022: ;
    eax = eax + MEM32(ebp + -16);
    ecx = MEM32(edi + 8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(edi + 0xC);
    ecx = ecx - eax;
    MEM32(ebp + -20) = ecx;
    fp_push((double)SMEM32(ebp + -20)); /* fild */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    esp = esp + 0x18;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044204E: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 8) = eax;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00442060: ;
    /* fstp st(0) */
    MEM32(ebp + -20) = eax;
    /* fstp st(0) */
    eax = MEM32(ebx + 0x4620);
    if (CMP_BE(MEM32(ebp + -8), eax)) goto loc_004420A2; /* jbe: below or equal (unsigned <=) */

loc_00442072: ;
    ecx = MEM32(ebx + 0x4614);
    edx = MEM32(ebx + 0x4610);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    ecx = MEM32(ecx + edx + 4);
    ecx = ecx - eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00442097; /* jge: greater or equal (signed >=) */

loc_00442091: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00442097: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044209F: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - eax;

loc_004420A2: ;
    eax = MEM32(ebp + -12);
    if (CMP_GE(eax, MEM32(ebp + -20))) goto loc_004420C6; /* jge: greater or equal (signed >=) */

loc_004420AA: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x4614));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441083(); /* call 0x00441083 */

loc_004420C1: ;
    esp = esp + 0x1C;
    goto loc_004420F8;

loc_004420C6: ;
    if (CMP_LE(eax, MEM32(ebp + 8))) goto loc_004420F8; /* jle: less or equal (signed <=) */

loc_004420CB: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x4614));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441083(); /* call 0x00441083 */

loc_004420E2: ;
    eax = MEM32(edi + 0x38);
    esp = esp + 0x1C;
    if (CMP_B(MEM32(edi + 0x20), eax)) goto loc_004420F2; /* jb: below (unsigned <) */

loc_004420ED: ;
    if (CMP_AE(MEM32(edi + 0x24), eax)) goto loc_004420F8; /* jae: above or equal (unsigned >=) */

loc_004420F2: ;
    MEM32(edi + 0x24) = eax;
    MEM32(edi + 0x20) = eax;

loc_004420F8: ;
    ecx = MEM32(ebp + 8);
    if (CMP_GE(MEM32(ebp + -12), ecx)) goto loc_00442161; /* jge: greater or equal (signed >=) */

loc_00442100: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -12));
    eax = edi + 0x28;
    PUSH32(esp, MEM32(ebx + 0x4614));
    MEM32(ebp + -8) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441083(); /* call 0x00441083 */

loc_00442119: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebx + 0x9248);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x58));
    esp = esp + 0x1C;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -28) = eax;
    fp_push((double)SMEM32(ebp + -28)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_00442139; /* jge: greater or equal (signed >=) */

loc_00442133: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00442139: ;
    /* FPU: fidiv dword ptr [ebp - 0x18] */
    eax = MEM32(edi + 0x4C);
    eax = eax + MEM32(edi + 0x48);
    MEM32(ebp + -24) = eax;
    /* FPU: fiadd dword ptr [ebp - 0x18] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044214D: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_00442174; /* je: equal / zero */

loc_00442153: ;
    eax = MEM32(ebp + 8);
    eax = eax - MEM32(ebp + -20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -12) = eax;
    goto loc_00442178;

loc_00442161: ;
    esi = MEM32(ebp + -4);
    edi = edi + 0x28;
    MEM32(ebp + -8) = edi;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edi = MEM32(ebp + -28);
    esi = MEM32(ebp + 0xC);

loc_00442174: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_00442178: ;
    MEM32(ebx + 0x4730) = MEM32(ebx + 0x4730) & 0;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 8);
    ecx = ecx - eax;
    MEM32(ebp + -28) = ecx;
    fp_push((double)SMEM32(ebp + -28)); /* fild */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_004421A2: ;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 8) = eax;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_004421B4: ;
    /* fstp st(0) */
    MEM32(ebp + -20) = eax;
    /* fstp st(0) */
    eax = MEM32(ebx + 0x4618);
    ecx = eax + -1;
    if (CMP_NE(esi, ecx)) goto loc_00442238; /* jne: not equal / not zero */

loc_004421C8: ;
    PUSH32(esp, 1);
    edi = esi + 1;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441512(); /* call 0x00441512 */

loc_004421D8: ;
    eax = eax + MEM32(ebp + -16);
    esp = esp + 0x14;
    if (CMP_LE(eax, MEM32(ebp + 8))) goto loc_0044220F; /* jle: less or equal (signed <=) */

loc_004421E3: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441083(); /* call 0x00441083 */

loc_004421F6: ;
    edi = MEM32(ebp + -8);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + 0xC);
    MEM32(ebx + 0x4730) = 1;
    goto loc_004422FC;

loc_0044220F: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441512(); /* call 0x00441512 */

loc_0044221C: ;
    eax = eax + MEM32(ebp + -16);
    esp = esp + 0x14;
    if (CMP_LE(eax, MEM32(ebp + 8))) goto loc_00442303; /* jle: less or equal (signed <=) */

loc_0044222B: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    goto loc_004422F2;

loc_00442238: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441512(); /* call 0x00441512 */

loc_00442245: ;
    eax = eax + MEM32(ebp + -16);
    esp = esp + 0x14;
    if (CMP_LE(eax, MEM32(ebp + -20))) goto loc_004422C8; /* jle: less or equal (signed <=) */

loc_00442250: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x4618));
    PUSH32(esp, esi);
    esi = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441083(); /* call 0x00441083 */

loc_00442268: ;
    eax = MEM32(edi + 0x38);
    esp = esp + 0x1C;
    if (CMP_B(MEM32(edi + 0x20), eax)) goto loc_00442278; /* jb: below (unsigned <) */

loc_00442273: ;
    if (CMP_AE(MEM32(edi + 0x24), eax)) goto loc_004422AF; /* jae: above or equal (unsigned >=) */

loc_00442278: ;
    edi = ebp + -44;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebx + 0x4618));
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -36) = eax;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441512(); /* call 0x00441512 */

loc_0044229A: ;
    eax = eax + MEM32(ebp + -16);
    esp = esp + 0x14;
    if (CMP_G(eax, MEM32(ebp + 8))) goto loc_004422AF; /* jg: greater (signed >) */

loc_004422A5: ;
    edi = MEM32(ebp + -4);
    esi = ebp + -44;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */

loc_004422AF: ;
    esi = MEM32(ebp + -4);
    edi = MEM32(ebp + -8);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + 0xC);
    MEM32(ebx + 0x4730) = 1;
    goto loc_004422FF;

loc_004422C8: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebx + 0x4618));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441512(); /* call 0x00441512 */

loc_004422DA: ;
    eax = eax + MEM32(ebp + -16);
    esp = esp + 0x14;
    if (CMP_LE(eax, MEM32(ebp + 8))) goto loc_00442303; /* jle: less or equal (signed <=) */

loc_004422E5: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x4618));

loc_004422F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00441083(); /* call 0x00441083 */

loc_004422FC: ;
    esp = esp + 0x1C;

loc_004422FF: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_00442303: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0044158B(); /* call 0x0044158B */

loc_0044230D: ;
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_004423AD(); return; /* tail jmp 0x004423AD */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004423B2
 * Original: 0x004423B2 - 0x004424CA (280 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004423B2(void)
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

loc_004423B2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0xCDC;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_004423C9: ;
    eax = esi + 0x1134;
    PUSH32(esp, 0x1A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_004423DA: ;
    PUSH32(esp, 0x10);
    POP32(esp, edi);
    eax = esi + 0xC5C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_004423EA: ;
    eax = esi + 0xC9C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_004423F7: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    esp = esp + 0x20;
    eax++;
    MEM32(ebp + 8) = eax;
    eax = esi + 0xD9C;
    ecx = edi;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(ebp + 8) = 1;

loc_00442414: ;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    ecx--;
    if ((ecx != 0)) goto loc_00442414; /* jne: not equal / not zero */

loc_0044242D: ;
    eax = esi + 0xC1C;
    /* fstp st(0) */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044243C: ;
    PUSH32(esp, 0x307);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_00442447: ;
    fp_push(0.0); /* fldz */
    ebx = 0; /* xor self */
    MEMF(esi + 0x1124) = (float)fp_top(); fp_popp(); /* fstp */
    eax = esi + 0x10BC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM16(esi + 0x17B4) = LO16(ebx);
    MEM16(esi + 0x1132) = 0xFF01;
    MEM16(esi + 0x1130) = 1;
    MEM32(esi + 0x112C) = 0x42200000;
    MEM16(esi + 0x1128) = LO16(ebx);
    MEM16(esi + 0x112A) = LO16(ebx);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_0044248F: ;
    eax = esi + 0xE3C;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_004424A0: ;
    PUSH32(esp, 0); sub_00434726(); /* call 0x00434726 */

loc_004424A5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046FD13(); /* call 0x0046FD13 */

loc_004424AB: ;
    esp = esp + 0x24;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    edi = esi + 0xE1C;
    eax = 0x3F800000;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM16(esi + 0x17B6) = LO16(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004424CA
 * Original: 0x004424CA - 0x004424FC (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004424CA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004424CA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) { sub_004424FC(); return; } /* je: equal / zero */

loc_004424D4: ;
    edi = MEM32(esp + 0x10);
    if (TEST_Z(edi, edi)) { sub_004424FC(); return; } /* je: equal / zero */

loc_004424DC: ;
    if (CMP_EQ(edi, esi)) goto loc_004424F8; /* je: equal / zero */

loc_004424E0: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx * 4 + 0x4BC;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_004424F8: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00442501(); return; /* tail jmp 0x00442501 */

}

/**
 * sub_00442504
 * Original: 0x00442504 - 0x00442620 (284 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442504(void)
{

loc_00442504: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0x490));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM16(edi + 0x490) = LO16(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xC));
    PUSH32(esp, eax);
    eax = edi + 0x4BC;
    PUSH32(esp, eax);
    eax = esi + 0x4BC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00442536: ;
    PUSH32(esp, 0x30);
    eax = edi + 0x3CC;
    PUSH32(esp, eax);
    eax = esi + 0x3CC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0044254B: ;
    SET_LO16(eax, MEM16(esi + 0x3B8));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM16(edi + 0x3B8) = LO16(eax);
    PUSH32(esp, 0); sub_00446A29(); /* call 0x00446A29 */

loc_00442560: ;
    PUSH32(esp, 0xA0);
    eax = edi + 0xA8;
    PUSH32(esp, eax);
    eax = esi + 0xDBC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00442578: ;
    SET_LO16(eax, MEM16(esi + 0xA6));
    MEM16(edi + 0xA6) = LO16(eax);
    eax = MEM32(esi + 0xA0);
    MEM32(edi + 0xA0) = eax;
    SET_LO16(eax, MEM16(esi + 0xA4));
    MEM16(edi + 0xA4) = LO16(eax);
    PUSH32(esp, 0xA);
    eax = edi + 0x38;
    PUSH32(esp, eax);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_004425AF: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    eax = edi + 0x60;
    PUSH32(esp, eax);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_004425C2: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    esp = esp + 0x44;
    PUSH32(esp, eax);
    eax = edi + 0x328;
    PUSH32(esp, eax);
    eax = esi + 0x328;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_004425DE: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    eax = edi + 0x368;
    PUSH32(esp, eax);
    eax = esi + 0x368;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_004425F7: ;
    PUSH32(esp, 8);
    eax = edi + 0x494;
    PUSH32(esp, eax);
    eax = esi + 0x494;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0044260C: ;
    SET_LO16(eax, MEM16(esi + 0x4B4));
    esp = esp + 0x24;
    MEM16(edi + 0x4B4) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00442620
 * Original: 0x00442620 - 0x0044269A (122 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442620(void)
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

loc_00442620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(esi + 0x490));
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM16(edi + 0x17B4) = LO16(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xC));
    PUSH32(esp, eax);
    eax = edi + 0x1134;
    PUSH32(esp, eax);
    eax = esi + 0x4BC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00442653: ;
    PUSH32(esp, 0x30);
    eax = edi + 0xCDC;
    PUSH32(esp, eax);
    eax = esi + 0x3CC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00442668: ;
    SET_LO16(eax, MEM16(esi + 0x3B8));
    MEM16(edi + 0x1132) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x34));
    MEM16(edi + 0x1130) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x1468));
    esp = esp + 0x18;
    if (TEST_NZ(LO16(eax), LO16(eax))) { sub_0044269A(); return; } /* jne: not equal / not zero */

loc_00442690: ;
    fp_push(0.0); /* fldz */
    MEMF(edi + 0x112C) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_004426C0(); return; /* tail jmp 0x004426C0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004427B9
 * Original: 0x004427B9 - 0x004428FA (321 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004427B9(void)
{
    int _flags = 0; /* fallback flag var */

loc_004427B9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO16(eax, MEM16(edi + 0x17B4));
    MEM16(esi + 0x490) = LO16(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xC));
    PUSH32(esp, eax);
    eax = esi + 0x4BC;
    PUSH32(esp, eax);
    eax = edi + 0x1134;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_004427EB: ;
    PUSH32(esp, 0x30);
    eax = esi + 0x3CC;
    PUSH32(esp, eax);
    eax = edi + 0xCDC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00442800: ;
    SET_LO16(eax, MEM16(edi + 0x1132));
    MEM16(esi + 0x3B8) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0x1130));
    MEM16(esi + 0x18) = LO16(eax);
    eax = MEM32(edi + 0x112C);
    MEM32(esi + 0x1C) = eax;
    SET_LO16(eax, MEM16(edi + 0x112A));
    MEM16(esi + 0xA6) = LO16(eax);
    eax = MEM32(edi + 0x1124);
    MEM32(esi + 0xA0) = eax;
    SET_LO16(eax, MEM16(edi + 0x1128));
    MEM16(esi + 0xA4) = LO16(eax);
    PUSH32(esp, 0xA);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    eax = edi + 0x10FC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0044285C: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    esp = esp + 0x24;
    if (CMP_A(LO16(eax), 0x10)) goto loc_004428B0; /* ja: above (unsigned >) */

loc_0044286A: ;
    PUSH32(esp, eax);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    eax = edi + 0x10BC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_0044287B: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    eax = esi + 0x328;
    PUSH32(esp, eax);
    eax = edi + 0xC5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_00442894: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    eax = esi + 0x368;
    PUSH32(esp, eax);
    eax = edi + 0xC9C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_004428AD: ;
    esp = esp + 0x24;

loc_004428B0: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 8));
    if (CMP_A(LO16(eax), 0xA0)) goto loc_004428D3; /* ja: above (unsigned >) */

loc_004428BC: ;
    PUSH32(esp, eax);
    eax = esi + 0xA8;
    PUSH32(esp, eax);
    eax = edi + 0xE3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_004428D0: ;
    esp = esp + 0xC;

loc_004428D3: ;
    eax = edi + 0xC1C;
    MEM32(esi + 0x48C) = eax;
    PUSH32(esp, 8);
    esi = esi + 0x494;
    PUSH32(esp, esi);
    edi = edi + 0xE1C;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00448D37(); /* call 0x00448D37 */

loc_004428F4: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004428FA
 * Original: 0x004428FA - 0x004429BB (193 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004428FA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004428FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    (void)0; /* cmp ecx, 0x1F40 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(ecx, 0x1F40)) goto loc_00442976; /* je: equal / zero */

loc_0044290E: ;
    if (CMP_EQ(ecx, 0x2B11)) goto loc_00442976; /* je: equal / zero */

loc_00442916: ;
    if (CMP_EQ(ecx, 0x3E80)) goto loc_0044292A; /* je: equal / zero */

loc_0044291E: ;
    if (CMP_NE(ecx, 0x5622)) { sub_004429BB(); return; } /* jne: not equal / not zero */

loc_0044292A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    SET_LO16(edi, MEM16(ebp + 8));
    ebx = eax + 0x3280;
    esi = eax + 0x57F0;
    MEM32(ebp + -4) = 9;

loc_00442945: ;
    SET_LO8(ecx, MEM8(esi));
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    PUSH32(esp, 1);
    eax--;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esi + -20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0044DC2D(); /* call 0x0044DC2D */

loc_0044295C: ;
    SET_LO16(edi, LO16(edi) + MEM16(esi));
    esp = esp + 0x14;
    esi++;
    esi++;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_00442945; /* jne: not equal / not zero */

loc_00442969: ;
    (void)0; /* cmp LO16(edi), 0x3C - flags set for next jcc */

loc_0044296D: ;
    if (CMP_EQ(LO16(edi), 0x3C)) { sub_004429BB(); return; } /* je: equal / zero */

loc_0044296F: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004429BD(); return; /* tail jmp 0x004429BD */

loc_00442976: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    SET_LO16(edi, MEM16(ebp + 8));
    ebx = eax + 0x3280;
    esi = eax + 0x57F0;
    MEM32(ebp + -4) = 8;

loc_00442991: ;
    SET_LO8(ecx, MEM8(esi));
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    PUSH32(esp, 1);
    eax--;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esi + -20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0044DC2D(); /* call 0x0044DC2D */

loc_004429A8: ;
    SET_LO16(edi, LO16(edi) + MEM16(esi));
    esp = esp + 0x14;
    esi++;
    esi++;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_00442991; /* jne: not equal / not zero */

loc_004429B5: ;
    (void)0; /* cmp LO16(edi), 0x30 - flags set for next jcc */
    goto loc_0044296D;

}

/**
 * sub_004429C2
 * Original: 0x004429C2 - 0x00442A41 (127 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004429C2(void)
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

loc_004429C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(MEM32(eax + 0x2C), 0)) goto loc_00442A3F; /* je: equal / zero */

loc_004429CE: ;
    SET_LO16(ecx, MEM16(eax + 0x10));
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)MEM16(eax + 0xE)));
    ecx = SX16(LO16(ecx));
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x7160);
    edx = esi + edx * 4;
    esi = eax + 0x71B0;
    eax = ZX16(MEM16(eax + 0x71AC));
    if (CMP_L(ecx, eax)) goto loc_004429FD; /* jl: less (signed <) */

loc_004429FB: ;
    ecx = eax;

loc_004429FD: ;
    eax = SX16(LO16(ecx));
    eax++;
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fld st(0) */
    if (CMP_LE(LO16(ecx) & LO16(ecx), 0)) goto loc_00442A3A; /* jle: less or equal (signed <=) */

loc_00442A14: ;
    eax = edx;
    esi = esi - edx;
    ecx = ZX16(LO16(ecx));

loc_00442A1B: ;
    /* fld st(1) */
    /* FPU: fsubr qword ptr [0x648d08] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    ecx--;
    /* fld st(1) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fstp st(2) */
    if ((ecx != 0)) goto loc_00442A1B; /* jne: not equal / not zero */

loc_00442A3A: ;
    /* fstp st(0) */
    POP32(esp, esi);
    /* fstp st(0) */

loc_00442A3F: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00442A41
 * Original: 0x00442A41 - 0x00442B94 (339 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442A41(void)
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

loc_00442A41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x150;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x4630);
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x2C), edx - flags set for next jcc */
    ecx = esi + 0x631C;
    MEM32(ebp + -12) = ecx;
    if (CMP_EQ(MEM32(esi + 0x2C), edx)) goto loc_00442B8F; /* je: equal / zero */

loc_00442A68: ;
    SET_LO16(ecx, MEM16(esi + 0x478A));
    MEM16(ebp + -16) = LO16(ecx);
    ecx = MEM32(esi + 0x5994);
    (void)0; /* cmp ecx, 0x50 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_LE(ecx, 0x50)) goto loc_00442A8D; /* jle: less or equal (signed <=) */

loc_00442A80: ;
    edx = edx + 0x50;
    edi = ZX16(LO16(edx));
    edi = edi + 0x50;
    if (CMP_L(edi, ecx)) goto loc_00442A80; /* jl: less (signed <) */

loc_00442A8D: ;
    ecx = MEM32(esi + 0x7160);
    edi = ZX16(LO16(edx));
    eax = eax - edi;
    ebx = ecx + eax * 4;
    eax = esi + 0x5998;
    PUSH32(esp, 0x307);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_00442AAC: ;
    edx = MEM32(ebp + 0xC);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = ZX16(MEM16(edx + 0x1458));
    eax = 0; /* xor self */
    ecx = ecx - eax;
    if ((ecx == 0)) goto loc_00442AD3; /* je: equal / zero */

loc_00442ABE: ;
    ecx--;
    if ((ecx == 0)) goto loc_00442ACA; /* je: equal / zero */

loc_00442AC1: ;
    MEM32(ebp + 8) = 2;
    goto loc_00442AD6;

loc_00442ACA: ;
    MEM32(ebp + 8) = 1;
    goto loc_00442AD6;

loc_00442AD3: ;
    MEM32(ebp + 8) = eax;

loc_00442AD6: ;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    SET_LO16(ecx, MEM16(edx + 0x143C));
    MEM16(ebp + -8) = LO16(ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_LE(edi, eax)) goto loc_00442B83; /* jle: less or equal (signed <=) */

loc_00442AEC: ;
    fp_push(MEMF(esi + 0x717C)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x7164));
    ecx = esi + 0x7180;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x9258));
    ecx = 0; /* xor self */
    PUSH32(esp, MEM32(esi + 0x9254));
    SET_LO8(ecx, MEM8(esi + 0x716E));
    eax = ebx + eax * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x7168));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x716C));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x5938));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x593C));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x5994));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -16));
    ecx = esi + 0x5998;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x50);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5808);
    PUSH32(esp, MEM32(ecx));
    ecx = ebp + -336;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044E28F(); /* call 0x0044E28F */

loc_00442B70: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x50;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    esp = esp + 0x4C;
    if (CMP_L(eax, edi)) goto loc_00442AEC; /* jl: less (signed <) */

loc_00442B83: ;
    edi = MEM32(ebp + -12);
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00442B8F: ;
    eax = 0; /* xor self */
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
 * sub_00442B94
 * Original: 0x00442B94 - 0x00442D13 (383 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442B94(void)
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

loc_00442B94: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x4630);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(ebx + 0x478A));
    (void)0; /* cmp LO16(esi), 1 - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    if (CMP_LE(LO16(esi), 1)) { sub_00442D13(); return; } /* jle: less or equal (signed <=) */

loc_00442BBB: ;
    if (CMP_G(LO16(esi), 0x10)) { sub_00442D13(); return; } /* jg: greater (signed >) */

loc_00442BC5: ;
    (void)0; /* cmp LO16(esi), 1 - flags set for next jcc */
    edx = MEM32(ebx + 0x7160);
    ecx = MEM32(ebx + 0x4754);
    PUSH32(esp, edi);
    edi = edx + eax * 4;
    ecx = ecx + eax * 2;
    MEM32(ebp + -12) = edi;
    if (CMP_L(LO16(esi), 1)) goto loc_00442C19; /* jl: less (signed <) */

loc_00442BE1: ;
    edx = ecx + -2;
    ecx = edi + -4;
    edi = ZX16(LO16(esi));
    eax = ebx + 0x6674;
    MEM32(ebp + -4) = edi;

loc_00442BF3: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx - 4;
    MEMF(eax + -192) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    edi = (uint32_t)(int32_t)SMEM16(edx);
    MEM32(ebp + -8) = edi;
    eax = eax + 4;
    edx--;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    edx--;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    MEMF(eax + 0x3DC) = (float)fp_top(); fp_popp(); /* fstp */
    if ((MEM32(ebp + -4) != 0)) goto loc_00442BF3; /* jne: not equal / not zero */

loc_00442C19: ;
    eax = ebx + 0x65F4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_00442C26: ;
    eax = ebx + 0x6634;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_00442C33: ;
    eax = ebx + 0x66B4;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_00442C41: ;
    fp_push(0.0); /* fldz */
    eax = 0; /* xor self */
    MEMF(ebx + 0x6AC4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(ebx + 0x6AC8) = LO16(eax);
    fp_push(0.0); /* fldz */
    MEM16(ebx + 0x6AC2) = LO16(eax);
    MEMF(ebx + 0x6ABC) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(ebx + 0x6AC0) = LO16(eax);
    eax = SX16(LO16(esi));
    MEM16(ebx + 0x6ACA) = 0xFF01;
    edx = MEM32(ebx + 0x5810);
    esi = MEM32(edx);
    eax = eax << 2;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebx + 0x6734;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = eax;
    eax = MEM32(ebx + 0x5814);
    esi = MEM32(eax);
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebx + 0x6774;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = MEM32(ebx + 0x5994);
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)(-(int32_t)eax);
    esp = esp + 0x18;
    (void)0; /* cmp MEM16(ebp + 8), 1 - flags set for next jcc */
    eax = ecx + eax * 4;
    esi = ebx + 0x6ACC;
    if (CMP_L(MEM16(ebp + 8), 1)) goto loc_00442CED; /* jl: less (signed <) */

loc_00442CD1: ;
    edi = ZX16(MEM16(ebp + 8));
    edx = ebp + -76;
    ecx = eax + -4;
    MEM32(ebp + -4) = edi;

loc_00442CDE: ;
    edi = MEM32(ecx);
    MEM32(edx) = edi;
    ecx = ecx - 4;
    edx = edx + 4;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_00442CDE; /* jne: not equal / not zero */

loc_00442CED: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebx + 0x5994));
    PUSH32(esp, ecx);
    ecx = ebp + -76;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x5808);
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00444332(); /* call 0x00444332 */

loc_00442D0D: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00442D18(); return; /* tail jmp 0x00442D18 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00442D1C
 * Original: 0x00442D1C - 0x00442DA4 (136 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442D1C(void)
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

loc_00442D1C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(ebp + -8) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x10));
    MEM16(ebp + -4) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x478A));
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM16(edi) = LO16(eax);
    eax = MEM32(esi);
    MEM32(edi + 4) = eax;
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(edi + 8) = LO16(eax);
    eax = MEM32(esi + 0x5994);
    MEM32(edi + 0xC) = eax;
    eax = MEM32(esi + 0x5938);
    MEM32(edi + 0x10) = eax;
    eax = MEM32(esi + 0x593C);
    MEM32(edi + 0x14) = eax;
    eax = MEM32(esi + 0x5968);
    ebx = ebx << 2;
    fp_push(MEMF(ebx + eax)); /* fld float */
    MEM32(edi + 0x1988) = 1;
    MEMF(edi + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esi + 0x5960);
    fp_push((double)SMEM32(esi + 0x593C)); /* fild */
    ecx = eax + ebx;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) { sub_00442DA4(); return; } /* jp: parity */

loc_00442DA0: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_seh_ebp = ebp; sub_00442DAA(); return; /* tail jmp 0x00442DAA */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00442EBC
 * Original: 0x00442EBC - 0x00442EE1 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442EBC(void)
{
    int _flags = 0; /* fallback flag var */

loc_00442EBC: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    edx = eax + esi * 4;
    PUSH32(esp, MEM32(edx));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004424CA(); /* call 0x004424CA */

loc_00442ED4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) { sub_00442EE1(); return; } /* je: equal / zero */

loc_00442EDA: ;
    eax = 0x80004005u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00442F0A
 * Original: 0x00442F0A - 0x00442F4B (65 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00442F0A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00442F0A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(esi), 0x1F40 - flags set for next jcc */
    eax = MEM32(esi + 0x4624);
    ebx = MEM32(esi + 0x7150);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -16) = ebx;
    if (CMP_NE(MEM32(esi), 0x1F40)) { sub_00442F4B(); return; } /* jne: not equal / not zero */

loc_00442F30: ;
    PUSH32(esp, 3);
    ecx = ebp + -36;
    eax = ebx + 0x3FA8;
    POP32(esp, edx);

loc_00442F3C: ;
    MEM32(ecx) = eax;
    eax = eax + 0x3FA8;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00442F3C; /* jne: not equal / not zero */

loc_00442F49: ;
    g_seh_ebp = ebp; sub_00442F54(); return; /* tail jmp 0x00442F54 */

}

/**
 * sub_00443235
 * Original: 0x00443235 - 0x00443269 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443235(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00443235: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 8);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = eax;
    edx = edx << 3;
    ecx = ecx - edx;
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = eax + ecx;
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = 0xFF00;
    if (CMP_LE(edi & edi, 0)) goto loc_00443261; /* jle: less or equal (signed <=) */

loc_0044325B: ;
    SET_LO16(ecx, LO16(edi));
    SET_LO16(edx, LO16(edx) >> LO8(ecx));

loc_00443261: ;
    MEM8(eax) = MEM8(eax) & LO8(edx);
    esi = MEM32(esp + 0x18);
    g_seh_ebp = ebp; sub_0044328F(); return; /* tail jmp 0x0044328F */

}

/**
 * sub_00443295
 * Original: 0x00443295 - 0x004432FA (101 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443295(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00443295: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x3C;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, 0x1F40)) { sub_004432FA(); return; } /* je: equal / zero */

loc_004432A8: ;
    if (CMP_EQ(eax, 0x2B11)) goto loc_004432EA; /* je: equal / zero */

loc_004432AF: ;
    if (CMP_EQ(eax, 0x3E80)) goto loc_004432DA; /* je: equal / zero */

loc_004432B6: ;
    if (CMP_EQ(eax, 0x5622)) goto loc_004432C7; /* je: equal / zero */

loc_004432BD: ;
    eax = 0x80040000u;
    g_seh_ebp = ebp; sub_0044347B(); return; /* tail jmp 0x0044347B */

loc_004432C7: ;
    SET_LO16(eax, MEM16(0x575574));
    MEM32(ebp + -4) = 0x22;
    MEM16(ebp + 0x10) = LO16(eax);
    g_seh_ebp = ebp; sub_00443304(); return; /* tail jmp 0x00443304 */

loc_004432DA: ;
    MEM32(ebp + -4) = 0x1A;
    MEM32(ebp + 0x10) = 0x22;
    g_seh_ebp = ebp; sub_00443304(); return; /* tail jmp 0x00443304 */

loc_004432EA: ;
    MEM32(ebp + -4) = 0x12;
    MEM32(ebp + 0x10) = 0x1A;
    g_seh_ebp = ebp; sub_00443304(); return; /* tail jmp 0x00443304 */

}

/**
 * sub_0044347E
 * Original: 0x0044347E - 0x0044351D (159 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044347E(void)
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

loc_0044347E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x1C), eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_LE(MEM32(ebp + 0x1C), eax)) goto loc_0044351B; /* jle: less or equal (signed <=) */

loc_00443492: ;
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    esi--;

loc_0044349F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(edi + eax * 2);
    MEM32(ebp + -4) = eax;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(0.0); /* fldz */
    if (TEST_S(esi, esi)) goto loc_004434F5; /* jl: less (signed <) */

loc_004434B8: ;
    ebx = MEM32(ebp + 0x14);
    edi = edx;
    edi = edi - MEM32(ebp + 0x18);
    ebx = ebx - edx;
    MEM32(ebp + -12) = ebx;
    ebx = esi + 1;
    eax = edx + esi * 4;
    ecx = ecx + esi * 4 + 4;
    MEM32(ebp + -4) = ebx;

loc_004434D2: ;
    ebx = MEM32(ebp + -12);
    fp_push(MEMF(eax)); /* fld float */
    ebx = ebx + eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax - 4;
    MEMF(edi + ecx) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx - 4;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if ((MEM32(ebp + -4) != 0)) goto loc_004434D2; /* jne: not equal / not zero */

loc_004434F5: ;
    ecx = MEM32(ebp + 0x18);
    /* fld st(1) */
    eax = MEM32(ebp + -8);
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(ebp + 0xC);
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax++;
    (void)0; /* cmp eax, MEM32(ebp + 0x1C) - flags set for next jcc */
    /* fstp st(0) */
    MEM32(ebp + -8) = eax;
    /* fstp st(0) */
    if (CMP_L(eax, MEM32(ebp + 0x1C))) goto loc_0044349F; /* jl: less (signed <) */

loc_00443518: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0044351B: ;
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
 * sub_0044351D
 * Original: 0x0044351D - 0x00443533 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044351D(void)
{

loc_0044351D: ;
    ecx = MEM32(esp + 4);
    eax = ZX16(MEM16(ecx));
    eax++;
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xFFFF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    MEM16(ecx) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00443533
 * Original: 0x00443533 - 0x00443833 (768 bytes, 237 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443533(void)
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

loc_00443533: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x35C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    SET_LO16(eax, MEM16(esi));
    if (CMP_A(LO16(eax), 0x10)) goto loc_00443830; /* ja: above (unsigned >) */

loc_0044354D: ;
    if (CMP_BE(LO16(eax), 1)) goto loc_00443830; /* jbe: below or equal (unsigned <=) */

loc_00443557: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x20), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 0x20), eax)) goto loc_004436B2; /* je: equal / zero */

loc_00443564: ;
    if (CMP_EQ(MEM32(ebp + 8), eax)) goto loc_0044382E; /* je: equal / zero */

loc_0044356D: ;
    (void)0; /* cmp MEM16(esi + 0x1474), LO16(eax) - flags set for next jcc */
    ecx = MEM32(esi + 0xC);
    ecx = esi + ecx * 4 + 0x4BC;
    MEM32(ebp + -8) = ecx;
    ecx = ebp + -796;
    MEM32(ebp + 0x18) = ecx;
    ecx = MEM32(esi + 0x20);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_BE(MEM16(esi + 0x1474), LO16(eax))) goto loc_0044382E; /* jbe: below or equal (unsigned <=) */

loc_00443599: ;
    edi = 0; /* xor self */
    goto loc_0044359F;

loc_0044359D: ;
    eax = 0; /* xor self */

loc_0044359F: ;
    ecx = ZX16(MEM16(esi + edi * 2 + 0x1458));
    ecx = ecx - eax;
    ebx = esi + edi * 2 + 0x3A8;
    if ((ecx == 0)) goto loc_004435C3; /* je: equal / zero */

loc_004435B2: ;
    ecx--;
    if ((ecx == 0)) goto loc_004435BC; /* je: equal / zero */

loc_004435B5: ;
    MEM16(ebx) = 2;
    goto loc_004435C7;

loc_004435BC: ;
    MEM16(ebx) = 1;
    goto loc_004435C7;

loc_004435C3: ;
    MEM16(ebx) = MEM16(ebx) & 0;

loc_004435C7: ;
    SET_LO16(eax, MEM16(ebx));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi));
    MEM16(esi + 0x4B4) = LO16(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + edi * 2 + 0x1978));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, edx);
    ecx = ecx << 6;
    ecx = ecx + esi + 0x123C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x48C));
    MEM32(ebp + -16) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + -20) = ecx;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_0044360A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -16);
    ecx = MEM32(ebp + 0x18);
    eax = eax << 2;
    ecx = ecx + eax;
    edx = ebp + -156;
    esp = esp + 0x20;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = ecx;
    if (CMP_A(ecx, edx)) goto loc_0044368E; /* ja: above (unsigned >) */

loc_00443629: ;
    fp_push(MEMF(ebp + 0x40)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x34));
    eax = 0; /* xor self */
    PUSH32(esp, MEM32(ebp + 0x1C));
    SET_LO16(eax, MEM16(esi + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x3C));
    PUSH32(esp, MEM32(ebp + 0x38));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x14));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xC));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + edi * 2 + 0x143C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_0044E28F(); /* call 0x0044E28F */

loc_00443685: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -28);
    esp = esp + 0x4C;

loc_0044368E: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    edi = (uint32_t)(int32_t)SMEM16(ebp + -4);
    eax = ZX16(MEM16(esi + 0x1474));
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(ebp + 0x18) = ecx;
    if (CMP_L(edi, eax)) goto loc_0044359D; /* jl: less (signed <) */

loc_004436AD: ;
    goto loc_0044382E;

loc_004436B2: ;
    if (CMP_EQ(MEM32(ebp + 8), eax)) goto loc_0044382E; /* je: equal / zero */

loc_004436BB: ;
    (void)0; /* cmp MEM16(esi + 0x1474), LO16(eax) - flags set for next jcc */
    ecx = MEM32(esi + 0xC);
    ebx = esi + ecx * 4 + 0x4BC;
    ecx = ebp + -796;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_BE(MEM16(esi + 0x1474), LO16(eax))) goto loc_0044372B; /* jbe: below or equal (unsigned <=) */

loc_004436DA: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, 1);
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + eax * 2 + 0x1978));
    PUSH32(esp, 1);
    eax = eax << 6;
    eax = eax + esi + 0x123C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x48C));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_00443F12(); /* call 0x00443F12 */

loc_00443709: ;
    ecx = ZX16(MEM16(esi + 0x1474));
    eax = SX16(LO16(edi));
    eax = eax << 2;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + eax;
    ebx = ebx + eax;
    esp = esp + 0x20;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    if (CMP_L(eax, ecx)) goto loc_004436DA; /* jl: less (signed <) */

loc_00443729: ;
    eax = 0; /* xor self */

loc_0044372B: ;
    ecx = ebp + -796;
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(esi + 0x20);
    MEM32(ebp + 0x18) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1450);
    ecx = ecx - eax;
    if ((ecx == 0)) goto loc_0044375A; /* je: equal / zero */

loc_00443745: ;
    ecx--;
    if ((ecx == 0)) goto loc_00443751; /* je: equal / zero */

loc_00443748: ;
    MEM32(ebp + -4) = 2;
    goto loc_0044375D;

loc_00443751: ;
    MEM32(ebp + -4) = 1;
    goto loc_0044375D;

loc_0044375A: ;
    MEM32(ebp + -4) = eax;

loc_0044375D: ;
    (void)0; /* cmp MEM16(ebp + 0x24), LO16(eax) - flags set for next jcc */
    SET_LO16(ecx, MEM16(ebp + -4));
    MEM16(esi + 0x4B4) = LO16(ecx);
    if (CMP_LE(MEM16(ebp + 0x24), LO16(eax))) goto loc_0044382E; /* jle: less or equal (signed <=) */

loc_00443772: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x28);
    ebx = ZX16(MEM16(ebp + 0x24));
    edi = edi << 2;
    MEM32(ebp + -12) = 1;

loc_00443784: ;
    fp_push((double)SMEM32(ebp + -12)); /* fild */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x3C4));
    eax = ebp + -92;
    PUSH32(esp, MEM32(esi + 0x3BC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0044473F(); /* call 0x0044473F */

loc_004437A9: ;
    eax = ZX16(MEM16(esi));
    PUSH32(esp, eax);
    eax = ebp + -156;
    PUSH32(esp, eax);
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004449ED(); /* call 0x004449ED */

loc_004437BD: ;
    esp = esp + 0x1C;
    fp_push(MEMF(ebp + 0x40)); /* fld float */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x10));
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x3C));
    PUSH32(esp, MEM32(ebp + 0x38));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x14));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xC));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x143C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -156;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_0044E28F(); /* call 0x0044E28F */

loc_0044381B: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + edi;
    MEM32(ebp + -8) = MEM32(ebp + -8) + edi;
    esp = esp + 0x4C;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    ebx--;
    if ((ebx != 0)) goto loc_00443784; /* jne: not equal / not zero */

loc_0044382E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00443830: ;
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
 * sub_00443833
 * Original: 0x00443833 - 0x0044393D (266 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443833(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00443833: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_0044383F: ;
    if (TEST_Z(eax, eax)) { sub_0044393D(); return; } /* je: equal / zero */

loc_00443847: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    PUSH32(esp, 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -4) = eax;
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = MEM32(ebp + 8);
    ecx = 1;
    esi = esi + 0x10;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */

loc_004438B0: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = edi + 0x10;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + 4;
    ebx = esi;
    esi = esi + 0x10;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    ebx = ebx - 4;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = ecx;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = eax << 2;
    MEMF(edi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    xmm7 = MEMF(edi); /* movups */

loc_00443911: ;
    xmm0 = MEMF(edx); /* movups */
    xmm1 = MEMF(ebx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    edx = edx + 4;
    ebx = ebx - 4;
    eax--;
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    if ((eax != 0)) goto loc_00443911; /* jne: not equal / not zero */

loc_0044392B: ;
    edx = MEM32(ebp + 0x10);
    ecx++;
    (void)0; /* cmp ecx, MEM32(ebp + -4) - flags set for next jcc */
    MEMF(edi) = xmm7; /* movups */
    if (CMP_L(ecx, MEM32(ebp + -4))) goto loc_004438B0; /* jl: less (signed <) */

loc_0044393B: ;
    g_seh_ebp = ebp; sub_00443981(); return; /* tail jmp 0x00443981 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00443986
 * Original: 0x00443986 - 0x0044398B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443986(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00443986: ;
    g_seh_ebp = ebp; sub_00443833(); return; /* tail jmp 0x00443833 */

}

/**
 * sub_0044398B
 * Original: 0x0044398B - 0x004439AB (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044398B(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0044398B: ;
    (void)0; /* cmp MEM16(esp + 8), 0 - flags set for next jcc */
    fp_push(0.0); /* fldz */
    if (CMP_EQ(MEM16(esp + 8), 0)) goto loc_004439AA; /* je: equal / zero */

loc_00443995: ;
    ecx = ZX16(MEM16(esp + 8));
    eax = MEM32(esp + 4);

loc_0044399E: ;
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax + 4;
    ecx--;
    /* fstp st(1) */
    if ((ecx != 0)) goto loc_0044399E; /* jne: not equal / not zero */

loc_004439AA: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004439AB
 * Original: 0x004439AB - 0x004439E3 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004439AB(void)
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

loc_004439AB: ;
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(0x649200)); /* fld float */
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(esp + 8), LO16(ecx) - flags set for next jcc */
    MEM16(edx) = LO16(ecx);
    if (CMP_LE(MEM16(esp + 8), LO16(ecx))) goto loc_004439E2; /* jle: less or equal (signed <=) */

loc_004439C1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);

loc_004439C6: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esi] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_004439D6; /* jp: parity */

loc_004439CF: ;
    /* fstp st(0) */
    fp_push(MEMF(esi)); /* fld float */
    MEM16(edx) = LO16(ecx);

loc_004439D6: ;
    ecx++;
    esi = esi + 4;
    if (CMP_L(LO16(ecx), MEM16(esp + 0xC))) goto loc_004439C6; /* jl: less (signed <) */

loc_004439E1: ;
    POP32(esp, esi);

loc_004439E2: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004439E3
 * Original: 0x004439E3 - 0x00443A1C (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004439E3(void)
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

loc_004439E3: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(eax)); /* fld float */
    MEM16(edx) = MEM16(edx) & 0;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    esi++;
    if (CMP_LE(MEM16(esp + 0xC), LO16(esi))) goto loc_00443A1A; /* jle: less or equal (signed <=) */

loc_004439FC: ;
    ecx = eax + 4;

loc_004439FF: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ecx] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00443A0F; /* jp: parity */

loc_00443A08: ;
    /* fstp st(0) */
    fp_push(MEMF(ecx)); /* fld float */
    MEM16(edx) = LO16(esi);

loc_00443A0F: ;
    esi++;
    ecx = ecx + 4;
    if (CMP_L(LO16(esi), MEM16(esp + 0xC))) goto loc_004439FF; /* jl: less (signed <) */

loc_00443A1A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00443A1C
 * Original: 0x00443A1C - 0x00443A49 (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443A1C(void)
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

loc_00443A1C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_EQ(MEM16(ebp + 0x14), 0)) goto loc_00443A47; /* je: equal / zero */

loc_00443A26: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ebp + 0x14));

loc_00443A34: ;
    fp_push(MEMF(edx)); /* fld float */
    edx = edx + 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + 4;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    esi--;
    if ((esi != 0)) goto loc_00443A34; /* jne: not equal / not zero */

loc_00443A46: ;
    POP32(esp, esi);

loc_00443A47: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00443A49
 * Original: 0x00443A49 - 0x00443AAB (98 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443A49(void)
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

loc_00443A49: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMD(0x648F30)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00443A7F; /* jp: parity */

loc_00443A5F: ;
    if (CMP_EQ(MEM16(ebp + 0x18), 0)) goto loc_00443AA8; /* je: equal / zero */

loc_00443A66: ;
    edx = ZX16(MEM16(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);

loc_00443A70: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    eax = eax + 4;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00443A70; /* jne: not equal / not zero */

loc_00443A7D: ;
    goto loc_00443AA8;

loc_00443A7F: ;
    if (CMP_EQ(MEM16(ebp + 0x18), 0)) goto loc_00443AA8; /* je: equal / zero */

loc_00443A86: ;
    esi = ZX16(MEM16(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);

loc_00443A93: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = ecx + 4;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    esi--;
    if ((esi != 0)) goto loc_00443A93; /* jne: not equal / not zero */

loc_00443AA8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00443AAB
 * Original: 0x00443AAB - 0x00443B0D (98 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443AAB(void)
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

loc_00443AAB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    fp_push(MEMF(0x648CF8)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00443AE1; /* jp: parity */

loc_00443AC1: ;
    if (CMP_EQ(MEM16(ebp + 0x18), 0)) goto loc_00443B0A; /* je: equal / zero */

loc_00443AC8: ;
    edx = ZX16(MEM16(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);

loc_00443AD2: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    eax = eax + 4;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00443AD2; /* jne: not equal / not zero */

loc_00443ADF: ;
    goto loc_00443B0A;

loc_00443AE1: ;
    if (CMP_EQ(MEM16(ebp + 0x18), 0)) goto loc_00443B0A; /* je: equal / zero */

loc_00443AE8: ;
    esi = ZX16(MEM16(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);

loc_00443AF5: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = ecx + 4;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    esi--;
    if ((esi != 0)) goto loc_00443AF5; /* jne: not equal / not zero */

loc_00443B0A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00443B0D
 * Original: 0x00443B0D - 0x00443B27 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443B0D(void)
{
    int _flags = 0; /* fallback flag var */

loc_00443B0D: ;
    if (CMP_EQ(MEM16(esp + 0xC), 0)) goto loc_00443B26; /* je: equal / zero */

loc_00443B15: ;
    ecx = ZX16(MEM16(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00443B26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00443B27
 * Original: 0x00443B27 - 0x00443B4C (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443B27(void)
{
    int _flags = 0; /* fallback flag var */

loc_00443B27: ;
    if (CMP_EQ(MEM16(esp + 0xC), 0)) goto loc_00443B4B; /* je: equal / zero */

loc_00443B2F: ;
    edx = ZX16(MEM16(esp + 0xC));
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);

loc_00443B3D: ;
    SET_LO16(esi, MEM16(ecx));
    MEM16(eax) = LO16(esi);
    eax++;
    eax++;
    ecx++;
    ecx++;
    edx--;
    if ((edx != 0)) goto loc_00443B3D; /* jne: not equal / not zero */

loc_00443B4A: ;
    POP32(esp, esi);

loc_00443B4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00443B4C
 * Original: 0x00443B4C - 0x00443B9D (81 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443B4C(void)
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

loc_00443B4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = ZX16(MEM16(ebp + 0x10));
    fp_push(0.0); /* fldz */
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x10) = edx;
    if (CMP_LE(edx & edx, 0)) goto loc_00443B7C; /* jle: less or equal (signed <=) */

loc_00443B64: ;
    eax = 0; /* xor self */
    PUSH32(esp, edi);

loc_00443B67: ;
    edi = MEM32(ebp + 8);
    fp_push(MEMF(edi + eax * 4)); /* fld float */
    esi++;
    fp_top() = fabs(fp_top()); /* fabs */
    eax = SX16(LO16(esi));
    (void)0; /* cmp eax, edx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(eax, edx)) goto loc_00443B67; /* jl: less (signed <) */

loc_00443B7B: ;
    POP32(esp, edi);

loc_00443B7C: ;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    POP32(esp, esi);
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d14] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00443B9B; /* jp: parity */

loc_00443B97: ;
    fp_push(1.0); /* fld1 */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */

loc_00443B9B: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00443B9D
 * Original: 0x00443B9D - 0x00443BA2 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443B9D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00443B9D: ;
    g_seh_ebp = ebp; sub_00448C97(); return; /* tail jmp 0x00448C97 */

}

/**
 * sub_00443BA2
 * Original: 0x00443BA2 - 0x00443BB6 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443BA2(void)
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

loc_00443BA2: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00443BB5; /* je: equal / zero */

loc_00443BB3: ;
    fp_top() = -fp_top(); /* fchs */

loc_00443BB5: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00443BB6
 * Original: 0x00443BB6 - 0x00443BFC (70 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443BB6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00443BB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x18);
    if (CMP_EQ(eax, 0x1F40)) { sub_00443BFC(); return; } /* je: equal / zero */

loc_00443BC3: ;
    if (CMP_EQ(eax, 0x2B11)) goto loc_00443BF0; /* je: equal / zero */

loc_00443BCA: ;
    if (CMP_EQ(eax, 0x3E80)) goto loc_00443BE4; /* je: equal / zero */

loc_00443BD1: ;
    if (CMP_NE(eax, 0x5622)) { sub_00443BFC(); return; } /* jne: not equal / not zero */

loc_00443BD8: ;
    eax = 0x565154;
    ecx = 0x563E80;
    g_seh_ebp = ebp; sub_00443C06(); return; /* tail jmp 0x00443C06 */

loc_00443BE4: ;
    eax = 0x565ADC;
    ecx = 0x565168;
    g_seh_ebp = ebp; sub_00443C06(); return; /* tail jmp 0x00443C06 */

loc_00443BF0: ;
    eax = 0x565D84;
    ecx = 0x565AF0;
    g_seh_ebp = ebp; sub_00443C06(); return; /* tail jmp 0x00443C06 */

}

/**
 * sub_00443C20
 * Original: 0x00443C20 - 0x00443C7D (93 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443C20(void)
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

loc_00443C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00448DAD(); /* call 0x00448DAD */

loc_00443C31: ;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(LO16(edx) & LO16(edx), 0)) goto loc_00443C7A; /* jle: less or equal (signed <=) */

loc_00443C38: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + 0x14) = edx;
    edi = edi - esi;
    ebx = ZX16(LO16(edx));

loc_00443C45: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00443C6F; /* jnp: not parity */

loc_00443C56: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    fp_push(MEMF(esi)); /* fld float */
    eax = edi + esi;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00443A49(); /* call 0x00443A49 */

loc_00443C6C: ;
    esp = esp + 0x14;

loc_00443C6F: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    esi = esi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_00443C45; /* jne: not equal / not zero */

loc_00443C78: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00443C7A: ;
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
 * sub_00443C7D
 * Original: 0x00443C7D - 0x00443EAA (557 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443C7D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00443C7D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    if (CMP_L(MEM32(ebp + 0x18), 1)) goto loc_00443EA8; /* jl: less (signed <) */

loc_00443C8D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    edi = eax;
    eax = eax << 3;
    esi = esi - eax;
    ebx = esi;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(ebp + -16) = ebx;
    esi = eax;
    eax = eax << 3;
    ecx = ecx - eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edx = ecx;
    if (TEST_NZ(ebx, ebx)) goto loc_00443D7C; /* jne: not equal / not zero */

loc_00443CC7: ;
    if (TEST_NZ(edx, edx)) goto loc_00443CF1; /* jne: not equal / not zero */

loc_00443CCB: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_LE(eax & eax, 0)) goto loc_00443EA5; /* jle: less or equal (signed <=) */

loc_00443CD6: ;
    ecx = MEM32(ebp + 8);
    esi = esi + MEM32(ebp + 0x10);
    ecx = ecx + edi;
    eax--;
    eax = eax >> 3;
    eax++;

loc_00443CE3: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    MEM8(esi) = LO8(edx);
    esi++;
    eax--;
    if ((eax != 0)) goto loc_00443CE3; /* jne: not equal / not zero */

loc_00443CEC: ;
    goto loc_00443EA5;

loc_00443CF1: ;
    ebx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + ebx));
    SET_LO8(ecx, 8);
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    SET_LO8(eax, LO8(eax) >> LO8(ecx));
    MEM32(ebp + -12) = 8;
    MEM32(ebp + -12) = MEM32(ebp + -12) - edx;
    ecx = MEM32(ebp + -12);
    SET_LO16(eax, ZX8(LO8(eax)));
    eax = eax << LO8(ecx);
    ecx = MEM32(ebp + 0x18);
    ecx = edx + ecx + -8;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00443D56; /* jle: less or equal (signed <=) */

loc_00443D1B: ;
    ecx--;
    ecx = ecx >> 3;
    ecx++;
    MEM32(ebp + -20) = ecx;
    ecx = ecx << 3;
    MEM32(ebp + -8) = ecx;

loc_00443D29: ;
    ecx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(edi + ecx));
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    ecx = MEM32(ebp + -12);
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    SET_LO8(eax, LO8(ebx));
    ebx = MEM32(ebp + 0x10);
    MEM8(esi + ebx) = LO8(eax);
    eax = MEM32(ebp + 8);
    SET_LO16(eax, ZX8(MEM8(edi + eax)));
    esi++;
    edi++;
    eax = eax << LO8(ecx);
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    MEM8(esi + ebx) = LO8(eax);
    if ((MEM32(ebp + -20) != 0)) goto loc_00443D29; /* jne: not equal / not zero */

loc_00443D56: ;
    ecx = MEM32(ebp + 0x18);
    if (CMP_GE(MEM32(ebp + -8), ecx)) goto loc_00443EA5; /* jge: greater or equal (signed >=) */

loc_00443D62: ;
    ecx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(edi + ecx));
    MEM8(ebp + 0x1B) = LO8(ecx);
    SET_LO8(ecx, LO8(edx));
    SET_LO8(edx, MEM8(ebp + 0x1B));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM8(esi + ebx) = LO8(edx);
    goto loc_00443EA5;

loc_00443D7C: ;
    if (TEST_NZ(edx, edx)) goto loc_00443DEF; /* jne: not equal / not zero */

loc_00443D80: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x18);
    SET_LO16(edx, ZX8(MEM8(edi + ecx)));
    eax = ebx + eax + -8;
    edi++;
    if (CMP_LE(eax & eax, 0)) goto loc_00443DD2; /* jle: less or equal (signed <=) */

loc_00443D94: ;
    PUSH32(esp, 8);
    edi = edi + ecx;
    POP32(esp, ebx);
    ebx = ebx - MEM32(ebp + -16);
    eax--;
    eax = eax >> 3;
    eax++;
    ecx = eax;
    ecx = ecx << 3;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -8) = ecx;
    goto loc_00443DB1;

loc_00443DAE: ;
    ebx = MEM32(ebp + -24);

loc_00443DB1: ;
    SET_LO16(ecx, ZX8(MEM8(edi)));
    edx = edx << 8;
    edx = edx + ecx;
    ecx = edx;
    MEM32(ebp + -20) = ecx;
    SET_LO16(ecx, LO16(ebx));
    ebx = edx;
    SET_LO16(ebx, LO16(ebx) >> LO8(ecx));
    ecx = MEM32(ebp + 0x10);
    edi++;
    MEM8(esi + ecx) = LO8(ebx);
    esi++;
    eax--;
    if ((eax != 0)) goto loc_00443DAE; /* jne: not equal / not zero */

loc_00443DD2: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_GE(MEM32(ebp + -8), eax)) goto loc_00443EA5; /* jge: greater or equal (signed >=) */

loc_00443DDE: ;
    eax = 0; /* xor self */
    SET_HI8(eax, LO8(edx));
    SET_LO8(ecx, 8);
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + -16));
    SET_LO16(eax, LO16(eax) >> LO8(ecx));
    goto loc_00443E9F;

loc_00443DEF: ;
    eax = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + eax));
    PUSH32(esp, 8);
    POP32(esp, ecx);
    ecx = ecx - edx;
    SET_LO8(eax, LO8(eax) >> LO8(ecx));
    MEM32(ebp + -12) = 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) - edx;
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(ebp + -12);
    SET_LO16(ebx, ZX8(LO8(eax)));
    eax = MEM32(ebp + 8);
    SET_LO16(eax, ZX8(MEM8(edi + eax)));
    MEM16(ebp + -20) = LO16(eax);
    eax = MEM32(ebp + 0x18);
    ebx = ebx << LO8(ecx);
    eax = edx + eax + -8;
    edi++;
    if (CMP_LE(eax & eax, 0)) goto loc_00443E76; /* jle: less or equal (signed <=) */

loc_00443E2A: ;
    eax--;
    eax = eax >> 3;
    eax++;
    MEM32(ebp + -24) = eax;
    eax = eax << 3;
    MEM32(ebp + -8) = eax;

loc_00443E38: ;
    eax = MEM32(ebp + 8);
    SET_LO16(eax, ZX8(MEM8(edi + eax)));
    ecx = MEM32(ebp + -20);
    ecx = ecx << 8;
    eax = eax + ecx;
    ecx = MEM32(ebp + -16);
    MEM32(ebp + -20) = eax;
    eax = eax << LO8(ecx);
    SET_LO16(ecx, LO16(edx));
    edi++;
    SET_LO16(eax, LO16(eax) >> LO8(ecx));
    ecx = MEM32(ebp + 0x10);
    eax = eax | ebx;
    MEM8(esi + ecx) = HI8(eax);
    esi++;
    MEM8(esi + ecx) = LO8(eax);
    SET_LO16(ecx, MEM16(ebp + -28));
    SET_LO16(eax, LO16(eax) >> LO8(ecx));
    ecx = MEM32(ebp + -12);
    eax = eax << LO8(ecx);
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    ebx = eax;
    if ((MEM32(ebp + -24) != 0)) goto loc_00443E38; /* jne: not equal / not zero */

loc_00443E76: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_GE(MEM32(ebp + -8), eax)) goto loc_00443EA5; /* jge: greater or equal (signed >=) */

loc_00443E7E: ;
    eax = MEM32(ebp + 8);
    SET_LO16(eax, ZX8(MEM8(edi + eax)));
    edi = MEM32(ebp + -20);
    ecx = MEM32(ebp + -16);
    edi = edi << 8;
    SET_LO8(ebx, HI8(ebx));
    eax = eax + edi;
    eax = eax << LO8(ecx);
    SET_LO16(ecx, LO16(edx));
    SET_LO16(eax, LO16(eax) >> LO8(ecx));
    SET_LO8(eax, HI8(eax));
    SET_LO8(eax, LO8(eax) | LO8(ebx));

loc_00443E9F: ;
    ecx = MEM32(ebp + 0x10);
    MEM8(esi + ecx) = LO8(eax);

loc_00443EA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00443EA8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00443EAA
 * Original: 0x00443EAA - 0x00443F12 (104 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443EAA(void)
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

loc_00443EAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    MEM32(ebp + -64) = eax;
    eax = ZX16(LO16(esi));
    ecx = eax + -1;
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00443EDE; /* jle: less or equal (signed <=) */

loc_00443EC6: ;
    eax = 0; /* xor self */

loc_00443EC8: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = eax << 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx++;
    MEMF(ebp + eax + -60) = (float)fp_top(); fp_popp(); /* fstp */
    eax = SX16(LO16(edx));
    if (CMP_L(eax, ecx)) goto loc_00443EC8; /* jl: less (signed <) */

loc_00443EDE: ;
    esi--;
    if (TEST_S(LO16(esi), LO16(esi))) goto loc_00443F0F; /* jl: less (signed <) */

loc_00443EE4: ;
    ecx = MEM32(ebp + 0xC);
    edx = ebp + -64;
    ecx = ecx - edx;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = SX16(LO16(esi));
    edi = ebp + -64;
    edx = edx - edi;
    esi++;
    eax = ebp + eax * 4 + -64;
    esi = SX16(LO16(esi));
    POP32(esp, edi);

loc_00443F01: ;
    fp_push(MEMF(ecx + eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx + eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax - 4;
    esi--;
    if ((esi != 0)) goto loc_00443F01; /* jne: not equal / not zero */

loc_00443F0F: ;
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
 * sub_00443F12
 * Original: 0x00443F12 - 0x00444332 (1056 bytes, 326 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00443F12(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00443F12: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xA8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    if (CMP_EQ(eax, 0)) goto loc_0044432D; /* je: equal / zero */

loc_00443F2B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    if (CMP_EQ(eax, 0)) goto loc_0044432D; /* je: equal / zero */

loc_00443F35: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x20);
    if (CMP_EQ(eax, 0)) goto loc_00443F55; /* je: equal / zero */

loc_00443F3E: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    esi = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 8);

loc_00443F48: ;
    eax = MEM32(esi);
    edi = edi - 4;
    esi = esi + 4;
    MEM32(edi) = eax;
    ecx--;
    if ((ecx != 0)) goto loc_00443F48; /* jne: not equal / not zero */

loc_00443F55: ;
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_00443F5A: ;
    if (TEST_Z(eax, eax)) goto loc_004440BC; /* je: equal / zero */

loc_00443F62: ;
    eax = ZX16(MEM16(ebp + 0x1C));
    if (CMP_NE(eax, 0xA)) goto loc_004440BC; /* jne: not equal / not zero */

loc_00443F6F: ;
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    edi = edi - 0x38;
    ebx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_push(MEMF(ebx + 8)); /* fld float */
    xmm0 = MEMF(ebx + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    MEMF(ebp + -16) = xmm0; /* movups */
    xmm1 = MEMF(ebx + 0x10); /* movss */
    /* shufps xmm1, xmm1, 0 */
    MEMF(ebp + -36) = xmm1; /* movups */
    xmm2 = MEMF(ebx + 0x14); /* movss */
    /* shufps xmm2, xmm2, 0 */
    xmm3 = MEMF(ebx + 0x18); /* movss */
    /* shufps xmm3, xmm3, 0 */
    xmm4 = MEMF(ebx + 0x1C); /* movss */
    /* shufps xmm4, xmm4, 0 */
    xmm5 = MEMF(ebx + 0x20); /* movss */
    /* shufps xmm5, xmm5, 0 */
    xmm6 = MEMF(ebx + 0x24); /* movss */
    /* shufps xmm6, xmm6, 0 */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    ecx = ecx >> 2;

loc_00443FD1: ;
    xmm7 = MEMF(esi); /* movups */
    edi = edi + 0x10;
    xmm0 = MEMF(edi); /* movups */
    /* mulps: xmm0 *= xmm6 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 0x10;
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 4); /* movups */
    /* mulps: xmm0 *= xmm5 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 8); /* movups */
    /* mulps: xmm0 *= xmm4 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = MEMF(edi + 0xC); /* movups */
    /* mulps: xmm0 *= xmm3 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 0x10); /* movups */
    /* mulps: xmm0 *= xmm2 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = MEMF(edi + 0x14); /* movups */
    xmm1 = MEMF(ebp + -36); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    ecx--;
    xmm0 = MEMF(edi + 0x18); /* movups */
    xmm1 = MEMF(ebp + -16); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    MEMF(ebp + -20) = xmm7; /* movss */
    /* shufps xmm7, xmm7, 0xe5 */
    fp_push(MEMF(ebp + -20)); /* fld float */
    /* FPU: fsubrp st(1) */
    MEMF(ebp + -20) = xmm7; /* movss */
    /* shufps xmm7, xmm7, 0xe6 */
    fp_push(MEMF(ebp + -20)); /* fld float */
    /* FPU: fsubrp st(2) */
    MEMF(ebp + -20) = xmm7; /* movss */
    /* shufps xmm7, xmm7, 0xe7 */
    fp_push(MEMF(ebp + -20)); /* fld float */
    /* FPU: fsubrp st(3) */
    MEMF(ebp + -20) = xmm7; /* movss */
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(edi + 0x2C) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(edi + 0x30) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -20)); /* fld float */
    /* FPU: fsubrp st(1) */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(edi + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_00443FD1; /* jne: not equal / not zero */

loc_004440B1: ;
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    goto loc_00444306;

loc_004440BC: ;
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_004440C1: ;
    if (TEST_Z(eax, eax)) goto loc_004442D4; /* je: equal / zero */

loc_004440C9: ;
    eax = ZX16(MEM16(ebp + 0x1C));
    if (CMP_NE(eax, 0x10)) goto loc_004442D4; /* jne: not equal / not zero */

loc_004440D6: ;
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    edi = edi - 0x50;
    ebx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_push(MEMF(ebx + 8)); /* fld float */
    xmm0 = MEMF(ebx + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    MEMF(ebp + -116) = xmm0; /* movups */
    xmm1 = MEMF(ebx + 0x10); /* movss */
    /* shufps xmm1, xmm1, 0 */
    MEMF(ebp + -136) = xmm1; /* movups */
    xmm2 = MEMF(ebx + 0x14); /* movss */
    /* shufps xmm2, xmm2, 0 */
    MEMF(ebp + -84) = xmm2; /* movups */
    xmm3 = MEMF(ebx + 0x18); /* movss */
    /* shufps xmm3, xmm3, 0 */
    MEMF(ebp + -68) = xmm3; /* movups */
    xmm4 = MEMF(ebx + 0x1C); /* movss */
    /* shufps xmm4, xmm4, 0 */
    MEMF(ebp + -152) = xmm4; /* movups */
    xmm5 = MEMF(ebx + 0x20); /* movss */
    /* shufps xmm5, xmm5, 0 */
    MEMF(ebp + -100) = xmm5; /* movups */
    xmm6 = MEMF(ebx + 0x24); /* movss */
    /* shufps xmm6, xmm6, 0 */
    MEMF(ebp + -168) = xmm6; /* movups */
    xmm7 = MEMF(ebx + 0x28); /* movss */
    /* shufps xmm7, xmm7, 0 */
    MEMF(ebp + -52) = xmm7; /* movups */
    xmm2 = MEMF(ebx + 0x2C); /* movss */
    /* shufps xmm2, xmm2, 0 */
    xmm3 = MEMF(ebx + 0x30); /* movss */
    /* shufps xmm3, xmm3, 0 */
    xmm4 = MEMF(ebx + 0x34); /* movss */
    /* shufps xmm4, xmm4, 0 */
    xmm5 = MEMF(ebx + 0x38); /* movss */
    /* shufps xmm5, xmm5, 0 */
    xmm6 = MEMF(ebx + 0x3C); /* movss */
    /* shufps xmm6, xmm6, 0 */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    ecx = ecx >> 2;

loc_0044418F: ;
    xmm7 = MEMF(esi); /* movups */
    edi = edi + 0x10;
    xmm0 = MEMF(edi); /* movups */
    /* mulps: xmm0 *= xmm6 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 0x10;
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 4); /* movups */
    /* mulps: xmm0 *= xmm5 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 8); /* movups */
    /* mulps: xmm0 *= xmm4 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = MEMF(edi + 0xC); /* movups */
    /* mulps: xmm0 *= xmm3 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x34)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 0x10); /* movups */
    /* mulps: xmm0 *= xmm2 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = MEMF(edi + 0x14); /* movups */
    xmm1 = MEMF(ebp + -52); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    fp_push(MEMF(edi + 0x3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    ecx--;
    xmm0 = MEMF(edi + 0x18); /* movups */
    xmm1 = MEMF(ebp + -168); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 0x1C); /* movups */
    xmm1 = MEMF(ebp + -100); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 0x20); /* movups */
    xmm1 = MEMF(ebp + -152); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 0x24); /* movups */
    xmm1 = MEMF(ebp + -68); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 0x28); /* movups */
    xmm1 = MEMF(ebp + -84); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 0x2C); /* movups */
    xmm1 = MEMF(ebp + -136); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    xmm0 = MEMF(edi + 0x30); /* movups */
    xmm1 = MEMF(ebp + -116); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    MEMF(ebp + -120) = xmm7; /* movss */
    /* shufps xmm7, xmm7, 0xe5 */
    fp_push(MEMF(ebp + -120)); /* fld float */
    /* FPU: fsubrp st(1) */
    MEMF(ebp + -120) = xmm7; /* movss */
    /* shufps xmm7, xmm7, 0xe6 */
    fp_push(MEMF(ebp + -120)); /* fld float */
    /* FPU: fsubrp st(2) */
    MEMF(ebp + -120) = xmm7; /* movss */
    /* shufps xmm7, xmm7, 0xe7 */
    fp_push(MEMF(ebp + -120)); /* fld float */
    /* FPU: fsubrp st(3) */
    MEMF(ebp + -120) = xmm7; /* movss */
    MEMF(edi + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(edi + 0x44) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(edi + 0x40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(edi + 0x48) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -120)); /* fld float */
    /* FPU: fsubrp st(1) */
    fp_push(MEMF(edi + 0x44)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(edi + 0x40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(edi + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_0044418F; /* jne: not equal / not zero */

loc_004442CC: ;
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    goto loc_00444306;

loc_004442D4: ;
    edi = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);

loc_004442DE: ;
    fp_push(MEMF(ebx)); /* fld float */
    edx = MEM32(ebp + 0x10);
    esi = edi;
    esi = esi - 4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);

loc_004442EC: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + 4;
    esi = esi - 4;
    eax--;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    if ((eax != 0)) goto loc_004442EC; /* jne: not equal / not zero */

loc_004442FB: ;
    ebx = ebx + 4;
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi + 4;
    ecx--;
    if ((ecx != 0)) goto loc_004442DE; /* jne: not equal / not zero */

loc_00444306: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    if (CMP_EQ(eax, 0)) goto loc_0044432D; /* je: equal / zero */

loc_0044430F: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    edx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    esi = edx + eax * 4;
    edi = MEM32(ebp + 0x14);

loc_00444320: ;
    esi = esi - 4;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    edi = edi + 4;
    ecx--;
    if ((ecx != 0)) goto loc_00444320; /* jne: not equal / not zero */

loc_0044432D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_00444332
 * Original: 0x00444332 - 0x00444694 (866 bytes, 250 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444332(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00444332: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0x104C;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0044433F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_00444347: ;
    edx = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_00444694(); return; } /* je: equal / zero */

loc_00444351: ;
    ecx = ZX16(MEM16(ebp + 0x18));
    ebx = ZX16(MEM16(ebp + 0x1C));
    eax = ecx;
    eax = eax >> 2;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = ebx;
    if (CMP_LE(ebx & ebx, 0)) goto loc_00444383; /* jle: less or equal (signed <=) */

loc_0044436B: ;
    eax = MEM32(ebp + 0x14);
    eax = eax + ebx * 4 + -4;

loc_00444372: ;
    fp_push(MEMF(eax)); /* fld float */
    edx++;
    MEMF(ebp + edx * 4 + -4176) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax - 4;
    if (CMP_L(edx, ebx)) goto loc_00444372; /* jl: less (signed <) */

loc_00444383: ;
    (void)0; /* cmp MEM16(ebp + 0x1C), 0xA - flags set for next jcc */
    esi = MEM32(ebp + 0xC);
    edi = ebp + ebx * 4 + -4172;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_NE(MEM16(ebp + 0x1C), 0xA)) goto loc_004444A6; /* jne: not equal / not zero */

loc_0044439A: ;
    esi = MEM32(ebp + 0x10);
    xmm0 = MEMF(esi + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm1 = MEMF(esi + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm2 = MEMF(esi + 0x1C); /* movss */
    /* shufps xmm2, xmm2, 0 */
    xmm3 = MEMF(esi + 0x20); /* movss */
    /* shufps xmm3, xmm3, 0 */
    xmm4 = MEMF(esi + 0x24); /* movss */
    /* shufps xmm4, xmm4, 0 */
    edx = ebp + -4172;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    esi = edx + eax * 4;
    edi = MEM32(ebp + 8);
    edi = edi - 0x10;
    ecx = MEM32(ebp + -8);

loc_004443E0: ;
    xmm7 = MEMF(esi); /* movups */
    xmm6 = MEMF(edx); /* movups */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    edi = edi + 0x10;
    esi = esi + 0x10;
    xmm5 = MEMF(edx + 4); /* movups */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm6 = MEMF(edx + 8); /* movups */
    /* mulps: xmm6 *= xmm2 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm5 = MEMF(edx + 0xC); /* movups */
    /* mulps: xmm5 *= xmm1 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm6 = MEMF(edx + 0x10); /* movups */
    /* mulps: xmm6 *= xmm0 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    edx = edx + 0x10;
    ecx--;
    MEMF(edi) = xmm7; /* movups */
    if ((ecx != 0)) goto loc_004443E0; /* jne: not equal / not zero */

loc_00444423: ;
    esi = MEM32(ebp + 0x10);
    xmm0 = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm1 = MEMF(esi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm2 = MEMF(esi + 8); /* movss */
    /* shufps xmm2, xmm2, 0 */
    xmm3 = MEMF(esi + 0xC); /* movss */
    /* shufps xmm3, xmm3, 0 */
    xmm4 = MEMF(esi + 0x10); /* movss */
    /* shufps xmm4, xmm4, 0 */
    edx = ebp + -4172;
    edx = edx + 0x14;
    edi = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);

loc_00444461: ;
    xmm7 = MEMF(edi); /* movups */
    xmm6 = MEMF(edx); /* movups */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm5 = MEMF(edx + 4); /* movups */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm6 = MEMF(edx + 8); /* movups */
    /* mulps: xmm6 *= xmm2 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm5 = MEMF(edx + 0xC); /* movups */
    /* mulps: xmm5 *= xmm1 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm6 = MEMF(edx + 0x10); /* movups */
    /* mulps: xmm6 *= xmm0 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    edx = edx + 0x10;
    MEMF(edi) = xmm7; /* movups */
    edi = edi + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_00444461; /* jne: not equal / not zero */

loc_004444A1: ;
    g_seh_ebp = ebp; sub_00444716(); return; /* tail jmp 0x00444716 */

loc_004444A6: ;
    if (CMP_NE(MEM16(ebp + 0x1C), 0x10)) goto loc_0044464F; /* jne: not equal / not zero */

loc_004444B1: ;
    esi = MEM32(ebp + 0x10);
    xmm0 = MEMF(esi + 0x28); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm1 = MEMF(esi + 0x2C); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm2 = MEMF(esi + 0x30); /* movss */
    /* shufps xmm2, xmm2, 0 */
    xmm3 = MEMF(esi + 0x34); /* movss */
    /* shufps xmm3, xmm3, 0 */
    xmm4 = MEMF(esi + 0x38); /* movss */
    /* shufps xmm4, xmm4, 0 */
    xmm5 = MEMF(esi + 0x3C); /* movss */
    /* shufps xmm5, xmm5, 0 */
    edx = ebp + -4172;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    esi = edx + eax * 4;
    edi = MEM32(ebp + 8);
    edi = edi - 0x10;
    ecx = MEM32(ebp + -8);

loc_00444500: ;
    xmm7 = MEMF(esi); /* movups */
    xmm6 = MEMF(edx); /* movups */
    /* mulps: xmm6 *= xmm5 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    edi = edi + 0x10;
    esi = esi + 0x10;
    xmm6 = MEMF(edx + 4); /* movups */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm6 = MEMF(edx + 8); /* movups */
    /* mulps: xmm6 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm6 = MEMF(edx + 0xC); /* movups */
    /* mulps: xmm6 *= xmm2 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm6 = MEMF(edx + 0x10); /* movups */
    /* mulps: xmm6 *= xmm1 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm6 = MEMF(edx + 0x14); /* movups */
    /* mulps: xmm6 *= xmm0 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    edx = edx + 0x10;
    ecx--;
    MEMF(edi) = xmm7; /* movups */
    if ((ecx != 0)) goto loc_00444500; /* jne: not equal / not zero */

loc_0044454D: ;
    esi = MEM32(ebp + 0x10);
    xmm0 = MEMF(esi + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm1 = MEMF(esi + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm2 = MEMF(esi + 0x1C); /* movss */
    /* shufps xmm2, xmm2, 0 */
    xmm3 = MEMF(esi + 0x20); /* movss */
    /* shufps xmm3, xmm3, 0 */
    xmm4 = MEMF(esi + 0x24); /* movss */
    /* shufps xmm4, xmm4, 0 */
    edx = ebp + -4172;
    edx = edx + 0x18;
    edi = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);

loc_0044458C: ;
    xmm7 = MEMF(edi); /* movups */
    xmm6 = MEMF(edx); /* movups */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm5 = MEMF(edx + 4); /* movups */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm6 = MEMF(edx + 8); /* movups */
    /* mulps: xmm6 *= xmm2 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm5 = MEMF(edx + 0xC); /* movups */
    /* mulps: xmm5 *= xmm1 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm6 = MEMF(edx + 0x10); /* movups */
    /* mulps: xmm6 *= xmm0 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    edx = edx + 0x10;
    MEMF(edi) = xmm7; /* movups */
    edi = edi + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_0044458C; /* jne: not equal / not zero */

loc_004445CC: ;
    esi = MEM32(ebp + 0x10);
    xmm0 = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm1 = MEMF(esi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm2 = MEMF(esi + 8); /* movss */
    /* shufps xmm2, xmm2, 0 */
    xmm3 = MEMF(esi + 0xC); /* movss */
    /* shufps xmm3, xmm3, 0 */
    xmm4 = MEMF(esi + 0x10); /* movss */
    /* shufps xmm4, xmm4, 0 */
    edx = ebp + -4172;
    edx = edx + 0x2C;
    edi = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);

loc_0044460A: ;
    xmm7 = MEMF(edi); /* movups */
    xmm6 = MEMF(edx); /* movups */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm5 = MEMF(edx + 4); /* movups */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm6 = MEMF(edx + 8); /* movups */
    /* mulps: xmm6 *= xmm2 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm5 = MEMF(edx + 0xC); /* movups */
    /* mulps: xmm5 *= xmm1 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    xmm6 = MEMF(edx + 0x10); /* movups */
    /* mulps: xmm6 *= xmm0 (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    edx = edx + 0x10;
    MEMF(edi) = xmm7; /* movups */
    edi = edi + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_0044460A; /* jne: not equal / not zero */

loc_0044464A: ;
    g_seh_ebp = ebp; sub_00444716(); return; /* tail jmp 0x00444716 */

loc_0044464F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    edx = MEM32(ebp + 0x10);
    ebx = edx + eax * 4 + -4;
    edx = ebp + -4172;
    esi = edx + eax * 4;
    edi = MEM32(ebp + 8);
    edi = edi - 0x10;
    ecx = MEM32(ebp + -8);

loc_0044466C: ;
    xmm7 = MEMF(esi); /* movups */
    xmm6 = MEMF(edx); /* movups */
    xmm0 = MEMF(ebx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm6 *= xmm0 (packed 4xfloat) */
    edi = edi + 0x10;
    esi = esi + 0x10;
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    ebx = ebx - 4;
    edx = edx + 0x10;
    ecx--;
    MEMF(edi) = xmm7; /* movups */
    if ((ecx != 0)) goto loc_0044466C; /* jne: not equal / not zero */

loc_00444692: ;
    g_seh_ebp = ebp; sub_00444713(); return; /* tail jmp 0x00444713 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044473F
 * Original: 0x0044473F - 0x00444781 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044473F(void)
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

loc_0044473F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = ZX16(MEM16(ebp + 0x18));
    edx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0044477F; /* jle: less or equal (signed <=) */

loc_0044474C: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = 0; /* xor self */
    /* FPU: fsubr qword ptr [0x648d08] */
    PUSH32(esp, esi);

loc_00444758: ;
    esi = MEM32(ebp + 0xC);
    /* fld st(0) */
    eax = eax << 2;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    edx++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(ebp + 8);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(eax + esi) = (float)fp_top(); fp_popp(); /* fstp */
    eax = SX16(LO16(edx));
    if (CMP_L(eax, ecx)) goto loc_00444758; /* jl: less (signed <) */

loc_0044477C: ;
    /* fstp st(0) */
    POP32(esp, esi);

loc_0044477F: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00444781
 * Original: 0x00444781 - 0x0044481D (156 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444781(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00444781: ;
    fp_push(MEMF(0x648CE0)); /* fld float */
    PUSH32(esp, 2);
    fp_push(MEMF(ebx)); /* fld float */
    POP32(esp, ecx);
    (void)0; /* cmp MEM32(esp + 4), ecx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(MEM32(esp + 4), ecx)) goto loc_0044481A; /* jle: less or equal (signed <=) */

loc_004447B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    edi++;

loc_004447B6: ;
    (void)0; /* cmp LO16(edi), 1 - flags set for next jcc */
    esi = ebx + ecx * 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = eax + ecx * 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(eax + ecx * 4 + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(LO16(edi), 1)) goto loc_004447F5; /* jle: less or equal (signed <=) */

loc_004447D7: ;
    ecx = SX16(LO16(edi));
    edx = edi + -1;
    ecx = eax + ecx * 4;
    edx = ZX16(LO16(edx));

loc_004447E3: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx - 4;
    edx--;
    if ((edx != 0)) goto loc_004447E3; /* jne: not equal / not zero */

loc_004447F5: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi++;
    ecx = edi + 1;
    ecx = SX16(LO16(ecx));
    (void)0; /* cmp ecx, MEM32(esp + 0xC) - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(ecx, MEM32(esp + 0xC))) goto loc_004447B6; /* jl: less (signed <) */

loc_00444818: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0044481A: ;
    /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0044481D
 * Original: 0x0044481D - 0x00444894 (119 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044481D(void)
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

loc_0044481D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00444830: ;
    esi = eax;
    eax = SX16(LO16(esi));
    MEM32(ebp + -4) = eax;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0044484F: ;
    fp_push(0.0); /* fldz */
    eax = SX16(LO16(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, ecx);
    PUSH32(esp, 0x11);
    esi = esi - eax;
    eax = SX16(LO16(esi));
    ecx = ecx - eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + ecx * 4;
    ecx = MEM32(ebp + 8);
    esi = eax + 0x40;
    eax = SX16(LO16(edx));
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    eax = eax + 0x57B160;
    POP32(esp, edx);

loc_00444880: ;
    fp_push(MEMF(eax)); /* fld float */
    eax = eax - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi - 4;
    edx--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_00444880; /* jne: not equal / not zero */

loc_00444891: ;
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
 * sub_00444894
 * Original: 0x00444894 - 0x0044491C (136 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444894(void)
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

loc_00444894: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    eax = MEM32(ebp + 0xC);
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_004448AA; /* jge: greater or equal (signed >=) */

loc_004448A4: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_004448AA: ;
    fp_push(MEMF(0x575B68)); /* fld float */
    eax = MEM32(ebp + 0x10);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = 0; /* xor self */
    /* fld st(1) */
    edx++;
    (void)0; /* cmp LO16(eax), LO16(edx) - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ZX16(LO16(eax));
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_A(LO16(eax), LO16(edx))) goto loc_004448D5; /* ja: above (unsigned >) */

loc_004448D3: ;
    ecx = edx;

loc_004448D5: ;
    if (CMP_GE(ecx, 0x10)) goto loc_004448E3; /* jge: greater or equal (signed >=) */

loc_004448DA: ;
    if (CMP_A(LO16(eax), LO16(edx))) goto loc_004448E6; /* ja: above (unsigned >) */

loc_004448DF: ;
    eax = edx;
    goto loc_004448E6;

loc_004448E3: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004448E6: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    edx = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0044490B; /* jle: less or equal (signed <=) */

loc_004448F5: ;
    eax = 0; /* xor self */

loc_004448F7: ;
    eax = eax << 2;
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx++;
    MEMF(ebp + eax + -64) = (float)fp_top(); fp_popp(); /* fstp */
    eax = SX16(LO16(edx));
    if (CMP_L(eax, edi)) goto loc_004448F7; /* jl: less (signed <) */

loc_0044490B: ;
    fp_push(MEMF(ebp + -64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) { sub_0044491C(); return; } /* je: equal / zero */

loc_00444917: ;
    MEMF(ebp + -64) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_0044491E(); return; /* tail jmp 0x0044491E */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004449ED
 * Original: 0x004449ED - 0x00444AEA (253 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004449ED(void)
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

loc_004449ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x80;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = eax;
    if (TEST_NZ(edx, edx)) goto loc_00444AE7; /* jne: not equal / not zero */

loc_00444A0A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00444A49; /* jle: less or equal (signed <=) */

loc_00444A12: ;
    ebx = MEM32(ebp + 8);

loc_00444A15: ;
    fp_push(MEMF(ebx + esi * 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0044CDB3(); /* call 0x0044CDB3 */

loc_00444A28: ;
    MEMF(ebp + esi * 4 + -32) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + esi * 8 + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0044CDB3(); /* call 0x0044CDB3 */

loc_00444A3E: ;
    MEMF(ebp + esi * 4 + -64) = (float)fp_top(); fp_popp(); /* fstp */
    esi++;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(esi, edi)) goto loc_00444A15; /* jl: less (signed <) */

loc_00444A49: ;
    PUSH32(esp, edi);
    eax = ebp + -96;
    ebx = ebp + -32;
    PUSH32(esp, 0); sub_00444781(); /* call 0x00444781 */

loc_00444A55: ;
    PUSH32(esp, edi);
    eax = ebp + -128;
    ebx = ebp + -64;
    PUSH32(esp, 0); sub_00444781(); /* call 0x00444781 */

loc_00444A61: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_push(MEMF(ebp + -96)); /* fld float */
    POP32(esp, ecx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    ecx++;
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    MEMF(ebp + -32) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -128)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + -64) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_LE(edi, ecx)) goto loc_00444AA7; /* jle: less or equal (signed <=) */

loc_00444A82: ;
    eax = ecx;
    eax = eax << 2;
    fp_push(MEMF(ebp + eax + -100)); /* fld float */
    ecx++;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + eax + -32) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + eax + -128)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + eax + -64) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(ecx, edi)) goto loc_00444A82; /* jl: less (signed <) */

loc_00444AA7: ;
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_00444AE5; /* jle: less or equal (signed <=) */

loc_00444AAD: ;
    ebx = MEM32(ebp + 0xC);
    fp_push(MEMF(0x648D10)); /* fld float */
    eax = MEM32(ebp + 0x10);
    edx = ebx + eax * 4 + -4;
    eax = ebp + -32;
    ebx = ebx - eax;

loc_00444AC2: ;
    ecx = ebp + esi * 4 + -64;
    fp_push(MEMF(ecx)); /* fld float */
    eax = ebp + esi * 4 + -32;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebx + eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    edx = edx - 4;
    if (CMP_L(esi, edi)) goto loc_00444AC2; /* jl: less (signed <) */

loc_00444AE3: ;
    /* fstp st(0) */

loc_00444AE5: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00444AE7: ;
    POP32(esp, edi);
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
 * sub_00444AEA
 * Original: 0x00444AEA - 0x00444B1F (53 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444AEA(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00444AEA: ;
    if (CMP_LE(MEM16(esp + 8), 0)) goto loc_00444B1E; /* jle: less or equal (signed <=) */

loc_00444AF2: ;
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(esp + 0xC));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi - edi;

loc_00444B04: ;
    fp_push(MEMF(esi + edi)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0044481D(); /* call 0x0044481D */

loc_00444B12: ;
    esp = esp + 0xC;
    edi = edi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_00444B04; /* jne: not equal / not zero */

loc_00444B1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00444B1E: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00444B1F
 * Original: 0x00444B1F - 0x00444B59 (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444B1F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00444B1F: ;
    eax = MEM32(esp + 4);
    edx = ZX16(MEM16(eax + 0x10));
    ecx = ZX16(MEM16(eax + 0x12));
    PUSH32(esp, MEM32(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ZX16(MEM16(eax + 0xE));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    (void)0; /* cmp MEM16(eax + 0x24), 3 - flags set for next jcc */
    edx = MEM32(eax + 0x1C);
    if (CMP_NE(MEM16(eax + 0x24), 3)) { sub_00444B59(); return; } /* jne: not equal / not zero */

loc_00444B41: ;
    edx = edx + ecx;
    PUSH32(esp, edx);
    ecx = eax + 0x4764;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x4760));
    PUSH32(esp, MEM32(eax + 0x474C));
    g_seh_ebp = ebp; sub_00444B75(); return; /* tail jmp 0x00444B75 */

}

/**
 * sub_00444B7E
 * Original: 0x00444B7E - 0x00444CF4 (374 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444B7E(void)
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

loc_00444B7E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(eax + 0x10), LO16(ecx) - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(MEM16(eax + 0x10), LO16(ecx))) goto loc_00444CF2; /* jbe: below or equal (unsigned <=) */

loc_00444B94: ;
    edx = ZX16(MEM16(eax + 0x4788));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00444B9E: ;
    esi = 0; /* xor self */
    if (CMP_NE(MEM16(eax + 0x14), 2)) goto loc_00444C4C; /* jne: not equal / not zero */

loc_00444BAB: ;
    if (CMP_LE(edx & edx, 0)) goto loc_00444CDC; /* jle: less or equal (signed <=) */

loc_00444BB3: ;
    edx = ZX16(MEM16(eax + 0x10));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC));
    edx = edx + MEM32(ebp + -4);
    edi = MEM32(eax + 0x5930);
    ebx = MEM32(eax + 0x5804);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x9C);
    ebx = MEM32(ebx + ecx);
    edx = edx + esi;
    fp_push(MEMF(edi + edx * 4 + 0x1B0)); /* fld float */
    MEMF(ebx + esi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX16(MEM16(eax + 0x10));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC));
    edx = edx + MEM32(ebp + -4);
    edi = MEM32(eax + 0x5930);
    ebx = MEM32(eax + 0x5810);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x9C);
    ebx = MEM32(ebx + ecx);
    edx = edx + esi;
    fp_push(MEMF(edi + edx * 4 + 0x1F0)); /* fld float */
    MEMF(ebx + esi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX16(MEM16(eax + 0x10));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC));
    edx = edx + MEM32(ebp + -4);
    edi = MEM32(eax + 0x5930);
    ebx = MEM32(eax + 0x580C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x9C);
    ebx = MEM32(ebx + ecx);
    edx = edx + esi;
    fp_push(MEMF(edi + edx * 4 + 0x230)); /* fld float */
    MEMF(ebx + esi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX16(MEM16(eax + 0x4788));
    esi++;
    if (CMP_L(esi, edx)) goto loc_00444BB3; /* jl: less (signed <) */

loc_00444C47: ;
    goto loc_00444CDC;

loc_00444C4C: ;
    if (CMP_LE(edx & edx, 0)) goto loc_00444CDC; /* jle: less or equal (signed <=) */

loc_00444C54: ;
    edx = ZX16(MEM16(eax + 0x10));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC));
    edx = edx + MEM32(ebp + -4);
    edi = MEM32(eax + 0x5930);
    ebx = MEM32(eax + 0x5804);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4E);
    ebx = MEM32(ebx + ecx);
    edx = edx + esi;
    fp_push(MEMF(edi + edx * 4 + 0x78)); /* fld float */
    MEMF(ebx + esi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX16(MEM16(eax + 0x10));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC));
    edx = edx + MEM32(ebp + -4);
    edi = MEM32(eax + 0x5930);
    ebx = MEM32(eax + 0x5810);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4E);
    ebx = MEM32(ebx + ecx);
    edx = edx + esi;
    fp_push(MEMF(edi + edx * 4 + 0xB8)); /* fld float */
    MEMF(ebx + esi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX16(MEM16(eax + 0x10));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC));
    edx = edx + MEM32(ebp + -4);
    edi = MEM32(eax + 0x5930);
    ebx = MEM32(eax + 0x580C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4E);
    ebx = MEM32(ebx + ecx);
    edx = edx + esi;
    fp_push(MEMF(edi + edx * 4 + 0xF8)); /* fld float */
    MEMF(ebx + esi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX16(MEM16(eax + 0x4788));
    esi++;
    if (CMP_L(esi, edx)) goto loc_00444C54; /* jl: less (signed <) */

loc_00444CDC: ;
    esi = ZX16(MEM16(eax + 0x10));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ecx = ecx + 4;
    if (CMP_L(MEM32(ebp + -4), esi)) goto loc_00444B9E; /* jl: less (signed <) */

loc_00444CEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00444CF2: ;
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
 * sub_00444CF4
 * Original: 0x00444CF4 - 0x00444D32 (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444CF4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00444CF4: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, 0x1F40)) { sub_00444D32(); return; } /* je: equal / zero */

loc_00444D02: ;
    if (CMP_EQ(ecx, 0x2B11)) goto loc_00444D2B; /* je: equal / zero */

loc_00444D0A: ;
    if (CMP_EQ(ecx, 0x3E80)) goto loc_00444D27; /* je: equal / zero */

loc_00444D12: ;
    if (CMP_EQ(ecx, 0x5622)) goto loc_00444D20; /* je: equal / zero */

loc_00444D1A: ;
    eax = 0x80040000u;
    esp += 4; return; /* ret */

loc_00444D20: ;
    ecx = 0; /* xor self */
    ecx++;
    PUSH32(esp, 0x10);
    g_seh_ebp = ebp; sub_00444D36(); return; /* tail jmp 0x00444D36 */

loc_00444D27: ;
    PUSH32(esp, 0x10);
    g_seh_ebp = ebp; sub_00444D34(); return; /* tail jmp 0x00444D34 */

loc_00444D2B: ;
    ecx = 0; /* xor self */
    ecx++;
    PUSH32(esp, 0xA);
    g_seh_ebp = ebp; sub_00444D36(); return; /* tail jmp 0x00444D36 */

}

/**
 * sub_00444D9D
 * Original: 0x00444D9D - 0x00444DE2 (69 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444D9D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00444D9D: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    (void)0; /* cmp eax, 0x1F40 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, 0x1F40)) { sub_00444DE2(); return; } /* je: equal / zero */

loc_00444DAB: ;
    if (CMP_EQ(eax, 0x2B11)) goto loc_00444DDB; /* je: equal / zero */

loc_00444DB2: ;
    if (CMP_EQ(eax, 0x3E80)) goto loc_00444DD2; /* je: equal / zero */

loc_00444DB9: ;
    if (CMP_EQ(eax, 0x5622)) goto loc_00444DC7; /* je: equal / zero */

loc_00444DC0: ;
    eax = 0x80040000u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00444DC7: ;
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    PUSH32(esp, 3);

loc_00444DCF: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00444DE9(); return; /* tail jmp 0x00444DE9 */

loc_00444DD2: ;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 2);
    goto loc_00444DCF;

loc_00444DDB: ;
    esi = 0; /* xor self */
    esi++;
    eax = esi;
    g_seh_ebp = ebp; sub_00444DE6(); return; /* tail jmp 0x00444DE6 */

}

/**
 * sub_00444E37
 * Original: 0x00444E37 - 0x00445057 (544 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00444E37(void)
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

loc_00444E37: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(ecx), 0x3E80 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ecx), 0x3E80)) goto loc_00444EFA; /* jne: not equal / not zero */

loc_00444E4F: ;
    eax = MEM32(ecx + 0x5970);
    edi = eax + esi * 4;
    (void)0; /* cmp MEM32(edi), 1 - flags set for next jcc */
    MEM32(ebp + 8) = edi;
    if (CMP_LE(MEM32(edi), 1)) goto loc_00444EFA; /* jle: less or equal (signed <=) */

loc_00444E64: ;
    eax = ZX16(MEM16(ecx + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC));
    edx = MEM32(ecx + 0x5930);
    eax = eax + esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x138);
    edx = edx + eax;
    eax = ecx + 0x5920;
    fp_push(MEMF(edx + 0x4C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ecx + 0x591C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = ZX16(MEM16(ecx + 0x4788));
    (void)0; /* test eax, eax - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_push(1.0); /* fld1 */
    if (CMP_LE(eax & eax, 0)) goto loc_00444EF4; /* jle: less or equal (signed <=) */

loc_00444E9E: ;
    edi = MEM32(ecx + 0x580C);
    edi = MEM32(edi + esi * 4);

loc_00444EA7: ;
    fp_push(MEMF(edi)); /* fld float */
    edi = edi + 4;
    eax--;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fstp st(2) */
    /* fstp st(0) */
    if ((eax != 0)) goto loc_00444EA7; /* jne: not equal / not zero */

loc_00444EBF: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e64] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00444EF8; /* jne: not equal / not zero */

loc_00444ECC: ;
    edi = MEM32(ebp + 8);

loc_00444ECF: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e64] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00444EEC; /* jnp: not parity */

loc_00444EDC: ;
    fp_push(MEMF(edx + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e40] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00444EFA; /* jp: parity */

loc_00444EEC: ;
    MEM32(edi) = 1;
    goto loc_00444EFA;

loc_00444EF4: ;
    /* fstp st(0) */
    goto loc_00444ECF;

loc_00444EF8: ;
    /* fstp st(0) */

loc_00444EFA: ;
    if (CMP_NE(MEM32(ecx), 0x1F40)) goto loc_00445053; /* jne: not equal / not zero */

loc_00444F06: ;
    eax = MEM32(ecx + 4);
    if (CMP_EQ(eax, 0x1F4)) goto loc_00444F1B; /* je: equal / zero */

loc_00444F10: ;
    if (CMP_NE(eax, 0x271)) goto loc_00445053; /* jne: not equal / not zero */

loc_00444F1B: ;
    eax = MEM32(ecx + 0x5970);
    edi = esi;
    edi = edi << 2;
    PUSH32(esp, ebx);
    ebx = eax + edi;
    (void)0; /* cmp MEM32(ebx), 1 - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    if (CMP_LE(MEM32(ebx), 1)) goto loc_00445052; /* jle: less or equal (signed <=) */

loc_00444F36: ;
    eax = ZX16(MEM16(ecx + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC));
    edx = ZX16(MEM16(ecx + 0x14));
    eax = eax + esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = eax;
    eax = MEM32(ecx + 0x5930);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x138);
    eax = eax + edx;
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [eax + 0x184] */
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 0x41 - flags set for next jcc */
    eax = MEM32(ecx + 0x5930);
    esi = edx + eax;
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00444F75; /* jne: not equal / not zero */

loc_00444F70: ;
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    goto loc_00444F7B;

loc_00444F75: ;
    fp_push(MEMF(esi + 0x184)); /* fld float */

loc_00444F7B: ;
    /* fld st(0) */
    eax = ecx + 0x5920;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ecx + 0x591C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (1 /* jp after test - parity */) goto loc_00445052; /* jp: parity */

loc_00444FA2: ;
    eax = ZX16(MEM16(ecx + 0x4788));
    fp_push(1.0); /* fld1 */
    if (CMP_LE(eax & eax, 0)) goto loc_00444FD3; /* jle: less or equal (signed <=) */

loc_00444FAF: ;
    ebx = MEM32(ecx + 0x580C);
    edi = MEM32(edi + ebx);

loc_00444FB8: ;
    fp_push(MEMF(edi)); /* fld float */
    edi = edi + 4;
    eax--;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fstp st(2) */
    /* fstp st(0) */
    if ((eax != 0)) goto loc_00444FB8; /* jne: not equal / not zero */

loc_00444FD0: ;
    ebx = MEM32(ebp + 8);

loc_00444FD3: ;
    eax = MEM32(ecx + 0x5930);
    eax = eax + edx;
    fp_push(MEMF(eax + 0x54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [eax + 0x18c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00444FF0; /* jp: parity */

loc_00444FEB: ;
    eax = MEM32(esi + 0x54);
    goto loc_00444FF6;

loc_00444FF0: ;
    eax = MEM32(esi + 0x18C);

loc_00444FF6: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ecx + 0x5930);
    edx = edx + eax;
    fp_push(MEMF(edx + 0x58)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [edx + 0x190] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00445016; /* jne: not equal / not zero */

loc_00445011: ;
    eax = MEM32(esi + 0x58);
    goto loc_0044501C;

loc_00445016: ;
    eax = MEM32(esi + 0x190);

loc_0044501C: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649228] */
    MEM32(ebp + -4) = eax;
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_0044503C; /* je: equal / zero */

loc_0044502C: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d10] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00445052; /* jne: not equal / not zero */

loc_0044503C: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649d7c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00445052; /* jp: parity */

loc_0044504C: ;
    MEM32(ebx) = 1;

loc_00445052: ;
    POP32(esp, ebx);

loc_00445053: ;
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
 * sub_00445057
 * Original: 0x00445057 - 0x00445085 (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445057(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00445057: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x60;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(esi + 0x14));
    eax = ZX16(MEM16(esi + 0xE));
    PUSH32(esp, edi);
    edi = ZX16(LO16(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    (void)0; /* cmp LO16(ecx), 1 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(LO16(ecx), 1)) { sub_00445085(); return; } /* jne: not equal / not zero */

loc_0044507A: ;
    PUSH32(esp, 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -12) = eax;
    g_seh_ebp = ebp; sub_00445089(); return; /* tail jmp 0x00445089 */

}

/**
 * sub_00445679
 * Original: 0x00445679 - 0x004456AB (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445679(void)
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

loc_00445679: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    edx = MEM32(ebp + 8);
    fp_push(MEMF(edx + 0x591C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e5c] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_004456AB(); return; } /* jne: not equal / not zero */

loc_0044569B: ;
    MEM32(ebp + -8) = 0x41000000;
    MEM32(ebp + -24) = 0x41400000;
    g_seh_ebp = ebp; sub_004456B9(); return; /* tail jmp 0x004456B9 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004458F6
 * Original: 0x004458F6 - 0x0044595F (105 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004458F6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004458F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x44;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x5940);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(eax + 0x598C);
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0x4C);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(ebx + 0x138);
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(ebx + 0x184);
    MEM32(ebp + 0xC) = ecx;
    ecx = MEM32(ebx + 0x270);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x5978);
    (void)0; /* cmp esi, 2 - flags set for next jcc */
    eax = MEM32(eax + 0x5984);
    MEM32(ebp + -32) = ecx;
    ecx = MEM32(ebx + 0x2BC);
    MEM32(ebp + -68) = esi;
    MEM32(ebp + -20) = ecx;
    if (CMP_EQ(esi, 2)) { sub_0044595F(); return; } /* je: equal / zero */

loc_00445954: ;
    if (CMP_EQ(esi, 3)) { sub_0044595F(); return; } /* je: equal / zero */

loc_00445959: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    g_seh_ebp = ebp; sub_0044596F(); return; /* tail jmp 0x0044596F */

}

/**
 * sub_00446200
 * Original: 0x00446200 - 0x00446278 (120 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00446200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    (void)0; /* cmp eax, 0x1F40 - flags set for next jcc */
    ecx = MEM32(ebx + 0x9248);
    edx = MEM32(ebx + 0x9244);
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -56) = edx;
    if (CMP_EQ(eax, 0x1F40)) { sub_00446278(); return; } /* je: equal / zero */

loc_00446225: ;
    if (CMP_EQ(eax, 0x2B11)) goto loc_00446268; /* je: equal / zero */

loc_0044622C: ;
    if (CMP_EQ(eax, 0x3E80)) goto loc_00446251; /* je: equal / zero */

loc_00446233: ;
    if (CMP_NE(eax, 0x5622)) { sub_00446278(); return; } /* jne: not equal / not zero */

loc_0044623A: ;
    MEM32(ebp + 8) = 0xF0;
    MEM32(ebp + -16) = 0x565154;
    MEM32(ebp + -12) = 0x563E80;
    g_seh_ebp = ebp; sub_0044628D(); return; /* tail jmp 0x0044628D */

loc_00446251: ;
    MEM32(ebp + 8) = 0x78;
    MEM32(ebp + -16) = 0x565ADC;
    MEM32(ebp + -12) = 0x565168;
    g_seh_ebp = ebp; sub_0044628D(); return; /* tail jmp 0x0044628D */

loc_00446268: ;
    MEM32(ebp + -16) = 0x565D84;
    MEM32(ebp + -12) = 0x565AF0;
    g_seh_ebp = ebp; sub_00446286(); return; /* tail jmp 0x00446286 */

}

/**
 * sub_004464A1
 * Original: 0x004464A1 - 0x00446676 (469 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004464A1(void)
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

loc_004464A1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = ZX16(MEM16(esi + 0x12));
    edx = ZX16(MEM16(esi + 0x14));
    eax = MEM32(esi + 0x5974);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0x595C);
    MEM32(ebp + -20) = eax;
    eax = ZX16(MEM16(esi + 0x10));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    (void)0; /* cmp MEM16(esi + 0x24), 3 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ecx;
    if (CMP_NE(MEM16(esi + 0x24), 3)) goto loc_00446542; /* jne: not equal / not zero */

loc_004464DB: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00446542; /* jle: less or equal (signed <=) */

loc_004464E3: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC));
    edx = ZX16(MEM16(esi + 0x14));
    eax = eax + MEM32(ebp + 8);
    ebx = 0; /* xor self */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    if (CMP_LE(edx & edx, 0)) goto loc_00446536; /* jle: less or equal (signed <=) */

loc_004464FB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x138);
    edi = eax;

loc_00446503: ;
    eax = MEM32(esi + 0x5930);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00445679(); /* call 0x00445679 */

loc_00446512: ;
    eax = MEM32(esi + 0x5930);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004458F6(); /* call 0x004458F6 */

loc_00446521: ;
    eax = ZX16(MEM16(esi + 0x14));
    esp = esp + 0x10;
    ebx++;
    edi = edi + 0x138;
    if (CMP_L(ebx, eax)) goto loc_00446503; /* jl: less (signed <) */

loc_00446533: ;
    ecx = MEM32(ebp + -12);

loc_00446536: ;
    eax = ZX16(MEM16(esi + 0x10));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    if (CMP_L(MEM32(ebp + 8), eax)) goto loc_004464E3; /* jl: less (signed <) */

loc_00446542: ;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x10), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 8) = edi;
    if (CMP_A(MEM16(esi + 0x10), LO16(edi))) goto loc_00446569; /* ja: above (unsigned >) */

loc_0044654D: ;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x5974) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esi + 0x595C) = eax;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00446569: ;
    ebx = ZX16(MEM16(esi + 0x10));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + 0xC));
    eax = ZX16(MEM16(esi + 0x14));
    ebx = ebx + MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    if (CMP_LE(eax & eax, 0)) goto loc_004465C9; /* jle: less or equal (signed <=) */

loc_00446583: ;
    eax = ebx + ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x138);
    MEM32(ebp + -8) = eax;
    goto loc_00446594;

loc_00446591: ;
    eax = MEM32(ebp + -8);

loc_00446594: ;
    ecx = MEM32(esi + 0x5930);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00445679(); /* call 0x00445679 */

loc_004465A3: ;
    eax = MEM32(esi + 0x5930);
    eax = eax + MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004458F6(); /* call 0x004458F6 */

loc_004465B3: ;
    eax = ZX16(MEM16(esi + 0x14));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x138;
    esp = esp + 0x10;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    if (CMP_L(MEM32(ebp + -4), eax)) goto loc_00446591; /* jl: less (signed <) */

loc_004465C9: ;
    ecx = MEM32(esi + 0x5970);
    eax = 0; /* xor self */
    MEM32(edi + ecx) = eax;
    (void)0; /* cmp MEM16(esi + 0x14), LO16(eax) - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_BE(MEM16(esi + 0x14), LO16(eax))) goto loc_0044663B; /* jbe: below or equal (unsigned <=) */

loc_004465DD: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x138);

loc_004465E5: ;
    eax = MEM32(esi + 0x5930);
    eax = MEM32(ecx + eax);
    PUSH32(esp, 3);
    POP32(esp, edx);
    if (CMP_EQ(eax, edx)) goto loc_00446632; /* je: equal / zero */

loc_004465F5: ;
    PUSH32(esp, 2);
    POP32(esp, edx);
    if (CMP_NE(eax, edx)) goto loc_00446607; /* jne: not equal / not zero */

loc_004465FC: ;
    eax = MEM32(esi + 0x5970);
    MEM32(edi + eax) = edx;
    goto loc_0044661E;

loc_00446607: ;
    if (CMP_NE(eax, 1)) goto loc_0044661E; /* jne: not equal / not zero */

loc_0044660C: ;
    eax = MEM32(esi + 0x5970);
    eax = eax + edi;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_0044661E; /* je: equal / zero */

loc_00446618: ;
    MEM32(eax) = 1;

loc_0044661E: ;
    eax = ZX16(MEM16(esi + 0x14));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    ecx = ecx + 0x138;
    if (CMP_L(MEM32(ebp + -4), eax)) goto loc_004465E5; /* jl: less (signed <) */

loc_00446630: ;
    goto loc_0044663B;

loc_00446632: ;
    eax = MEM32(esi + 0x5970);
    MEM32(edi + eax) = edx;

loc_0044663B: ;
    SET_LO16(eax, MEM16(esi + 0x14));
    if (CMP_NE(LO16(eax), 1)) { sub_00446676(); return; } /* jne: not equal / not zero */

loc_00446645: ;
    eax = MEM32(esi + 0x5930);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x138);
    ecx = MEM32(esi + 0x5960);
    fp_push(MEMF(eax + ebx + 4)); /* fld float */
    MEMF(edi + ecx) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esi + 0x5930);
    ecx = MEM32(esi + 0x5968);
    fp_push(MEMF(eax + ebx + 0xC)); /* fld float */
    MEMF(edi + ecx) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_00446727(); return; /* tail jmp 0x00446727 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00446860
 * Original: 0x00446860 - 0x00446964 (260 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00446860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    esi = esi << 2;
    SET_LO16(edx, MEM16(esi + 0x575578));
    MEM16(ecx + 0x1474) = LO16(edx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x575592);
    MEM32(ecx + 0x1988) = edx;
    SET_LO16(edx, MEM16(esi + 0x57557A));
    MEM16(ecx + 0x1468) = LO16(edx);
    SET_LO16(edx, MEM16(esi + 0x57557C));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    (void)0; /* cmp MEM16(ecx + 0x1474), 0 - flags set for next jcc */
    MEM16(ecx + 0x1450) = LO16(edx);
    edx = MEM32(esi + 0x575584);
    MEM32(ecx + 0x1454) = edx;
    edx = MEM32(esi + 0x575588);
    MEM32(ecx + 0x146C) = edx;
    edx = MEM32(esi + 0x57558C);
    MEM32(ecx + 0x1470) = edx;
    SET_LO16(edx, MEM16(esi + 0x575590));
    MEM16(ecx + 0x2D38) = LO16(edx);
    SET_LO16(edx, MEM16(esi + 0x57557E));
    MEM16(ecx + 0x1452) = LO16(edx);
    edx = MEM32(ecx + 0x4B8);
    eax = edx + eax * 8;
    SET_LO16(edx, MEM16(eax + 6));
    MEM16(ecx + 0x3FA4) = LO16(edx);
    SET_LO16(eax, MEM16(eax + 4));
    MEM16(ecx + 0x3FA6) = LO16(eax);
    if (CMP_BE(MEM16(ecx + 0x1474), 0)) goto loc_00446961; /* jbe: below or equal (unsigned <=) */

loc_00446915: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_00446917: ;
    edi = ZX16(MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(esi + 0x575580));
    MEM16(ecx + edi * 2 + 0x1458) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0x575582));
    MEM16(ecx + edi * 2 + 0x2D28) = LO16(eax);
    eax = ZX16(MEM16(ecx + 8));
    ebx = ZX16(MEM16(ecx + 0x1474));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    MEM16(ecx + edi * 2 + 0x1978) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0xC));
    if (CMP_B(LO16(eax), MEM16(ecx + 0x1474))) goto loc_00446917; /* jb: below (unsigned <) */

loc_0044695F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00446961: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00446964
 * Original: 0x00446964 - 0x00446A29 (197 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446964(void)
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

loc_00446964: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1C);
    fp_push(MEMF(esi + 0x30)); /* fld float */
    SET_LO16(ebx, MEM16(esi + 0x1474));
    MEM32(ebp + 8) = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0044CDAC(); /* call 0x0044CDAC */

loc_0044698F: ;
    SET_LO16(eax, MEM16(esi + 0x18));
    (void)0; /* cmp LO16(eax), 1 - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(LO16(eax), 1)) goto loc_004469BF; /* je: equal / zero */

loc_0044699B: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_004469BF; /* je: equal / zero */

loc_004469A0: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fdivr st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648d80] */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004469C7; /* jne: not equal / not zero */

loc_004469BD: ;
    goto loc_004469C1;

loc_004469BF: ;
    /* fstp st(0) */

loc_004469C1: ;
    eax = MEM32(esi + 0x30);
    MEM32(ebp + 8) = eax;

loc_004469C7: ;
    if (CMP_BE(LO16(ebx) & LO16(ebx), 0)) goto loc_00446A25; /* jbe: below or equal (unsigned <=) */

loc_004469CC: ;
    PUSH32(esp, edi);
    edi = esi + 0x143C;
    ebx = ZX16(LO16(ebx));

loc_004469D6: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x53C));
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    ecx = ZX16(MEM16(ebp + -4));
    eax = ZX16(LO16(eax));
    eax = eax >> 1;
    ecx = ecx - eax;
    eax = ZX16(MEM16(esi + 8));
    MEM32(ebp + -8) = ecx;
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    MEM32(ebp + -8) = eax;
    /* FPU: fidiv dword ptr [ebp - 8] */
    fp_push(MEMD(0x648D08)); /* fld double */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00446A1A: ;
    /* fstp st(0) */
    MEM16(edi) = LO16(eax);
    edi++;
    edi++;
    ebx--;
    if ((ebx != 0)) goto loc_004469D6; /* jne: not equal / not zero */

loc_00446A24: ;
    POP32(esp, edi);

loc_00446A25: ;
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_00446A29
 * Original: 0x00446A29 - 0x00446A4D (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446A29(void)
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

loc_00446A29: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    SET_LO16(edx, MEM16(eax + 0x34));
    ecx = MEM32(ebp + 8);
    MEM16(ecx + 0x18) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x1468));
    if (TEST_NZ(LO16(edx), LO16(edx))) { sub_00446A4D(); return; } /* jne: not equal / not zero */

loc_00446A46: ;
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00446A72
 * Original: 0x00446A72 - 0x00446AC7 (85 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446A72(void)
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

loc_00446A72: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    if (TEST_Z(ebx, ebx)) goto loc_00446AC5; /* je: equal / zero */

loc_00446A7B: ;
    fp_push(MEMF(0x649720)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(0x649724)); /* fld float */
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_00446A91: ;
    fp_push(MEMF(edi)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom st(2) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00446AA2; /* jp: parity */

loc_00446A9C: ;
    /* fstp st(0) */
    /* fld st(1) */
    goto loc_00446AAF;

loc_00446AA2: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom st(1) */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00446AAF; /* jne: not equal / not zero */

loc_00446AAB: ;
    /* fstp st(0) */
    /* fld st(0) */

loc_00446AAF: ;
    edi = edi + 4;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00446AB7: ;
    MEM16(esi) = LO16(eax);
    esi++;
    esi++;
    ebx--;
    if ((ebx != 0)) goto loc_00446A91; /* jne: not equal / not zero */

loc_00446ABF: ;
    /* fstp st(0) */
    POP32(esp, edi);
    /* fstp st(0) */
    POP32(esp, esi);

loc_00446AC5: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00446AC7
 * Original: 0x00446AC7 - 0x00446B35 (110 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446AC7(void)
{
    int _flags = 0; /* fallback flag var */

loc_00446AC7: ;
    (void)0; /* cmp MEM32(0x75F650), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(MEM32(0x75F650), 0)) goto loc_00446B33; /* jne: not equal / not zero */

loc_00446AD1: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    /* TODO: pushfd  */
    POP32(esp, eax);
    ecx = eax;
    eax = eax ^ 0x200000;
    PUSH32(esp, eax);
    /* TODO: popfd  */
    /* TODO: pushfd  */
    POP32(esp, eax);
    eax = eax ^ ecx;
    if ((eax == 0)) goto loc_00446B23; /* je: equal / zero */

loc_00446AE6: ;
    eax = 0;
    /* TODO: cpuid  */
    MEM32(0x75F654) = eax;
    MEM32(0x75F658) = ebx;
    MEM32(0x75F65C) = edx;
    MEM32(0x75F660) = ecx;
    if (CMP_L(eax, 1)) goto loc_00446B25; /* jl: less (signed <) */

loc_00446B09: ;
    eax = 1;
    /* TODO: cpuid  */
    MEM32(0x75F664) = eax;
    MEM32(0x75F668) = edx;
    MEM32(0x75F66C) = ebx;
    goto loc_00446B25;

loc_00446B23: ;
    goto loc_00446B25;

loc_00446B25: ;
    POP32(esp, edx);
    POP32(esp, ecx);
    POP32(esp, ebx);
    POP32(esp, eax);
    MEM32(0x75F650) = 1;

loc_00446B33: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00446B35
 * Original: 0x00446B35 - 0x00446B46 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00446B35(void)
{

loc_00446B35: ;
    PUSH32(esp, 0); sub_00446AC7(); /* call 0x00446AC7 */

loc_00446B3A: ;
    eax = MEM32(0x75F668);
    eax = eax >> 0x19;
    eax = eax & 1;
    esp += 4; return; /* ret */

}
