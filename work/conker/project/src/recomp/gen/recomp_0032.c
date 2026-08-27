/**
 * Burnout 3 - Recompiled code chunk 32
 * Functions: 250 (0x002C5100 - 0x002CF2A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002C5100
 * Original: 0x002C5100 - 0x002C51D6 (214 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C5100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C5100: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    MEM32(0x7FAAB8) = edi;
    MEM8(0x84A5BE) = LO8(eax);
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_002C5129; /* je: equal / zero */

loc_002C511C: ;
    MEM8(edi + 0x3DC) = LO8(eax);
    MEM16(edi + 0x3DE) = LO16(eax);

loc_002C5129: ;
    ecx = ZX16(MEM16(edi + 0x3DE));
    if (CMP_G(ecx, ebp)) goto loc_002C51D0; /* jg: greater (signed >) */

loc_002C5138: ;
    (void)0; /* cmp MEM32(edi + 0x3C8), eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(MEM32(edi + 0x3C8), eax)) goto loc_002C515E; /* jne: not equal / not zero */

loc_002C514C: ;
    edx = MEM32(edi + 0x3CC);
    MEM32(edi + 0x3C8) = edx;
    MEM32(edi + 0x3CC) = eax;

loc_002C515E: ;
    (void)0; /* cmp MEM8(edi + 0x3C1), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x5A0350;
    if (CMP_NE(MEM8(edi + 0x3C1), LO8(eax))) goto loc_002C516F; /* jne: not equal / not zero */

loc_002C516D: ;
    esi = edi;

loc_002C516F: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ebx = esp + 0x18;
    PUSH32(esp, 0); sub_00089BF0(); /* call 0x00089BF0 */

loc_002C5182: ;
    edx = ZX8(MEM8(edi + 0x3A8));
    eax = MEM32(edi + edx * 4 + 0x4EC);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x3C4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00036C00(); /* call 0x00036C00 */

loc_002C51AE: ;
    ecx = MEM32(edi + 0x3C4);
    esp = esp + 0x20;
    eax = ebp + 1;
    MEM16(edi + 0x3DE) = LO16(eax);
    (void)0; /* cmp LO16(eax), MEM16(ecx + 0x10) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(LO16(eax), MEM16(ecx + 0x10))) goto loc_002C51D0; /* jne: not equal / not zero */

loc_002C51C9: ;
    MEM8(edi + 0x3DC) = 1;

loc_002C51D0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002C51E0
 * Original: 0x002C51E0 - 0x002C5219 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C51E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C51E0: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x7FAAB8) = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C5216; /* je: equal / zero */

loc_002C51F0: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx + -1744;
    if (CMP_NE(MEM32(eax + 0x64), 0x35)) goto loc_002C5216; /* jne: not equal / not zero */

loc_002C520C: ;
    eax = MEM32(eax + 0x570);
    if (TEST_NZ(eax, eax)) { sub_002C5219(); return; } /* jne: not equal / not zero */

loc_002C5216: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002C5260
 * Original: 0x002C5260 - 0x002C53B9 (345 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C5260(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002C5260: ;
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x7FAAB8) = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C53B5; /* je: equal / zero */

loc_002C5276: ;
    if (CMP_EQ(MEM8(edi + 0xA1), 9)) goto loc_002C53B5; /* je: equal / zero */

loc_002C5283: ;
    SET_LO8(eax, MEM8(edi + 0x658));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C53B5; /* je: equal / zero */

loc_002C5291: ;
    eax = MEM32(edi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_002C53B5; /* je: equal / zero */

loc_002C529F: ;
    eax = MEM32(edi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_002C53B5; /* je: equal / zero */

loc_002C52AD: ;
    PUSH32(esp, 0); sub_002C51E0(); /* call 0x002C51E0 */

loc_002C52B2: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_002C53B5; /* je: equal / zero */

loc_002C52BA: ;
    SET_LO8(eax, MEM8(edi + 0x251));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C52DA; /* je: equal / zero */

loc_002C52C4: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    edi = eax + ecx + -1744;

loc_002C52DA: ;
    ecx = MEM32(0x84A144);
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    xmm0 = MEMF(edi + 0x67C); /* movss */
    PUSH32(esp, esi);
    esi = 1;
    if (CMP_L(ecx, 4)) goto loc_002C533E; /* jl: less (signed <) */

loc_002C52F3: ;
    edx = ecx;
    edx = edx >> 2;
    eax = edi + 0x684;
    esi = edx * 4 + 1;

loc_002C5305: ;
    xmm1 = MEMF(eax + -4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002C5312; /* jbe: below or equal (unsigned <=) */

loc_002C530F: ;
    xmm0 = xmm1; /* movaps */

loc_002C5312: ;
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002C531E; /* jbe: below or equal (unsigned <=) */

loc_002C531B: ;
    xmm0 = xmm1; /* movaps */

loc_002C531E: ;
    xmm1 = MEMF(eax + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002C532B; /* jbe: below or equal (unsigned <=) */

loc_002C5328: ;
    xmm0 = xmm1; /* movaps */

loc_002C532B: ;
    xmm1 = MEMF(eax + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002C5338; /* jbe: below or equal (unsigned <=) */

loc_002C5335: ;
    xmm0 = xmm1; /* movaps */

loc_002C5338: ;
    eax = eax + 0x10;
    edx--;
    if ((edx != 0)) goto loc_002C5305; /* jne: not equal / not zero */

loc_002C533E: ;
    if (CMP_G(esi, ecx)) goto loc_002C5362; /* jg: greater (signed >) */

loc_002C5342: ;
    ecx = ecx - esi;
    eax = edi + esi * 4 + 0x67C;
    ecx++;
    /* nop */

loc_002C5350: ;
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002C535C; /* jbe: below or equal (unsigned <=) */

loc_002C5359: ;
    xmm0 = xmm1; /* movaps */

loc_002C535C: ;
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_002C5350; /* jne: not equal / not zero */

loc_002C5362: ;
    /* comiss xmm0, MEMF(0x75E9E0) - sets EFLAGS */
    POP32(esp, esi);
    if ((xmm0 > MEMF(0x75E9E0))) goto loc_002C53B5; /* ja: above (unsigned >) */

loc_002C536C: ;
    /* comiss xmm0, MEMF(0x75E9DC) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x75E9DC))) goto loc_002C538B; /* jbe: below or equal (unsigned <=) */

loc_002C5375: ;
    ecx = MEM32(0x7F9F60);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 0x60));
    edx = edx ^ ecx;
    if (TEST_NZ(LO8(edx), 1)) { sub_002C53B9(); return; } /* jne: not equal / not zero */

loc_002C5387: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002C538B: ;
    /* comiss xmm0, MEMF(0x75E9D8) - sets EFLAGS */
    edx = MEM32(0x7F9F60);
    if ((xmm0 <= MEMF(0x75E9D8))) goto loc_002C53A9; /* jbe: below or equal (unsigned <=) */

loc_002C539A: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x60));
    eax = eax ^ edx;
    if (TEST_NZ(LO8(eax), 3)) { sub_002C53B9(); return; } /* jne: not equal / not zero */

loc_002C53A5: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002C53A9: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x60));
    ecx = ecx ^ edx;
    if (TEST_NZ(LO8(ecx), 7)) { sub_002C53B9(); return; } /* jne: not equal / not zero */

loc_002C53B5: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C53C0
 * Original: 0x002C53C0 - 0x002C54F8 (312 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C53C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002C53C0: ;
    esp = esp - 0x30;
    xmm0 = MEMF(esi + 0x30); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    eax = esi + 0x698;
    ecx = esp + 0x18;
    edx = esp + 0x24;
    PUSH32(esp, ebx);
    MEM32(0x7FAAB8) = esi;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 4) = edx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esi + 0x3C4);
    ebx = 0; /* xor self */
    if (CMP_BE(MEM16(eax + 0x10), LO16(ebx))) goto loc_002C54F3; /* jbe: below or equal (unsigned <=) */

loc_002C543E: ;
    edx = esp + 0x10;
    ecx = esp + 0x28;
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x10) = eax;
    edi = 0; /* xor self */
    goto loc_002C5460;

    /* nop */

loc_002C5460: ;
    eax = MEM32(esi + 0x3C8);
    xmm0 = MEMF(eax + edi + 0x38); /* movss */
    xmm1 = MEMF(eax + edi + 0x34); /* movss */
    xmm2 = MEMF(eax + edi + 0x30); /* movss */
    eax = eax + edi;
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esi + 0x3C8);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    eax = eax + edi;
    MEMF(eax + 0x30) = xmm2; /* movss */
    MEMF(eax + 0x34) = xmm1; /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    ecx = MEM32(esi + 0x3C4);
    edx = ZX16(MEM16(ecx + 0x10));
    ebx++;
    edi = edi + 0x40;
    if (CMP_L(ebx, edx)) goto loc_002C5460; /* jl: less (signed <) */

loc_002C54F2: ;
    POP32(esp, edi);

loc_002C54F3: ;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_002C5500
 * Original: 0x002C5500 - 0x002C5B41 (1601 bytes, 430 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C5500(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C5500: ;
    esp = esp - 0x24;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    MEM32(0x7FAAB8) = ebp;
    if (TEST_Z(ecx, ecx)) goto loc_002C5B3C; /* je: equal / zero */

loc_002C5516: ;
    if (TEST_Z(ebp, ebp)) goto loc_002C5521; /* je: equal / zero */

loc_002C551A: ;
    MEM8(ebp + 0x3FC) = MEM8(ebp + 0x3FC) & 0xFB;

loc_002C5521: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x38) = 0;
    if (TEST_Z(ebp, ebp)) goto loc_002C5612; /* je: equal / zero */

loc_002C5531: ;
    if (CMP_EQ(MEM8(eax + 0x76F0E0), 1)) goto loc_002C5544; /* je: equal / zero */

loc_002C553A: ;
    SET_LO8(ecx, MEM8(0x76EC82));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C5552; /* je: equal / zero */

loc_002C5544: ;
    SET_LO8(ecx, MEM8(eax + 0x76F0C0));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C55E9; /* je: equal / zero */

loc_002C5552: ;
    eax = MEM32(ebp + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x7FAAB8) = ebp;
    if (TEST_NZ(eax, eax)) goto loc_002C5567; /* jne: not equal / not zero */

loc_002C5562: ;
    xmm1 = 0.0f; /* xorps self = zero */
    goto loc_002C55AD;

loc_002C5567: ;
    if (CMP_NE(MEM8(ebp + 0xA1), 4)) goto loc_002C5575; /* jne: not equal / not zero */

loc_002C5570: ;
    xmm1 = 0.0f; /* xorps self = zero */
    goto loc_002C55AD;

loc_002C5575: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C4EA0);
    PUSH32(esp, 0x2C4D00);
    PUSH32(esp, 0x2C4AF0);
    eax = eax + 4;
    SET_LO8(ebx, 0); /* xor self */
    edi = ebp;
    MEMF(0x7FDBE4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00036550(); /* call 0x00036550 */

loc_002C55A2: ;
    xmm1 = MEMF(0x7FDBE4); /* movss */
    esp = esp + 0x14;

loc_002C55AD: ;
    eax = MEM32(ebp + 0x64);
    if (TEST_Z(eax, eax)) goto loc_002C5B39; /* je: equal / zero */

loc_002C55B8: ;
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002C5612; /* jnp: not parity */

loc_002C55C5: ;
    esi = MEM32(ebp + 0x3C4);
    edx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_00036FA0(); /* call 0x00036FA0 */

loc_002C55D4: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    eax = esi;
    xmm1 = xmm1 / xmm0; /* divss */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_002C55E7: ;
    goto loc_002C5612;

loc_002C55E9: ;
    eax = MEM32(ebp + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_002C5612; /* je: equal / zero */

loc_002C55F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C4A20);
    PUSH32(esp, 0x2C4A20);
    eax = eax + 4;
    SET_LO8(ebx, 0); /* xor self */
    edi = ebp;
    PUSH32(esp, 0); sub_00036550(); /* call 0x00036550 */

loc_002C560F: ;
    esp = esp + 0x14;

loc_002C5612: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0030F320(); /* call 0x0030F320 */

loc_002C5618: ;
    eax = MEM32(ebp + 0x3C4);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_002C5B39; /* je: equal / zero */

loc_002C5629: ;
    SET_LO8(edx, MEM8(ebp + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_NE(LO8(edx), 0xF)) goto loc_002C5661; /* jne: not equal / not zero */

loc_002C5639: ;
    if (TEST_NZ(MEM8(ebp + 0x136), 0x40)) goto loc_002C5661; /* jne: not equal / not zero */

loc_002C5642: ;
    SET_LO8(eax, MEM8(ebp + 0x546));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C5661; /* jne: not equal / not zero */

loc_002C564C: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C5661; /* jne: not equal / not zero */

loc_002C5655: ;
    SET_LO8(eax, MEM8(ebp + 0x3DD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C5661; /* jne: not equal / not zero */

loc_002C565F: ;
    SET_LO8(ebx, 1);

loc_002C5661: ;
    if (TEST_Z(MEM8(ebp + 0x137), 1)) goto loc_002C5707; /* je: equal / zero */

loc_002C566E: ;
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_002C56AF; /* jle: less or equal (signed <=) */

loc_002C567B: ;
    esi = MEM32(0x84A5F8);

loc_002C5681: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    edi = MEM32(ecx + esi + 0x568);
    ecx = ecx + esi;
    if (TEST_Z(edi, edi)) goto loc_002C56AA; /* je: equal / zero */

loc_002C5696: ;
    edi = ZX16(MEM16(ebp + 0x60));
    ecx = ZX8(MEM8(ecx + 0x135));
    edi++;
    if (CMP_NE(ecx, edi)) goto loc_002C56AA; /* jne: not equal / not zero */

loc_002C56A6: ;
    SET_LO8(ebx, 0); /* xor self */
    eax = edx;

loc_002C56AA: ;
    eax++;
    if (CMP_L(eax, edx)) goto loc_002C5681; /* jl: less (signed <) */

loc_002C56AF: ;
    if (CMP_NE(LO8(ebx), 1)) goto loc_002C5707; /* jne: not equal / not zero */

loc_002C56B4: ;
    edx = MEM32(ebp + 0x74);
    eax = ZX16(MEM16(edx + 0xE));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ebp + 0x260); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CF0); /* mulss */
    ecx = ebp + 0x78;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = 0x870ED4;
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002C5DD0(); /* call 0x002C5DD0 */

loc_002C5700: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_002C5707; /* je: equal / zero */

loc_002C5705: ;
    SET_LO8(ebx, 0); /* xor self */

loc_002C5707: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C5727; /* jne: not equal / not zero */

loc_002C5710: ;
    if (CMP_EQ(MEM8(ebp + 0xC1), 0xFF)) goto loc_002C5727; /* je: equal / zero */

loc_002C5719: ;
    if (TEST_Z(MEM32(ebp + 0x200), 0x20004000)) goto loc_002C5727; /* je: equal / zero */

loc_002C5725: ;
    SET_LO8(ebx, 0); /* xor self */

loc_002C5727: ;
    SET_LO8(eax, MEM8(ebp + 0x3DD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C5739; /* je: equal / zero */

loc_002C5731: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebp + 0x3DD) = LO8(eax);

loc_002C5739: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C5746; /* jne: not equal / not zero */

loc_002C5742: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_002C57B6; /* jne: not equal / not zero */

loc_002C5746: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002C5260(); /* call 0x002C5260 */

loc_002C574D: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_002C5792; /* jne: not equal / not zero */

loc_002C5751: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002C53C0(); /* call 0x002C53C0 */

loc_002C5758: ;
    esi = MEM32(ebp + 0x3C4);
    eax = esi + 4;
    PUSH32(esp, 0); sub_00035F30(); /* call 0x00035F30 */

loc_002C5766: ;
    MEM8(esi + 0x12) = 0;
    ecx = 0; /* xor self */
    esi = esi + 0x14;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM8(ebp + 0x658) = 1;
    goto loc_002C583D;

loc_002C5792: ;
    edx = MEM32(ebp + 0x3C4);
    eax = ZX16(MEM16(edx + 0x10));
    eax--;
    PUSH32(esp, eax);
    SET_LO8(ecx, 0); /* xor self */
    eax = ebp;
    PUSH32(esp, 0); sub_002C5100(); /* call 0x002C5100 */

loc_002C57A7: ;
    esp = esp + 4;
    MEM8(ebp + 0x658) = 1;
    goto loc_002C583D;

loc_002C57B6: ;
    eax = MEM32(ebp + 0x3C8);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_002C57CE; /* je: equal / zero */

loc_002C57C2: ;
    MEM32(ebp + 0x3CC) = eax;
    MEM32(ebp + 0x3C8) = ecx;

loc_002C57CE: ;
    (void)0; /* cmp MEM32(ebp + 0x3D8), ecx - flags set for next jcc */
    MEM8(ebp + 0x3DC) = 0;
    MEM16(ebp + 0x3DE) = LO16(ecx);
    if (CMP_EQ(MEM32(ebp + 0x3D8), ecx)) goto loc_002C5809; /* je: equal / zero */

loc_002C57E4: ;
    eax = MEM32(ebp + 0x3D0);
    if (CMP_EQ(eax, ecx)) goto loc_002C5809; /* je: equal / zero */

loc_002C57EE: ;
    ecx = MEM32(ebp + 0xD8);
    MEM32(ebp + 0xD4) = ecx;
    ebx = eax;
    ecx = ebp;
    MEM32(ebp + 0x3C8) = eax;
    PUSH32(esp, 0); sub_002B3510(); /* call 0x002B3510 */

loc_002C5809: ;
    esi = MEM32(ebp + 0x3C4);
    eax = esi + 4;
    PUSH32(esp, 0); sub_00035F30(); /* call 0x00035F30 */

loc_002C5817: ;
    MEM8(esi + 0x12) = 0;
    edx = 0; /* xor self */
    esi = esi + 0x14;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = edx;
    MEM8(ebp + 0x658) = LO8(edx);

loc_002C583D: ;
    eax = MEM32(ebp + 0x3D8);
    if (TEST_Z(eax, eax)) goto loc_002C5971; /* je: equal / zero */

loc_002C584B: ;
    SET_LO8(ecx, MEM8(eax + 0x3C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002C5888; /* jne: not equal / not zero */

loc_002C5852: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002C5070(); /* call 0x002C5070 */

loc_002C5859: ;
    if (TEST_Z(eax, eax)) goto loc_002C5888; /* je: equal / zero */

loc_002C585D: ;
    edx = MEM32(ebp + 0x3D8);
    ecx = ebp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00094440(); /* call 0x00094440 */

loc_002C5870: ;
    eax = MEM32(ebp + 0xD4);
    ecx = MEM32(ebp + 0x3C8);
    MEM32(ebp + 0xD8) = eax;
    MEM32(ebp + 0x3D0) = ecx;

loc_002C5888: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(ebp + 0x7C);
    eax = MEM32(ebp + 0x3D8);
    MEMF(ebp + 0xD4) = xmm0; /* movss */
    MEMF(ebp + 0xD0) = xmm0; /* movss */
    MEM32(ebp + 0x3B8) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(ebp + 0x3C8) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x44));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002C58C9; /* jne: not equal / not zero */

loc_002C58BA: ;
    edx = ebp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000964D0(); /* call 0x000964D0 */

loc_002C58C4: ;
    goto loc_002C5964;

loc_002C58C9: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x3D0);
    PUSH32(esp, 0); sub_00096B20(); /* call 0x00096B20 */

loc_002C58D5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C594B; /* je: equal / zero */

loc_002C58D9: ;
    ecx = MEM32(ebp + 0x3D8);
    if (TEST_Z(ecx, ecx)) goto loc_002C58E9; /* je: equal / zero */

loc_002C58E3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_002C58E9: ;
    esi = MEM32(ebp + 0x3D0);
    edi = MEM32(ebp + 0x3C8);
    MEM32(ebp + 0x3D8) = 0;
    ecx = 0x1D0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x3D0);
    edx = MEM32(ebp + 0xD8);
    MEM32(ebp + 0x3C8) = ecx;
    ebx = ecx;
    ecx = ebp;
    MEM32(ebp + 0x3D0) = 0;
    MEM32(ebp + 0xD4) = edx;
    PUSH32(esp, 0); sub_002B3510(); /* call 0x002B3510 */

loc_002C5931: ;
    eax = MEM32(ebp + 0x3C4);
    ecx = ZX16(MEM16(eax + 0x10));
    ecx--;
    PUSH32(esp, ecx);
    SET_LO8(ecx, 0); /* xor self */
    eax = ebp;
    PUSH32(esp, 0); sub_002C5100(); /* call 0x002C5100 */

loc_002C5946: ;
    esp = esp + 4;
    goto loc_002C5964;

loc_002C594B: ;
    eax = MEM32(ebp + 0x3C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00036C00(); /* call 0x00036C00 */

loc_002C5961: ;
    esp = esp + 0x18;

loc_002C5964: ;
    ebx = MEM32(ebp + 0x3C8);
    ecx = ebp;
    PUSH32(esp, 0); sub_002B3510(); /* call 0x002B3510 */

loc_002C5971: ;
    edi = MEM32(ebp + 0x3C4);
    if (TEST_Z(MEM8(edi + 0x12), 1)) goto loc_002C5A47; /* je: equal / zero */

loc_002C5981: ;
    if (TEST_Z(edi, edi)) goto loc_002C5A47; /* je: equal / zero */

loc_002C5989: ;
    eax = edi + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002C5993: ;
    if (TEST_Z(eax, eax)) goto loc_002C5A47; /* je: equal / zero */

loc_002C599B: ;
    if (TEST_Z(MEM8(eax + 0x139), 0x40)) goto loc_002C5A47; /* je: equal / zero */

loc_002C59A8: ;
    SET_LO8(ecx, MEM8(ebp + 0x3FC));
    SET_LO8(eax, MEM8(ebp + 0x452));
    SET_LO8(ecx, LO8(ecx) | 1);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEM8(ebp + 0x3FC) = LO8(ecx);
    edx = MEM32(edi + 0x28);
    MEM32(ebp + 0x3F8) = edx;
    if (TEST_Z(LO8(eax), 0x40)) goto loc_002C5A47; /* je: equal / zero */

loc_002C59CE: ;
    if (TEST_Z(edi, edi)) goto loc_002C5A47; /* je: equal / zero */

loc_002C59D2: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = edi + 4;
    esi = esp + 0x23;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_000368A0(); /* call 0x000368A0 */

loc_002C59F4: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C5A47; /* je: equal / zero */

loc_002C59FB: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C5A47; /* je: equal / zero */

loc_002C5A03: ;
    if (TEST_Z(edi, edi)) goto loc_002C5A47; /* je: equal / zero */

loc_002C5A07: ;
    xmm1 = MEMF(ebp + 0x260); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    edx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0); sub_00036FA0(); /* call 0x00036FA0 */

loc_002C5A1E: ;
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = MEMF(ebp + 0x110); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    PUSH32(esp, ecx);
    eax = edi + 4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00036830(); /* call 0x00036830 */

loc_002C5A44: ;
    esp = esp + 4;

loc_002C5A47: ;
    eax = MEM32(ebp + 0x3C4);
    if (TEST_Z(MEM8(eax + 0x12), 4)) goto loc_002C5A5A; /* je: equal / zero */

loc_002C5A53: ;
    MEM8(ebp + 0x3FC) = MEM8(ebp + 0x3FC) | 0x10;

loc_002C5A5A: ;
    if (TEST_Z(MEM8(eax + 0x12), 2)) goto loc_002C5B39; /* je: equal / zero */

loc_002C5A64: ;
    SET_LO8(ecx, MEM8(esp + 0x38));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C5AA9; /* je: equal / zero */

loc_002C5A6C: ;
    if (TEST_Z(eax, eax)) goto loc_002C5AA9; /* je: equal / zero */

loc_002C5A70: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002C5A7A: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_002C5AA9; /* je: equal / zero */

loc_002C5A80: ;
    if (CMP_NE(MEM8(esi + 0x1F1), 1)) goto loc_002C5AA9; /* jne: not equal / not zero */

loc_002C5A89: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esi + 0x10;
    PUSH32(esp, 0); sub_003CC0D0(); /* call 0x003CC0D0 */

loc_002C5A94: ;
    PUSH32(esp, 0); sub_003CC300(); /* call 0x003CC300 */

loc_002C5A99: ;
    eax = 0; /* xor self */
    MEM16(esi + 0x1DA) = LO16(eax);
    MEM16(esi + 0x1D8) = LO16(eax);

loc_002C5AA9: ;
    eax = MEM32(ebp + 0x3C4);
    xmm0 = MEMF(eax + 0x14); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1C); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x2C); /* movss */
    ecx = esp + 0x24;
    eax = ecx;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E4BB0(); /* call 0x003E4BB0 */

loc_002C5AE6: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esp + 0x40;
    edx = esp + 0x24;
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_003E4060(); /* call 0x003E4060 */

loc_002C5AFE: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002C5B16: ;
    MEM16(ebp + 0x170) = MEM16(ebp + 0x170) + LO16(eax);
    MEM16(ebp + 0x176) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x170));
    MEM16(ebp + 0x174) = LO16(eax);
    MEM16(ebp + 0x172) = LO16(eax);

loc_002C5B39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002C5B3C: ;
    POP32(esp, ebp);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002C5B50
 * Original: 0x002C5B50 - 0x002C5BC7 (119 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C5B50(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C5B50: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, esi);
    esi = eax + ecx;
    eax = MEM32(esi + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x7FAAB8) = esi;
    if (TEST_Z(eax, eax)) goto loc_002C5BC5; /* je: equal / zero */

loc_002C5B6D: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C5B81; /* jne: not equal / not zero */

loc_002C5B76: ;
    eax = MEM32(esi + 0x468);
    if (TEST_NZ(HI8(eax), 2)) goto loc_002C5BC5; /* jne: not equal / not zero */

loc_002C5B81: ;
    SET_LO8(eax, MEM8(0x76EDF8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C5BB0; /* je: equal / zero */

loc_002C5B8A: ;
    SET_LO8(eax, MEM8(0x76F0D4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C5BB0; /* jne: not equal / not zero */

loc_002C5B93: ;
    SET_LO8(eax, MEM8(0x76F0D0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C5BB0; /* jne: not equal / not zero */

loc_002C5B9C: ;
    eax = esi;
    PUSH32(esp, 0); sub_00054020(); /* call 0x00054020 */

loc_002C5BA3: ;
    if (TEST_NZ(eax, eax)) goto loc_002C5BB0; /* jne: not equal / not zero */

loc_002C5BA7: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x19F)) goto loc_002C5BC5; /* jne: not equal / not zero */

loc_002C5BB0: ;
    ecx = MEM32(esi + 0x3C4);
    if (TEST_Z(ecx, ecx)) goto loc_002C5BC5; /* je: equal / zero */

loc_002C5BBA: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002C5500(); /* call 0x002C5500 */

loc_002C5BC2: ;
    esp = esp + 4;

loc_002C5BC5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C5BD0
 * Original: 0x002C5BD0 - 0x002C5C5F (143 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C5BD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002C5BD0: ;
    eax = MEM32(eax + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x7FAAB8) = esi;
    if (TEST_NZ(eax, eax)) goto loc_002C5C33; /* jne: not equal / not zero */

loc_002C5BE0: ;
    xmm2 = 0.0f; /* xorps self = zero */

loc_002C5BE3: ;
    xmm1 = xmm2; /* movaps */

loc_002C5BE6: ;
    eax = MEM32(esi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_002C5C5E; /* je: equal / zero */

loc_002C5BF0: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002C5BFA: ;
    if (TEST_Z(eax, eax)) goto loc_002C5C5E; /* je: equal / zero */

loc_002C5BFE: ;
    /* comiss xmm2, MEMF(eax + 0xE8) - sets EFLAGS */
    ecx = MEM32(eax + 0x10);
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x1CC) = xmm0; /* movss */
    if ((xmm2 > MEMF(eax + 0xE8))) goto loc_002C5C4E; /* ja: above (unsigned >) */

loc_002C5C22: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_002C5C33: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002C5C3D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    if (TEST_Z(eax, eax)) goto loc_002C5BE3; /* je: equal / zero */

loc_002C5C44: ;
    xmm1 = MEMF(eax + 0xDC); /* movss */
    goto loc_002C5BE6;

loc_002C5C4E: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */

loc_002C5C5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C5C60
 * Original: 0x002C5C60 - 0x002C5CE9 (137 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C5C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C5C60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x4B0);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0x18);
    ebp = MEM32(ecx + 0x14);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(0x7FAAB8) = esi;
    if (TEST_Z(ebp, ebp)) goto loc_002C5CE5; /* je: equal / zero */

loc_002C5C7E: ;
    ecx = MEM32(0x81BCE0);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E991C);
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_002C5C97: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003ED420(); /* call 0x003ED420 */

loc_002C5CA3: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002C5CE4; /* je: equal / zero */

loc_002C5CAA: ;
    edx = MEM32(esi + 0x5D4);
    MEM32(0x812A18) = edx;
    SET_LO16(eax, MEM16(eax + 0x30));
    edi = ZX16(LO16(eax));
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x3C8);
    esi = 0; /* xor self */
    if (CMP_BE(edi & edi, 0)) goto loc_002C5CE3; /* jbe: below or equal (unsigned <=) */

loc_002C5CCA: ;
    /* nop */

loc_002C5CD0: ;
    ecx = esi;
    eax = ebx;
    edx = ebp;
    PUSH32(esp, 0); sub_003D63C0(); /* call 0x003D63C0 */

loc_002C5CDB: ;
    esi++;
    ebx = ebx + 0x40;
    if (CMP_B(esi, edi)) goto loc_002C5CD0; /* jb: below (unsigned <) */

loc_002C5CE3: ;
    POP32(esp, ebx);

loc_002C5CE4: ;
    POP32(esp, edi);

loc_002C5CE5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C5CF0
 * Original: 0x002C5CF0 - 0x002C5DC3 (211 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C5CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C5CF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ecx)) goto loc_002C5D14; /* je: equal / zero */

loc_002C5D05: ;
    edx = MEM32(eax);
    if (CMP_EQ(edx, MEM32(esp + 0x14))) goto loc_002C5D14; /* je: equal / zero */

loc_002C5D0D: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_002C5D05; /* jne: not equal / not zero */

loc_002C5D14: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ebx = eax;
    if (CMP_EQ(eax, ecx)) goto loc_002C5DBD; /* je: equal / zero */

loc_002C5D1E: ;
    PUSH32(esp, edi);
    /* nop */

loc_002C5D20: ;
    eax = MEM32(ebx + 4);
    xmm0 = (float)(int32_t)MEM32(eax + 0x1C); /* cvtsi2ss */
    /* comiss xmm0, MEMF(ebp + 4) - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if ((xmm0 < MEMF(ebp + 4))) goto loc_002C5D95; /* jb: below (unsigned <) */

loc_002C5D34: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_002C5D4B; /* ja: above (unsigned >) */

loc_002C5D42: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_002C5D95; /* jne: not equal / not zero */

loc_002C5D4B: ;
    ecx = MEM32(ebp);
    eax = MEM32(eax + 0x14);
    esi = MEM32(ecx + 0xA4);
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_002C5D5C: ;
    edi = eax;
    PUSH32(esp, 0); sub_001DB6B0(); /* call 0x001DB6B0 */

loc_002C5D63: ;
    edx = MEM32(ebp);
    ecx = ZX16(MEM16(edx + 0x60));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    eax = eax + ecx + 0x20;
    ecx = MEM32(eax + 0x30);
    if (CMP_GE(ecx, 3)) goto loc_002C5D95; /* jge: greater or equal (signed >=) */

loc_002C5D79: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + ecx * 4) = xmm0; /* movss */
    edx = MEM32(eax + 0x30);
    MEM32(eax + edx * 4 + 0x10) = edi;
    ecx = MEM32(eax + 0x30);
    MEM32(eax + ecx * 4 + 0x20) = esi;
    MEM32(eax + 0x30) = MEM32(eax + 0x30) + 1;

loc_002C5D95: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx + 8);
    eax = ebx + 8;
    if (CMP_EQ(eax, ecx)) goto loc_002C5DB2; /* je: equal / zero */

loc_002C5DA3: ;
    edx = MEM32(esp + 0x18);

loc_002C5DA7: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_002C5DB2; /* je: equal / zero */

loc_002C5DAB: ;
    eax = eax + 8;
    if (CMP_NE(eax, ecx)) goto loc_002C5DA7; /* jne: not equal / not zero */

loc_002C5DB2: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ebx = eax;
    if (CMP_NE(eax, ecx)) goto loc_002C5D20; /* jne: not equal / not zero */

loc_002C5DBC: ;
    POP32(esp, edi);

loc_002C5DBD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002C5DD0
 * Original: 0x002C5DD0 - 0x002C5DDE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C5DD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C5DD0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) { sub_002C5DDE(); return; } /* jne: not equal / not zero */

loc_002C5DD7: ;
    eax = eax + 4;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002C5E20
 * Original: 0x002C5E20 - 0x002C603B (539 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C5E20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C5E20: ;
    esp = esp - 0x454;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x46C);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_002C5E44; /* je: equal / zero */

loc_002C5E3E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_002C5E44: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_002C5E51: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_002C5F49; /* jne: not equal / not zero */

loc_002C5E64: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_002C600F; /* jbe: below or equal (unsigned <=) */

loc_002C5E6C: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;

loc_002C5E85: ;
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
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_002C5F34; /* jbe: below or equal (unsigned <=) */

loc_002C5F24: ;
    ecx = MEM32(esi);
    if (CMP_NE(MEM32(ecx + 0x64), 1)) goto loc_002C5F34; /* jne: not equal / not zero */

loc_002C5F2C: ;
    MEM32(esp + 0x46C) = MEM32(esp + 0x46C) + 4;

loc_002C5F34: ;
    edx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, edx)) goto loc_002C5E85; /* jl: less (signed <) */

loc_002C5F44: ;
    goto loc_002C600F;

loc_002C5F49: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_002C600F; /* jbe: below or equal (unsigned <=) */

loc_002C5F51: ;
    ecx = esp + 0x58;
    eax = esp + 0x20;
    edx = ecx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;

loc_002C5F67: ;
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
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_002C5FFF; /* jbe: below or equal (unsigned <=) */

loc_002C5FFE: ;
    ebx++;

loc_002C5FFF: ;
    ecx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, ecx)) goto loc_002C5F67; /* jl: less (signed <) */

loc_002C600F: ;
    edi = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(edi, edi)) goto loc_002C5E51; /* jne: not equal / not zero */

loc_002C601C: ;
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
 * sub_002C6040
 * Original: 0x002C6040 - 0x002C605A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6040(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C6040: ;
    if (CMP_GE(esi, 0xF7)) { sub_002C605A(); return; } /* jge: greater or equal (signed >=) */

loc_002C6048: ;
    ecx = MEM32(edx + 0x420);
    eax = esi + esi * 4;
    ecx = ecx + eax;
    MEM32(edx + 0x420) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002C60A0
 * Original: 0x002C60A0 - 0x002C60DE (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C60A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C60A0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FAAD8));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    if (CMP_EQ(LO8(ecx), 0x7F)) goto loc_002C60BC; /* je: equal / zero */

loc_002C60B1: ;
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM16(eax + 0x450) = LO16(ecx);

loc_002C60BC: ;
    ecx = MEM32(eax + 0x1FC);
    SET_LO8(edx, MEM8(0x7FAADB));
    ecx = ecx & 0xFFFFEBC1u;
    (void)0; /* cmp LO8(edx), 0xFA - flags set for next jcc */
    MEM32(eax + 0x1FC) = ecx;
    if (CMP_NE(LO8(edx), 0xFA)) { sub_002C60DE(); return; } /* jne: not equal / not zero */

loc_002C60D9: ;
    ecx = ecx | 0x22;
    g_seh_ebp = ebp; sub_002C60E6(); return; /* tail jmp 0x002C60E6 */

}

/**
 * sub_002C6100
 * Original: 0x002C6100 - 0x002C6181 (129 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C6100: ;
    SET_LO16(eax, ZX8(MEM8(0x7FAADB)));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x42F) = 0;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    MEM16(ecx + 0x428) = LO16(eax);
    SET_LO8(eax, MEM8(0x7FAAD9));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_002C617A; /* je: equal / zero */

loc_002C6126: ;
    edx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ecx + 0x118) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_002C6152; /* jp: parity */

loc_002C6142: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(ecx + 0x118) = xmm0; /* movss */

loc_002C6152: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C617A; /* je: equal / zero */

loc_002C615B: ;
    eax = MEM32(ecx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002C617A; /* je: equal / zero */

loc_002C6165: ;
    if (CMP_NE(MEM32(eax + 0xBC), 1)) goto loc_002C617A; /* jne: not equal / not zero */

loc_002C616E: ;
    edx = MEM32(ecx + 0x118);
    MEM32(eax + 0xD0) = edx;

loc_002C617A: ;
    eax = ecx;
    g_seh_ebp = ebp; sub_002C60A0(); return; /* tail jmp 0x002C60A0 */

}

/**
 * sub_002C6190
 * Original: 0x002C6190 - 0x002C62A7 (279 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C6190: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A1A8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = ZX8(MEM8(esi + 0x253));
    SET_LO8(eax, MEM8(eax + ecx));
    SET_LO8(ecx, MEM8(esi + 0x42B));
    SET_LO8(eax, LO8(eax) - 1);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C61B5; /* je: equal / zero */

loc_002C61B3: ;
    SET_LO8(eax, LO8(ecx));

loc_002C61B5: ;
    SET_LO8(ebx, MEM8(esi + 0x42C));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - LO8(ebx));
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x7FAADA));
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_002C61EE; /* jne: not equal / not zero */

loc_002C61CE: ;
    if (CMP_EQ(MEM8(esi + 0x42F), 0xD)) goto loc_002C623F; /* je: equal / zero */

loc_002C61D7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C61DC: ;
    ecx = ZX8(MEM8(esp + 0x10));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    MEM8(esi + 0x42A) = LO8(edx);
    goto loc_002C623F;

loc_002C61EE: ;
    if (CMP_NE(LO8(ecx), 0xFE)) goto loc_002C6239; /* jne: not equal / not zero */

