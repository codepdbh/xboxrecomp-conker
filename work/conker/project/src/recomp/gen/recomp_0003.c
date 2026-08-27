/**
 * Burnout 3 - Recompiled code chunk 3
 * Functions: 250 (0x00036C00 - 0x0004E4E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00036C00
 * Original: 0x00036C00 - 0x00036C3F (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036C00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    ebp = 0; /* xor self */
    eax = ebx + 4;
    MEM32(esp + 8) = ebp;
    PUSH32(esp, 0); sub_00035F30(); /* call 0x00035F30 */

loc_00036C13: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00036C3F(); return; } /* je: equal / zero */

loc_00036C1B: ;
    MEM8(ebx + 0x12) = 0;
    eax = 0; /* xor self */
    ebx = ebx + 0x14;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx + 0x10) = eax;
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x18) = eax;
    POP32(esp, ebp);
    MEM32(ebx + 0x1C) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00036DF0
 * Original: 0x00036DF0 - 0x00036DF5 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036DF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00036DF0: ;
    if (TEST_NZ(eax, eax)) { sub_00036DF5(); return; } /* jne: not equal / not zero */

loc_00036DF4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036E30
 * Original: 0x00036E30 - 0x00036E35 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036E30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00036E30: ;
    if (TEST_NZ(eax, eax)) { sub_00036E35(); return; } /* jne: not equal / not zero */

loc_00036E34: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036E70
 * Original: 0x00036E70 - 0x00036E89 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036E70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00036E70: ;
    if (TEST_Z(eax, eax)) { sub_00036E89(); return; } /* je: equal / zero */

loc_00036E74: ;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00036E7C: ;
    if (TEST_Z(eax, eax)) { sub_00036E89(); return; } /* je: equal / zero */

loc_00036E80: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00036E90
 * Original: 0x00036E90 - 0x00036EE9 (89 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036E90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00036E90: ;
    if (TEST_Z(eax, eax)) goto loc_00036EE8; /* je: equal / zero */

loc_00036E94: ;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00036E9C: ;
    if (TEST_Z(eax, eax)) goto loc_00036EE8; /* je: equal / zero */

loc_00036EA0: ;
    ecx = MEM32(eax + 0x10);
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(eax + 0xE8) - sets EFLAGS */
    MEMF(eax + 0x1CC) = xmm0; /* movss */
    if ((xmm1 > MEMF(eax + 0xE8))) goto loc_00036ED8; /* ja: above (unsigned >) */

loc_00036EC7: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_00036ED8: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */

loc_00036EE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036EF0
 * Original: 0x00036EF0 - 0x00036EFE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036EF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00036EF0: ;
    esp = esp - 8;
    if (TEST_NZ(eax, eax)) { sub_00036EFE(); return; } /* jne: not equal / not zero */

loc_00036EF7: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00036FA0
 * Original: 0x00036FA0 - 0x00036FBC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036FA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00036FA0: ;
    if (TEST_Z(eax, eax)) { sub_00036FBC(); return; } /* je: equal / zero */

loc_00036FA4: ;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00036FAC: ;
    if (TEST_Z(eax, eax)) { sub_00036FBC(); return; } /* je: equal / zero */

loc_00036FB0: ;
    eax = MEM32(eax + 0x10);
    ecx = ZX16(MEM16(eax + 6));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    esp += 4; return; /* ret */

}

/**
 * sub_00036FC0
 * Original: 0x00036FC0 - 0x00036FD8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036FC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00036FC0: ;
    if (TEST_Z(eax, eax)) { sub_00036FD8(); return; } /* je: equal / zero */

loc_00036FC4: ;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00036FCC: ;
    if (TEST_Z(eax, eax)) { sub_00036FD8(); return; } /* je: equal / zero */

loc_00036FD0: ;
    eax = MEM32(eax + 0x10);
    xmm0 = MEMF(eax); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00036FE0
 * Original: 0x00036FE0 - 0x0003700D (45 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00036FE0: ;
    if (TEST_Z(eax, eax)) goto loc_0003700C; /* je: equal / zero */

loc_00036FE4: ;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00036FEC: ;
    if (TEST_Z(eax, eax)) goto loc_0003700C; /* je: equal / zero */

loc_00036FF0: ;
    MEM32(eax + 0xF4) = 1;
    MEM16(eax + 0x1DA) = 0;
    MEM16(eax + 0x1D8) = 0;

loc_0003700C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037010
 * Original: 0x00037010 - 0x0003703D (45 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037010(void)
{
    int _flags = 0; /* fallback flag var */

loc_00037010: ;
    if (TEST_Z(eax, eax)) goto loc_0003703C; /* je: equal / zero */

loc_00037014: ;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0003701C: ;
    if (TEST_Z(eax, eax)) goto loc_0003703C; /* je: equal / zero */

loc_00037020: ;
    MEM32(eax + 0xF4) = 0;
    MEM16(eax + 0x1DA) = 0;
    MEM16(eax + 0x1D8) = 0;

loc_0003703C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037040
 * Original: 0x00037040 - 0x00037082 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037040: ;
    eax = MEM32(esi + 0xC);
    esp = esp - 0x100;
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC00(); /* call 0x0046EC00 */

loc_00037051: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00037082(); return; } /* je: equal / zero */

loc_00037058: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_00037069: ;
    eax = esp + 8;
    esp = esp + 8;
    edx = eax + 1;

loc_00037073: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00037073; /* jne: not equal / not zero */

loc_0003707A: ;
    eax = eax - edx;
    MEM8(esp + eax + -12) = LO8(ecx);
    g_seh_ebp = ebp; sub_00037093(); return; /* tail jmp 0x00037093 */

}

/**
 * sub_00037140
 * Original: 0x00037140 - 0x00037155 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037140(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037140: ;
    eax = MEM32(0x8086E8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    if (TEST_NZ(eax, eax)) { sub_00037155(); return; } /* jne: not equal / not zero */

loc_0003714E: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_00037153: ;
    g_seh_ebp = ebp; sub_0003715A(); return; /* tail jmp 0x0003715A */

}

/**
 * sub_00037230
 * Original: 0x00037230 - 0x0003727C (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037230(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00037230: ;
    if (TEST_Z(eax, eax)) goto loc_0003727B; /* je: equal / zero */

loc_00037234: ;
    PUSH32(esp, esi);
    esi = eax + 4;
    eax = esi;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0003723F: ;
    if (TEST_Z(eax, eax)) goto loc_0003727A; /* je: equal / zero */

loc_00037243: ;
    ecx = MEM32(eax);
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_0003727A; /* je: equal / zero */

loc_0003724A: ;
    edx = MEM32(ecx + 8);
    if (CMP_NE(edx, MEM32(eax + 8))) goto loc_0003727A; /* jne: not equal / not zero */

loc_00037252: ;
    if (CMP_EQ(ecx, esi)) goto loc_0003727A; /* je: equal / zero */

loc_00037256: ;
    if (CMP_EQ(MEM16(ecx + 0xF8), 0)) goto loc_0003727A; /* je: equal / zero */

loc_00037260: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ecx + 0xDC) = xmm0; /* movss */
    MEM32(ecx + 0xF4) = 1;

loc_0003727A: ;
    POP32(esp, esi);

loc_0003727B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037280
 * Original: 0x00037280 - 0x00037298 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037280(void)
{
    int _flags = 0; /* fallback flag var */

loc_00037280: ;
    if (TEST_Z(eax, eax)) goto loc_00037297; /* je: equal / zero */

loc_00037284: ;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_0003728C: ;
    if (TEST_Z(eax, eax)) goto loc_00037297; /* je: equal / zero */

loc_00037290: ;
    MEM8(eax + 0x1F0) = MEM8(eax + 0x1F0) | 1;

loc_00037297: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000372A0
 * Original: 0x000372A0 - 0x000372B8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000372A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000372A0: ;
    if (TEST_Z(eax, eax)) goto loc_000372B7; /* je: equal / zero */

loc_000372A4: ;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_000372AC: ;
    if (TEST_Z(eax, eax)) goto loc_000372B7; /* je: equal / zero */

loc_000372B0: ;
    MEM8(eax + 0x1F0) = MEM8(eax + 0x1F0) | 2;

loc_000372B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000372C0
 * Original: 0x000372C0 - 0x00037304 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000372C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000372C0: ;
    if (TEST_Z(eax, eax)) { sub_00037304(); return; } /* je: equal / zero */

loc_000372C4: ;
    eax = eax + 4;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_000372CC: ;
    if (TEST_Z(eax, eax)) { sub_00037304(); return; } /* je: equal / zero */

loc_000372D0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(eax + 0xE8) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0xE8))) goto loc_000372F0; /* ja: above (unsigned >) */

loc_000372DC: ;
    xmm0 = MEMF(eax + 0x1D0); /* movss */
    /* comiss xmm0, MEMF(eax + 0x1CC) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x1CC))) { sub_00037304(); return; } /* jbe: below or equal (unsigned <=) */

loc_000372ED: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000372F0: ;
    xmm0 = MEMF(eax + 0x1CC); /* movss */
    /* comiss xmm0, MEMF(eax + 0x1D0) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x1D0))) { sub_00037304(); return; } /* jbe: below or equal (unsigned <=) */

loc_00037301: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00037310
 * Original: 0x00037310 - 0x00037329 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037310(void)
{
    int _flags = 0; /* fallback flag var */

loc_00037310: ;
    eax = MEM32(0x8471A4);
    SET_LO8(eax, MEM8(eax + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00037328; /* je: equal / zero */

loc_0003731C: ;
    ecx = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x688DD8), _icall_esp); /* indirect call */
    }

loc_00037327: ;
    POP32(esp, ecx);

loc_00037328: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037330
 * Original: 0x00037330 - 0x00037369 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00037330: ;
    PUSH32(esp, 0);
    eax = 0x5043;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_0003733E: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00037368; /* je: equal / zero */

loc_00037345: ;
    PUSH32(esp, 0);
    eax = 0x5045;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037353: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00037368; /* je: equal / zero */

loc_0003735A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM8(ecx + 0x198) = 0;

loc_00037368: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00037370
 * Original: 0x00037370 - 0x000375B9 (585 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037370(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00037370: ;
    PUSH32(esp, 0);
    eax = 0x503C;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_0003737E: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00037400; /* jne: not equal / not zero */

loc_00037385: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xC0);
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_0003D200(); /* call 0x0003D200 */

loc_0003739A: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000375B8; /* je: equal / zero */

loc_000373A5: ;
    ecx = MEM32(edx + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ecx + 0x8B8) = 1;
    eax = MEM32(edx + 4);
    xmm1 = MEMF(eax + 0x26C); /* movss */
    eax = eax + 0x248;
    MEMF(eax + 0x1C) = xmm1; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x28); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_00037400: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x4000;
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_0003740E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0xC0);
    esp = esp + 8;
    if (CMP_NE(ecx, 1)) goto loc_00037429; /* jne: not equal / not zero */

loc_00037420: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0003D2D0(); /* call 0x0003D2D0 */

loc_00037428: ;
    POP32(esp, edi);

loc_00037429: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x4024;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_0003743F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00037455; /* je: equal / zero */

loc_00037446: ;
    eax = 0x9003;
    MEM32(0x75DA6C) = eax;
    goto loc_000374DC;

loc_00037455: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x4025;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_0003746B: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0003747E; /* je: equal / zero */

loc_00037472: ;
    eax = 0x9009;
    MEM32(0x75DA6C) = eax;
    goto loc_000374DC;

loc_0003747E: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x4026;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037494: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000374A7; /* je: equal / zero */

loc_0003749B: ;
    eax = 0x900A;
    MEM32(0x75DA6C) = eax;
    goto loc_000374DC;

loc_000374A7: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x4027;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_000374BD: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000374D0; /* je: equal / zero */

loc_000374C4: ;
    eax = 0x900B;
    MEM32(0x75DA6C) = eax;
    goto loc_000374DC;

loc_000374D0: ;
    eax = MEM32(0x75DA6C);
    if (CMP_EQ(eax, 0x3E7)) goto loc_000374FB; /* je: equal / zero */

loc_000374DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax & 0xFFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    eax = 0x4000;
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_000374F8: ;
    esp = esp + 0x1C;

loc_000374FB: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    edi = edi;

loc_00037500: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = esi + 0x400C;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037517: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0003753A; /* jne: not equal / not zero */

loc_0003751E: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, eax);
    eax = 0x4014;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037533: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0003754D; /* je: equal / zero */

loc_0003753A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 1);
    eax = 0x2000;
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_0003754A: ;
    esp = esp + 0xC;

loc_0003754D: ;
    esi++;
    if (CMP_L(esi, 3)) goto loc_00037500; /* jl: less (signed <) */

loc_00037553: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x4000;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037569: ;
    esp = esp + 8;
    POP32(esp, esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, 0x80000);
    eax = 0x9000;
    if (TEST_Z(eax, eax)) goto loc_0003759A; /* je: equal / zero */

loc_0003757B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_00037586: ;
    PUSH32(esp, 0x55);
    PUSH32(esp, 0x10);
    eax = 0x9000;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_00037596: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0003759A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_000375A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    eax = 0x9000;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_000375B5: ;
    esp = esp + 0x1C;

loc_000375B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000375C0
 * Original: 0x000375C0 - 0x000375F4 (52 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000375C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000375C0: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x4047;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_000375D6: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x118);
    if (TEST_Z(eax, eax)) { sub_000375F4(); return; } /* je: equal / zero */

loc_000375E7: ;
    ecx = ecx | 0x1000;
    MEM32(eax + 0x118) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00037610
 * Original: 0x00037610 - 0x00037661 (81 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037610: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x4063;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037627: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00037661(); return; } /* jne: not equal / not zero */

loc_0003762E: ;
    PUSH32(esp, 0x9000);
    PUSH32(esp, eax);
    eax = 0x4001;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037643: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00037661(); return; } /* jne: not equal / not zero */

loc_0003764A: ;
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x118);
    esi = esi + 0x118;
    eax = eax & 0xFFFFEFEFu;
    g_seh_ebp = ebp; sub_00037676(); return; /* tail jmp 0x00037676 */

}

/**
 * sub_000376B0
 * Original: 0x000376B0 - 0x00037832 (386 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000376B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4, xmm5, xmm6;

loc_000376B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    (void)0; /* cmp MEM8(eax + 0x8CD), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM8(eax + 0x8CD), 1)) { sub_00037832(); return; } /* jne: not equal / not zero */

loc_000376C6: ;
    edi = MEM32(eax + 0x8D4);
    if (TEST_NZ(edi, edi)) goto loc_000376D6; /* jne: not equal / not zero */

loc_000376D0: ;
    edi = MEM32(esi + 0x3E0);

loc_000376D6: ;
    eax = MEM32(esi + 0x1C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    ecx = 3;
    edx = esi;
    PUSH32(esp, 0); sub_0003D200(); /* call 0x0003D200 */

loc_000376ED: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_000376FB; /* je: equal / zero */

loc_000376F4: ;
    MEM32(esi + 0x118) = MEM32(esi + 0x118) & 0xFFFFFFF9u;

loc_000376FB: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(eax + 0x350) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(eax + 0x354) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(0x6492D4); /* movss */
    MEMF(ecx + 0x26C) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00037763; /* jne: not equal / not zero */

loc_00037741: ;
    xmm0 = MEMF(0x58BCCC); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00037758: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_00037763: ;
    xmm4 = MEMF(edi + 0x114); /* movss */
    xmm6 = MEMF(0x648E6C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648F60); /* movss */
    xmm4 = xmm4 - xmm6; /* subss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_00037790; /* jbe: below or equal (unsigned <=) */

loc_00037787: ;
    xmm4 = xmm4 + xmm5; /* addss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 > xmm4)) goto loc_00037787; /* ja: above (unsigned >) */

loc_00037790: ;
    /* comiss xmm4, xmm5 - sets EFLAGS */
    if ((xmm4 < xmm5)) goto loc_0003779E; /* jb: below (unsigned <) */

loc_00037795: ;
    xmm4 = xmm4 - xmm5; /* subss */
    /* comiss xmm4, xmm5 - sets EFLAGS */
    if ((xmm4 >= xmm5)) goto loc_00037795; /* jae: above or equal (unsigned >=) */

loc_0003779E: ;
    ecx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000377C8; /* jne: not equal / not zero */

loc_000377AE: ;
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm4; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000377BD: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */

loc_000377C8: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000377DF: ;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 < xmm6)) goto loc_000377F7; /* jb: below (unsigned <) */

loc_000377F1: ;
    xmm1 = xmm1 - xmm5; /* subss */
    goto loc_00037808;

loc_000377F7: ;
    xmm2 = MEMF(0x648F64); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_00037808; /* jb: below (unsigned <) */

loc_00037804: ;
    xmm4 = xmm4 - xmm5; /* subss */

loc_00037808: ;
    xmm0 = MEMF(0x58BD44); /* movss */
    xmm4 = xmm4 - xmm1; /* subss */
    xmm4 = xmm4 * MEMF(0x648CF0); /* mulss */
    MEMF(ecx + 0x2B0) = xmm4; /* movss */
    edx = MEM32(esi + 4);
    POP32(esp, edi);
    MEMF(edx + 0x2D8) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037870
 * Original: 0x00037870 - 0x000378C8 (88 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037870(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00037870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM8(eax + 0x8C7), 1)) { sub_000378C8(); return; } /* jne: not equal / not zero */

loc_00037881: ;
    ecx = MEM32(esi + 0x1C8);
    edx = MEM32(esi + 0xC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = 3;
    edx = esi;
    PUSH32(esp, 0); sub_0003D200(); /* call 0x0003D200 */

loc_0003789D: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x6492D4); /* movss */
    MEMF(eax + 0x26C) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(0x58BD44); /* movss */
    esp = esp + 0xC;
    MEMF(ecx + 0x2D8) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037910
 * Original: 0x00037910 - 0x0003796B (91 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037910(void)
{
    int _flags = 0; /* fallback flag var */

loc_00037910: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    MEM8(eax + 0x198) = 0;
    ecx = MEM32(esi + 0x118);
    PUSH32(esp, 0x4004);
    ecx = ecx | 0x80000000u;
    PUSH32(esp, 0x4003);
    MEM32(esi + 0x118) = ecx;
    PUSH32(esp, 0x4002);
    PUSH32(esp, 0x1B);
    eax = 0x2000;
    ecx = 3;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037951: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esi + 0x118);
    if (TEST_Z(eax, eax)) { sub_0003796B(); return; } /* je: equal / zero */

loc_0003795E: ;
    eax = eax | 0x400000;
    MEM32(esi + 0x118) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037980
 * Original: 0x00037980 - 0x000379B7 (55 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037980(void)
{
    int _flags = 0; /* fallback flag var */

loc_00037980: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x118);
    ecx = ecx | 0x10;
    (void)0; /* cmp MEM16(esi + 0x220), 3 - flags set for next jcc */
    MEM32(esi + 0x118) = ecx;
    if (CMP_NE(MEM16(esi + 0x220), 3)) goto loc_000379B5; /* jne: not equal / not zero */

loc_0003799E: ;
    MEM16(esi + 0x24C) = 5;
    MEM16(esi + 0x220) = 2;
    PUSH32(esp, 0); sub_0003DF80(); /* call 0x0003DF80 */

loc_000379B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000379C0
 * Original: 0x000379C0 - 0x000379F1 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000379C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000379C0: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x402C;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_000379D6: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x118);
    if (TEST_Z(eax, eax)) { sub_000379F1(); return; } /* je: equal / zero */

loc_000379E7: ;
    ecx = ecx | 0x10;
    MEM32(eax + 0x118) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00037A00
 * Original: 0x00037A00 - 0x00037B09 (265 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037A00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;

loc_00037A00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    if (CMP_NE(MEM8(eax + 0x8C8), 1)) { sub_00037B09(); return; } /* jne: not equal / not zero */

loc_00037A15: ;
    ecx = MEM32(esi + 0x3E0);
    xmm0 = MEMF(ecx + 0x110); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_00037A30; /* jbe: below or equal (unsigned <=) */

loc_00037A2B: ;
    xmm0 = xmm4; /* movaps */
    goto loc_00037A40;

loc_00037A30: ;
    xmm1 = MEMF(0x58BD44); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00037A40; /* jbe: below or equal (unsigned <=) */

loc_00037A3D: ;
    xmm0 = xmm1; /* movaps */

loc_00037A40: ;
    edx = MEM32(esi + 0x1C8);
    xmm0 = xmm0 * MEMF(0x6492D0); /* mulss */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    ecx = 3;
    edx = esi;
    PUSH32(esp, 0); sub_0003D200(); /* call 0x0003D200 */

loc_00037A5F: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00037A6D; /* je: equal / zero */

loc_00037A66: ;
    MEM32(esi + 0x118) = MEM32(esi + 0x118) & 0xFFFFFFF9u;

loc_00037A6D: ;
    eax = MEM32(esi + 4);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648EA4); /* mulss */
    xmm1 = xmm1 + MEMF(0x58BD48); /* addss */
    xmm0 = xmm0 * MEMF(0x648FD8); /* mulss */
    MEMF(eax + 0x26C) = xmm1; /* movss */
    ecx = MEM32(esi + 4);
    MEMF(ecx + 0xAC) = xmm0; /* movss */
    eax = MEM32(esi + 4);
    xmm1 = MEMF(eax + 0xFC); /* movss */
    eax = eax + 0xA0;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    ecx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00037AE9; /* jne: not equal / not zero */

loc_00037AC7: ;
    xmm0 = MEMF(0x58BD5C); /* movss */
    eax = esp + 8;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00037ADE: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_00037AE9: ;
    edx = MEM32(esi + 4);
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(edx + 0x2D8) = xmm0; /* movss */
    eax = MEM32(esi + 4);
    MEMF(eax + 0x2B0) = xmm4; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037B50
 * Original: 0x00037B50 - 0x00037B5F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037B50(void)
{

loc_00037B50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM8(ecx + 0x198) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00037B60
 * Original: 0x00037B60 - 0x00037CA4 (324 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00037B60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2AC);
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 9)) goto loc_00037B7A; /* je: equal / zero */

loc_00037B75: ;
    if (CMP_NE(eax, 0x51)) goto loc_00037B87; /* jne: not equal / not zero */

loc_00037B7A: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x1E)) goto loc_00037BA1; /* jne: not equal / not zero */

loc_00037B83: ;
    PUSH32(esp, 1);
    goto loc_00037B92;

loc_00037B87: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x1E)) goto loc_00037BA1; /* jne: not equal / not zero */

loc_00037B90: ;
    PUSH32(esp, 0);

loc_00037B92: ;
    eax = 0x4044;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_00037B9E: ;
    esp = esp + 8;

loc_00037BA1: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x2F)) goto loc_00037C98; /* je: equal / zero */

loc_00037BAF: ;
    if (CMP_NE(eax, 0x1E)) goto loc_00037C31; /* jne: not equal / not zero */

loc_00037BB4: ;
    PUSH32(esp, 0x9000);
    PUSH32(esp, 0);
    eax = 0x4042;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037BCA: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esi + 0x118);
    if (TEST_Z(eax, eax)) goto loc_00037BDE; /* je: equal / zero */

loc_00037BD7: ;
    eax = eax & 0x7FFFFFFF;
    goto loc_00037BE3;

loc_00037BDE: ;
    eax = eax | 0x80000000u;

loc_00037BE3: ;
    MEM32(esi + 0x118) = eax;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x4044;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037BFF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00037C1C; /* je: equal / zero */

loc_00037C06: ;
    eax = MEM32(esi + 0x118);
    eax = eax & 0xFFFFFFF7u;
    eax = eax | 0x20001010;
    MEM32(esi + 0x118) = eax;
    goto loc_00037C31;

loc_00037C1C: ;
    ecx = MEM32(esi + 0x118);
    ecx = ecx & 0xDFFFEFEFu;
    ecx = ecx | 8;
    MEM32(esi + 0x118) = ecx;

loc_00037C31: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x1B)) goto loc_00037CA2; /* jne: not equal / not zero */

loc_00037C3A: ;
    PUSH32(esp, 0x9000);
    PUSH32(esp, 0);
    eax = 0x406E;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037C50: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esi + 0x118);
    if (TEST_Z(eax, eax)) goto loc_00037C64; /* je: equal / zero */

loc_00037C5D: ;
    eax = eax | 0x200;
    goto loc_00037C69;

loc_00037C64: ;
    eax = eax & 0xFFFFFDFFu;

loc_00037C69: ;
    MEM32(esi + 0x118) = eax;
    PUSH32(esp, 0x9000);
    PUSH32(esp, 0);
    eax = 0x406F;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037C85: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00037C98; /* je: equal / zero */

loc_00037C8C: ;
    MEM32(esi + 0x118) = MEM32(esi + 0x118) | 0x80000000u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00037C98: ;
    MEM32(esi + 0x118) = MEM32(esi + 0x118) & 0x7FFFFFFF;

loc_00037CA2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037CB0
 * Original: 0x00037CB0 - 0x00037CE1 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037CB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00037CB0: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x403E;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037CC6: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x118);
    if (TEST_Z(eax, eax)) { sub_00037CE1(); return; } /* je: equal / zero */

loc_00037CD7: ;
    ecx = ecx | 0x20;
    MEM32(eax + 0x118) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00037CF0
 * Original: 0x00037CF0 - 0x00037FB5 (709 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037CF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00037CF0: ;
    esp = esp - 0x2C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x4003;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037D0A: ;
    edi = MEM32(esp + 0x3C);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_00037FB5(); return; } /* je: equal / zero */

loc_00037D19: ;
    eax = MEM32(edi + 0x3E0);
    if (CMP_EQ(MEM16(eax + 0x3AE), 0)) { sub_00037FB5(); return; } /* je: equal / zero */

loc_00037D2D: ;
    ecx = MEM32(edi + 0x118);
    PUSH32(esp, esi);
    ecx = ecx | 0xC0001000u;
    esi = edi + 0x2DC;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(edi + 0x118) = ecx;
    if (TEST_NZ(esi, esi)) goto loc_00037D4F; /* jne: not equal / not zero */

loc_00037D4A: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_00037D4F: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x649544); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm0 = xmm0 - MEMF(0x64A224); /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A220); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 8) = ecx;
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
    MEMF(esp + 0xC) = xmm1; /* movss */
    edx = ecx;
    PUSH32(esp, edx);
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_002B0E50(); /* call 0x002B0E50 */

loc_00037DDD: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x28); /* mulss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 / MEMF(esp + 0x10); /* divss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    esp = esp + 4;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_00037E3F; /* jbe: below or equal (unsigned <=) */

loc_00037E37: ;
    MEMF(esp + 8) = xmm2; /* movss */
    goto loc_00037E4A;

loc_00037E3F: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00037E4A; /* jbe: below or equal (unsigned <=) */

loc_00037E44: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_00037E4A: ;
    PUSH32(esp, 0x4043);
    PUSH32(esp, 0x4042);
    PUSH32(esp, 0x4041);
    PUSH32(esp, 0x4040);
    PUSH32(esp, 0x1B);
    eax = 0x2000;
    ecx = 4;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037E6F: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_00037EA4; /* je: equal / zero */

loc_00037E76: ;
    xmm1 = MEMF(esp + 8); /* movss */
    eax = MEM32(edi + 4);
    xmm2 = MEMF(0x64A004); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CF8); /* mulss */
    xmm0 = xmm0 - MEMF(0x64941C); /* subss */
    MEMF(eax + 0x26C) = xmm2; /* movss */
    goto loc_00037F22;

loc_00037EA4: ;
    PUSH32(esp, 0x4044);
    PUSH32(esp, 0x4045);
    PUSH32(esp, 0x4046);
    PUSH32(esp, 0x4047);
    PUSH32(esp, 0x1B);
    eax = 0x2000;
    ecx = 4;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037EC9: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_00037EFB; /* je: equal / zero */

loc_00037ED0: ;
    xmm0 = MEMF(esp + 8); /* movss */
    ecx = MEM32(edi + 4);
    xmm0 = xmm0 * MEMF(0x648CF8); /* mulss */
    xmm1 = MEMF(0x64A004); /* movss */
    xmm0 = xmm0 + MEMF(0x64941C); /* addss */
    MEMF(ecx + 0x26C) = xmm1; /* movss */
    goto loc_00037F1C;

loc_00037EFB: ;
    edx = MEM32(edi + 4);
    xmm0 = MEMF(0x64A21C); /* movss */
    MEMF(edx + 0x26C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x648CF8); /* mulss */

loc_00037F1C: ;
    xmm1 = MEMF(esp + 8); /* movss */

loc_00037F22: ;
    xmm1 = xmm1 * MEMF(0x64A220); /* mulss */
    xmm1 = xmm1 - MEMF(0x64A218); /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFECu);
    ecx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    eax = 0x4003;
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_00037F4C: ;
    edx = MEM32(edi + 4);
    xmm0 = MEMF(edx + 0x5C); /* movss */
    esp = esp + 0x14;
    eax = esp + 8;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00037F66: ;
    eax = MEM32(edi + 0x650);
    xmm0 = MEMF(esp + 8); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x41000000);
    edx = 0x774950;
    MEMF(esp + 0x18) = xmm0; /* movss */
    esi = edi + 0x660;
    PUSH32(esp, 0); sub_002B0CB0(); /* call 0x002B0CB0 */

loc_00037F93: ;
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    PUSH32(esp, ecx);
    edx = esi;
    ecx = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_00037FAC: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00037FD0
 * Original: 0x00037FD0 - 0x0003801A (74 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037FD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00037FD0: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    eax = 0x4025;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00037FE6: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    ecx = MEM32(eax + 0x118);
    if (TEST_Z(eax, eax)) { sub_0003801A(); return; } /* je: equal / zero */

loc_00037FFA: ;
    xmm0 = MEMF(0x64935C); /* movss */
    ecx = ecx & 0xFFFFFFF7u;
    ecx = ecx | 0x80;
    MEM32(eax + 0x118) = ecx;
    MEMF(edx + 0x2D8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00038040
 * Original: 0x00038040 - 0x0003806B (43 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038040(void)
{
    float xmm0;

loc_00038040: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    xmm0 = MEMF(0x648EBC); /* movss */
    MEMF(ecx + 0x26C) = xmm0; /* movss */
    edx = MEM32(eax + 4);
    xmm0 = MEMF(0x5A0060); /* movss */
    MEMF(edx + 0x270) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00038070
 * Original: 0x00038070 - 0x000380A1 (49 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038070: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ZX8(MEM8(edi + 0x2A8));
    eax = MEM32(edi + 0x3E0);
    SET_LO8(ecx, MEM8(eax + 0x1B5));
    eax = MEM32(edi + 0x118);
    esi = esi | 0x9000;
    if (CMP_NE(LO8(ecx), 1)) { sub_000380A1(); return; } /* jne: not equal / not zero */

loc_0003809A: ;
    eax = eax | 0x1000000;
    g_seh_ebp = ebp; sub_000380A6(); return; /* tail jmp 0x000380A6 */

}

/**
 * sub_00038220
 * Original: 0x00038220 - 0x0003827C (92 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038220(void)
{
    int _flags = 0; /* fallback flag var */

loc_00038220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x420);
    edx = edx & 0xFFFFF7FFu;
    PUSH32(esp, 0x9000);
    PUSH32(esp, 0);
    eax = 0x401A;
    ecx = 1;
    MEM32(esi + 0x420) = edx;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_0003824D: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0003827C(); return; } /* jne: not equal / not zero */

loc_00038254: ;
    PUSH32(esp, 0x9000);
    PUSH32(esp, eax);
    eax = 0x401B;
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00038269: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0003827C(); return; } /* jne: not equal / not zero */

loc_00038270: ;
    MEM32(esi + 0x118) = MEM32(esi + 0x118) & 0xFFFEFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038290
 * Original: 0x00038290 - 0x0003832B (155 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038290(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038290: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x590);
    if (TEST_NZ(eax, eax)) goto loc_000382A8; /* jne: not equal / not zero */

loc_0003829E: ;
    eax = MEM32(ecx + 0x55C);
    if (TEST_NZ(eax, eax)) goto loc_000382E1; /* jne: not equal / not zero */

loc_000382A8: ;
    eax = MEM32(ecx + 4);
    xmm0 = MEMF(0x64A8CC); /* movss */
    MEMF(eax + 0x26C) = xmm0; /* movss */
    edx = MEM32(ecx + 4);
    xmm0 = MEMF(0x64A510); /* movss */
    MEMF(edx + 0x270) = xmm0; /* movss */
    eax = MEM32(ecx + 4);
    xmm0 = MEMF(0x649054); /* movss */
    MEMF(eax + 0x2D8) = xmm0; /* movss */

loc_000382E1: ;
    eax = MEM32(ecx + 0x3E0);
    xmm0 = MEMF(0x648F08); /* movss */
    /* comiss xmm0, MEMF(eax + 0x110) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x110))) { sub_0003832B(); return; } /* jbe: below or equal (unsigned <=) */

loc_000382F8: ;
    SET_LO8(edx, MEM8(ecx + 0x3F0));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0003832B(); return; } /* jne: not equal / not zero */

loc_00038302: ;
    edx = MEM32(ecx + 4);
    xmm0 = MEMF(edx + 0x264); /* movss */
    xmm1 = MEMF(edx + 0x24C); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0003832B(); return; } /* jbe: below or equal (unsigned <=) */

loc_00038326: ;
    g_seh_ebp = ebp; sub_00041DD0(); return; /* tail jmp 0x00041DD0 */

}

/**
 * sub_00038330
 * Original: 0x00038330 - 0x0003835E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00038330: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x4014;
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_0003833F: ;
    esp = esp + 8;
    esi = 0; /* xor self */

loc_00038344: ;
    PUSH32(esp, 0);
    eax = esi + 0x400C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_00038353: ;
    esp = esp + 8;
    esi++;
    if (CMP_L(esi, 3)) goto loc_00038344; /* jl: less (signed <) */

loc_0003835C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038360
 * Original: 0x00038360 - 0x0003836F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038360(void)
{

loc_00038360: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM8(ecx + 0x198) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00038370
 * Original: 0x00038370 - 0x00038399 (41 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038370(void)
{

loc_00038370: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    MEM8(eax + 0x198) = 0;
    MEM16(esi + 0x220) = 2;
    PUSH32(esp, 0); sub_0003DF80(); /* call 0x0003DF80 */

loc_0003838D: ;
    MEM32(esi + 0x118) = MEM32(esi + 0x118) | 0x4000;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000383A0
 * Original: 0x000383A0 - 0x00038402 (98 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000383A0(void)
{
    float xmm0;

loc_000383A0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x1C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    ecx = 3;
    PUSH32(esp, 0); sub_0003D200(); /* call 0x0003D200 */

loc_000383B9: ;
    ecx = MEM32(edx + 0x118);
    eax = MEM32(edx + 4);
    xmm0 = MEMF(0x648EBC); /* movss */
    ecx = ecx & 0xFFFFFFFBu;
    ecx = ecx | 0x1000000;
    MEM32(edx + 0x118) = ecx;
    MEM32(edx + 0x5D0) = 0;
    MEMF(eax + 0x26C) = xmm0; /* movss */
    ecx = MEM32(edx + 4);
    xmm0 = MEMF(0x5A0060); /* movss */
    esp = esp + 0xC;
    MEMF(ecx + 0x270) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00038410
 * Original: 0x00038410 - 0x00038456 (70 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038410(void)
{

loc_00038410: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x118);
    eax = eax & 0xFFFFFFFBu;
    eax = eax | 0x300000;
    MEM32(esi + 0xC0) = 8;
    MEM32(esi + 0x118) = eax;
    MEM16(esi + 0x220) = 1;
    MEM16(esi + 0x24C) = 3;
    PUSH32(esp, 0); sub_0003DF80(); /* call 0x0003DF80 */

loc_0003844A: ;
    MEM32(esi + 0x1C8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038460
 * Original: 0x00038460 - 0x00038620 (448 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038460(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038460: ;
    esp = esp - 0x10C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x118);
    PUSH32(esp, esi);
    ebx = ebp;
    esi = edi;
    PUSH32(esp, 0); sub_00048B20(); /* call 0x00048B20 */

loc_00038479: ;
    eax = 0; /* xor self */
    MEM8(edi + 0x358) = LO8(eax);
    MEM32(edi + 0x35C) = eax;
    eax = edi + 0x360;
    MEM32(edi) = 0x5D4C38;
    PUSH32(esp, 0); sub_0004AD90(); /* call 0x0004AD90 */

loc_00038498: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    esi = edi + 0x814;
    MEM8(edi + 0x7F0) = LO8(ebx);
    MEM8(edi + 0x7F1) = LO8(ebx);
    MEMF(edi + 0x7F4) = xmm0; /* movss */
    MEM8(edi + 0x7F8) = LO8(ebx);
    MEM8(edi + 0x7F9) = LO8(ebx);
    MEM8(edi + 0x7FA) = LO8(ebx);
    MEMF(edi + 0x808) = xmm0; /* movss */
    MEMF(edi + 0x80C) = xmm0; /* movss */
    MEMF(edi + 0x810) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0004C7C0(); /* call 0x0004C7C0 */

loc_000384E6: ;
    xmm0 = MEMF(0x64936C); /* movss */
    MEMF(edi + 0x8EC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0x5D4C3C;
    MEM32(edi + 0x8B4) = ebx;
    MEM32(edi + 0x8B8) = 2;
    MEM32(edi + 0x8BC) = ebx;
    MEM8(edi + 0x8C0) = LO8(ebx);
    MEM8(edi + 0x8C1) = LO8(ebx);
    MEM8(edi + 0x8C2) = LO8(ebx);
    MEM8(edi + 0x8C3) = LO8(ebx);
    MEM8(edi + 0x8C4) = LO8(ebx);
    MEM8(edi + 0x8C5) = LO8(ebx);
    MEM8(edi + 0x8C6) = LO8(ebx);
    MEM8(edi + 0x8C7) = LO8(ebx);
    MEM8(edi + 0x8C8) = LO8(ebx);
    MEM8(edi + 0x8C9) = LO8(ebx);
    MEM8(edi + 0x8CA) = LO8(ebx);
    MEM8(edi + 0x8CB) = LO8(ebx);
    MEM8(edi + 0x8CC) = LO8(ebx);
    MEM8(edi + 0x8CD) = LO8(ebx);
    MEM8(edi + 0x8CE) = LO8(ebx);
    MEM8(edi + 0x8CF) = LO8(ebx);
    MEM32(edi + 0x8D0) = ebx;
    MEM32(edi + 0x8D4) = ebx;
    MEM32(edi + 0x8D8) = ebx;
    MEM32(edi + 0x8DC) = ebx;
    MEM8(edi + 0x8E0) = LO8(ebx);
    MEM32(edi + 0x8E8) = ebp;
    MEMF(edi + 0x8F0) = xmm0; /* movss */
    MEM8(edi + 0x8F4) = LO8(ebx);
    MEM8(edi + 0x8F5) = LO8(ebx);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_000385B1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x8F8) = eax;
    MEM32(edi + 0x8FC) = ebx;
    MEMF(edi + 0x7FC) = xmm0; /* movss */
    MEMF(edi + 0x800) = xmm0; /* movss */
    MEMF(edi + 0x804) = xmm0; /* movss */
    ebp = MEM32(ebp + 0x3E0);
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_000385E3: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x74A580);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x59D958);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_000385FC: ;
    esp = esp + 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F9560(); /* call 0x002F9560 */

loc_0003860C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 0x8B4) = eax;
    eax = edi;
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00038650
 * Original: 0x00038650 - 0x000386BB (107 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038650(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi;
    MEM32(edi) = 0x5D4C38;
    PUSH32(esp, 0); sub_00039210(); /* call 0x00039210 */

loc_0003865F: ;
    ebx = edi + 0x8B4;
    PUSH32(esp, 0); sub_002F9490(); /* call 0x002F9490 */

loc_0003866A: ;
    PUSH32(esp, 0); sub_002F9630(); /* call 0x002F9630 */

loc_0003866F: ;
    esi = edi + 0x814;
    MEM32(ebx) = 0;
    PUSH32(esp, 0); sub_0004C8A0(); /* call 0x0004C8A0 */

loc_00038680: ;
    ecx = edi + 0x360;
    eax = 0x606A68;
    MEM32(ecx) = 0x5D50D0;
    MEM32(ecx + 0x484) = 0;
    MEM32(ecx + 0x454) = eax;
    MEM32(ecx + 0x42C) = eax;
    MEM32(ecx + 0x404) = eax;
    PUSH32(esp, 0); sub_00048F00(); /* call 0x00048F00 */

loc_000386B2: ;
    POP32(esp, esi);
    ecx = edi;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00048F00(); return; /* tail jmp 0x00048F00 */

}

/**
 * sub_000386C0
 * Original: 0x000386C0 - 0x00038709 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000386C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000386C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = esi;
    PUSH32(esp, 0); sub_00048F90(); /* call 0x00048F90 */

loc_000386CE: ;
    edi = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00038710(); /* call 0x00038710 */

loc_000386D7: ;
    xmm0 = MEMF(esi + 0x8F0); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    POP32(esp, edi);
    if ((xmm0 <= xmm1)) goto loc_00038706; /* jbe: below or equal (unsigned <=) */

loc_000386E8: ;
    xmm0 = xmm0 - MEMF(esp + 4); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x8F0) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000386FE; /* jbe: below or equal (unsigned <=) */

loc_000386FB: ;
    xmm0 = xmm1; /* movaps */

loc_000386FE: ;
    MEMF(esi + 0x8F0) = xmm0; /* movss */

loc_00038706: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00038710
 * Original: 0x00038710 - 0x00038944 (564 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038710: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edi + 0x3E0);
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0003893F; /* je: equal / zero */

loc_0003872A: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x444);
    if (TEST_Z(ebp, ebp)) goto loc_0003893E; /* je: equal / zero */

loc_00038739: ;
    eax = edi;
    PUSH32(esp, 0); sub_000437F0(); /* call 0x000437F0 */

loc_00038740: ;
    if (TEST_Z(eax, eax)) goto loc_00038772; /* je: equal / zero */

loc_00038744: ;
    if (CMP_EQ(MEM32(eax + 0x64), 0x1E)) goto loc_00038772; /* je: equal / zero */

loc_0003874A: ;
    ecx = MEM32(edi + 0x3B4);
    eax = MEM32(ecx + 0x58);
    if (TEST_Z(eax, eax)) goto loc_0003893E; /* je: equal / zero */

loc_0003875B: ;
    SET_LO8(eax, MEM8(esi + 0x8C1));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    POP32(esp, ebp);
    MEM8(esi + 0x8C1) = LO8(edx);
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00038772: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x8C1));
    eax = ebp;
    PUSH32(esp, 0); sub_0032FB80(); /* call 0x0032FB80 */

loc_00038780: ;
    ecx = MEM32(edi + 4);
    SET_LO8(edx, MEM8(ecx + 0x8CF));
    ecx = MEM32(edi + 0x3E4);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esp + 0xD) = LO8(edx);
    edx = MEM32(ecx + 0x204);
    (void)0; /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, MEM8(ecx + 0x2BC));
    MEM8(esp + 0xF) = (TEST_NZ(edx, edx)) ? 1 : 0; /* setne */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM8(esp + 0xE) = (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0; /* setne */
    (void)0; /* cmp MEM16(ecx + 8), 0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM16(ecx + 8), 0)) ? 1 : 0); /* setne */
    if (CMP_NE(LO8(eax), 1)) goto loc_000387C7; /* jne: not equal / not zero */

loc_000387BF: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0003893D; /* je: equal / zero */

loc_000387C7: ;
    SET_LO8(edx, MEM8(esp + 0xF));
    if (CMP_EQ(LO8(edx), 1)) goto loc_000387F0; /* je: equal / zero */

loc_000387D0: ;
    if (CMP_EQ(LO8(ecx), 1)) goto loc_000387F0; /* je: equal / zero */

loc_000387D5: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_000387F0; /* je: equal / zero */

loc_000387D9: ;
    if (CMP_EQ(MEM8(esp + 0xE), 1)) goto loc_000387F0; /* je: equal / zero */

loc_000387E0: ;
    if (CMP_EQ(MEM8(esp + 0xD), 1)) goto loc_000387F0; /* je: equal / zero */

loc_000387E7: ;
    if (CMP_NE(MEM8(esi + 0x8C0), 1)) goto loc_00038824; /* jne: not equal / not zero */

loc_000387F0: ;
    if (CMP_NE(LO8(ebx), 1)) goto loc_00038824; /* jne: not equal / not zero */

loc_000387F5: ;
    SET_LO8(eax, MEM8(esp + 0xD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x8C1) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003880C; /* je: equal / zero */

loc_00038804: ;
    MEM8(esi + 0x8C0) = LO8(ebx);
    goto loc_00038864;

loc_0003880C: ;
    MEM8(esi + 0x8C0) = 0;
    eax = MEM32(edi + 0x3B4);
    SET_LO8(ebx, 1);
    MEM32(eax + 0x58) = 0;
    goto loc_00038864;

loc_00038824: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00038864; /* jne: not equal / not zero */

loc_00038828: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0032FD10(); /* call 0x0032FD10 */

loc_0003882F: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    SET_LO8(eax, MEM8(ecx + edx + 0x79));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003884C; /* jne: not equal / not zero */

loc_00038843: ;
    MEM8(esi + 0x8C1) = 0;
    goto loc_00038864;

loc_0003884C: ;
    eax = MEM32(edi + 0x3B4);
    ecx = MEM32(eax + 0x58);
    if (TEST_Z(ecx, ecx)) goto loc_00038864; /* je: equal / zero */

loc_00038859: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    MEM8(esi + 0x8C1) = LO8(ecx);

loc_00038864: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003893D; /* je: equal / zero */

loc_00038871: ;
    SET_LO8(eax, MEM8(esp + 0xD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003893D; /* jne: not equal / not zero */

loc_0003887D: ;
    if (CMP_EQ(MEM8(esi + 0x8C1), LO8(ebx))) goto loc_0003893D; /* je: equal / zero */

loc_00038889: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000388F5; /* jne: not equal / not zero */

loc_00038891: ;
    xmm0 = MEMF(0x648F20); /* movss */
    SET_LO16(edx, ZX8(MEM8(edi + 0x2A8)));
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0xFF);
    esi = esp + 0x14;
    MEM16(esp + 0x14) = LO16(edx);
    MEM8(esp + 0x1C) = 0xC8;
    MEM8(esp + 0x1D) = 0;
    MEM8(esp + 0x1E) = 0;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C6580(); /* call 0x000C6580 */

loc_000388F2: ;
    esp = esp + 4;

loc_000388F5: ;
    eax = MEM32(edi + 4);
    if (CMP_NE(MEM8(eax + 0x8C1), 1)) goto loc_00038931; /* jne: not equal / not zero */

loc_00038901: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00038931; /* jne: not equal / not zero */

loc_00038909: ;
    PUSH32(esp, 0x100);
    eax = edi;
    PUSH32(esp, 0); sub_001D2E50(); /* call 0x001D2E50 */

loc_00038915: ;
    eax = MEM32(edi + 0x3E0);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_00038927: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00038931: ;
    esi = 0x59;
    eax = edi;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_0003893D: ;
    POP32(esp, ebx);

loc_0003893E: ;
    POP32(esp, ebp);

loc_0003893F: ;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00038950
 * Original: 0x00038950 - 0x00038A5A (266 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038950(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00038950: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(edi + 0x8C2));
    MEM8(esp + 3) = LO8(eax);
    eax = MEM32(edi + 0x8E8);
    ecx = MEM32(eax + 0x3E4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ecx, ebx)) goto loc_00038977; /* je: equal / zero */

loc_0003896F: ;
    if (CMP_NE(MEM8(ecx + 0x84), LO8(ebx))) goto loc_000389BC; /* jne: not equal / not zero */

loc_00038977: ;
    if (CMP_EQ(MEM32(eax + 0xC0), 0x40000)) goto loc_000389BC; /* je: equal / zero */

loc_00038983: ;
    ecx = MEM32(eax + 4);
    if (CMP_EQ(MEM8(ecx + 0x198), 1)) goto loc_000389DF; /* je: equal / zero */

loc_0003898F: ;
    ecx = MEM32(eax + 0x3E0);
    if (CMP_EQ(ecx, ebx)) goto loc_000389BC; /* je: equal / zero */

loc_00038999: ;
    xmm0 = MEMF(ecx + 0x228); /* movss */
    /* comiss xmm0, MEMF(eax + 0x334) - sets EFLAGS */
    edx = MEM32(0x847010);
    if ((xmm0 < MEMF(eax + 0x334))) goto loc_000389E5; /* jb: below (unsigned <) */

loc_000389B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(edi + 0x8C2) = 1;
    goto loc_000389F3;

loc_000389BC: ;
    xmm0 = MEMF(eax + 0x380); /* movss */
    /* comiss xmm0, MEMF(eax + 0x334) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0x334))) goto loc_000389DF; /* jb: below (unsigned <) */

loc_000389CD: ;
    edx = MEM32(0x847010);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(edi + 0x8C2) = 1;
    goto loc_000389F3;

loc_000389DF: ;
    edx = MEM32(0x847010);

loc_000389E5: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(edi + 0x8C2) = LO8(ebx);

loc_000389F3: ;
    ecx = MEM32(edx + 0x40);
    xmm1 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00038A09; /* jnp: not parity */

loc_00038A04: ;
    MEMF(ecx + 4) = xmm0; /* movss */

loc_00038A09: ;
    MEM8(ecx + 9) = LO8(ebx);
    eax = MEM32(edx + 0x40);
    if (CMP_NE(MEM8(eax + 8), LO8(ebx))) goto loc_00038A18; /* jne: not equal / not zero */

loc_00038A14: ;
    MEM8(eax + 8) = 1;

loc_00038A18: ;
    ecx = MEM32(edi + 0x8E8);
    eax = MEM32(ecx + 4);
    if (CMP_EQ(MEM32(eax + 0x8B8), ebx)) { sub_00038A5A(); return; } /* je: equal / zero */

loc_00038A29: ;
    if (CMP_NE(MEM8(eax + 0x8C2), 1)) goto loc_00038A3F; /* jne: not equal / not zero */

loc_00038A32: ;
    SET_LO16(esi, ZX8(MEM8(ecx + 0x2A8)));
    PUSH32(esp, 0); sub_0018F700(); /* call 0x0018F700 */

loc_00038A3F: ;
    edx = MEM32(edi + 0x8E8);
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, esi);
    MEMF(edx + 0x64C) = xmm0; /* movss */
    SET_LO8(eax, MEM8(edi + 0x8C2));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00038AC0
 * Original: 0x00038AC0 - 0x00038AF9 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038AC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00038AC0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x8E8);
    ecx = MEM32(esi + 0x3E0);
    if (TEST_Z(ecx, ecx)) { sub_00038AF9(); return; } /* je: equal / zero */

loc_00038AD1: ;
    PUSH32(esp, 0); sub_002F8D30(); /* call 0x002F8D30 */

loc_00038AD6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00038AF9(); return; } /* je: equal / zero */

loc_00038ADA: ;
    eax = MEM32(esi + 0xC0);
    eax = eax >> 8;
    if (TEST_NZ(LO8(eax), 1)) { sub_00038AF9(); return; } /* jne: not equal / not zero */

loc_00038AE7: ;
    eax = 1;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(edi + 0x8C4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038B10
 * Original: 0x00038B10 - 0x00038B6A (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00038B10: ;
    ecx = MEM32(esi + 0x8E8);
    eax = MEM32(ecx + 0xC0);
    ecx = MEM32(ecx + 0x3E0);
    eax = eax >> 8;
    SET_LO8(eax, LO8(eax) & 1);
    if (TEST_Z(ecx, ecx)) { sub_00038B6A(); return; } /* je: equal / zero */

loc_00038B2B: ;
    SET_LO8(edx, MEM8(0x7819D5));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00038B6A(); return; } /* jne: not equal / not zero */

loc_00038B35: ;
    edx = MEM32(ecx + 0x568);
    if (TEST_Z(edx, edx)) { sub_00038B6A(); return; } /* je: equal / zero */

loc_00038B3F: ;
    PUSH32(esp, edi);
    edi = MEM32(edx + 0xDC);
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(edi, edi)) { sub_00038B6A(); return; } /* je: equal / zero */

loc_00038B4B: ;
    SET_LO8(edx, MEM8(ecx + 0x24B));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00038B6A(); return; } /* jne: not equal / not zero */

loc_00038B55: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00038B6A(); return; } /* jne: not equal / not zero */

loc_00038B59: ;
    eax = 1;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(esi + 0x8C5) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00038B80
 * Original: 0x00038B80 - 0x00038BA0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038B80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038B80: ;
    eax = MEM32(esi + 0x8E8);
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) { sub_00038BA0(); return; } /* je: equal / zero */

loc_00038B90: ;
    PUSH32(esp, 0); sub_002F8DA0(); /* call 0x002F8DA0 */

loc_00038B95: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00038BA0(); return; } /* je: equal / zero */

loc_00038B99: ;
    eax = 1;
    g_seh_ebp = ebp; sub_00038BA2(); return; /* tail jmp 0x00038BA2 */

}

/**
 * sub_00038BF0
 * Original: 0x00038BF0 - 0x00038C28 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038BF0: ;
    eax = MEM32(edx + 0x8E8);
    ecx = MEM32(eax + 0xC0);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    eax = MEM32(eax + 4);
    xmm0 = MEMF(eax + 0x2A0); /* movss */
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    SET_LO8(ebx, (CMP_NE(LO8(ebx), 1)) ? 1 : 0); /* setne */
    ecx = ecx >> 8;
    eax = eax + 0x248;
    SET_LO8(ecx, LO8(ecx) & 1);
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 4))) { sub_00038C28(); return; } /* jbe: below or equal (unsigned <=) */

loc_00038C21: ;
    eax = 1;
    g_seh_ebp = ebp; sub_00038C2A(); return; /* tail jmp 0x00038C2A */

}

/**
 * sub_00038C50
 * Original: 0x00038C50 - 0x00038C70 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038C50: ;
    eax = MEM32(esi + 0x8E8);
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) { sub_00038C70(); return; } /* je: equal / zero */

loc_00038C60: ;
    PUSH32(esp, 0); sub_002F8F50(); /* call 0x002F8F50 */

loc_00038C65: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00038C70(); return; } /* je: equal / zero */

loc_00038C69: ;
    eax = 1;
    g_seh_ebp = ebp; sub_00038C72(); return; /* tail jmp 0x00038C72 */

}

/**
 * sub_00038CC0
 * Original: 0x00038CC0 - 0x00038CEC (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038CC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038CC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x8E8);
    eax = MEM32(eax + 0x3E0);
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_00038CEC(); return; } /* je: equal / zero */

loc_00038CD7: ;
    if (CMP_EQ(MEM16(eax + 8), 0)) { sub_00038CEC(); return; } /* je: equal / zero */

loc_00038CDE: ;
    SET_LO8(edx, MEM8(eax + 0x22));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00038CEC(); return; } /* jne: not equal / not zero */

loc_00038CE5: ;
    eax = 1;
    g_seh_ebp = ebp; sub_00038CEE(); return; /* tail jmp 0x00038CEE */

}

/**
 * sub_00038D90
 * Original: 0x00038D90 - 0x00038F5B (459 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038D90(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00038D90: ;
    esp = esp - 0x1C;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ebx);
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x1C;
    ecx = 0; /* xor self */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E46C0(); /* call 0x003E46C0 */

loc_00038DD3: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm3 = xmm3 - xmm5; /* subss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * MEMF(0x648CF8); /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm1 = xmm1 + xmm7; /* addss */
    MEMF(esp + 0x34) = xmm5; /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm0; /* movaps */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x28); /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x30); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x34); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm5; /* movaps */
    xmm5 = MEMF(esp + 0x28); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x30); /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm1 = xmm1 * xmm5; /* mulss */
    eax = esp + 0x10;
    xmm0 = xmm0 + xmm1; /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm0 = xmm0 - xmm2; /* subss */
    esp = esp + 0xC;
    ebx = eax;
    MEMF(esp + 8) = xmm6; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00038EE3: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    eax = ebx;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM32(esp + 0x24) = eax;
    ecx = ebx;
    MEM32(esp + 0x28) = ecx;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 4); /* addss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    MEMF(esi + 8) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00038F60
 * Original: 0x00038F60 - 0x00038F67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038F60(void)
{

loc_00038F60: ;
    SET_LO8(eax, MEM8(ecx + 0x8C8));
    esp += 4; return; /* ret */

}

/**
 * sub_00038F70
 * Original: 0x00038F70 - 0x00038F77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038F70(void)
{

loc_00038F70: ;
    SET_LO8(eax, MEM8(ecx + 0x8CD));
    esp += 4; return; /* ret */

}

/**
 * sub_00038F80
 * Original: 0x00038F80 - 0x00038FA0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038F80: ;
    eax = MEM32(esi + 0x8E8);
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) { sub_00038FA0(); return; } /* je: equal / zero */

loc_00038F90: ;
    PUSH32(esp, 0); sub_002F8FB0(); /* call 0x002F8FB0 */

loc_00038F95: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00038FA0(); return; } /* je: equal / zero */

loc_00038F99: ;
    eax = 1;
    g_seh_ebp = ebp; sub_00038FA2(); return; /* tail jmp 0x00038FA2 */

}

/**
 * sub_00038FF0
 * Original: 0x00038FF0 - 0x0003901D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038FF0: ;
    ecx = MEM32(edx + 0x8E8);
    eax = MEM32(ecx + 0x3E0);
    if (TEST_Z(eax, eax)) { sub_0003901D(); return; } /* je: equal / zero */

loc_00039000: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_0003901D(); return; } /* je: equal / zero */

loc_0003900A: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x65D));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0003901D(); return; } /* je: equal / zero */

loc_00039016: ;
    eax = 1;
    g_seh_ebp = ebp; sub_0003901F(); return; /* tail jmp 0x0003901F */

}

/**
 * sub_00039070
 * Original: 0x00039070 - 0x000390D6 (102 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039070(void)
{
    int _flags = 0; /* fallback flag var */

loc_00039070: ;
    eax = MEM32(esi + 0x8E8);
    eax = MEM32(eax + 0x3E0);
    if (TEST_Z(eax, eax)) { sub_000390D6(); return; } /* je: equal / zero */

loc_00039080: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000390A0; /* je: equal / zero */

loc_0003908A: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = ecx + edx + -1744;

loc_000390A0: ;
    if (TEST_Z(eax, eax)) { sub_000390D6(); return; } /* je: equal / zero */

loc_000390A4: ;
    eax = MEM32(eax + 0x3C4);
    if (TEST_Z(eax, eax)) { sub_000390D6(); return; } /* je: equal / zero */

loc_000390AE: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_000390B8: ;
    if (TEST_Z(eax, eax)) { sub_000390D6(); return; } /* je: equal / zero */

loc_000390BC: ;
    if (TEST_Z(MEM8(eax + 0x139), 0x40)) { sub_000390D6(); return; } /* je: equal / zero */

loc_000390C5: ;
    eax = 1;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    MEM8(esi + 0x8E0) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000390F0
 * Original: 0x000390F0 - 0x00039122 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000390F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000390F0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_00038950(); /* call 0x00038950 */

loc_000390FB: ;
    SET_LO8(eax, MEM8(esi + 0x8C2));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00039122(); return; } /* jne: not equal / not zero */

loc_00039105: ;
    eax = MEM32(esi + 0x8E8);
    ecx = MEM32(eax + 0x3E0);
    SET_LO8(eax, MEM8(ecx + 0x1B5));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00039122(); return; } /* je: equal / zero */

loc_0003911B: ;
    eax = 1;
    g_seh_ebp = ebp; sub_00039124(); return; /* tail jmp 0x00039124 */

}

/**
 * sub_00039190
 * Original: 0x00039190 - 0x00039209 (121 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039190: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_000391A0: ;
    edx = MEM32(esi + 0x8FC);
    ecx = MEM32(esi + 0x8F8);
    (void)0; /* test edx, edx - flags set for next jcc */
    edi = eax;
    SET_LO8(eax, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    if (CMP_NE(ecx, edi)) goto loc_000391BD; /* jne: not equal / not zero */

loc_000391B7: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00039203; /* je: equal / zero */

loc_000391BB: ;
    goto loc_000391C6;

loc_000391BD: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000391C6; /* jne: not equal / not zero */

loc_000391C1: ;
    PUSH32(esp, 0); sub_00039210(); /* call 0x00039210 */

loc_000391C6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0032D490(); /* call 0x0032D490 */

loc_000391CC: ;
    SET_LO8(ecx, MEM8(eax));
    ebx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000391E3; /* jne: not equal / not zero */

loc_000391DC: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    goto loc_000391E8;

loc_000391E3: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);

loc_000391E8: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0005EFE0(); /* call 0x0005EFE0 */

loc_000391EF: ;
    edx = MEM32(esp + 0x18);
    esp = esp + 4;
    MEM32(esi + 0x8FC) = edx;
    MEM32(esi + 0x8F8) = edi;
    POP32(esp, ebx);

loc_00039203: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00039210
 * Original: 0x00039210 - 0x000392A2 (146 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039210(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00039210: ;
    eax = MEM32(esi + 0x8FC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x8FC;
    if (TEST_Z(eax, eax)) goto loc_000392A0; /* je: equal / zero */

loc_00039221: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0032D490(); /* call 0x0032D490 */

loc_00039227: ;
    ebx = edi;
    PUSH32(esp, 0); sub_0032D540(); /* call 0x0032D540 */

loc_0003922E: ;
    ebx = 0; /* xor self */
    eax = 0x5D4C3C;
    MEM32(edi) = ebx;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0003923C: ;
    xmm0 = MEMF(0x648E84); /* movss */
    MEM32(esi + 0x8F8) = eax;
    MEMF(esi + 0x350) = xmm0; /* movss */
    MEMF(esi + 0x354) = xmm0; /* movss */
    if (CMP_EQ(MEM8(esi + 0x90), LO8(ebx))) goto loc_00039268; /* je: equal / zero */

loc_00039262: ;
    MEM8(esi + 0x93) = LO8(ebx);

loc_00039268: ;
    if (CMP_EQ(MEM8(esi + 0x91), LO8(ebx))) goto loc_00039276; /* je: equal / zero */

loc_00039270: ;
    MEM8(esi + 0x94) = LO8(ebx);

loc_00039276: ;
    if (CMP_EQ(MEM8(esi + 0x92), LO8(ebx))) goto loc_00039284; /* je: equal / zero */

loc_0003927E: ;
    MEM8(esi + 0x95) = LO8(ebx);

loc_00039284: ;
    eax = MEM32(esi + 0x8E8);
    MEM8(eax) = LO8(ebx);
    ecx = MEM32(esi + 0x8E8);
    MEM32(ecx + 0x5D0) = ebx;
    MEM8(esi + 0x7F9) = 1;
    POP32(esp, ebx);

loc_000392A0: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000392B0
 * Original: 0x000392B0 - 0x000392C4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000392B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000392B0: ;
    edx = 0; /* xor self */
    if (CMP_EQ(ecx, edx)) { sub_000392C4(); return; } /* je: equal / zero */

loc_000392B6: ;
    MEM8(eax + 0x358) = 1;
    MEM32(eax + 0x35C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000392E0
 * Original: 0x000392E0 - 0x000392FC (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000392E0(void)
{

loc_000392E0: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000495E0(); /* call 0x000495E0 */

loc_000392E7: ;
    eax = MEM32(esi + 0x8E8);
    ecx = ZX8(MEM8(eax + 0x2A8));
    MEM8(ecx + 0x762E40) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00039300
 * Original: 0x00039300 - 0x000393C4 (196 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039300: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x8E8);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0x8CA));
    SET_LO8(ebx, 1);
    PUSH32(esp, esi);
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, MEM8(ebp + 0x8F5));
    PUSH32(esp, edi);
    if (CMP_NE(LO8(edx), LO8(ebx))) { sub_000393C4(); return; } /* jne: not equal / not zero */

loc_00039327: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00039331; /* jne: not equal / not zero */

loc_0003932B: ;
    MEM8(ecx + 0x7F1) = LO8(ebx);

loc_00039331: ;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    esi = MEM32(eax + 0x3E0);
    edi = MEM32(0x84A5F8);
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(esi + 0x544) = MEM8(esi + 0x544) | LO8(edx);
    ecx = MEM32(eax + 0x3E0);
    SET_LO8(edx, MEM8(ecx + 0x135));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0003937F; /* je: equal / zero */

loc_0003935D: ;
    edx = ecx;
    ecx = ZX8(MEM8(edx + 0x135));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    esi = ecx + edi + -396;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(esi) = MEM8(esi) | LO8(edx);

loc_0003937F: ;
    ecx = MEM32(eax + 0x3E0);
    SET_LO8(edx, MEM8(ecx + 0x250));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000393B7; /* je: equal / zero */

loc_0003938F: ;
    edx = ecx;
    ecx = ZX8(MEM8(edx + 0x250));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    edx = ecx + edi + -396;
    SET_LO8(ecx, LO8(ebx));
    MEM8(esp + 0x14) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(edx) = MEM8(edx) | LO8(eax);

loc_000393B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x8F5) = LO8(ebx);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00039470
 * Original: 0x00039470 - 0x00039499 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039470(void)
{

loc_00039470: ;
    eax = MEM32(eax + 0x8E8);
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    edx = MEM32(eax + 0x3E0);
    SET_LO8(eax, MEM8(edx + 0x544));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    SET_LO8(ebx, ~LO8(ebx));
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEM8(edx + 0x544) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000394A0
 * Original: 0x000394A0 - 0x000394C7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000394A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000394A0: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5D4C44;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_000394C1; /* je: equal / zero */

loc_000394B0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000394BE: ;
    esp = esp + 4;

loc_000394C1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000394D0
 * Original: 0x000394D0 - 0x0003969C (460 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000394D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000394D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x26C); /* movss */
    MEMF(0x762D98) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x270); /* movss */
    MEMF(0x762D94) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x2B0); /* movss */
    MEMF(0x762D90) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x2D8); /* movss */
    MEMF(0x762D8C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x37C); /* movss */
    MEMF(0x762D88) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x10); /* movss */
    PUSH32(esp, edi);
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003953D: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(0x762D84) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x38); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003955F: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(0x762D80) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x60); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00039581: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(0x762D7C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xAC); /* movss */
    MEMF(0x762D78) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xD4); /* movss */
    MEMF(0x762D74) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(ecx + 0x350) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(ecx + 0x354) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000395FC; /* jne: not equal / not zero */

loc_000395E2: ;
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm6; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000395F1: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_000395FC: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(eax + 0xAC) = xmm0; /* movss */
    eax = MEM32(esi + 4);
    xmm0 = MEMF(eax + 0xFC); /* movss */
    xmm0 = xmm0 * MEMF(0x64ABFC); /* mulss */
    eax = eax + 0xA0;
    MEMF(eax + 0x34) = xmm0; /* movss */
    ebp = esi + 0x5D4;
    eax = 0; /* xor self */
    ecx = 0x1C;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = MEM32(esi + 0x2AC);
    MEM16(esi + 0x6DA) = LO16(ecx);
    (void)0; /* cmp MEM8(esi), 1 - flags set for next jcc */
    edi = eax;
    if (CMP_EQ(MEM8(esi), 1)) { sub_0003969C(); return; } /* je: equal / zero */

loc_00039659: ;
    if (TEST_NZ(MEM8(esi + 0x420), 2)) { sub_0003969C(); return; } /* jne: not equal / not zero */

loc_00039662: ;
    if (CMP_EQ(eax, 0x38)) { sub_0003969C(); return; } /* je: equal / zero */

loc_00039667: ;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_EQ(eax, 0x39)) { sub_0003969C(); return; } /* je: equal / zero */

loc_00039671: ;
    if (CMP_EQ(eax, 0x5A)) { sub_0003969C(); return; } /* je: equal / zero */

loc_00039676: ;
    if (CMP_EQ(eax, 0x37)) { sub_0003969C(); return; } /* je: equal / zero */

loc_0003967B: ;
    if (CMP_EQ(eax, 0x56)) { sub_0003969C(); return; } /* je: equal / zero */

loc_00039680: ;
    if (CMP_NE(eax, 0x23)) goto loc_00039695; /* jne: not equal / not zero */

loc_00039685: ;
    edx = MEM32(esi + 0x3E4);
    SET_LO8(eax, MEM8(edx + 0xB1));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0003969C(); return; } /* je: equal / zero */

loc_00039695: ;
    eax = 1;
    g_seh_ebp = ebp; sub_0003969E(); return; /* tail jmp 0x0003969E */

}

/**
 * sub_00039B40
 * Original: 0x00039B40 - 0x0003A9CF (3727 bytes, 878 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm4, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039B40: ;
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    (void)0; /* cmp MEM8(0x7FCB45), 0x42 - flags set for next jcc */
    ebx = MEM32(edi + 0x2AC);
    ebp = 1;
    if (CMP_NE(MEM8(0x7FCB45), 0x42)) goto loc_00039B66; /* jne: not equal / not zero */

loc_00039B5D: ;
    (void)0; /* cmp ebx, 0x1A - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(ebx, 0x1A)) goto loc_00039B6E; /* je: equal / zero */

loc_00039B66: ;
    MEM32(esp + 0x10) = 0;

loc_00039B6E: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x8FC);
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(MEM8(edi), 1)) goto loc_00039C5C; /* jne: not equal / not zero */

loc_00039B84: ;
    ecx = MEM32(eax + 0x8B8);
    if (TEST_Z(ecx, ecx)) goto loc_00039C5C; /* je: equal / zero */

loc_00039B92: ;
    ecx = MEM32(edi + 0x3E0);
    if (TEST_Z(ecx, ecx)) goto loc_00039C5C; /* je: equal / zero */

loc_00039BA0: ;
    edx = MEM32(ecx + 0x568);
    if (TEST_Z(edx, edx)) goto loc_00039C5C; /* je: equal / zero */

loc_00039BAE: ;
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x34) = xmm6; /* movss */
    ecx = MEM32(edi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00039BE0; /* jne: not equal / not zero */

loc_00039BC6: ;
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm6; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00039BD5: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_00039BE0: ;
    eax = MEM32(edi + 0x3E0);
    edx = MEM32(eax + 0x568);
    xmm1 = MEMF(eax + 0x114); /* movss */
    xmm1 = xmm1 - MEMF(edx + 0x4D8); /* subss */
    eax = MEM32(edi + 4);
    xmm0 = MEMF(0x648E6C); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(eax + 0x5C) = xmm1; /* movss */
    ecx = MEM32(edi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00039C5F; /* jne: not equal / not zero */

loc_00039C20: ;
    eax = MEM32(edi + 0x3E0);
    edx = MEM32(eax + 0x568);
    xmm1 = MEMF(eax + 0x114); /* movss */
    xmm1 = xmm1 - MEMF(edx + 0x4D8); /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00039C4F: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */
    goto loc_00039C5F;

loc_00039C5C: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_00039C5F: ;
    esi = edi;
    PUSH32(esp, 0); sub_0003AB80(); /* call 0x0003AB80 */

loc_00039C66: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00039CBA; /* jne: not equal / not zero */

loc_00039C6F: ;
    if (CMP_EQ(ebx, 0x38)) goto loc_00039CBA; /* je: equal / zero */

loc_00039C74: ;
    ecx = ebx;
    ecx = ecx & 0xFFFFFF7Fu;
    if (CMP_EQ(ecx, 0x39)) goto loc_00039CBA; /* je: equal / zero */

loc_00039C81: ;
    if (CMP_EQ(ecx, 0x5A)) goto loc_00039CBA; /* je: equal / zero */

loc_00039C86: ;
    if (CMP_EQ(ecx, 0x37)) goto loc_00039CBA; /* je: equal / zero */

loc_00039C8B: ;
    if (CMP_EQ(ecx, 0x56)) goto loc_00039CBA; /* je: equal / zero */

loc_00039C90: ;
    if (CMP_EQ(ebx, 0x15)) goto loc_00039CBA; /* je: equal / zero */

loc_00039C95: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00300FE0(); /* call 0x00300FE0 */

loc_00039C9C: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00039CBA; /* jne: not equal / not zero */

loc_00039CA0: ;
    if (CMP_EQ(ebx, 0x3A)) goto loc_00039CBA; /* je: equal / zero */

loc_00039CA5: ;
    if (CMP_NE(ecx, 0x23)) goto loc_00039CC1; /* jne: not equal / not zero */

loc_00039CAA: ;
    eax = MEM32(edi + 0x3E4);
    SET_LO8(ecx, MEM8(eax + 0xB1));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00039CC1; /* jne: not equal / not zero */

loc_00039CBA: ;
    MEM8(edi + 0x60E) = 0;

loc_00039CC1: ;
    (void)0; /* cmp MEM8(edi), 0 - flags set for next jcc */
    esi = 2;
    if (CMP_NE(MEM8(edi), 0)) goto loc_00039D69; /* jne: not equal / not zero */

loc_00039CCF: ;
    edx = MEM32(edi + 0x334);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x338);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x330);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = edi + 0x380;
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(0x780AB0) = 0x5D4C48;
    MEM32(0x6C0210) = 0x1CB;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x10000;
    MEM32(esp + 0x68) = 0x5D4C44;
    MEM32(esp + 0xBC) = ebp;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x70) = esi;
    MEM32(esp + 0x74) = ebp;
    MEM32(esp + 0x78) = eax;
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_00039D48: ;
    xmm6 = 0.0f; /* xorps self = zero */
    esp = esp + 0x38;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;

loc_00039D69: ;
    eax = MEM32(edi + 0x5D0);
    edx = MEM32(edi + 0x3E4);
    MEM32(edx + 0x2B8) = eax;
    if (CMP_NE(MEM8(edi), 0)) goto loc_00039D9B; /* jne: not equal / not zero */

loc_00039D80: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 0x8B8);
    if (TEST_Z(eax, eax)) goto loc_00039D9B; /* je: equal / zero */

loc_00039D8D: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(edi + 0x600) = xmm0; /* movss */

loc_00039D9B: ;
    xmm0 = MEMF(edi + 0x2F8); /* movss */
    ecx = MEM32(edi + 4);
    eax = MEM32(edi + 0x5D0);
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEMF(edi + 0x374) = xmm0; /* movss */
    MEMF(edi + 0x37C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x264); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(eax, ebp)) goto loc_00039E68; /* jne: not equal / not zero */

loc_00039DD2: ;
    if (CMP_NE(MEM8(edi), 1)) goto loc_00039E11; /* jne: not equal / not zero */

loc_00039DD7: ;
    SET_LO8(eax, MEM8(ecx + 0x96));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00039E11; /* jne: not equal / not zero */

loc_00039DE1: ;
    edx = MEM32(edi + 0x3E0);
    xmm0 = MEMF(edx + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00039E06: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x60) = xmm0; /* movss */

loc_00039E11: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 0x5C);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00039E24: ;
    ecx = MEM32(ecx + 0x60);
    eax = esp + 0x14;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00039E34: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0003A720; /* jbe: below or equal (unsigned <=) */

loc_00039E4E: ;
    edx = MEM32(edi + 0x3E4);
    MEM32(edx + 0x2B8) = esi;
    MEM32(edi + 0x5D0) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

loc_00039E68: ;
    if (CMP_NE(eax, esi)) goto loc_0003A760; /* jne: not equal / not zero */

loc_00039E70: ;
    if (CMP_NE(MEM8(edi), 1)) goto loc_00039F8C; /* jne: not equal / not zero */

loc_00039E79: ;
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00039E8D: ;
    xmm0 = MEMF(ecx + 0x60); /* movss */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00039EA1: ;
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm4 = MEMF(0x648F60); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    if ((xmm0 < MEMF(0x648E6C))) goto loc_00039EDD; /* jb: below (unsigned <) */

loc_00039ED1: ;
    xmm1 = xmm1 - xmm4; /* subss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    goto loc_00039EF8;

loc_00039EDD: ;
    xmm1 = MEMF(0x648F64); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_00039EF8; /* jb: below (unsigned <) */

loc_00039EEA: ;
    xmm2 = xmm2 - MEMF(0x648F60); /* subss */
    MEMF(esp + 0x1C) = xmm2; /* movss */

loc_00039EF8: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    SET_LO8(eax, MEM8(ecx + 0x90));
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00039F51; /* jbe: below or equal (unsigned <=) */

loc_00039F14: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_00039F1F; /* je: equal / zero */

loc_00039F18: ;
    MEM8(ecx + 0x93) = 1;

loc_00039F1F: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x91));
    eax = eax + 4;
    if (CMP_EQ(LO8(ecx), 1)) goto loc_00039F37; /* je: equal / zero */

loc_00039F30: ;
    MEM8(eax + 0x90) = 1;

loc_00039F37: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x92));
    eax = eax + 4;
    if (CMP_EQ(LO8(ecx), 1)) goto loc_00039F94; /* je: equal / zero */

loc_00039F48: ;
    MEM8(eax + 0x91) = 1;
    goto loc_00039F94;

loc_00039F51: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00039F5C; /* je: equal / zero */

loc_00039F55: ;
    MEM8(ecx + 0x93) = 0;

loc_00039F5C: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x91));
    eax = eax + 4;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00039F73; /* je: equal / zero */

loc_00039F6C: ;
    MEM8(eax + 0x90) = 0;

loc_00039F73: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x92));
    eax = eax + 4;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00039F94; /* je: equal / zero */

loc_00039F83: ;
    MEM8(eax + 0x91) = 0;
    goto loc_00039F94;

loc_00039F8C: ;
    xmm4 = MEMF(0x648F60); /* movss */

loc_00039F94: ;
    if (CMP_EQ(ebx, 0x38)) goto loc_0003A090; /* je: equal / zero */

loc_00039F9D: ;
    if (CMP_EQ(ebx, 0x15)) goto loc_0003A090; /* je: equal / zero */

loc_00039FA6: ;
    if (CMP_EQ(ebx, 0x3A)) goto loc_0003A090; /* je: equal / zero */

loc_00039FAF: ;
    if (CMP_EQ(ebx, esi)) goto loc_0003A090; /* je: equal / zero */

loc_00039FB7: ;
    if (CMP_EQ(ebx, 0x13)) goto loc_0003A090; /* je: equal / zero */

loc_00039FC0: ;
    if (CMP_EQ(ebx, 0xA)) goto loc_0003A090; /* je: equal / zero */

loc_00039FC9: ;
    if (CMP_EQ(ebx, 0xC)) goto loc_0003A090; /* je: equal / zero */

loc_00039FD2: ;
    if (CMP_EQ(ebx, 0x34)) goto loc_0003A090; /* je: equal / zero */

loc_00039FDB: ;
    ecx = ebx;
    ecx = ecx & 0xFFFFFF7Fu;
    if (CMP_NE(ecx, 0x23)) goto loc_00039FFC; /* jne: not equal / not zero */

loc_00039FE8: ;
    eax = MEM32(edi + 0x3E4);
    SET_LO8(edx, MEM8(eax + 0xB1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0003A090; /* je: equal / zero */

loc_00039FFC: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00301050(); /* call 0x00301050 */

loc_0003A003: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A090; /* jne: not equal / not zero */

loc_0003A00B: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00301130(); /* call 0x00301130 */

loc_0003A012: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A090; /* jne: not equal / not zero */

loc_0003A016: ;
    eax = ebx;
    PUSH32(esp, 0); sub_003010F0(); /* call 0x003010F0 */

loc_0003A01D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A090; /* jne: not equal / not zero */

loc_0003A021: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00300FE0(); /* call 0x00300FE0 */

loc_0003A028: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A090; /* jne: not equal / not zero */

loc_0003A02C: ;
    eax = ebx;
    PUSH32(esp, 0); sub_003010B0(); /* call 0x003010B0 */

loc_0003A033: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A090; /* jne: not equal / not zero */

loc_0003A037: ;
    eax = ebx;
    PUSH32(esp, 0); sub_003010D0(); /* call 0x003010D0 */

loc_0003A03E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A090; /* jne: not equal / not zero */

loc_0003A042: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00301070(); /* call 0x00301070 */

loc_0003A049: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A090; /* jne: not equal / not zero */

loc_0003A04D: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00301090(); /* call 0x00301090 */

loc_0003A054: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A090; /* jne: not equal / not zero */

loc_0003A058: ;
    if (CMP_EQ(ecx, 0x70)) goto loc_0003A090; /* je: equal / zero */

loc_0003A05D: ;
    if (CMP_EQ(ecx, 0x58)) goto loc_0003A090; /* je: equal / zero */

loc_0003A062: ;
    if (CMP_EQ(ecx, 0x57)) goto loc_0003A090; /* je: equal / zero */

loc_0003A067: ;
    if (CMP_EQ(ecx, 0x73)) goto loc_0003A090; /* je: equal / zero */

loc_0003A06C: ;
    if (CMP_EQ(ecx, 0x5C)) goto loc_0003A090; /* je: equal / zero */

loc_0003A071: ;
    SET_LO8(eax, MEM8(edi + 0x6DC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003A0B7; /* je: equal / zero */

loc_0003A07B: ;
    esi = 0x21;
    eax = edi;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_0003A087: ;
    MEM8(edi + 0x6DC) = 0;
    goto loc_0003A0AC;

loc_0003A090: ;
    SET_LO8(eax, MEM8(edi + 0x6DC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A0B7; /* jne: not equal / not zero */

loc_0003A09A: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_001CE630(); /* call 0x001CE630 */

loc_0003A0A2: ;
    esp = esp + 4;
    MEM8(edi + 0x6DC) = 1;

loc_0003A0AC: ;
    xmm4 = MEMF(0x648F60); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */

loc_0003A0B7: ;
    if (CMP_EQ(ebx, 0xD)) goto loc_0003A4A5; /* je: equal / zero */

loc_0003A0C0: ;
    (void)0; /* cmp MEM8(edi), 0 - flags set for next jcc */
    SET_LO8(eax, MEM8(0x7819D5));
    if (CMP_NE(MEM8(edi), 0)) goto loc_0003A1FF; /* jne: not equal / not zero */

loc_0003A0CE: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A203; /* jne: not equal / not zero */

loc_0003A0D6: ;
    if (CMP_EQ(ebx, 0x38)) goto loc_0003A23F; /* je: equal / zero */

loc_0003A0DF: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00301130(); /* call 0x00301130 */

loc_0003A0E6: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A23F; /* jne: not equal / not zero */

loc_0003A0EE: ;
    eax = ebx;
    PUSH32(esp, 0); sub_003010F0(); /* call 0x003010F0 */

loc_0003A0F5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A23F; /* jne: not equal / not zero */

loc_0003A0FD: ;
    if (CMP_EQ(ebx, 0x15)) goto loc_0003A23F; /* je: equal / zero */

loc_0003A106: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00300FE0(); /* call 0x00300FE0 */

loc_0003A10D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A23F; /* jne: not equal / not zero */

loc_0003A115: ;
    if (CMP_EQ(ebx, 0x3A)) goto loc_0003A23F; /* je: equal / zero */

loc_0003A11E: ;
    ecx = ebx;
    ecx = ecx & 0xFFFFFF7Fu;
    if (CMP_NE(ecx, 0x23)) goto loc_0003A13F; /* jne: not equal / not zero */

loc_0003A12B: ;
    edx = MEM32(edi + 0x3E4);
    SET_LO8(eax, MEM8(edx + 0xB1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003A23F; /* je: equal / zero */

loc_0003A13F: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0003A165; /* je: equal / zero */

loc_0003A147: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(edi + 0x3E0);
    xmm0 = MEMF(eax + 0x114); /* movss */
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003A160: ;
    goto loc_0003A292;

loc_0003A165: ;
    if (CMP_EQ(ebx, 0x1A)) goto loc_0003A292; /* je: equal / zero */

loc_0003A16E: ;
    if (CMP_EQ(ebx, 0xF)) goto loc_0003A292; /* je: equal / zero */

loc_0003A177: ;
    if (TEST_Z(MEM8(edi + 0x420), 2)) goto loc_0003A1C2; /* je: equal / zero */

loc_0003A180: ;
    ecx = MEM32(edi + 0x3E0);
    edx = ZX16(MEM16(ecx + 0x174));
    eax = MEM32(edi + 0x3E4);
    ecx = MEM32(edi + 4);
    edx = edx + 0xC000;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    xmm0 = xmm0 - MEMF(eax + 0x14); /* subss */
    xmm0 = xmm0 * MEMF(0x648F20); /* mulss */
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003A1BD: ;
    goto loc_0003A292;

loc_0003A1C2: ;
    ecx = MEM32(edi + 4);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A1D9: ;
    edx = MEM32(ecx + 0x8B4);
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(edx + 8); /* subss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */
    ecx = MEM32(edi + 4);
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003A1FA: ;
    goto loc_0003A292;

loc_0003A1FF: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003A23F; /* je: equal / zero */

loc_0003A203: ;
    eax = MEM32(edi + 0x3E0);
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0003A23F; /* je: equal / zero */

loc_0003A213: ;
    if (CMP_LE(MEM16(ecx + 8), 0)) goto loc_0003A23F; /* jle: less or equal (signed <=) */

loc_0003A21A: ;
    eax = ZX16(MEM16(eax + 0x174));
    ecx = MEM32(edi + 4);
    eax = eax + 0xC000;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003A23D: ;
    goto loc_0003A292;

loc_0003A23F: ;
    ecx = MEM32(edi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A292; /* jne: not equal / not zero */

loc_0003A24F: ;
    edx = MEM32(edi + 0x3E0);
    eax = ZX16(MEM16(edx + 0x174));
    edx = MEM32(edi + 0x3E4);
    eax = eax + 0xC000;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    xmm0 = xmm0 - MEMF(edx + 0x14); /* subss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A287: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */

loc_0003A292: ;
    ecx = MEM32(edi + 0x3E0);
    PUSH32(esp, 0); sub_002D3CC0(); /* call 0x002D3CC0 */

loc_0003A29D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A350; /* jne: not equal / not zero */

loc_0003A2A5: ;
    if (CMP_EQ(ebx, 3)) goto loc_0003A306; /* je: equal / zero */

loc_0003A2AA: ;
    if (CMP_EQ(ebx, 0x1A)) goto loc_0003A306; /* je: equal / zero */

loc_0003A2AF: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0003A306; /* jne: not equal / not zero */

loc_0003A2B7: ;
    if (CMP_EQ(ebx, 0xF)) goto loc_0003A306; /* je: equal / zero */

loc_0003A2BC: ;
    ebp = MEM32(edi + 4);
    xmm0 = MEMF(ebp + 0x34); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A2D3: ;
    eax = MEM32(ebp + 0x8B4);
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x44); /* subss */
    PUSH32(esp, ecx);
    esi = edi;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0003B170(); /* call 0x0003B170 */

loc_0003A2F1: ;
    MEMF(ebp + 0x34) = xmm0; /* movss */
    ecx = MEM32(edi + 4);
    esp = esp + 4;
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048950(); /* call 0x00048950 */

loc_0003A304: ;
    goto loc_0003A350;

loc_0003A306: ;
    ebp = MEM32(edi + 4);
    xmm0 = MEMF(ebp + 0x38); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A31D: ;
    SET_LO8(eax, MEM8(ebp + 0x96));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A350; /* jne: not equal / not zero */

loc_0003A327: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    esi = edi;
    PUSH32(esp, 0); sub_0003B170(); /* call 0x0003B170 */

loc_0003A333: ;
    esp = esp + 4;
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A345: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(ebp + 0x38) = xmm0; /* movss */

loc_0003A350: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x8B8);
    if (TEST_NZ(ecx, ecx)) goto loc_0003A4A5; /* jne: not equal / not zero */

loc_0003A361: ;
    if (CMP_NE(MEM8(edi), 1)) goto loc_0003A48B; /* jne: not equal / not zero */

loc_0003A36A: ;
    SET_LO8(ecx, MEM8(eax + 0x701));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edx = MEM32(esp + 0x14);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003A3AA; /* jne: not equal / not zero */

loc_0003A378: ;
    if (TEST_Z(edx, edx)) goto loc_0003A3AA; /* je: equal / zero */

loc_0003A37C: ;
    SET_LO8(ecx, MEM8(edx + 0x25));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003A3AA; /* jne: not equal / not zero */

loc_0003A383: ;
    ecx = MEM32(edi + 0x3E0);
    ecx = MEM32(ecx + 0x568);
    ecx = MEM32(ecx + 0x4D4);
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    ecx = eax + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003A3AA: ;
    eax = MEM32(edi + 0x3E4);
    ecx = MEM32(eax + 0x204);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = xmm6; /* movaps */
    if (TEST_Z(ecx, ecx)) goto loc_0003A3C7; /* je: equal / zero */

loc_0003A3BD: ;
    xmm0 = MEMF(0x649868); /* movss */
    goto loc_0003A3F6;

loc_0003A3C7: ;
    ecx = MEM32(edi + 4);
    SET_LO8(eax, MEM8(ecx + 0x701));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A3F6; /* jne: not equal / not zero */

loc_0003A3D4: ;
    if (TEST_Z(edx, edx)) goto loc_0003A3F6; /* je: equal / zero */

loc_0003A3D8: ;
    SET_LO8(eax, MEM8(edx + 0x26));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A3F6; /* jne: not equal / not zero */

loc_0003A3DF: ;
    edx = MEM32(edi + 0x3E0);
    eax = MEM32(edx + 0x568);
    ecx = MEM32(eax + 0x4D4);
    xmm0 = MEMF(ecx + 0x40); /* movss */

loc_0003A3F6: ;
    edx = MEM32(edi + 0x3E0);
    eax = MEM32(edx + 0x568);
    eax = MEM32(eax + 0x4D4);
    ecx = MEM32(eax);
    xmm1 = MEMF(ecx + 0x18); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0003A420; /* jbe: below or equal (unsigned <=) */

loc_0003A414: ;
    xmm0 = xmm1; /* movaps */
    MEM8(eax + 0xE0) = 1;
    goto loc_0003A43B;

loc_0003A420: ;
    /* comiss xmm0, MEMF(ecx + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x1C))) goto loc_0003A434; /* jbe: below or equal (unsigned <=) */

loc_0003A426: ;
    xmm0 = MEMF(ecx + 0x1C); /* movss */
    MEM8(eax + 0xE0) = 1;
    goto loc_0003A43B;

loc_0003A434: ;
    MEM8(eax + 0xE0) = 0;

loc_0003A43B: ;
    ecx = MEM32(edi + 0x3E0);
    edx = MEM32(ecx + 0x568);
    eax = MEM32(edx + 0x530);
    if (CMP_NE(eax, 1)) goto loc_0003A45C; /* jne: not equal / not zero */

loc_0003A452: ;
    xmm1 = MEMF(0x649388); /* movss */
    goto loc_0003A469;

loc_0003A45C: ;
    if (CMP_NE(eax, 2)) goto loc_0003A47E; /* jne: not equal / not zero */

loc_0003A461: ;
    xmm1 = MEMF(0x64938C); /* movss */

loc_0003A469: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_0003A47B; /* ja: above (unsigned >) */

loc_0003A46E: ;
    xmm1 = MEMF(0x64908C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0003A47E; /* jbe: below or equal (unsigned <=) */

loc_0003A47B: ;
    xmm0 = xmm1; /* movaps */

loc_0003A47E: ;
    ecx = MEM32(edi + 4);
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048950(); /* call 0x00048950 */

loc_0003A489: ;
    goto loc_0003A4A5;

loc_0003A48B: ;
    ecx = MEM32(edi + 0x650);
    PUSH32(esp, ecx);
    esi = eax + 4;
    PUSH32(esp, 0); sub_00048510(); /* call 0x00048510 */

loc_0003A49A: ;
    xmm4 = MEMF(0x648F60); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */

loc_0003A4A5: ;
    edx = MEM32(edi + 4);
    xmm0 = MEMF(edx + 0x5C); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A4BC: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    eax = MEM32(edi + 0x3E4);
    MEMF(eax + 0x258) = xmm0; /* movss */
    ecx = MEM32(edi + 4);
    xmm0 = MEMF(ecx + 0x34); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A4E7: ;
    esi = MEM32(esp + 0x14);
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = MEM32(edi + 0x3E4);
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    MEMF(edx + 0x25C) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_0003A521; /* je: equal / zero */

loc_0003A506: ;
    eax = MEM32(edi + 0x3E4);
    xmm0 = MEMF(eax + 0x25C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0xC); /* subss */
    MEMF(eax + 0x25C) = xmm0; /* movss */

loc_0003A521: ;
    eax = MEM32(edi + 0x3E4);
    eax = eax + 0x234;
    edx = edi + 0x2F4;
    ecx = edx;
    ebp = MEM32(ecx);
    MEM32(eax) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(eax + 4) = ebp;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edi + 0x3E4);
    eax = edi + 0x330;
    ebp = MEM32(eax);
    ecx = ecx + 0x228;
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(edi + 0x3E4);
    eax = eax + 0x25C;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A576: ;
    eax = MEM32(edi + 0x3E4);
    eax = eax + 0x258;
    /* comiss xmm6, MEMF(eax) - sets EFLAGS */
    if ((xmm6 <= MEMF(eax))) goto loc_0003A5A3; /* jbe: below or equal (unsigned <=) */

loc_0003A586: ;
    xmm1 = MEMF(eax); /* movss */
    /* nop */

loc_0003A590: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm1 = xmm0; /* movaps */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 > xmm1)) goto loc_0003A590; /* ja: above (unsigned >) */

loc_0003A59F: ;
    MEMF(eax) = xmm1; /* movss */

loc_0003A5A3: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 < xmm4)) goto loc_0003A5C3; /* jb: below (unsigned <) */

loc_0003A5AC: ;
    xmm1 = xmm0; /* movaps */
    /* nop */

loc_0003A5B0: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    if ((xmm0 >= xmm4)) goto loc_0003A5B0; /* jae: above or equal (unsigned >=) */

loc_0003A5BF: ;
    MEMF(eax) = xmm1; /* movss */

loc_0003A5C3: ;
    ecx = MEM32(edi + 4);
    xmm0 = MEMF(ecx + 0x34); /* movss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A5DA: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm4 = MEMF(esp + 0x14); /* movss */
    if (TEST_Z(esi, esi)) goto loc_0003A5F4; /* je: equal / zero */

loc_0003A5E4: ;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0xC); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    goto loc_0003A5FA;

loc_0003A5F4: ;
    MEMF(esp + 0x1C) = xmm4; /* movss */

loc_0003A5FA: ;
    ecx = MEM32(ecx + 0x5C);
    eax = esp + 0x20;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A60A: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + 0x5D4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + 0x5D8) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 0x5C);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A65D: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm6 = xmm6 - xmm4; /* subss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + 0x604) = xmm6; /* movss */
    MEMF(edi + 0x5DC) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, MEM8(edi));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A718; /* jne: not equal / not zero */

loc_0003A695: ;
    eax = MEM32(edi + 4);
    xmm0 = MEMF(eax + 0x2A0); /* movss */
    /* comiss xmm0, MEMF(eax + 0x24C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x24C))) goto loc_0003A718; /* jbe: below or equal (unsigned <=) */

loc_0003A6A9: ;
    ecx = MEM32(eax + 0x5C);
    eax = esp + 0x20;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A6B9: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0003A6CE: ;
    edx = MEM32(edi + 0x3E0);
    MEM16(edx + 0x174) = LO16(eax);
    eax = MEM32(edi + 0x3E0);
    SET_LO16(ecx, MEM16(eax + 0x174));
    MEM16(eax + 0x170) = LO16(ecx);
    eax = MEM32(edi + 0x3E0);
    SET_LO16(edx, MEM16(eax + 0x174));
    SET_LO16(edx, LO16(edx) + 0x4000);
    ecx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEMF(eax + 0x114) = xmm0; /* movss */

loc_0003A718: ;
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_0003A71D: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_0003A720: ;
    if (CMP_NE(ebx, 0x12)) { sub_0003A9CF(); return; } /* jne: not equal / not zero */

loc_0003A729: ;
    ecx = MEM32(edi + 4);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A740: ;
    if (TEST_Z(MEM8(edi + 0x420), 2)) goto loc_0003A927; /* je: equal / zero */

loc_0003A74D: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * MEMF(0x64927C); /* mulss */
    goto loc_0003A92F;

loc_0003A760: ;
    if (CMP_NE(eax, 3)) goto loc_0003A720; /* jne: not equal / not zero */

loc_0003A765: ;
    edx = MEM32(ecx + 0x5C);
    eax = esp + 0x20;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A775: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0003A78A: ;
    ecx = MEM32(edi + 0x3E0);
    MEM16(ecx + 0x174) = LO16(eax);
    eax = MEM32(edi + 0x3E0);
    SET_LO16(edx, MEM16(eax + 0x174));
    MEM16(eax + 0x170) = LO16(edx);
    eax = MEM32(edi + 0x3E0);
    SET_LO16(ecx, MEM16(eax + 0x174));
    SET_LO16(ecx, LO16(ecx) + 0x4000);
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    MEMF(eax + 0x114) = xmm0; /* movss */
    eax = MEM32(edi + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0xAC) = xmm0; /* movss */
    eax = MEM32(edi + 4);
    xmm1 = MEMF(eax + 0xFC); /* movss */
    eax = eax + 0xA0;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x762D98); /* movss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    ecx = MEM32(edi + 4);
    MEMF(ecx + 0x26C) = xmm0; /* movss */
    edx = MEM32(edi + 4);
    xmm0 = MEMF(0x762D94); /* movss */
    MEMF(edx + 0x270) = xmm0; /* movss */
    eax = MEM32(edi + 4);
    xmm0 = MEMF(0x762D90); /* movss */
    MEMF(eax + 0x2B0) = xmm0; /* movss */
    ecx = MEM32(edi + 4);
    xmm0 = MEMF(0x762D8C); /* movss */
    MEMF(ecx + 0x2D8) = xmm0; /* movss */
    ecx = MEM32(edi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A879; /* jne: not equal / not zero */

loc_0003A857: ;
    xmm0 = MEMF(0x762D84); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A86E: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */

loc_0003A879: ;
    ecx = MEM32(edi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003A8AB; /* jne: not equal / not zero */

loc_0003A889: ;
    xmm0 = MEMF(0x762D80); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003A8A0: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_0003A8AB: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x92));
    eax = eax + 4;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0003A8C2; /* je: equal / zero */

loc_0003A8BB: ;
    MEM8(eax + 0x91) = 0;

loc_0003A8C2: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x91));
    eax = eax + 4;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0003A8D9; /* je: equal / zero */

loc_0003A8D2: ;
    MEM8(eax + 0x90) = 0;

loc_0003A8D9: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x90));
    eax = eax + 4;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0003A8F0; /* je: equal / zero */

loc_0003A8E9: ;
    MEM8(eax + 0x8F) = 0;

loc_0003A8F0: ;
    eax = MEM32(edi + 4);
    xmm0 = MEMF(0x648E84); /* movss */
    MEMF(eax + 0x350) = xmm0; /* movss */
    MEMF(eax + 0x354) = xmm0; /* movss */
    edx = MEM32(edi + 0x3E4);
    eax = 0; /* xor self */
    MEM32(edx + 0x2B8) = eax;
    MEM32(edi + 0x5D0) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

loc_0003A927: ;
    xmm0 = MEMF(0x649868); /* movss */

loc_0003A92F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ecx + 0x8B8);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edi + 0x5E0;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(eax, eax)) goto loc_0003A99A; /* je: equal / zero */

loc_0003A96B: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    edx = edi + 0x5E8;
    MEMF(edi + 0x61C) = xmm6; /* movss */
    MEMF(edi + 0x620) = xmm6; /* movss */
    MEMF(edx) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0003AA5F(); return; /* tail jmp 0x0003AA5F */

loc_0003A99A: ;
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(edi + 0x650); /* movss */
    PUSH32(esp, 0x41100000);
    PUSH32(esp, 0x40800000);
    ecx = edi + 0x61C;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0003A9BE: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0x41100000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_0003AA43(); return; /* tail jmp 0x0003AA43 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0003AB50
 * Original: 0x0003AB50 - 0x0003AB74 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AB50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003AB50: ;
    eax = MEM32(eax + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_0003AB73; /* je: equal / zero */

loc_0003AB5F: ;
    ecx = MEM32(eax + 0x2B8);
    if (TEST_Z(ecx, ecx)) goto loc_0003AB73; /* je: equal / zero */

loc_0003AB69: ;
    MEM32(eax + 0x2B8) = 0;

loc_0003AB73: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003AB80
 * Original: 0x0003AB80 - 0x0003AFD1 (1105 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AB80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003AB80: ;
    ecx = MEM32(esi + 0x2AC);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp - 0x10;
    (void)0; /* cmp ecx, 0x38 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x3E4);
    ebx = MEM32(edi + 0xA0);
    xmm0 = xmm1; /* movaps */
    if (CMP_EQ(ecx, 0x38)) goto loc_0003ABE7; /* je: equal / zero */

loc_0003ABA2: ;
    edx = ecx;
    edx = edx & 0xFFFFFF7Fu;
    if (CMP_EQ(edx, 0x39)) goto loc_0003ABE7; /* je: equal / zero */

loc_0003ABAF: ;
    if (CMP_EQ(edx, 0x5A)) goto loc_0003ABE7; /* je: equal / zero */

loc_0003ABB4: ;
    if (CMP_EQ(edx, 0x37)) goto loc_0003ABE7; /* je: equal / zero */

loc_0003ABB9: ;
    if (CMP_EQ(edx, 0x56)) goto loc_0003ABE7; /* je: equal / zero */

loc_0003ABBE: ;
    if (CMP_EQ(ecx, 0x12)) goto loc_0003ABE7; /* je: equal / zero */

loc_0003ABC3: ;
    if (CMP_EQ(ecx, 0x15)) goto loc_0003ABE7; /* je: equal / zero */

loc_0003ABC8: ;
    eax = ecx;
    PUSH32(esp, 0); sub_00300FE0(); /* call 0x00300FE0 */

loc_0003ABCF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003ABE7; /* jne: not equal / not zero */

loc_0003ABD3: ;
    if (CMP_EQ(ecx, 0x3A)) goto loc_0003ABE7; /* je: equal / zero */

loc_0003ABD8: ;
    if (CMP_NE(edx, 0x23)) goto loc_0003ABEF; /* jne: not equal / not zero */

loc_0003ABDD: ;
    SET_LO8(eax, MEM8(edi + 0xB1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003ABEF; /* jne: not equal / not zero */

loc_0003ABE7: ;
    xmm0 = MEMF(0x648E5C); /* movss */

loc_0003ABEF: ;
    (void)0; /* cmp MEM8(esi), 0 - flags set for next jcc */
    xmm5 = MEMF(0x648EC0); /* movss */
    xmm4 = MEMF(0x648FD8); /* movss */
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0003AD6C; /* je: equal / zero */

loc_0003AC08: ;
    if (CMP_EQ(ebx, 0x45)) goto loc_0003AD36; /* je: equal / zero */

loc_0003AC11: ;
    if (CMP_EQ(ebx, 0x69)) goto loc_0003AD36; /* je: equal / zero */

loc_0003AC1A: ;
    eax = MEM32(esi + 0x3E0);
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0003AFA5; /* je: equal / zero */

loc_0003AC2E: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_0003AFA5; /* je: equal / zero */

loc_0003AC3C: ;
    ecx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(ecx + 0x8C2));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003AFA5; /* jne: not equal / not zero */

loc_0003AC4D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ebx = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0); sub_0004A880(); /* call 0x0004A880 */

loc_0003AC67: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003AC80; /* jne: not equal / not zero */

loc_0003AC73: ;
    edx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(edx + 0x8CC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003ACBF; /* jne: not equal / not zero */

loc_0003AC80: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(eax + 0xAC) = xmm0; /* movss */
    ecx = ZX8(MEM8(esi + 0x2A8));
    eax = MEM32(esi + 4);
    edx = MEM32(0x84A13C);
    eax = eax + 0xA0;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm0 = xmm0 / MEMF(ecx + edx + 0x24C); /* divss */
    xmm0 = xmm0 * MEMF(eax + 0x5C); /* mulss */
    MEMF(eax + 0x34) = xmm0; /* movss */

loc_0003ACBF: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 0x2B0) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ecx + 0x2D8) = xmm0; /* movss */
    edx = MEM32(esi + 4);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(edx + 0x26C) = xmm0; /* movss */
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x7F0));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003AD29; /* jne: not equal / not zero */

loc_0003ACFF: ;
    fp_push(MEMF(eax + 0x264)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0003AD29; /* jbe: below or equal (unsigned <=) */

loc_0003AD19: ;
    ecx = 1;
    MEM8(eax + 0x7F0) = LO8(ecx);
    goto loc_0003AFA5;

loc_0003AD29: ;
    ecx = 0; /* xor self */
    MEM8(eax + 0x7F0) = LO8(ecx);
    goto loc_0003AFA5;

loc_0003AD36: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x648EC8); /* movss */
    MEMF(eax + 0x2B0) = xmm1; /* movss */
    ecx = MEM32(esi + 4);
    MEMF(ecx + 0x2D8) = xmm0; /* movss */
    edx = MEM32(esi + 4);
    xmm0 = MEMF(0x648EBC); /* movss */
    MEMF(edx + 0x26C) = xmm0; /* movss */
    goto loc_0003AFA5;

loc_0003AD6C: ;
    if (TEST_Z(ebx, ebx)) goto loc_0003AF51; /* je: equal / zero */

loc_0003AD74: ;
    eax = ebx + -2;
    if (CMP_A(eax, 0x67)) goto loc_0003AF47; /* ja: above (unsigned >) */

loc_0003AD80: ;
    eax = ZX8(MEM8(eax + 0x3AFF8));
    { uint32_t _jt = MEM32(eax * 4 + 0x3AFD4); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0003AD8Eu) goto loc_0003AD8E;
    if (_jt == 0x0003AD9Eu) goto loc_0003AD9E;
    if (_jt == 0x0003AE45u) goto loc_0003AE45;
    if (_jt == 0x0003AE5Du) goto loc_0003AE5D;
    if (_jt == 0x0003AEA8u) goto loc_0003AEA8;
    if (_jt == 0x0003AEDEu) goto loc_0003AEDE;
    if (_jt == 0x0003AF14u) goto loc_0003AF14;
    if (_jt == 0x0003AF47u) goto loc_0003AF47;
    if (_jt == 0x0003AFA5u) goto loc_0003AFA5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003AD8E: ;
    ecx = MEM32(esi + 4);
    MEMF(ecx + 0x26C) = xmm5; /* movss */
    goto loc_0003AFA5;

loc_0003AD9E: ;
    (void)0; /* cmp MEM8(0x7FCB45), 0x42 - flags set for next jcc */
    xmm0 = MEMF(0x648EB8); /* movss */
    if (CMP_NE(MEM8(0x7FCB45), 0x42)) goto loc_0003ADFE; /* jne: not equal / not zero */

loc_0003ADAF: ;
    edx = MEM32(esi + 4);
    MEMF(edx + 0x26C) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    eax = MEM32(esi + 0x3E0);
    xmm0 = MEMF(eax + 0x114); /* movss */
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003ADD3: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(0x648E38); /* movss */
    MEMF(ecx + 0x2B0) = xmm0; /* movss */
    edx = MEM32(esi + 4);
    xmm0 = MEMF(0x648CFC); /* movss */
    MEMF(edx + 0x2D8) = xmm0; /* movss */
    goto loc_0003AFA5;

loc_0003ADFE: ;
    eax = MEM32(esi + 4);
    MEMF(eax + 0x26C) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x3E0);
    xmm0 = MEMF(edx + 0x114); /* movss */
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003AE22: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x64935C); /* movss */
    MEMF(eax + 0x2B0) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    MEMF(ecx + 0x2D8) = xmm4; /* movss */
    goto loc_0003AFA5;

loc_0003AE45: ;
    edx = MEM32(esi + 4);
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(edx + 0x2D8) = xmm0; /* movss */
    goto loc_0003AFA5;

loc_0003AE5D: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x3C)) goto loc_0003AE9C; /* jne: not equal / not zero */

loc_0003AE66: ;
    eax = MEM32(esi + 4);
    xmm2 = MEMF(0x648E6C); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    MEMF(eax + 0x26C) = xmm2; /* movss */
    ecx = MEM32(esi + 4);
    MEMF(ecx + 0x2B0) = xmm1; /* movss */
    edx = MEM32(esi + 4);
    MEMF(edx + 0x2D8) = xmm0; /* movss */
    goto loc_0003AFA5;

loc_0003AE9C: ;
    eax = esi;
    PUSH32(esp, 0); sub_0003B130(); /* call 0x0003B130 */

loc_0003AEA3: ;
    goto loc_0003AFA5;

loc_0003AEA8: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x64913C); /* movss */
    MEMF(eax + 0x26C) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(0x649360); /* movss */
    MEMF(ecx + 0x2B0) = xmm0; /* movss */
    edx = MEM32(esi + 4);
    MEMF(edx + 0x2D8) = xmm4; /* movss */
    goto loc_0003AFA5;

loc_0003AEDE: ;
    xmm2 = MEMF(0x649420); /* movss */

loc_0003AEE6: ;
    eax = MEM32(esi + 4);
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(eax + 0x26C) = xmm2; /* movss */
    ecx = MEM32(esi + 4);
    MEMF(ecx + 0x2B0) = xmm1; /* movss */
    edx = MEM32(esi + 4);
    MEMF(edx + 0x2D8) = xmm0; /* movss */
    goto loc_0003AFA5;

loc_0003AF14: ;
    eax = MEM32(esi + 4);
    xmm2 = MEMF(0x648EA0); /* movss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    MEMF(eax + 0x26C) = xmm2; /* movss */
    ecx = MEM32(esi + 4);
    MEMF(ecx + 0x2B0) = xmm1; /* movss */
    edx = MEM32(esi + 4);
    MEMF(edx + 0x2D8) = xmm0; /* movss */
    goto loc_0003AFA5;

loc_0003AF47: ;
    xmm2 = MEMF(0x649550); /* movss */
    goto loc_0003AEE6;

loc_0003AF51: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x26C) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(0x6497D4); /* movss */
    MEMF(ecx + 0x270) = xmm1; /* movss */
    edx = MEM32(esi + 4);
    MEMF(edx + 0x2B0) = xmm1; /* movss */
    eax = MEM32(esi + 4);
    MEMF(eax + 0x2D8) = xmm1; /* movss */
    eax = MEM32(esi + 4);
    eax = eax + 0x30;
    MEMF(eax + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B0); /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */

loc_0003AFA5: ;
    ecx = MEM32(esi + 0x3E4);
    SET_LO8(eax, MEM8(ecx + 0x2BC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003AFCD; /* je: equal / zero */

loc_0003AFB7: ;
    edx = MEM32(esi + 4);
    MEMF(edx + 0x26C) = xmm5; /* movss */
    eax = MEM32(esi + 4);
    MEMF(eax + 0x2D8) = xmm4; /* movss */

loc_0003AFCD: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0003B060
 * Original: 0x0003B060 - 0x0003B124 (196 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B060(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0003B060: ;
    if (CMP_EQ(MEM8(edi), 1)) goto loc_0003B123; /* je: equal / zero */

loc_0003B069: ;
    eax = MEM32(edi + 4);
    xmm0 = MEMF(eax + 0x8F0); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_0003B123; /* ja: above (unsigned >) */

loc_0003B081: ;
    if (TEST_NZ(MEM8(edi + 0x390), 1)) goto loc_0003B123; /* jne: not equal / not zero */

loc_0003B08E: ;
    eax = MEM32(edi + 0xC8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, 0x40)) goto loc_0003B0BF; /* jne: not equal / not zero */

loc_0003B09C: ;
    ecx = MEM32(edi + 0x3E4);
    edx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    MEM32(ecx + 0x2B8) = ebx;
    MEM32(edi + 0x5D0) = ebx;
    MEM16(edi + 0x6DA) = LO16(edx);
    goto loc_0003B0D8;

loc_0003B0BF: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    MEM16(edi + 0x6DA) = LO16(eax);
    MEM32(edi + 0x5D0) = 3;

loc_0003B0D8: ;
    ecx = ZX8(MEM8(edi + 0x60C));
    MEM32(edi + 0x1C8) = ecx;
    MEM8(edi + 0x60D) = LO8(ebx);
    if (CMP_EQ(MEM8(edi + 0x6DC), LO8(ebx))) goto loc_0003B107; /* je: equal / zero */

loc_0003B0F3: ;
    PUSH32(esp, esi);
    esi = 0x21;
    eax = edi;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_0003B100: ;
    MEM8(edi + 0x6DC) = LO8(ebx);
    POP32(esp, esi);

loc_0003B107: ;
    edx = MEM32(edi + 0x3E0);
    eax = MEM32(edx + 0x568);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_0003B123; /* je: equal / zero */

loc_0003B118: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x25C) = xmm0; /* movss */

loc_0003B123: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003B130
 * Original: 0x0003B130 - 0x0003B165 (53 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B130(void)
{
    float xmm0;

loc_0003B130: ;
    ecx = MEM32(eax + 4);
    xmm0 = MEMF(0x6491B4); /* movss */
    MEMF(ecx + 0x26C) = xmm0; /* movss */
    edx = MEM32(eax + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edx + 0x2B0) = xmm0; /* movss */
    eax = MEM32(eax + 4);
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(eax + 0x2D8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0003B170
 * Original: 0x0003B170 - 0x0003B1A1 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B170(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0003B170: ;
    SET_LO8(edx, MEM8(0x7819D5));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    eax = MEM32(esi + 0x3E0);
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0003B1A1(); return; } /* jne: not equal / not zero */

loc_0003B180: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_0003B1A1(); return; } /* je: equal / zero */

loc_0003B18A: ;
    if (CMP_NE(MEM8(eax + 0x1B5), 1)) { sub_0003B1A1(); return; } /* jne: not equal / not zero */

loc_0003B193: ;
    SET_LO8(eax, MEM8(ecx + 0x2D));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0003B1A1(); return; } /* jne: not equal / not zero */

loc_0003B19A: ;
    xmm0 = MEMF(esp + 4); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0003B280
 * Original: 0x0003B280 - 0x0003B683 (1027 bytes, 266 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B280(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0003B280: ;
    PUSH32(esp, ecx);
    xmm2 = MEMF(0x648E98); /* movss */
    xmm1 = MEMF(0x648E60); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    edx = 0; /* xor self */
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    xmm5 = xmm2; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm0 = xmm3; /* movaps */
    if (CMP_L(esi, 4)) goto loc_0003B3FC; /* jl: less (signed <) */

loc_0003B2B7: ;
    ecx = esi + -4;
    ecx = ecx >> 2;
    ecx++;
    eax = edi + 0x748;
    edx = ecx * 4;
    goto loc_0003B2D0;

    /* nop */

loc_0003B2D0: ;
    /* comiss xmm5, MEMF(eax + -1744) - sets EFLAGS */
    if ((xmm5 <= MEMF(eax + -1744))) goto loc_0003B2E1; /* jbe: below or equal (unsigned <=) */

loc_0003B2D9: ;
    xmm5 = MEMF(eax + -1744); /* movss */

loc_0003B2E1: ;
    xmm4 = MEMF(eax + -1744); /* movss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_0003B2F1; /* jbe: below or equal (unsigned <=) */

loc_0003B2EE: ;
    xmm7 = xmm4; /* movaps */

loc_0003B2F1: ;
    /* comiss xmm2, MEMF(eax + -1736) - sets EFLAGS */
    xmm4 = MEMF(eax + -1740); /* movss */
    xmm4 = xmm4 + xmm0; /* addss */
    if ((xmm2 <= MEMF(eax + -1736))) goto loc_0003B30E; /* jbe: below or equal (unsigned <=) */

loc_0003B306: ;
    xmm2 = MEMF(eax + -1736); /* movss */

loc_0003B30E: ;
    xmm0 = MEMF(eax + -1736); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0003B31E; /* jbe: below or equal (unsigned <=) */

loc_0003B31B: ;
    xmm1 = xmm0; /* movaps */

loc_0003B31E: ;
    /* comiss xmm5, MEMF(eax) - sets EFLAGS */
    if ((xmm5 <= MEMF(eax))) goto loc_0003B327; /* jbe: below or equal (unsigned <=) */

loc_0003B323: ;
    xmm5 = MEMF(eax); /* movss */

loc_0003B327: ;
    xmm0 = MEMF(eax); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_0003B333; /* jbe: below or equal (unsigned <=) */

loc_0003B330: ;
    xmm7 = xmm0; /* movaps */

loc_0003B333: ;
    /* comiss xmm2, MEMF(eax + 8) - sets EFLAGS */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm0 = xmm0 + xmm4; /* addss */
    if ((xmm2 <= MEMF(eax + 8))) goto loc_0003B347; /* jbe: below or equal (unsigned <=) */

loc_0003B342: ;
    xmm2 = MEMF(eax + 8); /* movss */

loc_0003B347: ;
    xmm4 = MEMF(eax + 8); /* movss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_0003B354; /* jbe: below or equal (unsigned <=) */

loc_0003B351: ;
    xmm1 = xmm4; /* movaps */

loc_0003B354: ;
    /* comiss xmm5, MEMF(eax + 0x6D0) - sets EFLAGS */
    if ((xmm5 <= MEMF(eax + 0x6D0))) goto loc_0003B365; /* jbe: below or equal (unsigned <=) */

loc_0003B35D: ;
    xmm5 = MEMF(eax + 0x6D0); /* movss */

loc_0003B365: ;
    xmm4 = MEMF(eax + 0x6D0); /* movss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_0003B375; /* jbe: below or equal (unsigned <=) */

loc_0003B372: ;
    xmm7 = xmm4; /* movaps */

loc_0003B375: ;
    /* comiss xmm2, MEMF(eax + 0x6D8) - sets EFLAGS */
    xmm4 = MEMF(eax + 0x6D4); /* movss */
    xmm4 = xmm4 + xmm0; /* addss */
    if ((xmm2 <= MEMF(eax + 0x6D8))) goto loc_0003B392; /* jbe: below or equal (unsigned <=) */

loc_0003B38A: ;
    xmm2 = MEMF(eax + 0x6D8); /* movss */

loc_0003B392: ;
    xmm0 = MEMF(eax + 0x6D8); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0003B3A2; /* jbe: below or equal (unsigned <=) */

loc_0003B39F: ;
    xmm1 = xmm0; /* movaps */

loc_0003B3A2: ;
    /* comiss xmm5, MEMF(eax + 0xDA0) - sets EFLAGS */
    if ((xmm5 <= MEMF(eax + 0xDA0))) goto loc_0003B3B3; /* jbe: below or equal (unsigned <=) */

loc_0003B3AB: ;
    xmm5 = MEMF(eax + 0xDA0); /* movss */

loc_0003B3B3: ;
    xmm0 = MEMF(eax + 0xDA0); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_0003B3C3; /* jbe: below or equal (unsigned <=) */

loc_0003B3C0: ;
    xmm7 = xmm0; /* movaps */

loc_0003B3C3: ;
    /* comiss xmm2, MEMF(eax + 0xDA8) - sets EFLAGS */
    xmm0 = MEMF(eax + 0xDA4); /* movss */
    xmm0 = xmm0 + xmm4; /* addss */
    if ((xmm2 <= MEMF(eax + 0xDA8))) goto loc_0003B3E0; /* jbe: below or equal (unsigned <=) */

loc_0003B3D8: ;
    xmm2 = MEMF(eax + 0xDA8); /* movss */

loc_0003B3E0: ;
    xmm4 = MEMF(eax + 0xDA8); /* movss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_0003B3F0; /* jbe: below or equal (unsigned <=) */

loc_0003B3ED: ;
    xmm1 = xmm4; /* movaps */

loc_0003B3F0: ;
    eax = eax + 0x1B40;
    ecx--;
    if ((ecx != 0)) goto loc_0003B2D0; /* jne: not equal / not zero */

loc_0003B3FC: ;
    if (CMP_GE(edx, esi)) goto loc_0003B451; /* jge: greater or equal (signed >=) */

loc_0003B400: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = esi;
    eax = eax + edi + 0x78;
    ecx = ecx - edx;

loc_0003B410: ;
    /* comiss xmm5, MEMF(eax) - sets EFLAGS */
    if ((xmm5 <= MEMF(eax))) goto loc_0003B419; /* jbe: below or equal (unsigned <=) */

loc_0003B415: ;
    xmm5 = MEMF(eax); /* movss */

loc_0003B419: ;
    xmm4 = MEMF(eax); /* movss */
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_0003B425; /* jbe: below or equal (unsigned <=) */

loc_0003B422: ;
    xmm7 = xmm4; /* movaps */

loc_0003B425: ;
    /* comiss xmm2, MEMF(eax + 8) - sets EFLAGS */
    xmm4 = MEMF(eax + 4); /* movss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm0 = xmm4; /* movaps */
    if ((xmm2 <= MEMF(eax + 8))) goto loc_0003B43C; /* jbe: below or equal (unsigned <=) */

loc_0003B437: ;
    xmm2 = MEMF(eax + 8); /* movss */

loc_0003B43C: ;
    xmm4 = MEMF(eax + 8); /* movss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_0003B449; /* jbe: below or equal (unsigned <=) */

loc_0003B446: ;
    xmm1 = xmm4; /* movaps */

loc_0003B449: ;
    eax = eax + 0x6D0;
    ecx--;
    if ((ecx != 0)) goto loc_0003B410; /* jne: not equal / not zero */

loc_0003B451: ;
    xmm5 = MEMF(0x648D10); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    edx = 0; /* xor self */
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    MEMF(ebx + 0x2F4) = xmm7; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(ebx + 0x2F8) = xmm0; /* movss */
    MEMF(ebx + 0x2FC) = xmm6; /* movss */
    xmm4 = xmm3; /* movaps */
    if (CMP_L(esi, 4)) goto loc_0003B5D1; /* jl: less (signed <) */

loc_0003B4A0: ;
    ecx = esi + -4;
    ecx = ecx >> 2;
    ecx++;
    eax = edi + 0x750;
    edx = ecx * 4;
    goto loc_0003B4C0;

    /* nop */
    /* nop */

loc_0003B4C0: ;
    xmm2 = MEMF(eax + -1752); /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm2 = xmm2 * xmm5; /* mulss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_0003B4D8; /* jbe: below or equal (unsigned <=) */

loc_0003B4D5: ;
    xmm2 = xmm3; /* movaps */

loc_0003B4D8: ;
    xmm1 = MEMF(eax + -1744); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_0003B4F3; /* jbe: below or equal (unsigned <=) */

loc_0003B4E9: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */

loc_0003B4F3: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0003B4FB; /* jbe: below or equal (unsigned <=) */

loc_0003B4F8: ;
    xmm1 = xmm2; /* movaps */

loc_0003B4FB: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_0003B503; /* jbe: below or equal (unsigned <=) */

loc_0003B500: ;
    xmm4 = xmm1; /* movaps */

loc_0003B503: ;
    xmm2 = MEMF(eax + -8); /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm2 = xmm2 * xmm5; /* mulss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_0003B518; /* jbe: below or equal (unsigned <=) */

loc_0003B515: ;
    xmm2 = xmm3; /* movaps */

loc_0003B518: ;
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_0003B52F; /* jbe: below or equal (unsigned <=) */

loc_0003B525: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */

loc_0003B52F: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0003B537; /* jbe: below or equal (unsigned <=) */

loc_0003B534: ;
    xmm1 = xmm2; /* movaps */

loc_0003B537: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_0003B53F; /* jbe: below or equal (unsigned <=) */

loc_0003B53C: ;
    xmm4 = xmm1; /* movaps */

loc_0003B53F: ;
    xmm2 = MEMF(eax + 0x6C8); /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm2 = xmm2 * xmm5; /* mulss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_0003B557; /* jbe: below or equal (unsigned <=) */

loc_0003B554: ;
    xmm2 = xmm3; /* movaps */

loc_0003B557: ;
    xmm1 = MEMF(eax + 0x6D0); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_0003B572; /* jbe: below or equal (unsigned <=) */

loc_0003B568: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */

loc_0003B572: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0003B57A; /* jbe: below or equal (unsigned <=) */

loc_0003B577: ;
    xmm1 = xmm2; /* movaps */

loc_0003B57A: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_0003B582; /* jbe: below or equal (unsigned <=) */

loc_0003B57F: ;
    xmm4 = xmm1; /* movaps */

loc_0003B582: ;
    xmm2 = MEMF(eax + 0xD98); /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm2 = xmm2 * xmm5; /* mulss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_0003B59A; /* jbe: below or equal (unsigned <=) */

loc_0003B597: ;
    xmm2 = xmm3; /* movaps */

loc_0003B59A: ;
    xmm1 = MEMF(eax + 0xDA0); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_0003B5B5; /* jbe: below or equal (unsigned <=) */

loc_0003B5AB: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */

loc_0003B5B5: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0003B5BD; /* jbe: below or equal (unsigned <=) */

loc_0003B5BA: ;
    xmm1 = xmm2; /* movaps */

loc_0003B5BD: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_0003B5C5; /* jbe: below or equal (unsigned <=) */

loc_0003B5C2: ;
    xmm4 = xmm1; /* movaps */

loc_0003B5C5: ;
    eax = eax + 0x1B40;
    ecx--;
    if ((ecx != 0)) goto loc_0003B4C0; /* jne: not equal / not zero */

loc_0003B5D1: ;
    if (CMP_GE(edx, esi)) goto loc_0003B634; /* jge: greater or equal (signed >=) */

loc_0003B5D5: ;
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    esi = esi - edx;
    eax = ecx + edi + 0x80;
    ecx = esi;
    goto loc_0003B5F0;

    /* nop */

loc_0003B5F0: ;
    xmm2 = MEMF(eax + -8); /* movss */
    xmm2 = xmm2 - xmm7; /* subss */
    xmm2 = xmm2 * xmm5; /* mulss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_0003B605; /* jbe: below or equal (unsigned <=) */

loc_0003B602: ;
    xmm2 = xmm3; /* movaps */

loc_0003B605: ;
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 - xmm6; /* subss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_0003B61C; /* jbe: below or equal (unsigned <=) */

loc_0003B612: ;
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */

loc_0003B61C: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_0003B624; /* jbe: below or equal (unsigned <=) */

loc_0003B621: ;
    xmm1 = xmm2; /* movaps */

loc_0003B624: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_0003B62C; /* jbe: below or equal (unsigned <=) */

loc_0003B629: ;
    xmm4 = xmm1; /* movaps */

loc_0003B62C: ;
    eax = eax + 0x6D0;
    ecx--;
    if ((ecx != 0)) goto loc_0003B5F0; /* jne: not equal / not zero */

loc_0003B634: ;
    xmm1 = MEMF(0x64925C); /* movss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((xmm1 <= xmm4)) goto loc_0003B646; /* jbe: below or equal (unsigned <=) */

loc_0003B643: ;
    xmm4 = xmm1; /* movaps */

loc_0003B646: ;
    xmm4 = xmm4 + MEMF(0x648EA4); /* addss */
    xmm1 = xmm4; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(esp); /* addss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(ebx + 0x330) = xmm0; /* movss */
    MEMF(ebx + 0x334) = xmm1; /* movss */
    MEMF(ebx + 0x338) = xmm6; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003B690
 * Original: 0x0003B690 - 0x0003BB79 (1257 bytes, 288 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B690(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0003B690: ;
    esp = esp - 0x10;
    eax = 0x38F70;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = 0x38F60;
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0003BB79(); return; } /* jne: not equal / not zero */

loc_0003B6AF: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0003BB79(); return; } /* jne: not equal / not zero */

loc_0003B6B7: ;
    edx = MEM32(esi + 0x420);
    edx = edx & 0x10;
    PUSH32(esp, edi);
    if ((edx != 0)) goto loc_0003B8BF; /* jne: not equal / not zero */

loc_0003B6C7: ;
    eax = MEM32(esi + 0x3E4);
    SET_LO8(ecx, MEM8(eax + 0x2E6));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003B6E5; /* jne: not equal / not zero */

loc_0003B6D7: ;
    SET_LO8(ecx, MEM8(eax + 0x3A0));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0003B8BF; /* je: equal / zero */

loc_0003B6E5: ;
    xmm0 = MEMF(0x6490B0); /* movss */
    xmm1 = MEMF(0x648E3C); /* movss */
    eax = MEM32(esi + 4);
    MEMF(esi + 0x754) = xmm0; /* movss */
    MEMF(esi + 0x758) = xmm1; /* movss */
    ecx = MEM32(eax + 0x8B8);
    if (TEST_Z(ecx, ecx)) goto loc_0003B766; /* je: equal / zero */

loc_0003B712: ;
    edx = MEM32(esi + 0x3E0);
    MEMF(esi + 0x744) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x764) = xmm0; /* movss */
    MEMF(esi + 0x768) = xmm0; /* movss */
    MEMF(esi + 0x748) = xmm1; /* movss */
    xmm0 = MEMF(edx + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    ecx = eax + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003B753: ;
    eax = esi;
    PUSH32(esp, 0); sub_0003D360(); /* call 0x0003D360 */

loc_0003B75A: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000482D0(); /* call 0x000482D0 */

loc_0003B761: ;
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0003B766: ;
    xmm0 = MEMF(eax + 0x5C); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003B77A: ;
    eax = MEM32(esi + 0x3E0);
    xmm0 = MEMF(eax + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    PUSH32(esp, 0); sub_002AF700(); /* call 0x002AF700 */

loc_0003B79B: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = MEMF(esi + 0x650); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648CE4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    edi = esi + 0x744;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    ecx = esi + 0x764;
    edx = edi;
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0003B7EB; /* jbe: below or equal (unsigned <=) */

loc_0003B7CB: ;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x42340000);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0003B7DF: ;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40000000);
    goto loc_0003B809;

loc_0003B7EB: ;
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x42340000);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0003B7FF: ;
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x41A00000);

loc_0003B809: ;
    eax = MEM32(esi + 0x758);
    xmm0 = MEMF(esi + 0x650); /* movss */
    edx = esi + 0x748;
    ecx = esi + 0x768;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0003B829: ;
    ecx = MEM32(esi + 0x3E0);
    fp_push(MEMF(ecx + 0x114)); /* fld float */
    esp = esp + 0x18;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = esp + 8;
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002AF770(); /* call 0x002AF770 */

loc_0003B84B: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(eax + 0x5C); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003B862: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF770(); /* call 0x002AF770 */

loc_0003B877: ;
    ecx = MEM32(esi + 0x650);
    edx = MEM32(edx);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x660;
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_0003B898: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    esp = esp + 0x10;
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003B8AC: ;
    eax = esi;
    PUSH32(esp, 0); sub_0003D360(); /* call 0x0003D360 */

loc_0003B8B3: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000482D0(); /* call 0x000482D0 */

loc_0003B8BA: ;
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0003B8BF: ;
    xmm4 = 0.0f; /* xorps self = zero */
    eax = MEM32(esi + 0x52C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esi + 0x754) = xmm4; /* movss */
    MEMF(esi + 0x744) = xmm4; /* movss */
    MEMF(esi + 0x758) = xmm4; /* movss */
    MEMF(esi + 0x748) = xmm4; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0003BB66; /* jne: not equal / not zero */

loc_0003B8F0: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(esi + 0x3E0);
    ecx = ZX16(MEM16(eax + 0x176));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F48); /* mulss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    xmm0 = xmm0 + MEMF(eax + 0x114); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    if (TEST_Z(edx, edx)) goto loc_0003B946; /* je: equal / zero */

loc_0003B929: ;
    if (CMP_EQ(MEM32(esi + 0x2AC), 0x1C)) goto loc_0003B946; /* je: equal / zero */

loc_0003B932: ;
    eax = MEM32(eax + 0x568);
    xmm0 = xmm0 - MEMF(eax + 0x2EC); /* subss */
    MEMF(esp + 4) = xmm0; /* movss */

loc_0003B946: ;
    ecx = MEM32(esi + 0x2AC);
    (void)0; /* cmp ecx, 0x38 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_EQ(ecx, 0x38)) goto loc_0003B989; /* je: equal / zero */

loc_0003B952: ;
    eax = ecx;
    PUSH32(esp, 0); sub_00301130(); /* call 0x00301130 */

loc_0003B959: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003B989; /* jne: not equal / not zero */

loc_0003B95D: ;
    eax = ecx;
    PUSH32(esp, 0); sub_003010F0(); /* call 0x003010F0 */

loc_0003B964: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003B989; /* jne: not equal / not zero */

loc_0003B968: ;
    if (CMP_EQ(ecx, 0x12)) goto loc_0003B989; /* je: equal / zero */

loc_0003B96D: ;
    eax = ecx;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_NE(eax, 0x23)) goto loc_0003B99A; /* jne: not equal / not zero */

loc_0003B979: ;
    eax = MEM32(esi + 0x3E4);
    SET_LO8(ebx, MEM8(eax + 0xB1));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0003B99A; /* jne: not equal / not zero */

loc_0003B989: ;
    eax = MEM32(esi + 0x3E4);
    xmm0 = xmm0 - MEMF(eax + 0x14); /* subss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_0003B99A: ;
    eax = esp + 8;
    PUSH32(esp, 0); sub_002AF770(); /* call 0x002AF770 */

loc_0003B9A3: ;
    edi = MEM32(esi + 4);
    eax = MEM32(edi + 0x8B8);
    if (TEST_Z(eax, eax)) goto loc_0003BA42; /* je: equal / zero */

loc_0003B9B4: ;
    edx = MEM32(esi + 0x3E4);
    xmm0 = MEMF(edx + 0x278); /* movss */
    xmm5 = MEMF(0x6492B0); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    ecx = edi + 4;
    if (1 /* jnp after test - parity */) goto loc_0003BA2A; /* jnp: not parity */

loc_0003B9D6: ;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003B9DB: ;
    ecx = MEM32(esi + 0x3E4);
    eax = ecx + 0x24C;
    edi = eax;
    ebx = MEM32(edi);
    edx = esi + 0x330;
    MEM32(edx) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(edx + 4) = ebx;
    edi = MEM32(edi + 8);
    MEM32(edx + 8) = edi;
    edi = MEM32(eax);
    edx = esi + 0x33C;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    MEMF(ecx + 0x278) = xmm5; /* movss */
    MEMF(esi + 0x660) = xmm4; /* movss */
    goto loc_0003BB65;

loc_0003BA2A: ;
    xmm0 = MEMF(esp + 8); /* movss */
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003BA35: ;
    MEMF(esi + 0x660) = xmm4; /* movss */
    goto loc_0003BB65;

loc_0003BA42: ;
    if (TEST_NZ(edx, edx)) goto loc_0003BAE7; /* jne: not equal / not zero */

loc_0003BA4A: ;
    SET_LO8(eax, MEM8(esi + 0x430));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003BAE7; /* jne: not equal / not zero */

loc_0003BA58: ;
    if (CMP_EQ(ecx, 0x38)) goto loc_0003BACF; /* je: equal / zero */

loc_0003BA5D: ;
    eax = ecx;
    PUSH32(esp, 0); sub_00301130(); /* call 0x00301130 */

loc_0003BA64: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003BACF; /* jne: not equal / not zero */

loc_0003BA68: ;
    eax = ecx;
    PUSH32(esp, 0); sub_003010F0(); /* call 0x003010F0 */

loc_0003BA6F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003BACF; /* jne: not equal / not zero */

loc_0003BA73: ;
    if (CMP_EQ(ecx, 0x12)) goto loc_0003BACF; /* je: equal / zero */

loc_0003BA78: ;
    ecx = ecx & 0xFFFFFF7Fu;
    if (CMP_NE(ecx, 0x23)) goto loc_0003BA93; /* jne: not equal / not zero */

loc_0003BA83: ;
    ecx = MEM32(esi + 0x3E4);
    SET_LO8(eax, MEM8(ecx + 0xB1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003BACF; /* je: equal / zero */

loc_0003BA93: ;
    if (TEST_Z(MEM32(esi + 0x118), 0x200000)) goto loc_0003BAB7; /* je: equal / zero */

loc_0003BA9F: ;
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649E00); /* movss */
    goto loc_0003BAFD;

loc_0003BAB7: ;
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64A248); /* movss */
    goto loc_0003BAFD;

loc_0003BACF: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    goto loc_0003BAFD;

loc_0003BAE7: ;
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */

loc_0003BAFD: ;
    SET_LO8(eax, MEM8(0x7FA204));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003BB65; /* jne: not equal / not zero */

loc_0003BB0C: ;
    xmm0 = MEMF(edi + 0x5C); /* movss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003BB20: ;
    edx = MEM32(esi + 0x650);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = esi + 0x660;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_0003BB51: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(esp + 0x24); /* movss */
    esp = esp + 0x10;
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003BB65: ;
    POP32(esp, ebx);

loc_0003BB66: ;
    eax = esi;
    PUSH32(esp, 0); sub_0003D360(); /* call 0x0003D360 */

loc_0003BB6D: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000482D0(); /* call 0x000482D0 */

loc_0003BB74: ;
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0003BBD0
 * Original: 0x0003BBD0 - 0x0003BC38 (104 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BBD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BBD0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x8B4);
    xmm1 = MEMF(ecx + 0x44); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0003BBFB; /* jnp: not parity */

loc_0003BBED: ;
    xmm1 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0003BC24; /* jp: parity */

loc_0003BBFB: ;
    if (TEST_NZ(MEM8(esi + 0x390), 4)) goto loc_0003BC24; /* jne: not equal / not zero */

loc_0003BC04: ;
    eax = esi + 0x330;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x2F4;
    if (TEST_NZ(eax, eax)) goto loc_0003BC1A; /* jne: not equal / not zero */

loc_0003BC15: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_0003BC1A: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(edi, edi)) goto loc_0003BC24; /* jne: not equal / not zero */

loc_0003BC1F: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_0003BC24: ;
    PUSH32(esp, 0); sub_0003BFC0(); /* call 0x0003BFC0 */

loc_0003BC29: ;
    eax = esi;
    PUSH32(esp, 0); sub_0003D360(); /* call 0x0003D360 */

loc_0003BC30: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000482D0(); return; /* tail jmp 0x000482D0 */

}

/**
 * sub_0003BC40
 * Original: 0x0003BC40 - 0x0003BCDF (159 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BC40(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0003BC40: ;
    SET_LO8(eax, MEM8(edi + 0x390));
    esp = esp - 0x10;
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(eax), 4)) goto loc_0003BCD3; /* jne: not equal / not zero */

loc_0003BC52: ;
    xmm0 = MEMF(edi + 0x41C); /* movss */
    xmm1 = MEMF(edi + 0x41C); /* movss */
    xmm0 = xmm0 * MEMF(0x648EF8); /* mulss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = edi;
    MEMF(edi + 0x41C) = xmm1; /* movss */
    MEMF(edi + 0x558) = xmm5; /* movss */
    PUSH32(esp, 0); sub_0003E1A0(); /* call 0x0003E1A0 */

loc_0003BC88: ;
    eax = MEM32(edi + 0x43C);
    if (TEST_Z(eax, eax)) goto loc_0003BCD3; /* je: equal / zero */

loc_0003BC92: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0003BCDF(); return; } /* jp: parity */

loc_0003BCD3: ;
    esi = edi;
    PUSH32(esp, 0); sub_0003BFC0(); /* call 0x0003BFC0 */

loc_0003BCDA: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0003BDF0
 * Original: 0x0003BDF0 - 0x0003BFB2 (450 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BDF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0003BDF0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3E0);
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0003BFAD; /* je: equal / zero */

loc_0003BE08: ;
    if (CMP_NE(MEM8(eax), 1)) goto loc_0003BFAD; /* jne: not equal / not zero */

loc_0003BE11: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x8FC);
    xmm1 = MEMF(esi + 0x114); /* movss */
    xmm1 = xmm1 - MEMF(0x648E6C); /* subss */
    edx = MEM32(edx + 0x4D4);
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esi + 0x1CC); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x1C); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 - MEMF(edx + 0x40); /* subss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x14); /* movss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_0003BE63; /* jbe: below or equal (unsigned <=) */

loc_0003BE5E: ;
    xmm4 = xmm1; /* movaps */
    goto loc_0003BE6E;

loc_0003BE63: ;
    /* comiss xmm4, MEMF(eax + 0x18) - sets EFLAGS */
    if ((xmm4 <= MEMF(eax + 0x18))) goto loc_0003BE6E; /* jbe: below or equal (unsigned <=) */

loc_0003BE69: ;
    xmm4 = MEMF(eax + 0x18); /* movss */

loc_0003BE6E: ;
    xmm0 = xmm0 * MEMF(0x649230); /* mulss */
    xmm3 = MEMF(eax + 0x20); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm3 = MEMF(0x64938C); /* movss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    MEMF(esp + 4) = xmm1; /* movss */
    if ((xmm3 > xmm1)) goto loc_0003BEA8; /* ja: above (unsigned >) */

loc_0003BE9B: ;
    xmm3 = MEMF(0x64908C); /* movss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_0003BEAE; /* jbe: below or equal (unsigned <=) */

loc_0003BEA8: ;
    MEMF(esp + 4) = xmm3; /* movss */

loc_0003BEAE: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003BEBF; /* jne: not equal / not zero */

loc_0003BEB7: ;
    xmm2 = MEMF(0x7F9F4C); /* movss */

loc_0003BEBF: ;
    xmm1 = MEMF(0x7F9F5C); /* movss */
    PUSH32(esp, edi);
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * MEMF(0x648E14); /* mulss */
    eax = (int32_t)xmm3; /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = (int32_t)xmm1; /* cvttss2si */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x59BAD8); /* mulss */
    edi = ecx + 0x360;
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x648E18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0xC);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp = esp - 8;
    eax = esi + 0x78;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0x43820000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0004B140(); /* call 0x0004B140 */

loc_0003BF91: ;
    ecx = MEM32(0x7FA21C);
    eax = MEM32(esi + 0x564);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    ecx = ecx + 0x360;
    PUSH32(esp, 0); sub_0004B320(); /* call 0x0004B320 */

loc_0003BFAC: ;
    POP32(esp, edi);

loc_0003BFAD: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0003BFC0
 * Original: 0x0003BFC0 - 0x0003C1D1 (529 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BFC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm7;

loc_0003BFC0: ;
    eax = MEM32(esi + 0x170);
    esp = esp - 0x20;
    if (CMP_EQ(eax, 4)) goto loc_0003C1BF; /* je: equal / zero */

loc_0003BFD2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x330;
    (void)0; /* test edi, edi - flags set for next jcc */
    ebx = esi + 0x300;
    if (TEST_NZ(edi, edi)) goto loc_0003BFE9; /* jne: not equal / not zero */

loc_0003BFE4: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_0003BFE9: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0003BFF2; /* jne: not equal / not zero */

loc_0003BFED: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_0003BFF2: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 - MEMF(edi); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 - MEMF(edi + 4); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 - MEMF(edi + 8); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    ebx = esi + 0x2F4;
    if (TEST_NZ(edi, edi)) goto loc_0003C02F; /* jne: not equal / not zero */

loc_0003C02A: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_0003C02F: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0003C038; /* jne: not equal / not zero */

loc_0003C033: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_0003C038: ;
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 - MEMF(edi); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 - MEMF(edi + 4); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 - MEMF(edi + 8); /* subss */
    edx = esp + 0x10;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0CB0(); /* call 0x002B0CB0 */

loc_0003C06F: ;
    edx = esp + 0x1C;
    xmm7 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_002B0CB0(); /* call 0x002B0CB0 */

loc_0003C07B: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x8B4);
    xmm1 = MEMF(edx + 0x44); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (1 /* jnp after test - parity */) goto loc_0003C0AB; /* jnp: not parity */

loc_0003C09D: ;
    xmm1 = MEMF(edx + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0003C0F5; /* jp: parity */

loc_0003C0AB: ;
    SET_LO8(eax, MEM8(esi + 0x2D0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003C0F5; /* je: equal / zero */

loc_0003C0B5: ;
    if (TEST_NZ(MEM32(esi + 0x118), 0x100000)) goto loc_0003C0ED; /* jne: not equal / not zero */

loc_0003C0C1: ;
    xmm0 = MEMF(esi + 0x3C0); /* movss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E6C))) goto loc_0003C0E3; /* jbe: below or equal (unsigned <=) */

loc_0003C0D2: ;
    xmm0 = MEMF(0x6494C4); /* movss */
    /* comiss xmm0, MEMF(esi + 0x3C0) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 0x3C0))) goto loc_0003C0ED; /* ja: above (unsigned >) */

loc_0003C0E3: ;
    xmm0 = MEMF(0x648D10); /* movss */
    goto loc_0003C0F5;

loc_0003C0ED: ;
    xmm0 = MEMF(0x648F58); /* movss */

loc_0003C0F5: ;
    MEMF(esi + 0x720) = xmm0; /* movss */
    eax = MEM32(ecx + 0x280);
    ecx = MEM32(ecx + 0x27C);
    xmm0 = MEMF(esi + 0x650); /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x720);
    PUSH32(esp, ecx);
    edx = esi + 0x728;
    ecx = esi + 0x724;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0003C12B: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x60); /* movss */
    esp = esp + 0xC;
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003C143: ;
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648E6C))) goto loc_0003C163; /* jb: below (unsigned <) */

loc_0003C159: ;
    xmm7 = xmm7 - MEMF(0x648F60); /* subss */
    goto loc_0003C178;

loc_0003C163: ;
    xmm2 = MEMF(0x648F64); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 < xmm0)) goto loc_0003C178; /* jb: below (unsigned <) */

loc_0003C170: ;
    xmm1 = xmm1 - MEMF(0x648F60); /* subss */

loc_0003C178: ;
    SET_LO8(eax, MEM8(ecx + 0x96));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003C1A6; /* jne: not equal / not zero */

loc_0003C182: ;
    xmm1 = xmm1 - xmm7; /* subss */
    xmm1 = xmm1 * MEMF(edx); /* mulss */
    xmm1 = xmm1 + MEMF(esp); /* addss */
    eax = esp;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003C19C: ;
    xmm0 = MEMF(esp); /* movss */
    MEMF(ecx + 0x60) = xmm0; /* movss */

loc_0003C1A6: ;
    ecx = MEM32(esi + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0x2B0) = xmm0; /* movss */
    edx = MEM32(esi + 4);
    MEMF(edx + 0x2D8) = xmm0; /* movss */

loc_0003C1BF: ;
    eax = esi;
    PUSH32(esp, 0); sub_0003D360(); /* call 0x0003D360 */

loc_0003C1C6: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000482D0(); /* call 0x000482D0 */

loc_0003C1CD: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0003C1E0
 * Original: 0x0003C1E0 - 0x0003C23E (94 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C1E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003C1E0: ;
    PUSH32(esp, ecx);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0003C23E(); return; } /* je: equal / zero */

loc_0003C1E7: ;
    edi = MEM32(0x8755F8);
    if (TEST_Z(edi, edi)) goto loc_0003C22E; /* je: equal / zero */

loc_0003C1F1: ;
    esi = edi + 0xC;
    PUSH32(esp, 0); sub_00232F10(); /* call 0x00232F10 */

loc_0003C1F9: ;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_0003C1FE: ;
    eax = MEM32(edi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0003C216; /* je: equal / zero */

loc_0003C209: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0003C213: ;
    esp = esp + 4;

loc_0003C216: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(edi + 4) = 0;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0003C22B: ;
    esp = esp + 4;

loc_0003C22E: ;
    POP32(esp, edi);
    MEM32(0x8755F8) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003C2E0
 * Original: 0x0003C2E0 - 0x0003C316 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C2E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003C2E0: ;
    PUSH32(esp, ecx);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0003C316(); return; } /* je: equal / zero */

loc_0003C2E9: ;
    eax = MEM32(0x8755F4);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = eax;
    if (TEST_Z(eax, eax)) goto loc_0003C30A; /* je: equal / zero */

loc_0003C2F4: ;
    PUSH32(esp, 0); sub_001F4FC0(); /* call 0x001F4FC0 */

loc_0003C2F9: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0003C307: ;
    esp = esp + 4;

loc_0003C30A: ;
    MEM32(0x8755F4) = 0;
    g_seh_ebp = ebp; sub_0003C320(); return; /* tail jmp 0x0003C320 */

}

/**
 * sub_0003C380
 * Original: 0x0003C380 - 0x0003C412 (146 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C380(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_0003C380: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = esi + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 8) = ebx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm1 -= xmm0 (packed 4xfloat) */
    xmm2 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm2 = 1.0f / sqrtf(xmm1); /* rsqrtss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3 *= xmm2 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm3; /* movss */
    MEMD(eax + 4) = xmm3; /* movhps */
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    eax = ebx;
    MEMF(esi + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0003C3F8: ;
    ecx = MEM32(edi);
    eax = esi;
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0003C420
 * Original: 0x0003C420 - 0x0003C4EE (206 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C420(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0003C420: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    xmm4 = MEMF(esi + 0x18); /* movss */
    eax = esp + 8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm5 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm5 = MEMF(edi + 0xC); /* movss */
    xmm5 = xmm5 + xmm4; /* addss */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 > xmm5)) { sub_0003C4EE(); return; } /* ja: above (unsigned >) */

loc_0003C4A4: ;
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(edi + 0xC); /* movss */
    xmm2 = xmm2 * xmm2; /* mulss */
    if ((xmm3 <= xmm1)) goto loc_0003C4D4; /* jbe: below or equal (unsigned <=) */

loc_0003C4CF: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) { sub_0003C4EE(); return; } /* ja: above (unsigned >) */

loc_0003C4D4: ;
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) { sub_0003C4EE(); return; } /* jbe: below or equal (unsigned <=) */

loc_0003C4E4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0003C500
 * Original: 0x0003C500 - 0x0003C517 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C500(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003C500: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_0003C520(); return; /* tail jmp 0x0003C520 */

}

/**
 * sub_0003C6F0
 * Original: 0x0003C6F0 - 0x0003C98F (671 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C6F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003C6F0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x700));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003C70B; /* jne: not equal / not zero */

loc_0003C706: ;
    PUSH32(esp, 0); sub_00042910(); /* call 0x00042910 */

loc_0003C70B: ;
    eax = MEM32(edi + 0x3E4);
    if (TEST_Z(eax, eax)) goto loc_0003C724; /* je: equal / zero */

loc_0003C715: ;
    SET_LO8(ecx, MEM8(eax + 0x84));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003C729; /* jne: not equal / not zero */

loc_0003C724: ;
    MEM8(esp + 0x13) = 0;

loc_0003C729: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(0x84A5F8);
    ebx = edi + 0x330;
    ecx = ecx + 0x140;
    edx = ebx;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(edi + 0x3E0);
    SET_LO8(eax, MEM8(eax + 0x135));
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003C785; /* je: equal / zero */

loc_0003C762: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edx = MEM32(eax + esi + -1644);
    (void)0; /* cmp edx, 0x35 - flags set for next jcc */
    eax = eax + esi + -1744;
    if (CMP_EQ(edx, 0x35)) goto loc_0003C783; /* je: equal / zero */

loc_0003C77E: ;
    if (CMP_NE(edx, 0x1E)) goto loc_0003C785; /* jne: not equal / not zero */

loc_0003C783: ;
    ecx = eax;

loc_0003C785: ;
    edx = MEM32(edi + 4);
    MEM32(edx + 0x8BC) = ecx;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 0x8B8);
    if (TEST_Z(eax, eax)) goto loc_0003C7DA; /* je: equal / zero */

loc_0003C79B: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = edi + 0x2F4;
    ebp = MEM32(eax);
    edx = edi + 0x318;
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ebp;
    MEM32(edx + 8) = eax;
    eax = ebx;
    ebp = MEM32(eax);
    edx = edi + 0x324;
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ebp;
    MEM32(edx + 8) = eax;
    MEMF(edi + 0x650) = xmm0; /* movss */

loc_0003C7DA: ;
    eax = MEM32(edi + 0x5D0);
    if (CMP_EQ(eax, 3)) goto loc_0003C89F; /* je: equal / zero */

loc_0003C7E9: ;
    if (CMP_NE(MEM32(edi + 0xC0), 0x100)) goto loc_0003C7FD; /* jne: not equal / not zero */

loc_0003C7F5: ;
    if (TEST_Z(eax, eax)) goto loc_0003C89F; /* je: equal / zero */

loc_0003C7FD: ;
    edx = MEM32(edi + 0x2AC);
    eax = 0x43;
    if (CMP_NE(edx, eax)) goto loc_0003C82E; /* jne: not equal / not zero */

loc_0003C80C: ;
    edx = MEM32(edi + 0x3E4);
    if (CMP_EQ(MEM32(edx + 0xA0), eax)) goto loc_0003C82E; /* je: equal / zero */

loc_0003C81A: ;
    MEM8(ecx + 0x8CF) = 0;
    eax = MEM32(edi + 0x3B4);
    MEM32(eax + 0x54) = 0;

loc_0003C82E: ;
    ecx = MEM32(edi + 0x3E4);
    eax = MEM32(ecx + 0xA0);
    SET_LO8(ecx, MEM8(0x7819D5));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(edi + 0x2AC) = eax;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003C89F; /* jne: not equal / not zero */

loc_0003C84A: ;
    if (TEST_NZ(eax, eax)) goto loc_0003C89F; /* jne: not equal / not zero */

loc_0003C84E: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003C89F; /* jne: not equal / not zero */

loc_0003C858: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_0003C89F; /* je: equal / zero */

loc_0003C861: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x35)) goto loc_0003C893; /* je: equal / zero */

loc_0003C86B: ;
    if (CMP_EQ(eax, 6)) goto loc_0003C893; /* je: equal / zero */

loc_0003C870: ;
    if (CMP_EQ(eax, 2)) goto loc_0003C893; /* je: equal / zero */

loc_0003C875: ;
    if (CMP_EQ(eax, 0x23)) goto loc_0003C893; /* je: equal / zero */

loc_0003C87A: ;
    if (CMP_EQ(eax, 0x1C)) goto loc_0003C893; /* je: equal / zero */

loc_0003C87F: ;
    if (CMP_EQ(eax, 1)) goto loc_0003C893; /* je: equal / zero */

loc_0003C884: ;
    if (CMP_EQ(eax, 0x10)) goto loc_0003C893; /* je: equal / zero */

loc_0003C889: ;
    if (CMP_EQ(eax, 0x1B)) goto loc_0003C893; /* je: equal / zero */

loc_0003C88E: ;
    if (CMP_NE(eax, 0x12)) goto loc_0003C89F; /* jne: not equal / not zero */

loc_0003C893: ;
    esi = 0x21;
    eax = edi;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_0003C89F: ;
    edx = ZX8(MEM8(edi + 0x2A8));
    if (CMP_EQ(MEM8(edx + 0x762E40), 4)) goto loc_0003C8B6; /* je: equal / zero */

loc_0003C8AF: ;
    MEM32(edi + 0x420) = MEM32(edi + 0x420) & 0xFFFFFFFBu;

loc_0003C8B6: ;
    eax = MEM32(0x8472A0);
    if (TEST_NZ(eax, eax)) goto loc_0003C90C; /* jne: not equal / not zero */

loc_0003C8BF: ;
    if (TEST_NZ(MEM32(edi + 0xC0), 0x400000)) goto loc_0003C90C; /* jne: not equal / not zero */

loc_0003C8CB: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x700));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003C90C; /* jne: not equal / not zero */

loc_0003C8D8: ;
    ecx = edi + 0x318;
    eax = MEM32(ecx);
    edx = edi + 0x2F4;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = edi + 0x324;
    ecx = MEM32(edx);
    eax = ebx;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_0003C90C: ;
    eax = edi;
    PUSH32(esp, 0); sub_00041EB0(); /* call 0x00041EB0 */

loc_0003C913: ;
    ecx = ebx;
    edx = MEM32(ecx);
    eax = edi + 0x33C;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(edi + 0x37C);
    MEM32(eax + 8) = ecx;
    MEM32(edi + 0x378) = edx;
    eax = edi + 0x2DC;
    edx = MEM32(eax);
    ecx = edi + 0x2E8;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ebp = edi + 0x2F4;
    edx = ebp;
    eax = MEM32(edx);
    ecx = edi + 0x300;
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x8498D4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 8) = edx;
    if (TEST_Z(eax, eax)) { sub_0003C98F(); return; } /* je: equal / zero */

loc_0003C97A: ;
    if (CMP_NE(MEM8(eax + 4), 1)) { sub_0003C98F(); return; } /* jne: not equal / not zero */

loc_0003C980: ;
    ebx = edi;
    PUSH32(esp, 0); sub_000418F0(); /* call 0x000418F0 */

loc_0003C987: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0003CD50
 * Original: 0x0003CD50 - 0x0003CD80 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003CD50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003CD50: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x55C);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm4 = MEMF(0x648F60); /* movss */
    if (TEST_Z(eax, eax)) { sub_0003CD80(); return; } /* je: equal / zero */

loc_0003CD63: ;
    eax = MEM32(ecx + 0x590);
    if (CMP_EQ(eax, 0xA)) goto loc_0003CD73; /* je: equal / zero */

loc_0003CD6E: ;
    if (CMP_NE(eax, 0xE)) { sub_0003CD80(); return; } /* jne: not equal / not zero */

loc_0003CD73: ;
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0x3C0) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_0003CDD1(); return; /* tail jmp 0x0003CDD1 */

}

/**
 * sub_0003CE30
 * Original: 0x0003CE30 - 0x0003CEB4 (132 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003CE30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003CE30: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x420);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(eax + 0x8C6));
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x3E0);
    SET_LO8(eax, MEM8(ebp + 0x20C));
    ecx = ecx & 0x200;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0003CEB4(); return; } /* je: equal / zero */

loc_0003CE5C: ;
    edi = MEM32(esi + 0x2AC);
    if (CMP_EQ(edi, 0x38)) { sub_0003CEB4(); return; } /* je: equal / zero */

loc_0003CE67: ;
    edx = edi;
    edx = edx & 0xFFFFFF7Fu;
    if (CMP_EQ(edx, 0x39)) { sub_0003CEB4(); return; } /* je: equal / zero */

loc_0003CE74: ;
    if (CMP_EQ(edx, 0x5A)) { sub_0003CEB4(); return; } /* je: equal / zero */

loc_0003CE79: ;
    if (CMP_EQ(edx, 0x37)) { sub_0003CEB4(); return; } /* je: equal / zero */

loc_0003CE7E: ;
    if (CMP_EQ(edx, 0x56)) { sub_0003CEB4(); return; } /* je: equal / zero */

loc_0003CE83: ;
    if (CMP_EQ(edi, 0x15)) { sub_0003CEB4(); return; } /* je: equal / zero */

loc_0003CE88: ;
    eax = edi;
    PUSH32(esp, 0); sub_00300FE0(); /* call 0x00300FE0 */

loc_0003CE8F: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0003CEB4(); return; } /* jne: not equal / not zero */

loc_0003CE93: ;
    if (CMP_EQ(edi, 0x3A)) { sub_0003CEB4(); return; } /* je: equal / zero */

loc_0003CE98: ;
    if (CMP_NE(edx, 0x23)) goto loc_0003CEAD; /* jne: not equal / not zero */

loc_0003CE9D: ;
    eax = MEM32(esi + 0x3E4);
    SET_LO8(edx, MEM8(eax + 0xB1));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_0003CEB4(); return; } /* je: equal / zero */

loc_0003CEAD: ;
    eax = 1;
    g_seh_ebp = ebp; sub_0003CEB6(); return; /* tail jmp 0x0003CEB6 */

}

/**
 * sub_0003D180
 * Original: 0x0003D180 - 0x0003D1C2 (66 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D180(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003D180: ;
    if (TEST_Z(MEM8(eax + 0x118), 2)) goto loc_0003D1C1; /* je: equal / zero */

loc_0003D189: ;
    ecx = MEM32(eax + 0x38C);
    if (TEST_Z(LO8(ecx), 8)) goto loc_0003D1A8; /* je: equal / zero */

loc_0003D194: ;
    edx = MEM32(eax + 0x52C);
    if (TEST_NZ(edx, edx)) goto loc_0003D1A8; /* jne: not equal / not zero */

loc_0003D19E: ;
    MEM32(eax + 0x544) = 0xFFFFFFFFu;

loc_0003D1A8: ;
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_0003D1C1; /* je: equal / zero */

loc_0003D1AD: ;
    ecx = MEM32(eax + 0x52C);
    if (TEST_NZ(ecx, ecx)) goto loc_0003D1C1; /* jne: not equal / not zero */

loc_0003D1B7: ;
    MEM32(eax + 0x544) = 1;

loc_0003D1C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003D1D0
 * Original: 0x0003D1D0 - 0x0003D1F7 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D1D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003D1D0: ;
    if (TEST_Z(MEM8(eax + 0x118), 4)) goto loc_0003D1F6; /* je: equal / zero */

loc_0003D1D9: ;
    ecx = MEM32(0x7FA21C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x3B4);
    edi = edi + 0x248;
    PUSH32(esp, 0); sub_0004A7D0(); /* call 0x0004A7D0 */

loc_0003D1F5: ;
    POP32(esp, edi);

loc_0003D1F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003D200
 * Original: 0x0003D200 - 0x0003D2C4 (196 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D200(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003D200: ;
    if (CMP_NE(MEM16(edx + ecx * 2 + 0x278), 0)) { sub_0003D2C4(); return; } /* jne: not equal / not zero */

loc_0003D20F: ;
    SET_LO16(eax, MEM16(edx + 0x94));
    MEM16(edx + ecx * 2 + 0x96) = LO16(eax);
    eax = MEM32(edx + 0xC0);
    MEM32(edx + ecx * 4 + 0xC4) = eax;
    eax = MEM32(edx + 0x118);
    MEM32(edx + ecx * 4 + 0x11C) = eax;
    eax = MEM32(edx + 0x170);
    MEM32(edx + ecx * 4 + 0x174) = eax;
    eax = MEM32(edx + 0x1C8);
    MEM32(edx + ecx * 4 + 0x1CC) = eax;
    SET_LO16(eax, MEM16(edx + 0x220));
    MEM16(edx + ecx * 2 + 0x222) = LO16(eax);
    SET_LO16(eax, MEM16(edx + 0x24C));
    MEM16(edx + ecx * 2 + 0x24E) = LO16(eax);
    eax = MEM32(esp + 4);
    MEM32(edx + 0xC0) = eax;
    eax = MEM32(esp + 8);
    MEM32(edx + 0x170) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx + 0x1C8) = eax;
    eax = 1;
    PUSH32(esp, ebx);
    MEM16(edx + ecx * 2 + 0x278) = LO16(eax);
    SET_LO8(ebx, MEM8(edx + 0xC0));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(LO8(eax), LO8(ebx))) goto loc_0003D2BC; /* jne: not equal / not zero */

loc_0003D2A9: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xC0);
    PUSH32(esp, edi);

loc_0003D2B1: ;
    ecx++;
    edi = eax;
    edi = edi << LO8(ecx);
    if (TEST_Z(esi, edi)) goto loc_0003D2B1; /* je: equal / zero */

loc_0003D2BA: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0003D2BC: ;
    MEM16(edx + 0x94) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003D2D0
 * Original: 0x0003D2D0 - 0x0003D355 (133 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D2D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003D2D0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM16(esi + edi * 2 + 0x278), 0)) { sub_0003D355(); return; } /* je: equal / zero */

loc_0003D2DE: ;
    SET_LO16(eax, MEM16(esi + edi * 2 + 0x96));
    MEM16(esi + 0x94) = LO16(eax);
    ecx = MEM32(esi + edi * 4 + 0xC4);
    MEM32(esi + 0xC0) = ecx;
    edx = MEM32(esi + edi * 4 + 0x174);
    MEM32(esi + 0x170) = edx;
    eax = MEM32(esi + edi * 4 + 0x11C);
    MEM32(esi + 0x118) = eax;
    ecx = MEM32(esi + edi * 4 + 0x1CC);
    MEM32(esi + 0x1C8) = ecx;
    SET_LO16(edx, MEM16(esi + edi * 2 + 0x222));
    MEM16(esi + 0x220) = LO16(edx);
    SET_LO16(eax, MEM16(esi + edi * 2 + 0x24E));
    MEM16(esi + 0x24C) = LO16(eax);
    PUSH32(esp, 0); sub_0003DF80(); /* call 0x0003DF80 */

loc_0003D344: ;
    MEM16(esi + edi * 2 + 0x278) = 0;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003D360
 * Original: 0x0003D360 - 0x0003DB4F (2031 bytes, 422 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D360(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0003D360: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 4);
    MEM8(esi + 0x430) = 0;
    eax = MEM32(ecx + 0x264);
    MEM32(esi + 0x434) = eax;
    SET_LO8(eax, MEM8(0x7655EA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003DB4A; /* jne: not equal / not zero */

loc_0003D389: ;
    xmm0 = MEMF(esi + 0x58C); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0003D3BA; /* jnp: not parity */

loc_0003D39D: ;
    xmm0 = MEMF(ecx + 0x26C); /* movss */
    /* comiss xmm0, MEMF(esi + 0x58C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x58C))) goto loc_0003D3BA; /* jbe: below or equal (unsigned <=) */

loc_0003D3AE: ;
    edx = MEM32(esi + 0x58C);
    MEM32(ecx + 0x26C) = edx;

loc_0003D3BA: ;
    eax = MEM32(esi + 0x3E0);
    SET_LO8(ecx, MEM8(eax + 0x24B));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003D409; /* jne: not equal / not zero */

loc_0003D3CC: ;
    edi = MEM32(esi + 4);
    if (CMP_EQ(MEM8(edi + 0x8C5), 1)) goto loc_0003D3EE; /* je: equal / zero */

loc_0003D3D8: ;
    if (CMP_EQ(MEM8(edi + 0x8C4), 1)) goto loc_0003D3EE; /* je: equal / zero */

loc_0003D3E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F9010(); /* call 0x002F9010 */

loc_0003D3E7: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0003D409; /* je: equal / zero */

loc_0003D3EE: ;
    xmm0 = MEMF(0x649A14); /* movss */
    MEMF(edi + 0x26C) = xmm0; /* movss */
    eax = MEM32(esi + 4);
    MEMF(eax + 0x270) = xmm4; /* movss */

loc_0003D409: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x8B8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = 0x403;
    if (TEST_NZ(ecx, ecx)) goto loc_0003D67C; /* jne: not equal / not zero */

loc_0003D41F: ;
    if (TEST_Z(MEM8(esi + 0x420), 0x10)) goto loc_0003D441; /* je: equal / zero */

loc_0003D428: ;
    if (TEST_Z(MEM8(esi + 0x390), 1)) goto loc_0003D441; /* je: equal / zero */

loc_0003D431: ;
    xmm0 = MEMF(0x649248); /* movss */
    MEMF(eax + 0x26C) = xmm0; /* movss */

loc_0003D441: ;
    if (TEST_Z(MEM32(esi + 0xC0), edi)) goto loc_0003D67C; /* je: equal / zero */

loc_0003D44D: ;
    if (TEST_Z(MEM8(esi + 0x38C), 4)) goto loc_0003D47B; /* je: equal / zero */

loc_0003D456: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = eax + eax * 2;
    MEM8(esi + 0x730) = 1;
    MEM32(esi + 0x734) = ecx;
    MEMF(esi + 0x72C) = xmm4; /* movss */
    goto loc_0003D67C;

loc_0003D47B: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x27C); /* movss */
    edx = MEM32(esi + 0x390);
    edx = edx & 4;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x280); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((edx != 0)) goto loc_0003D4D5; /* jne: not equal / not zero */

loc_0003D4A5: ;
    SET_LO8(eax, MEM8(esi + 0x730));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003D4D5; /* jne: not equal / not zero */

loc_0003D4AF: ;
    SET_LO8(eax, MEM8(esi + 0x738));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003D67C; /* je: equal / zero */

loc_0003D4BD: ;
    PUSH32(esp, 0); sub_0003DF80(); /* call 0x0003DF80 */

loc_0003D4C2: ;
    MEM8(esi + 0x738) = 0;
    MEM8(esi + 0x730) = 0;
    goto loc_0003D67C;

loc_0003D4D5: ;
    SET_LO8(eax, MEM8(esi + 0x730));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = 0xF;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003D505; /* je: equal / zero */

loc_0003D4E4: ;
    if (TEST_Z(edx, edx)) goto loc_0003D505; /* je: equal / zero */

loc_0003D4E8: ;
    SET_LO8(eax, LO8(eax) + MEM8(0x7FA208));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esi + 0x730) = LO8(eax);
    if (CMP_BE(LO8(eax), LO8(ebx))) goto loc_0003D4FC; /* jbe: below or equal (unsigned <=) */

loc_0003D4F8: ;
    eax = ebx;
    goto loc_0003D4FF;

loc_0003D4FC: ;
    eax = ZX8(LO8(eax));

loc_0003D4FF: ;
    MEM8(esi + 0x730) = LO8(eax);

loc_0003D505: ;
    (void)0; /* cmp MEM8(esi + 0x730), LO8(ebx) - flags set for next jcc */
    eax = esp + 0x10;
    if (CMP_NE(MEM8(esi + 0x730), LO8(ebx))) goto loc_0003D59A; /* jne: not equal / not zero */

loc_0003D515: ;
    MEM8(esi + 0x738) = 1;
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003D52C: ;
    edx = MEM32(esi + 0x650);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3E0);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = esi + 0x72C;
    ecx = esp + 0x20;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_0003D574: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x10;
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003D588: ;
    if (TEST_NZ(MEM8(esi + 0x390), 4)) goto loc_0003D606; /* jne: not equal / not zero */

loc_0003D591: ;
    MEM8(esi + 0x730) = 0;
    goto loc_0003D606;

loc_0003D59A: ;
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003D5AA: ;
    ecx = MEM32(esi + 0x650);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3E0);
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x72C;
    ecx = esp + 0x20;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_0003D5F2: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(esp + 0x20); /* movss */
    esp = esp + 0x10;
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_0003D606: ;
    if (CMP_AE(MEM8(esi + 0x730), LO8(ebx))) goto loc_0003D679; /* jae: above or equal (unsigned >=) */

loc_0003D60E: ;
    if (TEST_NZ(MEM8(esi + 0x390), 4)) goto loc_0003D679; /* jne: not equal / not zero */

loc_0003D617: ;
    SET_LO8(eax, MEM8(esi + 0x2D0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003D672; /* jne: not equal / not zero */

loc_0003D621: ;
    ecx = MEM32(esi + 0x734);
    edx = MEM32(0x7FA208);
    ecx = ecx - edx;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x734) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_0003D672; /* jle: less or equal (signed <=) */

loc_0003D63B: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x5C);
    eax = esp + 0x14;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003D64E: ;
    edx = MEM32(esi + 0x3E0);
    fp_push(MEMF(edx + 0x114)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fsubr dword ptr [esp + 0x14] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648CE0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_0003D679; /* jb: below (unsigned <) */

loc_0003D672: ;
    MEM8(esi + 0x730) = 0;

loc_0003D679: ;
    xmm4 = 0.0f; /* xorps self = zero */

loc_0003D67C: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003D693: ;
    SET_LO8(ebx, MEM8(0x7FA204));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm6 = MEMF(0x648E18); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0003D73D; /* je: equal / zero */

loc_0003D6B9: ;
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003D6CD: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    xmm0 = MEMF(0x648E6C); /* movss */
    eax = eax + eax * 2;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(ecx + 0x96));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 * MEMF(esi + 0x670); /* mulss */
    xmm1 = (float)(int32_t)MEM32(0x7FA208); /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm5 = xmm0; /* movaps */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003D729; /* jne: not equal / not zero */

loc_0003D70F: ;
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm5; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003D71E: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0x60) = xmm0; /* movss */

loc_0003D729: ;
    xmm5 = xmm5 * xmm6; /* mulss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    goto loc_0003D761;

loc_0003D73D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0003D742: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    if (TEST_NZ(LO8(eax), 1)) goto loc_0003D759; /* jne: not equal / not zero */

loc_0003D756: ;
    xmm0 = xmm5; /* movaps */

loc_0003D759: ;
    MEMF(esi + 0x670) = xmm0; /* movss */

loc_0003D761: ;
    ecx = MEM32(esi + 4);
    if (CMP_NE(MEM8(ecx + 0x8C4), 1)) goto loc_0003D791; /* jne: not equal / not zero */

loc_0003D76D: ;
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003D781: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0003D791: ;
    if (CMP_NE(MEM8(esi), 0)) goto loc_0003D808; /* jne: not equal / not zero */

loc_0003D796: ;
    if (TEST_NZ(MEM32(esi + 0xC0), edi)) goto loc_0003D808; /* jne: not equal / not zero */

loc_0003D79E: ;
    eax = MEM32(ecx + 0x8B8);
    if (TEST_Z(eax, eax)) goto loc_0003D808; /* je: equal / zero */

loc_0003D7A8: ;
    xmm0 = MEMF(ecx + 0x26C); /* movss */
    MEMF(ecx + 0x264) = xmm0; /* movss */
    MEMF(ecx + 0x24C) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x270); /* movss */
    MEMF(ecx + 0x268) = xmm0; /* movss */
    MEMF(ecx + 0x250) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(ecx + 0x25C) = xmm4; /* movss */
    MEMF(ecx + 0x254) = xmm4; /* movss */
    MEMF(ecx + 0x260) = xmm4; /* movss */
    MEMF(ecx + 0x258) = xmm4; /* movss */
    MEMF(ecx + 0x29C) = xmm0; /* movss */

loc_0003D808: ;
    if (CMP_EQ(MEM16(esi + 0x684), 0)) goto loc_0003D825; /* je: equal / zero */

loc_0003D812: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(0x762DA0); /* movss */
    MEMF(ecx + 0x26C) = xmm0; /* movss */

loc_0003D825: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 0x8B8);
    if (TEST_Z(eax, eax)) goto loc_0003D8B6; /* je: equal / zero */

loc_0003D836: ;
    (void)0; /* test MEM32(esi + 0x118), 0x200000 - flags set for next jcc */
    MEMF(esi + 0x2C0) = xmm4; /* movss */
    if (TEST_Z(MEM32(esi + 0x118), 0x200000)) goto loc_0003DAF9; /* je: equal / zero */

loc_0003D84E: ;
    if (TEST_Z(MEM8(esi + 0xC0), 0x40)) goto loc_0003D871; /* je: equal / zero */

loc_0003D857: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esi + 0x74C) = xmm5; /* movss */
    MEMF(esi + 0x73C) = xmm5; /* movss */
    goto loc_0003D891;

loc_0003D871: ;
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(esi + 0x74C) = xmm0; /* movss */
    MEMF(esi + 0x73C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */

loc_0003D891: ;
    MEMF(esi + 0x750) = xmm0; /* movss */
    MEMF(esi + 0x740) = xmm0; /* movss */
    MEMF(esi + 0x75C) = xmm4; /* movss */
    MEMF(esi + 0x760) = xmm4; /* movss */
    goto loc_0003DAF9;

loc_0003D8B6: ;
    (void)0; /* cmp MEM8(esi), 0 - flags set for next jcc */
    xmm7 = MEMF(0x648CDC); /* movss */
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0003D8E0; /* je: equal / zero */

loc_0003D8C3: ;
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(ecx + 0x27C) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    goto loc_0003DA46;

loc_0003D8E0: ;
    xmm0 = MEMF(ecx + 0x29C); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0003DA2E; /* jp: parity */

loc_0003D8F5: ;
    eax = MEM32(esi + 0xC0);
    if (TEST_NZ(HI8(eax), 1)) goto loc_0003DA2E; /* jne: not equal / not zero */

loc_0003D904: ;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_0003D915; /* jns: not sign (positive) */

loc_0003D908: ;
    if (TEST_NZ(MEM8(esi + 0x390), 1)) goto loc_0003DA2E; /* jne: not equal / not zero */

loc_0003D915: ;
    SET_LO8(edx, MEM8(0x7819D5));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0003D97F; /* jne: not equal / not zero */

loc_0003D91F: ;
    if (TEST_NZ(MEM32(esi + 0x118), 0x200000)) goto loc_0003D97F; /* jne: not equal / not zero */

loc_0003D92B: ;
    edx = MEM32(esi + 0x3E0);
    SET_LO8(eax, MEM8(edx + 0x20A));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003D962; /* jne: not equal / not zero */

loc_0003D93B: ;
    SET_LO8(eax, MEM8(esi + 0x738));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003D962; /* jne: not equal / not zero */

loc_0003D945: ;
    SET_LO8(eax, MEM8(esi + 0x90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003D958; /* je: equal / zero */

loc_0003D94F: ;
    if (TEST_NZ(MEM8(esi + 0x84), 0x40)) goto loc_0003D962; /* jne: not equal / not zero */

loc_0003D958: ;
    xmm0 = MEMF(0x648D18); /* movss */
    goto loc_0003D96A;

loc_0003D962: ;
    xmm0 = MEMF(0x6490F4); /* movss */

loc_0003D96A: ;
    MEMF(ecx + 0x27C) = xmm0; /* movss */
    MEMF(ecx + 0x280) = xmm7; /* movss */
    goto loc_0003DA4E;

loc_0003D97F: ;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0003D99D; /* je: equal / zero */

loc_0003D983: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esi + 0x74C) = xmm5; /* movss */
    MEMF(esi + 0x750) = xmm0; /* movss */
    goto loc_0003D9B5;

loc_0003D99D: ;
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(esi + 0x74C) = xmm0; /* movss */
    MEMF(esi + 0x750) = xmm7; /* movss */

loc_0003D9B5: ;
    eax = MEM32(esi + 0x74C);
    xmm0 = MEMF(esi + 0x650); /* movss */
    PUSH32(esp, 0x40000000);
    edi = esi + 0x73C;
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x75C;
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0003D9E1: ;
    eax = MEM32(esi + 0x750);
    xmm0 = MEMF(esi + 0x650); /* movss */
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    edx = esi + 0x740;
    ecx = esi + 0x760;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0003DA0B: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(edi);
    xmm0 = MEMF(edx); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    esp = esp + 0x18;
    eax = eax + 0x248;
    MEM32(eax + 0x34) = ecx;
    MEMF(eax + 0x38) = xmm0; /* movss */
    goto loc_0003DA4E;

loc_0003DA2E: ;
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(ecx + 0x27C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */

loc_0003DA46: ;
    MEMF(ecx + 0x280) = xmm0; /* movss */

loc_0003DA4E: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0003DADF; /* je: equal / zero */

loc_0003DA56: ;
    edx = MEM32(esi + 4);
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(edx + 0x26C) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esi + 0x3F0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003DAB1; /* jne: not equal / not zero */

loc_0003DA73: ;
    eax = MEM32(esi + 0x3E0);
    SET_LO8(ecx, MEM8(eax + 0x20A));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003DAB1; /* jne: not equal / not zero */

loc_0003DA83: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x648D10); /* movss */
    eax = eax + 0x248;
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x38) = xmm5; /* movss */
    eax = MEM32(esi + 4);
    eax = eax + 0x248;
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x40) = xmm5; /* movss */
    goto loc_0003DAF9;

loc_0003DAB1: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x648D18); /* movss */
    eax = eax + 0x248;
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEMF(eax + 0x38) = xmm7; /* movss */
    eax = MEM32(esi + 4);
    eax = eax + 0x248;
    MEMF(eax + 0x3C) = xmm0; /* movss */
    MEMF(eax + 0x40) = xmm7; /* movss */
    goto loc_0003DAF9;

loc_0003DADF: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x649030); /* movss */
    eax = eax + 0x248;
    MEMF(eax + 0x3C) = xmm7; /* movss */
    MEMF(eax + 0x40) = xmm0; /* movss */

loc_0003DAF9: ;
    (void)0; /* cmp MEM8(esi), 0 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0003DB0D; /* je: equal / zero */

loc_0003DB00: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x264); /* movss */
    goto loc_0003DB18;

loc_0003DB0D: ;
    edx = MEM32(esi + 4);
    xmm0 = MEMF(edx + 0x24C); /* movss */

loc_0003DB18: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(esp + 8) = xmm0; /* movss */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x330) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x338) = (float)fp_top(); fp_popp(); /* fstp */

loc_0003DB4A: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0003DB50
 * Original: 0x0003DB50 - 0x0003DB72 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DB50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003DB50: ;
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) { sub_0003DB72(); return; } /* je: equal / zero */

loc_0003DB56: ;
    edx = MEM32(0x84A5F8);
    MEM16(ecx + 0x2B8) = LO16(eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    MEM32(ecx + 0x2BC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0003DB80
 * Original: 0x0003DB80 - 0x0003DF73 (1011 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DB80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003DB80: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp MEM16(esi + 0x684), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    xmm0 = MEMF(edi + 0x27C); /* movss */
    xmm1 = MEMF(edi + 0x280); /* movss */
    if (CMP_NE(MEM16(esi + 0x684), 0)) goto loc_0003DF6D; /* jne: not equal / not zero */

loc_0003DBA8: ;
    SET_LO8(eax, MEM8(edi + 0x8C5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = MEMF(0x648E14); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003DBCC; /* jne: not equal / not zero */

loc_0003DBBA: ;
    SET_LO8(eax, MEM8(edi + 0x8C7));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm3 = MEMF(0x648D14); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003DBCF; /* je: equal / zero */

loc_0003DBCC: ;
    xmm3 = xmm2; /* movaps */

loc_0003DBCF: ;
    ecx = MEM32(esi + 0x3E0);
    MEMF(esi + 0x50C) = xmm3; /* movss */
    PUSH32(esp, ebx);
    eax = ecx + 0x78;
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    MEM32(esp + 0x1C) = ebp;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x20) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, MEM8(edi + 0x8C7));
    SET_LO8(edx, 1);
    (void)0; /* cmp LO8(eax), LO8(edx) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm3; /* movss */
    if (CMP_NE(LO8(eax), LO8(edx))) goto loc_0003DC29; /* jne: not equal / not zero */

loc_0003DC08: ;
    eax = MEM32(edi + 0x8D0);
    if (TEST_Z(eax, eax)) goto loc_0003DC29; /* je: equal / zero */

loc_0003DC12: ;
    eax = eax + 0x78;
    ebp = MEM32(eax);
    MEM32(esp + 0x1C) = ebp;
    ebx = MEM32(eax + 4);
    MEM32(esp + 0x20) = ebx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = eax;

loc_0003DC29: ;
    if (CMP_NE(MEM8(edi + 0x8CD), LO8(edx))) goto loc_0003DC62; /* jne: not equal / not zero */

loc_0003DC31: ;
    eax = MEM32(edi + 0x8D4);
    if (TEST_Z(eax, eax)) goto loc_0003DC62; /* je: equal / zero */

loc_0003DC3B: ;
    edx = eax + 0x78;
    ebp = MEM32(edx);
    MEM32(esp + 0x1C) = ebp;
    ebx = MEM32(edx + 4);
    MEM32(esp + 0x20) = ebx;
    edx = MEM32(edx + 8);
    MEM32(esp + 0x24) = edx;
    xmm4 = MEMF(eax + 0x294); /* movss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    SET_LO8(edx, 1);

loc_0003DC62: ;
    if (CMP_NE(MEM8(edi + 0x8CE), LO8(edx))) goto loc_0003DC9B; /* jne: not equal / not zero */

loc_0003DC6A: ;
    eax = MEM32(edi + 0x8DC);
    if (TEST_Z(eax, eax)) goto loc_0003DC9B; /* je: equal / zero */

loc_0003DC74: ;
    edx = eax + 0x78;
    ebp = MEM32(edx);
    MEM32(esp + 0x1C) = ebp;
    ebx = MEM32(edx + 4);
    MEM32(esp + 0x20) = ebx;
    edx = MEM32(edx + 8);
    MEM32(esp + 0x24) = edx;
    xmm4 = MEMF(eax + 0x294); /* movss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    SET_LO8(edx, 1);

loc_0003DC9B: ;
    if (CMP_NE(MEM8(edi + 0x8C6), LO8(edx))) goto loc_0003DCEA; /* jne: not equal / not zero */

loc_0003DCA3: ;
    eax = MEM32(edi + 0x8D8);
    if (TEST_Z(eax, eax)) goto loc_0003DCEA; /* je: equal / zero */

loc_0003DCAD: ;
    edx = eax + 0x78;
    ebp = MEM32(edx);
    MEM32(esp + 0x1C) = ebp;
    ebx = MEM32(edx + 4);
    MEM32(esp + 0x20) = ebx;
    edx = MEM32(edx + 8);
    MEM32(esp + 0x24) = edx;
    fp_push(MEMF(eax + 0x294)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648F08)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0003DCEA; /* jbe: below or equal (unsigned <=) */

loc_0003DCDC: ;
    xmm4 = MEMF(eax + 0x294); /* movss */
    MEMF(esp + 0x20) = xmm4; /* movss */

loc_0003DCEA: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F9010(); /* call 0x002F9010 */

loc_0003DCF0: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0003DD1E; /* je: equal / zero */

loc_0003DCF7: ;
    ecx = eax + 0x78;
    ebp = MEM32(ecx);
    MEM32(esp + 0x1C) = ebp;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = ecx;
    xmm7 = MEMF(eax + 0x294); /* movss */
    MEMF(esp + 0x20) = xmm7; /* movss */
    goto loc_0003DD24;

loc_0003DD1E: ;
    xmm7 = MEMF(esp + 0x20); /* movss */

loc_0003DD24: ;
    eax = MEM32(edi + 0x8B8);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = esi + 0x508;
    if (TEST_Z(eax, eax)) goto loc_0003DD45; /* je: equal / zero */

loc_0003DD34: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx) = xmm3; /* movss */
    MEMF(esi + 0x510) = xmm0; /* movss */
    goto loc_0003DD78;

loc_0003DD45: ;
    edx = MEM32(esp + 0x10);
    esp = esp - 8;
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x650); /* movss */
    PUSH32(esp, edx);
    ecx = esi + 0x510;
    edx = ebx;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0003DD75: ;
    esp = esp + 0xC;

loc_0003DD78: ;
    (void)0; /* cmp MEM16(esi + 0x2B8), 0 - flags set for next jcc */
    edi = esi + 0x2DC;
    if (CMP_EQ(MEM16(esi + 0x2B8), 0)) goto loc_0003DE46; /* je: equal / zero */

loc_0003DD8C: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x8B8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esi + 0x2BC);
    xmm1 = MEMF(eax + 0x78); /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x1C); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    if (TEST_Z(ecx, ecx)) goto loc_0003DDEE; /* je: equal / zero */

loc_0003DDB6: ;
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x2E0) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x80); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x2E4) = xmm1; /* movss */
    goto loc_0003DF17;

loc_0003DDEE: ;
    xmm1 = xmm1 - MEMF(edi); /* subss */
    xmm1 = xmm1 * MEMF(ebx); /* mulss */
    xmm1 = xmm1 + MEMF(edi); /* addss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x2E0) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x80); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x24); /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 - MEMF(esi + 0x2E4); /* subss */
    xmm1 = xmm1 * MEMF(ebx); /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x2E4); /* addss */
    MEMF(esi + 0x2E4) = xmm1; /* movss */
    goto loc_0003DF17;

loc_0003DE46: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 0x8B8);
    if (TEST_Z(eax, eax)) goto loc_0003DE6A; /* je: equal / zero */

loc_0003DE53: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = edi;
    MEM32(edx) = ebp;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    goto loc_0003DF17;

loc_0003DE6A: ;
    edx = esp + 0x1C;
    eax = esp + 0x28;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(ebx); /* movss */
    ecx = esp + 0x28;
    edx = ecx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ecx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_0003DF17: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + 0x2E4);
    MEM32(esi + 0x2F4) = ecx;
    MEM32(esi + 0x2FC) = edx;
    PUSH32(esp, 0); sub_0003E0C0(); /* call 0x0003E0C0 */

loc_0003DF30: ;
    eax = esi;
    PUSH32(esp, 0); sub_0003E1A0(); /* call 0x0003E1A0 */

loc_0003DF37: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003DF4E: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x328); /* subss */
    eax = esi + 0x3BC;
    MEMF(eax) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003DF6B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0003DF6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0003DF80
 * Original: 0x0003DF80 - 0x0003DFBD (61 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DF80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0003DF80: ;
    eax = MEM32(esi + 0xC0);
    eax = eax & 0x80;
    if ((eax == 0)) { sub_0003DFBD(); return; } /* je: equal / zero */

loc_0003DF8D: ;
    if (TEST_Z(MEM8(esi + 0x390), 1)) { sub_0003DFBD(); return; } /* je: equal / zero */

loc_0003DF96: ;
    xmm0 = MEMF(0x648EC8); /* movss */
    eax = MEM32(esi + 4);
    MEMF(eax + 0x26C) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(0x6490B8); /* movss */
    MEMF(ecx + 0x270) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0003E0C0
 * Original: 0x0003E0C0 - 0x0003E197 (215 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E0C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;

loc_0003E0C0: ;
    PUSH32(esp, ecx);
    if (CMP_NE(MEM8(esi), 0)) goto loc_0003E195; /* jne: not equal / not zero */

loc_0003E0CA: ;
    eax = MEM32(esi + 0x5D0);
    if (TEST_NZ(eax, eax)) goto loc_0003E195; /* jne: not equal / not zero */

loc_0003E0D8: ;
    eax = MEM32(esi + 0xC0);
    if (CMP_EQ(eax, 0x80)) goto loc_0003E195; /* je: equal / zero */

loc_0003E0E9: ;
    if (CMP_EQ(eax, 1)) goto loc_0003E195; /* je: equal / zero */

loc_0003E0F2: ;
    if (CMP_EQ(eax, 2)) goto loc_0003E195; /* je: equal / zero */

loc_0003E0FB: ;
    if (CMP_EQ(eax, 0x20)) goto loc_0003E195; /* je: equal / zero */

loc_0003E104: ;
    edx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(edx + 0x8C8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003E195; /* jne: not equal / not zero */

loc_0003E115: ;
    SET_LO8(eax, MEM8(edx + 0x8CD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003E195; /* jne: not equal / not zero */

loc_0003E11F: ;
    xmm0 = MEMF(edx + 0x264); /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_0003E13D; /* jbe: below or equal (unsigned <=) */

loc_0003E12F: ;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    goto loc_0003E142;

loc_0003E13D: ;
    MEMF(esp) = xmm0; /* movss */

loc_0003E142: ;
    eax = MEM32(esp);
    ecx = MEM32(edx + 0x268);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0003E152: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003E16A: ;
    xmm4 = xmm4 - MEMF(esp); /* subss */
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esi + 0x424); /* subss */
    MEMF(edx + 0x34) = xmm1; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = xmm0 - MEMF(esi + 0x424); /* subss */
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048950(); /* call 0x00048950 */

loc_0003E195: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003E1A0
 * Original: 0x0003E1A0 - 0x0003E24E (174 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E1A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0003E1A0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(MEM8(esi), 0)) goto loc_0003E249; /* jne: not equal / not zero */

loc_0003E1AF: ;
    eax = MEM32(esi + 0x5D0);
    if (TEST_NZ(eax, eax)) goto loc_0003E249; /* jne: not equal / not zero */

loc_0003E1BD: ;
    eax = MEM32(esi + 0xC0);
    if (CMP_EQ(eax, 0x80)) goto loc_0003E249; /* je: equal / zero */

loc_0003E1CA: ;
    if (CMP_EQ(eax, 8)) goto loc_0003E249; /* je: equal / zero */

loc_0003E1CF: ;
    if (CMP_EQ(eax, 1)) goto loc_0003E249; /* je: equal / zero */

loc_0003E1D4: ;
    if (CMP_EQ(eax, 0x20)) goto loc_0003E249; /* je: equal / zero */

loc_0003E1D9: ;
    xmm0 = MEMF(esi + 0x2F4); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x330); /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x2FC); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x338); /* subss */
    edx = esp + 8;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0CB0(); /* call 0x002B0CB0 */

loc_0003E217: ;
    eax = MEM32(esi + 4);
    MEMF(eax + 0x5C) = xmm0; /* movss */
    esi = MEM32(esi + 4);
    SET_LO8(eax, MEM8(esi + 0x96));
    esi = esi + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003E249; /* jne: not equal / not zero */

loc_0003E22F: ;
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003E23E: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x5C) = xmm0; /* movss */

loc_0003E249: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0003E250
 * Original: 0x0003E250 - 0x0003E278 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E250(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003E250: ;
    SET_LO8(eax, MEM8(edx + 0xC0));
    ecx = 0; /* xor self */
    if (TEST_NZ(LO8(eax), 1)) goto loc_0003E270; /* jne: not equal / not zero */

loc_0003E25C: ;
    eax = MEM32(edx + 0xC0);
    PUSH32(esp, esi);

loc_0003E263: ;
    ecx++;
    esi = 1;
    esi = esi << LO8(ecx);
    if (TEST_Z(eax, esi)) goto loc_0003E263; /* je: equal / zero */

loc_0003E26F: ;
    POP32(esp, esi);

loc_0003E270: ;
    MEM16(edx + 0x94) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003E280
 * Original: 0x0003E280 - 0x0003E308 (136 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E280(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0003E280: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(MEM32(esi + 0xC0), 0x40000)) { sub_0003E308(); return; } /* je: equal / zero */

loc_0003E290: ;
    eax = MEM32(esi + 0x118);
    eax = eax & 0xFFFFFFB0u;
    eax = eax | 0x2680;
    MEM32(esi + 0x118) = eax;
    eax = esi;
    PUSH32(esp, 0); sub_0003E1A0(); /* call 0x0003E1A0 */

loc_0003E2AB: ;
    PUSH32(esp, 0); sub_0003E0C0(); /* call 0x0003E0C0 */

loc_0003E2B0: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003E2C7: ;
    xmm0 = MEMF(esp + 4); /* movss */
    edx = MEM32(esi + 0x3E4);
    MEMF(esi + 0x3BC) = xmm0; /* movss */
    eax = MEM32(edx + 0x2B0);
    if (TEST_Z(eax, eax)) goto loc_0003E2EE; /* je: equal / zero */

loc_0003E2E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00041220(); /* call 0x00041220 */

loc_0003E2EB: ;
    esp = esp + 4;

loc_0003E2EE: ;
    eax = MEM32(0x8472A0);
    if (TEST_NZ(eax, eax)) goto loc_0003E300; /* jne: not equal / not zero */

loc_0003E2F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00046490(); /* call 0x00046490 */

loc_0003E2FD: ;
    esp = esp + 4;

loc_0003E300: ;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003E310
 * Original: 0x0003E310 - 0x0003E343 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E310(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0003E310: ;
    ecx = MEM32(eax + 0x3E0);
    if (CMP_NE(MEM8(ecx + 0x1B5), 1)) { sub_0003E343(); return; } /* jne: not equal / not zero */

loc_0003E31F: ;
    eax = ecx;
    fp_push(MEMF(eax + 0x7C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0003E331: ;
    if (CMP_L(eax, 0x64)) { sub_0003E343(); return; } /* jl: less (signed <) */

loc_0003E336: ;
    if (CMP_LE(eax, 0x12C)) { sub_0003E343(); return; } /* jle: less or equal (signed <=) */

loc_0003E33D: ;
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0003E350
 * Original: 0x0003E350 - 0x0003E3BE (110 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E350(void)
{
    float xmm0;

loc_0003E350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = eax;
    edi = 1;
    eax = esi;
    PUSH32(esp, 0); sub_0003D2D0(); /* call 0x0003D2D0 */

loc_0003E363: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    ecx = MEM32(esi + 0x3E4);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    MEM32(ecx + 0x2B8) = eax;
    edx = MEM32(esi + 4);
    ecx = MEM32(0x84A5F8);
    MEMF(esi + 0x508) = xmm0; /* movss */
    xmm0 = MEMF(0x648E84); /* movss */
    MEM32(esi + 0x5D0) = eax;
    ebx = ebx + ecx;
    MEM32(esi + 0x3E0) = ebx;
    MEM8(edx + 0x1E4) = LO8(eax);
    esi = MEM32(esi + 4);
    POP32(esp, edi);
    MEMF(esi + 0x350) = xmm0; /* movss */
    MEMF(esi + 0x354) = xmm0; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003E3C0
 * Original: 0x0003E3C0 - 0x0003E407 (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E3C0(void)
{
    float xmm0;

loc_0003E3C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_0003E0C0(); /* call 0x0003E0C0 */

loc_0003E3C9: ;
    eax = esi;
    PUSH32(esp, 0); sub_0003E1A0(); /* call 0x0003E1A0 */

loc_0003E3D0: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003E3E7: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x328); /* subss */
    eax = esi + 0x3BC;
    MEMF(eax) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0003E404: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003E410
 * Original: 0x0003E410 - 0x0003E451 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E410(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003E410: ;
    SET_LO8(eax, MEM8(0x762E40));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003E420; /* je: equal / zero */

loc_0003E419: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(0x762E40) = LO8(eax);

loc_0003E420: ;
    SET_LO8(eax, MEM8(0x762E41));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003E430; /* je: equal / zero */

loc_0003E429: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(0x762E41) = LO8(eax);

loc_0003E430: ;
    SET_LO8(eax, MEM8(0x762E42));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003E440; /* je: equal / zero */

loc_0003E439: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(0x762E42) = LO8(eax);

loc_0003E440: ;
    SET_LO8(eax, MEM8(0x762E43));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003E450; /* je: equal / zero */

loc_0003E449: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(0x762E43) = LO8(eax);

loc_0003E450: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003E460
 * Original: 0x0003E460 - 0x0003E49F (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E460(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003E460: ;
    eax = ZX8(MEM8(eax + 0x2A8));
    edx = ZX8(MEM8(eax + 0x762E40));
    esp = esp - 8;
    if (CMP_GE(edx, ecx)) goto loc_0003E47B; /* jge: greater or equal (signed >=) */

loc_0003E475: ;
    MEM8(eax + 0x762E40) = LO8(ecx);

loc_0003E47B: ;
    PUSH32(esp, 0x61);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0x4D;
    MEM32(esp + 0x14) = 0x4C;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0003E49B: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0003E4A0
 * Original: 0x0003E4A0 - 0x0003E51B (123 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E4A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003E4A0: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(esi + 0x3E0);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0003E4F1; /* jne: not equal / not zero */

loc_0003E4B0: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0003E4F1; /* je: equal / zero */

loc_0003E4BA: ;
    if (CMP_NE(MEM8(eax + 0x1B5), 1)) goto loc_0003E4F1; /* jne: not equal / not zero */

loc_0003E4C3: ;
    SET_LO8(eax, MEM8(ecx + 0x2D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003E4F1; /* jne: not equal / not zero */

loc_0003E4CA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80);
    ecx = 0xD;
    edx = esi;
    PUSH32(esp, 0); sub_0003D200(); /* call 0x0003D200 */

loc_0003E4DF: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0003E51A; /* je: equal / zero */

loc_0003E4E6: ;
    MEM32(esi + 0x420) = MEM32(esi + 0x420) | 0x1000;
    esp += 4; return; /* ret */

loc_0003E4F1: ;
    SET_LO8(eax, MEM8(esi + 0xC0));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_0003E51A; /* jns: not sign (positive) */

loc_0003E4FB: ;
    PUSH32(esp, edi);
    edi = 0xD;
    eax = esi;
    PUSH32(esp, 0); sub_0003D2D0(); /* call 0x0003D2D0 */

loc_0003E508: ;
    eax = MEM32(esi + 0x420);
    eax = eax & 0xFFFFEFFFu;
    POP32(esp, edi);
    MEM32(esi + 0x420) = eax;

loc_0003E51A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003E520
 * Original: 0x0003E520 - 0x0003E652 (306 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E520(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0003E520: ;
    PUSH32(esp, ecx);
    if (CMP_NE(MEM32(esi + 0x2AC), 0x2A)) { sub_0003E652(); return; } /* jne: not equal / not zero */

loc_0003E52E: ;
    eax = MEM32(esi + 0x3E0);
    xmm0 = MEMF(eax + 0x114); /* movss */
    (void)0; /* cmp MEM32(esi + 0xC0), 0x40000 - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_EQ(MEM32(esi + 0xC0), 0x40000)) goto loc_0003E562; /* je: equal / zero */

loc_0003E54D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0003E558: ;
    esp = esp + 8;
    MEM8(esi + 0x674) = 1;

loc_0003E562: ;
    fp_push(MEMF(esp)); /* fld float */
    MEM8(0x762E40) = 3;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(0x76EDFC) = 1;
    fp_push(MEMF(esp)); /* fld float */
    MEM32(0x76EE00) = 0;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = MEM32(esi + 0x3E0);
    xmm2 = MEMF(0x648F64); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    PUSH32(esp, 0x76EDFC);
    /* FPU: fsin  */
    PUSH32(esp, 7);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = esi;
    /* fld st(1) */
    /* FPU: fsin  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(0x76EE10) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esi + 0x3E0);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    xmm1 = MEMF(edx + 0x7C); /* movss */
    /* FPU: fcos  */
    xmm1 = xmm1 + MEMF(0x649548); /* addss */
    MEMF(0x76EE14) = xmm1; /* movss */
    eax = MEM32(esi + 0x3E0);
    xmm1 = 0.0f; /* xorps self = zero */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(0x76EE1C) = xmm1; /* movss */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    MEMF(0x76EE20) = xmm2; /* movss */
    /* FPU: fcos  */
    MEMF(0x76EE24) = xmm0; /* movss */
    MEMF(0x76EE04) = xmm1; /* movss */
    MEM8(0x76F0C4) = 0;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(0x76EE18) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_0003E64D: ;
    esp = esp + 8;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0003E680
 * Original: 0x0003E680 - 0x0003E78F (271 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x3E0);
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0xA0);
    (void)0; /* cmp MEM8(0x7FCB45), 0x42 - flags set for next jcc */
    ebp = 1;
    if (CMP_NE(MEM8(0x7FCB45), 0x42)) goto loc_0003E6DE; /* jne: not equal / not zero */

loc_0003E6A3: ;
    if (CMP_NE(ecx, 0x1A)) goto loc_0003E6DE; /* jne: not equal / not zero */

loc_0003E6A8: ;
    ebx = ebp;

loc_0003E6AA: ;
    eax = ebp;

loc_0003E6AC: ;
    edx = MEM32(esi + 0x664);
    edx--;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x664) = edx;
    if (TEST_Z(eax, eax)) goto loc_0003E746; /* je: equal / zero */

loc_0003E6C1: ;
    if (TEST_NZ(edx, edx)) goto loc_0003E78B; /* jne: not equal / not zero */

loc_0003E6C9: ;
    if (TEST_Z(ebx, ebx)) goto loc_0003E6E9; /* je: equal / zero */

loc_0003E6CD: ;
    ecx = (int32_t)MEMF(edi + 0x114); /* cvttss2si */
    PUSH32(esp, 0xFA);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    goto loc_0003E6F7;

loc_0003E6DE: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, 0x1A)) goto loc_0003E6AA; /* je: equal / zero */

loc_0003E6E5: ;
    eax = 0; /* xor self */
    goto loc_0003E6AC;

loc_0003E6E9: ;
    if (CMP_NE(ecx, 0x1A)) goto loc_0003E708; /* jne: not equal / not zero */

loc_0003E6EE: ;
    PUSH32(esp, 0xFA);
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_0003E6F7: ;
    PUSH32(esp, 0x18);
    eax = 0x9000;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_0003E705: ;
    esp = esp + 0x14;

loc_0003E708: ;
    edx = MEM32(esi + 0x420);
    ecx = MEM32(esi + 0x390);
    edx = edx | 2;
    ecx = ecx | ebp;
    MEM32(esi + 0x420) = edx;
    edx = MEM32(esi + 0x3B4);
    MEM32(esi + 0x390) = ecx;
    MEM32(edx + 0x6C) = ebp;
    eax = MEM32(esi + 0x38C);
    POP32(esp, edi);
    eax = eax | ebp;
    MEM32(esi + 0x664) = ebp;
    POP32(esp, ebp);
    MEM32(esi + 0x38C) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0003E746: ;
    SET_LO8(eax, MEM8(esi + 0x420));
    ebx = 2;
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_0003E785; /* je: equal / zero */

loc_0003E755: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebp);
    eax = 0x9000;
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_0003E764: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, ebp);
    eax = 0x9000;
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_0003E773: ;
    eax = MEM32(esi + 0x420);
    esp = esp + 0x18;
    eax = eax & 0xFFFFFFFDu;
    MEM32(esi + 0x420) = eax;

loc_0003E785: ;
    MEM32(esi + 0x664) = ebx;

loc_0003E78B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003E790
 * Original: 0x0003E790 - 0x0003EA7E (750 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E790: ;
    ecx = MEM32(edi + 0x3E4);
    edx = MEM32(ecx + 0x204);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x2AC);
    if (CMP_NE(edx, eax)) { sub_0003EA7E(); return; } /* jne: not equal / not zero */

loc_0003E7AD: ;
    if (CMP_NE(MEM16(0x847258), LO16(eax))) { sub_0003EA7E(); return; } /* jne: not equal / not zero */

loc_0003E7BA: ;
    SET_LO8(ecx, MEM8(0x847269));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0003EA7E(); return; } /* jne: not equal / not zero */

loc_0003E7C8: ;
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0003E7F8; /* jne: not equal / not zero */

loc_0003E7D4: ;
    edx = MEM32(edi + 0x390);
    ecx = MEM32(edi + 0x38C);
    eax = 0xFFFFFFFEu;
    edx = edx & eax;
    ecx = ecx & eax;
    POP32(esp, ebx);
    MEM32(edi + 0x390) = edx;
    MEM32(edi + 0x38C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0003E7F8: ;
    edx = 0; /* xor self */
    (void)0; /* cmp esi, edx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = 0xFFFFFFE1u;
    if (CMP_EQ(esi, edx)) goto loc_0003E8D0; /* je: equal / zero */

loc_0003E808: ;
    if (CMP_EQ(esi, 0x12)) goto loc_0003E840; /* je: equal / zero */

loc_0003E80D: ;
    if (CMP_EQ(esi, 0x10)) goto loc_0003E840; /* je: equal / zero */

loc_0003E812: ;
    if (CMP_EQ(esi, 0xF)) goto loc_0003E845; /* je: equal / zero */

loc_0003E817: ;
    eax = MEM32(edi + 0x3A0);
    (void)0; /* test HI8(eax), HI8(eax) - flags set for next jcc */
    eax = MEM32(edi + 0x38C);
    ecx = 0xFFFFFFFEu;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0003E836; /* jns: not sign (positive) */

loc_0003E82C: ;
    eax = eax | ebx;
    MEM32(edi + 0x38C) = eax;
    goto loc_0003E891;

loc_0003E836: ;
    eax = eax & ecx;
    MEM32(edi + 0x38C) = eax;
    goto loc_0003E891;

loc_0003E840: ;
    if (CMP_NE(esi, 0xF)) goto loc_0003E861; /* jne: not equal / not zero */

loc_0003E845: ;
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x18);
    PUSH32(esp, 3);
    eax = 0x9000;
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_0003E85C: ;
    esp = esp + 0x14;
    edx = 0; /* xor self */

loc_0003E861: ;
    MEM32(edi + 0x390) = MEM32(edi + 0x390) | ebx;
    eax = MEM32(edi + 0x3B4);
    MEM32(eax + 0x6C) = ebx;
    ecx = MEM32(edi + 0x38C);
    eax = MEM32(edi + 0x390);
    ecx = ecx | ebx;
    eax = eax & ebp;
    MEM32(edi + 0x38C) = ecx;
    MEM32(edi + 0x390) = eax;
    ecx = 0xFFFFFFFEu;

loc_0003E891: ;
    if (CMP_EQ(esi, 0xD)) goto loc_0003E8A0; /* je: equal / zero */

loc_0003E896: ;
    if (CMP_EQ(esi, 0x1A)) goto loc_0003E8A0; /* je: equal / zero */

loc_0003E89B: ;
    if (CMP_NE(esi, 0x2A)) goto loc_0003E8AC; /* jne: not equal / not zero */

loc_0003E8A0: ;
    MEM32(edi + 0x38C) = MEM32(edi + 0x38C) & ebp;
    MEM32(edi + 0x390) = MEM32(edi + 0x390) & ebp;

loc_0003E8AC: ;
    if (CMP_NE(esi, 0x29)) goto loc_0003E8FC; /* jne: not equal / not zero */

loc_0003E8B1: ;
    esi = MEM32(edi + 0x390);
    eax = MEM32(edi + 0x3B4);
    esi = esi | ebx;
    MEM32(edi + 0x390) = esi;
    MEM32(eax + 0x6C) = ebx;
    MEM32(edi + 0x38C) = MEM32(edi + 0x38C) | ebx;
    goto loc_0003E8FC;

loc_0003E8D0: ;
    eax = MEM32(edi + 0xC0);
    if (TEST_Z(HI8(eax), 1)) goto loc_0003E8F7; /* je: equal / zero */

loc_0003E8DB: ;
    ecx = MEM32(edi + 0x38C);
    eax = MEM32(edi + 0x390);
    ecx = ecx & ebp;
    eax = eax & ebp;
    MEM32(edi + 0x38C) = ecx;
    MEM32(edi + 0x390) = eax;

loc_0003E8F7: ;
    ecx = 0xFFFFFFFEu;

loc_0003E8FC: ;
    eax = MEM32(edi + 0x3E0);
    if (CMP_NE(MEM8(eax + 0x1B5), LO8(ebx))) goto loc_0003E948; /* jne: not equal / not zero */

loc_0003E90A: ;
    SET_LO8(eax, MEM8(edi + 0xC0));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_0003E948; /* jns: not sign (positive) */

loc_0003E914: ;
    ecx = MEM32(edi + 0x390);
    edx = MEM32(edi + 0x38C);
    esi = MEM32(edi + 0x388);
    ecx = ecx & 0xFFFFFFF9u;
    edx = edx & 0xFFFFFFF8u;
    MEM32(edi + 0x390) = ecx;
    PUSH32(esp, 3);
    ecx = 0; /* xor self */
    MEM32(edi + 0x38C) = edx;
    PUSH32(esp, 0); sub_0004E1F0(); /* call 0x0004E1F0 */

loc_0003E941: ;
    ecx = 0xFFFFFFFEu;
    edx = 0; /* xor self */

loc_0003E948: ;
    if (TEST_Z(MEM32(edi + 0x118), 0x200000)) goto loc_0003E95A; /* je: equal / zero */

loc_0003E954: ;
    MEM32(edi + 0x38C) = MEM32(edi + 0x38C) & ebp;

loc_0003E95A: ;
    SET_LO8(eax, MEM8(0x7655EA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003E96E; /* jne: not equal / not zero */

loc_0003E963: ;
    eax = MEM32(edi + 4);
    if (CMP_NE(MEM8(eax + 0x8C8), LO8(ebx))) goto loc_0003E998; /* jne: not equal / not zero */

loc_0003E96E: ;
    ebx = MEM32(edi + 0x38C);
    esi = MEM32(edi + 0x390);
    eax = 0xFFFFFFE0u;
    ebx = ebx & eax;
    esi = esi & eax;
    eax = MEM32(edi + 0x3B4);
    MEM32(edi + 0x38C) = ebx;
    MEM32(edi + 0x390) = esi;
    MEM32(eax + 0x6C) = edx;

loc_0003E998: ;
    eax = MEM32(edi + 0x3E4);
    SET_LO8(ebx, MEM8(eax + 0xB2));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0003E9B9; /* jne: not equal / not zero */

loc_0003E9A8: ;
    SET_LO8(ebx, MEM8(eax + 0x2DA));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0003E9B9; /* jne: not equal / not zero */

loc_0003E9B2: ;
    SET_LO8(ebx, MEM8(eax + 0x39));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0003E9DE; /* je: equal / zero */

loc_0003E9B9: ;
    esi = MEM32(edi + 0x38C);
    eax = MEM32(edi + 0x390);
    esi = esi & ecx;
    eax = eax & ecx;
    MEM32(edi + 0x390) = eax;
    eax = MEM32(edi + 0x3B4);
    MEM32(edi + 0x38C) = esi;
    MEM32(eax + 0x6C) = edx;

loc_0003E9DE: ;
    eax = MEM32(edi + 0xC0);
    if (TEST_Z(HI8(eax), 1)) goto loc_0003E9F1; /* je: equal / zero */

loc_0003E9E9: ;
    if (CMP_EQ(MEM32(edi + 0x5D0), edx)) goto loc_0003E9FA; /* je: equal / zero */

loc_0003E9F1: ;
    if (CMP_NE(MEM32(edi + 0x5D0), 3)) goto loc_0003EA1F; /* jne: not equal / not zero */

loc_0003E9FA: ;
    esi = MEM32(edi + 0x38C);
    eax = MEM32(edi + 0x390);
    esi = esi & ecx;
    eax = eax & ecx;
    MEM32(edi + 0x390) = eax;
    eax = MEM32(edi + 0x3B4);
    MEM32(edi + 0x38C) = esi;
    MEM32(eax + 0x6C) = edx;

loc_0003EA1F: ;
    if (TEST_Z(MEM8(edi + 0xC0), 0x40)) goto loc_0003EA7A; /* je: equal / zero */

loc_0003EA28: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x6DA));
    if (CMP_EQ(LO16(eax), LO16(edx))) goto loc_0003EA7A; /* je: equal / zero */

loc_0003EA36: ;
    ebx = MEM32(edi + 0x38C);
    esi = MEM32(edi + 0x390);
    ebp = MEM32(0x7FA20C);
    ebx = ebx & ecx;
    esi = esi & ecx;
    ecx = MEM32(edi + 0x3B4);
    eax = eax - ebp;
    MEM16(edi + 0x6DA) = LO16(eax);
    MEM32(edi + 0x38C) = ebx;
    MEM32(edi + 0x390) = esi;
    MEM32(ecx + 0x6C) = edx;
    if (CMP_G(MEM16(edi + 0x6DA), LO16(edx))) goto loc_0003EA7A; /* jg: greater (signed >) */

loc_0003EA73: ;
    MEM16(edi + 0x6DA) = LO16(edx);

loc_0003EA7A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003EAA0
 * Original: 0x0003EAA0 - 0x0003EBFD (349 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003EAA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003EAA0: ;
    esp = esp - 0xD0;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xDC);
    ecx = MEM32(ebp + 0x3E0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x64) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003EAEF; /* je: equal / zero */

loc_0003EAC4: ;
    eax = MEM32(ebp + 4);
    eax = MEM32(eax + 0x35C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x3E0) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0003EADD; /* jne: not equal / not zero */

loc_0003EAD7: ;
    MEM32(ebp + 0x3E0) = ecx;

loc_0003EADD: ;
    ecx = MEM32(ebp + 0x3E0);
    edx = MEM32(ecx + 0x568);
    MEM32(ebp + 0x3E4) = edx;

loc_0003EAEF: ;
    eax = MEM32(ebp + 0x3E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F9010(); /* call 0x002F9010 */

loc_0003EAFB: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x84) = eax;
    if (TEST_Z(eax, eax)) goto loc_0003EB14; /* je: equal / zero */

loc_0003EB09: ;
    eax = ZX16(MEM16(eax + 0x60));
    ecx = ebp;
    PUSH32(esp, 0); sub_0003E350(); /* call 0x0003E350 */

loc_0003EB14: ;
    edi = ebp + 0x2DC;
    esi = ebp + 0x2E8;
    ecx = edi;
    eax = MEM32(ecx);
    edx = esi;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    ebx = ebp + 0x2F4;
    eax = ebx;
    ecx = MEM32(eax);
    edx = ebp + 0x300;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    eax = ebp;
    PUSH32(esp, 0); sub_0003DB80(); /* call 0x0003DB80 */

loc_0003EB59: ;
    ecx = esp + 0x78;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x78;
    MEM32(esp + 0x10) = edx;
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
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0003EBFD(); return; } /* jnp: not parity */

loc_0003EBD8: ;
    if (TEST_Z(MEM32(ebp + 0xC0), 0xFFFFFEFFu)) { sub_0003EBFD(); return; } /* je: equal / zero */

loc_0003EBE4: ;
    MEM8(ebp + 0x2D0) = 1;
    MEM16(ebp + 0x676) = 0x3C;
    MEM8(ebp + 0x739) = 0;
    g_seh_ebp = ebp; sub_0003EC04(); return; /* tail jmp 0x0003EC04 */

}

/**
 * sub_0003F320
 * Original: 0x0003F320 - 0x0003F354 (52 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F320(void)
{
    float xmm0;

loc_0003F320: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x634) = xmm0; /* movss */
    MEMF(eax + 0x62C) = xmm0; /* movss */
    MEMF(eax + 0x638) = xmm0; /* movss */
    MEMF(eax + 0x630) = xmm0; /* movss */
    MEMF(eax + 0x63C) = xmm0; /* movss */
    MEMF(eax + 0x640) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0003F360
 * Original: 0x0003F360 - 0x0003F473 (275 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F360(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0003F360: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 0x108;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003F46C; /* je: equal / zero */

loc_0003F373: ;
    eax = MEM32(esi + 0x3B4);
    ecx = MEM32(eax + 0x58);
    if (TEST_Z(ecx, ecx)) goto loc_0003F38B; /* je: equal / zero */

loc_0003F380: ;
    ecx = MEM32(eax + 0x5C);
    if (TEST_NZ(ecx, ecx)) goto loc_0003F46C; /* jne: not equal / not zero */

loc_0003F38B: ;
    eax = ZX8(MEM8(esi + 0x2A8));
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm1 = MEMF(eax + ecx + 0x258); /* movss */
    xmm1 = xmm1 - MEMF(0x648D14); /* subss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esi + 0x3E0);
    eax = eax + ecx;
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(eax + 0x25C); /* movss */
    xmm1 = xmm1 / MEMF(eax + 0x258); /* divss */
    eax = MEM32(edx + 0x568);
    eax = MEM32(eax + 0x2B4);
    eax--;
    MEMF(esp + 4) = xmm1; /* movss */
    if ((eax == 0)) goto loc_0003F40E; /* je: equal / zero */

loc_0003F3E3: ;
    eax--;
    if ((eax == 0)) goto loc_0003F3FA; /* je: equal / zero */

loc_0003F3E6: ;
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    PUSH32(esp, 0x5D4CD4);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    goto loc_0003F420;

loc_0003F3FA: ;
    xmm0 = xmm0 * MEMF(0x6490A0); /* mulss */
    PUSH32(esp, 0x5D4CCC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    goto loc_0003F420;

loc_0003F40E: ;
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    PUSH32(esp, 0x5D4CD0);
    eax = esp + 0xC;
    PUSH32(esp, eax);

loc_0003F420: ;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0003F42B: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(ecx + 0xAC) = xmm0; /* movss */
    eax = MEM32(esi + 4);
    xmm1 = MEMF(eax + 0xFC); /* movss */
    eax = eax + 0xA0;
    esp = esp + 8;
    edx = esp + 8;
    PUSH32(esp, edx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    PUSH32(esp, esi);
    MEMF(eax + 0x34) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00043460(); /* call 0x00043460 */

loc_0003F469: ;
    esp = esp + 8;

loc_0003F46C: ;
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_0003F480
 * Original: 0x0003F480 - 0x0003F4D4 (84 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F480(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0003F480: ;
    eax = MEM32(esi + 4);
    xmm0 = MEMF(0x64A214); /* movss */
    esp = esp - 8;
    /* comiss xmm0, MEMF(eax + 0x24C) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x24C))) goto loc_0003F4D0; /* jbe: below or equal (unsigned <=) */

loc_0003F497: ;
    ecx = MEM32(esi + 0x3E0);
    edx = esp;
    PUSH32(esp, 0x73);
    PUSH32(esp, edx);
    eax = 0x7A;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0003F4B9: ;
    eax = MEM32(esp + 0xC);
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0003F4D0; /* jne: not equal / not zero */

loc_0003F4C4: ;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_001CF420(); /* call 0x001CF420 */

loc_0003F4CD: ;
    esp = esp + 4;

loc_0003F4D0: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0003F4E0
 * Original: 0x0003F4E0 - 0x0003F652 (370 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003F4E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003F4E0: ;
    esp = esp - 0xA0;
    ecx = MEM32(0x84A13C);
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = eax;
    eax = ZX8(MEM8(ebx + 0x2A8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = MEMF(eax + ecx + 0x25C); /* movss */
    xmm0 = xmm0 / MEMF(eax + ecx + 0x258); /* divss */
    xmm1 = MEMF(eax + ecx + 0x258); /* movss */
    xmm1 = xmm1 - MEMF(0x648D14); /* subss */
    eax = eax + ecx;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x3E4);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x2AC);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = esi;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM8(esp + 0x13) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003F59A; /* jne: not equal / not zero */

loc_0003F558: ;
    eax = MEM32(ebx + 0x3E0);
    SET_LO8(eax, MEM8(eax + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003F595; /* je: equal / zero */

loc_0003F568: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = edx + eax + -1744;
    eax = MEM32(ecx + 0x64);
    if (CMP_EQ(eax, 0x35)) goto loc_0003F58A; /* je: equal / zero */

loc_0003F585: ;
    if (CMP_NE(eax, 0x1E)) goto loc_0003F595; /* jne: not equal / not zero */

loc_0003F58A: ;
    (void)0; /* cmp MEM32(ecx + 0x64), 0x1E - flags set for next jcc */
    MEM8(esp + 0x13) = 1;
    if (CMP_EQ(MEM32(ecx + 0x64), 0x1E)) goto loc_0003F59A; /* je: equal / zero */

loc_0003F595: ;
    MEM8(esp + 0x13) = 0;

loc_0003F59A: ;
    ecx = MEM32(ebx + 0x3E0);
    edi = 1;
    PUSH32(esp, 0); sub_002F7F70(); /* call 0x002F7F70 */

loc_0003F5AA: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = 0x43;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003F5B7; /* je: equal / zero */

loc_0003F5B3: ;
    if (CMP_NE(esi, edx)) goto loc_0003F5FD; /* jne: not equal / not zero */

loc_0003F5B7: ;
    if (CMP_EQ(esi, 0x1B)) goto loc_0003F5C5; /* je: equal / zero */

loc_0003F5BC: ;
    if (CMP_EQ(esi, 0x6F)) goto loc_0003F5C5; /* je: equal / zero */

loc_0003F5C1: ;
    if (CMP_NE(esi, edx)) goto loc_0003F5FD; /* jne: not equal / not zero */

loc_0003F5C5: ;
    eax = MEM32(ebp + 0x2B0);
    if (TEST_NZ(eax, eax)) goto loc_0003F5FD; /* jne: not equal / not zero */

loc_0003F5CF: ;
    ecx = MEM32(ebx + 0x38C);
    eax = MEM32(ebx + 0x390);
    ecx = ecx | edi;
    MEM32(ebx + 0x38C) = ecx;
    ecx = MEM32(ebx + 0x3B4);
    eax = eax | edi;
    MEM32(ebx + 0x390) = eax;
    MEM32(ecx + 0x54) = edi;
    eax = MEM32(ebx + 0x3B4);
    MEM32(eax + 0x6C) = edi;

loc_0003F5FD: ;
    edi = MEM32(ebp + 0x2B0);
    if (TEST_NZ(edi, edi)) goto loc_0003F622; /* jne: not equal / not zero */

loc_0003F607: ;
    SET_LO8(eax, MEM8(ebx + 0x398));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0003F61B; /* jne: not equal / not zero */

loc_0003F611: ;
    SET_LO8(eax, MEM8(ebx + 0x399));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003F622; /* je: equal / zero */

loc_0003F61B: ;
    MEM8(ebp + 0x280) = 1;

loc_0003F622: ;
    ecx = MEM32(ebx + 0x3E0);
    SET_LO8(eax, MEM8(ecx + 0x135));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x1F) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0003F652(); return; } /* je: equal / zero */

loc_0003F636: ;
    esi = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + esi + -1744;
    MEM32(esp + 0x20) = eax;
    g_seh_ebp = ebp; sub_0003F656(); return; /* tail jmp 0x0003F656 */

}

/**
 * sub_00040EA0
 * Original: 0x00040EA0 - 0x0004121D (893 bytes, 207 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040EA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00040EA0: ;
    esp = esp - 0x2C;
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(0x7F9F5C); /* divss */
    xmm1 = (float)(int32_t)MEM32(0x7FA20C); /* cvtsi2ss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX16(MEM16(esi + 0x60));
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x568);
    ecx = MEM32(edi + 0xA0);
    xmm0 = xmm0 * xmm1; /* mulss */
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_L(eax, edx)) goto loc_00040EEE; /* jl: less (signed <) */

loc_00040EE9: ;
    eax = 0x14;

loc_00040EEE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    (void)0; /* cmp ecx, 0x1B - flags set for next jcc */
    ebx = eax;
    if (CMP_EQ(ecx, 0x1B)) goto loc_00040F0A; /* je: equal / zero */

loc_00040F00: ;
    if (CMP_EQ(ecx, 0x6F)) goto loc_00040F0A; /* je: equal / zero */

loc_00040F05: ;
    if (CMP_NE(ecx, 0x43)) goto loc_00040F11; /* jne: not equal / not zero */

loc_00040F0A: ;
    MEM32(ebx + 0x54) = 1;

loc_00040F11: ;
    eax = MEM32(ebx + 0x54);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x648E3C); /* movss */
    if (TEST_Z(eax, eax)) goto loc_00040F8E; /* je: equal / zero */

loc_00040F20: ;
    eax = MEM32(edi + 0x2B0);
    if (TEST_NZ(eax, eax)) goto loc_00040F8E; /* jne: not equal / not zero */

loc_00040F2A: ;
    MEM32(edi + 0x2B0) = 2;
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(edi + 0x260) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(edi + 0x260);
    MEMF(edi + 0x264) = xmm0; /* movss */
    MEM32(edi + 0x258) = eax;
    MEMF(edi + 0x25C) = xmm0; /* movss */
    MEMF(edi + 0x268) = xmm0; /* movss */
    MEMF(edi + 0x26C) = xmm0; /* movss */
    ecx = esi;
    MEM8(esi + 0x542) = 0;
    PUSH32(esp, 0); sub_0008EBC0(); /* call 0x0008EBC0 */

loc_00040F85: ;
    PUSH32(esp, 0); sub_0008C710(); /* call 0x0008C710 */

loc_00040F8A: ;
    ecx = MEM32(esp + 0x10);

loc_00040F8E: ;
    eax = MEM32(edi + 0x2B0);
    if (TEST_Z(eax, eax)) goto loc_00041214; /* je: equal / zero */

loc_00040F9C: ;
    if (CMP_NE(eax, 2)) goto loc_00041214; /* jne: not equal / not zero */

loc_00040FA5: ;
    fp_push(MEMF(esi + 0x114)); /* fld float */
    xmm0 = MEMF(esi + 0x78); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x1F0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* fld st(0) */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    /* FPU: fsin  */
    xmm0 = xmm0 + MEMF(esi + 0x7C); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x88); /* subss */
    MEM32(esp + 0x28) = eax;
    (void)0; /* cmp MEM32(edi + 0xBC), 2 - flags set for next jcc */
    MEM32(esp + 0x24) = edx;
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(MEM32(edi + 0xBC), 2)) goto loc_0004105B; /* jne: not equal / not zero */

loc_0004104A: ;
    SET_LO8(eax, MEM8(edi + 0x364));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0004105B; /* je: equal / zero */

loc_00041054: ;
    MEM32(ebx + 0x54) = 1;

loc_0004105B: ;
    eax = MEM32(ebx + 0x54);
    if (TEST_Z(eax, eax)) goto loc_000411F7; /* je: equal / zero */

loc_00041066: ;
    if (TEST_Z(ecx, ecx)) goto loc_000411F7; /* je: equal / zero */

loc_0004106E: ;
    if (CMP_EQ(ecx, 0x1F)) goto loc_00041080; /* je: equal / zero */

loc_00041073: ;
    (void)0; /* cmp ecx, 0x29 - flags set for next jcc */
    xmm0 = MEMF(0x6495C0); /* movss */
    if (CMP_NE(ecx, 0x29)) goto loc_00041088; /* jne: not equal / not zero */

loc_00041080: ;
    xmm0 = MEMF(0x64938C); /* movss */

loc_00041088: ;
    /* comiss xmm0, MEMF(edi + 0x264) - sets EFLAGS */
    if ((xmm0 > MEMF(edi + 0x264))) goto loc_000410A9; /* ja: above (unsigned >) */

loc_00041091: ;
    xmm2 = MEMF(edi + 0x264); /* movss */
    xmm0 = MEMF(0x6493A8); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_000410A9; /* ja: above (unsigned >) */

loc_000410A6: ;
    xmm0 = xmm2; /* movaps */

loc_000410A9: ;
    MEMF(edi + 0x264) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 1)) goto loc_000410E4; /* jne: not equal / not zero */

loc_000410C0: ;
    xmm0 = MEMF(esi + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x4D8); /* subss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x25C); /* movss */
    goto loc_00041141;

loc_000410E4: ;
    ebx = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x260);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40C00000);
    esi = edi + 0x258;
    PUSH32(esp, ecx);
    edx = edi + 0x268;
    ecx = esi;
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_0004110D: ;
    eax = MEM32(edi + 0x264);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40C00000);
    ecx = edi + 0x25C;
    edx = edi + 0x26C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0840(); /* call 0x002B0840 */

loc_00041130: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    esp = esp + 0x20;

loc_00041141: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = edi + 0x234;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(ecx) = edx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEM32(ecx + 4) = eax;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = edi + 0x228;
    edi = edi + 0x21C;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    MEM32(edi) = edx;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_000411F7: ;
    MEM32(edi + 0x2B0) = 0;
    ecx = esi;
    MEM8(esi + 0x542) = 0;
    PUSH32(esp, 0); sub_0008EBC0(); /* call 0x0008EBC0 */

loc_0004120F: ;
    PUSH32(esp, 0); sub_0008C710(); /* call 0x0008C710 */

loc_00041214: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00041220
 * Original: 0x00041220 - 0x000413C1 (417 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00041220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00041220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    eax = ebp;
    PUSH32(esp, 0); sub_0003D2D0(); /* call 0x0003D2D0 */

loc_00041234: ;
    eax = MEM32(ebp + 0x3E4);
    ebx = 0; /* xor self */
    MEM32(eax + 0x2B0) = ebx;
    (void)0; /* cmp MEM8(0x7819D5), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(ebp + 0x3E4);
    MEM32(ecx + 0x2B4) = ebx;
    if (CMP_NE(MEM8(0x7819D5), LO8(ebx))) goto loc_0004127F; /* jne: not equal / not zero */

loc_00041256: ;
    edx = MEM32(ebp + 0x3E0);
    SET_LO8(eax, MEM8(edx + 0x135));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0004127F; /* je: equal / zero */

loc_00041266: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    if (CMP_EQ(MEM32(eax + ecx + -1640), 0x28)) goto loc_0004128B; /* je: equal / zero */

loc_0004127F: ;
    eax = ebp;
    esi = 0x21;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_0004128B: ;
    esi = MEM32(ebp + 0x3E0);
    PUSH32(esp, 0); sub_002C38C0(); /* call 0x002C38C0 */

loc_00041296: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000412A3; /* je: equal / zero */

loc_0004129A: ;
    ecx = ebp;
    eax = esi;
    PUSH32(esp, 0); sub_001CFA20(); /* call 0x001CFA20 */

loc_000412A3: ;
    edx = MEM32(ebp + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edx + 0xAC) = xmm0; /* movss */
    eax = MEM32(ebp + 4);
    xmm1 = MEMF(eax + 0xFC); /* movss */
    eax = eax + 0xA0;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    ecx = MEM32(ebp + 0x3E0);
    MEM8(ecx + 0x542) = LO8(ebx);
    PUSH32(esp, 0); sub_0008EBC0(); /* call 0x0008EBC0 */

loc_000412DB: ;
    esi = ecx;
    PUSH32(esp, 0); sub_0008C710(); /* call 0x0008C710 */

loc_000412E2: ;
    eax = MEM32(ebp + 0x3E0);
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00041308; /* je: equal / zero */

loc_000412F2: ;
    eax = ZX8(LO8(ecx));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx + -1744;

loc_00041308: ;
    SET_LO8(ecx, MEM8(ebp + 0x2A8));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(ecx, MEM8(eax + 0x544));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + 0x544) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x2A8));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(ecx, MEM8(eax + 0x16E));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + 0x16E) = LO8(ecx);
    eax = MEM32(ebp + 4);
    MEM8(eax + 0x8CF) = LO8(ebx);
    ecx = MEM32(ebp + 0x3E0);
    eax = MEM32(ecx + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_000413BC; /* je: equal / zero */

loc_00041355: ;
    xmm0 = MEMF(eax + 0x25C); /* movss */
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(ebp + 0x604) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648E6C))) goto loc_0004137E; /* jbe: below or equal (unsigned <=) */

loc_0004136E: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */
    MEMF(ebp + 0x604) = xmm0; /* movss */

loc_0004137E: ;
    eax = MEM32(ebp + 0x604);
    edx = MEM32(ebp + 4);
    MEM32(edx + 0x34) = eax;
    ecx = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_000413BC; /* jne: not equal / not zero */

loc_0004139A: ;
    xmm0 = MEMF(ebp + 0x604); /* movss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000413B1: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_000413BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000413D0
 * Original: 0x000413D0 - 0x00041403 (51 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000413D0(void)
{

loc_000413D0: ;
    MEM16(eax + 0x684) = 1;
    ecx = MEM32(eax + 0x2DC);
    MEM32(eax + 0x688) = ecx;
    edx = MEM32(eax + 0x2E0);
    MEM32(eax + 0x68C) = edx;
    ecx = MEM32(eax + 0x2E4);
    MEM32(eax + 0x690) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00041410
 * Original: 0x00041410 - 0x00041444 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00041410(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00041410: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x8B8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) { sub_00041444(); return; } /* je: equal / zero */

loc_00041421: ;
    xmm0 = MEMF(0x6492B0); /* movss */
    MEMF(esi + 0x6B0) = xmm0; /* movss */
    MEM16(esi + 0x6C4) = LO16(ebx);
    MEM16(esi + 0x684) = LO16(ebx);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00041800
 * Original: 0x00041800 - 0x00041896 (150 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00041800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00041800: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x8BC);
    if (TEST_NZ(ecx, ecx)) goto loc_00041894; /* jne: not equal / not zero */

loc_00041814: ;
    ecx = MEM32(esi + 0xC0);
    (void)0; /* cmp ecx, 0x80 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_G(ecx, 0x80)) goto loc_00041859; /* jg: greater (signed >) */

loc_00041823: ;
    if (CMP_EQ(ecx, 0x80)) goto loc_00041893; /* je: equal / zero */

loc_00041825: ;
    ecx--;
    if (CMP_A(ecx, 0x3F)) goto loc_0004188E; /* ja: above (unsigned >) */

loc_0004182B: ;
    ecx = ZX8(MEM8(ecx + 0x418AC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x41898); /* switch: 5 entries, 4 targets */
    if (_jt == 0x00041839u) goto loc_00041839;
    if (_jt == 0x00041843u) goto loc_00041843;
    if (_jt == 0x00041850u) goto loc_00041850;
    if (_jt == 0x0004188Eu) goto loc_0004188E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00041839: ;
    edi = esi;
    PUSH32(esp, 0); sub_00044A80(); /* call 0x00044A80 */

loc_00041840: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00041843: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0003B690(); /* call 0x0003B690 */

loc_0004184A: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00041850: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0003BBD0(); return; /* tail jmp 0x0003BBD0 */

loc_00041859: ;
    if (CMP_G(ecx, 0x800)) goto loc_00041886; /* jg: greater (signed >) */

loc_00041861: ;
    if (CMP_EQ(ecx, 0x800)) goto loc_0004188E; /* je: equal / zero */

loc_00041863: ;
    if (CMP_EQ(ecx, 0x100)) goto loc_0004187D; /* je: equal / zero */

loc_0004186B: ;
    if (CMP_NE(ecx, 0x400)) goto loc_0004188E; /* jne: not equal / not zero */

loc_00041873: ;
    edi = esi;
    PUSH32(esp, 0); sub_0003BC40(); /* call 0x0003BC40 */

loc_0004187A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004187D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00039B40(); return; /* tail jmp 0x00039B40 */

loc_00041886: ;
    if (CMP_EQ(ecx, 0x2000)) goto loc_00041893; /* je: equal / zero */

loc_0004188E: ;
    PUSH32(esp, 0); sub_0003BFC0(); /* call 0x0003BFC0 */

loc_00041893: ;
    POP32(esp, edi);

loc_00041894: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000418F0
 * Original: 0x000418F0 - 0x00041AD7 (487 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000418F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_000418F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    eax = MEM32(0x8472A0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0004190D; /* jne: not equal / not zero */

loc_00041904: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00046490(); /* call 0x00046490 */

loc_0004190A: ;
    esp = esp + 4;

loc_0004190D: ;
    esi = MEM32(ebx + 4);
    eax = MEM32(esi + 0x8B8);
    if (TEST_Z(eax, eax)) goto loc_00041949; /* je: equal / zero */

loc_0004191A: ;
    ecx = 0; /* xor self */
    eax--;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_S(eax, eax)) ? 1 : 0); /* setl */
    ecx--;
    ecx = ecx & eax;
    MEM32(esi + 0x8B8) = ecx;
    esi = MEM32(ebx + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_000495E0(); /* call 0x000495E0 */

loc_00041935: ;
    edx = MEM32(esi + 0x8E8);
    eax = ZX8(MEM8(edx + 0x2A8));
    MEM8(eax + 0x762E40) = 3;

loc_00041949: ;
    if (TEST_Z(MEM8(ebx + 0x118), 8)) goto loc_00041990; /* je: equal / zero */

loc_00041952: ;
    if (CMP_G(MEM16(ebx + 0x42E), 0)) goto loc_00041990; /* jg: greater (signed >) */

loc_0004195C: ;
    eax = MEM32(ebx + 0x3E0);
    ecx = ebx;
    MEM16(ebx + 0x42E) = 0xA;
    PUSH32(esp, 0); sub_00041DD0(); /* call 0x00041DD0 */

loc_00041972: ;
    esi = MEM32(ebx + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_000495E0(); /* call 0x000495E0 */

loc_0004197C: ;
    ecx = MEM32(esi + 0x8E8);
    edx = ZX8(MEM8(ecx + 0x2A8));
    MEM8(edx + 0x762E40) = 3;

loc_00041990: ;
    eax = ZX8(MEM8(ebx + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    edi = MEM32(ecx + edx + 0x144);
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    edx = MEM32(ecx * 4 + 0x762E44);
    eax = eax << 6;
    eax = eax + edx;
    esi = eax;
    eax = esp + 0x20;
    ecx = esi;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0); sub_003E3660(); /* call 0x003E3660 */

loc_000419D0: ;
    eax = edi + 0x10;
    edi = eax;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = ZX8(MEM8(ebx + 0x2A8));
    ecx = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    edi = edx + ecx + 0x40;
    esi = eax;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = ZX8(MEM8(ebx + 0x2A8));
    eax = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    eax = eax + edx;
    ecx = eax + 0x100;
    eax = eax + 0x40;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
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
    eax = MEM32(esp + 0x14);
    edi = eax + 0x50;
    ecx = 0x10;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = ZX8(MEM8(ebx + 0x2A8));
    ecx = MEM32(0x84A13C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    edi = edx + ecx + 0x80;
    ecx = 0x10;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    PUSH32(esp, 0); sub_003FB030(); /* call 0x003FB030 */

loc_00041AA7: ;
    edx = ZX8(MEM8(ebx + 0x2A8));
    esi = MEM32(esp + 0x14);
    eax = MEM32(0x84A13C);
    esi = esi + 0x114;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    edi = edx + eax + 0x148;
    ecx = 0x2A;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00041AE0
 * Original: 0x00041AE0 - 0x00041B9F (191 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00041AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00041AE0: ;
    eax = MEM32(0x8472A0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) { sub_00041B9F(); return; } /* jne: not equal / not zero */

loc_00041AF2: ;
    SET_LO8(eax, MEM8(0x84725D));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00041B9F(); return; } /* je: equal / zero */

loc_00041AFF: ;
    if (TEST_Z(MEM8(ebp + 0x3A0), 4)) goto loc_00041B80; /* je: equal / zero */

loc_00041B08: ;
    PUSH32(esp, 0); sub_002A6470(); /* call 0x002A6470 */

loc_00041B0D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00041B80; /* je: equal / zero */

loc_00041B11: ;
    SET_LO8(eax, MEM8(0x863AF8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00041B80; /* jne: not equal / not zero */

loc_00041B1A: ;
    if (TEST_Z(MEM8(ebp + 0xC0), 0x20)) goto loc_00041B55; /* je: equal / zero */

loc_00041B23: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xB;
    eax = ebp;
    PUSH32(esp, 0); sub_0003D2D0(); /* call 0x0003D2D0 */

loc_00041B31: ;
    eax = MEM32(ebp + 4);
    MEM32(eax + 0x8B8) = 1;
    esi = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_000392E0(); /* call 0x000392E0 */

loc_00041B46: ;
    eax = MEM32(ebp + 0x420);
    POP32(esp, edi);
    eax = eax | 0x80000000u;
    POP32(esp, esi);
    goto loc_00041B7A;

loc_00041B55: ;
    ecx = MEM32(ebp + 0x1C8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    ecx = 0xB;
    edx = ebp;
    PUSH32(esp, 0); sub_0003D200(); /* call 0x0003D200 */

loc_00041B6C: ;
    eax = MEM32(ebp + 0x420);
    esp = esp + 0xC;
    eax = eax & 0x7FFFFFFF;

loc_00041B7A: ;
    MEM32(ebp + 0x420) = eax;

loc_00041B80: ;
    if (TEST_Z(MEM8(ebp + 0xC0), 0x20)) { sub_00041B9F(); return; } /* je: equal / zero */

loc_00041B89: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00044EE0(); /* call 0x00044EE0 */

loc_00041B90: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_000390F0(); /* call 0x000390F0 */

loc_00041B98: ;
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00041BB0
 * Original: 0x00041BB0 - 0x00041C84 (212 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00041BB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00041BB0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_0003E280(); /* call 0x0003E280 */

loc_00041BB8: ;
    if (TEST_NZ(eax, eax)) goto loc_00041C36; /* jne: not equal / not zero */

loc_00041BBC: ;
    PUSH32(esp, esi);
    esi = ebx;
    PUSH32(esp, 0); sub_00041410(); /* call 0x00041410 */

loc_00041BC4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_00041C80; /* jne: not equal / not zero */

loc_00041BCD: ;
    eax = MEM32(ebx + 0xC0);
    if (TEST_Z(eax, 0x80000)) goto loc_00041C1B; /* je: equal / zero */

loc_00041BDA: ;
    PUSH32(esp, 0); sub_00045730(); /* call 0x00045730 */

loc_00041BDF: ;
    ecx = ebx + 0x2DC;
    eax = MEM32(ecx);
    edx = ebx + 0x2F4;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    eax = MEM32(ebx + 4);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, 0); sub_000390F0(); /* call 0x000390F0 */

loc_00041C03: ;
    PUSH32(esp, 0); sub_000418F0(); /* call 0x000418F0 */

loc_00041C08: ;
    edx = MEM32(ebx + 0x2AC);
    MEM32(ebx + 0x2B0) = edx;

loc_00041C14: ;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00041C1B: ;
    if (TEST_NZ(eax, 0x100000)) goto loc_00041C14; /* jne: not equal / not zero */

loc_00041C22: ;
    if (TEST_Z(eax, 0x200000)) goto loc_00041C4E; /* je: equal / zero */

loc_00041C29: ;
    PUSH32(esp, 0); sub_0003B280(); /* call 0x0003B280 */

loc_00041C2E: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0); sub_000390F0(); /* call 0x000390F0 */

loc_00041C36: ;
    PUSH32(esp, 0); sub_000418F0(); /* call 0x000418F0 */

loc_00041C3B: ;
    eax = MEM32(ebx + 0x2AC);
    MEM32(ebx + 0x2B0) = eax;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00041C4E: ;
    if (TEST_Z(eax, 0x400000)) goto loc_00041C75; /* je: equal / zero */

loc_00041C55: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0); sub_000390F0(); /* call 0x000390F0 */

loc_00041C5D: ;
    PUSH32(esp, 0); sub_000418F0(); /* call 0x000418F0 */

loc_00041C62: ;
    ecx = MEM32(ebx + 0x2AC);
    MEM32(ebx + 0x2B0) = ecx;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00041C75: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0003F4E0(); /* call 0x0003F4E0 */

loc_00041C7C: ;
    if (TEST_NZ(eax, eax)) goto loc_00041C03; /* jne: not equal / not zero */

loc_00041C80: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00041C90
 * Original: 0x00041C90 - 0x00041D47 (183 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00041C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00041C90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x278) = eax;
    MEM32(esi + 0x27C) = eax;
    MEM32(esi + 0x280) = eax;
    MEM32(esi + 0x284) = eax;
    MEM32(esi + 0x288) = eax;
    MEM32(esi + 0x28C) = eax;
    MEM32(esi + 0x290) = eax;
    MEM32(esi + 0x294) = eax;
    MEM32(esi + 0x298) = eax;
    MEM32(esi + 0x29C) = eax;
    MEM16(esi + 0x2A0) = LO16(eax);
    eax = 1;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0x170) = 0;
    MEM32(esi + 0x1C8) = eax;
    MEM32(esi + 0x118) = 0xE;
    MEM16(esi + 0x220) = 3;
    PUSH32(esp, 0); sub_0003DF80(); /* call 0x0003DF80 */

loc_00041D0C: ;
    SET_LO8(ecx, MEM8(esi + 0x2A8));
    ebx = MEM32(0x84A5F8);
    eax = ZX8(LO8(ecx));
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    edx = edx + ebx;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(esi + 0x3E0) = edx;
    MEM16(esi + 0x3DC) = LO16(ecx);
    if (CMP_GE(eax, 2)) { sub_00041D47(); return; } /* jge: greater or equal (signed >=) */

loc_00041D3B: ;
    eax = MEM32(eax * 4 + 0x8470FC);
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_00041D4C(); return; /* tail jmp 0x00041D4C */

}

/**
 * sub_00041DD0
 * Original: 0x00041DD0 - 0x00041EA1 (209 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00041DD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00041DD0: ;
    PUSH32(esp, ecx);
    edx = MEM32(eax + 0x294);
    MEM32(ecx + 0x37C) = edx;
    xmm0 = MEMF(eax + 0x78); /* movss */
    edx = MEM32(ecx + 4);
    MEMF(ecx + 0x330) = xmm0; /* movss */
    MEMF(ecx + 0x33C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(ecx + 0x334) = xmm0; /* movss */
    MEMF(ecx + 0x340) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    edx = edx + 4;
    MEMF(ecx + 0x338) = xmm0; /* movss */
    MEMF(ecx + 0x344) = xmm0; /* movss */
    SET_LO8(eax, MEM8(edx + 0x92));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00041E5C; /* jne: not equal / not zero */

loc_00041E2F: ;
    eax = MEM32(ecx + 0x3E0);
    xmm0 = MEMF(eax + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00041E52: ;
    xmm0 = MEMF(esp); /* movss */
    MEMF(edx + 0x5C) = xmm0; /* movss */

loc_00041E5C: ;
    edx = MEM32(ecx + 0x3E4);
    xmm0 = MEMF(0x6492B0); /* movss */
    MEMF(edx + 0x278) = xmm0; /* movss */
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    MEM32(eax + 0x8B8) = 1;
    esi = MEM32(ecx + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_000495E0(); /* call 0x000495E0 */

loc_00041E8A: ;
    ecx = MEM32(esi + 0x8E8);
    edx = ZX8(MEM8(ecx + 0x2A8));
    MEM8(edx + 0x762E40) = 3;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00041EB0
 * Original: 0x00041EB0 - 0x00042095 (485 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00041EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00041EB0: ;
    ecx = MEM32(0x8498D4);
    if (TEST_Z(ecx, ecx)) goto loc_00041EC4; /* je: equal / zero */

loc_00041EBA: ;
    if (CMP_EQ(MEM8(ecx + 4), 1)) goto loc_00042094; /* je: equal / zero */

loc_00041EC4: ;
    SET_LO8(edx, MEM8(eax + 0x2A8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ZX8(LO8(edx));
    PUSH32(esp, edi);
    edi = 2;
    if (CMP_GE(ecx, edi)) goto loc_00041EE5; /* jge: greater or equal (signed >=) */

loc_00041ED9: ;
    esi = MEM32(ecx * 4 + 0x8470FC);
    esi = MEM32(esi + 8);
    goto loc_00041EEA;

loc_00041EE5: ;
    esi = 0x75A0B4;

loc_00041EEA: ;
    ebx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(eax + 0x388) = esi;
    if (CMP_L(ecx, ebx)) goto loc_00041F00; /* jl: less (signed <) */

loc_00041EFB: ;
    ecx = 0x14;

loc_00041F00: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1B0);
    ecx = ecx + 0x763260;
    MEM8(eax + 0x39A) = LO8(edx);
    MEM32(eax + 0x3B4) = ecx;
    edx = MEM32(esi + 8);
    MEM32(eax + 0x3A0) = edx;
    edx = MEM32(esi + 4);
    MEM32(eax + 0x39C) = edx;
    SET_LO8(edx, MEM8(eax + 0x6DE));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00041F46; /* je: equal / zero */

loc_00041F34: ;
    edx = 0; /* xor self */
    ebx = 0; /* xor self */
    MEM32(eax + 0x3A4) = ebx;
    MEM32(eax + 0x3A8) = ebx;
    goto loc_00041F5E;

loc_00041F46: ;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x3A4) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x3A8) = edx;
    edx = MEM32(ecx + 0x14);
    ebx = MEM32(ecx + 0x18);

loc_00041F5E: ;
    MEM8(eax + 0x398) = LO8(edx);
    edx = MEM32(eax + 0x3A4);
    (void)0; /* cmp edx, 0xA - flags set for next jcc */
    MEM8(eax + 0x399) = LO8(ebx);
    MEM32(eax + 0x390) = 0;
    MEM32(eax + 0x38C) = 0;
    if (CMP_LE(edx, 0xA)) goto loc_00041F95; /* jle: less or equal (signed <=) */

loc_00041F89: ;
    MEM32(eax + 0x390) = 0x10;
    goto loc_00041FA4;

loc_00041F95: ;
    if (CMP_GE(edx, 0xFFFFFFF6u)) goto loc_00041FA4; /* jge: greater or equal (signed >=) */

loc_00041F9A: ;
    MEM32(eax + 0x390) = 8;

loc_00041FA4: ;
    if (CMP_LE(MEM32(eax + 0x3A8), 0x3C)) goto loc_00041FB3; /* jle: less or equal (signed <=) */

loc_00041FAD: ;
    MEM32(eax + 0x390) = MEM32(eax + 0x390) | edi;

loc_00041FB3: ;
    edx = MEM32(eax + 0x3E4);
    if (CMP_EQ(MEM32(edx + 0xA0), edi)) goto loc_00041FE0; /* je: equal / zero */

loc_00041FC1: ;
    edx = MEM32(ecx + 0x6C);
    if (TEST_Z(edx, edx)) goto loc_00041FE0; /* je: equal / zero */

loc_00041FC8: ;
    MEM32(eax + 0x38C) = 1;
    edx = MEM32(ecx + 0x6C);
    if (TEST_Z(edx, edx)) goto loc_00041FE0; /* je: equal / zero */

loc_00041FD9: ;
    MEM32(eax + 0x390) = MEM32(eax + 0x390) | 1;

loc_00041FE0: ;
    esi = MEM32(eax + 0x3A0);
    ecx = esi;
    ecx = ecx & 0x4000;
    edi = 0x80;
    if ((ecx == 0)) goto loc_00041FFB; /* je: equal / zero */

loc_00041FF5: ;
    MEM32(eax + 0x38C) = MEM32(eax + 0x38C) | edi;

loc_00041FFB: ;
    ebx = MEM32(eax + 0x39C);
    edx = ebx;
    edx = edx & 0x4000;
    if ((edx == 0)) goto loc_00042011; /* je: equal / zero */

loc_0004200B: ;
    MEM32(eax + 0x390) = MEM32(eax + 0x390) | edi;

loc_00042011: ;
    if (TEST_Z(ecx, ecx)) goto loc_0004201B; /* je: equal / zero */

loc_00042015: ;
    MEM32(eax + 0x38C) = MEM32(eax + 0x38C) | edi;

loc_0004201B: ;
    if (TEST_Z(edx, edx)) goto loc_00042025; /* je: equal / zero */

loc_0004201F: ;
    MEM32(eax + 0x390) = MEM32(eax + 0x390) | edi;

loc_00042025: ;
    if (TEST_Z(ecx, ecx)) goto loc_0004202F; /* je: equal / zero */

loc_00042029: ;
    MEM32(eax + 0x38C) = MEM32(eax + 0x38C) | edi;

loc_0004202F: ;
    if (TEST_Z(edx, edx)) goto loc_00042039; /* je: equal / zero */

loc_00042033: ;
    MEM32(eax + 0x390) = MEM32(eax + 0x390) | edi;

loc_00042039: ;
    (void)0; /* test esi, 0x100 - flags set for next jcc */
    ecx = 0x20;
    if (TEST_Z(esi, 0x100)) goto loc_0004204C; /* je: equal / zero */

loc_00042046: ;
    MEM32(eax + 0x38C) = MEM32(eax + 0x38C) | ecx;

loc_0004204C: ;
    if (TEST_Z(HI8(ebx), 1)) goto loc_00042057; /* je: equal / zero */

loc_00042051: ;
    MEM32(eax + 0x390) = MEM32(eax + 0x390) | ecx;

loc_00042057: ;
    (void)0; /* test esi, 0x200 - flags set for next jcc */
    ecx = 0x40;
    if (TEST_Z(esi, 0x200)) goto loc_0004206A; /* je: equal / zero */

loc_00042064: ;
    MEM32(eax + 0x38C) = MEM32(eax + 0x38C) | ecx;

loc_0004206A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    (void)0; /* test HI8(ebx), 2 - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(HI8(ebx), 2)) goto loc_00042078; /* je: equal / zero */

loc_00042072: ;
    MEM32(eax + 0x390) = MEM32(eax + 0x390) | ecx;

loc_00042078: ;
    edx = MEM32(eax + 0x394);
    ecx = MEM32(eax + 0x390);
    edx = ~edx;
    edx = edx & ecx;
    MEM32(eax + 0x38C) = edx;
    MEM32(eax + 0x394) = ecx;

loc_00042094: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000420A0
 * Original: 0x000420A0 - 0x000420CC (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000420A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000420A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x8470DC);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    /* nop */

loc_000420B0: ;
    ecx = MEM32(esi + 0x3E0);
    if (TEST_Z(ecx, ecx)) { sub_000420CC(); return; } /* je: equal / zero */

loc_000420BA: ;
    ebx++;
    eax++;
    esi = esi + 0x770;
    if (CMP_L(eax, 4)) goto loc_000420B0; /* jl: less (signed <) */

loc_000420C7: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00042150
 * Original: 0x00042150 - 0x000421CB (123 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00042150(void)
{
    int _flags = 0; /* fallback flag var */

loc_00042150: ;
    eax = MEM32(ecx + 0x564);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_000421CA; /* je: equal / zero */

loc_0004215C: ;
    MEM32(ecx + 0x564) = edx;
    MEM32(eax + 0x3E0) = edx;
    eax = MEM32(0x8470DC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3E0);
    ecx = 0; /* xor self */
    if (CMP_EQ(esi, edx)) goto loc_0004218A; /* je: equal / zero */

loc_0004217A: ;
    MEM8(eax + 0x2A8) = LO8(edx);
    eax = MEM32(0x8470DC);
    ecx = 1;

loc_0004218A: ;
    if (CMP_EQ(MEM32(eax + 0xB50), edx)) goto loc_0004219E; /* je: equal / zero */

loc_00042192: ;
    MEM8(eax + 0xA18) = LO8(ecx);
    eax = MEM32(0x8470DC);
    ecx++;

loc_0004219E: ;
    if (CMP_EQ(MEM32(eax + 0x12C0), edx)) goto loc_000421B2; /* je: equal / zero */

loc_000421A6: ;
    MEM8(eax + 0x1188) = LO8(ecx);
    eax = MEM32(0x8470DC);
    ecx++;

loc_000421B2: ;
    if (CMP_EQ(MEM32(eax + 0x1A30), edx)) goto loc_000421C1; /* je: equal / zero */

loc_000421BA: ;
    MEM8(eax + 0x18F8) = LO8(ecx);
    ecx++;

loc_000421C1: ;
    esi = ecx + -1;
    PUSH32(esp, 0); sub_002A83D0(); /* call 0x002A83D0 */

loc_000421C9: ;
    POP32(esp, esi);

loc_000421CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000421D0
 * Original: 0x000421D0 - 0x00042236 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000421D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000421D0: ;
    esp = esp - 0x48;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 4;
    ebx = esp + 0x40;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_000489B0(); /* call 0x000489B0 */

loc_0004220B: ;
    edi = esp + 0x34;
    esi = ebx;
    PUSH32(esp, 0); sub_00401710(); /* call 0x00401710 */

loc_00042216: ;
    eax = MEM32(ebp + 4);
    esi = MEM32(eax + 0x8BC);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00042236(); return; } /* je: equal / zero */

loc_00042228: ;
    SET_LO8(edx, MEM8(eax + 0x710));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_00042236(); return; } /* je: equal / zero */

loc_00042232: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_00042238(); return; /* tail jmp 0x00042238 */

}

/**
 * sub_00042400
 * Original: 0x00042400 - 0x0004264A (586 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00042400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;

loc_00042400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0004264A(); return; } /* je: equal / zero */

loc_00042414: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(ecx + 0x700) = 1;
    edi = MEM32(ebx + 4);
    esi = eax;
    edi = edi + 0x6C0;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = esp + 0x18;
    esi = esp + 0x40;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_0004246F: ;
    edx = esi;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0004247F: ;
    edx = esi;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0004248F: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    edx = ebx + 0x330;
    esi = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    esi = ebx + 0x324;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    esi = MEM32(ebx + 4);
    esi = esi + 4;
    ebx = esp + 0x34;
    PUSH32(esp, 0); sub_000489B0(); /* call 0x000489B0 */

loc_000424C8: ;
    eax = esp + 0x28;
    ecx = esp + 0x1C;
    edx = ebx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0x1C);
    eax = eax + 0x4FC;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = edi + 0x2F4;
    esi = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    esi = edi + 0x2DC;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(esi + 8) = edx;
    xmm0 = MEMF(ecx + 0x3BC); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00042568: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm4 = MEMF(0x648E6C); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */
    ecx = MEM32(edi + 4);
    xmm0 = MEMF(ecx + 0x3BC); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00042599: ;
    SET_LO8(eax, MEM8(ecx + 0x96));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000425C7; /* jne: not equal / not zero */

loc_000425A3: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000425BC: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ecx + 0x60) = xmm0; /* movss */

loc_000425C7: ;
    ecx = MEM32(edi + 4);
    xmm0 = MEMF(ecx + 0x394); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000425E1: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */
    ecx = MEM32(edi + 4);
    xmm0 = MEMF(ecx + 0x394); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00042606: ;
    SET_LO8(eax, MEM8(ecx + 0x96));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00042630; /* jne: not equal / not zero */

loc_00042610: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00042625: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ecx + 0x38) = xmm0; /* movss */

loc_00042630: ;
    PUSH32(esp, 0); sub_000427C0(); /* call 0x000427C0 */

loc_00042635: ;
    PUSH32(esp, 0); sub_00042910(); /* call 0x00042910 */

loc_0004263A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00042CF0(); /* call 0x00042CF0 */

loc_00042640: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00042670
 * Original: 0x00042670 - 0x00042740 (208 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00042670(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00042670: ;
    PUSH32(esp, ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00042740(); return; } /* je: equal / zero */

loc_00042679: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = eax + 4;
    if (TEST_Z(esi, esi)) goto loc_0004273D; /* je: equal / zero */

loc_00042688: ;
    edx = eax + 0x248;
    if (TEST_Z(edx, edx)) goto loc_0004273D; /* je: equal / zero */

loc_00042696: ;
    eax = eax + 0x2A4;
    if ((eax == 0)) goto loc_0004273D; /* je: equal / zero */

loc_000426A1: ;
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(edx + 0x1C) = xmm0; /* movss */
    MEMF(edx + 0x24) = xmm0; /* movss */
    SET_LO8(edx, MEM8(esi + 0x92));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00042733; /* jne: not equal / not zero */

loc_000426CB: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000426E0: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00042733; /* jne: not equal / not zero */

loc_000426EF: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00042704: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00042733; /* jne: not equal / not zero */

loc_00042713: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00042728: ;
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x5C) = xmm0; /* movss */

loc_00042733: ;
    eax = MEM32(ecx + 4);
    MEM8(eax + 0x701) = 1;

loc_0004273D: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000427C0
 * Original: 0x000427C0 - 0x00042849 (137 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000427C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000427C0: ;
    eax = MEM32(edi + 4);
    xmm0 = MEMF(eax + 0x280); /* movss */
    xmm1 = MEMF(eax + 0x27C); /* movss */
    MEMF(eax + 0xB4) = xmm1; /* movss */
    MEMF(eax + 0xB8) = xmm0; /* movss */
    esp = esp - 8;
    MEMF(eax + 0xDC) = xmm1; /* movss */
    MEMF(eax + 0xE0) = xmm0; /* movss */
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x8B8);
    if (TEST_Z(eax, eax)) { sub_00042849(); return; } /* je: equal / zero */

loc_00042804: ;
    eax = MEM32(esi + 0xAC);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xB0) = xmm0; /* movss */
    MEM32(esi + 0xA8) = eax;
    ecx = MEM32(esi + 0xD4);
    MEMF(esi + 0xD8) = xmm0; /* movss */
    MEM32(esi + 0xD0) = ecx;
    edx = MEM32(esi + 0xA8);
    eax = MEM32(esi + 0xD0);
    MEM32(esi + 0xF4) = edx;
    MEM32(esi + 0xF8) = eax;
    g_seh_ebp = ebp; sub_00042890(); return; /* tail jmp 0x00042890 */

}

/**
 * sub_00042910
 * Original: 0x00042910 - 0x00042954 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00042910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00042910: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5FC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_00042920: ;
    if (CMP_EQ(MEM8(esi + ebp), 0)) goto loc_00042942; /* je: equal / zero */

loc_00042926: ;
    edx = ZX8(MEM8(edi + 0x2A8));
    MEM8(ecx + edx + 0xC3) = 0xFF;
    MEM8(ecx + edx + 0xC5) = 0xA;
    PUSH32(esp, 0); sub_002F60E0(); /* call 0x002F60E0 */

loc_00042942: ;
    esi++;
    ecx = ecx + 0x6D0;
    if (CMP_L(esi, 0x80)) goto loc_00042920; /* jl: less (signed <) */

loc_00042951: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00042960
 * Original: 0x00042960 - 0x00042CE2 (898 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00042960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00042960: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0x50;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x6C);
    (void)0; /* cmp MEM8(esi), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM8(esi), 0)) goto loc_0004298B; /* jne: not equal / not zero */

loc_00042977: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x6C);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;

loc_0004298B: ;
    ecx = esp + 0x38;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x64);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x6C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0x70);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x68);
    ecx = esp + 0x3C;
    edi = 0x870ED4;
    PUSH32(esp, 0); sub_000438E0(); /* call 0x000438E0 */

loc_000429D1: ;
    (void)0; /* cmp MEM8(esi), 0 - flags set for next jcc */
    xmm6 = MEMF(0x648E84); /* movss */
    if (CMP_EQ(MEM8(esi), 0)) goto loc_00042A16; /* je: equal / zero */

loc_000429DE: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00042A16; /* je: equal / zero */

loc_000429E3: ;
    edx = MEM32(esp + 0x6C);
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
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm6 = MEMF(esp + 0xC); /* movss */

loc_00042A16: ;
    (void)0; /* cmp MEM32(eax), 0 - flags set for next jcc */
    ecx = eax;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00042CDB; /* je: equal / zero */

loc_00042A21: ;
    xmm7 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);

loc_00042A25: ;
    esi = MEM32(ecx);
    ecx = ecx + 4;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (TEST_Z(esi, esi)) goto loc_00042CDA; /* je: equal / zero */

loc_00042A36: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00042A48; /* je: equal / zero */

loc_00042A40: ;
    if (CMP_EQ(eax, ebp)) goto loc_00042CCD; /* je: equal / zero */

loc_00042A48: ;
    eax = MEM32(esi + 0x200);
    if (TEST_Z(eax, 0x1000200)) goto loc_00042A5E; /* je: equal / zero */

loc_00042A55: ;
    if (TEST_Z(HI8(eax), 0x40)) goto loc_00042CCD; /* je: equal / zero */

loc_00042A5E: ;
    SET_LO8(eax, MEM8(esi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00042A88; /* je: equal / zero */

loc_00042A68: ;
    edx = MEM32(0x84A5F8);
    ecx = MEM32(ebp + 0x3E0);
    eax = ZX8(LO8(eax));
    eax--;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    if (CMP_EQ(eax, ecx)) goto loc_00042CCD; /* je: equal / zero */

loc_00042A88: ;
    ecx = MEM32(ebp + 0x3E0);
    SET_LO8(eax, MEM8(ecx + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00042AB2; /* je: equal / zero */

loc_00042A98: ;
    ecx = MEM32(0x84A5F8);
    edx = ZX8(LO8(eax));
    edx--;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    edx = edx + ecx;
    if (CMP_EQ(edx, esi)) goto loc_00042CCD; /* je: equal / zero */

loc_00042AB2: ;
    eax = MEM32(esp + 0x78);
    PUSH32(esp, 0);
    edi = esi;
    PUSH32(esp, 0); sub_002A3580(); /* call 0x002A3580 */

loc_00042ABF: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00042CCD; /* jne: not equal / not zero */

loc_00042AC7: ;
    SET_LO16(eax, MEM16(esi + 0x136));
    SET_LO8(ecx, 0); /* xor self */
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_Z(HI8(eax), 0x10)) goto loc_00042AD9; /* je: equal / zero */

loc_00042AD7: ;
    SET_LO8(ecx, 1);

loc_00042AD9: ;
    if (TEST_Z(HI8(eax), 8)) goto loc_00042AE0; /* je: equal / zero */

loc_00042ADE: ;
    SET_LO8(ebx, 1);

loc_00042AE0: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00042AEC; /* jne: not equal / not zero */

loc_00042AE4: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00042CCD; /* je: equal / zero */

loc_00042AEC: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi + 0x78;
    edx = MEM32(eax);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x28) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = eax;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1EC);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1EE);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1EC);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x1F0);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00042C67; /* je: equal / zero */

loc_00042B55: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_00042B5F: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00042CCD; /* jne: not equal / not zero */

loc_00042B6A: ;
    edx = MEM32(ebp + 4);
    xmm0 = MEMF(edx + 0x190); /* movss */
    edx = MEM32(esp + 0x70);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5A02CC);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x5A02FC;
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_003DF3E0(); /* call 0x003DF3E0 */

loc_00042BA1: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_00042CCD; /* je: equal / zero */

loc_00042BAC: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_00042CCD; /* jbe: below or equal (unsigned <=) */

loc_00042BBB: ;
    ecx = esp + 0x54;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x14) = ecx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x6C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x70);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00042BFB: ;
    ecx = esp + 0x5C;
    edx = esp + 0x50;
    esp = esp + 8;
    xmm2 = xmm0; /* movaps */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(esp + 0x68);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    /* comiss xmm6, xmm2 - sets EFLAGS */
    if ((xmm6 <= xmm2)) goto loc_00042CCD; /* jbe: below or equal (unsigned <=) */

loc_00042C41: ;
    eax = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x70);
    MEM8(eax) = 1;
    eax = MEM32(esp + 0x4C);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(ecx + 4) = eax;
    xmm6 = xmm2; /* movaps */
    MEM32(ecx + 8) = edx;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    goto loc_00042CAD;

loc_00042C67: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00042CCD; /* je: equal / zero */

loc_00042C6B: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_00042C75: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00042CCD; /* jne: not equal / not zero */

loc_00042C7C: ;
    eax = MEM32(esp + 0x70);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5A02CC);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0x5A02FC;
    edi = esp + 0x48;
    PUSH32(esp, 0); sub_003DDC10(); /* call 0x003DDC10 */

loc_00042CA8: ;
    esp = esp + 0x18;
    (void)0; /* test eax, eax - flags set for next jcc */

loc_00042CAD: ;
    if (TEST_Z(eax, eax)) goto loc_00042CCD; /* je: equal / zero */

loc_00042CAF: ;
    edx = ZX8(MEM8(ebp + 0x2A8));
    MEM8(edx + esi + 0xC5) = 0xA;
    ecx = esi;
    MEM8(edx + esi + 0xC3) = 0x50;
    PUSH32(esp, 0); sub_002F60E0(); /* call 0x002F60E0 */

loc_00042CCD: ;
    ecx = MEM32(esp + 0x20);
    if (CMP_NE(MEM32(ecx), 0)) goto loc_00042A25; /* jne: not equal / not zero */

loc_00042CDA: ;
    POP32(esp, ebx);

loc_00042CDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00042CF0
 * Original: 0x00042CF0 - 0x00042D35 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00042CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00042CF0: ;
    esp = esp - 0x34;
    xmm0 = MEMF(0x648F04); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    eax = ebp + 0x330;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x870ED4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_00042D35(); return; } /* jne: not equal / not zero */

loc_00042D2B: ;
    MEM32(esp + 0x44) = 0x870ED8;
    g_seh_ebp = ebp; sub_00042D69(); return; /* tail jmp 0x00042D69 */

}

/**
 * sub_00042F90
 * Original: 0x00042F90 - 0x0004345D (1229 bytes, 298 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00042F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00042F90: ;
    esp = esp - 0x9C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA4);
    eax = MEM32(ebp + 0x3E4);
    if (TEST_Z(eax, eax)) goto loc_00043455; /* je: equal / zero */

loc_00042FAC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 4);
    (void)0; /* cmp MEM8(ebx + 0x701), 1 - flags set for next jcc */
    MEMF(0x74FA10) = xmm0; /* movss */
    if (CMP_NE(MEM8(ebx + 0x701), 1)) goto loc_00042FCA; /* jne: not equal / not zero */

loc_00042FC4: ;
    ebx = ebx + 0x360;

loc_00042FCA: ;
    ecx = ebx + 4;
    if (TEST_Z(ecx, ecx)) goto loc_00043454; /* je: equal / zero */

loc_00042FD5: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00042FE9: ;
    xmm0 = MEMF(ecx + 0x30); /* movss */
    eax = esp + 8;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00042FFD: ;
    xmm0 = MEMF(ecx + 0x58); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00043011: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x48;
    ecx = 0; /* xor self */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E46C0(); /* call 0x003E46C0 */

loc_00043056: ;
    xmm2 = MEMF(esp + 0x54); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esp + 0x50); /* movss */
    xmm5 = MEMF(esp + 0x48); /* movss */
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm4 = xmm4 - xmm6; /* subss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * MEMF(0x648CF8); /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 + MEMF(esp + 0x14); /* addss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(esp + 0x14) = xmm6; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm7 - xmm6; /* subss */
    MEMF(esp + 0x24) = xmm7; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x14); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    esp = esp + 0xC;
    MEMF(esp + 0x1C) = xmm6; /* movss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0xC); /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x24C); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    eax = esp + 0x18;
    if (1 /* jp after test - parity */) goto loc_000431BE; /* jp: parity */

loc_0004317F: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    ecx = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = ecx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    goto loc_000431FD;

loc_000431BE: ;
    xmm0 = MEMF(ebx + 0x24C); /* movss */
    edx = esp + 0x18;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 8) = eax;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_000431FD: ;
    eax = ebp + 0x2F4;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x34) = eax;
    edi = edi + 0x100;
    eax = esp + 0x54;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x54) = 0x5D4C44;
    MEM32(esp + 0xA8) = 0;
    PUSH32(esp, 0); sub_00049F30(); /* call 0x00049F30 */

loc_00043256: ;
    ecx = MEM32(ebp + 0x3E0);
    xmm0 = MEMF(ebx + 0x190); /* movss */
    edx = MEM32(ecx + 0x568);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x30); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEM8(esp + 0x10) = 1;
    if ((xmm0 <= xmm2)) goto loc_00043284; /* jbe: below or equal (unsigned <=) */

loc_0004327F: ;
    MEM8(esp + 0x10) = 0;

loc_00043284: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ebx + 0x190); /* movss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp + 0x30;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    esi = esp + 0x40;
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_002A20B0(); /* call 0x002A20B0 */

loc_000432BD: ;
    MEM8(esp + 0x33) = LO8(eax);
    eax = 0; /* xor self */
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0x37;
    PUSH32(esp, edx);
    MEM32(0x780AB0) = eax;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    eax = esi;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00042960(); /* call 0x00042960 */

loc_000432F9: ;
    SET_LO8(eax, MEM8(esp + 0x4B));
    esp = esp + 0x2C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000433FE; /* je: equal / zero */

loc_0004330A: ;
    eax = MEM32(ebp + 0x3E4);
    SET_LO8(ecx, MEM8(eax + 0x84));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000433FE; /* jne: not equal / not zero */

loc_0004331E: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    ecx = ebp + 0x330;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    eax = esp + 0x24;
    ecx = esp + 0x30;
    edx = esp + 0x3C;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 8) = edx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_00043381: ;
    xmm1 = MEMF(ebx + 0x190); /* movss */
    esp = esp + 4;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00043394; /* jbe: below or equal (unsigned <=) */

loc_00043391: ;
    xmm0 = xmm1; /* movaps */

loc_00043394: ;
    eax = MEM32(ebp + 4);
    if (CMP_NE(MEM8(eax + 0x701), 1)) goto loc_000433CF; /* jne: not equal / not zero */

loc_000433A0: ;
    MEMF(eax + 0x5AC) = xmm0; /* movss */
    ecx = MEM32(ebp + 4);
    MEMF(ecx + 0x5C4) = xmm0; /* movss */
    eax = MEM32(ebp + 4);
    PUSH32(esp, ebp);
    MEM8(eax + 0x7F8) = 1;
    PUSH32(esp, 0); sub_00042CF0(); /* call 0x00042CF0 */

loc_000433C3: ;
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

loc_000433CF: ;
    MEMF(eax + 0x24C) = xmm0; /* movss */
    edx = MEM32(ebp + 4);
    MEMF(edx + 0x264) = xmm0; /* movss */
    eax = MEM32(ebp + 4);
    PUSH32(esp, ebp);
    MEM8(eax + 0x7F8) = 1;
    PUSH32(esp, 0); sub_00042CF0(); /* call 0x00042CF0 */

loc_000433F2: ;
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

loc_000433FE: ;
    ecx = ebp + 0x330;
    eax = ebp + 0x2F4;
    edx = esp + 0x18;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(ebp + 4);
    PUSH32(esp, ebp);
    MEM8(eax + 0x7F8) = 0;
    PUSH32(esp, 0); sub_00042CF0(); /* call 0x00042CF0 */

loc_00043451: ;
    esp = esp + 4;

loc_00043454: ;
    POP32(esp, ebx);

loc_00043455: ;
    POP32(esp, ebp);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

}

/**
 * sub_00043460
 * Original: 0x00043460 - 0x000437E7 (903 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00043460(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00043460: ;
    SET_LO8(eax, MEM8(0x847265));
    esp = esp - 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000437E3; /* jne: not equal / not zero */

loc_00043470: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00043486; /* je: equal / zero */

loc_00043479: ;
    eax = MEM32(0x849ACC);
    if (TEST_NZ(eax, eax)) goto loc_000437E3; /* jne: not equal / not zero */

loc_00043486: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C1E0(); /* call 0x0003C1E0 */

loc_0004348D: ;
    eax = MEM32(eax + 0x10);
    eax = eax + 0x28;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x1C);
    if (TEST_NZ(ecx, ecx)) goto loc_000437E3; /* jne: not equal / not zero */

loc_000434A0: ;
    xmm0 = MEMF(0x64971C); /* movss */
    eax = 0x94;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x14);
    eax = ZX8(MEM8(eax + 0x2A8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x84A13C);
    ebp = (int32_t)MEMF(eax + esi + 0x224); /* cvttss2si */
    eax = eax + esi;
    /* comiss xmm0, MEMF(eax + 0x1F4) - sets EFLAGS */
    esi = (int32_t)MEMF(eax + 0x228); /* cvttss2si */
    PUSH32(esp, edi);
    ecx = 0x1D;
    edx = 0x5E;
    edi = 0x30;
    MEM32(esp + 0x1C) = 0x28;
    ebx = 0x89;
    if ((xmm0 <= MEMF(eax + 0x1F4))) goto loc_000435E1; /* jbe: below or equal (unsigned <=) */

loc_0004350C: ;
    xmm0 = MEMF(0x649718); /* movss */
    /* comiss xmm0, MEMF(eax + 0x1F8) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 0x1F8))) goto loc_000435E1; /* jbe: below or equal (unsigned <=) */

loc_00043521: ;
    xmm0 = MEMF(eax + 0x1F4); /* movss */
    xmm0 = xmm0 * MEMF(0x649714); /* mulss */
    xmm1 = MEMF(eax + 0x1F8); /* movss */
    xmm1 = xmm1 * MEMF(0x649710); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM8(esp + 0x13) = 1;
    xmm2 = xmm0; /* movaps */
    if ((xmm0 > xmm1)) goto loc_00043551; /* ja: above (unsigned >) */

loc_0004354E: ;
    xmm2 = xmm1; /* movaps */

loc_00043551: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x64B28C); /* mulss */
    edx = (int32_t)xmm3; /* cvttss2si */
    ecx = 0xFFFFFFF7u;
    ecx = ecx - edx;
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(0x64B288); /* mulss */
    eax = (int32_t)xmm3; /* cvttss2si */
    edx = 3;
    edx = edx - eax;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * MEMF(0x64B0B8); /* mulss */
    xmm0 = xmm0 * MEMF(0x6497E0); /* mulss */
    eax = (int32_t)xmm3; /* cvttss2si */
    edi = 0xFFFFFFF2u;
    edi = edi - eax;
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(0x64B284); /* mulss */
    xmm1 = xmm1 * MEMF(0x64B280); /* mulss */
    ebx = (int32_t)xmm3; /* cvttss2si */
    eax = 0xFFFFFFFEu;
    eax = eax - ebx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    ebx = (int32_t)xmm0; /* cvttss2si */
    eax = 0xFFFFFFF5u;
    eax = eax - ebx;
    MEM32(esp + 0x1C) = eax;
    eax = (int32_t)xmm1; /* cvttss2si */
    ebx = 4;
    ebx = ebx - eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    goto loc_000435E9;

loc_000435E1: ;
    xmm2 = MEMF(esp + 0x1C); /* movss */
    SET_LO8(eax, 0); /* xor self */

loc_000435E9: ;
    xmm0 = MEMF(0x8497DC); /* movss */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, MEM8(0x7819D5));
    MEM32(0x776158) = 0;
    MEMF(0x84B508) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00043632; /* je: equal / zero */

loc_0004360C: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = xmm2 * MEMF(0x648EA8); /* mulss */
    MEMF(0x77615C) = xmm2; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00043656; /* je: equal / zero */

loc_00043620: ;
    xmm2 = xmm2 * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm2; /* movss */
    goto loc_00043656;

loc_00043632: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00043656; /* je: equal / zero */

loc_00043646: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_00043656: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x5D4CAC);
    eax = eax - edx;
    ecx = ecx + ebp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    MEM8(0x776171) = 0x64;
    MEM8(0x776170) = 0xCD;
    MEM8(0x77616F) = 0xFF;
    MEM8(0x77616E) = 0xC8;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0004368B: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(edx + 0x3E0);
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x530);
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_000436AF; /* jne: not equal / not zero */

loc_000436A8: ;
    ecx = 0x5D4CA0;
    goto loc_000436C5;

loc_000436AF: ;
    if (CMP_NE(eax, 1)) goto loc_000436BB; /* jne: not equal / not zero */

loc_000436B4: ;
    ecx = 0x5D4C90;
    goto loc_000436C5;

loc_000436BB: ;
    if (CMP_NE(eax, 2)) goto loc_000436E4; /* jne: not equal / not zero */

loc_000436C0: ;
    ecx = 0x5D4C84;

loc_000436C5: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_000436CC: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = esi + edx;
    ecx = ebp;
    ecx = ecx - edi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_000436E1: ;
    esp = esp + 0xC;

loc_000436E4: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(edx + 0x3E0);
    if (TEST_Z(eax, eax)) goto loc_000437DF; /* je: equal / zero */

loc_000436F6: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_000437DF; /* je: equal / zero */

loc_00043704: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) goto loc_000437DF; /* je: equal / zero */

loc_00043712: ;
    PUSH32(esp, 0); sub_0032FD10(); /* call 0x0032FD10 */

loc_00043717: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    xmm1 = MEMF(0x648CE0); /* movss */
    eax = ecx + edx + 0x14;
    eax = MEM32(eax + 0xB4);
    xmm0 = MEMF(eax + 0xC); /* movss */
    xmm2 = MEMF(eax); /* movss */
    xmm3 = MEMF(eax + 0x10); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(0x648EA4); /* movss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm2 = xmm2 / xmm3; /* divss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = MEMF(0x648CE4); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00043780; /* jbe: below or equal (unsigned <=) */

loc_0004377B: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00043788;

loc_00043780: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00043788; /* jbe: below or equal (unsigned <=) */

loc_00043785: ;
    xmm0 = xmm1; /* movaps */

loc_00043788: ;
    ecx = MEM32(esp + 0x18);
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    edx = esi + ecx;
    PUSH32(esp, 0x5D4C78);
    ecx = eax + ebp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_000437A9: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(edx + 0x3E0);
    ecx = MEM32(eax + 0x568);
    eax = MEM32(ecx + 0x444);
    PUSH32(esp, 0); sub_0032FA50(); /* call 0x0032FA50 */

loc_000437C4: ;
    edx = MEM32(eax * 8 + 0x74A69C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D4C70);
    esi = esi - ebx;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_000437DC: ;
    esp = esp + 0x20;

loc_000437DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000437E3: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000437F0
 * Original: 0x000437F0 - 0x00043828 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000437F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000437F0: ;
    ecx = MEM32(eax + 0x3E0);
    SET_LO8(ecx, MEM8(ecx + 0x135));
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00043827; /* je: equal / zero */

loc_00043802: ;
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    edx = ecx + edx + -1744;
    ecx = MEM32(edx + 0x64);
    if (CMP_EQ(ecx, 0x35)) goto loc_00043825; /* je: equal / zero */

loc_00043820: ;
    if (CMP_NE(ecx, 0x1E)) goto loc_00043827; /* jne: not equal / not zero */

loc_00043825: ;
    eax = edx;

loc_00043827: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00043830
 * Original: 0x00043830 - 0x000438B4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00043830(void)
{
    int _flags = 0; /* fallback flag var */

loc_00043830: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000438B4(); return; } /* je: equal / zero */

loc_0004384B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0004385F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00043894; /* je: equal / zero */

loc_0004386A: ;
    ecx = 0x75DA70;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00043874: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00043891: ;
    esp = esp + 0x14;

loc_00043894: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_000438AD: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_000438E0
 * Original: 0x000438E0 - 0x000438F2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000438E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000438E0: ;
    eax = MEM32(edi);
    esp = esp - 0x20;
    if (TEST_NZ(eax, eax)) { sub_000438F2(); return; } /* jne: not equal / not zero */

loc_000438E9: ;
    eax = edi + 4;
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000439C0
 * Original: 0x000439C0 - 0x00043AE6 (294 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000439C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000439C0: ;
    esp = esp - 0x424;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x43C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_000439E4; /* je: equal / zero */

loc_000439DE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_000439E4: ;
    MEM32(esp + 0x34) = 0;
    ebx = 1;

loc_000439F1: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_00043A70; /* jne: not equal / not zero */

loc_00043A00: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00043ABA; /* jbe: below or equal (unsigned <=) */

loc_00043A08: ;
    esi = esi + 0x10;
    goto loc_00043A10;

    /* nop */

loc_00043A10: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x43C);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x438);
    eax = esp + 0x14;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_00043A4D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00043A62; /* je: equal / zero */

loc_00043A51: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_00043A62; /* je: equal / zero */

loc_00043A5A: ;
    MEM32(esp + 0x43C) = MEM32(esp + 0x43C) + 4;

loc_00043A62: ;
    ecx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, ecx)) goto loc_00043A10; /* jl: less (signed <) */

loc_00043A6E: ;
    goto loc_00043ABA;

loc_00043A70: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00043ABA; /* jbe: below or equal (unsigned <=) */

loc_00043A74: ;
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x438);
    edx = esp + 0x24;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esp + ebx * 4 + 0x3C) = esi;
    PUSH32(esp, 0); sub_0003C420(); /* call 0x0003C420 */

loc_00043AA9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00043AAE; /* je: equal / zero */

loc_00043AAD: ;
    ebx++;

loc_00043AAE: ;
    edx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, edx)) goto loc_00043A74; /* jl: less (signed <) */

loc_00043ABA: ;
    edi = MEM32(esp + ebx * 4 + 0x30);
    ebx--;
    if (TEST_NZ(edi, edi)) goto loc_000439F1; /* jne: not equal / not zero */

loc_00043AC7: ;
    eax = MEM32(esp + 0x43C);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x424;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00043AF0
 * Original: 0x00043AF0 - 0x00043D0C (540 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00043AF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00043AF0: ;
    esp = esp - 0x454;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x46C);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00043B14; /* je: equal / zero */

loc_00043B0E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00043B14: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_00043B21: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_00043C1A; /* jne: not equal / not zero */

loc_00043B34: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00043CE0; /* jbe: below or equal (unsigned <=) */

loc_00043B3C: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;

loc_00043B55: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x46C);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x468);
    eax = MEM32(eax);
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x38) = ecx;
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x3C); /* addss */
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0x44) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_00043C05; /* jbe: below or equal (unsigned <=) */

loc_00043BF4: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00043C05; /* je: equal / zero */

loc_00043BFD: ;
    MEM32(esp + 0x46C) = MEM32(esp + 0x46C) + 4;

loc_00043C05: ;
    edx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, edx)) goto loc_00043B55; /* jl: less (signed <) */

loc_00043C15: ;
    goto loc_00043CE0;

loc_00043C1A: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00043CE0; /* jbe: below or equal (unsigned <=) */

loc_00043C22: ;
    ecx = esp + 0x58;
    eax = esp + 0x20;
    edx = ecx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;

loc_00043C38: ;
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x468);
    eax = MEM32(eax);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = ecx;
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 + MEMF(esp + 0x2C); /* addss */
    MEM32(esp + ebx * 4 + 0x64) = esi;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
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
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, MEMF(esp + 0x40) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_00043CD0; /* jbe: below or equal (unsigned <=) */

loc_00043CCF: ;
    ebx++;

loc_00043CD0: ;
    ecx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, ecx)) goto loc_00043C38; /* jl: less (signed <) */

loc_00043CE0: ;
    edi = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(edi, edi)) goto loc_00043B21; /* jne: not equal / not zero */

loc_00043CED: ;
    eax = MEM32(esp + 0x46C);
    edx = MEM32(esp + 0x54);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x454;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00043D10
 * Original: 0x00043D10 - 0x00043D6D (93 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00043D10(void)
{
    float xmm0, xmm1;

loc_00043D10: ;
    esp = esp - 0xC;
    edx = MEM32(ecx);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm1 = MEMF(esp); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(esp + 4); /* movss */
    ecx = MEM32(esp);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 4);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(edx + 4) = ecx;
    MEMF(esp + 8) = xmm1; /* movss */
    ecx = MEM32(esp + 8);
    MEM32(edx + 8) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00043D70
 * Original: 0x00043D70 - 0x00043DD9 (105 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00043D70(void)
{
    float xmm0;

loc_00043D70: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 - MEMF(ecx); /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp + 8) = esi;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 4); /* subss */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 8); /* subss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00043DE0
 * Original: 0x00043DE0 - 0x00043E49 (105 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00043DE0(void)
{
    float xmm0;

loc_00043DE0: ;
    esp = esp - 0xC;
    xmm0 = MEMF(ecx); /* movss */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    xmm0 = xmm0 + MEMF(esp + 4); /* addss */
    edx = MEM32(edx + 8);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    MEM32(esp + 8) = esi;
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00043E50
 * Original: 0x00043E50 - 0x00044A55 (3077 bytes, 687 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00043E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00043E50: ;
    esp = esp - 0x40;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    eax = MEM32(ebp + 0x5C8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM16(ebp + 0x560) = LO16(esi);
    if (CMP_EQ(eax, esi)) goto loc_00043EFD; /* je: equal / zero */

loc_00043E71: ;
    ecx = ZX8(MEM8(ebp + 0x2A8));
    edx = MEM32(0x762E6C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    edi = MEM32(ecx + edx + 0xAC);
    ecx = ecx + edx;
    edx = MEM32(ecx + 0xA8);
    if (CMP_NE(edx, edi)) goto loc_00043EFD; /* jne: not equal / not zero */

loc_00043E97: ;
    PUSH32(esp, 0x9000);
    PUSH32(esp, esi);
    ecx = 1;
    PUSH32(esp, 0); sub_0035D760(); /* call 0x0035D760 */

loc_00043EA7: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00043EF1; /* je: equal / zero */

loc_00043EAE: ;
    if (CMP_EQ(MEM32(ebp + 0x5CC), esi)) goto loc_00043EF1; /* je: equal / zero */

loc_00043EB6: ;
    eax = MEM32(ebp + 0x5C8);
    edi = MEM32(0x84B4A0);
    eax = eax & 0xFFF;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0); sub_00047E40(); /* call 0x00047E40 */

loc_00043ED6: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp + 0x5C8));
    esp = esp + 8;
    ecx = ecx & 0xFFF;
    MEM16(ebp + 0x594) = LO16(ecx);
    goto loc_00043EFD;

loc_00043EF1: ;
    MEM32(ebp + 0x5C8) = esi;
    MEM32(ebp + 0x5CC) = esi;

loc_00043EFD: ;
    edx = ZX8(MEM8(ebp + 0x2A8));
    eax = MEM32(0x762E6C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    ecx = MEM32(eax + edx + 0xA8);
    eax = eax + edx;
    if (CMP_NE(ecx, MEM32(eax + 0xAC))) goto loc_00043F40; /* jne: not equal / not zero */

loc_00043F20: ;
    if (TEST_Z(MEM8(ebp + 0xC0), 1)) goto loc_00044A4E; /* je: equal / zero */

loc_00043F2D: ;
    edi = 0xC;
    eax = ebp;
    PUSH32(esp, 0); sub_0003D2D0(); /* call 0x0003D2D0 */

loc_00043F39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_00043F40: ;
    PUSH32(esp, ebx);

loc_00043F41: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00047EF0(); /* call 0x00047EF0 */

loc_00043F48: ;
    ebx = eax;
    eax = MEM32(ebx);
    eax--;
    if (CMP_A(eax, 9)) goto loc_00044A25; /* ja: above (unsigned >) */

loc_00043F56: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x44A58); /* switch: 10 entries, 8 targets */
    if (_jt == 0x00043F5Du) goto loc_00043F5D;
    if (_jt == 0x000440DEu) goto loc_000440DE;
    if (_jt == 0x0004440Fu) goto loc_0004440F;
    if (_jt == 0x00044420u) goto loc_00044420;
    if (_jt == 0x00044430u) goto loc_00044430;
    if (_jt == 0x00044481u) goto loc_00044481;
    if (_jt == 0x00044968u) goto loc_00044968;
    if (_jt == 0x00044A25u) goto loc_00044A25;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00043F5D: ;
    ecx = MEM32(ebp + 0x3E4);
    eax = MEM32(ecx + 0xA0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x2AC) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00043FE2; /* jne: not equal / not zero */

loc_00043F73: ;
    edi = 1;
    eax = ebp;
    PUSH32(esp, 0); sub_0003D2D0(); /* call 0x0003D2D0 */

loc_00043F7F: ;
    edx = MEM32(ebp + 0x3E4);
    esi = 0; /* xor self */
    MEM32(edx + 0x2B8) = esi;
    eax = MEM32(ebp + 0x3E4);
    MEM32(eax + 0x2B0) = esi;
    ecx = MEM32(ebp + 0x3E4);
    MEM16(ebp + 0x428) = LO16(edi);
    MEM16(ebp + 0x42C) = 2;
    MEM32(ecx + 0x2B8) = esi;
    PUSH32(esp, ebp);
    MEM32(ebp + 0x5D0) = esi;
    PUSH32(esp, 0); sub_00041220(); /* call 0x00041220 */

loc_00043FC1: ;
    edx = ZX8(MEM8(ebp + 0x2A8));
    MEM32(edx * 4 + 0x8470A4) = esi;
    eax = ZX8(MEM8(ebp + 0x2A8));
    esp = esp + 4;
    MEM32(eax * 4 + 0x8470B4) = esi;
    goto loc_00044010;

loc_00043FE2: ;
    edx = ZX8(MEM8(ebp + 0x2A8));
    eax = MEM32(ecx + 0x2B0);
    MEM32(edx * 4 + 0x8470A4) = eax;
    ecx = MEM32(ebp + 0x3E4);
    edx = ZX8(MEM8(ebp + 0x2A8));
    eax = MEM32(ecx + 0x2B8);
    MEM32(edx * 4 + 0x8470B4) = eax;

loc_00044010: ;
    eax = ZX8(MEM8(ebp + 0x2A8));
    xmm0 = MEMF(0x648D34); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    eax = eax + 0x762E70;
    MEMF(eax + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x50) = 5;
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    SET_LO8(eax, MEM8(ebp + 0x6DC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0004406C; /* je: equal / zero */

loc_00044059: ;
    esi = 0x21;
    eax = ebp;
    PUSH32(esp, 0); sub_001CEAB0(); /* call 0x001CEAB0 */

loc_00044065: ;
    MEM8(ebp + 0x6DC) = 0;

loc_0004406C: ;
    ecx = MEM32(ebp + 4);
    MEM8(ecx + 0x7F9) = 0;
    esi = ZX8(MEM8(ebp + 0x2A8));
    edi = MEM32(ebx + 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    eax = MEM32(0x8470DC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x770);
    ebx = MEM32(0x8470C4);
    PUSH32(esp, 0);
    esi = esi + eax;
    edi = edi + ebx;
    ecx = 0x1DC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000);
    ecx = 0xA;
    edx = ebp;
    PUSH32(esp, 0); sub_0003D200(); /* call 0x0003D200 */

loc_000440B7: ;
    eax = MEM32(ebp + 0x420);
    xmm0 = MEMF(0x648D34); /* movss */
    esp = esp + 0xC;
    eax = eax | 4;
    MEM32(ebp + 0x420) = eax;
    MEMF(ebp + 0x3CC) = xmm0; /* movss */
    goto loc_00044A25;

loc_000440DE: ;
    eax = MEM32(0x8470A0);
    if (TEST_Z(eax, eax)) goto loc_000440F2; /* je: equal / zero */

loc_000440E7: ;
    eax--;
    MEM32(0x8470A0) = eax;
    goto loc_00044A25;

loc_000440F2: ;
    if (CMP_NE(MEM32(ebp + 0xC0), 0x40000)) goto loc_00044A25; /* jne: not equal / not zero */

loc_00044102: ;
    edi = 0xA;
    eax = ebp;
    PUSH32(esp, 0); sub_0003D2D0(); /* call 0x0003D2D0 */

loc_0004410E: ;
    if (CMP_NE(MEM16(ebp + 0x6C4), 0)) goto loc_000443FE; /* jne: not equal / not zero */

loc_0004411C: ;
    edi = ZX8(MEM8(ebp + 0x2A8));
    esi = MEM32(ebx + 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x770);
    ecx = MEM32(0x8470DC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    edx = MEM32(0x8470C4);
    edi = edi + ecx;
    esi = esi + edx;
    ecx = 0x1DC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 4);
    if (CMP_NE(MEM8(esi + 0x7F9), 1)) goto loc_00044168; /* jne: not equal / not zero */

loc_00044155: ;
    PUSH32(esp, 0); sub_00039210(); /* call 0x00039210 */

loc_0004415A: ;
    edx = MEM32(ebp + 4);
    MEM8(ebp) = 0;
    MEM8(edx + 0x7F9) = 0;

loc_00044168: ;
    eax = ZX8(MEM8(ebp + 0x2A8));
    PUSH32(esp, 0); sub_0004E000(); /* call 0x0004E000 */

loc_00044174: ;
    ecx = MEM32(ebp + 0x3E4);
    MEM32(ebp + 0x388) = eax;
    eax = MEM32(eax + 4);
    MEM32(ebp + 0x38C) = eax;
    edx = MEM32(ecx + 0xA0);
    eax = MEM32(ebp + 4);
    MEM32(ebp + 0x2AC) = edx;
    edi = 1;
    MEM32(eax + 0x8B8) = edi;
    esi = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_000392E0(); /* call 0x000392E0 */

loc_000441AB: ;
    eax = ZX8(MEM8(ebp + 0x2A8));
    eax = eax << 2;
    edx = MEM32(eax + 0x8470B4);
    ecx = 0; /* xor self */
    if (CMP_EQ(edx, ecx)) goto loc_000441F7; /* je: equal / zero */

loc_000441C1: ;
    ecx = MEM32(ebp + 0x390);
    edx = MEM32(ebp + 0x38C);
    esi = MEM32(ebp + 0x388);
    ecx = ecx | edi;
    edx = edx | edi;
    MEM32(ebp + 0x390) = ecx;
    PUSH32(esp, 0x8000);
    ecx = 0x8000;
    MEM32(ebp + 0x38C) = edx;
    PUSH32(esp, 0); sub_0004E1F0(); /* call 0x0004E1F0 */

loc_000441F2: ;
    goto loc_000442C5;

loc_000441F7: ;
    if (CMP_EQ(MEM32(eax + 0x8470A4), ecx)) goto loc_000442AA; /* je: equal / zero */

loc_00044203: ;
    eax = MEM32(ebp + 0x2AC);
    if (CMP_EQ(eax, 0x1B)) goto loc_00044251; /* je: equal / zero */

loc_0004420E: ;
    if (CMP_EQ(eax, 0x6F)) goto loc_00044251; /* je: equal / zero */

loc_00044213: ;
    if (CMP_EQ(eax, 0x43)) goto loc_00044251; /* je: equal / zero */

loc_00044218: ;
    if (TEST_NZ(MEM8(ebp + 0x390), 1)) goto loc_00044251; /* jne: not equal / not zero */

loc_00044221: ;
    edx = MEM32(ebp + 0x3E4);
    MEM32(edx + 0x2B8) = ecx;
    eax = ZX8(MEM8(ebp + 0x2A8));
    MEM32(ebp + 0x5D0) = ecx;
    MEM32(eax * 4 + 0x8470A4) = ecx;
    edx = ZX8(MEM8(ebp + 0x2A8));
    MEM32(edx * 4 + 0x8470B4) = ecx;
    goto loc_000442BC;

loc_00044251: ;
    esi = MEM32(ebp + 0x390);
    ebx = MEM32(ebp + 0x38C);
    esi = esi | edi;
    MEM32(ebp + 0x390) = esi;
    esi = MEM32(ebp + 0x388);
    ebx = ebx | edi;
    PUSH32(esp, 0x8000);
    ecx = 0x8000;
    MEM32(ebp + 0x38C) = ebx;
    PUSH32(esp, 0); sub_0004E1F0(); /* call 0x0004E1F0 */

loc_00044282: ;
    eax = ZX8(MEM8(ebp + 0x2A8));
    edx = MEM32(eax * 4 + 0x8470A4);
    ecx = MEM32(ebp + 0x3E4);
    MEM32(ecx + 0x2B0) = edx;
    eax = MEM32(ebp + 0x2AC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001CE630(); /* call 0x001CE630 */

loc_000442A8: ;
    goto loc_000442C2;

loc_000442AA: ;
    eax = MEM32(ebp + 0x3E4);
    MEM32(eax + 0x2B8) = ecx;
    MEM32(ebp + 0x5D0) = ecx;

loc_000442BC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00041220(); /* call 0x00041220 */

loc_000442C2: ;
    esp = esp + 4;

loc_000442C5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0003EAA0(); /* call 0x0003EAA0 */

loc_000442CB: ;
    esp = esp + 4;
    if (CMP_NE(MEM16(ebp + 0x220), 2)) goto loc_000442E5; /* jne: not equal / not zero */

loc_000442D8: ;
    ecx = MEM32(ebp + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0x34) = xmm0; /* movss */
    goto loc_000442F5;

loc_000442E5: ;
    edx = MEM32(ebp + 4);
    xmm0 = MEMF(0x64936C); /* movss */
    MEMF(edx + 0x34) = xmm0; /* movss */

loc_000442F5: ;
    ecx = MEM32(ebp + 4);
    ecx = ecx + 4;
    PUSH32(esp, 0); sub_00048950(); /* call 0x00048950 */

loc_00044300: ;
    ecx = MEM32(ebp + 4);
    xmm0 = MEMF(ecx + 0x34); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00044317: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, ebp);
    MEMF(ecx + 0x8EC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0003EAA0(); /* call 0x0003EAA0 */

loc_0004432B: ;
    eax = MEM32(ebp + 0x3E0);
    ecx = MEM32(eax + 0x568);
    xmm0 = MEMF(eax + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x4D8); /* subss */
    xmm1 = MEMF(0x648E6C); /* movss */
    edx = MEM32(ebp + 4);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(edx + 0x5C) = xmm0; /* movss */
    eax = MEM32(ebp + 0x3E0);
    ecx = MEM32(eax + 0x568);
    xmm0 = MEMF(eax + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x4D8); /* subss */
    ecx = MEM32(ebp + 4);
    esp = esp + 4;
    ecx = ecx + 4;
    xmm0 = xmm0 - xmm1; /* subss */
    PUSH32(esp, 0); sub_00048980(); /* call 0x00048980 */

loc_00044389: ;
    eax = MEM32(ebp + 0x3E0);
    ecx = MEM32(ebp + 4);
    esi = MEM32(eax + 0x78);
    eax = eax + 0x78;
    ecx = ecx + 0x100;
    edx = ecx;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    MEM8(ecx + 0x8C) = 0;
    eax = MEM32(ebp + 4);
    eax = eax + 0x100;
    PUSH32(esp, 0); sub_00049C30(); /* call 0x00049C30 */

loc_000443C2: ;
    eax = MEM32(ebp + 4);
    xmm0 = MEMF(0x648E84); /* movss */
    MEMF(eax + 0x350) = xmm0; /* movss */
    MEMF(eax + 0x354) = xmm0; /* movss */
    esi = MEM32(ebp + 4);
    PUSH32(esp, 0); sub_000392E0(); /* call 0x000392E0 */

loc_000443E5: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x1D)) goto loc_00044A25; /* jne: not equal / not zero */

loc_000443F2: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_00045730(); /* call 0x00045730 */

loc_000443F9: ;
    goto loc_00044A25;

loc_000443FE: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00041EB0(); /* call 0x00041EB0 */

loc_00044405: ;
    PUSH32(esp, 0); sub_000413D0(); /* call 0x000413D0 */

loc_0004440A: ;
    goto loc_00044A25;

loc_0004440F: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + 0xC);
    MEM32(ebp + 0x3CC) = edx;
    goto loc_00044A25;

loc_00044420: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax);
    MEM32(ebp + 0x384) = ecx;
    goto loc_00044A25;

loc_00044430: ;
    ebx = MEM32(ebx + 4);
    SET_LO16(edx, MEM16(ebx + 0x10));
    MEM16(ebp + 0x6C4) = LO16(edx);
    xmm0 = MEMF(ebx + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(0x6492B0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00044473; /* jp: parity */

loc_00044450: ;
    eax = MEM32(ebp + 0x3E0);
    xmm0 = MEMF(eax + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    MEMF(ebp + 0x6B0) = xmm0; /* movss */
    goto loc_00044A25;

loc_00044473: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebp + 0x6B0) = ecx;
    goto loc_00044A25;

loc_00044481: ;
    esi = MEM32(ebx + 4);
    edx = MEM32(esi + 0x14);
    MEM32(ebp + 0x330) = edx;
    eax = MEM32(esi + 0x18);
    MEM32(ebp + 0x334) = eax;
    ecx = MEM32(esi + 0x1C);
    MEM32(ebp + 0x338) = ecx;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0004478E; /* je: equal / zero */

loc_000444A9: ;
    if (CMP_EQ(eax, 2)) goto loc_0004478E; /* je: equal / zero */

loc_000444B2: ;
    ecx = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000444E4; /* jne: not equal / not zero */

loc_000444C2: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi + 0x20); /* subss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000444D9: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */

loc_000444E4: ;
    ecx = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00044513; /* jne: not equal / not zero */

loc_000444F4: ;
    xmm0 = MEMF(esi + 0x24); /* movss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00044508: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_00044513: ;
    ecx = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00044542; /* jne: not equal / not zero */

loc_00044523: ;
    xmm0 = MEMF(esi + 0x28); /* movss */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00044537: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */

loc_00044542: ;
    eax = MEM32(ebp + 4);
    eax = eax + 4;
    PUSH32(esp, 0); sub_000484C0(); /* call 0x000484C0 */

loc_0004454D: ;
    xmm1 = MEMF(esi + 0x28); /* movss */
    xmm1 = xmm1 - MEMF(0x648E6C); /* subss */
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0);
    esp = esp - 8;
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(esi + 0x24); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x4C;
    ecx = 0; /* xor self */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E46C0(); /* call 0x003E46C0 */

loc_0004458D: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm2 = MEMF(esp + 0x54); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(esp + 0x4C); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0x50); /* movss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm4 = xmm4 - xmm6; /* subss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    MEMF(esp + 0x34) = xmm7; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm1 = xmm1 + xmm6; /* addss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 + xmm6; /* addss */
    xmm7 = xmm7 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x60) = xmm7; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm3; /* addss */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x60); /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x40) = xmm6; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x60); /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = xmm2; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x60); /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x2C); /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    esp = esp + 0xC;
    MEMF(esp + 0x38) = xmm6; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    eax = esp + 0x34;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000446AA: ;
    edx = MEM32(esi + 0x14);
    MEM32(ebp + 0x330) = edx;
    eax = MEM32(esi + 0x18);
    edx = MEM32(ebp + 4);
    MEM32(ebp + 0x334) = eax;
    ecx = MEM32(esi + 0x1C);
    MEM32(ebp + 0x338) = ecx;
    eax = MEM32(esi + 0x2C);
    MEM32(edx + 0xAC) = eax;
    eax = MEM32(ebp + 4);
    xmm0 = MEMF(eax + 0xFC); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x30); /* mulss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + 0xA0;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0xAC);
    MEMF(eax + 0xB0) = xmm0; /* movss */
    MEM32(eax + 0xA8) = ecx;
    edx = MEM32(eax + 0xD4);
    eax = eax + 0xA0;
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x30);
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = edx;
    xmm0 = MEMF(ebp + 0x330); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    MEMF(ebp + 0x2DC) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x334); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x38); /* addss */
    MEMF(ebp + 0x2E0) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x338); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x3C); /* addss */
    MEMF(ebp + 0x2E4) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x2DC);
    edx = MEM32(ebp + 0x2E0);
    eax = ebp + 0x2F4;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x2E4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    goto loc_00044863;

loc_0004478E: ;
    edx = MEM32(esi + 0x20);
    MEM32(ebp + 0x2DC) = edx;
    eax = MEM32(esi + 0x24);
    edx = MEM32(ebp + 4);
    MEM32(ebp + 0x2E0) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(ebp + 0x2E4) = ecx;
    eax = MEM32(esi + 0x30);
    MEM32(edx + 0xAC) = eax;
    eax = MEM32(ebp + 4);
    xmm0 = MEMF(eax + 0xFC); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x34); /* mulss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + 0xA0;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0xAC);
    eax = eax + 0xA0;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0x10) = xmm0; /* movss */
    edx = MEM32(eax + 0x34);
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x30);
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = edx;
    ecx = MEM32(ebp + 0x2DC);
    edx = MEM32(ebp + 0x2E0);
    eax = ebp + 0x2F4;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x2E4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00044851; /* jne: not equal / not zero */

loc_00044832: ;
    xmm0 = xmm0 - MEMF(esi + 0x2C); /* subss */
    eax = esp + 0x24;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00044846: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */

loc_00044851: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0003E3C0(); /* call 0x0003E3C0 */

loc_00044858: ;
    eax = MEM32(ebp + 4);
    eax = eax + 4;
    PUSH32(esp, 0); sub_000484C0(); /* call 0x000484C0 */

loc_00044863: ;
    edx = MEM32(esi + 4);
    if (CMP_NE(MEM8(edx + 0x76F0E0), 1)) goto loc_000448BA; /* jne: not equal / not zero */

loc_0004486F: ;
    xmm0 = MEMF(esi + 8); /* movss */
    eax = MEM32(ebp + 4);
    edx = ZX8(MEM8(ebp + 0x2A8));
    MEMF(0x76EDF4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(eax + 0xFC); /* divss */
    xmm0 = xmm0 * MEMF(eax + 0xD0); /* mulss */
    eax = MEM32(eax + 0xA8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00064330(); /* call 0x00064330 */

loc_000448B7: ;
    esp = esp + 0x10;

loc_000448BA: ;
    SET_LO8(eax, MEM8(0x762E40));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000448CA; /* je: equal / zero */

loc_000448C3: ;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_000E41B0(); /* call 0x000E41B0 */

loc_000448CA: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00044A25; /* jne: not equal / not zero */

loc_000448D7: ;
    ecx = MEM32(ebp + 0x334);
    edx = MEM32(ebp + 0x338);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ecx;
    ecx = MEM32(ebp + 0x330);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = ebp + 0x468;
    PUSH32(esp, edx);
    eax = ebp + 0x380;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = ebp + 0x470;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(0x780AB0) = 0x5D4FBC;
    MEM32(0x6C0210) = 0x25B;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x10000;
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_0004493B: ;
    eax = MEM32(ebp + 4);
    esp = esp + 0x38;
    MEM32(0x780AB0) = esi;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = 0;
    MEM32(0x74FA2C) = esi;
    PUSH32(esp, 0); sub_000390F0(); /* call 0x000390F0 */

loc_00044963: ;
    goto loc_00044A25;

loc_00044968: ;
    eax = MEM32(ebx + 4);
    ecx = ZX8(MEM8(eax + 0x17));
    MEM32(ebp + 0x590) = ecx;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0x18);
    MEM32(ebp + 0x5AC) = eax;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + 0x1C);
    MEM32(ebp + 0x5B0) = edx;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 0x20);
    MEM32(ebp + 0x598) = ecx;
    edx = MEM32(ebx + 4);
    SET_LO16(eax, MEM16(edx));
    MEM16(ebp + 0x5A0) = LO16(eax);
    ecx = MEM32(ebx + 4);
    SET_LO16(edx, MEM16(ecx + 2));
    MEM16(ebp + 0x5A2) = LO16(edx);
    eax = MEM32(ebx + 4);
    SET_LO16(ecx, MEM16(eax + 4));
    MEM16(ebp + 0x5A4) = LO16(ecx);
    edx = MEM32(ebx + 4);
    SET_LO16(eax, MEM16(edx + 6));
    MEM16(ebp + 0x5A6) = LO16(eax);
    ecx = MEM32(ebx + 4);
    SET_LO16(edx, MEM16(ecx + 8));
    MEM16(ebp + 0x5A8) = LO16(edx);
    eax = MEM32(ebx + 4);
    SET_LO16(ecx, MEM16(eax + 0xA));
    MEM16(ebp + 0x5AA) = LO16(ecx);
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0x28);
    MEM32(ebp + 0x5B4) = eax;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + 0x24);
    MEM32(ebp + 0x5B8) = edx;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 0x30);
    MEM32(ebp + 0x5BC) = ecx;
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0x2C);
    MEM32(ebp + 0x5C0) = eax;
    MEM16(ebp + 0x560) = 1;

loc_00044A25: ;
    ecx = ZX8(MEM8(ebp + 0x2A8));
    edx = MEM32(0x762E6C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    eax = ecx + edx;
    ecx = MEM32(eax + 0xA8);
    if (CMP_NE(ecx, MEM32(eax + 0xAC))) goto loc_00043F41; /* jne: not equal / not zero */

loc_00044A4D: ;
    POP32(esp, ebx);

loc_00044A4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00044A80
 * Original: 0x00044A80 - 0x00044EDB (1115 bytes, 260 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00044A80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00044A80: ;
    esp = esp - 0x20;
    if (CMP_EQ(MEM16(0x8470C8), 0)) goto loc_00044ED7; /* je: equal / zero */

loc_00044A91: ;
    eax = MEM32(edi + 0x5D0);
    if (TEST_NZ(eax, eax)) goto loc_00044ED7; /* jne: not equal / not zero */

loc_00044A9F: ;
    eax = MEM32(edi + 4);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x27C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    eax = eax + 0x248;
    PUSH32(esp, ebx);
    MEMF(eax + 0x38) = xmm0; /* movss */
    eax = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x24);
    edx = MEM32(edi + 0x28);
    PUSH32(esp, ebp);
    ebp = edi + 0x14;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(ebp) = eax;
    MEM32(edi + 0x18) = ecx;
    MEM32(edi + 0x1C) = edx;
    ebx = edi + 0x2F4;
    if (TEST_NZ(ebp, ebp)) goto loc_00044AEB; /* jne: not equal / not zero */

loc_00044AE6: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_00044AEB: ;
    if (TEST_NZ(ebx, ebx)) goto loc_00044AF4; /* jne: not equal / not zero */

loc_00044AEF: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_00044AF4: ;
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 - MEMF(ebp); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 4); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 8); /* subss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = eax;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0E50(); /* call 0x002B0E50 */

loc_00044B2F: ;
    fp_push(MEMF(edi + 0x2FC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm3 = 0.0f; /* xorps self = zero */
    fp_push(MEMF(edi + 0x2F8)); /* fld float */
    esp = esp + 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ebx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
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
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_00044B7D; /* ja: above (unsigned >) */

loc_00044B77: ;
    xmm3 = MEMF(esp + 0xC); /* movss */

loc_00044B7D: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    (void)0; /* test MEM8(edi + 0x598), 0xF - flags set for next jcc */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(ebp); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    if (TEST_Z(MEM8(edi + 0x598), 0xF)) goto loc_00044BCC; /* je: equal / zero */

loc_00044BC5: ;
    xmm7 = MEMF(edi + 0x18); /* movss */
    goto loc_00044BDC;

loc_00044BCC: ;
    xmm0 = xmm0 * MEMF(0x6493AC); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x18); /* addss */
    xmm7 = xmm0; /* movaps */

loc_00044BDC: ;
    eax = MEM32(edi + 4);
    xmm0 = MEMF(eax + 0x27C); /* movss */
    ecx = MEM32(eax + 0x8B8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm2 = xmm2 + MEMF(edi + 0x1C); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x280); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    ebx = MEM32(esp + 0x10);
    MEMF(esp + 0x24) = xmm7; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_00044C37; /* je: equal / zero */

loc_00044C1A: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x330) = xmm3; /* movss */
    MEMF(edi + 0x33C) = xmm3; /* movss */
    MEMF(edi + 0x3D0) = xmm0; /* movss */
    goto loc_00044C5E;

loc_00044C37: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x20);
    xmm0 = MEMF(edi + 0x650); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    edx = edi + 0x330;
    ecx = edi + 0x3D0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_00044C5B: ;
    esp = esp + 0xC;

loc_00044C5E: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 0x8B8);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebp = edi + 0x334;
    if (TEST_Z(eax, eax)) goto loc_00044C8B; /* je: equal / zero */

loc_00044C71: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp) = xmm7; /* movss */
    MEMF(edi + 0x340) = xmm7; /* movss */
    MEMF(edi + 0x3D4) = xmm0; /* movss */
    goto loc_00044CAE;

loc_00044C8B: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(edi + 0x650); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = edi + 0x3D4;
    PUSH32(esp, eax);
    edx = ebp;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_00044CAB: ;
    esp = esp + 0xC;

loc_00044CAE: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 0x8B8);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edi + 0x338;
    if (TEST_Z(eax, eax)) goto loc_00044CE0; /* je: equal / zero */

loc_00044CC1: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esi) = xmm0; /* movss */
    MEMF(edi + 0x344) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x3D8) = xmm0; /* movss */
    goto loc_00044D03;

loc_00044CE0: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x28);
    xmm0 = MEMF(edi + 0x650); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = edi + 0x3D8;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_00044D00: ;
    esp = esp + 0xC;

loc_00044D03: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 0x8B8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x780AB0) = 0x5D4FE8;
    MEM32(0x6C0210) = 0xBC;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x10000;
    if (TEST_NZ(eax, eax)) goto loc_00044D66; /* jne: not equal / not zero */

loc_00044D35: ;
    if (TEST_NZ(MEM32(edi + 0x118), 0x400000)) goto loc_00044D66; /* jne: not equal / not zero */

loc_00044D41: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    edx = edi + 0x37C;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x330);
    PUSH32(esp, ecx);
    eax = edi + 0x470;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00066BF0(); /* call 0x00066BF0 */

loc_00044D5F: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00044DC5; /* jne: not equal / not zero */

loc_00044D66: ;
    eax = MEM32(ebp);
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = eax;
    eax = MEM32(edi + 0x330);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi + 0x468;
    PUSH32(esp, ecx);
    ebx = edi + 0x380;
    PUSH32(esp, ebx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_00044D9D: ;
    xmm0 = MEMF(edi + 0x384); /* movss */
    esp = esp + 0x38;
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00044DBD; /* jnp: not parity */

loc_00044DB5: ;
    eax = MEM32(edi + 0x384);
    MEM32(ebx) = eax;

loc_00044DBD: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0); sub_000390F0(); /* call 0x000390F0 */

loc_00044DC5: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    edx = MEM32(edi + 4);
    MEMF(edi + 0x750) = xmm0; /* movss */
    MEMF(edi + 0x740) = xmm0; /* movss */
    MEMF(edi + 0x758) = xmm0; /* movss */
    MEMF(edi + 0x748) = xmm0; /* movss */
    xmm0 = MEMF(ebp); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x37C); /* subss */
    MEMF(edi + 0x74C) = xmm1; /* movss */
    MEMF(edi + 0x73C) = xmm1; /* movss */
    MEMF(edi + 0x754) = xmm1; /* movss */
    MEMF(edi + 0x744) = xmm1; /* movss */
    MEMF(edx + 0x250) = xmm0; /* movss */
    eax = MEM32(edi + 4);
    edx = MEM32(eax + 0x8B8);
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(0x780AB0) = ecx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ecx);
    MEM32(0x74FA2C) = ecx;
    if (CMP_EQ(edx, ecx)) goto loc_00044EC2; /* je: equal / zero */

loc_00044E58: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(eax + 0x26C); /* movss */
    POP32(esp, esi);
    MEMF(eax + 0x264) = xmm1; /* movss */
    MEMF(eax + 0x25C) = xmm0; /* movss */
    MEMF(eax + 0x24C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x270); /* movss */
    MEMF(eax + 0x254) = xmm0; /* movss */
    MEMF(eax + 0x260) = xmm0; /* movss */
    MEMF(eax + 0x258) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    POP32(esp, ebp);
    MEMF(eax + 0x268) = xmm1; /* movss */
    MEMF(eax + 0x250) = xmm1; /* movss */
    MEMF(eax + 0x29C) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00044EC2: ;
    ecx = MEM32(edi + 0x650);
    PUSH32(esp, ecx);
    esi = eax + 0x248;
    PUSH32(esp, 0); sub_0004A680(); /* call 0x0004A680 */

loc_00044ED4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00044ED7: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00044EE0
 * Original: 0x00044EE0 - 0x0004550C (1580 bytes, 365 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00044EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00044EE0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3B4);
    ecx = MEM32(eax + 0x188);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esi + 0x2A8));
    if (TEST_Z(ecx, ecx)) goto loc_00044F1C; /* je: equal / zero */

loc_00044F00: ;
    eax = MEM32(esi + 0x420);
    if (((int32_t)(eax & eax) >= 0)) goto loc_00044F11; /* jns: not sign (positive) */

loc_00044F0A: ;
    eax = eax & 0x7FFFFFFF;
    goto loc_00044F16;

loc_00044F11: ;
    eax = eax | 0x80000000u;

loc_00044F16: ;
    MEM32(esi + 0x420) = eax;

loc_00044F1C: ;
    eax = MEM32(esi + 0x420);
    if (TEST_S(eax, eax)) { sub_0004550C(); return; } /* js: sign (negative) */

loc_00044F2A: ;
    edx = MEM32(esi + 0x388);
    eax = MEM32(edx + 0x10);
    (void)0; /* cmp eax, 0xFFFFFFECu - flags set for next jcc */
    ecx = MEM32(edx + 0x14);
    if (CMP_L(eax, 0xFFFFFFECu)) goto loc_00044F42; /* jl: less (signed <) */

loc_00044F3B: ;
    if (CMP_G(eax, 0x14)) goto loc_00044F42; /* jg: greater (signed >) */

loc_00044F40: ;
    eax = 0; /* xor self */

loc_00044F42: ;
    (void)0; /* cmp ecx, 0xFFFFFFFCu - flags set for next jcc */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    if (CMP_L(ecx, 0xFFFFFFFCu)) goto loc_00044F52; /* jl: less (signed <) */

loc_00044F4B: ;
    if (CMP_G(ecx, 4)) goto loc_00044F52; /* jg: greater (signed >) */

loc_00044F50: ;
    ecx = 0; /* xor self */

loc_00044F52: ;
    xmm6 = MEMF(0x64A8C8); /* movss */
    xmm3 = MEMF(0x648F98); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648D34); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm0; /* movaps */
    /* comiss xmm7, xmm2 - sets EFLAGS */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    if ((xmm7 > xmm2)) goto loc_00044F89; /* ja: above (unsigned >) */

loc_00044F81: ;
    xmm5 = MEMF(0x648D14); /* movss */

loc_00044F89: ;
    xmm4 = (float)(int32_t)MEM32(0x7FA208); /* cvtsi2ss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm2 = MEMF(0x648D34); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    /* comiss xmm7, xmm1 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm7 > xmm1)) goto loc_00044FC3; /* ja: above (unsigned >) */

loc_00044FBB: ;
    xmm2 = MEMF(0x648D14); /* movss */

loc_00044FC3: ;
    eax = MEM32(edx + 4);
    (void)0; /* test HI8(eax), 1 - flags set for next jcc */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (TEST_Z(HI8(eax), 1)) goto loc_00045014; /* je: equal / zero */

loc_00044FE0: ;
    xmm0 = MEMF(edi * 4 + 0x8470CC); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA8); /* addss */
    MEMF(edi * 4 + 0x8470CC) = xmm0; /* movss */
    xmm1 = MEMF(esi + 0x334); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esi + 0x334) = xmm1; /* movss */
    goto loc_00045052;

loc_00045014: ;
    if (TEST_Z(HI8(eax), 2)) goto loc_00045049; /* je: equal / zero */

loc_00045019: ;
    xmm0 = MEMF(edi * 4 + 0x8470CC); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA8); /* addss */
    MEMF(edi * 4 + 0x8470CC) = xmm0; /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x334); /* addss */
    MEMF(esi + 0x334) = xmm0; /* movss */
    goto loc_00045052;

loc_00045049: ;
    MEMF(edi * 4 + 0x8470CC) = xmm7; /* movss */

loc_00045052: ;
    eax = MEM32(esi + 0x388);
    ecx = MEM32(eax + 0x18);
    (void)0; /* cmp ecx, 0xFFFFFFFCu - flags set for next jcc */
    eax = MEM32(eax + 0x1C);
    if (CMP_L(ecx, 0xFFFFFFFCu)) goto loc_0004506A; /* jl: less (signed <) */

loc_00045063: ;
    if (CMP_G(ecx, 4)) goto loc_0004506A; /* jg: greater (signed >) */

loc_00045068: ;
    ecx = 0; /* xor self */

loc_0004506A: ;
    (void)0; /* cmp eax, 0xFFFFFFFCu - flags set for next jcc */
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    if (CMP_L(eax, 0xFFFFFFFCu)) goto loc_0004507A; /* jl: less (signed <) */

loc_00045073: ;
    if (CMP_G(eax, 4)) goto loc_0004507A; /* jg: greater (signed >) */

loc_00045078: ;
    eax = 0; /* xor self */

loc_0004507A: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x60); /* movss */
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00045095: ;
    xmm5 = xmm5 * MEMF(0x64A8C8); /* mulss */
    xmm5 = xmm5 * MEMF(0x648F10); /* mulss */
    /* comiss xmm7, xmm5 - sets EFLAGS */
    xmm0 = MEMF(0x648D34); /* movss */
    if ((xmm7 > xmm5)) goto loc_000450BA; /* ja: above (unsigned >) */

loc_000450B2: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_000450BA: ;
    SET_LO8(eax, MEM8(ecx + 0x96));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000450F7; /* jne: not equal / not zero */

loc_000450C4: ;
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000450EC: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0x60) = xmm0; /* movss */

loc_000450F7: ;
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x38); /* movss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004510E: ;
    xmm6 = xmm6 * MEMF(0x64A8C8); /* mulss */
    xmm6 = xmm6 * MEMF(0x648F10); /* mulss */
    /* comiss xmm7, xmm6 - sets EFLAGS */
    xmm0 = MEMF(0x648D34); /* movss */
    if ((xmm7 > xmm6)) goto loc_00045133; /* ja: above (unsigned >) */

loc_0004512B: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_00045133: ;
    xmm1 = MEMF(0x64A8C4); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00045163; /* ja: above (unsigned >) */

loc_00045156: ;
    xmm1 = MEMF(0x64A8C0); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00045166; /* jbe: below or equal (unsigned <=) */

loc_00045163: ;
    xmm0 = xmm1; /* movaps */

loc_00045166: ;
    SET_LO8(eax, MEM8(ecx + 0x96));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004518A; /* jne: not equal / not zero */

loc_00045170: ;
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004517F: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0x38) = xmm0; /* movss */

loc_0004518A: ;
    xmm1 = MEMF(edi * 4 + 0x8470CC); /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_000451A3; /* ja: above (unsigned >) */

loc_000451A0: ;
    xmm0 = xmm1; /* movaps */

loc_000451A3: ;
    MEMF(edi * 4 + 0x8470CC) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(ecx + 0x5C); /* movss */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000451C3: ;
    xmm0 = MEMF(ecx + 0x34); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000451D7: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, 0);
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x4C;
    ecx = 0; /* xor self */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E46C0(); /* call 0x003E46C0 */

loc_0004520E: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(esp + 0x54); /* movss */
    xmm7 = MEMF(esp + 0x4C); /* movss */
    xmm4 = MEMF(esp + 0x50); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm5 + xmm4; /* addss */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0x24); /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0x4C); /* movss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm1 = xmm1 + xmm7; /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm7 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x20); /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    MEMF(esp + 0x34) = xmm7; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x28) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x4C); /* movss */
    xmm3 = xmm3 * MEMF(esp + 0x28); /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm7 = xmm7 - xmm6; /* subss */
    esp = esp + 0xC;
    MEMF(esp + 0x2C) = xmm7; /* movss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    ecx = esp + 0x34;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    edx = ecx;
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edi = esi + 0x2F4;
    ebp = esi + 0x330;
    eax = esp + 0x28;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x28;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    edx = ecx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ecx;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x34;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x28;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x34;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = esi + 0x2DC;
    MEM32(ecx) = edx;
    edx = MEM32(edi + 8);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEMF(esi + 0x3C0) = xmm2; /* movss */
    g_seh_ebp = ebp; sub_00045531(); return; /* tail jmp 0x00045531 */

}

/**
 * sub_00045730
 * Original: 0x00045730 - 0x00045839 (265 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00045730(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00045730: ;
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(ebx + 0x2A8));
    PUSH32(esp, 0); sub_001FD0F0(); /* call 0x001FD0F0 */

loc_0004573D: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x46)) goto loc_000457DD; /* je: equal / zero */

loc_0004574A: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004575E; /* jne: not equal / not zero */

loc_00045756: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_0004575E: ;
    xmm1 = MEMF(0x7F9F5C); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * MEMF(0x648D38); /* mulss */
    eax = (int32_t)xmm2; /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = (int32_t)xmm1; /* cvttss2si */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp) = edx;
    fp_push((double)SMEM32(esp)); /* fild */
    edx = MEM32(ebx + 4);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(0x648E18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edx + 0xAC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebx + 4);
    eax = eax + 0xA0;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x34) = (float)fp_top(); fp_popp(); /* fstp */

loc_000457DD: ;
    eax = MEM32(0x7FA21C);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = esi;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00048F90(); /* call 0x00048F90 */

loc_000457FE: ;
    edi = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_00038710(); /* call 0x00038710 */

loc_00045807: ;
    xmm0 = MEMF(esi + 0x8F0); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00045835; /* jbe: below or equal (unsigned <=) */

loc_00045817: ;
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x8F0) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0004582D; /* jbe: below or equal (unsigned <=) */

loc_0004582A: ;
    xmm0 = xmm1; /* movaps */

loc_0004582D: ;
    MEMF(esi + 0x8F0) = xmm0; /* movss */

loc_00045835: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00045840
 * Original: 0x00045840 - 0x0004584E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00045840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00045840: ;
    ecx = MEM32(0x8471EC);
    if (TEST_NZ(ecx, ecx)) { sub_0004584E(); return; } /* jne: not equal / not zero */

loc_0004584A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00045854(); return; /* tail jmp 0x00045854 */

}

/**
 * sub_00045920
 * Original: 0x00045920 - 0x0004598A (106 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00045920(void)
{
    int _flags = 0; /* fallback flag var */

loc_00045920: ;
    ecx = MEM32(0x8470DC);
    eax = 0; /* xor self */
    ecx = ecx + 0x3E0;
    edi = edi;

loc_00045930: ;
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_0004593C; /* je: equal / zero */

loc_00045935: ;
    MEM8(eax + 0x762E40) = 0;

loc_0004593C: ;
    eax++;
    ecx = ecx + 0x770;
    if (CMP_B(eax, 4)) goto loc_00045930; /* jb: below (unsigned <) */

loc_00045948: ;
    PUSH32(esp, 0); sub_00047010(); /* call 0x00047010 */

loc_0004594D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xAF);
    PUSH32(esp, 0x5D503C);
    PUSH32(esp, 0x1DC0);
    MEM32(0x8470E0) = 0;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0004596D: ;
    edx = eax;
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_00045983; /* je: equal / zero */

loc_00045976: ;
    PUSH32(esp, edi);
    ecx = 0x770;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00045983: ;
    MEM32(0x8470C4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00045990
 * Original: 0x00045990 - 0x000459E0 (80 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00045990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00045990: ;
    SET_LO8(eax, MEM8(esp + 8));
    esp = esp - 0x14C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x158);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ebp + 0x2A8) = LO8(eax);
    edi = 0; /* xor self */
    esi = ebp + 0x222;
    ebx = 0x15;

loc_000459B8: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0003D2D0(); /* call 0x0003D2D0 */

loc_000459BF: ;
    MEM16(esi) = 0x3E7;
    edi++;
    esi = esi + 2;
    ebx--;
    if ((ebx != 0)) goto loc_000459B8; /* jne: not equal / not zero */

loc_000459CB: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x1D)) { sub_000459E0(); return; } /* jne: not equal / not zero */

loc_000459D4: ;
    MEM32(ebp + 0xC0) = 0x80000;
    g_seh_ebp = ebp; sub_000459EA(); return; /* tail jmp 0x000459EA */

}

/**
 * sub_00045E80
 * Original: 0x00045E80 - 0x000460F6 (630 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00045E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00045E80: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edx = MEM32(esi + 4);
    ecx = 1;
    MEM32(edx + 0x8B8) = ecx;
    edx = eax;
    ebx = MEM32(edx);
    ebp = esi + 0x330;
    edi = ebp;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    edi = MEM32(eax);
    edx = esi + 0x14;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp;
    edi = MEM32(eax);
    PUSH32(esp, ebx);
    edx = esi + 0x33C;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = edi;
    MEM8(0x84B538) = LO8(ecx);
    ecx = MEM32(esi + 0x334);
    PUSH32(esp, ecx);
    MEM32(edx + 8) = eax;
    edx = MEM32(esi + 0x338);
    PUSH32(esp, edx);
    eax = ecx;
    ecx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x468;
    PUSH32(esp, edx);
    eax = esi + 0x380;
    PUSH32(esp, eax);
    edi = esi + 0x374;
    PUSH32(esp, edi);
    ecx = esi + 0x470;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(0x780AB0) = 0x5D503C;
    MEM32(0x6C0210) = 0x17C;
    MEM32(0x74FA2C) = 0x10000;
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_00045F3E: ;
    xmm0 = MEMF(edi); /* movss */
    eax = MEM32(esp + 0x54);
    esp = esp + 0x38;
    eax = eax + 0x78;
    MEMF(esi + 0x37C) = xmm0; /* movss */
    MEMF(esi + 0x378) = xmm0; /* movss */
    MEM32(0x780AB0) = ebx;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    ecx = esi + 0x2DC;
    edx = eax;
    ebx = MEM32(edx);
    edi = ecx;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    edi = esi + 0x2F4;
    ebx = MEM32(eax);
    edx = edi;
    MEM32(edx) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edx + 4) = ebx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx);
    edx = esi + 0x2E8;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    eax = edi;
    ecx = MEM32(eax);
    edx = esi + 0x318;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    edx = ebp;
    eax = MEM32(edx);
    ecx = esi + 0x324;
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0); sub_0003DF80(); /* call 0x0003DF80 */

loc_00045FF5: ;
    eax = esi;
    PUSH32(esp, 0); sub_0003E1A0(); /* call 0x0003E1A0 */

loc_00045FFC: ;
    PUSH32(esp, 0); sub_0003E0C0(); /* call 0x0003E0C0 */

loc_00046001: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0003CD50(); /* call 0x0003CD50 */

loc_00046008: ;
    edx = MEM32(esp + 0x1C);
    xmm0 = MEMF(edx + 0x114); /* movss */
    eax = MEM32(esi + 4);
    xmm5 = MEMF(0x648E6C); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    ecx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004605E; /* jne: not equal / not zero */

loc_00046038: ;
    xmm0 = MEMF(edx + 0x114); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00046053: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */

loc_0004605E: ;
    ecx = MEM32(esi + 4);
    xmm4 = MEMF(0x64936C); /* movss */
    MEMF(ecx + 0x34) = xmm4; /* movss */
    ecx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00046098; /* jne: not equal / not zero */

loc_0004607E: ;
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm4; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004608D: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_00046098: ;
    eax = MEM32(esi + 0x3E0);
    ecx = MEM32(eax + 0x568);
    MEMF(ecx + 0x25C) = xmm4; /* movss */
    xmm0 = MEMF(edx + 0x114); /* movss */
    edx = MEM32(esi + 0x3E0);
    eax = MEM32(edx + 0x568);
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(eax + 0x258) = xmm0; /* movss */
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x13)) goto loc_000460EF; /* je: equal / zero */

loc_000460D6: ;
    if (CMP_EQ(eax, 0x2C)) goto loc_000460EF; /* je: equal / zero */

loc_000460DB: ;
    if (CMP_EQ(eax, 0x37)) goto loc_000460EF; /* je: equal / zero */

loc_000460E0: ;
    if (CMP_EQ(eax, 0x39)) goto loc_000460EF; /* je: equal / zero */

loc_000460E5: ;
    if (CMP_EQ(eax, 0x3D)) goto loc_000460EF; /* je: equal / zero */

loc_000460EA: ;
    if (CMP_NE(eax, 0x41)) { sub_000460F6(); return; } /* jne: not equal / not zero */

loc_000460EF: ;
    edx = 1;
    g_seh_ebp = ebp; sub_000460FB(); return; /* tail jmp 0x000460FB */

}

/**
 * sub_00046240
 * Original: 0x00046240 - 0x0004624A (10 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00046240(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00046240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00046250(); return; /* tail jmp 0x00046250 */

}

/**
 * sub_000463E0
 * Original: 0x000463E0 - 0x00046464 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000463E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000463E0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00046464(); return; } /* je: equal / zero */

loc_000463FB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0004640F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00046444; /* je: equal / zero */

loc_0004641A: ;
    ecx = 0x75DA8C;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00046424: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00046441: ;
    esp = esp + 0x14;

loc_00046444: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0004645D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_00046490
 * Original: 0x00046490 - 0x00046534 (164 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00046490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00046490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_00047110(); /* call 0x00047110 */

loc_000464A9: ;
    if (CMP_NE(LO8(eax), 1)) { sub_00046534(); return; } /* jne: not equal / not zero */

loc_000464B1: ;
    edx = ZX8(MEM8(ebx + 0x2A8));
    xmm0 = MEMF(0x648EF4); /* movss */
    eax = edx + edx * 2;
    eax = eax << 3;
    xmm1 = MEMF(eax + 0x771338); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x771334); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x771330); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0xDC;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0004650A: ;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    ecx = MEM32(eax * 4 + 0x762E44);
    edx = edx << 6;
    eax = ecx + edx;
    PUSH32(esp, eax);
    edx = esp + 0xD4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0004652D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00047010
 * Original: 0x00047010 - 0x0004701D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047010(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00047010: ;
    xmm0 = MEMF(0x6492C4); /* movss */
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_00047020(); return; /* tail jmp 0x00047020 */

}

/**
 * sub_00047070
 * Original: 0x00047070 - 0x000470C1 (81 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047070(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00047070: ;
    if (CMP_NE(MEM8(esi + 0x30), 2)) goto loc_00047097; /* jne: not equal / not zero */

loc_00047076: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEMF(esi + 0x40) = xmm0; /* movss */
    MEMF(esi + 0x44) = xmm0; /* movss */
    MEMF(esi + 0x48) = xmm0; /* movss */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    MEMF(esi + 0x50) = xmm0; /* movss */

loc_00047097: ;
    eax = MEM32(esp + 4);
    MEM32(esi + 0x34) = eax;
    MEM8(esi + 0x30) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000470A7: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    if (TEST_NZ(LO8(eax), 1)) goto loc_000470BB; /* jne: not equal / not zero */

loc_000470B3: ;
    xmm0 = MEMF(0x648D34); /* movss */

loc_000470BB: ;
    MEMF(esi + 0x38) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000470D0
 * Original: 0x000470D0 - 0x00047103 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000470D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000470D0: ;
    ecx = ZX8(MEM8(eax + 0x30));
    ecx--;
    if ((ecx == 0)) goto loc_000470FA; /* je: equal / zero */

loc_000470D7: ;
    ecx--;
    if ((ecx != 0)) goto loc_00047102; /* jne: not equal / not zero */

loc_000470DA: ;
    SET_LO8(ecx, MEM8(eax + 0x31));
    edx = MEM32(eax + 0x34);
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 0x31) = LO8(ecx);
    PUSH32(esp, esi);
    esi = MEM32(edx * 4 + 0x762E4C);
    ecx = ZX8(LO8(ecx));
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_L(ecx, esi)) goto loc_00047102; /* jl: less (signed <) */

loc_000470F5: ;
    MEM8(eax + 0x30) = 0;
    esp += 4; return; /* ret */

loc_000470FA: ;
    MEM8(eax + 0x31) = 0;
    MEM8(eax + 0x30) = 2;

loc_00047102: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00047110
 * Original: 0x00047110 - 0x00047154 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047110(void)
{
    int _flags = 0; /* fallback flag var */

loc_00047110: ;
    ecx = MEM32(eax + 4);
    if (CMP_NE(MEM8(ecx + 0x700), 1)) { sub_00047154(); return; } /* jne: not equal / not zero */

loc_0004711C: ;
    edx = ZX8(MEM8(eax + 0x2A8));
    PUSH32(esp, esi);
    esi = ecx + 0x6C0;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FA230);
    PUSH32(esp, edi);
    edi = MEM32(ecx * 4 + 0x762E44);
    edx = edx << 6;
    edi = edi + edx;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(eax + 4);
    POP32(esp, edi);
    MEM8(eax + 0x700) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00047160
 * Original: 0x00047160 - 0x0004738F (559 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047160(void)
{
    uint32_t ebp;
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

loc_00047160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x3E4);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_00047388; /* je: equal / zero */

loc_0004717F: ;
    edx = esi + 0x21C;
    PUSH32(esp, 0); sub_002B0CB0(); /* call 0x002B0CB0 */

loc_0004718A: ;
    fp_push(MEMF(esi + 0x224)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    xmm4 = MEMF(0x648E6C); /* movss */
    /* fld st(0) */
    xmm5 = xmm0; /* movaps */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm5 = xmm5 - xmm4; /* subss */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_push(MEMF(0x648CF8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000471C6; /* jp: parity */

loc_000471C1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    goto loc_000471F9;

loc_000471C6: ;
    fp_push(MEMF(esi + 0x224)); /* fld float */
    eax = MEM32(esi + 0x220);
    fp_push(MEMF(edx)); /* fld float */
    PUSH32(esp, ecx);
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_000471EE: ;
    xmm0 = xmm0 * MEMF(0x64934C); /* mulss */
    esp = esp + 8;

loc_000471F9: ;
    ecx = ZX16(MEM16(esi + 0x2CC));
    edi = (uint32_t)((int32_t)edi * (int32_t)0xD8);
    xmm1 = MEMF(ebx + 0x40); /* movss */
    xmm2 = MEMF(ebx + 0x630); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    edx = MEM32(ebp + 0xC);
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x649D8C); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(ebx + 0x44); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 - MEMF(ebx + 0x62C); /* subss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm4 = MEMF(0x648D10); /* movss */
    MEMF(ebx + 0x3BC) = xmm1; /* movss */
    eax = MEM32(edi + edx + 0xC8);
    xmm1 = MEMF(eax + 0x34); /* movss */
    esi = MEM32(esi + 0x2B4);
    esi--;
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x40); /* movss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    if ((esi == 0)) goto loc_00047286; /* je: equal / zero */

loc_00047283: ;
    esi--;
    if ((esi != 0)) goto loc_0004728E; /* jne: not equal / not zero */

loc_00047286: ;
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */

loc_0004728E: ;
    xmm3 = MEMF(0x648E18); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 8;
    xmm2 = xmm2 + xmm5; /* addss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x4C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_000472D8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x24;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00047307: ;
    if (TEST_Z(MEM8(ebx + 0xC0), 0x20)) goto loc_00047339; /* je: equal / zero */

loc_00047310: ;
    ecx = MEM32(ebx + 0x3E0);
    edx = MEM32(ebx + 0x3E4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = edx + 0x21C;
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    eax = 1;
    PUSH32(esp, 0); sub_001A8410(); /* call 0x001A8410 */

loc_00047334: ;
    esp = esp + 0xC;
    goto loc_00047375;

loc_00047339: ;
    eax = MEM32(ebx + 0x3E4);
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 0x21C) = xmm0; /* movss */
    ecx = MEM32(ebx + 0x3E4);
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(ecx + 0x220) = xmm0; /* movss */
    edx = MEM32(ebx + 0x3E4);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(edx + 0x224) = xmm0; /* movss */

loc_00047375: ;
    ebx = MEM32(ebx + 0x3E4);
    eax = ebx + 0x21C;
    ebx = eax;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00047388: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_00047390
 * Original: 0x00047390 - 0x00047475 (229 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047390(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00047390: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    PUSH32(esp, edi);
    eax = eax << 2;
    edi = 0x762E48;
    edi = edi - eax;
    eax = ZX8(MEM8(esi + 0x2A8));
    ebx = MEM32(edi);
    eax = eax << 6;
    xmm3 = MEMF(eax + ebx + 4); /* movss */
    xmm5 = MEMF(eax + ebx + 0x10); /* movss */
    xmm0 = MEMF(eax + ebx + 0x14); /* movss */
    xmm1 = MEMF(eax + ebx + 0x24); /* movss */
    xmm7 = MEMF(eax + ebx + 0x18); /* movss */
    xmm2 = MEMF(eax + ebx + 8); /* movss */
    xmm4 = MEMF(eax + ebx); /* movss */
    xmm6 = MEMF(eax + ebx + 0x20); /* movss */
    eax = eax + ebx;
    MEMF(esp + 0xC) = xmm3; /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm5 = xmm5 * xmm3; /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x28); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = MEMF(0x648D34); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm5 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = MEMF(esp + 0x2C); /* movss */
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    esi = esi + 0x330;
    xmm1 = xmm1 + xmm7; /* addss */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    MEMF(ecx + 8) = xmm1; /* movss */
    xmm2 = xmm2 + xmm4; /* addss */
    MEMF(ecx) = xmm2; /* movss */
    ecx = MEM32(esi);
    MEM32(edx) = ecx;
    eax = MEM32(esi + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 8) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00047480
 * Original: 0x00047480 - 0x00047549 (201 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00047480: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x3E4);
    if (TEST_Z(eax, eax)) goto loc_00047543; /* je: equal / zero */

loc_0004749B: ;
    if (TEST_NZ(ebx, ebx)) goto loc_000474A4; /* jne: not equal / not zero */

loc_0004749F: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_000474A4: ;
    if (TEST_NZ(edi, edi)) goto loc_000474AD; /* jne: not equal / not zero */

loc_000474A8: ;
    PUSH32(esp, 0); sub_0042B5F2(); /* call 0x0042B5F2 */

loc_000474AD: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 4); /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 8); /* subss */
    eax = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = eax;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0E50(); /* call 0x002B0E50 */

loc_000474E8: ;
    ecx = MEM32(ebp + 0x3E4);
    edx = MEM32(edi);
    ecx = ecx + 0x234;
    MEM32(ecx) = edx;
    eax = MEM32(edi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(ebp + 0x3E4);
    ecx = MEM32(ebx);
    eax = eax + 0x228;
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(ebp + 0x3E4);
    eax = MEM32(esp + 0x10);
    esp = esp + 4;
    edx = edx + 0x21C;
    MEM32(edx) = eax;
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 8) = eax;
    POP32(esp, esi);

loc_00047543: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00047550
 * Original: 0x00047550 - 0x000475B8 (104 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00047550: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0xC0);
    (void)0; /* test HI8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    edx = 3;
    if (TEST_NZ(HI8(eax), 1)) { sub_000475B8(); return; } /* jne: not equal / not zero */

loc_00047562: ;
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x8C4));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000475A6; /* jne: not equal / not zero */

loc_0004756F: ;
    SET_LO8(ebx, MEM8(eax + 0x8C5));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000475A6; /* jne: not equal / not zero */

loc_00047579: ;
    if (CMP_NE(MEM16(ecx + 0x220), LO16(edx))) goto loc_00047594; /* jne: not equal / not zero */

loc_00047582: ;
    xmm5 = MEMF(0x649388); /* movss */
    xmm4 = MEMF(0x649354); /* movss */
    g_seh_ebp = ebp; sub_000475C4(); return; /* tail jmp 0x000475C4 */

loc_00047594: ;
    xmm5 = MEMF(0x6497D4); /* movss */
    xmm4 = MEMF(0x648D74); /* movss */
    g_seh_ebp = ebp; sub_000475C4(); return; /* tail jmp 0x000475C4 */

loc_000475A6: ;
    xmm5 = MEMF(0x649448); /* movss */
    xmm4 = MEMF(0x64944C); /* movss */
    g_seh_ebp = ebp; sub_000475C4(); return; /* tail jmp 0x000475C4 */

}

/**
 * sub_00047640
 * Original: 0x00047640 - 0x000476A4 (100 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00047640: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0xC0);
    (void)0; /* test HI8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_NZ(HI8(eax), 1)) { sub_000476A4(); return; } /* jne: not equal / not zero */

loc_0004764D: ;
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x8C4));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00047692; /* jne: not equal / not zero */

loc_0004765A: ;
    SET_LO8(ebx, MEM8(eax + 0x8C5));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00047692; /* jne: not equal / not zero */

loc_00047664: ;
    if (CMP_NE(MEM16(ecx + 0x220), 3)) goto loc_00047680; /* jne: not equal / not zero */

loc_0004766E: ;
    xmm5 = MEMF(0x649388); /* movss */
    xmm4 = MEMF(0x649354); /* movss */
    g_seh_ebp = ebp; sub_000476B0(); return; /* tail jmp 0x000476B0 */

loc_00047680: ;
    xmm5 = MEMF(0x6497D4); /* movss */
    xmm4 = MEMF(0x648D74); /* movss */
    g_seh_ebp = ebp; sub_000476B0(); return; /* tail jmp 0x000476B0 */

loc_00047692: ;
    xmm5 = MEMF(0x649448); /* movss */
    xmm4 = MEMF(0x64944C); /* movss */
    g_seh_ebp = ebp; sub_000476B0(); return; /* tail jmp 0x000476B0 */

}

/**
 * sub_00047730
 * Original: 0x00047730 - 0x00047DB3 (1667 bytes, 392 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00047730: ;
    esp = esp - 0x34;
    xmm2 = MEMF(0x648EA4); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    eax = MEM32(ebp + 0x3E0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    SET_LO8(ebx, MEM8(edi + 0x8CE));
    PUSH32(esp, eax);
    MEM8(esp + 0x16) = LO8(ebx);
    PUSH32(esp, 0); sub_002F9010(); /* call 0x002F9010 */

loc_0004775C: ;
    xmm7 = MEMF(0x648EBC); /* movss */
    edx = MEM32(0x7FA1F8);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x8C6));
    SET_LO8(ecx, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(ecx);
    if (CMP_NE(LO8(eax), 1)) goto loc_0004785D; /* jne: not equal / not zero */

loc_00047784: ;
    if (CMP_NE(edx, 0x10)) goto loc_0004785D; /* jne: not equal / not zero */

loc_0004778D: ;
    MEM8(esp + 0x11) = 1;
    xmm2 = xmm7; /* movaps */

loc_00047795: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_000477A6; /* jne: not equal / not zero */

loc_00047799: ;
    if (CMP_NE(edx, 1)) goto loc_000477A6; /* jne: not equal / not zero */

loc_0004779E: ;
    xmm2 = MEMF(0x648EC0); /* movss */

loc_000477A6: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000477B2; /* je: equal / zero */

loc_000477AA: ;
    xmm2 = MEMF(0x64925C); /* movss */

loc_000477B2: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000477BE; /* je: equal / zero */

loc_000477B6: ;
    xmm2 = MEMF(0x648F8C); /* movss */

loc_000477BE: ;
    eax = MEM32(ebp + 4);
    xmm0 = MEMF(eax + 0x29C); /* movss */
    ecx = MEM32(eax + 0x8B4);
    xmm6 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(edi + 0x8EC); /* movss */
    xmm3 = MEMF(ecx + 0x44); /* movss */
    xmm3 = xmm3 * MEMF(0x6493AC); /* mulss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_00047806; /* jp: parity */

loc_000477F6: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm1 = xmm0; /* movaps */

loc_00047806: ;
    SET_LO8(eax, MEM8(edi + 0x8C7));
    SET_LO8(edx, MEM8(edi + 0x8C5));
    SET_LO8(ebx, MEM8(edi + 0x8C4));
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(ebp + 0xC0);
    (void)0; /* test HI8(eax), 1 - flags set for next jcc */
    MEM8(esp + 0x48) = LO8(edx);
    if (TEST_NZ(HI8(eax), 1)) goto loc_00047C0B; /* jne: not equal / not zero */

loc_0004782F: ;
    edx = esp + 0x18;
    esi = esp + 0x28;
    ecx = ebp;
    PUSH32(esp, 0); sub_00047DC0(); /* call 0x00047DC0 */

loc_0004783E: ;
    xmm5 = MEMF(esp + 0x28); /* movss */
    xmm3 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm5, xmm3 - sets EFLAGS */
    xmm0 = MEMF(esp + 0x18); /* movss */
    if ((xmm5 <= xmm3)) goto loc_00047867; /* jbe: below or equal (unsigned <=) */

loc_00047855: ;
    MEMF(esp + 0x14) = xmm5; /* movss */
    goto loc_00047872;

loc_0004785D: ;
    MEM8(esp + 0x11) = 0;
    goto loc_00047795;

loc_00047867: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00047872; /* jbe: below or equal (unsigned <=) */

loc_0004786C: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_00047872: ;
    /* comiss xmm5, xmm1 - sets EFLAGS */
    if ((xmm5 <= xmm1)) goto loc_0004787C; /* jbe: below or equal (unsigned <=) */

loc_00047877: ;
    xmm1 = xmm5; /* movaps */
    goto loc_00047884;

loc_0004787C: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00047884; /* jbe: below or equal (unsigned <=) */

loc_00047881: ;
    xmm1 = xmm0; /* movaps */

loc_00047884: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000478C8; /* jne: not equal / not zero */

loc_00047888: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000478C8; /* jne: not equal / not zero */

loc_00047890: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000478C8; /* jne: not equal / not zero */

loc_00047898: ;
    xmm3 = MEMF(edi + 0x168); /* movss */
    xmm3 = xmm3 * MEMF(0x648CF0); /* mulss */
    xmm4 = MEMF(0x546060); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_000478B8; /* jbe: below or equal (unsigned <=) */

loc_000478B5: ;
    xmm3 = xmm4; /* movaps */

loc_000478B8: ;
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEMF(esp + 0x14) = xmm4; /* movss */

loc_000478C8: ;
    MEMF(edi + 0x8EC) = xmm1; /* movss */
    ecx = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(ecx + 0x7F8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00047C03; /* jne: not equal / not zero */

loc_000478E1: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00047C03; /* jne: not equal / not zero */

loc_000478E9: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00047C03; /* jne: not equal / not zero */

loc_000478F5: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00047C03; /* jne: not equal / not zero */

loc_00047901: ;
    if (CMP_NE(MEM16(ebp + 0x220), 3)) goto loc_00047C03; /* jne: not equal / not zero */

loc_0004790F: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00047925; /* je: equal / zero */

loc_00047917: ;
    xmm3 = xmm7; /* movaps */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    xmm2 = xmm7; /* movaps */
    goto loc_0004793E;

loc_00047925: ;
    xmm1 = MEMF(0x649A18); /* movss */
    xmm2 = xmm2 + MEMF(0x649A14); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm3 = xmm1; /* movaps */

loc_0004793E: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    MEMF(esp + 0x30) = xmm1; /* movss */
    if ((xmm6 <= xmm0)) goto loc_0004795F; /* jbe: below or equal (unsigned <=) */

loc_0004795A: ;
    xmm0 = xmm6; /* movaps */
    goto loc_0004796F;

loc_0004795F: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0004796F; /* jbe: below or equal (unsigned <=) */

loc_0004796C: ;
    xmm0 = xmm1; /* movaps */

loc_0004796F: ;
    edx = MEM32(ecx + 0x60);
    xmm2 = xmm2 - xmm3; /* subss */
    xmm1 = xmm2; /* movaps */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    eax = esp + 0x20;
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004799A: ;
    eax = MEM32(ecx + 0x10);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000479AA: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x14);
    xmm1 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = ebp + 0x2F4;
    PUSH32(esp, eax);
    esi = esp + 0x48;
    PUSH32(esp, 0); sub_00038D90(); /* call 0x00038D90 */

loc_000479D0: ;
    eax = MEM32(ebp + 4);
    xmm0 = MEMF(eax + 0x154); /* movss */
    xmm1 = MEMF(eax + 0x160); /* movss */
    if (CMP_NE(MEM8(esp + 0x4C), 1)) goto loc_00047B1C; /* jne: not equal / not zero */

loc_000479EE: ;
    xmm2 = MEMF(0x649430); /* movss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00047A0C; /* jp: parity */

loc_000479FF: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00047B1C; /* jnp: not parity */

loc_00047A0C: ;
    eax = MEM32(ebp + 4);
    xmm0 = xmm0 - MEMF(eax + 0x190); /* subss */
    xmm1 = xmm1 - MEMF(eax + 0x190); /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00047A33; /* jbe: below or equal (unsigned <=) */

loc_00047A2A: ;
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */

loc_00047A33: ;
    xmm1 = MEMF(esp + 0x3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00047B1C; /* jbe: below or equal (unsigned <=) */

loc_00047A42: ;
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm2 + MEMF(0x648D80); /* addss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    if ((xmm1 > xmm2)) goto loc_00047BD9; /* ja: above (unsigned >) */

loc_00047A6B: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00047BD9; /* ja: above (unsigned >) */

loc_00047A74: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm2; /* subss */
    xmm4 = xmm4 / MEMF(esp + 0x30); /* divss */
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 > xmm4)) goto loc_00047A96; /* ja: above (unsigned >) */

loc_00047A89: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_00047A99; /* jbe: below or equal (unsigned <=) */

loc_00047A96: ;
    xmm4 = xmm1; /* movaps */

loc_00047A99: ;
    /* ucomiss xmm4, MEMF(0x648D14) - sets EFLAGS */
    xmm1 = MEMF(esp + 0x34); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00047B2E; /* jnp: not parity */

loc_00047ABC: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx + 0x60);
    eax = esp + 0x24;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00047ACF: ;
    eax = MEM32(ecx + 0x10);
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00047ADF: ;
    xmm4 = xmm4 * MEMF(0x648F08); /* mulss */
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x14);
    xmm1 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    MEMF(esp) = xmm4; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esp + 0x48;
    PUSH32(esp, 0); sub_00038D90(); /* call 0x00038D90 */

loc_00047B0B: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    /* comiss xmm0, MEMF(esp + 0x20) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x20))) goto loc_00047A42; /* ja: above (unsigned >) */

loc_00047B1C: ;
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_00047B22: ;
    xmm1 = MEMF(esp + 0x48); /* movss */

loc_00047B28: ;
    xmm2 = MEMF(esp + 0x14); /* movss */

loc_00047B2E: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 / MEMF(esp + 0x30); /* divss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00047B4D; /* ja: above (unsigned >) */

loc_00047B40: ;
    xmm2 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00047B50; /* jbe: below or equal (unsigned <=) */

loc_00047B4D: ;
    xmm0 = xmm2; /* movaps */

loc_00047B50: ;
    ecx = ZX8(MEM8(ebp + 0x2A8));
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm2 = MEMF(ecx + edx + 0x25C); /* movss */
    xmm2 = xmm2 / MEMF(ecx + edx + 0x258); /* divss */
    xmm0 = xmm0 * MEMF(0x649354); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    eax = ecx + edx;
    eax = MEM32(ebp + 0x3E0);
    PUSH32(esp, 0); sub_002F9060(); /* call 0x002F9060 */

loc_00047B93: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00047BC9; /* jne: not equal / not zero */

loc_00047B97: ;
    eax = MEM32(ebp + 4);
    SET_LO8(ecx, MEM8(eax + 0x8C2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00047BC9; /* jne: not equal / not zero */

loc_00047BA4: ;
    MEMF(eax + 0xAC) = xmm0; /* movss */
    eax = MEM32(ebp + 4);
    xmm3 = MEMF(eax + 0xFC); /* movss */
    eax = eax + 0xA0;
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(eax + 0x34) = xmm3; /* movss */

loc_00047BC9: ;
    eax = MEM32(ebp + 4);
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x26C) = xmm1; /* movss */
    goto loc_00047C0B;

loc_00047BD9: ;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_00047BE9; /* jbe: below or equal (unsigned <=) */

loc_00047BDE: ;
    MEMF(esp + 0x14) = xmm1; /* movss */
    goto loc_00047B22;

loc_00047BE9: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm1 = MEMF(esp + 0x48); /* movss */
    if ((xmm2 <= xmm0)) goto loc_00047B2E; /* jbe: below or equal (unsigned <=) */

loc_00047BF8: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    goto loc_00047B28;

loc_00047C03: ;
    MEMF(ecx + 0x2D8) = xmm6; /* movss */

loc_00047C0B: ;
    ecx = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00047C3B; /* jne: not equal / not zero */

loc_00047C1B: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    eax = esp + 0x48;
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00047C30: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_00047C3B: ;
    esi = MEM32(ebp + 4);
    if (CMP_EQ(MEM8(esi + 0x8C8), 1)) goto loc_00047DAB; /* je: equal / zero */

loc_00047C4B: ;
    xmm0 = MEMF(esi + 0x60); /* movss */
    eax = esp + 0x48;
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00047C5F: ;
    ecx = MEM32(esi + 0x8B4);
    (void)0; /* cmp MEM8(esi + 0x8CE), 1 - flags set for next jcc */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    xmm4 = MEMF(esp + 0x48); /* movss */
    xmm4 = xmm4 - xmm0; /* subss */
    if (CMP_NE(MEM8(esi + 0x8CE), 1)) goto loc_00047D0B; /* jne: not equal / not zero */

loc_00047C89: ;
    edx = MEM32(ebp + 0x3E0);
    xmm2 = MEMF(0x648E6C); /* movss */
    xmm0 = MEMF(edx + 0x114); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    xmm2 = MEMF(0x648F60); /* movss */
    xmm3 = xmm4; /* movaps */
    if ((xmm1 < xmm2)) goto loc_00047CC0; /* jb: below (unsigned <) */

loc_00047CBA: ;
    xmm3 = xmm3 - xmm2; /* subss */
    goto loc_00047CD1;

loc_00047CC0: ;
    xmm5 = MEMF(0x648F64); /* movss */
    /* comiss xmm5, xmm1 - sets EFLAGS */
    if ((xmm5 < xmm1)) goto loc_00047CD1; /* jb: below (unsigned <) */

loc_00047CCD: ;
    xmm0 = xmm0 - xmm2; /* subss */

loc_00047CD1: ;
    xmm0 = xmm0 - xmm3; /* subss */
    xmm0 = xmm0 * MEMF(0x59D950); /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = xmm0; /* movaps */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 <= xmm4)) goto loc_00047CF9; /* jbe: below or equal (unsigned <=) */

loc_00047CE9: ;
    /* nop */

loc_00047CF0: ;
    xmm4 = xmm4 + xmm2; /* addss */
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 > xmm4)) goto loc_00047CF0; /* ja: above (unsigned >) */

loc_00047CF9: ;
    /* comiss xmm4, xmm2 - sets EFLAGS */
    if ((xmm4 < xmm2)) goto loc_00047D65; /* jb: below (unsigned <) */

loc_00047CFE: ;
    edi = edi;

loc_00047D00: ;
    xmm4 = xmm4 - xmm2; /* subss */
    /* comiss xmm4, xmm2 - sets EFLAGS */
    if ((xmm4 >= xmm2)) goto loc_00047D00; /* jae: above or equal (unsigned >=) */

loc_00047D09: ;
    goto loc_00047D65;

loc_00047D0B: ;
    if (CMP_NE(MEM8(esi + 0x8C4), 1)) goto loc_00047D60; /* jne: not equal / not zero */

loc_00047D14: ;
    edi = MEM32(ebp + 0x3E0);
    ecx = edi;
    PUSH32(esp, 0); sub_002F8D30(); /* call 0x002F8D30 */

loc_00047D21: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00047D60; /* je: equal / zero */

loc_00047D25: ;
    xmm0 = MEMF(edi + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    xmm2 = xmm4; /* movaps */
    PUSH32(esp, 0); sub_002AF700(); /* call 0x002AF700 */

loc_00047D3D: ;
    xmm0 = xmm0 * MEMF(0x649A10); /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    eax = esp + 0x48;
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF770(); /* call 0x002AF770 */

loc_00047D58: ;
    xmm4 = MEMF(esp + 0x48); /* movss */
    goto loc_00047D65;

loc_00047D60: ;
    MEMF(esi + 0x5C) = xmm4; /* movss */

loc_00047D65: ;
    ecx = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00047D8F; /* jne: not equal / not zero */

loc_00047D75: ;
    eax = esp + 0x48;
    MEMF(esp + 0x48) = xmm4; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00047D84: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */

loc_00047D8F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00047D9F; /* jne: not equal / not zero */

loc_00047D97: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00047DAB; /* je: equal / zero */

loc_00047D9F: ;
    edx = 3;
    ecx = ebp;
    PUSH32(esp, 0); sub_00047640(); /* call 0x00047640 */

loc_00047DAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00047DC0
 * Original: 0x00047DC0 - 0x00047E3B (123 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047DC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00047DC0: ;
    eax = MEM32(ecx + 0xC0);
    if (TEST_NZ(HI8(eax), 1)) goto loc_00047E3A; /* jne: not equal / not zero */

loc_00047DCB: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x8C4));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00047E21; /* jne: not equal / not zero */

loc_00047DD9: ;
    SET_LO8(ebx, MEM8(eax + 0x8C5));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00047E21; /* jne: not equal / not zero */

loc_00047DE3: ;
    if (CMP_NE(MEM16(ecx + 0x220), 3)) goto loc_00047E07; /* jne: not equal / not zero */

loc_00047DED: ;
    xmm0 = MEMF(0x649388); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    MEMF(edx) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00047E07: ;
    xmm0 = MEMF(0x6497D4); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(0x648D74); /* movss */
    MEMF(edx) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00047E21: ;
    xmm0 = MEMF(0x649448); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(0x64944C); /* movss */
    MEMF(edx) = xmm0; /* movss */
    POP32(esp, ebx);

loc_00047E3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00047E40
 * Original: 0x00047E40 - 0x00047EF0 (176 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047E40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00047E40: ;
    if (TEST_Z(ecx, ecx)) goto loc_00047EEF; /* je: equal / zero */

loc_00047E48: ;
    eax = ZX8(MEM8(ecx + 0x2A8));
    edx = MEM32(0x762E6C);
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xB0);
    PUSH32(esp, edi);
    edi = MEM32(esi + edx + 0xAC);
    esi = MEM32(esp + 0xC);
    eax = eax + edi;
    MEM32(edx + eax * 8) = esi;
    eax = ZX8(MEM8(ecx + 0x2A8));
    edx = MEM32(0x762E6C);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xB0);
    edi = MEM32(esi + edx + 0xAC);
    esi = MEM32(esp + 0x10);
    eax = eax + edi;
    MEM32(edx + eax * 8 + 4) = esi;
    eax = ZX8(MEM8(ecx + 0x2A8));
    edx = MEM32(0x762E6C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    eax = eax + edx + 0xAC;
    MEM32(eax) = MEM32(eax) + 1;
    edx = ZX8(MEM8(ecx + 0x2A8));
    eax = MEM32(0x762E6C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    esi = MEM32(edx + eax + 0xAC);
    POP32(esp, edi);
    (void)0; /* cmp esi, 0x14 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(esi, 0x14)) goto loc_00047EEF; /* jne: not equal / not zero */

loc_00047ED7: ;
    ecx = ZX8(MEM8(ecx + 0x2A8));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    MEM32(ecx + eax + 0xAC) = 0;

loc_00047EEF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00047EF0
 * Original: 0x00047EF0 - 0x00047EF7 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047EF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00047EF0: ;
    if (TEST_NZ(esi, esi)) { sub_00047EF7(); return; } /* jne: not equal / not zero */

loc_00047EF4: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00047F60
 * Original: 0x00047F60 - 0x00047FA0 (64 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047F60(void)
{
    float xmm0;

loc_00047F60: ;
    eax = ZX8(MEM8(eax + 0x2A8));
    xmm0 = MEMF(0x648D34); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    eax = eax + 0x762E70;
    MEMF(eax + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x50) = 5;
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00047FA0
 * Original: 0x00047FA0 - 0x000480CF (303 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047FA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00047FA0: ;
    eax = ZX8(MEM8(edx + 0x2A8));
    edx = MEM32(edx + 0x3E4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x204);
    eax = eax + 0x762E70;
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(esi, esi)) goto loc_000480CE; /* jne: not equal / not zero */

loc_00047FC5: ;
    ecx = ecx + ecx * 4;
    ecx = ecx << 1;
    edx = ZX8(MEM8(ecx + 0x68BF30));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 0x68BF31));
    MEMF(eax) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 0x68BF32));
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 0x68BF33));
    MEMF(eax + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 0x68BF34));
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 0x68BF35));
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 0x68BF36));
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 0x68BF37));
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 0x68BF38));
    ecx = ZX8(MEM8(ecx + 0x68BF39));
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    xmm1 = xmm1 + xmm6; /* addss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 4);
    MEMF(eax + 0x18) = xmm6; /* movss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm6 = xmm0; /* movaps */
    MEMF(eax + 0x20) = xmm0; /* movss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(eax + 0x24) = xmm2; /* movss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm6 = xmm6 / xmm3; /* divss */
    xmm0 = xmm0 / xmm4; /* divss */
    xmm2 = xmm2 / xmm5; /* divss */
    MEMF(eax + 0x10) = xmm3; /* movss */
    MEMF(eax + 0x14) = xmm4; /* movss */
    MEMF(eax + 0x1C) = xmm5; /* movss */
    MEMF(eax + 0x30) = xmm3; /* movss */
    MEMF(eax + 0x28) = xmm1; /* movss */
    MEMF(eax + 0x2C) = xmm1; /* movss */
    MEMF(eax + 0x40) = xmm6; /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x48) = xmm1; /* movss */
    MEMF(eax + 0x4C) = xmm2; /* movss */
    MEM32(eax + 0x50) = 0;
    MEM32(eax + 0x64) = edx;

loc_000480CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000480D0
 * Original: 0x000480D0 - 0x00048103 (51 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000480D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000480D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(edi + 0x2A8));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x68);
    esi = esi + 0x762E70;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000480E7: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm0 = MEMF(0x648D34); /* movss */
    if (TEST_Z(LO8(eax), 1)) { sub_00048103(); return; } /* je: equal / zero */

loc_000480F3: ;
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_00048109(); return; /* tail jmp 0x00048109 */

}

/**
 * sub_000482D0
 * Original: 0x000482D0 - 0x0004833B (107 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000482D0(void)
{
    float xmm1;

loc_000482D0: ;
    esp = esp - 0xC;
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000482E8: ;
    eax = MEM32(edx + 0x34);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000482F8: ;
    edx = MEM32(edx + 0x5C);
    eax = esp + 8;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00048308: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 0x264);
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(esp + 0x10); /* movss */
    PUSH32(esp, 0);
    esi = ecx + 0x330;
    edi = ecx + 0x2F4;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00038D90(); /* call 0x00038D90 */

loc_00048335: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00048340
 * Original: 0x00048340 - 0x0004847A (314 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048340(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_00048340: ;
    xmm0 = MEMF(0x648E84); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEM32(eax) = 0x5D5070;
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEMF(eax + 0xC) = xmm1; /* movss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    xmm2 = MEMF(0x648D18); /* movss */
    MEMF(eax + 0x18) = xmm2; /* movss */
    xmm3 = MEMF(0x648CE0); /* movss */
    MEMF(eax + 0x14) = xmm3; /* movss */
    ecx = 0x5D5074;
    MEM32(eax + 4) = ecx;
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    MEMF(eax + 0x50) = xmm0; /* movss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0x3C) = xmm3; /* movss */
    MEMF(eax + 0x40) = xmm2; /* movss */
    MEM32(eax + 0x2C) = 0x5D5064;
    MEM32(eax + 0x54) = ecx;
    MEMF(eax + 0x6C) = xmm0; /* movss */
    MEMF(eax + 0x70) = xmm0; /* movss */
    MEMF(eax + 0x74) = xmm0; /* movss */
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0x58) = xmm1; /* movss */
    MEMF(eax + 0x5C) = xmm1; /* movss */
    MEMF(eax + 0x60) = xmm1; /* movss */
    MEMF(eax + 0x64) = xmm3; /* movss */
    MEMF(eax + 0x68) = xmm2; /* movss */
    MEMF(eax + 0x94) = xmm0; /* movss */
    MEMF(eax + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x75A090); /* movss */
    SET_LO8(ecx, 0); /* xor self */
    MEM8(eax + 0x8D) = LO8(ecx);
    MEM8(eax + 0x8E) = LO8(ecx);
    MEM8(eax + 0x90) = LO8(ecx);
    MEM8(eax + 0x91) = LO8(ecx);
    MEM8(eax + 0x92) = LO8(ecx);
    SET_LO8(edx, 1);
    MEM8(eax + 0x7C) = LO8(edx);
    MEM8(eax + 0x8C) = LO8(edx);
    MEM8(eax + 0x8F) = LO8(edx);
    MEMF(eax + 0x80) = xmm1; /* movss */
    MEMF(eax + 0x84) = xmm1; /* movss */
    MEMF(eax + 0x88) = xmm1; /* movss */
    MEMF(eax + 0x14) = xmm2; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm2; /* movss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x64) = xmm2; /* movss */
    MEMF(eax + 0x68) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00048480
 * Original: 0x00048480 - 0x000484B5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048480(void)
{
    int _flags = 0; /* fallback flag var */

loc_00048480: ;
    eax = 0x606A68;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5D5070;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 4) = eax;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000484AF; /* je: equal / zero */

loc_0004849E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000484AC: ;
    esp = esp + 4;

loc_000484AF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000484C0
 * Original: 0x000484C0 - 0x0004850D (77 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000484C0(void)
{
    float xmm0;

loc_000484C0: ;
    SET_LO8(ecx, MEM8(eax + 0x8F));
    SET_LO8(edx, MEM8(eax + 0x90));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(eax + 0x8C) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x91));
    MEM8(eax + 0x8D) = LO8(edx);
    MEM8(eax + 0x8E) = LO8(ecx);
    edx = MEM32(eax + 0xC);
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 8) = edx;
    ecx = MEM32(eax + 0x34);
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEM32(eax + 0x30) = ecx;
    edx = MEM32(eax + 0x5C);
    MEMF(eax + 0x60) = xmm0; /* movss */
    MEM32(eax + 0x58) = edx;
    MEM8(eax + 0x7C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00048510
 * Original: 0x00048510 - 0x00048819 (777 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048510: ;
    esp = esp - 0x20;
    xmm4 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esi + 0x94); /* movss */
    xmm0 = MEMF(0x648E84); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* ucomiss xmm1, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 8) = xmm4; /* movss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000485F8; /* jnp: not parity */

loc_0004855B: ;
    xmm1 = MEMF(esi + 0x98); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    /* ucomiss xmm1, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000485F8; /* jnp: not parity */

loc_00048574: ;
    xmm0 = MEMF(esi + 0x14); /* movss */
    eax = MEM32(esi + 0x94);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x3C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x40); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x64); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x68); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x98); /* movss */
    MEM32(esi + 0x14) = eax;
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x98); /* movss */
    ecx = MEM32(esi + 0x94);
    MEM32(esi + 0x3C) = ecx;
    MEMF(esi + 0x40) = xmm0; /* movss */
    edx = MEM32(esi + 0x94);
    xmm0 = MEMF(esi + 0x98); /* movss */
    MEM32(esi + 0x64) = edx;
    MEMF(esi + 0x68) = xmm0; /* movss */

loc_000485F8: ;
    SET_LO8(ecx, MEM8(esi + 0x8F));
    (void)0; /* cmp LO8(ecx), 1 - flags set for next jcc */
    xmm5 = MEMF(0x648E6C); /* movss */
    xmm6 = MEMF(0x648F60); /* movss */
    xmm7 = MEMF(0x648F64); /* movss */
    if (CMP_NE(LO8(ecx), 1)) goto loc_000486AD; /* jne: not equal / not zero */

loc_0004861F: ;
    SET_LO8(eax, MEM8(esi + 0x8C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000486B4; /* jne: not equal / not zero */

loc_0004862D: ;
    xmm0 = MEMF(esi + 8); /* movss */
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00048641: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00048653: ;
    xmm1 = MEMF(esp + 4); /* movss */
    xmm2 = MEMF(esp); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp) = xmm2; /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    if ((xmm0 < xmm5)) goto loc_00048681; /* jb: below (unsigned <) */

loc_00048675: ;
    xmm1 = xmm1 - xmm6; /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    goto loc_0004868F;

loc_00048681: ;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 < xmm0)) goto loc_0004868F; /* jb: below (unsigned <) */

loc_00048686: ;
    xmm2 = xmm2 - xmm6; /* subss */
    MEMF(esp) = xmm2; /* movss */

loc_0004868F: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000486B4; /* jbe: below or equal (unsigned <=) */

loc_000486A4: ;
    MEM8(esi + 0x8C) = 1;
    goto loc_000486B4;

loc_000486AD: ;
    MEM8(esi + 0x8C) = 0;

loc_000486B4: ;
    if (CMP_NE(MEM8(esi + 0x90), 1)) goto loc_0004874F; /* jne: not equal / not zero */

loc_000486C1: ;
    SET_LO8(eax, MEM8(esi + 0x8D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00048756; /* jne: not equal / not zero */

loc_000486CF: ;
    xmm0 = MEMF(esi + 0x30); /* movss */
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000486E1: ;
    xmm0 = MEMF(esi + 0x34); /* movss */
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_000486F5: ;
    xmm1 = MEMF(esp); /* movss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp + 4) = xmm2; /* movss */
    MEMF(esp) = xmm1; /* movss */
    if ((xmm0 < xmm5)) goto loc_00048722; /* jb: below (unsigned <) */

loc_00048717: ;
    xmm1 = xmm1 - xmm6; /* subss */
    MEMF(esp) = xmm1; /* movss */
    goto loc_00048731;

loc_00048722: ;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 < xmm0)) goto loc_00048731; /* jb: below (unsigned <) */

loc_00048727: ;
    xmm2 = xmm2 - xmm6; /* subss */
    MEMF(esp + 4) = xmm2; /* movss */

loc_00048731: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00048756; /* jbe: below or equal (unsigned <=) */

loc_00048746: ;
    MEM8(esi + 0x8D) = 1;
    goto loc_00048756;

loc_0004874F: ;
    MEM8(esi + 0x8D) = 0;

loc_00048756: ;
    if (CMP_NE(MEM8(esi + 0x91), 1)) goto loc_000487F1; /* jne: not equal / not zero */

loc_00048763: ;
    SET_LO8(eax, MEM8(esi + 0x8E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000487F8; /* jne: not equal / not zero */

loc_00048771: ;
    xmm0 = MEMF(esi + 0x58); /* movss */
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00048783: ;
    xmm0 = MEMF(esi + 0x5C); /* movss */
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00048797: ;
    xmm1 = MEMF(esp); /* movss */
    xmm2 = MEMF(esp + 4); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    MEMF(esp + 4) = xmm2; /* movss */
    MEMF(esp) = xmm1; /* movss */
    if ((xmm0 < xmm5)) goto loc_000487C4; /* jb: below (unsigned <) */

loc_000487B9: ;
    xmm1 = xmm1 - xmm6; /* subss */
    MEMF(esp) = xmm1; /* movss */
    goto loc_000487D3;

loc_000487C4: ;
    /* comiss xmm7, xmm0 - sets EFLAGS */
    if ((xmm7 < xmm0)) goto loc_000487D3; /* jb: below (unsigned <) */

loc_000487C9: ;
    xmm2 = xmm2 - xmm6; /* subss */
    MEMF(esp + 4) = xmm2; /* movss */

loc_000487D3: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E54)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000487F8; /* jbe: below or equal (unsigned <=) */

loc_000487E8: ;
    MEM8(esi + 0x8E) = 1;
    goto loc_000487F8;

loc_000487F1: ;
    MEM8(esi + 0x8E) = 0;

loc_000487F8: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00048819(); return; } /* je: equal / zero */

loc_000487FF: ;
    SET_LO8(eax, MEM8(esi + 0x8C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00048819(); return; } /* je: equal / zero */

loc_00048809: ;
    eax = MEM32(esi + 0xC);
    ebx = esi + 4;
    MEMF(ebx + 0xC) = xmm4; /* movss */
    MEM32(ebx + 4) = eax;
    g_seh_ebp = ebp; sub_0004882C(); return; /* tail jmp 0x0004882C */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00048920
 * Original: 0x00048920 - 0x00048944 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048920(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00048920: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 0x92));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00048942; /* jne: not equal / not zero */

loc_0004892B: ;
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00048938: ;
    xmm0 = MEMF(esp); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */

loc_00048942: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00048950
 * Original: 0x00048950 - 0x00048974 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048950(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00048950: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 0x92));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00048972; /* jne: not equal / not zero */

loc_0004895B: ;
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00048968: ;
    xmm0 = MEMF(esp); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_00048972: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00048980
 * Original: 0x00048980 - 0x000489A4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048980(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00048980: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 0x92));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000489A2; /* jne: not equal / not zero */

loc_0004898B: ;
    eax = esp;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_00048998: ;
    xmm0 = MEMF(esp); /* movss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */

loc_000489A2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000489B0
 * Original: 0x000489B0 - 0x00048B14 (356 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000489B0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000489B0: ;
    esp = esp - 0x18;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp - 0xC;
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x58); /* movss */
    xmm1 = xmm1 - MEMF(0x648E6C); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(esi + 0x30); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x14;
    ecx = 0; /* xor self */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E46C0(); /* call 0x003E46C0 */

loc_00048A00: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm3 = xmm3 - xmm5; /* subss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm6; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * MEMF(0x648CF8); /* mulss */
    xmm5 = xmm5 + xmm7; /* addss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm1 = xmm1 + xmm7; /* addss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm0; /* movaps */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * MEMF(esp + 0x20); /* mulss */
    xmm6 = xmm6 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x10); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    eax = esi + 0x80;
    MEMF(eax) = xmm6; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0xC); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm5; /* movaps */
    xmm5 = MEMF(esp + 0x20); /* movss */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x10); /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm0 = xmm0 - xmm2; /* subss */
    esp = esp + 0xC;
    MEMF(eax + 4) = xmm6; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00048B0C: ;
    MEM8(esi + 0x7C) = 0;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00048B20
 * Original: 0x00048B20 - 0x00048ECF (943 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B20(void)
{
    float xmm0, xmm1, xmm4, xmm5, xmm6, xmm7;

loc_00048B20: ;
    PUSH32(esp, edi);
    eax = esi + 4;
    MEM32(esi) = 0x5D5084;
    PUSH32(esp, 0); sub_00048340(); /* call 0x00048340 */

loc_00048B2F: ;
    xmm4 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648E84); /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    xmm7 = MEMF(0x6490F4); /* movss */
    xmm6 = MEMF(0x649030); /* movss */
    MEM32(esi + 0xA0) = 0x5D5088;
    MEMF(esi + 0xB4) = xmm0; /* movss */
    MEMF(esi + 0xA8) = xmm4; /* movss */
    MEMF(esi + 0xAC) = xmm4; /* movss */
    MEMF(esi + 0xB0) = xmm4; /* movss */
    MEMF(esi + 0xB8) = xmm1; /* movss */
    MEMF(esi + 0xBC) = xmm5; /* movss */
    MEMF(esi + 0xC0) = xmm5; /* movss */
    MEMF(esi + 0xC4) = xmm5; /* movss */
    MEMF(esi + 0xC8) = xmm5; /* movss */
    edi = 0x5D5064;
    MEM32(esi + 0xA4) = edi;
    MEMF(esi + 0xDC) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(esi + 0xD0) = xmm4; /* movss */
    MEMF(esi + 0xD4) = xmm4; /* movss */
    MEMF(esi + 0xD8) = xmm4; /* movss */
    MEMF(esi + 0xE0) = xmm1; /* movss */
    MEMF(esi + 0xE4) = xmm5; /* movss */
    MEMF(esi + 0xE8) = xmm5; /* movss */
    MEMF(esi + 0xEC) = xmm5; /* movss */
    MEMF(esi + 0xF0) = xmm5; /* movss */
    MEM32(esi + 0xCC) = edi;
    MEMF(esi + 0xF4) = xmm4; /* movss */
    MEMF(esi + 0xF8) = xmm4; /* movss */
    MEMF(esi + 0xFC) = xmm0; /* movss */
    MEMF(esi + 0xB4) = xmm7; /* movss */
    MEMF(esi + 0xB8) = xmm6; /* movss */
    eax = esi + 0x100;
    edx = ebx;
    MEMF(esi + 0xDC) = xmm7; /* movss */
    MEMF(esi + 0xE0) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00049850(); /* call 0x00049850 */

loc_00048C52: ;
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x40C00000);
    eax = esi + 0x19C;
    PUSH32(esp, 0); sub_0004A050(); /* call 0x0004A050 */

loc_00048C67: ;
    xmm1 = MEMF(0x649294); /* movss */
    xmm0 = MEMF(0x648E38); /* movss */
    MEMF(esi + 0x24C) = xmm1; /* movss */
    MEMF(esi + 0x264) = xmm1; /* movss */
    MEMF(esi + 0x26C) = xmm1; /* movss */
    xmm1 = MEMF(0x649108); /* movss */
    MEMF(esi + 0x288) = xmm1; /* movss */
    xmm1 = MEMF(0x648EC8); /* movss */
    MEMF(esi + 0x28C) = xmm1; /* movss */
    xmm1 = MEMF(0x58C048); /* movss */
    MEMF(esi + 0x290) = xmm1; /* movss */
    xmm1 = MEMF(0x58C050); /* movss */
    MEM32(esi + 0x248) = 0x5D50C4;
    MEMF(esi + 0x250) = xmm0; /* movss */
    MEMF(esi + 0x254) = xmm4; /* movss */
    MEMF(esi + 0x258) = xmm4; /* movss */
    MEMF(esi + 0x25C) = xmm4; /* movss */
    MEMF(esi + 0x260) = xmm4; /* movss */
    MEMF(esi + 0x268) = xmm0; /* movss */
    MEMF(esi + 0x270) = xmm0; /* movss */
    MEMF(esi + 0x274) = xmm4; /* movss */
    MEMF(esi + 0x278) = xmm4; /* movss */
    MEMF(esi + 0x27C) = xmm7; /* movss */
    MEMF(esi + 0x280) = xmm6; /* movss */
    MEMF(esi + 0x284) = xmm6; /* movss */
    MEMF(esi + 0x294) = xmm4; /* movss */
    MEMF(esi + 0x298) = xmm1; /* movss */
    MEMF(esi + 0x29C) = xmm4; /* movss */
    MEMF(esi + 0x2A0) = xmm0; /* movss */
    MEM32(esi + 0x2A4) = 0x5D50C8;
    MEMF(esi + 0x2B4) = xmm4; /* movss */
    MEMF(esi + 0x2C0) = xmm5; /* movss */
    MEMF(esi + 0x2C4) = xmm5; /* movss */
    MEMF(esi + 0x2C8) = xmm5; /* movss */
    MEM32(esi + 0x2A8) = edi;
    xmm0 = MEMF(0x648CFC); /* movss */
    MEMF(esi + 0x2CC) = xmm5; /* movss */
    MEMF(esi + 0x2AC) = xmm4; /* movss */
    MEMF(esi + 0x2B0) = xmm4; /* movss */
    MEMF(esi + 0x2B8) = xmm7; /* movss */
    MEMF(esi + 0x2BC) = xmm6; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    MEM32(esi + 0x2D0) = edi;
    MEMF(esi + 0x2D4) = xmm0; /* movss */
    MEMF(esi + 0x2D8) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esi + 0x2DC) = xmm4; /* movss */
    MEMF(esi + 0x2E8) = xmm5; /* movss */
    MEMF(esi + 0x2EC) = xmm5; /* movss */
    MEMF(esi + 0x2F0) = xmm5; /* movss */
    MEMF(esi + 0x2F4) = xmm5; /* movss */
    MEMF(esi + 0x2E0) = xmm7; /* movss */
    MEMF(esi + 0x2E4) = xmm6; /* movss */
    MEM32(esi + 0x2F8) = 0x5D50CC;
    MEM32(esi + 0x2FC) = edi;
    MEMF(esi + 0x300) = xmm4; /* movss */
    MEMF(esi + 0x304) = xmm4; /* movss */
    MEMF(esi + 0x308) = xmm4; /* movss */
    MEMF(esi + 0x30C) = xmm0; /* movss */
    MEMF(esi + 0x310) = xmm1; /* movss */
    MEMF(esi + 0x314) = xmm5; /* movss */
    MEMF(esi + 0x318) = xmm5; /* movss */
    MEMF(esi + 0x31C) = xmm5; /* movss */
    MEMF(esi + 0x320) = xmm5; /* movss */
    MEM32(esi + 0x324) = edi;
    MEMF(esi + 0x328) = xmm4; /* movss */
    MEMF(esi + 0x32C) = xmm4; /* movss */
    MEMF(esi + 0x330) = xmm4; /* movss */
    MEMF(esi + 0x334) = xmm0; /* movss */
    MEMF(esi + 0x338) = xmm1; /* movss */
    MEMF(esi + 0x33C) = xmm5; /* movss */
    MEMF(esi + 0x340) = xmm5; /* movss */
    MEMF(esi + 0x344) = xmm5; /* movss */
    MEMF(esi + 0x348) = xmm5; /* movss */
    MEM32(esi + 0x34C) = ebx;
    MEMF(esi + 0x350) = xmm5; /* movss */
    MEMF(esi + 0x354) = xmm5; /* movss */
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00048ED0
 * Original: 0x00048ED0 - 0x00048EFA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048ED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00048ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_00048F00(); /* call 0x00048F00 */

loc_00048ED8: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_00048EF4; /* je: equal / zero */

loc_00048EDF: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_00048EF4; /* je: equal / zero */

loc_00048EE7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00048EF1: ;
    esp = esp + 4;

loc_00048EF4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048F00
 * Original: 0x00048F00 - 0x00048F8A (138 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048F00(void)
{

loc_00048F00: ;
    MEM32(ecx) = 0x5D5084;
    MEM32(ecx + 0x2F8) = 0x5D50CC;
    eax = 0x606A68;
    MEM32(ecx + 0x324) = eax;
    MEM32(ecx + 0x2FC) = eax;
    MEM32(ecx + 0x2A4) = 0x5D50C8;
    MEM32(ecx + 0x2D0) = eax;
    MEM32(ecx + 0x2A8) = eax;
    MEM32(ecx + 0x248) = 0x5D50C4;
    MEM32(ecx + 0x220) = eax;
    MEM32(ecx + 0x1F8) = eax;
    MEM32(ecx + 0x1B4) = eax;
    MEM32(ecx + 0x194) = 0;
    MEM32(ecx + 0x164) = eax;
    MEM32(ecx + 0xA0) = 0x5D5088;
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0xA4) = eax;
    MEM32(ecx + 4) = 0x5D5070;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00048F90
 * Original: 0x00048F90 - 0x000495DF (1615 bytes, 303 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048F90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048F90: ;
    esp = esp - 0x38;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(edi + 0x350); /* movss */
    xmm2 = MEMF(0x648E84); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x34) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm5; /* movss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm5; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    MEMF(esp + 8) = xmm5; /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    MEMF(esp) = xmm5; /* movss */
    MEMF(esp + 4) = xmm5; /* movss */
    if (1 /* jnp after test - parity */) goto loc_000491E6; /* jnp: not parity */

loc_0004900A: ;
    xmm0 = MEMF(edi + 0x354); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000491E6; /* jnp: not parity */

loc_00049023: ;
    xmm0 = MEMF(edi + 0x98); /* movss */
    eax = MEM32(edi + 0x350);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x9C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xB4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xB8); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x1C4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x1C8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x27C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x280); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x284); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x288); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x2B8); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x2BC); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x30C); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x310); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x354); /* movss */
    MEM32(edi + 0x98) = eax;
    MEMF(edi + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x354); /* movss */
    xmm1 = MEMF(edi + 0x350); /* movss */
    MEMF(edi + 0xB4) = xmm1; /* movss */
    MEMF(edi + 0xB8) = xmm0; /* movss */
    MEMF(edi + 0xDC) = xmm1; /* movss */
    MEMF(edi + 0xE0) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x354); /* movss */
    ecx = MEM32(edi + 0x350);
    MEM32(edi + 0x1C4) = ecx;
    MEMF(edi + 0x1C8) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x354); /* movss */
    edx = MEM32(edi + 0x350);
    MEM32(edi + 0x27C) = edx;
    MEMF(edi + 0x280) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x354); /* movss */
    eax = MEM32(edi + 0x350);
    MEM32(edi + 0x284) = eax;
    MEMF(edi + 0x288) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x354); /* movss */
    xmm1 = MEMF(edi + 0x350); /* movss */
    MEMF(edi + 0x2B8) = xmm1; /* movss */
    MEMF(edi + 0x2BC) = xmm0; /* movss */
    MEMF(edi + 0x2E0) = xmm1; /* movss */
    MEMF(edi + 0x2E4) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x354); /* movss */
    xmm1 = MEMF(edi + 0x350); /* movss */
    MEMF(edi + 0x30C) = xmm1; /* movss */
    MEMF(edi + 0x310) = xmm0; /* movss */
    MEMF(edi + 0x334) = xmm1; /* movss */
    MEMF(edi + 0x338) = xmm0; /* movss */

loc_000491E6: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x8B8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = edi + 4;
    if (TEST_Z(eax, eax)) goto loc_000493F2; /* je: equal / zero */

loc_00049201: ;
    SET_LO8(eax, MEM8(ebx + 0x8F));
    SET_LO8(ecx, MEM8(ebx + 0x90));
    SET_LO8(edx, MEM8(ebx + 0x91));
    MEM8(ebx + 0x8C) = LO8(eax);
    MEM8(ebx + 0x8E) = LO8(edx);
    MEM8(ebx + 0x8D) = LO8(ecx);
    eax = MEM32(ebx + 0xC);
    MEM32(ebx + 8) = eax;
    MEMF(ebx + 0x10) = xmm5; /* movss */
    ecx = MEM32(ebx + 0x34);
    MEMF(ebx + 0x38) = xmm5; /* movss */
    MEM32(ebx + 0x30) = ecx;
    edx = MEM32(ebx + 0x5C);
    MEM32(ebx + 0x58) = edx;
    MEMF(ebx + 0x60) = xmm5; /* movss */
    MEM8(ebx + 0x7C) = 1;
    eax = MEM32(edi + 0xAC);
    MEM32(edi + 0xA8) = eax;
    MEMF(edi + 0xB0) = xmm5; /* movss */
    ecx = MEM32(edi + 0xD4);
    MEMF(edi + 0xD8) = xmm5; /* movss */
    MEM32(edi + 0xD0) = ecx;
    edx = MEM32(edi + 0xA8);
    eax = MEM32(edi + 0xD0);
    MEM32(edi + 0xF4) = edx;
    MEM32(edi + 0xF8) = eax;
    MEM8(edi + 0x1E4) = 0;
    ecx = MEM32(edi + 0x1BC);
    MEMF(edi + 0x1C0) = xmm5; /* movss */
    MEM32(edi + 0x1B8) = ecx;
    edx = ecx;
    MEM32(edi + 0x1A0) = edx;
    ecx = MEM32(edi + 0x19C);
    ebp = edi + 0x248;
    eax = edi + 0x1A8;
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 0x1A4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    xmm0 = MEMF(ebp + 0x24); /* movss */
    MEMF(ebp + 0x1C) = xmm0; /* movss */
    MEMF(ebp + 4) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x28); /* movss */
    MEMF(ebp + 0x20) = xmm0; /* movss */
    MEMF(ebp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(ebp + 0x14) = xmm5; /* movss */
    MEMF(ebp + 0xC) = xmm5; /* movss */
    MEMF(ebp + 0x18) = xmm5; /* movss */
    MEMF(ebp + 0x10) = xmm5; /* movss */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    edx = MEM32(edi + 0x2B0);
    MEMF(edi + 0x2B4) = xmm5; /* movss */
    MEM32(edi + 0x2AC) = edx;
    eax = MEM32(edi + 0x2D8);
    MEMF(edi + 0x2DC) = xmm5; /* movss */
    MEM32(edi + 0x2D4) = eax;
    eax = MEM32(edi + 0x34C);
    esi = edi + 0x2F8;
    PUSH32(esp, 0); sub_0004AD20(); /* call 0x0004AD20 */

loc_00049345: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00049355; /* jne: not equal / not zero */

loc_00049349: ;
    MEMF(esi + 0xC) = xmm5; /* movss */
    MEMF(esi + 0x34) = xmm5; /* movss */
    goto loc_0004936E;

loc_00049355: ;
    PUSH32(esp, 0);
    eax = 1;
    ecx = esi;
    PUSH32(esp, 0); sub_0004AB70(); /* call 0x0004AB70 */

loc_00049363: ;
    xmm2 = MEMF(0x648E84); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */

loc_0004936E: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x4C);
    MEMF(esi + 0x10) = xmm5; /* movss */
    MEM32(esi + 8) = ecx;
    edx = MEM32(esi + 0x34);
    MEMF(esi + 0x38) = xmm5; /* movss */
    MEM32(esi + 0x30) = edx;
    ecx = MEM32(eax + 0x3E0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x4C) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_000494C8; /* je: equal / zero */

loc_0004939A: ;
    ecx = MEM32(eax + 4);
    xmm0 = MEMF(0x6490B8); /* movss */
    /* comiss xmm0, MEMF(ecx + 0x24C) - sets EFLAGS */
    SET_LO8(edx, 1);
    if ((xmm0 <= MEMF(ecx + 0x24C))) goto loc_000493C7; /* jbe: below or equal (unsigned <=) */

loc_000493B0: ;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    eax = MEM32(esp + 0x4C);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax + 0x544) = LO8(edx);
    goto loc_000494C8;

loc_000493C7: ;
    ecx = MEM32(eax + 0x3E0);
    MEM32(esp + 0x4C) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    eax = MEM32(esp + 0x4C);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(ecx, MEM8(eax + 0x544));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + 0x544) = LO8(ecx);
    goto loc_000494C8;

loc_000493F2: ;
    ebp = MEM32(esp + 0x48);
    PUSH32(esp, ebp);
    esi = ebx;
    PUSH32(esp, 0); sub_00048510(); /* call 0x00048510 */

loc_000493FE: ;
    ecx = MEM32(edi + 0xD0);
    eax = MEM32(edi + 0xA8);
    edx = MEM32(edi + 0xA4);
    MEM32(edi + 0xF8) = ecx;
    ecx = edi + 0xA4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(edi + 0xF4) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00049426: ;
    eax = MEM32(edi + 0xCC);
    ecx = edi + 0xCC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00049436: ;
    ecx = MEM32(esp + 0x48);
    ebp = edi + 0x248;
    PUSH32(esp, ecx);
    esi = ebp;
    PUSH32(esp, 0); sub_0004A680(); /* call 0x0004A680 */

loc_00049448: ;
    edx = MEM32(esp + 0x4C);
    eax = MEM32(edx + 0x3E4);
    ecx = MEM32(eax + 0x204);
    if (TEST_Z(ecx, ecx)) goto loc_0004946F; /* je: equal / zero */

loc_0004945C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x2B0) = xmm0; /* movss */
    MEMF(edi + 0x2D8) = xmm0; /* movss */

loc_0004946F: ;
    esi = MEM32(esp + 0x48);
    edx = MEM32(edi + 0x2A8);
    ecx = edi + 0x2A8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00049483: ;
    eax = MEM32(edi + 0x2D0);
    ecx = edi + 0x2D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00049493: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(eax + 0x3E0);
    edx = MEM32(ecx + 0x110);
    ecx = MEM32(esp + 0x48);
    xmm5 = MEMF(eax + 0x3C0); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    esi = edi + 0x2F8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0004AAC0(); /* call 0x0004AAC0 */

loc_000494BD: ;
    xmm2 = MEMF(0x648E84); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */

loc_000494C8: ;
    xmm0 = MEMF(edi + 0x350); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000495D6; /* jnp: not parity */

loc_000494E1: ;
    xmm0 = MEMF(edi + 0x354); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000495D6; /* jnp: not parity */

loc_000494FA: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm1 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    MEMF(esi + 0x18) = xmm1; /* movss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEMF(edi + 0x2B8) = xmm0; /* movss */
    MEMF(edi + 0x2BC) = xmm1; /* movss */
    MEMF(edi + 0x2E0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(edi + 0x2E4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    MEMF(ebp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(ebp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(ebp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(ebp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(edi + 0x1C4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEMF(edi + 0x1C8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(edi + 0xB4) = xmm0; /* movss */
    MEMF(edi + 0xB8) = xmm1; /* movss */
    MEMF(edi + 0xDC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEMF(edi + 0xE0) = xmm1; /* movss */
    MEMF(ebx + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    MEMF(ebx + 0x98) = xmm0; /* movss */

loc_000495D6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000495E0
 * Original: 0x000495E0 - 0x00049759 (377 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000495E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000495E0: ;
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x93));
    SET_LO8(ecx, MEM8(esi + 0x94));
    SET_LO8(edx, MEM8(esi + 0x95));
    MEM8(esi + 0x90) = LO8(eax);
    MEM8(esi + 0x92) = LO8(edx);
    MEM8(esi + 0x91) = LO8(ecx);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0xC) = eax;
    MEMF(esi + 0x14) = xmm5; /* movss */
    ecx = MEM32(esi + 0x38);
    MEMF(esi + 0x3C) = xmm5; /* movss */
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(esi + 0x60);
    MEM32(esi + 0x5C) = edx;
    MEMF(esi + 0x64) = xmm5; /* movss */
    MEM8(esi + 0x80) = 1;
    eax = MEM32(esi + 0xAC);
    MEM32(esi + 0xA8) = eax;
    MEMF(esi + 0xB0) = xmm5; /* movss */
    ecx = MEM32(esi + 0xD4);
    MEMF(esi + 0xD8) = xmm5; /* movss */
    MEM32(esi + 0xD0) = ecx;
    edx = MEM32(esi + 0xA8);
    eax = MEM32(esi + 0xD0);
    MEM32(esi + 0xF4) = edx;
    MEM32(esi + 0xF8) = eax;
    MEM8(esi + 0x1E4) = 0;
    ecx = MEM32(esi + 0x1BC);
    MEMF(esi + 0x1C0) = xmm5; /* movss */
    MEM32(esi + 0x1B8) = ecx;
    edx = ecx;
    MEM32(esi + 0x1A0) = edx;
    ecx = MEM32(esi + 0x19C);
    eax = esi + 0x1A8;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x1A4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    xmm0 = MEMF(esi + 0x26C); /* movss */
    MEMF(esi + 0x264) = xmm0; /* movss */
    MEMF(esi + 0x24C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x270); /* movss */
    MEMF(esi + 0x268) = xmm0; /* movss */
    MEMF(esi + 0x250) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esi + 0x25C) = xmm5; /* movss */
    MEMF(esi + 0x254) = xmm5; /* movss */
    MEMF(esi + 0x260) = xmm5; /* movss */
    MEMF(esi + 0x258) = xmm5; /* movss */
    MEMF(esi + 0x29C) = xmm0; /* movss */
    edx = MEM32(esi + 0x2B0);
    MEMF(esi + 0x2B4) = xmm5; /* movss */
    MEM32(esi + 0x2AC) = edx;
    eax = MEM32(esi + 0x2D8);
    PUSH32(esp, edi);
    MEMF(esi + 0x2DC) = xmm5; /* movss */
    MEM32(esi + 0x2D4) = eax;
    eax = MEM32(esi + 0x34C);
    edi = esi + 0x2F8;
    PUSH32(esp, 0); sub_0004AD20(); /* call 0x0004AD20 */

loc_00049749: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00049759(); return; } /* jne: not equal / not zero */

loc_0004974D: ;
    MEMF(edi + 0xC) = xmm5; /* movss */
    MEMF(edi + 0x34) = xmm5; /* movss */
    g_seh_ebp = ebp; sub_0004976A(); return; /* tail jmp 0x0004976A */

}

/**
 * sub_000497B0
 * Original: 0x000497B0 - 0x000497E2 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000497B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000497B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0x606A68;
    MEM32(esi) = 0x5D5088;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 4) = eax;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_000497DC; /* je: equal / zero */

loc_000497CB: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_000497D9: ;
    esp = esp + 4;

loc_000497DC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000497F0
 * Original: 0x000497F0 - 0x00049816 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000497F0(void)
{
    float xmm0;

loc_000497F0: ;
    ecx = MEM32(eax + 0xC);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 8) = ecx;
    edx = MEM32(eax + 0x34);
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x30);
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00049820
 * Original: 0x00049820 - 0x00049848 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049820(void)
{

loc_00049820: ;
    edx = MEM32(ecx + 0x54);
    eax = edx;
    eax = eax << 4;
    eax = eax + ecx + 4;
    edx++;
    MEM32(ecx + 0x54) = edx;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00049850
 * Original: 0x00049850 - 0x00049A21 (465 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049850(void)
{
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00049850: ;
    esp = esp - 8;
    fp_push(MEMD(0x6497C8)); /* fld double */
    xmm0 = MEMF(0x648E60); /* movss */
    /* FPU: fptan  */
    xmm1 = MEMF(0x648E84); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    MEMF(eax + 0x50) = xmm0; /* movss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    MEMF(eax + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(eax + 0x1C) = xmm1; /* movss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    MEMF(eax + 0x24) = xmm1; /* movss */
    MEMF(eax + 0x68) = xmm0; /* movss */
    MEMF(eax + 0x6C) = xmm0; /* movss */
    MEMF(eax + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(eax + 0x78) = xmm0; /* movss */
    MEMF(eax + 0x7C) = xmm1; /* movss */
    MEMF(eax + 0x80) = xmm1; /* movss */
    MEMF(eax + 0x84) = xmm1; /* movss */
    MEMF(eax + 0x88) = xmm1; /* movss */
    MEMF(eax + 0x74) = xmm2; /* movss */
    MEM32(eax + 0x64) = 0x5D5064;
    xmm0 = MEMF(0x648F38); /* movss */
    SET_LO8(ecx, 0); /* xor self */
    MEM8(eax + 0x8C) = LO8(ecx);
    MEM8(eax + 0x98) = LO8(ecx);
    MEMF(eax + 0x90) = xmm0; /* movss */
    MEM32(eax + 0x94) = edx;
    edx = MEM32(0x5A02CC);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x5A02D0);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x5A02D4);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x5A02CC);
    ecx = eax + 0x10;
    MEM32(ecx) = edx;
    edx = MEM32(0x5A02D0);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x5A02D4);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x5A02CC);
    ecx = eax + 0x28;
    MEM32(ecx) = edx;
    edx = MEM32(0x5A02D0);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x5A02D4);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x5A02CC);
    ecx = eax + 0x34;
    MEM32(ecx) = edx;
    edx = MEM32(0x5A02D0);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x5A02D4);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x5A02CC);
    ecx = eax + 0x40;
    MEM32(ecx) = edx;
    edx = MEM32(0x5A02D0);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x5A02D4);
    MEM32(ecx + 8) = edx;
    /* fstp st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x6497C0); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm3 = xmm3 + MEMF(0x648EA4); /* addss */
    MEMF(esp) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(eax + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM8(eax + 0x98) = 1;
    MEMF(eax + 0x74) = xmm0; /* movss */
    MEMF(eax + 0x78) = xmm2; /* movss */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00049A30
 * Original: 0x00049A30 - 0x00049A6A (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049A30(void)
{
    float xmm0;

loc_00049A30: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax + 0x10;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(edx + 8) = ecx;
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEM8(eax + 0x8C) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00049A70
 * Original: 0x00049A70 - 0x00049AB4 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00049A70: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00049A94; /* jne: not equal / not zero */

loc_00049A79: ;
    eax = esi;
    PUSH32(esp, 0); sub_00049AC0(); /* call 0x00049AC0 */

loc_00049A80: ;
    SET_LO8(eax, MEM8(esp + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00049A94; /* je: equal / zero */

loc_00049A88: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00049D10(); /* call 0x00049D10 */

loc_00049A94: ;
    ecx = esi + 0x10;
    eax = MEM32(ecx);
    edx = esi + 0x40;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    MEM8(esi + 0x8C) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00049AC0
 * Original: 0x00049AC0 - 0x00049B9E (222 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00049AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0; /* xor self */
    eax = esp + 0x18;
    MEM32(esp + 0x18) = 0x5D4C44;
    MEM32(esp + 0x6C) = ebx;
    PUSH32(esp, 0); sub_00049F30(); /* call 0x00049F30 */

loc_00049AE7: ;
    edx = MEM32(edi + 0x44);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_00049B1E: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    esp = esp + 0x38;
    MEMF(edi + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(0x649430) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    MEMF(edi + 0x4C) = xmm1; /* movss */
    MEMF(edi + 0x50) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00049B78; /* jp: parity */

loc_00049B6B: ;
    xmm0 = MEMF(0x648E60); /* movss */
    MEMF(edi + 0x50) = xmm0; /* movss */

loc_00049B78: ;
    if (CMP_NE(MEM8(edi + 0x98), 1)) goto loc_00049B98; /* jne: not equal / not zero */

loc_00049B81: ;
    xmm0 = MEMF(edi + 0x50); /* movss */
    xmm0 = xmm0 + MEMF(0x649550); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00049B98; /* jbe: below or equal (unsigned <=) */

loc_00049B93: ;
    MEMF(edi + 0x4C) = xmm0; /* movss */

loc_00049B98: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00049BA0
 * Original: 0x00049BA0 - 0x00049C22 (130 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049BA0(void)
{
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00049BA0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = xmm0 / MEMF(esp + 0xC); /* divss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fptan  */
    /* fstp st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(eax + 0x90) = xmm0; /* movss */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00049C30
 * Original: 0x00049C30 - 0x00049D0C (220 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00049C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0; /* xor self */
    eax = esp + 0x18;
    MEM32(esp + 0x18) = 0x5D4C44;
    MEM32(esp + 0x6C) = ebx;
    PUSH32(esp, 0); sub_00049F30(); /* call 0x00049F30 */

loc_00049C57: ;
    edx = MEM32(edi + 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edx;
    edx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00065CB0(); /* call 0x00065CB0 */

loc_00049C8C: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    esp = esp + 0x38;
    MEMF(edi + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(0x649430) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    MEMF(edi + 0x58) = xmm1; /* movss */
    MEMF(edi + 0x5C) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_00049CE6; /* jp: parity */

loc_00049CD9: ;
    xmm0 = MEMF(0x648E60); /* movss */
    MEMF(edi + 0x5C) = xmm0; /* movss */

loc_00049CE6: ;
    if (CMP_NE(MEM8(edi + 0x98), 1)) goto loc_00049D06; /* jne: not equal / not zero */

loc_00049CEF: ;
    xmm0 = MEMF(edi + 0x5C); /* movss */
    xmm0 = xmm0 + MEMF(0x649550); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00049D06; /* jbe: below or equal (unsigned <=) */

loc_00049D01: ;
    MEMF(edi + 0x58) = xmm0; /* movss */

loc_00049D06: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00049D10
 * Original: 0x00049D10 - 0x00049D6A (90 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049D10(void)
{
    uint32_t ebp;
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00049D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    xmm0 = MEMF(edi + 0x24); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    ebx = 0; /* xor self */
    eax = esp + 0x38;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x38) = 0x5D4C44;
    MEM32(esp + 0x8C) = ebx;
    PUSH32(esp, 0); sub_00049F30(); /* call 0x00049F30 */

loc_00049D56: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_00049D70(); return; /* tail jmp 0x00049D70 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00049F30
 * Original: 0x00049F30 - 0x0004A02C (252 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049F30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00049F30: ;
    ecx = MEM32(edi + 0x94);
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x8BC);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x780AB0) = 0x5D508C;
    MEM32(0x6C0210) = 0x318;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x10000;
    if (CMP_EQ(esi, ebx)) goto loc_00049F8B; /* je: equal / zero */

loc_00049F6C: ;
    edx = MEM32(eax + 0x54);
    ecx = edx;
    ecx = ecx << 4;
    ecx = ecx + eax + 4;
    edx++;
    MEM32(eax + 0x54) = edx;
    MEM32(ecx) = 1;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = esi;

loc_00049F8B: ;
    edx = MEM32(edi + 0x94);
    ecx = MEM32(edx + 0x3E0);
    if (CMP_EQ(ecx, ebx)) goto loc_00049FE3; /* je: equal / zero */

loc_00049F9B: ;
    if (CMP_EQ(MEM8(ecx + 0x20C), LO8(ebx))) goto loc_00049FE3; /* je: equal / zero */

loc_00049FA3: ;
    SET_LO8(ecx, MEM8(ecx + 0x217));
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00049FE3; /* je: equal / zero */

loc_00049FAD: ;
    esi = MEM32(eax + 0x54);
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(ecx));
    ecx = ecx & 0xFFFFFF7Fu;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + edx;
    edx = esi;
    edx = edx << 4;
    edx = edx + eax + 4;
    esi++;
    MEM32(eax + 0x54) = esi;
    MEM32(edx) = 1;
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = ebx;
    MEM32(edx + 0xC) = ecx;

loc_00049FE3: ;
    edx = MEM32(eax + 0x54);
    ecx = edx;
    ecx = ecx << 4;
    ecx = ecx + eax + 4;
    edx++;
    MEM32(eax + 0x54) = edx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx) = 4;
    MEM32(ecx + 8) = 0x5E;
    edx = MEM32(eax + 0x54);
    ecx = edx;
    ecx = ecx << 4;
    ecx = ecx + eax + 4;
    edx++;
    MEM32(eax + 0x54) = edx;
    POP32(esp, esi);
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx) = 4;
    MEM32(ecx + 8) = 0xC;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004A030
 * Original: 0x0004A030 - 0x0004A04C (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A030(void)
{

loc_0004A030: ;
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A050
 * Original: 0x0004A050 - 0x0004A16A (282 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A050(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_0004A050: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648E84); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(0x648D18); /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm2; /* movss */
    MEMF(eax + 0x2C) = xmm3; /* movss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    ecx = 0x5D5064;
    MEM32(eax + 0x18) = ecx;
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEM8(eax + 0x48) = 0;
    MEMF(eax + 0x60) = xmm0; /* movss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    MEMF(eax + 0x68) = xmm0; /* movss */
    MEMF(eax + 0x6C) = xmm2; /* movss */
    MEMF(eax + 0x70) = xmm3; /* movss */
    MEMF(eax + 0x74) = xmm1; /* movss */
    MEMF(eax + 0x78) = xmm1; /* movss */
    MEMF(eax + 0x7C) = xmm1; /* movss */
    MEMF(eax + 0x80) = xmm1; /* movss */
    MEM32(eax + 0x5C) = ecx;
    MEMF(eax + 0x88) = xmm0; /* movss */
    MEMF(eax + 0x8C) = xmm0; /* movss */
    MEMF(eax + 0x90) = xmm0; /* movss */
    MEMF(eax + 0x94) = xmm2; /* movss */
    MEMF(eax + 0x98) = xmm3; /* movss */
    MEMF(eax + 0x9C) = xmm1; /* movss */
    MEMF(eax + 0xA0) = xmm1; /* movss */
    MEMF(eax + 0xA4) = xmm1; /* movss */
    MEMF(eax + 0xA8) = xmm1; /* movss */
    MEM32(eax + 0x84) = ecx;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004A170
 * Original: 0x0004A170 - 0x0004A1E1 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004A170: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = eax;
    ecx = esi;
    edx = MEM32(ecx);
    eax = esi + 0xC;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    edx = ebx + 0x2DC;
    ecx = MEM32(edx);
    eax = esi;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    PUSH32(esp, esi);
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0); sub_0004A270(); /* call 0x0004A270 */

loc_0004A1A9: ;
    MEMF(esi + 0x20) = xmm0; /* movss */
    (void)0; /* cmp MEM8(ebx), 0 - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    POP32(esp, ebx);
    ecx = esi + 0x18;
    if (CMP_EQ(MEM8(ebx), 0)) { sub_0004A1E1(); return; } /* je: equal / zero */

loc_0004A1BD: ;
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(ecx + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    g_seh_ebp = ebp; sub_0004A203(); return; /* tail jmp 0x0004A203 */

}

/**
 * sub_0004A270
 * Original: 0x0004A270 - 0x0004A2A5 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004A270: ;
    esp = esp - 0x10;
    eax = MEM32(ebx + 4);
    (void)0; /* cmp MEM8(eax + 0x8C7), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x3E0);
    xmm0 = MEMF(esi + 0x7C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEM8(esp + 0x1C) = 0;
    if (CMP_NE(MEM8(eax + 0x8C7), 1)) { sub_0004A2A5(); return; } /* jne: not equal / not zero */

loc_0004A29B: ;
    xmm0 = MEMF(0x5A005C); /* movss */
    g_seh_ebp = ebp; sub_0004A2F4(); return; /* tail jmp 0x0004A2F4 */

}

/**
 * sub_0004A650
 * Original: 0x0004A650 - 0x0004A677 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A650(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004A650: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5D50C4;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_0004A671; /* je: equal / zero */

loc_0004A660: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0004A66E: ;
    esp = esp + 4;

loc_0004A671: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004A680
 * Original: 0x0004A680 - 0x0004A7CB (331 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A680(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm7;

loc_0004A680: ;
    esp = esp - 8;
    xmm0 = MEMF(esi + 0x1C); /* movss */
    xmm1 = MEMF(esi + 0x24); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 4) = xmm1; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0004A6D5; /* jnp: not parity */

loc_0004A6A8: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(esp + 4);
    xmm0 = MEMF(esp + 0xC); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x14;
    edx = esp + 0xC;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0004A6C7: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    esp = esp + 0xC;
    MEMF(esi + 0x1C) = xmm0; /* movss */

loc_0004A6D5: ;
    xmm0 = MEMF(esi + 0x20); /* movss */
    xmm1 = MEMF(esi + 0x30); /* movss */
    xmm1 = xmm1 + MEMF(esi + 0x28); /* addss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 4) = xmm1; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0004A729; /* jnp: not parity */

loc_0004A6FC: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(esp + 4);
    xmm0 = MEMF(esp + 0xC); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x18;
    edx = esp + 0xC;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0004A71B: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    esp = esp + 0xC;
    MEMF(esi + 0x20) = xmm0; /* movss */

loc_0004A729: ;
    xmm0 = MEMF(esi + 4); /* movss */
    xmm1 = MEMF(esi + 0x1C); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* ucomiss xmm0, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 4) = xmm1; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0004A778; /* jnp: not parity */

loc_0004A74B: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esp + 4);
    xmm0 = MEMF(esp + 0xC); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    edx = esp + 0xC;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0004A76A: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    esp = esp + 0xC;
    MEMF(esi + 4) = xmm0; /* movss */

loc_0004A778: ;
    xmm0 = MEMF(esi + 0x20); /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm7; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_0004A7C5; /* jnp: not parity */

loc_0004A798: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esp + 4);
    xmm0 = MEMF(esp + 0xC); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x10;
    edx = esp + 0xC;
    PUSH32(esp, 0); sub_002B0760(); /* call 0x002B0760 */

loc_0004A7B7: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    esp = esp + 0xC;
    MEMF(esi + 8) = xmm0; /* movss */

loc_0004A7C5: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004A7D0
 * Original: 0x0004A7D0 - 0x0004A872 (162 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A7D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0004A7D0: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(edi + 0x54); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM8(esi), 1)) goto loc_0004A84C; /* je: equal / zero */

loc_0004A7E0: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0004A847; /* jp: parity */

loc_0004A7E9: ;
    eax = MEM32(esi + 0xC0);
    eax = eax >> 7;
    if (TEST_NZ(LO8(eax), 1)) goto loc_0004A847; /* jne: not equal / not zero */

loc_0004A7F6: ;
    eax = MEM32(ecx + 0x10C);
    if (TEST_Z(eax, eax)) goto loc_0004A86E; /* je: equal / zero */

loc_0004A800: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00047550(); /* call 0x00047550 */

loc_0004A807: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x220));

loc_0004A810: ;
    eax--;
    if (CMP_GE(LO16(eax), 1)) goto loc_0004A81C; /* jge: greater or equal (signed >=) */

loc_0004A817: ;
    eax = 3;

loc_0004A81C: ;
    edx = 1;
    SET_LO8(ecx, LO8(eax));
    edx = edx << LO8(ecx);
    if (TEST_Z(LO8(edx), 0xB)) goto loc_0004A810; /* je: equal / zero */

loc_0004A82A: ;
    MEM16(esi + 0x220) = LO16(eax);
    PUSH32(esp, 0); sub_0003DF80(); /* call 0x0003DF80 */

loc_0004A836: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(edi + 0x54) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0004A847: ;
    xmm0 = MEMF(edi + 0x54); /* movss */

loc_0004A84C: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0004A86E; /* jbe: below or equal (unsigned <=) */

loc_0004A851: ;
    xmm0 = MEMF(edi + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(esp + 8); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(edi + 0x54) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0004A869; /* jbe: below or equal (unsigned <=) */

loc_0004A866: ;
    xmm0 = xmm1; /* movaps */

loc_0004A869: ;
    MEMF(edi + 0x54) = xmm0; /* movss */

loc_0004A86E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004A880
 * Original: 0x0004A880 - 0x0004A8C0 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004A880: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x8FC);
    if (TEST_NZ(edi, edi)) { sub_0004A8C0(); return; } /* jne: not equal / not zero */

loc_0004A897: ;
    xmm0 = MEMF(0x5A005C); /* movss */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEMF(edx) = xmm0; /* movss */
    MEMF(ebp) = xmm0; /* movss */
    POP32(esp, esi);
    MEMF(ebx) = xmm0; /* movss */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004A930
 * Original: 0x0004A930 - 0x0004A955 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004A930: ;
    ecx = MEM32(esi + 0x3E0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) { sub_0004A955(); return; } /* je: equal / zero */

loc_0004A93D: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) { sub_0004A955(); return; } /* je: equal / zero */

loc_0004A947: ;
    edx = MEM32(eax + 0x2B0);
    if (TEST_Z(edx, edx)) { sub_0004A955(); return; } /* je: equal / zero */

loc_0004A951: ;
    SET_LO8(edx, 1);
    g_seh_ebp = ebp; sub_0004A957(); return; /* tail jmp 0x0004A957 */

}

/**
 * sub_0004A9B0
 * Original: 0x0004A9B0 - 0x0004A9E2 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A9B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004A9B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0x606A68;
    MEM32(esi) = 0x5D50C8;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 4) = eax;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0004A9DC; /* je: equal / zero */

loc_0004A9CB: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0004A9D9: ;
    esp = esp + 4;

loc_0004A9DC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004A9F0
 * Original: 0x0004A9F0 - 0x0004AA7F (143 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A9F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004A9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(eax, esi)) goto loc_0004AA7D; /* je: equal / zero */

loc_0004A9FB: ;
    ecx = esi + 4;
    edx = eax + 4;
    if (CMP_EQ(edx, ecx)) goto loc_0004AA3D; /* je: equal / zero */

loc_0004AA05: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(ecx + 8);
    MEM32(edx + 8) = edi;
    edi = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = edi;
    edi = MEM32(ecx + 0x10);
    MEM32(edx + 0x10) = edi;
    edi = MEM32(ecx + 0x14);
    MEM32(edx + 0x14) = edi;
    edi = MEM32(ecx + 0x18);
    MEM32(edx + 0x18) = edi;
    edi = MEM32(ecx + 0x1C);
    MEM32(edx + 0x1C) = edi;
    edi = MEM32(ecx + 0x20);
    MEM32(edx + 0x20) = edi;
    ecx = MEM32(ecx + 0x24);
    MEM32(edx + 0x24) = ecx;
    POP32(esp, edi);

loc_0004AA3D: ;
    ecx = esi + 0x2C;
    edx = eax + 0x2C;
    if (CMP_EQ(edx, ecx)) goto loc_0004AA7D; /* je: equal / zero */

loc_0004AA47: ;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    esi = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = esi;
    esi = MEM32(ecx + 0x10);
    MEM32(edx + 0x10) = esi;
    esi = MEM32(ecx + 0x14);
    MEM32(edx + 0x14) = esi;
    esi = MEM32(ecx + 0x18);
    MEM32(edx + 0x18) = esi;
    esi = MEM32(ecx + 0x1C);
    MEM32(edx + 0x1C) = esi;
    esi = MEM32(ecx + 0x20);
    MEM32(edx + 0x20) = esi;
    ecx = MEM32(ecx + 0x24);
    MEM32(edx + 0x24) = ecx;

loc_0004AA7D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004AA80
 * Original: 0x0004AA80 - 0x0004AAB2 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AA80(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004AA80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0x606A68;
    MEM32(esi) = 0x5D50CC;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 4) = eax;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0004AAAC; /* je: equal / zero */

loc_0004AA9B: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0004AAA9: ;
    esp = esp + 4;

loc_0004AAAC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004AAC0
 * Original: 0x0004AAC0 - 0x0004AADC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AAC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004AAC0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_0004AD20(); /* call 0x0004AD20 */

loc_0004AAC9: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0004AADC(); return; } /* jne: not equal / not zero */

loc_0004AACD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0004AAED(); return; /* tail jmp 0x0004AAED */

}

/**
 * sub_0004AB70
 * Original: 0x0004AB70 - 0x0004ABD4 (100 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004AB70: ;
    esp = esp - 0x10;
    xmm4 = 0.0f; /* xorps self = zero */
    eax = eax + eax * 4;
    eax = eax << 2;
    xmm0 = MEMF(eax + 0x75B928); /* movss */
    xmm1 = MEMF(eax + 0x75B924); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x75B92C); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x75B930); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x75B934); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm4 <= xmm0)) { sub_0004ABD4(); return; } /* jbe: below or equal (unsigned <=) */

loc_0004ABCC: ;
    MEMF(esp + 0x14) = xmm4; /* movss */
    g_seh_ebp = ebp; sub_0004ABE7(); return; /* tail jmp 0x0004ABE7 */

}

/**
 * sub_0004AD20
 * Original: 0x0004AD20 - 0x0004AD2D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AD20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004AD20: ;
    if (CMP_EQ(MEM16(eax + 0x684), 0)) { sub_0004AD2D(); return; } /* je: equal / zero */

loc_0004AD2A: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0004AD90
 * Original: 0x0004AD90 - 0x0004B01E (654 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AD90(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_0004AD90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_00048B20(); /* call 0x00048B20 */

loc_0004AD99: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x3C0) = xmm0; /* movss */
    MEMF(esi + 0x3C4) = xmm0; /* movss */
    MEMF(esi + 0x3C8) = xmm0; /* movss */
    MEMF(esi + 0x3D0) = xmm0; /* movss */
    MEMF(esi + 0x3D8) = xmm0; /* movss */
    MEMF(esi + 0x3DC) = xmm0; /* movss */
    MEMF(esi + 0x3E0) = xmm0; /* movss */
    MEMF(esi + 0x3F0) = xmm0; /* movss */
    MEMF(esi + 0x3F4) = xmm0; /* movss */
    MEMF(esi + 0x3F8) = xmm0; /* movss */
    MEMF(esi + 0x3FC) = xmm0; /* movss */
    MEMF(esi + 0x400) = xmm0; /* movss */
    xmm1 = MEMF(0x648E84); /* movss */
    MEM32(esi) = 0x5D50D0;
    MEM8(esi + 0x3B1) = 1;
    MEM32(esi + 0x3CC) = 6;
    xmm3 = MEMF(0x648D18); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    eax = 0; /* xor self */
    MEM8(esi + 0x3A0) = LO8(eax);
    MEM8(esi + 0x3A1) = LO8(eax);
    MEM8(esi + 0x3A2) = LO8(eax);
    MEM8(esi + 0x3B0) = LO8(eax);
    MEM32(esi + 0x3D4) = eax;
    MEMF(esi + 0x408) = xmm0; /* movss */
    MEMF(esi + 0x40C) = xmm0; /* movss */
    MEMF(esi + 0x410) = xmm0; /* movss */
    MEMF(esi + 0x414) = xmm2; /* movss */
    MEMF(esi + 0x418) = xmm3; /* movss */
    MEMF(esi + 0x41C) = xmm1; /* movss */
    MEMF(esi + 0x420) = xmm1; /* movss */
    MEMF(esi + 0x424) = xmm1; /* movss */
    MEMF(esi + 0x428) = xmm1; /* movss */
    ecx = 0x5D5064;
    MEM32(esi + 0x404) = ecx;
    MEMF(esi + 0x430) = xmm0; /* movss */
    MEMF(esi + 0x434) = xmm0; /* movss */
    MEMF(esi + 0x438) = xmm0; /* movss */
    MEM32(esi + 0x42C) = ecx;
    MEMF(esi + 0x43C) = xmm2; /* movss */
    MEMF(esi + 0x440) = xmm3; /* movss */
    MEMF(esi + 0x444) = xmm1; /* movss */
    MEMF(esi + 0x448) = xmm1; /* movss */
    MEMF(esi + 0x44C) = xmm1; /* movss */
    MEMF(esi + 0x450) = xmm1; /* movss */
    MEMF(esi + 0x458) = xmm0; /* movss */
    MEMF(esi + 0x45C) = xmm0; /* movss */
    MEMF(esi + 0x460) = xmm0; /* movss */
    MEM32(esi + 0x454) = ecx;
    MEMF(esi + 0x464) = xmm2; /* movss */
    MEMF(esi + 0x468) = xmm3; /* movss */
    MEMF(esi + 0x46C) = xmm1; /* movss */
    MEMF(esi + 0x470) = xmm1; /* movss */
    MEMF(esi + 0x474) = xmm1; /* movss */
    MEMF(esi + 0x478) = xmm1; /* movss */
    MEMF(esi + 0x480) = xmm0; /* movss */
    MEM8(esi + 0x47C) = LO8(eax);
    MEM32(esi + 0x484) = eax;
    MEM32(esi + 0x488) = eax;
    ecx = 0x10;
    edi = esi + 0x360;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEMF(esi + 0x3A4) = xmm0; /* movss */
    MEMF(esi + 0x3A8) = xmm0; /* movss */
    MEMF(esi + 0x3AC) = xmm0; /* movss */
    MEMF(esi + 0x3B4) = xmm0; /* movss */
    MEMF(esi + 0x3B8) = xmm0; /* movss */
    MEMF(esi + 0x3BC) = xmm0; /* movss */
    MEMF(esi + 0x3E4) = xmm0; /* movss */
    MEMF(esi + 0x3E8) = xmm0; /* movss */
    MEMF(esi + 0x3EC) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esi + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0x98) = xmm3; /* movss */
    MEMF(esi + 0xB4) = xmm0; /* movss */
    MEMF(esi + 0xB8) = xmm2; /* movss */
    MEMF(esi + 0xDC) = xmm0; /* movss */
    MEMF(esi + 0xE0) = xmm2; /* movss */
    MEMF(esi + 0x27C) = xmm0; /* movss */
    MEMF(esi + 0x280) = xmm2; /* movss */
    MEMF(esi + 0x2B8) = xmm0; /* movss */
    MEMF(esi + 0x2BC) = xmm2; /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x2E0) = xmm0; /* movss */
    MEMF(esi + 0x2E4) = xmm2; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004B020
 * Original: 0x0004B020 - 0x0004B06D (77 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B020(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004B020: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0x606A68;
    MEM32(esi) = 0x5D50D0;
    MEM32(esi + 0x484) = 0;
    MEM32(esi + 0x454) = eax;
    MEM32(esi + 0x42C) = eax;
    MEM32(esi + 0x404) = eax;
    PUSH32(esp, 0); sub_00048F00(); /* call 0x00048F00 */

loc_0004B04F: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0004B067; /* je: equal / zero */

loc_0004B056: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0004B064: ;
    esp = esp + 4;

loc_0004B067: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B070
 * Original: 0x0004B070 - 0x0004B13D (205 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B070(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm4, xmm5;

loc_0004B070: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(edi + 0x47C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0004B0C8; /* je: equal / zero */

loc_0004B07D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp) = xmm0; /* movss */
    ecx = edi;
    xmm0 = xmm5; /* movaps */
    PUSH32(esp, 0); sub_0004B210(); /* call 0x0004B210 */

loc_0004B0A9: ;
    ecx = ebx;
    edx = MEM32(ecx);
    eax = edi + 0x3B4;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    MEM8(edi + 0x3B0) = 1;

loc_0004B0C8: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(edi + 0x3E0) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(edi + 0x3D8) = xmm5; /* movss */
    MEMF(edi + 0x3DC) = xmm4; /* movss */
    eax = MEM32(esi);
    edx = edi + 0x3E4;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esi + 8);
    MEMF(edi + 0x3F0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEM32(edx + 8) = eax;
    ecx = MEM32(ebx);
    MEM32(edi + 0x3F4) = ecx;
    edx = MEM32(ebx + 4);
    MEMF(edi + 0x3FC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(edi + 0x3F8) = edx;
    MEMF(edi + 0x400) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0004B140
 * Original: 0x0004B140 - 0x0004B207 (199 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B140(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm4, xmm5;

loc_0004B140: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(edi + 0x47C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0004B189; /* je: equal / zero */

loc_0004B14D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(esp) = xmm0; /* movss */
    ecx = edi;
    xmm0 = xmm5; /* movaps */
    PUSH32(esp, 0); sub_0004B210(); /* call 0x0004B210 */

loc_0004B182: ;
    MEM8(edi + 0x3B0) = 0;

loc_0004B189: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(edi + 0x3E0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(edi + 0x3D8) = xmm5; /* movss */
    MEMF(edi + 0x3DC) = xmm4; /* movss */
    ecx = MEM32(esi);
    eax = edi + 0x3E4;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEMF(edi + 0x3F0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(edi + 0x3F4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(edi + 0x3F8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(edi + 0x3FC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM32(eax + 8) = ecx;
    MEMF(edi + 0x400) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0004B210
 * Original: 0x0004B210 - 0x0004B320 (272 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B210(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0004B210: ;
    PUSH32(esp, ecx);
    edx = ecx + 4;
    if (TEST_Z(edx, edx)) goto loc_0004B31C; /* je: equal / zero */

loc_0004B21C: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x92));
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0004B267; /* jne: not equal / not zero */

loc_0004B227: ;
    eax = esp + 4;
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B236: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(edx + 0xC) = xmm0; /* movss */
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0004B267; /* jne: not equal / not zero */

loc_0004B245: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B25A: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(edx + 0x34) = xmm0; /* movss */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */

loc_0004B267: ;
    POP32(esp, ebx);
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0004B28A; /* jne: not equal / not zero */

loc_0004B26A: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    eax = esp + 8;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B27F: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(edx + 0x5C) = xmm0; /* movss */

loc_0004B28A: ;
    xmm0 = MEMF(0x649360); /* movss */
    MEMF(edx + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x64935C); /* movss */
    MEMF(edx + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    eax = MEM32(esi);
    MEMF(ecx + 0x3AC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(ecx + 0x3A4) = eax;
    MEMF(ecx + 0x3A8) = xmm1; /* movss */
    MEMF(ecx + 0x264) = xmm0; /* movss */
    MEMF(ecx + 0x26C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0x2B0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x2D8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(ecx + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0xFC); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    MEMF(ecx + 0xD4) = xmm0; /* movss */

loc_0004B31C: ;
    POP32(esp, ecx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0004B320
 * Original: 0x0004B320 - 0x0004BA74 (1876 bytes, 437 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0004B320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x164;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(ebp + 8);
    edi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0004BEE0(); /* call 0x0004BEE0 */

loc_0004B33C: ;
    SET_LO8(eax, MEM8(edi + 0x3B0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004B4A3; /* jne: not equal / not zero */

loc_0004B34A: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0x8B8);
    if (TEST_NZ(eax, eax)) goto loc_0004B3BC; /* jne: not equal / not zero */

loc_0004B357: ;
    SET_LO8(eax, MEM8(edi + 0x3B1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004B3BC; /* jne: not equal / not zero */

loc_0004B361: ;
    xmm0 = MEMF(0x648D18); /* movss */
    xmm1 = MEMF(0x648E84); /* movss */
    edx = MEM32(0x7FA21C);
    MEMF(edi + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(edi + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(0x649200); /* movss */
    MEMF(edi + 0x24) = xmm0; /* movss */
    MEMF(edi + 0x20) = xmm1; /* movss */
    PUSH32(esp, ebx);
    MEMF(edi + 0x4C) = xmm0; /* movss */
    MEMF(edi + 0x48) = xmm1; /* movss */
    PUSH32(esp, edx);
    MEMF(edi + 0x74) = xmm0; /* movss */
    MEMF(edi + 0x70) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00048F90(); /* call 0x00048F90 */

loc_0004B3BC: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(edi + 0xA8);
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax + 0xAC) = ecx;
    eax = MEM32(ebx + 4);
    xmm0 = xmm0 / MEMF(edi + 0xFC); /* divss */
    xmm0 = xmm0 * MEMF(edi + 0xD0); /* mulss */
    xmm0 = xmm0 * MEMF(eax + 0xFC); /* mulss */
    eax = eax + 0xA0;
    MEMF(eax + 0x34) = xmm0; /* movss */
    edx = MEM32(edi + 0xC);
    eax = esp + 0x18;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B408: ;
    eax = MEM32(edi + 0x34);
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B418: ;
    ecx = MEM32(edi + 0x5C);
    eax = esp + 0x20;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B428: ;
    edx = MEM32(edi + 0x2D4);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(edi + 0x2AC); /* movss */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x24C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, 1);
    ecx = ebx;
    PUSH32(esp, 0); sub_00042670(); /* call 0x00042670 */

loc_0004B456: ;
    ecx = MEM32(ebx + 4);
    SET_LO8(eax, MEM8(ecx + 0x8C2));
    esp = esp + 0x14;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004BA2B; /* jne: not equal / not zero */

loc_0004B46A: ;
    eax = edi + 0x3A4;
    edx = ebx + 0x2DC;
    ecx = eax;
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax);
    ebx = ebx + 0x2F4;
    MEM32(ebx) = edx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(ebx + 8) = edx;
    goto loc_0004BA2B;

loc_0004B4A3: ;
    esi = edi + 4;
    if (TEST_Z(esi, esi)) goto loc_0004BA6B; /* je: equal / zero */

loc_0004B4AE: ;
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esi + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(0x648D50); /* movss */
    MEMF(esi + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649A20); /* movss */
    MEMF(esi + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(esi + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x649D88); /* movss */
    MEMF(esi + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(esi + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xC); /* movss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B530: ;
    xmm0 = MEMF(esi + 0x34); /* movss */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B544: ;
    xmm0 = MEMF(esi + 0x5C); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B558: ;
    SET_LO8(eax, MEM8(edi + 0x3B1));
    (void)0; /* cmp LO8(eax), MEM8(edi + 0x3B0) - flags set for next jcc */
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    xmm6 = MEMF(esp + 0x20); /* movss */
    if (CMP_EQ(LO8(eax), MEM8(edi + 0x3B0))) goto loc_0004B590; /* je: equal / zero */

loc_0004B578: ;
    MEMF(edi + 0x3C0) = xmm4; /* movss */
    MEMF(edi + 0x3C4) = xmm5; /* movss */
    MEMF(edi + 0x3C8) = xmm6; /* movss */

loc_0004B590: ;
    xmm0 = MEMF(edi + 0x3C0); /* movss */
    xmm7 = MEMF(0x648E6C); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm7 - sets EFLAGS */
    xmm2 = xmm4; /* movaps */
    if ((xmm1 < xmm7)) goto loc_0004B5B9; /* jb: below (unsigned <) */

loc_0004B5AF: ;
    xmm2 = xmm2 - MEMF(0x648F60); /* subss */
    goto loc_0004B5CE;

loc_0004B5B9: ;
    xmm3 = MEMF(0x648F64); /* movss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 < xmm1)) goto loc_0004B5CE; /* jb: below (unsigned <) */

loc_0004B5C6: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_0004B5CE: ;
    SET_LO8(ecx, MEM8(esi + 0x92));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0004B605; /* jne: not equal / not zero */

loc_0004B5D8: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B5FA: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */

loc_0004B605: ;
    xmm0 = MEMF(edi + 0x3C4); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm7 - sets EFLAGS */
    xmm2 = xmm5; /* movaps */
    if ((xmm1 < xmm7)) goto loc_0004B626; /* jb: below (unsigned <) */

loc_0004B61C: ;
    xmm2 = xmm2 - MEMF(0x648F60); /* subss */
    goto loc_0004B63B;

loc_0004B626: ;
    xmm3 = MEMF(0x648F64); /* movss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 < xmm1)) goto loc_0004B63B; /* jb: below (unsigned <) */

loc_0004B633: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_0004B63B: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0004B66C; /* jne: not equal / not zero */

loc_0004B63F: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B661: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */

loc_0004B66C: ;
    xmm0 = MEMF(edi + 0x3C8); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm7 - sets EFLAGS */
    xmm2 = xmm6; /* movaps */
    if ((xmm1 < xmm7)) goto loc_0004B68D; /* jb: below (unsigned <) */

loc_0004B683: ;
    xmm2 = xmm2 - MEMF(0x648F60); /* subss */
    goto loc_0004B6A2;

loc_0004B68D: ;
    xmm3 = MEMF(0x648F64); /* movss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 < xmm1)) goto loc_0004B6A2; /* jb: below (unsigned <) */

loc_0004B69A: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_0004B6A2: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0004B6D3; /* jne: not equal / not zero */

loc_0004B6A6: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B6C8: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 0x5C) = xmm0; /* movss */

loc_0004B6D3: ;
    xmm0 = MEMF(edi + 0x3C0); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm7 - sets EFLAGS */
    xmm2 = xmm4; /* movaps */
    if ((xmm1 < xmm7)) goto loc_0004B6F4; /* jb: below (unsigned <) */

loc_0004B6EA: ;
    xmm2 = xmm2 - MEMF(0x648F60); /* subss */
    goto loc_0004B709;

loc_0004B6F4: ;
    xmm3 = MEMF(0x648F64); /* movss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 < xmm1)) goto loc_0004B709; /* jb: below (unsigned <) */

loc_0004B701: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_0004B709: ;
    ecx = MEM32(ebx + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004B746; /* jne: not equal / not zero */

loc_0004B719: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B73B: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0xC) = xmm0; /* movss */

loc_0004B746: ;
    xmm0 = MEMF(edi + 0x3C4); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm7 - sets EFLAGS */
    xmm2 = xmm5; /* movaps */
    if ((xmm1 < xmm7)) goto loc_0004B767; /* jb: below (unsigned <) */

loc_0004B75D: ;
    xmm2 = xmm2 - MEMF(0x648F60); /* subss */
    goto loc_0004B77C;

loc_0004B767: ;
    xmm3 = MEMF(0x648F64); /* movss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 < xmm1)) goto loc_0004B77C; /* jb: below (unsigned <) */

loc_0004B774: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_0004B77C: ;
    ecx = MEM32(ebx + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004B7B9; /* jne: not equal / not zero */

loc_0004B78C: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B7AE: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_0004B7B9: ;
    xmm0 = MEMF(edi + 0x3C8); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm7 - sets EFLAGS */
    xmm2 = xmm6; /* movaps */
    if ((xmm1 < xmm7)) goto loc_0004B7DA; /* jb: below (unsigned <) */

loc_0004B7D0: ;
    xmm2 = xmm2 - MEMF(0x648F60); /* subss */
    goto loc_0004B7EF;

loc_0004B7DA: ;
    xmm3 = MEMF(0x648F64); /* movss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 < xmm1)) goto loc_0004B7EF; /* jb: below (unsigned <) */

loc_0004B7E7: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_0004B7EF: ;
    ecx = MEM32(ebx + 4);
    SET_LO8(eax, MEM8(ecx + 0x96));
    ecx = ecx + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004B82C; /* jne: not equal / not zero */

loc_0004B7FF: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B821: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */

loc_0004B82C: ;
    eax = esi;
    MEMF(edi + 0x3C0) = xmm4; /* movss */
    MEMF(edi + 0x3C4) = xmm5; /* movss */
    MEMF(edi + 0x3C8) = xmm6; /* movss */
    PUSH32(esp, 0); sub_000484C0(); /* call 0x000484C0 */

loc_0004B84B: ;
    xmm0 = MEMF(esi + 0x30); /* movss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B85F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    xmm4 = MEMF(0x648E18); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm4; /* mulss */
    SET_LO8(eax, 0x78);
    ecx = esp + 0xB4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0004B888: ;
    xmm0 = MEMF(esi + 0x58); /* movss */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B89C: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    SET_LO8(eax, 0x79);
    ecx = esp + 0x134;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0004B8B9: ;
    xmm0 = MEMF(esi + 8); /* movss */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004B8CD: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    SET_LO8(eax, 0x7A);
    ecx = esp + 0xF4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0004B8EA: ;
    esp = esp + 4;
    ecx = esp + 0x130;
    PUSH32(esp, ecx);
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0004B907: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0xF4;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0004B91C: ;
    ecx = edi + 0x3B4;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x30;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0004B948: ;
    eax = esp + 0x24;
    edx = edi + 0x3A4;
    ecx = eax;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x20);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0);
    SET_LO8(eax, 0x78);
    ecx = esp + 0xB4;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0004B997: ;
    esp = esp + 4;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0004B9AA: ;
    eax = edx;
    ecx = esp + 0x18;
    esi = esp + 0x70;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_0004B9B9: ;
    PUSH32(esp, 0x40490FDB);
    SET_LO8(eax, 0x79);
    ecx = esp + 0x34;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0004B9C9: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0004B9DA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x34); /* subss */
    xmm0 = xmm0 - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    eax = edx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0004BA10: ;
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0004BA1C: ;
    PUSH32(esp, ebx);
    eax = esp + 0x34;
    SET_LO8(ecx, 1);
    PUSH32(esp, 0); sub_00042400(); /* call 0x00042400 */

loc_0004BA28: ;
    esp = esp + 4;

loc_0004BA2B: ;
    SET_LO8(eax, MEM8(edi + 0x47C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, MEM8(edi + 0x3B0));
    MEM8(edi + 0x3B1) = LO8(edx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0004BA6B; /* je: equal / zero */

loc_0004BA41: ;
    xmm0 = MEMF(edi + 0x5C); /* movss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004BA55: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(0x648E6C); /* subss */
    MEMF(edi + 0x480) = xmm0; /* movss */

loc_0004BA6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004BA80
 * Original: 0x0004BA80 - 0x0004BC7F (511 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BA80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004BA80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 4);
    ebx = 0; /* xor self */
    MEM8(eax + 0x8C1) = LO8(ebx);
    PUSH32(esp, edi);
    MEMF(esi + 0x480) = xmm0; /* movss */
    MEM32(esi + 0x488) = ecx;
    MEM32(esi + 0x484) = ebp;
    edi = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(esi + 0x90));
    edi = edi + 4;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0004BABC; /* je: equal / zero */

loc_0004BAB6: ;
    MEM8(esi + 0x93) = LO8(ebx);

loc_0004BABC: ;
    if (CMP_EQ(MEM8(esi + 0x91), LO8(ebx))) goto loc_0004BACA; /* je: equal / zero */

loc_0004BAC4: ;
    MEM8(esi + 0x94) = LO8(ebx);

loc_0004BACA: ;
    if (CMP_EQ(MEM8(esi + 0x92), LO8(ebx))) goto loc_0004BAD8; /* je: equal / zero */

loc_0004BAD2: ;
    MEM8(esi + 0x95) = LO8(ebx);

loc_0004BAD8: ;
    if (CMP_EQ(MEM8(edi + 0x8C), LO8(ebx))) goto loc_0004BAE6; /* je: equal / zero */

loc_0004BAE0: ;
    MEM8(edi + 0x8F) = LO8(ebx);

loc_0004BAE6: ;
    if (CMP_EQ(MEM8(edi + 0x8D), LO8(ebx))) goto loc_0004BAF4; /* je: equal / zero */

loc_0004BAEE: ;
    MEM8(edi + 0x90) = LO8(ebx);

loc_0004BAF4: ;
    if (CMP_EQ(MEM8(edi + 0x8E), LO8(ebx))) goto loc_0004BB02; /* je: equal / zero */

loc_0004BAFC: ;
    MEM8(edi + 0x91) = LO8(ebx);

loc_0004BB02: ;
    xmm4 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xC) = xmm4; /* movss */
    xmm0 = MEMF(edi + 0x30); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004BB1E: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x58); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004BB3D: ;
    SET_LO8(ecx, MEM8(esi + 0x96));
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x5C) = xmm0; /* movss */
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0004BB6C; /* jne: not equal / not zero */

loc_0004BB52: ;
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm4; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004BB61: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */

loc_0004BB6C: ;
    xmm0 = MEMF(edi + 0x30); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004BB80: ;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0004BBA4; /* jne: not equal / not zero */

loc_0004BB84: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004BB99: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */

loc_0004BBA4: ;
    xmm0 = MEMF(edi + 0x58); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004BBB8: ;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0004BBDC; /* jne: not equal / not zero */

loc_0004BBBC: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF7C0(); /* call 0x002AF7C0 */

loc_0004BBD1: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(esi + 0x60) = xmm0; /* movss */

loc_0004BBDC: ;
    ecx = MEM32(ebp + 4);
    ecx = ecx + 0x2A4;
    eax = esi + 0x2A4;
    PUSH32(esp, 0); sub_0004A9F0(); /* call 0x0004A9F0 */

loc_0004BBF0: ;
    edx = MEM32(ebp + 4);
    eax = MEM32(edx + 0x24C);
    MEM32(esi + 0x24C) = eax;
    ecx = MEM32(ebp + 0x2F4);
    MEM32(esi + 0x408) = ecx;
    edx = MEM32(ebp + 0x2F8);
    MEM32(esi + 0x430) = edx;
    eax = MEM32(ebp + 0x2FC);
    MEM32(esi + 0x458) = eax;
    ecx = MEM32(ebp + 0x2F4);
    MEM32(esi + 0x40C) = ecx;
    edx = MEM32(ebp + 0x2F8);
    MEM32(esi + 0x434) = edx;
    eax = MEM32(ebp + 0x2FC);
    (void)0; /* cmp MEM8(esp + 0x18), LO8(ebx) - flags set for next jcc */
    MEM32(esi + 0x45C) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x3D4) = eax;
    ecx = 1;
    if (CMP_NE(MEM8(esp + 0x18), LO8(ebx))) { sub_0004BC7F(); return; } /* jne: not equal / not zero */

loc_0004BC5C: ;
    if (CMP_EQ(eax, ecx)) { sub_0004BC7F(); return; } /* je: equal / zero */

loc_0004BC60: ;
    if (CMP_EQ(eax, 5)) { sub_0004BC7F(); return; } /* je: equal / zero */

loc_0004BC65: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x3CC) = ebx;
    MEM8(esi + 0x47C) = LO8(ebx);
    MEMF(esi + 0x3D0) = xmm4; /* movss */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0004BDC0
 * Original: 0x0004BDC0 - 0x0004BED4 (276 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BDC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0004BDC0: ;
    ecx = MEM32(eax + 0x3D4);
    if (CMP_EQ(ecx, 1)) { sub_0004BED4(); return; } /* je: equal / zero */

loc_0004BDCF: ;
    if (CMP_EQ(ecx, 5)) { sub_0004BED4(); return; } /* je: equal / zero */

loc_0004BDD8: ;
    ecx = MEM32(eax + 0x3E4);
    edx = MEM32(eax + 0x3E8);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x40C) = ecx;
    ecx = MEM32(eax + 0x3EC);
    MEM32(eax + 0x45C) = ecx;
    MEM32(eax + 0x434) = edx;
    edx = MEM32(eax + 0x40C);
    MEM32(eax + 0x408) = edx;
    MEMF(eax + 0x410) = xmm0; /* movss */
    ecx = MEM32(eax + 0x434);
    MEM32(eax + 0x430) = ecx;
    MEMF(eax + 0x438) = xmm0; /* movss */
    edx = MEM32(eax + 0x45C);
    MEM32(eax + 0x458) = edx;
    MEMF(eax + 0x460) = xmm0; /* movss */
    ecx = MEM32(eax + 0x484);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x90));
    SET_LO8(edx, 0); /* xor self */
    ecx = ecx + 4;
    if (CMP_EQ(LO8(ebx), LO8(edx))) goto loc_0004BE5A; /* je: equal / zero */

loc_0004BE54: ;
    MEM8(eax + 0x93) = LO8(edx);

loc_0004BE5A: ;
    if (CMP_EQ(MEM8(eax + 0x91), LO8(edx))) goto loc_0004BE68; /* je: equal / zero */

loc_0004BE62: ;
    MEM8(eax + 0x94) = LO8(edx);

loc_0004BE68: ;
    if (CMP_EQ(MEM8(eax + 0x92), LO8(edx))) goto loc_0004BE76; /* je: equal / zero */

loc_0004BE70: ;
    MEM8(eax + 0x95) = LO8(edx);

loc_0004BE76: ;
    if (CMP_EQ(MEM8(ecx + 0x8C), LO8(edx))) goto loc_0004BE84; /* je: equal / zero */

loc_0004BE7E: ;
    MEM8(ecx + 0x8F) = LO8(edx);

loc_0004BE84: ;
    if (CMP_EQ(MEM8(ecx + 0x8D), LO8(edx))) goto loc_0004BE92; /* je: equal / zero */

loc_0004BE8C: ;
    MEM8(ecx + 0x90) = LO8(edx);

loc_0004BE92: ;
    (void)0; /* cmp MEM8(ecx + 0x8E), LO8(edx) - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(MEM8(ecx + 0x8E), LO8(edx))) goto loc_0004BEA1; /* je: equal / zero */

loc_0004BE9B: ;
    MEM8(ecx + 0x91) = LO8(edx);

loc_0004BEA1: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(eax + 0x350) = xmm0; /* movss */
    MEMF(eax + 0x354) = xmm1; /* movss */
    MEMF(eax + 0x3D0) = xmm0; /* movss */
    MEM32(eax + 0x3CC) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0004BEE0
 * Original: 0x0004BEE0 - 0x0004BEF6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BEE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004BEE0: ;
    ecx = MEM32(edi + 0x3CC);
    esp = esp - 0x14;
    if (CMP_NE(ecx, 6)) { sub_0004BEF6(); return; } /* jne: not equal / not zero */

loc_0004BEEE: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C7C0
 * Original: 0x0004C7C0 - 0x0004C89D (221 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C7C0(void)
{
    float xmm0, xmm1, xmm2;

loc_0004C7C0: ;
    xmm0 = MEMF(0x68C2A8); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648E84); /* movss */
    PUSH32(esp, edi);
    MEMF(esi + 0x18) = xmm0; /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    MEMF(esi + 0x20) = xmm0; /* movss */
    MEMF(esi + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    edi = esi + 0x28;
    PUSH32(esp, edi);
    eax = 0x68C2A8;
    ecx = 3;
    MEM32(esi) = 0x5D5064;
    MEMF(esi + 4) = xmm2; /* movss */
    MEMF(esi + 8) = xmm1; /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B0220(); /* call 0x002B0220 */

loc_0004C830: ;
    MEM32(edi) = 0x606A60;
    edi = esi + 0x44;
    PUSH32(esp, edi);
    eax = 0x68C2C0;
    ecx = 3;
    PUSH32(esp, 0); sub_002B0220(); /* call 0x002B0220 */

loc_0004C849: ;
    MEM32(edi) = 0x606A60;
    edi = esi + 0x60;
    PUSH32(esp, edi);
    eax = 0x68C2D8;
    ecx = 3;
    PUSH32(esp, 0); sub_002B0220(); /* call 0x002B0220 */

loc_0004C862: ;
    MEM32(edi) = 0x606A60;
    edi = esi + 0x7C;
    PUSH32(esp, edi);
    eax = 0x68C2F0;
    ecx = 3;
    PUSH32(esp, 0); sub_002B0220(); /* call 0x002B0220 */

loc_0004C87B: ;
    xmm0 = MEMF(0x648E84); /* movss */
    MEM32(edi) = 0x606A60;
    MEMF(esi + 0x98) = xmm0; /* movss */
    MEMF(esi + 0x9C) = xmm0; /* movss */
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C8A0
 * Original: 0x0004C8A0 - 0x0004C950 (176 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C8A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004C8A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0x606A58;
    PUSH32(esp, edi);
    MEM32(esi + 0x7C) = ebx;
    eax = MEM32(esi + 0x84);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0004C8C8; /* je: equal / zero */

loc_0004C8B7: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0004C8C5: ;
    esp = esp + 4;

loc_0004C8C8: ;
    MEM32(esi + 0x84) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x8C) = edi;
    MEM32(esi + 0x60) = ebx;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, edi)) goto loc_0004C8F5; /* je: equal / zero */

loc_0004C8E4: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0004C8F2: ;
    esp = esp + 4;

loc_0004C8F5: ;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 0x6C) = edi;
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x44) = ebx;
    eax = MEM32(esi + 0x4C);
    if (CMP_EQ(eax, edi)) goto loc_0004C919; /* je: equal / zero */

loc_0004C908: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0004C916: ;
    esp = esp + 4;

loc_0004C919: ;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x28) = ebx;
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(eax, edi)) goto loc_0004C93D; /* je: equal / zero */

loc_0004C92C: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0004C93A: ;
    esp = esp + 4;

loc_0004C93D: ;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    POP32(esp, edi);
    MEM32(esi) = 0x606A68;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C950
 * Original: 0x0004C950 - 0x0004CD23 (979 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004C950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003D19C0(); /* call 0x003D19C0 */

loc_0004C957: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x6492B8); /* movss */
    ebx = 0; /* xor self */
    eax = 0x7FFF;
    MEM32(0x806ABC) = 0x4D110;
    MEM32(0x806AB4) = 0x4D110;
    MEM32(0x806FC8) = 0x4D160;
    MEMF(0x763040) = xmm0; /* movss */
    MEMF(0x763044) = xmm0; /* movss */
    MEMF(0x763048) = xmm1; /* movss */
    MEMF(0x76304C) = xmm1; /* movss */
    MEM32(0x763050) = ebx;
    MEM32(0x76305C) = eax;
    MEM32(0x763060) = eax;
    MEM32(0x763064) = ebx;
    MEM32(0x763068) = ebx;
    MEM32(0x76306C) = ebx;
    MEM32(0x763070) = ebx;
    MEMF(0x763074) = xmm0; /* movss */
    MEMF(0x763078) = xmm0; /* movss */
    MEMF(0x76307C) = xmm1; /* movss */
    MEMF(0x763080) = xmm1; /* movss */
    MEM32(0x763084) = ebx;
    MEM32(0x763090) = eax;
    MEM32(0x763094) = eax;
    MEM32(0x763098) = ebx;
    MEM32(0x76309C) = ebx;
    MEM32(0x7630A0) = ebx;
    MEM32(0x7630A4) = ebx;
    MEMF(0x7630A8) = xmm0; /* movss */
    MEMF(0x7630AC) = xmm0; /* movss */
    MEMF(0x7630B0) = xmm1; /* movss */
    MEMF(0x7630B4) = xmm1; /* movss */
    MEM32(0x7630B8) = ebx;
    MEM32(0x7630C4) = eax;
    MEM32(0x7630C8) = eax;
    MEM32(0x7630CC) = ebx;
    MEM32(0x7630D0) = ebx;
    MEM32(0x7630D4) = ebx;
    MEM32(0x7630D8) = ebx;
    MEMF(0x7630DC) = xmm0; /* movss */
    MEMF(0x7630E0) = xmm0; /* movss */
    MEMF(0x7630E4) = xmm1; /* movss */
    MEMF(0x7630E8) = xmm1; /* movss */
    MEM32(0x7630EC) = ebx;
    MEM32(0x7630F8) = eax;
    MEM32(0x7630FC) = eax;
    MEM32(0x763100) = ebx;
    MEM32(0x763104) = ebx;
    MEM32(0x763108) = ebx;
    MEM32(0x76310C) = ebx;
    MEMF(0x763110) = xmm0; /* movss */
    MEMF(0x763114) = xmm0; /* movss */
    MEMF(0x763118) = xmm1; /* movss */
    MEMF(0x76311C) = xmm1; /* movss */
    MEM32(0x763120) = ebx;
    MEM32(0x76312C) = eax;
    MEM32(0x763130) = eax;
    MEM32(0x763134) = ebx;
    MEM32(0x763138) = ebx;
    MEM32(0x76313C) = ebx;
    MEM32(0x763140) = ebx;
    MEMF(0x763144) = xmm0; /* movss */
    MEMF(0x763148) = xmm0; /* movss */
    MEMF(0x76314C) = xmm1; /* movss */
    MEMF(0x763150) = xmm1; /* movss */
    MEM32(0x763154) = ebx;
    MEM32(0x763160) = eax;
    MEM32(0x763164) = eax;
    MEM32(0x763168) = ebx;
    MEM32(0x76316C) = ebx;
    MEM32(0x763170) = ebx;
    MEM32(0x763174) = ebx;
    MEMF(0x763178) = xmm0; /* movss */
    MEMF(0x76317C) = xmm0; /* movss */
    MEMF(0x763180) = xmm1; /* movss */
    MEMF(0x763184) = xmm1; /* movss */
    MEM32(0x763188) = ebx;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xDD);
    PUSH32(esp, 0x5D50D4);
    PUSH32(esp, 0x500);
    MEM32(0x763194) = eax;
    MEM32(0x763198) = eax;
    MEM32(0x76319C) = ebx;
    MEM32(0x7631A0) = ebx;
    MEM32(0x7631A4) = ebx;
    MEM32(0x7631A8) = ebx;
    MEMF(0x7631AC) = xmm0; /* movss */
    MEMF(0x7631B0) = xmm0; /* movss */
    MEMF(0x7631B4) = xmm1; /* movss */
    MEMF(0x7631B8) = xmm1; /* movss */
    MEM32(0x7631BC) = ebx;
    MEM32(0x7631C8) = eax;
    MEM32(0x7631CC) = eax;
    MEM32(0x7631D0) = ebx;
    MEM32(0x7631D4) = ebx;
    MEM32(0x7631D8) = ebx;
    MEM32(0x7631DC) = ebx;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0004CBDD: ;
    edx = eax;
    esp = esp + 0x10;
    if (CMP_EQ(edx, ebx)) goto loc_0004CBF3; /* je: equal / zero */

loc_0004CBE6: ;
    PUSH32(esp, edi);
    ecx = 0x140;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0004CBF3: ;
    eax = 0; /* xor self */
    MEM32(0x7631E0) = eax;
    MEM32(0x7631E4) = eax;
    MEM32(0x7631E8) = eax;
    MEM32(0x7631EC) = eax;
    MEM32(0x7631F0) = eax;
    MEM32(0x7631F4) = eax;
    MEM32(0x7631F8) = eax;
    MEM32(0x7631FC) = eax;
    MEM32(0x763200) = eax;
    MEM32(0x763204) = eax;
    ecx = 0; /* xor self */
    MEM32(0x763208) = eax;
    MEM32(0x763234) = ecx;
    MEM32(0x76320C) = eax;
    MEM32(0x763238) = ecx;
    MEM32(0x763210) = eax;
    MEM32(0x76323C) = ecx;
    MEM32(0x763214) = eax;
    MEM32(0x763240) = ecx;
    MEM32(0x763218) = eax;
    MEM32(0x763244) = ecx;
    MEM32(0x76321C) = eax;
    MEM32(0x763248) = ecx;
    MEM32(0x763220) = eax;
    MEM32(0x76324C) = ecx;
    MEM32(0x763224) = eax;
    MEM32(0x763250) = ecx;
    MEM32(0x763228) = eax;
    MEM32(0x763254) = ecx;
    MEM32(0x76322C) = eax;
    MEM32(0x763258) = ecx;
    MEM32(0x8470F0) = edx;
    MEM32(0x806FD8) = edx;
    MEM32(0x806FD4) = 4;
    MEM32(0x763230) = eax;
    MEM16(0x76325C) = LO16(ecx);
    PUSH32(esp, 0); sub_0004DBA0(); /* call 0x0004DBA0 */

loc_0004CCBE: ;
    MEM8(0x76303D) = 1;
    esi = 0x763354;
    /* nop */
    edx = esi + -244;
    PUSH32(esp, 0); sub_0004DAE0(); /* call 0x0004DAE0 */

loc_0004CCDB: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0); sub_0004E570(); /* call 0x0004E570 */

loc_0004CCE2: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) { sub_0004CD23(); return; } /* je: equal / zero */

loc_0004CCE9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648F20); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 0xB) = LO8(ebx);
    MEMF(eax + 0x10) = xmm1; /* movss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0004CD25(); return; /* tail jmp 0x0004CD25 */

}

/**
 * sub_0004CE80
 * Original: 0x0004CE80 - 0x0004CF74 (244 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CE80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004CE80: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_0004CEA3; /* jb: below (unsigned <) */

loc_0004CE96: ;
    xmm0 = MEMF(0x648D54); /* movss */
    MEMF(esp) = xmm0; /* movss */

loc_0004CEA3: ;
    eax = MEM32(esp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM8(0x76303D) = 0;
    PUSH32(esp, 0); sub_003D1A80(); /* call 0x003D1A80 */

loc_0004CEB5: ;
    esp = esp + 4;
    MEM8(0x76303D) = 1;
    PUSH32(esp, 0); sub_0004DE20(); /* call 0x0004DE20 */

loc_0004CEC4: ;
    xmm6 = MEMF(0x7FA21C); /* movss */
    ebx = 0; /* xor self */
    esi = 0x76326C;

loc_0004CED3: ;
    SET_LO16(eax, MEM16(ebx * 2 + 0x763234));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0004CEF9; /* je: equal / zero */

loc_0004CEE0: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_003D2260(); /* call 0x003D2260 */

loc_0004CEEC: ;
    esp = esp + 8;
    MEM16(ebx * 2 + 0x763234) = 0;

loc_0004CEF9: ;
    PUSH32(esp, 0); sub_0004D320(); /* call 0x0004D320 */

loc_0004CEFE: ;
    xmm1 = MEMF(ebx * 4 + 0x7631E0); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0004CF57; /* jbe: below or equal (unsigned <=) */

loc_0004CF0F: ;
    ecx = MEM32(esi + 4);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    edx = eax;
    edx = edx ^ ecx;
    edx = edx - eax;
    if (CMP_GE(edx, 5)) goto loc_0004CF34; /* jge: greater or equal (signed >=) */

loc_0004CF22: ;
    ecx = MEM32(esi);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    edx = eax;
    edx = edx ^ ecx;
    edx = edx - eax;
    if (CMP_L(edx, 5)) goto loc_0004CF4E; /* jl: less (signed <) */

loc_0004CF34: ;
    xmm0 = MEMF(ebx * 4 + 0x7631E0); /* movss */
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    xmm0 = xmm0 - xmm6; /* subss */

loc_0004CF4E: ;
    MEMF(ebx * 4 + 0x7631E0) = xmm0; /* movss */

loc_0004CF57: ;
    esi = esi + 0x1B0;
    ebx++;
    if (CMP_L(esi, 0x7655DC)) goto loc_0004CED3; /* jl: less (signed <) */

loc_0004CF6A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_001FAB90(); return; /* tail jmp 0x001FAB90 */

}

/**
 * sub_0004CF80
 * Original: 0x0004CF80 - 0x0004D107 (391 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0004CF80: ;
    esp = esp - 0x14;
    ecx = 0; /* xor self */
    if (CMP_GE(eax, 4)) { sub_0004D107(); return; } /* jge: greater or equal (signed >=) */

loc_0004CF8E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x806FD8);
    PUSH32(esp, edi);
    edi = eax + eax * 4;
    edi = edi << 6;
    (void)0; /* cmp MEM8(edi + ebx + 0x13C), LO8(ecx) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(MEM8(edi + ebx + 0x13C), LO8(ecx))) goto loc_0004D0BF; /* je: equal / zero */

loc_0004CFAB: ;
    xmm0 = MEMF(0x6497BC); /* movss */
    xmm3 = (float)(int32_t)MEM32(esi); /* cvtsi2ss */
    xmm6 = MEMF(0x648D34); /* movss */
    xmm4 = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    xmm7 = MEMF(0x648D14); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    /* comiss xmm6, xmm3 - sets EFLAGS */
    xmm4 = xmm4 * xmm0; /* mulss */
    if ((xmm6 <= xmm3)) goto loc_0004CFDD; /* jbe: below or equal (unsigned <=) */

loc_0004CFD8: ;
    xmm3 = xmm6; /* movaps */
    goto loc_0004CFE5;

loc_0004CFDD: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 <= xmm7)) goto loc_0004CFE5; /* jbe: below or equal (unsigned <=) */

loc_0004CFE2: ;
    xmm3 = xmm7; /* movaps */

loc_0004CFE5: ;
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 <= xmm4)) goto loc_0004CFEF; /* jbe: below or equal (unsigned <=) */

loc_0004CFEA: ;
    xmm4 = xmm6; /* movaps */
    goto loc_0004CFF7;

loc_0004CFEF: ;
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_0004CFF7; /* jbe: below or equal (unsigned <=) */

loc_0004CFF4: ;
    xmm4 = xmm7; /* movaps */

loc_0004CFF7: ;
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm4; /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm5 = MEMF(0x648D3C); /* movss */
    /* comiss xmm5, MEMF(esp + 4) - sets EFLAGS */
    if ((xmm5 < MEMF(esp + 4))) goto loc_0004D03C; /* jb: below (unsigned <) */

loc_0004D034: ;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm4 = xmm3; /* movaps */
    goto loc_0004D099;

loc_0004D03C: ;
    ecx = esp + 4;
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_003E5770(); /* call 0x003E5770 */

loc_0004D049: ;
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm0 = MEMF(0x6497B8); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    /* comiss xmm6, xmm3 - sets EFLAGS */
    xmm4 = xmm4 * xmm0; /* mulss */
    if ((xmm6 <= xmm3)) goto loc_0004D07F; /* jbe: below or equal (unsigned <=) */

loc_0004D07A: ;
    xmm3 = xmm6; /* movaps */
    goto loc_0004D087;

loc_0004D07F: ;
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 <= xmm7)) goto loc_0004D087; /* jbe: below or equal (unsigned <=) */

loc_0004D084: ;
    xmm3 = xmm7; /* movaps */

loc_0004D087: ;
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 <= xmm4)) goto loc_0004D091; /* jbe: below or equal (unsigned <=) */

loc_0004D08C: ;
    xmm4 = xmm6; /* movaps */
    goto loc_0004D099;

loc_0004D091: ;
    /* comiss xmm4, xmm7 - sets EFLAGS */
    if ((xmm4 <= xmm7)) goto loc_0004D099; /* jbe: below or equal (unsigned <=) */

loc_0004D096: ;
    xmm4 = xmm7; /* movaps */

loc_0004D099: ;
    xmm0 = MEMF(0x649724); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    eax = (int32_t)xmm3; /* cvttss2si */
    ecx = SX16(LO16(eax));
    MEM32(esi) = ecx;
    xmm4 = xmm4 * xmm0; /* mulss */
    eax = (int32_t)xmm4; /* cvttss2si */
    ecx = SX16(LO16(eax));
    MEM32(edx) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0004D0BF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    MEM32(esi) = ecx;
    MEM32(edx) = ecx;
    eax = eax + 0x763040;
    edx = 0x7FFF;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x6492B8); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D110
 * Original: 0x0004D110 - 0x0004D155 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D110(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0004D110: ;
    SET_LO8(eax, MEM8(0x76303D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004D154; /* jne: not equal / not zero */

loc_0004D119: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = edi;
    PUSH32(esp, 0); sub_0004CF80(); /* call 0x0004CF80 */

loc_0004D12E: ;
    xmm1 = (float)(int32_t)MEM32(esi); /* cvtsi2ss */
    xmm0 = MEMF(0x58C0F4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    MEM32(esi) = eax;
    xmm1 = (float)(int32_t)MEM32(edi); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM32(edi) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0004D154: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D160
 * Original: 0x0004D160 - 0x0004D1B1 (81 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004D160: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ecx));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (TEST_Z(esi, 0x3F00)) goto loc_0004D192; /* je: equal / zero */

loc_0004D173: ;
    if (CMP_B(LO8(eax), 0x1E)) goto loc_0004D17D; /* jb: below (unsigned <) */

loc_0004D177: ;
    SET_LO8(eax, LO8(eax) - 0x1E);
    MEM8(ecx) = LO8(eax);
    goto loc_0004D180;

loc_0004D17D: ;
    MEM8(ecx) = 0;

loc_0004D180: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(eax));
    if (CMP_B(LO8(edx), 0x1E)) { sub_0004D1B1(); return; } /* jb: below (unsigned <) */

loc_0004D18B: ;
    SET_LO8(edx, LO8(edx) - 0x1E);
    MEM8(eax) = LO8(edx);
    g_seh_ebp = ebp; sub_0004D1B4(); return; /* tail jmp 0x0004D1B4 */

loc_0004D192: ;
    if (CMP_B(LO8(eax), 0xA)) goto loc_0004D19C; /* jb: below (unsigned <) */

loc_0004D196: ;
    SET_LO8(eax, LO8(eax) - 0xA);
    MEM8(ecx) = LO8(eax);
    goto loc_0004D19F;

loc_0004D19C: ;
    MEM8(ecx) = 0;

loc_0004D19F: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(eax));
    if (CMP_B(LO8(edx), 0xA)) { sub_0004D1B1(); return; } /* jb: below (unsigned <) */

loc_0004D1AA: ;
    SET_LO8(edx, LO8(edx) - 0xA);
    MEM8(eax) = LO8(edx);
    g_seh_ebp = ebp; sub_0004D1B4(); return; /* tail jmp 0x0004D1B4 */

}

/**
 * sub_0004D1F0
 * Original: 0x0004D1F0 - 0x0004D203 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D1F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004D1F0: ;
    (void)0; /* cmp edx, 2 - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (CMP_GE(edx, 2)) { sub_0004D203(); return; } /* jge: greater or equal (signed >=) */

loc_0004D1F7: ;
    ecx = MEM32(edx * 4 + 0x8470FC);
    esi = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_0004D208(); return; /* tail jmp 0x0004D208 */

}

/**
 * sub_0004D320
 * Original: 0x0004D320 - 0x0004D344 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004D320: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1B0);
    esi = esi + 0x763260;
    if (CMP_GE(ebx, 2)) { sub_0004D344(); return; } /* jge: greater or equal (signed >=) */

loc_0004D338: ;
    eax = MEM32(ebx * 4 + 0x8470FC);
    ebp = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0004D349(); return; /* tail jmp 0x0004D349 */

}

/**
 * sub_0004D470
 * Original: 0x0004D470 - 0x0004D6A4 (564 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004D470: ;
    esp = esp - 0x24;
    (void)0; /* cmp MEM8(esp + 0x28), 0 - flags set for next jcc */
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    eax = MEM32(eax + 4);
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(MEM8(esp + 0x28), 0)) goto loc_0004D69B; /* je: equal / zero */

loc_0004D49F: ;
    ebx = edx;
    ebx = (uint32_t)(-(int32_t)ebx);
    MEM32(esp + 0x34) = ebx;
    ebx = MEM32(esp + 0xC);
    ebx = (uint32_t)(-(int32_t)ebx);

loc_0004D4AD: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x20) = edx;
    edi = ecx;
    edi = edi & 0x400;
    edx = eax;
    edx = edx & 0x4000;
    MEM32(esi + 0xC8) = edi;
    MEM32(esp + 0x18) = edx;
    MEM32(esi + 0x6C) = edx;
    MEM32(esi + 0x19C) = edx;
    edi = ecx;
    edi = edi & 0x140;
    edx = ecx;
    edx = edx & 0x8200;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0xC4) = edi;
    MEM32(esp + 0x1C) = edx;
    MEM32(esi + 0x1A0) = edx;
    edi = eax;
    ebp = eax;
    edi = edi & 0x140;
    ebp = ebp & 0x8000;
    edx = ecx;
    edx = edx & 0x80;
    MEM32(esp + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x68) = ebp;
    MEM32(esp + 0x24) = edx;
    if ((edx == 0)) goto loc_0004D533; /* je: equal / zero */

loc_0004D530: ;
    MEM32(esi + 0x54) = edx;

loc_0004D533: ;
    edi = ecx;
    edi = edi & 0x40;
    MEM32(esi + 0x58) = edx;
    MEM32(esi + 0x10C) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x5C) = edi;
    edi = ecx;
    edi = edi & 0x200;
    MEM32(esp + 0x14) = edi;
    MEM32(esi + 0x74) = edi;
    ebx = eax;
    ebx = ebx & 0x100;
    MEM32(esp + 0x20) = ebx;
    MEM32(esi + 0x80) = ebx;
    ebx = 0; /* xor self */
    edi = eax;
    edi = edi & 0x200;
    (void)0; /* cmp edx, 0x14 - flags set for next jcc */
    SET_LO8(ebx, (CMP_G(edx, 0x14)) ? 1 : 0); /* setg */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi + 0xBC) = xmm0; /* movss */
    MEMF(esi + 0xC0) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x28); /* cvtsi2ss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x34); /* cvtsi2ss */
    MEM32(esi + 0x60) = ebx;
    ebx = 0; /* xor self */
    (void)0; /* cmp edx, 0xFFFFFFECu - flags set for next jcc */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0x84) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0xA4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0xA8) = edx;
    MEM32(esi + 0xAC) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x94) = edx;
    SET_LO8(ebx, (CMP_L(edx, 0xFFFFFFECu)) ? 1 : 0); /* setl */
    edx = ecx;
    edx = edx & 0x8000;
    MEM32(esi + 0x98) = edx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x14C) = edx;
    edx = ecx;
    edx = edx & 0x100;
    MEM32(esi + 0x164) = edx;
    edx = eax;
    edx = edx & 0x80;
    MEM32(esi + 0x180) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x184) = edx;
    edx = ecx;
    ecx = ecx & 0x4000;
    MEM32(esi + 0x1A8) = ecx;
    ecx = eax;
    ecx = ecx & 0x400;
    MEM32(esi + 0x78) = edi;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x90) = edi;
    MEMF(esi + 0x114) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x2C); /* cvtsi2ss */
    POP32(esp, edi);
    MEM32(esi + 0x1AC) = ecx;
    SET_LO8(ecx, MEM8(0x7819D5));
    MEM32(esi + 0x9C) = ebp;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x150) = ebp;
    edx = edx & 0x1000;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEMF(esi + 0x118) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    POP32(esp, ebp);
    MEM32(esi + 0x64) = ebx;
    MEMF(esi + 0x11C) = xmm0; /* movss */
    MEM32(esi + 0x1A4) = edx;
    POP32(esp, ebx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0004D6A4(); return; } /* je: equal / zero */

loc_0004D68D: ;
    ecx = MEM32(0x849ACC);
    if (TEST_Z(ecx, ecx)) { sub_0004D6A4(); return; } /* je: equal / zero */

loc_0004D697: ;
    SET_LO8(eax, 0); /* xor self */
    g_seh_ebp = ebp; sub_0004D6A9(); return; /* tail jmp 0x0004D6A9 */

loc_0004D69B: ;
    MEM32(esp + 0x34) = edx;
    goto loc_0004D4AD;

}

/**
 * sub_0004D6E0
 * Original: 0x0004D6E0 - 0x0004D724 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D6E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004D6E0: ;
    xmm4 = MEMF(eax + 0x34); /* movss */
    xmm5 = MEMF(eax + 0x38); /* movss */
    edx = MEM32(eax + 0x10);
    esp = esp - 0x28;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0004D724(); return; } /* je: equal / zero */

loc_0004D6FD: ;
    ecx = MEM32(eax + 0x14);
    ebp = MEM32(eax + 0x1C);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0x80;
    MEM32(esp + 0x1C) = 0x40;
    g_seh_ebp = ebp; sub_0004D749(); return; /* tail jmp 0x0004D749 */

}

/**
 * sub_0004DAE0
 * Original: 0x0004DAE0 - 0x0004DB9A (186 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DAE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DAE0: ;
    esp = esp - 0x18;
    eax = MEM32(edx + 0xFC);
    ecx = MEM32(edx + 0x100);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0xF4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 0x104);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(edx + 0xE0);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0xF8);
    MEM32(esp + 8) = eax;
    eax = MEM32(edx + 0xE4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edx + 0xE8);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x28);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = ecx;
    ecx = 0x6C;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(edx + 0x104) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 0xFC) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(edx + 0xE4) = eax;
    eax = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM32(edx + 0x100) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 0x2C) = esi;
    POP32(esp, esi);
    MEM32(edx + 0xF8) = ebp;
    MEM32(edx + 0xE0) = ecx;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, ebp);
    MEM32(edx + 0xF4) = ebx;
    MEM32(edx + 0xE8) = ecx;
    MEM32(edx + 0x30) = eax;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DBA0
 * Original: 0x0004DBA0 - 0x0004DC6A (202 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DBA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DBA0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    /* nop */
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_0004DBBD; /* jne: not equal / not zero */

loc_0004DBB8: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0004DBBD: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0004DC05; /* je: equal / zero */

loc_0004DBE3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x3C)) goto loc_0004DC05; /* jb: below (unsigned <) */

loc_0004DBEC: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0004DBF6: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004DBFE: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0004DC26; /* jne: not equal / not zero */

loc_0004DC05: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0004DC17: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0004DC1F: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0004DC6A(); return; } /* je: equal / zero */

loc_0004DC26: ;
    edx = MEM32(esp + 0xC);
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM8(eax + 0x30) = LO8(ebx);
    MEM8(eax + 0x31) = LO8(ebx);
    ecx = eax + 0x18;
    esi = 2;
    /* nop */

loc_0004DC50: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ecx + -8) = ebx;
    MEM32(ecx) = ebx;
    MEMF(ecx + 8) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    ecx = ecx + 4;
    esi--;
    if ((esi != 0)) goto loc_0004DC50; /* jne: not equal / not zero */

loc_0004DC68: ;
    g_seh_ebp = ebp; sub_0004DC70(); return; /* tail jmp 0x0004DC70 */

}

/**
 * sub_0004DD80
 * Original: 0x0004DD80 - 0x0004DDB4 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DD80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DD80: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x847114));
    PUSH32(esp, esi);
    esi = 0x8470FC;
    edx = 0; /* xor self */
    /* nop */
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    if (CMP_EQ(ecx, edx)) goto loc_0004DD9F; /* je: equal / zero */

loc_0004DD99: ;
    MEM8(ecx + 1) = LO8(edx);
    MEM32(eax + 4) = edx;

loc_0004DD9F: ;
    if (CMP_NE(MEM32(eax + 0xC), edx)) { sub_0004DDB4(); return; } /* jne: not equal / not zero */

loc_0004DDA4: ;
    ecx = MEM32(eax + 4);
    if (CMP_EQ(ecx, edx)) { sub_0004DDB4(); return; } /* je: equal / zero */

loc_0004DDAB: ;
    if (CMP_NE(LO8(ebx), LO8(edx))) { sub_0004DDB4(); return; } /* jne: not equal / not zero */

loc_0004DDAF: ;
    MEM32(eax + 8) = ecx;
    g_seh_ebp = ebp; sub_0004DDBB(); return; /* tail jmp 0x0004DDBB */

}

/**
 * sub_0004DDD0
 * Original: 0x0004DDD0 - 0x0004DE09 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DDD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004DDD0: ;
    eax = MEM32(0x68C31C);
    eax--;
    MEM32(0x68C31C) = eax;
    eax = MEM32(eax * 4 + 0x8470FC);
    ecx = MEM32(eax + 4);
    edx = 0; /* xor self */
    if (CMP_EQ(ecx, edx)) goto loc_0004DDF1; /* je: equal / zero */

loc_0004DDEB: ;
    MEM8(ecx + 1) = LO8(edx);
    MEM32(eax + 4) = edx;

loc_0004DDF1: ;
    if (CMP_NE(MEM32(eax + 0xC), edx)) { sub_0004DE09(); return; } /* jne: not equal / not zero */

loc_0004DDF6: ;
    ecx = MEM32(eax + 4);
    if (CMP_EQ(ecx, edx)) { sub_0004DE09(); return; } /* je: equal / zero */

loc_0004DDFD: ;
    if (CMP_NE(MEM8(0x847114), LO8(edx))) { sub_0004DE09(); return; } /* jne: not equal / not zero */

loc_0004DE05: ;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DE20
 * Original: 0x0004DE20 - 0x0004DF6A (330 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DE20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm2;

loc_0004DE20: ;
    PUSH32(esp, ecx);
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x75A0B8) = ebx;
    MEM32(0x75A0BC) = ebx;
    MEM32(0x75A0C0) = ebx;
    MEM8(0x75A0E4) = LO8(ebx);
    MEM8(0x75A0E5) = LO8(ebx);
    MEM32(0x75A0C4) = ebx;
    MEM32(0x75A0CC) = ebx;
    MEMF(0x75A0D4) = xmm2; /* movss */
    MEMF(0x75A0DC) = xmm2; /* movss */
    MEM32(0x75A0C8) = ebx;
    MEM32(0x75A0D0) = ebx;
    MEMF(0x75A0D8) = xmm2; /* movss */
    MEMF(0x75A0E0) = xmm2; /* movss */
    esi = 0x847104;

loc_0004DE84: ;
    (void)0; /* cmp MEM8(0x68C318), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(esi);
    if (CMP_EQ(MEM8(0x68C318), LO8(ebx))) goto loc_0004DEDF; /* je: equal / zero */

loc_0004DE8E: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 2));
    edx = ZX8(LO8(eax));
    edi = MEM32(edx * 4 + 0x806A48);
    MEM32(esp + 0xC) = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(edi, ebx)) ? 1 : 0); /* setne */
    edx = eax;
    edx--;
    eax = MEM32(esp + 0xC);
    if ((edx == 0)) goto loc_0004DED8; /* je: equal / zero */

loc_0004DEB1: ;
    if (CMP_EQ(MEM8(ecx), LO8(ebx))) goto loc_0004DEDF; /* je: equal / zero */

loc_0004DEB5: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 2;
    MEM8(eax + 0x806FE2) = LO8(ebx);
    MEMF(eax + 0x806FE8) = xmm2; /* movss */
    MEMF(eax + 0x806FEC) = xmm2; /* movss */
    MEM8(ecx) = LO8(ebx);
    goto loc_0004DEDF;

loc_0004DED8: ;
    if (CMP_NE(MEM8(ecx), LO8(ebx))) goto loc_0004DEDF; /* jne: not equal / not zero */

loc_0004DEDC: ;
    MEM8(ecx) = 1;

loc_0004DEDF: ;
    eax = MEM32(esi);
    PUSH32(esp, 0); sub_0004E0D0(); /* call 0x0004E0D0 */

loc_0004DEE6: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x847114)) goto loc_0004DE84; /* jl: less (signed <) */

loc_0004DEF1: ;
    if (CMP_NE(MEM8(0x849870), LO8(ebx))) goto loc_0004DF5F; /* jne: not equal / not zero */

loc_0004DEF9: ;
    eax = MEM32(0x8470FC);
    SET_LO8(edx, MEM8(eax + 1));
    ecx = 0; /* xor self */
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0004DF17; /* je: equal / zero */

loc_0004DF07: ;
    eax = MEM32(eax + 4);
    if (CMP_EQ(eax, ebx)) goto loc_0004DF17; /* je: equal / zero */

loc_0004DF0E: ;
    if (CMP_NE(MEM8(eax), LO8(ebx))) goto loc_0004DF17; /* jne: not equal / not zero */

loc_0004DF12: ;
    ecx = 1;

loc_0004DF17: ;
    eax = MEM32(0x847100);
    if (CMP_EQ(MEM8(eax + 1), LO8(ebx))) goto loc_0004DF2F; /* je: equal / zero */

loc_0004DF21: ;
    eax = MEM32(eax + 4);
    if (CMP_EQ(eax, ebx)) goto loc_0004DF2F; /* je: equal / zero */

loc_0004DF28: ;
    if (CMP_NE(MEM8(eax), LO8(ebx))) goto loc_0004DF2F; /* jne: not equal / not zero */

loc_0004DF2C: ;
    ecx = ecx | 2;

loc_0004DF2F: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(ecx, ebx)) ? 1 : 0); /* setne */
    MEM8(0x847114) = LO8(eax);
    eax = MEM32(0x68C31C);
    edi = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_0004DF65; /* jle: less or equal (signed <=) */

loc_0004DF44: ;
    esi = MEM32(edi * 4 + 0x8470FC);
    PUSH32(esp, 0); sub_0004E340(); /* call 0x0004E340 */

loc_0004DF50: ;
    eax = MEM32(0x68C31C);
    edi++;
    if (CMP_L(edi, eax)) goto loc_0004DF44; /* jl: less (signed <) */

loc_0004DF5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0004DF5F: ;
    MEM8(0x847114) = LO8(ebx);

loc_0004DF65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004DF70
 * Original: 0x0004DF70 - 0x0004DF92 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DF70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004DF70: ;
    ecx = MEM32(eax * 4 + 0x8470FC);
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) { sub_0004DF92(); return; } /* je: equal / zero */

loc_0004DF7E: ;
    if (CMP_LE(edx & edx, 0)) { sub_0004DF92(); return; } /* jle: less or equal (signed <=) */

loc_0004DF82: ;
    eax = MEM32(ecx + 0xC);
    if (CMP_NE(eax, edx)) { sub_0004DF92(); return; } /* jne: not equal / not zero */

loc_0004DF89: ;
    eax--;
    MEM32(ecx + 0xC) = eax;
    g_seh_ebp = ebp; sub_0004E310(); return; /* tail jmp 0x0004E310 */

}

/**
 * sub_0004DFA0
 * Original: 0x0004DFA0 - 0x0004DFDD (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DFA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004DFA0: ;
    ecx = MEM32(0x8470FC);
    SET_LO8(edx, MEM8(ecx + 1));
    eax = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0004DFC0; /* je: equal / zero */

loc_0004DFAF: ;
    ecx = MEM32(ecx + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0004DFC0; /* je: equal / zero */

loc_0004DFB6: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0004DFC0; /* jne: not equal / not zero */

loc_0004DFBB: ;
    eax = 1;

loc_0004DFC0: ;
    ecx = MEM32(0x847100);
    SET_LO8(edx, MEM8(ecx + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0004DFDC; /* je: equal / zero */

loc_0004DFCD: ;
    ecx = MEM32(ecx + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0004DFDC; /* je: equal / zero */

loc_0004DFD4: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0004DFDC; /* jne: not equal / not zero */

loc_0004DFD9: ;
    eax = eax | 2;

loc_0004DFDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DFE0
 * Original: 0x0004DFE0 - 0x0004DFFC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DFE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004DFE0: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    if (CMP_L(eax, ecx)) goto loc_0004DFF0; /* jl: less (signed <) */

loc_0004DFEB: ;
    eax = 0x14;

loc_0004DFF0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    eax = eax + 0x763260;
    esp += 4; return; /* ret */

}

/**
 * sub_0004E000
 * Original: 0x0004E000 - 0x0004E010 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E000(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004E000: ;
    if (CMP_GE(eax, 2)) { sub_0004E010(); return; } /* jge: greater or equal (signed >=) */

loc_0004E005: ;
    eax = MEM32(eax * 4 + 0x8470FC);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E020
 * Original: 0x0004E020 - 0x0004E0BC (156 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E020: ;
    eax = MEM32(0x8470FC);
    SET_LO8(edx, MEM8(eax + 1));
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0004E03F; /* je: equal / zero */

loc_0004E02E: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_0004E03F; /* je: equal / zero */

loc_0004E035: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0004E03F; /* jne: not equal / not zero */

loc_0004E03A: ;
    ecx = 1;

loc_0004E03F: ;
    eax = MEM32(0x847100);
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0004E05A; /* je: equal / zero */

loc_0004E04B: ;
    eax = MEM32(eax + 4);
    if (TEST_Z(eax, eax)) goto loc_0004E05A; /* je: equal / zero */

loc_0004E052: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_0004E05A; /* jne: not equal / not zero */

loc_0004E057: ;
    ecx = ecx | 2;

loc_0004E05A: ;
    if (TEST_Z(ecx, ecx)) goto loc_0004E066; /* je: equal / zero */

loc_0004E05E: ;
    MEM32(esp + 4) = 0;

loc_0004E066: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0x847104;
    edi = edi;

loc_0004E070: ;
    esi = MEM32(ebp);
    SET_LO8(eax, MEM8(esi + 1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004E0A8; /* jne: not equal / not zero */

loc_0004E07A: ;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0004E0A8; /* je: equal / zero */

loc_0004E07F: ;
    eax = MEM32(esp + 0x10);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0004E0A2; /* je: equal / zero */

loc_0004E088: ;
    eax--;
    if ((eax != 0)) goto loc_0004E0A8; /* jne: not equal / not zero */

loc_0004E08B: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 2));
    edi = 0x19;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0004E4E0(); /* call 0x0004E4E0 */

loc_0004E09B: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    goto loc_0004E0A6;

loc_0004E0A2: ;
    (void)0; /* test MEM8(esi + 8), 0x10 - flags set for next jcc */

loc_0004E0A6: ;
    if (TEST_NZ(MEM8(esi + 8), 0x10)) { sub_0004E0BC(); return; } /* jne: not equal / not zero */

loc_0004E0A8: ;
    ebp = ebp + 4;
    if (CMP_L(ebp, 0x847114)) goto loc_0004E070; /* jl: less (signed <) */

loc_0004E0B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x75A0B4;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E0D0
 * Original: 0x0004E0D0 - 0x0004E10B (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E0D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0004E0D0: ;
    SET_LO8(edx, MEM8(eax));
    ecx = 0; /* xor self */
    if (CMP_NE(LO8(edx), LO8(ecx))) { sub_0004E10B(); return; } /* jne: not equal / not zero */

loc_0004E0D8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 0x30) = LO8(ecx);
    MEM8(eax + 0x31) = LO8(ecx);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004E1F0
 * Original: 0x0004E1F0 - 0x0004E211 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E1F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004E1F0: ;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0004E20E; /* je: equal / zero */

loc_0004E1F5: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 2));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D2260(); /* call 0x003D2260 */

loc_0004E204: ;
    esp = esp + 8;
    eax = esi;
    PUSH32(esp, 0); sub_0004E0D0(); /* call 0x0004E0D0 */

loc_0004E20E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004E220
 * Original: 0x0004E220 - 0x0004E241 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E220(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004E220: ;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_0004E23E; /* je: equal / zero */

loc_0004E225: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 2));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D2460(); /* call 0x003D2460 */

loc_0004E234: ;
    esp = esp + 8;
    eax = esi;
    PUSH32(esp, 0); sub_0004E0D0(); /* call 0x0004E0D0 */

loc_0004E23E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004E250
 * Original: 0x0004E250 - 0x0004E297 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E250(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0004E250: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_0004E294; /* je: equal / zero */

loc_0004E258: ;
    SET_LO8(eax, MEM8(eax + 2));
    (void)0; /* cmp MEM8(esp + 4), LO8(ecx) - flags set for next jcc */
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    if (CMP_EQ(MEM8(esp + 4), LO8(ecx))) goto loc_0004E272; /* je: equal / zero */

loc_0004E267: ;
    MEM8(eax * 4 + 0x806FE0) = 1;
    esp += 8; return; /* ret 4 */

loc_0004E272: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax << 2;
    MEM8(eax + 0x806FE0) = LO8(ecx);
    MEM8(eax + 0x806FE2) = LO8(ecx);
    MEMF(eax + 0x806FE8) = xmm0; /* movss */
    MEMF(eax + 0x806FEC) = xmm0; /* movss */

loc_0004E294: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004E2A0
 * Original: 0x0004E2A0 - 0x0004E2FF (95 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E2A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E2A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    edx = 0; /* xor self */
    if (CMP_EQ(eax, edx)) goto loc_0004E2B4; /* je: equal / zero */

loc_0004E2AE: ;
    MEM8(eax + 1) = LO8(edx);
    MEM32(ebp + 4) = edx;

loc_0004E2B4: ;
    if (CMP_EQ(ecx, edx)) goto loc_0004E2E4; /* je: equal / zero */

loc_0004E2B8: ;
    PUSH32(esp, esi);
    esi = MEM32(0x849E74);
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEM32(ebp + 4) = ecx;
    MEM8(ecx + 1) = 1;
    MEM8(ebp + 1) = LO8(edx);
    if (CMP_EQ(esi, edx)) goto loc_0004E2E3; /* je: equal / zero */

loc_0004E2CD: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(eax + 2));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebp));
    PUSH32(esp, 0); sub_0027B870(); /* call 0x0027B870 */

loc_0004E2DF: ;
    POP32(esp, edi);
    edx = 0; /* xor self */
    POP32(esp, ebx);

loc_0004E2E3: ;
    POP32(esp, esi);

loc_0004E2E4: ;
    if (CMP_NE(MEM32(ebp + 0xC), edx)) { sub_0004E2FF(); return; } /* jne: not equal / not zero */

loc_0004E2E9: ;
    eax = MEM32(ebp + 4);
    if (CMP_EQ(eax, edx)) { sub_0004E2FF(); return; } /* je: equal / zero */

loc_0004E2F0: ;
    if (CMP_NE(MEM8(0x847114), LO8(edx))) { sub_0004E2FF(); return; } /* jne: not equal / not zero */

loc_0004E2F8: ;
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004E310
 * Original: 0x0004E310 - 0x0004E32C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E310(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004E310: ;
    eax = MEM32(ecx + 0xC);
    if (TEST_NZ(eax, eax)) { sub_0004E32C(); return; } /* jne: not equal / not zero */

loc_0004E317: ;
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) { sub_0004E32C(); return; } /* je: equal / zero */

loc_0004E31E: ;
    SET_LO8(edx, MEM8(0x847114));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0004E32C(); return; } /* jne: not equal / not zero */

loc_0004E328: ;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0004E340
 * Original: 0x0004E340 - 0x0004E436 (246 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E340: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0004E3FA; /* je: equal / zero */

loc_0004E34F: ;
    if (CMP_EQ(MEM8(eax), LO8(ebx))) goto loc_0004E3F1; /* je: equal / zero */

loc_0004E357: ;
    if (CMP_NE(MEM8(esi + 1), LO8(ebx))) goto loc_0004E367; /* jne: not equal / not zero */

loc_0004E35C: ;
    ecx = esi;
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0004E310(); return; /* tail jmp 0x0004E310 */

loc_0004E367: ;
    ecx = MEM32(eax + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM8(eax + 0x30) = LO8(ebx);
    MEM8(eax + 0x31) = LO8(ebx);
    ecx = ecx & 0x10;
    MEM32(esp + 4) = ecx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEMF(eax + 0x20) = xmm0; /* movss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEMF(eax + 0x24) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    if ((ecx == 0)) goto loc_0004E3FA; /* je: equal / zero */

loc_0004E3A5: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    MEM8(esi + 1) = LO8(ebx);
    if (CMP_EQ(MEM8(edi), LO8(ebx))) goto loc_0004E3C7; /* je: equal / zero */

loc_0004E3B0: ;
    eax = ZX8(MEM8(edi + 2));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_003D2260(); /* call 0x003D2260 */

loc_0004E3BD: ;
    esp = esp + 8;
    eax = edi;
    PUSH32(esp, 0); sub_0004E0D0(); /* call 0x0004E0D0 */

loc_0004E3C7: ;
    edi = MEM32(esi + 4);
    if (CMP_EQ(MEM8(edi), LO8(ebx))) goto loc_0004E3E5; /* je: equal / zero */

loc_0004E3CE: ;
    eax = ZX8(MEM8(edi + 2));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_003D2460(); /* call 0x003D2460 */

loc_0004E3DB: ;
    esp = esp + 8;
    eax = edi;
    PUSH32(esp, 0); sub_0004E0D0(); /* call 0x0004E0D0 */

loc_0004E3E5: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_0004E310(); return; /* tail jmp 0x0004E310 */

loc_0004E3F1: ;
    if (CMP_NE(MEM8(esi + 1), LO8(ebx))) goto loc_0004E3FA; /* jne: not equal / not zero */

loc_0004E3F6: ;
    MEM8(esi + 1) = 1;

loc_0004E3FA: ;
    SET_LO8(eax, MEM8(esi + 1));
    edx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(LO8(eax), LO8(ebx))) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0004E020(); /* call 0x0004E020 */

loc_0004E40A: ;
    esp = esp + 4;
    if (CMP_EQ(eax, 0x75A0B4)) goto loc_0004E41C; /* je: equal / zero */

loc_0004E414: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0); sub_0004E2A0(); /* call 0x0004E2A0 */

loc_0004E41C: ;
    if (CMP_NE(MEM32(esi + 0xC), ebx)) { sub_0004E436(); return; } /* jne: not equal / not zero */

loc_0004E421: ;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, ebx)) { sub_0004E436(); return; } /* je: equal / zero */

loc_0004E428: ;
    if (CMP_NE(MEM8(0x847114), LO8(ebx))) { sub_0004E436(); return; } /* jne: not equal / not zero */

loc_0004E430: ;
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E440
 * Original: 0x0004E440 - 0x0004E48F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E440(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004E440: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, eax)) goto loc_0004E48B; /* je: equal / zero */

loc_0004E449: ;
    if (CMP_NE(MEM32(esi + 0xC), eax)) goto loc_0004E467; /* jne: not equal / not zero */

loc_0004E44E: ;
    ecx = ZX8(MEM8(esi));
    MEM32(ecx * 4 + 0x77623C) = eax;
    PUSH32(esp, ebx);
    MEM32(0x776238) = eax;
    ebx = ZX8(MEM8(esi));
    PUSH32(esp, 0); sub_0004D320(); /* call 0x0004D320 */

loc_0004E466: ;
    POP32(esp, ebx);

loc_0004E467: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    if ((MEM32(esi + 0xC) != 0)) goto loc_0004E484; /* jne: not equal / not zero */

loc_0004E46C: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_0004E484; /* je: equal / zero */

loc_0004E473: ;
    SET_LO8(ecx, MEM8(0x847114));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0004E484; /* jne: not equal / not zero */

loc_0004E47D: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0xC);
    esp += 4; return; /* ret */

loc_0004E484: ;
    MEM32(esi + 8) = 0x75A0B4;

loc_0004E48B: ;
    eax = MEM32(esi + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E490
 * Original: 0x0004E490 - 0x0004E4D3 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E490(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004E490: ;
    SET_LO8(eax, MEM8(0x8755FC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0004E4D2; /* jne: not equal / not zero */

loc_0004E499: ;
    PUSH32(esp, esi);
    esi = MEM32(0x68C31C);
    edx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0004E4D1; /* jle: less or equal (signed <=) */

loc_0004E4A6: ;
    goto loc_0004E4B0;

    /* nop */
    /* nop */

loc_0004E4B0: ;
    ecx = MEM32(edx * 4 + 0x8470FC);
    ecx = MEM32(ecx + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0004E4C3; /* je: equal / zero */

loc_0004E4BE: ;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_0004E4CA; /* jne: not equal / not zero */

loc_0004E4C3: ;
    edx++;
    if (CMP_L(edx, esi)) goto loc_0004E4B0; /* jl: less (signed <) */

loc_0004E4C8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004E4CA: ;
    SET_LO8(eax, 1);
    MEM8(0x8755FC) = LO8(eax);

loc_0004E4D1: ;
    POP32(esp, esi);

loc_0004E4D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004E4E0
 * Original: 0x0004E4E0 - 0x0004E565 (133 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E4E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0004E4E0: ;
    SET_LO8(eax, MEM8(0x8470F4));
    esp = esp - 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0004E565(); return; } /* je: equal / zero */

loc_0004E4ED: ;
    eax = ZX8(MEM8(esp + 0x10));
    ecx = MEM32(0x806FD8);
    edx = eax + eax * 4;
    edx = edx << 6;
    if (CMP_NE(MEM32(edx + ecx), 0)) goto loc_0004E55E; /* jne: not equal / not zero */

loc_0004E504: ;
    edx = eax + eax * 4;
    edx = edx << 6;
    ecx = ecx + edx;
    edx = MEM32(ecx + 0x114);
    ecx = MEM32(ecx + 0x118);
    esi = edi;
    esi = (uint32_t)(-(int32_t)esi);
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    if (CMP_L(edx, esi)) goto loc_0004E55E; /* jl: less (signed <) */

loc_0004E528: ;
    if (CMP_G(edx, edi)) goto loc_0004E55E; /* jg: greater (signed >) */

loc_0004E52C: ;
    if (CMP_L(ecx, esi)) goto loc_0004E55E; /* jl: less (signed <) */

loc_0004E530: ;
    if (CMP_G(ecx, edi)) goto loc_0004E55E; /* jg: greater (signed >) */

loc_0004E534: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D2070(); /* call 0x003D2070 */

loc_0004E543: ;
    eax = MEM32(esp + 0xC);
    esp = esp + 8;
    if (CMP_L(eax, esi)) goto loc_0004E55E; /* jl: less (signed <) */

loc_0004E54E: ;
    if (CMP_G(eax, edi)) goto loc_0004E55E; /* jg: greater (signed >) */

loc_0004E552: ;
    eax = MEM32(esp + 8);
    if (CMP_L(eax, esi)) goto loc_0004E55E; /* jl: less (signed <) */

loc_0004E55A: ;
    if (CMP_LE(eax, edi)) { sub_0004E565(); return; } /* jle: less or equal (signed <=) */

loc_0004E55E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