loc_002C61F3: ;
    if (CMP_EQ(MEM8(esi + 0x42F), 0xD)) goto loc_002C623F; /* je: equal / zero */

loc_002C61FC: ;
    SET_LO8(edx, MEM8(esi + 0x42A));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) - 1);
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 0xB) = LO8(ecx);
    if (CMP_A(LO8(edx), LO8(ebx))) goto loc_002C6214; /* ja: above (unsigned >) */

loc_002C620E: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(esp + 0xB) = LO8(eax);

loc_002C6214: ;
    SET_LO8(ebx, MEM8(esi + 0x42C));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C621F: ;
    ecx = ZX8(MEM8(esp + 0x10));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(esp + 0xB));
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    if (CMP_EQ(LO8(edx), LO8(eax))) goto loc_002C623F; /* je: equal / zero */

loc_002C6231: ;
    MEM8(esi + 0x42A) = LO8(edx);
    goto loc_002C623F;

loc_002C6239: ;
    MEM8(esi + 0x42A) = LO8(ecx);

loc_002C623F: ;
    SET_LO16(edx, ZX8(MEM8(0x7FAADB)));
    SET_LO8(eax, MEM8(0x7FAAD9));
    MEM8(esi + 0x42F) = 0;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    MEM16(esi + 0x428) = LO16(edx);
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_002C628D; /* je: equal / zero */

loc_002C6261: ;
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + 0x118) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_002C628D; /* jp: parity */

loc_002C627D: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esi + 0x118) = xmm0; /* movss */

loc_002C628D: ;
    if (CMP_BE(LO8(ebx), MEM8(esi + 0x42A))) goto loc_002C629B; /* jbe: below or equal (unsigned <=) */

loc_002C6295: ;
    MEM8(esi + 0x42A) = LO8(ebx);

loc_002C629B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_002C60A0(); return; /* tail jmp 0x002C60A0 */

}

/**
 * sub_002C6330
 * Original: 0x002C6330 - 0x002C635F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C6330: ;
    edx = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x42D);
    eax = ZX8(MEM8(edx + 0x42A));
    eax = eax - ecx;
    ecx = ZX8(MEM8(edx + 0x253));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A1A8);
    ecx = ZX8(MEM8(ecx + esi));
    if (((int32_t)eax >= 0)) { sub_002C635F(); return; } /* jns: not sign (positive) */

loc_002C6359: ;
    eax = eax + ecx + -1;
    g_seh_ebp = ebp; sub_002C636F(); return; /* tail jmp 0x002C636F */

}

/**
 * sub_002C63F0
 * Original: 0x002C63F0 - 0x002C6430 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C63F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C63F0: ;
    SET_LO8(ecx, MEM8(0x7FAAD9));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edx = MEM32(esp + 4);
    eax = ZX8(MEM8(edx + 0x42A));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002C6411; /* jne: not equal / not zero */

loc_002C6405: ;
    ecx = ZX8(MEM8(0x7FAADA));
    if (CMP_EQ(eax, ecx)) goto loc_002C6421; /* je: equal / zero */

loc_002C6410: ;
    esp += 4; return; /* ret */

loc_002C6411: ;
    if (CMP_NE(LO8(ecx), 1)) goto loc_002C642F; /* jne: not equal / not zero */

loc_002C6416: ;
    ecx = ZX8(MEM8(0x7FAADA));
    if (CMP_EQ(eax, ecx)) goto loc_002C642F; /* je: equal / zero */

loc_002C6421: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C642E: ;
    POP32(esp, esi);

loc_002C642F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C64B0
 * Original: 0x002C64B0 - 0x002C64C7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C64B0(void)
{

loc_002C64B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C64BB: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 0xA;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C64D0
 * Original: 0x002C64D0 - 0x002C64E7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C64D0(void)
{

loc_002C64D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6190(); /* call 0x002C6190 */

loc_002C64DB: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 0xA;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C64F0
 * Original: 0x002C64F0 - 0x002C6507 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C64F0(void)
{

loc_002C64F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C64FB: ;
    MEM8(esi + 0x438) = MEM8(esi + 0x438) | 2;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6510
 * Original: 0x002C6510 - 0x002C6542 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6510(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C6510: ;
    SET_LO8(eax, MEM8(0x7FAAD8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C6524; /* je: equal / zero */

loc_002C651D: ;
    MEM8(eax + 0x438) = MEM8(eax + 0x438) | 0x80;

loc_002C6524: ;
    SET_LO8(ecx, MEM8(0x7FAAD9));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002C6542(); return; } /* je: equal / zero */

loc_002C652E: ;
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x439) = MEM8(eax + 0x439) | 4;
    MEM8(eax + 0x43E) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6550
 * Original: 0x002C6550 - 0x002C65C6 (118 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6550(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002C6550: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x13 - flags set for next jcc */
    ecx = MEM32(esp + 4);
    if (CMP_NE(MEM32(0x7FA1F8), 0x13)) goto loc_002C6588; /* jne: not equal / not zero */

loc_002C655D: ;
    if (CMP_NE(MEM32(ecx + 0x68), 0x66)) goto loc_002C6588; /* jne: not equal / not zero */

loc_002C6563: ;
    xmm0 = MEMF(0x7F9F5C); /* movss */
    /* ucomiss xmm0, MEMF(0x648F08) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002C6588; /* jp: parity */

loc_002C6578: ;
    if (CMP_NE(MEM8(0x7FAADA), 0xC)) goto loc_002C6588; /* jne: not equal / not zero */

loc_002C6581: ;
    MEM8(0x7FAADA) = 0xA;

loc_002C6588: ;
    SET_LO8(eax, MEM8(0x7FAAD8));
    if (CMP_EQ(LO8(eax), 1)) goto loc_002C65AE; /* je: equal / zero */

loc_002C6591: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(0x7FAAD9));
    SET_LO8(edx, MEM8(0x7FAADB));
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 0xD0) = xmm0; /* movss */

loc_002C65AE: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_002C65C5; /* je: equal / zero */

loc_002C65B2: ;
    eax = (uint32_t)(int32_t)SMEM8(0x7FAADA);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0xD4) = xmm0; /* movss */

loc_002C65C5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C65D0
 * Original: 0x002C65D0 - 0x002C65F2 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C65D0(void)
{

loc_002C65D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C65DB: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    esp = esp + 4;
    MEM8(esi + 0x42F) = 0x10;
    MEM8(esi + 0x43C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6600
 * Original: 0x002C6600 - 0x002C6617 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6600(void)
{

loc_002C6600: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C660B: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 0xF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6620
 * Original: 0x002C6620 - 0x002C6637 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6620(void)
{

loc_002C6620: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C662B: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 0xE;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6640
 * Original: 0x002C6640 - 0x002C665E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6640(void)
{

loc_002C6640: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C664B: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 0xC;
    MEM8(esi + 0x42E) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6660
 * Original: 0x002C6660 - 0x002C6677 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6660(void)
{

loc_002C6660: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C666B: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 9;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6680
 * Original: 0x002C6680 - 0x002C6697 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6680(void)
{

loc_002C6680: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C668B: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C66A0
 * Original: 0x002C66A0 - 0x002C66E6 (70 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C66A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C66A0: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C66B9; /* jne: not equal / not zero */

loc_002C66AE: ;
    SET_LO8(eax, MEM8(esi + 0x43D));
    MEM8(0x7FAADA) = LO8(eax);

loc_002C66B9: ;
    SET_LO8(ecx, MEM8(0x7FAAD8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C66C9; /* je: equal / zero */

loc_002C66C3: ;
    MEM8(esi + 0x43D) = LO8(ecx);

loc_002C66C9: ;
    ecx = ZX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_002C66D2: ;
    MEM32(esi + 0x424) = eax;
    eax = eax + 0xFFFFFFFBu;
    esp = esp + 4;
    MEM32(esi + 0x420) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C66F0
 * Original: 0x002C66F0 - 0x002C6707 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C66F0(void)
{

loc_002C66F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C66FB: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6710
 * Original: 0x002C6710 - 0x002C6721 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6710(void)
{

loc_002C6710: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x440) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6730
 * Original: 0x002C6730 - 0x002C675B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6730(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C6730: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C6735: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = ZX8(MEM8(0x7FAAD9));
    if (CMP_GE(edx, eax)) goto loc_002C675A; /* jge: greater or equal (signed >=) */

loc_002C6748: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C6759: ;
    POP32(esp, esi);

loc_002C675A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C6760
 * Original: 0x002C6760 - 0x002C6789 (41 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6760(void)
{

loc_002C6760: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    SET_LO8(edx, MEM8(0x7FAADA));
    MEM8(eax + 0x43F) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x7FAAD9));
    MEM8(eax + 0x441) = LO8(edx);
    MEM8(eax + 0x442) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6790
 * Original: 0x002C6790 - 0x002C67A7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6790(void)
{

loc_002C6790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C679B: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C67B0
 * Original: 0x002C67B0 - 0x002C6808 (88 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C67B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002C67B0: ;
    SET_LO8(ecx, MEM8(0x7FAADB));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C67E2; /* je: equal / zero */

loc_002C67BE: ;
    SET_LO8(edx, MEM8(0x7FAAD9));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002C67D1; /* jne: not equal / not zero */

loc_002C67C8: ;
    ecx = ZX8(LO8(ecx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    goto loc_002C67DA;

loc_002C67D1: ;
    edx = ZX8(LO8(ecx));
    edx = (uint32_t)(-(int32_t)edx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */

loc_002C67DA: ;
    MEMF(eax + 0xD0) = xmm0; /* movss */

loc_002C67E2: ;
    SET_LO8(ecx, MEM8(0x7FAADA));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002C6808(); return; } /* je: equal / zero */

loc_002C67EC: ;
    SET_LO8(edx, MEM8(0x7FAAD8));
    ecx = ZX8(LO8(ecx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    MEM8(eax + 0x10A) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6820
 * Original: 0x002C6820 - 0x002C6900 (224 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6820(void)
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

loc_002C6820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C682B: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    ecx = ZX8(MEM8(esi + 0x253));
    MEM8(esi + 0x42A) = LO8(eax);
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A1A0);
    ecx = MEM32(eax + ecx * 4);
    eax = ecx + edx * 8;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(esp + 0xC) = edx;
    esp = esp + 4;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(0x649030)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002C68C3; /* jbe: below or equal (unsigned <=) */

loc_002C6897: ;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * MEMF(0x64986C); /* mulss */
    xmm0 = xmm0 * MEMF(esi + 0x118); /* mulss */
    MEMF(esi + 0x118) = xmm0; /* movss */
    xmm0 = MEMF(0x649030); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_002C68C3: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002C68D2: ;
    xmm0 = MEMF(esi + 0xD4); /* movss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEM16(esi + 0x428) = LO16(eax);
    MEMF(esi + 0xD0) = xmm0; /* movss */
    MEM8(esi + 0x42F) = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002C6920
 * Original: 0x002C6920 - 0x002C6933 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6920(void)
{

loc_002C6920: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x438) = MEM8(eax + 0x438) & 0xFE;
    MEM8(eax + 0x42F) = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_002C6940
 * Original: 0x002C6940 - 0x002C6953 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6940(void)
{

loc_002C6940: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x438) = MEM8(eax + 0x438) | 1;
    MEM8(eax + 0x42F) = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_002C6960
 * Original: 0x002C6960 - 0x002C6981 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6960(void)
{

loc_002C6960: ;
    eax = ZX8(MEM8(0x7FAAD9));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(0x7FAADB));
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(0x7FAADA));
    PUSH32(esp, 0); sub_002F4E60(); /* call 0x002F4E60 */

loc_002C697F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6990
 * Original: 0x002C6990 - 0x002C69CF (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6990(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C6990: ;
    SET_LO8(eax, MEM8(0x846FFD));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C69CE; /* je: equal / zero */

loc_002C6999: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_002C69AA: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AD478);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_002C69BA: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5ACB30);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_002C69CA: ;
    esp = esp + 0xC;
    POP32(esp, esi);

loc_002C69CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C69D0
 * Original: 0x002C69D0 - 0x002C6A04 (52 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C69D0(void)
{
    float xmm0;

loc_002C69D0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    ecx = (int32_t)MEMF(eax + 0x80); /* cvttss2si */
    eax = (int32_t)MEMF(eax + 0x78); /* cvttss2si */
    PUSH32(esp, 0x3EE66666);
    edx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0); sub_000DED70(); /* call 0x000DED70 */

loc_002C6A00: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002C6A10
 * Original: 0x002C6A10 - 0x002C6A3D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6A10(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C6A10: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(edx + 0x214));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C6A2C; /* jne: not equal / not zero */

loc_002C6A1E: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C6A2B: ;
    POP32(esp, esi);

loc_002C6A2C: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C6A3C; /* je: equal / zero */

loc_002C6A35: ;
    MEM8(edx + 0x214) = 0;

loc_002C6A3C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C6A40
 * Original: 0x002C6A40 - 0x002C6A51 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6A40(void)
{

loc_002C6A40: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x441) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6A60
 * Original: 0x002C6A60 - 0x002C6AA9 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C6A60: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x13 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM32(0x7FA1F8), 0x13)) goto loc_002C6A8F; /* jne: not equal / not zero */

loc_002C6A6E: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x66)) goto loc_002C6A8F; /* jne: not equal / not zero */

loc_002C6A74: ;
    xmm0 = MEMF(0x7F9F5C); /* movss */
    /* ucomiss xmm0, MEMF(0x648F08) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002C6A8F; /* jp: parity */

loc_002C6A89: ;
    MEM8(0x7FAADB) = MEM8(0x7FAADB) >> 1;

loc_002C6A8F: ;
    SET_LO8(eax, MEM8(0x7FAADB));
    if (CMP_NE(LO8(eax), 0x80)) { sub_002C6AA9(); return; } /* jne: not equal / not zero */

loc_002C6A98: ;
    eax = MEM32(esi + 0x258);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    MEM8(esi + 0x3EE) = LO8(ecx);
    g_seh_ebp = ebp; sub_002C6AAF(); return; /* tail jmp 0x002C6AAF */

}

/**
 * sub_002C6B30
 * Original: 0x002C6B30 - 0x002C6B41 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6B30(void)
{

loc_002C6B30: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x443) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6B50
 * Original: 0x002C6B50 - 0x002C6B69 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6B50(void)
{

loc_002C6B50: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    MEM16(ecx + 0x43A) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6B70
 * Original: 0x002C6B70 - 0x002C6BA6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6B70(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C6B70: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002C6BA6(); return; } /* je: equal / zero */

loc_002C6B79: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_002C6B89: ;
    if (TEST_Z(eax, eax)) goto loc_002C6BA4; /* je: equal / zero */

loc_002C6B8D: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_002C6B98: ;
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x234) = LO8(ecx);

loc_002C6BA4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6BC0
 * Original: 0x002C6BC0 - 0x002C6BF4 (52 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6BC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002C6BC0: ;
    ecx = ZX8(MEM8(0x7FAADB));
    eax = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(0x7FAAD8));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = xmm0 + MEMF(eax + 0x7C); /* addss */
    MEMF(eax + 0x7C) = xmm0; /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C6BF3; /* je: equal / zero */

loc_002C6BE6: ;
    xmm0 = MEMF(0x648F50); /* movss */
    MEMF(eax + 0x7C) = xmm0; /* movss */

loc_002C6BF3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C6C00
 * Original: 0x002C6C00 - 0x002C6C11 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6C00(void)
{

loc_002C6C00: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x456) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6C20
 * Original: 0x002C6C20 - 0x002C6C51 (49 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6C20(void)
{

loc_002C6C20: ;
    edx = ZX8(MEM8(0x7FAAD9));
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(0x7FAADB));
    SET_LO8(ecx, MEM8(0x7FAADA));
    ecx = ecx << 8;
    ecx = ecx | edx;
    edx = ZX8(MEM8(0x7FAAD8));
    ecx = ecx << 8;
    ecx = ecx | edx;
    MEM32(eax + 0x200) = MEM32(eax + 0x200) | ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002C6C60
 * Original: 0x002C6C60 - 0x002C6C9B (59 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6C60(void)
{

loc_002C6C60: ;
    edx = ZX8(MEM8(0x7FAAD9));
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(0x7FAADB));
    SET_LO8(ecx, MEM8(0x7FAADA));
    ecx = ecx << 8;
    ecx = ecx | edx;
    edx = ZX8(MEM8(0x7FAAD8));
    ecx = ecx << 8;
    ecx = ecx | edx;
    edx = MEM32(eax + 0x200);
    ecx = ~ecx;
    edx = edx & ecx;
    MEM32(eax + 0x200) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002C6CA0
 * Original: 0x002C6CA0 - 0x002C6CF3 (83 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6CA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002C6CA0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    SET_LO8(ecx, MEM8(0x7FAADB));
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_002C6CBF; /* jbe: below or equal (unsigned <=) */

loc_002C6CBB: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C6CDA; /* je: equal / zero */

loc_002C6CBF: ;
    xmm1 = MEMF(eax + 0xDC); /* movss */
    edx = ZX8(LO8(ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x32);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002C6CF2; /* jbe: below or equal (unsigned <=) */

loc_002C6CD6: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C6CF2; /* je: equal / zero */

loc_002C6CDA: ;
    ecx = MEM32(eax + 0x420);
    ecx = ecx + 0xFFFFFFFBu;
    MEM16(eax + 0x428) = 0x63;
    MEM32(eax + 0x420) = ecx;

loc_002C6CF2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C6D00
 * Original: 0x002C6D00 - 0x002C6D93 (147 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002C6D00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC0;
    eax = ZX8(MEM8(0x7FAADB));
    eax = eax - 0;
    if ((eax == 0)) goto loc_002C6D64; /* je: equal / zero */

loc_002C6D18: ;
    eax--;
    if ((eax != 0)) goto loc_002C6D8F; /* jne: not equal / not zero */

loc_002C6D1B: ;
    edx = MEM32(ebp + 8);
    xmm0 = MEMF(edx + 0x78); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9E0); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x80); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_002C6D4E: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_001041E0(); /* call 0x001041E0 */

loc_002C6D5D: ;
    esp = esp + 8;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002C6D64: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_002C6D8F; /* je: equal / zero */

loc_002C6D6B: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    PUSH32(esp, 8);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM32(esp + 0x14) = eax;
    MEM8(esp + 0x18) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_002C6D8C: ;
    esp = esp + 0x10;

loc_002C6D8F: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C6DA0
 * Original: 0x002C6DA0 - 0x002C6DF7 (87 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6DA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C6DA0: ;
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = ZX8(MEM8(edi + 0x42E));
    xmm1 = MEMF(edi + 0x80); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm0 = MEMF(eax + esi + 0x78); /* movss */
    xmm1 = xmm1 - MEMF(eax + esi + 0x80); /* subss */
    xmm0 = xmm0 - MEMF(edi + 0x78); /* subss */
    eax = eax + esi;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm1; /* movss */
    if (1 /* jp after test - parity */) { sub_002C6DF7(); return; } /* jp: parity */

loc_002C6DEA: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002C6DF7(); return; } /* jp: parity */

loc_002C6DF3: ;
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_002C6E25(); return; /* tail jmp 0x002C6E25 */

}

/**
 * sub_002C6E70
 * Original: 0x002C6E70 - 0x002C702C (444 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C6E70(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C6E70: ;
    esp = esp - 8;
    eax = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ecx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    eax = eax << 3;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    ebx = 0; /* xor self */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM8(esi + 0x1B0) = 0;
    MEM32(esp + 0x14) = ecx;
    edi = edi + 0x68;
    /* nop */

loc_002C6EB0: ;
    edx = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(edx + ebx), 0)) goto loc_002C6FAB; /* je: equal / zero */

loc_002C6EC0: ;
    if (CMP_EQ(MEM16(edi + 0x346), 0)) goto loc_002C6FAB; /* je: equal / zero */

loc_002C6ECE: ;
    if (TEST_Z(MEM8(edi + 0x198), 0x20)) goto loc_002C6FAB; /* je: equal / zero */

loc_002C6EDB: ;
    if (CMP_EQ(ebx, MEM32(esp + 0x14))) goto loc_002C6FAB; /* je: equal / zero */

loc_002C6EE5: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C6EF9; /* jne: not equal / not zero */

loc_002C6EEE: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, MEM32(esi + 0x68))) goto loc_002C6FAB; /* je: equal / zero */

loc_002C6EF9: ;
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648F08)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_002C6FAB; /* ja: above (unsigned >) */

loc_002C6F13: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, 0x29)) goto loc_002C6FAB; /* je: equal / zero */

loc_002C6F1E: ;
    if (CMP_EQ(eax, 0x33)) goto loc_002C6FAB; /* je: equal / zero */

loc_002C6F27: ;
    eax = edi + -104;
    ecx = esi;
    PUSH32(esp, 0); sub_002EBA90(); /* call 0x002EBA90 */

loc_002C6F31: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002C6FAB; /* jbe: below or equal (unsigned <=) */

loc_002C6F3F: ;
    xmm0 = MEMF(esi + 0x80); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x18); /* subss */
    xmm1 = MEMF(edi + 0x10); /* movss */
    ebp = ZX8(MEM8(esi + 0x44E));
    xmm1 = xmm1 - MEMF(esi + 0x78); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002EBA00(); /* call 0x002EBA00 */

loc_002C6F68: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x518));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x171));
    eax = ZX8(HI8(eax));
    esp = esp + 4;
    ecx = ecx - eax;
    eax = ebp;
    ecx = ecx + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx = ecx + eax;
    ecx = ecx & 0xFF;
    if (CMP_GE(ecx, ebp)) goto loc_002C6FAB; /* jge: greater or equal (signed >=) */

loc_002C6F95: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) + 0x80);
    MEM8(esi + 0x1B0) = LO8(eax);
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_002C6FAB: ;
    ebx++;
    edi = edi + 0x6D0;
    if (CMP_L(ebx, 0x80)) goto loc_002C6EB0; /* jl: less (signed <) */

loc_002C6FBE: ;
    SET_LO8(eax, MEM8(esi + 0x1B0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C7024; /* je: equal / zero */

loc_002C6FC8: ;
    ecx = ZX8(MEM8(0x7FAAD8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_002C6FD5: ;
    SET_LO8(ecx, MEM8(0x7FAAD9));
    MEM32(esi + 0x424) = eax;
    eax = eax + 0xFFFFFFFBu;
    esp = esp + 4;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(esi + 0x420) = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C7024; /* je: equal / zero */

loc_002C6FF1: ;
    edx = MEM32(0x84A5F8);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x1B0));
    eax = eax & 0x7F;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    MEM8(eax + 0x43D) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM32(eax + 0x420) = 0;
    MEM8(eax + 0x42E) = LO8(ecx);

loc_002C7024: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002C7030
 * Original: 0x002C7030 - 0x002C7044 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7030(void)
{

loc_002C7030: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x1B0));
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    MEM8(eax + 0x42E) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7050
 * Original: 0x002C7050 - 0x002C7061 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7050(void)
{

loc_002C7050: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0xA1) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7070
 * Original: 0x002C7070 - 0x002C708A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C7070: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = ZX16(MEM16(esi + 0x60));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002C708A(); return; } /* je: equal / zero */

loc_002C7083: ;
    ebx = 0x80;
    g_seh_ebp = ebp; sub_002C708E(); return; /* tail jmp 0x002C708E */

}

/**
 * sub_002C70F0
 * Original: 0x002C70F0 - 0x002C711C (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C70F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C70F0: ;
    ecx = MEM32(esp + 4);
    if (CMP_A(MEM8(ecx + 0xB7), 1)) { sub_002C711C(); return; } /* ja: above (unsigned >) */

loc_002C70FD: ;
    SET_LO8(eax, MEM8(0x7FAADB));
    MEM8(ecx + 0xB7) = 0;
    MEM8(ecx + 0xB4) = LO8(eax);
    MEM8(ecx + 0xB5) = LO8(eax);
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_002F60E0(); return; /* tail jmp 0x002F60E0 */

}

/**
 * sub_002C7120
 * Original: 0x002C7120 - 0x002C7133 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7120(void)
{

loc_002C7120: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x172));
    MEM16(eax + 0x170) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7140
 * Original: 0x002C7140 - 0x002C715B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7140(void)
{

loc_002C7140: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM16(eax + 0x428) = 0x2710;
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_002C7157: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002C7160
 * Original: 0x002C7160 - 0x002C7178 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7160(void)
{
    float xmm0;

loc_002C7160: ;
    eax = ZX8(MEM8(0x7FAADB));
    ecx = MEM32(esp + 4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x110) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002C7180
 * Original: 0x002C7180 - 0x002C71E2 (98 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7180(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C7180: ;
    xmm2 = MEMF(0x648E54); /* movss */
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADA));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(0x7FAAD8));
    SET_LO8(eax, MEM8(0x7FAADB));
    SET_LO8(edx, MEM8(0x7FAAD9));
    ecx = SX16(LO16(eax));
    eax = SX16(LO16(edx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 4);
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(ecx + 0x260) = xmm1; /* movss */
    MEMF(ecx + 0x264) = xmm0; /* movss */
    MEMF(ecx + 0x268) = xmm1; /* movss */
    MEMF(ecx + 0x26C) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_002F7480(); return; /* tail jmp 0x002F7480 */

}

/**
 * sub_002C7210
 * Original: 0x002C7210 - 0x002C7230 (32 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7210(void)
{

loc_002C7210: ;
    SET_LO16(edx, ZX8(MEM8(0x7FAADA)));
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM16(eax + 0x438) = MEM16(eax + 0x438) | LO16(edx);
    MEM8(eax + 0x3C0) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C72D0
 * Original: 0x002C72D0 - 0x002C72F3 (35 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C72D0(void)
{

loc_002C72D0: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(0x7FAADB));
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(0x7FAADA));
    eax = MEM32(esp + 4);
    MEM16(eax + 0x1D4) = LO16(ecx);
    MEM16(eax + 0x1D6) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7300
 * Original: 0x002C7300 - 0x002C7380 (128 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7300(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002C7300: ;
    SET_LO8(eax, MEM8(0x7FAAD8));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002C7380(); return; } /* jne: not equal / not zero */

loc_002C7309: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C7310: ;
    SET_LO8(ecx, MEM8(0x7FAADB));
    esi = ZX8(LO8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = MEM32(esp + 0xC);
    xmm0 = MEMF(0x648D20); /* movss */
    SET_LO8(ebx, MEM8(0x7FAADA));
    SET_LO8(ecx, LO8(ecx) >> 1);
    SET_LO16(eax, ZX8(LO8(ecx)));
    edx = edx - eax;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ecx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x78); /* addss */
    MEMF(esi + 0x78) = xmm1; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002C737D; /* je: equal / zero */

loc_002C734F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C7354: ;
    ecx = ZX8(LO8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ebx, LO8(ebx) >> 1);
    SET_LO16(eax, ZX8(LO8(ebx)));
    edx = edx - eax;
    ecx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x80); /* addss */
    MEMF(esi + 0x80) = xmm1; /* movss */

loc_002C737D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C73A0
 * Original: 0x002C73A0 - 0x002C73DB (59 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C73A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002C73A0: ;
    edx = MEM32(esp + 4);
    eax = ZX8(MEM8(edx + 0x42E));
    ecx = ZX8(MEM8(0x7FAAD9));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x84A5F8);
    /* comiss xmm0, MEMF(eax + ecx + 0x110) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + ecx + 0x110))) goto loc_002C73DA; /* jbe: below or equal (unsigned <=) */

loc_002C73CC: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAAD8));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C73D9: ;
    POP32(esp, esi);

loc_002C73DA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C73E0
 * Original: 0x002C73E0 - 0x002C73F1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C73E0(void)
{

loc_002C73E0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x21C) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7400
 * Original: 0x002C7400 - 0x002C742E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7400(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C7400: ;
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    if (TEST_Z(eax, eax)) goto loc_002C742D; /* je: equal / zero */

loc_002C7411: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002C742D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C7430
 * Original: 0x002C7430 - 0x002C7476 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7430(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C7430: ;
    SET_LO8(eax, MEM8(0x7FAAD8));
    esp = esp - 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002C7476(); return; } /* jne: not equal / not zero */

loc_002C743C: ;
    SET_LO8(edx, MEM8(0x7FAAD9));
    SET_LO8(eax, MEM8(0x7FAADA));
    SET_LO8(ecx, MEM8(0x7FAADB));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(edx), LO8(edx))) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esp) = LO8(eax);
    eax = MEM32(esp);
    MEM8(esp + 4) = LO8(edx);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_002F5D20(); /* call 0x002F5D20 */

loc_002C746F: ;
    esp = esp + 8;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002C74C0
 * Original: 0x002C74C0 - 0x002C74EF (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C74C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C74C0: ;
    eax = ZX8(MEM8(0x7FAADA));
    eax = eax - 0;
    if ((eax == 0)) goto loc_002C74DB; /* je: equal / zero */

loc_002C74CC: ;
    eax--;
    if ((eax != 0)) goto loc_002C74EE; /* jne: not equal / not zero */

loc_002C74CF: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0x3AE) = MEM16(eax + 0x3AE) - 1;
    esp += 4; return; /* ret */

loc_002C74DB: ;
    SET_LO16(eax, ZX8(MEM8(0x7FAADB)));
    ecx = MEM32(esp + 4);
    MEM16(ecx + 0x3AE) = LO16(eax);

loc_002C74EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C74F0
 * Original: 0x002C74F0 - 0x002C751E (46 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C74F0(void)
{

loc_002C74F0: ;
    eax = MEM32(esp + 4);
    eax = ZX16(MEM16(eax + 0x60));
    eax = eax << 4;
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax + 0x7707AC) = ecx;
    MEM32(eax + 0x7707B0) = ecx;
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x7707B6) = LO8(ecx);
    MEM8(eax + 0x7707B7) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_002C7520
 * Original: 0x002C7520 - 0x002C753D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7520(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C7520: ;
    SET_LO8(eax, MEM8(0x7FAADB));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x209));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002C753D(); return; } /* je: equal / zero */

loc_002C7533: ;
    SET_LO8(ecx, LO8(ecx) | 1);
    MEM8(eax + 0x209) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7550
 * Original: 0x002C7550 - 0x002C759D (77 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7550(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C7550: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FAAD8));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002C756C; /* je: equal / zero */

loc_002C755B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C7560: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ZX8(LO8(ebx));
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(0x7FAADB) = MEM8(0x7FAADB) + LO8(edx);

loc_002C756C: ;
    eax = MEM32(esp + 8);
    SET_LO8(edx, MEM8(0x7FAADB));
    SET_LO8(ecx, MEM8(0x7FAADA));
    MEM8(eax + 0x452) = LO8(edx);
    SET_LO8(edx, MEM8(0x7FAAD9));
    MEM8(eax + 0x455) = 0;
    MEM8(eax + 0x453) = LO8(ecx);
    MEM8(eax + 0x454) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C75A0
 * Original: 0x002C75A0 - 0x002C7601 (97 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C75A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C75A0: ;
    SET_LO8(eax, MEM8(0x7FAAD8));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002C7601(); return; } /* je: equal / zero */

loc_002C75A9: ;
    SET_LO16(edx, ZX8(MEM8(0x7FAAD9)));
    SET_LO16(eax, ZX8(MEM8(0x7FAADA)));
    ecx = MEM32(esp + 4);
    eax = eax << 8;
    eax = eax + edx;
    SET_LO8(edx, MEM8(ecx + 0x452));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x7FA20C));
    SET_LO8(edx, LO8(edx) & 0x1F);
    SET_LO16(edx, ZX8(LO8(edx)));
    edx = edx << 8;
    eax = eax + edx;
    SET_LO16(edx, ZX8(MEM8(ecx + 0x455)));
    eax = eax + edx;
    if (CMP_GE(LO16(eax) & LO16(eax), 0)) goto loc_002C75EC; /* jge: greater or equal (signed >=) */

loc_002C75EA: ;
    eax = 0; /* xor self */

loc_002C75EC: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 8);
    SET_LO8(edx, LO8(edx) | 0x80);
    MEM8(ecx + 0x452) = LO8(edx);
    MEM8(ecx + 0x455) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7620
 * Original: 0x002C7620 - 0x002C765A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7620(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C7620: ;
    edx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(edx + 0x414));
    if (CMP_EQ(MEM16(edx + 0x410), LO16(eax))) goto loc_002C763A; /* je: equal / zero */

loc_002C7634: ;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_002C7659; /* jne: not equal / not zero */

loc_002C763A: ;
    eax = MEM32(edx + 0x468);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    eax = eax | 0x800;
    MEM32(edx + 0x468) = eax;
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C7658: ;
    POP32(esp, esi);

loc_002C7659: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C7660
 * Original: 0x002C7660 - 0x002C76AA (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7660(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C7660: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FAADB));
    (void)0; /* cmp LO8(ebx), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    SET_LO16(eax, MEM16(esi + 0x414));
    PUSH32(esp, edi);
    edi = esi + 0x414;
    MEM16(esi + 0x410) = LO16(eax);
    if (CMP_EQ(LO8(ebx), 1)) { sub_002C76AA(); return; } /* je: equal / zero */

loc_002C7689: ;
    eax = MEM32(esi + 0x468);
    eax = eax | 0x800;
    POP32(esp, edi);
    MEM16(esi + 0x41E) = 0;
    MEM32(esi + 0x468) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002C7910
 * Original: 0x002C7910 - 0x002C7962 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7910(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C7910: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x253));
    edx = MEM32(0x84A1A8);
    SET_LO8(edx, MEM8(eax + edx));
    SET_LO8(eax, MEM8(ecx + 0x42B));
    SET_LO8(edx, LO8(edx) - 1);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C7932; /* je: equal / zero */

loc_002C7930: ;
    SET_LO8(edx, LO8(eax));

loc_002C7932: ;
    SET_LO8(eax, MEM8(ecx + 0x42D));
    SET_LO8(eax, LO8(eax) + MEM8(ecx + 0x42A));
    SET_LO8(eax, LO8(eax) + LO8(edx));
    eax = ZX8(LO8(eax));
    PUSH32(esp, esi);
    esi = ZX8(LO8(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    SET_LO8(eax, MEM8(ecx + 0x42C));
    POP32(esp, esi);
    (void)0; /* cmp LO8(eax), LO8(edx) - flags set for next jcc */
    MEM8(ecx + 0x42A) = LO8(edx);
    if (CMP_BE(LO8(eax), LO8(edx))) goto loc_002C7961; /* jbe: below or equal (unsigned <=) */

loc_002C795B: ;
    MEM8(ecx + 0x42A) = LO8(eax);

loc_002C7961: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C7970
 * Original: 0x002C7970 - 0x002C7987 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7970(void)
{

loc_002C7970: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6190(); /* call 0x002C6190 */

loc_002C797B: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 0xB;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7990
 * Original: 0x002C7990 - 0x002C7A16 (134 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7990(void)
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

loc_002C7990: ;
    SET_LO8(ecx, MEM8(0x7FAAD9));
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C79A7; /* je: equal / zero */

loc_002C79A0: ;
    eax = ZX8(MEM8(edx + 0x42E));

loc_002C79A7: ;
    ecx = ZX16(MEM16(edx + 0x60));
    if (CMP_EQ(eax, ecx)) goto loc_002C7A15; /* je: equal / zero */

loc_002C79AF: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_002C79CD; /* jne: not equal / not zero */

loc_002C79C3: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002C7A15; /* jne: not equal / not zero */

loc_002C79CD: ;
    fp_push(MEMF(edx + 0x78)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(edx + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = ZX8(MEM8(0x7FAAD8));
    eax = eax << 3;
    MEM32(esp + 4) = eax;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002C7A15; /* jbe: below or equal (unsigned <=) */

loc_002C7A07: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C7A14: ;
    POP32(esp, esi);

loc_002C7A15: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002C7A20
 * Original: 0x002C7A20 - 0x002C7AFC (220 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7A20(void)
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

loc_002C7A20: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    if (CMP_EQ(MEM16(edx + 0x60), 0)) goto loc_002C7AFA; /* je: equal / zero */

loc_002C7A30: ;
    eax = MEM32(0x84A5F8);
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_002C7A49; /* jne: not equal / not zero */

loc_002C7A3B: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002C7AFA; /* jne: not equal / not zero */

loc_002C7A49: ;
    SET_LO8(ecx, MEM8(0x7FAAD8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C7A8A; /* je: equal / zero */

loc_002C7A53: ;
    fp_push(MEMF(edx + 0x78)); /* fld float */
    ecx = ZX8(LO8(ecx));
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx << 3;
    fp_push(MEMF(edx + 0x80)); /* fld float */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 8))) goto loc_002C7AFA; /* jbe: below or equal (unsigned <=) */

loc_002C7A8A: ;
    ecx = ZX8(MEM8(0x7FAADA));
    xmm0 = MEMF(eax + 0x7C); /* movss */
    SET_LO8(eax, MEM8(0x7FAAD9));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = xmm0 - MEMF(edx + 0x7C); /* subss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, esi);
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C7AD4; /* jne: not equal / not zero */

loc_002C7AB5: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp < 0) /* fcompi */) goto loc_002C7AF9; /* jb: below (unsigned <) */

loc_002C7AC5: ;
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C7AD1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C7AD4: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_002C7AE4; /* jne: not equal / not zero */

loc_002C7AD8: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - xmm1; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    goto loc_002C7AEB;

loc_002C7AE4: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_002C7AF9; /* jne: not equal / not zero */

loc_002C7AE8: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */

loc_002C7AEB: ;
    if ((xmm1 <= xmm0)) goto loc_002C7AF9; /* jbe: below or equal (unsigned <=) */

loc_002C7AED: ;
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C7AF9: ;
    POP32(esp, esi);

loc_002C7AFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002C7B00
 * Original: 0x002C7B00 - 0x002C7B11 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7B00(void)
{

loc_002C7B00: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x444) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7B20
 * Original: 0x002C7B20 - 0x002C7B51 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7B20(void)
{

loc_002C7B20: ;
    SET_LO8(eax, MEM8(0x7FAADB));
    SET_LO8(ecx, MEM8(0x7FAADA));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(esi + 0x463) = LO8(eax);
    MEM8(esi + 0x462) = LO8(ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C7B41: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xFF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esi + 0x17E) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7B60
 * Original: 0x002C7B60 - 0x002C7B7D (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7B60(void)
{

loc_002C7B60: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    SET_LO8(edx, MEM8(0x7FAADA));
    MEM8(eax + 0x457) = LO8(ecx);
    MEM8(eax + 0x458) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7B80
 * Original: 0x002C7B80 - 0x002C7BCF (79 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7B80(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C7B80: ;
    ecx = ZX8(MEM8(0x7FAADB));
    eax = ZX8(MEM8(0x7FAADA));
    ecx = ecx << 8;
    ecx = ecx + eax;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C7BCE; /* jne: not equal / not zero */

loc_002C7B9C: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x48)) goto loc_002C7BCE; /* je: equal / zero */

loc_002C7BA5: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x564);
    if (TEST_NZ(edx, edx)) { sub_002C7BCF(); return; } /* jne: not equal / not zero */

loc_002C7BB3: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002C7BCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C7C00
 * Original: 0x002C7C00 - 0x002C7C29 (41 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7C00(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C7C00: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADA));
    PUSH32(esp, 0); sub_002F2E60(); /* call 0x002F2E60 */

loc_002C7C0D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_002C7C28; /* je: equal / zero */

loc_002C7C12: ;
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM32(eax + 0x420) = 0;
    MEM8(eax + 0x43D) = LO8(ecx);

loc_002C7C28: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C7C30
 * Original: 0x002C7C30 - 0x002C7C58 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7C30(void)
{

loc_002C7C30: ;
    ecx = ZX8(MEM8(0x7FAADB));
    edx = ZX8(MEM8(0x7FAADA));
    eax = MEM32(esp + 4);
    ecx = ecx << 8;
    ecx = ecx + edx;
    edx = MEM32(eax + 0x468);
    ecx = ~ecx;
    edx = edx & ecx;
    MEM32(eax + 0x468) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002C7C60
 * Original: 0x002C7C60 - 0x002C7C71 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7C60(void)
{

loc_002C7C60: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x448) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7C80
 * Original: 0x002C7C80 - 0x002C7C91 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7C80(void)
{

loc_002C7C80: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x44E) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7CA0
 * Original: 0x002C7CA0 - 0x002C7DAA (266 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7CA0(void)
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

loc_002C7CA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84A5F8);
    xmm0 = MEMF(0x64947C); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FAAD9));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5FC);
    edx = 0; /* xor self */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(esi + 0x42E) = 0;
    eax = eax + 0x234;

loc_002C7CD5: ;
    if (CMP_EQ(MEM8(edi + edx), 0)) goto loc_002C7D93; /* je: equal / zero */

loc_002C7CDF: ;
    if (CMP_EQ(MEM16(eax + 0x17A), 0)) goto loc_002C7D93; /* je: equal / zero */

loc_002C7CED: ;
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C7CFC; /* je: equal / zero */

loc_002C7CF3: ;
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_002C7D93; /* jne: not equal / not zero */

loc_002C7CFC: ;
    SET_LO8(ecx, MEM8(eax + -255));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C7D0E; /* je: equal / zero */

loc_002C7D06: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002C7D93; /* je: equal / zero */

loc_002C7D0E: ;
    ecx = ZX8(MEM8(0x7FAADB));
    if (CMP_EQ(MEM32(eax + -460), ecx)) goto loc_002C7D33; /* je: equal / zero */

loc_002C7D1D: ;
    ecx = ZX8(MEM8(0x7FAADA));
    if (CMP_NE(MEM32(eax + -464), ecx)) goto loc_002C7D93; /* jne: not equal / not zero */

loc_002C7D2C: ;
    SET_LO8(ecx, MEM8(eax + -40));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002C7D93; /* jne: not equal / not zero */

loc_002C7D33: ;
    SET_LO8(ecx, MEM8(0x7FAAD8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002C7DAA(); return; } /* je: equal / zero */

loc_002C7D3D: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(esi + 0x7C)); /* fld float */
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
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_002C7D93; /* jbe: below or equal (unsigned <=) */

loc_002C7D81: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM8(esi + 0x42E) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_002C7D93: ;
    edx++;
    eax = eax + 0x6D0;
    if (CMP_L(edx, 0x80)) goto loc_002C7CD5; /* jl: less (signed <) */

loc_002C7DA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_002C7DC0
 * Original: 0x002C7DC0 - 0x002C7DD1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7DC0(void)
{

loc_002C7DC0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x42A) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7DE0
 * Original: 0x002C7DE0 - 0x002C7E52 (114 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7DE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002C7DE0: ;
    SET_LO8(eax, MEM8(0x7FAADB));
    (void)0; /* cmp LO8(eax), 0xFA - flags set for next jcc */
    edx = MEM32(esp + 4);
    if (CMP_EQ(LO8(eax), 0xFA)) goto loc_002C7DF3; /* je: equal / zero */

loc_002C7DED: ;
    MEM8(edx + 0x42A) = LO8(eax);

loc_002C7DF3: ;
    eax = ZX8(MEM8(edx + 0x253));
    ecx = ZX8(MEM8(edx + 0x42A));
    PUSH32(esp, esi);
    esi = MEM32(0x84A1A0);
    eax = eax << 2;
    esi = MEM32(eax + esi);
    ecx = ecx << 3;
    esi = (uint32_t)(int32_t)SMEM16(esi + ecx + 8);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(edx + 0x78) = xmm0; /* movss */
    esi = MEM32(0x84A1A0);
    esi = MEM32(eax + esi);
    esi = (uint32_t)(int32_t)SMEM16(esi + ecx + 0xA);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(edx + 0x7C) = xmm0; /* movss */
    esi = MEM32(0x84A1A0);
    eax = MEM32(eax + esi);
    ecx = (uint32_t)(int32_t)SMEM16(eax + ecx + 0xC);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + 0x80) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7E60
 * Original: 0x002C7E60 - 0x002C7E84 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7E60(void)
{

loc_002C7E60: ;
    ecx = ZX8(MEM8(0x7FAADB));
    edx = ZX8(MEM8(0x7FAADA));
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    ecx = ecx << 8;
    PUSH32(esp, eax);
    ecx = ecx + edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0001AF70(); /* call 0x0001AF70 */

loc_002C7E80: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002C7E90
 * Original: 0x002C7E90 - 0x002C7EA1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7E90(void)
{

loc_002C7E90: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x45F) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7EB0
 * Original: 0x002C7EB0 - 0x002C7EC9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7EB0(void)
{

loc_002C7EB0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    MEM16(ecx + 0x3F2) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7ED0
 * Original: 0x002C7ED0 - 0x002C7EED (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7ED0(void)
{

loc_002C7ED0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    SET_LO8(edx, MEM8(0x7FAADA));
    MEM8(eax + 0x45A) = LO8(ecx);
    MEM8(eax + 0x45B) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C7EF0
 * Original: 0x002C7EF0 - 0x002C7F5E (110 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C7EF0: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x84A1A0);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FAADB));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = ZX8(MEM8(esi + 0x253));
    ecx = ZX8(MEM8(esi + 0x42A));
    eax = MEM32(edx + eax * 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + ecx * 8 + 0xC);
    xmm1 = MEMF(esi + 0x80); /* movss */
    eax = eax + ecx * 8;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    SET_LO8(ebx, LO8(ebx) - 1);
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(esi + 0x78); /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(esp + 8) = LO8(ebx);
    MEMF(esp + 0x10) = xmm1; /* movss */
    if (1 /* jp after test - parity */) { sub_002C7F5E(); return; } /* jp: parity */

loc_002C7F51: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002C7F5E(); return; } /* jp: parity */

loc_002C7F5A: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002C7F8A(); return; /* tail jmp 0x002C7F8A */

}

/**
 * sub_002C7FF0
 * Original: 0x002C7FF0 - 0x002C8068 (120 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C7FF0(void)
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

loc_002C7FF0: ;
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(0x7FAAD8));
    ecx = MEM32(0x84A5F8);
    edx = MEM32(esp + 8);
    eax = eax << 3;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5FC);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0; /* movss */
    ecx = ecx + 0x80;
    /* nop */

loc_002C8020: ;
    if (CMP_EQ(MEM8(esi + eax), 0)) goto loc_002C8056; /* je: equal / zero */

loc_002C8026: ;
    edi = ZX16(MEM16(edx + 0x60));
    if (CMP_EQ(eax, edi)) goto loc_002C8056; /* je: equal / zero */

loc_002C802E: ;
    fp_push(MEMF(edx + 0x78)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(edx + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) { sub_002C8068(); return; } /* ja: above (unsigned >) */

loc_002C8056: ;
    eax++;
    ecx = ecx + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_002C8020; /* jl: less (signed <) */

loc_002C8064: ;
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
 * sub_002C8080
 * Original: 0x002C8080 - 0x002C80AE (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8080(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C8080: ;
    edx = MEM32(esp + 4);
    eax = ZX8(MEM8(edx + 0x42E));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx + 0x64);
    if (TEST_NZ(esi, esi)) goto loc_002C80AC; /* jne: not equal / not zero */

loc_002C80A0: ;
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C80AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C80B0
 * Original: 0x002C80B0 - 0x002C80E5 (53 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C80B0(void)
{

loc_002C80B0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADA));
    SET_LO8(edx, MEM8(0x7FAAD9));
    MEM8(eax + 0x44A) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x44B) = LO8(edx);
    SET_LO8(edx, MEM8(0x7FAAD8));
    MEM8(eax + 0x44C) = LO8(ecx);
    MEM8(eax + 0x44D) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C80F0
 * Original: 0x002C80F0 - 0x002C817D (141 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C80F0(void)
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

loc_002C80F0: ;
    edx = MEM32(esp + 4);
    eax = ZX8(MEM8(0x7FAADA));
    ecx = ZX8(MEM8(edx + 0x253));
    PUSH32(esp, esi);
    esi = MEM32(0x84A1A0);
    ecx = MEM32(esi + ecx * 4);
    eax++;
    eax = ecx + eax * 8;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp + 8) = ecx;
    ecx = ZX8(MEM8(0x7FAAD8));
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(0x7FAAD9));
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx << 3;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C8164; /* jne: not equal / not zero */

loc_002C815B: ;
    /* comiss xmm0, MEMF(esp + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 8))) goto loc_002C816F; /* ja: above (unsigned >) */

loc_002C8162: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C8164: ;
    xmm1 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002C817B; /* jbe: below or equal (unsigned <=) */

loc_002C816F: ;
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C817B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002C8180
 * Original: 0x002C8180 - 0x002C8191 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8180(void)
{

loc_002C8180: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x449) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C81A0
 * Original: 0x002C81A0 - 0x002C81E1 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C81A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C81A0: ;
    SET_LO8(eax, MEM8(0x7FAAD9));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C81BC; /* jne: not equal / not zero */

loc_002C81A9: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(edx + 0x10B));
    if (CMP_EQ(LO8(eax), MEM8(0x7FAADA))) goto loc_002C81D2; /* je: equal / zero */

loc_002C81BB: ;
    esp += 4; return; /* ret */

loc_002C81BC: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_002C81E0; /* jne: not equal / not zero */

loc_002C81C0: ;
    edx = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(edx + 0x10B));
    if (CMP_EQ(LO8(ecx), MEM8(0x7FAADA))) goto loc_002C81E0; /* je: equal / zero */

loc_002C81D2: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C81DF: ;
    POP32(esp, esi);

loc_002C81E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C81F0
 * Original: 0x002C81F0 - 0x002C8205 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C81F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C81F0: ;
    SET_LO8(edx, MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_002C81FB: ;
    if (TEST_Z(eax, eax)) { sub_002C8205(); return; } /* je: equal / zero */

loc_002C81FF: ;
    eax = ZX16(MEM16(eax + 0x60));
    g_seh_ebp = ebp; sub_002C8208(); return; /* tail jmp 0x002C8208 */

}

/**
 * sub_002C8220
 * Original: 0x002C8220 - 0x002C8269 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8220(void)
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

loc_002C8220: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x7FAAD9));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(esp + 8);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002C8269(); return; } /* jne: not equal / not zero */

loc_002C822E: ;
    eax = ZX8(MEM8(edx + 0x42E));
    fp_push(MEMF(edx + 0x78)); /* fld float */
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(edx + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    eax = eax + ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(2) */
    /* fstp st(0) */
    g_seh_ebp = ebp; sub_002C82CC(); return; /* tail jmp 0x002C82CC */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002C8320
 * Original: 0x002C8320 - 0x002C8333 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8320(void)
{

loc_002C8320: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C8331: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C8340
 * Original: 0x002C8340 - 0x002C83EF (175 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C8340: ;
    esp = esp - 8;
    SET_LO8(eax, MEM8(0x7FAADB));
    edx = MEM32(0x84A5F8);
    ecx = ZX8(LO8(eax));
    SET_LO8(eax, LO8(eax) & 0x3F);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(0x7FAADA);
    MEM8(0x7FAADB) = LO8(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(esi + 0x42E));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm0 = MEMF(eax + edx + 0x7C); /* movss */
    xmm5 = MEMF(eax + edx + 0x78); /* movss */
    xmm6 = MEMF(eax + edx + 0x80); /* movss */
    eax = eax + edx;
    eax = ZX8(MEM8(0x7FAAD8));
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 4;
    ebx = ebx << 4;
    edi = edi | ebx;
    edi = edi << 3;
    xmm3 = (float)(int32_t)edi; /* cvtsi2ss */
    edi = (uint32_t)(int32_t)SMEM8(0x7FAAD9);
    edi = edi << 4;
    eax = eax & 0xF;
    edi = edi | eax;
    ecx = ecx >> 6;
    edi = edi << 3;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm4 = (float)(int32_t)edi; /* cvtsi2ss */
    if (TEST_NZ(ecx, ecx)) { sub_002C83EF(); return; } /* jne: not equal / not zero */

loc_002C83C5: ;
    ecx = ZX8(MEM8(esi + 0x42E));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    SET_LO8(ebx, MEM8(ecx + edx + 0x175));
    SET_LO8(ebx, LO8(ebx) - 0x40);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_002C83E3: ;
    SET_LO8(eax, LO8(ebx));
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_002AF850(); /* call 0x002AF850 */

loc_002C83ED: ;
    g_seh_ebp = ebp; sub_002C8452(); return; /* tail jmp 0x002C8452 */

}

/**
 * sub_002C84E0
 * Original: 0x002C84E0 - 0x002C8547 (103 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C84E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002C84E0: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = ZX8(MEM8(edi + 0x42E));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + ecx + 0x3C4);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036EF0(); /* call 0x00036EF0 */

loc_002C8506: ;
    SET_LO8(eax, MEM8(0x7FAAD9));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C8521; /* jne: not equal / not zero */

loc_002C850F: ;
    edx = ZX8(MEM8(0x7FAADA));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_002C8535; /* ja: above (unsigned >) */

loc_002C851F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002C8521: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_002C8545; /* jne: not equal / not zero */

loc_002C8525: ;
    eax = ZX8(MEM8(0x7FAADA));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_002C8545; /* jbe: below or equal (unsigned <=) */

loc_002C8535: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    edx = edi;
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C8544: ;
    POP32(esp, esi);

loc_002C8545: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C8550
 * Original: 0x002C8550 - 0x002C8561 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8550(void)
{

loc_002C8550: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x45C) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C8570
 * Original: 0x002C8570 - 0x002C85B1 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8570(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C8570: ;
    SET_LO8(eax, MEM8(0x7FAAD9));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C858C; /* jne: not equal / not zero */

loc_002C8579: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(edx + 0x45C));
    if (CMP_EQ(LO8(eax), MEM8(0x7FAADA))) goto loc_002C85A2; /* je: equal / zero */

loc_002C858B: ;
    esp += 4; return; /* ret */

loc_002C858C: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_002C85B0; /* jne: not equal / not zero */

loc_002C8590: ;
    edx = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(edx + 0x45C));
    if (CMP_EQ(LO8(ecx), MEM8(0x7FAADA))) goto loc_002C85B0; /* je: equal / zero */

loc_002C85A2: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C85AF: ;
    POP32(esp, esi);

loc_002C85B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C85C0
 * Original: 0x002C85C0 - 0x002C864E (142 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C85C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C85C0: ;
    SET_LO8(eax, MEM8(0x7FAAD8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C85E6; /* je: equal / zero */

loc_002C85CA: ;
    edx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(edx + 0x42E));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C864C; /* jne: not equal / not zero */

loc_002C85D8: ;
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C85E4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C85E6: ;
    SET_LO8(eax, MEM8(0x7FAAD9));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C8617; /* jne: not equal / not zero */

loc_002C85EF: ;
    edx = MEM32(esp + 8);
    eax = ZX8(MEM8(edx + 0x42E));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(eax, MEM8(eax + ecx + 0x45C));
    if (CMP_EQ(LO8(eax), MEM8(0x7FAADA))) goto loc_002C8640; /* je: equal / zero */

loc_002C8615: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C8617: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_002C864C; /* jne: not equal / not zero */

loc_002C861B: ;
    edx = MEM32(esp + 8);
    ecx = ZX8(MEM8(edx + 0x42E));
    eax = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    SET_LO8(ecx, MEM8(ecx + eax + 0x45C));
    if (CMP_EQ(LO8(ecx), MEM8(0x7FAADA))) goto loc_002C864C; /* je: equal / zero */

loc_002C8640: ;
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C864C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C8650
 * Original: 0x002C8650 - 0x002C86F3 (163 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8650(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002C8650: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi + 0x42E));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + ecx + 0x3C4);
    if (TEST_NZ(eax, eax)) goto loc_002C86C7; /* jne: not equal / not zero */

loc_002C8673: ;
    xmm2 = 0.0f; /* xorps self = zero */

loc_002C8676: ;
    xmm1 = xmm2; /* movaps */

loc_002C8679: ;
    eax = MEM32(esi + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_002C86F2; /* je: equal / zero */

loc_002C8684: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002C868E: ;
    if (TEST_Z(eax, eax)) goto loc_002C86F2; /* je: equal / zero */

loc_002C8692: ;
    /* comiss xmm2, MEMF(eax + 0xE8) - sets EFLAGS */
    edx = MEM32(eax + 0x10);
    MEMF(eax + 0xDC) = xmm1; /* movss */
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x1CC) = xmm0; /* movss */
    if ((xmm2 > MEMF(eax + 0xE8))) goto loc_002C86E2; /* ja: above (unsigned >) */

loc_002C86B6: ;
    xmm0 = xmm0 - MEMF(0x648D2C); /* subss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_002C86C7: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_002C86D1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    if (TEST_Z(eax, eax)) goto loc_002C8676; /* je: equal / zero */

loc_002C86D8: ;
    xmm1 = MEMF(eax + 0xDC); /* movss */
    goto loc_002C8679;

loc_002C86E2: ;
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */
    MEMF(eax + 0x1D0) = xmm0; /* movss */

loc_002C86F2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C8700
 * Original: 0x002C8700 - 0x002C89CC (716 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8700(void)
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

loc_002C8700: ;
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(0x7FAAD9));
    (void)0; /* cmp edx, 0x13 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_A(edx, 0x13)) goto loc_002C8960; /* ja: above (unsigned >) */

loc_002C8712: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x2C89EC)); return; /* indirect tail jmp */

    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = (int32_t)MEMF(eax + ecx + 0x110); /* cvttss2si */
    goto loc_002C894C;

    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(eax + edx + 0x52C);
    goto loc_002C894C;

    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(eax + ecx + 0x530);
    goto loc_002C894C;

    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(eax + edx + 0x534);
    goto loc_002C894C;

    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = (int32_t)MEMF(eax + ecx + 0x7C); /* cvttss2si */
    goto loc_002C894C;

    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = (int32_t)MEMF(eax + edx + 0x118); /* cvttss2si */
    goto loc_002C894C;

    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm0 = MEMF(eax + edx + 0x80); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x80); /* subss */
    esi = eax + edx;
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x78); /* subss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_002C87E9: ;
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002C8801: ;
    SET_LO8(edx, MEM8(esi + 0x175));
    SET_LO8(ecx, 0x40);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    ecx = ZX8(LO8(ecx));
    if (CMP_LE(ecx, 0x80)) goto loc_002C894C; /* jle: less or equal (signed <=) */

loc_002C881C: ;
    edx = 0x100;
    edx = edx - ecx;
    ecx = edx;
    goto loc_002C894C;

    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = ZX8(MEM8(eax + ecx + 0x250));
    goto loc_002C894C;

    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = ZX8(MEM8(eax + edx + 0x20C));
    goto loc_002C894C;

    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + edx + 0x568);
    ecx = 0; /* xor self */
    if (CMP_EQ(MEM16(eax + 8), LO16(ecx))) goto loc_002C894C; /* je: equal / zero */

loc_002C887B: ;
    SET_LO8(edx, MEM8(eax + 0x22));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002C894C; /* je: equal / zero */

loc_002C8886: ;
    ecx = 2;
    goto loc_002C894C;

    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = (int32_t)MEMF(eax + ecx + 0xDC); /* cvttss2si */
    goto loc_002C894C;

    edx = MEM32(0x84A5F8);
    eax = MEM32(edx + 0x568);
    ecx = MEM32(eax + 0xA0);
    goto loc_002C894C;

    ecx = MEM32(0x84A5F8);
    edx = MEM32(ecx + 0x568);
    ecx = ZX8(MEM8(edx + 0xB2));
    goto loc_002C894C;

    eax = MEM32(0x84A5F8);
    ecx = ZX8(MEM8(eax + 0x20A));
    goto loc_002C894C;

    ecx = ZX8(MEM8(0x7FA1FD));
    goto loc_002C894C;

    ecx = ZX8(MEM8(ecx + 0x42E));
    edx = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = MEM32(ecx + edx + 0x68);
    goto loc_002C894C;

    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = ZX16(MEM16(eax + ecx + 0x3AE));
    goto loc_002C894C;

    edx = ZX8(MEM8(ecx + 0x42E));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    ecx = ZX8(MEM8(edx + eax + 0x43D));
    goto loc_002C894C;

    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = ZX8(MEM8(eax + ecx + 0x180));

loc_002C894C: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C8965; /* jne: not equal / not zero */

loc_002C8955: ;
    edx = ZX8(MEM8(0x7FAAD8));
    if (CMP_EQ(ecx, edx)) goto loc_002C89C4; /* je: equal / zero */

loc_002C8960: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C8965: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_002C8979; /* jne: not equal / not zero */

loc_002C8969: ;
    eax = ZX8(MEM8(0x7FAAD8));
    if (CMP_NE(ecx, eax)) goto loc_002C89C4; /* jne: not equal / not zero */

loc_002C8974: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C8979: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_002C898D; /* jne: not equal / not zero */

loc_002C897D: ;
    edx = ZX8(MEM8(0x7FAAD8));
    if (CMP_L(ecx, edx)) goto loc_002C89C4; /* jl: less (signed <) */

loc_002C8988: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C898D: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_002C89A1; /* jne: not equal / not zero */

loc_002C8991: ;
    eax = ZX8(MEM8(0x7FAAD8));
    if (CMP_G(ecx, eax)) goto loc_002C89C4; /* jg: greater (signed >) */

loc_002C899C: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C89A1: ;
    if (CMP_NE(LO8(eax), 4)) goto loc_002C89B5; /* jne: not equal / not zero */

loc_002C89A5: ;
    edx = ZX8(MEM8(0x7FAAD8));
    if (CMP_LE(ecx, edx)) goto loc_002C89C4; /* jle: less or equal (signed <=) */

loc_002C89B0: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C89B5: ;
    if (CMP_NE(LO8(eax), 5)) goto loc_002C8960; /* jne: not equal / not zero */

loc_002C89B9: ;
    eax = ZX8(MEM8(0x7FAAD8));
    if (CMP_L(ecx, eax)) goto loc_002C8960; /* jl: less (signed <) */

loc_002C89C4: ;
    eax = 1;
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
 * sub_002C8A70
 * Original: 0x002C8A70 - 0x002C8AA3 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8A70(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C8A70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_002C8700(); /* call 0x002C8700 */

loc_002C8A7E: ;
    if (TEST_Z(eax, eax)) goto loc_002C8AA1; /* je: equal / zero */

loc_002C8A82: ;
    ecx = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_002C8A8F: ;
    esp = esp + 4;
    MEM32(esi + 0x424) = eax;
    eax = eax + 0xFFFFFFFBu;
    MEM32(esi + 0x420) = eax;

loc_002C8AA1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C8AB0
 * Original: 0x002C8AB0 - 0x002C8AD6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C8AB0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = ZX16(MEM16(edi + 0x60));
    ecx = edi;
    PUSH32(esp, 0); sub_002C8700(); /* call 0x002C8700 */

loc_002C8AC0: ;
    if (TEST_Z(eax, eax)) goto loc_002C8AD4; /* je: equal / zero */

loc_002C8AC4: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    edx = edi;
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C8AD3: ;
    POP32(esp, esi);

loc_002C8AD4: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C8AE0
 * Original: 0x002C8AE0 - 0x002C8B15 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8AE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C8AE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX16(MEM16(esi + 0x60));
    ecx = esi;
    PUSH32(esp, 0); sub_002C8700(); /* call 0x002C8700 */

loc_002C8AF0: ;
    if (TEST_Z(eax, eax)) goto loc_002C8B13; /* je: equal / zero */

loc_002C8AF4: ;
    ecx = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_002C8B01: ;
    esp = esp + 4;
    MEM32(esi + 0x424) = eax;
    eax = eax + 0xFFFFFFFBu;
    MEM32(esi + 0x420) = eax;

loc_002C8B13: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C8B20
 * Original: 0x002C8B20 - 0x002C8B81 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8B20(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C8B20: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADA));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FAAD8));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 1);
    PUSH32(esp, esi);
    SET_LO8(eax, MEM8(0x7FAAD9));
    esi = eax;
    SET_LO16(eax, ZX8(LO8(ecx)));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_002C8B4D; /* je: equal / zero */

loc_002C8B49: ;
    SET_LO16(eax, MEM16(edx + 0x60));

loc_002C8B4D: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    (void)0; /* test LO8(ebx), 2 - flags set for next jcc */
    ecx = (int32_t)MEMF(eax + 0x7C); /* cvttss2si */
    if (TEST_Z(LO8(ebx), 2)) goto loc_002C8B6D; /* je: equal / zero */

loc_002C8B68: ;
    ecx = (int32_t)MEMF(eax + 0x78); /* cvttss2si */

loc_002C8B6D: ;
    if (CMP_GE(LO16(ecx), LO16(esi))) goto loc_002C8B7E; /* jge: greater or equal (signed >=) */

loc_002C8B72: ;
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C8B7E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C8B90
 * Original: 0x002C8B90 - 0x002C8BAA (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8B90(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C8B90: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    if (CMP_BE(LO8(ecx), MEM8(eax + 0x511))) { sub_002C8BAA(); return; } /* jbe: below or equal (unsigned <=) */

loc_002C8BA2: ;
    MEM8(eax + 0x3A9) = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_002C8BC0
 * Original: 0x002C8BC0 - 0x002C8C17 (87 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C8BC0: ;
    ecx = MEM32(0x84B4A0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi + 0x45C));
    xmm0 = MEMF(esi + 0x78); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    edx = (uint32_t)(int32_t)SMEM16(eax + ecx + 4);
    eax = eax + ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax);
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - MEMF(esi + 0x80); /* subss */
    MEMF(esp + 8) = xmm1; /* movss */
    if (1 /* jp after test - parity */) { sub_002C8C17(); return; } /* jp: parity */

loc_002C8C0A: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002C8C17(); return; } /* jp: parity */

loc_002C8C13: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002C8C43(); return; /* tail jmp 0x002C8C43 */

}

/**
 * sub_002C8C90
 * Original: 0x002C8C90 - 0x002C8CA1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8C90(void)
{

loc_002C8C90: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x43D) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C8CB0
 * Original: 0x002C8CB0 - 0x002C8CD5 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8CB0(void)
{

loc_002C8CB0: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, ZX8(MEM8(0x7FAADB)));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x540));
    ecx = ecx & 0xFFF8;
    ecx = ecx | edx;
    MEM16(eax + 0x540) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C8CE0
 * Original: 0x002C8CE0 - 0x002C8D17 (55 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8CE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C8CE0: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x1B0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C8D16; /* je: equal / zero */

loc_002C8CEF: ;
    ecx = MEM32(0x84A5F8);
    eax = eax & 0x7F;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM32(eax + 0x420) = 0;
    MEM8(eax + 0x43D) = LO8(ecx);

loc_002C8D16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C8D20
 * Original: 0x002C8D20 - 0x002C8D45 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8D20(void)
{

loc_002C8D20: ;
    eax = ZX8(MEM8(0x7FAAD9));
    ecx = ZX8(MEM8(0x7FAADA));
    edx = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001C3380(); /* call 0x001C3380 */

loc_002C8D41: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002C8D50
 * Original: 0x002C8D50 - 0x002C8DDC (140 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8D50(void)
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

loc_002C8D50: ;
    eax = MEM32(0x84A5F8);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(eax + 0x78); /* cvttss2si */
    (void)0; /* cmp LO16(esi), 0xFB64 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = (int32_t)MEMF(eax + 0x80); /* cvttss2si */
    if (CMP_L(LO16(esi), 0xFB64)) goto loc_002C8D84; /* jl: less (signed <) */

loc_002C8D6F: ;
    if (CMP_G(LO16(esi), 0x49C)) goto loc_002C8D84; /* jg: greater (signed >) */

loc_002C8D76: ;
    if (CMP_L(LO16(edi), 0xFB64)) goto loc_002C8D84; /* jl: less (signed <) */

loc_002C8D7D: ;
    if (CMP_LE(LO16(edi), 0x49C)) goto loc_002C8D88; /* jle: less or equal (signed <=) */

loc_002C8D84: ;
    esi = 0; /* xor self */
    edi = 0; /* xor self */

loc_002C8D88: ;
    fp_push(MEMD(0x648F30)); /* fld double */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C8D9B: ;
    eax = ZX16(LO16(eax));
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002C8DC5: ;
    esi = esi + eax;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002C8DCC: ;
    edi = edi + eax;
    if (CMP_GE(LO16(esi), 0xFB50)) { sub_002C8DDC(); return; } /* jge: greater or equal (signed >=) */

loc_002C8DD5: ;
    esi = 0xFFFFFB50u;
    g_seh_ebp = ebp; sub_002C8DE8(); return; /* tail jmp 0x002C8DE8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002C8E50
 * Original: 0x002C8E50 - 0x002C8EF2 (162 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8E50(void)
{
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002C8E50: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x42E));
    fp_push(MEMF(eax + 0x78)); /* fld float */
    edx = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(eax + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    ecx = ecx + edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    xmm0 = MEMF(eax + 0x110); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(eax + 0x118) = xmm0; /* movss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    xmm0 = MEMF(eax + 0xD4); /* movss */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(eax + 0xD0) = xmm0; /* movss */
    xmm2 = MEMF(ecx + 0x7C); /* movss */
    xmm2 = xmm2 - MEMF(eax + 0x7C); /* subss */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(eax + 0xD0) = xmm2; /* movss */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002C8F00
 * Original: 0x002C8F00 - 0x002C8F41 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8F00(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C8F00: ;
    SET_LO8(edx, MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_002C8F0B: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_002C8F40; /* je: equal / zero */

loc_002C8F11: ;
    eax = ZX16(MEM16(eax + 0x60));
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002C8F40; /* je: equal / zero */

loc_002C8F1A: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    SET_LO8(edx, MEM8(0x7FAADA));
    MEM8(eax + 0x43D) = LO8(edx);
    MEM32(eax + 0x420) = ecx;
    MEM8(eax + 0x445) = LO8(ecx);

loc_002C8F40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C8F50
 * Original: 0x002C8F50 - 0x002C8F65 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C8F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C8F50: ;
    SET_LO8(edx, MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_002C8F5B: ;
    if (TEST_Z(eax, eax)) { sub_002C8F65(); return; } /* je: equal / zero */

loc_002C8F5F: ;
    eax = ZX16(MEM16(eax + 0x60));
    g_seh_ebp = ebp; sub_002C8F68(); return; /* tail jmp 0x002C8F68 */

}

/**
 * sub_002C9070
 * Original: 0x002C9070 - 0x002C909D (45 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C9070: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FAAD9);
    eax = MEM32(0x84A5F8);
    eax = (int32_t)MEMF(eax + 0x110); /* cvttss2si */
    eax = eax + ecx;
    ecx = ZX8(MEM8(0x7FAADA));
    if (CMP_GE(eax, ecx)) { sub_002C909D(); return; } /* jge: greater or equal (signed >=) */

loc_002C9091: ;
    eax = ecx;
    MEM8(0x7FAAD9) = LO8(eax);
    g_seh_ebp = ebp; sub_002C6100(); return; /* tail jmp 0x002C6100 */

}

/**
 * sub_002C9120
 * Original: 0x002C9120 - 0x002C9141 (33 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C9120: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(0x7FAADB));
    edx = ZX8(MEM8(eax + 0x141));
    if (CMP_EQ(ecx, edx)) { sub_002C9141(); return; } /* je: equal / zero */

loc_002C9136: ;
    MEM8(eax + 0x141) = LO8(ecx);
    g_seh_ebp = ebp; sub_002CF1C0(); return; /* tail jmp 0x002CF1C0 */

}

/**
 * sub_002C9150
 * Original: 0x002C9150 - 0x002C91C9 (121 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9150(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C9150: ;
    eax = ZX8(MEM8(0x7FAADA));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FAAD9));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    esi = esi << 8;
    esi = esi + eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002C917C; /* je: equal / zero */

loc_002C916F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C9174: ;
    ecx = ZX8(LO8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = esi + edx;

loc_002C917C: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002C91C6; /* jne: not equal / not zero */

loc_002C9185: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x48)) goto loc_002C91C6; /* je: equal / zero */

loc_002C918E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x564);
    if (TEST_NZ(ecx, ecx)) goto loc_002C91BA; /* jne: not equal / not zero */

loc_002C919C: ;
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002C91B7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002C91BA: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_002F4E60(); /* call 0x002F4E60 */

loc_002C91C3: ;
    esp = esp + 4;

loc_002C91C6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C91D0
 * Original: 0x002C91D0 - 0x002C91ED (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C91D0(void)
{

loc_002C91D0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    SET_LO8(edx, MEM8(0x7FAADA));
    MEM8(eax + 0x45D) = LO8(ecx);
    MEM8(eax + 0x45E) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C91F0
 * Original: 0x002C91F0 - 0x002C921B (43 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C91F0(void)
{

loc_002C91F0: ;
    SET_LO16(eax, ZX8(MEM8(0x7FAADB)));
    SET_LO16(ecx, ZX8(MEM8(0x7FAADA)));
    edx = MEM32(esp + 4);
    eax = eax << 8;
    eax = eax + ecx;
    ecx = ZX8(MEM8(edx + 0x253));
    edx = MEM32(0x84A1B4);
    MEM16(edx + ecx * 2) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9220
 * Original: 0x002C9220 - 0x002C9283 (99 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9220(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002C9220: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm1 = MEMF(eax + ecx + 0x80); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    eax = eax + ecx;
    ecx = ZX8(MEM8(edx + 0x253));
    edx = MEM32(0x84A1A0);
    ecx = MEM32(edx + ecx * 4);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(eax + 0x78); /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm1; /* movss */
    if (1 /* jp after test - parity */) { sub_002C9283(); return; } /* jp: parity */

loc_002C9271: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_002C9283(); return; } /* jp: parity */

loc_002C927A: ;
    eax = 0; /* xor self */
    eax = 0x4000;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C92C0
 * Original: 0x002C92C0 - 0x002C94C0 (512 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C92C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C92C0: ;
    SET_LO8(edx, MEM8(0x7FAADA));
    PUSH32(esp, esi);
    eax = ZX8(LO8(edx));
    esi = 0; /* xor self */
    eax = eax - esi;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if ((eax == 0)) goto loc_002C92F7; /* je: equal / zero */

loc_002C92D5: ;
    eax--;
    if ((eax == 0)) goto loc_002C92F7; /* je: equal / zero */

loc_002C92D8: ;
    SET_LO8(edx, LO8(edx) - 2);
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_002C92E0: ;
    if (TEST_Z(eax, eax)) goto loc_002C94BD; /* je: equal / zero */

loc_002C92E8: ;
    eax = ZX16(MEM16(eax + 0x60));
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002C94BD; /* je: equal / zero */

loc_002C92F5: ;
    goto loc_002C92FB;

loc_002C92F7: ;
    eax = ZX16(MEM16(edi + 0x60));

loc_002C92FB: ;
    ecx = ZX8(MEM8(0x7FAAD9));
    ecx--;
    if (CMP_A(ecx, 0xC)) goto loc_002C9322; /* ja: above (unsigned >) */

loc_002C9308: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x2C94C0); /* switch: 20 entries, 19 targets */
    if (_jt == 0x002C930Fu) goto loc_002C930F;
    if (_jt == 0x002C9322u) goto loc_002C9322;
    if (_jt == 0x002C9339u) goto loc_002C9339;
    if (_jt == 0x002C934Eu) goto loc_002C934E;
    if (_jt == 0x002C9363u) goto loc_002C9363;
    if (_jt == 0x002C93AEu) goto loc_002C93AE;
    if (_jt == 0x002C93D1u) goto loc_002C93D1;
    if (_jt == 0x002C93ECu) goto loc_002C93EC;
    if (_jt == 0x002C941Fu) goto loc_002C941F;
    if (_jt == 0x002C9437u) goto loc_002C9437;
    if (_jt == 0x002C944Cu) goto loc_002C944C;
    if (_jt == 0x002C945Au) goto loc_002C945A;
    if (_jt == 0x002C946Bu) goto loc_002C946B;
    if (_jt == 0x002C9477u) goto loc_002C9477;
    if (_jt == 0x002C947Fu) goto loc_002C947F;
    if (_jt == 0x002C948Du) goto loc_002C948D;
    if (_jt == 0x002C9495u) goto loc_002C9495;
    if (_jt == 0x002C94A4u) goto loc_002C94A4;
    if (_jt == 0x002C94B4u) goto loc_002C94B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002C930F: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = eax + ecx + 0x52C;

loc_002C9322: ;
    eax = ZX8(MEM8(0x7FAAD8));
    if (CMP_A(eax, 6)) goto loc_002C94BD; /* ja: above (unsigned >) */

loc_002C9332: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2C94F4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x002C946Bu) goto loc_002C946B;
    if (_jt == 0x002C9477u) goto loc_002C9477;
    if (_jt == 0x002C947Fu) goto loc_002C947F;
    if (_jt == 0x002C948Du) goto loc_002C948D;
    if (_jt == 0x002C9495u) goto loc_002C9495;
    if (_jt == 0x002C94A4u) goto loc_002C94A4;
    if (_jt == 0x002C94B4u) goto loc_002C94B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002C9339: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = eax + edx + 0x530;
    goto loc_002C9322;

loc_002C934E: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = eax + ecx + 0x534;
    goto loc_002C9322;

loc_002C9363: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + edx;
    esi = eax;
    SET_LO8(eax, MEM8(0x7FAADB));
    if (CMP_EQ(MEM8(esi + 0x43D), LO8(eax))) goto loc_002C94BD; /* je: equal / zero */

loc_002C9384: ;
    ecx = ZX8(LO8(eax));
    PUSH32(esp, esi);
    MEM8(esi + 0x43D) = LO8(eax);
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_002C9393: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(esi + 0x420) = eax;
    MEM32(esi + 0x424) = eax;
    MEM16(esi + 0x428) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C93AE: ;
    edx = ZX8(MEM8(0x7FAADB));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(0x84A5F8);
    POP32(esp, edi);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + ecx + 0x1D0) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C93D1: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEMF(eax + edx + 0x1C0) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C93EC: ;
    eax = ZX8(MEM8(edi + 0x42E));
    edx = edi;
    PUSH32(esp, 0); sub_002C9220(); /* call 0x002C9220 */

loc_002C93FA: ;
    edx = edi;
    esi = eax;
    eax = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, 0); sub_002C9220(); /* call 0x002C9220 */

loc_002C9407: ;
    eax = eax - esi;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_002C94BD; /* jns: not sign (positive) */

loc_002C9411: ;
    SET_LO8(eax, MEM8(0x7FAADB));
    MEM8(edi + 0x42D) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C941F: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(0x7FAAD8));
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM16(edi + 0x450) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C9437: ;
    SET_LO8(edx, MEM8(edi + 0x448));
    SET_LO8(edx, LO8(edx) + MEM8(0x7FAADB));
    MEM8(edi + 0x441) = LO8(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C944C: ;
    SET_LO8(eax, MEM8(0x7FAADB));
    MEM8(edi + 0x436) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C945A: ;
    SET_LO16(ecx, MEM16(edi + 0xA4));
    MEM16(edi + 0x450) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C946B: ;
    edx = ZX8(MEM8(0x7FAADB));
    POP32(esp, edi);
    MEM32(esi) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C9477: ;
    eax = MEM32(esi);
    eax--;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C947F: ;
    ecx = MEM32(esi);
    eax = MEM32(0x7FA20C);
    ecx = ecx + eax;
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C948D: ;
    eax = MEM32(esi);
    eax++;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C9495: ;
    eax = MEM32(esi);
    ecx = MEM32(0x7FA20C);
    eax = eax - ecx;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C94A4: ;
    edx = (uint32_t)(int32_t)SMEM16(0x7FDD28);
    eax = MEM32(esi);
    eax = eax - edx;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C94B4: ;
    eax = (uint32_t)(int32_t)SMEM16(0x7FDD28);
    MEM32(esi) = MEM32(esi) + eax;

loc_002C94BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9530
 * Original: 0x002C9530 - 0x002C9541 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9530(void)
{

loc_002C9530: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x446) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9550
 * Original: 0x002C9550 - 0x002C9582 (50 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9550(void)
{

loc_002C9550: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(0x7FAAD9));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x437) = LO8(edx);
    SET_LO8(ecx, MEM8(0x7FAADA));
    MEM16(eax + 0x430) = LO16(ecx);
    SET_LO8(ecx, MEM8(0x7FAAD8));
    MEM8(eax + 0x432) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9590
 * Original: 0x002C9590 - 0x002C962E (158 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9590(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002C9590: ;
    eax = MEM32(0x84A5F8);
    SET_LO8(ecx, MEM8(eax + 0x135));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002C962E(); return; } /* je: equal / zero */

loc_002C95A4: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    /* comiss xmm0, MEMF(eax + 0x118) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0x118))) { sub_002C962E(); return; } /* ja: above (unsigned >) */

loc_002C95B5: ;
    ecx = MEM32(eax + 0x568);
    SET_LO16(edx, MEM16(ecx + 0x64));
    esi = MEM32(esp + 8);
    MEM16(esi + 0x172) = LO16(edx);
    ecx = MEM32(eax + 0x568);
    SET_LO8(edx, MEM8(ecx + 0x62));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002C95E1; /* je: equal / zero */

loc_002C95D7: ;
    eax = (int32_t)MEMF(eax + 0x118); /* cvttss2si */
    goto loc_002C95F5;

loc_002C95E1: ;
    xmm0 = MEMF(eax + 0x118); /* movss */
    xmm0 = xmm0 * MEMF(0x648D40); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */

loc_002C95F5: ;
    if (CMP_GE(LO16(eax), 0x11)) goto loc_002C9608; /* jge: greater or equal (signed >=) */

loc_002C95FB: ;
    MEM8(0x7FAAD8) = MEM8(0x7FAAD8) + 1;
    MEM8(0x7FAADB) = 8;

loc_002C9608: ;
    PUSH32(esp, esi);
    MEM8(0x7FAAD9) = LO8(eax);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002C9613: ;
    eax = MEM32(esi + 0x1FC);
    esp = esp + 4;
    eax = eax | 0x40;
    MEM8(esi + 0x42F) = 3;
    MEM32(esi + 0x1FC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9660
 * Original: 0x002C9660 - 0x002C969A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9660(void)
{

loc_002C9660: ;
    edx = ZX8(MEM8(0x7FAADA));
    ecx = ZX8(MEM8(0x7FAADB));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAAD9));
    ecx = edx + ecx * 4 + 4;
    edx = MEM32(esp + 4);
    edx = ZX8(MEM8(edx + 0x253));
    PUSH32(esp, esi);
    SET_LO8(eax, MEM8(0x7FAAD8));
    esi = MEM32(0x84A1A0);
    edx = MEM32(esi + edx * 4);
    POP32(esp, esi);
    MEM16(edx + ecx * 2) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_002C96A0
 * Original: 0x002C96A0 - 0x002C96FC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C96A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002C96A0: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x7FAAD9);
    eax = MEM32(0x84A5F8);
    eax = (int32_t)MEMF(eax + 0x110); /* cvttss2si */
    eax = eax + ecx;
    ecx = ZX8(MEM8(0x7FAADA));
    if (CMP_L(eax, ecx)) goto loc_002C96CC; /* jl: less (signed <) */

loc_002C96C1: ;
    ecx = ZX8(MEM8(0x7FAADB));
    if (CMP_LE(eax, ecx)) goto loc_002C96CE; /* jle: less or equal (signed <=) */

loc_002C96CC: ;
    eax = ecx;

loc_002C96CE: ;
    ecx = MEM32(esp + 4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(ecx + 0x118) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_002C96FB; /* jp: parity */

loc_002C96EB: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(ecx + 0x118) = xmm0; /* movss */

loc_002C96FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C9700
 * Original: 0x002C9700 - 0x002C972B (43 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9700(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C9700: ;
    SET_LO16(ecx, ZX8(MEM8(0x7FAADB)));
    eax = MEM32(esp + 4);
    MEM8(eax + 0x42F) = 0;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    MEM16(eax + 0x438) = MEM16(eax + 0x438) & 0xFD;
    MEM16(eax + 0x428) = LO16(ecx);
    g_seh_ebp = ebp; sub_002C60A0(); return; /* tail jmp 0x002C60A0 */

}

/**
 * sub_002C9790
 * Original: 0x002C9790 - 0x002C9895 (261 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C9790: ;
    esp = esp - 0x88;
    eax = MEM32(0x84A5FC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    edi = eax + 1;
    edx = eax;
    ebx = ebx - edi;
    ebx = ebx + 2;
    eax = eax - edi;
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    ebp = ebp + 0x738;
    edx = edx - edi;
    eax = eax + 3;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_002C97D0: ;
    eax = edi + ecx;
    if (CMP_EQ(MEM8(edx + eax), 0)) goto loc_002C97ED; /* je: equal / zero */

loc_002C97D9: ;
    ebx = ZX8(MEM8(0x7FAADB));
    if (CMP_NE(MEM32(ebp + -1744), ebx)) goto loc_002C97ED; /* jne: not equal / not zero */

loc_002C97E8: ;
    MEM8(esp + esi + 0x18) = LO8(ecx);
    esi++;

loc_002C97ED: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_002C9807; /* je: equal / zero */

loc_002C97F2: ;
    ebx = ZX8(MEM8(0x7FAADB));
    if (CMP_NE(MEM32(ebp), ebx)) goto loc_002C9807; /* jne: not equal / not zero */

loc_002C97FE: ;
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) + 1);
    MEM8(esp + esi + 0x18) = LO8(ebx);
    esi++;

loc_002C9807: ;
    ebx = MEM32(esp + 0x14);
    if (CMP_EQ(MEM8(ebx + eax), 0)) goto loc_002C982A; /* je: equal / zero */

loc_002C9811: ;
    ebx = ZX8(MEM8(0x7FAADB));
    if (CMP_NE(MEM32(ebp + 0x6D0), ebx)) goto loc_002C982A; /* jne: not equal / not zero */

loc_002C9820: ;
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) + 2);
    MEM8(esp + esi + 0x18) = LO8(ebx);
    esi++;

loc_002C982A: ;
    ebx = MEM32(esp + 0x10);
    if (CMP_EQ(MEM8(ebx + eax), 0)) goto loc_002C984C; /* je: equal / zero */

loc_002C9834: ;
    eax = ZX8(MEM8(0x7FAADB));
    if (CMP_NE(MEM32(ebp + 0xDA0), eax)) goto loc_002C984C; /* jne: not equal / not zero */

loc_002C9843: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) + 3);
    MEM8(esp + esi + 0x18) = LO8(eax);
    esi++;

loc_002C984C: ;
    ecx = ecx + 4;
    ebp = ebp + 0x1B40;
    if (CMP_L(ecx, 0x80)) goto loc_002C97D0; /* jl: less (signed <) */

loc_002C9861: ;
    if (TEST_Z(esi, esi)) goto loc_002C988A; /* je: equal / zero */

loc_002C9865: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C986A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = MEM32(esp + 0x9C);
    SET_LO8(ecx, MEM8(eax + 0x42E));
    MEM8(eax + 0x1B0) = LO8(ecx);
    SET_LO8(edx, MEM8(esp + edx + 0x18));
    MEM8(eax + 0x42E) = LO8(edx);

loc_002C988A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_002C98A0
 * Original: 0x002C98A0 - 0x002C98B1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C98A0(void)
{

loc_002C98A0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x1B0));
    MEM8(eax + 0x42E) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C98C0
 * Original: 0x002C98C0 - 0x002C98F5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C98C0(void)
{

loc_002C98C0: ;
    ecx = ZX8(MEM8(0x7FAAD9));
    edx = ZX8(MEM8(0x7FAAD8));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    eax = eax << 8;
    eax = eax | ecx;
    ecx = MEM32(esp + 4);
    eax = eax << 8;
    eax = eax | edx;
    eax = eax | 1;
    eax = ~eax;
    MEM32(ecx + 0x19C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002C9900
 * Original: 0x002C9900 - 0x002C9931 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9900(void)
{

loc_002C9900: ;
    ecx = ZX8(MEM8(0x7FAAD9));
    edx = ZX8(MEM8(0x7FAAD8));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_002C992F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9940
 * Original: 0x002C9940 - 0x002C9971 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9940(void)
{

loc_002C9940: ;
    ecx = ZX8(MEM8(0x7FAAD9));
    edx = ZX8(MEM8(0x7FAAD8));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002C996F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9980
 * Original: 0x002C9980 - 0x002C999A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9980(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C9980: ;
    SET_LO8(eax, MEM8(0x7FAADB));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002C999A(); return; } /* jne: not equal / not zero */

loc_002C9989: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADA));
    MEM8(eax + 0x42D) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9A30
 * Original: 0x002C9A30 - 0x002C9A4B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9A30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C9A30: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002C9A4B(); return; } /* je: equal / zero */

loc_002C9A3E: ;
    SET_LO16(eax, ZX8(MEM8(edi + 0x173)));
    g_seh_ebp = ebp; sub_002C9ADB(); return; /* tail jmp 0x002C9ADB */

}

/**
 * sub_002C9B10
 * Original: 0x002C9B10 - 0x002C9B28 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C9B10: ;
    eax = ZX8(MEM8(0x7FAADB));
    if (CMP_GE(eax, 2)) { sub_002C9B28(); return; } /* jge: greater or equal (signed >=) */

loc_002C9B1C: ;
    eax = MEM32(eax * 4 + 0x8470FC);
    ecx = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_002C9B2D(); return; /* tail jmp 0x002C9B2D */

}

/**
 * sub_002C9B60
 * Original: 0x002C9B60 - 0x002C9B8A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C9B60: ;
    ecx = MEM32(0x7FA1F8);
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADA));
    SET_LO8(eax, MEM8(0x7FAAD9));
    if (CMP_NE(ecx, eax)) goto loc_002C9B89; /* jne: not equal / not zero */

loc_002C9B77: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C9B88: ;
    POP32(esp, esi);

loc_002C9B89: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C9B90
 * Original: 0x002C9B90 - 0x002C9BA1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9B90(void)
{

loc_002C9B90: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x180) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9BB0
 * Original: 0x002C9BB0 - 0x002C9BC3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9BB0(void)
{

loc_002C9BB0: ;
    eax = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_002C9BC1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9BD0
 * Original: 0x002C9BD0 - 0x002C9BF5 (37 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9BD0(void)
{

loc_002C9BD0: ;
    SET_LO16(ecx, ZX8(MEM8(0x7FAADB)));
    eax = MEM32(esp + 4);
    SET_LO16(ecx, LO16(ecx) & MEM16(eax + 0x438));
    SET_LO16(edx, ZX8(MEM8(0x7FAADA)));
    ecx = ecx | edx;
    MEM16(eax + 0x438) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9C00
 * Original: 0x002C9C00 - 0x002C9C24 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9C00(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C9C00: ;
    SET_LO16(eax, ZX8(MEM8(0x7FAADA)));
    edx = MEM32(esp + 4);
    if (CMP_NE(MEM16(edx + 0x3AE), LO16(eax))) goto loc_002C9C23; /* jne: not equal / not zero */

loc_002C9C15: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C9C22: ;
    POP32(esp, esi);

loc_002C9C23: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C9C30
 * Original: 0x002C9C30 - 0x002C9C4D (29 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9C30(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C9C30: ;
    eax = ZX8(MEM8(0x7FAADA));
    ecx = ZX8(MEM8(0x7FAADB));
    edx = MEM32(0x8470DC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00047FA0(); return; /* tail jmp 0x00047FA0 */

}

/**
 * sub_002C9C80
 * Original: 0x002C9C80 - 0x002C9CC3 (67 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9C80(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C9C80: ;
    edx = MEM32(esp + 4);
    eax = ZX8(MEM8(edx + 0x42E));
    ecx = ZX8(MEM8(0x7FAADA));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    if (CMP_NE(MEM32(eax + esi + 0x68), ecx)) goto loc_002C9CAC; /* jne: not equal / not zero */

loc_002C9CA5: ;
    MEM8(0x7FAAD9) = MEM8(0x7FAAD9) ^ 1;

loc_002C9CAC: ;
    SET_LO8(eax, MEM8(0x7FAAD9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002C9CC1; /* je: equal / zero */

loc_002C9CB5: ;
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002C9CC1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9CD0
 * Original: 0x002C9CD0 - 0x002C9D43 (115 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9CD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002C9CD0: ;
    SET_LO8(edx, MEM8(0x7FAADB));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_002C9D43(); return; } /* je: equal / zero */

loc_002C9CDA: ;
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_002C9CDF: ;
    if (TEST_Z(eax, eax)) goto loc_002C9D33; /* je: equal / zero */

loc_002C9CE3: ;
    SET_LO8(ecx, MEM8(0x7FAAD9));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002C9CF9; /* jne: not equal / not zero */

loc_002C9CF2: ;
    MEM8(edi + 0x209) = MEM8(edi + 0x209) | 4;

loc_002C9CF9: ;
    SET_LO8(ecx, MEM8(0x7FAAD8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002C9D0A; /* je: equal / zero */

loc_002C9D03: ;
    MEM8(edi + 0x209) = MEM8(edi + 0x209) | 0x40;

loc_002C9D0A: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(edi + 0x135) = LO8(ecx);
    if (CMP_NE(MEM32(0x7FA1F8), 0x23)) goto loc_002C9D34; /* jne: not equal / not zero */

loc_002C9D1E: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADA));
    PUSH32(esp, 0); sub_0029D800(); /* call 0x0029D800 */

loc_002C9D2B: ;
    POP32(esp, esi);
    MEM32(edi + 0x12C) = eax;
    POP32(esp, edi);

loc_002C9D33: ;
    esp += 4; return; /* ret */

loc_002C9D34: ;
    edx = ZX8(MEM8(0x7FAADA));
    MEM32(edi + 0x12C) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9D50
 * Original: 0x002C9D50 - 0x002C9EB6 (358 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9D50(void)
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

loc_002C9D50: ;
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(0x7FAADB));
    SET_LO8(ecx, MEM8(0x7FAADA));
    eax = 0; /* xor self */
    SET_HI8(eax, LO8(edx));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAAD9));
    (void)0; /* cmp esi, 8 - flags set for next jcc */
    SET_LO8(eax, LO8(ecx));
    if (CMP_A(esi, 8)) goto loc_002C9EB3; /* ja: above (unsigned >) */

loc_002C9D74: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x2C9EB8); /* switch: 9 entries, 9 targets */
    if (_jt == 0x002C9D7Bu) goto loc_002C9D7B;
    if (_jt == 0x002C9D93u) goto loc_002C9D93;
    if (_jt == 0x002C9DABu) goto loc_002C9DAB;
    if (_jt == 0x002C9DC7u) goto loc_002C9DC7;
    if (_jt == 0x002C9E4Du) goto loc_002C9E4D;
    if (_jt == 0x002C9E52u) goto loc_002C9E52;
    if (_jt == 0x002C9E60u) goto loc_002C9E60;
    if (_jt == 0x002C9E75u) goto loc_002C9E75;
    if (_jt == 0x002C9EA1u) goto loc_002C9EA1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002C9D7B: ;
    ecx = MEM32(esp + 0xC);
    SET_LO16(edx, MEM16(ecx + 0x170));
    SET_LO16(edx, LO16(edx) + LO16(eax));
    MEM16(ecx + 0x172) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C9D93: ;
    ecx = MEM32(esp + 0xC);
    SET_LO16(edx, MEM16(ecx + 0x170));
    SET_LO16(edx, LO16(edx) - LO16(eax));
    MEM16(ecx + 0x172) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C9DAB: ;
    eax = MEM32(esp + 0xC);
    SET_LO16(ecx, MEM16(eax + 0x172));
    MEM16(eax + 0x174) = LO16(ecx);
    MEM16(eax + 0x170) = LO16(ecx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C9DC7: ;
    esi = MEM32(esp + 0xC);
    eax = ZX8(MEM8(esi + 0x253));
    PUSH32(esp, edi);
    edi = MEM32(0x84A1A0);
    eax = MEM32(edi + eax * 4);
    ecx = ZX8(LO8(ecx));
    edi = (uint32_t)(int32_t)SMEM16(eax + ecx * 8 + 0xC);
    ecx = eax + ecx * 8;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    edx = ZX8(LO8(edx));
    eax = eax + edx * 8;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    edi = edi - edx;
    esp = esp - 8;
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649434); /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    ecx = ecx - eax;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_002C9E20: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp + 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002C9E32: ;
    SET_LO16(edx, ZX8(MEM8(0x7FAAD8)));
    POP32(esp, edi);
    edx = edx + 0x40;
    edx = edx << 8;
    eax = eax + edx;
    MEM16(esi + 0x172) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C9E4D: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002C9E52: ;
    ecx = MEM32(esp + 0xC);
    MEM16(ecx + 0x172) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C9E60: ;
    eax = MEM32(esp + 0xC);
    SET_LO16(edx, MEM16(eax + 0x170));
    MEM16(eax + 0x172) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C9E75: ;
    ecx = MEM32(esp + 0xC);
    edx = ZX8(MEM8(ecx + 0x42E));
    esi = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    SET_LO16(edx, MEM16(edx + esi + 0x174));
    SET_LO16(edx, LO16(edx) + LO16(eax));
    MEM16(ecx + 0x170) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002C9EA1: ;
    eax = MEM32(esp + 0xC);
    SET_LO16(ecx, MEM16(eax + 0x174));
    MEM16(eax + 0x170) = LO16(ecx);

loc_002C9EB3: ;
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
 * sub_002C9F00
 * Original: 0x002C9F00 - 0x002C9F29 (41 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9F00(void)
{

loc_002C9F00: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x3EE) = LO8(ecx);
    MEM8(eax + 0x3EF) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x7FAADA));
    MEM8(eax + 0x3F0) = LO8(ecx);
    MEM8(eax + 0x3F1) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C9F30
 * Original: 0x002C9F30 - 0x002CA034 (260 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C9F30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_002C9F30: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x42C));
    esp = esp - 0x10;
    eax = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002C9F46; /* je: equal / zero */

loc_002C9F43: ;
    eax = ZX8(LO8(edx));

loc_002C9F46: ;
    edx = ZX8(MEM8(ecx + 0x253));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A1A8);
    esi = ZX8(MEM8(edx + esi));
    SET_LO8(edx, MEM8(ecx + 0x42B));
    esi = esi - 2;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002C9F69; /* je: equal / zero */

loc_002C9F66: ;
    esi = ZX8(LO8(edx));

loc_002C9F69: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    xmm3 = MEMF(0x648E84); /* movss */
    ebx = eax;
    if (CMP_G(eax, esi)) goto loc_002CA028; /* jg: greater (signed >) */

loc_002C9F7B: ;
    edx = esp + 0xC;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, edi);
    goto loc_002C9F90;

    /* nop */
    /* nop */

loc_002C9F90: ;
    edx = ZX8(MEM8(ecx + 0x253));
    edi = MEM32(0x84A1A0);
    edx = edi + edx * 4;
    edi = MEM32(edx);
    edi = (uint32_t)(int32_t)SMEM16(edi + eax * 8 + 8);
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(ecx + 0x78); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    edi = MEM32(edx);
    edi = (uint32_t)(int32_t)SMEM16(edi + eax * 8 + 0xA);
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(ecx + 0x7C); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = MEM32(edx);
    edx = (uint32_t)(int32_t)SMEM16(edx + eax * 8 + 0xC);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(ecx + 0x80); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
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
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_002CA01E; /* jbe: below or equal (unsigned <=) */

loc_002CA019: ;
    xmm3 = xmm0; /* movaps */
    ebx = eax;

loc_002CA01E: ;
    eax++;
    if (CMP_LE(eax, esi)) goto loc_002C9F90; /* jle: less or equal (signed <=) */

loc_002CA027: ;
    POP32(esp, edi);

loc_002CA028: ;
    POP32(esp, esi);
    MEM8(ecx + 0x42A) = LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002CA040
 * Original: 0x002CA040 - 0x002CA05D (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA040(void)
{

loc_002CA040: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    SET_LO8(edx, MEM8(0x7FAADA));
    MEM8(eax + 0x460) = LO8(ecx);
    MEM8(eax + 0x461) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA060
 * Original: 0x002CA060 - 0x002CA071 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA060(void)
{

loc_002CA060: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x3ED) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA080
 * Original: 0x002CA080 - 0x002CA0B1 (49 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA080(void)
{

loc_002CA080: ;
    edx = ZX8(MEM8(0x7FAAD9));
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(0x7FAADB));
    SET_LO8(ecx, MEM8(0x7FAADA));
    ecx = ecx << 8;
    ecx = ecx | edx;
    edx = ZX8(MEM8(0x7FAAD8));
    ecx = ecx << 8;
    ecx = ecx | edx;
    MEM32(eax + 0x1FC) = MEM32(eax + 0x1FC) | ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002CA0C0
 * Original: 0x002CA0C0 - 0x002CA0FB (59 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA0C0(void)
{

loc_002CA0C0: ;
    edx = ZX8(MEM8(0x7FAAD9));
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(0x7FAADB));
    SET_LO8(ecx, MEM8(0x7FAADA));
    ecx = ecx << 8;
    ecx = ecx | edx;
    edx = ZX8(MEM8(0x7FAAD8));
    ecx = ecx << 8;
    ecx = ecx | edx;
    edx = MEM32(eax + 0x1FC);
    ecx = ~ecx;
    edx = edx & ecx;
    MEM32(eax + 0x1FC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002CA100
 * Original: 0x002CA100 - 0x002CA148 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA100(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA100: ;
    ecx = MEM32(esp + 4);
    edx = ZX16(MEM16(ecx + 0x174));
    eax = ZX16(MEM16(ecx + 0x172));
    eax = eax - edx;
    if (((int32_t)eax >= 0)) goto loc_002CA118; /* jns: not sign (positive) */

loc_002CA116: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_002CA118: ;
    if (CMP_LE(eax, 0x8000)) goto loc_002CA124; /* jle: less or equal (signed <=) */

loc_002CA11F: ;
    eax = eax - 0x10000;

loc_002CA124: ;
    if (CMP_GE(eax & eax, 0)) goto loc_002CA12A; /* jge: greater or equal (signed >=) */

loc_002CA128: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_002CA12A: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(ecx + 0x3EF) = LO8(edx);
    MEM8(ecx + 0x3F1) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA150
 * Original: 0x002CA150 - 0x002CA161 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA150(void)
{

loc_002CA150: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x435) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA170
 * Original: 0x002CA170 - 0x002CA1C4 (84 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA170(void)
{
    float xmm0;

loc_002CA170: ;
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    ecx = SX16(LO16(eax));
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax + 0x260); /* mulss */
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(0x7FAAD9));
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0x1DA) = LO16(edx);
    SET_LO8(ecx, MEM8(0x7FAAD8));
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax + 0x264); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0x1DC) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA1D0
 * Original: 0x002CA1D0 - 0x002CA1FC (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA1D0(void)
{
    float xmm0;

loc_002CA1D0: ;
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    ecx = SX16(LO16(eax));
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax + 0x264); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0x1DE) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA200
 * Original: 0x002CA200 - 0x002CA255 (85 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA200(void)
{
    float xmm0;

loc_002CA200: ;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(0x7FAADB));
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADA));
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax + 0x260); /* mulss */
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(0x7FAAD9));
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0x1E0) = LO16(ecx);
    SET_LO8(edx, MEM8(0x7FAAD8));
    ecx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax + 0x260); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0x1E2) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA260
 * Original: 0x002CA260 - 0x002CA273 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA260(void)
{

loc_002CA260: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x174));
    MEM16(eax + 0x170) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA280
 * Original: 0x002CA280 - 0x002CA2D5 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA280(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA280: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00308AA0(); /* call 0x00308AA0 */

loc_002CA28D: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_002CA2AA; /* je: equal / zero */

loc_002CA293: ;
    eax = ZX8(MEM8(0x7FAADB));
    eax = eax - ebx;
    if ((eax == 0)) { sub_002CA2D5(); return; } /* je: equal / zero */

loc_002CA29E: ;
    eax--;
    SET_LO8(ecx, MEM8(0x7FAADA));
    if ((eax == 0)) goto loc_002CA2AD; /* je: equal / zero */

loc_002CA2A7: ;
    eax--;
    if ((eax == 0)) goto loc_002CA2B3; /* je: equal / zero */

loc_002CA2AA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002CA2AD: ;
    MEM8(esi + 0x43D) = LO8(ecx);

loc_002CA2B3: ;
    ecx = ZX8(LO8(ecx));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_002CA2BC: ;
    esp = esp + 4;
    MEM16(esi + 0x428) = LO16(ebx);
    MEM32(esi + 0x420) = eax;
    MEM32(esi + 0x424) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA320
 * Original: 0x002CA320 - 0x002CA357 (55 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA320(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002CA320: ;
    SET_LO8(ecx, MEM8(0x7FAAD8));
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), 2 - flags set for next jcc */
    SET_HI8(eax, MEM8(0x7FAADA));
    SET_LO8(eax, MEM8(0x7FAADB));
    if (CMP_NE(LO8(ecx), 2)) { sub_002CA357(); return; } /* jne: not equal / not zero */

loc_002CA338: ;
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 4);
    xmm0 = xmm0 * MEMF(eax + 0x264); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0x1F0) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA390
 * Original: 0x002CA390 - 0x002CA3C8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA390(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA390: ;
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(0x7FAAD9));
    edx = ZX8(MEM8(0x7FAAD8));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    MEM32(esp) = eax;
    if ((eax != 0)) { sub_002CA3C8(); return; } /* jne: not equal / not zero */

loc_002CA3BB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00021560(); /* call 0x00021560 */

loc_002CA3C5: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA4E0
 * Original: 0x002CA4E0 - 0x002CA532 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA4E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA4E0: ;
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(0x7FAAD9));
    edx = ZX8(MEM8(0x7FAAD8));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    SET_LO8(eax, MEM8(0x7FAADA));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00305950(); /* call 0x00305950 */

loc_002CA51D: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CA52F; /* je: equal / zero */

loc_002CA524: ;
    eax = MEM32(esp + 4);
    ecx = esi;
    PUSH32(esp, 0); sub_00302AA0(); /* call 0x00302AA0 */

loc_002CA52F: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA540
 * Original: 0x002CA540 - 0x002CA564 (36 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA540(void)
{
    float xmm0;

loc_002CA540: ;
    edx = ZX8(MEM8(0x7FAADA));
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM8(eax + 0x1D8) = LO8(ecx);
    MEMF(eax + 0x224) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002CA570
 * Original: 0x002CA570 - 0x002CA5A7 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA570(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA570: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x97));
    if (CMP_NE(LO8(ecx), MEM8(0x7FAADA))) goto loc_002CA58F; /* jne: not equal / not zero */

loc_002CA588: ;
    MEM8(0x7FAAD9) = MEM8(0x7FAAD9) ^ 1;

loc_002CA58F: ;
    SET_LO8(eax, MEM8(0x7FAAD9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CA5A6; /* je: equal / zero */

loc_002CA598: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002CA5A5: ;
    POP32(esp, esi);

loc_002CA5A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CA5B0
 * Original: 0x002CA5B0 - 0x002CA623 (115 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA5B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002CA5B0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x180));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CA612; /* jne: not equal / not zero */

loc_002CA5BE: ;
    xmm0 = MEMF(ecx + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_002CA612; /* jp: parity */

loc_002CA5D3: ;
    eax = MEM32(ecx + 0x568);
    edx = MEM32(eax + 0xA0);
    if (TEST_Z(edx, edx)) goto loc_002CA5EA; /* je: equal / zero */

loc_002CA5E3: ;
    MEM8(0x7FAADB) = MEM8(0x7FAADB) ^ 1;

loc_002CA5EA: ;
    SET_LO8(edx, MEM8(0x7FAADB));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002CA619; /* je: equal / zero */

loc_002CA5F4: ;
    MEM8(eax + 0xC7) = MEM8(eax + 0xC7) | 2;
    eax = MEM32(ecx + 0x568);
    MEM8(eax + 0xC9) = 0;
    MEM16(ecx + 0x428) = 0x64;
    esp += 4; return; /* ret */

loc_002CA612: ;
    MEM32(ecx + 0x420) = MEM32(ecx + 0x420) + 0xFFFFFFFBu;

loc_002CA619: ;
    MEM16(ecx + 0x428) = 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_002CA630
 * Original: 0x002CA630 - 0x002CA660 (48 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA630(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002CA630: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x180));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002CA64F; /* jne: not equal / not zero */

loc_002CA63E: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648D1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D1C))) goto loc_002CA65F; /* jbe: below or equal (unsigned <=) */

loc_002CA64F: ;
    MEM32(eax + 0x420) = MEM32(eax + 0x420) + 0xFFFFFFFBu;
    MEM16(eax + 0x428) = 0x64;

loc_002CA65F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CA6C0
 * Original: 0x002CA6C0 - 0x002CA6D7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA6C0(void)
{

loc_002CA6C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002C6100(); /* call 0x002C6100 */

loc_002CA6CB: ;
    esp = esp + 4;
    MEM8(esi + 0x42F) = 0x11;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA6E0
 * Original: 0x002CA6E0 - 0x002CA72C (76 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA6E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA6E0: ;
    edx = MEM32(esp + 4);
    eax = ZX8(MEM8(edx + 0x42E));
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    SET_LO8(ecx, MEM8(eax + 0x20C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002CA70D; /* jne: not equal / not zero */

loc_002CA703: ;
    if (CMP_NE(MEM16(eax + 0x3AE), 0)) goto loc_002CA714; /* jne: not equal / not zero */

loc_002CA70D: ;
    MEM8(0x7FAADA) = MEM8(0x7FAADA) ^ 1;

loc_002CA714: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CA72B; /* je: equal / zero */

loc_002CA71D: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002CA72A: ;
    POP32(esp, esi);

loc_002CA72B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CA730
 * Original: 0x002CA730 - 0x002CA74E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA730(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA730: ;
    eax = ZX8(MEM8(0x7FAADB));
    ecx = MEM32(eax * 4 + 0x59DCA8);
    if (TEST_Z(ecx, ecx)) goto loc_002CA74D; /* je: equal / zero */

loc_002CA742: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_002CA74A: ;
    esp = esp + 8;

loc_002CA74D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CA750
 * Original: 0x002CA750 - 0x002CA788 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA750(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA750: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CA787; /* je: equal / zero */

loc_002CA759: ;
    SET_LO8(eax, MEM8(0x7FAADA));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edx = MEM32(esp + 4);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CA779; /* jne: not equal / not zero */

loc_002CA766: ;
    eax = MEM32(edx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002CA787; /* je: equal / zero */

loc_002CA770: ;
    if (CMP_NE(MEM32(eax + 0xBC), 1)) goto loc_002CA787; /* jne: not equal / not zero */

loc_002CA779: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002CA786: ;
    POP32(esp, esi);

loc_002CA787: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CA790
 * Original: 0x002CA790 - 0x002CA7A1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA790(void)
{

loc_002CA790: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FAADB));
    MEM8(eax + 0x1B7) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA7B0
 * Original: 0x002CA7B0 - 0x002CA848 (152 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA7B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA7B0: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(edx + 0x135));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CA7D6; /* je: equal / zero */

loc_002CA7C0: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = eax + ecx + -1744;

loc_002CA7D6: ;
    eax = ZX8(MEM8(ecx + 0x42A));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAAD8));
    eax = eax + esi;
    esi = ZX8(MEM8(ecx + 0x253));
    ecx = MEM32(0x84A1A8);
    ecx = ZX8(MEM8(esi + ecx));
    if (CMP_L(eax, ecx)) goto loc_002CA7FE; /* jl: less (signed <) */

loc_002CA7FC: ;
    eax = eax - ecx;

loc_002CA7FE: ;
    if (TEST_NZ(eax, eax)) goto loc_002CA812; /* jne: not equal / not zero */

loc_002CA802: ;
    eax = ecx + -1;
    SET_LO8(ecx, MEM8(edx + 0x42B));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002CA812; /* je: equal / zero */

loc_002CA80F: ;
    eax = ZX8(LO8(ecx));

loc_002CA812: ;
    ecx = MEM32(0x84A1A0);
    ecx = MEM32(ecx + esi * 4);
    SET_LO16(esi, ZX8(MEM8(0x7FAADA)));
    if (CMP_NE(MEM16(ecx + eax * 8 + 6), LO16(esi))) goto loc_002CA831; /* jne: not equal / not zero */

loc_002CA82A: ;
    MEM8(0x7FAAD9) = MEM8(0x7FAAD9) ^ 1;

loc_002CA831: ;
    SET_LO8(eax, MEM8(0x7FAAD9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CA846; /* je: equal / zero */

loc_002CA83A: ;
    esi = ZX8(MEM8(0x7FAADB));
    PUSH32(esp, 0); sub_002C6040(); /* call 0x002C6040 */

loc_002CA846: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA850
 * Original: 0x002CA850 - 0x002CA8AF (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA850(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA850: ;
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAAD9));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FAADB));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    SET_LO8(eax, MEM8(0x7FAAD8));
    esi = eax;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002CA878; /* je: equal / zero */

loc_002CA86B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002CA870: ;
    ecx = ZX8(LO8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = esi + edx;

loc_002CA878: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CA8AC; /* jne: not equal / not zero */

loc_002CA881: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x48)) goto loc_002CA8AC; /* je: equal / zero */

loc_002CA88A: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x40);
    eax = ZX16(LO16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002CA8AC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA8B0
 * Original: 0x002CA8B0 - 0x002CA8E0 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA8B0(void)
{

loc_002CA8B0: ;
    ecx = ZX8(MEM8(0x7FAAD9));
    edx = ZX8(MEM8(0x7FAAD8));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    eax = eax << 8;
    eax = eax | ecx;
    ecx = MEM32(esp + 4);
    eax = eax << 8;
    eax = eax | edx;
    MEM32(ecx + 0x204) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002CA930
 * Original: 0x002CA930 - 0x002CA963 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA930(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA930: ;
    ecx = ZX8(MEM8(0x7FAAD9));
    edx = ZX8(MEM8(0x7FAAD8));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(0x7FAADB));
    SET_LO8(eax, MEM8(0x7FAADA));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    if ((eax != 0)) { sub_002CA963(); return; } /* jne: not equal / not zero */

loc_002CA957: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00021560(); /* call 0x00021560 */

loc_002CA961: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CA990
 * Original: 0x002CA990 - 0x002CAA1F (143 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CA990(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CA990: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_Z(edi, edi)) goto loc_002CAA1D; /* je: equal / zero */

loc_002CA99D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F4A48);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002CA9AA: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002CA9DD; /* je: equal / zero */

loc_002CA9B7: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_002CA9DD; /* je: equal / zero */

loc_002CA9C1: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002CA9DD; /* je: equal / zero */

loc_002CA9C8: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F4A48;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002CA9DA: ;
    esp = esp + 4;

loc_002CA9DD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60D4C4);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_002CA9E9: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002CAA1C; /* je: equal / zero */

loc_002CA9F6: ;
    edi = MEM32(edi + 0x4B0);
    if (TEST_Z(edi, edi)) goto loc_002CAA1C; /* je: equal / zero */

loc_002CAA00: ;
    ecx = MEM32(edi + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_002CAA1C; /* je: equal / zero */

loc_002CAA07: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x60D4C4;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_002CAA19: ;
    esp = esp + 4;

loc_002CAA1C: ;
    POP32(esp, ebx);

loc_002CAA1D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAA20
 * Original: 0x002CAA20 - 0x002CAA38 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAA20(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CAA20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x74);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x54);
    if (TEST_NZ(esi, esi)) { sub_002CAA38(); return; } /* jne: not equal / not zero */

loc_002CAA30: ;
    POP32(esp, esi);
    eax = 0x59C978;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAAC0
 * Original: 0x002CAAC0 - 0x002CABCB (267 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAAC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CAAC0: ;
    SET_LO16(eax, MEM16(esi + 0x428));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_002CAB2A; /* je: equal / zero */

loc_002CAACC: ;
    ecx = MEM32(esi + 0x420);
    if (TEST_Z(ecx, ecx)) goto loc_002CAB2A; /* je: equal / zero */

loc_002CAAD6: ;
    if (CMP_EQ(LO16(eax), 0x639C)) goto loc_002CAAE9; /* je: equal / zero */

loc_002CAADC: ;
    eax = eax - MEM32(0x7FDD28);
    MEM16(esi + 0x428) = LO16(eax);

loc_002CAAE9: ;
    SET_LO16(eax, MEM16(esi + 0x428));
    if (CMP_AE(LO16(eax), 0xC350)) goto loc_002CAAFF; /* jae: above or equal (unsigned >=) */

loc_002CAAF6: ;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_002CABCA; /* jne: not equal / not zero */

loc_002CAAFF: ;
    eax = MEM32(esi + 0x1FC);
    (void)0; /* test HI8(eax), 4 - flags set for next jcc */
    MEM16(esi + 0x428) = 0;
    if (TEST_Z(HI8(eax), 4)) goto loc_002CAB2A; /* je: equal / zero */

loc_002CAB13: ;
    eax = eax & 0xFFFFFBFFu;
    eax = eax | 4;
    MEM16(esi + 0x428) = 0x4E20;
    MEM32(esi + 0x1FC) = eax;

loc_002CAB2A: ;
    eax = MEM32(esi + 0x420);
    if (TEST_NZ(eax, eax)) goto loc_002CAB5D; /* jne: not equal / not zero */

loc_002CAB34: ;
    ecx = ZX8(MEM8(esi + 0x43D));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002CAA20(); /* call 0x002CAA20 */

loc_002CAB41: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x420) = eax;
    MEM32(esi + 0x424) = eax;
    MEM16(esi + 0x428) = 0;
    if (TEST_Z(eax, eax)) goto loc_002CABCA; /* je: equal / zero */

loc_002CAB5D: ;
    if (CMP_NE(MEM16(esi + 0x428), 0)) goto loc_002CABCA; /* jne: not equal / not zero */

loc_002CAB67: ;
    goto loc_002CAB70;

    /* nop */

loc_002CAB70: ;
    eax = MEM32(esi + 0x420);
    SET_LO8(ecx, MEM8(eax));
    if (CMP_B(LO8(ecx), 0xF7)) goto loc_002CAB80; /* jb: below (unsigned <) */

loc_002CAB7D: ;
    eax++;
    goto loc_002CABBA;

loc_002CAB80: ;
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(0x7FAADB) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(0x7FAADA) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 3));
    SET_LO8(eax, MEM8(eax + 4));
    ecx = ZX8(LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM8(0x7FAAD9) = LO8(edx);
    MEM8(0x7FAAD8) = LO8(eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x59C610), _icall_esp); /* indirect call */
    }

loc_002CABAE: ;
    eax = MEM32(esi + 0x420);
    esp = esp + 4;
    eax = eax + 5;

loc_002CABBA: ;
    MEM32(esi + 0x420) = eax;
    if (CMP_EQ(MEM16(esi + 0x428), 0)) goto loc_002CAB70; /* je: equal / zero */

loc_002CABCA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CABD0
 * Original: 0x002CABD0 - 0x002CAD3E (366 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CABD0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CABD0: ;
    SET_LO8(edx, MEM8(0x7FAABD));
    esp = esp - 0x234;
    ecx = 0; /* xor self */
    (void)0; /* cmp LO8(edx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x23C);
    if (CMP_NE(LO8(edx), LO8(ecx))) goto loc_002CABFE; /* jne: not equal / not zero */

loc_002CABEA: ;
    if (CMP_EQ(eax, ecx)) goto loc_002CABFE; /* je: equal / zero */

loc_002CABEE: ;
    eax = ZX16(MEM16(eax + 0x60));
    if (CMP_EQ(eax, MEM32(0x7FAAC8))) goto loc_002CAD36; /* je: equal / zero */

loc_002CABFE: ;
    SET_LO8(eax, 0xFF);
    PUSH32(esp, ebx);
    MEM8(esp + 8) = LO8(eax);
    MEM8(esp + 0xC) = LO8(eax);
    MEM8(esp + 0x10) = LO8(eax);
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    eax = ebp;
    esi = 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM8(esp + 0xD) = LO8(ecx);
    MEM8(esp + 0xE) = LO8(ecx);
    MEM8(esp + 0xF) = LO8(ecx);
    MEM8(esp + 0x11) = LO8(ecx);
    MEM8(esp + 0x12) = LO8(ecx);
    MEM8(esp + 0x13) = LO8(ecx);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x84A1A0);
    eax = MEM32(edx + ebp * 4);
    edx = MEM32(0x84A1A8);
    if (CMP_BE(MEM8(edx + ebp), LO8(ecx))) goto loc_002CAD34; /* jbe: below or equal (unsigned <=) */

loc_002CAC51: ;
    esi = eax + 4;
    PUSH32(esp, edi);

loc_002CAC55: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    eax = (uint32_t)(int32_t)SMEM16(esi + -4);
    ecx = (uint32_t)(int32_t)SMEM16(esi + -2);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x46EA6000);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 + MEMF(0x64908C); /* addss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x48);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edi = esp + 0x44;
    ebx = esp + 0x48;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003565D0(); /* call 0x003565D0 */

loc_002CACA3: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_002CAD15; /* je: equal / zero */

loc_002CACAA: ;
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax + eax * 2;
    SET_LO8(ecx, MEM8(esp + eax + 0x10));
    SET_LO8(edx, MEM8(esp + eax + 0x11));
    SET_LO8(eax, MEM8(esp + eax + 0x12));
    MEM8(0x77616F) = LO8(eax);
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x776171) = LO8(ecx);
    MEM8(0x776170) = LO8(edx);
    MEM8(0x77616E) = 0xFF;
    MEMF(0x77615C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CACFE; /* je: equal / zero */

loc_002CACEE: ;
    xmm0 = MEMF(0x648F10); /* movss */
    MEMF(0x77615C) = xmm0; /* movss */

loc_002CACFE: ;
    ecx = ZX16(MEM16(esi + 2));
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, 0x5F13E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002CAD12: ;
    esp = esp + 0xC;

loc_002CAD15: ;
    ecx = MEM32(0x84A1A8);
    eax = MEM32(esp + 0x1C);
    edx = ZX8(MEM8(ecx + ebp));
    eax++;
    esi = esi + 8;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, edx)) goto loc_002CAC55; /* jl: less (signed <) */

loc_002CAD33: ;
    POP32(esp, edi);

loc_002CAD34: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002CAD36: ;
    POP32(esp, ebp);
    esp = esp + 0x234;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002CAD40
 * Original: 0x002CAD40 - 0x002CADFF (191 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAD40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002CAD40: ;
    SET_LO8(eax, MEM8(0x7FAACC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CADFE; /* je: equal / zero */

loc_002CAD4D: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(0x7FAAC0); /* addss */
    /* comiss xmm0, MEMF(0x648D3C) - sets EFLAGS */
    eax = MEM32(0x84A5F8);
    MEM8(eax + 0x234) = 0xA;
    MEMF(0x7FAAC0) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D3C))) goto loc_002CAD95; /* jbe: below or equal (unsigned <=) */

loc_002CAD7A: ;
    SET_LO8(eax, MEM8(0x7FAABD));
    xmm0 = 0.0f; /* xorps self = zero */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    MEM8(0x7FAABD) = LO8(ecx);
    MEMF(0x7FAAC0) = xmm0; /* movss */

loc_002CAD95: ;
    edx = ZX8(MEM8(0x7FAA9D));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(0x7FAA9C));
    if (CMP_GE(esi, edx)) goto loc_002CADFD; /* jge: greater or equal (signed >=) */

loc_002CADA8: ;
    PUSH32(esp, ebx);
    ebx = esi;
    PUSH32(esp, edi);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x54);
    /* nop */

loc_002CADB0: ;
    eax = MEM32(0x84A1AC);
    SET_LO8(ecx, MEM8(ebx + eax + 0xA));
    edi = 0; /* xor self */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002CADE1; /* jne: not equal / not zero */

loc_002CADBF: ;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_002CADC4: ;
    if (TEST_Z(eax, eax)) goto loc_002CADE1; /* je: equal / zero */

loc_002CADC8: ;
    eax = ZX16(MEM16(eax + 0x60));
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002CADE1; /* je: equal / zero */

loc_002CADD1: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx;
    edi = eax;

loc_002CADE1: ;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_002CABD0(); /* call 0x002CABD0 */

loc_002CADE9: ;
    ecx = ZX8(MEM8(0x7FAA9D));
    esp = esp + 4;
    esi++;
    ebx = ebx + 0x54;
    if (CMP_L(esi, ecx)) goto loc_002CADB0; /* jl: less (signed <) */

loc_002CADFB: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002CADFD: ;
    POP32(esp, esi);

loc_002CADFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CAE00
 * Original: 0x002CAE00 - 0x002CAED9 (217 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAE00(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CAE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_002CAED6; /* je: equal / zero */

loc_002CAE0E: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_002CAED6; /* je: equal / zero */

loc_002CAE19: ;
    if (CMP_EQ(MEM8(esi + 0x236), 0xFF)) goto loc_002CAED6; /* je: equal / zero */

loc_002CAE26: ;
    if (CMP_EQ(edx, 0x2B)) goto loc_002CAE65; /* je: equal / zero */

loc_002CAE2B: ;
    if (CMP_EQ(edx, 0x2C)) goto loc_002CAE65; /* je: equal / zero */

loc_002CAE30: ;
    ecx = edx;
    PUSH32(esp, 0); sub_002CAF30(); /* call 0x002CAF30 */

loc_002CAE37: ;
    if (TEST_Z(eax, eax)) goto loc_002CAE76; /* je: equal / zero */

loc_002CAE3B: ;
    ecx = edx + 1;
    ecx = ecx & 7;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = edx + 0x51;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    SET_LO8(ecx, MEM8(ecx + 0x801A00));
    (void)0; /* test LO8(ecx), LO8(eax) - flags set for next jcc */
    MEM8(0x7FCB45) = LO8(edx);
    if (TEST_NZ(LO8(ecx), LO8(eax))) goto loc_002CAE76; /* jne: not equal / not zero */

loc_002CAE5E: ;
    edx = 0x1A;
    goto loc_002CAE76;

loc_002CAE65: ;
    MEM8(0x7FCB45) = LO8(edx);
    MEM32(0x84A5C4) = edi;
    edx = 0x2A;

loc_002CAE76: ;
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_002CAE97; /* jne: not equal / not zero */

loc_002CAE7E: ;
    esi = MEM32(esi + 0x568);
    SET_LO8(eax, MEM8(esi + 0x96));
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_002CAED6; /* js: sign (negative) */

loc_002CAE8E: ;
    POP32(esp, edi);
    MEM8(esi + 0x96) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002CAE97: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x97));
    if (TEST_S(LO8(ecx), LO8(ecx))) goto loc_002CAED6; /* js: sign (negative) */

loc_002CAEA7: ;
    ecx = eax;
    MEM8(ecx + 0x97) = LO8(edx);
    edi = edi - MEM32(0x84B4A0);
    ecx = edi;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    ecx = MEM32(esi + 0x568);
    edx = (uint32_t)((int32_t)edx >> 6);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM8(ecx + 0xA8) = LO8(eax);

loc_002CAED6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002CAEE0
 * Original: 0x002CAEE0 - 0x002CAF30 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAEE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CAEE0: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002CAF2F; /* jne: not equal / not zero */

loc_002CAEEA: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = eax + ecx + 0x568;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_002CAF16; /* je: equal / zero */

loc_002CAF03: ;
    SET_LO8(edx, MEM8(eax + 0x96));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002CAF16; /* je: equal / zero */

loc_002CAF0D: ;
    if (TEST_S(LO8(edx), LO8(edx))) goto loc_002CAF16; /* js: sign (negative) */

loc_002CAF0F: ;
    MEM8(eax + 0x96) = 0;

loc_002CAF16: ;
    ecx = MEM32(ecx);
    if (TEST_Z(ecx, ecx)) goto loc_002CAF2F; /* je: equal / zero */

loc_002CAF1C: ;
    SET_LO8(eax, MEM8(ecx + 0x97));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CAF2F; /* je: equal / zero */

loc_002CAF26: ;
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_002CAF2F; /* js: sign (negative) */

loc_002CAF28: ;
    MEM8(ecx + 0x97) = 0;

loc_002CAF2F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CAF30
 * Original: 0x002CAF30 - 0x002CAF45 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF30(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CAF30: ;
    eax = 0; /* xor self */

loc_002CAF32: ;
    if (CMP_EQ(MEM32(eax + 0x6F22BC), ecx)) { sub_002CAF45(); return; } /* je: equal / zero */

loc_002CAF3A: ;
    eax = eax + 0xC;
    if (CMP_B(eax, 0x30)) goto loc_002CAF32; /* jb: below (unsigned <) */

loc_002CAF42: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002CAF50
 * Original: 0x002CAF50 - 0x002CAF84 (52 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF50: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x20)) { sub_002CAF84(); return; } /* jne: not equal / not zero */

loc_002CAF57: ;
    eax = MEM32(0x84A5C8);
    eax = MEM32(eax + 8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) { sub_002CAF84(); return; } /* je: equal / zero */

loc_002CAF64: ;
    MEM8(0x847045) = 1;
    MEM32(esp + 0xC) = 1;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001AF70(); return; /* tail jmp 0x0001AF70 */

}

/**
 * sub_002CAF90
 * Original: 0x002CAF90 - 0x002CAFE4 (84 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CAF90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CAF90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, MEM8(0x7FCB45));
    if (TEST_NZ(eax, eax)) goto loc_002CAFB0; /* jne: not equal / not zero */

loc_002CAFA1: ;
    if (TEST_NZ(MEM8(0x801A00), 2)) goto loc_002CAFB0; /* jne: not equal / not zero */

loc_002CAFAA: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_002CAFB0; /* jne: not equal / not zero */

loc_002CAFAE: ;
    SET_LO8(ebx, 1);

loc_002CAFB0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x84A5C8) = esi;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_002CAFE4(); return; } /* jne: not equal / not zero */

loc_002CAFBE: ;
    ecx = 0; /* xor self */
    edx = ZX8(LO8(eax));
    eax = 0; /* xor self */

loc_002CAFC5: ;
    if (CMP_EQ(MEM32(eax + 0x6F22BC), edx)) goto loc_002CAFD8; /* je: equal / zero */

loc_002CAFCD: ;
    eax = eax + 0xC;
    ecx++;
    if (CMP_B(eax, 0x30)) goto loc_002CAFC5; /* jb: below (unsigned <) */

loc_002CAFD6: ;
    g_seh_ebp = ebp; sub_002CAFEF(); return; /* tail jmp 0x002CAFEF */

loc_002CAFD8: ;
    esi = ecx + ecx * 2;
    esi = esi * 4 + 0x6F22BC;
    g_seh_ebp = ebp; sub_002CAFE9(); return; /* tail jmp 0x002CAFE9 */

}

/**
 * sub_002CB150
 * Original: 0x002CB150 - 0x002CB169 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB150(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB150: ;
    PUSH32(esp, esi);
    esi = MEM32(0x7FCB40);
    MEM8(0x7FCB44) = 0;
    PUSH32(esp, 0); sub_000E3630(); /* call 0x000E3630 */

loc_002CB163: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001B180(); return; /* tail jmp 0x0001B180 */

}

/**
 * sub_002CB170
 * Original: 0x002CB170 - 0x002CB1C7 (87 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB170(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CB170: ;
    SET_LO8(eax, MEM8(0x7FCB44));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CB1C6; /* je: equal / zero */

loc_002CB179: ;
    PUSH32(esp, esi);
    esi = MEM32(0x7FCB40);
    SET_LO8(eax, MEM8(esi + 0x35));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CB1C5; /* jne: not equal / not zero */

loc_002CB187: ;
    MEM8(0x7FCB44) = 0;
    PUSH32(esp, 0); sub_000E3630(); /* call 0x000E3630 */

loc_002CB193: ;
    PUSH32(esp, 0); sub_0001B180(); /* call 0x0001B180 */

loc_002CB198: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x29)) goto loc_002CB1AE; /* je: equal / zero */

loc_002CB1A2: ;
    if (CMP_EQ(eax, 0x2E)) goto loc_002CB1AE; /* je: equal / zero */

loc_002CB1A7: ;
    MEM8(0x801A00) = MEM8(0x801A00) | 2;

loc_002CB1AE: ;
    eax = MEM32(0x84A5C4);
    if (TEST_Z(eax, eax)) goto loc_002CB1C5; /* je: equal / zero */

loc_002CB1B7: ;
    MEM8(eax + 0x14) = 1;
    MEM32(0x84A5C4) = 0;

loc_002CB1C5: ;
    POP32(esp, esi);

loc_002CB1C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CB1D0
 * Original: 0x002CB1D0 - 0x002CB26E (158 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB1D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CB1D0: ;
    eax = MEM32(0x84A5CC);
    if (TEST_NZ(eax, eax)) goto loc_002CB26D; /* jne: not equal / not zero */

loc_002CB1DD: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002CB1EB; /* jne: not equal / not zero */

loc_002CB1E6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002CB1EB: ;
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
    if (TEST_Z(esi, esi)) goto loc_002CB235; /* je: equal / zero */

loc_002CB213: ;
    if (CMP_B(MEM32(esi + 0x80), 4)) goto loc_002CB235; /* jb: below (unsigned <) */

loc_002CB21C: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002CB226: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002CB22E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002CB256; /* jne: not equal / not zero */

loc_002CB235: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002CB247: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002CB24F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002CB264; /* je: equal / zero */

loc_002CB256: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002CB3C0(); /* call 0x002CB3C0 */

loc_002CB25C: ;
    POP32(esp, edi);
    MEM32(0x84A5CC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002CB264: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x84A5CC) = eax;
    POP32(esp, esi);

loc_002CB26D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CB270
 * Original: 0x002CB270 - 0x002CB351 (225 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB270: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_002CB34C; /* je: equal / zero */

loc_002CB282: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, edi);
    goto loc_002CB290;

    /* nop */

loc_002CB290: ;
    ecx = MEM32(ebp + -4);
    if (CMP_EQ(ecx, ebx)) goto loc_002CB349; /* je: equal / zero */

loc_002CB29B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    edi = 0; /* xor self */
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_0005EEE0(); /* call 0x0005EEE0 */

loc_002CB2AE: ;
    ecx = MEM32(ebp + -8);
    edx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x14);
    esp = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_002CB480(); /* call 0x002CB480 */

loc_002CB2C5: ;
    ecx = esi + -12;
    if (CMP_EQ(ecx, ebx)) goto loc_002CB2F2; /* je: equal / zero */

loc_002CB2CC: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(edx * 8 + 0x84D788);
    if (CMP_EQ(edx, ebx)) goto loc_002CB2F2; /* je: equal / zero */

loc_002CB2E1: ;
    eax = MEM32(edx + -4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edi = edx + -28;
    if (CMP_EQ(eax, ecx)) { sub_002CB351(); return; } /* je: equal / zero */

loc_002CB2EB: ;
    edx = MEM32(edx + 4);
    if (CMP_NE(edx, ebx)) goto loc_002CB2E1; /* jne: not equal / not zero */

loc_002CB2F2: ;
    eax = MEM32(0x84DAB0);
    esi = MEM32(0x84DAB4);
    if (CMP_AE(eax, esi)) goto loc_002CB313; /* jae: above or equal (unsigned >=) */

loc_002CB301: ;
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    edx = MEM32(eax);
    if (CMP_EQ(ecx, ebx)) goto loc_002CB30C; /* je: equal / zero */

loc_002CB307: ;
    if (CMP_EQ(ecx, MEM32(edx + 0x18))) goto loc_002CB315; /* je: equal / zero */

loc_002CB30C: ;
    eax = eax + 4;
    if (CMP_B(eax, esi)) goto loc_002CB301; /* jb: below (unsigned <) */

loc_002CB313: ;
    edx = 0; /* xor self */

loc_002CB315: ;
    edi = edx;
    if (CMP_EQ(edi, ebx)) goto loc_002CB33B; /* je: equal / zero */

loc_002CB31B: ;
    if (CMP_EQ(MEM32(edi + 0x18), ebx)) goto loc_002CB324; /* je: equal / zero */

loc_002CB320: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_002CB324: ;
    if (CMP_NE(MEM16(edi + 0x2C), LO16(ebx))) goto loc_002CB33B; /* jne: not equal / not zero */

loc_002CB32A: ;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_002CB331: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_002CB33B: ;
    eax = MEM32(ebp + 0xC);
    ebp = ebp + 0xC;
    if (CMP_NE(eax, ebx)) goto loc_002CB290; /* jne: not equal / not zero */

loc_002CB349: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002CB34C: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002CB390
 * Original: 0x002CB390 - 0x002CB3BC (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB390(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CB390: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 8);
    esi = esi + 8;
    if (TEST_Z(eax, eax)) goto loc_002CB3BA; /* je: equal / zero */

loc_002CB39D: ;
    /* nop */

loc_002CB3A0: ;
    eax = MEM32(esi + -4);
    if (TEST_Z(eax, eax)) goto loc_002CB3BA; /* je: equal / zero */

loc_002CB3A7: ;
    edx = MEM32(esi + -8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002CB570(); /* call 0x002CB570 */

loc_002CB3B0: ;
    eax = MEM32(esi + 0xC);
    esi = esi + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_002CB3A0; /* jne: not equal / not zero */

loc_002CB3BA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB3C0
 * Original: 0x002CB3C0 - 0x002CB46B (171 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB3C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB3C0: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp) = 0;
    if (TEST_NZ(eax, eax)) goto loc_002CB3DC; /* jne: not equal / not zero */

loc_002CB3D7: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002CB3DC: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002CB424; /* je: equal / zero */

loc_002CB402: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_002CB424; /* jb: below (unsigned <) */

loc_002CB40B: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002CB415: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002CB41D: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002CB445; /* jne: not equal / not zero */

loc_002CB424: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002CB436: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002CB43E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_002CB46B(); return; } /* je: equal / zero */

loc_002CB445: ;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    MEM32(ebp) = eax;
    POP32(esp, edi);
    MEM32(eax + 0x14) = 1;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002CB480
 * Original: 0x002CB480 - 0x002CB56B (235 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB480: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_EQ(eax, ecx)) goto loc_002CB4A1; /* je: equal / zero */

loc_002CB495: ;
    if (CMP_EQ(MEM32(eax + 4), ebp)) goto loc_002CB4A3; /* je: equal / zero */

loc_002CB49A: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_002CB495; /* jne: not equal / not zero */

loc_002CB4A1: ;
    eax = ecx;

loc_002CB4A3: ;
    if (CMP_NE(eax, ecx)) goto loc_002CB561; /* jne: not equal / not zero */

loc_002CB4AB: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CB566; /* jne: not equal / not zero */

loc_002CB4B6: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002CB4C4; /* jne: not equal / not zero */

loc_002CB4BF: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002CB4C4: ;
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
    if (TEST_Z(esi, esi)) goto loc_002CB50E; /* je: equal / zero */

loc_002CB4EC: ;
    if (CMP_B(MEM32(esi + 0x80), 8)) goto loc_002CB50E; /* jb: below (unsigned <) */

loc_002CB4F5: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002CB4FF: ;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002CB507: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002CB52F; /* jne: not equal / not zero */

loc_002CB50E: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002CB520: ;
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002CB528: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002CB54B; /* je: equal / zero */

loc_002CB52F: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_002CB600(); /* call 0x002CB600 */

loc_002CB537: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002CB700(); /* call 0x002CB700 */

loc_002CB544: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002CB54B: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ecx);
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002CB700(); /* call 0x002CB700 */

loc_002CB55A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002CB561: ;
    eax = MEM32(eax);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_002CB566: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002CB570
 * Original: 0x002CB570 - 0x002CB5C3 (83 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB570: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    ecx = MEM32(ebp);
    eax = MEM32(ecx + 0xC);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(eax, ecx)) goto loc_002CB58C; /* je: equal / zero */

loc_002CB580: ;
    if (CMP_EQ(MEM32(eax + 4), edx)) goto loc_002CB58E; /* je: equal / zero */

loc_002CB585: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_002CB580; /* jne: not equal / not zero */

loc_002CB58C: ;
    eax = ecx;

loc_002CB58E: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ecx)) goto loc_002CB5BE; /* je: equal / zero */

loc_002CB596: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 4);
    eax--;
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    edi = eax;
    if ((eax != 0)) goto loc_002CB5AB; /* jne: not equal / not zero */

loc_002CB5A4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002CB6A0(); /* call 0x002CB6A0 */

loc_002CB5AB: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(edi, edi)) goto loc_002CB5BE; /* jne: not equal / not zero */

loc_002CB5B0: ;
    esi = MEM32(ebp);
    PUSH32(esp, ebx);
    ebx = esp + 0x10;
    PUSH32(esp, 0); sub_0002F610(); /* call 0x0002F610 */

loc_002CB5BD: ;
    POP32(esp, ebx);

loc_002CB5BE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002CB5D0
 * Original: 0x002CB5D0 - 0x002CB5F5 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB5D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CB5D0: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_002CB5EC; /* je: equal / zero */

loc_002CB5D9: ;
    /* nop */

loc_002CB5E0: ;
    if (CMP_EQ(MEM32(eax + 4), edx)) goto loc_002CB5EE; /* je: equal / zero */

loc_002CB5E5: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_002CB5E0; /* jne: not equal / not zero */

loc_002CB5EC: ;
    eax = ecx;

loc_002CB5EE: ;
    if (CMP_NE(eax, ecx)) { sub_002CB5F5(); return; } /* jne: not equal / not zero */

loc_002CB5F2: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002CB600
 * Original: 0x002CB600 - 0x002CB698 (152 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB600(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CB600: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 1;
    if (TEST_NZ(eax, eax)) goto loc_002CB61B; /* jne: not equal / not zero */

loc_002CB616: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002CB61B: ;
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
    if (TEST_Z(esi, esi)) goto loc_002CB665; /* je: equal / zero */

loc_002CB643: ;
    if (CMP_B(MEM32(esi + 0x80), 0x28)) goto loc_002CB665; /* jb: below (unsigned <) */

loc_002CB64C: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002CB656: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002CB65E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002CB682; /* jne: not equal / not zero */

loc_002CB665: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002CB677: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002CB67F: ;
    esp = esp + 8;

loc_002CB682: ;
    esi = MEM32(esp + 0xC);
    edi = eax;
    MEM32(ebx) = eax;
    ecx = 0xA;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002CB6A0
 * Original: 0x002CB6A0 - 0x002CB6FE (94 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB6A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CB6A0: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002CB6A8: ;
    if (TEST_NZ(eax, eax)) goto loc_002CB6DB; /* jne: not equal / not zero */

loc_002CB6AC: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_002CB6DB; /* je: equal / zero */

loc_002CB6B2: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002CB6D2: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_002CB6DB: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    MEM32(esi) = 0;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_002CB6F9; /* je: equal / zero */

loc_002CB6E8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002CB6F6: ;
    esp = esp + 4;

loc_002CB6F9: ;
    eax = esi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002CB700
 * Original: 0x002CB700 - 0x002CB797 (151 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB700: ;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_002CB715; /* jne: not equal / not zero */

loc_002CB710: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002CB715: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (TEST_Z(esi, esi)) goto loc_002CB75D; /* je: equal / zero */

loc_002CB73B: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_002CB75D; /* jb: below (unsigned <) */

loc_002CB744: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002CB74E: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002CB756: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_002CB797(); return; } /* jne: not equal / not zero */

loc_002CB75D: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002CB76F: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002CB777: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_002CB797(); return; } /* jne: not equal / not zero */

loc_002CB77E: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_002CB78E: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002CB810
 * Original: 0x002CB810 - 0x002CB899 (137 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB810(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002CB810: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002CB897; /* je: equal / zero */

loc_002CB81D: ;
    if (CMP_EQ(MEM32(esp + 8), 0x14)) goto loc_002CB878; /* je: equal / zero */

loc_002CB824: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CB87A; /* je: equal / zero */

loc_002CB82D: ;
    edi = 0xB4;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002CB837: ;
    if (CMP_NE(MEM32(0x863D04), 3)) goto loc_002CB87A; /* jne: not equal / not zero */

loc_002CB840: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002CB87A; /* je: equal / zero */

loc_002CB84A: ;
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002CB84F: ;
    edx = 0x637E38;
    PUSH32(esp, 0); sub_003449F0(); /* call 0x003449F0 */

loc_002CB859: ;
    if (TEST_Z(eax, eax)) goto loc_002CB87A; /* je: equal / zero */

loc_002CB85D: ;
    eax = MEM32(0x84A6A4);
    xmm0 = MEMF(eax + 0xCC); /* movss */
    xmm0 = xmm0 * MEMF(0x648E6C); /* mulss */
    edi = (int32_t)xmm0; /* cvttss2si */
    goto loc_002CB87A;

loc_002CB878: ;
    edi = 0; /* xor self */

loc_002CB87A: ;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x204) = 2;
    edx = MEM32(esi + 0x568);
    MEM16(edx + 0x212) = LO16(edi);

loc_002CB897: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB8A0
 * Original: 0x002CB8A0 - 0x002CBF1A (1658 bytes, 422 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB8A0(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB8A0: ;
    SET_LO8(eax, MEM8(0x7FA275));
    esp = esp - 0x418;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CBF13; /* jne: not equal / not zero */

loc_002CB8B3: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CB8C9; /* je: equal / zero */

loc_002CB8BC: ;
    if (CMP_NE(MEM32(0x863D08), 3)) goto loc_002CBF13; /* jne: not equal / not zero */

loc_002CB8C9: ;
    SET_LO8(eax, MEM8(0x6BCFEB));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 4) = ebx;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_002CBF0B; /* jle: less or equal (signed <=) */

loc_002CB8DD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 8;
    goto loc_002CB8F0;

    /* nop */
    edi = edi;

loc_002CB8F0: ;
    edx = MEM32(0x84A5F8);
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    eax = MEM32(ebp + edx + 0x568);
    ebp = ebp + edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ebp;
    if (TEST_Z(eax, eax)) goto loc_002CBEF4; /* je: equal / zero */

loc_002CB913: ;
    if (CMP_NE(MEM32(eax + 0x204), 0x10)) goto loc_002CB93D; /* jne: not equal / not zero */

loc_002CB91C: ;
    MEM32(eax + 0x204) = 0;
    ecx = MEM32(ebp + 0x568);
    edx = MEM32(ecx + 0x20C);
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_002CC0A0(); /* call 0x002CC0A0 */

loc_002CB93A: ;
    esp = esp + 4;

loc_002CB93D: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x204);
    if (TEST_NZ(ecx, ecx)) goto loc_002CB959; /* jne: not equal / not zero */

loc_002CB94D: ;
    MEM16(eax + 0x214) = LO16(ecx);
    goto loc_002CBEF4;

loc_002CB959: ;
    if (CMP_EQ(ecx, 1)) goto loc_002CBEF4; /* je: equal / zero */

loc_002CB962: ;
    if (CMP_G(ebx, MEM32(0x84A144))) { sub_002CBF1A(); return; } /* jg: greater (signed >) */

loc_002CB96E: ;
    if (CMP_NE(ecx, 0xB)) goto loc_002CB9F0; /* jne: not equal / not zero */

loc_002CB973: ;
    eax = ebx;
    eax = eax << 5;
    edx = MEM32(eax + 0x771C50);
    ecx = 1;
    if (CMP_NE(edx, ecx)) goto loc_002CB99F; /* jne: not equal / not zero */

loc_002CB987: ;
    edx = MEM32(eax + 0x771C60);
    if (CMP_LE(edx, MEM32(eax + 0x771C5C))) goto loc_002CB99F; /* jle: less or equal (signed <=) */

loc_002CB995: ;
    SET_LO8(edx, MEM8(eax + 0x771C64));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002CB9CF; /* je: equal / zero */

loc_002CB99F: ;
    MEM32(eax + 0x771C50) = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x771C54) = ecx;
    MEM8(eax + 0x771C58) = LO8(ecx);
    MEM8(eax + 0x771C59) = LO8(ecx);
    MEM8(eax + 0x771C5A) = LO8(ecx);
    MEM32(eax + 0x771C5C) = 0xF;
    MEM32(eax + 0x771C60) = ecx;

loc_002CB9CF: ;
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, 0);
    esi = ebp;
    MEM32(eax + 0x204) = 0xC;
    PUSH32(esp, 0); sub_001FF900(); /* call 0x001FF900 */

loc_002CB9E8: ;
    esp = esp + 4;
    goto loc_002CBEF4;

loc_002CB9F0: ;
    if (CMP_NE(ecx, 0xC)) goto loc_002CBA1F; /* jne: not equal / not zero */

loc_002CB9F5: ;
    PUSH32(esp, 0);
    esi = ebp;
    PUSH32(esp, 0); sub_001FF900(); /* call 0x001FF900 */

loc_002CB9FE: ;
    esp = esp + 4;
    ecx = ebx;
    PUSH32(esp, 0); sub_000FB970(); /* call 0x000FB970 */

loc_002CBA08: ;
    if (CMP_NE(eax, 0xFF)) goto loc_002CBEF4; /* jne: not equal / not zero */

loc_002CBA13: ;
    eax = ebx;
    PUSH32(esp, 0); sub_002CCD90(); /* call 0x002CCD90 */

loc_002CBA1A: ;
    goto loc_002CBEF4;

loc_002CBA1F: ;
    if (CMP_EQ(ecx, 0xF)) goto loc_002CBEF4; /* je: equal / zero */

loc_002CBA28: ;
    if (CMP_NE(ecx, 2)) goto loc_002CBDA6; /* jne: not equal / not zero */

loc_002CBA31: ;
    if (CMP_LE(MEM16(eax + 0x212), 0)) goto loc_002CBB52; /* jle: less or equal (signed <=) */

loc_002CBA3F: ;
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(eax + 0x212) = MEM16(eax + 0x212) - LO16(ecx);
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CBDDD; /* je: equal / zero */

loc_002CBA5A: ;
    SET_LO8(eax, MEM8(0x862C8B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CBA7A; /* je: equal / zero */

loc_002CBA63: ;
    SET_LO16(eax, MEM16(ebp + 0x60));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_002CBA6E: ;
    esp = esp + 4;
    if (CMP_LE(eax, 1)) goto loc_002CBDDD; /* jle: less or equal (signed <=) */

loc_002CBA7A: ;
    edx = MEM32(ebp + 0x568);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x212);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 5);
    eax = edx;
    eax = eax >> 0x1F;
    esi = edx + eax + 1;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0x637E1C;
    PUSH32(esp, 0); sub_0003C2E0(); /* call 0x0003C2E0 */

loc_002CBAA8: ;
    edi = eax;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0x30;
    PUSH32(esp, 0x5F5398);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002CBAC5: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x23C;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002CBAD8: ;
    eax = MEM32(0x84A144);
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_002CBB0B; /* je: equal / zero */

loc_002CBAE4: ;
    eax = MEM32(ebp + 0x564);
    if (TEST_Z(eax, eax)) goto loc_002CBB0B; /* je: equal / zero */

loc_002CBAEE: ;
    eax = ZX8(MEM8(eax + 0x2A8));
    eax = eax - 0;
    if ((eax == 0)) goto loc_002CBB04; /* je: equal / zero */

loc_002CBAFA: ;
    eax--;
    if ((eax != 0)) goto loc_002CBB0B; /* jne: not equal / not zero */

loc_002CBAFD: ;
    ecx = 0x145;
    goto loc_002CBB10;

loc_002CBB04: ;
    ecx = 0x55;
    goto loc_002CBB10;

loc_002CBB0B: ;
    ecx = 0x96;

loc_002CBB10: ;
    xmm0 = MEMF(0x648D40); /* movss */
    PUSH32(esp, 0); sub_001F2B30(); /* call 0x001F2B30 */

loc_002CBB1D: ;
    edx = esp + 0x228;
    PUSH32(esp, edx);
    SET_LO8(eax, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x140);
    SET_LO8(ecx, 0x81);
    MEM8(0x776171) = LO8(eax);
    MEM8(0x776170) = LO8(eax);
    MEM8(0x77616F) = LO8(eax);
    MEM8(0x77616E) = 0xB4;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_002CBB4A: ;
    esp = esp + 0xC;
    goto loc_002CBDDD;

loc_002CBB52: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002CBB6F; /* je: equal / zero */

loc_002CBB5C: ;
    if (CMP_EQ(MEM32(0x863D04), 1)) goto loc_002CBB7B; /* je: equal / zero */

loc_002CBB65: ;
    ecx = MEM32(eax + 0xBC);
    if (TEST_Z(ecx, ecx)) goto loc_002CBB7B; /* je: equal / zero */

loc_002CBB6F: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_002CC040(); /* call 0x002CC040 */

loc_002CBB76: ;
    goto loc_002CBDDD;

loc_002CBB7B: ;
    eax = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 0); sub_001F91E0(); /* call 0x001F91E0 */

loc_002CBB84: ;
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_00267330(); /* call 0x00267330 */

loc_002CBB8D: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CBC75; /* jne: not equal / not zero */

loc_002CBB95: ;
    esi = ebp;
    PUSH32(esp, 0); sub_00289400(); /* call 0x00289400 */

loc_002CBB9C: ;
    if (TEST_Z(eax, eax)) goto loc_002CBC75; /* je: equal / zero */

loc_002CBBA4: ;
    SET_LO8(eax, MEM8(0x862C8B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CBC75; /* je: equal / zero */

loc_002CBBB1: ;
    SET_LO16(eax, MEM16(ebp + 0x60));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_002CBBBC: ;
    esp = esp + 4;
    if (CMP_G(eax, 1)) goto loc_002CBC75; /* jg: greater (signed >) */

loc_002CBBC8: ;
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(edx, ecx)) goto loc_002CBC34; /* jle: less or equal (signed <=) */

loc_002CBBD9: ;
    eax = MEM32(0x84A5F8);
    esi = ZX16(MEM16(ebp + 0x60));
    eax = eax + 0x238;

loc_002CBBE7: ;
    if (CMP_EQ(ecx, esi)) goto loc_002CBC22; /* je: equal / zero */

loc_002CBBEB: ;
    edi = MEM32(eax + 0x330);
    if (TEST_Z(edi, edi)) goto loc_002CBC22; /* je: equal / zero */

loc_002CBBF5: ;
    ebx = MEM32(0x7FCB48);
    edi = 1;
    edi = edi << LO8(ecx);
    if (TEST_NZ(edi, ebx)) goto loc_002CBC1E; /* jne: not equal / not zero */

loc_002CBC06: ;
    ebx = MEM32(eax);
    ebx = MEM32(ebx);
    edi = MEM32(ebp + 0x238);
    (void)0; /* cmp ebx, MEM32(edi) - flags set for next jcc */
    ebx = MEM32(esp + 0x10);
    if (CMP_NE(ebx, MEM32(edi))) goto loc_002CBC22; /* jne: not equal / not zero */

loc_002CBC18: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    goto loc_002CBC22;

loc_002CBC1E: ;
    ebx = MEM32(esp + 0x10);

loc_002CBC22: ;
    ecx++;
    eax = eax + 0x6D0;
    if (CMP_L(ecx, edx)) goto loc_002CBBE7; /* jl: less (signed <) */

loc_002CBC2C: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_002CBC60; /* jne: not equal / not zero */

loc_002CBC34: ;
    eax = MEM32(ebp + 0x568);
    ecx = ebp;
    MEM32(eax + 0x204) = 0xF;
    PUSH32(esp, 0); sub_002CCCE0(); /* call 0x002CCCE0 */

loc_002CBC4B: ;
    SET_LO16(esi, MEM16(ebp + 0x60));
    PUSH32(esp, 3);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_002CBC58: ;
    esp = esp + 4;
    goto loc_002CBDDD;

loc_002CBC60: ;
    ecx = MEM32(ebp + 0x568);
    MEM32(ecx + 0x204) = 0xB;
    goto loc_002CBDDD;

loc_002CBC75: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x204) = 0xE;
    ecx = MEM32(ebp + 0x568);
    MEM16(ecx + 0x212) = LO16(eax);
    SET_LO8(eax, MEM8(0x849B80));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ZX16(MEM16(ebp + 0x60));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CBCBB; /* je: equal / zero */

loc_002CBCAA: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_002CBCBB; /* je: equal / zero */

loc_002CBCAF: ;
    eax = 4;
    PUSH32(esp, 0); sub_0021FFA0(); /* call 0x0021FFA0 */

loc_002CBCB9: ;
    goto loc_002CBD2A;

loc_002CBCBB: ;
    eax = MEM32(0x849AA4);
    if (TEST_NZ(eax, eax)) goto loc_002CBCEC; /* jne: not equal / not zero */

loc_002CBCC4: ;
    PUSH32(esp, 0); sub_00207A00(); /* call 0x00207A00 */

loc_002CBCC9: ;
    edx = MEM32(0x849AA4);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8238);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_002CBCE7: ;
    esp = esp + 0x10;
    goto loc_002CBD19;

loc_002CBCEC: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x5F8238);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00036E30(); /* call 0x00036E30 */

loc_002CBD04: ;
    eax = MEM32(0x849AA4);
    eax = MEM32(eax + 0x10);
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_002CBD19: ;
    MEM8(0x849AC0) = 1;
    MEM32(0x849ACC) = 7;

loc_002CBD2A: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CBD3E; /* jne: not equal / not zero */

loc_002CBD36: ;
    xmm0 = MEMF(0x7F9F48); /* movss */

loc_002CBD3E: ;
    (void)0; /* cmp MEM32(0x75E500), edi - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x75E500), edi)) goto loc_002CBD64; /* jne: not equal / not zero */

loc_002CBD4C: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648E64)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_002CBDDD; /* ja: above (unsigned >) */

loc_002CBD64: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB58;
    MEMF(0x75E504) = xmm0; /* movss */
    MEM32(0x75E500) = edi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002CBDA4: ;
    goto loc_002CBDDD;

loc_002CBDA6: ;
    if (CMP_NE(ecx, 7)) goto loc_002CBDCD; /* jne: not equal / not zero */

loc_002CBDAB: ;
    if (CMP_LE(MEM16(eax + 0x212), 0)) goto loc_002CBDC5; /* jle: less or equal (signed <=) */

loc_002CBDB5: ;
    SET_LO16(edx, MEM16(0x7FA20C));
    MEM16(eax + 0x212) = MEM16(eax + 0x212) - LO16(edx);
    goto loc_002CBDDD;

loc_002CBDC5: ;
    MEM32(eax + 0x204) = edi;
    goto loc_002CBDDD;

loc_002CBDCD: ;
    if (CMP_NE(ecx, 0xE)) goto loc_002CBDDD; /* jne: not equal / not zero */

loc_002CBDD2: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_002CBDDA: ;
    esp = esp + 8;

loc_002CBDDD: ;
    eax = MEM32(ebp + 0x568);
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(eax + 0x214) = MEM16(eax + 0x214) + LO16(ecx);
    edx = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(edx + 0x204), 0xE)) goto loc_002CBE47; /* je: equal / zero */

loc_002CBE00: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0004E000(); /* call 0x0004E000 */

loc_002CBE07: ;
    ecx = MEM32(eax + 8);
    if (TEST_NZ(HI8(ecx), 1)) goto loc_002CBE3A; /* jne: not equal / not zero */

loc_002CBE0F: ;
    PUSH32(esp, 3);
    eax = ebx;
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_002CBE18: ;
    esp = esp + 4;
    if (CMP_LE(eax, 1)) goto loc_002CBE3A; /* jle: less or equal (signed <=) */

loc_002CBE20: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 1)) goto loc_002CBE47; /* jne: not equal / not zero */

loc_002CBE2F: ;
    if (CMP_LE(MEM16(eax + 0x214), 0xB4)) goto loc_002CBE47; /* jle: less or equal (signed <=) */

loc_002CBE3A: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x210) = 1;

loc_002CBE47: ;
    SET_LO8(eax, MEM8(0x849818));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_002CBE5D; /* jns: not sign (positive) */

loc_002CBE50: ;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x210) = 0;

loc_002CBE5D: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edi = esp + 0x20;
    ebx = esp + 0x28;
    esi = ebp;
    PUSH32(esp, 0); sub_002CE520(); /* call 0x002CE520 */

loc_002CBE71: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000FCFC0(); /* call 0x000FCFC0 */

loc_002CBE8B: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x204);
    esp = esp + 0x10;
    if (CMP_NE(ecx, 5)) goto loc_002CBED3; /* jne: not equal / not zero */

loc_002CBE9F: ;
    SET_LO8(ecx, MEM8(eax + 0x210));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002CBEC9; /* jne: not equal / not zero */

loc_002CBEA9: ;
    SET_LO16(ecx, MEM16(0x7FA20C));
    MEM16(eax + 0x212) = MEM16(eax + 0x212) - LO16(ecx);
    edx = MEM32(ebp + 0x568);
    if (CMP_G(MEM16(edx + 0x212), 0)) goto loc_002CBED3; /* jg: greater (signed >) */

loc_002CBEC7: ;
    eax = edx;

loc_002CBEC9: ;
    MEM32(eax + 0x204) = 8;

loc_002CBED3: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(ecx + 0x204), 9)) goto loc_002CBEEB; /* jne: not equal / not zero */

loc_002CBEE2: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_002CCD90(); /* call 0x002CCD90 */

loc_002CBEEB: ;
    ebx = MEM32(esp + 0x10);
    edi = 8;

loc_002CBEF4: ;
    eax = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    ebx++;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(ebx, eax)) goto loc_002CB8F0; /* jl: less (signed <) */

loc_002CBF08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002CBF0B: ;
    MEM8(0x849818) = MEM8(0x849818) & 0x7F;
    POP32(esp, ebx);

loc_002CBF13: ;
    esp = esp + 0x418;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002CC040
 * Original: 0x002CC040 - 0x002CC093 (83 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CC040(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002CC040: ;
    eax = ZX16(MEM16(ecx + 0x60));
    ecx = MEM32(ecx + 0x568);
    MEM32(ecx + 0x204) = 3;
    if (CMP_G(eax, MEM32(0x84A144))) goto loc_002CC092; /* jg: greater (signed >) */

loc_002CC05C: ;
    xmm0 = MEMF(0x648E54); /* movss */
    MEMF(eax * 4 + 0x771C18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax * 4 + 0x771C28) = xmm0; /* movss */
    MEMF(eax * 8 + 0x771BF8) = xmm0; /* movss */
    MEMF(eax * 8 + 0x771BFC) = xmm0; /* movss */
    MEM8(eax + 0x771C44) = 1;

loc_002CC092: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CC0A0
 * Original: 0x002CC0A0 - 0x002CC6B3 (1555 bytes, 370 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CC0A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CC0A0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_002CC6AE; /* je: equal / zero */

loc_002CC0B4: ;
    ecx = ZX16(MEM16(esi + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_002CC6AE; /* jge: greater or equal (signed >=) */

loc_002CC0CB: ;
    SET_LO8(ecx, MEM8(eax + 0x2BC));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edx = MEM32(esp + 0x28);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002CC101; /* je: equal / zero */

loc_002CC0D9: ;
    if (TEST_Z(edx, edx)) goto loc_002CC6AE; /* je: equal / zero */

loc_002CC0E1: ;
    if (CMP_EQ(edx, 7)) goto loc_002CC6AE; /* je: equal / zero */

loc_002CC0EA: ;
    MEM8(eax + 0x2BC) = 0;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0xA0) = 0;

loc_002CC101: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x204);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_002CC130; /* je: equal / zero */

loc_002CC112: ;
    if (CMP_NE(edx, 9)) goto loc_002CC6AD; /* jne: not equal / not zero */

loc_002CC11B: ;
    if (CMP_EQ(MEM32(eax + 0x208), edx)) goto loc_002CC6AD; /* je: equal / zero */

loc_002CC127: ;
    edi = 1;
    ecx = edi;
    goto loc_002CC137;

loc_002CC130: ;
    ecx = 0; /* xor self */
    edi = 1;

loc_002CC137: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax + 0x208) = edx;
    if (TEST_NZ(ecx, ecx)) goto loc_002CC14E; /* jne: not equal / not zero */

loc_002CC141: ;
    eax = esp + 0x10;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_002CC14E: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 3;
    PUSH32(esp, ebx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x2C) = esi;
    MEM8(esp + 0x30) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_002CC175: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(edx, MEM8(eax + 0x2DA));
    xmm0 = MEMF(0x648D20); /* movss */
    ecx = 0; /* xor self */
    esp = esp + 0xC;
    ebp = ebp | 0xFFFFFFFFu;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM8(0x7FCB46) = LO8(ecx);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002CC1B0; /* je: equal / zero */

loc_002CC1A9: ;
    MEM8(0x7FCB46) = 2;

loc_002CC1B0: ;
    eax = MEM32(esp + 0x34);
    if (CMP_A(eax, 0x1A)) goto loc_002CC3F6; /* ja: above (unsigned >) */

loc_002CC1BD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2CC6B4); /* switch: 27 entries, 27 targets */
    if (_jt == 0x002CC1C4u) goto loc_002CC1C4;
    if (_jt == 0x002CC1CEu) goto loc_002CC1CE;
    if (_jt == 0x002CC1D8u) goto loc_002CC1D8;
    if (_jt == 0x002CC1E2u) goto loc_002CC1E2;
    if (_jt == 0x002CC1ECu) goto loc_002CC1EC;
    if (_jt == 0x002CC21Cu) goto loc_002CC21C;
    if (_jt == 0x002CC226u) goto loc_002CC226;
    if (_jt == 0x002CC230u) goto loc_002CC230;
    if (_jt == 0x002CC23Au) goto loc_002CC23A;
    if (_jt == 0x002CC244u) goto loc_002CC244;
    if (_jt == 0x002CC26Eu) goto loc_002CC26E;
    if (_jt == 0x002CC278u) goto loc_002CC278;
    if (_jt == 0x002CC289u) goto loc_002CC289;
    if (_jt == 0x002CC29Eu) goto loc_002CC29E;
    if (_jt == 0x002CC2B3u) goto loc_002CC2B3;
    if (_jt == 0x002CC2C7u) goto loc_002CC2C7;
    if (_jt == 0x002CC2F3u) goto loc_002CC2F3;
    if (_jt == 0x002CC2FDu) goto loc_002CC2FD;
    if (_jt == 0x002CC311u) goto loc_002CC311;
    if (_jt == 0x002CC325u) goto loc_002CC325;
    if (_jt == 0x002CC332u) goto loc_002CC332;
    if (_jt == 0x002CC342u) goto loc_002CC342;
    if (_jt == 0x002CC36Eu) goto loc_002CC36E;
    if (_jt == 0x002CC3A8u) goto loc_002CC3A8;
    if (_jt == 0x002CC3AFu) goto loc_002CC3AF;
    if (_jt == 0x002CC3B6u) goto loc_002CC3B6;
    if (_jt == 0x002CC3E9u) goto loc_002CC3E9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002CC1C4: ;
    ebp = 0x2D4;
    goto loc_002CC3F2;

loc_002CC1CE: ;
    ebp = 0x2D6;
    goto loc_002CC3F2;

loc_002CC1D8: ;
    ebp = 0x58;
    goto loc_002CC3F2;

loc_002CC1E2: ;
    ebp = 0x13;
    goto loc_002CC3F2;

loc_002CC1EC: ;
    MEM32(esp + 0x20) = 0x715;
    MEM32(esp + 0x24) = 0x71B;
    MEM32(esp + 0x28) = 0x717;
    MEM32(esp + 0x2C) = 0x719;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002CC211: ;
    eax = eax & ebx;
    ebp = MEM32(esp + eax * 4 + 0x20);
    goto loc_002CC3F2;

loc_002CC21C: ;
    ebp = 0x755;
    goto loc_002CC3F2;

loc_002CC226: ;
    ebp = 0x753;
    goto loc_002CC3F2;

loc_002CC230: ;
    ebp = 0x757;
    goto loc_002CC3F2;

loc_002CC23A: ;
    ebp = 0x759;
    goto loc_002CC3F2;

loc_002CC244: ;
    MEM32(esp + 0x20) = 0x715;
    MEM32(esp + 0x24) = 0x71B;
    MEM32(esp + 0x28) = 0x719;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002CC261: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ebp = MEM32(esp + edx * 4 + 0x20);
    goto loc_002CC3F2;

loc_002CC26E: ;
    ebp = 7;
    goto loc_002CC3F2;

loc_002CC278: ;
    ebp = 0x28;
    MEM8(0x7FCB46) = 1;
    goto loc_002CC3F6;

loc_002CC289: ;
    ebp = 0x63F;
    MEM32(esp + 0x14) = edi;
    MEM8(0x7FCB46) = 1;
    goto loc_002CC3F6;

loc_002CC29E: ;
    ebp = 0x24;
    MEM32(esp + 0x14) = edi;
    MEM8(0x7FCB46) = 1;
    goto loc_002CC3F6;

loc_002CC2B3: ;
    ebp = 0x8A6;
    MEM32(esp + 0x14) = edi;
    MEM8(0x7FCB46) = LO8(ebx);
    goto loc_002CC3F6;

loc_002CC2C7: ;
    eax = MEM32(esi + 0x64);
    if (CMP_EQ(eax, edi)) goto loc_002CC2E5; /* je: equal / zero */

loc_002CC2CE: ;
    if (CMP_EQ(eax, 0x15)) goto loc_002CC2E5; /* je: equal / zero */

loc_002CC2D3: ;
    if (CMP_EQ(MEM8(esi + 0xA1), LO8(ebx))) goto loc_002CC2E5; /* je: equal / zero */

loc_002CC2DB: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CC2EA; /* je: equal / zero */

loc_002CC2E5: ;
    ebp = 0x170;

loc_002CC2EA: ;
    MEM32(esp + 0x14) = edi;
    goto loc_002CC3F6;

loc_002CC2F3: ;
    ebp = 0x16F;
    goto loc_002CC3F2;

loc_002CC2FD: ;
    ebp = 0x170;
    MEM32(esp + 0x14) = edi;
    MEM8(0x7FCB46) = LO8(ebx);
    goto loc_002CC3F6;

loc_002CC311: ;
    ebp = 0x170;
    MEM32(esp + 0x14) = ebx;
    MEM8(0x7FCB46) = LO8(ebx);
    goto loc_002CC3F6;

loc_002CC325: ;
    MEM32(esp + 0x14) = 2;
    goto loc_002CC3F6;

loc_002CC332: ;
    ebp = 0x2F;
    MEM8(0x7FCB46) = LO8(ebx);
    goto loc_002CC3F2;

loc_002CC342: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = 0x1E;
    MEMF(esi + 0x640) = xmm0; /* movss */
    MEMF(esi + 0x644) = xmm0; /* movss */
    MEMF(esi + 0x648) = xmm0; /* movss */
    MEM8(esi + 0x1B5) = 0;
    goto loc_002CC3EE;

loc_002CC36E: ;
    eax = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xB51;
    ebp = 0x63F;
    MEM32(esp + 0x34) = edi;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002CC39F: ;
    MEM8(0x7FCB46) = 2;
    goto loc_002CC3F6;

loc_002CC3A8: ;
    ebp = 0xF6;
    goto loc_002CC3EE;

loc_002CC3AF: ;
    ebp = 0x5C8;
    goto loc_002CC3EE;

loc_002CC3B6: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002CC3BB: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esi + 0x78;
    PUSH32(esp, edx);
    eax = eax & 7;
    ebp = MEM32(eax * 4 + 0x75EA1C);
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0);
    edi = 0; /* xor self */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000B9F10(); /* call 0x000B9F10 */

loc_002CC3DF: ;
    esp = esp + 8;
    edi = 1;
    goto loc_002CC3F6;

loc_002CC3E9: ;
    ebp = 0x667;

loc_002CC3EE: ;
    MEM32(esp + 0x14) = edi;

loc_002CC3F2: ;
    MEM32(esp + 0x10) = edi;

loc_002CC3F6: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xE)) goto loc_002CC410; /* jne: not equal / not zero */

loc_002CC3FF: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CC410; /* je: equal / zero */

loc_002CC409: ;
    MEM8(esi + 0x135) = 0;

loc_002CC410: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_002CC431; /* je: equal / zero */

loc_002CC420: ;
    ecx = MEM32(esi + 0x3D8);
    if (TEST_Z(ecx, ecx)) goto loc_002CC431; /* je: equal / zero */

loc_002CC42A: ;
    ebp = ebp | 0xFFFFFFFFu;
    MEM32(esp + 0x14) = edi;

loc_002CC431: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002CC45B; /* je: equal / zero */

loc_002CC43B: ;
    if (TEST_Z(eax, eax)) goto loc_002CC45B; /* je: equal / zero */

loc_002CC43F: ;
    ecx = MEM32(eax + 0x648);
    if (TEST_Z(ecx, ecx)) goto loc_002CC45B; /* je: equal / zero */

loc_002CC449: ;
    edx = MEM32(eax + 0xBC);
    if (TEST_NZ(edx, edx)) goto loc_002CC45B; /* jne: not equal / not zero */

loc_002CC453: ;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_002CC45B: ;
    eax = eax | 0xFFFFFFFFu;
    if (CMP_EQ(ebp, eax)) goto loc_002CC4BA; /* je: equal / zero */

loc_002CC462: ;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x474) = eax;
    edx = MEM32(esi + 0x568);
    MEM32(edx + 0x478) = eax;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x568);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEM32(ecx + 0x3DC) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    edx = ebp;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002CC4A1: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CC4BA; /* je: equal / zero */

loc_002CC4AD: ;
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x48D) = 1;

loc_002CC4BA: ;
    edi = MEM32(esi + 0x200);
    edx = MEM32(esi + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    SET_LO8(eax, 0xFF);
    MEM8(esi + 0x234) = LO8(eax);
    MEM8(esi + 0x20C) = LO8(eax);
    MEM8(esi + 0x180) = LO8(eax);
    MEM16(esi + 0x3AE) = LO16(ecx);
    edi = edi | 0x200;
    MEM32(esi + 0x200) = edi;
    MEMF(esi + 0x110) = xmm0; /* movss */
    MEM16(esi + 0x1EC) = LO16(ecx);
    MEM16(esi + 0x1EE) = LO16(ecx);
    MEM16(edx + 0x5E) = LO16(ecx);
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x2D2) = LO8(ecx);
    edx = MEM32(esi + 0x568);
    MEMF(edx + 0x30C) = xmm0; /* movss */
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x70) = LO8(ecx);
    eax = MEM32(esi + 0x564);
    if (CMP_EQ(eax, ecx)) goto loc_002CC54D; /* je: equal / zero */

loc_002CC539: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002CC54D; /* je: equal / zero */

loc_002CC543: ;
    ecx = MEM32(eax + 4);
    MEM8(ecx + 0x8CF) = 0;

loc_002CC54D: ;
    SET_LO8(eax, MEM8(esi + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CC55C; /* je: equal / zero */

loc_002CC557: ;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_002CC55C: ;
    ebx = esi;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_002CC563: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_002CC569: ;
    edi = MEM32(esp + 0x18);
    esp = esp + 4;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(edi, edi)) goto loc_002CC58F; /* je: equal / zero */

loc_002CC576: ;
    if (CMP_EQ(edi, 3)) goto loc_002CC58F; /* je: equal / zero */

loc_002CC57B: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    eax = 0x78;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_002CC58A: ;
    esp = esp + 4;
    goto loc_002CC59F;

loc_002CC58F: ;
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x204) = 1;

loc_002CC59F: ;
    if (CMP_NE(edi, 2)) goto loc_002CC5B6; /* jne: not equal / not zero */

loc_002CC5A4: ;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x204) = 0xB;
    goto loc_002CC5C4;

loc_002CC5B6: ;
    if (CMP_NE(edi, 3)) goto loc_002CC5C4; /* jne: not equal / not zero */

loc_002CC5BB: ;
    eax = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0); sub_002CCD90(); /* call 0x002CCD90 */

loc_002CC5C4: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CC5DA; /* jne: not equal / not zero */

loc_002CC5CD: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_002CC662; /* jne: not equal / not zero */

loc_002CC5DA: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_002CC609; /* jne: not equal / not zero */

loc_002CC5E9: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    edx = MEM32(esi + 0x568);
    MEMF(edx + 0x5F4) = xmm0; /* movss */

loc_002CC609: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0xBC);
    if (TEST_NZ(ecx, ecx)) goto loc_002CC650; /* jne: not equal / not zero */

loc_002CC619: ;
    if (CMP_EQ(MEM32(esp + 0x2C), 0x14)) goto loc_002CC635; /* je: equal / zero */

loc_002CC620: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002CC627: ;
    edx = eax;
    eax = esi;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_002CC635: ;
    eax = MEM32(esi + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_002CC645: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_002CC64D: ;
    esp = esp + 8;

loc_002CC650: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    edi = MEM32(edx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_002CC662: ;
    eax = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_002CC6AD; /* jne: not equal / not zero */

loc_002CC66A: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_002CC6AD; /* jne: not equal / not zero */

loc_002CC673: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002CC67D: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002CC698: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_002CC6AA: ;
    esp = esp + 8;

loc_002CC6AD: ;
    POP32(esp, edi);

loc_002CC6AE: ;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002CC720
 * Original: 0x002CC720 - 0x002CC80D (237 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CC720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CC720: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    esp = esp - 0x2C;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    ebx = MEM32(ebp + 0x564);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CC75A; /* je: equal / zero */

loc_002CC739: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x216) = 0;
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x1FC) = 0;
    MEM8(0x84A5E0) = 1;

loc_002CC75A: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CC7B6; /* je: equal / zero */

loc_002CC762: ;
    xmm0 = MEMF(ebp + 0x78); /* movss */
    SET_LO16(edx, MEM16(ebp + 0x170));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x80); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x78); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x80); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM16(esp + 0x20) = LO16(edx);

loc_002CC7B6: ;
    eax = MEM32(ebp + 0x568);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x2D8);
    SET_LO8(edx, MEM8(eax + 0x2E4));
    esi = ZX16(MEM16(ebp + 0x60));
    MEM32(esp + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x57C));
    MEM8(esp + 0x13) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x216));
    MEM8(esp + 0x12) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x7819D5));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x2E3));
    MEM32(esp + 0x14) = esi;
    MEM8(esp + 0x11) = LO8(edx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002CC80D(); return; } /* je: equal / zero */

loc_002CC801: ;
    SET_LO8(edx, MEM8(eax + 0x1FC));
    MEM8(esp + 0x40) = LO8(edx);
    g_seh_ebp = ebp; sub_002CC812(); return; /* tail jmp 0x002CC812 */

}

/**
 * sub_002CCCE0
 * Original: 0x002CCCE0 - 0x002CCD83 (163 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCCE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CCCE0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CCCF6; /* jne: not equal / not zero */

loc_002CCCE9: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_002CCD82; /* jne: not equal / not zero */

loc_002CCCF6: ;
    if (CMP_EQ(MEM32(ecx + 0x64), 5)) goto loc_002CCD82; /* je: equal / zero */

loc_002CCD00: ;
    if (CMP_NE(MEM8(ecx + 0xB4), 0xFF)) goto loc_002CCD82; /* jne: not equal / not zero */

loc_002CCD09: ;
    eax = (int32_t)MEMF(ecx + 0xDC); /* cvttss2si */
    if (CMP_GE(eax, 3)) goto loc_002CCD82; /* jge: greater or equal (signed >=) */

loc_002CCD16: ;
    eax = MEM32(ecx + 0xA4);
    if (CMP_A(eax, 0x18A)) goto loc_002CCD42; /* ja: above (unsigned >) */

loc_002CCD23: ;
    if (CMP_EQ(eax, 0x18A)) goto loc_002CCD7B; /* je: equal / zero */

loc_002CCD25: ;
    if (CMP_A(eax, 0x59)) goto loc_002CCD3A; /* ja: above (unsigned >) */

loc_002CCD2A: ;
    if (CMP_AE(eax, 0x58)) goto loc_002CCD7B; /* jae: above or equal (unsigned >=) */

loc_002CCD2F: ;
    if (CMP_EQ(eax, 7)) goto loc_002CCD7B; /* je: equal / zero */

loc_002CCD34: ;
    if (CMP_EQ(eax, 0x13)) goto loc_002CCD7B; /* je: equal / zero */

loc_002CCD39: ;
    esp += 4; return; /* ret */

loc_002CCD3A: ;
    if (CMP_EQ(eax, 0x16F)) goto loc_002CCD7B; /* je: equal / zero */

loc_002CCD41: ;
    esp += 4; return; /* ret */

loc_002CCD42: ;
    if (CMP_A(eax, 0x71C)) goto loc_002CCD6D; /* ja: above (unsigned >) */

loc_002CCD49: ;
    if (CMP_AE(eax, 0x715)) goto loc_002CCD7B; /* jae: above or equal (unsigned >=) */

loc_002CCD50: ;
    if (CMP_A(eax, 0x5D0)) goto loc_002CCD82; /* ja: above (unsigned >) */

loc_002CCD57: ;
    if (CMP_AE(eax, 0x5C7)) goto loc_002CCD7B; /* jae: above or equal (unsigned >=) */

loc_002CCD5E: ;
    if (CMP_B(eax, 0x49B)) goto loc_002CCD82; /* jb: below (unsigned <) */

loc_002CCD65: ;
    if (CMP_BE(eax, 0x49E)) goto loc_002CCD7B; /* jbe: below or equal (unsigned <=) */

loc_002CCD6C: ;
    esp += 4; return; /* ret */

loc_002CCD6D: ;
    if (CMP_B(eax, 0x753)) goto loc_002CCD82; /* jb: below (unsigned <) */

loc_002CCD74: ;
    if (CMP_A(eax, 0x75A)) goto loc_002CCD82; /* ja: above (unsigned >) */

loc_002CCD7B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001A7290(); /* call 0x001A7290 */

loc_002CCD81: ;
    POP32(esp, ecx);

loc_002CCD82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CCD90
 * Original: 0x002CCD90 - 0x002CD0F6 (870 bytes, 245 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CCD90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CCD90: ;
    esp = esp - 0x134;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x6D0);
    ebp = ebp + ecx;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0xC) = ebp;
    MEM8(esp + 0xB) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CCE39; /* je: equal / zero */

loc_002CCDBC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002CCDC2: ;
    if (TEST_NZ(eax, eax)) goto loc_002CCE39; /* jne: not equal / not zero */

loc_002CCDC6: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    /* nop */

loc_002CCDD0: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x862CCB);
    if (CMP_EQ(edx, ecx)) goto loc_002CCDE3; /* je: equal / zero */

loc_002CCDDB: ;
    eax++;
    if (CMP_L(eax, 2)) goto loc_002CCDD0; /* jl: less (signed <) */

loc_002CCDE1: ;
    goto loc_002CCE39;

loc_002CCDE3: ;
    eax++;
    if ((eax == 0)) goto loc_002CCE39; /* je: equal / zero */

loc_002CCDE6: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(eax + 0x204), 0xE)) goto loc_002CD0ED; /* je: equal / zero */

loc_002CCDF9: ;
    ecx = MEM32(0x849ACC);
    edx = MEM32(ecx * 4 + 0x75E9E4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x637BA4);
    eax = esp + 0x18;
    PUSH32(esp, 0x12B);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002CCE1B: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CCE39; /* je: equal / zero */

loc_002CCE27: ;
    eax = MEM32(0x849ACC);
    if (TEST_Z(eax, eax)) goto loc_002CCE39; /* je: equal / zero */

loc_002CCE30: ;
    eax = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 0); sub_001F91E0(); /* call 0x001F91E0 */

loc_002CCE39: ;
    eax = MEM32(ebp + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_002CCE4F; /* je: equal / zero */

loc_002CCE45: ;
    ecx = MEM32(eax + 0x640);
    if (TEST_NZ(ecx, ecx)) goto loc_002CCE87; /* jne: not equal / not zero */

loc_002CCE4F: ;
    if (TEST_NZ(MEM8(0x849818), 1)) goto loc_002CCE87; /* jne: not equal / not zero */

loc_002CCE58: ;
    edi = 0; /* xor self */
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_002671A0(); /* call 0x002671A0 */

loc_002CCE63: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CCE76; /* jne: not equal / not zero */

loc_002CCE67: ;
    ecx = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(ecx + 0xBC), 1)) goto loc_002CCE87; /* jne: not equal / not zero */

loc_002CCE76: ;
    PUSH32(esp, 5);
    eax = 1;
    esi = ebx;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_002CCE84: ;
    esp = esp + 4;

loc_002CCE87: ;
    SET_LO16(eax, MEM16(ebp + 0x60));
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_002CCE92: ;
    esp = esp + 4;
    ecx = ebp;
    esi = eax;
    PUSH32(esp, 0); sub_002CCCE0(); /* call 0x002CCCE0 */

loc_002CCE9E: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CCEB0; /* jne: not equal / not zero */

loc_002CCEA7: ;
    SET_LO8(eax, MEM8(0x849B80));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CCEF9; /* je: equal / zero */

loc_002CCEB0: ;
    if (CMP_G(esi & esi, 0)) goto loc_002CCF01; /* jg: greater (signed >) */

loc_002CCEB4: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0xBC);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_002CCEF9; /* je: equal / zero */

loc_002CCEC9: ;
    esi = ebp;
    MEM8(esp + 0x13) = 1;
    PUSH32(esp, 0); sub_00289400(); /* call 0x00289400 */

loc_002CCED5: ;
    if (TEST_NZ(eax, eax)) goto loc_002CCEE7; /* jne: not equal / not zero */

loc_002CCED9: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), edi)) goto loc_002CCF01; /* jne: not equal / not zero */

loc_002CCEE7: ;
    eax = MEM32(0x7FCB48);
    ecx = ebx;
    edi = edi << LO8(ecx);
    eax = eax | edi;
    MEM32(0x7FCB48) = eax;
    goto loc_002CCF01;

loc_002CCEF9: ;
    if (CMP_LE(esi & esi, 0)) goto loc_002CD049; /* jle: less or equal (signed <=) */

loc_002CCF01: ;
    eax = (uint32_t)(int32_t)SMEM8(0x74A4D9);
    PUSH32(esp, 6);
    esi = ebx;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_002CCF11: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM16(ebp + 0x1B8) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CCF33; /* jne: not equal / not zero */

loc_002CCF26: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_002CCFE5; /* jne: not equal / not zero */

loc_002CCF33: ;
    SET_LO8(eax, MEM8(0x776541));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CCFCA; /* jne: not equal / not zero */

loc_002CCF40: ;
    SET_LO8(ebx, MEM8(esp + 0x13));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002CCF77; /* je: equal / zero */

loc_002CCF4D: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = MEM32(0x84A1AC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    MEM32(ecx + edx + 0x10) = 0xFFFF;
    eax = ZX16(MEM16(ebp + 0x60));
    ecx = MEM32(0x84A1AC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    MEM32(eax + ecx + 0xC) = 0x42;

loc_002CCF77: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), 0xD)) goto loc_002CCF94; /* jne: not equal / not zero */

loc_002CCF86: ;
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_002CCF94; /* jne: not equal / not zero */

loc_002CCF8F: ;
    MEM8(esp + 0x14) = 1;

loc_002CCF94: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002CC720(); /* call 0x002CC720 */

loc_002CCFA7: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002CD0EB; /* je: equal / zero */

loc_002CCFB2: ;
    eax = MEM32(ebp + 0x568);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 0x38D) = 1;
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 4; return; /* ret */

loc_002CCFCA: ;
    ecx = MEM32(ebp + 0x568);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x204) = 0xA;
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 4; return; /* ret */

loc_002CCFE5: ;
    edx = MEM32(0x84B290);
    (void)0; /* test MEM8(edx + 0x19), 4 - flags set for next jcc */
    MEM8(0x7FCB47) = 1;
    if (TEST_NZ(MEM8(edx + 0x19), 4)) goto loc_002CD021; /* jne: not equal / not zero */

loc_002CCFF8: ;
    eax = MEM32(0x84B118);
    if (TEST_Z(eax, eax)) goto loc_002CD021; /* je: equal / zero */

loc_002CD001: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    esi = 0x22;
    PUSH32(esp, 0); sub_002A94A0(); /* call 0x002A94A0 */

loc_002CD013: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 4; return; /* ret */

loc_002CD021: ;
    eax = ZX8(MEM8(0x84B250));
    esi = (uint32_t)(int32_t)SMEM8(0x84B248);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_002A94A0(); /* call 0x002A94A0 */

loc_002CD03B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 4; return; /* ret */

loc_002CD049: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CD09A; /* jne: not equal / not zero */

loc_002CD052: ;
    eax = (uint32_t)(int32_t)SMEM8(0x74A4D9);
    PUSH32(esp, 6);
    esi = ebx;
    MEM8(0x7FCB47) = 1;
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_002CD069: ;
    eax = (uint32_t)(int32_t)SMEM8(0x74A4D8);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0032CF50(); /* call 0x0032CF50 */

loc_002CD077: ;
    MEM8(0x801A31) = 1;
    PUSH32(esp, 0); sub_0035DB60(); /* call 0x0035DB60 */

loc_002CD083: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    esi = 0x18;
    PUSH32(esp, 0); sub_002A94A0(); /* call 0x002A94A0 */

loc_002CD095: ;
    esp = esp + 0x18;
    goto loc_002CD0BF;

loc_002CD09A: ;
    edx = MEM32(0x7FCB54);
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(0x7FCB48);
    edx = edx | eax;
    ecx = ecx | eax;
    MEM32(0x7FCB54) = edx;
    MEM32(0x7FCB48) = ecx;

loc_002CD0BF: ;
    ebp = MEM32(ebp + 0x568);
    eax = MEM32(ebp + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_002CD0D5; /* jne: not equal / not zero */

loc_002CD0CF: ;
    MEM8(0x6BCFED) = MEM8(0x6BCFED) - 1;

loc_002CD0D5: ;
    SET_LO8(eax, MEM8(0x7819D4));
    SET_LO8(eax, LO8(eax) - 1);
    MEM32(ebp + 0x204) = 0xA;
    MEM8(0x7819D4) = LO8(eax);

loc_002CD0EB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002CD0ED: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 4; return; /* ret */

}

/**
 * sub_002CD100
 * Original: 0x002CD100 - 0x002CDF6B (3691 bytes, 1013 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CD100(void)
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

loc_002CD100: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x68);
    (void)0; /* cmp eax, 0x47 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x47)) goto loc_002CD37D; /* ja: above (unsigned >) */

loc_002CD117: ;
    if (CMP_EQ(eax, 0x47)) goto loc_002CD367; /* je: equal / zero */

loc_002CD11D: ;
    eax = eax - 5;
    if (CMP_A(eax, 0x3F)) goto loc_002CDF61; /* ja: above (unsigned >) */

loc_002CD129: ;
    eax = ZX8(MEM8(eax + 0x2CDF98));
    { uint32_t _jt = MEM32(eax * 4 + 0x2CDF6C); /* switch: 11 entries, 11 targets */
    if (_jt == 0x002CD137u) goto loc_002CD137;
    if (_jt == 0x002CD148u) goto loc_002CD148;
    if (_jt == 0x002CD17Eu) goto loc_002CD17E;
    if (_jt == 0x002CD196u) goto loc_002CD196;
    if (_jt == 0x002CD1B1u) goto loc_002CD1B1;
    if (_jt == 0x002CD309u) goto loc_002CD309;
    if (_jt == 0x002CD322u) goto loc_002CD322;
    if (_jt == 0x002CD6E8u) goto loc_002CD6E8;
    if (_jt == 0x002CDB7Bu) goto loc_002CDB7B;
    if (_jt == 0x002CDF22u) goto loc_002CDF22;
    if (_jt == 0x002CDF61u) goto loc_002CDF61;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002CD137: ;
    edx = ebp;
    PUSH32(esp, 0); sub_001682E0(); /* call 0x001682E0 */

loc_002CD13E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD148: ;
    eax = MEM32(ebp + 0x534);
    if (TEST_NZ(eax, eax)) goto loc_002CD165; /* jne: not equal / not zero */

loc_002CD152: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 6)) goto loc_002CD165; /* je: equal / zero */

loc_002CD15C: ;
    if (CMP_NE(eax, 0x3B)) goto loc_002CDF61; /* jne: not equal / not zero */

loc_002CD165: ;
    PUSH32(esp, 0xFF);
    eax = ebp;
    PUSH32(esp, 0); sub_0014CA50(); /* call 0x0014CA50 */

loc_002CD171: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD17E: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00113D60(); /* call 0x00113D60 */

loc_002CD189: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD196: ;
    xmm0 = MEMF(0x64938C); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000E4770(); /* call 0x000E4770 */

loc_002CD1A4: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD1B1: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00181CF0(); /* call 0x00181CF0 */

loc_002CD1BC: ;
    esi = ebp + 0x78;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = eax;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    esp = esp + 8;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_002CD1F1: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ebx = 0x60;
    if (CMP_EQ(eax, ecx)) goto loc_002CD20C; /* je: equal / zero */

loc_002CD1FF: ;
    /* nop */

loc_002CD200: ;
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_002CD20E; /* je: equal / zero */

loc_002CD205: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_002CD200; /* jne: not equal / not zero */

loc_002CD20C: ;
    eax = ecx;

loc_002CD20E: ;
    if (CMP_NE(eax, ecx)) goto loc_002CD216; /* jne: not equal / not zero */

loc_002CD212: ;
    eax = 0; /* xor self */
    goto loc_002CD218;

loc_002CD216: ;
    eax = MEM32(eax);

loc_002CD218: ;
    edi = MEM32(eax);
    if (TEST_Z(edi, edi)) goto loc_002CD27D; /* je: equal / zero */

loc_002CD21E: ;
    SET_LO8(eax, MEM8(edi + 6));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CD241; /* jne: not equal / not zero */

loc_002CD225: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CD241; /* jne: not equal / not zero */

loc_002CD22E: ;
    eax = 0x14;
    MEM16(0x743E3E) = LO16(eax);
    MEM16(0x743E0E) = LO16(eax);
    goto loc_002CD277;

loc_002CD241: ;
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002CD24F: ;
    MEM16(0x743E3E) = LO16(eax);
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002CD263: ;
    MEM16(0x743E0E) = LO16(eax);
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002CD277: ;
    MEM16(0x744B5E) = LO16(eax);

loc_002CD27D: ;
    eax = MEM32(0x7FDBA8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax++;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(0x7FDBA8) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0x16);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(0x7FDBAC) = 1;
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_002CD2B0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x15);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_002CD2D1: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    esp = esp + 0x58;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_002CD2F5: ;
    esp = esp + 0x2C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x7FDBAC) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD309: ;
    PUSH32(esp, 0xFF);
    ebx = ebp;
    PUSH32(esp, 0); sub_000AFA70(); /* call 0x000AFA70 */

loc_002CD315: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD322: ;
    PUSH32(esp, 0x122);
    eax = ebp;
    PUSH32(esp, 0); sub_00135AC0(); /* call 0x00135AC0 */

loc_002CD32E: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = ebp + 0x78;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_000B41A0(); /* call 0x000B41A0 */

loc_002CD344: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002CD349: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 5;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B6F30(); /* call 0x000B6F30 */

loc_002CD35A: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD367: ;
    PUSH32(esp, ebp);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    PUSH32(esp, 0); sub_00138B90(); /* call 0x00138B90 */

loc_002CD370: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD37D: ;
    if (CMP_A(eax, 0x83)) goto loc_002CDB57; /* ja: above (unsigned >) */

loc_002CD388: ;
    if (CMP_EQ(eax, 0x83)) goto loc_002CDB19; /* je: equal / zero */

loc_002CD38E: ;
    eax = eax - 0x4A;
    if (CMP_A(eax, 0x35)) goto loc_002CDF61; /* ja: above (unsigned >) */

loc_002CD39A: ;
    edx = ZX8(MEM8(eax + 0x2CDFF4));
    { uint32_t _jt = MEM32(edx * 4 + 0x2CDFD8); /* switch: 7 entries, 7 targets */
    if (_jt == 0x002CD3A8u) goto loc_002CD3A8;
    if (_jt == 0x002CD3C1u) goto loc_002CD3C1;
    if (_jt == 0x002CD3DAu) goto loc_002CD3DA;
    if (_jt == 0x002CD3F3u) goto loc_002CD3F3;
    if (_jt == 0x002CD6E8u) goto loc_002CD6E8;
    if (_jt == 0x002CDB19u) goto loc_002CDB19;
    if (_jt == 0x002CDF61u) goto loc_002CDF61;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002CD3A8: ;
    PUSH32(esp, 0xFF);
    eax = ebp;
    PUSH32(esp, 0); sub_00165FA0(); /* call 0x00165FA0 */

loc_002CD3B4: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD3C1: ;
    PUSH32(esp, 0xFF);
    eax = ebp;
    PUSH32(esp, 0); sub_0016B380(); /* call 0x0016B380 */

loc_002CD3CD: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD3DA: ;
    PUSH32(esp, 0xFF);
    eax = ebp;
    PUSH32(esp, 0); sub_00162240(); /* call 0x00162240 */

loc_002CD3E6: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CD3F3: ;
    SET_LO8(eax, MEM8(0x7819D5));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002CDF61; /* je: equal / zero */

loc_002CD402: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_002CDE90; /* je: equal / zero */

loc_002CD410: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_002CDE90; /* jge: greater or equal (signed >=) */

loc_002CD427: ;
    if (CMP_EQ(MEM8(eax + 0x2BC), LO8(ebx))) goto loc_002CD441; /* je: equal / zero */

loc_002CD42F: ;
    MEM8(eax + 0x2BC) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0xA0) = ebx;

loc_002CD441: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_002CDE90; /* jne: not equal / not zero */

loc_002CD453: ;
    MEM32(eax + 0x208) = 0xA;
    eax = esp + 0x24;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_002CD46A: ;
    SET_LO8(ecx, MEM8(ebp + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = ebp;
    MEM8(esp + 0x24) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_002CD48B: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 0xC;
    edi = 0; /* xor self */
    (void)0; /* cmp eax, 0xE - flags set for next jcc */
    esi = 0x2F;
    MEM8(0x7FCB46) = 3;
    if (CMP_NE(eax, 0xE)) goto loc_002CD4B4; /* jne: not equal / not zero */

loc_002CD4A6: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_002CD4B4; /* je: equal / zero */

loc_002CD4AE: ;
    MEM8(ebp + 0x135) = LO8(ebx);

loc_002CD4B4: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(MEM32(eax + 0x444), ebx)) goto loc_002CD4D2; /* je: equal / zero */

loc_002CD4C2: ;
    if (CMP_EQ(MEM32(ebp + 0x3D8), ebx)) goto loc_002CD4D2; /* je: equal / zero */

loc_002CD4CA: ;
    esi = esi | 0xFFFFFFFFu;
    edi = 1;

loc_002CD4D2: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002CD4FA; /* je: equal / zero */

loc_002CD4DA: ;
    if (CMP_EQ(eax, ebx)) goto loc_002CD4FA; /* je: equal / zero */

loc_002CD4DE: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_002CD4FA; /* je: equal / zero */

loc_002CD4E8: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_002CD4FA; /* jne: not equal / not zero */

loc_002CD4F0: ;
    PUSH32(esp, ecx);
    ebx = ebp;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_002CD4F8: ;
    ebx = 0; /* xor self */

loc_002CD4FA: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_002CD555; /* je: equal / zero */

loc_002CD4FF: ;
    ecx = MEM32(ebp + 0x568);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    MEM32(ecx + 0x474) = eax;
    edx = MEM32(ebp + 0x568);
    PUSH32(esp, ebx);
    MEM32(edx + 0x478) = eax;
    ecx = MEM32(ebp + 0x568);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    edx = esi;
    MEM32(ecx + 0x3DC) = eax;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002CD53C: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002CD555; /* je: equal / zero */

loc_002CD548: ;
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x48D) = 1;

loc_002CD555: ;
    edx = MEM32(ebp + 0x200);
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0xFF);
    MEM8(ebp + 0x234) = LO8(eax);
    MEM8(ebp + 0x20C) = LO8(eax);
    MEM8(ebp + 0x180) = LO8(eax);
    eax = MEM32(ebp + 0x568);
    edx = edx | 0x200;
    MEM32(ebp + 0x200) = edx;
    MEM16(ebp + 0x3AE) = LO16(ebx);
    MEMF(ebp + 0x110) = xmm0; /* movss */
    MEM16(ebp + 0x1EC) = LO16(ebx);
    MEM16(ebp + 0x1EE) = LO16(ebx);
    MEM16(eax + 0x5E) = LO16(ebx);
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x2D2) = LO8(ebx);
    edx = MEM32(ebp + 0x568);
    MEMF(edx + 0x30C) = xmm0; /* movss */
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x70) = LO8(ebx);
    eax = MEM32(ebp + 0x564);
    if (CMP_EQ(eax, ebx)) goto loc_002CD5E3; /* je: equal / zero */

loc_002CD5D2: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002CD5E3; /* je: equal / zero */

loc_002CD5DA: ;
    ecx = MEM32(eax + 4);
    MEM8(ecx + 0x8CF) = LO8(ebx);

loc_002CD5E3: ;
    if (CMP_EQ(MEM8(ebp + 0x250), LO8(ebx))) goto loc_002CD5F2; /* je: equal / zero */

loc_002CD5EB: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_002CD5F2: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_002CD5F9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_002CD5FF: ;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_002CD61E; /* je: equal / zero */

loc_002CD606: ;
    if (CMP_EQ(edi, 3)) goto loc_002CD61E; /* je: equal / zero */

loc_002CD60B: ;
    PUSH32(esp, 0xA);
    eax = 0x78;
    esi = ebp;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_002CD619: ;
    esp = esp + 4;
    goto loc_002CD62E;

loc_002CD61E: ;
    edx = MEM32(ebp + 0x568);
    MEM32(edx + 0x204) = 1;

loc_002CD62E: ;
    if (CMP_NE(edi, 2)) goto loc_002CD645; /* jne: not equal / not zero */

loc_002CD633: ;
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0x204) = 0xB;
    goto loc_002CD653;

loc_002CD645: ;
    if (CMP_NE(edi, 3)) goto loc_002CD653; /* jne: not equal / not zero */

loc_002CD64A: ;
    eax = ZX16(MEM16(ebp + 0x60));
    PUSH32(esp, 0); sub_002CCD90(); /* call 0x002CCD90 */

loc_002CD653: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CD669; /* jne: not equal / not zero */

loc_002CD65C: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_002CDE45; /* jne: not equal / not zero */

loc_002CD669: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_002CD698; /* jne: not equal / not zero */

loc_002CD678: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    ecx = MEM32(ebp + 0x568);
    MEMF(ecx + 0x5F4) = xmm0; /* movss */

loc_002CD698: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_002CD6D8; /* jne: not equal / not zero */

loc_002CD6A8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002CD6AF: ;
    edx = eax;
    eax = ebp;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_002CD6BD: ;
    eax = MEM32(ebp + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_002CD6CD: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_002CD6D5: ;
    esp = esp + 8;

loc_002CD6D8: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    edi = MEM32(ecx + 4);
    goto loc_002CDE3F;

loc_002CD6E8: ;
    PUSH32(esp, 0xFF);
    eax = ebp;
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0017E300(); /* call 0x0017E300 */

loc_002CD6F8: ;
    esp = esp + 4;
    eax = ebp;
    PUSH32(esp, 0); sub_00111960(); /* call 0x00111960 */

loc_002CD702: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002CDA38; /* je: equal / zero */

loc_002CD70E: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_002CDA26; /* je: equal / zero */

loc_002CD71C: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_002CDA26; /* jge: greater or equal (signed >=) */

loc_002CD733: ;
    if (CMP_EQ(MEM8(eax + 0x2BC), LO8(ebx))) goto loc_002CD74D; /* je: equal / zero */

loc_002CD73B: ;
    MEM8(eax + 0x2BC) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0xA0) = ebx;

loc_002CD74D: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_002CDA26; /* jne: not equal / not zero */

loc_002CD75F: ;
    MEM32(eax + 0x208) = 6;
    eax = esp + 0x24;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_002CD776: ;
    SET_LO8(ecx, MEM8(ebp + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = ebp;
    MEM8(esp + 0x24) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_002CD797: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x2DA));
    edi = edi | 0xFFFFFFFFu;
    esp = esp + 0xC;
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    esi = edi;
    MEM8(0x7FCB46) = LO8(ebx);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_002CD7BC; /* je: equal / zero */

loc_002CD7B5: ;
    MEM8(0x7FCB46) = 2;

loc_002CD7BC: ;
    ecx = MEM32(ebp + 0x64);
    if (CMP_EQ(ecx, 1)) goto loc_002CD7DA; /* je: equal / zero */

loc_002CD7C4: ;
    if (CMP_EQ(ecx, 0x15)) goto loc_002CD7DA; /* je: equal / zero */

loc_002CD7C9: ;
    if (CMP_EQ(MEM8(ebp + 0xA1), 3)) goto loc_002CD7DA; /* je: equal / zero */

loc_002CD7D2: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_002CD7DF; /* je: equal / zero */

loc_002CD7DA: ;
    esi = 0x170;

loc_002CD7DF: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xE)) goto loc_002CD7F6; /* jne: not equal / not zero */

loc_002CD7E8: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_002CD7F6; /* je: equal / zero */

loc_002CD7F0: ;
    MEM8(ebp + 0x135) = LO8(ebx);

loc_002CD7F6: ;
    if (CMP_EQ(MEM32(eax + 0x444), ebx)) goto loc_002CD808; /* je: equal / zero */

loc_002CD7FE: ;
    if (CMP_EQ(MEM32(ebp + 0x3D8), ebx)) goto loc_002CD808; /* je: equal / zero */

loc_002CD806: ;
    esi = edi;

loc_002CD808: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002CD830; /* je: equal / zero */

loc_002CD810: ;
    if (CMP_EQ(eax, ebx)) goto loc_002CD830; /* je: equal / zero */

loc_002CD814: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_002CD830; /* je: equal / zero */

loc_002CD81E: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_002CD830; /* jne: not equal / not zero */

loc_002CD826: ;
    PUSH32(esp, ecx);
    ebx = ebp;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_002CD82E: ;
    ebx = 0; /* xor self */

loc_002CD830: ;
    if (CMP_EQ(esi, edi)) goto loc_002CD886; /* je: equal / zero */

loc_002CD834: ;
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, ebx);
    MEM32(eax + 0x474) = edi;
    ecx = MEM32(ebp + 0x568);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(ecx + 0x478) = edi;
    edx = MEM32(ebp + 0x568);
    PUSH32(esp, 0x40400000);
    MEM32(edx + 0x3DC) = edi;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    edx = esi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002CD86D: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002CD886; /* je: equal / zero */

loc_002CD879: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x48D) = 1;

loc_002CD886: ;
    edx = MEM32(ebp + 0x200);
    ecx = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = edx | 0x200;
    MEM32(ebp + 0x200) = edx;
    MEM16(ebp + 0x3AE) = LO16(ebx);
    MEM8(ebp + 0x234) = 0xFF;
    MEM8(ebp + 0x20C) = 0xFF;
    MEM8(ebp + 0x180) = 0xFF;
    MEMF(ebp + 0x110) = xmm0; /* movss */
    MEM16(ebp + 0x1EC) = LO16(ebx);
    MEM16(ebp + 0x1EE) = LO16(ebx);
    MEM16(ecx + 0x5E) = LO16(ebx);
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x2D2) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEMF(eax + 0x30C) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x70) = LO8(ebx);
    eax = MEM32(ebp + 0x564);
    if (CMP_EQ(eax, ebx)) goto loc_002CD915; /* je: equal / zero */

loc_002CD904: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002CD915; /* je: equal / zero */

loc_002CD90C: ;
    edx = MEM32(eax + 4);
    MEM8(edx + 0x8CF) = LO8(ebx);

loc_002CD915: ;
    if (CMP_EQ(MEM8(ebp + 0x250), LO8(ebx))) goto loc_002CD924; /* je: equal / zero */

loc_002CD91D: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_002CD924: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_002CD92B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_002CD931: ;
    PUSH32(esp, 6);
    eax = 0x78;
    esi = ebp;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_002CD93F: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CD958; /* jne: not equal / not zero */

loc_002CD94B: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_002CD9D9; /* jne: not equal / not zero */

loc_002CD958: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_002CD987; /* jne: not equal / not zero */

loc_002CD967: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    eax = MEM32(ebp + 0x568);
    MEMF(eax + 0x5F4) = xmm0; /* movss */

loc_002CD987: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_002CD9C7; /* jne: not equal / not zero */

loc_002CD997: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002CD99E: ;
    edx = eax;
    eax = ebp;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_002CD9AC: ;
    eax = MEM32(ebp + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_002CD9BC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_002CD9C4: ;
    esp = esp + 8;

loc_002CD9C7: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_002CD9D9: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_002CDA24; /* jne: not equal / not zero */

loc_002CD9E1: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_002CDA24; /* jne: not equal / not zero */

loc_002CD9EA: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002CD9F4: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002CDA0F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_002CDA21: ;
    esp = esp + 8;

loc_002CDA24: ;
    ebx = 0; /* xor self */

loc_002CDA26: ;
    SET_LO8(edx, MEM8(ebp + 0x236));
    SET_LO8(edx, LO8(edx) + 0xB);
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_002CDA34: ;
    esi = eax;
    goto loc_002CDA83;

loc_002CDA38: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x23)) goto loc_002CDA4A; /* jne: not equal / not zero */

loc_002CDA41: ;
    SET_LO8(edx, 1);
    PUSH32(esp, 0); sub_0006ADD0(); /* call 0x0006ADD0 */

loc_002CDA48: ;
    esi = eax;

loc_002CDA4A: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0030E670(); /* call 0x0030E670 */

loc_002CDA51: ;
    edi = eax;
    if (CMP_EQ(edi, ebx)) goto loc_002CDA83; /* je: equal / zero */

loc_002CDA57: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_002CDA83; /* je: equal / zero */

loc_002CDA60: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_002CDA70: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x14;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002CDA83; /* jne: not equal / not zero */

loc_002CDA7C: ;
    MEM16(edi + 0x3AE) = LO16(ebx);

loc_002CDA83: ;
    if (CMP_EQ(esi, ebx)) goto loc_002CDB00; /* je: equal / zero */

loc_002CDA87: ;
    MEM8(esi + 0xC2) = LO8(ebx);
    edx = (int32_t)MEMF(ebp + 0x78); /* cvttss2si */
    MEM16(esi + 0x14) = LO16(edx);
    eax = (int32_t)MEMF(ebp + 0x7C); /* cvttss2si */
    MEM16(esi + 0x16) = LO16(eax);
    ecx = (int32_t)MEMF(ebp + 0x80); /* cvttss2si */
    MEM16(esi + 0x18) = LO16(ecx);
    edx = (int32_t)MEMF(ebp + 0x1C0); /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 4) = xmm0; /* movss */
    ecx = (int32_t)MEMF(ebp + 0x114); /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 8) = xmm0; /* movss */
    eax = (int32_t)MEMF(ebp + 0x1CC); /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    MEM8(esi + 0xEE) = 0xFF;
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0xD8) = ebx;

loc_002CDB00: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002CDF61; /* je: equal / zero */

loc_002CDB0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CDB19: ;
    eax = ebp;
    PUSH32(esp, 0); sub_001397E0(); /* call 0x001397E0 */

loc_002CDB20: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ebp = ebp + 0x78;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xDA9;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_002CDB4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CDB57: ;
    if (CMP_A(eax, 0x9D)) goto loc_002CDEC0; /* ja: above (unsigned >) */

loc_002CDB62: ;
    if (CMP_AE(eax, 0x9C)) goto loc_002CDE9D; /* jae: above or equal (unsigned >=) */

loc_002CDB6D: ;
    eax = eax - 0x90;
    if ((eax == 0)) goto loc_002CDB8C; /* je: equal / zero */

loc_002CDB74: ;
    eax--;
    if ((eax != 0)) goto loc_002CDF61; /* jne: not equal / not zero */

loc_002CDB7B: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00160910(); /* call 0x00160910 */

loc_002CDB82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CDB8C: ;
    SET_LO8(eax, MEM8(0x7819D5));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002CDF61; /* je: equal / zero */

loc_002CDB9B: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x33)) goto loc_002CDF61; /* jne: not equal / not zero */

loc_002CDBA8: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_002CDE90; /* je: equal / zero */

loc_002CDBB6: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_002CDE90; /* jge: greater or equal (signed >=) */

loc_002CDBCD: ;
    if (CMP_EQ(MEM8(eax + 0x2BC), LO8(ebx))) goto loc_002CDBE7; /* je: equal / zero */

loc_002CDBD5: ;
    MEM8(eax + 0x2BC) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0xA0) = ebx;

loc_002CDBE7: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_002CDE90; /* jne: not equal / not zero */

loc_002CDBF9: ;
    MEM32(eax + 0x208) = 8;
    eax = esp + 0x24;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_002CDC10: ;
    SET_LO8(ecx, MEM8(ebp + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = ebp;
    MEM8(esp + 0x24) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_002CDC31: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xE - flags set for next jcc */
    esi = 0x170;
    MEM8(0x7FCB46) = 3;
    if (CMP_NE(eax, 0xE)) goto loc_002CDC58; /* jne: not equal / not zero */

loc_002CDC4A: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_002CDC58; /* je: equal / zero */

loc_002CDC52: ;
    MEM8(ebp + 0x135) = LO8(ebx);

loc_002CDC58: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x444);
    edi = edi | 0xFFFFFFFFu;
    if (CMP_EQ(ecx, ebx)) goto loc_002CDC75; /* je: equal / zero */

loc_002CDC6B: ;
    if (CMP_EQ(MEM32(ebp + 0x3D8), ebx)) goto loc_002CDC75; /* je: equal / zero */

loc_002CDC73: ;
    esi = edi;

loc_002CDC75: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002CDC9D; /* je: equal / zero */

loc_002CDC7D: ;
    if (CMP_EQ(eax, ebx)) goto loc_002CDC9D; /* je: equal / zero */

loc_002CDC81: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_002CDC9D; /* je: equal / zero */

loc_002CDC8B: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_002CDC9D; /* jne: not equal / not zero */

loc_002CDC93: ;
    PUSH32(esp, ecx);
    ebx = ebp;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_002CDC9B: ;
    ebx = 0; /* xor self */

loc_002CDC9D: ;
    if (CMP_EQ(esi, edi)) goto loc_002CDCF3; /* je: equal / zero */

loc_002CDCA1: ;
    eax = MEM32(ebp + 0x568);
    PUSH32(esp, ebx);
    MEM32(eax + 0x474) = edi;
    ecx = MEM32(ebp + 0x568);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(ecx + 0x478) = edi;
    edx = MEM32(ebp + 0x568);
    PUSH32(esp, 0x40400000);
    MEM32(edx + 0x3DC) = edi;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    edx = esi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_002CDCDA: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002CDCF3; /* je: equal / zero */

loc_002CDCE6: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x48D) = 1;

loc_002CDCF3: ;
    edx = MEM32(ebp + 0x200);
    ecx = MEM32(ebp + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0xFF);
    MEM8(ebp + 0x234) = LO8(eax);
    MEM8(ebp + 0x20C) = LO8(eax);
    MEM8(ebp + 0x180) = LO8(eax);
    edx = edx | 0x200;
    MEM32(ebp + 0x200) = edx;
    MEM16(ebp + 0x3AE) = LO16(ebx);
    MEMF(ebp + 0x110) = xmm0; /* movss */
    MEM16(ebp + 0x1EC) = LO16(ebx);
    MEM16(ebp + 0x1EE) = LO16(ebx);
    MEM16(ecx + 0x5E) = LO16(ebx);
    edx = MEM32(ebp + 0x568);
    MEM8(edx + 0x2D2) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEMF(eax + 0x30C) = xmm0; /* movss */
    ecx = MEM32(ebp + 0x568);
    MEM8(ecx + 0x70) = LO8(ebx);
    eax = MEM32(ebp + 0x564);
    if (CMP_EQ(eax, ebx)) goto loc_002CDD81; /* je: equal / zero */

loc_002CDD70: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002CDD81; /* je: equal / zero */

loc_002CDD78: ;
    edx = MEM32(eax + 4);
    MEM8(edx + 0x8CF) = LO8(ebx);

loc_002CDD81: ;
    if (CMP_EQ(MEM8(ebp + 0x250), LO8(ebx))) goto loc_002CDD90; /* je: equal / zero */

loc_002CDD89: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_002CDD90: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_002CDD97: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_002CDD9D: ;
    PUSH32(esp, 8);
    eax = 0x78;
    esi = ebp;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_002CDDAB: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CDDC4; /* jne: not equal / not zero */

loc_002CDDB7: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_002CDE45; /* jne: not equal / not zero */

loc_002CDDC4: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_002CDDF3; /* jne: not equal / not zero */

loc_002CDDD3: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    eax = MEM32(ebp + 0x568);
    MEMF(eax + 0x5F4) = xmm0; /* movss */

loc_002CDDF3: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_002CDE33; /* jne: not equal / not zero */

loc_002CDE03: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_002CDE0A: ;
    edx = eax;
    eax = ebp;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_002CDE18: ;
    eax = MEM32(ebp + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_002CDE28: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_002CDE30: ;
    esp = esp + 8;

loc_002CDE33: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    edi = MEM32(eax + 4);

loc_002CDE3F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_002CDE45: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_002CDE90; /* jne: not equal / not zero */

loc_002CDE4D: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_002CDE90; /* jne: not equal / not zero */

loc_002CDE56: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_002CDE60: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002CDE7B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_002CDE8D: ;
    esp = esp + 8;

loc_002CDE90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CDE9D: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = ebp + 0x78;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0); sub_000B41A0(); /* call 0x000B41A0 */

loc_002CDEB3: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CDEC0: ;
    if (CMP_B(eax, 0xAD)) goto loc_002CDF61; /* jb: below (unsigned <) */

loc_002CDECB: ;
    if (CMP_BE(eax, 0xAF)) goto loc_002CDF22; /* jbe: below or equal (unsigned <=) */

loc_002CDED2: ;
    if (CMP_NE(eax, 0x195)) goto loc_002CDF61; /* jne: not equal / not zero */

loc_002CDEDD: ;
    PUSH32(esp, 0x123);
    eax = ebp;
    PUSH32(esp, 0); sub_00135AC0(); /* call 0x00135AC0 */

loc_002CDEE9: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + 0x78;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_000B41A0(); /* call 0x000B41A0 */

loc_002CDEFF: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002CDF04: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 5;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B6F30(); /* call 0x000B6F30 */

loc_002CDF15: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CDF22: ;
    PUSH32(esp, 0x127);
    eax = ebp;
    PUSH32(esp, 0); sub_00135AC0(); /* call 0x00135AC0 */

loc_002CDF2E: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 4;
    if (CMP_NE(eax, 0x27)) goto loc_002CDF53; /* jne: not equal / not zero */

loc_002CDF3B: ;
    PUSH32(esp, 0x400CCCCD);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000AF7D0(); /* call 0x000AF7D0 */

loc_002CDF46: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002CDF53: ;
    PUSH32(esp, 0x3F99999A);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_000AF7D0(); /* call 0x000AF7D0 */

loc_002CDF5E: ;
    esp = esp + 8;

loc_002CDF61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002CE030
 * Original: 0x002CE030 - 0x002CE103 (211 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE030(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002CE030: ;
    edx = MEM32(0x7FCB50);
    eax = 1;
    eax = eax << LO8(ecx);
    if (TEST_Z(eax, edx)) goto loc_002CE0E9; /* je: equal / zero */

loc_002CE045: ;
    SET_LO8(edx, MEM8(ecx + 0x7FCB4C));
    if (CMP_BE(LO8(edx), 3)) goto loc_002CE05A; /* jbe: below or equal (unsigned <=) */

loc_002CE050: ;
    SET_LO8(edx, LO8(edx) - 4);
    MEM8(ecx + 0x7FCB4C) = LO8(edx);
    esp += 4; return; /* ret */

loc_002CE05A: ;
    edx = MEM32(0x7FCB50);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = ~eax;
    edx = edx & eax;
    eax = 0; /* xor self */
    MEMF(ecx * 4 + 0x771C18) = xmm0; /* movss */
    MEMF(ecx * 4 + 0x771C28) = xmm0; /* movss */
    MEMF(ecx * 8 + 0x771BF8) = xmm0; /* movss */
    MEMF(ecx * 8 + 0x771BFC) = xmm0; /* movss */
    MEM8(ecx + 0x771C44) = LO8(eax);
    ecx = ecx << 5;
    MEM32(0x7FCB50) = edx;
    if (CMP_NE(MEM32(ecx + 0x771C50), eax)) goto loc_002CE0BA; /* jne: not equal / not zero */

loc_002CE0A4: ;
    edx = MEM32(ecx + 0x771C60);
    if (CMP_LE(edx, MEM32(ecx + 0x771C5C))) goto loc_002CE0BA; /* jle: less or equal (signed <=) */

loc_002CE0B2: ;
    if (CMP_EQ(MEM8(ecx + 0x771C64), LO8(eax))) goto loc_002CE102; /* je: equal / zero */

loc_002CE0BA: ;
    MEM32(ecx + 0x771C50) = eax;
    MEM32(ecx + 0x771C54) = eax;
    MEM8(ecx + 0x771C58) = LO8(eax);
    MEM8(ecx + 0x771C59) = LO8(eax);
    MEM8(ecx + 0x771C5A) = LO8(eax);
    MEM32(ecx + 0x771C5C) = 0x78;
    MEM32(ecx + 0x771C60) = eax;
    esp += 4; return; /* ret */

loc_002CE0E9: ;
    SET_LO8(eax, MEM8(ecx + 0x7FCB4C));
    SET_LO8(eax, LO8(eax) + 4);
    (void)0; /* cmp LO8(eax), 0x3C - flags set for next jcc */
    MEM8(ecx + 0x7FCB4C) = LO8(eax);
    if (CMP_BE(LO8(eax), 0x3C)) goto loc_002CE102; /* jbe: below or equal (unsigned <=) */

loc_002CE0FB: ;
    MEM8(ecx + 0x7FCB4C) = 0x3C;

loc_002CE102: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CE110
 * Original: 0x002CE110 - 0x002CE168 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE110(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CE110: ;
    if (CMP_NE(MEM32(esi + 0x64), 1)) { sub_002CE168(); return; } /* jne: not equal / not zero */

loc_002CE116: ;
    PUSH32(esp, 0x44);
    eax = esi;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_002CE11F: ;
    PUSH32(esp, 0x23);
    eax = esi;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_002CE128: ;
    PUSH32(esp, 0x605AD4);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_002CE134: ;
    PUSH32(esp, 0x44);
    eax = esi;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_002CE13D: ;
    PUSH32(esp, 0x23);
    eax = esi;
    PUSH32(esp, 0); sub_002B38F0(); /* call 0x002B38F0 */

loc_002CE146: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    esp = esp + 0x14;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB4E);
    PUSH32(esp, ecx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_002CE167: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CE3B0
 * Original: 0x002CE3B0 - 0x002CE496 (230 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE3B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002CE3B0: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002CE491; /* je: equal / zero */

loc_002CE3C6: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x12;
    PUSH32(esp, eax);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0); sub_002B6FD0(); /* call 0x002B6FD0 */

loc_002CE3F6: ;
    ecx = ZX8(MEM8(esp + 0x26));
    eax = MEM32(esp + 0x28);
    ecx = ecx - 0x40;
    esp = esp + 0x20;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649794); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E6C); /* addss */
    if (TEST_NZ(eax, eax)) goto loc_002CE421; /* jne: not equal / not zero */

loc_002CE41D: ;
    eax = ebx;
    goto loc_002CE42A;

loc_002CE421: ;
    if (CMP_NE(eax, ebx)) goto loc_002CE491; /* jne: not equal / not zero */

loc_002CE425: ;
    eax = 3;

loc_002CE42A: ;
    SET_LO16(edx, MEM16(esp + 0x14));
    SET_LO16(ecx, MEM16(esp + 0x16));
    PUSH32(esp, esi);
    esi = MEM32(0x7FA1F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM16(0x76E87C) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x28));
    PUSH32(esp, eax);
    PUSH32(esp, 0x25);
    MEMF(0x76E878) = xmm0; /* movss */
    MEM16(0x76E87E) = LO16(ecx);
    MEM16(0x76E880) = LO16(edx);
    MEM8(0x76E868) = LO8(ebx);
    MEM32(0x7FA1F8) = 0x25;
    MEM8(0x7655EA) = LO8(ebx);
    PUSH32(esp, 0); sub_0004EC10(); /* call 0x0004EC10 */

loc_002CE481: ;
    esp = esp + 0x14;
    MEM32(0x7FA1F8) = esi;
    MEM8(0x7655E9) = LO8(ebx);
    POP32(esp, esi);

loc_002CE491: ;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_002CE4A0
 * Original: 0x002CE4A0 - 0x002CE50D (109 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE4A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CE4A0: ;
    SET_LO8(eax, MEM8(0x7FCB47));
    esp = esp - 0x24;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002CE50D(); return; } /* je: equal / zero */

loc_002CE4AC: ;
    eax = MEM32(0x7FA1F4);
    if (CMP_EQ(eax, 0x22)) { sub_002CE50D(); return; } /* je: equal / zero */

loc_002CE4B6: ;
    if (CMP_EQ(eax, 0x18)) { sub_002CE50D(); return; } /* je: equal / zero */

loc_002CE4BB: ;
    eax = (uint32_t)(int32_t)SMEM8(0x84B248);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(0x7FA1F4) = eax;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xE;
    PUSH32(esp, ecx);
    edx = esp + 0x13;
    PUSH32(esp, edx);
    edx = ZX8(MEM8(0x84B250));
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = 1;
    PUSH32(esp, 0); sub_002B6FD0(); /* call 0x002B6FD0 */

loc_002CE4FD: ;
    esp = esp + 0x20;
    if (TEST_NZ(eax, eax)) { sub_002CE50D(); return; } /* jne: not equal / not zero */

loc_002CE504: ;
    eax = MEM32(esp + 4);
    eax++;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_002CE520
 * Original: 0x002CE520 - 0x002CE5C5 (165 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002CE520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x60;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) { sub_002CE5C5(); return; } /* je: equal / zero */

loc_002CE537: ;
    eax = MEM32(esi + 0x64);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esi + 0x264); /* movss */
    xmm1 = xmm1 * MEMF(0x648E5C); /* mulss */
    edx = 0; /* xor self */
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(eax, 1)) goto loc_002CE56D; /* jne: not equal / not zero */

loc_002CE566: ;
    PUSH32(esp, 0x5D4CB4);
    goto loc_002CE577;

loc_002CE56D: ;
    if (CMP_NE(eax, 0x1E)) goto loc_002CE583; /* jne: not equal / not zero */

loc_002CE572: ;
    PUSH32(esp, 0x5F0C94);

loc_002CE577: ;
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_002CE57E: ;
    esp = esp + 4;
    edx = eax;

loc_002CE583: ;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_002CE58D: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_002CE59D: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0x10;
    MEMF(edi) = xmm0; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002CE5E0
 * Original: 0x002CE5E0 - 0x002CE6F3 (275 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE5E0(void)
{
    float xmm0, xmm1;

loc_002CE5E0: ;
    esp = esp - 0x64;
    eax = MEM32(esp + 0x68);
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm1 = MEMF(0x64B13C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64B138); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64AEE8); /* movss */
    eax = 0; /* xor self */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64A69C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x64A460); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x6493F4); /* movss */
    PUSH32(esp, 0xFF);
    MEM16(esp + 0x20) = LO16(eax);
    MEM8(esp + 0x64) = LO8(eax);
    MEM8(esp + 0x5C) = LO8(eax);
    MEM8(esp + 0x5D) = LO8(eax);
    MEM8(esp + 0x5E) = LO8(eax);
    eax = esp + 4;
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x64B134); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM16(esp + 0x10) = 3;
    MEM16(esp + 0x20) = 0x5A;
    MEM16(esp + 0x2A) = 0xFF;
    MEM16(esp + 0x2C) = 0xFFC0;
    MEM16(esp + 0x2E) = 0x28;
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEM16(esp + 0x68) = 0x32;
    MEM16(esp + 0x6A) = 0x19;
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_002CE6EF: ;
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_002CE700
 * Original: 0x002CE700 - 0x002CE710 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE700(void)
{

loc_002CE700: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_001696B0(); /* call 0x001696B0 */

loc_002CE70E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CE730
 * Original: 0x002CE730 - 0x002CE74E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE730(void)
{

loc_002CE730: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    eax = 0x7FCB58;
    ecx = 0x7FCB64;
    PUSH32(esp, 0); sub_0017E7A0(); /* call 0x0017E7A0 */

loc_002CE749: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002CE750
 * Original: 0x002CE750 - 0x002CE7D9 (137 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE750(void)
{
    float xmm0;

loc_002CE750: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x7FCB58); /* movss */
    xmm0 = xmm0 - MEMF(0x7FCB64); /* subss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x7FCB5C); /* movss */
    xmm0 = xmm0 - MEMF(0x7FCB68); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x7FCB60); /* movss */
    xmm0 = xmm0 - MEMF(0x7FCB6C); /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00199BB0(); /* call 0x00199BB0 */

loc_002CE7D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002CE7E0
 * Original: 0x002CE7E0 - 0x002CE7EF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE7E0(void)
{

loc_002CE7E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    PUSH32(esp, 0); sub_0017E810(); /* call 0x0017E810 */

loc_002CE7ED: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CE7F0
 * Original: 0x002CE7F0 - 0x002CE8B7 (199 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE7F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002CE7F0: ;
    esp = esp - 0x24;
    eax = MEM32(esp + 0x28);
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm1 = MEMF(0x6493A8); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0x42B40000);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    PUSH32(esp, 0x437F0000);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x437F0000);
    eax = esp + 0x18;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649DD8); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x28;
    MEMF(esp + 0x38) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM8(esp + 0x20) = 2;
    MEM8(esp + 0x21) = 0xF;
    MEM16(esp + 0x22) = 0x12C;
    MEM8(esp + 0x26) = 5;
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_002CE88E: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_002CE8B3; /* je: equal / zero */

loc_002CE895: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = eax + 0x38;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_002CE8B3: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_002CE8C0
 * Original: 0x002CE8C0 - 0x002CE949 (137 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE8C0(void)
{
    float xmm0;

loc_002CE8C0: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x7FCB58); /* movss */
    xmm0 = xmm0 - MEMF(0x7FCB64); /* subss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x7FCB5C); /* movss */
    xmm0 = xmm0 - MEMF(0x7FCB68); /* subss */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x7FCB60); /* movss */
    xmm0 = xmm0 - MEMF(0x7FCB6C); /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00199BB0(); /* call 0x00199BB0 */

loc_002CE945: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002CE950
 * Original: 0x002CE950 - 0x002CE970 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CE950(void)
{

loc_002CE950: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_001835E0(); /* call 0x001835E0 */

loc_002CE95F: ;
    PUSH32(esp, 0xFF);
    eax = esi;
    PUSH32(esp, 0); sub_00182A10(); /* call 0x00182A10 */

loc_002CE96B: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002CEA00
 * Original: 0x002CEA00 - 0x002CEA49 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA00(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CEA00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FDD2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    MEM32(esp + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_002CEA46; /* je: equal / zero */

loc_002CEA15: ;
    PUSH32(esp, ebx);

loc_002CEA16: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_002CEA35; /* je: equal / zero */

loc_002CEA1A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FCB58);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    eax = 0x7FCB64;
    PUSH32(esp, 0); sub_000B29A0(); /* call 0x000B29A0 */

loc_002CEA2E: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 8;

loc_002CEA35: ;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = esi + 0x6D0;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_NZ(eax, eax)) goto loc_002CEA16; /* jne: not equal / not zero */

loc_002CEA45: ;
    POP32(esp, ebx);

loc_002CEA46: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CEA50
 * Original: 0x002CEA50 - 0x002CEA7D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA50(void)
{

loc_002CEA50: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x5E0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    edx = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019BE40(); /* call 0x0019BE40 */

loc_002CEA79: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002CEA80
 * Original: 0x002CEA80 - 0x002CEAAD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEA80(void)
{

loc_002CEA80: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x5E0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    edx = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019BE40(); /* call 0x0019BE40 */

loc_002CEAA9: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002CEAB0
 * Original: 0x002CEAB0 - 0x002CEADE (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEAB0(void)
{

loc_002CEAB0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    MEM32(esp) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 0xFF);
    ecx = esp + 4;
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = 8;
    PUSH32(esp, 0); sub_00183750(); /* call 0x00183750 */

loc_002CEADA: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002CEAE0
 * Original: 0x002CEAE0 - 0x002CEAEC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEAE0(void)
{

loc_002CEAE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000AF280(); /* call 0x000AF280 */

loc_002CEAEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CEAF0
 * Original: 0x002CEAF0 - 0x002CEB01 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEAF0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEAF0: ;
    MEM32(esp + 8) = 0xFF;
    SET_LO8(ecx, 1);
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0014B580(); return; /* tail jmp 0x0014B580 */

}

/**
 * sub_002CEB10
 * Original: 0x002CEB10 - 0x002CEB90 (128 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002CEB10: ;
    if (TEST_S(ecx, ecx)) goto loc_002CEB8F; /* jl: less (signed <) */

loc_002CEB14: ;
    if (CMP_GE(ecx, 0x11)) goto loc_002CEB8F; /* jge: greater or equal (signed >=) */

loc_002CEB19: ;
    xmm0 = MEMF(eax + 0x84); /* movss */
    ecx = MEM32(ecx * 4 + 0x59C9F8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(0x7FCB64) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x88); /* movss */
    MEMF(0x7FCB68) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x8C); /* movss */
    MEMF(0x7FCB6C) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD38); /* movss */
    MEMF(0x7FCB58) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD34); /* movss */
    MEMF(0x7FCB5C) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD30); /* movss */
    MEMF(0x7FCB60) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_002CEB8F; /* je: equal / zero */

loc_002CEB84: ;
    edx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_002CEB8C: ;
    esp = esp + 8;

loc_002CEB8F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CEB90
 * Original: 0x002CEB90 - 0x002CED3A (426 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEB90(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CEB90: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0x2B)) goto loc_002CED39; /* je: equal / zero */

loc_002CEB9A: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002CED38; /* je: equal / zero */

loc_002CEBAA: ;
    SET_LO8(eax, MEM8(0x76EC82));
    edx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(edx))) goto loc_002CED38; /* jne: not equal / not zero */

loc_002CEBB9: ;
    if (CMP_BE(MEM8(esi + 0x13B), 3)) goto loc_002CEBC8; /* jbe: below or equal (unsigned <=) */

loc_002CEBC2: ;
    MEM8(esi + 0x13B) = LO8(edx);

loc_002CEBC8: ;
    if (CMP_BE(MEM8(esi + 0x13C), 3)) goto loc_002CEBD7; /* jbe: below or equal (unsigned <=) */

loc_002CEBD1: ;
    MEM8(esi + 0x13C) = LO8(edx);

loc_002CEBD7: ;
    (void)0; /* cmp MEM8(esi + 0x13D), 0xA - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO8(eax, 0xFF);
    if (CMP_AE(MEM8(esi + 0x13D), 0xA)) goto loc_002CEBEC; /* jae: above or equal (unsigned >=) */

loc_002CEBE3: ;
    if (CMP_B(MEM8(esi + 0x13E), 0xA)) goto loc_002CEC22; /* jb: below (unsigned <) */

loc_002CEBEC: ;
    if (CMP_EQ(MEM8(esi + 0x236), LO8(eax))) goto loc_002CED37; /* je: equal / zero */

loc_002CEBF8: ;
    ecx = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(ecx + 0x204), edx)) goto loc_002CED37; /* je: equal / zero */

loc_002CEC0A: ;
    MEM8(esi + 0x13D) = LO8(edx);
    MEM8(esi + 0x13B) = LO8(edx);
    MEM8(esi + 0x13E) = LO8(edx);
    MEM8(esi + 0x13C) = LO8(edx);

loc_002CEC22: ;
    if (CMP_EQ(MEM8(esi + 0x236), LO8(eax))) goto loc_002CEC44; /* je: equal / zero */

loc_002CEC2A: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(eax + 0x204), edx)) goto loc_002CEC44; /* je: equal / zero */

loc_002CEC38: ;
    MEM8(esi + 0x13B) = LO8(ebx);
    MEM8(esi + 0x13C) = LO8(ebx);

loc_002CEC44: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(eax, edx)) goto loc_002CEC73; /* je: equal / zero */

loc_002CEC4E: ;
    eax = MEM32(eax + 0x444);
    if (CMP_EQ(eax, edx)) goto loc_002CEC73; /* je: equal / zero */

loc_002CEC58: ;
    eax = MEM32(eax + 0x280);
    if (CMP_EQ(eax, edx)) goto loc_002CEC73; /* je: equal / zero */

loc_002CEC62: ;
    if (CMP_EQ(MEM8(eax + 6), LO8(edx))) goto loc_002CEC73; /* je: equal / zero */

loc_002CEC67: ;
    MEM8(esi + 0x13B) = LO8(ebx);
    MEM8(esi + 0x13C) = LO8(ebx);

loc_002CEC73: ;
    SET_LO8(eax, MEM8(esi + 0x13F));
    ecx = MEM32(0x7FA20C);
    edi = ZX8(LO8(eax));
    if (CMP_L(edi, ecx)) goto loc_002CEC9D; /* jl: less (signed <) */

loc_002CEC86: ;
    SET_LO8(edx, MEM8(esi + 0x13D));
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x13F) = LO8(eax);
    MEM8(esi + 0x13E) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002CEC9D: ;
    SET_LO8(ecx, MEM8(esi + 0x13D));
    if (CMP_NE(LO8(ecx), LO8(edx))) goto loc_002CECB1; /* jne: not equal / not zero */

loc_002CECA7: ;
    SET_LO8(eax, MEM8(esi + 0x13B));
    if (CMP_EQ(LO8(eax), LO8(edx))) goto loc_002CECC0; /* je: equal / zero */

loc_002CECB1: ;
    if (CMP_B(LO8(ecx), 3)) goto loc_002CED15; /* jb: below (unsigned <) */

loc_002CECB6: ;
    SET_LO8(eax, MEM8(esi + 0x13B));
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002CED15; /* jne: not equal / not zero */

loc_002CECC0: ;
    SET_LO8(edx, MEM8(esi + 0x13C));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esi + 0x13B) = LO8(eax);
    MEM8(esi + 0x13C) = LO8(edx);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002CECFF; /* jne: not equal / not zero */

loc_002CECDA: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002CECDF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x8C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(edx, LO8(edx) + 0xA);
    MEM8(esi + 0x13F) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x13D));
    MEM8(esi + 0x13E) = LO8(edx);
    esp += 4; return; /* ret */

loc_002CECFF: ;
    SET_LO8(edx, MEM8(esi + 0x13D));
    POP32(esp, edi);
    MEM8(esi + 0x13F) = 4;
    MEM8(esi + 0x13E) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002CED15: ;
    if (CMP_EQ(MEM8(esi + 0x13B), LO8(edx))) goto loc_002CED21; /* je: equal / zero */

loc_002CED1D: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    goto loc_002CED23;

loc_002CED21: ;
    SET_LO8(ecx, LO8(ecx) - 1);

loc_002CED23: ;
    SET_LO8(edx, LO8(ecx));
    MEM8(esi + 0x13D) = LO8(ecx);
    MEM8(esi + 0x13F) = LO8(ebx);
    MEM8(esi + 0x13E) = LO8(edx);

loc_002CED37: ;
    POP32(esp, edi);

loc_002CED38: ;
    POP32(esp, ebx);

loc_002CED39: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CED40
 * Original: 0x002CED40 - 0x002CEE0A (202 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CED40(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CED40: ;
    ecx = MEM32(0x742F98);
    edx = MEM32(edi + 0x68);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_002CED61; /* je: equal / zero */

loc_002CED50: ;
    if (CMP_EQ(ecx, edx)) goto loc_002CED9D; /* je: equal / zero */

loc_002CED54: ;
    ecx = MEM32(eax * 4 + 0x742F9C);
    eax++;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_002CED50; /* jne: not equal / not zero */

loc_002CED61: ;
    eax = 0; /* xor self */

loc_002CED63: ;
    if (CMP_GE(MEM32(esp + 4), eax)) goto loc_002CEE09; /* jge: greater or equal (signed >=) */

loc_002CED6D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(edi + 0x140));
    edx = edi;
    PUSH32(esp, 0); sub_002CF0E0(); /* call 0x002CF0E0 */

loc_002CED7D: ;
    SET_LO8(ecx, MEM8(eax + 4));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002CEDD8; /* je: equal / zero */

loc_002CED84: ;
    SET_LO8(eax, MEM8(edi + 0x3A9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CEDA6; /* je: equal / zero */

loc_002CED8E: ;
    edx = MEM32(edi + 0x50C);
    eax = ZX8(LO8(eax));
    eax = MEM32(edx + eax * 4 + -4);
    goto loc_002CEDAE;

loc_002CED9D: ;
    eax = MEM32(eax * 4 + 0x86F380);
    goto loc_002CED63;

loc_002CEDA6: ;
    eax = MEM32(edi + 0x50C);
    eax = MEM32(eax);

loc_002CEDAE: ;
    if (TEST_Z(eax, eax)) goto loc_002CEDC0; /* je: equal / zero */

loc_002CEDB2: ;
    if (CMP_EQ(eax, 0x111)) goto loc_002CEDC0; /* je: equal / zero */

loc_002CEDB9: ;
    if (CMP_NE(eax, 0x114)) goto loc_002CEDD8; /* jne: not equal / not zero */

loc_002CEDC0: ;
    ecx = ZX8(LO8(ecx));
    ebx = ZX8(MEM8(ecx + 0x59C497));
    PUSH32(esp, edi);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00076E40(); /* call 0x00076E40 */

loc_002CEDD5: ;
    esp = esp + 4;

loc_002CEDD8: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    ebx = MEM32(esp + 0x10);
    esi = edi;
    MEM8(edi + 0x140) = LO8(edx);
    PUSH32(esp, 0); sub_002CEE10(); /* call 0x002CEE10 */

loc_002CEDED: ;
    eax = ebx;
    if (TEST_NZ(eax, eax)) goto loc_002CEE01; /* jne: not equal / not zero */

loc_002CEDF3: ;
    esi = MEM32(esp + 0xC);
    edx = edi;
    PUSH32(esp, 0); sub_002CF0E0(); /* call 0x002CF0E0 */

loc_002CEDFE: ;
    SET_LO8(eax, MEM8(eax + 3));

loc_002CEE01: ;
    POP32(esp, esi);
    MEM8(edi + 0x249) = LO8(eax);
    POP32(esp, ebx);

loc_002CEE09: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CEE10
 * Original: 0x002CEE10 - 0x002CEEC7 (183 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEE10(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CEE10: ;
    eax = MEM32(0x742F98);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002CEEC6; /* je: equal / zero */

loc_002CEE20: ;
    edx = MEM32(esi + 0x70);

loc_002CEE23: ;
    if (CMP_EQ(eax, edx)) goto loc_002CEE35; /* je: equal / zero */

loc_002CEE27: ;
    eax = MEM32(ecx * 4 + 0x742F9C);
    ecx++;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002CEE23; /* jne: not equal / not zero */

loc_002CEE34: ;
    esp += 4; return; /* ret */

loc_002CEE35: ;
    eax = ZX8(MEM8(esi + 0x140));
    ecx = MEM32(ecx * 4 + 0x743010);
    eax = eax + eax * 4;
    PUSH32(esp, edi);
    edi = ecx + eax * 2;
    if (TEST_Z(edi, edi)) goto loc_002CEEC5; /* je: equal / zero */

loc_002CEE4E: ;
    edx = ZX16(MEM16(edi + 6));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(edi + 4));
    eax = esi;
    PUSH32(esp, 0); sub_002CF150(); /* call 0x002CF150 */

loc_002CEE5E: ;
    SET_LO8(eax, MEM8(edi + 2));
    SET_LO8(ecx, MEM8(esi + 0x248));
    esp = esp + 4;
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_002CEE89; /* je: equal / zero */

loc_002CEE6E: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM8(esi + 0x248) = LO8(eax);
    if (TEST_NZ(ebx, ebx)) goto loc_002CEE83; /* jne: not equal / not zero */

loc_002CEE78: ;
    SET_LO8(eax, MEM8(edi + 3));
    MEM8(esi + 0x249) = LO8(eax);
    goto loc_002CEE89;

loc_002CEE83: ;
    MEM8(esi + 0x249) = LO8(ebx);

loc_002CEE89: ;
    ecx = ZX8(MEM8(edi));
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_0029DD30(); /* call 0x0029DD30 */

loc_002CEE94: ;
    SET_LO8(eax, LO8(eax) + 0xA);
    MEM8(esi + 0x13D) = LO8(eax);
    edx = ZX8(MEM8(edi + 1));
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_0029DD30(); /* call 0x0029DD30 */

loc_002CEEA8: ;
    esp = esp + 8;
    SET_LO8(eax, LO8(eax) + 0xA);
    MEM8(esi + 0x13E) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 8));
    MEM8(esi + 0x139) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 9));
    MEM8(esi + 0x13A) = LO8(eax);

loc_002CEEC5: ;
    POP32(esp, edi);

loc_002CEEC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CEED0
 * Original: 0x002CEED0 - 0x002CEF34 (100 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CEED0: ;
    if (CMP_EQ(MEM16(eax + 0x3AE), 0)) { sub_002CEF34(); return; } /* je: equal / zero */

loc_002CEEDA: ;
    SET_LO8(edx, MEM8(eax + 0x140));
    if (CMP_EQ(LO8(edx), MEM8(eax + 0x141))) goto loc_002CEF23; /* je: equal / zero */

loc_002CEEE8: ;
    SET_LO8(ecx, MEM8(eax + 0x3A9));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002CEF01; /* je: equal / zero */

loc_002CEEF2: ;
    eax = MEM32(eax + 0x50C);
    ecx = ZX8(LO8(ecx));
    eax = MEM32(eax + ecx * 4 + -4);
    goto loc_002CEF09;

loc_002CEF01: ;
    ecx = MEM32(eax + 0x50C);
    eax = MEM32(ecx);

loc_002CEF09: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = ZX8(LO8(edx));
    if (TEST_Z(eax, eax)) goto loc_002CEF29; /* je: equal / zero */

loc_002CEF10: ;
    if (CMP_EQ(eax, 0x111)) goto loc_002CEF29; /* je: equal / zero */

loc_002CEF17: ;
    if (CMP_EQ(eax, 0x114)) goto loc_002CEF29; /* je: equal / zero */

loc_002CEF1E: ;
    if (CMP_NE(eax, 0x52)) { sub_002CEF34(); return; } /* jne: not equal / not zero */

loc_002CEF23: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_002CEF29: ;
    if (CMP_NE(ecx, 0x15)) { sub_002CEF34(); return; } /* jne: not equal / not zero */

loc_002CEF2E: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002CEF40
 * Original: 0x002CEF40 - 0x002CEFB5 (117 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEF40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEF40: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM8(esi + 0xA1), 2)) { sub_002CEFB5(); return; } /* je: equal / zero */

loc_002CEF4C: ;
    SET_LO16(eax, MEM16(esi + 0x144));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_002CEF85; /* je: equal / zero */

loc_002CEF58: ;
    if (CMP_EQ(LO16(eax), 0xFFFE)) { sub_002CEFB5(); return; } /* je: equal / zero */

loc_002CEF5E: ;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_002CEF85; /* je: equal / zero */

loc_002CEF64: ;
    ecx = MEM32(0x7FA20C);
    edx = ZX16(LO16(eax));
    if (CMP_LE(edx, ecx)) goto loc_002CEF7C; /* jle: less or equal (signed <=) */

loc_002CEF71: ;
    eax = eax - ecx;
    MEM16(esi + 0x144) = LO16(eax);
    goto loc_002CEF85;

loc_002CEF7C: ;
    MEM16(esi + 0x144) = 0;

loc_002CEF85: ;
    eax = esi;
    PUSH32(esp, 0); sub_002CEED0(); /* call 0x002CEED0 */

loc_002CEF8C: ;
    if (TEST_Z(eax, eax)) goto loc_002CEF95; /* je: equal / zero */

loc_002CEF90: ;
    PUSH32(esp, 0); sub_002CEB90(); /* call 0x002CEB90 */

loc_002CEF95: ;
    if (CMP_NE(MEM16(esi + 0x144), 0)) { sub_002CEFB5(); return; } /* jne: not equal / not zero */

loc_002CEF9F: ;
    SET_LO8(eax, MEM8(esi + 0x140));
    if (CMP_EQ(LO8(eax), MEM8(esi + 0x141))) { sub_002CEFB5(); return; } /* je: equal / zero */

loc_002CEFAD: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002CF1C0(); return; /* tail jmp 0x002CF1C0 */

}

/**
 * sub_002CEFC0
 * Original: 0x002CEFC0 - 0x002CF0D6 (278 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CEFC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CEFC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(ecx, MEM8(esp + 8));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edi + 0x140));
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esp + 0x14));
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002CEFEE; /* jne: not equal / not zero */

loc_002CEFD9: ;
    if (CMP_NE(LO8(ecx), MEM8(edi + 0x142))) goto loc_002CEFEE; /* jne: not equal / not zero */

loc_002CEFE1: ;
    if (CMP_EQ(LO16(ebp), MEM16(edi + 0x144))) goto loc_002CF0D3; /* je: equal / zero */

loc_002CEFEE: ;
    if (CMP_EQ(LO8(ecx), 3)) goto loc_002CF015; /* je: equal / zero */

loc_002CEFF3: ;
    if (CMP_EQ(LO8(ebx), MEM8(edi + 0x141))) goto loc_002CF015; /* je: equal / zero */

loc_002CEFFB: ;
    if (CMP_EQ(LO8(ebx), LO8(eax))) goto loc_002CF015; /* je: equal / zero */

loc_002CEFFF: ;
    if (CMP_EQ(MEM16(edi + 0x144), 0)) goto loc_002CF015; /* je: equal / zero */

loc_002CF009: ;
    if (CMP_AE(MEM8(edi + 0x142), LO8(ecx))) goto loc_002CF0D3; /* jae: above or equal (unsigned >=) */

loc_002CF015: ;
    eax = MEM32(0x742F98);
    edx = MEM32(edi + 0x68);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002CF035; /* je: equal / zero */

loc_002CF024: ;
    if (CMP_EQ(eax, edx)) goto loc_002CF06F; /* je: equal / zero */

loc_002CF028: ;
    eax = MEM32(ecx * 4 + 0x742F9C);
    ecx++;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002CF024; /* jne: not equal / not zero */

loc_002CF035: ;
    ecx = 0; /* xor self */

loc_002CF037: ;
    eax = ZX8(MEM8(esp + 0xC));
    if (CMP_GE(eax, ecx)) goto loc_002CF0D3; /* jge: greater or equal (signed >=) */

loc_002CF044: ;
    PUSH32(esp, esi);
    esi = ZX8(LO8(ebx));
    edx = edi;
    PUSH32(esp, 0); sub_002CF0E0(); /* call 0x002CF0E0 */

loc_002CF04F: ;
    SET_LO8(eax, MEM8(eax + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CF0AC; /* je: equal / zero */

loc_002CF056: ;
    SET_LO8(ecx, MEM8(edi + 0x3A9));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002CF078; /* je: equal / zero */

loc_002CF060: ;
    edx = MEM32(edi + 0x50C);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(edx + ecx * 4 + -4);
    goto loc_002CF080;

loc_002CF06F: ;
    ecx = MEM32(ecx * 4 + 0x86F380);
    goto loc_002CF037;

loc_002CF078: ;
    ecx = MEM32(edi + 0x50C);
    ecx = MEM32(ecx);

loc_002CF080: ;
    if (TEST_Z(ecx, ecx)) goto loc_002CF094; /* je: equal / zero */

loc_002CF084: ;
    if (CMP_EQ(ecx, 0x111)) goto loc_002CF094; /* je: equal / zero */

loc_002CF08C: ;
    if (CMP_NE(ecx, 0x114)) goto loc_002CF0AC; /* jne: not equal / not zero */

loc_002CF094: ;
    edx = ZX8(LO8(eax));
    ebx = ZX8(MEM8(edx + 0x59C497));
    PUSH32(esp, edi);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00076E40(); /* call 0x00076E40 */

loc_002CF0A9: ;
    esp = esp + 4;

loc_002CF0AC: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(ecx, MEM8(esp + 0x14));
    ebx = MEM32(esp + 0x1C);
    esi = edi;
    MEM8(edi + 0x140) = LO8(eax);
    MEM16(edi + 0x144) = LO16(ebp);
    MEM8(edi + 0x142) = LO8(ecx);
    PUSH32(esp, 0); sub_002CEE10(); /* call 0x002CEE10 */

loc_002CF0D2: ;
    POP32(esp, esi);

loc_002CF0D3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF0E0
 * Original: 0x002CF0E0 - 0x002CF104 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF0E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CF0E0: ;
    eax = MEM32(0x742F98);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002CF101; /* je: equal / zero */

loc_002CF0EC: ;
    edx = MEM32(edx + 0x70);
    /* nop */

loc_002CF0F0: ;
    if (CMP_EQ(eax, edx)) { sub_002CF104(); return; } /* je: equal / zero */

loc_002CF0F4: ;
    eax = MEM32(ecx * 4 + 0x742F9C);
    ecx++;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002CF0F0; /* jne: not equal / not zero */

loc_002CF101: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002CF120
 * Original: 0x002CF120 - 0x002CF144 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF120(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CF120: ;
    edx = MEM32(eax + 0x68);
    eax = MEM32(0x742F98);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002CF141; /* je: equal / zero */

loc_002CF12F: ;
    /* nop */

loc_002CF130: ;
    if (CMP_EQ(eax, edx)) { sub_002CF144(); return; } /* je: equal / zero */

loc_002CF134: ;
    eax = MEM32(ecx * 4 + 0x742F9C);
    ecx++;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002CF130; /* jne: not equal / not zero */

loc_002CF141: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002CF150
 * Original: 0x002CF150 - 0x002CF1B7 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF150(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002CF150: ;
    if (TEST_Z(edx, edx)) goto loc_002CF1B6; /* je: equal / zero */

loc_002CF154: ;
    SET_LO8(ecx, MEM8(eax + 0x3A9));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002CF16F; /* je: equal / zero */

loc_002CF15E: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x50C);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(esi + ecx * 4 + -4);
    POP32(esp, esi);
    goto loc_002CF177;

loc_002CF16F: ;
    ecx = MEM32(eax + 0x50C);
    ecx = MEM32(ecx);

loc_002CF177: ;
    if (TEST_Z(ecx, ecx)) goto loc_002CF18B; /* je: equal / zero */

loc_002CF17B: ;
    if (CMP_EQ(ecx, 0x111)) goto loc_002CF18B; /* je: equal / zero */

loc_002CF183: ;
    if (CMP_NE(ecx, 0x114)) goto loc_002CF1B6; /* jne: not equal / not zero */

loc_002CF18B: ;
    edx = ZX8(MEM8(edx + 0x59C497));
    xmm0 = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002B37D0(); /* call 0x002B37D0 */

loc_002CF1B3: ;
    esp = esp + 0x18;

loc_002CF1B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002CF1C0
 * Original: 0x002CF1C0 - 0x002CF21A (90 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF1C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002CF1C0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x141));
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002CEFC0(); /* call 0x002CEFC0 */

loc_002CF1DA: ;
    SET_LO8(ecx, MEM8(edi + 0x13D));
    eax = 0; /* xor self */
    esp = esp + 0x10;
    (void)0; /* cmp LO8(ecx), 0xA - flags set for next jcc */
    MEM8(edi + 0x142) = LO8(eax);
    MEM16(edi + 0x144) = LO16(eax);
    if (CMP_B(LO8(ecx), 0xA)) goto loc_002CF203; /* jb: below (unsigned <) */

loc_002CF1F7: ;
    MEM8(edi + 0x13D) = LO8(eax);
    MEM8(edi + 0x13B) = LO8(eax);

loc_002CF203: ;
    if (CMP_B(MEM8(edi + 0x13E), 0xA)) goto loc_002CF218; /* jb: below (unsigned <) */

loc_002CF20C: ;
    MEM8(edi + 0x13E) = LO8(eax);
    MEM8(edi + 0x13C) = LO8(eax);

loc_002CF218: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF220
 * Original: 0x002CF220 - 0x002CF236 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CF220: ;
    SET_LO8(ecx, MEM8(eax + 0x141));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_002CF236(); return; } /* je: equal / zero */

loc_002CF22A: ;
    MEM8(eax + 0x141) = 0;
    g_seh_ebp = ebp; sub_002CF1C0(); return; /* tail jmp 0x002CF1C0 */

}

/**
 * sub_002CF240
 * Original: 0x002CF240 - 0x002CF256 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CF240: ;
    edx = ZX8(MEM8(eax + 0x141));
    if (CMP_EQ(ecx, edx)) { sub_002CF256(); return; } /* je: equal / zero */

loc_002CF24B: ;
    MEM8(eax + 0x141) = LO8(ecx);
    g_seh_ebp = ebp; sub_002CF1C0(); return; /* tail jmp 0x002CF1C0 */

}

/**
 * sub_002CF260
 * Original: 0x002CF260 - 0x002CF29A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF260(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002CF260: ;
    if (TEST_Z(eax, eax)) { sub_002CF29A(); return; } /* je: equal / zero */

loc_002CF264: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = eax + ecx + -1744;
    if (CMP_NE(MEM32(eax + 0x68), 0x18A)) { sub_002CF29A(); return; } /* jne: not equal / not zero */

loc_002CF280: ;
    xmm0 = MEMF(edx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x7C); /* subss */
    xmm1 = MEMF(0x648F4C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_002CF29A(); return; } /* jbe: below or equal (unsigned <=) */

loc_002CF297: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002CF2A0
 * Original: 0x002CF2A0 - 0x002CF86B (1483 bytes, 358 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CF2A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CF2A0: ;
    SET_LO8(eax, MEM8(ebx + 4));
    esp = esp - 0xB4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xBC);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002CF861; /* je: equal / zero */

loc_002CF2B9: ;
    (void)0; /* cmp MEM8(ebx + 7), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ebx + 8) = 0;
    if (CMP_NE(MEM8(ebx + 7), 1)) goto loc_002CF51F; /* jne: not equal / not zero */

loc_002CF2C9: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_002CF900(); /* call 0x002CF900 */

loc_002CF2D0: ;
    ecx = eax;
    if (TEST_Z(ecx, ecx)) goto loc_002CF51B; /* je: equal / zero */

loc_002CF2DA: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = ebp + 0x78;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x48);
    edi = esp + 0xA8;
    PUSH32(esp, 0); sub_002CF870(); /* call 0x002CF870 */

loc_002CF2F7: ;
    esi = ebx + 0x18;
    edx = esp + 0x78;
    ecx = esi;
    PUSH32(esp, 0); sub_003E5430(); /* call 0x003E5430 */

loc_002CF305: ;
    xmm0 = MEMF(ebx + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x84); /* mulss */
    xmm1 = MEMF(ebx + 0xC); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x78); /* mulss */
    xmm2 = MEMF(ebx + 0xC); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x7C); /* mulss */
    xmm3 = MEMF(ebx + 0xC); /* movss */
    xmm3 = xmm3 * MEMF(esp + 0x80); /* mulss */
    xmm4 = MEMF(esp + 0xAC); /* movss */
    eax = ebx + 0xC;
    xmm5 = MEMF(esp + 0xB0); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x90); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x88); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x94); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x8C); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm3 = xmm3 * MEMF(esp + 0x98); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm3 = MEMF(esp + 0xB8); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(esp + 0xA0); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(esp + 0xBC); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0xA4); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0xB4); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0xA8); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x9C); /* movss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = esp + 0x60;
    edx = esp + 0x3C;
    xmm5 = xmm5 + xmm1; /* addss */
    MEMF(esp + 0x60) = xmm5; /* movss */
    MEMF(esp + 0x64) = xmm3; /* movss */
    MEMF(esp + 0x68) = xmm4; /* movss */
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
    eax = ebx + 0x3C;
    ecx = esp + 0x48;
    edx = esp + 0x6C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x3C;
    MEM32(esp + 0x14) = eax;
    ecx = esp + 0x6C;
    edx = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ebx + 0x64;
    ecx = esi;
    PUSH32(esp, 0); sub_003E5430(); /* call 0x003E5430 */

loc_002CF4F7: ;
    eax = edx;
    ecx = edi;
    PUSH32(esp, 0); sub_003E5290(); /* call 0x003E5290 */

loc_002CF500: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    eax = ebx + 0x58;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM8(ebx + 8) = 1;

loc_002CF51B: ;
    MEM8(ebx + 7) = 0;

loc_002CF51F: ;
    xmm2 = MEMF(esp + 0xD4); /* movss */
    xmm3 = MEMF(0x648EA4); /* movss */
    MEM8(ebx + 7) = 0;
    eax = ZX8(MEM8(ebp + 0x473));
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = xmm2; /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm0 = xmm0 - xmm3; /* subss */
    if (TEST_Z(eax, eax)) goto loc_002CF591; /* je: equal / zero */

loc_002CF54D: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(eax + edx + -1640);
    (void)0; /* cmp ecx, 0x18A - flags set for next jcc */
    eax = eax + edx + -1744;
    if (CMP_NE(ecx, 0x18A)) goto loc_002CF591; /* jne: not equal / not zero */

loc_002CF56F: ;
    xmm3 = MEMF(ebp + 0x7C); /* movss */
    xmm3 = xmm3 - MEMF(eax + 0x7C); /* subss */
    xmm4 = MEMF(0x648F4C); /* movss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_002CF591; /* jbe: below or equal (unsigned <=) */

loc_002CF586: ;
    xmm2 = xmm2 - MEMF(0x5A0060); /* subss */
    xmm0 = xmm2; /* movaps */

loc_002CF591: ;
    xmm2 = MEMF(esp + 0xCC); /* movss */
    eax = ebp + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x38) = eax;
    (void)0; /* cmp MEM8(ebx + 8), 1 - flags set for next jcc */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xD0); /* movss */
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    if (CMP_NE(MEM8(ebx + 8), 1)) goto loc_002CF696; /* jne: not equal / not zero */

loc_002CF5E8: ;
    ecx = esp + 0x24;
    esi = ebx + 0x58;
    edx = ecx;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x18;
    ecx = eax;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_002CF696: ;
    SET_LO8(eax, MEM8(ebp + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CF85F; /* jne: not equal / not zero */

loc_002CF6A4: ;
    ecx = MEM32(esp + 0xC8);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    edx = esp + 0x28;
    edi = 0x870ED4;
    PUSH32(esp, 0); sub_002CFB40(); /* call 0x002CFB40 */

loc_002CF6BE: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_002CF85F; /* je: equal / zero */

loc_002CF6C7: ;
    goto loc_002CF6D0;

loc_002CF6C9: ;
    eax = MEM32(esp + 0xC);
    /* nop */

loc_002CF6D0: ;
    ebp = MEM32(eax);
    eax = eax + 4;
    PUSH32(esp, 1);
    esi = ebp;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_0030F130(); /* call 0x0030F130 */

loc_002CF6E2: ;
    ecx = MEM32(ebp + 0x4B0);
    xmm0 = MEMF(0x648D14); /* movss */
    edi = 0; /* xor self */
    MEM32(0x76FC50) = edi;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = edi;
    edx = MEM32(ebp + 0x5D4);
    MEM32(0x812A18) = edx;
    MEM32(0x819B24) = 1;
    SET_LO8(eax, MEM8(ebp + 0x3C1));
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x84B568) = 1;
    MEM32(0x84B544) = edi;
    MEM32(0x84B55C) = edi;
    MEM32(0x84B548) = edi;
    MEM32(0x84B560) = edi;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002CF758; /* jne: not equal / not zero */

loc_002CF74B: ;
    (void)0; /* cmp MEM32(ebp + 0x3C4), edi - flags set for next jcc */
    eax = 0x5A0350;
    if (CMP_NE(MEM32(ebp + 0x3C4), edi)) goto loc_002CF75A; /* jne: not equal / not zero */

loc_002CF758: ;
    eax = ebp;

loc_002CF75A: ;
    ecx = MEM32(ecx + 0x24);
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_002CF778: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002CF7C0; /* je: equal / zero */

loc_002CF77F: ;
    if (CMP_BE(MEM32(0x76FC50), edi)) goto loc_002CF7C0; /* jbe: below or equal (unsigned <=) */

loc_002CF787: ;
    PUSH32(esp, edi);
    esi = ebp;
    PUSH32(esp, 0); sub_0030F130(); /* call 0x0030F130 */

loc_002CF78F: ;
    edx = MEM32(0x76FC4C);
    eax = MEM32(edx + 0x8C);
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) goto loc_002CF7C0; /* je: equal / zero */

loc_002CF7A2: ;
    if (CMP_EQ(MEM32(eax + 0x10), 9)) goto loc_002CF7B0; /* je: equal / zero */

loc_002CF7A8: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, edi)) goto loc_002CF7A2; /* jne: not equal / not zero */

loc_002CF7AE: ;
    goto loc_002CF7C0;

loc_002CF7B0: ;
    eax = ZX16(MEM16(eax + 0xDA));
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002CF7E5; /* jne: not equal / not zero */

loc_002CF7C0: ;
    PUSH32(esp, edi);
    esi = ebp;
    PUSH32(esp, 0); sub_0030F130(); /* call 0x0030F130 */

loc_002CF7C8: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    esp = esp + 4;
    if (CMP_NE(ecx, edi)) goto loc_002CF6C9; /* jne: not equal / not zero */

loc_002CF7D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xB4;
    esp += 24; return; /* ret 20 */

loc_002CF7E5: ;
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edi = esp + 0x84;
    ecx = ebp;
    PUSH32(esp, 0); sub_002CF870(); /* call 0x002CF870 */

loc_002CF802: ;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x58);
    edx = ebx + 0xC;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x4C);
    edi = ebx + 0x18;
    ecx = 9;
    esi = esp + 0x78;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx + 0x3C;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 8) = edx;
    MEM32(ebx + 0x48) = eax;
    ecx = ZX16(MEM16(ebp + 0x60));
    MEM32(ebx + 0x4C) = ecx;
    edx = MEM32(ebp + 0xB0);
    MEM32(ebx + 0x50) = edx;
    eax = MEM32(ebp + 0x64);
    MEM32(ebx + 0x54) = eax;
    MEM8(ebx + 7) = 1;

loc_002CF85F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002CF861: ;
    POP32(esp, ebp);
    esp = esp + 0xB4;
    esp += 24; return; /* ret 20 */

}
